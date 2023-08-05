; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=global-slp,sink,adce,instcombine,jump-threading,gvn,simplifycfg,adce,sink -do-versioning | FileCheck %s
; ModuleID = 'spec-with-alias.ll'
source_filename = "spec-with-alias.c"
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@a = global [4 x i32] zeroinitializer, align 16
@d = global [4 x i32] zeroinitializer, align 16

; Function Attrs: nounwind ssp uwtable
define void @foo(ptr noundef %b, ptr noundef %c) #0 {
; CHECK-LABEL: @foo(
; CHECK-NEXT:  entry:
; CHECK:    [[ARRAYIDX7_3:%.*]] = getelementptr inbounds i32, ptr [[B:%.*]], i64 3
; CHECK:    [[ARRAYIDX5_1:%.*]] = getelementptr inbounds i32, ptr [[C:%.*]], i64 1
; CHECK:    br i1 [[TMP4:%.*]], label [[TMP6:%.*]], label [[TMP5:%.*]]
; CHECK:       5:
; CHECK-NEXT:    [[I_CLONE:%.*]] = load i32, ptr @a, align 16, !tbaa [[TBAA5:![0-9]+]]
; CHECK-NEXT:    [[CMP1_CLONE:%.*]] = icmp sgt i32 [[I_CLONE]], 0
; CHECK-NEXT:    [[I1_CLONE:%.*]] = load i32, ptr @d, align 16
; CHECK-NEXT:    [[SPEC_SELECT:%.*]] = select i1 [[CMP1_CLONE]], i32 [[I1_CLONE]], i32 0
; CHECK-NEXT:    [[I2_CLONE:%.*]] = load i32, ptr [[C]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[MUL_CLONE:%.*]] = mul nsw i32 [[SPEC_SELECT]], [[I2_CLONE]]
; CHECK-NEXT:    store i32 [[MUL_CLONE]], ptr [[B]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[I_1_CLONE:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @a, i64 0, i64 1), align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[CMP1_1_CLONE:%.*]] = icmp sgt i32 [[I_1_CLONE]], 0
; CHECK-NEXT:    [[I1_1_CLONE:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @d, i64 0, i64 1), align 4
; CHECK-NEXT:    [[S_1_1_CLONE_DEMOTED3_0:%.*]] = select i1 [[CMP1_1_CLONE]], i32 [[I1_1_CLONE]], i32 [[SPEC_SELECT]]
; CHECK-NEXT:    [[I2_1_CLONE:%.*]] = load i32, ptr [[ARRAYIDX5_1]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[MUL_1_CLONE:%.*]] = mul nsw i32 [[S_1_1_CLONE_DEMOTED3_0]], [[I2_1_CLONE]]
; CHECK-NEXT:    [[ARRAYIDX7_1:%.*]] = getelementptr inbounds i32, ptr [[B]], i64 1
; CHECK-NEXT:    store i32 [[MUL_1_CLONE]], ptr [[ARRAYIDX7_1]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[I_2_CLONE:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @a, i64 0, i64 2), align 8, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[CMP1_2_CLONE:%.*]] = icmp sgt i32 [[I_2_CLONE]], 0
; CHECK-NEXT:    [[I1_2_CLONE:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @d, i64 0, i64 2), align 8
; CHECK-NEXT:    [[S_1_2_CLONE_DEMOTED2_0_MEM_0_PH:%.*]] = select i1 [[CMP1_2_CLONE]], i32 [[I1_2_CLONE]], i32 [[S_1_1_CLONE_DEMOTED3_0]]
; CHECK-NEXT:    [[ARRAYIDX5_2:%.*]] = getelementptr inbounds i32, ptr [[C]], i64 2
; CHECK-NEXT:    [[I2_2_CLONE:%.*]] = load i32, ptr [[ARRAYIDX5_2]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[MUL_2_CLONE:%.*]] = mul nsw i32 [[S_1_2_CLONE_DEMOTED2_0_MEM_0_PH]], [[I2_2_CLONE]]
; CHECK-NEXT:    [[ARRAYIDX7_2:%.*]] = getelementptr inbounds i32, ptr [[B]], i64 2
; CHECK-NEXT:    store i32 [[MUL_2_CLONE]], ptr [[ARRAYIDX7_2]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[I_3_CLONE:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @a, i64 0, i64 3), align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[CMP1_3_CLONE:%.*]] = icmp sgt i32 [[I_3_CLONE]], 0
; CHECK-NEXT:    [[I1_3_CLONE18:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @d, i64 0, i64 3), align 4
; CHECK-NEXT:    [[S_1_3_CLONE_DEMOTED_0:%.*]] = select i1 [[CMP1_3_CLONE]], i32 [[I1_3_CLONE18]], i32 [[S_1_2_CLONE_DEMOTED2_0_MEM_0_PH]]
; CHECK-NEXT:    [[ARRAYIDX5_3:%.*]] = getelementptr inbounds i32, ptr [[C]], i64 3
; CHECK-NEXT:    [[I2_3_CLONE:%.*]] = load i32, ptr [[ARRAYIDX5_3]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[MUL_3_CLONE:%.*]] = mul nsw i32 [[S_1_3_CLONE_DEMOTED_0]], [[I2_3_CLONE]]
; CHECK-NEXT:    store i32 [[MUL_3_CLONE]], ptr [[ARRAYIDX7_3]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    br label [[TMP24:%.*]]
; CHECK:       6:
; CHECK-NEXT:    [[I_1_VEC:%.*]] = load <4 x i32>, ptr @a, align 16
; CHECK-NEXT:    [[CMP1_1_VEC:%.*]] = icmp sgt <4 x i32> [[I_1_VEC]], zeroinitializer
; CHECK-NEXT:    [[TMP7:%.*]] = xor <4 x i1> [[CMP1_1_VEC]], <i1 poison, i1 true, i1 true, i1 true>
; CHECK-NEXT:    [[TMP8:%.*]] = shufflevector <4 x i1> [[TMP7]], <4 x i1> undef, <3 x i32> <i32 1, i32 2, i32 3>
; CHECK-NEXT:    [[TMP9:%.*]] = bitcast <3 x i1> [[TMP8]] to i3
; CHECK-NEXT:    [[DOTNOT:%.*]] = icmp eq i3 [[TMP9]], 0
; CHECK-NEXT:    br i1 [[DOTNOT]], label [[TMP23:%.*]], label [[TMP10:%.*]]
; CHECK:       10:
; CHECK-NEXT:    [[TMP11:%.*]] = extractelement <4 x i1> [[CMP1_1_VEC]], i64 1
; CHECK-NEXT:    [[TMP12:%.*]] = extractelement <4 x i1> [[CMP1_1_VEC]], i64 2
; CHECK-NEXT:    [[TMP13:%.*]] = extractelement <4 x i1> [[CMP1_1_VEC]], i64 3
; CHECK-NEXT:    [[TMP14:%.*]] = extractelement <4 x i1> [[CMP1_1_VEC]], i64 0
; CHECK-NEXT:    [[ARRAYIDX7_141:%.*]] = getelementptr inbounds i32, ptr [[B]], i64 1
; CHECK-NEXT:    [[ARRAYIDX7_285:%.*]] = getelementptr inbounds i32, ptr [[B]], i64 2
; CHECK-NEXT:    [[I1_CLONE12:%.*]] = load i32, ptr @d, align 16
; CHECK-NEXT:    [[SPEC_SELECT172:%.*]] = select i1 [[TMP14]], i32 [[I1_CLONE12]], i32 0
; CHECK-NEXT:    [[I1_1_CLONE14:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @d, i64 0, i64 1), align 4
; CHECK-NEXT:    [[S_1_1_CLONE_DEMOTED_0:%.*]] = select i1 [[TMP11]], i32 [[I1_1_CLONE14]], i32 [[SPEC_SELECT172]]
; CHECK-NEXT:    [[I1_2_CLONE16:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @d, i64 0, i64 2), align 8
; CHECK-NEXT:    [[S_1_2_CLONE_DEMOTED_0:%.*]] = select i1 [[TMP12]], i32 [[I1_2_CLONE16]], i32 [[S_1_1_CLONE_DEMOTED_0]]
; CHECK-NEXT:    [[I1_3_CLONE:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @d, i64 0, i64 3), align 4
; CHECK-NEXT:    [[S_1_3_CLONE_DEMOTED1_0:%.*]] = select i1 [[TMP13]], i32 [[I1_3_CLONE]], i32 [[S_1_2_CLONE_DEMOTED_0]]
; CHECK-NEXT:    [[TMP15:%.*]] = insertelement <4 x i32> undef, i32 [[SPEC_SELECT172]], i64 0
; CHECK-NEXT:    [[TMP16:%.*]] = insertelement <4 x i32> [[TMP15]], i32 [[S_1_1_CLONE_DEMOTED_0]], i64 1
; CHECK-NEXT:    [[TMP17:%.*]] = insertelement <4 x i32> [[TMP16]], i32 [[S_1_2_CLONE_DEMOTED_0]], i64 2
; CHECK-NEXT:    [[TMP18:%.*]] = insertelement <4 x i32> [[TMP17]], i32 [[S_1_3_CLONE_DEMOTED1_0]], i64 3
; CHECK-NEXT:    [[I2_1_VEC:%.*]] = load <4 x i32>, ptr [[C]], align 4
; CHECK-NEXT:    [[MUL_1_VEC:%.*]] = mul <4 x i32> [[TMP18]], [[I2_1_VEC]]
; CHECK-NEXT:    [[TMP19:%.*]] = extractelement <4 x i32> [[MUL_1_VEC]], i64 0
; CHECK-NEXT:    [[TMP20:%.*]] = extractelement <4 x i32> [[MUL_1_VEC]], i64 1
; CHECK-NEXT:    [[TMP21:%.*]] = extractelement <4 x i32> [[MUL_1_VEC]], i64 2
; CHECK-NEXT:    [[TMP22:%.*]] = extractelement <4 x i32> [[MUL_1_VEC]], i64 3
; CHECK-NEXT:    store i32 [[TMP19]], ptr [[B]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    store i32 [[TMP20]], ptr [[ARRAYIDX7_141]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    store i32 [[TMP21]], ptr [[ARRAYIDX7_285]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    store i32 [[TMP22]], ptr [[ARRAYIDX7_3]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    br label [[TMP24]]
; CHECK:       23:
; CHECK-NEXT:    [[I1_1_VEC:%.*]] = load <4 x i32>, ptr @d, align 16
; CHECK-NEXT:    [[S_1_1_VEC:%.*]] = select <4 x i1> [[CMP1_1_VEC]], <4 x i32> [[I1_1_VEC]], <4 x i32> <i32 0, i32 undef, i32 undef, i32 undef>
; CHECK-NEXT:    [[I2_1_VEC169:%.*]] = load <4 x i32>, ptr [[C]], align 4
; CHECK-NEXT:    [[MUL_1_VEC170:%.*]] = mul <4 x i32> [[S_1_1_VEC]], [[I2_1_VEC169]]
; CHECK-NEXT:    store <4 x i32> [[MUL_1_VEC170]], ptr [[B]], align 4
; CHECK-NEXT:    br label [[TMP24]]
; CHECK:       24:
; CHECK-NEXT:    ret void
;
entry:
  br label %for.cond

for.cond:                                         ; preds = %entry
  br label %for.body

for.body:                                         ; preds = %for.cond
  %i = load i32, ptr @a, align 4, !tbaa !5
  %cmp1 = icmp sgt i32 %i, 0
  br i1 %cmp1, label %if.then, label %if.end

if.then:                                          ; preds = %for.body
  %i1 = load i32, ptr @d, align 4, !tbaa !5
  br label %if.end

if.end:                                           ; preds = %if.then, %for.body
  %s.1 = phi i32 [ %i1, %if.then ], [ 0, %for.body ]
  %i2 = load i32, ptr %c, align 4, !tbaa !5
  %mul = mul nsw i32 %s.1, %i2
  store i32 %mul, ptr %b, align 4, !tbaa !5
  br label %for.body.1

for.body.1:                                       ; preds = %if.end
  %i.1 = load i32, ptr getelementptr inbounds ([4 x i32], ptr @a, i64 0, i64 1), align 4, !tbaa !5
  %cmp1.1 = icmp sgt i32 %i.1, 0
  br i1 %cmp1.1, label %if.then.1, label %if.end.1

if.then.1:                                        ; preds = %for.body.1
  %i1.1 = load i32, ptr getelementptr inbounds ([4 x i32], ptr @d, i64 0, i64 1), align 4, !tbaa !5
  br label %if.end.1

if.end.1:                                         ; preds = %if.then.1, %for.body.1
  %s.1.1 = phi i32 [ %i1.1, %if.then.1 ], [ %s.1, %for.body.1 ]
  %arrayidx5.1 = getelementptr inbounds i32, ptr %c, i64 1
  %i2.1 = load i32, ptr %arrayidx5.1, align 4, !tbaa !5
  %mul.1 = mul nsw i32 %s.1.1, %i2.1
  %arrayidx7.1 = getelementptr inbounds i32, ptr %b, i64 1
  store i32 %mul.1, ptr %arrayidx7.1, align 4, !tbaa !5
  br label %for.body.2

for.body.2:                                       ; preds = %if.end.1
  %i.2 = load i32, ptr getelementptr inbounds ([4 x i32], ptr @a, i64 0, i64 2), align 4, !tbaa !5
  %cmp1.2 = icmp sgt i32 %i.2, 0
  br i1 %cmp1.2, label %if.then.2, label %if.end.2

if.then.2:                                        ; preds = %for.body.2
  %i1.2 = load i32, ptr getelementptr inbounds ([4 x i32], ptr @d, i64 0, i64 2), align 4, !tbaa !5
  br label %if.end.2

if.end.2:                                         ; preds = %if.then.2, %for.body.2
  %s.1.2 = phi i32 [ %i1.2, %if.then.2 ], [ %s.1.1, %for.body.2 ]
  %arrayidx5.2 = getelementptr inbounds i32, ptr %c, i64 2
  %i2.2 = load i32, ptr %arrayidx5.2, align 4, !tbaa !5
  %mul.2 = mul nsw i32 %s.1.2, %i2.2
  %arrayidx7.2 = getelementptr inbounds i32, ptr %b, i64 2
  store i32 %mul.2, ptr %arrayidx7.2, align 4, !tbaa !5
  br label %for.body.3

for.body.3:                                       ; preds = %if.end.2
  %i.3 = load i32, ptr getelementptr inbounds ([4 x i32], ptr @a, i64 0, i64 3), align 4, !tbaa !5
  %cmp1.3 = icmp sgt i32 %i.3, 0
  br i1 %cmp1.3, label %if.then.3, label %if.end.3

if.then.3:                                        ; preds = %for.body.3
  %i1.3 = load i32, ptr getelementptr inbounds ([4 x i32], ptr @d, i64 0, i64 3), align 4, !tbaa !5
  br label %if.end.3

if.end.3:                                         ; preds = %if.then.3, %for.body.3
  %s.1.3 = phi i32 [ %i1.3, %if.then.3 ], [ %s.1.2, %for.body.3 ]
  %arrayidx5.3 = getelementptr inbounds i32, ptr %c, i64 3
  %i2.3 = load i32, ptr %arrayidx5.3, align 4, !tbaa !5
  %mul.3 = mul nsw i32 %s.1.3, %i2.3
  %arrayidx7.3 = getelementptr inbounds i32, ptr %b, i64 3
  store i32 %mul.3, ptr %arrayidx7.3, align 4, !tbaa !5
  br label %for.end

for.end:                                          ; preds = %if.end.3
  ret void
}

; Function Attrs: argmemonly nocallback nofree nosync nounwind willreturn
declare void @llvm.lifetime.start.p0(i64 immarg, ptr nocapture) #1

; Function Attrs: argmemonly nocallback nofree nosync nounwind willreturn
declare void @llvm.lifetime.end.p0(i64 immarg, ptr nocapture) #1

attributes #0 = { nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }
attributes #1 = { argmemonly nocallback nofree nosync nounwind willreturn }

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
