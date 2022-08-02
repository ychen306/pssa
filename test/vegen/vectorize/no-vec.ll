; This is not vectorizable due to insufficient aliasing info.
; RUN: %opt -passes=global-slp -S %s | FileCheck %s

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; CHECK: entry:
; CHECK-NEXT:   %0 = load i32, ptr %B, align 4, !tbaa !5
; CHECK-NEXT:   %1 = load i32, ptr %C, align 4, !tbaa !5
; CHECK-NEXT:   %add = add nsw i32 %1, %0
; CHECK-NEXT:   store i32 %add, ptr %A, align 4, !tbaa !5
; CHECK-NEXT:   %arrayidx.1 = getelementptr inbounds i32, ptr %B, i64 1
; CHECK-NEXT:   %2 = load i32, ptr %arrayidx.1, align 4, !tbaa !5
; CHECK-NEXT:   %arrayidx2.1 = getelementptr inbounds i32, ptr %C, i64 1
; CHECK-NEXT:   %3 = load i32, ptr %arrayidx2.1, align 4, !tbaa !5
; CHECK-NEXT:   %add.1 = add nsw i32 %3, %2
; CHECK-NEXT:   %arrayidx4.1 = getelementptr inbounds i32, ptr %A, i64 1
; CHECK-NEXT:   store i32 %add.1, ptr %arrayidx4.1, align 4, !tbaa !5
; CHECK-NEXT:   %arrayidx.2 = getelementptr inbounds i32, ptr %B, i64 2
; CHECK-NEXT:   %4 = load i32, ptr %arrayidx.2, align 4, !tbaa !5
; CHECK-NEXT:   %arrayidx2.2 = getelementptr inbounds i32, ptr %C, i64 2
; CHECK-NEXT:   %5 = load i32, ptr %arrayidx2.2, align 4, !tbaa !5
; CHECK-NEXT:   %add.2 = add nsw i32 %5, %4
; CHECK-NEXT:   %arrayidx4.2 = getelementptr inbounds i32, ptr %A, i64 2
; CHECK-NEXT:   store i32 %add.2, ptr %arrayidx4.2, align 4, !tbaa !5
; CHECK-NEXT:   %arrayidx.3 = getelementptr inbounds i32, ptr %B, i64 3
; CHECK-NEXT:   %6 = load i32, ptr %arrayidx.3, align 4, !tbaa !5
; CHECK-NEXT:   %arrayidx2.3 = getelementptr inbounds i32, ptr %C, i64 3
; CHECK-NEXT:   %7 = load i32, ptr %arrayidx2.3, align 4, !tbaa !5
; CHECK-NEXT:   %add.3 = add nsw i32 %7, %6
; CHECK-NEXT:   %arrayidx4.3 = getelementptr inbounds i32, ptr %A, i64 3
; CHECK-NEXT:   store i32 %add.3, ptr %arrayidx4.3, align 4, !tbaa !5
; CHECK-NEXT:   ret void

; Function Attrs: argmemonly nofree norecurse nosync nounwind ssp uwtable
define void @foo(ptr nocapture noundef writeonly %A, ptr nocapture noundef readonly %B, ptr nocapture noundef readonly %C) local_unnamed_addr #0 {
entry:
  %0 = load i32, ptr %B, align 4, !tbaa !5
  %1 = load i32, ptr %C, align 4, !tbaa !5
  %add = add nsw i32 %1, %0
  store i32 %add, ptr %A, align 4, !tbaa !5
  %arrayidx.1 = getelementptr inbounds i32, ptr %B, i64 1
  %2 = load i32, ptr %arrayidx.1, align 4, !tbaa !5
  %arrayidx2.1 = getelementptr inbounds i32, ptr %C, i64 1
  %3 = load i32, ptr %arrayidx2.1, align 4, !tbaa !5
  %add.1 = add nsw i32 %3, %2
  %arrayidx4.1 = getelementptr inbounds i32, ptr %A, i64 1
  store i32 %add.1, ptr %arrayidx4.1, align 4, !tbaa !5
  %arrayidx.2 = getelementptr inbounds i32, ptr %B, i64 2
  %4 = load i32, ptr %arrayidx.2, align 4, !tbaa !5
  %arrayidx2.2 = getelementptr inbounds i32, ptr %C, i64 2
  %5 = load i32, ptr %arrayidx2.2, align 4, !tbaa !5
  %add.2 = add nsw i32 %5, %4
  %arrayidx4.2 = getelementptr inbounds i32, ptr %A, i64 2
  store i32 %add.2, ptr %arrayidx4.2, align 4, !tbaa !5
  %arrayidx.3 = getelementptr inbounds i32, ptr %B, i64 3
  %6 = load i32, ptr %arrayidx.3, align 4, !tbaa !5
  %arrayidx2.3 = getelementptr inbounds i32, ptr %C, i64 3
  %7 = load i32, ptr %arrayidx2.3, align 4, !tbaa !5
  %add.3 = add nsw i32 %7, %6
  %arrayidx4.3 = getelementptr inbounds i32, ptr %A, i64 3
  store i32 %add.3, ptr %arrayidx4.3, align 4, !tbaa !5
  ret void
}

attributes #0 = { argmemonly nofree norecurse nosync nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

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
