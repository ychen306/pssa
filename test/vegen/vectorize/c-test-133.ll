; RUN: %opt -passes=global-slp -vectorize-only=kernel %s | lli
; RUN: %opt -passes=global-slp -vectorize-only=kernel -S %s | FileCheck %s

target triple = "x86_64-unknown-linux-gnu"

; CHECK:  fcmp oeq <4 x float>
; CHECK-NEXT:  fadd <4 x float>
; CHECK-NEXT:  select <4 x i1>
; CHECK-NEXT:  select <4 x i1>
; CHECK-NEXT:  fadd <4 x float>

; Function Attrs: argmemonly nofree noinline norecurse nosync nounwind ssp uwtable
define void @kernel(i32 noundef %n, ptr noalias nocapture noundef writeonly %RET, ptr noalias nocapture noundef readonly %aFOO, float noundef %b) local_unnamed_addr #0 {
entry:
  %cmp21 = icmp sgt i32 %n, 0
  br i1 %cmp21, label %for.body.lr.ph, label %for.cond.cleanup

for.body.lr.ph:                                   ; preds = %entry
  %cmp218 = fcmp ogt float %b, 0.000000e+00
  br i1 %cmp218, label %for.body.us.preheader, label %for.body.preheader

for.body.preheader:                               ; preds = %for.body.lr.ph
  %0 = zext i32 %n to i64
  %1 = shl nuw nsw i64 %0, 2
  call void @llvm.memcpy.p0.p0.i64(ptr align 4 %RET, ptr align 4 %aFOO, i64 %1, i1 false), !tbaa !5
  br label %for.cond.cleanup

for.body.us.preheader:                            ; preds = %for.body.lr.ph
  %2 = add nsw i32 %n, -1
  %xtraiter = and i32 %n, 3
  %3 = icmp ult i32 %2, 3
  br i1 %3, label %for.cond.cleanup.loopexit.unr-lcssa, label %for.body.us.preheader.new

for.body.us.preheader.new:                        ; preds = %for.body.us.preheader
  %unroll_iter = and i32 %n, -4
  br label %for.body.us

for.body.us:                                      ; preds = %for.cond1.for.end_crit_edge.us.3, %for.body.us.preheader.new
  %indvars.iv = phi i64 [ 0, %for.body.us.preheader.new ], [ %indvars.iv.next.3, %for.cond1.for.end_crit_edge.us.3 ]
  %niter = phi i32 [ 0, %for.body.us.preheader.new ], [ %niter.next.3, %for.cond1.for.end_crit_edge.us.3 ]
  %arrayidx.us = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv
  %4 = load float, ptr %arrayidx.us, align 4, !tbaa !5
  br label %for.body3.us

for.body3.us:                                     ; preds = %for.body3.us, %for.body.us
  %i.020.us = phi float [ 0.000000e+00, %for.body.us ], [ %inc5.us, %for.body3.us ]
  %a.019.us = phi float [ %4, %for.body.us ], [ %a.1.us, %for.body3.us ]
  %add.us = fadd float %i.020.us, 2.000000e+00
  %cmp4.us = fcmp oeq float %add.us, %b
  %inc.us = fadd float %a.019.us, 1.000000e+00
  %a.1.us = select i1 %cmp4.us, float %a.019.us, float %inc.us
  %inc5.us = fadd float %i.020.us, 1.000000e+00
  %cmp2.us = fcmp olt float %inc5.us, %b
  br i1 %cmp2.us, label %for.body3.us, label %for.cond1.for.end_crit_edge.us, !llvm.loop !9

for.cond1.for.end_crit_edge.us:                   ; preds = %for.body3.us
  %a.1.us.lcssa = phi float [ %a.1.us, %for.body3.us ]
  %arrayidx7.us = getelementptr inbounds float, ptr %RET, i64 %indvars.iv
  store float %a.1.us.lcssa, ptr %arrayidx7.us, align 4, !tbaa !5
  %indvars.iv.next = or i64 %indvars.iv, 1
  %arrayidx.us.1 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next
  %5 = load float, ptr %arrayidx.us.1, align 4, !tbaa !5
  br label %for.body3.us.1

