; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=global-slp,adce,simplifycfg -unroll-loops | FileCheck %s
source_filename = "foo.c"
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: argmemonly nofree norecurse nosync nounwind ssp uwtable
define void @foo(i32 noundef %n, ptr noalias nocapture noundef %a, ptr noalias nocapture noundef readonly %b) local_unnamed_addr #0 {
; CHECK-LABEL: @foo(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[CMP10:%.*]] = icmp sgt i32 [[N:%.*]], 0
; CHECK-NEXT:    br i1 [[CMP10]], label [[TMP0:%.*]], label [[EXIT4:%.*]]
; CHECK:       0:
; CHECK-NEXT:    [[WIDE_TRIP_COUNT:%.*]] = zext i32 [[N]] to i64
; CHECK-NEXT:    [[TMP1:%.*]] = add nsw i64 [[WIDE_TRIP_COUNT]], -1
; CHECK-NEXT:    [[XTRAITER:%.*]] = and i64 [[WIDE_TRIP_COUNT]], 7
; CHECK-NEXT:    [[TMP2:%.*]] = icmp ult i64 [[TMP1]], 7
; CHECK-NEXT:    br i1 [[TMP2]], label [[EXIT:%.*]], label [[TMP3:%.*]]
; CHECK:       3:
; CHECK-NEXT:    [[UNROLL_ITER:%.*]] = sub i64 [[WIDE_TRIP_COUNT]], [[XTRAITER]]
; CHECK-NEXT:    br label [[HEADER:%.*]]
; CHECK:       header:
; CHECK-NEXT:    [[NITER:%.*]] = phi i64 [ 0, [[TMP3]] ], [ [[NITER_NEXT_7:%.*]], [[HEADER]] ]
; CHECK-NEXT:    [[INDVARS_IV:%.*]] = phi i64 [ 0, [[TMP3]] ], [ [[INDVARS_IV_NEXT_7:%.*]], [[HEADER]] ]
; CHECK-NEXT:    [[ARRAYIDX:%.*]] = getelementptr inbounds i32, ptr [[A:%.*]], i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT:%.*]] = add nuw nsw i64 [[INDVARS_IV]], 1
; CHECK-NEXT:    [[INDVARS_IV_NEXT_1:%.*]] = add nuw nsw i64 [[INDVARS_IV_NEXT]], 1
; CHECK-NEXT:    [[INDVARS_IV_NEXT_2:%.*]] = add nuw nsw i64 [[INDVARS_IV_NEXT_1]], 1
; CHECK-NEXT:    [[INDVARS_IV_NEXT_3:%.*]] = add nuw nsw i64 [[INDVARS_IV_NEXT_2]], 1
; CHECK-NEXT:    [[INDVARS_IV_NEXT_4:%.*]] = add nuw nsw i64 [[INDVARS_IV_NEXT_3]], 1
; CHECK-NEXT:    [[INDVARS_IV_NEXT_5:%.*]] = add nuw nsw i64 [[INDVARS_IV_NEXT_4]], 1
; CHECK-NEXT:    [[INDVARS_IV_NEXT_6:%.*]] = add nuw nsw i64 [[INDVARS_IV_NEXT_5]], 1
; CHECK-NEXT:    [[DOTVEC:%.*]] = load <8 x i32>, ptr [[ARRAYIDX]], align 4
; CHECK-NEXT:    [[ARRAYIDX2:%.*]] = getelementptr inbounds i32, ptr [[B:%.*]], i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[DOTVEC1:%.*]] = load <8 x i32>, ptr [[ARRAYIDX2]], align 4
; CHECK-NEXT:    [[ADD_1_VEC:%.*]] = add <8 x i32> [[DOTVEC1]], [[DOTVEC]]
; CHECK-NEXT:    store <8 x i32> [[ADD_1_VEC]], ptr [[ARRAYIDX]], align 4
; CHECK-NEXT:    [[NITER_NEXT:%.*]] = add nuw nsw i64 [[NITER]], 1
; CHECK-NEXT:    [[NITER_NEXT_1:%.*]] = add nuw nsw i64 [[NITER_NEXT]], 1
; CHECK-NEXT:    [[NITER_NEXT_2:%.*]] = add nuw nsw i64 [[NITER_NEXT_1]], 1
; CHECK-NEXT:    [[NITER_NEXT_3:%.*]] = add nuw nsw i64 [[NITER_NEXT_2]], 1
; CHECK-NEXT:    [[NITER_NEXT_4:%.*]] = add nuw nsw i64 [[NITER_NEXT_3]], 1
; CHECK-NEXT:    [[NITER_NEXT_5:%.*]] = add nuw nsw i64 [[NITER_NEXT_4]], 1
; CHECK-NEXT:    [[NITER_NEXT_6:%.*]] = add nuw nsw i64 [[NITER_NEXT_5]], 1
; CHECK-NEXT:    [[INDVARS_IV_NEXT_7]] = add nuw nsw i64 [[INDVARS_IV_NEXT_6]], 1
; CHECK-NEXT:    [[NITER_NEXT_7]] = add i64 [[NITER_NEXT_6]], 1
; CHECK-NEXT:    [[NITER_NCMP_7:%.*]] = icmp eq i64 [[NITER_NEXT_7]], [[UNROLL_ITER]]
; CHECK-NEXT:    [[DOT:%.*]] = select i1 [[NITER_NCMP_7]], i1 false, i1 true
; CHECK-NEXT:    br i1 [[DOT]], label [[HEADER]], label [[EXIT]]
; CHECK:       exit:
; CHECK-NEXT:    [[INDVARS_IV_UNR_DEMOTED_0:%.*]] = phi i64 [ 0, [[TMP0]] ], [ [[INDVARS_IV_NEXT_7]], [[HEADER]] ]
; CHECK-NEXT:    [[LCMP_MOD:%.*]] = icmp ne i64 [[XTRAITER]], 0
; CHECK-NEXT:    br i1 [[LCMP_MOD]], label [[HEADER2:%.*]], label [[EXIT4]]
; CHECK:       header2:
; CHECK-NEXT:    [[EPIL_ITER:%.*]] = phi i64 [ [[EPIL_ITER_NEXT:%.*]], [[HEADER2]] ], [ 0, [[EXIT]] ]
; CHECK-NEXT:    [[INDVARS_IV_EPIL:%.*]] = phi i64 [ [[INDVARS_IV_NEXT_EPIL:%.*]], [[HEADER2]] ], [ [[INDVARS_IV_UNR_DEMOTED_0]], [[EXIT]] ]
; CHECK-NEXT:    [[ARRAYIDX_EPIL:%.*]] = getelementptr inbounds i32, ptr [[A]], i64 [[INDVARS_IV_EPIL]]
; CHECK-NEXT:    [[TMP4:%.*]] = load i32, ptr [[ARRAYIDX_EPIL]], align 4, !tbaa [[TBAA5:![0-9]+]]
; CHECK-NEXT:    [[ARRAYIDX2_EPIL:%.*]] = getelementptr inbounds i32, ptr [[B]], i64 [[INDVARS_IV_EPIL]]
; CHECK-NEXT:    [[TMP5:%.*]] = load i32, ptr [[ARRAYIDX2_EPIL]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[ADD_EPIL:%.*]] = add nsw i32 [[TMP5]], [[TMP4]]
; CHECK-NEXT:    store i32 [[ADD_EPIL]], ptr [[ARRAYIDX_EPIL]], align 4, !tbaa [[TBAA5]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_EPIL]] = add nuw nsw i64 [[INDVARS_IV_EPIL]], 1
; CHECK-NEXT:    [[EPIL_ITER_NEXT]] = add i64 [[EPIL_ITER]], 1
; CHECK-NEXT:    [[EPIL_ITER_CMP:%.*]] = icmp ne i64 [[EPIL_ITER_NEXT]], [[XTRAITER]]
; CHECK-NEXT:    br i1 [[EPIL_ITER_CMP]], label [[HEADER2]], label [[EXIT4]]
; CHECK:       exit4:
; CHECK-NEXT:    ret void
;
entry:
  %cmp10 = icmp sgt i32 %n, 0
  br i1 %cmp10, label %for.body.preheader, label %for.cond.cleanup

