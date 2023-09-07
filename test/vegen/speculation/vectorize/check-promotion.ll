; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=global-slp,simplifycfg,adce -do-versioning | FileCheck %s
; ModuleID = 'copy.ll'
source_filename = "copy.c"
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: argmemonly nofree norecurse nosync nounwind ssp uwtable
define void @foo(i32 noundef %n, ptr nocapture noundef writeonly %a, ptr nocapture noundef readonly %b) local_unnamed_addr #0 {
; CHECK-LABEL: @foo(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[CMP6:%.*]] = icmp sgt i32 [[N:%.*]], 0
; CHECK-NEXT:    br i1 [[CMP6]], label [[TMP0:%.*]], label [[EXIT11:%.*]]
; CHECK:       0:
; CHECK-NEXT:    [[TMP1:%.*]] = add i32 [[N]], -1
; CHECK-NEXT:    [[XTRAITER:%.*]] = and i32 [[N]], 3
; CHECK-NEXT:    [[TMP2:%.*]] = icmp ult i32 [[TMP1]], 3
; CHECK-NEXT:    br i1 [[TMP2]], label [[EXIT:%.*]], label [[TMP3:%.*]]
; CHECK:       3:
; CHECK-NEXT:    [[UNROLL_ITER:%.*]] = and i32 [[N]], -4
; CHECK-NEXT:    [[TMP4:%.*]] = lshr i32 [[N]], 2
; CHECK-NEXT:    [[TMP5:%.*]] = shl nuw i32 [[TMP4]], 2
; CHECK-NEXT:    [[TMP6:%.*]] = add i32 [[TMP5]], -4
; CHECK-NEXT:    [[TMP7:%.*]] = zext i32 [[TMP6]] to i64
; CHECK-NEXT:    [[TMP8:%.*]] = lshr i64 [[TMP7]], 2
; CHECK-NEXT:    [[TMP9:%.*]] = shl nuw nsw i64 [[TMP8]], 4
; CHECK-NEXT:    [[TMP10:%.*]] = add nuw nsw i64 [[TMP9]], 24
; CHECK-NEXT:    [[UGLYGEP:%.*]] = getelementptr i8, ptr [[A:%.*]], i64 [[TMP10]]
; CHECK-NEXT:    [[UGLYGEP1:%.*]] = getelementptr i8, ptr [[B:%.*]], i64 1
; CHECK-NEXT:    [[IDENT_CHECK:%.*]] = icmp ult ptr [[UGLYGEP]], [[UGLYGEP1]]
; CHECK-NEXT:    [[TMP11:%.*]] = lshr i32 [[N]], 2
; CHECK-NEXT:    [[TMP12:%.*]] = shl nuw i32 [[TMP11]], 2
; CHECK-NEXT:    [[TMP13:%.*]] = add i32 [[TMP12]], -4
; CHECK-NEXT:    [[TMP14:%.*]] = zext i32 [[TMP13]] to i64
; CHECK-NEXT:    [[TMP15:%.*]] = lshr i64 [[TMP14]], 2
; CHECK-NEXT:    [[TMP16:%.*]] = shl nuw nsw i64 [[TMP15]], 2
; CHECK-NEXT:    [[TMP17:%.*]] = add nuw nsw i64 [[TMP16]], 7
; CHECK-NEXT:    [[UGLYGEP2:%.*]] = getelementptr i8, ptr [[B]], i64 [[TMP17]]
; CHECK-NEXT:    [[IDENT_CHECK3:%.*]] = icmp ult ptr [[UGLYGEP2]], [[A]]
; CHECK-NEXT:    [[TMP18:%.*]] = or i1 [[IDENT_CHECK]], [[IDENT_CHECK3]]
; CHECK-NEXT:    br i1 [[TMP18]], label [[HEADER4:%.*]], label [[HEADER:%.*]]
; CHECK:       header:
; CHECK-NEXT:    [[NITER_CLONE:%.*]] = phi i32 [ [[NITER_NEXT_3_CLONE:%.*]], [[HEADER]] ], [ 0, [[TMP3]] ]
; CHECK-NEXT:    [[INDVARS_IV_CLONE:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_3_CLONE:%.*]], [[HEADER]] ], [ 0, [[TMP3]] ]
; CHECK-NEXT:    [[ARRAYIDX_CLONE:%.*]] = getelementptr inbounds i8, ptr [[B]], i64 [[INDVARS_IV_CLONE]]
; CHECK-NEXT:    [[TMP19:%.*]] = load i8, ptr [[ARRAYIDX_CLONE]], align 1, !tbaa [[TBAA5:![0-9]+]]
; CHECK-NEXT:    [[CONV_CLONE:%.*]] = sext i8 [[TMP19]] to i32
; CHECK-NEXT:    [[ARRAYIDX2_CLONE:%.*]] = getelementptr inbounds i32, ptr [[A]], i64 [[INDVARS_IV_CLONE]]
; CHECK-NEXT:    store i32 [[CONV_CLONE]], ptr [[ARRAYIDX2_CLONE]], align 4, !tbaa [[TBAA8:![0-9]+]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_CLONE:%.*]] = or i64 [[INDVARS_IV_CLONE]], 1
; CHECK-NEXT:    [[ARRAYIDX_1_CLONE:%.*]] = getelementptr inbounds i8, ptr [[B]], i64 [[INDVARS_IV_NEXT_CLONE]]
; CHECK-NEXT:    [[TMP20:%.*]] = load i8, ptr [[ARRAYIDX_1_CLONE]], align 1, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[CONV_1_CLONE:%.*]] = sext i8 [[TMP20]] to i32
; CHECK-NEXT:    [[ARRAYIDX2_1_CLONE:%.*]] = getelementptr inbounds i32, ptr [[A]], i64 [[INDVARS_IV_NEXT_CLONE]]
; CHECK-NEXT:    store i32 [[CONV_1_CLONE]], ptr [[ARRAYIDX2_1_CLONE]], align 4, !tbaa [[TBAA8]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_1_CLONE:%.*]] = or i64 [[INDVARS_IV_CLONE]], 2
; CHECK-NEXT:    [[ARRAYIDX_2_CLONE:%.*]] = getelementptr inbounds i8, ptr [[B]], i64 [[INDVARS_IV_NEXT_1_CLONE]]
; CHECK-NEXT:    [[TMP21:%.*]] = load i8, ptr [[ARRAYIDX_2_CLONE]], align 1, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[CONV_2_CLONE:%.*]] = sext i8 [[TMP21]] to i32
; CHECK-NEXT:    [[ARRAYIDX2_2_CLONE:%.*]] = getelementptr inbounds i32, ptr [[A]], i64 [[INDVARS_IV_NEXT_1_CLONE]]
; CHECK-NEXT:    store i32 [[CONV_2_CLONE]], ptr [[ARRAYIDX2_2_CLONE]], align 4, !tbaa [[TBAA8]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_2_CLONE:%.*]] = or i64 [[INDVARS_IV_CLONE]], 3
; CHECK-NEXT:    [[ARRAYIDX_3_CLONE:%.*]] = getelementptr inbounds i8, ptr [[B]], i64 [[INDVARS_IV_NEXT_2_CLONE]]
; CHECK-NEXT:    [[TMP22:%.*]] = load i8, ptr [[ARRAYIDX_3_CLONE]], align 1, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[CONV_3_CLONE:%.*]] = sext i8 [[TMP22]] to i32
; CHECK-NEXT:    [[ARRAYIDX2_3_CLONE:%.*]] = getelementptr inbounds i32, ptr [[A]], i64 [[INDVARS_IV_NEXT_2_CLONE]]
; CHECK-NEXT:    store i32 [[CONV_3_CLONE]], ptr [[ARRAYIDX2_3_CLONE]], align 4, !tbaa [[TBAA8]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_3_CLONE]] = add nuw nsw i64 [[INDVARS_IV_CLONE]], 4
; CHECK-NEXT:    [[NITER_NEXT_3_CLONE]] = add i32 [[NITER_CLONE]], 4
; CHECK-NEXT:    [[NITER_NCMP_3_NOT_CLONE:%.*]] = icmp eq i32 [[NITER_NEXT_3_CLONE]], [[UNROLL_ITER]]
; CHECK-NEXT:    [[DOT:%.*]] = select i1 [[NITER_NCMP_3_NOT_CLONE]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT]], label [[HEADER]], label [[EXIT]]
; CHECK:       header4:
; CHECK-NEXT:    [[NITER:%.*]] = phi i32 [ [[NITER_NEXT_3:%.*]], [[HEADER4]] ], [ 0, [[TMP3]] ]
; CHECK-NEXT:    [[INDVARS_IV:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_3:%.*]], [[HEADER4]] ], [ 0, [[TMP3]] ]
; CHECK-NEXT:    [[ARRAYIDX:%.*]] = getelementptr inbounds i8, ptr [[B]], i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[DOTVEC:%.*]] = load <4 x i8>, ptr [[ARRAYIDX]], align 1, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[CONV_1_VEC:%.*]] = sext <4 x i8> [[DOTVEC]] to <4 x i32>
; CHECK-NEXT:    [[ARRAYIDX2:%.*]] = getelementptr inbounds i32, ptr [[A]], i64 [[INDVARS_IV]]
; CHECK-NEXT:    store <4 x i32> [[CONV_1_VEC]], ptr [[ARRAYIDX2]], align 4, !tbaa [[TBAA8]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_3]] = add nuw nsw i64 [[INDVARS_IV]], 4
; CHECK-NEXT:    [[NITER_NEXT_3]] = add i32 [[NITER]], 4
; CHECK-NEXT:    [[NITER_NCMP_3_NOT:%.*]] = icmp eq i32 [[NITER_NEXT_3]], [[UNROLL_ITER]]
; CHECK-NEXT:    [[DOT14:%.*]] = select i1 [[NITER_NCMP_3_NOT]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT14]], label [[HEADER4]], label [[EXIT]]
; CHECK:       exit:
; CHECK-NEXT:    [[INDVARS_IV_UNR_DEMOTED_0:%.*]] = phi i64 [ 0, [[TMP0]] ], [ [[INDVARS_IV_NEXT_3_CLONE]], [[HEADER]] ], [ [[INDVARS_IV_NEXT_3]], [[HEADER4]] ]
; CHECK-NEXT:    [[LCMP_MOD_NOT:%.*]] = icmp eq i32 [[XTRAITER]], 0
; CHECK-NEXT:    br i1 [[LCMP_MOD_NOT]], label [[EXIT11]], label [[HEADER9:%.*]]
; CHECK:       header9:
; CHECK-NEXT:    [[EPIL_ITER:%.*]] = phi i32 [ [[EPIL_ITER_NEXT:%.*]], [[HEADER9]] ], [ 0, [[EXIT]] ]
; CHECK-NEXT:    [[INDVARS_IV_EPIL:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_EPIL:%.*]], [[HEADER9]] ], [ [[INDVARS_IV_UNR_DEMOTED_0]], [[EXIT]] ]
; CHECK-NEXT:    [[ARRAYIDX_EPIL:%.*]] = getelementptr inbounds i8, ptr [[B]], i64 [[INDVARS_IV_EPIL]]
; CHECK-NEXT:    [[TMP23:%.*]] = load i8, ptr [[ARRAYIDX_EPIL]], align 1, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[CONV_EPIL:%.*]] = sext i8 [[TMP23]] to i32
; CHECK-NEXT:    [[ARRAYIDX2_EPIL:%.*]] = getelementptr inbounds i32, ptr [[A]], i64 [[INDVARS_IV_EPIL]]
; CHECK-NEXT:    store i32 [[CONV_EPIL]], ptr [[ARRAYIDX2_EPIL]], align 4, !tbaa [[TBAA8]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_EPIL]] = add nuw nsw i64 [[INDVARS_IV_EPIL]], 1
; CHECK-NEXT:    [[EPIL_ITER_NEXT]] = add nuw nsw i32 [[EPIL_ITER]], 1
; CHECK-NEXT:    [[EPIL_ITER_CMP_NOT:%.*]] = icmp eq i32 [[EPIL_ITER_NEXT]], [[XTRAITER]]
; CHECK-NEXT:    [[DOT15:%.*]] = select i1 [[EPIL_ITER_CMP_NOT]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT15]], label [[HEADER9]], label [[EXIT11]]
; CHECK:       exit11:
; CHECK-NEXT:    ret void
;
entry:
  %cmp6 = icmp sgt i32 %n, 0
  br i1 %cmp6, label %for.body.preheader, label %for.cond.cleanup

