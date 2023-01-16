; RUN: %opt -passes=global-slp -S %s -vectorize-only=kernel | lli
; RUN: %opt -passes=global-slp -S %s -vectorize-only=kernel | FileCheck %s

;  CHECK: icmp ugt <4 x i32>
;  CHECK-NEXT: sitofp <4 x i32>
;  CHECK-NEXT: fcmp oeq <4 x float>

target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: argmemonly nofree noinline norecurse nosync nounwind ssp uwtable
define void @kernel(i32 noundef %n, ptr noalias nocapture noundef writeonly %RET, ptr noalias nocapture noundef readonly %aFOO, float %b) local_unnamed_addr #0 {
entry:
  %cmp23 = icmp sgt i32 %n, 0
  br i1 %cmp23, label %for.body.preheader, label %for.cond.cleanup

for.body.preheader:                               ; preds = %entry
  %0 = add nsw i32 %n, -1
  %xtraiter = and i32 %n, 3
  %1 = icmp ult i32 %0, 3
  br i1 %1, label %for.cond.cleanup.loopexit.unr-lcssa, label %for.body.preheader.new

for.body.preheader.new:                           ; preds = %for.body.preheader
  %unroll_iter = and i32 %n, -4
  br label %for.body

for.cond.cleanup.loopexit.unr-lcssa.loopexit:     ; preds = %for.end.3
  %indvars.iv.next.3.lcssa = phi i64 [ %indvars.iv.next.3, %for.end.3 ]
  br label %for.cond.cleanup.loopexit.unr-lcssa

