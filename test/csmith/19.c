// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 9D0ED576
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



static int32_t g_3 = (-8L);
static int32_t g_4 = (-1L);
static int32_t g_5 = 0x4543BEB7L;
static int32_t g_6[1] = {0x1A0734F0L};
static uint64_t g_30 = 0x43AF7806AA1C33C0LL;
static uint64_t g_45 = 1UL;
static uint64_t *g_44 = &g_45;
static int64_t g_58 = 1L;
static int8_t g_61 = 0x8AL;
static uint64_t *g_99 = &g_45;
static uint64_t **g_98 = &g_99;
static uint8_t g_107 = 255UL;
static int32_t g_116 = 0xC50E9BCCL;
static uint64_t g_146 = 1UL;
static uint8_t g_150 = 0x8AL;
static int8_t g_154[8] = {(-3L),0x9EL,(-3L),0x9EL,(-3L),0x9EL,(-3L),0x9EL};
static int8_t g_166[2] = {(-7L),(-7L)};
static uint8_t g_174 = 0xD5L;
static int16_t g_179 = (-3L);
static int32_t g_185 = 0x479D400EL;
static uint16_t g_221 = 4UL;
static int64_t g_248 = (-1L);
static uint32_t g_255 = 4294967291UL;
static int64_t *g_318 = &g_248;
static int64_t **g_317[6] = {&g_318,&g_318,&g_318,&g_318,&g_318,&g_318};
static int32_t g_353 = 0xF64CF5CFL;
static int32_t g_368 = 0x44D40ABFL;
static uint64_t g_406[4] = {0xF25A9B191495C03FLL,0xF25A9B191495C03FLL,0xF25A9B191495C03FLL,0xF25A9B191495C03FLL};
static int32_t *g_409[1] = {&g_368};
static uint32_t g_419[6][4] = {{0xD29F0869L,1UL,1UL,0xD29F0869L},{7UL,1UL,5UL,1UL},{1UL,0x03349BFFL,5UL,5UL},{7UL,7UL,1UL,5UL},{0xD29F0869L,0x03349BFFL,0xD29F0869L,1UL},{0xD29F0869L,1UL,1UL,0xD29F0869L}};
static uint64_t g_471[6][3][8] = {{{18446744073709551615UL,0x6B0A714A2ECB4C59LL,1UL,0x609B1DBF76F78F5DLL,1UL,0x6B0A714A2ECB4C59LL,18446744073709551615UL,18446744073709551615UL},{0x6B0A714A2ECB4C59LL,0x609B1DBF76F78F5DLL,0x3961F8F04A194D53LL,0x3961F8F04A194D53LL,0x609B1DBF76F78F5DLL,0x6B0A714A2ECB4C59LL,18446744073709551614UL,0x6B0A714A2ECB4C59LL},{0x609B1DBF76F78F5DLL,0x6B0A714A2ECB4C59LL,18446744073709551614UL,0x6B0A714A2ECB4C59LL,0x609B1DBF76F78F5DLL,0x3961F8F04A194D53LL,0x3961F8F04A194D53LL,0x609B1DBF76F78F5DLL}},{{0x6B0A714A2ECB4C59LL,18446744073709551615UL,18446744073709551615UL,0x6B0A714A2ECB4C59LL,1UL,0x609B1DBF76F78F5DLL,1UL,0x6B0A714A2ECB4C59LL},{18446744073709551615UL,1UL,18446744073709551615UL,0x3961F8F04A194D53LL,18446744073709551614UL,18446744073709551614UL,0x3961F8F04A194D53LL,18446744073709551615UL},{1UL,1UL,18446744073709551614UL,0x609B1DBF76F78F5DLL,18446744073709551612UL,0x609B1DBF76F78F5DLL,18446744073709551614UL,1UL}},{{1UL,18446744073709551615UL,0x3961F8F04A194D53LL,18446744073709551614UL,18446744073709551614UL,0x3961F8F04A194D53LL,18446744073709551615UL,1UL},{18446744073709551615UL,0x6B0A714A2ECB4C59LL,1UL,0x609B1DBF76F78F5DLL,1UL,0x6B0A714A2ECB4C59LL,18446744073709551615UL,18446744073709551615UL},{0x6B0A714A2ECB4C59LL,0x609B1DBF76F78F5DLL,0x3961F8F04A194D53LL,0x3961F8F04A194D53LL,0x609B1DBF76F78F5DLL,0x6B0A714A2ECB4C59LL,18446744073709551614UL,0x6B0A714A2ECB4C59LL}},{{0x609B1DBF76F78F5DLL,0x6B0A714A2ECB4C59LL,18446744073709551614UL,0x6B0A714A2ECB4C59LL,0x609B1DBF76F78F5DLL,0x3961F8F04A194D53LL,0x3961F8F04A194D53LL,0x609B1DBF76F78F5DLL},{0x6B0A714A2ECB4C59LL,18446744073709551615UL,18446744073709551615UL,0x6B0A714A2ECB4C59LL,1UL,0x609B1DBF76F78F5DLL,1UL,0x6B0A714A2ECB4C59LL},{18446744073709551615UL,1UL,18446744073709551615UL,0x3961F8F04A194D53LL,18446744073709551614UL,18446744073709551614UL,0x3961F8F04A194D53LL,18446744073709551615UL}},{{1UL,1UL,18446744073709551614UL,0x609B1DBF76F78F5DLL,18446744073709551612UL,0x609B1DBF76F78F5DLL,18446744073709551614UL,1UL},{1UL,18446744073709551615UL,0x3961F8F04A194D53LL,18446744073709551614UL,18446744073709551614UL,0x3961F8F04A194D53LL,18446744073709551615UL,1UL},{18446744073709551615UL,0x6B0A714A2ECB4C59LL,1UL,0x609B1DBF76F78F5DLL,1UL,0x6B0A714A2ECB4C59LL,18446744073709551615UL,18446744073709551615UL}},{{0x6B0A714A2ECB4C59LL,0x609B1DBF76F78F5DLL,0x3961F8F04A194D53LL,0x3961F8F04A194D53LL,0x609B1DBF76F78F5DLL,0x6B0A714A2ECB4C59LL,18446744073709551614UL,0x6B0A714A2ECB4C59LL},{0x609B1DBF76F78F5DLL,0x6B0A714A2ECB4C59LL,18446744073709551614UL,0x6B0A714A2ECB4C59LL,0x609B1DBF76F78F5DLL,0x3961F8F04A194D53LL,0x3961F8F04A194D53LL,0x609B1DBF76F78F5DLL},{0x6B0A714A2ECB4C59LL,18446744073709551615UL,18446744073709551615UL,0x6B0A714A2ECB4C59LL,1UL,0x609B1DBF76F78F5DLL,1UL,0x6B0A714A2ECB4C59LL}}};
static const uint64_t g_514 = 0UL;
static const uint64_t g_519 = 1UL;
static const uint64_t g_537[7] = {0x559EBF47E2122694LL,0x559EBF47E2122694LL,0x559EBF47E2122694LL,0x559EBF47E2122694LL,0x559EBF47E2122694LL,0x559EBF47E2122694LL,0x559EBF47E2122694LL};
static int32_t ***g_588 = (void*)0;
static uint64_t ****g_597 = (void*)0;
static uint64_t *****g_596 = &g_597;
static uint8_t g_662[2][4] = {{246UL,0xE2L,246UL,0xE2L},{246UL,0xE2L,246UL,0xE2L}};
static uint32_t g_695 = 0x1C0EB1E7L;
static int16_t g_734 = (-1L);
static uint16_t *g_864 = &g_221;
static uint16_t **g_863 = &g_864;
static uint32_t g_911[6][5][5] = {{{1UL,0xFC2CF2F5L,0xFC2CF2F5L,1UL,4294967290UL},{4294967295UL,1UL,4294967295UL,0xAC1EA952L,0UL},{0xFF7A1FA2L,0x3D592678L,0x3412122DL,0UL,6UL},{0xE6A63FC2L,0xFE490B1DL,0x5843CAA7L,0xAC1EA952L,0x7225E18AL},{4294967291UL,0x4821F967L,8UL,1UL,0x3412122DL}},{{4294967295UL,4294967295UL,0x3D592678L,0xFC2CF2F5L,0xAC1EA952L},{5UL,0UL,0x3412122DL,0x12DC27ECL,4294967290UL},{0x6FEAED09L,4294967295UL,0x3412122DL,0x5977F21CL,0x3D592678L},{0x3D592678L,4294967295UL,0xFF7A1FA2L,4294967295UL,0xFF7A1FA2L},{1UL,1UL,0x12DC27ECL,5UL,0xE8C0B439L}},{{4294967295UL,0xFE490B1DL,0UL,1UL,2UL},{0x67E08FC5L,4294967290UL,0UL,0x4A3058A9L,0x7225E18AL},{0xE8C0B439L,0xFE490B1DL,4294967295UL,4294967295UL,4294967295UL},{0x73ED51ECL,1UL,4294967295UL,0x3D592678L,0x8B0A5F22L},{0xAC1EA952L,4294967295UL,0UL,2UL,0x5843CAA7L}},{{0UL,4294967295UL,8UL,4294967295UL,4294967295UL},{0UL,0x67E08FC5L,4294967295UL,0xAC1EA952L,0xE6A63FC2L},{0xAC1EA952L,0x3412122DL,0xE8C0B439L,0x3412122DL,0xAC1EA952L},{0x73ED51ECL,0UL,0x8B0A5F22L,0x7225E18AL,1UL},{0xE8C0B439L,0x4A3058A9L,8UL,6UL,4294967295UL}},{{0x67E08FC5L,0xFF7A1FA2L,4294967295UL,0UL,1UL},{4294967295UL,6UL,4294967291UL,4294967290UL,0xAC1EA952L},{1UL,4294967295UL,0x3D592678L,0x8B0A5F22L,0xE6A63FC2L},{0x3D592678L,0xFC2CF2F5L,0xAC1EA952L,1UL,4294967295UL},{0x6FEAED09L,4294967295UL,2UL,1UL,0x5843CAA7L}},{{4294967295UL,0x7225E18AL,0x6FEAED09L,0x8B0A5F22L,0x8B0A5F22L},{0x4821F967L,1UL,0x4821F967L,4294967290UL,4294967295UL},{0x5977F21CL,2UL,0x70D05197L,0UL,0x7225E18AL},{5UL,4294967291UL,0x67E08FC5L,6UL,2UL},{0xFC2CF2F5L,4294967295UL,0x70D05197L,0x7225E18AL,0xE8C0B439L}}};
static uint64_t g_941[8][6] = {{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL}};
static int64_t ***g_967 = &g_317[1];
static int64_t ****g_966 = &g_967;
static uint16_t g_1010 = 0x5E79L;
static uint32_t g_1039 = 3UL;
static uint32_t *g_1038 = &g_1039;
static uint32_t **g_1037 = &g_1038;
static uint32_t *g_1043 = &g_255;
static uint32_t g_1074 = 0x1BAB7142L;
static int8_t g_1156 = 0xB7L;
static int32_t g_1213[9][8][3] = {{{4L,0x6ADA1204L,0x6ADA1204L},{0x5467569EL,0x8948BE3DL,0xCC1F0BDCL},{3L,1L,1L},{(-2L),0xAA0A45DEL,(-10L)},{0xE0D837CEL,0x5467569EL,1L},{0xC08963E3L,0xAA0A45DEL,0L},{0x2EE1EA48L,1L,0xD6145479L},{0x47F7C60EL,0x8948BE3DL,0x7999772EL}},{{5L,(-9L),(-1L)},{(-1L),0x95788E2EL,0x9194F66BL},{0x15FED601L,0xEA83D968L,0x6B4CDF79L},{0x0E2F5397L,0L,0xC08963E3L},{(-1L),0xACA798E3L,1L},{0xACA798E3L,0x40A86178L,(-1L)},{0xE0D837CEL,0x15FED601L,0x6ADA1204L},{(-1L),0xC28EF396L,(-3L)}},{{1L,0x4D36A0F3L,(-5L)},{(-2L),(-1L),0xD6145479L},{(-2L),(-8L),(-1L)},{1L,0x5467569EL,0xE3EF65ACL},{(-1L),1L,0x2EE1EA48L},{0xE0D837CEL,(-3L),(-1L)},{0xACA798E3L,1L,0L},{(-1L),0L,0x88F78281L}},{{0x0E2F5397L,(-2L),0x15FED601L},{0x15FED601L,1L,0L},{(-1L),0L,0xED915477L},{5L,5L,0x6A2C1249L},{0xD6145479L,(-5L),0xAA0A45DEL},{1L,1L,0x4D36A0F3L},{0xC28EF396L,(-2L),0xACA798E3L},{0xAA0A45DEL,1L,0x4D36A0F3L}},{{1L,0x6A2C1249L,0xAA0A45DEL},{(-10L),0L,0x6A2C1249L},{0x77C6F671L,0x9194F66BL,0xED915477L},{0x88F78281L,0x37950C35L,0L},{(-10L),0x8948BE3DL,0x15FED601L},{(-1L),1L,0x88F78281L},{0x6B4CDF79L,(-1L),0L},{(-8L),(-6L),(-1L)}},{{0x8948BE3DL,(-8L),0x2EE1EA48L},{0L,0x655CE13AL,0xE3EF65ACL},{1L,4L,(-1L)},{1L,0x7E8C5A83L,0xD6145479L},{3L,0x7E8C5A83L,(-5L)},{0L,4L,(-3L)},{(-1L),0x655CE13AL,0x6ADA1204L},{0L,(-8L),(-1L)}},{{0x655CE13AL,(-6L),1L},{1L,(-1L),0xC08963E3L},{0x6A2C1249L,1L,0x6B4CDF79L},{5L,0x8948BE3DL,0x9194F66BL},{0L,0x37950C35L,(-1L)},{(-6L),0x9194F66BL,(-6L)},{3L,0L,1L},{0x7999772EL,0x6A2C1249L,6L}},{{0x95788E2EL,1L,(-1L)},{0xCC1F0BDCL,(-2L),(-1L)},{0x95788E2EL,1L,0xC3B764A2L},{0x7999772EL,(-5L),0xEA83D968L},{3L,5L,(-9L)},{(-6L),0L,0L},{0L,1L,0L},{5L,(-2L),(-10L)}},{{0x6A2C1249L,0L,3L},{1L,1L,0x95788E2EL},{0x655CE13AL,(-3L),1L},{0L,1L,(-1L)},{(-1L),0x5467569EL,0x0E2F5397L},{0L,(-8L),(-2L)},{3L,(-1L),(-2L)},{1L,0x4D36A0F3L,1L}}};
static int32_t *g_1215 = &g_1213[6][1][2];
static int32_t **g_1214 = &g_1215;
static int32_t g_1220 = 0x8C845EDAL;
static uint32_t *g_1377 = &g_255;
static int8_t g_1539 = (-1L);
static uint32_t g_1544 = 4294967295UL;



