; RUN: %opt -passes=global-slp %s -S | FileCheck %s

; CHECK:  [[CALL:%.*]] = tail call <32 x i16> @llvm.x86.avx512.packssdw.512(<16 x i32> [[A:%.*]], <16 x i32> [[B:%.*]])

; Function Attrs: mustprogress nofree nosync nounwind uwtable
define dso_local void @_Z6kernelPiS_Ps(ptr noalias nocapture noundef readonly %a, ptr noalias nocapture noundef readonly %b, ptr noalias nocapture noundef writeonly %out) local_unnamed_addr #0 {
entry:
  %cond = load i32, ptr %a, align 4, !tbaa !5
  %0 = tail call i32 @llvm.smax.i32(i32 %cond, i32 -32768)
  %1 = tail call i32 @llvm.smin.i32(i32 %0, i32 32767)
  %conv.i = trunc i32 %1 to i16
  store i16 %conv.i, ptr %out, align 2, !tbaa !9
  %arrayidx3.1 = getelementptr inbounds i32, ptr %a, i64 1
  %cond.1 = load i32, ptr %arrayidx3.1, align 4, !tbaa !5
  %2 = tail call i32 @llvm.smax.i32(i32 %cond.1, i32 -32768)
  %3 = tail call i32 @llvm.smin.i32(i32 %2, i32 32767)
  %conv.i.1 = trunc i32 %3 to i16
  %arrayidx5.1 = getelementptr inbounds i16, ptr %out, i64 1
  store i16 %conv.i.1, ptr %arrayidx5.1, align 2, !tbaa !9
  %arrayidx3.2 = getelementptr inbounds i32, ptr %a, i64 2
  %cond.2 = load i32, ptr %arrayidx3.2, align 4, !tbaa !5
  %4 = tail call i32 @llvm.smax.i32(i32 %cond.2, i32 -32768)
  %5 = tail call i32 @llvm.smin.i32(i32 %4, i32 32767)
  %conv.i.2 = trunc i32 %5 to i16
  %arrayidx5.2 = getelementptr inbounds i16, ptr %out, i64 2
  store i16 %conv.i.2, ptr %arrayidx5.2, align 2, !tbaa !9
  %arrayidx3.3 = getelementptr inbounds i32, ptr %a, i64 3
  %cond.3 = load i32, ptr %arrayidx3.3, align 4, !tbaa !5
  %6 = tail call i32 @llvm.smax.i32(i32 %cond.3, i32 -32768)
  %7 = tail call i32 @llvm.smin.i32(i32 %6, i32 32767)
  %conv.i.3 = trunc i32 %7 to i16
  %arrayidx5.3 = getelementptr inbounds i16, ptr %out, i64 3
  store i16 %conv.i.3, ptr %arrayidx5.3, align 2, !tbaa !9
  %cond.4 = load i32, ptr %b, align 4, !tbaa !5
  %8 = tail call i32 @llvm.smax.i32(i32 %cond.4, i32 -32768)
  %9 = tail call i32 @llvm.smin.i32(i32 %8, i32 32767)
  %conv.i.4 = trunc i32 %9 to i16
  %arrayidx5.4 = getelementptr inbounds i16, ptr %out, i64 4
  store i16 %conv.i.4, ptr %arrayidx5.4, align 2, !tbaa !9
  %arrayidx.5 = getelementptr inbounds i32, ptr %b, i64 1
  %cond.5 = load i32, ptr %arrayidx.5, align 4, !tbaa !5
  %10 = tail call i32 @llvm.smax.i32(i32 %cond.5, i32 -32768)
  %11 = tail call i32 @llvm.smin.i32(i32 %10, i32 32767)
  %conv.i.5 = trunc i32 %11 to i16
  %arrayidx5.5 = getelementptr inbounds i16, ptr %out, i64 5
  store i16 %conv.i.5, ptr %arrayidx5.5, align 2, !tbaa !9
  %arrayidx.6 = getelementptr inbounds i32, ptr %b, i64 2
  %cond.6 = load i32, ptr %arrayidx.6, align 4, !tbaa !5
  %12 = tail call i32 @llvm.smax.i32(i32 %cond.6, i32 -32768)
  %13 = tail call i32 @llvm.smin.i32(i32 %12, i32 32767)
  %conv.i.6 = trunc i32 %13 to i16
  %arrayidx5.6 = getelementptr inbounds i16, ptr %out, i64 6
  store i16 %conv.i.6, ptr %arrayidx5.6, align 2, !tbaa !9
  %arrayidx.7 = getelementptr inbounds i32, ptr %b, i64 3
  %cond.7 = load i32, ptr %arrayidx.7, align 4, !tbaa !5
  %14 = tail call i32 @llvm.smax.i32(i32 %cond.7, i32 -32768)
  %15 = tail call i32 @llvm.smin.i32(i32 %14, i32 32767)
  %conv.i.7 = trunc i32 %15 to i16
  %arrayidx5.7 = getelementptr inbounds i16, ptr %out, i64 7
  store i16 %conv.i.7, ptr %arrayidx5.7, align 2, !tbaa !9
  %arrayidx3.8 = getelementptr inbounds i32, ptr %a, i64 4
  %cond.8 = load i32, ptr %arrayidx3.8, align 4, !tbaa !5
  %16 = tail call i32 @llvm.smax.i32(i32 %cond.8, i32 -32768)
  %17 = tail call i32 @llvm.smin.i32(i32 %16, i32 32767)
  %conv.i.8 = trunc i32 %17 to i16
  %arrayidx5.8 = getelementptr inbounds i16, ptr %out, i64 8
  store i16 %conv.i.8, ptr %arrayidx5.8, align 2, !tbaa !9
  %arrayidx3.9 = getelementptr inbounds i32, ptr %a, i64 5
  %cond.9 = load i32, ptr %arrayidx3.9, align 4, !tbaa !5
  %18 = tail call i32 @llvm.smax.i32(i32 %cond.9, i32 -32768)
  %19 = tail call i32 @llvm.smin.i32(i32 %18, i32 32767)
  %conv.i.9 = trunc i32 %19 to i16
  %arrayidx5.9 = getelementptr inbounds i16, ptr %out, i64 9
  store i16 %conv.i.9, ptr %arrayidx5.9, align 2, !tbaa !9
  %arrayidx3.10 = getelementptr inbounds i32, ptr %a, i64 6
  %cond.10 = load i32, ptr %arrayidx3.10, align 4, !tbaa !5
  %20 = tail call i32 @llvm.smax.i32(i32 %cond.10, i32 -32768)
  %21 = tail call i32 @llvm.smin.i32(i32 %20, i32 32767)
  %conv.i.10 = trunc i32 %21 to i16
  %arrayidx5.10 = getelementptr inbounds i16, ptr %out, i64 10
  store i16 %conv.i.10, ptr %arrayidx5.10, align 2, !tbaa !9
  %arrayidx3.11 = getelementptr inbounds i32, ptr %a, i64 7
  %cond.11 = load i32, ptr %arrayidx3.11, align 4, !tbaa !5
  %22 = tail call i32 @llvm.smax.i32(i32 %cond.11, i32 -32768)
  %23 = tail call i32 @llvm.smin.i32(i32 %22, i32 32767)
  %conv.i.11 = trunc i32 %23 to i16
  %arrayidx5.11 = getelementptr inbounds i16, ptr %out, i64 11
  store i16 %conv.i.11, ptr %arrayidx5.11, align 2, !tbaa !9
  %arrayidx.12 = getelementptr inbounds i32, ptr %b, i64 4
  %cond.12 = load i32, ptr %arrayidx.12, align 4, !tbaa !5
  %24 = tail call i32 @llvm.smax.i32(i32 %cond.12, i32 -32768)
  %25 = tail call i32 @llvm.smin.i32(i32 %24, i32 32767)
  %conv.i.12 = trunc i32 %25 to i16
  %arrayidx5.12 = getelementptr inbounds i16, ptr %out, i64 12
  store i16 %conv.i.12, ptr %arrayidx5.12, align 2, !tbaa !9
  %arrayidx.13 = getelementptr inbounds i32, ptr %b, i64 5
  %cond.13 = load i32, ptr %arrayidx.13, align 4, !tbaa !5
  %26 = tail call i32 @llvm.smax.i32(i32 %cond.13, i32 -32768)
  %27 = tail call i32 @llvm.smin.i32(i32 %26, i32 32767)
  %conv.i.13 = trunc i32 %27 to i16
  %arrayidx5.13 = getelementptr inbounds i16, ptr %out, i64 13
  store i16 %conv.i.13, ptr %arrayidx5.13, align 2, !tbaa !9
  %arrayidx.14 = getelementptr inbounds i32, ptr %b, i64 6
  %cond.14 = load i32, ptr %arrayidx.14, align 4, !tbaa !5
  %28 = tail call i32 @llvm.smax.i32(i32 %cond.14, i32 -32768)
  %29 = tail call i32 @llvm.smin.i32(i32 %28, i32 32767)
  %conv.i.14 = trunc i32 %29 to i16
  %arrayidx5.14 = getelementptr inbounds i16, ptr %out, i64 14
  store i16 %conv.i.14, ptr %arrayidx5.14, align 2, !tbaa !9
  %arrayidx.15 = getelementptr inbounds i32, ptr %b, i64 7
  %cond.15 = load i32, ptr %arrayidx.15, align 4, !tbaa !5
  %30 = tail call i32 @llvm.smax.i32(i32 %cond.15, i32 -32768)
  %31 = tail call i32 @llvm.smin.i32(i32 %30, i32 32767)
  %conv.i.15 = trunc i32 %31 to i16
  %arrayidx5.15 = getelementptr inbounds i16, ptr %out, i64 15
  store i16 %conv.i.15, ptr %arrayidx5.15, align 2, !tbaa !9
  %arrayidx3.16 = getelementptr inbounds i32, ptr %a, i64 8
  %cond.16 = load i32, ptr %arrayidx3.16, align 4, !tbaa !5
  %32 = tail call i32 @llvm.smax.i32(i32 %cond.16, i32 -32768)
  %33 = tail call i32 @llvm.smin.i32(i32 %32, i32 32767)
  %conv.i.16 = trunc i32 %33 to i16
  %arrayidx5.16 = getelementptr inbounds i16, ptr %out, i64 16
  store i16 %conv.i.16, ptr %arrayidx5.16, align 2, !tbaa !9
  %arrayidx3.17 = getelementptr inbounds i32, ptr %a, i64 9
  %cond.17 = load i32, ptr %arrayidx3.17, align 4, !tbaa !5
  %34 = tail call i32 @llvm.smax.i32(i32 %cond.17, i32 -32768)
  %35 = tail call i32 @llvm.smin.i32(i32 %34, i32 32767)
  %conv.i.17 = trunc i32 %35 to i16
  %arrayidx5.17 = getelementptr inbounds i16, ptr %out, i64 17
  store i16 %conv.i.17, ptr %arrayidx5.17, align 2, !tbaa !9
  %arrayidx3.18 = getelementptr inbounds i32, ptr %a, i64 10
  %cond.18 = load i32, ptr %arrayidx3.18, align 4, !tbaa !5
  %36 = tail call i32 @llvm.smax.i32(i32 %cond.18, i32 -32768)
  %37 = tail call i32 @llvm.smin.i32(i32 %36, i32 32767)
  %conv.i.18 = trunc i32 %37 to i16
  %arrayidx5.18 = getelementptr inbounds i16, ptr %out, i64 18
  store i16 %conv.i.18, ptr %arrayidx5.18, align 2, !tbaa !9
  %arrayidx3.19 = getelementptr inbounds i32, ptr %a, i64 11
  %cond.19 = load i32, ptr %arrayidx3.19, align 4, !tbaa !5
  %38 = tail call i32 @llvm.smax.i32(i32 %cond.19, i32 -32768)
  %39 = tail call i32 @llvm.smin.i32(i32 %38, i32 32767)
  %conv.i.19 = trunc i32 %39 to i16
  %arrayidx5.19 = getelementptr inbounds i16, ptr %out, i64 19
  store i16 %conv.i.19, ptr %arrayidx5.19, align 2, !tbaa !9
  %arrayidx.20 = getelementptr inbounds i32, ptr %b, i64 8
  %cond.20 = load i32, ptr %arrayidx.20, align 4, !tbaa !5
  %40 = tail call i32 @llvm.smax.i32(i32 %cond.20, i32 -32768)
  %41 = tail call i32 @llvm.smin.i32(i32 %40, i32 32767)
  %conv.i.20 = trunc i32 %41 to i16
  %arrayidx5.20 = getelementptr inbounds i16, ptr %out, i64 20
  store i16 %conv.i.20, ptr %arrayidx5.20, align 2, !tbaa !9
  %arrayidx.21 = getelementptr inbounds i32, ptr %b, i64 9
  %cond.21 = load i32, ptr %arrayidx.21, align 4, !tbaa !5
  %42 = tail call i32 @llvm.smax.i32(i32 %cond.21, i32 -32768)
  %43 = tail call i32 @llvm.smin.i32(i32 %42, i32 32767)
  %conv.i.21 = trunc i32 %43 to i16
  %arrayidx5.21 = getelementptr inbounds i16, ptr %out, i64 21
  store i16 %conv.i.21, ptr %arrayidx5.21, align 2, !tbaa !9
  %arrayidx.22 = getelementptr inbounds i32, ptr %b, i64 10
  %cond.22 = load i32, ptr %arrayidx.22, align 4, !tbaa !5
  %44 = tail call i32 @llvm.smax.i32(i32 %cond.22, i32 -32768)
  %45 = tail call i32 @llvm.smin.i32(i32 %44, i32 32767)
  %conv.i.22 = trunc i32 %45 to i16
  %arrayidx5.22 = getelementptr inbounds i16, ptr %out, i64 22
  store i16 %conv.i.22, ptr %arrayidx5.22, align 2, !tbaa !9
  %arrayidx.23 = getelementptr inbounds i32, ptr %b, i64 11
  %cond.23 = load i32, ptr %arrayidx.23, align 4, !tbaa !5
  %46 = tail call i32 @llvm.smax.i32(i32 %cond.23, i32 -32768)
  %47 = tail call i32 @llvm.smin.i32(i32 %46, i32 32767)
  %conv.i.23 = trunc i32 %47 to i16
  %arrayidx5.23 = getelementptr inbounds i16, ptr %out, i64 23
  store i16 %conv.i.23, ptr %arrayidx5.23, align 2, !tbaa !9
  %arrayidx3.24 = getelementptr inbounds i32, ptr %a, i64 12
  %cond.24 = load i32, ptr %arrayidx3.24, align 4, !tbaa !5
  %48 = tail call i32 @llvm.smax.i32(i32 %cond.24, i32 -32768)
  %49 = tail call i32 @llvm.smin.i32(i32 %48, i32 32767)
  %conv.i.24 = trunc i32 %49 to i16
  %arrayidx5.24 = getelementptr inbounds i16, ptr %out, i64 24
  store i16 %conv.i.24, ptr %arrayidx5.24, align 2, !tbaa !9
  %arrayidx3.25 = getelementptr inbounds i32, ptr %a, i64 13
  %cond.25 = load i32, ptr %arrayidx3.25, align 4, !tbaa !5
  %50 = tail call i32 @llvm.smax.i32(i32 %cond.25, i32 -32768)
  %51 = tail call i32 @llvm.smin.i32(i32 %50, i32 32767)
  %conv.i.25 = trunc i32 %51 to i16
  %arrayidx5.25 = getelementptr inbounds i16, ptr %out, i64 25
  store i16 %conv.i.25, ptr %arrayidx5.25, align 2, !tbaa !9
  %arrayidx3.26 = getelementptr inbounds i32, ptr %a, i64 14
  %cond.26 = load i32, ptr %arrayidx3.26, align 4, !tbaa !5
  %52 = tail call i32 @llvm.smax.i32(i32 %cond.26, i32 -32768)
  %53 = tail call i32 @llvm.smin.i32(i32 %52, i32 32767)
  %conv.i.26 = trunc i32 %53 to i16
  %arrayidx5.26 = getelementptr inbounds i16, ptr %out, i64 26
  store i16 %conv.i.26, ptr %arrayidx5.26, align 2, !tbaa !9
  %arrayidx3.27 = getelementptr inbounds i32, ptr %a, i64 15
  %cond.27 = load i32, ptr %arrayidx3.27, align 4, !tbaa !5
  %54 = tail call i32 @llvm.smax.i32(i32 %cond.27, i32 -32768)
  %55 = tail call i32 @llvm.smin.i32(i32 %54, i32 32767)
  %conv.i.27 = trunc i32 %55 to i16
  %arrayidx5.27 = getelementptr inbounds i16, ptr %out, i64 27
  store i16 %conv.i.27, ptr %arrayidx5.27, align 2, !tbaa !9
  %arrayidx.28 = getelementptr inbounds i32, ptr %b, i64 12
  %cond.28 = load i32, ptr %arrayidx.28, align 4, !tbaa !5
  %56 = tail call i32 @llvm.smax.i32(i32 %cond.28, i32 -32768)
  %57 = tail call i32 @llvm.smin.i32(i32 %56, i32 32767)
  %conv.i.28 = trunc i32 %57 to i16
  %arrayidx5.28 = getelementptr inbounds i16, ptr %out, i64 28
  store i16 %conv.i.28, ptr %arrayidx5.28, align 2, !tbaa !9
  %arrayidx.29 = getelementptr inbounds i32, ptr %b, i64 13
  %cond.29 = load i32, ptr %arrayidx.29, align 4, !tbaa !5
  %58 = tail call i32 @llvm.smax.i32(i32 %cond.29, i32 -32768)
  %59 = tail call i32 @llvm.smin.i32(i32 %58, i32 32767)
  %conv.i.29 = trunc i32 %59 to i16
  %arrayidx5.29 = getelementptr inbounds i16, ptr %out, i64 29
  store i16 %conv.i.29, ptr %arrayidx5.29, align 2, !tbaa !9
  %arrayidx.30 = getelementptr inbounds i32, ptr %b, i64 14
  %cond.30 = load i32, ptr %arrayidx.30, align 4, !tbaa !5
  %60 = tail call i32 @llvm.smax.i32(i32 %cond.30, i32 -32768)
  %61 = tail call i32 @llvm.smin.i32(i32 %60, i32 32767)
  %conv.i.30 = trunc i32 %61 to i16
  %arrayidx5.30 = getelementptr inbounds i16, ptr %out, i64 30
  store i16 %conv.i.30, ptr %arrayidx5.30, align 2, !tbaa !9
  %arrayidx.31 = getelementptr inbounds i32, ptr %b, i64 15
  %cond.31 = load i32, ptr %arrayidx.31, align 4, !tbaa !5
  %62 = tail call i32 @llvm.smax.i32(i32 %cond.31, i32 -32768)
  %63 = tail call i32 @llvm.smin.i32(i32 %62, i32 32767)
  %conv.i.31 = trunc i32 %63 to i16
  %arrayidx5.31 = getelementptr inbounds i16, ptr %out, i64 31
  store i16 %conv.i.31, ptr %arrayidx5.31, align 2, !tbaa !9
  ret void
}

