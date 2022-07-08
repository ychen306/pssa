// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = E4B37500
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
   signed f0 : 5;
   unsigned f1 : 8;
   signed f2 : 11;
   signed f3 : 10;
   const int16_t f4;
   unsigned f5 : 5;
};
#pragma pack(pop)

struct S1 {
   uint16_t f0;
   signed f1 : 15;
   int32_t f2;
   uint16_t f3;
   uint64_t f4;
   int16_t f5;
};

union U2 {
   int16_t f0;
   uint8_t f1;
};

union U3 {
   int8_t * f0;
   const uint32_t f1;
   int32_t f2;
   uint8_t f3;
};

union U4 {
   int64_t f0;
   uint32_t f1;
};

union U5 {
   int16_t f0;
};


static int32_t g_3 = (-4L);
static union U4 g_9[6] = {{-10L},{-10L},{-10L},{-10L},{-10L},{-10L}};
static int8_t g_11 = (-1L);
static union U2 g_12 = {-2L};
static struct S0 g_18 = {-2,4,-23,24,0xED7CL,4};
static int32_t *g_22 = &g_3;
static int32_t **g_21[8] = {&g_22,&g_22,&g_22,&g_22,&g_22,&g_22,&g_22,&g_22};
static uint32_t g_27 = 0xC17A3F0AL;
static int16_t g_47 = 0x7981L;
static union U3 g_54 = {0};
static struct S1 g_75[5] = {{65533UL,61,7L,65535UL,18446744073709551608UL,0x2B77L},{65533UL,61,7L,65535UL,18446744073709551608UL,0x2B77L},{65533UL,61,7L,65535UL,18446744073709551608UL,0x2B77L},{65533UL,61,7L,65535UL,18446744073709551608UL,0x2B77L},{65533UL,61,7L,65535UL,18446744073709551608UL,0x2B77L}};
static uint32_t g_87 = 4294967293UL;
static uint8_t g_119 = 0x87L;
static uint32_t g_141[7][6] = {{0x9599D76AL,0x47C546E7L,0x6997C529L,0x6997C529L,0x47C546E7L,0x9599D76AL},{4UL,0x9599D76AL,0x8AE125AEL,0x47C546E7L,0x8AE125AEL,0x9599D76AL},{0x8AE125AEL,4UL,0x6997C529L,9UL,9UL,0x6997C529L},{0x8AE125AEL,0x8AE125AEL,9UL,0x47C546E7L,4294967291UL,0x47C546E7L},{4UL,0x8AE125AEL,4UL,9UL,0x8AE125AEL,0x8AE125AEL},{4UL,0x47C546E7L,0x47C546E7L,4UL,4294967291UL,0x6997C529L},{0x6997C529L,4UL,0x8AE125AEL,4UL,0x6997C529L,9UL}};
static uint32_t g_155 = 0x75997CB8L;
static uint16_t g_156 = 0UL;
static const int8_t *g_168[4] = {&g_11,&g_11,&g_11,&g_11};
static const int8_t **g_167 = &g_168[2];
static uint8_t g_177 = 0x2DL;
static uint64_t g_181 = 18446744073709551615UL;
static int32_t g_205[9] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
static union U5 g_236 = {0x8D10L};
static union U5 *g_235[10] = {&g_236,&g_236,&g_236,&g_236,&g_236,&g_236,&g_236,&g_236,&g_236,&g_236};
static union U4 *g_240 = &g_9[2];
static uint32_t g_269 = 18446744073709551615UL;
static const union U4 g_277 = {0L};
static const int32_t g_281 = 1L;
static const int32_t *g_282 = &g_75[1].f2;
static int16_t g_333 = 8L;
static int32_t *g_346 = &g_205[7];
static uint16_t g_373 = 0x71EBL;
static union U2 g_376[9][2][2] = {{{{0xAD89L},{0xEDB6L}},{{0L},{0x7DA6L}}},{{{-1L},{-1L}},{{0x8BD1L},{0x3676L}}},{{{0x3676L},{0xAD89L}},{{0x1A5BL},{0xAD89L}}},{{{0x3676L},{0x3676L}},{{0x8BD1L},{-1L}}},{{{-1L},{0x7DA6L}},{{0L},{0xEDB6L}}},{{{0xAD89L},{0L}},{{0xAF9BL},{1L}}},{{{0xAF9BL},{0L}},{{0xAD89L},{0xEDB6L}}},{{{0L},{0x7DA6L}},{{-1L},{-1L}}},{{{0x8BD1L},{0x3676L}},{{0x3676L},{0xAD89L}}}};
static union U2 *g_375 = &g_376[5][0][1];
static int8_t **g_450[3] = {(void*)0,(void*)0,(void*)0};
static int8_t **g_451 = (void*)0;
static struct S0 ***g_456 = (void*)0;
static uint16_t g_531[6][2][7] = {{{0UL,65529UL,65529UL,0x93DEL,65529UL,65529UL,0UL},{0xA6E3L,0UL,65526UL,0x93DEL,6UL,0UL,5UL}},{{65529UL,0xD595L,1UL,5UL,0xA6E3L,0xAF6EL,0xAF6EL},{1UL,1UL,65526UL,1UL,1UL,0x5E2DL,1UL}},{{1UL,1UL,65529UL,0UL,0x93DEL,0x1D31L,0xA6E3L},{1UL,0xD595L,0x93DEL,0x22C5L,65526UL,65526UL,0x22C5L}},{{1UL,0UL,1UL,65526UL,0UL,0xD595L,0x22C5L},{1UL,65529UL,0x1D31L,0x5E2DL,0x22C5L,1UL,0xA6E3L}},{{65529UL,1UL,0xD595L,65529UL,65529UL,0xD595L,1UL},{0xA6E3L,6UL,5UL,65529UL,65529UL,65526UL,0xAF6EL}},{{0UL,1UL,6UL,65529UL,0x22C5L,0x1D31L,5UL},{0x5E2DL,0UL,65529UL,65529UL,0UL,0x5E2DL,0UL}}};
static uint64_t *g_637 = &g_181;
static const union U3 *g_684 = &g_54;
static const union U3 ** const g_683 = &g_684;
static const union U3 **g_687 = &g_684;
static int8_t g_721 = 0x03L;
static int8_t g_821 = 1L;
static uint64_t **g_831 = &g_637;
static uint64_t g_892 = 18446744073709551615UL;
static uint32_t g_905 = 4UL;
static int8_t g_1039 = 0x8CL;
static struct S1 g_1109 = {0xC514L,47,1L,1UL,0xE7F86E90B79E8FC8LL,-1L};
static int32_t g_1162 = 0x902D2C7AL;
static int16_t g_1208 = (-1L);
static int64_t g_1247 = 0x24D25160B83ABAFFLL;
static int8_t g_1269[2] = {0x63L,0x63L};



static uint32_t func_1(void);
static const union U3 func_5(union U2 p_6, int32_t * const p_7, int32_t ** p_8);
static int32_t ** func_14(struct S0 p_15, int8_t * p_16, const int32_t * p_17);
static union U2 func_23(int32_t p_24, struct S0 p_25, int8_t * p_26);
static struct S0 func_28(const union U2 * p_29, const uint64_t p_30, int32_t ** p_31);
static union U3 * func_43(int32_t ** p_44, uint8_t p_45, union U5 p_46);
static union U2 func_48(union U3 * p_49, union U2 p_50, union U3 * p_51, struct S1 p_52);
static union U3 * func_56(uint64_t p_57, union U2 * p_58);
static uint8_t func_63(union U3 p_64, struct S1 p_65, int32_t * p_66, uint32_t p_67);
static union U3 func_68(union U3 * p_69, uint16_t p_70);
# 132 "<stdin>"
static uint32_t func_1(void)
{
    int32_t *l_2 = &g_3;
    int32_t **l_4 = &l_2;
    int8_t *l_10 = &g_11;
    union U2 *l_13 = &g_12;
    int8_t *l_1267 = (void*)0;
    int8_t *l_1268 = &g_1269[0];
    int32_t l_1270 = 0xEC872E53L;
    int8_t l_1302 = 0x1EL;
    int16_t *l_1308 = &g_236.f0;
    uint16_t *l_1315[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t *l_1317[4][8][8] = {{{&g_141[5][3],(void*)0,(void*)0,(void*)0,&g_141[2][2],&g_905,&g_141[1][1],(void*)0},{&g_87,(void*)0,(void*)0,&g_905,&g_141[5][3],&g_905,&g_141[1][1],&g_155},{&g_155,&g_905,&g_87,&g_155,&g_155,&g_87,&g_905,&g_905},{&g_155,&g_87,&g_905,&g_905,&g_141[2][2],(void*)0,&g_155,&g_155},{&g_905,&g_905,(void*)0,&g_155,&g_905,(void*)0,&g_141[5][3],&g_87},{(void*)0,&g_87,(void*)0,&g_905,(void*)0,&g_87,(void*)0,&g_141[6][2]},{&g_87,&g_905,(void*)0,&g_155,&g_141[5][3],&g_155,(void*)0,&g_141[2][2]},{&g_141[1][1],(void*)0,&g_155,&g_155,&g_141[5][3],&g_155,&g_905,&g_905}},{{&g_87,(void*)0,&g_141[2][2],&g_141[2][2],(void*)0,&g_87,&g_141[6][2],&g_141[1][1]},{(void*)0,(void*)0,&g_141[1][1],&g_87,&g_905,(void*)0,&g_155,(void*)0},{&g_905,&g_155,&g_141[6][2],&g_87,&g_141[2][2],&g_141[1][1],&g_905,&g_141[1][1]},{&g_155,&g_141[2][2],&g_155,&g_141[2][2],&g_155,(void*)0,&g_905,&g_905},{&g_905,&g_141[1][1],(void*)0,&g_155,&g_905,(void*)0,&g_87,&g_141[2][2]},{&g_155,&g_141[6][2],(void*)0,&g_155,&g_141[6][2],&g_905,&g_905,&g_141[6][2]},{&g_905,&g_155,&g_155,&g_905,&g_87,(void*)0,&g_905,&g_87},{&g_155,(void*)0,&g_141[6][2],&g_155,(void*)0,(void*)0,&g_155,&g_155}},{{&g_155,(void*)0,&g_141[1][1],&g_905,&g_141[6][2],(void*)0,&g_141[6][2],&g_905},{&g_141[2][2],&g_155,&g_141[2][2],&g_155,(void*)0,&g_905,&g_905,&g_141[6][2]},{&g_87,&g_141[6][2],&g_155,&g_905,&g_155,(void*)0,(void*)0,(void*)0},{&g_87,&g_141[1][1],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_141[2][2],&g_141[2][2],(void*)0,&g_87,&g_141[6][2],&g_141[1][1],&g_141[5][3],&g_905},{&g_155,&g_155,(void*)0,&g_141[1][1],(void*)0,(void*)0,&g_155,&g_905},{&g_155,(void*)0,&g_905,&g_87,&g_87,&g_87,&g_905,(void*)0},{&g_905,(void*)0,&g_87,(void*)0,&g_141[6][2],&g_155,(void*)0,(void*)0}},{{&g_155,(void*)0,&g_905,&g_905,&g_905,&g_155,(void*)0,&g_141[6][2]},{&g_905,&g_905,&g_87,&g_155,&g_155,&g_87,&g_905,&g_905},{&g_141[1][1],&g_155,&g_155,&g_905,&g_141[6][2],(void*)0,(void*)0,&g_141[5][3]},{&g_155,&g_155,(void*)0,(void*)0,&g_905,(void*)0,&g_905,&g_141[2][2]},{(void*)0,&g_155,&g_905,&g_155,&g_905,&g_155,(void*)0,(void*)0},{&g_141[2][2],&g_155,(void*)0,&g_905,&g_905,&g_141[6][2],(void*)0,&g_141[6][2]},{(void*)0,(void*)0,&g_905,&g_141[5][3],&g_905,&g_141[1][1],&g_155,&g_155},{&g_141[2][2],&g_905,&g_141[6][2],&g_141[6][2],&g_905,&g_141[2][2],&g_87,(void*)0}}};
    int8_t l_1318 = 0xC3L;
    int i, j, k;
    (*l_4) = l_2;
    if ((((((*l_1268) &= (func_5((g_9[2] , (((void*)0 != l_10) , ((*l_13) = g_12))), (*l_4), func_14(g_18, &g_11, &g_3)) , (**g_167))) | l_1270) <= l_1270) ^ g_892))
    {
        int32_t l_1288 = 0L;
        int32_t l_1289 = (-4L);
        int32_t l_1290[7][8] = {{1L,2L,3L,2L,1L,3L,0xCF1353D0L,0xCF1353D0L},{1L,2L,0xF4295892L,0xF4295892L,2L,1L,0x34A30E19L,2L},{0xCF1353D0L,0x34A30E19L,0xF4295892L,0xCF1353D0L,0xF4295892L,0x34A30E19L,0xCF1353D0L,1L},{2L,1L,3L,0xCF1353D0L,0xCF1353D0L,3L,1L,2L},{1L,0xCF1353D0L,0x34A30E19L,0xF4295892L,0xCF1353D0L,0xF4295892L,0x34A30E19L,0xCF1353D0L},{2L,0x34A30E19L,1L,2L,0xF4295892L,0xF4295892L,2L,1L},{0xCF1353D0L,0xCF1353D0L,3L,1L,2L,3L,2L,1L}};
        int32_t *l_1294 = &l_1289;
        int32_t *l_1295 = &l_1290[2][2];
        int32_t *l_1296 = &g_1109.f2;
        int32_t *l_1297 = &g_3;
        int32_t *l_1298 = &g_1162;
        int32_t *l_1299 = &l_1290[2][2];
        int32_t *l_1300 = &g_3;
        int32_t *l_1301[4][10] = {{&l_1289,&g_1162,&l_1289,&l_1289,&g_1162,&l_1289,&l_1289,&g_1162,&l_1289,&l_1289},{&g_1162,&g_1162,&l_1289,&g_1162,&g_1162,&l_1289,&g_1162,&g_1162,&l_1289,&g_1162},{&g_1162,&l_1289,&l_1289,&g_1162,&l_1289,&l_1289,&g_1162,&l_1289,&l_1289,&g_1162},{&l_1289,&g_1162,&l_1289,&l_1289,&g_1162,&l_1289,&l_1289,&g_1162,&l_1289,&l_1289}};
        uint8_t l_1303 = 0xCFL;
        int i, j;
        for (g_1039 = 3; (g_1039 <= 22); g_1039 = safe_add_func_uint16_t_u_u(g_1039, 1))
        {
            int32_t *l_1273 = &g_1162;
            int32_t *l_1274 = &g_3;
            int32_t *l_1275 = &g_1109.f2;
            int32_t *l_1276 = &g_75[1].f2;
            int32_t *l_1277 = &g_1162;
            int32_t *l_1278 = (void*)0;
            int32_t *l_1279 = &g_1109.f2;
            int32_t *l_1280 = &g_1109.f2;
            int32_t *l_1281 = &g_1109.f2;
            int32_t *l_1282 = &l_1270;
            int32_t *l_1283 = &g_3;
            int32_t *l_1284 = (void*)0;
            int32_t *l_1285 = &g_3;
            int32_t *l_1286 = &g_1162;
            int32_t *l_1287[2][2] = {{&g_1109.f2,&g_1109.f2},{&g_1109.f2,&g_1109.f2}};
            uint32_t l_1291 = 9UL;
            int i, j;
            ++l_1291;
        }
        l_1303--;
    }
    else
    {
        (*l_2) ^= 1L;
        return g_821;
    }
    for (g_1208 = 0; (g_1208 != 8); g_1208 = safe_add_func_uint16_t_u_u(g_1208, 8))
    {
        return g_1208;
    }
    l_1270 ^= (((*l_1308) = (&g_456 == (void*)0)) == ((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((((**l_4) ^= ((void*)0 == &g_205[0])) && g_277.f1), (((*g_375) , (g_141[4][1] ^= ((&g_376[5][0][1] != (void*)0) , (safe_unary_minus_func_uint32_t_u((((0xEAL != (**g_167)) | 0x62010784L) > 0x535DF11CL)))))) != l_1318))) , 1L), 5)) , (**l_4)), g_18.f5)) > g_821));
    return (**l_4);
}







