; RUN: %opt -passes=print-reductions %s -o /dev/null | FileCheck %s

; CHECK-DAG: Reduction for %add.1 = add nsw i32 %i6, %s.119.1 is (add i6:for.body4.1,for.cond1.preheader i7:for.body4,for.cond1.preheader (i32 0))
; CHECK-DAG: Reduction for %indvars.iv.next27.1 = add nuw nsw i64 %indvars.iv26, 2 is (add indvars.iv26 (i64 2))

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: argmemonly nofree norecurse nosync nounwind readonly ssp uwtable
define i32 @sum(i32 noundef %n, ptr nocapture noundef readonly %a) local_unnamed_addr #0 {
entry:
  %i = zext i32 %n to i64
  %cmp21 = icmp sgt i32 %n, 0
  br i1 %cmp21, label %for.cond1.preheader.lr.ph, label %for.cond.cleanup

for.cond1.preheader.lr.ph:                        ; preds = %entry
  %xtraiter = and i32 %n, 1
  %i1 = icmp eq i32 %n, 1
  br i1 %i1, label %for.cond.cleanup.loopexit.unr-lcssa, label %for.cond1.preheader.lr.ph.new

for.cond1.preheader.lr.ph.new:                    ; preds = %for.cond1.preheader.lr.ph
  %unroll_iter = and i32 %n, -2
  %wide.trip.count = zext i32 %n to i64
  %wide.trip.count.1 = zext i32 %n to i64
  br label %for.cond1.preheader

for.cond1.preheader:                              ; preds = %for.cond.cleanup3.1, %for.cond1.preheader.lr.ph.new
  %indvars.iv26 = phi i64 [ 0, %for.cond1.preheader.lr.ph.new ], [ %indvars.iv.next27.1, %for.cond.cleanup3.1 ]
  %s.022 = phi i32 [ 0, %for.cond1.preheader.lr.ph.new ], [ %add.1.lcssa, %for.cond.cleanup3.1 ]
  %niter = phi i32 [ 0, %for.cond1.preheader.lr.ph.new ], [ %niter.next.1, %for.cond.cleanup3.1 ]
  %i2 = mul nuw nsw i64 %indvars.iv26, %i
  %arrayidx = getelementptr inbounds i32, ptr %a, i64 %i2
  br label %for.body4

for.cond.cleanup.loopexit.unr-lcssa.loopexit:     ; preds = %for.cond.cleanup3.1
  %indvars.iv.next27.1.lcssa = phi i64 [ %indvars.iv.next27.1, %for.cond.cleanup3.1 ]
  %add.1.lcssa.lcssa = phi i32 [ %add.1.lcssa, %for.cond.cleanup3.1 ]
  br label %for.cond.cleanup.loopexit.unr-lcssa

