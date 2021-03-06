; RUN: %opt -passes=test-vector-codegen,verify -p needle.020,needle12.023 -p i.019,i17.022 -p cmp218,cmp1921 -p idxprom,idxprom22 -p arrayidx,arrayidx23 -p i,i24 -p cmp5,cmp24 -p inc,inc28 -p cmp2,cmp19 -p inc7,inc33 -p cmp,cmp14 -p idx.2,idx.5 -p storeOf:idx.2,storeOf:idx.5 %s -S | FileCheck %s

; CHECK:  entry:
; CHECK-NEXT:    br label %[[HEADER:.*]]
; CHECK:       [[HEADER]]:
; CHECK-DAG:    [[CMP24_GUARD_VEC_MEM_0:%.*]] = phi <2 x i1> [ undef, [[ENTRY:%.*]] ], [ [[CMP24_GUARD_VEC_MEM_1:%.*]], %[[LATCH:.*]] ]
; CHECK-DAG:    [[I17_022_GUARD_VEC_MEM_0:%.*]] = phi <2 x i32> [ undef, [[ENTRY]] ], [ [[I17_022_GUARD_VEC_MEM_1:%.*]], %[[LATCH]] ]
; CHECK-DAG:    [[NEEDLE12_023_MU_VEC:%.*]] = phi <2 x i32> [ <i32 0, i32 42>, [[ENTRY]] ], [ [[INC7_VEC:%.*]], %[[LATCH]] ]
; CHECK-DAG:    [[ACTIVE_MU_VEC:%.*]] = phi <2 x i1> [ <i1 true, i1 true>, [[ENTRY]] ], [ [[TMP23:%.*]], %[[LATCH]] ]
; CHECK-DAG:    [[CMP218_GUARD_MU_VEC:%.*]] = phi <2 x i1> [ undef, [[ENTRY]] ], [ [[CMP1921_GUARD_VEC:%.*]], %[[LATCH]] ]
; CHECK-NEXT:    [[TMP0:%.*]] = insertelement <2 x i32> undef, i32 [[N:%.*]], i64 0
; CHECK-NEXT:    [[TMP1:%.*]] = insertelement <2 x i32> [[TMP0]], i32 [[N]], i64 1
; CHECK-NEXT:    [[CMP218_VEC:%.*]] = icmp sgt <2 x i32> [[TMP1]], zeroinitializer
; CHECK-NEXT:    [[CMP1921_GUARD_VEC]] = select <2 x i1> [[ACTIVE_MU_VEC]], <2 x i1> [[CMP218_VEC]], <2 x i1> [[CMP218_GUARD_MU_VEC]]
; CHECK-NEXT:    [[TMP2:%.*]] = and <2 x i1> [[CMP218_VEC]], [[ACTIVE_MU_VEC]]
; CHECK-NEXT:    [[TMP3:%.*]] = call i1 @llvm.vector.reduce.or.v2i1(<2 x i1> [[TMP2]])
; CHECK-NEXT:    br i1 [[TMP3]], label %[[TMP9:.*]], label %[[TMP10:.*]]
; CHECK:       [[LATCH]]:
; CHECK-NEXT:    br i1 [[TMP24:%.*]], label %[[HEADER]], label %[[EXIT:.*]]
; CHECK:       [[EXIT]]:
; CHECK-NEXT:    [[TMP4:%.*]] = and <2 x i1> [[CMP1921_GUARD_VEC]], [[CMP24_GUARD_VEC_MEM_1]]
; CHECK-NEXT:    [[TMP5:%.*]] = xor <2 x i1> [[CMP1921_GUARD_VEC]], <i1 true, i1 true>
; CHECK-NEXT:    [[TMP6:%.*]] = xor <2 x i1> [[CMP24_GUARD_VEC_MEM_1]], <i1 true, i1 true>
; CHECK-NEXT:    [[TMP7:%.*]] = and <2 x i1> [[CMP1921_GUARD_VEC]], [[TMP6]]
; CHECK-NEXT:    [[TMP8:%.*]] = or <2 x i1> [[TMP5]], [[TMP7]]
; CHECK-NEXT:    [[IDX_5_VEC:%.*]] = select <2 x i1> [[TMP4]], <2 x i32> [[I17_022_GUARD_VEC_MEM_1]], <2 x i32> <i32 -1, i32 -1>
; CHECK-NEXT:    [[ARRAYIDX37:%.*]] = getelementptr inbounds i32, ptr [[INDICES:%.*]], i64 1
; CHECK-NEXT:    store <2 x i32> [[IDX_5_VEC]], ptr [[INDICES]], align 4
; CHECK-NEXT:    ret void
; CHECK:       [[TMP9]]:
; CHECK-NEXT:    br label %[[HEADER1:.*]]
; CHECK:       [[TMP10]]:
; CHECK-NEXT:    br label %[[TMP17:.*]]
; CHECK:       [[HEADER1]]:
; CHECK-DAG:    [[I17_022_MU_VEC:%.*]] = phi <2 x i32> [ zeroinitializer, %[[TMP9]] ], [ [[INC_VEC:%.*]], %[[LATCH2:.*]] ]
; CHECK-DAG:    [[I_019_GUARD_MU_VEC:%.*]] = phi <2 x i32> [ undef, %[[TMP9]] ], [ [[I17_022_GUARD_VEC:%.*]], %[[LATCH2]] ]
; CHECK-DAG:    [[CMP24_GUARD_MU_VEC:%.*]] = phi <2 x i1> [ undef, %[[TMP9]] ], [ [[CMP24_GUARD_VEC:%.*]], %[[LATCH2]] ]
; CHECK-DAG:    [[ACTIVE_MU_VEC5:%.*]] = phi <2 x i1> [ [[TMP2]], %[[TMP9]] ], [ [[TMP15:%.*]], %[[LATCH2]] ]
; CHECK-NEXT:    [[IDXPROM_VEC:%.*]] = zext <2 x i32> [[I17_022_MU_VEC]] to <2 x i64>
; CHECK-NEXT:    [[I17_022_GUARD_VEC]] = select <2 x i1> [[ACTIVE_MU_VEC5]], <2 x i32> [[I17_022_MU_VEC]], <2 x i32> [[I_019_GUARD_MU_VEC]]
; CHECK-NEXT:    [[ARRAYIDX_VEC:%.*]] = getelementptr i32, ptr [[A:%.*]], <2 x i64> [[IDXPROM_VEC]]
; CHECK-NEXT:    [[I_VEC:%.*]] = call <2 x i32> @llvm.masked.gather.v2i32.v2p0(<2 x ptr> [[ARRAYIDX_VEC]], i32 4, <2 x i1> [[ACTIVE_MU_VEC5]], <2 x i32> undef)
; CHECK-NEXT:    [[CMP5_VEC:%.*]] = icmp eq <2 x i32> [[I_VEC]], [[NEEDLE12_023_MU_VEC]]
; CHECK-NEXT:    [[CMP24_GUARD_VEC]] = select <2 x i1> [[ACTIVE_MU_VEC5]], <2 x i1> [[CMP5_VEC]], <2 x i1> [[CMP24_GUARD_MU_VEC]]
; CHECK-NEXT:    [[INC_VEC]] = add <2 x i32> [[I17_022_MU_VEC]], <i32 1, i32 1>
; CHECK-NEXT:    [[TMP11:%.*]] = insertelement <2 x i32> undef, i32 [[N]], i64 0
; CHECK-NEXT:    [[TMP12:%.*]] = insertelement <2 x i32> [[TMP11]], i32 [[N]], i64 1
; CHECK-NEXT:    [[CMP2_VEC:%.*]] = icmp slt <2 x i32> [[INC_VEC]], [[TMP12]]
; CHECK-NEXT:    [[TMP13:%.*]] = xor <2 x i1> [[CMP5_VEC]], <i1 true, i1 true>
; CHECK-NEXT:    [[TMP14:%.*]] = and <2 x i1> [[TMP13]], [[CMP2_VEC]]
; CHECK-NEXT:    [[TMP15]] = and <2 x i1> [[TMP14]], [[ACTIVE_MU_VEC5]]
; CHECK-NEXT:    [[TMP16:%.*]] = call i1 @llvm.vector.reduce.or.v2i1(<2 x i1> [[TMP15]])
; CHECK-NEXT:    br label %[[LATCH2]]
; CHECK:       [[LATCH2]]:
; CHECK-NEXT:    br i1 [[TMP16]], label %[[HEADER1]], label %[[EXIT3:.*]]
; CHECK:       [[EXIT3]]:
; CHECK-NEXT:    br label %[[TMP17]]
; CHECK:       [[TMP17]]:
; CHECK-DAG:    [[CMP24_GUARD_VEC_MEM_1]] = phi <2 x i1> [ [[CMP24_GUARD_VEC]], %[[EXIT3]] ], [ [[CMP24_GUARD_VEC_MEM_0]], %[[TMP10]] ]
; CHECK-DAG:    [[I17_022_GUARD_VEC_MEM_1]] = phi <2 x i32> [ [[I17_022_GUARD_VEC]], %[[EXIT3]] ], [ [[I17_022_GUARD_VEC_MEM_0]], %[[TMP10]] ]
; CHECK-NEXT:    [[INC7_VEC]] = add <2 x i32> [[NEEDLE12_023_MU_VEC]], <i32 1, i32 1>
; CHECK-NEXT:    [[CMP_VEC:%.*]] = icmp ult <2 x i32> [[NEEDLE12_023_MU_VEC]], <i32 9999, i32 9999>
; CHECK-NEXT:    [[TMP18:%.*]] = xor <2 x i1> [[CMP218_VEC]], <i1 true, i1 true>
; CHECK-NEXT:    [[TMP19:%.*]] = xor <2 x i1> [[CMP24_GUARD_VEC_MEM_1]], <i1 true, i1 true>
; CHECK-NEXT:    [[TMP20:%.*]] = and <2 x i1> [[CMP218_VEC]], [[TMP19]]
; CHECK-NEXT:    [[TMP21:%.*]] = or <2 x i1> [[TMP18]], [[TMP20]]
; CHECK-NEXT:    [[TMP22:%.*]] = and <2 x i1> [[TMP21]], [[CMP_VEC]]
; CHECK-NEXT:    [[TMP23]] = and <2 x i1> [[TMP22]], [[ACTIVE_MU_VEC]]
; CHECK-NEXT:    [[TMP24]] = call i1 @llvm.vector.reduce.or.v2i1(<2 x i1> [[TMP23]])
; CHECK-NEXT:    br label %[[LATCH]]

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: nounwind ssp uwtable
define void @find(i32 noundef %n, ptr noalias noundef %a, ptr noalias noundef %b, ptr noalias noundef %indices) #0 {