for.cond.cleanup.loopexit.unr-lcssa:              ; preds = %for.cond.cleanup.loopexit.unr-lcssa.loopexit, %for.body.preheader
  %indvars.iv.unr = phi i64 [ 0, %for.body.preheader ], [ %indvars.iv.next.3.lcssa, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %lcmp.mod.not = icmp eq i32 %xtraiter, 0
  br i1 %lcmp.mod.not, label %for.cond.cleanup, label %for.body.epil.preheader

for.body.epil.preheader:                          ; preds = %for.cond.cleanup.loopexit.unr-lcssa
  br label %for.body.epil

for.body.epil:                                    ; preds = %for.body.epil.preheader, %for.end.epil
  %indvars.iv.epil = phi i64 [ %indvars.iv.next.epil, %for.end.epil ], [ %indvars.iv.unr, %for.body.epil.preheader ]
  %epil.iter = phi i32 [ %epil.iter.next, %for.end.epil ], [ 0, %for.body.epil.preheader ]
  %arrayidx.epil = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.epil
  %2 = load float, ptr %arrayidx.epil, align 4, !tbaa !5
  %cmp419.epil = fcmp oeq float %2, 0.000000e+00
  br i1 %cmp419.epil, label %for.end.epil, label %if.end.epil.preheader

if.end.epil.preheader:                            ; preds = %for.body.epil
  br label %if.end.epil

if.end.epil:                                      ; preds = %if.end.epil.preheader, %if.end.epil
  %aa.022.epil = phi float [ %inc.epil, %if.end.epil ], [ %2, %if.end.epil.preheader ]
  %x.021.epil = phi i32 [ %inc6.epil, %if.end.epil ], [ 0, %if.end.epil.preheader ]
  %inc.epil = fadd float %aa.022.epil, 1.000000e+00
  %inc6.epil = add nuw nsw i32 %x.021.epil, 1
  %cmp2.epil = icmp ugt i32 %x.021.epil, 99997
  %conv.epil = sitofp i32 %inc6.epil to float
  %cmp4.epil = fcmp oeq float %2, %conv.epil
  %or.cond.epil = select i1 %cmp2.epil, i1 true, i1 %cmp4.epil
  br i1 %or.cond.epil, label %for.end.epil.loopexit, label %if.end.epil, !llvm.loop !9

for.end.epil.loopexit:                            ; preds = %if.end.epil
  %inc.epil.lcssa = phi float [ %inc.epil, %if.end.epil ]
  br label %for.end.epil

for.end.epil:                                     ; preds = %for.end.epil.loopexit, %for.body.epil
  %aa.0.lcssa.epil = phi float [ %2, %for.body.epil ], [ %inc.epil.lcssa, %for.end.epil.loopexit ]
  %arrayidx8.epil = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.epil
  store float %aa.0.lcssa.epil, ptr %arrayidx8.epil, align 4, !tbaa !5
  %indvars.iv.next.epil = add nuw nsw i64 %indvars.iv.epil, 1
  %epil.iter.next = add nuw nsw i32 %epil.iter, 1
  %epil.iter.cmp.not = icmp eq i32 %epil.iter.next, %xtraiter
  br i1 %epil.iter.cmp.not, label %for.cond.cleanup.loopexit, label %for.body.epil, !llvm.loop !11

for.cond.cleanup.loopexit:                        ; preds = %for.end.epil
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit, %for.cond.cleanup.loopexit.unr-lcssa, %entry
  ret void

for.body:                                         ; preds = %for.end.3, %for.body.preheader.new
  %indvars.iv = phi i64 [ 0, %for.body.preheader.new ], [ %indvars.iv.next.3, %for.end.3 ]
  %niter = phi i32 [ 0, %for.body.preheader.new ], [ %niter.next.3, %for.end.3 ]
  %arrayidx = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv
  %3 = load float, ptr %arrayidx, align 4, !tbaa !5
  %cmp419 = fcmp oeq float %3, 0.000000e+00
  br i1 %cmp419, label %for.end, label %if.end.preheader

if.end.preheader:                                 ; preds = %for.body
  br label %if.end

if.end:                                           ; preds = %if.end.preheader, %if.end
  %aa.022 = phi float [ %inc, %if.end ], [ %3, %if.end.preheader ]
  %x.021 = phi i32 [ %inc6, %if.end ], [ 0, %if.end.preheader ]
  %inc = fadd float %aa.022, 1.000000e+00
  %inc6 = add nuw nsw i32 %x.021, 1
  %cmp2 = icmp ugt i32 %x.021, 99997
  %conv = sitofp i32 %inc6 to float
  %cmp4 = fcmp oeq float %3, %conv
  %or.cond = select i1 %cmp2, i1 true, i1 %cmp4
  br i1 %or.cond, label %for.end.loopexit, label %if.end, !llvm.loop !9

for.end.loopexit:                                 ; preds = %if.end
  %inc.lcssa = phi float [ %inc, %if.end ]
  br label %for.end

for.end:                                          ; preds = %for.end.loopexit, %for.body
  %aa.0.lcssa = phi float [ %3, %for.body ], [ %inc.lcssa, %for.end.loopexit ]
  %arrayidx8 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv
  store float %aa.0.lcssa, ptr %arrayidx8, align 4, !tbaa !5
  %indvars.iv.next = or i64 %indvars.iv, 1
  %arrayidx.1 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next
  %4 = load float, ptr %arrayidx.1, align 4, !tbaa !5
  %cmp419.1 = fcmp oeq float %4, 0.000000e+00
  br i1 %cmp419.1, label %for.end.1, label %if.end.1.preheader

if.end.1.preheader:                               ; preds = %for.end
  br label %if.end.1

if.end.1:                                         ; preds = %if.end.1.preheader, %if.end.1
  %aa.022.1 = phi float [ %inc.1, %if.end.1 ], [ %4, %if.end.1.preheader ]
  %x.021.1 = phi i32 [ %inc6.1, %if.end.1 ], [ 0, %if.end.1.preheader ]
  %inc.1 = fadd float %aa.022.1, 1.000000e+00
  %inc6.1 = add nuw nsw i32 %x.021.1, 1
  %cmp2.1 = icmp ugt i32 %x.021.1, 99997
  %conv.1 = sitofp i32 %inc6.1 to float
  %cmp4.1 = fcmp oeq float %4, %conv.1
  %or.cond.1 = select i1 %cmp2.1, i1 true, i1 %cmp4.1
  br i1 %or.cond.1, label %for.end.1.loopexit, label %if.end.1, !llvm.loop !9

for.end.1.loopexit:                               ; preds = %if.end.1
  %inc.1.lcssa = phi float [ %inc.1, %if.end.1 ]
  br label %for.end.1

for.end.1:                                        ; preds = %for.end.1.loopexit, %for.end
  %aa.0.lcssa.1 = phi float [ %4, %for.end ], [ %inc.1.lcssa, %for.end.1.loopexit ]
  %arrayidx8.1 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next
  store float %aa.0.lcssa.1, ptr %arrayidx8.1, align 4, !tbaa !5
  %indvars.iv.next.1 = or i64 %indvars.iv, 2
  %arrayidx.2 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.1
  %5 = load float, ptr %arrayidx.2, align 4, !tbaa !5
  %cmp419.2 = fcmp oeq float %5, 0.000000e+00
  br i1 %cmp419.2, label %for.end.2, label %if.end.2.preheader

if.end.2.preheader:                               ; preds = %for.end.1
  br label %if.end.2

if.end.2:                                         ; preds = %if.end.2.preheader, %if.end.2
  %aa.022.2 = phi float [ %inc.2, %if.end.2 ], [ %5, %if.end.2.preheader ]
  %x.021.2 = phi i32 [ %inc6.2, %if.end.2 ], [ 0, %if.end.2.preheader ]
  %inc.2 = fadd float %aa.022.2, 1.000000e+00
  %inc6.2 = add nuw nsw i32 %x.021.2, 1
  %cmp2.2 = icmp ugt i32 %x.021.2, 99997
  %conv.2 = sitofp i32 %inc6.2 to float
  %cmp4.2 = fcmp oeq float %5, %conv.2
  %or.cond.2 = select i1 %cmp2.2, i1 true, i1 %cmp4.2
  br i1 %or.cond.2, label %for.end.2.loopexit, label %if.end.2, !llvm.loop !9

for.end.2.loopexit:                               ; preds = %if.end.2
  %inc.2.lcssa = phi float [ %inc.2, %if.end.2 ]
  br label %for.end.2

for.end.2:                                        ; preds = %for.end.2.loopexit, %for.end.1
  %aa.0.lcssa.2 = phi float [ %5, %for.end.1 ], [ %inc.2.lcssa, %for.end.2.loopexit ]
  %arrayidx8.2 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.1
  store float %aa.0.lcssa.2, ptr %arrayidx8.2, align 4, !tbaa !5
  %indvars.iv.next.2 = or i64 %indvars.iv, 3
  %arrayidx.3 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.2
  %6 = load float, ptr %arrayidx.3, align 4, !tbaa !5
  %cmp419.3 = fcmp oeq float %6, 0.000000e+00
  br i1 %cmp419.3, label %for.end.3, label %if.end.3.preheader

if.end.3.preheader:                               ; preds = %for.end.2
  br label %if.end.3

if.end.3:                                         ; preds = %if.end.3.preheader, %if.end.3
  %aa.022.3 = phi float [ %inc.3, %if.end.3 ], [ %6, %if.end.3.preheader ]
  %x.021.3 = phi i32 [ %inc6.3, %if.end.3 ], [ 0, %if.end.3.preheader ]
  %inc.3 = fadd float %aa.022.3, 1.000000e+00
  %inc6.3 = add nuw nsw i32 %x.021.3, 1
  %cmp2.3 = icmp ugt i32 %x.021.3, 99997
  %conv.3 = sitofp i32 %inc6.3 to float
  %cmp4.3 = fcmp oeq float %6, %conv.3
  %or.cond.3 = select i1 %cmp2.3, i1 true, i1 %cmp4.3
  br i1 %or.cond.3, label %for.end.3.loopexit, label %if.end.3, !llvm.loop !9

for.end.3.loopexit:                               ; preds = %if.end.3
  %inc.3.lcssa = phi float [ %inc.3, %if.end.3 ]
  br label %for.end.3

for.end.3:                                        ; preds = %for.end.3.loopexit, %for.end.2
  %aa.0.lcssa.3 = phi float [ %6, %for.end.2 ], [ %inc.3.lcssa, %for.end.3.loopexit ]
  %arrayidx8.3 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.2
  store float %aa.0.lcssa.3, ptr %arrayidx8.3, align 4, !tbaa !5
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv, 4
  %niter.next.3 = add i32 %niter, 4
  %niter.ncmp.3.not = icmp eq i32 %niter.next.3, %unroll_iter
  br i1 %niter.ncmp.3.not, label %for.cond.cleanup.loopexit.unr-lcssa.loopexit, label %for.body, !llvm.loop !13
}

