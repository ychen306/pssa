// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 3A208EFA
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
   const int32_t f0;
   int8_t f1;
};


static int32_t g_2[4][8][8] = {{{0x89AA5088L,0xC9A57B5BL,0xC7128ABFL,(-8L),0x1651328FL,0xDACD7D39L,0x2D6273D5L,2L},{0xC9A57B5BL,9L,1L,(-4L),0L,0x43E2F7C6L,1L,8L},{0x29A275FFL,0x2D6273D5L,0xDDD9CD44L,0xD53BC6E5L,(-1L),1L,0x386CCE57L,0x1521FAFBL},{0x6A81D68CL,(-1L),7L,0L,0x7A95534FL,0x445ACEE6L,(-4L),(-1L)},{0x45B6D4F5L,0L,0x1521FAFBL,0xEED050B7L,0x56915A13L,0x2D3F5047L,0x1D1B9849L,0x1D1B9849L},{(-8L),7L,7L,7L,7L,(-8L),0xFEF40729L,1L},{7L,0x45B6D4F5L,9L,(-1L),7L,1L,0xBCD76CE4L,0xB187B35FL},{0xF7673ED1L,0x780EEC29L,(-1L),(-1L),(-1L),0x276B87D0L,0x3CF81320L,1L}},{{1L,(-1L),0xD53BC6E5L,0xDDD9CD44L,0x2D6273D5L,0x29A275FFL,0L,1L},{1L,(-5L),0x1651328FL,7L,7L,1L,0x29A275FFL,0L},{0x9B7D6B59L,0xDACD7D39L,0x386CCE57L,0x6A81D68CL,9L,0xCC9D6C84L,0x780EEC29L,(-1L)},{0xEED050B7L,(-1L),0x3C9534CEL,1L,0x5FAFE44FL,0xEC767DBFL,0xA5166941L,0xDACD7D39L},{8L,0x445ACEE6L,0L,0xAFE2499EL,0x98BBEB92L,0x45B6D4F5L,0L,(-4L)},{0L,0x1D1B9849L,(-1L),8L,(-1L),1L,(-3L),7L},{0x1D1B9849L,7L,0L,5L,0x3C9534CEL,0x445ACEE6L,(-1L),0xC9A57B5BL},{0xA5166941L,0x5FAFE44FL,0xD53BC6E5L,0x43E2F7C6L,0x6A81D68CL,(-1L),0xC74AA0D7L,1L}},{{4L,0L,9L,0x9C4DDB84L,2L,0x9C4DDB84L,9L,0L},{0x5FAFE44FL,0xC509CA4FL,0L,9L,0x1651328FL,0xD89D6848L,1L,1L},{1L,0xEC767DBFL,(-4L),0x276B87D0L,0x5FAFE44FL,8L,1L,0x786C7A88L},{(-4L),0x276B87D0L,0L,0xD89D6848L,7L,0x1D1B9849L,9L,(-1L)},{7L,0x1D1B9849L,9L,(-1L),0x445ACEE6L,0xDDD9CD44L,0xC74AA0D7L,(-1L)},{5L,1L,0xD53BC6E5L,0x45B6D4F5L,(-4L),0L,(-1L),5L},{1L,(-5L),0L,0xBCD76CE4L,9L,0x56915A13L,(-3L),0xC509CA4FL},{0x9B7D6B59L,0x3C9534CEL,(-1L),0x9C4DDB84L,0x2E633725L,1L,0L,(-1L)}},{{0x3CF81320L,7L,0L,0x1521FAFBL,0x29A275FFL,(-3L),0xA5166941L,0x3C9534CEL},{1L,8L,0x3C9534CEL,0x718BC698L,0xEA53061EL,0x45B6D4F5L,0x780EEC29L,0xEED050B7L},{0xEC767DBFL,(-4L),0x386CCE57L,0L,(-1L),0x1D1B9849L,0x29A275FFL,(-4L)},{(-4L),0x45B6D4F5L,0x1651328FL,5L,0x9C4DDB84L,0L,0L,0x9C4DDB84L},{1L,0xD53BC6E5L,0xD53BC6E5L,1L,0x3C9534CEL,0xB187B35FL,0x3CF81320L,8L},{0x780EEC29L,0L,(-1L),0L,(-1L),4L,0x2D6273D5L,0x98BBEB92L},{(-8L),0x5DC1B6EAL,0x3C9534CEL,0xDDD9CD44L,1L,0xCC9D6C84L,(-5L),0L},{0x946CB4F5L,1L,0x29A275FFL,0x5FAFE44FL,0L,0x6A81D68CL,0xB187B35FL,0xB243E5ECL}}};
static int32_t g_6 = 0L;
static int32_t g_45 = 0L;
static union U0 g_76 = {0L};
static int32_t g_82 = 4L;
static int32_t * const g_90 = &g_2[1][7][3];
static int32_t * const *g_89 = &g_90;
static int32_t *g_101[1] = {&g_2[1][2][0]};
static int32_t **g_100 = &g_101[0];
static int16_t g_106[4] = {0x580BL,0x580BL,0x580BL,0x580BL};
static uint32_t g_122 = 0UL;
static uint8_t g_161 = 0UL;
static uint64_t g_188 = 18446744073709551607UL;
static int64_t g_202[6][1] = {{0x996229258A53ACA8LL},{(-3L)},{(-3L)},{0x996229258A53ACA8LL},{(-3L)},{(-3L)}};
static int64_t *g_201[9] = {&g_202[1][0],&g_202[1][0],&g_202[1][0],&g_202[1][0],&g_202[1][0],&g_202[1][0],&g_202[1][0],&g_202[1][0],&g_202[1][0]};
static int32_t *g_218 = &g_6;
static int8_t g_244 = 7L;
static int32_t g_347 = 0x98009BCFL;
static int32_t g_348 = 0x9EE93812L;
static int32_t *g_350 = (void*)0;
static int32_t **g_349 = &g_350;
static uint32_t g_357 = 0xE1E70DB3L;
static int8_t g_442 = (-1L);
static uint16_t g_447 = 0xF670L;
static uint32_t *g_458 = &g_122;
static uint32_t **g_457 = &g_458;
static uint32_t **g_461[9][4][2] = {{{&g_458,(void*)0},{(void*)0,&g_458},{(void*)0,(void*)0},{&g_458,(void*)0}},{{(void*)0,&g_458},{(void*)0,(void*)0},{&g_458,(void*)0},{(void*)0,&g_458}},{{(void*)0,(void*)0},{&g_458,(void*)0},{(void*)0,&g_458},{(void*)0,(void*)0}},{{&g_458,(void*)0},{(void*)0,&g_458},{(void*)0,(void*)0},{&g_458,(void*)0}},{{(void*)0,&g_458},{(void*)0,(void*)0},{&g_458,(void*)0},{(void*)0,&g_458}},{{(void*)0,(void*)0},{&g_458,(void*)0},{(void*)0,&g_458},{(void*)0,(void*)0}},{{&g_458,(void*)0},{(void*)0,&g_458},{(void*)0,(void*)0},{&g_458,(void*)0}},{{(void*)0,&g_458},{(void*)0,(void*)0},{&g_458,(void*)0},{(void*)0,&g_458}},{{(void*)0,(void*)0},{&g_458,(void*)0},{(void*)0,&g_458},{(void*)0,(void*)0}}};
static int64_t g_489 = 7L;
static int8_t g_506 = 0x9FL;
static uint32_t g_509 = 0xAE1CE67BL;
static union U0 *g_511 = &g_76;
static union U0 **g_510 = &g_511;
static const uint32_t *g_515 = &g_509;
static const uint32_t **g_514 = &g_515;
static uint64_t g_662 = 0UL;
static const uint64_t g_668 = 0x9914B8399A6D7AECLL;
static int16_t ** const g_707 = (void*)0;
static uint32_t ***g_760[6][2][9] = {{{&g_461[7][3][0],&g_457,(void*)0,&g_457,&g_461[2][1][1],(void*)0,&g_457,&g_457,&g_461[8][0][0]},{&g_461[6][1][0],&g_457,&g_461[8][0][0],&g_461[8][0][0],&g_461[5][3][0],&g_461[8][0][0],&g_461[8][0][0],&g_457,&g_461[6][1][0]}},{{&g_461[8][0][0],&g_461[8][0][0],&g_461[2][3][0],&g_457,&g_457,&g_457,&g_461[5][1][1],&g_461[2][3][0],&g_461[2][1][1]},{&g_461[8][0][0],&g_457,(void*)0,&g_457,&g_461[8][0][0],&g_461[8][0][0],&g_461[5][3][0],&g_461[8][0][0],&g_461[8][0][0]}},{{&g_461[8][0][0],&g_457,&g_461[5][1][1],&g_461[8][0][0],&g_461[5][1][1],&g_457,&g_461[8][0][0],&g_457,&g_461[8][0][0]},{&g_461[6][1][0],&g_461[8][0][0],&g_461[8][0][0],&g_457,&g_457,&g_461[8][0][0],&g_461[8][0][0],&g_457,&g_461[8][0][0]}},{{&g_461[7][3][0],&g_457,&g_461[8][0][0],(void*)0,&g_461[8][0][0],(void*)0,&g_457,&g_457,(void*)0},{(void*)0,&g_457,&g_461[8][0][0],&g_457,(void*)0,&g_461[8][0][0],&g_461[8][0][0],&g_461[8][0][0],&g_457}},{{&g_461[2][1][1],&g_461[0][0][1],&g_461[8][0][0],&g_457,&g_457,&g_461[2][1][1],&g_461[8][0][0],&g_457,&g_461[0][0][1]},{&g_461[8][0][0],&g_461[8][0][0],(void*)0,&g_457,&g_457,&g_457,&g_457,&g_457,&g_457}},{{&g_457,&g_457,&g_457,&g_461[7][3][0],&g_457,&g_461[8][0][0],&g_457,&g_461[2][3][0],(void*)0},{&g_461[8][0][0],&g_461[8][0][0],&g_461[6][1][0],(void*)0,&g_457,&g_461[8][0][0],&g_461[8][0][0],(void*)0,&g_457}}};
static int32_t ***g_807 = &g_349;
static int32_t ****g_806 = &g_807;
static int32_t * const ***g_808[1] = {(void*)0};
static int32_t g_817 = (-7L);
static int32_t g_818 = (-10L);
static uint32_t g_821 = 1UL;
static int16_t g_897 = 0x419EL;
static union U0 g_908 = {0L};
static uint8_t g_927[3] = {9UL,9UL,9UL};
static uint16_t g_959[7][6] = {{0xBE05L,0xBE05L,0x801EL,0x0724L,0xE504L,0x801EL},{0x0724L,0xE504L,0x801EL,0xE504L,0x0724L,0x801EL},{0xE504L,0x0724L,0x801EL,0xBE05L,0xBE05L,0x801EL},{0xBE05L,0xBE05L,0x801EL,0x0724L,0xE504L,0x801EL},{0x0724L,0xE504L,0x801EL,0xE504L,0x0724L,0x801EL},{0xE504L,0x0724L,0x801EL,0xBE05L,0xBE05L,0x801EL},{0xBE05L,0xBE05L,0x801EL,0x0724L,0xE504L,0x801EL}};
static uint64_t *g_970 = &g_662;
static uint64_t **g_969[9] = {&g_970,&g_970,&g_970,&g_970,&g_970,&g_970,&g_970,&g_970,&g_970};
static uint64_t ***g_968[3][6] = {{&g_969[5],&g_969[5],&g_969[5],&g_969[5],&g_969[5],&g_969[5]},{&g_969[5],&g_969[5],&g_969[5],&g_969[5],&g_969[5],&g_969[5]},{&g_969[5],&g_969[5],&g_969[5],&g_969[5],&g_969[5],&g_969[5]}};
static uint32_t g_1098 = 0UL;
static int32_t g_1117[8] = {8L,8L,(-7L),8L,8L,(-7L),8L,8L};
static int64_t g_1121[7] = {0x27D1474CB607B18FLL,0x27D1474CB607B18FLL,0x27D1474CB607B18FLL,0x27D1474CB607B18FLL,0x27D1474CB607B18FLL,0x27D1474CB607B18FLL,0x27D1474CB607B18FLL};
static uint64_t g_1133[2][5] = {{0x709FCBB22117CF9CLL,0x709FCBB22117CF9CLL,18446744073709551615UL,0x709FCBB22117CF9CLL,0x709FCBB22117CF9CLL},{0UL,0x709FCBB22117CF9CLL,0UL,0UL,0x709FCBB22117CF9CLL}};
static uint8_t g_1164 = 0xA6L;
static const int16_t g_1178 = (-5L);
static const int16_t *g_1177 = &g_1178;
static int8_t g_1259 = (-1L);
static int16_t g_1304 = (-1L);
static uint32_t g_1309[8][4][3] = {{{0x1DE30E78L,0x0FD4AF1FL,6UL},{0UL,5UL,0UL},{5UL,0UL,0x55444A7CL},{0UL,5UL,0x1C148A2BL}},{{0x0FD4AF1FL,0x0FD4AF1FL,4294967286UL},{0UL,4294967286UL,0UL},{0x0FD4AF1FL,6UL,0UL},{0UL,1UL,4294967291UL}},{{5UL,0x0FD4AF1FL,0UL},{0UL,4294967295UL,0UL},{0x1DE30E78L,0UL,4294967286UL},{0UL,4294967295UL,0x1C148A2BL}},{{0xECE9798AL,0x0FD4AF1FL,0x55444A7CL},{0UL,1UL,0UL},{0xECE9798AL,6UL,6UL},{0UL,4294967286UL,4294967291UL}},{{0x1DE30E78L,0x0FD4AF1FL,6UL},{0UL,5UL,0UL},{5UL,0UL,0x55444A7CL},{0UL,5UL,0x1C148A2BL}},{{0x0FD4AF1FL,0x0FD4AF1FL,4294967286UL},{0UL,4294967286UL,0UL},{0x0FD4AF1FL,6UL,0UL},{0UL,1UL,4294967291UL}},{{5UL,0x0FD4AF1FL,0UL},{0UL,4294967295UL,0UL},{0x1DE30E78L,0UL,4294967286UL},{0UL,4294967295UL,0x1C148A2BL}},{{0xECE9798AL,0x0FD4AF1FL,0x55444A7CL},{0UL,1UL,0UL},{0xECE9798AL,6UL,6UL},{0UL,4294967286UL,4294967291UL}}};
static uint16_t *g_1708[1] = {&g_447};
static uint16_t **g_1707 = &g_1708[0];
static uint16_t * const **g_1710 = (void*)0;
static int16_t g_1860 = 0x8AB3L;
static int32_t g_1925 = 0xF9858854L;
static int32_t g_2064[8][1] = {{(-2L)},{0L},{0L},{(-2L)},{0L},{0L},{(-2L)},{0L}};
static int32_t g_2065[2][9] = {{0x99AACFDEL,0x99AACFDEL,1L,(-1L),1L,0x99AACFDEL,0x99AACFDEL,1L,(-1L)},{0xC441EA67L,3L,0xC441EA67L,1L,1L,0xC441EA67L,3L,0xC441EA67L,1L}};
static int32_t g_2066 = 1L;
static int32_t g_2067[8] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
static int32_t g_2068 = (-1L);
static int32_t g_2069[3][7] = {{0xFC67CBC6L,0xFC67CBC6L,1L,0xFC67CBC6L,0xFC67CBC6L,1L,0xFC67CBC6L},{0x9D6A288CL,0x5F5AAC24L,0x5F5AAC24L,0x9D6A288CL,0x5F5AAC24L,0x5F5AAC24L,0x9D6A288CL},{1L,0xFC67CBC6L,1L,1L,0xFC67CBC6L,1L,1L}};
static int32_t g_2070 = 3L;
static int32_t g_2071 = 0x3C7D0A42L;
static int32_t g_2072 = 0xD25A35E9L;
static int32_t g_2073 = 9L;
static int32_t g_2074 = (-1L);
static int32_t g_2075 = 0x23C7E542L;
static int32_t g_2076 = (-1L);
static int32_t g_2077[4][10] = {{(-1L),(-5L),0x42E4D68BL,(-5L),(-1L),0xE2C0E11FL,7L,3L,3L,7L},{5L,0xE2C0E11FL,(-4L),(-4L),0xE2C0E11FL,5L,(-2L),7L,(-1L),7L},{(-5L),(-4L),(-1L),3L,(-1L),(-4L),(-5L),(-2L),(-1L),(-1L)},{(-5L),(-1L),5L,0x42E4D68BL,0x42E4D68BL,5L,(-1L),(-5L),0xE2C0E11FL,(-2L)}};
static int32_t g_2078[4][5][5] = {{{0xA35460DAL,(-1L),9L,0x840A7607L,1L},{1L,0x17EB8CDEL,0L,0x840A7607L,0xF725CF56L},{0x1E9B1FD0L,0xE44F6B6DL,(-8L),(-1L),1L},{0x1E9B1FD0L,0x840A7607L,0x6125DC11L,(-4L),0x909C6876L},{1L,0xE44F6B6DL,0x6125DC11L,1L,(-10L)}},{{0xA35460DAL,0x17EB8CDEL,(-8L),(-4L),(-10L)},{0x909C6876L,(-1L),0L,(-1L),0x909C6876L},{0xA35460DAL,(-1L),9L,0x840A7607L,1L},{1L,0x17EB8CDEL,0L,0x840A7607L,0xF725CF56L},{0x1E9B1FD0L,0xE44F6B6DL,(-8L),(-1L),1L}},{{0x1E9B1FD0L,0x840A7607L,0x6125DC11L,(-4L),0x909C6876L},{1L,0xE44F6B6DL,0x6125DC11L,1L,(-10L)},{0xA35460DAL,0x17EB8CDEL,(-8L),0x74905C5BL,0x17EB8CDEL},{(-4L),0x919AC8D1L,8L,0x919AC8D1L,(-4L)},{0x840A7607L,0x919AC8D1L,0xD2315D19L,0xBEF32DDBL,0x1372578CL}},{{0x1372578CL,1L,8L,0xBEF32DDBL,(-1L)},{0xE44F6B6DL,(-1L),0xDBCBFFCDL,0x919AC8D1L,0x1372578CL},{0xE44F6B6DL,0xBEF32DDBL,0x905213E6L,0x74905C5BL,(-4L)},{0x1372578CL,(-1L),0x905213E6L,(-2L),0x17EB8CDEL},{0x840A7607L,1L,0xDBCBFFCDL,0x74905C5BL,0x17EB8CDEL}}};
static int32_t g_2079 = 0x8E8772B7L;
static int32_t g_2080 = 1L;
static int32_t g_2081 = (-1L);
static int32_t g_2082 = 0xE4C9412AL;
static int32_t g_2083 = 0xC4CD83B5L;
static int32_t g_2084 = 0L;
static int32_t g_2085 = 0x3D361CBFL;
static int32_t g_2086 = 0x03FA7F4AL;
static int32_t g_2087 = (-1L);
static int32_t g_2088 = 1L;
static int32_t g_2089 = (-8L);
static int32_t g_2090 = 1L;
static int32_t g_2091 = (-1L);
static int32_t g_2092 = 1L;
static int32_t g_2093[2] = {0x257C8EFCL,0x257C8EFCL};
static int32_t g_2094 = 9L;
static int32_t g_2095 = (-1L);
static uint8_t *g_2108 = &g_927[2];
static uint8_t **g_2107 = &g_2108;
static int32_t ***g_2159 = (void*)0;
static int32_t ****g_2158 = &g_2159;
static const int16_t g_2170 = (-2L);
static int32_t *****g_2194 = &g_806;
static const uint16_t * const * const ** const *g_2273 = (void*)0;
static int32_t g_2279 = 0xCE3E1D1CL;
static union U0 g_2388 = {0x574C4D6AL};
static union U0 *g_2387 = &g_2388;
static union U0 **g_2386[7][2] = {{&g_2387,&g_2387},{&g_2387,&g_2387},{&g_2387,&g_2387},{&g_2387,&g_2387},{&g_2387,&g_2387},{&g_2387,&g_2387},{&g_2387,&g_2387}};
static uint8_t g_2395 = 1UL;
static int8_t g_2526[10][5] = {{1L,0x0FL,0x0FL,1L,0L},{1L,0x0FL,0x0FL,1L,0L},{1L,0x0FL,0x0FL,1L,0L},{1L,0x0FL,0x0FL,1L,0L},{1L,0x0FL,0x0FL,1L,0L},{1L,0x0FL,0x0FL,1L,0L},{1L,0x0FL,0x0FL,1L,0L},{1L,0x0FL,0x0FL,1L,0L},{1L,0x0FL,0x0FL,1L,0L},{1L,0x0FL,0x0FL,1L,0L}};
static int64_t **g_2556[3][5][10] = {{{&g_201[5],&g_201[8],(void*)0,&g_201[6],(void*)0,&g_201[8],&g_201[8],(void*)0,&g_201[1],&g_201[8]},{&g_201[0],&g_201[2],&g_201[3],&g_201[6],&g_201[8],&g_201[8],&g_201[8],&g_201[2],(void*)0,&g_201[5]},{&g_201[4],(void*)0,&g_201[0],&g_201[8],&g_201[3],&g_201[8],&g_201[8],(void*)0,&g_201[8],(void*)0},{&g_201[0],(void*)0,&g_201[8],&g_201[6],&g_201[8],&g_201[2],&g_201[8],&g_201[5],&g_201[2],(void*)0},{&g_201[8],&g_201[8],&g_201[1],&g_201[8],&g_201[8],&g_201[2],&g_201[8],(void*)0,&g_201[8],(void*)0}},{{&g_201[8],&g_201[8],(void*)0,&g_201[0],&g_201[5],&g_201[5],&g_201[0],(void*)0,&g_201[8],&g_201[8]},{&g_201[0],&g_201[8],&g_201[3],&g_201[1],&g_201[3],(void*)0,(void*)0,&g_201[8],&g_201[8],(void*)0},{(void*)0,&g_201[8],&g_201[8],&g_201[8],&g_201[3],(void*)0,&g_201[4],&g_201[8],&g_201[2],&g_201[8]},{&g_201[3],(void*)0,&g_201[2],&g_201[8],&g_201[5],&g_201[1],&g_201[8],&g_201[8],&g_201[8],&g_201[8]},{&g_201[8],&g_201[8],(void*)0,(void*)0,&g_201[5],&g_201[8],(void*)0,(void*)0,&g_201[3],&g_201[5]}},{{&g_201[8],&g_201[8],(void*)0,&g_201[8],&g_201[1],&g_201[4],&g_201[0],(void*)0,&g_201[1],(void*)0},{&g_201[8],&g_201[0],&g_201[5],&g_201[0],(void*)0,&g_201[8],(void*)0,&g_201[0],&g_201[5],&g_201[0]},{(void*)0,&g_201[8],(void*)0,&g_201[2],&g_201[8],&g_201[3],&g_201[5],(void*)0,&g_201[8],&g_201[4]},{&g_201[0],&g_201[2],&g_201[8],&g_201[8],&g_201[8],&g_201[3],&g_201[8],&g_201[8],&g_201[8],&g_201[1]},{(void*)0,&g_201[8],&g_201[8],&g_201[8],&g_201[8],&g_201[8],&g_201[8],&g_201[8],&g_201[5],&g_201[5]}}};
static int64_t ***g_2555 = &g_2556[0][1][2];
static const uint64_t *g_2582 = &g_188;
static const uint64_t * const *g_2581 = &g_2582;
static const uint64_t * const **g_2580 = &g_2581;
static uint32_t g_2806[3][6][9] = {{{0UL,4294967288UL,0UL,0UL,4294967288UL,0UL,0UL,4294967288UL,0UL},{0xC3C5C751L,0x5870EEA7L,0xC3C5C751L,0x2A8B266EL,0xD77FBD57L,0x2A8B266EL,0xC3C5C751L,0x5870EEA7L,0xC3C5C751L},{0UL,4294967288UL,0UL,0UL,4294967288UL,0UL,0UL,4294967288UL,0UL},{0xC3C5C751L,0x5870EEA7L,0xC3C5C751L,0x2A8B266EL,0xD77FBD57L,0x2A8B266EL,0xC3C5C751L,0x5870EEA7L,0xC3C5C751L},{0UL,4294967288UL,0UL,0UL,4294967288UL,0UL,0UL,4294967288UL,0UL},{0xC3C5C751L,0x5870EEA7L,0xC3C5C751L,0x2A8B266EL,0xD77FBD57L,0x2A8B266EL,0xC3C5C751L,0x5870EEA7L,0xC3C5C751L}},{{0UL,4294967288UL,0UL,0UL,4294967288UL,0UL,0UL,4294967288UL,0UL},{0xC3C5C751L,0x5870EEA7L,0xC3C5C751L,0x2A8B266EL,0xD77FBD57L,0x2A8B266EL,0xC3C5C751L,0x5870EEA7L,0xC3C5C751L},{0UL,4294967288UL,0UL,0UL,4294967288UL,0UL,0UL,4294967288UL,0UL},{0xC3C5C751L,0x5870EEA7L,0xC3C5C751L,0x2A8B266EL,0xD77FBD57L,0x2A8B266EL,0xC3C5C751L,0x5870EEA7L,0xC3C5C751L},{0UL,4294967288UL,0UL,0UL,4294967288UL,0UL,0UL,4294967288UL,0UL},{0xC3C5C751L,0x5870EEA7L,0xC3C5C751L,0x2A8B266EL,0xD77FBD57L,0x2A8B266EL,0xC3C5C751L,0x5870EEA7L,0xC3C5C751L}},{{0UL,4294967288UL,0UL,0UL,4294967288UL,0UL,0UL,4294967288UL,0UL},{0xC3C5C751L,0x5870EEA7L,0xC3C5C751L,0x2A8B266EL,0xD77FBD57L,0x2A8B266EL,0xC3C5C751L,0x5870EEA7L,0xC3C5C751L},{0UL,4294967288UL,6UL,6UL,0UL,6UL,6UL,0UL,6UL},{0xC1CE8F43L,0x2A8B266EL,0xC1CE8F43L,0UL,0xC3C5C751L,0UL,0xC1CE8F43L,0x2A8B266EL,0xC1CE8F43L},{6UL,0UL,6UL,6UL,0UL,6UL,6UL,0UL,6UL},{0xC1CE8F43L,0x2A8B266EL,0xC1CE8F43L,0UL,0xC3C5C751L,0UL,0xC1CE8F43L,0x2A8B266EL,0xC1CE8F43L}}};
static uint8_t g_2943 = 0xE2L;
static uint32_t g_3027 = 1UL;
static int32_t *g_3048[10] = {&g_2069[0][0],&g_2069[0][0],(void*)0,&g_2067[6],(void*)0,&g_2069[0][0],&g_2069[0][0],(void*)0,&g_2067[6],(void*)0};
static union U0 ***g_3053 = (void*)0;
static union U0 ****g_3052[3][5] = {{&g_3053,&g_3053,&g_3053,&g_3053,&g_3053},{&g_3053,&g_3053,&g_3053,&g_3053,&g_3053},{&g_3053,&g_3053,&g_3053,&g_3053,&g_3053}};
static int32_t *g_3081 = &g_2069[2][4];
static union U0 ***g_3164 = &g_510;
static int64_t ****g_3176 = (void*)0;
static int64_t *****g_3175 = &g_3176;
static int64_t *****g_3178 = (void*)0;



