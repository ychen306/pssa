; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=global-slp,adce,simplifycfg | FileCheck %s
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; CHECK: fmul <8 x float>
; CHECK: fmul <8 x float>
; CHECK: fmul <8 x float>
; CHECK: fmul <8 x float>

; Function Attrs: argmemonly nofree norecurse nosync nounwind ssp uwtable
define void @s212(i32 noundef %LEN, ptr noalias nocapture noundef %a, ptr noalias nocapture noundef %b, ptr noalias nocapture noundef readonly %c, ptr noalias nocapture noundef readonly %d) local_unnamed_addr #0 {
entry:
  %cmp18 = icmp sgt i32 %LEN, 1
  br i1 %cmp18, label %for.body.preheader, label %for.cond.cleanup

for.body.preheader:                               ; preds = %entry
  %sub = add nsw i32 %LEN, -1
  %wide.trip.count = zext i32 %sub to i64
  %.pre = load float, ptr %a, align 4, !tbaa !5
  %0 = add nsw i64 %wide.trip.count, -1
  %xtraiter = and i64 %wide.trip.count, 15
  %1 = icmp ult i64 %0, 15
  br i1 %1, label %for.cond.cleanup.loopexit.unr-lcssa, label %for.body.preheader.new

for.body.preheader.new:                           ; preds = %for.body.preheader
  %unroll_iter = sub i64 %wide.trip.count, %xtraiter
  br label %for.body

for.cond.cleanup.loopexit.unr-lcssa.loopexit:     ; preds = %for.body
  %.unr.ph = phi float [ %69, %for.body ]
  %indvars.iv.unr.ph = phi i64 [ %indvars.iv.next.15, %for.body ]
  br label %for.cond.cleanup.loopexit.unr-lcssa

