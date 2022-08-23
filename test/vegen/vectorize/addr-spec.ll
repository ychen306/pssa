; Not vectorizable because address is not directly speculable
; RUN: %opt -passes=global-slp %s -S | FileCheck %s

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@arr_17 = external global [12 x [13 x [15 x [22 x [18 x i32]]]]]

define void @_Z4testhttbxihbayatx(i64 %0) {
; CHECK-LABEL: @_Z4testhttbxihbayatx(
; CHECK-NEXT:  for.cond13.preheader.preheader:
; CHECK-NEXT:    br label %[[FOR_COND13_PREHEADER:.*]]
; CHECK:       for.cond13.preheader:
; CHECK-NEXT:    br i1 true, label %[[FOR_BODY32_LR_PH:.*]], label %[[FOR_COND_CLEANUP31:.*]]
; CHECK:       for.cond.cleanup.loopexit:
; CHECK-NEXT:    br label %[[FOR_COND_CLEANUP:.*]]
; CHECK:       for.cond.cleanup:
; CHECK-NEXT:    ret void
; CHECK:       for.body32.lr.ph:
; CHECK-NEXT:    br label %[[FOR_BODY32:.*]]
; CHECK:       for.cond.cleanup31.loopexit:
; CHECK-NEXT:    br label %[[FOR_COND_CLEANUP31]]
; CHECK:       for.cond.cleanup31:
; CHECK-NEXT:    br i1 false, label %[[FOR_COND13_PREHEADER]], label %[[FOR_COND_CLEANUP_LOOPEXIT:.*]]
; CHECK:       for.body32:
; CHECK-NEXT:    [[CONV23119:%.*]] = phi i32 [ 0, %[[FOR_BODY32_LR_PH]] ], [ [[SEXT127:%.*]], %[[TMP1:.*]] ]
; CHECK-NEXT:    [[TOBOOL_NOT:%.*]] = icmp eq i64 [[TMP0:%.*]], 0
; CHECK-NEXT:    br i1 [[TOBOOL_NOT]], label %[[FOR_COND_CLEANUP62_THREAD:.*]], label %[[LAND_RHS:.*]]
; CHECK:       for.cond.cleanup62.thread:
; CHECK-NEXT:    [[INDVARS:%.*]] = zext i32 [[CONV23119]] to i64
; CHECK-NEXT:    [[SEXT128:%.*]] = shl i64 [[INDVARS]], 48
; CHECK-NEXT:    [[DOTPRE:%.*]] = ashr exact i64 [[SEXT128]], 48
; CHECK-NEXT:    [[ARRAYIDX73130:%.*]] = getelementptr inbounds [22 x [18 x i32]], ptr @arr_17, i64 0, i64 [[DOTPRE]], i64 0
; CHECK-NEXT:    store i32 0, ptr [[ARRAYIDX73130]], align 8
; CHECK-NEXT:    br label %[[TMP1]]
; CHECK:       land.rhs:
; CHECK-NEXT:    [[IDXPROM47:%.*]] = sext i32 [[CONV23119]] to i64
; CHECK-NEXT:    br label %[[FOR_COND_CLEANUP62_THREAD133:.*]]
; CHECK:       for.cond.cleanup62.thread133:
; CHECK-NEXT:    [[ARRAYIDX73136:%.*]] = getelementptr inbounds [22 x [18 x i32]], ptr @arr_17, i64 0, i64 [[IDXPROM47]], i64 1
; CHECK-NEXT:    store i32 0, ptr [[ARRAYIDX73136]], align 4
; CHECK-NEXT:    br label %[[TMP1]]
; CHECK:       1:
; CHECK-NEXT:    [[SEXT127]] = add i32 [[CONV23119]], 1
; CHECK-NEXT:    [[CMP30:%.*]] = icmp sgt i32 0, [[CONV23119]]
; CHECK-NEXT:    br i1 [[CMP30]], label %[[FOR_BODY32]], label %[[FOR_COND_CLEANUP31_LOOPEXIT:.*]]
;
for.cond13.preheader.preheader:
  br label %for.cond13.preheader

for.cond13.preheader:                             ; preds = %for.cond.cleanup31, %for.cond13.preheader.preheader
  br i1 true, label %for.body32.lr.ph, label %for.cond.cleanup31

for.cond.cleanup.loopexit:                        ; preds = %for.cond.cleanup31
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.loopexit
  ret void

for.body32.lr.ph:                                 ; preds = %for.cond13.preheader
  br label %for.body32

for.cond.cleanup31.loopexit:                      ; preds = %1
  br label %for.cond.cleanup31

for.cond.cleanup31:                               ; preds = %for.cond.cleanup31.loopexit, %for.cond13.preheader
  br i1 false, label %for.cond13.preheader, label %for.cond.cleanup.loopexit

for.body32:                                       ; preds = %1, %for.body32.lr.ph
  %conv23119 = phi i32 [ 0, %for.body32.lr.ph ], [ %sext127, %1 ]
  %tobool.not = icmp eq i64 %0, 0
  br i1 %tobool.not, label %for.cond.cleanup62.thread, label %land.rhs

for.cond.cleanup62.thread:                        ; preds = %for.body32
  %indvars = zext i32 %conv23119 to i64
  %sext128 = shl i64 %indvars, 48
  %.pre = ashr exact i64 %sext128, 48
  %arrayidx73130 = getelementptr inbounds [22 x [18 x i32]], ptr @arr_17, i64 0, i64 %.pre, i64 0
  store i32 0, ptr %arrayidx73130, align 8
  br label %1

land.rhs:                                         ; preds = %for.body32
  %idxprom47 = sext i32 %conv23119 to i64
  br label %for.cond.cleanup62.thread133

for.cond.cleanup62.thread133:                     ; preds = %land.rhs
  %arrayidx73136 = getelementptr inbounds [22 x [18 x i32]], ptr @arr_17, i64 0, i64 %idxprom47, i64 1
  store i32 0, ptr %arrayidx73136, align 4
  br label %1

1:                                                ; preds = %for.cond.cleanup62.thread133, %for.cond.cleanup62.thread
  %sext127 = add i32 %conv23119, 1
  %cmp30 = icmp sgt i32 0, %conv23119
  br i1 %cmp30, label %for.body32, label %for.cond.cleanup31.loopexit
}