static int8_t func_1(void);
static int32_t * func_12(int8_t p_13, const int32_t * p_14);
static uint8_t func_30(int32_t * p_31, int32_t * p_32, int32_t * p_33, const int16_t p_34, const int32_t p_35);
static int32_t func_36(uint16_t p_37, uint16_t p_38);
static int32_t * func_46(uint64_t p_47, uint8_t p_48);
static uint8_t func_49(int32_t * p_50, int8_t p_51, int32_t * p_52, int32_t * p_53, union U0 p_54);
static int32_t * func_55(union U0 p_56, int32_t * p_57, const int32_t p_58, int32_t * p_59);
static int32_t * func_61(int32_t * p_62);
static uint64_t func_63(int32_t * p_64);
static const int8_t func_67(int32_t * p_68, uint32_t p_69, const uint32_t p_70, int8_t p_71, int32_t * p_72);
# 170 "<stdin>"
static int8_t func_1(void)
{
    uint32_t l_9 = 7UL;
    const int32_t *l_17 = &g_2[1][2][0];
    int32_t *l_3189 = &g_2066;
    int32_t **l_3190[6] = {&g_101[0],&g_101[0],(void*)0,&g_101[0],&g_101[0],(void*)0};
    int32_t *l_3191 = &g_2077[1][5];
    int i;
    for (g_2[1][2][0] = 0; (g_2[1][2][0] <= 0); ++g_2[1][2][0])
    {
        int32_t *l_5 = &g_6;
        int32_t *l_7 = (void*)0;
        int32_t *l_8[9] = {&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6};
        int i;
        l_9++;
    }
    l_3191 = (l_3189 = func_12((safe_mod_func_uint8_t_u_u(0x57L, g_6)), l_17));
    return g_818;
}







static int32_t * func_12(int8_t p_13, const int32_t * p_14)
{
    int32_t *l_18 = &g_6;
    int8_t l_19 = (-1L);
    int32_t *l_20 = &g_6;
    int32_t *l_21[3][5][4] = {{{&g_2[1][2][0],&g_2[1][2][0],&g_2[3][0][1],&g_2[1][2][0]},{&g_2[1][2][0],&g_2[3][3][7],&g_2[3][3][7],&g_2[1][2][0]},{&g_2[3][3][7],&g_2[1][2][0],&g_2[3][3][7],&g_2[3][3][7]},{&g_2[1][2][0],&g_2[1][2][0],&g_2[3][0][1],&g_2[1][2][0]},{&g_2[1][2][0],&g_2[3][3][7],&g_2[3][3][7],&g_2[1][2][0]}},{{&g_2[3][3][7],&g_2[1][2][0],&g_2[3][3][7],&g_2[3][3][7]},{&g_2[1][2][0],&g_2[1][2][0],&g_2[3][0][1],&g_2[1][2][0]},{&g_2[1][2][0],&g_2[3][3][7],&g_2[3][3][7],&g_2[1][2][0]},{&g_2[3][3][7],&g_2[1][2][0],&g_2[3][3][7],&g_2[3][3][7]},{&g_2[1][2][0],&g_2[1][2][0],&g_2[3][0][1],&g_2[1][2][0]}},{{&g_2[1][2][0],&g_2[3][3][7],&g_2[3][3][7],&g_2[1][2][0]},{&g_2[3][3][7],&g_2[1][2][0],&g_2[3][3][7],&g_2[3][3][7]},{&g_2[1][2][0],&g_2[1][2][0],&g_2[3][0][1],&g_2[1][2][0]},{&g_2[1][2][0],&g_2[3][3][7],&g_2[3][3][7],&g_2[1][2][0]},{&g_2[3][3][7],&g_2[1][2][0],&g_2[3][3][7],&g_2[3][3][7]}}};
    int16_t l_22 = (-4L);
    uint8_t l_23 = 1UL;
    int64_t l_2389[2][6][7] = {{{(-7L),0x11454E63AD9904AALL,8L,6L,8L,0x11454E63AD9904AALL,(-7L)},{0x2DAB2D383E86663ALL,6L,0x11454E63AD9904AALL,0x7D805DE688FF0B4FLL,8L,(-1L),1L},{4L,(-1L),(-8L),8L,(-9L),(-9L),8L},{0x11454E63AD9904AALL,0x3D98987753CBC617LL,0x11454E63AD9904AALL,4L,0xC1338C270E2A7017LL,4L,(-1L)},{0x11454E63AD9904AALL,0x7D805DE688FF0B4FLL,8L,(-1L),1L,0x3D98987753CBC617LL,4L},{4L,0x2DAB2D383E86663ALL,1L,1L,0x2DAB2D383E86663ALL,4L,0x99E8A1AAA12BE6C4LL}},{{0x2DAB2D383E86663ALL,8L,1L,1L,(-8L),(-9L),0xC1338C270E2A7017LL},{(-7L),4L,5L,(-1L),0x7D805DE688FF0B4FLL,(-1L),5L},{8L,(-7L),(-1L),0x2DAB2D383E86663ALL,0x11454E63AD9904AALL,0xC1338C270E2A7017LL,(-8L)},{(-9L),1L,0x2DAB2D383E86663ALL,(-7L),(-8L),0x3D98987753CBC617LL,0x3D98987753CBC617LL},{0x11454E63AD9904AALL,8L,6L,8L,0x11454E63AD9904AALL,(-7L),(-9L)},{4L,(-1L),6L,0x99E8A1AAA12BE6C4LL,8L,1L,0x7D805DE688FF0B4FLL}}};
    int64_t ****l_2429[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_2464 = &g_348;
    int64_t l_2477 = 8L;
    int64_t l_2503 = 0x4DB512F2BDF8E17ALL;
    int64_t l_2505 = 0xDEE4B08A41FB5AA4LL;
    uint32_t l_2518 = 1UL;
    int32_t l_2571 = 0xC644FDACL;
    union U0 *l_2575 = (void*)0;
    int32_t *** const *l_2682 = &g_2159;
    int16_t l_2837[6];
    union U0 ***l_2963 = &g_2386[6][0];
    uint32_t l_2996[4];
    uint16_t *l_3043[1];
    int8_t l_3065 = 4L;
    int32_t l_3161 = 0xBBE535B4L;
    int32_t *l_3188[2][7];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_2837[i] = 1L;
    for (i = 0; i < 4; i++)
        l_2996[i] = 18446744073709551608UL;
    for (i = 0; i < 1; i++)
        l_3043[i] = &g_959[5][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
            l_3188[i][j] = &g_2079;
    }
    l_23--;
    if ((safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((p_13 ^ func_30(l_21[2][2][1], l_18, l_20, (*l_18), (*l_18))), ((((void*)0 != g_2386[6][1]) ^ 0xA3L) > g_2170))), l_2389[1][5][3])))
    {
        int32_t *l_2390[3];
        int i;
        for (i = 0; i < 3; i++)
            l_2390[i] = &g_2083;
        (*g_100) = (l_2390[0] = l_18);
        for (g_2095 = 0; (g_2095 == (-30)); g_2095--)
        {
            int64_t l_2393 = (-10L);
            int32_t l_2394 = 1L;
            if (l_2393)
                break;
            g_2395--;
            return l_2390[2];
        }
        (*g_100) = (void*)0;
    }
    else
    {
        uint8_t l_2398[4][3][4] = {{{9UL,9UL,0x4BL,9UL},{9UL,0xF4L,0xF4L,9UL},{0xF4L,9UL,0xF4L,0xF4L}},{{9UL,9UL,0x4BL,9UL},{9UL,0xF4L,0xF4L,9UL},{0xF4L,9UL,0xF4L,0xF4L}},{{9UL,9UL,0x4BL,9UL},{9UL,0xF4L,0xF4L,9UL},{0xF4L,9UL,0xF4L,0xF4L}},{{9UL,9UL,0x4BL,9UL},{9UL,0xF4L,0xF4L,9UL},{0xF4L,9UL,0xF4L,0xF4L}}};
        uint16_t ***l_2416 = &g_1707;
        uint16_t ****l_2415 = &l_2416;
        uint16_t **** const *l_2414 = &l_2415;
        int16_t *l_2462 = &l_22;
        int32_t *l_2475 = &g_2067[6];
        uint16_t l_2478 = 1UL;
        int32_t l_2488 = (-1L);
        int32_t l_2499 = 0x73BEED81L;
        int32_t l_2500 = 0xAA2CB44AL;
        int32_t l_2501[7][8] = {{0x2420E3F7L,(-8L),(-8L),0x2420E3F7L,0xAD2B1335L,0x2420E3F7L,(-8L),(-8L)},{(-8L),0xAD2B1335L,0xBAFE0297L,0xBAFE0297L,0xAD2B1335L,(-8L),0xAD2B1335L,0xBAFE0297L},{0x2420E3F7L,0xAD2B1335L,0x2420E3F7L,(-8L),(-8L),0x2420E3F7L,0xAD2B1335L,0x2420E3F7L},{0L,(-8L),0xBAFE0297L,(-8L),0L,0L,(-8L),0xBAFE0297L},{0L,0L,(-8L),0xBAFE0297L,(-8L),0L,0L,(-8L)},{0x2420E3F7L,(-8L),(-8L),0x2420E3F7L,0xAD2B1335L,0x2420E3F7L,(-8L),(-8L)},{(-8L),0xAD2B1335L,0xBAFE0297L,0xBAFE0297L,0xAD2B1335L,(-8L),0xAD2B1335L,0xBAFE0297L}};
        union U0 l_2533 = {-6L};
        union U0 ***l_2545[7][1][6] = {{{&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_2386[6][1]}},{{&g_2386[6][1],&g_2386[1][1],&g_510,&g_2386[6][1],&g_2386[1][1],&g_2386[6][1]}},{{&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_510}},{{&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_2386[6][1]}},{{&g_2386[6][1],&g_2386[1][1],&g_510,&g_2386[6][1],&g_2386[1][1],&g_2386[6][1]}},{{&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_510}},{{&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_2386[6][1],&g_2386[6][1]}}};
        union U0 *** const *l_2544 = &l_2545[5][0][0];
        int16_t l_2597[1][1][8];
        int32_t *l_2599 = &g_2083;
        int16_t l_2602 = 1L;
        uint32_t l_2603 = 0xD9C27F82L;
        const uint16_t l_2693 = 0x78C2L;
        int8_t l_2709 = 0L;
        uint32_t ***l_2800 = &g_457;
        int64_t *l_2824 = (void*)0;
        uint32_t l_2852 = 7UL;
        int64_t ***** const l_2886 = &l_2429[2];
        int8_t l_2962 = 6L;
        int32_t ***l_3000 = (void*)0;
        uint8_t l_3186 = 0x2EL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 8; k++)
                    l_2597[i][j][k] = 0x0E3CL;
            }
        }
        if (l_2398[0][1][0])
        {
            const int32_t l_2419[3] = {0x50F49279L,0x50F49279L,0x50F49279L};
            uint16_t ** const **l_2421 = (void*)0;
            uint16_t ** const ***l_2420 = &l_2421;
            int32_t l_2424[2];
            int64_t *l_2442 = &g_1121[3];
            int32_t l_2487 = 1L;
            int8_t l_2504 = 1L;
            int32_t l_2534 = 0L;
            int64_t **l_2554[2][7][10] = {{{&g_201[8],&l_2442,&g_201[6],&l_2442,&g_201[8],&l_2442,&g_201[6],&l_2442,&g_201[8],&l_2442},{&l_2442,&l_2442,&l_2442,(void*)0,&l_2442,&l_2442,&l_2442,(void*)0,&l_2442,&l_2442},{&g_201[8],(void*)0,&g_201[6],(void*)0,&g_201[8],(void*)0,&g_201[6],(void*)0,&g_201[8],(void*)0},{&l_2442,(void*)0,&l_2442,&l_2442,&l_2442,(void*)0,&l_2442,&l_2442,&l_2442,(void*)0},{&g_201[8],&l_2442,&g_201[6],&l_2442,&g_201[8],&l_2442,&g_201[6],&l_2442,&g_201[8],&l_2442},{&l_2442,&l_2442,&l_2442,(void*)0,&l_2442,&l_2442,&l_2442,(void*)0,&l_2442,&l_2442},{&g_201[8],(void*)0,&g_201[6],(void*)0,&g_201[8],(void*)0,&g_201[6],(void*)0,&g_201[8],(void*)0}},{{&l_2442,(void*)0,&l_2442,&l_2442,&l_2442,(void*)0,&l_2442,&l_2442,&l_2442,(void*)0},{&g_201[8],&l_2442,&g_201[6],&l_2442,&g_201[8],&l_2442,&g_201[6],&l_2442,&g_201[8],&l_2442},{&l_2442,&l_2442,&l_2442,(void*)0,&l_2442,&l_2442,&l_2442,(void*)0,&l_2442,&l_2442},{&g_201[8],(void*)0,&g_201[6],(void*)0,&g_201[8],(void*)0,&g_201[6],(void*)0,&g_201[8],(void*)0},{&l_2442,(void*)0,&l_2442,&l_2442,&l_2442,(void*)0,&l_2442,&l_2442,&l_2442,(void*)0},{&g_201[8],&l_2442,&g_201[6],&l_2442,&g_201[8],&l_2442,&g_201[6],&l_2442,&g_201[8],&l_2442},{&l_2442,&l_2442,&l_2442,(void*)0,&l_2442,&l_2442,&l_2442,(void*)0,&l_2442,&l_2442}}};
            int64_t ***l_2553[6] = {&l_2554[0][6][2],&l_2554[0][6][2],&l_2554[0][6][2],&l_2554[0][6][2],&l_2554[0][6][2],&l_2554[0][6][2]};
            int64_t ***l_2558 = &l_2554[1][1][7];
            uint64_t ***l_2598 = &g_969[5];
            uint64_t l_2631 = 0xBA75F5F8E91A2BF8LL;
            union U0 l_2656 = {1L};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_2424[i] = (-1L);
lbl_2511:
            if ((*l_18))
            {
                int32_t l_2405 = (-5L);
                uint16_t *****l_2422 = &l_2415;
                int8_t l_2423 = 0L;
                int32_t l_2443 = (-1L);
                for (g_817 = 0; (g_817 <= (-8)); g_817 = safe_sub_func_uint8_t_u_u(g_817, 7))
                {
                    uint16_t *** const *l_2418 = &l_2416;
                    uint16_t *** const **l_2417 = &l_2418;
                    l_2424[1] |= ((((safe_div_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_s((*g_2108), 0)) | l_2405) | ((safe_rshift_func_int16_t_s_s((p_13 , p_13), 9)) && (p_13 , ((((*p_14) | ((((safe_div_func_int8_t_s_s(((((((((safe_mul_func_int16_t_s_s((0x741CDAEAL || l_2398[0][1][0]), ((**g_1707)--))) > ((l_2414 != l_2417) == p_13)) == p_13) >= 1L) < 1UL) == l_2419[1]) , l_2420) == l_2422), 6UL)) != l_2398[0][1][0]) >= (-1L)) == 0L)) >= 0x2BL) == p_13)))) != 1L), l_2423)) != (*p_14)) != p_13) , (*g_218));
                    for (g_2083 = 0; (g_2083 <= (-17)); g_2083 = safe_sub_func_int16_t_s_s(g_2083, 6))
                    {
                        return l_18;
                    }
                    for (g_897 = 18; (g_897 >= (-22)); g_897 = safe_sub_func_int32_t_s_s(g_897, 8))
                    {
                        int64_t *****l_2430 = (void*)0;
                        int64_t *****l_2431 = &l_2429[2];
                        (*l_2431) = l_2429[2];
                    }
                }
                for (g_662 = 0; (g_662 <= 0); g_662 += 1)
                {
                    union U0 l_2434 = {0xFECA6743L};
                    const int16_t *l_2439 = &g_106[3];
                    int i;
                    if (g_2067[(g_662 + 7)])
                        break;
                    (**g_89) = (safe_sub_func_int8_t_s_s((65526UL <= ((&g_760[2][0][5] != &g_760[2][0][5]) != l_2424[1])), ((*g_458) , g_2[1][2][0])));
                    for (g_188 = 0; (g_188 <= 0); g_188 += 1)
                    {
                        const int16_t **l_2440 = (void*)0;
                        const int16_t **l_2441 = &g_1177;
                        l_2443 &= ((l_2434 , ((l_2423 || ((safe_add_func_int64_t_s_s(((((*l_18) = (g_1121[3] = (safe_mul_func_uint8_t_u_u(((*g_2108) &= (((*l_2441) = l_2439) == ((p_13 , l_2434.f0) , &l_22))), (l_2442 == (g_201[8] = (void*)0)))))) , g_348) != p_13), p_13)) & 1UL)) | l_2405)) >= g_1860);
                        return l_18;
                    }
                }
            }
            else
            {
                int16_t *l_2446[8];
                uint64_t **l_2467 = &g_970;
                union U0 l_2468[9][6][4] = {{{{0x34CB2FC0L},{0x1E28AA9EL},{0xB2901364L},{-1L}},{{0x5795F7FDL},{0x34CB2FC0L},{-9L},{1L}},{{0x25BC62C2L},{0xFD023D6CL},{-1L},{0xFD023D6CL}},{{0xA36ACC48L},{0x393FF6A6L},{0x2EBA6A25L},{1L}},{{0x20AC4CADL},{0x81A39246L},{0x6E642825L},{0x7D020138L}},{{0x2C1D3B67L},{0x25BC62C2L},{0xE0A40FD2L},{-1L}}},{{{0x2C1D3B67L},{0xE75F6327L},{0x6E642825L},{1L}},{{0x20AC4CADL},{-1L},{0x2EBA6A25L},{0x5795F7FDL}},{{0xA36ACC48L},{0x149EF3D3L},{-1L},{0xE444B370L}},{{0x25BC62C2L},{0x6D48C3AEL},{-9L},{0L}},{{0x5795F7FDL},{-2L},{0xB2901364L},{0x7CD0BF88L}},{{0x34CB2FC0L},{0x6119E419L},{-10L},{0x9A00E7A8L}}},{{{0x7F2E4BE7L},{0xE4E6A841L},{5L},{0x48957202L}},{{0xE75F6327L},{0xB2901364L},{0x09DC8EBEL},{-10L}},{{0xB2901364L},{0L},{5L},{0xE75F6327L}},{{0x20AC4CADL},{0L},{0xDF0A7BC6L},{-7L}},{{0x09DC8EBEL},{0x1E28AA9EL},{-8L},{0xE27E76A6L}},{{0L},{-9L},{-1L},{0xECBE2619L}}},{{{0x7D22268EL},{9L},{0xAC019A06L},{0x7D020138L}},{{-4L},{0x6D48C3AEL},{0x61CDA13BL},{9L}},{{6L},{0L},{1L},{1L}},{{-3L},{0x0CEA4DF9L},{0xAC019A06L},{0x393FF6A6L}},{{0xE27E76A6L},{0xB38F8759L},{0x3635EDB8L},{-4L}},{{0L},{-3L},{9L},{0x7CD0BF88L}}},{{{0L},{0xDF0A7BC6L},{0xDF0A7BC6L},{0L}},{{-1L},{0xFB83B521L},{0xE27E76A6L},{-1L}},{{0xB2901364L},{0x2EBA6A25L},{0x47ED1BB1L},{0xB38F8759L}},{{0x6D48C3AEL},{0L},{-4L},{0xB38F8759L}},{{-1L},{0x2EBA6A25L},{1L},{-1L}},{{1L},{0xFB83B521L},{0x25BC62C2L},{0L}}},{{{0xECBE2619L},{0xDF0A7BC6L},{0x96AAEAA3L},{0x7CD0BF88L}},{{0xAC019A06L},{-3L},{0xDB8DD240L},{-4L}},{{0L},{0xB38F8759L},{-2L},{0x393FF6A6L}},{{0x7D020138L},{0x0CEA4DF9L},{0xE0A40FD2L},{1L}},{{0xFBB33ED7L},{0L},{0xC352A3D0L},{9L}},{{0x7CD0BF88L},{0x6D48C3AEL},{-1L},{0x7D020138L}}},{{{0x7D020138L},{9L},{0L},{0xECBE2619L}},{{1L},{-9L},{0xDB8DD240L},{0xE27E76A6L}},{{0L},{0x1E28AA9EL},{0xD6407CE1L},{-7L}},{{0xECBE2619L},{0L},{-1L},{0xE75F6327L}},{{0xDF0A7BC6L},{0L},{1L},{-10L}},{{0xED48E4B8L},{0xB2901364L},{0xDBE4E106L},{0x18A8F1D4L}}},{{{0x6D48C3AEL},{0xE149B324L},{0x09DC8EBEL},{0xFB83B521L}},{{0xE149B324L},{0L},{0xE27E76A6L},{0x0CEA4DF9L}},{{0x20AC4CADL},{0xECBE2619L},{0x2C1D3B67L},{-7L}},{{0L},{0xDB8DD240L},{-8L},{0x7D22268EL}},{{0x3635EDB8L},{-9L},{0x3635EDB8L},{0L}},{{0x7D22268EL},{0xE4E6A841L},{0xE444B370L},{0x7D020138L}}},{{{-3L},{-1L},{0x61CDA13BL},{0xE4E6A841L}},{{0xA6EC452CL},{0L},{0x61CDA13BL},{0xDF0A7BC6L}},{{-3L},{0xE75F6327L},{0xE444B370L},{0x393FF6A6L}},{{0x7D22268EL},{0xC352A3D0L},{0x3635EDB8L},{-3L}},{{0x3635EDB8L},{-3L},{-8L},{0xFBB33ED7L}},{{0L},{1L},{0x2C1D3B67L},{0L}}}};
                uint64_t l_2473 = 4UL;
                int32_t l_2493 = 0xBC7D5C75L;
                int32_t l_2495 = 4L;
                int32_t l_2496 = 0xA9D2048FL;
                int32_t l_2498[4][7][9] = {{{(-1L),0xA958541DL,8L,(-5L),0x1F103B8CL,0x12AF678EL,0x1C9CF4CBL,(-9L),8L},{(-1L),(-3L),8L,0x3F1C7C27L,(-6L),(-3L),0xA533A6A4L,8L,5L},{7L,0xA958541DL,0x1734C236L,0x7C336C0EL,0x02EAB4E0L,0x1C57563AL,1L,0x1C57563AL,0x02EAB4E0L},{0xFF7F3B6EL,0x80B86B93L,0x80B86B93L,5L,0xA89167F1L,(-2L),0x93D5A496L,0x8880EE76L,0xD96A39DDL},{0x0BA4EC74L,0L,0xC228B3F6L,0x1C57563AL,(-1L),(-1L),0L,0xE1720660L,(-10L)},{1L,0xA89167F1L,0xD0642E42L,0x124C91FDL,0xA89167F1L,0x8880EE76L,0x353EE151L,0xD0642E42L,0xCC92EB9CL},{0x02EAB4E0L,(-1L),0xA4D82714L,0xA958541DL,0xA4D82714L,(-1L),0x02EAB4E0L,0L,0x34851EF8L}},{{5L,0x0D5989F5L,(-2L),1L,0x8880EE76L,(-2L),0x353EE151L,0xD96A39DDL,0x8880EE76L},{8L,0L,(-10L),(-9L),(-1L),0x2E680BF6L,0L,0L,0xE8F7DCB8L},{(-6L),0x8880EE76L,0xD0642E42L,0x93D5A496L,(-1L),(-1L),0x93D5A496L,0xD0642E42L,0x8880EE76L},{0x1734C236L,0x5556C42DL,0x34851EF8L,0xA958541DL,(-1L),0L,0xDF7583B0L,0xE1720660L,0x34851EF8L},{(-6L),0x1323BCEEL,0x80B86B93L,0x5D62C669L,0x8880EE76L,0x1323BCEEL,8L,0x8880EE76L,0xCC92EB9CL},{8L,0x5556C42DL,0xE8F7DCB8L,0x1C57563AL,(-10L),0x2E680BF6L,0xAB521217L,0x2E680BF6L,(-10L)},{5L,0x8880EE76L,0x80B86B93L,0x27ADF952L,0xA89167F1L,0xD96A39DDL,0x93D5A496L,0x80B86B93L,0xD96A39DDL}},{{0x02EAB4E0L,0L,0x34851EF8L,0x1C57563AL,0L,(-1L),0x1734C236L,0xE1720660L,0xA4D82714L},{1L,0x0D5989F5L,0xD0642E42L,0x5D62C669L,0xA89167F1L,0x80B86B93L,0x353EE151L,0xCC92EB9CL,0xCC92EB9CL},{0x0BA4EC74L,(-1L),(-10L),0xA958541DL,(-10L),(-1L),0x0BA4EC74L,0L,0xC228B3F6L},{5L,0xA89167F1L,(-2L),0x93D5A496L,0x8880EE76L,0xD96A39DDL,0x353EE151L,(-2L),0x8880EE76L},{(-1L),0L,0xA4D82714L,(-9L),(-1L),0x2E680BF6L,0x1734C236L,0L,(-8L)},{(-6L),0x80B86B93L,0xD0642E42L,1L,(-1L),0x1323BCEEL,0x93D5A496L,0xCC92EB9CL,0x8880EE76L},{0L,0x5556C42DL,0xC228B3F6L,0xA958541DL,(-1L),0L,0xAB521217L,0xE1720660L,0xC228B3F6L}},{{(-6L),(-1L),0x80B86B93L,0x124C91FDL,0x8880EE76L,(-1L),8L,0x80B86B93L,0xCC92EB9CL},{(-1L),0x5556C42DL,(-8L),0x1C57563AL,0xA4D82714L,0x2E680BF6L,0xDF7583B0L,0x2E680BF6L,0xA4D82714L},{5L,0x80B86B93L,0x80B86B93L,5L,0xA89167F1L,(-2L),0x93D5A496L,0x8880EE76L,0xD96A39DDL},{0x0BA4EC74L,0L,0xC228B3F6L,0x2E680BF6L,8L,2L,0xE8F7DCB8L,(-1L),0L},{0xD96A39DDL,1L,0xA533A6A4L,0x0D5989F5L,1L,0x1665E0BEL,0x1323BCEEL,0xA533A6A4L,(-1L)},{0xA4D82714L,2L,0x2457B24AL,0x5556C42DL,0x2457B24AL,2L,0xA4D82714L,(-5L),0xD6025C08L},{0xCC92EB9CL,0x49AFED36L,0xD16CAFFDL,0xD96A39DDL,0x1665E0BEL,0xD16CAFFDL,0x1323BCEEL,2L,0x1665E0BEL}}};
                uint8_t l_2506 = 1UL;
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_2446[i] = &g_1304;
                (*g_90) = ((void*)0 == &g_2387);
                (*l_18) = (-4L);
                if (((g_897 = (safe_sub_func_int64_t_s_s(((*l_2442) &= p_13), l_2424[1]))) < (safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((p_13 > (!(safe_rshift_func_int8_t_s_u(l_2398[0][1][0], 4)))), ((safe_add_func_uint16_t_u_u(3UL, ((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((0L | ((void*)0 != l_2462)) | 0xB6L), p_13)), p_13)) && 0x2743L))) ^ (*g_970)))), 0x8340L)), l_2424[1]))))
                {
                    union U0 l_2463[10][4][6] = {{{{-5L},{1L},{1L},{-5L},{-6L},{0xC1EDEDEBL}},{{0x2974175CL},{0x49857D90L},{-1L},{1L},{0xF00DC925L},{0xB5294AB9L}},{{-1L},{0xA6EC6CEEL},{-1L},{0x5336B333L},{0xF00DC925L},{0x5336B333L}},{{1L},{0x49857D90L},{1L},{3L},{-6L},{0xA6EC6CEEL}}},{{{0xC1EDEDEBL},{1L},{0x8D778003L},{0xB5294AB9L},{0x2974175CL},{-6L}},{{1L},{0x5336B333L},{3L},{0xB5294AB9L},{0xB5294AB9L},{3L}},{{0xC1EDEDEBL},{0xC1EDEDEBL},{0x49857D90L},{3L},{0x8D778003L},{1L}},{{1L},{0xF00DC925L},{0xC1EDEDEBL},{0x5336B333L},{1L},{0x49857D90L}}},{{{-1L},{1L},{0xC1EDEDEBL},{1L},{0xC1EDEDEBL},{1L}},{{0x2974175CL},{1L},{0x49857D90L},{-5L},{0L},{3L}},{{-5L},{0L},{3L},{0xC1EDEDEBL},{-1L},{-6L}},{{0xA6EC6CEEL},{0L},{0x8D778003L},{0x8D778003L},{0L},{0xA6EC6CEEL}}},{{{0L},{1L},{1L},{0xF00DC925L},{0xC1EDEDEBL},{0x5336B333L}},{{0x8D778003L},{1L},{-1L},{-1L},{1L},{0xB5294AB9L}},{{0x8D778003L},{0xF00DC925L},{-1L},{0xF00DC925L},{0x8D778003L},{0xC1EDEDEBL}},{{0L},{0xC1EDEDEBL},{1L},{0x8D778003L},{0xB5294AB9L},{0x2974175CL}}},{{{0xA6EC6CEEL},{0x5336B333L},{0xB5294AB9L},{0xC1EDEDEBL},{0x2974175CL},{0x2974175CL}},{{-5L},{1L},{1L},{-5L},{-6L},{0xC1EDEDEBL}},{{0x2974175CL},{0x49857D90L},{-1L},{1L},{0xF00DC925L},{0xB5294AB9L}},{{-1L},{0xA6EC6CEEL},{-1L},{0x5336B333L},{0xF00DC925L},{0x5336B333L}}},{{{1L},{0x49857D90L},{1L},{3L},{-6L},{0xA6EC6CEEL}},{{0xC1EDEDEBL},{1L},{0x8D778003L},{0xB5294AB9L},{0x2974175CL},{-6L}},{{1L},{0x5336B333L},{3L},{0xB5294AB9L},{0xB5294AB9L},{3L}},{{0xC1EDEDEBL},{0xC1EDEDEBL},{0x49857D90L},{3L},{0x8D778003L},{1L}}},{{{1L},{0xF00DC925L},{0xC1EDEDEBL},{0x5336B333L},{1L},{0x49857D90L}},{{-1L},{1L},{0xC1EDEDEBL},{1L},{0xC1EDEDEBL},{1L}},{{0x2974175CL},{-5L},{0x5336B333L},{0x2974175CL},{1L},{0L}},{{0x2974175CL},{1L},{0L},{-1L},{0xB5294AB9L},{0x49857D90L}}},{{{0xF00DC925L},{1L},{1L},{1L},{1L},{0xF00DC925L}},{{1L},{-5L},{-6L},{0xC1EDEDEBL},{-1L},{0xA6EC6CEEL}},{{1L},{-6L},{0xB5294AB9L},{1L},{-1L},{0x8D778003L}},{{1L},{0xC1EDEDEBL},{1L},{0xC1EDEDEBL},{1L},{-1L}}},{{{1L},{-1L},{-1L},{1L},{0x8D778003L},{3L}},{{0xF00DC925L},{0xA6EC6CEEL},{0x8D778003L},{-1L},{3L},{3L}},{{0x2974175CL},{-1L},{-1L},{0x2974175CL},{0x49857D90L},{-1L}},{{3L},{0x5336B333L},{1L},{-5L},{0xC1EDEDEBL},{0x8D778003L}}},{{{1L},{0xF00DC925L},{0xB5294AB9L},{0xA6EC6CEEL},{0xC1EDEDEBL},{0xA6EC6CEEL}},{{-6L},{0x5336B333L},{-6L},{0L},{0x49857D90L},{0xF00DC925L}},{{-1L},{-1L},{1L},{0x8D778003L},{3L},{0x49857D90L}},{{-5L},{0xA6EC6CEEL},{0L},{0x8D778003L},{0x8D778003L},{0L}}}};
                    int32_t *l_2474 = &g_82;
                    int i, j, k;
                    p_14 = l_2475;
                    if (g_447)
                        goto lbl_2476;
                    return l_2475;
                }
                else
                {
lbl_2476:
                    l_2424[0] = (*g_218);
                    (*l_2475) &= 0x744D194BL;
                }
                if ((*l_20))
                {
                    int32_t *l_2481 = &g_2094;
                    --l_2478;
                    return l_2481;
                }
                else
                {
                    uint8_t l_2484 = 0x29L;
                    int32_t l_2492 = (-4L);
                    int32_t l_2494 = (-5L);
                    int32_t l_2497 = 6L;
                    int32_t l_2502[7] = {0L,(-1L),(-1L),0L,(-1L),(-1L),0L};
                    int i;
                    for (g_2081 = (-12); (g_2081 == 7); g_2081++)
                    {
                        uint8_t l_2489 = 255UL;
                        l_2484++;
                        ++l_2489;
                        l_2424[1] = (-3L);
                    }
                    l_2506--;
                }
            }