static int16_t func_1(void);
static int8_t func_21(int32_t p_22, uint8_t p_23, int32_t p_24);
static int64_t func_31(const int32_t p_32, int16_t p_33, uint64_t * p_34);
static uint8_t func_39(int32_t p_40, uint64_t * p_41, const uint8_t p_42, uint32_t p_43);
static int32_t * func_48(int32_t p_49, int64_t p_50, const int32_t * p_51, int32_t * p_52, uint16_t p_53);
static int32_t func_54(int16_t p_55);
static int32_t func_62(int8_t p_63, int64_t * p_64, int16_t p_65, uint8_t p_66);
static int8_t func_67(uint8_t p_68);
static int32_t func_73(int64_t p_74, const uint64_t * const p_75, int64_t * p_76, uint32_t p_77);
static const int16_t func_80(int32_t * p_81, int8_t * p_82, int64_t * p_83, const int64_t p_84);
# 98 "<stdin>"
static int16_t func_1(void)
{
    int32_t l_2[2];
    int i;
    for (i = 0; i < 2; i++)
        l_2[i] = 0x99FF6065L;
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    {
        const uint8_t l_46 = 0x23L;
        uint64_t *l_1555 = &g_471[0][1][4];
        int32_t l_1569 = 0L;
        int32_t *l_1578 = (void*)0;
        int32_t **l_1580 = &g_409[0];
        for (g_4 = 1; (g_4 >= 0); g_4 -= 1)
        {
            int32_t l_28[3];
            int i;
            for (i = 0; i < 3; i++)
                l_28[i] = 1L;
            for (g_5 = 1; (g_5 >= 0); g_5 -= 1)
            {
                int32_t l_20 = 0xD82C32B9L;
                int32_t l_1571 = 0xFABD060BL;
                int32_t l_1573 = 9L;
                int32_t l_1574 = 0L;
                for (g_6[0] = 0; (g_6[0] <= 1); g_6[0] += 1)
                {
                    uint64_t *l_29 = &g_30;
                    int16_t l_47 = (-1L);
                    int32_t *l_1570[2];
                    int32_t l_1572 = 0L;
                    uint16_t l_1575 = 7UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1570[i] = &l_28[1];
                    if (l_2[g_4])
                        break;
                    l_2[g_6[0]] = (~(l_1569 = (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(l_20, func_21(g_5, (~(safe_sub_func_uint64_t_u_u(((*l_29) &= l_28[1]), func_31(((g_6[0] || (l_20 == 1L)) , ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(g_6[0], 0xDEL)), func_39(g_4, g_44, l_46, l_47))) != (*g_99))), l_20, l_1555)))), l_46))), 1)), 0x3434A9A06A053BD3LL)), 5)), 1)), l_46))));
                    l_1575++;
                }
            }
            for (g_221 = 0; (g_221 <= 1); g_221 += 1)
            {
                int32_t **l_1579 = (void*)0;
                int i;
                l_1578 = &l_2[g_4];
                g_409[0] = &l_2[g_221];
            }
        }
        (*l_1580) = (void*)0;
    }
    return g_221;
}







static int8_t func_21(int32_t p_22, uint8_t p_23, int32_t p_24)
{
    int32_t *l_1556 = &g_353;
    int32_t *l_1557 = &g_1220;
    int32_t *l_1558 = &g_368;
    int32_t *l_1559 = &g_353;
    int32_t *l_1560[9] = {&g_185,&g_368,&g_185,&g_368,&g_185,&g_368,&g_185,&g_368,&g_185};
    int32_t l_1561[3];
    uint8_t l_1562 = 0x8DL;
    int i;
    for (i = 0; i < 3; i++)
        l_1561[i] = 0x73F703AAL;
    ++l_1562;
    (*l_1557) |= (safe_sub_func_int64_t_s_s((*l_1556), (safe_rshift_func_uint8_t_u_u(p_23, 7))));
    return (*l_1558);
}







static int64_t func_31(const int32_t p_32, int16_t p_33, uint64_t * p_34)
{
    return p_33;
}







static uint8_t func_39(int32_t p_40, uint64_t * p_41, const uint8_t p_42, uint32_t p_43)
{
    int64_t *l_56 = (void*)0;
    int64_t *l_57[3];
    int32_t l_59[3];
    int8_t *l_60 = &g_61;
    int32_t l_1233 = 0x46AC7079L;
    const int32_t *l_1234 = (void*)0;
    int32_t **l_1516 = &g_409[0];
    uint16_t **l_1521 = &g_864;
    uint32_t **l_1526 = &g_1038;
    uint32_t **l_1527 = &g_1038;
    int i;
    for (i = 0; i < 3; i++)
        l_57[i] = &g_58;
    for (i = 0; i < 3; i++)
        l_59[i] = 0xA0B8914BL;
    return g_911[1][4][2];
}