; Function Attrs: nocallback nofree nosync nounwind readnone speculatable willreturn
declare i32 @llvm.smax.i32(i32, i32) #1

; Function Attrs: nocallback nofree nosync nounwind readnone speculatable willreturn
declare i32 @llvm.smin.i32(i32, i32) #1

attributes #0 = { mustprogress nofree nosync nounwind uwtable "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="icelake-server" "target-features"="+64bit,+adx,+aes,+avx,+avx2,+avx512bitalg,+avx512bw,+avx512cd,+avx512dq,+avx512f,+avx512ifma,+avx512vbmi,+avx512vbmi2,+avx512vl,+avx512vnni,+avx512vpopcntdq,+bmi,+bmi2,+clflushopt,+clwb,+cmov,+crc32,+cx16,+cx8,+f16c,+fma,+fsgsbase,+fxsr,+gfni,+invpcid,+lzcnt,+mmx,+movbe,+pclmul,+pku,+popcnt,+prfchw,+rdpid,+rdrnd,+rdseed,+sahf,+sha,+sse,+sse2,+sse3,+sse4.1,+sse4.2,+ssse3,+vaes,+vpclmulqdq,+wbnoinvd,+x87,+xsave,+xsavec,+xsaveopt,+xsaves,-amx-bf16,-amx-int8,-amx-tile,-avx512bf16,-avx512er,-avx512fp16,-avx512pf,-avx512vp2intersect,-avxvnni,-cldemote,-clzero,-enqcmd,-fma4,-hreset,-kl,-lwp,-movdir64b,-movdiri,-mwaitx,-pconfig,-prefetchwt1,-ptwrite,-rdpru,-rtm,-serialize,-sgx,-shstk,-sse4a,-tbm,-tsxldtrk,-uintr,-waitpkg,-widekl,-xop" }
attributes #1 = { nocallback nofree nosync nounwind readnone speculatable willreturn }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"PIE Level", i32 2}
!3 = !{i32 7, !"uwtable", i32 2}
!4 = !{!"clang version 15.0.6 (https://github.com/llvm/llvm-project.git 088f33605d8a61ff519c580a71b1dd57d16a03f8)"}
!5 = !{!6, !6, i64 0}
!6 = !{!"int", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C++ TBAA"}
!9 = !{!10, !10, i64 0}
!10 = !{!"short", !7, i64 0}