static const union U3 func_5(union U2 p_6, int32_t * const p_7, int32_t ** p_8)
{
    const union U2 *l_32 = &g_12;
    int32_t **l_33 = &g_22;
    int8_t *l_37 = &g_11;
    int32_t l_1158 = (-10L);
    int32_t **l_1160[6][1] = {{&g_346},{&g_346},{&g_346},{&g_346},{&g_346},{&g_346}};
    int32_t ***l_1159 = &l_1160[4][0];
    int32_t *l_1161 = &g_1162;
    struct S1 l_1163 = {0UL,-142,1L,2UL,0UL,0L};
    int32_t l_1169 = 0x30BECE88L;
    int32_t l_1171[8] = {0L,0x9E684B22L,0x9E684B22L,0L,0x9E684B22L,0x9E684B22L,0L,0x9E684B22L};
    int8_t l_1173[8][8] = {{(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL},{(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL},{(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL},{(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL},{(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL},{(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL},{(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL},{(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL,(-9L),0x7DL}};
    uint32_t l_1174 = 2UL;
    const union U3 l_1264 = {0};
    int32_t **l_1265[10][4] = {{(void*)0,(void*)0,&l_1161,(void*)0},{(void*)0,&l_1161,&l_1161,&l_1161},{(void*)0,&l_1161,(void*)0,&l_1161},{&l_1161,&l_1161,&l_1161,&l_1161},{&l_1161,&l_1161,(void*)0,(void*)0},{&l_1161,(void*)0,&l_1161,(void*)0},{&l_1161,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1161,(void*)0},{(void*)0,&l_1161,&l_1161,&l_1161},{(void*)0,&l_1161,(void*)0,&l_1161}};
    int32_t *l_1266[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_1266[i] = &g_1162;
    (*l_1161) ^= (((func_23(g_27, func_28(l_32, p_6.f0, l_33), l_37) , (!(safe_mod_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((~((safe_add_func_int8_t_s_s(l_1158, (((*l_1159) = &g_346) != &g_346))) && p_6.f1)), 0)), 0xE39BB419200A7707LL)), 0x22C5L)))) < g_277.f1) , l_1158);
    g_75[1] = l_1163;
    for (l_1163.f4 = 1; (l_1163.f4 >= 32); l_1163.f4++)
    {
        int8_t l_1166 = 0L;
        int32_t l_1170 = 0x144EA745L;
        int32_t l_1172 = 1L;
        uint64_t *l_1228 = &g_1109.f4;
        if ((*p_7))
            break;
        if (((*p_7) |= ((*l_1161) = l_1166)))
        {
            int32_t *l_1167 = (void*)0;
            int32_t *l_1168[8] = {&l_1163.f2,&l_1163.f2,&l_1163.f2,&l_1163.f2,&l_1163.f2,&l_1163.f2,&l_1163.f2,&l_1163.f2};
            int i;
            l_1174++;
        }
        else
        {
            uint16_t l_1177 = 3UL;
            int32_t l_1197 = 0xC362DAC2L;
            struct S0 l_1202 = {-2,13,17,22,2L,1};
            uint8_t l_1214 = 0x29L;
            int8_t l_1218 = 0x0FL;
            uint64_t *l_1231 = &g_1109.f4;
            const union U3 l_1263 = {0};
            ++l_1177;
            (*l_1161) = (((safe_lshift_func_int16_t_s_u((((g_156 & (0x006CL ^ g_47)) | (l_1170 &= 0x24CED679L)) , (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_75[1].f5, l_1172)), (+(safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((g_75[1].f2 > (l_1197 |= ((safe_lshift_func_uint8_t_u_u((*l_1161), (safe_div_func_int16_t_s_s(0xBEE9L, g_27)))) == 0L))), p_6.f0)), p_6.f1)))))), 4)) & 1L) < 1UL);
            for (l_1163.f3 = 0; (l_1163.f3 <= 1); l_1163.f3 += 1)
            {
                uint16_t *l_1205 = &g_156;
                union U4 l_1211 = {0L};
                int32_t l_1212 = 0x3FFD08DDL;
                int32_t l_1213 = 0xAA15A6D5L;
                uint16_t *l_1215 = &l_1163.f0;
                int8_t **l_1222 = &l_37;
                uint64_t *l_1227 = &g_181;
                int i, j;
                for (l_1170 = 6; (l_1170 >= 1); l_1170 -= 1)
                {
                    for (g_905 = 0; (g_905 <= 7); g_905 += 1)
                    {
                        union U4 **l_1198 = (void*)0;
                        union U4 **l_1199 = &g_240;
                        int i, j;
                        (*l_1199) = &g_9[(l_1163.f3 + 3)];
                        (*l_1161) ^= l_1173[(l_1170 + 1)][(l_1163.f3 + 6)];
                        if (l_1173[(l_1170 + 1)][l_1170])
                            break;
                    }
                }
                if (((((*l_1215) |= ((((safe_rshift_func_int8_t_s_s((((l_1213 &= (((((*l_37) &= (l_1173[(l_1163.f3 + 1)][(l_1163.f3 + 4)] , l_1173[l_1163.f3][(l_1163.f3 + 5)])) , ((((l_1202 , (*l_1161)) > (safe_div_func_uint16_t_u_u(((*l_1205) = l_1173[(l_1163.f3 + 1)][(l_1163.f3 + 4)]), (safe_mul_func_int8_t_s_s(g_1208, (l_1212 = ((*l_37) = (safe_add_func_int16_t_s_s((l_1211 , g_821), (g_75[1] , 0L)))))))))) | (-1L)) & 18446744073709551607UL)) && 6L) >= p_6.f0)) == l_1214) , 0x71L), 7)) >= p_6.f0) == 0x5DL) && l_1166)) > p_6.f0) & 0UL))
                {
                    int8_t **l_1221[3][8] = {{&l_37,&l_37,&l_37,&l_37,&l_37,&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37,&l_37,&l_37,&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37,&l_37,&l_37,&l_37,&l_37,&l_37}};
                    union U3 l_1226 = {0};
                    int32_t l_1238 = 0x70BB6C2FL;
                    int i, j;
                    for (l_1211.f1 = 0; (l_1211.f1 <= 1); l_1211.f1 += 1)
                    {
                        int8_t ***l_1223 = &g_450[1];
                        int8_t ***l_1224 = (void*)0;
                        int8_t ***l_1225 = &l_1222;
                        (*p_7) |= (*l_1161);
                        (*p_7) &= (safe_div_func_uint8_t_u_u(p_6.f1, l_1218));
                        if ((*p_7))
                            continue;
                        l_1213 &= (safe_mul_func_int16_t_s_s(((l_1221[1][6] != ((*l_1225) = l_1222)) || (((((g_75[1].f4 & 0L) < (l_1170 = (l_1226 , 18446744073709551615UL))) , l_1227) == l_1228) && (safe_div_func_int64_t_s_s((l_1231 == (void*)0), g_75[1].f4)))), g_373));
                    }
                    if (l_1170)
                        break;
                    if ((safe_add_func_int8_t_s_s((p_6.f1 || (p_6.f1--)), (safe_lshift_func_int8_t_s_s(((*l_37) = l_1202.f1), 3)))))
                    {
                        int32_t l_1243[10][8][3] = {{{0xB2AE90E1L,0x89E1F4D5L,0xE7FF10CCL},{(-1L),0xF9E707D2L,1L},{0L,0xF49DC91FL,(-4L)},{0xFBF93365L,0xFBF93365L,0xA4F608F8L},{(-1L),0x265FB632L,0xAE92B9E4L},{0x0398664AL,(-3L),0xB6BEC665L},{8L,0xF9E707D2L,0xBBE8C4B2L},{(-1L),0x0398664AL,0xB6BEC665L}},{{(-3L),0x4DA9226FL,0xAE92B9E4L},{(-2L),0x3D173A3EL,0xA4F608F8L},{1L,1L,(-4L)},{0xF670EB3BL,4L,1L},{(-1L),0x674984FAL,0xE7FF10CCL},{1L,0x4C75686DL,0xB2AE90E1L},{0x2292CE4AL,0xA4F608F8L,0x0398664AL},{(-1L),(-1L),4L}},{{0x77D4A92DL,(-3L),8L},{0L,0x0398664AL,0xE7FF10CCL},{0L,(-3L),0x709ECDCCL},{8L,0xF49DC91FL,0x6138C23CL},{0x265FB632L,0x062AC069L,0L},{(-1L),0x062AC069L,0xFCBDAF8FL},{0xA2060DDFL,0xF49DC91FL,0xB6BEC665L},{1L,(-3L),0L}},{{0xD0E030BAL,0x0398664AL,0x265FB632L},{4L,(-3L),0x6CE15B6EL},{(-2L),(-1L),(-1L)},{0L,0xA4F608F8L,(-4L)},{1L,0xAE92B9E4L,(-1L)},{0L,0x273E2E49L,0xBBE8C4B2L},{0x273E2E49L,0x4DA9226FL,0x89E1F4D5L},{0x58F4B07DL,(-3L),0x58F4B07DL}},{{0xAE92B9E4L,0xF670EB3BL,0x21245735L},{0x6138C23CL,(-1L),0x2292CE4AL},{4L,(-2L),0xBBE8C4B2L},{0xF670EB3BL,1L,4L},{4L,0xFBF93365L,0L},{0x6138C23CL,0xD0E030BAL,0xF9E707D2L},{0xAE92B9E4L,0x6138C23CL,0xDFA3E8CFL},{0x58F4B07DL,0x77D4A92DL,0xD0E030BAL}},{{0x273E2E49L,1L,(-1L)},{0L,1L,(-4L)},{1L,0xDFA3E8CFL,0x2AED599EL},{0x709ECDCCL,4L,0xE3E4EACAL},{7L,0xE3E4EACAL,(-1L)},{(-2L),0x4DA9226FL,4L},{0L,0x73B18D36L,4L},{0xF49DC91FL,0xFCBDAF8FL,0x89E1F4D5L}},{{0x9DBCEF88L,0x8FF5465BL,(-2L)},{0x6CE15B6EL,0xF670EB3BL,(-2L)},{0xD0E030BAL,0x0A70EE41L,0x89E1F4D5L},{4L,1L,4L},{4L,8L,4L},{0x0398664AL,0x265FB632L,(-1L)},{(-4L),0xD0E030BAL,0xE3E4EACAL},{0xFCBDAF8FL,(-1L),0x2AED599EL}},{{0x58F4B07DL,0xFBF93365L,(-4L)},{0xF49DC91FL,8L,(-1L)},{0x3D173A3EL,0x9DBCEF88L,0xD0E030BAL},{(-1L),0xDFA3E8CFL,0xDFA3E8CFL},{1L,(-3L),0xF9E707D2L},{7L,(-3L),0L},{1L,0xFCBDAF8FL,4L},{0x3D173A3EL,0xF49DC91FL,0xBBE8C4B2L}},{{(-3L),0xFCBDAF8FL,0x2292CE4AL},{(-2L),(-3L),0x21245735L},{0x6CE15B6EL,(-3L),0x58F4B07DL},{0x6138C23CL,0xDFA3E8CFL,0x89E1F4D5L},{0x0398664AL,0x9DBCEF88L,0xBBE8C4B2L},{(-7L),8L,(-1L)},{0x2292CE4AL,0xFBF93365L,(-1L)},{(-4L),(-1L),0x8E583FEDL}},{{0xAE92B9E4L,0xD0E030BAL,0x2AED599EL},{0x9DBCEF88L,0x265FB632L,0xD0E030BAL},{(-3L),8L,8L},{(-1L),1L,1L},{(-1L),0x0A70EE41L,0xE7FF10CCL},{0x709ECDCCL,0xF670EB3BL,0xF9E707D2L},{0x709ECDCCL,0x8FF5465BL,(-1L)},{(-1L),0xFCBDAF8FL,(-1L)}}};
                        int64_t *l_1244 = &g_9[2].f0;
                        int64_t *l_1245 = &l_1211.f0;
                        int64_t *l_1246[10] = {&l_1211.f0,&g_1247,&g_1247,&g_1247,&g_1247,&l_1211.f0,&g_1247,&g_1247,&g_1247,&g_1247};
                        int32_t l_1248[5][5][8] = {{{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}},{{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}},{{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}},{{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}},{{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}}};
                        uint8_t *l_1251 = (void*)0;
                        int32_t *l_1261 = (void*)0;
                        int32_t *l_1262 = &g_75[1].f2;
                        int i, j, k;
                        l_1197 ^= l_1238;
                        (*l_1262) = ((*p_7) = (((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((((g_27 > ((l_1248[1][1][6] ^= l_1243[1][5][0]) >= (((*g_167) != (void*)0) , ((safe_mod_func_uint8_t_u_u((++p_6.f1), l_1202.f5)) & (+(0x6C763FEF8A501623LL && (safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u((l_1211.f1 < ((*l_1161) = 0x9E13284D46FFA143LL)), ((safe_mod_func_int64_t_s_s(g_75[1].f3, 0x9A58F2F75AB6698FLL)) & l_1238))), l_1173[l_1163.f3][(l_1163.f3 + 5)])))))))) >= g_1208) , g_27), g_333)), 0)) >= 9UL) & 7UL));
                    }
                    else
                    {
                        (*l_1161) = ((*p_7) |= (&g_456 != (void*)0));
                    }
                    return l_1263;
                }
                else
                {
                    return (**g_687);
                }
            }
        }
        return l_1264;
    }
    l_1266[0] = ((*l_33) = &l_1169);
    return l_1264;
}







static int32_t ** func_14(struct S0 p_15, int8_t * p_16, const int32_t * p_17)
{
    int32_t *l_20 = &g_3;
    int32_t **l_19 = &l_20;
    return g_21[1];
}







static union U2 func_23(int32_t p_24, struct S0 p_25, int8_t * p_26)
{
    union U3 *l_53 = &g_54;
    union U2 l_55 = {0L};
    int32_t *l_60 = &g_3;
    for (g_12.f0 = 0; (g_12.f0 < (-3)); g_12.f0--)
    {
        int32_t l_40 = 0L;
        if (l_40)
            break;
        if (p_25.f2)
            break;
    }
    for (g_11 = 21; (g_11 >= (-17)); g_11 = safe_sub_func_int64_t_s_s(g_11, 2))
    {
        const int32_t *l_59 = &g_3;
        union U3 l_71 = {0};
        uint8_t l_72 = 0x86L;
        int32_t *l_93 = &g_75[1].f2;
        uint16_t *l_372 = &g_373;
        union U4 l_374[4][1] = {{{0x2F8B824F0A6F1ECELL}},{{0x235C065375967B10LL}},{{0x2F8B824F0A6F1ECELL}},{{0x235C065375967B10LL}}};
        union U5 l_1136[2] = {{0L},{0L}};
        int i, j;
        (*g_683) = func_43(((g_47 = (-1L)) , (func_48(l_53, l_55, func_56(((l_59 != l_60) , ((func_28(&l_55, (((((safe_add_func_int8_t_s_s(((((*l_372) ^= (((func_63((((*l_60) &= (*p_26)) , func_68((l_71 , &l_71), l_72)), g_75[0], l_93, l_55.f1) & 255UL) >= 0UL) ^ g_277.f0)) <= g_18.f1) < p_25.f4), g_18.f2)) > g_47) < p_25.f3) == 0xFCC4L) < p_25.f1), g_21[1]) , l_374[2][0]) , 1UL)), g_375), g_1109) , (void*)0)), p_25.f4, l_1136[1]);
        (*l_60) ^= 0x571840D5L;
        return l_55;
    }
    return l_55;
}







static struct S0 func_28(const union U2 * p_29, const uint64_t p_30, int32_t ** p_31)
{
    int32_t *l_34 = (void*)0;
    int32_t *l_35 = &g_3;
    struct S0 l_36 = {-2,7,28,4,0xCEA0L,2};
    (*p_31) = l_34;
    (*l_35) ^= p_30;
    return l_36;
}







