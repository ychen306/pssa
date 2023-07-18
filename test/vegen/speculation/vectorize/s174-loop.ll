; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=global-slp,instcombine,simplifycfg,adce -unroll-loops -do-versioning | FileCheck %s
; ModuleID = 's174-loop.ll'
source_filename = "s174-loop.c"
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@a = local_unnamed_addr global [320000 x float] zeroinitializer, align 16
@b = local_unnamed_addr global [320000 x float] zeroinitializer, align 16

; Function Attrs: nofree norecurse nosync nounwind ssp uwtable
define void @s174(i32 noundef %M) local_unnamed_addr #0 {
; CHECK-LABEL: @s174(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[I:%.*]] = sext i32 [[M:%.*]] to i64
; CHECK-NEXT:    [[TMP0:%.*]] = shl nsw i64 [[I]], 2
; CHECK-NEXT:    [[TMP1:%.*]] = add nsw i64 [[TMP0]], 28
; CHECK-NEXT:    [[UGLYGEP:%.*]] = getelementptr i8, ptr @a, i64 [[TMP1]]
; CHECK-NEXT:    [[IDENT_CHECK:%.*]] = icmp ult ptr [[UGLYGEP]], getelementptr inbounds ([320000 x float], ptr @a, i64 0, i64 1)
; CHECK-NEXT:    [[TMP2:%.*]] = shl nsw i64 [[I]], 2
; CHECK-NEXT:    [[UGLYGEP1:%.*]] = getelementptr i8, ptr @a, i64 [[TMP2]]
; CHECK-NEXT:    [[IDENT_CHECK2:%.*]] = icmp ugt ptr [[UGLYGEP1]], getelementptr inbounds ([320000 x float], ptr @a, i64 0, i64 8)
; CHECK-NEXT:    [[TMP3:%.*]] = or i1 [[IDENT_CHECK]], [[IDENT_CHECK2]]
; CHECK-NEXT:    br i1 [[TMP3]], label [[HEADER3:%.*]], label [[HEADER:%.*]]
; CHECK:       header:
; CHECK-NEXT:    [[NITER_CLONE:%.*]] = phi i64 [ [[NITER_NEXT_7_CLONE:%.*]], [[HEADER]] ], [ 0, [[ENTRY:%.*]] ]
; CHECK-NEXT:    [[INDVARS_IV_CLONE:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_7_CLONE:%.*]], [[HEADER]] ], [ 0, [[ENTRY]] ]
; CHECK-NEXT:    [[ARRAYIDX_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_CLONE]]
; CHECK-NEXT:    [[I1_CLONE:%.*]] = load float, ptr [[ARRAYIDX_CLONE]], align 16, !tbaa [[TBAA5:![0-9]+]]
; CHECK-NEXT:    [[ARRAYIDX2_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @b, i64 0, i64 [[INDVARS_IV_CLONE]]
; CHECK-NEXT:    [[I2_CLONE:%.*]] = load float, ptr [[ARRAYIDX2_CLONE]], align 16, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_CLONE:%.*]] = fadd float [[I1_CLONE]], [[I2_CLONE]]
; CHECK-NEXT:    [[I3_CLONE:%.*]] = add nsw i64 [[INDVARS_IV_CLONE]], [[I]]
; CHECK-NEXT:    [[ARRAYIDX5_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[I3_CLONE]]
; CHECK-NEXT:    store float [[ADD_CLONE]], ptr [[ARRAYIDX5_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_CLONE:%.*]] = or i64 [[INDVARS_IV_CLONE]], 1
; CHECK-NEXT:    [[ARRAYIDX_1_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT_CLONE]]
; CHECK-NEXT:    [[I1_1_CLONE:%.*]] = load float, ptr [[ARRAYIDX_1_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ARRAYIDX2_1_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @b, i64 0, i64 [[INDVARS_IV_NEXT_CLONE]]
; CHECK-NEXT:    [[I2_1_CLONE:%.*]] = load float, ptr [[ARRAYIDX2_1_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_1_CLONE:%.*]] = fadd float [[I1_1_CLONE]], [[I2_1_CLONE]]
; CHECK-NEXT:    [[I3_1_CLONE:%.*]] = add nsw i64 [[INDVARS_IV_NEXT_CLONE]], [[I]]
; CHECK-NEXT:    [[ARRAYIDX5_1_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[I3_1_CLONE]]
; CHECK-NEXT:    store float [[ADD_1_CLONE]], ptr [[ARRAYIDX5_1_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_1_CLONE:%.*]] = or i64 [[INDVARS_IV_CLONE]], 2
; CHECK-NEXT:    [[ARRAYIDX_2_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT_1_CLONE]]
; CHECK-NEXT:    [[I1_2_CLONE:%.*]] = load float, ptr [[ARRAYIDX_2_CLONE]], align 8, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ARRAYIDX2_2_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @b, i64 0, i64 [[INDVARS_IV_NEXT_1_CLONE]]
; CHECK-NEXT:    [[I2_2_CLONE:%.*]] = load float, ptr [[ARRAYIDX2_2_CLONE]], align 8, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_2_CLONE:%.*]] = fadd float [[I1_2_CLONE]], [[I2_2_CLONE]]
; CHECK-NEXT:    [[I3_2_CLONE:%.*]] = add nsw i64 [[INDVARS_IV_NEXT_1_CLONE]], [[I]]
; CHECK-NEXT:    [[ARRAYIDX5_2_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[I3_2_CLONE]]
; CHECK-NEXT:    store float [[ADD_2_CLONE]], ptr [[ARRAYIDX5_2_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_2_CLONE:%.*]] = or i64 [[INDVARS_IV_CLONE]], 3
; CHECK-NEXT:    [[ARRAYIDX_3_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT_2_CLONE]]
; CHECK-NEXT:    [[I1_3_CLONE:%.*]] = load float, ptr [[ARRAYIDX_3_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ARRAYIDX2_3_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @b, i64 0, i64 [[INDVARS_IV_NEXT_2_CLONE]]
; CHECK-NEXT:    [[I2_3_CLONE:%.*]] = load float, ptr [[ARRAYIDX2_3_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_3_CLONE:%.*]] = fadd float [[I1_3_CLONE]], [[I2_3_CLONE]]
; CHECK-NEXT:    [[I3_3_CLONE:%.*]] = add nsw i64 [[INDVARS_IV_NEXT_2_CLONE]], [[I]]
; CHECK-NEXT:    [[ARRAYIDX5_3_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[I3_3_CLONE]]
; CHECK-NEXT:    store float [[ADD_3_CLONE]], ptr [[ARRAYIDX5_3_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_3_CLONE:%.*]] = or i64 [[INDVARS_IV_CLONE]], 4
; CHECK-NEXT:    [[ARRAYIDX_4_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT_3_CLONE]]
; CHECK-NEXT:    [[I1_4_CLONE:%.*]] = load float, ptr [[ARRAYIDX_4_CLONE]], align 16, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ARRAYIDX2_4_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @b, i64 0, i64 [[INDVARS_IV_NEXT_3_CLONE]]
; CHECK-NEXT:    [[I2_4_CLONE:%.*]] = load float, ptr [[ARRAYIDX2_4_CLONE]], align 16, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_4_CLONE:%.*]] = fadd float [[I1_4_CLONE]], [[I2_4_CLONE]]
; CHECK-NEXT:    [[I3_4_CLONE:%.*]] = add nsw i64 [[INDVARS_IV_NEXT_3_CLONE]], [[I]]
; CHECK-NEXT:    [[ARRAYIDX5_4_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[I3_4_CLONE]]
; CHECK-NEXT:    store float [[ADD_4_CLONE]], ptr [[ARRAYIDX5_4_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_4_CLONE:%.*]] = or i64 [[INDVARS_IV_CLONE]], 5
; CHECK-NEXT:    [[ARRAYIDX_5_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT_4_CLONE]]
; CHECK-NEXT:    [[I1_5_CLONE:%.*]] = load float, ptr [[ARRAYIDX_5_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ARRAYIDX2_5_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @b, i64 0, i64 [[INDVARS_IV_NEXT_4_CLONE]]
; CHECK-NEXT:    [[I2_5_CLONE:%.*]] = load float, ptr [[ARRAYIDX2_5_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_5_CLONE:%.*]] = fadd float [[I1_5_CLONE]], [[I2_5_CLONE]]
; CHECK-NEXT:    [[I3_5_CLONE:%.*]] = add nsw i64 [[INDVARS_IV_NEXT_4_CLONE]], [[I]]
; CHECK-NEXT:    [[ARRAYIDX5_5_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[I3_5_CLONE]]
; CHECK-NEXT:    store float [[ADD_5_CLONE]], ptr [[ARRAYIDX5_5_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_5_CLONE:%.*]] = or i64 [[INDVARS_IV_CLONE]], 6
; CHECK-NEXT:    [[ARRAYIDX_6_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT_5_CLONE]]
; CHECK-NEXT:    [[I1_6_CLONE:%.*]] = load float, ptr [[ARRAYIDX_6_CLONE]], align 8, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ARRAYIDX2_6_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @b, i64 0, i64 [[INDVARS_IV_NEXT_5_CLONE]]
; CHECK-NEXT:    [[I2_6_CLONE:%.*]] = load float, ptr [[ARRAYIDX2_6_CLONE]], align 8, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_6_CLONE:%.*]] = fadd float [[I1_6_CLONE]], [[I2_6_CLONE]]
; CHECK-NEXT:    [[I3_6_CLONE:%.*]] = add nsw i64 [[INDVARS_IV_NEXT_5_CLONE]], [[I]]
; CHECK-NEXT:    [[ARRAYIDX5_6_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[I3_6_CLONE]]
; CHECK-NEXT:    store float [[ADD_6_CLONE]], ptr [[ARRAYIDX5_6_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_6_CLONE:%.*]] = or i64 [[INDVARS_IV_CLONE]], 7
; CHECK-NEXT:    [[ARRAYIDX_7_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV_NEXT_6_CLONE]]
; CHECK-NEXT:    [[I1_7_CLONE:%.*]] = load float, ptr [[ARRAYIDX_7_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ARRAYIDX2_7_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @b, i64 0, i64 [[INDVARS_IV_NEXT_6_CLONE]]
; CHECK-NEXT:    [[I2_7_CLONE:%.*]] = load float, ptr [[ARRAYIDX2_7_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_7_CLONE:%.*]] = fadd float [[I1_7_CLONE]], [[I2_7_CLONE]]
; CHECK-NEXT:    [[I3_7_CLONE:%.*]] = add nsw i64 [[INDVARS_IV_NEXT_6_CLONE]], [[I]]
; CHECK-NEXT:    [[ARRAYIDX5_7_CLONE:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[I3_7_CLONE]]
; CHECK-NEXT:    store float [[ADD_7_CLONE]], ptr [[ARRAYIDX5_7_CLONE]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_7_CLONE]] = add nuw nsw i64 [[INDVARS_IV_CLONE]], 8
; CHECK-NEXT:    [[NITER_NEXT_7_CLONE]] = add nuw nsw i64 [[NITER_CLONE]], 8
; CHECK-NEXT:    [[NITER_NCMP_7_CLONE:%.*]] = icmp eq i64 [[NITER_NEXT_7_CLONE]], 320000
; CHECK-NEXT:    br i1 [[NITER_NCMP_7_CLONE]], label [[EXIT:%.*]], label [[HEADER]]
; CHECK:       header3:
; CHECK-NEXT:    [[NITER:%.*]] = phi i64 [ [[NITER_NEXT_7:%.*]], [[HEADER3]] ], [ 0, [[ENTRY]] ]
; CHECK-NEXT:    [[INDVARS_IV:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_7:%.*]], [[HEADER3]] ], [ 0, [[ENTRY]] ]
; CHECK-NEXT:    [[ARRAYIDX:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[I1_1_VEC:%.*]] = load <8 x float>, ptr [[ARRAYIDX]], align 16
; CHECK-NEXT:    [[ARRAYIDX2:%.*]] = getelementptr inbounds [320000 x float], ptr @b, i64 0, i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[I2_1_VEC:%.*]] = load <8 x float>, ptr [[ARRAYIDX2]], align 16
; CHECK-NEXT:    [[ADD_1_VEC:%.*]] = fadd <8 x float> [[I1_1_VEC]], [[I2_1_VEC]]
; CHECK-NEXT:    [[I3:%.*]] = add nsw i64 [[INDVARS_IV]], [[I]]
; CHECK-NEXT:    [[ARRAYIDX5:%.*]] = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 [[I3]]
; CHECK-NEXT:    store <8 x float> [[ADD_1_VEC]], ptr [[ARRAYIDX5]], align 4
; CHECK-NEXT:    [[INDVARS_IV_NEXT_7]] = add nuw nsw i64 [[INDVARS_IV]], 8
; CHECK-NEXT:    [[NITER_NEXT_7]] = add nuw nsw i64 [[NITER]], 8
; CHECK-NEXT:    [[NITER_NCMP_7:%.*]] = icmp eq i64 [[NITER_NEXT_7]], 320000
; CHECK-NEXT:    br i1 [[NITER_NCMP_7]], label [[EXIT]], label [[HEADER3]]
; CHECK:       exit:
; CHECK-NEXT:    ret void
;
entry:
  %i = sext i32 %M to i64
  br label %for.body

for.cond.cleanup:                                 ; preds = %for.body
  ret void

for.body:                                         ; preds = %for.body, %entry
  %indvars.iv = phi i64 [ 0, %entry ], [ %indvars.iv.next, %for.body ]
  %arrayidx = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 %indvars.iv
  %i1 = load float, ptr %arrayidx, align 4, !tbaa !5
  %arrayidx2 = getelementptr inbounds [320000 x float], ptr @b, i64 0, i64 %indvars.iv
  %i2 = load float, ptr %arrayidx2, align 4, !tbaa !5
  %add = fadd float %i1, %i2
  %i3 = add nsw i64 %indvars.iv, %i
  %arrayidx5 = getelementptr inbounds [320000 x float], ptr @a, i64 0, i64 %i3
  store float %add, ptr %arrayidx5, align 4, !tbaa !5
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %exitcond.not = icmp eq i64 %indvars.iv.next, 320000
  br i1 %exitcond.not, label %for.cond.cleanup, label %for.body, !llvm.loop !9
}

attributes #0 = { nofree norecurse nosync nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="icelake-client" "target-features"="+64bit,+adx,+aes,+avx,+avx2,+avx512bitalg,+avx512bw,+avx512cd,+avx512dq,+avx512f,+avx512ifma,+avx512vbmi,+avx512vbmi2,+avx512vl,+avx512vnni,+avx512vpopcntdq,+bmi,+bmi2,+clflushopt,+cmov,+crc32,+cx16,+cx8,+f16c,+fma,+fsgsbase,+fxsr,+gfni,+invpcid,+lzcnt,+mmx,+movbe,+pclmul,+popcnt,+prfchw,+rdpid,+rdrnd,+rdseed,+sahf,+sgx,+sha,+sse,+sse2,+sse3,+sse4.1,+sse4.2,+ssse3,+vaes,+vpclmulqdq,+x87,+xsave,+xsavec,+xsaveopt,+xsaves,-amx-bf16,-amx-int8,-amx-tile,-avx512bf16,-avx512er,-avx512fp16,-avx512pf,-avx512vp2intersect,-avxvnni,-cldemote,-clwb,-clzero,-enqcmd,-fma4,-hreset,-kl,-lwp,-movdir64b,-movdiri,-mwaitx,-pconfig,-pku,-prefetchwt1,-ptwrite,-rdpru,-rtm,-serialize,-shstk,-sse4a,-tbm,-tsxldtrk,-uintr,-waitpkg,-wbnoinvd,-widekl,-xop" }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"uwtable", i32 2}
!3 = !{i32 7, !"frame-pointer", i32 2}
!4 = !{!"clang version 15.0.6 (https://github.com/llvm/llvm-project 088f33605d8a61ff519c580a71b1dd57d16a03f8)"}
!5 = !{!6, !6, i64 0}
!6 = !{!"float", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C/C++ TBAA"}
!9 = distinct !{!9, !10, !11}
!10 = !{!"llvm.loop.mustprogress"}
!11 = !{!"llvm.loop.unroll.disable"}
