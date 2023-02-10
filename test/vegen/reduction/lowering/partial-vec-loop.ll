; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=test-vector-codegen,adce,simplifycfg -rdx-to-pack=add.3.lcssa -disable-reduction-packing | FileCheck %s
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; CHECK-LABEL: @sum(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[CMP4:%.*]] = icmp sgt i32 [[N:%.*]], 0
; CHECK-NEXT:    br i1 [[CMP4]], label %[[TMP0:.*]], label %[[EXIT3:.*]]
; CHECK:       [[TMP0]]:
; CHECK-NEXT:    [[I:%.*]] = add i32 [[N]], -1
; CHECK-NEXT:    [[XTRAITER:%.*]] = and i32 [[N]], 3
; CHECK-NEXT:    [[I1:%.*]] = icmp ult i32 [[I]], 3
; CHECK-NEXT:    br i1 [[I1]], label %[[TMP15:.*]], label %[[TMP1:.*]]
; CHECK:       [[TMP1]]:
; CHECK-NEXT:    [[UNROLL_ITER:%.*]] = and i32 [[N]], -4
; CHECK-NEXT:    br label %[[HEADER:.*]]
; CHECK:       [[HEADER]]:
; CHECK-NOT: br
; CHECK:         [[INDVARS_IV:%.*]] = phi i64 [ 0, %[[TMP1]] ], [ [[INDVARS_IV_NEXT_3:%.*]], %[[HEADER]] ]
; CHECK-NEXT:    [[ARRAYIDX:%.*]] = getelementptr inbounds i32, ptr [[A:%.*]], i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[I3:%.*]] = load i32, ptr [[ARRAYIDX]], align 4, !tbaa [[TBAA5:![0-9]+]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT:%.*]] = or i64 [[INDVARS_IV]], 1
; CHECK-NEXT:    [[ARRAYIDX_1:%.*]] = getelementptr inbounds i32, ptr [[A]], i64 [[INDVARS_IV_NEXT]]
; CHECK-NEXT:    [[I4:%.*]] = load i32, ptr [[ARRAYIDX_1]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_1:%.*]] = or i64 [[INDVARS_IV]], 2
; CHECK-NEXT:    [[ARRAYIDX_2:%.*]] = getelementptr inbounds i32, ptr [[A]], i64 [[INDVARS_IV_NEXT_1]]
; CHECK-NEXT:    [[I5:%.*]] = load i32, ptr [[ARRAYIDX_2]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_2:%.*]] = or i64 [[INDVARS_IV]], 3
; CHECK-NEXT:    [[ARRAYIDX_3:%.*]] = getelementptr inbounds i32, ptr [[A]], i64 [[INDVARS_IV_NEXT_2]]
; CHECK-NEXT:    [[I6:%.*]] = load i32, ptr [[ARRAYIDX_3]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_3]] = add nuw nsw i64 [[INDVARS_IV]], 4
; CHECK-NEXT:    [[NITER_NEXT_3:%.*]] = add i32 [[NITER:%.*]], 4
; CHECK-NEXT:    [[NITER_NCMP_3_NOT:%.*]] = icmp eq i32 [[NITER_NEXT_3]], [[UNROLL_ITER]]
; CHECK-DAG:     [[TMP6:%.*]] = add i32 [[TMP5:%.*]], [[I4]]
; CHECK-DAG:     [[TMP7:%.*]] = add i32 [[TMP4:%.*]], [[I3]]
; CHECK-DAG:     [[TMP8:%.*]] = add i32 [[TMP3:%.*]], [[I6]]
; CHECK-DAG:     [[TMP9:%.*]] = add i32 [[TMP2:%.*]], [[I5]]
; CHECK-NEXT:    [[DOT:%.*]] = select i1 [[NITER_NCMP_3_NOT]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT]], label %[[HEADER]], label %[[EXIT:.*]]
; CHECK:       [[EXIT]]:
; CHECK-NEXT:    [[TMP10:%.*]] = insertelement <4 x i32> undef, i32 [[TMP7]], i64 0
; CHECK-NEXT:    [[TMP11:%.*]] = insertelement <4 x i32> [[TMP10]], i32 [[TMP6]], i64 1
; CHECK-NEXT:    [[TMP12:%.*]] = insertelement <4 x i32> [[TMP11]], i32 [[TMP9]], i64 2
; CHECK-NEXT:    [[TMP13:%.*]] = insertelement <4 x i32> [[TMP12]], i32 [[TMP8]], i64 3
; CHECK-NEXT:    [[TMP14:%.*]] = call i32 @llvm.vector.reduce.add.v4i32(<4 x i32> [[TMP13]])
; CHECK-NEXT:    br label %[[TMP15]]
; CHECK:       [[TMP15]]:
; CHECK-DAG:     [[S_05_UNR_DEMOTED_0:%.*]] = phi i32 [ [[TMP14]], %[[EXIT]] ], [ 0, %[[TMP0]] ]
; CHECK-DAG:     [[INDVARS_IV_UNR_DEMOTED_0:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_3]], %[[EXIT]] ], [ 0, %[[TMP0]] ]
; CHECK-DAG:     [[ADD_LCSSA_PH_DEMOTED_0:%.*]] = phi i32 [ [[TMP14]], %[[EXIT]] ], [ undef, %[[TMP0]] ]
; CHECK-NEXT:    [[LCMP_MOD_NOT:%.*]] = icmp eq i32 [[XTRAITER]], 0
; CHECK-NEXT:    br i1 [[LCMP_MOD_NOT]], label %[[EXIT3]], label %[[HEADER1:.*]]
; CHECK:       [[HEADER1]]:
; CHECK-DAG:     [[EPIL_ITER:%.*]] = phi i32 [ [[EPIL_ITER_NEXT:%.*]], %[[HEADER1]] ], [ 0, %[[TMP15]] ]
; CHECK-DAG:     [[S_05_EPIL:%.*]] = phi i32 [ [[ADD_EPIL:%.*]], %[[HEADER1]] ], [ [[S_05_UNR_DEMOTED_0]], %[[TMP15]] ]
; CHECK-DAG:     [[INDVARS_IV_EPIL:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_EPIL:%.*]], %[[HEADER1]] ], [ [[INDVARS_IV_UNR_DEMOTED_0]], %[[TMP15]] ]
; CHECK-NEXT:    [[ARRAYIDX_EPIL:%.*]] = getelementptr inbounds i32, ptr [[A]], i64 [[INDVARS_IV_EPIL]]
; CHECK-NEXT:    [[I2:%.*]] = load i32, ptr [[ARRAYIDX_EPIL]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_EPIL]] = add nsw i32 [[I2]], [[S_05_EPIL]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_EPIL]] = add nuw nsw i64 [[INDVARS_IV_EPIL]], 1
; CHECK-NEXT:    [[EPIL_ITER_NEXT]] = add nuw nsw i32 [[EPIL_ITER]], 1
; CHECK-NEXT:    [[EPIL_ITER_CMP_NOT:%.*]] = icmp eq i32 [[EPIL_ITER_NEXT]], [[XTRAITER]]
; CHECK-NEXT:    [[DOT6:%.*]] = select i1 [[EPIL_ITER_CMP_NOT]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT6]], label %[[HEADER1]], label %[[EXIT3]]
; CHECK:       [[EXIT3]]:
; CHECK-NEXT:    [[S_0_LCSSA_DEMOTED_0:%.*]] = phi i32 [ 0, %[[ENTRY:.*]] ], [ [[ADD_LCSSA_PH_DEMOTED_0]], %[[TMP15]] ], [ [[ADD_EPIL]], %[[HEADER1]] ]
; CHECK-NEXT:    ret i32 [[S_0_LCSSA_DEMOTED_0]]

