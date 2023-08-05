; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: %opt %s -S -passes=global-slp -do-versioning | FileCheck %s
; ModuleID = 'small.i'
source_filename = "small.i"
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

; CHECK: load <8 x i16>, ptr

@b = local_unnamed_addr global i16 0, align 2
@c = local_unnamed_addr global ptr null, align 8
@a = external local_unnamed_addr global [0 x i16], align 2

; Function Attrs: mustprogress nofree norecurse nosync nounwind ssp uwtable
define void @_Z1dv() local_unnamed_addr #0 {
entry:
  %0 = load ptr, ptr @c, align 8, !tbaa !5
  br i1 false, label %for.cond.cleanup.unr-lcssa, label %entry.new

entry.new:                                        ; preds = %entry
  br label %for.body

for.cond.cleanup.unr-lcssa.loopexit:              ; preds = %for.body
  %indvars.iv.unr.ph = phi i64 [ %indvars.iv.next.7, %for.body ]
  br label %for.cond.cleanup.unr-lcssa

for.cond.cleanup.unr-lcssa:                       ; preds = %for.cond.cleanup.unr-lcssa.loopexit, %entry
  %indvars.iv.unr = phi i64 [ 1, %entry ], [ %indvars.iv.unr.ph, %for.cond.cleanup.unr-lcssa.loopexit ]
  br i1 true, label %for.body.epil.preheader, label %for.cond.cleanup

for.body.epil.preheader:                          ; preds = %for.cond.cleanup.unr-lcssa
  br label %for.body.epil

for.body.epil:                                    ; preds = %for.body.epil, %for.body.epil.preheader
  %indvars.iv.epil = phi i64 [ %indvars.iv.unr, %for.body.epil.preheader ], [ %indvars.iv.next.epil, %for.body.epil ]
  %epil.iter = phi i64 [ 0, %for.body.epil.preheader ], [ %epil.iter.next, %for.body.epil ]
  %arrayidx.epil = getelementptr inbounds i16, ptr %0, i64 %indvars.iv.epil
  %1 = load i16, ptr %arrayidx.epil, align 2, !tbaa !9
  %arrayidx2.epil = getelementptr inbounds [0 x i16], ptr @a, i64 0, i64 %indvars.iv.epil
  store i16 %1, ptr %arrayidx2.epil, align 2, !tbaa !9
  store i16 0, ptr @b, align 2, !tbaa !9
  %indvars.iv.next.epil = add nuw nsw i64 %indvars.iv.epil, 1
  %exitcond.epil = icmp eq i64 %indvars.iv.next.epil, 4294967296
  %epil.iter.next = add i64 %epil.iter, 1
  %epil.iter.cmp = icmp ne i64 %epil.iter.next, 7
  br i1 %epil.iter.cmp, label %for.body.epil, label %for.cond.cleanup.epilog-lcssa, !llvm.loop !11

for.cond.cleanup.epilog-lcssa:                    ; preds = %for.body.epil
  br label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.cond.cleanup.unr-lcssa, %for.cond.cleanup.epilog-lcssa
  ret void

