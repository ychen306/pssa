; RUN: %opt -passes=print-reductions %s -o /dev/null | FileCheck %s

; CHECK-NOT: Reduction for %add.epil
; CHECK: Reduction for %add.epil.lcssa = phi i32 [ %add.epil, %for.body4.epil ] is (add i4:for.body4.epil i6:for.body4.1,for.cond1.preheader i7:for.body4,for.cond1.preheader)
; CHECK-NOT: Reduction for %add.epil

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: argmemonly nofree norecurse nosync nounwind readonly ssp uwtable
define i32 @sum(i32 noundef %n, i32 noundef %m, ptr nocapture noundef readonly %a) local_unnamed_addr #0 {
entry:
  %i = zext i32 %m to i64
  %cmp20 = icmp sgt i32 %n, 0
  br i1 %cmp20, label %for.cond1.preheader.lr.ph, label %for.cond.cleanup

for.cond1.preheader.lr.ph:                        ; preds = %entry
  %cmp217 = icmp sgt i32 %m, 0
  %xtraiter = and i32 %n, 1
  %i1 = icmp eq i32 %n, 1
  br i1 %i1, label %for.cond.cleanup.loopexit.unr-lcssa, label %for.cond1.preheader.lr.ph.new

for.cond1.preheader.lr.ph.new:                    ; preds = %for.cond1.preheader.lr.ph
  %unroll_iter = and i32 %n, -2
  %wide.trip.count = zext i32 %m to i64
  %wide.trip.count.1 = zext i32 %m to i64
  br label %for.cond1.preheader

for.cond1.preheader:                              ; preds = %for.cond.cleanup3.1, %for.cond1.preheader.lr.ph.new
  %indvars.iv25 = phi i64 [ 0, %for.cond1.preheader.lr.ph.new ], [ %indvars.iv.next26.1, %for.cond.cleanup3.1 ]
  %s.021 = phi i32 [ 0, %for.cond1.preheader.lr.ph.new ], [ %s.1.lcssa.1, %for.cond.cleanup3.1 ]
  %niter = phi i32 [ 0, %for.cond1.preheader.lr.ph.new ], [ %niter.next.1, %for.cond.cleanup3.1 ]
  br i1 %cmp217, label %for.body4.lr.ph, label %for.cond.cleanup3

for.body4.lr.ph:                                  ; preds = %for.cond1.preheader
  %i2 = mul nuw nsw i64 %indvars.iv25, %i
  %arrayidx = getelementptr inbounds i32, ptr %a, i64 %i2
  br label %for.body4

for.cond.cleanup.loopexit.unr-lcssa.loopexit:     ; preds = %for.cond.cleanup3.1
  %s.1.lcssa.1.lcssa = phi i32 [ %s.1.lcssa.1, %for.cond.cleanup3.1 ]
  %indvars.iv.next26.1.lcssa = phi i64 [ %indvars.iv.next26.1, %for.cond.cleanup3.1 ]
  br label %for.cond.cleanup.loopexit.unr-lcssa

