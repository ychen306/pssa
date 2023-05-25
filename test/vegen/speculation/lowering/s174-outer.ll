; RUN: %opt %s -S -passes=test-vector-codegen,simplifycfg,gvn,jump-threading -p add,add.1,add.2,add.3 -p storeOf:add,storeOf:add.1,storeOf:add.2,storeOf:add.3 -p i2,i5,i8,i10 -p i3,i6,i9,i11 -find-conditional-deps | FileCheck %s
; ModuleID = 's174-outer.ll'
source_filename = "s174-outer.c"
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@a = local_unnamed_addr global [320000 x [320000 x float]] zeroinitializer, align 16
@b = local_unnamed_addr global [320000 x [320000 x float]] zeroinitializer, align 16

; Function Attrs: nofree norecurse nosync nounwind ssp uwtable
define void @s174(i32 noundef %M) local_unnamed_addr #0 {
; CHECK-LABEL: @s174(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[I:%.*]] = sext i32 [[M:%.*]] to i64
; CHECK-NEXT:    [[TMP0:%.*]] = shl nsw i64 [[I]], 2
; CHECK-NEXT:    [[UGLYGEP:%.*]] = getelementptr i8, ptr @a, i64 [[TMP0]]
; CHECK-NEXT:    [[IDENT_CHECK:%.*]] = icmp ult ptr getelementptr (i8, ptr @a, i64 409600000016), [[UGLYGEP]]
; CHECK-NEXT:    [[TMP1:%.*]] = add nsw i64 [[TMP0]], 409600000016
; CHECK-NEXT:    [[UGLYGEP1:%.*]] = getelementptr i8, ptr @a, i64 [[TMP1]]
; CHECK-NEXT:    [[IDENT_CHECK2:%.*]] = icmp ult ptr [[UGLYGEP1]], @a
; CHECK-NEXT:    [[TMP2:%.*]] = or i1 [[IDENT_CHECK]], [[IDENT_CHECK2]]
; CHECK-NEXT:    br i1 [[TMP2]], label [[EXIT:%.*]], label [[HEADER:%.*]]
; CHECK:       header:
; CHECK-NEXT:    [[INDVARS_IV_CLONE:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_CLONE:%.*]], [[HEADER]] ], [ 0, [[ENTRY:%.*]] ]
; CHECK-NEXT:    [[ARRAYIDX6_CLONE:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_CLONE]], i64 0
; CHECK-NEXT:    [[I10_CLONE:%.*]] = load float, ptr [[ARRAYIDX6_CLONE]], align 16, !tbaa [[TBAA5:![0-9]+]]
; CHECK-NEXT:    [[ARRAYIDX10_CLONE:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 [[INDVARS_IV_CLONE]], i64 0
; CHECK-NEXT:    [[I11_CLONE:%.*]] = load float, ptr [[ARRAYIDX10_CLONE]], align 16, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_CLONE:%.*]] = fadd float [[I10_CLONE]], [[I11_CLONE]]
; CHECK-NEXT:    [[ARRAYIDX15_CLONE:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_CLONE]], i64 [[I]]
; CHECK-NEXT:    store float [[ADD_CLONE]], ptr [[ARRAYIDX15_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_CLONE]] = add nuw nsw i64 [[INDVARS_IV_CLONE]], 1
; CHECK-NEXT:    [[EXITCOND_NOT_CLONE:%.*]] = icmp eq i64 [[INDVARS_IV_NEXT_CLONE]], 320000
; CHECK-NEXT:    [[DOT:%.*]] = select i1 [[EXITCOND_NOT_CLONE]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT]], label [[HEADER]], label [[EXIT]]
; CHECK:       exit:
; CHECK-NEXT:    [[I1:%.*]] = add nsw i64 [[I]], 1
; CHECK-NEXT:    [[I4:%.*]] = add nsw i64 [[I]], 2
; CHECK-NEXT:    [[I7:%.*]] = add nsw i64 [[I]], 3
; CHECK-NEXT:    br i1 [[TMP2]], label [[LATCH4:%.*]], label [[HEADER24:%.*]]
; CHECK:       latch4:
; CHECK-NEXT:    [[I3_VEC53:%.*]] = phi <4 x float> [ [[I3_VEC_PRE:%.*]], [[LATCH4]] ], [ undef, [[EXIT]] ]
; CHECK-NEXT:    [[I2_VEC51:%.*]] = phi <4 x float> [ [[I2_VEC_PRE:%.*]], [[LATCH4]] ], [ undef, [[EXIT]] ]
; CHECK-NEXT:    [[INDVARS_IV_3:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_3:%.*]], [[LATCH4]] ], [ 0, [[EXIT]] ]
; CHECK-NEXT:    [[INDVARS_IV_2:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_2:%.*]], [[LATCH4]] ], [ 0, [[EXIT]] ]
; CHECK-NEXT:    [[INDVARS_IV_1:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_1:%.*]], [[LATCH4]] ], [ 0, [[EXIT]] ]
; CHECK-NEXT:    [[INDVARS_IV:%.*]] = phi i64 [ [[INDVARS_IV_NEXT:%.*]], [[LATCH4]] ], [ 0, [[EXIT]] ]
; CHECK-NEXT:    [[ARRAYIDX6:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV]], i64 0
; CHECK-NEXT:    [[I2_VEC_PRE]] = load <4 x float>, ptr [[ARRAYIDX6]], align 16
; CHECK-NEXT:    [[ARRAYIDX6_1:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_1]], i64 1
; CHECK-NEXT:    [[ARRAYIDX6_2:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_2]], i64 2
; CHECK-NEXT:    [[ARRAYIDX6_3:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_3]], i64 3
; CHECK-NEXT:    [[ARRAYIDX10:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 [[INDVARS_IV]], i64 0
; CHECK-NEXT:    [[I3_VEC_PRE]] = load <4 x float>, ptr [[ARRAYIDX10]], align 16
; CHECK-NEXT:    [[ARRAYIDX10_1:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 [[INDVARS_IV_1]], i64 1
; CHECK-NEXT:    [[ARRAYIDX10_2:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 [[INDVARS_IV_2]], i64 2
; CHECK-NEXT:    [[ARRAYIDX10_3:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 [[INDVARS_IV_3]], i64 3
; CHECK-NEXT:    [[ADD_1_VEC:%.*]] = fadd <4 x float> [[I2_VEC_PRE]], [[I3_VEC_PRE]]
; CHECK-NEXT:    [[ARRAYIDX15:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV]], i64 [[I]]
; CHECK-NEXT:    [[ARRAYIDX15_1:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_1]], i64 [[I1]]
; CHECK-NEXT:    [[ARRAYIDX15_2:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_2]], i64 [[I4]]
; CHECK-NEXT:    [[ARRAYIDX15_3:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_3]], i64 [[I7]]
; CHECK-NEXT:    call void @llvm.masked.store.v4f32.p0(<4 x float> [[ADD_1_VEC]], ptr [[ARRAYIDX15]], i32 4, <4 x i1> <i1 true, i1 true, i1 true, i1 true>)
; CHECK-NEXT:    [[INDVARS_IV_NEXT]] = add nuw nsw i64 [[INDVARS_IV]], 1
; CHECK-NEXT:    [[EXITCOND_NOT:%.*]] = icmp eq i64 [[INDVARS_IV_NEXT]], 320000
; CHECK-NEXT:    [[INDVARS_IV_NEXT_1]] = add nuw nsw i64 [[INDVARS_IV_1]], 1
; CHECK-NEXT:    [[EXITCOND_1_NOT:%.*]] = icmp eq i64 [[INDVARS_IV_NEXT_1]], 320000
; CHECK-NEXT:    [[INDVARS_IV_NEXT_2]] = add nuw nsw i64 [[INDVARS_IV_2]], 1
; CHECK-NEXT:    [[EXITCOND_2_NOT:%.*]] = icmp eq i64 [[INDVARS_IV_NEXT_2]], 320000
; CHECK-NEXT:    [[INDVARS_IV_NEXT_3]] = add nuw nsw i64 [[INDVARS_IV_3]], 1
; CHECK-NEXT:    [[EXITCOND_3_NOT:%.*]] = icmp eq i64 [[INDVARS_IV_NEXT_3]], 320000
; CHECK-NEXT:    [[DOT47:%.*]] = select i1 [[EXITCOND_NOT]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT47]], label [[LATCH4]], label [[EXIT5:%.*]]
; CHECK:       header24:
; CHECK-NEXT:    [[INDVARS_IV_1_CLONE:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_1_CLONE:%.*]], [[HEADER24]] ], [ 0, [[EXIT]] ]
; CHECK-NEXT:    [[ARRAYIDX6_1_CLONE:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_1_CLONE]], i64 1
; CHECK-NEXT:    [[I2_CLONE:%.*]] = load float, ptr [[ARRAYIDX6_1_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ARRAYIDX10_1_CLONE:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 [[INDVARS_IV_1_CLONE]], i64 1
; CHECK-NEXT:    [[I3_CLONE:%.*]] = load float, ptr [[ARRAYIDX10_1_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_1_CLONE:%.*]] = fadd float [[I2_CLONE]], [[I3_CLONE]]
; CHECK-NEXT:    [[ARRAYIDX15_1_CLONE:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_1_CLONE]], i64 [[I1]]
; CHECK-NEXT:    store float [[ADD_1_CLONE]], ptr [[ARRAYIDX15_1_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_1_CLONE]] = add nuw nsw i64 [[INDVARS_IV_1_CLONE]], 1
; CHECK-NEXT:    [[EXITCOND_1_NOT_CLONE:%.*]] = icmp eq i64 [[INDVARS_IV_NEXT_1_CLONE]], 320000
; CHECK-NEXT:    [[DOT48:%.*]] = select i1 [[EXITCOND_1_NOT_CLONE]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT48]], label [[HEADER24]], label [[HEADER29:%.*]]
; CHECK:       header29:
; CHECK-NEXT:    [[INDVARS_IV_2_CLONE:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_2_CLONE:%.*]], [[HEADER29]] ], [ 0, [[HEADER24]] ]
; CHECK-NEXT:    [[ARRAYIDX6_2_CLONE:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_2_CLONE]], i64 2
; CHECK-NEXT:    [[I5_CLONE:%.*]] = load float, ptr [[ARRAYIDX6_2_CLONE]], align 8, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ARRAYIDX10_2_CLONE:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 [[INDVARS_IV_2_CLONE]], i64 2
; CHECK-NEXT:    [[I6_CLONE:%.*]] = load float, ptr [[ARRAYIDX10_2_CLONE]], align 8, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_2_CLONE:%.*]] = fadd float [[I5_CLONE]], [[I6_CLONE]]
; CHECK-NEXT:    [[ARRAYIDX15_2_CLONE:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_2_CLONE]], i64 [[I4]]
; CHECK-NEXT:    store float [[ADD_2_CLONE]], ptr [[ARRAYIDX15_2_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_2_CLONE]] = add nuw nsw i64 [[INDVARS_IV_2_CLONE]], 1
; CHECK-NEXT:    [[EXITCOND_2_NOT_CLONE:%.*]] = icmp eq i64 [[INDVARS_IV_NEXT_2_CLONE]], 320000
; CHECK-NEXT:    [[DOT49:%.*]] = select i1 [[EXITCOND_2_NOT_CLONE]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT49]], label [[HEADER29]], label [[HEADER34:%.*]]
; CHECK:       header34:
; CHECK-NEXT:    [[INDVARS_IV_3_CLONE:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_3_CLONE:%.*]], [[HEADER34]] ], [ 0, [[HEADER29]] ]
; CHECK-NEXT:    [[ARRAYIDX6_3_CLONE:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_3_CLONE]], i64 3
; CHECK-NEXT:    [[I8_CLONE:%.*]] = load float, ptr [[ARRAYIDX6_3_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ARRAYIDX10_3_CLONE:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 [[INDVARS_IV_3_CLONE]], i64 3
; CHECK-NEXT:    [[I9_CLONE:%.*]] = load float, ptr [[ARRAYIDX10_3_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_3_CLONE:%.*]] = fadd float [[I8_CLONE]], [[I9_CLONE]]
; CHECK-NEXT:    [[ARRAYIDX15_3_CLONE:%.*]] = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 [[INDVARS_IV_3_CLONE]], i64 [[I7]]
; CHECK-NEXT:    store float [[ADD_3_CLONE]], ptr [[ARRAYIDX15_3_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_3_CLONE]] = add nuw nsw i64 [[INDVARS_IV_3_CLONE]], 1
; CHECK-NEXT:    [[EXITCOND_3_NOT_CLONE:%.*]] = icmp eq i64 [[INDVARS_IV_NEXT_3_CLONE]], 320000
; CHECK-NEXT:    [[DOT50:%.*]] = select i1 [[EXITCOND_3_NOT_CLONE]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT50]], label [[HEADER34]], label [[EXIT5]]
; CHECK:       exit5:
; CHECK-NEXT:    ret void
;
entry:
  %i = sext i32 %M to i64
  br label %for.body4

for.cond.cleanup3:                                ; preds = %for.body4
  %i1 = add nsw i64 %i, 1
  br label %for.body4.1

for.body4.1:                                      ; preds = %for.body4.1, %for.cond.cleanup3
  %indvars.iv.1 = phi i64 [ 0, %for.cond.cleanup3 ], [ %indvars.iv.next.1, %for.body4.1 ]
  %arrayidx6.1 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv.1, i64 1
  %i2 = load float, ptr %arrayidx6.1, align 4, !tbaa !5
  %arrayidx10.1 = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 %indvars.iv.1, i64 1
  %i3 = load float, ptr %arrayidx10.1, align 4, !tbaa !5
  %add.1 = fadd float %i2, %i3
  %arrayidx15.1 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv.1, i64 %i1
  store float %add.1, ptr %arrayidx15.1, align 4, !tbaa !5
  %indvars.iv.next.1 = add nuw nsw i64 %indvars.iv.1, 1
  %exitcond.1.not = icmp eq i64 %indvars.iv.next.1, 320000
  br i1 %exitcond.1.not, label %for.cond.cleanup3.1, label %for.body4.1, !llvm.loop !9

for.cond.cleanup3.1:                              ; preds = %for.body4.1
  %i4 = add nsw i64 %i, 2
  br label %for.body4.2

for.body4.2:                                      ; preds = %for.body4.2, %for.cond.cleanup3.1
  %indvars.iv.2 = phi i64 [ 0, %for.cond.cleanup3.1 ], [ %indvars.iv.next.2, %for.body4.2 ]
  %arrayidx6.2 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv.2, i64 2
  %i5 = load float, ptr %arrayidx6.2, align 8, !tbaa !5
  %arrayidx10.2 = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 %indvars.iv.2, i64 2
  %i6 = load float, ptr %arrayidx10.2, align 8, !tbaa !5
  %add.2 = fadd float %i5, %i6
  %arrayidx15.2 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv.2, i64 %i4
  store float %add.2, ptr %arrayidx15.2, align 4, !tbaa !5
  %indvars.iv.next.2 = add nuw nsw i64 %indvars.iv.2, 1
  %exitcond.2.not = icmp eq i64 %indvars.iv.next.2, 320000
  br i1 %exitcond.2.not, label %for.cond.cleanup3.2, label %for.body4.2, !llvm.loop !9

for.cond.cleanup3.2:                              ; preds = %for.body4.2
  %i7 = add nsw i64 %i, 3
  br label %for.body4.3

for.body4.3:                                      ; preds = %for.body4.3, %for.cond.cleanup3.2
  %indvars.iv.3 = phi i64 [ 0, %for.cond.cleanup3.2 ], [ %indvars.iv.next.3, %for.body4.3 ]
  %arrayidx6.3 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv.3, i64 3
  %i8 = load float, ptr %arrayidx6.3, align 4, !tbaa !5
  %arrayidx10.3 = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 %indvars.iv.3, i64 3
  %i9 = load float, ptr %arrayidx10.3, align 4, !tbaa !5
  %add.3 = fadd float %i8, %i9
  %arrayidx15.3 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv.3, i64 %i7
  store float %add.3, ptr %arrayidx15.3, align 4, !tbaa !5
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv.3, 1
  %exitcond.3.not = icmp eq i64 %indvars.iv.next.3, 320000
  br i1 %exitcond.3.not, label %for.cond.cleanup3.3, label %for.body4.3, !llvm.loop !9

for.cond.cleanup3.3:                              ; preds = %for.body4.3
  ret void

for.body4:                                        ; preds = %for.body4, %entry
  %indvars.iv = phi i64 [ 0, %entry ], [ %indvars.iv.next, %for.body4 ]
  %arrayidx6 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv, i64 0
  %i10 = load float, ptr %arrayidx6, align 16, !tbaa !5
  %arrayidx10 = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 %indvars.iv, i64 0
  %i11 = load float, ptr %arrayidx10, align 16, !tbaa !5
  %add = fadd float %i10, %i11
  %arrayidx15 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv, i64 %i
  store float %add, ptr %arrayidx15, align 4, !tbaa !5
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %exitcond.not = icmp eq i64 %indvars.iv.next, 320000
  br i1 %exitcond.not, label %for.cond.cleanup3, label %for.body4, !llvm.loop !9
}

attributes #0 = { nofree norecurse nosync nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

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
!9 = distinct !{!9, !10, !11}
!10 = !{!"llvm.loop.mustprogress"}
!11 = !{!"llvm.loop.unroll.disable"}