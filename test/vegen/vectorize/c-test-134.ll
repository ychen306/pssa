; RUN: %opt -passes=global-slp -vectorize-only=kernel %s | lli
; RUN: %opt -passes=global-slp -vectorize-only=kernel -S %s | FileCheck %s

 ; CHECK:  call i1 @llvm.vector.reduce.or.v4i1

target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: argmemonly nofree noinline norecurse nosync nounwind ssp uwtable
define void @kernel(i32 noundef %n, ptr noalias nocapture noundef writeonly %RET, ptr noalias nocapture noundef readonly %aFOO, float noundef %b) local_unnamed_addr #0 {
entry:
  %cmp45 = icmp sgt i32 %n, 0
  br i1 %cmp45, label %for.body.lr.ph, label %for.cond.cleanup

for.body.lr.ph:                                   ; preds = %entry
  %cmp239 = fcmp ule float %b, 0.000000e+00
  br i1 %cmp239, label %for.body.us.preheader, label %for.body.preheader

for.body.us.preheader:                            ; preds = %for.body.lr.ph
  %0 = zext i32 %n to i64
  %1 = shl nuw nsw i64 %0, 2
  call void @llvm.memcpy.p0.p0.i64(ptr align 4 %RET, ptr align 4 %aFOO, i64 %1, i1 false), !tbaa !5
  br label %for.cond.cleanup

for.body.preheader:                               ; preds = %for.body.lr.ph
  %2 = add nsw i32 %n, -1
  %xtraiter = and i32 %n, 3
  %3 = icmp ult i32 %2, 3
  br i1 %3, label %for.cond.cleanup.loopexit57.unr-lcssa, label %for.body.preheader.new

for.body.preheader.new:                           ; preds = %for.body.preheader
  %unroll_iter = and i32 %n, -4
  br label %for.body

for.cond.cleanup.loopexit57.unr-lcssa.loopexit:   ; preds = %for.end18.3
  %indvars.iv.next.3.lcssa = phi i64 [ %indvars.iv.next.3, %for.end18.3 ]
  br label %for.cond.cleanup.loopexit57.unr-lcssa

for.cond.cleanup.loopexit57.unr-lcssa:            ; preds = %for.cond.cleanup.loopexit57.unr-lcssa.loopexit, %for.body.preheader
  %indvars.iv.unr = phi i64 [ 0, %for.body.preheader ], [ %indvars.iv.next.3.lcssa, %for.cond.cleanup.loopexit57.unr-lcssa.loopexit ]
  %lcmp.mod.not = icmp eq i32 %xtraiter, 0
  br i1 %lcmp.mod.not, label %for.cond.cleanup, label %for.body.epil.preheader

for.body.epil.preheader:                          ; preds = %for.cond.cleanup.loopexit57.unr-lcssa
  br label %for.body.epil

for.body.epil:                                    ; preds = %for.body.epil.preheader, %for.end18.epil
  %indvars.iv.epil = phi i64 [ %indvars.iv.next.epil, %for.end18.epil ], [ %indvars.iv.unr, %for.body.epil.preheader ]
  %epil.iter = phi i32 [ %epil.iter.next, %for.end18.epil ], [ 0, %for.body.epil.preheader ]
  %arrayidx.epil = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.epil
  %4 = load float, ptr %arrayidx.epil, align 4, !tbaa !5
  %cmp440.epil = fcmp oeq float %4, 1.000000e+00
  br i1 %cmp440.epil, label %for.end18.epil, label %for.cond6.preheader.epil.preheader

for.cond6.preheader.epil.preheader:               ; preds = %for.body.epil
  br label %for.cond6.preheader.epil

