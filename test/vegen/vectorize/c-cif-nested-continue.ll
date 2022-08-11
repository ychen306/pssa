; RUN: %opt -passes=global-slp %s -S -vectorize-only=kernel | FileCheck %s
; RUN: %opt -passes=global-slp %s -S -vectorize-only=kernel | lli

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; CHECK:  sitofp <4 x i32>
; CHECK-NEXT:  fcmp ogt <4 x float>

; Function Attrs: argmemonly nofree noinline norecurse nosync nounwind ssp uwtable
define void @kernel(i32 noundef %n, ptr noalias nocapture noundef writeonly %RET, ptr noalias nocapture noundef readonly %aFOO) local_unnamed_addr #0 {
entry:
  %cmp29 = icmp sgt i32 %n, 0
  br i1 %cmp29, label %for.body.preheader, label %for.cond.cleanup

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
  %.fr.epil = freeze float %2
  %cmp226.epil = fcmp ogt float %.fr.epil, 0.000000e+00
  br i1 %cmp226.epil, label %for.body4.lr.ph.epil, label %for.end.epil

for.body4.lr.ph.epil:                             ; preds = %for.body.epil
  %cmp9.epil = fcmp une float %.fr.epil, 2.000000e+00
  br i1 %cmp9.epil, label %for.body4.us.epil.preheader, label %for.end.epil

for.body4.us.epil.preheader:                      ; preds = %for.body4.lr.ph.epil
  br label %for.body4.us.epil

for.body4.us.epil:                                ; preds = %for.body4.us.epil.preheader, %for.body4.us.epil
  %r.028.us.epil = phi float [ %r.2.us.epil, %for.body4.us.epil ], [ 0.000000e+00, %for.body4.us.epil.preheader ]
  %i.027.us.epil = phi i32 [ %inc13.us.epil, %for.body4.us.epil ], [ 0, %for.body4.us.epil.preheader ]
  %cmp6.not.us.epil = icmp eq i32 %i.027.us.epil, 0
  %inc.us.epil = fadd float %r.028.us.epil, 1.000000e+00
  %r.2.us.epil = select i1 %cmp6.not.us.epil, float %inc.us.epil, float %r.028.us.epil
  %inc13.us.epil = add nuw nsw i32 %i.027.us.epil, 1
  %conv.us.epil = sitofp i32 %inc13.us.epil to float
  %cmp2.us.epil = fcmp ogt float %.fr.epil, %conv.us.epil
  br i1 %cmp2.us.epil, label %for.body4.us.epil, label %for.end.epil.loopexit, !llvm.loop !9

for.end.epil.loopexit:                            ; preds = %for.body4.us.epil
  %r.2.us.epil.lcssa = phi float [ %r.2.us.epil, %for.body4.us.epil ]
  br label %for.end.epil

for.end.epil:                                     ; preds = %for.end.epil.loopexit, %for.body4.lr.ph.epil, %for.body.epil
  %r.0.lcssa.epil = phi float [ 0.000000e+00, %for.body.epil ], [ 1.100000e+01, %for.body4.lr.ph.epil ], [ %r.2.us.epil.lcssa, %for.end.epil.loopexit ]
  %arrayidx15.epil = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.epil
  store float %r.0.lcssa.epil, ptr %arrayidx15.epil, align 4, !tbaa !5
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
  %.fr = freeze float %3
  %cmp226 = fcmp ogt float %.fr, 0.000000e+00
  br i1 %cmp226, label %for.body4.lr.ph, label %for.end

for.body4.lr.ph:                                  ; preds = %for.body
  %cmp9 = fcmp une float %.fr, 2.000000e+00
  br i1 %cmp9, label %for.body4.us.preheader, label %for.end

for.body4.us.preheader:                           ; preds = %for.body4.lr.ph
  br label %for.body4.us

for.body4.us:                                     ; preds = %for.body4.us.preheader, %for.body4.us
  %r.028.us = phi float [ %r.2.us, %for.body4.us ], [ 0.000000e+00, %for.body4.us.preheader ]
  %i.027.us = phi i32 [ %inc13.us, %for.body4.us ], [ 0, %for.body4.us.preheader ]
  %cmp6.not.us = icmp eq i32 %i.027.us, 0
  %inc.us = fadd float %r.028.us, 1.000000e+00
  %r.2.us = select i1 %cmp6.not.us, float %inc.us, float %r.028.us
  %inc13.us = add nuw nsw i32 %i.027.us, 1
  %conv.us = sitofp i32 %inc13.us to float
  %cmp2.us = fcmp ogt float %.fr, %conv.us
  br i1 %cmp2.us, label %for.body4.us, label %for.end.loopexit, !llvm.loop !9

