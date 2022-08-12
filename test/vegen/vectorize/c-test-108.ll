; RUN: %opt -passes=global-slp -vectorize-only=kernel %s | lli
; RUN: %opt -passes=global-slp -vectorize-only=kernel -S %s | FileCheck %s

 ; CHECK:  call <8 x float> @llvm.sqrt.v8f32

source_filename = "c-test-108.c"
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: argmemonly nofree noinline nosync nounwind ssp uwtable
define void @kernel(i32 noundef %n, ptr noalias nocapture noundef writeonly %RET, ptr noalias nocapture noundef readonly %aFOO) local_unnamed_addr #0 {
entry:
  %cmp41 = icmp sgt i32 %n, 0
  br i1 %cmp41, label %for.body.preheader, label %for.cond.cleanup

for.body.preheader:                               ; preds = %entry
  %0 = add nsw i32 %n, -1
  %xtraiter = and i32 %n, 7
  %1 = icmp ult i32 %0, 7
  br i1 %1, label %for.cond.cleanup.loopexit.unr-lcssa, label %for.body.preheader.new

for.body.preheader.new:                           ; preds = %for.body.preheader
  %unroll_iter = and i32 %n, -8
  br label %for.body

for.cond.cleanup.loopexit.unr-lcssa.loopexit:     ; preds = %for.end.7
  %indvars.iv.next.7.lcssa = phi i64 [ %indvars.iv.next.7, %for.end.7 ]
  br label %for.cond.cleanup.loopexit.unr-lcssa