for.cond6.preheader.epil:                         ; preds = %for.cond6.preheader.epil.preheader, %for.inc16.epil
  %i.043.epil = phi float [ %inc17.epil, %for.inc16.epil ], [ 0.000000e+00, %for.cond6.preheader.epil.preheader ]
  %a.042.epil = phi float [ %a.1.lcssa.epil, %for.inc16.epil ], [ %4, %for.cond6.preheader.epil.preheader ]
  %cmp1135.epil = fcmp oeq float %a.042.epil, 3.000000e+00
  br i1 %cmp1135.epil, label %for.inc16.epil, label %if.end14.epil.preheader

if.end14.epil.preheader:                          ; preds = %for.cond6.preheader.epil
  br label %if.end14.epil

if.end14.epil:                                    ; preds = %if.end14.epil.preheader, %if.end14.epil
  %j.038.epil = phi float [ %inc15.epil, %if.end14.epil ], [ 0.000000e+00, %if.end14.epil.preheader ]
  %a.137.epil = phi float [ %inc.epil, %if.end14.epil ], [ %a.042.epil, %if.end14.epil.preheader ]
  %inc.epil = fadd float %a.137.epil, 1.000000e+00
  %inc15.epil = fadd float %j.038.epil, 1.000000e+00
  %cmp7.epil = fcmp uge float %inc15.epil, %b
  %cmp11.epil = fcmp oeq float %inc.epil, 3.000000e+00
  %or.cond33.epil = select i1 %cmp7.epil, i1 true, i1 %cmp11.epil
  br i1 %or.cond33.epil, label %for.inc16.epil.loopexit, label %if.end14.epil, !llvm.loop !9

for.inc16.epil.loopexit:                          ; preds = %if.end14.epil
  %inc.epil.lcssa = phi float [ %inc.epil, %if.end14.epil ]
  br label %for.inc16.epil

for.inc16.epil:                                   ; preds = %for.inc16.epil.loopexit, %for.cond6.preheader.epil
  %a.1.lcssa.epil = phi float [ 3.000000e+00, %for.cond6.preheader.epil ], [ %inc.epil.lcssa, %for.inc16.epil.loopexit ]
  %inc17.epil = fadd float %i.043.epil, 1.000000e+00
  %cmp2.epil = fcmp uge float %inc17.epil, %b
  %cmp4.epil = fcmp oeq float %a.1.lcssa.epil, 1.000000e+00
  %or.cond.epil = select i1 %cmp2.epil, i1 true, i1 %cmp4.epil
  br i1 %or.cond.epil, label %for.end18.epil.loopexit, label %for.cond6.preheader.epil, !llvm.loop !11

for.end18.epil.loopexit:                          ; preds = %for.inc16.epil
  %a.1.lcssa.epil.lcssa = phi float [ %a.1.lcssa.epil, %for.inc16.epil ]
  br label %for.end18.epil

for.end18.epil:                                   ; preds = %for.end18.epil.loopexit, %for.body.epil
  %a.0.lcssa.epil = phi float [ 1.000000e+00, %for.body.epil ], [ %a.1.lcssa.epil.lcssa, %for.end18.epil.loopexit ]
  %arrayidx20.epil = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.epil
  store float %a.0.lcssa.epil, ptr %arrayidx20.epil, align 4, !tbaa !5
  %indvars.iv.next.epil = add nuw nsw i64 %indvars.iv.epil, 1
  %epil.iter.next = add nuw nsw i32 %epil.iter, 1
  %epil.iter.cmp.not = icmp eq i32 %epil.iter.next, %xtraiter
  br i1 %epil.iter.cmp.not, label %for.cond.cleanup.loopexit, label %for.body.epil, !llvm.loop !12

for.cond.cleanup.loopexit:                        ; preds = %for.end18.epil
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit, %for.cond.cleanup.loopexit57.unr-lcssa, %for.body.us.preheader, %entry
  ret void

for.body:                                         ; preds = %for.end18.3, %for.body.preheader.new
  %indvars.iv = phi i64 [ 0, %for.body.preheader.new ], [ %indvars.iv.next.3, %for.end18.3 ]
  %niter = phi i32 [ 0, %for.body.preheader.new ], [ %niter.next.3, %for.end18.3 ]
  %arrayidx = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv
  %5 = load float, ptr %arrayidx, align 4, !tbaa !5
  %cmp440 = fcmp oeq float %5, 1.000000e+00
  br i1 %cmp440, label %for.end18, label %for.cond6.preheader.preheader