for.end.loopexit:                                 ; preds = %for.body4.us
  %r.2.us.lcssa = phi float [ %r.2.us, %for.body4.us ]
  br label %for.end

for.end:                                          ; preds = %for.end.loopexit, %for.body4.lr.ph, %for.body
  %r.0.lcssa = phi float [ 0.000000e+00, %for.body ], [ 1.100000e+01, %for.body4.lr.ph ], [ %r.2.us.lcssa, %for.end.loopexit ]
  %arrayidx15 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv
  store float %r.0.lcssa, ptr %arrayidx15, align 4, !tbaa !5
  %indvars.iv.next = or i64 %indvars.iv, 1
  %arrayidx.1 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next
  %4 = load float, ptr %arrayidx.1, align 4, !tbaa !5
  %.fr.1 = freeze float %4
  %cmp226.1 = fcmp ogt float %.fr.1, 0.000000e+00
  br i1 %cmp226.1, label %for.body4.lr.ph.1, label %for.end.1

for.body4.lr.ph.1:                                ; preds = %for.end
  %cmp9.1 = fcmp une float %.fr.1, 2.000000e+00
  br i1 %cmp9.1, label %for.body4.us.1.preheader, label %for.end.1

for.body4.us.1.preheader:                         ; preds = %for.body4.lr.ph.1
  br label %for.body4.us.1

for.body4.us.1:                                   ; preds = %for.body4.us.1.preheader, %for.body4.us.1
  %r.028.us.1 = phi float [ %r.2.us.1, %for.body4.us.1 ], [ 0.000000e+00, %for.body4.us.1.preheader ]
  %i.027.us.1 = phi i32 [ %inc13.us.1, %for.body4.us.1 ], [ 0, %for.body4.us.1.preheader ]
  %cmp6.not.us.1 = icmp eq i32 %i.027.us.1, 0
  %inc.us.1 = fadd float %r.028.us.1, 1.000000e+00
  %r.2.us.1 = select i1 %cmp6.not.us.1, float %inc.us.1, float %r.028.us.1
  %inc13.us.1 = add nuw nsw i32 %i.027.us.1, 1
  %conv.us.1 = sitofp i32 %inc13.us.1 to float
  %cmp2.us.1 = fcmp ogt float %.fr.1, %conv.us.1
  br i1 %cmp2.us.1, label %for.body4.us.1, label %for.end.1.loopexit, !llvm.loop !9

for.end.1.loopexit:                               ; preds = %for.body4.us.1
  %r.2.us.1.lcssa = phi float [ %r.2.us.1, %for.body4.us.1 ]
  br label %for.end.1

for.end.1:                                        ; preds = %for.end.1.loopexit, %for.body4.lr.ph.1, %for.end
  %r.0.lcssa.1 = phi float [ 0.000000e+00, %for.end ], [ 1.100000e+01, %for.body4.lr.ph.1 ], [ %r.2.us.1.lcssa, %for.end.1.loopexit ]
  %arrayidx15.1 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next
  store float %r.0.lcssa.1, ptr %arrayidx15.1, align 4, !tbaa !5
  %indvars.iv.next.1 = or i64 %indvars.iv, 2
  %arrayidx.2 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.1
  %5 = load float, ptr %arrayidx.2, align 4, !tbaa !5
  %.fr.2 = freeze float %5
  %cmp226.2 = fcmp ogt float %.fr.2, 0.000000e+00
  br i1 %cmp226.2, label %for.body4.lr.ph.2, label %for.end.2

for.body4.lr.ph.2:                                ; preds = %for.end.1
  %cmp9.2 = fcmp une float %.fr.2, 2.000000e+00
  br i1 %cmp9.2, label %for.body4.us.2.preheader, label %for.end.2

for.body4.us.2.preheader:                         ; preds = %for.body4.lr.ph.2
  br label %for.body4.us.2

