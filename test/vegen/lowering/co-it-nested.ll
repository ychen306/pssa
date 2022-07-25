; The following command triggers a crash
; RUN: %opt -passes=test-vector-codegen %s -o /dev/null\
; RUN:   -p s.06,s2.014 -p i.05,i8.013 -p s.13,s2.110 -p j.02,j13.09\
; RUN:   -p add,add18 -p inc,inc20 -p cmp2,cmp15 -p inc6,inc23\
; RUN:   -p cmp,cmp10 -p s.0.lcssa,s2.0.lcssa\
; RUN:   -o /dev/null

; RUN: %opt -passes=test-vector-codegen\
; RUN:   -p i,i1 -p s.06,s2.014 -p i.05,i8.013 -p s.13,s2.110 -p j.02,j13.09\
; RUN:   -p add,add18 -p inc,inc20 -p cmp2,cmp15 -p inc6,inc23 -p cmp4,cmp1012\
; RUN:   -p cmp,cmp10 -p s.0.lcssa,s2.0.lcssa -p storeOf:s.0.lcssa,storeOf:s2.0.lcssa\
; RUN:   %s -S | FileCheck %s

; CHECK: entry:
; CHECK-NEXT:   [[N:%.*]] = load <2 x i32>, ptr @sizes, align 4
; CHECK-NEXT:   [[N_GT_0:%.*]] = icmp sgt <2 x i32> [[N]], zeroinitializer
; CHECK-NEXT:   [[ENTER_OUTER:%.*]] = call i1 @llvm.vector.reduce.or.v2i1(<2 x i1> [[N_GT_0]])
; CHECK-NEXT:   br i1 [[ENTER_OUTER]], label %[[OUTER_PREHEADER:.*]], label %[[SKIP:.*]]

; CHECK: [[OUTER_PREHEADER]]:
; CHECK-NEXT:   br label %[[HEADER:.*]]

; CHECK: [[SKIP]]:
; CHECK-NEXT:   br label %[[DONE:.*]]

; CHECK: [[HEADER]]:
; CHECK-DAG:   [[S_OUT:%.*]] = phi <2 x i32> [ undef, %[[OUTER_PREHEADER]] ], [ [[S_OUT_NEXT:%.*]], %[[LATCH:.*]] ]
; CHECK-DAG:   [[I:%.*]] = phi <2 x i32> [ zeroinitializer, %[[OUTER_PREHEADER]] ], [ [[I_NEXT:%.*]], %[[LATCH]] ]
; CHECK-DAG:   [[S:%.*]] = phi <2 x i32> [ <i32 1, i32 1>, %[[OUTER_PREHEADER]] ], [ [[S_OUT_NEXT]], %[[LATCH]] ]
; CHECK-DAG:   [[ACTIVE:%.*]] = phi <2 x i1> [ [[N_GT_0]], %[[OUTER_PREHEADER]] ], [ [[ACTIVE_NEXT:%.*]], %[[LATCH]] ]
; CHECK-NEXT:   [[ENTER_INNER:%.*]] = call i1 @llvm.vector.reduce.or.v2i1(<2 x i1> [[ACTIVE]])
; CHECK-NEXT:   br i1 [[ENTER_INNER]], label %[[INNER_PREHEADER:.*]], label %[[SKIP_INNER:.*]]

; CHECK: [[LATCH]]:
; CHECK-NEXT:   br i1 [[OUTER_CONT:%.*]], label %[[HEADER]], label %[[EXIT:.*]]

; CHECK: exit:
; CHECK-NEXT:   br label %[[DONE]]

; CHECK: [[INNER_PREHEADER]]:
; CHECK-NEXT:   br label %[[INNER_HEADER:.*]]

; CHECK: [[SKIP_INNER]]:
; CHECK-NEXT:   br label %[[OUTER_JOIN:.*]]

