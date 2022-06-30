// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = EA81C2FA
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



static const uint8_t g_9[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static uint32_t g_10 = 0xEC541651L;
static uint32_t g_23 = 0x4F06702EL;
static int8_t g_27 = 0x48L;
static int32_t g_30 = 0x0B7F45B6L;
static uint16_t g_34[1][7] = {{0xDFDAL,0xDFDAL,0xDFDAL,0xDFDAL,0xDFDAL,0xDFDAL,0xDFDAL}};
static uint64_t g_50 = 18446744073709551607UL;
static uint8_t g_58 = 0xB1L;
static int64_t g_64 = 0xE7656207CCB15B75LL;
static int16_t g_65 = (-7L);
static uint8_t *g_106 = (void*)0;
static int32_t g_129[9][10] = {{0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L},{0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L},{0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L},{0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L},{0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L},{0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L},{0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L},{0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L},{0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L,0xB5B55C24L}};
static uint8_t g_155 = 0x4CL;
static uint8_t g_156 = 0x38L;
static int32_t g_157 = 0x5EB93CA2L;
static uint64_t g_159 = 18446744073709551613UL;
static uint32_t g_160 = 0x70E1A0D3L;
static uint32_t g_178 = 0xB0F42965L;
static uint16_t g_184 = 0x74C3L;
static uint16_t *g_183 = &g_184;
static int8_t g_185[4][8] = {{(-5L),0xA5L,2L,0xA5L,(-5L),4L,0xA5L,(-1L)},{0xC0L,(-5L),0x21L,0x38L,0xA5L,0xC0L,0xC0L,0xA5L},{0x01L,0x21L,0x21L,0x01L,0x39L,0xA6L,0xA5L,0x21L},{0xA5L,0xDBL,2L,(-1L),0xDBL,(-4L),0xDBL,(-1L)}};
static int32_t g_187 = (-2L);
static int32_t *g_186 = &g_187;
static int32_t *g_189[7] = {&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30};
static uint64_t *g_242[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static uint16_t *g_266 = (void*)0;
static int32_t g_319 = 1L;
static uint32_t g_393 = 0UL;
static uint32_t *g_392[6][7] = {{&g_393,&g_393,&g_393,&g_393,&g_393,&g_393,&g_393},{&g_393,&g_393,&g_393,&g_393,&g_393,&g_393,&g_393},{&g_393,&g_393,&g_393,&g_393,&g_393,&g_393,&g_393},{&g_393,&g_393,&g_393,&g_393,&g_393,&g_393,&g_393},{&g_393,&g_393,&g_393,&g_393,&g_393,&g_393,&g_393},{&g_393,&g_393,&g_393,&g_393,&g_393,&g_393,&g_393}};
static uint32_t g_394 = 0x7B9727D1L;
static int64_t g_448[9][2][8] = {{{0L,4L,0xE2033D4CC4C2F215LL,0x4BCE580E0F3BD275LL,0x53FAB22412974B4FLL,0x53FAB22412974B4FLL,0x4BCE580E0F3BD275LL,0xE2033D4CC4C2F215LL},{0L,0L,0L,0xA871A35C636009EDLL,0x4BCE580E0F3BD275LL,0xAA783BB0D358DDB5LL,0L,0x4BCE580E0F3BD275LL}},{{7L,0x4BCE580E0F3BD275LL,4L,7L,0x3BC2A8D072CA4206LL,7L,4L,0x4BCE580E0F3BD275LL},{0x4BCE580E0F3BD275LL,0x28D810C863F72B55LL,0xE2033D4CC4C2F215LL,0xA871A35C636009EDLL,0x28D810C863F72B55LL,4L,0x3BC2A8D072CA4206LL,0xE2033D4CC4C2F215LL}},{{(-10L),0x3BC2A8D072CA4206LL,(-4L),0x4BCE580E0F3BD275LL,0x4BCE580E0F3BD275LL,(-4L),0x3BC2A8D072CA4206LL,(-10L)},{0x53FAB22412974B4FLL,0x4BCE580E0F3BD275LL,0xE2033D4CC4C2F215LL,4L,0L,0x53FAB22412974B4FLL,(-4L),0x28D810C863F72B55LL}},{{4L,0L,(-4L),0x28D810C863F72B55LL,(-4L),0L,4L,(-4L)},{0xE2033D4CC4C2F215LL,7L,(-10L),0xE2033D4CC4C2F215LL,0x53FAB22412974B4FLL,0xA871A35C636009EDLL,7L,7L}},{{(-4L),0x53FAB22412974B4FLL,(-1L),(-1L),0x53FAB22412974B4FLL,(-4L),0xAA783BB0D358DDB5LL,0x28D810C863F72B55LL},{0xE2033D4CC4C2F215LL,0xAA783BB0D358DDB5LL,1L,7L,(-4L),1L,0x53FAB22412974B4FLL,1L}},{{4L,7L,0x3BC2A8D072CA4206LL,7L,4L,0x4BCE580E0F3BD275LL,7L,0x28D810C863F72B55LL},{0L,4L,(-4L),(-1L),7L,0L,0L,7L}},{{0xE2033D4CC4C2F215LL,(-4L),(-4L),0xE2033D4CC4C2F215LL,0xAA783BB0D358DDB5LL,1L,7L,(-4L)},{7L,0x53FAB22412974B4FLL,0x3BC2A8D072CA4206LL,0x28D810C863F72B55LL,0x53FAB22412974B4FLL,(-10L),0x53FAB22412974B4FLL,0x28D810C863F72B55LL}},{{1L,0x53FAB22412974B4FLL,1L,(-4L),7L,1L,0xAA783BB0D358DDB5LL,0xE2033D4CC4C2F215LL},{4L,(-4L),(-1L),7L,0L,0L,7L,(-1L)}},{{4L,4L,(-10L),0x28D810C863F72B55LL,7L,0x4BCE580E0F3BD275LL,4L,7L},{1L,7L,(-4L),1L,0x53FAB22412974B4FLL,1L,(-4L),7L}}};
static int8_t g_472 = (-9L);
static int64_t *g_490 = &g_448[3][0][4];
static int64_t **g_489 = &g_490;
static int64_t ***g_488 = &g_489;
static int16_t g_511 = 0xF15DL;
static uint32_t *g_521 = &g_10;
static uint32_t **g_520 = &g_521;
static const int64_t g_567 = 0L;
static const int64_t *g_566[1] = {&g_567};
static int64_t * const **g_644 = (void*)0;
static const int16_t * const g_671 = (void*)0;
static const int16_t * const *g_670[9] = {&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671};
static uint64_t **g_686 = (void*)0;
static uint32_t g_694 = 4294967295UL;
static uint32_t **g_724 = (void*)0;
static uint32_t ***g_723 = &g_724;
static const int16_t g_734 = (-7L);
static const int16_t *g_733[9] = {&g_734,&g_734,&g_734,&g_734,&g_734,&g_734,&g_734,&g_734,&g_734};
static const int16_t **g_732 = &g_733[5];
static int64_t g_802 = (-7L);
static int16_t g_827 = 1L;
static int32_t g_838 = 0xB30F2971L;
static int64_t g_856[8][1] = {{(-10L)},{0x7F6CD6F3E07F86F5LL},{(-10L)},{0x7F6CD6F3E07F86F5LL},{(-10L)},{0x7F6CD6F3E07F86F5LL},{(-10L)},{0x7F6CD6F3E07F86F5LL}};
static int8_t g_883[2][10][1] = {{{(-1L)},{(-2L)},{(-1L)},{(-2L)},{(-1L)},{(-2L)},{(-1L)},{(-2L)},{(-1L)},{(-2L)}},{{(-1L)},{(-2L)},{(-1L)},{(-2L)},{(-1L)},{(-2L)},{(-1L)},{(-2L)},{(-1L)},{(-2L)}}};
static uint8_t **g_1016 = &g_106;
static uint8_t ***g_1015 = &g_1016;
static uint8_t *g_1019 = &g_155;
static int16_t g_1049 = 0x461EL;
static uint32_t ***g_1073 = &g_520;
static uint32_t **** const g_1072 = &g_1073;
static uint16_t g_1106 = 0x5B4DL;
static int32_t g_1124 = 0x14DB3979L;
static uint32_t g_1288 = 0xCDACB5BBL;
static int16_t *g_1356 = (void*)0;
static int16_t **g_1355 = &g_1356;
static uint16_t g_1457 = 65533UL;
static uint8_t g_1506 = 0UL;
static uint64_t g_1519 = 0xF19200F930B3D014LL;
static int32_t g_1616 = (-1L);
static uint16_t g_1626[9][6][2] = {{{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L}},{{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L}},{{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L}},{{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L}},{{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L}},{{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L}},{{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L}},{{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L}},{{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L},{0x99F5L,0x99F5L}}};



static const int32_t func_1(void);
static int32_t func_4(const uint8_t p_5, int32_t p_6, int8_t p_7, int8_t p_8);
static int32_t * func_40(int32_t p_41, int32_t * p_42, uint64_t p_43, uint32_t * p_44);
static uint64_t func_47(int32_t * p_48);
static uint64_t func_55(int8_t p_56);
static const uint32_t func_71(uint8_t * p_72, int32_t p_73, uint32_t p_74);
static uint64_t func_75(int32_t * p_76, uint64_t * p_77, uint16_t p_78, uint16_t p_79, int32_t p_80);
static int32_t * func_81(const int32_t p_82, int16_t p_83, int8_t p_84);
static int32_t func_85(int64_t p_86, uint8_t * p_87);
static int32_t * func_88(uint8_t * p_89);
# 109 "<stdin>"
static const int32_t func_1(void)
{
    uint32_t l_11 = 0x4A6F4440L;
    int8_t l_20 = 1L;
    uint32_t *l_21 = (void*)0;
    uint32_t *l_22[10] = {&g_23,&g_23,&g_10,&g_23,&g_23,&g_10,&g_23,&g_23,&g_10,&g_23};
    int32_t l_24 = 0x6A81D68CL;
    int32_t l_1605[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
    uint8_t l_1617 = 0x2BL;
    int64_t * const *l_1630 = &g_490;
    int64_t * const **l_1631 = (void*)0;
    int64_t * const **l_1632 = &l_1630;
    int32_t *l_1635 = &g_30;
    uint32_t l_1646 = 0x957BFB9CL;
    int8_t l_1647[9];
    int16_t *l_1648 = &g_65;
    int32_t l_1649 = 0xD35E46C4L;
    int32_t *l_1650 = &g_129[5][2];
    const uint64_t l_1651 = 0x4DC07564C24AF51DLL;
    int i;
    for (i = 0; i < 9; i++)
        l_1647[i] = 0xFDL;
    l_1605[6] |= (safe_mod_func_int32_t_s_s(func_4(g_9[0], g_9[0], (g_10 , (((g_9[2] > (l_24 ^= (((l_11 > (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((l_11 && ((((safe_div_func_int32_t_s_s(g_9[6], (((l_11 & (g_9[8] == g_10)) & g_9[0]) , g_9[0]))) & g_9[0]) >= l_11) >= l_11)) && (-7L)) , g_10), g_9[8])), 3)) < l_11), g_10))) == g_9[0]) == l_20))) == l_20) & g_23)), l_11), (**g_520)));
    for (g_157 = 0; (g_157 != 6); g_157 = safe_add_func_uint32_t_u_u(g_157, 3))
    {
        int32_t *l_1608 = (void*)0;
        int32_t *l_1609 = &l_24;
        int32_t *l_1610 = &g_187;
        int32_t l_1611 = 1L;
        int32_t *l_1612 = &g_30;
        int32_t *l_1613 = &g_187;
        int32_t *l_1614 = (void*)0;
        int32_t *l_1615[7] = {(void*)0,&g_187,(void*)0,(void*)0,&g_187,(void*)0,(void*)0};
        int i;
        --l_1617;
    }
    g_189[2] = func_88((*g_1016));
    (*l_1650) &= (safe_rshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s((*g_186), (l_20 != (safe_mod_func_uint64_t_u_u(((((*l_1648) = (l_1605[7] , (g_1626[7][5][1] , (((~(safe_add_func_uint8_t_u_u((((*l_1632) = l_1630) != (((*g_183) = (safe_mod_func_int32_t_s_s(((*l_1635) &= 1L), (safe_add_func_int32_t_s_s(((((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0x7C76L, 0xE454L)), ((safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(4L, 4294967290UL)), l_1605[0])) >= l_1617))) != l_1646) , 18446744073709551609UL) , (*g_186)), (*g_186)))))) , (void*)0)), l_1647[3]))) , 0x6AL) < (*g_1019))))) < l_1649) != l_1605[0]), l_24))))) && 0x39FBEC81036E698FLL), g_694));
    return l_1651;
}







