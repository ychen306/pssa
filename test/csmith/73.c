// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = A62FB2B9
# 1 "<stdin>"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 352 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "<stdin>" 2
# 10 "<stdin>"
# 1 "/usr/local/include/csmith-2.3.0/csmith.h" 1
# 40 "/usr/local/include/csmith-2.3.0/csmith.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 1 3
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h" 1 3
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 1 3
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 1 3
# 630 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h" 1 3
# 631 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 2 3
# 696 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h" 1 3
# 697 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 2 3
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 1 3
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/_types.h" 1 3
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/_types.h" 3
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/_types.h" 3
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 2 3
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 2 3
# 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 3
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h" 1 3
# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h" 3
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 2 3
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h" 2 3
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h" 3
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3
# 259 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 1 3
# 260 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 2 3
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 1 3
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 3
typedef __darwin_size_t size_t;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h" 1 3
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3




void *memchr(const void *__s, int __c, size_t __n);
int memcmp(const void *__s1, const void *__s2, size_t __n);
void *memcpy(void *__dst, const void *__src, size_t __n);
void *memmove(void *__dst, const void *__src, size_t __len);
void *memset(void *__b, int __c, size_t __len);
char *strcat(char *__s1, const char *__s2);
char *strchr(const char *__s, int __c);
int strcmp(const char *__s1, const char *__s2);
int strcoll(const char *__s1, const char *__s2);
char *strcpy(char *__dst, const char *__src);
size_t strcspn(const char *__s, const char *__charset);
char *strerror(int __errnum) __asm("_" "strerror" );
size_t strlen(const char *__s);
char *strncat(char *__s1, const char *__s2, size_t __n);
int strncmp(const char *__s1, const char *__s2, size_t __n);
char *strncpy(char *__dst, const char *__src, size_t __n);
char *strpbrk(const char *__s, const char *__charset);
char *strrchr(const char *__s, int __c);
size_t strspn(const char *__s, const char *__charset);
char *strstr(const char *__big, const char *__little);
char *strtok(char *__str, const char *__sep);
size_t strxfrm(char *__s1, const char *__s2, size_t __n);
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 3
char *strtok_r(char *__str, const char *__sep, char **__lasts);
# 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 3
int strerror_r(int __errnum, char *__strerrbuf, size_t __buflen);
char *strdup(const char *__s1);
void *memccpy(void *__dst, const void *__src, int __c, size_t __n);
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 3
char *stpcpy(char *__dst, const char *__src);
char *stpncpy(char *__dst, const char *__src, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int __sig);







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rsize_t.h" 1 3
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rsize_t.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h" 1 3
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 1 3
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h" 1 3
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h" 3
typedef signed char int8_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h" 1 3
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h" 3
typedef short int16_t;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h" 1 3
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h" 3
typedef int int32_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h" 1 3
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h" 3
typedef long long int64_t;
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h" 1 3
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h" 3
typedef unsigned char u_int8_t;
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h" 1 3
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h" 3
typedef unsigned short u_int16_t;
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h" 1 3
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h" 3
typedef unsigned int u_int32_t;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h" 1 3
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h" 3
typedef unsigned long long u_int64_t;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3


typedef int64_t register_t;





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 1 3
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h" 1 3
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 2 3

typedef __darwin_intptr_t intptr_t;
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h" 1 3
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h" 3
typedef unsigned long uintptr_t;
# 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3



typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h" 2 3
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rsize_t.h" 2 3
typedef __darwin_size_t rsize_t;
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_errno_t.h" 1 3
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_errno_t.h" 3
typedef int errno_t;
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3


errno_t memset_s(void *__s, rsize_t __smax, int __c, rsize_t __n) __attribute__((availability(macosx,introduced=10.9)));







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h" 1 3
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h" 3
typedef __darwin_ssize_t ssize_t;
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3


void *memmem(const void *__big, size_t __big_len, const void *__little, size_t __little_len) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *__b, const void *__pattern4, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *__b, const void *__pattern8, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *__b, const void *__pattern16, size_t __len) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *__big, const char *__little);
char *strnstr(const char *__big, const char *__little, size_t __len);
size_t strlcat(char *__dst, const char *__source, size_t __size);
size_t strlcpy(char *__dst, const char *__source, size_t __size);
void strmode(int __mode, char *__bp);
char *strsep(char **__stringp, const char *__delim);


void swab(const void * restrict, void * restrict, ssize_t);

__attribute__((availability(macosx,introduced=10.12.1))) __attribute__((availability(ios,introduced=10.1)))
__attribute__((availability(tvos,introduced=10.0.1))) __attribute__((availability(watchos,introduced=3.1)))
int timingsafe_bcmp(const void *__b1, const void *__b2, size_t __len);








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/strings.h" 1 3
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/strings.h" 3
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 1 3
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/strings.h" 2 3




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_strings.h" 1 3
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_strings.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h" 1 3
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_strings.h" 2 3
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/strings.h" 2 3
# 181 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3
# 190 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_string.h" 1 3
# 191 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3
# 41 "/usr/local/include/csmith-2.3.0/csmith.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/float.h" 1 3
# 42 "/usr/local/include/csmith-2.3.0/csmith.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 1 3
# 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3
    typedef float float_t;
    typedef double double_t;
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3
extern int __math_errhandling(void);
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 174 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3
inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float);
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double);
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double);
inline __attribute__ ((__always_inline__)) int __inline_isinff(float);
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double);
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnand(double);
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double);
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double);
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float);
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double);
inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double);

inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnand(double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}

inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double __x) {
    union {
        long double __ld;
        struct{ unsigned long long __m; unsigned short __sexp; } __p;
    } __u;
    __u.__ld = __x;
    return (int)(__u.__p.__sexp >> 15);
}







inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float __x) {
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435e-38F;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= 2.2250738585072014e-308;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= 3.36210314311209350626e-4932L;
}
# 308 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);

extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);

extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);

extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);

extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);

extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);

extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);

extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);

extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);

extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);

extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);

extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);

extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);

extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double);
extern long double exp2l(long double);

extern float expm1f(float);
extern double expm1(double);
extern long double expm1l(long double);

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);




extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);




extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);


extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);
# 551 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3
extern float __inff(void)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,message="use `(float)INFINITY` instead"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
extern double __inf(void)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,message="use `INFINITY` instead"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
extern long double __infl(void)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,message="use `(long double)INFINITY` instead"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
extern float __nan(void)
__attribute__((availability(macos,introduced=10.0,deprecated=10.14,message="use `NAN` instead"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
# 586 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3
extern float __exp10f(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __exp10(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));





inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp);
inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp);
# 603 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3
extern float __cospif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __cospi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern float __sinpif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __sinpi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern float __tanpif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __tanpi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
# 634 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3
inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp);
inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp);






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}







extern double j0(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double j1(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double jn(int, double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double y0(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double y1(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double yn(int, double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double scalb(double, double);
extern int signgam;
# 740 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3
extern long int rinttol(double)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,replacement="lrint"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));

extern long int roundtol(double)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,replacement="lround"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));

extern double drem(double, double)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,replacement="remainder"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));

extern int finite(double)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,message="Use `isfinite((double)x)` instead."))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));

extern double gamma(double)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,replacement="tgamma"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));

extern double significand(double)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,message="Use `2*frexp( )` or `scalbn(x, -ilogb(x))` instead."))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));


struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};
# 43 "/usr/local/include/csmith-2.3.0/csmith.h" 2


# 1 "/usr/local/include/csmith-2.3.0/random_inc.h" 1
# 51 "/usr/local/include/csmith-2.3.0/random_inc.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h" 1 3
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/limits.h" 1 3





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/limits.h" 1 3
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/limits.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/_limits.h" 1 3
# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/limits.h" 2 3
# 7 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/limits.h" 2 3
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h" 1 3
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h" 2 3
# 52 "/usr/local/include/csmith-2.3.0/random_inc.h" 2



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 1 3
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint8_t.h" 1 3
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint8_t.h" 3
typedef unsigned char uint8_t;
# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint16_t.h" 1 3
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint16_t.h" 3
typedef unsigned short uint16_t;
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint32_t.h" 1 3
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint32_t.h" 3
typedef unsigned int uint32_t;
# 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint64_t.h" 1 3
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint64_t.h" 3
typedef unsigned long long uint64_t;
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;
# 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_intmax_t.h" 1 3
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_intmax_t.h" 3
typedef long int intmax_t;
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uintmax_t.h" 1 3
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uintmax_t.h" 3
typedef long unsigned int uintmax_t;
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3
# 56 "/usr/local/include/csmith-2.3.0/random_inc.h" 2



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/assert.h" 1 3
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/assert.h" 3
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__)) __attribute__((__cold__)) __attribute__((__disable_tail_calls__));
# 60 "/usr/local/include/csmith-2.3.0/random_inc.h" 2
# 89 "/usr/local/include/csmith-2.3.0/random_inc.h"
# 1 "/usr/local/include/csmith-2.3.0/platform_generic.h" 1
# 39 "/usr/local/include/csmith-2.3.0/platform_generic.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 1 3
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 1 3
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h" 1 3
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h" 3
typedef __darwin_va_list va_list;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h" 1 3
# 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h" 3
int renameat(int, const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));






int renamex_np(const char *, const char *, unsigned int) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int renameatx_np(int, const char *, int, const char *, unsigned int) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3

typedef __darwin_off_t fpos_t;
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 126 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 3
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (* _Nullable _close)(void *);
 int (* _Nullable _read) (void *, char *, int);
 fpos_t (* _Nullable _seek) (void *, fpos_t, int);
 int (* _Nullable _write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 2 3


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict __filename, const char * restrict __mode) __asm("_" "fopen" );

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *) __attribute__((__cold__));
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *__old, const char *__new);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((__availability__(swift, unavailable, message="Use snprintf instead.")));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);

__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((__availability__(swift, unavailable, message="Use vsnprintf instead.")));
# 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h" 1 3
# 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h" 3
char *ctermid(char *);
# 206 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 2 3




FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
int pclose(FILE *) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead.")));



FILE *popen(const char *, const char *) __asm("_" "popen" ) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead.")));
# 249 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 260 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 286 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);


__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *__dir, const char *__prefix) __asm("_" "tempnam" );
# 324 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h" 1 3
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h" 3
typedef __darwin_off_t off_t;
# 325 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 2 3


int fseeko(FILE * __stream, off_t __offset, int __whence);
off_t ftello(FILE * __stream);





int snprintf(char * restrict __str, size_t __size, const char * restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict __stream, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict __str, size_t __size, const char * restrict __format, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict __str, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 352 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream) __attribute__((availability(macosx,introduced=10.7)));
FILE *fmemopen(void * restrict __buf, size_t __size, const char * restrict __mode) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
FILE *open_memstream(char **__bufp, size_t *__sizep) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
# 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (* _Nullable)(void *, char *, int),
                 int (* _Nullable)(void *, const char *, int),
                 fpos_t (* _Nullable)(void *, fpos_t, int),
                 int (* _Nullable)(void *));
# 407 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h" 1 3
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h" 3
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h" 3
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 408 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 2 3
# 40 "/usr/local/include/csmith-2.3.0/platform_generic.h" 2


static void
platform_main_begin(void)
{

}

static void
platform_main_end(uint32_t crc, int flag)
{





 printf ("checksum = %X\n", crc);
# 120 "/usr/local/include/csmith-2.3.0/platform_generic.h"
}
# 90 "/usr/local/include/csmith-2.3.0/random_inc.h" 2
# 100 "/usr/local/include/csmith-2.3.0/random_inc.h"
# 1 "/usr/local/include/csmith-2.3.0/safe_math.h" 1
# 13 "/usr/local/include/csmith-2.3.0/safe_math.h"
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{

  return






    -si;
}

static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    (si1 + si2);
}

static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    (si1 - si2);
}

static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    si1 * si2;
}