static union U3 * func_43(int32_t ** p_44, uint8_t p_45, union U5 p_46)
{
    struct S0 l_1139 = {0,6,4,14,0xAC88L,0};
    union U2 l_1140 = {7L};
    union U3 *l_1141 = &g_54;
    struct S1 l_1142[1] = {{3UL,18,1L,0x7A42L,0xB83F9057C2D2C192LL,0xB182L}};
    const uint64_t l_1145 = 0xB0CDE97710E6A0B2LL;
    struct S1 *l_1146 = (void*)0;
    struct S1 *l_1147 = &l_1142[0];
    int i;
    (*l_1147) = ((safe_rshift_func_int8_t_s_s(((p_45 , l_1139) , (func_48(&g_54, l_1140, l_1141, l_1142[0]) , (safe_mod_func_int16_t_s_s((g_333 & 0UL), l_1145)))), (**g_167))) , l_1142[0]);
    return l_1141;
}







static union U2 func_48(union U3 * p_49, union U2 p_50, union U3 * p_51, struct S1 p_52)
{
    union U4 **l_1110 = &g_240;
    int32_t *l_1111[4];
    struct S1 *l_1113 = &g_1109;
    uint16_t *l_1118[1][8][3] = {{{&g_373,&g_373,&g_1109.f3},{&g_373,&g_1109.f3,&g_75[1].f0},{&g_75[1].f0,&g_1109.f3,&g_373},{&g_373,&g_531[0][1][1],&g_531[0][1][1]},{&g_373,&g_75[1].f3,&g_373},{&g_1109.f3,&g_373,&g_75[1].f3},{&g_1109.f3,&g_1109.f3,&g_373},{&g_373,&g_156,&g_373}}};
    union U2 *l_1133 = &g_376[5][0][1];
    uint32_t *l_1134 = &g_155;
    uint8_t *l_1135 = &g_119;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1111[i] = (void*)0;
    (*l_1110) = &g_9[3];
    for (g_3 = 2; (g_3 <= 9); g_3 += 1)
    {
        int32_t **l_1112[5] = {&l_1111[2],&l_1111[2],&l_1111[2],&l_1111[2],&l_1111[2]};
        int i;
        l_1111[0] = l_1111[2];
        if (p_52.f1)
            continue;
    }
    (*l_1113) = g_75[1];
    p_52.f2 = (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((p_52.f0 ^= g_75[1].f4), 9UL)) || 0L), (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((*l_1135) = (g_18.f3 & ((p_50.f1 <= ((safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((*l_1134) ^= (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((*g_240) , ((&g_376[8][1][1] == l_1133) | g_277.f1)), 65535UL)), g_1109.f2))), (-9L))) != p_50.f1), g_9[2].f1)) >= p_52.f2)) ^ p_52.f5))), 252UL)), g_892))));
    return p_50;
}