for.cond6.preheader.preheader:                    ; preds = %for.body
  br label %for.cond6.preheader

for.cond6.preheader:                              ; preds = %for.cond6.preheader.preheader, %for.inc16
  %i.043 = phi float [ %inc17, %for.inc16 ], [ 0.000000e+00, %for.cond6.preheader.preheader ]
  %a.042 = phi float [ %a.1.lcssa, %for.inc16 ], [ %5, %for.cond6.preheader.preheader ]
  %cmp1135 = fcmp oeq float %a.042, 3.000000e+00
  br i1 %cmp1135, label %for.inc16, label %if.end14.preheader

if.end14.preheader:                               ; preds = %for.cond6.preheader
  br label %if.end14

if.end14:                                         ; preds = %if.end14.preheader, %if.end14
  %j.038 = phi float [ %inc15, %if.end14 ], [ 0.000000e+00, %if.end14.preheader ]
  %a.137 = phi float [ %inc, %if.end14 ], [ %a.042, %if.end14.preheader ]
  %inc = fadd float %a.137, 1.000000e+00
  %inc15 = fadd float %j.038, 1.000000e+00
  %cmp7 = fcmp uge float %inc15, %b
  %cmp11 = fcmp oeq float %inc, 3.000000e+00
  %or.cond33 = select i1 %cmp7, i1 true, i1 %cmp11
  br i1 %or.cond33, label %for.inc16.loopexit, label %if.end14, !llvm.loop !9

for.inc16.loopexit:                               ; preds = %if.end14
  %inc.lcssa = phi float [ %inc, %if.end14 ]
  br label %for.inc16

for.inc16:                                        ; preds = %for.inc16.loopexit, %for.cond6.preheader
  %a.1.lcssa = phi float [ 3.000000e+00, %for.cond6.preheader ], [ %inc.lcssa, %for.inc16.loopexit ]
  %inc17 = fadd float %i.043, 1.000000e+00
  %cmp2 = fcmp uge float %inc17, %b
  %cmp4 = fcmp oeq float %a.1.lcssa, 1.000000e+00
  %or.cond = select i1 %cmp2, i1 true, i1 %cmp4
  br i1 %or.cond, label %for.end18.loopexit, label %for.cond6.preheader, !llvm.loop !11

for.end18.loopexit:                               ; preds = %for.inc16
  %a.1.lcssa.lcssa = phi float [ %a.1.lcssa, %for.inc16 ]
  br label %for.end18

for.end18:                                        ; preds = %for.end18.loopexit, %for.body
  %a.0.lcssa = phi float [ 1.000000e+00, %for.body ], [ %a.1.lcssa.lcssa, %for.end18.loopexit ]
  %arrayidx20 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv
  store float %a.0.lcssa, ptr %arrayidx20, align 4, !tbaa !5
  %indvars.iv.next = or i64 %indvars.iv, 1
  %arrayidx.1 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next
  %6 = load float, ptr %arrayidx.1, align 4, !tbaa !5
  %cmp440.1 = fcmp oeq float %6, 1.000000e+00
  br i1 %cmp440.1, label %for.end18.1, label %for.cond6.preheader.1.preheader

for.cond6.preheader.1.preheader:                  ; preds = %for.end18
  br label %for.cond6.preheader.1

for.cond6.preheader.1:                            ; preds = %for.cond6.preheader.1.preheader, %for.inc16.1
  %i.043.1 = phi float [ %inc17.1, %for.inc16.1 ], [ 0.000000e+00, %for.cond6.preheader.1.preheader ]
  %a.042.1 = phi float [ %a.1.lcssa.1, %for.inc16.1 ], [ %6, %for.cond6.preheader.1.preheader ]
  %cmp1135.1 = fcmp oeq float %a.042.1, 3.000000e+00
  br i1 %cmp1135.1, label %for.inc16.1, label %if.end14.1.preheader

