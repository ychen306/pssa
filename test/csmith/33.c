// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 8FF8D468
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


union U0 {
   int32_t f0;
   int32_t f1;
   int8_t f2;
   int8_t * f3;
   int32_t f4;
};


static int32_t g_4 = 0L;
static uint16_t g_18 = 0x062BL;
static int8_t g_39 = 0xE5L;
static const int8_t * const g_38 = &g_39;
static int16_t g_59 = 1L;
static int8_t g_102 = 0x77L;
static union U0 g_103 = {-4L};
static uint16_t g_116 = 65534UL;
static int8_t **g_146 = (void*)0;
static uint8_t g_154 = 0UL;
static int16_t g_164 = 0x8C78L;
static int16_t g_166 = 0x2124L;
static int32_t g_167 = 0xFF7C82FEL;
static uint16_t *g_172 = (void*)0;
static uint16_t **g_171 = &g_172;
static const int8_t *g_177[1] = {&g_103.f2};
static const int8_t **g_176 = &g_177[0];
static uint64_t g_183 = 1UL;
static int8_t g_217 = 0x10L;
static uint16_t g_222 = 0x7E88L;
static uint64_t g_248 = 0xFE363783EF79E816LL;
static uint16_t g_255 = 6UL;
static uint32_t g_270 = 1UL;
static uint32_t g_272 = 0x31770691L;
static int32_t *g_274 = &g_103.f4;
static int8_t g_292 = 1L;
static int32_t g_324 = 0x69C72776L;
static uint8_t *g_325[3][7][7] = {{{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_154,&g_154,(void*)0,&g_154,&g_154,&g_154,&g_154},{&g_154,(void*)0,&g_154,(void*)0,&g_154,&g_154,(void*)0},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,(void*)0,&g_154,(void*)0,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154,&g_154,(void*)0,&g_154}},{{&g_154,&g_154,(void*)0,(void*)0,&g_154,&g_154,&g_154},{&g_154,&g_154,(void*)0,(void*)0,&g_154,(void*)0,(void*)0},{(void*)0,(void*)0,&g_154,&g_154,&g_154,(void*)0,&g_154},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{(void*)0,&g_154,&g_154,&g_154,&g_154,(void*)0,&g_154},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154,&g_154}},{{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{(void*)0,&g_154,&g_154,&g_154,(void*)0,(void*)0,&g_154},{(void*)0,&g_154,(void*)0,(void*)0,&g_154,&g_154,&g_154},{&g_154,&g_154,(void*)0,(void*)0,&g_154,&g_154,&g_154},{(void*)0,&g_154,&g_154,(void*)0,&g_154,&g_154,&g_154},{&g_154,(void*)0,(void*)0,&g_154,(void*)0,(void*)0,&g_154},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154,&g_154}}};
static int32_t g_342 = 0xD263616BL;
static int32_t g_356 = 0xE71CE679L;
static int8_t g_358 = 3L;
static uint8_t g_359[7] = {0x40L,0x40L,0x4BL,0x40L,0x40L,0x4BL,0x40L};
static int64_t g_402 = 1L;
static uint32_t g_403 = 0UL;
static int32_t *g_406 = &g_103.f4;
static uint8_t **g_421 = &g_325[1][0][0];
static uint8_t ***g_420[9] = {&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,&g_421};
static int64_t g_426 = 0x8C07B383B7C05E40LL;
static int8_t g_430 = (-1L);
static uint32_t g_562[5] = {0xDD40EE0FL,0xDD40EE0FL,0xDD40EE0FL,0xDD40EE0FL,0xDD40EE0FL};
static uint64_t g_590 = 1UL;
static uint8_t g_604[2][9] = {{0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL,0x9DL}};
static uint32_t g_626 = 0xE3D868D9L;
static int32_t g_662 = 0xDE9C82EBL;
static const uint64_t *g_684 = &g_183;
static const uint64_t **g_683 = &g_684;
static uint32_t g_728 = 5UL;
static int32_t g_773 = (-1L);
static int16_t g_774 = 1L;
static uint32_t g_776 = 4294967291UL;
static uint8_t g_802 = 0x22L;
static uint32_t g_806 = 0x097B0A34L;
static int32_t g_864 = 0x651B043CL;
static int32_t g_904 = 0x41028687L;
static int64_t g_905 = 1L;
static int8_t g_908 = 0x55L;
static int32_t g_909 = 8L;
static uint16_t g_912 = 65527UL;
static int64_t g_925 = 0xBC3AA92B4D469B45LL;
static uint16_t g_926[2] = {65535UL,65535UL};
static uint8_t *** const *g_1003[10] = {&g_420[8],&g_420[5],&g_420[8],&g_420[5],&g_420[8],&g_420[5],&g_420[8],&g_420[5],&g_420[8],&g_420[5]};
static int32_t g_1004[4] = {0xB01DBCB4L,0xB01DBCB4L,0xB01DBCB4L,0xB01DBCB4L};
static int16_t *g_1018[8][4] = {{&g_166,(void*)0,&g_774,&g_166},{&g_774,&g_59,&g_774,&g_774},{&g_774,&g_59,&g_166,&g_166},{&g_59,(void*)0,(void*)0,&g_59},{&g_774,&g_166,(void*)0,&g_774},{&g_59,&g_774,&g_166,&g_774},{&g_774,(void*)0,&g_774,&g_774},{&g_774,&g_774,&g_774,&g_774}};
static int32_t g_1029 = (-1L);
static int32_t **g_1031 = (void*)0;
static int32_t *** const g_1030 = &g_1031;
static uint8_t ***g_1037 = &g_421;
static uint32_t g_1056 = 0x236B53F8L;
static int16_t *g_1076 = &g_164;
static uint8_t g_1087 = 0x71L;
static int64_t g_1125 = (-6L);
static int32_t g_1132[2] = {1L,1L};
static union U0 *g_1166 = (void*)0;
static union U0 ** const g_1165 = &g_1166;
static uint64_t ****g_1172 = (void*)0;
static int64_t ***g_1255 = (void*)0;
static int8_t *** const g_1314 = &g_146;
static int8_t *** const *g_1313[1][6] = {{&g_1314,&g_1314,&g_1314,&g_1314,&g_1314,&g_1314}};
static int64_t g_1330 = 0x7866B45BDB87E2A0LL;
static const int8_t ***g_1353 = &g_176;
static const int8_t **** const g_1352 = &g_1353;
static const int8_t **** const *g_1351 = &g_1352;
static const int8_t **** const g_1355[1] = {(void*)0};
static const int8_t **** const *g_1354 = &g_1355[0];
static int8_t ***g_1438 = (void*)0;
static int8_t ****g_1437 = &g_1438;
static uint32_t *g_1446 = &g_728;
static int8_t g_1508 = 0L;
static int8_t * const g_1507 = &g_1508;
static int8_t * const *g_1506[5] = {&g_1507,&g_1507,&g_1507,&g_1507,&g_1507};
static uint64_t g_1523 = 0UL;
static uint32_t *g_1560 = (void*)0;
static uint32_t **g_1559 = &g_1560;
static int16_t **g_1570[9][7] = {{(void*)0,(void*)0,(void*)0,&g_1018[2][3],(void*)0,(void*)0,(void*)0},{&g_1018[2][3],&g_1018[4][2],&g_1076,(void*)0,(void*)0,&g_1076,&g_1018[4][2]},{&g_1076,(void*)0,&g_1076,(void*)0,&g_1076,(void*)0,&g_1076},{(void*)0,(void*)0,&g_1076,&g_1018[4][2],&g_1018[2][3],&g_1018[2][3],&g_1018[4][2]},{(void*)0,&g_1018[2][3],(void*)0,(void*)0,(void*)0,&g_1018[2][3],(void*)0},{(void*)0,&g_1018[4][2],&g_1018[4][2],(void*)0,&g_1018[2][3],&g_1076,&g_1076},{&g_1076,&g_1018[2][3],&g_1076,&g_1018[2][3],&g_1076,&g_1018[2][3],&g_1076},{&g_1018[2][3],(void*)0,&g_1018[4][2],&g_1018[4][2],(void*)0,&g_1018[2][3],&g_1076},{(void*)0,(void*)0,(void*)0,&g_1018[2][3],(void*)0,(void*)0,(void*)0}};
static int16_t ** const *g_1569 = &g_1570[8][1];
static uint64_t *g_1670[5][5][10] = {{{&g_1523,(void*)0,(void*)0,&g_1523,&g_248,&g_1523,(void*)0,(void*)0,&g_1523,&g_248},{&g_1523,(void*)0,(void*)0,&g_1523,&g_248,&g_1523,(void*)0,(void*)0,&g_1523,&g_248},{&g_1523,(void*)0,(void*)0,&g_1523,&g_248,&g_1523,(void*)0,(void*)0,&g_1523,&g_248},{&g_1523,(void*)0,(void*)0,&g_1523,&g_248,&g_1523,(void*)0,(void*)0,&g_1523,&g_248},{&g_1523,(void*)0,(void*)0,&g_1523,&g_248,&g_1523,(void*)0,(void*)0,&g_1523,&g_248}},{{&g_1523,(void*)0,(void*)0,&g_1523,&g_248,&g_1523,(void*)0,(void*)0,&g_1523,&g_248},{&g_1523,(void*)0,(void*)0,&g_1523,&g_248,&g_1523,(void*)0,(void*)0,&g_1523,&g_248},{&g_1523,(void*)0,(void*)0,&g_1523,&g_248,&g_1523,(void*)0,(void*)0,&g_1523,&g_248},{&g_1523,(void*)0,(void*)0,&g_1523,&g_248,&g_1523,(void*)0,(void*)0,&g_1523,&g_248},{&g_1523,(void*)0,(void*)0,&g_1523,&g_248,&g_1523,(void*)0,(void*)0,&g_1523,&g_248}},{{&g_1523,(void*)0,(void*)0,&g_1523,&g_248,&g_1523,(void*)0,(void*)0,&g_1523,&g_248},{&g_1523,(void*)0,(void*)0,&g_1523,&g_248,&g_248,&g_1523,&g_1523,&g_248,&g_1523},{&g_248,&g_1523,&g_1523,&g_248,&g_1523,&g_248,&g_1523,&g_1523,&g_248,&g_1523},{&g_248,&g_1523,&g_1523,&g_248,&g_1523,&g_248,&g_1523,&g_1523,&g_248,&g_1523},{&g_248,&g_1523,&g_1523,&g_248,&g_1523,&g_248,&g_1523,&g_1523,&g_248,&g_1523}},{{&g_248,&g_1523,&g_1523,&g_248,&g_1523,&g_248,&g_1523,&g_1523,&g_248,&g_1523},{&g_248,&g_1523,&g_1523,&g_248,&g_1523,&g_248,&g_1523,&g_1523,&g_248,&g_1523},{&g_248,&g_1523,&g_1523,&g_248,&g_1523,&g_248,&g_1523,&g_1523,&g_248,&g_1523},{&g_248,&g_1523,&g_1523,&g_248,&g_1523,&g_248,&g_1523,&g_1523,&g_248,&g_1523},{&g_248,&g_1523,&g_1523,&g_248,&g_1523,&g_248,&g_1523,&g_1523,&g_248,&g_1523}},{{&g_248,&g_1523,&g_1523,&g_248,&g_1523,&g_248,&g_1523,&g_1523,&g_248,&g_1523},{&g_248,&g_1523,&g_1523,&g_248,&g_1523,&g_248,&g_1523,&g_1523,&g_248,&g_1523},{&g_248,&g_1523,&g_1523,&g_248,&g_1523,&g_248,&g_1523,&g_1523,&g_248,&g_1523},{&g_248,&g_1523,&g_1523,&g_248,&g_1523,&g_248,&g_1523,&g_1523,&g_248,&g_1523},{&g_248,&g_1523,&g_1523,&g_248,&g_1523,&g_248,&g_1523,&g_1523,&g_248,&g_1523}}};
static uint64_t ** const g_1669 = &g_1670[4][1][3];
static uint64_t ** const *g_1668 = &g_1669;
static uint64_t ** const **g_1667[9] = {&g_1668,&g_1668,&g_1668,&g_1668,&g_1668,&g_1668,&g_1668,&g_1668,&g_1668};
static uint64_t **g_1706 = &g_1670[1][3][3];
static const uint16_t g_1790 = 65535UL;
static uint16_t * const *g_1819 = &g_172;
static uint16_t * const **g_1818 = &g_1819;
static uint8_t g_1821 = 0x72L;
static uint8_t ****g_1852[6] = {&g_420[8],&g_420[8],&g_420[8],&g_420[8],&g_420[8],&g_420[8]};
static uint8_t *****g_1851 = &g_1852[0];
static const int16_t **g_1868[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static const int16_t g_1873 = 0x01D1L;
static const int16_t *g_1875 = (void*)0;
static const int16_t **g_1874 = &g_1875;
static uint32_t g_1924 = 0x026AF7B3L;
static const union U0 g_1941 = {0xDEA6D15DL};
static int8_t g_2019[4][10] = {{0x2AL,6L,0x2AL,0x2AL,6L,0x2AL,0x2AL,6L,0x2AL,0x2AL},{6L,6L,0xF7L,6L,6L,0xF7L,6L,6L,0xF7L,6L},{6L,0x2AL,0x2AL,6L,0x2AL,0x2AL,6L,0x2AL,0x2AL,6L},{0x2AL,6L,0x2AL,0x2AL,6L,0x2AL,0xF7L,0x2AL,0xF7L,0xF7L}};
static int16_t g_2021 = (-2L);
static int8_t g_2027[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint16_t *g_2057 = &g_18;
static uint64_t g_2088 = 18446744073709551606UL;
static uint16_t g_2142 = 0UL;
static uint16_t ***g_2209 = (void*)0;
static uint8_t ***** const g_2291 = &g_1852[0];
static uint32_t g_2486 = 0x2239B40AL;
static int16_t ** const **g_2513 = &g_1569;
static const uint64_t g_2561 = 9UL;
static int64_t g_2605 = 0x6B4E31191B3C2D28LL;
static uint32_t g_2646[4][2][1] = {{{0x63EAA96FL},{0x3D7B1F63L}},{{0x3D7B1F63L},{0x63EAA96FL}},{{0x3D7B1F63L},{0x3D7B1F63L}},{{0x63EAA96FL},{0x3D7B1F63L}}};
static const uint32_t g_2667 = 2UL;
static int32_t g_2976[10][1] = {{0xA956D3A4L},{1L},{0x6F531477L},{1L},{0xA956D3A4L},{0xA956D3A4L},{1L},{0x6F531477L},{1L},{0xA956D3A4L}};
static const uint16_t ***g_2999 = (void*)0;
static const uint16_t ****g_2998[2] = {&g_2999,&g_2999};
static uint32_t g_3056 = 0xD1DDF05AL;
static int32_t ****g_3080 = (void*)0;
static int32_t *****g_3079 = &g_3080;
static const uint16_t g_3086 = 0x8D86L;
static int16_t g_3121 = (-6L);
static const int8_t ** const **g_3136 = (void*)0;
static const int8_t ** const ***g_3135 = &g_3136;
static int8_t *****g_3410 = &g_1437;
static int8_t *****g_3411 = &g_1437;
static int32_t g_3476 = 0x48BA0724L;
static uint16_t ****g_3877 = &g_2209;
static uint16_t *****g_3876 = &g_3877;
static uint16_t *****g_3878[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static const uint32_t *g_3886 = &g_2646[0][1][0];
static const uint32_t **g_3885 = &g_3886;
static const uint32_t ***g_3884 = &g_3885;
static const uint32_t ****g_3883[6][2] = {{(void*)0,(void*)0},{&g_3884,(void*)0},{(void*)0,&g_3884},{(void*)0,(void*)0},{&g_3884,(void*)0},{(void*)0,&g_3884}};
static int16_t g_3951 = (-2L);



static int32_t func_1(void);
static int32_t * func_5(int8_t p_6, union U0 p_7, int16_t p_8);
static int8_t func_9(int32_t p_10, uint64_t p_11, int32_t * p_12, int16_t p_13, uint8_t p_14);
static int64_t func_27(uint64_t p_28);
static int64_t func_33(const int8_t * const p_34, uint32_t p_35, int8_t * p_36, int8_t p_37);
static int8_t func_40(uint16_t p_41, uint32_t p_42, union U0 p_43, int8_t p_44);
static int8_t func_51(int32_t p_52);
static int64_t func_68(int8_t p_69, uint8_t p_70, int32_t * p_71, int64_t p_72);
static uint16_t func_79(const int32_t * p_80);
static int8_t ** func_82(int8_t * p_83, uint32_t p_84);
# 193 "<stdin>"
static int32_t func_1(void)
{
    int8_t l_2 = 0x89L;
    int32_t *l_3 = &g_4;
    uint16_t *l_17 = &g_18;
    int32_t l_3997[7] = {(-2L),(-2L),2L,(-2L),(-2L),2L,(-2L)};
    int32_t **l_4068[5][6][8] = {{{(void*)0,&g_406,(void*)0,&g_274,(void*)0,(void*)0,&g_406,&g_274},{&g_406,&g_274,&l_3,(void*)0,&g_406,(void*)0,(void*)0,&g_406},{&g_406,&g_274,&g_274,&l_3,(void*)0,(void*)0,&l_3,(void*)0},{(void*)0,&g_274,(void*)0,&g_274,(void*)0,&g_274,(void*)0,(void*)0},{(void*)0,&g_274,(void*)0,&g_274,&l_3,&g_406,&g_406,(void*)0},{&l_3,(void*)0,&g_274,&g_274,&g_406,&g_274,&g_274,(void*)0}},{{&g_406,&g_406,&g_406,&l_3,&l_3,&g_274,&g_274,&g_406},{&g_406,(void*)0,&g_274,(void*)0,&g_406,(void*)0,&g_274,&g_274},{&g_274,(void*)0,&g_406,&g_274,(void*)0,&g_406,&g_274,(void*)0},{(void*)0,&g_406,&g_274,(void*)0,(void*)0,&l_3,&g_406,&g_274},{&g_274,(void*)0,(void*)0,&g_406,&g_274,&l_3,(void*)0,&g_274},{&l_3,&g_406,(void*)0,&g_274,(void*)0,&g_406,&l_3,&g_274}},{{(void*)0,(void*)0,&g_274,&g_274,(void*)0,(void*)0,(void*)0,&g_274},{&g_274,(void*)0,&l_3,&g_274,(void*)0,&g_274,&g_406,&g_274},{(void*)0,&g_406,(void*)0,&g_274,(void*)0,&g_274,(void*)0,&g_274},{&l_3,(void*)0,&g_274,&g_406,&g_274,&g_406,&l_3,(void*)0},{&g_274,&g_274,(void*)0,&g_406,&l_3,(void*)0,(void*)0,(void*)0},{&g_274,&g_274,&g_274,&g_274,&g_274,&g_406,&g_274,(void*)0}},{{&g_274,(void*)0,&l_3,(void*)0,&l_3,(void*)0,(void*)0,&g_274},{&g_274,&g_274,&l_3,(void*)0,&l_3,(void*)0,&g_274,(void*)0},{&l_3,&l_3,&g_274,(void*)0,&g_406,&g_406,(void*)0,&g_274},{&g_274,&g_274,(void*)0,&l_3,&g_406,(void*)0,(void*)0,(void*)0},{(void*)0,&g_274,&g_274,(void*)0,(void*)0,&g_406,(void*)0,(void*)0},{&l_3,&l_3,&l_3,&g_274,(void*)0,(void*)0,&l_3,&g_274}},{{&g_406,&g_274,&g_274,&g_274,&g_274,(void*)0,(void*)0,&g_274},{&g_406,(void*)0,(void*)0,&g_406,(void*)0,&g_406,&g_274,(void*)0},{&l_3,&g_274,&g_274,&g_274,(void*)0,(void*)0,&g_406,&g_274},{(void*)0,(void*)0,(void*)0,(void*)0,&g_406,&g_274,&g_274,&g_274},{&g_274,(void*)0,(void*)0,&g_274,&g_406,&g_274,(void*)0,(void*)0},{&l_3,(void*)0,&g_406,&g_406,&l_3,&g_274,(void*)0,&g_274}}};
    int i, j, k;
    (*l_3) = l_2;
    g_274 = func_5(func_9(((*l_3) ^ (safe_sub_func_uint16_t_u_u(((*l_17) = (*l_3)), 0x0CD9L))), (*l_3), &g_4, g_4, g_4), g_1941, l_3997[2]);
    return (*g_274);
}







static int32_t * func_5(int8_t p_6, union U0 p_7, int16_t p_8)
{
    const int64_t l_4001 = 1L;
    int32_t l_4035 = 0L;
    int32_t l_4037[10] = {0x2407BC8CL,0L,0L,0x2407BC8CL,0x749C74D0L,0x2407BC8CL,0L,0L,0x2407BC8CL,0x749C74D0L};
    int8_t l_4038 = 1L;
    uint32_t ***l_4054 = &g_1559;
    uint32_t **** const l_4053 = &l_4054;
    uint16_t **l_4059 = &g_172;
    int64_t l_4060 = (-1L);
    uint8_t ***l_4062[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    const uint16_t l_4065[9][2][6] = {{{0x1BEBL,0x0AD1L,0xB41CL,0x0AD1L,0x1BEBL,0UL},{0xF90DL,0UL,0x8AD4L,0x1BEBL,0x2859L,1UL}},{{0x912FL,0x93BAL,0x2859L,0UL,1UL,1UL},{0UL,0x8AD4L,0x8AD4L,0UL,9UL,0UL}},{{1UL,0x503DL,0xB41CL,3UL,0x0AD1L,0x2859L},{0xB41CL,0x912FL,0xC325L,0x93BAL,0x0AD1L,0x93BAL}},{{0x9C26L,0x503DL,0x9C26L,65535UL,9UL,0x912FL},{0UL,0x8AD4L,0x1BEBL,0x2859L,1UL,9UL}},{{3UL,0x93BAL,65535UL,0x2859L,0x2859L,65535UL},{0UL,0UL,0x503DL,65535UL,0x1BEBL,0x9C26L}},{{0x9C26L,0x0AD1L,0UL,0x93BAL,0x8AD4L,0x93BAL},{3UL,9UL,0xB41CL,0UL,0xB41CL,9UL}},{{65535UL,0UL,0x93BAL,1UL,0x8AD4L,0xF90DL},{1UL,0x8AD4L,0xF90DL,0xB41CL,0x2859L,0x503DL}},{{0x0AD1L,0x8AD4L,0x9C26L,0x9C26L,0x8AD4L,0x0AD1L},{0x8AD4L,0UL,9UL,0UL,0xB41CL,0x912FL}},{{0x9C26L,9UL,0x2859L,3UL,0xC325L,0x1BEBL},{0x9C26L,0UL,3UL,0UL,0x9C26L,0xB41CL}}};
    int i, j, k;
    for (g_2486 = 0; (g_2486 <= 1); g_2486 += 1)
    {
        uint32_t l_3998 = 18446744073709551615UL;
        int32_t l_4029 = 1L;
        int32_t l_4039 = 0xBEEFD3C7L;
        int32_t l_4042 = (-1L);
        int32_t l_4043[1][1];
        uint32_t l_4046 = 0UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_4043[i][j] = 0xD88FA7AFL;
        }
        if (((--l_3998) , (l_4001 >= (+(((safe_div_func_int16_t_s_s((0x542AE29BE3808160LL && g_342), (safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(0x04FC31EDL, (-10L))), ((p_7.f2 < l_4001) , 0xC528L))))) , g_1125) , p_7.f4)))))
        {
            int32_t *l_4009 = &g_1004[0];
            return l_4009;
        }
        else
        {
            int32_t l_4014 = 1L;
            int32_t *l_4034[2];
            int i;
            for (i = 0; i < 2; i++)
                l_4034[i] = &g_1004[3];
            l_4035 = (safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(l_4014, ((p_8 | ((safe_lshift_func_uint16_t_u_u((((*g_274) = (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(l_4001, (safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((l_4029 ^= 0x4DL), 0)) , (0x7487BDD6L >= ((l_4029 |= l_4001) != (0UL < p_6)))), (((safe_rshift_func_int8_t_s_u(((*g_1507) = 1L), l_4001)) , 0x42L) || p_8))), p_7.f2)))) || 1L) || l_4014), l_4001)), 0))) , 65533UL), 5)) , l_4014)) && 0L))), 6));
            if (p_6)
            {
                int32_t **l_4036 = &g_406;
                (*l_4036) = &l_4035;
            }
            else
            {
                int64_t l_4040 = 0x635D8B2067131131LL;
                int32_t l_4041 = (-10L);
                int32_t l_4044 = 0xF4E38CFCL;
                int32_t l_4045 = (-1L);
                ++l_4046;
                if (p_7.f0)
                    continue;
            }
            (*g_274) |= l_4043[0][0];
            return l_4034[0];
        }
    }
    if (((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((l_4037[1] = l_4038) , ((((*g_1507) &= l_4038) == (0xACL <= (l_4053 == (void*)0))) , (l_4001 || ((((g_402 && (((safe_rshift_func_int16_t_s_s(l_4038, 9)) , ((safe_add_func_uint16_t_u_u(p_7.f0, p_7.f4)) , l_4059)) == (*g_1818))) , (void*)0) == (*g_3411)) || p_7.f0)))) && p_7.f4), 4)), l_4035)) & 0x2B58EE3EL))
    {
        int16_t l_4061[9][7] = {{1L,0x2D3DL,0x10CBL,0x951EL,0xAFC6L,(-5L),5L},{(-10L),0x02A4L,0x951EL,0x951EL,0x02A4L,(-10L),0L},{0x4C07L,(-10L),2L,8L,1L,0x10CBL,(-1L)},{8L,2L,(-10L),(-5L),(-9L),0xAFC6L,0xD990L},{(-1L),(-10L),3L,0xD990L,0x10CBL,0x92C9L,2L},{(-10L),0x02A4L,2L,3L,1L,3L,2L},{0x2D3DL,0x2D3DL,8L,5L,2L,4L,0xD990L},{0L,3L,0xAFC6L,(-10L),2L,0x4C07L,(-1L)},{5L,4L,0x63CCL,(-9L),2L,2L,0L}};
        int32_t *l_4064 = &g_4;
        int i, j;
        (*g_406) = l_4060;
        if ((l_4001 , (l_4061[7][4] | ((void*)0 == l_4062[1]))))
        {
            int32_t *l_4063 = &g_3476;
            return l_4063;
        }
        else
        {
            return l_4064;
        }
    }
    else
    {
        int8_t l_4066 = 1L;
        uint8_t ****l_4067 = (void*)0;
        l_4066 = l_4065[4][1][2];
        (*g_2291) = l_4067;
    }
    return &g_1132[1];
}







