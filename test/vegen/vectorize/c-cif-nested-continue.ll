; RUN: %opt -passes=global-slp %s -S | FileCheck %s

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; Function Attrs: argmemonly nofree noinline norecurse nosync nounwind ssp uwtable
define void @kernel(i32 noundef %n, ptr noalias nocapture noundef writeonly %RET, ptr noalias nocapture noundef readonly %aFOO) local_unnamed_addr #0 {
; CHECK-LABEL: @kernel(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[CMP29:%.*]] = icmp sgt i32 [[N:%.*]], 0
; CHECK-NEXT:    br i1 [[CMP29]], label %[[TMP0:.*]], label %[[TMP3:.*]]
; CHECK:       [[TMP0]]:
; CHECK-NEXT:    [[TMP1:%.*]] = add nsw i32 [[N]], -1
; CHECK-NEXT:    [[XTRAITER:%.*]] = and i32 [[N]], 3
; CHECK-NEXT:    [[TMP2:%.*]] = icmp ult i32 [[TMP1]], 3
; CHECK-NEXT:    br i1 [[TMP2]], label %[[TMP4:.*]], label %[[TMP5:.*]]
; CHECK:       [[TMP3]]:
; CHECK-NEXT:    br label %[[TMP32:.*]]
; CHECK:       [[TMP4]]:
; CHECK-NEXT:    br label %[[TMP20:.*]]
; CHECK:       [[TMP5]]:
; CHECK-NEXT:    [[UNROLL_ITER:%.*]] = and i32 [[N]], -4
; CHECK-NEXT:    br label %[[HEADER:.*]]
; CHECK:       [[HEADER]]:
; CHECK-DAG:    [[R_2_US_1_LCSSA_VEC_MEM_0:%.*]] = phi <4 x float> [ undef, %[[TMP5]] ], [ [[R_2_US_1_LCSSA_VEC_MEM_1:%.*]], %[[LATCH:.*]] ]
; CHECK-DAG:    [[NITER:%.*]] = phi i32 [ 0, %[[TMP5]] ], [ [[NITER_NEXT_3:%.*]], %[[LATCH]] ]
; CHECK-DAG:    [[INDVARS_IV:%.*]] = phi i64 [ 0, %[[TMP5]] ], [ [[INDVARS_IV_NEXT_3:%.*]], %[[LATCH]] ]
; CHECK-NEXT:    [[ARRAYIDX:%.*]] = getelementptr inbounds float, ptr [[AFOO:%.*]], i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT:%.*]] = or i64 [[INDVARS_IV]], 1
; CHECK-NEXT:    [[ARRAYIDX_1:%.*]] = getelementptr inbounds float, ptr [[AFOO]], i64 [[INDVARS_IV_NEXT]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_1:%.*]] = or i64 [[INDVARS_IV]], 2
; CHECK-NEXT:    [[ARRAYIDX_2:%.*]] = getelementptr inbounds float, ptr [[AFOO]], i64 [[INDVARS_IV_NEXT_1]]
; CHECK-NEXT:    [[INDVARS_IV_NEXT_2:%.*]] = or i64 [[INDVARS_IV]], 3
; CHECK-NEXT:    [[ARRAYIDX_3:%.*]] = getelementptr inbounds float, ptr [[AFOO]], i64 [[INDVARS_IV_NEXT_2]]
; CHECK-NEXT:    [[DOTVEC:%.*]] = load <4 x float>, ptr [[ARRAYIDX]], align 4
; CHECK-NEXT:    [[DOTFR_1_VEC:%.*]] = freeze <4 x float> [[DOTVEC]]
; CHECK-NEXT:    [[CMP226_1_VEC:%.*]] = fcmp ogt <4 x float> [[DOTFR_1_VEC]], zeroinitializer
; CHECK-NEXT:    [[CMP9_1_VEC:%.*]] = fcmp une <4 x float> [[DOTFR_1_VEC]], <float 2.000000e+00, float 2.000000e+00, float 2.000000e+00, float 2.000000e+00>
; CHECK-NEXT:    [[TMP6:%.*]] = and <4 x i1> [[CMP226_1_VEC]], [[CMP9_1_VEC]]
; CHECK-NEXT:    [[TMP7:%.*]] = call i1 @llvm.vector.reduce.or.v4i1(<4 x i1> [[TMP6]])
; CHECK-NEXT:    br i1 [[TMP7]], label %[[TMP8:.*]], label %[[TMP9:.*]]
; CHECK:       [[LATCH]]:
; CHECK-NEXT:    br i1 [[SHOULD_CONTINUE_MEM_0:%.*]], label %[[HEADER]], label %[[EXIT:.*]]
; CHECK:       [[EXIT]]:
; CHECK-NEXT:    br label %[[TMP20]]
; CHECK:       [[TMP8]]:
; CHECK-NEXT:    br label %[[HEADER1:.*]]
; CHECK:       [[TMP9]]:
; CHECK-NEXT:    br label %[[TMP12:.*]]
; CHECK:       [[HEADER1]]:
; CHECK-DAG:    [[R_2_US_3_GUARD_MU_VEC:%.*]] = phi <4 x float> [ undef, %[[TMP8]] ], [ [[R_2_US_1_LCSSA_VEC:%.*]], %[[LATCH2:.*]] ]
; CHECK-DAG:    [[R_028_US_3_MU_VEC:%.*]] = phi <4 x float> [ zeroinitializer, %[[TMP8]] ], [ [[R_2_US_VEC:%.*]], %[[LATCH2]] ]
; CHECK-DAG:    [[ACTIVE_MU_VEC:%.*]] = phi <4 x i1> [ [[TMP6]], %[[TMP8]] ], [ [[TMP10:%.*]], %[[LATCH2]] ]
; CHECK-DAG:    [[I_027_US_MU_VEC:%.*]] = phi <4 x i32> [ zeroinitializer, %[[TMP8]] ], [ [[INC13_US_VEC:%.*]], %[[LATCH2]] ]
; CHECK-NEXT:    [[CMP6_NOT_US_VEC:%.*]] = icmp eq <4 x i32> [[I_027_US_MU_VEC]], zeroinitializer
; CHECK-NEXT:    [[INC_US_VEC:%.*]] = fadd <4 x float> [[R_028_US_3_MU_VEC]], <float 1.000000e+00, float 1.000000e+00, float 1.000000e+00, float 1.000000e+00>
; CHECK-NEXT:    [[R_2_US_VEC]] = select <4 x i1> [[CMP6_NOT_US_VEC]], <4 x float> [[INC_US_VEC]], <4 x float> [[R_028_US_3_MU_VEC]]
; CHECK-NEXT:    [[R_2_US_1_LCSSA_VEC]] = select <4 x i1> [[ACTIVE_MU_VEC]], <4 x float> [[R_2_US_VEC]], <4 x float> [[R_2_US_3_GUARD_MU_VEC]]
; CHECK-NEXT:    [[INC13_US_VEC]] = add <4 x i32> [[I_027_US_MU_VEC]], <i32 1, i32 1, i32 1, i32 1>
; CHECK-NEXT:    [[CONV_US_VEC:%.*]] = sitofp <4 x i32> [[INC13_US_VEC]] to <4 x float>
; CHECK-NEXT:    [[CMP2_US_VEC:%.*]] = fcmp ogt <4 x float> [[DOTFR_1_VEC]], [[CONV_US_VEC]]
; CHECK-NEXT:    [[TMP10]] = and <4 x i1> [[CMP2_US_VEC]], [[ACTIVE_MU_VEC]]
; CHECK-NEXT:    [[TMP11:%.*]] = call i1 @llvm.vector.reduce.or.v4i1(<4 x i1> [[TMP10]])
; CHECK-NEXT:    br label %[[LATCH2]]
; CHECK:       [[LATCH2]]:
; CHECK-NEXT:    br i1 [[TMP11]], label %[[HEADER1]], label %[[EXIT3:.*]]
; CHECK:       [[EXIT3]]:
; CHECK-NEXT:    br label %[[TMP12]]
; CHECK:       [[TMP12]]:
; CHECK-NEXT:    [[R_2_US_1_LCSSA_VEC_MEM_1]] = phi <4 x float> [ [[R_2_US_1_LCSSA_VEC]], %[[EXIT3]] ], [ [[R_2_US_1_LCSSA_VEC_MEM_0]], %[[TMP9]] ]
; CHECK-NEXT:    [[TMP13:%.*]] = xor <4 x i1> [[CMP226_1_VEC]], <i1 true, i1 true, i1 true, i1 true>
; CHECK-NEXT:    [[TMP14:%.*]] = xor <4 x i1> [[CMP9_1_VEC]], <i1 true, i1 true, i1 true, i1 true>
; CHECK-NEXT:    [[TMP15:%.*]] = and <4 x i1> [[CMP226_1_VEC]], [[TMP14]]
; CHECK-NEXT:    [[TMP16:%.*]] = select <4 x i1> [[TMP15]], <4 x float> <float 1.100000e+01, float 1.100000e+01, float 1.100000e+01, float 1.100000e+01>, <4 x float> [[R_2_US_1_LCSSA_VEC_MEM_1]]
; CHECK-NEXT:    [[R_0_LCSSA_1_VEC:%.*]] = select <4 x i1> [[TMP13]], <4 x float> zeroinitializer, <4 x float> [[TMP16]]
; CHECK-NEXT:    [[ARRAYIDX15:%.*]] = getelementptr inbounds float, ptr [[RET:%.*]], i64 [[INDVARS_IV]]
; CHECK-NEXT:    [[ARRAYIDX15_1:%.*]] = getelementptr inbounds float, ptr [[RET]], i64 [[INDVARS_IV_NEXT]]
; CHECK-NEXT:    [[ARRAYIDX15_2:%.*]] = getelementptr inbounds float, ptr [[RET]], i64 [[INDVARS_IV_NEXT_1]]
; CHECK-NEXT:    [[ARRAYIDX15_3:%.*]] = getelementptr inbounds float, ptr [[RET]], i64 [[INDVARS_IV_NEXT_2]]
; CHECK-NEXT:    store <4 x float> [[R_0_LCSSA_1_VEC]], ptr [[ARRAYIDX15]], align 4
; CHECK-NEXT:    [[INDVARS_IV_NEXT_3]] = add nuw nsw i64 [[INDVARS_IV]], 4
; CHECK-NEXT:    [[NITER_NEXT_3]] = add i32 [[NITER]], 4
; CHECK-NEXT:    [[NITER_NCMP_3_NOT:%.*]] = icmp eq i32 [[NITER_NEXT_3]], [[UNROLL_ITER]]
; CHECK-NEXT:    br i1 [[NITER_NCMP_3_NOT]], label %[[TMP17:.*]], label %[[TMP18:.*]]
; CHECK:       [[TMP17]]:
; CHECK-NEXT:    br label %[[TMP19:.*]]
; CHECK:       [[TMP18]]:
; CHECK-NEXT:    br label %[[TMP19]]
; CHECK:       [[TMP19]]:
; CHECK-NEXT:    [[SHOULD_CONTINUE_MEM_0]] = phi i1 [ false, %[[TMP17]] ], [ true, %[[TMP18]] ]
; CHECK-NEXT:    br label %[[LATCH]]
; CHECK:       [[TMP20]]:
; CHECK-NEXT:    [[INDVARS_IV_UNR_DEMOTED_0:%.*]] = phi i64 [ 0, %[[TMP4]] ], [ [[INDVARS_IV_NEXT_3]], %[[EXIT]] ]
; CHECK-NEXT:    [[LCMP_MOD_NOT:%.*]] = icmp eq i32 [[XTRAITER]], 0
; CHECK-NEXT:    br i1 [[LCMP_MOD_NOT]], label %[[TMP21:.*]], label %[[TMP22:.*]]
; CHECK:       [[TMP21]]:
; CHECK-NEXT:    br label %[[TMP32]]
; CHECK:       [[TMP22]]:
; CHECK-NEXT:    br label %[[HEADER5:.*]]
; CHECK:       [[HEADER5]]:
; CHECK-DAG:    [[EPIL_ITER:%.*]] = phi i32 [ 0, %[[TMP22]] ], [ [[EPIL_ITER_NEXT:%.*]], %[[LATCH6:.*]] ]
; CHECK-DAG:    [[INDVARS_IV_EPIL:%.*]] = phi i64 [ [[INDVARS_IV_UNR_DEMOTED_0]], %[[TMP22]] ], [ [[INDVARS_IV_NEXT_EPIL:%.*]], %[[LATCH6]] ]
; CHECK-NEXT:    [[ARRAYIDX_EPIL:%.*]] = getelementptr inbounds float, ptr [[AFOO]], i64 [[INDVARS_IV_EPIL]]
; CHECK-NEXT:    [[TMP23:%.*]] = load float, ptr [[ARRAYIDX_EPIL]], align 4, !tbaa [[TBAA5:![0-9]+]]
; CHECK-NEXT:    [[DOTFR_EPIL:%.*]] = freeze float [[TMP23]]
; CHECK-NEXT:    [[CMP226_EPIL:%.*]] = fcmp ogt float [[DOTFR_EPIL]], 0.000000e+00
; CHECK-NEXT:    br i1 [[CMP226_EPIL]], label %[[TMP24:.*]], label %[[TMP25:.*]]
; CHECK:       [[LATCH6]]:
; CHECK-NEXT:    br i1 [[SHOULD_CONTINUE_MEM8_0:%.*]], label %[[HEADER5]], label %[[EXIT7:.*]]
; CHECK:       [[EXIT7]]:
; CHECK-NEXT:    br label %[[TMP32]]
; CHECK:       [[TMP24]]:
; CHECK-NEXT:    [[CMP9_EPIL:%.*]] = fcmp une float [[DOTFR_EPIL]], 2.000000e+00
; CHECK-NEXT:    br i1 [[CMP9_EPIL]], label %[[TMP26:.*]], label %[[TMP27:.*]]
; CHECK:       [[TMP25]]:
; CHECK-NEXT:    br label %[[TMP28:.*]]
; CHECK:       [[TMP26]]:
; CHECK-NEXT:    br label %[[HEADER9:.*]]
; CHECK:       [[TMP27]]:
; CHECK-NEXT:    br label %[[TMP28]]
; CHECK:       [[HEADER9]]:
; CHECK-DAG:    [[I_027_US_EPIL:%.*]] = phi i32 [ 0, %[[TMP26]] ], [ [[INC13_US_EPIL:%.*]], %[[LATCH10:.*]] ]
; CHECK-DAG:    [[R_028_US_EPIL:%.*]] = phi float [ 0.000000e+00, %[[TMP26]] ], [ [[R_2_US_EPIL:%.*]], %[[LATCH10]] ]
; CHECK-NEXT:    [[CMP6_NOT_US_EPIL:%.*]] = icmp eq i32 [[I_027_US_EPIL]], 0
; CHECK-NEXT:    [[INC_US_EPIL:%.*]] = fadd float [[R_028_US_EPIL]], 1.000000e+00
; CHECK-NEXT:    [[R_2_US_EPIL]] = select i1 [[CMP6_NOT_US_EPIL]], float [[INC_US_EPIL]], float [[R_028_US_EPIL]]
; CHECK-NEXT:    [[INC13_US_EPIL]] = add nuw nsw i32 [[I_027_US_EPIL]], 1
; CHECK-NEXT:    [[CONV_US_EPIL:%.*]] = sitofp i32 [[INC13_US_EPIL]] to float
; CHECK-NEXT:    [[CMP2_US_EPIL:%.*]] = fcmp ogt float [[DOTFR_EPIL]], [[CONV_US_EPIL]]
; CHECK-NEXT:    br label %[[LATCH10]]
; CHECK:       [[LATCH10]]:
; CHECK-NEXT:    br i1 [[CMP2_US_EPIL]], label %[[HEADER9]], label %[[EXIT11:.*]]
; CHECK:       [[EXIT11]]:
; CHECK-NEXT:    br label %[[TMP28]]
; CHECK:       [[TMP28]]:
; CHECK-NEXT:    [[R_0_LCSSA_EPIL_DEMOTED_0:%.*]] = phi float [ [[R_2_US_EPIL]], %[[EXIT11]] ], [ 1.100000e+01, %[[TMP27]] ], [ 0.000000e+00, %[[TMP25]] ]
; CHECK-NEXT:    [[ARRAYIDX15_EPIL:%.*]] = getelementptr inbounds float, ptr [[RET]], i64 [[INDVARS_IV_EPIL]]
; CHECK-NEXT:    store float [[R_0_LCSSA_EPIL_DEMOTED_0]], ptr [[ARRAYIDX15_EPIL]], align 4
; CHECK-NEXT:    [[INDVARS_IV_NEXT_EPIL]] = add nuw nsw i64 [[INDVARS_IV_EPIL]], 1
; CHECK-NEXT:    [[EPIL_ITER_NEXT]] = add nuw nsw i32 [[EPIL_ITER]], 1
; CHECK-NEXT:    [[EPIL_ITER_CMP_NOT:%.*]] = icmp eq i32 [[EPIL_ITER_NEXT]], [[XTRAITER]]
; CHECK-NEXT:    br i1 [[EPIL_ITER_CMP_NOT]], label %[[TMP29:.*]], label %[[TMP30:.*]]
; CHECK:       [[TMP29]]:
; CHECK-NEXT:    br label %[[TMP31:.*]]
; CHECK:       [[TMP30]]:
; CHECK-NEXT:    br label %[[TMP31]]
; CHECK:       [[TMP31]]:
; CHECK-NEXT:    [[SHOULD_CONTINUE_MEM8_0]] = phi i1 [ false, %[[TMP29]] ], [ true, %[[TMP30]] ]
; CHECK-NEXT:    br label %[[LATCH6]]
; CHECK:       [[TMP32]]:
; CHECK-NEXT:    ret void
;
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

attributes #0 = { argmemonly nofree noinline norecurse nosync nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

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
