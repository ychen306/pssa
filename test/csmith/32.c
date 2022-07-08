// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = C437940
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



static int32_t g_2[10][3][6] = {{{2L,0x8BBCA631L,8L,0x0647DC4BL,0x0647DC4BL,8L},{0x0647DC4BL,0x0647DC4BL,8L,0x8BBCA631L,2L,2L},{0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L,8L}},{{2L,0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L},{2L,0x8BBCA631L,8L,0x0647DC4BL,0x0647DC4BL,8L},{0x0647DC4BL,0x0647DC4BL,8L,0x8BBCA631L,2L,2L}},{{0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L,8L},{2L,0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L},{2L,0x8BBCA631L,8L,0x0647DC4BL,0x0647DC4BL,8L}},{{0x0647DC4BL,0x0647DC4BL,8L,0x8BBCA631L,2L,2L},{0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L,8L},{2L,0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L}},{{2L,0x8BBCA631L,8L,0x0647DC4BL,0x0647DC4BL,8L},{0x0647DC4BL,0x0647DC4BL,8L,0x8BBCA631L,2L,2L},{0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L,8L}},{{2L,0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L},{2L,0x8BBCA631L,8L,0x0647DC4BL,0x0647DC4BL,8L},{0x0647DC4BL,0x0647DC4BL,8L,0x8BBCA631L,2L,2L}},{{0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L,8L},{2L,0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L},{2L,0x8BBCA631L,8L,0x0647DC4BL,0x0647DC4BL,8L}},{{0x0647DC4BL,0x0647DC4BL,8L,0x8BBCA631L,2L,2L},{0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L,8L},{2L,0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L}},{{2L,0x8BBCA631L,8L,0x0647DC4BL,0x0647DC4BL,8L},{0x0647DC4BL,0x0647DC4BL,8L,0x8BBCA631L,2L,2L},{0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L,8L}},{{2L,0x0647DC4BL,0x8BBCA631L,0x8BBCA631L,0x0647DC4BL,2L},{2L,0x8BBCA631L,8L,0x0647DC4BL,0x0647DC4BL,8L},{0x0647DC4BL,0x0647DC4BL,8L,0x8BBCA631L,2L,2L}}};
static int32_t g_5 = 0x8D3A18E4L;
static uint16_t g_16 = 0x9E07L;
static uint16_t g_20[6] = {0x4CA7L,0x4CA7L,0x4CA7L,0x4CA7L,0x4CA7L,0x4CA7L};
static uint16_t *g_19[7][9] = {{(void*)0,&g_20[0],(void*)0,(void*)0,&g_20[0],(void*)0,(void*)0,&g_20[0],(void*)0},{&g_20[0],&g_20[4],&g_20[0],&g_20[0],&g_20[4],&g_20[0],&g_20[0],&g_20[4],&g_20[0]},{(void*)0,&g_20[0],(void*)0,(void*)0,&g_20[0],(void*)0,(void*)0,&g_20[0],(void*)0},{&g_20[0],&g_20[4],&g_20[0],&g_20[0],&g_20[4],&g_20[0],&g_20[0],&g_20[4],&g_20[0]},{(void*)0,&g_20[0],(void*)0,(void*)0,&g_20[0],(void*)0,(void*)0,&g_20[0],(void*)0},{&g_20[0],&g_20[4],&g_20[0],&g_20[0],&g_20[4],&g_20[0],&g_20[0],&g_20[0],&g_20[0]},{&g_20[0],(void*)0,&g_20[0],&g_20[0],(void*)0,&g_20[0],&g_20[0],(void*)0,&g_20[0]}};
static int64_t g_63 = (-7L);
static uint32_t g_64[10][4][6] = {{{0UL,18446744073709551610UL,0UL,0xCF58A412L,0x1EFC39FAL,18446744073709551615UL},{0x89A45823L,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551615UL},{0UL,0x86A8E7E6L,0UL,18446744073709551615UL,0x1EFC39FAL,0xCF58A412L},{0x89A45823L,0x86A8E7E6L,18446744073709551610UL,0xCF58A412L,0UL,0xCF58A412L}},{{0UL,18446744073709551610UL,0UL,0xCF58A412L,0x1EFC39FAL,18446744073709551615UL},{0x89A45823L,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551615UL},{0UL,0x86A8E7E6L,0UL,18446744073709551615UL,0x1EFC39FAL,0xCF58A412L},{0x89A45823L,0x86A8E7E6L,18446744073709551610UL,0xCF58A412L,0UL,0xCF58A412L}},{{0UL,18446744073709551610UL,0UL,0xCF58A412L,0x1EFC39FAL,18446744073709551615UL},{0x89A45823L,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551615UL},{0UL,0x86A8E7E6L,0UL,18446744073709551615UL,0x1EFC39FAL,0xCF58A412L},{0x89A45823L,0x86A8E7E6L,18446744073709551610UL,0xCF58A412L,0UL,0xCF58A412L}},{{0UL,18446744073709551610UL,0UL,0xCF58A412L,0x1EFC39FAL,18446744073709551615UL},{0x89A45823L,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551615UL},{0UL,0x86A8E7E6L,0UL,18446744073709551615UL,0x1EFC39FAL,0xCF58A412L},{0x89A45823L,0x86A8E7E6L,18446744073709551610UL,0xCF58A412L,0UL,0xCF58A412L}},{{0UL,18446744073709551610UL,0UL,0xCF58A412L,0x1EFC39FAL,18446744073709551615UL},{0x89A45823L,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551615UL},{0UL,0x86A8E7E6L,0UL,18446744073709551615UL,0x1EFC39FAL,0xCF58A412L},{0x89A45823L,0x86A8E7E6L,18446744073709551610UL,0xCF58A412L,0UL,0xCF58A412L}},{{0UL,18446744073709551610UL,0UL,0xCF58A412L,0x1EFC39FAL,18446744073709551615UL},{0x89A45823L,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551615UL},{0UL,0x86A8E7E6L,0UL,18446744073709551615UL,0x1EFC39FAL,0xCF58A412L},{0x89A45823L,0x86A8E7E6L,18446744073709551610UL,0xCF58A412L,0UL,0xCF58A412L}},{{0UL,18446744073709551610UL,0UL,0xCF58A412L,0x1EFC39FAL,18446744073709551615UL},{0x89A45823L,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,0UL,18446744073709551615UL},{0UL,0x86A8E7E6L,0UL,18446744073709551615UL,0x1EFC39FAL,0xCF58A412L},{0x89A45823L,0x86A8E7E6L,18446744073709551610UL,0xCF58A412L,0UL,0xCF58A412L}},{{0UL,18446744073709551610UL,0UL,0xCF58A412L,0x1EFC39FAL,18446744073709551615UL},{0x89A45823L,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,0x89A45823L,0x5435D7D2L},{0xE942FAFEL,0xCF58A412L,0xE942FAFEL,0x5435D7D2L,0UL,18446744073709551615UL},{0x9C50ED6CL,0xCF58A412L,0xAF8D98C6L,18446744073709551615UL,0x89A45823L,18446744073709551615UL}},{{0xE942FAFEL,18446744073709551615UL,0xE942FAFEL,18446744073709551615UL,0UL,0x5435D7D2L},{0x9C50ED6CL,18446744073709551615UL,0xAF8D98C6L,0x5435D7D2L,0x89A45823L,0x5435D7D2L},{0xE942FAFEL,0xCF58A412L,0xE942FAFEL,0x5435D7D2L,0UL,18446744073709551615UL},{0x9C50ED6CL,0xCF58A412L,0xAF8D98C6L,18446744073709551615UL,0x89A45823L,18446744073709551615UL}},{{0xE942FAFEL,18446744073709551615UL,0xE942FAFEL,18446744073709551615UL,0UL,0x5435D7D2L},{0x9C50ED6CL,18446744073709551615UL,0xAF8D98C6L,0x5435D7D2L,0x89A45823L,0x5435D7D2L},{0xE942FAFEL,0xCF58A412L,0xE942FAFEL,0x5435D7D2L,0UL,18446744073709551615UL},{0x9C50ED6CL,0xCF58A412L,0xAF8D98C6L,18446744073709551615UL,0x89A45823L,18446744073709551615UL}}};
static int32_t g_68 = 0x942A26B1L;
static int32_t g_84 = 0xC5CA36B4L;
static int32_t *g_83 = &g_84;
static int32_t g_85 = 0x4A51E29AL;
static uint8_t g_129 = 0xE8L;
static int8_t g_171 = 1L;
static int8_t g_173 = 0L;
static int32_t *g_210 = &g_68;
static int8_t g_229 = 7L;
static uint8_t g_231[7][9][4] = {{{0UL,1UL,0x2DL,0UL},{0xD2L,0xC7L,0UL,0xC7L},{0x26L,1UL,0xBEL,255UL},{0x03L,255UL,0xD2L,0UL},{1UL,0UL,0UL,0x03L},{1UL,0x1EL,0xD2L,0xD2L},{0x03L,0x03L,0xBEL,0xA0L},{0x26L,0xBEL,0UL,1UL},{0xD2L,255UL,0x2DL,0UL}},{{0UL,255UL,0x03L,1UL},{255UL,0xBEL,255UL,0xA0L},{0x1EL,0x03L,255UL,0xD2L},{255UL,0x1EL,0xA0L,0x03L},{1UL,0UL,0xA0L,0UL},{255UL,255UL,255UL,255UL},{0x1EL,1UL,255UL,0xC7L},{255UL,0xC7L,0x03L,0UL},{0UL,1UL,0x2DL,0UL}},{{0xD2L,0xC7L,0UL,0xC7L},{0x26L,1UL,0xBEL,255UL},{0x03L,255UL,0xD2L,0UL},{1UL,0UL,0UL,0x03L},{1UL,0x1EL,0xD2L,0xD2L},{0x03L,0x03L,0xBEL,0xA0L},{0x26L,0xBEL,0UL,1UL},{0xD2L,255UL,0x2DL,0UL},{0UL,255UL,0x03L,1UL}},{{255UL,0xBEL,255UL,0xA0L},{0x1EL,0x03L,255UL,0xD2L},{255UL,0x1EL,0xA0L,0x03L},{1UL,0UL,0xA0L,0UL},{255UL,255UL,255UL,255UL},{0x1EL,255UL,255UL,0x03L},{255UL,0x03L,0UL,1UL},{1UL,0xC7L,0UL,1UL},{255UL,0x03L,1UL,0x03L}},{{0xA0L,255UL,0UL,0x26L},{0UL,0x2DL,255UL,0xD2L},{0xC7L,1UL,0xD2L,0UL},{0xC7L,255UL,255UL,255UL},{0UL,0UL,0UL,0x1EL},{0xA0L,0UL,1UL,255UL},{255UL,255UL,0UL,1UL},{1UL,255UL,0UL,255UL},{255UL,0UL,255UL,0x1EL}},{{255UL,0UL,0x2DL,255UL},{0x26L,255UL,0x1EL,0UL},{255UL,1UL,0x1EL,0xD2L},{0x26L,0x2DL,0x2DL,0x26L},{255UL,255UL,255UL,0x03L},{255UL,0x03L,0UL,1UL},{1UL,0xC7L,0UL,1UL},{255UL,0x03L,1UL,0x03L},{0xA0L,255UL,0UL,0x26L}},{{0UL,0x2DL,255UL,0xD2L},{0xC7L,1UL,0xD2L,0UL},{0xC7L,255UL,255UL,255UL},{0UL,0UL,0UL,0x1EL},{0xA0L,0UL,1UL,255UL},{255UL,255UL,0UL,1UL},{1UL,255UL,0UL,255UL},{255UL,0UL,255UL,0x1EL},{255UL,0UL,0x2DL,255UL}}};
static int32_t g_241 = 0xCEA1EC8DL;
static int16_t g_243 = (-8L);
static int64_t g_245 = 0x3AA511DFB01F2DFDLL;
static int16_t g_248 = (-4L);
static uint32_t g_249 = 0xF5A85F17L;
static int8_t g_288 = (-1L);
static int32_t g_289 = 0x22781395L;
static int32_t g_290 = 0xBA8A70E6L;
static uint32_t g_294 = 3UL;
static int32_t *g_301 = &g_289;
static int8_t g_360 = 1L;
static int32_t g_361 = 0x6BEC8285L;
static int32_t g_362[3][10] = {{0x98A0DD30L,0xAC4B7426L,0x98A0DD30L,(-1L),0x4D46530DL,(-1L),0x98A0DD30L,0xAC4B7426L,0x98A0DD30L,(-1L)},{0x4D46530DL,0xAC4B7426L,1L,0xAC4B7426L,0x4D46530DL,0x8E936A67L,0x4D46530DL,0xAC4B7426L,1L,0xAC4B7426L},{0x4D46530DL,(-1L),0x98A0DD30L,0xAC4B7426L,0x98A0DD30L,(-1L),0x4D46530DL,(-1L),0x98A0DD30L,0xAC4B7426L}};
static int64_t g_371 = (-8L);
static uint8_t *g_418 = &g_129;
static uint8_t **g_417 = &g_418;
static uint16_t g_428 = 0x8AC4L;
static int32_t *g_441 = &g_68;
static int32_t ** const g_440 = &g_441;
static int32_t ** const *g_439 = &g_440;
static int8_t g_475[2] = {0L,0L};
static int32_t *g_501 = &g_85;
static uint64_t g_504 = 0UL;
static int8_t g_511 = 5L;
static int32_t g_512 = (-1L);
static uint64_t g_514 = 1UL;
static int8_t **g_555 = (void*)0;
static int64_t *g_667 = &g_245;
static int64_t **g_666 = &g_667;
static uint8_t *g_710[6] = {&g_129,&g_129,&g_129,&g_129,&g_129,&g_129};
static uint16_t *g_917 = &g_16;
static uint64_t *g_942 = &g_504;
static uint64_t ** const g_941 = &g_942;
static int32_t *g_1008 = &g_241;
static int32_t **g_1171 = &g_83;
static int32_t *** const g_1170 = &g_1171;
static int8_t *g_1206 = &g_171;
static int16_t g_1253 = 1L;
static int16_t g_1335[2][2] = {{0x93C2L,0x93C2L},{0x93C2L,0x93C2L}};
static uint16_t g_1367[10][1] = {{6UL},{1UL},{1UL},{6UL},{1UL},{1UL},{6UL},{1UL},{1UL},{6UL}};
static const uint8_t g_1454 = 0xCBL;
static const uint8_t g_1456[10] = {7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL};
static const uint8_t *g_1455 = &g_1456[0];
static int32_t g_1458 = 0xB29EB1C4L;
static uint64_t *****g_1475 = (void*)0;
static uint16_t **g_1561 = &g_917;
static uint16_t ***g_1560 = &g_1561;
static uint16_t ****g_1559 = &g_1560;
static int16_t g_1678 = 0x0623L;
static uint64_t **g_1710 = (void*)0;
static uint64_t ***g_1709[10] = {&g_1710,&g_1710,&g_1710,&g_1710,&g_1710,&g_1710,&g_1710,&g_1710,&g_1710,&g_1710};
static int32_t ***g_1763 = &g_1171;
static uint8_t ***g_1795 = &g_417;
static uint8_t ****g_1794 = &g_1795;
static uint32_t g_1911 = 0UL;
static int64_t ***g_1948[5] = {&g_666,&g_666,&g_666,&g_666,&g_666};
static int64_t ****g_1947 = &g_1948[2];
static int8_t *****g_2046 = (void*)0;
static int16_t * const g_2081 = (void*)0;
static int16_t * const *g_2080 = &g_2081;
static int16_t *g_2084[3][10][8] = {{{&g_1335[0][0],(void*)0,&g_1253,(void*)0,&g_1678,(void*)0,(void*)0,&g_1253},{&g_1335[0][0],&g_1335[1][1],&g_1253,(void*)0,&g_1335[0][0],&g_1335[0][0],&g_248,&g_248},{(void*)0,&g_1335[1][1],&g_243,&g_243,&g_1335[1][1],(void*)0,&g_1253,(void*)0},{&g_248,(void*)0,&g_243,&g_248,&g_1678,(void*)0,&g_248,&g_1253},{&g_1335[1][1],&g_1335[0][0],&g_1253,&g_248,&g_248,&g_1335[0][0],(void*)0,(void*)0},{(void*)0,&g_248,&g_1253,&g_243,&g_248,&g_1678,&g_1253,&g_248},{&g_1335[1][1],(void*)0,&g_1253,(void*)0,&g_1678,&g_1678,(void*)0,&g_1253},{&g_248,&g_248,&g_1253,(void*)0,&g_1335[1][1],&g_1335[0][0],(void*)0,(void*)0},{(void*)0,&g_1335[0][0],&g_1253,&g_243,&g_1335[0][0],(void*)0,&g_1253,(void*)0},{&g_1335[0][0],(void*)0,&g_1253,(void*)0,&g_1678,(void*)0,(void*)0,&g_1253}},{{&g_1335[0][0],&g_1335[1][1],&g_1253,(void*)0,&g_1335[0][0],&g_1335[0][0],&g_248,&g_248},{(void*)0,&g_1335[1][1],&g_243,&g_243,&g_1335[1][1],(void*)0,&g_1253,(void*)0},{&g_248,(void*)0,&g_243,&g_248,&g_1678,(void*)0,&g_248,&g_1253},{&g_1335[1][1],&g_1335[0][0],&g_1253,&g_248,&g_248,&g_1335[0][0],(void*)0,(void*)0},{(void*)0,&g_248,&g_1253,&g_243,&g_248,&g_1678,&g_1253,&g_248},{&g_1335[1][1],(void*)0,&g_1253,(void*)0,&g_1678,&g_1678,(void*)0,&g_1253},{&g_248,&g_248,&g_1253,(void*)0,&g_1335[1][1],&g_1335[0][0],(void*)0,(void*)0},{(void*)0,&g_1335[0][0],&g_1253,&g_243,&g_1335[0][0],(void*)0,&g_1253,(void*)0},{&g_1335[0][0],(void*)0,&g_1253,(void*)0,&g_1678,(void*)0,(void*)0,&g_1253},{&g_1335[0][0],&g_1335[1][1],&g_1253,(void*)0,&g_1335[0][0],&g_1335[0][0],&g_248,&g_248}},{{(void*)0,&g_1335[1][1],&g_243,&g_243,&g_1335[1][1],(void*)0,&g_1253,(void*)0},{&g_248,(void*)0,&g_243,&g_248,&g_1678,(void*)0,&g_248,&g_1253},{&g_1335[1][1],&g_1335[0][0],&g_1253,&g_248,&g_248,&g_1335[0][0],&g_1253,&g_243},{&g_248,(void*)0,&g_1253,(void*)0,(void*)0,(void*)0,&g_1253,&g_1253},{&g_1678,&g_1335[0][0],&g_1335[0][1],&g_243,(void*)0,(void*)0,&g_243,&g_1335[0][1]},{(void*)0,(void*)0,&g_248,&g_1253,&g_1678,&g_248,&g_243,&g_1253},{&g_248,(void*)0,&g_1335[0][1],(void*)0,(void*)0,&g_1335[0][0],&g_1253,&g_1253},{(void*)0,&g_1335[0][0],&g_1253,&g_1253,(void*)0,&g_248,&g_1253,&g_1335[0][1]},{(void*)0,&g_1678,&g_248,&g_243,(void*)0,&g_248,&g_1253,&g_1253},{&g_248,&g_1678,(void*)0,(void*)0,&g_1678,&g_248,&g_1253,&g_243}}};
static int8_t g_2088 = (-1L);
static int64_t g_2121[6][3][6] = {{{(-7L),0xE38EC39DFA183DBBLL,(-9L),(-9L),0xE38EC39DFA183DBBLL,(-7L)},{(-7L),(-9L),0x47EDCB6C00B7ABDELL,0xE38EC39DFA183DBBLL,0xE38EC39DFA183DBBLL,0x47EDCB6C00B7ABDELL},{0xE38EC39DFA183DBBLL,0xE38EC39DFA183DBBLL,0x47EDCB6C00B7ABDELL,(-9L),(-7L),(-7L)}},{{0xE38EC39DFA183DBBLL,(-9L),(-9L),0xE38EC39DFA183DBBLL,(-7L),0x47EDCB6C00B7ABDELL},{(-7L),0xE38EC39DFA183DBBLL,(-9L),(-9L),0xE38EC39DFA183DBBLL,(-7L)},{(-7L),(-9L),0x47EDCB6C00B7ABDELL,0xE38EC39DFA183DBBLL,0xE38EC39DFA183DBBLL,0x47EDCB6C00B7ABDELL}},{{0xE38EC39DFA183DBBLL,0xE38EC39DFA183DBBLL,0x47EDCB6C00B7ABDELL,(-9L),(-7L),(-7L)},{0xE38EC39DFA183DBBLL,(-9L),(-9L),0xE38EC39DFA183DBBLL,(-7L),0x47EDCB6C00B7ABDELL},{(-7L),0xE38EC39DFA183DBBLL,(-9L),(-9L),0xE38EC39DFA183DBBLL,(-7L)}},{{(-7L),(-9L),0x47EDCB6C00B7ABDELL,0xE38EC39DFA183DBBLL,0xE38EC39DFA183DBBLL,0x47EDCB6C00B7ABDELL},{0xE38EC39DFA183DBBLL,0xE38EC39DFA183DBBLL,0x47EDCB6C00B7ABDELL,(-9L),(-7L),(-7L)},{0xE38EC39DFA183DBBLL,(-9L),(-9L),0xE38EC39DFA183DBBLL,(-7L),0x47EDCB6C00B7ABDELL}},{{(-7L),0xE38EC39DFA183DBBLL,(-9L),(-9L),0xE38EC39DFA183DBBLL,(-7L)},{(-7L),(-9L),0x47EDCB6C00B7ABDELL,0xE38EC39DFA183DBBLL,0xE38EC39DFA183DBBLL,0x47EDCB6C00B7ABDELL},{0xE38EC39DFA183DBBLL,0xE38EC39DFA183DBBLL,0x47EDCB6C00B7ABDELL,(-9L),(-7L),(-7L)}},{{0xE38EC39DFA183DBBLL,(-9L),(-9L),0xE38EC39DFA183DBBLL,(-7L),0x47EDCB6C00B7ABDELL},{(-7L),0xE38EC39DFA183DBBLL,(-9L),(-9L),0xE38EC39DFA183DBBLL,(-7L)},{(-7L),(-9L),0x47EDCB6C00B7ABDELL,0xE38EC39DFA183DBBLL,0xE38EC39DFA183DBBLL,0x47EDCB6C00B7ABDELL}}};



