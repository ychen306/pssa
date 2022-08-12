; RUN: %opt -passes=global-slp %s -S | FileCheck %s

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@a = local_unnamed_addr global [1030 x float] zeroinitializer, align 16

; Function Attrs: nofree norecurse nosync nounwind ssp writeonly uwtable
define void @main() local_unnamed_addr #0 {
; CHECK-LABEL: @main(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    br label %[[HEADER:.*]]
; CHECK:       [[HEADER]]:
; CHECK-NEXT:    [[INDVARS_IV:%.*]] = phi i64 [ 0, [[ENTRY:%.*]] ], [ [[TMP9:%.*]], %{{.*}} ]
; CHECK-NEXT:    [[TMP0:%.*]] = insertelement <5 x i64> undef, i64 [[INDVARS_IV]], i64 0
; CHECK-NEXT:    [[TMP1:%.*]] = insertelement <5 x i64> [[TMP0]], i64 [[INDVARS_IV]], i64 1
; CHECK-NEXT:    [[TMP2:%.*]] = insertelement <5 x i64> [[TMP1]], i64 [[INDVARS_IV]], i64 2
; CHECK-NEXT:    [[TMP3:%.*]] = insertelement <5 x i64> [[TMP2]], i64 [[INDVARS_IV]], i64 3
; CHECK-NEXT:    [[TMP4:%.*]] = insertelement <5 x i64> [[TMP3]], i64 [[INDVARS_IV]], i64 4
; CHECK-NEXT:    [[INDVARS_IV_NEXT_1_VEC:%.*]] = add <5 x i64> [[TMP4]], <i64 1, i64 2, i64 3, i64 4, i64 5>
; CHECK-NEXT:    [[TMP5:%.*]] = extractelement <5 x i64> [[INDVARS_IV_NEXT_1_VEC]], i64 0
; CHECK-NEXT:    [[TMP6:%.*]] = extractelement <5 x i64> [[INDVARS_IV_NEXT_1_VEC]], i64 1
; CHECK-NEXT:    [[TMP7:%.*]] = extractelement <5 x i64> [[INDVARS_IV_NEXT_1_VEC]], i64 2
; CHECK-NEXT:    [[TMP8:%.*]] = extractelement <5 x i64> [[INDVARS_IV_NEXT_1_VEC]], i64 3
; CHECK-NEXT:    [[TMP9]] = extractelement <5 x i64> [[INDVARS_IV_NEXT_1_VEC]], i64 4
; CHECK-NEXT:    [[TMP10:%.*]] = trunc <5 x i64> [[INDVARS_IV_NEXT_1_VEC]] to <5 x i32>
; CHECK-NEXT:    [[CONV_1_VEC:%.*]] = sitofp <5 x i32> [[TMP10]] to <5 x float>
; CHECK-NEXT:    [[ARRAYIDX:%.*]] = getelementptr inbounds [1030 x float], ptr @a, i64 0, i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[ARRAYIDX_1:%.*]] = getelementptr inbounds [1030 x float], ptr @a, i64 0, i64 [[TMP5]]
; CHECK-NEXT:    [[ARRAYIDX_2:%.*]] = getelementptr inbounds [1030 x float], ptr @a, i64 0, i64 [[TMP6]]
; CHECK-NEXT:    [[ARRAYIDX_3:%.*]] = getelementptr inbounds [1030 x float], ptr @a, i64 0, i64 [[TMP7]]
; CHECK-NEXT:    [[ARRAYIDX_4:%.*]] = getelementptr inbounds [1030 x float], ptr @a, i64 0, i64 [[TMP8]]
; CHECK-NEXT:    store <5 x float> [[CONV_1_VEC]], ptr [[ARRAYIDX]], align 4
; CHECK-NEXT:    [[EXITCOND_NOT_4:%.*]] = icmp eq i64 [[TMP9]], 1030
; CHECK-NEXT:    br i1 [[EXITCOND_NOT_4]], label [[TMP11:%.*]], label [[TMP12:%.*]]

entry:
  br label %for.body

for.cond.cleanup:                                 ; preds = %for.body
  ret void

for.body:                                         ; preds = %for.body, %entry
  %indvars.iv = phi i64 [ 0, %entry ], [ %indvars.iv.next.4, %for.body ]
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %0 = trunc i64 %indvars.iv.next to i32
  %conv = sitofp i32 %0 to float
  %arrayidx = getelementptr inbounds [1030 x float], ptr @a, i64 0, i64 %indvars.iv
  store float %conv, ptr %arrayidx, align 4, !tbaa !5
  %indvars.iv.next.1 = add nuw nsw i64 %indvars.iv, 2
  %1 = trunc i64 %indvars.iv.next.1 to i32
  %conv.1 = sitofp i32 %1 to float
  %arrayidx.1 = getelementptr inbounds [1030 x float], ptr @a, i64 0, i64 %indvars.iv.next
  store float %conv.1, ptr %arrayidx.1, align 4, !tbaa !5
  %indvars.iv.next.2 = add nuw nsw i64 %indvars.iv, 3
  %2 = trunc i64 %indvars.iv.next.2 to i32
  %conv.2 = sitofp i32 %2 to float
  %arrayidx.2 = getelementptr inbounds [1030 x float], ptr @a, i64 0, i64 %indvars.iv.next.1
  store float %conv.2, ptr %arrayidx.2, align 4, !tbaa !5
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv, 4
  %3 = trunc i64 %indvars.iv.next.3 to i32
  %conv.3 = sitofp i32 %3 to float
  %arrayidx.3 = getelementptr inbounds [1030 x float], ptr @a, i64 0, i64 %indvars.iv.next.2
  store float %conv.3, ptr %arrayidx.3, align 4, !tbaa !5
  %indvars.iv.next.4 = add nuw nsw i64 %indvars.iv, 5
  %4 = trunc i64 %indvars.iv.next.4 to i32
  %conv.4 = sitofp i32 %4 to float
  %arrayidx.4 = getelementptr inbounds [1030 x float], ptr @a, i64 0, i64 %indvars.iv.next.3
  store float %conv.4, ptr %arrayidx.4, align 4, !tbaa !5
  %exitcond.not.4 = icmp eq i64 %indvars.iv.next.4, 1030
  br i1 %exitcond.not.4, label %for.cond.cleanup, label %for.body, !llvm.loop !9
}

attributes #0 = { nofree norecurse nosync nounwind ssp writeonly uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"uwtable", i32 2}
!3 = !{i32 7, !"frame-pointer", i32 2}
!4 = !{!"clang version 15.0.0 (https://github.com/llvm/llvm-project 12f9c7b27063a4a487621f48c167e4f88de6d297)"}
!5 = !{!6, !6, i64 0}
!6 = !{!"float", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C/C++ TBAA"}
!9 = distinct !{!9, !10}
!10 = !{!"llvm.loop.mustprogress"}