static int32_t func_4(const uint8_t p_5, int32_t p_6, int8_t p_7, int8_t p_8)
{
    int8_t l_32 = 4L;
    int32_t *l_45 = (void*)0;
    uint64_t l_1209 = 18446744073709551607UL;
    uint32_t l_1233[9][8] = {{0xA1D14F1DL,0xF1395E79L,0UL,0x905582B8L,0UL,6UL,0x210CA6B1L,18446744073709551615UL},{18446744073709551609UL,0x905582B8L,0x0AA37DACL,3UL,0UL,3UL,0x0AA37DACL,0x905582B8L},{0xA1D14F1DL,0x281D9864L,18446744073709551609UL,18446744073709551615UL,0xB8BEF9DCL,3UL,0xA1D14F1DL,18446744073709551615UL},{0UL,0x905582B8L,0UL,0xF1395E79L,0xA1D14F1DL,6UL,0xA1D14F1DL,0xF1395E79L},{18446744073709551609UL,0xF1395E79L,18446744073709551609UL,3UL,0x210CA6B1L,0x281D9864L,0x0AA37DACL,0xF1395E79L},{0x210CA6B1L,0x281D9864L,0x0AA37DACL,0xF1395E79L,0xB8BEF9DCL,18446744073709551615UL,0x210CA6B1L,18446744073709551615UL},{0x210CA6B1L,18446744073709551615UL,0UL,18446744073709551615UL,0x210CA6B1L,6UL,0UL,0x905582B8L},{18446744073709551609UL,18446744073709551615UL,0xB8BEF9DCL,3UL,0xA1D14F1DL,18446744073709551615UL,0x0AA37DACL,18446744073709551615UL},{0UL,0x281D9864L,0xB8BEF9DCL,0x905582B8L,0xB8BEF9DCL,0x281D9864L,0UL,18446744073709551615UL}};
    int32_t *l_1306[4];
    int32_t l_1309 = 0x87F5723AL;
    int16_t *l_1354 = &g_511;
    int16_t **l_1353 = &l_1354;
    int16_t l_1367[7][1] = {{0x98B4L},{0L},{0x98B4L},{0L},{0x98B4L},{0L},{0x98B4L}};
    int32_t l_1368[8][9] = {{(-1L),0L,1L,0L,(-1L),(-9L),0x5A93325CL,0x553D9B63L,0x553D9B63L},{0L,0L,(-1L),0x553D9B63L,(-1L),0L,0L,1L,0x02E89A94L},{(-4L),0x02E89A94L,0L,(-9L),0x02E89A94L,0L,0xA1544B9CL,(-1L),1L},{0x5A93325CL,0L,1L,0x02E89A94L,0x553D9B63L,(-4L),0x553D9B63L,0x02E89A94L,1L},{0x553D9B63L,0x553D9B63L,0x5A93325CL,(-9L),(-1L),0L,1L,0L,(-1L)},{0x5A93325CL,0x553D9B63L,0x553D9B63L,0x5A93325CL,(-9L),(-1L),0L,1L,0L},{1L,0L,0x5A93325CL,0x5A93325CL,0L,1L,0x02E89A94L,0x553D9B63L,(-4L)},{0xA1544B9CL,(-1L),1L,(-9L),(-9L),1L,(-1L),0xA1544B9CL,0L}};
    uint32_t l_1399 = 0x2CC3F3AAL;
    uint32_t ***l_1405 = &g_520;
    int32_t **l_1468 = &g_186;
    int32_t ***l_1467 = &l_1468;
    uint8_t l_1556 = 0x4DL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_1306[i] = &g_319;
    for (p_8 = 21; (p_8 < 9); p_8--)
    {
        int32_t *l_28 = (void*)0;
        int32_t *l_29 = &g_30;
        int32_t *l_31 = (void*)0;
        int32_t *l_33[9][8] = {{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30}};
        uint32_t l_46 = 0xD5FCA44BL;
        int32_t **l_1240 = &g_189[3];
        int32_t ***l_1239 = &l_1240;
        int32_t ****l_1238 = &l_1239;
        int32_t l_1266 = (-4L);
        int8_t l_1291 = 1L;
        uint64_t l_1299 = 0x73FB2E10CF1CF0F9LL;
        uint32_t l_1336 = 0xC03FCAF6L;
        int64_t ****l_1463 = &g_488;
        int64_t l_1507 = 0x0DFDB5A98BEE6C30LL;
        uint32_t ** const **l_1526[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        const int64_t **l_1575 = &g_566[0];
        const int64_t ***l_1574 = &l_1575;
        const int64_t ****l_1573 = &l_1574;
        int i, j;
        g_34[0][3]++;
        for (g_27 = 0; (g_27 == 22); g_27++)
        {
            uint16_t l_39 = 0x9E86L;
            int64_t ***l_1204 = (void*)0;
            int64_t **l_1206 = (void*)0;
            int64_t ***l_1205 = &l_1206;
            uint8_t **l_1218 = (void*)0;
            int32_t l_1219 = 6L;
            int32_t l_1234 = 0xD28BAAD7L;
            int64_t l_1263 = (-9L);
            uint32_t **l_1380 = &g_392[0][1];
            int32_t l_1390 = 0xEA4C4143L;
            int32_t l_1394 = 0L;
            int32_t l_1397[7] = {0x80CD49EDL,1L,1L,0x80CD49EDL,1L,1L,0x80CD49EDL};
            uint64_t *l_1404[4] = {&l_1299,&l_1299,&l_1299,&l_1299};
            const uint32_t *l_1523 = &g_694;
            const uint32_t **l_1522 = &l_1523;
            const uint32_t ***l_1521 = &l_1522;
            int32_t l_1597[7];
            int i;
            for (i = 0; i < 7; i++)
                l_1597[i] = 0x4B5E32A5L;
            g_30 &= (-2L);
        }
    }
    return (*g_186);
}







static int32_t * func_40(int32_t p_41, int32_t * p_42, uint64_t p_43, uint32_t * p_44)
{
    for (g_184 = (-22); (g_184 != 34); g_184 = safe_add_func_int64_t_s_s(g_184, 1))
    {
        uint8_t l_1203 = 253UL;
        if (p_43)
            break;
        (*g_186) = (-1L);
        if (l_1203)
            continue;
    }
    return &g_129[5][2];
}







static uint64_t func_47(int32_t * p_48)
{
    uint64_t *l_49[1];
    int32_t l_51 = 0x7898A801L;
    int32_t l_54 = 0x575E0AD5L;
    uint32_t l_1188 = 18446744073709551613UL;
    int32_t l_1189 = (-3L);
    int32_t l_1196 = 0x45731003L;
    uint32_t * const l_1200 = &g_178;
    int i;
    for (i = 0; i < 1; i++)
        l_49[i] = &g_50;
    l_1189 = ((l_51 = g_23) != (l_54 = ((g_34[0][3] >= g_50) , ((safe_mod_func_int64_t_s_s(((p_48 == p_48) ^ l_54), func_55(l_54))) == ((l_1188 == l_1188) != g_393)))));
    (*g_186) = ((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((****g_1072) != (-3L)), (safe_lshift_func_uint8_t_u_u((l_1196 <= (safe_sub_func_uint32_t_u_u((((l_1196 || (&g_157 != p_48)) && (+l_1196)) , ((*g_520) != l_1200)), (**g_520)))), l_54)))), l_1188)) < 0UL);
    return l_54;
}