static int8_t func_1(void);
static int32_t * func_23(int32_t * p_24, int16_t p_25, uint32_t p_26, uint32_t p_27);
static int32_t * func_28(uint16_t * p_29, uint64_t p_30);
static uint64_t func_31(uint16_t * p_32, int16_t p_33, const int32_t * p_34, int32_t p_35, int32_t p_36);
static uint16_t * func_37(int32_t p_38, const uint16_t p_39, uint16_t * const p_40);
static int64_t func_44(uint64_t p_45);
static uint64_t func_46(uint32_t p_47, uint16_t * p_48, uint16_t * p_49, int32_t * p_50, int32_t * const p_51);
static const uint32_t func_52(int32_t p_53);
static int32_t func_58(int64_t p_59, int32_t p_60, uint32_t p_61);
static int32_t * func_70(uint16_t p_71, const uint16_t * p_72, uint16_t * p_73, uint8_t p_74, int32_t * p_75);
# 118 "<stdin>"
static int8_t func_1(void)
{
    int32_t l_8 = 5L;
    int32_t l_69 = (-1L);
    int8_t l_1896 = (-1L);
    int8_t *l_1912[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t ***l_1916 = &g_1561;
    uint32_t *l_1921 = &g_1911;
    int64_t *l_1926[4][10] = {{&g_371,&g_63,&g_371,&g_371,&g_371,&g_371,&g_63,&g_371,&g_371,&g_371},{&g_371,&g_245,(void*)0,&g_371,(void*)0,&g_245,&g_245,&g_371,&g_371,&g_245},{&g_371,(void*)0,&g_63,&g_63,(void*)0,&g_371,&g_371,(void*)0,&g_371,&g_371},{&g_245,(void*)0,&g_371,(void*)0,&g_245,&g_371,&g_245,&g_245,&g_371,&g_245}};
    int32_t l_1927 = 0x04AC3704L;
    uint32_t l_1937[3];
    int32_t l_1985 = 0L;
    int32_t l_1987 = (-2L);
    int32_t l_1992 = 0x7F3B81DFL;
    int32_t l_1993 = (-4L);
    uint16_t l_1994[5][3];
    int32_t l_2032 = 0x4053A67DL;
    int8_t l_2034 = 8L;
    uint16_t l_2076 = 65532UL;
    int32_t *l_2078 = &l_8;
    int16_t *l_2085 = &g_1335[0][0];
    int64_t l_2115[5];
    int32_t l_2120 = 0L;
    uint64_t l_2168 = 0x28B231296ADA2A12LL;
    const uint32_t l_2169 = 1UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1937[i] = 0x58235131L;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            l_1994[i][j] = 0x0268L;
    }
    for (i = 0; i < 5; i++)
        l_2115[i] = 1L;
    for (g_2[8][0][3] = 0; (g_2[8][0][3] <= (-24)); g_2[8][0][3]--)
    {
        int32_t *l_9[3];
        uint64_t l_10 = 0x3C67EE39F3FAA32FLL;
        int i;
        for (i = 0; i < 3; i++)
            l_9[i] = &g_5;
        for (g_5 = 0; (g_5 < 10); g_5 = safe_add_func_uint64_t_u_u(g_5, 6))
        {
            if (l_8)
                break;
        }
        l_10 = (-1L);
    }
    for (g_5 = (-26); (g_5 < (-25)); g_5++)
    {
        uint16_t *l_15 = &g_16;
        int32_t *l_21 = (void*)0;
        int32_t l_22 = 0x8AAE07EAL;
        l_22 = (safe_mul_func_uint16_t_u_u((--(*l_15)), (g_19[2][6] != (void*)0)));
        for (g_16 = 1; (g_16 <= 5); g_16 += 1)
        {
            const uint8_t l_41 = 0xFAL;
            const int32_t *l_1333 = &g_289;
            uint64_t l_1334[3];
            uint8_t l_1897[4][1];
            int i, j;
            for (i = 0; i < 3; i++)
                l_1334[i] = 0x5EB2F287A2EFDAC4LL;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1897[i][j] = 0x3CL;
            }
            for (l_8 = 1; (l_8 <= 5); l_8 += 1)
            {
                int64_t *l_62 = &g_63;
                int32_t *l_67[10][1] = {{(void*)0},{(void*)0},{(void*)0},{&l_8},{&l_8},{(void*)0},{(void*)0},{(void*)0},{&l_8},{&l_8}};
                int32_t l_1910 = 0x94D8C31EL;
                int i, j;
                (*g_1171) = func_23(func_28(&g_20[0], func_31(func_37(g_2[8][0][3], l_41, ((safe_sub_func_int64_t_s_s(func_44(func_46((g_64[2][1][5] = (func_52((safe_add_func_uint8_t_u_u(8UL, ((safe_add_func_int32_t_s_s(func_58(((*l_62) = g_20[0]), (l_69 = (((g_64[2][1][5] = g_2[7][2][1]) || l_41) , (safe_mul_func_uint8_t_u_u(g_20[0], 0xCAL)))), g_20[0]), 0x55C7EABCL)) , 0x1BL)))) | 7UL)), &g_428, &g_16, &g_289, &l_22)), (-1L))) , (void*)0)), g_1253, l_1333, l_1334[2], g_1335[0][1])), l_1896, l_1897[3][0], g_475[1]);
                return l_1910;
            }
            return g_1911;
        }
    }
    if ((((l_69 = ((*g_1206) = l_8)) <= (+(safe_rshift_func_uint8_t_u_u(l_8, (((*g_1559) = l_1916) == &g_1561))))) > (safe_div_func_uint16_t_u_u((((**g_666) ^ (**g_666)) ^ (((safe_div_func_int32_t_s_s(0L, (++(*l_1921)))) | l_8) , (l_1927 = (((g_371 = (safe_add_func_int32_t_s_s(((((g_85 , (-1L)) | g_20[0]) == g_288) , l_1896), (*g_1008)))) > (**g_941)) || 255UL)))), l_1896))))
    {
        uint64_t l_1928 = 0x4C005E6F0E56A624LL;
        int64_t l_1946 = 0xD516B4035C387C29LL;
        int16_t l_1957 = 0xB096L;
        const uint8_t l_1958 = 0x1AL;
        int32_t l_1975 = (-4L);
        int32_t l_1977 = (-1L);
        int32_t l_1982 = 0x9C4BD57FL;
        int32_t l_1984 = 0xF4B21381L;
        int32_t l_1988[9][1] = {{2L},{0xF8E5D250L},{2L},{0xF8E5D250L},{2L},{0xF8E5D250L},{2L},{0xF8E5D250L},{2L}};
        uint64_t l_2006 = 0x6325EC54F10ADA86LL;
        int32_t ****l_2030 = &g_1763;
        int32_t l_2042 = 0xB333D64AL;
        int i, j;
lbl_1949:
        (**g_1170) = func_23((*g_1171), l_1928, g_475[1], g_64[2][1][5]);
        (*g_501) = (((l_1928 , (safe_mod_func_int16_t_s_s((((((*g_667) , (safe_mul_func_uint8_t_u_u((l_1928 <= ((*g_301) = ((--(*g_942)) | (safe_rshift_func_uint8_t_u_u(((l_1928 | (l_1937[0] && (((*g_1008) = 1L) , (safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((l_1928 < l_1937[0]) , 0xAD09628219323B9BLL), l_1928)), l_8))))) | l_1928), 0))))), 9L))) | 0L) < l_1927) <= l_1937[2]), 0xCF8BL))) , &g_1560) != &g_1560);
        for (g_173 = 0; (g_173 != (-10)); --g_173)
        {
            const int8_t *l_1953[10] = {&g_475[0],(void*)0,&g_475[0],&g_475[0],(void*)0,&g_475[0],&g_475[0],(void*)0,&g_475[0],&g_475[0]};
            const int8_t **l_1954 = &l_1953[1];
            int8_t **l_1955 = &g_1206;
            int16_t *l_1956 = &g_1335[0][1];
            int32_t l_1961 = (-1L);
            int32_t l_1964 = 0x02571845L;
            int32_t l_1976 = 0x76B1A422L;
            int32_t l_1978[6] = {0x32C7929DL,0x32C7929DL,0x019F1C9BL,0x32C7929DL,0x32C7929DL,0x019F1C9BL};
            int8_t l_1981[10] = {0xE3L,0xE3L,0xB9L,0xCCL,0xB9L,0xE3L,0xE3L,0xB9L,0xCCL,0xB9L};
            const int32_t *l_1997 = (void*)0;
            int32_t ****l_2029 = &g_1763;
            int i;
            (*g_83) |= (safe_lshift_func_uint16_t_u_u(((l_1946 & 0xDDL) < (((void*)0 == g_1947) , ((**g_941) = (**g_941)))), 11));
            if (g_63)
                goto lbl_1949;
            (***g_1763) = (((*g_667) = (+((*l_1921) = 4294967293UL))) | 0x838A6249A159580CLL);
            if ((((safe_div_func_int16_t_s_s(((*l_1956) = ((((*l_1954) = l_1953[5]) == ((*l_1955) = &g_511)) , l_1946)), 0xE8FCL)) & (l_1957 , ((l_1961 = (8UL <= (l_1958 | ((0xFAE27728L ^ (g_249 = ((*l_1921)--))) >= 1UL)))) , (****g_1947)))) & l_1928))
            {
                uint64_t *l_1963[6] = {&g_514,&g_514,&g_514,&g_514,&g_514,&g_514};
                int32_t l_1970 = (-8L);
                int32_t l_1973[1][7][5] = {{{1L,0xEBCB3877L,1L,0xEBCB3877L,1L},{0L,0L,0L,0L,0L},{1L,0xEBCB3877L,1L,0xEBCB3877L,1L},{0L,0L,0L,0L,0L},{1L,0xEBCB3877L,1L,0xEBCB3877L,1L},{0L,0L,0L,0L,0L},{1L,0xEBCB3877L,1L,0xEBCB3877L,1L}}};
                int64_t l_1983 = 0xEBBDB4219CAE9C25LL;
                int i, j, k;
                (*g_501) = (*g_83);
                (*g_83) &= (-10L);
                for (l_1961 = 0; (l_1961 >= 0); l_1961 -= 1)
                {
                    uint64_t *l_1962 = &g_514;
                    int32_t l_1974 = 0x35DABA77L;
                    int32_t l_1979 = (-6L);
                    int32_t l_1980 = 0L;
                    int32_t l_1986 = 0L;
                    int8_t l_1989 = 0L;
                    int32_t l_1990 = 0x562979C3L;
                    int32_t l_1991 = (-8L);
                    int i;
                    if ((((*g_941) = l_1962) == l_1963[2]))
                    {
                        int32_t *l_1965 = &l_1927;
                        int32_t *l_1966 = &l_69;
                        int32_t *l_1967 = &g_361;
                        int32_t *l_1968 = &l_1927;
                        int32_t *l_1969 = &l_69;
                        int32_t *l_1971 = (void*)0;
                        int32_t *l_1972[7][5] = {{&g_5,&g_362[1][2],&g_290,(void*)0,(void*)0},{(void*)0,&g_290,(void*)0,&g_85,&l_1927},{&g_241,&g_362[1][2],&g_362[1][2],&g_241,&g_84},{&l_1927,&g_5,&g_362[1][2],&g_290,(void*)0},{&g_290,&l_1970,(void*)0,(void*)0,&g_362[1][2]},{&g_290,&l_1927,&g_290,&g_290,&l_1927},{(void*)0,&l_69,&g_241,&g_241,&l_1927}};
                        int i, j;
                        l_1994[1][2]++;
                        if (g_362[(l_1961 + 2)][l_1961])
                            continue;
                    }
                    else
                    {
                        (**g_1170) = &l_1982;
                    }
                    if (g_20[(l_1961 + 1)])
                    {
                        (**g_1170) = &l_1975;
                    }
                    else
                    {
                        const int32_t **l_1998 = &l_1997;
                        int32_t *l_1999 = (void*)0;
                        int32_t *l_2000 = &l_1973[0][2][4];
                        int32_t *l_2001 = &g_362[1][2];
                        int32_t *l_2002 = &g_5;
                        int32_t *l_2003 = &l_1973[0][2][1];
                        int32_t l_2004[4] = {2L,2L,2L,2L};
                        int32_t *l_2005[1][10] = {{(void*)0,(void*)0,&g_5,&l_1978[1],&g_5,(void*)0,(void*)0,&g_5,&l_1978[1],&g_5}};
                        int i, j;
                        (*l_1998) = l_1997;
                        --l_2006;
                        (*g_83) |= (*l_2000);
                    }
                }
            }
            else
            {
                uint8_t *l_2021[8][2] = {{&g_231[4][4][0],(void*)0},{&g_231[4][4][0],&g_231[4][4][0]},{(void*)0,&g_231[4][4][0]},{&g_231[4][4][0],(void*)0},{&g_231[4][4][0],&g_231[4][4][0]},{(void*)0,&g_231[4][4][0]},{&g_231[4][4][0],(void*)0},{&g_231[4][4][0],&g_231[4][4][0]}};
                int32_t l_2022 = 0xC881DC7DL;
                int32_t l_2031 = 0x85FFDA34L;
                int32_t l_2033 = 0x111D3474L;
                int32_t *l_2035 = &g_289;
                int32_t *l_2036 = &l_1927;
                int32_t *l_2037 = &l_1961;
                int32_t *l_2038 = &l_1988[8][0];
                int32_t *l_2039 = &g_2[8][0][3];
                int32_t *l_2040 = &g_362[1][8];
                int32_t *l_2041[7][8] = {{&l_2032,(void*)0,(void*)0,&l_2032,&l_1987,&g_362[2][5],&l_1987,&l_2032},{(void*)0,&l_1987,(void*)0,&l_2033,&l_1961,&l_1961,&l_2033,(void*)0},{&g_362[0][7],&g_362[0][7],&l_1987,&l_2033,&l_2032,&l_2033,&l_1987,&g_362[0][7]},{&g_362[0][7],&g_362[2][5],&l_1961,&l_1987,&l_1987,&l_1961,&g_362[2][5],&g_362[0][7]},{&g_362[2][5],(void*)0,&g_362[0][7],&l_2033,&g_362[0][7],(void*)0,&g_362[2][5],&g_362[2][5]},{(void*)0,&l_2033,&l_1961,&l_1961,&l_2033,(void*)0,&l_1987,(void*)0},{&l_2033,(void*)0,&l_1987,(void*)0,&l_2033,&l_1961,&l_1961,&l_2033}};
                uint64_t l_2043 = 0x460BE89D07FF468DLL;
                int i, j;
                (***g_1170) = ((~(((18446744073709551607UL || (((safe_add_func_int64_t_s_s((0x539AL | (safe_add_func_uint16_t_u_u((l_1958 < g_243), ((!((*l_1921)++)) , ((((((safe_mod_func_uint8_t_u_u((l_2022 ^= ((****g_1794) = 0xE0L)), ((**l_1955) ^= (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(0xB49AL, ((l_2031 = (safe_mod_func_uint16_t_u_u(((l_2029 == l_2030) , 0UL), g_1367[4][0]))) <= 0x37D7FE06E2602BA3LL))), 0x1F1AL))))) > 0UL) || (-1L)) != l_2032) == 0xF0C6A812L) & g_1458))))), l_2033)) > 3UL) == 7L)) , &g_1170) != (void*)0)) > (**g_941));
                l_2043++;
            }
        }
    }
    else
    {
        uint64_t l_2049 = 0x3B54C9B1C6AF5C0ALL;
        int8_t l_2075 = 0L;
        int32_t l_2103 = 0xB9B08F5CL;
        int32_t l_2104 = (-7L);
        int32_t l_2105 = 0x674718DDL;
        uint8_t l_2108 = 1UL;
        int32_t l_2116 = 1L;
        int32_t l_2118 = (-1L);
lbl_2125:
        g_2046 = (void*)0;
        for (g_243 = 0; (g_243 > (-6)); --g_243)
        {
            int16_t *l_2058 = &g_248;
            int16_t **l_2057 = &l_2058;
            int16_t ***l_2056[2][8] = {{&l_2057,(void*)0,(void*)0,&l_2057,(void*)0,(void*)0,&l_2057,(void*)0},{&l_2057,&l_2057,(void*)0,&l_2057,&l_2057,(void*)0,&l_2057,&l_2057}};
            int32_t l_2059 = 1L;
            int32_t *l_2077 = (void*)0;
            int32_t ** const **l_2087 = &g_439;
            int32_t l_2100 = 0xC51DA7A4L;
            int32_t l_2101[7];
            int i, j;
            for (i = 0; i < 7; i++)
                l_2101[i] = 0x32B6012AL;
            (*g_501) = ((*g_1008) = l_2049);
            for (g_84 = 2; (g_84 >= 0); g_84 -= 1)
            {
                int8_t l_2073 = 0xFCL;
                uint64_t *l_2074[5][5][3] = {{{(void*)0,&g_504,(void*)0},{&g_504,&g_514,(void*)0},{&g_514,&g_504,&g_514},{(void*)0,&l_2049,(void*)0},{&g_514,&g_514,&g_504}},{{&g_504,&g_514,&g_514},{(void*)0,&l_2049,(void*)0},{&g_514,&g_504,&g_514},{(void*)0,&g_514,&g_504},{(void*)0,&g_504,(void*)0}},{{&g_514,(void*)0,&g_514},{(void*)0,&g_504,(void*)0},{&g_504,&g_514,(void*)0},{&g_514,&g_504,&g_514},{(void*)0,&l_2049,(void*)0}},{{&g_514,&g_514,&g_504},{&g_504,&g_514,&g_514},{(void*)0,&l_2049,(void*)0},{&g_514,&g_504,&g_514},{(void*)0,&g_514,&g_504}},{{(void*)0,&g_504,(void*)0},{&g_514,(void*)0,&g_514},{(void*)0,&g_504,(void*)0},{&g_504,&g_514,(void*)0},{&g_514,&g_504,&g_514}}};
                int32_t l_2111 = 0x45FDC4F3L;
                int32_t l_2113 = 0L;
                int32_t l_2114 = (-7L);
                int32_t l_2119 = 0x18DBA1CFL;
                uint64_t l_2122 = 18446744073709551615UL;
                uint16_t l_2128[8][10][3] = {{{65532UL,0xEAB2L,0UL},{0UL,0x0C22L,0xBBA2L},{65532UL,6UL,7UL},{0x52C6L,0x15DAL,0UL},{65532UL,3UL,6UL},{0x52C6L,0UL,0xA6A6L},{65532UL,0UL,65532UL},{0UL,0xEAF4L,0x4DA9L},{65532UL,0x97CEL,0x5E43L},{0x52C6L,5UL,0x4A06L}},{{65532UL,0x932FL,0UL},{0x52C6L,8UL,0x3961L},{65532UL,0x6B02L,65532UL},{0UL,1UL,0x6ACEL},{65532UL,9UL,0x7E0AL},{0x52C6L,65529UL,0x52C6L},{65532UL,0x55C9L,0x80C2L},{0x52C6L,65533UL,0xF758L},{65532UL,0xEAB2L,0UL},{0UL,0x0C22L,0xBBA2L}},{{1UL,7UL,65535UL},{0x8679L,0xFA83L,0x97AFL},{0x21F4L,0UL,4UL},{0x8679L,7UL,0UL},{1UL,0x80C2L,1UL},{0x97AFL,1UL,65527UL},{1UL,0x7E0AL,0x7DCEL},{0x8679L,1UL,0x6E56L},{0x21F4L,65532UL,65535UL},{0x8679L,65535UL,65532UL}},{{1UL,0UL,0x21F4L},{0x97AFL,0xE8CEL,1UL},{1UL,0x5E43L,0x634DL},{0x8679L,0x8552L,0x8679L},{0x21F4L,65532UL,0x7D96L},{0x8679L,0x766FL,0x2D4BL},{1UL,6UL,65535UL},{0x97AFL,2UL,65532UL},{1UL,7UL,65535UL},{0x8679L,0xFA83L,0x97AFL}},{{0x21F4L,0UL,4UL},{0x8679L,7UL,0UL},{1UL,0x80C2L,1UL},{0x97AFL,1UL,65527UL},{1UL,0x7E0AL,0x7DCEL},{0x8679L,1UL,0x6E56L},{0x21F4L,65532UL,65535UL},{0x8679L,65535UL,65532UL},{1UL,0UL,0x21F4L},{0x97AFL,0xE8CEL,1UL}},{{1UL,0x5E43L,0x634DL},{0x8679L,0x8552L,0x8679L},{0x21F4L,65532UL,0x7D96L},{0x8679L,0x766FL,0x2D4BL},{1UL,6UL,65535UL},{0x97AFL,2UL,65532UL},{1UL,7UL,65535UL},{0x8679L,0xFA83L,0x97AFL},{0x21F4L,0UL,4UL},{0x8679L,7UL,0UL}},{{1UL,0x80C2L,1UL},{0x97AFL,1UL,65527UL},{1UL,0x7E0AL,0x7DCEL},{0x8679L,1UL,0x6E56L},{0x21F4L,65532UL,65535UL},{0x8679L,65535UL,65532UL},{1UL,0UL,0x21F4L},{0x97AFL,0xE8CEL,1UL},{1UL,0x5E43L,0x634DL},{0x8679L,0x8552L,0x8679L}},{{0x21F4L,65532UL,0x7D96L},{0x8679L,0x766FL,0x2D4BL},{1UL,6UL,65535UL},{0x97AFL,2UL,65532UL},{1UL,7UL,65535UL},{0x8679L,0xFA83L,0x97AFL},{0x21F4L,0UL,4UL},{0x8679L,7UL,0UL},{1UL,0x80C2L,1UL},{0x97AFL,1UL,65527UL}}};
                int i, j, k;
                (*g_301) = (safe_div_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((l_2056[1][0] != (void*)0), (((l_2059 , ((((safe_sub_func_int32_t_s_s(((--(*g_917)) == (0x9AL == (-10L))), (!247UL))) != (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u((l_1926[2][7] != (l_2073 , l_2074[1][0][0])), l_2075)) >= l_2073), g_20[0])) , (*g_1206)) == 1UL) | 0x4DB7180742AEE427LL), l_2073)) > g_360), 13))) | g_360) >= 253UL)) <= l_2076) , 18446744073709551607UL))) <= (***g_1763)), (-6L))) || l_2059), 0xE3L));
                if ((((**g_439) != (l_2078 = l_2077)) < ((void*)0 == (**g_439))))
                {
                    for (g_245 = 0; (g_245 <= 2); g_245 += 1)
                    {
                        uint64_t l_2079 = 0x605EB3343D57CA0ELL;
                        int16_t **l_2082 = &l_2058;
                        int i, j, k;
                        (*g_1008) = ((((*g_917) = l_2079) & (g_2080 != l_2082)) , (g_2[(g_245 + 1)][g_84][g_245] |= (+((**g_1561) = ((g_2084[0][4][4] = &g_1678) == l_2085)))));
                    }
                }
                else
                {
                    int32_t ** const ***l_2086 = (void*)0;
                    if (l_2059)
                        break;
                    if ((***g_1763))
                        break;
                    l_2087 = &g_439;
                    return g_2088;
                }
                for (l_2059 = 14; (l_2059 > 17); l_2059++)
                {
                    int16_t l_2102 = (-4L);
                    int32_t l_2106 = 0xDAFC4F8DL;
                    int32_t l_2107 = (-3L);
                    int32_t *l_2112[6] = {&g_2[8][0][3],&g_362[0][8],&g_2[8][0][3],&g_2[8][0][3],&g_362[0][8],&g_2[8][0][3]};
                    int32_t l_2117 = 1L;
                    int i;
                    for (l_8 = 0; (l_8 <= 3); l_8 += 1)
                    {
                        int i, j, k;
                        (*g_301) = g_231[l_8][(l_8 + 4)][g_84];
                        if (g_231[l_8][(l_8 + 4)][g_84])
                            continue;
                    }
                    for (l_2049 = (-30); (l_2049 == 52); ++l_2049)
                    {
                        int32_t *l_2093 = &g_241;
                        int32_t *l_2094 = (void*)0;
                        int32_t *l_2095 = &l_2032;
                        int32_t *l_2096 = &g_2[0][1][0];
                        int32_t *l_2097 = (void*)0;
                        int32_t *l_2098 = (void*)0;
                        int32_t *l_2099[1][9] = {{&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241}};
                        int i, j;
                        l_2108++;
                    }
                    --l_2122;
                    if (l_1927)
                        goto lbl_2125;
                }
                l_2059 &= ((((l_2122 , &l_2057) == &l_2057) ^ (((0L >= ((18446744073709551606UL | l_2101[2]) || (l_2128[3][7][1] = ((*l_2058) = ((*l_2085) ^= (-1L)))))) >= (+(*g_942))) == (((~l_2104) != 0L) < l_2113))) | l_2111);
            }
            return (*g_1206);
        }
        (***g_1170) = ((***g_1170) != (((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(l_2104, ((0x0CD6990708CBE224LL & ((**g_941) = 0x5081994E628296F1LL)) & (l_1985 , (safe_add_func_uint16_t_u_u(((1L & ((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((~(l_2103 = ((***g_1560)--))), l_2076)), 3)) , ((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((65535UL <= ((l_1985 = (safe_lshift_func_int8_t_s_s(l_1937[0], 4))) == l_1992)), 3UL)) <= (****g_1947)), 2)) <= l_2034))) == l_69), l_8)))))), (-1L))) <= 0x9AL) != l_1992));
        (*g_1171) = (**g_1763);
    }
    return l_1985;
}