static int32_t * func_48(int32_t p_49, int64_t p_50, const int32_t * p_51, int32_t * p_52, uint16_t p_53)
{
    uint32_t l_1275[5] = {0xDC796D0BL,0xDC796D0BL,0xDC796D0BL,0xDC796D0BL,0xDC796D0BL};
    int32_t l_1279 = 3L;
    int32_t l_1293 = (-4L);
    int32_t l_1295 = (-1L);
    int64_t l_1298 = 0xEDC594B14469CA26LL;
    int32_t l_1299 = 0xCBFCA3D0L;
    int32_t l_1301 = 5L;
    uint64_t l_1302 = 18446744073709551615UL;
    const uint8_t l_1345 = 0xC2L;
    uint32_t l_1416 = 0x0ECCC277L;
    int32_t *l_1472 = &l_1293;
    int32_t *l_1473 = &g_1220;
    int32_t *l_1474 = &l_1301;
    int32_t *l_1475 = &g_116;
    int32_t *l_1476 = &l_1293;
    int32_t *l_1477 = &g_368;
    int32_t *l_1478 = &g_185;
    int32_t *l_1479 = (void*)0;
    int32_t *l_1480[9] = {&l_1293,&g_4,&l_1293,&l_1293,&g_4,&l_1293,&l_1293,&g_4,&l_1293};
    uint64_t l_1481 = 1UL;
    int16_t l_1484 = 0x1C36L;
    uint8_t l_1485[7];
    uint8_t l_1508 = 254UL;
    int16_t l_1514 = 1L;
    int32_t *l_1515[6][4][2] = {{{&g_185,&g_368},{&g_185,&l_1299},{(void*)0,(void*)0},{&l_1299,&g_3}},{{(void*)0,&g_3},{&l_1293,&g_6[0]},{&g_6[0],&g_6[0]},{&g_6[0],&g_6[0]}},{{&l_1293,&g_185},{&l_1293,&g_185},{&g_3,&l_1295},{&g_6[0],&g_368}},{{&g_185,&g_368},{&g_6[0],&l_1295},{&g_3,&g_185},{&l_1293,&g_185}},{{&l_1293,&g_6[0]},{&g_6[0],&g_6[0]},{&g_6[0],&g_6[0]},{&l_1293,&g_3}},{{(void*)0,&g_3},{&l_1299,(void*)0},{(void*)0,&l_1299},{&g_185,&g_368}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1485[i] = 0UL;
    for (g_179 = 0; (g_179 != (-12)); g_179 = safe_sub_func_int16_t_s_s(g_179, 3))
    {
        int32_t ****l_1237 = &g_588;
        int16_t *l_1270 = &g_179;
        int32_t l_1283 = 0x327875B2L;
        int32_t l_1290[5] = {0x5B20A242L,0x5B20A242L,0x5B20A242L,0x5B20A242L,0x5B20A242L};
        uint8_t *l_1470 = (void*)0;
        int i;
        if ((l_1237 != (void*)0))
        {
            return &g_368;
        }
        else
        {
            uint8_t l_1249 = 9UL;
            int32_t l_1272 = (-1L);
            int32_t l_1282 = 1L;
            int32_t l_1287 = 0x6BBFDB54L;
            int32_t l_1289[4][5][6] = {{{(-3L),0x2DCF0E84L,0xFB228185L,1L,0xA11E36FEL,(-3L)},{0x7AD4F6BAL,(-3L),0xFB228185L,6L,0xC727B6F3L,1L},{4L,6L,(-3L),0L,1L,0L},{0L,1L,0L,(-3L),6L,4L},{1L,0xC727B6F3L,6L,0xFB228185L,(-3L),0x7AD4F6BAL}},{{(-3L),0xA11E36FEL,1L,0xFB228185L,0x2DCF0E84L,(-3L)},{1L,1L,0x1AC52100L,(-3L),0xC727B6F3L,0xC727B6F3L},{0L,0xB7D02D1CL,0xB7D02D1CL,0L,(-4L),1L},{4L,0xB5F71859L,0L,6L,1L,0x752C77DAL},{0x7AD4F6BAL,0xC727B6F3L,1L,1L,1L,0xF31A0F6CL}},{{(-3L),0xB5F71859L,1L,0x1AC52100L,(-4L),(-3L)},{0xC727B6F3L,0xB7D02D1CL,0L,0xB7D02D1CL,0xC727B6F3L,0L},{1L,1L,1L,0L,0x2DCF0E84L,0xA7C94128L},{0x752C77DAL,0xA11E36FEL,0L,1L,(-3L),0xA7C94128L},{0xF31A0F6CL,0xC727B6F3L,1L,1L,6L,0L}},{{(-3L),1L,0L,0L,1L,(-3L)},{0L,6L,1L,1L,0xC727B6F3L,0xF31A0F6CL},{0xA7C94128L,(-3L),1L,0L,0xA11E36FEL,0x752C77DAL},{0xA7C94128L,0x2DCF0E84L,0L,1L,1L,1L},{6L,(-3L),0L,1L,0L,(-3L)}}};
            int16_t *l_1322 = (void*)0;
            int32_t l_1446 = 0x2BCB22A7L;
            int32_t **l_1471 = &g_409[0];
            int i, j, k;
            if ((*p_52))
                break;
            for (p_53 = 1; (p_53 <= 5); p_53 += 1)
            {
                uint64_t **l_1242 = &g_44;
                uint64_t ***l_1243 = &g_98;
                uint32_t **l_1248 = &g_1043;
                int32_t l_1252 = 0x358C0659L;
                const int64_t ***l_1274 = (void*)0;
                const int64_t ****l_1273 = &l_1274;
                int32_t l_1284 = 0x250C4D3DL;
                int32_t l_1285 = 0xED2CA8FCL;
                int32_t l_1288 = 0x6195A152L;
                int32_t l_1292 = 0xB26F860DL;
                int32_t l_1294 = 0x6A94E1FDL;
                int32_t l_1296 = 0x4DE0953CL;
                int32_t l_1297 = (-5L);
                int32_t l_1300[3][4] = {{0x7F6ABA20L,0x44DE9992L,0x7F6ABA20L,0x44DE9992L},{0x7F6ABA20L,0x44DE9992L,0x7F6ABA20L,0x44DE9992L},{0x7F6ABA20L,0x44DE9992L,0x7F6ABA20L,0x44DE9992L}};
                int16_t *l_1320 = &g_179;
                uint32_t l_1324 = 0x13869889L;
                int8_t l_1346[7] = {1L,0x41L,0x41L,1L,0x41L,0x41L,1L};
                int64_t l_1376 = (-1L);
                int32_t ****l_1448 = (void*)0;
                int i, j;
                if ((0x9FA0L == ((safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((l_1242 == ((*l_1243) = l_1242)), (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((((void*)0 != &g_864) && ((&g_695 != ((*l_1248) = (void*)0)) <= (l_1249 = 0xDBB6L))), 0)), (safe_sub_func_int32_t_s_s((0x6C9EE6DEL ^ 0xD37B249FL), (*p_52))))))) != l_1252), 0x59L)) <= g_4)))
                {
                    int64_t **** const l_1259 = &g_967;
                    int16_t *l_1271[8][1][10] = {{{&g_734,(void*)0,&g_734,(void*)0,&g_734,(void*)0,&g_734,&g_179,&g_179,&g_179}},{{(void*)0,&g_179,(void*)0,&g_734,&g_734,(void*)0,&g_179,(void*)0,&g_734,&g_179}},{{&g_179,&g_734,&g_179,&g_179,&g_734,&g_734,&g_734,&g_179,&g_179,&g_734}},{{(void*)0,(void*)0,&g_179,&g_734,&g_179,&g_179,(void*)0,(void*)0,&g_179,&g_179}},{{&g_179,(void*)0,(void*)0,&g_179,(void*)0,&g_179,&g_179,&g_179,&g_179,&g_179}},{{(void*)0,&g_734,&g_734,&g_179,&g_734,&g_734,(void*)0,&g_179,&g_179,(void*)0}},{{&g_179,&g_179,(void*)0,&g_179,(void*)0,(void*)0,&g_179,(void*)0,&g_179,&g_179}},{{(void*)0,&g_179,&g_179,&g_734,&g_179,(void*)0,(void*)0,(void*)0,&g_179,&g_734}}};
                    int32_t l_1276 = (-3L);
                    int8_t *l_1277 = &g_61;
                    int i, j, k;
                    if (((safe_mod_func_uint8_t_u_u(((p_51 == (void*)0) == ((safe_lshift_func_uint8_t_u_u(g_662[0][1], 0)) != ((void*)0 != l_1259))), ((*l_1277) = (+((safe_lshift_func_int16_t_s_u(((((((0x77L || (((((*g_864) |= (safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_s((l_1272 = (safe_add_func_int8_t_s_s((l_1270 != l_1270), l_1249))), 15))))) , l_1273) != l_1259) | 0L)) , l_1275[4]) , p_53) , l_1276) > (*p_52)) < 0L), l_1276)) | l_1249))))) , 0x54E52AFFL))
                    {
                        int32_t *l_1278 = &g_5;
                        return l_1278;
                    }
                    else
                    {
                        return &g_185;
                    }
                }
                else
                {
                    int8_t l_1286[1][9] = {{0L,0L,0L,0L,0L,0L,0L,0L,0L}};
                    int32_t l_1291[1];
                    int32_t *l_1305 = &l_1284;
                    int32_t **l_1306 = &l_1305;
                    uint8_t *l_1313 = &g_662[0][1];
                    int16_t **l_1321[7] = {&l_1320,&l_1320,&l_1320,&l_1320,&l_1320,&l_1320,&l_1320};
                    int8_t *l_1323 = &g_61;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1291[i] = 0xD9C43B00L;
                    for (g_1220 = 1; (g_1220 >= 0); g_1220 -= 1)
                    {
                        int32_t *l_1280 = &g_116;
                        int32_t *l_1281[6][2];
                        int i, j;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1281[i][j] = &g_185;
                        }
                        l_1279 = 0L;
                        --l_1302;
                    }
                    (*l_1305) &= (*p_52);
                    (*l_1306) = &p_49;
                    if (((**l_1306) = (((safe_lshift_func_uint16_t_u_u(((**g_863) = 0xBC09L), (safe_rshift_func_int8_t_s_u(g_1220, 1)))) , (safe_mul_func_uint8_t_u_u(((*l_1313) = p_53), (((l_1324 |= (safe_rshift_func_int16_t_s_s(0xB077L, (((**l_1306) , 2UL) ^ (safe_sub_func_int8_t_s_s((((*l_1323) &= ((safe_mul_func_uint8_t_u_u((((l_1322 = l_1320) == l_1270) && (p_49 ^ g_519)), (**l_1306))) && l_1295)) , 6L), p_50)))))) <= g_166[1]) , 0x5CL)))) , (-7L))))
                    {
                        return &g_368;
                    }
                    else
                    {
                        uint32_t l_1325[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1325[i] = 0x2FA03985L;
                        (*l_1306) = &p_49;
                        if (l_1325[1])
                            break;
                        if ((*p_52))
                            break;
                    }
                }
                for (l_1296 = 0; (l_1296 <= 1); l_1296 += 1)
                {
                    uint32_t l_1327[8] = {0x296FEE11L,0x296FEE11L,0x296FEE11L,0x296FEE11L,0x296FEE11L,0x296FEE11L,0x296FEE11L,0x296FEE11L};
                    uint32_t *l_1330 = &g_911[0][3][2];
                    int16_t **l_1383 = &l_1322;
                    int i;
                    for (g_221 = 0; (g_221 <= 1); g_221 += 1)
                    {
                        int32_t *l_1326[3][9][6] = {{{&l_1285,&l_1289[2][4][4],&l_1300[1][1],(void*)0,&l_1293,&l_1297},{&l_1287,&l_1296,(void*)0,&g_5,&l_1289[2][4][4],&l_1301},{&g_185,&g_4,&l_1296,&g_1220,&g_4,&l_1301},{&g_5,&l_1297,(void*)0,&l_1285,&l_1301,&l_1297},{&g_6[0],&l_1288,&l_1300[1][1],&g_185,&l_1300[1][1],&l_1288},{&g_6[0],&l_1297,&l_1301,&l_1285,(void*)0,&l_1297},{&g_5,&l_1301,&g_4,&g_1220,&l_1296,&g_4},{&g_185,&l_1301,&l_1289[2][4][4],&g_5,(void*)0,&l_1296},{&l_1287,&l_1297,&l_1293,(void*)0,&l_1300[1][1],&l_1289[2][4][4]}},{{&l_1285,&l_1288,&l_1293,(void*)0,&l_1301,&l_1296},{&l_1287,&l_1297,&g_368,&l_1301,(void*)0,(void*)0},{&l_1301,(void*)0,(void*)0,&l_1301,&g_368,&l_1300[1][2]},{&l_1293,&l_1282,&g_353,&l_1297,&l_1287,&l_1297},{&l_1296,&g_368,&g_5,&l_1288,&l_1287,&g_3},{&g_3,&l_1282,&g_185,&l_1297,&g_368,&g_353},{&l_1289[2][4][4],(void*)0,&l_1282,&g_4,(void*)0,&g_353},{&l_1297,&l_1300[1][2],&g_185,&l_1296,&g_353,&g_3},{&l_1288,&l_1297,&g_5,&l_1289[2][4][4],&g_5,&l_1297}},{{&l_1288,&g_3,&g_353,&l_1296,&g_185,&l_1300[1][2]},{&l_1297,&g_353,(void*)0,&g_4,&l_1282,(void*)0},{&l_1289[2][4][4],&g_353,&g_368,&l_1297,&g_185,&l_1282},{&g_3,&g_3,&l_1287,&l_1288,&g_5,&g_368},{&l_1296,&l_1297,&l_1287,&l_1297,&g_353,&l_1282},{&l_1293,&l_1300[1][2],&g_368,&l_1301,(void*)0,(void*)0},{&l_1301,(void*)0,(void*)0,&l_1301,&g_368,&l_1300[1][2]},{&l_1293,&l_1282,&g_353,&l_1297,&l_1287,&l_1297},{&l_1296,&g_368,&g_5,&l_1288,&l_1287,&g_3}}};
                        int i, j, k;
                        ++l_1327[5];
                    }
                    if ((l_1330 == (void*)0))
                    {
                        int32_t l_1347 = 0x68481AE6L;
                        int8_t *l_1353 = &g_1156;
                        int16_t *l_1354 = &g_734;
                        int32_t *l_1355 = &l_1297;
                        int32_t **l_1356 = (void*)0;
                        int32_t **l_1357 = (void*)0;
                        int32_t **l_1358 = &l_1355;
                        int32_t *l_1378 = &g_353;
                        int i, j;
                        p_49 &= (((((0xD1B661A51D37F227LL && (((&p_53 == &p_53) || (((g_662[l_1296][l_1296] && (!((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((*g_99) = (safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((*g_864) = 65527UL), g_662[l_1296][l_1296])), (((l_1347 = (((!(safe_sub_func_int64_t_s_s((((l_1346[2] = ((g_734 = (1UL <= (safe_mul_func_uint16_t_u_u((p_53 < (((p_50 || 0x59L) != g_662[l_1296][l_1296]) && l_1345)), (-3L))))) , (-1L))) != g_471[3][2][5]) > (*p_52)), l_1275[4]))) , g_662[l_1296][l_1296]) , 0xAAF89AF3L)) , (*g_1215)) , g_58)))) > l_1327[5]), p_50)), l_1292)) | (*p_52)))) && 0xAAE9BFF965A7EDEBLL) > (*p_52))) , l_1301)) == (-1L)) & 0x1BL) | (-6L)) | g_255);
                        (*l_1355) |= ((safe_add_func_int8_t_s_s(g_146, g_6[0])) < ((*l_1354) = (safe_div_func_int64_t_s_s((1L && (!((*l_1353) |= 1L))), ((*g_318) = l_1346[2])))));
                        (*l_1358) = l_1330;
                        (*l_1378) ^= (((**l_1358) , ((*l_1248) = ((((safe_mul_func_int8_t_s_s(((l_1376 = (((*g_863) != (void*)0) < (safe_sub_func_uint64_t_u_u((--(**g_98)), (((**l_1358) = (safe_rshift_func_int16_t_s_s((~(*g_864)), (safe_mod_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(0xAD0DL, (safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((l_1292 ^ 0x9A98L), l_1295)) && ((0x24B8E267L < l_1285) >= g_166[0])), 0x2AEDL)))) && 0x569C92D8B630C851LL) >= l_1300[1][1]), l_1302))))) , 1L))))) == 0xBAA83C2BL), g_514)) | g_519) , g_471[0][2][7]) , g_1377))) != &g_419[0][0]);
                    }
                    else
                    {
                        int32_t *l_1401 = &l_1293;
                        int i, j;
                        (*l_1401) = (safe_mod_func_uint16_t_u_u((g_154[7] | (l_1383 == (void*)0)), (safe_mul_func_int16_t_s_s(g_166[0], (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_662[l_1296][l_1296] ^= (safe_mul_func_uint8_t_u_u(((void*)0 != &l_1299), g_166[0]))), (((***l_1243) = ((((((*l_1330) = (+(safe_rshift_func_uint16_t_u_s(l_1289[3][2][2], (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((((safe_mod_func_int64_t_s_s((l_1282 = p_49), (*g_99))) < l_1289[2][3][5]) || g_61), l_1299)), g_166[1])))))) && (*p_52)) <= 0x1EL) <= 1L) != p_49)) ^ l_1249))), 3))))));
                    }
                }
                if ((*p_52))
                {
                    uint8_t *l_1414 = &g_662[0][1];
                    uint8_t *l_1415[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1415[i] = &g_150;
                    p_49 = ((safe_lshift_func_uint16_t_u_u(((*g_864) = (*g_864)), (safe_mul_func_uint16_t_u_u(0x9896L, ((safe_unary_minus_func_uint32_t_u(((((safe_add_func_uint64_t_u_u(((0L >= (p_53 , (l_1293 < 0x16609A5A23881A69LL))) <= ((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((+(*g_44)), (g_174 ^= ((*l_1414) = (&l_1297 != &l_1297))))), 0x7E17709AL)) ^ g_185)), 1UL)) | p_49) <= 1UL) <= p_53))) <= l_1416))))) == p_50);
                }
                else
                {
                    uint32_t l_1420[5][5] = {{0x7D6F9009L,0xDF0733FBL,0xDF0733FBL,0x7D6F9009L,0xDF0733FBL},{0x3D92FAE0L,1UL,0xAB885FEDL,1UL,0x3D92FAE0L},{0xDF0733FBL,0x7D6F9009L,0xDF0733FBL,0xDF0733FBL,0x7D6F9009L},{0x3D92FAE0L,0UL,0x86429E82L,1UL,0x86429E82L},{0x7D6F9009L,0x7D6F9009L,18446744073709551615UL,0x7D6F9009L,0x7D6F9009L}};
                    int32_t l_1421[8] = {(-2L),0x6FA72E24L,(-2L),(-2L),0x6FA72E24L,(-2L),(-2L),0x6FA72E24L};
                    int32_t *l_1451 = &l_1283;
                    uint32_t **l_1460 = &g_1043;
                    int i, j;
                    for (g_734 = 19; (g_734 == 15); g_734--)
                    {
                        int32_t *l_1419 = &l_1252;
                        int8_t *l_1447 = &l_1346[2];
                        int32_t *****l_1449[9][3][7] = {{{&l_1448,(void*)0,(void*)0,&l_1448,&l_1237,(void*)0,&l_1448},{(void*)0,(void*)0,(void*)0,&l_1448,&l_1448,&l_1237,(void*)0},{&l_1237,&l_1448,(void*)0,(void*)0,&l_1448,(void*)0,&l_1448}},{{&l_1448,&l_1448,(void*)0,&l_1237,&l_1237,&l_1448,&l_1448},{&l_1448,&l_1237,&l_1237,(void*)0,&l_1237,&l_1237,&l_1448},{(void*)0,&l_1448,&l_1237,&l_1448,&l_1448,(void*)0,(void*)0}},{{&l_1448,&l_1448,(void*)0,&l_1448,&l_1448,&l_1448,&l_1448},{(void*)0,&l_1237,&l_1237,(void*)0,&l_1448,&l_1448,&l_1448},{&l_1448,(void*)0,&l_1237,(void*)0,&l_1448,&l_1448,&l_1237}},{{&l_1237,&l_1237,&l_1237,(void*)0,&l_1448,(void*)0,(void*)0},{&l_1237,&l_1448,&l_1448,(void*)0,(void*)0,&l_1237,(void*)0},{&l_1237,(void*)0,&l_1448,(void*)0,&l_1448,&l_1448,&l_1448}},{{&l_1448,&l_1237,(void*)0,&l_1237,(void*)0,&l_1448,(void*)0},{&l_1237,&l_1237,&l_1448,&l_1237,&l_1237,&l_1448,&l_1448},{(void*)0,&l_1448,&l_1448,(void*)0,&l_1237,&l_1237,&l_1237}},{{(void*)0,&l_1448,&l_1448,&l_1237,(void*)0,(void*)0,&l_1448},{&l_1448,&l_1448,&l_1237,&l_1237,&l_1448,&l_1448,&l_1448},{&l_1448,&l_1448,&l_1448,&l_1237,(void*)0,&l_1448,&l_1448}},{{&l_1237,(void*)0,&l_1448,&l_1237,&l_1448,&l_1448,(void*)0},{&l_1237,&l_1448,&l_1237,&l_1237,&l_1448,&l_1237,(void*)0},{(void*)0,&l_1448,&l_1448,&l_1448,(void*)0,&l_1448,(void*)0}},{{&l_1237,&l_1448,(void*)0,(void*)0,&l_1448,&l_1448,&l_1448},{&l_1448,&l_1448,&l_1448,&l_1237,&l_1237,&l_1448,&l_1448},{&l_1237,&l_1237,&l_1237,&l_1448,&l_1237,&l_1448,&l_1448}},{{(void*)0,&l_1237,&l_1237,(void*)0,&l_1237,&l_1237,(void*)0},{(void*)0,(void*)0,&l_1237,&l_1448,&l_1448,&l_1448,&l_1237},{(void*)0,&l_1448,&l_1237,&l_1448,(void*)0,&l_1448,&l_1237}}};
                        int32_t ****l_1450[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_1450[i] = &g_588;
                        l_1419 = &l_1293;
                        g_409[0] = &g_6[0];
                        (*l_1419) = (p_49 = (l_1421[1] = l_1420[2][4]));
                        (*l_1419) ^= ((((l_1420[3][2] | (safe_sub_func_int16_t_s_s(((((0L ^ ((*g_1377) ^= ((safe_add_func_int8_t_s_s(((safe_add_func_int64_t_s_s(0x0A9553810BDA0E4BLL, (safe_sub_func_int64_t_s_s((-7L), (((((l_1450[0] = ((((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(((*l_1447) = (0xF2DCL <= ((safe_div_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((*g_99), (safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((((safe_add_func_uint32_t_u_u(1UL, ((((((-9L) ^ p_53) && 18446744073709551611UL) > (*g_318)) > g_4) <= l_1421[4]))) < l_1287) == l_1299) && 0xFFE1DC11L) && p_49), l_1446)), 7L)))), 0x85FBC1E0E81CFF35LL)), 0x8FL)) >= p_53))), 2)) ^ p_49), p_50)) , 0xE4896B31L) , 249UL) , l_1448)) != &g_588) < 1UL) == 18446744073709551615UL) , 0UL))))) , l_1289[3][2][2]), 0x4EL)) | l_1290[1]))) || 7L) , &g_967) == (void*)0), 65527UL))) && (*p_52)) <= 0x5AC7EE24L) <= 0x40E776D8L);
                    }
                    (*l_1451) ^= (*p_52);
                    for (g_61 = 0; (g_61 <= (-9)); g_61 = safe_sub_func_uint16_t_u_u(g_61, 4))
                    {
                        int32_t *l_1454 = &l_1292;
                        return &g_6[0];
                    }
                    (*l_1451) = ((((safe_mul_func_uint8_t_u_u(0xE3L, (safe_mul_func_int16_t_s_s(((*p_52) | (+(((((void*)0 == l_1460) > (~((safe_add_func_int16_t_s_s((((((((&g_174 != ((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_49, (**g_863))), ((safe_div_func_uint16_t_u_u((l_1298 ^ 0x1F55A328L), g_911[3][0][3])) , p_53))) , l_1470)) , (*l_1451)) | l_1287) <= g_734) <= 0x49F1C52DL) , l_1301) == 0xB033L), g_154[0])) < 0xBBECD222L))) , (*g_99)) | 0xD8EBAED71234332ELL))), 0L)))) <= (*g_1377)) >= g_353) <= 0x2F43L);
                }
            }
            (*l_1471) = &p_49;
        }
        if ((*p_52))
            continue;
        return &g_368;
    }
    --l_1481;
    l_1485[2]++;
    (*l_1473) &= (g_471[3][0][4] & (((safe_rshift_func_uint8_t_u_s((((*g_44) ^= (!((*l_1478) = ((++(**g_863)) || (!(((safe_mod_func_int8_t_s_s((-6L), (safe_mod_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(0xF384L, ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(l_1508, ((safe_sub_func_uint64_t_u_u(0x3FED2DCBED7B7201LL, 0x4A3C69B85B0EAC2DLL)) > ((safe_mul_func_int8_t_s_s((g_166[0] = g_61), (((*l_1477) , (+p_50)) ^ l_1514))) ^ (*g_318))))), g_662[0][1])) && 0x295AL))), 0x397FL)), (*p_52))) < p_49), (*l_1477))))) & (*l_1472)) || (*l_1475))))))) != (-6L)), p_50)) == 4294967292UL) ^ (*l_1472)));
    return &g_6[0];
}







