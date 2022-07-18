; RUN: %opt -passes=test-vector-codegen,verify,adce -S %s -p t.0,t.1 -p i,i2 -p i1,i3 -p storeOf:t.0,storeOf:t.1 -p cmp,cmp1 | FileCheck %s

; CHECK: entry:
; CHECK-NEXT: [[A:%.*]] = load <2 x float>, ptr @a
; CHECK-NEXT: [[B:%.*]] = load <2 x float>, ptr @b
; CHECK-NEXT: [[CMP:%.*]] = fcmp olt <2 x float> [[A]], [[B]]
; CHECK-NEXT: [[BLEND:%.*]] = select <2 x i1> [[CMP]], <2 x float> <float 0.000000e+00, float 1.000000e+00>, <2 x float> <float 2.000000e+00, float 3.000000e+00>
; CHECK-NEXT: store <2 x float> [[BLEND]], ptr @c

target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@a = global [2 x float] zeroinitializer, align 4
@b = global [2 x float] zeroinitializer, align 4
@c = global [2 x float] zeroinitializer, align 4

; Function Attrs: nounwind ssp uwtable
define void @foo() #0 {
entry:
  %i = load float, ptr @a, align 4, !tbaa !5
  %i1 = load float, ptr @b, align 4, !tbaa !5
  %cmp = fcmp olt float %i, %i1
  br i1 %cmp, label %if.then, label %if.else

if.then:                                          ; preds = %entry
  br label %if.end

if.else:                                          ; preds = %entry
  br label %if.end

if.end:                                           ; preds = %if.else, %if.then
  %t.0 = phi float [ 0.000000e+00, %if.then ], [ 2.000000e+00, %if.else ]
  store float %t.0, ptr @c, align 4, !tbaa !5
  %i2 = load float, ptr getelementptr inbounds ([2 x float], ptr @a, i64 0, i64 1), align 4, !tbaa !5
  %i3 = load float, ptr getelementptr inbounds ([2 x float], ptr @b, i64 0, i64 1), align 4, !tbaa !5
  %cmp1 = fcmp olt float %i2, %i3
  br i1 %cmp1, label %if.then2, label %if.else3

if.then2:                                         ; preds = %if.end
  br label %if.end4

if.else3:                                         ; preds = %if.end
  br label %if.end4

if.end4:                                          ; preds = %if.else3, %if.then2
  %t.1 = phi float [ 1.000000e+00, %if.then2 ], [ 3.000000e+00, %if.else3 ]
  store float %t.1, ptr getelementptr inbounds ([2 x float], ptr @c, i64 0, i64 1), align 4, !tbaa !5
  ret void
}

; Function Attrs: argmemonly nocallback nofree nosync nounwind willreturn
declare void @llvm.lifetime.start.p0(i64 immarg, ptr nocapture) #1

; Function Attrs: argmemonly nocallback nofree nosync nounwind willreturn
declare void @llvm.lifetime.end.p0(i64 immarg, ptr nocapture) #1

attributes #0 = { nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }
attributes #1 = { argmemonly nocallback nofree nosync nounwind willreturn }

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