static int32_t * func_23(int32_t * p_24, int16_t p_25, uint32_t p_26, uint32_t p_27)
{
    int32_t *l_1900 = &g_2[4][1][3];
    int32_t *l_1901 = &g_2[1][0][2];
    int32_t *l_1902 = &g_362[1][2];
    int32_t *l_1903 = &g_2[8][0][3];
    int32_t l_1904[7] = {0x14DC7A3FL,(-8L),0x14DC7A3FL,0x14DC7A3FL,(-8L),0x14DC7A3FL,0x14DC7A3FL};
    int32_t *l_1905[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t l_1906 = 0xF0ACFFD878320415LL;
    uint32_t l_1907[1];
    int i;
    for (i = 0; i < 1; i++)
        l_1907[i] = 0xF6DC1706L;
    (*g_301) = ((safe_rshift_func_int8_t_s_u(p_27, 5)) ^ p_25);
    l_1907[0]++;
    return p_24;
}







static int32_t * func_28(uint16_t * p_29, uint64_t p_30)
{
    int32_t *l_1875 = &g_84;
    int8_t ***l_1886[9] = {&g_555,&g_555,&g_555,&g_555,&g_555,&g_555,&g_555,&g_555,&g_555};
    uint64_t ** const l_1890 = &g_942;
    int i;
    for (g_361 = 0; (g_361 != 7); g_361++)
    {
        (**g_1170) = l_1875;
    }
    (*l_1875) = 0x71FDB441L;
    if ((1L | ((safe_div_func_uint16_t_u_u((*p_29), (p_30 && (!((****g_1794) &= (*l_1875)))))) & (safe_rshift_func_int16_t_s_s((+(*l_1875)), 9)))))
    {
        int8_t ****l_1887 = &l_1886[8];
        int8_t ***l_1888 = &g_555;
        uint64_t **l_1891 = &g_942;
        int32_t l_1892[10][10][2] = {{{6L,5L},{1L,1L},{0x650DE189L,0xB7AA9236L},{0x1D25A9F6L,6L},{0x650DE189L,1L},{1L,0x650DE189L},{6L,0xD4D3AE15L},{6L,0x650DE189L},{1L,1L},{0x650DE189L,6L}},{{0x1D25A9F6L,0xB7AA9236L},{0x650DE189L,1L},{1L,5L},{6L,0x1D25A9F6L},{6L,5L},{1L,1L},{0x650DE189L,0xB7AA9236L},{0x1D25A9F6L,6L},{0x650DE189L,1L},{1L,0x650DE189L}},{{6L,0xD4D3AE15L},{6L,0x650DE189L},{1L,1L},{0x650DE189L,6L},{0x1D25A9F6L,0xB7AA9236L},{0x650DE189L,1L},{1L,5L},{6L,0x1D25A9F6L},{6L,5L},{1L,1L}},{{0x650DE189L,0xB7AA9236L},{0x1D25A9F6L,6L},{0x650DE189L,1L},{1L,0x650DE189L},{6L,0xD4D3AE15L},{6L,0x650DE189L},{1L,1L},{0x650DE189L,6L},{0x1D25A9F6L,0xB7AA9236L},{0x650DE189L,1L}},{{1L,5L},{6L,0x1D25A9F6L},{6L,5L},{1L,1L},{0x650DE189L,0xB7AA9236L},{0x1D25A9F6L,6L},{0x650DE189L,1L},{1L,0x650DE189L},{6L,0xD4D3AE15L},{6L,0x650DE189L}},{{1L,1L},{0x650DE189L,6L},{0x1D25A9F6L,0xB7AA9236L},{0x650DE189L,1L},{1L,5L},{6L,0x1D25A9F6L},{6L,5L},{1L,1L},{0x650DE189L,0xB7AA9236L},{0x1D25A9F6L,6L}},{{0x650DE189L,1L},{1L,0x650DE189L},{6L,0xD4D3AE15L},{6L,0x650DE189L},{1L,1L},{0x650DE189L,6L},{0x1D25A9F6L,0xB7AA9236L},{0x650DE189L,1L},{1L,5L},{6L,0x1D25A9F6L}},{{6L,5L},{1L,1L},{0x650DE189L,0xB7AA9236L},{0x1D25A9F6L,6L},{0x650DE189L,1L},{1L,0x650DE189L},{6L,0xD4D3AE15L},{6L,0x650DE189L},{1L,1L},{0x650DE189L,6L}},{{0x1D25A9F6L,5L},{0x1D25A9F6L,1L},{1L,0xD4D3AE15L},{0x650DE189L,0xCFD77E37L},{0x650DE189L,0xD4D3AE15L},{1L,1L},{0x1D25A9F6L,5L},{0xCFD77E37L,0x650DE189L},{0x1D25A9F6L,0x03697B31L},{1L,0x1D25A9F6L}},{{0x650DE189L,6L},{0x650DE189L,0x1D25A9F6L},{1L,0x03697B31L},{0x1D25A9F6L,0x650DE189L},{0xCFD77E37L,5L},{0x1D25A9F6L,1L},{1L,0xD4D3AE15L},{0x650DE189L,0xCFD77E37L},{0x650DE189L,0xD4D3AE15L},{1L,1L}}};
        int i, j, k;
        (*g_1008) = ((safe_mod_func_int64_t_s_s(p_30, ((((((((*l_1887) = l_1886[0]) != l_1888) < ((-9L) < (((safe_unary_minus_func_int16_t_s(0x1535L)) , l_1890) == l_1891))) == (((***g_1560) || ((****g_1794) <= 252UL)) != (*g_1455))) >= l_1892[2][9][1]) > (*l_1875)) , p_30))) <= p_30);
        return l_1875;
    }
    else
    {
        uint64_t l_1893 = 0x0CF009AD724E6421LL;
        l_1893++;
    }
    return l_1875;
}







static uint64_t func_31(uint16_t * p_32, int16_t p_33, const int32_t * p_34, int32_t p_35, int32_t p_36)
{
    int8_t ***l_1342 = &g_555;
    int32_t l_1345[6] = {0x647DBCA6L,0x4662028BL,0x647DBCA6L,0x647DBCA6L,0x4662028BL,0x647DBCA6L};
    int32_t l_1346 = (-1L);
    int32_t ***l_1361 = &g_1171;
    uint64_t l_1374 = 0xAE54BD32EEDF0BDELL;
    int8_t l_1385 = 0L;
    uint64_t ** const l_1418 = &g_942;
    uint16_t **l_1497 = &g_917;
    uint16_t ***l_1496 = &l_1497;
    int64_t l_1546 = 0x67A9490A3F6B1DFBLL;
    uint16_t l_1617 = 65535UL;
    const int16_t *l_1666 = &g_1335[0][1];
    const int16_t ** const l_1665 = &l_1666;
    uint64_t l_1705 = 0xD94000505C0CB13FLL;
    uint32_t l_1801 = 4294967287UL;
    uint64_t l_1808 = 1UL;
    uint8_t **l_1843 = (void*)0;
    uint32_t l_1864 = 0x0C9D92BEL;
    int i;
    if (((safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((*g_418) = p_33), (g_288 || ((safe_sub_func_int64_t_s_s(((void*)0 != l_1342), ((safe_rshift_func_int8_t_s_s((l_1346 &= l_1345[2]), 0)) < (safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((-3L), ((*g_1008) = (-1L)))), (((((g_19[0][5] = &g_428) == (void*)0) , (*g_942)) ^ l_1345[2]) , 0x9B36L)))))) > (*p_34))))) == (*g_667)), 255UL)) , 0x9EDA5A0FL))
    {
        uint32_t l_1355 = 0x3B0F7D8AL;
        int16_t *l_1357 = (void*)0;
        int16_t *l_1358[3][1];
        int32_t l_1359 = 0xFB813CDBL;
        int32_t ***l_1360 = &g_1171;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_1358[i][j] = &g_243;
        }
        l_1359 |= (safe_mod_func_int16_t_s_s(l_1345[2], ((*p_34) & ((*g_441) , ((((safe_lshift_func_int8_t_s_s(p_33, p_33)) >= (p_36 = l_1355)) || ((*g_667) = (+4294967295UL))) , (p_34 != ((l_1346 = p_36) , p_34)))))));
        (*g_1008) &= (((**g_417) == ((p_33 > (p_35 != 0xCA0F7A6BB42C47A4LL)) , (l_1346 = p_35))) ^ l_1355);
        l_1361 = l_1360;
        (*g_301) = (*p_34);
    }
    else
    {
        uint8_t l_1364 = 255UL;
        uint16_t *l_1365 = (void*)0;
        uint16_t *l_1366[7];
        int32_t l_1368 = 0x7D459B1FL;
        int32_t l_1372 = 2L;
        int32_t l_1373 = 1L;
        uint32_t l_1384 = 0x346B3FB1L;
        const int32_t **l_1399 = (void*)0;
        uint64_t **l_1419 = &g_942;
        uint16_t ***l_1502 = &l_1497;
        int64_t l_1517 = (-1L);
        uint64_t l_1538 = 18446744073709551615UL;
        int32_t l_1595 = 0x09210905L;
        int32_t l_1616 = 0x0263C9ADL;
        int32_t l_1736 = 1L;
        uint16_t ****l_1757 = (void*)0;
        int32_t l_1764 = 1L;
        int32_t l_1771 = 0x43161424L;
        int32_t l_1772 = 0x10D94B8EL;
        int32_t l_1773 = (-2L);
        int32_t l_1774 = (-9L);
        int32_t l_1775 = 0xD3904609L;
        int32_t l_1777 = 5L;
        int32_t l_1778 = (-6L);
        int32_t l_1807 = 0xEDB763EFL;
        int i;
        for (i = 0; i < 7; i++)
            l_1366[i] = &g_1367[8][0];
        (*g_1008) |= (safe_lshift_func_uint16_t_u_u((*p_32), (l_1368 = l_1364)));
        for (g_129 = 0; (g_129 == 57); g_129 = safe_add_func_int8_t_s_s(g_129, 2))
        {
            int32_t *l_1371[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1371[i] = &g_85;
            --l_1374;
            (**g_1170) = (**l_1361);
            (*g_501) |= ((*g_301) = ((safe_sub_func_int32_t_s_s((*g_301), 1UL)) < ((p_36 && (((((*p_34) != ((**g_941) > ((safe_mod_func_int32_t_s_s(((((((&g_294 != p_34) != ((+(safe_div_func_int16_t_s_s(p_35, g_171))) , p_33)) | 0x99D68AB7L) & (*g_667)) > p_35) , l_1373), l_1384)) & l_1368))) < l_1385) | l_1385) == p_35)) , g_16)));
            (**l_1361) = &p_36;
        }
    }
    for (l_1385 = 13; (l_1385 < (-8)); l_1385 = safe_sub_func_uint64_t_u_u(l_1385, 8))
    {
        int32_t *l_1819[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1819[i] = (void*)0;
        l_1819[1] = (**g_1170);
    }
    for (l_1374 = 0; (l_1374 != 8); l_1374 = safe_add_func_int16_t_s_s(l_1374, 4))
    {
        uint32_t l_1840 = 9UL;
        uint8_t *****l_1867 = &g_1794;
        for (g_1253 = 0; (g_1253 == (-25)); g_1253--)
        {
            uint32_t l_1826 = 4294967290UL;
            uint32_t l_1850 = 0x695D1825L;
            int32_t l_1859 = 1L;
            int32_t l_1861 = 5L;
            (**g_1170) = &p_35;
            for (g_171 = 9; (g_171 != 19); g_171 = safe_add_func_int64_t_s_s(g_171, 5))
            {
                l_1826++;
                (***l_1361) = (**g_1171);
                (**g_1170) = &p_36;
            }
            for (g_511 = 4; (g_511 > (-21)); g_511 = safe_sub_func_int8_t_s_s(g_511, 2))
            {
                int32_t *l_1849 = &g_1458;
                int32_t l_1860 = 0xB9C762CBL;
                int32_t l_1862 = (-6L);
                int32_t l_1870 = (-6L);
                for (l_1385 = 0; (l_1385 == (-22)); --l_1385)
                {
                    int16_t *l_1839 = &g_248;
                    int32_t l_1844 = 2L;
                    uint64_t l_1846 = 1UL;
                    const int64_t **l_1848 = (void*)0;
                    const int64_t ***l_1847 = &l_1848;
                    int32_t l_1863 = 0x6C6C73E0L;
                    (**l_1361) = (**l_1361);
                    for (g_360 = 0; (g_360 <= 0); g_360 += 1)
                    {
                        int32_t *l_1853 = (void*)0;
                        int32_t *l_1854 = &g_84;
                        int32_t *l_1855 = &g_85;
                        int32_t *l_1856 = &g_362[2][0];
                        int32_t *l_1857 = &g_289;
                        int32_t *l_1858[6][7][6] = {{{&g_361,(void*)0,&g_2[8][0][3],(void*)0,(void*)0,&g_5},{&g_2[5][0][3],&g_85,&g_2[8][0][3],&g_361,(void*)0,&g_361},{&g_241,&g_241,&g_5,&l_1345[4],&l_1346,&g_362[1][2]},{&l_1345[4],&l_1346,&g_362[1][2],&g_2[8][0][3],&l_1345[2],(void*)0},{&g_84,&l_1346,&g_85,&g_85,&l_1346,&g_84},{(void*)0,&g_241,&g_361,&g_290,(void*)0,(void*)0},{&g_85,&g_85,(void*)0,&g_2[5][0][3],(void*)0,&l_1345[2]}},{{&g_85,(void*)0,&g_2[5][0][3],&g_290,&g_85,&g_2[8][0][3]},{(void*)0,(void*)0,(void*)0,&g_85,&l_1345[3],&g_241},{&g_84,(void*)0,&l_1345[2],&g_2[8][0][3],&l_1345[2],&g_241},{&l_1345[4],(void*)0,(void*)0,&l_1345[4],&l_1346,&g_2[8][0][3]},{&g_241,&g_361,&g_2[5][0][3],&g_361,(void*)0,&l_1345[2]},{&g_2[5][0][3],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_361,&g_361,&g_361,&g_362[1][2],&l_1346,&g_84}},{{&g_2[8][0][3],(void*)0,&g_85,&l_1345[2],&l_1345[2],(void*)0},{&g_361,(void*)0,&g_362[1][2],&l_1345[2],&l_1345[3],&g_362[1][2]},{&g_2[8][0][3],(void*)0,&g_5,&g_362[1][2],&g_85,&g_361},{&g_361,(void*)0,&g_2[8][0][3],(void*)0,(void*)0,&g_5},{&g_2[5][0][3],&g_85,&g_2[8][0][3],&g_361,(void*)0,&g_361},{&g_241,&g_241,&g_5,&l_1345[4],&l_1346,&g_362[1][2]},{&l_1345[4],&l_1346,&g_362[1][2],&g_2[8][0][3],&l_1345[2],(void*)0}},{{&g_84,&l_1346,&g_85,&g_85,&l_1346,&g_84},{(void*)0,&g_241,&g_361,&g_290,(void*)0,(void*)0},{&g_85,&g_85,(void*)0,&g_2[5][0][3],(void*)0,&l_1345[2]},{&g_85,(void*)0,(void*)0,&l_1844,&g_361,&g_362[0][8]},{&g_241,&g_2[5][0][3],&g_2[5][2][2],&l_1346,&g_85,&g_361},{&g_5,&g_84,(void*)0,&g_362[0][8],&g_362[1][2],&g_361},{&g_85,(void*)0,&g_2[5][2][2],&g_85,&g_5,&g_362[0][8]}},{{&g_361,(void*)0,(void*)0,(void*)0,&g_2[8][0][3],(void*)0},{(void*)0,&g_290,&g_5,&g_84,&g_2[8][0][3],&g_84},{&l_1345[4],(void*)0,&l_1345[4],&g_362[1][4],&g_5,&g_5},{&g_362[0][8],(void*)0,&l_1346,(void*)0,&g_362[1][2],&g_290},{(void*)0,&g_84,&g_362[1][4],(void*)0,&g_85,&g_362[1][4]},{&g_362[0][8],&g_2[5][0][3],&l_1345[2],&g_362[1][4],&g_361,&l_1345[4]},{&l_1345[4],&g_2[8][0][3],&g_362[0][8],&g_84,(void*)0,&l_1345[2]}},{{(void*)0,(void*)0,&g_362[0][8],(void*)0,&g_2[5][0][3],&l_1345[4]},{&g_361,&l_1345[4],&l_1345[2],&g_85,(void*)0,&g_362[1][4]},{&g_85,(void*)0,&g_362[1][4],&g_362[0][8],&l_1345[2],&g_290},{&g_5,(void*)0,&l_1346,&l_1346,(void*)0,&g_5},{&g_241,&l_1345[4],&l_1345[4],&l_1844,&g_2[5][0][3],&g_84},{&l_1346,(void*)0,&g_5,(void*)0,(void*)0,(void*)0},{&l_1346,&g_2[8][0][3],(void*)0,&l_1844,&g_361,&g_362[0][8]}}};
                        int i, j, k;
                        l_1850++;
                        l_1864++;
                        l_1867 = &g_1794;
                        (**l_1361) = &p_36;
                    }
                }
                for (g_248 = 0; (g_248 <= 28); g_248 = safe_add_func_int64_t_s_s(g_248, 9))
                {
                    uint64_t ***l_1872 = &g_1710;
                    (*g_1008) = ((**g_666) , l_1870);
                    for (l_1808 = 0; (l_1808 <= 5); l_1808 += 1)
                    {
                        int i;
                        l_1345[l_1808] = (safe_unary_minus_func_uint16_t_u((l_1872 == (void*)0)));
                        if (g_20[l_1808])
                            break;
                        (*g_1171) = (**g_1763);
                    }
                }
            }
        }
    }
    return p_36;
}







static uint16_t * func_37(int32_t p_38, const uint16_t p_39, uint16_t * const p_40)
{
    uint32_t l_1318 = 0xC18F6B4EL;
    int32_t *l_1321 = (void*)0;
    uint8_t *l_1327[3];
    int32_t l_1328 = 0x62774A83L;
    uint16_t *l_1332[4];
    int i;
    for (i = 0; i < 3; i++)
        l_1327[i] = &g_231[4][4][0];
    for (i = 0; i < 4; i++)
        l_1332[i] = &g_20[3];
    (*g_501) ^= (((safe_lshift_func_uint16_t_u_s(((((*g_1008) = (((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s(((*g_1206) |= l_1318), (safe_rshift_func_int8_t_s_u(p_38, (((l_1321 == (void*)0) & (l_1328 |= (safe_lshift_func_int16_t_s_u(g_5, (~(((1L ^ (l_1318 != ((((0xCDE9062FL <= (safe_mod_func_uint8_t_u_u((((0x04L > 0x49L) > l_1318) || g_512), p_39))) && 65535UL) == 3L) , g_360))) & g_511) , (**g_417))))))) & g_362[2][6]))))), p_39)) , l_1318) && (*g_1206))) > p_38) != 0x62L), 6)) < 0xC7L) , p_39);
    for (g_428 = 0; (g_428 <= 38); g_428++)
    {
        uint16_t *l_1331 = &g_428;
        return l_1331;
    }
    return l_1332[1];
}