for.body.preheader:                               ; preds = %entry
  %wide.trip.count = zext i32 %n to i64
  br label %for.body

for.cond.cleanup.loopexit:                        ; preds = %for.body
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit, %entry
  ret void

for.body:                                         ; preds = %for.body, %for.body.preheader
  %indvars.iv = phi i64 [ 0, %for.body.preheader ], [ %indvars.iv.next, %for.body ]
  %arrayidx = getelementptr inbounds i32, ptr %a, i64 %indvars.iv
  %0 = load i32, ptr %arrayidx, align 4, !tbaa !5
  %arrayidx2 = getelementptr inbounds i32, ptr %b, i64 %indvars.iv
  %1 = load i32, ptr %arrayidx2, align 4, !tbaa !5
  %add = add nsw i32 %1, %0
  store i32 %add, ptr %arrayidx, align 4, !tbaa !5
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %exitcond.not = icmp eq i64 %indvars.iv.next, %wide.trip.count
  br i1 %exitcond.not, label %for.cond.cleanup.loopexit, label %for.body, !llvm.loop !9
}

attributes #0 = { nofree norecurse nosync nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="icelake-client" "target-features"="+64bit,+adx,+aes,+avx,+avx2,+avx512bitalg,+avx512bw,+avx512cd,+avx512dq,+avx512f,+avx512ifma,+avx512vbmi,+avx512vbmi2,+avx512vl,+avx512vnni,+avx512vpopcntdq,+bmi,+bmi2,+clflushopt,+cmov,+crc32,+cx16,+cx8,+f16c,+fma,+fsgsbase,+fxsr,+gfni,+invpcid,+lzcnt,+mmx,+movbe,+pclmul,+popcnt,+prfchw,+rdpid,+rdrnd,+rdseed,+sahf,+sgx,+sha,+sse,+sse2,+sse3,+sse4.1,+sse4.2,+ssse3,+vaes,+vpclmulqdq,+x87,+xsave,+xsavec,+xsaveopt,+xsaves,-amx-bf16,-amx-int8,-amx-tile,-avx512bf16,-avx512er,-avx512fp16,-avx512pf,-avx512vp2intersect,-avxvnni,-cldemote,-clwb,-clzero,-enqcmd,-fma4,-hreset,-kl,-lwp,-movdir64b,-movdiri,-mwaitx,-pconfig,-pku,-prefetchwt1,-ptwrite,-rdpru,-rtm,-serialize,-shstk,-sse4a,-tbm,-tsxldtrk,-uintr,-waitpkg,-wbnoinvd,-widekl,-xop" }

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
