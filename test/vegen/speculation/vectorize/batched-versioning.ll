; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=global-slp -do-versioning | FileCheck %s
; ModuleID = 'yarpgen920.ll'
source_filename = "yarpgen920.ll"
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; CHECK:    call i8 @llvm.vector.reduce.umin.v8i8

define i8 @_Z1obPA1_A1_A1_i(ptr %p2, ptr %arrayidx6, i64 %idxprom7) #0 {
for.body.lr.ph:
  %arrayidx8 = getelementptr inbounds [1 x i32], ptr %arrayidx6, i64 0, i64 %idxprom7
  br label %for.body.lr.ph.new

for.body.lr.ph.new:                               ; preds = %for.body.lr.ph
  br label %for.body

for.cond.cleanup.loopexit.unr-lcssa.loopexit:     ; preds = %for.body
  %.unr.ph = phi i8 [ %i16, %for.body ]
  ret i8 %.unr.ph

for.body:                                         ; preds = %for.body, %for.body.lr.ph.new
  %i = phi i8 [ 0, %for.body.lr.ph.new ], [ %i16, %for.body ]
  %i1 = load i32, ptr %arrayidx8, align 4
  %neg = xor i32 %i1, 0
  %cmp.i.i.i = icmp slt i32 %neg, 0
  %conv10 = zext i1 %cmp.i.i.i to i8
  %i2 = tail call i8 @llvm.umin.i8(i8 %conv10, i8 %i)
  %i3 = load i32, ptr %arrayidx8, align 4
  %neg.1 = xor i32 %i3, 0
  %cmp.i.i.i.1 = icmp slt i32 %neg.1, 0
  %conv10.1 = zext i1 %cmp.i.i.i.1 to i8
  %i4 = tail call i8 @llvm.umin.i8(i8 %conv10.1, i8 %i2)
  store i8 0, ptr %arrayidx6, align 1
  %i5 = load i32, ptr %arrayidx8, align 4
  %neg.2 = xor i32 %i5, 0
  %cmp.i.i.i.2 = icmp slt i32 %neg.2, 0
  %conv10.2 = zext i1 %cmp.i.i.i.2 to i8
  %i6 = tail call i8 @llvm.umin.i8(i8 %conv10.2, i8 %i4)
  store i8 %i2, ptr %p2, align 1
  %i7 = load i32, ptr %arrayidx8, align 4
  %neg.3 = xor i32 %i7, 0
  %cmp.i.i.i.3 = icmp slt i32 %neg.3, 0
  %conv10.3 = zext i1 %cmp.i.i.i.3 to i8
  %i8 = tail call i8 @llvm.umin.i8(i8 %conv10.3, i8 %i6)
  %i9 = load i32, ptr %arrayidx8, align 4
  %neg.4 = xor i32 %i9, 0
  %cmp.i.i.i.4 = icmp slt i32 %neg.4, 0
  %conv10.4 = zext i1 %cmp.i.i.i.4 to i8
  %i10 = tail call i8 @llvm.umin.i8(i8 %conv10.4, i8 %i8)
  %i11 = load i32, ptr %arrayidx8, align 4
  %neg.5 = xor i32 %i11, 0
  %cmp.i.i.i.5 = icmp slt i32 %neg.5, 0
  %conv10.5 = zext i1 %cmp.i.i.i.5 to i8
  %i12 = tail call i8 @llvm.umin.i8(i8 %conv10.5, i8 %i10)
  %i13 = load i32, ptr %arrayidx8, align 4
  %neg.6 = xor i32 %i13, 0
  %cmp.i.i.i.6 = icmp slt i32 %neg.6, 0
  %conv10.6 = zext i1 %cmp.i.i.i.6 to i8
  %i14 = tail call i8 @llvm.umin.i8(i8 %conv10.6, i8 %i12)
  %i15 = load i32, ptr %arrayidx8, align 4
  %neg.7 = xor i32 %i15, 0
  %cmp.i.i.i.7 = icmp slt i32 %neg.7, 0
  %conv10.7 = zext i1 %cmp.i.i.i.7 to i8
  %i16 = tail call i8 @llvm.umin.i8(i8 %conv10.7, i8 %i14)
  br i1 false, label %for.body, label %for.cond.cleanup.loopexit.unr-lcssa.loopexit
}

; Function Attrs: nocallback nofree nosync nounwind readnone speculatable willreturn
declare i8 @llvm.umin.i8(i8, i8) #1

attributes #0 = { "target-cpu"="penryn" }
attributes #1 = { nocallback nofree nosync nounwind readnone speculatable willreturn }