; Function Attrs: nofree norecurse nosync nounwind readnone ssp uwtable
define i32 @main() local_unnamed_addr #1 {
entry:
  %vla29 = alloca [1030 x float], align 16
  %vla130 = alloca [1030 x float], align 16
  br label %vector.body

vector.body:                                      ; preds = %vector.body, %entry
  %index = phi i64 [ 0, %entry ], [ %index.next.1, %vector.body ]
  %vec.ind = phi <4 x i64> [ <i64 0, i64 1, i64 2, i64 3>, %entry ], [ %vec.ind.next.1, %vector.body ]
  %0 = trunc <4 x i64> %vec.ind to <4 x i32>
  %1 = add <4 x i32> %0, <i32 1, i32 1, i32 1, i32 1>
  %2 = trunc <4 x i64> %vec.ind to <4 x i32>
  %3 = add <4 x i32> %2, <i32 5, i32 5, i32 5, i32 5>
  %4 = sitofp <4 x i32> %1 to <4 x float>
  %5 = sitofp <4 x i32> %3 to <4 x float>
  %6 = getelementptr inbounds float, ptr %vla130, i64 %index
  store <4 x float> %4, ptr %6, align 16, !tbaa !5
  %7 = getelementptr inbounds float, ptr %6, i64 4
  store <4 x float> %5, ptr %7, align 16, !tbaa !5
  %index.next = or i64 %index, 8
  %vec.ind.next = add <4 x i64> %vec.ind, <i64 8, i64 8, i64 8, i64 8>
  %8 = trunc <4 x i64> %vec.ind.next to <4 x i32>
  %9 = add <4 x i32> %8, <i32 1, i32 1, i32 1, i32 1>
  %10 = trunc <4 x i64> %vec.ind.next to <4 x i32>
  %11 = add <4 x i32> %10, <i32 5, i32 5, i32 5, i32 5>
  %12 = sitofp <4 x i32> %9 to <4 x float>
  %13 = sitofp <4 x i32> %11 to <4 x float>
  %14 = getelementptr inbounds float, ptr %vla130, i64 %index.next
  store <4 x float> %12, ptr %14, align 16, !tbaa !5
  %15 = getelementptr inbounds float, ptr %14, i64 4
  store <4 x float> %13, ptr %15, align 16, !tbaa !5
  %index.next.1 = add nuw nsw i64 %index, 16
  %vec.ind.next.1 = add <4 x i64> %vec.ind, <i64 16, i64 16, i64 16, i64 16>
  %16 = icmp eq i64 %index.next.1, 1024
  br i1 %16, label %for.body, label %vector.body, !llvm.loop !14