static int32_t func_54(int16_t p_55)
{
    int32_t *l_1224 = &g_185;
    int32_t *l_1225 = &g_368;
    int32_t *l_1226 = &g_185;
    int32_t *l_1227 = &g_116;
    int32_t *l_1228[2];
    int64_t l_1229 = 0xD1D450C51B1896ABLL;
    uint32_t l_1230 = 0xA822B0D4L;
    int i;
    for (i = 0; i < 2; i++)
        l_1228[i] = &g_185;
    ++l_1230;
    (*l_1224) = (*l_1224);
    return p_55;
}







static int32_t func_62(int8_t p_63, int64_t * p_64, int16_t p_65, uint8_t p_66)
{
    int32_t * const l_1221 = &g_368;
    int32_t **l_1222[6] = {&g_409[0],&g_409[0],&g_409[0],&g_409[0],&g_409[0],&g_409[0]};
    int32_t **l_1223 = &g_409[0];
    int i;
    (*l_1223) = l_1221;
    return p_66;
}







static int8_t func_67(uint8_t p_68)
{
    int32_t *l_85 = &g_3;
    uint64_t *l_88 = &g_45;
    uint64_t **l_89 = &g_44;
    uint64_t ***l_100 = &g_98;
    uint8_t *l_106[2][2][2];
    int32_t l_108 = (-4L);
    int64_t *l_111[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t l_112 = 0x3419813DA773CE50LL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_106[i][j][k] = &g_107;
        }
    }
    g_1220 ^= func_73((l_112 = (safe_lshift_func_int16_t_s_u(func_80(l_85, ((((((*l_89) = l_88) != &g_45) , (*l_85)) < (((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((1L > ((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_4, (((*l_100) = g_98) == &g_99))), (safe_lshift_func_uint8_t_u_u((g_107 = (((l_108 ^= (safe_add_func_int64_t_s_s((!(*l_85)), p_68))) > (*l_85)) <= (*l_85))), 2)))) ^ p_68)) , (*l_85)), (*l_85))), (*l_85))) <= 0UL) <= g_6[0])) , (void*)0), l_88, g_45), 3))), &g_45, &g_58, p_68);
    return p_68;
}







static int32_t func_73(int64_t p_74, const uint64_t * const p_75, int64_t * p_76, uint32_t p_77)
{
    uint32_t l_113[3][8] = {{0xF873A649L,0xF873A649L,0x5A9921A3L,0x95210A6DL,18446744073709551610UL,0x5A9921A3L,18446744073709551610UL,0x95210A6DL},{18446744073709551610UL,0x95210A6DL,18446744073709551610UL,3UL,0x95210A6DL,2UL,2UL,0x95210A6DL},{0x95210A6DL,2UL,2UL,0x95210A6DL,3UL,18446744073709551610UL,0x95210A6DL,18446744073709551610UL}};
    uint64_t ***l_129 = &g_98;
    uint32_t l_149 = 0xE7D4E858L;
    int32_t l_155[5] = {(-5L),(-5L),(-5L),(-5L),(-5L)};
    uint16_t l_293 = 0x1CC0L;
    uint64_t **l_358 = &g_44;
    int16_t l_367 = 0L;
    int32_t **l_476 = &g_409[0];
    int16_t * const l_507 = &l_367;
    uint32_t l_557 = 0xAD53AD06L;
    int64_t ***l_762 = &g_317[1];
    int32_t l_763 = 0xB2EE2920L;
    uint32_t l_832 = 5UL;
    uint64_t l_884 = 0x753C79360EC4DE86LL;
    const uint8_t l_965 = 0x96L;
    uint16_t **l_972[5] = {&g_864,&g_864,&g_864,&g_864,&g_864};
    int64_t *****l_976[4][1];
    int8_t l_1149 = 0xACL;
    int32_t *l_1212 = &g_1213[6][7][0];
    int32_t ** const l_1211 = &l_1212;
    int32_t l_1219[8][6] = {{0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L},{0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L},{0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L},{0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L},{0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L},{0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L},{0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L},{0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L,0x4F6ECD85L}};
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_976[i][j] = (void*)0;
    }