static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return

    ((si2 == 0) || ((si1 == -128) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return

    ((si2 == 0) || ((si1 == -128) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > (127 >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > (127 >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{

  return






    -si;
}

static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return






    (si1 + si2);
}

static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return






    (si1 - si2);
}

static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return






    si1 * si2;
}

static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return

    ((si2 == 0) || ((si1 == -32768) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return

    ((si2 == 0) || ((si1 == -32768) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > (32767 >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > (32767 >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{

  return


    (si==(-2147483647 -1)) ?
    ((si)) :


    -si;
}

static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return


    (((si1>0) && (si2>0) && (si1 > (2147483647 -si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647 -1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~2147483647)))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return


    (((si1 > 0) && (si2 > 0) && (si1 > (2147483647 / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647 -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647 -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < (2147483647 / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-2147483647 -1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-2147483647 -1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int32_t
(safe_lshift_func_int32_t_s_s)(int32_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > (2147483647 >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > (2147483647 >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int32_t
(safe_rshift_func_int32_t_s_s)(int32_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int32_t
(safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}




static int64_t
(safe_unary_minus_func_int64_t_s)(int64_t si )
{

  return


    (si==(-9223372036854775807LL -1)) ?
    ((si)) :


    -si;
}

static int64_t
(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return


    (((si1>0) && (si2>0) && (si1 > (9223372036854775807LL -si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807LL -1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~9223372036854775807LL)))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static int64_t
(safe_mul_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return


    (((si1 > 0) && (si2 > 0) && (si1 > (9223372036854775807LL / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807LL -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807LL -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < (9223372036854775807LL / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-9223372036854775807LL -1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int64_t
(safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-9223372036854775807LL -1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int64_t
(safe_lshift_func_int64_t_s_s)(int64_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > (9223372036854775807LL >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int64_t
(safe_lshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > (9223372036854775807LL >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int64_t
(safe_rshift_func_int64_t_s_s)(int64_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int64_t
(safe_rshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}







static uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{

  return -ui;
}

static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return ui1 + ui2;
}

static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return ui1 - ui2;
}

static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > (255 >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > (255 >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{

  return -ui;
}

static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return ui1 + ui2;
}

static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return ui1 - ui2;
}

static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > (65535 >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > (65535 >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{

  return -ui;
}

static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return ui1 + ui2;
}

static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return ui1 - ui2;
}

static uint32_t
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > (4294967295U >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint32_t
(safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > (4294967295U >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint32_t
(safe_rshift_func_uint32_t_u_s)(uint32_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint32_t
(safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}




static uint64_t
(safe_unary_minus_func_uint64_t_u)(uint64_t ui )
{

  return -ui;
}

static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return ui1 + ui2;
}

static uint64_t
(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return ui1 - ui2;
}

static uint64_t
(safe_mul_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}

static uint64_t
(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint64_t
(safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint64_t
(safe_lshift_func_uint64_t_u_s)(uint64_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > (18446744073709551615ULL >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint64_t
(safe_lshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > (18446744073709551615ULL >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint64_t
(safe_rshift_func_uint64_t_u_s)(uint64_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint64_t
(safe_rshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}
# 953 "/usr/local/include/csmith-2.3.0/safe_math.h"
static float
(safe_add_func_float_f_f)(float sf1, float sf2 )
{

  return

    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :

    (sf1 + sf2);
}

static float
(safe_sub_func_float_f_f)(float sf1, float sf2 )
{

  return

    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :

    (sf1 - sf2);
}

static float
(safe_mul_func_float_f_f)(float sf1, float sf2 )
{

  return


    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * 3.40282347e+38F))) ?



    (sf1) :

    (sf1 * sf2);
}

static float
(safe_div_func_float_f_f)(float sf1, float sf2 )
{

  return


    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * 3.40282347e+38F))))) ?



    (sf1) :

    (sf1 / sf2);
}




static double
(safe_add_func_double_f_f)(double sf1, double sf2 )
{

  return

    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :

    (sf1 + sf2);
}

static double
(safe_sub_func_double_f_f)(double sf1, double sf2 )
{

  return

    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :

    (sf1 - sf2);
}

static double
(safe_mul_func_double_f_f)(double sf1, double sf2 )
{

  return


    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * 1.7976931348623157e+308))) ?



    (sf1) :

    (sf1 * sf2);
}

static double
(safe_div_func_double_f_f)(double sf1, double sf2 )
{

  return


    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * 1.7976931348623157e+308))))) ?



    (sf1) :

    (sf1 / sf2);
}
# 1193 "/usr/local/include/csmith-2.3.0/safe_math.h"
static int32_t
(safe_convert_func_float_to_int32_t)(float sf1 )
{

  return

    ((sf1 <= (-2147483647 -1)) || (sf1 >= 2147483647)) ?
    (2147483647) :

    ((int32_t)(sf1));
}
# 101 "/usr/local/include/csmith-2.3.0/random_inc.h" 2
# 46 "/usr/local/include/csmith-2.3.0/csmith.h" 2

static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;

static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;

 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}

static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
# 96 "/usr/local/include/csmith-2.3.0/csmith.h"
static void
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
 crc32_byte ((val>>32) & 0xff);
 crc32_byte ((val>>40) & 0xff);
 crc32_byte ((val>>48) & 0xff);
 crc32_byte ((val>>56) & 0xff);
}

static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}



static void
transparent_crc_bytes (char *ptr, int nbytes, char* vname, int flag)
{
    int i;
    for (i=0; i<nbytes; i++) {
        crc32_byte(ptr[i]);
    }
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}
# 11 "<stdin>" 2


static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const unsigned f0 : 3;
   unsigned f1 : 14;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   signed f0 : 26;
   const unsigned f1 : 25;
   unsigned f2 : 3;
};
#pragma pack(pop)

union U2 {
   const int16_t f0;
};


static int32_t g_3 = 0x5C7A00F4L;
static uint16_t g_5 = 0x6EEAL;
static uint32_t g_21 = 0xF7C629C4L;
static int32_t g_64 = 0xDABEE07FL;
static int32_t g_72[5] = {1L,1L,1L,1L,1L};
static const union U2 g_79 = {7L};
static struct S1 g_87 = {-8080,1697,0};
static int8_t g_91 = 0xAAL;
static uint32_t g_98[5] = {0UL,0UL,0UL,0UL,0UL};
static struct S0 g_118 = {0,71};
static int16_t g_132 = 0xD6E7L;
static uint16_t g_134 = 1UL;
static int16_t g_139 = 0x0C45L;
static int32_t *g_140 = (void*)0;
static int8_t **g_175 = (void*)0;
static uint8_t g_205 = 0x33L;
static int64_t g_210 = 1L;
static int64_t g_233[10][7] = {{0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL},{0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL},{0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL},{0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL},{0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL},{0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL},{0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL},{0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL},{0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL,0xD8AFD46561576806LL},{0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL,0xB0914903292C47F0LL}};
static int64_t g_234 = 0x648B8FF587DBDDA5LL;
static uint32_t g_259[10][10] = {{4294967290UL,0UL,4294967295UL,0xA3F5D526L,0xAE0EBEABL,0x797E4126L,4294967287UL,1UL,0xC32043E4L,0xE8B9BED2L},{0xC2FB92B7L,0UL,4294967295UL,4294967290UL,0xA3F5D526L,4294967289UL,1UL,0xC32043E4L,0x6163A173L,4294967295UL},{0UL,0x31CA3549L,0x8F0A8D83L,0x856A399DL,1UL,0x18F28319L,0xC32043E4L,0x3116A7E1L,0x2701F2B5L,0x2701F2B5L},{0xF8BB1916L,5UL,0xC32043E4L,4294967295UL,4294967295UL,0xC32043E4L,5UL,0xF8BB1916L,0xAE0EBEABL,0x78EC6E61L},{1UL,0xC2FB92B7L,1UL,0x797E4126L,0xC32043E4L,1UL,0xD4D813FCL,4294967289UL,4294967295UL,4294967295UL},{8UL,0xA3F5D526L,1UL,0xC32043E4L,4294967286UL,4294967289UL,0UL,0xF8BB1916L,0UL,4294967290UL},{0UL,0x68C83916L,0xC32043E4L,0x78EC6E61L,0xC2FB92B7L,4294967295UL,4294967289UL,0x3116A7E1L,8UL,0x2BF7BF8CL},{0xA3F5D526L,0xC32043E4L,0x8F0A8D83L,0x2BF7BF8CL,0UL,0x2BF7BF8CL,0x8F0A8D83L,0xC32043E4L,0xA3F5D526L,0xF58D30C1L},{0xC32043E4L,2UL,4294967295UL,0x68C83916L,0x856A399DL,0x2701F2B5L,0xA3F5D526L,1UL,4294967295UL,0xC2FB92B7L},{0x43BED2E4L,0x856A399DL,4294967295UL,0x68C83916L,8UL,1UL,0x3116A7E1L,0xE8B9BED2L,0xA3F5D526L,0x8F0A8D83L}};
static uint16_t **g_271 = (void*)0;
static uint16_t g_289[10] = {0x1267L,0x1267L,0x1267L,0x1267L,0x1267L,0x1267L,0x1267L,0x1267L,0x1267L,0x1267L};
static uint16_t g_311 = 0xB9BDL;
static int32_t *g_340 = &g_72[2];
static int64_t g_355 = 1L;
static uint8_t g_362 = 255UL;
static uint64_t g_374 = 18446744073709551608UL;
static int64_t g_385 = 5L;
static uint64_t g_395[8][6][1] = {{{3UL},{0x87F938E9425D5BFFLL},{0UL},{0UL},{0x87F938E9425D5BFFLL},{3UL}},{{0x30F0EEB78FA2B96DLL},{1UL},{0x7EBE27F9E09767F9LL},{0xFB8E0A579E85E7D5LL},{0x3E61D54BFCD77D2FLL},{4UL}},{{0x3E61D54BFCD77D2FLL},{0xFB8E0A579E85E7D5LL},{0x7EBE27F9E09767F9LL},{1UL},{0x30F0EEB78FA2B96DLL},{3UL}},{{0x87F938E9425D5BFFLL},{0UL},{0UL},{0x87F938E9425D5BFFLL},{3UL},{0x30F0EEB78FA2B96DLL}},{{1UL},{0x7EBE27F9E09767F9LL},{0xFB8E0A579E85E7D5LL},{0x3E61D54BFCD77D2FLL},{4UL},{0x3E61D54BFCD77D2FLL}},{{0xFB8E0A579E85E7D5LL},{0x7EBE27F9E09767F9LL},{1UL},{0x30F0EEB78FA2B96DLL},{3UL},{0x87F938E9425D5BFFLL}},{{0UL},{0UL},{0x87F938E9425D5BFFLL},{3UL},{0x30F0EEB78FA2B96DLL},{1UL}},{{0x7EBE27F9E09767F9LL},{0xFB8E0A579E85E7D5LL},{0x3E61D54BFCD77D2FLL},{4UL},{0x3E61D54BFCD77D2FLL},{18446744073709551615UL}}};
static const struct S0 g_413 = {1,59};
static uint32_t g_441 = 2UL;
static uint8_t g_446 = 255UL;
static const uint16_t *g_493 = &g_289[4];
static const uint16_t * const *g_492[7] = {&g_493,&g_493,&g_493,&g_493,&g_493,&g_493,&g_493};
static const uint16_t * const **g_491[5][3] = {{&g_492[3],&g_492[3],&g_492[3]},{&g_492[3],&g_492[3],&g_492[3]},{&g_492[3],&g_492[3],&g_492[3]},{&g_492[3],&g_492[3],&g_492[3]},{&g_492[3],&g_492[3],&g_492[3]}};
static struct S0 **g_579 = (void*)0;
static int64_t *g_656[9][5][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
static int64_t **g_655 = &g_656[8][3][2];
static int8_t ** const *g_786 = &g_175;
static int8_t ** const **g_785 = &g_786;
static const uint32_t g_809 = 0UL;
static struct S1 *g_839 = &g_87;
static struct S1 **g_838 = &g_839;
static int64_t g_852 = 0xA12142137958188DLL;
static int16_t g_862 = 0x0193L;
static int16_t **g_867 = (void*)0;
static int16_t ***g_866 = &g_867;
static int16_t ** const **g_915 = (void*)0;
static uint64_t g_1013[2] = {0xC567F6CD6F3E07F8LL,0xC567F6CD6F3E07F8LL};
static int32_t g_1164 = 1L;
static int32_t g_1182 = 0x2C9CAC0AL;
static int8_t g_1205 = 5L;
static int8_t * const g_1204 = &g_1205;
static int8_t * const *g_1203 = &g_1204;
static int8_t * const **g_1202 = &g_1203;
static int8_t * const ***g_1201 = &g_1202;
static int32_t ***g_1221 = (void*)0;
static union U2 g_1247 = {-1L};
static union U2 *g_1246 = &g_1247;
static int8_t ***g_1397 = &g_175;
static int8_t ****g_1396 = &g_1397;
static int16_t g_1434 = 0xC485L;
static int64_t g_1437[1][8] = {{0x84F97F8C97D219FELL,0x84F97F8C97D219FELL,0x84F97F8C97D219FELL,0x84F97F8C97D219FELL,0x84F97F8C97D219FELL,0x84F97F8C97D219FELL,0x84F97F8C97D219FELL,0x84F97F8C97D219FELL}};
static int8_t *g_1485 = (void*)0;
static const int64_t *g_1576 = (void*)0;
static const int64_t **g_1575 = &g_1576;
static uint8_t *g_1603 = &g_446;
static uint8_t **g_1602[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint16_t ***g_1623[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int8_t * const * const *g_1662 = &g_1203;
static int8_t * const * const **g_1661 = &g_1662;
static int8_t * const * const ***g_1660 = &g_1661;
static uint64_t g_1734 = 0x9DC12A61F2CA8705LL;
static uint32_t *g_1984[5][8][1] = {{{&g_259[0][5]},{(void*)0},{&g_259[3][1]},{(void*)0},{&g_259[3][1]},{(void*)0},{&g_259[0][5]},{(void*)0}},{{&g_259[0][5]},{(void*)0},{&g_259[3][1]},{(void*)0},{&g_259[3][1]},{(void*)0},{&g_259[0][5]},{(void*)0}},{{&g_259[0][5]},{(void*)0},{&g_259[3][1]},{(void*)0},{&g_259[3][1]},{(void*)0},{&g_259[0][5]},{(void*)0}},{{&g_259[0][5]},{(void*)0},{&g_259[3][1]},{(void*)0},{&g_259[3][1]},{(void*)0},{&g_259[0][5]},{(void*)0}},{{&g_259[0][5]},{(void*)0},{&g_259[3][1]},{(void*)0},{&g_259[3][1]},{(void*)0},{&g_259[0][5]},{(void*)0}}};
static int32_t g_2017 = 0x9B2BED40L;
static const int8_t **g_2058 = (void*)0;
static int32_t g_2169 = 0x08710099L;
static union U2 *g_2246 = &g_1247;
static int8_t *****g_2247 = (void*)0;
static uint16_t ****g_2277 = &g_1623[7];
static int32_t g_2321 = 0L;
static struct S0 ***g_2361[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int16_t g_2422 = 1L;
static uint32_t g_2436 = 4294967293UL;
static int8_t ***g_2540 = (void*)0;
static const union U2 *** const g_2654 = (void*)0;
static union U2 **g_2656[6] = {&g_2246,&g_2246,&g_2246,&g_2246,&g_2246,&g_2246};
static union U2 ***g_2655 = &g_2656[5];
static uint64_t *g_2723 = &g_1013[0];
static uint64_t **g_2722 = &g_2723;
static uint64_t ***g_2721[4][8][7] = {{{(void*)0,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,(void*)0},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,(void*)0},{&g_2722,(void*)0,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{(void*)0,&g_2722,&g_2722,&g_2722,(void*)0,&g_2722,(void*)0},{(void*)0,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722}},{{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,(void*)0,(void*)0},{(void*)0,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{(void*)0,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,(void*)0},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{&g_2722,(void*)0,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{&g_2722,(void*)0,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722}},{{(void*)0,(void*)0,&g_2722,(void*)0,(void*)0,&g_2722,&g_2722},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,(void*)0},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{(void*)0,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{&g_2722,&g_2722,(void*)0,(void*)0,&g_2722,&g_2722,(void*)0},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722}},{{&g_2722,(void*)0,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{&g_2722,(void*)0,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{(void*)0,(void*)0,&g_2722,(void*)0,(void*)0,&g_2722,&g_2722},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,(void*)0},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{(void*)0,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722},{&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722,&g_2722}}};
static const uint32_t **g_2749 = (void*)0;
static union U2 g_2940 = {0L};
static struct S0 ****g_2991 = &g_2361[5];
static struct S0 *****g_2990 = &g_2991;
static int16_t g_3001 = (-3L);
static uint8_t g_3069 = 247UL;
static int32_t g_3129 = (-9L);
static int32_t **g_3131 = &g_340;
static uint32_t g_3154 = 0x8B5536D8L;
static uint16_t *****g_3193 = &g_2277;
static uint16_t *****g_3195 = &g_2277;
static int64_t ***g_3400 = (void*)0;
static int64_t ****g_3399[6][4] = {{&g_3400,&g_3400,&g_3400,&g_3400},{&g_3400,&g_3400,&g_3400,&g_3400},{&g_3400,&g_3400,&g_3400,&g_3400},{&g_3400,&g_3400,&g_3400,&g_3400},{&g_3400,&g_3400,&g_3400,&g_3400},{&g_3400,&g_3400,&g_3400,&g_3400}};
static const uint8_t *g_3419 = (void*)0;
static const uint8_t **g_3418 = &g_3419;
static const uint8_t ***g_3417 = &g_3418;
static const uint64_t g_3507 = 1UL;
static const int32_t *g_3776 = &g_72[2];
static const int32_t **g_3775 = &g_3776;
static union U2 *g_3803 = &g_2940;
static union U2 ** const g_3802 = &g_3803;
static union U2 ** const *g_3801 = &g_3802;
static union U2 ** const **g_3800 = &g_3801;
static union U2 ** const ***g_3799 = &g_3800;
static int16_t *g_3903 = &g_3001;
static int16_t ****g_3940 = (void*)0;
static int16_t *****g_3939 = &g_3940;
static uint16_t *g_4046 = &g_289[2];
static uint16_t ** const g_4045 = &g_4046;
static uint16_t ** const *g_4044 = &g_4045;
static uint16_t ** const **g_4043 = &g_4044;
static uint16_t g_4050 = 0UL;
static struct S1 g_4119 = {856,4016,0};
static const int32_t g_4171 = 0xD13F60D9L;
static uint32_t g_4259 = 1UL;
static int16_t g_4335 = (-8L);
static uint8_t g_4415[2] = {0x62L,0x62L};
static struct S1 g_4492[3][6][9] = {{{{-277,3730,1},{-1890,4647,0},{-3630,495,0},{-1300,3135,1},{4037,3789,0},{2821,531,1},{-6007,3647,0},{2821,531,1},{4037,3789,0}},{{7158,657,0},{-1437,738,0},{-1437,738,0},{7158,657,0},{-879,3998,1},{3068,4954,1},{7452,2200,0},{-1097,2850,0},{5336,4060,1}},{{-1022,2613,1},{-5092,1955,1},{-3505,2968,0},{-3630,495,0},{7047,2313,0},{2046,3933,1},{2046,3933,1},{7047,2313,0},{-3630,495,0}},{{2513,3895,1},{-5500,1400,1},{2513,3895,1},{-1325,2410,1},{-879,3998,1},{-1097,2850,0},{-1132,825,0},{3246,4318,1},{7452,2200,0}},{{-277,3730,1},{2046,3933,1},{-4541,4527,0},{-2141,3978,1},{7047,2313,0},{401,115,1},{7047,2313,0},{-2141,3978,1},{-4541,4527,0}},{{7452,2200,0},{7452,2200,0},{-1132,825,0},{7513,4870,1},{2513,3895,1},{-879,3998,1},{3246,4318,1},{-6406,379,1},{5336,4060,1}}},{{{-1890,4647,0},{-6007,3647,0},{401,115,1},{-2824,3043,0},{-3505,2968,0},{-3505,2968,0},{-2824,3043,0},{401,115,1},{-6007,3647,0}},{{-1325,2410,1},{7158,657,0},{-1132,825,0},{-2013,1503,0},{-1437,738,0},{7513,4870,1},{7452,2200,0},{3246,4318,1},{-5500,1400,1}},{{-2141,3978,1},{-1890,4647,0},{-4541,4527,0},{-6007,3647,0},{-3630,495,0},{-6007,3647,0},{-4541,4527,0},{-1890,4647,0},{-2141,3978,1}},{{-1437,738,0},{7158,657,0},{-879,3998,1},{3068,4954,1},{7452,2200,0},{-1097,2850,0},{5336,4060,1},{-1132,825,0},{434,3919,0}},{{-1022,2613,1},{-6007,3647,0},{-5092,1955,1},{401,115,1},{401,115,1},{-5092,1955,1},{-6007,3647,0},{-1022,2613,1},{2717,3286,1}},{{-1437,738,0},{7452,2200,0},{5336,4060,1},{2513,3895,1},{3093,27,0},{-1325,2410,1},{-5500,1400,1},{3068,4954,1},{3068,4954,1}}},{{{-2141,3978,1},{2046,3933,1},{-2824,3043,0},{-1022,2613,1},{-2824,3043,0},{2046,3933,1},{-2141,3978,1},{-3505,2968,0},{2717,3286,1}},{{-1325,2410,1},{-1132,825,0},{-6406,379,1},{7158,657,0},{3068,4954,1},{3093,27,0},{434,3919,0},{7452,2200,0},{434,3919,0}},{{-1890,4647,0},{4037,3789,0},{-277,3730,1},{-277,3730,1},{4037,3789,0},{-1890,4647,0},{2717,3286,1},{-3505,2968,0},{-2141,3978,1}},{{7452,2200,0},{5336,4060,1},{2513,3895,1},{3093,27,0},{-1325,2410,1},{-5500,1400,1},{3068,4954,1},{3068,4954,1},{-5500,1400,1}},{{-277,3730,1},{-3630,495,0},{-2141,3978,1},{-3630,495,0},{-277,3730,1},{-2824,3043,0},{2717,3286,1},{-1022,2613,1},{-6007,3647,0}},{{-879,3998,1},{3068,4954,1},{7452,2200,0},{-1097,2850,0},{5336,4060,1},{-1132,825,0},{434,3919,0},{-1132,825,0},{5336,4060,1}}}};
static int8_t g_4594 = 0xC8L;
static int32_t ****g_4615 = &g_1221;
static int32_t *****g_4614 = &g_4615;
static uint32_t g_4683 = 0x30EDEAF8L;
static uint64_t g_4722 = 0x49E4D6063C515A8CLL;
static uint16_t g_4729[6] = {65531UL,65531UL,65531UL,65531UL,65531UL,65531UL};
static union U2 *****g_4745 = (void*)0;
static const int64_t **g_4792[1] = {&g_1576};
static uint16_t g_4857 = 1UL;
static int32_t g_4880 = 0L;
static uint16_t g_4954 = 0x317DL;
static uint8_t ** const g_4962 = (void*)0;
static uint8_t ** const *g_4961[4][1][6] = {{{&g_4962,&g_4962,&g_4962,&g_4962,&g_4962,&g_4962}},{{&g_4962,&g_4962,&g_4962,&g_4962,&g_4962,&g_4962}},{{&g_4962,&g_4962,&g_4962,&g_4962,&g_4962,&g_4962}},{{&g_4962,&g_4962,&g_4962,&g_4962,&g_4962,&g_4962}}};
static uint32_t **g_4990 = &g_1984[4][0][0];
static int32_t g_4992 = 0x46FB8B0FL;
static int8_t *** const **g_5148 = (void*)0;
static struct S1 g_5185 = {231,2670,1};
static uint32_t g_5202 = 0xA9B87708L;



static const uint64_t func_1(void);
static int32_t func_8(int32_t p_9, const int32_t p_10, uint32_t p_11);
static uint16_t func_31(uint64_t p_32, int32_t * const p_33, struct S0 p_34, struct S1 p_35);
static struct S0 func_36(uint32_t * p_37);
static uint8_t func_41(int32_t * p_42);
static int32_t * func_43(int8_t p_44, int32_t * p_45, union U2 p_46, uint32_t p_47, uint16_t p_48);
static struct S0 func_53(int16_t p_54);
static int32_t func_57(uint64_t p_58, uint8_t p_59, uint32_t * p_60, uint32_t p_61);
static uint64_t func_62(int32_t * p_63);
static uint8_t func_73(union U2 p_74, const union U2 p_75, uint32_t p_76, uint32_t p_77);
# 206 "<stdin>"
static const uint64_t func_1(void)
{
    int32_t *l_2 = &g_3;
    int32_t *l_4[2][7] = {{(void*)0,&g_3,&g_3,(void*)0,(void*)0,(void*)0,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3}};
    uint32_t *l_20 = &g_21;
    union U2 l_49[9][10] = {{{0x0694L},{-1L},{8L},{0L},{-1L},{0x0694L},{0L},{0x4FD3L},{0L},{0x0694L}},{{-1L},{-1L},{0x67DBL},{-1L},{-1L},{-8L},{-1L},{0x4FD3L},{0xF2C6L},{0L}},{{0L},{0xF5FDL},{0xEF5BL},{0xA955L},{0xF2C6L},{0xF2C6L},{0xA955L},{0xEF5BL},{0xF5FDL},{0L}},{{0xF2C6L},{0xA955L},{0xEF5BL},{0xF5FDL},{0L},{0xF2C6L},{0xF5FDL},{0L},{0xF5FDL},{0xF2C6L}},{{0L},{0xA955L},{0x4ADEL},{0xA955L},{0L},{-1L},{0xA955L},{0L},{0x3BECL},{0L}},{{0L},{0xF5FDL},{0xEF5BL},{0xA955L},{0xF2C6L},{0xF2C6L},{0xA955L},{0xEF5BL},{0xF5FDL},{0L}},{{0xF2C6L},{0xA955L},{0xEF5BL},{0xF5FDL},{0L},{0xF2C6L},{0xF5FDL},{0L},{0xF5FDL},{0xF2C6L}},{{0L},{0xA955L},{0x4ADEL},{0xA955L},{0L},{-1L},{0xA955L},{0L},{0x3BECL},{0L}},{{0L},{0xF5FDL},{0xEF5BL},{0xA955L},{0xF2C6L},{0xF2C6L},{0xA955L},{0xEF5BL},{0xF5FDL},{0L}}};
    int32_t l_50[4] = {0x0277ED46L,0x0277ED46L,0x0277ED46L,0x0277ED46L};
    int8_t l_2213 = 0xEEL;
    struct S1 l_3140 = {4667,5570,1};
    uint8_t l_4568 = 251UL;
    int32_t l_4569 = 6L;
    union U2 l_4572 = {1L};
    uint32_t l_4573[4] = {0xECB43AA7L,0xECB43AA7L,0xECB43AA7L,0xECB43AA7L};
    uint64_t l_4576 = 1UL;
    int16_t *****l_4577 = &g_3940;
    int16_t *****l_4578 = &g_3940;
    uint16_t l_4579 = 0x3501L;
    uint16_t l_4592 = 1UL;
    uint16_t *****l_4656 = &g_2277;
    int64_t l_4662 = (-8L);
    int32_t l_4762[5][2][3] = {{{0L,0xAC599C4EL,0L},{0x2B886940L,1L,1L}},{{8L,0L,0L},{1L,0x2B886940L,0xF9E2D1AEL}},{{(-1L),8L,0x85C9E4C3L},{1L,1L,0L}},{{8L,(-1L),0xCC912A41L},{0x2B886940L,1L,0x2B886940L}},{{0L,8L,0xAC599C4EL},{1L,0x2B886940L,0x2B886940L}}};
    uint64_t l_4770 = 0x30F9D820D0D98C13LL;
    union U2 **l_4775 = (void*)0;
    uint32_t l_4896 = 0xE3C7F844L;
    int16_t ***l_4912 = &g_867;
    const struct S0 **l_5031[10];
    const struct S0 ***l_5030 = &l_5031[6];
    uint32_t l_5096 = 4294967295UL;
    uint8_t l_5097 = 7UL;
    uint64_t l_5130 = 0xF88816155B2BE787LL;
    uint8_t l_5151 = 0xE3L;
    int64_t **l_5171 = (void*)0;
    uint64_t l_5181 = 0x494DEFF58C47EE91LL;
    uint8_t ***l_5183 = &g_1602[6];
    uint64_t l_5201 = 5UL;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_5031[i] = (void*)0;
    g_5--;
    return (*l_2);
}







static int32_t func_8(int32_t p_9, const int32_t p_10, uint32_t p_11)
{
    const struct S1 l_4211 = {-3400,4528,1};
    struct S1 ***l_4216 = &g_838;
    int32_t l_4222 = 5L;
    const uint8_t l_4227 = 0xB7L;
    uint8_t l_4228 = 3UL;
    uint32_t l_4229 = 0x2291522DL;
    const uint32_t l_4230 = 1UL;
    int32_t l_4231[5][10][5] = {{{3L,0x595A8542L,4L,3L,0x59390D4DL},{3L,(-7L),0xF9EF7070L,3L,6L},{(-1L),0xCABFB5B3L,0x1B0B9837L,0xDC646347L,(-5L)},{0x63BA38D6L,0L,1L,0xF69C2A56L,(-2L)},{(-1L),0L,0x9B86921AL,0xE8F02211L,0xCABFB5B3L},{0x1B0B9837L,0xB2256ADFL,0xDC646347L,1L,(-1L)},{0L,(-2L),1L,3L,(-1L)},{(-7L),(-1L),1L,(-1L),(-7L)},{0x1465EFC8L,0xB2256ADFL,0x595A8542L,0x79F529EBL,1L},{0xDFD15092L,1L,0x4694B787L,0xCABFB5B3L,9L}},{{0xE8F02211L,1L,0L,0xB2256ADFL,1L},{(-9L),0xCABFB5B3L,1L,0L,(-7L)},{1L,(-9L),0x986A9B86L,0x4F939530L,(-1L)},{0xCABFB5B3L,(-1L),0L,0x9135A29DL,(-1L)},{0xBD950364L,0x63BA38D6L,1L,0L,0xCABFB5B3L},{1L,1L,0xFB289EBEL,5L,(-2L)},{(-1L),0x1B0B9837L,0L,0x79F529EBL,1L},{0L,0xFB289EBEL,0L,1L,0x1B0B9837L},{9L,(-5L),0x9B86921AL,0x4694B787L,0xD2A47E4BL},{(-2L),0L,(-5L),0x4694B787L,0x1465EFC8L}},{{0xC1BE3FFEL,8L,1L,1L,0x4694B787L},{0xDC646347L,0x021C2B8EL,0L,0x79F529EBL,5L},{0x3999D381L,0x4694B787L,(-7L),0xBD950364L,0x66F187F8L},{0x2B518DC3L,(-1L),(-5L),0L,0xDC646347L},{1L,0xC1BE3FFEL,0x4015D47BL,1L,0x6DD438CAL},{1L,0L,0x4F939530L,0x59390D4DL,0x59390D4DL},{0xE19E61F5L,1L,0xE19E61F5L,0L,0xDC646347L},{1L,0L,5L,0x1465EFC8L,0xC63DF845L},{0x595A8542L,0x1B0B9837L,0x63BA38D6L,(-2L),9L},{1L,(-1L),5L,0xC63DF845L,0x4694B787L}},{{0xAE3188C7L,1L,0xE19E61F5L,0x595A8542L,(-1L)},{(-9L),0x986A9B86L,0x4F939530L,(-1L),0x95D9D199L},{0xF9EF7070L,1L,0x4015D47BL,0xF9EF7070L,0x1B0B9837L},{0xAE3188C7L,0x7662CDD3L,(-5L),0x3999D381L,(-1L)},{(-9L),4L,(-7L),9L,0x595A8542L},{(-1L),0L,0L,1L,(-2L)},{1L,(-1L),1L,(-9L),0L},{0xFC2E89DFL,0x595A8542L,(-5L),(-1L),0xBD950364L},{0x4015D47BL,0x595A8542L,0x9B86921AL,(-1L),1L},{1L,(-1L),0L,0x66F187F8L,0xC1BE3FFEL}},{{0x79F529EBL,0L,0L,(-2L),1L},{1L,4L,0L,(-1L),8L},{0xDC646347L,0x7662CDD3L,0x021C2B8EL,0xFB289EBEL,0x4015D47BL},{8L,1L,0xB2256ADFL,0x59390D4DL,0xBD950364L},{0x7662CDD3L,0x986A9B86L,0xE78CD9E7L,0xE78CD9E7L,0x986A9B86L},{9L,1L,0x021C2B8EL,4L,0x7662CDD3L},{4L,(-1L),1L,0xBD950364L,0x595A8542L},{0L,0x1B0B9837L,0x6DD438CAL,0x2B518DC3L,1L},{4L,0L,0L,(-9L),0L},{9L,1L,(-2L),0x4694B787L,0x95D9D199L}}};
    int32_t *l_4238 = &g_3129;
    uint64_t **l_4276 = &g_2723;
    int32_t l_4321 = 1L;
    int32_t l_4326 = (-8L);
    uint64_t l_4339 = 0UL;
    uint32_t **l_4359 = &g_1984[4][5][0];
    const union U2 l_4365 = {0x886BL};
    union U2 ***l_4390 = (void*)0;
    uint8_t l_4392 = 4UL;
    const struct S0 **l_4393 = (void*)0;
    uint32_t *l_4414 = &g_98[2];
    uint32_t ** const l_4413 = &l_4414;
    uint64_t l_4524 = 0xDB5405F500E011B4LL;
    int16_t ** const l_4531 = &g_3903;
    uint8_t l_4543 = 255UL;
    int64_t ***l_4544 = &g_655;
    struct S0 l_4549[9] = {{0,57},{0,57},{0,57},{0,57},{0,57},{0,57},{0,57},{0,57},{0,57}};
    int i, j, k;
lbl_4449:
    l_4231[3][0][1] = (l_4211 , (((((void*)0 != g_2749) > (0xFFL == (safe_add_func_uint64_t_u_u(((safe_div_func_int16_t_s_s(((p_9 ^ (((*l_4216) = (void*)0) == ((safe_rshift_func_uint8_t_u_s((++(*g_1603)), ((!(((l_4222 |= (-7L)) | 0x7420DEE21B65C474LL) >= ((safe_mul_func_uint16_t_u_u(((***g_4044) = (safe_sub_func_uint64_t_u_u(((l_4227 | p_11) || l_4211.f1), 18446744073709551615UL))), p_10)) == l_4228))) , l_4229))) , (void*)0))) , 0x855DL), 0xE767L)) , l_4211.f2), 0x559D433BAA376D47LL)))) , 0x706FL) | l_4230));
    for (g_1434 = (-3); (g_1434 == 15); g_1434++)
    {
        int32_t l_4236[8];
        union U2 l_4251 = {0L};
        int32_t l_4268 = 9L;
        int32_t l_4269[8] = {0xB8FB7B2CL,0xB8FB7B2CL,0xB8FB7B2CL,0xB8FB7B2CL,0xB8FB7B2CL,0xB8FB7B2CL,0xB8FB7B2CL,0xB8FB7B2CL};
        const struct S0 *l_4291 = &g_413;
        union U2 ***l_4386 = (void*)0;
        const uint8_t l_4446[1][6] = {{248UL,255UL,255UL,248UL,255UL,0xE7L}};
        const int16_t *l_4470[2][4] = {{&g_2422,&g_2422,&g_2422,&g_2422},{&g_2422,&g_2422,&g_2422,&g_2422}};
        int i, j;
        for (i = 0; i < 8; i++)
            l_4236[i] = 0x3AAE569DL;
        for (g_210 = 0; (g_210 <= (-27)); g_210 = safe_sub_func_uint16_t_u_u(g_210, 3))
        {
            int32_t *l_4237 = &g_72[0];
            struct S0 l_4256 = {1,11};
            int32_t l_4270 = 1L;
            int32_t l_4322 = 0xB1AECCEDL;
            int32_t l_4324 = (-1L);
            int32_t l_4325 = 0x4B6D1AA8L;
            uint64_t l_4327 = 0x14B838E247480E45LL;
            union U2 ***l_4387 = (void*)0;
            int64_t *l_4391 = &g_233[3][4];
            uint32_t *l_4403 = &g_441;
            struct S1 l_4471 = {-6590,2419,1};
            uint8_t l_4475 = 250UL;
            l_4238 = func_43(l_4236[2], l_4237, (*g_3803), p_10, (p_10 && l_4211.f0));
            for (g_355 = 8; (g_355 <= (-6)); g_355 = safe_sub_func_int64_t_s_s(g_355, 2))
            {
                return p_10;
            }
            if (p_10)
            {
                int16_t l_4262 = 6L;
                uint64_t l_4273[4][10] = {{9UL,9UL,18446744073709551615UL,3UL,0x9038D9DC46A7BA4CLL,0x9038D9DC46A7BA4CLL,3UL,18446744073709551615UL,9UL,9UL},{0x9038D9DC46A7BA4CLL,3UL,18446744073709551615UL,9UL,9UL,18446744073709551615UL,3UL,0x9038D9DC46A7BA4CLL,0x9038D9DC46A7BA4CLL,3UL},{0x9038D9DC46A7BA4CLL,9UL,3UL,3UL,9UL,0x9038D9DC46A7BA4CLL,18446744073709551615UL,18446744073709551615UL,0x9038D9DC46A7BA4CLL,9UL},{9UL,3UL,3UL,9UL,0x9038D9DC46A7BA4CLL,18446744073709551615UL,18446744073709551615UL,0x9038D9DC46A7BA4CLL,9UL,3UL}};
                int32_t l_4280 = 0x555CF790L;
                int32_t l_4285 = 0x1065875CL;
                int i, j;
                for (g_91 = 0; (g_91 > (-24)); g_91 = safe_sub_func_int32_t_s_s(g_91, 4))
                {
                    uint32_t *l_4243[1];
                    int32_t l_4263 = 0x130AB709L;
                    int32_t l_4271 = 0xADB9C2D8L;
                    int32_t l_4272 = 0xA20F610FL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_4243[i] = &g_259[0][5];
                    (*l_4237) = (p_10 <= (l_4243[0] == &p_11));
                    l_4263 = ((*l_4238) = ((safe_mul_func_uint16_t_u_u(p_11, (+(safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((l_4251 , (*l_4237)), 3)), (((**g_2722) , (-4L)) | ((safe_rshift_func_uint16_t_u_u((((safe_div_func_uint32_t_u_u((l_4256 , (safe_add_func_int8_t_s_s((g_4259 > ((((***g_1660) != ((safe_rshift_func_int8_t_s_u(l_4262, 5)) , (void*)0)) >= p_10) < (*g_1603))), 0x5FL))), 0x0FB061BDL)) == 0x499A9CAB2A452AA7LL) , 65535UL), (*l_4238))) & (*g_3903)))))))) != (*g_3903)));
                    for (g_2321 = 0; (g_2321 >= (-21)); g_2321 = safe_sub_func_int16_t_s_s(g_2321, 9))
                    {
                        int32_t *l_4266 = &l_4222;
                        int32_t *l_4267[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_4267[i] = &g_2169;
                        --l_4273[3][4];
                        l_4268 &= (((void*)0 == l_4276) < l_4271);
                    }
                }
                for (l_4229 = 0; (l_4229 >= 19); l_4229++)
                {
                    uint16_t l_4286 = 0UL;
                    for (g_2436 = 0; (g_2436 <= 2); g_2436 += 1)
                    {
                        int32_t *l_4279 = &g_64;
                        int32_t *l_4281 = &l_4231[3][0][1];
                        int32_t *l_4282 = (void*)0;
                        int32_t *l_4283 = (void*)0;
                        int32_t *l_4284[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_4284[i] = &l_4269[2];
                        (*g_3775) = &p_10;
                        l_4286--;
                    }
                }
            }
            else
            {
                struct S0 *l_4293[6] = {&g_118,&g_118,&g_118,&g_118,&g_118,&g_118};
                int16_t ***l_4312 = &g_867;
                int32_t l_4314[10] = {1L,(-1L),(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L),1L};
                int16_t l_4323 = 1L;
                struct S1 ***l_4377[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_4377[i] = &g_838;
                if ((p_11 <= (((safe_div_func_int64_t_s_s((0x506BL & (((((***g_1202) = p_9) <= ((((&g_915 != &g_3940) < ((((*l_4238) && (p_9 , p_11)) & 0x04A2L) | l_4269[6])) < 0xDCL) , p_9)) != 0x4C796D21L) && 0L)), (*l_4237))) >= 0L) <= (**g_2722))))
                {
                    const struct S0 **l_4292 = &l_4291;
                    uint64_t * const *l_4295 = (void*)0;
                    uint64_t * const * const *l_4294 = &l_4295;
                    int32_t l_4315 = 0xB456FD3DL;
                    uint32_t l_4316 = 0x6788B693L;
                    int32_t l_4336 = 0xC1A05680L;
                    int32_t l_4337 = 7L;
                    int32_t l_4338 = 1L;
                    int32_t ****l_4360 = &g_1221;
                    if ((((*l_4292) = l_4291) == l_4293[0]))
                    {
                        uint64_t * const * const **l_4296 = &l_4294;
                        int32_t l_4299 = 0x6984C696L;
                        int16_t ***l_4310 = &g_867;
                        int16_t ****l_4311 = &g_866;
                        int64_t *l_4313 = &g_1437[0][1];
                        (*l_4296) = l_4294;
                        l_4231[1][4][2] = (l_4316 = (((*g_1603) &= (safe_add_func_int32_t_s_s(l_4299, (((*l_4216) = &g_839) != &g_839)))) ^ (((l_4238 = (void*)0) != &p_10) <= ((l_4231[4][4][4] >= ((safe_mul_func_int8_t_s_s(((l_4299 | (((*l_4313) = (safe_mod_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((((*l_4311) = l_4310) == l_4312), (*g_1204))) , 0x70L), 0xE8L)), p_9)), p_11))) != l_4314[2])) & (-3L)), p_10)) >= l_4315)) && l_4315))));
                        return p_9;
                    }
                    else
                    {
                        int32_t *l_4317 = &g_3;
                        int32_t *l_4318 = &l_4222;
                        int32_t *l_4319 = &g_1182;
                        int32_t *l_4320[5][7][2] = {{{&l_4269[2],(void*)0},{&g_3129,(void*)0},{&l_4315,(void*)0},{(void*)0,&l_4315},{&g_3129,(void*)0},{&g_3129,&l_4315},{(void*)0,(void*)0}},{{&l_4315,(void*)0},{&g_3129,(void*)0},{&l_4269[2],&l_4231[1][5][1]},{&l_4231[1][5][1],&l_4315},{&l_4270,(void*)0},{(void*)0,&g_3},{(void*)0,&l_4314[9]}},{{&l_4269[2],&g_3129},{(void*)0,(void*)0},{&l_4315,(void*)0},{&l_4314[9],&g_3},{&l_4270,&l_4222},{&g_3129,&l_4269[2]},{&l_4231[1][5][1],&l_4314[9]}},{{&l_4315,(void*)0},{&l_4222,(void*)0},{&l_4315,&l_4314[9]},{&l_4231[1][5][1],&l_4269[2]},{&g_3129,&l_4222},{&l_4270,&g_3},{&l_4314[9],(void*)0}},{{&l_4315,(void*)0},{(void*)0,&g_3129},{&l_4269[2],&l_4314[9]},{(void*)0,&g_3},{(void*)0,(void*)0},{&l_4270,&l_4315},{&l_4231[1][5][1],&l_4231[1][5][1]}}};
                        int i, j, k;
                        l_4327++;
                        (*g_3775) = &l_4322;
                    }
                    for (g_2169 = 0; (g_2169 >= 0); g_2169 -= 1)
                    {
                        int32_t *l_4330 = &l_4322;
                        int32_t *l_4331 = &l_4326;
                        int32_t *l_4332 = &l_4326;
                        int32_t *l_4333 = &l_4321;
                        int32_t *l_4334[2][7][2] = {{{&g_3129,&g_1182},{&g_3129,&g_3129},{&g_3129,&g_1182},{&g_3129,&g_3129},{&g_3129,&g_1182},{&g_3129,&g_3129},{&g_3129,&g_1182}},{{&g_3129,&g_3129},{&g_3129,&g_1182},{&g_3129,&g_3129},{&g_3129,&g_1182},{&g_3129,&g_3129},{&g_3129,&g_1182},{&g_3129,&g_3129}}};
                        int i, j, k;
                        l_4339++;
                        (*l_4330) ^= ((*l_4237) &= (safe_div_func_uint16_t_u_u((p_11 | (((*l_4238) != p_10) <= (safe_lshift_func_uint8_t_u_u(p_9, 3)))), (safe_sub_func_int32_t_s_s(p_9, (safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((**g_4045), ((~((safe_sub_func_int32_t_s_s((((l_4359 != (void*)0) & 0x933BC6B7690D0928LL) > p_11), p_9)) < p_11)) | 0xB0L))) != p_10), 0x5EL)), p_9)), (-9L))))))));
                    }
                    l_4269[5] |= ((*l_4237) = ((void*)0 != l_4360));
                }
                else
                {
                    uint8_t l_4380 = 0x93L;
                    union U2 ****l_4388 = &l_4387;
                    union U2 ****l_4389 = &g_2655;
                    (*l_4237) = (0xBD534EC6L != (((safe_rshift_func_int8_t_s_s((-1L), 3)) | ((((safe_mul_func_uint16_t_u_u(p_11, ((*g_3903) = (l_4365 , (2L < ((*l_4238) >= ((0x51L > (4294967295UL < (safe_div_func_uint64_t_u_u(p_11, 2L)))) && (*g_2723)))))))) , l_4314[2]) , p_10) || p_11)) >= 0xE8ECL));
                    (*g_3131) = func_43(((**g_1203) = (safe_mul_func_int8_t_s_s((-10L), ((l_4314[1] = (safe_add_func_int32_t_s_s((!((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((p_9 , (&g_838 == l_4377[5])), ((((((*l_4237) = p_11) <= (((safe_rshift_func_int8_t_s_u(l_4380, ((*g_1603) ^= (safe_add_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u(((l_4386 != (l_4390 = ((*l_4388) = l_4387))) <= ((void*)0 == l_4391)))), p_9)), 0x65D5L))))) == p_10) & 0x55492DFCL)) & 0x3B3E4AB3L) , 0x5CF09F2CL) || p_11))), 7)) == 0x7AE2400AL)), l_4392))) && 0xFEFB4FE9189B8910LL)))), &g_3, (*g_1246), (*l_4238), p_11);
                }
            }
            if (((((void*)0 != l_4393) > ((((safe_lshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((+((((((p_9 = ((((((*l_4403)--) == (*l_4238)) > (((~((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((*g_4046), (l_4268 = ((p_9 >= ((*****g_1660) = ((safe_rshift_func_uint8_t_u_u(((*l_4237) != (l_4413 == &l_4414)), ((*l_4237) & (*l_4238)))) > (*l_4237)))) == 0x1CL)))), p_11)) ^ 1L)) , (*g_1603)) < (-9L))) , p_9) >= l_4269[2])) , (*g_4046)) <= p_10) != (*l_4237)) <= 0xAE76L) , 0xF6L)), p_11)) && p_10), l_4269[2])) , g_4415[0]) , p_10) , p_9), 0xC9F25BDDDFB870F4LL)), 3)) , 0xB9A5L) & p_10) & 0xFDF49E19L)) , p_10))
            {
                return p_11;
            }
            else
            {
                int32_t l_4432 = 0xF27801DFL;
                int8_t l_4433 = 0x39L;
                int32_t l_4442 = 0xD43B185DL;
                int32_t l_4448 = (-4L);
                struct S1 ***l_4452 = &g_838;
                int8_t l_4480 = 5L;
                int8_t l_4488[3][1][10] = {{{0xB3L,(-1L),0xB3L,0xD4L,(-4L),0x6EL,7L,7L,0x6EL,(-4L)}},{{5L,0x23L,0x23L,5L,0xB3L,1L,0xD4L,7L,0xD4L,1L}},{{0x6EL,0L,0xB3L,0L,0x6EL,0xBAL,0x23L,0xD4L,0L,0xD4L}}};
                int i, j, k;
                for (g_3129 = (-22); (g_3129 != (-4)); g_3129 = safe_add_func_int64_t_s_s(g_3129, 9))
                {
                    uint32_t l_4425 = 0xF4D98961L;
                    int32_t *l_4434 = &g_2169;
                    union U2 l_4435[6] = {{1L},{1L},{1L},{1L},{1L},{1L}};
                    const uint64_t * const * const l_4457 = (void*)0;
                    const uint64_t * const * const *l_4456 = &l_4457;
                    const uint64_t * const * const **l_4455[3][7][10] = {{{&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456},{(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0},{&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456},{&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456},{(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0},{&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456},{&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456}},{{(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0},{&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456},{&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456},{(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0},{&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456},{&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456},{(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0}},{{&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456},{&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456},{(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0},{&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456,&l_4456},{&l_4456,(void*)0,&l_4456,(void*)0,&l_4456,&l_4456,(void*)0,&l_4456,&l_4456,(void*)0},{&l_4456,(void*)0,&l_4456,&l_4456,(void*)0,&l_4456,&l_4456,(void*)0,&l_4456,&l_4456},{(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0,(void*)0,&l_4456,(void*)0}}};
                    int16_t *l_4472 = &g_2422;
                    int i, j, k;
                    if ((((((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((+p_10) & (l_4425 = (((*l_4238) = (-1L)) || ((**g_2722) ^= 0UL)))), p_11)), (*g_3903))), ((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(0xADFDL, (*l_4237))), (safe_sub_func_int16_t_s_s(l_4432, (l_4433 ^ p_11))))) , 0xF1600EFCL))) == 4294967295UL) != p_11) > p_11) <= 0xB1ADL))
                    {
                        uint64_t l_4447 = 0x2BCC04D732030F19LL;
                        (*g_3775) = ((*g_3131) = func_43(((*g_3803) , p_11), func_43(((***g_1202) = ((*g_1662) == (void*)0)), l_4434, l_4435[2], g_64, p_11), (**g_3802), (*l_4237), p_10));
                        (*l_4237) |= (safe_mod_func_int8_t_s_s((l_4269[4] , ((*****g_1660) ^= (l_4448 &= ((250UL != (safe_div_func_uint64_t_u_u(((**l_4276) = (l_4268 > ((void*)0 == (*g_3417)))), (safe_lshift_func_int16_t_s_u(((l_4442 |= p_9) && 0x1EDD3322D463B884LL), ((safe_mod_func_uint32_t_u_u(((+((*l_4238) > ((((((l_4236[1] == p_11) , l_4446[0][3]) && l_4447) < p_11) < p_11) & l_4269[6]))) , p_9), p_11)) && (*l_4434))))))) , p_9)))), 255UL));
                        if (p_9)
                            break;
                        if (g_1247.f0)
                            goto lbl_4449;
                    }
                    else
                    {
                        struct S1 ****l_4453 = &l_4216;
                        int32_t l_4454[5][3][10] = {{{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L},{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L},{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L}},{{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L},{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L},{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L}},{{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L},{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L},{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L}},{{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L},{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L},{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L}},{{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L},{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L},{0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L,0xD3FED119L}}};
                        int i, j, k;
                        (*l_4237) = ((safe_mul_func_uint8_t_u_u(p_9, (p_9 > (((*l_4453) = l_4452) == (l_4454[2][2][6] , (void*)0))))) != ((*l_4403) ^= (l_4455[1][2][5] != &g_2721[1][2][6])));
                    }
                    (*l_4238) = (safe_sub_func_int8_t_s_s((((**l_4413) = ((1UL ^ (safe_rshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u(((-4L) > (safe_sub_func_uint64_t_u_u(((*l_4434) = (safe_add_func_int64_t_s_s((l_4470[0][1] == (l_4471 , l_4472)), 6UL))), (l_4475 = (((18446744073709551606UL & ((safe_lshift_func_uint8_t_u_s(l_4442, (((0xA05CB121088C1864LL > p_10) != p_9) == l_4236[6]))) , 4UL)) && p_11) | (*****g_1660)))))), p_10)), p_10)) | (*l_4238)), l_4442))) > 1UL)) , 0xE6L), (*g_1204)));
                }
                l_4269[2] ^= ((safe_div_func_int64_t_s_s(0x938D1B6D45D71162LL, (l_4256 , (safe_mul_func_uint16_t_u_u((((*l_4237) = l_4480) , l_4268), (l_4446[0][3] ^ (~(*g_3903)))))))) | (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((((~(*l_4238)) , (+p_11)) < p_10) || (-3L)) | p_10), 13)), l_4488[2][0][0])));
            }
        }
    }
    for (g_1164 = 0; (g_1164 <= 15); ++g_1164)
    {
        struct S1 *l_4491 = &g_4492[1][5][4];
        int32_t l_4502 = 0x32C070DCL;
        int32_t l_4503 = (-1L);
        uint8_t l_4512[7][3][3] = {{{3UL,0xACL,0xACL},{0xA6L,0xAAL,0xB8L},{1UL,255UL,0x9CL}},{{0x73L,0xB8L,0xA6L},{1UL,9UL,1UL},{0UL,0UL,0UL}},{{255UL,0xACL,0x77L},{0x73L,1UL,9UL},{0xEBL,3UL,0xACL}},{{9UL,0x73L,9UL},{249UL,0x9CL,0x77L},{0xF2L,0xAAL,0UL}},{{3UL,255UL,1UL},{0xB8L,0xE8L,0xE8L},{3UL,0UL,0xEBL}},{{0xF2L,0xA6L,0UL},{249UL,0xEBL,3UL},{9UL,0UL,7UL}},{{0xEBL,0xEBL,9UL},{0x73L,0xA6L,255UL},{255UL,0UL,255UL}}};
        uint16_t *l_4519 = &g_5;
        int i, j, k;
        l_4491 = (void*)0;
        for (g_132 = 0; (g_132 >= 24); g_132++)
        {
            int16_t l_4499 = 0x23A2L;
            int32_t l_4508 = 2L;
            int32_t l_4510[3];
            uint16_t *l_4520 = &g_311;
            int32_t *l_4523 = &g_72[2];
            int i;
            for (i = 0; i < 3; i++)
                l_4510[i] = 0L;
            for (g_446 = 0; (g_446 <= 1); g_446 += 1)
            {
                int32_t l_4500 = 0xE889F41DL;
                int8_t l_4501 = (-1L);
                int64_t l_4504 = 7L;
                int32_t l_4509 = 0x8BF2593DL;
                int32_t l_4511 = 1L;
                for (g_1182 = 0; (g_1182 <= 7); g_1182 += 1)
                {
                    int32_t *l_4495 = (void*)0;
                    int32_t *l_4496 = &l_4321;
                    int32_t *l_4497 = &l_4326;
                    int32_t *l_4498[3][2] = {{&l_4222,&l_4222},{&l_4222,&l_4222},{&l_4222,&l_4222}};
                    uint32_t l_4505 = 3UL;
                    int i, j;
                    --l_4505;
                    if (g_1013[g_446])
                        break;
                    l_4512[1][0][1]++;
                }
            }
            (*l_4523) &= ((****g_1661) | (safe_sub_func_uint16_t_u_u((*g_493), ((*g_1603) | ((p_11 && (safe_div_func_uint16_t_u_u(((l_4502 = ((l_4519 == l_4520) | p_11)) , (((*l_4238) != (safe_sub_func_int32_t_s_s((((**g_2722) > 0x269CAA17853F05F0LL) <= 18446744073709551615UL), 3L))) , (*g_493))), p_11))) && 0x22F92A6F3904BFF2LL)))));
            (*l_4238) |= p_11;
            if ((*l_4523))
                continue;
        }
        --l_4524;
    }
    for (g_1734 = 0; (g_1734 > 29); g_1734 = safe_add_func_int16_t_s_s(g_1734, 6))
    {
        int16_t ** const l_4532 = &g_3903;
        struct S1 ***l_4535[6] = {&g_838,&g_838,&g_838,&g_838,&g_838,&g_838};
        int32_t l_4540 = (-3L);
        union U2 l_4551 = {0x91DCL};
        int i;
        (*g_3775) = (void*)0;
        for (l_4321 = (-17); (l_4321 >= 20); l_4321++)
        {
            struct S1 ***l_4536 = &g_838;
            uint16_t *l_4539[5][3] = {{&g_5,&g_4050,&g_4050},{&g_5,&g_5,&g_4050},{&g_4050,&g_5,&g_311},{(void*)0,&g_5,(void*)0},{(void*)0,&g_4050,&g_5}};
            int32_t l_4541 = (-10L);
            uint32_t *l_4542 = &g_259[0][5];
            int64_t ****l_4545 = &g_3400;
            union U2 l_4550[9][1][5] = {{{{0xA783L},{0xCB3BL},{0xCB3BL},{0xA783L},{0xCB3BL}}},{{{1L},{1L},{0x53D2L},{1L},{1L}}},{{{0xCB3BL},{0xA783L},{0xCB3BL},{0xCB3BL},{0xA783L}}},{{{1L},{0xFC9EL},{0xFC9EL},{1L},{0xFC9EL}}},{{{0xA783L},{0xA783L},{0x0B71L},{0xA783L},{0xA783L}}},{{{0xFC9EL},{1L},{0xFC9EL},{0xFC9EL},{1L}}},{{{0xA783L},{0xCB3BL},{0xCB3BL},{0xA783L},{0xCB3BL}}},{{{1L},{1L},{0x53D2L},{1L},{1L}}},{{{0xCB3BL},{0xA783L},{0xCB3BL},{0xCB3BL},{0xA783L}}}};
            int i, j, k;
            (*l_4238) = ((l_4531 != l_4532) < ((safe_lshift_func_uint16_t_u_u(((p_9 , l_4535[0]) != l_4536), 13)) <= p_11));
            (*g_3131) = func_43(((safe_rshift_func_uint16_t_u_s((l_4540 = ((**g_4045) = (*l_4238))), p_9)) < l_4541), func_43((((((((*l_4542) &= 0x9BE698DBL) | l_4543) > p_11) != p_11) >= (((*l_4545) = l_4544) != (((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s(p_11)), p_11)) , l_4549[4]) , l_4544))) < 0xE172A60BD3EA1F8DLL), &l_4326, l_4550[6][0][1], g_2169, p_9), l_4551, p_10, l_4551.f0);
            return p_9;
        }
    }
    return (*l_4238);
}







