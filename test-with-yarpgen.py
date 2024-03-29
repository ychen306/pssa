import tempfile
import subprocess
import os
import shutil

gcc = 'g++-12'
clang = 'clang++'
vegen = 'vegen-clang++'

def compile_and_run(compiler):
  try:
    extra_args = []
    if compiler == vegen:
        extra_args = ['-mllvm', '-do-versioning', '-mllvm', '-unroll-loops']
    subprocess.check_call([compiler, '-O3', 'func.cpp', 'driver.o']+extra_args, stderr=subprocess.DEVNULL, timeout=1200)
    return subprocess.check_output(['./a.out'], timeout=300).decode()
  except Exception as e:
    return None

outdir = os.getcwd() + '/yarpgen_bugs'

def test(seed):
  print('Testing with seed', seed)
  with tempfile.TemporaryDirectory() as tmpdir:
    os.chdir(tmpdir)
    subprocess.call(['yarpgen', f'--seed={seed}'], stdout=subprocess.DEVNULL)

    retcode = subprocess.call(['c++', 'driver.cpp', '-c'], stderr=subprocess.DEVNULL)
    if retcode != 0:
      return None

    gcc_out = compile_and_run(gcc)
    clang_out = compile_and_run(clang)
    if gcc_out is None or clang_out is None or gcc_out != clang_out:
      #print('Found bug in clang/gcc')
      return None

    with open('func.cpp') as f:
      lines = list(f)
    pragma_locs = [i for i, line in enumerate(lines) if line.strip() == '#pragma test_vegen']

    def test_vegen():
      # Test the slp vectorizer on each loops separately
      vegen_out = compile_and_run(vegen)
      if vegen_out != clang_out:
        print('Found bug', vegen_out, clang_out)
        subdir = f'{outdir}/seed_{seed}'
        os.makedirs(subdir)
        shutil.copyfile('func.cpp', subdir + '/func.cpp')
        shutil.copyfile('driver.cpp', subdir + '/driver.cpp')
        shutil.copyfile('init.h', subdir + '/init.h')
        return False
      return True

    # first run without unrolling any loops
    ok = test_vegen()
    if not ok:
      return False

    # individually replace the test_vegen pragma with `#pragma unroll 8`
    for loc in pragma_locs:
      with open('func.cpp', 'w') as f:
        for i, line in enumerate(lines):
          if i != loc:
            f.write(line)
          else:
            f.write('#pragma unroll 8\n')
      ok = test_vegen()
      if not ok:
        return False
    #print('VeGen appear to be correct')
    return True

if __name__ == '__main__':
  import multiprocessing

  if not os.path.exists(outdir):
    os.makedirs(outdir)

  p = multiprocessing.Pool(8)
  seeds = range(0, 1_000_000_000)
  for _ in p.imap_unordered(test, seeds):
    pass