lbl_819:
    for (g_45 = 0; (g_45 <= 2); g_45 += 1)
    {
        int32_t *l_114 = (void*)0;
        int32_t *l_115[9];
        uint64_t ***l_130 = &g_98;
        int16_t *l_222[7][7] = {{&g_179,&g_179,&g_179,&g_179,&g_179,&g_179,&g_179},{&g_179,&g_179,&g_179,&g_179,(void*)0,&g_179,&g_179},{&g_179,&g_179,&g_179,&g_179,&g_179,&g_179,&g_179},{(void*)0,(void*)0,&g_179,&g_179,&g_179,&g_179,&g_179},{&g_179,&g_179,&g_179,&g_179,&g_179,&g_179,&g_179},{&g_179,&g_179,(void*)0,&g_179,&g_179,&g_179,(void*)0},{&g_179,&g_179,&g_179,&g_179,&g_179,&g_179,&g_179}};
        int32_t l_249 = (-3L);
        uint64_t l_299[7][5][6] = {{{0x37323DD3832468EDLL,0xFBF458E1398D3250LL,5UL,5UL,0xFBF458E1398D3250LL,0x37323DD3832468EDLL},{0x37323DD3832468EDLL,0xFDF3A0AF4F798568LL,0UL,5UL,0xFDF3A0AF4F798568LL,5UL},{0x37323DD3832468EDLL,0x694AF43C66CA5423LL,0x37323DD3832468EDLL,5UL,0x694AF43C66CA5423LL,0UL},{0x37323DD3832468EDLL,0xFBF458E1398D3250LL,5UL,5UL,0xFBF458E1398D3250LL,0x37323DD3832468EDLL},{0x37323DD3832468EDLL,0xFDF3A0AF4F798568LL,0UL,5UL,0xFDF3A0AF4F798568LL,5UL}},{{0x37323DD3832468EDLL,0x694AF43C66CA5423LL,0x37323DD3832468EDLL,5UL,0x694AF43C66CA5423LL,0UL},{0x37323DD3832468EDLL,0xFBF458E1398D3250LL,5UL,5UL,0xFBF458E1398D3250LL,0x37323DD3832468EDLL},{0x37323DD3832468EDLL,0xFDF3A0AF4F798568LL,0UL,5UL,0xFDF3A0AF4F798568LL,5UL},{0x37323DD3832468EDLL,0x694AF43C66CA5423LL,0x37323DD3832468EDLL,5UL,0x694AF43C66CA5423LL,0UL},{0x37323DD3832468EDLL,0xFBF458E1398D3250LL,5UL,5UL,0xFBF458E1398D3250LL,0x37323DD3832468EDLL}},{{0x37323DD3832468EDLL,0xFDF3A0AF4F798568LL,0UL,5UL,0xFDF3A0AF4F798568LL,5UL},{0x37323DD3832468EDLL,0x694AF43C66CA5423LL,0x37323DD3832468EDLL,5UL,0x694AF43C66CA5423LL,0UL},{0x37323DD3832468EDLL,0xFBF458E1398D3250LL,5UL,5UL,0xFBF458E1398D3250LL,0x37323DD3832468EDLL},{0x37323DD3832468EDLL,0xFDF3A0AF4F798568LL,0UL,5UL,0xFDF3A0AF4F798568LL,5UL},{0x37323DD3832468EDLL,0x694AF43C66CA5423LL,0x37323DD3832468EDLL,5UL,0x694AF43C66CA5423LL,0UL}},{{0x37323DD3832468EDLL,0xFBF458E1398D3250LL,5UL,5UL,0xFBF458E1398D3250LL,0x37323DD3832468EDLL},{0x37323DD3832468EDLL,0xFDF3A0AF4F798568LL,0UL,5UL,0xFDF3A0AF4F798568LL,5UL},{0x37323DD3832468EDLL,0x694AF43C66CA5423LL,0x37323DD3832468EDLL,5UL,0x694AF43C66CA5423LL,0UL},{0x659DC613328CD334LL,5UL,4UL,4UL,5UL,0x659DC613328CD334LL},{0x659DC613328CD334LL,0x37323DD3832468EDLL,0UL,4UL,0x37323DD3832468EDLL,4UL}},{{0x659DC613328CD334LL,0UL,0x659DC613328CD334LL,4UL,0UL,0UL},{0x659DC613328CD334LL,5UL,4UL,4UL,5UL,0x659DC613328CD334LL},{0x659DC613328CD334LL,0x37323DD3832468EDLL,0UL,4UL,0x37323DD3832468EDLL,4UL},{0x659DC613328CD334LL,0UL,0x659DC613328CD334LL,4UL,0UL,0UL},{0x659DC613328CD334LL,5UL,4UL,4UL,5UL,0x659DC613328CD334LL}},{{0x659DC613328CD334LL,0x37323DD3832468EDLL,0UL,4UL,0x37323DD3832468EDLL,4UL},{0x659DC613328CD334LL,0UL,0x659DC613328CD334LL,4UL,0UL,0UL},{0x659DC613328CD334LL,5UL,4UL,4UL,5UL,0x659DC613328CD334LL},{0x659DC613328CD334LL,0x37323DD3832468EDLL,0UL,4UL,0x37323DD3832468EDLL,4UL},{0x659DC613328CD334LL,0UL,0x659DC613328CD334LL,4UL,0UL,0UL}},{{0x659DC613328CD334LL,5UL,4UL,4UL,5UL,0x659DC613328CD334LL},{0x659DC613328CD334LL,0x37323DD3832468EDLL,0UL,4UL,0x37323DD3832468EDLL,4UL},{0x659DC613328CD334LL,0UL,0x659DC613328CD334LL,4UL,0UL,0UL},{0x659DC613328CD334LL,5UL,4UL,4UL,5UL,0x659DC613328CD334LL},{0x659DC613328CD334LL,0x37323DD3832468EDLL,0UL,4UL,0x37323DD3832468EDLL,4UL}}};
        int64_t **l_319 = &g_318;
        uint16_t l_323 = 0xBF55L;
        uint8_t l_351[3];
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_115[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_351[i] = 7UL;
        g_116 &= l_113[0][2];
        if (g_6[0])
            continue;
        for (g_116 = 0; (g_116 <= 2); g_116 += 1)
        {
            int32_t l_117 = 0xFD6C9D3DL;
            uint64_t ** const * const l_128 = &g_98;
            uint64_t * const l_145 = &g_146;
            uint64_t * const *l_144 = &l_145;
            uint64_t * const **l_143 = &l_144;
            uint64_t * const *l_148[1][7] = {{&l_145,&l_145,&l_145,&l_145,&l_145,&l_145,&l_145}};
            uint64_t * const **l_147 = &l_148[0][3];
            int8_t *l_151 = (void*)0;
            int8_t *l_152 = (void*)0;
            int8_t *l_153 = &g_154[0];
            uint64_t l_183 = 9UL;
            int32_t l_187[6][3][10] = {{{0xA617A08BL,3L,6L,3L,0xA617A08BL,0x52890DC2L,3L,0L,(-2L),0xA617A08BL},{0xA617A08BL,0xB4E4937CL,0x41547420L,3L,0x29419120L,0x29419120L,3L,0x41547420L,0xB4E4937CL,0xA617A08BL},{0x29419120L,3L,0x41547420L,0xB4E4937CL,0xA617A08BL,0x29419120L,0xB4E4937CL,0L,0xB4E4937CL,0x29419120L}},{{0xA617A08BL,3L,6L,3L,0xA617A08BL,0x52890DC2L,3L,0L,(-2L),0xA617A08BL},{0xA617A08BL,0xB4E4937CL,0x41547420L,3L,0x29419120L,0x29419120L,3L,0x41547420L,0xB4E4937CL,0xA617A08BL},{0x29419120L,3L,0x41547420L,0xB4E4937CL,0xA617A08BL,0x29419120L,0xB4E4937CL,0L,0xB4E4937CL,0x29419120L}},{{0xA617A08BL,3L,6L,3L,0xA617A08BL,0x52890DC2L,3L,0L,(-2L),0xA617A08BL},{0xA617A08BL,0xB4E4937CL,0x41547420L,3L,0x29419120L,0x29419120L,3L,0x41547420L,0xB4E4937CL,0xA617A08BL},{0x29419120L,0x702682AEL,0L,0xBDACD6EFL,0xB4E4937CL,(-2L),0xBDACD6EFL,0x06A2FBD8L,0xBDACD6EFL,(-2L)}},{{0xB4E4937CL,0x702682AEL,2L,0x702682AEL,0xB4E4937CL,3L,0x702682AEL,0x06A2FBD8L,0xBBB315D7L,0xB4E4937CL},{0xB4E4937CL,0xBDACD6EFL,0L,0x702682AEL,(-2L),(-2L),0x702682AEL,0L,0xBDACD6EFL,0xB4E4937CL},{(-2L),0x702682AEL,0L,0xBDACD6EFL,0xB4E4937CL,(-2L),0xBDACD6EFL,0x06A2FBD8L,0xBDACD6EFL,(-2L)}},{{0xB4E4937CL,0x702682AEL,2L,0x702682AEL,0xB4E4937CL,3L,0x702682AEL,0x06A2FBD8L,0xBBB315D7L,0xB4E4937CL},{0xB4E4937CL,0xBDACD6EFL,0L,0x702682AEL,(-2L),(-2L),0x702682AEL,0L,0xBDACD6EFL,0xB4E4937CL},{(-2L),0x702682AEL,0L,0xBDACD6EFL,0xB4E4937CL,(-2L),0xBDACD6EFL,0x06A2FBD8L,0xBDACD6EFL,(-2L)}},{{0xB4E4937CL,0x702682AEL,2L,0x702682AEL,0xB4E4937CL,3L,0x702682AEL,0x06A2FBD8L,0xBBB315D7L,0xB4E4937CL},{0xB4E4937CL,0xBDACD6EFL,0L,0x702682AEL,(-2L),(-2L),0x702682AEL,0L,0xBDACD6EFL,0xB4E4937CL},{(-2L),0x702682AEL,0L,0xBDACD6EFL,0xB4E4937CL,(-2L),0xBDACD6EFL,0x06A2FBD8L,0xBDACD6EFL,(-2L)}}};
            int8_t l_294[1][3][7] = {{{(-1L),0L,(-1L),0L,(-1L),0L,(-1L)},{1L,1L,1L,1L,1L,1L,1L},{(-1L),0L,(-1L),0L,(-1L),0L,(-1L)}}};
            uint8_t *l_352 = &g_107;
            int i, j, k;
            for (g_58 = 0; (g_58 <= 2); g_58 += 1)
            {
                l_117 = 7L;
            }
            if ((((*l_153) ^= (safe_mul_func_int8_t_s_s(0x12L, (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s(l_113[g_116][(g_45 + 4)], (safe_div_func_uint16_t_u_u(((l_128 != (l_130 = l_129)) ^ ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(((((void*)0 == (*l_129)) & (safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((((*l_147) = ((*l_143) = (void*)0)) == &g_44), (l_113[g_45][g_45] <= l_149))), 3)), (**g_98)))) || 0x1B111D6BL), l_113[g_116][(g_45 + 4)])) > p_77), p_74)), g_146)) , p_74)), g_150)))) == g_5), p_77)) || l_113[0][4]), p_74))))) , 0x11D03F4AL))
            {
                uint16_t l_156 = 65529UL;
                int32_t l_159 = (-1L);
                int32_t **l_167 = &l_115[8];
                l_156--;
                for (g_58 = 0; (g_58 <= 7); g_58 += 1)
                {
                    int i;
                    for (l_117 = 7; (l_117 >= 0); l_117 -= 1)
                    {
                        int i;
                        return l_155[(g_116 + 2)];
                    }
                    g_166[0] ^= ((l_155[g_116] , ((((l_159 = 254UL) <= (safe_add_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s(((l_155[g_45] < (l_155[g_45] > (g_146 , g_154[0]))) != (safe_rshift_func_int8_t_s_u(1L, (((void*)0 != &g_150) < 0x49L)))), g_154[0])) >= l_113[g_45][g_45]), 0L))) > (*g_99)) & 7L)) == g_6[0]);
                    for (l_156 = 0; l_156 < 8; l_156 += 1)
                    {
                        g_154[l_156] = 0x79L;
                    }
                }
                (*l_167) = &l_155[3];
            }
            else
            {
                int32_t l_184 = 0x4B2AF2F4L;
                int64_t **l_298 = (void*)0;
                uint64_t l_322 = 18446744073709551611UL;
                if (((l_155[2] = (*g_99)) || (*p_75)))
                {
                    uint8_t *l_170 = (void*)0;
                    uint8_t *l_171 = &g_150;
                    int32_t l_180 = 0L;
                    if ((((*g_44) && (safe_div_func_int64_t_s_s(g_166[1], (p_77 ^ ((*l_171) = g_166[0]))))) && (((safe_lshift_func_int8_t_s_u((((g_174 = p_74) == (safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s(1UL, ((((g_179 &= (l_155[4] ^= 0L)) >= l_180) && (safe_mod_func_int16_t_s_s(g_154[0], g_58))) > (*p_76)))) <= l_183) >= 0xEED95D173CA94711LL), 0x44CAL))) > 0x8FE932ECC1E89F1BLL), l_184)) >= g_45) && g_6[0])))
                    {
                        uint32_t l_186[9] = {1UL,1UL,0x2A4288E9L,1UL,1UL,0x2A4288E9L,1UL,1UL,0x2A4288E9L};
                        int i;
                        l_186[8] &= (l_184 = g_185);
                        if (g_146)
                            continue;
                        if (p_74)
                            continue;
                    }
                    else
                    {
                        if (p_74)
                            break;
                    }
                }
                else
                {
                    uint32_t l_188 = 4294967292UL;
                    int16_t *l_198[3];
                    uint8_t *l_203 = &g_150;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_198[i] = &g_179;
                    ++l_188;
                    if (((0xF4L == 0x79L) , (safe_mul_func_int16_t_s_s((l_184 |= ((((&g_98 != &g_98) == (safe_lshift_func_int8_t_s_u((l_113[g_45][g_45] >= (!g_3)), 0))) ^ (((((p_77 > (safe_sub_func_int32_t_s_s(l_113[0][7], g_174))) | (**g_98)) != g_174) , 1UL) == 0x6BL)) ^ (*g_99))), g_58))))
                    {
                        int16_t *l_204 = &g_179;
                        int32_t l_219 = 0x86818F9BL;
                        uint16_t *l_220 = &g_221;
                        int32_t **l_223 = (void*)0;
                        int32_t **l_224 = &l_115[4];
                        l_219 = ((*p_76) && (((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_203 == (void*)0), ((((void*)0 == l_204) | (g_154[1] , l_188)) != p_77))), (((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u(((*l_220) = ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((g_4 > 1L), l_184)) && 0x1642A789L), (*g_44))), l_188)), l_219)), l_187[3][1][9])) <= 0x2F4987F47BCE98AALL)), 1)) < g_154[3]), 5)) , l_222[0][6]) == l_222[2][3]))) | p_77) || g_4));
                        g_185 |= 0x046FCD89L;
                        (*l_224) = l_115[7];
                        return l_188;
                    }
                    else
                    {
                        int32_t l_246 = (-7L);
                        int64_t *l_247 = &g_248;
                        l_249 = (((*l_247) &= ((~((safe_sub_func_int32_t_s_s((-4L), (p_74 & 0x05L))) & (g_3 && (p_77 , (((((((!(safe_lshift_func_int8_t_s_u((5L == (safe_unary_minus_func_uint64_t_u(((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u((((~(safe_rshift_func_int16_t_s_u((255UL & (((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_u(((((0x29D5L > ((*p_76) < l_246)) == 0x98537666L) , l_155[3]) || g_221), 1)) <= (*g_44)) | l_246) >= g_45), 2)) & 255UL), 7)) , p_77) && l_246)), g_45))) > l_246) , (*g_44)))), 0xCBL)) , l_246)))), p_77))) ^ g_146) , g_107) , 0xFAE5L) < 0UL) >= 0x181FL) <= g_154[0]))))) , (-6L))) > g_166[0]);
                    }
                }
                if (g_116)
                    continue;
                for (g_107 = 0; (g_107 > 24); g_107 = safe_add_func_int16_t_s_s(g_107, 6))
                {
                    uint32_t *l_254 = &g_255;
                    int32_t l_258[1][8][1];
                    int64_t *l_262 = &g_248;
                    int64_t **l_261 = &l_262;
                    int32_t l_263 = 0x6A51E36DL;
                    int64_t ***l_316[8][1][6];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 8; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_258[i][j][k] = (-1L);
                        }
                    }
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 6; k++)
                                l_316[i][j][k] = (void*)0;
                        }
                    }
                    l_263 |= (l_113[0][3] || (safe_add_func_int64_t_s_s(((*p_76) = ((++(*l_254)) || l_258[0][7][0])), (l_184 == (safe_mul_func_uint16_t_u_u((((*l_261) = &g_248) != &g_248), l_149))))));
                    if ((safe_lshift_func_uint8_t_u_s(0x9CL, 7)))
                    {
                        int32_t l_292 = 0x5960C23EL;
                        uint16_t *l_295[6] = {&l_293,&l_293,&g_221,&l_293,&l_293,&g_221};
                        uint8_t *l_296 = (void*)0;
                        uint8_t *l_297 = &g_174;
                        int i;
                        l_299[3][4][0] = (((safe_mul_func_uint16_t_u_u((((((safe_rshift_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s(((((((void*)0 == &g_44) , ((safe_div_func_uint16_t_u_u((((*l_297) = (l_184 = (((l_187[0][0][6] = (g_166[0] & (+(~((safe_mod_func_uint8_t_u_u((&p_77 != (((safe_mod_func_int8_t_s_s(3L, ((g_166[0] , ((g_6[0] < (safe_div_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s(g_166[0], l_263)), l_292)), 2)) ^ 18446744073709551615UL), l_292)), g_6[0])) > l_263) == l_293), g_248))) != l_294[0][1][5])) || 0UL))) & g_255) , (void*)0)), 0x17L)) <= 4294967287UL))))) , g_45) <= (*p_75)))) || p_77), g_4)) == l_155[0])) , 8UL) , l_184) <= 1UL), 2UL)) , 0x7AL) <= l_292) ^ l_292), 13)) < 0xB2L) , g_6[0]) , l_298) != (void*)0), g_45)) >= g_116) > p_74);
                    }
                    else
                    {
                        l_184 = (safe_lshift_func_int8_t_s_u((0UL & ((safe_sub_func_int16_t_s_s(((((*l_262) = (*p_76)) == (l_187[3][1][9] &= ((void*)0 != &g_98))) && ((*p_76) , ((&g_6[0] == &l_184) , (safe_rshift_func_int16_t_s_u(p_77, p_74))))), 0xFB83L)) , l_263)), g_185));
                    }
                    l_323 = (safe_sub_func_int8_t_s_s(p_77, (safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((g_317[1] = l_298) == l_319), (((*l_262) = (safe_mul_func_int8_t_s_s(0x4FL, g_174))) >= ((g_255 < ((**g_98) , l_322)) & (l_184 = ((p_74 | l_294[0][1][5]) && p_74)))))), p_74)), g_154[0])), 0xC709768DL))));
                }
            }
            if ((+(safe_lshift_func_int8_t_s_s(l_113[1][3], (g_150 | (safe_add_func_int16_t_s_s((((safe_add_func_int32_t_s_s(l_187[5][2][6], (((l_294[0][2][1] , (safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((((*l_153) |= (7UL || (((((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u(((*l_352) = ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_113[g_116][(g_45 + 4)] || ((safe_mod_func_int16_t_s_s(g_166[1], ((safe_sub_func_int16_t_s_s((l_351[0] | l_183), 0x0AE1L)) || (*p_75)))) < (*p_75))), g_146)), l_293)), 3)) <= l_155[3])), 2)) > l_113[0][2]) && l_117), p_77)), g_150)) , (*p_76)) , g_3) | l_183) >= p_77))) && 9L), 0xFBD9L)), (*p_75)))) > 0x82L) , l_155[2]))) < 0x3D1669A5E658F83ALL) ^ g_353), p_74)))))))
            {
                int32_t **l_354 = &l_115[8];
                (*l_354) = &g_116;
            }
            else
            {
                return p_77;
            }
            for (g_248 = (-21); (g_248 < (-17)); ++g_248)
            {
                uint64_t l_357 = 0x3B3BC167C2F411FCLL;
                uint64_t ***l_359 = &l_358;
                int32_t l_366 = 0x0D219FDFL;
                uint64_t l_370[4];
                int32_t l_404[8] = {7L,7L,7L,7L,7L,7L,7L,7L};
                uint32_t * const l_423 = &g_255;
                int32_t *l_433[8][4] = {{&l_366,&g_185,(void*)0,&l_404[2]},{&l_155[2],&g_4,&l_404[2],&l_366},{&l_404[2],&l_366,&l_404[6],&l_366},{&g_5,&g_4,&g_6[0],&l_404[2]},{&l_366,&g_185,&l_366,&g_3},{&g_6[0],&g_5,&l_404[7],&l_404[7]},{&g_6[0],&g_6[0],&l_366,&l_366},{&l_366,&l_404[7],&g_6[0],&g_185}};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_370[i] = 7UL;
                g_353 = l_357;
                if ((((g_98 = (*l_130)) == ((*l_359) = l_358)) & ((l_183 , &g_317[1]) == (void*)0)))
                {
                    const uint32_t l_364 = 18446744073709551615UL;
                    int32_t l_365 = (-7L);
                    int32_t l_369 = 0x7675F052L;
                    uint16_t *l_382 = &l_293;
                    uint16_t *l_387 = &l_323;
                    int32_t l_405 = (-1L);
                    int16_t l_418 = 0L;
                    uint32_t *l_422[9] = {(void*)0,&g_419[1][3],(void*)0,&g_419[1][3],(void*)0,&g_419[1][3],(void*)0,&g_419[1][3],(void*)0};
                    int i;
                    l_365 |= (safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s(4L, l_364)), 8));
                    l_370[3]++;
                    if ((+(safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((l_155[1] |= g_221), (((*l_382) = (safe_mul_func_uint16_t_u_u(0xB85EL, l_293))) & (((((safe_rshift_func_uint8_t_u_u(((*p_75) != (safe_sub_func_uint16_t_u_u((++(*l_387)), (safe_mod_func_int8_t_s_s(g_146, (safe_lshift_func_int8_t_s_u((g_150 == (safe_mod_func_int32_t_s_s(0xB2A59423L, ((safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((~g_221), (((safe_mod_func_int32_t_s_s(g_146, 0x3D9FBB38L)) <= g_255) && (*p_75)))), g_185)) | l_367)))), 4))))))), 6)) | l_357) > g_248) , (void*)0) != &p_74)))), (-5L)))))
                    {
                        int16_t l_403 = 1L;
                        g_406[3]--;
                        g_409[0] = &g_116;
                        if (p_74)
                            continue;
                    }
                    else
                    {
                        uint8_t l_410 = 0xD7L;
                        int32_t **l_425[1][5][6] = {{{&l_114,&l_114,&l_114,&l_114,&g_409[0],&l_115[8]},{&l_115[8],&l_114,&g_409[0],&l_114,&l_114,(void*)0},{&l_114,&l_114,(void*)0,(void*)0,&l_114,&l_114},{&l_115[8],&l_114,&l_115[0],&l_114,&l_115[0],&l_114},{&l_115[0],&l_115[8],(void*)0,&g_409[0],&g_409[0],(void*)0}}};
                        int32_t ***l_424 = &l_425[0][2][3];
                        int i, j, k;
                        --l_410;
                        l_187[3][1][9] ^= (((p_74 ^ (safe_rshift_func_int16_t_s_s((l_155[0] = (safe_sub_func_uint32_t_u_u(l_410, (((g_419[3][1] = ((g_174 > (0x1DL || (safe_unary_minus_func_int64_t_s(((*p_76) = l_418))))) & (*g_44))) < p_77) == (safe_add_func_uint32_t_u_u(l_370[3], (l_405 = (&l_294[0][2][0] == (void*)0)))))))), g_221))) , l_422[7]) == l_423);
                        (*l_424) = &g_409[0];
                    }
                }
                else
                {
                    int64_t ***l_449 = (void*)0;
                    for (l_117 = 0; (l_117 > 22); l_117++)
                    {
                        int32_t **l_428 = (void*)0;
                        int32_t **l_429 = &l_115[8];
                        (*l_429) = l_114;
                    }
                    for (l_367 = 24; (l_367 < (-13)); l_367 = safe_sub_func_int8_t_s_s(l_367, 6))
                    {
                        int32_t **l_432[10] = {&l_114,&g_409[0],&g_409[0],&l_114,&g_409[0],&g_409[0],&l_114,&g_409[0],&g_409[0],&l_114};
                        int i;
                        l_433[7][1] = (((*l_153) = p_74) , &g_116);
                    }
                    for (l_357 = (-3); (l_357 > 15); ++l_357)
                    {
                        int32_t **l_450 = &l_433[7][1];
                        (*l_450) = (((++g_221) , (safe_sub_func_uint32_t_u_u(((1UL > g_154[0]) && ((p_74 || (~(safe_add_func_uint16_t_u_u(g_166[0], g_174)))) == (g_419[3][1] < (safe_lshift_func_int8_t_s_u(0x05L, 0))))), (safe_lshift_func_int8_t_s_u((0x93L == (safe_mod_func_uint32_t_u_u(((void*)0 != l_449), (-7L)))), 5))))) , &l_187[3][0][6]);
                        if (p_77)
                            continue;
                    }
                }
            }
        }
    }
    for (l_149 = 0; (l_149 >= 45); l_149 = safe_add_func_int32_t_s_s(l_149, 9))
    {
        int32_t **l_456[5][3];
        uint16_t l_469 = 0x98BBL;
        uint32_t *l_479 = (void*)0;
        int8_t l_555 = 0L;
        uint8_t l_606 = 0xB4L;
        uint64_t *l_648 = &g_146;
        uint64_t ***l_694[3][3];
        uint32_t l_735 = 1UL;
        uint32_t l_759 = 18446744073709551615UL;
        int16_t *l_789 = &g_179;
        uint16_t l_797 = 0xD7A1L;
        int32_t l_944 = (-1L);
        int8_t l_949[10][3] = {{0x71L,0xEBL,0L},{1L,(-1L),1L},{0xF7L,0x71L,0x98L},{0x3BL,1L,1L},{0x98L,0xF7L,0L},{0x0DL,0x3BL,(-1L)},{0x98L,0x98L,0x53L},{0x3BL,0x0DL,(-1L)},{0xF7L,0x98L,0xF7L},{1L,0x3BL,(-1L)}};
        uint32_t *l_1036 = &l_832;
        uint32_t **l_1035 = &l_1036;
        int64_t **l_1102 = &g_318;
        int64_t l_1115 = (-1L);
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 3; j++)
                l_456[i][j] = &g_409[0];
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_694[i][j] = &g_98;
        }
        for (g_107 = 0; (g_107 <= 4); g_107 += 1)
        {
            int8_t *l_455 = &g_166[0];
            int32_t l_480 = 0xF00EEE75L;
            int32_t l_481[5][6] = {{6L,1L,1L,6L,1L,0x80916BCFL},{0x80916BCFL,6L,0x7020C37CL,6L,0x80916BCFL,1L},{6L,0x80916BCFL,1L,1L,0x80916BCFL,6L},{1L,6L,1L,0x80916BCFL,1L,6L},{1L,1L,1L,0x7020C37CL,0x7020C37CL,1L}};
            const uint64_t * const l_523 = &g_471[0][2][6];
            const uint64_t * const *l_522 = &l_523;
            const uint64_t * const **l_521[4] = {&l_522,&l_522,&l_522,&l_522};
            const uint64_t * const ***l_520 = &l_521[1];
            int32_t *l_524 = &g_116;
            int64_t l_558[10] = {0xBB134197403F995FLL,0xBB134197403F995FLL,2L,0xBB134197403F995FLL,0xBB134197403F995FLL,2L,0xBB134197403F995FLL,0xBB134197403F995FLL,2L,0xBB134197403F995FLL};
            uint32_t l_594 = 0x0FA93F64L;
            const uint64_t *l_620 = (void*)0;
            const uint64_t **l_619[10][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_620,(void*)0,&l_620},{(void*)0,(void*)0,&l_620,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_620,&l_620},{&l_620,&l_620,&l_620,(void*)0},{&l_620,(void*)0,&l_620,&l_620},{(void*)0,(void*)0,(void*)0,&l_620},{(void*)0,(void*)0,&l_620,&l_620},{(void*)0,(void*)0,(void*)0,(void*)0}};
            const uint64_t ***l_618[6][6][5] = {{{&l_619[7][3],&l_619[0][0],&l_619[0][1],&l_619[4][1],(void*)0},{&l_619[4][1],(void*)0,&l_619[4][1],&l_619[8][1],&l_619[2][3]},{(void*)0,&l_619[4][1],&l_619[6][1],&l_619[0][0],(void*)0},{&l_619[4][1],&l_619[8][1],(void*)0,&l_619[4][1],(void*)0},{(void*)0,&l_619[4][1],&l_619[2][3],&l_619[8][1],&l_619[4][1]},{&l_619[4][1],&l_619[4][1],&l_619[4][1],(void*)0,&l_619[4][1]}},{{&l_619[4][1],&l_619[4][1],&l_619[4][1],&l_619[4][2],&l_619[4][1]},{&l_619[4][1],&l_619[4][1],&l_619[4][1],&l_619[4][1],&l_619[4][2]},{&l_619[4][1],&l_619[8][1],&l_619[0][1],&l_619[4][1],&l_619[4][1]},{&l_619[0][0],&l_619[7][3],(void*)0,&l_619[4][1],&l_619[4][1]},{&l_619[4][2],&l_619[4][1],&l_619[4][1],&l_619[4][1],&l_619[5][3]},{&l_619[4][1],&l_619[4][1],&l_619[4][1],(void*)0,&l_619[2][0]}},{{&l_619[1][3],&l_619[4][1],(void*)0,&l_619[4][1],&l_619[2][3]},{&l_619[4][1],(void*)0,&l_619[5][3],&l_619[2][3],&l_619[4][1]},{&l_619[4][1],&l_619[4][2],&l_619[4][1],&l_619[4][1],&l_619[4][1]},{&l_619[1][3],&l_619[7][3],&l_619[1][3],(void*)0,&l_619[4][2]},{&l_619[4][1],&l_619[5][1],&l_619[4][1],&l_619[4][1],&l_619[1][3]},{&l_619[4][2],&l_619[2][0],&l_619[4][1],&l_619[4][1],&l_619[2][0]}},{{&l_619[0][0],&l_619[0][1],&l_619[4][1],&l_619[1][3],&l_619[4][0]},{&l_619[7][3],&l_619[0][1],&l_619[1][3],&l_619[4][1],(void*)0},{(void*)0,&l_619[2][0],&l_619[4][1],(void*)0,&l_619[4][1]},{&l_619[6][0],&l_619[4][1],&l_619[5][3],&l_619[4][1],&l_619[4][1]},{&l_619[2][0],&l_619[6][0],(void*)0,&l_619[4][2],(void*)0},{&l_619[4][2],&l_619[4][2],&l_619[4][1],&l_619[4][1],&l_619[4][0]}},{{&l_619[6][1],&l_619[4][1],&l_619[4][1],&l_619[4][1],&l_619[2][0]},{&l_619[2][3],&l_619[4][1],(void*)0,&l_619[4][1],&l_619[1][3]},{&l_619[4][1],&l_619[4][1],&l_619[4][1],&l_619[2][3],&l_619[4][2]},{&l_619[4][1],&l_619[4][2],&l_619[0][0],&l_619[5][1],&l_619[4][1]},{&l_619[2][3],&l_619[6][0],&l_619[1][3],&l_619[4][1],&l_619[4][1]},{&l_619[4][1],&l_619[4][1],&l_619[4][1],&l_619[4][1],&l_619[2][3]}},{{&l_619[4][1],&l_619[2][0],&l_619[5][1],&l_619[5][1],&l_619[2][0]},{&l_619[2][0],&l_619[0][1],&l_619[4][1],&l_619[2][3],&l_619[5][3]},{&l_619[7][3],&l_619[0][1],&l_619[8][1],&l_619[4][1],&l_619[4][1]},{&l_619[4][1],&l_619[2][0],&l_619[0][0],&l_619[4][1],&l_619[4][1]},{&l_619[7][3],&l_619[5][1],&l_619[5][3],&l_619[4][1],&l_619[4][1]},{&l_619[2][0],&l_619[7][3],&l_619[4][1],&l_619[4][2],&l_619[4][1]}}};
            const uint64_t ****l_617 = &l_618[1][5][3];
            uint64_t ****l_623 = &l_129;
            const int8_t l_626 = (-1L);
            int32_t **l_669[9] = {&g_409[0],&g_409[0],&g_409[0],&g_409[0],&g_409[0],&g_409[0],&g_409[0],&g_409[0],&g_409[0]};
            int32_t **l_670[2];
            int32_t **l_671 = &g_409[0];
            int32_t *** const l_668[10] = {&l_671,&l_669[0],&l_671,&l_671,&l_669[0],&l_671,&l_671,&l_669[0],&l_671,&l_671};
            int32_t *** const *l_667[8] = {&l_668[4],&l_668[4],(void*)0,&l_668[4],&l_668[4],(void*)0,&l_668[4],&l_668[4]};
            int32_t * const l_679 = (void*)0;
            int64_t **l_761[5] = {&g_318,&g_318,&g_318,&g_318,&g_318};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_670[i] = &g_409[0];
        }
        l_155[4] ^= (**l_476);
        for (g_45 = 0; (g_45 < 54); ++g_45)
        {
            uint32_t l_801 = 0UL;
            uint64_t ***l_830 = &g_98;
            uint16_t *l_891 = &l_293;
            int32_t l_908 = (-1L);
            int64_t ***l_916 = (void*)0;
            int64_t *l_1033 = &g_248;
            int64_t ** const l_1032 = &l_1033;
            int64_t ** const *l_1031[4][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1032,&l_1032,&l_1032,&l_1032,&l_1032},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1032,&l_1032,&l_1032,&l_1032,&l_1032}};
            int32_t *l_1069 = (void*)0;
            uint64_t l_1084[3];
            uint64_t **l_1095[4] = {&g_44,&g_44,&g_44,&g_44};
            uint64_t l_1116[4];
            int32_t l_1150[7];
            uint32_t * const *l_1187 = &l_1036;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1084[i] = 0x888C883C4ED8A85BLL;
            for (i = 0; i < 4; i++)
                l_1116[i] = 0xB6A8267FFCBC2C49LL;
            for (i = 0; i < 7; i++)
                l_1150[i] = (-1L);
            ++l_801;
            (**l_476) = p_74;
            for (g_174 = 0; (g_174 <= 24); g_174++)
            {
                int32_t *l_816 = &g_3;
                uint64_t ***l_831 = (void*)0;
                const int32_t **l_887 = (void*)0;
                const int32_t ***l_886[1][7][7] = {{{&l_887,&l_887,&l_887,&l_887,&l_887,&l_887,&l_887},{&l_887,&l_887,&l_887,&l_887,&l_887,&l_887,&l_887},{&l_887,&l_887,&l_887,&l_887,&l_887,&l_887,&l_887},{&l_887,&l_887,&l_887,&l_887,&l_887,&l_887,&l_887},{&l_887,&l_887,&l_887,&l_887,&l_887,&l_887,&l_887},{&l_887,&l_887,&l_887,&l_887,&l_887,&l_887,&l_887},{&l_887,&l_887,&l_887,&l_887,&l_887,&l_887,&l_887}}};
                const int32_t ****l_885 = &l_886[0][4][0];
                int32_t l_903 = 0xED1DDD78L;
                int32_t l_907 = 0x98E627BAL;
                int32_t l_909 = 1L;
                int64_t * const *l_915 = &g_318;
                int64_t * const **l_914 = &l_915;
                const uint16_t l_942 = 0xF6A5L;
                int64_t ***l_1028 = &g_317[1];
                int64_t **l_1077 = &g_318;
                int i, j, k;
                if (((l_801 , (((3UL ^ ((safe_rshift_func_int16_t_s_u((-1L), 9)) <= ((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(0xC6D881C8L, ((((((p_74 & g_4) , g_45) , 0xC7L) , (safe_lshift_func_int16_t_s_u(p_77, g_166[1]))) , (void*)0) != l_816))) , p_77), p_77)), g_406[3])) < p_77))) , p_74) || g_406[0])) , p_77))
                {
                    int32_t **l_826 = &g_409[0];
                    int32_t ***l_827 = &l_476;
                    uint16_t *l_890 = &l_469;
                    int32_t l_910 = 0L;
                    uint32_t *l_948 = &l_759;
                    uint32_t **l_947 = &l_948;
                    for (l_555 = (-1); (l_555 <= (-10)); --l_555)
                    {
                        if (g_179)
                            goto lbl_819;
                    }
                    if ((!(p_77 != ((safe_lshift_func_int16_t_s_s((((((*p_75) && 18446744073709551615UL) != (l_832 = (safe_sub_func_uint64_t_u_u(((*l_648) = (+(0xDA67L & (((*l_827) = (l_826 = l_826)) != (void*)0)))), (safe_mul_func_int8_t_s_s((l_830 == l_831), (0xBAL == 1L))))))) <= g_537[1]) && (*p_76)), 14)) == g_419[2][3]))))
                    {
                        uint8_t *l_842 = &g_662[0][3];
                        int32_t l_865[2][2][4] = {{{0xDF4F30B1L,(-1L),0xDF4F30B1L,0xDF4F30B1L},{(-1L),(-1L),0xF430CC14L,(-1L)}},{{(-1L),0xDF4F30B1L,0xDF4F30B1L,(-1L)},{0xDF4F30B1L,(-1L),0xDF4F30B1L,0xDF4F30B1L}}};
                        int i, j, k;
                        (**l_476) = (safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((!(safe_mul_func_int16_t_s_s((((g_734 = g_519) , (--(*l_842))) & (safe_rshift_func_int8_t_s_u(g_514, g_248))), (safe_div_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_77, ((*g_864) = (safe_rshift_func_int8_t_s_u(0x99L, (safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((void*)0 == p_75), (safe_mod_func_uint64_t_u_u((((void*)0 == g_863) < l_865[1][1][3]), (*p_76))))), (*g_864)))))))), 0x4BL)), 0UL)) || (-6L)) | (**l_476)), g_419[3][1]))))), p_74)), 0x66L)), 0x17L));
                    }
                    else
                    {
                        int32_t l_876 = (-7L);
                        uint32_t *l_880 = &g_695;
                        int8_t *l_888 = &g_166[1];
                        int32_t l_889 = 1L;
                        l_889 = ((((safe_rshift_func_uint16_t_u_u(0x04ADL, 6)) ^ ((((safe_div_func_int8_t_s_s(((p_77 , (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((**l_826) = l_801), (l_876 & (safe_sub_func_int64_t_s_s((((p_77 = ((safe_unary_minus_func_uint32_t_u(((*l_880)++))) & l_801)) , g_514) , ((safe_unary_minus_func_int32_t_s((-7L))) & ((((*l_888) = ((l_884 , &g_588) == l_885)) > p_77) <= 4UL))), 0xECC03DC9FD187F74LL))))) != l_876), p_74)) || g_255), g_406[0]))) > (-1L)), g_185)) < p_74) , g_406[0]) , 0xD3A7AF0968063D31LL)) , 0xA1L) != (-3L));
                        if (p_74)
                            break;
                        (***l_827) = (((l_890 != l_891) > (safe_add_func_int64_t_s_s((((~(((8UL <= (((p_77 , (safe_mul_func_uint8_t_u_u(((p_77 | (((safe_add_func_uint8_t_u_u((***l_827), (!g_419[3][1]))) || (**l_476)) , g_353)) , g_537[1]), (**l_826)))) && p_74) || 1UL)) >= p_74) , p_77)) , g_116) , 8L), (**l_476)))) == l_889);
                        g_588 = (void*)0;
                    }
                    if ((***l_827))
                        continue;
                    for (g_734 = 0; (g_734 < (-7)); g_734--)
                    {
                        int32_t l_902 = 0xF5AF1559L;
                        int32_t l_904 = 0L;
                        int32_t l_905 = (-1L);
                        int32_t l_906 = (-1L);
                        int64_t ****l_917 = &l_916;
                        uint32_t *l_943[6][2][9] = {{{&l_557,&g_695,(void*)0,&g_911[1][1][1],&g_695,&g_911[1][4][0],(void*)0,&g_255,&g_695},{(void*)0,(void*)0,(void*)0,&g_911[2][3][2],&g_255,(void*)0,&g_695,&g_419[3][1],&g_419[3][1]}},{{&g_911[1][4][2],&l_557,(void*)0,&g_911[2][3][2],(void*)0,&l_557,&g_911[1][4][2],&g_695,&g_255},{&g_695,&g_255,(void*)0,&g_911[1][1][1],(void*)0,(void*)0,(void*)0,&g_695,&g_911[1][1][1]}},{{&g_255,(void*)0,&g_695,(void*)0,&g_695,(void*)0,&g_419[4][2],&g_695,&g_695},{&g_695,&g_695,&g_419[3][1],&g_419[3][1],&g_419[3][0],&g_695,&g_695,&g_419[3][1],&g_695}},{{&g_911[1][1][1],&g_695,&g_419[3][1],&g_419[3][1],&g_695,&g_911[1][1][1],&g_695,&g_255,&g_911[2][3][2]},{&l_557,&g_911[1][4][2],&g_695,&g_255,(void*)0,&g_911[1][4][0],&g_695,&g_911[1][1][1],(void*)0}},{{&g_695,(void*)0,(void*)0,(void*)0,&l_557,&g_695,&g_695,&g_695,(void*)0},{&g_255,&g_911[1][1][1],(void*)0,&g_695,(void*)0,&g_419[1][0],&g_695,&g_695,&g_419[1][0]}},{{&g_911[1][4][0],&g_911[1][1][1],(void*)0,&g_911[1][1][1],&g_911[1][4][0],&g_695,&g_419[4][2],&g_911[2][3][2],&g_911[1][1][1]},{&g_695,(void*)0,(void*)0,&g_419[3][1],&g_695,&g_419[3][1],(void*)0,(void*)0,&g_419[3][1]}}};
                        uint32_t *l_946 = &l_801;
                        uint32_t **l_945 = &l_946;
                        int i, j, k;
                        ++g_911[1][4][2];
                        l_905 = ((l_914 != ((*l_917) = l_916)) <= ((safe_rshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((*g_318) > (safe_div_func_int64_t_s_s(((l_904 &= (~((l_906 ^= (safe_rshift_func_uint8_t_u_u((((*l_507) = ((safe_lshift_func_uint8_t_u_s((((g_406[3] || ((safe_lshift_func_int8_t_s_s((((g_941[7][3] = (safe_sub_func_int32_t_s_s((((*l_789) |= 0x00FAL) , p_74), (((void*)0 != &l_762) || ((safe_mul_func_uint8_t_u_u(g_353, g_537[1])) || p_74))))) <= (-3L)) , p_77), 6)) >= 0x1BD9L)) ^ 0x9E81CF357A196289LL) == g_45), g_471[2][2][1])) | l_942)) ^ l_908), p_74))) == l_905))) , (*p_76)), 1UL))), 18446744073709551615UL)), p_77)) ^ l_944), 255UL)) < (**g_98)), 0xF71EED52L)) , g_514), g_662[0][2])) == (**l_826)));
                        l_947 = l_945;
                    }
                }
                else
                {
                    uint8_t l_954 = 0x22L;
                    int32_t l_977 = 0xC97A9B1AL;
                    if ((((l_949[7][1] , (safe_lshift_func_int8_t_s_s((((((safe_rshift_func_int16_t_s_s(l_954, p_77)) && (safe_lshift_func_uint8_t_u_u(((((**g_863) ^= ((!(((safe_div_func_uint32_t_u_u(0UL, (safe_add_func_int8_t_s_s((((p_77 || ((+(safe_mul_func_int8_t_s_s(0x14L, l_965))) < (g_966 == (void*)0))) , l_954) >= g_166[1]), p_77)))) < l_954) , p_77)) < 0xB7BBD24FL)) , l_954) | l_908), 6))) < (*p_76)) != p_74) , 8L), 2))) ^ 4UL) , (*l_816)))
                    {
                        uint8_t *l_973 = &l_606;
                        uint8_t *l_974 = &g_662[1][1];
                        uint8_t *l_975 = &g_107;
                        l_908 = (((*l_975) = ((*l_974) |= ((((((l_909 ^= l_801) || (g_588 != g_588)) , (((*p_76) && (*p_76)) , (safe_sub_func_uint32_t_u_u((((safe_add_func_uint64_t_u_u(0xCC9EB4FD35AD941BLL, (*g_44))) && (-1L)) == ((*l_973) |= ((&g_864 == l_972[3]) == p_77))), 0xA5C2CC53L)))) , p_77) , 0L) || 0x92E5FF2B9344B63FLL))) & 0xDDL);
                        l_976[1][0] = &g_966;
                        if (p_74)
                            continue;
                    }
                    else
                    {
                        l_977 = 0L;
                    }
                    if ((safe_unary_minus_func_uint16_t_u((+((-1L) & (safe_add_func_int8_t_s_s(g_116, (safe_mul_func_uint16_t_u_u((18446744073709551609UL > (safe_lshift_func_uint8_t_u_u(0UL, ((safe_rshift_func_int8_t_s_s((&l_694[2][0] == (((safe_div_func_uint64_t_u_u((*p_75), (*p_75))) , (!1UL)) , (void*)0)), p_77)) != 0x30495784L)))), 0L)))))))))
                    {
                        if (p_74)
                            break;
                        (*l_476) = (*l_476);
                        (**l_476) &= (-6L);
                    }
                    else
                    {
                        if (p_77)
                            break;
                        if (p_77)
                            break;
                    }
                }
                for (l_908 = 0; (l_908 < 19); l_908++)
                {
                    uint8_t *l_997 = &g_662[0][1];
                    int32_t l_1002 = 0x2B224EF0L;
                    l_1002 = (((18446744073709551614UL & (*p_75)) < (safe_add_func_int8_t_s_s(((((**g_863) = (((((*l_997) = p_74) , ((251UL > g_58) > (((**l_476) = (((safe_div_func_int32_t_s_s(((18446744073709551606UL == (safe_mod_func_uint32_t_u_u(((((void*)0 != l_694[2][0]) & l_801) || p_77), p_74))) <= (-1L)), p_77)) , g_409[0]) == &l_759)) && p_77))) , (*p_76)) <= (*p_76))) >= g_248) <= p_77), (-6L)))) , p_74);
                    for (g_185 = 0; (g_185 >= 24); g_185 = safe_add_func_int16_t_s_s(g_185, 2))
                    {
                        (*l_476) = &g_116;
                        return p_74;
                    }
                }
                for (l_884 = 0; (l_884 > 24); l_884 = safe_add_func_uint8_t_u_u(l_884, 3))
                {
                    uint64_t l_1011 = 18446744073709551615UL;
                    int64_t ** const *l_1030[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int64_t ** const **l_1029[6][5][2] = {{{&l_1030[0],&l_1030[0]},{&l_1030[1],&l_1030[0]},{&l_1030[0],&l_1030[4]},{&l_1030[0],&l_1030[0]},{&l_1030[0],&l_1030[0]}},{{&l_1030[0],&l_1030[0]},{&l_1030[0],&l_1030[4]},{&l_1030[1],&l_1030[0]},{&l_1030[0],&l_1030[1]},{&l_1030[0],&l_1030[0]}},{{&l_1030[0],&l_1030[1]},{&l_1030[0],&l_1030[0]},{&l_1030[1],&l_1030[4]},{&l_1030[0],&l_1030[0]},{&l_1030[0],&l_1030[0]}},{{&l_1030[0],&l_1030[0]},{&l_1030[0],&l_1030[0]},{&l_1030[0],&l_1030[0]},{&l_1030[0],&l_1030[0]},{&l_1030[0],&l_1030[4]}},{{&l_1030[1],&l_1030[0]},{&l_1030[0],&l_1030[1]},{&l_1030[0],&l_1030[0]},{&l_1030[0],&l_1030[1]},{&l_1030[0],&l_1030[0]}},{{&l_1030[1],&l_1030[4]},{&l_1030[0],&l_1030[0]},{&l_1030[0],&l_1030[0]},{&l_1030[0],&l_1030[0]},{&l_1030[0],&l_1030[0]}}};
                    int8_t *l_1034[8][3][4] = {{{&l_555,&l_949[8][2],&g_154[0],&l_949[9][0]},{&l_555,&l_949[7][1],&g_154[5],&g_154[5]},{&l_949[9][0],&l_949[9][0],(void*)0,&g_166[0]}},{{&g_166[0],(void*)0,&g_154[0],&g_154[3]},{&g_154[5],&g_154[5],&g_154[7],&g_154[0]},{&g_154[0],&g_154[5],&l_949[9][0],&g_154[3]}},{{&g_154[5],(void*)0,&g_154[5],&g_166[0]},{&l_949[7][1],&l_949[9][0],(void*)0,&g_154[5]},{(void*)0,&l_949[7][1],&g_166[0],&l_949[9][0]}},{{&g_154[3],&l_949[8][2],&g_166[0],&g_154[0]},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_949[7][1],&g_154[3],&g_154[5],&g_154[4]}},{{&g_154[5],&g_154[4],&l_949[9][0],&l_949[8][2]},{&g_154[0],&l_555,&g_154[7],&l_949[8][2]},{&g_154[5],&g_154[4],&g_154[0],&g_154[4]}},{{&g_166[0],&g_154[3],(void*)0,(void*)0},{&l_949[9][0],(void*)0,&g_154[5],&g_154[0]},{&l_555,&l_949[8][2],&g_154[0],&l_949[9][0]}},{{&l_555,&l_949[7][1],&g_154[5],&g_154[5]},{&l_949[9][0],&l_949[9][0],(void*)0,&g_166[0]},{&g_166[0],(void*)0,&g_154[0],&g_154[3]}},{{&g_154[5],&g_154[5],&g_154[7],&g_154[0]},{&g_154[0],&g_154[5],&l_949[9][0],&g_154[3]},{&g_154[5],(void*)0,&g_154[5],&g_166[0]}}};
                    uint8_t *l_1051[3][7] = {{(void*)0,&l_606,&l_606,(void*)0,(void*)0,(void*)0,(void*)0},{&l_606,(void*)0,&l_606,(void*)0,(void*)0,&l_606,&l_606},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_662[0][1]}};
                    uint32_t l_1068[2];
                    int32_t l_1078 = 0x053D19DFL;
                    int32_t l_1080 = 0x27CCD9D0L;
                    int32_t l_1081 = 0xA35C14B6L;
                    int32_t l_1082 = 0x3DDB45EEL;
                    int32_t l_1083[2][5] = {{(-1L),7L,0x61B3255FL,7L,(-1L)},{(-1L),7L,0x61B3255FL,7L,(-1L)}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1068[i] = 0x5FFC2BEEL;
                    (**l_476) = (((safe_mul_func_uint16_t_u_u((**g_863), (*g_864))) & (((void*)0 != &g_166[0]) || (p_77 || (0xE633L <= (g_221 , (((p_74 < (safe_unary_minus_func_int16_t_s(g_1010))) , l_1011) , (**l_476))))))) <= p_74);
                }
            }
            for (l_944 = 0; (l_944 <= 1); l_944 += 1)
            {
                int32_t l_1117[6][2] = {{0x99DF9554L,0L},{0L,0x99DF9554L},{0L,0L},{0x99DF9554L,0L},{0L,0x99DF9554L},{0x99DF9554L,0x99DF9554L}};
                uint32_t l_1118[9];
                uint16_t l_1119 = 65530UL;
                int8_t l_1151 = 0x95L;
                int8_t l_1152 = 0xBCL;
                uint64_t l_1153 = 18446744073709551615UL;
                int32_t l_1186 = (-1L);
                int i, j;
                for (i = 0; i < 9; i++)
                    l_1118[i] = 0x77A20515L;
            }
        }
        return l_1219[4][3];
    }
    if (g_45)
        goto lbl_819;
    return (**l_476);
}







static const int16_t func_80(int32_t * p_81, int8_t * p_82, int64_t * p_83, const int64_t p_84)
{
    const int32_t *l_109 = &g_6[0];
    const int32_t **l_110 = &l_109;
    (*l_110) = l_109;
    return g_3;
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
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_154[i], "g_154[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_406[i], "g_406[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_419[i][j], "g_419[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_471[i][j][k], "g_471[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_519, "g_519", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_537[i], "g_537[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_662[i][j], "g_662[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_911[i][j][k], "g_911[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_941[i][j], "g_941[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1010, "g_1010", print_hash_value);
    transparent_crc(g_1039, "g_1039", print_hash_value);
    transparent_crc(g_1074, "g_1074", print_hash_value);
    transparent_crc(g_1156, "g_1156", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1213[i][j][k], "g_1213[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1539, "g_1539", print_hash_value);
    transparent_crc(g_1544, "g_1544", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
