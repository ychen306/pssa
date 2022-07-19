; RUN: %opt -passes=test-vector-codegen,adce,simplifycfg %s -S -p cmp,cmp6 -p storeOf:i,storeOf:i2 -p i,i2 -p i1,i3 | FileCheck %s

; CHECK: entry:
; CHECK-NEXT:   %arrayidx = getelementptr inbounds i32, ptr %a, i64 1
; CHECK-NEXT:   [[A:%.*]] = load <2 x i32>, ptr %arrayidx, align 4
; CHECK-NEXT:   %arrayidx1 = getelementptr inbounds i32, ptr %b, i64 1
; CHECK-NEXT:   [[B:%.*]] = load <2 x i32>, ptr %arrayidx1, align 4
; CHECK-NEXT:   [[CMP:%.*]] = icmp slt <2 x i32> [[A]], [[B]]
; CHECK-NEXT:   %arrayidx3 = getelementptr inbounds i32, ptr %c, i64 1
; CHECK-NEXT:   call void @llvm.masked.store.v2i32.p0(<2 x i32> [[A]], ptr %arrayidx3, i32 4, <2 x i1> [[CMP]])
; CHECK-NEXT:   ret void

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: argmemonly mustprogress nofree norecurse nosync nounwind ssp willreturn uwtable
define void @foo(ptr noalias nocapture noundef readonly %a, ptr noalias nocapture noundef readonly %b, ptr noalias nocapture noundef writeonly %c) local_unnamed_addr #0 {
entry:
  %arrayidx = getelementptr inbounds i32, ptr %a, i64 1
  %i = load i32, ptr %arrayidx, align 4, !tbaa !5
  %arrayidx1 = getelementptr inbounds i32, ptr %b, i64 1
  %i1 = load i32, ptr %arrayidx1, align 4, !tbaa !5
  %cmp = icmp slt i32 %i, %i1
  br i1 %cmp, label %if.then, label %if.end

if.then:                                          ; preds = %entry
  %arrayidx3 = getelementptr inbounds i32, ptr %c, i64 1
  store i32 %i, ptr %arrayidx3, align 4, !tbaa !5
  br label %if.end

if.end:                                           ; preds = %if.then, %entry
  %arrayidx4 = getelementptr inbounds i32, ptr %a, i64 2
  %i2 = load i32, ptr %arrayidx4, align 4, !tbaa !5
  %arrayidx5 = getelementptr inbounds i32, ptr %b, i64 2
  %i3 = load i32, ptr %arrayidx5, align 4, !tbaa !5
  %cmp6 = icmp slt i32 %i2, %i3
  br i1 %cmp6, label %if.then7, label %if.end10

if.then7:                                         ; preds = %if.end
  %arrayidx9 = getelementptr inbounds i32, ptr %c, i64 2
  store i32 %i2, ptr %arrayidx9, align 4, !tbaa !5
  br label %if.end10

if.end10:                                         ; preds = %if.then7, %if.end
  ret void
}

attributes #0 = { argmemonly mustprogress nofree norecurse nosync nounwind ssp willreturn uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

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
