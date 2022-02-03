; RUN: %opt -pssa-entry %s -o /dev/null

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@b = external dso_local local_unnamed_addr global i32, align 4

define dso_local i32 @c() local_unnamed_addr {
for.cond1thread-pre-split.preheader:
  br label %for.cond1thread-pre-split

for.cond1thread-pre-split:                        ; preds = %for.inc4, %for.cond1thread-pre-split.preheader
  %tobool2.not8 = phi i1 [ false, %for.cond1thread-pre-split.preheader ], [ true, %for.inc4 ]
  br i1 %tobool2.not8, label %for.inc4, label %for.inc.preheader

for.inc.preheader:                                ; preds = %for.cond1thread-pre-split
  store i32 0, i32* @b, align 4, !tbaa !0
  br label %for.inc4

for.inc4:                                         ; preds = %for.inc.preheader, %for.cond1thread-pre-split
  br i1 true, label %for.cond.for.end6_crit_edge.loopexit, label %for.cond1thread-pre-split, !llvm.loop !4

for.cond.for.end6_crit_edge.loopexit:             ; preds = %for.inc4
  ret i32 
}

!0 = !{!1, !1, i64 0}
!1 = !{!"int", !2, i64 0}
!2 = !{!"omnipotent char", !3, i64 0}
!3 = !{!"Simple C/C++ TBAA"}
!4 = distinct !{!4, !5}
!5 = !{!"llvm.loop.mustprogress"}
