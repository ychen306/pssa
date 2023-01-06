; RUN: %opt -passes=global-slp %s -S | FileCheck %s

; CHECK:  [[CALL:%.*]] = tail call <4 x i32> @llvm.x86.sse2.pmadd.wd(<8 x i16> [[A:%.*]], <8 x i16> [[B:%.*]])

; Function Attrs: argmemonly mustprogress nofree norecurse nosync nounwind uwtable
define dso_local void @_Z6kernelPsS_Pi(ptr noalias nocapture noundef readonly %a, ptr noalias nocapture noundef readonly %b, ptr noalias nocapture noundef writeonly %out) local_unnamed_addr #0 {
entry:
  %arrayidx = getelementptr inbounds i16, ptr %a, i64 1
  %0 = load i16, ptr %arrayidx, align 2, !tbaa !5
  %conv = sext i16 %0 to i32
  %arrayidx4 = getelementptr inbounds i16, ptr %b, i64 1
  %1 = load i16, ptr %arrayidx4, align 2, !tbaa !5
  %conv5 = sext i16 %1 to i32
  %mul6 = mul nsw i32 %conv5, %conv
  %2 = load i16, ptr %a, align 2, !tbaa !5
  %conv10 = sext i16 %2 to i32
  %3 = load i16, ptr %b, align 2, !tbaa !5
  %conv14 = sext i16 %3 to i32
  %mul15 = mul nsw i32 %conv14, %conv10
  %add16 = add nsw i32 %mul15, %mul6
  store i32 %add16, ptr %out, align 4, !tbaa !9
  %arrayidx.1 = getelementptr inbounds i16, ptr %a, i64 3
  %4 = load i16, ptr %arrayidx.1, align 2, !tbaa !5
  %conv.1 = sext i16 %4 to i32
  %arrayidx4.1 = getelementptr inbounds i16, ptr %b, i64 3
  %5 = load i16, ptr %arrayidx4.1, align 2, !tbaa !5
  %conv5.1 = sext i16 %5 to i32
  %mul6.1 = mul nsw i32 %conv5.1, %conv.1
  %arrayidx9.1 = getelementptr inbounds i16, ptr %a, i64 2
  %6 = load i16, ptr %arrayidx9.1, align 2, !tbaa !5
  %conv10.1 = sext i16 %6 to i32
  %arrayidx13.1 = getelementptr inbounds i16, ptr %b, i64 2
  %7 = load i16, ptr %arrayidx13.1, align 2, !tbaa !5
  %conv14.1 = sext i16 %7 to i32
  %mul15.1 = mul nsw i32 %conv14.1, %conv10.1
  %add16.1 = add nsw i32 %mul15.1, %mul6.1
  %arrayidx18.1 = getelementptr inbounds i32, ptr %out, i64 1
  store i32 %add16.1, ptr %arrayidx18.1, align 4, !tbaa !9
  %arrayidx.2 = getelementptr inbounds i16, ptr %a, i64 5
  %8 = load i16, ptr %arrayidx.2, align 2, !tbaa !5
  %conv.2 = sext i16 %8 to i32
  %arrayidx4.2 = getelementptr inbounds i16, ptr %b, i64 5
  %9 = load i16, ptr %arrayidx4.2, align 2, !tbaa !5
  %conv5.2 = sext i16 %9 to i32
  %mul6.2 = mul nsw i32 %conv5.2, %conv.2
  %arrayidx9.2 = getelementptr inbounds i16, ptr %a, i64 4
  %10 = load i16, ptr %arrayidx9.2, align 2, !tbaa !5
  %conv10.2 = sext i16 %10 to i32
  %arrayidx13.2 = getelementptr inbounds i16, ptr %b, i64 4
  %11 = load i16, ptr %arrayidx13.2, align 2, !tbaa !5
  %conv14.2 = sext i16 %11 to i32
  %mul15.2 = mul nsw i32 %conv14.2, %conv10.2
  %add16.2 = add nsw i32 %mul15.2, %mul6.2
  %arrayidx18.2 = getelementptr inbounds i32, ptr %out, i64 2
  store i32 %add16.2, ptr %arrayidx18.2, align 4, !tbaa !9
  %arrayidx.3 = getelementptr inbounds i16, ptr %a, i64 7
  %12 = load i16, ptr %arrayidx.3, align 2, !tbaa !5
  %conv.3 = sext i16 %12 to i32
  %arrayidx4.3 = getelementptr inbounds i16, ptr %b, i64 7
  %13 = load i16, ptr %arrayidx4.3, align 2, !tbaa !5
  %conv5.3 = sext i16 %13 to i32
  %mul6.3 = mul nsw i32 %conv5.3, %conv.3
  %arrayidx9.3 = getelementptr inbounds i16, ptr %a, i64 6
  %14 = load i16, ptr %arrayidx9.3, align 2, !tbaa !5
  %conv10.3 = sext i16 %14 to i32
  %arrayidx13.3 = getelementptr inbounds i16, ptr %b, i64 6
  %15 = load i16, ptr %arrayidx13.3, align 2, !tbaa !5
  %conv14.3 = sext i16 %15 to i32
  %mul15.3 = mul nsw i32 %conv14.3, %conv10.3
  %add16.3 = add nsw i32 %mul15.3, %mul6.3
  %arrayidx18.3 = getelementptr inbounds i32, ptr %out, i64 3
  store i32 %add16.3, ptr %arrayidx18.3, align 4, !tbaa !9
  ret void
}

attributes #0 = { argmemonly mustprogress nofree norecurse nosync nounwind uwtable "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="icelake-server" "target-features"="+64bit,+adx,+aes,+avx,+avx2,+avx512bitalg,+avx512bw,+avx512cd,+avx512dq,+avx512f,+avx512ifma,+avx512vbmi,+avx512vbmi2,+avx512vl,+avx512vnni,+avx512vpopcntdq,+bmi,+bmi2,+clflushopt,+clwb,+cmov,+crc32,+cx16,+cx8,+f16c,+fma,+fsgsbase,+fxsr,+gfni,+invpcid,+lzcnt,+mmx,+movbe,+pclmul,+pku,+popcnt,+prfchw,+rdpid,+rdrnd,+rdseed,+sahf,+sha,+sse,+sse2,+sse3,+sse4.1,+sse4.2,+ssse3,+vaes,+vpclmulqdq,+wbnoinvd,+x87,+xsave,+xsavec,+xsaveopt,+xsaves,-amx-bf16,-amx-int8,-amx-tile,-avx512bf16,-avx512er,-avx512fp16,-avx512pf,-avx512vp2intersect,-avxvnni,-cldemote,-clzero,-enqcmd,-fma4,-hreset,-kl,-lwp,-movdir64b,-movdiri,-mwaitx,-pconfig,-prefetchwt1,-ptwrite,-rdpru,-rtm,-serialize,-sgx,-shstk,-sse4a,-tbm,-tsxldtrk,-uintr,-waitpkg,-widekl,-xop" }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"PIE Level", i32 2}
!3 = !{i32 7, !"uwtable", i32 2}
!4 = !{!"clang version 15.0.6 (https://github.com/llvm/llvm-project.git 088f33605d8a61ff519c580a71b1dd57d16a03f8)"}
!5 = !{!6, !6, i64 0}
!6 = !{!"short", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C++ TBAA"}
!9 = !{!10, !10, i64 0}
!10 = !{!"int", !7, i64 0}