for.body.preheader:                               ; preds = %entry
  %0 = add i32 %n, -1
  %xtraiter = and i32 %n, 3
  %1 = icmp ult i32 %0, 3
  br i1 %1, label %for.cond.cleanup.loopexit.unr-lcssa, label %for.body.preheader.new

for.body.preheader.new:                           ; preds = %for.body.preheader
  %unroll_iter = and i32 %n, -4
  br label %for.body

for.cond.cleanup.loopexit.unr-lcssa.loopexit:     ; preds = %for.body
  %indvars.iv.next.3.lcssa = phi i64 [ %indvars.iv.next.3, %for.body ]
  br label %for.cond.cleanup.loopexit.unr-lcssa

for.cond.cleanup.loopexit.unr-lcssa:              ; preds = %for.cond.cleanup.loopexit.unr-lcssa.loopexit, %for.body.preheader
  %indvars.iv.unr = phi i64 [ 0, %for.body.preheader ], [ %indvars.iv.next.3.lcssa, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %lcmp.mod.not = icmp eq i32 %xtraiter, 0
  br i1 %lcmp.mod.not, label %for.cond.cleanup, label %for.body.epil.preheader

for.body.epil.preheader:                          ; preds = %for.cond.cleanup.loopexit.unr-lcssa
  br label %for.body.epil

for.body.epil:                                    ; preds = %for.body.epil.preheader, %for.body.epil
  %indvars.iv.epil = phi i64 [ %indvars.iv.next.epil, %for.body.epil ], [ %indvars.iv.unr, %for.body.epil.preheader ]
  %epil.iter = phi i32 [ %epil.iter.next, %for.body.epil ], [ 0, %for.body.epil.preheader ]
  %arrayidx.epil = getelementptr inbounds i8, ptr %b, i64 %indvars.iv.epil
  %2 = load i8, ptr %arrayidx.epil, align 1, !tbaa !5
  %conv.epil = sext i8 %2 to i32
  %arrayidx2.epil = getelementptr inbounds i32, ptr %a, i64 %indvars.iv.epil
  store i32 %conv.epil, ptr %arrayidx2.epil, align 4, !tbaa !8
  %indvars.iv.next.epil = add nuw nsw i64 %indvars.iv.epil, 1
  %epil.iter.next = add nuw nsw i32 %epil.iter, 1
  %epil.iter.cmp.not = icmp eq i32 %epil.iter.next, %xtraiter
  br i1 %epil.iter.cmp.not, label %for.cond.cleanup.loopexit, label %for.body.epil, !llvm.loop !10

for.cond.cleanup.loopexit:                        ; preds = %for.body.epil
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit, %for.cond.cleanup.loopexit.unr-lcssa, %entry
  ret void

for.body:                                         ; preds = %for.body, %for.body.preheader.new
  %indvars.iv = phi i64 [ 0, %for.body.preheader.new ], [ %indvars.iv.next.3, %for.body ]
  %niter = phi i32 [ 0, %for.body.preheader.new ], [ %niter.next.3, %for.body ]
  %arrayidx = getelementptr inbounds i8, ptr %b, i64 %indvars.iv
  %3 = load i8, ptr %arrayidx, align 1, !tbaa !5
  %conv = sext i8 %3 to i32
  %arrayidx2 = getelementptr inbounds i32, ptr %a, i64 %indvars.iv
  store i32 %conv, ptr %arrayidx2, align 4, !tbaa !8
  %indvars.iv.next = or i64 %indvars.iv, 1
  %arrayidx.1 = getelementptr inbounds i8, ptr %b, i64 %indvars.iv.next
  %4 = load i8, ptr %arrayidx.1, align 1, !tbaa !5
  %conv.1 = sext i8 %4 to i32
  %arrayidx2.1 = getelementptr inbounds i32, ptr %a, i64 %indvars.iv.next
  store i32 %conv.1, ptr %arrayidx2.1, align 4, !tbaa !8
  %indvars.iv.next.1 = or i64 %indvars.iv, 2
  %arrayidx.2 = getelementptr inbounds i8, ptr %b, i64 %indvars.iv.next.1
  %5 = load i8, ptr %arrayidx.2, align 1, !tbaa !5
  %conv.2 = sext i8 %5 to i32
  %arrayidx2.2 = getelementptr inbounds i32, ptr %a, i64 %indvars.iv.next.1
  store i32 %conv.2, ptr %arrayidx2.2, align 4, !tbaa !8
  %indvars.iv.next.2 = or i64 %indvars.iv, 3
  %arrayidx.3 = getelementptr inbounds i8, ptr %b, i64 %indvars.iv.next.2
  %6 = load i8, ptr %arrayidx.3, align 1, !tbaa !5
  %conv.3 = sext i8 %6 to i32
  %arrayidx2.3 = getelementptr inbounds i32, ptr %a, i64 %indvars.iv.next.2
  store i32 %conv.3, ptr %arrayidx2.3, align 4, !tbaa !8
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv, 4
  %niter.next.3 = add i32 %niter, 4
  %niter.ncmp.3.not = icmp eq i32 %niter.next.3, %unroll_iter
  br i1 %niter.ncmp.3.not, label %for.cond.cleanup.loopexit.unr-lcssa.loopexit, label %for.body, !llvm.loop !12
}

attributes #0 = { argmemonly nofree norecurse nosync nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"uwtable", i32 2}
!3 = !{i32 7, !"frame-pointer", i32 2}
!4 = !{!"clang version 15.0.6 (https://github.com/llvm/llvm-project 088f33605d8a61ff519c580a71b1dd57d16a03f8)"}
!5 = !{!6, !6, i64 0}
!6 = !{!"omnipotent char", !7, i64 0}
!7 = !{!"Simple C/C++ TBAA"}
!8 = !{!9, !9, i64 0}
!9 = !{!"int", !6, i64 0}
!10 = distinct !{!10, !11}
!11 = !{!"llvm.loop.unroll.disable"}
!12 = distinct !{!12, !13, !11}
!13 = !{!"llvm.loop.mustprogress"}