for.cond.cleanup.loopexit.unr-lcssa:              ; preds = %for.cond.cleanup.loopexit.unr-lcssa.loopexit, %for.body.preheader
  %indvars.iv.unr = phi i64 [ 0, %for.body.preheader ], [ %indvars.iv.next.7.lcssa, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %lcmp.mod.not = icmp eq i32 %xtraiter, 0
  br i1 %lcmp.mod.not, label %for.cond.cleanup, label %for.body.epil.preheader

for.body.epil.preheader:                          ; preds = %for.cond.cleanup.loopexit.unr-lcssa
  br label %for.body.epil

for.body.epil:                                    ; preds = %for.body.epil.preheader, %for.end.epil
  %indvars.iv.epil = phi i64 [ %indvars.iv.next.epil, %for.end.epil ], [ %indvars.iv.unr, %for.body.epil.preheader ]
  %epil.iter = phi i32 [ %epil.iter.next, %for.end.epil ], [ 0, %for.body.epil.preheader ]
  %arrayidx.epil = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.epil
  %2 = load float, ptr %arrayidx.epil, align 4, !tbaa !5
  %conv.epil = fptosi float %2 to i32
  %cmp238.epil = icmp slt i32 %conv.epil, 10
  br i1 %cmp238.epil, label %for.body4.lr.ph.epil, label %for.end.epil

for.body4.lr.ph.epil:                             ; preds = %for.body.epil
  %div.epil = fdiv float %2, 3.000000e+00
  %add12.epil = fadd float %2, 2.000000e+00
  %div13.epil = fdiv float %add12.epil, 3.000000e+00
  br label %for.body4.epil

for.body4.epil:                                   ; preds = %for.inc.epil, %for.body4.lr.ph.epil
  %j.040.epil = phi i32 [ 0, %for.body4.lr.ph.epil ], [ %j.1.epil, %for.inc.epil ]
  %i.039.epil = phi i32 [ %conv.epil, %for.body4.lr.ph.epil ], [ %inc.epil, %for.inc.epil ]
  %add.epil = add nsw i32 %i.039.epil, 2
  %conv5.epil = sitofp i32 %add.epil to float
  %div6.epil = fdiv float 1.000000e+00, %conv5.epil
  %mul.epil = fmul float %div.epil, %div6.epil
  %3 = tail call float @llvm.sqrt.f32(float %mul.epil)
  %conv7.epil = sitofp i32 %j.040.epil to float
  %add8.epil = fadd float %3, %conv7.epil
  %conv9.epil = fptosi float %add8.epil to i32
  %cmp10.epil = icmp sgt i32 %i.039.epil, 4
  br i1 %cmp10.epil, label %for.inc.epil, label %if.end.epil

if.end.epil:                                      ; preds = %for.body4.epil
  %add14.epil = add nsw i32 %i.039.epil, 3
  %conv15.epil = sitofp i32 %add14.epil to float
  %div16.epil = fdiv float 1.000000e+00, %conv15.epil
  %mul17.epil = fmul float %div13.epil, %div16.epil
  %4 = tail call float @llvm.sqrt.f32(float %mul17.epil)
  %conv18.epil = sitofp i32 %conv9.epil to float
  %add19.epil = fadd float %4, %conv18.epil
  %conv20.epil = fptosi float %add19.epil to i32
  br label %for.inc.epil

for.inc.epil:                                     ; preds = %if.end.epil, %for.body4.epil
  %j.1.epil = phi i32 [ %conv9.epil, %for.body4.epil ], [ %conv20.epil, %if.end.epil ]
  %inc.epil = add i32 %i.039.epil, 1
  %exitcond.epil.not = icmp eq i32 %inc.epil, 10
  br i1 %exitcond.epil.not, label %for.end.epil.loopexit, label %for.body4.epil, !llvm.loop !9

for.end.epil.loopexit:                            ; preds = %for.inc.epil
  %j.1.epil.lcssa = phi i32 [ %j.1.epil, %for.inc.epil ]
  br label %for.end.epil

for.end.epil:                                     ; preds = %for.end.epil.loopexit, %for.body.epil
  %j.0.lcssa.epil = phi i32 [ 0, %for.body.epil ], [ %j.1.epil.lcssa, %for.end.epil.loopexit ]
  %conv21.epil = sitofp i32 %j.0.lcssa.epil to float
  %arrayidx23.epil = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.epil
  store float %conv21.epil, ptr %arrayidx23.epil, align 4, !tbaa !5
  %indvars.iv.next.epil = add nuw nsw i64 %indvars.iv.epil, 1
  %epil.iter.next = add nuw nsw i32 %epil.iter, 1
  %epil.iter.cmp.not = icmp eq i32 %epil.iter.next, %xtraiter
  br i1 %epil.iter.cmp.not, label %for.cond.cleanup.loopexit, label %for.body.epil, !llvm.loop !11

for.cond.cleanup.loopexit:                        ; preds = %for.end.epil
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit, %for.cond.cleanup.loopexit.unr-lcssa, %entry
  ret void

for.body:                                         ; preds = %for.end.7, %for.body.preheader.new
  %indvars.iv = phi i64 [ 0, %for.body.preheader.new ], [ %indvars.iv.next.7, %for.end.7 ]
  %niter = phi i32 [ 0, %for.body.preheader.new ], [ %niter.next.7, %for.end.7 ]
  %arrayidx = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv
  %5 = load float, ptr %arrayidx, align 4, !tbaa !5
  %conv = fptosi float %5 to i32
  %cmp238 = icmp slt i32 %conv, 10
  br i1 %cmp238, label %for.body4.lr.ph, label %for.end

for.body4.lr.ph:                                  ; preds = %for.body
  %div = fdiv float %5, 3.000000e+00
  %add12 = fadd float %5, 2.000000e+00
  %div13 = fdiv float %add12, 3.000000e+00
  br label %for.body4

for.body4:                                        ; preds = %for.inc, %for.body4.lr.ph
  %j.040 = phi i32 [ 0, %for.body4.lr.ph ], [ %j.1, %for.inc ]
  %i.039 = phi i32 [ %conv, %for.body4.lr.ph ], [ %inc, %for.inc ]
  %add = add nsw i32 %i.039, 2
  %conv5 = sitofp i32 %add to float
  %div6 = fdiv float 1.000000e+00, %conv5
  %mul = fmul float %div, %div6
  %6 = tail call float @llvm.sqrt.f32(float %mul)
  %conv7 = sitofp i32 %j.040 to float
  %add8 = fadd float %6, %conv7
  %conv9 = fptosi float %add8 to i32
  %cmp10 = icmp sgt i32 %i.039, 4
  br i1 %cmp10, label %for.inc, label %if.end

if.end:                                           ; preds = %for.body4
  %add14 = add nsw i32 %i.039, 3
  %conv15 = sitofp i32 %add14 to float
  %div16 = fdiv float 1.000000e+00, %conv15
  %mul17 = fmul float %div13, %div16
  %7 = tail call float @llvm.sqrt.f32(float %mul17)
  %conv18 = sitofp i32 %conv9 to float
  %add19 = fadd float %7, %conv18
  %conv20 = fptosi float %add19 to i32
  br label %for.inc

for.inc:                                          ; preds = %if.end, %for.body4
  %j.1 = phi i32 [ %conv9, %for.body4 ], [ %conv20, %if.end ]
  %inc = add i32 %i.039, 1
  %exitcond.not = icmp eq i32 %inc, 10
  br i1 %exitcond.not, label %for.end.loopexit, label %for.body4, !llvm.loop !9

for.end.loopexit:                                 ; preds = %for.inc
  %j.1.lcssa = phi i32 [ %j.1, %for.inc ]
  br label %for.end

for.end:                                          ; preds = %for.end.loopexit, %for.body
  %j.0.lcssa = phi i32 [ 0, %for.body ], [ %j.1.lcssa, %for.end.loopexit ]
  %conv21 = sitofp i32 %j.0.lcssa to float
  %arrayidx23 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv
  store float %conv21, ptr %arrayidx23, align 4, !tbaa !5
  %indvars.iv.next = or i64 %indvars.iv, 1
  %arrayidx.1 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next
  %8 = load float, ptr %arrayidx.1, align 4, !tbaa !5
  %conv.1 = fptosi float %8 to i32
  %cmp238.1 = icmp slt i32 %conv.1, 10
  br i1 %cmp238.1, label %for.body4.lr.ph.1, label %for.end.1

for.body4.lr.ph.1:                                ; preds = %for.end
  %div.1 = fdiv float %8, 3.000000e+00
  %add12.1 = fadd float %8, 2.000000e+00
  %div13.1 = fdiv float %add12.1, 3.000000e+00
  br label %for.body4.1

for.body4.1:                                      ; preds = %for.inc.1, %for.body4.lr.ph.1
  %j.040.1 = phi i32 [ 0, %for.body4.lr.ph.1 ], [ %j.1.1, %for.inc.1 ]
  %i.039.1 = phi i32 [ %conv.1, %for.body4.lr.ph.1 ], [ %inc.1, %for.inc.1 ]
  %add.1 = add nsw i32 %i.039.1, 2
  %conv5.1 = sitofp i32 %add.1 to float
  %div6.1 = fdiv float 1.000000e+00, %conv5.1
  %mul.1 = fmul float %div.1, %div6.1
  %9 = tail call float @llvm.sqrt.f32(float %mul.1)
  %conv7.1 = sitofp i32 %j.040.1 to float
  %add8.1 = fadd float %9, %conv7.1
  %conv9.1 = fptosi float %add8.1 to i32
  %cmp10.1 = icmp sgt i32 %i.039.1, 4
  br i1 %cmp10.1, label %for.inc.1, label %if.end.1

if.end.1:                                         ; preds = %for.body4.1
  %add14.1 = add nsw i32 %i.039.1, 3
  %conv15.1 = sitofp i32 %add14.1 to float
  %div16.1 = fdiv float 1.000000e+00, %conv15.1
  %mul17.1 = fmul float %div13.1, %div16.1
  %10 = tail call float @llvm.sqrt.f32(float %mul17.1)
  %conv18.1 = sitofp i32 %conv9.1 to float
  %add19.1 = fadd float %10, %conv18.1
  %conv20.1 = fptosi float %add19.1 to i32
  br label %for.inc.1

for.inc.1:                                        ; preds = %if.end.1, %for.body4.1
  %j.1.1 = phi i32 [ %conv9.1, %for.body4.1 ], [ %conv20.1, %if.end.1 ]
  %inc.1 = add i32 %i.039.1, 1
  %exitcond.1.not = icmp eq i32 %inc.1, 10
  br i1 %exitcond.1.not, label %for.end.1.loopexit, label %for.body4.1, !llvm.loop !9

for.end.1.loopexit:                               ; preds = %for.inc.1
  %j.1.1.lcssa = phi i32 [ %j.1.1, %for.inc.1 ]
  br label %for.end.1

for.end.1:                                        ; preds = %for.end.1.loopexit, %for.end
  %j.0.lcssa.1 = phi i32 [ 0, %for.end ], [ %j.1.1.lcssa, %for.end.1.loopexit ]
  %conv21.1 = sitofp i32 %j.0.lcssa.1 to float
  %arrayidx23.1 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next
  store float %conv21.1, ptr %arrayidx23.1, align 4, !tbaa !5
  %indvars.iv.next.1 = or i64 %indvars.iv, 2
  %arrayidx.2 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.1
  %11 = load float, ptr %arrayidx.2, align 4, !tbaa !5
  %conv.2 = fptosi float %11 to i32
  %cmp238.2 = icmp slt i32 %conv.2, 10
  br i1 %cmp238.2, label %for.body4.lr.ph.2, label %for.end.2

for.body4.lr.ph.2:                                ; preds = %for.end.1
  %div.2 = fdiv float %11, 3.000000e+00
  %add12.2 = fadd float %11, 2.000000e+00
  %div13.2 = fdiv float %add12.2, 3.000000e+00
  br label %for.body4.2

for.body4.2:                                      ; preds = %for.inc.2, %for.body4.lr.ph.2
  %j.040.2 = phi i32 [ 0, %for.body4.lr.ph.2 ], [ %j.1.2, %for.inc.2 ]
  %i.039.2 = phi i32 [ %conv.2, %for.body4.lr.ph.2 ], [ %inc.2, %for.inc.2 ]
  %add.2 = add nsw i32 %i.039.2, 2
  %conv5.2 = sitofp i32 %add.2 to float
  %div6.2 = fdiv float 1.000000e+00, %conv5.2
  %mul.2 = fmul float %div.2, %div6.2
  %12 = tail call float @llvm.sqrt.f32(float %mul.2)
  %conv7.2 = sitofp i32 %j.040.2 to float
  %add8.2 = fadd float %12, %conv7.2
  %conv9.2 = fptosi float %add8.2 to i32
  %cmp10.2 = icmp sgt i32 %i.039.2, 4
  br i1 %cmp10.2, label %for.inc.2, label %if.end.2

if.end.2:                                         ; preds = %for.body4.2
  %add14.2 = add nsw i32 %i.039.2, 3
  %conv15.2 = sitofp i32 %add14.2 to float
  %div16.2 = fdiv float 1.000000e+00, %conv15.2
  %mul17.2 = fmul float %div13.2, %div16.2
  %13 = tail call float @llvm.sqrt.f32(float %mul17.2)
  %conv18.2 = sitofp i32 %conv9.2 to float
  %add19.2 = fadd float %13, %conv18.2
  %conv20.2 = fptosi float %add19.2 to i32
  br label %for.inc.2

for.inc.2:                                        ; preds = %if.end.2, %for.body4.2
  %j.1.2 = phi i32 [ %conv9.2, %for.body4.2 ], [ %conv20.2, %if.end.2 ]
  %inc.2 = add i32 %i.039.2, 1
  %exitcond.2.not = icmp eq i32 %inc.2, 10
  br i1 %exitcond.2.not, label %for.end.2.loopexit, label %for.body4.2, !llvm.loop !9

for.end.2.loopexit:                               ; preds = %for.inc.2
  %j.1.2.lcssa = phi i32 [ %j.1.2, %for.inc.2 ]
  br label %for.end.2

for.end.2:                                        ; preds = %for.end.2.loopexit, %for.end.1
  %j.0.lcssa.2 = phi i32 [ 0, %for.end.1 ], [ %j.1.2.lcssa, %for.end.2.loopexit ]
  %conv21.2 = sitofp i32 %j.0.lcssa.2 to float
  %arrayidx23.2 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.1
  store float %conv21.2, ptr %arrayidx23.2, align 4, !tbaa !5
  %indvars.iv.next.2 = or i64 %indvars.iv, 3
  %arrayidx.3 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.2
  %14 = load float, ptr %arrayidx.3, align 4, !tbaa !5
  %conv.3 = fptosi float %14 to i32
  %cmp238.3 = icmp slt i32 %conv.3, 10
  br i1 %cmp238.3, label %for.body4.lr.ph.3, label %for.end.3

for.body4.lr.ph.3:                                ; preds = %for.end.2
  %div.3 = fdiv float %14, 3.000000e+00
  %add12.3 = fadd float %14, 2.000000e+00
  %div13.3 = fdiv float %add12.3, 3.000000e+00
  br label %for.body4.3

for.body4.3:                                      ; preds = %for.inc.3, %for.body4.lr.ph.3
  %j.040.3 = phi i32 [ 0, %for.body4.lr.ph.3 ], [ %j.1.3, %for.inc.3 ]
  %i.039.3 = phi i32 [ %conv.3, %for.body4.lr.ph.3 ], [ %inc.3, %for.inc.3 ]
  %add.3 = add nsw i32 %i.039.3, 2
  %conv5.3 = sitofp i32 %add.3 to float
  %div6.3 = fdiv float 1.000000e+00, %conv5.3
  %mul.3 = fmul float %div.3, %div6.3
  %15 = tail call float @llvm.sqrt.f32(float %mul.3)
  %conv7.3 = sitofp i32 %j.040.3 to float
  %add8.3 = fadd float %15, %conv7.3
  %conv9.3 = fptosi float %add8.3 to i32
  %cmp10.3 = icmp sgt i32 %i.039.3, 4
  br i1 %cmp10.3, label %for.inc.3, label %if.end.3

if.end.3:                                         ; preds = %for.body4.3
  %add14.3 = add nsw i32 %i.039.3, 3
  %conv15.3 = sitofp i32 %add14.3 to float
  %div16.3 = fdiv float 1.000000e+00, %conv15.3
  %mul17.3 = fmul float %div13.3, %div16.3
  %16 = tail call float @llvm.sqrt.f32(float %mul17.3)
  %conv18.3 = sitofp i32 %conv9.3 to float
  %add19.3 = fadd float %16, %conv18.3
  %conv20.3 = fptosi float %add19.3 to i32
  br label %for.inc.3

for.inc.3:                                        ; preds = %if.end.3, %for.body4.3
  %j.1.3 = phi i32 [ %conv9.3, %for.body4.3 ], [ %conv20.3, %if.end.3 ]
  %inc.3 = add i32 %i.039.3, 1
  %exitcond.3.not = icmp eq i32 %inc.3, 10
  br i1 %exitcond.3.not, label %for.end.3.loopexit, label %for.body4.3, !llvm.loop !9

for.end.3.loopexit:                               ; preds = %for.inc.3
  %j.1.3.lcssa = phi i32 [ %j.1.3, %for.inc.3 ]
  br label %for.end.3

for.end.3:                                        ; preds = %for.end.3.loopexit, %for.end.2
  %j.0.lcssa.3 = phi i32 [ 0, %for.end.2 ], [ %j.1.3.lcssa, %for.end.3.loopexit ]
  %conv21.3 = sitofp i32 %j.0.lcssa.3 to float
  %arrayidx23.3 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.2
  store float %conv21.3, ptr %arrayidx23.3, align 4, !tbaa !5
  %indvars.iv.next.3 = or i64 %indvars.iv, 4
  %arrayidx.4 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.3
  %17 = load float, ptr %arrayidx.4, align 4, !tbaa !5
  %conv.4 = fptosi float %17 to i32
  %cmp238.4 = icmp slt i32 %conv.4, 10
  br i1 %cmp238.4, label %for.body4.lr.ph.4, label %for.end.4

for.body4.lr.ph.4:                                ; preds = %for.end.3
  %div.4 = fdiv float %17, 3.000000e+00
  %add12.4 = fadd float %17, 2.000000e+00
  %div13.4 = fdiv float %add12.4, 3.000000e+00
  br label %for.body4.4

for.body4.4:                                      ; preds = %for.inc.4, %for.body4.lr.ph.4
  %j.040.4 = phi i32 [ 0, %for.body4.lr.ph.4 ], [ %j.1.4, %for.inc.4 ]
  %i.039.4 = phi i32 [ %conv.4, %for.body4.lr.ph.4 ], [ %inc.4, %for.inc.4 ]
  %add.4 = add nsw i32 %i.039.4, 2
  %conv5.4 = sitofp i32 %add.4 to float
  %div6.4 = fdiv float 1.000000e+00, %conv5.4
  %mul.4 = fmul float %div.4, %div6.4
  %18 = tail call float @llvm.sqrt.f32(float %mul.4)
  %conv7.4 = sitofp i32 %j.040.4 to float
  %add8.4 = fadd float %18, %conv7.4
  %conv9.4 = fptosi float %add8.4 to i32
  %cmp10.4 = icmp sgt i32 %i.039.4, 4
  br i1 %cmp10.4, label %for.inc.4, label %if.end.4

if.end.4:                                         ; preds = %for.body4.4
  %add14.4 = add nsw i32 %i.039.4, 3
  %conv15.4 = sitofp i32 %add14.4 to float
  %div16.4 = fdiv float 1.000000e+00, %conv15.4
  %mul17.4 = fmul float %div13.4, %div16.4
  %19 = tail call float @llvm.sqrt.f32(float %mul17.4)
  %conv18.4 = sitofp i32 %conv9.4 to float
  %add19.4 = fadd float %19, %conv18.4
  %conv20.4 = fptosi float %add19.4 to i32
  br label %for.inc.4

for.inc.4:                                        ; preds = %if.end.4, %for.body4.4
  %j.1.4 = phi i32 [ %conv9.4, %for.body4.4 ], [ %conv20.4, %if.end.4 ]
  %inc.4 = add i32 %i.039.4, 1
  %exitcond.4.not = icmp eq i32 %inc.4, 10
  br i1 %exitcond.4.not, label %for.end.4.loopexit, label %for.body4.4, !llvm.loop !9

for.end.4.loopexit:                               ; preds = %for.inc.4
  %j.1.4.lcssa = phi i32 [ %j.1.4, %for.inc.4 ]
  br label %for.end.4

for.end.4:                                        ; preds = %for.end.4.loopexit, %for.end.3
  %j.0.lcssa.4 = phi i32 [ 0, %for.end.3 ], [ %j.1.4.lcssa, %for.end.4.loopexit ]
  %conv21.4 = sitofp i32 %j.0.lcssa.4 to float
  %arrayidx23.4 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.3
  store float %conv21.4, ptr %arrayidx23.4, align 4, !tbaa !5
  %indvars.iv.next.4 = or i64 %indvars.iv, 5
  %arrayidx.5 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.4
  %20 = load float, ptr %arrayidx.5, align 4, !tbaa !5
  %conv.5 = fptosi float %20 to i32
  %cmp238.5 = icmp slt i32 %conv.5, 10
  br i1 %cmp238.5, label %for.body4.lr.ph.5, label %for.end.5

for.body4.lr.ph.5:                                ; preds = %for.end.4
  %div.5 = fdiv float %20, 3.000000e+00
  %add12.5 = fadd float %20, 2.000000e+00
  %div13.5 = fdiv float %add12.5, 3.000000e+00
  br label %for.body4.5

for.body4.5:                                      ; preds = %for.inc.5, %for.body4.lr.ph.5
  %j.040.5 = phi i32 [ 0, %for.body4.lr.ph.5 ], [ %j.1.5, %for.inc.5 ]
  %i.039.5 = phi i32 [ %conv.5, %for.body4.lr.ph.5 ], [ %inc.5, %for.inc.5 ]
  %add.5 = add nsw i32 %i.039.5, 2
  %conv5.5 = sitofp i32 %add.5 to float
  %div6.5 = fdiv float 1.000000e+00, %conv5.5
  %mul.5 = fmul float %div.5, %div6.5
  %21 = tail call float @llvm.sqrt.f32(float %mul.5)
  %conv7.5 = sitofp i32 %j.040.5 to float
  %add8.5 = fadd float %21, %conv7.5
  %conv9.5 = fptosi float %add8.5 to i32
  %cmp10.5 = icmp sgt i32 %i.039.5, 4
  br i1 %cmp10.5, label %for.inc.5, label %if.end.5

if.end.5:                                         ; preds = %for.body4.5
  %add14.5 = add nsw i32 %i.039.5, 3
  %conv15.5 = sitofp i32 %add14.5 to float
  %div16.5 = fdiv float 1.000000e+00, %conv15.5
  %mul17.5 = fmul float %div13.5, %div16.5
  %22 = tail call float @llvm.sqrt.f32(float %mul17.5)
  %conv18.5 = sitofp i32 %conv9.5 to float
  %add19.5 = fadd float %22, %conv18.5
  %conv20.5 = fptosi float %add19.5 to i32
  br label %for.inc.5

for.inc.5:                                        ; preds = %if.end.5, %for.body4.5
  %j.1.5 = phi i32 [ %conv9.5, %for.body4.5 ], [ %conv20.5, %if.end.5 ]
  %inc.5 = add i32 %i.039.5, 1
  %exitcond.5.not = icmp eq i32 %inc.5, 10
  br i1 %exitcond.5.not, label %for.end.5.loopexit, label %for.body4.5, !llvm.loop !9

for.end.5.loopexit:                               ; preds = %for.inc.5
  %j.1.5.lcssa = phi i32 [ %j.1.5, %for.inc.5 ]
  br label %for.end.5

for.end.5:                                        ; preds = %for.end.5.loopexit, %for.end.4
  %j.0.lcssa.5 = phi i32 [ 0, %for.end.4 ], [ %j.1.5.lcssa, %for.end.5.loopexit ]
  %conv21.5 = sitofp i32 %j.0.lcssa.5 to float
  %arrayidx23.5 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.4
  store float %conv21.5, ptr %arrayidx23.5, align 4, !tbaa !5
  %indvars.iv.next.5 = or i64 %indvars.iv, 6
  %arrayidx.6 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.5
  %23 = load float, ptr %arrayidx.6, align 4, !tbaa !5
  %conv.6 = fptosi float %23 to i32
  %cmp238.6 = icmp slt i32 %conv.6, 10
  br i1 %cmp238.6, label %for.body4.lr.ph.6, label %for.end.6

for.body4.lr.ph.6:                                ; preds = %for.end.5
  %div.6 = fdiv float %23, 3.000000e+00
  %add12.6 = fadd float %23, 2.000000e+00
  %div13.6 = fdiv float %add12.6, 3.000000e+00
  br label %for.body4.6

for.body4.6:                                      ; preds = %for.inc.6, %for.body4.lr.ph.6
  %j.040.6 = phi i32 [ 0, %for.body4.lr.ph.6 ], [ %j.1.6, %for.inc.6 ]
  %i.039.6 = phi i32 [ %conv.6, %for.body4.lr.ph.6 ], [ %inc.6, %for.inc.6 ]
  %add.6 = add nsw i32 %i.039.6, 2
  %conv5.6 = sitofp i32 %add.6 to float
  %div6.6 = fdiv float 1.000000e+00, %conv5.6
  %mul.6 = fmul float %div.6, %div6.6
  %24 = tail call float @llvm.sqrt.f32(float %mul.6)
  %conv7.6 = sitofp i32 %j.040.6 to float
  %add8.6 = fadd float %24, %conv7.6
  %conv9.6 = fptosi float %add8.6 to i32
  %cmp10.6 = icmp sgt i32 %i.039.6, 4
  br i1 %cmp10.6, label %for.inc.6, label %if.end.6

if.end.6:                                         ; preds = %for.body4.6
  %add14.6 = add nsw i32 %i.039.6, 3
  %conv15.6 = sitofp i32 %add14.6 to float
  %div16.6 = fdiv float 1.000000e+00, %conv15.6
  %mul17.6 = fmul float %div13.6, %div16.6
  %25 = tail call float @llvm.sqrt.f32(float %mul17.6)
  %conv18.6 = sitofp i32 %conv9.6 to float
  %add19.6 = fadd float %25, %conv18.6
  %conv20.6 = fptosi float %add19.6 to i32
  br label %for.inc.6

for.inc.6:                                        ; preds = %if.end.6, %for.body4.6
  %j.1.6 = phi i32 [ %conv9.6, %for.body4.6 ], [ %conv20.6, %if.end.6 ]
  %inc.6 = add i32 %i.039.6, 1
  %exitcond.6.not = icmp eq i32 %inc.6, 10
  br i1 %exitcond.6.not, label %for.end.6.loopexit, label %for.body4.6, !llvm.loop !9

for.end.6.loopexit:                               ; preds = %for.inc.6
  %j.1.6.lcssa = phi i32 [ %j.1.6, %for.inc.6 ]
  br label %for.end.6

for.end.6:                                        ; preds = %for.end.6.loopexit, %for.end.5
  %j.0.lcssa.6 = phi i32 [ 0, %for.end.5 ], [ %j.1.6.lcssa, %for.end.6.loopexit ]
  %conv21.6 = sitofp i32 %j.0.lcssa.6 to float
  %arrayidx23.6 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.5
  store float %conv21.6, ptr %arrayidx23.6, align 4, !tbaa !5
  %indvars.iv.next.6 = or i64 %indvars.iv, 7
  %arrayidx.7 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.6
  %26 = load float, ptr %arrayidx.7, align 4, !tbaa !5
  %conv.7 = fptosi float %26 to i32
  %cmp238.7 = icmp slt i32 %conv.7, 10
  br i1 %cmp238.7, label %for.body4.lr.ph.7, label %for.end.7

for.body4.lr.ph.7:                                ; preds = %for.end.6
  %div.7 = fdiv float %26, 3.000000e+00
  %add12.7 = fadd float %26, 2.000000e+00
  %div13.7 = fdiv float %add12.7, 3.000000e+00
  br label %for.body4.7

for.body4.7:                                      ; preds = %for.inc.7, %for.body4.lr.ph.7
  %j.040.7 = phi i32 [ 0, %for.body4.lr.ph.7 ], [ %j.1.7, %for.inc.7 ]
  %i.039.7 = phi i32 [ %conv.7, %for.body4.lr.ph.7 ], [ %inc.7, %for.inc.7 ]
  %add.7 = add nsw i32 %i.039.7, 2
  %conv5.7 = sitofp i32 %add.7 to float
  %div6.7 = fdiv float 1.000000e+00, %conv5.7
  %mul.7 = fmul float %div.7, %div6.7
  %27 = tail call float @llvm.sqrt.f32(float %mul.7)
  %conv7.7 = sitofp i32 %j.040.7 to float
  %add8.7 = fadd float %27, %conv7.7
  %conv9.7 = fptosi float %add8.7 to i32
  %cmp10.7 = icmp sgt i32 %i.039.7, 4
  br i1 %cmp10.7, label %for.inc.7, label %if.end.7

if.end.7:                                         ; preds = %for.body4.7
  %add14.7 = add nsw i32 %i.039.7, 3
  %conv15.7 = sitofp i32 %add14.7 to float
  %div16.7 = fdiv float 1.000000e+00, %conv15.7
  %mul17.7 = fmul float %div13.7, %div16.7
  %28 = tail call float @llvm.sqrt.f32(float %mul17.7)
  %conv18.7 = sitofp i32 %conv9.7 to float
  %add19.7 = fadd float %28, %conv18.7
  %conv20.7 = fptosi float %add19.7 to i32
  br label %for.inc.7

for.inc.7:                                        ; preds = %if.end.7, %for.body4.7
  %j.1.7 = phi i32 [ %conv9.7, %for.body4.7 ], [ %conv20.7, %if.end.7 ]
  %inc.7 = add i32 %i.039.7, 1
  %exitcond.7.not = icmp eq i32 %inc.7, 10
  br i1 %exitcond.7.not, label %for.end.7.loopexit, label %for.body4.7, !llvm.loop !9

for.end.7.loopexit:                               ; preds = %for.inc.7
  %j.1.7.lcssa = phi i32 [ %j.1.7, %for.inc.7 ]
  br label %for.end.7

for.end.7:                                        ; preds = %for.end.7.loopexit, %for.end.6
  %j.0.lcssa.7 = phi i32 [ 0, %for.end.6 ], [ %j.1.7.lcssa, %for.end.7.loopexit ]
  %conv21.7 = sitofp i32 %j.0.lcssa.7 to float
  %arrayidx23.7 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.6
  store float %conv21.7, ptr %arrayidx23.7, align 4, !tbaa !5
  %indvars.iv.next.7 = add nuw nsw i64 %indvars.iv, 8
  %niter.next.7 = add i32 %niter, 8
  %niter.ncmp.7.not = icmp eq i32 %niter.next.7, %unroll_iter
  br i1 %niter.ncmp.7.not, label %for.cond.cleanup.loopexit.unr-lcssa.loopexit, label %for.body, !llvm.loop !13
}

