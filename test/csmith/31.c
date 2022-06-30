// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 636EC4FA
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
   signed f0 : 14;
   int64_t f1;
   int16_t f2;
   int32_t f3;
   uint32_t f4;
};


static int32_t g_2[7][9][4] = {{{6L,0x9314E764L,(-7L),6L},{0xFA942F34L,0xC007C7BEL,0L,(-4L)},{0L,(-10L),(-1L),(-7L)},{(-9L),0x0A35F394L,0x4ED832CBL,(-9L)},{0xFA942F34L,0x0A35F394L,(-3L),(-7L)},{(-7L),(-10L),(-7L),(-4L)},{(-9L),0xC007C7BEL,0x4ED832CBL,6L},{0L,0x9314E764L,0x4727CAD7L,(-7L)},{0L,0x4ED832CBL,0x4ED832CBL,0L}},{{(-9L),0x0A35F394L,(-7L),6L},{(-7L),0x9314E764L,(-3L),(-4L)},{0xFA942F34L,0x79B5CEC8L,0x4727CAD7L,1L},{(-5L),0x79B5CEC8L,(-3L),4L},{6L,(-1L),0x7CD2BAB9L,6L},{6L,0x4727CAD7L,0xB9E588CEL,(-9L)},{4L,0x79B5CEC8L,0xB9E588CEL,0x65F4E26CL},{6L,0x4ED832CBL,0x7CD2BAB9L,1L},{6L,0x5D7C1543L,(-3L),(-9L)}},{{(-5L),(-1L),0x4727CAD7L,(-5L)},{6L,(-1L),0x9314E764L,(-9L)},{(-9L),0x5D7C1543L,0xB9E588CEL,1L},{1L,0x4ED832CBL,0x4727CAD7L,0x65F4E26CL},{6L,0x79B5CEC8L,0L,(-9L)},{6L,0x4727CAD7L,0x4727CAD7L,6L},{1L,(-1L),0xB9E588CEL,4L},{(-9L),0x79B5CEC8L,0x9314E764L,1L},{6L,0L,0x4727CAD7L,1L}},{{(-5L),0x79B5CEC8L,(-3L),4L},{6L,(-1L),0x7CD2BAB9L,6L},{6L,0x4727CAD7L,0xB9E588CEL,(-9L)},{4L,0x79B5CEC8L,0xB9E588CEL,0x65F4E26CL},{6L,0x4ED832CBL,0x7CD2BAB9L,1L},{6L,0x5D7C1543L,(-3L),(-9L)},{(-5L),(-1L),0x4727CAD7L,(-5L)},{6L,(-1L),0x9314E764L,(-9L)},{(-9L),0x5D7C1543L,0xB9E588CEL,1L}},{{1L,0x4ED832CBL,0x4727CAD7L,0x65F4E26CL},{6L,0x79B5CEC8L,0L,(-9L)},{6L,0x4727CAD7L,0x4727CAD7L,6L},{1L,(-1L),0xB9E588CEL,4L},{(-9L),0x79B5CEC8L,0x9314E764L,1L},{6L,0L,0x4727CAD7L,1L},{(-5L),0x79B5CEC8L,(-3L),4L},{6L,(-1L),0x7CD2BAB9L,6L},{6L,0x4727CAD7L,0xB9E588CEL,(-9L)}},{{4L,0x79B5CEC8L,0xB9E588CEL,0x65F4E26CL},{6L,0x4ED832CBL,0x7CD2BAB9L,1L},{6L,0x5D7C1543L,(-3L),(-9L)},{(-5L),(-1L),0x4727CAD7L,(-5L)},{6L,(-1L),0x9314E764L,(-9L)},{(-9L),0x5D7C1543L,0xB9E588CEL,1L},{1L,0x4ED832CBL,0x4727CAD7L,0x65F4E26CL},{6L,0x79B5CEC8L,0L,(-9L)},{6L,0x4727CAD7L,0x4727CAD7L,6L}},{{1L,(-1L),0xB9E588CEL,4L},{(-9L),0x79B5CEC8L,0x9314E764L,1L},{6L,0L,0x4727CAD7L,1L},{(-5L),0x79B5CEC8L,(-3L),4L},{6L,(-1L),0x7CD2BAB9L,6L},{6L,0L,0xC007C7BEL,(-5L)},{(-4L),0L,0xC007C7BEL,0xFA942F34L},{4L,0x4727CAD7L,(-7L),0x478144ADL},{0x65F4E26CL,0x0A35F394L,0x9314E764L,(-5L)}}};
static uint16_t g_17 = 0xBFA4L;
static int32_t g_28 = (-1L);
static int32_t g_41 = 0xDFEB8596L;
static uint32_t g_48 = 18446744073709551608UL;
static int32_t *g_52[7] = {&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41};
static int32_t g_86[7] = {0L,0L,0xAF6106D1L,0L,0L,0xAF6106D1L,0L};
static union U0 g_88 = {0x19D4D995L};
static int32_t g_113 = 8L;
static uint16_t g_142 = 65532UL;
static uint16_t g_144 = 65535UL;
static uint16_t *g_143 = &g_144;
static union U0 *g_152 = &g_88;
static union U0 **g_151 = &g_152;
static uint8_t g_156 = 8UL;
static int32_t g_174 = 0x6B59DBCAL;
static union U0 g_219 = {7L};
static int32_t **g_242 = &g_52[5];
static int32_t ***g_241 = &g_242;
static int16_t g_261 = 0xDE2FL;
static int8_t g_370 = 0xF9L;
static int8_t * const g_369 = &g_370;
static uint16_t **g_402 = &g_143;
static uint16_t ***g_401 = &g_402;
static uint16_t **g_630 = &g_143;
static uint64_t g_682 = 0xFA8DEF46847990B3LL;
static int8_t *g_728 = &g_370;
static int8_t **g_727 = &g_728;
static const uint8_t *g_744 = (void*)0;
static const uint8_t **g_743 = &g_744;
static const int16_t g_793 = 6L;
static union U0 ***g_802[9][7][4] = {{{&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,(void*)0,(void*)0,&g_151},{&g_151,&g_151,(void*)0,&g_151},{&g_151,(void*)0,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151}},{{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,(void*)0,&g_151},{&g_151,&g_151,(void*)0,(void*)0}},{{&g_151,&g_151,&g_151,&g_151},{&g_151,(void*)0,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,(void*)0,(void*)0,&g_151},{&g_151,&g_151,&g_151,(void*)0}},{{(void*)0,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151}},{{&g_151,&g_151,&g_151,(void*)0},{&g_151,(void*)0,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151},{(void*)0,(void*)0,&g_151,&g_151},{&g_151,&g_151,(void*)0,&g_151},{&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151}},{{&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,(void*)0,(void*)0,&g_151},{&g_151,&g_151,(void*)0,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151}},{{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151},{&g_151,(void*)0,&g_151,&g_151},{&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151}},{{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,(void*)0,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151},{(void*)0,&g_151,&g_151,&g_151}},{{&g_151,&g_151,(void*)0,&g_151},{&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151},{&g_151,(void*)0,&g_151,&g_151},{(void*)0,&g_151,&g_151,(void*)0},{(void*)0,&g_151,&g_151,&g_151},{(void*)0,&g_151,&g_151,&g_151}}};
static union U0 ****g_801 = &g_802[5][6][0];
static uint8_t g_973 = 0UL;
static int32_t ****g_1030 = &g_241;
static int32_t *****g_1029 = &g_1030;
static int32_t g_1099 = 0L;
static int32_t * const g_1101 = (void*)0;
static int32_t * const *g_1100[8][5] = {{(void*)0,&g_1101,&g_1101,(void*)0,&g_1101},{(void*)0,&g_1101,&g_1101,&g_1101,&g_1101},{&g_1101,&g_1101,&g_1101,&g_1101,&g_1101},{&g_1101,&g_1101,&g_1101,&g_1101,&g_1101},{&g_1101,(void*)0,&g_1101,(void*)0,&g_1101},{&g_1101,(void*)0,&g_1101,&g_1101,&g_1101},{&g_1101,&g_1101,&g_1101,&g_1101,&g_1101},{(void*)0,&g_1101,&g_1101,(void*)0,&g_1101}};
static int32_t * const *g_1102 = &g_52[5];
static uint8_t *g_1173 = &g_156;
static uint8_t **g_1172 = &g_1173;
static int32_t g_1209[8][3] = {{0x91B3AD8BL,0x27C1B9DBL,1L},{(-1L),0x878FE751L,(-1L)},{(-1L),0x91B3AD8BL,0x878FE751L},{0x91B3AD8BL,(-1L),(-1L)},{0x878FE751L,(-1L),1L},{0x27C1B9DBL,0x91B3AD8BL,(-1L)},{0x878FE751L,0x878FE751L,(-1L)},{0x91B3AD8BL,0x27C1B9DBL,1L}};
static uint32_t g_1233 = 0xABC2C25AL;
static uint32_t *g_1252 = &g_88.f4;
static int32_t **g_1259 = &g_52[4];
static uint64_t g_1297 = 0x6D0020BB48DE2472LL;



