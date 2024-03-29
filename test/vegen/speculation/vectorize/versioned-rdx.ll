; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: opt -load-pass-plugin /Users/tom/workspace/pssa/build/lib/libPSSA.so %s -S -passes=global-slp -do-versioning | FileCheck %s
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; CHECK:    call i16 @llvm.vector.reduce.smin.v4i16

define i16 @_Z1ePA6_A6_c(ptr %f, ptr %arrayidx9.us39) #0 {
for.cond1.preheader.us.preheader:
  br i1 false, label %for.body5.us36.preheader, label %for.body5.us.us.preheader

for.body5.us.us.preheader:                        ; preds = %for.cond1.preheader.us.preheader
  br label %for.body5.us.us

for.body5.us36.preheader:                         ; preds = %for.cond1.preheader.us.preheader
  br label %for.body5.us36.preheader.new

for.body5.us36.preheader.new:                     ; preds = %for.body5.us36.preheader
  br label %for.body5.us36

for.body5.us36:                                   ; preds = %for.inc.us.7, %for.body5.us36.preheader.new
  %0 = phi i16 [ 0, %for.body5.us36.preheader.new ], [ %13, %for.inc.us.7 ]
  %1 = load i8, ptr null, align 1
  %2 = xor i8 %1, 0
  %narrow.us41 = select i1 false, i8 0, i8 %2
  %conv12.us42 = sext i8 %narrow.us41 to i16
  %3 = tail call i16 @llvm.smin.i16(i16 %0, i16 %conv12.us42)
  store i16 %3, ptr %arrayidx9.us39, align 2
  %4 = load i64, ptr %f, align 8
  %tobool.not.us = icmp eq i64 %4, 0
  br i1 %tobool.not.us, label %if.then.us, label %for.inc.us

if.then.us:                                       ; preds = %for.body5.us36
  store i64 0, ptr null, align 8
  br label %for.inc.us

for.inc.us:                                       ; preds = %if.then.us, %for.body5.us36
  %5 = load i8, ptr null, align 1
  %6 = xor i8 %5, 0
  %narrow.us41.1 = select i1 false, i8 0, i8 %6
  %conv12.us42.1 = sext i8 %narrow.us41.1 to i16
  %7 = tail call i16 @llvm.smin.i16(i16 %3, i16 %conv12.us42.1)
  br label %for.inc.us.5

for.inc.us.5:                                     ; preds = %for.inc.us
  %arrayidx9.us39.6 = getelementptr inbounds [6 x [6 x i8]], ptr %f, i64 0, i64 1, i64 0
  %8 = load i8, ptr %arrayidx9.us39.6, align 1
  %9 = xor i8 %8, 0
  %narrow.us41.6 = select i1 false, i8 0, i8 %9
  %conv12.us42.6 = sext i8 %narrow.us41.6 to i16
  %10 = tail call i16 @llvm.smin.i16(i16 %7, i16 %conv12.us42.6)
  br label %for.inc.us.6

for.inc.us.6:                                     ; preds = %for.inc.us.5
  %indvars.iv.next51.6 = add nuw nsw i64 0, 1
  %arrayidx9.us39.7 = getelementptr inbounds [6 x [6 x i8]], ptr %f, i64 0, i64 1, i64 %indvars.iv.next51.6
  %11 = load i8, ptr %arrayidx9.us39.7, align 1
  %12 = xor i8 %11, 0
  %narrow.us41.7 = select i1 false, i8 0, i8 %12
  %conv12.us42.7 = sext i8 %narrow.us41.7 to i16
  %13 = tail call i16 @llvm.smin.i16(i16 %10, i16 %conv12.us42.7)
  br label %for.inc.us.7

for.inc.us.7:                                     ; preds = %for.inc.us.6
  br i1 false, label %for.cond.cleanup.loopexit.unr-lcssa.loopexit, label %for.body5.us36

for.body5.us.us:                                  ; preds = %for.body5.us.us, %for.body5.us.us.preheader
  br i1 false, label %for.cond.cleanup.loopexit57, label %for.body5.us.us

for.cond.cleanup.loopexit.unr-lcssa.loopexit:     ; preds = %for.inc.us.7
  %.unr.ph = phi i16 [ %13, %for.inc.us.7 ]
  br label %for.cond.cleanup.loopexit

for.cond.cleanup.loopexit:                        ; preds = %for.cond.cleanup.loopexit.unr-lcssa.loopexit
  br label %for.cond.cleanup

for.cond.cleanup.loopexit57:                      ; preds = %for.body5.us.us
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit57, %for.cond.cleanup.loopexit
  %retval = phi i16 [ %.unr.ph, %for.cond.cleanup.loopexit ], [ 0, %for.cond.cleanup.loopexit57 ]
  ret i16 %retval
}

; Function Attrs: nocallback nofree nosync nounwind readnone speculatable willreturn
declare i16 @llvm.smin.i16(i16, i16) #1

; uselistorder directives
uselistorder ptr @llvm.smin.i16, { 3, 2, 1, 0 }

attributes #0 = { "target-cpu"="penryn" }
attributes #1 = { nocallback nofree nosync nounwind readnone speculatable willreturn }