for.body:                                         ; preds = %for.body, %entry.new
  %indvars.iv = phi i64 [ 1, %entry.new ], [ %indvars.iv.next.7, %for.body ]
  %niter = phi i64 [ 0, %entry.new ], [ %niter.next.7, %for.body ]
  %arrayidx = getelementptr inbounds i16, ptr %0, i64 %indvars.iv
  %2 = load i16, ptr %arrayidx, align 2, !tbaa !9
  %arrayidx2 = getelementptr inbounds [0 x i16], ptr @a, i64 0, i64 %indvars.iv
  store i16 %2, ptr %arrayidx2, align 2, !tbaa !9
  store i16 0, ptr @b, align 2, !tbaa !9
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %niter.next = add nuw nsw i64 %niter, 1
  %arrayidx.1 = getelementptr inbounds i16, ptr %0, i64 %indvars.iv.next
  %3 = load i16, ptr %arrayidx.1, align 2, !tbaa !9
  %arrayidx2.1 = getelementptr inbounds [0 x i16], ptr @a, i64 0, i64 %indvars.iv.next
  store i16 %3, ptr %arrayidx2.1, align 2, !tbaa !9
  store i16 0, ptr @b, align 2, !tbaa !9
  %indvars.iv.next.1 = add nuw nsw i64 %indvars.iv.next, 1
  %niter.next.1 = add nuw nsw i64 %niter.next, 1
  %arrayidx.2 = getelementptr inbounds i16, ptr %0, i64 %indvars.iv.next.1
  %4 = load i16, ptr %arrayidx.2, align 2, !tbaa !9
  %arrayidx2.2 = getelementptr inbounds [0 x i16], ptr @a, i64 0, i64 %indvars.iv.next.1
  store i16 %4, ptr %arrayidx2.2, align 2, !tbaa !9
  store i16 0, ptr @b, align 2, !tbaa !9
  %indvars.iv.next.2 = add nuw nsw i64 %indvars.iv.next.1, 1
  %niter.next.2 = add nuw nsw i64 %niter.next.1, 1
  %arrayidx.3 = getelementptr inbounds i16, ptr %0, i64 %indvars.iv.next.2
  %5 = load i16, ptr %arrayidx.3, align 2, !tbaa !9
  %arrayidx2.3 = getelementptr inbounds [0 x i16], ptr @a, i64 0, i64 %indvars.iv.next.2
  store i16 %5, ptr %arrayidx2.3, align 2, !tbaa !9
  store i16 0, ptr @b, align 2, !tbaa !9
  %indvars.iv.next.3 = add nuw nsw i64 %indvars.iv.next.2, 1
  %niter.next.3 = add nuw nsw i64 %niter.next.2, 1
  %arrayidx.4 = getelementptr inbounds i16, ptr %0, i64 %indvars.iv.next.3
  %6 = load i16, ptr %arrayidx.4, align 2, !tbaa !9
  %arrayidx2.4 = getelementptr inbounds [0 x i16], ptr @a, i64 0, i64 %indvars.iv.next.3
  store i16 %6, ptr %arrayidx2.4, align 2, !tbaa !9
  store i16 0, ptr @b, align 2, !tbaa !9
  %indvars.iv.next.4 = add nuw nsw i64 %indvars.iv.next.3, 1
  %niter.next.4 = add nuw nsw i64 %niter.next.3, 1
  %arrayidx.5 = getelementptr inbounds i16, ptr %0, i64 %indvars.iv.next.4
  %7 = load i16, ptr %arrayidx.5, align 2, !tbaa !9
  %arrayidx2.5 = getelementptr inbounds [0 x i16], ptr @a, i64 0, i64 %indvars.iv.next.4
  store i16 %7, ptr %arrayidx2.5, align 2, !tbaa !9
  store i16 0, ptr @b, align 2, !tbaa !9
  %indvars.iv.next.5 = add nuw nsw i64 %indvars.iv.next.4, 1
  %niter.next.5 = add nuw nsw i64 %niter.next.4, 1
  %arrayidx.6 = getelementptr inbounds i16, ptr %0, i64 %indvars.iv.next.5
  %8 = load i16, ptr %arrayidx.6, align 2, !tbaa !9
  %arrayidx2.6 = getelementptr inbounds [0 x i16], ptr @a, i64 0, i64 %indvars.iv.next.5
  store i16 %8, ptr %arrayidx2.6, align 2, !tbaa !9
  store i16 0, ptr @b, align 2, !tbaa !9
  %indvars.iv.next.6 = add nuw nsw i64 %indvars.iv.next.5, 1
  %niter.next.6 = add nuw nsw i64 %niter.next.5, 1
  %arrayidx.7 = getelementptr inbounds i16, ptr %0, i64 %indvars.iv.next.6
  %9 = load i16, ptr %arrayidx.7, align 2, !tbaa !9
  %arrayidx2.7 = getelementptr inbounds [0 x i16], ptr @a, i64 0, i64 %indvars.iv.next.6
  store i16 %9, ptr %arrayidx2.7, align 2, !tbaa !9
  store i16 0, ptr @b, align 2, !tbaa !9
  %indvars.iv.next.7 = add nuw nsw i64 %indvars.iv.next.6, 1
  %niter.next.7 = add nuw nsw i64 %niter.next.6, 1
  %niter.ncmp.7 = icmp eq i64 %niter.next.7, 4294967288
  br i1 %niter.ncmp.7, label %for.cond.cleanup.unr-lcssa.loopexit, label %for.body, !llvm.loop !13
}

attributes #0 = { mustprogress nofree norecurse nosync nounwind ssp uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"uwtable", i32 2}
!3 = !{i32 7, !"frame-pointer", i32 2}
!4 = !{!"clang version 15.0.6 (https://github.com/llvm/llvm-project 088f33605d8a61ff519c580a71b1dd57d16a03f8)"}
!5 = !{!6, !6, i64 0}
!6 = !{!"any pointer", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C++ TBAA"}
!9 = !{!10, !10, i64 0}
!10 = !{!"short", !7, i64 0}
!11 = distinct !{!11, !12}
!12 = !{!"llvm.loop.unroll.disable"}
!13 = distinct !{!13, !14}
!14 = !{!"llvm.loop.mustprogress"}