if.end14.1.preheader:                             ; preds = %for.cond6.preheader.1
  br label %if.end14.1

if.end14.1:                                       ; preds = %if.end14.1.preheader, %if.end14.1
  %j.038.1 = phi float [ %inc15.1, %if.end14.1 ], [ 0.000000e+00, %if.end14.1.preheader ]
  %a.137.1 = phi float [ %inc.1, %if.end14.1 ], [ %a.042.1, %if.end14.1.preheader ]
  %inc.1 = fadd float %a.137.1, 1.000000e+00
  %inc15.1 = fadd float %j.038.1, 1.000000e+00
  %cmp7.1 = fcmp uge float %inc15.1, %b
  %cmp11.1 = fcmp oeq float %inc.1, 3.000000e+00
  %or.cond33.1 = select i1 %cmp7.1, i1 true, i1 %cmp11.1
  br i1 %or.cond33.1, label %for.inc16.1.loopexit, label %if.end14.1, !llvm.loop !9

for.inc16.1.loopexit:                             ; preds = %if.end14.1
  %inc.1.lcssa = phi float [ %inc.1, %if.end14.1 ]
  br label %for.inc16.1

for.inc16.1:                                      ; preds = %for.inc16.1.loopexit, %for.cond6.preheader.1
  %a.1.lcssa.1 = phi float [ 3.000000e+00, %for.cond6.preheader.1 ], [ %inc.1.lcssa, %for.inc16.1.loopexit ]
  %inc17.1 = fadd float %i.043.1, 1.000000e+00
  %cmp2.1 = fcmp uge float %inc17.1, %b
  %cmp4.1 = fcmp oeq float %a.1.lcssa.1, 1.000000e+00
  %or.cond.1 = select i1 %cmp2.1, i1 true, i1 %cmp4.1
  br i1 %or.cond.1, label %for.end18.1.loopexit, label %for.cond6.preheader.1, !llvm.loop !11

for.end18.1.loopexit:                             ; preds = %for.inc16.1
  %a.1.lcssa.1.lcssa = phi float [ %a.1.lcssa.1, %for.inc16.1 ]
  br label %for.end18.1

for.end18.1:                                      ; preds = %for.end18.1.loopexit, %for.end18
  %a.0.lcssa.1 = phi float [ 1.000000e+00, %for.end18 ], [ %a.1.lcssa.1.lcssa, %for.end18.1.loopexit ]
  %arrayidx20.1 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next
  store float %a.0.lcssa.1, ptr %arrayidx20.1, align 4, !tbaa !5
  %indvars.iv.next.1 = or i64 %indvars.iv, 2
  %arrayidx.2 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.1
  %7 = load float, ptr %arrayidx.2, align 4, !tbaa !5
  %cmp440.2 = fcmp oeq float %7, 1.000000e+00
  br i1 %cmp440.2, label %for.end18.2, label %for.cond6.preheader.2.preheader

for.cond6.preheader.2.preheader:                  ; preds = %for.end18.1
  br label %for.cond6.preheader.2

for.cond6.preheader.2:                            ; preds = %for.cond6.preheader.2.preheader, %for.inc16.2
  %i.043.2 = phi float [ %inc17.2, %for.inc16.2 ], [ 0.000000e+00, %for.cond6.preheader.2.preheader ]
  %a.042.2 = phi float [ %a.1.lcssa.2, %for.inc16.2 ], [ %7, %for.cond6.preheader.2.preheader ]
  %cmp1135.2 = fcmp oeq float %a.042.2, 3.000000e+00
  br i1 %cmp1135.2, label %for.inc16.2, label %if.end14.2.preheader

if.end14.2.preheader:                             ; preds = %for.cond6.preheader.2
  br label %if.end14.2