lbl_2600:
            for (g_161 = 27; (g_161 < 16); g_161--)
            {
                if (g_1178)
                    goto lbl_2511;
                (*g_218) = (safe_mul_func_int8_t_s_s(((--(**g_457)) <= 0xE0CA48ADL), ((**g_2107) = 252UL)));
                for (g_2388.f1 = 0; g_2388.f1 < 4; g_2388.f1 += 1)
                {
                    for (l_2500 = 0; l_2500 < 10; l_2500 += 1)
                    {
                        g_2077[g_2388.f1][l_2500] = 0x56E42DADL;
                    }
                }
                (**g_89) = (*p_14);
            }
            if (((0x4DDF6A90L != (safe_div_func_int16_t_s_s(l_2518, (safe_rshift_func_uint8_t_u_s(((p_13 < (safe_rshift_func_uint8_t_u_s((((+((g_2526[8][4] = (*p_14)) == 0UL)) | (0x66A0L > ((((**g_457) = ((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(p_13, ((l_2533 , (((*l_2462) = (((l_2534 & (*g_458)) , 65526UL) <= p_13)) != 0xB13EL)) | p_13))), 1L)) >= (*l_2475))) != 0x414D2B7CL) >= 7UL))) <= 0xE73A4FAA4DC28CC5LL), 1))) ^ 0x798A5078L), 4))))) < 0xB882L))
            {
                int64_t l_2539[7][4] = {{0x5C23AB0860920112LL,0x40B0963F13D792CELL,0x1886F5698E3EB7B2LL,0x6F349288DCEFEB4FLL},{1L,3L,1L,1L},{0x1886F5698E3EB7B2LL,0x5C23AB0860920112LL,1L,1L},{0x1886F5698E3EB7B2LL,0x1886F5698E3EB7B2LL,1L,0x44C2159E1C9F8534LL},{1L,1L,0x1886F5698E3EB7B2LL,3L},{0x5C23AB0860920112LL,5L,0xDB600DA550092BA3LL,0x1886F5698E3EB7B2LL},{0x6F349288DCEFEB4FLL,5L,0x6F349288DCEFEB4FLL,3L}};
                int8_t *l_2546[10];
                int32_t l_2547 = 0xB218ACDDL;
                uint8_t l_2548 = 0x0EL;
                uint32_t * const l_2586 = &g_122;
                int32_t l_2601[1][7][3] = {{{(-5L),0L,(-5L)},{0L,(-5L),(-5L)},{7L,7L,(-5L)},{(-5L),0L,(-5L)},{0L,(-5L),(-5L)},{7L,7L,(-5L)},{(-5L),0L,(-5L)}}};
                int32_t *l_2657 = &g_1117[6];
                int32_t **l_2669 = (void*)0;
                int64_t ***l_2670[6] = {&g_2556[1][2][2],&g_2556[1][2][2],&g_2556[1][2][2],&g_2556[1][2][2],&g_2556[1][2][2],&g_2556[1][2][2]};
                const int64_t l_2686 = 0xC89455512B6A4CC6LL;
                union U0 *l_2694 = &l_2656;
                int i, j, k;
                for (i = 0; i < 10; i++)
                    l_2546[i] = &g_506;
                if ((((((g_506 ^= (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(1UL, 1)) && (l_2547 = ((l_2539[1][3] , (&g_969[5] == &g_969[0])) || (((safe_rshift_func_int16_t_s_u((*g_1177), 4)) || (0x53L == ((safe_add_func_int16_t_s_s((1UL == (((void*)0 == l_2544) | 1UL)), p_13)) == l_2539[2][3]))) || (*l_2475))))), (-8L)))) != 0xCCL) != 0x9BL) & l_2548) ^ l_2539[1][3]))
                {
                    int64_t ***l_2557 = &g_2556[0][2][6];
                    int32_t l_2559 = 9L;
                    uint8_t *l_2573 = &l_2398[0][2][3];
                    union U0 *l_2574 = &l_2533;
                    uint32_t *l_2587 = &g_357;
                    if ((safe_mod_func_int8_t_s_s(((((*l_2442) = ((((*l_2475) = (safe_sub_func_uint16_t_u_u(((g_2555 = l_2553[3]) != (l_2558 = l_2557)), 0xE440L))) | ((l_2504 , l_2559) > (0L == ((safe_unary_minus_func_uint64_t_u(18446744073709551610UL)) >= l_2419[1])))) >= (p_13 , p_13))) < l_2559) <= l_2548), (*g_2108))))
                    {
                        const int32_t *l_2562[8] = {&g_2080,&g_2080,&g_2080,&g_2080,&g_2080,&g_2080,&g_2080,&g_2080};
                        const int32_t **l_2561[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        (*l_2475) ^= 0x5E41835AL;
                        p_14 = p_14;
                    }
                    else
                    {
                        return l_21[2][2][1];
                    }
                    if (l_2478)
                        goto lbl_2572;
lbl_2572:
                    (*g_218) = (safe_lshift_func_uint8_t_u_s((p_13 , (((++(**g_1707)) == ((safe_div_func_uint16_t_u_u(((*l_2475) = (safe_sub_func_int64_t_s_s(l_2571, (-1L)))), 0x4EF8L)) , p_13)) ^ (**g_2107))), 6));
                    if (((((*g_2107) == (l_2573 = (void*)0)) >= p_13) > l_2559))
                    {
                        const uint64_t * const ***l_2583 = &g_2580;
                        int32_t l_2595 = 1L;
                        int32_t l_2596[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_2596[i] = 0x7286BC42L;
                        l_2575 = l_2574;
                        l_2596[0] = (safe_mod_func_int64_t_s_s(p_13, (safe_sub_func_int16_t_s_s(((*l_2475) & (l_2534 |= (((*l_2583) = g_2580) != ((((((**g_457) || (safe_mul_func_int8_t_s_s((g_2526[4][4] ^= (((*l_2462) = ((l_2586 != l_2587) != (g_2065[1][2] <= (((safe_unary_minus_func_uint64_t_u(p_13)) , (safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((l_2595 &= (p_13 && p_13)), 2)) ^ 0x3F3C37F6B4112D74LL), l_2596[3])) ^ p_13), 0UL))) != l_2424[1])))) | p_13)), l_2597[0][0][5]))) | p_13) | p_13) >= 0x4AFA1390D71631C9LL) , l_2598)))), 1L))));
                        return &g_2067[5];
                    }
                    else
                    {
                        return l_2599;
                    }
                }
                else
                {
                    uint64_t *l_2612 = &g_188;
                    int32_t l_2615 = (-1L);
                    union U0 l_2632[8][1] = {{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}};
                    union U0 ***l_2633 = &g_2386[5][0];
                    int32_t l_2634 = 0x1B9CCED6L;
                    int16_t *l_2635 = &g_106[2];
                    int i, j;
                    if (g_908.f1)
                        goto lbl_2600;
                    --l_2603;
                    if (((safe_add_func_int32_t_s_s((((*l_2462) = (((((++(*****l_2414)) > (0x1D877348L != p_13)) && (((***l_2598)--) & (++(*l_2612)))) >= (l_2547 = 0x7F8942DDL)) , (0xE4F491E0087D488FLL || (l_2615 = 18446744073709551610UL)))) == ((*l_2635) = (+(l_2424[1] = (safe_mul_func_uint16_t_u_u(((p_13 & (safe_lshift_func_uint16_t_u_u(p_13, (safe_rshift_func_int16_t_s_u(((l_2634 = (safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((++(*l_2586)) , (((0x2DCFL >= (((safe_lshift_func_int8_t_s_s((0xC92CL || l_2631), g_2077[2][0])) != (*g_218)) | l_2534)) , l_2632[6][0]) , l_2633)) != &g_2386[3][1]), 0UL)), l_2424[0]))) , (*l_2599)), 5))))) & (*l_2599)), l_2601[0][6][2])))))), p_13)) && 0xC972L))
                    {
                        uint8_t l_2641[9][3] = {{0xE7L,0xE7L,0UL},{0x2BL,0xFCL,0xFCL},{0UL,0x50L,0x9BL},{0x2BL,255UL,0x2BL},{0xE7L,0UL,0x9BL},{0x9DL,0x9DL,0xFCL},{0UL,0UL,0UL},{0x2BL,0x9DL,255UL},{0x9BL,0xE7L,0x9BL}};
                        uint64_t **l_2652 = &l_2612;
                        int32_t l_2655 = (-1L);
                        const int32_t *l_2672 = (void*)0;
                        const int32_t **l_2671 = &l_2672;
                        int i, j;
                        l_2655 &= (((safe_sub_func_int32_t_s_s(0xD67E793FL, 0UL)) != (p_13 < (+((**g_89) , ((l_2641[1][2] >= (((((*l_2475) = (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((l_2652 != (void*)0), l_2641[4][1])) | (safe_mul_func_int8_t_s_s((*l_2599), 0x07L))), p_13)) , (*l_2475)), l_2424[1])), (*l_18))), 6UL))) ^ p_13) >= l_2615) || 0x14L)) ^ l_2634))))) != p_13);
                        (*l_2671) = p_14;
                    }
                    else
                    {
                        int8_t l_2673[9][10] = {{9L,0x37L,0x5FL,0x4DL,0x37L,5L,0L,0x25L,0xA7L,(-6L)},{0xD8L,0x4DL,0xA7L,1L,1L,0x5FL,0xD8L,0L,5L,5L},{(-1L),0xA7L,0x17L,1L,1L,0x17L,0xA7L,(-1L),1L,0L},{9L,5L,0xD8L,5L,(-6L),0x37L,(-1L),5L,5L,1L},{0xA7L,0x4DL,0xD8L,(-6L),0xA7L,5L,(-6L),(-1L),0x5FL,0xA7L},{0x4DL,5L,0x17L,0L,(-6L),0L,(-6L),0L,0x17L,5L},{1L,0xD8L,0xA7L,5L,0x25L,1L,9L,0x25L,0x37L,1L},{0x25L,(-6L),0x5FL,(-4L),0xA7L,1L,5L,9L,5L,(-4L)},{1L,0x5AL,1L,9L,0L,0L,9L,9L,0L,0L}};
                        uint32_t l_2674 = 0UL;
                        int i, j;
                        l_2674++;
                    }
                    (*g_218) ^= (*l_2475);
                }
                for (g_2073 = 0; (g_2073 >= 0); g_2073 -= 1)
                {
                    uint8_t ***l_2677 = &g_2107;
                    int8_t *l_2683[3][5][2] = {{{&g_442,(void*)0},{(void*)0,(void*)0},{&g_442,&g_76.f1},{&l_2656.f1,&l_2504},{&g_2526[5][0],&g_442}},{{&g_76.f1,&g_2526[5][0]},{(void*)0,&g_2388.f1},{(void*)0,&g_2526[5][0]},{&g_76.f1,&g_442},{&g_2526[5][0],&l_2504}},{{&l_2656.f1,&g_76.f1},{&g_442,(void*)0},{(void*)0,(void*)0},{&g_442,&g_76.f1},{&l_2656.f1,&l_2504}}};
                    uint64_t **l_2684 = &g_970;
                    uint64_t ***l_2685 = &l_2684;
                    int32_t *l_2690 = (void*)0;
                    int i, j, k;
                    (*l_2475) = ((((&g_2107 != ((*l_2599) , l_2677)) == (((*l_2475) , (*l_2598)) == ((*l_2685) = (((safe_mul_func_uint8_t_u_u(0xEDL, (safe_add_func_int16_t_s_s((((l_2682 == ((l_2683[1][3][1] == l_2683[1][3][1]) , &g_2159)) < 0x15D2L) , 0L), p_13)))) || p_13) , l_2684)))) , (*l_2475)) < p_13);
                    if (l_2686)
                        continue;
                    for (g_2075 = (-17); (g_2075 <= 2); g_2075 = safe_add_func_uint16_t_u_u(g_2075, 1))
                    {
                        int32_t *l_2689 = &l_2601[0][0][1];
                        (*g_100) = &l_2601[0][6][2];
                        return l_2690;
                    }
                    if ((*g_218))
                        continue;
                }
                for (g_442 = 25; (g_442 >= (-23)); g_442--)
                {
                    (*l_18) |= (((l_2693 , ((l_2694 == (void*)0) && ((*g_2158) != (*g_2158)))) , l_2631) | 0xD509FAEBL);
                }
                for (g_6 = (-19); (g_6 <= 20); g_6 = safe_add_func_int32_t_s_s(g_6, 7))
                {
                    int32_t **l_2705[3][4][5] = {{{&g_350,(void*)0,&g_350,(void*)0,&g_350},{&l_2657,(void*)0,(void*)0,&l_2657,&l_2657},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2657,&l_2657,(void*)0,(void*)0,&l_2657}},{{&g_350,(void*)0,&g_350,(void*)0,&g_350},{&l_2657,(void*)0,(void*)0,&l_2657,&l_2657},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2657,&l_2657,(void*)0,(void*)0,&l_2657}},{{&g_350,(void*)0,&g_350,(void*)0,&g_350},{&l_2657,(void*)0,(void*)0,&l_2657,&l_2657},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2657,&l_2657,(void*)0,(void*)0,&l_2657}}};
                    int32_t l_2708 = (-1L);
                    int i, j, k;
                    (*g_100) = ((p_13 ^ (safe_lshift_func_int8_t_s_s((g_908.f1 = (safe_sub_func_uint8_t_u_u(((*g_2108) = (p_13 , (*l_2475))), (((safe_mul_func_int16_t_s_s(((l_2708 = (safe_mod_func_uint8_t_u_u(((((((*l_2599) = p_13) | 0x48BCF51CL) , l_2705[0][0][0]) != (void*)0) | (((safe_div_func_int64_t_s_s((0xA882L == p_13), l_2419[1])) ^ l_2534) , 0x6A576991DBFDB997LL)), (*l_2475)))) | 0xDAB9A75A4CF2B00FLL), (*l_20))) , g_506) , g_2076)))), (*l_2475)))) , (void*)0);
                }
            }
            else
            {
                int32_t **l_2728 = &l_21[2][2][1];
                (*l_18) |= l_2709;
                for (p_13 = 3; (p_13 != 15); p_13 = safe_add_func_int64_t_s_s(p_13, 2))
                {
                    int32_t l_2735[1];
                    int32_t l_2747 = 3L;
                    uint16_t *l_2748 = &g_959[4][0];
                    const uint32_t l_2749 = 0x41B75AB0L;
                    union U0 l_2763 = {-1L};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2735[i] = 0x31967AECL;
                    (*l_2475) = (safe_sub_func_int16_t_s_s(((~(safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((~(safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((g_100 = l_2728) == l_2728), (safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((safe_div_func_uint64_t_u_u((**l_2728), (0x886CC487C337AA3CLL || (l_2735[0] > (+((((((*l_2748) ^= (l_2735[0] , (l_2747 = ((***l_2416) = (safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0x06D9F800L, (*p_14))), ((((safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((((((safe_lshift_func_int8_t_s_s((**l_2728), p_13)) && p_13) < (*l_2599)) ^ l_2735[0]) | p_13), p_13)), (*g_970))) | 247UL) , 1UL) && (*p_14)))))))) | p_13) != 0xF0L) < 4294967295UL) || p_13)))))) , 0x5F202A776FCC8321LL), 0x2A5704FA6685AF39LL)), p_13)))), 3)), l_2735[0]))), l_2656.f0)) | 0x98L) <= (*l_2599)), p_13)), l_2749))) && (*l_2599)), (*g_1177)));
                    for (g_2080 = 0; (g_2080 > (-27)); --g_2080)
                    {
                        uint8_t *l_2761 = &l_2398[0][1][0];
                        int8_t *l_2762 = &g_2388.f1;
                        (*l_2599) ^= ((l_2656.f0 , ((**l_2728) && ((+(safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u(((((safe_mul_func_uint16_t_u_u(0x4AF2L, ((*l_2462) = (safe_mul_func_int16_t_s_s((((((*l_2762) = (0L && ((*l_2761) |= (**g_2107)))) == 0x53L) , l_2763) , (g_897 = p_13)), (**g_1707)))))) , 0x40L) < 1UL) | 0x23CEBA0DE83F1FBCLL), p_13)) & 8L), 6))) == 0xECF752F8L))) && 65526UL);
                        (*l_2599) |= (*p_14);
                    }
                }
            }
        }
        else
        {
            uint8_t ***l_2769 = (void*)0;
            int32_t l_2775 = 0x1A27CB47L;
            int32_t l_2781 = 0x3A5EE8B6L;
            uint32_t ***l_2801[6][2][10] = {{{&g_461[8][0][0],&g_461[8][0][0],&g_457,&g_457,&g_457,&g_461[3][1][0],&g_457,&g_461[3][1][0],&g_461[2][0][0],&g_461[8][0][0]},{&g_461[2][0][0],&g_461[8][0][0],&g_461[2][0][0],&g_461[3][1][0],&g_457,&g_461[3][1][0],&g_461[2][0][0],&g_461[8][0][0],&g_461[2][0][0],&g_461[3][1][0]}},{{&g_457,&g_461[8][0][0],&g_461[8][0][0],&g_461[8][0][0],&g_457,&g_457,&g_457,&g_461[8][0][0],&g_461[8][0][0],&g_461[8][0][0]},{&g_457,&g_461[3][1][0],&g_461[2][0][0],&g_461[8][0][0],&g_461[2][0][0],&g_461[3][1][0],&g_457,&g_461[3][1][0],&g_461[2][0][0],&g_461[8][0][0]}},{{&g_461[2][0][0],&g_461[8][0][0],&g_461[2][0][0],&g_461[3][1][0],&g_457,&g_461[3][1][0],&g_461[2][0][0],&g_461[8][0][0],&g_461[2][0][0],&g_461[3][1][0]},{&g_457,&g_461[8][0][0],&g_461[8][0][0],&g_461[8][0][0],&g_457,&g_457,&g_457,&g_461[8][0][0],&g_461[8][0][0],&g_461[8][0][0]}},{{&g_457,&g_461[3][1][0],&g_461[2][0][0],&g_461[8][0][0],&g_461[2][0][0],&g_461[3][1][0],&g_457,&g_461[3][1][0],&g_461[2][0][0],&g_461[8][0][0]},{&g_461[2][0][0],&g_461[8][0][0],&g_461[2][0][0],&g_461[3][1][0],&g_457,&g_461[3][1][0],&g_461[2][0][0],&g_461[8][0][0],&g_461[2][0][0],&g_461[3][1][0]}},{{&g_457,&g_461[8][0][0],&g_461[8][0][0],&g_461[8][0][0],&g_457,&g_457,&g_457,&g_461[8][0][0],&g_461[8][0][0],&g_461[8][0][0]},{&g_457,&g_461[3][1][0],&g_461[2][0][0],&g_461[8][0][0],&g_461[2][0][0],&g_461[3][1][0],&g_457,&g_461[3][1][0],&g_461[2][0][0],&g_461[8][0][0]}},{{&g_461[2][0][0],&g_461[8][0][0],&g_461[2][0][0],&g_461[3][1][0],&g_457,&g_461[3][1][0],&g_461[2][0][0],&g_461[8][0][0],&g_461[2][0][0],&g_461[3][1][0]},{&g_457,&g_461[8][0][0],&g_461[8][0][0],&g_461[8][0][0],&g_457,&g_457,&g_457,&g_461[8][0][0],&g_461[8][0][0],&g_461[8][0][0]}}};
            uint16_t ****l_2808[5][7][1] = {{{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416}},{{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416}},{{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416}},{{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416}},{{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416},{&l_2416}}};
            int32_t l_2813 = (-1L);
            int32_t l_2815[10][4][6] = {{{0xFFF547DCL,0x526E0E5AL,0L,0xB74F6348L,1L,0xA33EBFF0L},{0xD69FDDECL,0xD755D7A3L,0xB74F6348L,1L,0xDFA15A2CL,1L},{0xD3C70C3FL,(-8L),0xD3C70C3FL,2L,0xB74F6348L,1L},{0x52280851L,0x2C898304L,0x526E0E5AL,(-4L),0xD755D7A3L,0x186028B1L}},{{(-1L),0x572586CDL,0x61392C0FL,(-4L),0x7A29246DL,2L},{0x52280851L,(-1L),0L,2L,0x186028B1L,0x52280851L},{0xD3C70C3FL,0x517F05DFL,0xD755D7A3L,1L,(-8L),9L},{8L,0x186028B1L,0x61392C0FL,0xD69FDDECL,0xD69FDDECL,0x61392C0FL}},{{(-10L),(-10L),0xD69FDDECL,0x0892A1AFL,0x49CCB45FL,2L},{1L,(-3L),0x7A29246DL,1L,0xFFF547DCL,0xD69FDDECL},{0x526E0E5AL,1L,0x7A29246DL,0xD3C70C3FL,(-10L),2L},{0L,0xD3C70C3FL,0xD69FDDECL,9L,0xA33EBFF0L,0x61392C0FL}},{{9L,0xA33EBFF0L,0x61392C0FL,1L,(-4L),9L},{(-1L),0x526E0E5AL,9L,0x0892A1AFL,9L,0x526E0E5AL},{9L,0x186028B1L,1L,(-8L),0xFFF547DCL,1L},{(-10L),9L,(-8L),(-4L),0x517F05DFL,2L}},{{(-7L),9L,1L,0x61392C0FL,0xFFF547DCL,0x4C7F4CB1L},{9L,0x186028B1L,(-7L),0xD3C70C3FL,9L,0L},{2L,0x526E0E5AL,0xD69FDDECL,0xCBB07DC2L,(-4L),0xB74F6348L},{0xD3C70C3FL,0xA33EBFF0L,1L,1L,0xA33EBFF0L,0xD3C70C3FL}},{{(-1L),0xD3C70C3FL,0xDFA15A2CL,(-4L),(-10L),0x526E0E5AL},{8L,1L,1L,0x4C7F4CB1L,0xFFF547DCL,0x61392C0FL},{8L,(-3L),0x4C7F4CB1L,(-4L),0x49CCB45FL,0L},{(-1L),(-10L),1L,1L,0xD69FDDECL,0xD755D7A3L}},{{0xD3C70C3FL,0x186028B1L,0x7A29246DL,0xCBB07DC2L,(-3L),(-4L)},{2L,0xD3C70C3FL,(-8L),0xD3C70C3FL,2L,0xB74F6348L},{9L,(-4L),1L,0x61392C0FL,0xA33EBFF0L,9L},{(-7L),0x2C898304L,8L,(-4L),9L,9L}},{{(-10L),(-1L),1L,(-8L),0xD69FDDECL,0xB74F6348L},{9L,(-3L),(-8L),0x0892A1AFL,0x52280851L,(-4L)},{(-1L),9L,0x7A29246DL,1L,0xD755D7A3L,0xD755D7A3L},{9L,1L,1L,9L,(-3L),0L}},{{0L,0x2C898304L,0x4C7F4CB1L,0xD3C70C3FL,(-4L),0x61392C0FL},{0x526E0E5AL,2L,1L,1L,(-4L),0x526E0E5AL},{1L,0x2C898304L,0xDFA15A2CL,0x0892A1AFL,(-3L),0xD3C70C3FL},{(-10L),1L,1L,0xD69FDDECL,0xD755D7A3L,0xB74F6348L}},{{8L,9L,0xD69FDDECL,0L,0x52280851L,0L},{(-7L),(-3L),(-7L),1L,0xD69FDDECL,0x4C7F4CB1L},{0x526E0E5AL,(-1L),1L,0x186028B1L,(-4L),1L},{0x61392C0FL,(-1L),(-3L),0x186028B1L,0xB74F6348L,0x4C7F4CB1L}}};
            int32_t ***l_2838 = &g_100;
            int16_t l_2951 = 4L;
            const uint64_t **l_2973 = (void*)0;
            const uint64_t ***l_2972[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            const uint64_t ****l_2971 = &l_2972[3];
            uint16_t l_2974 = 0xAEE5L;
            union U0 *l_3030 = &g_76;
            int16_t l_3049 = 0x9FECL;
            uint32_t l_3073[3];
            int64_t l_3116 = 0x15C8D68A4E4C1CAFLL;
            uint32_t l_3120 = 0x8F76B071L;
            int64_t *****l_3177 = &l_2429[2];
            uint32_t l_3181 = 8UL;
            uint64_t l_3187 = 18446744073709551609UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_3073[i] = 0UL;
        }
        (*l_2599) ^= (*p_14);
    }
    return l_3188[1][1];
}