static int32_t func_1(void);
static int8_t func_7(int8_t p_8, uint16_t p_9, int8_t p_10);
static int32_t func_20(int16_t p_21, uint16_t * p_22, uint16_t * p_23, int32_t p_24);
static uint32_t func_25(uint8_t p_26);
static uint16_t * func_31(uint32_t p_32, int32_t p_33, uint8_t p_34);
static int32_t func_37(union U0 p_38);
static int32_t func_55(int32_t ** p_56);
static int32_t ** func_57(uint16_t * p_58, int32_t p_59, int32_t ** p_60, int8_t p_61, int32_t * const p_62);
static uint16_t * func_64(union U0 p_65, int32_t * p_66, int32_t * p_67, int64_t p_68);
static union U0 func_69(int8_t p_70, int32_t * const p_71);
# 93 "<stdin>"
static int32_t func_1(void)
{
    union U0 l_890 = {-4L};
    int64_t l_895 = (-3L);
    uint16_t l_896 = 0xABC0L;
    int8_t l_905 = 0xD6L;
    union U0 l_912 = {-10L};
    int32_t l_913 = (-2L);
    int64_t l_918[2][9][1] = {{{0L},{0xBCBE37D59D56A405LL},{0L},{0x75672D78C6C59E5FLL},{0L},{0xBCBE37D59D56A405LL},{0L},{0x75672D78C6C59E5FLL},{0L}},{{0xBCBE37D59D56A405LL},{0L},{0x75672D78C6C59E5FLL},{0L},{0xBCBE37D59D56A405LL},{0L},{0x75672D78C6C59E5FLL},{0L},{0xBCBE37D59D56A405LL}}};
    int64_t *l_921 = &g_219.f1;
    int32_t l_922 = 1L;
    uint8_t l_961 = 1UL;
    int16_t l_987[2][6][9] = {{{0x4362L,1L,(-8L),0x7887L,0x1BBDL,0x8DC9L,0x8DC9L,0x1BBDL,0x7887L},{0L,0L,0L,0xF305L,(-5L),0xFC4BL,0x7979L,0x7979L,0xFC4BL},{0x091BL,(-3L),0x7887L,(-3L),0x091BL,0x3E18L,0x8DC9L,1L,1L},{0L,0x2CA3L,0x7979L,0xC292L,0x7979L,0x2CA3L,0L,0L,0xFC4BL},{0x4362L,(-8L),(-3L),0x3E18L,(-8L),0x3E18L,(-3L),(-8L),0x4362L},{0x2CA3L,0x1574L,0L,0L,0xF305L,0x7979L,0xF305L,0L,0L}},{{0x8DC9L,0x8DC9L,0x1BBDL,0x7887L,(-8L),1L,0x4362L,1L,(-8L)},{0x2CA3L,0xF305L,0xF305L,0x2CA3L,1L,0xFC4BL,0xC292L,0L,0xC292L},{0x4362L,0x3E18L,0x1BBDL,0x1BBDL,0x3E18L,0x4362L,(-8L),0x8DC9L,0x091BL},{0L,0xFC4BL,0L,1L,1L,0L,0xFC4BL,0L,0x1574L},{0x091BL,0x1BBDL,(-3L),(-8L),(-8L),(-8L),(-8L),(-3L),0x1BBDL},{1L,0L,0x7979L,0x1574L,0xF305L,0xC292L,0xC292L,0xF305L,0x1574L}}};
    union U0 **l_997 = &g_152;
    int32_t *l_1014 = &l_890.f3;
    int8_t l_1112 = 0x91L;
    int32_t ****l_1119 = &g_241;
    int32_t l_1127 = 0xC279C6F6L;
    uint32_t l_1188 = 0xEACD57F8L;
    uint32_t l_1275 = 0xD9BAFDDEL;
    int32_t *****l_1276 = &g_1030;
    int i, j, k;
lbl_1071:
    for (g_2[1][2][0] = (-19); (g_2[1][2][0] < (-14)); g_2[1][2][0] = safe_add_func_int8_t_s_s(g_2[1][2][0], 6))
    {
        int32_t l_13 = 0x58B1CA07L;
        uint16_t *l_16 = &g_17;
    }
    if (((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((**g_727) = l_905), (l_922 ^= (safe_lshift_func_int8_t_s_s(l_890.f0, (safe_mul_func_int16_t_s_s(7L, (safe_mod_func_uint64_t_u_u(18446744073709551608UL, (0x049EFEB729F69F49LL && ((((l_912 , l_913) | (safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s((l_918[1][1][0] > (safe_mod_func_uint32_t_u_u(((((*l_921) = g_28) || g_86[2]) , l_918[1][1][0]), g_156))), l_912.f0)), g_2[1][2][0]))) , 18446744073709551615UL) ^ g_142))))))))))), l_918[1][1][0])), l_918[1][0][0])) || 0x5D75L))
    {
        uint8_t l_925 = 0x6CL;
        union U0 *l_935 = &g_88;
        int32_t l_960[4][1] = {{0x94437E50L},{0x8D2AADB0L},{0x94437E50L},{0x8D2AADB0L}};
        union U0 l_1013 = {0xCAE37B40L};
        int32_t ****l_1028[2][10] = {{&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241},{&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241,&g_241}};
        int32_t *****l_1027 = &l_1028[0][9];
        uint32_t *l_1078 = &g_88.f4;
        uint8_t *l_1120 = &g_156;
        uint8_t *l_1121 = &l_925;
        const uint64_t l_1282[6][6] = {{0UL,18446744073709551615UL,0xCC70D2711FCB5ACFLL,0xC4B1DCD5C9FC9F29LL,0xCC70D2711FCB5ACFLL,18446744073709551615UL},{0xCC70D2711FCB5ACFLL,0UL,0x05C201E5A7803613LL,0UL,0UL,0x05C201E5A7803613LL},{0xCC70D2711FCB5ACFLL,0xCC70D2711FCB5ACFLL,0UL,0xC4B1DCD5C9FC9F29LL,0xBB82706952014E6BLL,0xC4B1DCD5C9FC9F29LL},{0UL,0xCC70D2711FCB5ACFLL,0UL,0x05C201E5A7803613LL,0UL,0UL},{18446744073709551615UL,0UL,0UL,18446744073709551615UL,0xCC70D2711FCB5ACFLL,0xC4B1DCD5C9FC9F29LL},{0xC4B1DCD5C9FC9F29LL,18446744073709551615UL,0UL,18446744073709551615UL,0xC4B1DCD5C9FC9F29LL,0x05C201E5A7803613LL}};
        int i, j;
        for (l_912.f4 = 0; (l_912.f4 <= 3); l_912.f4 += 1)
        {
            int32_t l_930[4] = {(-1L),(-1L),(-1L),(-1L)};
            const int16_t *l_934 = (void*)0;
            int64_t l_967 = 0L;
            uint8_t *l_970 = &l_961;
            uint32_t l_989 = 18446744073709551610UL;
            const int8_t l_998 = 0x96L;
            uint32_t l_1021 = 0UL;
            uint16_t l_1053 = 0xA4DEL;
            union U0 l_1056 = {0xB51CBAA5L};
            int32_t l_1069 = (-8L);
            int32_t **l_1094 = &g_52[5];
            int32_t l_1108 = 0x1FB48B8CL;
            int i;
        }
        l_890.f0 &= (((safe_div_func_int16_t_s_s(g_113, l_1112)) == (((*g_152) = (((**g_402) >= ((safe_rshift_func_uint16_t_u_u(l_918[1][3][0], (((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(((*l_1121) = ((*l_1120) |= (((*g_1029) = (g_142 , l_1119)) == &g_241))), 4)) <= ((safe_rshift_func_uint8_t_u_u(((((((*g_369) = (safe_unary_minus_func_int32_t_s((safe_div_func_int16_t_s_s((g_261 == (**g_1102)), g_219.f0))))) , (**g_241)) == (***l_1119)) <= g_86[2]) != g_2[1][2][0]), l_1127)) == 1L)), g_17)) | g_1099) != 0xE839280F3CC5DAAELL))) < (**g_242))) , (*l_935))) , g_86[0])) >= (*****l_1027));
