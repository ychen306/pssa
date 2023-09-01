; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=global-slp -do-versioning | FileCheck %s
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@c = external global i32

; CHECK: store <4 x i32>

define i32 @e() {
for.body.preheader:
  %c.promoted = load i32, ptr @c, align 4
  %0 = sext i32 %c.promoted to i64
  br label %for.body.preheader.new

for.body.preheader.new:                           ; preds = %for.body.preheader
  br label %for.body

for.body:                                         ; preds = %for.body, %for.body.preheader.new
  %indvars.iv13 = phi i64 [ 0, %for.body.preheader.new ], [ %indvars.iv.next14.7, %for.body ]
  %indvars.iv = phi i64 [ %0, %for.body.preheader.new ], [ %indvars.iv.next.7, %for.body ]
  %arrayidx4 = getelementptr inbounds i32, ptr @e, i64 %indvars.iv13
  store i32 0, ptr %arrayidx4, align 4
  %indvars.iv.next14 = add nsw i64 %indvars.iv13, 1
  %indvars.iv.next = add nsw i64 %indvars.iv, 1
  %arrayidx.1 = getelementptr inbounds i32, ptr @e, i64 %indvars.iv.next
  %1 = load i32, ptr %arrayidx.1, align 4
  %idxprom1.1 = sext i32 %1 to i64
  %arrayidx2.1 = getelementptr inbounds i32, ptr @e, i64 %idxprom1.1
  %2 = load i32, ptr %arrayidx2.1, align 4
  %arrayidx4.1 = getelementptr inbounds i32, ptr @e, i64 %indvars.iv.next14
  store i32 0, ptr %arrayidx4.1, align 4
  %indvars.iv.next14.1 = add nsw i64 %indvars.iv.next14, 1
  %indvars.iv.next.1 = add nsw i64 %indvars.iv.next, 1
  %arrayidx4.2 = getelementptr inbounds i32, ptr @e, i64 %indvars.iv.next14.1
  store i32 0, ptr %arrayidx4.2, align 4
  %indvars.iv.next14.2 = add nsw i64 %indvars.iv.next14.1, 1
  %indvars.iv.next.2 = add nsw i64 %indvars.iv.next.1, 1
  %arrayidx4.3 = getelementptr inbounds i32, ptr @e, i64 %indvars.iv.next14.2
  store i32 0, ptr %arrayidx4.3, align 4
  %indvars.iv.next14.3 = add nsw i64 %indvars.iv.next14.2, 1
  %indvars.iv.next.3 = add nsw i64 %indvars.iv.next.2, 1
  %indvars.iv.next14.4 = add nsw i64 %indvars.iv.next14.3, 1
  %indvars.iv.next.4 = add nsw i64 %indvars.iv.next.3, 1
  %indvars.iv.next14.5 = add nsw i64 %indvars.iv.next14.4, 1
  %indvars.iv.next.5 = add nsw i64 %indvars.iv.next.4, 1
  %indvars.iv.next14.6 = add nsw i64 %indvars.iv.next14.5, 1
  %indvars.iv.next.6 = add nsw i64 %indvars.iv.next.5, 1
  %indvars.iv.next14.7 = add nsw i64 %indvars.iv.next14.6, 1
  %indvars.iv.next.7 = add nsw i64 %indvars.iv.next.6, 1
  br i1 false, label %for.cond.for.end_crit_edge.unr-lcssa, label %for.body

for.cond.for.end_crit_edge.unr-lcssa:             ; preds = %for.body
  ret i32 0
}