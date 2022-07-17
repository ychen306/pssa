; RUN: %opt -passes=test-vector-codegen %s -p storeOf:i,storeOf:i2 -p storeOf:i1,storeOf:i3 -p i,i2 -p i1,i3 -p cmp,cmp1 -S | FileCheck %s

; CHECK: entry:
; CHECK-NEXT:   [[B:%.*]] = load <2 x float>, ptr @b, align 16
; CHECK-NEXT:   [[C:%.*]] = load <2 x float>, ptr @c, align 16
; CHECK-NEXT:   [[VCMP:%.*]] = fcmp olt <2 x float> [[B]], [[C]]
; CHECK-NEXT:   [[VCMP_NOT:%.*]] = xor <2 x i1> [[VCMP]], <i1 true, i1 true>
; CHECK-NEXT:   call void @llvm.masked.store.v2f32.p0(<2 x float> [[C]], ptr @a, i32 16, <2 x i1> [[VCMP_NOT]])
; CHECK-NEXT:   call void @llvm.masked.store.v2f32.p0(<2 x float> [[B]], ptr @a, i32 16, <2 x i1> [[VCMP]])
; CHECK-NEXT:   ret void

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@b = global [8 x float] zeroinitializer, align 16
@c = global [8 x float] zeroinitializer, align 16
@a = global [4 x float] zeroinitializer, align 16

; Function Attrs: nounwind ssp uwtable
define void @foo(float noundef %x, float noundef %y) #0 {
entry:
  %i = load float, ptr @b, align 16, !tbaa !5
  %i1 = load float, ptr @c, align 16, !tbaa !5
  %cmp = fcmp olt float %i, %i1
  br i1 %cmp, label %if.then, label %if.else

if.then:                                          ; preds = %entry
  store float %i, ptr @a, align 16, !tbaa !5
  br label %if.end

if.else:                                          ; preds = %entry
  store float %i1, ptr @a, align 16, !tbaa !5
  br label %if.end

if.end:                                           ; preds = %if.else, %if.then
  %i2 = load float, ptr getelementptr inbounds ([8 x float], ptr @b, i64 0, i64 1), align 4, !tbaa !5
  %i3 = load float, ptr getelementptr inbounds ([8 x float], ptr @c, i64 0, i64 1), align 4, !tbaa !5
  %cmp1 = fcmp olt float %i2, %i3
  br i1 %cmp1, label %if.then2, label %if.else3

if.then2:                                         ; preds = %if.end
  store float %i2, ptr getelementptr inbounds ([4 x float], ptr @a, i64 0, i64 1), align 4, !tbaa !5
  br label %if.end4

if.else3:                                         ; preds = %if.end
  store float %i3, ptr getelementptr inbounds ([4 x float], ptr @a, i64 0, i64 1), align 4, !tbaa !5
  br label %if.end4

if.end4:                                          ; preds = %if.else3, %if.then2
  ret void
}

attributes #0 = { nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

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