static int64_t func_44(uint64_t p_45)
{
    int16_t l_1093 = (-6L);
    int32_t l_1094[7] = {0xB276FA8EL,0xB276FA8EL,0xB276FA8EL,0xB276FA8EL,0xB276FA8EL,0xB276FA8EL,0xB276FA8EL};
    uint32_t l_1096 = 0UL;
    int32_t l_1101 = (-4L);
    int8_t l_1103 = 5L;
    int32_t l_1104 = 1L;
    int8_t ***l_1123 = &g_555;
    uint8_t **l_1151 = &g_710[2];
    uint64_t * const *l_1179 = &g_942;
    uint64_t * const **l_1178 = &l_1179;
    uint64_t * const ***l_1177 = &l_1178;
    int8_t *l_1210 = &g_288;
    uint16_t l_1229[4] = {0x90EDL,0x90EDL,0x90EDL,0x90EDL};
    uint64_t l_1251[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    uint64_t l_1271 = 1UL;
    int64_t **l_1296 = &g_667;
    int i;
    for (g_428 = 0; (g_428 < 46); g_428++)
    {
        int32_t *l_1087 = &g_241;
        int32_t l_1088 = 0L;
        int32_t *l_1089 = (void*)0;
        int32_t *l_1090 = (void*)0;
        int32_t *l_1091 = &l_1088;
        int32_t *l_1092[4][9] = {{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int16_t l_1095 = (-5L);
        int8_t ** const *l_1122 = &g_555;
        uint64_t **l_1149 = &g_942;
        uint8_t **l_1184 = &g_418;
        int32_t l_1203 = 0x8A4A4ABDL;
        uint64_t l_1252 = 0x5047A0FC756149FFLL;
        int i, j;
        ++l_1096;
        for (g_360 = 1; (g_360 <= 5); g_360 += 1)
        {
            int64_t l_1099 = 0xA278D3B24AB3E55ALL;
            int32_t l_1100 = (-3L);
            int32_t l_1102[1];
            int16_t l_1105 = 1L;
            uint32_t l_1106 = 4294967295UL;
            int16_t *l_1248 = &l_1105;
            int16_t **l_1247 = &l_1248;
            int i;
            for (i = 0; i < 1; i++)
                l_1102[i] = 0x71432051L;
            l_1106++;
        }
        for (l_1088 = 0; (l_1088 == 14); l_1088 = safe_add_func_int16_t_s_s(l_1088, 6))
        {
            (*g_1008) = 0x5B606D6DL;
        }
    }
    for (g_171 = 0; (g_171 >= (-17)); g_171 = safe_sub_func_uint32_t_u_u(g_171, 1))
    {
        int32_t l_1267 = (-1L);
        int32_t l_1268 = (-6L);
        int32_t l_1269[7][3] = {{0xD8299766L,0xD8299766L,0xD8299766L},{1L,8L,1L},{0xD8299766L,0xD8299766L,0xD8299766L},{1L,8L,1L},{0xD8299766L,0xD8299766L,0xD8299766L},{1L,8L,1L},{0xD8299766L,0xD8299766L,0xD8299766L}};
        int i, j;
        for (g_249 = 0; (g_249 > 56); g_249 = safe_add_func_int8_t_s_s(g_249, 5))
        {
            int32_t *l_1260 = (void*)0;
            int32_t *l_1261 = &g_290;
            int32_t *l_1262 = &l_1094[1];
            int32_t *l_1263 = &l_1094[5];
            int32_t *l_1264 = &l_1094[4];
            int32_t l_1265 = 0xA6838518L;
            int32_t *l_1266[9] = {&l_1094[4],&l_1094[4],&l_1094[4],&l_1094[4],&l_1094[4],&l_1094[4],&l_1094[4],&l_1094[4],&l_1094[4]};
            int64_t l_1270 = 0x18B89FE3C2836CF6LL;
            int i;
            (**g_1170) = (void*)0;
            l_1271++;
            if (p_45)
                continue;
        }
    }
    l_1094[4] = ((&g_1253 != (((l_1096 , l_1094[4]) , ((void*)0 != &l_1101)) , &l_1093)) , (*g_501));
    for (g_84 = 0; (g_84 != 4); ++g_84)
    {
        uint16_t l_1284 = 0x08A6L;
        int32_t l_1301 = 0x8A71025EL;
        int32_t l_1302[6][5][2] = {{{6L,0xA1B13B6EL},{6L,6L},{6L,0xA1B13B6EL},{6L,6L},{6L,0xA1B13B6EL}},{{6L,6L},{6L,0xA1B13B6EL},{6L,6L},{6L,0xA1B13B6EL},{6L,6L}},{{6L,0xA1B13B6EL},{6L,6L},{6L,0xA1B13B6EL},{6L,6L},{6L,0xA1B13B6EL}},{{6L,6L},{6L,0xA1B13B6EL},{6L,6L},{6L,0xA1B13B6EL},{6L,6L}},{{6L,0xA1B13B6EL},{6L,6L},{6L,0xA1B13B6EL},{6L,6L},{6L,0xA1B13B6EL}},{{6L,6L},{6L,0xA1B13B6EL},{6L,6L},{6L,0xA1B13B6EL},{6L,6L}}};
        int8_t l_1303[3];
        int32_t l_1305 = 7L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1303[i] = 1L;
        if ((*g_1008))
        {
            int8_t l_1294[1];
            uint16_t *l_1295 = &g_20[0];
            int32_t l_1297 = 5L;
            int32_t *l_1298 = &g_362[2][3];
            int32_t *l_1299 = &g_289;
            int32_t *l_1300[1];
            int32_t l_1304 = 0x00787131L;
            uint32_t l_1306 = 0xED8DED39L;
            int i;
            for (i = 0; i < 1; i++)
                l_1294[i] = 1L;
            for (i = 0; i < 1; i++)
                l_1300[i] = &l_1094[4];
            (*g_501) ^= (((safe_rshift_func_int8_t_s_s(0xD0L, 1)) && ((*l_1210) ^= ((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s(l_1284, (l_1229[3] & ((*l_1295) = (safe_rshift_func_int16_t_s_u((l_1096 <= (safe_div_func_int32_t_s_s(l_1284, p_45))), ((safe_mod_func_uint64_t_u_u((g_173 >= p_45), ((*g_667) = (safe_lshift_func_int8_t_s_u(((*g_1206) = (~l_1294[0])), 1))))) & (**g_941)))))))), 0x44L)) , (*g_418)), l_1294[0])) || l_1284))) & (**g_417));
            g_666 = l_1296;
            ++l_1306;
        }
        else
        {
            uint8_t l_1309[5][3][8] = {{{255UL,1UL,0x2AL,0xF3L,255UL,0xD6L,0x2AL,255UL},{255UL,247UL,0xF7L,8UL,8UL,0xF7L,247UL,255UL},{255UL,0xABL,1UL,0xF3L,255UL,0xABL,247UL,255UL}},{{1UL,0xD6L,0xF7L,0x08L,0xF3L,0xABL,0x2AL,1UL},{0xF3L,0xABL,0x2AL,1UL,0xF3L,0xF7L,0xF7L,0xF3L},{1UL,247UL,247UL,1UL,255UL,0xD6L,1UL,1UL}},{{255UL,1UL,247UL,0x08L,8UL,0x2AL,0xF7L,255UL},{255UL,1UL,0x2AL,0xF3L,255UL,0xD6L,0x2AL,255UL},{255UL,247UL,0xF7L,8UL,8UL,0xF7L,247UL,255UL}},{{255UL,0xABL,1UL,0xF3L,255UL,0xABL,247UL,255UL},{1UL,0xD6L,0xF7L,0x08L,0xF3L,0xABL,0x2AL,1UL},{0xF3L,0xABL,0x2AL,1UL,0xF3L,0xF7L,0xF7L,0xF3L}},{{1UL,247UL,247UL,1UL,255UL,0xD6L,1UL,1UL},{255UL,1UL,247UL,0x08L,8UL,0x2AL,0xF7L,255UL},{255UL,1UL,0x2AL,0xF3L,255UL,0xD6L,0x2AL,255UL}}};
            int i, j, k;
            --l_1309[1][0][3];
            (*g_1008) |= p_45;
        }
        if ((*g_501))
            continue;
    }
    return p_45;
}







