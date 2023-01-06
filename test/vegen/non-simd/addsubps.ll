; RUN: %opt -passes=global-slp %s -S | FileCheck %s

; CHECK:  [[CALL:%.*]] = tail call <8 x float> @llvm.x86.avx.addsub.ps.256(<8 x float> [[A:%.*]], <8 x float> [[B:%.*]])

; Function Attrs: argmemonly mustprogress nofree norecurse nosync nounwind uwtable
define dso_local void @_Z7kernel2PfS_S_(ptr noalias nocapture noundef readonly %a, ptr noalias nocapture noundef readonly %b, ptr noalias nocapture noundef writeonly %out) local_unnamed_addr #0 {
for.inc.7:
  %0 = load float, ptr %a, align 4, !tbaa !5
  %1 = load float, ptr %b, align 4, !tbaa !5
  %sub = fsub float %0, %1
  store float %sub, ptr %out, align 4, !tbaa !5
  %arrayidx7.1 = getelementptr inbounds float, ptr %a, i64 1
  %2 = load float, ptr %arrayidx7.1, align 4, !tbaa !5
  %arrayidx9.1 = getelementptr inbounds float, ptr %b, i64 1
  %3 = load float, ptr %arrayidx9.1, align 4, !tbaa !5
  %add.1 = fadd float %2, %3
  %4 = getelementptr inbounds float, ptr %out, i64 1
  store float %add.1, ptr %4, align 4
  %arrayidx.2 = getelementptr inbounds float, ptr %a, i64 2
  %5 = load float, ptr %arrayidx.2, align 4, !tbaa !5
  %arrayidx3.2 = getelementptr inbounds float, ptr %b, i64 2
  %6 = load float, ptr %arrayidx3.2, align 4, !tbaa !5
  %sub.2 = fsub float %5, %6
  %7 = getelementptr inbounds float, ptr %out, i64 2
  store float %sub.2, ptr %7, align 4
  %arrayidx7.3 = getelementptr inbounds float, ptr %a, i64 3
  %8 = load float, ptr %arrayidx7.3, align 4, !tbaa !5
  %arrayidx9.3 = getelementptr inbounds float, ptr %b, i64 3
  %9 = load float, ptr %arrayidx9.3, align 4, !tbaa !5
  %add.3 = fadd float %8, %9
  %10 = getelementptr inbounds float, ptr %out, i64 3
  store float %add.3, ptr %10, align 4
  %arrayidx.4 = getelementptr inbounds float, ptr %a, i64 4
  %11 = load float, ptr %arrayidx.4, align 4, !tbaa !5
  %arrayidx3.4 = getelementptr inbounds float, ptr %b, i64 4
  %12 = load float, ptr %arrayidx3.4, align 4, !tbaa !5
  %sub.4 = fsub float %11, %12
  %13 = getelementptr inbounds float, ptr %out, i64 4
  store float %sub.4, ptr %13, align 4
  %arrayidx7.5 = getelementptr inbounds float, ptr %a, i64 5
  %14 = load float, ptr %arrayidx7.5, align 4, !tbaa !5
  %arrayidx9.5 = getelementptr inbounds float, ptr %b, i64 5
  %15 = load float, ptr %arrayidx9.5, align 4, !tbaa !5
  %add.5 = fadd float %14, %15
  %16 = getelementptr inbounds float, ptr %out, i64 5
  store float %add.5, ptr %16, align 4
  %arrayidx.6 = getelementptr inbounds float, ptr %a, i64 6
  %17 = load float, ptr %arrayidx.6, align 4, !tbaa !5
  %arrayidx3.6 = getelementptr inbounds float, ptr %b, i64 6
  %18 = load float, ptr %arrayidx3.6, align 4, !tbaa !5
  %sub.6 = fsub float %17, %18
  %19 = getelementptr inbounds float, ptr %out, i64 6
  store float %sub.6, ptr %19, align 4
  %arrayidx7.7 = getelementptr inbounds float, ptr %a, i64 7
  %20 = load float, ptr %arrayidx7.7, align 4, !tbaa !5
  %arrayidx9.7 = getelementptr inbounds float, ptr %b, i64 7
  %21 = load float, ptr %arrayidx9.7, align 4, !tbaa !5
  %add.7 = fadd float %20, %21
  %22 = getelementptr inbounds float, ptr %out, i64 7
  store float %add.7, ptr %22, align 4
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
!6 = !{!"float", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C++ TBAA"}
