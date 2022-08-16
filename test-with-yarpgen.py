import tempfile
import subprocess
import os
import shutil

gcc = 'g++-11'
clang = 'clang++'
vegen = 'pssa-clang++'

def compile_and_run(compiler):
  try:
    subprocess.check_call([compiler, '-O3', 'func.cpp', 'driver.cpp'], stderr=subprocess.DEVNULL, timeout=20)
    return subprocess.check_output(['./a.out'], timeout=20).decode()
  except:
    return None

outdir = os.getcwd() + '/yarpgen_bugs'

def test(seed):
  print('Testing with seed', seed)
  with tempfile.TemporaryDirectory() as tmpdir:
    os.chdir(tmpdir)
    subprocess.call(['yarpgen', f'--seed={seed}', '--inp-as-args=none'], stdout=subprocess.DEVNULL)
    gcc_out = compile_and_run(gcc)
    clang_out = compile_and_run(clang)
    if gcc_out is None or clang_out is None or gcc_out != clang_out:
      #print('Found bug in clang/gcc')
      return None
    vegen_out = compile_and_run(vegen)
    if vegen_out != clang_out:
      print('Found bug')
      subdir = f'{outdir}/seed_{seed}'
      os.makedirs(subdir)
      shutil.copyfile('func.cpp', subdir + '/func.cpp')
      shutil.copyfile('driver.cpp', subdir + '/driver.cpp')
      shutil.copyfile('init.h', subdir + '/init.h')
      return False
    #print('VeGen appear to be correct')
    return True

if __name__ == '__main__':
  import multiprocessing

  if not os.path.exists(outdir):
    os.makedirs(outdir)

  p = multiprocessing.Pool(8)
  seeds = range(9000, 1_000_000_000)
  for _ in p.imap_unordered(test, seeds):
    pass