static int8_t func_9(int32_t p_10, uint64_t p_11, int32_t * p_12, int16_t p_13, uint8_t p_14)
{
    int8_t *l_1657 = &g_358;
    int32_t l_2613 = 0x79D004C0L;
    uint64_t *l_2642 = &g_1523;
    uint32_t l_2647 = 0x98AF836DL;
    int32_t *l_2648 = (void*)0;
    uint32_t **l_2668 = &g_1560;
    uint64_t l_2689[10][1];
    union U0 l_2715 = {2L};
    uint32_t **l_2768[6] = {&g_1446,&g_1446,&g_1446,&g_1446,&g_1446,&g_1446};
    int16_t **l_2770 = &g_1076;
    int32_t l_2780 = (-1L);
    const int16_t **l_2781 = &g_1875;
    int32_t l_2828[7][1][2] = {{{1L,0L}},{{(-4L),(-7L)}},{{(-7L),(-4L)}},{{0L,1L}},{{0L,(-4L)}},{{(-7L),(-7L)}},{{(-4L),0L}}};
    int8_t l_2851 = (-7L);
    const uint16_t l_2903 = 1UL;
    int16_t l_2912 = (-6L);
    uint64_t l_3029 = 0x5A7C87E8C1D81E35LL;
    int32_t l_3096 = 0xA5D0FC89L;
    const int8_t ** const *l_3134 = (void*)0;
    const int8_t ** const **l_3133 = &l_3134;
    const int8_t ** const ***l_3132 = &l_3133;
    int8_t l_3209 = 0x8FL;
    int32_t l_3210 = 0x7A7847BEL;
    uint32_t l_3221[4];
    uint32_t l_3228 = 0x464121C2L;
    const uint16_t ****l_3338 = &g_2999;
    int8_t l_3341 = (-8L);
    uint64_t **l_3486 = &l_2642;
    uint32_t l_3560 = 0x36BCED42L;
    int64_t *l_3609 = &g_402;
    int64_t **l_3608[7][2] = {{&l_3609,&l_3609},{(void*)0,&l_3609},{&l_3609,(void*)0},{&l_3609,&l_3609},{(void*)0,&l_3609},{&l_3609,(void*)0},{&l_3609,&l_3609}};
    int32_t *l_3668 = &l_3210;
    int32_t ***l_3794 = &g_1031;
    uint32_t l_3858 = 0x1D3A55C0L;
    uint8_t *****l_3880[7] = {&g_1852[0],&g_1852[3],&g_1852[0],&g_1852[0],&g_1852[3],&g_1852[0],&g_1852[0]};
    int32_t l_3940[8];
    uint16_t **l_3963 = &g_172;
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
            l_2689[i][j] = 18446744073709551615UL;
    }
    for (i = 0; i < 4; i++)
        l_3221[i] = 0xB074B25BL;
    for (i = 0; i < 8; i++)
        l_3940[i] = 0x5559A480L;
    return p_14;
}







static int64_t func_27(uint64_t p_28)
{
    int32_t l_2610 = 0L;
    l_2610 = p_28;
    return l_2610;
}







static int64_t func_33(const int8_t * const p_34, uint32_t p_35, int8_t * p_36, int8_t p_37)
{
    uint32_t l_1660[1][2][9] = {{{0x436D16B4L,0x436D16B4L,1UL,0x436D16B4L,0x436D16B4L,1UL,0x436D16B4L,0x436D16B4L,1UL},{0x436D16B4L,0x436D16B4L,1UL,0x436D16B4L,0x436D16B4L,1UL,0x436D16B4L,0x436D16B4L,1UL}}};
    int8_t ***l_1663 = &g_146;
    uint64_t ****l_1666 = (void*)0;
    uint64_t ** const **l_1671 = &g_1668;
    int64_t *l_1672 = &g_1330;
    int64_t l_1673 = 0L;
    int32_t l_1676 = 0xCFD52A2BL;
    int32_t l_1679 = 0xEF17DB98L;
    int32_t l_1680 = 0x13414D24L;
    int32_t l_1681 = (-1L);
    int32_t l_1682[2];
    uint32_t l_1684 = 0x604C80B5L;
    uint32_t * const *l_1687 = &g_1560;
    union U0 l_1715 = {-1L};
    union U0 l_1718 = {-2L};
    int16_t l_1749 = 1L;
    int16_t **l_1756 = &g_1076;
    uint16_t *** const l_1761 = &g_171;
    const uint16_t ***l_1786 = (void*)0;
    int16_t l_1807 = 0x679EL;
    int32_t l_1810[2];
    uint16_t l_1811 = 0x76B9L;
    int64_t l_1814 = 0xAF421D375C56A16ELL;
    uint8_t *****l_1853[8][9][3] = {{{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]}},{{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]}},{{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]}},{{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]}},{{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]}},{{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]}},{{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]}},{{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]},{&g_1852[3],&g_1852[0],&g_1852[3]},{&g_1852[0],&g_1852[0],&g_1852[0]}}};
    uint32_t l_1900 = 18446744073709551609UL;
    int32_t **l_1932 = &g_406;
    const union U0 *l_1940 = &g_1941;
    const union U0 **l_1939 = &l_1940;
    uint8_t l_1990 = 4UL;
    int32_t l_2014 = 0x69210764L;
    int64_t l_2030 = 0xE9DDD3C74BF9035ALL;
    int16_t l_2031 = 1L;
    uint32_t l_2089 = 0x59870522L;
    const uint8_t l_2123 = 0UL;
    uint32_t l_2126 = 0x08699B1FL;
    int8_t *****l_2328 = &g_1437;
    uint32_t ** const l_2351 = &g_1446;
    int32_t l_2352 = (-10L);
    int32_t l_2386[9] = {0x15F77FB9L,(-4L),0x15F77FB9L,(-4L),0x15F77FB9L,(-4L),0x15F77FB9L,(-4L),0x15F77FB9L};
    uint32_t l_2396 = 0x3E5EB5CEL;
    int16_t l_2441 = 0x5DDCL;
    uint16_t l_2455[7] = {0x1280L,0x1280L,0x1280L,0x1280L,0x1280L,0x1280L,0x1280L};
    int8_t l_2575 = 0x53L;
    uint8_t l_2606 = 0x52L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1682[i] = 6L;
    for (i = 0; i < 2; i++)
        l_1810[i] = 0xCB53539EL;
    if (((((safe_sub_func_uint32_t_u_u(l_1660[0][0][1], ((l_1676 = (((safe_sub_func_int16_t_s_s((((*g_1437) = l_1663) == l_1663), ((**g_683) && (safe_add_func_int64_t_s_s((l_1666 != (l_1671 = g_1667[6])), (((*l_1672) ^= l_1660[0][0][3]) >= (((((l_1673 , (safe_div_func_uint64_t_u_u(l_1660[0][1][6], l_1673))) , &l_1666) == &l_1666) != p_37) > l_1660[0][0][5]))))))) , l_1660[0][0][1]) < 0x624D3979L)) && (-1L)))) < 4294967295UL) & l_1660[0][1][2]) && p_35))
    {
        int32_t *l_1677 = &g_324;
        int32_t *l_1678[10][3][1] = {{{(void*)0},{(void*)0},{&g_1132[0]}},{{(void*)0},{(void*)0},{&g_1029}},{{&g_4},{&g_324},{(void*)0}},{{&g_4},{(void*)0},{&g_324}},{{&g_4},{&g_1029},{(void*)0}},{{(void*)0},{&g_1132[0]},{(void*)0}},{{(void*)0},{&g_1029},{&g_4}},{{&g_324},{(void*)0},{&g_4}},{{(void*)0},{&g_324},{&g_4}},{{&g_1029},{(void*)0},{(void*)0}}};
        int16_t l_1683[9] = {0x276FL,0x92B0L,0x276FL,0x92B0L,0x276FL,0x92B0L,0x276FL,0x92B0L,0x276FL};
        uint64_t *l_1694 = &g_248;
        uint8_t ****l_1721 = &g_1037;
        uint64_t * const **l_1728 = (void*)0;
        uint64_t * const ***l_1727 = &l_1728;
        uint64_t * const ****l_1726 = &l_1727;
        int64_t * const * const l_1764 = &l_1672;
        int64_t * const * const *l_1763 = &l_1764;
        uint32_t *l_1767 = (void*)0;
        uint16_t ***l_1791[4][8][7] = {{{&g_171,(void*)0,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,(void*)0,&g_171,&g_171,&g_171,(void*)0,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,(void*)0,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,(void*)0},{&g_171,&g_171,&g_171,&g_171,(void*)0,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,(void*)0},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171}},{{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,(void*)0,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,(void*)0,&g_171,&g_171},{&g_171,(void*)0,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,(void*)0,&g_171,&g_171,&g_171,(void*)0,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,(void*)0,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,(void*)0},{&g_171,&g_171,&g_171,&g_171,(void*)0,&g_171,&g_171}},{{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,(void*)0},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,(void*)0,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,&g_171,&g_171,(void*)0,&g_171,&g_171,&g_171},{(void*)0,&g_171,&g_171,&g_171,&g_171,(void*)0,&g_171},{&g_171,&g_171,(void*)0,&g_171,&g_171,&g_171,&g_171}},{{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,(void*)0,&g_171,(void*)0,&g_171,(void*)0,(void*)0},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{(void*)0,&g_171,(void*)0,&g_171,&g_171,&g_171,(void*)0},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,(void*)0,&g_171,&g_171,&g_171,&g_171,&g_171}}};
        int i, j, k;
        ++l_1684;
        l_1687 = (void*)0;
        for (g_1056 = 14; (g_1056 >= 48); g_1056 = safe_add_func_int16_t_s_s(g_1056, 1))
        {
            return p_37;
        }
        if (p_37)
        {
            int8_t l_1697 = 0x21L;
            uint64_t **l_1703 = (void*)0;
            uint16_t *l_1713[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_1729[3][8][3] = {{{0x30E0E945L,0x30E0E945L,0x628A7BA6L},{0L,0x4997A997L,(-1L)},{0x30E0E945L,0x8D994ED0L,0x628A7BA6L},{(-2L),0x4997A997L,0L},{0x30E0E945L,0x30E0E945L,0x628A7BA6L},{0L,0x4997A997L,(-1L)},{0x30E0E945L,0x8D994ED0L,0x628A7BA6L},{(-2L),0x4997A997L,0L}},{{0x30E0E945L,0x30E0E945L,0x628A7BA6L},{0L,0x4997A997L,(-1L)},{0x30E0E945L,0x8D994ED0L,0x628A7BA6L},{(-2L),0x4997A997L,0L},{0x30E0E945L,0x30E0E945L,0x628A7BA6L},{0L,0x4997A997L,(-1L)},{0x30E0E945L,0x8D994ED0L,0x628A7BA6L},{(-2L),0x4997A997L,0L}},{{0x30E0E945L,0x30E0E945L,0x628A7BA6L},{0L,0x4997A997L,(-1L)},{0x30E0E945L,0x8D994ED0L,0x628A7BA6L},{(-2L),0x4997A997L,0L},{0x30E0E945L,0x30E0E945L,0x628A7BA6L},{0L,0x4997A997L,(-1L)},{0x30E0E945L,0x8D994ED0L,0x628A7BA6L},{(-2L),0x4997A997L,0L}}};
            uint32_t l_1752 = 0x60CB1799L;
            const uint16_t *l_1789 = &g_1790;
            const uint16_t **l_1788[7][1][7] = {{{&l_1789,&l_1789,&l_1789,(void*)0,&l_1789,&l_1789,(void*)0}},{{(void*)0,&l_1789,&l_1789,&l_1789,&l_1789,&l_1789,(void*)0}},{{&l_1789,(void*)0,&l_1789,&l_1789,&l_1789,&l_1789,&l_1789}},{{(void*)0,&l_1789,&l_1789,&l_1789,(void*)0,&l_1789,(void*)0}},{{&l_1789,&l_1789,&l_1789,&l_1789,&l_1789,&l_1789,&l_1789}},{{&l_1789,&l_1789,&l_1789,(void*)0,&l_1789,(void*)0,&l_1789}},{{&l_1789,&l_1789,(void*)0,&l_1789,&l_1789,(void*)0,&l_1789}}};
            const uint16_t ***l_1787 = &l_1788[1][0][1];
            int i, j, k;
            (*l_1677) |= (safe_unary_minus_func_int16_t_s((0x6AB487C1L | ((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int16_t_s_u((((***l_1671) = (***l_1671)) == l_1694), 4)))) > ((*g_1507) = (safe_mul_func_int16_t_s_s(((*g_1076) |= p_35), p_35)))))));
            for (g_248 = 2; (g_248 <= 8); g_248 += 1)
            {
                uint32_t l_1698 = 0xA4295E5BL;
                uint64_t **l_1705 = &l_1694;
                uint64_t ***l_1704[4][4] = {{&l_1705,&l_1705,&l_1705,&l_1705},{(void*)0,&l_1705,&l_1703,&l_1705},{&l_1705,(void*)0,&l_1703,&l_1703},{(void*)0,(void*)0,&l_1705,&l_1703}};
                const uint16_t * const l_1730 = (void*)0;
                union U0 l_1753 = {1L};
                int16_t **l_1758 = &g_1018[2][3];
                int i, j;
                l_1698++;
                (*l_1677) |= (p_35 | (safe_add_func_uint16_t_u_u(p_37, (l_1703 == (g_1706 = (void*)0)))));
                for (g_402 = 2; (g_402 >= 0); g_402 -= 1)
                {
                    int32_t l_1714[5][4][7] = {{{0x7CDFBCD8L,0L,(-1L),0L,0xC8E70E78L,0xE49629CCL,0x39A09EDAL},{1L,0x83E1DB88L,0L,1L,0x6A8C9E12L,(-7L),0x9E620E9CL},{1L,0x6A8C9E12L,0x7A4D76BAL,0x8CC0BC35L,2L,1L,0L},{0xAA84BA98L,0xF4E94394L,0xDF26F394L,1L,(-7L),0x5ED4704FL,0L}},{{2L,(-5L),0L,9L,0L,0x0155D70AL,0x9E620E9CL},{0xB181DCCDL,0L,0xAF63624CL,0xAF63624CL,0L,0xB181DCCDL,0x39A09EDAL},{0x6A8D4D56L,(-7L),0x6A8C9E12L,0x9E620E9CL,9L,0x0FD9774DL,0xAF63624CL},{0xAF63624CL,0xDCB45A70L,0x8CC0BC35L,0L,0L,0L,1L}},{{0x83E1DB88L,(-7L),0x1F0A67BAL,0x83253C89L,0L,0x7A4D76BAL,0L},{0xF4E94394L,0L,0x83923BE3L,2L,0L,0x39A09EDAL,(-1L)},{0L,(-5L),1L,0x44AF6ED6L,0x83E1DB88L,0x3E521D73L,0L},{(-1L),0xF4E94394L,0L,0x44AF6ED6L,0x272F6DA0L,0x83E1DB88L,1L}},{{0x0155D70AL,0x6A8C9E12L,0x44AF6ED6L,2L,1L,1L,2L},{(-5L),0x83E1DB88L,(-5L),0x83253C89L,0xAF63624CL,0x44AF6ED6L,(-1L)},{0x39A09EDAL,0L,9L,0L,0x83253C89L,1L,1L},{0x83923BE3L,0xE49629CCL,2L,0x9E620E9CL,1L,0x44AF6ED6L,0x3E521D73L}},{{0x0FD9774DL,0x44AF6ED6L,9L,0xAF63624CL,9L,1L,0xF4E94394L},{0x83253C89L,0x8CC0BC35L,0x272F6DA0L,9L,1L,0x83E1DB88L,0x83923BE3L},{0L,0L,(-1L),1L,0xE49629CCL,0x3E521D73L,0x0155D70AL},{0L,0x0FD9774DL,0x3E521D73L,0x8CC0BC35L,(-1L),0x39A09EDAL,0xDCB45A70L}}};
                    union U0 *l_1716 = (void*)0;
                    union U0 *l_1717[9] = {(void*)0,&g_103,(void*)0,&g_103,(void*)0,&g_103,(void*)0,&g_103,(void*)0};
                    uint8_t ****l_1720 = &g_1037;
                    uint8_t *****l_1719 = &l_1720;
                    int32_t l_1762[7];
                    uint8_t *l_1768 = &g_359[4];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_1762[i] = 0xA328345AL;
                    l_1729[2][7][1] &= (l_1715.f4 = (safe_mul_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((void*)0 == l_1713[3]), ((*p_36) |= l_1714[1][2][5]))), 9)) , 0xE26837B17A7A913BLL) , ((l_1718 = l_1715) , ((*l_1719) = &g_420[0]))) == l_1721), ((((++g_912) && (safe_rshift_func_int16_t_s_u(((void*)0 != l_1726), 11))) | p_37) > 65528UL))));
                    if (((*g_1446) , (p_35 > p_35)))
                    {
                        l_1682[0] ^= (l_1730 == (*g_171));
                    }
                    else
                    {
                        int64_t l_1731 = (-1L);
                        int32_t **l_1732 = &g_406;
                        int16_t ***l_1757 = &g_1570[8][1];
                        if (l_1731)
                            break;
                        (*l_1732) = l_1678[1][0][0];
                        (*l_1677) = ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(((0x3C3DCA86L | p_35) == g_1087), (++g_926[1]))), ((*p_36) = (safe_add_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(l_1749, (safe_add_func_int32_t_s_s(l_1752, (l_1753 , (((*l_1757) = (((p_37 || ((void*)0 != (*l_1721))) ^ p_37) , l_1756)) == l_1758)))))), p_37)), 1L)) , 0x4EL), l_1753.f4))))), (-1L))) != p_37);
                    }
                    l_1729[2][7][1] = ((*****g_1351) && ((1L >= (((safe_sub_func_uint16_t_u_u((&g_171 != l_1761), (p_37 , l_1762[3]))) , l_1763) != g_1255)) | (65535UL > 8L)));
                    l_1714[4][0][5] &= ((g_18 = (p_35 , ((((*l_1677) , l_1758) != (*g_1569)) , (g_926[1] = ((*p_36) , (p_35 | (safe_lshift_func_uint8_t_u_u(((*l_1768) ^= (l_1767 != (void*)0)), 4)))))))) , (-7L));
                    for (g_590 = 0; (g_590 <= 0); g_590 += 1)
                    {
                        int32_t l_1792[8] = {0xD94C0435L,0xD94C0435L,0xD94C0435L,0xD94C0435L,0xD94C0435L,0xD94C0435L,0xD94C0435L,0xD94C0435L};
                        int32_t l_1793 = (-3L);
                        int i;
                        l_1793 = (((((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((+(safe_lshift_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u(((((*l_1677) = ((***l_1763) = p_35)) & ((((safe_div_func_uint8_t_u_u((0UL >= (safe_sub_func_int64_t_s_s((((*p_36) |= ((**l_1726) != (((l_1729[2][7][1] |= (safe_add_func_int8_t_s_s(l_1753.f0, ((*l_1768) = (safe_mod_func_uint32_t_u_u(((((p_35 | (((l_1714[1][2][5] = (l_1718 , ((l_1787 = l_1786) != l_1791[3][5][3]))) != (((*g_1076) = 1L) , p_35)) ^ l_1660[0][0][1])) , 0xBD2B8223L) , p_37) && p_37), 4294967295UL)))))) ^ l_1715.f4) , (void*)0))) >= p_35), 0xF02E1FA9DC081E09LL))), 251UL)) | 0x399818046CC4C3C5LL) >= l_1715.f4) , (*g_684))) > l_1753.f1), 0xFA28L)) , (void*)0) != (void*)0), l_1753.f1))) || l_1792[5]), p_35)), (*p_34))) >= p_35) , l_1762[3]) | 251UL) || (*p_36));
                    }
                }
            }
        }
        else
        {
            int32_t *l_1794[8];
            int i;
            for (i = 0; i < 8; i++)
                l_1794[i] = (void*)0;
            l_1794[7] = l_1794[7];
            for (g_222 = 11; (g_222 < 58); g_222 = safe_add_func_int16_t_s_s(g_222, 9))
            {
                int32_t **l_1797 = (void*)0;
                int32_t **l_1798[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                l_1794[7] = l_1677;
                if ((*l_1677))
                    break;
            }
        }
    }
    else
    {
        uint8_t *l_1804[1];
        int32_t l_1805 = 0x766AE2A7L;
        int32_t l_1806 = (-1L);
        int32_t l_1808[10][2][7] = {{{0x35C6062DL,1L,0x35C6062DL,9L,0x5291DD60L,9L,0x35C6062DL},{(-1L),8L,(-8L),(-1L),(-1L),(-8L),8L}},{{(-1L),9L,0x2EECD651L,1L,0x2EECD651L,9L,(-1L)},{0x2DBE8643L,(-1L),0xE9A37774L,0xE9A37774L,(-1L),0x2DBE8643L,0xE9A37774L}},{{0x5291DD60L,1L,0xC8C598DEL,1L,0x5291DD60L,(-1L),0x5291DD60L},{(-1L),0xE9A37774L,0xE9A37774L,(-1L),0x2DBE8643L,0xE9A37774L,8L}},{{0x2EECD651L,1L,0x2EECD651L,9L,(-1L),9L,0x2EECD651L},{(-1L),(-1L),(-8L),8L,(-1L),0L,8L}},{{0x5291DD60L,9L,0x35C6062DL,1L,0x35C6062DL,9L,0x5291DD60L},{0x2DBE8643L,8L,0xE9A37774L,0x2DBE8643L,(-1L),0xE9A37774L,0xE9A37774L}},{{(-1L),1L,0L,1L,(-1L),(-1L),(-1L)},{(-1L),0x2DBE8643L,0xE9A37774L,8L,0x2DBE8643L,0x2DBE8643L,8L}},{{0x35C6062DL,1L,0x35C6062DL,9L,0x5291DD60L,9L,0x35C6062DL},{(-1L),8L,(-8L),(-1L),(-1L),(-8L),8L}},{{(-1L),9L,0x2EECD651L,1L,0x2EECD651L,9L,(-1L)},{0x2DBE8643L,(-1L),0xE9A37774L,0xE9A37774L,(-1L),0x2DBE8643L,0xE9A37774L}},{{0x5291DD60L,1L,0xC8C598DEL,1L,0x5291DD60L,(-1L),0x5291DD60L},{(-1L),0xE9A37774L,0xE9A37774L,(-1L),0x2DBE8643L,0xE9A37774L,8L}},{{0x2EECD651L,1L,0x2EECD651L,9L,(-1L),9L,0x2EECD651L},{(-1L),(-1L),(-8L),8L,(-1L),0L,8L}}};
        int8_t l_1809 = 0x84L;
        uint8_t l_1815 = 0UL;
        uint16_t * const ***l_1820 = &g_1818;
        uint32_t l_1862 = 0xD05904C9L;
        int32_t **l_1931 = &g_274;
        union U0 **l_1944 = &g_1166;
        uint16_t l_2166 = 0x4163L;
        uint32_t l_2183 = 0x3E927AA8L;
        int16_t *l_2188 = &l_1749;
        int32_t l_2190 = (-7L);
        const uint8_t *l_2197 = &l_1815;
        const uint8_t **l_2196 = &l_2197;
        const uint8_t ***l_2195 = &l_2196;
        const uint8_t ****l_2194 = &l_2195;
        const int64_t l_2262[2][8] = {{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)}};
        const uint16_t l_2301 = 65532UL;
        const int16_t * const *l_2416 = (void*)0;
        const int16_t * const **l_2415[9] = {&l_2416,&l_2416,&l_2416,&l_2416,&l_2416,&l_2416,&l_2416,&l_2416,&l_2416};
        const int16_t * const *** const l_2414 = &l_2415[7];
        int8_t l_2439 = 0x1CL;
        int32_t l_2452 = 1L;
        uint64_t l_2476 = 1UL;
        int64_t l_2587 = (-8L);
        int64_t l_2600 = 0x8F0C4BB2AAA4A644LL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1804[i] = &g_359[5];