lbl_1248:
        (*l_1014) = (safe_div_func_uint8_t_u_u((*****l_1027), ((****l_1119) , ((g_52[5] == (void*)0) , (g_174 | (((((safe_lshift_func_int8_t_s_u(((void*)0 != (**g_1029)), 5)) < (safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((&g_793 != (void*)0), (****l_1119))), 0L))) , (*****l_1027)) == g_1099) || g_86[4]))))));
        for (l_912.f3 = 20; (l_912.f3 > 22); l_912.f3++)
        {
            uint8_t * const l_1139 = (void*)0;
            const int32_t l_1153 = (-2L);
            int16_t *l_1154[6][6][6] = {{{(void*)0,&g_261,(void*)0,&l_987[0][2][8],&l_987[0][4][3],&l_987[0][4][3]},{&g_261,&l_987[0][4][3],&l_987[0][4][3],&g_261,&l_987[1][0][2],(void*)0},{&l_912.f2,&l_912.f2,&l_987[1][4][6],&l_890.f2,&g_261,&g_261},{(void*)0,&l_890.f2,&l_987[0][4][3],&l_912.f2,&g_261,&g_261},{&g_261,&l_912.f2,&g_261,&l_987[0][4][3],&l_987[1][0][2],(void*)0},{&l_890.f2,&l_987[0][4][3],&g_261,&g_219.f2,&l_987[0][4][3],(void*)0}},{{&l_987[0][3][5],&l_890.f2,&g_261,(void*)0,&g_261,&l_987[0][1][3]},{(void*)0,&l_890.f2,&g_261,&l_987[0][4][3],&l_890.f2,&l_890.f2},{&g_261,&l_987[0][2][7],&g_261,(void*)0,&l_987[0][4][3],(void*)0},{&l_890.f2,&l_987[0][0][1],&l_890.f2,&l_987[0][4][3],&l_987[0][4][3],&l_890.f2},{&g_261,(void*)0,&l_890.f2,&l_987[1][0][2],&g_261,(void*)0},{(void*)0,&l_890.f2,&l_987[0][0][1],&l_987[1][0][2],&g_261,&l_987[0][4][3]}},{{&g_261,&g_261,&l_912.f2,&l_987[0][4][3],&g_261,&g_261},{&l_890.f2,&l_987[0][3][5],&l_912.f2,(void*)0,&g_261,&l_987[0][2][8]},{&g_261,&g_261,&l_912.f2,&l_987[0][4][3],&l_890.f2,(void*)0},{(void*)0,(void*)0,&g_261,(void*)0,&l_987[0][4][3],&l_890.f2},{&l_890.f2,&g_261,&l_987[0][4][3],&g_261,&g_261,&l_987[0][4][3]},{(void*)0,(void*)0,&l_987[1][0][2],&g_261,(void*)0,&g_261}},{{&g_219.f2,&l_912.f2,&g_261,&l_890.f2,&l_890.f2,&l_987[1][0][2]},{&l_987[0][0][1],&g_219.f2,&g_261,&l_987[0][2][8],(void*)0,&g_261},{&l_987[0][3][5],&l_987[0][2][8],&l_987[1][0][2],&l_987[0][2][7],&g_261,&l_987[0][4][3]},{&l_987[0][2][7],&g_261,&l_987[0][4][3],(void*)0,&l_987[0][4][3],&l_890.f2},{(void*)0,&l_987[0][1][3],&g_261,&g_261,&l_912.f2,(void*)0},{&l_912.f2,&g_261,&l_912.f2,&l_890.f2,&l_912.f2,&l_987[0][2][8]}},{{&l_912.f2,&g_261,&l_912.f2,&l_890.f2,&l_912.f2,&g_261},{&g_261,&g_261,&l_912.f2,(void*)0,&l_987[0][2][8],&l_987[0][4][3]},{&l_890.f2,&g_261,&l_987[0][0][1],&g_261,&l_987[0][3][5],(void*)0},{(void*)0,&g_261,&l_890.f2,(void*)0,&l_987[0][2][8],&l_890.f2},{&l_987[1][4][6],&g_261,&l_890.f2,&l_987[0][3][5],&l_912.f2,(void*)0},{&g_261,&g_261,&g_261,&g_261,&l_912.f2,&l_890.f2}},{{(void*)0,&g_261,&g_261,&l_987[0][4][3],&l_912.f2,&l_987[0][1][3]},{&g_261,&l_987[0][1][3],&g_261,&l_987[1][4][6],&l_987[0][4][3],&l_912.f2},{&l_912.f2,&g_261,&g_219.f2,&g_219.f2,&g_261,&l_912.f2},{&l_987[0][4][3],&l_987[0][2][8],(void*)0,&g_261,(void*)0,(void*)0},{&l_987[0][4][3],&g_219.f2,&l_987[0][1][3],&l_890.f2,&l_890.f2,(void*)0},{&l_987[0][4][3],&l_912.f2,&l_890.f2,&g_261,(void*)0,&l_987[0][0][1]}}};
            uint64_t *l_1161 = &g_682;
            int32_t l_1189 = 0xD9A3389CL;
            int32_t l_1247 = (-9L);
            int16_t l_1261[4][7] = {{8L,8L,8L,8L,8L,8L,8L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{8L,8L,8L,8L,8L,8L,8L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
            uint32_t l_1279 = 0x7912CC77L;
            union U0 * const *l_1291 = &g_152;
            int i, j, k;
            if (((~(l_1139 != (*g_743))) <= (((((g_144 , ((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u(((*l_1161) |= (g_973 || (((safe_mod_func_int8_t_s_s((((**g_402) = ((safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((g_261 |= ((*l_1014) ^= ((safe_mul_func_int16_t_s_s(g_174, l_1153)) , g_2[1][2][0]))) <= g_86[2]), (safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((&l_961 != (*g_743)) > l_1153), (*g_143))), (**g_630))), 0xE2L)))), g_86[1])), (****l_1119))) | l_1153)) & l_1153), (*****l_1027))) || 0xC58DF180L) || 0xB96C49ED5C74CEF8LL))))), 14)) & l_1153)) <= g_793) < l_1153) || (*g_728)) < l_1153)))
            {
                uint8_t ***l_1174 = &g_1172;
                int32_t l_1187[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1187[i] = 0x977E664AL;
                (***g_241) = ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((+(safe_add_func_int32_t_s_s((+255UL), (((*l_1174) = g_1172) == &g_744)))), 3)), (safe_add_func_int16_t_s_s(((0x53L && ((safe_mod_func_uint32_t_u_u((0UL && ((safe_sub_func_int16_t_s_s(1L, (****l_1119))) > (safe_sub_func_int8_t_s_s(0x66L, (safe_div_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(0x6CL, 0x36L)) & (-1L)), 4L)))))), l_1187[2])) , l_1188)) <= (****l_1119)), (**g_402))))), (**g_727))) == g_48);
                if ((***g_241))
                    break;
                (***g_1030) = (*g_1102);
                if (l_1188)
                    goto lbl_1071;
            }
            else
            {
                union U0 ***l_1204 = (void*)0;
                int32_t *l_1214 = (void*)0;
                uint8_t l_1246 = 0x0AL;
                uint8_t l_1255 = 0UL;
                int32_t l_1278 = (-10L);
                uint64_t *l_1296[10][9] = {{&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297},{&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297},{&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297},{&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297},{&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297},{&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297},{&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297},{&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297},{&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297},{&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297,&g_1297}};
                int64_t l_1298 = (-9L);
                uint8_t ***l_1301 = &g_1172;
                int i, j;
                l_1189 |= (*l_1014);
                if (((safe_sub_func_uint64_t_u_u(l_1189, (((safe_mul_func_uint16_t_u_u(((**g_402)++), (((++(*l_1161)) < (safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((**g_242) = ((safe_mod_func_int8_t_s_s(((((&g_261 != (void*)0) <= (1UL ^ (l_1204 != (*g_801)))) || (g_1099 > (safe_lshift_func_uint16_t_u_s(((***g_241) < ((*l_1027) == (*g_1029))), g_1209[7][2])))) >= 0x9C9E81F16DB621F7LL), 0x4DL)) , 0x2BFC2EECL)) != l_1153), (**g_1172))), 7))) , (****l_1119)))) , g_1209[7][2]) == g_17))) <= g_174))
                {
                    uint32_t *l_1230 = &g_88.f4;
                    uint32_t *l_1231 = (void*)0;
                    uint32_t *l_1232[10][4][6] = {{{&l_1013.f4,&l_890.f4,(void*)0,&l_1013.f4,&l_912.f4,&l_890.f4},{&l_912.f4,&l_890.f4,&l_890.f4,&l_890.f4,&l_890.f4,&l_890.f4},{&l_890.f4,(void*)0,&l_890.f4,(void*)0,&l_890.f4,&l_890.f4},{(void*)0,&l_890.f4,&l_890.f4,(void*)0,&l_912.f4,&l_912.f4}},{{(void*)0,&l_890.f4,&l_912.f4,&l_912.f4,&l_890.f4,(void*)0},{(void*)0,(void*)0,&l_890.f4,(void*)0,&l_890.f4,&l_890.f4},{&l_890.f4,&l_890.f4,&l_890.f4,&l_890.f4,&l_912.f4,&l_890.f4},{&l_890.f4,&l_890.f4,&l_890.f4,(void*)0,&l_890.f4,&l_890.f4}},{{(void*)0,(void*)0,&l_912.f4,&l_890.f4,&l_890.f4,&l_912.f4},{&l_1013.f4,&l_890.f4,(void*)0,&l_1013.f4,&l_912.f4,&l_890.f4},{&l_912.f4,&l_890.f4,&l_890.f4,&l_890.f4,&l_890.f4,&l_890.f4},{&l_890.f4,(void*)0,&l_890.f4,(void*)0,&l_890.f4,&l_890.f4}},{{(void*)0,&l_890.f4,&l_890.f4,(void*)0,&l_912.f4,&l_912.f4},{(void*)0,&l_890.f4,&l_912.f4,&l_912.f4,&l_890.f4,(void*)0},{&l_890.f4,&l_890.f4,&l_890.f4,&l_890.f4,(void*)0,&l_890.f4},{&l_890.f4,(void*)0,&l_912.f4,&l_890.f4,&l_890.f4,&l_890.f4}},{{&l_890.f4,(void*)0,(void*)0,&l_912.f4,(void*)0,(void*)0},{&l_890.f4,&l_890.f4,(void*)0,&l_912.f4,(void*)0,&l_890.f4},{(void*)0,(void*)0,&l_890.f4,(void*)0,&l_890.f4,&l_890.f4},{&l_890.f4,(void*)0,&l_890.f4,&l_890.f4,(void*)0,&l_912.f4}},{{&l_912.f4,&l_890.f4,&l_890.f4,&l_890.f4,(void*)0,(void*)0},{&l_890.f4,(void*)0,(void*)0,&l_890.f4,&l_890.f4,(void*)0},{&l_912.f4,(void*)0,&l_890.f4,&l_890.f4,(void*)0,&l_890.f4},{&l_890.f4,&l_890.f4,&l_890.f4,&l_890.f4,(void*)0,&l_890.f4}},{{&l_890.f4,(void*)0,&l_912.f4,&l_890.f4,&l_890.f4,&l_890.f4},{&l_890.f4,(void*)0,(void*)0,&l_912.f4,(void*)0,(void*)0},{&l_890.f4,&l_890.f4,(void*)0,&l_912.f4,(void*)0,&l_890.f4},{(void*)0,(void*)0,&l_890.f4,(void*)0,&l_890.f4,&l_890.f4}},{{&l_890.f4,(void*)0,&l_890.f4,&l_890.f4,(void*)0,&l_912.f4},{&l_912.f4,&l_890.f4,&l_890.f4,&l_890.f4,(void*)0,(void*)0},{&l_890.f4,(void*)0,(void*)0,&l_890.f4,&l_890.f4,(void*)0},{&l_912.f4,(void*)0,&l_890.f4,&l_890.f4,(void*)0,&l_890.f4}},{{&l_890.f4,&l_890.f4,&l_890.f4,&l_890.f4,(void*)0,&l_890.f4},{&l_890.f4,(void*)0,&l_912.f4,&l_890.f4,&l_890.f4,&l_890.f4},{&l_890.f4,(void*)0,(void*)0,&l_912.f4,(void*)0,(void*)0},{&l_890.f4,&l_890.f4,(void*)0,&l_912.f4,(void*)0,&l_890.f4}},{{(void*)0,(void*)0,&l_890.f4,(void*)0,&l_890.f4,&l_890.f4},{&l_890.f4,(void*)0,&l_890.f4,&l_890.f4,(void*)0,&l_912.f4},{&l_912.f4,&l_890.f4,&l_890.f4,&l_890.f4,(void*)0,(void*)0},{&l_890.f4,(void*)0,(void*)0,&l_890.f4,&l_890.f4,(void*)0}}};
                    int32_t l_1245 = 0x31BC8954L;
                    int i, j, k;
                    for (g_88.f2 = 10; (g_88.f2 >= 0); --g_88.f2)
                    {
                        int8_t **l_1212 = &g_728;
                        int8_t ***l_1213 = &g_727;
                        (****g_1029) = (***g_1030);
                        (*l_1213) = l_1212;
                        l_1214 = ((***l_1119) = (*g_242));
                    }
                    if (((g_261 = (&g_113 == ((safe_div_func_uint8_t_u_u((0x0E5C0FD2L | (!(safe_rshift_func_int8_t_s_s(((*g_728) = (*g_369)), (safe_div_func_int8_t_s_s(((l_1247 = ((((safe_sub_func_int16_t_s_s(((~((((safe_rshift_func_uint8_t_u_u((((safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s(1L, (g_1233 |= 0xCBB0E07BL))))) >= (safe_sub_func_int64_t_s_s((255UL ^ 246UL), (safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((l_1246 |= ((((**g_242) = ((!(*****g_1029)) != (l_1245 , 0xF7L))) || (*l_1014)) ^ 5UL)) == l_1245), l_1245)), 0xB9FD1BCEL)), 0x8082882906597CFBLL)), l_1245))))) < g_48), 4)) , g_142) ^ g_973) < g_682)) | g_1099), g_86[2])) != (*g_1173)) , l_1078) == &g_113)) > 0x31L), (*g_1173))))))), (*g_1173))) , &g_113))) != g_28))
                    {
                        if (g_28)
                            goto lbl_1248;
                        (*l_1014) = 0x93F1A089L;
                    }
                    else
                    {
                        uint32_t **l_1249 = (void*)0;
                        uint32_t **l_1250 = &l_1232[8][0][3];
                        uint32_t **l_1251 = &l_1231;
                        (*****l_1027) = ((g_1252 = ((*l_1251) = ((*l_1250) = l_1078))) != l_1078);
                        (***g_241) ^= 0x31090BFCL;
                    }
                    if ((l_1255 = ((**g_242) = (safe_rshift_func_int8_t_s_u(((*g_369) = (*g_728)), 5)))))
                    {
                        int32_t **l_1260 = &l_1014;
                        union U0 * const l_1264 = (void*)0;
                        union U0 * const *l_1263[5][7][4] = {{{&l_1264,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264},{(void*)0,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264},{&l_1264,(void*)0,&l_1264,(void*)0},{&l_1264,&l_1264,&l_1264,&l_1264}},{{&l_1264,&l_1264,&l_1264,&l_1264},{(void*)0,&l_1264,(void*)0,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,(void*)0,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264},{(void*)0,&l_1264,(void*)0,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264}},{{(void*)0,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,&l_1264,(void*)0},{(void*)0,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,(void*)0,&l_1264},{(void*)0,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,(void*)0,(void*)0},{&l_1264,&l_1264,&l_1264,&l_1264}},{{&l_1264,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,&l_1264,(void*)0},{&l_1264,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264}},{{&l_1264,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,&l_1264,(void*)0},{&l_1264,&l_1264,(void*)0,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264},{&l_1264,&l_1264,&l_1264,&l_1264}}};
                        union U0 * const **l_1262 = &l_1263[3][3][0];
                        int32_t l_1277 = 0x37F56E34L;
                        int i, j, k;
                        (*****l_1027) = (0xABA45AECL | (g_28 && (safe_mul_func_int8_t_s_s(((+((**l_1119) != (l_1260 = g_1259))) , l_1261[2][2]), (((*l_1262) = l_997) == ((safe_sub_func_uint16_t_u_u(((*g_143) = (safe_div_func_uint8_t_u_u(((l_1276 = (((((((****l_1119) , (((*l_1121) |= ((safe_rshift_func_int16_t_s_u(((((+l_1261[2][5]) || (safe_div_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(((0xBC9EL <= 0x995CL) > 0x1B8D160E25BFF6ECLL))), l_1189))) , 0UL) < (**g_1172)), (**g_630))) , (*g_1173))) , 0xFEL)) <= (*g_369)) ^ (***g_401)) != l_1275) <= 1L) , &l_1028[1][6])) == &g_1030), (-7L)))), l_1245)) , (void*)0))))));
                        (*l_1014) &= ((****l_1119) & 0x60EBL);
                        l_1279++;
                    }
                    else
                    {
                        return (***g_241);
                    }
                    if (l_1245)
                        continue;
                }
                else
                {
                    (**g_1102) = l_1282[1][5];
                }
                (****g_1030) = (((**g_402) && (safe_mod_func_int16_t_s_s((l_1247 = g_86[1]), ((safe_div_func_int16_t_s_s(((g_144 , 65533UL) < ((l_1291 != l_1291) == (g_1297 = ((*l_1161) = (g_1099 != (safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((1L < l_1153), l_1153)), (*l_1014)))))))), (***g_401))) , 65535UL)))) , l_1298);
                (**g_1259) |= (safe_add_func_uint8_t_u_u((&l_1139 == ((*l_1301) = &g_1173)), (*g_728)));
            }
            if ((***g_241))
                continue;
        }
    }
    else
    {
        uint32_t **l_1303[10][2][6] = {{{&g_1252,&g_1252,(void*)0,(void*)0,&g_1252,&g_1252},{&g_1252,&g_1252,(void*)0,&g_1252,(void*)0,&g_1252}},{{(void*)0,(void*)0,&g_1252,&g_1252,(void*)0,&g_1252},{&g_1252,&g_1252,&g_1252,&g_1252,&g_1252,&g_1252}},{{&g_1252,&g_1252,&g_1252,&g_1252,&g_1252,(void*)0},{&g_1252,(void*)0,&g_1252,&g_1252,&g_1252,&g_1252}},{{&g_1252,&g_1252,&g_1252,&g_1252,(void*)0,&g_1252},{&g_1252,&g_1252,&g_1252,&g_1252,&g_1252,&g_1252}},{{&g_1252,&g_1252,(void*)0,&g_1252,&g_1252,&g_1252},{&g_1252,&g_1252,&g_1252,(void*)0,(void*)0,&g_1252}},{{&g_1252,&g_1252,&g_1252,(void*)0,&g_1252,&g_1252},{&g_1252,(void*)0,&g_1252,(void*)0,&g_1252,&g_1252}},{{&g_1252,&g_1252,&g_1252,&g_1252,&g_1252,&g_1252},{&g_1252,&g_1252,&g_1252,&g_1252,(void*)0,&g_1252}},{{&g_1252,(void*)0,&g_1252,&g_1252,&g_1252,&g_1252},{&g_1252,&g_1252,&g_1252,&g_1252,(void*)0,&g_1252}},{{&g_1252,&g_1252,(void*)0,&g_1252,&g_1252,&g_1252},{(void*)0,&g_1252,&g_1252,&g_1252,&g_1252,&g_1252}},{{&g_1252,&g_1252,&g_1252,&g_1252,(void*)0,(void*)0},{&g_1252,&g_1252,&g_1252,&g_1252,(void*)0,&g_1252}}};
        uint32_t ***l_1302 = &l_1303[0][0][2];
        int32_t l_1306[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1306[i] = 0xB84E93B6L;
        (***g_1030) = (****g_1029);
        (*l_1302) = &g_1252;
        for (g_261 = (-13); (g_261 > 16); g_261 = safe_add_func_int64_t_s_s(g_261, 8))
        {
            (***l_1119) = (*g_1259);
            return (***g_241);
        }
        return l_1306[0];
    }
    return (****l_1119);
}