; Function Attrs: nocallback nofree nosync nounwind readnone speculatable willreturn
declare float @llvm.sqrt.f32(float) #1

; Function Attrs: nofree nosync nounwind readnone ssp uwtable
define i32 @main() local_unnamed_addr #2 {
entry:
  %vla26 = alloca [1030 x float], align 16
  %vla127 = alloca [1030 x float], align 16
  br label %for.body

for.cond.cleanup:                                 ; preds = %for.body
  call void @kernel(i32 noundef 1030, ptr noundef nonnull %vla26, ptr noundef nonnull %vla127)
  br label %for.body7

for.body:                                         ; preds = %for.body, %entry
  %indvars.iv = phi i64 [ 0, %entry ], [ %indvars.iv.next.4, %for.body ]
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %0 = trunc i64 %indvars.iv.next to i32
  %conv = sitofp i32 %0 to float
  %arrayidx = getelementptr inbounds float, ptr %vla127, i64 %indvars.iv
  store float %conv, ptr %arrayidx, align 4, !tbaa !5
  %indvars.iv.next.1 = add nuw nsw i64 %indvars.iv, 2
  %1 = trunc i64 %indvars.iv.next.1 to i32
  %conv.1 = sitofp i32 %1 to float
  %arrayidx.1 = getelementptr inbounds float, ptr %vla127, i64 %indvars.iv.next
  store float %conv.1, ptr %arrayidx.1, align 4, !tbaa !5
  %indvars.iv.next.2 = add nuw nsw i64 %indvars.iv, 3
  %2 = trunc i64 %indvars.iv.next.2 to i32
  %conv.2 = sitofp i32 %2 to float
  %arrayidx.2 = getelementptr inbounds float, ptr %vla127, i64 %indvars.iv.next.1
  store float %conv.2, ptr %arrayidx.2, align 4, !tbaa !5
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv, 4
  %3 = trunc i64 %indvars.iv.next.3 to i32
  %conv.3 = sitofp i32 %3 to float
  %arrayidx.3 = getelementptr inbounds float, ptr %vla127, i64 %indvars.iv.next.2
  store float %conv.3, ptr %arrayidx.3, align 4, !tbaa !5
  %indvars.iv.next.4 = add nuw nsw i64 %indvars.iv, 5
  %4 = trunc i64 %indvars.iv.next.4 to i32
  %conv.4 = sitofp i32 %4 to float
  %arrayidx.4 = getelementptr inbounds float, ptr %vla127, i64 %indvars.iv.next.3
  store float %conv.4, ptr %arrayidx.4, align 4, !tbaa !5
  %exitcond.not.4 = icmp eq i64 %indvars.iv.next.4, 1030
  br i1 %exitcond.not.4, label %for.cond.cleanup, label %for.body, !llvm.loop !14

