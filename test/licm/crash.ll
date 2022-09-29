; RUN: %opt -passes=glicm -o /dev/null %s

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

define void @e() {
entry:
  br label %for.cond1thread-pre-split

for.cond1thread-pre-split:                        ; preds = %for.end, %entry
  br label %for.end

for.body3:                                        ; preds = %for.body3
  br i1 false, label %for.cond1.for.end_crit_edge, label %for.body3

for.cond1.for.end_crit_edge:                      ; preds = %for.body3
  br label %for.end

for.end:                                          ; preds = %for.cond1.for.end_crit_edge, %for.cond1thread-pre-split
  %f.0.lcssa = phi double [ 0.000000e+00, %for.cond1.for.end_crit_edge ], [ 0.000000e+00, %for.cond1thread-pre-split ]
  br i1 false, label %for.end4.loopexit, label %for.cond1thread-pre-split

for.end4.loopexit:                                ; preds = %for.end
  ret void
}
