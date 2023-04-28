; RUN: %opt -passes=test-vector-codegen %s -p storeOf:add,storeOf:add.1,storeOf:add.2,storeOf:add.3 -find-conditional-deps -o /dev/null 2>&1 | FileCheck %s

; CHECK-DAG:	IF ({@a,+,1280000}<nuw><%for.body4>)[:4] DISJOINT WITH ({(8 + (4 * (sext i32 %M to i64))<nsw> + @a),+,1280000}<nw><%for.body4.2>)[:4]
; CHECK-DAG:	IF ({((4 * (sext i32 %M to i64))<nsw> + @a),+,1280000}<nw><%for.body4>)[:4] DISJOINT WITH ({(8 + @a)<nuw><nsw>,+,1280000}<nuw><%for.body4.2>)[:4]
; CHECK-DAG:	IF ({(8 + @a)<nuw><nsw>,+,1280000}<nuw><%for.body4.2>)[:4] DISJOINT WITH ({(12 + (4 * (sext i32 %M to i64))<nsw> + @a),+,1280000}<nw><%for.body4.3>)[:4]
; CHECK-DAG:	IF ({(8 + (4 * (sext i32 %M to i64))<nsw> + @a),+,1280000}<nw><%for.body4.2>)[:4] DISJOINT WITH ({(12 + @a)<nuw><nsw>,+,1280000}<nuw><%for.body4.3>)[:4]
; CHECK-DAG:	IF ({@a,+,1280000}<nuw><%for.body4>)[:4] DISJOINT WITH ({(4 + (4 * (sext i32 %M to i64))<nsw> + @a),+,1280000}<nw><%for.body4.1>)[:4]
; CHECK-DAG:	IF ({((4 * (sext i32 %M to i64))<nsw> + @a),+,1280000}<nw><%for.body4>)[:4] DISJOINT WITH ({(4 + @a)<nuw><nsw>,+,1280000}<nuw><%for.body4.1>)[:4]
; CHECK-DAG:	IF ({(4 + @a)<nuw><nsw>,+,1280000}<nuw><%for.body4.1>)[:4] DISJOINT WITH ({(8 + (4 * (sext i32 %M to i64))<nsw> + @a),+,1280000}<nw><%for.body4.2>)[:4]
; CHECK-DAG:	IF ({(4 + (4 * (sext i32 %M to i64))<nsw> + @a),+,1280000}<nw><%for.body4.1>)[:4] DISJOINT WITH ({(8 + @a)<nuw><nsw>,+,1280000}<nuw><%for.body4.2>)[:4]
; CHECK-DAG:	IF ({@a,+,1280000}<nuw><%for.body4>)[:4] DISJOINT WITH ({(12 + (4 * (sext i32 %M to i64))<nsw> + @a),+,1280000}<nw><%for.body4.3>)[:4]
; CHECK-DAG:	IF ({((4 * (sext i32 %M to i64))<nsw> + @a),+,1280000}<nw><%for.body4>)[:4] DISJOINT WITH ({(12 + @a)<nuw><nsw>,+,1280000}<nuw><%for.body4.3>)[:4]
; CHECK-DAG:	IF ({(4 + @a)<nuw><nsw>,+,1280000}<nuw><%for.body4.1>)[:4] DISJOINT WITH ({(12 + (4 * (sext i32 %M to i64))<nsw> + @a),+,1280000}<nw><%for.body4.3>)[:4]
; CHECK-DAG:	IF ({(4 + (4 * (sext i32 %M to i64))<nsw> + @a),+,1280000}<nw><%for.body4.1>)[:4] DISJOINT WITH ({(12 + @a)<nuw><nsw>,+,1280000}<nuw><%for.body4.3>)[:4]
; CHECK: COALESCED RANGE CHECK = (@a)[:409600000016] DISJOINT WITH (((4 * (sext i32 %M to i64))<nsw> + @a))[:409600000016]

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@a = local_unnamed_addr global [320000 x [320000 x float]] zeroinitializer, align 16
@b = local_unnamed_addr global [320000 x [320000 x float]] zeroinitializer, align 16

; Function Attrs: nofree norecurse nosync nounwind ssp uwtable
define void @s174(i32 noundef %M) local_unnamed_addr #0 {
entry:
  %0 = sext i32 %M to i64
  br label %for.body4

for.cond.cleanup3:                                ; preds = %for.body4
  %1 = add nsw i64 %0, 1
  br label %for.body4.1

