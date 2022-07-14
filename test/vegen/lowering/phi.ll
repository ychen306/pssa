; RUN: %opt -passes=test-vector-codegen %s -p a1,a2 -p storeOf:a1,storeOf:a2 -p i,i2 -p add,add1 -p i1,i3 -p sub,sub2 -p i4,i6 -p i5,i7 -S | FileCheck %s

; CHECK: entry:
; CHECK-NEXT:   %cmp = fcmp ogt float %x, %y
; CHECK-NEXT:   br i1 %cmp, label %[[IF_TRUE:.*]], label %[[IF_FALSE:.*]]

; CHECK: [[IF_TRUE]]:
; CHECK-NEXT:   [[B1:%.*]] = load <2 x float>, ptr @b, align 16
; CHECK-NEXT:   [[C1:%.*]] = load <2 x float>, ptr @c, align 16
; CHECK-NEXT:   [[ADD:%.*]] = fadd <2 x float> [[B1]], [[C1]]
; CHECK-NEXT:   br label %[[JOIN:.*]]

; CHECK: [[IF_FALSE]]:
; CHECK-NEXT:   [[B2:%.*]] = load <2 x float>, ptr getelementptr inbounds ([8 x float], ptr @b, i64 0, i64 4), align 16
; CHECK-NEXT:   [[C2:%.*]] = load <2 x float>, ptr getelementptr inbounds ([8 x float], ptr @c, i64 0, i64 4), align 16
; CHECK-NEXT:   [[SUB:%.*]] = fsub <2 x float> [[B2]], [[C2]]
; CHECK-NEXT:   br label %[[JOIN]]

; CHECK: [[JOIN]]:
; CHECK-NEXT:   [[PHI:%.*]] = phi <2 x float> [ [[ADD]], %[[IF_TRUE]] ], [ [[SUB]], %[[IF_FALSE]] ]
; CHECK-NEXT:   store <2 x float> [[PHI]], ptr @a, align 16
; CHECK-NEXT:   ret void

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@b = local_unnamed_addr global [8 x float] zeroinitializer, align 16
@c = local_unnamed_addr global [8 x float] zeroinitializer, align 16
@a = local_unnamed_addr global [4 x float] zeroinitializer, align 16

; Function Attrs: mustprogress nofree norecurse nosync nounwind ssp willreturn uwtable
define void @foo(float noundef %x, float noundef %y) local_unnamed_addr #0 {
entry:
  %cmp = fcmp ogt float %x, %y
  br i1 %cmp, label %if.then, label %if.else

if.then:                                          ; preds = %entry
  %i = load float, ptr @b, align 16, !tbaa !5
  %i1 = load float, ptr @c, align 16, !tbaa !5
  %add = fadd float %i, %i1
  %i2 = load float, ptr getelementptr inbounds ([8 x float], ptr @b, i64 0, i64 1), align 4, !tbaa !5
  %i3 = load float, ptr getelementptr inbounds ([8 x float], ptr @c, i64 0, i64 1), align 4, !tbaa !5
  %add1 = fadd float %i2, %i3
  br label %if.end

if.else:                                          ; preds = %entry
  %i4 = load float, ptr getelementptr inbounds ([8 x float], ptr @b, i64 0, i64 4), align 16, !tbaa !5
  %i5 = load float, ptr getelementptr inbounds ([8 x float], ptr @c, i64 0, i64 4), align 16, !tbaa !5
  %sub = fsub float %i4, %i5
  %i6 = load float, ptr getelementptr inbounds ([8 x float], ptr @b, i64 0, i64 5), align 4, !tbaa !5
  %i7 = load float, ptr getelementptr inbounds ([8 x float], ptr @c, i64 0, i64 5), align 4, !tbaa !5
  %sub2 = fsub float %i6, %i7
  br label %if.end

if.end:                                           ; preds = %if.else, %if.then
  %a2 = phi float [ %add1, %if.then ], [ %sub2, %if.else ]
  %a1 = phi float [ %add, %if.then ], [ %sub, %if.else ]
  store float %a1, ptr @a, align 16, !tbaa !5
  store float %a2, ptr getelementptr inbounds ([4 x float], ptr @a, i64 0, i64 1), align 4, !tbaa !5
  ret void
}

attributes #0 = { mustprogress nofree norecurse nosync nounwind ssp willreturn uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

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
