; RUN: %opt -passes=print-reductions %s -o /dev/null | FileCheck %s

; CHECK: Reduction for %pn = phi i16 [ %inc4.4, %if.then.4 ], [ %inc48.3, %if.end.3 ] is (add (i16 1)@(not i1 false) (i16 1)@(not i1 false)) : true

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@.str = private constant [4 x i8] c"%d\0A\00"

define i32 @main() {
if.end.2:
  br i1 false, label %if.end.3, label %if.then.3

if.then.3:                                        ; preds = %if.end.2
  %inc4.3 = add i16 0, 1
  br label %if.end.3

if.end.3:                                         ; preds = %if.then.3, %if.end.2
  %inc48.3 = phi i16 [ %inc4.3, %if.then.3 ], [ 0, %if.end.2 ]
  br i1 false, label %if.end.4, label %if.then.4

if.then.4:                                        ; preds = %if.end.3
  %inc4.4 = add i16 1, 1
  br label %if.end.4

if.end.4:                                         ; preds = %if.then.4, %if.end.3
  %pn  = phi i16 [ %inc4.4, %if.then.4 ], [ %inc48.3, %if.end.3 ]
  %conv = sext i16 %pn to i32
  tail call void (ptr, i32, ...) @printf(ptr @.str, i32 %conv)
  ret i32 0
}

declare void @printf(...)
