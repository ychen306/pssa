; RUN: %opt -passes=print-live-insts %s -o /dev/null | FileCheck %s

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

define void @b() {
entry:
  br label %for.body

for.body:                                         ; preds = %if.end, %entry
  %or.cond = select i1 false, i1 false, i1 false
  br i1 %or.cond, label %for.inc.preheader, label %if.end

for.inc.preheader:                                ; preds = %for.body
  br label %if.end.loopexit

if.end.loopexit:                                  ; preds = %for.inc.preheader
  br label %if.end

if.end:                                           ; preds = %if.end.loopexit, %for.body
  %c.2 = phi i32 [ 0, %for.body ], [ 0, %if.end.loopexit ]
  %cmp.not = icmp eq i32 %c.2, 0
  br i1 %cmp.not, label %for.end5, label %for.body

for.end5:                                         ; preds = %if.end
  ret void
}
