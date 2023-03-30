// RUN: %clang -mllvm -vectorize-only=s352 -ffast-math -O3 -S -emit-llvm %s -o - | lli
// RUN: %clang -mllvm -vectorize-only=s352 -ffast-math -O3 -S -emit-llvm %s -o - -mllvm -unroll-loops | lli
// RUN: %clang -mllvm -vectorize-only=s352 -ffast-math -O3 -S -emit-llvm %s -o - | grep llvm.vector.reduce.fadd.v4f32
// RUN: %clang -mllvm -vectorize-only=s352 -ffast-math -O3 -S -emit-llvm %s -o - -mllvm -unroll-loops | grep llvm.vector.reduce.fadd.v4f32

float a[1000], b[1000];
__attribute__((noinline))
float s352(int n) {
  float dot = 0;
  for (int i = 0; i < n; i += 5) {
    dot = dot + a[i] * b[i] + a[i + 1] * b[i + 1] + a[i + 2] * b[i + 2] +
      a[i + 3] * b[i + 3] + a[i + 4] * b[i + 4];
  }
  return dot;
}

void abort();

int main() {
  int n = (8 + 3) * 5;
  for (int i = 0; i < n; i++) {
    a[i] = i;
    b[i] = n-i;
  }
  if ((int)s352(n) != 27720)
    abort();
}