static uint64_t func_46(uint32_t p_47, uint16_t * p_48, uint16_t * p_49, int32_t * p_50, int32_t * const p_51)
{
    int32_t *l_1076 = &g_362[2][2];
    int32_t *l_1077[4][6] = {{&g_290,(void*)0,&g_362[1][2],(void*)0,&g_290,&g_290},{(void*)0,(void*)0,(void*)0,&g_362[1][2],&g_290,&g_362[1][2]},{&g_362[1][2],&g_290,&g_362[1][2],(void*)0,(void*)0,&g_362[1][2]},{(void*)0,(void*)0,(void*)0,&g_2[3][1][1],(void*)0,(void*)0}};
    int32_t l_1078[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint64_t l_1079 = 5UL;
    int i, j;
    l_1079--;
    for (g_63 = 0; (g_63 == (-2)); g_63 = safe_sub_func_int32_t_s_s(g_63, 2))
    {
        int32_t **l_1084 = &l_1077[1][3];
        (*l_1084) = p_50;
    }
    return (**g_941);
}







static const uint32_t func_52(int32_t p_53)
{
    (*g_1008) |= 1L;
    return p_53;
}







static int32_t func_58(int64_t p_59, int32_t p_60, uint32_t p_61)
{
    int64_t *l_76[9] = {&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63};
    int64_t **l_77 = (void*)0;
    int64_t **l_78 = &l_76[6];
    int32_t l_80 = (-6L);
    int32_t *l_82 = (void*)0;
    int32_t **l_81[9];
    int16_t l_502 = 0xCAD1L;
    uint64_t *l_503 = &g_504;
    uint16_t *l_505[2][3];
    uint32_t l_506 = 1UL;
    uint64_t *l_513 = &g_514;
    uint32_t l_525 = 1UL;
    uint32_t *l_542[10] = {&g_249,&g_249,&g_249,(void*)0,&g_249,&g_249,&g_249,&g_249,(void*)0,&g_249};
    uint16_t l_543[3][3][9] = {{{0xBE77L,1UL,0xFE40L,0xF423L,0xF423L,0xFE40L,1UL,0xBE77L,0xFE40L},{0xBE77L,1UL,0xFE40L,0xF423L,0xF423L,0xFE40L,1UL,0xBE77L,0xFE40L},{0xBE77L,1UL,0xFE40L,0xF423L,0xF423L,0xFE40L,1UL,0xBE77L,0xFE40L}},{{0xBE77L,1UL,0xFE40L,0xF423L,0xF423L,0xFE40L,1UL,0xBE77L,0xFE40L},{0xBE77L,1UL,0xFE40L,0xF423L,0xF423L,0xFE40L,1UL,0xBE77L,0xFE40L},{0xBE77L,1UL,0xFE40L,0xF423L,0xF423L,0xFE40L,1UL,0xBE77L,0xFE40L}},{{0xBE77L,1UL,0xFE40L,0xF423L,0xF423L,0xFE40L,1UL,0xBE77L,0xFE40L},{0xBE77L,1UL,0xFE40L,0xF423L,0xF423L,0xFE40L,1UL,0xBE77L,0xFE40L},{0xBE77L,1UL,0xFE40L,0xF423L,0xF423L,0xFE40L,1UL,0xBE77L,0xFE40L}}};
    uint64_t l_544 = 0x0DD6BAD00960AD28LL;
    int8_t *l_557 = &g_360;
    int8_t **l_556 = &l_557;
    uint32_t l_562 = 0xD73292DCL;
    uint8_t ***l_564[1];
    int32_t *l_594 = &g_84;
    uint32_t l_645 = 0xF80D1554L;
    int16_t l_660 = 1L;
    int64_t ** const l_669 = &g_667;
    int32_t l_683[10] = {0x3019255CL,0xC934503EL,0x41B7FAB4L,0x41B7FAB4L,0xC934503EL,0x3019255CL,0xC934503EL,0x41B7FAB4L,0x41B7FAB4L,0xC934503EL};
    int64_t l_697[1];
    uint32_t *l_728 = &l_645;
    int32_t l_810 = 0x6C1702C9L;
    uint8_t l_955 = 0x1CL;
    int32_t **l_1046 = &g_441;
    int64_t l_1062[4][2][4] = {{{(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L)}},{{(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L)}},{{(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L)}},{{(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L)}}};
    int32_t l_1072 = 0x8B0D5AFAL;
    uint16_t l_1073[2][6][6] = {{{0UL,1UL,0x8E05L,1UL,0x8E05L,1UL},{0x8E05L,0UL,0x3ECEL,65526UL,65526UL,0x3ECEL},{0x8E05L,0x8E05L,65526UL,1UL,0x1DC2L,1UL},{0UL,0x8E05L,0UL,0x3ECEL,65526UL,65526UL},{0UL,1UL,1UL,0UL,0x1DC2L,0x3ECEL},{0x3ECEL,0UL,0x8E05L,0UL,0x3ECEL,65526UL}},{{0UL,0x3ECEL,65526UL,65526UL,0x3ECEL,0UL},{1UL,0UL,0x1DC2L,0x3ECEL,0x1DC2L,0UL},{0x1DC2L,1UL,65526UL,0x8E05L,0x8E05L,65526UL},{0x1DC2L,0x1DC2L,0x8E05L,0x3ECEL,1UL,0x3ECEL},{1UL,0x1DC2L,1UL,65526UL,0x8E05L,0x8E05L},{0UL,1UL,1UL,0UL,0x1DC2L,0x3ECEL}}};
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_81[i] = &l_82;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_505[i][j] = &g_20[5];
    }
    for (i = 0; i < 1; i++)
        l_564[i] = &g_417;
    for (i = 0; i < 1; i++)
        l_697[i] = 0x5563CC6B557CEB5ALL;
    return (*g_1008);
}