for.body4.us.2:                                   ; preds = %for.body4.us.2.preheader, %for.body4.us.2
  %r.028.us.2 = phi float [ %r.2.us.2, %for.body4.us.2 ], [ 0.000000e+00, %for.body4.us.2.preheader ]
  %i.027.us.2 = phi i32 [ %inc13.us.2, %for.body4.us.2 ], [ 0, %for.body4.us.2.preheader ]
  %cmp6.not.us.2 = icmp eq i32 %i.027.us.2, 0
  %inc.us.2 = fadd float %r.028.us.2, 1.000000e+00
  %r.2.us.2 = select i1 %cmp6.not.us.2, float %inc.us.2, float %r.028.us.2
  %inc13.us.2 = add nuw nsw i32 %i.027.us.2, 1
  %conv.us.2 = sitofp i32 %inc13.us.2 to float
  %cmp2.us.2 = fcmp ogt float %.fr.2, %conv.us.2
  br i1 %cmp2.us.2, label %for.body4.us.2, label %for.end.2.loopexit, !llvm.loop !9

for.end.2.loopexit:                               ; preds = %for.body4.us.2
  %r.2.us.2.lcssa = phi float [ %r.2.us.2, %for.body4.us.2 ]
  br label %for.end.2

for.end.2:                                        ; preds = %for.end.2.loopexit, %for.body4.lr.ph.2, %for.end.1
  %r.0.lcssa.2 = phi float [ 0.000000e+00, %for.end.1 ], [ 1.100000e+01, %for.body4.lr.ph.2 ], [ %r.2.us.2.lcssa, %for.end.2.loopexit ]
  %arrayidx15.2 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.1
  store float %r.0.lcssa.2, ptr %arrayidx15.2, align 4, !tbaa !5
  %indvars.iv.next.2 = or i64 %indvars.iv, 3
  %arrayidx.3 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.2
  %6 = load float, ptr %arrayidx.3, align 4, !tbaa !5
  %.fr.3 = freeze float %6
  %cmp226.3 = fcmp ogt float %.fr.3, 0.000000e+00
  br i1 %cmp226.3, label %for.body4.lr.ph.3, label %for.end.3

for.body4.lr.ph.3:                                ; preds = %for.end.2
  %cmp9.3 = fcmp une float %.fr.3, 2.000000e+00
  br i1 %cmp9.3, label %for.body4.us.3.preheader, label %for.end.3

for.body4.us.3.preheader:                         ; preds = %for.body4.lr.ph.3
  br label %for.body4.us.3

for.body4.us.3:                                   ; preds = %for.body4.us.3.preheader, %for.body4.us.3
  %r.028.us.3 = phi float [ %r.2.us.3, %for.body4.us.3 ], [ 0.000000e+00, %for.body4.us.3.preheader ]
  %i.027.us.3 = phi i32 [ %inc13.us.3, %for.body4.us.3 ], [ 0, %for.body4.us.3.preheader ]
  %cmp6.not.us.3 = icmp eq i32 %i.027.us.3, 0
  %inc.us.3 = fadd float %r.028.us.3, 1.000000e+00
  %r.2.us.3 = select i1 %cmp6.not.us.3, float %inc.us.3, float %r.028.us.3
  %inc13.us.3 = add nuw nsw i32 %i.027.us.3, 1
  %conv.us.3 = sitofp i32 %inc13.us.3 to float
  %cmp2.us.3 = fcmp ogt float %.fr.3, %conv.us.3
  br i1 %cmp2.us.3, label %for.body4.us.3, label %for.end.3.loopexit, !llvm.loop !9

for.end.3.loopexit:                               ; preds = %for.body4.us.3
  %r.2.us.3.lcssa = phi float [ %r.2.us.3, %for.body4.us.3 ]
  br label %for.end.3

for.end.3:                                        ; preds = %for.end.3.loopexit, %for.body4.lr.ph.3, %for.end.2
  %r.0.lcssa.3 = phi float [ 0.000000e+00, %for.end.2 ], [ 1.100000e+01, %for.body4.lr.ph.3 ], [ %r.2.us.3.lcssa, %for.end.3.loopexit ]
  %arrayidx15.3 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.2
  store float %r.0.lcssa.3, ptr %arrayidx15.3, align 4, !tbaa !5
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv, 4
  %niter.next.3 = add i32 %niter, 4
  %niter.ncmp.3.not = icmp eq i32 %niter.next.3, %unroll_iter
  br i1 %niter.ncmp.3.not, label %for.cond.cleanup.loopexit.unr-lcssa.loopexit, label %for.body, !llvm.loop !13
}

