; RUN: %opt -passes=global-slp %s -o /dev/null

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@arr_44 = external global [20 x [10 x [11 x [16 x i32]]]]

define void @_Z4testbyaayaahjjbtiahhsat() {
entry:
  %tobool97.not = icmp eq i8 0, 0
  br label %for.cond2.preheader.us

for.cond2.preheader.us:                           ; preds = %for.cond2.for.cond.cleanup6_crit_edge.split.us262, %entry
  br label %for.cond.cleanup13.us

for.cond.cleanup13.us:                            ; preds = %for.cond2.preheader.us
  br i1 %tobool97.not, label %for.body51.lr.ph.split.us261, label %for.body51.us.us

for.body51.lr.ph.split.us261:                     ; preds = %for.cond.cleanup13.us
  br label %for.cond46.for.cond.cleanup50_crit_edge.us

for.cond46.for.cond.cleanup50_crit_edge.us:       ; preds = %for.body113.us.us.preheader, %for.cond60.preheader.us.us, %for.body51.us.us, %for.body51.lr.ph.split.us261
  br label %for.cond2.for.cond.cleanup6_crit_edge.split.us262

for.body51.us.us:                                 ; preds = %for.cond.cleanup13.us
  %tobool59.not.us256 = icmp eq i64 0, 0
  br i1 %tobool59.not.us256, label %for.cond46.for.cond.cleanup50_crit_edge.us, label %for.cond60.preheader.us.us

for.cond60.preheader.us.us:                       ; preds = %for.body51.us.us
  %0 = load i8, ptr null, align 8
  br i1 false, label %for.cond46.for.cond.cleanup50_crit_edge.us, label %for.body113.us.us.preheader

for.body113.us.us.preheader:                      ; preds = %for.cond60.preheader.us.us
  %tobool134.us.us = icmp ule i8 %0, 0
  %conv135.us.us = zext i1 %tobool134.us.us to i32
  store i32 %conv135.us.us, ptr @arr_44, align 32
  %1 = load i8, ptr null, align 1
  %tobool134.us.us.1 = icmp ule i8 %1, 0
  %conv135.us.us.1 = zext i1 %tobool134.us.us.1 to i32
  store i32 %conv135.us.us.1, ptr getelementptr inbounds ([20 x [10 x [11 x [16 x i32]]]], ptr @arr_44, i64 0, i64 0, i64 0, i64 0, i64 1), align 4
  br label %for.cond46.for.cond.cleanup50_crit_edge.us

for.cond2.for.cond.cleanup6_crit_edge.split.us262: ; preds = %for.cond46.for.cond.cleanup50_crit_edge.us
  br i1 false, label %for.cond2.preheader.us, label %for.cond.cleanup.loopexit

for.cond.cleanup.loopexit:                        ; preds = %for.cond2.for.cond.cleanup6_crit_edge.split.us262
  ret void
}