static uint16_t func_31(uint64_t p_32, int32_t * const p_33, struct S0 p_34, struct S1 p_35)
{
    union U2 **l_3147 = &g_1246;
    int32_t l_3148 = 0x8476FE05L;
    int32_t *l_3149 = &g_3129;
    int32_t *l_3150 = &g_2169;
    int32_t *l_3151 = &g_1182;
    int32_t *l_3152 = &g_72[1];
    int32_t *l_3153[4] = {&g_1182,&g_1182,&g_1182,&g_1182};
    uint64_t l_3159 = 1UL;
    uint64_t l_3160 = 0x1F49968D128F0635LL;
    int8_t **l_3164 = (void*)0;
    int64_t l_3182 = 0L;
    uint16_t l_3189 = 0UL;
    union U2 *l_3239 = &g_1247;
    struct S0 * const l_3317 = (void*)0;
    const int64_t ***l_3407 = &g_1575;
    const int64_t **** const l_3406 = &l_3407;
    uint16_t *****l_3426 = &g_2277;
    int8_t l_3435 = 0x0DL;
    uint64_t * const *l_3465 = &g_2723;
    uint64_t * const **l_3464 = &l_3465;
    uint64_t * const ***l_3463[7][9] = {{&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464},{&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464},{&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464},{&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464},{&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464},{&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464},{&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464,&l_3464}};
    int16_t *l_3470 = &g_3001;
    struct S0 *** const l_3547 = &g_579;
    int32_t l_3648 = 0x7D764E21L;
    union U2 * const ** const l_3673 = (void*)0;
    union U2 * const ** const *l_3672 = &l_3673;
    uint32_t l_3684[8][8][4] = {{{0x55331C09L,0x8C74B6B4L,0x467E0081L,4294967291UL},{0x7FE00448L,0xFF299FAAL,4294967291UL,0x54A53DF9L},{0x7A682F0FL,0x467E0081L,4294967286UL,0xDAA3EFB1L},{0x6EEAEB42L,0xF7AEF776L,0xF7AEF776L,0x6EEAEB42L},{0x2244C622L,0xA8FD2337L,0UL,3UL},{4294967286UL,0x343269FDL,5UL,3UL},{0xA3AE8C17L,0x6EEAEB42L,0x46D8CC39L,3UL},{0x307C72E9L,0x343269FDL,4294967286UL,3UL}},{{0x8C74B6B4L,0xA8FD2337L,0xFF299FAAL,0x6EEAEB42L},{4294967286UL,0xF7AEF776L,4294967295UL,0xDAA3EFB1L},{0x55331C09L,0x467E0081L,0x343269FDL,0x54A53DF9L},{4294967295UL,0xFF299FAAL,0x4B073E02L,4294967291UL},{0xA8FD2337L,0xAEE62E68L,0x55331C09L,0xAEE62E68L},{4294967287UL,4294967295UL,0x7FE00448L,0x2244C622L},{3UL,0x307C72E9L,0x54A53DF9L,0x4B073E02L},{0x4B073E02L,4294967295UL,0x2244C622L,0UL}},{{0x4B073E02L,0x7A682F0FL,0x54A53DF9L,3UL},{3UL,0UL,0x7FE00448L,0x7F448F4EL},{4294967287UL,3UL,0x55331C09L,5UL},{0xA8FD2337L,0x5C3B436EL,0x4B073E02L,4294967286UL},{4294967295UL,0x8C74B6B4L,0x343269FDL,8UL},{0x55331C09L,4294967286UL,4294967295UL,4294967295UL},{4294967286UL,4294967286UL,0xFF299FAAL,4294967295UL},{0x8C74B6B4L,3UL,4294967286UL,0xA8FD2337L}},{{0x307C72E9L,4294967286UL,0x46D8CC39L,4294967286UL},{0xA3AE8C17L,4294967286UL,5UL,0xA8FD2337L},{4294967286UL,3UL,0UL,4294967295UL},{0x2244C622L,4294967286UL,0xF7AEF776L,4294967295UL},{0x6EEAEB42L,4294967286UL,4294967286UL,8UL},{0x7A682F0FL,0x8C74B6B4L,4294967291UL,4294967286UL},{0x7FE00448L,0x5C3B436EL,0x467E0081L,5UL},{0UL,3UL,0UL,0x7F448F4EL}},{{4294967291UL,0UL,0xDAA3EFB1L,3UL},{5UL,0x7A682F0FL,0xA8FD2337L,0UL},{0x343269FDL,4294967295UL,0xA8FD2337L,0x4B073E02L},{5UL,0x307C72E9L,0xDAA3EFB1L,0x2244C622L},{4294967291UL,4294967295UL,0UL,0xAEE62E68L},{0UL,0xAEE62E68L,0x467E0081L,4294967291UL},{0x7FE00448L,0xFF299FAAL,4294967291UL,0x54A53DF9L},{0x7A682F0FL,0x467E0081L,4294967286UL,0xDAA3EFB1L}},{{0x6EEAEB42L,0xF7AEF776L,0xF7AEF776L,0x6EEAEB42L},{0x2244C622L,0xA8FD2337L,0UL,3UL},{4294967286UL,0x343269FDL,5UL,3UL},{0xA3AE8C17L,0x6EEAEB42L,0x46D8CC39L,3UL},{0x307C72E9L,0x343269FDL,4294967286UL,3UL},{0x8C74B6B4L,0xA8FD2337L,0xFF299FAAL,0x6EEAEB42L},{4294967286UL,0xF7AEF776L,4294967295UL,0xDAA3EFB1L},{0x55331C09L,0x467E0081L,0x343269FDL,0x54A53DF9L}},{{0x6EEAEB42L,0x2244C622L,0x7FE00448L,4294967295UL},{0x4B073E02L,4294967291UL,0UL,4294967291UL},{0UL,0x6EEAEB42L,4294967291UL,0x343269FDL},{8UL,0x7F448F4EL,5UL,0x7FE00448L},{0x7FE00448L,0xC8EBDC35L,0x343269FDL,4294967287UL},{0x7FE00448L,0x54A53DF9L,5UL,4294967295UL},{8UL,4294967287UL,4294967291UL,4294967286UL},{0UL,0x5C3B436EL,0UL,0x307C72E9L}},{{0x4B073E02L,0xF7AEF776L,0x7FE00448L,0x467E0081L},{0x6EEAEB42L,0xAEE62E68L,0x7A682F0FL,4294967295UL},{0UL,4294967286UL,0x6EEAEB42L,0x6EEAEB42L},{0x55331C09L,0x55331C09L,0x2244C622L,0xC8EBDC35L},{0xAEE62E68L,4294967295UL,4294967286UL,0x4B073E02L},{0x7F448F4EL,0x467E0081L,0xA3AE8C17L,4294967286UL},{3UL,0x467E0081L,0x307C72E9L,0x4B073E02L},{0x467E0081L,4294967295UL,0x8C74B6B4L,0xC8EBDC35L}}};
    int64_t l_3726 = 0xF270B9CDD6FBBE20LL;
    uint32_t **l_3752 = (void*)0;
    int8_t ****l_3755 = &g_2540;
    int16_t ***l_3783 = &g_867;
    union U2 l_3793 = {-9L};
    const uint64_t *l_3836 = &g_1734;
    const uint64_t **l_3835 = &l_3836;
    const int64_t ****l_3856 = &l_3407;
    struct S1 l_3954 = {3308,4539,0};
    int8_t l_3963 = 0x2EL;
    int32_t ****l_3969[7][2] = {{&g_1221,&g_1221},{(void*)0,&g_1221},{&g_1221,&g_1221},{&g_1221,&g_1221},{&g_1221,(void*)0},{&g_1221,&g_1221},{&g_1221,&g_1221}};
    const uint8_t ***l_4025[7][1][9] = {{{&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418}},{{&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418}},{{&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418}},{{&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418}},{{&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418}},{{&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418}},{{&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418,&g_3418}}};
    uint32_t l_4039 = 4294967295UL;
    uint16_t **l_4123[8][4] = {{&g_4046,&g_4046,&g_4046,&g_4046},{&g_4046,&g_4046,(void*)0,&g_4046},{&g_4046,&g_4046,&g_4046,&g_4046},{&g_4046,&g_4046,&g_4046,&g_4046},{&g_4046,&g_4046,(void*)0,&g_4046},{&g_4046,&g_4046,&g_4046,&g_4046},{&g_4046,&g_4046,&g_4046,&g_4046},{&g_4046,&g_4046,(void*)0,&g_4046}};
    int8_t l_4205 = 0x44L;
    int32_t l_4207 = 0x48997CB1L;
    int i, j, k;
    (*g_340) &= (((safe_div_func_uint64_t_u_u(p_35.f1, ((0xC4990ED3L >= p_35.f0) && (safe_lshift_func_uint8_t_u_u(((p_34.f1 , (void*)0) == ((((-8L) ^ (((l_3147 == (void*)0) | (l_3148 > 0x3D2C8DDCL)) & (***g_1662))) , (**l_3147)) , (*g_1575))), 4))))) , p_34.f1) | l_3148);
    g_3154++;
    if (((*l_3150) <= (((safe_mod_func_int8_t_s_s(((*****g_1660) = l_3159), ((*g_1603) = 1UL))) != (*l_3150)) != (*l_3149))))
    {
        return l_3160;
    }
    else
    {
        const int8_t * const l_3162 = &g_91;
        const int8_t * const *l_3161[4][7][4] = {{{&l_3162,&l_3162,&l_3162,(void*)0},{(void*)0,&l_3162,(void*)0,&l_3162},{&l_3162,(void*)0,&l_3162,&l_3162},{&l_3162,&l_3162,(void*)0,&l_3162},{&l_3162,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,(void*)0,&l_3162}},{{&l_3162,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,&l_3162,&l_3162},{(void*)0,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,(void*)0,&l_3162}},{{&l_3162,(void*)0,&l_3162,&l_3162},{&l_3162,&l_3162,(void*)0,(void*)0},{&l_3162,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,(void*)0,&l_3162}},{{&l_3162,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,&l_3162,(void*)0},{&l_3162,(void*)0,&l_3162,&l_3162},{&l_3162,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,(void*)0,&l_3162},{&l_3162,&l_3162,&l_3162,&l_3162},{&l_3162,&l_3162,(void*)0,(void*)0}}};
        int8_t **l_3163 = &g_1485;
        uint64_t l_3167 = 0x1414176F86F212B3LL;
        int64_t ***l_3178 = &g_655;
        int32_t l_3188[1];
        uint16_t *****l_3194 = &g_2277;
        const struct S0 l_3232 = {0,60};
        int32_t l_3262 = 0L;
        uint8_t l_3270 = 0xFCL;
        uint64_t l_3345 = 0x95801B130330C7BBLL;
        const uint16_t l_3367 = 1UL;
        int8_t * const * const ***l_3392 = &g_1661;
        struct S0 ** const *l_3450[3][6] = {{(void*)0,&g_579,(void*)0,&g_579,(void*)0,&g_579},{(void*)0,&g_579,(void*)0,&g_579,(void*)0,&g_579},{(void*)0,&g_579,(void*)0,&g_579,(void*)0,&g_579}};
        struct S0 ** const ** const l_3449 = &l_3450[1][5];
        uint32_t ** const l_3453 = (void*)0;
        uint64_t l_3495[6][2] = {{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL}};
        const uint64_t **l_3504 = (void*)0;
        int64_t *****l_3515[3];
        uint8_t ***l_3525 = (void*)0;
        union U2 *l_3538 = &g_2940;
        uint16_t l_3546 = 65527UL;
        int8_t *l_3556[2];
        uint64_t l_3601[2][9] = {{1UL,3UL,1UL,3UL,1UL,3UL,1UL,3UL,1UL},{0xCEC591DB6A38682BLL,0xCEC591DB6A38682BLL,0UL,0UL,0xCEC591DB6A38682BLL,0xCEC591DB6A38682BLL,0UL,0UL,0xCEC591DB6A38682BLL}};
        int64_t l_3624 = 0L;
        int16_t ***** const l_3941 = (void*)0;
        int16_t l_3961 = (-3L);
        uint32_t l_3962 = 4294967291UL;
        union U2 ***l_4020 = &l_3147;
        union U2 ****l_4021 = &g_2655;
        uint16_t l_4022[6];
        const struct S0 *l_4065 = &g_413;
        const struct S0 **l_4064 = &l_4065;
        const struct S0 ***l_4063 = &l_4064;
        uint16_t l_4068 = 0x3C64L;
        const uint32_t l_4115[3] = {0x4486554CL,0x4486554CL,0x4486554CL};
        uint64_t *l_4173 = &l_3601[1][4];
        int64_t l_4206 = 0L;
        uint16_t l_4208 = 0x3E9AL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_3188[i] = 5L;
        for (i = 0; i < 3; i++)
            l_3515[i] = &g_3399[5][3];
        for (i = 0; i < 2; i++)
            l_3556[i] = (void*)0;
        for (i = 0; i < 6; i++)
            l_4022[i] = 0x2935L;
        if (((((l_3161[3][1][0] != (l_3164 = l_3163)) ^ (((*l_3150) >= (l_3167 == (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((0L || (safe_mod_func_int8_t_s_s((3L || (0L <= (l_3167 <= (*l_3149)))), 0xC8L))) | p_32), l_3167)) , 3L), p_34.f1)))) && (*p_33))) > (****g_1201)) | 0x22L))
        {
            int64_t ***l_3179 = (void*)0;
            int64_t * const *l_3181 = (void*)0;
            int64_t * const **l_3180 = &l_3181;
            int32_t l_3183 = 0xBACB5AEBL;
            int32_t l_3187 = (-8L);
            int64_t l_3276 = (-8L);
            const uint32_t l_3286 = 0xF55EB19CL;
            int32_t l_3287[8][9][1] = {{{8L},{0x90BC7F38L},{0x06BD5D56L},{(-7L)},{0x7CD81008L},{0x9ADD0D7CL},{0x9ADD0D7CL},{0x7CD81008L},{(-7L)}},{{0x06BD5D56L},{0x90BC7F38L},{8L},{0L},{0x012ACB59L},{5L},{0x6F39A365L},{5L},{0x012ACB59L}},{{0L},{8L},{0x90BC7F38L},{0x06BD5D56L},{(-7L)},{0x7CD81008L},{0x9ADD0D7CL},{0x9ADD0D7CL},{0x7CD81008L}},{{(-7L)},{0x06BD5D56L},{0x90BC7F38L},{8L},{0L},{0x012ACB59L},{5L},{0x6F39A365L},{5L}},{{0x012ACB59L},{0L},{8L},{0x90BC7F38L},{0x06BD5D56L},{(-7L)},{0x7CD81008L},{0x9ADD0D7CL},{0x9ADD0D7CL}},{{0x7CD81008L},{0x9ADD0D7CL},{(-7L)},{0x6F39A365L},{0x7C030856L},{0xBB5F717EL},{0x06BD5D56L},{0xDC24CB08L},{(-2L)}},{{0xDC24CB08L},{0x06BD5D56L},{0xBB5F717EL},{0x7C030856L},{0x6F39A365L},{(-7L)},{0x9ADD0D7CL},{5L},{0xCA41416EL}},{{0xCA41416EL},{5L},{0x9ADD0D7CL},{(-7L)},{0x6F39A365L},{0x7C030856L},{0xBB5F717EL},{0x06BD5D56L},{0xDC24CB08L}}};
            const uint8_t **l_3292 = (void*)0;
            int32_t l_3302 = 0x6B99562DL;
            uint8_t l_3366 = 249UL;
            struct S1 l_3438 = {6200,4250,1};
            int16_t *l_3471 = &g_2422;
            uint32_t l_3496[3][7][8] = {{{0x1A08AEBEL,0xB8FF1451L,4294967295UL,4294967288UL,0xFCDED108L,0xF163C4ECL,0x0AD15196L,0x04B8C99CL},{4294967294UL,0xCF1DD22AL,0xC6D822CEL,1UL,0xFCDED108L,0UL,0xB8FF1451L,0xFD2DF1DBL},{0x1A08AEBEL,4294967295UL,0xCF1DD22AL,0x04B8C99CL,0x9ADC5F27L,0x88CC1587L,4294967293UL,0xC6D822CEL},{0xF163C4ECL,0xA3F594BBL,4294967288UL,0x1A08AEBEL,1UL,1UL,0x322E46C9L,4294967293UL},{1UL,8UL,4294967291UL,0xA3F594BBL,4294967295UL,0xFCDED108L,4294967295UL,4294967293UL},{0xC6D822CEL,0xF163C4ECL,4294967295UL,0UL,0x88CC1587L,0x322E46C9L,0x7FADFEA2L,4294967288UL},{0x7FADFEA2L,0xFD2DF1DBL,0UL,1UL,4294967295UL,1UL,1UL,4294967295UL}},{{4294967293UL,0xB6083C30L,0xB6083C30L,4294967293UL,0xFD2DF1DBL,5UL,0xCF1DD22AL,0x5953A34DL},{0xA73DC80AL,0x563FEEB7L,1UL,0xF163C4ECL,8UL,0x1A08AEBEL,4294967295UL,5UL},{0xB8FF1451L,0x563FEEB7L,1UL,1UL,4294967286UL,5UL,0x384A35C1L,4294967295UL},{0x524EAE6CL,0xB6083C30L,0x322E46C9L,0UL,0x123E61C8L,1UL,0x14E09ABCL,0xA73DC80AL},{0x34C11AFBL,0xFD2DF1DBL,4294967295UL,4UL,1UL,0x322E46C9L,4294967291UL,1UL},{4294967295UL,0xF163C4ECL,0x2A0D8867L,0x384A35C1L,0xEDEB99C6L,0xFCDED108L,0xA73DC80AL,0x1A08AEBEL},{0xA3F594BBL,8UL,5UL,4294967291UL,0x2A0D8867L,1UL,0x04B8C99CL,0x23C365C8L}},{{4294967295UL,0xA3F594BBL,0x34C11AFBL,0x88CC1587L,0xC6D822CEL,0x88CC1587L,0x34C11AFBL,0xA3F594BBL},{0UL,4294967295UL,4294967293UL,0x9ADC5F27L,5UL,0UL,0x88CC1587L,1UL},{4UL,0xCF1DD22AL,1UL,0xB8FF1451L,0UL,0xF163C4ECL,0x88CC1587L,0x2A0D8867L},{8UL,0xB8FF1451L,4294967293UL,0UL,0UL,4294967288UL,0x34C11AFBL,1UL},{0UL,4294967288UL,0x34C11AFBL,1UL,0x384A35C1L,0UL,0x04B8C99CL,0xEDEB99C6L},{0x9ADC5F27L,0x23C365C8L,5UL,4294967286UL,0x2D1F649BL,4294967294UL,0xA73DC80AL,0x384A35C1L},{1UL,5UL,0x2A0D8867L,0x524EAE6CL,1UL,0xF163C4ECL,1UL,0x563FEEB7L}}};
            int16_t l_3497 = 0x2C14L;
            int8_t l_3518 = (-1L);
            uint8_t ****l_3526 = (void*)0;
            uint8_t ****l_3527 = &l_3525;
            int i, j, k;
            if ((safe_sub_func_int64_t_s_s(((l_3179 = l_3178) == l_3180), (p_35.f2 , (p_32 && l_3182)))))
            {
                uint8_t l_3184 = 9UL;
                const uint64_t *l_3226 = &l_3167;
                ++l_3184;
                --l_3189;
                if (l_3183)
                {
                    int8_t *l_3192 = &g_1205;
                    uint32_t *l_3203 = &g_441;
                    int32_t **l_3204 = &l_3152;
                    (*l_3151) &= (l_3188[0] >= (((((*l_3164) != (l_3192 = l_3192)) & ((**g_838) , (((g_3193 = &g_2277) != (g_3195 = l_3194)) <= 0xFA0002D7B3E2C2EELL))) ^ (((!(safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u(((*l_3203) |= ((&l_3184 == ((safe_add_func_int8_t_s_s(p_35.f0, p_35.f0)) , &l_3184)) || 9UL)), 0xAFB9EC31L)), 18446744073709551615UL))) == l_3184) != 18446744073709551615UL)) != p_34.f1));
                    if (g_87.f2)
                        goto lbl_3205;
lbl_3205:
                    (*l_3204) = p_33;
                    if ((safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((**l_3204), 0x3DL)) ^ (l_3188[0] , (safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(p_35.f0, (((*l_3203) = (safe_div_func_uint16_t_u_u((((p_35.f1 != (((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((&p_35 != ((safe_sub_func_int32_t_s_s((&l_3161[3][1][0] != (void*)0), (p_34.f1 < 0x16CD7DE2L))) , (void*)0)), (-1L))), l_3187)) < l_3167) && 1L)) > 0x07BE61A598E341D0LL) , p_35.f2), l_3188[0]))) && 0x617C8AE8L))), l_3167)), 0x5A68C7CDFA4BAFFCLL)), (*l_3151))))), p_35.f0)))
                    {
                        (*l_3150) = 0x049512E4L;
                        return (*l_3150);
                    }
                    else
                    {
                        int16_t l_3227 = 3L;
                        l_3227 = ((void*)0 != l_3226);
                        return (*g_493);
                    }
                }
                else
                {
                    return p_35.f1;
                }
            }
            else
            {
                int8_t l_3240 = (-1L);
                int32_t l_3273 = 0x223170B3L;
                struct S1 **l_3314 = &g_839;
                if ((((safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((l_3232 , (((safe_add_func_uint32_t_u_u(((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(((l_3183 = l_3183) | ((*g_1603) | ((p_35.f1 ^ ((((void*)0 == l_3239) , p_35.f1) <= 18446744073709551615UL)) || (0UL | 0x4319725B26E43EC2LL)))), 4)), (*l_3152))) > l_3240), l_3240)) >= 0x70L) , p_32)) , p_35.f0), l_3240)), l_3232.f0)) > p_35.f1) || p_32))
                {
                    uint32_t l_3261[6][1][5] = {{{1UL,1UL,0UL,0UL,1UL}},{{18446744073709551607UL,18446744073709551608UL,18446744073709551607UL,18446744073709551608UL,18446744073709551607UL}},{{1UL,0UL,0UL,1UL,1UL}},{{0x11296F9EL,18446744073709551608UL,0x11296F9EL,18446744073709551608UL,0x11296F9EL}},{{1UL,1UL,0UL,0UL,1UL}},{{18446744073709551607UL,18446744073709551608UL,18446744073709551607UL,18446744073709551608UL,18446744073709551607UL}}};
                    uint32_t *l_3279 = &g_259[5][4];
                    int i, j, k;
                    (*l_3150) = (((safe_rshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s(l_3240, (safe_sub_func_uint8_t_u_u((255UL != l_3167), (((safe_rshift_func_uint8_t_u_s(p_35.f1, ((****g_1201) <= (l_3262 ^= ((safe_mul_func_int16_t_s_s((((((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((*p_33), (safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(p_35.f0, (safe_lshift_func_int8_t_s_u(l_3188[0], ((0x56E1D06A79C202F8LL == 0xCE94A43A73B77B7BLL) < l_3261[5][0][4]))))), 7)))), p_35.f2)) && p_35.f1) == p_32) == (*g_340)) < p_34.f1), p_34.f1)) , 2L))))) || 2UL) > l_3187))))) > 0L), 4)) < 0x2A2A4FD8L) < p_34.f1);
                    for (g_3069 = 0; (g_3069 > 8); g_3069 = safe_add_func_uint32_t_u_u(g_3069, 4))
                    {
                        if ((*p_33))
                            break;
                        (*l_3150) = (*p_33);
                        (**g_3131) = (safe_unary_minus_func_uint32_t_u((l_3270 = (0xDBL & (safe_lshift_func_uint16_t_u_s(p_35.f2, (safe_mul_func_uint16_t_u_u(0xF2BDL, l_3261[3][0][4]))))))));
                    }
                    l_3273 |= (safe_rshift_func_int16_t_s_u(0x6FA4L, 1));
                    (**g_3131) = (safe_mul_func_uint16_t_u_u(((*l_3152) | ((l_3261[5][0][4] & l_3240) || l_3261[5][0][4])), ((l_3276 > (safe_mul_func_uint8_t_u_u((p_35.f2 ^ (((--(*l_3279)) || (safe_mod_func_int8_t_s_s((l_3167 <= 4294967295UL), ((*g_1603) = (safe_mul_func_uint16_t_u_u((l_3286 != (-2L)), l_3188[0])))))) < l_3287[7][1][0])), l_3273))) || (*g_340))));
                }
                else
                {
                    uint64_t l_3293 = 18446744073709551610UL;
                    if ((+0x6AB23B3DL))
                    {
                        const uint8_t *l_3291 = &g_446;
                        const uint8_t **l_3290 = &l_3291;
                        const uint8_t ***l_3289[9] = {&l_3290,&l_3290,&l_3290,&l_3290,&l_3290,&l_3290,&l_3290,&l_3290,&l_3290};
                        int i;
                        l_3292 = (void*)0;
                    }
                    else
                    {
                        --l_3293;
                    }
                }
                (*l_3149) &= (((safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(l_3302, ((p_35.f1 == (safe_lshift_func_uint8_t_u_s(0xADL, (!1UL)))) , (((((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((254UL && ((*g_1603) = (((safe_sub_func_int8_t_s_s(((***g_1662) = p_35.f0), (safe_sub_func_int8_t_s_s(((l_3183 &= ((void*)0 == l_3314)) , ((safe_sub_func_uint32_t_u_u(p_32, 0x1633C90FL)) && 0x8A3BB594790DF0C8LL)), 0UL)))) , (*g_2722)) != (void*)0))) == l_3287[5][7][0]), p_34.f1)), (*l_3152))) || p_35.f2) | 0x9BL) || 0xDD563F94L) || p_35.f0)))) < (*g_493)), l_3188[0])), (*p_33))) , l_3317) != &p_34);
            }
            if ((0xE7L < p_34.f1))
            {
                int8_t l_3324 = 0x0DL;
                int32_t l_3325 = 0x82384339L;
                uint16_t *l_3326 = &g_289[4];
                uint16_t *l_3333 = &g_311;
                uint16_t *l_3336 = &g_134;
                int64_t ** const *l_3402 = &g_655;
                int64_t ** const **l_3401 = &l_3402;
                const uint8_t ***l_3421 = (void*)0;
                int32_t l_3447 = 0xFC0B1F19L;
                union U2 l_3448 = {-5L};
                uint64_t **l_3462 = (void*)0;
                uint64_t *** const l_3461 = &l_3462;
                uint64_t *** const *l_3460[10][7][2] = {{{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{(void*)0,&l_3461},{&l_3461,(void*)0}},{{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461}},{{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,(void*)0},{&l_3461,&l_3461},{(void*)0,&l_3461},{&l_3461,&l_3461}},{{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461}},{{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{(void*)0,&l_3461},{&l_3461,(void*)0},{&l_3461,&l_3461}},{{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461}},{{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,(void*)0},{&l_3461,&l_3461},{(void*)0,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461}},{{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461}},{{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{(void*)0,&l_3461},{&l_3461,(void*)0},{&l_3461,&l_3461},{&l_3461,&l_3461}},{{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461},{&l_3461,&l_3461}}};
                int i, j, k;
                if ((((safe_lshift_func_uint16_t_u_u(((*g_340) , (((safe_add_func_int64_t_s_s(0x2404D80EBCA7115ALL, l_3188[0])) >= (***g_1662)) ^ (((*l_3326)--) , l_3188[0]))), ((*l_3333) &= (safe_lshift_func_uint8_t_u_u(p_34.f1, ((*g_1603)++)))))) ^ (((safe_rshift_func_uint16_t_u_s((--(*l_3336)), 4)) != ((safe_lshift_func_int16_t_s_s(l_3325, ((safe_rshift_func_int16_t_s_u((p_35.f0 > p_35.f1), p_34.f0)) , l_3325))) >= l_3287[7][1][0])) == 4294967288UL)) == l_3183))
                {
                    uint64_t l_3357[2][1][4] = {{{18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL}},{{18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL}}};
                    int i, j, k;
                    for (g_139 = 0; (g_139 >= 19); ++g_139)
                    {
                        if (l_3345)
                            break;
                        if ((*g_340))
                            continue;
                        l_3302 |= l_3325;
                    }
                    (*l_3150) = ((l_3183 || ((((safe_div_func_int64_t_s_s((+((safe_div_func_int16_t_s_s(((p_35.f1 , (safe_div_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(l_3357[1][0][2], ((*g_1603) &= p_34.f1))), ((*g_2723) &= (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(p_32, l_3345)), 11)) | ((7L || 0UL) > (safe_mod_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(l_3270, l_3357[1][0][1])) & p_35.f0), p_35.f1)))) , 0x24D6F16CF43D20DDLL)))) > l_3366), (*p_33)))) != p_34.f0), 0xD7D2L)) ^ (*p_33))), 1UL)) > l_3367) , 0xB4L) > (**g_1203))) <= p_32);
                }
                else
                {
                    uint32_t l_3380[10] = {0xC9EE3DCBL,0x5F26BBC4L,0x5F26BBC4L,0xC9EE3DCBL,0x4B5710E4L,0xC9EE3DCBL,0x5F26BBC4L,0x5F26BBC4L,0xC9EE3DCBL,0x4B5710E4L};
                    int32_t l_3422 = 0xDBCE2768L;
                    int32_t l_3428[6] = {0x7FBA41C3L,0xED1B3E3BL,0xED1B3E3BL,0x7FBA41C3L,0xED1B3E3BL,0xED1B3E3BL};
                    int i;
                    if (((*l_3150) | ((safe_add_func_int32_t_s_s((3L & ((*g_340) = 1L)), ((*g_1204) ^ (safe_sub_func_int8_t_s_s(0L, ((*g_1603) = ((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u(p_35.f1, (safe_mod_func_uint32_t_u_u(0x38B11989L, p_34.f0)))), ((p_35 , (void*)0) == l_3317))), p_35.f0)) && l_3286))))))) >= 1UL)))
                    {
                        int64_t ** const ***l_3403[9] = {&l_3401,(void*)0,&l_3401,(void*)0,&l_3401,(void*)0,&l_3401,(void*)0,&l_3401};
                        uint8_t l_3408 = 0x27L;
                        int32_t l_3409 = 0xC5FDB013L;
                        int i;
                        l_3380[1] ^= (*g_340);
                        (**g_3131) ^= ((((--(*g_1603)) , p_34.f0) ^ (safe_lshift_func_int16_t_s_u((l_3409 = (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((((safe_mod_func_int64_t_s_s((((((((+((&g_1661 == l_3392) == ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((4L <= (*l_3151)), (++(*l_3333)))), 10)) ^ (g_3399[3][1] != (l_3401 = l_3401))))) == (((safe_mul_func_int16_t_s_s(((&g_3400 == (p_34.f0 , l_3406)) == p_34.f1), l_3408)) && (-3L)) <= l_3324)) <= 0L) , p_35.f2) == l_3408) < p_35.f0) , 0L), p_32)) && (*p_33)) | p_35.f1) <= 18446744073709551614UL), p_34.f0)), (*l_3150)))), 1))) && 0L);
                    }
                    else
                    {
                        const uint8_t ****l_3420 = &g_3417;
                        int16_t *l_3427[2][10] = {{&g_139,&g_862,&g_862,&g_139,&g_862,&g_139,&g_862,&g_862,&g_139,&g_862},{&g_139,&g_862,&g_862,&g_139,&g_862,&g_139,&g_862,&g_862,&g_139,&g_862}};
                        int i, j;
                        (*l_3180) = ((((~((safe_div_func_uint16_t_u_u(((*g_2246) , (((((l_3380[2] <= ((safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s((l_3422 ^= ((l_3421 = ((*l_3420) = g_3417)) != (void*)0)), (g_1434 = (safe_rshift_func_uint8_t_u_u((l_3287[2][6][0] || (safe_unary_minus_func_int32_t_s((l_3270 , ((p_34.f0 , l_3426) != l_3426))))), p_34.f0))))), p_32)) | l_3428[4])) ^ 0xB8L) | l_3287[7][1][0]) != l_3428[3]) & p_32)), p_35.f1)) , p_32)) , l_3380[4]) != 1UL) , (void*)0);
                        (*l_3151) &= (-6L);
                    }
                    (*g_3131) = func_43((safe_add_func_int64_t_s_s((l_3188[0] = ((p_35.f0 = l_3286) | (safe_div_func_int32_t_s_s((safe_mod_func_int64_t_s_s(l_3435, l_3287[2][4][0])), (safe_sub_func_uint16_t_u_u((l_3438 , (safe_mul_func_int8_t_s_s((((*g_2723) | (((((safe_rshift_func_uint16_t_u_s((0x764BC3D7L < (((safe_sub_func_int8_t_s_s(((****g_1201) = (0x3668D23AL & (p_35.f1 & ((*l_3152) = (safe_mul_func_uint16_t_u_u(((l_3287[2][4][0] && (*p_33)) & 0x22L), p_34.f0)))))), 1UL)) && l_3422) == l_3447)), l_3325)) <= 0x6088L) , p_34.f0) | l_3232.f0) < l_3447)) , l_3183), (*g_1603)))), p_34.f1)))))), l_3366)), &l_3262, l_3448, l_3167, p_35.f2);
                    (*l_3150) |= (l_3449 != (void*)0);
                }
                if (((safe_mul_func_uint16_t_u_u(p_34.f0, (l_3453 == (void*)0))) , l_3276))
                {
                    uint32_t l_3456 = 1UL;
                    uint64_t *** const *l_3459 = (void*)0;
                    int16_t **l_3472 = (void*)0;
                    int16_t **l_3473 = &l_3471;
                    const uint64_t *l_3506 = &g_3507;
                    const uint64_t **l_3505 = &l_3506;
                    if ((safe_sub_func_uint32_t_u_u(l_3456, (safe_div_func_uint16_t_u_u((((((l_3460[8][6][0] = l_3459) == l_3463[6][1]) , ((l_3325 &= (0UL > ((*l_3333) = ((safe_rshift_func_uint8_t_u_u((l_3345 | ((g_98[4] , l_3470) == ((*l_3473) = l_3471))), (((((*l_3149) = ((*l_3150) = (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(l_3448.f0, l_3345)), p_35.f0)))) , 7UL) == p_34.f0) & (-3L)))) > l_3183)))) != 0xC2A3C1F0AF20ECC7LL)) , 0xA379FE1FL) & 0xB8349927L), l_3447)))))
                    {
                        uint32_t l_3494[8][4] = {{0x073D27FFL,0x073D27FFL,0x073D27FFL,0x073D27FFL},{0x073D27FFL,0x073D27FFL,0x073D27FFL,0x073D27FFL},{0x073D27FFL,0x073D27FFL,0x073D27FFL,0x073D27FFL},{0x073D27FFL,0x073D27FFL,0x073D27FFL,0x073D27FFL},{0x073D27FFL,0x073D27FFL,0x073D27FFL,0x073D27FFL},{0x073D27FFL,0x073D27FFL,0x073D27FFL,0x073D27FFL},{0x073D27FFL,0x073D27FFL,0x073D27FFL,0x073D27FFL},{0x073D27FFL,0x073D27FFL,0x073D27FFL,0x073D27FFL}};
                        const uint64_t ***l_3508 = &l_3504;
                        int i, j;
                        (*l_3150) = (((safe_lshift_func_int8_t_s_u(((p_35.f1 , (l_3178 != (void*)0)) >= (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((!((((!(((((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(0UL, l_3286)), (((-1L) && 0x143A4BC6L) != (((((safe_mul_func_uint16_t_u_u((l_3448.f0 , (safe_mod_func_int16_t_s_s(p_35.f0, l_3456))), p_32)) >= 9UL) | l_3270) < p_35.f1) ^ (*l_3150))))) , (*g_2246)) , (*l_3152)) , l_3448.f0) < l_3494[5][0])) == l_3495[4][1]) , l_3496[1][4][0]) , l_3456)), l_3494[4][1])), p_35.f1))), l_3497)) == (*l_3149)) & p_34.f1);
                        (*l_3152) = (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((*l_3333)++) < ((((*l_3508) = (l_3505 = l_3504)) != (void*)0) , ((safe_rshift_func_uint8_t_u_u(((*g_1603) |= ((safe_mul_func_uint16_t_u_u(((((*****g_1660) = (safe_div_func_uint64_t_u_u(3UL, l_3232.f1))) , l_3515[0]) != (void*)0), (((((3L < ((*l_3470) = ((safe_div_func_int64_t_s_s(((*l_3150) & (((g_1437[0][1] , 0x910E53B10E49B604LL) , l_3447) | (**g_3131))), 2UL)) ^ p_35.f0))) | l_3325) && (*p_33)) <= 4294967291UL) ^ l_3494[5][1]))) > p_35.f2)), p_32)) <= p_35.f0))), p_35.f0)), l_3518));
                        return (*g_493);
                    }
                    else
                    {
                        uint8_t l_3519 = 0x80L;
                        return l_3519;
                    }
                }
                else
                {
                    (*l_3149) = 7L;
                    l_3325 = l_3287[7][1][0];
                }
                return p_32;
            }
            else
            {
                int16_t l_3522 = 0x12EEL;
                (*l_3152) = (safe_sub_func_uint16_t_u_u(65535UL, ((l_3522 , 255UL) == (safe_rshift_func_int16_t_s_s(((*l_3471) = 0xCFE2L), 14)))));
            }
            (*l_3527) = l_3525;
            l_3262 = (((safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s((l_3188[0] == ((safe_lshift_func_uint16_t_u_s((((&l_3504 == &l_3504) || p_34.f0) , ((*p_33) | (l_3538 != (void*)0))), 0)) | ((safe_lshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s(((*p_33) < (~(safe_div_func_uint16_t_u_u(p_34.f1, p_35.f1)))), (*p_33))) == 0x27A0EEC1F15B6222LL), (*l_3150))) | (*p_33)))), p_34.f0)) & l_3546), p_35.f0)), l_3232.f1)), 1L)) == 4294967288UL) <= 0xF508C9344199B177LL);
        }
        else
        {
            int8_t *l_3554 = &l_3435;
            int8_t **l_3555[4][10] = {{(void*)0,(void*)0,&l_3554,(void*)0,&l_3554,(void*)0,(void*)0,&l_3554,(void*)0,&l_3554},{(void*)0,(void*)0,&l_3554,(void*)0,&l_3554,(void*)0,(void*)0,&l_3554,(void*)0,&l_3554},{(void*)0,(void*)0,&l_3554,(void*)0,&l_3554,(void*)0,(void*)0,&l_3554,(void*)0,&l_3554},{(void*)0,(void*)0,&l_3554,(void*)0,&l_3554,(void*)0,(void*)0,&l_3554,(void*)0,&l_3554}};
            int32_t l_3557 = 1L;
            int64_t l_3574 = 0x4B6BE52B4D4E0632LL;
            const int32_t l_3582[4] = {0xBD46A279L,0xBD46A279L,0xBD46A279L,0xBD46A279L};
            int32_t l_3650 = 8L;
            int8_t l_3652 = 1L;
            int32_t l_3653 = (-10L);
            int32_t l_3654 = 0x29AC8B2EL;
            int32_t l_3656 = 0L;
            int32_t l_3658 = 0L;
            int32_t l_3659 = 8L;
            int32_t l_3660[5][8] = {{0xEE141C18L,0xEE141C18L,0xBDCD2F1AL,0xBDCD2F1AL,0xEE141C18L,0xEE141C18L,0xBDCD2F1AL,0xBDCD2F1AL},{0xEE141C18L,0xEE141C18L,0xBDCD2F1AL,0xBDCD2F1AL,0xEE141C18L,0xEE141C18L,0xBDCD2F1AL,0xBDCD2F1AL},{0xEE141C18L,0xEE141C18L,0xBDCD2F1AL,0xBDCD2F1AL,0xEE141C18L,0xEE141C18L,0xBDCD2F1AL,0xBDCD2F1AL},{0xEE141C18L,0xEE141C18L,0xBDCD2F1AL,0xBDCD2F1AL,0xEE141C18L,0xEE141C18L,0xBDCD2F1AL,0xBDCD2F1AL},{0xEE141C18L,0xEE141C18L,0xBDCD2F1AL,0xBDCD2F1AL,0xEE141C18L,0xEE141C18L,0xBDCD2F1AL,0xBDCD2F1AL}};
            uint8_t l_3661 = 0UL;
            uint16_t l_3709 = 0x2704L;
            union U2 l_3749 = {-1L};
            int i, j;
            (**g_3131) = (((l_3547 == (**g_2990)) > (p_35.f0 ^ ((safe_mul_func_uint16_t_u_u(0x03C1L, (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(1UL, ((*g_1204) = ((p_34.f1 != ((((((((*l_3164) = l_3554) == (l_3556[1] = (void*)0)) , (((18446744073709551615UL & 0L) & 255UL) >= (-1L))) >= l_3557) || (*l_3150)) <= 0x63EA6BB5AE224694LL) >= p_34.f1)) & l_3557)))), l_3495[4][1])))) , l_3557))) ^ p_34.f1);
            for (g_3129 = 0; (g_3129 > 27); g_3129 = safe_add_func_int32_t_s_s(g_3129, 1))
            {
                uint16_t *l_3567 = &g_289[4];
                uint16_t *l_3575 = &l_3546;
                uint8_t l_3585 = 4UL;
                struct S0 * const *l_3598 = &l_3317;
                union U2 l_3645 = {0x3D8AL};
                int32_t l_3651[4][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
                int i, j;
                if ((((0xC8L == (safe_div_func_uint64_t_u_u((**g_2722), ((l_3367 , ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((+((*l_3567) &= ((*l_3152) = p_35.f0))), (safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0x48L, 2)), (l_3557 = ((*l_3575) = l_3574)))) != p_34.f0), (0x8DL > ((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_s((0x82C0L < 6UL), 6)) || l_3188[0]) , (*g_2246)) , p_34.f1), 7)) >= 65535UL), 12)) && 0x40FF7D2810A0CF00LL)))))), 1)) == p_35.f2)) , (*l_3152))))) & l_3582[3]) , 0x96EFEFACL))
                {
                    int32_t *l_3586[1][10][3] = {{{(void*)0,&g_72[2],&l_3188[0]},{&l_3188[0],(void*)0,(void*)0},{&l_3188[0],(void*)0,&g_72[2]},{&l_3262,&l_3188[0],&l_3557},{&l_3188[0],&l_3188[0],(void*)0},{&l_3188[0],&l_3262,&l_3557},{(void*)0,&l_3188[0],(void*)0},{(void*)0,(void*)0,&l_3557},{(void*)0,&g_3129,&g_3129},{&l_3557,&l_3262,&l_3557}}};
                    int8_t **l_3640 = (void*)0;
                    union U2 * const ** const **l_3674 = (void*)0;
                    union U2 * const ** const **l_3675 = (void*)0;
                    union U2 * const ** const **l_3676 = (void*)0;
                    union U2 * const ** const **l_3677 = &l_3672;
                    uint64_t l_3686 = 0UL;
                    int i, j, k;
                    for (g_441 = (-23); (g_441 >= 53); ++g_441)
                    {
                        struct S0 *l_3600 = (void*)0;
                        struct S0 **l_3599[2][10] = {{&l_3600,&l_3600,&l_3600,&l_3600,&l_3600,&l_3600,&l_3600,&l_3600,&l_3600,&l_3600},{&l_3600,&l_3600,&l_3600,&l_3600,&l_3600,&l_3600,&l_3600,&l_3600,&l_3600,&l_3600}};
                        int32_t l_3613 = 0x65B41E3AL;
                        int i, j;
                        (*g_3131) = func_43(l_3585, l_3586[0][9][0], (*g_2246), l_3585, (safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(0x1823L, l_3262)), 0)) & ((!p_34.f1) , (((l_3188[0] |= 0UL) < ((safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s(((l_3598 == l_3599[1][6]) == p_35.f1), 2L)), l_3495[5][1])) || 7L)) | l_3582[2]))), l_3601[1][4])));
                        (*l_3150) = (safe_sub_func_int8_t_s_s(((p_35.f0 < (p_34.f0 , p_35.f2)) == (((safe_mod_func_uint32_t_u_u((p_32 | (safe_mod_func_int16_t_s_s(((-1L) & 0x8D12L), ((safe_unary_minus_func_uint8_t_u(((*g_1603) = ((safe_add_func_uint8_t_u_u(((void*)0 != &g_1661), ((((safe_sub_func_uint32_t_u_u(l_3574, 0xB6C9F5E2L)) , l_3613) || 0L) | (*g_1485)))) < (*p_33))))) , p_35.f0)))), 0x136FDD4CL)) < p_34.f1) || (**g_3131))), 0xD6L));
                    }
                    if (((*l_3151) = ((p_35.f2 | p_34.f0) , (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_u((l_3557 > (l_3624 == p_35.f2)), 3)) | (safe_mul_func_uint8_t_u_u(p_32, (0x77AEL <= (safe_sub_func_int32_t_s_s((0x64L != (p_35 , 0x05L)), 0xE0AA198CL)))))) != p_35.f0) , p_35.f0), 5)), 0x76L)) , l_3367), p_35.f0)), 2)))))
                    {
                        if ((*g_340))
                            break;
                        (*g_3131) = func_43(((**l_3163) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((((((safe_rshift_func_int16_t_s_s((((safe_unary_minus_func_int64_t_s((safe_rshift_func_int16_t_s_u((*l_3152), ((safe_rshift_func_uint8_t_u_s((0x8FA9AC650573DFB3LL > ((void*)0 == l_3640)), 4)) <= ((l_3585 , 0xA25DL) ^ ((safe_mul_func_int16_t_s_s((p_34.f1 | (0x2DFCCE99L <= (p_35.f0 & p_35.f2))), p_35.f2)) , (*l_3151)))))))) >= 0x84L) && 0xC1L), 3)) < 0x64L) , p_32) , l_3585) < 0xD7D9L) >= p_34.f1), p_35.f2)), 1UL))), &l_3148, l_3645, p_35.f1, l_3557);
                        (*l_3151) = (**g_3131);
                    }
                    else
                    {
                        int32_t l_3646 = 0x203A7A75L;
                        int32_t l_3647 = 0xA15F98A9L;
                        int32_t l_3649 = 0x0654B439L;
                        int32_t l_3655 = 0L;
                        int32_t l_3657[5][6] = {{0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL},{0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL},{0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL},{0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL},{0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL,0x748A7ECBL}};
                        int i, j;
                        if ((*g_340))
                            break;
                        l_3661++;
                        return p_35.f2;
                    }
                    (*l_3152) = (((-6L) ^ 0L) || ((l_3651[2][0] > ((safe_add_func_uint32_t_u_u(0x31D59B73L, (((*l_3149) ^ (safe_lshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((l_3650 = (((*l_3677) = l_3672) == &g_2655)), ((-1L) == ((safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u(p_35.f1, (*g_1603))), (-1L))), 14)) ^ l_3684[5][2][0])))) , l_3645.f0), p_32)), 2))) ^ p_35.f0))) < l_3645.f0)) , l_3651[2][0]));
                    for (g_3069 = 0; (g_3069 <= 2); g_3069 += 1)
                    {
                        int32_t l_3685 = (-10L);
                        (*l_3547) = (*l_3547);
                        --l_3686;
                        if (l_3645.f0)
                            continue;
                    }
                }
                else
                {
                    for (l_3270 = 0; (l_3270 <= 0); l_3270 += 1)
                    {
                        int i;
                        if (l_3188[l_3270])
                            break;
                    }
                    for (l_3270 = (-10); (l_3270 <= 19); l_3270++)
                    {
                        (*g_3131) = p_33;
                    }
                    if ((*p_33))
                        break;
                }
                (*l_3151) = (!(--(*g_1603)));
                (*g_3131) = (*g_3131);
                for (l_3270 = 0; (l_3270 < 12); l_3270 = safe_add_func_int32_t_s_s(l_3270, 5))
                {
                    return p_32;
                }
            }
            for (g_2436 = (-8); (g_2436 >= 28); g_2436++)
            {
                int64_t l_3698 = (-3L);
                int32_t l_3724 = 0L;
                int32_t l_3727 = 1L;
                int32_t l_3729 = 0L;
                int32_t l_3730 = (-1L);
                int32_t l_3732 = 0x620449FDL;
                int32_t l_3734 = 3L;
                uint32_t l_3736[9] = {1UL,1UL,0x910C0FA6L,1UL,1UL,0x910C0FA6L,1UL,1UL,0x910C0FA6L};
                uint8_t l_3743 = 1UL;
                int i;
                if (l_3698)
                {
                    int64_t l_3721 = 0x73F9FEF1A7877C90LL;
                    int32_t l_3728 = (-1L);
                    int32_t l_3731 = (-1L);
                    int32_t l_3733[8] = {0x559AF74DL,0x559AF74DL,0L,0x559AF74DL,0x559AF74DL,0L,0x559AF74DL,0x559AF74DL};
                    int i;
                    for (l_3652 = 1; (l_3652 != 18); ++l_3652)
                    {
                        uint32_t *l_3710 = (void*)0;
                        uint32_t *l_3711[1][9][6] = {{{(void*)0,&g_3154,&g_259[1][1],(void*)0,&g_259[0][6],&l_3684[4][7][2]},{&g_259[0][6],&g_3154,&g_3154,&g_3154,&g_259[0][6],&l_3684[2][7][2]},{&l_3684[4][7][2],&g_3154,&g_259[1][3],(void*)0,&g_3154,&g_259[1][1]},{&g_259[1][1],&l_3684[5][2][0],&g_3154,&g_3154,&l_3684[5][2][0],&g_259[1][1]},{(void*)0,(void*)0,&g_259[1][3],&g_259[0][6],&g_259[1][1],&l_3684[2][7][2]},{&l_3684[5][2][0],&l_3684[4][7][2],&g_3154,&g_259[1][1],&g_3154,&l_3684[4][7][2]},{&l_3684[5][2][0],&l_3684[2][7][2],&g_259[1][1],&g_259[0][6],&g_259[1][3],(void*)0},{(void*)0,&g_259[1][1],&l_3684[5][2][0],&g_3154,&g_3154,&l_3684[5][2][0]},{&g_259[1][1],&g_259[1][1],&g_3154,(void*)0,&g_259[1][3],&g_3154}}};
                        int32_t l_3720[10][7][3] = {{{0x5BC8CB7BL,7L,(-8L)},{0x5BC8CB7BL,0xC14A2A0CL,0x5BC8CB7BL},{0x5BC8CB7BL,0xC6BEA280L,0x7AD8D158L},{0x5BC8CB7BL,7L,(-8L)},{0x5BC8CB7BL,0xC14A2A0CL,0x5BC8CB7BL},{0x5BC8CB7BL,0xC6BEA280L,0x7AD8D158L},{0x5BC8CB7BL,7L,(-8L)}},{{0x5BC8CB7BL,0xC14A2A0CL,0x5BC8CB7BL},{0x5BC8CB7BL,0xC6BEA280L,0x7AD8D158L},{0x5BC8CB7BL,7L,(-8L)},{0x5BC8CB7BL,0xC14A2A0CL,0x5BC8CB7BL},{0x5BC8CB7BL,0xC6BEA280L,0x7AD8D158L},{0x5BC8CB7BL,7L,(-8L)},{0x5BC8CB7BL,0xC14A2A0CL,0x5BC8CB7BL}},{{0x5BC8CB7BL,0xC6BEA280L,0x7AD8D158L},{0x5BC8CB7BL,7L,(-8L)},{0x5BC8CB7BL,0xC14A2A0CL,0x5BC8CB7BL},{0x5BC8CB7BL,0xC6BEA280L,0x7AD8D158L},{0x5BC8CB7BL,7L,(-8L)},{0x5BC8CB7BL,0xC14A2A0CL,0x5BC8CB7BL},{0x5BC8CB7BL,0xC6BEA280L,0x8D8625DAL}},{{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L}},{{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L}},{{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL}},{{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L}},{{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L}},{{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL}},{{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L},{0L,0x7AD8D158L,0L},{0L,0x5BC8CB7BL,0x8D8625DAL},{0L,(-8L),0x4BAE4607L}}};
                        int32_t l_3725 = 0L;
                        int64_t l_3735 = 0x116CB444A7C25DC4LL;
                        int i, j, k;
                        (*l_3152) = (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((l_3727 ^= ((*l_3470) = ((safe_mul_func_int8_t_s_s(p_35.f1, ((*g_1603) = (safe_add_func_uint64_t_u_u(((l_3709 , (p_35.f2 = (*l_3152))) > ((safe_add_func_int32_t_s_s((((~(!((**g_1203) = (-1L)))) , (((safe_div_func_int16_t_s_s(((l_3725 = ((safe_div_func_uint64_t_u_u(l_3709, ((l_3720[1][3][1] ^ 247UL) && l_3721))) <= (l_3724 = (safe_sub_func_uint16_t_u_u((l_3720[9][2][2] >= 65530UL), p_35.f1))))) == 0x1EBFCA4AL), p_35.f0)) < l_3726) ^ p_35.f1)) < p_34.f1), p_34.f1)) > p_34.f0)), p_34.f0))))) <= (-1L)))), p_35.f1)), 0x61AA748AL));
                        l_3736[4]++;
                        (*l_3149) = (((((g_1164 , p_34.f1) != ((0x48A7L >= (0L <= 0x826250DEL)) == ((*l_3470) = (safe_mod_func_uint16_t_u_u(((((l_3729 |= (l_3734 = l_3727)) != (l_3724 = p_35.f0)) <= (safe_mul_func_uint16_t_u_u((p_34.f0 >= l_3730), 65535UL))) | p_35.f2), l_3232.f0))))) && l_3720[7][0][0]) ^ p_35.f0) || l_3743);
                    }
                }
                else
                {
                    (*g_3131) = (void*)0;
                }
                (*g_3131) = &l_3188[0];
                l_3660[1][1] = (p_34.f0 <= (safe_lshift_func_uint8_t_u_s((~(0xFA4837953133B435LL >= (safe_add_func_uint32_t_u_u((l_3709 != (p_35.f1 && ((*g_2722) != (l_3749 , (*g_2722))))), ((*l_3152) = (0xA18FL != l_3650)))))), 3)));
            }
        }
        if ((safe_mul_func_uint8_t_u_u(((*g_1603) ^= ((p_34.f0 != (l_3752 == (void*)0)) != ((safe_mod_func_uint16_t_u_u((((*g_2246) , l_3755) == (((*l_3151) |= (safe_sub_func_uint64_t_u_u(((*g_2723) = ((!((p_35 , ((*l_3149) ^= p_34.f0)) | p_34.f1)) , (safe_rshift_func_uint16_t_u_s((p_35 , (*l_3150)), 7)))), (*l_3152)))) , (void*)0)), p_34.f1)) < 0L))), l_3601[0][7])))
        {
            int32_t l_3767 = 0x75B9103DL;
            int32_t *l_3768 = (void*)0;
            int16_t ***l_3782 = &g_867;
            union U2 l_3784 = {0x80C3L};
            uint32_t l_3808[1];
            int8_t **l_3839[9][5];
            const struct S1 *l_3849[1];
            const struct S1 **l_3848 = &l_3849[0];
            struct S0 l_3855 = {0,83};
            int32_t l_3858 = 0xB781FDA1L;
            int32_t l_3879 = 0x9E92D9ADL;
            int64_t **l_3960 = &g_656[8][3][2];
            uint16_t l_3978 = 0x156CL;
            struct S1 l_3979[9] = {{6429,50,0},{6429,50,0},{6429,50,0},{6429,50,0},{6429,50,0},{6429,50,0},{6429,50,0},{6429,50,0},{6429,50,0}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_3808[i] = 0xA4095481L;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 5; j++)
                    l_3839[i][j] = &g_1485;
            }
            for (i = 0; i < 1; i++)
                l_3849[i] = (void*)0;
            for (p_32 = (-9); (p_32 > 32); p_32++)
            {
                int8_t l_3765 = (-1L);
                uint32_t l_3766[7];
                const int32_t ***l_3777 = (void*)0;
                const int32_t ***l_3778[7] = {&g_3775,(void*)0,&g_3775,&g_3775,(void*)0,&g_3775,&g_3775};
                int32_t l_3779 = 0x4FCFB2B0L;
                uint32_t *l_3780 = (void*)0;
                uint32_t *l_3781 = &l_3684[5][2][0];
                int i;
                for (i = 0; i < 7; i++)
                    l_3766[i] = 0xA89C993FL;
                (*g_3131) = func_43((safe_lshift_func_int16_t_s_u((((l_3766[5] = l_3765) != 1L) || p_34.f1), 7)), func_43(l_3767, l_3768, (*l_3538), (((((((((*l_3470) = (((safe_add_func_int64_t_s_s(((l_3188[0] == ((*l_3781) = (safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(l_3765, (l_3779 = ((g_3775 = g_3775) == &p_33)))), 0x28685D234F7016C6LL)))) && 0x57E73450L), 0L)) < 0x17FC449BL) ^ 252UL)) == 9UL) , l_3782) != l_3783) >= 0x1550L) , (*g_2723)) , p_32) | (*l_3151)), l_3367), l_3784, g_79.f0, p_35.f0);
            }
            for (g_862 = (-20); (g_862 != (-8)); g_862++)
            {
                union U2 ****l_3805 = &g_2655;
                union U2 *****l_3804 = &l_3805;
                uint16_t *l_3806[8][6][5] = {{{(void*)0,&g_311,&g_5,&g_134,&l_3546},{&g_311,&g_134,&g_311,&g_289[0],&g_289[4]},{(void*)0,&g_289[6],&g_5,&l_3546,&l_3546},{&l_3546,&g_5,&g_134,&g_311,&l_3189},{&g_311,&g_289[4],&g_289[2],&g_289[4],&g_311},{&g_289[2],&l_3189,(void*)0,&l_3546,&g_5}},{{&l_3189,&l_3189,&g_311,&g_134,&g_311},{&g_289[2],&g_134,&g_289[8],&g_289[4],&l_3189},{&g_311,&l_3189,&l_3546,&g_289[2],&g_289[6]},{&g_289[7],&l_3189,&l_3546,&g_289[2],&g_311},{&g_289[7],&l_3546,&g_311,&g_134,&l_3546},{&g_311,&g_289[4],&l_3546,(void*)0,(void*)0}},{{&g_289[2],(void*)0,&g_134,&g_289[7],&g_134},{&l_3189,(void*)0,&g_289[4],(void*)0,&g_289[8]},{(void*)0,&l_3189,(void*)0,&g_311,&l_3189},{&g_311,(void*)0,&l_3546,&g_5,(void*)0},{&g_289[4],&g_134,(void*)0,&g_311,&l_3546},{&g_289[4],&g_289[2],&g_289[2],&g_289[4],(void*)0}},{{&g_289[2],&g_134,&l_3546,&g_134,&l_3546},{&g_5,&g_289[4],&l_3189,&g_134,&g_134},{&g_311,&g_289[2],(void*)0,&g_134,&g_311},{&l_3546,&g_311,&g_311,&g_289[4],&g_134},{&l_3189,&l_3546,&l_3189,&g_311,&l_3546},{&g_134,&l_3189,(void*)0,&g_5,&g_5}},{{&l_3546,&l_3189,(void*)0,&g_311,&g_5},{&g_5,(void*)0,(void*)0,(void*)0,&g_134},{(void*)0,&g_311,&l_3546,&g_289[7],&l_3189},{&g_289[0],&g_311,&g_134,(void*)0,(void*)0},{&g_134,&g_134,&g_134,&g_134,&g_289[6]},{&g_311,&g_311,&g_289[4],&g_289[2],&l_3546}},{{&g_134,&g_311,&g_311,&g_289[2],(void*)0},{&g_311,&g_134,&g_289[6],&g_289[4],&l_3546},{&g_134,&g_311,&g_311,&g_134,&l_3546},{&l_3189,&g_311,&g_289[4],&l_3546,&g_134},{&g_289[4],(void*)0,&l_3189,&l_3189,(void*)0},{&l_3546,&l_3189,(void*)0,&g_289[4],&g_311}},{{&g_289[4],&l_3189,&g_289[2],&g_5,&l_3546},{&l_3546,&l_3546,&g_134,&l_3546,&l_3546},{&l_3546,&g_311,&l_3189,&g_311,&l_3546},{&l_3189,&g_289[2],&g_5,&g_134,&g_289[4]},{(void*)0,&g_289[4],(void*)0,&g_311,&l_3546},{&g_5,&g_134,&g_134,&l_3546,&l_3546}},{{&l_3546,&g_289[2],&l_3546,&g_289[6],&l_3546},{&l_3189,&g_134,(void*)0,&g_289[4],&g_311},{&g_134,&g_289[4],(void*)0,&g_134,&g_134},{&g_311,(void*)0,(void*)0,&g_5,&l_3546},{&g_311,&g_289[4],&g_289[0],&g_5,&g_289[1]},{&l_3189,&g_5,&g_134,&g_134,&l_3546}}};
                int32_t l_3807 = 0xF075F712L;
                int32_t l_3809 = 0xD64E3F98L;
                uint32_t l_3838 = 4294967291UL;
                const struct S1 *l_3847 = &g_87;
                const struct S1 **l_3846[6] = {&l_3847,&l_3847,&l_3847,&l_3847,&l_3847,&l_3847};
                int16_t l_3857 = 0x2977L;
                const int64_t ****l_3926 = (void*)0;
                struct S0 l_3927 = {1,120};
                int8_t *l_3932 = &g_1205;
                int8_t ***l_3957 = &l_3164;
                uint32_t *l_4010 = &g_3154;
                int i, j, k;
            }
        }
        else
        {
            return p_34.f1;
        }
        if (((((((safe_div_func_uint64_t_u_u(((((safe_div_func_uint64_t_u_u((p_35.f1 || (l_4020 != ((*l_4021) = l_4020))), ((l_3345 > l_4022[2]) | l_3601[1][4]))) | (p_32 < (safe_rshift_func_uint16_t_u_s((l_4025[5][0][6] == (void*)0), 6)))) != 7UL) || l_3546), 0x43B5DB32916D73FBLL)) > (**g_3131)) | p_35.f1) , (*l_3538)) , l_3188[0]) ^ (-1L)))
        {
            int32_t l_4030 = 0L;
            uint16_t ** const *l_4041 = &g_271;
            uint16_t ** const **l_4040 = &l_4041;
            uint16_t ** const ***l_4042[10][5] = {{&l_4040,&l_4040,&l_4040,&l_4040,&l_4040},{&l_4040,&l_4040,&l_4040,&l_4040,&l_4040},{&l_4040,&l_4040,&l_4040,&l_4040,&l_4040},{&l_4040,&l_4040,&l_4040,&l_4040,&l_4040},{&l_4040,&l_4040,&l_4040,&l_4040,&l_4040},{&l_4040,&l_4040,&l_4040,&l_4040,&l_4040},{&l_4040,&l_4040,&l_4040,&l_4040,&l_4040},{&l_4040,&l_4040,&l_4040,&l_4040,&l_4040},{&l_4040,&l_4040,&l_4040,&l_4040,&l_4040},{&l_4040,&l_4040,&l_4040,&l_4040,&l_4040}};
            uint64_t ****l_4047[1];
            const struct S0 ****l_4066 = &l_4063;
            struct S0 *** const l_4067 = &g_579;
            int i, j;
            for (i = 0; i < 1; i++)
                l_4047[i] = (void*)0;
            (*l_3149) &= 0x0ADD41A2L;
            (*g_3775) = func_43(((safe_mod_func_int8_t_s_s(((safe_div_func_int64_t_s_s(((l_4030 , ((*g_3903) = (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((l_4030 > (safe_add_func_uint8_t_u_u(0UL, (safe_rshift_func_int8_t_s_u((l_4039 < (((*l_3194) != (g_4043 = l_4040)) , (l_4047[0] == &g_2721[2][5][0]))), (safe_div_func_int16_t_s_s(0L, (*g_4046)))))))), (*l_3150))), (*g_340))))) == (*g_4046)), 0xD103590CCA696F64LL)) ^ l_4030), p_34.f1)) >= (-6L)), &l_3262, (****g_3800), p_34.f1, g_4050);
            (*l_3149) |= (safe_lshift_func_int8_t_s_u((+l_4030), ((safe_lshift_func_int16_t_s_u((p_35.f2 ^ (l_4030 != (safe_sub_func_int8_t_s_s(((!p_34.f0) | (*g_2723)), (safe_div_func_uint16_t_u_u((((*g_839) , 0x1E45C98E270A05F3LL) , (((p_33 != ((safe_rshift_func_uint8_t_u_s((((*l_4066) = l_4063) == l_4067), 6)) , (void*)0)) > 0L) == 0x653C33EB4EFABF27LL)), l_4068)))))), 12)) >= 0x60D9B144L)));
        }
        else
        {
            union U2 l_4085 = {8L};
            struct S1 *l_4117 = &g_87;
            uint16_t **l_4122 = (void*)0;
            int32_t l_4130 = 9L;
            uint16_t l_4139 = 0x9385L;
            uint8_t *l_4176 = &g_3069;
            uint8_t ****l_4188 = &l_3525;
            for (g_385 = 0; (g_385 >= (-18)); --g_385)
            {
                uint32_t *l_4076 = &g_441;
                const int32_t l_4080 = 0xB2EDB8FDL;
                struct S0 ***l_4109 = (void*)0;
                struct S1 *l_4118 = &g_4119;
                union U2 l_4153 = {-1L};
                uint8_t *l_4157 = &g_362;
                uint64_t *l_4172 = &g_1734;
                int16_t l_4177 = (-1L);
                (*l_3151) = ((safe_sub_func_int32_t_s_s(0xB83AFE1AL, (((safe_lshift_func_uint16_t_u_s(((((*****g_1660) = (~((*l_4076) = 0x4BEAC128L))) , (safe_rshift_func_int8_t_s_u(((****g_1661) ^= ((~(l_4080 ^ p_32)) < (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((0x49AF3359DDC44926LL != (l_4085 , (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((*g_3776) ^ (l_4085 , (((safe_div_func_int16_t_s_s((*g_3903), (*g_493))) | 1UL) > 0xB942L))) ^ p_34.f0), l_4080)), 3)))), l_4080)), 3)))), p_35.f0))) == 0xD7BC6382L), 15)) < 18446744073709551615UL) & p_35.f0))) || (-10L));
                for (l_3624 = (-3); (l_3624 != (-22)); --l_3624)
                {
                    uint16_t *l_4108 = &l_3546;
                    uint16_t *l_4110 = &g_311;
                    int32_t l_4116 = 0x772C455DL;
                    union U2 l_4120 = {-1L};
                    struct S0 l_4121 = {1,56};
                    uint16_t **l_4124[9] = {&l_4108,&l_4108,&l_4108,&l_4108,&l_4108,&l_4108,&l_4108,&l_4108,&l_4108};
                    int i;
                    l_4118 = ((*g_838) = ((((safe_lshift_func_uint8_t_u_u((((*l_4076) |= (((safe_lshift_func_int8_t_s_s((func_53(((l_3188[0] != ((safe_sub_func_uint64_t_u_u(((****g_4043) == 0UL), (safe_mod_func_uint16_t_u_u((l_4085.f0 < (safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(((*l_4108) = 65530UL), ((((l_4109 == (void*)0) & ((*l_4110)--)) && (safe_div_func_int32_t_s_s((p_32 == (((0x3CL ^ p_35.f0) , l_4085.f0) != l_4080)), 0x31EAEB59L))) || 0x1E59140EL))) > (*g_1603)) > l_4115[0]), l_4080)), p_32))), l_4085.f0)))) | p_35.f2)) | l_4085.f0)) , (-1L)), 0)) ^ l_4116) , l_4068)) == 0x9B22F94FL), p_35.f2)) <= (*p_33)) , 0x7D96C62DL) , l_4117));
                    l_4124[5] = (l_4120 , (l_4121 , (l_4123[2][0] = l_4122)));
                    for (g_64 = 4; (g_64 >= 2); g_64 -= 1)
                    {
                        int32_t **l_4125 = &g_340;
                        (*l_4125) = p_33;
                    }
                    (*g_3775) = (*g_3131);
                }
                for (g_64 = 1; (g_64 >= 0); g_64 -= 1)
                {
                    int64_t l_4134 = 0xC126E95B7E0EDF68LL;
                    int i, j;
                    (*l_3152) = (((l_3601[g_64][(g_64 + 3)] ^ (safe_sub_func_uint16_t_u_u((+(safe_unary_minus_func_uint64_t_u(((**l_3465) = l_4068)))), ((((((l_4130 , (****l_4021)) , (p_32 <= ((((**g_4045)--) >= (+(((**g_838) , (p_32 != (((*p_33) , &p_34) != &p_34))) < (*p_33)))) & 4L))) & l_3601[g_64][(g_64 + 3)]) ^ l_3495[3][0]) && l_4134) & 0x8EFAF635L)))) , l_4130) , (**g_3131));
                    for (g_2436 = 0; (g_2436 <= 0); g_2436 += 1)
                    {
                        const uint16_t **l_4136 = &g_493;
                        const uint16_t ***l_4135 = &l_4136;
                        (*l_4135) = (void*)0;
                        (*l_3151) &= 0x3132987EL;
                    }
                }
                for (g_2017 = 0; (g_2017 < (-19)); g_2017 = safe_sub_func_int64_t_s_s(g_2017, 4))
                {
                    struct S1 l_4142 = {4953,1144,0};
                    int8_t *****l_4179 = &l_3755;
                    if ((*p_33))
                    {
                        uint16_t l_4154 = 65535UL;
                        int32_t l_4168 = 1L;
                        int8_t *****l_4178[3][5] = {{&g_1396,(void*)0,&g_1396,&g_1396,&g_1396},{&g_1396,(void*)0,&g_1396,&g_1396,&g_1396},{&g_1396,(void*)0,&g_1396,&g_1396,&g_1396}};
                        int i, j;
                        (*g_3775) = func_43((l_4139 , (((((((safe_mul_func_uint8_t_u_u((l_4142 , 0xECL), ((safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(0xC271D09AL, ((void*)0 == &g_915))), (safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((*l_3150) && (p_34.f1 || l_4022[2])), 0x6C6B0B354124C9F9LL)), (-7L))), l_4080)))) <= 9L))) < l_3188[0]) , p_32) ^ l_4080) && (*g_3903)) == l_4022[1]) && (*l_3151))), &l_4130, l_4153, p_35.f0, l_4154);
                        (*l_3151) |= (((safe_rshift_func_uint16_t_u_u((l_4157 == ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((p_32++), ((safe_div_func_uint32_t_u_u(((*g_1246) , ((safe_mul_func_int16_t_s_s(6L, ((*l_3470) &= (l_4168 ^= 1L)))) >= ((g_4171 >= (l_4172 == (l_4173 = &l_3495[5][1]))) && (p_35.f2 != (safe_div_func_uint8_t_u_u((l_4142.f2 <= (*p_33)), p_35.f0)))))), l_4139)) & l_4154))), l_4142.f2)) , l_4176)), p_35.f0)) ^ p_35.f2) | l_4177);
                        l_4179 = l_4178[0][1];
                    }
                    else
                    {
                        struct S1 l_4182 = {3103,2234,1};
                        uint8_t ****l_4187 = &l_3525;
                        union U2 l_4195[6][10] = {{{0x6724L},{0L},{0x6724L},{-1L},{-1L},{-1L},{0x6724L},{0L},{0x6724L},{-1L}},{{0x2A67L},{0L},{1L},{0L},{0x2A67L},{0x35E5L},{0x2A67L},{0L},{1L},{0L}},{{-1L},{-1L},{0x6724L},{0L},{0x6724L},{-1L},{-1L},{-1L},{0x6724L},{0L}},{{-3L},{0L},{-3L},{-1L},{0x2A67L},{-1L},{-3L},{0L},{-3L},{-1L}},{{-1L},{0L},{-3L},{0L},{-1L},{0x35E5L},{-1L},{0L},{-3L},{0L}},{{0x2A67L},{-1L},{-3L},{0L},{-3L},{-1L},{0x2A67L},{-1L},{-3L},{0L}}};
                        union U2 **l_4200 = &g_3803;
                        int i, j;
                        (*l_3152) = ((safe_mul_func_int16_t_s_s((((l_4182 , (safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s((((l_4187 == l_4188) && (l_4177 || (safe_div_func_uint64_t_u_u((*g_2723), (safe_div_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((*l_3470) = l_4142.f2), l_4153.f0)) || (l_4195[4][0] , (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((((***g_3799) == l_4200) >= l_4142.f0), (****g_1201))), 0)))), l_3546)))))) < 1UL), 0xF6631531L)), 0x589467803C6AD3B7LL))) == p_32) <= p_32), 0x8A44L)) ^ 0x6BB4101EE616D3F4LL);
                    }
                }
            }
            for (g_446 = (-1); (g_446 > 20); ++g_446)
            {
                struct S0 *l_4203 = (void*)0;
                int32_t l_4204 = 0x4B233CB2L;
                l_4203 = l_4203;
                return l_4204;
            }
        }
        l_4208--;
    }
    return p_35.f2;
}