static int8_t func_7(int8_t p_8, uint16_t p_9, int8_t p_10)
{
    uint16_t *l_30 = (void*)0;
    int32_t l_35 = (-1L);
    uint16_t **l_163 = &g_143;
    int32_t l_807[1][8];
    int32_t *l_808 = (void*)0;
    int32_t *l_809 = &g_86[6];
    const int8_t *l_850[10][7][3] = {{{&g_370,(void*)0,&g_370},{&g_370,&g_370,&g_370},{(void*)0,&g_370,(void*)0},{&g_370,&g_370,(void*)0},{&g_370,&g_370,(void*)0},{(void*)0,&g_370,&g_370},{&g_370,(void*)0,&g_370}},{{&g_370,&g_370,&g_370},{&g_370,&g_370,&g_370},{&g_370,&g_370,&g_370},{&g_370,&g_370,&g_370},{(void*)0,(void*)0,&g_370},{(void*)0,&g_370,&g_370},{&g_370,(void*)0,&g_370}},{{&g_370,(void*)0,&g_370},{&g_370,&g_370,(void*)0},{(void*)0,(void*)0,&g_370},{&g_370,&g_370,&g_370},{(void*)0,&g_370,(void*)0},{&g_370,&g_370,(void*)0},{&g_370,&g_370,&g_370}},{{&g_370,(void*)0,&g_370},{&g_370,&g_370,&g_370},{&g_370,&g_370,&g_370},{&g_370,&g_370,(void*)0},{(void*)0,&g_370,(void*)0},{&g_370,&g_370,&g_370},{(void*)0,(void*)0,&g_370}},{{(void*)0,&g_370,&g_370},{&g_370,&g_370,&g_370},{(void*)0,&g_370,(void*)0},{(void*)0,&g_370,&g_370},{&g_370,&g_370,&g_370},{(void*)0,&g_370,(void*)0},{&g_370,(void*)0,&g_370}},{{&g_370,&g_370,&g_370},{&g_370,&g_370,&g_370},{&g_370,(void*)0,&g_370},{&g_370,&g_370,&g_370},{&g_370,&g_370,&g_370},{(void*)0,&g_370,&g_370},{&g_370,&g_370,&g_370}},{{(void*)0,&g_370,(void*)0},{&g_370,&g_370,(void*)0},{&g_370,&g_370,(void*)0},{&g_370,&g_370,(void*)0},{(void*)0,&g_370,&g_370},{(void*)0,&g_370,&g_370},{&g_370,&g_370,&g_370}},{{&g_370,&g_370,&g_370},{&g_370,&g_370,&g_370},{&g_370,&g_370,&g_370},{(void*)0,&g_370,(void*)0},{(void*)0,&g_370,&g_370},{&g_370,&g_370,&g_370},{(void*)0,&g_370,&g_370}},{{(void*)0,&g_370,&g_370},{&g_370,&g_370,&g_370},{(void*)0,&g_370,(void*)0},{&g_370,&g_370,(void*)0},{&g_370,&g_370,&g_370},{&g_370,&g_370,(void*)0},{&g_370,&g_370,&g_370}},{{&g_370,&g_370,&g_370},{(void*)0,&g_370,&g_370},{(void*)0,&g_370,(void*)0},{(void*)0,&g_370,&g_370},{&g_370,&g_370,&g_370},{&g_370,&g_370,(void*)0},{&g_370,&g_370,&g_370}}};
    const int8_t **l_849 = &l_850[1][0][2];
    const int8_t ***l_848 = &l_849;
    uint8_t l_887 = 1UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_807[i][j] = 1L;
    }
    for (p_9 = 0; (p_9 < 5); p_9 = safe_add_func_int32_t_s_s(p_9, 8))
    {
        return g_2[3][2][2];
    }
    (*l_809) = (l_807[0][3] |= func_20((0x72677139L & func_25(p_8)), l_30, ((*l_163) = func_31(l_35, p_8, l_35)), p_8));
    for (g_144 = 0; (g_144 >= 35); g_144 = safe_add_func_uint8_t_u_u(g_144, 5))
    {
        union U0 **l_854 = &g_152;
        int16_t *l_857[8][1][8] = {{{&g_261,&g_261,&g_88.f2,&g_88.f2,&g_88.f2,(void*)0,&g_88.f2,&g_88.f2}},{{&g_88.f2,(void*)0,&g_88.f2,&g_88.f2,&g_88.f2,&g_261,&g_261,&g_261}},{{&g_88.f2,&g_88.f2,&g_88.f2,&g_261,&g_261,&g_88.f2,&g_88.f2,&g_88.f2}},{{&g_88.f2,&g_88.f2,(void*)0,&g_88.f2,&g_88.f2,&g_88.f2,&g_88.f2,&g_88.f2}},{{&g_88.f2,(void*)0,&g_261,(void*)0,&g_88.f2,&g_88.f2,(void*)0,&g_88.f2}},{{&g_261,&g_88.f2,(void*)0,&g_261,&g_88.f2,&g_88.f2,&g_261,(void*)0}},{{&g_88.f2,&g_88.f2,(void*)0,&g_88.f2,(void*)0,&g_261,(void*)0,&g_261}},{{&g_88.f2,(void*)0,&g_261,&g_88.f2,&g_261,(void*)0,&g_88.f2,&g_261}}};
        const int32_t l_860 = (-1L);
        int32_t l_877 = 0x6E85F891L;
        int32_t l_878 = (-3L);
        int32_t *l_879 = (void*)0;
        int32_t *l_880 = &g_86[5];
        int32_t *l_881 = &g_28;
        int32_t *l_882 = (void*)0;
        int32_t *l_883 = (void*)0;
        int32_t *l_884 = (void*)0;
        int32_t *l_885 = &g_28;
        int32_t *l_886[1][8] = {{&g_88.f3,&g_88.f3,&g_88.f3,&g_88.f3,&g_88.f3,&g_88.f3,&g_88.f3,&g_88.f3}};
        int i, j, k;
        for (p_8 = 0; (p_8 < 28); ++p_8)
        {
            uint16_t l_814 = 1UL;
            if ((*l_809))
                break;
            if (l_814)
                continue;
            for (l_814 = (-20); (l_814 < 57); l_814 = safe_add_func_uint16_t_u_u(l_814, 3))
            {
                uint8_t *l_822 = (void*)0;
                uint8_t *l_823[6][9] = {{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156},{(void*)0,(void*)0,&g_156,(void*)0,(void*)0,&g_156,&g_156,&g_156,&g_156},{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156},{(void*)0,(void*)0,&g_156,(void*)0,(void*)0,&g_156,&g_156,&g_156,&g_156},{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156},{(void*)0,(void*)0,&g_156,(void*)0,(void*)0,&g_156,&g_156,&g_156,&g_156}};
                uint64_t *l_824 = &g_682;
                int32_t *l_825 = &l_35;
                int i, j;
                (*l_825) = ((*l_809) = ((((safe_mul_func_int16_t_s_s(p_10, (g_2[1][2][0] != 0UL))) , 4294967295UL) && ((((*l_824) = (!(safe_mod_func_int8_t_s_s((1L <= l_814), (g_156 = 0x77L))))) < ((((*l_809) , p_8) >= p_9) < p_8)) && 65535UL)) < p_9));
                for (g_219.f2 = 1; (g_219.f2 <= 6); g_219.f2 += 1)
                {
                    for (g_156 = 0; (g_156 <= 6); g_156 += 1)
                    {
                        int i;
                        g_52[g_156] = g_52[g_156];
                    }
                }
                return p_8;
            }
        }
        for (g_682 = 0; (g_682 <= 26); ++g_682)
        {
            const int32_t l_830 = 1L;
            int16_t *l_840 = &g_261;
            const uint32_t l_847[10] = {4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL};
            int32_t * const l_851[4][10][3] = {{{(void*)0,(void*)0,&g_86[2]},{&l_807[0][3],&g_86[2],(void*)0},{&l_35,&g_86[2],&g_86[2]},{(void*)0,(void*)0,(void*)0},{&g_88.f3,(void*)0,&g_86[2]},{(void*)0,&g_41,(void*)0},{(void*)0,&g_88.f3,&g_86[2]},{&g_88.f3,(void*)0,&g_28},{(void*)0,&g_88.f3,&l_35},{&l_35,&g_41,&l_35}},{{&l_807[0][3],(void*)0,&g_28},{&l_807[0][2],(void*)0,&g_86[2]},{&l_807[0][3],&g_86[2],(void*)0},{&l_35,&g_86[2],&g_86[2]},{(void*)0,(void*)0,(void*)0},{&g_88.f3,(void*)0,&g_86[2]},{(void*)0,&g_41,(void*)0},{(void*)0,&g_88.f3,&g_86[2]},{&g_88.f3,(void*)0,&g_28},{(void*)0,&g_88.f3,&l_35}},{{&l_35,&g_41,&l_35},{&l_807[0][3],(void*)0,&g_28},{&l_807[0][2],(void*)0,&g_86[2]},{&l_807[0][3],&g_86[2],(void*)0},{&l_35,&g_86[2],&g_86[2]},{(void*)0,(void*)0,(void*)0},{&g_88.f3,(void*)0,&g_86[2]},{(void*)0,&g_41,(void*)0},{(void*)0,&g_88.f3,&g_86[2]},{&g_88.f3,(void*)0,&g_28}},{{(void*)0,&g_88.f3,&l_35},{&l_35,&g_41,&l_35},{&l_807[0][3],(void*)0,&g_28},{&l_807[0][2],(void*)0,&g_86[2]},{&l_807[0][3],&g_86[2],(void*)0},{&l_35,&g_86[2],&g_86[2]},{(void*)0,(void*)0,(void*)0},{&g_88.f3,(void*)0,&g_86[2]},{(void*)0,&g_41,(void*)0},{(void*)0,&g_88.f3,&g_86[2]}}};
            union U0 l_852 = {1L};
            union U0 **l_853 = &g_152;
            uint64_t *l_872[2][8] = {{(void*)0,&g_682,&g_682,(void*)0,&g_682,&g_682,&g_682,(void*)0},{&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,&g_682,&g_682}};
            uint8_t l_876 = 0UL;
            int i, j, k;
            (*l_809) ^= (l_852 , p_8);
            (*l_809) ^= (l_853 == l_854);
            l_878 |= (l_877 |= (safe_add_func_int8_t_s_s((*g_728), (l_857[5][0][6] != (((safe_div_func_uint64_t_u_u(l_860, l_860)) & ((((safe_lshift_func_int16_t_s_u((((safe_div_func_uint16_t_u_u((!((safe_div_func_uint64_t_u_u((g_142 < ((safe_mul_func_uint8_t_u_u((&g_682 != l_872[0][4]), ((-1L) != (safe_sub_func_int8_t_s_s((~g_86[1]), g_144))))) ^ l_876)), 9L)) != 0L)), (*l_809))) , (void*)0) != (void*)0), l_860)) && 0L) , g_2[1][6][0]) , g_156)) , (void*)0)))));
        }
        l_887++;
    }
    return p_10;
}