lbl_1830:
        for (g_864 = (-18); (g_864 > (-9)); g_864 = safe_add_func_uint16_t_u_u(g_864, 8))
        {
            uint16_t l_1801 = 1UL;
            if (l_1801)
                break;
        }
        if (((p_37 | ((((*p_36) = (safe_lshift_func_uint8_t_u_u((((--l_1811) != 1UL) ^ p_35), (++l_1815)))) , l_1761) == ((*l_1820) = g_1818))) | (g_1821 || (safe_rshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(l_1805, ((((safe_unary_minus_func_int64_t_s(0xBEE37DA8375527A7LL)) <= ((safe_sub_func_int32_t_s_s(((+(l_1810[1] >= p_35)) ^ l_1805), 4294967290UL)) ^ (-8L))) ^ l_1718.f4) , p_37))) , 0x4EB2L), 3)))))
        {
            int32_t *l_1842[6][3][9] = {{{(void*)0,&g_324,(void*)0,&l_1808[2][1][0],&l_1810[1],&g_1004[3],&l_1810[1],&l_1808[2][1][0],(void*)0},{&g_662,(void*)0,&g_324,(void*)0,(void*)0,(void*)0,&l_1682[1],(void*)0,&g_1029},{&l_1810[1],&l_1718.f4,&l_1718.f4,&l_1810[1],&g_324,&g_1004[3],&l_1718.f4,&g_1004[3],&l_1718.f4}},{{&l_1682[1],&g_103.f4,&g_662,(void*)0,&g_324,(void*)0,(void*)0,&l_1682[0],&g_1004[3]},{(void*)0,&g_1004[3],&g_1004[3],&g_324,&g_324,&g_1004[3],&g_1004[3],(void*)0,(void*)0},{&g_1004[3],(void*)0,&g_773,&l_1810[1],&g_1029,(void*)0,(void*)0,&l_1806,&g_662}},{{&g_324,(void*)0,(void*)0,(void*)0,&l_1718.f4,&l_1718.f4,&l_1718.f4,&l_1718.f4,(void*)0},{&l_1676,&l_1718.f4,&l_1676,(void*)0,(void*)0,&l_1715.f4,&l_1682[1],(void*)0,&g_1004[3]},{(void*)0,(void*)0,&g_324,(void*)0,(void*)0,(void*)0,&l_1718.f4,&l_1718.f4,&l_1718.f4}},{{&g_773,(void*)0,&g_1004[3],(void*)0,&g_1004[3],(void*)0,&g_773,&l_1810[1],&g_1029},{&g_1004[3],&g_1004[3],(void*)0,(void*)0,&l_1676,(void*)0,(void*)0,&g_1004[3],&g_1004[3]},{&g_662,&g_103.f4,&l_1682[1],&l_1810[1],(void*)0,&l_1715.f4,(void*)0,&l_1810[1],&l_1682[1]}},{{&l_1718.f4,&l_1718.f4,&l_1810[1],&g_324,&g_1004[3],&l_1718.f4,&g_1004[3],&l_1718.f4,&g_1004[3]},{&g_662,&l_1682[0],(void*)0,(void*)0,&l_1676,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1004[3],(void*)0,&l_1810[1],&l_1810[1],(void*)0,&g_1004[3],&l_1676,&l_1718.f4,(void*)0}},{{&g_773,(void*)0,&l_1682[1],&g_1029,&l_1676,(void*)0,&g_1029,&l_1806,&g_324},{(void*)0,&l_1810[1],(void*)0,&l_1676,&g_1004[3],&g_1004[3],&l_1676,(void*)0,&l_1810[1]},{&l_1676,&l_1806,&g_1004[3],&g_103.f4,(void*)0,(void*)0,(void*)0,&l_1682[0],&g_324}}};
            uint8_t *** const **l_1854 = &g_1003[6];
            int32_t l_1899 = 0x5CF5BBE8L;
            int32_t **l_1903 = &g_274;
            int16_t l_1951 = 6L;
            union U0 l_1980 = {-1L};
            const uint8_t l_2037 = 0x4DL;
            uint8_t l_2167 = 0x04L;
            int i, j, k;
            if (l_1673)
                goto lbl_1830;
            for (g_356 = 0; (g_356 >= 11); ++g_356)
            {
                uint32_t l_1834 = 4294967286UL;
                int32_t l_1863 = 5L;
                if (p_35)
                {
                    uint32_t *l_1833 = (void*)0;
                    const int16_t ***l_1860[3];
                    const int16_t ****l_1859 = &l_1860[0];
                    int16_t *** const l_1861 = (void*)0;
                    int32_t l_1864 = 0xB1738DCEL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1860[i] = (void*)0;
                    if (((++l_1834) , p_37))
                    {
                        int32_t **l_1837 = &g_274;
                        (*l_1837) = &l_1808[8][0][2];
                        (*l_1837) = &g_4;
                        l_1805 = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((**g_683), 0xBB06855B12386963LL)), 0x46E35FC0L));
                    }
                    else
                    {
                        g_274 = l_1842[5][0][2];
                    }
                    if ((safe_sub_func_int16_t_s_s((l_1863 = (safe_add_func_int32_t_s_s(((((safe_div_func_int16_t_s_s((((5L && (*p_34)) , &g_1818) != &g_1818), (safe_sub_func_int64_t_s_s(((*l_1672) = ((l_1853[1][2][0] = (g_1851 = (void*)0)) == l_1854)), (safe_mul_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((*g_1507) = (*p_34)), (l_1682[0] = p_35))), (((*l_1859) = (void*)0) == l_1861))))))) , 0x8BL) < l_1862) <= 1UL), 3UL))), l_1864)))
                    {
                        return p_37;
                    }
                    else
                    {
                        uint8_t l_1865 = 0xF8L;
                        ++l_1865;
                        if (l_1865)
                            continue;
                    }
                    if (p_35)
                        continue;
                    if (l_1808[7][1][2])
                        continue;
                }
                else
                {
                    const int16_t ***l_1869 = &g_1868[0][1];
                    const int16_t *l_1872[7][8][4] = {{{&g_1873,(void*)0,(void*)0,&g_1873},{(void*)0,(void*)0,&g_1873,(void*)0},{(void*)0,&g_1873,&g_1873,&g_1873},{(void*)0,(void*)0,(void*)0,&g_1873},{&g_1873,&g_1873,&g_1873,(void*)0},{&g_1873,(void*)0,(void*)0,&g_1873},{(void*)0,(void*)0,&g_1873,(void*)0},{(void*)0,&g_1873,&g_1873,&g_1873}},{{(void*)0,(void*)0,(void*)0,&g_1873},{&g_1873,&g_1873,&g_1873,(void*)0},{&g_1873,(void*)0,&g_1873,&g_1873},{(void*)0,&g_1873,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{(void*)0,(void*)0,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{&g_1873,&g_1873,&g_1873,&g_1873}},{{(void*)0,&g_1873,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{(void*)0,(void*)0,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{&g_1873,&g_1873,&g_1873,&g_1873},{(void*)0,&g_1873,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{(void*)0,(void*)0,&g_1873,&g_1873}},{{&g_1873,(void*)0,&g_1873,&g_1873},{&g_1873,&g_1873,&g_1873,&g_1873},{(void*)0,&g_1873,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{(void*)0,(void*)0,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{&g_1873,&g_1873,&g_1873,&g_1873},{(void*)0,&g_1873,&g_1873,&g_1873}},{{&g_1873,(void*)0,&g_1873,&g_1873},{(void*)0,(void*)0,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{&g_1873,&g_1873,&g_1873,&g_1873},{(void*)0,&g_1873,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{(void*)0,(void*)0,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873}},{{&g_1873,&g_1873,&g_1873,&g_1873},{(void*)0,&g_1873,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{(void*)0,(void*)0,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{&g_1873,&g_1873,&g_1873,&g_1873},{(void*)0,&g_1873,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873}},{{(void*)0,(void*)0,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{&g_1873,&g_1873,&g_1873,&g_1873},{(void*)0,&g_1873,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{(void*)0,(void*)0,&g_1873,&g_1873},{&g_1873,(void*)0,&g_1873,&g_1873},{&g_1873,&g_1873,&g_1873,&g_1873}}};
                    const int16_t **l_1871 = &l_1872[1][6][2];
                    const int16_t ***l_1870[1];
                    int32_t **l_1895 = &g_406;
                    int32_t **l_1896 = (void*)0;
                    int32_t **l_1897 = &l_1842[5][0][2];
                    uint16_t l_1898 = 0x25AAL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1870[i] = &l_1871;
                    l_1806 |= ((((*g_1569) == (g_1874 = ((*l_1869) = g_1868[0][3]))) && (safe_lshift_func_int16_t_s_s((&g_1056 == &g_806), (+(l_1900 = (l_1899 = (safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u(l_1862, (safe_lshift_func_int8_t_s_u(((p_35 , (0xE8L <= (safe_sub_func_uint16_t_u_u((((((safe_mod_func_int8_t_s_s((((((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((((((((*l_1897) = &g_773) != (p_35 , (void*)0)) ^ p_35) , p_37) , 0UL) , p_35), 9L)) & (*p_36)), 8UL)), l_1660[0][0][1])) || (-6L)) && g_255) , l_1834) > 0x7DL), 4UL)) != p_35) > l_1898) < p_35) != (*****g_1351)), p_35)))) != p_35), 3)))), p_35)))))))) < 0x5DD2569AL);
                    return p_37;
                }
                l_1806 ^= (safe_rshift_func_int16_t_s_s((l_1663 != l_1663), 11));
            }
            (*l_1903) = (void*)0;
            for (g_1087 = 0; (g_1087 != 8); g_1087 = safe_add_func_int32_t_s_s(g_1087, 8))
            {
                uint16_t *l_1912 = &l_1811;
                uint32_t *l_1923 = &g_272;
                int32_t l_1925[3];
                uint16_t *l_1926 = &g_116;
                int16_t *l_1927 = &l_1807;
                union U0 **l_1942 = &g_1166;
                union U0 l_1958 = {-1L};
                int8_t l_1979 = 0xF5L;
                int32_t l_2020[4];
                uint64_t l_2059 = 0x17CDA3D77C4E84E9LL;
                uint8_t ****l_2079 = &g_1037;
                int8_t l_2100 = 0xA8L;
                int8_t *l_2116 = (void*)0;
                int8_t **l_2115 = &l_2116;
                int i;
                for (i = 0; i < 3; i++)
                    l_1925[i] = 0xCAE102FEL;
                for (i = 0; i < 4; i++)
                    l_2020[i] = 0xAFBF0F64L;
                if ((((*l_1927) = ((*g_1076) = (safe_mul_func_uint16_t_u_u(((*l_1926) = ((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((*l_1912) = p_37), 0xC334L)), 5)) , ((p_35 || ((safe_sub_func_int64_t_s_s(((p_35 == (-10L)) >= (safe_sub_func_int16_t_s_s((g_342 , (safe_div_func_int16_t_s_s(((l_1804[0] = ((safe_mul_func_int16_t_s_s((0x4224466DD9A6363BLL == (safe_div_func_int32_t_s_s((p_35 == ((*l_1923) = p_35)), l_1862))), g_1924)) , p_36)) != p_36), l_1925[2]))), p_35))), 18446744073709551607UL)) >= p_37)) , 65533UL))), p_35)))) , l_1806))
                {
                    const union U0 *l_1938 = (void*)0;
                    const union U0 **l_1937 = &l_1938;
                    union U0 ***l_1943[1][4][4] = {{{&l_1942,&l_1942,&l_1942,(void*)0},{&l_1942,&l_1942,&l_1942,&l_1942},{&l_1942,&l_1942,&l_1942,&l_1942},{&l_1942,&l_1942,&l_1942,(void*)0}}};
                    int32_t l_1945 = 0xD64A9778L;
                    uint64_t ***l_1946 = &g_1706;
                    uint16_t l_1977 = 9UL;
                    uint32_t * const l_1991 = &l_1684;
                    uint32_t l_2007 = 0x4D1D016FL;
                    uint32_t l_2018 = 0x28355AC6L;
                    int i, j, k;
                    for (g_774 = 0; (g_774 > 16); g_774 = safe_add_func_int32_t_s_s(g_774, 5))
                    {
                        int16_t l_1930 = 0xB786L;
                        return l_1930;
                    }
                    l_1945 &= (((l_1932 = l_1931) != l_1931) == (((safe_add_func_int16_t_s_s((((p_37 , p_37) & (l_1925[2] = (safe_add_func_uint32_t_u_u((1L == (l_1718.f4 &= (l_1715.f1 < p_37))), (((l_1939 = l_1937) == (l_1944 = l_1942)) , p_35))))) , l_1680), g_1873)) , p_37) | l_1681));
                    (*l_1946) = (*g_1668);
                    if (((safe_lshift_func_int8_t_s_u((****g_1352), (l_1925[1] = p_37))) && (safe_div_func_uint8_t_u_u(l_1951, (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((((*g_1076) == (p_35 && ((*l_1926)++))) >= (l_1925[1] > (l_1958 , ((~(0x7BL != (((safe_rshift_func_uint8_t_u_u(((p_35 ^ (-1L)) <= p_35), 3)) >= p_35) || 0x3CFEL))) < p_37)))), p_35)) & 0x661A4F8EBC91D1BDLL), 3))))))
                    {
                        int64_t l_1969 = (-10L);
                        int32_t l_1976[2][6][6] = {{{0xCFC32E49L,8L,8L,0xCFC32E49L,0xE18B120DL,0L},{0xE18B120DL,0xCFC32E49L,8L,8L,0xCFC32E49L,0xE18B120DL},{0xE18B120DL,8L,0L,0xCFC32E49L,0xCFC32E49L,0L},{0xCFC32E49L,0xCFC32E49L,0L,8L,0xE18B120DL,0xE18B120DL},{0xCFC32E49L,8L,8L,0xCFC32E49L,0xE18B120DL,0L},{0xE18B120DL,0xCFC32E49L,8L,8L,0xCFC32E49L,0xE18B120DL}},{{0xE18B120DL,8L,0L,0xCFC32E49L,0xCFC32E49L,0L},{0xCFC32E49L,0xCFC32E49L,0L,8L,0xE18B120DL,0xE18B120DL},{0xCFC32E49L,8L,8L,0xCFC32E49L,0xE18B120DL,0L},{0xE18B120DL,0xCFC32E49L,8L,8L,0xCFC32E49L,0xE18B120DL},{0xE18B120DL,8L,0L,0xCFC32E49L,0xCFC32E49L,0L},{0xCFC32E49L,0xCFC32E49L,0L,8L,0xE18B120DL,0xE18B120DL}}};
                        int32_t l_1978 = (-1L);
                        int i, j, k;
                        l_1958.f4 = (((safe_div_func_uint16_t_u_u((0x2AL || ((safe_div_func_uint8_t_u_u(((*g_1507) , (safe_unary_minus_func_uint64_t_u((((*p_36) != (p_37 & l_1945)) , ((0x0260631264646240LL | ((l_1925[2] = ((((l_1945 = (p_37 > (l_1969 = ((*l_1923)--)))) || (safe_mul_func_uint8_t_u_u((l_1976[0][1][4] &= (safe_lshift_func_int16_t_s_u(((**l_1756) = (safe_sub_func_int64_t_s_s(1L, ((l_1958.f1 || l_1958.f1) < p_35)))), l_1969))), l_1969))) | 0x49L) == 1UL)) > (-1L))) ^ 65527UL))))), l_1977)) >= 246UL)), l_1978)) , p_35) & l_1979);
                        (*l_1903) = (l_1980 , &g_324);
                    }
                    else
                    {
                        const int64_t l_1989 = 0x7E44CA8DC0A2158CLL;
                        int32_t l_2017 = 8L;
                        int32_t *l_2022 = &g_342;
                        l_1676 &= (-1L);
                        g_1004[1] = (safe_lshift_func_uint8_t_u_u((0UL == ((safe_div_func_uint16_t_u_u(((3UL > l_1925[2]) && ((((safe_mod_func_uint16_t_u_u(p_35, l_1958.f1)) ^ (safe_mod_func_int64_t_s_s(l_1989, ((l_1990 ^ (&l_1862 == l_1991)) & p_35)))) < 0x205EL) > l_1945)), p_35)) <= 0UL)), 3));
                        l_1925[2] = p_37;
                        (*l_1932) = (((*l_2022) |= (((*l_1672) = ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((*p_36) &= (safe_rshift_func_uint8_t_u_s(p_35, 6))) | (p_37 = (-1L))), (safe_add_func_uint64_t_u_u((+(safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((4294967295UL | (l_2007 = l_1925[2])), (safe_div_func_int32_t_s_s(((((((*g_1076) = (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_2014, (g_1941 , ((((l_2017 = (safe_rshift_func_int16_t_s_u((p_35 | p_35), 12))) | (l_2018 , 253UL)) > p_35) , g_2019[1][4])))), l_1958.f2))) | p_35) ^ l_2018) ^ p_35) , l_2020[2]), 0x037390B7L)))) , l_1977), 1)), l_1958.f1))), g_2021)))), 2)) <= l_1989)) & p_35)) , &l_2017);
                    }
                }
                else
                {
                    int16_t l_2023 = 0x251AL;
                    int32_t * const l_2024 = &g_864;
                    int32_t l_2028 = (-1L);
                    int32_t l_2029 = 0xC4F8C4E1L;
                    uint64_t l_2032[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_2032[i] = 0xBBBD4DE981006F2CLL;
                    l_2023 = p_37;
                    for (l_1811 = 0; (l_1811 <= 1); l_1811 += 1)
                    {
                        int32_t **l_2025 = &l_1842[5][0][2];
                        int32_t **l_2026 = &g_274;
                        int i;
                        (*l_2025) = l_2024;
                        if (g_926[l_1811])
                            break;
                        (*l_2026) = l_2024;
                        (*l_2026) = &l_1925[2];
                    }
                    ++l_2032[8];
                }
                if ((safe_mod_func_int8_t_s_s(((*p_36) = (*p_34)), l_2037)))
                {
                    uint16_t l_2038 = 65535UL;
                    union U0 ***l_2039 = &l_1944;
                    l_2039 = (l_2038 , l_2039);
                }
                else
                {
                    int32_t *l_2042[9][8][2] = {{{&g_167,&l_2020[2]},{&l_1980.f0,&g_356},{&g_356,&g_904},{&l_2020[2],&l_2020[0]},{&l_2020[0],&l_2020[0]},{&l_2020[2],&g_904},{&g_356,&g_356},{&l_1980.f0,&l_2020[2]}},{{&g_167,&l_1980.f0},{(void*)0,&l_1715.f0},{(void*)0,&l_1980.f0},{&g_167,&l_2020[2]},{&l_1980.f0,&g_356},{&g_356,&g_904},{&l_2020[2],&l_2020[0]},{&l_2020[0],&l_2020[0]}},{{&l_2020[2],&g_904},{&g_356,&g_356},{&l_1980.f0,&l_2020[2]},{&g_167,&l_1980.f0},{(void*)0,&l_1715.f0},{(void*)0,&l_1980.f0},{&g_167,&l_2020[2]},{&l_1980.f0,&g_356}},{{&g_356,&g_904},{&l_2020[2],&l_2020[0]},{&l_2020[0],&l_2020[0]},{&l_2020[2],&g_904},{&g_356,&g_356},{&l_1980.f0,&l_2020[2]},{&g_167,&l_1980.f0},{(void*)0,&l_1715.f0}},{{(void*)0,&l_1980.f0},{&g_167,&l_2020[2]},{&l_1980.f0,&g_356},{&g_356,&g_904},{&l_2020[2],&l_2020[0]},{&l_2020[0],&l_2020[0]},{&l_2020[2],&g_904},{&g_356,&g_356}},{{&l_1980.f0,&l_2020[2]},{&g_167,&l_1980.f0},{(void*)0,&l_1715.f0},{(void*)0,&l_1980.f0},{&g_167,&l_2020[2]},{&l_1980.f0,&g_356},{&g_356,&g_904},{&l_2020[2],&l_2020[0]}},{{&l_2020[0],&l_2020[0]},{&l_2020[2],&g_904},{&g_356,&g_356},{&l_1980.f0,&l_2020[2]},{&g_167,&l_1980.f0},{(void*)0,&l_1715.f0},{(void*)0,&l_1980.f0},{&g_167,&l_2020[2]}},{{&l_1715.f0,&g_167},{(void*)0,&l_2020[2]},{&l_2020[0],(void*)0},{(void*)0,(void*)0},{&l_2020[0],&l_2020[2]},{(void*)0,&g_167},{&l_1715.f0,&l_2020[0]},{&g_356,&l_1715.f0}},{{&g_904,&l_1718.f0},{&g_904,&l_1715.f0},{&g_356,&l_2020[0]},{&l_1715.f0,&g_167},{(void*)0,&l_2020[2]},{&l_2020[0],(void*)0},{(void*)0,(void*)0},{&l_2020[0],&l_2020[2]}}};
                    int32_t l_2060 = (-7L);
                    uint8_t *** const l_2071 = &g_421;
                    int32_t l_2144 = (-4L);
                    uint64_t *l_2151 = &g_183;
                    int32_t l_2168 = 0x65691EBFL;
                    int32_t l_2169 = (-2L);
                    int i, j, k;
                    if (((l_2020[0] == ((*l_1672) = p_37)) > ((safe_add_func_int8_t_s_s((((((((*g_1507) = ((((l_1925[2] = 0L) , (p_37 , &g_1003[2])) == (void*)0) , 1L)) | (p_35 > (safe_add_func_int64_t_s_s((l_1958.f4 = (safe_mul_func_int8_t_s_s((p_37 <= 1L), (-6L)))), p_37)))) , p_35) , 0x04141ABF7FD5CEFELL) && p_37) && p_37), (*p_36))) , 18446744073709551614UL)))
                    {
                        union U0 l_2058 = {-7L};
                        int32_t l_2066 = 0x1052E49EL;
                        int32_t ****l_2114 = (void*)0;
                        g_1132[0] = ((safe_add_func_int8_t_s_s((*p_36), (((((l_1925[2] &= (safe_add_func_int16_t_s_s((safe_mod_func_int64_t_s_s((l_2066 = ((safe_lshift_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(((l_2058.f4 = ((g_2057 = ((**l_1761) = (*g_171))) != ((l_2058 , ((g_103.f1 < l_2059) || ((((l_2060 |= p_37) || (p_37 = (0xF2A0L && (++(*l_1926))))) & (((~(p_35 || ((safe_lshift_func_int16_t_s_s((p_35 | p_35), p_35)) != l_2020[0]))) >= 3L) || l_1958.f2)) != 65535UL))) , (void*)0))) >= g_2027[5]), g_1523)) == (*p_36)), p_35)) == p_35)), 0xC97DD6BB52D4025DLL)), p_35))) , p_35) <= 1UL) & p_35) || (*p_34)))) | p_35);
                        g_1029 = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((((void*)0 == l_2071) > (l_1925[2] == ((((~((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u(((void*)0 != l_2079), l_2060)) , (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((*g_1507) ^= (****g_1352)), (p_35 & ((((*p_36) = ((((((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(0x83L, l_2058.f2)) & p_35), l_2060)) , &g_1852[0]) != (void*)0) > g_2088) || p_35) & l_2060)) , 1UL) || 0xB632L)))), l_2058.f2))), p_37)) && (*p_34)), (*p_34))) , l_2020[2])) || 0xEFAAL) && 0xCDC3FCC21EFF9C93LL) >= 0L))) == l_2060) == 18446744073709551615UL), 1UL)), 65535UL));
                        ++l_2089;
                        l_2066 &= ((safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s(0x10E1L, p_35)) || ((((--(*l_1923)) >= (safe_lshift_func_uint16_t_u_u(((*l_1926) = 0x5FD5L), (l_2100 | (((!(((-1L) != l_2020[2]) >= (safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint64_t_u((g_908 > (safe_rshift_func_int8_t_s_s((*p_36), 7))))), 8)) < ((((safe_unary_minus_func_int32_t_s(((safe_mul_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((&g_1030 == l_2114), 0L)) , p_35) > 0x6EL), (*p_34))) == 2L))) == (-1L)) && l_2060) , 0x2DL)), 0xD2BBDAAFL)))) , l_2115) == &p_34))))) , l_2020[2]) > p_35)), 0x836935F6L)) , 0x20AC3CF6L);
                    }
                    else
                    {
                        int32_t l_2129 = 0x1E911EBCL;
                        int32_t l_2143 = 1L;
                        l_2144 = (1UL != (((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_s(((((l_2123 >= ((safe_add_func_int8_t_s_s(((l_2126 , (safe_add_func_uint8_t_u_u((l_2129 = p_37), ((safe_mul_func_int8_t_s_s(((*p_36) = 0xFDL), (l_2060 = (safe_mul_func_uint8_t_u_u(l_1925[0], ((l_2100 != ((safe_sub_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(p_35, (safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(0xE2L, p_37)) && g_2142), l_1660[0][0][1])))) & l_1925[0]), 0xD1L)) != g_342)) ^ l_2060)))))) , 0x8EL)))) != l_2143), 0x83L)) & (*p_34))) , l_2060) ^ 1UL) > p_37), 0)) == p_37) , l_2129) == p_37), p_35)), 0xA6L)) , l_2129) < g_2027[3]));
                        return g_217;
                    }
                    for (l_2030 = 17; (l_2030 <= 6); --l_2030)
                    {
                        l_1718.f4 &= (((l_2060 , (l_1808[2][1][0] = p_37)) & (safe_mod_func_int16_t_s_s(p_37, p_37))) ^ (*p_36));
                    }
                    l_2169 &= (safe_mul_func_uint16_t_u_u((((*l_2151)++) == (&g_342 == (void*)0)), ((safe_sub_func_int64_t_s_s((((*l_1672) = (((p_37 , p_35) && p_35) ^ (~((((safe_mod_func_uint8_t_u_u((((l_2144 = (l_1810[1] = ((safe_mul_func_uint16_t_u_u(((*p_36) | (l_2060 = ((((*l_1912) = 3UL) > (+(p_37 , ((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_2166 != l_2144), p_37)), 0)) & 0xAB07L)))) && p_37))), p_35)) , 0xF3CEC0E5L))) || l_2167) || 8UL), l_2168)) ^ l_2100) ^ p_35) >= (****g_1352))))) , 1L), 0x21EA3E0E6D4B2637LL)) || 0xDD91E2B3L)));
                }
            }
        }
        else
        {
            int64_t l_2173 = (-3L);
            int32_t l_2176[1];
            int16_t *l_2187 = &l_1749;
            uint8_t l_2193 = 5UL;
            uint8_t l_2226 = 0xDDL;
            uint32_t l_2274 = 0xE3A54803L;
            int32_t l_2447[5] = {0x8F6BB93CL,0x8F6BB93CL,0x8F6BB93CL,0x8F6BB93CL,0x8F6BB93CL};
            int8_t *** const *l_2482 = &l_1663;
            int8_t l_2531 = 1L;
            int64_t l_2532[6][7][6] = {{{0xD8E4E223B1705E1ALL,(-7L),0x2516399FE304BBA9LL,0xCBAE7F329C724748LL,0x2516399FE304BBA9LL,(-7L)},{0x9F850FDD93009D50LL,0xD60E4599E6F73A53LL,0L,0L,0x130C64E29DA98017LL,(-7L)},{0x65041D7ACCDA1305LL,0xBF6269E7D40DAFECLL,0x2516399FE304BBA9LL,0x4659EC04B4AF36F4LL,0x64F156DC989A7F20LL,0xBF6269E7D40DAFECLL},{0x9F850FDD93009D50LL,0xBF6269E7D40DAFECLL,0x2E33435BB41102A6LL,0xEA7626E11B9957DALL,0x130C64E29DA98017LL,5L},{0xD8E4E223B1705E1ALL,0xD60E4599E6F73A53LL,0x2516399FE304BBA9LL,0xEA7626E11B9957DALL,0x2516399FE304BBA9LL,0xD60E4599E6F73A53LL},{0x9F850FDD93009D50LL,(-7L),0L,0x4659EC04B4AF36F4LL,0x130C64E29DA98017LL,0xD60E4599E6F73A53LL},{0x65041D7ACCDA1305LL,5L,0x2516399FE304BBA9LL,0L,0x64F156DC989A7F20LL,5L}},{{0x9F850FDD93009D50LL,5L,0x2E33435BB41102A6LL,0xCBAE7F329C724748LL,0x130C64E29DA98017LL,0xBF6269E7D40DAFECLL},{0xD8E4E223B1705E1ALL,(-7L),0x2516399FE304BBA9LL,0xCBAE7F329C724748LL,0x2516399FE304BBA9LL,(-7L)},{0x9F850FDD93009D50LL,0xD60E4599E6F73A53LL,0L,0L,0x130C64E29DA98017LL,(-7L)},{0x65041D7ACCDA1305LL,0xBF6269E7D40DAFECLL,0x2516399FE304BBA9LL,0x4659EC04B4AF36F4LL,0x64F156DC989A7F20LL,0xBF6269E7D40DAFECLL},{0x9F850FDD93009D50LL,0xBF6269E7D40DAFECLL,0x2E33435BB41102A6LL,0xEA7626E11B9957DALL,0x130C64E29DA98017LL,5L},{0xD8E4E223B1705E1ALL,0xD60E4599E6F73A53LL,0x2516399FE304BBA9LL,0xEA7626E11B9957DALL,0x2516399FE304BBA9LL,0xD60E4599E6F73A53LL},{0x9F850FDD93009D50LL,(-7L),0L,0x4659EC04B4AF36F4LL,0x130C64E29DA98017LL,0xD60E4599E6F73A53LL}},{{0x65041D7ACCDA1305LL,5L,0x2516399FE304BBA9LL,0L,0x64F156DC989A7F20LL,5L},{0x9F850FDD93009D50LL,5L,0x2E33435BB41102A6LL,0xCBAE7F329C724748LL,0x130C64E29DA98017LL,0xBF6269E7D40DAFECLL},{0xD8E4E223B1705E1ALL,(-7L),0x2516399FE304BBA9LL,0xCBAE7F329C724748LL,0x2516399FE304BBA9LL,(-7L)},{0x9F850FDD93009D50LL,0xD60E4599E6F73A53LL,0L,0L,0x130C64E29DA98017LL,(-7L)},{0x65041D7ACCDA1305LL,0xBF6269E7D40DAFECLL,0x2516399FE304BBA9LL,0x4659EC04B4AF36F4LL,0x64F156DC989A7F20LL,0xBF6269E7D40DAFECLL},{0x9F850FDD93009D50LL,0xBF6269E7D40DAFECLL,0x2E33435BB41102A6LL,0xEA7626E11B9957DALL,0x130C64E29DA98017LL,5L},{0xD8E4E223B1705E1ALL,0xD60E4599E6F73A53LL,0x2516399FE304BBA9LL,0xEA7626E11B9957DALL,0x2516399FE304BBA9LL,0xD60E4599E6F73A53LL}},{{0x9F850FDD93009D50LL,(-7L),0L,0x4659EC04B4AF36F4LL,0x130C64E29DA98017LL,0xD60E4599E6F73A53LL},{0x65041D7ACCDA1305LL,5L,0x2516399FE304BBA9LL,0L,0x64F156DC989A7F20LL,5L},{0x9F850FDD93009D50LL,5L,0x2E33435BB41102A6LL,0xCBAE7F329C724748LL,0x130C64E29DA98017LL,0xBF6269E7D40DAFECLL},{0xD8E4E223B1705E1ALL,(-7L),0x2516399FE304BBA9LL,0xCBAE7F329C724748LL,0x2516399FE304BBA9LL,(-7L)},{0x9F850FDD93009D50LL,0xD60E4599E6F73A53LL,0L,0L,0xD91A404982AE61E1LL,0x9747AEA97A0ADC2BLL},{0x2516399FE304BBA9LL,0x67B30FE5EA9AE306LL,1L,0xD60E4599E6F73A53LL,0xF107A54B7A8BAA42LL,0x67B30FE5EA9AE306LL},{0x130C64E29DA98017LL,0x67B30FE5EA9AE306LL,0xE8E3224256981C5ELL,0xBF6269E7D40DAFECLL,0xD91A404982AE61E1LL,0xDC1FB827412C71F8LL}},{{0x64F156DC989A7F20LL,0x613166C8D2CA16ACLL,1L,0xBF6269E7D40DAFECLL,1L,0x613166C8D2CA16ACLL},{0x130C64E29DA98017LL,0x9747AEA97A0ADC2BLL,0x9F0176F25A83FB6ALL,0xD60E4599E6F73A53LL,0xD91A404982AE61E1LL,0x613166C8D2CA16ACLL},{0x2516399FE304BBA9LL,0xDC1FB827412C71F8LL,1L,(-7L),0xF107A54B7A8BAA42LL,0xDC1FB827412C71F8LL},{0x130C64E29DA98017LL,0xDC1FB827412C71F8LL,0xE8E3224256981C5ELL,5L,0xD91A404982AE61E1LL,0x67B30FE5EA9AE306LL},{0x64F156DC989A7F20LL,0x9747AEA97A0ADC2BLL,1L,5L,1L,0x9747AEA97A0ADC2BLL},{0x130C64E29DA98017LL,0x613166C8D2CA16ACLL,0x9F0176F25A83FB6ALL,(-7L),0xD91A404982AE61E1LL,0x9747AEA97A0ADC2BLL},{0x2516399FE304BBA9LL,0x67B30FE5EA9AE306LL,1L,0xD60E4599E6F73A53LL,0xF107A54B7A8BAA42LL,0x67B30FE5EA9AE306LL}},{{0x130C64E29DA98017LL,0x67B30FE5EA9AE306LL,0xE8E3224256981C5ELL,0xBF6269E7D40DAFECLL,0xD91A404982AE61E1LL,0xDC1FB827412C71F8LL},{0x64F156DC989A7F20LL,0x613166C8D2CA16ACLL,1L,0xBF6269E7D40DAFECLL,1L,0x613166C8D2CA16ACLL},{0x130C64E29DA98017LL,0x9747AEA97A0ADC2BLL,0x9F0176F25A83FB6ALL,0xD60E4599E6F73A53LL,0xD91A404982AE61E1LL,0x613166C8D2CA16ACLL},{0x2516399FE304BBA9LL,0xDC1FB827412C71F8LL,1L,(-7L),0xF107A54B7A8BAA42LL,0xDC1FB827412C71F8LL},{0x130C64E29DA98017LL,0xDC1FB827412C71F8LL,0xE8E3224256981C5ELL,5L,0xD91A404982AE61E1LL,0x67B30FE5EA9AE306LL},{0x64F156DC989A7F20LL,0x9747AEA97A0ADC2BLL,1L,5L,1L,0x9747AEA97A0ADC2BLL},{0x130C64E29DA98017LL,0x613166C8D2CA16ACLL,0x9F0176F25A83FB6ALL,(-7L),0xD91A404982AE61E1LL,0x9747AEA97A0ADC2BLL}}};
            int8_t l_2588 = 0xB9L;
            int32_t *l_2604[2];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2176[i] = 0x0823F65FL;
            for (i = 0; i < 2; i++)
                l_2604[i] = (void*)0;
            for (g_270 = 0; (g_270 <= 1); g_270 += 1)
            {
                int32_t *l_2170 = &l_1718.f4;
                const uint16_t *l_2186 = &g_926[1];
                uint32_t l_2189[8] = {1UL,0xD70AE158L,0xD70AE158L,1UL,0xD70AE158L,0xD70AE158L,1UL,0xD70AE158L};
                int32_t l_2191 = (-5L);
                uint8_t l_2202 = 1UL;
                union U0 **l_2228 = &g_1166;
                int32_t l_2272[1][10] = {{1L,1L,(-7L),1L,1L,(-7L),1L,1L,(-7L),1L}};
                uint8_t l_2281 = 255UL;
                int i, j;
                (*l_1931) = ((*l_1932) = l_2170);
            }
            for (g_1330 = 0; (g_1330 != 5); ++g_1330)
            {
                int64_t *l_2320 = &l_2173;
                const int32_t l_2343 = (-2L);
                int16_t l_2353 = (-1L);
                int32_t l_2363 = 0L;
                int32_t l_2364 = 0x2A6F9A4DL;
                for (g_864 = 1; (g_864 >= 0); g_864 -= 1)
                {
                    int32_t l_2326 = 8L;
                    int32_t *l_2354 = (void*)0;
                    int32_t l_2355 = 0x75EFEA64L;
                    int32_t *l_2356 = &l_1718.f4;
                    int32_t *l_2357 = &g_1004[1];
                    int32_t *l_2358 = &l_2176[0];
                    int32_t *l_2359 = &g_103.f4;
                    int32_t *l_2360 = &l_1808[2][1][0];
                    int32_t *l_2361 = &g_1132[g_864];
                    int32_t *l_2362[10][10][2] = {{{&g_4,&l_1808[5][1][3]},{&g_1004[3],&g_103.f4},{&l_1681,&l_1805},{&g_864,&l_1676},{&g_4,&l_1718.f4},{&l_2176[0],(void*)0},{&g_662,&l_1679},{&l_1681,(void*)0},{(void*)0,&l_1810[1]},{&l_1715.f4,&l_1682[1]}},{{&l_1810[1],&l_2176[0]},{&g_662,&l_2176[0]},{&l_1810[1],&l_1682[1]},{&l_1715.f4,&l_1810[1]},{(void*)0,(void*)0},{&l_1681,&l_1679},{&g_662,(void*)0},{&l_2176[0],&l_1718.f4},{&g_4,&l_1676},{&g_864,&l_1805}},{{&l_1681,&g_103.f4},{&g_1004[3],&l_1808[5][1][3]},{&g_4,&l_1682[1]},{&l_1805,&g_864},{(void*)0,&g_662},{&l_1810[1],&g_4},{&l_1810[1],&l_1808[5][1][3]},{&l_1682[0],(void*)0},{&l_1676,(void*)0},{&g_864,&l_1679}},{{&l_2176[0],&g_773},{&g_1132[1],(void*)0},{(void*)0,&l_1805},{&l_1676,&g_864},{(void*)0,&g_1132[g_864]},{&g_4,&g_4},{&l_1682[1],&l_2176[0]},{&g_1132[g_864],&g_1132[g_864]},{&l_1718.f4,&l_1718.f4},{&g_1132[g_864],&g_1132[g_864]}},{{&g_1132[g_864],&g_864},{&g_4,&l_1805},{&g_1004[3],&g_4},{(void*)0,&l_1679},{(void*)0,&g_4},{&g_1004[3],&l_1805},{&g_4,&g_864},{&g_1132[g_864],&g_1132[g_864]},{&g_1132[g_864],&l_1718.f4},{&l_1718.f4,&g_1132[g_864]}},{{&g_1132[g_864],(void*)0},{&l_1810[1],&l_1808[2][1][0]},{&g_1132[g_864],&g_1132[g_864]},{&g_1132[1],&g_662},{&l_1810[1],(void*)0},{&g_1004[3],&l_1715.f4},{&g_1004[3],&l_1676},{&g_103.f4,&g_4},{&g_662,(void*)0},{&l_1810[1],(void*)0}},{{&g_1132[g_864],(void*)0},{&g_324,&l_1808[2][1][0]},{&l_1808[2][1][0],&g_1132[g_864]},{&l_1682[1],&g_662},{&l_1718.f4,&l_1810[1]},{&g_1132[g_864],(void*)0},{&l_2176[0],&g_864},{&l_1808[2][1][0],(void*)0},{&g_662,&l_1810[1]},{(void*)0,&l_1681}},{{&g_103.f4,&l_1715.f4},{&g_1132[g_864],&l_1805},{&l_1808[2][1][0],(void*)0},{&g_1132[1],&l_1805},{&g_1132[g_864],&l_1810[1]},{&l_1808[2][1][0],(void*)0},{&l_1810[1],(void*)0},{&l_1808[2][1][0],&l_1810[1]},{&g_1132[g_864],&l_1805},{&g_1132[1],(void*)0}},{{&l_1808[2][1][0],&l_1805},{&g_1132[g_864],&l_1715.f4},{&g_103.f4,&l_1681},{(void*)0,&l_1810[1]},{&g_662,(void*)0},{&l_1808[2][1][0],&g_864},{&l_2176[0],(void*)0},{&g_1132[g_864],&l_1810[1]},{&l_1718.f4,&g_662},{&l_1682[1],&g_1132[g_864]}},{{&l_1808[2][1][0],&l_1808[2][1][0]},{&g_324,(void*)0},{&g_1132[g_864],(void*)0},{&l_1810[1],(void*)0},{&g_662,&g_4},{&g_103.f4,&l_1676},{&g_1004[3],&l_1715.f4},{&g_1004[3],(void*)0},{&l_1810[1],&g_662},{&g_1132[1],&g_1132[g_864]}}};
                    uint32_t l_2365 = 0xF13BCF59L;
                    int16_t *l_2375[7];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_2375[i] = &l_2031;
                    g_1132[g_864] ^= (safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((void*)0 != l_2320), (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((((safe_unary_minus_func_uint16_t_u(l_2326)) , ((safe_unary_minus_func_uint16_t_u((((void*)0 == l_2328) != ((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(((--(*g_2057)) && (safe_add_func_uint64_t_u_u(2UL, (safe_rshift_func_uint8_t_u_s(l_2343, (safe_sub_func_uint16_t_u_u((+(safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((&g_1446 == l_2351), l_2176[0])), l_2343))), l_2173))))))), 0x23L)) == (*p_36)), p_35)), p_35)), l_2352)) | (*p_36))))) > l_2326)) < l_2353), l_2326)) , (*g_2057)), 5)))), (*p_36)));
                    l_2365++;
                    (*l_1932) = &l_2176[0];
                    (*l_2359) ^= ((l_2343 , ((+((*p_36) |= (safe_sub_func_int8_t_s_s(((*g_1507) = (((&g_171 == (void*)0) & ((*l_2360) = 0UL)) , ((((safe_div_func_int64_t_s_s((-1L), (-1L))) < ((((((l_2176[0] ^ ((*l_2361) ^= ((*g_2057) ^= p_37))) >= (&g_1819 == (void*)0)) , 18446744073709551615UL) , (void*)0) == &g_1874) > 252UL)) , l_2375[0]) != (void*)0))), p_37)))) , (*g_1446))) , p_35);
                }
            }
            for (l_2014 = 0; (l_2014 <= 5); l_2014 += 1)
            {
                uint64_t l_2387 = 0x233967BE2D7E08CDLL;
                uint64_t **l_2388 = &g_1670[4][4][7];
                const int16_t ***l_2418[4][2][9] = {{{&g_1874,&g_1874,&g_1874,&g_1874,&g_1874,&g_1868[0][3],&g_1868[0][3],&g_1868[0][3],&g_1874},{&g_1868[0][2],&g_1868[0][3],&g_1868[0][3],&g_1868[0][2],(void*)0,&g_1868[0][2],&g_1868[0][3],&g_1868[0][3],&g_1868[0][2]}},{{(void*)0,&g_1874,&g_1874,&g_1874,(void*)0,&g_1874,&g_1874,&g_1868[0][3],&g_1874},{&g_1868[0][3],(void*)0,&g_1874,&g_1874,(void*)0,&g_1868[0][3],(void*)0,&g_1874,&g_1874}},{{(void*)0,&g_1874,&g_1874,&g_1868[0][3],&g_1874,&g_1874,(void*)0,&g_1874,&g_1874},{&g_1868[0][2],(void*)0,&g_1868[0][2],&g_1868[0][3],&g_1868[0][3],&g_1868[0][2],(void*)0,&g_1868[0][2],&g_1868[0][3]}},{{&g_1874,&g_1874,&g_1874,&g_1868[0][3],&g_1868[0][3],&g_1868[0][3],&g_1874,&g_1874,&g_1874},{&g_1868[0][3],&g_1868[0][3],(void*)0,&g_1868[0][2],&g_1868[0][3],&g_1868[0][3],&g_1868[0][2],(void*)0,&g_1868[0][2]}}};
                const int16_t ****l_2417[8][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_2418[0][0][0],&l_2418[0][0][0],(void*)0,(void*)0,&l_2418[0][0][0]},{&l_2418[0][1][3],(void*)0,&l_2418[0][1][3],(void*)0,&l_2418[0][1][3],(void*)0,&l_2418[0][1][3]},{(void*)0,&l_2418[0][0][0],&l_2418[0][0][0],(void*)0,(void*)0,&l_2418[0][0][0],&l_2418[0][0][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_2418[0][0][0],&l_2418[0][0][0],(void*)0,(void*)0,&l_2418[0][0][0]},{&l_2418[0][1][3],(void*)0,&l_2418[0][1][3],(void*)0,&l_2418[0][1][3],(void*)0,&l_2418[0][1][3]},{(void*)0,&l_2418[0][0][0],&l_2418[0][0][0],(void*)0,(void*)0,&l_2418[0][0][0],&l_2418[0][0][0]}};
                int32_t l_2442 = 0x010A2F69L;
                int32_t l_2443 = (-6L);
                int32_t l_2444 = (-1L);
                int32_t l_2445 = 0x5A642565L;
                int32_t l_2446 = 1L;
                int32_t l_2450[1][8];
                int64_t **l_2484 = &l_1672;
                int64_t ***l_2483 = &l_2484;
                const int64_t l_2559[2] = {6L,6L};
                int8_t l_2602 = 0x43L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_2450[i][j] = 7L;
                }
                for (g_864 = 4; (g_864 >= 0); g_864 -= 1)
                {
                    uint32_t *l_2385[7][2][7] = {{{&l_2274,(void*)0,&l_2274,&g_562[1],&g_1924,(void*)0,&g_776},{&l_2274,&g_272,(void*)0,&g_272,(void*)0,&g_562[3],&g_270}},{{&g_776,&g_626,&g_776,&l_2274,&l_2274,&g_270,&g_270},{&g_270,(void*)0,&l_2274,(void*)0,&g_270,&g_1924,&g_776}},{{(void*)0,&g_562[1],&g_562[3],&g_270,&g_626,&g_776,&g_272},{&g_270,&g_272,&g_270,&l_2274,&g_270,&g_562[3],&l_2274}},{{(void*)0,&g_270,&g_626,&g_1924,&g_562[3],&g_272,&l_1862},{&g_270,&g_776,&l_2274,&g_562[3],&g_776,(void*)0,&g_270}},{{&g_776,&g_776,&g_776,&l_1684,&g_776,&g_776,&g_776},{&l_2274,&g_270,&g_776,&g_626,&g_272,(void*)0,(void*)0}},{{&l_2274,&g_272,&l_2274,&g_1924,(void*)0,&l_2274,&g_776},{&g_562[3],&g_562[1],&g_776,&g_272,&l_1862,&l_2274,&g_776}},{{&g_1924,(void*)0,&g_776,&g_776,&g_776,&l_2274,(void*)0},{&g_272,&g_626,&l_2274,&g_776,&g_1924,&g_776,&l_2274}}};
                    int32_t l_2389 = 0xD1D1CE17L;
                    int i, j, k;
                    l_2389 = (((((*g_2057) = (((p_35 >= (safe_add_func_int64_t_s_s((0xBE308DDDL < (l_2176[0] = 8L)), l_2193))) == (*g_2057)) < (p_34 != (l_1804[0] = &l_2226)))) , (((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((g_626 &= ((l_1808[2][1][0] ^= (!(p_35 < p_35))) <= 0UL)) & 0xE4CABBE7L), p_37)), l_2386[5])) > l_2387) == 0x78FB6CA4L)) , (*g_1668)) == l_2388);
                }
                for (g_342 = 0; (g_342 <= 1); g_342 += 1)
                {
                    int32_t *l_2390 = &l_1808[3][0][0];
                    int32_t *l_2391 = &g_864;
                    int32_t *l_2392 = &l_1810[0];
                    int32_t *l_2393 = &l_1810[1];
                    int32_t *l_2394 = &l_1715.f4;
                    int32_t *l_2395[6] = {&g_324,&g_324,&l_2176[0],&g_324,&g_324,&l_2176[0]};
                    int32_t l_2399 = 1L;
                    int64_t l_2419 = (-7L);
                    const union U0 *l_2458[5];
                    int32_t l_2464 = 1L;
                    int64_t ***l_2485 = &l_2484;
                    uint16_t *** const l_2512 = (void*)0;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_2458[i] = &l_1715;
                    --l_2396;
                    if (l_2399)
                        continue;
                    if (((*l_2392) = (((((safe_rshift_func_uint8_t_u_s((p_37 & (0L == (safe_mul_func_uint8_t_u_u(((0x2D6F4160L || ((+p_37) <= p_37)) != (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u((0x7BEB33E2L ^ p_35), 13)) != 0x79EC616ADEA61E07LL) ^ (safe_add_func_uint64_t_u_u((l_1676 = ((((safe_add_func_uint16_t_u_u((((((((safe_unary_minus_func_int8_t_s((p_35 == 0L))) , l_2414) != l_2417[3][5]) & p_37) < (**g_683)) <= 1UL) | l_2387), (*g_1076))) <= l_2387) <= 65527UL) >= l_2419)), 0x4418BAE6B9926640LL))), (*g_2057)))), 0xFFL)))), l_2387)) != p_37) && (*p_36)) || 0xAAL) , p_37)))
                    {
                        uint8_t l_2429 = 9UL;
                        int32_t l_2440 = 0x515F4AA8L;
                        int32_t l_2448 = 7L;
                        int32_t l_2449 = (-1L);
                        int32_t l_2451 = 1L;
                        int32_t l_2453 = 0x4B5CFA68L;
                        int32_t l_2454 = 0xD896A6C0L;
                        int64_t *l_2475[9][9][3] = {{{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402}},{{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905}},{{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402}},{{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905}},{{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402}},{{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905}},{{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402}},{{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905}},{{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402},{&g_905,&g_905,&g_905},{&g_402,&l_2030,&g_402}}};
                        int i, j, k;
                        l_1808[2][1][0] ^= ((safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(p_35, l_2226)), 5)), (+(safe_mul_func_int16_t_s_s(l_2429, (((*l_2393) |= ((*l_2394) |= p_37)) == (((((safe_add_func_uint64_t_u_u(((~(safe_mul_func_uint16_t_u_u((((p_35 < 0UL) ^ (p_37 , (((*l_2391) = ((0x27D4F983824F8FB3LL <= (safe_mul_func_int8_t_s_s(((l_2439 = (((safe_rshift_func_uint8_t_u_s((g_604[g_342][(g_342 + 3)] = 0x5EL), 0)) , 0x90DEL) || 0x5F45L)) >= p_37), p_35))) < (-9L))) == p_35))) > p_35), l_2193))) , l_2429), (-3L))) , (*g_1446)) , p_37) , 1UL) > p_37))))))) , p_37);
                        --l_2455[6];
                        (*l_1939) = l_2458[0];
                        (*l_2391) = (l_1808[6][0][6] = ((*l_2394) = (((safe_lshift_func_int8_t_s_u(((*g_1507) ^= ((((((safe_mul_func_uint8_t_u_u((~((l_2464 , ((((((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((((l_2476 = ((*l_1672) |= (safe_rshift_func_int16_t_s_u(((*l_2188) = ((**l_1756) = (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_35, (-6L))), 0x09L)))), 6)))) ^ (((*p_36) = (safe_add_func_int64_t_s_s(p_35, (((safe_div_func_int8_t_s_s(((0xAE74L & (-1L)) , (safe_unary_minus_func_uint8_t_u((l_1853[1][2][0] != (void*)0)))), (*l_2392))) , (*g_1351)) != l_2482)))) , 0L)) , &l_1756) != (void*)0), p_37)), 0)) == 0x5D7F4E79440195C6LL) , l_2483) == l_2485) & 0x99L) && 0x230FL)) == p_37)), l_2429)) || p_37) , l_2454) , l_2173) >= (*p_34)) || 0x8F02CE6A80779CC8LL)), 1)) == p_37) , (*l_2391))));
                    }
                    else
                    {
                        int16_t l_2497[3];
                        uint32_t *l_2499 = (void*)0;
                        uint32_t *l_2500 = &l_2274;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_2497[i] = (-10L);
                        (*l_2394) = (((g_2486 | ((safe_sub_func_uint8_t_u_u(l_2450[0][2], ((*p_34) || (0xEDCDB787L | ((safe_sub_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((*p_34), p_35)), 7)) && (safe_rshift_func_uint8_t_u_s((l_2497[2] = l_2173), 6))) >= ((void*)0 != (*g_1818))) == p_35), p_37)) || (*p_36)))))) | p_35)) != g_590) >= p_37);
                        (*l_2394) = (((*p_36) & ((((((safe_unary_minus_func_uint32_t_u(((*l_2500) = ((*l_2393) = p_37)))) ^ (safe_mul_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((0x83L ^ (safe_lshift_func_int8_t_s_u(((&g_1313[0][0] == &g_1355[0]) == 0xCCB6E13FL), (&l_2464 != &l_2450[0][2])))), (((*l_2391) ^= (((~((safe_lshift_func_uint8_t_u_s((((void*)0 == l_2512) && (-8L)), 0)) > 0x7EE62A82L)) && (*l_2390)) & (*p_36))) , (*l_2394)))), (*g_684))) || p_35), l_2173))) > 0x855E7E663B1B9816LL) < 0xF3143DF5L) , p_35) ^ 0xAAL)) ^ 0UL);
                        g_2513 = &g_1569;
                    }
                    for (p_35 = 0; (p_35 <= 4); p_35 += 1)
                    {
                        (*l_2393) |= (((*g_1030) = (*g_1030)) != ((((safe_sub_func_int8_t_s_s(((l_2176[0] = l_2450[0][4]) , ((*p_36) = (+((***l_2485) = ((~((safe_mod_func_uint8_t_u_u((l_2176[0] = p_37), (safe_sub_func_int64_t_s_s((~(0xE3L < (safe_mul_func_int8_t_s_s(((&g_1852[0] == (l_2443 , (void*)0)) ^ ((*g_1507) &= (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((*p_36), 0xB9L)), 2)), l_2531)))), 0xCDL)))), p_35)))) , 0xE4L)) | p_37))))), 1UL)) != 0x3A3262FAL) , l_2532[2][6][1]) , l_1932));
                        if (l_2226)
                            continue;
                    }
                }
                for (g_925 = 4; (g_925 >= 0); g_925 -= 1)
                {
                    int32_t *l_2533 = &l_1808[2][1][0];
                    int32_t *l_2534 = &l_1715.f4;
                    uint16_t l_2560 = 0UL;
                    (*l_2534) = (g_864 = ((*l_2533) = p_35));
                    for (l_2226 = 0; (l_2226 <= 1); l_2226 += 1)
                    {
                        int i, j, k;
                        (*l_2533) |= (g_1255 == (((((*g_2057) = ((safe_rshift_func_int16_t_s_u((-8L), 9)) > 0x82253714A94D3F08LL)) <= ((((((safe_mul_func_int16_t_s_s((-1L), (safe_add_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(0L, (l_2455[(l_2226 + 4)] <= ((*g_1076) ^ 0L)))) <= (((((*l_2187) |= ((l_2445 = p_35) == (*l_2534))) , 9L) <= p_37) <= (*g_684))) <= l_2455[(l_2226 + 4)]), p_35)))) ^ 0L) | 0UL) , &l_2439) != &p_37) || l_2455[(l_2226 + 4)])) && (*p_34)) , (void*)0));
                    }
                    if (((((((*l_2534) ^ (safe_sub_func_int16_t_s_s(p_37, (((safe_lshift_func_uint16_t_u_s((l_2445 = (p_37 , l_2531)), 14)) , p_37) , (((***l_2483) = ((((safe_add_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u((l_2560 = (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((~l_2532[2][6][1]) > ((((!p_35) || (p_35 >= l_2559[0])) , (*g_1818)) == (void*)0)), l_2532[2][6][1])), 1)), 0UL))), (*l_2534))) <= l_2450[0][3]), (-3L))) < l_2447[3]) == 0x5ABBL) || g_2561)) | 0xB538F5573769E7DFLL))))) != 0xB28CF33FL) != p_37) >= l_2444) != p_37))
                    {
                        int8_t l_2576 = 0L;
                        uint8_t *****l_2586[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t l_2601 = 0xCCFE5605L;
                        int32_t *l_2603[4][5][10] = {{{&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0],&g_1004[0],&g_1004[0],&l_1682[0],(void*)0,(void*)0},{&l_2446,&l_2446,(void*)0,&g_864,&l_1682[0],&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0]},{&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0],&g_1004[0],&g_1004[0],&l_1682[0],(void*)0,(void*)0},{&l_2446,&l_2446,(void*)0,&g_864,&l_1682[0],&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0]},{&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0],&g_1004[0],&g_1004[0],&l_1682[0],(void*)0,(void*)0}},{{&l_2446,&l_2446,(void*)0,&g_864,&l_1682[0],&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0]},{&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0],&g_1004[0],&g_1004[0],&l_1682[0],(void*)0,(void*)0},{&l_2446,&l_2446,(void*)0,&g_864,&l_1682[0],&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0]},{&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0],&g_1004[0],&g_1004[0],&l_1682[0],(void*)0,(void*)0},{&l_2446,&l_2446,(void*)0,&g_864,&l_1682[0],&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0]}},{{&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0],&g_1004[0],&g_1004[0],&l_1682[0],(void*)0,(void*)0},{&l_2446,&l_2446,(void*)0,&g_864,&l_1682[0],&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0]},{&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0],&g_1004[0],&g_1004[0],&l_1682[0],(void*)0,(void*)0},{&l_2446,&l_2446,(void*)0,&g_864,&l_1682[0],&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0]},{&l_2446,&g_1004[0],(void*)0,(void*)0,&l_1682[0],&g_1004[0],&g_1004[0],&l_1682[0],(void*)0,(void*)0}},{{&l_2446,&l_2446,(void*)0,&g_864,&l_1682[0],&l_2446,(void*)0,(void*)0,&l_1676,&g_773},{&l_1682[0],(void*)0,(void*)0,&l_1676,&g_773,(void*)0,(void*)0,&g_773,&l_1676,(void*)0},{&l_1682[0],&l_1682[0],(void*)0,&g_1029,&g_773,&l_1682[0],(void*)0,(void*)0,&l_1676,&g_773},{&l_1682[0],(void*)0,(void*)0,&l_1676,&g_773,(void*)0,(void*)0,&g_773,&l_1676,(void*)0},{&l_1682[0],&l_1682[0],(void*)0,&g_1029,&g_773,&l_1682[0],(void*)0,(void*)0,&l_1676,&g_773}}};
                        int i, j, k;
                        (*l_2534) = (18446744073709551615UL != ((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((*l_2533) = (8UL | (safe_lshift_func_int16_t_s_s(((*l_2187) = ((**l_1756) |= l_2176[0])), 9)))), ((*g_1507) = (safe_div_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u((safe_mod_func_int8_t_s_s((*g_1507), (((0x9A2DE6C3C61F99BELL | ((*l_1672) = g_359[4])) < (p_37 < (l_2447[2] = (((p_35 | l_2575) | 0x26L) < 0x85L)))) , p_35))))), l_2576))))), (*l_2534))) & (*p_36)), 0)) != 0x892DL));
                        (*l_2533) = ((*l_2533) <= ((*g_2057) = ((((*l_2533) , ((*l_2534) = (safe_sub_func_int64_t_s_s(((*l_1672) = (((((l_2176[0] = ((&l_2194 == ((((safe_mod_func_uint8_t_u_u(255UL, (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(0xD836C024L)), (((p_35 , 18446744073709551615UL) ^ ((safe_rshift_func_int8_t_s_u((*p_36), (((*g_2057) & p_37) && p_37))) | p_35)) | 9L))))) & (*l_2533)) != p_35) , l_2586[1])) <= l_2587)) <= p_37) && (*l_2533)) | l_2588) != p_37)), 0x12EABD2FAB760973LL)))) >= p_37) != g_604[1][8])));
                        g_1132[0] ^= (((*p_34) < (((((*l_2187) |= ((p_34 != p_34) >= ((*p_36) = ((safe_add_func_uint8_t_u_u(((((*l_2533) = ((((p_35 & (((*g_1076) |= (safe_add_func_uint8_t_u_u(255UL, (*p_36)))) | ((safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s((((*p_34) ^ (((*l_2534) = ((~((*l_1672) ^= l_2600)) == (l_2601 = p_35))) > 0x6AL)) | l_2443), p_35)), 0x93L)) || l_2602))) , p_35) >= (*p_36)) < 0x72197DC2L)) ^ 1UL) & p_37), (*p_36))) , (*p_34))))) < p_35) != 65535UL) && 0x6995622EL)) == 0L);
                    }
                    else
                    {
                        if (p_35)
                            break;
                        return g_1508;
                    }
                    (*l_1932) = &l_2445;
                }
            }
            --l_2606;
        }
    }
    return p_37;
}