if.end14.2:                                       ; preds = %if.end14.2.preheader, %if.end14.2
  %j.038.2 = phi float [ %inc15.2, %if.end14.2 ], [ 0.000000e+00, %if.end14.2.preheader ]
  %a.137.2 = phi float [ %inc.2, %if.end14.2 ], [ %a.042.2, %if.end14.2.preheader ]
  %inc.2 = fadd float %a.137.2, 1.000000e+00
  %inc15.2 = fadd float %j.038.2, 1.000000e+00
  %cmp7.2 = fcmp uge float %inc15.2, %b
  %cmp11.2 = fcmp oeq float %inc.2, 3.000000e+00
  %or.cond33.2 = select i1 %cmp7.2, i1 true, i1 %cmp11.2
  br i1 %or.cond33.2, label %for.inc16.2.loopexit, label %if.end14.2, !llvm.loop !9

for.inc16.2.loopexit:                             ; preds = %if.end14.2
  %inc.2.lcssa = phi float [ %inc.2, %if.end14.2 ]
  br label %for.inc16.2

for.inc16.2:                                      ; preds = %for.inc16.2.loopexit, %for.cond6.preheader.2
  %a.1.lcssa.2 = phi float [ 3.000000e+00, %for.cond6.preheader.2 ], [ %inc.2.lcssa, %for.inc16.2.loopexit ]
  %inc17.2 = fadd float %i.043.2, 1.000000e+00
  %cmp2.2 = fcmp uge float %inc17.2, %b
  %cmp4.2 = fcmp oeq float %a.1.lcssa.2, 1.000000e+00
  %or.cond.2 = select i1 %cmp2.2, i1 true, i1 %cmp4.2
  br i1 %or.cond.2, label %for.end18.2.loopexit, label %for.cond6.preheader.2, !llvm.loop !11

for.end18.2.loopexit:                             ; preds = %for.inc16.2
  %a.1.lcssa.2.lcssa = phi float [ %a.1.lcssa.2, %for.inc16.2 ]
  br label %for.end18.2

for.end18.2:                                      ; preds = %for.end18.2.loopexit, %for.end18.1
  %a.0.lcssa.2 = phi float [ 1.000000e+00, %for.end18.1 ], [ %a.1.lcssa.2.lcssa, %for.end18.2.loopexit ]
  %arrayidx20.2 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.1
  store float %a.0.lcssa.2, ptr %arrayidx20.2, align 4, !tbaa !5
  %indvars.iv.next.2 = or i64 %indvars.iv, 3
  %arrayidx.3 = getelementptr inbounds float, ptr %aFOO, i64 %indvars.iv.next.2
  %8 = load float, ptr %arrayidx.3, align 4, !tbaa !5
  %cmp440.3 = fcmp oeq float %8, 1.000000e+00
  br i1 %cmp440.3, label %for.end18.3, label %for.cond6.preheader.3.preheader

for.cond6.preheader.3.preheader:                  ; preds = %for.end18.2
  br label %for.cond6.preheader.3

for.cond6.preheader.3:                            ; preds = %for.cond6.preheader.3.preheader, %for.inc16.3
  %i.043.3 = phi float [ %inc17.3, %for.inc16.3 ], [ 0.000000e+00, %for.cond6.preheader.3.preheader ]
  %a.042.3 = phi float [ %a.1.lcssa.3, %for.inc16.3 ], [ %8, %for.cond6.preheader.3.preheader ]
  %cmp1135.3 = fcmp oeq float %a.042.3, 3.000000e+00
  br i1 %cmp1135.3, label %for.inc16.3, label %if.end14.3.preheader

if.end14.3.preheader:                             ; preds = %for.cond6.preheader.3
  br label %if.end14.3