static uint8_t func_30(int32_t * p_31, int32_t * p_32, int32_t * p_33, const int16_t p_34, const int32_t p_35)
{
    uint32_t l_43 = 0x6EAEA544L;
    int32_t *l_44 = &g_45;
    union U0 l_60 = {0xCA1794A7L};
    int32_t l_1459 = (-1L);
    int32_t l_1494 = 0xB79BE903L;
    uint8_t l_1495 = 0UL;
    union U0 l_1534 = {-5L};
    int32_t l_1558 = 0x6ECFA6A5L;
    int32_t l_1559 = 8L;
    int32_t l_1561 = 0x99AFEDE5L;
    uint32_t l_1563 = 0xDF4D83D8L;
    const uint64_t *l_1584 = &g_668;
    const uint64_t **l_1583 = &l_1584;
    uint16_t l_1657 = 0x94E2L;
    int32_t * const *l_1660[9][3];
    int32_t * const **l_1659[10][3][8];
    int32_t * const ***l_1658[6][8] = {{(void*)0,&l_1659[7][2][2],&l_1659[7][2][2],&l_1659[9][1][0],&l_1659[7][2][2],(void*)0,&l_1659[7][2][2],&l_1659[7][2][2]},{&l_1659[7][2][2],&l_1659[7][2][2],(void*)0,(void*)0,(void*)0,(void*)0,&l_1659[7][2][2],&l_1659[7][2][2]},{&l_1659[7][2][2],(void*)0,&l_1659[7][2][2],(void*)0,&l_1659[7][2][2],&l_1659[7][2][2],(void*)0,&l_1659[9][1][0]},{&l_1659[7][2][2],&l_1659[7][2][2],(void*)0,&l_1659[9][1][0],(void*)0,&l_1659[7][2][2],&l_1659[7][2][2],(void*)0},{&l_1659[7][2][2],(void*)0,(void*)0,&l_1659[7][2][2],&l_1659[7][2][2],(void*)0,(void*)0,(void*)0},{(void*)0,&l_1659[7][2][2],&l_1659[7][2][2],&l_1659[7][2][2],&l_1659[7][2][2],(void*)0,&l_1659[7][2][2],&l_1659[9][1][0]}};
    int8_t *l_1700 = &l_60.f1;
    int16_t *l_1748 = (void*)0;
    union U0 ***l_1793 = &g_510;
    int64_t l_1810 = 6L;
    int32_t l_1817 = (-1L);
    int32_t l_1818 = 0L;
    int32_t l_1819 = 0xFE51CB82L;
    int32_t l_1823 = 0x6982BF35L;
    int32_t l_1825 = 0xDC106F89L;
    int32_t l_1826[2][4][8] = {{{(-9L),(-9L),1L,0x7FDFA7C0L,(-10L),(-10L),0x7FDFA7C0L,1L},{(-9L),(-9L),1L,0x7FDFA7C0L,(-10L),(-10L),0x7FDFA7C0L,1L},{(-9L),(-9L),1L,0x7FDFA7C0L,(-10L),(-10L),0x7FDFA7C0L,1L},{(-9L),(-9L),1L,0x7FDFA7C0L,(-10L),(-10L),0x7FDFA7C0L,1L}},{{(-9L),(-9L),1L,0x7FDFA7C0L,(-10L),(-10L),0x7FDFA7C0L,1L},{(-9L),(-9L),1L,0x7FDFA7C0L,(-10L),(-10L),0x7FDFA7C0L,1L},{(-9L),(-9L),1L,0x7FDFA7C0L,(-10L),(-10L),0x7FDFA7C0L,1L},{(-9L),(-9L),1L,0x7FDFA7C0L,(-10L),(-10L),0x7FDFA7C0L,1L}}};
    int16_t l_1899 = 0x9393L;
    int8_t l_1931 = 0xC7L;
    uint8_t **l_1972 = (void*)0;
    uint64_t ****l_2055 = &g_968[2][1];
    int16_t l_2096 = 0xB5DBL;
    const uint16_t ****l_2180 = (void*)0;
    uint16_t l_2260 = 0x430BL;
    int16_t **l_2331 = &l_1748;
    int16_t ***l_2330 = &l_2331;
    uint16_t l_2372 = 0x27E8L;
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
            l_1660[i][j] = &g_350;
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
                l_1659[i][j][k] = &l_1660[8][2];
        }
    }
    if (func_36((0x27CECC56L > ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((((*l_44) |= l_43) , func_46(((((((l_1459 = func_49(((*g_100) = func_55(l_60, func_61(((func_63(l_44) == ((l_60.f0 > p_35) == ((safe_add_func_int32_t_s_s(l_43, 0UL)) < 0x96C1L))) , (*g_349))), p_35, l_44)), l_60.f0, (**g_807), p_31, (*g_511))) ^ 0x22L) | g_442) == 0x2D2CL) , 0x6B3905D54208E65ALL) , p_34), l_60.f1)) == (*g_89)), 1)), l_60.f1)) > 5L)), p_35))
    {
        int32_t *l_1470 = &g_818;
        int16_t *l_1481 = &g_1304;
        uint8_t *l_1486 = &g_161;
        int32_t l_1491 = 0x253180ECL;
        uint16_t *l_1492 = &g_447;
        int16_t *l_1493 = &g_897;
        uint32_t l_1516 = 0x890268DFL;
        int32_t l_1560 = 0x5CC0E8DFL;
        uint8_t l_1595 = 253UL;
        uint32_t **l_1599 = &g_458;
        union U0 * const *l_1652 = &g_511;
        union U0 * const **l_1651 = &l_1652;
        uint32_t **l_1653 = &g_458;
        uint64_t **l_1654[2];
        int16_t * const l_1666 = &g_106[2];
        int32_t l_1724 = (-1L);
        uint64_t l_1778[9] = {0xD3FA3DBABFB0340CLL,0x4DA1A9A19D7FE29CLL,0xD3FA3DBABFB0340CLL,0xD3FA3DBABFB0340CLL,0x4DA1A9A19D7FE29CLL,0xD3FA3DBABFB0340CLL,0xD3FA3DBABFB0340CLL,0x4DA1A9A19D7FE29CLL,0xD3FA3DBABFB0340CLL};
        int64_t l_1782 = 0xCDBB3275242C1E0BLL;
        int32_t l_1804[7] = {0xD2D68AC6L,0xD2D68AC6L,0xD2D68AC6L,0xD2D68AC6L,0xD2D68AC6L,0xD2D68AC6L,0xD2D68AC6L};
        int64_t l_1816 = 0xCBF986B26EA64844LL;
        uint64_t * const ***l_1845 = (void*)0;
        uint32_t l_1846 = 6UL;
        int64_t l_2012 = 0x3DA4383DD5C2DC8FLL;
        uint64_t l_2013[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        int i;
        for (i = 0; i < 2; i++)
            l_1654[i] = &g_970;
        (*g_100) = p_32;
        (*g_100) = (void*)0;
        if ((g_6 <= (safe_mod_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((((safe_add_func_int16_t_s_s(((*l_1481) = 0xB6FBL), ((*l_1493) = (((*l_1492) = ((*g_458) < ((((safe_add_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u(((void*)0 != l_1486), ((*p_31) & ((safe_mul_func_int16_t_s_s(p_34, l_1459)) < ((safe_rshift_func_int16_t_s_u((((void*)0 != &l_60) && l_60.f1), g_82)) | p_35))))) == l_43), l_43)) & 0x15L) | l_1491) , 1L))) <= p_34)))) || g_1121[3]) > l_1491) && l_1494), p_34)), p_35)), 1UL)) > (*g_218)) != l_1495), g_348))))
        {
            int8_t l_1503 = 0x56L;
            uint8_t *l_1507 = &g_927[2];
            uint16_t *l_1523 = &g_959[5][2];
            int8_t *l_1524 = (void*)0;
            int8_t *l_1525 = &l_60.f1;
            (**g_89) = (((*l_1525) &= (1UL & (((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u((!(l_1503 , (~(safe_rshift_func_int8_t_s_u((p_35 & 0xEEL), (l_1507 != &l_1495)))))), 15)) >= ((((*l_1481) = (safe_mul_func_int8_t_s_s(((l_1492 = (((safe_sub_func_uint32_t_u_u(((((safe_div_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u(l_1516, (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((*l_1486) = p_35), (safe_mul_func_uint8_t_u_u(((l_1516 ^ g_1259) , 253UL), 1L)))), (*g_1177))))) && g_1117[4]), (*g_970))) >= l_1491) , (void*)0) == (void*)0), l_1494)) , l_1503) , &g_959[2][4])) == l_1523), l_1503))) , l_1491) == 4UL)) | 4294967295UL), 12)) != (**g_89)) != 2L))) != p_34);
        }
        else
        {
            int8_t l_1544 = 8L;
            int32_t l_1546[9];
            const uint32_t *** const l_1576 = &g_514;
            uint16_t l_1617[5];
            union U0 l_1667 = {0x7F8C97D2L};
            int32_t ***l_1676 = &g_100;
            int i;
            for (i = 0; i < 9; i++)
                l_1546[i] = 5L;
            for (i = 0; i < 5; i++)
                l_1617[i] = 0x566BL;
            for (g_161 = 23; (g_161 <= 46); g_161 = safe_add_func_int8_t_s_s(g_161, 8))
            {
                int8_t *l_1535 = &g_442;
                int32_t l_1550 = 7L;
                int32_t l_1555 = (-3L);
                int32_t l_1556 = 0xB8C36498L;
                uint64_t **l_1585 = &g_970;
                int32_t ** const ***l_1615 = (void*)0;
                for (g_817 = 8; (g_817 <= 8); g_817 = safe_add_func_uint32_t_u_u(g_817, 9))
                {
                    int32_t l_1554 = 1L;
                    int32_t l_1557 = (-9L);
                    int32_t l_1562 = 0x477F86D1L;
                    const uint64_t l_1586[8] = {0x6CB77D260ECDA49CLL,0x6CB77D260ECDA49CLL,0x6CB77D260ECDA49CLL,0x6CB77D260ECDA49CLL,0x6CB77D260ECDA49CLL,0x6CB77D260ECDA49CLL,0x6CB77D260ECDA49CLL,0x6CB77D260ECDA49CLL};
                    int i;
                    for (g_818 = 14; (g_818 != 0); g_818--)
                    {
                        uint8_t *l_1545 = &g_1164;
                        l_1546[1] &= (((((safe_sub_func_uint64_t_u_u((l_1534 , p_34), ((void*)0 == l_1535))) != (*p_33)) & ((++(*g_970)) || ((safe_div_func_uint64_t_u_u(((-4L) && (*p_31)), (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_s(p_35, 8)) || ((*l_1545) = (((*l_1492) = g_6) != l_1544))) < 0x52E6D63AL), 6)))) , 0x7E214A2E1D0D9578LL))) >= l_1544) != 4294967291UL);
                        (*g_100) = (void*)0;
                        return g_2[1][4][0];
                    }
                    for (g_908.f1 = 16; (g_908.f1 != 1); g_908.f1 = safe_sub_func_int64_t_s_s(g_908.f1, 1))
                    {
                        int32_t *l_1549 = (void*)0;
                        int32_t *l_1551 = &l_1550;
                        int32_t l_1552 = 0xBC979E19L;
                        int32_t *l_1553[9][9][3] = {{{&l_1459,&g_2[1][2][0],&l_1459},{&g_6,&l_1491,(void*)0},{(void*)0,&g_2[3][4][0],(void*)0},{&g_2[0][3][5],(void*)0,&l_1491},{(void*)0,(void*)0,&g_82},{&g_82,&g_2[2][7][1],&l_1550},{&g_2[2][7][1],&g_6,&g_2[2][7][1]},{&g_82,(void*)0,&g_2[0][1][0]},{&l_1546[1],&l_1550,&g_6}},{{&g_2[1][2][0],&l_1459,&l_1546[1]},{&l_1546[1],&l_1459,&l_1491},{&g_2[1][2][0],(void*)0,&l_1546[6]},{&l_1546[1],(void*)0,&g_2[0][3][5]},{&l_1546[1],(void*)0,&g_6},{&g_2[3][4][0],(void*)0,(void*)0},{&l_1546[1],&l_1550,&g_2[1][2][0]},{&l_1546[1],&l_1546[1],&l_1546[1]},{&l_1546[1],&l_1546[8],(void*)0}},{{&l_1546[3],(void*)0,&l_1491},{&l_1491,&g_82,&g_2[3][7][1]},{(void*)0,&g_2[2][4][1],&l_1550},{&l_1546[8],&g_2[3][7][1],&g_6},{&l_1459,&l_1546[1],&g_6},{&g_2[0][2][1],(void*)0,&l_1550},{&l_1546[1],&l_1550,&g_2[3][7][1]},{&l_1459,&l_1550,&l_1491},{&g_2[1][2][0],&g_6,(void*)0}},{{&l_1550,(void*)0,&l_1546[1]},{&l_1546[6],&l_1491,&g_2[1][2][0]},{(void*)0,(void*)0,(void*)0},{&l_1491,&g_6,&g_6},{(void*)0,&l_1550,&g_2[0][3][5]},{(void*)0,&l_1459,&l_1546[6]},{&g_6,&g_2[2][7][1],(void*)0},{&g_6,(void*)0,&l_1550},{&l_1546[1],&g_2[2][7][1],&l_1546[8]}},{{&g_2[1][2][0],&l_1459,&l_1550},{(void*)0,&l_1550,&g_2[3][4][0]},{(void*)0,&g_6,&l_1546[8]},{(void*)0,(void*)0,&l_1546[1]},{(void*)0,&l_1491,&g_82},{&g_2[0][3][5],(void*)0,&l_1546[1]},{&g_2[1][2][0],&g_6,&l_1546[1]},{&g_6,&l_1550,&g_2[1][2][0]},{&g_82,&l_1550,&l_1459}},{{&g_82,(void*)0,&l_1546[1]},{&l_1459,&l_1546[1],&l_1550},{&l_1459,&g_2[3][7][1],&g_82},{&g_82,&g_2[2][4][1],&l_1546[1]},{&g_82,&g_82,&g_2[2][4][0]},{&g_6,(void*)0,&l_1546[1]},{&g_2[1][2][0],&l_1546[8],&l_1459},{&g_2[0][3][5],&l_1546[1],&l_1546[1]},{(void*)0,&l_1550,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_2[0][1][0]},{(void*)0,(void*)0,&l_1491},{&g_2[1][2][0],(void*)0,&l_1491},{&l_1546[1],&l_1550,(void*)0},{&g_6,&g_2[1][2][0],&l_1491},{&g_6,&l_1550,&l_1491},{(void*)0,&l_1546[1],&g_2[0][1][0]},{(void*)0,&l_1546[6],(void*)0}},{{&l_1491,&g_2[3][4][0],(void*)0},{(void*)0,&g_2[1][2][0],&l_1546[1]},{&l_1546[6],&l_1459,&l_1459},{&l_1550,&l_1552,&l_1546[1]},{&g_2[1][2][0],&g_82,&g_2[2][4][0]},{&l_1459,&g_6,&l_1546[1]},{&l_1546[1],&l_1491,&g_82},{&g_2[0][2][1],&l_1550,&l_1550},{&l_1459,&l_1550,&l_1546[1]}},{{&l_1546[8],&l_1491,&l_1459},{(void*)0,&g_6,&g_2[1][2][0]},{&l_1491,&g_82,&l_1546[1]},{&g_2[2][4][1],&l_1491,&l_1550},{(void*)0,(void*)0,&l_1546[1]},{&l_1546[1],&g_6,(void*)0},{&l_1459,&l_1552,&g_2[0][3][5]},{&l_1552,(void*)0,&l_1552},{(void*)0,&l_1491,&g_2[0][2][1]}}};
                        int i, j, k;
                        ++l_1563;
                        return l_1562;
                    }
                    (*p_33) = (((safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((((*l_1492) &= ((safe_lshift_func_uint8_t_u_s(p_34, 4)) > (g_6 <= l_1534.f1))) <= ((void*)0 != &g_1177)), ((((*p_31) = (l_1576 != (((p_34 && (((safe_mul_func_uint8_t_u_u(0x7EL, (g_506 &= (safe_rshift_func_uint16_t_u_s((l_1583 != l_1585), 6))))) , 8L) != l_1586[3])) > 0UL) , &g_461[8][0][0]))) > l_1556) != 1L))) , 3L), 8)) > 1UL) > 0xF57ED6E3F237D1A5LL), 7L)) , &l_1492) != (void*)0);
                    if ((*p_31))
                        continue;
                }
                for (g_442 = 8; (g_442 >= 1); g_442 -= 1)
                {
                    int64_t l_1596[9][5] = {{0x1A4C04B92B47E04CLL,0L,(-3L),1L,(-1L)},{(-2L),1L,0xACB5BBEFEDFAF139LL,(-1L),0x6BBC1D88ECB4ECFDLL},{0x1A4C04B92B47E04CLL,(-2L),0x6BBC1D88ECB4ECFDLL,(-2L),0x1A4C04B92B47E04CLL},{9L,1L,0x6BBC1D88ECB4ECFDLL,0xACB5BBEFEDFAF139LL,8L},{1L,9L,0xACB5BBEFEDFAF139LL,0xA0EF578100EA8066LL,0x7AAC3D201B749EE3LL},{0x7AAC3D201B749EE3LL,0x1A4C04B92B47E04CLL,(-3L),1L,8L},{0x6BBC1D88ECB4ECFDLL,0xA0EF578100EA8066LL,0xA0EF578100EA8066LL,0x6BBC1D88ECB4ECFDLL,0x1A4C04B92B47E04CLL},{8L,0xA0EF578100EA8066LL,1L,0L,0x6BBC1D88ECB4ECFDLL},{1L,0x1A4C04B92B47E04CLL,8L,1L,(-1L)}};
                    uint32_t **l_1597 = &g_458;
                    int i, j;
                    for (g_244 = 0; (g_244 <= 1); g_244 += 1)
                    {
                        int8_t *l_1589 = &g_76.f1;
                        uint64_t ****l_1590 = &g_968[1][5];
                        int i;
                        (*g_90) = ((((safe_add_func_int8_t_s_s(2L, ((*l_1589) ^= 0x7DL))) , (((((*l_1590) = (void*)0) == &g_969[g_442]) | (safe_mul_func_int16_t_s_s(((*p_31) | ((*g_458) = (l_1534 , ((l_1546[1] || (safe_sub_func_uint16_t_u_u((l_1595 >= l_1550), 0xA3B8L))) <= l_1596[8][2])))), p_35))) || 0x2160L)) <= 9UL) | (-1L));
                        return p_35;
                    }
                    (*p_31) |= 5L;
                    p_32 = (void*)0;
                }
                (*p_33) = l_1617[1];
            }
            for (l_1494 = 0; (l_1494 == (-2)); l_1494 = safe_sub_func_int64_t_s_s(l_1494, 1))
            {
                (*p_31) |= 6L;
            }
            for (l_1534.f1 = 19; (l_1534.f1 < (-15)); --l_1534.f1)
            {
                uint64_t l_1622 = 0x93AA010F27CEC6C8LL;
                uint32_t **l_1650 = &g_458;
                uint64_t ***l_1655 = &g_969[1];
                uint64_t **l_1656 = &g_970;
                uint8_t l_1661[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1661[i] = 255UL;
                l_1622--;
                (*p_33) &= (safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((0x9F48D932L == 4294967295UL), ((&g_807 != ((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((p_35 , (((*l_1655) = (((*p_31) = ((*g_515) > (safe_div_func_uint32_t_u_u((++(*g_458)), (safe_mod_func_uint64_t_u_u(l_1558, (safe_mod_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(g_509, (safe_mod_func_uint8_t_u_u((+(safe_mul_func_uint8_t_u_u((l_1650 != ((l_1651 == &l_1652) , l_1653)), g_662))), g_662)))) || (*p_31)), (*g_90))))))))) , l_1654[0])) == l_1656)) <= l_1546[2]), 1UL)), (*g_1177))), l_1657)) , l_1658[2][7])) , 0xC283L))), l_1661[2]));
            }
            for (l_1563 = 0; (l_1563 == 27); ++l_1563)
            {
                uint64_t l_1673 = 0x930B5258A91567DALL;
                int32_t ***l_1677 = &g_100;
                int32_t ****l_1678 = &l_1677;
                int32_t *l_1679[9] = {&l_1561,(void*)0,(void*)0,&l_1561,(void*)0,(void*)0,&l_1561,(void*)0,(void*)0};
                int i;
                (*p_31) = (p_34 , ((safe_lshift_func_int8_t_s_s(((void*)0 == l_1666), g_821)) , (((((l_1667 , 0xFE5675E0FAF2D40DLL) , ((p_34 == (l_60 , (safe_unary_minus_func_int64_t_s(((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((g_1133[1][4] , 0xE9L), l_1673)), l_1495)) | g_1098))))) || g_357)) , l_1491) || l_1673) , (*p_31))));
                l_1654[0] = l_1654[0];
                l_1559 = ((*g_218) &= (((g_188 > g_1117[5]) >= ((((**g_89) = (((safe_add_func_uint8_t_u_u((&g_968[0][1] != &g_968[1][4]), (g_357 ^ (l_1676 != ((*l_1678) = l_1677))))) ^ (0x731BL <= 0x21A9L)) && (-5L))) <= 0x202AA574L) , 0UL)) ^ p_34));
            }
        }
        for (l_1495 = 0; (l_1495 >= 37); l_1495++)
        {
            int32_t l_1699 = 1L;
            int64_t l_1722 = 0L;
            int16_t *l_1749 = (void*)0;
            int32_t l_1805 = 0x4D77639EL;
            int32_t l_1806 = 0L;
            int32_t l_1807 = 0xA21AF6F2L;
            int32_t l_1808 = 2L;
            int32_t l_1809 = 1L;
            int32_t l_1811 = 0x136A37D8L;
            int32_t l_1813 = 1L;
            int32_t l_1814 = (-8L);
            int32_t l_1815 = (-1L);
            int32_t l_1820 = 6L;
            int32_t l_1821[10][7][1] = {{{5L},{(-10L)},{5L},{5L},{(-10L)},{5L},{5L}},{{(-10L)},{5L},{5L},{(-10L)},{5L},{5L},{(-10L)}},{{5L},{5L},{(-10L)},{5L},{5L},{(-10L)},{5L}},{{5L},{(-10L)},{5L},{5L},{(-10L)},{5L},{5L}},{{(-10L)},{5L},{5L},{(-10L)},{5L},{5L},{(-10L)}},{{5L},{5L},{(-10L)},{5L},{5L},{(-10L)},{5L}},{{5L},{(-10L)},{5L},{5L},{(-10L)},{5L},{5L}},{{(-10L)},{5L},{5L},{(-10L)},{5L},{5L},{(-10L)}},{{5L},{5L},{(-10L)},{5L},{5L},{(-10L)},{5L}},{{5L},{(-10L)},{5L},{5L},{(-10L)},{5L},{5L}}};
            int32_t *l_1842 = &g_348;
            union U0 **l_1885 = &g_511;
            union U0 ** const *l_1896 = &l_1885;
            union U0 ** const **l_1895 = &l_1896;
            int32_t l_2010 = (-1L);
            int i, j, k;
            for (g_76.f1 = (-4); (g_76.f1 > (-15)); g_76.f1--)
            {
                int8_t *l_1696 = (void*)0;
                int8_t *l_1697 = &g_506;
                int32_t l_1698[6] = {0x8B917E75L,0x8C91E379L,0x8B917E75L,0x8B917E75L,0x8C91E379L,0x8B917E75L};
                uint32_t l_1723 = 9UL;
                int32_t * const *l_1745[9][1][3] = {{{&g_350,&l_1470,&g_350}},{{&g_350,&g_350,&g_350}},{{&g_350,&l_1470,&g_350}},{{&g_350,&g_350,&g_350}},{{&g_350,&l_1470,&g_350}},{{&g_350,&g_350,&g_350}},{{&g_350,&l_1470,&g_350}},{{&g_350,&g_350,&g_350}},{{&g_350,&l_1470,&g_350}}};
                uint64_t *l_1756 = (void*)0;
                uint32_t ** const *l_1770 = &g_461[2][1][1];
                uint32_t ** const **l_1769 = &l_1770;
                union U0 l_1831 = {-8L};
                int32_t *l_1847 = &l_1821[9][3][0];
                int32_t *l_1848 = &l_1698[4];
                int32_t *l_1849 = &l_1819;
                int32_t *l_1850 = (void*)0;
                int32_t *l_1851 = &l_1819;
                int32_t *l_1852 = &l_1814;
                int32_t *l_1853 = &g_82;
                int32_t *l_1854 = &l_1808;
                int32_t *l_1855 = &l_1815;
                int32_t *l_1856 = &l_1826[1][0][4];
                int32_t *l_1857 = &l_1805;
                int32_t *l_1858 = (void*)0;
                int32_t *l_1859[4] = {&l_1804[0],&l_1804[0],&l_1804[0],&l_1804[0]};
                uint8_t l_1861 = 0UL;
                const int32_t *l_1872 = &l_1831.f0;
                const int32_t **l_1871 = &l_1872;
                const int32_t ***l_1870 = &l_1871;
                const int32_t ****l_1869 = &l_1870;
                const int32_t *****l_1868[8] = {&l_1869,&l_1869,&l_1869,&l_1869,&l_1869,&l_1869,&l_1869,&l_1869};
                int32_t ** const *l_1874 = &g_100;
                int32_t ** const **l_1873 = &l_1874;
                uint32_t *l_1877 = &l_43;
                int i, j, k;
            }
            if (((*p_33) = (safe_rshift_func_uint16_t_u_s((+((*p_31) &= (((safe_sub_func_int32_t_s_s(((safe_div_func_uint64_t_u_u((((*l_1793) = l_1885) == &g_511), (safe_rshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s((+0x63144945L), (*g_970))), ((safe_lshift_func_int16_t_s_s(l_1558, (safe_mul_func_uint8_t_u_u(l_1816, ((l_1895 == (void*)0) >= (safe_add_func_uint32_t_u_u(l_1899, 4294967287UL))))))) == p_34))))) == l_1699), l_1495)) , g_897) , 0x78C009DAL))), 5))))
            {
                int32_t **l_1900 = &g_101[0];
                (*l_1900) = (*g_89);
                if ((*g_218))
                    break;
            }
            else
            {
                int32_t l_1926[5];
                union U0 l_1930 = {0x94108F07L};
                int32_t l_1957 = 1L;
                int i;
                for (i = 0; i < 5; i++)
                    l_1926[i] = 0x0BE4CF4AL;
                for (l_1817 = 4; (l_1817 >= 0); l_1817 -= 1)
                {
                    uint8_t l_1916 = 247UL;
                    union U0 l_1934 = {0L};
                    int16_t **l_1939 = &l_1749;
                    int32_t * const *l_1958 = &g_218;
                    (**l_1896) = &g_908;
                    for (l_1808 = 0; (l_1808 <= 5); l_1808 += 1)
                    {
                        int64_t *l_1917 = (void*)0;
                        int16_t l_1927 = 0xA6C7L;
                        int i, j;
                        (*p_31) = ((safe_lshift_func_uint16_t_u_s((((((l_1926[4] = ((*l_1700) = (safe_div_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s((~(safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s((((*g_218) &= ((l_1916 & ((void*)0 == l_1917)) & (((p_34 < ((*l_1486)++)) != (safe_unary_minus_func_uint64_t_u(0UL))) & ((p_34 || ((safe_mod_func_uint32_t_u_u(((-1L) > (&g_821 == &g_1098)), 1UL)) | 0xFA673DC5L)) <= g_1925)))) <= l_1816), p_34)), 0x9529B100L))), g_1309[6][0][0])), 0xAC6FE240D9FE3A7BLL)), (*g_1177))) && g_1178) || l_1805), 0xB8L)))) < l_1778[8]) != l_1927) <= l_1899) < 1L), p_35)) & (-7L));
                        l_1658[l_1808][(l_1817 + 3)] = l_1658[l_1808][(l_1808 + 2)];
                        (**l_1793) = (*g_510);
                    }
                    for (g_348 = 1; (g_348 <= 5); g_348 += 1)
                    {
                        int32_t l_1942 = 0L;
                        uint8_t l_1943 = 247UL;
                        (*g_100) = ((safe_mul_func_int8_t_s_s((p_34 , (-1L)), (p_35 , (((void*)0 == &g_442) == l_1804[1])))) , &l_1491);
                        (*p_31) |= ((safe_div_func_uint16_t_u_u((l_1934 , (safe_div_func_int64_t_s_s(1L, (((void*)0 == l_1939) | (p_34 > l_1657))))), ((((safe_mul_func_uint8_t_u_u((((0L <= l_1811) || p_35) < p_34), l_1942)) >= l_1942) <= l_1595) , l_1943))) != p_35);
                    }
                    for (l_1823 = 5; (l_1823 >= 0); l_1823 -= 1)
                    {
                        uint32_t *l_1946 = &g_1309[6][0][0];
                        uint64_t ****l_1959 = &g_968[0][1];
                        (**g_89) ^= 0x1E7596FEL;
                        (*p_33) = (safe_mul_func_int8_t_s_s(((****l_1895) , 0x20L), (((p_34 < (((*l_1946) = ((**l_1599) |= 0x8B1400F0L)) > (safe_div_func_int8_t_s_s((0xEDB04425L && (0x313CL || (l_1804[0] = (g_106[0] = p_35)))), (safe_mod_func_int32_t_s_s(((0x52L | (safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((void*)0 != l_1939), p_34)), l_1957)), p_35))) > g_662), (*p_31))))))) , l_1958) != &p_31)));
                        (*l_1959) = (void*)0;
                    }
                }
                for (g_161 = 0; (g_161 < 19); ++g_161)
                {
                    for (l_43 = 0; (l_43 <= 0); l_43 += 1)
                    {
                        int i, j;
                        return g_202[(l_43 + 3)][l_43];
                    }
                }
            }
            for (g_122 = (-7); (g_122 >= 9); ++g_122)
            {
                int32_t l_1964[8] = {0x6F6789BBL,0x6F6789BBL,0x6F6789BBL,0x6F6789BBL,0x6F6789BBL,0x6F6789BBL,0x6F6789BBL,0x6F6789BBL};
                int i;
                (*g_100) = (*g_89);
                (*p_31) = (((0x00D8D83CL & (*g_458)) == 18446744073709551614UL) && (0x72L & l_1964[3]));
            }
            for (g_161 = 0; (g_161 <= 1); g_161 += 1)
            {
                const int32_t l_1988[9][1] = {{1L},{0x65B6EE41L},{1L},{0x65B6EE41L},{1L},{0x65B6EE41L},{1L},{0x65B6EE41L},{1L}};
                int32_t *l_1995 = (void*)0;
                int32_t *l_1996 = &g_82;
                int32_t *l_1997 = &l_1819;
                int32_t *l_1998 = &g_6;
                int32_t *l_1999 = &l_1699;
                int32_t *l_2000 = &l_1804[0];
                int32_t *l_2001 = (void*)0;
                int32_t *l_2002 = (void*)0;
                int32_t *l_2003 = &l_1809;
                int32_t *l_2004 = &l_1809;
                int32_t *l_2005 = &l_1699;
                int32_t *l_2006 = &l_1815;
                int32_t *l_2007 = &l_1821[9][3][0];
                int32_t *l_2008 = &l_1804[0];
                int32_t *l_2009[1][9][2] = {{{&l_1826[1][1][5],&l_1826[1][1][3]},{&l_1826[1][1][5],&l_1826[1][1][5]},{&l_1826[1][1][3],&l_1826[1][1][5]},{&l_1826[1][1][5],&l_1826[1][1][3]},{&l_1826[1][1][5],&l_1826[1][1][5]},{&l_1826[1][1][3],&l_1826[1][1][5]},{&l_1826[1][1][5],&l_1826[1][1][3]},{&l_1826[1][1][5],&l_1826[1][1][5]},{&l_1826[1][1][3],&l_1826[1][1][5]}}};
                int16_t l_2011 = 0x22AAL;
                int i, j, k;
                for (g_897 = 1; (g_897 >= 0); g_897 -= 1)
                {
                    int64_t l_1965 = 0x657BCC9C1E4DD322LL;
                    return l_1965;
                }
                if ((((safe_lshift_func_int8_t_s_s(g_6, g_1133[1][4])) || ((*g_458) = 1UL)) | 1L))
                {
                    uint32_t l_1989 = 0UL;
                    union U0 l_1990 = {0xF6B423BDL};
                    for (l_1722 = 0; (l_1722 <= 1); l_1722 += 1)
                    {
                        uint16_t ***l_1969 = &g_1707;
                        uint16_t **** const l_1968[10][7] = {{&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969},{&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969},{&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969},{&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969},{&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969},{&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969},{&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969},{&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969},{&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969},{&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969,&l_1969}};
                        uint16_t ****l_1971[1];
                        uint16_t *****l_1970 = &l_1971[0];
                        uint8_t ***l_1973 = &l_1972;
                        uint8_t **l_1975 = (void*)0;
                        uint8_t ***l_1974 = &l_1975;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_1971[i] = &l_1969;
                        (*l_1970) = l_1968[4][2];
                        if (g_1117[l_1722])
                            continue;
                        if ((*p_33))
                            break;
                        (*l_1974) = ((*l_1973) = l_1972);
                    }
                    (*g_100) = p_33;
                    for (g_897 = 0; (g_897 <= 3); g_897 += 1)
                    {
                        int32_t **l_1976 = &g_218;
                        int32_t **l_1977[2][8] = {{&l_44,&l_44,&l_44,&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44,&l_44,&l_44,&l_44}};
                        int i, j;
                        (*l_1976) = ((*g_100) = p_33);
                        l_1561 = (-1L);
                        l_1825 ^= ((*p_33) = ((((g_106[g_897] & ((*p_31) = (g_1164 || 0x7EL))) <= (l_1819 &= ((void*)0 != l_1977[0][0]))) == (((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((0xA9B90A8EL == (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_35, 0)), (((safe_add_func_int64_t_s_s((l_1988[1][0] != (g_1860 &= ((*l_1481) = (-5L)))), 0x4E6E630D579AA2DELL)) == 0L) | l_1988[4][0])))) >= (**g_1707)), l_1807)), g_348)) | 0L) ^ l_1989)) , (**g_89)));
                        (*p_33) = (l_1990 , ((*p_31) = (**g_89)));
                    }
                }
                else
                {
                    uint16_t ***l_1991 = &g_1707;
                    const uint32_t ***l_1994 = &g_514;
                    const uint32_t ****l_1993 = &l_1994;
                    if ((**g_89))
                    {
                        return l_1988[6][0];
                    }
                    else
                    {
                        uint16_t ****l_1992 = &l_1991;
                        (*l_1992) = (l_1820 , l_1991);
                        if (l_1808)
                            continue;
                    }
                    (*l_1993) = (l_1534 , (void*)0);
                }
                l_2013[5]++;
            }
        }
    }
    else
    {
        uint16_t l_2016 = 0x1DF4L;
        int64_t *l_2031[6] = {&g_1121[3],&g_1121[3],(void*)0,&g_1121[3],&g_1121[3],(void*)0};
        int64_t *l_2033 = &g_1121[0];
        int64_t *l_2034[8] = {&g_1121[3],&g_1121[3],&g_1121[6],&g_1121[3],&g_1121[3],&g_1121[6],&g_1121[3],&g_1121[3]};
        int32_t * const l_2063[6][6][5] = {{{(void*)0,&g_2071,&g_2071,(void*)0,&g_2073},{&g_2095,(void*)0,&g_2066,&g_2086,(void*)0},{(void*)0,&g_2082,&g_2086,&g_2089,&g_2093[1]},{(void*)0,&g_2073,&g_2094,&g_2086,&g_2074},{&g_2087,&g_2092,&g_2065[1][2],(void*)0,(void*)0},{&g_2077[2][0],(void*)0,(void*)0,&g_2087,(void*)0}},{{(void*)0,&g_2069[2][4],&g_2080,&g_2091,&g_2068},{(void*)0,&g_2094,(void*)0,&g_2088,&g_2085},{(void*)0,(void*)0,(void*)0,&g_2075,&g_2091},{(void*)0,(void*)0,&g_2090,&g_2089,&g_2089},{&g_2077[2][0],(void*)0,&g_2077[2][0],(void*)0,&g_2080},{&g_2087,&g_2088,&g_2089,&g_2092,&g_2081}},{{(void*)0,(void*)0,&g_2079,&g_2066,(void*)0},{(void*)0,&g_2068,&g_2073,&g_2081,&g_2088},{&g_2082,(void*)0,(void*)0,(void*)0,&g_2079},{(void*)0,&g_2066,&g_2074,(void*)0,(void*)0},{(void*)0,&g_2087,&g_2080,&g_2073,&g_2069[2][4]},{&g_2087,(void*)0,&g_2076,&g_2089,&g_2069[2][4]}},{{(void*)0,&g_2067[6],&g_2064[5][0],&g_2094,(void*)0},{(void*)0,&g_2094,&g_2079,(void*)0,&g_2079},{&g_2084,&g_2084,&g_2085,&g_2086,&g_2088},{&g_2077[2][0],(void*)0,(void*)0,&g_2067[6],(void*)0},{&g_2094,&g_2066,&g_2070,&g_2074,&g_2081},{&g_2072,(void*)0,(void*)0,&g_2073,&g_2064[5][0]}},{{&g_2076,&g_2084,&g_2091,&g_2065[1][2],&g_2073},{(void*)0,&g_2094,(void*)0,&g_2082,&g_2075},{&g_2091,&g_2067[6],&g_2079,&g_2090,&g_2068},{&g_2068,(void*)0,(void*)0,&g_2090,&g_2088},{&g_2071,&g_2087,(void*)0,&g_2082,(void*)0},{&g_2067[6],&g_2066,&g_2065[1][2],&g_2065[1][2],&g_2066}},{{(void*)0,(void*)0,&g_2089,&g_2073,(void*)0},{(void*)0,&g_2068,(void*)0,&g_2074,(void*)0},{(void*)0,(void*)0,(void*)0,&g_2067[6],&g_2090},{(void*)0,&g_2071,&g_2079,&g_2086,(void*)0},{(void*)0,&g_2079,&g_2069[2][4],(void*)0,&g_2088},{&g_2067[6],&g_2076,&g_2087,&g_2094,&g_2072}}};
        int32_t * const *l_2062 = &l_2063[0][3][3];
        uint8_t **l_2109[10];
        uint8_t l_2140 = 0x02L;
        int32_t l_2168[7] = {1L,1L,1L,1L,1L,1L,1L};
        uint64_t l_2169 = 18446744073709551615UL;
        const uint64_t ***l_2187[8] = {&l_1583,&l_1583,&l_1583,&l_1583,&l_1583,&l_1583,&l_1583,&l_1583};
        uint16_t ***l_2276 = (void*)0;
        uint16_t ****l_2275 = &l_2276;
        uint16_t *****l_2274 = &l_2275;
        int32_t ****l_2284 = &g_807;
        union U0 l_2292 = {0L};
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_2109[i] = &g_2108;
        if (l_2016)
        {
            uint64_t **l_2019 = &g_970;
            uint8_t *l_2024 = (void*)0;
            uint8_t *l_2025[10][7] = {{&g_927[2],&g_927[1],&g_161,&g_927[2],(void*)0,&l_1495,&g_161},{&g_927[0],&g_161,&g_927[2],(void*)0,(void*)0,&g_927[2],&g_161},{(void*)0,&g_161,&g_927[2],(void*)0,&g_161,&g_161,&g_1164},{&g_927[2],&g_927[0],&g_1164,&g_161,&g_927[2],&g_927[1],&g_161},{&g_1164,&g_161,(void*)0,(void*)0,&g_161,(void*)0,&g_927[0]},{&g_927[1],&g_161,&g_927[2],(void*)0,&l_1495,&g_161,&g_1164},{&g_1164,(void*)0,&g_927[2],&g_927[2],(void*)0,&g_1164,(void*)0},{&g_927[2],&g_161,(void*)0,&g_161,&g_161,&l_1495,&l_1495},{&g_927[1],&g_1164,(void*)0,&g_161,&l_1495,&g_927[2],&g_1164},{&g_161,&g_161,&g_927[2],(void*)0,&g_1164,&g_927[2],&g_161}};
            int32_t l_2026 = 0xFC2F3042L;
            int64_t **l_2032[2][9][5] = {{{&g_201[4],&g_201[8],&g_201[1],&g_201[8],&g_201[4]},{&g_201[8],(void*)0,(void*)0,&l_2031[2],(void*)0},{&g_201[4],(void*)0,(void*)0,&g_201[4],&l_2031[2]},{&g_201[8],&g_201[4],&g_201[1],(void*)0,(void*)0},{&g_201[8],&g_201[4],&g_201[8],&l_2031[2],&g_201[4]},{(void*)0,(void*)0,&l_2031[2],(void*)0,&l_2031[2]},{(void*)0,(void*)0,&g_201[1],&g_201[4],&g_201[8]},{&g_201[8],&g_201[8],&l_2031[2],&l_2031[2],&g_201[8]},{&g_201[8],(void*)0,&g_201[8],&g_201[8],&l_2031[2]}},{{&g_201[4],&g_201[8],&g_201[1],&g_201[8],&g_201[4]},{&g_201[8],(void*)0,(void*)0,&l_2031[2],(void*)0},{&g_201[4],(void*)0,(void*)0,&g_201[4],&l_2031[2]},{&g_201[8],&g_201[4],&g_201[1],(void*)0,(void*)0},{&g_201[8],&g_201[4],&g_201[8],&l_2031[2],&g_201[4]},{(void*)0,(void*)0,&l_2031[2],(void*)0,&l_2031[2]},{(void*)0,(void*)0,&g_201[1],&g_201[4],&g_201[8]},{&g_201[8],&g_201[8],&l_2031[2],&l_2031[2],&g_201[8]},{&g_201[8],(void*)0,&g_201[8],&g_201[8],&l_2031[2]}}};
            int32_t l_2045 = 0x2CDB8ED7L;
            int16_t *l_2046 = &g_1304;
            union U0 *l_2111 = &l_1534;
            int32_t l_2138[4][7][3] = {{{1L,6L,(-1L)},{0x53F16EDEL,8L,0x8CDDC0ACL},{(-1L),0x6202BEAAL,0x0288216BL},{0x5B01E71BL,0x4306543AL,0x0288216BL},{0L,1L,0x8CDDC0ACL},{0x4351B091L,(-1L),(-1L)},{0x6D78B2A9L,0x4825BB86L,0x6D78B2A9L}},{{1L,0x761CC325L,0x4306543AL},{0x0288216BL,(-5L),0x4825BB86L},{0xCA3A3DCBL,1L,(-1L)},{8L,0L,0L},{0xCA3A3DCBL,0L,7L},{0x0288216BL,(-7L),0x604F5E72L},{1L,1L,6L}},{{0x6D78B2A9L,0x604F5E72L,1L},{0x4351B091L,0x5B01E71BL,(-5L)},{0L,0x8CDDC0ACL,0x1A70DE62L},{0x5B01E71BL,0x8CDDC0ACL,1L},{(-1L),0x5B01E71BL,1L},{0x53F16EDEL,0x604F5E72L,0x50D5B2FBL},{1L,1L,(-1L)}},{{1L,(-7L),1L},{1L,0L,(-1L)},{(-1L),0L,0x761CC325L},{6L,1L,(-1L)},{0xEF3F56D1L,(-5L),1L},{(-1L),0x761CC325L,(-1L)},{0L,0x4825BB86L,0x50D5B2FBL}}};
            int32_t l_2139 = (-1L);
            int32_t ***l_2157 = (void*)0;
            int32_t ****l_2156 = &l_2157;
            int8_t l_2378 = 1L;
            int i, j, k;
        }
        else
        {
            int32_t **l_2382[2][10][9] = {{{&g_101[0],&g_218,&g_101[0],&g_218,&g_218,&g_101[0],&g_218,&g_218,&g_218},{&g_101[0],&g_218,&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_218,&g_101[0]},{(void*)0,&g_101[0],&g_218,&g_218,&g_218,&g_101[0],(void*)0,&g_101[0],&g_218},{&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_218,(void*)0},{(void*)0,&g_218,(void*)0,&g_218,&g_218,(void*)0,&g_218,(void*)0,&g_101[0]},{&g_101[0],&g_101[0],(void*)0,&g_218,&g_101[0],&g_218,&g_101[0],&g_101[0],&g_101[0]},{&g_218,&g_218,&g_218,&g_101[0],&g_218,&g_218,&g_101[0],&g_101[0],&g_101[0]},{&g_101[0],&g_101[0],&g_101[0],&g_218,&g_101[0],&g_101[0],&g_101[0],&g_218,(void*)0},{&g_101[0],&g_218,&g_218,&g_101[0],&g_218,&g_218,&g_218,&g_101[0],&g_218},{&g_101[0],&g_218,&g_101[0],&g_218,(void*)0,&g_101[0],&g_101[0],&g_218,&g_101[0]}},{{&g_218,(void*)0,&g_218,&g_218,(void*)0,&g_218,(void*)0,&g_101[0],&g_218},{&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],(void*)0},{(void*)0,&g_101[0],&g_218,&g_218,&g_218,&g_101[0],(void*)0,(void*)0,&g_101[0]},{&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_218,&g_101[0],&g_218,&g_101[0]},{&g_218,&g_101[0],&g_218,&g_218,&g_101[0],&g_218,&g_218,&g_101[0],&g_218},{&g_101[0],&g_101[0],(void*)0,&g_101[0],&g_101[0],&g_218,&g_101[0],&g_218,&g_101[0]},{&g_218,(void*)0,(void*)0,&g_218,&g_218,&g_101[0],&g_101[0],&g_218,&g_218},{&g_101[0],&g_218,&g_101[0],&g_101[0],(void*)0,&g_101[0],&g_101[0],&g_218,&g_101[0]},{&g_218,&g_218,&g_218,(void*)0,&g_218,&g_218,&g_218,&g_218,(void*)0},{&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0]}}};
            int32_t **l_2383[6] = {&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0]};
            int32_t **l_2384[3][6][5] = {{{&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0]},{&g_218,&g_101[0],&g_218,&g_101[0],&g_218},{&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0]},{&g_218,&g_101[0],&g_218,&g_101[0],&g_218},{&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0]},{&g_218,&g_101[0],&g_218,&g_101[0],&g_218}},{{&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0]},{&g_218,&g_101[0],&g_218,&g_101[0],&g_218},{&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0]},{&g_218,&g_101[0],&g_218,&g_101[0],&g_218},{&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0]},{&g_218,&g_101[0],&g_218,&g_101[0],&g_218}},{{&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0]},{&g_218,&g_101[0],&g_218,&g_101[0],&g_218},{&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0]},{&g_218,&g_101[0],&g_218,&g_101[0],&g_218},{&g_101[0],&g_101[0],&g_101[0],&g_101[0],&g_101[0]},{&g_218,&g_101[0],&g_218,&g_101[0],&g_218}}};
            int32_t **l_2385 = &g_101[0];
            int i, j, k;
            for (l_1899 = 0; (l_1899 == 10); l_1899++)
            {
                (**g_89) = (*g_218);
            }
            (*p_33) = l_1459;
            (*l_2385) = (*l_2062);
        }
        return p_34;
    }
    return (*g_2108);
}







