; RUN: %opt -passes=test-vector-codegen %s -S -p i1,i3 -p i,i2 -p storeOf:i1,storeOf:i3 | FileCheck %s

; CHECK: entry:
; CHECK-NEXT:   %arrayidx2 = getelementptr inbounds ptr, ptr %ptrs, i64 1
; CHECK-NEXT:   [[PTRS:%.*]] = load <2 x ptr>, ptr %ptrs, align 8
; CHECK-NEXT:   [[X:%.*]] = call <2 x i32> @llvm.masked.gather.v2i32.v2p0(<2 x ptr> [[PTRS]], i32 4, <2 x i1> <i1 true, i1 true>, <2 x i32> undef)
; CHECK-NEXT:   %arrayidx3 = getelementptr inbounds i32, ptr %out, i64 1
; CHECK-NEXT:   store <2 x i32> [[X]], ptr %out, align 4
; CHECK-NEXT:   ret void

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: mustprogress nofree norecurse nosync nounwind ssp willreturn uwtable
define void @foo(ptr noalias nocapture noundef writeonly %out, ptr nocapture noundef readonly %ptrs) local_unnamed_addr #0 {
entry:
  %i = load ptr, ptr %ptrs, align 8, !tbaa !5
  %i1 = load i32, ptr %i, align 4, !tbaa !9
  store i32 %i1, ptr %out, align 4, !tbaa !9
  %arrayidx2 = getelementptr inbounds ptr, ptr %ptrs, i64 1
  %i2 = load ptr, ptr %arrayidx2, align 8, !tbaa !5
  %i3 = load i32, ptr %i2, align 4, !tbaa !9
  %arrayidx3 = getelementptr inbounds i32, ptr %out, i64 1
  store i32 %i3, ptr %arrayidx3, align 4, !tbaa !9
  ret void
}

attributes #0 = { mustprogress nofree norecurse nosync nounwind ssp willreturn uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"uwtable", i32 2}
!3 = !{i32 7, !"frame-pointer", i32 2}
!4 = !{!"clang version 15.0.0 (https://github.com/llvm/llvm-project 12f9c7b27063a4a487621f48c167e4f88de6d297)"}
!5 = !{!6, !6, i64 0}
!6 = !{!"any pointer", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C/C++ TBAA"}
!9 = !{!10, !10, i64 0}
!10 = !{!"int", !7, i64 0}