static union U3 * func_56(uint64_t p_57, union U2 * p_58)
{
    uint32_t l_383[9] = {0UL,0x14277E1FL,0UL,0x14277E1FL,0UL,0x14277E1FL,0UL,0x14277E1FL,0UL};
    const union U4 l_387 = {1L};
    int32_t **l_389 = &g_22;
    union U5 l_416 = {0x375BL};
    union U5 * const l_417 = &g_236;
    int16_t l_421 = 0L;
    uint32_t l_422 = 4294967292UL;
    int8_t *l_449 = &g_11;
    int8_t **l_448 = &l_449;
    struct S0 *l_454 = &g_18;
    struct S0 **l_453 = &l_454;
    struct S0 ***l_452 = &l_453;
    uint32_t *l_475 = &l_383[0];
    int32_t l_509[2][5][4] = {{{0x274ED090L,0x8F2AD453L,0x8F2AD453L,0x274ED090L},{0x8F2AD453L,0x274ED090L,0x8F2AD453L,0x8F2AD453L},{0x274ED090L,0x274ED090L,4L,0x274ED090L},{0x274ED090L,0x8F2AD453L,0x8F2AD453L,0x274ED090L},{0x8F2AD453L,0x274ED090L,0x8F2AD453L,0x8F2AD453L}},{{0x274ED090L,0x274ED090L,4L,0x274ED090L},{0x274ED090L,0x8F2AD453L,0x8F2AD453L,0x274ED090L},{0x8F2AD453L,0x274ED090L,0x8F2AD453L,0x8F2AD453L},{0x274ED090L,0x274ED090L,4L,0x274ED090L},{0x274ED090L,0x8F2AD453L,0x8F2AD453L,0x274ED090L}}};
    uint32_t l_523 = 0x88D48908L;
    struct S1 l_597 = {0x73F8L,144,-1L,65527UL,2UL,0L};
    int32_t l_772 = 0x499BEA9AL;
    uint16_t l_794 = 9UL;
    uint8_t l_817[2];
    int32_t l_819 = 0x36CEE357L;
    union U2 *l_982 = &g_12;
    int8_t l_989 = 0x11L;
    struct S1 l_997 = {0UL,108,0x3922E23EL,0x1295L,0x9869D69FE8BBABD0LL,2L};
    union U3 *l_1017 = &g_54;
    union U3 **l_1074 = &l_1017;
    union U3 ***l_1073 = &l_1074;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_817[i] = 0UL;
    if (p_57)
    {
        struct S0 *l_384 = &g_18;
        union U5 l_388[6] = {{0x2326L},{-7L},{0x2326L},{0x2326L},{-7L},{0x2326L}};
        int64_t *l_390 = (void*)0;
        int64_t *l_391 = &g_9[2].f0;
        uint64_t l_392[8][4][2] = {{{0xAD4DF2974A7C65E1LL,0x06C51898C986FB32LL},{0UL,6UL},{6UL,6UL},{0UL,0x06C51898C986FB32LL}},{{0xAD4DF2974A7C65E1LL,0UL},{0UL,0UL},{18446744073709551608UL,0UL},{0xFD0515591BA20A1ALL,0x1C3E4CF94CDF6CA3LL}},{{0xFD0515591BA20A1ALL,0UL},{18446744073709551608UL,0UL},{0UL,0UL},{0xAD4DF2974A7C65E1LL,0x06C51898C986FB32LL}},{{0UL,6UL},{6UL,6UL},{0UL,0x06C51898C986FB32LL},{0xAD4DF2974A7C65E1LL,0UL}},{{0UL,0UL},{18446744073709551608UL,0UL},{0xFD0515591BA20A1ALL,0x1C3E4CF94CDF6CA3LL},{0xFD0515591BA20A1ALL,0UL}},{{18446744073709551608UL,0UL},{0UL,0UL},{0xAD4DF2974A7C65E1LL,0x06C51898C986FB32LL},{0UL,6UL}},{{6UL,6UL},{0UL,0x06C51898C986FB32LL},{0xAD4DF2974A7C65E1LL,0UL},{0UL,0UL}},{{18446744073709551608UL,0UL},{0xFD0515591BA20A1ALL,0x1C3E4CF94CDF6CA3LL},{0xFD0515591BA20A1ALL,0UL},{18446744073709551608UL,0UL}}};
        int32_t l_393 = 0x8F0CFB5DL;
        uint8_t *l_394 = (void*)0;
        uint8_t *l_395 = &g_119;
        struct S1 *l_462 = &g_75[1];
        uint32_t *l_474 = &l_383[0];
        int32_t l_517 = 0x16225369L;
        int32_t l_518 = 0L;
        int32_t l_520 = (-1L);
        int32_t l_522[5] = {2L,2L,2L,2L,2L};
        union U2 **l_577 = (void*)0;
        uint32_t l_600 = 0xB835E603L;
        union U4 **l_646 = &g_240;
        uint32_t l_689 = 2UL;
        uint32_t l_712 = 0x2BD9F54EL;
        int32_t l_722 = 0x8FADFAE7L;
        union U3 *l_747[8];
        uint16_t l_748 = 0x9A0CL;
        union U3 **l_891 = &l_747[4];
        union U3 ***l_890 = &l_891;
        const uint64_t l_942 = 18446744073709551606UL;
        int32_t l_956[3][2];
        int32_t l_983 = 1L;
        int32_t l_1057 = (-1L);
        const int32_t *l_1070 = &g_205[4];
        const int32_t **l_1069 = &l_1070;
        const uint32_t l_1071 = 0UL;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_747[i] = (void*)0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_956[i][j] = 1L;
        }
        if ((safe_div_func_int64_t_s_s(((((*l_395) = ((((0xEBAA8C972F1FC12CLL & 0L) < (safe_sub_func_int64_t_s_s(l_383[0], ((*g_240) , ((void*)0 == l_384))))) || (l_393 = (safe_mod_func_uint8_t_u_u((l_387 , ((l_387.f1 || ((g_156 = ((((*l_391) = ((func_28(((l_388[3] , p_57) , (void*)0), g_18.f2, l_389) , 0xB5BDF22CL) >= l_388[3].f0)) && 0x13AE3CD8226C8784LL) == p_57)) >= l_392[1][2][1])) && p_57)), l_392[1][2][1])))) , g_155)) < l_392[7][2][0]) <= g_281), g_12.f1)))
        {
            union U2 *l_415 = &g_376[5][0][1];
            union U5 l_418 = {-1L};
            union U2 **l_419 = (void*)0;
            union U2 **l_420 = &g_375;
            int32_t l_423 = 0xC793C85FL;
            int8_t *l_445 = &g_11;
            int8_t **l_444 = &l_445;
            int32_t l_479[7][6] = {{6L,0xC32E606EL,1L,0xFAD57ED5L,0xC32E606EL,0xFAD57ED5L},{6L,(-5L),6L,0xFAD57ED5L,(-5L),1L},{6L,(-1L),0xFAD57ED5L,0xFAD57ED5L,(-1L),6L},{6L,0xC32E606EL,1L,0xFAD57ED5L,0xC32E606EL,0xFAD57ED5L},{6L,(-5L),6L,0xFAD57ED5L,(-5L),1L},{6L,(-1L),0xFAD57ED5L,0xFAD57ED5L,(-1L),6L},{6L,0xC32E606EL,1L,0xFAD57ED5L,0xC32E606EL,0xFAD57ED5L}};
            int32_t l_507 = 4L;
            int32_t l_508 = 0x364640CEL;
            uint32_t l_510 = 1UL;
            int32_t l_519 = 0x4ED2F058L;
            int32_t l_521[8][2][1] = {{{(-1L)},{0xC9F6EF84L}},{{0x22088F21L},{0xC9F6EF84L}},{{(-1L)},{0xC9F6EF84L}},{{0x22088F21L},{0xC9F6EF84L}},{{(-1L)},{0xC9F6EF84L}},{{0x22088F21L},{0xC9F6EF84L}},{{(-1L)},{0xC9F6EF84L}},{{0x22088F21L},{0xC9F6EF84L}}};
            uint64_t l_681 = 9UL;
            int i, j, k;
            if ((((l_423 |= (((p_57 & (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((((safe_div_func_uint64_t_u_u((((safe_add_func_int32_t_s_s((-6L), (safe_lshift_func_int16_t_s_u(((((safe_mul_func_int16_t_s_s((((0x5D18L && 0x5A22L) ^ 65535UL) > (((+(((*l_395)++) == p_57)) , (((safe_mul_func_uint8_t_u_u((g_119 = ((l_415 == ((*l_420) = (((*l_417) = ((((((l_416 , (*g_240)) , (void*)0) == l_417) , g_75[1].f3) , p_57) , l_418)) , p_58))) > (-3L))), l_418.f0)) ^ 0x68EEL) && p_57)) <= g_9[2].f1)), l_421)) & 0x78L) | 0x9C3EL) , p_57), 10)))) || g_156) < p_57), g_277.f0)) ^ p_57) , 0x6947L) , l_422), l_418.f0)), 0))) && (**g_167)) , p_57)) , 0xD8BBL) , l_392[0][1][1]))
            {
                uint32_t *l_431 = &g_141[5][2];
                int32_t l_434 = 0x2C03883EL;
                int32_t *l_437 = (void*)0;
                int32_t *l_438 = &l_423;
                int8_t **l_443 = (void*)0;
                int8_t ***l_446 = (void*)0;
                int8_t ***l_447[7] = {&l_444,&l_444,&l_444,&l_444,&l_444,&l_444,&l_444};
                struct S0 ****l_455[4];
                struct S1 **l_461[3];
                uint64_t *l_463[1][3];
                int32_t *l_464 = (void*)0;
                int32_t *l_465 = &g_3;
                uint16_t l_470 = 0x4963L;
                int16_t *l_471[8][6] = {{(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0,(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0},{(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0,(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0},{(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0,(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0},{(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0,(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0},{(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0,(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0},{(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0,(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0},{(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0,(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0},{(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0,(void*)0,&g_376[5][0][1].f0,&g_376[5][0][1].f0}};
                uint16_t *l_478 = &g_75[1].f3;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_455[i] = &l_452;
                for (i = 0; i < 3; i++)
                    l_461[i] = (void*)0;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_463[i][j] = &g_75[1].f4;
                }
                (*l_438) = ((*g_240) , (safe_sub_func_int16_t_s_s(0x5D64L, (((p_57 , ((*l_391) = (safe_mod_func_int16_t_s_s(((~(safe_sub_func_int32_t_s_s((p_57 , p_57), (++(*l_431))))) < ((l_434 < p_57) >= ((safe_rshift_func_uint16_t_u_s(g_47, ((((2UL != g_205[4]) , p_57) >= 0x282955FCL) > 3L))) <= l_423))), g_373)))) | p_57) != l_393))));
                (*l_438) = ((safe_lshift_func_int8_t_s_u((((((safe_rshift_func_uint8_t_u_u(255UL, 7)) , l_387) , l_443) == (g_451 = (g_450[1] = (l_448 = l_444)))) & l_423), (g_18.f2 < (*l_438)))) || (((g_456 = l_452) == (void*)0) < l_418.f0));
                (*l_465) = (((safe_sub_func_uint64_t_u_u((safe_div_func_int16_t_s_s(p_57, 0xB0B8L)), ((l_462 = &g_75[2]) == ((((l_393 = ((((g_119 & (((l_423 = p_57) | g_18.f0) ^ p_57)) == g_181) < g_155) | l_418.f0)) >= (**g_167)) ^ p_57) , (void*)0)))) < l_392[4][1][1]) != g_27);
                (*l_465) ^= ((safe_lshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u(g_87, ((((*l_395) = ((p_57 == 9UL) == (((g_75[1].f5 ^= l_470) & ((*l_478) &= (safe_sub_func_uint8_t_u_u(((p_57 , l_474) == l_475), (((safe_rshift_func_uint16_t_u_u(p_57, g_333)) <= 0L) != 0x73L))))) | g_155))) <= l_479[0][3]) ^ p_57))), 3)) <= (-1L));
            }
            else
            {
                uint32_t l_505 = 0UL;
                int32_t l_506[8] = {0x1D2F6DC7L,5L,5L,0x1D2F6DC7L,5L,5L,0x1D2F6DC7L,5L};
                int32_t *l_513 = &l_509[1][4][3];
                int32_t *l_514 = (void*)0;
                int32_t *l_515 = &l_509[1][4][3];
                int32_t *l_516[8][7][4] = {{{&l_507,&l_423,&g_3,(void*)0},{(void*)0,&l_508,&l_508,(void*)0},{&g_3,&l_423,&l_509[0][0][2],&l_508},{&g_75[1].f2,&l_508,(void*)0,(void*)0},{&l_507,&l_506[3],&g_75[1].f2,(void*)0},{&l_508,&l_508,&l_508,&l_508},{&g_3,&l_423,&l_393,(void*)0}},{{&g_75[1].f2,&l_508,&l_506[3],(void*)0},{&g_75[1].f2,&l_423,&g_75[1].f2,&l_508},{(void*)0,&l_508,(void*)0,(void*)0},{&g_3,&l_506[3],&l_509[0][0][2],(void*)0},{&g_75[1].f2,&l_508,&l_506[3],&l_508},{&l_507,&l_423,&g_3,(void*)0},{(void*)0,&l_508,&l_508,(void*)0}},{{&g_3,&l_423,&l_509[0][0][2],&l_508},{&g_75[1].f2,&l_508,(void*)0,(void*)0},{&l_507,&l_506[3],&g_75[1].f2,(void*)0},{&l_508,&l_508,&l_508,&l_508},{&g_3,&l_423,&l_393,(void*)0},{&g_75[1].f2,&l_508,&l_506[3],(void*)0},{&g_75[1].f2,&l_423,&g_75[1].f2,&l_508}},{{(void*)0,&l_508,(void*)0,(void*)0},{&g_3,&l_506[3],&l_509[0][0][2],(void*)0},{&g_75[1].f2,&l_508,&l_506[3],&l_508},{&l_507,&l_423,&g_3,(void*)0},{(void*)0,&l_508,&l_508,(void*)0},{&g_3,&l_423,&l_509[0][0][2],&l_508},{&g_75[1].f2,&l_508,(void*)0,(void*)0}},{{&l_507,&l_506[3],&g_75[1].f2,(void*)0},{&l_423,&l_508,(void*)0,&l_423},{&g_3,&l_506[3],&l_509[0][4][1],&l_508},{&g_75[1].f2,(void*)0,(void*)0,&l_508},{&g_3,&l_506[3],&g_3,&l_423},{&l_508,&l_508,&l_508,&l_508},{&g_3,(void*)0,&l_393,&l_508}},{{&g_3,&l_508,(void*)0,&l_423},{&g_75[1].f2,&l_506[3],(void*)0,&l_508},{&l_508,(void*)0,(void*)0,&l_508},{&l_507,&l_506[3],&l_393,&l_423},{&g_75[1].f2,&l_508,&l_423,&l_508},{&g_75[1].f2,(void*)0,&g_3,&l_508},{&l_423,&l_508,(void*)0,&l_423}},{{&g_3,&l_506[3],&l_509[0][4][1],&l_508},{&g_75[1].f2,(void*)0,(void*)0,&l_508},{&g_3,&l_506[3],&g_3,&l_423},{&l_508,&l_508,&l_508,&l_508},{&g_3,(void*)0,&l_393,&l_508},{&g_3,&l_508,(void*)0,&l_423},{&g_75[1].f2,&l_506[3],(void*)0,&l_508}},{{&l_508,(void*)0,(void*)0,&l_508},{&l_507,&l_506[3],&l_393,&l_423},{&g_75[1].f2,&l_508,&l_423,&l_508},{&g_75[1].f2,(void*)0,&g_3,&l_508},{&l_423,&l_508,(void*)0,&l_423},{&g_3,&l_506[3],&l_509[0][4][1],&l_508},{&g_75[1].f2,(void*)0,(void*)0,&l_508}}};
                int i, j, k;
                for (l_418.f0 = (-26); (l_418.f0 != 19); ++l_418.f0)
                {
                    union U4 **l_482 = (void*)0;
                    struct S0 l_501 = {-2,11,-42,29,1L,4};
                    int32_t *l_504[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_504[i] = (void*)0;
                    g_240 = &g_9[1];
                    l_423 = ((((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((1UL <= (safe_add_func_int16_t_s_s(((((p_57 && l_423) ^ (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((*l_417) , (safe_add_func_uint32_t_u_u((g_333 && ((1L && ((l_501 , (safe_mul_func_uint16_t_u_u((((((*l_389) = (void*)0) != l_504[2]) , 0x6DD702B0L) | (-7L)), l_393))) > g_3)) || l_392[1][3][1])), 4294967295UL))), 1UL)), g_277.f1)) , g_376[5][0][1].f0), p_57)), g_177))) != g_155) | p_57), 0UL))) || g_205[4]), g_18.f0)) > 0x4637L), (-2L))), l_479[1][5])) <= l_392[1][2][1]) > g_141[6][2]) == 0x273D30E0L);
                    l_506[3] &= l_505;
                    l_510--;
                }
                ++l_523;
            }
            if ((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s((safe_sub_func_int8_t_s_s(((((((g_177 || g_531[0][1][1]) , (l_521[7][0][0] = (g_9[2].f0 > (safe_div_func_int32_t_s_s(0xD63E4963L, p_57))))) <= (g_373 != ((*g_375) , 0xDB91L))) ^ (((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((((-1L) | p_57) & p_57), l_418.f0)), p_57)) && g_47) && l_388[3].f0)) >= g_531[0][1][1]) ^ 1L), g_75[1].f5)))), p_57)))
            {
                uint64_t *l_543 = &l_392[2][2][0];
                int32_t *l_546 = &g_3;
                int8_t ***l_549 = &l_444;
                int32_t *l_552[3][10][2] = {{{&l_519,&l_517},{&l_521[7][1][0],&g_75[1].f2},{&l_517,&l_509[1][4][3]},{&l_517,&l_517},{&l_517,&l_517},{&l_517,&l_509[1][4][3]},{&l_517,&g_75[1].f2},{&l_521[7][1][0],&l_517},{&l_519,&l_521[7][1][0]},{&l_522[4],&l_520}},{{&l_522[4],&l_521[7][1][0]},{&l_519,&l_517},{&l_521[7][1][0],&g_75[1].f2},{&l_517,&l_509[1][4][3]},{&l_517,&l_517},{&l_517,&l_517},{&l_517,&l_509[1][4][3]},{&l_517,&g_75[1].f2},{&l_521[7][1][0],&l_517},{&l_519,&l_521[7][1][0]}},{{&l_522[4],&l_520},{&l_522[4],&l_521[7][1][0]},{&l_519,&l_517},{&l_521[7][1][0],&g_75[1].f2},{&l_517,&l_509[1][4][3]},{&l_517,&l_517},{&l_517,&l_517},{&l_517,&l_509[1][4][3]},{&l_517,&g_75[1].f2},{&l_521[7][1][0],&l_517}}};
                const int16_t l_569 = 0x2FD6L;
                int i, j, k;
                (*l_546) |= (safe_lshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s((~9L), 1L)) >= ((*l_543)++)), 3));
                if ((l_519 = ((*l_546) = (1L <= (((4294967288UL & 0x71A75EB2L) == (safe_add_func_uint32_t_u_u(l_510, ((((*l_549) = g_451) == &g_168[3]) == 0L)))) > ((l_388[3] , ((safe_mod_func_uint8_t_u_u(0xC1L, 255UL)) >= g_333)) , p_57))))))
                {
                    union U4 *l_555[7][4][4] = {{{&g_9[0],&g_9[1],&g_9[2],&g_9[3]},{&g_9[1],&g_9[5],&g_9[2],&g_9[5]},{&g_9[5],&g_9[2],&g_9[0],&g_9[5]},{&g_9[0],&g_9[5],&g_9[3],&g_9[3]}},{{&g_9[1],&g_9[1],&g_9[2],&g_9[1]},{&g_9[1],&g_9[2],&g_9[1],&g_9[0]},{&g_9[2],&g_9[2],&g_9[2],&g_9[1]},{&g_9[3],&g_9[2],&g_9[1],&g_9[0]}},{{&g_9[2],&g_9[2],&g_9[2],&g_9[2]},{&g_9[2],&g_9[0],&g_9[2],&g_9[1]},{&g_9[2],&g_9[3],&g_9[1],&g_9[3]},{&g_9[3],&g_9[2],&g_9[2],&g_9[3]}},{{&g_9[2],&g_9[3],&g_9[1],&g_9[1]},{&g_9[0],&g_9[0],&g_9[1],&g_9[2]},{&g_9[0],&g_9[2],&g_9[1],&g_9[0]},{&g_9[2],&g_9[2],&g_9[2],&g_9[1]}},{{&g_9[3],&g_9[2],&g_9[1],&g_9[0]},{&g_9[2],&g_9[2],&g_9[2],&g_9[2]},{&g_9[2],&g_9[0],&g_9[2],&g_9[1]},{&g_9[2],&g_9[3],&g_9[1],&g_9[3]}},{{&g_9[3],&g_9[2],&g_9[2],&g_9[3]},{&g_9[2],&g_9[3],&g_9[1],&g_9[1]},{&g_9[0],&g_9[0],&g_9[1],&g_9[2]},{&g_9[0],&g_9[2],&g_9[1],&g_9[0]}},{{&g_9[2],&g_9[2],&g_9[2],&g_9[1]},{&g_9[3],&g_9[2],&g_9[1],&g_9[0]},{&g_9[2],&g_9[2],&g_9[2],&g_9[2]},{&g_9[2],&g_9[0],&g_9[2],&g_9[1]}}};
                    int32_t l_565 = 0xD35776B8L;
                    int i, j, k;
                    for (g_269 = (-30); (g_269 != 35); ++g_269)
                    {
                        union U4 **l_556 = &g_240;
                        int32_t l_566 = 0xA0E3C966L;
                        (*l_556) = l_555[6][1][2];
                        (*l_546) ^= ((l_522[0] = (((((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((void*)0 == &g_119) > g_75[1].f5), (safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(l_565, l_423)), l_566)))), (safe_mul_func_uint16_t_u_u(4UL, (0x57L < 255UL))))) , l_569) , l_565) || 1L) | p_57)) | l_565);
                        (*l_420) = p_58;
                    }
                    (*l_546) = 0xC813C6E4L;
                }
                else
                {
                    int64_t l_587 = (-9L);
                    int32_t l_588 = 0x1D51B5ACL;
                    int64_t l_589 = 0x0667371D6BBE3BA4LL;
                    int32_t l_590 = 0x31335C19L;
                    int32_t l_591[6][7] = {{(-1L),7L,(-9L),(-1L),0xB6A2B552L,(-1L),7L},{0x53B48794L,0x47190815L,0x02AA377FL,0L,0x02AA377FL,0x47190815L,0x53B48794L},{0x47190815L,7L,0xC302EDCCL,0x02AA377FL,0x53B48794L,0x47190815L,0x02AA377FL},{(-1L),0xB6A2B552L,(-1L),7L,7L,(-1L),0xB6A2B552L},{7L,1L,0xC302EDCCL,0L,1L,0x02AA377FL,0xB6A2B552L},{0xD3013F96L,7L,0x02AA377FL,0xD3013F96L,0xB6A2B552L,0xD3013F96L,0x02AA377FL}};
                    uint32_t l_592 = 0xEA4C4FE8L;
                    int i, j;
                    for (p_57 = 0; (p_57 > 26); p_57 = safe_add_func_int8_t_s_s(p_57, 1))
                    {
                        if ((*l_546))
                            break;
                    }
                    if ((l_522[4] = (p_57 , (safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((p_57 != l_522[3]), g_156)), g_18.f4)))))
                    {
                        struct S1 l_576 = {0xC4D0L,158,0xD73ED059L,0x558FL,1UL,0x1EFCL};
                        union U2 ***l_578 = (void*)0;
                        union U2 ***l_579 = &l_420;
                        union U2 ***l_580 = &l_577;
                        (*l_546) = (l_576 , (&p_58 == ((*l_580) = ((*l_579) = l_577))));
                    }
                    else
                    {
                        union U3 *l_586 = &g_54;
                        union U3 **l_585 = &l_586;
                        l_521[2][0][0] &= (p_57 && ((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_57, (((*l_543) = 0x506EF29507A1CB68LL) <= (p_57 && 0xEB76F88AL)))), p_57)) >= g_18.f3));
                        (*l_585) = &g_54;
                    }
                    --l_592;
                    (*l_546) |= ((p_57 = (safe_add_func_uint8_t_u_u(l_521[1][1][0], (0x77L ^ g_9[2].f1)))) >= (l_597 , l_517));
                }
            }
            else
            {
                const union U4 *l_599 = (void*)0;
                const union U4 **l_598 = &l_599;
                int32_t *l_601 = &l_522[4];
                union U5 l_612 = {0xBE6AL};
                (*l_598) = (void*)0;
                (*l_601) |= (l_600 & 0x61L);
                l_518 |= ((safe_mod_func_uint8_t_u_u((+((&g_236 != (((!7UL) <= (0L >= 0xBB915D88B97BAC9CLL)) , &l_388[3])) , ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((l_612 , (g_205[3] , ((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_521[2][0][0], (safe_add_func_int16_t_s_s((p_57 != l_392[2][1][0]), 1L)))), 1UL)) , 255UL))), p_57)), (*l_601))), (*l_601))) > l_510))), g_75[1].f1)) || 0x7355C0EEAD7D8E47LL);
            }
            for (l_600 = 0; (l_600 != 51); l_600 = safe_add_func_uint8_t_u_u(l_600, 1))
            {
                uint64_t **l_636[1];
                int32_t l_643 = 0xE2FD3C01L;
                int32_t *l_644 = &l_393;
                uint16_t *l_645[1];
                int32_t *l_647 = &l_517;
                int32_t l_680 = 0xE9D55C85L;
                int32_t l_710 = 0x7A2D62BFL;
                int32_t l_711[8] = {9L,9L,9L,9L,9L,9L,9L,9L};
                int8_t *l_736 = &g_11;
                int i;
                for (i = 0; i < 1; i++)
                    l_636[i] = (void*)0;
                for (i = 0; i < 1; i++)
                    l_645[i] = &g_373;
                if (((*l_647) = (((safe_add_func_int64_t_s_s((0x8050L > (&g_240 == ((l_522[4] = ((!g_531[0][1][1]) && ((safe_sub_func_int32_t_s_s(p_57, ((((l_507 && (((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((((((*l_474)--) <= ((g_637 = (void*)0) == &p_57)) || (!0x73L)) & ((*l_644) = (safe_add_func_int64_t_s_s((l_643 = ((safe_mul_func_int16_t_s_s(l_393, g_373)) , g_18.f1)), g_141[6][2])))), l_510)) > l_522[4]), 3)), p_57)) , (*l_644)) , p_57)) & 1UL) <= 9L) , p_57))) , (*l_644)))) , l_646))), 8UL)) == 255UL) & p_57)))
                {
                    union U4 **l_661 = &g_240;
                    uint32_t *l_664 = (void*)0;
                    uint32_t *l_665 = &g_9[2].f1;
                    uint8_t *l_679 = &g_54.f3;
                    int32_t *l_682[7][1];
                    const union U3 **l_686[10][6][2] = {{{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684}},{{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684}},{{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684}},{{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684}},{{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684}},{{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684}},{{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684}},{{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684}},{{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684}},{{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684},{&g_684,&g_684}}};
                    const union U3 ***l_685[1][7] = {{(void*)0,&l_686[0][4][1],(void*)0,(void*)0,&l_686[0][4][1],(void*)0,(void*)0}};
                    int32_t l_688 = 1L;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_682[i][j] = &l_521[2][0][0];
                    }
                    l_520 ^= (safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((p_57 ^ (safe_rshift_func_uint8_t_u_s(((~(g_75[1] , (safe_mod_func_uint64_t_u_u((l_517 = (((l_661 != (p_57 , &g_240)) < ((((((safe_div_func_uint32_t_u_u((((*l_665) = g_277.f0) , ((g_531[0][1][1]++) & (safe_sub_func_int64_t_s_s(((*l_391) = ((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_679) = (safe_mul_func_int16_t_s_s(l_600, (g_75[1].f0 = (~((*l_395) &= ((safe_rshift_func_int16_t_s_u(0x6492L, (g_18.f1 & l_522[4]))) && p_57))))))), 6)), g_333)) ^ l_418.f0)), 5L)))), 0x968D73D9L)) != l_680) < (*l_644)) < (-1L)) & l_681) ^ 0L)) & g_18.f2)), 18446744073709551615UL)))) | l_600), 2))), p_57)), 1)), l_388[3].f0)) && p_57), 0L));
                    g_687 = g_683;
                    l_689++;
                }
                else
                {
                    const union U4 *l_692 = &g_277;
                    const union U4 **l_693 = (void*)0;
                    const union U4 **l_694 = &l_692;
                    int32_t l_709[8][4][3] = {{{0x7BF3DDF0L,0xDE0472C3L,1L},{0x970BA411L,(-1L),1L},{0x12A76763L,(-4L),0x17198C87L},{(-1L),0x032A1946L,1L}},{{0x032A1946L,0x7BF3DDF0L,1L},{1L,1L,0x17198C87L},{0xC90F03B5L,0x970BA411L,1L},{0xDE0472C3L,0xC90F03B5L,1L}},{{(-4L),0x12A76763L,0x17198C87L},{0x7BF3DDF0L,0xDE0472C3L,1L},{0x970BA411L,(-1L),1L},{0x12A76763L,(-4L),0x17198C87L}},{{(-1L),0x032A1946L,1L},{0x032A1946L,0x7BF3DDF0L,1L},{1L,1L,0x17198C87L},{0xC90F03B5L,0x970BA411L,1L}},{{0xDE0472C3L,0xC90F03B5L,1L},{(-4L),0x12A76763L,0x17198C87L},{0x7BF3DDF0L,0xDE0472C3L,1L},{0x970BA411L,(-1L),1L}},{{0x12A76763L,(-4L),0x17198C87L},{(-1L),0x032A1946L,1L},{0x032A1946L,0x7BF3DDF0L,1L},{1L,1L,0x17198C87L}},{{0xC90F03B5L,0x970BA411L,1L},{0xDE0472C3L,0xC90F03B5L,1L},{(-4L),0x12A76763L,0x17198C87L},{0x7BF3DDF0L,0xDE0472C3L,1L}},{{0x970BA411L,(-1L),1L},{0x12A76763L,(-4L),0x17198C87L},{(-1L),0x032A1946L,1L},{0x032A1946L,0x7BF3DDF0L,1L}}};
                    int8_t *l_737 = &g_11;
                    int i, j, k;
                    (*l_694) = l_692;
                    (*l_389) = (*l_389);
                    for (g_177 = 0; (g_177 < 2); g_177 = safe_add_func_uint16_t_u_u(g_177, 3))
                    {
                        int32_t *l_697 = &l_521[2][0][0];
                        int32_t *l_698 = &l_519;
                        int32_t *l_699 = &l_597.f2;
                        int32_t *l_700 = (void*)0;
                        int32_t *l_701 = &l_518;
                        int32_t *l_702 = &l_522[1];
                        int32_t *l_703 = &l_522[4];
                        int32_t *l_704 = (void*)0;
                        int32_t *l_705 = &l_518;
                        int32_t *l_706 = (void*)0;
                        int32_t *l_707 = &l_522[0];
                        int32_t *l_708[1][9][2] = {{{&l_522[0],&g_75[1].f2},{&l_509[0][4][0],&g_75[1].f2},{&l_522[0],&g_75[1].f2},{&l_509[0][4][0],&g_75[1].f2},{&l_522[0],&g_75[1].f2},{&l_509[0][4][0],&g_75[1].f2},{&l_522[0],&g_75[1].f2},{&l_509[0][4][0],&g_75[1].f2},{&l_522[0],&g_75[1].f2}}};
                        int8_t *l_720 = &g_721;
                        int i, j, k;
                        l_712++;
                        (*l_702) ^= (!(((g_531[0][1][1] |= (safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s(p_57, ((*l_720) = (*l_647)))), (l_722 , (~(p_57 < ((safe_add_func_int16_t_s_s(((0xEA6FL ^ (18446744073709551606UL < (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((((p_57 , ((safe_add_func_uint16_t_u_u((l_736 != ((*l_448) = l_395)), 0x066AL)) >= l_520)) > (*l_644)) <= p_57), 0x55A4D581L)) , l_737) == l_394), l_418.f0)), (**g_167))) && p_57), p_57)))) ^ 0x952AL), 0x57CAL)) ^ p_57))))))) & g_3) < l_392[1][2][1]));
                    }
                }
            }
        }
        else
        {
            struct S1 * const l_744 = (void*)0;
            int16_t l_745 = 0xC0BAL;
            int32_t l_749 = 0xCB8DB671L;
            union U3 l_750 = {0};
            const uint32_t *l_754 = &g_141[6][2];
            int16_t *l_757 = &g_376[5][0][1].f0;
            struct S0 ****l_760 = &l_452;
            int16_t *l_761 = &g_333;
            int32_t **l_766 = &g_346;
            uint16_t *l_769 = &g_531[0][1][1];
            uint16_t l_843 = 4UL;
            union U4 *l_950 = &g_9[2];
            int32_t l_953 = (-6L);
            int32_t l_954 = (-1L);
            int32_t l_955 = 0xDCA5DDB6L;
            int32_t l_957[8] = {1L,(-5L),1L,(-5L),(-5L),1L,(-5L),(-5L)};
            uint64_t l_958 = 0xB8DAA43D093C79A1LL;
            int32_t *l_968 = &l_749;
            uint32_t l_972[10];
            union U2 * const *l_977[10] = {&g_375,&g_375,&g_375,&g_375,&g_375,&g_375,&g_375,&g_375,&g_375,&g_375};
            struct S0 l_1001 = {-0,0,25,26,0x18ACL,3};
            union U3 ***l_1077 = &l_891;
            int i;
            for (i = 0; i < 10; i++)
                l_972[i] = 0x1E8D3067L;
            l_522[2] = ((safe_mod_func_uint32_t_u_u((0x7E32L | (g_333 && (((void*)0 == &g_21[1]) | ((((*l_391) = ((g_75[1] , ((safe_add_func_uint16_t_u_u(((l_749 = (safe_div_func_int16_t_s_s(((l_393 = ((l_744 != (void*)0) >= (l_745 != (safe_unary_minus_func_uint64_t_u((l_747[4] == (void*)0)))))) , p_57), l_748))) , p_57), p_57)) == p_57)) , 0x6650BF5FCB45B43ALL)) >= 1UL) != l_392[7][3][0])))), p_57)) == p_57);
            l_749 &= ((*l_417) , (l_750 , 6L));
            if ((safe_unary_minus_func_int64_t_s((((*l_391) = (safe_lshift_func_int16_t_s_u((&g_87 != l_754), 7))) , ((safe_add_func_int16_t_s_s(((*l_757) |= p_57), (safe_rshift_func_int16_t_s_u(((*l_761) = (g_456 == ((*l_760) = g_456))), ((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((void*)0 != l_766), (safe_lshift_func_uint16_t_u_u(((*l_769)--), 9)))), (l_772 <= ((safe_mul_func_uint8_t_u_u((p_57 == 3UL), 0x1DL)) || g_75[1].f0)))) ^ g_205[2]))))) != g_18.f1)))))
            {
                const union U5 l_779[9] = {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}};
                int32_t l_846 = (-9L);
                uint64_t *l_858 = &l_392[1][2][1];
                struct S1 **l_868 = (void*)0;
                int32_t l_921 = (-1L);
                int32_t l_945 = 0x7EE339DAL;
                int i;
                for (g_721 = 0; (g_721 == (-3)); --g_721)
                {
                    int32_t l_784 = (-6L);
                    union U2 l_844 = {0x85EBL};
                    union U5 **l_867 = &g_235[5];
                    int32_t l_869 = 1L;
                    for (g_87 = (-19); (g_87 > 59); ++g_87)
                    {
                        int32_t *l_789 = &l_509[1][4][3];
                        uint16_t *l_790 = &g_75[1].f3;
                        int32_t *l_791 = (void*)0;
                        int32_t *l_792 = &l_520;
                        int32_t *l_793[4][8] = {{(void*)0,&l_509[1][4][3],&l_518,(void*)0,(void*)0,&l_518,&l_509[1][4][3],(void*)0},{(void*)0,&l_597.f2,(void*)0,(void*)0,&l_509[1][4][3],(void*)0,&l_518,(void*)0},{(void*)0,&l_393,&l_518,&l_393,(void*)0,(void*)0,&l_522[1],&l_509[1][4][3]},{&g_3,&l_597.f2,&l_393,&l_520,&l_518,&l_518,&l_520,&l_393}};
                        int i, j;
                        (*l_792) = ((**g_683) , ((l_779[4] , (&g_156 != (((safe_div_func_int16_t_s_s(((*l_757) = (safe_sub_func_uint32_t_u_u(g_277.f0, ((l_784 ^ ((((0L && p_57) | 0xDEA2L) > (--(*l_395))) && (safe_sub_func_int32_t_s_s(((*l_789) = (func_28(&g_12, (*g_637), &g_22) , 0x4AF99320L)), 0xDF19980AL)))) && p_57)))), p_57)) > p_57) , l_790))) & 0x0E0E0859L));
                        --l_794;
                    }
                    for (l_517 = 0; (l_517 > (-10)); l_517--)
                    {
                        uint8_t l_818 = 247UL;
                        int8_t *l_820[7][2][5] = {{{(void*)0,(void*)0,&g_11,&g_721,&g_721},{&g_721,&g_821,(void*)0,&g_11,&g_11}},{{(void*)0,&g_11,&g_821,&g_11,(void*)0},{&g_11,&g_821,&g_821,&g_11,(void*)0}},{{&g_721,(void*)0,&g_721,(void*)0,(void*)0},{&g_11,&g_821,&g_11,&g_821,(void*)0}},{{(void*)0,(void*)0,(void*)0,&g_11,(void*)0},{(void*)0,&g_11,&g_11,&g_11,&g_11}},{{&g_721,&g_11,(void*)0,(void*)0,&g_721},{&g_821,&g_11,&g_11,(void*)0,&g_821}},{{&g_821,&g_721,&g_721,&g_821,&g_11},{&g_821,&g_11,&g_821,&g_11,(void*)0}},{{&g_721,&g_721,&g_821,(void*)0,&g_821},{(void*)0,(void*)0,(void*)0,&g_11,&g_821}}};
                        int32_t l_822[10][7][1] = {{{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)}},{{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L}},{{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)}},{{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L}},{{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)}},{{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L}},{{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)}},{{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L}},{{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)}},{{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L},{(-1L)},{0x734A2EC2L}}};
                        int32_t *l_823 = &l_522[1];
                        int i, j, k;
                        (*l_462) = l_597;
                        (*l_823) = (((((0x12L || (safe_div_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u(p_57, ((((l_822[0][1][0] |= ((**l_453) , ((((p_57 < ((((safe_sub_func_uint8_t_u_u(((**g_687) , g_269), ((safe_div_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint64_t_u_u(((((*l_761) &= (((*l_757) = (p_57 == (safe_add_func_uint32_t_u_u((g_87 = ((g_141[6][2] , (safe_mul_func_int16_t_s_s((((l_817[1] , p_57) & 6UL) != l_383[6]), g_9[2].f0))) & 0L)), l_522[4])))) || l_779[4].f0)) < 0x675FL) <= 18446744073709551613UL), g_18.f2)) , l_818), 6)), p_57)) <= l_818), l_779[4].f0)) | p_57))) ^ 0x20A2L) == p_57) <= l_818)) ^ 5L) | l_819) <= 0xA6L))) >= p_57) | p_57) , 0xAE30D400L))) != 0x39548C1AL) == 0x3E577EB6L), 0x12CD850CL))) >= p_57) & 4UL) >= g_18.f5) || l_784);
                        if (l_784)
                            break;
                        return &g_54;
                    }
                    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
                    {
                        union U5 l_826 = {0x2ABAL};
                        uint64_t **l_830 = &g_637;
                        uint64_t ***l_829[5] = {&l_830,&l_830,&l_830,&l_830,&l_830};
                        uint8_t *l_845 = &l_817[1];
                        uint16_t *l_857[4][9] = {{&g_75[1].f3,&l_748,(void*)0,&l_748,&g_75[1].f3,&l_843,&g_75[1].f3,&l_748,(void*)0},{(void*)0,(void*)0,&l_597.f3,(void*)0,(void*)0,&l_597.f3,(void*)0,(void*)0,&l_597.f3},{&g_75[1].f3,&l_748,(void*)0,&l_748,&g_75[1].f3,&l_843,&g_75[1].f3,&l_748,(void*)0},{(void*)0,(void*)0,&l_597.f3,(void*)0,(void*)0,&l_597.f3,(void*)0,(void*)0,&l_597.f3}};
                        int i, j;
                        l_846 ^= (safe_div_func_int32_t_s_s((l_826 , (safe_rshift_func_int16_t_s_u((((g_831 = &g_637) != (((safe_lshift_func_int8_t_s_s((**g_167), 0)) == (safe_sub_func_int32_t_s_s((((safe_add_func_int64_t_s_s(((((safe_mul_func_uint8_t_u_u(l_745, (+(((*l_395)++) != l_843)))) , (void*)0) == (l_844 , l_845)) < (p_57 || p_57)), 0xC1C77ACB48443B26LL)) | 0xF4FD807FF4BA964ELL) == p_57), l_749))) , (void*)0)) , g_236.f0), 15))), g_376[5][0][1].f0));
                        l_869 &= ((l_393 &= (((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((l_826.f0 ^ (g_119 <= (((g_75[1].f0 = (l_520 = ((*l_769)++))) , l_858) != &p_57))), (((**g_831) = (((safe_lshift_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_s((p_57 || ((void*)0 == l_867)), 8)) | g_181) == p_57) != 1UL), l_784)) & 0x2C6B9F1AFFD03D70LL) || l_843) >= 0UL), p_57)) , &l_462) != l_868)) || 0L))) <= l_846), 4)), p_57)), 4)) , g_119) || l_826.f0)) ^ l_784);
                    }
                    (*l_389) = &l_522[4];
                }
                (*l_462) = g_75[1];
                for (l_520 = 25; (l_520 > 2); l_520 = safe_sub_func_uint16_t_u_u(l_520, 2))
                {
                    uint32_t l_875 = 1UL;
                    int32_t l_934 = (-1L);
                    union U3 **l_944 = &l_747[4];
                    int32_t *l_949 = &g_3;
                    if (((((((safe_div_func_uint16_t_u_u((+l_779[4].f0), ((((l_749 |= (l_517 = p_57)) | ((l_875 ^ (0x41L > (safe_add_func_int64_t_s_s(g_11, (safe_add_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((4294967295UL <= 0x9628EF12L) | (safe_mod_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((((safe_add_func_uint16_t_u_u(8UL, ((l_890 == &g_683) ^ l_387.f1))) > p_57) , (*g_637)), (*g_637))), l_722))), g_892)) == 0xCBL), p_57)) | p_57) != 0x34D29E35DD1D10EDLL) >= 0x12L), p_57)))))) , 255UL)) && p_57) , g_9[2].f0))) || 0x0F29L) < l_875) , p_57) < 0L) < 0x22BE9E4B2B2DF27BLL))
                    {
                        int32_t *l_893 = &l_509[1][4][2];
                        int32_t *l_894 = &l_597.f2;
                        int32_t *l_895 = (void*)0;
                        int32_t *l_896 = &l_597.f2;
                        int32_t *l_897 = &l_522[4];
                        int32_t *l_898 = &g_75[1].f2;
                        int32_t *l_899 = (void*)0;
                        int32_t *l_900 = &l_518;
                        int32_t *l_901 = &l_518;
                        int32_t *l_902 = &l_393;
                        int32_t *l_903 = &l_522[3];
                        int32_t *l_904[5][4];
                        int32_t **l_908 = &g_346;
                        int8_t *l_919 = &g_821;
                        int16_t *l_943 = &l_597.f5;
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_904[i][j] = (void*)0;
                        }
                        g_905--;
                        l_908 = &g_346;
                        l_518 ^= (safe_mul_func_uint8_t_u_u(((((*l_769) = (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((*l_474)--), (safe_add_func_uint64_t_u_u(((((((((*l_919) = l_517) < ((((((((!(l_921 && ((safe_mod_func_int8_t_s_s((((l_875 == ((((safe_sub_func_int64_t_s_s(g_177, (((safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u(p_57, ((*l_391) = (-10L)))), ((((l_934 = l_779[4].f0) & ((!((safe_rshift_func_int16_t_s_s((l_846 = (safe_mul_func_int16_t_s_s(((*l_761) = ((*l_757) = 0xCD31L)), ((*l_943) = (safe_mul_func_uint8_t_u_u(((*l_395) = (g_75[1].f3 & g_75[1].f0)), l_942)))))), 9)) , p_57)) <= p_57)) != (**g_831)) != g_11))), g_75[1].f0)) & 8UL) <= l_875))) >= 0x2E9A4786L) && 1UL) <= p_57)) || g_277.f1) , l_745), p_57)) >= p_57))) == p_57) && p_57) >= p_57) , (void*)0) == l_944) <= (-1L)) > 0x156A439D307DD75ALL)) , 0xF79DC95E2F392504LL) | (*g_637)) , 7UL) < l_921) || p_57), l_945)))), l_779[4].f0))) == 0L) < p_57), p_57));
                    }
                    else
                    {
                        const struct S1 l_946[3] = {{65535UL,-3,0x97F2D0ADL,0x7863L,1UL,0xB3F2L},{65535UL,-3,0x97F2D0ADL,0x7863L,1UL,0xB3F2L},{65535UL,-3,0x97F2D0ADL,0x7863L,1UL,0xB3F2L}};
                        int i;
                        g_75[1] = l_946[2];
                        l_749 = ((safe_unary_minus_func_uint8_t_u(p_57)) > (((!p_57) == p_57) >= 0xA0B49521L));
                    }
                    (*l_949) &= (((*l_757) |= (((*l_454) , &g_27) == l_754)) , p_57);
                }
                l_950 = l_950;
            }
            else
            {
                int32_t *l_951 = &l_597.f2;
                int32_t *l_952[5][7][1] = {{{(void*)0},{&g_75[1].f2},{(void*)0},{&g_75[1].f2},{(void*)0},{&g_75[1].f2},{(void*)0}},{{&g_75[1].f2},{(void*)0},{&g_75[1].f2},{(void*)0},{&g_75[1].f2},{(void*)0},{&g_75[1].f2}},{{(void*)0},{&g_75[1].f2},{(void*)0},{&g_75[1].f2},{(void*)0},{&g_75[1].f2},{(void*)0}},{{&g_75[1].f2},{(void*)0},{&g_75[1].f2},{(void*)0},{&g_75[1].f2},{(void*)0},{&g_75[1].f2}},{{(void*)0},{&g_75[1].f2},{(void*)0},{&g_75[1].f2},{(void*)0},{&g_75[1].f2},{(void*)0}}};
                struct S0 *l_971 = &g_18;
                union U3 *l_999 = (void*)0;
                int8_t *l_1002 = &g_11;
                struct S1 l_1015 = {0xFE5DL,130,0xEDB2B7C9L,0xAEDCL,0xCAFAB1B581780FAFLL,0x48C6L};
                int64_t l_1016[4] = {1L,1L,1L,1L};
                uint64_t l_1043[6] = {0UL,0UL,0x64F51C040C68DF22LL,0UL,0UL,0x64F51C040C68DF22LL};
                union U5 *l_1063[6][5][3] = {{{&l_388[3],(void*)0,&l_416},{(void*)0,&l_416,&l_388[3]},{(void*)0,&l_388[3],(void*)0},{&l_388[3],&l_416,&l_388[3]},{&l_388[1],(void*)0,&l_416}},{{&l_416,&l_416,&l_416},{(void*)0,&l_388[0],&l_388[3]},{(void*)0,&l_388[3],&l_388[3]},{&l_388[3],&l_416,&l_388[1]},{&l_416,(void*)0,&l_388[3]}},{{&l_388[3],(void*)0,&l_388[3]},{&l_416,&l_388[3],&l_416},{&l_388[4],&g_236,&l_416},{&l_388[0],&l_388[1],&l_388[3]},{&g_236,&l_388[1],(void*)0}},{{&l_388[3],&l_388[3],&l_388[3]},{&g_236,&l_388[0],&l_416},{&l_388[0],&l_388[0],&l_388[0]},{&l_388[4],(void*)0,&l_388[0]},{&l_416,&l_388[3],&l_416}},{{&l_388[3],&l_388[3],&g_236},{&l_416,&l_388[3],&l_416},{&l_388[3],&l_388[3],&l_416},{(void*)0,&l_388[3],&l_388[0]},{(void*)0,(void*)0,&l_388[3]}},{{&l_416,&l_388[0],&l_388[3]},{&l_388[1],&l_388[0],&l_388[0]},{&l_388[3],&l_388[3],(void*)0},{(void*)0,&l_388[1],&l_388[0]},{(void*)0,&l_388[1],&l_388[3]}}};
                uint32_t l_1066 = 0x442666DBL;
                int i, j, k;
                l_958--;
                if (l_749)
                {
                    uint8_t l_961 = 0x0DL;
                    int32_t *l_967 = (void*)0;
                    union U3 *l_998 = &l_750;
                    l_961++;
                    for (g_181 = 0; (g_181 == 17); g_181 = safe_add_func_int16_t_s_s(g_181, 7))
                    {
                        int32_t *l_966 = &l_517;
                        (*l_389) = l_966;
                        l_968 = l_967;
                        (*l_646) = l_950;
                    }
                    if ((safe_sub_func_uint32_t_u_u((l_971 == l_384), (((l_972[8] | 0x01L) != ((safe_rshift_func_int8_t_s_u(((*g_240) , ((l_421 && (safe_add_func_uint8_t_u_u((&g_375 != l_977[0]), p_57))) , (-7L))), p_57)) | g_3)) < (*l_951)))))
                    {
                        uint64_t *l_986 = &l_597.f4;
                        int8_t l_990 = 1L;
                        int32_t l_991 = (-1L);
                        l_991 |= (safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((((void*)0 == l_982) != (l_518 <= (g_75[1].f4 == 0x7207L))) <= ((l_983 && (*g_637)) <= (((*l_986) &= (safe_rshift_func_int8_t_s_u(0x9AL, 7))) <= (safe_mod_func_int64_t_s_s(((l_989 != p_57) >= (**g_831)), p_57))))), g_141[6][2])), l_990));
                        if (l_749)
                            goto lbl_992;