static int8_t func_40(uint16_t p_41, uint32_t p_42, union U0 p_43, int8_t p_44)
{
    int32_t *l_923 = &g_324;
    int32_t *l_924[5][5][4] = {{{&g_864,&g_864,&g_4,&g_864},{&g_864,&g_773,&g_773,&g_864},{&g_773,&g_864,&g_773,&g_773},{&g_864,&g_864,&g_4,&g_864},{&g_864,&g_773,&g_773,&g_864}},{{&g_773,&g_864,&g_773,&g_773},{&g_864,&g_864,&g_4,&g_864},{&g_864,&g_773,&g_773,&g_864},{&g_773,&g_864,&g_773,&g_773},{&g_864,&g_864,&g_4,&g_864}},{{&g_864,&g_773,&g_773,&g_864},{&g_773,&g_864,&g_773,&g_773},{&g_864,&g_864,&g_4,&g_864},{&g_864,&g_773,&g_773,&g_864},{&g_773,&g_864,&g_773,&g_773}},{{&g_864,&g_864,&g_4,&g_864},{&g_864,&g_773,&g_773,&g_864},{&g_773,&g_864,&g_773,&g_773},{&g_864,&g_864,&g_4,&g_864},{&g_864,&g_773,&g_773,&g_864}},{{&g_773,&g_864,&g_773,&g_773},{&g_864,&g_864,&g_4,&g_864},{&g_864,&g_773,&g_773,&g_864},{&g_773,&g_864,&g_773,&g_773},{&g_864,&g_864,&g_4,&g_864}}};
    uint64_t *l_932[8] = {&g_248,&g_248,&g_248,&g_248,&g_248,&g_248,&g_248,&g_248};
    uint64_t **l_931[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_933[6][6][7] = {{{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL}}};
    uint64_t l_977 = 0xAF3A357CC08D1436LL;
    int8_t *l_995 = &g_102;
    union U0 l_1024 = {1L};
    int16_t **l_1047 = &g_1018[2][0];
    uint64_t ***l_1079 = &l_931[5];
    uint64_t **** const l_1078 = &l_1079;
    uint32_t l_1116[6][10][4] = {{{0x1D277C87L,0x2C257DABL,0UL,4294967295UL},{0x1D277C87L,1UL,4294967294UL,0xF324596FL},{0x1C1C36D4L,4294967295UL,0x7C9F8FCCL,4294967287UL},{0UL,0x3D7EBEA1L,0UL,4294967287UL},{0x7C9F8FCCL,4294967295UL,0x1C1C36D4L,0xF324596FL},{4294967294UL,1UL,0x1D277C87L,4294967295UL},{0UL,0x2C257DABL,0x1D277C87L,0UL},{4294967294UL,0x0D93A79EL,0x1C1C36D4L,1UL},{0x7C9F8FCCL,0x9B2BDBF0L,0UL,0x9B2BDBF0L},{0UL,0x9B2BDBF0L,0x7C9F8FCCL,1UL}},{{0x1C1C36D4L,0x0D93A79EL,4294967294UL,0UL},{0x1D277C87L,0x2C257DABL,0UL,4294967295UL},{0x1D277C87L,1UL,4294967294UL,0xF324596FL},{0x1C1C36D4L,4294967295UL,0x7C9F8FCCL,4294967287UL},{0UL,0x3D7EBEA1L,0UL,4294967287UL},{0x7C9F8FCCL,4294967295UL,0x1C1C36D4L,0xF324596FL},{4294967294UL,1UL,0x1D277C87L,4294967295UL},{0UL,0x2C257DABL,0x1D277C87L,0UL},{4294967294UL,0x0D93A79EL,0x1C1C36D4L,1UL},{0x7C9F8FCCL,0x9B2BDBF0L,0UL,0x9B2BDBF0L}},{{0UL,0x9B2BDBF0L,0x7C9F8FCCL,1UL},{0x1C1C36D4L,0x0D93A79EL,4294967294UL,0UL},{0x1D277C87L,0x2C257DABL,0UL,4294967295UL},{0x1D277C87L,1UL,4294967294UL,0xF324596FL},{0x1C1C36D4L,4294967295UL,0x7C9F8FCCL,4294967287UL},{0UL,0x3D7EBEA1L,0UL,4294967287UL},{0x7C9F8FCCL,4294967295UL,0x1C1C36D4L,0xF324596FL},{4294967294UL,1UL,0x1D277C87L,4294967295UL},{0UL,0x2C257DABL,0x1D277C87L,0UL},{4294967294UL,0x0D93A79EL,0x1C1C36D4L,1UL}},{{0x7C9F8FCCL,0x9B2BDBF0L,0UL,0x9B2BDBF0L},{0UL,0x9B2BDBF0L,0x7C9F8FCCL,1UL},{0x1C1C36D4L,0x0D93A79EL,4294967294UL,0UL},{0x1D277C87L,0x2C257DABL,0UL,4294967295UL},{0x1D277C87L,1UL,4294967294UL,0xF324596FL},{0x1C1C36D4L,4294967295UL,0x7C9F8FCCL,4294967287UL},{0UL,0x3D7EBEA1L,0UL,4294967287UL},{0x7C9F8FCCL,4294967295UL,0x1C1C36D4L,0xF324596FL},{4294967294UL,1UL,0x1D277C87L,4294967295UL},{0UL,0x2C257DABL,0x1D277C87L,0UL}},{{4294967294UL,0xD0C804D2L,0UL,4294967295UL},{4294967294UL,0x3D7EBEA1L,4294967292UL,0x3D7EBEA1L},{4294967292UL,0x3D7EBEA1L,4294967294UL,4294967295UL},{0UL,0xD0C804D2L,0UL,1UL},{0UL,4294967287UL,0UL,0x2C257DABL},{0UL,4294967295UL,0UL,0x0D93A79EL},{0UL,0x2C257DABL,4294967294UL,0x9B2BDBF0L},{4294967292UL,0xF324596FL,4294967292UL,0x9B2BDBF0L},{4294967294UL,0x2C257DABL,0UL,0x0D93A79EL},{0UL,4294967295UL,0UL,0x2C257DABL}},{{0UL,4294967287UL,0UL,1UL},{0UL,0xD0C804D2L,0UL,4294967295UL},{4294967294UL,0x3D7EBEA1L,4294967292UL,0x3D7EBEA1L},{4294967292UL,0x3D7EBEA1L,4294967294UL,4294967295UL},{0UL,0xD0C804D2L,0UL,1UL},{0UL,4294967287UL,0UL,0x2C257DABL},{0UL,4294967295UL,0UL,0x0D93A79EL},{0UL,0x2C257DABL,4294967294UL,0x9B2BDBF0L},{4294967292UL,0xF324596FL,4294967292UL,0x9B2BDBF0L},{4294967294UL,0x2C257DABL,0UL,0x0D93A79EL}}};
    int64_t l_1162 = 0x79B4CB173BC97275LL;
    int32_t l_1183 = (-9L);
    const int16_t l_1198 = (-1L);
    uint8_t ***l_1226 = &g_421;
    int8_t ***l_1413 = &g_146;
    int8_t ****l_1412 = &l_1413;
    int8_t ****l_1440 = (void*)0;
    uint16_t l_1469 = 1UL;
    int16_t **l_1475 = (void*)0;
    int32_t l_1476 = (-1L);
    int32_t **l_1526 = &g_274;
    uint32_t *l_1558 = &g_562[0];
    uint32_t **l_1557[4][6] = {{&l_1558,&l_1558,&l_1558,&l_1558,&l_1558,&l_1558},{&l_1558,&l_1558,&l_1558,&l_1558,&l_1558,&l_1558},{&l_1558,&l_1558,&l_1558,&l_1558,&l_1558,&l_1558},{&l_1558,&l_1558,&l_1558,&l_1558,&l_1558,&l_1558}};
    uint64_t ***l_1653 = &l_931[5];
    int i, j, k;
    --g_926[1];
    if ((p_42 || ((((safe_mod_func_uint64_t_u_u((l_931[5] == &g_684), (p_43.f2 || ((((*l_923) && 0x69L) , (&l_924[4][3][1] == &g_274)) ^ ((p_41 , (-1L)) > 0xAE3292DDF8DA208CLL))))) > l_933[5][2][0]) > 0x443360743232E1AALL) > p_43.f2)))
    {
        const int32_t *l_934 = &g_864;
        const int32_t **l_935 = &l_934;
        int32_t l_938 = (-1L);
        int32_t l_939 = 1L;
        uint16_t *l_940 = (void*)0;
        int32_t l_941 = 0L;
        uint16_t *l_942[6];
        int32_t l_943 = 0x4AC059AFL;
        int64_t *l_946[2];
        uint8_t *l_957 = &g_359[4];
        uint64_t l_969 = 9UL;
        uint8_t ****l_973 = &g_420[7];
        int16_t l_976 = 0x2352L;
        uint8_t *l_1036 = &g_802;
        uint8_t ** const l_1035[4] = {&l_1036,&l_1036,&l_1036,&l_1036};
        uint8_t ** const *l_1034 = &l_1035[2];
        int8_t **l_1061 = &l_995;
        int32_t l_1086[1];
        const union U0 *l_1168 = &l_1024;
        const union U0 **l_1167 = &l_1168;
        int32_t *l_1171 = &l_943;
        uint64_t l_1180 = 0x06E0D7A5FF0005D9LL;
        int32_t *l_1195 = &l_1086[0];
        uint32_t l_1258[8] = {0UL,2UL,0UL,2UL,0UL,2UL,0UL,2UL};
        int64_t l_1286 = 1L;
        int8_t * const l_1350 = (void*)0;
        int8_t * const *l_1349[1][4] = {{&l_1350,&l_1350,&l_1350,&l_1350}};
        int8_t * const **l_1348[10];
        int8_t * const ***l_1347 = &l_1348[1];
        int8_t * const ****l_1346 = &l_1347;
        union U0 l_1382[3] = {{-9L},{-9L},{-9L}};
        int32_t *** const *l_1430 = &g_1030;
        int i, j;
        for (i = 0; i < 6; i++)
            l_942[i] = &g_926[1];
        for (i = 0; i < 2; i++)
            l_946[i] = &g_402;
        for (i = 0; i < 1; i++)
            l_1086[i] = 1L;
        for (i = 0; i < 10; i++)
            l_1348[i] = &l_1349[0][1];
    }
    else
    {
        return (*****g_1351);
    }
    if (p_44)
    {
        int16_t l_1441 = (-6L);
        return l_1441;
    }
    else
    {
        uint32_t *l_1445 = (void*)0;
        uint32_t **l_1444 = &l_1445;
        int32_t l_1454[9] = {0xBBCA83D1L,0xB030F28CL,0xBBCA83D1L,0xBBCA83D1L,0xB030F28CL,0xBBCA83D1L,0xBBCA83D1L,0xB030F28CL,0xBBCA83D1L};
        uint32_t *l_1457 = &g_562[4];
        const int16_t l_1462 = 0x4526L;
        uint16_t *l_1463 = &l_933[2][0][1];
        int32_t * const l_1511 = &g_4;
        uint16_t l_1515 = 0x2CBEL;
        int i;
        (*l_923) = 5L;
        if (((0x4A0CL > ((*l_1463) = ((**g_683) ^ (safe_lshift_func_int16_t_s_s(((((*l_1444) = l_924[0][4][3]) != (g_1446 = l_923)) , (0x8668C2E885EBB045LL < (safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((~(safe_div_func_int64_t_s_s(0x2D6243B0A6691E43LL, l_1454[4]))), (safe_div_func_int64_t_s_s((((*l_1457) = 2UL) || (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((l_1454[4] & l_1462) != p_43.f4), 7)) | (*l_923)), (*g_1076)))), l_1454[4])))) <= 0L), l_1454[4])))), l_1462))))) & 0UL))
        {
            int8_t l_1474 = 0xCAL;
            union U0 **l_1478 = &g_1166;
            union U0 ***l_1477 = &l_1478;
            union U0 **l_1480 = (void*)0;
            union U0 ***l_1479 = &l_1480;
            (*l_923) = (safe_lshift_func_int16_t_s_s((~(p_44 && ((p_42 , (((*l_1479) = ((*l_1477) = ((((*g_1076) >= ((((safe_rshift_func_int8_t_s_u(l_1469, 2)) < g_255) == (((((*l_1457) = (safe_div_func_int64_t_s_s(((safe_div_func_int32_t_s_s(l_1474, ((l_1475 == (void*)0) & 0x6B2A015CL))) , l_1474), (*l_923)))) < 0x9AE3671EL) || l_1476) , (****g_1352))) | l_1454[4])) , p_43) , (void*)0))) == (void*)0)) && 1L))), 2));
        }
        else
        {
            const int16_t l_1495 = 1L;
            int32_t **l_1512 = &l_924[3][3][1];
            for (g_403 = 0; (g_403 >= 9); ++g_403)
            {
                uint32_t l_1502 = 0x93F12C54L;
                int8_t **l_1503 = &l_995;
                int16_t l_1509 = 0x09F7L;
                int32_t l_1510[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1510[i] = 8L;
                l_1510[2] ^= ((safe_lshift_func_uint16_t_u_s(((1UL || (~(safe_rshift_func_int16_t_s_u(1L, 13)))) >= (p_44 ^ (safe_rshift_func_int8_t_s_s((+(safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_u(l_1495, p_41)) >= (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((l_1502 == ((((*g_1314) = l_1503) != (g_1506[2] = ((safe_div_func_uint32_t_u_u(0x965A9315L, (p_43.f1 , p_43.f1))) , (void*)0))) , 0x36L)), 6)), l_1462)), l_1495))) , (*g_38)), 3))), l_1509)))), 15)) || (*g_684));
            }
            (*l_1512) = l_1511;
            for (g_905 = (-27); (g_905 > 25); ++g_905)
            {
                if (p_43.f4)
                    break;
            }
            return (*l_923);
        }
        l_924[0][1][2] = &g_1132[1];
        l_1515--;
    }
    for (g_626 = 0; (g_626 <= 9); g_626 += 1)
    {
        int32_t **l_1518 = (void*)0;
        int32_t **l_1519 = &l_924[0][1][1];
        int32_t l_1520 = 0xE0E65B71L;
        int32_t l_1521 = (-1L);
        int8_t ***l_1527 = &g_146;
        int16_t **l_1531 = (void*)0;
        uint32_t l_1571 = 0xDB781FC3L;
        int64_t l_1604 = 0x9E80385F7C919DEFLL;
        uint8_t **l_1605 = (void*)0;
        int32_t l_1623 = 9L;
        int32_t l_1626 = 0L;
        int32_t l_1628 = 0x319FC432L;
        int32_t l_1629 = 0xBB8041F1L;
        uint64_t l_1630 = 0xE457A2D2C13AD84BLL;
        int64_t l_1655 = 0xD7B5ED6510D55D08LL;
        (*l_1519) = &l_1476;
        for (g_403 = 0; g_403 < 5; g_403 += 1)
        {
            g_562[g_403] = 1UL;
        }
        for (g_774 = 9; (g_774 >= 0); g_774 -= 1)
        {
            int16_t l_1522 = (-1L);
            int32_t l_1550 = 0x8539900CL;
            uint32_t l_1606 = 4294967288UL;
            int32_t l_1614[8][7][4] = {{{5L,1L,0xCFB27BEEL,0L},{0L,0x9A3D068CL,(-5L),0xCFB27BEEL},{0xCFB27BEEL,0x9A3D068CL,0L,0L},{0x9A3D068CL,1L,0x9A3D068CL,0xA4B340A3L},{(-3L),0L,0x4F371389L,0L},{1L,(-3L),0xA4B340A3L,0L},{0L,0x4F9412EFL,0xA4B340A3L,0x130844BDL}},{{1L,0x4F371389L,0x4F371389L,1L},{(-3L),0L,0x9A3D068CL,0L},{0x9A3D068CL,0L,0L,0x4F9412EFL},{0xCFB27BEEL,1L,(-5L),0x4F9412EFL},{0L,0L,0xCFB27BEEL,0L},{5L,0L,1L,1L},{0L,0x4F371389L,0L,0x130844BDL}},{{1L,0x4F9412EFL,0x130844BDL,0L},{0L,0x4F371389L,0x9A3D068CL,0x9A3D068CL},{0xCFB27BEEL,0xCFB27BEEL,0x4F9412EFL,(-3L)},{0xA4B340A3L,0x4F9412EFL,0L,1L},{0x9A3D068CL,(-7L),0x130844BDL,0L},{0L,(-7L),0xCFB27BEEL,1L},{(-7L),0x4F9412EFL,(-7L),(-3L)}},{{0x4F371389L,0xCFB27BEEL,(-5L),0x9A3D068CL},{5L,0x4F371389L,(-3L),0xCFB27BEEL},{1L,1L,(-3L),0L},{5L,(-5L),(-5L),5L},{0x4F371389L,1L,(-7L),0L},{(-7L),0L,0xCFB27BEEL,1L},{0L,0L,0x130844BDL,1L}},{{0x9A3D068CL,0L,0L,0L},{0xA4B340A3L,1L,0x4F9412EFL,5L},{0xCFB27BEEL,(-5L),0x9A3D068CL,0L},{0L,1L,0L,0xCFB27BEEL},{0L,0x4F371389L,0x9A3D068CL,0x9A3D068CL},{0xCFB27BEEL,0xCFB27BEEL,0x4F9412EFL,(-3L)},{0xA4B340A3L,0x4F9412EFL,0L,1L}},{{0x9A3D068CL,(-7L),0x130844BDL,0L},{0L,(-7L),0xCFB27BEEL,1L},{(-7L),0x4F9412EFL,(-7L),(-3L)},{0x4F371389L,0xCFB27BEEL,(-5L),0x9A3D068CL},{5L,0x4F371389L,(-3L),0xCFB27BEEL},{1L,1L,(-3L),0L},{5L,(-5L),(-5L),5L}},{{0x4F371389L,1L,(-7L),0L},{(-7L),0L,0xCFB27BEEL,1L},{0L,0L,0x130844BDL,1L},{0x9A3D068CL,0L,0L,0L},{0xA4B340A3L,1L,0x4F9412EFL,5L},{0xCFB27BEEL,(-5L),0x9A3D068CL,0L},{0L,1L,0L,0xCFB27BEEL}},{{0L,0x4F371389L,0x9A3D068CL,0x9A3D068CL},{0xCFB27BEEL,0xCFB27BEEL,0x4F9412EFL,(-3L)},{0xA4B340A3L,0x4F9412EFL,0L,1L},{0x9A3D068CL,(-7L),0x130844BDL,0L},{0L,(-7L),0xCFB27BEEL,1L},{(-7L),0x4F9412EFL,(-7L),(-3L)},{0x4F371389L,0xCFB27BEEL,(-5L),0x9A3D068CL}}};
            int32_t l_1617 = (-3L);
            int32_t l_1618 = 0x8D7F11EEL;
            int32_t l_1619 = (-1L);
            int32_t l_1620 = 0x914ED3F8L;
            int32_t l_1621 = 0L;
            int32_t l_1622[10][2] = {{1L,0x9E31E6EDL},{0xBFCF7487L,0xBFCF7487L},{(-10L),0xBFCF7487L},{0xBFCF7487L,0x9E31E6EDL},{1L,0x0F2F7356L},{(-10L),1L},{0x0F2F7356L,0x9E31E6EDL},{0x0F2F7356L,1L},{(-10L),0x0F2F7356L},{1L,0x9E31E6EDL}};
            int i, j, k;
            ++g_1523;
            (*l_1519) = (p_43.f2 , &l_1183);
            for (g_1029 = 9; (g_1029 >= 0); g_1029 -= 1)
            {
                int32_t l_1542 = (-1L);
                int32_t l_1548 = 0x212064A3L;
                uint8_t l_1574 = 0x81L;
                int32_t l_1581 = (-8L);
            }
            for (g_292 = 0; (g_292 <= 3); g_292 += 1)
            {
                int i, j, k;
                (*l_1226) = l_1605;
                g_1004[g_292] ^= (l_1522 && p_43.f2);
                --l_1606;
            }
            for (p_42 = 0; (p_42 <= 9); p_42 += 1)
            {
                uint32_t l_1609 = 18446744073709551613UL;
                int32_t l_1612 = 0xA4F63203L;
                int32_t l_1613 = (-1L);
                int32_t l_1616[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_1616[i] = (-1L);
                (*l_923) |= p_43.f4;
                l_1609++;
                if (p_43.f1)
                    continue;
                (*l_923) ^= (p_43.f2 | l_1606);
                for (g_402 = 0; (g_402 <= 3); g_402 += 1)
                {
                    int32_t l_1615 = 0xAF6DE7A1L;
                    int32_t l_1624 = 9L;
                    int32_t l_1625 = 0x43B13EF6L;
                    int32_t l_1627[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1627[i] = 0L;
                    --l_1630;
                    (*g_1165) = (void*)0;
                }
            }
        }
        for (g_728 = 0; (g_728 <= 3); g_728 += 1)
        {
            union U0 l_1637 = {0x5A88219EL};
            int32_t l_1644 = 0xFDB24C69L;
            uint64_t ***l_1654 = &l_931[1];
            int32_t l_1656 = (-1L);
            int i;
            for (g_430 = 6; (g_430 >= 0); g_430 -= 1)
            {
                int i, j, k;
                (*l_1519) = l_924[g_728][(g_728 + 1)][g_728];
            }
            g_1004[g_728] = (safe_add_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(1UL, 5)) , (0UL >= ((l_1656 |= (p_43 , ((l_1637 , (safe_lshift_func_uint16_t_u_s(((((p_43.f0 & ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((l_1644 | ((safe_lshift_func_int8_t_s_s((((((((*l_1558)++) , (safe_rshift_func_uint16_t_u_u((((0x6F2099BDL && ((((((safe_sub_func_uint16_t_u_u(((*l_1078) == (l_1654 = l_1653)), 0L)) | 0x77L) ^ p_43.f2) , 0x026AL) >= 0x8A3BL) ^ l_1637.f2)) ^ 0xDC22L) != p_42), 1))) && l_1655) > p_42) && (-3L)) < 0x66BE19DFB507A8C4LL), l_1637.f1)) || l_1637.f0)) && l_1637.f2), 10)), p_41)) != p_43.f4)) == (*g_38)) != p_44) || 0L), 11))) != p_41))) <= 0x5844221FCEA45650LL))) & p_41), l_1637.f2));
        }
    }
    return (****g_1352);
}