static struct S0 func_36(uint32_t * p_37)
{
    int32_t l_2224 = 0x8B8DD50FL;
    uint16_t *l_2229 = &g_5;
    int8_t *****l_2248[10] = {&g_1396,&g_1396,&g_1396,&g_1396,&g_1396,&g_1396,&g_1396,&g_1396,&g_1396,&g_1396};
    int32_t l_2261 = 1L;
    int32_t **** const l_2280 = &g_1221;
    int32_t *l_2281 = &g_64;
    int32_t l_2311 = 0x2CD7695AL;
    int32_t l_2314[2][10][6] = {{{(-1L),0L,1L,1L,1L,5L},{1L,1L,5L,0x86A4F332L,(-1L),(-9L)},{(-1L),0x1323BCEEL,0x371C5756L,0x0E80A90BL,0x1032907FL,(-4L)},{(-10L),1L,0x1032907FL,(-1L),0xF0FC9F82L,1L},{(-10L),(-1L),0x667F5B49L,0L,0x86A4F332L,0x9D2048F8L},{0x3CE50976L,9L,0x697FA2FDL,0xAAA20C17L,0x697FA2FDL,9L},{1L,0x86A4F332L,(-1L),0x0E80A90BL,0xAAA20C17L,0x3CE50976L},{(-1L),0x55612024L,0x74E82994L,0x26B292DDL,0x9D2048F8L,0x667F5B49L},{0xA3BE4C5AL,0x55612024L,(-10L),0xCDEE1C28L,0xAAA20C17L,0x56F0C857L},{0x525CEA18L,0x86A4F332L,(-1L),0x1032907FL,0x697FA2FDL,1L}},{{0x4FA25865L,9L,0x3CDDC259L,0x46EA2C2CL,0x86A4F332L,(-4L)},{1L,(-1L),7L,0x56F0C857L,0xF0FC9F82L,1L},{0x46EA2C2CL,1L,0x3D8C083AL,(-4L),(-10L),0xAAA20C17L},{0x26B292DDL,0x371C5756L,9L,0x37A3864EL,(-9L),0x98867868L},{1L,(-1L),(-4L),(-4L),(-1L),1L},{0x697FA2FDL,(-1L),0x46EA2C2CL,1L,0x56F0C857L,0x3CDDC259L},{(-4L),0xA34BB5C3L,3L,(-1L),0x3CE50976L,0xA480C905L},{(-4L),0x4FA25865L,(-1L),1L,0x1323BCEEL,0x55612024L},{0x697FA2FDL,0x56F0C857L,0L,(-4L),0xD5E848DCL,(-1L)},{1L,0x0E80A90BL,0x56F0C857L,0x37A3864EL,0x3D8C083AL,0x74E82994L}}};
    uint8_t *l_2331 = &g_362;
    struct S1 l_2374 = {-2952,1077,0};
    int32_t l_2418 = (-1L);
    int32_t l_2441 = 1L;
    uint32_t l_2442 = 0x0BD56CE3L;
    uint32_t l_2492 = 4294967289UL;
    struct S0 *l_2562 = (void*)0;
    union U2 **l_2594 = &g_1246;
    int64_t **l_2596 = &g_656[8][3][2];
    int8_t l_2627 = (-1L);
    int16_t *l_2681 = &g_139;
    int16_t **l_2680 = &l_2681;
    const int16_t **** const * const l_2715 = (void*)0;
    uint64_t ***l_2725 = &g_2722;
    uint8_t l_2773 = 0x27L;
    uint16_t ****l_2905 = &g_1623[1];
    const union U2 ****l_3044 = (void*)0;
    const union U2 *****l_3043[10] = {&l_3044,&l_3044,&l_3044,&l_3044,&l_3044,&l_3044,&l_3044,&l_3044,&l_3044,&l_3044};
    int32_t l_3045[3];
    uint32_t l_3057 = 0xC802B14FL;
    uint8_t l_3072 = 0x22L;
    uint32_t l_3074[5] = {1UL,1UL,1UL,1UL,1UL};
    int64_t * const ****l_3113 = (void*)0;
    int64_t *****l_3114 = (void*)0;
    int64_t ****l_3116 = (void*)0;
    int64_t *****l_3115[10][8][1] = {{{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116}},{{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116}},{{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116}},{{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116}},{{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116}},{{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116}},{{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116}},{{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116}},{{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116}},{{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116},{&l_3116}}};
    int64_t * const *l_3119 = &g_656[8][3][2];
    int64_t * const **l_3118[7][6] = {{&l_3119,&l_3119,&l_3119,&l_3119,&l_3119,&l_3119},{&l_3119,&l_3119,&l_3119,&l_3119,&l_3119,&l_3119},{&l_3119,&l_3119,&l_3119,&l_3119,&l_3119,&l_3119},{&l_3119,&l_3119,&l_3119,&l_3119,&l_3119,&l_3119},{&l_3119,&l_3119,&l_3119,&l_3119,&l_3119,&l_3119},{&l_3119,&l_3119,&l_3119,&l_3119,&l_3119,&l_3119},{&l_3119,&l_3119,&l_3119,&l_3119,&l_3119,&l_3119}};
    int64_t * const ***l_3117[10] = {&l_3118[0][3],&l_3118[0][3],&l_3118[0][3],&l_3118[0][3],&l_3118[0][3],&l_3118[0][3],&l_3118[0][3],&l_3118[0][3],&l_3118[0][3],&l_3118[0][3]};
    int32_t * const l_3128 = &g_3129;
    int32_t * const *l_3127 = &l_3128;
    int32_t * const **l_3126 = &l_3127;
    int32_t ***l_3130[7];
    uint64_t l_3138 = 0xE1FFD02FEBFAF132LL;
    struct S0 l_3139 = {1,124};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_3045[i] = 0xEF932E19L;
    for (i = 0; i < 7; i++)
        l_3130[i] = (void*)0;
lbl_2457:
    for (g_385 = 0; (g_385 >= (-23)); g_385 = safe_sub_func_uint64_t_u_u(g_385, 1))
    {
        uint32_t l_2218 = 0x0DD622E1L;
        int16_t *l_2221[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,&g_862},{&g_862,&g_139,&g_139,&g_862,&g_132},{&g_139,(void*)0,&g_139,&g_139,(void*)0},{&g_132,&g_139,(void*)0,&g_862,&g_862},{&g_862,(void*)0,&g_862,&g_139,(void*)0},{&g_862,&g_862,&g_862,&g_862,&g_862},{&g_862,&g_139,(void*)0,(void*)0,(void*)0}};
        int32_t l_2222 = 6L;
        uint16_t *l_2227 = &g_311;
        struct S1 l_2228 = {-8018,1131,0};
        int8_t l_2238 = 0xCBL;
        int32_t l_2257 = 0L;
        int32_t l_2260 = 0xD86CB6A1L;
        int32_t l_2262 = 1L;
        int32_t l_2263 = 0L;
        int32_t l_2264[3][10][8] = {{{0x39DE11BDL,0xB1D2B3CBL,7L,0xA14236E2L,0xB1D2B3CBL,0xFDF7665EL,0L,0xFD8FAC68L},{0x81A398CDL,0xB35B5DD2L,1L,0x734EFB13L,1L,0L,(-1L),(-1L)},{0x9542E103L,0L,0x0A6EAA2CL,(-1L),0x00C7963AL,0x1AD5033BL,0x45A8B82CL,(-1L)},{(-1L),0L,9L,0xA14236E2L,0x81A398CDL,1L,0xB35B5DD2L,0L},{0x5C298175L,0L,0xA0D92CAEL,(-3L),0xA14236E2L,1L,0xFD8FAC68L,(-1L)},{0x734EFB13L,0x81A398CDL,(-6L),0x45A8B82CL,0x5C298175L,0x0A6EAA2CL,(-1L),6L},{(-1L),0x45A8B82CL,(-1L),0xFCD1A432L,0xAA5BBA21L,0xB35B5DD2L,0xB35B5DD2L,0xAA5BBA21L},{1L,0x6C956EA2L,0x6C956EA2L,1L,1L,(-1L),0xECE7D4CFL,0x39DE11BDL},{6L,(-1L),0x0A6EAA2CL,0x5C298175L,0x45A8B82CL,(-6L),0x81A398CDL,0x734EFB13L},{0xFDF7665EL,(-1L),0xFCD1A432L,1L,0xFD8FAC68L,(-1L),0L,0x028DDFECL}},{{0x7DB0B19EL,0x6C956EA2L,0xA14236E2L,(-1L),7L,0xB35B5DD2L,0x7DB0B19EL,(-1L)},{(-1L),0x45A8B82CL,0x1AD5033BL,0x00C7963AL,(-1L),0x0A6EAA2CL,0L,0x9542E103L},{(-1L),(-1L),(-3L),0xE51FD47AL,(-1L),0x1FBCBA76L,0xCD0C483BL,(-1L)},{1L,0x0A6EAA2CL,0x321574C0L,5L,0xE51FD47AL,0xC8DAF8A5L,5L,0L},{1L,5L,0x81A398CDL,9L,0xFCD1A432L,0x734EFB13L,7L,0x9946DB04L},{0L,0x6C956EA2L,0x34602AECL,0x79A7A5F8L,0L,0x0A6EAA2CL,1L,0L},{9L,0x2B5BEA17L,0x9BB206E1L,0xB35B5DD2L,0x1FBCBA76L,0L,0x7F3327D6L,0L},{0x68D167BAL,0L,(-1L),0L,0x68D167BAL,0x81A398CDL,0xFDF7665EL,(-1L)},{0x321574C0L,7L,0x507D8C89L,0xE51FD47AL,0xA14236E2L,8L,(-3L),0L},{(-1L),0xCD0C483BL,0x507D8C89L,5L,0x364CD47AL,(-6L),0xFDF7665EL,(-1L)}},{{0xA14236E2L,0xA4EEA325L,(-1L),(-1L),(-1L),(-1L),0x7F3327D6L,1L},{0L,0xFDF7665EL,0x9BB206E1L,0xC8DAF8A5L,5L,(-1L),1L,(-1L)},{0L,0x0A6EAA2CL,0x34602AECL,0xA14236E2L,0xC8DAF8A5L,(-1L),7L,(-3L)},{0xA0D92CAEL,0x39DE11BDL,0x81A398CDL,0xA4EEA325L,0x540276F7L,(-1L),5L,0x7F3327D6L},{(-3L),0x7F3327D6L,0x321574C0L,0x79A7A5F8L,0xB35B5DD2L,0L,0xCD0C483BL,9L},{0L,0xCD0C483BL,(-3L),0L,0x1FBCBA76L,0x23A43FDBL,0x6C956EA2L,0x321574C0L},{0L,0xA14236E2L,0x734EFB13L,1L,0x6C956EA2L,0x81A398CDL,0L,0L},{(-3L),5L,0x364CD47AL,0x364CD47AL,5L,(-3L),(-3L),1L},{(-1L),0x2B5BEA17L,0x79A7A5F8L,(-1L),0xC8DAF8A5L,0x1AD5033BL,(-1L),(-1L)},{0x540276F7L,0xB35B5DD2L,0xA9D1D7C4L,(-1L),0L,0x734EFB13L,0L,1L}}};
        int32_t *l_2272 = &l_2222;
        struct S0 l_2273 = {0,61};
        int i, j, k;
    }
    if (((*l_2281) ^= (((((l_2224 | (safe_unary_minus_func_int64_t_s(((((l_2224 != ((l_2261 , g_289[4]) | (safe_sub_func_int32_t_s_s(((g_2277 == &g_491[0][0]) | (0x123DL == ((safe_rshift_func_uint16_t_u_u(((l_2280 != (void*)0) != 4294967294UL), 9)) , l_2224))), l_2261)))) == 0xED77L) | 0x83L) | 2UL)))) && 0L) != 249UL) & (*g_340)) && l_2261)))
    {
        int64_t l_2300 = 0x2A87EBE3635EDB8BLL;
        int32_t l_2303 = 0x25BC62C2L;
        int32_t l_2307 = 4L;
        int32_t l_2313[1];
        uint16_t l_2325[7] = {0xF7A7L,65528UL,0xF7A7L,0xF7A7L,65528UL,0xF7A7L,0xF7A7L};
        uint8_t *l_2330 = (void*)0;
        struct S0 * const **l_2401 = (void*)0;
        struct S0 * const ** const *l_2400 = &l_2401;
        int64_t l_2404 = 0x0D93715E3D480ECDLL;
        int16_t l_2409[3][7] = {{0xEECDL,0xEECDL,0xEDEBL,0xEECDL,0xEECDL,0xEDEBL,0xEECDL},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{4L,0xEECDL,4L,4L,0xEECDL,4L,4L}};
        int8_t l_2477 = (-4L);
        int64_t l_2483 = 0x37BD2169A528D81ELL;
        int32_t l_2490[10] = {0x761503F3L,(-1L),0x761503F3L,1L,1L,0x761503F3L,(-1L),0x761503F3L,1L,1L};
        uint32_t l_2506[5] = {0xD205D3FCL,0xD205D3FCL,0xD205D3FCL,0xD205D3FCL,0xD205D3FCL};
        int64_t **l_2597 = &g_656[8][3][2];
        uint64_t *l_2605 = &g_1734;
        int32_t **l_2618[6];
        int32_t *** const l_2617[1][4][3] = {{{(void*)0,(void*)0,(void*)0},{&l_2618[4],&l_2618[4],&l_2618[4]},{(void*)0,(void*)0,(void*)0},{&l_2618[4],&l_2618[4],&l_2618[4]}}};
        struct S1 l_2619 = {3826,4508,1};
        uint16_t **l_2644 = &l_2229;
        int16_t **l_2686[3][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        struct S1 ***l_2689 = &g_838;
        int16_t ****l_2713 = (void*)0;
        int16_t *****l_2712 = &l_2713;
        uint8_t l_2728 = 0x8FL;
        uint32_t l_2741[4][2][1] = {{{1UL},{0x94398908L}},{{1UL},{0x94398908L}},{{1UL},{0x94398908L}},{{1UL},{0x94398908L}}};
        int8_t l_2797[4][10] = {{0x15L,0x2BL,1L,0x2BL,0x15L,0xEAL,0L,0x9EL,0x56L,0x56L},{0x0CL,0x9EL,0x1DL,0xA8L,0xA8L,0x1DL,0x9EL,0x0CL,1L,0x56L},{1L,0xA8L,0x9EL,(-8L),0x15L,0L,0x15L,(-8L),0x9EL,0xA8L},{0x1DL,0xEAL,0x9EL,0x15L,(-1L),(-8L),0x0CL,0x0CL,(-8L),(-1L)}};
        uint32_t l_2824 = 0xED54AA30L;
        int16_t l_2826 = 0L;
        uint64_t ****l_2847 = &g_2721[0][3][4];
        uint32_t l_2860 = 1UL;
        int64_t ***l_2866 = &g_655;
        int64_t **** const l_2865[10] = {&l_2866,&l_2866,&l_2866,&l_2866,&l_2866,&l_2866,&l_2866,&l_2866,&l_2866,&l_2866};
        uint32_t l_2886 = 0xA6B40435L;
        struct S0 *****l_2992 = &g_2991;
        int16_t l_3005[2][9][2] = {{{1L,(-6L)},{1L,1L},{(-6L),1L},{1L,(-6L)},{1L,1L},{(-6L),1L},{1L,(-6L)},{1L,1L},{(-6L),1L}},{{1L,(-6L)},{1L,1L},{(-6L),1L},{1L,(-6L)},{1L,1L},{(-6L),1L},{1L,(-6L)},{1L,1L},{(-6L),1L}}};
        int32_t l_3030 = 0xBE8E13DDL;
        union U2 **l_3042 = (void*)0;
        union U2 *** const l_3041[2] = {&l_3042,&l_3042};
        union U2 *** const *l_3040 = &l_3041[1];
        union U2 *** const **l_3039 = &l_3040;
        int64_t l_3048[9][4][7] = {{{1L,(-3L),0L,1L,1L,0L,(-3L)},{(-1L),(-7L),0x7FC1ED925405F66BLL,(-7L),(-1L),(-7L),0x7FC1ED925405F66BLL},{1L,1L,0L,(-3L),1L,1L,(-3L)},{(-10L),(-3L),(-10L),(-7L),(-10L),(-3L),(-10L)}},{{1L,(-3L),(-3L),1L,1L,0L,0L},{(-1L),(-3L),0x7FC1ED925405F66BLL,(-3L),(-1L),(-3L),0x7FC1ED925405F66BLL},{1L,1L,(-3L),(-3L),1L,1L,0L},{(-10L),(-7L),(-10L),(-3L),(-10L),(-7L),(-10L)}},{{1L,(-3L),0L,1L,1L,0L,(-3L)},{(-1L),(-7L),0x7FC1ED925405F66BLL,(-7L),(-1L),(-7L),0x7FC1ED925405F66BLL},{1L,1L,0L,(-3L),1L,1L,(-3L)},{(-10L),(-3L),(-10L),(-7L),(-10L),(-3L),(-10L)}},{{1L,(-3L),(-3L),1L,1L,0L,0L},{(-1L),(-3L),0x7FC1ED925405F66BLL,(-3L),(-1L),(-3L),0x7FC1ED925405F66BLL},{1L,1L,(-3L),(-3L),1L,1L,0L},{(-10L),(-7L),(-10L),(-3L),(-10L),(-7L),(-10L)}},{{1L,(-3L),0L,1L,1L,0L,(-3L)},{(-1L),(-7L),0x7FC1ED925405F66BLL,(-7L),(-1L),(-7L),0x7FC1ED925405F66BLL},{1L,1L,0L,(-3L),1L,1L,(-3L)},{(-10L),(-3L),(-10L),(-7L),(-10L),(-3L),(-10L)}},{{1L,(-3L),(-3L),1L,1L,0L,0L},{(-1L),(-3L),0x7FC1ED925405F66BLL,(-3L),(-1L),(-3L),0x7FC1ED925405F66BLL},{1L,1L,(-3L),(-3L),1L,1L,0L},{(-10L),(-7L),(-10L),(-3L),(-10L),(-7L),(-10L)}},{{1L,(-3L),0L,1L,1L,0L,(-3L)},{(-1L),(-7L),0x7FC1ED925405F66BLL,(-7L),(-1L),(-7L),0x7FC1ED925405F66BLL},{1L,1L,0L,(-3L),1L,1L,(-3L)},{(-10L),(-3L),(-10L),(-7L),(-10L),(-3L),(-10L)}},{{1L,(-3L),(-3L),1L,1L,0L,0L},{(-1L),(-3L),0x7FC1ED925405F66BLL,(-3L),(-1L),(-3L),0x7FC1ED925405F66BLL},{1L,1L,(-3L),(-3L),1L,1L,0L},{(-10L),(-7L),(-10L),(-3L),(-10L),(-7L),(-10L)}},{{1L,(-3L),0L,1L,1L,0L,(-3L)},{(-1L),(-7L),0x7FC1ED925405F66BLL,(-7L),(-1L),(-7L),0x7FC1ED925405F66BLL},{1L,1L,0L,(-3L),1L,1L,(-3L)},{(-10L),(-3L),(-10L),(-7L),(-10L),(-3L),(-10L)}}};
        uint8_t l_3070[7][10] = {{246UL,0xB6L,0x88L,250UL,0x88L,0xB6L,246UL,0xC7L,0xC7L,1UL},{246UL,255UL,0xB6L,0x6FL,0x9EL,0xA0L,0x88L,0x88L,0xA0L,0x9EL},{0xC7L,255UL,255UL,0xC7L,0xA0L,246UL,250UL,1UL,1UL,0x09L},{0xB6L,246UL,1UL,250UL,255UL,0x6FL,255UL,250UL,1UL,246UL},{0x9EL,253UL,0x74L,0xC7L,0xBBL,0xEAL,246UL,1UL,0xA0L,0xA0L},{253UL,0x09L,0xEAL,0x6FL,0x6FL,0xEAL,0x09L,253UL,0xC7L,246UL},{0x9EL,0x74L,250UL,253UL,0x88L,0x6FL,1UL,246UL,1UL,0x6FL}};
        int32_t l_3073 = 0L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2313[i] = 1L;
        for (i = 0; i < 6; i++)
            l_2618[i] = &g_340;
        if (((*l_2281) ^= (*g_340)))
        {
            uint64_t l_2284[5] = {18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL};
            int32_t l_2309 = 4L;
            int32_t l_2318[9] = {0x7583B004L,0x7583B004L,0x7583B004L,0x7583B004L,0x7583B004L,0x7583B004L,0x7583B004L,0x7583B004L,0x7583B004L};
            int32_t l_2320 = 5L;
            int32_t l_2322 = 0xD2F3632FL;
            int32_t l_2323 = (-10L);
            int32_t l_2324 = 0x2C017171L;
            int32_t **l_2340 = &l_2281;
            int32_t ***l_2339 = &l_2340;
            const int16_t *l_2359 = &g_1247.f0;
            struct S0 ***l_2360[4][10][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint16_t **l_2365 = &l_2229;
            int32_t l_2429 = 0x7EBB6B82L;
            int32_t l_2430 = 1L;
            int32_t l_2432 = 1L;
            int32_t l_2433[5] = {(-2L),(-2L),(-2L),(-2L),(-2L)};
            int32_t l_2466 = 0L;
            int32_t l_2488 = 0xA2A694B1L;
            uint32_t **l_2516 = (void*)0;
            int8_t *l_2537 = &g_1205;
            struct S1 ***l_2570[2];
            uint8_t ***l_2601 = (void*)0;
            union U2 ***l_2637 = &l_2594;
            union U2 ****l_2636[8] = {&l_2637,&l_2637,&l_2637,&l_2637,&l_2637,&l_2637,&l_2637,&l_2637};
            uint16_t *l_2663 = &g_289[4];
            int16_t l_2666 = 1L;
            uint16_t *****l_2667 = (void*)0;
            uint16_t ****l_2668 = &g_1623[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_2570[i] = &g_838;
            for (g_132 = 9; (g_132 >= 0); g_132 -= 1)
            {
                uint16_t l_2287 = 0x5F7FL;
                int64_t *l_2304 = &l_2300;
                uint64_t *l_2305 = &g_1013[0];
                uint64_t *l_2306 = (void*)0;
                int32_t l_2312 = 7L;
                int32_t l_2315 = (-8L);
                int32_t l_2316 = 0L;
                int32_t l_2317 = 8L;
                int32_t l_2319[6][7][3] = {{{0L,0L,0xADF952F9L},{(-2L),0x15561DD0L,3L},{6L,0xBFAA2CB4L,0x624D23C7L},{0L,0x15561DD0L,0x15561DD0L},{0x7F3B6EE3L,0L,0x248DD524L},{0L,0xB9C0AF9BL,0x36695570L},{6L,0L,0x248DD524L}},{{(-2L),0x7E4177E3L,0x15561DD0L},{0L,0L,0x624D23C7L},{0x9F6C0847L,0xB9C0AF9BL,3L},{0L,0L,0xADF952F9L},{(-2L),0x15561DD0L,3L},{6L,0xBFAA2CB4L,0x624D23C7L},{0L,0x15561DD0L,0x15561DD0L}},{{0x7F3B6EE3L,0L,0x248DD524L},{0L,0xB9C0AF9BL,0x36695570L},{6L,0L,0x248DD524L},{(-2L),0L,0x3D5BD602L},{0x248DD524L,0x2340B1CCL,1L},{0x36695570L,4L,(-1L)},{0x248DD524L,(-10L),(-4L)}},{{0x15561DD0L,0x3D5BD602L,(-1L)},{0x624D23C7L,(-1L),1L},{3L,0x3D5BD602L,0x3D5BD602L},{0xADF952F9L,(-10L),0x1DBAFE02L},{3L,4L,1L},{0x624D23C7L,0x2340B1CCL,0x1DBAFE02L},{0x15561DD0L,0L,0x3D5BD602L}},{{0x248DD524L,0x2340B1CCL,1L},{0x36695570L,4L,(-1L)},{0x248DD524L,(-10L),(-4L)},{0x15561DD0L,0x3D5BD602L,(-1L)},{0x624D23C7L,(-1L),1L},{3L,0x3D5BD602L,0x3D5BD602L},{0xADF952F9L,(-10L),0x1DBAFE02L}},{{3L,4L,1L},{0x624D23C7L,0x2340B1CCL,0x1DBAFE02L},{0x15561DD0L,0L,0x3D5BD602L},{0x248DD524L,0x2340B1CCL,1L},{0x36695570L,4L,(-1L)},{0x248DD524L,(-10L),(-4L)},{0x15561DD0L,0x3D5BD602L,(-1L)}}};
                int8_t **l_2333 = &g_1485;
                struct S1 l_2364 = {3673,2026,1};
                uint16_t ****l_2377 = &g_1623[3];
                uint16_t l_2391[4];
                int64_t l_2428 = 0xE98AA15F02B78897LL;
                int8_t l_2434[5] = {0x5FL,0x5FL,0x5FL,0x5FL,0x5FL};
                int16_t l_2439 = (-8L);
                int32_t l_2468 = 0x1300CB97L;
                uint32_t l_2470 = 7UL;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_2391[i] = 0xE663L;
                if ((((safe_mul_func_uint8_t_u_u(l_2284[4], ((l_2284[4] , (safe_add_func_int64_t_s_s(l_2287, (g_374 = ((*l_2305) &= ((((safe_sub_func_int32_t_s_s((((((safe_sub_func_uint16_t_u_u(1UL, (safe_sub_func_uint32_t_u_u(0x09DC8EBEL, l_2284[1])))) <= ((safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s((((*l_2304) = (safe_lshift_func_int16_t_s_s(l_2300, (((*g_340) = (0x67CD0BF8L & (safe_mul_func_int8_t_s_s((l_2303 = l_2287), l_2284[3])))) == l_2300)))) || l_2284[4]), 0x55FDD9B1L)), (*l_2281))) >= l_2287)) && l_2284[4]) == (*l_2281)) || 1UL), (*l_2281))) && l_2300) ^ l_2284[4]) , l_2287)))))) < l_2307))) || l_2300) || l_2287))
                {
                    struct S0 l_2308 = {0,22};
                    int32_t *l_2310[8][7][4] = {{{(void*)0,&g_72[2],&l_2303,&g_3},{(void*)0,&l_2303,&g_3,&g_72[2]},{(void*)0,&l_2309,&g_3,&l_2309},{(void*)0,&l_2309,&l_2303,&g_2169},{(void*)0,&l_2303,(void*)0,(void*)0},{(void*)0,(void*)0,&g_3,&g_1182},{&l_2303,(void*)0,&g_2169,&l_2303}},{{&g_72[2],&l_2224,(void*)0,&g_72[1]},{&l_2303,&l_2307,&g_72[3],&l_2303},{&l_2303,&l_2303,&l_2309,&l_2307},{&g_3,&g_3,&l_2261,&g_72[1]},{&l_2309,&l_2261,&g_3,&g_72[3]},{(void*)0,(void*)0,(void*)0,&l_2261},{&l_2309,(void*)0,&g_2169,(void*)0}},{{&g_72[2],&l_2307,&l_2307,&l_2224},{&g_3,&l_2309,&g_1182,(void*)0},{&l_2261,&g_2169,&l_2303,&g_72[2]},{&g_1182,&l_2303,&l_2224,&g_64},{&g_3,&g_72[2],&l_2303,(void*)0},{&l_2224,&l_2307,&g_2169,(void*)0},{&g_2169,&g_72[1],&l_2261,&l_2261}},{{(void*)0,(void*)0,(void*)0,&l_2309},{(void*)0,(void*)0,&l_2261,&l_2261},{&g_3,(void*)0,(void*)0,&l_2261},{&l_2303,(void*)0,(void*)0,&l_2261},{(void*)0,(void*)0,(void*)0,&l_2309},{&g_3,(void*)0,&l_2309,&l_2261},{&l_2303,&g_72[1],&l_2224,(void*)0}},{{(void*)0,(void*)0,&g_1182,&l_2309},{(void*)0,&l_2303,&l_2307,&g_2169},{(void*)0,&g_2169,&g_72[2],&l_2303},{&g_72[2],&l_2307,&l_2224,&g_1182},{&l_2309,&l_2303,&l_2307,&l_2303},{&g_3,(void*)0,&g_72[2],(void*)0},{(void*)0,&l_2309,&l_2303,&l_2303}},{{&l_2224,&g_1182,&g_2169,&l_2224},{&g_64,&l_2261,(void*)0,&l_2224},{&g_3,&l_2303,&l_2224,(void*)0},{&g_1182,(void*)0,&l_2309,&l_2261},{&g_2169,&l_2307,&l_2303,&l_2224},{&g_1182,(void*)0,&l_2303,&g_3},{&g_72[3],&g_1182,&l_2261,&l_2303}},{{(void*)0,(void*)0,&l_2261,(void*)0},{&l_2307,&l_2261,(void*)0,&l_2303},{&g_2169,&l_2303,&l_2303,&g_2169},{&l_2303,(void*)0,&g_72[4],&l_2303},{&l_2303,&g_1182,&l_2303,&l_2309},{&g_2169,&l_2303,(void*)0,&g_72[3]},{&l_2307,&l_2261,&l_2261,&g_3}},{{(void*)0,&l_2307,&l_2261,&g_3},{&g_72[3],&l_2309,&l_2303,&g_72[2]},{&g_1182,(void*)0,&l_2303,&l_2261},{&g_2169,(void*)0,&l_2309,&g_72[3]},{&g_1182,&g_3,&l_2224,(void*)0},{&g_3,(void*)0,(void*)0,&l_2303},{&g_64,&g_72[3],&g_2169,&g_3}}};
                    uint32_t *l_2332 = &g_259[5][4];
                    int i, j, k;
                    for (g_852 = 9; (g_852 >= 0); g_852 -= 1)
                    {
                        return l_2308;
                    }
                    l_2325[4]--;
                    if (((safe_mod_func_uint32_t_u_u(((*l_2332) = (l_2330 == l_2331)), (*l_2281))) >= 0x0AL))
                    {
                        uint16_t l_2334 = 0xF379L;
                        int32_t * const *l_2342 = &g_340;
                        int32_t * const ** const l_2341 = &l_2342;
                        uint16_t *l_2355[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_2355[i] = &g_311;
                        (**g_1396) = l_2333;
                        if ((*g_340))
                            continue;
                        if (l_2334)
                            continue;
                        (*l_2281) = (((((*l_2332) = (safe_rshift_func_uint16_t_u_s(l_2309, (l_2312 & (((((safe_sub_func_int8_t_s_s((((((((func_53((l_2339 != l_2341)) , (253UL & (((*l_2305)--) || (safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_s((~((safe_mod_func_int64_t_s_s(l_2325[6], ((((safe_sub_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((l_2315 ^= 0x3650L), (***l_2339))) <= 0xD387AF09L) , (****g_1201)), l_2325[4])) || (***l_2341)) ^ (*l_2281)) , (*l_2281)))) || l_2319[2][0][0])), 10))))))) <= 0UL) != (*g_340)) , (-1L)) & (*l_2281)) && (*l_2281)) < 0xCA31306AB370156ELL), 0xA6L)) || (**l_2340)) ^ g_118.f1) > (**l_2340)) || (*g_1603)))))) , 0x90EF1B26L) , (*l_2281)) == (*l_2281));
                    }
                    else
                    {
                        int16_t *l_2358 = &g_862;
                        struct S0 ****l_2362 = (void*)0;
                        struct S0 ****l_2363 = &l_2360[2][6][2];
                        (*l_2281) = (-9L);
                        (**l_2340) ^= (((l_2287 ^ l_2316) <= (l_2358 != l_2359)) > l_2325[4]);
                        (*l_2363) = (g_2361[5] = l_2360[2][6][2]);
                    }
                }
                else
                {
                    uint16_t ***l_2366 = &g_271;
                    int32_t l_2369 = (-1L);
                    uint16_t *****l_2378 = &g_2277;
                    int16_t *** const *l_2406 = &g_866;
                    int16_t *** const * const *l_2405 = &l_2406;
                    int32_t l_2420 = 0xF2FEC3AAL;
                    int32_t l_2421 = 0x271DC779L;
                    int32_t l_2424 = 3L;
                    int32_t l_2426 = 0x586750C9L;
                    int32_t l_2427 = 0x742B50ECL;
                    int32_t l_2431[4][2][6] = {{{0x9A40909FL,(-10L),0x9A40909FL,(-6L),(-10L),0x0BE4F491L},{0x9A40909FL,0L,(-6L),(-6L),0L,0x9A40909FL}},{{0x9A40909FL,1L,0x0BE4F491L,(-6L),1L,(-6L)},{0x9A40909FL,(-10L),0x9A40909FL,(-6L),(-10L),0x0BE4F491L}},{{0x9A40909FL,0L,(-6L),(-6L),0L,0x9A40909FL},{0x9A40909FL,1L,0x0BE4F491L,(-6L),1L,(-6L)}},{{0x9A40909FL,(-10L),0x9A40909FL,(-6L),(-10L),0x0BE4F491L},{0x9A40909FL,0L,(-6L),(-6L),0L,0x9A40909FL}}};
                    int32_t *l_2440[4];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_2440[i] = &l_2433[2];
                    if (((l_2364 , (l_2365 == ((*l_2366) = &l_2229))) == (((safe_mul_func_int8_t_s_s(l_2369, (safe_sub_func_uint64_t_u_u(18446744073709551609UL, 7UL)))) & (safe_rshift_func_uint8_t_u_u(((l_2374 , ((--(*l_2305)) ^ (((*l_2378) = l_2377) == l_2377))) && l_2315), 2))) <= 9UL)))
                    {
                        int32_t l_2381 = 0xFCCFDA2BL;
                        l_2381 = (safe_div_func_uint8_t_u_u(0x8AL, (**l_2340)));
                    }
                    else
                    {
                        int16_t l_2392 = 0xE3AFL;
                        int16_t *l_2395 = &g_1434;
                        int16_t *l_2402[1][10];
                        uint32_t l_2403 = 0x9195E1FEL;
                        int32_t l_2413 = 0L;
                        uint16_t *l_2414 = &l_2391[0];
                        uint32_t *l_2417[6] = {&g_259[0][5],&g_441,&g_259[0][5],&g_259[0][5],&g_441,&g_259[0][5]};
                        int32_t l_2419 = 0x00B42ED2L;
                        int32_t l_2423 = (-2L);
                        int32_t l_2425[10][9] = {{4L,0x0B21BAA7L,4L,4L,0x0B21BAA7L,4L,4L,0x0B21BAA7L,4L},{4L,0x0B21BAA7L,4L,4L,0x0B21BAA7L,4L,4L,0x0B21BAA7L,4L},{4L,0x0B21BAA7L,4L,4L,0x0B21BAA7L,4L,0xC550F166L,4L,0xC550F166L},{0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L},{0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L},{0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L},{0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L},{0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L},{0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L},{0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L,0xC550F166L,4L,0xC550F166L}};
                        int32_t l_2435 = 0x6EB64AA3L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 10; j++)
                                l_2402[i][j] = &g_862;
                        }
                        l_2303 &= (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s((((l_2313[0] ^ ((***l_2339) != (safe_mul_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(((l_2312 |= ((safe_add_func_uint64_t_u_u((l_2391[0] && (((*l_2304) ^= l_2392) != l_2392)), (((++(*l_2305)) > (((*l_2395) = (l_2369 ^ 8UL)) < (safe_add_func_uint64_t_u_u(((l_2317 = ((safe_rshift_func_uint8_t_u_u((((void*)0 == l_2400) || 1L), l_2392)) <= 0x639F2C8762215BA4LL)) | 7UL), g_385)))) , 0xCB93A08310E77FDFLL))) >= 8L)) < (*l_2281)), 0xE9L)) || l_2403) < l_2404), (**l_2340))))) , 0x6FL) < l_2319[2][0][0]))), (*l_2281)));
                        l_2423 &= (l_2303 & ((l_2369 , ((l_2405 != (void*)0) ^ (safe_mul_func_int8_t_s_s(((l_2409[2][5] ^= l_2392) < (safe_add_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u((((0xB199L || (((((*l_2414) = (l_2413 |= l_2391[3])) & l_2364.f1) || (safe_div_func_uint32_t_u_u((g_2436++), ((l_2420 = (-6L)) , l_2435)))) >= 0xE4011C5FL)) , 254UL) || l_2325[4]))) ^ (*l_2281)), 5L))), (***l_2339))))) , l_2439));
                        (*l_2281) = (-1L);
                    }
                    l_2442--;
                    for (l_2418 = 0; (l_2418 <= 9); l_2418 += 1)
                    {
                        (*g_838) = (*g_838);
                    }
                }
                l_2303 ^= (safe_sub_func_int64_t_s_s((((*g_340) = l_2313[0]) > (~1UL)), (***l_2339)));
                for (l_2322 = 9; (l_2322 >= 0); l_2322 -= 1)
                {
                    uint32_t l_2452 = 0xF9E340C8L;
                    int32_t l_2463 = (-1L);
                    int32_t l_2464 = 0x34A1A1EDL;
                    int32_t l_2465[6][3][3] = {{{(-1L),0x3216532AL,4L},{5L,5L,0L},{(-1L),(-1L),0x3216532AL}},{{(-5L),0L,6L},{(-1L),(-1L),(-1L)},{0xF0AD12C9L,(-5L),6L}},{{9L,0xAF391F1AL,0x3216532AL},{(-1L),0x704FA668L,0L},{4L,0xC819C4D0L,4L}},{{0L,0x704FA668L,(-1L)},{0x3216532AL,0xAF391F1AL,9L},{6L,(-5L),0xF0AD12C9L}},{{(-1L),(-1L),(-1L)},{6L,0L,(-5L)},{0x3216532AL,(-1L),(-1L)}},{{0L,5L,5L},{4L,0x3216532AL,(-1L)},{(-1L),(-6L),(-5L)}}};
                    int64_t l_2469 = 0xE603168DA110E9B7LL;
                    int i, j, k;
                }
            }
            if ((**l_2340))
            {
                uint32_t *l_2482 = &l_2442;
                int32_t l_2486 = 0xE3808C54L;
                int32_t l_2491[5][8] = {{0x87EFE3A9L,0xE5AEF4B8L,(-1L),0xE5AEF4B8L,0x87EFE3A9L,0x87EFE3A9L,0xE5AEF4B8L,(-1L)},{0x87EFE3A9L,0x87EFE3A9L,0xE5AEF4B8L,(-1L),0xE5AEF4B8L,0x87EFE3A9L,0x87EFE3A9L,0xE5AEF4B8L},{0xDE01BB68L,0xE5AEF4B8L,0xE5AEF4B8L,0xDE01BB68L,0x39B0EA0DL,0xDE01BB68L,0xE5AEF4B8L,0xE5AEF4B8L},{0xE5AEF4B8L,0x39B0EA0DL,(-1L),(-1L),0x39B0EA0DL,0xE5AEF4B8L,0x39B0EA0DL,(-1L)},{0xDE01BB68L,0x39B0EA0DL,0xDE01BB68L,0xE5AEF4B8L,0xE5AEF4B8L,0xDE01BB68L,0x39B0EA0DL,0xDE01BB68L}};
                int i, j;
                if ((((l_2325[4] ^ (**l_2340)) & (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(l_2477, 1)), ((safe_sub_func_int32_t_s_s(((((((safe_add_func_uint32_t_u_u((((((*l_2482) &= 0x810406F6L) , (l_2303 , &g_579)) == ((l_2483 = 254UL) , (*l_2400))) , (((safe_lshift_func_uint8_t_u_u(252UL, (**l_2340))) <= (***g_1662)) | l_2486)), (-1L))) > l_2303) ^ (***l_2339)) | l_2307) || l_2486) > (*l_2281)), (**l_2340))) | 0xB869D975L)))) < l_2486))
                {
                    (*l_2281) |= l_2483;
                }
                else
                {
                    int16_t l_2487 = (-9L);
                    int32_t *l_2489[3];
                    struct S0 l_2497[3] = {{1,15},{1,15},{1,15}};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2489[i] = &l_2486;
                    l_2492--;
                    for (l_2432 = 29; (l_2432 != (-17)); l_2432 = safe_sub_func_int64_t_s_s(l_2432, 1))
                    {
                        return l_2497[1];
                    }
                }
            }
            else
            {
                int32_t *l_2498 = &l_2441;
                int32_t *l_2499 = &g_2169;
                int32_t *l_2500 = &l_2224;
                int32_t *l_2501 = &l_2324;
                int32_t *l_2502 = &l_2432;
                int32_t *l_2503[2][4][10] = {{{&g_2169,&l_2488,&l_2433[3],&l_2433[3],&l_2488,&g_2169,&l_2432,(void*)0,&g_72[4],&l_2314[0][8][4]},{&l_2311,&l_2314[0][8][4],&l_2429,(void*)0,(void*)0,(void*)0,&l_2429,&l_2314[0][8][4],&l_2311,&g_2169},{&l_2311,&l_2433[3],&l_2324,&l_2432,(void*)0,&g_2169,&g_2169,(void*)0,&l_2314[0][8][4],(void*)0},{(void*)0,(void*)0,&l_2311,&l_2314[0][8][4],(void*)0,&l_2488,&l_2432,&l_2429,&l_2432,&l_2488}},{{&l_2433[3],&l_2311,&l_2313[0],&l_2311,&l_2433[3],&l_2324,&l_2432,(void*)0,&g_2169,&g_2169},{&l_2314[0][8][4],(void*)0,&g_72[4],&l_2488,&l_2488,&g_72[4],(void*)0,&l_2314[0][8][4],&l_2313[0],&g_2169},{&l_2429,&l_2488,(void*)0,&l_2314[0][8][4],&l_2433[3],&l_2432,&l_2433[3],&l_2314[0][8][4],(void*)0,&l_2488},{&g_72[4],&l_2324,(void*)0,&l_2433[3],(void*)0,&l_2314[0][8][4],&l_2314[0][8][4],&l_2314[0][8][4],&l_2314[0][8][4],(void*)0}}};
                int32_t l_2504 = (-4L);
                int32_t l_2505 = 7L;
                int32_t l_2513 = 0x4F0D45F8L;
                int32_t ****l_2535[1][5];
                struct S0 l_2566 = {1,32};
                uint32_t *l_2567[6] = {(void*)0,&l_2506[0],(void*)0,(void*)0,&l_2506[0],(void*)0};
                union U2 l_2590 = {0xB537L};
                int32_t l_2593 = 1L;
                uint8_t ***l_2602 = (void*)0;
                int16_t *l_2626 = (void*)0;
                int16_t **l_2625[6] = {&l_2626,&l_2626,&l_2626,&l_2626,&l_2626,&l_2626};
                uint64_t l_2632 = 18446744073709551615UL;
                uint16_t **l_2646[1][1][6];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_2535[i][j] = &l_2339;
                }
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 6; k++)
                            l_2646[i][j][k] = &l_2229;
                    }
                }