static uint64_t func_55(int8_t p_56)
{
    uint8_t *l_57[5][5] = {{&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58}};
    int32_t l_59 = 0x1B3DFA8EL;
    int32_t *l_62 = &l_59;
    int32_t *l_63[3];
    uint64_t l_66[5][1];
    int32_t **l_164[9][10] = {{&l_63[0],&l_63[0],&l_63[2],&l_63[2],&l_63[0],(void*)0,&l_63[0],&l_62,&l_62,&l_63[0]},{(void*)0,&l_63[0],&l_63[0],&l_62,&l_62,(void*)0,&l_63[0],&l_63[2],&l_63[0],&l_63[0]},{&l_63[2],&l_63[0],(void*)0,&l_62,(void*)0,&l_63[2],&l_62,&l_62,&l_62,&l_63[0]},{(void*)0,&l_63[0],(void*)0,&l_62,&l_62,&l_62,&l_63[2],(void*)0,&l_63[0],&l_63[0]},{&l_62,&l_63[0],&l_62,&l_63[2],&l_63[0],&l_63[1],&l_63[0],(void*)0,(void*)0,&l_62},{&l_62,&l_63[0],(void*)0,&l_63[0],&l_63[0],&l_63[0],&l_63[0],&l_62,&l_63[2],&l_63[0]},{&l_62,&l_63[0],&l_63[0],&l_63[0],(void*)0,&l_62,&l_63[0],&l_63[0],&l_62,(void*)0},{&l_62,&l_63[0],&l_63[0],&l_62,&l_63[0],&l_62,&l_63[2],&l_63[0],&l_62,&l_63[2]},{(void*)0,&l_62,&l_62,&l_63[2],&l_62,(void*)0,&l_63[0],&l_63[2],&l_62,&l_62}};
    int32_t *l_165 = &l_59;
    uint8_t *l_176 = (void*)0;
    uint8_t **l_175 = &l_176;
    uint32_t *l_177[9][8][3] = {{{&g_178,&g_178,&g_178},{&g_178,(void*)0,&g_178},{&g_178,(void*)0,&g_23},{(void*)0,&g_178,&g_178},{(void*)0,&g_178,&g_178},{&g_178,&g_178,&g_178},{&g_178,(void*)0,&g_178},{&g_178,(void*)0,&g_23}},{{(void*)0,&g_178,&g_178},{(void*)0,&g_178,&g_178},{&g_178,&g_178,&g_178},{&g_178,(void*)0,&g_178},{&g_178,(void*)0,&g_23},{(void*)0,&g_178,&g_178},{(void*)0,&g_178,&g_178},{&g_178,&g_178,&g_178}},{{&g_178,(void*)0,&g_178},{&g_178,(void*)0,&g_23},{(void*)0,&g_178,&g_178},{(void*)0,&g_178,&g_178},{&g_178,&g_178,&g_178},{&g_178,(void*)0,&g_178},{&g_178,(void*)0,&g_23},{(void*)0,&g_178,&g_178}},{{(void*)0,&g_178,&g_178},{&g_178,&g_178,&g_178},{&g_178,(void*)0,&g_178},{&g_178,(void*)0,&g_23},{(void*)0,&g_178,&g_178},{(void*)0,&g_178,&g_178},{&g_178,&g_178,&g_178},{&g_178,(void*)0,&g_178}},{{&g_178,(void*)0,&g_23},{(void*)0,&g_178,&g_178},{(void*)0,&g_178,&g_178},{&g_178,&g_178,&g_178},{&g_178,(void*)0,&g_178},{&g_178,(void*)0,&g_23},{(void*)0,&g_178,&g_178},{(void*)0,&g_178,&g_178}},{{&g_178,&g_178,&g_178},{&g_178,(void*)0,&g_178},{&g_178,(void*)0,&g_23},{&g_178,&g_178,&g_178},{&g_178,&g_23,&g_178},{&g_178,&g_178,&g_178},{&g_23,&g_178,&g_178},{&g_178,&g_178,&g_23}},{{&g_178,&g_178,&g_178},{&g_178,&g_23,&g_178},{&g_178,&g_178,&g_178},{&g_23,&g_178,&g_178},{&g_178,&g_178,&g_23},{&g_178,&g_178,&g_178},{&g_178,&g_23,&g_178},{&g_178,&g_178,&g_178}},{{&g_23,&g_178,&g_178},{&g_178,&g_178,&g_23},{&g_178,&g_178,&g_178},{&g_178,&g_23,&g_178},{&g_178,&g_178,&g_178},{&g_23,&g_178,&g_178},{&g_178,&g_178,&g_23},{&g_178,&g_178,&g_178}},{{&g_178,&g_23,&g_178},{&g_178,&g_178,&g_178},{&g_23,&g_178,&g_178},{&g_178,&g_178,&g_23},{&g_178,&g_178,&g_178},{&g_178,&g_23,&g_178},{&g_178,&g_178,&g_178},{&g_23,&g_178,&g_178}}};
    uint8_t l_179 = 0x4CL;
    int64_t *l_182 = (void*)0;
    uint64_t *l_837[2];
    uint16_t l_839 = 1UL;
    uint64_t l_878 = 1UL;
    int16_t *l_880[3];
    int8_t l_881 = (-6L);
    uint8_t l_890 = 0x5CL;
    const uint16_t l_916 = 0UL;
    uint32_t ***l_931 = &g_520;
    uint32_t **l_937 = &l_177[6][3][1];
    int64_t * const ***l_1025[3][8][5] = {{{(void*)0,&g_644,&g_644,(void*)0,&g_644},{(void*)0,(void*)0,&g_644,(void*)0,(void*)0},{&g_644,(void*)0,&g_644,&g_644,(void*)0},{(void*)0,&g_644,&g_644,(void*)0,&g_644},{(void*)0,(void*)0,&g_644,(void*)0,(void*)0},{&g_644,(void*)0,&g_644,&g_644,(void*)0},{(void*)0,&g_644,&g_644,(void*)0,&g_644},{(void*)0,(void*)0,&g_644,(void*)0,(void*)0}},{{&g_644,(void*)0,&g_644,&g_644,(void*)0},{(void*)0,&g_644,&g_644,(void*)0,&g_644},{(void*)0,(void*)0,&g_644,(void*)0,(void*)0},{&g_644,(void*)0,&g_644,&g_644,(void*)0},{(void*)0,&g_644,&g_644,(void*)0,&g_644},{(void*)0,(void*)0,&g_644,(void*)0,(void*)0},{&g_644,(void*)0,&g_644,&g_644,(void*)0},{(void*)0,&g_644,&g_644,(void*)0,&g_644}},{{(void*)0,(void*)0,&g_644,(void*)0,(void*)0},{&g_644,(void*)0,&g_644,&g_644,(void*)0},{(void*)0,&g_644,&g_644,(void*)0,&g_644},{(void*)0,(void*)0,&g_644,(void*)0,(void*)0},{&g_644,(void*)0,&g_644,&g_644,&g_644},{&g_644,&g_644,&g_644,&g_644,&g_644},{&g_644,&g_644,(void*)0,&g_644,&g_644},{&g_644,&g_644,&g_644,&g_644,&g_644}}};
    int64_t * const **** const l_1024 = &l_1025[2][3][1];
    uint32_t l_1028 = 0xF4B1A04BL;
    int16_t l_1068[2];
    uint64_t l_1094 = 0xBFE7500959015909LL;
    uint8_t l_1111[7][10] = {{255UL,0UL,0UL,255UL,0UL,0UL,255UL,0UL,0UL,255UL},{0UL,255UL,0UL,0UL,255UL,0UL,0UL,255UL,0UL,0UL},{255UL,255UL,0x5AL,255UL,255UL,0x5AL,255UL,255UL,0x5AL,255UL},{255UL,0UL,0UL,255UL,0UL,0UL,255UL,0UL,0UL,255UL},{0UL,255UL,0UL,0UL,255UL,0UL,0UL,255UL,0UL,0UL},{255UL,255UL,0x5AL,255UL,255UL,0x5AL,255UL,255UL,0x5AL,255UL},{255UL,0UL,0UL,255UL,0UL,0UL,255UL,0UL,0UL,255UL}};
    uint16_t l_1132 = 0UL;
    int16_t **l_1170 = &l_880[1];
    int16_t ***l_1169 = &l_1170;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_63[i] = &g_30;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_66[i][j] = 7UL;
    }
    for (i = 0; i < 2; i++)
        l_837[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_880[i] = &g_827;
    for (i = 0; i < 2; i++)
        l_1068[i] = 0xC635L;
    (*l_62) ^= (g_9[2] == (++g_58));
    l_66[0][0]--;
    if (((safe_lshift_func_int16_t_s_s(((g_64 , 0L) , (func_71(l_57[3][3], ((g_838 = func_75((g_189[2] = func_81(func_85(((l_165 = func_88(l_57[3][3])) == ((g_185[2][6] &= ((safe_rshift_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u(0xDB86E312L, ((safe_rshift_func_uint8_t_u_u((+(((((*l_62) = (safe_rshift_func_int8_t_s_u(((((*l_175) = (void*)0) == (void*)0) != (++l_179)), p_56))) && (-9L)) || 1UL) < p_56)), 0)) , p_56))) , g_183) == &g_184), g_58)) && 0xB3BDE5FCL)) , g_186)), &g_58), p_56, p_56)), &l_66[0][0], (*g_183), (*g_183), g_27)) == l_839), p_56) != 0x980CB2E9L)), p_56)) & 0x2DL))
    {
        const uint16_t l_865 = 0xF6D6L;
        int32_t * const *l_879[9] = {&l_63[0],&l_62,&l_63[0],&l_63[0],&l_62,&l_63[0],&l_63[0],&l_62,&l_63[0]};
        int32_t l_882 = (-1L);
        int8_t *l_886 = &g_883[1][8][0];
        int8_t l_889[8][3] = {{0x0EL,0x57L,0x0EL},{(-10L),(-10L),(-10L)},{0x0EL,0x57L,0x0EL},{(-10L),(-10L),(-10L)},{0x0EL,0x57L,0x0EL},{(-10L),(-10L),(-10L)},{0x0EL,0x57L,0x0EL},{(-10L),(-10L),(-10L)}};
        uint16_t l_905[3][9] = {{0xD4BCL,0x15BCL,0UL,65529UL,0xEEAEL,65529UL,0UL,0x15BCL,0xD4BCL},{0x4045L,65530UL,0x4319L,0UL,1UL,0x15BCL,0UL,0x15BCL,1UL},{0x1C15L,0UL,0UL,0x1C15L,65529UL,65530UL,65535UL,1UL,0x4319L}};
        int32_t l_906 = (-7L);
        int32_t *l_907 = (void*)0;
        uint16_t l_988 = 0x5192L;
        uint32_t l_995 = 0x1B1C7D7EL;
        uint8_t ***l_1017 = &l_175;
        uint16_t l_1031 = 0x14C7L;
        const uint32_t l_1043 = 4UL;
        uint32_t ****l_1076 = (void*)0;
        const uint8_t l_1085[10][10][2] = {{{1UL,254UL},{255UL,255UL},{255UL,0UL},{1UL,0UL},{249UL,0UL},{0UL,249UL},{248UL,0xE4L},{0x62L,0UL},{255UL,248UL},{249UL,0x21L}},{{0UL,0xC4L},{1UL,0x87L},{0xDAL,0xE2L},{255UL,249UL},{9UL,0xB6L},{0xD0L,0xF6L},{0x13L,0x73L},{0UL,0UL},{0x10L,246UL},{0x73L,8UL}},{{255UL,0xD5L},{0xE3L,1UL},{0UL,0x10L},{0UL,1UL},{1UL,1UL},{0UL,0x10L},{0UL,1UL},{0x61L,255UL},{0xD0L,0xD5L},{0x87L,0x13L}},{{0xE2L,1UL},{0xF6L,0x87L},{0xE4L,0x21L},{1UL,0x14L},{249UL,0xDAL},{1UL,248UL},{248UL,0x93L},{8UL,0x62L},{0x89L,0x73L},{0xDAL,250UL}},{{247UL,255UL},{8UL,255UL},{0UL,0UL},{0xC7L,0UL},{9UL,255UL},{0x55L,0x6DL},{8UL,247UL},{254UL,255UL},{0UL,0UL},{0x21L,9UL}},{{0UL,249UL},{0x13L,0x60L},{255UL,0x14L},{0UL,0xE2L},{255UL,8UL},{0xDCL,0xDCL},{0xE4L,0x55L},{0xB6L,0xC7L},{0xDFL,0xE4L},{0UL,0xDFL}},{{1UL,0x87L},{1UL,0xDFL},{0UL,0xE4L},{0xDFL,0xC7L},{0xB6L,0x55L},{0xE4L,0xDCL},{0xDCL,8UL},{255UL,0xE2L},{0UL,0x14L},{255UL,0x60L}},{{0x13L,249UL},{0UL,9UL},{0x21L,0UL},{0UL,255UL},{254UL,247UL},{8UL,0x6DL},{0x55L,255UL},{9UL,0UL},{0xC7L,0UL},{0UL,255UL}},{{8UL,255UL},{247UL,250UL},{0xDAL,0x73L},{0x89L,0x62L},{8UL,0x93L},{248UL,248UL},{1UL,0xDAL},{249UL,0x14L},{1UL,0x21L},{0xE4L,0x87L}},{{0xF6L,1UL},{0xE2L,0x13L},{0x87L,0xD5L},{0xD0L,255UL},{0x61L,1UL},{0UL,0x10L},{0UL,1UL},{1UL,1UL},{0UL,0x10L},{0UL,1UL}}};
        uint64_t **l_1087[4][1] = {{&g_242[2]},{(void*)0},{&g_242[2]},{(void*)0}};
        uint32_t l_1133 = 0xEAFB18A1L;
        int i, j, k;
        g_189[2] = (g_186 = func_81(((safe_mul_func_uint16_t_u_u((l_865 <= (l_882 ^= ((safe_unary_minus_func_uint64_t_u((p_56 && (7L == (safe_rshift_func_int16_t_s_u((l_881 ^= (((((void*)0 != (*g_520)) == l_865) < (safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s((-8L), (((((safe_mod_func_int64_t_s_s((*l_62), (+(p_56 <= l_878)))) >= l_865) || p_56) , l_879[7]) == l_879[2]))), 6)) , l_880[1]) != (void*)0), (*l_165)))) >= 1L)), 5)))))) | (*g_521)))), 1L)) > (**g_520)), p_56, g_883[1][0][0]));
        l_906 &= (safe_div_func_uint8_t_u_u((g_27 <= ((*l_62) = ((((*l_886) = 1L) != ((safe_add_func_uint64_t_u_u(((((*l_165) |= (l_890++)) != (safe_rshift_func_uint8_t_u_u(((g_185[2][0] &= (safe_add_func_int16_t_s_s(p_56, (safe_mul_func_uint16_t_u_u(0x20DFL, (safe_div_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((0L > p_56), (*l_62))), (((safe_rshift_func_uint16_t_u_u(p_56, 1)) , 0xF6L) , (**g_489))))))))) == p_56), l_905[2][6]))) & 0xACD57D29L), 0L)) || p_56)) <= p_56))), g_9[0]));
        for (l_890 = 0; (l_890 <= 8); l_890 += 1)
        {
            uint32_t ** const l_915 = &g_392[0][1];
            int32_t l_923 = (-1L);
            uint8_t *l_987 = &l_890;
            int8_t l_1030 = (-4L);
            int32_t ** const *l_1061[3];
            int32_t ** const **l_1060 = &l_1061[1];
            uint32_t ****l_1075 = (void*)0;
            uint32_t *****l_1074[10] = {&l_1075,&l_1075,&l_1075,&l_1075,&l_1075,&l_1075,&l_1075,&l_1075,&l_1075,&l_1075};
            uint16_t l_1086 = 65535UL;
            int64_t l_1092 = 0xAFA67087E020431CLL;
            uint64_t l_1125[10] = {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL};
            int32_t l_1139[4];
            int i;
            for (i = 0; i < 3; i++)
                l_1061[i] = &l_164[3][9];
            for (i = 0; i < 4; i++)
                l_1139[i] = 0x8A449B32L;
            l_907 = func_88(&g_156);
            for (g_64 = 1; (g_64 <= 4); g_64 += 1)
            {
                uint8_t l_912 = 8UL;
                int32_t l_918 = 0x73671EEDL;
                int32_t l_919 = 0x612190D2L;
                uint32_t ***l_929 = &g_520;
                const int64_t *l_951[5] = {&g_64,&g_64,&g_64,&g_64,&g_64};
                int32_t l_957[3];
                int32_t ***l_990 = &l_164[3][9];
                int64_t ***l_998 = &g_489;
                int16_t **l_1012[9][6] = {{&l_880[0],&l_880[0],(void*)0,&l_880[0],&l_880[1],&l_880[0]},{&l_880[2],&l_880[1],&l_880[0],&l_880[1],&l_880[2],&l_880[0]},{&l_880[1],&l_880[2],&l_880[0],&l_880[1],&l_880[1],&l_880[0]},{&l_880[1],&l_880[1],&l_880[0],&l_880[2],&l_880[1],&l_880[0]},{&l_880[2],&l_880[1],&l_880[0],&l_880[1],&l_880[2],&l_880[0]},{&l_880[1],&l_880[2],&l_880[0],&l_880[1],&l_880[1],&l_880[0]},{&l_880[1],&l_880[1],&l_880[0],&l_880[2],&l_880[1],&l_880[0]},{&l_880[2],&l_880[1],&l_880[0],&l_880[1],&l_880[2],&l_880[0]},{&l_880[1],&l_880[2],&l_880[0],&l_880[1],&l_880[1],&l_880[0]}};
                int16_t ***l_1011 = &l_1012[5][3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_957[i] = 0x5BD150D0L;
                (*g_186) |= (safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(p_56, 1)), ((&g_266 == &g_266) == (l_912 & ((p_56 ^ (((*g_723) = ((((((*g_521)--) && p_56) | 0UL) && 6L) , (void*)0)) == l_915)) && l_916)))));
                for (g_58 = 0; (g_58 <= 4); g_58 += 1)
                {
                    uint32_t l_920 = 0xE4AF6B7CL;
                    uint32_t ****l_930[10] = {&l_929,&l_929,&l_929,&l_929,&l_929,&l_929,&l_929,&l_929,&l_929,&l_929};
                    int32_t l_938 = 2L;
                    uint8_t **l_965[10][4] = {{&l_57[3][3],&l_57[3][3],&g_106,&l_57[3][3]},{&g_106,&l_57[3][3],(void*)0,(void*)0},{&g_106,&g_106,&l_57[3][3],&l_57[3][0]},{&g_106,&l_57[3][3],(void*)0,&g_106},{&g_106,&l_57[3][0],&g_106,(void*)0},{&l_57[3][3],&l_57[3][0],&l_57[3][3],&g_106},{&l_57[3][0],&l_57[3][3],&l_57[3][3],&l_57[3][0]},{&g_106,&g_106,&l_57[3][3],(void*)0},{&l_57[3][0],&l_57[3][3],&l_57[3][3],&l_57[3][3]},{&l_57[3][3],&l_57[3][3],&g_106,&l_57[3][3]}};
                    int32_t l_1018[9][9] = {{(-2L),2L,9L,(-1L),0x74F5233DL,9L,0L,5L,1L},{0x1C24C326L,(-1L),(-2L),(-2L),2L,0L,(-2L),5L,(-1L)},{(-1L),5L,0x1C24C326L,1L,0L,0L,0L,0L,1L},{(-1L),(-10L),(-1L),0L,0L,0x1C24C326L,9L,0L,0x1C24C326L},{0x1C24C326L,5L,(-1L),(-2L),0xB94665DBL,1L,(-1L),0xC20D1946L,0L},{(-2L),(-1L),0x1C24C326L,0L,0xB94665DBL,(-1L),(-2L),0L,0L},{9L,2L,(-2L),1L,0L,1L,(-2L),2L,9L},{(-1L),(-2L),9L,(-2L),0L,0x1C24C326L,(-1L),0L,9L},{(-1L),0L,(-1L),(-1L),2L,0L,9L,0xC20D1946L,0L}};
                    int i, j;
                }
            }
            if (p_56)
            {
                int64_t ****l_1023 = &g_488;
                int64_t *****l_1022 = &l_1023;
                int32_t l_1029 = (-4L);
                int i;
                if (((*l_62) = (((1L <= (0x06455D7EL || (safe_rshift_func_int16_t_s_u(0xD101L, ((((*l_165) = (l_1030 = ((((0xEA869CF9L | (l_1022 != l_1024)) != (p_56 == (safe_rshift_func_int16_t_s_u(l_923, ((*g_183) = l_1028))))) | 4294967287UL) | l_1029))) , 4UL) > 0xBCL))))) != l_1031) < 0xB076L)))
                {
                    for (p_56 = 0; (p_56 >= 0); p_56 -= 1)
                    {
                        int i, j;
                        if (g_856[(p_56 + 2)][p_56])
                            break;
                    }
                    l_923 &= ((void*)0 == &g_521);
                }
                else
                {
                    if (p_56)
                        break;
                    for (g_511 = 8; (g_511 >= 2); g_511 -= 1)
                    {
                        uint64_t l_1040 = 18446744073709551615UL;
                        int32_t *l_1044 = &g_129[5][2];
                        g_189[2] = (((safe_add_func_uint16_t_u_u(7UL, p_56)) || (p_56 > (safe_mod_func_int32_t_s_s(((*l_907) |= (l_923 & (safe_add_func_int64_t_s_s((*l_62), l_1029)))), ((((safe_div_func_int8_t_s_s(((l_1040 ^= p_56) , (safe_add_func_uint64_t_u_u(8UL, (&g_644 != (*l_1022))))), g_827)) <= l_1043) >= p_56) | 0x3BL))))) , l_1044);
                        return p_56;
                    }
                }
                (*l_165) = 0x1E439C1FL;
            }
            else
            {
                uint32_t l_1062[3];
                int32_t l_1063 = 0x96AB6CCFL;
                int32_t l_1064 = 0x4BE9FE9CL;
                uint8_t *l_1065[8] = {&g_155,&g_155,&g_155,&g_155,&g_155,&g_155,&g_155,&g_155};
                int i;
                for (i = 0; i < 3; i++)
                    l_1062[i] = 0x5E2F3409L;
                (*l_62) = ((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_1049 == p_56), 0xBC9EL)), (l_1064 ^= (((safe_div_func_int32_t_s_s((safe_mod_func_int64_t_s_s(((safe_div_func_uint32_t_u_u(((**g_520) = (((l_923 ^ ((l_923 & (safe_lshift_func_uint8_t_u_u((((((l_1062[2] |= (((((&g_1016 == (void*)0) != (l_1060 != ((((0xAFC3F7EAL && 1L) != (**g_520)) && p_56) , (void*)0))) , p_56) == p_56) || p_56)) , p_56) , p_56) && p_56) != p_56), p_56))) || 0x69L)) == 4UL) != 0L)), l_1063)) != p_56), 8L)), p_56)) > p_56) | 0x74L)))) & (*l_165));
                g_189[2] = func_88(l_1065[5]);
            }
            (*l_907) = ((((safe_mul_func_uint16_t_u_u(((((((l_1068[0] = 0xF474A13A638E7FFFLL) , (*l_175)) != (**l_1017)) > ((*l_62) , ((!(safe_mul_func_uint8_t_u_u(((((g_1072 != (l_1076 = &g_1073)) , (((safe_sub_func_uint16_t_u_u((g_64 , p_56), (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(p_56, p_56)) < l_1085[6][6][1]), g_129[5][2])), p_56)))) , (*g_183)) != l_1086)) , p_56) > g_319), p_56))) & p_56))) <= g_827) , p_56), (*g_183))) , p_56) , l_1087[2][0]) != l_1087[2][0]);
            for (g_319 = 8; (g_319 >= 0); g_319 -= 1)
            {
                int32_t l_1088 = 0xD79EDFFCL;
                int32_t l_1089 = 0L;
                int32_t l_1090 = (-1L);
                int32_t l_1091[6] = {1L,1L,1L,1L,1L,1L};
                int64_t l_1093 = 0L;
                uint64_t l_1140 = 0x9CABF75ADBB0E794LL;
                int i, j;
                --l_1094;
                (*g_186) = p_56;
                if (p_56)
                {
                    int16_t l_1097 = 0x61C7L;
                    const int32_t l_1107 = 1L;
                    int64_t l_1108 = (-1L);
                    int16_t l_1123 = 0x00FFL;
                    g_189[4] = func_81((p_56 > ((g_511 = (0x422FL ^ 0xD732L)) && ((*l_165) | l_1097))), ((((0x3785DAC0L == ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((((*l_886) ^= ((l_1097 < (l_1108 = (p_56 == (safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((((**g_489) &= p_56) && g_1106), l_1107)), p_56))))) || p_56)) != 0xAEL), p_56)), l_1097)) && 0UL)) > p_56) , l_1107) != p_56), g_319);
                    for (l_1030 = (-18); (l_1030 <= (-2)); l_1030++)
                    {
                        uint16_t *l_1114 = &g_1106;
                        int32_t l_1122 = 0L;
                        if ((*g_186))
                            break;
                        (*l_165) = (0L == (((((l_1111[4][9] = p_56) || ((+(~l_1107)) || (((l_1114 = &l_839) == (void*)0) ^ ((~g_827) , (((safe_rshift_func_uint8_t_u_u(p_56, ((*g_1019)++))) && p_56) < (safe_lshift_func_int16_t_s_u(((-8L) == l_1122), (*g_183)))))))) == (-1L)) ^ 0x22BDL) < l_1123));
                    }
                    if (g_1124)
                        continue;
                }
                else
                {
                    uint8_t l_1136 = 1UL;
                    int8_t *l_1138 = &g_27;
                    l_1125[6] = p_56;
                    (*l_165) = (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((((**g_520) == (l_1132 = ((*l_62) &= (*l_907)))) <= l_1133) >= g_883[1][7][0]), (safe_mod_func_int16_t_s_s(((l_1136 = p_56) != (safe_unary_minus_func_int16_t_s(((((&p_56 == l_1138) || l_1139[1]) > p_56) , (-4L))))), p_56)))), p_56)) , p_56), l_1140));
                }
                for (g_827 = 19; (g_827 != (-18)); --g_827)
                {
                    return p_56;
                }
            }
        }
    }
    else
    {
        int8_t l_1149 = (-1L);
        uint8_t ** const **l_1150 = (void*)0;
        uint8_t *l_1154 = &l_179;
        uint8_t ** const l_1153 = &l_1154;
        uint8_t ** const *l_1152[3];
        uint8_t ** const **l_1151 = &l_1152[2];
        uint8_t ****l_1155 = &g_1015;
        int32_t l_1156 = (-8L);
        int32_t l_1172 = (-8L);
        int16_t l_1179[6];
        int i;
        for (i = 0; i < 3; i++)
            l_1152[i] = &l_1153;
        for (i = 0; i < 6; i++)
            l_1179[i] = 0x7ADCL;
        l_1156 |= (0L <= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u(l_1149, (((*l_1151) = &l_175) == ((*l_1155) = &g_1016)))) ^ (0L == (*l_165))), 2)), ((**l_1153) = l_1149))));
        l_1156 &= ((safe_sub_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(p_56, ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(p_56, (((safe_add_func_uint16_t_u_u((((((void*)0 != l_1169) | (((((((0xA879L != ((safe_unary_minus_func_int8_t_s(l_1172)) != (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((*g_1019) = (safe_div_func_uint16_t_u_u(l_1179[1], (safe_mod_func_uint8_t_u_u(((((((*l_165) = (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(p_56, ((safe_div_func_uint16_t_u_u((p_56 || (**g_489)), (*g_183))) > 5UL))) , l_1179[1]), 0xB743C992L))) < p_56) , 1L) <= p_56) < l_1149), p_56))))), (*l_62))) , 247UL), p_56)))) || p_56) ^ p_56) & p_56) ^ (****g_1072)) ^ 0x0EEF29DB267B6070LL) ^ 0x847A97E2959EDD53LL)) , 0xED09L) >= 0UL), p_56)) < p_56) == 9L))) ^ p_56), p_56)), 8)) , (-8L)))) || p_56), 9L)) < 0x63L);
    }
    return p_56;
}







