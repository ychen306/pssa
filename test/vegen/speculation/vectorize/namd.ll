; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=global-slp -do-versioning | FileCheck %s
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

%class.Vector = type { double, double, double }

define void @_ZN20ComputeNonbondedUtil26calc_self_energy_fullelectEP9nonbonded(ptr %params, ptr %i136) {
; CHECK-LABEL: @_ZN20ComputeNonbondedUtil26calc_self_energy_fullelectEP9nonbonded(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[I3801:%.*]] = load ptr, ptr null, align 8
; CHECK-NEXT:    br label [[HEADER:%.*]]
; CHECK:       header:
; CHECK-NEXT:    [[INDVARS_IV322232:%.*]] = phi i64 [ 0, [[ENTRY:%.*]] ], [ [[INDVARS_IV_NEXT3223:%.*]], [[LATCH:%.*]] ]
; CHECK-NEXT:    [[ARRAYIDX1429:%.*]] = getelementptr inbounds [[CLASS_VECTOR:%.*]], ptr [[I136:%.*]], i64 [[INDVARS_IV322232]]
; CHECK-NEXT:    [[Z1447:%.*]] = getelementptr inbounds [[CLASS_VECTOR]], ptr [[I3801]], i64 [[INDVARS_IV322232]], i32 2
; CHECK-NEXT:    [[UGLYGEP:%.*]] = getelementptr i8, ptr [[I136]], i64 8
; CHECK-NEXT:    [[UGLYGEP1:%.*]] = getelementptr i8, ptr [[I3801]], i64 24
; CHECK-NEXT:    [[IDENT_CHECK:%.*]] = icmp ult ptr [[UGLYGEP]], [[UGLYGEP1]]
; CHECK-NEXT:    [[UGLYGEP3:%.*]] = getelementptr i8, ptr [[I3801]], i64 32
; CHECK-NEXT:    [[IDENT_CHECK4:%.*]] = icmp ult ptr [[UGLYGEP3]], [[I136]]
; CHECK-NEXT:    [[TMP0:%.*]] = or i1 [[IDENT_CHECK]], [[IDENT_CHECK4]]
; CHECK-NEXT:    [[UGLYGEP5:%.*]] = getelementptr i8, ptr [[PARAMS:%.*]], i64 8
; CHECK-NEXT:    [[TMP1:%.*]] = mul i64 [[INDVARS_IV322232]], 24
; CHECK-NEXT:    [[TMP2:%.*]] = add i64 [[TMP1]], 24
; CHECK-NEXT:    [[UGLYGEP2:%.*]] = getelementptr i8, ptr [[I3801]], i64 [[TMP2]]
; CHECK-NEXT:    [[IDENT_CHECK6:%.*]] = icmp ult ptr [[UGLYGEP5]], [[UGLYGEP2]]
; CHECK-NEXT:    [[TMP3:%.*]] = mul i64 [[INDVARS_IV322232]], 24
; CHECK-NEXT:    [[TMP4:%.*]] = add i64 [[TMP3]], 32
; CHECK-NEXT:    [[UGLYGEP7:%.*]] = getelementptr i8, ptr [[I3801]], i64 [[TMP4]]
; CHECK-NEXT:    [[IDENT_CHECK8:%.*]] = icmp ult ptr [[UGLYGEP7]], [[PARAMS]]
; CHECK-NEXT:    [[TMP5:%.*]] = or i1 [[IDENT_CHECK6]], [[IDENT_CHECK8]]
; CHECK-NEXT:    [[TMP6:%.*]] = and i1 [[TMP0]], [[TMP5]]
; CHECK-NEXT:    br i1 [[TMP6]], label [[TMP7:%.*]], label [[TMP8:%.*]]
; CHECK:       latch:
; CHECK-NEXT:    br i1 [[SHOULD_CONTINUE_MEM_0:%.*]], label [[HEADER]], label [[EXIT:%.*]]
; CHECK:       exit:
; CHECK-NEXT:    ret void
; CHECK:       7:
; CHECK-NEXT:    br label [[TMP9:%.*]]
; CHECK:       8:
; CHECK-NEXT:    store double 0.000000e+00, ptr [[Z1447]], align 8
; CHECK-NEXT:    br label [[TMP9]]
; CHECK:       9:
; CHECK-NEXT:    [[INDVARS_IV_NEXT3223]] = add nuw nsw i64 [[INDVARS_IV322232]], 1
; CHECK-NEXT:    [[ARRAYIDX1432_1:%.*]] = getelementptr inbounds [[CLASS_VECTOR]], ptr [[I3801]], i64 [[INDVARS_IV_NEXT3223]]
; CHECK-NEXT:    br i1 [[TMP6]], label [[TMP10:%.*]], label [[TMP11:%.*]]
; CHECK:       10:
; CHECK-NEXT:    store <2 x double> zeroinitializer, ptr [[Z1447]], align 8
; CHECK-NEXT:    [[I403:%.*]] = load double, ptr [[ARRAYIDX1429]], align 8, !alias.scope !0, !noalias !3
; CHECK-NEXT:    [[I404:%.*]] = load double, ptr [[PARAMS]], align 8, !alias.scope !5, !noalias !8
; CHECK-NEXT:    br label [[TMP12:%.*]]
; CHECK:       11:
; CHECK-NEXT:    [[I403_CLONE:%.*]] = load double, ptr [[ARRAYIDX1429]], align 8
; CHECK-NEXT:    [[I404_CLONE:%.*]] = load double, ptr [[PARAMS]], align 8
; CHECK-NEXT:    br label [[TMP12]]
; CHECK:       12:
; CHECK-NEXT:    [[I404_VER_DEMOTED_0:%.*]] = phi double [ [[I404]], [[TMP10]] ], [ [[I404_CLONE]], [[TMP11]] ]
; CHECK-NEXT:    [[MUL1456:%.*]] = fmul fast double [[I404_VER_DEMOTED_0]], 0.000000e+00
; CHECK-NEXT:    br i1 [[TMP6]], label [[TMP13:%.*]], label [[TMP14:%.*]]
; CHECK:       13:
; CHECK-NEXT:    br label [[TMP17:%.*]]
; CHECK:       14:
; CHECK-NEXT:    store double 0.000000e+00, ptr [[ARRAYIDX1432_1]], align 8
; CHECK-NEXT:    br label [[TMP17]]
; CHECK:       15:
; CHECK-NEXT:    br label [[TMP18:%.*]]
; CHECK:       16:
; CHECK-NEXT:    br label [[TMP18]]
; CHECK:       17:
; CHECK-NEXT:    br i1 false, label [[TMP15:%.*]], label [[TMP16:%.*]]
; CHECK:       18:
; CHECK-NEXT:    [[SHOULD_CONTINUE_MEM_0]] = phi i1 [ false, [[TMP15]] ], [ true, [[TMP16]] ]
; CHECK-NEXT:    br label [[LATCH]]
;
for.end1421:
  %i3801 = load ptr, ptr null, align 8
  br label %for.body1427.preheader.new

for.body1427.preheader.new:                       ; preds = %for.end1421
  br label %for.body1427

for.cond.cleanup1426.unr-lcssa.loopexit:          ; preds = %for.body1427
  ret void

for.body1427:                                     ; preds = %for.body1427, %for.body1427.preheader.new
  %indvars.iv322232 = phi i64 [ 0, %for.body1427.preheader.new ], [ %indvars.iv.next3223, %for.body1427 ]
  %arrayidx1429 = getelementptr inbounds %class.Vector, ptr %i136, i64 %indvars.iv322232
  %z1447 = getelementptr inbounds %class.Vector, ptr %i3801, i64 %indvars.iv322232, i32 2
  store double 0.000000e+00, ptr %z1447, align 8
  %i403 = load double, ptr %arrayidx1429, align 8
  %i404 = load double, ptr %params, align 8
  %mul1456 = fmul fast double %i404, 0.000000e+00
  %indvars.iv.next3223 = add nuw nsw i64 %indvars.iv322232, 1
  %arrayidx1432.1 = getelementptr inbounds %class.Vector, ptr %i3801, i64 %indvars.iv.next3223
  store double 0.000000e+00, ptr %arrayidx1432.1, align 8
  br i1 false, label %for.cond.cleanup1426.unr-lcssa.loopexit, label %for.body1427
}
