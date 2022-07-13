; RUN: %opt -passes=test-vector-codegen,verify %s -p add,add.1,add.2,add.3 -p i,i2,i4,i6 -p i1,i3,i5,i7 -p storeOf:add,storeOf:add.1,storeOf:add.2,storeOf:add.3 -S | FileCheck %s

; CHECK: [[B:%.*]] = load <4 x i32>, ptr @B
; CHECK-NEXT: [[C:%.*]] = load <4 x i32>, ptr @C
; CHECK-NEXT: [[ADD:%.*]] = add <4 x i32> [[C]], [[B]]
; CHECK-NEXT: store <4 x i32> [[ADD]], ptr @A

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@B = local_unnamed_addr global [100 x i32] zeroinitializer, align 16
@C = local_unnamed_addr global [100 x i32] zeroinitializer, align 16
@A = local_unnamed_addr global [100 x i32] zeroinitializer, align 16

; Function Attrs: nofree norecurse nosync nounwind ssp uwtable
define void @foo() local_unnamed_addr #0 {
entry:
  %i = load i32, ptr @B, align 16, !tbaa !5
  %i1 = load i32, ptr @C, align 16, !tbaa !5
  %add = add nsw i32 %i1, %i
  store i32 %add, ptr @A, align 16, !tbaa !5
  %i2 = load i32, ptr getelementptr inbounds ([100 x i32], ptr @B, i64 0, i64 1), align 4, !tbaa !5
  %i3 = load i32, ptr getelementptr inbounds ([100 x i32], ptr @C, i64 0, i64 1), align 4, !tbaa !5
  %add.1 = add nsw i32 %i3, %i2
  store i32 %add.1, ptr getelementptr inbounds ([100 x i32], ptr @A, i64 0, i64 1), align 4, !tbaa !5
  %i4 = load i32, ptr getelementptr inbounds ([100 x i32], ptr @B, i64 0, i64 2), align 8, !tbaa !5
  %i5 = load i32, ptr getelementptr inbounds ([100 x i32], ptr @C, i64 0, i64 2), align 8, !tbaa !5
  %add.2 = add nsw i32 %i5, %i4
  store i32 %add.2, ptr getelementptr inbounds ([100 x i32], ptr @A, i64 0, i64 2), align 8, !tbaa !5
  %i6 = load i32, ptr getelementptr inbounds ([100 x i32], ptr @B, i64 0, i64 3), align 4, !tbaa !5
  %i7 = load i32, ptr getelementptr inbounds ([100 x i32], ptr @C, i64 0, i64 3), align 4, !tbaa !5
  %add.3 = add nsw i32 %i7, %i6
  store i32 %add.3, ptr getelementptr inbounds ([100 x i32], ptr @A, i64 0, i64 3), align 4, !tbaa !5
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
!6 = !{!"int", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C/C++ TBAA"}