static const uint32_t func_71(uint8_t * p_72, int32_t p_73, uint32_t p_74)
{
    int32_t **l_840 = &g_186;
    int32_t l_841 = 0x92869763L;
    int32_t l_842 = 0x3E996AF0L;
    int32_t l_843[1];
    int32_t *l_844 = &l_843[0];
    int32_t *l_845 = &l_842;
    int32_t *l_846 = (void*)0;
    int32_t *l_847 = &l_842;
    int32_t *l_848 = &g_187;
    int32_t *l_849 = &g_187;
    int32_t *l_850 = &l_842;
    int32_t *l_851 = (void*)0;
    int32_t *l_852[8] = {&l_842,&l_842,&l_842,&l_842,&l_842,&l_842,&l_842,&l_842};
    int32_t l_853 = (-1L);
    int32_t l_854 = (-7L);
    int64_t l_855 = 0xA0156238E98CF0ECLL;
    int32_t l_857[4][9][7] = {{{0xEF9B120AL,(-1L),(-1L),0xEF9B120AL,(-1L),0x58C4A1D5L,0x80F5B7F0L},{(-1L),0xA5CDD9BDL,(-1L),0L,0L,(-1L),0xA5CDD9BDL},{(-1L),8L,0x23EE63CEL,1L,(-1L),0x80F5B7F0L,0x80F5B7F0L},{7L,(-1L),0L,(-1L),7L,0xFF56AB8DL,0L},{3L,0x58C4A1D5L,8L,1L,0L,1L,8L},{0L,0L,(-1L),0L,0xA5CDD9BDL,0xA74E2599L,(-1L)},{3L,1L,0xEF9B120AL,0xEF9B120AL,1L,3L,0L},{7L,(-1L),(-1L),0x8C4AE6B9L,0xA5CDD9BDL,0xA5CDD9BDL,0x8C4AE6B9L},{(-1L),3L,(-1L),0x80F5B7F0L,0L,0x23EE63CEL,3L}},{{(-1L),(-1L),7L,0xA74E2599L,7L,(-1L),(-1L)},{0xEF9B120AL,1L,3L,0L,(-1L),0x23EE63CEL,(-1L)},{(-1L),0L,0L,(-1L),0L,0xA5CDD9BDL,0xA74E2599L},{8L,0x58C4A1D5L,3L,(-1L),(-1L),3L,0x58C4A1D5L},{0L,(-1L),7L,0xFF56AB8DL,0L,0xA74E2599L,0xA74E2599L},{0x23EE63CEL,8L,(-1L),8L,0x23EE63CEL,1L,(-1L)},{(-1L),0xA5CDD9BDL,(-1L),0xFF56AB8DL,0x8C4AE6B9L,0xFF56AB8DL,(-1L)},{(-1L),(-1L),0xEF9B120AL,(-1L),0x58C4A1D5L,0x80F5B7F0L,3L},{(-1L),0xFF56AB8DL,(-1L),(-1L),0xFF56AB8DL,(-1L),0x8C4AE6B9L}},{{0x23EE63CEL,0xEF9B120AL,8L,0L,0x58C4A1D5L,0x58C4A1D5L,0L},{0L,0xAC2E1E0EL,0L,0xA74E2599L,0x8C4AE6B9L,7L,(-1L)},{8L,0xEF9B120AL,0x23EE63CEL,0x80F5B7F0L,0x23EE63CEL,0xEF9B120AL,8L},{(-1L),0xFF56AB8DL,(-1L),0x8C4AE6B9L,0L,7L,0L},{0xEF9B120AL,(-1L),(-1L),0xEF9B120AL,(-1L),0x58C4A1D5L,0x80F5B7F0L},{(-1L),0xA5CDD9BDL,(-1L),0L,0L,(-1L),0xA5CDD9BDL},{(-1L),8L,0x23EE63CEL,1L,(-1L),0x80F5B7F0L,0x80F5B7F0L},{7L,(-1L),0L,(-1L),(-1L),(-1L),0xA74E2599L},{(-1L),0x23EE63CEL,3L,0xEF9B120AL,0x58C4A1D5L,0xEF9B120AL,3L}},{{0xA74E2599L,0xA74E2599L,0L,0xFF56AB8DL,7L,(-1L),0L},{(-1L),0xEF9B120AL,(-1L),(-1L),0xEF9B120AL,(-1L),0x58C4A1D5L},{(-1L),0L,0xAC2E1E0EL,0xA5CDD9BDL,7L,7L,0xA5CDD9BDL},{1L,0L,1L,8L,0x58C4A1D5L,3L,(-1L)},{0xAC2E1E0EL,0L,(-1L),(-1L),(-1L),0L,0xAC2E1E0EL},{(-1L),0xEF9B120AL,(-1L),0x58C4A1D5L,0x80F5B7F0L,3L,0x80F5B7F0L},{0L,0xA74E2599L,0xA74E2599L,0L,0xFF56AB8DL,7L,(-1L)},{3L,0x23EE63CEL,(-1L),1L,1L,(-1L),0x23EE63CEL},{0xFF56AB8DL,0xAC2E1E0EL,(-1L),(-1L),0xA74E2599L,(-1L),(-1L)}}};
    int32_t l_858 = 0x89024D01L;
    uint32_t l_859 = 0x1EF8D845L;
    const int32_t l_862 = 0x1817846FL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_843[i] = 0L;
    (*l_840) = func_88(&g_155);
    ++l_859;
    return l_862;
}