static int8_t func_51(int32_t p_52)
{
    uint8_t l_521 = 1UL;
    int32_t l_523 = 1L;
    int32_t l_527 = 0x8706C081L;
    int32_t *l_529 = &g_4;
    uint16_t *l_677[5] = {&g_222,&g_222,&g_222,&g_222,&g_222};
    union U0 l_723 = {0x94A52266L};
    int64_t l_724 = (-7L);
    uint32_t l_725[8] = {0x039EA269L,0x039EA269L,0x039EA269L,0x039EA269L,0x039EA269L,0x039EA269L,0x039EA269L,0x039EA269L};
    uint8_t ***l_751 = &g_421;
    int32_t *l_783 = &g_103.f4;
    int8_t ***l_791 = &g_146;
    int32_t l_801 = 0x09D7BC48L;
    uint64_t l_822 = 0UL;
    int32_t l_903 = 0x12393B93L;
    int i;
lbl_782:
    for (p_52 = 28; (p_52 > 24); p_52--)
    {
        uint32_t l_73[2][4][4] = {{{0UL,4294967292UL,0x6511F0B9L,0x6B1F8487L},{0UL,0x6511F0B9L,0UL,0x171C2502L},{4294967292UL,0x6B1F8487L,0x171C2502L,0x171C2502L},{0x6511F0B9L,0x6511F0B9L,0x734F12CEL,0x6B1F8487L}},{{0x6B1F8487L,4294967292UL,0x734F12CEL,4294967292UL},{0x6511F0B9L,0UL,0x171C2502L,0x734F12CEL},{4294967292UL,0UL,0UL,4294967292UL},{0UL,4294967292UL,0x6511F0B9L,0x6B1F8487L}}};
        const int32_t *l_81[5][4][6] = {{{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4}}};
        int32_t l_522 = 3L;
        int32_t l_524 = 0x31BCA2B7L;
        uint16_t *l_525 = (void*)0;
        uint16_t *l_526[8] = {&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255};
        uint32_t l_528[9][5] = {{6UL,0x484D1A59L,0x0B20B32FL,0x284CDCECL,18446744073709551615UL},{0x484D1A59L,6UL,0x0E221C48L,0xED8611DEL,0x284CDCECL},{0x698077F8L,0xF471A302L,0x36A69DA2L,0xF471A302L,0x698077F8L},{0x0E221C48L,0xF471A302L,6UL,18446744073709551612UL,2UL},{2UL,6UL,0x284CDCECL,0x698077F8L,18446744073709551612UL},{0x0E221C48L,18446744073709551612UL,0x698077F8L,0x0E221C48L,0xB40869A8L},{18446744073709551615UL,0x0B20B32FL,0x36A69DA2L,0x36A69DA2L,0x0B20B32FL},{0xB40869A8L,1UL,0x36A69DA2L,6UL,0x58D55992L},{18446744073709551612UL,0xB40869A8L,0x698077F8L,0x284CDCECL,6UL}};
        int32_t *l_661 = &g_662;
        uint16_t *l_678 = &g_222;
        uint64_t l_680 = 8UL;
        int i, j, k;
    }
    if ((*l_529))
    {
        uint16_t l_693 = 0UL;
        uint8_t * const *l_754 = (void*)0;
        uint8_t * const **l_753[10][7][1] = {{{(void*)0},{&l_754},{(void*)0},{&l_754},{&l_754},{&l_754},{&l_754}},{{&l_754},{&l_754},{&l_754},{&l_754},{&l_754},{(void*)0},{&l_754}},{{(void*)0},{&l_754},{(void*)0},{&l_754},{&l_754},{&l_754},{&l_754}},{{&l_754},{&l_754},{&l_754},{&l_754},{&l_754},{(void*)0},{&l_754}},{{(void*)0},{&l_754},{(void*)0},{&l_754},{&l_754},{&l_754},{&l_754}},{{&l_754},{&l_754},{&l_754},{&l_754},{&l_754},{(void*)0},{&l_754}},{{(void*)0},{&l_754},{(void*)0},{&l_754},{&l_754},{&l_754},{&l_754}},{{&l_754},{&l_754},{&l_754},{&l_754},{&l_754},{(void*)0},{&l_754}},{{(void*)0},{&l_754},{(void*)0},{&l_754},{&l_754},{&l_754},{&l_754}},{{&l_754},{&l_754},{&l_754},{&l_754},{&l_754},{(void*)0},{&l_754}}};
        uint32_t l_756 = 0xD859497FL;
        int32_t l_768 = (-1L);
        int32_t l_770 = 1L;
        int32_t l_775 = 0L;
        uint8_t l_865 = 251UL;
        int32_t **l_868 = &g_406;
        int32_t **l_869[7][8] = {{(void*)0,&l_783,&l_529,&l_529,&l_783,(void*)0,&l_783,&l_529},{&l_783,&l_783,&l_783,(void*)0,(void*)0,&l_783,&l_783,&l_783},{&l_783,(void*)0,&l_529,(void*)0,&l_783,&l_783,(void*)0,&l_529},{&l_783,&l_783,(void*)0,&l_529,(void*)0,&l_783,&l_783,(void*)0},{&l_783,(void*)0,(void*)0,&l_783,&l_783,&l_783,(void*)0,(void*)0},{(void*)0,&l_783,&l_529,&l_529,&l_783,(void*)0,&l_783,&l_529},{&l_783,&l_783,&l_783,(void*)0,(void*)0,&l_783,&l_783,&l_783}};
        union U0 l_872[1] = {{0x6AA7A64AL}};
        int64_t l_906 = 2L;
        int i, j, k;
        for (g_402 = 0; (g_402 > (-21)); g_402 = safe_sub_func_int32_t_s_s(g_402, 4))
        {
            const uint64_t ***l_685 = &g_683;
            int32_t l_694 = 0L;
            uint8_t **l_695 = &g_325[1][0][0];
            int16_t *l_696 = &g_164;
            (*l_685) = g_683;
            (*g_274) = ((safe_div_func_int8_t_s_s((**g_176), ((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int8_t_s_u((((*g_683) != (*g_683)) , ((safe_add_func_int8_t_s_s((((*l_696) = (((6UL > l_693) < ((l_694 = 0xF80914F5AEF98267LL) , ((((void*)0 != l_695) && 0x4032L) | 0x78L))) , 0x9A48L)) , p_52), 4L)) ^ p_52)), (*l_529))))) , l_693))) && 4294967293UL);
        }
        if ((safe_add_func_int8_t_s_s(((!((((*g_406) = ((safe_sub_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(((0x6AL < ((safe_div_func_uint32_t_u_u(p_52, g_4)) || ((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(5L, (g_18 = (!(*g_38))))), (9UL | (+l_693)))), (safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u(((((0x3C894C2EL == ((((l_723 , p_52) != p_52) , (*l_529)) || (**g_176))) || 0xB2L) & l_724) == l_725[3]), (*l_529))), 9UL)))))), g_662)), p_52)) > p_52))) , 0x5413EBA81AB7CC4ELL), g_222)) || (-1L)), p_52)) ^ 0x2987L)) >= 0x0DC48ED9L) > p_52)) == 0x7988A134L), (*l_529))))
        {
            int8_t *l_731 = &g_217;
            int8_t **l_732 = &l_731;
            const int32_t *l_736 = &g_103.f4;
            const int32_t **l_735 = &l_736;
            const int32_t ***l_737 = &l_735;
            uint8_t ****l_752 = &l_751;
            int16_t *l_755 = &g_59;
            uint64_t *l_757 = &g_590;
            int32_t l_771 = 0x24BCD78DL;
            int8_t *****l_813 = (void*)0;
            int32_t l_821 = (-8L);
            int32_t l_857 = 1L;
            (*g_274) = (((safe_mod_func_uint16_t_u_u((((l_693 >= g_728) <= (safe_rshift_func_uint8_t_u_u(5UL, l_693))) , ((p_52 != (p_52 && g_103.f0)) ^ (((*l_732) = l_731) == (void*)0))), 0x57A6L)) , p_52) >= (*l_529));
            if (((((safe_div_func_int64_t_s_s((((*l_737) = l_735) == ((((*g_406) || (!(*l_529))) | ((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((0x3FL & ((((*l_757) &= (((((safe_div_func_int64_t_s_s(p_52, (safe_lshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_52, ((((*l_755) = ((0UL < ((((*l_752) = l_751) != (l_753[9][0][0] = l_753[9][0][0])) , p_52)) & (**g_683))) && p_52) < (*g_406)))), (*l_529))), 0)))) , l_756) > l_693) != p_52) , 0UL)) != 0x87B877A946AB5688LL) <= (*l_736))), 0xDA54L)), 1L)) || p_52)) , &g_274)), g_728)) < g_270) & 0x2C784D7458C6AD10LL) & 0xF33BL))
            {
                int32_t l_767 = 0L;
                int32_t l_769 = 1L;
                int32_t l_772[2][8][9] = {{{0xBCA8098EL,1L,0xAD78C5F7L,0L,0x5AF367D6L,0x366F5B7AL,0x987BC694L,0xC335D4E0L,1L},{0x13EE8BEBL,0x46D383CBL,0xBE29FFF5L,1L,0xF1E7466DL,0x0AA72E3FL,(-1L),(-5L),0xFD6DA644L},{0xB510D235L,0xA12F3E79L,0x80E04E90L,0xB0EFCA45L,1L,0xB0EFCA45L,0x80E04E90L,0xA12F3E79L,0xB510D235L},{1L,0x085648B6L,(-5L),0x4F7A9036L,(-1L),(-9L),(-7L),(-1L),(-1L)},{0xA12F3E79L,0xAD78C5F7L,0x4F357D52L,1L,0L,0x488FE14CL,0x987BC694L,0x4F357D52L,1L},{0x46D383CBL,(-1L),1L,0x085648B6L,(-3L),(-1L),0xF1E7466DL,(-1L),(-3L)},{(-7L),1L,1L,(-7L),0xE51B624CL,(-10L),0xB0EFCA45L,0x5AF367D6L,(-1L)},{0x4F7A9036L,0x5074D43CL,(-3L),(-8L),0x1B9F8746L,1L,0xDA5F9B07L,(-1L),1L}},{{0x80E04E90L,0xAD78C5F7L,6L,1L,0xE51B624CL,0x5AF367D6L,0xBCA8098EL,0L,0x4F357D52L},{1L,1L,(-9L),(-3L),(-3L),(-9L),1L,1L,(-4L)},{(-1L),0x5AF367D6L,0xB510D235L,(-1L),0xB0EFCA45L,1L,0x366F5B7AL,0xA12F3E79L,(-1L)},{(-1L),0x0C1FCFB8L,0xBE29FFF5L,1L,(-1L),0x5D8FE355L,0x46D383CBL,0xDA5F9B07L,(-4L)},{(-1L),0xB510D235L,(-1L),0x4F357D52L,0x30AAD08CL,1L,1L,0x30AAD08CL,0x4F357D52L},{0x13EE8BEBL,0x8DB4CEBCL,0x13EE8BEBL,(-4L),0xDA5F9B07L,0x46D383CBL,0x5D8FE355L,(-1L),1L},{1L,0x80E04E90L,(-7L),(-1L),0xA12F3E79L,0x366F5B7AL,1L,0xB0EFCA45L,(-1L)},{0xDA5F9B07L,(-8L),0L,(-4L),1L,1L,(-9L),(-3L),(-3L)}}};
                const int64_t l_781 = 1L;
                int8_t l_798 = 0L;
                int32_t *l_805[4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_805[i] = &l_801;
                for (g_292 = 20; (g_292 == 23); g_292 = safe_add_func_uint16_t_u_u(g_292, 1))
                {
                    int32_t *l_760 = &l_723.f4;
                    int32_t *l_761 = &g_324;
                    int32_t *l_762 = &l_723.f4;
                    int16_t l_763 = 0x7215L;
                    int32_t *l_764 = &l_523;
                    int32_t *l_765 = &g_103.f4;
                    int32_t *l_766[3];
                    const int8_t ***l_788 = &g_176;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_766[i] = &l_527;
                    g_776++;
                    for (g_164 = 3; (g_164 >= (-11)); g_164 = safe_sub_func_int16_t_s_s(g_164, 5))
                    {
                        if (p_52)
                            break;
                        if (l_781)
                            continue;
                        if (l_723.f4)
                            goto lbl_782;
                    }
                    (*l_735) = l_783;
                    for (l_527 = 0; (l_527 > 2); l_527++)
                    {
                        uint16_t ***l_792 = &g_171;
                        int32_t l_799 = 0xD17EA0A0L;
                        int32_t l_800 = 0xD6D0E4FFL;
                        (*l_764) |= ((((((safe_sub_func_int16_t_s_s((l_788 != ((safe_lshift_func_int8_t_s_u(p_52, 6)) , (l_772[1][4][1] , l_791))), (l_792 != &g_171))) >= ((+((*g_38) != ((safe_add_func_int64_t_s_s((***l_737), (safe_sub_func_uint8_t_u_u((((((void*)0 != &g_171) , &l_735) != (void*)0) , (*l_762)), l_798)))) == (*g_406)))) | (*g_38))) < 0x18L) || g_359[4]) , p_52) && (*g_684));
                        --g_802;
                    }
                }
                --g_806;
            }
            else
            {
                int8_t ****l_812 = &l_791;
                int8_t *****l_811 = &l_812;
                int32_t l_839 = 5L;
                uint16_t *** const l_845[1][5] = {{&g_171,&g_171,&g_171,&g_171,&g_171}};
                int64_t *l_852 = &g_426;
                int32_t *l_853 = &l_839;
                int32_t *l_854 = &l_839;
                int32_t *l_855 = &l_770;
                int32_t *l_856[1];
                uint16_t l_858[8] = {65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_856[i] = &l_527;
                if (((*l_783) = (*l_529)))
                {
                    for (g_183 = 2; (g_183 >= 9); g_183 = safe_add_func_uint64_t_u_u(g_183, 3))
                    {
                        l_813 = l_811;
                        l_768 |= (*g_406);
                        if (l_756)
                            break;
                        (*l_735) = &g_324;
                    }
                    for (g_626 = 0; (g_626 <= 47); ++g_626)
                    {
                        int16_t l_816 = 1L;
                        (**l_737) = &l_768;
                        return l_816;
                    }
                }
                else
                {
                    int32_t *l_817 = &l_770;
                    int32_t *l_818 = (void*)0;
                    int32_t *l_819 = &l_723.f4;
                    int32_t *l_820[3][4] = {{&l_770,&l_770,(void*)0,&g_662},{&l_523,&g_662,&l_523,(void*)0},{&l_523,(void*)0,(void*)0,&l_523}};
                    uint16_t ***l_844[10] = {&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171};
                    int i, j;
                    l_822--;
                    (*l_817) |= (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((65529UL >= ((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s(5L, 0x43L)), ((((safe_sub_func_int32_t_s_s((l_839 = (*g_274)), g_774)) & (safe_sub_func_uint8_t_u_u(((void*)0 != &l_753[3][2][0]), ((safe_mul_func_int16_t_s_s((g_164 = ((l_844[7] != l_845[0][3]) , g_103.f4)), p_52)) , 255UL)))) , &g_4) != (*l_735)))) <= p_52)), 5)), p_52)), 5)) <= 0xE480L), 11));
                    return (**g_176);
                }
                (*l_853) = (safe_sub_func_uint32_t_u_u((18446744073709551607UL && l_839), ((*g_406) = (p_52 | ((*l_852) = (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_356, (l_770 = p_52))), g_18)))))));
                --l_858[1];
            }
            for (l_771 = 0; (l_771 == 29); l_771 = safe_add_func_uint16_t_u_u(l_771, 2))
            {
                int32_t *l_863[9][6] = {{&l_523,&l_775,&l_523,(void*)0,&l_857,(void*)0},{&l_523,&l_775,&l_523,(void*)0,&l_857,(void*)0},{&l_523,&l_775,&l_523,(void*)0,&l_857,(void*)0},{&l_523,&l_775,&l_523,(void*)0,&l_857,(void*)0},{&l_523,&l_775,&l_523,(void*)0,&l_857,(void*)0},{&l_523,&l_775,&l_523,(void*)0,&l_857,(void*)0},{&l_523,&l_775,&l_523,(void*)0,&l_857,(void*)0},{&l_523,&l_775,&l_523,(void*)0,&l_857,(void*)0},{&l_523,&l_775,&l_523,(void*)0,&l_857,(void*)0}};
                int i, j;
                ++l_865;
            }
        }
        else
        {
            for (g_116 = 0; g_116 < 9; g_116 += 1)
            {
                g_420[g_116] = &g_421;
            }
        }
        g_274 = ((*l_868) = &l_523);
        for (g_802 = 8; (g_802 == 5); g_802 = safe_sub_func_int32_t_s_s(g_802, 2))
        {
            uint64_t l_873 = 0x0E0B90A964D76900LL;
            int32_t l_887 = 0x351EACD6L;
            int32_t l_888 = (-2L);
            int32_t l_890 = 0xE0180390L;
            int32_t l_892 = 0xAEC5E2C8L;
            int32_t l_899 = 0xA637A85CL;
            int32_t l_900 = 1L;
            int32_t l_901 = 1L;
            int32_t l_902 = 0x25CD356EL;
            int32_t l_907 = (-5L);
            int32_t l_910 = (-1L);
            int32_t l_911 = 0x9C69B0D1L;
            l_873 = (l_872[0] , p_52);
        }
    }
    else
    {
        int64_t *l_916 = &g_402;
        int64_t **l_915 = &l_916;
        int64_t ***l_917 = (void*)0;
        int64_t **l_918 = &l_916;
        l_918 = l_915;
    }
    return (*l_529);
}