lbl_2635:
                ++l_2506[1];
                if ((((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((-1L), 0x4EL)), l_2490[1])) != (l_2513 > 0x0853A978322549C1LL)) >= (((void*)0 != l_2516) ^ (l_2325[4] >= ((safe_mod_func_uint16_t_u_u(((((***l_2339) = (safe_sub_func_int32_t_s_s(((*g_493) == (*l_2498)), 0x1CEE2AF2L))) || l_2404) , l_2409[0][5]), l_2313[0])) >= 0x76A87AA0L)))))
                {
                    int8_t l_2523 = 0x27L;
                    int32_t l_2536[4];
                    int64_t *l_2538 = &l_2483;
                    uint16_t l_2539 = 65528UL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2536[i] = 0x759386FAL;
                    l_2539 |= (safe_mul_func_uint8_t_u_u(1UL, (l_2523 == ((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((*l_2499), 1)), (~((*l_2538) ^= ((*g_1246) , (l_2523 != (((((safe_mul_func_int8_t_s_s((***g_1662), (l_2536[0] = ((((safe_add_func_int16_t_s_s(l_2523, ((*l_2281) != (((l_2535[0][4] != l_2535[0][0]) | (*l_2281)) > 0xEAL)))) > 0L) > (*l_2499)) > l_2313[0])))) , l_2537) == l_2537) ^ (**l_2340)) != 0x6216L))))))), (*l_2281))) == (-8L)))));
                }
                else
                {
                    int32_t l_2541 = 0x75A97DBCL;
                    struct S0 ***l_2560 = (void*)0;
                    for (g_64 = 0; (g_64 <= 1); g_64 += 1)
                    {
                        union U2 l_2542 = {-9L};
                        struct S0 ****l_2559 = &g_2361[2];
                        int16_t *** const l_2561[9][5][4] = {{{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867}},{{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867}},{{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867}},{{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867}},{{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867}},{{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867}},{{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867}},{{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867}},{{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867},{&g_867,&g_867,&g_867,&g_867}}};
                        uint16_t *l_2563 = (void*)0;
                        uint16_t *l_2564 = &l_2325[5];
                        struct S0 l_2565 = {1,127};
                        int i, j, k;
                        (*l_2498) ^= ((l_2506[3] , g_2540) != (void*)0);
                        l_2307 = ((*g_1603) == (l_2541 , (0L < (((l_2542 , ((safe_add_func_int16_t_s_s(((*l_2501) && (safe_lshift_func_int8_t_s_u(1L, (safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(l_2541, 7)) >= ((safe_lshift_func_int8_t_s_s(((***g_1662) = (safe_div_func_uint16_t_u_u(((*l_2564) |= (((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s(l_2541, (((((((*l_2559) = &g_579) == l_2560) , l_2561[2][3][3]) != l_2561[2][3][3]) ^ (**l_2340)) < l_2542.f0))) ^ l_2303), 12)) , l_2562) != (void*)0)), (**l_2340)))), (***l_2339))) & l_2541)) <= (-1L)), l_2542.f0))))), l_2542.f0)) >= (*l_2281))) || l_2541) , l_2542.f0))));
                        return l_2565;
                    }
                    for (g_355 = 3; (g_355 >= 0); g_355 -= 1)
                    {
                        (*l_2500) &= 0x30C877C2L;
                    }
                    return l_2566;
                }
                if (((l_2313[0] &= (***l_2339)) || (((9L > (safe_add_func_uint32_t_u_u((l_2404 && ((void*)0 == l_2570[1])), (***l_2339)))) != (safe_div_func_uint16_t_u_u(((l_2307 = (*l_2501)) ^ (safe_mod_func_int16_t_s_s((safe_add_func_int64_t_s_s((-1L), (((((+(***l_2339)) , 8L) && (**l_2340)) > 4294967287UL) > (***l_2339)))), (*g_493)))), 3L))) & (*g_1603))))
                {
                    const struct S1 l_2581 = {3416,5215,1};
                    union U2 ***l_2595 = &l_2594;
                    int16_t * const l_2600 = &g_132;
                    uint64_t *l_2603 = &g_1013[1];
                    uint64_t **l_2604[4] = {&l_2603,&l_2603,&l_2603,&l_2603};
                    int32_t l_2629 = 0L;
                    int i;
                    for (l_2513 = (-6); (l_2513 == (-8)); l_2513 = safe_sub_func_uint16_t_u_u(l_2513, 1))
                    {
                        uint32_t **l_2591 = &g_1984[4][3][0];
                        int32_t l_2592 = 0x2F5D55B1L;
                        (*l_2499) = (((**g_1203) || (+(l_2581 , (((l_2325[4] == (*l_2281)) != (safe_sub_func_uint32_t_u_u(0x9AE094F4L, (((safe_mul_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s(l_2581.f0, (((*l_2591) = func_43((((*g_839) , 4294967295UL) ^ ((safe_lshift_func_int16_t_s_u((g_1182 & l_2409[2][5]), l_2477)) >= 0x52L)), (*l_2340), l_2590, g_2017, (***l_2339))) != p_37))) ^ (*g_493)) >= (*l_2500)) != l_2592), 0x36L)) , (*l_2501)) >= l_2300)))) & (*g_340))))) > (*l_2281));
                        if (l_2593)
                            break;
                    }
                    (*l_2595) = l_2594;
                    l_2597 = l_2596;
                    if (((***l_2339) = ((safe_add_func_int8_t_s_s((((((void*)0 == l_2600) >= (l_2601 == l_2602)) & (*g_493)) == ((l_2605 = l_2603) != (l_2581 , ((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(l_2313[0], (l_2581.f1 || l_2581.f2))), (**l_2340))) , &l_2284[4])))), 0x55L)) < 65526UL)))
                    {
                        uint32_t l_2622[3];
                        int32_t l_2628 = 0x059C6B9AL;
                        int32_t l_2630 = (-1L);
                        int32_t l_2631 = 0x2B8F1249L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_2622[i] = 18446744073709551611UL;
                        (*l_2500) |= (!((*l_2281) , (-1L)));
                        (*l_2499) = (safe_rshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(0xBEL, (l_2581 , (safe_add_func_uint32_t_u_u((l_2581.f0 , (l_2617[0][1][2] == (l_2619 , &l_2340))), ((safe_lshift_func_uint16_t_u_u(l_2622[1], ((safe_mul_func_int16_t_s_s(((void*)0 == l_2625[0]), l_2581.f2)) & l_2622[1]))) >= l_2627)))))) , (*l_2500)), l_2622[0]));
                        l_2632++;
                    }
                    else
                    {
                        union U2 *****l_2638 = &l_2636[0];
                        (*l_2499) ^= ((void*)0 != l_2603);
                        if (l_2404)
                            goto lbl_2635;
                        if (l_2374.f2)
                            goto lbl_2635;
                        (*l_2638) = l_2636[2];
                    }
                }
                else
                {
                    struct S1 l_2640 = {-617,157,0};
                    uint16_t ***l_2645 = &g_271;
                    (*g_340) &= (((+(((l_2640 , 3L) , (((+((*g_1603) = (((*l_2645) = l_2644) != l_2646[0][0][5]))) && (safe_lshift_func_int8_t_s_u((***l_2339), 5))) != (l_2640.f1 == (safe_add_func_uint16_t_u_u(0UL, ((safe_unary_minus_func_int64_t_s((safe_lshift_func_uint16_t_u_s(((4294967295UL <= ((((**g_838) , g_2654) != g_2655) | g_205)) < 3L), 12)))) , (**l_2340))))))) ^ 0x81L)) > (-6L)) || (*l_2281));
                }
            }
            (*l_2281) = (safe_div_func_int8_t_s_s(((**g_1203) |= ((((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((***l_2339), ((*l_2663)--))) == (((**l_2594) , (void*)0) == &l_2359)), ((*g_1603) |= l_2666))) >= ((*g_340) |= 0x9816BFF5L)) , &g_491[0][2]) == (l_2668 = &g_1623[1]))), (**l_2340)));
        }
        else
        {
            int32_t l_2670[7];
            uint64_t **l_2675 = &l_2605;
            uint64_t ***l_2674 = &l_2675;
            const struct S0 *l_2695 = &g_413;
            const struct S0 **l_2694 = &l_2695;
            const struct S0 ***l_2693[6];
            const struct S0 ****l_2692 = &l_2693[4];
            const struct S0 *****l_2691[5][1][9] = {{{(void*)0,&l_2692,(void*)0,&l_2692,(void*)0,&l_2692,(void*)0,&l_2692,(void*)0}},{{(void*)0,(void*)0,&l_2692,&l_2692,(void*)0,(void*)0,&l_2692,&l_2692,(void*)0}},{{&l_2692,&l_2692,&l_2692,&l_2692,&l_2692,&l_2692,&l_2692,&l_2692,&l_2692}},{{(void*)0,&l_2692,&l_2692,(void*)0,(void*)0,&l_2692,&l_2692,(void*)0,(void*)0}},{{(void*)0,&l_2692,(void*)0,&l_2692,(void*)0,&l_2692,(void*)0,&l_2692,(void*)0}}};
            int16_t *****l_2714[1];
            uint64_t ***l_2724 = &l_2675;
            int32_t **l_2743 = &g_140;
            uint8_t l_2763 = 0x59L;
            uint16_t *l_2777 = &l_2325[3];
            uint8_t l_2798 = 0xE3L;
            union U2 l_2870 = {2L};
            uint16_t ****l_2902 = (void*)0;
            uint32_t l_2907 = 0x27509FD8L;
            uint16_t l_2911 = 0x7FC6L;
            int32_t l_2933 = 0x1E9495ADL;
            uint32_t l_2954 = 0x5D6FCB38L;
            union U2 ***l_2979[2][7] = {{&g_2656[5],&g_2656[5],&g_2656[5],&g_2656[5],&g_2656[5],&g_2656[5],&g_2656[5]},{&g_2656[5],&g_2656[5],&g_2656[5],&g_2656[5],&g_2656[5],&g_2656[5],&g_2656[5]}};
            int64_t ***l_2988 = &l_2596;
            uint32_t l_3065 = 1UL;
            uint32_t *l_3068 = &l_2860;
            uint64_t l_3071[10][3] = {{0xFAFC4FE5AA333505LL,18446744073709551607UL,0xFAFC4FE5AA333505LL},{0xFAFC4FE5AA333505LL,0x6075EF8DE69B2117LL,18446744073709551607UL},{0xFAFC4FE5AA333505LL,9UL,7UL},{0xFAFC4FE5AA333505LL,18446744073709551607UL,0xFAFC4FE5AA333505LL},{0xFAFC4FE5AA333505LL,0x6075EF8DE69B2117LL,18446744073709551607UL},{0xFAFC4FE5AA333505LL,9UL,7UL},{0xFAFC4FE5AA333505LL,18446744073709551607UL,0xFAFC4FE5AA333505LL},{0xFAFC4FE5AA333505LL,0x6075EF8DE69B2117LL,18446744073709551607UL},{0xFAFC4FE5AA333505LL,9UL,7UL},{0xFAFC4FE5AA333505LL,18446744073709551607UL,0xFAFC4FE5AA333505LL}};
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_2670[i] = (-9L);
            for (i = 0; i < 6; i++)
                l_2693[i] = &l_2694;
            for (i = 0; i < 1; i++)
                l_2714[i] = &l_2713;
            if ((!(*l_2281)))
            {
                uint32_t l_2671[5];
                uint64_t ****l_2676 = &l_2674;
                union U2 l_2685 = {-1L};
                uint32_t *l_2687 = &l_2492;
                const uint8_t *l_2688 = &g_205;
                int32_t l_2716 = (-1L);
                struct S1 l_2742 = {-480,2826,1};
                int i;
                for (i = 0; i < 5; i++)
                    l_2671[i] = 0UL;
                l_2671[1]++;
                (*g_340) &= (*l_2281);
                (*l_2676) = l_2674;
                if (((*l_2281) && (((*****g_1660) = (safe_unary_minus_func_int16_t_s(l_2671[1]))) == (l_2680 != ((((0x79L || ((*l_2331) = ((!(safe_rshift_func_uint8_t_u_u(((((l_2685 , (*g_866)) == l_2686[0][4]) < ((((((*l_2687) = l_2670[6]) > ((((l_2670[0] , l_2688) == (void*)0) == (*l_2281)) ^ 0xBFL)) > 0x44016085L) & 1L) , l_2670[6])) <= 1L), l_2671[1]))) <= l_2670[6]))) <= 254UL) <= (*g_493)) , (void*)0)))))
                {
                    struct S0 l_2690 = {1,16};
                    l_2689 = &g_838;
                    return l_2690;
                }
                else
                {
                    uint16_t *l_2696 = &l_2325[4];
                    struct S1 l_2707 = {-2668,1561,1};
                    int16_t l_2738 = 1L;
                    int32_t l_2740 = 0L;
                    l_2691[0][0][4] = (void*)0;
                    l_2716 = ((((++(*l_2696)) , (safe_div_func_int8_t_s_s(((****g_1201) = ((safe_rshift_func_uint8_t_u_u(((*g_1603) = (*g_1603)), 4)) , ((safe_sub_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((l_2707 , l_2685.f0), l_2671[1])) , l_2670[6]) | ((safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_2670[6], ((((*l_2681) = ((((l_2714[0] = l_2712) != l_2715) , (*g_1603)) && l_2670[6])) == l_2670[6]) && 0xCA19E7A2DE495111LL))), 250UL)) >= 65530UL)), (*g_1603))) || l_2707.f2))), 0xEFL))) ^ 0x8AL) & 0xE4C2049073F775ABLL);
                    for (g_210 = 0; (g_210 < (-8)); g_210 = safe_sub_func_uint64_t_u_u(g_210, 2))
                    {
                        int32_t l_2732[7] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
                        uint8_t l_2737 = 0x2DL;
                        int64_t *l_2739[6][7] = {{&g_233[2][4],(void*)0,&g_233[2][4],(void*)0,&g_233[2][4],(void*)0,&g_233[2][4]},{&g_355,&g_233[2][0],&g_233[2][0],&g_355,&l_2300,&g_1437[0][1],&g_1437[0][1]},{&l_2300,(void*)0,&g_852,(void*)0,&l_2300,(void*)0,&g_852},{&l_2300,&g_355,&g_233[2][0],&g_233[2][0],&g_355,&l_2300,&g_1437[0][1]},{&g_233[2][4],(void*)0,&g_233[2][4],(void*)0,&g_233[2][4],(void*)0,&g_233[2][4]},{&l_2300,&g_233[2][0],&g_1437[0][1],&g_355,&g_355,&g_1437[0][1],&g_233[2][0]}};
                        int32_t **l_2744 = &g_140;
                        int32_t **l_2745 = &l_2281;
                        int i, j;
                        l_2670[6] = (l_2707.f1 | ((l_2724 = ((*l_2676) = g_2721[0][3][4])) == l_2725));
                        l_2745 = (l_2744 = ((((safe_lshift_func_uint16_t_u_u(((l_2685 , (l_2732[4] = ((l_2740 = (l_2707.f0 ^= (l_2728 > (l_2670[6] || (((65529UL && (+((safe_mul_func_uint8_t_u_u(248UL, (*l_2281))) , l_2732[4]))) > (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((l_2716 = (l_2732[4] , l_2737)) && l_2738), 0x61L)), 0xFDL))) == (*l_2281)))))) == 2UL))) == 0xB9603CF04BB48B62LL), 2)) < l_2741[0][1][0]) , l_2742) , l_2743));
                        if (l_2685.f0)
                            break;
                    }
                    (*l_2281) = (!(safe_mul_func_int8_t_s_s((g_2749 == (void*)0), ((*l_2331) = l_2742.f2))));
                }
            }
            else
            {
                struct S0 l_2760 = {1,31};
                int32_t *l_2766 = &l_2314[1][0][5];
                uint16_t *l_2779 = &g_311;
                int64_t *l_2825[8];
                struct S0 ***l_2834 = &g_579;
                int32_t l_2854 = 0xC82FC144L;
                int32_t l_2855 = 0x5E0E8872L;
                int32_t l_2856 = 1L;
                int32_t l_2857 = 0L;
                int32_t l_2858 = 0x50BA0EC8L;
                int32_t l_2867 = 0x15DA68E7L;
                const union U2 l_2885 = {0xBF42L};
                uint32_t l_2887[5][4][7] = {{{0UL,0x04F9684DL,0x99D88E61L,0x4213ADECL,0xB24FE7BFL,1UL,0x04F9684DL},{0x37E54172L,0x81CD0A76L,0x65465ADDL,0x218CDA06L,0x73E104DAL,0x37E54172L,0x7735B565L},{0UL,0x4213ADECL,0x37E54172L,0x99D88E61L,0x7735B565L,0x99D88E61L,0x37E54172L},{0x1655580CL,0x1655580CL,0x37E54172L,0xB276C074L,18446744073709551609UL,0UL,0xDB575F87L}},{{0UL,0xB24FE7BFL,0x65465ADDL,18446744073709551609UL,0x1655580CL,18446744073709551615UL,0x4213ADECL},{0UL,0x73E104DAL,0x99D88E61L,0xB24FE7BFL,18446744073709551609UL,0xEA793FA7L,0x73E104DAL},{0x37E54172L,0x7735B565L,0UL,0UL,0x7735B565L,0x37E54172L,0x73E104DAL},{0xEA793FA7L,18446744073709551609UL,0xB24FE7BFL,0x99D88E61L,0x73E104DAL,0UL,0x4213ADECL}},{{18446744073709551615UL,0x1655580CL,18446744073709551609UL,0x65465ADDL,0xB24FE7BFL,0UL,0xDB575F87L},{0UL,18446744073709551609UL,0xB276C074L,0x37E54172L,0x1655580CL,0x1655580CL,0x37E54172L},{0x99D88E61L,0x7735B565L,0x99D88E61L,0x37E54172L,0x4213ADECL,0UL,0x7735B565L},{0x37E54172L,0x73E104DAL,0x218CDA06L,0x65465ADDL,0x81CD0A76L,0x37E54172L,0x04F9684DL}},{{1UL,0xB24FE7BFL,0x4213ADECL,0x99D88E61L,0x04F9684DL,0UL,18446744073709551609UL},{0xDB575F87L,0x1655580CL,0x119344EDL,0UL,0x119344EDL,0x1655580CL,0xDB575F87L},{0xDB575F87L,0x4213ADECL,1UL,0xB24FE7BFL,0x1655580CL,0UL,0x119344EDL},{1UL,0x81CD0A76L,0x99D88E61L,18446744073709551609UL,0x37E54172L,0UL,0x81CD0A76L}},{{0x37E54172L,0x04F9684DL,1UL,0xB276C074L,0x1769C1B5L,0x37E54172L,0x1769C1B5L},{0x99D88E61L,0x119344EDL,0x119344EDL,0x99D88E61L,0x1769C1B5L,0xEA793FA7L,0xB24FE7BFL},{0UL,0x1655580CL,0x4213ADECL,0x218CDA06L,0x37E54172L,18446744073709551615UL,0xDB575F87L},{18446744073709551615UL,0x37E54172L,0x218CDA06L,0x4213ADECL,0x1655580CL,0UL,0xB24FE7BFL}}};
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_2825[i] = &g_210;
                for (g_1734 = 0; (g_1734 >= 45); ++g_1734)
                {
                    (*l_2281) |= l_2670[6];
                    for (l_2261 = (-7); (l_2261 >= (-18)); l_2261 = safe_sub_func_uint32_t_u_u(l_2261, 4))
                    {
                        struct S0 l_2754 = {1,102};
                        (*l_2281) &= 4L;
                        return l_2754;
                    }
                    for (g_205 = 27; (g_205 > 59); g_205++)
                    {
                        uint8_t l_2757[6][10] = {{0x44L,1UL,251UL,251UL,0x48L,252UL,0x48L,251UL,251UL,1UL},{0xF0L,0x9CL,251UL,0x48L,5UL,251UL,255UL,255UL,251UL,5UL},{1UL,0xF0L,0xF0L,1UL,8UL,251UL,0x44L,251UL,5UL,251UL},{0xF0L,252UL,0xA4L,251UL,0xA4L,252UL,0xF0L,0x44L,5UL,0x9CL},{0x44L,251UL,8UL,1UL,0xF0L,0xF0L,251UL,252UL,0x9CL,0x48L},{251UL,0x9CL,0xA4L,1UL,8UL,5UL,1UL,5UL,8UL,1UL}};
                        int i, j;
                        --l_2757[4][0];
                        return l_2760;
                    }
                    for (g_385 = 2; (g_385 >= 0); g_385 -= 1)
                    {
                        int8_t l_2761 = 0L;
                        int32_t l_2762 = 0L;
                        l_2763--;
                        if (l_2483)
                            goto lbl_2457;
                        l_2766 = p_37;
                        (*l_2281) &= 0x0806CA42L;
                    }
                }
                for (l_2627 = (-29); (l_2627 >= (-24)); l_2627++)
                {
                    uint64_t l_2788 = 0UL;
                    struct S0 **l_2795 = &l_2562;
                    int32_t l_2796[2][5][2];
                    int32_t l_2810 = 0x307B6B4DL;
                    int8_t l_2811 = 0xB3L;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 5; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_2796[i][j][k] = 0L;
                        }
                    }
                    for (g_441 = 0; (g_441 != 54); g_441 = safe_add_func_int32_t_s_s(g_441, 1))
                    {
                        (*g_340) = 0x749D42EEL;
                    }
                    for (g_205 = 11; (g_205 <= 41); ++g_205)
                    {
                        int8_t l_2774 = 9L;
                        struct S1 l_2778 = {7294,1120,1};
                        uint16_t **l_2780 = &l_2779;
                        l_2774 = l_2773;
                        l_2798 &= ((*g_340) |= ((safe_mod_func_uint32_t_u_u(((((*l_2644) = l_2777) == (l_2778 , ((*l_2780) = l_2779))) < (((safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((*l_2281), ((l_2778.f0 < (((~((*g_2246) , ((safe_lshift_func_int8_t_s_u((p_37 == (l_2788 , func_43(((****g_1201) = (((((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((((l_2796[1][2][0] |= (((*l_2777) = (safe_mul_func_uint16_t_u_u(((void*)0 != l_2795), (*l_2281)))) || l_2778.f1)) && 0xDB06788AL) || l_2778.f0), 3)) ^ l_2788), l_2778.f0)) || 0x259549ACL) == 3L) <= 0x30L) || (*l_2281))), p_37, (**l_2594), l_2778.f2, l_2778.f1))), (*g_1603))) , 0L))) >= 1UL) <= l_2778.f1)) , l_2797[3][2]))), 0UL)) < l_2774) < l_2778.f0)), 0x7CAE6CDBL)) >= l_2788));
                        (*l_2281) &= ((*g_340) = ((-5L) == (*g_2723)));
                    }
                    (*g_340) |= (safe_sub_func_int16_t_s_s(0x354AL, (((l_2796[1][2][0] , (*l_2281)) == (((l_2597 != l_2597) <= ((*g_1204) = ((safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((((((safe_rshift_func_uint8_t_u_s((*g_1603), (0xA488950FL ^ ((safe_rshift_func_int16_t_s_u((l_2810 = (safe_unary_minus_func_uint8_t_u((p_37 != p_37)))), 13)) , l_2810)))) || l_2810) < 6UL) != l_2811) , 1L) > (****g_1201)), l_2760.f1)), 18446744073709551615UL)) ^ 0xAA56L))) , 0x479AE4D0L)) , 8UL)));
                }
                if (((((*l_2779) &= ((l_2760 , (safe_lshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((*l_2281), 2)) , (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((l_2760.f0 || l_2824) || ((((*l_2281) = (*g_340)) , ((*l_2281) ^ (l_2670[3] = (((((l_2760.f1 == 0x06E5L) < ((void*)0 == (*l_2594))) > 4294967295UL) , (*g_340)) & l_2760.f1)))) , 0x2D3CD2E0L)) < 7L), (*g_340))), l_2763)), (****g_1201)))), 0x0CB5L)) != l_2826), 2))) <= (*g_340))) != l_2763) >= l_2760.f0))
                {
                    int16_t l_2837 = 0x1BCFL;
                    int32_t l_2840 = (-9L);
                    (*l_2281) = (safe_add_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(3UL, 9)), 0xD84FCE9331F4B8F6LL)))) , ((void*)0 != l_2834)), ((*****g_1660) = (safe_mod_func_uint8_t_u_u((l_2837 , l_2837), (safe_sub_func_int64_t_s_s((l_2840 = ((**g_838) , 0x80D6D159A1C59572LL)), ((*l_2281) && l_2837))))))));
                }
                else
                {
                    uint16_t l_2850 = 0x8D92L;
                    int32_t l_2853 = 0x8D297047L;
                    int32_t l_2859 = 0x9B0799E4L;
                    struct S0 l_2888 = {1,12};
                    int32_t *l_2889 = (void*)0;
                    int32_t l_2910 = 0x02A9B9ABL;
                    (*l_2743) = func_43((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((2L | 0x87584A8EL) && ((((((safe_sub_func_int16_t_s_s((g_385 , (-1L)), ((void*)0 == l_2847))) || (safe_sub_func_int8_t_s_s((l_2850 & (0x14E2L != (l_2853 &= (safe_rshift_func_uint16_t_u_s(((0xEEL >= l_2850) , (*l_2281)), 15))))), l_2760.f1))) , 1L) <= l_2850) < 0xE89C7420L) && l_2850)), l_2763)), (*g_493))), p_37, (**l_2594), (*l_2281), l_2850);
                    l_2860--;
                    if ((safe_sub_func_int64_t_s_s(((((void*)0 != l_2865[2]) ^ ((((((((((l_2867 <= (((*g_1603) = ((*l_2331) = ((l_2859 >= (safe_mod_func_int16_t_s_s((l_2870 , (safe_rshift_func_int8_t_s_s((((((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((*l_2281) = 0xCB589C73L), (0xB507B1DAF0E84B20LL == ((*g_1603) , (((safe_div_func_uint64_t_u_u(((l_2885 , l_2886) > 6L), l_2760.f1)) | (**l_2743)) >= l_2887[1][1][2]))))), l_2859)), 0x0FE8L)), 6)) & (**l_2743)), (**l_2743))) , l_2888) , 0x971CBAC8L) != 0x929C8E6BL) > (**l_2743)), 4))), (**l_2743)))) < (**l_2743)))) && (**l_2743))) || 1UL) <= (-10L)) , l_2853) , (*l_2281)) && (**l_2743)) >= (**l_2743)) <= l_2850) == (*g_340)) >= 1UL)) && 0xF3L), l_2888.f0)))
                    {
                        uint64_t l_2890 = 18446744073709551615UL;
                        uint16_t ****l_2898 = &g_1623[1];
                        uint16_t *****l_2899 = &l_2898;
                        uint16_t *****l_2903 = (void*)0;
                        uint16_t *****l_2904[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_2904[i] = &g_2277;
                        (*l_2743) = func_43(((***g_1202) = 0L), l_2889, (***g_2655), (**l_2743), (**l_2743));
                        g_64 |= (*g_340);
                        (*g_340) = (((((**g_2722) <= l_2890) || ((0x01L != (((safe_sub_func_uint8_t_u_u((+l_2859), ((l_2857 = ((((**g_1203) = (0x729EL >= (safe_sub_func_int16_t_s_s((((**l_2743) >= ((safe_mul_func_uint16_t_u_u((((*l_2899) = l_2898) == (l_2905 = ((l_2890 , (safe_mod_func_int32_t_s_s(((((**l_2743) , (**l_2743)) < 0xA8A8L) & (*l_2281)), l_2890))) , l_2902))), 1L)) <= l_2855)) ^ (*g_340)), (*l_2281))))) ^ l_2890) || (**l_2743))) && l_2890))) < (*l_2281)) , 254UL)) , 0xBB44L)) >= 0x761BL) , 7L);
                        (*l_2281) |= ((**l_2743) > 0x12BEL);
                    }
                    else
                    {
                        int32_t l_2906[4][3] = {{0x2AA2DECFL,0xA7E3D7DBL,0x2AA2DECFL},{0x2AA2DECFL,0xA7E3D7DBL,0x2AA2DECFL},{0x2AA2DECFL,0xA7E3D7DBL,0x2AA2DECFL},{0x2AA2DECFL,0xA7E3D7DBL,0x2AA2DECFL}};
                        int i, j;
                        ++l_2907;
                        l_2911--;
                    }
                }
            }
            for (g_862 = 9; (g_862 >= 0); g_862 -= 1)
            {
                uint16_t **l_2918[10];
                int32_t l_2919 = 0xE58EC384L;
                int32_t l_2942 = 0x90C78FF6L;
                int32_t l_2950 = 0x53E68F18L;
                int32_t l_2951 = (-7L);
                struct S0 l_2957 = {0,22};
                int32_t l_2974 = 0x5EE837E1L;
                union U2 l_2993[5][4] = {{{0L},{0x6A30L},{-1L},{-1L}},{{0xD233L},{0xD233L},{0L},{-1L}},{{0x2A47L},{0x6A30L},{0x2A47L},{0L}},{{0x2A47L},{0L},{0L},{0x2A47L}},{{0xD233L},{0L},{-1L},{0L}}};
                int32_t l_2997 = 1L;
                int32_t l_2999 = (-1L);
                int32_t l_3000 = 0xAF3E3D21L;
                int32_t l_3002 = (-1L);
                int32_t l_3003 = 1L;
                int32_t l_3004 = (-6L);
                int32_t l_3006 = 8L;
                int32_t l_3007 = 0x4FC1C87CL;
                int32_t l_3008 = 0xB061B2B8L;
                int32_t l_3009[3];
                uint16_t l_3010 = 65532UL;
                int i, j;
                for (i = 0; i < 10; i++)
                    l_2918[i] = &l_2229;
                for (i = 0; i < 3; i++)
                    l_3009[i] = (-7L);
                for (g_2321 = 0; (g_2321 <= 5); g_2321 += 1)
                {
                    int32_t l_2920 = 2L;
                    uint16_t **l_2936 = &l_2229;
                    union U2 **l_2941 = &g_2246;
                    int32_t l_2944 = (-8L);
                    int32_t l_2947 = 0x50CC55F6L;
                    int8_t l_2948 = (-9L);
                    int32_t l_2949 = (-1L);
                    int32_t l_2952 = (-3L);
                    int32_t l_2953[2][9][4] = {{{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)}},{{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)}}};
                    union U2 ****l_2980 = &g_2655;
                    union U2 ****l_2981 = &l_2979[0][4];
                    int64_t ***l_2989 = &l_2596;
                    int8_t ** const * const l_3020 = (void*)0;
                    int i, j, k;
                    if (((*g_340) = ((((***l_2689) , (safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((void*)0 != l_2918[9]), l_2919)), ((l_2920 , (safe_mul_func_uint8_t_u_u((!l_2920), (((*l_2777)--) > (safe_div_func_uint32_t_u_u((((*l_2281) = (*l_2281)) && (((+(((*l_2281) = l_2919) <= (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((l_2920 && l_2920) , (*g_1603)), l_2933)), l_2920)))) | l_2907) != (-1L))), l_2920)))))) , 0x1FAD9FAD15B515FCLL)))) <= l_2919) <= 0xA5L)))
                    {
                        union U2 * const l_2939 = &g_2940;
                        union U2 * const *l_2938 = &l_2939;
                        union U2 * const **l_2937 = &l_2938;
                        int32_t l_2943 = (-1L);
                        int32_t l_2945 = (-1L);
                        int32_t l_2946[3][8][4] = {{{0L,1L,(-8L),0x96083651L},{0xA85D9AF9L,0x4A6BD6E9L,1L,1L},{(-5L),(-5L),0L,0x67BD2ACDL},{0L,1L,1L,7L},{1L,1L,(-1L),1L},{0xFA6BE576L,1L,0x38B46B7BL,7L},{1L,1L,(-10L),0x67BD2ACDL},{1L,(-5L),0xE10132C2L,1L}},{{0x852E6BF8L,0x4A6BD6E9L,1L,0x96083651L},{0x19A1F673L,1L,0x4A6BD6E9L,(-10L)},{0x9FFBECCFL,0xBF9BE30AL,1L,1L},{0x7EAD8C0CL,0x67BD2ACDL,0xF727F783L,0x19A1F673L},{1L,0x852E6BF8L,0x9FFBECCFL,0x900EBA8BL},{0L,0L,0xE8C1CD40L,0L},{0x38B46B7BL,0L,0x7EAD8C0CL,0xE10132C2L},{0x128F7A46L,(-10L),(-5L),0L}},{{(-8L),1L,0xC873DD10L,0L},{(-8L),0L,(-5L),0xE8C1CD40L},{0xFE11B0ADL,0x852E6BF8L,0x60F0E3ADL,0x7EAD8C0CL},{0x343434F4L,0x38B46B7BL,0x6A319F4EL,0L},{(-5L),1L,0L,1L},{0xE8C1CD40L,0x343434F4L,0xD8E3025EL,(-1L)},{0x60F0E3ADL,7L,0x7EAD8C0CL,0xFE11B0ADL},{0L,0x55EE2F8EL,1L,1L}}};
                        int i, j, k;
                        (*l_2281) = (safe_add_func_uint32_t_u_u((l_2936 == (void*)0), (((*l_2937) = (*g_2655)) != l_2941)));
                        l_2954++;
                        return l_2957;
                    }
                    else
                    {
                        uint32_t l_2958[9] = {0xC9320FEAL,1UL,1UL,0xC9320FEAL,1UL,1UL,0xC9320FEAL,1UL,1UL};
                        const uint16_t **l_2969 = &g_493;
                        int i;
                        if (l_2953[0][2][2])
                            break;
                        if (l_2958[2])
                            continue;
                        l_2974 ^= (g_1182 &= (((safe_lshift_func_uint16_t_u_s((*l_2281), 0)) != ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(l_2944, (*g_340))), 2)) || 1L)) >= ((safe_lshift_func_uint16_t_u_s((--(*l_2777)), (l_2918[6] != l_2969))) != (((*g_1603) > (safe_mul_func_uint16_t_u_u(l_2919, (safe_lshift_func_uint8_t_u_u((l_2958[4] && l_2951), l_2942))))) , l_2950))));
                    }
                    if ((safe_mod_func_int8_t_s_s(((0xCDB5CEF8L ^ (safe_sub_func_int64_t_s_s((l_2944 ^= ((((*l_2981) = ((*l_2980) = l_2979[0][0])) != (void*)0) , l_2950)), (((safe_lshift_func_int16_t_s_s((l_2950 && ((safe_add_func_uint16_t_u_u(((l_2954 , &l_2400) != (l_2992 = (((func_53((l_2670[5] >= (safe_mul_func_int16_t_s_s((l_2988 != l_2989), 0x4FF6L)))) , l_2947) , l_2947) , g_2990))), l_2957.f0)) ^ (*g_493))), 6)) , l_2993[3][3]) , 2UL)))) || l_2950), l_2957.f1)))
                    {
                        int16_t l_2994 = 0x8FCAL;
                        int32_t l_2995[1];
                        int16_t l_2996 = 0x6CFCL;
                        int16_t l_2998 = 0L;
                        uint32_t l_3013 = 4UL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_2995[i] = 1L;
                        --l_3010;
                        if (l_2995[0])
                            continue;
                        ++l_3013;
                    }
                    else
                    {
                        int32_t l_3027 = 0x3F0AF176L;
                        int32_t l_3031 = 0x5372C2E6L;
                        int32_t l_3032 = 0x7E80FB8EL;
                        int32_t l_3033 = 1L;
                        uint32_t l_3034 = 0x43D223C5L;
                        union U2 *** const *l_3038 = &l_2979[1][6];
                        union U2 *** const **l_3037 = &l_3038;
                        (*g_340) |= 0L;
                        (*l_2281) = (l_2942 != (&g_866 == (((~((safe_add_func_uint64_t_u_u((!(l_3020 == (void*)0)), (safe_add_func_int16_t_s_s(l_2947, (safe_lshift_func_uint16_t_u_s(((((*g_1204) = ((safe_add_func_uint8_t_u_u((0x1E8F3411L & l_3027), 0x5DL)) == (safe_mul_func_int8_t_s_s((l_2979[0][0] == (void*)0), l_3027)))) , 0xAB40E099L) , l_3030), l_2952)))))) ^ l_2944)) > (*l_2281)) , &g_866)));
                        l_3034--;
                        l_2953[1][2][3] ^= ((l_3039 = l_3037) != l_3043[9]);
                    }
                    for (l_2483 = 1; (l_2483 <= 9); l_2483 += 1)
                    {
                        (*l_2281) = 1L;
                    }
                }
                (*l_2281) = l_3045[2];
            }
            (*l_2281) = (l_3048[4][3][4] < ((safe_mul_func_int8_t_s_s(0L, (0x1F53BA4DL > (l_2670[6] & (safe_add_func_uint8_t_u_u((((l_3071[3][0] = ((***g_1662) = ((((**l_2680) = (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((func_53(l_3057) , ((0xE7L == (((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((*l_2331) = ((safe_sub_func_uint64_t_u_u(((!l_3065) , (safe_mul_func_int16_t_s_s(((((*l_3068) = ((**l_2594) , (*l_2281))) | g_3069) <= l_2798), l_3070[1][0]))), (*g_2723))) ^ 0x0D62A1CBC468F8DFLL)), 0x3BL)), (*g_340))) | 0x0FD3L) | (*g_2723))) ^ 65535UL)), 4)) , (*g_493)), (*l_2281)))) & 8UL) , (*g_1204)))) <= l_3072) != 0xFD24L), 0xEBL)))))) >= (*g_340)));
            ++l_3074[0];
        }
    }
    else
    {
        uint8_t l_3082 = 6UL;
        uint32_t **l_3085 = &g_1984[3][4][0];
        uint32_t l_3086 = 0x609BCC75L;
        int16_t *l_3110 = &g_132;
        int32_t l_3111 = 0xD78D0B61L;
lbl_3093:
        (*g_340) ^= ((safe_add_func_uint64_t_u_u(((((!(*l_2281)) , (*g_2246)) , 0x4DL) <= (safe_add_func_uint8_t_u_u((l_3082 , (*l_2281)), (((l_2374 , (++(*l_2331))) && 0x8DL) >= ((l_3085 != (void*)0) , 5UL))))), l_3086)) != l_3082);
        for (g_3001 = 7; (g_3001 <= (-11)); g_3001 = safe_sub_func_int32_t_s_s(g_3001, 9))
        {
            int8_t l_3100 = (-4L);
            struct S0 l_3112 = {0,107};
            for (l_2627 = 19; (l_2627 <= 1); l_2627 = safe_sub_func_int64_t_s_s(l_2627, 6))
            {
                uint32_t l_3108 = 1UL;
                int16_t *l_3109[1][7][1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_3109[i][j][k] = &g_3001;
                    }
                }
                for (l_3057 = 12; (l_3057 == 19); l_3057++)
                {
                    const uint32_t l_3096 = 4294967288UL;
                    int64_t *l_3097 = &g_852;
                    int64_t *l_3101 = &g_385;
                    if (g_2169)
                        goto lbl_3093;
                    (*l_2281) = ((2UL | ((**g_838) , (((*l_3097) = (safe_div_func_uint64_t_u_u(l_3096, l_3096))) != l_3086))) , (safe_lshift_func_int8_t_s_s((((*l_3101) = ((*l_3097) |= l_3100)) == 0xFEBED19445F74E64LL), (l_3100 >= (safe_mod_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((((*g_340) = (-9L)) || (*l_2281)) >= 65526UL), 0)), l_3108)) , l_3109[0][4][0]) == l_3109[0][4][0]), l_3086))))));
                }
                if ((l_3110 != (l_3109[0][1][0] = ((*l_2680) = l_3109[0][3][0]))))
                {
                    (*l_2281) &= 1L;
                    l_3111 = (-1L);
                    for (g_1182 = 0; g_1182 < 5; g_1182 += 1)
                    {
                        g_98[g_1182] = 8UL;
                    }
                    (*g_340) ^= l_3108;
                }
                else
                {
                    (*l_2281) |= (&g_1602[9] != (void*)0);
                }
                return l_3112;
            }
            if ((*l_2281))
                continue;
        }
    }
    l_3117[0] = (void*)0;
    (*g_340) = ((0xFDB35A9CL == (safe_lshift_func_int8_t_s_u(((((safe_div_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((*l_2281), ((((*l_3126) = &l_2281) == (g_3131 = &g_340)) && (((((*g_1603) = ((*l_3128) = (safe_rshift_func_int8_t_s_s((0L & (*l_3128)), ((***g_1202) = ((***l_3126) | (safe_rshift_func_int16_t_s_u((-1L), (safe_sub_func_int64_t_s_s((l_2681 != l_2681), (-7L))))))))))) && (****g_1661)) | 255UL) && 0xA560D338L)))) & (*g_340)), (*l_2281))) < (**g_2722)) <= 0x936CL) || (*l_2281)), (*l_2281)))) < l_3138);
    return l_3139;
}