; CHECK: [[INNER_HEADER]]:
; CHECK-DAG:   [[INNER_ACTIVE:%.*]] = phi <2 x i1> [ [[ACTIVE]], %[[INNER_PREHEADER]] ], [ [[INNER_ACTIVE_NEXT:%.*]], %[[INNER_LATCH:.*]] ]
; CHECK-DAG:   [[J:%.*]] = phi <2 x i32> [ zeroinitializer, %[[INNER_PREHEADER]] ], [ [[J_NEXT:%.*]], %[[INNER_LATCH]] ]
; CHECK-DAG:   [[S_INNER:%.*]] = phi <2 x i32> [ [[S]], %[[INNER_PREHEADER]] ], [ [[S_INNER_NEXT:%.*]], %[[INNER_LATCH]] ]
; CHECK-DAG:   [[S_INNER_OUT:%.*]] = phi <2 x i32> [ undef, %[[INNER_PREHEADER]] ], [ [[S_INNER_OUT_NEXT:%.*]], %[[INNER_LATCH]] ]
; CHECK-NEXT:   [[S_INNER_NEXT]] = add <2 x i32> [[S_INNER]], [[J]]
; CHECK-NEXT:   [[S_INNER_OUT_NEXT]] = select <2 x i1> [[INNER_ACTIVE]], <2 x i32> [[S_INNER_NEXT]], <2 x i32> [[S_INNER_OUT]]
; CHECK-NEXT:   [[J_NEXT]] = add <2 x i32> [[J]], <i32 1, i32 1>
; CHECK-NEXT:   [[J_LT_N:%.*]] = icmp slt <2 x i32> [[J_NEXT]], [[N]]
; CHECK-NEXT:   [[INNER_ACTIVE_NEXT]] = and <2 x i1> [[J_LT_N]], [[INNER_ACTIVE]]
; CHECK-NEXT:   [[INNER_CONT:%.*]] = call i1 @llvm.vector.reduce.or.v2i1(<2 x i1> [[INNER_ACTIVE_NEXT]])
; CHECK-NEXT:   br label %[[INNER_LATCH]]

; CHECK: [[INNER_LATCH]]:
; CHECK-NEXT:   br i1 [[INNER_CONT]], label %[[INNER_HEADER]], label %[[INNER_EXIT:.*]]

; CHECK: [[INNER_EXIT]]:
; CHECK-NEXT:   br label %[[OUTER_JOIN]]

; CHECK: [[OUTER_JOIN]]:
; CHECK-NEXT:   [[S_OUT_NEXT]] = phi <2 x i32> [ [[S_INNER_OUT_NEXT]], %[[INNER_EXIT]] ], [ [[S_OUT]], %[[SKIP_INNER]] ]
; CHECK-NEXT:   [[I_NEXT]] = add <2 x i32> [[I]], <i32 1, i32 1>
; CHECK-NEXT:   [[I_LT_N:%.*]] = icmp slt <2 x i32> [[I_NEXT]], [[N]]
; CHECK-NEXT:   [[ACTIVE_NEXT]] = and <2 x i1> [[I_LT_N]], [[ACTIVE]]
; CHECK-NEXT:   [[OUTER_CONT]] = call i1 @llvm.vector.reduce.or.v2i1(<2 x i1> [[ACTIVE_NEXT]])
; CHECK-NEXT:   br label %[[LATCH]]

; CHECK: [[DONE]]:
; CHECK-NEXT:   [[S_EXIT:%.*]] = phi <2 x i32> [ [[S_OUT_NEXT]], %[[EXIT]] ], [ undef, %[[SKIP]] ]
; CHECK-NEXT:   [[NO_LOOP:%.*]] = xor <2 x i1> [[N_GT_0]], <i1 true, i1 true>
; CHECK-NEXT:   [[S_FINAL:%.*]] = select <2 x i1> [[NO_LOOP]], <2 x i32> zeroinitializer, <2 x i32> [[S_EXIT]]
; CHECK-NEXT:   store <2 x i32> [[S_FINAL]], ptr @out, align 4
; CHECK-NEXT:   ret void

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@sizes = global [2 x i32] zeroinitializer, align 4
@out = global [2 x i32] zeroinitializer, align 4

; Function Attrs: nounwind ssp uwtable
define void @foo() #0 {
entry:
  %i = load i32, ptr @sizes, align 4
  %cmp4 = icmp sgt i32 %i, 0
  br i1 %cmp4, label %for.body.preheader, label %for.cond.cleanup

for.body.preheader:                               ; preds = %entry
  br label %for.body

