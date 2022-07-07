; RUN: %opt -passes='pssa-entry,verify' %s

source_filename = "small.c"
target datalayout = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.15.0"

@a = dso_local local_unnamed_addr global i32 0, align 4
@b = dso_local global i8 0, align 8
@d = dso_local global i64 0, align 8
@c = dso_local local_unnamed_addr global i8* null, align 8

; Function Attrs: nofree nounwind ssp uwtable
define dso_local i32* @e() local_unnamed_addr #0 {
entry:
  %g = alloca i8*, align 8
  %0 = bitcast i8** %g to i8*
  call void @llvm.lifetime.start.p0i8(i64 8, i8* nonnull %0) #3
  %1 = load i8, i8* @b, align 8, !tbaa !3
  %cmp = icmp ne i8 %1, 0
  %conv1 = zext i1 %cmp to i32
  store i32 %conv1, i32* @a, align 4, !tbaa !6
  br i1 %cmp, label %if.end6, label %cleanup

for.cond:                                         ; preds = %for.cond
  %2 = load i8*, i8** bitcast (i8* @b to i8**), align 8, !tbaa !8
  store i8 2, i8* %2, align 1, !tbaa !3
  br label %for.cond

if.end6:                                          ; preds = %entry
  store i8 0, i8* @b, align 8, !tbaa !3
  store i8** %g, i8*** bitcast (i8** @c to i8***), align 8, !tbaa !8
  br label %cleanup

cleanup:                                          ; preds = %entry, %if.end6
  call void @llvm.lifetime.end.p0i8(i64 8, i8* nonnull %0) #3
  ret i32* bitcast (i64* @d to i32*)
}

; Function Attrs: argmemonly nofree nosync nounwind willreturn
declare void @llvm.lifetime.start.p0i8(i64 immarg %0, i8* nocapture %1) #1

; Function Attrs: argmemonly nofree nosync nounwind willreturn
declare void @llvm.lifetime.end.p0i8(i64 immarg %0, i8* nocapture %1) #1

; Function Attrs: nounwind ssp uwtable
define dso_local i32 @main() local_unnamed_addr #2 {
entry:
  ret i32 0
}

attributes #0 = { nofree nounwind ssp uwtable "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { argmemonly nofree nosync nounwind willreturn }
attributes #2 = { nounwind ssp uwtable "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+cx8,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "tune-cpu"="generic" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #3 = { nounwind }

!llvm.module.flags = !{!0, !1}
!llvm.ident = !{!2}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{!"clang version 12.0.1 (https://github.com/llvm/llvm-project.git 328a6ec955327c6d56b6bc3478c723dd3cd468ef)"}
!3 = !{!4, !4, i64 0}
!4 = !{!"omnipotent char", !5, i64 0}
!5 = !{!"Simple C/C++ TBAA"}
!6 = !{!7, !7, i64 0}
!7 = !{!"int", !4, i64 0}
!8 = !{!9, !9, i64 0}
!9 = !{!"any pointer", !4, i64 0}