static uint8_t func_41(int32_t * p_42)
{
    int32_t l_1523[2][10] = {{0xB0FF2E95L,0xDF11E1B3L,0xDF11E1B3L,0xB0FF2E95L,0xDF11E1B3L,0xDF11E1B3L,0xB0FF2E95L,0xDF11E1B3L,0xDF11E1B3L,0xB0FF2E95L},{0xDF11E1B3L,0xB0FF2E95L,0xDF11E1B3L,0xDF11E1B3L,0xB0FF2E95L,0xDF11E1B3L,0xDF11E1B3L,0xB0FF2E95L,0xDF11E1B3L,0xDF11E1B3L}};
    int32_t l_1524 = 0x5EF2D6F4L;
    uint64_t *l_1533 = &g_395[6][1][0];
    uint64_t l_1534 = 0xD5C71BCA8DC20D3DLL;
    union U2 *l_1535 = &g_1247;
    int32_t l_1536 = 1L;
    uint16_t *l_1614 = &g_289[6];
    uint16_t **l_1613 = &l_1614;
    int32_t l_1681 = (-10L);
    uint64_t l_1712 = 0xDF05966E19AFF1C9LL;
    int8_t **l_1789 = (void*)0;
    int32_t l_1802 = 0xFE9C83BFL;
    int32_t l_1803 = 0L;
    int32_t l_1807 = 0x63CF2661L;
    int32_t l_1810[1][8][10] = {{{(-4L),0x8697EBA8L,0x629D1948L,(-1L),1L,0x629D1948L,0x9B9D7B47L,0L,(-9L),1L},{1L,1L,0x71B084B6L,(-1L),0x89E9B856L,0x6DFB259CL,1L,0x465BF156L,0x465BF156L,1L},{(-1L),0L,0x89E9B856L,0x89E9B856L,0L,(-1L),0L,(-4L),1L,0x465BF156L},{0x9B9D7B47L,(-4L),0x629D1948L,1L,0x8697EBA8L,1L,0x6768FD60L,1L,1L,1L},{0x9B9D7B47L,1L,0x6DFB259CL,0x9B9D7B47L,0x2C5198EAL,(-1L),1L,(-1L),0x2C5198EAL,0x9B9D7B47L},{(-1L),1L,(-1L),0x2C5198EAL,0x9B9D7B47L,0x6DFB259CL,1L,0x9B9D7B47L,0x89E9B856L,0x465BF156L},{1L,0x6768FD60L,1L,0x8697EBA8L,1L,0x629D1948L,(-4L),0x9B9D7B47L,1L,(-1L)},{(-4L),0L,(-1L),0L,0x89E9B856L,0x89E9B856L,0L,(-1L),0L,(-4L)}}};
    int32_t *l_1903 = (void*)0;
    uint8_t **l_1908 = &g_1603;
    struct S0 l_1935 = {1,75};
    uint32_t l_1959 = 0x4AC3328CL;
    int8_t l_1970 = 1L;
    int32_t l_1974[8] = {0x8894447EL,0x3599D295L,0x8894447EL,0x8894447EL,0x3599D295L,0x8894447EL,0x8894447EL,0x3599D295L};
    const int8_t *l_2056 = &g_91;
    const int8_t **l_2055 = &l_2056;
    int8_t l_2096 = 1L;
    int32_t l_2103[6][3] = {{0xA9518EAAL,0L,0L},{0xA9518EAAL,0L,0L},{0xA9518EAAL,0L,0L},{0xA9518EAAL,0L,0L},{0xA9518EAAL,0L,0L},{0xA9518EAAL,0L,0L}};
    int32_t l_2108[2];
    int16_t l_2115 = 0xFCC1L;
    uint64_t *l_2116 = (void*)0;
    uint64_t *l_2117[2][9] = {{&g_374,&l_1712,&l_1712,&g_374,&l_1712,&l_1712,&g_374,&l_1712,&l_1712},{&l_1534,&l_1534,&l_1534,&l_1534,&l_1534,&l_1534,&l_1534,&l_1534,&l_1534}};
    struct S1 ***l_2139 = &g_838;
    struct S1 **l_2154 = &g_839;
    int8_t l_2166 = 0x33L;
    uint32_t l_2207 = 18446744073709551613UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2108[i] = (-7L);
    (*g_340) = func_57(((func_62(&g_3) && ((safe_sub_func_uint64_t_u_u(((l_1523[1][7] = 5UL) <= (g_1013[0] = (l_1524 && l_1524))), 0xEAD0CE41CE11E619LL)) | (safe_div_func_uint16_t_u_u((((safe_div_func_int64_t_s_s((g_91 != ((((safe_mul_func_int8_t_s_s((-1L), (safe_sub_func_uint64_t_u_u(((*l_1533) = 0xEE9C480E3AE88AE9LL), l_1534)))) | l_1524) , &g_79) != l_1535)), 0xD505FCBEF5E436C3LL)) , 0xC9L) != 0x1DL), l_1534)))) , l_1523[1][2]), l_1534, p_42, l_1536);
    for (g_311 = 1; (g_311 == 26); ++g_311)
    {
        int64_t l_1615 = 0x7AB7EB2DD98BDB34LL;
        union U2 l_1618 = {0x8BACL};
        int32_t *l_1625 = (void*)0;
        uint16_t l_1639 = 0xB849L;
        int32_t l_1647 = 1L;
        int8_t ***l_1680 = &g_175;
        uint32_t l_1728 = 0x22A6A424L;
        int32_t l_1763 = (-1L);
        int8_t **l_1792 = &g_1485;
        int32_t l_1801 = 1L;
        int32_t l_1804 = 0xD0A4C883L;
        int32_t l_1805 = 0x5F115F1FL;
        int32_t l_1808 = (-1L);
        int32_t l_1809[1][7][2] = {{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}}};
        uint16_t l_1837 = 7UL;
        const struct S0 ***l_1843 = (void*)0;
        uint16_t l_1850 = 0UL;
        uint8_t l_1927 = 0x4BL;
        int64_t ** const l_1928 = &g_656[8][3][2];
        int32_t l_1969 = 7L;
        int16_t l_1973 = (-1L);
        int64_t l_2076 = 0x2FD98A6692B2456BLL;
        int i, j, k;
        for (g_374 = (-26); (g_374 >= 21); g_374++)
        {
            uint64_t l_1597 = 0x1583B3A5431DBB81LL;
            uint8_t **l_1604 = &g_1603;
            uint8_t ***l_1605 = &l_1604;
            uint16_t *l_1611 = &g_289[2];
            uint16_t **l_1610 = &l_1611;
            struct S1 l_1612 = {5866,920,0};
            int32_t l_1799 = 0xE7006698L;
            int32_t l_1800[3][2][1] = {{{0x083FCB13L},{0x271EFF71L}},{{0x083FCB13L},{0x271EFF71L}},{{0x083FCB13L},{0x271EFF71L}}};
            uint16_t l_1833 = 0xC8FAL;
            int16_t l_1851 = 0xCA5EL;
            uint32_t l_1898 = 0x1527E6C4L;
            union U2 l_1907 = {0x2DDBL};
            int32_t l_1929 = 0x0B33F3D7L;
            int32_t l_1960[4][9] = {{0x3CAEB672L,0x8C0740DBL,0x8C0740DBL,0x3CAEB672L,0x3CAEB672L,0x8C0740DBL,0x8C0740DBL,0x3CAEB672L,0x3CAEB672L},{0xD3CCAE97L,(-1L),0xD3CCAE97L,(-1L),0xD3CCAE97L,(-1L),0xD3CCAE97L,(-1L),0xD3CCAE97L},{0x3CAEB672L,0x3CAEB672L,0x8C0740DBL,0x8C0740DBL,0x3CAEB672L,0x3CAEB672L,0x8C0740DBL,0x8C0740DBL,0x3CAEB672L},{0xA3BE5468L,(-1L),0xA3BE5468L,(-1L),0xA3BE5468L,(-1L),0xA3BE5468L,(-1L),0xA3BE5468L}};
            int32_t l_1968 = 0xF8B658F5L;
            int8_t l_1972 = 0x1EL;
            struct S0 l_2039 = {0,37};
            int32_t l_2054 = 0xDA0EF54CL;
            uint64_t l_2073 = 18446744073709551614UL;
            int32_t **l_2079 = (void*)0;
            int32_t *** const l_2078 = &l_2079;
            int i, j, k;
        }
    }
    if ((safe_mul_func_uint16_t_u_u(l_1803, (safe_mod_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((l_2096 | ((l_1810[0][5][9] = ((*l_1533) = (safe_add_func_int64_t_s_s(6L, ((((safe_div_func_int32_t_s_s(((*g_340) = (safe_mul_func_uint16_t_u_u(l_2103[5][0], (safe_div_func_uint32_t_u_u(l_1681, (safe_add_func_int32_t_s_s((l_2108[0] ^ (safe_add_func_int8_t_s_s((((l_1810[0][5][9] < ((l_1807 == (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_1935.f0, l_1802)), l_1974[5]))) ^ 0L)) != 18446744073709551606UL) | l_1803), l_1712))), l_2115))))))), 0xF9E1F3ECL)) <= (-10L)) || (*p_42)) <= (***g_1202)))))) == 0L)), 18446744073709551615UL)), l_1712)))))
    {
        struct S1 l_2129[6] = {{-5858,1783,1},{-5858,1783,1},{-5858,1783,1},{-5858,1783,1},{-5858,1783,1},{-5858,1783,1}};
        const int64_t l_2144 = 0xCBD6CD538770CE40LL;
        uint32_t l_2145 = 0UL;
        uint32_t l_2146 = 4294967292UL;
        int16_t * const l_2151[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_2164[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int8_t l_2167 = 1L;
        int i;
        for (g_311 = 0; (g_311 < 13); g_311 = safe_add_func_int32_t_s_s(g_311, 7))
        {
            uint32_t l_2128 = 1UL;
            struct S0 l_2138 = {0,124};
            int32_t *l_2140 = (void*)0;
            int32_t *l_2141 = (void*)0;
            int32_t *l_2142[3];
            int64_t *l_2143 = &g_1437[0][6];
            int i;
            for (i = 0; i < 3; i++)
                l_2142[i] = (void*)0;
            l_2146 = (g_87.f0 = (((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((((safe_sub_func_int64_t_s_s(l_2128, (255UL <= (l_2129[5] , l_2129[5].f1)))) && l_2129[5].f0) | (safe_mul_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((((*l_2143) |= (safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((*p_42), (l_2138 , (((g_64 &= ((*g_340) = ((&g_838 != l_2139) && l_2128))) < (*p_42)) || l_2129[5].f1)))), l_2129[5].f0))) & l_2129[5].f2), l_2129[5].f0)) && l_2129[5].f0), l_2129[5].f0))), 4294967294UL)) ^ l_2144), 0x4688D239L)), 0x99L)) , l_2145) >= (*p_42)));
            (*g_340) = 1L;
        }
        for (l_2115 = 0; (l_2115 <= (-5)); --l_2115)
        {
            int8_t l_2149 = 0L;
            int32_t l_2150 = 0L;
            const struct S1 *l_2156 = (void*)0;
            const struct S1 **l_2155[4] = {&l_2156,&l_2156,&l_2156,&l_2156};
            int32_t *l_2157 = &l_1810[0][5][9];
            int32_t *l_2158 = (void*)0;
            int32_t *l_2159 = (void*)0;
            int32_t *l_2160 = &l_1807;
            int32_t *l_2161 = &l_1803;
            int32_t *l_2162 = &l_1802;
            int32_t *l_2163[2];
            int8_t l_2165[3][2] = {{0L,0L},{0L,0L},{0L,0L}};
            int8_t l_2168[3];
            uint32_t l_2170 = 0xC50B8361L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_2163[i] = &l_2108[0];
            for (i = 0; i < 3; i++)
                l_2168[i] = 1L;
            (*g_340) &= ((l_2129[5].f2 | (((l_2149 = 4294967295UL) && (*p_42)) >= (((func_53(l_2150) , ((l_2129[5].f0 < ((l_2151[4] != (void*)0) , (safe_rshift_func_int16_t_s_s(((&g_1247 != &g_1247) && l_2150), 14)))) , l_2154)) != l_2155[1]) && l_2144))) && l_2149);
            ++l_2170;
            (*l_2162) &= ((((((0x7AC20A80L <= (safe_add_func_uint64_t_u_u((*l_2161), g_5))) > g_1013[0]) , (safe_div_func_int8_t_s_s((func_53((((safe_sub_func_uint16_t_u_u(l_2164[2], (0xB8L | 0UL))) > ((~(*l_2161)) == (*l_2157))) , l_2164[2])) , (***g_1662)), l_2129[5].f2))) == 18446744073709551615UL) , 0x6C97C2B18C892F93LL) ^ 0UL);
            if ((*l_2157))
                continue;
        }
    }
    else
    {
        const int64_t l_2182 = 5L;
        uint64_t l_2208 = 0xA39AE860EE8D33E7LL;
        uint32_t *l_2209 = &g_259[8][7];
        uint8_t *l_2210[3];
        int32_t l_2211[1];
        int32_t l_2212[3][9][9] = {{{0x92C9DD34L,0xCDA4A6FBL,(-1L),0x6D47928FL,1L,0L,0x92C9DD34L,0L,1L},{0L,0xD78DB7E0L,0xD78DB7E0L,0L,1L,(-4L),0L,(-4L),1L},{0x92C9DD34L,0xCDA4A6FBL,(-1L),0x6D47928FL,1L,0L,0x92C9DD34L,0L,1L},{0L,0xD78DB7E0L,0xD78DB7E0L,0L,1L,(-4L),0L,(-4L),1L},{0x92C9DD34L,0xCDA4A6FBL,(-1L),0x6D47928FL,1L,0L,0x92C9DD34L,0L,1L},{0L,0xD78DB7E0L,0xD78DB7E0L,0L,1L,(-4L),0L,(-4L),1L},{0x92C9DD34L,0xCDA4A6FBL,(-1L),0x6D47928FL,1L,0L,0x92C9DD34L,0L,1L},{0L,0xD78DB7E0L,0xD78DB7E0L,0L,1L,(-4L),0L,(-4L),1L},{0x92C9DD34L,0xCDA4A6FBL,(-1L),0x6D47928FL,1L,0L,0x92C9DD34L,0L,1L}},{{0L,0xD78DB7E0L,0xD78DB7E0L,0L,1L,(-4L),0L,(-4L),1L},{0x92C9DD34L,0xCDA4A6FBL,(-1L),0x6D47928FL,1L,0L,0x92C9DD34L,0L,1L},{0L,0xD78DB7E0L,0xD78DB7E0L,0L,1L,(-4L),0L,(-4L),1L},{0x92C9DD34L,0xCDA4A6FBL,(-1L),0x6D47928FL,1L,0L,0x92C9DD34L,0L,1L},{0L,0x1F191750L,0x1F191750L,0xD78DB7E0L,9L,0x68F86267L,0xD78DB7E0L,0x68F86267L,9L},{(-1L),(-1L),0x874A5552L,0xCDA4A6FBL,0x1B44B642L,0x91D30ED4L,(-1L),0x91D30ED4L,0x1B44B642L},{0xD78DB7E0L,0x1F191750L,0x1F191750L,0xD78DB7E0L,9L,0x68F86267L,0xD78DB7E0L,0x68F86267L,9L},{(-1L),(-1L),0x874A5552L,0xCDA4A6FBL,0x1B44B642L,0x91D30ED4L,(-1L),0x91D30ED4L,0x1B44B642L},{0xD78DB7E0L,0x1F191750L,0x1F191750L,0xD78DB7E0L,9L,0x68F86267L,0xD78DB7E0L,0x68F86267L,9L}},{{(-1L),(-1L),0x874A5552L,0xCDA4A6FBL,0x1B44B642L,0x91D30ED4L,(-1L),0x91D30ED4L,0x1B44B642L},{0xD78DB7E0L,0x1F191750L,0x1F191750L,0xD78DB7E0L,9L,0x68F86267L,0xD78DB7E0L,0x68F86267L,9L},{(-1L),(-1L),0x874A5552L,0xCDA4A6FBL,0x1B44B642L,0x91D30ED4L,(-1L),0x91D30ED4L,0x1B44B642L},{0xD78DB7E0L,0x1F191750L,0x1F191750L,0xD78DB7E0L,9L,0x68F86267L,0xD78DB7E0L,0x68F86267L,9L},{(-1L),(-1L),0x874A5552L,0xCDA4A6FBL,0x1B44B642L,0x91D30ED4L,(-1L),0x91D30ED4L,0x1B44B642L},{0xD78DB7E0L,0x1F191750L,0x1F191750L,0xD78DB7E0L,9L,0x68F86267L,0xD78DB7E0L,0x68F86267L,9L},{(-1L),(-1L),0x874A5552L,0xCDA4A6FBL,0x1B44B642L,0x91D30ED4L,(-1L),0x91D30ED4L,0x1B44B642L},{0xD78DB7E0L,0x1F191750L,0x1F191750L,0xD78DB7E0L,9L,0x68F86267L,0xD78DB7E0L,0x68F86267L,9L},{(-1L),(-1L),0x874A5552L,0xCDA4A6FBL,0x1B44B642L,0x91D30ED4L,(-1L),0x91D30ED4L,0x1B44B642L}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2210[i] = &g_205;
        for (i = 0; i < 1; i++)
            l_2211[i] = 0x6E2EE972L;
        (*g_340) |= (safe_div_func_int8_t_s_s(l_2182, (safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((l_2212[0][0][5] = ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((l_2211[0] = ((g_139 , l_2182) < (safe_sub_func_uint32_t_u_u(((*l_2209) |= ((safe_rshift_func_uint8_t_u_u((1UL != ((safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s(((0x2CL && l_2182) , (l_2182 != ((**l_1613) = (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((0x0FL & (safe_div_func_int32_t_s_s(((++(*g_1603)) | l_2182), 0xCBA7A3D7L))) || l_1534) < l_2207), l_1959)), 1))))), l_2208)), 0xCB5C8199CC8C3994LL)) < 0x084A9EC0L)), l_1523[0][1])) & l_2208)), 0x58BFB5A6L)))), 0L)) , (**g_1203)), 0xB6L)) == l_2182)), l_2182)), 0))));
    }
    return l_2108[0];
}