static int32_t func_20(int16_t p_21, uint16_t * p_22, uint16_t * p_23, int32_t p_24)
{
    int8_t l_168 = 0L;
    int32_t *l_169 = (void*)0;
    int32_t *l_170 = &g_86[2];
    int32_t l_175 = (-7L);
    int32_t l_176 = 0x168B76DAL;
    int32_t l_177 = 0xE6016839L;
    int32_t l_178 = 0x6F533BD1L;
    int32_t l_179 = 0L;
    int32_t l_180 = (-5L);
    int32_t l_181 = 0L;
    int32_t l_182 = 0xE1DB370BL;
    int32_t l_184[9];
    int64_t l_187[2][7][5] = {{{(-8L),(-8L),0x16A5F3AA7BE89E88LL,0x2850D09B6B8FFD3DLL,0x5A0857287BE3B7B5LL},{0xE8A3830032A99643LL,0x22B5390025CD2622LL,0x22B5390025CD2622LL,0xE8A3830032A99643LL,0x8940EEDF8BB0FE6DLL},{0L,0x2850D09B6B8FFD3DLL,1L,1L,0x2850D09B6B8FFD3DLL},{0x8940EEDF8BB0FE6DLL,0x22B5390025CD2622LL,0xAE93E954DD281371LL,0x2BCC026C0AF27841LL,0x2BCC026C0AF27841LL},{0x6A09E4480C90BAB0LL,(-8L),0x6A09E4480C90BAB0LL,1L,0x16A5F3AA7BE89E88LL},{0x75B7509372F97B57LL,0xE8A3830032A99643LL,0x2BCC026C0AF27841LL,0xE8A3830032A99643LL,0x75B7509372F97B57LL},{0x6A09E4480C90BAB0LL,0L,(-8L),0x2850D09B6B8FFD3DLL,(-8L)}},{{0x8940EEDF8BB0FE6DLL,0x8940EEDF8BB0FE6DLL,0x2BCC026C0AF27841LL,0x75B7509372F97B57LL,0x48755DABCF1D0087LL},{0L,0x6A09E4480C90BAB0LL,0x6A09E4480C90BAB0LL,0L,(-8L)},{0xE8A3830032A99643LL,0x75B7509372F97B57LL,0xAE93E954DD281371LL,0xAE93E954DD281371LL,0x75B7509372F97B57LL},{(-8L),0x6A09E4480C90BAB0LL,1L,0x16A5F3AA7BE89E88LL,0x16A5F3AA7BE89E88LL},{0x22B5390025CD2622LL,0x48755DABCF1D0087LL,0x75B7509372F97B57LL,0x2BCC026C0AF27841LL,0x8940EEDF8BB0FE6DLL},{1L,0x6A09E4480C90BAB0LL,(-8L),0x6A09E4480C90BAB0LL,1L},{0x75B7509372F97B57LL,0x22B5390025CD2622LL,0x48755DABCF1D0087LL,0xAE93E954DD281371LL,0x48755DABCF1D0087LL}}};
    const uint8_t *l_210 = &g_156;
    union U0 * const l_218 = &g_219;
    int8_t l_230 = 0x8BL;
    int16_t l_451 = 0xD9BEL;
    int32_t *l_467 = &g_86[2];
    uint16_t ** const *l_555 = &g_402;
    union U0 ***l_580 = &g_151;
    union U0 * const *l_584 = &l_218;
    union U0 * const **l_583 = &l_584;
    int8_t *l_641 = &l_168;
    int8_t **l_640 = &l_641;
    int32_t ****l_694[4][5];
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_184[i] = 4L;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_694[i][j] = &g_241;
    }
    (*l_170) = (((safe_mul_func_int8_t_s_s(((((!((void*)0 == &g_17)) == (p_24 == (&g_52[6] == &g_52[5]))) ^ p_21) > (+((void*)0 != &g_52[5]))), (l_168 & l_168))) >= g_88.f0) || 0x98L);
    if ((safe_rshift_func_uint8_t_u_u(((void*)0 == &l_170), 6)))
    {
        int32_t **l_173[2][3][9] = {{{&g_52[1],&g_52[1],(void*)0,&g_52[1],&g_52[1],(void*)0,&g_52[1],&g_52[1],(void*)0},{&g_52[1],&g_52[1],(void*)0,&g_52[1],&g_52[1],(void*)0,&g_52[1],&g_52[1],(void*)0},{&g_52[1],&g_52[1],(void*)0,&g_52[1],&g_52[1],(void*)0,&g_52[1],&g_52[1],(void*)0}},{{&g_52[1],&g_52[1],(void*)0,&g_52[1],&g_52[1],(void*)0,&g_52[1],&g_52[1],(void*)0},{&g_52[1],&g_52[1],(void*)0,&g_52[1],&g_52[1],(void*)0,&g_52[1],&g_52[1],(void*)0},{&g_52[1],&g_52[1],(void*)0,&g_52[1],&g_52[1],(void*)0,&g_52[1],&g_52[1],(void*)0}}};
        int64_t l_183[7];
        int8_t l_185 = 0xBFL;
        int16_t l_186 = 0xDC7CL;
        int8_t l_188 = 0xBEL;
        uint8_t l_189 = 0xACL;
        int8_t *l_199 = &l_185;
        int32_t l_200[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        int32_t *l_201 = &g_41;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_183[i] = 0x0CD3334BC5BCE7AALL;
        l_169 = &g_86[2];
        l_189++;
        l_200[0] ^= (p_24 , ((*l_169) == (safe_sub_func_int64_t_s_s(((&g_152 == &g_152) , (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((0x10B6L && (((*l_170) & (l_184[4] |= (safe_mod_func_uint32_t_u_u(4294967295UL, p_21)))) < (((*l_199) = ((((0xA0BC929BL && p_24) <= g_48) && 0x0756L) & g_88.f3)) <= 1UL))))), g_88.f0))), g_156))));
        l_169 = (l_201 = &l_178);
    }
    else
    {
        uint64_t l_206[10] = {2UL,2UL,1UL,2UL,2UL,1UL,2UL,2UL,1UL,2UL};
        uint32_t *l_211 = &g_88.f4;
        int32_t l_228 = 0x08354CC9L;
        int32_t **l_245 = &l_169;
        union U0 **l_282 = &g_152;
        int32_t l_337 = 3L;
        int32_t l_339 = 0x729FE6B3L;
        int32_t l_342[8][8] = {{0L,0x8C0A7166L,(-1L),1L,0x3A738F73L,(-1L),(-10L),7L},{0x4B72C198L,0L,(-7L),(-10L),0L,0L,(-10L),(-7L)},{(-10L),(-10L),(-1L),(-1L),0x00FC0A64L,0L,7L,3L},{0x00FC0A64L,0L,7L,3L,3L,(-7L),3L,3L},{0L,(-1L),0L,(-1L),0xDA1A9B85L,0x4B72C198L,0L,(-7L)},{1L,0x3A738F73L,(-1L),(-10L),7L,0xDA1A9B85L,0xDA1A9B85L,7L},{1L,3L,3L,1L,0xDA1A9B85L,(-10L),3L,0x4B72C198L},{0L,0x52EB9B26L,(-10L),0L,3L,(-1L),0x4B72C198L,(-1L)}};
        uint16_t l_344[7];
        int8_t *l_368 = &l_230;
        uint16_t l_397 = 0UL;
        uint16_t l_442[9] = {65529UL,0xB3C2L,65529UL,0xB3C2L,65529UL,0xB3C2L,65529UL,0xB3C2L,65529UL};
        int16_t l_522 = 0xD834L;
        uint16_t l_530 = 0x2AF6L;
        uint16_t *** const l_565[2][3] = {{&g_402,&g_402,&g_402},{(void*)0,(void*)0,(void*)0}};
        uint8_t l_624 = 0xF6L;
        int64_t l_737 = 0x7E6848F38D208E63LL;
        uint32_t l_738 = 0xCBDB7864L;
        int16_t l_806[8];
        int i, j;
        for (i = 0; i < 7; i++)
            l_344[i] = 0UL;
        for (i = 0; i < 8; i++)
            l_806[i] = (-1L);
    }
    return (*l_170);
}







