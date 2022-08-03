; RUN: %opt -passes=test-vector-codegen,verify %s -p i1,i4 -p mul1,mul13 -p storeOf:mul1,storeOf:mul13 -S | FileCheck %s
; RUN: %opt -passes=global-slp %s -S | FileCheck %s

; CHECK:  [[LOAD:%.*]] = load <2 x i32>, ptr %arrayidx
; CHECK-NOT: br
; CHECK:  [[MUL:%.*]] = mul <2 x i32> [[LOAD]], <i32 3, i32 5>
; CHECK-NOT: br
; CHECK:  store <2 x i32> [[MUL]], ptr %arrayidx4

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: argmemonly nofree norecurse nosync nounwind ssp uwtable
define void @foo(i32 noundef %n, ptr noalias nocapture noundef writeonly %a, ptr noalias nocapture noundef readonly %b) local_unnamed_addr #0 {
entry:
  %cmp30 = icmp sgt i32 %n, 0
  br i1 %cmp30, label %for.body.preheader, label %for.cond6.preheader

for.body.preheader:                               ; preds = %entry
  %wide.trip.count = zext i32 %n to i64
  br label %for.body

for.cond6.preheader:                              ; preds = %for.body, %entry
  %cmp732 = icmp sgt i32 %n, 0
  br i1 %cmp732, label %for.body9.preheader, label %for.cond.cleanup8

for.body9.preheader:                              ; preds = %for.cond6.preheader
  %wide.trip.count41 = zext i32 %n to i64
  br label %for.body9

for.body:                                         ; preds = %for.body, %for.body.preheader
  %indvars.iv = phi i64 [ 0, %for.body.preheader ], [ %indvars.iv.next, %for.body ]
  %i = shl nuw nsw i64 %indvars.iv, 1
  %arrayidx = getelementptr inbounds i32, ptr %b, i64 %i
  %i1 = load i32, ptr %arrayidx, align 4, !tbaa !5
  %mul1 = mul nsw i32 %i1, 3
  %arrayidx4 = getelementptr inbounds i32, ptr %a, i64 %i
  store i32 %mul1, ptr %arrayidx4, align 4, !tbaa !5
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %exitcond.not = icmp eq i64 %indvars.iv.next, %wide.trip.count
  br i1 %exitcond.not, label %for.cond6.preheader, label %for.body, !llvm.loop !9

for.cond.cleanup8:                                ; preds = %for.body9, %for.cond6.preheader
  ret void

for.body9:                                        ; preds = %for.body9, %for.body9.preheader
  %indvars.iv36 = phi i64 [ 0, %for.body9.preheader ], [ %indvars.iv.next37, %for.body9 ]
  %i2 = shl nuw nsw i64 %indvars.iv36, 1
  %i3 = or i64 %i2, 1
  %arrayidx12 = getelementptr inbounds i32, ptr %b, i64 %i3
  %i4 = load i32, ptr %arrayidx12, align 4, !tbaa !5
  %mul13 = mul nsw i32 %i4, 5
  %arrayidx17 = getelementptr inbounds i32, ptr %a, i64 %i3
  store i32 %mul13, ptr %arrayidx17, align 4, !tbaa !5
  %indvars.iv.next37 = add nuw nsw i64 %indvars.iv36, 1
  %exitcond42.not = icmp eq i64 %indvars.iv.next37, %wide.trip.count41
  br i1 %exitcond42.not, label %for.cond.cleanup8, label %for.body9, !llvm.loop !12
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
!9 = distinct !{!9, !10, !11}
!10 = !{!"llvm.loop.mustprogress"}
!11 = !{!"llvm.loop.unroll.disable"}
!12 = distinct !{!12, !10, !11}