for.body4.1:                                      ; preds = %for.body4.1, %for.cond.cleanup3
  %indvars.iv.1 = phi i64 [ 0, %for.cond.cleanup3 ], [ %indvars.iv.next.1, %for.body4.1 ]
  %arrayidx6.1 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv.1, i64 1
  %2 = load float, ptr %arrayidx6.1, align 4, !tbaa !5
  %arrayidx10.1 = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 %indvars.iv.1, i64 1
  %3 = load float, ptr %arrayidx10.1, align 4, !tbaa !5
  %add.1 = fadd float %2, %3
  %arrayidx15.1 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv.1, i64 %1
  store float %add.1, ptr %arrayidx15.1, align 4, !tbaa !5
  %indvars.iv.next.1 = add nuw nsw i64 %indvars.iv.1, 1
  %exitcond.1.not = icmp eq i64 %indvars.iv.next.1, 320000
  br i1 %exitcond.1.not, label %for.cond.cleanup3.1, label %for.body4.1, !llvm.loop !9

for.cond.cleanup3.1:                              ; preds = %for.body4.1
  %4 = add nsw i64 %0, 2
  br label %for.body4.2

for.body4.2:                                      ; preds = %for.body4.2, %for.cond.cleanup3.1
  %indvars.iv.2 = phi i64 [ 0, %for.cond.cleanup3.1 ], [ %indvars.iv.next.2, %for.body4.2 ]
  %arrayidx6.2 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv.2, i64 2
  %5 = load float, ptr %arrayidx6.2, align 8, !tbaa !5
  %arrayidx10.2 = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 %indvars.iv.2, i64 2
  %6 = load float, ptr %arrayidx10.2, align 8, !tbaa !5
  %add.2 = fadd float %5, %6
  %arrayidx15.2 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv.2, i64 %4
  store float %add.2, ptr %arrayidx15.2, align 4, !tbaa !5
  %indvars.iv.next.2 = add nuw nsw i64 %indvars.iv.2, 1
  %exitcond.2.not = icmp eq i64 %indvars.iv.next.2, 320000
  br i1 %exitcond.2.not, label %for.cond.cleanup3.2, label %for.body4.2, !llvm.loop !9

for.cond.cleanup3.2:                              ; preds = %for.body4.2
  %7 = add nsw i64 %0, 3
  br label %for.body4.3

for.body4.3:                                      ; preds = %for.body4.3, %for.cond.cleanup3.2
  %indvars.iv.3 = phi i64 [ 0, %for.cond.cleanup3.2 ], [ %indvars.iv.next.3, %for.body4.3 ]
  %arrayidx6.3 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv.3, i64 3
  %8 = load float, ptr %arrayidx6.3, align 4, !tbaa !5
  %arrayidx10.3 = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 %indvars.iv.3, i64 3
  %9 = load float, ptr %arrayidx10.3, align 4, !tbaa !5
  %add.3 = fadd float %8, %9
  %arrayidx15.3 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv.3, i64 %7
  store float %add.3, ptr %arrayidx15.3, align 4, !tbaa !5
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv.3, 1
  %exitcond.3.not = icmp eq i64 %indvars.iv.next.3, 320000
  br i1 %exitcond.3.not, label %for.cond.cleanup3.3, label %for.body4.3, !llvm.loop !9

for.cond.cleanup3.3:                              ; preds = %for.body4.3
  ret void

for.body4:                                        ; preds = %for.body4, %entry
  %indvars.iv = phi i64 [ 0, %entry ], [ %indvars.iv.next, %for.body4 ]
  %arrayidx6 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv, i64 0
  %10 = load float, ptr %arrayidx6, align 16, !tbaa !5
  %arrayidx10 = getelementptr inbounds [320000 x [320000 x float]], ptr @b, i64 0, i64 %indvars.iv, i64 0
  %11 = load float, ptr %arrayidx10, align 16, !tbaa !5
  %add = fadd float %10, %11
  %arrayidx15 = getelementptr inbounds [320000 x [320000 x float]], ptr @a, i64 0, i64 %indvars.iv, i64 %0
  store float %add, ptr %arrayidx15, align 4, !tbaa !5
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %exitcond.not = icmp eq i64 %indvars.iv.next, 320000
  br i1 %exitcond.not, label %for.cond.cleanup3, label %for.body4, !llvm.loop !9
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
!9 = distinct !{!9, !10, !11}
!10 = !{!"llvm.loop.mustprogress"}
!11 = !{!"llvm.loop.unroll.disable"}