entry:
  br label %for.cond1.preheader

for.cond1.preheader:                              ; preds = %entry, %for.end
  %needle.020 = phi i32 [ 0, %entry ], [ %inc7, %for.end ]
  %cmp218 = icmp sgt i32 %n, 0
  br i1 %cmp218, label %for.body4.lr.ph, label %for.end

for.body4.lr.ph:                                  ; preds = %for.cond1.preheader
  br label %for.body4

for.body4:                                        ; preds = %for.body4.lr.ph, %if.end
  %i.019 = phi i32 [ 0, %for.body4.lr.ph ], [ %inc, %if.end ]
  %idxprom = zext i32 %i.019 to i64
  %arrayidx = getelementptr inbounds i32, ptr %a, i64 %idxprom
  %i = load i32, ptr %arrayidx, align 4, !tbaa !5
  %cmp5 = icmp eq i32 %i, %needle.020
  br i1 %cmp5, label %done.loopexit, label %if.end

if.end:                                           ; preds = %for.body4
  %inc = add nuw nsw i32 %i.019, 1
  %cmp2 = icmp slt i32 %inc, %n
  br i1 %cmp2, label %for.body4, label %for.cond1.for.end_crit_edge, !llvm.loop !9

for.cond1.for.end_crit_edge:                      ; preds = %if.end
  br label %for.end