for.cond3:                                        ; preds = %for.body7
  %indvars.iv.next32 = add nuw nsw i64 %indvars.iv31, 1
  %arrayidx9.1 = getelementptr inbounds float, ptr %vla26, i64 %indvars.iv.next32
  %5 = load float, ptr %arrayidx9.1, align 4, !tbaa !5
  %cmp10.1 = fcmp une float %5, 0.000000e+00
  br i1 %cmp10.1, label %cleanup, label %for.cond3.1

for.cond3.1:                                      ; preds = %for.cond3
  %indvars.iv.next32.1 = add nuw nsw i64 %indvars.iv31, 2
  %arrayidx9.2 = getelementptr inbounds float, ptr %vla26, i64 %indvars.iv.next32.1
  %6 = load float, ptr %arrayidx9.2, align 4, !tbaa !5
  %cmp10.2 = fcmp une float %6, 0.000000e+00
  br i1 %cmp10.2, label %cleanup, label %for.cond3.2

for.cond3.2:                                      ; preds = %for.cond3.1
  %indvars.iv.next32.2 = add nuw nsw i64 %indvars.iv31, 3
  %arrayidx9.3 = getelementptr inbounds float, ptr %vla26, i64 %indvars.iv.next32.2
  %7 = load float, ptr %arrayidx9.3, align 4, !tbaa !5
  %cmp10.3 = fcmp une float %7, 0.000000e+00
  br i1 %cmp10.3, label %cleanup, label %for.cond3.3

