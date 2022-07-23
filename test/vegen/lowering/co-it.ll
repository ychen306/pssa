; RUN: %opt -passes=test-vector-codegen,verify %s -S -p i,i8 -p cmp1,cmp34 -p s.03,s2.06 -p i.02,i1.05 -p add,add6 -p inc,inc8  -p cmp,cmp3 -p s.0.lcssa,s2.0.lcssa -p storeOf:s.0.lcssa,storeOf:s2.0.lcssa | FileCheck %s

; CHECK:  entry:
; CHECK-NEXT:    [[N:%.*]] = load <2 x i32>, ptr @sizes, align 4
; CHECK-NEXT:    [[N_GT_0:%.*]] = icmp slt <2 x i32> zeroinitializer, [[N]]
; CHECK-NEXT:    [[ENTER:%.*]] = call i1 @llvm.vector.reduce.or.v2i1(<2 x i1> [[N_GT_0]])
; CHECK-NEXT:    br i1 [[ENTER]], label %[[PREHEADER:.*]], label %[[SKIP:.*]]

; CHECK:  [[PREHEADER]]:
; CHECK-NEXT:    br label %[[HEADER:.*]]

; CHECK:  [[SKIP]]:
; CHECK-NEXT:    br label %[[JOIN:.*]]

; CHECK:  [[HEADER]]:
; CHECK-DAG:    [[SUM_OUT:%.*]] = phi <2 x i32> [ undef, %[[PREHEADER]] ], [ [[SUM_OUT_NEXT:%.*]], %[[LATCH:.*]] ]
; CHECK-DAG:    [[SUM:%.*]] = phi <2 x i32> [ <i32 1, i32 1>, %[[PREHEADER]] ], [ [[SUM_NEXT:%.*]], %[[LATCH]] ]
; CHECK-DAG:    [[IDX:%.*]] = phi <2 x i32> [ zeroinitializer, %[[PREHEADER]] ], [ [[IDX_NEXT:%.*]], %[[LATCH]] ]
; CHECK-DAG:    [[ACTIVE:%.*]] = phi <2 x i1> [ [[N_GT_0]], %[[PREHEADER]] ], [ [[ACTIVE_NEXT:%.*]], %[[LATCH]] ]
; CHECK-NEXT:    [[SUM_NEXT]] = add <2 x i32> [[SUM]], [[IDX]]
; CHECK-NEXT:    [[SUM_OUT_NEXT]] = select <2 x i1> [[ACTIVE]], <2 x i32> [[SUM_NEXT]], <2 x i32> [[SUM_OUT]]
; CHECK-NEXT:    [[IDX_NEXT]] = add <2 x i32> [[IDX]], <i32 1, i32 1>
; CHECK-NEXT:    [[LT_N:%.*]] = icmp slt <2 x i32> [[IDX_NEXT]], %i.vec
; CHECK-NEXT:    [[ACTIVE_NEXT]] = and <2 x i1> [[LT_N]], [[ACTIVE]]
; CHECK-NEXT:    [[CONT:%.*]] = call i1 @llvm.vector.reduce.or.v2i1(<2 x i1> [[ACTIVE_NEXT]])
; CHECK-NEXT:    br label %[[LATCH]]

; CHECK:  [[LATCH]]:
; CHECK-NEXT:    br i1 [[CONT]], label %[[HEADER]], label %[[EXIT:.*]]

; CHECK:  [[EXIT]]:
; CHECK-NEXT:    br label %[[JOIN]]

; CHECK:  [[JOIN]]:
; CHECK-NEXT:    [[SUM_EXIT:%.*]] = phi <2 x i32> [ [[SUM_OUT_NEXT]], %[[EXIT]] ], [ undef, %[[SKIP]] ]
; CHECK-NEXT:    [[NO_LOOP:%.*]] = xor <2 x i1> [[N_GT_0]], <i1 true, i1 true>
; CHECK-NEXT:    [[SUM_FINAL:%.*]] = select <2 x i1> [[NO_LOOP]], <2 x i32> zeroinitializer, <2 x i32> [[SUM_EXIT]]
; CHECK-NEXT:    store <2 x i32> [[SUM_FINAL]], ptr @out, align 4
; CHECK-NEXT:    ret void

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@sizes = global [2 x i32] zeroinitializer, align 4
@out = global [2 x i32] zeroinitializer, align 4

; Function Attrs: nounwind ssp uwtable
define void @foo() #0 {
entry:
  %i = load i32, ptr @sizes, align 4, !tbaa !5
  %cmp1 = icmp slt i32 0, %i
  br i1 %cmp1, label %for.body.preheader, label %for.end

for.body.preheader:                               ; preds = %entry
  br label %for.body

for.body:                                         ; preds = %for.body.preheader, %for.body
  %s.03 = phi i32 [ %add, %for.body ], [ 1, %for.body.preheader ]
  %i.02 = phi i32 [ %inc, %for.body ], [ 0, %for.body.preheader ]
  %add = add nsw i32 %s.03, %i.02
  %inc = add nsw i32 %i.02, 1
  %cmp = icmp slt i32 %inc, %i
  br i1 %cmp, label %for.body, label %for.end, !llvm.loop !9

for.end:                                          ; preds = %for.body, %entry
  %s.0.lcssa = phi i32 [ 0, %entry ], [ %add, %for.body ]
  store i32 %s.0.lcssa, ptr @out, align 4, !tbaa !5
  %i8 = load i32, ptr getelementptr inbounds ([2 x i32], ptr @sizes, i64 0, i64 1), align 4, !tbaa !5
  %cmp34 = icmp slt i32 0, %i8
  br i1 %cmp34, label %for.body5.preheader, label %for.end9

for.body5.preheader:                              ; preds = %for.end
  br label %for.body5

for.body5:                                        ; preds = %for.body5.preheader, %for.body5
  %s2.06 = phi i32 [ %add6, %for.body5 ], [ 1, %for.body5.preheader ]
  %i1.05 = phi i32 [ %inc8, %for.body5 ], [ 0, %for.body5.preheader ]
  %add6 = add nsw i32 %s2.06, %i1.05
  %inc8 = add nsw i32 %i1.05, 1
  %cmp3 = icmp slt i32 %inc8, %i8
  br i1 %cmp3, label %for.body5, label %for.end9, !llvm.loop !11

for.end9:                                         ; preds = %for.body5, %for.end
  %s2.0.lcssa = phi i32 [ 0, %for.end ], [ %add6, %for.body5 ]
  store i32 %s2.0.lcssa, ptr getelementptr inbounds ([2 x i32], ptr @out, i64 0, i64 1), align 4, !tbaa !5
  ret void
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
!9 = distinct !{!9, !10}
!10 = !{!"llvm.loop.mustprogress"}
!11 = distinct !{!11, !10}