if.end14.3:                                       ; preds = %if.end14.3.preheader, %if.end14.3
  %j.038.3 = phi float [ %inc15.3, %if.end14.3 ], [ 0.000000e+00, %if.end14.3.preheader ]
  %a.137.3 = phi float [ %inc.3, %if.end14.3 ], [ %a.042.3, %if.end14.3.preheader ]
  %inc.3 = fadd float %a.137.3, 1.000000e+00
  %inc15.3 = fadd float %j.038.3, 1.000000e+00
  %cmp7.3 = fcmp uge float %inc15.3, %b
  %cmp11.3 = fcmp oeq float %inc.3, 3.000000e+00
  %or.cond33.3 = select i1 %cmp7.3, i1 true, i1 %cmp11.3
  br i1 %or.cond33.3, label %for.inc16.3.loopexit, label %if.end14.3, !llvm.loop !9

for.inc16.3.loopexit:                             ; preds = %if.end14.3
  %inc.3.lcssa = phi float [ %inc.3, %if.end14.3 ]
  br label %for.inc16.3

for.inc16.3:                                      ; preds = %for.inc16.3.loopexit, %for.cond6.preheader.3
  %a.1.lcssa.3 = phi float [ 3.000000e+00, %for.cond6.preheader.3 ], [ %inc.3.lcssa, %for.inc16.3.loopexit ]
  %inc17.3 = fadd float %i.043.3, 1.000000e+00
  %cmp2.3 = fcmp uge float %inc17.3, %b
  %cmp4.3 = fcmp oeq float %a.1.lcssa.3, 1.000000e+00
  %or.cond.3 = select i1 %cmp2.3, i1 true, i1 %cmp4.3
  br i1 %or.cond.3, label %for.end18.3.loopexit, label %for.cond6.preheader.3, !llvm.loop !11

for.end18.3.loopexit:                             ; preds = %for.inc16.3
  %a.1.lcssa.3.lcssa = phi float [ %a.1.lcssa.3, %for.inc16.3 ]
  br label %for.end18.3

for.end18.3:                                      ; preds = %for.end18.3.loopexit, %for.end18.2
  %a.0.lcssa.3 = phi float [ 1.000000e+00, %for.end18.2 ], [ %a.1.lcssa.3.lcssa, %for.end18.3.loopexit ]
  %arrayidx20.3 = getelementptr inbounds float, ptr %RET, i64 %indvars.iv.next.2
  store float %a.0.lcssa.3, ptr %arrayidx20.3, align 4, !tbaa !5
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv, 4
  %niter.next.3 = add i32 %niter, 4
  %niter.ncmp.3.not = icmp eq i32 %niter.next.3, %unroll_iter
  br i1 %niter.ncmp.3.not, label %for.cond.cleanup.loopexit57.unr-lcssa.loopexit, label %for.body, !llvm.loop !14
}

; Function Attrs: nofree norecurse nosync nounwind readnone ssp uwtable
define i32 @main() local_unnamed_addr #1 {
entry:
  %vla72 = alloca [1030 x float], align 16
  %vla173 = alloca [1030 x float], align 16
  br label %vector.body