static int64_t func_68(int8_t p_69, uint8_t p_70, int32_t * p_71, int64_t p_72)
{
    int32_t l_530 = 0x6B61277FL;
    uint8_t ****l_531 = &g_420[5];
    int32_t l_538 = 0x964D2EB6L;
    uint64_t *l_539 = &g_183;
    int32_t l_540 = 1L;
    int32_t l_561 = (-1L);
    int32_t l_589[9][4][7] = {{{(-9L),0L,0x26E0854CL,0xE95D7626L,1L,0L,(-1L)},{1L,0xB100D8B4L,1L,0L,0L,0L,6L},{6L,(-5L),1L,0x440DFB41L,0xF2CC5A91L,0x6B38B57AL,0x5792095EL},{0xB100D8B4L,0x563B1E9FL,(-1L),0L,2L,0L,0L}},{{0x8A251592L,(-1L),0xC368378CL,(-1L),0x8A251592L,0L,1L},{0L,0L,0xCD85B9FEL,0xD0B9F633L,0L,(-1L),0xB83A8703L},{0xEA52AD08L,0L,6L,0L,6L,1L,0x3440D838L},{0L,0xD0B9F633L,0xA8BB9C00L,6L,0xA8BB9C00L,0xD0B9F633L,0L}},{{0x8A251592L,0xBF79E31BL,0x4ADF78E6L,0xBC4E16F0L,3L,0xE95D7626L,0xC368378CL},{0xB100D8B4L,0L,0x8F0CB5B0L,(-6L),6L,0xB83A8703L,0L},{6L,1L,0x4ADF78E6L,1L,(-9L),1L,0x4ADF78E6L},{1L,1L,0xA8BB9C00L,0L,0x563B1E9FL,0xCD85B9FEL,0L}},{{(-9L),1L,6L,6L,0xC368378CL,1L,1L},{(-3L),(-1L),0xCD85B9FEL,0L,0x563B1E9FL,1L,0x563B1E9FL},{0x3440D838L,0x440DFB41L,0xC368378CL,0x6125E4D6L,(-9L),0x33B7725DL,6L},{0L,0xCD85B9FEL,(-1L),(-3L),6L,0L,0L}},{{0x4ADF78E6L,6L,1L,0xBF79E31BL,3L,0L,6L},{0L,0xA8BB9C00L,1L,1L,0xA8BB9C00L,0L,0x563B1E9FL},{0x58C4F036L,6L,0x26E0854CL,6L,6L,0xD3B51CE8L,1L},{(-6L),0x8F0CB5B0L,0L,0xB100D8B4L,0L,0L,0L}},{{1L,6L,(-9L),1L,0x8A251592L,0xBF79E31BL,0x4ADF78E6L},{6L,0xA8BB9C00L,0xD0B9F633L,0L,2L,0L,0L},{0x42FB3E71L,6L,1L,0L,0xF2CC5A91L,(-5L),0xC368378CL},{0xD0B9F633L,0xCD85B9FEL,0L,0L,0L,0L,0L}},{{3L,0x440DFB41L,3L,1L,1L,0xBC4E16F0L,0x3440D838L},{0L,(-1L),0x563B1E9FL,0xB100D8B4L,1L,0xA8BB9C00L,0xB83A8703L},{0xC368378CL,1L,(-6L),6L,0xA5A078A1L,0xBC4E16F0L,1L},{0L,1L,0xCFC6677FL,2L,0xCD85B9FEL,0xA8BB9C00L,(-6L)}},{{(-6L),0L,0x26E0854CL,0x440DFB41L,0x4ADF78E6L,6L,1L},{0L,0xA8BB9C00L,0L,0L,6L,0xCD85B9FEL,0xB83A8703L},{(-6L),0x440DFB41L,6L,0xD3B51CE8L,6L,0x440DFB41L,(-6L)},{0xCD85B9FEL,0xB100D8B4L,0L,(-6L),2L,(-1L),0xCFC6677FL}},{{0xECFF9088L,0x6B38B57AL,0x42FB3E71L,1L,0x5792095EL,1L,1L},{0L,0L,0L,1L,0xB100D8B4L,1L,0L},{0xA5A078A1L,0x4AB76CD8L,6L,(-1L),0x58C4F036L,1L,0x3440D838L},{0xB100D8B4L,0L,0L,0L,0xCFC6677FL,0L,0xA8BB9C00L}}};
    int16_t l_620 = 3L;
    int8_t ***l_657 = &g_146;
    int32_t l_659 = 0x3F80D90FL;
    union U0 *l_660 = &g_103;
    int i, j, k;
    if ((((p_70 = (((l_530 >= (l_530 <= (l_531 == (void*)0))) , (safe_mod_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((*l_539) = (((g_272 & ((0x14C3B143L <= (safe_lshift_func_uint16_t_u_u(((g_4 | 0x650C281D80570E5ELL) , ((((p_72 | p_72) , 0x2612E287L) || (*p_71)) < l_538)), l_530))) & p_69)) | p_72) > l_530)), g_402)), l_530))) & l_538)) ^ l_540) , l_540))
    {
        uint16_t l_547 = 0x5FADL;
        int8_t *l_552 = &g_430;
        uint32_t *l_553 = &g_272;
        int32_t l_554 = 0xD698AEF2L;
        l_554 ^= ((((safe_div_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_547, g_403)), ((*l_552) = (safe_add_func_uint16_t_u_u(l_538, (safe_rshift_func_int8_t_s_u(l_538, 2))))))) || ((((((l_530 , (((((g_270 = ((((*l_531) = (*l_531)) != (void*)0) , l_530)) && l_540) , (void*)0) != l_553) > 4294967295UL)) >= p_70) != g_359[2]) ^ 255UL) , (void*)0) == &g_272)), l_540)) != g_402) , l_530) <= 9L);
    }
    else
    {
        int32_t *l_555 = &g_324;
        int32_t *l_556 = &g_324;
        int32_t *l_557 = &g_103.f4;
        int32_t *l_558 = &g_103.f4;
        int32_t *l_559 = &g_103.f4;
        int32_t *l_560[1];
        int32_t **l_565 = &l_560[0];
        union U0 *l_629 = &g_103;
        int i;
        for (i = 0; i < 1; i++)
            l_560[i] = (void*)0;
        --g_562[3];
        (*l_565) = l_558;
lbl_566:
        (*g_406) = (*p_71);
        if ((*p_71))
        {
            if (l_540)
                goto lbl_566;
        }
        else
        {
            union U0 l_579 = {-9L};
            int32_t l_588 = 0L;
            const int8_t ***l_598[5][2];
            union U0 *l_628 = &g_103;
            union U0 **l_627[5][8] = {{&l_628,&l_628,&l_628,&l_628,&l_628,&l_628,&l_628,&l_628},{&l_628,&l_628,(void*)0,&l_628,&l_628,&l_628,&l_628,&l_628},{&l_628,&l_628,&l_628,&l_628,&l_628,&l_628,&l_628,&l_628},{&l_628,&l_628,&l_628,&l_628,(void*)0,(void*)0,&l_628,&l_628},{&l_628,&l_628,(void*)0,&l_628,&l_628,&l_628,(void*)0,&l_628}};
            int8_t ****l_658 = &l_657;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 2; j++)
                    l_598[i][j] = &g_176;
            }
            for (g_154 = 0; (g_154 > 52); ++g_154)
            {
                int16_t l_574 = 0x49CCL;
                int8_t l_585 = 0L;
                int32_t l_586 = 3L;
                int32_t l_587 = 0L;
                int32_t l_602[6][8][4] = {{{0x81D03DF5L,(-1L),1L,0xABE85DF3L},{0xB8371799L,0x9530237FL,(-5L),0L},{0xFE08B599L,1L,(-7L),(-1L)},{0x31825AB7L,5L,6L,(-1L)},{0x677C1CEDL,(-1L),1L,1L},{0xEC51C669L,9L,1L,0x53010F4CL},{0xCBB3789BL,0xEBC5624AL,0x514600DAL,0xD8626822L},{1L,0xABE85DF3L,5L,0xA037DA4EL}},{{0x349396FFL,(-5L),0xF58D1AD2L,0xC0394E5CL},{0xC0394E5CL,4L,0x41F8240DL,0xFE08B599L},{0x9A452FD4L,0xF58D1AD2L,1L,(-7L)},{(-1L),0xC0394E5CL,0xEC51C669L,0x6655DB0BL},{0xD8626822L,0x685F5BD4L,0xC0394E5CL,0x685F5BD4L},{(-1L),0xCBB3789BL,(-1L),0x9A452FD4L},{4L,0x349396FFL,0x31825AB7L,1L},{0x53010F4CL,(-1L),0L,0xB8371799L}},{{0x53010F4CL,6L,0x31825AB7L,(-1L)},{4L,0xB8371799L,(-1L),1L},{(-1L),2L,0xC0394E5CL,9L},{0xD8626822L,1L,0xEC51C669L,3L},{(-1L),0L,1L,(-1L)},{0x9A452FD4L,0x81D03DF5L,0x41F8240DL,0xD9A9A701L},{0xC0394E5CL,(-1L),(-1L),0x31825AB7L},{0x6655DB0BL,0x41F8240DL,0xF58D1AD2L,(-7L)}},{{0x81D03DF5L,6L,1L,(-1L)},{1L,(-1L),0x81D03DF5L,0x349396FFL},{0x31825AB7L,0L,1L,1L},{0x349396FFL,0xA7D4CBF4L,0xDE57011CL,0xDE57011CL},{(-7L),(-7L),0x685F5BD4L,(-6L)},{3L,0xF5D10A1CL,0xABE85DF3L,1L},{0xD8626822L,0xCB473B25L,0xFE08B599L,0xABE85DF3L},{0xC0394E5CL,0xCB473B25L,0x9A452FD4L,1L}},{{0xCB473B25L,0xF5D10A1CL,4L,(-6L)},{1L,(-7L),(-1L),0xDE57011CL},{(-4L),0xA7D4CBF4L,0xCB473B25L,1L},{0xFE08B599L,0L,5L,0x349396FFL},{1L,(-1L),1L,(-1L)},{(-1L),6L,1L,(-7L)},{(-7L),0x41F8240DL,(-1L),0x31825AB7L},{0xEC51C669L,(-1L),3L,1L}},{{5L,0xC0394E5CL,0L,(-1L)},{0xA7D4CBF4L,2L,(-8L),0x9A452FD4L},{0L,(-8L),0xF5D10A1CL,0x514600DAL},{(-1L),1L,(-1L),1L},{0x685F5BD4L,0xD8626822L,0xD9A9A701L,0x9530237FL},{2L,0xDE57011CL,(-7L),0xD8626822L},{0x53010F4CL,(-1L),(-7L),(-1L)},{2L,0x6655DB0BL,0xD9A9A701L,0xF5D10A1CL}}};
                int i, j, k;
                for (g_358 = 0; (g_358 < 4); g_358 = safe_add_func_int64_t_s_s(g_358, 1))
                {
                    if ((*g_406))
                    {
                        (*l_565) = (void*)0;
                    }
                    else
                    {
                        uint16_t *l_573[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t l_580 = 1L;
                        int i;
                        (*g_406) = (safe_mul_func_int8_t_s_s((((l_574 &= p_69) == (safe_add_func_int32_t_s_s((((safe_mod_func_uint64_t_u_u(p_72, (((p_70 || 1UL) , ((((l_579 , g_103.f1) , &g_562[0]) == (void*)0) || ((*l_555) |= (*g_406)))) | p_70))) > p_70) || g_217), g_562[2]))) == (*g_406)), 1UL));
                        l_580 = ((*l_556) ^= (*p_71));
                    }
                    return l_574;
                }
                for (l_538 = 11; (l_538 == (-3)); l_538--)
                {
                    int32_t l_583 = (-1L);
                    int32_t l_584 = (-5L);
                    const uint8_t *l_594 = (void*)0;
                    const uint8_t **l_593 = &l_594;
                    const uint8_t ***l_595 = &l_593;
                    ++g_590;
                    (*l_595) = l_593;
                    for (g_255 = 0; (g_255 >= 39); g_255 = safe_add_func_int32_t_s_s(g_255, 3))
                    {
                        (*l_565) = &g_4;
                        return g_255;
                    }
                    (*l_556) &= ((void*)0 != &g_172);
                }
                if (((void*)0 == l_598[1][1]))
                {
                    int64_t l_601 = (-1L);
                    int32_t l_603 = 0x2EDBF376L;
                    uint64_t *l_614 = &g_248;
                    for (g_403 = 0; (g_403 <= 4); g_403 += 1)
                    {
                        int32_t l_599 = 1L;
                        int32_t l_600[8][2][6] = {{{(-1L),1L,0x39EB706AL,0L,0x3F2A52CFL,0xB5F4A50EL},{(-2L),0xB350D0E3L,0xE3B5AC53L,(-1L),(-1L),0xE3B5AC53L}},{{0xE6BB63A7L,0xE6BB63A7L,0x4AF2616FL,(-1L),0xB350D0E3L,0xE37ED429L},{(-2L),(-10L),0xB5F4A50EL,0L,0x4B6E7529L,0x4AF2616FL}},{{(-1L),(-2L),0xB5F4A50EL,0L,0xE6BB63A7L,0xE37ED429L},{0xC2422914L,0L,0x4AF2616FL,(-10L),0L,0xE3B5AC53L}},{{(-10L),0L,0xE3B5AC53L,0x3F2A52CFL,0xE6BB63A7L,0xB5F4A50EL},{0x4B6E7529L,(-2L),0x39EB706AL,(-2L),0x4B6E7529L,0x9E0D6B95L}},{{0x4B6E7529L,(-10L),0xEB0524ECL,0x3F2A52CFL,0xB350D0E3L,(-7L)},{(-10L),0xE6BB63A7L,1L,(-10L),(-1L),(-7L)}},{{0xC2422914L,0xB350D0E3L,0xEB0524ECL,0L,0x3F2A52CFL,0x9E0D6B95L},{(-1L),1L,0x39EB706AL,0L,0x3F2A52CFL,0xB5F4A50EL}},{{(-2L),0xB350D0E3L,0xE3B5AC53L,(-1L),(-1L),0xE3B5AC53L},{0xE6BB63A7L,(-1L),0xE6BB63A7L,(-1L),(-4L),(-2L)}},{{0x3B5B3055L,1L,0xC2422914L,0x917BBBF6L,0x38C1FD13L,0xE6BB63A7L},{(-1L),0x3B5B3055L,0xC2422914L,0xBFCBCAA7L,(-1L),(-2L)}}};
                        uint32_t *l_609 = &g_272;
                        uint64_t **l_615 = &l_539;
                        int16_t *l_621 = &l_574;
                        uint16_t **l_625 = &g_172;
                        int i, j, k;
                        ++g_604[0][1];
                        (*l_557) = (safe_div_func_int32_t_s_s((g_562[g_403] && l_579.f4), ((*l_609) = p_69)));
                        (*g_406) = ((g_222 = (safe_mul_func_int8_t_s_s((g_222 != (p_69 , (((*l_615) = l_614) != (void*)0))), (safe_sub_func_uint16_t_u_u(((((*l_621) ^= (safe_mod_func_uint32_t_u_u(4294967291UL, (l_620 ^= (p_72 , l_579.f4))))) || (safe_sub_func_int8_t_s_s(0xF0L, l_599))) ^ p_70), g_359[0]))))) == l_588);
                        (*l_557) = (~((((*l_625) = l_621) == (void*)0) | 0UL));
                    }
                    if (g_626)
                        continue;
                }
                else
                {
                    for (g_270 = 0; (g_270 <= 1); g_270 += 1)
                    {
                        return (*l_558);
                    }
                }
            }
            l_629 = (void*)0;
            l_660 = ((+((safe_mul_func_int8_t_s_s(((((safe_add_func_int8_t_s_s(0x0CL, (~(safe_div_func_uint64_t_u_u(((*l_539) ^= (safe_lshift_func_int16_t_s_u((((g_426 = (((safe_add_func_int16_t_s_s((((0x18ACL < ((!((0x7B2DL == 0x4A1CL) != (safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((((l_579.f2 >= (l_589[1][0][6] |= ((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((&g_324 != (void*)0) | (((*l_658) = l_657) == &g_176)), (*l_556))), 4)), l_588)) < p_70))) && l_659) , l_561), p_72)), p_72)), (*p_71))), 0L)))) <= 8UL)) >= 0xB6F482C7E69CE999LL) | l_579.f4), l_659)) , g_59) || 0L)) > 0xF6AF04A26760244DLL) < (-1L)), 10))), (*l_556)))))) & p_70) && (-3L)) <= l_579.f4), 1L)) ^ (-1L))) , (void*)0);
        }
    }
    return p_70;
}