for.body:                                         ; preds = %vector.body
  %arrayidx = getelementptr inbounds float, ptr %vla130, i64 1024
  store float 1.025000e+03, ptr %arrayidx, align 16, !tbaa !5
  %arrayidx.1 = getelementptr inbounds float, ptr %vla130, i64 1025
  store float 1.026000e+03, ptr %arrayidx.1, align 4, !tbaa !5
  %arrayidx.2 = getelementptr inbounds float, ptr %vla130, i64 1026
  store float 1.027000e+03, ptr %arrayidx.2, align 8, !tbaa !5
  %arrayidx.3 = getelementptr inbounds float, ptr %vla130, i64 1027
  store float 1.028000e+03, ptr %arrayidx.3, align 4, !tbaa !5
  %arrayidx.4 = getelementptr inbounds float, ptr %vla130, i64 1028
  store float 1.029000e+03, ptr %arrayidx.4, align 16, !tbaa !5
  %arrayidx.5 = getelementptr inbounds float, ptr %vla130, i64 1029
  store float 1.030000e+03, ptr %arrayidx.5, align 4, !tbaa !5
  call void @kernel(i32 noundef 1030, ptr noundef nonnull %vla29, ptr noundef nonnull %vla130, float poison)
  br label %for.body7

for.cond3:                                        ; preds = %for.body7
  %indvars.iv.next35 = or i64 %indvars.iv34, 1
  %arrayidx9.1 = getelementptr inbounds float, ptr %vla29, i64 %indvars.iv.next35
  %17 = load float, ptr %arrayidx9.1, align 4, !tbaa !5
  %indvars.iv34.tr.1 = trunc i64 %indvars.iv.next35 to i32
  %18 = shl i32 %indvars.iv34.tr.1, 1
  %19 = add nuw nsw i32 %18, 2
  %conv11.1 = sitofp i32 %19 to float
  %cmp12.1 = fcmp une float %17, %conv11.1
  br i1 %cmp12.1, label %cleanup, label %for.cond3.1

for.cond3.1:                                      ; preds = %for.cond3
  %indvars.iv.next35.1 = add nuw nsw i64 %indvars.iv34, 2
  %exitcond39.not.1 = icmp eq i64 %indvars.iv.next35.1, 1030
  br i1 %exitcond39.not.1, label %cleanup, label %for.body7, !llvm.loop !16

for.body7:                                        ; preds = %for.cond3.1, %for.body
  %indvars.iv34 = phi i64 [ 0, %for.body ], [ %indvars.iv.next35.1, %for.cond3.1 ]
  %arrayidx9 = getelementptr inbounds float, ptr %vla29, i64 %indvars.iv34
  %20 = load float, ptr %arrayidx9, align 8, !tbaa !5
  %indvars.iv34.tr = trunc i64 %indvars.iv34 to i32
  %21 = shl i32 %indvars.iv34.tr, 1
  %22 = or i32 %21, 2
  %conv11 = sitofp i32 %22 to float
  %cmp12 = fcmp une float %20, %conv11
  br i1 %cmp12, label %cleanup, label %for.cond3

cleanup:                                          ; preds = %for.body7, %for.cond3.1, %for.cond3
  %spec.select = phi i32 [ 1, %for.body7 ], [ 1, %for.cond3 ], [ 0, %for.cond3.1 ]
  ret i32 %spec.select
}

attributes #0 = { argmemonly nofree noinline norecurse nosync nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }
attributes #1 = { nofree norecurse nosync nounwind readnone ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

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
!9 = distinct !{!9, !10}
!10 = !{!"llvm.loop.mustprogress"}
!11 = distinct !{!11, !12}
!12 = !{!"llvm.loop.unroll.disable"}
!13 = distinct !{!13, !10, !12}
!14 = distinct !{!14, !10, !15}
!15 = !{!"llvm.loop.isvectorized", i32 1}
!16 = distinct !{!16, !10}