lbl_992:
                        (*l_389) = l_967;
                        return &g_54;
                    }
                    else
                    {
                        int32_t l_993[6][4] = {{0x31A84397L,0x45BCAB45L,0x31A84397L,0x45BCAB45L},{0x31A84397L,0x45BCAB45L,0x31A84397L,0x45BCAB45L},{0x31A84397L,0x45BCAB45L,0x31A84397L,0x45BCAB45L},{0x31A84397L,0x45BCAB45L,0x31A84397L,0x45BCAB45L},{0x31A84397L,0x45BCAB45L,0x31A84397L,0x45BCAB45L},{0x31A84397L,0x45BCAB45L,0x31A84397L,0x45BCAB45L}};
                        int64_t **l_994 = &l_391;
                        int i, j;
                        l_993[0][3] = p_57;
                        (*l_951) = (((*l_994) = g_637) == (void*)0);
                    }
                    if ((p_57 >= (safe_div_func_int32_t_s_s(l_748, 0xC47507C5L))))
                    {
                        (*l_462) = l_997;
                    }
                    else
                    {
                        l_997.f2 ^= l_748;
                        (*l_389) = &l_953;
                        return l_999;
                    }
                }
                else
                {
                    int32_t ** const l_1000 = &l_952[3][3][0];
                    int32_t ***l_1003 = &g_21[5];
                    struct S0 * const **l_1014 = (void*)0;
                    struct S0 * const ***l_1013 = &l_1014;
                    if ((l_1000 != ((*l_1003) = func_14(l_1001, l_1002, &l_749))))
                    {
                        struct S1 l_1010 = {0x501BL,-121,0L,65535UL,0x8DE882BD050476F7LL,0x5F9AL};
                        (*l_951) &= (((safe_add_func_uint64_t_u_u(((p_57 < (((safe_sub_func_int8_t_s_s(p_57, (p_57 <= p_57))) && (safe_mul_func_int8_t_s_s((&l_600 != (l_1010 , &l_600)), (safe_mod_func_uint64_t_u_u((((((void*)0 != l_1013) | 65535UL) , l_1015) , (**g_831)), 0x5EAB222E4D35DCB0LL))))) > l_1016[2])) != l_1010.f1), 0x0FD7D6327D3C5AEBLL)) | 1UL) >= p_57);
                        l_1010 = ((*l_462) = g_75[1]);
                    }
                    else
                    {
                        return l_1017;
                    }
                    for (l_416.f0 = 6; (l_416.f0 >= 0); l_416.f0 -= 1)
                    {
                        union U4 l_1026 = {0x0788F442C994E7D4LL};
                        uint16_t *l_1038 = &l_997.f0;
                        uint16_t l_1040 = 0xEE14L;
                        union U3 *** const l_1041 = &l_891;
                        int32_t l_1042 = 0xC2BFF2E2L;
                        int i;
                        (*l_462) = g_75[1];
                        (*l_968) = ((*l_951) ^= (((*l_761) = g_205[l_416.f0]) == (((safe_mod_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_s(g_9[2].f0, ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((l_1026 , ((0x85F5D7B525F3BB49LL >= ((safe_add_func_uint16_t_u_u(((-1L) >= (safe_lshift_func_uint16_t_u_u(65535UL, (((**g_831) >= (g_1039 = (safe_mul_func_uint16_t_u_u(((*l_1038) = ((*l_769) = (safe_add_func_int64_t_s_s((+(safe_mod_func_uint64_t_u_u(18446744073709551612UL, p_57))), (*g_637))))), 5UL)))) | p_57)))), p_57)) > 0xF9L)) | p_57)), p_57)), 2)) == (*g_637)))) < p_57) != p_57) || l_1040), p_57)) , l_1041) == &l_891)));
                        l_1043[0]++;
                    }
                    for (g_177 = 0; (g_177 == 50); g_177 = safe_add_func_int64_t_s_s(g_177, 4))
                    {
                        (*l_968) = (p_57 >= 8L);
                        if (p_57)
                            continue;
                    }
                    for (l_953 = 17; (l_953 >= 19); l_953++)
                    {
                        int8_t ****l_1058 = (void*)0;
                        int8_t ***l_1060 = (void*)0;
                        int8_t ****l_1059 = &l_1060;
                        l_1015 = g_75[1];
                        (*l_1059) = ((l_1057 = (safe_mul_func_int16_t_s_s(0xB63FL, (safe_add_func_uint8_t_u_u((!g_155), ((*l_395)++)))))) , &g_451);
                        return l_1017;
                    }
                }
                for (l_1015.f4 = (-1); (l_1015.f4 < 59); l_1015.f4++)
                {
                    uint32_t l_1072[1];
                    union U3 ****l_1075 = (void*)0;
                    union U3 ****l_1076 = &l_1073;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1072[i] = 0x8B17951AL;
                    if (p_57)
                    {
                        int32_t l_1064 = 0x3743F694L;
                        int32_t l_1065[8][8][4] = {{{0x777F3812L,0x9CA0C8C7L,0x978F65E3L,0xAAE548BBL},{0x777F3812L,0x68F6470BL,0x777F3812L,(-4L)},{0x7319AC30L,0xAAE548BBL,0x210436B8L,(-4L)},{0x978F65E3L,0x68F6470BL,0x92601D2FL,0xAAE548BBL},{0x5B5B9825L,0x9CA0C8C7L,0x92601D2FL,0x9CA0C8C7L},{0x978F65E3L,(-6L),0x210436B8L,7L},{0x7319AC30L,(-6L),0x777F3812L,0x9CA0C8C7L},{0x777F3812L,0x9CA0C8C7L,0x978F65E3L,0xAAE548BBL}},{{0x777F3812L,0x68F6470BL,0x777F3812L,(-4L)},{0x7319AC30L,0xAAE548BBL,0x210436B8L,(-4L)},{0x978F65E3L,0x68F6470BL,0x92601D2FL,0xAAE548BBL},{0x5B5B9825L,0x9CA0C8C7L,0x92601D2FL,0x9CA0C8C7L},{0x978F65E3L,(-6L),0x210436B8L,7L},{0x7319AC30L,(-6L),0x777F3812L,0x9CA0C8C7L},{0x777F3812L,0x9CA0C8C7L,0x978F65E3L,0xAAE548BBL},{0x777F3812L,0x68F6470BL,0x777F3812L,(-4L)}},{{0x7319AC30L,0xAAE548BBL,0x210436B8L,(-4L)},{0x978F65E3L,0x68F6470BL,0x92601D2FL,0xAAE548BBL},{0x5B5B9825L,0x9CA0C8C7L,0x92601D2FL,0x9CA0C8C7L},{0x978F65E3L,(-6L),0x210436B8L,7L},{0x7319AC30L,(-6L),0x777F3812L,0x9CA0C8C7L},{0x777F3812L,0x9CA0C8C7L,0x978F65E3L,0xAAE548BBL},{0x777F3812L,0x68F6470BL,0x777F3812L,(-4L)},{0x7319AC30L,0xAAE548BBL,0x210436B8L,(-4L)}},{{0x978F65E3L,0x68F6470BL,0x92601D2FL,0xAAE548BBL},{0x5B5B9825L,0x9CA0C8C7L,0x92601D2FL,0x9CA0C8C7L},{0x978F65E3L,(-6L),0x210436B8L,7L},{0x7319AC30L,(-6L),0x777F3812L,0x9CA0C8C7L},{0x777F3812L,0x9CA0C8C7L,0x978F65E3L,0xAAE548BBL},{0x777F3812L,0x68F6470BL,0x777F3812L,(-4L)},{0x7319AC30L,0xAAE548BBL,0x210436B8L,(-4L)},{0x978F65E3L,0x68F6470BL,0x92601D2FL,0xAAE548BBL}},{{0x5B5B9825L,0x9CA0C8C7L,0x92601D2FL,0x9CA0C8C7L},{0x978F65E3L,(-6L),0x210436B8L,7L},{0x7319AC30L,(-6L),0x777F3812L,0x9CA0C8C7L},{0x777F3812L,0x9CA0C8C7L,0x978F65E3L,0xAAE548BBL},{0x777F3812L,0x68F6470BL,0x777F3812L,(-4L)},{0x7319AC30L,0xAAE548BBL,0x210436B8L,(-4L)},{0x978F65E3L,0x68F6470BL,0x92601D2FL,0xAAE548BBL},{0x5B5B9825L,0x9CA0C8C7L,0x92601D2FL,0x9CA0C8C7L}},{{0x978F65E3L,(-6L),0x210436B8L,7L},{0x7319AC30L,(-6L),0x777F3812L,0x9CA0C8C7L},{0x777F3812L,0x9CA0C8C7L,0x978F65E3L,(-4L)},{0x5B5B9825L,0x4E1CC620L,0x5B5B9825L,7L},{0x777F3812L,(-4L),0x92601D2FL,7L},{2L,0x4E1CC620L,0x978F65E3L,(-4L)},{0x210436B8L,(-6L),0x978F65E3L,(-6L)},{2L,0xAAE548BBL,0x92601D2FL,0x68F6470BL}},{{0x777F3812L,0xAAE548BBL,0x5B5B9825L,(-6L)},{0x5B5B9825L,(-6L),2L,(-4L)},{0x5B5B9825L,0x4E1CC620L,0x5B5B9825L,7L},{0x777F3812L,(-4L),0x92601D2FL,7L},{2L,0x4E1CC620L,0x978F65E3L,(-4L)},{0x210436B8L,(-6L),0x978F65E3L,(-6L)},{2L,0xAAE548BBL,0x92601D2FL,0x68F6470BL},{0x777F3812L,0xAAE548BBL,0x5B5B9825L,(-6L)}},{{0x5B5B9825L,(-6L),2L,(-4L)},{0x5B5B9825L,0x4E1CC620L,0x5B5B9825L,7L},{0x777F3812L,(-4L),0x92601D2FL,7L},{2L,0x4E1CC620L,0x978F65E3L,(-4L)},{0x210436B8L,(-6L),0x978F65E3L,(-6L)},{2L,0xAAE548BBL,0x92601D2FL,0x68F6470BL},{0x777F3812L,0xAAE548BBL,0x5B5B9825L,(-6L)},{0x5B5B9825L,(-6L),2L,(-4L)}}};
                        int i, j, k;
                        l_1063[2][4][1] = &g_236;
                        ++l_1066;
                    }
                    else
                    {
                        (*l_951) ^= (l_1069 != (void*)0);
                        l_1072[0] = l_1071;
                        if (p_57)
                            break;
                    }
                    l_522[3] |= ((((((*l_1076) = l_1073) == ((*g_375) , l_1077)) > g_531[0][1][1]) & p_57) || 0L);
                }
            }
            g_375 = &g_12;
        }
        if ((safe_add_func_int64_t_s_s(p_57, (safe_lshift_func_int16_t_s_u(g_12.f1, 13)))))
        {
            uint64_t l_1082 = 0UL;
            int32_t l_1083 = 0xBCD4DB2AL;
            int32_t *l_1102 = &l_520;
            struct S1 l_1103[1] = {{0UL,6,-10L,0xBE29L,0x8BDBBE6EA7B67E45LL,0L}};
            struct S1 *l_1104 = &l_1103[0];
            int i;
            l_1083 &= l_1082;
            (*l_1102) = (g_9[2].f1 > (safe_rshift_func_uint16_t_u_u(((p_57 | (((safe_div_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((*l_395)--), ((safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(0xE0DD79C0L, (l_1083 = (l_712 | l_1083)))), 10)) , p_57))), (func_28(((safe_mod_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((void*)0 != &g_375), ((safe_rshift_func_int8_t_s_u((g_75[1].f2 > l_1057), g_75[1].f2)) > l_983))), 0x0A88L)) , p_58), p_57, &g_22) , 0x28134C9407D25507LL))) , 0xB3L) < 4L)) & g_141[2][2]), 12)));
            (*l_1102) &= l_522[4];
            (*l_1104) = ((*l_462) = l_1103[0]);
        }
        else
        {
            int32_t *l_1105 = &l_522[4];
            (*l_1105) = p_57;
        }
    }
    else
    {
        uint32_t l_1106 = 4294967286UL;
        l_1106++;
        (*l_389) = (void*)0;
    }
    return &g_54;
}







