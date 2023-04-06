; RUN: %opt -passes=print-reductions %s -o /dev/null | FileCheck %s

; CHECK: Reduction for   %s.1.3 = phi i32 [ %add.3, %if.then.3 ], [ %s.1.2, %for.inc.2 ] is (add i1@(cmp1) (i32 42) i3@(cmp1.1) i5@(cmp1.2) i7@(cmp1.3))

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: argmemonly nofree norecurse nosync nounwind readonly ssp uwtable
define i32 @foo(i32 noundef %n, ptr nocapture noundef readonly %x, ptr nocapture noundef readonly %y) local_unnamed_addr #0 {
entry:
  %i = load i32, ptr %y, align 4, !tbaa !5
  %cmp1 = icmp sgt i32 %i, 0
  br i1 %cmp1, label %if.then, label %for.inc

if.then:                                          ; preds = %entry
  %i1 = load i32, ptr %x, align 4, !tbaa !5
  %add = add nsw i32 %i1, 42
  br label %for.inc

for.inc:                                          ; preds = %if.then, %entry
  %s.1 = phi i32 [ %add, %if.then ], [ 42, %entry ]
  %arrayidx.1 = getelementptr inbounds i32, ptr %y, i64 1
  %i2 = load i32, ptr %arrayidx.1, align 4, !tbaa !5
  %cmp1.1 = icmp sgt i32 %i2, 0
  br i1 %cmp1.1, label %if.then.1, label %for.inc.1

if.then.1:                                        ; preds = %for.inc
  %arrayidx3.1 = getelementptr inbounds i32, ptr %x, i64 1
  %i3 = load i32, ptr %arrayidx3.1, align 4, !tbaa !5
  %add.1 = add nsw i32 %i3, %s.1
  br label %for.inc.1

for.inc.1:                                        ; preds = %if.then.1, %for.inc
  %s.1.1 = phi i32 [ %add.1, %if.then.1 ], [ %s.1, %for.inc ]
  %arrayidx.2 = getelementptr inbounds i32, ptr %y, i64 2
  %i4 = load i32, ptr %arrayidx.2, align 4, !tbaa !5
  %cmp1.2 = icmp sgt i32 %i4, 0
  br i1 %cmp1.2, label %if.then.2, label %for.inc.2

if.then.2:                                        ; preds = %for.inc.1
  %arrayidx3.2 = getelementptr inbounds i32, ptr %x, i64 2
  %i5 = load i32, ptr %arrayidx3.2, align 4, !tbaa !5
  %add.2 = add nsw i32 %i5, %s.1.1
  br label %for.inc.2

for.inc.2:                                        ; preds = %if.then.2, %for.inc.1
  %s.1.2 = phi i32 [ %add.2, %if.then.2 ], [ %s.1.1, %for.inc.1 ]
  %arrayidx.3 = getelementptr inbounds i32, ptr %y, i64 3
  %i6 = load i32, ptr %arrayidx.3, align 4, !tbaa !5
  %cmp1.3 = icmp sgt i32 %i6, 0
  br i1 %cmp1.3, label %if.then.3, label %for.inc.3

if.then.3:                                        ; preds = %for.inc.2
  %arrayidx3.3 = getelementptr inbounds i32, ptr %x, i64 3
  %i7 = load i32, ptr %arrayidx3.3, align 4, !tbaa !5
  %add.3 = add nsw i32 %i7, %s.1.2
  br label %for.inc.3

for.inc.3:                                        ; preds = %if.then.3, %for.inc.2
  %s.1.3 = phi i32 [ %add.3, %if.then.3 ], [ %s.1.2, %for.inc.2 ]
  ret i32 %s.1.3
}

attributes #0 = { argmemonly nofree norecurse nosync nounwind readonly ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

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