static int32_t func_36(uint16_t p_37, uint16_t p_38)
{
    return p_38;
}







static int32_t * func_46(uint64_t p_47, uint8_t p_48)
{
    uint16_t l_1462[8][9] = {{0xFF4BL,0xAFB1L,7UL,0xAFB1L,0xFF4BL,7UL,0x62C2L,0x62C2L,7UL},{0xB5A0L,0x22D0L,0x6463L,0x22D0L,0xB5A0L,0x6463L,0xF89AL,0xF89AL,0x6463L},{0xFF4BL,0xAFB1L,7UL,0xAFB1L,0xFF4BL,7UL,0x62C2L,0x62C2L,7UL},{0xB5A0L,0x22D0L,0x6463L,0x22D0L,0xB5A0L,0x6463L,0xF89AL,0xF89AL,0x6463L},{0xFF4BL,0xAFB1L,7UL,0xAFB1L,0xFF4BL,7UL,0x62C2L,0x62C2L,7UL},{0xB5A0L,0x22D0L,0x6463L,0x22D0L,0xB5A0L,0x6463L,0xF89AL,0xF89AL,0x6463L},{0xFF4BL,0xAFB1L,7UL,0xAFB1L,0xFF4BL,7UL,0x62C2L,0x62C2L,7UL},{0xB5A0L,0x22D0L,0x6463L,0x22D0L,0xB5A0L,0x6463L,0xF89AL,0xF89AL,0x6463L}};
    const union U0 * const l_1465 = &g_908;
    int32_t *l_1469 = (void*)0;
    int i, j;
    for (g_122 = 0; (g_122 != 12); g_122 = safe_add_func_int16_t_s_s(g_122, 3))
    {
        const union U0 **l_1466 = (void*)0;
        const union U0 *l_1468 = &g_908;
        const union U0 **l_1467 = &l_1468;
        (**g_89) |= p_47;
        l_1462[4][2]--;
        (*l_1467) = l_1465;
    }
    return l_1469;
}







