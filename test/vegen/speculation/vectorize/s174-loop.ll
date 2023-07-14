; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=global-slp,instcombine,sink,jump-threading,simplifycfg,adce -unroll-loops -do-versioning | FileCheck %s
; ModuleID = 's174-loop.ll'
source_filename = "s174-loop.c"
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@a = local_unnamed_addr global [320000 x float] zeroinitializer, align 16
@b = local_unnamed_addr global [320000 x float] zeroinitializer, align 16

; Function Attrs: nofree norecurse nosync nounwind ssp uwtable
define void @s174(i32 noundef %M) local_unnamed_addr #0 {
; CHECK-LABEL: @s174(
; CHECK-NEXT:    [[TMP1:%.*]] = sext i32 [[M:%.*]] to i64
; CHECK-NEXT:    br label [[HEADER:%.*]]
; CHECK:       header:
; CHECK-NEXT:    [[INDVAR:%.*]] = phi i64 [ 0, [[TMP0:%.*]] ], [ [[INDVAR_NEXT:%.*]], [[LATCH:%.*]] ]
; CHECK-NEXT:    [[NITER:%.*]] = phi i64 [ 0, [[TMP0]] ], [ [[NITER_NEXT_7:%.*]], [[LATCH]] ]
; CHECK-NEXT:    [[INDVARS_IV:%.*]] = phi i64 [ 0, [[TMP0]] ], [ [[INDVARS_IV_NEXT_7:%.*]], [[LATCH]] ]
; CHECK-NEXT:    [[ARRAYIDX:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[TMP2:%.*]] = shl nsw i64 [[TMP1]], 2
; CHECK-NEXT:    [[TMP3:%.*]] = add nsw i64 [[TMP2]], 28
; CHECK-NEXT:    [[TMP4:%.*]] = shl nuw nsw i64 [[INDVAR]], 5
; CHECK-NEXT:    [[TMP5:%.*]] = add i64 [[TMP4]], [[TMP3]]
; CHECK-NEXT:    [[UGLYGEP:%.*]] = getelementptr i8, ptr @a, i64 [[TMP5]]
; CHECK-NEXT:    [[TMP6:%.*]] = or i64 [[TMP4]], 4
; CHECK-NEXT:    [[UGLYGEP1:%.*]] = getelementptr i8, ptr @a, i64 [[TMP6]]
; CHECK-NEXT:    [[IDENT_CHECK:%.*]] = icmp ult ptr [[UGLYGEP]], [[UGLYGEP1]]
; CHECK-NEXT:    [[TMP7:%.*]] = shl nuw nsw i64 [[INDVAR]], 5
; CHECK-NEXT:    [[TMP8:%.*]] = add i64 [[TMP7]], 32
; CHECK-NEXT:    [[UGLYGEP3:%.*]] = getelementptr i8, ptr @a, i64 [[TMP8]]
; CHECK-NEXT:    [[TMP9:%.*]] = shl nsw i64 [[TMP1]], 2
; CHECK-NEXT:    [[TMP10:%.*]] = add i64 [[TMP7]], [[TMP9]]
; CHECK-NEXT:    [[UGLYGEP2:%.*]] = getelementptr i8, ptr @a, i64 [[TMP10]]
; CHECK-NEXT:    [[IDENT_CHECK4:%.*]] = icmp ult ptr [[UGLYGEP3]], [[UGLYGEP2]]
; CHECK-NEXT:    [[TMP11:%.*]] = or i1 [[IDENT_CHECK]], [[IDENT_CHECK4]]
; CHECK-NEXT:    br i1 [[TMP11]], label [[TMP12:%.*]], label [[TMP14:%.*]]
; CHECK:       latch:
; CHECK-NEXT:    [[INDVARS_IV_NEXT_7]] = add nuw nsw i64 [[INDVARS_IV]], 8
; CHECK-NEXT:    [[INDVAR_NEXT]] = add i64 [[INDVAR]], 1
; CHECK-NEXT:    br label [[HEADER]]
; CHECK:       12:
; CHECK-NEXT:    [[DOTVEC:%.*]] = load <8 x float>, ptr [[ARRAYIDX]], align 16
; CHECK-NEXT:    [[ARRAYIDX218:%.*]] = getelementptr inbounds [320000 x float], ptr @b, i64 0, i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[DOTVEC519:%.*]] = load <8 x float>, ptr [[ARRAYIDX218]], align 16
; CHECK-NEXT:    [[ADD_1_VEC:%.*]] = fadd <8 x float> [[DOTVEC]], [[DOTVEC519]]
; CHECK-NEXT:    [[TMP13:%.*]] = add nsw i64 [[INDVARS_IV]], [[TMP1]]
; CHECK-NEXT:    [[ARRAYIDX532:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[TMP13]]
; CHECK-NEXT:    store <8 x float> [[ADD_1_VEC]], ptr [[ARRAYIDX532]], align 4
; CHECK-NEXT:    br label [[TMP39:%.*]]
; CHECK:       14:
; CHECK-NEXT:    [[TMP15:%.*]] = load float, ptr [[ARRAYIDX]], align 16, !tbaa [[TBAA5:![0-9]+]]
; CHECK-NEXT:    [[ARRAYIDX2:%.*]] = getelementptr inbounds [320000 x float], ptr @b, i64 0, i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[DOTVEC5:%.*]] = load <8 x float>, ptr [[ARRAYIDX2]], align 16
; CHECK-NEXT:    [[TMP16:%.*]] = extractelement <8 x float> [[DOTVEC5]], i64 0
; CHECK-NEXT:    [[ADD_CLONE:%.*]] = fadd float [[TMP15]], [[TMP16]]
; CHECK-NEXT:    [[TMP17:%.*]] = add nsw i64 [[INDVARS_IV]], [[TMP1]]
; CHECK-NEXT:    [[ARRAYIDX5:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[TMP17]]
; CHECK-NEXT:    store float [[ADD_CLONE]], ptr [[ARRAYIDX5]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT:%.*]] = or i64 [[INDVARS_IV]], 1
; CHECK-NEXT:    [[TMP18:%.*]] = add nsw i64 [[INDVARS_IV_NEXT]], [[TMP1]]
; CHECK-NEXT:    [[ARRAYIDX5_1:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[TMP18]]
; CHECK-NEXT:    [[TMP19:%.*]] = extractelement <8 x float> [[DOTVEC5]], i64 1
; CHECK-NEXT:    [[ARRAYIDX_1:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT]]
; CHECK-NEXT:    [[TMP20:%.*]] = load float, ptr [[ARRAYIDX_1]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_1_CLONE:%.*]] = fadd float [[TMP20]], [[TMP19]]
; CHECK-NEXT:    store float [[ADD_1_CLONE]], ptr [[ARRAYIDX5_1]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_1:%.*]] = or i64 [[INDVARS_IV]], 2
; CHECK-NEXT:    [[TMP21:%.*]] = add nsw i64 [[INDVARS_IV_NEXT_1]], [[TMP1]]
; CHECK-NEXT:    [[ARRAYIDX5_2:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[TMP21]]
; CHECK-NEXT:    [[TMP22:%.*]] = extractelement <8 x float> [[DOTVEC5]], i64 2
; CHECK-NEXT:    [[ARRAYIDX_2:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT_1]]
; CHECK-NEXT:    [[TMP23:%.*]] = load float, ptr [[ARRAYIDX_2]], align 8, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_2_CLONE:%.*]] = fadd float [[TMP23]], [[TMP22]]
; CHECK-NEXT:    store float [[ADD_2_CLONE]], ptr [[ARRAYIDX5_2]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_2:%.*]] = or i64 [[INDVARS_IV]], 3
; CHECK-NEXT:    [[TMP24:%.*]] = add nsw i64 [[INDVARS_IV_NEXT_2]], [[TMP1]]
; CHECK-NEXT:    [[ARRAYIDX5_3:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[TMP24]]
; CHECK-NEXT:    [[TMP25:%.*]] = extractelement <8 x float> [[DOTVEC5]], i64 3
; CHECK-NEXT:    [[ARRAYIDX_3:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT_2]]
; CHECK-NEXT:    [[TMP26:%.*]] = load float, ptr [[ARRAYIDX_3]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_3_CLONE:%.*]] = fadd float [[TMP26]], [[TMP25]]
; CHECK-NEXT:    store float [[ADD_3_CLONE]], ptr [[ARRAYIDX5_3]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_3:%.*]] = or i64 [[INDVARS_IV]], 4
; CHECK-NEXT:    [[TMP27:%.*]] = add nsw i64 [[INDVARS_IV_NEXT_3]], [[TMP1]]
; CHECK-NEXT:    [[ARRAYIDX5_4:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[TMP27]]
; CHECK-NEXT:    [[TMP28:%.*]] = extractelement <8 x float> [[DOTVEC5]], i64 4
; CHECK-NEXT:    [[ARRAYIDX_4:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT_3]]
; CHECK-NEXT:    [[TMP29:%.*]] = load float, ptr [[ARRAYIDX_4]], align 16, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_4_CLONE:%.*]] = fadd float [[TMP29]], [[TMP28]]
; CHECK-NEXT:    store float [[ADD_4_CLONE]], ptr [[ARRAYIDX5_4]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_4:%.*]] = or i64 [[INDVARS_IV]], 5
; CHECK-NEXT:    [[TMP30:%.*]] = add nsw i64 [[INDVARS_IV_NEXT_4]], [[TMP1]]
; CHECK-NEXT:    [[ARRAYIDX5_5:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[TMP30]]
; CHECK-NEXT:    [[TMP31:%.*]] = extractelement <8 x float> [[DOTVEC5]], i64 5
; CHECK-NEXT:    [[ARRAYIDX_5:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT_4]]
; CHECK-NEXT:    [[TMP32:%.*]] = load float, ptr [[ARRAYIDX_5]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_5_CLONE:%.*]] = fadd float [[TMP32]], [[TMP31]]
; CHECK-NEXT:    store float [[ADD_5_CLONE]], ptr [[ARRAYIDX5_5]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_5:%.*]] = or i64 [[INDVARS_IV]], 6
; CHECK-NEXT:    [[TMP33:%.*]] = add nsw i64 [[INDVARS_IV_NEXT_5]], [[TMP1]]
; CHECK-NEXT:    [[ARRAYIDX5_6:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[TMP33]]
; CHECK-NEXT:    [[TMP34:%.*]] = extractelement <8 x float> [[DOTVEC5]], i64 6
; CHECK-NEXT:    [[ARRAYIDX_6:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT_5]]
; CHECK-NEXT:    [[TMP35:%.*]] = load float, ptr [[ARRAYIDX_6]], align 8, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_6_CLONE:%.*]] = fadd float [[TMP35]], [[TMP34]]
; CHECK-NEXT:    store float [[ADD_6_CLONE]], ptr [[ARRAYIDX5_6]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_6:%.*]] = or i64 [[INDVARS_IV]], 7
; CHECK-NEXT:    [[TMP36:%.*]] = add nsw i64 [[INDVARS_IV_NEXT_6]], [[TMP1]]
; CHECK-NEXT:    [[ARRAYIDX5_7:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[TMP36]]
; CHECK-NEXT:    [[TMP37:%.*]] = extractelement <8 x float> [[DOTVEC5]], i64 7
; CHECK-NEXT:    [[ARRAYIDX_7:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT_6]]
; CHECK-NEXT:    [[TMP38:%.*]] = load float, ptr [[ARRAYIDX_7]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_7_CLONE:%.*]] = fadd float [[TMP38]], [[TMP37]]
; CHECK-NEXT:    store float [[ADD_7_CLONE]], ptr [[ARRAYIDX5_7]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    br label [[TMP39]]
; CHECK:       39:
; CHECK-NEXT:    [[NITER_NEXT_7]] = add nuw nsw i64 [[NITER]], 8
; CHECK-NEXT:    [[NITER_NCMP_7:%.*]] = icmp eq i64 [[NITER_NEXT_7]], 320000
; CHECK-NEXT:    br i1 [[NITER_NCMP_7]], label [[EXIT:%.*]], label [[LATCH]]
; CHECK:       exit:
; CHECK-NEXT:    ret void
;
entry:
  %0 = sext i32 %M to i64
  br label %for.body

for.cond.cleanup:                                 ; preds = %for.body
  ret void

for.body:                                         ; preds = %for.body, %entry
  %indvars.iv = phi i64 [ 0, %entry ], [ %indvars.iv.next, %for.body ]
  %arrayidx = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 %indvars.iv
  %1 = load float, ptr %arrayidx, align 4, !tbaa !5
  %arrayidx2 = getelementptr inbounds [320000 x float], ptr @b, i64 0, i64 %indvars.iv
  %2 = load float, ptr %arrayidx2, align 4, !tbaa !5
  %add = fadd float %1, %2
  %3 = add nsw i64 %indvars.iv, %0
  %arrayidx5 = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 %3
  store float %add, ptr %arrayidx5, align 4, !tbaa !5
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %exitcond.not = icmp eq i64 %indvars.iv.next, 320000
  br i1 %exitcond.not, label %for.cond.cleanup, label %for.body, !llvm.loop !9
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
