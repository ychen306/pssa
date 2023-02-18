; RUN: %opt -passes=print-reductions %s -o /dev/null | FileCheck %s

; CHECK: %indvars.iv.next.lcssa6 = phi i64 [ %indvars.iv.next, %for.body6.i ] is (add (i64 1):for.inc.i) : (not i1 false)

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

define void @f() {
for.inc.i.preheader:
  br label %for.inc.i

for.body6.i:                                      ; preds = %for.inc.i
  br i1 false, label %for.inc.i, label %for.body6.i.for.inc8.i.loopexit_crit_edge

for.inc.i:                                        ; preds = %for.body6.i, %for.inc.i.preheader
  %indvars.iv = phi i64 [ 0, %for.inc.i.preheader ], [ %indvars.iv.next, %for.body6.i ]
  %indvars.iv.next = add nsw i64 %indvars.iv, 1
  br i1 false, label %for.inc.i.for.inc8.i.loopexit_crit_edge, label %for.body6.i

for.body6.i.for.inc8.i.loopexit_crit_edge:        ; preds = %for.body6.i
  %indvars.iv.next.lcssa6 = phi i64 [ %indvars.iv.next, %for.body6.i ]
  br label %UnifiedReturnBlock

for.inc.i.for.inc8.i.loopexit_crit_edge:          ; preds = %for.inc.i
  br label %UnifiedReturnBlock

UnifiedReturnBlock:                               ; preds = %for.inc.i.for.inc8.i.loopexit_crit_edge, %for.body6.i.for.inc8.i.loopexit_crit_edge
  ret void
}