static uint8_t func_49(int32_t * p_50, int8_t p_51, int32_t * p_52, int32_t * p_53, union U0 p_54)
{
    int32_t l_844 = 1L;
    int16_t *l_899 = &g_106[1];
    int32_t ***l_923 = &g_100;
    int32_t l_931 = (-1L);
    int32_t l_932 = 0xC7ABE7B7L;
    int32_t l_933 = 0L;
    int32_t l_934 = 0x4EAA9A1AL;
    int32_t l_935[7] = {0x37E33C21L,0x37E33C21L,0x5894EC3CL,0x37E33C21L,0x37E33C21L,0x5894EC3CL,0x37E33C21L};
    uint32_t l_1010[5][5][5] = {{{4294967286UL,0x0197E20DL,0x09776EF8L,0xA8649EE5L,0x0197E20DL},{4294967289UL,4294967295UL,4294967289UL,0xB4DF4D08L,4294967295UL},{0UL,1UL,0x09776EF8L,0x09776EF8L,1UL},{4294967289UL,1UL,1UL,0xB4DF4D08L,1UL},{4294967286UL,1UL,0x809F5503L,0xA8649EE5L,1UL}},{{4294967295UL,4294967295UL,1UL,0xD967FC84L,0x058FF05BL},{0x341CD021L,0x881D9714L,0x4D157A0CL,0x0197E20DL,0x881D9714L},{0UL,0x058FF05BL,4294967295UL,1UL,0x058FF05BL},{0UL,0x78B071F7L,0x4D157A0CL,0x4D157A0CL,0x78B071F7L},{0UL,0x8673BE5AL,0xD967FC84L,1UL,0x8673BE5AL}},{{0x341CD021L,0x78B071F7L,1UL,0x0197E20DL,0x78B071F7L},{4294967291UL,0x058FF05BL,0xD967FC84L,0xD967FC84L,0x058FF05BL},{0x341CD021L,0x881D9714L,0x4D157A0CL,0x0197E20DL,0x881D9714L},{0UL,0x058FF05BL,4294967295UL,1UL,0x058FF05BL},{0UL,0x78B071F7L,0x4D157A0CL,0x4D157A0CL,0x78B071F7L}},{{0UL,0x8673BE5AL,0xD967FC84L,1UL,0x8673BE5AL},{0x341CD021L,0x78B071F7L,1UL,0x0197E20DL,0x78B071F7L},{4294967291UL,0x058FF05BL,0xD967FC84L,0xD967FC84L,0x058FF05BL},{0x341CD021L,0x881D9714L,0x4D157A0CL,0x0197E20DL,0x881D9714L},{0UL,0x058FF05BL,4294967295UL,1UL,0x058FF05BL}},{{0UL,0x78B071F7L,0x4D157A0CL,0x4D157A0CL,0x78B071F7L},{0UL,0x8673BE5AL,0xD967FC84L,1UL,0x8673BE5AL},{0x341CD021L,0x78B071F7L,1UL,0x0197E20DL,0x78B071F7L},{4294967291UL,0x058FF05BL,0xD967FC84L,0xD967FC84L,0x058FF05BL},{0x341CD021L,0x881D9714L,0x4D157A0CL,0x0197E20DL,0x881D9714L}}};
    uint64_t l_1018 = 18446744073709551608UL;
    int32_t *l_1057 = &l_934;
    int32_t *l_1058 = &g_2[1][2][0];
    int32_t *l_1059 = &l_935[5];
    int32_t *l_1060 = (void*)0;
    int32_t *l_1061 = (void*)0;
    int32_t *l_1062 = (void*)0;
    int32_t *l_1063 = (void*)0;
    int32_t *l_1064[3];
    uint64_t l_1065 = 0x64752F24B9AA3442LL;
    int16_t l_1092 = (-9L);
    const uint32_t **l_1101 = (void*)0;
    union U0 l_1223 = {0x951C2C61L};
    int32_t *l_1308 = &l_935[3];
    uint32_t l_1341 = 0x552B2F47L;
    int8_t l_1371 = (-6L);
    const uint16_t **l_1373 = (void*)0;
    uint64_t **l_1391 = &g_970;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1064[i] = &l_931;
    for (g_6 = 26; (g_6 >= 5); g_6 = safe_sub_func_int64_t_s_s(g_6, 1))
    {
        int32_t l_836 = 0x1687CCF9L;
        int32_t l_848 = (-4L);
        int64_t *l_898 = &g_489;
        int16_t *l_900 = &g_897;
        int32_t l_936 = 6L;
        union U0 ** const *l_955[10] = {&g_510,(void*)0,(void*)0,(void*)0,(void*)0,&g_510,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_964 = 3L;
        int32_t l_982 = 0L;
        int8_t l_1014 = 0xCCL;
        int i;
        if (((**g_89) ^= 0xF4F9F4EAL))
        {
            if ((*g_218))
                break;
        }
        else
        {
            int32_t l_841 = 0x5FF7EE0EL;
            uint32_t l_886 = 18446744073709551610UL;
            (*g_100) = (void*)0;
            if (((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(p_51, (safe_div_func_uint8_t_u_u((p_51 > (safe_lshift_func_int16_t_s_s((~((l_836 & (((l_848 = ((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((1UL && 0xE1FBDC73L), l_841)), (safe_mod_func_int32_t_s_s(l_844, ((**g_89) ^= (safe_sub_func_int64_t_s_s(0x14D795C7A3274913LL, (((+0UL) < g_202[5][0]) , 0x8FB08160B5AA36B5LL)))))))) != 0x7CL)) , (void*)0) == (void*)0)) , 8L)), g_668))), 5UL)))) > p_51), p_54.f1)) < l_841))
            {
                return g_244;
            }
            else
            {
                uint16_t l_857 = 0xC4A8L;
                int32_t l_891 = 1L;
                if ((**g_89))
                    break;
                for (g_821 = 20; (g_821 > 2); --g_821)
                {
                    uint64_t l_859[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_859[i] = 0x879D6B08412B0646LL;
                    (**g_89) = (((0x24L & 0x14L) >= (safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((l_857 , (~((*g_458) = 0xA458D6BCL))), 0x524D1C9EL)), 9)) , (l_859[1] != (safe_sub_func_int8_t_s_s((l_836 > (&g_89 != (void*)0)), 251UL)))), g_509))) >= p_54.f1);
                }
                for (p_51 = 0; (p_51 <= (-14)); p_51 = safe_sub_func_int8_t_s_s(p_51, 7))
                {
                    uint8_t l_864 = 255UL;
                    if (l_864)
                    {
                        uint16_t *l_890[3];
                        int16_t *l_892 = (void*)0;
                        int16_t *l_893 = (void*)0;
                        int16_t *l_894 = (void*)0;
                        int16_t *l_895 = (void*)0;
                        int16_t *l_896 = &g_897;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_890[i] = &g_447;
                        l_848 |= (((*l_896) |= (((void*)0 == &g_202[5][0]) | (p_54.f0 >= (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((safe_sub_func_int16_t_s_s((((+(p_51 | (((safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(0xB53822636FBEBFDELL, (p_54.f1 , l_864))), ((safe_sub_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s((l_891 |= (safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s(l_886, (safe_sub_func_uint8_t_u_u((!((((*g_100) = (*g_100)) == p_50) != 1UL)), g_106[3])))) , 1L), 5))), 0)) || 255UL) | g_244), 2UL)) | l_864))) ^ l_844) , l_886))) , l_836) , p_54.f1), p_54.f1)) ^ 0UL), p_51)), g_244)), l_886))))) > p_51);
                    }
                    else
                    {
                        (*g_100) = p_53;
                    }
                }
            }
        }
        if (((*g_90) ^= (((*l_898) = p_54.f0) > ((l_900 = l_899) != &g_897))))
        {
            return g_817;
        }
        else
        {
            union U0 *l_905[6] = {&g_76,&g_76,&g_76,&g_76,&g_76,&g_76};
            union U0 *l_907 = &g_908;
            int32_t l_922[6][9][4] = {{{0x69AB6CE7L,(-7L),7L,0xB8E4A5B6L},{0x69AB6CE7L,7L,0x69AB6CE7L,0L},{(-7L),0xB8E4A5B6L,0L,0L},{7L,7L,4L,0xB8E4A5B6L},{0xB8E4A5B6L,(-7L),4L,(-7L)},{7L,0x69AB6CE7L,0L,4L},{(-7L),0x69AB6CE7L,0x69AB6CE7L,(-7L)},{0x69AB6CE7L,(-7L),7L,0xB8E4A5B6L},{0x69AB6CE7L,7L,0x69AB6CE7L,0L}},{{(-7L),0xB8E4A5B6L,0L,0L},{7L,7L,4L,0xB8E4A5B6L},{0xB8E4A5B6L,(-7L),4L,(-7L)},{7L,0x69AB6CE7L,0L,4L},{(-7L),0x69AB6CE7L,0x69AB6CE7L,(-7L)},{0x69AB6CE7L,(-7L),7L,0xB8E4A5B6L},{0x69AB6CE7L,7L,0x69AB6CE7L,0L},{(-7L),0xB8E4A5B6L,0L,0L},{7L,7L,4L,0xB8E4A5B6L}},{{0xB8E4A5B6L,(-7L),4L,(-7L)},{7L,0xB8E4A5B6L,4L,7L},{0x69AB6CE7L,0xB8E4A5B6L,0xB8E4A5B6L,0x69AB6CE7L},{0xB8E4A5B6L,0x69AB6CE7L,0L,0L},{0xB8E4A5B6L,0L,0xB8E4A5B6L,4L},{0x69AB6CE7L,0L,4L,4L},{0L,0L,7L,0L},{0L,0x69AB6CE7L,7L,0x69AB6CE7L},{0L,0xB8E4A5B6L,4L,7L}},{{0x69AB6CE7L,0xB8E4A5B6L,0xB8E4A5B6L,0x69AB6CE7L},{0xB8E4A5B6L,0x69AB6CE7L,0L,0L},{0xB8E4A5B6L,0L,0xB8E4A5B6L,4L},{0x69AB6CE7L,0L,4L,4L},{0L,0L,7L,0L},{0L,0x69AB6CE7L,7L,0x69AB6CE7L},{0L,0xB8E4A5B6L,4L,7L},{0x69AB6CE7L,0xB8E4A5B6L,0xB8E4A5B6L,0x69AB6CE7L},{0xB8E4A5B6L,0x69AB6CE7L,0L,0L}},{{0xB8E4A5B6L,0L,0xB8E4A5B6L,4L},{0x69AB6CE7L,0L,4L,4L},{0L,0L,7L,0L},{0L,0x69AB6CE7L,7L,0x69AB6CE7L},{0L,0xB8E4A5B6L,4L,7L},{0x69AB6CE7L,0xB8E4A5B6L,0xB8E4A5B6L,0x69AB6CE7L},{0xB8E4A5B6L,0x69AB6CE7L,0L,0L},{0xB8E4A5B6L,0L,0xB8E4A5B6L,4L},{0x69AB6CE7L,0L,4L,4L}},{{0L,0L,7L,0L},{0L,0x69AB6CE7L,7L,0x69AB6CE7L},{0L,0xB8E4A5B6L,4L,7L},{0x69AB6CE7L,0xB8E4A5B6L,0xB8E4A5B6L,0x69AB6CE7L},{0xB8E4A5B6L,0x69AB6CE7L,0L,0L},{0xB8E4A5B6L,0L,0xB8E4A5B6L,4L},{0x69AB6CE7L,0L,4L,4L},{0L,0L,7L,0L},{0L,0x69AB6CE7L,7L,0x69AB6CE7L}}};
            int32_t l_1050 = 0x89D7DD55L;
            int i, j, k;
            for (g_447 = 0; (g_447 <= 0); g_447 += 1)
            {
                union U0 *l_906[4][9] = {{(void*)0,&g_76,(void*)0,&g_76,&g_76,&g_76,(void*)0,&g_76,(void*)0},{&g_76,&g_76,&g_76,(void*)0,(void*)0,&g_76,&g_76,&g_76,(void*)0},{(void*)0,&g_76,(void*)0,&g_76,(void*)0,&g_76,&g_76,&g_76,&g_76},{&g_76,(void*)0,&g_76,&g_76,&g_76,(void*)0,&g_76,&g_76,(void*)0}};
                int32_t l_925 = 0L;
                int32_t l_928[3];
                int32_t *l_929 = &l_836;
                int32_t *l_930[10];
                uint64_t l_937 = 18446744073709551615UL;
                int8_t *l_950 = &g_506;
                union U0 ***l_954 = &g_510;
                union U0 ****l_953 = &l_954;
                int32_t *l_956 = &g_818;
                int8_t *l_957 = &g_908.f1;
                uint16_t *l_958 = &g_959[5][2];
                uint64_t *l_967 = &g_662;
                uint64_t * const *l_966 = &l_967;
                uint64_t * const **l_965[9];
                const int32_t ***l_1008 = (void*)0;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_928[i] = 0xD81F2A2FL;
                for (i = 0; i < 10; i++)
                    l_930[i] = &l_925;
                for (i = 0; i < 9; i++)
                    l_965[i] = &l_966;
                (*g_100) = p_52;
                for (g_348 = 0; (g_348 <= 0); g_348 += 1)
                {
                    uint8_t *l_919 = &g_161;
                    uint8_t *l_926 = &g_927[2];
                    (**g_89) ^= (safe_div_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((((*l_926) |= (((g_188 > (l_905[4] == (l_907 = l_906[3][5]))) < (safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((l_925 = (safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u(((*l_919) ^= 3UL), (safe_mod_func_uint64_t_u_u(l_922[2][4][3], p_54.f0)))) == (l_923 != &g_100)), (+(0x0CL <= 255UL)))), (**g_514)))), 0xDA0DL)), p_51))) || (-1L))) || p_54.f0) ^ 1UL), l_848)) == 0x09L), l_928[2]));
                }
                l_937++;
                if (((1UL != (safe_mul_func_int8_t_s_s((0x17D7L | ((*l_958) = (((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((((l_936 |= (safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((*l_950) = 0xD1L), (((void*)0 == &l_922[2][4][3]) , g_202[4][0]))), ((safe_div_func_int64_t_s_s((((*l_957) = ((g_2[2][6][3] , p_53) == ((l_836 |= ((*l_956) = ((((*l_953) = &g_510) == l_955[5]) , l_848))) , (void*)0))) , l_836), 1L)) <= 18446744073709551615UL)))) , 0x86L) | g_244), 0UL)), l_848)) == g_188) == 1UL))), p_51))) || (*l_929)))
                {
                    uint64_t l_973 = 0xD2ADCAA5FC8915A2LL;
                    union U0 **l_1011 = &l_905[4];
                    int32_t l_1012 = 3L;
                    int32_t l_1013[1][10] = {{0x4B7621E2L,0x67AD1D4EL,0x4B7621E2L,0x84960D9DL,0x84960D9DL,0x4B7621E2L,0x67AD1D4EL,0x4B7621E2L,0x84960D9DL,0x84960D9DL}};
                    uint16_t l_1015[5][5][9] = {{{0x57A0L,1UL,0x6850L,0x6850L,1UL,0x57A0L,0x57A0L,0xB427L,0x3A03L},{0x179DL,0xB427L,0UL,65535UL,0xB143L,0x822CL,0x6850L,0x6A77L,0xD534L},{65535UL,0UL,0xB427L,0x179DL,0x57A0L,65534UL,0x57A0L,0x179DL,0xB427L},{0x6A77L,0x6A77L,0xAAFAL,0x6850L,0x57A0L,0xB427L,0x3A03L,0xD534L,0xDC98L},{0xB8DDL,1UL,0xD534L,2UL,0xB143L,9UL,0x822CL,0x57A0L,0x57A0L}},{{0xDC98L,4UL,0xAAFAL,0xB143L,0xAAFAL,4UL,0xDC98L,0x56C7L,0x9206L},{0xDC98L,0x822CL,0xB427L,4UL,0x179DL,0UL,9UL,65534UL,0x6850L},{0xB8DDL,0x57A0L,0UL,65535UL,0x56C7L,0x179DL,0x179DL,0x56C7L,65535UL},{0x6A77L,0xB8DDL,0x6A77L,0x9206L,1UL,0x179DL,0xB143L,0x57A0L,0xAAFAL},{65535UL,65535UL,1UL,0xB427L,65534UL,0UL,0xB8DDL,0xD534L,9UL}},{{0x179DL,2UL,4UL,0x9206L,0x9206L,4UL,2UL,0x179DL,0x6A77L},{0x6850L,2UL,0x822CL,65535UL,0x3A03L,9UL,1UL,0x6A77L,0x56C7L},{2UL,65535UL,0x57A0L,4UL,0x6A77L,0xB427L,0xD534L,0xB427L,0x6A77L},{0xB143L,0xB8DDL,0xB8DDL,0xB143L,4UL,65534UL,0xD534L,0x6850L,9UL},{4UL,0x57A0L,65535UL,2UL,0xB8DDL,0x822CL,1UL,0UL,0xAAFAL}},{{65535UL,0x822CL,2UL,0x6850L,4UL,0x6850L,2UL,0x822CL,65535UL},{0x9206L,4UL,2UL,0x179DL,0x6A77L,0xDC98L,0xB8DDL,65535UL,0x6850L},{0xB427L,1UL,65535UL,65535UL,0x3A03L,0x9206L,0xB143L,0xB143L,0x9206L},{0x9206L,0x6A77L,0xB8DDL,0x6A77L,0x9206L,1UL,0x179DL,0xB143L,0x57A0L},{65535UL,0UL,0x57A0L,0xB8DDL,65534UL,0xAAFAL,9UL,65535UL,0xDC98L}},{{4UL,0xB427L,0x822CL,0xDC98L,1UL,1UL,0xDC98L,0x822CL,0xB427L},{0xB143L,0xAAFAL,4UL,0xDC98L,0x56C7L,0x9206L,0x822CL,65535UL,65535UL},{0x9206L,65535UL,0xAAFAL,5UL,2UL,0UL,0xB143L,0x6A77L,0xB143L},{0x6A77L,0xD534L,0x56C7L,0x56C7L,0xD534L,0x6A77L,0x6850L,0x822CL,0xB143L},{2UL,0x822CL,65535UL,0x3A03L,9UL,1UL,0x6A77L,0x56C7L,65535UL}}};
                    int i, j, k;
                    (**g_89) |= (l_899 != (((((safe_mod_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u((p_51 >= (((l_964 , ((((l_965[4] == g_968[0][1]) >= (safe_sub_func_uint32_t_u_u((l_982 = (p_54.f1 >= ((l_973 < ((*l_967) |= (((safe_rshift_func_int16_t_s_s(l_973, 2)) && (safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((*l_957) = (((safe_add_func_uint32_t_u_u((**g_514), l_922[2][4][3])) , l_973) >= 18446744073709551612UL)), l_836)), 13))) | 0xCC78761D1F028E87LL))) , 7L))), l_936))) && 3L) , p_54.f1)) < 0x047EL) > l_848)), 18446744073709551610UL)) | (-1L)) > 1L), g_45)) | g_506) == 1L) & l_973) , l_899));
                    for (l_925 = 2; (l_925 <= 9); l_925 += 1)
                    {
                        int32_t l_1009[8] = {3L,3L,3L,3L,3L,3L,3L,3L};
                        int i, j;
                        (*l_929) = ((0xF9L > (0x7689DA3BL >= (safe_div_func_int32_t_s_s(0L, g_959[(g_447 + 5)][(g_447 + 2)])))) ^ g_959[(g_447 + 6)][(g_447 + 2)]);
                        (**g_89) = (((*l_899) = (((safe_lshift_func_int8_t_s_s(g_442, 0)) < ((safe_mul_func_uint8_t_u_u((&g_511 == ((((*l_957) = (~0x0C481657C4283B49LL)) , ((((safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(0xC5BB8422B5D50A17LL, (((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(0xEC4AC1016C0D60D0LL, (l_1009[1] = ((((*g_100) = (*g_100)) != p_50) | (((safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(((*l_967) = l_973), ((safe_div_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s((l_1008 == (void*)0), g_122)) <= 0xB402L), p_54.f1)) == l_973))), 3)) | 0x51F0L) , g_927[0]))))), 254UL)), 0x867AC54DL)) > l_1010[3][4][2]) == l_973))), l_922[2][7][0])) || p_54.f0) != l_936) | 1UL)) , l_1011)), g_817)) == p_54.f1)) ^ l_836)) > p_54.f1);
                        ++l_1015[2][2][0];
                        if (l_922[4][8][1])
                            break;
                    }
                }
                else
                {
                    if ((*g_218))
                        break;
                    l_1018--;
                    (*g_100) = (*g_100);
                }
            }
            for (l_836 = 0; (l_836 != 0); l_836 = safe_add_func_int16_t_s_s(l_836, 7))
            {
                uint32_t **l_1028[3];
                uint64_t **l_1048 = &g_970;
                int32_t l_1049 = (-1L);
                int i;
                for (i = 0; i < 3; i++)
                    l_1028[i] = &g_458;
            }
        }
    }
    l_1065--;
    for (g_347 = 6; (g_347 != (-13)); g_347--)
    {
        int32_t l_1087 = 0xA5DD59DBL;
        int32_t l_1088 = 1L;
        int32_t l_1091 = 7L;
        int32_t l_1097[1][3];
        int32_t * const *l_1113 = &g_350;
        int32_t l_1160 = 0x67270BC0L;
        union U0 *l_1182 = (void*)0;
        uint64_t l_1210[7] = {0x701E565F01F4D644LL,0xAB324A0FF2DEDD74LL,0xAB324A0FF2DEDD74LL,0x701E565F01F4D644LL,0xAB324A0FF2DEDD74LL,0xAB324A0FF2DEDD74LL,0x701E565F01F4D644LL};
        union U0 ***l_1245[1];
        union U0 ****l_1244 = &l_1245[0];
        uint16_t *l_1252[5] = {&g_447,&g_447,&g_447,&g_447,&g_447};
        int32_t **l_1299[7] = {&l_1058,&l_1064[2],&l_1064[2],&l_1058,&l_1064[2],&l_1064[2],&l_1058};
        int32_t *l_1427 = &g_817;
        uint32_t l_1457 = 0x98CB2535L;
        int64_t l_1458 = 0xC0ACB65673773C0ALL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1097[i][j] = (-7L);
        }
        for (i = 0; i < 1; i++)
            l_1245[i] = &g_510;
        for (g_506 = 2; (g_506 >= 0); g_506 -= 1)
        {
            uint64_t l_1085 = 18446744073709551606UL;
            int32_t l_1093 = (-1L);
            int32_t l_1095[9][4][4] = {{{0L,0xB9AC2E1EL,0xAF09A345L,0x63CE6893L},{0L,8L,(-1L),0L},{0x02C0D44DL,0L,1L,(-6L)},{1L,(-6L),9L,(-1L)}},{{0x6B9ECD12L,0xEBB7472BL,0L,0xB9AC2E1EL},{0xB38360E4L,0x69479B14L,0x69981583L,(-6L)},{0x74E25999L,0xCF8C4AE6L,0L,0x0F5B7F0DL},{(-2L),8L,0L,0xE271BC16L}},{{0xEBB7472BL,(-1L),0x63CE6893L,(-2L)},{(-1L),0x02C0D44DL,0xAEB9CA6FL,0xAEB9CA6FL},{(-2L),(-2L),0x7D4121CFL,1L},{0L,0L,0x69981583L,0xCF8C4AE6L}},{{0xAEB9CA6FL,(-9L),(-6L),0x69981583L},{0x6B9ECD12L,(-9L),0x98CB4BE7L,0xCF8C4AE6L},{(-9L),0L,1L,1L},{0L,(-2L),0x59760A39L,0xAEB9CA6FL}},{{0L,0x02C0D44DL,0x5CDD9BDFL,(-2L)},{0xCF8C4AE6L,(-1L),0xAF09A345L,0xE271BC16L},{0x0F5B7F0DL,8L,0x59760A39L,0x0F5B7F0DL},{0x02C0D44DL,0xCF8C4AE6L,(-4L),(-6L)}},{{(-9L),0x69479B14L,9L,0xB9AC2E1EL},{0x69981583L,0xEBB7472BL,(-6L),(-1L)},{0xB38360E4L,(-6L),1L,(-6L)},{0L,0L,0L,0L}},{{9L,8L,0xAEB9CA6FL,0x63CE6893L},{0xEBB7472BL,0xB9AC2E1EL,1L,(-2L)},{0xEBB7472BL,0L,0xAEB9CA6FL,0xB38360E4L},{9L,(-2L),0L,0xAF09A345L}},{{0L,(-4L),1L,0xCF8C4AE6L},{0xB38360E4L,1L,(-6L),0x6B9ECD12L},{0x69981583L,(-9L),9L,0L},{(-9L),(-4L),(-4L),1L}},{{0x02C0D44DL,9L,0x59760A39L,0xB38360E4L},{0x0F5B7F0DL,0x02C0D44DL,0xAF09A345L,1L},{0x0F5B7F0DL,(-1L),0x02C0D44DL,0xAEB9CA6FL},{0x74E25999L,0L,0L,0x74E25999L}}};
            int i, j, k;
            for (l_931 = 0; (l_931 <= 3); l_931 += 1)
            {
                for (g_897 = 0; (g_897 <= 3); g_897 += 1)
                {
                    int i;
                    (*l_923) = &g_101[0];
                    return g_106[g_897];
                }
            }
            for (l_931 = 2; (l_931 >= 0); l_931 -= 1)
            {
                int32_t l_1086 = 0x18BE1917L;
                int32_t l_1089 = (-1L);
                int32_t l_1090[3][9] = {{0x508A07F7L,0x819F06A1L,0x31A09A3DL,0xE34739B2L,0xE34739B2L,0x31A09A3DL,0x819F06A1L,0x508A07F7L,0x3AE54895L},{1L,0xE34739B2L,(-1L),0x508A07F7L,1L,0x819F06A1L,0x819F06A1L,1L,0x508A07F7L},{0x1E059757L,1L,0x1E059757L,0xF6EB9796L,0x819F06A1L,0xE34739B2L,(-10L),0x3AE54895L,0x3AE54895L}};
                union U0 ***l_1105 = &g_510;
                union U0 ****l_1104[1];
                uint32_t **l_1106 = &g_458;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1104[i] = &l_1105;
                if ((safe_div_func_int8_t_s_s(((void*)0 == &g_457), ((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((g_106[(g_506 + 1)] , (p_54.f1 && (*g_970))), (g_82 != (((+((safe_div_func_int16_t_s_s(p_51, g_106[(g_506 + 1)])) | (g_106[(g_506 + 1)] ^ 18446744073709551610UL))) && g_106[(g_506 + 1)]) ^ g_818)))) || p_54.f0), p_54.f1)), l_1085)) <= 3UL), 1)), p_54.f0)) & p_54.f0))))
                {
                    return g_2[1][2][0];
                }
                else
                {
                    int32_t l_1094[5][1][4] = {{{0x150D86B7L,0x76A878F9L,0x2CD93A18L,(-2L)}},{{0L,(-1L),0x900FE387L,(-1L)}},{{(-1L),0x2CD93A18L,0x150D86B7L,(-1L)}},{{0x150D86B7L,(-1L),(-2L),(-2L)}},{{0x76A878F9L,0x76A878F9L,0x900FE387L,0L}}};
                    int32_t l_1096[5][8] = {{(-1L),(-1L),(-1L),(-1L),(-1L),0x897397E7L,(-1L),0x6F73177DL},{0x319FB709L,0L,0x897397E7L,1L,(-1L),0x93D2B183L,0x6F73177DL,0x93D2B183L},{0L,0L,(-1L),0L,0L,0x897397E7L,(-1L),0L},{0x897397E7L,(-1L),0L,1L,9L,(-1L),0L,0L},{0x6F73177DL,0xEAC3D12CL,0L,0L,0xEAC3D12CL,0x6F73177DL,(-1L),9L}};
                    int i, j, k;
                    for (l_844 = 2; (l_844 >= 0); l_844 -= 1)
                    {
                        if (g_106[(g_506 + 1)])
                            break;
                    }
                    g_1098--;
                    (*l_1058) &= (((0x7533L && 4UL) , l_1101) == ((18446744073709551610UL | (((((((*g_510) = &p_54) == &g_908) , (g_202[5][0] <= (safe_rshift_func_int8_t_s_s(((((void*)0 == l_1104[0]) | p_54.f0) | l_1085), 6)))) == 0xC6L) ^ g_106[(g_506 + 1)]) == 0x01EEL)) , l_1106));
                }
            }
        }
    }
    return p_54.f0;
}