static uint8_t func_63(union U3 p_64, struct S1 p_65, int32_t * p_66, uint32_t p_67)
{
    uint16_t *l_96 = &g_75[1].f3;
    int32_t l_107[7];
    union U2 l_110[8] = {{0xB69DL},{0xB69DL},{0xB69DL},{0xB69DL},{0xB69DL},{0xB69DL},{0xB69DL},{0xB69DL}};
    int32_t *l_111 = &g_75[1].f2;
    uint16_t l_115 = 0UL;
    int8_t *l_134[9][9][1] = {{{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11}},{{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11}},{{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11}},{{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11}},{{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11}},{{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11}},{{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11}},{{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11}},{{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11},{&g_11}}};
    struct S0 *l_135 = (void*)0;
    uint32_t l_237 = 0xA2D030C1L;
    uint32_t l_268 = 0xCFCCCF3AL;
    const union U4 *l_276 = &g_277;
    int8_t l_309[1][9] = {{0x98L,0x98L,0x98L,0x98L,0x98L,0x98L,0x98L,0x98L,0x98L}};
    uint16_t l_311[10] = {65535UL,65527UL,65527UL,65535UL,65527UL,65527UL,65535UL,0x87DDL,0x87DDL,65527UL};
    const uint64_t l_318 = 1UL;
    int8_t l_330 = 1L;
    struct S0 **l_335 = (void*)0;
    struct S0 ***l_334 = &l_335;
    uint8_t l_358 = 1UL;
    uint16_t l_369[1];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_107[i] = 0x0855C5D7L;
    for (i = 0; i < 1; i++)
        l_369[i] = 0xF4ABL;
lbl_217:
    if (((*p_66) = (safe_mul_func_uint16_t_u_u(((*l_96) = ((-4L) != ((void*)0 == &g_54))), (safe_sub_func_uint64_t_u_u(0UL, (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_107[0], l_107[1])), (safe_add_func_int16_t_s_s((l_110[1] , g_75[1].f4), (p_67 ^ g_87))))), p_65.f5)), p_67)) <= 0x5C80B88CC77C05DALL) == (*p_66))))))))
    {
        int32_t **l_112 = &l_111;
        (*l_112) = l_111;
    }
    else
    {
        int32_t *l_113 = &l_107[0];
        int32_t *l_114[8][8] = {{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3}};
        int32_t **l_118 = &l_113;
        int i, j;
        l_115--;
        (*l_118) = p_66;
        g_119++;
    }
    for (g_87 = 0; (g_87 != 20); g_87++)
    {
        uint8_t l_124 = 255UL;
        int32_t *l_130 = &g_3;
        int8_t *l_132 = (void*)0;
        struct S1 l_157 = {0x5A5EL,30,0xFB5D410DL,0x0FDCL,1UL,0x2968L};
        union U5 l_170 = {0x1603L};
        uint16_t l_203 = 65528UL;
        int32_t l_213[5][3] = {{(-6L),(-6L),0x2D59152CL},{0x088F53ABL,0x088F53ABL,0L},{(-6L),(-6L),0x2D59152CL},{0x088F53ABL,0x088F53ABL,0L},{(-6L),(-6L),0x2D59152CL}};
        uint16_t l_214 = 1UL;
        struct S0 l_233 = {4,5,-33,-10,0x0106L,2};
        union U4 l_266 = {2L};
        uint16_t l_275 = 1UL;
        const union U4 *l_278 = &g_9[5];
        int32_t *l_304 = &l_107[3];
        int32_t *l_305 = &g_75[1].f2;
        int32_t *l_306 = &l_213[0][2];
        int32_t *l_307 = (void*)0;
        int32_t *l_308[5];
        int64_t l_310 = 1L;
        uint32_t *l_317 = &g_141[4][2];
        uint8_t *l_323 = (void*)0;
        uint8_t *l_324 = &l_110[1].f1;
        int16_t *l_329 = &g_12.f0;
        uint8_t *l_331 = (void*)0;
        uint8_t *l_332 = &g_177;
        int i, j;
        for (i = 0; i < 5; i++)
            l_308[i] = &l_107[6];
        l_124 ^= (g_12 , ((*l_111) = (0x23L < (*l_111))));
        for (g_12.f1 = 0; (g_12.f1 > 9); g_12.f1++)
        {
            int32_t **l_127 = &g_22;
            int32_t *l_129 = &g_75[1].f2;
            int32_t **l_128[3];
            int8_t *l_131[10] = {&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11};
            int8_t **l_133[10][2][3] = {{{&l_132,&l_131[8],&l_131[8]},{&l_132,&l_131[8],&l_131[8]}},{{&l_132,&l_131[8],&l_131[8]},{&l_132,&l_131[8],&l_131[8]}},{{&l_132,&l_131[8],&l_131[8]},{&l_132,&l_131[8],&l_131[8]}},{{&l_132,&l_131[8],&l_131[8]},{&l_132,&l_131[8],&l_131[8]}},{{&l_132,&l_131[8],&l_131[8]},{&l_132,&l_131[8],&l_131[8]}},{{&l_132,&l_131[8],&l_131[8]},{&l_132,&l_131[8],&l_131[8]}},{{&l_132,&l_131[8],&l_131[8]},{&l_132,&l_131[8],&l_131[8]}},{{&l_132,&l_131[8],&l_131[8]},{&l_132,&l_131[8],&l_131[8]}},{{&l_132,&l_131[8],&l_131[8]},{&l_132,&l_131[8],&l_131[8]}},{{&l_132,&l_131[8],&l_131[8]},{&l_132,&l_131[8],&l_131[8]}}};
            union U2 l_193 = {-9L};
            union U5 *l_230 = &l_170;
            union U4 *l_239 = &g_9[2];
            union U4 **l_238[6] = {&l_239,&l_239,&l_239,&l_239,&l_239,&l_239};
            const struct S0 *l_249[4] = {&l_233,&l_233,&l_233,&l_233};
            const struct S0 **l_248 = &l_249[0];
            const struct S0 ***l_247[5][2][7] = {{{&l_248,&l_248,&l_248,&l_248,&l_248,&l_248,&l_248},{&l_248,&l_248,&l_248,&l_248,&l_248,&l_248,&l_248}},{{&l_248,&l_248,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,(void*)0,(void*)0,&l_248,(void*)0,(void*)0}},{{&l_248,&l_248,&l_248,&l_248,&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,(void*)0,&l_248,&l_248,(void*)0}},{{&l_248,&l_248,&l_248,(void*)0,&l_248,(void*)0,&l_248},{(void*)0,(void*)0,&l_248,(void*)0,(void*)0,&l_248,(void*)0}},{{&l_248,(void*)0,&l_248,&l_248,&l_248,(void*)0,&l_248},{&l_248,(void*)0,&l_248,&l_248,(void*)0,&l_248,&l_248}}};
            uint16_t l_257 = 0x7C5CL;
            struct S1 *l_300 = &l_157;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_128[i] = &l_129;
            l_130 = ((*l_127) = (l_111 = (g_12 , &l_107[0])));
            if ((l_131[8] == (l_134[2][8][0] = l_132)))
            {
                struct S0 **l_136 = &l_135;
                for (g_3 = 1; (g_3 <= 5); g_3 += 1)
                {
                    int i;
                    if (l_107[(g_3 + 1)])
                        break;
                }
                (*l_136) = l_135;
            }
            else
            {
                uint32_t *l_139 = (void*)0;
                uint32_t *l_140 = &g_141[6][2];
                struct S0 *l_144 = (void*)0;
                int32_t l_149[8] = {0xEC332B00L,0xEC332B00L,0xEC332B00L,0xEC332B00L,0xEC332B00L,0xEC332B00L,0xEC332B00L,0xEC332B00L};
                int32_t l_150 = 1L;
                uint8_t *l_151 = (void*)0;
                uint8_t *l_152 = &g_54.f3;
                uint8_t *l_153 = &l_110[1].f1;
                uint32_t *l_154 = &g_155;
                uint32_t l_208 = 0UL;
                struct S1 *l_218 = &g_75[4];
                union U5 **l_231 = (void*)0;
                union U5 **l_232 = &l_230;
                int8_t *l_234 = (void*)0;
                int i;
                if (((g_156 = (safe_sub_func_uint32_t_u_u((++(*l_140)), ((p_65 , ((((l_144 != (void*)0) ^ ((*l_154) = (safe_rshift_func_int8_t_s_u(g_119, ((*l_153) &= ((p_67 | ((safe_rshift_func_int16_t_s_u((g_18.f0 | (l_149[2] | (l_150 |= ((*l_130) && (((p_65.f0 , 0UL) , (-1L)) > (*l_111)))))), g_75[1].f4)) == g_11)) && p_65.f1)))))) > g_18.f3) == g_18.f4)) <= (-8L))))) ^ (*l_130)))
                {
                    struct S1 l_160 = {0UL,110,0xAAB65A99L,65530UL,0x03F8E5C4BBE82923LL,0xDAD2L};
                    union U5 *l_183[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
                    union U5 **l_182 = &l_183[0][2];
                    int i, j;
                    l_157 = g_75[1];
                    for (p_65.f4 = 0; (p_65.f4 <= 20); p_65.f4 = safe_add_func_int64_t_s_s(p_65.f4, 1))
                    {
                        uint32_t *l_169 = &g_141[6][2];
                        int32_t l_180 = 0xBB935E29L;
                        (*l_127) = p_66;
                        l_160 = g_75[1];
                        (*l_111) = (((0x1E9D5C39C69A8B32LL & ((safe_div_func_int16_t_s_s((l_149[5] &= (safe_div_func_int8_t_s_s((*l_111), (safe_rshift_func_int8_t_s_u((g_167 == ((*p_66) , &g_168[2])), 1))))), (**l_127))) , 0L)) , l_169) != &g_87);
                        (*l_130) = ((*l_129) = (((l_170 , (safe_mod_func_uint64_t_u_u((func_28(&g_12, (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((((p_65.f5 && ((*l_96) = (l_180 |= ((g_177 = l_160.f4) <= (safe_sub_func_uint32_t_u_u((p_65.f5 , ((*g_22) != (((((5UL < ((*l_153) = ((g_141[6][2] > (*l_130)) != 0x8F648F5DB1FE12C4LL))) > p_65.f3) > p_65.f0) || p_67) ^ p_65.f5))), 4294967294UL)))))) | l_160.f4) <= p_65.f3) & 1UL) && (*l_111)), 0UL)), (*l_111))), &g_22) , l_160.f1), (*l_130)))) < g_181) | (-1L)));
                    }
                    (*l_182) = (void*)0;
                }
                else
                {
                    union U2 *l_194 = &l_110[7];
                    int32_t *l_204[5][4] = {{&g_205[4],&g_205[4],&g_205[4],&g_205[4]},{&g_205[4],&g_205[4],&g_205[4],&g_205[4]},{&g_205[4],&g_205[4],&g_205[4],&g_205[4]},{&g_205[4],&g_205[4],&g_205[4],&g_205[4]},{&g_205[4],&g_205[4],&g_205[4],&g_205[4]}};
                    int32_t l_209 = 0x5ED7D17CL;
                    int32_t l_212[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_212[i] = 1L;
                    (**l_127) = ((((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((*l_129), (+((*l_140) &= 8UL)))), 1)) >= (((safe_lshift_func_int8_t_s_s(0x04L, 2)) != (safe_rshift_func_uint16_t_u_u(g_18.f4, g_27))) || (l_157 , g_18.f5))) , (((*l_194) = l_193) , ((g_205[0] = ((safe_mod_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_203, 0xDCL)), 0xD6L)) != 0UL) != (*l_111)), 0)) , g_11), g_75[1].f2)) < 1L)) , p_65.f3))) == (**l_127));
                    for (l_193.f0 = (-21); (l_193.f0 < 22); l_193.f0 = safe_add_func_int64_t_s_s(l_193.f0, 9))
                    {
                        (*l_111) &= l_149[2];
                    }
                    for (p_67 = 0; (p_67 <= 7); p_67 += 1)
                    {
                        int32_t l_210 = 1L;
                        int32_t l_211 = (-3L);
                        int i;
                        if (l_208)
                            break;
                        l_214--;
                        if ((*p_66))
                            continue;
                        if (l_124)
                            goto lbl_217;
                    }
                }
                (*l_218) = g_75[1];
                (*l_129) = (safe_unary_minus_func_int8_t_s((((safe_add_func_int32_t_s_s(((*l_111) = (((*l_96) = p_65.f3) & g_3)), ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((l_150 ^= p_65.f5), 7)), ((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((((*l_232) = l_230) != (((((((**g_167) , func_14(l_233, (l_234 = &g_11), l_111)) == &g_22) , l_208) , g_205[7]) < p_65.f1) , g_235[5])), 0x8BL)) != l_237) || 0xF350L), p_65.f0)) > 5L))) | p_65.f2))) <= g_18.f2) , 0x9DL)));
            }
            g_240 = &g_9[4];
            if ((*p_66))
            {
                const struct S0 ***l_251[1][8][1] = {{{&l_248},{(void*)0},{&l_248},{(void*)0},{&l_248},{(void*)0},{&l_248},{(void*)0}}};
                int32_t l_256[2];
                int8_t l_267 = 1L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_256[i] = (-8L);
                if ((0x450BL & 0x6C04L))
                {
                    struct S1 l_244 = {0xECE8L,80,0x4F4D5590L,0x5AF7L,0UL,0xD27EL};
                    for (p_65.f4 = 3; (p_65.f4 <= 8); p_65.f4 += 1)
                    {
                        struct S1 *l_241 = (void*)0;
                        struct S1 *l_242 = (void*)0;
                        struct S1 *l_243[5][9] = {{&g_75[3],&g_75[3],&l_157,(void*)0,&l_157,&g_75[3],&g_75[3],&g_75[3],&l_157},{&l_157,(void*)0,(void*)0,&l_157,(void*)0,(void*)0,&l_157,(void*)0,(void*)0},{&g_75[3],&g_75[3],&l_157,(void*)0,&l_157,&g_75[3],&g_75[3],&g_75[3],&l_157},{&l_157,(void*)0,(void*)0,&l_157,(void*)0,(void*)0,&l_157,(void*)0,(void*)0},{&g_75[3],&g_75[3],&l_157,(void*)0,&l_157,&g_75[3],&g_75[3],&g_75[3],&l_157}};
                        int i, j;
                        l_244 = (((void*)0 == &g_235[(p_65.f4 + 1)]) , p_65);
                        if (g_205[p_65.f4])
                            continue;
                        (*l_130) = (*p_66);
                    }
                }
                else
                {
                    const struct S0 ***l_252 = (void*)0;
                    for (l_157.f5 = 0; (l_157.f5 > (-4)); l_157.f5 = safe_sub_func_uint64_t_u_u(l_157.f5, 6))
                    {
                        const struct S0 ****l_250[10] = {&l_247[3][0][6],&l_247[3][0][6],&l_247[0][0][5],&l_247[3][0][5],&l_247[0][0][5],&l_247[3][0][6],&l_247[3][0][6],&l_247[0][0][5],&l_247[3][0][5],&l_247[0][0][5]};
                        int i;
                        (*l_111) &= 7L;
                        l_252 = (l_251[0][1][0] = (g_155 , l_247[3][0][6]));
                    }
                }
                if (((~(safe_div_func_int8_t_s_s(((p_65.f2 >= ((0x1E524292L != 0xF7AED1B3L) <= l_256[1])) >= l_257), (g_269 &= (safe_mul_func_uint16_t_u_u((p_65.f0 & g_205[4]), (safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(l_256[1], (l_266 , l_267))), l_268)), (*l_130))))))))) == (*l_111)))
                {
                    uint64_t l_272[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_272[i] = 1UL;
                    for (l_157.f2 = 0; (l_157.f2 <= 13); l_157.f2 = safe_add_func_int64_t_s_s(l_157.f2, 1))
                    {
                        l_272[0]++;
                    }
                    if (l_275)
                        break;
                }
                else
                {
                    const int32_t *l_280 = &g_281;
                    const int32_t **l_279 = &l_280;
                    l_278 = (l_276 = &l_266);
                    (*l_127) = &l_213[1][0];
                    g_282 = ((*l_279) = &l_213[0][1]);
                    for (g_269 = 0; (g_269 >= 37); ++g_269)
                    {
                        l_111 = ((*l_127) = p_66);
                        if (g_12.f1)
                            goto lbl_217;
                    }
                }
                for (l_124 = 0; (l_124 >= 23); l_124 = safe_add_func_int32_t_s_s(l_124, 1))
                {
                    union U5 l_296 = {-5L};
                    struct S1 *l_303 = &g_75[1];
                    for (l_157.f3 = 0; (l_157.f3 > 50); l_157.f3 = safe_add_func_int16_t_s_s(l_157.f3, 1))
                    {
                        struct S1 *l_289 = (void*)0;
                        struct S1 *l_290[5] = {&g_75[4],&g_75[4],&g_75[4],&g_75[4],&g_75[4]};
                        int32_t l_295 = 5L;
                        int16_t *l_297 = &l_110[1].f0;
                        struct S1 **l_301 = (void*)0;
                        struct S1 **l_302[7] = {&l_289,(void*)0,(void*)0,&l_289,(void*)0,(void*)0,&l_289};
                        int i;
                        g_75[1] = g_75[4];
                        (*l_111) |= (((safe_add_func_int64_t_s_s((0x0BB08EA5L > l_295), (((l_296 , ((*l_297) = g_27)) , (safe_add_func_uint32_t_u_u(((l_303 = l_300) != &g_75[3]), 0xA1052F1DL))) <= p_67))) || 0L) <= l_256[1]);
                    }
                    if (l_296.f0)
                        break;
                }
            }
            else
            {
                (*l_248) = l_135;
                for (p_65.f0 = 1; (p_65.f0 <= 5); p_65.f0 += 1)
                {
                    return g_141[4][2];
                }
            }
        }
        --l_311[4];
        (*l_306) |= ((*l_111) || ((+4L) == ((g_333 &= ((safe_sub_func_uint64_t_u_u((((*l_317) |= g_9[2].f0) ^ l_318), ((safe_add_func_uint32_t_u_u((((*l_332) |= (((safe_rshift_func_int16_t_s_u(((*l_329) = ((g_269 == (((*l_324) |= (0UL < g_18.f4)) >= (*l_111))) , (safe_rshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s(g_277.f0, p_65.f0)) < 0xFBL), (*l_111))))), 13)) , (*l_111)) | l_330)) , g_27), (*l_304))) & (-1L)))) & 18446744073709551610UL)) == 255UL)));
    }
    (*l_334) = &l_135;
    if ((*l_111))
    {
        struct S1 l_344[8] = {{0UL,31,4L,65530UL,18446744073709551607UL,0x2D4AL},{0UL,31,4L,65530UL,18446744073709551607UL,0x2D4AL},{0UL,31,4L,65530UL,18446744073709551607UL,0x2D4AL},{0UL,31,4L,65530UL,18446744073709551607UL,0x2D4AL},{0UL,31,4L,65530UL,18446744073709551607UL,0x2D4AL},{0UL,31,4L,65530UL,18446744073709551607UL,0x2D4AL},{0UL,31,4L,65530UL,18446744073709551607UL,0x2D4AL},{0UL,31,4L,65530UL,18446744073709551607UL,0x2D4AL}};
        union U5 l_349[5][10] = {{{0x8DD6L},{0xAD10L},{-1L},{4L},{0xD94BL},{4L},{-1L},{0xAD10L},{0x8DD6L},{0x4910L}},{{0xE9C6L},{1L},{-1L},{0xD94BL},{0xAD10L},{0xAD10L},{0xD94BL},{-1L},{1L},{0xE9C6L}},{{1L},{4L},{0x8DD6L},{0xD94BL},{0x2D18L},{0xE9C6L},{0x2D18L},{0xD94BL},{0x8DD6L},{4L}},{{0x4910L},{-1L},{0xE9C6L},{4L},{2L},{-1L},{-1L},{2L},{1L},{0x8DD6L}},{{2L},{2L},{0x2D18L},{4L},{0xE9C6L},{-1L},{0x4910L},{-1L},{0xE9C6L},{4L}}};
        const int32_t **l_363 = &g_282;
        const int32_t ***l_362 = &l_363;
        int32_t *l_365 = &g_3;
        int32_t *l_366 = &l_107[0];
        int32_t *l_367 = &g_75[1].f2;
        int32_t *l_368[10][7] = {{&l_107[0],&g_75[1].f2,&l_107[0],&l_107[0],&g_3,&l_107[1],&g_3},{&l_107[0],(void*)0,(void*)0,&l_107[0],&g_75[1].f2,&l_344[7].f2,&g_3},{&g_3,&g_75[1].f2,(void*)0,&g_3,&g_3,&l_344[7].f2,&g_75[1].f2},{&l_107[0],&g_75[1].f2,&l_107[0],&l_107[0],&g_3,&l_107[1],&g_3},{&l_107[0],(void*)0,(void*)0,&l_107[0],&g_75[1].f2,&l_344[7].f2,&g_3},{&g_3,&g_75[1].f2,(void*)0,&g_3,&g_3,&l_344[7].f2,&g_75[1].f2},{&l_107[0],&g_75[1].f2,&l_107[0],&l_107[0],&g_3,&l_107[1],&g_3},{&l_107[0],(void*)0,(void*)0,&l_107[0],&g_75[1].f2,&l_344[7].f2,&g_3},{&g_3,&g_75[1].f2,(void*)0,&g_3,&g_3,&l_344[7].f2,&g_75[1].f2},{&l_107[0],&g_75[1].f2,&l_107[0],&l_107[0],&g_3,&l_107[1],&g_3}};
        int i, j;
        for (g_27 = 17; (g_27 > 17); g_27 = safe_add_func_uint16_t_u_u(g_27, 1))
        {
            int32_t l_345[6][8][5] = {{{(-1L),1L,0L,0xC13F79E0L,0x0C518717L},{0xDFB0D7E6L,1L,5L,0x0E5209E8L,0x469ACD80L},{0x384117DFL,0x7AA1FBE2L,0xC4B514A0L,0x469ACD80L,1L},{0xB69D791EL,0x6D807F1AL,0x0CCDED48L,0L,1L},{1L,0L,(-1L),0x315378EAL,0x469ACD80L},{0xB0B13288L,0x315378EAL,1L,(-1L),0x0C518717L},{0x315378EAL,1L,0L,0x865AB449L,4L},{1L,0xE157B59AL,0xC13F79E0L,(-6L),(-6L)}},{{(-8L),4L,(-8L),0xDFB0D7E6L,0L},{1L,0x0C518717L,0x7AA1FBE2L,7L,1L},{0x865AB449L,7L,(-6L),0L,(-1L)},{1L,1L,0x7AA1FBE2L,1L,0x7CC0644FL},{0xE157B59AL,1L,(-8L),0x9A029482L,1L},{1L,0x865AB449L,0xC13F79E0L,1L,1L},{8L,1L,0L,0xD498ADFBL,1L},{0x2CAEB7DDL,(-1L),1L,0L,(-6L)}},{{0x7CC0644FL,5L,(-1L),1L,0xD7C35F50L},{2L,1L,0x0CCDED48L,0x0DA60932L,7L},{2L,(-4L),0xC4B514A0L,0x3538599DL,7L},{0x7CC0644FL,8L,5L,0xD7C35F50L,0xBCF1DEF6L},{0x2CAEB7DDL,0xDFB0D7E6L,0L,1L,1L},{1L,0x0E5209E8L,1L,1L,0L},{0L,7L,7L,0L,1L},{0xD7C35F50L,0xC275890FL,4L,7L,0x2CAEB7DDL}},{{4L,0x0DA60932L,1L,0x384117DFL,0x0E5209E8L},{1L,(-1L),(-4L),7L,(-6L)},{8L,1L,7L,0L,1L},{0xE157B59AL,0x6D807F1AL,0L,1L,0L},{0xE67A4216L,(-6L),1L,1L,1L},{1L,(-6L),1L,0x3538599DL,0xC7448327L},{5L,0L,2L,1L,(-1L)},{(-1L),1L,0xD7C35F50L,1L,1L}},{{0xC4B514A0L,1L,4L,1L,0xE157B59AL},{(-4L),0L,(-1L),1L,(-8L)},{0L,(-6L),7L,0x865AB449L,0xC275890FL},{(-1L),(-6L),8L,0x2CAEB7DDL,0x469ACD80L},{7L,0x6D807F1AL,1L,0x6D807F1AL,7L},{1L,1L,0xD498ADFBL,7L,1L},{1L,(-1L),0x6D807F1AL,0xC275890FL,0x0DA60932L},{0L,0x0DA60932L,(-6L),1L,1L}},{{1L,0xC275890FL,0x469ACD80L,0L,7L},{1L,7L,0x0CCDED48L,1L,0x469ACD80L},{1L,0x0E5209E8L,0x865AB449L,1L,0xC275890FL},{(-1L),0L,0xE67A4216L,(-1L),(-8L)},{0x469ACD80L,1L,(-1L),1L,0xE157B59AL},{(-1L),1L,0L,1L,1L},{1L,0x2CAEB7DDL,0L,0xB0B13288L,(-1L)},{0x6D807F1AL,1L,(-1L),0xDFB0D7E6L,0xC7448327L}}};
            int32_t *l_348 = &g_205[4];
            int32_t **l_347 = &l_348;
            int16_t *l_357[5][6] = {{&g_75[1].f5,&g_75[1].f5,&l_349[1][4].f0,&g_333,(void*)0,&g_333},{(void*)0,&g_75[1].f5,(void*)0,&g_236.f0,&l_349[1][4].f0,&l_349[1][4].f0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_75[1].f5,&g_333},{&g_333,(void*)0,&l_349[1][4].f0,(void*)0,&g_333,&g_236.f0},{(void*)0,&g_333,&g_236.f0,&g_236.f0,&g_333,(void*)0}};
            int32_t *l_359 = &l_344[7].f2;
            int i, j, k;
            if ((*p_66))
                break;
            for (g_333 = 0; (g_333 <= 8); g_333++)
            {
                struct S1 l_342 = {6UL,109,1L,0UL,0x73F4ED036454BA2ALL,0x398DL};
                for (p_65.f0 = 22; (p_65.f0 <= 3); p_65.f0 = safe_sub_func_int8_t_s_s(p_65.f0, 5))
                {
                    struct S1 *l_343 = &g_75[2];
                    l_344[7] = ((*l_343) = l_342);
                }
                if (l_344[7].f4)
                    break;
            }
            (*l_359) = (4L >= ((((l_345[3][2][0] , ((*l_347) = (g_346 = (void*)0))) == (void*)0) ^ (l_349[1][4] , ((safe_unary_minus_func_int8_t_s((((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(8UL, ((((void*)0 == &g_87) != (((safe_mul_func_int16_t_s_s(((*l_111) |= (-3L)), 0xAF97L)) != g_9[2].f0) <= g_75[1].f3)) == 0xF3FFL))), l_358)) & p_67) > 0x9384L))) >= p_65.f4))) == (**g_167)));
        }
        for (g_155 = 13; (g_155 > 7); g_155--)
        {
            const int32_t ***l_364 = &l_363;
            l_364 = l_362;
        }
        --l_369[0];
    }
    else
    {
        return p_67;
    }
    return p_65.f5;
}







