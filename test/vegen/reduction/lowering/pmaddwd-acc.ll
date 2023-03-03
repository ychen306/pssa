; RUN: opt -load-pass-plugin /Users/tom/workspace/pssa/build/lib/libPSSA.so %s -S -passes=test-vector-codegen,adce -p add19,add19.1,add19.2,add19.3/bottom-up -p storeOf:add19,storeOf:add19.1,storeOf:add19.2,storeOf:add19.3 -p i,i2,i5,i7,i10,i12,i15,i17 -p i1,i3,i6,i8,i11,i13,i16,i18 -p i4,i9,i14,i19 | FileCheck %s

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@a = local_unnamed_addr global [8 x i16] zeroinitializer, align 16
@b = local_unnamed_addr global [8 x i16] zeroinitializer, align 16
@c = local_unnamed_addr global [4 x i32] zeroinitializer, align 16

; CHECK-LABEL: @foo(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[I2_VEC:%.*]] = load <8 x i16>, ptr @a, align 16
; CHECK-NEXT:    [[I3_VEC:%.*]] = load <8 x i16>, ptr @b, align 16
; CHECK-NEXT:    [[I9_VEC:%.*]] = load <4 x i32>, ptr @c, align 16
; CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <8 x i16> [[I3_VEC]], <8 x i16> undef, <8 x i32> <i32 1, i32 0, i32 3, i32 2, i32 5, i32 4, i32 7, i32 6>
; CHECK-NEXT:    [[TMP1:%.*]] = shufflevector <8 x i16> [[I2_VEC]], <8 x i16> undef, <8 x i32> <i32 1, i32 0, i32 3, i32 2, i32 5, i32 4, i32 7, i32 6>
; CHECK-NEXT:    [[BINARY_REDUCER_VEC:%.*]] = call <4 x i32> @llvm.x86.sse2.pmadd.wd(<8 x i16> [[TMP0]], <8 x i16> [[TMP1]])
; CHECK-NEXT:    [[BINARY_REDUCER_VEC1:%.*]] = add <4 x i32> [[I9_VEC]], [[BINARY_REDUCER_VEC]]
; CHECK-NEXT:    store <4 x i32> [[BINARY_REDUCER_VEC1]], ptr @c, align 16
; CHECK-NEXT:    ret void

; Function Attrs: nofree norecurse nosync nounwind ssp uwtable
define void @foo() local_unnamed_addr #0 {
entry:
  %i = load i16, ptr @a, align 16, !tbaa !5
  %conv = sext i16 %i to i32
  %i1 = load i16, ptr @b, align 16, !tbaa !5
  %conv4 = sext i16 %i1 to i32
  %mul5 = mul nsw i32 %conv4, %conv
  %i2 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 1), align 2, !tbaa !5
  %conv9 = sext i16 %i2 to i32
  %i3 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 1), align 2, !tbaa !5
  %conv14 = sext i16 %i3 to i32
  %mul15 = mul nsw i32 %conv14, %conv9
  %i4 = load i32, ptr @c, align 16, !tbaa !9
  %add16 = add i32 %i4, %mul5
  %add19 = add i32 %add16, %mul15
  store i32 %add19, ptr @c, align 16, !tbaa !9
  %i5 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 2), align 4, !tbaa !5
  %conv.1 = sext i16 %i5 to i32
  %i6 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 2), align 4, !tbaa !5
  %conv4.1 = sext i16 %i6 to i32
  %mul5.1 = mul nsw i32 %conv4.1, %conv.1
  %i7 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 3), align 2, !tbaa !5
  %conv9.1 = sext i16 %i7 to i32
  %i8 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 3), align 2, !tbaa !5
  %conv14.1 = sext i16 %i8 to i32
  %mul15.1 = mul nsw i32 %conv14.1, %conv9.1
  %i9 = load i32, ptr getelementptr inbounds ([4 x i32], ptr @c, i64 0, i64 1), align 4, !tbaa !9
  %add16.1 = add i32 %i9, %mul5.1
  %add19.1 = add i32 %add16.1, %mul15.1
  store i32 %add19.1, ptr getelementptr inbounds ([4 x i32], ptr @c, i64 0, i64 1), align 4, !tbaa !9
  %i10 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 4), align 8, !tbaa !5
  %conv.2 = sext i16 %i10 to i32
  %i11 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 4), align 8, !tbaa !5
  %conv4.2 = sext i16 %i11 to i32
  %mul5.2 = mul nsw i32 %conv4.2, %conv.2
  %i12 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 5), align 2, !tbaa !5
  %conv9.2 = sext i16 %i12 to i32
  %i13 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 5), align 2, !tbaa !5
  %conv14.2 = sext i16 %i13 to i32
  %mul15.2 = mul nsw i32 %conv14.2, %conv9.2
  %i14 = load i32, ptr getelementptr inbounds ([4 x i32], ptr @c, i64 0, i64 2), align 8, !tbaa !9
  %add16.2 = add i32 %i14, %mul5.2
  %add19.2 = add i32 %add16.2, %mul15.2
  store i32 %add19.2, ptr getelementptr inbounds ([4 x i32], ptr @c, i64 0, i64 2), align 8, !tbaa !9
  %i15 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 6), align 4, !tbaa !5
  %conv.3 = sext i16 %i15 to i32
  %i16 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 6), align 4, !tbaa !5
  %conv4.3 = sext i16 %i16 to i32
  %mul5.3 = mul nsw i32 %conv4.3, %conv.3
  %i17 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 7), align 2, !tbaa !5
  %conv9.3 = sext i16 %i17 to i32
  %i18 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 7), align 2, !tbaa !5
  %conv14.3 = sext i16 %i18 to i32
  %mul15.3 = mul nsw i32 %conv14.3, %conv9.3
  %i19 = load i32, ptr getelementptr inbounds ([4 x i32], ptr @c, i64 0, i64 3), align 4, !tbaa !9
  %add16.3 = add i32 %i19, %mul5.3
  %add19.3 = add i32 %add16.3, %mul15.3
  store i32 %add19.3, ptr getelementptr inbounds ([4 x i32], ptr @c, i64 0, i64 3), align 4, !tbaa !9
  ret void
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
!6 = !{!"short", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C/C++ TBAA"}
!9 = !{!10, !10, i64 0}
!10 = !{!"int", !7, i64 0}
