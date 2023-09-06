; RUN: %opt -passes=test-vector-codegen,verify %s -S -p x1,x1.1 -p i,i1 -p storeOf:i,storeOf:i1 | FileCheck %s

; CHECK:   [[PTRS:%.*]] = getelementptr %struct.point, ptr %pts, <2 x i64> <i64 0, i64 18>, i32 0
; CHECK:   [[LOAD:%.*]] = call <2 x i32> @llvm.masked.gather.v2i32.v2p0(<2 x ptr> [[PTRS]], i32 4, <2 x i1> <i1 true, i1 true>, <2 x i32> undef)
; CHECK:   store <2 x i32> [[LOAD]], ptr %x, align 4

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

%struct.point = type { i32, i32 }

; Function Attrs: nofree norecurse nounwind ssp uwtable
define dso_local void @foo(ptr nocapture readonly %pts, ptr noalias nocapture %x) local_unnamed_addr {
entry:
  %x1 = getelementptr inbounds %struct.point, ptr %pts, i64 0, i32 0
  %i = load i32, ptr %x1, align 4, !tbaa !3
  store i32 %i, ptr %x, align 4, !tbaa !8
  %x1.1 = getelementptr inbounds %struct.point, ptr %pts, i64 18, i32 0
  %i1 = load i32, ptr %x1.1, align 4, !tbaa !3
  %arrayidx3.1 = getelementptr inbounds i32, ptr %x, i64 1
  store i32 %i1, ptr %arrayidx3.1, align 4, !tbaa !8
  ret void
}

!llvm.module.flags = !{!0, !1}
!llvm.ident = !{!2}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{!"clang version 12.0.1 (https://github.com/llvm/llvm-project.git 328a6ec955327c6d56b6bc3478c723dd3cd468ef)"}
!3 = !{!4, !5, i64 0}
!4 = !{!"point", !5, i64 0, !5, i64 4}
!5 = !{!"int", !6, i64 0}
!6 = !{!"omnipotent char", !7, i64 0}
!7 = !{!"Simple C/C++ TBAA"}
!8 = !{!5, !5, i64 0}