; Function Attrs: argmemonly nofree norecurse nosync nounwind readonly ssp uwtable
define i32 @sum(i32 noundef %n, ptr nocapture noundef readonly %a) local_unnamed_addr #0 {
entry:
  %cmp4 = icmp sgt i32 %n, 0
  br i1 %cmp4, label %for.body.preheader, label %for.cond.cleanup

for.body.preheader:                               ; preds = %entry
  %i = add i32 %n, -1
  %xtraiter = and i32 %n, 3
  %i1 = icmp ult i32 %i, 3
  br i1 %i1, label %for.cond.cleanup.loopexit.unr-lcssa, label %for.body.preheader.new

for.body.preheader.new:                           ; preds = %for.body.preheader
  %unroll_iter = and i32 %n, -4
  br label %for.body

for.cond.cleanup.loopexit.unr-lcssa.loopexit:     ; preds = %for.body
  %add.3.lcssa = phi i32 [ %add.3, %for.body ]
  %indvars.iv.next.3.lcssa = phi i64 [ %indvars.iv.next.3, %for.body ]
  br label %for.cond.cleanup.loopexit.unr-lcssa

for.cond.cleanup.loopexit.unr-lcssa:              ; preds = %for.cond.cleanup.loopexit.unr-lcssa.loopexit, %for.body.preheader
  %add.lcssa.ph = phi i32 [ undef, %for.body.preheader ], [ %add.3.lcssa, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %indvars.iv.unr = phi i64 [ 0, %for.body.preheader ], [ %indvars.iv.next.3.lcssa, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %s.05.unr = phi i32 [ 0, %for.body.preheader ], [ %add.3.lcssa, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %lcmp.mod.not = icmp eq i32 %xtraiter, 0
  br i1 %lcmp.mod.not, label %for.cond.cleanup, label %for.body.epil.preheader

for.body.epil.preheader:                          ; preds = %for.cond.cleanup.loopexit.unr-lcssa
  br label %for.body.epil

for.body.epil:                                    ; preds = %for.body.epil.preheader, %for.body.epil
  %indvars.iv.epil = phi i64 [ %indvars.iv.next.epil, %for.body.epil ], [ %indvars.iv.unr, %for.body.epil.preheader ]
  %s.05.epil = phi i32 [ %add.epil, %for.body.epil ], [ %s.05.unr, %for.body.epil.preheader ]
  %epil.iter = phi i32 [ %epil.iter.next, %for.body.epil ], [ 0, %for.body.epil.preheader ]
  %arrayidx.epil = getelementptr inbounds i32, ptr %a, i64 %indvars.iv.epil
  %i2 = load i32, ptr %arrayidx.epil, align 4, !tbaa !5
  %add.epil = add nsw i32 %i2, %s.05.epil
  %indvars.iv.next.epil = add nuw nsw i64 %indvars.iv.epil, 1
  %epil.iter.next = add nuw nsw i32 %epil.iter, 1
  %epil.iter.cmp.not = icmp eq i32 %epil.iter.next, %xtraiter
  br i1 %epil.iter.cmp.not, label %for.cond.cleanup.loopexit, label %for.body.epil, !llvm.loop !9

for.cond.cleanup.loopexit:                        ; preds = %for.body.epil
  %add.epil.lcssa = phi i32 [ %add.epil, %for.body.epil ]
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit, %for.cond.cleanup.loopexit.unr-lcssa, %entry
  %s.0.lcssa = phi i32 [ 0, %entry ], [ %add.lcssa.ph, %for.cond.cleanup.loopexit.unr-lcssa ], [ %add.epil.lcssa, %for.cond.cleanup.loopexit ]
  ret i32 %s.0.lcssa

for.body:                                         ; preds = %for.body, %for.body.preheader.new
  %indvars.iv = phi i64 [ 0, %for.body.preheader.new ], [ %indvars.iv.next.3, %for.body ]
  %s.05 = phi i32 [ 0, %for.body.preheader.new ], [ %add.3, %for.body ]
  %niter = phi i32 [ 0, %for.body.preheader.new ], [ %niter.next.3, %for.body ]
  %arrayidx = getelementptr inbounds i32, ptr %a, i64 %indvars.iv
  %i3 = load i32, ptr %arrayidx, align 4, !tbaa !5
  %add = add nsw i32 %i3, %s.05
  %indvars.iv.next = or i64 %indvars.iv, 1
  %arrayidx.1 = getelementptr inbounds i32, ptr %a, i64 %indvars.iv.next
  %i4 = load i32, ptr %arrayidx.1, align 4, !tbaa !5
  %add.1 = add nsw i32 %i4, %add
  %indvars.iv.next.1 = or i64 %indvars.iv, 2
  %arrayidx.2 = getelementptr inbounds i32, ptr %a, i64 %indvars.iv.next.1
  %i5 = load i32, ptr %arrayidx.2, align 4, !tbaa !5
  %add.2 = add nsw i32 %i5, %add.1
  %indvars.iv.next.2 = or i64 %indvars.iv, 3
  %arrayidx.3 = getelementptr inbounds i32, ptr %a, i64 %indvars.iv.next.2
  %i6 = load i32, ptr %arrayidx.3, align 4, !tbaa !5
  %add.3 = add nsw i32 %i6, %add.2
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv, 4
  %niter.next.3 = add i32 %niter, 4
  %niter.ncmp.3.not = icmp eq i32 %niter.next.3, %unroll_iter
  br i1 %niter.ncmp.3.not, label %for.cond.cleanup.loopexit.unr-lcssa.loopexit, label %for.body, !llvm.loop !11
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