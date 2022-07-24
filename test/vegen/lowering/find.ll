; RUN: %opt -passes=test-vector-codegen,verify %s -S\
; RUN: -p cmp28,cmp531 -p wide.trip.count,wide.trip.count39 -p indvars.iv,indvars.iv36\
; RUN: -p arrayidx,arrayidx9 -p i,i2 -p cmp1,cmp10 -p i1,i3 -p indvars.iv.next,indvars.iv.next37\
; RUN: -p idx.0,idx.1 -p storeOf:idx.0,storeOf:idx.1 -p exitcond.not,exitcond40.not | FileCheck %s

; CHECK: entry:
; CHECK-NEXT:   [[IN_N0:%.*]] = insertelement <2 x i32> undef, i32 %n, i64 0
; CHECK-NEXT:   [[N_SPLAT:%.*]] = insertelement <2 x i32> [[IN_N0]], i32 %n, i64 1
; CHECK-NEXT:   [[N_GT_0:%.*]] = icmp sgt <2 x i32> [[N_SPLAT]], zeroinitializer
; CHECK-NEXT:   [[INS_N1:%.*]] = insertelement <2 x i32> undef, i32 %n, i64 0
; CHECK-NEXT:   [[N_SPLAT2:%.*]] = insertelement <2 x i32> %3, i32 %n, i64 1
; CHECK-NEXT:   [[N_SPLAT_WIDE:%.*]] = zext <2 x i32> [[N_SPLAT2]] to <2 x i64>
; CHECK:   [[ENTER:%.*]] = call i1 @llvm.vector.reduce.or.v2i1(<2 x i1> [[N_GT_0]])
; CHECK-NEXT:   br i1 [[ENTER]], label %[[PREHEADER:.*]], label %[[SKIP:.*]]

; CHECK: [[PREHEADER]]:
; CHECK-NEXT:   br label %[[HEADER:.*]]

; CHECK: [[SKIP]]:
; CHECK-NEXT:   br label %[[JOIN:.*]]

; CHECK: [[HEADER]]:
; CHECK-DAG:   [[ACTIVE:%.*]] = phi <2 x i1> [ [[N_GT_0]], %[[PREHEADER]] ], [ [[ACTIVE_NEXT:%.*]], %[[LATCH:.*]] ]
; CHECK-DAG:   [[IDX:%.*]] = phi <2 x i64> [ zeroinitializer, %[[PREHEADER]] ], [ [[IDX_NEXT:%.*]], %[[LATCH]] ]
; CHECK-DAG:   [[IDX_OUT:%.*]] = phi <2 x i64> [ undef, %[[PREHEADER]] ], [ [[IDX_OUT_NEXT:%.*]], %[[LATCH]] ]
; CHECK-DAG:   [[FOUND_OUT:%.*]] = phi <2 x i1> [ undef, %[[PREHEADER]] ], [ [[FOUND_OUT_NEXT:%.*]], %[[LATCH]] ]
; CHECK-NEXT:   [[ADDRS:%.*]] = getelementptr i32, ptr %a, <2 x i64> [[IDX]]
; CHECK-NEXT:   [[IDX_OUT_NEXT]] = select <2 x i1> [[ACTIVE]], <2 x i64> [[IDX]], <2 x i64> [[IDX_OUT]]
; CHECK-NEXT:   [[LOAD:%.*]] = call <2 x i32> @llvm.masked.gather.v2i32.v2p0(<2 x ptr> [[ADDRS]], i32 4, <2 x i1> [[ACTIVE]], <2 x i32> undef)
; CHECK-NEXT:   [[FOUND:%.*]] = icmp eq <2 x i32> [[LOAD]], <i32 0, i32 42>
; CHECK-NEXT:   [[FOUND_OUT_NEXT]] = select <2 x i1> [[ACTIVE]], <2 x i1> [[FOUND]], <2 x i1> [[FOUND_OUT]]
; CHECK-NEXT:   [[IDX_NEXT]] = add <2 x i64> [[IDX]], <i64 1, i64 1>
; CHECK-NEXT:   [[DONE:%.*]] = icmp eq <2 x i64> [[IDX_NEXT]], [[N_SPLAT_WIDE]]
; CHECK-NEXT:   [[NOT_FOUND:%.*]] = xor <2 x i1> [[FOUND]], <i1 true, i1 true>
; CHECK-NEXT:   [[NOT_DONE:%.*]] = xor <2 x i1> [[DONE]], <i1 true, i1 true>
; CHECK-NEXT:   [[CONT:%.*]] = and <2 x i1> [[NOT_FOUND]], [[NOT_DONE]]
; CHECK-NEXT:   [[ACTIVE_NEXT]] = and <2 x i1> [[CONT]], [[ACTIVE]]
; CHECK-NEXT:   [[ANY_ACTIVE_NEXT:%.*]] = call i1 @llvm.vector.reduce.or.v2i1(<2 x i1> [[ACTIVE_NEXT]])
; CHECK-NEXT:   br label %[[LATCH]]

; CHECK: latch:
; CHECK-NEXT:   br i1 [[ANY_ACTIVE_NEXT]], label %[[HEADER]], label %exit

; CHECK: exit:
; CHECK-NEXT:   br label %[[JOIN]]