static uint16_t func_79(const int32_t * p_80)
{
    int8_t *l_85[5] = {&g_39,&g_39,&g_39,&g_39,&g_39};
    int32_t l_88 = 0x67AAC3BCL;
    union U0 l_89 = {7L};
    int8_t *l_90 = &l_89.f2;
    int8_t *l_92[1];
    int8_t **l_91 = &l_92[0];
    int8_t *l_101 = &g_102;
    uint16_t *l_104 = &g_18;
    int32_t l_105[6][8][5] = {{{0xC0C90B22L,3L,(-5L),5L,1L},{1L,(-4L),0x8B5DB27CL,1L,0x0819D5A3L},{0x004527F8L,1L,(-6L),0x6FB37E84L,(-5L)},{0x0819D5A3L,0L,3L,3L,0L},{0xD8A5C089L,1L,(-10L),(-5L),1L},{0xB3BE7B8BL,(-8L),0xB0014755L,1L,0x52D49A33L},{8L,0xD8A5C089L,(-5L),8L,1L},{0xB3BE7B8BL,3L,0x0C1A6FE1L,0x3C5EE741L,0x4C6454C9L}},{{0xD8A5C089L,5L,0x3B6EA11BL,3L,0x8C9C9652L},{0x0819D5A3L,6L,0x4C6454C9L,0L,0L},{0x004527F8L,0x5618A321L,0xFEEA102AL,(-5L),(-5L)},{1L,1L,0L,1L,1L},{0xC0C90B22L,0x6FB37E84L,1L,0xB9F09720L,3L},{0x3C5EE741L,0x0819D5A3L,0xF9695FF7L,0x83ED3529L,3L},{(-5L),5L,(-8L),0x6FB37E84L,3L},{3L,0x83ED3529L,0x0819D5A3L,0x8B95DE17L,1L}},{{3L,(-5L),5L,1L,(-5L)},{0L,(-8L),9L,1L,0L},{(-1L),0x5CD88FCBL,0xB9F09720L,0xFEEA102AL,0x8C9C9652L},{3L,0xF9695FF7L,0xF9695FF7L,3L,0x4C6454C9L},{5L,1L,1L,0L,1L},{0xF9695FF7L,0xB3BE7B8BL,(-1L),0x0819D5A3L,0x52D49A33L},{3L,(-10L),0xFEEA102AL,0L,1L},{0L,1L,(-9L),3L,0L}},{{0xB9F09720L,1L,0xB632CC17L,0xFEEA102AL,(-5L)},{0x3C5EE741L,0x8B95DE17L,0x0C1A6FE1L,1L,0x0819D5A3L},{0L,3L,0xA535ACB9L,1L,1L},{0x8B5DB27CL,0xB3BE7B8BL,0x8B5DB27CL,0x8B95DE17L,6L},{0x004527F8L,5L,(-10L),0x6FB37E84L,0xB9F09720L},{6L,0L,(-3L),0x83ED3529L,0L},{(-5L),0x5CD88FCBL,(-10L),0xB9F09720L,1L},{0xB3BE7B8BL,1L,0x8B5DB27CL,1L,(-1L)}},{{(-5L),0xD8A5C089L,0xA535ACB9L,(-5L),1L},{(-4L),0x83ED3529L,0x0C1A6FE1L,0L,(-4L)},{8L,0xB2F22DDFL,(-1L),0xFEEA102AL,(-1L)},{0x4C6454C9L,0x4C6454C9L,0xB3BE7B8BL,0x8B95DE17L,(-1L)},{(-8L),1L,0xAC715C01L,(-6L),8L},{3L,0x10A02D52L,9L,(-4L),(-3L)},{0x5618A321L,1L,0x8C9C9652L,5L,0xFEEA102AL},{0x01E83513L,0x4C6454C9L,0L,1L,0xF9695FF7L}},{{5L,0xB2F22DDFL,1L,1L,0L},{0x8B5DB27CL,0xF9695FF7L,1L,1L,3L},{0L,8L,0xA535ACB9L,0xA535ACB9L,8L},{0xDD93F870L,0L,(-9L),3L,0L},{0xC0C90B22L,1L,1L,(-1L),0x57FAA682L},{9L,0xDD93F870L,0L,9L,(-4L)},{0xC0C90B22L,0xA535ACB9L,0x3B6EA11BL,0x5618A321L,0xAC715C01L},{0xDD93F870L,0L,0L,0x4C6454C9L,3L}}};
    int8_t ***l_518[7];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_92[i] = &l_89.f2;
    for (i = 0; i < 7; i++)
        l_518[i] = (void*)0;
    g_146 = func_82((l_85[0] = l_85[3]), (safe_lshift_func_uint8_t_u_u((l_88 <= ((l_89 , l_89.f1) & ((l_90 == ((*l_91) = (void*)0)) & ((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s((l_105[0][2][0] = (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((*l_101) = l_88), 7)) != (g_103 , ((*l_104) = l_88))), l_88))), l_89.f2)) == (*g_38)) , l_89.f0), l_89.f4)) > 0x5305585CL)))), 1)));
    return l_105[0][2][0];
}







