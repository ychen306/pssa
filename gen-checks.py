# util to generate checks *specifically for global-slp*
import subprocess
import sys
from tempfile import NamedTemporaryFile
import os

llvm_root = subprocess.check_output(['llvm-config', '--src-root']).decode().strip()
build_dir = os.path.dirname(subprocess.check_output(['which', 'pssa-opt']).decode().strip())

with NamedTemporaryFile(suffix='.ll', mode='w', delete=False) as f:
  f.write(f'; RUN: opt -load-pass-plugin {build_dir}/lib/libPSSA.so -passes=global-slp %s -S | FileCheck %s\n')
  with open(sys.argv[1]) as src_f:
    f.write(src_f.read())
  f.flush()

  subprocess.call([llvm_root + '/utils/update_test_checks.py',  '--opt=opt', f.name])
  subprocess.call(['cp', f.name, sys.argv[2]])