for.cond3.3:                                      ; preds = %for.cond3.2
  %indvars.iv.next32.3 = add nuw nsw i64 %indvars.iv31, 4
  %arrayidx9.4 = getelementptr inbounds float, ptr %vla26, i64 %indvars.iv.next32.3
  %8 = load float, ptr %arrayidx9.4, align 4, !tbaa !5
  %cmp10.4 = fcmp une float %8, 0.000000e+00
  br i1 %cmp10.4, label %cleanup, label %for.cond3.4

for.cond3.4:                                      ; preds = %for.cond3.3
  %indvars.iv.next32.4 = add nuw nsw i64 %indvars.iv31, 5
  %exitcond34.not.4 = icmp eq i64 %indvars.iv.next32.4, 1030
  br i1 %exitcond34.not.4, label %cleanup, label %for.body7, !llvm.loop !15

for.body7:                                        ; preds = %for.cond3.4, %for.cond.cleanup
  %indvars.iv31 = phi i64 [ 0, %for.cond.cleanup ], [ %indvars.iv.next32.4, %for.cond3.4 ]
  %arrayidx9 = getelementptr inbounds float, ptr %vla26, i64 %indvars.iv31
  %9 = load float, ptr %arrayidx9, align 4, !tbaa !5
  %cmp10 = fcmp une float %9, 0.000000e+00
  br i1 %cmp10, label %cleanup, label %for.cond3

cleanup:                                          ; preds = %for.body7, %for.cond3.4, %for.cond3.3, %for.cond3.2, %for.cond3.1, %for.cond3
  %spec.select = phi i32 [ 1, %for.body7 ], [ 1, %for.cond3 ], [ 1, %for.cond3.1 ], [ 1, %for.cond3.2 ], [ 1, %for.cond3.3 ], [ 0, %for.cond3.4 ]
  ret i32 %spec.select
}

attributes #0 = { argmemonly nofree noinline nosync nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nosync nounwind readnone speculatable willreturn }
attributes #2 = { nofree nosync nounwind readnone ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

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
!14 = distinct !{!14, !10}
!15 = distinct !{!15, !10}