for.cond.cleanup.loopexit:                        ; preds = %for.cond.cleanup3
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit, %entry
  %s.0.lcssa = phi i32 [ 0, %entry ], [ %add, %for.cond.cleanup.loopexit ]
  store i32 %s.0.lcssa, ptr @out, align 4, !tbaa !5
  %i1 = load i32, ptr getelementptr inbounds ([2 x i32], ptr @sizes, i64 0, i64 1), align 4
  %cmp1012 = icmp sgt i32 %i1, 0
  br i1 %cmp1012, label %for.body12.preheader, label %for.cond.cleanup11

for.body12.preheader:                             ; preds = %for.cond.cleanup
  br label %for.body12

for.body:                                         ; preds = %for.body.preheader, %for.cond.cleanup3
  %s.06 = phi i32 [ %add, %for.cond.cleanup3 ], [ 1, %for.body.preheader ]
  %i.05 = phi i32 [ %inc6, %for.cond.cleanup3 ], [ 0, %for.body.preheader ]
  br label %for.body4

for.cond.cleanup3:                                ; preds = %for.body4
  %inc6 = add nuw nsw i32 %i.05, 1
  %cmp = icmp slt i32 %inc6, %i
  br i1 %cmp, label %for.body, label %for.cond.cleanup.loopexit, !llvm.loop !9

for.body4:                                        ; preds = %for.body4, %for.body
  %s.13 = phi i32 [ %s.06, %for.body ], [ %add, %for.body4 ]
  %j.02 = phi i32 [ 0, %for.body ], [ %inc, %for.body4 ]
  %add = add nsw i32 %s.13, %j.02
  %inc = add nuw nsw i32 %j.02, 1
  %cmp2 = icmp slt i32 %inc, %i
  br i1 %cmp2, label %for.body4, label %for.cond.cleanup3, !llvm.loop !12

for.cond.cleanup11.loopexit:                      ; preds = %for.cond.cleanup16
  br label %for.cond.cleanup11

for.cond.cleanup11:                               ; preds = %for.cond.cleanup11.loopexit, %for.cond.cleanup
  %s2.0.lcssa = phi i32 [ 0, %for.cond.cleanup ], [ %add18, %for.cond.cleanup11.loopexit ]
  store i32 %s2.0.lcssa, ptr getelementptr inbounds ([2 x i32], ptr @out, i64 0, i64 1), align 4, !tbaa !5
  ret void

for.body12:                                       ; preds = %for.body12.preheader, %for.cond.cleanup16
  %s2.014 = phi i32 [ %add18, %for.cond.cleanup16 ], [ 1, %for.body12.preheader ]
  %i8.013 = phi i32 [ %inc23, %for.cond.cleanup16 ], [ 0, %for.body12.preheader ]
  br label %for.body17

for.cond.cleanup16:                               ; preds = %for.body17
  %inc23 = add nuw nsw i32 %i8.013, 1
  %cmp10 = icmp slt i32 %inc23, %i1
  br i1 %cmp10, label %for.body12, label %for.cond.cleanup11.loopexit, !llvm.loop !13

for.body17:                                       ; preds = %for.body17, %for.body12
  %s2.110 = phi i32 [ %s2.014, %for.body12 ], [ %add18, %for.body17 ]
  %j13.09 = phi i32 [ 0, %for.body12 ], [ %inc20, %for.body17 ]
  %add18 = add nsw i32 %s2.110, %j13.09
  %inc20 = add nuw nsw i32 %j13.09, 1
  %cmp15 = icmp slt i32 %inc20, %i1
  br i1 %cmp15, label %for.body17, label %for.cond.cleanup16, !llvm.loop !14
}

; Function Attrs: argmemonly nocallback nofree nosync nounwind willreturn
declare void @llvm.lifetime.start.p0(i64 immarg, ptr nocapture) #1

; Function Attrs: argmemonly nocallback nofree nosync nounwind willreturn
declare void @llvm.lifetime.end.p0(i64 immarg, ptr nocapture) #1

attributes #0 = { nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }
attributes #1 = { argmemonly nocallback nofree nosync nounwind willreturn }

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
!13 = distinct !{!13, !10, !11}
!14 = distinct !{!14, !10, !11}