for.body3.us.1:                                   ; preds = %for.body3.us.1, %for.cond1.for.end_crit_edge.us
  %i.020.us.1 = phi float [ 0.000000e+00, %for.cond1.for.end_crit_edge.us ], [ %inc5.us.1, %for.body3.us.1 ]
  %a.019.us.1 = phi float [ %5, %for.cond1.for.end_crit_edge.us ], [ %a.1.us.1, %for.body3.us.1 ]
  %add.us.1 = fadd float %i.020.us.1, 2.000000e+00
  %cmp4.us.1 = fcmp oeq float %add.us.1, %b
  %inc.us.1 = fadd float %a.019.us.1, 1.000000e+00
  %a.1.us.1 = select i1 %cmp4.us.1, float %a.019.us.1, float %inc.us.1
  %inc5.us.1 = fadd float %i.020.us.1, 1.000000e+00
  %cmp2.us.1 = fcmp olt float %inc5.us.1, %b
  br i1 %cmp2.us.1, label %for.body3.us.1, label %for.cond1.for.end_crit_edge.us.1, !llvm.loop !9

for.cond1.for.end_crit_edge.us.1:                 ; preds = %for.body3.us.1
  %a.1.us.1.lcssa = phi float [ %a.1.us.1, %for.body3.us.1 ]
  %arrayidx7.us.1 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next
  store float %a.1.us.1.lcssa, ptr %arrayidx7.us.1, align 4, !tbaa !5
  %indvars.iv.next.1 = or i64 %indvars.iv, 2
  %arrayidx.us.2 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.1
  %6 = load float, ptr %arrayidx.us.2, align 4, !tbaa !5
  br label %for.body3.us.2

for.body3.us.2:                                   ; preds = %for.body3.us.2, %for.cond1.for.end_crit_edge.us.1
  %i.020.us.2 = phi float [ 0.000000e+00, %for.cond1.for.end_crit_edge.us.1 ], [ %inc5.us.2, %for.body3.us.2 ]
  %a.019.us.2 = phi float [ %6, %for.cond1.for.end_crit_edge.us.1 ], [ %a.1.us.2, %for.body3.us.2 ]
  %add.us.2 = fadd float %i.020.us.2, 2.000000e+00
  %cmp4.us.2 = fcmp oeq float %add.us.2, %b
  %inc.us.2 = fadd float %a.019.us.2, 1.000000e+00
  %a.1.us.2 = select i1 %cmp4.us.2, float %a.019.us.2, float %inc.us.2
  %inc5.us.2 = fadd float %i.020.us.2, 1.000000e+00
  %cmp2.us.2 = fcmp olt float %inc5.us.2, %b
  br i1 %cmp2.us.2, label %for.body3.us.2, label %for.cond1.for.end_crit_edge.us.2, !llvm.loop !9

for.cond1.for.end_crit_edge.us.2:                 ; preds = %for.body3.us.2
  %a.1.us.2.lcssa = phi float [ %a.1.us.2, %for.body3.us.2 ]
  %arrayidx7.us.2 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.1
  store float %a.1.us.2.lcssa, ptr %arrayidx7.us.2, align 4, !tbaa !5
  %indvars.iv.next.2 = or i64 %indvars.iv, 3
  %arrayidx.us.3 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.2
  %7 = load float, ptr %arrayidx.us.3, align 4, !tbaa !5
  br label %for.body3.us.3