static uint64_t func_75(int32_t * p_76, uint64_t * p_77, uint16_t p_78, uint16_t p_79, int32_t p_80)
{
    const int64_t l_701[1] = {0L};
    uint32_t l_706 = 0xAA41E400L;
    uint8_t l_707 = 1UL;
    const int32_t l_708 = 0x4CB0F858L;
    uint8_t *l_711 = &g_155;
    int32_t *l_713[1];
    const uint16_t *l_728[8][4] = {{&g_184,&g_184,&g_34[0][3],&g_184},{&g_184,&g_34[0][3],&g_34[0][3],&g_34[0][3]},{&g_184,&g_184,&g_34[0][3],&g_184},{&g_184,&g_34[0][3],&g_34[0][3],&g_34[0][3]},{&g_184,&g_184,&g_34[0][3],&g_184},{&g_184,&g_34[0][3],&g_34[0][3],&g_34[0][3]},{&g_184,&g_184,&g_34[0][3],&g_184},{&g_184,&g_34[0][3],&g_34[0][3],&g_34[0][3]}};
    int8_t l_768 = (-7L);
    uint16_t l_785 = 0x791BL;
    int16_t l_805 = 0xC8E2L;
    uint8_t l_807[5][1] = {{0xFEL},{0x5DL},{0xFEL},{0x5DL},{0xFEL}};
    uint16_t *l_828 = &g_34[0][3];
    uint16_t *l_829 = &l_785;
    int64_t ****l_833 = &g_488;
    uint32_t *l_834 = (void*)0;
    uint32_t *l_835 = &l_706;
    int8_t *l_836 = &g_185[2][6];
    int i, j;
    for (i = 0; i < 1; i++)
        l_713[i] = &g_30;
    for (p_79 = 0; (p_79 < 39); p_79++)
    {
        uint8_t l_700 = 8UL;
        uint32_t ***l_725 = &g_724;
        int16_t *l_736 = &g_511;
        int16_t ** const l_735 = &l_736;
        int64_t ****l_774 = &g_488;
        int32_t l_775 = 0xB30DA891L;
        int32_t l_777 = 0x6767FC77L;
        int32_t l_784 = 0xEC13E585L;
        uint32_t *l_797[4][3] = {{&g_393,&g_393,&g_393},{(void*)0,&g_393,&g_393},{&g_393,&g_394,&g_393},{(void*)0,&g_394,(void*)0}};
        int32_t l_798 = 0x087A84F5L;
        int32_t l_799 = 0xAF32318AL;
        int32_t l_800[1];
        int64_t l_801 = 3L;
        int16_t l_803 = 0xE4A9L;
        int32_t l_804[4];
        int32_t l_806 = 0x87BAFE94L;
        int64_t *l_810[9][5] = {{&l_801,&g_448[1][0][4],&l_801,&l_801,&g_448[1][0][4]},{&g_448[1][0][4],&l_801,&l_801,&g_448[1][0][4],&l_801},{&g_448[1][0][4],&g_448[1][0][4],(void*)0,&g_448[1][0][4],&g_448[1][0][4]},{&l_801,&g_448[1][0][4],&l_801,&l_801,&g_448[1][0][4]},{&g_448[1][0][4],&l_801,&l_801,&g_448[1][0][4],&l_801},{&g_448[1][0][4],&g_448[1][0][4],(void*)0,&g_448[1][0][4],&g_448[1][0][4]},{&l_801,&g_448[1][0][4],&l_801,&l_801,&g_448[1][0][4]},{&g_448[1][0][4],&l_801,&l_801,&g_448[1][0][4],&l_801},{&g_448[1][0][4],&g_448[1][0][4],(void*)0,&g_448[1][0][4],&g_448[1][0][4]}};
        int64_t *l_813[1][10] = {{&l_801,(void*)0,&l_801,(void*)0,&l_801,&l_801,(void*)0,&l_801,(void*)0,&l_801}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_800[i] = 0x1E6C19BCL;
        for (i = 0; i < 4; i++)
            l_804[i] = 0x4FE0CA7AL;
        if (((l_700 >= ((p_78 == (((**g_520) | (65535UL ^ ((l_701[0] <= (65533UL ^ (safe_add_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((((***g_488) &= (l_701[0] , ((l_706 = l_701[0]) ^ (0x6D1A08887D94F03DLL <= p_80)))) , l_707), l_700)) || l_707) , p_79), l_700)))) & 0x52E3F57C999F7572LL))) && 0x6388L)) , l_708)) < 65533UL))
        {
            uint8_t *l_709 = &g_155;
            uint8_t **l_710[3][7][2] = {{{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709}},{{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709}},{{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709},{&l_709,&l_709}}};
            int32_t **l_712 = &g_189[2];
            int i, j, k;
            (*l_712) = func_88((l_711 = l_709));
            if ((*p_76))
                break;
            if ((*p_76))
                continue;
            l_713[0] = &g_30;
        }
        else
        {
            const int16_t *l_730 = &g_65;
            const int16_t **l_729[5] = {&l_730,&l_730,&l_730,&l_730,&l_730};
            uint8_t l_738[6] = {0x12L,8UL,0x12L,0x12L,8UL,0x12L};
            int32_t l_767[7][7] = {{2L,2L,1L,1L,1L,2L,2L},{0x8EADB4B2L,0x6CB78B72L,0xFBC156EFL,0x6CB78B72L,0x8EADB4B2L,0x8EADB4B2L,0x6CB78B72L},{(-8L),0x1F96057AL,(-8L),1L,1L,(-8L),0x1F96057AL},{0x6CB78B72L,0x0FA52392L,0xFBC156EFL,0xFBC156EFL,0x0FA52392L,0x6CB78B72L,0x0FA52392L},{(-8L),1L,1L,(-8L),0x1F96057AL,(-8L),1L},{0x8EADB4B2L,0x8EADB4B2L,0x6CB78B72L,0xFBC156EFL,0x6CB78B72L,0x8EADB4B2L,0x8EADB4B2L},{2L,1L,1L,1L,2L,2L,1L}};
            int64_t **** const l_772 = &g_488;
            int32_t l_776 = 0x41D43678L;
            int32_t l_779 = 0x4E5AE4A2L;
            int32_t l_781 = 0xD2FCCCC1L;
            int32_t l_782 = 0xFBDCD3C4L;
            int32_t l_783[4] = {0xC3E6140BL,0xC3E6140BL,0xC3E6140BL,0xC3E6140BL};
            int i, j;
            for (g_50 = 0; (g_50 <= 47); g_50 = safe_add_func_uint8_t_u_u(g_50, 7))
            {
                const int32_t *l_717 = &g_30;
                const int32_t **l_716 = &l_717;
                (*p_76) = (-1L);
                (*l_716) = &l_708;
            }
            if ((*p_76))
                break;
            for (g_184 = 0; (g_184 > 43); ++g_184)
            {
                uint32_t ***l_722 = &g_520;
                const int16_t ***l_731[4][2];
                int32_t l_737 = 0x98892ABFL;
                int64_t *l_764 = &g_448[5][1][0];
                int32_t l_778 = 0L;
                int32_t l_780 = 0xA3AEF948L;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_731[i][j] = &l_729[4];
                }
                l_725 = ((p_78 || (safe_add_func_int8_t_s_s((-1L), (((*l_722) = &g_521) != (void*)0)))) , g_723);
                if ((((safe_sub_func_uint32_t_u_u(p_79, (l_737 = ((((*p_76) = (*p_76)) > ((void*)0 != l_728[7][3])) || ((p_78 <= ((*p_77) , (((*l_711) = (((g_732 = l_729[3]) != l_735) > l_737)) , 0x47L))) <= (*p_77)))))) <= 0x783D4E66L) | l_738[5]))
                {
                    (*p_76) &= 0L;
                }
                else
                {
                    uint16_t **l_755 = &g_266;
                    const int32_t l_765 = 0xE67969C8L;
                    int8_t *l_766 = &g_472;
                    int64_t *****l_773 = (void*)0;
                    if ((safe_lshift_func_uint16_t_u_s(((((248UL == (safe_mod_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((0L != (*g_490)) , (((((((*l_711) = (safe_div_func_int8_t_s_s(0L, ((((safe_lshift_func_int8_t_s_u(((*l_766) = (safe_unary_minus_func_int8_t_s((+((safe_sub_func_uint64_t_u_u((((g_183 = &g_34[0][3]) == ((*l_755) = &g_34[0][3])) , (safe_add_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u((((p_80 && (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((g_185[0][2] = 0x07L), (((*g_489) = p_77) == l_764))), p_78))) < l_765) ^ g_319), l_738[1])) & p_80), l_765))), p_80)) < l_765))))), p_78)) >= 0L) , p_79) | l_700)))) ^ l_700) == 18446744073709551608UL) | p_78) | l_700) >= 0xC03FL)), 0xFB25L)), l_767[3][1])) , l_737), (*p_77)))) , l_765) & 18446744073709551615UL) || l_767[3][1]), p_79)))
                    {
                        l_768 ^= (*p_76);
                    }
                    else
                    {
                        int32_t **l_769 = (void*)0;
                        int32_t **l_770 = (void*)0;
                        int32_t **l_771[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_771[i] = &l_713[0];
                        g_189[2] = &p_80;
                        (*p_76) = (*p_76);
                    }
                    l_774 = l_772;
                }
                --l_785;
            }
        }
        (*p_76) &= 0xEDD3608AL;
        if (((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((*g_490))), p_79)) > (safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(0x65L, ((*l_711) = (safe_div_func_uint64_t_u_u(((&g_732 == ((l_807[3][0]++) , (void*)0)) <= (g_802 ^= (p_79 < l_798))), 8UL))))) != (((*l_736) &= (((safe_div_func_int64_t_s_s(0x256B351937E7B140LL, l_804[2])) , l_813[0][7]) != (**g_488))) > p_79)), g_23))))
        {
            return (*p_77);
        }
        else
        {
            int64_t l_814 = (-1L);
            return l_814;
        }
    }
    (*p_76) = (safe_mul_func_uint16_t_u_u(((((*l_836) = (p_78 > (safe_add_func_uint64_t_u_u(((safe_div_func_int32_t_s_s((*p_76), ((*l_835) = (p_78 | (safe_div_func_int8_t_s_s((((p_78 , (*g_183)) > ((safe_div_func_int8_t_s_s((((**g_520) = (safe_mul_func_uint8_t_u_u((((*l_829) = ((*l_828) = g_827)) ^ (safe_mod_func_uint8_t_u_u((+(g_184 < (l_833 != ((*p_76) , (void*)0)))), g_27))), g_694))) , p_78), 0xD8L)) , p_80)) != (*p_76)), p_79)))))) , (*p_77)), (*p_77))))) > 1UL) && g_34[0][4]), 1UL));
    return (*p_77);
}