static uint32_t func_25(uint8_t p_26)
{
    int32_t *l_27 = &g_28;
    int32_t l_29 = 0x38976CC2L;
    (*l_27) = g_2[6][8][0];
    return l_29;
}







static uint16_t * func_31(uint32_t p_32, int32_t p_33, uint8_t p_34)
{
    int32_t *l_36 = &g_2[3][0][1];
    union U0 l_39[10] = {{0xECB10B3FL},{0xECB10B3FL},{0xECB10B3FL},{0xECB10B3FL},{0xECB10B3FL},{0xECB10B3FL},{0xECB10B3FL},{0xECB10B3FL},{0xECB10B3FL},{0xECB10B3FL}};
    union U0 *l_150 = (void*)0;
    union U0 **l_149 = &l_150;
    union U0 ***l_153 = &g_151;
    int32_t * const **l_154[1];
    uint8_t *l_155 = &g_156;
    uint64_t l_157 = 0UL;
    uint32_t *l_158 = (void*)0;
    uint32_t *l_159[4];
    uint32_t l_160 = 0x9581F8B5L;
    uint8_t l_161 = 0xFDL;
    uint16_t *l_162[10][4] = {{&g_144,&g_17,&g_144,&g_142},{&g_17,&g_17,(void*)0,&g_142},{&g_142,&g_17,&g_142,(void*)0},{(void*)0,&g_144,(void*)0,&g_17},{(void*)0,&g_144,&g_17,&g_142},{&g_144,&g_17,&g_17,&g_17},{(void*)0,(void*)0,(void*)0,&g_144},{&g_17,&g_142,&g_144,&g_142},{&g_144,&g_142,&g_144,&g_144},{(void*)0,&g_142,&g_17,&g_142}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_154[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_159[i] = &g_88.f4;
    l_39[5].f3 = (p_33 & (((l_36 != &g_2[1][2][0]) , p_32) > (func_37(l_39[5]) > (safe_lshift_func_uint8_t_u_u((((((((safe_rshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((*l_36) > (g_2[1][2][0] && (safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((g_142 |= 0x836C0E96L), 0xF0B7E2B5L)), g_2[6][5][0])))), (*l_36))), p_33)), 9)) && (-10L)) , (void*)0) == g_143) == g_2[1][2][0]) , 0xF3106F392B18A95BLL) , 0x17L), p_34)))));
    l_157 &= ((((g_113 == ((*l_155) = (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_2[6][4][3], (g_88.f0 <= ((*l_36) >= (l_149 == ((*l_153) = g_151)))))), (l_36 != ((l_154[0] != (void*)0) , (void*)0)))))) , g_113) & g_86[2]) && 1L);
    l_161 |= ((l_160 = (g_88.f4 = 0xB0E04704L)) & p_34);
    return l_162[2][3];
}