for.cond.cleanup.loopexit.unr-lcssa:              ; preds = %for.cond.cleanup.loopexit.unr-lcssa.loopexit, %for.cond1.preheader.lr.ph
  %s.1.lcssa.lcssa.ph = phi i32 [ undef, %for.cond1.preheader.lr.ph ], [ %add.1.lcssa.lcssa, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %indvars.iv26.unr = phi i64 [ 0, %for.cond1.preheader.lr.ph ], [ %indvars.iv.next27.1.lcssa, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %s.022.unr = phi i32 [ 0, %for.cond1.preheader.lr.ph ], [ %add.1.lcssa.lcssa, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %lcmp.mod.not = icmp eq i32 %xtraiter, 0
  br i1 %lcmp.mod.not, label %for.cond.cleanup, label %for.body4.lr.ph.epil

for.body4.lr.ph.epil:                             ; preds = %for.cond.cleanup.loopexit.unr-lcssa
  %i3 = mul nuw nsw i64 %indvars.iv26.unr, %i
  %arrayidx.epil = getelementptr inbounds i32, ptr %a, i64 %i3
  %wide.trip.count.epil = zext i32 %n to i64
  br label %for.body4.epil

for.body4.epil:                                   ; preds = %for.body4.epil, %for.body4.lr.ph.epil
  %indvars.iv.epil = phi i64 [ 0, %for.body4.lr.ph.epil ], [ %indvars.iv.next.epil, %for.body4.epil ]
  %s.119.epil = phi i32 [ %s.022.unr, %for.body4.lr.ph.epil ], [ %add.epil, %for.body4.epil ]
  %arrayidx6.epil = getelementptr inbounds i32, ptr %arrayidx.epil, i64 %indvars.iv.epil
  %i4 = load i32, ptr %arrayidx6.epil, align 4, !tbaa !5
  %add.epil = add nsw i32 %i4, %s.119.epil
  %indvars.iv.next.epil = add nuw nsw i64 %indvars.iv.epil, 1
  %exitcond.epil.not = icmp eq i64 %indvars.iv.next.epil, %wide.trip.count.epil
  br i1 %exitcond.epil.not, label %for.cond.cleanup.loopexit, label %for.body4.epil, !llvm.loop !9

for.cond.cleanup.loopexit:                        ; preds = %for.body4.epil
  %add.epil.lcssa = phi i32 [ %add.epil, %for.body4.epil ]
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit, %for.cond.cleanup.loopexit.unr-lcssa, %entry
  %s.0.lcssa = phi i32 [ 0, %entry ], [ %s.1.lcssa.lcssa.ph, %for.cond.cleanup.loopexit.unr-lcssa ], [ %add.epil.lcssa, %for.cond.cleanup.loopexit ]
  ret i32 %s.0.lcssa

for.body4.lr.ph.1:                                ; preds = %for.body4
  %add.lcssa = phi i32 [ %add, %for.body4 ]
  %indvars.iv.next27 = or i64 %indvars.iv26, 1
  %i5 = mul nuw nsw i64 %indvars.iv.next27, %i
  %arrayidx.1 = getelementptr inbounds i32, ptr %a, i64 %i5
  br label %for.body4.1

for.body4.1:                                      ; preds = %for.body4.1, %for.body4.lr.ph.1
  %indvars.iv.1 = phi i64 [ 0, %for.body4.lr.ph.1 ], [ %indvars.iv.next.1, %for.body4.1 ]
  %s.119.1 = phi i32 [ %add.lcssa, %for.body4.lr.ph.1 ], [ %add.1, %for.body4.1 ]
  %arrayidx6.1 = getelementptr inbounds i32, ptr %arrayidx.1, i64 %indvars.iv.1
  %i6 = load i32, ptr %arrayidx6.1, align 4, !tbaa !5
  %add.1 = add nsw i32 %i6, %s.119.1
  %indvars.iv.next.1 = add nuw nsw i64 %indvars.iv.1, 1
  %exitcond.1.not = icmp eq i64 %indvars.iv.next.1, %wide.trip.count.1
  br i1 %exitcond.1.not, label %for.cond.cleanup3.1, label %for.body4.1, !llvm.loop !9

for.cond.cleanup3.1:                              ; preds = %for.body4.1
  %add.1.lcssa = phi i32 [ %add.1, %for.body4.1 ]
  %indvars.iv.next27.1 = add nuw nsw i64 %indvars.iv26, 2
  %niter.next.1 = add i32 %niter, 2
  %niter.ncmp.1.not = icmp eq i32 %niter.next.1, %unroll_iter
  br i1 %niter.ncmp.1.not, label %for.cond.cleanup.loopexit.unr-lcssa.loopexit, label %for.cond1.preheader, !llvm.loop !12

for.body4:                                        ; preds = %for.body4, %for.cond1.preheader
  %indvars.iv = phi i64 [ 0, %for.cond1.preheader ], [ %indvars.iv.next, %for.body4 ]
  %s.119 = phi i32 [ %s.022, %for.cond1.preheader ], [ %add, %for.body4 ]
  %arrayidx6 = getelementptr inbounds i32, ptr %arrayidx, i64 %indvars.iv
  %i7 = load i32, ptr %arrayidx6, align 4, !tbaa !5
  %add = add nsw i32 %i7, %s.119
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %exitcond.not = icmp eq i64 %indvars.iv.next, %wide.trip.count
  br i1 %exitcond.not, label %for.body4.lr.ph.1, label %for.body4, !llvm.loop !9
}

attributes #0 = { argmemonly nofree norecurse nosync nounwind readonly ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"uwtable", i32 2}
!3 = !{i32 7, !"frame-pointer", i32 2}
!4 = !{!"clang version 15.0.0 (https://github.com/llvm/llvm-project 12f9c7b27063a4a487621f48c167e4f88de6d297)"}
!5 = !{!6, !6, i64 0}
!6 = !{!"int", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C/C++ TBAA"}
!9 = distinct !{!9, !10, !11}
!10 = !{!"llvm.loop.mustprogress"}
!11 = !{!"llvm.loop.unroll.disable"}
!12 = distinct !{!12, !10, !11}
