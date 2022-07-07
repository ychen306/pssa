; RUN: %opt -passes=pssa-entry %s -o /dev/null

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

define dso_local i32 @d() local_unnamed_addr {
for.cond1thread-pre-split.preheader:
  br label %for.cond1thread-pre-split

for.cond1thread-pre-split:                        ; preds = %for.inc4, %for.cond1thread-pre-split.preheader
  %.pr7 = phi i32 [ 0, %for.inc4 ], [ undef, %for.cond1thread-pre-split.preheader ]
  br i1 undef, label %for.inc4, label %for.inc.preheader

for.inc.preheader:                                ; preds = %for.cond1thread-pre-split
  br label %for.inc

for.inc:                                          ; preds = %for.inc, %for.inc.preheader
  %0 = phi i32 [ undef, %for.inc ], [ %.pr7, %for.inc.preheader ]
  br i1 undef, label %for.cond1.for.inc4_crit_edge, label %for.inc, !llvm.loop !0

for.cond1.for.inc4_crit_edge:                     ; preds = %for.inc
  br label %for.inc4

for.inc4:                                         ; preds = %for.cond1.for.inc4_crit_edge, %for.cond1thread-pre-split
  br i1 undef, label %for.cond.for.end6_crit_edge.loopexit, label %for.cond1thread-pre-split, !llvm.loop !2

for.cond.for.end6_crit_edge.loopexit:             ; preds = %for.inc4
  ret i32 undef
}

!0 = distinct !{!0, !1}
!1 = !{!"llvm.loop.mustprogress"}
!2 = distinct !{!2, !1}