for.cond.cleanup.loopexit.unr-lcssa:              ; preds = %for.cond.cleanup.loopexit.unr-lcssa.loopexit, %for.body.preheader
  %.unr = phi float [ %.pre, %for.body.preheader ], [ %.unr.ph, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %indvars.iv.unr = phi i64 [ 0, %for.body.preheader ], [ %indvars.iv.unr.ph, %for.cond.cleanup.loopexit.unr-lcssa.loopexit ]
  %lcmp.mod = icmp ne i64 %xtraiter, 0
  br i1 %lcmp.mod, label %for.body.epil.preheader, label %for.cond.cleanup.loopexit

for.body.epil.preheader:                          ; preds = %for.cond.cleanup.loopexit.unr-lcssa
  br label %for.body.epil

for.body.epil:                                    ; preds = %for.body.epil, %for.body.epil.preheader
  %2 = phi float [ %.unr, %for.body.epil.preheader ], [ %4, %for.body.epil ]
  %indvars.iv.epil = phi i64 [ %indvars.iv.unr, %for.body.epil.preheader ], [ %indvars.iv.next.epil, %for.body.epil ]
  %epil.iter = phi i64 [ 0, %for.body.epil.preheader ], [ %epil.iter.next, %for.body.epil ]
  %arrayidx.epil = getelementptr inbounds float, ptr %c, i64 %indvars.iv.epil
  %3 = load float, ptr %arrayidx.epil, align 4, !tbaa !5
  %arrayidx2.epil = getelementptr inbounds float, ptr %a, i64 %indvars.iv.epil
  %mul.epil = fmul fast float %2, %3
  store float %mul.epil, ptr %arrayidx2.epil, align 4, !tbaa !5
  %indvars.iv.next.epil = add nuw nsw i64 %indvars.iv.epil, 1
  %arrayidx4.epil = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.epil
  %4 = load float, ptr %arrayidx4.epil, align 4, !tbaa !5
  %arrayidx6.epil = getelementptr inbounds float, ptr %d, i64 %indvars.iv.epil
  %5 = load float, ptr %arrayidx6.epil, align 4, !tbaa !5
  %mul7.epil = fmul fast float %5, %4
  %arrayidx9.epil = getelementptr inbounds float, ptr %b, i64 %indvars.iv.epil
  %6 = load float, ptr %arrayidx9.epil, align 4, !tbaa !5
  %add10.epil = fadd fast float %6, %mul7.epil
  store float %add10.epil, ptr %arrayidx9.epil, align 4, !tbaa !5
  %exitcond.not.epil = icmp eq i64 %indvars.iv.next.epil, %wide.trip.count
  %epil.iter.next = add i64 %epil.iter, 1
  %epil.iter.cmp = icmp ne i64 %epil.iter.next, %xtraiter
  br i1 %epil.iter.cmp, label %for.body.epil, label %for.cond.cleanup.loopexit.epilog-lcssa, !llvm.loop !9

for.cond.cleanup.loopexit.epilog-lcssa:           ; preds = %for.body.epil
  br label %for.cond.cleanup.loopexit

for.cond.cleanup.loopexit:                        ; preds = %for.cond.cleanup.loopexit.unr-lcssa, %for.cond.cleanup.loopexit.epilog-lcssa
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit, %entry
  ret void

for.body:                                         ; preds = %for.body, %for.body.preheader.new
  %7 = phi float [ %.pre, %for.body.preheader.new ], [ %69, %for.body ]
  %indvars.iv = phi i64 [ 0, %for.body.preheader.new ], [ %indvars.iv.next.15, %for.body ]
  %niter = phi i64 [ 0, %for.body.preheader.new ], [ %niter.next.15, %for.body ]
  %arrayidx = getelementptr inbounds float, ptr %c, i64 %indvars.iv
  %8 = load float, ptr %arrayidx, align 4, !tbaa !5
  %arrayidx2 = getelementptr inbounds float, ptr %a, i64 %indvars.iv
  %mul = fmul fast float %7, %8
  store float %mul, ptr %arrayidx2, align 4, !tbaa !5
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %arrayidx4 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next
  %9 = load float, ptr %arrayidx4, align 4, !tbaa !5
  %arrayidx6 = getelementptr inbounds float, ptr %d, i64 %indvars.iv
  %10 = load float, ptr %arrayidx6, align 4, !tbaa !5
  %mul7 = fmul fast float %10, %9
  %arrayidx9 = getelementptr inbounds float, ptr %b, i64 %indvars.iv
  %11 = load float, ptr %arrayidx9, align 4, !tbaa !5
  %add10 = fadd fast float %11, %mul7
  store float %add10, ptr %arrayidx9, align 4, !tbaa !5
  %niter.next = add nuw nsw i64 %niter, 1
  %arrayidx.1 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next
  %12 = load float, ptr %arrayidx.1, align 4, !tbaa !5
  %arrayidx2.1 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next
  %mul.1 = fmul fast float %9, %12
  store float %mul.1, ptr %arrayidx2.1, align 4, !tbaa !5
  %indvars.iv.next.1 = add nuw nsw i64 %indvars.iv.next, 1
  %arrayidx4.1 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.1
  %13 = load float, ptr %arrayidx4.1, align 4, !tbaa !5
  %arrayidx6.1 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next
  %14 = load float, ptr %arrayidx6.1, align 4, !tbaa !5
  %mul7.1 = fmul fast float %14, %13
  %arrayidx9.1 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next
  %15 = load float, ptr %arrayidx9.1, align 4, !tbaa !5
  %add10.1 = fadd fast float %15, %mul7.1
  store float %add10.1, ptr %arrayidx9.1, align 4, !tbaa !5
  %niter.next.1 = add nuw nsw i64 %niter.next, 1
  %arrayidx.2 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.1
  %16 = load float, ptr %arrayidx.2, align 4, !tbaa !5
  %arrayidx2.2 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.1
  %mul.2 = fmul fast float %13, %16
  store float %mul.2, ptr %arrayidx2.2, align 4, !tbaa !5
  %indvars.iv.next.2 = add nuw nsw i64 %indvars.iv.next.1, 1
  %arrayidx4.2 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.2
  %17 = load float, ptr %arrayidx4.2, align 4, !tbaa !5
  %arrayidx6.2 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.1
  %18 = load float, ptr %arrayidx6.2, align 4, !tbaa !5
  %mul7.2 = fmul fast float %18, %17
  %arrayidx9.2 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.1
  %19 = load float, ptr %arrayidx9.2, align 4, !tbaa !5
  %add10.2 = fadd fast float %19, %mul7.2
  store float %add10.2, ptr %arrayidx9.2, align 4, !tbaa !5
  %niter.next.2 = add nuw nsw i64 %niter.next.1, 1
  %arrayidx.3 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.2
  %20 = load float, ptr %arrayidx.3, align 4, !tbaa !5
  %arrayidx2.3 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.2
  %mul.3 = fmul fast float %17, %20
  store float %mul.3, ptr %arrayidx2.3, align 4, !tbaa !5
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv.next.2, 1
  %arrayidx4.3 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.3
  %21 = load float, ptr %arrayidx4.3, align 4, !tbaa !5
  %arrayidx6.3 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.2
  %22 = load float, ptr %arrayidx6.3, align 4, !tbaa !5
  %mul7.3 = fmul fast float %22, %21
  %arrayidx9.3 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.2
  %23 = load float, ptr %arrayidx9.3, align 4, !tbaa !5
  %add10.3 = fadd fast float %23, %mul7.3
  store float %add10.3, ptr %arrayidx9.3, align 4, !tbaa !5
  %niter.next.3 = add nuw nsw i64 %niter.next.2, 1
  %arrayidx.4 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.3
  %24 = load float, ptr %arrayidx.4, align 4, !tbaa !5
  %arrayidx2.4 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.3
  %mul.4 = fmul fast float %21, %24
  store float %mul.4, ptr %arrayidx2.4, align 4, !tbaa !5
  %indvars.iv.next.4 = add nuw nsw i64 %indvars.iv.next.3, 1
  %arrayidx4.4 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.4
  %25 = load float, ptr %arrayidx4.4, align 4, !tbaa !5
  %arrayidx6.4 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.3
  %26 = load float, ptr %arrayidx6.4, align 4, !tbaa !5
  %mul7.4 = fmul fast float %26, %25
  %arrayidx9.4 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.3
  %27 = load float, ptr %arrayidx9.4, align 4, !tbaa !5
  %add10.4 = fadd fast float %27, %mul7.4
  store float %add10.4, ptr %arrayidx9.4, align 4, !tbaa !5
  %niter.next.4 = add nuw nsw i64 %niter.next.3, 1
  %arrayidx.5 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.4
  %28 = load float, ptr %arrayidx.5, align 4, !tbaa !5
  %arrayidx2.5 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.4
  %mul.5 = fmul fast float %25, %28
  store float %mul.5, ptr %arrayidx2.5, align 4, !tbaa !5
  %indvars.iv.next.5 = add nuw nsw i64 %indvars.iv.next.4, 1
  %arrayidx4.5 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.5
  %29 = load float, ptr %arrayidx4.5, align 4, !tbaa !5
  %arrayidx6.5 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.4
  %30 = load float, ptr %arrayidx6.5, align 4, !tbaa !5
  %mul7.5 = fmul fast float %30, %29
  %arrayidx9.5 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.4
  %31 = load float, ptr %arrayidx9.5, align 4, !tbaa !5
  %add10.5 = fadd fast float %31, %mul7.5
  store float %add10.5, ptr %arrayidx9.5, align 4, !tbaa !5
  %niter.next.5 = add nuw nsw i64 %niter.next.4, 1
  %arrayidx.6 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.5
  %32 = load float, ptr %arrayidx.6, align 4, !tbaa !5
  %arrayidx2.6 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.5
  %mul.6 = fmul fast float %29, %32
  store float %mul.6, ptr %arrayidx2.6, align 4, !tbaa !5
  %indvars.iv.next.6 = add nuw nsw i64 %indvars.iv.next.5, 1
  %arrayidx4.6 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.6
  %33 = load float, ptr %arrayidx4.6, align 4, !tbaa !5
  %arrayidx6.6 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.5
  %34 = load float, ptr %arrayidx6.6, align 4, !tbaa !5
  %mul7.6 = fmul fast float %34, %33
  %arrayidx9.6 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.5
  %35 = load float, ptr %arrayidx9.6, align 4, !tbaa !5
  %add10.6 = fadd fast float %35, %mul7.6
  store float %add10.6, ptr %arrayidx9.6, align 4, !tbaa !5
  %niter.next.6 = add nuw nsw i64 %niter.next.5, 1
  %arrayidx.7 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.6
  %36 = load float, ptr %arrayidx.7, align 4, !tbaa !5
  %arrayidx2.7 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.6
  %mul.7 = fmul fast float %33, %36
  store float %mul.7, ptr %arrayidx2.7, align 4, !tbaa !5
  %indvars.iv.next.7 = add nuw nsw i64 %indvars.iv.next.6, 1
  %arrayidx4.7 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.7
  %37 = load float, ptr %arrayidx4.7, align 4, !tbaa !5
  %arrayidx6.7 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.6
  %38 = load float, ptr %arrayidx6.7, align 4, !tbaa !5
  %mul7.7 = fmul fast float %38, %37
  %arrayidx9.7 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.6
  %39 = load float, ptr %arrayidx9.7, align 4, !tbaa !5
  %add10.7 = fadd fast float %39, %mul7.7
  store float %add10.7, ptr %arrayidx9.7, align 4, !tbaa !5
  %niter.next.7 = add nuw nsw i64 %niter.next.6, 1
  %arrayidx.8 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.7
  %40 = load float, ptr %arrayidx.8, align 4, !tbaa !5
  %arrayidx2.8 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.7
  %mul.8 = fmul fast float %37, %40
  store float %mul.8, ptr %arrayidx2.8, align 4, !tbaa !5
  %indvars.iv.next.8 = add nuw nsw i64 %indvars.iv.next.7, 1
  %arrayidx4.8 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.8
  %41 = load float, ptr %arrayidx4.8, align 4, !tbaa !5
  %arrayidx6.8 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.7
  %42 = load float, ptr %arrayidx6.8, align 4, !tbaa !5
  %mul7.8 = fmul fast float %42, %41
  %arrayidx9.8 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.7
  %43 = load float, ptr %arrayidx9.8, align 4, !tbaa !5
  %add10.8 = fadd fast float %43, %mul7.8
  store float %add10.8, ptr %arrayidx9.8, align 4, !tbaa !5
  %niter.next.8 = add nuw nsw i64 %niter.next.7, 1
  %arrayidx.9 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.8
  %44 = load float, ptr %arrayidx.9, align 4, !tbaa !5
  %arrayidx2.9 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.8
  %mul.9 = fmul fast float %41, %44
  store float %mul.9, ptr %arrayidx2.9, align 4, !tbaa !5
  %indvars.iv.next.9 = add nuw nsw i64 %indvars.iv.next.8, 1
  %arrayidx4.9 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.9
  %45 = load float, ptr %arrayidx4.9, align 4, !tbaa !5
  %arrayidx6.9 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.8
  %46 = load float, ptr %arrayidx6.9, align 4, !tbaa !5
  %mul7.9 = fmul fast float %46, %45
  %arrayidx9.9 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.8
  %47 = load float, ptr %arrayidx9.9, align 4, !tbaa !5
  %add10.9 = fadd fast float %47, %mul7.9
  store float %add10.9, ptr %arrayidx9.9, align 4, !tbaa !5
  %niter.next.9 = add nuw nsw i64 %niter.next.8, 1
  %arrayidx.10 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.9
  %48 = load float, ptr %arrayidx.10, align 4, !tbaa !5
  %arrayidx2.10 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.9
  %mul.10 = fmul fast float %45, %48
  store float %mul.10, ptr %arrayidx2.10, align 4, !tbaa !5
  %indvars.iv.next.10 = add nuw nsw i64 %indvars.iv.next.9, 1
  %arrayidx4.10 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.10
  %49 = load float, ptr %arrayidx4.10, align 4, !tbaa !5
  %arrayidx6.10 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.9
  %50 = load float, ptr %arrayidx6.10, align 4, !tbaa !5
  %mul7.10 = fmul fast float %50, %49
  %arrayidx9.10 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.9
  %51 = load float, ptr %arrayidx9.10, align 4, !tbaa !5
  %add10.10 = fadd fast float %51, %mul7.10
  store float %add10.10, ptr %arrayidx9.10, align 4, !tbaa !5
  %niter.next.10 = add nuw nsw i64 %niter.next.9, 1
  %arrayidx.11 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.10
  %52 = load float, ptr %arrayidx.11, align 4, !tbaa !5
  %arrayidx2.11 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.10
  %mul.11 = fmul fast float %49, %52
  store float %mul.11, ptr %arrayidx2.11, align 4, !tbaa !5
  %indvars.iv.next.11 = add nuw nsw i64 %indvars.iv.next.10, 1
  %arrayidx4.11 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.11
  %53 = load float, ptr %arrayidx4.11, align 4, !tbaa !5
  %arrayidx6.11 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.10
  %54 = load float, ptr %arrayidx6.11, align 4, !tbaa !5
  %mul7.11 = fmul fast float %54, %53
  %arrayidx9.11 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.10
  %55 = load float, ptr %arrayidx9.11, align 4, !tbaa !5
  %add10.11 = fadd fast float %55, %mul7.11
  store float %add10.11, ptr %arrayidx9.11, align 4, !tbaa !5
  %niter.next.11 = add nuw nsw i64 %niter.next.10, 1
  %arrayidx.12 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.11
  %56 = load float, ptr %arrayidx.12, align 4, !tbaa !5
  %arrayidx2.12 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.11
  %mul.12 = fmul fast float %53, %56
  store float %mul.12, ptr %arrayidx2.12, align 4, !tbaa !5
  %indvars.iv.next.12 = add nuw nsw i64 %indvars.iv.next.11, 1
  %arrayidx4.12 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.12
  %57 = load float, ptr %arrayidx4.12, align 4, !tbaa !5
  %arrayidx6.12 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.11
  %58 = load float, ptr %arrayidx6.12, align 4, !tbaa !5
  %mul7.12 = fmul fast float %58, %57
  %arrayidx9.12 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.11
  %59 = load float, ptr %arrayidx9.12, align 4, !tbaa !5
  %add10.12 = fadd fast float %59, %mul7.12
  store float %add10.12, ptr %arrayidx9.12, align 4, !tbaa !5
  %niter.next.12 = add nuw nsw i64 %niter.next.11, 1
  %arrayidx.13 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.12
  %60 = load float, ptr %arrayidx.13, align 4, !tbaa !5
  %arrayidx2.13 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.12
  %mul.13 = fmul fast float %57, %60
  store float %mul.13, ptr %arrayidx2.13, align 4, !tbaa !5
  %indvars.iv.next.13 = add nuw nsw i64 %indvars.iv.next.12, 1
  %arrayidx4.13 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.13
  %61 = load float, ptr %arrayidx4.13, align 4, !tbaa !5
  %arrayidx6.13 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.12
  %62 = load float, ptr %arrayidx6.13, align 4, !tbaa !5
  %mul7.13 = fmul fast float %62, %61
  %arrayidx9.13 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.12
  %63 = load float, ptr %arrayidx9.13, align 4, !tbaa !5
  %add10.13 = fadd fast float %63, %mul7.13
  store float %add10.13, ptr %arrayidx9.13, align 4, !tbaa !5
  %niter.next.13 = add nuw nsw i64 %niter.next.12, 1
  %arrayidx.14 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.13
  %64 = load float, ptr %arrayidx.14, align 4, !tbaa !5
  %arrayidx2.14 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.13
  %mul.14 = fmul fast float %61, %64
  store float %mul.14, ptr %arrayidx2.14, align 4, !tbaa !5
  %indvars.iv.next.14 = add nuw nsw i64 %indvars.iv.next.13, 1
  %arrayidx4.14 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.14
  %65 = load float, ptr %arrayidx4.14, align 4, !tbaa !5
  %arrayidx6.14 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.13
  %66 = load float, ptr %arrayidx6.14, align 4, !tbaa !5
  %mul7.14 = fmul fast float %66, %65
  %arrayidx9.14 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.13
  %67 = load float, ptr %arrayidx9.14, align 4, !tbaa !5
  %add10.14 = fadd fast float %67, %mul7.14
  store float %add10.14, ptr %arrayidx9.14, align 4, !tbaa !5
  %niter.next.14 = add nuw nsw i64 %niter.next.13, 1
  %arrayidx.15 = getelementptr inbounds float, ptr %c, i64 %indvars.iv.next.14
  %68 = load float, ptr %arrayidx.15, align 4, !tbaa !5
  %arrayidx2.15 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.14
  %mul.15 = fmul fast float %65, %68
  store float %mul.15, ptr %arrayidx2.15, align 4, !tbaa !5
  %indvars.iv.next.15 = add nuw nsw i64 %indvars.iv.next.14, 1
  %arrayidx4.15 = getelementptr inbounds float, ptr %a, i64 %indvars.iv.next.15
  %69 = load float, ptr %arrayidx4.15, align 4, !tbaa !5
  %arrayidx6.15 = getelementptr inbounds float, ptr %d, i64 %indvars.iv.next.14
  %70 = load float, ptr %arrayidx6.15, align 4, !tbaa !5
  %mul7.15 = fmul fast float %70, %69
  %arrayidx9.15 = getelementptr inbounds float, ptr %b, i64 %indvars.iv.next.14
  %71 = load float, ptr %arrayidx9.15, align 4, !tbaa !5
  %add10.15 = fadd fast float %71, %mul7.15
  store float %add10.15, ptr %arrayidx9.15, align 4, !tbaa !5
  %niter.next.15 = add i64 %niter.next.14, 1
  %niter.ncmp.15 = icmp eq i64 %niter.next.15, %unroll_iter
  br i1 %niter.ncmp.15, label %for.cond.cleanup.loopexit.unr-lcssa.loopexit, label %for.body, !llvm.loop !11
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
!6 = !{!"float", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C/C++ TBAA"}
!9 = distinct !{!9, !10}
!10 = !{!"llvm.loop.unroll.disable"}
!11 = distinct !{!11, !12}
!12 = !{!"llvm.loop.mustprogress"}