static union U3 func_68(union U3 * p_69, uint16_t p_70)
{
    int32_t **l_85 = &g_22;
    uint32_t *l_86[6][5] = {{&g_87,&g_87,(void*)0,&g_87,(void*)0},{(void*)0,(void*)0,&g_87,&g_87,&g_87},{&g_87,&g_87,(void*)0,&g_87,(void*)0},{(void*)0,(void*)0,&g_87,&g_87,&g_87},{&g_87,&g_87,(void*)0,&g_87,(void*)0},{&g_87,&g_87,&g_87,(void*)0,&g_87}};
    union U2 l_88[8][10] = {{{1L},{-1L},{4L},{-1L},{1L},{-2L},{-2L},{1L},{-1L},{4L}},{{0x7E60L},{0x7E60L},{4L},{1L},{9L},{1L},{4L},{0x7E60L},{0x7E60L},{4L}},{{-1L},{1L},{-2L},{-2L},{1L},{-1L},{4L},{-1L},{1L},{-2L}},{{0xC414L},{0x7E60L},{0xC414L},{-2L},{4L},{4L},{-2L},{0xC414L},{0x7E60L},{0xC414L}},{{0xC414L},{-1L},{0x7E60L},{1L},{0x7E60L},{-1L},{0xC414L},{0xC414L},{-1L},{0x7E60L}},{{-1L},{0xC414L},{0xC414L},{-1L},{0x7E60L},{1L},{0x7E60L},{-1L},{0xC414L},{0xC414L}},{{0x7E60L},{0xC414L},{-2L},{4L},{4L},{-2L},{0xC414L},{0x7E60L},{0xC414L},{-2L}},{{1L},{-1L},{4L},{-1L},{1L},{-2L},{-2L},{1L},{-1L},{4L}}};
    union U2 *l_89 = &g_12;
    int32_t *l_90 = (void*)0;
    int32_t *l_91 = &g_3;
    union U3 l_92 = {0};
    int i, j;
    (*l_91) |= ((((((((((*l_89) = ((safe_lshift_func_int8_t_s_u((g_75[1] , ((safe_rshift_func_uint16_t_u_s((((safe_add_func_uint64_t_u_u(((g_18.f2 | (g_18.f5 &= (~(safe_mod_func_uint64_t_u_u((0x48BA36EDL | (safe_rshift_func_int16_t_s_u(g_75[1].f4, 5))), (((l_85 != l_85) < p_70) | p_70)))))) || (g_18.f5 |= p_70)), (-9L))) && p_70) | 4UL), p_70)) && g_18.f0)), p_70)) , l_88[4][3])) , 0x6508L) <= g_75[1].f1) <= g_87) | g_75[1].f1) , g_18.f4) , 0x3649L) & (-1L)) || 5L);
    return l_92;
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
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_9[i].f1, "g_9[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
    transparent_crc(g_18.f3, "g_18.f3", print_hash_value);
    transparent_crc(g_18.f4, "g_18.f4", print_hash_value);
    transparent_crc(g_18.f5, "g_18.f5", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_75[i].f0, "g_75[i].f0", print_hash_value);
        transparent_crc(g_75[i].f1, "g_75[i].f1", print_hash_value);
        transparent_crc(g_75[i].f2, "g_75[i].f2", print_hash_value);
        transparent_crc(g_75[i].f3, "g_75[i].f3", print_hash_value);
        transparent_crc(g_75[i].f4, "g_75[i].f4", print_hash_value);
        transparent_crc(g_75[i].f5, "g_75[i].f5", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_141[i][j], "g_141[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_205[i], "g_205[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_236.f0, "g_236.f0", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_277.f0, "g_277.f0", print_hash_value);
    transparent_crc(g_277.f1, "g_277.f1", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_376[i][j][k].f0, "g_376[i][j][k].f0", print_hash_value);
                transparent_crc(g_376[i][j][k].f1, "g_376[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_531[i][j][k], "g_531[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_721, "g_721", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    transparent_crc(g_1039, "g_1039", print_hash_value);
    transparent_crc(g_1109.f0, "g_1109.f0", print_hash_value);
    transparent_crc(g_1109.f1, "g_1109.f1", print_hash_value);
    transparent_crc(g_1109.f2, "g_1109.f2", print_hash_value);
    transparent_crc(g_1109.f3, "g_1109.f3", print_hash_value);
    transparent_crc(g_1109.f4, "g_1109.f4", print_hash_value);
    transparent_crc(g_1109.f5, "g_1109.f5", print_hash_value);
    transparent_crc(g_1162, "g_1162", print_hash_value);
    transparent_crc(g_1208, "g_1208", print_hash_value);
    transparent_crc(g_1247, "g_1247", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1269[i], "g_1269[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
