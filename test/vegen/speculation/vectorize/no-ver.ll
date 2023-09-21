; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=global-slp -do-versioning | FileCheck %s
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; We can infer versionings, individually, for packs in this program, but the problem is
; collectively, the versionings are not feasible to lower.
; The point of this test is to detect this case and abort versioning.

@a = external global ptr

define i32 @d() {
; CHECK-LABEL: @d(
; CHECK-NEXT:  entry:
; CHECK-NEXT:    br i1 false, label [[TMP0:%.*]], label [[TMP1:%.*]]
; CHECK:       0:
; CHECK-NEXT:    br i1 false, label [[TMP5:%.*]], label [[TMP6:%.*]]
; CHECK:       1:
; CHECK-NEXT:    br label [[HEADER:%.*]]
; CHECK:       header:
; CHECK-NEXT:    br i1 false, label [[TMP2:%.*]], label [[TMP3:%.*]]
; CHECK:       latch:
; CHECK-NEXT:    br i1 [[SHOULD_CONTINUE_MEM_0:%.*]], label [[HEADER]], label [[EXIT:%.*]]
; CHECK:       exit:
; CHECK-NEXT:    br label [[TMP32:%.*]]
; CHECK:       2:
; CHECK-NEXT:    br label [[TMP4:%.*]]
; CHECK:       3:
; CHECK-NEXT:    br label [[TMP4]]
; CHECK:       4:
; CHECK-NEXT:    [[SHOULD_CONTINUE_MEM_0]] = phi i1 [ false, [[TMP2]] ], [ true, [[TMP3]] ]
; CHECK-NEXT:    br label [[LATCH:%.*]]
; CHECK:       5:
; CHECK-NEXT:    br label [[TMP8:%.*]]
; CHECK:       6:
; CHECK-NEXT:    [[TMP7:%.*]] = load ptr, ptr @a, align 8
; CHECK-NEXT:    [[ARRAYIDX1_1:%.*]] = getelementptr inbounds float, ptr [[TMP7]], i64 1
; CHECK-NEXT:    [[DOTVEC:%.*]] = load <2 x float>, ptr [[TMP7]], align 4
; CHECK-NEXT:    br label [[TMP8]]
; CHECK:       8:
; CHECK-NEXT:    [[DOTVEC_MEM_0:%.*]] = phi <2 x float> [ undef, [[TMP5]] ], [ [[DOTVEC]], [[TMP6]] ]
; CHECK-NEXT:    [[TMP9:%.*]] = shufflevector <2 x float> [[DOTVEC_MEM_0]], <2 x float> undef, <4 x i32> <i32 undef, i32 undef, i32 undef, i32 1>
; CHECK-NEXT:    [[TMP10:%.*]] = insertelement <4 x float> [[TMP9]], float 1.000000e+00, i64 0
; CHECK-NEXT:    [[TMP11:%.*]] = insertelement <4 x float> [[TMP10]], float 0.000000e+00, i64 1
; CHECK-NEXT:    [[TMP12:%.*]] = insertelement <4 x float> [[TMP11]], float 2.000000e+00, i64 2
; CHECK-NEXT:    br i1 false, label [[TMP13:%.*]], label [[TMP14:%.*]]
; CHECK:       13:
; CHECK-NEXT:    br label [[TMP15:%.*]]
; CHECK:       14:
; CHECK-NEXT:    br label [[TMP15]]
; CHECK:       15:
; CHECK-NEXT:    [[DOTDEMOTED2_0:%.*]] = phi i1 [ false, [[TMP13]] ], [ true, [[TMP14]] ]
; CHECK-NEXT:    [[TMP16:%.*]] = insertelement <4 x i1> <i1 true, i1 true, i1 true, i1 undef>, i1 [[DOTDEMOTED2_0]], i64 3
; CHECK-NEXT:    call void @llvm.masked.store.v4f32.p0(<4 x float> [[TMP12]], ptr @d, i32 4, <4 x i1> [[TMP16]])
; CHECK-NEXT:    br i1 false, label [[TMP17:%.*]], label [[TMP18:%.*]]
; CHECK:       17:
; CHECK-NEXT:    [[CALL_1:%.*]] = tail call i32 (...) @h()
; CHECK-NEXT:    br label [[TMP19:%.*]]
; CHECK:       18:
; CHECK-NEXT:    br label [[TMP19]]
; CHECK:       19:
; CHECK-NEXT:    [[TMP20:%.*]] = load ptr, ptr @a, align 8
; CHECK-NEXT:    [[TMP21:%.*]] = load float, ptr [[TMP20]], align 4
; CHECK-NEXT:    [[TMP22:%.*]] = shufflevector <2 x float> [[DOTVEC_MEM_0]], <2 x float> undef, <4 x i32> <i32 1, i32 0, i32 undef, i32 undef>
; CHECK-NEXT:    [[TMP23:%.*]] = insertelement <4 x float> [[TMP22]], float [[TMP21]], i64 2
; CHECK-NEXT:    [[TMP24:%.*]] = insertelement <4 x float> [[TMP23]], float [[TMP21]], i64 3
; CHECK-NEXT:    br i1 false, label [[TMP25:%.*]], label [[TMP26:%.*]]
; CHECK:       25:
; CHECK-NEXT:    br label [[TMP27:%.*]]
; CHECK:       26:
; CHECK-NEXT:    br label [[TMP27]]
; CHECK:       27:
; CHECK-NEXT:    [[DOTDEMOTED_0:%.*]] = phi i1 [ false, [[TMP25]] ], [ true, [[TMP26]] ]
; CHECK-NEXT:    [[DOTDEMOTED1_0:%.*]] = phi i1 [ false, [[TMP25]] ], [ true, [[TMP26]] ]
; CHECK-NEXT:    [[TMP28:%.*]] = insertelement <4 x i1> undef, i1 [[DOTDEMOTED1_0]], i64 0
; CHECK-NEXT:    [[TMP29:%.*]] = insertelement <4 x i1> [[TMP28]], i1 [[DOTDEMOTED_0]], i64 1
; CHECK-NEXT:    [[TMP30:%.*]] = insertelement <4 x i1> [[TMP29]], i1 true, i64 2
; CHECK-NEXT:    [[TMP31:%.*]] = insertelement <4 x i1> [[TMP30]], i1 true, i64 3
; CHECK-NEXT:    call void @llvm.masked.store.v4f32.p0(<4 x float> [[TMP24]], ptr getelementptr inbounds (float, ptr getelementptr inbounds ([3 x float], ptr @d, i64 1), i64 1), i32 4, <4 x i1> [[TMP31]])
; CHECK-NEXT:    br label [[TMP32]]
; CHECK:       32:
; CHECK-NEXT:    ret i32 0
;
for.body.lr.ph:
  br i1 false, label %for.body.preheader, label %for.body.lr.ph.split.us

for.body.preheader:                               ; preds = %for.body.lr.ph
  br label %for.body.preheader.new

for.body.preheader.new:                           ; preds = %for.body.preheader
  br label %for.body

for.body.lr.ph.split.us:                          ; preds = %for.body.lr.ph
  br label %for.body.us

for.body.us:                                      ; preds = %for.body.us, %for.body.lr.ph.split.us
  br i1 false, label %for.end.loopexit21, label %for.body.us

for.body:                                         ; preds = %for.body.preheader.new
  br label %if.then

if.then:                                          ; preds = %for.body
  store float 0.000000e+00, ptr getelementptr inbounds (float, ptr @d, i64 1), align 4
  store float 1.000000e+00, ptr @d, align 4
  store float 2.000000e+00, ptr getelementptr inbounds (float, ptr @d, i64 2), align 4
  br label %for.inc

for.inc:                                          ; preds = %if.then
  br i1 false, label %if.else.1, label %if.then.1

if.then.1:                                        ; preds = %for.inc
  %0 = load ptr, ptr @a, align 8
  %arrayidx1.1 = getelementptr inbounds float, ptr %0, i64 1
  %1 = load float, ptr %arrayidx1.1, align 4
  store float %1, ptr getelementptr inbounds (float, ptr getelementptr inbounds ([3 x float], ptr @d, i64 1), i64 1), align 4
  store float %1, ptr getelementptr inbounds ([3 x float], ptr @d, i64 1), align 4
  %2 = load float, ptr %0, align 4
  store float %2, ptr getelementptr inbounds (float, ptr getelementptr inbounds ([3 x float], ptr @d, i64 1), i64 2), align 4
  br label %for.inc.1

if.else.1:                                        ; preds = %for.inc
  %call.1 = tail call i32 (...) @h()
  br label %for.inc.1

for.inc.1:                                        ; preds = %if.else.1, %if.then.1
  br label %if.then.2

if.then.2:                                        ; preds = %for.inc.1
  %3 = load ptr, ptr @a, align 8
  %4 = load float, ptr %3, align 4
  store float %4, ptr getelementptr inbounds (float, ptr getelementptr inbounds ([3 x float], ptr @d, i64 2), i64 1), align 4
  store float %4, ptr getelementptr inbounds ([3 x float], ptr @d, i64 2), align 4
  br label %for.end.loopexit

for.end.loopexit:                                 ; preds = %if.then.2
  br label %for.end

for.end.loopexit21:                               ; preds = %for.body.us
  br label %for.end

for.end:                                          ; preds = %for.end.loopexit21, %for.end.loopexit
  ret i32 0
}

declare i32 @h(...)
