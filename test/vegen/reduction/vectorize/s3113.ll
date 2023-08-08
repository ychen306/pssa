; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: opt %s -S -passes=global-slp,simplifycfg,adce | FileCheck %s
; ModuleID = 's3113.ll'
source_filename = "s3113.c"
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@a = local_unnamed_addr global [256 x float] zeroinitializer, align 16

; Function Attrs: nofree nosync nounwind readonly ssp uwtable
define float @foo() local_unnamed_addr #0 {
; CHECK-LABEL: @foo(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[TMP0:%.*]] = load float, ptr @a, align 16, !tbaa [[TBAA5:![0-9]+]]
; CHECK-NEXT:    [[TMP1:%.*]] = tail call fast float @llvm.fabs.f32(float [[TMP0]])
; CHECK-NEXT:    br label [[HEADER:%.*]]
; CHECK:       header:
; CHECK-NEXT:    [[DOTMU_VEC:%.*]] = phi <4 x float> [ <float 0xFFF0000000000000, float 0xFFF0000000000000, float 0xFFF0000000000000, float 0xFFF0000000000000>, [[ENTRY:%.*]] ], [ [[REDUCER_VEC:%.*]], [[HEADER]] ]
; CHECK-NEXT:    [[INDVARS_IV:%.*]] = phi i64 [ 0, [[ENTRY]] ], [ [[INDVARS_IV_NEXT_3:%.*]], [[HEADER]] ]
; CHECK-NEXT:    [[ARRAYIDX:%.*]] = getelementptr inbounds [256 x float], ptr @a, i64 0, i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[DOTVEC:%.*]] = load <4 x float>, ptr [[ARRAYIDX]], align 16
; CHECK-NEXT:    [[TMP2:%.*]] = call <4 x float> @llvm.fabs.v4f32(<4 x float> [[DOTVEC]])
; CHECK-NEXT:    [[INDVARS_IV_NEXT_3]] = add nuw nsw i64 [[INDVARS_IV]], 4
; CHECK-NEXT:    [[EXITCOND_3_NOT:%.*]] = icmp eq i64 [[INDVARS_IV_NEXT_3]], 256
; CHECK-NEXT:    [[REDUCER_VEC]] = call <4 x float> @llvm.maxnum.v4f32(<4 x float> [[DOTMU_VEC]], <4 x float> [[TMP2]])
; CHECK-NEXT:    [[DOT:%.*]] = select i1 [[EXITCOND_3_NOT]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT]], label [[HEADER]], label [[EXIT:%.*]]
; CHECK:       exit:
; CHECK-NEXT:    [[TMP3:%.*]] = call float @llvm.vector.reduce.fmax.v4f32(<4 x float> [[REDUCER_VEC]])
; CHECK-NEXT:    [[TMP4:%.*]] = call float @llvm.maxnum.f32(float [[TMP1]], float [[TMP3]])
; CHECK-NEXT:    ret float [[TMP4]]
;
entry:
  %0 = load float, ptr @a, align 16, !tbaa !5
  %1 = tail call fast float @llvm.fabs.f32(float %0)
  br label %for.body

for.cond.cleanup:                                 ; preds = %for.body
  %max.1.3.lcssa = phi float [ %max.1.3, %for.body ]
  ret float %max.1.3.lcssa

for.body:                                         ; preds = %for.body, %entry
  %indvars.iv = phi i64 [ 0, %entry ], [ %indvars.iv.next.3, %for.body ]
  %max.015 = phi float [ %1, %entry ], [ %max.1.3, %for.body ]
  %arrayidx = getelementptr inbounds [256 x float], ptr @a, i64 0, i64 %indvars.iv
  %2 = load float, ptr %arrayidx, align 16, !tbaa !5
  %3 = tail call fast float @llvm.fabs.f32(float %2)
  %cmp5 = fcmp fast ogt float %3, %max.015
  %max.1 = select i1 %cmp5, float %3, float %max.015
  %indvars.iv.next = or i64 %indvars.iv, 1
  %arrayidx.1 = getelementptr inbounds [256 x float], ptr @a, i64 0, i64 %indvars.iv.next
  %4 = load float, ptr %arrayidx.1, align 4, !tbaa !5
  %5 = tail call fast float @llvm.fabs.f32(float %4)
  %cmp5.1 = fcmp fast ogt float %5, %max.1
  %max.1.1 = select i1 %cmp5.1, float %5, float %max.1
  %indvars.iv.next.1 = or i64 %indvars.iv, 2
  %arrayidx.2 = getelementptr inbounds [256 x float], ptr @a, i64 0, i64 %indvars.iv.next.1
  %6 = load float, ptr %arrayidx.2, align 8, !tbaa !5
  %7 = tail call fast float @llvm.fabs.f32(float %6)
  %cmp5.2 = fcmp fast ogt float %7, %max.1.1
  %max.1.2 = select i1 %cmp5.2, float %7, float %max.1.1
  %indvars.iv.next.2 = or i64 %indvars.iv, 3
  %arrayidx.3 = getelementptr inbounds [256 x float], ptr @a, i64 0, i64 %indvars.iv.next.2
  %8 = load float, ptr %arrayidx.3, align 4, !tbaa !5
  %9 = tail call fast float @llvm.fabs.f32(float %8)
  %cmp5.3 = fcmp fast ogt float %9, %max.1.2
  %max.1.3 = select i1 %cmp5.3, float %9, float %max.1.2
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv, 4
  %exitcond.3.not = icmp eq i64 %indvars.iv.next.3, 256
  br i1 %exitcond.3.not, label %for.cond.cleanup, label %for.body, !llvm.loop !9
}

; Function Attrs: nocallback nofree nosync nounwind readnone speculatable willreturn
declare float @llvm.fabs.f32(float) #1

attributes #0 = { nofree nosync nounwind readonly ssp uwtable "approx-func-fp-math"="true" "frame-pointer"="all" "min-legal-vector-width"="0" "no-infs-fp-math"="true" "no-nans-fp-math"="true" "no-signed-zeros-fp-math"="true" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" "unsafe-fp-math"="true" }
attributes #1 = { nocallback nofree nosync nounwind readnone speculatable willreturn }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"uwtable", i32 2}
!3 = !{i32 7, !"frame-pointer", i32 2}
!4 = !{!"clang version 15.0.6 (https://github.com/llvm/llvm-project 088f33605d8a61ff519c580a71b1dd57d16a03f8)"}
!5 = !{!6, !6, i64 0}
!6 = !{!"float", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C/C++ TBAA"}
!9 = distinct !{!9, !10, !11}
!10 = !{!"llvm.loop.mustprogress"}
!11 = !{!"llvm.loop.unroll.disable"}
