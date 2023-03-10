; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=test-vector-codegen,adce -p add19,add19.1,add19.2,add19.3/bottom-up -p storeOf:add19,storeOf:add19.1,storeOf:add19.2,storeOf:add19.3 -p i4,i1,i9,i6,i14,i11,i19,i16 -p i3,i,i8,i5,i13,i10,i18,i15 -p i2,i7,i12,i17 -include-pmaddwd=false -include-vpdpwssd=true -S | FileCheck %s
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@a = local_unnamed_addr global [8 x i16] zeroinitializer, align 16
@b = local_unnamed_addr global [8 x i16] zeroinitializer, align 16
@c = local_unnamed_addr global [4 x i32] zeroinitializer, align 16

; CHECK-LABEL: @foo(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[I3_VEC:%.*]] = load <8 x i16>, ptr @a, align 16
; CHECK-NEXT:    [[I4_VEC:%.*]] = load <8 x i16>, ptr @b, align 16
; CHECK-NEXT:    [[I7_VEC:%.*]] = load <4 x i32>, ptr @c, align 16
; CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <8 x i16> [[I4_VEC]], <8 x i16> undef, <8 x i32> <i32 1, i32 0, i32 3, i32 2, i32 5, i32 4, i32 7, i32 6>
; CHECK-NEXT:    [[TMP1:%.*]] = shufflevector <8 x i16> [[I3_VEC]], <8 x i16> undef, <8 x i32> <i32 1, i32 0, i32 3, i32 2, i32 5, i32 4, i32 7, i32 6>
; CHECK-NEXT:    [[TMP2:%.*]] = bitcast <8 x i16> [[TMP0]] to <4 x i32>
; CHECK-NEXT:    [[TMP3:%.*]] = bitcast <8 x i16> [[TMP1]] to <4 x i32>
; CHECK-NEXT:    [[BINARY_REDUCER_VEC:%.*]] = call <4 x i32> @llvm.x86.avx512.vpdpwssd.128(<4 x i32> [[I7_VEC]], <4 x i32> [[TMP2]], <4 x i32> [[TMP3]])
; CHECK-NEXT:    store <4 x i32> [[BINARY_REDUCER_VEC]], ptr @c, align 16
; CHECK-NEXT:    ret void

; Function Attrs: nofree norecurse nosync nounwind ssp uwtable
define void @foo() local_unnamed_addr #0 {
entry:
  %i = load i16, ptr @a, align 16, !tbaa !5
  %conv = sext i16 %i to i32
  %i1 = load i16, ptr @b, align 16, !tbaa !5
  %conv4 = sext i16 %i1 to i32
  %mul5 = mul nsw i32 %conv4, %conv
  %i2 = load i32, ptr @c, align 16, !tbaa !9
  %add = add nsw i32 %mul5, %i2
  %i3 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 1), align 2, !tbaa !5
  %conv12 = sext i16 %i3 to i32
  %i4 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 1), align 2, !tbaa !5
  %conv17 = sext i16 %i4 to i32
  %mul18 = mul nsw i32 %conv17, %conv12
  %add19 = add nsw i32 %add, %mul18
  store i32 %add19, ptr @c, align 16, !tbaa !9
  %i5 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 2), align 4, !tbaa !5
  %conv.1 = sext i16 %i5 to i32
  %i6 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 2), align 4, !tbaa !5
  %conv4.1 = sext i16 %i6 to i32
  %mul5.1 = mul nsw i32 %conv4.1, %conv.1
  %i7 = load i32, ptr getelementptr inbounds ([4 x i32], ptr @c, i64 0, i64 1), align 4, !tbaa !9
  %add.1 = add nsw i32 %mul5.1, %i7
  %i8 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 3), align 2, !tbaa !5
  %conv12.1 = sext i16 %i8 to i32
  %i9 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 3), align 2, !tbaa !5
  %conv17.1 = sext i16 %i9 to i32
  %mul18.1 = mul nsw i32 %conv17.1, %conv12.1
  %add19.1 = add nsw i32 %add.1, %mul18.1
  store i32 %add19.1, ptr getelementptr inbounds ([4 x i32], ptr @c, i64 0, i64 1), align 4, !tbaa !9
  %i10 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 4), align 8, !tbaa !5
  %conv.2 = sext i16 %i10 to i32
  %i11 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 4), align 8, !tbaa !5
  %conv4.2 = sext i16 %i11 to i32
  %mul5.2 = mul nsw i32 %conv4.2, %conv.2
  %i12 = load i32, ptr getelementptr inbounds ([4 x i32], ptr @c, i64 0, i64 2), align 8, !tbaa !9
  %add.2 = add nsw i32 %mul5.2, %i12
  %i13 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 5), align 2, !tbaa !5
  %conv12.2 = sext i16 %i13 to i32
  %i14 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 5), align 2, !tbaa !5
  %conv17.2 = sext i16 %i14 to i32
  %mul18.2 = mul nsw i32 %conv17.2, %conv12.2
  %add19.2 = add nsw i32 %add.2, %mul18.2
  store i32 %add19.2, ptr getelementptr inbounds ([4 x i32], ptr @c, i64 0, i64 2), align 8, !tbaa !9
  %i15 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 6), align 4, !tbaa !5
  %conv.3 = sext i16 %i15 to i32
  %i16 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 6), align 4, !tbaa !5
  %conv4.3 = sext i16 %i16 to i32
  %mul5.3 = mul nsw i32 %conv4.3, %conv.3
  %i17 = load i32, ptr getelementptr inbounds ([4 x i32], ptr @c, i64 0, i64 3), align 4, !tbaa !9
  %add.3 = add nsw i32 %mul5.3, %i17
  %i18 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @a, i64 0, i64 7), align 2, !tbaa !5
  %conv12.3 = sext i16 %i18 to i32
  %i19 = load i16, ptr getelementptr inbounds ([8 x i16], ptr @b, i64 0, i64 7), align 2, !tbaa !5
  %conv17.3 = sext i16 %i19 to i32
  %mul18.3 = mul nsw i32 %conv17.3, %conv12.3
  %add19.3 = add nsw i32 %add.3, %mul18.3
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