; CHECK: [[JOIN]]:
; CHECK-DAG:   [[FOUND_EXIT:%.*]] = phi <2 x i1> [ [[FOUND_OUT_NEXT]], %exit ], [ undef, %[[SKIP]] ]
; CHECK-DAG:   [[IDX_EXIT:%.*]] = phi <2 x i64> [ [[IDX_OUT_NEXT]], %exit ], [ undef, %[[SKIP]] ]
; CHECK-NEXT:   [[IDX_TRUNC:%.*]] = trunc <2 x i64> [[IDX_EXIT]] to <2 x i32>
; CHECK-NEXT:   [[N_LE_0:%.*]] = xor <2 x i1> [[N_GT_0]], <i1 true, i1 true>
; CHECK-NEXT:   [[ACTUALLY_FOUND:%.*]] = and <2 x i1> [[N_GT_0]], [[FOUND_EXIT]]
; CHECK:        [[FOUND_FINAL:%.*]] = select <2 x i1> [[ACTUALLY_FOUND]], <2 x i32> [[IDX_TRUNC]], <2 x i32> <i32 -1, i32 -1>
; CHECK-NEXT:   [[IDX_FINAL:%.*]] = select <2 x i1> [[N_LE_0]], <2 x i32> <i32 -1, i32 -1>, <2 x i32> [[FOUND_FINAL]]
; CHECK-NEXT:   %arrayidx17 = getelementptr inbounds i32, ptr %indices, i64 1
; CHECK-NEXT:   store <2 x i32> [[IDX_FINAL]], ptr %indices, align 4
; CHECK-NEXT:   ret void

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: argmemonly nofree norecurse nosync nounwind ssp uwtable
define void @find(i32 noundef %n, ptr noalias nocapture noundef readonly %a, ptr noalias nocapture noundef readnone %b, ptr noalias nocapture noundef writeonly %indices) local_unnamed_addr #0 {
entry:
  %cmp28 = icmp sgt i32 %n, 0
  br i1 %cmp28, label %for.body.preheader, label %cleanup

for.body.preheader:                               ; preds = %entry
  %wide.trip.count = zext i32 %n to i64
  br label %for.body

for.body:                                         ; preds = %for.inc, %for.body.preheader
  %indvars.iv = phi i64 [ 0, %for.body.preheader ], [ %indvars.iv.next, %for.inc ]
  %arrayidx = getelementptr inbounds i32, ptr %a, i64 %indvars.iv
  %i = load i32, ptr %arrayidx, align 4, !tbaa !5
  %cmp1 = icmp eq i32 %i, 0
  br i1 %cmp1, label %cleanup.loopexit.split.loop.exit, label %for.inc

for.inc:                                          ; preds = %for.body
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %exitcond.not = icmp eq i64 %indvars.iv.next, %wide.trip.count
  br i1 %exitcond.not, label %cleanup, label %for.body, !llvm.loop !9

cleanup.loopexit.split.loop.exit:                 ; preds = %for.body
  %i1 = trunc i64 %indvars.iv to i32
  br label %cleanup

cleanup:                                          ; preds = %cleanup.loopexit.split.loop.exit, %for.inc, %entry
  %idx.0 = phi i32 [ -1, %entry ], [ %i1, %cleanup.loopexit.split.loop.exit ], [ -1, %for.inc ]
  store i32 %idx.0, ptr %indices, align 4, !tbaa !5
  %cmp531 = icmp sgt i32 %n, 0
  br i1 %cmp531, label %for.body7.preheader, label %cleanup15

for.body7.preheader:                              ; preds = %cleanup
  %wide.trip.count39 = zext i32 %n to i64
  br label %for.body7

for.body7:                                        ; preds = %for.inc13, %for.body7.preheader
  %indvars.iv36 = phi i64 [ 0, %for.body7.preheader ], [ %indvars.iv.next37, %for.inc13 ]
  %arrayidx9 = getelementptr inbounds i32, ptr %a, i64 %indvars.iv36
  %i2 = load i32, ptr %arrayidx9, align 4, !tbaa !5
  %cmp10 = icmp eq i32 %i2, 42
  br i1 %cmp10, label %cleanup15.loopexit.split.loop.exit, label %for.inc13

for.inc13:                                        ; preds = %for.body7
  %indvars.iv.next37 = add nuw nsw i64 %indvars.iv36, 1
  %exitcond40.not = icmp eq i64 %indvars.iv.next37, %wide.trip.count39
  br i1 %exitcond40.not, label %cleanup15, label %for.body7, !llvm.loop !12

cleanup15.loopexit.split.loop.exit:               ; preds = %for.body7
  %i3 = trunc i64 %indvars.iv36 to i32
  br label %cleanup15

cleanup15:                                        ; preds = %cleanup15.loopexit.split.loop.exit, %for.inc13, %cleanup
  %idx.1 = phi i32 [ -1, %cleanup ], [ %i3, %cleanup15.loopexit.split.loop.exit ], [ -1, %for.inc13 ]
  %arrayidx17 = getelementptr inbounds i32, ptr %indices, i64 1
  store i32 %idx.1, ptr %arrayidx17, align 4, !tbaa !5
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
!9 = distinct !{!9, !10, !11}
!10 = !{!"llvm.loop.mustprogress"}
!11 = !{!"llvm.loop.unroll.disable"}
!12 = distinct !{!12, !10, !11}
