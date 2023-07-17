; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=test-vector-codegen,sink,adce,instcombine,jump-threading,gvn,simplifycfg,adce,sink -find-conditional-deps -p s.1,s.1.1,s.1.2,s.1.3 -p i1,i1.1,i1.2,i1.3 -p cmp1,cmp1.1,cmp1.2,cmp1.3 -p mul,mul.1,mul.2,mul.3 -p storeOf:mul,storeOf:mul.1,storeOf:mul.2,storeOf:mul.3 -p i,i.1,i.2,i.3 -p i2,i2.1,i2.2,i2.3 | FileCheck %s
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
; CHECK-DAG:    [[ARRAYIDX7_3:%.*]] = getelementptr inbounds i32, ptr [[B:%.*]], i64 3
; CHECK-DAG:    [[ARRAYIDX5_1:%.*]] = getelementptr inbounds i32, ptr [[C:%.*]], i64 1
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
; CHECK-NEXT:    [[S_1_2_CLONE_DEMOTED2_0_MEM_0:%.*]] = select i1 [[CMP1_2_CLONE]], i32 [[I1_2_CLONE]], i32 [[S_1_1_CLONE_DEMOTED3_0]]
; CHECK-NEXT:    [[ARRAYIDX5_2:%.*]] = getelementptr inbounds i32, ptr [[C]], i64 2
; CHECK-NEXT:    [[I2_2_CLONE:%.*]] = load i32, ptr [[ARRAYIDX5_2]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[MUL_2_CLONE:%.*]] = mul nsw i32 [[S_1_2_CLONE_DEMOTED2_0_MEM_0]], [[I2_2_CLONE]]
; CHECK-NEXT:    [[ARRAYIDX7_2:%.*]] = getelementptr inbounds i32, ptr [[B]], i64 2
; CHECK-NEXT:    store i32 [[MUL_2_CLONE]], ptr [[ARRAYIDX7_2]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[I_3_CLONE:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @a, i64 0, i64 3), align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[CMP1_3_CLONE:%.*]] = icmp sgt i32 [[I_3_CLONE]], 0
; CHECK-NEXT:    br i1 [[CMP1_3_CLONE]], label [[TMP21:%.*]], label [[TMP22:%.*]]
; CHECK:       6:
; CHECK-NEXT:    [[I_1_VEC:%.*]] = load <4 x i32>, ptr @a, align 16
; CHECK-NEXT:    [[CMP1_1_VEC:%.*]] = icmp sgt <4 x i32> [[I_1_VEC]], zeroinitializer
; CHECK-NEXT:    [[TMP7:%.*]] = xor <4 x i1> [[CMP1_1_VEC]], <i1 poison, i1 true, i1 true, i1 true>
; CHECK-NEXT:    [[TMP8:%.*]] = shufflevector <4 x i1> [[TMP7]], <4 x i1> undef, <3 x i32>
; CHECK-NEXT:    [[TMP9:%.*]] = bitcast <3 x i1> [[TMP8]] to i3
; CHECK-NEXT:    [[DOTNOT:%.*]] = icmp eq i3 [[TMP9]], 0
; CHECK-NEXT:    br i1 [[DOTNOT]], label [[TMP19:%.*]], label [[TMP10:%.*]]
; CHECK:       10:
; CHECK-NEXT:    [[TMP11:%.*]] = extractelement <4 x i1> [[CMP1_1_VEC]], i64 1
; CHECK-NEXT:    [[TMP12:%.*]] = extractelement <4 x i1> [[CMP1_1_VEC]], i64 2
; CHECK-NEXT:    [[TMP13:%.*]] = extractelement <4 x i1> [[CMP1_1_VEC]], i64 3
; CHECK-NEXT:    [[TMP14:%.*]] = extractelement <4 x i1> [[CMP1_1_VEC]], i64 0
; CHECK-NEXT:    [[I1_CLONE12:%.*]] = load i32, ptr @d, align 16
; CHECK-NEXT:    [[SPEC_SELECT270:%.*]] = select i1 [[TMP14]], i32 [[I1_CLONE12]], i32 undef
; CHECK-NEXT:    [[I1_1_CLONE13:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @d, i64 0, i64 1), align 4
; CHECK-NEXT:    [[I1_1_CLONE13_MEM_0136_PH_PH:%.*]] = select i1 [[TMP11]], i32 [[I1_1_CLONE13]], i32 undef
; CHECK-NEXT:    [[I1_2_CLONE14:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @d, i64 0, i64 2), align 8
; CHECK-NEXT:    [[I1_2_CLONE14_MEM_1_PH_PH:%.*]] = select i1 [[TMP12]], i32 [[I1_2_CLONE14]], i32 undef
; CHECK-NEXT:    [[S_1_CLONE_DEMOTED_0:%.*]] = select i1 [[TMP14]], i32 [[SPEC_SELECT270]], i32 0
; CHECK-NEXT:    [[S_1_1_CLONE_DEMOTED_0:%.*]] = select i1 [[TMP11]], i32 [[I1_1_CLONE13_MEM_0136_PH_PH]], i32 [[S_1_CLONE_DEMOTED_0]]
; CHECK-NEXT:    [[S_1_2_CLONE_DEMOTED_0:%.*]] = select i1 [[TMP12]], i32 [[I1_2_CLONE14_MEM_1_PH_PH]], i32 [[S_1_1_CLONE_DEMOTED_0]]
; CHECK-NEXT:    [[I1_3_CLONE:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @d, i64 0, i64 3), align 4
; CHECK-NEXT:    [[S_1_3_CLONE_DEMOTED1_0:%.*]] = select i1 [[TMP13]], i32 [[I1_3_CLONE]], i32 [[S_1_2_CLONE_DEMOTED_0]]
; CHECK-NEXT:    [[TMP15:%.*]] = insertelement <4 x i32> undef, i32 [[S_1_CLONE_DEMOTED_0]], i64 0
; CHECK-NEXT:    [[TMP16:%.*]] = insertelement <4 x i32> [[TMP15]], i32 [[S_1_1_CLONE_DEMOTED_0]], i64 1
; CHECK-NEXT:    [[TMP17:%.*]] = insertelement <4 x i32> [[TMP16]], i32 [[S_1_2_CLONE_DEMOTED_0]], i64 2
; CHECK-NEXT:    [[TMP18:%.*]] = insertelement <4 x i32> [[TMP17]], i32 [[S_1_3_CLONE_DEMOTED1_0]], i64 3
; CHECK-NEXT:    br label [[TMP20:%.*]]
; CHECK:       19:
; CHECK-NEXT:    [[I1_1_VEC:%.*]] = load <4 x i32>, ptr @d, align 16
; CHECK-NEXT:    [[S_1_1_VEC:%.*]] = select <4 x i1> [[CMP1_1_VEC]], <4 x i32> [[I1_1_VEC]], <4 x i32> <i32 0, i32 undef, i32 undef, i32 undef>
; CHECK-NEXT:    br label [[TMP20]]
; CHECK:       20:
; CHECK-NEXT:    [[S_1_1_VER_VEC_DEMOTED_0_MEM_0_PH:%.*]] = phi <4 x i32> [ [[TMP18]], [[TMP10]] ], [ [[S_1_1_VEC]], [[TMP19]] ]
; CHECK-NEXT:    [[I2_1_VEC:%.*]] = load <4 x i32>, ptr [[C]], align 4
; CHECK-NEXT:    [[MUL_1_VEC:%.*]] = mul <4 x i32> [[S_1_1_VER_VEC_DEMOTED_0_MEM_0_PH]], [[I2_1_VEC]]
; CHECK-NEXT:    store <4 x i32> [[MUL_1_VEC]], ptr [[B]], align 4
; CHECK-NEXT:    br label [[TMP24:%.*]]
; CHECK:       21:
; CHECK-NEXT:    [[I1_3_CLONE18:%.*]] = load i32, ptr getelementptr inbounds ([4 x i32], ptr @d, i64 0, i64 3), align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ARRAYIDX5_3265:%.*]] = getelementptr inbounds i32, ptr [[C]], i64 3
; CHECK-NEXT:    [[I2_3_CLONE266:%.*]] = load i32, ptr [[ARRAYIDX5_3265]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    br label [[TMP23:%.*]]
; CHECK:       22:
; CHECK-NEXT:    [[ARRAYIDX5_3:%.*]] = getelementptr inbounds i32, ptr [[C]], i64 3
; CHECK-NEXT:    [[I2_3_CLONE:%.*]] = load i32, ptr [[ARRAYIDX5_3]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    br label [[TMP23]]
; CHECK:       23:
; CHECK-NEXT:    [[I2_3_CLONE268:%.*]] = phi i32 [ [[I2_3_CLONE266]], [[TMP21]] ], [ [[I2_3_CLONE]], [[TMP22]] ]
; CHECK-NEXT:    [[S_1_3_CLONE_DEMOTED_0:%.*]] = phi i32 [ [[I1_3_CLONE18]], [[TMP21]] ], [ [[S_1_2_CLONE_DEMOTED2_0_MEM_0]], [[TMP22]] ]
; CHECK-NEXT:    [[MUL_3_CLONE:%.*]] = mul nsw i32 [[S_1_3_CLONE_DEMOTED_0]], [[I2_3_CLONE268]]
; CHECK-NEXT:    store i32 [[MUL_3_CLONE]], ptr [[ARRAYIDX7_3]], align 4, !tbaa [[TBAA5]]
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