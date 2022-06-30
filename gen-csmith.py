import subprocess
from tempfile import NamedTemporaryFile
import sys
import multiprocessing

def preprocess(src):
  cmd = 'clang - -x c -I/usr/local/include/csmith-2.3.0/ -o - -E'
  return subprocess.check_output(cmd.split(), input=src)

def save(src, expected, fname):
  with open(fname, 'wb') as outf:
    outf.write('// RUN: %clang -O3 %s -o %t && %t | FileCheck %s\n'.encode())
    outf.write('// CHECK: {}\n'.format(expected).encode())
    outf.write(preprocess(src))

def run_csmith(seed):
  print('testing seed', seed)
  src = subprocess.check_output(['csmith', '--seed', str(seed), '--no-volatiles', '--no-volatile-pointers'], stderr=subprocess.DEVNULL)
  with NamedTemporaryFile(suffix='.c') as src_f\
      , NamedTemporaryFile() as clang_exe\
      , NamedTemporaryFile() as pssa_exe:
    src_f.write(src)
    src_f.flush()
    subprocess.check_call(['clang', src_f.name, '-O3', '-o', clang_exe.name, '-I/usr/local/include/csmith-2.3.0/'], stderr=subprocess.DEVNULL)
    try:
      clang_out = subprocess.check_output([clang_exe.name], stderr=subprocess.DEVNULL, timeout=1)
    except:
      print('clang binary timed out, seed =', seed)
      return None
    return src, seed, clang_out.decode().strip()

default_outdir = 'csmith'

if __name__ == '__main__':
  with multiprocessing.Pool(8) as p:
    for res in p.imap_unordered(run_csmith, range(100)):
      if not res:
        continue
      src, s, expected = res
      save(src, expected, default_outdir+'/'+str(s)+'.c')
