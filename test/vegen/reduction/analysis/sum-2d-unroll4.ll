; RUN: %opt -passes=print-reductions %s -o /dev/null | FileCheck %s

; CHECK: Reduction for  %s.0.lcssa = phi i32 [ 0, %entry ], [ %add.lcssa.lcssa, %for.cond.cleanup.loopexit ] is (add i5:for.body4,for.cond1.preheader i6:for.body4,for.cond1.preheader i7:for.body4,for.cond1.preheader i8:for.body4,for.cond1.preheader i4:for.body4.epil,for.cond1.preheader) : true

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: argmemonly nofree norecurse nosync nounwind readonly ssp uwtable
define i32 @sum(i32 noundef %n, ptr nocapture noundef readonly %a) local_unnamed_addr #0 {
entry:
  %i = zext i32 %n to i64
  %cmp21 = icmp sgt i32 %n, 0
  br i1 %cmp21, label %for.cond1.preheader.lr.ph, label %for.cond.cleanup

for.cond1.preheader.lr.ph:                        ; preds = %entry
  %i1 = add i32 %n, -1
  %wide.trip.count = zext i32 %n to i64
  %xtraiter = and i32 %n, 3
  %i2 = icmp ult i32 %i1, 3
  %unroll_iter = and i32 %n, -4
  %lcmp.mod.not = icmp eq i32 %xtraiter, 0
  br label %for.cond1.preheader

for.cond1.preheader:                              ; preds = %for.cond.cleanup3, %for.cond1.preheader.lr.ph
  %indvars.iv27 = phi i64 [ 0, %for.cond1.preheader.lr.ph ], [ %indvars.iv.next28, %for.cond.cleanup3 ]
  %s.022 = phi i32 [ 0, %for.cond1.preheader.lr.ph ], [ %add.lcssa, %for.cond.cleanup3 ]
  %i3 = mul nuw nsw i64 %indvars.iv27, %i
  %arrayidx = getelementptr inbounds i32, ptr %a, i64 %i3
  br i1 %i2, label %for.cond.cleanup3.loopexit.unr-lcssa, label %for.body4.preheader

for.body4.preheader:                              ; preds = %for.cond1.preheader
  br label %for.body4

for.cond.cleanup.loopexit:                        ; preds = %for.cond.cleanup3
  %add.lcssa.lcssa = phi i32 [ %add.lcssa, %for.cond.cleanup3 ]
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit, %entry
  %s.0.lcssa = phi i32 [ 0, %entry ], [ %add.lcssa.lcssa, %for.cond.cleanup.loopexit ]
  ret i32 %s.0.lcssa

for.cond.cleanup3.loopexit.unr-lcssa.loopexit:    ; preds = %for.body4
  %add.3.lcssa = phi i32 [ %add.3, %for.body4 ]
  %indvars.iv.next.3.lcssa = phi i64 [ %indvars.iv.next.3, %for.body4 ]
  br label %for.cond.cleanup3.loopexit.unr-lcssa

for.cond.cleanup3.loopexit.unr-lcssa:             ; preds = %for.cond.cleanup3.loopexit.unr-lcssa.loopexit, %for.cond1.preheader
  %add.lcssa.ph = phi i32 [ undef, %for.cond1.preheader ], [ %add.3.lcssa, %for.cond.cleanup3.loopexit.unr-lcssa.loopexit ]
  %indvars.iv.unr = phi i64 [ 0, %for.cond1.preheader ], [ %indvars.iv.next.3.lcssa, %for.cond.cleanup3.loopexit.unr-lcssa.loopexit ]
  %s.119.unr = phi i32 [ %s.022, %for.cond1.preheader ], [ %add.3.lcssa, %for.cond.cleanup3.loopexit.unr-lcssa.loopexit ]
  br i1 %lcmp.mod.not, label %for.cond.cleanup3, label %for.body4.epil.preheader

for.body4.epil.preheader:                         ; preds = %for.cond.cleanup3.loopexit.unr-lcssa
  br label %for.body4.epil