static int32_t * func_43(int8_t p_44, int32_t * p_45, union U2 p_46, uint32_t p_47, uint16_t p_48)
{
    int32_t *l_52 = &g_3;
    int32_t **l_51 = &l_52;
    int32_t l_56 = 2L;
    (*l_51) = (void*)0;
    l_56 = (func_53(g_3) , g_3);
    return &g_3;
}







static struct S0 func_53(int16_t p_54)
{
    struct S0 l_55[7] = {{0,81},{0,81},{0,81},{0,81},{0,81},{0,81},{0,81}};
    int i;
    return l_55[6];
}







static int32_t func_57(uint64_t p_58, uint8_t p_59, uint32_t * p_60, uint32_t p_61)
{
    uint8_t **l_1539 = (void*)0;
    int32_t l_1540 = (-3L);
    int64_t ***l_1559 = &g_655;
    uint8_t *l_1560 = &g_362;
    int64_t *l_1561 = &g_233[2][0];
    uint32_t *l_1562 = (void*)0;
    uint32_t *l_1563[7][1] = {{&g_441},{(void*)0},{&g_441},{(void*)0},{&g_441},{(void*)0},{&g_441}};
    int32_t l_1564 = 0xC4F919A0L;
    struct S1 * const *l_1573 = (void*)0;
    struct S1 * const **l_1572 = &l_1573;
    uint16_t ***l_1574 = &g_271;
    const int64_t ***l_1577 = &g_1575;
    struct S1 **l_1578 = &g_839;
    int32_t *l_1579 = &g_64;
    int i, j;
    l_1564 |= ((((g_259[0][5] = ((((safe_mul_func_int16_t_s_s((l_1539 == (void*)0), l_1540)) < (((safe_div_func_int32_t_s_s(1L, ((safe_div_func_int64_t_s_s(((*l_1561) = ((safe_sub_func_uint16_t_u_u(0x1EC8L, (((*l_1560) = (safe_lshift_func_int16_t_s_u((((-1L) == l_1540) <= ((safe_lshift_func_int16_t_s_u(((**g_838) , (((*l_1559) = ((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s((*g_340), (*p_60))) & (*p_60)) != 0x7B7BL) ^ l_1540), p_59)), 0L)) , 4294967294UL), 3L)) , (void*)0)) == (void*)0)), 14)) <= l_1540)), 14))) > 0x08L))) != g_139)), 9L)) & l_1540))) ^ (*p_60)) < p_61)) && 2L) , l_1540)) | g_234) != l_1540) >= g_289[4]);
    for (l_1564 = (-27); (l_1564 == (-22)); l_1564++)
    {
        int64_t l_1567[8][2] = {{9L,0x2F0DC60BAD2D68ACLL},{0xCB3F1E385DA80C2FLL,9L},{0xFFA6E83193ECD23FLL,0xFFA6E83193ECD23FLL},{0xFFA6E83193ECD23FLL,9L},{0xCB3F1E385DA80C2FLL,0x2F0DC60BAD2D68ACLL},{9L,0x2F0DC60BAD2D68ACLL},{0xCB3F1E385DA80C2FLL,9L},{0xFFA6E83193ECD23FLL,0xFFA6E83193ECD23FLL}};
        int i, j;
        (*g_340) |= (p_59 || (((*l_1560) = g_395[0][4][0]) < ((l_1540 = (p_61 = g_446)) ^ l_1567[1][1])));
    }
    (*l_1579) |= ((*g_340) |= (((*l_1561) = (safe_lshift_func_uint8_t_u_u((((((safe_mod_func_int16_t_s_s(((-1L) >= (((*l_1572) = &g_839) != (l_1578 = ((((l_1574 != (((*p_60) > l_1564) , l_1574)) < p_59) == (((*l_1577) = g_1575) != (void*)0)) , l_1578)))), l_1540)) == 0x55D0L) < g_374) == 0x6F7EL) , g_139), 2))) < 0x973C7A0F21DE8F01LL));
    return p_61;
}







static uint64_t func_62(int32_t * p_63)
{
    union U2 l_78[2] = {{1L},{1L}};
    int32_t l_105 = 0L;
    int32_t l_107[2];
    int8_t *l_121 = &g_91;
    uint16_t *l_135 = &g_134;
    int32_t l_146 = 1L;
    int8_t l_152 = 1L;
    uint64_t l_154[6];
    int32_t *l_213 = &l_107[1];
    int32_t l_244 = 0L;
    int32_t l_265 = (-2L);
    uint16_t ***l_272 = &g_271;
    int32_t l_273[5] = {1L,1L,1L,1L,1L};
    int16_t * const l_275[1] = {&g_139};
    int16_t * const * const l_274[8] = {&l_275[0],&l_275[0],&l_275[0],&l_275[0],&l_275[0],&l_275[0],&l_275[0],&l_275[0]};
    uint16_t *l_359 = &g_289[4];
    uint16_t **l_363 = &l_135;
    uint16_t l_397 = 0UL;
    uint16_t l_430 = 0x72DDL;
    struct S1 l_435[7] = {{5789,719,0},{5789,719,0},{5789,719,0},{5789,719,0},{5789,719,0},{5789,719,0},{5789,719,0}};
    uint32_t *l_440 = &g_441;
    int32_t *l_442[9] = {&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3};
    uint8_t *l_443 = &g_205;
    uint64_t *l_444 = &l_154[5];
    uint8_t *l_445[4][8];
    uint8_t l_468 = 0UL;
    const int32_t l_470[7] = {7L,7L,7L,7L,7L,7L,7L};
    const uint16_t * const **l_494 = &g_492[3];
    uint64_t l_520 = 0x8741FD667C65C7EELL;
    struct S1 * const l_524 = &l_435[6];
    int32_t l_598 = 0x47D49B6DL;
    uint32_t l_644 = 0xF03D4337L;
    int64_t *l_654 = (void*)0;
    int64_t **l_653 = &l_654;
    uint64_t l_780 = 18446744073709551615UL;
    uint16_t l_857 = 65535UL;
    uint16_t l_936 = 0xC428L;
    uint32_t l_985 = 18446744073709551615UL;
    int16_t *** const *l_1074 = &g_866;
    int32_t l_1095 = 2L;
    int64_t **l_1102 = &l_654;
    uint32_t l_1114 = 0x27DB0FC2L;
    uint16_t l_1144 = 0UL;
    int8_t l_1156 = 0x51L;
    int16_t l_1174 = 2L;
    int64_t l_1177 = 0x12F60618DD8D71FDLL;
    int8_t ***l_1207 = &g_175;
    uint64_t l_1284 = 0UL;
    int16_t l_1304 = 0x2662L;
    int32_t **l_1314 = &l_213;
    int32_t ***l_1313 = &l_1314;
    int8_t ****l_1325[4][7][1] = {{{&l_1207},{&l_1207},{&l_1207},{&l_1207},{&l_1207},{&l_1207},{&l_1207}},{{&l_1207},{&l_1207},{&l_1207},{&l_1207},{&l_1207},{&l_1207},{&l_1207}},{{&l_1207},{&l_1207},{&l_1207},{&l_1207},{&l_1207},{&l_1207},{&l_1207}},{{&l_1207},{&l_1207},{&l_1207},{&l_1207},{&l_1207},{&l_1207},{&l_1207}}};
    int8_t *****l_1324 = &l_1325[1][6][0];
    int16_t ****l_1429[2][6];
    int16_t *****l_1428 = &l_1429[0][3];
    struct S0 l_1442 = {1,12};
    union U2 **l_1445 = &g_1246;
    int16_t l_1503 = (-5L);
    int8_t l_1504 = 0x78L;
    uint8_t l_1509 = 0x17L;
    uint32_t *l_1514 = &g_98[2];
    uint32_t **l_1513[4][3] = {{(void*)0,&l_1514,(void*)0},{&l_1514,&l_1514,&l_1514},{(void*)0,&l_1514,(void*)0},{&l_1514,&l_1514,&l_1514}};
    int32_t l_1519 = 0x49D9666AL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_107[i] = 0xCCA1794AL;
    for (i = 0; i < 6; i++)
        l_154[i] = 18446744073709551606UL;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
            l_445[i][j] = &g_446;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
            l_1429[i][j] = &g_866;
    }