for.body3.us.3:                                   ; preds = %for.body3.us.3, %for.cond1.for.end_crit_edge.us.2
  %i.020.us.3 = phi float [ 0.000000e+00, %for.cond1.for.end_crit_edge.us.2 ], [ %inc5.us.3, %for.body3.us.3 ]
  %a.019.us.3 = phi float [ %7, %for.cond1.for.end_crit_edge.us.2 ], [ %a.1.us.3, %for.body3.us.3 ]
  %add.us.3 = fadd float %i.020.us.3, 2.000000e+00
  %cmp4.us.3 = fcmp oeq float %add.us.3, %b
  %inc.us.3 = fadd float %a.019.us.3, 1.000000e+00
  %a.1.us.3 = select i1 %cmp4.us.3, float %a.019.us.3, float %inc.us.3
  %inc5.us.3 = fadd float %i.020.us.3, 1.000000e+00
  %cmp2.us.3 = fcmp olt float %inc5.us.3, %b
  br i1 %cmp2.us.3, label %for.body3.us.3, label %for.cond1.for.end_crit_edge.us.3, !llvm.loop !9

for.cond1.for.end_crit_edge.us.3:                 ; preds = %for.body3.us.3
  %a.1.us.3.lcssa = phi float [ %a.1.us.3, %for.body3.us.3 ]
  %arrayidx7.us.3 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.2
  store float %a.1.us.3.lcssa, ptr %arrayidx7.us.3, align 4, !tbaa !5
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv, 4
  %niter.next.3 = add i32 %niter, 4
  %niter.ncmp.3.not = icmp eq i32 %niter.next.3, %unroll_iter
  br i1 %niter.ncmp.3.not, label %for.cond.cleanup.loopexit.unr-lcssa.loopexit, label %for.body.us, !llvm.loop !11

for.cond.cleanup.loopexit.unr-lcssa.loopexit:     ; preds = %for.cond1.for.end_crit_edge.us.3
  %indvars.iv.next.3.lcssa = phi i64 [ %indvars.iv.next.3, %for.cond1.for.end_crit_edge.us.3 ]
  br label %for.cond.cleanup.loopexit.unr-lcssa