static int32_t * func_55(union U0 p_56, int32_t * p_57, const int32_t p_58, int32_t * p_59)
{
    int8_t *l_824 = &g_442;
    for (g_6 = 0; (g_6 <= (-13)); g_6 = safe_sub_func_int8_t_s_s(g_6, 9))
    {
        return (*g_100);
    }
    (*p_59) = ((*g_90) = (p_56.f1 && (l_824 != l_824)));
    return (*g_100);
}







static int32_t * func_61(int32_t * p_62)
{
    uint32_t *l_619 = &g_357;
    uint32_t *l_620[8];
    int32_t l_623 = 0x01C0B109L;
    const union U0 ** const *l_651 = (void*)0;
    union U0 ***l_657 = &g_510;
    const uint64_t *l_667 = &g_668;
    const uint64_t **l_666[5][1];
    int32_t l_741 = 0L;
    int32_t l_742[1][9] = {{0x8911588DL,0x8911588DL,0x8911588DL,0x8911588DL,0x8911588DL,0x8911588DL,0x8911588DL,0x8911588DL,0x8911588DL}};
    int i, j;
    for (i = 0; i < 8; i++)
        l_620[i] = &g_357;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_666[i][j] = &l_667;
    }
lbl_642:
    for (g_348 = 0; (g_348 >= 0); g_348 -= 1)
    {
        uint32_t **l_621 = (void*)0;
        uint32_t **l_622 = &l_620[5];
        l_623 = (((*g_457) = l_619) != ((*l_622) = l_620[2]));
        for (g_244 = 0; (g_244 <= 0); g_244 += 1)
        {
            (*g_100) = p_62;
            (*g_90) &= 0x2F9093B5L;
        }
    }
    for (g_244 = 0; (g_244 == (-13)); --g_244)
    {
        uint8_t l_626 = 0UL;
        int32_t *l_629 = (void*)0;
        const uint64_t l_656 = 0x16BB663294D82974LL;
        union U0 **l_659 = &g_511;
        uint64_t l_695 = 1UL;
        int32_t l_739[4] = {1L,1L,1L,1L};
        int16_t l_743 = 0x2DEDL;
        uint32_t l_748 = 0x6AC0AB3FL;
        uint32_t ***l_790 = (void*)0;
        uint8_t l_797 = 255UL;
        int32_t * const l_816[4] = {&g_817,&g_817,&g_817,&g_817};
        int32_t * const *l_815 = &l_816[3];
        int32_t * const **l_814 = &l_815;
        int32_t * const ***l_813[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        --l_626;
        (*g_100) = l_629;
        for (g_348 = 0; (g_348 <= 0); g_348 += 1)
        {
            int32_t l_632 = 0x6603004EL;
            int16_t *l_635[7];
            int i;
            for (i = 0; i < 7; i++)
                l_635[i] = &g_106[3];
            (*g_90) = (safe_sub_func_int64_t_s_s(l_632, (safe_rshift_func_int16_t_s_u((g_106[3] |= l_632), ((safe_add_func_int16_t_s_s(l_623, 0x865EL)) & 7UL)))));
        }
        if ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(((*g_510) != (*g_510)), 5)), 6)))
        {
            const int32_t ***l_643 = (void*)0;
            union U0 ***l_652 = &g_510;
            union U0 ***l_658 = &g_510;
            uint64_t *l_660 = &g_188;
            uint64_t *l_661 = &g_662;
            uint64_t * const l_665 = (void*)0;
            uint64_t * const *l_664[6] = {&l_665,&l_665,&l_665,&l_665,&l_665,&l_665};
            uint64_t * const **l_663 = &l_664[4];
            int32_t l_669 = 0x096BC149L;
            int i;
            for (g_6 = 0; (g_6 <= 7); g_6 += 1)
            {
                if (g_6)
                    goto lbl_642;
            }
            (*g_218) ^= (&g_100 != l_643);
            l_669 = ((safe_mod_func_uint32_t_u_u((**g_457), (*g_458))) && ((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((~(l_651 == (l_623 , l_652))), (((*l_663) = ((safe_lshift_func_uint8_t_u_u(((((*l_661) = ((*l_660) ^= ((((l_623 ^ (((+l_656) && (((l_658 = ((0UL < (l_623 , (-6L))) , l_657)) != l_652) >= l_623)) || 0xD0L)) , l_659) != (*l_652)) , 0x1147AAE7E7417316LL))) & 0xFEEFB523C39C2160LL) > g_2[2][1][4]), g_509)) , (void*)0)) == l_666[4][0]))), 0xC7D2L)) == l_669));
        }
        else
        {
            const uint8_t l_696[5][8] = {{255UL,255UL,0xEEL,254UL,0UL,255UL,254UL,0x4AL},{0UL,255UL,254UL,0x4AL,254UL,255UL,0UL,254UL},{0x9BL,255UL,255UL,0x9BL,0xA8L,255UL,255UL,255UL},{254UL,0xA8L,0xEEL,0xEEL,0xA8L,254UL,255UL,0x4AL},{0x9BL,255UL,251UL,255UL,254UL,251UL,0xA8L,251UL}};
            int16_t *l_711 = (void*)0;
            int32_t ***l_719 = &g_349;
            int32_t l_736 = 0x6EFE9D30L;
            int32_t l_737[6][8] = {{0xFD1E5D66L,0xC2F9BE31L,0x7AC97E01L,0xFD1E5D66L,0L,(-6L),0L,0xFD1E5D66L},{0x454E7F7BL,0L,0x454E7F7BL,0xA210E639L,(-1L),0L,0xA210E639L,0xC2F9BE31L},{0L,0xFFB11A7FL,0L,0L,0x1C8397B4L,0x1428CE79L,(-1L),0xFFB11A7FL},{0L,0x1428CE79L,(-1L),0xFFB11A7FL,0xFFB11A7FL,(-1L),0x1428CE79L,0x1C8397B4L},{(-6L),0x454E7F7BL,0L,7L,0x1C8397B4L,0x7AC97E01L,(-6L),0x1428CE79L},{0x454E7F7BL,7L,(-6L),0L,7L,0x7AC97E01L,0xFFB11A7FL,0x7AC97E01L}};
            int8_t l_747[8] = {1L,1L,0L,1L,1L,0L,1L,1L};
            uint64_t *l_772[1][8][6] = {{{&l_695,&g_188,&l_695,&g_662,(void*)0,&g_662},{&l_695,&g_188,&l_695,&g_662,&l_695,&g_662},{&l_695,&g_188,&l_695,&g_662,(void*)0,&g_662},{&l_695,&g_188,&l_695,&g_662,&l_695,&g_662},{&l_695,&g_188,&l_695,&g_662,(void*)0,&g_662},{&l_695,&g_188,&l_695,&g_662,&l_695,&g_662},{&l_695,&g_188,&l_695,&g_662,(void*)0,&g_662},{&l_695,&g_188,&l_695,&g_662,&l_695,&g_662}}};
            uint64_t **l_771[1][4] = {{&l_772[0][1][4],&l_772[0][1][4],&l_772[0][1][4],&l_772[0][1][4]}};
            int32_t * const *l_812 = (void*)0;
            int32_t * const **l_811 = &l_812;
            int32_t * const ***l_810 = &l_811;
            int i, j, k;
            for (g_45 = 0; (g_45 >= 0); g_45 -= 1)
            {
                uint8_t l_670 = 0xF2L;
                int16_t l_697[4];
                int32_t l_708[8][4][3] = {{{(-2L),(-1L),(-1L)},{0x35E12EF8L,0x35E12EF8L,0x558D3E14L},{0L,0xB8A81156L,0L},{0x35E12EF8L,2L,2L}},{{(-2L),0xB8A81156L,(-1L)},{(-4L),0x35E12EF8L,2L},{0L,(-1L),0L},{(-4L),2L,0x558D3E14L}},{{(-2L),(-1L),(-1L)},{0x35E12EF8L,0x35E12EF8L,0x558D3E14L},{0L,0xB8A81156L,0L},{0x35E12EF8L,2L,2L}},{{(-2L),0xB8A81156L,(-1L)},{(-4L),0x35E12EF8L,2L},{0L,(-1L),0L},{(-4L),2L,0x558D3E14L}},{{(-2L),(-1L),(-1L)},{0x35E12EF8L,0x35E12EF8L,0x558D3E14L},{0L,0xB8A81156L,0L},{0x35E12EF8L,2L,2L}},{{(-2L),0xB8A81156L,(-1L)},{(-4L),0x35E12EF8L,2L},{0L,(-1L),0L},{(-4L),2L,0x558D3E14L}},{{(-2L),(-1L),(-1L)},{0x35E12EF8L,0x35E12EF8L,0x558D3E14L},{0L,0xB8A81156L,0L},{0x35E12EF8L,2L,2L}},{{(-2L),0xB8A81156L,(-1L)},{(-4L),0x35E12EF8L,2L},{0L,(-1L),0L},{(-4L),2L,0x558D3E14L}}};
                int32_t l_764 = 3L;
                int16_t l_773 = (-1L);
                uint64_t **l_775[4];
                int16_t *l_796 = &g_106[3];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_697[i] = 0x4FD4L;
                for (i = 0; i < 4; i++)
                    l_775[i] = &l_772[0][1][4];
                for (l_626 = 0; (l_626 <= 0); l_626 += 1)
                {
                    uint8_t l_672 = 251UL;
                    uint64_t *l_704 = &g_662;
                    int16_t *l_712 = &g_106[3];
                    uint32_t ***l_724 = &g_461[8][0][0];
                    int32_t l_735 = 0x98E3829DL;
                    int32_t l_738 = (-1L);
                    int32_t l_740 = 0x430604E4L;
                    int32_t l_744 = 0x33693D2AL;
                    int32_t l_745 = 1L;
                    int32_t l_746[3][4][1] = {{{0xA377404CL},{0L},{0xA377404CL},{0L}},{{0xA377404CL},{0L},{0xA377404CL},{0L}},{{0xA377404CL},{0L},{0xA377404CL},{0L}}};
                    int i, j, k;
                    (**g_89) = l_670;
                    for (g_447 = 0; (g_447 <= 0); g_447 += 1)
                    {
                        uint8_t *l_671 = (void*)0;
                        int16_t *l_673 = &g_106[1];
                        uint32_t l_682[3][4][1] = {{{18446744073709551615UL},{0xC86B8F8DL},{1UL},{0xC86B8F8DL}},{{18446744073709551615UL},{3UL},{18446744073709551615UL},{0xC86B8F8DL}},{{1UL},{0xC86B8F8DL},{18446744073709551615UL},{3UL}}};
                        int i, j, k;
                        if ((**g_89))
                            break;
                        l_697[0] = ((((*l_673) &= (l_671 != (l_672 , (void*)0))) | ((safe_mod_func_uint32_t_u_u(((*l_619) |= (((((l_672 == (safe_sub_func_int16_t_s_s(l_623, (l_670 < (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((((l_682[0][2][0] && ((((((safe_lshift_func_int16_t_s_s((g_489 == (safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((((safe_div_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_82, l_695)), g_202[0][0])) ^ g_45), l_623)) == 0x6CL) == 1L), l_672)), l_696[3][6]))), 8)) ^ 18446744073709551609UL) <= 7L) , l_670) || 0x73F1A75B7916086ELL) <= l_682[0][3][0])) || l_670) > g_6) < l_672) == 0x642D0FB3FC007C92LL) , 0xB2L), 0x56L)), g_2[3][5][4])))))) ^ g_447) | l_670) || l_672) & l_623)), l_696[2][5])) , l_672)) , l_696[3][6]);
                    }
                    if ((((void*)0 != &g_511) , ((safe_sub_func_int8_t_s_s(l_623, g_2[3][7][1])) , (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((*l_704) ^= l_697[0]) <= (l_708[7][1][1] = (safe_sub_func_int8_t_s_s((g_122 >= (((void*)0 != g_707) || (g_202[(l_626 + 4)][l_626] |= (l_672 != 1UL)))), g_106[2])))), l_672)), l_696[3][6])))))
                    {
                        int8_t *l_725[3][8][9] = {{{&g_506,&g_244,&g_506,&g_244,&g_506,(void*)0,&g_506,&g_244,&g_506},{&g_76.f1,&g_506,&g_506,&g_244,&g_506,&g_506,&g_244,&g_244,&g_76.f1},{&g_76.f1,&g_244,&g_442,&g_244,&g_244,(void*)0,&g_244,&g_244,&g_442},{&g_76.f1,&g_76.f1,&g_506,&g_244,&g_506,&g_76.f1,&g_244,&g_244,&g_76.f1},{&g_506,&g_244,&g_506,&g_244,&g_506,(void*)0,&g_506,&g_244,&g_506},{&g_76.f1,&g_506,&g_506,&g_244,&g_506,&g_506,&g_244,&g_244,&g_76.f1},{&g_76.f1,&g_244,&g_442,&g_244,&g_244,(void*)0,&g_244,&g_244,&g_442},{&g_76.f1,&g_76.f1,&g_506,&g_244,&g_506,&g_76.f1,&g_244,&g_244,&g_76.f1}},{{&g_506,&g_244,&g_506,&g_244,&g_506,(void*)0,&g_506,&g_244,&g_506},{&g_76.f1,&g_506,&g_506,&g_244,&g_506,&g_506,&g_244,&g_244,&g_76.f1},{&g_76.f1,&g_244,&g_442,&g_244,&g_244,(void*)0,&g_244,&g_244,&g_442},{&g_76.f1,&g_76.f1,&g_506,&g_244,&g_506,&g_76.f1,&g_244,&g_244,&g_76.f1},{&g_506,&g_244,&g_506,&g_244,&g_506,(void*)0,&g_506,&g_244,&g_506},{&g_76.f1,&g_506,&g_506,&g_244,&g_506,&g_506,&g_244,&g_244,&g_76.f1},{&g_76.f1,&g_244,&g_442,&g_244,&g_244,(void*)0,&g_244,&g_244,&g_442},{&g_76.f1,&g_76.f1,&g_506,&g_244,&g_506,&g_76.f1,&g_244,&g_244,&g_76.f1}},{{&g_506,&g_244,&g_506,&g_244,&g_506,(void*)0,&g_506,&g_244,&g_506},{&g_76.f1,&g_506,&g_506,&g_244,&g_506,&g_506,&g_244,&g_244,&g_76.f1},{&g_76.f1,&g_244,&g_442,&g_244,&g_244,(void*)0,&g_244,&g_244,&g_442},{&g_76.f1,&g_76.f1,&g_506,&g_244,&g_506,&g_76.f1,&g_244,&g_442,&g_76.f1},{&g_76.f1,&g_506,&g_506,&g_244,&g_76.f1,&g_244,&g_76.f1,&g_244,&g_506},{&g_244,&g_76.f1,&g_506,&g_76.f1,(void*)0,&g_506,&g_442,&g_76.f1,&g_76.f1},{&g_506,&g_506,&g_76.f1,&g_244,&g_244,&g_244,&g_244,&g_244,&g_76.f1},{&g_244,&g_244,&g_506,&g_442,(void*)0,&g_76.f1,&g_442,&g_442,&g_76.f1}}};
                        int32_t ****l_732 = (void*)0;
                        int32_t ****l_733 = &l_719;
                        int i, j, k;
                        (*g_90) = ((g_202[(l_626 + 4)][l_626] , 0L) >= ((safe_mod_func_int32_t_s_s(((((l_712 = l_711) != l_711) & (l_697[2] && ((safe_mul_func_int8_t_s_s((+((safe_unary_minus_func_uint64_t_u(((*l_704) ^= ((0x77L && ((*g_90) , ((void*)0 == l_719))) & (**g_89))))) | 0x17FF5CF6L)), l_697[0])) , l_708[0][0][0]))) , (*g_218)), 0x1A2F1333L)) | 0x122CAC7F909FF525LL));
                        if (l_708[7][1][1])
                            break;
                        (*g_218) |= (((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(1UL, (l_708[2][2][0] = (l_724 == (void*)0)))), (safe_sub_func_uint64_t_u_u(g_509, (((safe_add_func_uint16_t_u_u((g_662 && l_697[0]), (safe_mod_func_int8_t_s_s(((((&g_349 != ((*l_733) = (void*)0)) && (g_347 != l_623)) , l_696[4][7]) && g_82), 8UL)))) ^ l_623) , 5L))))) && g_2[1][2][0]) , 0xC8DC8090L);
                    }
                    else
                    {
                        int32_t *l_734[10] = {&g_2[1][2][0],(void*)0,(void*)0,(void*)0,(void*)0,&g_2[1][2][0],(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        (**g_89) &= l_695;
                        l_748--;
                        if ((*g_218))
                            break;
                    }
                    for (l_670 = (-20); (l_670 < 59); ++l_670)
                    {
                        uint32_t ***l_758 = &g_461[8][0][0];
                        uint32_t ****l_759[4];
                        uint32_t l_761 = 7UL;
                        int16_t *l_774 = &l_697[3];
                        uint64_t ***l_776 = &l_775[0];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_759[i] = &l_758;
                        l_740 |= (((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(l_708[2][1][0], ((+((g_760[2][0][5] = l_758) != (l_761 , &g_514))) == ((safe_sub_func_int64_t_s_s((l_764 = l_744), ((g_106[1] = ((*l_774) = (((((safe_mul_func_int16_t_s_s((((*l_657) = &g_511) != (void*)0), ((((safe_rshift_func_uint16_t_u_s((((*g_218) &= (((safe_add_func_int64_t_s_s((((void*)0 != l_771[0][0]) , l_623), 18446744073709551606UL)) > 2UL) ^ l_773)) || l_747[6]), l_742[0][0])) & l_696[2][5]) != l_623) <= l_747[7]))) , l_737[2][6]) , (void*)0) != &l_771[0][0]) ^ l_745))) && g_506))) < g_447)))), l_741)) & l_761) == 1L);
                        (*l_776) = l_775[3];
                        if (g_447)
                            goto lbl_642;
                    }
                }
                l_623 &= l_742[0][0];
                (*g_218) = (safe_lshift_func_uint8_t_u_s((l_623 ^ (safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((!((((*l_796) = ((1L >= l_696[3][6]) , (((safe_rshift_func_int8_t_s_u(l_736, 5)) , (safe_rshift_func_uint16_t_u_s(((void*)0 == l_790), (safe_mod_func_int8_t_s_s(l_737[3][7], (safe_lshift_func_uint16_t_u_s((((*g_458) = ((((~18446744073709551615UL) , (((*g_349) == l_629) != l_737[1][4])) , l_741) == l_697[0])) >= l_748), 7))))))) | 1L))) ^ l_695) >= l_742[0][0])), g_442)) != l_737[2][1]), l_797)), 0UL))), 5));
                for (l_748 = 0; (l_748 <= 0); l_748 += 1)
                {
                    uint8_t *l_800 = (void*)0;
                    uint8_t *l_801 = &l_670;
                    int32_t * const ****l_809[7];
                    int32_t l_819 = 5L;
                    uint32_t *l_820[1][4] = {{&g_821,&g_821,&g_821,&g_821}};
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_809[i] = &g_808[0];
                    (*g_218) = (safe_mul_func_uint8_t_u_u(((*l_801) = g_106[1]), ((((l_741 = (g_821 = (safe_div_func_int16_t_s_s(((void*)0 == &l_666[g_45][g_45]), (safe_div_func_int64_t_s_s(((g_806 != (l_813[3] = (l_810 = g_808[0]))) & l_742[0][0]), ((l_819 ^ 18446744073709551615UL) && l_819))))))) , l_742[0][4]) , l_737[1][1]) > (-1L))));
                    for (l_623 = 0; (l_623 <= 3); l_623 += 1)
                    {
                        (*g_100) = p_62;
                    }
                }
            }
        }
    }
    return l_620[2];
}