lbl_279:
    for (g_64 = 0; (g_64 != 19); g_64++)
    {
        uint64_t l_67 = 0xA6575E0AD5834D56LL;
        int32_t *l_70 = (void*)0;
        int32_t *l_71 = &g_72[2];
        int32_t l_103 = 6L;
        int32_t l_106 = 0x19E8F130L;
        int32_t l_108 = 0x5B30FD8BL;
        int32_t l_109 = 0xA886803FL;
        int32_t l_110 = (-1L);
        int32_t l_142 = (-3L);
        int32_t l_144 = 0L;
        int32_t l_145 = (-9L);
        int32_t l_148[5] = {(-5L),(-5L),(-5L),(-5L),(-5L)};
        int32_t l_151 = 0x4EA3BCE0L;
        int32_t l_153[4];
        uint32_t l_169 = 0x288B616AL;
        int8_t *l_202 = &g_91;
        const uint8_t l_243[5] = {2UL,2UL,2UL,2UL,2UL};
        int i;
        for (i = 0; i < 4; i++)
            l_153[i] = 0xFD098787L;
        if (((func_53((g_64 == l_67)) , ((((safe_div_func_int64_t_s_s((g_3 >= ((*l_71) &= (-7L))), (func_73(l_78[0], g_79, g_5, l_67) , g_87.f0))) || l_103) , g_87.f1) ^ 4294967289UL)) <= 1UL))
        {
            int32_t *l_104[4][6][1];
            uint32_t l_111 = 0x9A11D30DL;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_104[i][j][k] = &g_72[4];
                }
            }
            l_111--;
        }
        else
        {
            int8_t **l_122 = &l_121;
            int64_t l_129[4][8][3] = {{{(-1L),0x669497261C4191E1LL,0x9B9DBF79CE2C80CFLL},{0L,0x669497261C4191E1LL,0L},{(-5L),(-1L),0x9B9DBF79CE2C80CFLL},{(-5L),(-5L),9L},{0L,(-1L),9L},{(-1L),0x669497261C4191E1LL,0x9B9DBF79CE2C80CFLL},{0L,0x669497261C4191E1LL,0L},{(-5L),(-1L),0x9B9DBF79CE2C80CFLL}},{{(-5L),(-5L),9L},{0L,(-1L),9L},{(-1L),0x669497261C4191E1LL,0x9B9DBF79CE2C80CFLL},{0L,0x669497261C4191E1LL,0L},{(-5L),(-1L),0x9B9DBF79CE2C80CFLL},{(-5L),(-5L),9L},{0L,(-1L),9L},{(-1L),0x669497261C4191E1LL,0x9B9DBF79CE2C80CFLL}},{{0L,0x669497261C4191E1LL,0L},{(-5L),(-1L),0x9B9DBF79CE2C80CFLL},{(-5L),(-5L),9L},{0L,(-1L),9L},{(-1L),0x669497261C4191E1LL,0x9B9DBF79CE2C80CFLL},{0L,0x669497261C4191E1LL,0L},{(-5L),(-1L),0x9B9DBF79CE2C80CFLL},{(-5L),(-5L),9L}},{{0L,(-1L),9L},{(-1L),0x669497261C4191E1LL,0x9B9DBF79CE2C80CFLL},{0L,0x669497261C4191E1LL,0L},{(-5L),(-1L),0x9B9DBF79CE2C80CFLL},{(-5L),(-5L),9L},{0L,(-1L),9L},{(-1L),0x669497261C4191E1LL,0x9B9DBF79CE2C80CFLL},{0L,0x669497261C4191E1LL,0L}}};
            int16_t *l_130 = (void*)0;
            int16_t *l_131 = &g_132;
            uint16_t *l_133 = &g_134;
            struct S1 l_136 = {-2462,2518,0};
            uint16_t **l_137 = &l_133;
            int16_t *l_138 = &g_139;
            int32_t *l_141[8][6][2] = {{{(void*)0,&g_64},{&g_3,&g_64},{(void*)0,&l_107[0]},{(void*)0,&g_64},{&g_3,&g_64},{(void*)0,&l_107[0]}},{{(void*)0,&g_64},{&g_3,&g_64},{(void*)0,&l_107[0]},{(void*)0,&g_64},{&g_3,&g_64},{(void*)0,&l_107[0]}},{{(void*)0,&g_64},{&g_3,&g_64},{(void*)0,&l_107[0]},{(void*)0,&g_64},{&g_3,&g_64},{(void*)0,&l_107[0]}},{{(void*)0,&g_64},{&g_3,&g_64},{(void*)0,&l_105},{&g_3,&l_107[0]},{(void*)0,&l_107[0]},{&g_3,&l_105}},{{&g_3,&l_107[0]},{(void*)0,&l_107[0]},{&g_3,&l_105},{&g_3,&l_107[0]},{(void*)0,&l_107[0]},{&g_3,&l_105}},{{&g_3,&l_107[0]},{(void*)0,&l_107[0]},{&g_3,&l_105},{&g_3,&l_107[0]},{(void*)0,&l_107[0]},{&g_3,&l_105}},{{&g_3,&l_107[0]},{(void*)0,&l_107[0]},{&g_3,&l_105},{&g_3,&l_107[0]},{(void*)0,&l_107[0]},{&g_3,&l_105}},{{&g_3,&l_107[0]},{(void*)0,&l_107[0]},{&g_3,&l_105},{&g_3,&l_107[0]},{(void*)0,&l_107[0]},{&g_3,&l_105}}};
            int8_t l_143[8][4] = {{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)}};
            int32_t l_147 = 0x77641292L;
            int16_t l_149 = 0x59E3L;
            int32_t l_150 = 1L;
            int i, j, k;
            g_140 = func_43((((*l_138) = (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((g_118 , (safe_add_func_int16_t_s_s((((*l_122) = l_121) == (((l_107[0] > (((safe_lshift_func_uint8_t_u_u(l_129[0][5][2], 4)) | ((*l_131) = (g_118.f0 <= 0x4074L))) != (((*l_133) = 6UL) , ((l_135 = (void*)0) != ((*l_137) = (l_136 , (void*)0)))))) , (-6L)) , &g_91)), g_91))), 18446744073709551615UL)), 3))) , (-9L)), &g_3, g_79, l_78[0].f0, g_5);
            if ((*p_63))
                break;
            l_154[1]--;
        }
        for (l_109 = (-22); (l_109 != 16); l_109++)
        {
            int32_t *l_159 = &l_145;
            int32_t *l_160 = &l_148[4];
            int32_t *l_161 = (void*)0;
            int32_t *l_162 = &l_144;
            int32_t *l_163 = &l_107[0];
            int32_t *l_164 = &g_72[1];
            int32_t *l_165 = &l_144;
            int32_t *l_166 = &l_151;
            int32_t *l_167 = &l_151;
            int32_t *l_168[9][10][1] = {{{&g_72[4]},{&l_148[2]},{&l_110},{&l_148[2]},{&g_72[4]},{&l_106},{&l_145},{&g_3},{&l_142},{&l_110}},{{&l_148[0]},{&l_110},{&g_64},{(void*)0},{&l_108},{&g_3},{&g_72[4]},{&l_145},{&l_107[0]},{&l_106}},{{&l_145},{&l_108},{&l_144},{&l_151},{&l_151},{&l_144},{&l_108},{&l_145},{&l_106},{&l_107[0]}},{{&l_145},{&g_72[4]},{&g_3},{&l_108},{(void*)0},{&g_64},{&l_110},{&l_148[0]},{&l_110},{&l_142}},{{&g_3},{&l_145},{&l_106},{&g_72[4]},{&l_148[2]},{&l_110},{&l_148[2]},{&g_72[4]},{&l_106},{&l_145}},{{&g_3},{&l_142},{&l_110},{&l_148[0]},{&l_110},{&g_64},{(void*)0},{&l_108},{&g_3},{&g_72[4]}},{{&l_145},{&l_107[0]},{&l_106},{&l_145},{&l_108},{&l_144},{&l_151},{&l_151},{&l_144},{&l_108}},{{&l_145},{&l_106},{&l_107[0]},{&l_145},{&g_72[4]},{&g_3},{&l_108},{(void*)0},{&g_64},{&l_110}},{{&l_148[0]},{&l_110},{&l_142},{&g_3},{&l_145},{&l_106},{&g_72[4]},{&l_148[2]},{&l_110},{&l_148[2]}}};
            int8_t **l_174 = &l_121;
            uint64_t l_187 = 1UL;
            struct S0 l_207 = {0,14};
            uint16_t l_211 = 65528UL;
            int8_t l_246 = 0xE0L;
            union U2 l_261[3] = {{0x8C11L},{0x8C11L},{0x8C11L}};
            int i, j, k;
            l_169++;
            if ((safe_rshift_func_uint8_t_u_s(((g_175 = l_174) == l_174), 3)))
            {
                int32_t l_182 = (-2L);
                (*l_165) = (4294967295UL == (safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((((safe_div_func_int32_t_s_s(((((*l_71) >= (l_182 == ((safe_add_func_uint32_t_u_u(g_98[2], 0x8834A9D0L)) < l_146))) >= 0xE437418AL) <= (g_98[0] < (safe_mul_func_int8_t_s_s((((void*)0 == &g_134) > l_78[0].f0), (**g_175))))), l_187)) || l_78[0].f0) | g_79.f0), (*p_63))) <= (-1L)), g_64)));
                if (l_182)
                    continue;
            }
            else
            {
                uint32_t l_190 = 0x550A6A30L;
                (*l_166) = (safe_div_func_int64_t_s_s((*l_159), 0x07E616235A88E179LL));
                (*l_163) |= ((*l_160) = 0L);
                if (l_190)
                    continue;
                return g_118.f0;
            }
            for (l_110 = 0; (l_110 <= 1); l_110 += 1)
            {
                int8_t **l_201 = (void*)0;
                int32_t l_206 = 0x0F085550L;
                int8_t *l_208[1];
                int64_t *l_209 = &g_210;
                int32_t **l_256 = &l_168[6][7][0];
                int32_t ***l_255 = &l_256;
                int i;
                for (i = 0; i < 1; i++)
                    l_208[i] = &l_152;
                if (((safe_sub_func_int32_t_s_s((*p_63), (safe_rshift_func_int8_t_s_u((((0x8774B25CBC684671LL | ((*l_209) = ((((safe_mod_func_int64_t_s_s(((((((*l_71) = (safe_add_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_s(0xF6L, ((*g_175) == (l_202 = (*g_175))))) != 8UL) == ((safe_add_func_int32_t_s_s(g_205, (l_206 < ((**l_174) = (((l_207 , (void*)0) != (*g_175)) <= 0x8EL))))) && (**g_175))) || g_79.f0), 0x7A40L))) < g_98[0]) && (*p_63)) < (*l_162)) & 0x0FL), g_134)) < (*l_165)) >= l_206) >= 0L))) <= 0x606C95B06338055ALL) , (*l_71)), 5)))) | l_211))
                {
                    int64_t l_245[1];
                    uint32_t *l_257 = (void*)0;
                    uint32_t *l_258 = &g_259[0][5];
                    uint16_t *l_260 = &l_211;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_245[i] = 0xCA3130C39D4E3861LL;
                    for (g_91 = 0; (g_91 <= 3); g_91 += 1)
                    {
                        int32_t **l_212[7][8][4] = {{{&g_140,(void*)0,(void*)0,&l_166},{&l_166,(void*)0,&l_70,&l_161},{(void*)0,&g_140,(void*)0,&l_166},{&l_168[6][7][0],&g_140,&l_70,&l_70},{&g_140,&g_140,&l_71,&l_166},{&l_163,&l_167,&l_70,&l_166},{&l_167,&g_140,&l_162,&l_70},{&l_163,&g_140,&l_161,&l_166}},{{&g_140,&l_167,&l_162,&l_166},{&l_168[6][7][0],&g_140,&l_70,&l_70},{&g_140,&g_140,&l_71,&l_166},{&l_163,&l_167,&l_70,&l_166},{&l_167,&g_140,&l_162,&l_70},{&l_163,&g_140,&l_161,&l_166},{&g_140,&l_167,&l_162,&l_166},{&l_168[6][7][0],&g_140,&l_70,&l_70}},{{&g_140,&g_140,&l_71,&l_166},{&l_163,&l_167,&l_70,&l_166},{&l_167,&g_140,&l_162,&l_70},{&l_163,&g_140,&l_161,&l_166},{&g_140,&l_167,&l_162,&l_166},{&l_168[6][7][0],&g_140,&l_70,&l_70},{&g_140,&g_140,&l_71,&l_166},{&l_163,&l_167,&l_70,&l_166}},{{&l_167,&g_140,&l_162,&l_70},{&l_163,&g_140,&l_161,&l_166},{&g_140,&l_167,&l_162,&l_166},{&l_168[6][7][0],&g_140,&l_70,&l_70},{&g_140,&g_140,&l_71,&l_166},{&l_163,&l_167,&l_70,&l_166},{&l_167,&g_140,&l_162,&l_70},{&l_163,&g_140,&l_161,&l_166}},{{&g_140,&l_167,&l_162,&l_166},{&l_168[6][7][0],&g_140,&l_70,&l_70},{&g_140,&g_140,&l_71,&l_166},{&l_163,&l_167,&l_70,&l_166},{&l_167,&g_140,&l_162,&l_70},{&l_163,&g_140,&l_161,&l_166},{&g_140,&l_167,&l_162,&l_166},{&l_168[6][7][0],&g_140,&l_70,&l_70}},{{&g_140,&g_140,&l_71,&l_166},{&l_163,&l_167,&l_70,&l_166},{&l_167,&g_140,&l_162,&l_70},{&l_163,&g_140,&l_161,&l_166},{&g_140,&l_167,&l_162,&l_166},{&l_168[6][7][0],&g_140,&l_70,&l_70},{&g_140,&g_140,&l_71,&l_166},{&l_163,&l_167,&l_70,&l_166}},{{&l_167,&g_140,&l_162,&l_70},{&l_163,&g_140,&l_161,&l_166},{&g_140,(void*)0,&l_71,&l_70},{&l_166,&l_167,&l_161,&l_161},{&l_167,&l_167,(void*)0,&l_70},{&l_168[6][7][0],(void*)0,&l_161,&l_70},{(void*)0,&l_167,&l_71,&l_161},{&l_168[6][7][0],&l_167,&l_166,&l_70}}};
                        int32_t ***l_214 = &l_212[6][1][1];
                        int i, j, k;
                        l_213 = &g_64;
                        (*l_214) = &g_140;
                    }
                    l_107[l_110] ^= (0UL != (safe_mul_func_int16_t_s_s((g_132 = (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((g_234 = (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(g_132, 10)), (safe_lshift_func_int16_t_s_s(g_87.f0, g_233[2][0]))))), l_206)) < ((((safe_div_func_uint16_t_u_u((g_134 = ((safe_mod_func_int64_t_s_s(((((safe_lshift_func_int8_t_s_s(((void*)0 == (*l_174)), 2)) != 0x5C4E9EE4L) <= (safe_add_func_uint8_t_u_u((0L | 0x46F0B4F4L), 249UL))) == (*l_164)), l_206)) < 1L)), 0x32B3L)) == l_243[1]) || l_206) ^ l_244)), l_245[0])), g_87.f2)) > g_91) <= l_245[0]) , l_246) && g_233[7][6]), 0xE738L)), g_98[4]))), l_245[0])));
                    g_140 = func_43(((safe_lshift_func_uint16_t_u_s(((*l_260) &= (((((((*l_167) <= ((safe_add_func_uint32_t_u_u((g_64 < g_234), ((*l_258) = (((((void*)0 == &p_63) != 3L) && l_206) || ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_107[l_110], (l_255 == (void*)0))), 0x64L)) | g_132))))) != (**g_175))) , (-4L)) , (*l_213)) , (*l_213)) ^ g_139) , 0x3593L)), 2)) == (*l_163)), &l_145, l_261[1], l_245[0], g_132);
                }
                else
                {
                    for (l_108 = 0; (l_108 <= 5); l_108 += 1)
                    {
                        int i;
                        return l_154[(l_110 + 1)];
                    }
                }
                return g_259[4][8];
            }
            if ((*p_63))
                break;
        }
        for (l_152 = 0; (l_152 > (-8)); --l_152)
        {
            int8_t l_264 = 0L;
            return l_264;
        }
    }
    l_265 &= (*p_63);
    if ((((((((3UL < (((((g_87.f2 ^= (g_79 , ((0x18L | g_259[0][5]) > (safe_rshift_func_int16_t_s_u((+(((g_118.f0 ^ (((*l_272) = g_271) != &l_135)) , l_135) != (void*)0)), g_134))))) && 0xB3F78AE2L) | (*l_213)) >= (*l_213)) , (*l_213))) & l_273[1]) || (*l_213)) != (*l_213)) | (*p_63)) && 1L) || 0x3959362763AF5582LL))
    {
        int16_t * const *l_277[3];
        int16_t * const **l_276 = &l_277[0];
        int32_t l_293 = (-1L);
        int32_t l_296 = 9L;
        int32_t l_297 = 0x4D7E9289L;
        int32_t l_298[4] = {0x70320F73L,0x70320F73L,0x70320F73L,0x70320F73L};
        int64_t l_307 = (-1L);
        uint32_t l_375 = 1UL;
        int8_t ***l_378 = &g_175;
        const struct S0 *l_402 = &g_118;
        int i;
        for (i = 0; i < 3; i++)
            l_277[i] = &l_275[0];
        (*l_276) = l_274[2];
        for (g_91 = 2; (g_91 >= 0); g_91 -= 1)
        {
            int32_t **l_278[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t l_303 = 0xD9B70BCAL;
            int32_t *l_415[2];
            int i;
            for (i = 0; i < 2; i++)
                l_415[i] = &g_72[4];
            if ((*p_63))
                break;
            p_63 = &g_3;
            if (g_118.f1)
                goto lbl_279;
            for (g_134 = 0; (g_134 <= 2); g_134 += 1)
            {
                uint16_t l_280 = 0UL;
                int8_t *l_292 = &l_152;
                int32_t l_302 = 1L;
                int32_t l_308 = 0x4C7AEAD1L;
                int32_t l_309 = (-1L);
                int32_t l_310[7][10][1] = {{{(-10L)},{0x57A17A59L},{6L},{(-1L)},{0L},{0x96A9CD39L},{(-10L)},{0x1C434035L},{0x90FAAF25L},{0xCAD40954L}},{{0x1C434035L},{0xE9381294L},{0x57A17A59L},{0L},{1L},{0L},{0x57A17A59L},{0xE9381294L},{0x1C434035L},{0xCAD40954L}},{{0x90FAAF25L},{0x1C434035L},{(-10L)},{0x96A9CD39L},{0L},{(-1L)},{6L},{0x57A17A59L},{(-10L)},{1L}},{{0xCAD40954L},{0xCAD40954L},{1L},{(-10L)},{0x57A17A59L},{6L},{(-1L)},{0L},{0x96A9CD39L},{(-10L)}},{{0x1C434035L},{0x90FAAF25L},{0xCAD40954L},{0x1C434035L},{0xE9381294L},{0x57A17A59L},{0L},{1L},{0L},{0x57A17A59L}},{{0xE9381294L},{0x1C434035L},{0xCAD40954L},{0x90FAAF25L},{0x1C434035L},{(-10L)},{0x96A9CD39L},{0L},{(-1L)},{6L}},{{0x57A17A59L},{(-10L)},{1L},{0xCAD40954L},{0xCAD40954L},{1L},{(-10L)},{0x57A17A59L},{6L},{(-1L)}}};
                uint32_t l_339 = 0x1565E2D1L;
                int16_t *l_366[4][4][5];
                int16_t **l_365 = &l_366[0][0][0];
                struct S0 *l_408 = &g_118;
                struct S0 **l_407[7][2] = {{&l_408,&l_408},{(void*)0,&l_408},{&l_408,&l_408},{&l_408,&l_408},{&l_408,(void*)0},{&l_408,&l_408},{&l_408,&l_408}};
                uint16_t l_414[6][4][10] = {{{0xCDDDL,0x3915L,0x543EL,0xD6D3L,0x318CL,0xE502L,0UL,0UL,65535UL,0xBDD8L},{4UL,0xC340L,0xDE89L,0UL,0xAD97L,65526UL,0x15E1L,0xBDD8L,65527UL,0xDD39L},{0xCFE6L,6UL,0xFC0DL,9UL,0xE3C1L,0xB7F6L,8UL,1UL,1UL,8UL},{8UL,0UL,65535UL,65535UL,0UL,8UL,0x21F3L,65527UL,0xCDDDL,0UL}},{{0x318CL,0xFC7BL,0xB45AL,6UL,0xBDD8L,1UL,0UL,0x7C58L,0xB7F6L,65530UL},{0x318CL,4UL,0x7DB9L,65535UL,9UL,8UL,65530UL,0xCFE6L,1UL,0x563FL},{8UL,65530UL,0xCFE6L,1UL,0x563FL,0xB7F6L,6UL,0x5B21L,0x9655L,65527UL},{0xC340L,0xD6D3L,0UL,0x21F3L,65530UL,0xFD9AL,2UL,6UL,0x68D2L,0UL}},{{0x318CL,0xFD9AL,65535UL,0x3634L,1UL,0xB7F6L,0xB45AL,0x9655L,0x4459L,0x15E1L},{0x67B3L,0xDD39L,9UL,0UL,1UL,0xDE89L,0xBDD8L,0xB7F6L,0xD6D3L,8UL},{6UL,0x3915L,0x3803L,1UL,0xCFE6L,1UL,0x3803L,0x3915L,6UL,0x21F3L},{0UL,0xDE89L,0x15E1L,0xFC0DL,65535UL,65530UL,2UL,1UL,0xE502L,0UL}},{{65531UL,0UL,1UL,0xFC0DL,0UL,0xF7BCL,9UL,0x563FL,6UL,65530UL},{0x9542L,1UL,0xFC0DL,1UL,1UL,0x324CL,2UL,65535UL,0xD6D3L,6UL},{0xB7F6L,65535UL,65527UL,0UL,2UL,0x563FL,0UL,0x3803L,0x4459L,0x67B3L},{1UL,1UL,6UL,0x3634L,0xE502L,1UL,0xAD97L,0x441EL,0x68D2L,1UL}},{{0xB45AL,6UL,65531UL,0x21F3L,2UL,0x9542L,0x563FL,65526UL,0xB4A6L,1UL},{0xFD9AL,0xBDD8L,0xD6D3L,0xF7BCL,0xDD39L,4UL,4UL,0xDD39L,0xF7BCL,0xD6D3L},{0x5B21L,0x5B21L,0x7DB9L,1UL,0x68D2L,1UL,65526UL,0UL,2UL,0xB7F6L},{9UL,0xFC0DL,6UL,0xCFE6L,6UL,0x4812L,65526UL,0x7C58L,0x67B3L,0x203EL}},{{0x3803L,0x5B21L,65535UL,0xAD97L,0xB7F6L,0x4459L,4UL,0x15E1L,1UL,9UL},{0xFC7BL,0xBDD8L,2UL,2UL,0xC340L,1UL,0x563FL,0x381CL,65531UL,0xB4A6L},{8UL,6UL,0xBDD8L,0x9542L,65530UL,0xD6D3L,0xAD97L,0x1DEDL,1UL,65535UL},{65530UL,1UL,0xB7F6L,0x3803L,2UL,65530UL,0UL,2UL,0x22C0L,0x5043L}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_366[i][j][k] = (void*)0;
                    }
                }
            }
        }
    }
    else
    {
        int32_t l_426[10] = {0x634E57DEL,0x634E57DEL,6L,(-5L),6L,0x634E57DEL,0x634E57DEL,6L,(-5L),6L};
        int i;
        for (g_374 = 0; (g_374 <= 1); g_374 += 1)
        {
            int32_t l_425 = 1L;
            int32_t l_427 = 3L;
            int32_t l_428 = 0x62ED8C30L;
            int32_t l_429[5] = {0x7DDCFE5EL,0x7DDCFE5EL,0x7DDCFE5EL,0x7DDCFE5EL,0x7DDCFE5EL};
            int i;
            l_107[g_374] |= (*p_63);
            for (g_234 = 7; (g_234 >= 1); g_234 -= 1)
            {
                int32_t *l_420 = (void*)0;
                int32_t *l_421 = (void*)0;
                int32_t *l_422 = &g_72[3];
                int32_t *l_423 = &l_146;
                int32_t *l_424[3][7][6] = {{{&g_72[2],(void*)0,&l_265,(void*)0,&g_72[2],(void*)0},{&g_3,&l_146,&g_3,(void*)0,&g_3,&l_146},{&g_72[2],&l_146,&l_265,&l_146,&g_72[2],&l_146},{&g_3,(void*)0,&g_3,&l_146,&g_3,(void*)0},{&g_72[2],(void*)0,&l_265,(void*)0,&g_72[2],(void*)0},{&g_3,&l_146,&g_3,(void*)0,&g_3,&l_146},{&g_72[2],&l_146,&l_265,&l_146,&g_72[2],&l_146}},{{&g_3,(void*)0,&g_3,&l_146,&g_3,(void*)0},{&g_72[2],(void*)0,&l_265,(void*)0,&g_72[2],(void*)0},{&g_3,&l_146,&g_3,(void*)0,&g_3,&l_146},{&g_72[2],&l_146,&l_265,&l_146,&g_72[2],&l_146},{&g_3,(void*)0,&g_3,&l_146,&g_3,(void*)0},{&g_72[2],(void*)0,&l_265,(void*)0,&g_72[2],(void*)0},{&g_3,&l_146,&g_3,(void*)0,&g_3,&l_146}},{{&g_72[2],&l_146,&l_265,&l_146,&g_72[2],&l_146},{&g_3,(void*)0,&g_3,&l_146,&g_3,(void*)0},{&g_72[2],(void*)0,&l_265,(void*)0,&g_72[2],(void*)0},{&g_3,&l_146,&g_3,(void*)0,&g_3,&l_146},{&g_72[2],&l_146,&l_265,&l_146,&g_72[2],&l_146},{&g_3,(void*)0,&g_3,&l_146,&g_3,(void*)0},{&g_72[2],(void*)0,&l_265,(void*)0,&g_72[2],(void*)0}}};
                int i, j, k;
                --l_430;
                return g_72[4];
            }
        }
    }
    if (((*l_213) || (g_446 ^= (g_362 |= (((*l_444) = (safe_rshift_func_int8_t_s_u((l_435[1] , (*l_213)), ((0xFA69EEBADC838EF4LL || ((void*)0 != &p_63)) , ((*l_443) = ((g_87.f0 = (g_413.f0 ^ ((*l_440) |= (g_259[0][5] = (((*g_340) = ((safe_lshift_func_int8_t_s_u(0x97L, 1)) ^ (*p_63))) && (*p_63)))))) != (*p_63))))))) , (*l_213))))))
    {
        const uint8_t l_449 = 0x50L;
        uint64_t *l_452 = &l_154[0];
        int32_t l_469 = (-2L);
        int32_t l_483 = 0x03330820L;
        int8_t ***l_489[6] = {&g_175,&g_175,&g_175,&g_175,&g_175,&g_175};
        struct S0 l_490[9][2] = {{{0,110},{0,110}},{{0,110},{0,110}},{{0,110},{0,110}},{{0,110},{0,110}},{{0,110},{0,110}},{{0,110},{0,110}},{{0,110},{0,110}},{{0,110},{0,110}},{{0,110},{0,110}}};
        int32_t l_517 = 0x3405303FL;
        uint16_t *l_551 = (void*)0;
        uint16_t l_558 = 0xCE87L;
        int32_t *l_561 = &l_146;
        union U2 l_566 = {-1L};
        uint8_t l_623 = 0x3BL;
        int32_t l_639 = 0xDF03A9D2L;
        struct S1 l_685 = {-2362,3245,1};
        uint32_t l_692 = 1UL;
        int32_t l_778 = 0x7F18EBCEL;
        int32_t l_779 = 0x8846DB5FL;
        int64_t ***l_812 = &g_655;
        const uint8_t l_825 = 0x0BL;
        int8_t l_908 = 0L;
        int16_t *** const *l_917 = &g_866;
        int16_t l_983 = 0x94CEL;
        int32_t l_1051 = 0x593F04A2L;
        int32_t l_1052 = 0L;
        int32_t l_1055 = 0x56F621F5L;
        int32_t l_1058[8] = {(-2L),0x2CCBEA62L,(-2L),0x2CCBEA62L,(-2L),0x2CCBEA62L,(-2L),0x2CCBEA62L};
        int16_t l_1060 = 0x0700L;
        int64_t ***l_1084 = &l_653;
        int8_t l_1113[9] = {0x75L,1L,0x75L,1L,0x75L,1L,0x75L,1L,0x75L};
        int32_t l_1163 = 0x55CA9239L;
        uint32_t l_1187 = 0xC234E799L;
        int32_t **l_1220 = &l_442[0];
        int32_t ***l_1219 = &l_1220;
        int32_t l_1268 = 1L;
        int32_t l_1373 = 0x5CC3C610L;
        struct S0 *l_1377 = &l_490[2][1];
        struct S0 **l_1376[2];
        int64_t l_1399 = 0xDEDB4B0F1725457DLL;
        uint16_t l_1400 = 0x8F4EL;
        int16_t ****l_1427 = &g_866;
        int16_t *****l_1426[1];
        struct S1 ***l_1466 = &g_838;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1376[i] = &l_1377;
        for (i = 0; i < 1; i++)
            l_1426[i] = &l_1427;
        (*l_213) ^= (*p_63);
    }
    else
    {
        int64_t l_1488[1][9];
        int32_t l_1502 = (-1L);
        int16_t ** const *l_1512 = &g_867;
        uint32_t ** const l_1515 = &l_1514;
        union U2 l_1516 = {0xC855L};
        int32_t l_1517 = 0x1F2A5357L;
        int64_t *l_1518 = &g_233[4][3];
        int32_t l_1520 = 0x38966911L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 9; j++)
                l_1488[i][j] = 0L;
        }
        g_64 &= (((l_1520 = (safe_div_func_uint32_t_u_u(0xDECB760EL, ((((0x208A4BAFD51F3874LL && l_1488[0][1]) >= ((***l_1313) <= (safe_div_func_int64_t_s_s((safe_add_func_uint8_t_u_u((g_362 ^= (safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(((l_1504 = (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_1502 |= l_1488[0][1]), ((*l_443) &= l_1503))), 6))) & (((((*l_1518) = (safe_add_func_int32_t_s_s(((*g_340) ^= (l_1517 = (((((safe_add_func_uint16_t_u_u(((*l_359) = (l_1509 == (safe_rshift_func_int8_t_s_u((0xE2L != ((void*)0 != l_1512)), 3)))), 0xFB15L)) , l_1513[0][1]) != l_1515) , l_1516) , 9L))), l_1488[0][2]))) >= (*l_213)) > l_1519) <= l_1488[0][5])))), 0xDFL)), l_1516.f0))), (-1L))), (**l_1314))))) , 65530UL) , l_1502)))) , &l_1512) == &l_1512);
        return l_1488[0][1];
    }
    return g_413.f0;
}







static uint8_t func_73(union U2 p_74, const union U2 p_75, uint32_t p_76, uint32_t p_77)
{
    int16_t l_82 = 0L;
    int8_t *l_90 = &g_91;
    int32_t l_92 = (-1L);
    int32_t *l_93 = &l_92;
    int32_t *l_94 = (void*)0;
    int32_t *l_95 = (void*)0;
    int32_t l_96[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
    int32_t *l_97[5][10] = {{(void*)0,&l_96[8],&l_96[8],&l_96[8],(void*)0,&g_3,&l_96[8],&l_92,&g_3,&l_96[8]},{&l_96[8],&g_3,&l_96[8],&g_3,&g_64,&g_64,&g_64,&g_64,&g_3,&l_96[8]},{&l_96[8],&l_96[8],&g_3,&g_3,&l_96[8],&g_64,&g_64,&l_92,&g_64,(void*)0},{&l_92,&l_96[8],&g_64,&g_3,&g_3,&g_3,&g_64,&l_96[8],&l_92,&l_96[8]},{&g_64,&l_96[8],&g_64,&l_96[8],(void*)0,&l_96[8],&l_96[5],&g_3,&g_3,&l_96[5]}};
    int i, j;
    g_87.f0 = ((safe_lshift_func_uint8_t_u_u((g_5 && (l_82 <= (((p_75.f0 ^ g_5) & (&g_64 != (void*)0)) == (p_75.f0 ^ ((((*l_90) = ((safe_add_func_uint16_t_u_u((g_87 , (safe_rshift_func_int16_t_s_s(0xC2A7L, g_79.f0))), 0xB85AL)) >= p_75.f0)) >= 0x72L) == (-1L)))))), g_5)) , p_77);
    --g_98[2];
    (*l_93) = (safe_lshift_func_int8_t_s_s(p_75.f0, 0));
    return g_87.f0;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_87.f1, "g_87.f1", print_hash_value);
    transparent_crc(g_87.f2, "g_87.f2", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_98[i], "g_98[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_118.f0, "g_118.f0", print_hash_value);
    transparent_crc(g_118.f1, "g_118.f1", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_233[i][j], "g_233[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_234, "g_234", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_259[i][j], "g_259[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_289[i], "g_289[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_395[i][j][k], "g_395[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_413.f0, "g_413.f0", print_hash_value);
    transparent_crc(g_413.f1, "g_413.f1", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_809, "g_809", print_hash_value);
    transparent_crc(g_852, "g_852", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1013[i], "g_1013[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1164, "g_1164", print_hash_value);
    transparent_crc(g_1182, "g_1182", print_hash_value);
    transparent_crc(g_1205, "g_1205", print_hash_value);
    transparent_crc(g_1247.f0, "g_1247.f0", print_hash_value);
    transparent_crc(g_1434, "g_1434", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1437[i][j], "g_1437[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1734, "g_1734", print_hash_value);
    transparent_crc(g_2017, "g_2017", print_hash_value);
    transparent_crc(g_2169, "g_2169", print_hash_value);
    transparent_crc(g_2321, "g_2321", print_hash_value);
    transparent_crc(g_2422, "g_2422", print_hash_value);
    transparent_crc(g_2436, "g_2436", print_hash_value);
    transparent_crc(g_2940.f0, "g_2940.f0", print_hash_value);
    transparent_crc(g_3001, "g_3001", print_hash_value);
    transparent_crc(g_3069, "g_3069", print_hash_value);
    transparent_crc(g_3129, "g_3129", print_hash_value);
    transparent_crc(g_3154, "g_3154", print_hash_value);
    transparent_crc(g_3507, "g_3507", print_hash_value);
    transparent_crc(g_4050, "g_4050", print_hash_value);
    transparent_crc(g_4119.f0, "g_4119.f0", print_hash_value);
    transparent_crc(g_4119.f1, "g_4119.f1", print_hash_value);
    transparent_crc(g_4119.f2, "g_4119.f2", print_hash_value);
    transparent_crc(g_4171, "g_4171", print_hash_value);
    transparent_crc(g_4259, "g_4259", print_hash_value);
    transparent_crc(g_4335, "g_4335", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_4415[i], "g_4415[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_4492[i][j][k].f0, "g_4492[i][j][k].f0", print_hash_value);
                transparent_crc(g_4492[i][j][k].f1, "g_4492[i][j][k].f1", print_hash_value);
                transparent_crc(g_4492[i][j][k].f2, "g_4492[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_4594, "g_4594", print_hash_value);
    transparent_crc(g_4683, "g_4683", print_hash_value);
    transparent_crc(g_4722, "g_4722", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_4729[i], "g_4729[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_4857, "g_4857", print_hash_value);
    transparent_crc(g_4880, "g_4880", print_hash_value);
    transparent_crc(g_4954, "g_4954", print_hash_value);
    transparent_crc(g_4992, "g_4992", print_hash_value);
    transparent_crc(g_5185.f0, "g_5185.f0", print_hash_value);
    transparent_crc(g_5185.f1, "g_5185.f1", print_hash_value);
    transparent_crc(g_5185.f2, "g_5185.f2", print_hash_value);
    transparent_crc(g_5202, "g_5202", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