for.cond.cleanup.loopexit.unr-lcssa:              ; preds = %for.cond.cleanup.loopexit.unr-lcssa.loopexit, %for.body.us.preheader
  %indvars.iv.unr = phi i64 [ 0, %for.body.us.preheader ], [ %indvars.iv.next.3.lcssa, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %lcmp.mod.not = icmp eq i32 %xtraiter, 0
  br i1 %lcmp.mod.not, label %for.cond.cleanup, label %for.body.us.epil.preheader

for.body.us.epil.preheader:                       ; preds = %for.cond.cleanup.loopexit.unr-lcssa
  br label %for.body.us.epil

for.body.us.epil:                                 ; preds = %for.body.us.epil.preheader, %for.cond1.for.end_crit_edge.us.epil
  %indvars.iv.epil = phi i64 [ %indvars.iv.next.epil, %for.cond1.for.end_crit_edge.us.epil ], [ %indvars.iv.unr, %for.body.us.epil.preheader ]
  %epil.iter = phi i32 [ %epil.iter.next, %for.cond1.for.end_crit_edge.us.epil ], [ 0, %for.body.us.epil.preheader ]
  %arrayidx.us.epil = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.epil
  %8 = load float, ptr %arrayidx.us.epil, align 4, !tbaa !5
  br label %for.body3.us.epil

for.body3.us.epil:                                ; preds = %for.body3.us.epil, %for.body.us.epil
  %i.020.us.epil = phi float [ 0.000000e+00, %for.body.us.epil ], [ %inc5.us.epil, %for.body3.us.epil ]
  %a.019.us.epil = phi float [ %8, %for.body.us.epil ], [ %a.1.us.epil, %for.body3.us.epil ]
  %add.us.epil = fadd float %i.020.us.epil, 2.000000e+00
  %cmp4.us.epil = fcmp oeq float %add.us.epil, %b
  %inc.us.epil = fadd float %a.019.us.epil, 1.000000e+00
  %a.1.us.epil = select i1 %cmp4.us.epil, float %a.019.us.epil, float %inc.us.epil
  %inc5.us.epil = fadd float %i.020.us.epil, 1.000000e+00
  %cmp2.us.epil = fcmp olt float %inc5.us.epil, %b
  br i1 %cmp2.us.epil, label %for.body3.us.epil, label %for.cond1.for.end_crit_edge.us.epil, !llvm.loop !9

for.cond1.for.end_crit_edge.us.epil:              ; preds = %for.body3.us.epil
  %a.1.us.epil.lcssa = phi float [ %a.1.us.epil, %for.body3.us.epil ]
  %arrayidx7.us.epil = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.epil
  store float %a.1.us.epil.lcssa, ptr %arrayidx7.us.epil, align 4, !tbaa !5
  %indvars.iv.next.epil = add nuw nsw i64 %indvars.iv.epil, 1
  %epil.iter.next = add nuw nsw i32 %epil.iter, 1
  %epil.iter.cmp.not = icmp eq i32 %epil.iter.next, %xtraiter
  br i1 %epil.iter.cmp.not, label %for.cond.cleanup.loopexit, label %for.body.us.epil, !llvm.loop !13

for.cond.cleanup.loopexit:                        ; preds = %for.cond1.for.end_crit_edge.us.epil
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit, %for.cond.cleanup.loopexit.unr-lcssa, %for.body.preheader, %entry
  ret void
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
  call void @kernel(i32 noundef 1030, ptr noundef nonnull %vla29, ptr noundef nonnull %vla130, float noundef 5.000000e+00)
  br label %for.body7

for.cond3:                                        ; preds = %for.body7
  %indvars.iv.next35 = or i64 %indvars.iv34, 1
  %arrayidx9.1 = getelementptr inbounds float, ptr %vla29, i64 %indvars.iv.next35
  %17 = load float, ptr %arrayidx9.1, align 4, !tbaa !5
  %18 = trunc i64 %indvars.iv.next35 to i32
  %19 = add nuw nsw i32 %18, 5
  %conv11.1 = sitofp i32 %19 to float
  %cmp12.1 = fcmp une float %17, %conv11.1
  br i1 %cmp12.1, label %cleanup, label %for.cond3.1

for.cond3.1:                                      ; preds = %for.cond3
  %indvars.iv.next35.1 = add nuw nsw i64 %indvars.iv34, 2
  %exitcond38.not.1 = icmp eq i64 %indvars.iv.next35.1, 1030
  br i1 %exitcond38.not.1, label %cleanup, label %for.body7, !llvm.loop !16

for.body7:                                        ; preds = %for.cond3.1, %for.body
  %indvars.iv34 = phi i64 [ 0, %for.body ], [ %indvars.iv.next35.1, %for.cond3.1 ]
  %arrayidx9 = getelementptr inbounds float, ptr %vla29, i64 %indvars.iv34
  %20 = load float, ptr %arrayidx9, align 8, !tbaa !5
  %21 = trunc i64 %indvars.iv34 to i32
  %22 = add nuw nsw i32 %21, 5
  %conv11 = sitofp i32 %22 to float
  %cmp12 = fcmp une float %20, %conv11
  br i1 %cmp12, label %cleanup, label %for.cond3

cleanup:                                          ; preds = %for.body7, %for.cond3.1, %for.cond3
  %spec.select = phi i32 [ 1, %for.body7 ], [ 1, %for.cond3 ], [ 0, %for.cond3.1 ]
  ret i32 %spec.select
}

; Function Attrs: argmemonly nofree nounwind willreturn
declare void @llvm.memcpy.p0.p0.i64(ptr noalias nocapture writeonly, ptr noalias nocapture readonly, i64, i1 immarg) #2

attributes #0 = { argmemonly nofree noinline norecurse nosync nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }
attributes #1 = { nofree norecurse nosync nounwind readnone ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }
attributes #2 = { argmemonly nofree nounwind willreturn }

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
!11 = distinct !{!11, !10, !12}
!12 = !{!"llvm.loop.unroll.disable"}
!13 = distinct !{!13, !12}
!14 = distinct !{!14, !10, !15}
!15 = !{!"llvm.loop.isvectorized", i32 1}
!16 = distinct !{!16, !10}
