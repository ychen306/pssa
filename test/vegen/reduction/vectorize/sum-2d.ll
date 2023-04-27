; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: opt -load-pass-plugin /Users/tom/workspace/pssa/build/lib/libPSSA.so %s -S -passes=global-slp,simplifycfg,gvn,indvars,adce | FileCheck %s
; ModuleID = 'x.ll'
source_filename = "sum-2d.c"
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: argmemonly nofree norecurse nosync nounwind readonly ssp uwtable
define i32 @sum(i32 noundef %n, ptr nocapture noundef readonly %a) local_unnamed_addr #0 {
; CHECK-LABEL: @sum(
; CHECK-NEXT:  [[ENTRY:.*]]:
; CHECK-NEXT:    [[I:%.*]] = zext i32 [[N:%.*]] to i64
; CHECK-NEXT:    [[CMP21:%.*]] = icmp sgt i32 [[N]], 0
; CHECK-NEXT:    br i1 [[CMP21]], label %[[TMP0:.*]], label %[[EXIT:.*]]
; CHECK:       [[TMP0]]:
; CHECK-NEXT:    [[I1:%.*]] = add i32 [[N]], -1
; CHECK-NEXT:    [[XTRAITER:%.*]] = and i32 [[N]], 3
; CHECK-NEXT:    [[I2:%.*]] = icmp ult i32 [[I1]], 3
; CHECK-NEXT:    [[UNROLL_ITER:%.*]] = and i32 [[N]], -4
; CHECK-NEXT:    [[LCMP_MOD_NOT:%.*]] = icmp eq i32 [[XTRAITER]], 0
; CHECK-NEXT:    br label %[[HEADER:.*]]
; CHECK:       [[HEADER]]:
; CHECK-DAG:    [[REDUCER_MEM_0:%.*]] = phi i32 [ undef, %[[TMP0]] ], [ [[REDUCER_MEM_1:%.*]], %[[EXIT12:.*]] ]
; CHECK-DAG:    [[REDUCER_VEC_MEM_0:%.*]] = phi <4 x i32> [ undef, %[[TMP0]] ], [ [[REDUCER_VEC_MEM_1:%.*]], %[[EXIT12]] ]
; CHECK-DAG:    [[DOTMU_VEC:%.*]] = phi <4 x i32> [ zeroinitializer, %[[TMP0]] ], [ [[REDUCER_VEC15:%.*]], %[[EXIT12]] ]
; CHECK-DAG:    [[TMP1:%.*]] = phi i32 [ 0, %[[TMP0]] ], [ [[REDUCER18:%.*]], %[[EXIT12]] ]
; CHECK-DAG:    [[INDVARS_IV27:%.*]] = phi i64 [ 0, %[[TMP0]] ], [ [[INDVARS_IV_NEXT28:%.*]], %[[EXIT12]] ]
; CHECK-NEXT:    [[I3:%.*]] = mul nuw nsw i64 [[INDVARS_IV27]], [[I]]
; CHECK-NEXT:    [[ARRAYIDX:%.*]] = getelementptr inbounds i32, ptr [[A:%.*]], i64 [[I3]]
; CHECK-NEXT:    br i1 [[I2]], label %[[EXIT6:.*]], label %[[HEADER4_PREHEADER:.*]]
; CHECK:       [[HEADER4_PREHEADER]]:
; CHECK-NEXT:    br label %[[HEADER4:.*]]
; CHECK:       [[HEADER4]]:
; CHECK-DAG:    [[DOTMU_VEC8:%.*]] = phi <4 x i32> [ [[REDUCER_VEC:%.*]], %[[HEADER4]] ], [ zeroinitializer, %[[HEADER4_PREHEADER]] ]
; CHECK-DAG:    [[INDVARS_IV:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_3:%.*]], %[[HEADER4]] ], [ 0, %[[HEADER4_PREHEADER]] ]
; CHECK-NEXT:    [[ARRAYIDX6:%.*]] = getelementptr inbounds i32, ptr [[ARRAYIDX]], i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[I6_VEC:%.*]] = load <4 x i32>, ptr [[ARRAYIDX6]], align 4
; CHECK-NEXT:    [[INDVARS_IV_NEXT_3]] = add nuw nsw i64 [[INDVARS_IV]], 4
; CHECK-NEXT:    [[INDVARS:%.*]] = trunc i64 [[INDVARS_IV_NEXT_3]] to i32
; CHECK-NEXT:    [[NITER_NCMP_3_NOT:%.*]] = icmp eq i32 [[INDVARS]], [[UNROLL_ITER]]
; CHECK-NEXT:    [[REDUCER_VEC]] = add <4 x i32> [[DOTMU_VEC8]], [[I6_VEC]]
; CHECK-NEXT:    [[DOT:%.*]] = select i1 [[NITER_NCMP_3_NOT]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT]], label %[[HEADER4]], label %[[EXIT6_LOOPEXIT:.*]]
; CHECK:       [[EXIT6_LOOPEXIT]]:
; CHECK-DAG:    [[INDVARS_IV_NEXT_3_LCSSA:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_3]], %[[HEADER4]] ]
; CHECK-DAG:    [[REDUCER_VEC_LCSSA:%.*]] = phi <4 x i32> [ [[REDUCER_VEC]], %[[HEADER4]] ]
; CHECK-NEXT:    br label %[[EXIT6]]
; CHECK:       [[EXIT6]]:
; CHECK-DAG:    [[REDUCER_VEC_MEM_1]] = phi <4 x i32> [ [[REDUCER_VEC_MEM_0]], %[[HEADER]] ], [ [[REDUCER_VEC_LCSSA]], %[[EXIT6_LOOPEXIT]] ]
; CHECK-DAG:    [[INDVARS_IV_UNR_DEMOTED_0:%.*]] = phi i64 [ 0, %[[HEADER]] ], [ [[INDVARS_IV_NEXT_3_LCSSA]], %[[EXIT6_LOOPEXIT]] ]
; CHECK-NEXT:    br i1 [[LCMP_MOD_NOT]], label %[[EXIT12]], label %[[HEADER10_PREHEADER:.*]]
; CHECK:       [[HEADER10_PREHEADER]]:
; CHECK-NEXT:    br label %[[HEADER10:.*]]
; CHECK:       [[HEADER10]]:
; CHECK-DAG:    [[TMP2:%.*]] = phi i32 [ [[REDUCER:%.*]], %[[HEADER10]] ], [ 0, %[[HEADER10_PREHEADER]] ]
; CHECK-DAG:    [[EPIL_ITER:%.*]] = phi i32 [ [[EPIL_ITER_NEXT:%.*]], %[[HEADER10]] ], [ 0, %[[HEADER10_PREHEADER]] ]
; CHECK-DAG:    [[INDVARS_IV_EPIL:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_EPIL:%.*]], %[[HEADER10]] ], [ [[INDVARS_IV_UNR_DEMOTED_0]], %[[HEADER10_PREHEADER]] ]
; CHECK-NEXT:    [[ARRAYIDX6_EPIL:%.*]] = getelementptr inbounds i32, ptr [[ARRAYIDX]], i64 [[INDVARS_IV_EPIL]]
; CHECK-NEXT:    [[I4:%.*]] = load i32, ptr [[ARRAYIDX6_EPIL]], align 4, !tbaa [[TBAA5:![0-9]+]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_EPIL]] = add nuw nsw i64 [[INDVARS_IV_EPIL]], 1
; CHECK-NEXT:    [[EPIL_ITER_NEXT]] = add nuw nsw i32 [[EPIL_ITER]], 1
; CHECK-NEXT:    [[EPIL_ITER_CMP_NOT:%.*]] = icmp eq i32 [[EPIL_ITER_NEXT]], [[XTRAITER]]
; CHECK-NEXT:    [[REDUCER]] = add i32 [[TMP2]], [[I4]]
; CHECK-NEXT:    [[DOT22:%.*]] = select i1 [[EPIL_ITER_CMP_NOT]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT22]], label %[[HEADER10]], label %[[EXIT12_LOOPEXIT:.*]]
; CHECK:       [[EXIT12_LOOPEXIT]]:
; CHECK-NEXT:    [[REDUCER_LCSSA:%.*]] = phi i32 [ [[REDUCER]], %[[HEADER10]] ]
; CHECK-NEXT:    br label %[[EXIT12]]
; CHECK:       [[EXIT12]]:
; CHECK-NEXT:    [[REDUCER_MEM_1]] = phi i32 [ [[REDUCER_MEM_0]], %[[EXIT6]] ], [ [[REDUCER_LCSSA]], %[[EXIT12_LOOPEXIT]] ]
; CHECK-NEXT:    [[INDVARS_IV_NEXT28]] = add nuw nsw i64 [[INDVARS_IV27]], 1
; CHECK-NEXT:    [[EXITCOND_NOT:%.*]] = icmp eq i64 [[INDVARS_IV_NEXT28]], [[I]]
; CHECK-NEXT:    [[DOTREDUCER_VEC_MEM_1:%.*]] = select i1 [[I2]], <4 x i32> zeroinitializer, <4 x i32> [[REDUCER_VEC_MEM_1]]
; CHECK-NEXT:    [[REDUCER_VEC15]] = add <4 x i32> [[DOTMU_VEC]], [[DOTREDUCER_VEC_MEM_1]]
; CHECK-NEXT:    [[DOTDEMOTED_0:%.*]] = select i1 [[LCMP_MOD_NOT]], i32 0, i32 [[REDUCER_MEM_1]]
; CHECK-NEXT:    [[REDUCER18]] = add i32 [[TMP1]], [[DOTDEMOTED_0]]
; CHECK-NEXT:    [[SHOULD_CONTINUE_MEM_0:%.*]] = select i1 [[EXITCOND_NOT]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[SHOULD_CONTINUE_MEM_0]], label %[[HEADER]], label %[[EXIT_LOOPEXIT:.*]]
; CHECK:       [[EXIT_LOOPEXIT]]:
; CHECK-DAG:    [[REDUCER_VEC15_LCSSA:%.*]] = phi <4 x i32> [ [[REDUCER_VEC15]], %[[EXIT12]] ]
; CHECK-DAG:    [[REDUCER18_LCSSA:%.*]] = phi i32 [ [[REDUCER18]], %[[EXIT12]] ]
; CHECK-NEXT:    br label %[[EXIT]]
; CHECK:       [[EXIT]]:
; CHECK-DAG:    [[REDUCER_VEC15_MEM_0:%.*]] = phi <4 x i32> [ undef, %[[ENTRY]] ], [ [[REDUCER_VEC15_LCSSA]], %[[EXIT_LOOPEXIT]] ]
; CHECK-DAG:    [[REDUCER18_MEM_0:%.*]] = phi i32 [ undef, %[[ENTRY]] ], [ [[REDUCER18_LCSSA]], %[[EXIT_LOOPEXIT]] ]
; CHECK-NEXT:    [[REDUCER18_MEM_0_:%.*]] = select i1 [[CMP21]], i32 [[REDUCER18_MEM_0]], i32 0
; CHECK-NEXT:    [[REDUCER_VEC15_MEM_0_:%.*]] = select i1 [[CMP21]], <4 x i32> [[REDUCER_VEC15_MEM_0]], <4 x i32> zeroinitializer
; CHECK-NEXT:    [[TMP3:%.*]] = call i32 @llvm.vector.reduce.add.v4i32(<4 x i32> [[REDUCER_VEC15_MEM_0_]])
; CHECK-NEXT:    [[TMP4:%.*]] = add i32 [[REDUCER18_MEM_0_]], [[TMP3]]
; CHECK-NEXT:    ret i32 [[TMP4]]
;
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