for.cond.cleanup.loopexit.unr-lcssa:              ; preds = %for.cond.cleanup.loopexit.unr-lcssa.loopexit, %for.cond1.preheader.lr.ph
  %s.1.lcssa.lcssa.ph = phi i32 [ undef, %for.cond1.preheader.lr.ph ], [ %s.1.lcssa.1.lcssa, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %indvars.iv25.unr = phi i64 [ 0, %for.cond1.preheader.lr.ph ], [ %indvars.iv.next26.1.lcssa, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %s.021.unr = phi i32 [ 0, %for.cond1.preheader.lr.ph ], [ %s.1.lcssa.1.lcssa, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %lcmp.mod.not = icmp eq i32 %xtraiter, 0
  %cmp217.not = xor i1 %cmp217, true
  %brmerge = or i1 %lcmp.mod.not, %cmp217.not
  %s.1.lcssa.lcssa.ph.mux = select i1 %lcmp.mod.not, i32 %s.1.lcssa.lcssa.ph, i32 %s.021.unr
  br i1 %brmerge, label %for.cond.cleanup, label %for.body4.lr.ph.epil

for.body4.lr.ph.epil:                             ; preds = %for.cond.cleanup.loopexit.unr-lcssa
  %i3 = mul nuw nsw i64 %indvars.iv25.unr, %i
  %arrayidx.epil = getelementptr inbounds i32, ptr %a, i64 %i3
  %wide.trip.count.epil = zext i32 %m to i64
  br label %for.body4.epil

for.body4.epil:                                   ; preds = %for.body4.epil, %for.body4.lr.ph.epil
  %indvars.iv.epil = phi i64 [ 0, %for.body4.lr.ph.epil ], [ %indvars.iv.next.epil, %for.body4.epil ]
  %s.118.epil = phi i32 [ %s.021.unr, %for.body4.lr.ph.epil ], [ %add.epil, %for.body4.epil ]
  %arrayidx6.epil = getelementptr inbounds i32, ptr %arrayidx.epil, i64 %indvars.iv.epil
  %i4 = load i32, ptr %arrayidx6.epil, align 4, !tbaa !5
  %add.epil = add nsw i32 %i4, %s.118.epil
  %indvars.iv.next.epil = add nuw nsw i64 %indvars.iv.epil, 1
  %exitcond.epil.not = icmp eq i64 %indvars.iv.next.epil, %wide.trip.count.epil
  br i1 %exitcond.epil.not, label %for.cond.cleanup.loopexit, label %for.body4.epil, !llvm.loop !9

for.cond.cleanup.loopexit:                        ; preds = %for.body4.epil
  %add.epil.lcssa = phi i32 [ %add.epil, %for.body4.epil ]
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit, %for.cond.cleanup.loopexit.unr-lcssa, %entry
  %s.0.lcssa = phi i32 [ 0, %entry ], [ %s.1.lcssa.lcssa.ph.mux, %for.cond.cleanup.loopexit.unr-lcssa ], [ %add.epil.lcssa, %for.cond.cleanup.loopexit ]
  ret i32 %s.0.lcssa

for.cond.cleanup3.loopexit:                       ; preds = %for.body4
  %add.lcssa = phi i32 [ %add, %for.body4 ]
  br label %for.cond.cleanup3

for.cond.cleanup3:                                ; preds = %for.cond.cleanup3.loopexit, %for.cond1.preheader
  %s.1.lcssa = phi i32 [ %s.021, %for.cond1.preheader ], [ %add.lcssa, %for.cond.cleanup3.loopexit ]
  br i1 %cmp217, label %for.body4.lr.ph.1, label %for.cond.cleanup3.1

for.body4.lr.ph.1:                                ; preds = %for.cond.cleanup3
  %indvars.iv.next26 = or i64 %indvars.iv25, 1
  %i5 = mul nuw nsw i64 %indvars.iv.next26, %i
  %arrayidx.1 = getelementptr inbounds i32, ptr %a, i64 %i5
  br label %for.body4.1

for.body4.1:                                      ; preds = %for.body4.1, %for.body4.lr.ph.1
  %indvars.iv.1 = phi i64 [ 0, %for.body4.lr.ph.1 ], [ %indvars.iv.next.1, %for.body4.1 ]
  %s.118.1 = phi i32 [ %s.1.lcssa, %for.body4.lr.ph.1 ], [ %add.1, %for.body4.1 ]
  %arrayidx6.1 = getelementptr inbounds i32, ptr %arrayidx.1, i64 %indvars.iv.1
  %i6 = load i32, ptr %arrayidx6.1, align 4, !tbaa !5
  %add.1 = add nsw i32 %i6, %s.118.1
  %indvars.iv.next.1 = add nuw nsw i64 %indvars.iv.1, 1
  %exitcond.1.not = icmp eq i64 %indvars.iv.next.1, %wide.trip.count.1
  br i1 %exitcond.1.not, label %for.cond.cleanup3.1.loopexit, label %for.body4.1, !llvm.loop !9

for.cond.cleanup3.1.loopexit:                     ; preds = %for.body4.1
  %add.1.lcssa = phi i32 [ %add.1, %for.body4.1 ]
  br label %for.cond.cleanup3.1

for.cond.cleanup3.1:                              ; preds = %for.cond.cleanup3.1.loopexit, %for.cond.cleanup3
  %s.1.lcssa.1 = phi i32 [ %s.1.lcssa, %for.cond.cleanup3 ], [ %add.1.lcssa, %for.cond.cleanup3.1.loopexit ]
  %indvars.iv.next26.1 = add nuw nsw i64 %indvars.iv25, 2
  %niter.next.1 = add i32 %niter, 2
  %niter.ncmp.1.not = icmp eq i32 %niter.next.1, %unroll_iter
  br i1 %niter.ncmp.1.not, label %for.cond.cleanup.loopexit.unr-lcssa.loopexit, label %for.cond1.preheader, !llvm.loop !12

for.body4:                                        ; preds = %for.body4, %for.body4.lr.ph
  %indvars.iv = phi i64 [ 0, %for.body4.lr.ph ], [ %indvars.iv.next, %for.body4 ]
  %s.118 = phi i32 [ %s.021, %for.body4.lr.ph ], [ %add, %for.body4 ]
  %arrayidx6 = getelementptr inbounds i32, ptr %arrayidx, i64 %indvars.iv
  %i7 = load i32, ptr %arrayidx6, align 4, !tbaa !5
  %add = add nsw i32 %i7, %s.118
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %exitcond.not = icmp eq i64 %indvars.iv.next, %wide.trip.count
  br i1 %exitcond.not, label %for.cond.cleanup3.loopexit, label %for.body4, !llvm.loop !9
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