for.body4.epil:                                   ; preds = %for.body4.epil.preheader, %for.body4.epil
  %indvars.iv.epil = phi i64 [ %indvars.iv.next.epil, %for.body4.epil ], [ %indvars.iv.unr, %for.body4.epil.preheader ]
  %s.119.epil = phi i32 [ %add.epil, %for.body4.epil ], [ %s.119.unr, %for.body4.epil.preheader ]
  %epil.iter = phi i32 [ %epil.iter.next, %for.body4.epil ], [ 0, %for.body4.epil.preheader ]
  %arrayidx6.epil = getelementptr inbounds i32, ptr %arrayidx, i64 %indvars.iv.epil
  %i4 = load i32, ptr %arrayidx6.epil, align 4, !tbaa !5
  %add.epil = add nsw i32 %i4, %s.119.epil
  %indvars.iv.next.epil = add nuw nsw i64 %indvars.iv.epil, 1
  %epil.iter.next = add nuw nsw i32 %epil.iter, 1
  %epil.iter.cmp.not = icmp eq i32 %epil.iter.next, %xtraiter
  br i1 %epil.iter.cmp.not, label %for.cond.cleanup3.loopexit, label %for.body4.epil, !llvm.loop !9

for.cond.cleanup3.loopexit:                       ; preds = %for.body4.epil
  %add.epil.lcssa = phi i32 [ %add.epil, %for.body4.epil ]
  br label %for.cond.cleanup3

for.cond.cleanup3:                                ; preds = %for.cond.cleanup3.loopexit, %for.cond.cleanup3.loopexit.unr-lcssa
  %add.lcssa = phi i32 [ %add.lcssa.ph, %for.cond.cleanup3.loopexit.unr-lcssa ], [ %add.epil.lcssa, %for.cond.cleanup3.loopexit ]
  %indvars.iv.next28 = add nuw nsw i64 %indvars.iv27, 1
  %exitcond.not = icmp eq i64 %indvars.iv.next28, %wide.trip.count
  br i1 %exitcond.not, label %for.cond.cleanup.loopexit, label %for.cond1.preheader, !llvm.loop !11

for.body4:                                        ; preds = %for.body4.preheader, %for.body4
  %indvars.iv = phi i64 [ %indvars.iv.next.3, %for.body4 ], [ 0, %for.body4.preheader ]
  %s.119 = phi i32 [ %add.3, %for.body4 ], [ %s.022, %for.body4.preheader ]
  %niter = phi i32 [ %niter.next.3, %for.body4 ], [ 0, %for.body4.preheader ]
  %arrayidx6 = getelementptr inbounds i32, ptr %arrayidx, i64 %indvars.iv
  %i5 = load i32, ptr %arrayidx6, align 4, !tbaa !5
  %add = add nsw i32 %i5, %s.119
  %indvars.iv.next = or i64 %indvars.iv, 1
  %arrayidx6.1 = getelementptr inbounds i32, ptr %arrayidx, i64 %indvars.iv.next
  %i6 = load i32, ptr %arrayidx6.1, align 4, !tbaa !5
  %add.1 = add nsw i32 %i6, %add
  %indvars.iv.next.1 = or i64 %indvars.iv, 2
  %arrayidx6.2 = getelementptr inbounds i32, ptr %arrayidx, i64 %indvars.iv.next.1
  %i7 = load i32, ptr %arrayidx6.2, align 4, !tbaa !5
  %add.2 = add nsw i32 %i7, %add.1
  %indvars.iv.next.2 = or i64 %indvars.iv, 3
  %arrayidx6.3 = getelementptr inbounds i32, ptr %arrayidx, i64 %indvars.iv.next.2
  %i8 = load i32, ptr %arrayidx6.3, align 4, !tbaa !5
  %add.3 = add nsw i32 %i8, %add.2
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv, 4
  %niter.next.3 = add i32 %niter, 4
  %niter.ncmp.3.not = icmp eq i32 %niter.next.3, %unroll_iter
  br i1 %niter.ncmp.3.not, label %for.cond.cleanup3.loopexit.unr-lcssa.loopexit, label %for.body4, !llvm.loop !13
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
!9 = distinct !{!9, !10}
!10 = !{!"llvm.loop.unroll.disable"}
!11 = distinct !{!11, !12, !10}
!12 = !{!"llvm.loop.mustprogress"}
!13 = distinct !{!13, !12, !10}