for.end:                                          ; preds = %for.cond1.for.end_crit_edge, %for.cond1.preheader
  %inc7 = add nuw nsw i32 %needle.020, 1
  %cmp = icmp ult i32 %needle.020, 9999
  br i1 %cmp, label %for.cond1.preheader, label %done.loopexit15, !llvm.loop !12

done.loopexit:                                    ; preds = %for.body4
  br label %done

done.loopexit15:                                  ; preds = %for.end
  br label %done

done:                                             ; preds = %done.loopexit15, %done.loopexit
  %idx.2 = phi i32 [ %i.019, %done.loopexit ], [ -1, %done.loopexit15 ]
  store i32 %idx.2, ptr %indices, align 4, !tbaa !5
  br label %for.cond18.preheader

for.cond18.preheader:                             ; preds = %done, %for.end31
  %needle12.023 = phi i32 [ 42, %done ], [ %inc33, %for.end31 ]
  %cmp1921 = icmp sgt i32 %n, 0
  br i1 %cmp1921, label %for.body21.lr.ph, label %for.end31

for.body21.lr.ph:                                 ; preds = %for.cond18.preheader
  br label %for.body21

for.body21:                                       ; preds = %for.body21.lr.ph, %if.end26
  %i17.022 = phi i32 [ 0, %for.body21.lr.ph ], [ %inc28, %if.end26 ]
  %idxprom22 = zext i32 %i17.022 to i64
  %arrayidx23 = getelementptr inbounds i32, ptr %a, i64 %idxprom22
  %i24 = load i32, ptr %arrayidx23, align 4, !tbaa !5
  %cmp24 = icmp eq i32 %i24, %needle12.023
  br i1 %cmp24, label %done2.loopexit, label %if.end26

