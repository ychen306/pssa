; RUN: %opt -passes=test-vector-codegen,verify -p i3,i7 -S %s | FileCheck %s

target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; It should be packable and the store should follow the load

; CHECK: load <2 x float>, ptr %arrayidx10, align 4
; CHECK: store float 0.000000e+00, ptr %arrayidx10, align 4

define void @_Z4fft4P10FFTComplex(ptr %z) {
entry:
  %arrayidx10 = getelementptr inbounds float, ptr %z, i64 1
  %i3 = load float, ptr %arrayidx10, align 4
  store float 0.000000e+00, ptr %arrayidx10, align 4
  %im45 = getelementptr inbounds float, ptr %z, i64 2
  %i7 = load float, ptr %im45, align 4
  ret void
}