static int32_t func_37(union U0 p_38)
{
    int32_t *l_40 = &g_41;
    int32_t *l_42 = (void*)0;
    int32_t *l_43 = (void*)0;
    int32_t l_44[1];
    int32_t *l_45 = &g_41;
    int32_t *l_46 = &g_41;
    int32_t *l_47[10] = {&l_44[0],&l_44[0],&l_44[0],&l_44[0],&l_44[0],&l_44[0],&l_44[0],&l_44[0],&l_44[0],&l_44[0]};
    int32_t **l_51[6][3][7] = {{{&l_43,(void*)0,&l_40,&l_47[5],&l_40,&l_47[5],&l_47[5]},{&l_46,(void*)0,&l_47[1],(void*)0,(void*)0,&l_47[1],(void*)0},{&l_42,&l_47[5],&l_40,&l_46,&l_45,&l_43,&l_43}},{{(void*)0,&l_46,&l_47[5],&l_40,&l_40,&l_47[5],&l_40},{&l_46,&l_40,(void*)0,&l_46,&l_47[0],&l_43,&l_47[5]},{&l_43,&l_40,(void*)0,(void*)0,&l_43,&l_45,&l_40}},{{&l_40,&l_46,(void*)0,&l_47[5],&l_43,&l_47[3],&l_40},{(void*)0,&l_46,&l_47[5],&l_40,&l_43,&l_42,&l_40},{&l_46,(void*)0,&l_47[5],&l_43,&l_43,&l_43,&l_43}},{{&l_47[3],(void*)0,&l_47[3],&l_43,&l_47[0],&l_47[5],(void*)0},{&l_46,&l_40,&l_43,(void*)0,&l_40,&l_47[9],&l_46},{&l_46,&l_45,(void*)0,(void*)0,&l_45,&l_47[5],&l_46}},{{&l_45,&l_43,&l_40,(void*)0,(void*)0,&l_43,&l_45},{&l_47[5],&l_46,&l_46,(void*)0,&l_40,&l_42,&l_42},{&l_43,(void*)0,&l_40,&l_47[7],(void*)0,&l_47[3],&l_42}},{{&l_47[3],(void*)0,&l_43,(void*)0,&l_42,&l_45,&l_45},{(void*)0,&l_40,(void*)0,&l_40,(void*)0,&l_43,&l_46},{&l_42,&l_40,&l_40,&l_46,&l_47[4],&l_47[5],&l_46}}};
    uint32_t l_125[8] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
    union U0 *l_128 = (void*)0;
    union U0 **l_127 = &l_128;
    union U0 *** const l_126 = &l_127;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_44[i] = 0xF2EA6DA2L;
    ++g_48;
    g_52[5] = (void*)0;
lbl_129:
    for (g_17 = 0; (g_17 > 17); g_17 = safe_add_func_uint16_t_u_u(g_17, 8))
    {
        int32_t **l_63 = &l_47[0];
        int32_t ***l_108 = &l_51[3][1][6];
        int32_t l_112 = 0L;
        int32_t l_114 = 0x7387AFFFL;
        int32_t l_115[2];
        uint16_t l_116[6][6][1] = {{{0x9816L},{0xDE09L},{0x9816L},{65535UL},{0x8A1DL},{0x8A1DL}},{{65535UL},{0x9816L},{0xDE09L},{0x9816L},{65535UL},{0x8A1DL}},{{0x8A1DL},{65535UL},{0x9816L},{0xDE09L},{0x9816L},{65535UL}},{{0x8A1DL},{0x8A1DL},{65535UL},{65535UL},{0xDED5L},{65535UL}},{{0xDE09L},{0xC784L},{0xC784L},{0xDE09L},{65535UL},{0xDED5L}},{{65535UL},{0xDE09L},{0xC784L},{0xC784L},{0xDE09L},{65535UL}}};
        int32_t *l_120 = &l_115[1];
        union U0 *l_122 = &g_88;
        union U0 **l_121 = &l_122;
        union U0 ***l_123 = &l_121;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_115[i] = 0xA853B33CL;
        p_38.f0 |= func_55(((*l_108) = func_57(((l_63 == &g_52[4]) , func_64(func_69(g_2[1][2][0], (*l_63)), (*l_63), (*l_63), ((void*)0 == &g_2[6][0][3]))), g_17, l_63, g_2[0][7][1], &g_2[1][2][0])));
        if (p_38.f0)
            break;
        ++l_116[4][2][0];
        (**l_63) = (safe_unary_minus_func_int8_t_s(((((*l_63) == (l_120 = &g_2[3][7][0])) , (p_38.f0 | ((((*l_123) = l_121) != (void*)0) && ((+(((((*l_63) == &g_2[6][3][3]) , (p_38.f0 & l_125[0])) , l_126) == (void*)0)) & p_38.f0)))) || 1L)));
    }
    for (g_113 = 5; (g_113 >= 0); g_113 -= 1)
    {
        if (g_113)
            goto lbl_129;
    }
    return (*l_40);
}