static int32_t * func_81(const int32_t p_82, int16_t p_83, int8_t p_84)
{
    int32_t *l_697 = &g_129[2][2];
    return l_697;
}







static int32_t func_85(int64_t p_86, uint8_t * p_87)
{
    int32_t **l_188[10][8] = {{&g_186,&g_186,&g_186,&g_186,(void*)0,&g_186,&g_186,&g_186},{&g_186,&g_186,&g_186,(void*)0,(void*)0,&g_186,(void*)0,(void*)0},{&g_186,&g_186,&g_186,&g_186,&g_186,&g_186,(void*)0,&g_186},{(void*)0,&g_186,&g_186,&g_186,(void*)0,(void*)0,&g_186,(void*)0},{(void*)0,(void*)0,&g_186,(void*)0,&g_186,(void*)0,(void*)0,&g_186},{&g_186,&g_186,&g_186,&g_186,(void*)0,&g_186,&g_186,&g_186},{&g_186,&g_186,&g_186,(void*)0,(void*)0,&g_186,(void*)0,(void*)0},{&g_186,&g_186,&g_186,&g_186,&g_186,&g_186,(void*)0,&g_186},{(void*)0,&g_186,&g_186,&g_186,(void*)0,(void*)0,&g_186,(void*)0},{(void*)0,(void*)0,&g_186,(void*)0,&g_186,(void*)0,(void*)0,&g_186}};
    int64_t *l_206 = &g_64;
    uint16_t *l_215 = &g_34[0][3];
    int16_t *l_226 = (void*)0;
    uint64_t **l_267 = &g_242[2];
    uint8_t l_348 = 4UL;
    int32_t l_361[9][2] = {{0x049EE28EL,0x3034EC30L},{(-8L),0x3034EC30L},{0x049EE28EL,0x3034EC30L},{(-8L),0x3034EC30L},{0x049EE28EL,0x3034EC30L},{(-8L),0x3034EC30L},{0x049EE28EL,0x3034EC30L},{(-8L),0x3034EC30L},{0x049EE28EL,0x3034EC30L}};
    uint32_t l_363[2][3][8] = {{{18446744073709551606UL,8UL,18446744073709551606UL,8UL,18446744073709551606UL,8UL,18446744073709551606UL,8UL},{18446744073709551606UL,8UL,18446744073709551606UL,8UL,18446744073709551606UL,8UL,18446744073709551606UL,8UL},{18446744073709551606UL,8UL,18446744073709551606UL,8UL,18446744073709551606UL,8UL,18446744073709551606UL,8UL}},{{18446744073709551606UL,8UL,18446744073709551606UL,8UL,18446744073709551606UL,8UL,18446744073709551606UL,8UL},{18446744073709551606UL,8UL,18446744073709551606UL,8UL,18446744073709551606UL,8UL,18446744073709551606UL,8UL},{18446744073709551606UL,8UL,18446744073709551606UL,8UL,18446744073709551606UL,8UL,18446744073709551606UL,8UL}}};
    uint32_t **l_522 = (void*)0;
    int64_t ***l_672[3];
    int16_t l_688 = (-6L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_672[i] = &g_489;
    g_189[2] = (g_186 = &g_129[6][7]);
    if (((void*)0 != l_188[6][7]))
    {
        int32_t *l_190 = (void*)0;
        l_190 = l_190;
        g_186 = func_88(p_87);
    }
    else
    {
        int64_t *l_208[8] = {&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64};
        int32_t l_218 = 0x83231570L;
        int32_t l_230 = 0x985AA2B0L;
        int32_t l_295 = 9L;
        int32_t l_352 = 0xD171539EL;
        int32_t l_354[1];
        uint32_t *l_390 = &l_363[1][0][2];
        int64_t **l_447 = &l_208[7];
        uint16_t *l_573 = &g_184;
        int32_t *l_673 = &l_354[0];
        uint64_t *l_687 = &g_50;
        int i;
        for (i = 0; i < 1; i++)
            l_354[i] = 0xA11987D1L;
        for (g_50 = 0; (g_50 < 27); g_50 = safe_add_func_int32_t_s_s(g_50, 8))
        {
            uint64_t *l_200 = &g_159;
            int64_t **l_205[4];
            int32_t l_207 = 0xB200155BL;
            int16_t *l_216 = (void*)0;
            int16_t *l_217 = &g_65;
            int32_t *l_219[9] = {&g_129[7][9],&g_129[7][9],&g_129[7][9],&g_129[7][9],&g_129[7][9],&g_129[7][9],&g_129[7][9],&g_129[7][9],&g_129[7][9]};
            int16_t **l_227 = &l_226;
            int8_t *l_237 = &g_185[1][1];
            int32_t *l_241 = &g_129[1][0];
            uint8_t l_268 = 6UL;
            const int16_t l_269 = (-10L);
            uint32_t *l_366 = (void*)0;
            uint32_t *l_367 = (void*)0;
            uint32_t *l_368 = &l_363[1][0][6];
            int8_t l_423 = (-1L);
            uint32_t l_509 = 4294967293UL;
            uint64_t l_512 = 0xF7F081A318F5F96ELL;
            uint16_t l_609 = 65528UL;
            int32_t l_634[5][9] = {{(-1L),(-7L),0x60A099C0L,(-7L),(-1L),1L,(-9L),0x7A979979L,0x7A979979L},{(-7L),0L,(-1L),0x7A979979L,(-1L),0L,(-7L),0xE1F72F03L,0x78C3719AL},{0xB958281AL,0x78C3719AL,(-7L),1L,0xE1F72F03L,1L,(-7L),0x78C3719AL,0xB958281AL},{0L,1L,0xB958281AL,0xE1F72F03L,(-9L),(-1L),(-9L),0xE1F72F03L,0xB958281AL},{(-9L),(-9L),0L,0x60A099C0L,0x78C3719AL,0x7A979979L,0xB958281AL,0x7A979979L,0x78C3719AL}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_205[i] = (void*)0;
        }
        l_673 = (g_189[2] = (g_186 = (((void*)0 != l_672[1]) , l_673)));
        l_295 &= (((safe_rshift_func_int8_t_s_u((((safe_add_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(p_86, p_86)), p_86)) ^ ((*l_687) = ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(((((((*g_489) == (void*)0) ^ (((((*g_490) = ((*l_206) ^= p_86)) , ((6UL || p_86) || ((((p_86 , l_267) != g_686) , (*g_186)) > 0xC90D8B63L))) <= 0x44BDE683L) == p_86)) & 1UL) , 0x274AL) >= (*l_673)), p_86)) && p_86), (*l_673))) ^ 1UL))), p_86)) < p_86) , p_86), 7)) | p_86) != p_86);
    }
    l_688 |= 3L;
    for (g_10 = 0; (g_10 == 10); g_10 = safe_add_func_int16_t_s_s(g_10, 8))
    {
        int32_t l_691 = 0x0D80E199L;
        int32_t l_692 = 0x6EFD467FL;
        int32_t l_693[6][10] = {{1L,(-9L),1L,2L,1L,(-9L),1L,2L,1L,(-9L)},{0x6D3A097CL,2L,1L,2L,0x6D3A097CL,2L,1L,2L,0x6D3A097CL,2L},{1L,2L,1L,(-9L),1L,2L,1L,(-9L),1L,2L},{0x6D3A097CL,(-9L),1L,(-9L),0x6D3A097CL,(-9L),1L,(-9L),0x6D3A097CL,(-9L)},{1L,(-9L),1L,2L,1L,(-9L),1L,2L,1L,(-9L)},{0x6D3A097CL,2L,1L,2L,0x6D3A097CL,2L,1L,2L,0x6D3A097CL,2L}};
        int i, j;
        g_694++;
    }
    return p_86;
}







