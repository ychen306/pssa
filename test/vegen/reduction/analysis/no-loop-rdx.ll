; RUN: %opt -passes=print-reductions %s -o /dev/null | FileCheck %s

; CHECK-NOT: Reduction for %inc14.lcssa

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@.str = private constant [4 x i8] c"%d\0A\00"

define i32 @main() {
for.body.preheader:
  br label %for.body

for.body:                                         ; preds = %if.end, %for.body.preheader
  %inc1320 = phi i16 [ %inc14, %if.end ], [ 1, %for.body.preheader ]
  %inc = add i16 %inc1320, 1
  br i1 false, label %if.end, label %if.then

if.then:                                          ; preds = %for.body
  br label %for.end

for.end:                                          ; preds = %if.then
  br label %if.end

if.end:                                           ; preds = %for.end, %for.body
  %inc14 = phi i16 [ 0, %for.end ], [ %inc, %for.body ]
  br i1 true, label %for.cond.for.end8_crit_edge.loopexit, label %for.body

for.cond.for.end8_crit_edge.loopexit:             ; preds = %if.end
  %inc14.lcssa = phi i16 [ %inc14, %if.end ]
  br label %for.end8

for.end8:                                         ; preds = %for.cond.for.end8_crit_edge.loopexit
  %conv9 = sext i16 %inc14.lcssa to i32
  call void (ptr, i32, ...) @printf(ptr @.str, i32 %conv9)
  ret i32 0
}

declare void @printf(...)
