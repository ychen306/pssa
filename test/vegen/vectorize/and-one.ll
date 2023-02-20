; RUN: %opt -passes=global-slp %s -S | FileCheck %s

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@arr_33 = external local_unnamed_addr global [17 x [11 x [16 x [20 x [16 x i16]]]]], align 32
@arr_39 = external local_unnamed_addr global [17 x [11 x [16 x [20 x [10 x i32]]]]], align 32

; Function Attrs: mustprogress nofree norecurse nosync nounwind ssp uwtable
define void @_Z4testv() local_unnamed_addr #0 {
; CHECK-LABEL: @_Z4testv(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[DOTVEC:%.*]] = load <4 x i16>, ptr @arr_33, align 32
; CHECK-NEXT:    [[TMP0:%.*]] = and <4 x i16> [[DOTVEC]], <i16 1, i16 1, i16 1, i16 1>
; CHECK-NEXT:    [[AND_1_VEC:%.*]] = zext <4 x i16> [[TMP0]] to <4 x i32>
; CHECK-NEXT:    store <4 x i32> [[AND_1_VEC]], ptr @arr_39, align 32
; CHECK-NEXT:    ret void
;
entry:
  %0 = load i16, ptr @arr_33, align 32, !tbaa !5
  %1 = and i16 %0, 1
  %and = zext i16 %1 to i32
  store i32 %and, ptr @arr_39, align 32, !tbaa !9
  %2 = load i16, ptr getelementptr inbounds ([17 x [11 x [16 x [20 x [16 x i16]]]]], ptr @arr_33, i64 0, i64 0, i64 0, i64 0, i64 0, i64 1), align 2, !tbaa !5
  %3 = and i16 %2, 1
  %and.1 = zext i16 %3 to i32
  store i32 %and.1, ptr getelementptr inbounds ([17 x [11 x [16 x [20 x [10 x i32]]]]], ptr @arr_39, i64 0, i64 0, i64 0, i64 0, i64 0, i64 1), align 4, !tbaa !9
  %4 = load i16, ptr getelementptr inbounds ([17 x [11 x [16 x [20 x [16 x i16]]]]], ptr @arr_33, i64 0, i64 0, i64 0, i64 0, i64 0, i64 2), align 4, !tbaa !5
  %5 = and i16 %4, 1
  %and.2 = zext i16 %5 to i32
  store i32 %and.2, ptr getelementptr inbounds ([17 x [11 x [16 x [20 x [10 x i32]]]]], ptr @arr_39, i64 0, i64 0, i64 0, i64 0, i64 0, i64 2), align 8, !tbaa !9
  %6 = load i16, ptr getelementptr inbounds ([17 x [11 x [16 x [20 x [16 x i16]]]]], ptr @arr_33, i64 0, i64 0, i64 0, i64 0, i64 0, i64 3), align 2, !tbaa !5
  %7 = and i16 %6, 1
  %and.3 = zext i16 %7 to i32
  store i32 %and.3, ptr getelementptr inbounds ([17 x [11 x [16 x [20 x [10 x i32]]]]], ptr @arr_39, i64 0, i64 0, i64 0, i64 0, i64 0, i64 3), align 4, !tbaa !9
  ret void
}

attributes #0 = { mustprogress nofree norecurse nosync nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

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
!8 = !{!"Simple C++ TBAA"}
!9 = !{!10, !10, i64 0}
!10 = !{!"int", !7, i64 0}