static int32_t * func_70(uint16_t p_71, const uint16_t * p_72, uint16_t * p_73, uint8_t p_74, int32_t * p_75)
{
    uint32_t l_96 = 0UL;
    int32_t *l_131 = &g_85;
    uint16_t *l_162 = &g_16;
    int32_t l_227 = 0xEAD14177L;
    int32_t l_228 = 0L;
    int32_t l_230 = (-3L);
    int32_t **l_335 = &g_210;
    uint8_t *l_341 = &g_129;
    uint8_t **l_340 = &l_341;
    int32_t *l_359[1];
    int64_t l_363 = 0x80FDE94F91D43B4DLL;
    uint16_t l_364 = 0x3D93L;
    int64_t * const l_373 = (void*)0;
    int64_t * const *l_372 = &l_373;
    int16_t l_400 = 0x3BFBL;
    uint32_t l_414 = 0x8090F0A7L;
    uint8_t *l_444 = &g_129;
    int i;
    for (i = 0; i < 1; i++)
        l_359[i] = &g_2[2][0][2];
    for (g_84 = 20; (g_84 == (-28)); g_84 = safe_sub_func_int16_t_s_s(g_84, 9))
    {
        uint64_t l_91 = 18446744073709551614UL;
        int32_t l_105 = 1L;
        uint8_t *l_128 = &g_129;
        int16_t l_130 = 0xA09BL;
        uint64_t l_136 = 0xA799ADA34CB066DBLL;
        int32_t *l_196 = &g_68;
        int32_t l_246 = 1L;
        int32_t l_292 = 0L;
        int32_t l_293 = 0x4655A230L;
        int64_t l_315 = 0x91AB50BC0549B172LL;
        uint64_t *l_353 = &l_91;
        (*l_131) &= (g_20[0] , (safe_unary_minus_func_int32_t_s((safe_mul_func_int8_t_s_s((((l_91 = 4L) | (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(l_96, ((safe_sub_func_uint16_t_u_u((((((((((safe_add_func_int32_t_s_s(0x0DEE2C54L, (safe_div_func_uint32_t_u_u(((((safe_lshift_func_uint16_t_u_u(l_105, 6)) != ((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_20[2], (safe_lshift_func_uint16_t_u_u((*p_73), 9)))), ((safe_mul_func_uint8_t_u_u(((*l_128) &= (safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(p_71, p_71)) , l_96) <= p_71), l_96))), g_84)) | p_71))), l_130)) & g_68), g_20[0])) <= (*p_72)), 2)), p_74)), 15)) == g_64[2][1][5])) > g_63) | g_16), 0xA86FCAFAL)))) || (*g_83)) == l_96) , &l_105) != l_131) <= g_64[2][1][5]) , p_75) != (void*)0) != p_74), l_130)) < p_71))), l_105))) , l_130), 1UL)))));
        if (p_74)
        {
            int64_t l_145 = 0x43A1FAE61DEDA819LL;
            int32_t **l_146 = (void*)0;
            const int32_t *l_148 = (void*)0;
            const int32_t **l_147[8][2][5] = {{{&l_148,&l_148,(void*)0,&l_148,&l_148},{&l_148,&l_148,(void*)0,(void*)0,(void*)0}},{{&l_148,&l_148,&l_148,&l_148,&l_148},{&l_148,&l_148,(void*)0,&l_148,(void*)0}},{{&l_148,&l_148,&l_148,&l_148,&l_148},{&l_148,&l_148,(void*)0,&l_148,(void*)0}},{{&l_148,&l_148,(void*)0,&l_148,&l_148},{&l_148,&l_148,(void*)0,(void*)0,(void*)0}},{{&l_148,&l_148,&l_148,&l_148,&l_148},{&l_148,&l_148,(void*)0,&l_148,(void*)0}},{{&l_148,&l_148,&l_148,&l_148,&l_148},{&l_148,&l_148,(void*)0,&l_148,(void*)0}},{{&l_148,&l_148,(void*)0,&l_148,&l_148},{&l_148,&l_148,(void*)0,(void*)0,(void*)0}},{{&l_148,&l_148,&l_148,&l_148,&l_148},{&l_148,&l_148,(void*)0,&l_148,(void*)0}}};
            int i, j, k;
            l_131 = (((safe_lshift_func_uint8_t_u_s((g_85 ^ (p_74 , (safe_mod_func_int8_t_s_s((((((l_131 != (void*)0) >= g_84) || g_129) || l_136) == (((*g_83) = ((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s(l_130, (safe_div_func_int16_t_s_s(((p_71 ^ l_105) || 0UL), 0x5B3CL)))), p_74)) >= g_64[1][2][4])) || 0xB4BD6B46L)), p_74)))), 3)) >= l_145) , (void*)0);
            return l_131;
        }
        else
        {
            int32_t *l_153 = &g_85;
            const uint8_t *l_167 = &g_129;
            uint64_t *l_219 = (void*)0;
            int32_t l_224[10] = {2L,0x6BF440EAL,2L,2L,0x6BF440EAL,2L,2L,0x6BF440EAL,2L,2L};
            int32_t l_291 = 0x543C7B79L;
            int32_t l_336 = 8L;
            uint8_t ***l_337 = (void*)0;
            uint8_t **l_339 = &l_128;
            uint8_t ***l_338[1][1][3];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_338[i][j][k] = &l_339;
                }
            }
            for (l_136 = 0; (l_136 == 15); l_136++)
            {
                uint32_t l_187 = 0UL;
                int32_t l_188 = (-9L);
                int32_t *l_208 = &g_68;
                int32_t l_247[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i;
                for (g_63 = 24; (g_63 > (-2)); g_63--)
                {
                    g_83 = l_153;
                    (*g_83) = 0x1BA02A55L;
                }
                if ((*l_131))
                {
                    uint64_t *l_156 = (void*)0;
                    uint64_t *l_157 = (void*)0;
                    uint64_t *l_158 = (void*)0;
                    uint64_t *l_159 = &l_91;
                    int32_t l_161[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
                    int32_t l_189[5][6] = {{0x85C65EB6L,0x85C65EB6L,0x9C2E694CL,0x85C65EB6L,0x85C65EB6L,0x9C2E694CL},{0x85C65EB6L,0x85C65EB6L,0x9C2E694CL,0x85C65EB6L,0x85C65EB6L,0x9C2E694CL},{0x85C65EB6L,0x85C65EB6L,0x9C2E694CL,0x85C65EB6L,0x85C65EB6L,0x9C2E694CL},{0x85C65EB6L,0x85C65EB6L,0x9C2E694CL,0x85C65EB6L,0x85C65EB6L,0x9C2E694CL},{0x85C65EB6L,0x85C65EB6L,0x9C2E694CL,0x85C65EB6L,0x85C65EB6L,0x9C2E694CL}};
                    int i, j;
                    if ((((*l_159) = (safe_mul_func_uint16_t_u_u((*p_73), p_74))) < (-5L)))
                    {
                        int8_t *l_170 = &g_171;
                        int8_t *l_172 = &g_173;
                        uint16_t *l_174 = &g_20[0];
                        uint16_t **l_175 = &l_174;
                        int32_t *l_176 = &l_105;
                        (*l_176) &= (((+((l_161[4] , l_162) == ((*l_175) = ((0xE0L != ((safe_lshift_func_uint8_t_u_u(((void*)0 == l_167), 1)) < (((safe_lshift_func_uint16_t_u_u((((0x8232EDDAL || (((*l_172) &= ((*l_170) = ((((void*)0 != &l_131) >= ((g_20[0] == p_74) > (*g_83))) , g_64[6][1][1]))) , p_74)) ^ p_74) & 0UL), l_91)) >= (*p_72)) >= (-1L)))) , l_174)))) == 0xEBDE3C26F71A791DLL) < (*g_83));
                        (*l_176) |= (*g_83);
                    }
                    else
                    {
                        int8_t *l_185 = &g_173;
                        const uint8_t **l_186 = &l_167;
                        (*l_131) = ((safe_div_func_int8_t_s_s((l_189[1][1] &= ((l_188 = (safe_mul_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s((&g_5 == &l_105), ((((safe_rshift_func_uint8_t_u_u((g_20[0] < (((*l_185) ^= ((p_74 <= (*l_131)) < l_161[1])) < ((void*)0 != &g_83))), 4)) , ((*l_186) = &p_74)) != &p_74) == (-1L)))) && l_187) || g_64[2][1][5]), g_84))) , p_74)), 0xECL)) < 0L);
                        l_131 = &l_105;
                        if (l_130)
                            break;
                        (*l_153) = 1L;
                    }
                    (*l_153) = (safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_91, 6L)), (*p_72)));
                    for (l_188 = 0; (l_188 < (-8)); l_188--)
                    {
                        (*l_131) = (((void*)0 != l_196) || 0x6EEDD9E1L);
                    }
                }
                else
                {
                    int32_t l_218 = 0xEB179A86L;
                    int32_t l_240 = 0x7463E53FL;
                    int32_t l_242 = 0x959A60E0L;
                    int32_t l_244 = 0L;
                    int32_t **l_253 = &l_196;
                    int32_t ***l_252 = &l_253;
                    for (p_71 = 7; (p_71 < 4); p_71 = safe_sub_func_int32_t_s_s(p_71, 3))
                    {
                        int16_t l_201 = 0x55B7L;
                        uint64_t *l_202 = &l_91;
                        int32_t **l_209[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_209[i] = &l_196;
                        (*l_153) = (safe_sub_func_uint16_t_u_u(0UL, l_201));
                        (*g_83) = ((++(*l_202)) ^ (0x493FL ^ (safe_mul_func_int16_t_s_s((!((18446744073709551611UL >= (0x36A80461CA15E865LL ^ 0x3BC25720279D6227LL)) >= (l_201 ^ g_84))), (&g_68 == (g_210 = l_208))))));
                        (*l_153) = (safe_mod_func_uint64_t_u_u(g_5, g_5));
                    }
                    if ((safe_unary_minus_func_int16_t_s((&g_19[3][5] == &g_19[2][6]))))
                    {
                        uint64_t **l_220 = &l_219;
                        int32_t l_223 = 0x598FB196L;
                        int32_t *l_225 = &g_85;
                        int32_t *l_226[8][5][6] = {{{&g_2[4][2][3],&g_2[7][2][1],&g_84,(void*)0,&l_188,&g_5},{&g_84,&g_84,&l_218,&l_218,(void*)0,&l_105},{&l_188,(void*)0,&l_105,&l_105,&g_5,&l_223},{&l_188,&g_85,&l_224[2],&l_224[4],(void*)0,&l_188},{(void*)0,(void*)0,&g_84,&g_2[8][0][3],&l_224[0],&l_224[2]}},{{&l_223,&g_5,&g_2[8][0][3],(void*)0,&l_224[2],(void*)0},{&g_2[4][2][3],&l_188,&g_85,&l_218,&l_224[0],&l_224[5]},{(void*)0,&l_224[0],&l_224[0],&g_5,&g_2[8][0][3],&g_5},{&g_84,&l_105,(void*)0,&g_84,&g_84,(void*)0},{&l_224[0],&l_224[0],(void*)0,&l_223,(void*)0,&g_2[9][1][5]}},{{&l_188,(void*)0,&g_85,(void*)0,&l_105,(void*)0},{(void*)0,&l_188,&g_85,&g_5,&l_224[0],&g_2[9][1][5]},{&l_105,&g_5,(void*)0,(void*)0,&l_105,(void*)0},{(void*)0,&l_105,(void*)0,&g_2[4][2][2],&l_105,&g_5},{(void*)0,&g_2[8][0][3],&l_224[0],&l_224[3],&l_188,&l_224[5]}},{{&l_188,&l_218,&g_85,(void*)0,(void*)0,(void*)0},{&l_105,&g_85,&g_2[8][0][3],&l_223,&g_2[8][0][3],&l_224[2]},{&l_105,&l_224[0],&g_84,(void*)0,&g_85,&l_188},{(void*)0,&l_105,&l_224[2],(void*)0,&l_224[0],&l_223},{&l_105,&l_224[5],&l_105,(void*)0,&l_224[0],&l_105}},{{&g_2[4][2][3],&l_223,&l_218,&g_2[9][0][5],&l_224[0],&g_5},{(void*)0,(void*)0,&l_224[0],&g_2[9][1][5],&g_85,&g_2[4][2][3]},{&l_224[0],&l_105,(void*)0,&l_218,&g_2[8][0][3],(void*)0},{&l_105,(void*)0,(void*)0,&l_105,(void*)0,&l_105},{&g_85,&l_105,&g_85,&g_2[1][1][0],&l_188,&g_84}},{{&l_105,&l_105,&l_218,(void*)0,&l_224[0],&l_105},{(void*)0,&g_2[4][2][3],&g_85,(void*)0,&l_105,&g_2[1][1][0]},{&l_105,&g_2[9][1][5],&l_218,&g_2[1][1][0],&g_5,&l_224[5]},{&g_85,&l_223,&g_84,&l_105,&l_188,&l_224[0]},{&l_105,&g_84,&g_2[8][0][3],&l_218,(void*)0,&l_218}},{{&l_224[0],&l_224[0],&g_84,&g_2[9][1][5],&g_2[2][2][3],&l_224[2]},{(void*)0,&l_224[0],&l_224[2],&g_2[9][0][5],&l_188,&l_218},{&g_2[4][2][3],&l_188,&g_5,&l_218,&g_2[0][2][4],&l_224[4]},{&g_2[4][2][2],&l_224[2],(void*)0,&g_84,&g_85,&l_218},{&l_105,(void*)0,&l_224[0],&g_85,(void*)0,&g_85}},{{&l_105,&l_218,&g_2[8][0][3],&g_2[1][1][0],(void*)0,(void*)0},{&l_223,&l_224[0],&g_84,&l_105,&g_84,&l_224[6]},{&g_2[7][2][1],&l_223,&g_85,(void*)0,&l_223,(void*)0},{&g_5,&l_223,&l_188,&l_188,&g_2[1][2][4],&g_2[1][2][4]},{&l_105,(void*)0,(void*)0,&l_105,&g_2[8][0][3],(void*)0}}};
                        int32_t **l_235 = &g_83;
                        int i, j, k;
                        (*l_153) = (((safe_sub_func_int32_t_s_s((&g_210 == (((g_63 > ((((*l_220) = (l_218 , l_219)) != (void*)0) < g_63)) , ((safe_div_func_int16_t_s_s((0x18A6L ^ l_223), (l_136 || g_171))) <= g_64[5][2][1])) , (void*)0)), (*g_83))) != g_2[3][2][0]) > g_20[4]);
                        g_231[4][4][0]++;
                        (*l_153) |= (safe_unary_minus_func_uint16_t_u(l_218));
                        (*l_235) = p_75;
                    }
                    else
                    {
                        int32_t *l_236 = &g_85;
                        int32_t *l_237 = &l_228;
                        int32_t *l_238 = &l_224[0];
                        int32_t *l_239[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_239[i] = &l_230;
                        ++g_249;
                        if ((*g_83))
                            continue;
                    }
                    (*l_252) = &g_210;
                }
                for (l_91 = 17; (l_91 == 7); --l_91)
                {
                    int64_t *l_275 = &g_63;
                    int32_t l_287[6][5] = {{(-1L),1L,(-1L),(-10L),1L},{(-1L),(-6L),1L,1L,(-6L)},{(-6L),1L,(-1L),1L,0x47C12E57L},{0xA90C5504L,1L,1L,1L,0xD81AABCEL},{(-1L),(-6L),(-6L),(-1L),1L},{0xA90C5504L,1L,0x47C12E57L,0x957FE217L,1L}};
                    int i, j;
                    (*l_131) = (safe_add_func_uint16_t_u_u((!(safe_sub_func_uint16_t_u_u((l_188 ^ g_245), (safe_rshift_func_uint16_t_u_s(2UL, (safe_lshift_func_int8_t_s_u((-1L), 0))))))), (safe_sub_func_uint16_t_u_u(1UL, 0L))));
                    if ((((0xB112714AL | ((((--(*l_128)) ^ (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u((((safe_mod_func_int64_t_s_s(((*l_275) = 0xB8B985607DF4A3FDLL), p_74)) >= ((safe_lshift_func_int16_t_s_u(l_246, 13)) || (safe_add_func_uint16_t_u_u((*p_72), 0L)))) == g_245), ((safe_div_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(3L, 4)) , (safe_div_func_int16_t_s_s((*l_131), p_74))), (-1L))) && p_71))) >= (*g_83)), 3))) , g_84) , 1L)) ^ p_71) , p_74))
                    {
                        return p_75;
                    }
                    else
                    {
                        int32_t *l_286[8] = {&l_247[6],&l_247[6],&l_105,&l_247[6],&l_247[6],&l_105,&l_247[6],&l_247[6]};
                        int i;
                        g_294++;
                        l_293 ^= (*l_153);
                    }
                }
                for (l_105 = 7; (l_105 <= 13); l_105 = safe_add_func_int8_t_s_s(l_105, 1))
                {
                    int8_t l_307 = (-8L);
                    int64_t *l_311 = &g_63;
                    int32_t l_312 = 0x24DFF55EL;
                    for (g_63 = 1; (g_63 != (-20)); g_63 = safe_sub_func_int16_t_s_s(g_63, 1))
                    {
                        return g_301;
                    }
                    l_312 |= ((*l_153) = (safe_add_func_uint8_t_u_u(255UL, (safe_rshift_func_uint8_t_u_u((g_5 < (((-1L) ^ 3L) < (l_247[6] == ((*l_311) = (((((*l_128) = ((~0UL) && ((*p_73) = l_307))) > ((+(safe_sub_func_int16_t_s_s(((l_130 != l_247[0]) <= 0x25826BE5335BF821LL), (*p_72)))) , l_247[3])) , g_173) > (*p_72)))))), l_307)))));
                    return &g_5;
                }
            }
            (*g_301) |= ((safe_div_func_uint32_t_u_u(l_315, ((*l_131) = (-9L)))) || ((l_340 = ((((safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_int8_t_s((((safe_sub_func_uint16_t_u_u((*p_73), ((safe_div_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((*l_153), (l_315 , ((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((p_71 <= (safe_lshift_func_uint8_t_u_u((l_293 || (safe_mod_func_int32_t_s_s(((&g_210 == l_335) > l_91), 0x76518F14L))), 7))), (*l_131))), (*l_131))) , g_231[0][8][1])))) , l_336), 1UL)) != 8L))) && g_173) , 0x6EL))) ^ p_71) | 9L), p_71)), g_20[0])) , l_105) , 0x4DC4D7926888C05FLL) , (void*)0)) != (void*)0));
            for (g_68 = 0; (g_68 <= 6); g_68 += 1)
            {
                return &g_5;
            }
        }
        (*g_301) ^= ((safe_div_func_int64_t_s_s((((*l_353) ^= (0xFBL && (safe_sub_func_uint8_t_u_u((+(safe_sub_func_int64_t_s_s(1L, (safe_lshift_func_uint8_t_u_s(0x97L, ((void*)0 != &g_241)))))), ((*p_73) & (safe_lshift_func_uint8_t_u_u(p_74, 4))))))) , ((safe_lshift_func_int16_t_s_u(((safe_add_func_int64_t_s_s(g_249, (((~(((*l_353) = l_293) > (*l_131))) && 2L) > g_231[3][4][1]))) , p_71), 10)) & p_74)), g_2[7][1][0])) == l_293);
        return l_359[0];
    }
    ++l_364;
    for (g_288 = 0; (g_288 <= 3); g_288 += 1)
    {
        int64_t * const **l_367 = (void*)0;
        int64_t * const l_370 = &g_371;
        int64_t * const *l_369[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int64_t * const **l_368[8] = {&l_369[5],&l_369[5],&l_369[3],&l_369[5],&l_369[5],&l_369[3],&l_369[5],&l_369[5]};
        int32_t l_378[4][8][4] = {{{3L,3L,0x83303B9FL,6L},{(-1L),0x4938FE48L,0L,0xE980E34BL},{0L,0L,6L,0L},{6L,0L,0L,0xE980E34BL},{0L,0x4938FE48L,(-1L),6L},{0x83303B9FL,3L,3L,0x83303B9FL},{0x83303B9FL,0xE980E34BL,(-1L),9L},{0L,0x83303B9FL,0L,0x50889C46L}},{{6L,2L,6L,0x50889C46L},{0L,0x83303B9FL,0L,9L},{(-1L),0xE980E34BL,0x83303B9FL,0x83303B9FL},{3L,3L,0x83303B9FL,6L},{(-1L),0x4938FE48L,0L,0xE980E34BL},{0L,0L,6L,0L},{6L,0L,0L,0xE980E34BL},{0L,0x4938FE48L,(-1L),6L}},{{0x83303B9FL,3L,3L,0x83303B9FL},{0x83303B9FL,0xE980E34BL,(-1L),9L},{0L,0x83303B9FL,0L,0x50889C46L},{6L,2L,6L,0x50889C46L},{0L,0x83303B9FL,0L,9L},{(-1L),0xE980E34BL,0x83303B9FL,0x83303B9FL},{3L,3L,0x83303B9FL,6L},{(-1L),0L,2L,0x83303B9FL}},{{(-1L),2L,0xE980E34BL,2L},{0xE980E34BL,2L,(-1L),0x83303B9FL},{2L,0L,6L,0xE980E34BL},{3L,0x50889C46L,0x50889C46L,3L},{3L,0x83303B9FL,6L,0x4938FE48L},{2L,3L,(-1L),0L},{0xE980E34BL,9L,0xE980E34BL,0L},{(-1L),3L,2L,0x4938FE48L}}};
        uint8_t ***l_381 = &l_340;
        int64_t *l_388 = (void*)0;
        int64_t **l_387 = &l_388;
        uint32_t l_397 = 0x9766D7FAL;
        int16_t l_426 = 0x5527L;
        int64_t l_427[2];
        uint8_t l_495 = 1UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_427[i] = 1L;
        (*g_301) = ((l_372 = (g_288 , (void*)0)) != ((safe_rshift_func_uint8_t_u_u(((**l_340) &= p_74), (safe_rshift_func_uint16_t_u_u(l_378[2][2][1], ((*p_73) = (((((g_290 , (safe_sub_func_uint8_t_u_u(((l_381 != &l_340) ^ (safe_unary_minus_func_int32_t_s((((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(1UL, 3UL)), l_378[1][3][3])) || 4294967295UL) >= 0x99L)))), 0x4CL))) , (void*)0) != (void*)0) >= p_71) || (-9L))))))) , l_387));
        if ((*g_301))
            continue;
        for (l_230 = 0; (l_230 <= 3); l_230 += 1)
        {
            int32_t l_392 = 0x458DFCECL;
            int32_t l_395 = 0xD9A2A01EL;
            int32_t l_401 = 0x366C52A4L;
            int32_t l_403 = 0x05599F8BL;
            int32_t l_405 = 0xBE3B2174L;
            int32_t l_406 = (-6L);
            int8_t l_410 = 0xACL;
            int32_t l_413 = 8L;
            uint16_t l_461 = 65535UL;
            uint16_t *l_462 = (void*)0;
            uint16_t *l_463 = &l_364;
            int8_t *l_464 = (void*)0;
            int8_t *l_465 = (void*)0;
            int8_t *l_466[2];
            int32_t l_478 = (-1L);
            int32_t l_479 = (-4L);
            int32_t l_480 = 0L;
            int32_t l_481 = 0xE3EDC709L;
            int32_t l_482 = 0x134EE97DL;
            int32_t l_483 = 7L;
            int32_t l_485 = 0xA47F2B78L;
            int32_t l_491[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i, j;
            for (i = 0; i < 2; i++)
                l_466[i] = &g_229;
        }
    }
    return p_75;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_20[i], "g_20[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_64[i][j][k], "g_64[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_231[i][j][k], "g_231[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_362[i][j], "g_362[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_475[i], "g_475[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_1253, "g_1253", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1335[i][j], "g_1335[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1367[i][j], "g_1367[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1454, "g_1454", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1456[i], "g_1456[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1458, "g_1458", print_hash_value);
    transparent_crc(g_1678, "g_1678", print_hash_value);
    transparent_crc(g_1911, "g_1911", print_hash_value);
    transparent_crc(g_2088, "g_2088", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_2121[i][j][k], "g_2121[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
