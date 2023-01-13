; RUN: %opt -passes=print-reductions %s -o /dev/null | FileCheck %s

; CHECK: Reduction for %add5 = add nsw i32 %add3, %i3 is (add i1 i i2 i3)

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: argmemonly mustprogress nofree norecurse nosync nounwind readonly ssp willreturn uwtable
define i32 @sum(ptr nocapture noundef readonly %a) local_unnamed_addr #0 {
entry:
  %i = load i32, ptr %a, align 4, !tbaa !5
  %arrayidx1 = getelementptr inbounds i32, ptr %a, i64 1
  %i1 = load i32, ptr %arrayidx1, align 4, !tbaa !5
  %add = add nsw i32 %i1, %i
  %arrayidx2 = getelementptr inbounds i32, ptr %a, i64 2
  %i2 = load i32, ptr %arrayidx2, align 4, !tbaa !5
  %add3 = add nsw i32 %add, %i2
  %arrayidx4 = getelementptr inbounds i32, ptr %a, i64 3
  %i3 = load i32, ptr %arrayidx4, align 4, !tbaa !5
  %add5 = add nsw i32 %add3, %i3
  ret i32 %add5
}

attributes #0 = { argmemonly mustprogress nofree norecurse nosync nounwind readonly ssp willreturn uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

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
