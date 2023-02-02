# util to generate checks *specifically for global-slp*
import subprocess
import sys
from tempfile import NamedTemporaryFile
import os

llvm_root = subprocess.check_output(['llvm-config', '--src-root']).decode().strip()
build_dir = os.path.dirname(subprocess.check_output(['which', 'pssa-opt']).decode().strip())

in_filename, out_filename, *args = sys.argv[1:]

with NamedTemporaryFile(suffix='.ll', mode='w', delete=False) as f:
  print(f'; RUN: opt -load-pass-plugin {build_dir}/lib/libPSSA.so %s -S {" ".join(args)} | FileCheck %s\n')
  f.write(f'; RUN: opt -load-pass-plugin {build_dir}/lib/libPSSA.so %s -S {" ".join(args)} | FileCheck %s\n')
  with open(in_filename) as src_f:
    f.write(src_f.read())
  f.flush()

  subprocess.call([llvm_root + '/utils/update_test_checks.py',  '--opt=opt', f.name])
  subprocess.call(['cp', f.name, out_filename])