vector.body:                                      ; preds = %vector.body, %entry
  %index = phi i64 [ 0, %entry ], [ %index.next.1, %vector.body ]
  %vec.ind = phi <4 x i32> [ <i32 0, i32 1, i32 2, i32 3>, %entry ], [ %vec.ind.next.1, %vector.body ]
  %step.add = add <4 x i32> %vec.ind, <i32 4, i32 4, i32 4, i32 4>
  %0 = sitofp <4 x i32> %vec.ind to <4 x float>
  %1 = sitofp <4 x i32> %step.add to <4 x float>
  %2 = fadd <4 x float> %0, <float 1.000000e+00, float 1.000000e+00, float 1.000000e+00, float 1.000000e+00>
  %3 = fadd <4 x float> %1, <float 1.000000e+00, float 1.000000e+00, float 1.000000e+00, float 1.000000e+00>
  %4 = getelementptr inbounds float, ptr %vla173, i64 %index
  store <4 x float> %2, ptr %4, align 16, !tbaa !5
  %5 = getelementptr inbounds float, ptr %4, i64 4
  store <4 x float> %3, ptr %5, align 16, !tbaa !5
  %index.next = or i64 %index, 8
  %vec.ind.next = add <4 x i32> %vec.ind, <i32 8, i32 8, i32 8, i32 8>
  %step.add.1 = add <4 x i32> %vec.ind, <i32 12, i32 12, i32 12, i32 12>
  %6 = sitofp <4 x i32> %vec.ind.next to <4 x float>
  %7 = sitofp <4 x i32> %step.add.1 to <4 x float>
  %8 = fadd <4 x float> %6, <float 1.000000e+00, float 1.000000e+00, float 1.000000e+00, float 1.000000e+00>
  %9 = fadd <4 x float> %7, <float 1.000000e+00, float 1.000000e+00, float 1.000000e+00, float 1.000000e+00>
  %10 = getelementptr inbounds float, ptr %vla173, i64 %index.next
  store <4 x float> %8, ptr %10, align 16, !tbaa !5
  %11 = getelementptr inbounds float, ptr %10, i64 4
  store <4 x float> %9, ptr %11, align 16, !tbaa !5
  %index.next.1 = add nuw nsw i64 %index, 16
  %vec.ind.next.1 = add <4 x i32> %vec.ind, <i32 16, i32 16, i32 16, i32 16>
  %12 = icmp eq i64 %index.next.1, 1024
  br i1 %12, label %for.body, label %vector.body, !llvm.loop !15

for.body9.us.us.us:                               ; preds = %for.body9.us.us.us.preheader, %for.inc50.us.us.us.1
  %indvars.iv135 = phi i64 [ %indvars.iv.next136.1, %for.inc50.us.us.us.1 ], [ 0, %for.body9.us.us.us.preheader ]
  %cmp37.us.us.us = icmp ugt i64 %indvars.iv135, 2
  br i1 %cmp37.us.us.us, label %land.lhs.true39.us.us.us, label %for.inc50.us.us.us

land.lhs.true39.us.us.us:                         ; preds = %for.body9.us.us.us
  %arrayidx41.us.us.us = getelementptr inbounds float, ptr %vla72, i64 %indvars.iv135
  %13 = load float, ptr %arrayidx41.us.us.us, align 8, !tbaa !5
  %conv42.us.us.us = fpext float %13 to double
  %14 = trunc i64 %indvars.iv135 to i32
  %conv43.us.us.us = sitofp i32 %14 to float
  %conv44.us.us.us = fpext float %conv43.us.us.us to double
  %add45.us.us.us = fadd double %conv44.us.us.us, 2.600000e+01
  %cmp46.us.us.us = fcmp une double %add45.us.us.us, %conv42.us.us.us
  br i1 %cmp46.us.us.us, label %cleanup.loopexit, label %for.inc50.us.us.us

for.inc50.us.us.us:                               ; preds = %land.lhs.true39.us.us.us, %for.body9.us.us.us
  %cmp37.us.us.us.1.not = icmp eq i64 %indvars.iv135, 0
  br i1 %cmp37.us.us.us.1.not, label %for.inc50.us.us.us.1, label %land.lhs.true39.us.us.us.1

land.lhs.true39.us.us.us.1:                       ; preds = %for.inc50.us.us.us
  %indvars.iv.next136 = or i64 %indvars.iv135, 1
  %arrayidx41.us.us.us.1 = getelementptr inbounds float, ptr %vla72, i64 %indvars.iv.next136
  %15 = load float, ptr %arrayidx41.us.us.us.1, align 4, !tbaa !5
  %conv42.us.us.us.1 = fpext float %15 to double
  %16 = trunc i64 %indvars.iv.next136 to i32
  %conv43.us.us.us.1 = sitofp i32 %16 to float
  %conv44.us.us.us.1 = fpext float %conv43.us.us.us.1 to double
  %add45.us.us.us.1 = fadd double %conv44.us.us.us.1, 2.600000e+01
  %cmp46.us.us.us.1 = fcmp une double %add45.us.us.us.1, %conv42.us.us.us.1
  br i1 %cmp46.us.us.us.1, label %cleanup.loopexit, label %for.inc50.us.us.us.1