static int32_t * func_88(uint8_t * p_89)
{
    uint16_t l_92 = 0x9B3EL;
    uint8_t *l_101 = &g_58;
    uint8_t *l_105 = &g_58;
    uint8_t **l_104[10][8] = {{&l_101,(void*)0,&l_101,&l_101,&l_105,&l_105,&l_105,&l_101},{(void*)0,(void*)0,(void*)0,&l_105,&l_101,&l_101,&l_105,&l_101},{&l_105,&l_105,&l_101,&l_105,&l_101,&l_105,(void*)0,(void*)0},{&l_101,&l_105,(void*)0,(void*)0,(void*)0,&l_105,&l_101,&l_101},{&l_101,&l_101,(void*)0,&l_101,&l_105,&l_101,(void*)0,&l_101},{(void*)0,&l_101,&l_105,(void*)0,&l_105,&l_101,&l_105,(void*)0},{&l_101,&l_101,&l_101,&l_101,(void*)0,&l_101,&l_105,&l_101},{&l_101,&l_101,&l_105,&l_101,&l_101,&l_105,(void*)0,(void*)0},{&l_101,&l_105,(void*)0,(void*)0,(void*)0,&l_105,&l_101,&l_101},{&l_101,&l_101,(void*)0,&l_101,&l_105,&l_101,(void*)0,&l_101}};
    uint32_t *l_108 = (void*)0;
    int32_t *l_109 = &g_30;
    uint64_t *l_122 = &g_50;
    uint16_t *l_126[1];
    uint64_t l_127 = 0xE2C80CF28406A83BLL;
    int32_t *l_128[7][7][4] = {{{&g_129[1][3],(void*)0,&g_129[5][2],&g_129[8][6]},{&g_129[5][1],&g_129[5][2],&g_129[5][1],&g_129[8][6]},{&g_129[5][2],(void*)0,&g_129[1][3],(void*)0},{&g_129[7][1],&g_129[7][1],(void*)0,(void*)0},{&g_129[5][2],&g_129[5][2],(void*)0,&g_129[5][1]},{&g_129[7][1],&g_129[6][3],&g_129[1][3],&g_129[7][1]},{&g_129[5][2],&g_129[1][3],&g_129[5][1],&g_129[1][3]}},{{&g_129[5][1],&g_129[1][3],&g_129[5][2],&g_129[7][1]},{&g_129[1][3],&g_129[6][3],&g_129[7][1],&g_129[5][1]},{(void*)0,&g_129[5][2],&g_129[5][2],(void*)0},{(void*)0,&g_129[7][1],&g_129[7][1],(void*)0},{&g_129[1][3],(void*)0,&g_129[5][2],&g_129[8][6]},{&g_129[5][1],&g_129[5][2],&g_129[5][1],&g_129[8][6]},{&g_129[5][2],(void*)0,&g_129[1][3],(void*)0}},{{&g_129[7][1],&g_129[7][1],(void*)0,(void*)0},{&g_129[5][2],&g_129[5][2],(void*)0,&g_129[5][1]},{&g_129[7][1],&g_129[6][3],&g_129[1][3],&g_129[7][1]},{&g_129[5][2],&g_129[1][3],&g_129[5][1],&g_129[1][3]},{&g_129[5][1],&g_129[1][3],&g_129[5][2],&g_129[7][1]},{&g_129[1][3],&g_129[6][3],&g_129[7][1],&g_129[5][1]},{(void*)0,&g_129[5][2],&g_129[5][2],(void*)0}},{{(void*)0,&g_129[7][1],&g_129[7][1],(void*)0},{&g_129[1][3],(void*)0,&g_129[5][2],&g_129[8][6]},{&g_129[5][1],&g_129[5][2],&g_129[5][1],&g_129[8][6]},{&g_129[5][2],(void*)0,&g_129[1][3],(void*)0},{&g_129[7][1],&g_129[7][1],(void*)0,(void*)0},{&g_129[5][2],&g_129[5][2],(void*)0,&g_129[5][1]},{&g_129[7][1],&g_129[6][3],&g_129[1][3],&g_129[7][1]}},{{&g_129[5][2],&g_129[1][3],&g_129[5][1],&g_129[1][3]},{&g_129[5][1],&g_129[1][3],&g_129[5][2],&g_129[7][1]},{&g_129[1][3],&g_129[6][3],&g_129[7][1],&g_129[5][1]},{(void*)0,&g_129[5][2],&g_129[5][2],(void*)0},{(void*)0,&g_129[7][1],&g_129[7][1],&g_129[6][3]},{&g_129[5][2],&g_129[5][2],&g_129[7][1],&g_129[1][3]},{&g_129[7][1],(void*)0,&g_129[7][1],&g_129[1][3]}},{{&g_129[7][1],&g_129[5][2],&g_129[5][2],&g_129[6][3]},{&g_129[5][1],(void*)0,&g_129[5][2],&g_129[5][2]},{&g_129[8][6],&g_129[8][6],&g_129[5][2],&g_129[7][1]},{&g_129[5][1],&g_129[5][2],&g_129[5][2],(void*)0},{&g_129[7][1],&g_129[5][2],&g_129[7][1],&g_129[5][2]},{&g_129[7][1],&g_129[5][2],&g_129[7][1],(void*)0},{&g_129[5][2],&g_129[5][2],&g_129[5][1],&g_129[7][1]}},{{&g_129[5][2],&g_129[8][6],&g_129[8][6],&g_129[5][2]},{&g_129[5][2],(void*)0,&g_129[5][1],&g_129[6][3]},{&g_129[5][2],&g_129[5][2],&g_129[7][1],&g_129[1][3]},{&g_129[7][1],(void*)0,&g_129[7][1],&g_129[1][3]},{&g_129[7][1],&g_129[5][2],&g_129[5][2],&g_129[6][3]},{&g_129[5][1],(void*)0,&g_129[5][2],&g_129[5][2]},{&g_129[8][6],&g_129[8][6],&g_129[5][2],&g_129[7][1]}}};
    int32_t **l_130 = (void*)0;
    int32_t **l_131 = &l_109;
    uint32_t *l_133[1][3];
    uint32_t l_137 = 0x676B532CL;
    uint64_t *l_153 = &l_127;
    int64_t l_154 = 0x916C188A167226A6LL;
    uint64_t *l_158[6] = {&g_159,&g_159,&g_159,&g_159,&g_159,&g_159};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_126[i] = &g_34[0][3];
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_133[i][j] = &g_10;
    }
    (*l_109) = (safe_mod_func_int64_t_s_s(l_92, (safe_add_func_int64_t_s_s(((g_50 & (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(((l_92 , (l_101 != ((safe_lshift_func_uint8_t_u_u(((((p_89 = l_101) != (g_106 = g_106)) >= 0xA2L) ^ (((((l_92 ^ (~g_27)) , l_108) == l_108) == 255UL) <= 6UL)), l_92)) , p_89))) & l_92), l_92)) < l_92) > g_23), l_92)), 1L))) >= l_92), g_9[0]))));
    g_129[5][3] = ((*l_109) = (((((safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((g_50 < (*l_109)), (~(safe_mul_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((*l_109), ((+(*l_109)) == (((void*)0 != l_122) <= (((((*l_109) >= ((safe_div_func_int64_t_s_s((+((g_34[0][5] = (*l_109)) & 0xB4ABL)), (-8L))) , 0x62AD52EBL)) && (*l_109)) | (*l_109)) ^ (*l_109)))))), 2L)) & g_27), 9L))))), 9UL)) == l_127) , (*l_109)) ^ (*p_89)) >= g_9[0]));
    (*l_131) = l_108;
    if ((+((g_10 = 0xD6A3EEC5L) | ((g_160 ^= (!((safe_sub_func_int64_t_s_s(l_137, g_64)) & ((g_64 , ((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((((safe_add_func_int32_t_s_s(((-1L) & g_9[0]), ((safe_unary_minus_func_uint64_t_u((g_159 = (((safe_rshift_func_uint16_t_u_s((g_157 = (g_156 &= ((safe_div_func_int64_t_s_s(g_58, ((*l_122) = g_30))) > (g_155 = (((safe_rshift_func_uint16_t_u_u((g_34[0][2] ^= (l_154 = (!(((*l_153) = (safe_unary_minus_func_int32_t_s((g_129[5][2] < 4294967293UL)))) ^ g_9[2])))), g_23)) >= g_9[1]) != g_65))))), 8)) & 0x4E53AA939E12E8AALL) > g_64)))) >= (*p_89)))) ^ 0x631F00607BE1BD84LL) , (*p_89)) > (*p_89)) != 1L), 7L)), 0x925CL)) || g_34[0][3])) ^ (-1L))))) <= g_129[7][2]))))
    {
        uint32_t l_161 = 0x04393044L;
        int32_t *l_162 = &g_129[5][2];
        g_30 = l_161;
        return l_162;
    }
    else
    {
        int32_t *l_163 = &g_30;
        return l_163;
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
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_34[i][j], "g_34[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_129[i][j], "g_129[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_185[i][j], "g_185[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_448[i][j][k], "g_448[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_827, "g_827", print_hash_value);
    transparent_crc(g_838, "g_838", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_856[i][j], "g_856[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_883[i][j][k], "g_883[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1049, "g_1049", print_hash_value);
    transparent_crc(g_1106, "g_1106", print_hash_value);
    transparent_crc(g_1124, "g_1124", print_hash_value);
    transparent_crc(g_1288, "g_1288", print_hash_value);
    transparent_crc(g_1457, "g_1457", print_hash_value);
    transparent_crc(g_1506, "g_1506", print_hash_value);
    transparent_crc(g_1519, "g_1519", print_hash_value);
    transparent_crc(g_1616, "g_1616", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1626[i][j][k], "g_1626[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
