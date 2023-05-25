; RUN: %opt -passes=test-vector-codegen %s -p storeOf:add,storeOf:add.1,storeOf:add.2,storeOf:add.3 -find-conditional-deps -o /dev/null 2>&1 | FileCheck %s

; CHECK-DAG: Cut edge:   %3 = load float, ptr getelementptr inbounds ([320000 x float], ptr @a, i64 0, i64 1), align 4, !tbaa !5 ->   store float %add, ptr %arrayidx5, align 4, !tbaa !5
; CHECK-DAG: Cut edge:   %6 = load float, ptr getelementptr inbounds ([320000 x float], ptr @a, i64 0, i64 2), align 8, !tbaa !5 ->   store float %add.1, ptr %arrayidx5.1, align 4, !tbaa !5
; CHECK-DAG: Cut edge:   %6 = load float, ptr getelementptr inbounds ([320000 x float], ptr @a, i64 0, i64 2), align 8, !tbaa !5 ->   store float %add, ptr %arrayidx5, align 4, !tbaa !5
; CHECK-DAG: Cut edge:   %9 = load float, ptr getelementptr inbounds ([320000 x float], ptr @a, i64 0, i64 3), align 4, !tbaa !5 ->   store float %add, ptr %arrayidx5, align 4, !tbaa !5
; CHECK-DAG: Cut edge:   %9 = load float, ptr getelementptr inbounds ([320000 x float], ptr @a, i64 0, i64 3), align 4, !tbaa !5 ->   store float %add.1, ptr %arrayidx5.1, align 4, !tbaa !5
; CHECK-DAG: Cut edge:   %9 = load float, ptr getelementptr inbounds ([320000 x float], ptr @a, i64 0, i64 3), align 4, !tbaa !5 ->   store float %add.2, ptr %arrayidx5.2, align 4, !tbaa !5
; CHECK: coalesced condition: (((4 * (sext i32 %M to i64))<nsw> + @a))[:12] OVERLAPS WITH ((4 + @a)<nuw><nsw>)[:12]

; ModuleID = 's174.c'
source_filename = "s174.c"
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@a = local_unnamed_addr global [320000 x float] zeroinitializer, align 16
@b = local_unnamed_addr global [320000 x float] zeroinitializer, align 16

; Function Attrs: nofree norecurse nosync nounwind ssp uwtable
define void @s174(i32 noundef %M) local_unnamed_addr #0 {
entry:
  %0 = sext i32 %M to i64
  %1 = load float, ptr @a, align 16, !tbaa !5
  %2 = load float, ptr @b, align 16, !tbaa !5
  %add = fadd float %1, %2
  %arrayidx5 = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 %0
  store float %add, ptr %arrayidx5, align 4, !tbaa !5
  %3 = load float, ptr getelementptr inbounds ([320000 x float], ptr @a, i64 0, i64 1), align 4, !tbaa !5
  %4 = load float, ptr getelementptr inbounds ([320000 x float], ptr @b, i64 0, i64 1), align 4, !tbaa !5
  %add.1 = fadd float %3, %4
  %5 = add nsw i64 %0, 1
  %arrayidx5.1 = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 %5
  store float %add.1, ptr %arrayidx5.1, align 4, !tbaa !5
  %6 = load float, ptr getelementptr inbounds ([320000 x float], ptr @a, i64 0, i64 2), align 8, !tbaa !5
  %7 = load float, ptr getelementptr inbounds ([320000 x float], ptr @b, i64 0, i64 2), align 8, !tbaa !5
  %add.2 = fadd float %6, %7
  %8 = add nsw i64 %0, 2
  %arrayidx5.2 = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 %8
  store float %add.2, ptr %arrayidx5.2, align 4, !tbaa !5
  %9 = load float, ptr getelementptr inbounds ([320000 x float], ptr @a, i64 0, i64 3), align 4, !tbaa !5
  %10 = load float, ptr getelementptr inbounds ([320000 x float], ptr @b, i64 0, i64 3), align 4, !tbaa !5
  %add.3 = fadd float %9, %10
  %11 = add nsw i64 %0, 3
  %arrayidx5.3 = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 %11
  store float %add.3, ptr %arrayidx5.3, align 4, !tbaa !5
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
!6 = !{!"float", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C/C++ TBAA"}