if.end26:                                         ; preds = %for.body21
  %inc28 = add nuw nsw i32 %i17.022, 1
  %cmp19 = icmp slt i32 %inc28, %n
  br i1 %cmp19, label %for.body21, label %for.cond18.for.end31_crit_edge, !llvm.loop !13

for.cond18.for.end31_crit_edge:                   ; preds = %if.end26
  br label %for.end31

for.end31:                                        ; preds = %for.cond18.for.end31_crit_edge, %for.cond18.preheader
  %inc33 = add nuw nsw i32 %needle12.023, 1
  %cmp14 = icmp ult i32 %needle12.023, 9999
  br i1 %cmp14, label %for.cond18.preheader, label %done2.loopexit14, !llvm.loop !14

done2.loopexit:                                   ; preds = %for.body21
  br label %done2

done2.loopexit14:                                 ; preds = %for.end31
  br label %done2

done2:                                            ; preds = %done2.loopexit14, %done2.loopexit
  %idx.5 = phi i32 [ %i17.022, %done2.loopexit ], [ -1, %done2.loopexit14 ]
  %arrayidx37 = getelementptr inbounds i32, ptr %indices, i64 1
  store i32 %idx.5, ptr %arrayidx37, align 4, !tbaa !5
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
!9 = distinct !{!9, !10, !11}
!10 = !{!"llvm.loop.mustprogress"}
!11 = !{!"llvm.loop.unroll.disable"}
!12 = distinct !{!12, !10, !11}
!13 = distinct !{!13, !10, !11}
!14 = distinct !{!14, !10, !11}