static int8_t ** func_82(int8_t * p_83, uint32_t p_84)
{
    uint16_t *l_112 = &g_18;
    uint16_t *l_115 = &g_116;
    int32_t l_122 = 0xB7708998L;
    uint16_t l_140 = 0UL;
    int32_t l_141 = 0xC264F731L;
    int8_t *l_143 = (void*)0;
    int8_t **l_142 = &l_143;
    uint32_t * const l_320 = &g_270;
    int32_t l_321 = 0x84F03353L;
    int32_t l_425 = 4L;
    uint16_t l_471 = 0x2297L;
    int32_t *l_476 = &l_425;
    int8_t l_500 = 0x0CL;
    uint16_t **l_511 = &l_112;
    if (((l_141 = (g_103.f1 < (safe_lshift_func_uint16_t_u_s((4294967294UL <= (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u(((p_83 != (void*)0) > (((*l_115) = (++(*l_112))) > (safe_mod_func_int8_t_s_s((((safe_unary_minus_func_int64_t_s((((safe_mul_func_int8_t_s_s(((&g_4 == (void*)0) , ((l_122 <= (((+((safe_lshift_func_uint8_t_u_u(l_122, ((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((((safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(l_140, 6)) < l_122), 0xF2DDL)), 0x53C284EEL)) , l_115) == l_112) | 0x79L), l_122)), p_84)), l_122)) > 0L), l_122)) & 3L))) , p_84)) >= p_84) == (*p_83))) || g_103.f4)), l_122)) , g_4) < g_59))) < 0x91EA77C7A1EF1C42LL) < g_59), p_84)))), g_103.f0)) | 0x875DF3ABA37D4A05LL), 5))), l_122)))) <= l_140))
    {
        int8_t **l_144 = &l_143;
        int8_t **l_145[8];
        int i;
        for (i = 0; i < 8; i++)
            l_145[i] = &l_143;
        return g_146;
    }
    else
    {
        uint8_t *l_153 = &g_154;
        int32_t l_157 = 0x10D84A95L;
        int8_t **l_160 = &l_143;
        uint16_t **l_161 = &l_115;
        int8_t **l_162 = (void*)0;
        int16_t *l_163 = &g_164;
        int16_t *l_165 = &g_166;
        const uint64_t *l_201 = &g_183;
        int64_t l_206 = 0x9094550C6410FA4CLL;
        int32_t *l_363 = &g_324;
        uint16_t l_419[1];
        uint8_t l_422 = 255UL;
        int32_t l_429 = 0xFF055665L;
        int8_t ***l_499 = &l_162;
        uint16_t ***l_509 = (void*)0;
        uint16_t ***l_510 = &g_171;
        int i;
        for (i = 0; i < 1; i++)
            l_419[i] = 65535UL;
        if (((safe_mul_func_int8_t_s_s((9L < (safe_rshift_func_int16_t_s_s(1L, ((*l_165) |= (((*l_163) ^= ((((safe_sub_func_uint8_t_u_u(((*l_153) = p_84), (safe_mod_func_int8_t_s_s((*p_83), (((l_157 && l_140) < (safe_mul_func_int16_t_s_s((l_160 != (((l_112 = &l_140) != ((*l_161) = &g_116)) , l_162)), l_140))) | 255UL))))) != (*p_83)) , g_103.f2) < g_59)) > 65535UL))))), g_167)) != (*g_38)))
        {
            uint16_t l_175 = 0x40B6L;
            const int8_t ***l_178 = &g_176;
            int16_t l_179 = 1L;
            uint64_t *l_182 = &g_183;
            int32_t *l_184 = (void*)0;
            int32_t *l_185 = &g_103.f4;
            uint16_t **l_198 = &l_112;
            uint64_t *l_200 = &g_183;
            uint64_t **l_199 = &l_200;
            int32_t l_219[3];
            int8_t ***l_230[3];
            int i;
            for (i = 0; i < 3; i++)
                l_219[i] = 6L;
            for (i = 0; i < 3; i++)
                l_230[i] = &l_160;
            (*l_185) = ((1L & ((((*l_182) = ((((+(safe_rshift_func_int8_t_s_s(((g_171 == l_161) | 4294967295UL), 3))) < (((((((safe_div_func_uint8_t_u_u((((((l_179 |= (l_175 ^ (l_162 == ((*l_178) = g_176)))) > (((l_157 > (safe_add_func_uint16_t_u_u(0xF3DCL, p_84))) | l_175) >= p_84)) || 0L) , (void*)0) != (void*)0), (*p_83))) , l_157) & (*g_38)) , g_103.f1) & p_84) & l_157) || 0x9566CB3554E5FB26LL)) | g_39) < g_166)) | p_84) > 1L)) | (*p_83));
            (*l_185) ^= ((p_84 == ((safe_rshift_func_int16_t_s_u(g_18, 15)) , (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((l_157 || (safe_mul_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(g_154, 1)) == 0L) <= (-1L)), 3L))) , ((void*)0 == l_143)), (*p_83))) , p_84), g_167)))) == 18446744073709551615UL);
            if ((((((safe_mul_func_uint16_t_u_u(p_84, (l_182 != ((((l_198 == l_161) < ((0xD9L < (*l_185)) < ((((*l_199) = l_182) != l_201) != (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((0x045B8B10L & g_39) == 0L), 0x03F3L)), p_84))))) >= g_39) , (void*)0)))) , (-1L)) || g_39) && p_84) < l_206))
            {
                int32_t *l_207 = &l_122;
                int32_t *l_208 = &g_103.f4;
                int32_t *l_209 = &l_122;
                int32_t *l_210 = &g_103.f4;
                int32_t *l_211 = &l_141;
                int32_t *l_212 = &l_122;
                int32_t *l_213 = &g_103.f4;
                int32_t *l_214 = &l_122;
                int32_t *l_215 = &l_157;
                int32_t *l_216 = &g_103.f4;
                int32_t *l_218 = (void*)0;
                int32_t *l_220 = &l_219[1];
                int32_t *l_221[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_221[i] = &l_219[1];
                g_222++;
            }
            else
            {
                int8_t ***l_227 = (void*)0;
                int8_t l_232 = 0x4FL;
                uint8_t l_273 = 254UL;
                int32_t *l_293[1][8][4] = {{{&l_219[1],(void*)0,&l_157,&g_4},{&l_122,(void*)0,(void*)0,&l_122},{(void*)0,&l_122,&l_219[1],&l_219[1]},{(void*)0,&l_219[1],(void*)0,&l_157},{&l_122,&l_219[1],&l_157,&l_157},{&l_219[1],&l_219[1],&g_4,&l_219[1]},{&l_219[1],&l_122,&g_4,&l_122},{&l_219[1],(void*)0,&l_157,&g_4}}};
                int i, j, k;
lbl_242:
                for (g_222 = 0; (g_222 <= 15); ++g_222)
                {
                    int8_t ****l_228 = (void*)0;
                    int8_t ****l_229[2];
                    union U0 l_231 = {-4L};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_229[i] = &l_227;
                    l_230[2] = l_227;
                    if (((l_231 , l_232) ^ ((safe_sub_func_uint64_t_u_u(0x99C71661823C796ELL, (safe_add_func_uint16_t_u_u(0x35CCL, ((**l_161) |= (safe_mod_func_int16_t_s_s((+(safe_rshift_func_uint8_t_u_s((0x447F79A1B8C43723LL >= (p_84 == ((void*)0 == &g_172))), (((*l_198) = (*l_161)) != (void*)0)))), l_231.f0))))))) | g_4)))
                    {
                        return g_146;
                    }
                    else
                    {
                        return g_146;
                    }
                }
                if ((&g_172 != &g_172))
                {
                    if (g_103.f0)
                        goto lbl_242;
                }
                else
                {
                    int32_t *l_251 = &g_103.f4;
                    int32_t *l_252 = &l_157;
                    int32_t *l_253 = &g_103.f4;
                    int32_t *l_254 = (void*)0;
                    uint32_t *l_271[9][5][5] = {{{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272}},{{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272}},{{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272}},{{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,&g_272,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272}},{{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272}},{{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272}},{{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272}},{{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272}},{{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_272,&g_272}}};
                    int i, j, k;
                    (*l_185) ^= (-5L);
                    for (g_166 = 0; (g_166 <= 0); g_166 += 1)
                    {
                        int32_t *l_243 = &g_103.f4;
                        int32_t *l_244 = &g_103.f4;
                        int32_t *l_245 = &l_219[1];
                        int32_t *l_246 = &l_141;
                        int32_t *l_247[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                        int i, j;
                        (*l_185) = ((void*)0 == &g_59);
                        ++g_248;
                    }
                    g_255++;
                    if ((p_84 & (l_206 & (safe_sub_func_int32_t_s_s(p_84, ((safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((g_103 , ((g_248 , (safe_add_func_uint16_t_u_u((&g_176 != l_227), (l_157 = l_232)))) | ((((l_273 = (g_270 = g_222)) & 6L) >= g_103.f2) >= p_84))) == 0x0F92F17FB0F1F695LL), p_84)), 0xD22769CAE7AD8DBDLL)) ^ g_59) ^ 1L), g_116)), 9)) , p_84))))))
                    {
                        (*l_251) = ((void*)0 == (*g_171));
                        g_274 = &g_4;
                        l_122 &= ((safe_div_func_uint8_t_u_u(g_272, (safe_rshift_func_uint16_t_u_s(((safe_div_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u(((!((g_274 = ((safe_div_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(g_59, (0xCDL && (*g_38)))) , (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((g_292 = ((4294967290UL ^ (p_84 || p_84)) && (((((*l_185) , (void*)0) != &l_179) && 0xE4L) | (*l_251)))) >= 0x891F5278872D5F37LL), 0x8295L)), 6UL))) > l_140), 1L)) , (void*)0)) != l_293[0][7][0])) , (*p_83)), 7)) == 0UL), p_84)) != 7UL), 9)))) & (*l_185));
                    }
                    else
                    {
                        return g_146;
                    }
                }
            }
        }
        else
        {
            uint64_t l_297[8][9][3] = {{{18446744073709551610UL,1UL,0x0640D2D85689E5FALL},{0x7001D0AB515CB5E7LL,18446744073709551615UL,18446744073709551615UL},{18446744073709551611UL,7UL,0UL},{0x7001D0AB515CB5E7LL,0x75935479E039A9A8LL,18446744073709551612UL},{18446744073709551610UL,18446744073709551615UL,1UL},{0UL,0x0BE7D7A5CF373AB2LL,0x2EE5E1461F6864BBLL},{18446744073709551615UL,0UL,0xE0A22320633EA239LL},{18446744073709551615UL,0x0640D2D85689E5FALL,0xE0A22320633EA239LL},{18446744073709551615UL,0x2EE5E1461F6864BBLL,0x2EE5E1461F6864BBLL}},{{18446744073709551612UL,0x7001D0AB515CB5E7LL,1UL},{1UL,2UL,18446744073709551612UL},{0x22D616180E2AD8F1LL,3UL,0UL},{5UL,0xD564F06660D7ADAALL,18446744073709551615UL},{0UL,3UL,0x0640D2D85689E5FALL},{18446744073709551615UL,2UL,18446744073709551611UL},{0x0640D2D85689E5FALL,18446744073709551610UL,0x22D616180E2AD8F1LL},{0x225A8C6FE17D3D01LL,0x75935479E039A9A8LL,0xE0A22320633EA239LL},{0x75935479E039A9A8LL,18446744073709551615UL,0UL}},{{0x75935479E039A9A8LL,18446744073709551611UL,0x0640D2D85689E5FALL},{0x225A8C6FE17D3D01LL,0x225A8C6FE17D3D01LL,0x0BE7D7A5CF373AB2LL},{0x0640D2D85689E5FALL,0UL,18446744073709551615UL},{0xD564F06660D7ADAALL,18446744073709551615UL,1UL},{18446744073709551611UL,1UL,0x7001D0AB515CB5E7LL},{0x0BE7D7A5CF373AB2LL,0xD564F06660D7ADAALL,1UL},{1UL,0UL,18446744073709551615UL},{18446744073709551615UL,0UL,0x0BE7D7A5CF373AB2LL},{0xCE487BCEC8CFFD04LL,18446744073709551615UL,0x0640D2D85689E5FALL}},{{0x2EE5E1461F6864BBLL,0xC3D4A470AD435052LL,0UL},{0UL,0xC3D4A470AD435052LL,0xE0A22320633EA239LL},{0x22D616180E2AD8F1LL,18446744073709551615UL,0x22D616180E2AD8F1LL},{1UL,0UL,0xC3D4A470AD435052LL},{5UL,0UL,18446744073709551615UL},{18446744073709551610UL,0xD564F06660D7ADAALL,0x2EE5E1461F6864BBLL},{0xC3D4A470AD435052LL,1UL,0xAB9524A28D324E55LL},{18446744073709551610UL,18446744073709551615UL,0xCE487BCEC8CFFD04LL},{5UL,0UL,0UL}},{{1UL,0x225A8C6FE17D3D01LL,0x75935479E039A9A8LL},{0x22D616180E2AD8F1LL,18446744073709551611UL,0UL},{0UL,18446744073709551615UL,0UL},{0x2EE5E1461F6864BBLL,0x75935479E039A9A8LL,0x75935479E039A9A8LL},{0xCE487BCEC8CFFD04LL,18446744073709551610UL,0UL},{18446744073709551615UL,7UL,0xCE487BCEC8CFFD04LL},{1UL,2UL,0xAB9524A28D324E55LL},{0x0BE7D7A5CF373AB2LL,0UL,0x2EE5E1461F6864BBLL},{18446744073709551611UL,2UL,18446744073709551615UL}},{{0xD564F06660D7ADAALL,7UL,0xC3D4A470AD435052LL},{0x0640D2D85689E5FALL,18446744073709551610UL,0x22D616180E2AD8F1LL},{0x225A8C6FE17D3D01LL,0x75935479E039A9A8LL,0xE0A22320633EA239LL},{0x75935479E039A9A8LL,18446744073709551615UL,0UL},{0x75935479E039A9A8LL,18446744073709551611UL,0x0640D2D85689E5FALL},{0x225A8C6FE17D3D01LL,0x225A8C6FE17D3D01LL,0x0BE7D7A5CF373AB2LL},{0x0640D2D85689E5FALL,0UL,18446744073709551615UL},{0xD564F06660D7ADAALL,18446744073709551615UL,1UL},{18446744073709551611UL,1UL,0x7001D0AB515CB5E7LL}},{{0x0BE7D7A5CF373AB2LL,0xD564F06660D7ADAALL,1UL},{1UL,0UL,18446744073709551615UL},{18446744073709551615UL,0UL,0x0BE7D7A5CF373AB2LL},{0xCE487BCEC8CFFD04LL,18446744073709551615UL,0x0640D2D85689E5FALL},{0x2EE5E1461F6864BBLL,0xC3D4A470AD435052LL,0UL},{0UL,0xC3D4A470AD435052LL,0xE0A22320633EA239LL},{0x22D616180E2AD8F1LL,18446744073709551615UL,0x22D616180E2AD8F1LL},{1UL,0UL,0xC3D4A470AD435052LL},{5UL,0UL,18446744073709551615UL}},{{18446744073709551610UL,0xD564F06660D7ADAALL,0x2EE5E1461F6864BBLL},{0xC3D4A470AD435052LL,1UL,0xAB9524A28D324E55LL},{18446744073709551610UL,18446744073709551615UL,0xCE487BCEC8CFFD04LL},{5UL,0UL,0UL},{1UL,0x225A8C6FE17D3D01LL,0x75935479E039A9A8LL},{0x22D616180E2AD8F1LL,18446744073709551611UL,0UL},{0UL,18446744073709551615UL,0UL},{0x2EE5E1461F6864BBLL,0x75935479E039A9A8LL,0x75935479E039A9A8LL},{0xCE487BCEC8CFFD04LL,18446744073709551610UL,0UL}}};
            int32_t l_328 = 0xD8889A77L;
            int32_t l_383 = (-1L);
            union U0 l_440 = {0L};
            uint64_t *l_498 = &g_183;
            uint64_t **l_497 = &l_498;
            int32_t *l_501[6][10] = {{(void*)0,&l_141,&g_324,&g_4,(void*)0,&l_141,&g_4,(void*)0,&l_122,(void*)0},{(void*)0,(void*)0,&g_324,&l_429,&g_324,(void*)0,(void*)0,&g_324,(void*)0,&l_157},{&g_324,&l_157,(void*)0,&g_324,&l_157,&l_157,(void*)0,&g_324,(void*)0,(void*)0},{&l_157,&l_157,(void*)0,&g_324,&g_324,(void*)0,&l_157,&l_157,&l_429,(void*)0},{&l_425,&g_324,&l_122,&g_324,&l_157,&l_141,(void*)0,&l_157,&g_324,&g_324},{(void*)0,&l_157,&l_122,&l_157,(void*)0,&l_157,&l_122,&l_157,(void*)0,&l_122}};
            int i, j, k;
            for (g_270 = (-8); (g_270 < 23); g_270++)
            {
                int32_t *l_296 = &l_141;
                int32_t **l_300 = &g_274;
                l_297[4][6][2]--;
                (*l_300) = &l_157;
            }
            for (g_102 = 14; (g_102 != 24); g_102 = safe_add_func_uint64_t_u_u(g_102, 1))
            {
                int8_t *l_322 = &g_217;
                int32_t *l_323[2][10][1] = {{{&l_122},{&l_141},{&l_122},{&l_141},{&l_122},{&l_141},{&l_122},{&l_141},{&l_122},{&l_141}},{{&l_122},{&l_141},{&l_122},{&l_141},{&l_122},{&l_141},{&l_122},{&l_141},{&l_122},{&l_141}}};
                int i, j, k;
                g_324 |= (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((~0L), (((*g_274) = 0x5AFFD8D4L) , g_272))) | (((*l_153)--) , ((safe_sub_func_int32_t_s_s(((safe_div_func_int8_t_s_s(l_297[5][5][0], ((*l_322) = ((((((p_84 , 4294967292UL) != (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(l_297[4][6][2], ((void*)0 == l_320))), l_321))) ^ 0x6EL) != (-1L)) > p_84) , (*p_83))))) >= p_84), 4294967295UL)) <= p_84))), 8L));
                return g_146;
            }
        }
        if ((8UL < ((p_84 >= (((0x7DA4L && (safe_sub_func_uint8_t_u_u((*l_476), ((p_84 | (!(safe_lshift_func_uint8_t_u_s(p_84, (safe_add_func_int16_t_s_s((l_161 != (l_511 = ((*l_510) = &l_112))), (safe_mul_func_uint8_t_u_u(((~(((*l_320) |= ((void*)0 == &g_172)) <= p_84)) , 0xA4L), (*l_363))))))))) < 0xF3L)))) != (*l_363)) ^ (*l_363))) != 1UL)))
        {
            int8_t **l_515[1];
            int i;
            for (i = 0; i < 1; i++)
                l_515[i] = (void*)0;
            return l_515[0];
        }
        else
        {
            for (g_356 = (-14); (g_356 >= (-2)); g_356 = safe_add_func_int64_t_s_s(g_356, 1))
            {
                for (g_430 = 0; g_430 < 9; g_430 += 1)
                {
                    g_420[g_430] = &g_421;
                }
                (*l_476) ^= 0x9573C786L;
            }
            return g_146;
        }
    }
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_103.f2, "g_103.f2", print_hash_value);
    transparent_crc(g_103.f4, "g_103.f4", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_359[i], "g_359[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_562[i], "g_562[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_590, "g_590", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_604[i][j], "g_604[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_773, "g_773", print_hash_value);
    transparent_crc(g_774, "g_774", print_hash_value);
    transparent_crc(g_776, "g_776", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_864, "g_864", print_hash_value);
    transparent_crc(g_904, "g_904", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    transparent_crc(g_908, "g_908", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_912, "g_912", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_926[i], "g_926[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1004[i], "g_1004[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1029, "g_1029", print_hash_value);
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1087, "g_1087", print_hash_value);
    transparent_crc(g_1125, "g_1125", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1132[i], "g_1132[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1330, "g_1330", print_hash_value);
    transparent_crc(g_1508, "g_1508", print_hash_value);
    transparent_crc(g_1523, "g_1523", print_hash_value);
    transparent_crc(g_1790, "g_1790", print_hash_value);
    transparent_crc(g_1821, "g_1821", print_hash_value);
    transparent_crc(g_1873, "g_1873", print_hash_value);
    transparent_crc(g_1924, "g_1924", print_hash_value);
    transparent_crc(g_1941.f0, "g_1941.f0", print_hash_value);
    transparent_crc(g_1941.f1, "g_1941.f1", print_hash_value);
    transparent_crc(g_1941.f2, "g_1941.f2", print_hash_value);
    transparent_crc(g_1941.f4, "g_1941.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_2019[i][j], "g_2019[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2021, "g_2021", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2027[i], "g_2027[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2088, "g_2088", print_hash_value);
    transparent_crc(g_2142, "g_2142", print_hash_value);
    transparent_crc(g_2486, "g_2486", print_hash_value);
    transparent_crc(g_2561, "g_2561", print_hash_value);
    transparent_crc(g_2605, "g_2605", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2646[i][j][k], "g_2646[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2667, "g_2667", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2976[i][j], "g_2976[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3056, "g_3056", print_hash_value);
    transparent_crc(g_3086, "g_3086", print_hash_value);
    transparent_crc(g_3121, "g_3121", print_hash_value);
    transparent_crc(g_3476, "g_3476", print_hash_value);
    transparent_crc(g_3951, "g_3951", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