static int32_t func_55(int32_t ** p_56)
{
    uint32_t l_109[10][8] = {{0xFD128F2DL,0x4B960D8FL,0x6B2AA013L,0xD15E5DEBL,1UL,0xFD128F2DL,0xF547C474L,4294967291UL},{4294967289UL,0xF547C474L,0x2FE436B3L,0UL,0xFD128F2DL,0xB57048E4L,0xF547C474L,0x4DA59623L},{0x2F9BC035L,0UL,0x6B2AA013L,0xFD128F2DL,0x59DC4BF3L,0x59DC4BF3L,0xFD128F2DL,0x6B2AA013L},{0x59DC4BF3L,0x59DC4BF3L,0xFD128F2DL,0x6B2AA013L,0UL,0x2F9BC035L,0x0D073A5FL,1UL},{0xB57048E4L,0xFD128F2DL,0UL,0x2FE436B3L,0xF547C474L,4294967289UL,0xBA988505L,1UL},{0xFD128F2DL,1UL,0xD15E5DEBL,0x6B2AA013L,0x4B960D8FL,0xFD128F2DL,0x4B960D8FL,0x6B2AA013L},{0x2FE436B3L,0xBF41EBBDL,0x2FE436B3L,0xFD128F2DL,4294967292UL,4294967291UL,0xBF41EBBDL,0x4DA59623L},{0xCF18C2A7L,1UL,4294967291UL,0UL,0x59DC4BF3L,0UL,4294967292UL,4294967291UL},{0xCF18C2A7L,0x59DC4BF3L,1UL,0xD15E5DEBL,4294967292UL,0x0D073A5FL,0x0D073A5FL,4294967292UL},{0x2FE436B3L,0xBA988505L,0xBA988505L,0x2FE436B3L,0x4B960D8FL,0x4DA59623L,1UL,0xFD128F2DL}};
    int i, j;
    l_109[0][4]--;
    return (**p_56);
}







static int32_t ** func_57(uint16_t * p_58, int32_t p_59, int32_t ** p_60, int8_t p_61, int32_t * const p_62)
{
    uint16_t *l_100 = &g_17;
    uint16_t **l_99 = &l_100;
    int32_t l_107 = (-1L);
    for (g_48 = 0; (g_48 <= 17); g_48++)
    {
        const union U0 l_97 = {1L};
        uint16_t **l_98 = (void*)0;
        int32_t *l_103 = (void*)0;
        int8_t l_106[9];
        int i;
        for (i = 0; i < 9; i++)
            l_106[i] = 0x9AL;
    }
    return p_60;
}







static uint16_t * func_64(union U0 p_65, int32_t * p_66, int32_t * p_67, int64_t p_68)
{
    uint16_t l_92 = 0xCE92L;
    int32_t *l_93 = (void*)0;
    int32_t *l_94 = &g_88.f3;
    (*l_94) = ((*p_67) = l_92);
    return &g_17;
}







static union U0 func_69(int8_t p_70, int32_t * const p_71)
{
    uint32_t l_78[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    uint16_t **l_81 = (void*)0;
    uint16_t *l_83 = (void*)0;
    uint16_t **l_82 = &l_83;
    int32_t l_84[6][4] = {{(-6L),0L,0x8234B592L,(-6L)},{0x8234B592L,(-6L),0x2A355C28L,0x2A355C28L},{0x16A0CFD0L,0x16A0CFD0L,(-1L),3L},{0x16A0CFD0L,0L,0x2A355C28L,0x16A0CFD0L},{0x8234B592L,3L,0x8234B592L,0x2A355C28L},{(-6L),3L,(-1L),0x16A0CFD0L}};
    int32_t *l_85 = &g_86[2];
    union U0 *l_87 = &g_88;
    union U0 **l_89 = (void*)0;
    union U0 **l_90 = &l_87;
    union U0 l_91 = {-9L};
    int i, j;
    (*l_85) &= (((((safe_mod_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((g_41 , ((-1L) & l_78[8])) != (safe_mul_func_uint8_t_u_u((((*l_82) = (void*)0) == (void*)0), (p_70 ^ 0xD70CC3162E151748LL)))), (((-1L) > g_2[1][2][0]) >= g_17))), p_70)) && l_78[8]) ^ l_78[0]), l_78[8])) & l_84[1][1]) < (*p_71)) ^ g_2[0][7][2]) <= g_2[1][2][0]);
    (*l_90) = l_87;
    return l_91;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_86[i], "g_86[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_219.f0, "g_219.f0", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_682, "g_682", print_hash_value);
    transparent_crc(g_793, "g_793", print_hash_value);
    transparent_crc(g_973, "g_973", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1209[i][j], "g_1209[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1233, "g_1233", print_hash_value);
    transparent_crc(g_1297, "g_1297", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