; Function Attrs: nofree norecurse nosync nounwind readnone ssp uwtable
define i32 @main() local_unnamed_addr #1 {
entry:
  %vla44 = alloca [1030 x float], align 16
  %vla145 = alloca [1030 x float], align 16
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
  %6 = getelementptr inbounds float, ptr %vla145, i64 %index
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
  %14 = getelementptr inbounds float, ptr %vla145, i64 %index.next
  store <4 x float> %12, ptr %14, align 16, !tbaa !5
  %15 = getelementptr inbounds float, ptr %14, i64 4
  store <4 x float> %13, ptr %15, align 16, !tbaa !5
  %index.next.1 = add nuw nsw i64 %index, 16
  %vec.ind.next.1 = add <4 x i64> %vec.ind, <i64 16, i64 16, i64 16, i64 16>
  %16 = icmp eq i64 %index.next.1, 1024
  br i1 %16, label %for.body, label %vector.body, !llvm.loop !14

for.body:                                         ; preds = %vector.body
  %arrayidx = getelementptr inbounds float, ptr %vla145, i64 1024
  store float 1.025000e+03, ptr %arrayidx, align 16, !tbaa !5
  %arrayidx.1 = getelementptr inbounds float, ptr %vla145, i64 1025
  store float 1.026000e+03, ptr %arrayidx.1, align 4, !tbaa !5
  %arrayidx.2 = getelementptr inbounds float, ptr %vla145, i64 1026
  store float 1.027000e+03, ptr %arrayidx.2, align 8, !tbaa !5
  %arrayidx.3 = getelementptr inbounds float, ptr %vla145, i64 1027
  store float 1.028000e+03, ptr %arrayidx.3, align 4, !tbaa !5
  %arrayidx.4 = getelementptr inbounds float, ptr %vla145, i64 1028
  store float 1.029000e+03, ptr %arrayidx.4, align 16, !tbaa !5
  %arrayidx.5 = getelementptr inbounds float, ptr %vla145, i64 1029
  store float 1.030000e+03, ptr %arrayidx.5, align 4, !tbaa !5
  call void @kernel(i32 noundef 1030, ptr noundef nonnull %vla44, ptr noundef nonnull %vla145)
  %arrayidx12 = getelementptr inbounds float, ptr %vla44, i64 1
  %17 = load float, ptr %arrayidx12, align 4
  %cmp14 = fcmp une float %17, 1.100000e+01
  br label %for.body7

for.body7:                                        ; preds = %for.inc27.1, %for.body
  %indvars.iv49 = phi i64 [ 0, %for.body ], [ %indvars.iv.next50.1, %for.inc27.1 ]
  %arrayidx21 = getelementptr inbounds float, ptr %vla44, i64 %indvars.iv49
  %18 = load float, ptr %arrayidx21, align 8, !tbaa !5
  %cmp23 = fcmp une float %18, 1.000000e+00
  br i1 %cmp23, label %cleanup, label %for.inc27

for.inc27:                                        ; preds = %for.body7
  %cond.1 = icmp eq i64 %indvars.iv49, 0
  br i1 %cond.1, label %land.lhs.true.1, label %land.lhs.true19.1

land.lhs.true19.1:                                ; preds = %for.inc27
  %indvars.iv.next50 = or i64 %indvars.iv49, 1
  %arrayidx21.1 = getelementptr inbounds float, ptr %vla44, i64 %indvars.iv.next50
  %19 = load float, ptr %arrayidx21.1, align 4, !tbaa !5
  %cmp23.1 = fcmp une float %19, 1.000000e+00
  br i1 %cmp23.1, label %cleanup, label %for.inc27.1

land.lhs.true.1:                                  ; preds = %for.inc27
  br i1 %cmp14, label %cleanup, label %for.inc27.1

for.inc27.1:                                      ; preds = %land.lhs.true.1, %land.lhs.true19.1
  %indvars.iv.next50.1 = add nuw nsw i64 %indvars.iv49, 2
  %exitcond52.not.1 = icmp eq i64 %indvars.iv.next50.1, 1030
  br i1 %exitcond52.not.1, label %cleanup, label %for.body7, !llvm.loop !16

cleanup:                                          ; preds = %for.inc27.1, %land.lhs.true.1, %land.lhs.true19.1, %for.body7
  %spec.select = phi i32 [ 1, %for.body7 ], [ 1, %land.lhs.true19.1 ], [ 1, %land.lhs.true.1 ], [ 0, %for.inc27.1 ]
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