for.inc50.us.us.us.1:                             ; preds = %land.lhs.true39.us.us.us.1, %for.inc50.us.us.us
  %indvars.iv.next136.1 = add nuw nsw i64 %indvars.iv135, 2
  %exitcond138.not.1 = icmp eq i64 %indvars.iv.next136.1, 1030
  br i1 %exitcond138.not.1, label %cleanup.loopexit, label %for.body9.us.us.us, !llvm.loop !17

for.body:                                         ; preds = %vector.body
  %arrayidx = getelementptr inbounds float, ptr %vla173, i64 1024
  store float 1.025000e+03, ptr %arrayidx, align 16, !tbaa !5
  %arrayidx.1 = getelementptr inbounds float, ptr %vla173, i64 1025
  store float 1.026000e+03, ptr %arrayidx.1, align 4, !tbaa !5
  %arrayidx.2 = getelementptr inbounds float, ptr %vla173, i64 1026
  store float 1.027000e+03, ptr %arrayidx.2, align 8, !tbaa !5
  %arrayidx.3 = getelementptr inbounds float, ptr %vla173, i64 1027
  store float 1.028000e+03, ptr %arrayidx.3, align 4, !tbaa !5
  %arrayidx.4 = getelementptr inbounds float, ptr %vla173, i64 1028
  store float 1.029000e+03, ptr %arrayidx.4, align 16, !tbaa !5
  %arrayidx.5 = getelementptr inbounds float, ptr %vla173, i64 1029
  store float 1.030000e+03, ptr %arrayidx.5, align 4, !tbaa !5
  call void @kernel(i32 noundef 1030, ptr noundef nonnull %vla72, ptr noundef nonnull %vla173, float noundef 5.000000e+00)
  %17 = load float, ptr %vla72, align 16
  %.fr = freeze float %17
  %cmp15 = fcmp une float %.fr, 1.000000e+00
  %arrayidx31 = getelementptr inbounds float, ptr %vla72, i64 2
  %18 = load float, ptr %arrayidx31, align 8
  %.fr123 = freeze float %18
  %cmp33 = fcmp une float %.fr123, 3.000000e+00
  %arrayidx21 = getelementptr inbounds float, ptr %vla72, i64 1
  %19 = load float, ptr %arrayidx21, align 4
  %.fr122 = freeze float %19
  %cmp23 = fcmp une float %.fr122, 3.000000e+00
  %or.cond = or i1 %cmp15, %cmp23
  %brmerge = or i1 %or.cond, %cmp33
  br i1 %brmerge, label %cleanup, label %for.body9.us.us.us.preheader

for.body9.us.us.us.preheader:                     ; preds = %for.body
  br label %for.body9.us.us.us

cleanup.loopexit:                                 ; preds = %land.lhs.true39.us.us.us, %land.lhs.true39.us.us.us.1, %for.inc50.us.us.us.1
  %.us-phi.ph = phi i32 [ 0, %for.inc50.us.us.us.1 ], [ 1, %land.lhs.true39.us.us.us.1 ], [ 1, %land.lhs.true39.us.us.us ]
  br label %cleanup

cleanup:                                          ; preds = %cleanup.loopexit, %for.body
  %.us-phi = phi i32 [ 1, %for.body ], [ %.us-phi.ph, %cleanup.loopexit ]
  ret i32 %.us-phi
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
!11 = distinct !{!11, !10}
!12 = distinct !{!12, !13}
!13 = !{!"llvm.loop.unroll.disable"}
!14 = distinct !{!14, !10, !13}
!15 = distinct !{!15, !10, !16}
!16 = !{!"llvm.loop.isvectorized", i32 1}
!17 = distinct !{!17, !10}