static uint64_t func_63(int32_t * p_64)
{
    uint64_t l_77 = 0UL;
    uint16_t l_364 = 65534UL;
    int32_t l_365 = 0x03139AF6L;
    int32_t l_378 = 6L;
    int32_t l_382 = 0x517A315FL;
    int32_t l_384 = 0x863F72B5L;
    int32_t l_385 = 0x181A871AL;
    int32_t l_386[4][10] = {{9L,0x072CA420L,0x072CA420L,9L,0xEE8E13BCL,(-2L),1L,0xD5514FD3L,1L,(-2L)},{0x53FAB224L,(-1L),0xEE8E13BCL,(-1L),0x53FAB224L,5L,0x072CA420L,1L,1L,0x072CA420L},{0xD5514FD3L,5L,9L,9L,5L,0xD5514FD3L,1L,0x072CA420L,0x53FAB224L,0x072CA420L},{(-1L),9L,0x53FAB224L,1L,0x53FAB224L,9L,(-1L),1L,(-2L),(-2L)}};
    uint32_t l_401 = 4294967294UL;
    int32_t l_413 = (-5L);
    uint64_t l_470 = 1UL;
    uint32_t **l_513 = &g_458;
    union U0 ***l_565 = &g_510;
    int64_t *l_570[9][4] = {{&g_202[1][0],&g_202[1][0],(void*)0,&g_202[1][0]},{&g_202[4][0],&g_202[3][0],&g_202[4][0],(void*)0},{&g_202[4][0],(void*)0,(void*)0,&g_202[4][0]},{&g_202[1][0],(void*)0,&g_202[1][0],(void*)0},{(void*)0,&g_202[3][0],&g_202[1][0],&g_202[1][0]},{&g_202[1][0],&g_202[1][0],(void*)0,&g_202[1][0]},{&g_202[4][0],&g_202[3][0],&g_202[4][0],(void*)0},{&g_202[4][0],(void*)0,(void*)0,&g_202[4][0]},{&g_202[1][0],(void*)0,&g_202[1][0],(void*)0}};
    int8_t l_580 = (-2L);
    int32_t l_598 = 0x130A4CD5L;
    int16_t *l_604 = &g_106[3];
    int16_t **l_603 = &l_604;
    int32_t **l_610[5][4] = {{&g_218,&g_218,&g_218,&g_101[0]},{&g_218,(void*)0,&g_101[0],&g_218},{&g_101[0],&g_101[0],&g_101[0],&g_101[0]},{&g_218,&g_101[0],&g_218,&g_218},{&g_101[0],(void*)0,(void*)0,&g_101[0]}};
    int i, j;
    return g_76.f0;
}







static const int8_t func_67(int32_t * p_68, uint32_t p_69, const uint32_t p_70, int8_t p_71, int32_t * p_72)
{
    int32_t l_104 = (-7L);
    int32_t *l_114 = &g_45;
    uint32_t *l_123 = &g_122;
    int32_t l_162[10][8][3] = {{{0xAF6FDADEL,0x3EE7E032L,9L},{(-6L),0xA5975BB4L,0x327A7BC7L},{1L,0x1AEE45CAL,0L},{1L,0xE65A498EL,0x373232EFL},{(-10L),0x9E258E6FL,0x3EE7E032L},{1L,(-3L),1L},{0xEB8E824CL,9L,0L},{1L,0L,(-2L)}},{{0x4A546A7AL,0L,0xA85E0716L},{1L,0x27FE7776L,1L},{0x6151272DL,0x6151272DL,(-2L)},{0L,1L,(-1L)},{2L,0L,0x9AB8218DL},{0x1C7F1A52L,0x4AA7906BL,4L},{0xAEDB7C0CL,(-1L),0x1AEE45CAL},{(-1L),0x1C7F1A52L,8L}},{{0xCF386810L,(-1L),(-1L)},{1L,0x5887891BL,1L},{(-3L),0x21FAC706L,0x6151272DL},{0x21946878L,(-1L),0x09B5FE7BL},{0xAEDB7C0CL,0L,(-2L)},{0xB1238483L,0x27FE7776L,(-2L)},{0x9AB8218DL,(-2L),0xABC4B9DAL},{1L,0x53AD90D2L,0x26349847L}},{{1L,0x68338B46L,0x3EE7E032L},{0x26349847L,8L,0x2C5A230DL},{0x231570AAL,(-1L),(-4L)},{(-10L),1L,1L},{(-1L),0xCF386810L,0x1430F74AL},{(-1L),0x327A7BC7L,(-1L)},{1L,0x6E5B2E24L,1L},{0xA5975BB4L,1L,(-1L)}},{{0x6151272DL,0x6E5B2E24L,1L},{1L,0x327A7BC7L,0x30346E15L},{0x7D826FC9L,0xCF386810L,0x68338B46L},{0x2C5A230DL,1L,0xA5975BB4L},{0x4F35B7F5L,(-1L),(-10L)},{(-7L),8L,1L},{2L,0x68338B46L,(-2L)},{(-3L),0x53AD90D2L,4L}},{{0x8B4CAA5AL,(-2L),7L},{0x1C7F1A52L,0x27FE7776L,0L},{9L,0L,(-1L)},{1L,(-1L),0x770A445FL},{0x4A546A7AL,0x21FAC706L,0L},{0x45B82450L,0x5887891BL,0x45B82450L},{(-4L),(-1L),0x8B4CAA5AL},{0x5887891BL,0x1C7F1A52L,0xB1238483L}},{{0L,(-1L),(-6L)},{0L,0x574A8081L,1L},{0L,0x4F35B7F5L,1L},{0x5887891BL,0xE65A498EL,(-6L)},{(-4L),0xC00FEE9BL,0x02455DECL},{0x45B82450L,(-3L),6L},{0x4A546A7AL,0x20615643L,0xC00FEE9BL},{1L,0x4AA7906BL,0x27FE7776L}},{{9L,(-4L),0xAEDB7C0CL},{0x1C7F1A52L,(-10L),(-3L)},{0x8B4CAA5AL,(-3L),0x4F35B7F5L},{(-3L),6L,7L},{2L,0x7D826FC9L,0L},{(-7L),0x4208AA58L,0x327A7BC7L},{0x4F35B7F5L,0xABC4B9DAL,2L},{0x2C5A230DL,0x2C5A230DL,0x24F387BFL}},{{0x7D826FC9L,9L,0xAF6FDADEL},{1L,(-2L),0L},{0x6151272DL,0x74FC3CE8L,0x231570AAL},{0xA5975BB4L,1L,0L},{1L,0xA85E0716L,0xAF6FDADEL},{(-1L),0x373232EFL,0x24F387BFL},{(-1L),(-7L),2L},{(-10L),0xB64EB716L,0x327A7BC7L}},{{0x231570AAL,(-6L),0L},{0x26349847L,0x09B5FE7BL,7L},{1L,0x3EE7E032L,0x4F35B7F5L},{1L,7L,(-3L)},{0x9AB8218DL,2L,0xAEDB7C0CL},{0xB1238483L,0x45B82450L,(-3L)},{0L,0x68338B46L,0L},{(-6L),(-1L),(-2L)}}};
    int64_t l_163 = (-5L);
    uint32_t l_245 = 0xF352E7DBL;
    int32_t l_341 = 0xB0C17B3AL;
    const uint16_t l_363 = 0x1682L;
    int i, j, k;
    for (p_69 = 0; (p_69 > 59); p_69 = safe_add_func_uint16_t_u_u(p_69, 2))
    {
        int16_t l_136 = 0xE55BL;
        uint32_t **l_141[9] = {&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123};
        uint64_t *l_187 = &g_188;
        int32_t l_212 = 3L;
        int64_t *l_213 = (void*)0;
        int64_t *l_214 = &l_163;
        int32_t *l_233 = &g_45;
        int32_t l_237 = 0x7418A77CL;
        int32_t l_238[4][9] = {{0L,(-5L),0L,0L,(-5L),0L,0L,(-5L),0L},{0x6A8D5824L,0L,0x6A8D5824L,0x6A8D5824L,0L,0x6A8D5824L,0x6A8D5824L,0L,0x6A8D5824L},{0L,(-5L),0L,0L,(-5L),0L,0L,(-5L),0L},{0x6A8D5824L,0L,0x6A8D5824L,0x6A8D5824L,0L,0x6A8D5824L,0x6A8D5824L,0L,0x6A8D5824L}};
        int32_t l_256 = 1L;
        int i, j;
    }
    for (g_161 = 18; (g_161 <= 45); g_161 = safe_add_func_int16_t_s_s(g_161, 1))
    {
        int32_t * const l_346[7] = {(void*)0,&g_348,(void*)0,(void*)0,&g_348,(void*)0,(void*)0};
        int32_t * const *l_345 = &l_346[1];
        int32_t * const **l_344 = &l_345;
        uint64_t *l_360[4][2] = {{&g_188,&g_188},{&g_188,&g_188},{&g_188,&g_188},{&g_188,&g_188}};
        const int32_t l_361 = 0x3B0096FDL;
        int32_t l_362 = 0x3F4D97E9L;
        int i, j;
        l_362 = ((((l_162[6][3][0] ^= (((*l_344) = &l_114) != g_349)) , ((**g_89) ^= 0L)) && (((*l_123)++) | ((*g_218) &= (**g_89)))) | ((safe_div_func_uint64_t_u_u((((((safe_add_func_uint16_t_u_u(g_348, ((l_104 = ((l_104 , (0UL || (++g_357))) == (&g_188 != (((0x0635L || g_82) | g_348) , (void*)0)))) , l_361))) & 0x4EL) == g_202[1][0]) | g_202[5][0]) , 6UL), 0xB7F669907E119511LL)) & p_70));
    }
    return l_363;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_106[i], "g_106[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_202[i][j], "g_202[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_489, "g_489", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_817, "g_817", print_hash_value);
    transparent_crc(g_818, "g_818", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    transparent_crc(g_908.f1, "g_908.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_927[i], "g_927[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_959[i][j], "g_959[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1098, "g_1098", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1117[i], "g_1117[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1121[i], "g_1121[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1133[i][j], "g_1133[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1164, "g_1164", print_hash_value);
    transparent_crc(g_1178, "g_1178", print_hash_value);
    transparent_crc(g_1259, "g_1259", print_hash_value);
    transparent_crc(g_1304, "g_1304", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1309[i][j][k], "g_1309[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1860, "g_1860", print_hash_value);
    transparent_crc(g_1925, "g_1925", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2064[i][j], "g_2064[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_2065[i][j], "g_2065[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2066, "g_2066", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2067[i], "g_2067[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2068, "g_2068", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_2069[i][j], "g_2069[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2070, "g_2070", print_hash_value);
    transparent_crc(g_2071, "g_2071", print_hash_value);
    transparent_crc(g_2072, "g_2072", print_hash_value);
    transparent_crc(g_2073, "g_2073", print_hash_value);
    transparent_crc(g_2074, "g_2074", print_hash_value);
    transparent_crc(g_2075, "g_2075", print_hash_value);
    transparent_crc(g_2076, "g_2076", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_2077[i][j], "g_2077[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2078[i][j][k], "g_2078[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2079, "g_2079", print_hash_value);
    transparent_crc(g_2080, "g_2080", print_hash_value);
    transparent_crc(g_2081, "g_2081", print_hash_value);
    transparent_crc(g_2082, "g_2082", print_hash_value);
    transparent_crc(g_2083, "g_2083", print_hash_value);
    transparent_crc(g_2084, "g_2084", print_hash_value);
    transparent_crc(g_2085, "g_2085", print_hash_value);
    transparent_crc(g_2086, "g_2086", print_hash_value);
    transparent_crc(g_2087, "g_2087", print_hash_value);
    transparent_crc(g_2088, "g_2088", print_hash_value);
    transparent_crc(g_2089, "g_2089", print_hash_value);
    transparent_crc(g_2090, "g_2090", print_hash_value);
    transparent_crc(g_2091, "g_2091", print_hash_value);
    transparent_crc(g_2092, "g_2092", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2093[i], "g_2093[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2094, "g_2094", print_hash_value);
    transparent_crc(g_2095, "g_2095", print_hash_value);
    transparent_crc(g_2170, "g_2170", print_hash_value);
    transparent_crc(g_2279, "g_2279", print_hash_value);
    transparent_crc(g_2388.f1, "g_2388.f1", print_hash_value);
    transparent_crc(g_2395, "g_2395", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2526[i][j], "g_2526[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_2806[i][j][k], "g_2806[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2943, "g_2943", print_hash_value);
    transparent_crc(g_3027, "g_3027", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
