// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 8F60C6ED
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
   uint64_t f0;
};

union U1 {
   uint32_t f0;
   const uint32_t f1;
   const uint64_t f2;
};


static uint64_t g_4 = 0xD1F2E96673E7ED6FLL;
static int16_t g_58 = (-2L);
static uint8_t g_62 = 247UL;
static int32_t g_71 = 0x9B8364B2L;
static int32_t g_73 = 0xC7725EFFL;
static int32_t g_79 = (-9L);
static uint8_t g_85 = 255UL;
static union U0 g_103[4] = {{18446744073709551610UL},{18446744073709551610UL},{18446744073709551610UL},{18446744073709551610UL}};
static int64_t g_127 = (-1L);
static int64_t g_129 = 1L;
static uint32_t g_131[8] = {0xD566F7E6L,0xD566F7E6L,0xD566F7E6L,0xD566F7E6L,0xD566F7E6L,0xD566F7E6L,0xD566F7E6L,0xD566F7E6L};
static uint8_t g_139 = 7UL;
static int64_t g_140 = (-7L);
static const union U1 g_143 = {0x0CE2261CL};
static uint64_t g_177 = 0x93178D71A0F86E78LL;
static int8_t g_179 = 0L;
static uint32_t g_181 = 1UL;
static int32_t *g_197 = &g_79;
static uint32_t g_269 = 4294967295UL;
static const union U0 g_273 = {0xF3894C1F6BFF471ALL};
static int64_t g_275 = (-1L);
static uint32_t g_276 = 3UL;
static int64_t g_283 = 0L;
static union U1 g_325[4] = {{0xEBD65297L},{0xEBD65297L},{0xEBD65297L},{0xEBD65297L}};
static const int64_t g_345[8][7][4] = {{{8L,0x773127CEA8F37001LL,0xB33DBD078B6D9E19LL,0xF158EB26F251CE81LL},{5L,6L,(-2L),0x8C7A0681AF4D4148LL},{1L,0L,0xB8290221D28F4E3DLL,1L},{0L,4L,0x19EDC76D682609BDLL,0xF158EB26F251CE81LL},{(-2L),0xA36DC97C7E432CE0LL,0xEFAE0A80596460BFLL,0x6D9E32C196C4F1D6LL},{0xE74D5A1B0B82856FLL,0x65085B150DFEC160LL,0x9DE6DB097B45DCA9LL,1L},{5L,0x513AD5C0386A1902LL,0L,0x7A44D734A936E5EALL}},{{0x593B963BEDA2E692LL,0xE74D5A1B0B82856FLL,0x2F89C2A5C2E93F13LL,0L},{0L,1L,0x5F9309D902B26BECLL,0x85A483AFEF4EC5B9LL},{0L,4L,0L,1L},{1L,0x85A483AFEF4EC5B9LL,8L,0x0BF4E5084947FFBDLL},{0xD83B6A064B616523LL,0xE74D5A1B0B82856FLL,0x8ED6D0522A98C11ELL,0x8ED6D0522A98C11ELL},{0xEFAE0A80596460BFLL,0xEFAE0A80596460BFLL,(-1L),6L},{(-2L),1L,0x5F9309D902B26BECLL,(-2L)}},{{0xC534AEA6BC37FF64LL,0x0BF4E5084947FFBDLL,0x85A483AFEF4EC5B9LL,0x5F9309D902B26BECLL},{3L,0x0BF4E5084947FFBDLL,0xB300E6E42AD64B72LL,(-2L)},{0x0BF4E5084947FFBDLL,1L,(-1L),6L},{0x30B79297DA3237E1LL,0xEFAE0A80596460BFLL,0x19EDC76D682609BDLL,0x8ED6D0522A98C11ELL},{1L,0xE74D5A1B0B82856FLL,0x8C7A0681AF4D4148LL,0x0BF4E5084947FFBDLL},{0x1761CE2FE3639EF0LL,0x85A483AFEF4EC5B9LL,4L,1L},{(-1L),4L,1L,0x85A483AFEF4EC5B9LL}},{{0x0BF4E5084947FFBDLL,1L,0x513AD5C0386A1902LL,0L},{0xB8290221D28F4E3DLL,0L,4L,1L},{0xB33DBD078B6D9E19LL,1L,0x5F9309D902B26BECLL,0x19EDC76D682609BDLL},{1L,(-10L),0x6D9E32C196C4F1D6LL,1L},{0xA36DC97C7E432CE0LL,0x2F89C2A5C2E93F13LL,(-1L),4L},{0xD83B6A064B616523LL,1L,(-8L),1L},{3L,0xEFAE0A80596460BFLL,(-2L),0xCB9F91B81BF7334FLL}},{{0x9DE6DB097B45DCA9LL,9L,0x5F9309D902B26BECLL,4L},{0xA03E2196DACA1AAFLL,(-2L),0xD83B6A064B616523LL,0x5F9309D902B26BECLL},{0xEFAE0A80596460BFLL,(-10L),1L,(-10L)},{0x0BF4E5084947FFBDLL,(-1L),8L,1L},{(-1L),0xEFAE0A80596460BFLL,0x2F89C2A5C2E93F13LL,(-8L)},{0L,1L,0x8C7A0681AF4D4148LL,0x5D527B391B31A1AFLL},{0L,4L,0x2F89C2A5C2E93F13LL,1L}},{{(-1L),0x5D527B391B31A1AFLL,8L,0xD83B6A064B616523LL},{0x0BF4E5084947FFBDLL,0xE74D5A1B0B82856FLL,1L,(-10L)},{0xEFAE0A80596460BFLL,0L,0xD83B6A064B616523LL,6L},{0xA03E2196DACA1AAFLL,3L,0x5F9309D902B26BECLL,0x2F89C2A5C2E93F13LL},{0x9DE6DB097B45DCA9LL,0x0BF4E5084947FFBDLL,(-2L),1L},{3L,0xD83B6A064B616523LL,(-8L),(-2L)},{0xD83B6A064B616523LL,3L,(-1L),8L}},{{0xA36DC97C7E432CE0LL,0xEFAE0A80596460BFLL,0x6D9E32C196C4F1D6LL,(-10L)},{1L,0xC5FC2A831BCBC306LL,0x5F9309D902B26BECLL,0x0BF4E5084947FFBDLL},{0xB33DBD078B6D9E19LL,0x5D527B391B31A1AFLL,4L,0x5F9309D902B26BECLL},{0xB8290221D28F4E3DLL,4L,0x513AD5C0386A1902LL,0x5D527B391B31A1AFLL},{0x0BF4E5084947FFBDLL,(-10L),1L,0L},{(-1L),0xEFAE0A80596460BFLL,4L,(-1L)},{0x1761CE2FE3639EF0LL,1L,0x8C7A0681AF4D4148LL,(-10L)}},{{1L,0x19EDC76D682609BDLL,0x19EDC76D682609BDLL,1L},{0x30B79297DA3237E1LL,(-2L),(-1L),4L},{0x0BF4E5084947FFBDLL,1L,0xB300E6E42AD64B72LL,0xCB9F91B81BF7334FLL},{3L,0L,0x85A483AFEF4EC5B9LL,0xCB9F91B81BF7334FLL},{0xC534AEA6BC37FF64LL,1L,0x5F9309D902B26BECLL,4L},{(-2L),(-2L),(-1L),1L},{0xEFAE0A80596460BFLL,0x8C7A0681AF4D4148LL,0L,0x5F9309D902B26BECLL}}};
static int64_t g_371[8][9][3] = {{{0xF40327DCED75A5B1LL,0x5B1A384F825FF6B3LL,0x495767BE0A92C8E5LL},{0x268E91931BB2BDCBLL,0x75BE45F63D8A5B50LL,1L},{0x0775A861F50D462ALL,0x0EE9E5843B7EC15BLL,0x0775A861F50D462ALL},{0L,0x980768C82B81AD9BLL,0xF40327DCED75A5B1LL},{0x99699DA634267C31LL,3L,0xF06C16CD3D2653FELL},{0xBB907D6A33E2A23CLL,0x6D304B7867B4E932LL,(-1L)},{0x295C7D5A770EAE17LL,0xB708EA70E1E20A6ALL,0xD1A03054315FED4ALL},{0xBB907D6A33E2A23CLL,0xF1B10E3C8D558B96LL,0x495767BE0A92C8E5LL},{0x99699DA634267C31LL,0x6440DD2EE8FAB4A5LL,0xD0E269AAF8453B7DLL}},{{0L,(-7L),5L},{0x0775A861F50D462ALL,0x99699DA634267C31LL,0xBB907D6A33E2A23CLL},{0x268E91931BB2BDCBLL,3L,0x6D304B7867B4E932LL},{0xF40327DCED75A5B1LL,1L,1L},{(-1L),4L,0x7219D6A0E19129FBLL},{0xF1B10E3C8D558B96LL,(-8L),0x66E567407AC83EE7LL},{0x99699DA634267C31LL,1L,5L},{0x47B9C45E83AB962ELL,(-8L),0x0775A861F50D462ALL},{5L,0xB708EA70E1E20A6ALL,0xF1B10E3C8D558B96LL}},{{6L,0L,0x6D304B7867B4E932LL},{(-8L),0L,0xD0E269AAF8453B7DLL},{0x6440DD2EE8FAB4A5LL,0xB708EA70E1E20A6ALL,1L},{0xBAF0D8E3BE96CB74LL,(-8L),0x15D63B4C3FEF23D1LL},{0x268E91931BB2BDCBLL,1L,(-1L)},{0xF06C16CD3D2653FELL,(-8L),0L},{0x0775A861F50D462ALL,4L,0xBAF0D8E3BE96CB74LL},{(-1L),1L,0xF06C16CD3D2653FELL},{(-8L),3L,5L}},{{(-1L),0x99699DA634267C31LL,0x7219D6A0E19129FBLL},{(-7L),(-7L),0xD1A03054315FED4ALL},{6L,0x6440DD2EE8FAB4A5LL,(-1L)},{0x6D304B7867B4E932LL,0xF1B10E3C8D558B96LL,0x47B9C45E83AB962ELL},{0L,0xB708EA70E1E20A6ALL,(-7L)},{0x56A60A03CC9904DFLL,0x6D304B7867B4E932LL,0x47B9C45E83AB962ELL},{0xF40327DCED75A5B1LL,3L,(-1L)},{0x95F4897DE86C9301LL,0x980768C82B81AD9BLL,0xD1A03054315FED4ALL},{0xBAF0D8E3BE96CB74LL,0x0EE9E5843B7EC15BLL,0x7219D6A0E19129FBLL}},{{(-1L),0x75BE45F63D8A5B50LL,5L},{0x6D304B7867B4E932LL,0x5B1A384F825FF6B3LL,0xF06C16CD3D2653FELL},{0x47B9C45E83AB962ELL,0x99699DA634267C31LL,0xBAF0D8E3BE96CB74LL},{0xB708EA70E1E20A6ALL,5L,0L},{0xBB907D6A33E2A23CLL,0L,(-1L)},{1L,(-1L),0x15D63B4C3FEF23D1LL},{0xF1B10E3C8D558B96LL,(-7L),1L},{0x56A60A03CC9904DFLL,1L,0xD0E269AAF8453B7DLL},{0xF06C16CD3D2653FELL,0x5B1A384F825FF6B3LL,0x6D304B7867B4E932LL}},{{0xF06C16CD3D2653FELL,0x980768C82B81AD9BLL,0xF1B10E3C8D558B96LL},{0x56A60A03CC9904DFLL,0xEB3200A3AFB41FE7LL,0x0775A861F50D462ALL},{0xF1B10E3C8D558B96LL,1L,5L},{1L,0x52CD1FFF403BBC57LL,0x66E567407AC83EE7LL},{0xBB907D6A33E2A23CLL,(-8L),0x7219D6A0E19129FBLL},{0xB708EA70E1E20A6ALL,0x295C7D5A770EAE17LL,1L},{0x47B9C45E83AB962ELL,0xF1B10E3C8D558B96LL,0x6D304B7867B4E932LL},{0x6D304B7867B4E932LL,(-1L),0xBB907D6A33E2A23CLL},{(-1L),5L,5L}},{{0xBAF0D8E3BE96CB74LL,0x6D304B7867B4E932LL,0xD0E269AAF8453B7DLL},{0x95F4897DE86C9301LL,0x52CD1FFF403BBC57LL,0x495767BE0A92C8E5LL},{0xF40327DCED75A5B1LL,(-8L),0xD1A03054315FED4ALL},{0x56A60A03CC9904DFLL,0xAD8766082E550748LL,(-1L)},{0L,(-8L),0xF06C16CD3D2653FELL},{0x6D304B7867B4E932LL,0x52CD1FFF403BBC57LL,0xF40327DCED75A5B1LL},{6L,0x6D304B7867B4E932LL,0x0775A861F50D462ALL},{(-7L),5L,1L},{(-1L),5L,0x0EE9E5843B7EC15BLL}},{{5L,6L,0xF40327DCED75A5B1LL},{5L,9L,1L},{0x75BE45F63D8A5B50LL,5L,0x95F4897DE86C9301LL},{(-1L),0x47B9C45E83AB962ELL,5L},{0x0775A861F50D462ALL,0x6440DD2EE8FAB4A5LL,0x295C7D5A770EAE17LL},{0x090B4C5DE5531A4BLL,0xDF545FCCDC5DAD05LL,(-3L)},{0xCB785FBDE1996FACLL,0L,0xBAF0D8E3BE96CB74LL},{5L,0x16A158D93498E7A9LL,0xBAF0D8E3BE96CB74LL},{0xF06C16CD3D2653FELL,0x5ABE0D1BAC34EDC8LL,(-3L)}}};
static uint16_t g_377[5] = {5UL,5UL,5UL,5UL,5UL};
static uint32_t *g_423 = &g_131[2];
static uint32_t **g_422 = &g_423;
static union U0 *g_446 = (void*)0;
static union U0 **g_445 = &g_446;
static uint8_t g_475 = 255UL;
static uint64_t **g_501 = (void*)0;
static int32_t g_513 = (-1L);
static uint32_t g_515 = 4294967292UL;
static uint8_t *g_538 = &g_62;
static uint8_t **g_537 = &g_538;
static uint64_t g_553[8][6] = {{6UL,0UL,6UL,1UL,0x5A7E54F2EAAF2251LL,0xADCB4B2E83BECEC8LL},{0x39DF2265ED66DDBELL,0xA55CB2507A25CDB8LL,18446744073709551615UL,0x3BA34CA32C1DE544LL,18446744073709551615UL,0x5A7E54F2EAAF2251LL},{0xECDA4B225E58B13FLL,0x07A0C0C4A79FA3ADLL,1UL,0x3BA34CA32C1DE544LL,0x3BA34CA32C1DE544LL,1UL},{0x39DF2265ED66DDBELL,0x39DF2265ED66DDBELL,0UL,1UL,18446744073709551615UL,6UL},{6UL,0xEE3EE69142EFFDA5LL,0x39DF2265ED66DDBELL,0x07A0C0C4A79FA3ADLL,0xA55CB2507A25CDB8LL,0UL},{0xE43E32CABF9AF414LL,6UL,0x39DF2265ED66DDBELL,0xECDA4B225E58B13FLL,0x39DF2265ED66DDBELL,6UL},{18446744073709551615UL,0xECDA4B225E58B13FLL,0UL,18446744073709551610UL,0x20E0BD1B28AD16CELL,1UL},{18446744073709551610UL,0x20E0BD1B28AD16CELL,1UL,0x39DF2265ED66DDBELL,1UL,0x5A7E54F2EAAF2251LL}};
static uint8_t g_585[9][7] = {{255UL,1UL,0x94L,0x94L,1UL,255UL,0UL},{1UL,0x2FL,0xEEL,0x94L,3UL,0xC2L,6UL},{1UL,255UL,0xFBL,0xD1L,0UL,0xD1L,0xFBL},{0x2FL,0x2FL,0x3EL,0x63L,0x94L,2UL,0xFBL},{0UL,1UL,0x63L,0x2FL,0xFBL,6UL,6UL},{0x94L,0UL,1UL,0UL,0x94L,0x2FL,0UL},{0xC2L,0x3EL,1UL,0xA7L,0UL,3UL,255UL},{0xA7L,0xD1L,0x63L,3UL,3UL,0x63L,0xD1L},{0xC2L,0xA7L,0x3EL,0UL,1UL,0x63L,0x2FL}};
static int32_t g_590 = 0x806A0478L;
static int8_t g_640 = 0x68L;
static int16_t *g_642 = &g_58;
static int16_t **g_641 = &g_642;
static uint8_t ***g_659[2] = {&g_537,&g_537};
static uint8_t ****g_658 = &g_659[1];
static int64_t *g_684 = &g_283;
static int64_t **g_683[4][4][7] = {{{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684}},{{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684}},{{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684}},{{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684}}};
static uint16_t g_695 = 1UL;
static int64_t g_703 = (-7L);
static int64_t g_705 = 0xE2F5A59E84379C0ALL;
static int32_t g_706 = 0L;
static uint32_t g_707 = 0x1E076980L;
static uint8_t g_722 = 0x47L;
static union U1 *g_735 = &g_325[0];
static union U1 **g_734 = &g_735;
static const uint8_t g_756 = 0xB1L;
static const uint32_t g_829 = 18446744073709551615UL;
static const uint32_t g_832 = 0x61B62B69L;
static uint32_t ***g_960 = (void*)0;
static uint32_t ****g_959 = &g_960;
static int64_t g_1002 = 0xB8ADFC450DF93EADLL;
static uint16_t *g_1069 = &g_377[0];
static uint64_t g_1130 = 0x0A8EEFA777391BBFLL;
static int64_t g_1160 = 0xA6D5595E9260AD31LL;
static uint32_t g_1161 = 0UL;
static int32_t *g_1176[8][7][4] = {{{&g_71,&g_71,&g_71,&g_513},{&g_513,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_513,(void*)0},{&g_71,&g_513,&g_71,&g_513},{&g_71,&g_513,&g_71,&g_71},{(void*)0,&g_71,&g_513,&g_71},{&g_71,(void*)0,&g_513,&g_71}},{{&g_71,&g_513,&g_513,&g_71},{&g_513,&g_513,&g_71,&g_513},{(void*)0,&g_71,&g_71,&g_513},{&g_71,&g_71,&g_513,&g_513},{&g_513,&g_71,&g_513,&g_71},{&g_513,&g_71,&g_513,&g_513},{&g_513,&g_71,(void*)0,&g_71}},{{&g_513,&g_71,&g_71,(void*)0},{&g_513,&g_71,&g_513,&g_71},{(void*)0,&g_71,&g_513,&g_71},{&g_71,(void*)0,&g_71,&g_513},{&g_71,&g_513,&g_513,&g_71},{(void*)0,&g_71,&g_71,&g_71},{&g_513,&g_71,&g_71,&g_71}},{{&g_71,&g_71,(void*)0,(void*)0},{(void*)0,(void*)0,&g_71,&g_71},{&g_71,&g_71,&g_513,(void*)0},{&g_71,&g_71,&g_71,&g_513},{&g_513,&g_71,&g_513,(void*)0},{&g_71,&g_71,&g_513,&g_71},{(void*)0,(void*)0,&g_513,(void*)0}},{{(void*)0,&g_71,&g_513,&g_71},{&g_513,&g_71,&g_71,&g_71},{&g_71,&g_71,&g_513,&g_513},{&g_71,(void*)0,&g_513,&g_71},{&g_71,&g_71,&g_71,(void*)0},{&g_71,&g_513,&g_71,&g_513},{&g_513,&g_513,&g_513,&g_71}},{{&g_71,&g_513,(void*)0,&g_513},{&g_513,(void*)0,(void*)0,&g_71},{&g_71,&g_71,(void*)0,&g_71},{&g_71,(void*)0,(void*)0,&g_71},{&g_513,(void*)0,&g_513,&g_513},{&g_71,&g_513,&g_513,(void*)0},{&g_513,&g_513,(void*)0,&g_513}},{{&g_71,&g_513,&g_513,&g_71},{&g_513,&g_513,&g_513,&g_513},{&g_513,&g_71,&g_71,&g_513},{&g_513,&g_71,&g_71,&g_71},{&g_71,&g_513,&g_513,&g_513},{&g_71,&g_71,(void*)0,&g_71},{&g_513,&g_71,&g_71,&g_71}},{{&g_513,&g_513,(void*)0,&g_513},{&g_71,&g_71,&g_513,&g_71},{&g_71,(void*)0,&g_71,(void*)0},{&g_513,&g_71,&g_71,&g_513},{&g_513,(void*)0,&g_513,&g_513},{&g_513,&g_513,&g_513,(void*)0},{&g_71,&g_513,(void*)0,&g_71}}};
static int32_t **g_1175 = &g_1176[6][0][0];
static uint64_t g_1193 = 0x9171B2419F718E6FLL;
static const int32_t *g_1226[2][2][7] = {{{&g_73,&g_706,(void*)0,(void*)0,&g_706,&g_73,&g_706},{&g_73,&g_79,&g_79,&g_73,&g_590,&g_73,&g_79}},{{&g_706,&g_706,&g_73,(void*)0,&g_73,&g_706,&g_706},{&g_706,&g_79,&g_73,&g_79,&g_706,&g_706,&g_79}}};
static const int32_t **g_1225 = &g_1226[0][1][0];
static int32_t g_1232 = (-8L);
static int32_t * const g_1231 = &g_1232;
static int32_t * const *g_1230 = &g_1231;
static int64_t g_1276[4] = {5L,5L,5L,5L};
static uint32_t g_1374 = 0x058574D7L;
static uint16_t ***g_1413[2] = {(void*)0,(void*)0};
static int8_t g_1416 = 1L;
static int16_t g_1417 = 0L;
static int8_t g_1418 = (-10L);
static uint32_t g_1419[7][7][1] = {{{0x6F7ED8E6L},{4294967295UL},{0xFFD6CFC1L},{4294967286UL},{0x4FB8A18AL},{0UL},{0x4F35352FL}},{{4294967293UL},{0UL},{0x0FB3760FL},{0x0FB3760FL},{0UL},{4294967293UL},{0x4F35352FL}},{{0UL},{0x4FB8A18AL},{4294967286UL},{0xFFD6CFC1L},{4294967295UL},{0x6F7ED8E6L},{4294967295UL}},{{0x33C91A88L},{4294967295UL},{0x6F7ED8E6L},{4294967295UL},{0xFFD6CFC1L},{4294967286UL},{0x4FB8A18AL}},{{0UL},{0x4F35352FL},{4294967293UL},{0UL},{0x0FB3760FL},{0x0FB3760FL},{0UL}},{{4294967293UL},{0x4F35352FL},{0UL},{0x4FB8A18AL},{4294967286UL},{0xFFD6CFC1L},{4294967295UL}},{{0x6F7ED8E6L},{4294967295UL},{0x33C91A88L},{4294967295UL},{0x6F7ED8E6L},{4294967295UL},{0xFFD6CFC1L}}};
static uint64_t ****g_1439 = (void*)0;
static uint64_t **** const *g_1438 = &g_1439;
static union U0 *****g_1606[7][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
static uint32_t g_1684 = 18446744073709551615UL;
static uint16_t g_1762 = 1UL;
static const int32_t *** const g_1766 = &g_1225;
static const int32_t *** const *g_1765[3] = {&g_1766,&g_1766,&g_1766};
static int8_t *g_1783[2] = {&g_640,&g_640};
static int8_t **g_1782 = &g_1783[1];
static int32_t g_1784 = 0xD7739533L;
static int8_t * const *g_1805[3] = {(void*)0,(void*)0,(void*)0};
static int8_t * const **g_1804 = &g_1805[1];
static int8_t * const ***g_1803 = &g_1804;
static const uint16_t *g_1862 = &g_377[0];
static const uint16_t **g_1861 = &g_1862;
static int64_t g_1869[6] = {7L,7L,7L,7L,7L,7L};
static int64_t g_1870 = 0xB95B41CAE1399A6BLL;
static uint16_t g_1871 = 0xA141L;
static int8_t ***g_1930 = &g_1782;
static int8_t ****g_1929 = &g_1930;
static int8_t *****g_1928 = &g_1929;
static uint64_t ***g_1941[6] = {&g_501,&g_501,&g_501,&g_501,&g_501,&g_501};
static uint64_t ***g_1942[9] = {&g_501,&g_501,&g_501,&g_501,&g_501,&g_501,&g_501,&g_501,&g_501};
static int16_t g_1967[3] = {1L,1L,1L};
static int32_t g_1969 = 8L;
static uint8_t g_1971 = 0UL;
static int32_t g_1976 = 0x409A6DA7L;
static uint64_t g_1977 = 0x4E52B4BE3ED11DDBLL;
static uint64_t g_2039 = 0x6ABC7D1DCBC391ACLL;
static uint8_t g_2208[2] = {253UL,253UL};
static uint32_t g_2302 = 7UL;
static uint8_t g_2365 = 255UL;
static uint32_t g_2368 = 18446744073709551610UL;
static union U0 g_2543 = {5UL};
static int32_t g_2577 = 0x5A9D5F4EL;
static int64_t g_2578 = 0x4C035A38BDE354EDLL;
static uint16_t g_2579 = 1UL;
static uint16_t ****g_2590 = (void*)0;
static union U1 g_2758 = {18446744073709551607UL};
static int64_t ****g_2792 = (void*)0;
static int32_t ***g_2796 = &g_1175;
static int32_t **** const g_2795 = &g_2796;
static int32_t g_2801 = 0L;
static uint8_t g_2802 = 251UL;
static uint8_t g_2842 = 0xD8L;
static int64_t g_2845 = 0xFF5C94A689631A34LL;
static int32_t g_2846 = 0x95E1FFE1L;
static uint16_t g_2847 = 65531UL;
static int32_t g_2851 = 0xA8E486C5L;
static int16_t g_2852 = 0xBD3BL;
static uint32_t g_2853 = 0xB59454B6L;
static uint32_t *g_2860 = &g_181;
static uint32_t **g_2859[1] = {&g_2860};
static int64_t g_2870 = 1L;
static int16_t g_2871 = 0x882DL;
static uint64_t g_2873 = 0x384A5B2B4A886C26LL;
static uint32_t g_2931 = 18446744073709551610UL;
static int32_t **g_3025 = &g_197;
static int32_t ***g_3024[5][2][9] = {{{&g_3025,(void*)0,&g_3025,&g_3025,(void*)0,&g_3025,(void*)0,&g_3025,&g_3025},{(void*)0,&g_3025,&g_3025,&g_3025,&g_3025,(void*)0,&g_3025,&g_3025,&g_3025}},{{&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025},{&g_3025,&g_3025,&g_3025,&g_3025,(void*)0,&g_3025,&g_3025,&g_3025,&g_3025}},{{(void*)0,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025},{&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025}},{{(void*)0,(void*)0,&g_3025,&g_3025,&g_3025,(void*)0,(void*)0,&g_3025,&g_3025},{&g_3025,(void*)0,&g_3025,&g_3025,&g_3025,&g_3025,(void*)0,&g_3025,&g_3025}},{{&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025,&g_3025},{&g_3025,&g_3025,&g_3025,&g_3025,(void*)0,&g_3025,&g_3025,&g_3025,&g_3025}}};
static int32_t g_3034[2] = {0L,0L};
static int32_t * const ***g_3082 = (void*)0;
static int8_t g_3361 = 0L;
static uint16_t **g_3534 = (void*)0;
static uint16_t ***g_3533 = &g_3534;
static union U0 g_3608 = {0x462B9EAEABB1EC85LL};



static union U0 func_1(void);
static int8_t func_7(uint8_t p_8, int32_t p_9, uint8_t p_10, int32_t p_11);
static uint64_t func_19(int8_t p_20, int32_t p_21);
static const int8_t func_22(uint32_t p_23, int8_t p_24, uint64_t p_25);
static int32_t func_30(int64_t p_31, uint8_t p_32, int32_t p_33, int32_t p_34, uint64_t p_35);
static int16_t func_43(int8_t p_44, const uint64_t p_45);
static int8_t func_46(int32_t p_47, uint16_t p_48);
static int8_t func_90(union U0 p_91, uint8_t * p_92, const uint16_t p_93, uint8_t * p_94);
static union U0 func_95(int32_t * p_96);
static uint8_t func_106(int16_t * p_107, const int8_t p_108, int32_t p_109, int64_t p_110);
# 193 "<stdin>"
static union U0 func_1(void)
{
    int16_t l_3 = 0xE39EL;
    int8_t l_12[5];
    int8_t l_29 = 0x1BL;
    uint16_t l_3493 = 7UL;
    int32_t l_3494 = 6L;
    uint32_t l_3495 = 0x2904B6C3L;
    uint8_t l_3662 = 0xDFL;
    union U0 l_3663[4][10][2] = {{{{0x19AD6E433ED85806LL},{2UL}},{{0xF5FE150B710D1293LL},{0xF5FE150B710D1293LL}},{{2UL},{0x19AD6E433ED85806LL}},{{2UL},{18446744073709551615UL}},{{0xBD24EF2A261ECF03LL},{0xF5FE150B710D1293LL}},{{0UL},{0xBD24EF2A261ECF03LL}},{{0x19AD6E433ED85806LL},{0x3FDF7DC0DD60D0C7LL}},{{0x19AD6E433ED85806LL},{0xBD24EF2A261ECF03LL}},{{0UL},{0xF5FE150B710D1293LL}},{{0xBD24EF2A261ECF03LL},{18446744073709551615UL}}},{{{2UL},{0x19AD6E433ED85806LL}},{{2UL},{0xF5FE150B710D1293LL}},{{0xF5FE150B710D1293LL},{2UL}},{{0x19AD6E433ED85806LL},{2UL}},{{18446744073709551615UL},{0xBD24EF2A261ECF03LL}},{{0xF5FE150B710D1293LL},{0UL}},{{0xBD24EF2A261ECF03LL},{0x19AD6E433ED85806LL}},{{0x3FDF7DC0DD60D0C7LL},{0x19AD6E433ED85806LL}},{{0xBD24EF2A261ECF03LL},{0UL}},{{0xF5FE150B710D1293LL},{0xBD24EF2A261ECF03LL}}},{{{18446744073709551615UL},{2UL}},{{0x19AD6E433ED85806LL},{2UL}},{{0xF5FE150B710D1293LL},{0xF5FE150B710D1293LL}},{{2UL},{0x19AD6E433ED85806LL}},{{2UL},{18446744073709551615UL}},{{0xBD24EF2A261ECF03LL},{0xF5FE150B710D1293LL}},{{0UL},{0xBD24EF2A261ECF03LL}},{{0x19AD6E433ED85806LL},{0x3FDF7DC0DD60D0C7LL}},{{0x19AD6E433ED85806LL},{0xBD24EF2A261ECF03LL}},{{0UL},{0xF5FE150B710D1293LL}}},{{{0xBD24EF2A261ECF03LL},{18446744073709551615UL}},{{2UL},{2UL}},{{1UL},{0x82569E21ED07BFD0LL}},{{0x82569E21ED07BFD0LL},{1UL}},{{2UL},{18446744073709551610UL}},{{18446744073709551610UL},{0x3FDF7DC0DD60D0C7LL}},{{0x82569E21ED07BFD0LL},{0x948A7E33ADC183ADLL}},{{0x3FDF7DC0DD60D0C7LL},{2UL}},{{0x9F70D2E195AA6875LL},{2UL}},{{0x3FDF7DC0DD60D0C7LL},{0x948A7E33ADC183ADLL}}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_12[i] = 0xE6L;
    (**g_1230) = (((!((0x07B5CA9869EC4279LL != (l_3 > g_4)) <= ((safe_div_func_uint16_t_u_u(((func_7(g_4, (l_3494 &= (l_3 , (l_12[4] || ((safe_mod_func_int64_t_s_s(((safe_add_func_int32_t_s_s(((((safe_mul_func_int16_t_s_s((func_19((((**g_1230) = ((((func_22(l_3, (l_29 = (safe_mod_func_int8_t_s_s(g_4, ((+0L) | l_3)))), g_4) & l_3) != 4294967294UL) <= l_12[0]) || 0x42L)) , (****g_1929)), l_12[4]) < l_12[4]), l_12[0])) , l_3493) ^ l_3493) & 0x3CL), l_12[0])) , l_12[2]), g_273.f0)) <= l_12[0])))), l_3, l_3495) != 1UL) == l_3662), l_3493)) || l_3662))) > l_12[3]) || l_29);
    return l_3663[0][5][1];
}







static int8_t func_7(uint8_t p_8, int32_t p_9, uint8_t p_10, int32_t p_11)
{
    int32_t l_3505[3][3] = {{0xCCF62B3EL,1L,0xCCF62B3EL},{0xE80B54A1L,0xE80B54A1L,0xE80B54A1L},{0xCCF62B3EL,1L,0xCCF62B3EL}};
    uint16_t *****l_3508[10] = {(void*)0,&g_2590,&g_2590,&g_2590,(void*)0,(void*)0,&g_2590,&g_2590,&g_2590,(void*)0};
    uint64_t *l_3510 = &g_1977;
    uint64_t **l_3509 = &l_3510;
    union U1 *l_3513 = &g_325[0];
    union U0 l_3554[4] = {{0x65D4E429C605F51DLL},{0x65D4E429C605F51DLL},{0x65D4E429C605F51DLL},{0x65D4E429C605F51DLL}};
    int32_t l_3613[4][3][2] = {{{0L,0xF12F1563L},{1L,0L},{0x7ACB49BFL,0x7ACB49BFL}},{{0x7ACB49BFL,0L},{1L,0xF12F1563L},{0L,0xF12F1563L}},{{1L,0L},{0x7ACB49BFL,0x7ACB49BFL},{0x7ACB49BFL,0L}},{{1L,0xF12F1563L},{0L,0xF12F1563L},{1L,0L}}};
    uint64_t l_3624[1];
    uint32_t *l_3658 = &g_1684;
    int32_t *l_3661 = &g_1976;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_3624[i] = 0xAE545C41D6BFCE57LL;
    for (g_1130 = 28; (g_1130 != 45); ++g_1130)
    {
        int32_t ****l_3514 = &g_3024[1][1][1];
        int32_t l_3515 = 0xE046C63DL;
        uint16_t * const *l_3606 = &g_1069;
        uint16_t * const **l_3605 = &l_3606;
        uint16_t * const ***l_3604[2];
        int32_t l_3616 = 0L;
        int32_t l_3621 = 1L;
        int32_t l_3622 = 0x10CACC69L;
        int32_t l_3623 = 9L;
        uint32_t l_3637 = 0x79FCC5BAL;
        int i;
        for (i = 0; i < 2; i++)
            l_3604[i] = &l_3605;
        for (g_706 = 5; (g_706 >= 1); g_706 -= 1)
        {
            int32_t ** const * const l_3512 = (void*)0;
            int32_t ** const * const *l_3511[2];
            uint16_t **l_3532 = &g_1069;
            uint16_t ***l_3531[4];
            const union U0 **l_3558 = (void*)0;
            const union U0 ***l_3557 = &l_3558;
            int i, j;
            for (i = 0; i < 2; i++)
                l_3511[i] = &l_3512;
            for (i = 0; i < 4; i++)
                l_3531[i] = &l_3532;
            if ((safe_mod_func_uint64_t_u_u(((g_553[(g_706 + 1)][g_706] > ((****g_658) = ((l_3515 = (safe_lshift_func_uint16_t_u_s((((~(l_3505[0][2] < (safe_lshift_func_uint16_t_u_s(((*g_1069) = ((p_8 || (l_3508[2] != &g_2590)) == 0xECA60A714F3AD0F0LL)), 5)))) , l_3509) != ((l_3511[1] == (((l_3513 != l_3513) ^ l_3505[0][2]) , l_3514)) , (void*)0)), (**g_641)))) || 0L))) ^ 0xECBFL), p_10)))
            {
                uint32_t *l_3516[7] = {&g_1419[1][3][0],&g_1419[1][3][0],&g_1419[1][3][0],&g_1419[1][3][0],&g_1419[1][3][0],&g_1419[1][3][0],&g_1419[1][3][0]};
                uint16_t ***l_3535 = &g_3534;
                int32_t *l_3544 = &g_3034[1];
                int32_t l_3547[6] = {0L,0L,0L,0L,0L,0L};
                uint8_t *l_3548 = &g_722;
                int i;
                for (p_11 = 0; (p_11 <= 3); p_11 += 1)
                {
                    for (g_2851 = 3; (g_2851 >= 0); g_2851 -= 1)
                    {
                        (*g_1225) = &p_11;
                    }
                    return p_9;
                }
                if (p_11)
                    continue;
                (*g_1231) &= ((void*)0 != l_3516[6]);
                l_3515 &= (p_8 == ((*l_3548) = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(p_10, ((safe_mul_func_int64_t_s_s(((*g_684) ^= p_11), ((((((*g_2860) = (safe_mod_func_uint8_t_u_u(((****g_658) ^= ((g_3533 = l_3531[3]) != (l_3535 = (g_1413[1] = &l_3532)))), (safe_add_func_int32_t_s_s((safe_sub_func_int64_t_s_s((safe_unary_minus_func_int16_t_s((+((0x512179CFL <= ((((***g_1930) &= (safe_unary_minus_func_int32_t_s(((((*g_735) , (((((*l_3544) = (safe_unary_minus_func_int16_t_s(p_8))) , (safe_mod_func_int32_t_s_s(((*g_1231) |= ((void*)0 != &g_2796)), p_9))) , 0xE9BBL) < 0xE43DL)) || 7UL) <= l_3547[0])))) ^ p_9) < p_10)) & 0x91L)))), p_11)), p_10))))) != p_11) == p_8) && p_8) < (-6L)))) || 0UL))), l_3547[0])), (*g_642))), 7)) != p_9), p_8))));
            }
            else
            {
                uint32_t l_3549 = 0x6F299FB1L;
                l_3549 = 0xCC70EFAAL;
                (**g_1230) = (p_11 = ((safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(l_3549, (l_3549 ^ l_3549))), (l_3554[0] , (p_11 | ((0x7FBEL < (safe_add_func_int16_t_s_s(((p_9 , ((((((((-1L) != p_10) <= p_10) , (*g_1069)) && 65535UL) , (void*)0) == l_3557) || l_3549)) || 1L), 1UL))) , 0x29A31D8C77FC1419LL))))) , (-9L)));
            }
            return l_3554[0].f0;
        }
        for (g_695 = 0; (g_695 != 36); g_695 = safe_add_func_uint8_t_u_u(g_695, 9))
        {
            union U1 l_3575 = {1UL};
            uint8_t *l_3590 = (void*)0;
            uint64_t **l_3600 = &l_3510;
            uint64_t **l_3602 = &l_3510;
            uint64_t **l_3603[10][7][3] = {{{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510}},{{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510}},{{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510}},{{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510}},{{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510}},{{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510}},{{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510}},{{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510}},{{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510}},{{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510},{&l_3510,&l_3510,&l_3510}}};
            int32_t l_3619 = 0x40C0E8F0L;
            int32_t l_3635 = 1L;
            int32_t l_3636[3];
            uint32_t *l_3660[9][9] = {{&l_3575.f0,&l_3575.f0,(void*)0,&l_3575.f0,&l_3575.f0,(void*)0,&l_3575.f0,&l_3575.f0,(void*)0},{&g_276,&g_276,&l_3575.f0,&g_276,&g_276,&l_3575.f0,&g_276,&g_276,&l_3575.f0},{&l_3575.f0,&l_3575.f0,(void*)0,&l_3575.f0,&l_3575.f0,(void*)0,&l_3575.f0,&l_3575.f0,(void*)0},{&g_276,&g_276,&l_3575.f0,&g_276,&g_276,&l_3575.f0,&g_276,&g_276,&l_3575.f0},{&l_3575.f0,&l_3575.f0,(void*)0,&l_3575.f0,&l_3575.f0,(void*)0,&l_3575.f0,&l_3575.f0,(void*)0},{&g_276,&g_276,&l_3575.f0,&g_276,&g_276,&l_3575.f0,&g_276,&g_276,&l_3575.f0},{&l_3575.f0,&l_3575.f0,(void*)0,&l_3575.f0,&l_3575.f0,(void*)0,&l_3575.f0,&l_3575.f0,(void*)0},{&g_276,&g_276,&l_3575.f0,&g_276,&g_276,&l_3575.f0,&g_276,&g_276,&l_3575.f0},{&l_3575.f0,&l_3575.f0,(void*)0,&l_3575.f0,&l_3575.f0,(void*)0,&l_3575.f0,&l_3575.f0,(void*)0}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_3636[i] = 1L;
            for (g_1161 = 12; (g_1161 == 43); g_1161 = safe_add_func_uint16_t_u_u(g_1161, 6))
            {
                uint64_t l_3564 = 0xA67A7CCBD3A9CF81LL;
                int32_t l_3576 = (-1L);
                int32_t **l_3579 = &g_1176[6][1][0];
                int16_t *** const l_3581 = &g_641;
                int16_t ***l_3582 = &g_641;
                int32_t l_3618 = 1L;
                int32_t l_3620[7][3] = {{0xC3170CD7L,0L,0xC3170CD7L},{0x834E3261L,0x68283355L,0x4B09FC31L},{(-5L),(-5L),(-10L)},{1L,0x68283355L,0x68283355L},{(-10L),0L,0L},{0x4B09FC31L,0x834E3261L,0x4B09FC31L},{(-10L),0xC3170CD7L,0L}};
                int32_t l_3634 = 0x34C51C9DL;
                uint32_t l_3643 = 1UL;
                uint32_t **l_3659[4];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_3659[i] = &g_423;
                for (g_2543.f0 = 0; (g_2543.f0 <= 3); g_2543.f0 += 1)
                {
                    uint8_t *l_3580 = &g_2365;
                    int32_t l_3617[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_3617[i] = 5L;
                    if ((((+(l_3564 ^ (((((((*l_3580) &= (safe_mod_func_int8_t_s_s(1L, (~((*g_684) = (safe_mod_func_uint32_t_u_u((0x572CL || (safe_lshift_func_int8_t_s_s(l_3505[0][1], 5))), ((safe_add_func_int32_t_s_s((((~(l_3575 , ((l_3576 = (-1L)) , ((((safe_add_func_int16_t_s_s((((l_3579 = (void*)0) == (void*)0) == ((l_3554[0].f0 <= p_11) & 1UL)), 0L)) < p_8) , (void*)0) == (void*)0)))) >= (****g_658)) , 0xE559C24AL), p_8)) || p_11)))))))) ^ (*****g_1928)) >= 3L) != p_10) , l_3581) == l_3582))) > p_9) == 0x9B396DC0L))
                    {
                        uint8_t *l_3589 = &g_722;
                        const uint8_t *l_3592 = &g_756;
                        const uint8_t **l_3591 = &l_3592;
                        uint64_t ***l_3601 = &l_3509;
                        union U0 *l_3607 = &g_3608;
                        int32_t *l_3609 = (void*)0;
                        int32_t *l_3610 = &g_2846;
                        int32_t *l_3611 = &g_2846;
                        int32_t *l_3612 = &g_706;
                        int32_t *l_3614 = (void*)0;
                        int32_t *l_3615[6] = {&l_3576,&l_3576,&g_590,&l_3576,&l_3576,&g_590};
                        int i;
                        p_11 = ((((safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((((*l_3607) = ((((l_3590 = l_3589) == ((*l_3591) = l_3580)) > ((*****g_1928) &= ((l_3554[g_2543.f0] = (g_103[g_2543.f0] = l_3554[0])) , (3UL & (((p_11 > (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((~(++(*l_3510))) , (((*l_3601) = l_3600) != (l_3603[9][3][2] = (l_3602 = l_3600)))), (((void*)0 != l_3604[0]) , 0L))) == (*g_684)), p_8))) | 0xDFA6L) >= 4294967295UL))))) , l_3554[g_2543.f0])) , 0x54591EBDL), l_3575.f1)), l_3575.f1)) != (**g_1230)), p_9)) >= l_3505[0][2]) < p_10) & p_8);
                        l_3624[0]--;
                    }
                    else
                    {
                        int32_t *l_3627 = &g_590;
                        int32_t *l_3628 = &l_3620[1][1];
                        int32_t *l_3629 = &l_3616;
                        int32_t *l_3630 = &l_3515;
                        int32_t *l_3631 = &l_3613[3][0][0];
                        int32_t *l_3632 = &l_3619;
                        int32_t *l_3633[5] = {&l_3620[2][0],&l_3620[2][0],&l_3620[2][0],&l_3620[2][0],&l_3620[2][0]};
                        int i;
                        l_3637++;
                        (**g_1766) = &p_9;
                    }
                    return p_11;
                }
                for (g_706 = 0; (g_706 >= (-11)); g_706--)
                {
                    uint8_t l_3642 = 7UL;
                    l_3613[3][0][0] = ((l_3642 ^ ((*g_1804) == (void*)0)) | 0x0C95L);
                }
                (**g_1766) = ((*g_3025) = &l_3635);
                (**g_1230) = (((((func_95(&l_3505[0][2]) , (l_3643 & ((safe_add_func_uint32_t_u_u((l_3634 != (safe_rshift_func_uint16_t_u_u(65527UL, 2))), (safe_mul_func_int8_t_s_s(0L, ((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s(0xAEF48F1E864ECBA9LL, l_3620[0][1])), 5)), ((((l_3660[6][0] = l_3658) == l_3658) | l_3634) , 0x4B9DL))), p_10)) <= (**g_1230)))))) < p_10))) | p_9) > (-9L)) <= p_10) != p_8);
            }
            if ((**g_1230))
                continue;
        }
        (*g_1231) ^= 0xD8567540L;
        l_3661 = &p_9;
    }
    return p_9;
}







static uint64_t func_19(int8_t p_20, int32_t p_21)
{
    int32_t *l_3492 = &g_706;
    (*g_1231) ^= 0x121B5131L;
    if (g_1232)
        goto lbl_3491;
lbl_3491:
    (*g_1231) &= 0xE5BAA8D1L;
    (*g_1231) ^= p_21;
    l_3492 = l_3492;
    return (*l_3492);
}







static const int8_t func_22(uint32_t p_23, int8_t p_24, uint64_t p_25)
{
    int8_t l_40 = 0L;
    int16_t *l_57 = &g_58;
    uint8_t *l_61 = &g_62;
    int32_t l_67 = 0xEF5EAD4AL;
    int64_t l_68 = 0x15869B92B2C22B60LL;
    const uint32_t l_69 = 0xDE151060L;
    int32_t *l_70 = &g_71;
    uint32_t l_2372 = 4294967295UL;
    uint64_t l_2373 = 0x85E0D9DEE0D5841BLL;
    int64_t **l_3294 = &g_684;
    int32_t l_3340 = 0xE6B4C3B0L;
    int32_t l_3341 = 0x6F02A122L;
    int32_t l_3344 = 0x5F157293L;
    int32_t l_3350 = 0x683F989BL;
    int32_t l_3352 = 0xCC07A18AL;
    int32_t l_3358 = 1L;
    int32_t l_3360[3];
    uint32_t l_3388 = 0xD2E49349L;
    union U1 *l_3393 = &g_325[1];
    uint32_t l_3435 = 0x3B7D46F3L;
    int32_t ****l_3454 = &g_3024[3][1][3];
    int32_t *****l_3453[8][9] = {{&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454},{(void*)0,&l_3454,&l_3454,&l_3454,&l_3454,(void*)0,&l_3454,&l_3454,&l_3454},{&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454},{&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454},{(void*)0,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,&l_3454},{&l_3454,&l_3454,&l_3454,(void*)0,&l_3454,&l_3454,(void*)0,&l_3454,&l_3454},{&l_3454,(void*)0,&l_3454,&l_3454,&l_3454,(void*)0,(void*)0,&l_3454,&l_3454},{&l_3454,&l_3454,&l_3454,&l_3454,&l_3454,(void*)0,&l_3454,&l_3454,&l_3454}};
    int16_t l_3467 = (-1L);
    int64_t l_3471 = 0x4FCB7D9ABF6F0C5ELL;
    uint8_t l_3475[7][8] = {{6UL,249UL,1UL,1UL,1UL,249UL,6UL,255UL},{0x1BL,0x43L,1UL,248UL,0x17L,1UL,8UL,0x4FL},{250UL,8UL,248UL,0xFFL,0x17L,255UL,1UL,1UL},{0x1BL,1UL,0x4FL,0x4FL,1UL,0x1BL,0UL,250UL},{6UL,1UL,250UL,249UL,248UL,0x1AL,1UL,0UL},{0x43L,248UL,0UL,249UL,0x4FL,250UL,0UL,250UL},{255UL,0x4FL,4UL,0x4FL,255UL,8UL,248UL,1UL}};
    union U0 l_3488 = {0xED606A2680EB1AC6LL};
    int i, j;
    for (i = 0; i < 3; i++)
        l_3360[i] = (-8L);
    if (func_30(p_24, (safe_lshift_func_uint16_t_u_s((((safe_mul_func_uint8_t_u_u(((0xAD11E7587697AB83LL && (l_40 | (safe_mod_func_uint16_t_u_u(l_40, func_43(func_46(((*l_70) = (safe_sub_func_int32_t_s_s(((p_24 | g_4) == (((safe_lshift_func_int8_t_s_u((((*l_57) = (safe_add_func_uint16_t_u_u(p_25, 0x25CCL))) <= (((safe_add_func_uint8_t_u_u((--(*l_61)), (((safe_mul_func_uint8_t_u_u((l_67 ^= g_4), 0xF1L)) <= 0xD40F69FFL) | p_23))) ^ l_40) < l_68)), p_25)) & l_69) <= 0x3E235BD6L)), g_4))), g_4), p_25))))) > l_69), (-1L))) > l_68) > 0UL), l_40)), l_2372, l_2373, l_68))
    {
        int32_t *l_3289 = &g_590;
        union U1 **l_3292 = &g_735;
        int32_t l_3333 = (-7L);
        int32_t l_3335 = 1L;
        int32_t l_3338 = 0xB485F663L;
        int32_t l_3339 = 0xD0D5D87DL;
        int32_t l_3342[6];
        int64_t **l_3376[3];
        int16_t l_3421 = 0x823BL;
        uint8_t *l_3487 = &l_3475[6][6];
        int i;
        for (i = 0; i < 6; i++)
            l_3342[i] = (-1L);
        for (i = 0; i < 3; i++)
            l_3376[i] = (void*)0;
        (*l_3289) |= (**g_1230);
lbl_3323:
        (**g_1766) = (void*)0;
        for (g_1161 = 0; (g_1161 > 9); g_1161++)
        {
            uint32_t l_3293[9][1][2] = {{{18446744073709551615UL,0x32725A62L}},{{18446744073709551615UL,18446744073709551615UL}},{{0x32725A62L,18446744073709551615UL}},{{18446744073709551615UL,0x32725A62L}},{{18446744073709551615UL,18446744073709551615UL}},{{0x32725A62L,18446744073709551615UL}},{{18446744073709551615UL,0x32725A62L}},{{18446744073709551615UL,18446744073709551615UL}},{{0x32725A62L,18446744073709551615UL}}};
            const int32_t *l_3298 = &g_79;
            int32_t l_3334[9][5][4] = {{{0x022EE39EL,0x541529E0L,1L,1L},{0xC148B04EL,0x1BFF25EBL,0x07165A12L,5L},{(-1L),0x1FE4FB6DL,0x395C99C0L,0xCDA3FCC3L},{1L,1L,1L,1L},{9L,1L,0xC1C8FEF5L,0x2708B603L}},{{0xCDA3FCC3L,0xC148B04EL,0xEF7F1356L,1L},{(-6L),0x745D3B84L,(-2L),(-1L)},{0L,1L,0xE701B32CL,(-6L)},{0x2708B603L,0x022EE39EL,0x20BB7755L,0x07165A12L},{0x20BB7755L,0x07165A12L,0xEF7F1356L,0L}},{{9L,0x6F67DF11L,0L,0xCDA3FCC3L},{0x0AC8F439L,0xEF7F1356L,0x482E6DD3L,0xE701B32CL},{0x59A5A08BL,1L,1L,0x59A5A08BL},{(-6L),(-2L),0x1BFF25EBL,0x1FE4FB6DL},{0x395C99C0L,0xC148B04EL,0L,1L}},{{1L,0x59A5A08BL,0x6A30227AL,1L},{1L,0xC148B04EL,5L,0x1FE4FB6DL},{0x38D7D380L,(-2L),0x6F67DF11L,0x59A5A08BL},{0x482E6DD3L,1L,0x022EE39EL,0xE701B32CL},{1L,0xEF7F1356L,0xC148B04EL,0xCDA3FCC3L}},{{0x022EE39EL,0x6F67DF11L,(-1L),0L},{(-2L),0x07165A12L,1L,0x07165A12L},{(-5L),0x022EE39EL,9L,(-6L)},{1L,1L,0xCDA3FCC3L,(-1L)},{(-1L),4L,(-6L),0x20BB7755L}},{{(-1L),0x0AC8F439L,0xCDA3FCC3L,0xBF31E332L},{1L,0x20BB7755L,9L,0x541529E0L},{(-5L),0x1FE4FB6DL,1L,0L},{(-2L),1L,(-1L),0x395C99C0L},{0x022EE39EL,0x38D7D380L,0xC148B04EL,0x745D3B84L}},{{1L,5L,0x022EE39EL,0x022EE39EL},{0x482E6DD3L,0x482E6DD3L,0x6F67DF11L,4L},{0x38D7D380L,0xBF31E332L,5L,(-2L)},{1L,0x395C99C0L,0x6A30227AL,5L},{1L,0x395C99C0L,0L,(-2L)}},{{0x395C99C0L,0xBF31E332L,0x1BFF25EBL,4L},{(-6L),0x482E6DD3L,1L,0x022EE39EL},{0x59A5A08BL,5L,0x482E6DD3L,0x745D3B84L},{0x0AC8F439L,0x38D7D380L,0L,0x395C99C0L},{9L,1L,0xEF7F1356L,0L}},{{0x20BB7755L,0x1FE4FB6DL,0x20BB7755L,0x541529E0L},{0x2708B603L,0x20BB7755L,0xE701B32CL,0xBF31E332L},{0L,0x0AC8F439L,(-2L),0x20BB7755L},{0xC148B04EL,4L,(-2L),(-1L)},{0L,1L,0xE701B32CL,(-6L)}}};
            int8_t ***l_3373[4] = {&g_1782,&g_1782,&g_1782,&g_1782};
            int64_t l_3379 = 0xA971AFDEFB0CED40LL;
            int32_t l_3432 = (-1L);
            uint8_t l_3446 = 3UL;
            int32_t ****l_3452 = &g_3024[1][1][1];
            int32_t *****l_3451 = &l_3452;
            int i, j, k;
            if ((l_3292 == (void*)0))
            {
                int16_t l_3317 = (-1L);
                int32_t l_3319 = 6L;
                int16_t l_3336 = 1L;
                int32_t l_3343 = 0x56F27072L;
                int8_t l_3345 = 0xE4L;
                int32_t l_3347 = 1L;
                int32_t l_3348 = 5L;
                int32_t l_3349 = (-1L);
                int32_t l_3351 = (-1L);
                int32_t l_3353 = 0xA839FB5EL;
                int32_t l_3354 = 0xF0336FD9L;
                int32_t l_3355 = 0x345A786BL;
                int8_t l_3356 = (-1L);
                int32_t l_3357[3][3][5] = {{{(-1L),(-10L),0x8278354BL,0x8278354BL,(-10L)},{(-7L),0x006DB834L,0x6715B95DL,0x6715B95DL,0x006DB834L},{(-1L),(-10L),0x8278354BL,0x8278354BL,(-10L)}},{{(-7L),0x006DB834L,0x6715B95DL,0x6715B95DL,0x006DB834L},{(-1L),(-10L),0x8278354BL,0x8278354BL,(-10L)},{(-7L),0x006DB834L,0x6715B95DL,0x6715B95DL,0x006DB834L}},{{(-1L),(-10L),0x8278354BL,(-10L),(-5L)},{(-1L),(-1L),0x006DB834L,0x006DB834L,(-1L)},{8L,(-5L),(-10L),(-10L),(-5L)}}};
                int32_t l_3359 = 0x64FE7EFFL;
                int i, j, k;
                if (l_3293[3][0][1])
                    break;
                (*g_1231) &= p_25;
                if (((((*l_3289) , ((void*)0 != l_3294)) >= ((**g_641) = p_24)) , (~p_23)))
                {
                    int32_t *l_3302 = &g_2846;
                    const int64_t * const **l_3309[2];
                    const int64_t * const ***l_3308 = &l_3309[0];
                    const int64_t * const *** const * const l_3307[8][1] = {{&l_3308},{&l_3308},{&l_3308},{&l_3308},{&l_3308},{&l_3308},{&l_3308},{&l_3308}};
                    uint8_t ****l_3312 = &g_659[1];
                    int32_t **l_3318 = &g_1176[6][0][0];
                    uint64_t l_3320[1][10] = {{18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_3309[i] = (void*)0;
                    for (g_127 = 0; (g_127 != (-25)); g_127 = safe_sub_func_uint32_t_u_u(g_127, 5))
                    {
                        const uint64_t l_3299 = 0x7F0C8C064BCF5F2DLL;
                        (**g_1766) = l_3298;
                        if (l_3299)
                            continue;
                        l_67 = (safe_lshift_func_int8_t_s_s(p_23, 6));
                        (**g_1766) = l_3302;
                    }
                    (*g_1231) = (p_25 , (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((&g_2792 == l_3307[6][0]) || ((p_23 > ((((((safe_mul_func_uint16_t_u_u(0x8A02L, ((l_3312 != (void*)0) == (l_3317 = (safe_mul_func_uint8_t_u_u(0UL, (safe_rshift_func_uint8_t_u_s(0x30L, 2)))))))) | (-3L)) , l_3318) == (void*)0) || (-1L)) , l_3319)) <= 5UL)), 0xD2E53F7BL)), l_3320[0][8])));
                }
                else
                {
                    int16_t l_3331 = 0L;
                    int32_t l_3332 = 7L;
                    int32_t l_3337 = 0x6EF66E46L;
                    int32_t l_3346[4][2][10] = {{{0L,(-1L),(-1L),0x30EEC2EBL,(-1L),(-1L),0x9D119FC5L,(-1L),(-1L),0x30EEC2EBL},{0x30EEC2EBL,0L,0x30EEC2EBL,(-1L),(-1L),0L,1L,0x181872C8L,0x181872C8L,1L}},{{(-1L),0x9D119FC5L,0L,0L,0x9D119FC5L,(-1L),0L,0x181872C8L,0x4B27AC84L,(-1L)},{0L,(-1L),0x30EEC2EBL,(-2L),0x181872C8L,(-2L),0x30EEC2EBL,(-1L),0L,(-1L)}},{{0L,0L,(-1L),0L,(-2L),(-1L),(-1L),(-2L),0L,(-1L)},{(-1L),(-1L),(-2L),0L,(-1L),0L,0L,1L,0L,0L}},{{0x30EEC2EBL,(-2L),0x181872C8L,(-2L),0x30EEC2EBL,(-1L),0L,(-1L),0x4B27AC84L,0x4B27AC84L},{0L,(-1L),0x9D119FC5L,0L,0L,0x9D119FC5L,(-1L),0L,0x181872C8L,0x4B27AC84L}}};
                    int32_t *l_3365 = &g_73;
                    uint8_t l_3380 = 247UL;
                    int i, j, k;
                    for (g_2302 = 0; (g_2302 != 60); g_2302++)
                    {
                        int16_t l_3324 = 0x3C66L;
                        int32_t *l_3325 = &g_706;
                        int32_t *l_3326 = (void*)0;
                        int32_t *l_3327 = &g_1232;
                        int32_t *l_3328 = (void*)0;
                        int32_t *l_3329 = &g_73;
                        int32_t *l_3330[6];
                        uint16_t l_3362 = 0xF397L;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_3330[i] = (void*)0;
                        if (g_1684)
                            goto lbl_3323;
                        if ((*l_3298))
                            continue;
                        l_3362--;
                    }
                    (*g_3025) = l_3365;
                    if (((*l_3365) = (((*g_684) &= ((safe_mul_func_int16_t_s_s(((*l_3298) | ((((safe_unary_minus_func_int8_t_s(((safe_add_func_uint32_t_u_u(p_23, (-1L))) & (((p_25 < (safe_rshift_func_int16_t_s_u((((*g_1929) = l_3373[0]) == (void*)0), 7))) != 18446744073709551609UL) && (0xE400L & ((void*)0 != l_3376[2])))))) == p_24) && p_25) & 0x3D317E89L)), (**g_641))) | p_24)) ^ 18446744073709551608UL)))
                    {
                        int32_t *l_3377 = &l_3349;
                        int32_t *l_3378[1][8] = {{&l_3342[3],&l_3357[1][0][1],&l_3342[3],&l_3357[1][0][1],&l_3342[3],&l_3357[1][0][1],&l_3342[3],&l_3357[1][0][1]}};
                        int i, j;
                        ++l_3380;
                        (*g_734) = (*g_734);
                        (*l_3289) = 0x35D56AEFL;
                    }
                    else
                    {
                        (*l_3365) ^= l_68;
                    }
                }
            }
            else
            {
                uint16_t *l_3385 = (void*)0;
                const int32_t l_3394 = (-1L);
                int16_t l_3395 = 0xFE0BL;
                uint32_t l_3422[8][3] = {{0x2C2707A8L,0UL,0x2C2707A8L},{4294967287UL,4294967287UL,4294967287UL},{0x2C2707A8L,0UL,0x2C2707A8L},{4294967287UL,4294967287UL,4294967287UL},{0x2C2707A8L,0UL,0x2C2707A8L},{4294967287UL,4294967287UL,4294967287UL},{0x2C2707A8L,0UL,0x2C2707A8L},{4294967287UL,4294967287UL,4294967287UL}};
                int32_t l_3424 = 0L;
                int32_t l_3433 = 0x7A69E406L;
                int32_t l_3434[6][10][4] = {{{0xFEDBB5E1L,1L,0x133FB322L,0xC5B33C62L},{0x6EAC5B77L,0L,0xC8918D1CL,0x71B32A7BL},{0xE61691DCL,0x16A28A06L,0x5E18654EL,(-1L)},{0x59773444L,(-3L),0x5515608CL,0x29193F56L},{(-3L),0L,0xC295032DL,0x59773444L},{0x6494C6F8L,0xFEDBB5E1L,0x47CF1B08L,(-9L)},{2L,0x29193F56L,0x278ECA9FL,0x7D37B993L},{0xC5D2333EL,0x281EE5F8L,0x295AA437L,(-8L)},{(-1L),(-5L),0x48D3E234L,0x0255123FL},{0x2205506DL,2L,(-7L),(-1L)}},{{0x6EAC5B77L,(-5L),0x6494C6F8L,2L},{0x47CF1B08L,1L,(-9L),0x5E18654EL},{0x7DEF6814L,0xE61691DCL,(-5L),0x281EE5F8L},{8L,0x7D9977B0L,0L,(-1L)},{0x1B29DE34L,0x692AB6DEL,0x664214F6L,(-7L)},{0xC62FE3EEL,0x295AA437L,0x59773444L,1L},{(-1L),(-5L),(-5L),(-1L)},{(-3L),0x6494C6F8L,0x3DA93B86L,0L},{0x692AB6DEL,(-8L),0x7DEF6814L,(-1L)},{0L,1L,0x1B29DE34L,(-1L)}},{{0x664214F6L,(-8L),0x8911B573L,0L},{(-1L),0x6494C6F8L,0xF61DF10BL,(-1L)},{1L,(-5L),0x384C24D2L,1L},{0L,0x295AA437L,(-1L),(-7L)},{0xC295032DL,0x692AB6DEL,(-1L),(-1L)},{(-5L),0x7D9977B0L,0x278ECA9FL,0x281EE5F8L},{(-1L),0xE61691DCL,0x3DA93B86L,0L},{(-1L),0x0255123FL,(-1L),(-8L)},{(-8L),0x133FB322L,0L,0xAD6AC632L},{(-1L),(-8L),0x45D636B9L,0xC23D8927L}},{{1L,0x0EFCC735L,(-1L),0x2C85B96AL},{8L,(-8L),0x8911B573L,3L},{0L,0x281EE5F8L,(-3L),0x384C24D2L},{0x0255123FL,7L,0xF61DF10BL,1L},{0x48D3E234L,0x5515608CL,0x7D9977B0L,0x281EE5F8L},{0x664214F6L,(-1L),6L,0x8911B573L},{(-5L),0xC62FE3EEL,0x7DEF6814L,(-9L)},{0xC62FE3EEL,0x5515608CL,0L,0L},{(-3L),0x0255123FL,(-4L),0x384C24D2L},{0x47CF1B08L,0x6494C6F8L,0x59773444L,0L}},{{(-1L),(-8L),0x45D636B9L,0xC8918D1CL},{0x1B29DE34L,0x21625CCBL,0x1B29DE34L,0xC23D8927L},{0xC295032DL,(-1L),(-5L),3L},{0x48D3E234L,0x133FB322L,(-8L),(-1L)},{0x265CACC4L,1L,(-8L),0L},{0x48D3E234L,0x9FF12A67L,(-5L),(-9L)},{0xC295032DL,0x7D9977B0L,0x1B29DE34L,0xC62FE3EEL},{0x1B29DE34L,0xC62FE3EEL,0x45D636B9L,(-7L)},{(-1L),0xE61691DCL,0x59773444L,(-5L)},{0x47CF1B08L,(-5L),(-4L),0x47CF1B08L}},{{(-3L),0x281EE5F8L,0L,0L},{0xC62FE3EEL,(-1L),0x7DEF6814L,0xC8918D1CL},{(-5L),1L,6L,0x2C85B96AL},{0x664214F6L,0x47CF1B08L,0x7D9977B0L,0L},{0x48D3E234L,(-9L),0xF61DF10BL,(-8L)},{0x0255123FL,(-5L),(-3L),0L},{0L,0x9FF12A67L,0x8911B573L,(-7L)},{8L,(-1L),(-1L),0x692AB6DEL},{1L,0x7D9977B0L,0x45D636B9L,0x6494C6F8L},{(-1L),0x295AA437L,0L,0xB41783C3L}}};
                int64_t *****l_3443[6][4][7] = {{{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792}},{{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792}},{{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792}},{{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792}},{{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792}},{{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792},{&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792,&g_2792}}};
                int32_t *l_3458 = (void*)0;
                uint32_t l_3461 = 0UL;
                int i, j, k;
                if ((((((((safe_add_func_uint8_t_u_u(((l_3385 == l_3385) == (**g_1861)), (((safe_add_func_int8_t_s_s(((*****g_1928) = (*****g_1928)), (*l_3298))) <= ((((((*g_2860) = (((((((((****g_658) , ((l_3388 > (((safe_mod_func_int64_t_s_s((0xD297130CAF79FE9DLL && ((p_24 , p_25) != 0x12L)), (-1L))) , (*g_734)) == l_3393)) , 4UL)) && p_24) , 0UL) , (*l_3289)) <= (*l_3298)) >= (*l_3289)) , (void*)0) != (*g_1861))) == 0x298B0E1EL) && (*l_3289)) ^ (-4L)) && l_3394)) && 5UL))) != 255UL) | (*l_3289)) >= l_3395) & l_3388) >= p_25) & 254UL))
                {
                    uint64_t l_3404 = 0xE93484EC732B6B16LL;
                    int32_t l_3425 = (-3L);
                    (*l_3289) = ((*g_735) , ((**g_1230) = (-8L)));
                    for (g_127 = 3; (g_127 >= 0); g_127 -= 1)
                    {
                        uint64_t *l_3418 = &g_177;
                        int32_t l_3423 = 0xBAECC7FBL;
                        int32_t *l_3426 = &g_2846;
                        int32_t *l_3427 = &l_3423;
                        int32_t *l_3428 = &l_3335;
                        int32_t *l_3429 = &l_67;
                        int32_t *l_3430 = &g_706;
                        int32_t *l_3431[6][8][1] = {{{&l_3344},{&l_3342[4]},{&g_706},{&l_3342[4]},{&l_3344},{&l_3341},{&l_3360[0]},{&l_3423}},{{&l_3338},{&l_3334[7][1][0]},{&l_3338},{&l_3423},{&l_3360[0]},{&l_3341},{&l_3344},{&l_3342[4]}},{{&g_706},{&l_3342[4]},{&l_3344},{&l_3341},{&l_3360[0]},{&l_3423},{&l_3344},{&l_3342[3]}},{{&l_3344},{&l_3334[7][1][0]},{&l_3334[1][2][0]},{&l_3334[1][2][0]},{&g_706},{&l_3423},{(void*)0},{&l_3423}},{{&g_706},{&l_3334[1][2][0]},{&l_3334[1][2][0]},{&l_3334[7][1][0]},{&l_3344},{&l_3342[3]},{&l_3344},{&l_3334[7][1][0]}},{{&l_3334[1][2][0]},{&l_3334[1][2][0]},{&g_706},{&l_3423},{(void*)0},{&l_3423},{&g_706},{&l_3334[1][2][0]}}};
                        int i, j, k;
                        l_3423 = (l_3424 &= (safe_mod_func_int64_t_s_s(((safe_sub_func_int64_t_s_s((*l_3289), (((((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_3422[5][2] &= (((((l_3404 ^ (safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u(l_68, (safe_lshift_func_int16_t_s_u((((~(&g_642 == &g_642)) & (((((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_div_func_uint16_t_u_u((((p_25 == ((*l_3418) = ((**g_1230) < p_24))) == ((((safe_lshift_func_int8_t_s_u(p_25, 6)) , (*l_3289)) ^ p_23) && (*l_3298))) != (-10L)), p_23)) >= (-5L)) , (**g_1861)), l_3421)), (*****g_1928))) , 0x1EL) != (*g_538)) > p_24) && 4294967286UL)) , (*g_642)), 4)))), l_3404))) , p_23) == 0xD5FFL) || l_3358) <= (*l_3289))), (*l_3289))), 8UL)) <= (*g_642)) || 0x25L) >= 0x2801L) & (*g_642)))) == l_3423), p_23)));
                        l_3425 = (1UL >= 7UL);
                        --l_3435;
                    }
                }
                else
                {
                    int32_t **l_3442 = &g_197;
                    int32_t *l_3444 = &l_3358;
                    int32_t *l_3445[4] = {&l_3334[3][1][0],&l_3334[3][1][0],&l_3334[3][1][0],&l_3334[3][1][0]};
                    int i;
                    l_3344 ^= ((((void*)0 != &l_3434[4][2][3]) > ((*g_2860)++)) != (((*l_3298) < 0xB7FF5824L) && (((&g_659[1] != (void*)0) ^ ((l_3442 == ((*g_1766) = (*g_1766))) != ((void*)0 == l_3443[1][3][5]))) <= 1UL)));
                    l_3446--;
                }
                for (g_1160 = 2; (g_1160 < 6); g_1160 = safe_add_func_uint8_t_u_u(g_1160, 7))
                {
                    int32_t *l_3457 = &l_3350;
                    l_3298 = &l_3334[1][2][0];
                    (**g_1230) = 0xB335E68FL;
                    l_3453[7][1] = l_3451;
                    for (l_3350 = 10; (l_3350 < 20); l_3350 = safe_add_func_int16_t_s_s(l_3350, 1))
                    {
                        l_3458 = l_3457;
                    }
                }
                for (g_177 = (-24); (g_177 < 2); ++g_177)
                {
                    (*g_1231) ^= 0x5C6ABF34L;
                }
                l_3461++;
            }
            return (*l_3289);
        }
        for (g_139 = (-19); (g_139 != 3); g_139++)
        {
            int8_t l_3466 = 0x98L;
            int32_t l_3468 = (-7L);
            int32_t l_3469 = 0x3D847A55L;
            int32_t l_3470 = 0L;
            int32_t l_3472 = (-1L);
            int32_t l_3473[10] = {0xB13A44B5L,1L,0xB13A44B5L,1L,0xB13A44B5L,1L,0xB13A44B5L,1L,0xB13A44B5L,1L};
            int64_t l_3474 = 2L;
            const int32_t l_3486 = 0x1FFAA461L;
            int i;
            l_3475[6][6]--;
            (**g_1230) = (**g_1230);
            (*g_1231) = (((safe_add_func_int8_t_s_s(((((*g_538) = ((-10L) >= p_24)) | (-1L)) , (safe_div_func_int16_t_s_s(((*l_3289) | (safe_add_func_int32_t_s_s((((*l_3289) & (safe_mul_func_int8_t_s_s(p_24, (((((((p_24 ^ l_3469) && (l_3473[1] | 18446744073709551615UL)) >= 4294967295UL) <= 0x3CL) == l_3486) == p_23) == (*l_3289))))) != l_3474), (*l_3289)))), p_24))), 254UL)) , l_3487) == (***g_658));
            if (p_24)
                break;
        }
    }
    else
    {
        (*g_1231) = (l_3488 , (safe_sub_func_int32_t_s_s(2L, p_23)));
    }
    return p_24;
}







static int32_t func_30(int64_t p_31, uint8_t p_32, int32_t p_33, int32_t p_34, uint64_t p_35)
{
    uint8_t ***l_2383[4][1];
    const int32_t l_2398 = 0xF8EB2B0EL;
    int32_t l_2441[10][8][2] = {{{(-1L),(-9L)},{(-1L),(-1L)},{0x4A2C32C6L,(-8L)},{0x59FF7C63L,(-1L)},{0xC9F46CB0L,0x77BC5805L},{0x1B67CA8AL,0x872028D7L},{7L,(-1L)},{7L,0L}},{{(-4L),(-7L)},{1L,6L},{0L,0xD153DB88L},{0L,0xDFAF14F2L},{(-1L),0xBE285778L},{0xC0C0F085L,0x62EE6E60L},{0x6A9D1768L,0x6A9D1768L},{0x8544A0CAL,7L}},{{(-9L),(-4L)},{0x8A345A29L,0xA2C0B402L},{0L,0x8A345A29L},{0xA2346906L,7L},{0xA2346906L,0x8A345A29L},{0L,0xA2C0B402L},{0x8A345A29L,(-4L)},{(-9L),7L}},{{0x8544A0CAL,0x6A9D1768L},{0x6A9D1768L,0x62EE6E60L},{0xC0C0F085L,0xBE285778L},{(-1L),0xDFAF14F2L},{0L,0xD153DB88L},{0L,6L},{1L,(-7L)},{(-4L),0L}},{{7L,(-1L)},{7L,0x872028D7L},{0x1B67CA8AL,0x77BC5805L},{0xC9F46CB0L,(-1L)},{0x59FF7C63L,(-8L)},{0x4A2C32C6L,(-1L)},{(-1L),(-9L)},{(-1L),1L}},{{0x394E1FB7L,0x1B67CA8AL},{0x643C0284L,1L},{(-1L),0x873B9718L},{7L,0x068A4545L},{0xDFAF14F2L,0L},{0L,0x851DAB8FL},{0x77BC5805L,(-1L)},{0xABBFA854L,(-1L)}},{{0xEC345823L,0x8544A0CAL},{0x215A207CL,0x8544A0CAL},{0xEC345823L,(-1L)},{0xABBFA854L,(-1L)},{0x77BC5805L,0x851DAB8FL},{0L,0L},{0xDFAF14F2L,0x068A4545L},{7L,0x873B9718L}},{{(-1L),1L},{0x643C0284L,0x1B67CA8AL},{0x394E1FB7L,1L},{(-1L),(-9L)},{(-1L),(-1L)},{0x4A2C32C6L,(-8L)},{0x59FF7C63L,(-1L)},{0xC9F46CB0L,0x77BC5805L}},{{0x1B67CA8AL,0x872028D7L},{7L,(-1L)},{7L,0L},{(-4L),(-7L)},{1L,6L},{0L,0xD153DB88L},{0L,0xDFAF14F2L},{(-1L),0xBE285778L}},{{0xC0C0F085L,0x62EE6E60L},{0x6A9D1768L,0x6A9D1768L},{0x8544A0CAL,7L},{(-9L),0L},{(-7L),0x4A2C32C6L},{0xC9F46CB0L,(-7L)},{0L,0x394E1FB7L},{0L,(-7L)}}};
    int8_t l_2494 = 0x89L;
    int32_t **l_2551 = &g_1176[1][2][0];
    int32_t *l_2595[6] = {&g_513,&g_513,&g_513,&g_513,&g_513,&g_513};
    int32_t l_2634 = (-7L);
    int32_t **l_2641[1][3];
    int32_t ***l_2640 = &l_2641[0][0];
    int32_t ****l_2639 = &l_2640;
    uint32_t l_2671 = 8UL;
    union U1 l_2718 = {1UL};
    int64_t l_2744[7][7] = {{(-4L),0xA37A54743E03EB41LL,1L,0xA37A54743E03EB41LL,(-4L),0x4D62422819455490LL,0L},{0L,0L,0L,0xFBA242739A3A415DLL,0xFBA242739A3A415DLL,0L,0L},{0L,0x11FE8BE9C2C51C80LL,1L,0x97C51C8BDC662BFFLL,(-1L),0xA37A54743E03EB41LL,(-1L)},{0L,0xFBA242739A3A415DLL,0xFBA242739A3A415DLL,0L,0L,0L,0xFBA242739A3A415DLL},{(-4L),0x4D62422819455490LL,0L,0x97C51C8BDC662BFFLL,0L,0x4D62422819455490LL,(-4L)},{0x15778C4B1E4F3731LL,0xFBA242739A3A415DLL,1L,0xFBA242739A3A415DLL,0x15778C4B1E4F3731LL,0x15778C4B1E4F3731LL,0xFBA242739A3A415DLL},{0x2B26CBFC796D6318LL,0x11FE8BE9C2C51C80LL,0x2B26CBFC796D6318LL,0xA37A54743E03EB41LL,0L,0x4D3E44E821FD1B63LL,(-1L)}};
    uint32_t l_2745[2][3];
    int32_t l_2747 = 0L;
    int32_t l_2748[6];
    int32_t l_2749 = 0x4F3BA64CL;
    union U1 * const l_2757 = &g_2758;
    union U1 * const *l_2756 = &l_2757;
    uint16_t **l_2765 = &g_1069;
    uint16_t ***l_2764 = &l_2765;
    int32_t l_2799 = 0xA4D5CBF6L;
    uint32_t l_2825 = 18446744073709551612UL;
    uint8_t l_2838[7][8][2] = {{{0UL,252UL},{252UL,0UL},{2UL,253UL},{2UL,0UL},{252UL,252UL},{0UL,2UL},{253UL,2UL},{0UL,252UL}},{{252UL,0UL},{2UL,253UL},{2UL,0UL},{252UL,252UL},{0UL,2UL},{253UL,2UL},{0UL,252UL},{252UL,0UL}},{{2UL,253UL},{2UL,0UL},{252UL,252UL},{0UL,2UL},{253UL,2UL},{0UL,252UL},{252UL,0UL},{2UL,253UL}},{{2UL,0UL},{252UL,252UL},{0UL,2UL},{253UL,2UL},{0UL,252UL},{252UL,0UL},{2UL,253UL},{2UL,0UL}},{{252UL,252UL},{0UL,2UL},{253UL,2UL},{0UL,252UL},{252UL,0UL},{2UL,253UL},{2UL,0UL},{252UL,252UL}},{{0UL,2UL},{253UL,2UL},{0UL,252UL},{252UL,0UL},{2UL,253UL},{2UL,0UL},{252UL,252UL},{0UL,2UL}},{{253UL,2UL},{0UL,252UL},{252UL,0UL},{2UL,253UL},{2UL,0UL},{252UL,252UL},{0UL,2UL},{253UL,2UL}}};
    uint32_t ****l_2890 = &g_960;
    uint16_t l_2894 = 65530UL;
    uint32_t l_2901 = 0xEDAA46B1L;
    uint16_t l_2935 = 1UL;
    int32_t *l_2987 = &g_79;
    uint32_t l_3027 = 0xF60DE1CBL;
    int16_t l_3057[1];
    union U0 **l_3066 = &g_446;
    int32_t * const **l_3084 = &g_1230;
    int32_t * const ***l_3083 = &l_3084;
    union U0 l_3091 = {0x8C349F5B2A3FBAD6LL};
    int32_t l_3116[3][3] = {{0x7218A51BL,(-1L),0x7218A51BL},{0x7218A51BL,(-1L),0x7218A51BL},{0x7218A51BL,(-1L),0x7218A51BL}};
    int16_t *l_3177 = &g_2852;
    int8_t l_3199[4] = {0x55L,0x55L,0x55L,0x55L};
    uint32_t l_3222 = 0x8D6FCE46L;
    uint8_t l_3231 = 1UL;
    uint8_t l_3252 = 0x02L;
    int64_t ***l_3255 = &g_683[2][0][3];
    uint64_t *l_3259[7][6][2] = {{{&g_4,&g_103[3].f0},{&g_553[1][4],&g_553[5][0]},{&g_4,&g_1130},{&g_553[1][4],(void*)0},{&g_2873,&g_4},{&g_553[5][0],&g_177}},{{&g_1130,&g_2039},{&g_1130,&g_4},{&g_553[1][5],&g_553[5][0]},{&g_2873,&g_553[1][2]},{&g_2039,&g_553[1][2]},{&g_2873,&g_553[5][0]}},{{&g_553[1][5],&g_4},{&g_1130,&g_2039},{&g_1130,&g_177},{&g_553[5][0],&g_4},{&g_2873,(void*)0},{&g_553[1][4],&g_1130}},{{&g_4,&g_553[5][0]},{&g_553[1][4],&g_177},{(void*)0,&g_4},{&g_1130,&g_2039},{&g_553[1][5],&g_553[1][5]},{&g_4,(void*)0}},{{&g_1193,&g_553[1][2]},{&g_2039,&g_4},{&g_553[1][4],&g_2039},{&g_1130,&g_553[1][4]},{&g_1130,&g_2039},{&g_553[1][4],&g_4}},{{&g_2039,&g_553[1][2]},{&g_1193,(void*)0},{&g_4,&g_553[1][5]},{&g_553[1][5],&g_2039},{&g_1130,&g_4},{(void*)0,&g_177}},{{&g_553[1][4],&g_553[5][0]},{&g_4,&g_1130},{&g_553[1][4],(void*)0},{&g_2873,&g_4},{&g_553[5][0],&g_177},{&g_1130,&g_2039}}};
    union U0 ****l_3263 = (void*)0;
    int32_t l_3287[10][1] = {{(-8L)},{0x878B1A00L},{(-8L)},{0x07FEA823L},{0x07FEA823L},{(-8L)},{0x878B1A00L},{(-8L)},{0x07FEA823L},{0x07FEA823L}};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_2383[i][j] = &g_537;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_2641[i][j] = &g_197;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_2745[i][j] = 0x9B7B7A4FL;
    }
    for (i = 0; i < 6; i++)
        l_2748[i] = 1L;
    for (i = 0; i < 1; i++)
        l_3057[i] = 0xA286L;
    for (g_139 = 24; (g_139 <= 23); g_139--)
    {
        union U1 l_2393[10][3] = {{{0x534CB213L},{1UL},{0x47EF6ECDL}},{{0xB9D88F35L},{4UL},{0x47EF6ECDL}},{{0x510EA53AL},{0xB9D88F35L},{0x407EAEA6L}},{{0x43D191BAL},{0x43D191BAL},{0x534CB213L}},{{0x510EA53AL},{0x534CB213L},{0xB9D88F35L}},{{0xB9D88F35L},{0x534CB213L},{0x510EA53AL}},{{0x534CB213L},{0x43D191BAL},{0x43D191BAL}},{{0x407EAEA6L},{0xB9D88F35L},{0x510EA53AL}},{{0x47EF6ECDL},{4UL},{0xB9D88F35L}},{{0x47EF6ECDL},{1UL},{0x534CB213L}}};
        int32_t **l_2431 = (void*)0;
        int32_t ***l_2430 = &l_2431;
        int32_t l_2442 = 0xE677F625L;
        int32_t l_2443 = 0x98F07B8FL;
        uint32_t l_2521[7][2] = {{4294967293UL,0x976C57BCL},{4294967293UL,4294967287UL},{4294967295UL,4294967295UL},{4294967287UL,4294967293UL},{0x976C57BCL,4294967293UL},{4294967287UL,4294967295UL},{4294967295UL,4294967287UL}};
        union U0 *l_2542 = &g_2543;
        int32_t **l_2550[4] = {&g_1176[0][4][3],&g_1176[0][4][3],&g_1176[0][4][3],&g_1176[0][4][3]};
        union U1 ***l_2585 = &g_734;
        uint64_t l_2691 = 0x318D5816210B999FLL;
        uint64_t l_2702 = 0x0A3CFCE2949F4FFCLL;
        int32_t ** const *l_2723 = &l_2641[0][0];
        int32_t ** const **l_2722[2];
        int32_t ** const ***l_2721 = &l_2722[1];
        int16_t *l_2738[3][3][5] = {{{&g_1967[1],&g_1967[1],&g_1967[1],&g_1967[1],&g_1967[2]},{&g_1417,(void*)0,&g_58,&g_1417,&g_1967[1]},{(void*)0,&g_1967[1],&g_1967[1],&g_1967[1],&g_1967[1]}},{{&g_1967[1],(void*)0,&g_1967[1],&g_1417,&g_1967[1]},{(void*)0,&g_1967[1],&g_58,&g_58,&g_1417},{(void*)0,&g_1417,&g_1967[1],(void*)0,&g_1967[1]}},{{(void*)0,(void*)0,&g_1967[1],&g_1967[1],&g_1967[1]},{&g_1967[1],&g_1967[1],&g_1417,&g_1967[1],&g_1967[2]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_1967[1]}}};
        int64_t *l_2746[7] = {&l_2744[3][6],&l_2744[0][1],&l_2744[0][1],&l_2744[3][6],&l_2744[0][1],&g_703,&l_2744[0][1]};
        uint16_t **l_2763 = &g_1069;
        uint16_t ***l_2762 = &l_2763;
        const uint64_t l_2861 = 0xB1736FFD87232308LL;
        uint64_t l_2878 = 18446744073709551611UL;
        uint64_t l_2914[7] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        uint16_t **l_2928 = &g_1069;
        int16_t **l_2964 = &l_2738[2][0][4];
        uint8_t l_2966[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
        uint8_t l_3146[4];
        uint8_t l_3211 = 0UL;
        int32_t l_3237 = 0x9D089652L;
        uint16_t l_3247[3][6][6] = {{{65530UL,65531UL,5UL,0xF052L,0x47EFL,0xA064L},{0UL,65530UL,1UL,0x193AL,65535UL,0xF052L},{65530UL,0xCDB2L,65535UL,0xCDB2L,65530UL,65527UL},{65535UL,0xA064L,65534UL,0xCCD5L,0x46A1L,65530UL},{0xCDB2L,0x47EFL,0x4793L,0xA064L,1UL,65530UL},{65529UL,0xFB1CL,65534UL,65530UL,0xEF8AL,65527UL}},{{1UL,65534UL,65535UL,9UL,0x4793L,0xF052L},{0xA064L,5UL,1UL,1UL,5UL,0xA064L},{0x46A1L,9UL,5UL,0UL,0UL,0x193AL},{0xF052L,65530UL,65530UL,1UL,0xCDB2L,0xEF8AL},{0xF052L,65535UL,1UL,0UL,9UL,65535UL},{0x46A1L,0UL,65530UL,1UL,0x193AL,65535UL}},{{0xA064L,65535UL,9UL,9UL,9UL,65535UL},{1UL,0xF052L,0xFB1CL,65530UL,0xA064L,65531UL},{65529UL,4UL,0x193AL,0xA064L,65535UL,65535UL},{0xCDB2L,4UL,65535UL,0xCCD5L,0xA064L,0x46A1L},{65535UL,0xF052L,65527UL,0xCDB2L,9UL,0xFB1CL},{65530UL,65535UL,9UL,0x193AL,0x193AL,9UL}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2722[i] = &l_2723;
        for (i = 0; i < 4; i++)
            l_3146[i] = 255UL;
        for (g_703 = 6; (g_703 >= 2); g_703 -= 1)
        {
            uint16_t **l_2386 = &g_1069;
            int32_t l_2404 = (-1L);
            int32_t *** const l_2432[1] = {(void*)0};
            uint16_t l_2448[2][6][7] = {{{3UL,0x4DE7L,0UL,0UL,0x4DE7L,3UL,0x9E48L},{8UL,0x4DE7L,65535UL,0x87EDL,0x4DE7L,0xCB15L,0x6656L},{8UL,65535UL,0UL,0x87EDL,65535UL,3UL,0x6656L},{3UL,0x4DE7L,0UL,0UL,0x4DE7L,3UL,0x9E48L},{8UL,0x4DE7L,65535UL,0x87EDL,0x4DE7L,0xCB15L,0x6656L},{8UL,65535UL,0UL,0x87EDL,65535UL,3UL,0x6656L}},{{3UL,0x4DE7L,0UL,0UL,0x4DE7L,3UL,0x9E48L},{8UL,0x4DE7L,65535UL,0x87EDL,0x4DE7L,0xCB15L,0x6656L},{8UL,65535UL,0UL,0x87EDL,65535UL,3UL,0x6656L},{0xEE71L,0UL,0xBB4FL,0xBB4FL,0UL,0xEE71L,1UL},{0x0C83L,0UL,0x6656L,0x9E48L,0UL,65534UL,0x1523L},{0x0C83L,65535UL,0xBB4FL,0x9E48L,65535UL,0xEE71L,0x1523L}}};
            int16_t l_2449 = (-3L);
            union U0 *l_2503 = (void*)0;
            int32_t *l_2594 = &g_71;
            union U1 l_2605 = {0xEF39A6AEL};
            int16_t ** const l_2606[8] = {(void*)0,&g_642,(void*)0,&g_642,(void*)0,&g_642,(void*)0,&g_642};
            int32_t l_2653 = (-6L);
            int32_t l_2690 = 0L;
            int8_t *****l_2712 = (void*)0;
            int i, j, k;
            if (((*g_1231) |= (safe_add_func_uint8_t_u_u(((+(safe_rshift_func_uint8_t_u_s(p_31, 4))) >= ((**g_537) = (l_2383[3][0] == (*g_658)))), 0x43L))))
            {
                uint16_t **l_2387 = &g_1069;
                uint16_t ***l_2388 = &l_2387;
                const int32_t l_2403 = 0x10ADB592L;
                int32_t **l_2405 = (void*)0;
                uint8_t l_2406[5][3] = {{0x44L,0x4BL,1UL},{9UL,9UL,1UL},{0x4BL,0x44L,0xB6L},{255UL,9UL,255UL},{255UL,0x4BL,9UL}};
                union U1 l_2413 = {0x55F59300L};
                int32_t *l_2433 = &g_71;
                int32_t *l_2434 = (void*)0;
                int32_t *l_2435[2][2];
                int32_t l_2436 = 0x41D32D62L;
                const int16_t l_2437 = 0xEBBFL;
                uint32_t *l_2438 = (void*)0;
                uint32_t *l_2439 = (void*)0;
                uint32_t *l_2440[2][10] = {{&g_269,&g_269,&g_269,&g_269,&g_269,&g_269,&g_269,&g_269,&g_269,&g_269},{&g_269,&g_269,&g_269,&g_269,&g_269,&g_269,&g_269,&g_269,&g_269,&g_269}};
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_2435[i][j] = (void*)0;
                }
                (**g_1230) &= ((safe_add_func_uint8_t_u_u((l_2386 != ((*l_2388) = l_2387)), ((*****g_1928) = ((5UL > ((safe_sub_func_int8_t_s_s((l_2393[6][1] , (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u(65531UL, 15)) , l_2398), 3))), ((safe_lshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u(l_2393[6][1].f0, (((((*g_1069) = (((((((*l_2386) == (((l_2403 != 8UL) < l_2404) , (void*)0)) , &g_1176[6][0][0]) != l_2405) | p_34) | l_2406[0][2]) < (**g_1861))) >= l_2403) , 0xA710D58BL) , l_2404))), 4)) , 0xFEL))) >= 6L)) , (****g_1929))))) != l_2406[4][2]);
                (*g_1231) = (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((l_2406[0][2] <= (safe_mul_func_uint8_t_u_u((l_2404 , (l_2413 , ((l_2441[3][4][0] = (((l_2436 = ((*l_2433) |= (((safe_lshift_func_int16_t_s_s(p_33, (safe_sub_func_uint64_t_u_u(l_2393[6][1].f1, (((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((((safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((((((((((0xB207E6D207E54A7ALL > (safe_add_func_uint32_t_u_u(0UL, p_33))) , l_2430) == l_2432[0]) | p_31) , (*g_959)) != (void*)0) || p_33) || p_31) || p_35) != l_2398), 0xB5L)), l_2413.f0)) && l_2413.f0), l_2398)) < 1L) , 0x2BDD2F3EL) > l_2398), 9)), (*g_1069))) & l_2406[1][0]) == l_2398))))) > p_32) & p_33))) , l_2437) > 0xE38FL)) ^ g_131[0]))), (****g_658)))), 11)), (*g_1862)));
                if (p_32)
                    break;
            }
            else
            {
                uint64_t l_2444 = 5UL;
                int32_t **l_2447 = &g_197;
                l_2444++;
                (*l_2447) = (*g_1230);
            }
        }
        if ((*g_1231))
            break;
    }
    for (g_1784 = 22; (g_1784 >= 20); g_1784 = safe_sub_func_int64_t_s_s(g_1784, 4))
    {
        union U0 ***l_3265 = &g_445;
        union U0 ****l_3264 = &l_3265;
        int32_t l_3284 = 0L;
        int32_t l_3288[8][7][3] = {{{(-4L),(-1L),0L},{0xB685B43EL,0xB8F0B401L,0x994B7F7EL},{(-2L),0L,0x7B10C1DAL},{6L,0xB8F0B401L,0x567B9074L},{4L,(-1L),0x55AAAF63L},{1L,(-1L),9L},{1L,9L,0x782C735FL}},{{0L,0x567B9074L,9L},{9L,0x2928C682L,0x1F0BA860L},{(-1L),(-1L),0x4BB0647AL},{0x1F0BA860L,0xE8630CF5L,(-4L)},{0xDE509E06L,(-5L),0xD7124DBCL},{0x2928C682L,0x0A56E13AL,(-6L)},{0x4BB0647AL,0xDE509E06L,0xD7124DBCL}},{{0xE5C36328L,0x9B2B2B45L,(-4L)},{0xDC0122E4L,0x10952D3CL,0x4BB0647AL},{0L,(-4L),0x1F0BA860L},{0x8DB38F09L,0xF76D68BFL,9L},{0xE8630CF5L,0x55AAAF63L,0x782C735FL},{9L,0xDC0122E4L,9L},{(-4L),0L,0x55AAAF63L}},{{0xFCD21B4EL,8L,0x567B9074L},{(-3L),4L,0x7B10C1DAL},{0xF76D68BFL,0xD7124DBCL,0x994B7F7EL},{(-3L),(-1L),0L},{0xFCD21B4EL,0x2A9AFDCFL,8L},{(-4L),1L,9L},{9L,6L,0x10952D3CL}},{{0xE8630CF5L,0x3D84FFF1L,0L},{0x8DB38F09L,0L,0L},{0L,(-3L),0x9B2B2B45L},{0xDC0122E4L,0x58DB5107L,(-5L)},{0xE5C36328L,0L,0xAC2966F3L},{0x4BB0647AL,9L,0x8DB38F09L},{0x2928C682L,0L,0x3D84FFF1L}},{{0xDE509E06L,0x58DB5107L,0xF76D68BFL},{0x1F0BA860L,(-3L),0x1605AFFFL},{(-1L),0L,1L},{9L,0x3D84FFF1L,0L},{0L,6L,1L},{1L,1L,(-2L)},{1L,0x2A9AFDCFL,0xDC0122E4L}},{{4L,0x1F0BA860L,(-4L)},{0xF76D68BFL,0xDC0122E4L,(-1L)},{1L,0L,(-4L)},{3L,0xF1989146L,0x8DB38F09L},{0x7B10C1DAL,(-4L),1L},{0x7F84BF1AL,0x8DB38F09L,0x567B9074L},{9L,0x782C735FL,0xAC2966F3L}},{{6L,1L,0x10952D3CL},{0xE5C36328L,0x7B10C1DAL,0xE5C36328L},{8L,0x2D444B7DL,1L},{(-2L),0xF3B5EB84L,4L},{0xFCD21B4EL,9L,0L},{0x782C735FL,(-4L),(-6L)},{0xFCD21B4EL,1L,0x7F84BF1AL}}};
        int i, j, k;
        l_3264 = l_3263;
        l_3288[4][2][1] |= ((*l_2987) = (safe_lshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((p_33 || (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_31, ((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((*l_2987) , (*g_1862)), 3)), p_34)), ((safe_lshift_func_int16_t_s_s(0x3D3BL, l_3284)) && ((safe_lshift_func_int8_t_s_u((p_31 & (p_34 , (*l_2987))), 7)) | (****g_658))))) > (****l_3083)))), l_3284))), p_32)), l_3287[8][0])) < l_3284), 2)));
    }
    return p_31;
}







static int16_t func_43(int8_t p_44, const uint64_t p_45)
{
    uint16_t l_1660[8] = {0xF5E1L,0xF5E1L,0xF5E1L,0xF5E1L,0xF5E1L,0xF5E1L,0xF5E1L,0xF5E1L};
    int16_t l_1673 = 0x5DD7L;
    int32_t l_1692 = 1L;
    uint32_t l_1701 = 0x22A8942EL;
    uint64_t l_1721 = 18446744073709551614UL;
    uint64_t *l_1728 = &g_1130;
    uint8_t **l_1746 = &g_538;
    uint64_t *l_1748 = (void*)0;
    uint64_t **l_1747 = &l_1748;
    int32_t l_1755 = (-1L);
    int32_t l_1757[9];
    uint32_t l_1787 = 1UL;
    union U1 l_1817[7] = {{0xF008E700L},{0xF008E700L},{0xF008E700L},{0xF008E700L},{0xF008E700L},{0xF008E700L},{0xF008E700L}};
    int32_t **l_1825 = (void*)0;
    int32_t ***l_1824 = &l_1825;
    int32_t ****l_1823 = &l_1824;
    union U0 l_1831 = {1UL};
    uint32_t l_1856 = 0xA5E41B06L;
    uint16_t **l_1860 = &g_1069;
    uint8_t *l_1881 = &g_139;
    uint32_t ***l_1896 = &g_422;
    uint8_t l_1899[8] = {254UL,0x3AL,254UL,0x3AL,254UL,0x3AL,254UL,0x3AL};
    const uint16_t l_1900 = 0xF6EDL;
    int32_t *l_1901 = &g_73;
    int16_t *l_1902 = &l_1673;
    int16_t *l_1903 = &g_1417;
    int32_t *l_1904 = (void*)0;
    int32_t *l_1905 = &l_1757[1];
    int32_t l_1997 = (-4L);
    uint64_t ****l_2013 = &g_1942[4];
    int32_t l_2146[6][2][9] = {{{1L,0x560CF4E3L,0x63AC627FL,0x1257CD31L,1L,0x81C29E95L,(-4L),0x81C29E95L,1L},{0x61CCC958L,0x2533FBADL,0x2533FBADL,0x61CCC958L,0L,(-7L),1L,(-1L),0x38686968L}},{{1L,0xFD14328DL,(-4L),0L,0x3E2A1A4BL,4L,1L,1L,0x26F74A8EL},{0xEE5E3845L,0x36CC7B05L,0x38686968L,0x82659237L,0L,(-1L),(-1L),0L,0x82659237L}},{{0xFCA5E948L,0L,0xFCA5E948L,0x560CF4E3L,1L,0L,0xF37BE8B9L,0L,0x26F74A8EL},{0x2533FBADL,0xEE5E3845L,0x5FCC116DL,(-1L),0x5FCC116DL,0xEE5E3845L,0x2533FBADL,1L,0x38686968L}},{{0xF37BE8B9L,0L,1L,0x560CF4E3L,0xFCA5E948L,0L,0xFCA5E948L,0x560CF4E3L,1L},{(-1L),(-1L),0L,0x82659237L,0x38686968L,0x36CC7B05L,0xEE5E3845L,1L,0xEE5E3845L}},{{1L,4L,0x3E2A1A4BL,0L,(-4L),0xFD14328DL,1L,0L,0xB0187BB1L},{1L,(-7L),0L,0x61CCC958L,0x2533FBADL,0x2533FBADL,0x61CCC958L,0L,(-7L)}},{{(-4L),0x81C29E95L,1L,0x1257CD31L,0x63AC627FL,0x560CF4E3L,1L,1L,0x42E6E8CAL},{0xBA01BB07L,0L,0x5FCC116DL,0L,0xBA01BB07L,3L,0xEE5E3845L,(-1L),0x61CCC958L}}};
    uint8_t ****l_2178 = (void*)0;
    uint32_t * const *l_2289 = &g_423;
    uint32_t * const **l_2288 = &l_2289;
    const uint16_t ***l_2343 = (void*)0;
    const uint16_t ****l_2342 = &l_2343;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_1757[i] = 0x80D90178L;
    for (g_177 = 0; (g_177 <= 0); g_177 += 1)
    {
        uint64_t l_1655 = 0x68380E579E17BC1ELL;
        int32_t l_1683 = 0x8E6DDBB7L;
        int32_t l_1699 = 0x1B49CE59L;
        union U0 l_1710 = {0UL};
        int32_t l_1759 = (-1L);
        int64_t l_1785 = (-8L);
        int32_t l_1820[5];
        int32_t ***l_1822 = (void*)0;
        int32_t ****l_1821[5][10] = {{(void*)0,&l_1822,(void*)0,&l_1822,&l_1822,&l_1822,(void*)0,&l_1822,(void*)0,&l_1822},{(void*)0,(void*)0,(void*)0,&l_1822,&l_1822,&l_1822,&l_1822,&l_1822,&l_1822,&l_1822},{&l_1822,&l_1822,(void*)0,&l_1822,&l_1822,&l_1822,&l_1822,(void*)0,&l_1822,&l_1822},{(void*)0,(void*)0,&l_1822,(void*)0,(void*)0,(void*)0,&l_1822,&l_1822,&l_1822,&l_1822},{&l_1822,&l_1822,&l_1822,&l_1822,&l_1822,&l_1822,&l_1822,&l_1822,&l_1822,&l_1822}};
        int64_t l_1828 = 1L;
        union U1 l_1846 = {0x1159DC0BL};
        int i, j;
        for (i = 0; i < 5; i++)
            l_1820[i] = 0L;
        if ((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(248UL, l_1655)) || ((****g_658) = (safe_add_func_int32_t_s_s(((*g_1231) = (safe_lshift_func_int8_t_s_u(0xBDL, 7))), p_45)))), l_1660[6])))
        {
            const int32_t l_1678 = 0x5DA4A6D5L;
            int16_t l_1682 = 0x6EF9L;
            int32_t l_1685 = 9L;
            int32_t l_1696 = 1L;
            int32_t l_1700 = 0x314ADDD3L;
            for (g_276 = 0; (g_276 <= 0); g_276 += 1)
            {
                uint16_t l_1681 = 1UL;
                union U0 *l_1686[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1686[i] = &g_103[0];
                (*g_734) = (*g_734);
                l_1685 ^= (safe_rshift_func_uint8_t_u_u((((((l_1683 = (((g_553[(g_177 + 5)][g_276] , (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_139, ((safe_lshift_func_uint8_t_u_u((((safe_mul_func_uint32_t_u_u((p_45 >= l_1673), (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((**g_1230), ((p_44 & p_45) | l_1678))), (safe_rshift_func_uint16_t_u_s(0UL, 11)))))) > 0x739AL) <= l_1678), 7)) | l_1681))), 2)), 2))) , l_1682) >= g_553[(g_177 + 5)][g_276])) , l_1682) <= g_1684) | l_1655) , (**g_537)), p_44));
                if (((*g_1231) &= 0xB2CE63DDL))
                {
                    (*g_445) = l_1686[1];
                    if (p_44)
                        break;
                }
                else
                {
                    for (g_181 = 0; (g_181 <= 5); g_181 += 1)
                    {
                        int32_t *l_1687 = &g_73;
                        int32_t *l_1688 = &g_79;
                        int32_t *l_1689 = &l_1683;
                        int32_t *l_1690 = &g_590;
                        int32_t *l_1691 = &g_1232;
                        int32_t *l_1693 = &g_73;
                        int32_t *l_1694 = &l_1692;
                        int32_t *l_1695 = &l_1692;
                        int32_t *l_1697 = &l_1696;
                        int32_t *l_1698[8][10] = {{&l_1683,&g_73,&l_1692,(void*)0,&l_1683,&l_1685,&g_73,&l_1696,(void*)0,&g_79},{(void*)0,&l_1683,&l_1685,&g_590,&l_1685,&l_1685,&g_590,&l_1685,&l_1683,(void*)0},{&l_1683,&g_1232,&l_1685,&l_1685,&g_73,&l_1696,&l_1692,&l_1683,&g_73,&g_706},{&g_73,&l_1685,&g_79,&g_1232,&g_73,&g_1232,&g_79,&l_1685,&g_73,(void*)0},{&g_73,&l_1692,(void*)0,&l_1683,&l_1685,&g_73,&l_1696,(void*)0,&g_79,&g_79},{(void*)0,&g_590,&l_1683,&l_1683,&l_1683,&l_1683,&g_590,(void*)0,&g_73,&g_590},{&g_590,(void*)0,&g_73,&g_1232,&l_1685,&g_79,&l_1683,&l_1683,&g_73,&l_1683},{&g_1232,&l_1683,&g_73,&l_1685,&g_73,&l_1683,&g_1232,(void*)0,&l_1683,&l_1685}};
                        int i, j;
                        ++l_1701;
                    }
                    (*g_1225) = &l_1692;
                }
                if (p_44)
                    continue;
            }
            for (g_707 = 0; (g_707 <= 5); g_707 += 1)
            {
                for (g_139 = 0; (g_139 <= 2); g_139 += 1)
                {
                    int64_t l_1720 = 0L;
                    for (g_79 = 0; (g_79 <= 0); g_79 += 1)
                    {
                        int i, j, k;
                        (*g_1231) = g_371[(g_139 + 4)][(g_139 + 3)][g_139];
                        (*g_1225) = &l_1683;
                        (**g_1230) = ((safe_div_func_int8_t_s_s(g_829, (safe_unary_minus_func_uint8_t_u((l_1699 = (((****g_658) = (0x393389B15EF5A94FLL ^ p_45)) ^ ((safe_mul_func_int16_t_s_s((!p_45), (l_1710 , (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(g_756, 3)), ((safe_div_func_int64_t_s_s((((safe_lshift_func_int8_t_s_s((~g_1276[2]), 3)) , p_44) || (((l_1720 <= l_1682) ^ l_1696) | l_1673)), l_1721)) > l_1655)))))) <= 4294967295UL))))))) != g_1276[3]);
                    }
                    if (p_44)
                        break;
                }
            }
        }
        else
        {
            int32_t l_1722 = 0xD02126E8L;
            uint64_t *l_1732 = &l_1655;
            uint64_t **l_1731[3];
            int32_t l_1751[1];
            uint64_t ***l_1793 = &g_501;
            int32_t l_1807 = 0x7540E38AL;
            int8_t *l_1810[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (i = 0; i < 3; i++)
                l_1731[i] = &l_1732;
            for (i = 0; i < 1; i++)
                l_1751[i] = 1L;
            if (((**g_1230) = l_1722))
            {
                uint64_t *l_1727 = &g_177;
                uint64_t ***l_1733 = &l_1731[0];
                uint8_t *l_1749 = &g_722;
                int32_t *l_1750[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_1790 = 0xA8DB96EAL;
                int i;
                l_1750[3] = ((((*l_1732) = (safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s((&p_45 != (l_1728 = l_1727)), ((*l_1749) = ((*g_538) = (0x2654L ^ ((((((((*l_1733) = l_1731[1]) == (((((((*g_1069) = p_45) == p_44) | ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((((!(!(safe_rshift_func_uint16_t_u_s(l_1722, ((*g_642) = (safe_mod_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((void*)0 != l_1746), p_44)) , l_1660[6]) && p_44), l_1699))))))) > (****g_658)) ^ l_1701), (****g_658))), 4)) && 0xBDL)) >= 0xEA8D409F6767EF3DLL) ^ p_45) , l_1747)) <= l_1722) && p_45) > p_45) == 1UL) > 0x90ED49FDCE69FE6CLL)))))), p_44))) , p_45) , (void*)0);
                for (g_276 = 0; (g_276 <= 5); g_276 += 1)
                {
                    uint16_t l_1752 = 0xC349L;
                    int32_t l_1758 = 1L;
                    uint64_t *l_1794 = &l_1721;
                    union U1 l_1795 = {18446744073709551615UL};
                    uint64_t *** const l_1796 = &g_501;
                    int8_t * const ****l_1806 = &g_1803;
                    l_1752++;
                    if (l_1755)
                    {
                        int16_t l_1756 = 0xDB67L;
                        int32_t l_1760 = 0x1D1E19A2L;
                        int32_t l_1761 = 0x0406F03BL;
                        const int32_t *** const **l_1767 = &g_1765[1];
                        --g_1762;
                        (*l_1767) = g_1765[1];
                    }
                    else
                    {
                        int i, j;
                        (**g_1230) &= (p_44 == ((((safe_sub_func_int8_t_s_s(((((**g_734) , (safe_sub_func_uint16_t_u_u(((((*g_684) || ((safe_mod_func_int16_t_s_s(((((safe_mod_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((++g_553[(g_276 + 2)][g_276]), 0x5D4237B28ED29210LL)), ((g_1782 == &g_1783[1]) || l_1758))) | (-9L)) || (p_44 < l_1655)) > g_1784), p_44)) != l_1785)) != l_1660[6]) , p_44), 0x188EL))) == l_1758) <= p_45), 0L)) < l_1752) || g_553[(g_276 + 2)][g_276]) & p_44));
                    }
                    if (l_1655)
                    {
                        (**g_1766) = &l_1692;
                    }
                    else
                    {
                        int16_t l_1786 = 0x76EAL;
                        uint64_t ****l_1791 = (void*)0;
                        uint64_t ****l_1792[10][3] = {{&l_1733,&l_1733,&l_1733},{&l_1733,&l_1733,&l_1733},{&l_1733,&l_1733,&l_1733},{&l_1733,&l_1733,&l_1733},{&l_1733,&l_1733,&l_1733},{&l_1733,&l_1733,&l_1733},{&l_1733,&l_1733,&l_1733},{&l_1733,&l_1733,&l_1733},{&l_1733,&l_1733,&l_1733},{&l_1733,&l_1733,&l_1733}};
                        uint32_t *l_1800 = &l_1787;
                        int i, j;
                        ++l_1787;
                        (*g_1231) |= l_1790;
                        l_1793 = &l_1731[1];
                        (**g_1230) = (((p_44 <= (&l_1683 == l_1750[9])) | (((((*l_1747) = l_1794) == (l_1795 , (l_1710 , (void*)0))) , l_1796) != ((((safe_div_func_int32_t_s_s((((~(++(*l_1800))) || ((p_44 && 247UL) >= 0x612AL)) | 0x832FL), (**g_1230))) | 0x4DAAL) <= (-10L)) , (void*)0))) , 0x5DB198BDL);
                    }
                    (*l_1806) = g_1803;
                }
            }
            else
            {
                if (l_1807)
                    break;
            }
            l_1751[0] = (((p_45 , (p_44 ^ (p_45 , (safe_lshift_func_int8_t_s_s(l_1692, 0))))) , ((*g_1231) = (((void*)0 == l_1810[1]) ^ (safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_div_func_uint64_t_u_u((((l_1817[6] , ((safe_mul_func_uint16_t_u_u(1UL, ((l_1785 , &g_658) == &g_658))) != l_1660[0])) ^ l_1683) , p_45), (-1L))), l_1807)) != (*g_642)), l_1759))))) >= 3UL);
            for (g_1193 = 0; (g_1193 <= 0); g_1193 += 1)
            {
                if ((*g_1231))
                    break;
                if (p_45)
                    continue;
                return l_1820[2];
            }
        }
        if (((((l_1821[1][8] != l_1823) > (safe_lshift_func_uint8_t_u_s((((**g_1782) &= p_44) ^ ((**l_1746) = 0UL)), 0))) , (**g_1782)) , (((l_1828 > ((void*)0 == &g_1766)) > (safe_add_func_uint32_t_u_u((l_1831 , 0x027BAF70L), 1L))) & 1UL)))
        {
            const uint32_t l_1837[7][6] = {{8UL,18446744073709551615UL,8UL,6UL,6UL,8UL},{0x63F38B68L,0x63F38B68L,6UL,1UL,6UL,0x63F38B68L},{6UL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,6UL},{0x63F38B68L,6UL,1UL,6UL,0x63F38B68L,0x63F38B68L},{8UL,6UL,6UL,8UL,18446744073709551615UL,8UL},{8UL,18446744073709551615UL,1UL,8UL,8UL,1UL},{6UL,6UL,8UL,18446744073709551615UL,8UL,6UL}};
            int32_t *l_1847 = &l_1692;
            int i, j;
            g_73 = ((*g_1231) |= 0x3A3E8FF1L);
            (**g_1230) ^= ((safe_mul_func_int16_t_s_s((~((p_45 <= (safe_div_func_uint8_t_u_u((((0x2C1D2DD2L || p_45) > ((l_1837[5][2] && (safe_lshift_func_int8_t_s_u(((((safe_add_func_uint16_t_u_u((((((void*)0 != &g_735) >= (p_45 != (safe_rshift_func_uint16_t_u_u(0x5EDDL, 7)))) , (safe_lshift_func_uint16_t_u_s((((((l_1846 , 0x92L) != (****g_658)) && p_44) >= 18446744073709551615UL) > l_1837[3][0]), 5))) && p_45), p_44)) , g_127) > p_45) || p_45), 1))) | p_45)) && 0x13L), p_45))) != 0x2D80L)), 65535UL)) == 1UL);
            (*g_1225) = l_1847;
            for (g_283 = 0; (g_283 >= 0); g_283 -= 1)
            {
                return (*g_642);
            }
        }
        else
        {
            int64_t l_1855 = 0L;
            const int32_t *l_1857 = (void*)0;
            uint16_t ****l_1867 = (void*)0;
            int32_t l_1868[4];
            const union U1 *l_1876 = &g_143;
            const union U1 **l_1877 = &l_1876;
            int i;
            for (i = 0; i < 4; i++)
                l_1868[i] = 0x41110517L;
            for (l_1673 = 0; (l_1673 <= 0); l_1673 += 1)
            {
                uint16_t l_1850 = 65534UL;
                const uint16_t ***l_1863 = &g_1861;
                (*g_1231) &= p_44;
                (**g_1766) = ((safe_add_func_int32_t_s_s(l_1850, (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(l_1855, 2)), l_1856)))) , l_1857);
                if ((safe_sub_func_int32_t_s_s(0xC835B03AL, ((l_1860 != ((*l_1863) = g_1861)) < 0x0D28916C3E3CA78BLL))))
                {
                    uint64_t *l_1866 = &g_1130;
                    (*g_1231) = (safe_sub_func_uint64_t_u_u(((*l_1866) = 0x2E9B35F05DCC3B34LL), ((&l_1863 == l_1867) , (-1L))));
                    for (g_1784 = 0; (g_1784 <= 0); g_1784 += 1)
                    {
                        if ((**g_1230))
                            break;
                        if (p_44)
                            break;
                    }
                }
                else
                {
                    ++g_1871;
                    l_1868[2] |= ((**g_1230) = (safe_mod_func_uint64_t_u_u(l_1850, ((*g_684) = p_44))));
                    if (p_44)
                        continue;
                }
            }
            (*l_1877) = l_1876;
        }
        for (l_1846.f0 = 0; (l_1846.f0 <= 0); l_1846.f0 += 1)
        {
            uint8_t l_1878 = 1UL;
            return l_1878;
        }
    }
    if (((0UL != (safe_rshift_func_uint16_t_u_s(((((*l_1881) = ((**g_537) = (0xF8F353DFBD9CAFFDLL != p_44))) && (safe_add_func_int32_t_s_s(((*l_1905) ^= (((safe_unary_minus_func_int64_t_s((safe_add_func_int16_t_s_s(((*l_1903) = ((*l_1902) = ((*g_642) = (safe_mul_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_u((p_45 < ((*g_538) = (safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint16_t_u_s((p_44 , ((safe_lshift_func_uint8_t_u_u((l_1896 == (*g_959)), 0)) > 0xD711BD4C8890083FLL)), 0)))))), 4)) | ((*l_1901) ^= ((**g_1230) = (safe_mul_func_int16_t_s_s(l_1899[5], l_1900))))) != 65535UL) >= p_45), 0x05L))))), p_44)))) , (**g_537)) , p_45)), g_283))) , 0x3FC9L), 5))) != (**g_1782)))
    {
lbl_2132:
        for (g_1762 = 0; (g_1762 <= 2); g_1762 += 1)
        {
            uint64_t l_1906 = 18446744073709551615UL;
            l_1906++;
        }
    }
    else
    {
        uint16_t l_1918 = 0xF298L;
        const int32_t *l_1926[9] = {&g_1784,&g_1784,&g_1784,&g_1784,&g_1784,&g_1784,&g_1784,&g_1784,&g_1784};
        const int32_t **l_1925 = &l_1926[2];
        const int32_t ***l_1924 = &l_1925;
        int32_t **l_1932 = &l_1901;
        uint64_t ***l_1939 = &l_1747;
        uint8_t *** const *l_1947 = &g_659[0];
        int32_t l_1970[9] = {1L,0x0911FBD8L,1L,0x0911FBD8L,1L,0x0911FBD8L,1L,0x0911FBD8L,1L};
        int32_t * const l_1998[7][4] = {{&g_71,&g_1784,&g_1784,&g_71},{&g_71,&g_1784,&g_1784,&g_71},{&g_71,&g_1784,&g_1784,&g_71},{&g_71,&g_1784,&g_1784,&g_71},{&g_71,&g_1784,&g_1784,&g_71},{&g_71,&g_1784,&g_1784,&g_71},{&g_71,&g_1784,&g_1784,&g_71}};
        uint64_t l_2025[4];
        union U1 l_2050 = {0x25D19972L};
        uint8_t l_2126[3];
        union U0 ***l_2174 = &g_445;
        uint16_t l_2249 = 0xEF62L;
        int i, j;
        for (i = 0; i < 4; i++)
            l_2025[i] = 0xAAECC44AE76F36CDLL;
        for (i = 0; i < 3; i++)
            l_2126[i] = 0UL;
        for (g_71 = (-30); (g_71 <= 1); g_71 = safe_add_func_int32_t_s_s(g_71, 3))
        {
            int8_t l_1917 = 0xD5L;
            uint16_t *l_1923 = &g_1871;
            const int16_t l_1931 = 0x1750L;
            int32_t l_1935[10] = {0x7432C47EL,0x7432C47EL,0x7432C47EL,0x7432C47EL,0x7432C47EL,0x7432C47EL,0x7432C47EL,0x7432C47EL,0x7432C47EL,0x7432C47EL};
            uint64_t ****l_1940[4] = {&l_1939,&l_1939,&l_1939,&l_1939};
            int32_t ****l_1961 = &l_1824;
            const uint32_t *l_2012 = &g_1374;
            const uint32_t **l_2011 = &l_2012;
            const uint32_t ***l_2010 = &l_2011;
            const uint32_t **** const l_2009 = &l_2010;
            union U1 l_2070 = {1UL};
            union U1 **l_2156[4][7][8] = {{{&g_735,&g_735,&g_735,(void*)0,(void*)0,&g_735,&g_735,&g_735},{&g_735,&g_735,(void*)0,&g_735,(void*)0,&g_735,(void*)0,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,(void*)0,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,(void*)0},{&g_735,&g_735,&g_735,&g_735,(void*)0,(void*)0,&g_735,&g_735},{&g_735,(void*)0,(void*)0,&g_735,(void*)0,&g_735,(void*)0,(void*)0}},{{&g_735,(void*)0,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,(void*)0,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,(void*)0,&g_735,(void*)0,&g_735},{(void*)0,&g_735,(void*)0,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,(void*)0,&g_735,&g_735,&g_735,&g_735},{(void*)0,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,(void*)0,&g_735,&g_735,&g_735,&g_735,(void*)0}},{{(void*)0,(void*)0,&g_735,&g_735,&g_735,&g_735,(void*)0,(void*)0},{&g_735,&g_735,&g_735,(void*)0,(void*)0,&g_735,(void*)0,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,(void*)0,&g_735,&g_735},{&g_735,&g_735,&g_735,(void*)0,&g_735,(void*)0,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,(void*)0,&g_735},{&g_735,(void*)0,&g_735,(void*)0,&g_735,&g_735,&g_735,(void*)0}},{{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,(void*)0,&g_735},{(void*)0,&g_735,&g_735,(void*)0,&g_735,(void*)0,&g_735,&g_735},{(void*)0,&g_735,&g_735,&g_735,&g_735,(void*)0,&g_735,&g_735},{&g_735,&g_735,(void*)0,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,(void*)0,&g_735,&g_735,&g_735,&g_735,&g_735},{&g_735,&g_735,&g_735,(void*)0,&g_735,&g_735,&g_735,&g_735}}};
            int16_t **l_2168 = &l_1902;
            int64_t l_2172 = 0xC307F98E8AEA1EBBLL;
            uint16_t l_2204 = 7UL;
            int32_t ** const *l_2205 = &g_1175;
            int i, j, k;
            for (l_1787 = (-11); (l_1787 == 44); l_1787 = safe_add_func_uint64_t_u_u(l_1787, 5))
            {
                int8_t *****l_1927 = (void*)0;
                for (g_129 = 0; (g_129 <= 3); g_129 += 1)
                {
                    int32_t *l_1913 = &l_1692;
                    int32_t l_1914 = 0x5B7A26E2L;
                    int32_t *l_1915 = &g_1232;
                    int32_t *l_1916[6] = {&g_706,&g_706,&g_706,&g_706,&g_706,&g_706};
                    int i;
                    --l_1918;
                    for (g_1762 = 0; (g_1762 <= 6); g_1762 += 1)
                    {
                        int i;
                        if (g_131[g_1762])
                            break;
                    }
                }
                (*l_1905) |= ((((((l_1923 == l_1923) == (l_1924 == (void*)0)) && ((**g_537) != ((-5L) != (l_1927 == (g_1928 = (((*l_1923) ^= (**g_1861)) , g_1928)))))) > p_45) ^ 0x318461C055944F39LL) | l_1931);
            }
        }
        return (**g_641);
    }
    if (p_44)
    {
        return p_45;
    }
    else
    {
        int32_t **l_2255 = &l_1904;
        (*l_2255) = (*g_1230);
    }
    if ((*l_1901))
    {
        int8_t l_2260[9] = {0x21L,9L,9L,0x21L,9L,9L,0x21L,9L,9L};
        const int32_t * const *l_2269 = &g_1226[0][1][0];
        const int32_t * const ** const l_2268 = &l_2269;
        const int32_t * const ** const *l_2267 = &l_2268;
        union U1 *l_2309 = &g_325[0];
        int32_t l_2322 = 0x529E6415L;
        int32_t *l_2350[3];
        int i;
        for (i = 0; i < 3; i++)
            l_2350[i] = (void*)0;
        (**g_1766) = (void*)0;
        for (g_129 = (-14); (g_129 < (-3)); ++g_129)
        {
            int8_t l_2298 = 0xE6L;
            int32_t l_2299[5][3][9] = {{{0L,0x2DF6EB7CL,0xF0A63B9FL,7L,0L,0L,(-4L),0x5DE772E4L,0xF60E2115L},{(-1L),(-6L),0xD5C6145AL,0xC8865807L,0x8CBC43E5L,0xC8865807L,0xD5C6145AL,(-6L),(-1L)},{0xC5D946BFL,(-3L),0x5DE772E4L,0x0BAD6E28L,0x43B59F81L,1L,4L,0x3CA804E0L,(-4L)}},{{(-6L),0x9030A46AL,0xA3D5A924L,0x995317D5L,0xB5EEA4C3L,0x71325076L,0x54E97008L,0xD5C6145AL,0L},{0xC5D946BFL,0x43B59F81L,4L,0xF60E2115L,1L,(-1L),(-1L),(-1L),1L},{(-1L),1L,1L,(-1L),0x9030A46AL,2L,0xB5EEA4C3L,0x12DC46A5L,(-5L)}},{{0L,1L,1L,(-4L),0L,7L,0L,0x0BAD6E28L,(-3L)},{0x22942C39L,0x71325076L,(-6L),0L,0x9030A46AL,0x12DC46A5L,0L,9L,0xD5C6145AL},{(-1L),7L,1L,0x06F503E9L,0x06F503E9L,1L,7L,(-1L),0x89AE9A5CL}},{{0L,0x6997A1E2L,(-1L),0xF78A5AEDL,0xC8865807L,0x54E97008L,(-5L),(-6L),2L},{0x43B59F81L,0x41C75D1FL,0xF0A63B9FL,0xC5D946BFL,0L,7L,0x2DF6EB7CL,0x3B890399L,0x89AE9A5CL},{2L,(-1L),0L,0xA3D5A924L,0L,0x13368682L,0x13368682L,0L,0xA3D5A924L}},{{0L,8L,0L,0x89AE9A5CL,0x3B890399L,0x2DF6EB7CL,7L,0L,0xC5D946BFL},{0x13368682L,0xD5C6145AL,1L,2L,(-6L),(-5L),0x54E97008L,0xC8865807L,0xF78A5AEDL},{0x3B890399L,(-6L),(-1L),0x89AE9A5CL,(-1L),7L,1L,0x06F503E9L,0x06F503E9L}}};
            int8_t l_2300 = 0x1FL;
            uint32_t *l_2308 = &g_269;
            uint32_t **l_2307[5] = {&l_2308,&l_2308,&l_2308,&l_2308,&l_2308};
            int i, j, k;
            if ((safe_rshift_func_int8_t_s_s(((((l_2260[2] , (((*l_1901) && (+((((4L == (~l_2260[2])) , ((*g_684) = l_2260[1])) >= (((*****g_1928) &= 0x57L) > (p_45 <= (safe_lshift_func_uint16_t_u_s((l_2260[2] != (safe_rshift_func_int8_t_s_s(((void*)0 == l_2267), 7))), (**g_641)))))) >= p_44))) | (*l_1904))) >= (*l_1904)) != 0x0BL) >= p_44), 6)))
            {
                union U0 **l_2280 = &g_446;
                uint32_t * const **l_2290 = &l_2289;
                uint32_t * const ***l_2291 = (void*)0;
                uint32_t * const ***l_2292 = &l_2288;
                int32_t l_2293 = 0x4554C6D9L;
                int32_t l_2301[7][10][3] = {{{(-1L),0x3FFBB579L,0x0CEA0B39L},{0L,0x0ECEFD8BL,1L},{7L,0x7E4FE009L,0x745F033CL},{0L,0x52ADC569L,0xD87429B0L},{(-1L),(-1L),(-9L)},{0x86E10D0FL,0x198F0D88L,0x46C92F3FL},{0xB4E2FB51L,0xDB17293DL,(-1L)},{0xDF1FC4ECL,0xC71A62D2L,0xAE7C7374L},{1L,0xB4E2FB51L,(-1L)},{3L,0x46C92F3FL,0x46C92F3FL}},{{0x24E6354CL,7L,(-9L)},{0x2D22A453L,0xCB0C1ADBL,0xD87429B0L},{0xD81D47F5L,0xAF2E4867L,0x745F033CL},{0xD87429B0L,0xDF1FC4ECL,1L},{(-1L),0xAF2E4867L,0x0CEA0B39L},{0x0ECEFD8BL,0xCB0C1ADBL,0x0ECEFD8BL},{0xAF2E4867L,7L,0xB4E2FB51L},{0x198F0D88L,0x46C92F3FL,0L},{0x0CEA0B39L,0xB4E2FB51L,0xBAB68290L},{0xB6A506F2L,0xC71A62D2L,1L}},{{0x0CEA0B39L,0xDB17293DL,1L},{0x198F0D88L,0x198F0D88L,0xCB0C1ADBL},{0xAF2E4867L,(-1L),0x3FFBB579L},{0x0ECEFD8BL,0x52ADC569L,0x198F0D88L},{(-1L),0x7E4FE009L,0x18795697L},{0xD87429B0L,0x0ECEFD8BL,0x198F0D88L},{0xD81D47F5L,0x3FFBB579L,0x3FFBB579L},{0x2D22A453L,0xB6A506F2L,0xCB0C1ADBL},{0x24E6354CL,(-9L),1L},{3L,0x86E10D0FL,1L}},{{1L,(-1L),0xBAB68290L},{0xDF1FC4ECL,0x86E10D0FL,0L},{0xB4E2FB51L,(-9L),0xB4E2FB51L},{0x86E10D0FL,0xB6A506F2L,0x0ECEFD8BL},{(-1L),0x3FFBB579L,0x0CEA0B39L},{0L,0x0ECEFD8BL,1L},{7L,0x7E4FE009L,0x745F033CL},{0L,0x52ADC569L,0xD87429B0L},{(-1L),(-1L),(-9L)},{0x86E10D0FL,0x198F0D88L,0x46C92F3FL}},{{0xB4E2FB51L,0xDB17293DL,(-1L)},{0x52ADC569L,0xDF1FC4ECL,0L},{7L,0x8CA71A51L,1L},{0x2D22A453L,1L,1L},{0x745F033CL,0xD81D47F5L,0x7E4FE009L},{1L,0xC71A62D2L,0xB6A506F2L},{0x24E6354CL,0x3FFBB579L,0xAF2E4867L},{0xB6A506F2L,0x52ADC569L,0xAE7C7374L},{0xDB17293DL,0x3FFBB579L,0xB4E2FB51L},{0x4BABE9D4L,0xC71A62D2L,0x4BABE9D4L}},{{0x3FFBB579L,0xD81D47F5L,0x8CA71A51L},{0xD87429B0L,1L,0x0ECEFD8BL},{0xB4E2FB51L,0x8CA71A51L,0x18795697L},{3L,0xDF1FC4ECL,0x86E10D0FL},{0xB4E2FB51L,(-1L),7L},{0xD87429B0L,0xD87429B0L,0xC71A62D2L},{0x3FFBB579L,1L,0xBAB68290L},{0x4BABE9D4L,0x198F0D88L,0xD87429B0L},{0xDB17293DL,(-1L),0x0CEA0B39L},{0xB6A506F2L,0x4BABE9D4L,0xD87429B0L}},{{0x24E6354CL,0xBAB68290L,0xBAB68290L},{1L,3L,0xC71A62D2L},{0x745F033CL,0x7E4FE009L,7L},{0x2D22A453L,0x46C92F3FL,0x86E10D0FL},{7L,0xDB17293DL,0x18795697L},{0x52ADC569L,0x46C92F3FL,0x0ECEFD8BL},{0x8CA71A51L,0x7E4FE009L,0x8CA71A51L},{0x46C92F3FL,3L,0x4BABE9D4L},{1L,0xBAB68290L,0xB4E2FB51L},{0x0ECEFD8BL,0x4BABE9D4L,0xAE7C7374L}}};
                int i, j, k;
                (*l_1905) = (((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_44, (**g_641))), (*g_1069))) != p_45) | (safe_lshift_func_int16_t_s_s((p_44 , (safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(((l_2280 != (((((p_44 ^ (!((safe_rshift_func_int16_t_s_u(p_45, (safe_div_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(((((((*l_2292) = (l_2290 = l_2288)) == (void*)0) && 0xF0L) , 0x4DL) || p_44), p_45)) | 0xB1509D6CF03371ECLL) , (****g_658)), (****g_658))))) , 4294967290UL))) ^ l_2293) != g_371[6][8][0]) , 0x7ECD04BFL) , (void*)0)) , 0x3B32L), (*g_642))), (*g_1862)))), (*l_1901))));
                for (g_85 = 0; (g_85 <= 0); g_85 += 1)
                {
                    int32_t l_2294 = 0L;
                    int32_t *l_2295 = &g_706;
                    int32_t *l_2296 = &g_79;
                    int32_t *l_2297[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_2297[i] = (void*)0;
                    l_2294 = g_1276[(g_85 + 1)];
                    g_2302--;
                    return p_45;
                }
                for (g_2302 = 2; (g_2302 <= 42); g_2302 = safe_add_func_uint64_t_u_u(g_2302, 5))
                {
                    l_2307[4] = l_2307[1];
                    return (**g_641);
                }
            }
            else
            {
                int32_t *l_2319 = &l_1757[2];
                if (((**g_1230) ^= ((void*)0 == l_2309)))
                {
                    int32_t **l_2312[1];
                    int32_t **l_2313 = (void*)0;
                    int32_t **l_2314 = (void*)0;
                    int32_t **l_2315 = (void*)0;
                    int32_t **l_2316 = &l_1904;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2312[i] = &l_1901;
                    (*l_1901) = (safe_lshift_func_int16_t_s_u((**g_641), p_44));
                    (*l_2316) = (*g_1230);
                    for (l_1692 = 0; (l_1692 >= (-12)); l_1692 = safe_sub_func_int64_t_s_s(l_1692, 4))
                    {
                        uint16_t l_2320 = 0UL;
                        (*g_1225) = l_2319;
                        return l_2320;
                    }
                }
                else
                {
                    uint32_t l_2324 = 4294967286UL;
                    for (g_177 = 0; (g_177 <= 2); g_177 += 1)
                    {
                        int32_t *l_2321 = &g_706;
                        int32_t *l_2323[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_2323[i] = &g_706;
                        l_2324--;
                    }
                }
                (*l_1901) = (safe_lshift_func_uint8_t_u_s((p_44 | (safe_add_func_int32_t_s_s(((*l_1904) |= ((p_44 || 0xAAB0AB66L) | ((*l_2319) | ((((safe_rshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(((*l_1902) |= 1L), (safe_mul_func_int8_t_s_s((!0x571DL), 255UL)))) == 0x6F69CD223FF86175LL) , 0xA6L), 7)) , p_44) , (*g_1862)) == (*l_2319))))), p_45))), 2));
            }
        }
        l_2322 ^= ((safe_sub_func_uint16_t_u_u((((-1L) != (p_45 == (safe_mul_func_uint16_t_u_u(((((l_2342 == ((0x513EB63EL == (((*g_1069) &= (*l_1901)) , ((*l_1905) = ((*g_1231) ^= (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((((**g_641) |= ((*****g_1928) , ((*l_1902) &= (safe_mod_func_int32_t_s_s(((((l_1831 , p_45) || (*l_1905)) ^ g_1784) < p_44), p_44))))) , (*g_1862)), p_45)), p_44)))))) , &l_2343)) , (**g_1861)) ^ (*l_1901)) != p_44), p_45)))) >= p_45), p_44)) < 0x89A5EDB9L);
        (*g_1231) = p_45;
    }
    else
    {
        int32_t *l_2351 = &g_73;
        int32_t *l_2352 = &l_1757[2];
        int32_t *l_2353 = &g_590;
        int32_t *l_2354 = &g_79;
        int32_t *l_2355 = (void*)0;
        int32_t *l_2356 = &g_1232;
        int32_t *l_2357 = &l_1757[6];
        int32_t *l_2358 = &g_706;
        int32_t *l_2359 = &g_590;
        int32_t *l_2360 = &g_1976;
        int32_t *l_2361 = &g_73;
        int32_t *l_2362 = &g_1232;
        int32_t *l_2363[5] = {&g_1976,&g_1976,&g_1976,&g_1976,&g_1976};
        int8_t l_2364 = 0x8BL;
        int i;
        ++g_2365;
        if (g_640)
            goto lbl_2371;
lbl_2371:
        --g_2368;
        if (g_1684)
            goto lbl_2132;
        (*g_734) = (*g_734);
    }
    return p_44;
}







static int8_t func_46(int32_t p_47, uint16_t p_48)
{
    int32_t *l_72 = &g_73;
    int32_t *l_74 = &g_73;
    int32_t *l_75 = &g_73;
    int32_t l_76 = 0x717E5ED5L;
    int32_t *l_77 = (void*)0;
    int32_t *l_78 = &l_76;
    int32_t *l_80 = &l_76;
    int32_t *l_81 = &l_76;
    int32_t *l_82 = &g_79;
    int32_t *l_83 = &g_79;
    int32_t *l_84 = (void*)0;
    uint8_t *l_584 = &g_585[4][2];
    union U1 *l_716[4] = {&g_325[2],&g_325[2],&g_325[2],&g_325[2]};
    int32_t l_720 = 0x27E7C234L;
    int32_t l_721 = 0xD7FD4F80L;
    int16_t **l_743[8][3][10] = {{{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,(void*)0,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,(void*)0,&g_642,&g_642,&g_642}},{{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,(void*)0,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,(void*)0,&g_642,&g_642,&g_642}},{{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,(void*)0,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,(void*)0,&g_642,&g_642,&g_642}},{{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642}},{{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642}},{{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642}},{{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642}},{{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642},{&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642,&g_642}}};
    int16_t **l_744 = &g_642;
    uint32_t l_747 = 1UL;
    uint32_t ** const l_767 = (void*)0;
    uint32_t ** const *l_766 = &l_767;
    const uint32_t ***l_794 = (void*)0;
    uint64_t ***l_843 = &g_501;
    uint64_t ****l_842[1][6][3] = {{{&l_843,&l_843,&l_843},{&l_843,&l_843,&l_843},{&l_843,&l_843,&l_843},{&l_843,&l_843,&l_843},{&l_843,&l_843,&l_843},{&l_843,&l_843,&l_843}}};
    int8_t l_862 = 0x57L;
    const int32_t *l_1004 = &l_721;
    int32_t l_1129 = 0x24FBD9AAL;
    int64_t * const l_1180 = (void*)0;
    uint8_t ***l_1184[2];
    const int8_t *l_1187 = &g_640;
    const int8_t ** const l_1186 = &l_1187;
    const union U0 *l_1209[2][2][4] = {{{&g_103[3],&g_103[3],&g_273,&g_103[3]},{&g_103[3],&g_103[3],&g_103[3],&g_103[3]}},{{&g_103[3],&g_103[3],&g_103[3],&g_103[3]},{&g_103[3],&g_103[3],&g_273,&g_103[3]}}};
    const union U0 **l_1208 = &l_1209[1][1][2];
    const union U0 ***l_1207 = &l_1208;
    union U0 ***l_1210 = (void*)0;
    int32_t l_1212 = 0xDAEB2A21L;
    int16_t l_1242 = 0x57C0L;
    uint16_t **l_1410[2];
    uint16_t *** const l_1409 = &l_1410[1];
    int64_t l_1528[1];
    int32_t l_1558 = 1L;
    union U0 l_1563 = {0xAC282740433389E1LL};
    int64_t ***l_1566 = &g_683[1][2][3];
    const uint64_t *l_1591[9];
    const uint64_t **l_1590 = &l_1591[1];
    const uint64_t ***l_1589 = &l_1590;
    int64_t l_1594 = 0xD1A1D51B12E76231LL;
    int64_t l_1628 = 0x6E93A024322E9318LL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1184[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_1410[i] = &g_1069;
    for (i = 0; i < 1; i++)
        l_1528[i] = (-1L);
    for (i = 0; i < 9; i++)
        l_1591[i] = &g_553[1][4];
lbl_752:
    g_85--;
    if ((safe_add_func_int8_t_s_s(func_90(func_95(&g_71), ((*g_537) = l_584), (*l_81), l_584), (safe_add_func_uint32_t_u_u((((safe_div_func_int8_t_s_s(0L, p_48)) && g_705) && 1UL), p_48)))))
    {
        union U1 **l_717 = &l_716[3];
        int32_t *l_718 = (void*)0;
        int32_t *l_719[9] = {&l_76,&l_76,&l_76,&l_76,&l_76,&l_76,&l_76,&l_76,&l_76};
        int32_t *l_733 = &g_513;
        int16_t ***l_742[9][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_641,&g_641,&g_641,(void*)0,(void*)0,(void*)0},{&g_641,&g_641,&g_641,&g_641,&g_641,(void*)0},{(void*)0,&g_641,(void*)0,&g_641,(void*)0,(void*)0},{&g_641,(void*)0,(void*)0,(void*)0,(void*)0,&g_641},{&g_641,&g_641,&g_641,(void*)0,&g_641,&g_641},{&g_641,&g_641,(void*)0,(void*)0,(void*)0,(void*)0},{&g_641,&g_641,(void*)0,(void*)0,(void*)0,(void*)0},{&g_641,&g_641,&g_641,(void*)0,(void*)0,(void*)0}};
        uint32_t *l_745[7][6][6] = {{{&g_515,&g_181,&g_181,&g_515,&g_515,(void*)0},{&g_181,&g_515,&g_181,&g_515,&g_181,&g_269},{&g_181,(void*)0,&g_269,&g_515,&g_269,&g_181},{&g_181,&g_269,&g_181,(void*)0,&g_181,&g_181},{&g_269,&g_515,&g_269,&g_181,(void*)0,&g_269},{&g_181,&g_515,&g_181,&g_515,&g_515,(void*)0}},{{&g_515,&g_181,&g_181,&g_269,&g_269,&g_269},{&g_181,&g_515,&g_515,&g_181,&g_515,&g_269},{&g_269,&g_269,&g_181,&g_515,(void*)0,&g_515},{&g_181,&g_181,&g_269,(void*)0,(void*)0,&g_181},{&g_515,&g_269,&g_181,&g_515,&g_515,&g_515},{&g_269,&g_515,(void*)0,(void*)0,&g_269,&g_269}},{{&g_181,&g_181,(void*)0,&g_269,&g_515,&g_269},{&g_181,&g_515,&g_181,&g_269,(void*)0,&g_181},{&g_181,&g_515,&g_515,&g_515,&g_181,&g_181},{(void*)0,&g_269,&g_181,&g_515,&g_269,&g_269},{&g_181,(void*)0,(void*)0,&g_269,&g_181,&g_181},{&g_181,&g_515,&g_181,&g_269,&g_515,&g_181}},{{&g_181,&g_181,&g_515,(void*)0,(void*)0,&g_515},{&g_269,&g_269,(void*)0,&g_515,&g_515,&g_181},{&g_515,&g_515,&g_181,(void*)0,&g_515,(void*)0},{&g_181,&g_515,&g_181,&g_515,&g_269,&g_181},{&g_269,&g_515,(void*)0,&g_181,&g_269,&g_515},{&g_181,&g_269,&g_181,&g_181,&g_515,&g_181}},{{(void*)0,&g_515,&g_515,(void*)0,&g_515,&g_515},{&g_515,&g_181,&g_515,&g_515,&g_269,&g_181},{&g_515,&g_515,&g_515,&g_515,&g_515,&g_269},{&g_515,&g_515,&g_269,&g_181,&g_269,&g_181},{&g_181,&g_181,&g_515,&g_181,&g_515,(void*)0},{&g_269,&g_515,&g_181,&g_181,&g_515,(void*)0}},{{&g_181,&g_269,&g_515,&g_515,&g_269,&g_181},{(void*)0,&g_181,&g_515,&g_515,&g_515,&g_515},{&g_269,&g_269,&g_181,&g_181,&g_269,&g_181},{&g_269,(void*)0,&g_181,&g_515,&g_181,(void*)0},{(void*)0,&g_515,&g_269,&g_515,&g_181,&g_181},{&g_181,&g_181,&g_269,&g_181,(void*)0,&g_515}},{{&g_269,&g_181,&g_515,&g_181,&g_269,(void*)0},{&g_181,&g_515,&g_181,&g_181,&g_269,&g_181},{&g_515,&g_515,&g_269,&g_515,&g_515,&g_181},{&g_515,(void*)0,&g_181,&g_515,&g_181,(void*)0},{&g_515,(void*)0,&g_515,(void*)0,&g_181,&g_515},{(void*)0,&g_515,&g_269,&g_181,&g_181,&g_181}}};
        uint32_t l_746 = 4294967292UL;
        uint8_t **l_753[9][10] = {{&g_538,&g_538,&g_538,&g_538,&g_538,&l_584,&l_584,(void*)0,&l_584,&l_584},{&l_584,&g_538,(void*)0,&g_538,&l_584,&l_584,&g_538,&l_584,&l_584,&g_538},{&l_584,(void*)0,&g_538,&g_538,&l_584,&l_584,(void*)0,&l_584,&g_538,&l_584},{&l_584,&l_584,&g_538,&l_584,&g_538,&l_584,&g_538,&l_584,&l_584,&l_584},{&g_538,&l_584,(void*)0,&l_584,&l_584,&g_538,&g_538,(void*)0,&l_584,&g_538},{&l_584,&l_584,&g_538,&l_584,&l_584,&g_538,(void*)0,&g_538,&l_584,&l_584},{&l_584,(void*)0,&l_584,&l_584,&g_538,&g_538,&g_538,&g_538,&g_538,&g_538},{&g_538,&g_538,&g_538,&g_538,&g_538,&l_584,&l_584,&l_584,&g_538,&g_538},{(void*)0,&l_584,&g_538,(void*)0,(void*)0,&g_538,&l_584,&l_584,&g_538,&g_538}};
        int i, j, k;
        (*l_74) = p_48;
        (*l_717) = l_716[3];
        --g_722;
        if ((((safe_div_func_uint8_t_u_u(((*l_82) = (((safe_rshift_func_int8_t_s_s(g_179, 1)) != (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((((g_722 ^ ((((*g_684) = (((*l_733) &= g_103[3].f0) , (*g_684))) & (g_734 == &l_716[1])) < (safe_rshift_func_int16_t_s_s(p_47, 13)))) == (((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*g_538) = p_47), (((*l_80) = (((l_743[2][2][7] = (void*)0) != l_744) < p_48)) , l_746))), 0xEA7EL)) >= 4294967293UL) == 0x358567D9L)) != (*l_72)), l_747)), p_47))) & p_48)), p_47)) & g_345[7][3][2]) < p_48))
        {
            (*l_74) = (0x11B9L & (safe_mod_func_uint8_t_u_u(0UL, g_143.f0)));
            for (g_127 = 14; (g_127 >= 20); g_127++)
            {
                if (g_269)
                    goto lbl_752;
            }
        }
        else
        {
            const uint8_t *l_755 = &g_756;
            const uint8_t **l_754 = &l_755;
            int32_t l_761 = 0xFAC22771L;
            uint32_t *l_765 = &g_707;
            uint32_t ** const l_764 = &l_765;
            uint32_t ** const *l_763 = &l_764;
            uint32_t ** const **l_762[6][4] = {{&l_763,&l_763,&l_763,&l_763},{&l_763,&l_763,&l_763,&l_763},{&l_763,&l_763,&l_763,&l_763},{&l_763,&l_763,&l_763,&l_763},{&l_763,&l_763,&l_763,&l_763},{&l_763,&l_763,&l_763,&l_763}};
            int i, j;
            (*l_78) |= (((l_753[1][7] != (**g_658)) > (((((((*g_684) = p_48) , l_584) != ((*l_754) = l_584)) <= (safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u(((*g_538) = (p_47 , 0UL)), (l_761 < (((l_766 = (void*)0) == &l_767) ^ g_103[3].f0)))) & (-9L)) >= p_47), p_47))) < p_47) , (*l_72))) , g_345[4][0][3]);
        }
    }
    else
    {
        uint32_t l_781 = 0x833D95DAL;
        int32_t l_787 = 0x319D5003L;
        const uint32_t *l_827 = &g_143.f0;
        int8_t l_881 = 0L;
        int32_t l_919 = 0L;
        uint32_t ***l_957[1][8] = {{&g_422,&g_422,&g_422,&g_422,&g_422,&g_422,&g_422,&g_422}};
        uint32_t ****l_956 = &l_957[0][1];
        uint64_t * const l_1065 = &g_553[4][2];
        union U1 l_1081[3][1] = {{{18446744073709551615UL}},{{18446744073709551615UL}},{{18446744073709551615UL}}};
        int32_t l_1085 = 0xAE803A17L;
        int64_t l_1088 = 3L;
        int32_t l_1127 = 0x36A36EFDL;
        int32_t l_1128 = (-1L);
        union U0 l_1151 = {18446744073709551615UL};
        int32_t *l_1158[6][4][4] = {{{&l_1129,&l_1127,&l_919,&l_1129},{&l_721,&g_73,&g_79,&l_1127},{&l_787,(void*)0,&l_721,(void*)0},{&l_1127,(void*)0,&g_590,(void*)0}},{{&l_1127,&l_1128,&g_79,&l_1127},{(void*)0,(void*)0,(void*)0,&l_787},{(void*)0,&l_1127,&l_721,&g_706},{(void*)0,&g_79,(void*)0,&l_721}},{{(void*)0,&g_706,&g_79,&g_73},{&l_1127,&l_76,&g_590,(void*)0},{&l_1127,&l_787,&l_721,(void*)0},{&l_787,&g_706,&g_79,&l_720}},{{&l_721,(void*)0,&l_919,&g_706},{&l_1129,&l_1128,&l_1128,&l_1129},{&l_720,(void*)0,&g_79,&l_721},{&l_76,(void*)0,(void*)0,(void*)0}},{{&l_1127,(void*)0,&l_1127,(void*)0},{&l_1128,(void*)0,&g_79,&l_721},{&l_1127,(void*)0,&l_919,&l_1129},{(void*)0,&l_1128,&g_590,&g_706}},{{&g_79,(void*)0,(void*)0,&l_720},{&l_1127,&g_706,&l_919,(void*)0},{&l_1127,&l_787,&l_1127,(void*)0},{&l_721,&l_76,&l_721,&g_73}}};
        int16_t *l_1241 = &g_58;
        uint8_t ****l_1252[7][8][4] = {{{&l_1184[1],&l_1184[1],&l_1184[1],&l_1184[1]},{&l_1184[1],&g_659[1],&g_659[1],&l_1184[1]},{&g_659[1],&l_1184[1],&g_659[1],&g_659[1]},{&l_1184[1],&l_1184[1],&l_1184[1],&l_1184[1]},{&l_1184[1],&g_659[1],&g_659[1],&l_1184[1]},{&g_659[1],&l_1184[1],&g_659[1],&g_659[1]},{&l_1184[1],&l_1184[1],&l_1184[1],&l_1184[1]},{&l_1184[1],&g_659[1],&g_659[1],&l_1184[1]}},{{&g_659[1],&l_1184[1],&g_659[1],&g_659[1]},{&l_1184[1],&l_1184[1],&l_1184[1],&l_1184[1]},{&l_1184[1],&g_659[1],&g_659[1],&l_1184[1]},{&g_659[1],&l_1184[1],&g_659[1],&l_1184[1]},{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]},{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]},{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]},{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]}},{{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]},{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]},{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]},{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]},{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]},{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]},{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]},{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]}},{{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]},{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]},{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]},{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]},{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]},{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]},{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]},{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]}},{{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]},{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]},{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]},{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]},{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]},{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]},{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]},{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]}},{{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]},{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]},{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]},{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]},{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]},{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]},{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]},{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]}},{{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]},{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]},{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]},{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]},{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]},{&l_1184[1],&g_659[1],&l_1184[1],&l_1184[1]},{&g_659[1],&g_659[1],&l_1184[1],&g_659[1]},{&g_659[1],&l_1184[1],&l_1184[1],&g_659[1]}}};
        int32_t l_1256 = 0L;
        const union U0 ***l_1279 = &l_1208;
        int32_t l_1288 = (-8L);
        const uint8_t l_1299 = 255UL;
        union U0 l_1347[3] = {{1UL},{1UL},{1UL}};
        uint32_t l_1371 = 0UL;
        int32_t **l_1403 = &l_83;
        int32_t ***l_1402 = &l_1403;
        uint8_t l_1406 = 5UL;
        uint16_t ***l_1411 = &l_1410[1];
        uint8_t *l_1433 = &g_85;
        int i, j, k;
    }
    (*l_82) ^= 0xDF7187EFL;
    for (g_1417 = 1; (g_1417 >= 0); g_1417 -= 1)
    {
        int32_t l_1446[4][8] = {{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L}};
        uint32_t l_1447 = 2UL;
        const int64_t l_1470[4][2][5] = {{{1L,1L,1L,0L,1L},{4L,(-1L),0x287FF897AEB28BB6LL,0x287FF897AEB28BB6LL,(-1L)}},{{(-1L),0L,0x3FD7B94F9C46F66DLL,0L,(-1L)},{(-1L),0x287FF897AEB28BB6LL,0x287FF897AEB28BB6LL,(-1L),4L}},{{1L,0L,1L,1L,1L},{(-1L),(-1L),1L,0x287FF897AEB28BB6LL,4L}},{{(-1L),1L,0x3FD7B94F9C46F66DLL,1L,(-1L)},{4L,0x287FF897AEB28BB6LL,1L,(-1L),(-1L)}}};
        int32_t *l_1488[10][6] = {{&g_79,&g_79,(void*)0,&g_73,(void*)0,&g_73},{&g_1232,&g_79,&g_1232,&g_590,(void*)0,(void*)0},{&g_1232,&g_1232,&g_1232,&g_1232,&g_79,&g_73},{&g_73,&g_1232,(void*)0,&g_1232,&g_73,&g_590},{&g_1232,&g_73,&g_590,&g_590,&g_73,&g_1232},{&g_1232,&g_1232,&g_79,&g_73,&g_79,&g_1232},{&g_79,&g_1232,&g_590,(void*)0,(void*)0,&g_590},{&g_79,&g_79,(void*)0,&g_73,(void*)0,&g_73},{&g_1232,&g_79,&g_1232,&g_590,(void*)0,(void*)0},{&g_1232,&g_1232,&g_1232,&g_1232,&g_79,&g_73}};
        const int32_t *l_1497 = &g_590;
        uint64_t ****l_1532[2];
        union U0 l_1561 = {0xA11E04C77CA1D01ALL};
        union U0 *l_1562[4];
        int8_t *l_1569 = &g_640;
        int64_t ***l_1570 = &g_683[0][3][5];
        uint32_t ***l_1612 = &g_422;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1532[i] = &l_843;
        for (i = 0; i < 4; i++)
            l_1562[i] = (void*)0;
        for (g_1130 = 0; (g_1130 <= 3); g_1130 += 1)
        {
            union U1 l_1440 = {0UL};
            int32_t **l_1443[10][2][10] = {{{(void*)0,&l_77,(void*)0,&g_197,(void*)0,(void*)0,&l_77,(void*)0,&l_77,&l_80},{&l_75,&l_75,&g_197,(void*)0,&l_77,&l_80,&l_77,&l_82,&l_74,&l_80}},{{&l_77,&l_74,&l_81,&l_80,&l_84,&l_83,&l_84,&l_80,&l_81,&l_74},{&l_81,&l_77,&l_78,&l_84,&l_77,&l_80,&l_74,&l_74,&l_74,(void*)0}},{{&l_82,&l_74,&l_82,&l_75,(void*)0,&l_80,&l_75,(void*)0,&l_80,&l_84},{&l_81,&l_78,&l_74,(void*)0,&g_197,&l_83,(void*)0,(void*)0,&l_80,(void*)0}},{{&l_77,(void*)0,(void*)0,&l_77,&l_82,&l_80,&l_82,&l_74,(void*)0,&l_74},{&l_78,&l_75,&l_72,(void*)0,&l_80,(void*)0,&l_80,&l_84,&l_74,&l_84}},{{(void*)0,(void*)0,&l_81,(void*)0,&l_83,&l_75,&l_82,&l_80,&l_80,&l_80},{&l_75,&l_74,&l_77,&g_197,&g_197,&l_77,&l_74,&l_75,&g_197,&g_197}},{{&l_80,&g_197,&l_80,(void*)0,(void*)0,&l_75,&l_84,&l_74,&l_75,&g_197},{&l_74,&g_197,&l_80,(void*)0,(void*)0,&l_74,(void*)0,&l_75,(void*)0,(void*)0}},{{&l_82,&g_197,&l_77,&g_197,&l_84,(void*)0,&l_83,&l_80,&l_75,&l_77},{&l_74,&l_82,&l_81,&l_77,&l_75,(void*)0,(void*)0,&l_84,&l_80,&l_72}},{{&l_84,(void*)0,&l_72,(void*)0,&l_84,&l_77,&l_80,(void*)0,&l_78,&l_75},{&l_84,&l_82,(void*)0,&l_78,(void*)0,&l_84,(void*)0,&l_74,(void*)0,&l_84}},{{&l_75,&l_80,(void*)0,&l_80,&l_75,&l_77,(void*)0,&g_197,(void*)0,(void*)0},{&g_197,&l_74,&l_83,(void*)0,&l_78,(void*)0,(void*)0,&g_197,&l_75,(void*)0}},{{(void*)0,(void*)0,&l_78,&g_197,&l_75,&l_80,(void*)0,&l_84,(void*)0,&l_84},{&l_74,(void*)0,&l_82,&l_77,(void*)0,&l_74,&g_197,&l_83,&l_72,&l_75}}};
            int32_t ***l_1442 = &l_1443[8][1][4];
            int32_t ****l_1441 = &l_1442;
            const uint8_t *l_1525 = (void*)0;
            const uint8_t **l_1524[1][8] = {{&l_1525,&l_1525,&l_1525,&l_1525,&l_1525,&l_1525,&l_1525,&l_1525}};
            int i, j, k;
            if (((*g_1231) &= (l_1440 , ((void*)0 != l_1441))))
            {
                int32_t l_1444[4][3][7] = {{{(-3L),3L,1L,0L,6L,1L,0L},{1L,0x0F6117D0L,0x752AB559L,6L,0L,(-2L),0L},{1L,0x0F6117D0L,0x0F6117D0L,1L,(-8L),0L,(-1L)}},{{6L,3L,(-1L),(-3L),0xFD73F272L,1L,0L},{0L,0L,(-8L),0x6F76C34DL,1L,0x3C978A90L,(-1L)},{1L,(-2L),1L,0x2449998AL,0x6F76C34DL,3L,0L}},{{0L,(-1L),0x6F76C34DL,0x5E9D6D64L,0x6F76C34DL,(-1L),0L},{(-1L),0x6F76C34DL,1L,0L,0x63661E8CL,0xA3D3842EL,0x3C978A90L},{1L,1L,(-2L),0x2449998AL,0L,0x3C978A90L,0xA3D3842EL}},{{0x5E9D6D64L,(-8L),0x752AB559L,6L,1L,0x2449998AL,0L},{(-3L),1L,(-1L),0L,0xFD73F272L,0xFD73F272L,0L},{(-3L),1L,(-3L),(-8L),0L,3L,1L}}};
                int32_t l_1445[6][9] = {{0L,0x292D4BB1L,0xC9A31B16L,0x292D4BB1L,0L,0L,0L,0x292D4BB1L,0xC9A31B16L},{0x9B2960C7L,0x9B2960C7L,0xF3C7BCC9L,0xB5431CC7L,0x9B2960C7L,1L,0xB5431CC7L,0xB5431CC7L,1L},{0x64A03850L,0x292D4BB1L,0x88BD83BEL,0x292D4BB1L,0x64A03850L,0L,0x64A03850L,0x292D4BB1L,0x88BD83BEL},{0x9B2960C7L,0xB5431CC7L,0xF3C7BCC9L,0x9B2960C7L,0x9B2960C7L,0xF3C7BCC9L,0xB5431CC7L,0x9B2960C7L,1L},{0L,0x292D4BB1L,0xC9A31B16L,0x292D4BB1L,0L,0L,0L,0x292D4BB1L,0xC9A31B16L},{0x9B2960C7L,0x9B2960C7L,0xF3C7BCC9L,0xB5431CC7L,0x9B2960C7L,1L,0xB5431CC7L,0xB5431CC7L,1L}};
                int i, j, k;
                ++l_1447;
            }
            else
            {
                int32_t l_1456 = 0x730AABDAL;
                int8_t *l_1457 = &g_640;
                int64_t *l_1469 = &g_275;
                union U0 l_1473 = {18446744073709551612UL};
                union U1 l_1495 = {0x2ED6365FL};
                union U1 **l_1507[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_1507[i] = &g_735;
                if (((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(g_705, (((*l_1457) = l_1456) | (((safe_mod_func_int16_t_s_s(((0UL <= g_371[6][3][0]) , ((l_1456 ^ ((safe_lshift_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((~(l_1456 >= ((safe_add_func_uint8_t_u_u((((*l_1469) ^= (safe_lshift_func_uint16_t_u_u((p_48 <= ((*g_684) = p_48)), (p_47 != l_1456)))) , l_1446[0][4]), 0x62L)) <= g_4))), p_47)) >= (**g_641)) || l_1456), l_1470[1][1][2])) , (-1L))) > 0x3BC5L)), (*g_642))) && (**g_641)) != p_48)))), l_1446[3][2])) , l_1456))
                {
                    for (g_85 = 0; (g_85 <= 3); g_85 += 1)
                    {
                        return p_48;
                    }
                    return g_1418;
                }
                else
                {
                    uint8_t l_1477 = 0xB5L;
                    (*l_72) = (safe_mul_func_uint8_t_u_u((l_1473 , p_48), (g_325[3].f0 || (((safe_mul_func_int8_t_s_s(((((**g_641) = (((*l_1457) = (l_1470[1][1][2] ^ (safe_unary_minus_func_uint32_t_u(l_1477)))) == (l_1440 , 0xD8L))) >= (p_48 & (1L == l_1447))) != p_48), (**g_537))) < g_829) && (*g_538)))));
                }
                if (p_47)
                {
                    int32_t l_1479 = 0x601044F6L;
                    int32_t l_1487 = 0xB206F779L;
                    if (g_1232)
                        goto lbl_752;
                    for (g_695 = 0; (g_695 <= 3); g_695 += 1)
                    {
                        uint32_t * const *l_1484 = &g_423;
                        uint32_t * const **l_1483 = &l_1484;
                        uint32_t * const ***l_1482 = &l_1483;
                        uint32_t * const ***l_1486[4][3][6] = {{{&l_1483,(void*)0,&l_1483,&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483,&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483,(void*)0,(void*)0,&l_1483}},{{&l_1483,&l_1483,&l_1483,&l_1483,&l_1483,&l_1483},{(void*)0,&l_1483,(void*)0,&l_1483,&l_1483,(void*)0},{&l_1483,&l_1483,&l_1483,&l_1483,&l_1483,(void*)0}},{{&l_1483,&l_1483,(void*)0,&l_1483,&l_1483,&l_1483},{&l_1483,(void*)0,&l_1483,(void*)0,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483,(void*)0,&l_1483,&l_1483}},{{(void*)0,&l_1483,&l_1483,(void*)0,(void*)0,&l_1483},{&l_1483,&l_1483,&l_1483,&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,(void*)0,&l_1483,&l_1483,&l_1483}}};
                        uint32_t * const ****l_1485 = &l_1486[1][0][0];
                        int i, j, k;
                        l_1487 ^= ((p_47 >= (!l_1479)) >= ((safe_lshift_func_int8_t_s_s(p_47, 5)) != ((g_103[g_695] , l_1482) == ((*l_1485) = &l_1483))));
                        if (p_48)
                            break;
                        (*g_1225) = (l_1488[6][5] = &l_1129);
                    }
                    if (p_47)
                        continue;
                }
                else
                {
                    int16_t ** const *l_1496 = &l_743[4][0][5];
                    (*l_81) ^= ((safe_sub_func_int16_t_s_s((&g_683[2][0][0] != &g_683[2][0][0]), (((0x64L && (**g_537)) != (safe_sub_func_int64_t_s_s(0x535D4E6A5130BC43LL, 18446744073709551615UL))) <= (safe_add_func_int32_t_s_s((((l_1495 , &g_641) != l_1496) ^ 0xCB5AL), l_1473.f0))))) , p_48);
                    for (g_179 = 3; (g_179 >= 0); g_179 -= 1)
                    {
                        if (p_47)
                            break;
                        l_1497 = ((p_47 = 0x7CED8BC4L) , (*g_1225));
                        if (p_47)
                            break;
                    }
                }
                for (g_695 = 0; (g_695 <= 3); g_695 += 1)
                {
                    int32_t l_1502 = 0xC5E966FFL;
                    union U0 l_1514 = {3UL};
                    uint32_t l_1527[10] = {0x24BFEBC5L,0x24BFEBC5L,0xC02364D3L,0x24BFEBC5L,0x24BFEBC5L,0xC02364D3L,0x24BFEBC5L,0x24BFEBC5L,0xC02364D3L,0x24BFEBC5L};
                    int32_t *l_1531 = &l_721;
                    int i;
                    (*g_1225) = l_1488[6][5];
                    for (p_47 = 0; (p_47 <= 2); p_47 += 1)
                    {
                        int i, j, k;
                        (*l_83) |= (safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s((*g_684), (0x79L && l_1502))), (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((*l_1004), (0xAA604FD2B3BEB62CLL && ((0xB39FL || p_48) && (-6L))))), 2))));
                        if (l_1502)
                            continue;
                        (**g_1230) ^= 0x3544162FL;
                        (*l_80) ^= (*l_72);
                    }
                    for (g_707 = 0; (g_707 <= 1); g_707 += 1)
                    {
                        union U1 ***l_1508 = (void*)0;
                        int32_t ***l_1515 = &g_1175;
                        int32_t l_1526 = (-1L);
                        int32_t l_1529 = 0L;
                        int32_t **l_1530 = &l_1488[2][3];
                        g_734 = l_1507[3];
                        (**g_1230) = ((safe_lshift_func_uint16_t_u_s(0xF662L, ((*l_78) |= ((safe_sub_func_uint64_t_u_u((((+(l_1514 , p_47)) | (((*l_1515) = &g_1176[6][0][0]) == ((p_48 , (g_143.f1 & (safe_div_func_uint8_t_u_u((((((((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((l_1526 = (safe_add_func_uint16_t_u_u(((g_553[1][4] , ((((p_48 ^ g_58) && p_48) , (void*)0) != l_1524[0][1])) == (**g_641)), (*l_82)))), 18446744073709551615UL)), 65535UL)) <= g_131[2]) >= 0x75L) > 254UL) | (*g_642)) ^ (*g_1069)) < (**g_641)), g_181)))) , &g_1176[6][0][0]))) , l_1527[4]), p_48)) ^ l_1528[0])))) | l_1529);
                        (*l_1530) = (*g_1230);
                        l_1531 = ((*l_1530) = &g_73);
                    }
                }
            }
            return p_47;
        }
        for (g_1130 = 0; (g_1130 <= 1); g_1130 += 1)
        {
            uint32_t l_1543 = 0xC3EB0BB8L;
            (*l_82) &= p_48;
            for (g_513 = 0; (g_513 <= 1); g_513 += 1)
            {
                uint64_t *****l_1533[5][1][10] = {{{&g_1439,&l_842[0][1][0],&l_1532[0],&l_1532[0],(void*)0,&l_1532[0],&l_1532[0],&l_842[0][1][0],&g_1439,&l_842[0][4][2]}},{{&l_842[0][5][0],(void*)0,&l_1532[0],(void*)0,&l_842[0][1][0],&l_842[0][1][0],(void*)0,&l_1532[0],(void*)0,&l_842[0][5][0]}},{{(void*)0,&l_1532[0],&g_1439,&l_842[0][1][0],&g_1439,&g_1439,&g_1439,&l_842[0][1][0],&l_842[0][4][2],(void*)0}},{{&l_1532[0],(void*)0,&g_1439,(void*)0,&g_1439,&l_1532[0],&l_1532[0],&g_1439,(void*)0,&g_1439}},{{&g_1439,&g_1439,&l_842[0][1][0],&l_1532[0],&l_842[0][5][0],&l_1532[0],&l_842[0][4][2],&l_1532[0],&l_842[0][5][0],&l_1532[0]}}};
                int i, j, k;
                l_1532[0] = l_1532[0];
            }
            for (g_1160 = 1; (g_1160 >= 0); g_1160 -= 1)
            {
                const int32_t l_1535 = 0x933BAF05L;
                int i;
                (*l_1208) = (void*)0;
                if ((!p_48))
                {
                    if (l_1535)
                    {
                        return p_48;
                    }
                    else
                    {
                        int16_t l_1536 = 1L;
                        return l_1536;
                    }
                }
                else
                {
                    int64_t l_1550 = 0xAF7FEA66C191B314LL;
                    uint32_t *l_1553 = &g_1419[1][3][0];
                    (*l_78) = (safe_mod_func_int16_t_s_s(p_48, (safe_lshift_func_uint16_t_u_s((0x8B35L < 0x57F9L), 5))));
                    if ((**g_1230))
                        break;
                    (*l_74) ^= (safe_sub_func_int32_t_s_s(l_1543, ((*l_78) = ((*l_1004) | (((((*l_1553) = (safe_mul_func_uint16_t_u_u((*g_1069), (p_47 || ((((((safe_mul_func_uint8_t_u_u((*l_81), (safe_lshift_func_int16_t_s_u(l_1535, 8)))) | (l_1550 ^ (safe_rshift_func_uint8_t_u_u(((void*)0 == &g_1416), 3)))) == g_85) ^ g_1416) < g_127) ^ (-1L)))))) , 0xB3L) > 1UL) < (*g_1069))))));
                }
            }
        }
        l_1004 = (*g_1230);
        (*l_82) = (p_47 == (((0x37L > p_48) <= (((safe_rshift_func_int8_t_s_s(l_1558, (safe_mul_func_uint8_t_u_u(((**g_537) = ((l_1563 = l_1561) , (safe_lshift_func_int16_t_s_u((l_1566 == (((*l_1569) = ((safe_unary_minus_func_int8_t_s(((~(****g_658)) && (*g_538)))) && (-1L))) , l_1570)), (*l_1497))))), (-1L))))) || (*l_1497)) < g_129)) ^ (*g_642)));
        for (g_705 = 0; (g_705 <= 3); g_705 += 1)
        {
            uint64_t ***l_1588 = &g_501;
            int64_t *l_1595 = &l_1528[0];
            int32_t l_1596 = 0x06F4B8F1L;
            int32_t l_1597 = 0x479DE114L;
            uint8_t *****l_1598 = (void*)0;
            uint64_t l_1608 = 0xE7185F5422E005E9LL;
            int16_t *l_1646 = &g_58;
        }
    }
    return (*l_74);
}







static int8_t func_90(union U0 p_91, uint8_t * p_92, const uint16_t p_93, uint8_t * p_94)
{
    uint64_t l_614 = 1UL;
    int32_t l_627 = 0L;
    union U0 *l_629 = (void*)0;
    int64_t *l_648 = &g_129;
    int32_t *l_710 = &l_627;
    for (g_73 = 6; (g_73 >= 0); g_73 -= 1)
    {
        union U1 *l_588[9][7] = {{&g_325[1],&g_325[3],&g_325[3],&g_325[3],&g_325[3],&g_325[1],&g_325[3]},{&g_325[3],&g_325[3],&g_325[3],&g_325[3],(void*)0,&g_325[3],&g_325[3]},{&g_325[3],&g_325[3],&g_325[1],&g_325[3],&g_325[1],&g_325[3],&g_325[3]},{(void*)0,&g_325[3],&g_325[2],&g_325[3],(void*)0,(void*)0,&g_325[3]},{&g_325[3],&g_325[3],&g_325[3],&g_325[1],&g_325[1],&g_325[3],&g_325[3]},{&g_325[3],(void*)0,&g_325[2],&g_325[2],(void*)0,&g_325[3],(void*)0},{&g_325[3],&g_325[1],&g_325[1],&g_325[3],&g_325[3],&g_325[3],&g_325[1]},{(void*)0,(void*)0,&g_325[3],&g_325[2],&g_325[3],(void*)0,(void*)0},{&g_325[3],&g_325[1],&g_325[3],&g_325[1],&g_325[3],&g_325[3],&g_325[1]}};
        int32_t *l_591 = (void*)0;
        int32_t **l_628 = &l_591;
        int i, j;
        for (g_71 = 0; (g_71 <= 7); g_71 += 1)
        {
            int8_t l_606 = (-5L);
            int32_t *l_607 = &g_79;
            int32_t *l_608 = &g_79;
            int32_t *l_609 = (void*)0;
            int32_t *l_610 = (void*)0;
            int32_t *l_611 = &g_79;
            int32_t *l_612 = &g_590;
            int32_t *l_613 = &g_79;
            uint64_t *l_621 = &g_103[3].f0;
            uint64_t *l_626 = &g_553[5][5];
            for (g_79 = 6; (g_79 >= 2); g_79 -= 1)
            {
                int32_t *l_589 = &g_590;
                int i;
                (*l_589) = (safe_sub_func_uint64_t_u_u(g_131[g_71], ((&g_325[3] != l_588[3][5]) ^ g_73)));
                return p_91.f0;
            }
            for (p_91.f0 = 2; (p_91.f0 <= 7); p_91.f0 += 1)
            {
                int32_t **l_592 = (void*)0;
                int32_t **l_593 = &g_197;
                (*l_593) = l_591;
                for (g_127 = 0; (g_127 <= 6); g_127 += 1)
                {
                    int8_t *l_599[5] = {&g_179,&g_179,&g_179,&g_179,&g_179};
                    int32_t *l_602[5][2] = {{&g_590,&g_79},{&g_79,&g_79},{&g_590,&g_79},{&g_79,&g_79},{&g_79,&g_79}};
                    uint64_t *l_605 = &g_177;
                    int i, j;
                    (*l_593) = &g_73;
                    l_606 = (((*l_605) = (safe_lshift_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s((g_377[0] ^ (0L ^ (+((g_179 = g_140) || 0xD3L)))), (safe_sub_func_int16_t_s_s((((-1L) == (((((g_79 &= p_93) | 4294967289UL) <= ((safe_sub_func_uint64_t_u_u(0x3E3A63CC29D45515LL, g_377[3])) > (*g_538))) | p_93) >= 0xA11EA38DL)) , 0L), g_283)))) ^ (-5L)) ^ p_93), 6))) , 0xD580069BL);
                    g_197 = (void*)0;
                }
            }
            l_614++;
            (*l_612) = (safe_sub_func_uint64_t_u_u(((*l_626) = (safe_sub_func_uint64_t_u_u((--(*l_621)), ((*l_608) < (g_269++))))), p_93));
        }
        l_627 ^= 0x23D146A1L;
        (*l_628) = &g_590;
    }
    (*g_445) = l_629;
    for (g_71 = (-2); (g_71 >= (-3)); g_71 = safe_sub_func_uint64_t_u_u(g_71, 6))
    {
        uint32_t l_644 = 0x4D6A5E27L;
        int32_t l_647 = 0x62CEDB97L;
        union U1 l_680 = {0x35D5DA75L};
        int64_t **l_687 = &g_684;
        int32_t **l_711 = &g_197;
        for (g_140 = 0; (g_140 <= 4); g_140 += 1)
        {
            union U0 *l_636 = &g_103[1];
            int8_t *l_637 = &g_179;
            int8_t *l_638 = (void*)0;
            int8_t *l_639 = &g_640;
            int32_t *l_643 = &g_79;
            int64_t **l_685 = &l_648;
            int32_t l_691[2][4] = {{0xD2B42FEAL,0x58D15DD0L,0xD2B42FEAL,0x58D15DD0L},{0xD2B42FEAL,0x58D15DD0L,0xD2B42FEAL,0x58D15DD0L}};
            int i, j;
            (*l_643) = ((((safe_rshift_func_uint8_t_u_s((((*l_639) = ((*l_637) = (safe_rshift_func_int8_t_s_u(((*g_445) == (l_636 = l_636)), 1)))) , (p_93 == (0xAE6AD7E7B9CA6D94LL == (((void*)0 != g_641) != (&g_445 != (g_640 , (void*)0)))))), 3)) == (**g_537)) , 0xB464D79B805EB39CLL) & g_515);
            for (g_275 = 3; (g_275 >= 0); g_275 -= 1)
            {
                int16_t l_655[1][3][8] = {{{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L}}};
                union U0 **l_668 = &l_636;
                int32_t l_694 = 0xFBC24D66L;
                int32_t l_704 = 6L;
                int i, j, k;
                (*l_643) = 1L;
                for (g_127 = 5; (g_127 >= 0); g_127 -= 1)
                {
                    for (g_73 = 0; (g_73 <= 5); g_73 += 1)
                    {
                        int i, j;
                        (*l_643) = g_553[(g_275 + 4)][g_127];
                        (*l_643) = 0xA4A36395L;
                        ++l_644;
                        l_647 = (g_79 = 1L);
                    }
                    (*l_643) ^= ((void*)0 == l_648);
                }
                for (g_129 = 0; (g_129 <= 3); g_129 += 1)
                {
                    const int8_t l_662[3][4][3] = {{{(-4L),0L,0L},{0xD7L,0x62L,0x1FL},{(-4L),0x2EL,(-4L)},{0xD7L,1L,5L}},{{(-4L),0xAEL,0xCBL},{0xD7L,0x88L,0xD7L},{(-4L),0L,0L},{0xD7L,0x62L,0x1FL}},{{(-4L),0x2EL,(-4L)},{0xD7L,1L,5L},{(-4L),0xAEL,0xCBL},{0xD7L,0x88L,0xD7L}}};
                    union U0 **l_667 = (void*)0;
                    union U0 ***l_669 = (void*)0;
                    union U0 ***l_670 = &l_668;
                    int16_t l_671[2][3] = {{0xB1AFL,0xB1AFL,0xB1AFL},{0x8702L,0x8702L,0x8702L}};
                    int32_t *l_698 = &g_590;
                    int32_t *l_699 = &l_691[1][0];
                    int32_t *l_700 = (void*)0;
                    int32_t *l_701 = &g_73;
                    int32_t *l_702[4][3] = {{&l_647,&l_647,&l_647},{&g_73,&g_73,&g_73},{&l_647,&l_647,&l_647},{&g_73,&g_73,&g_73}};
                    int i, j, k;
                    if ((safe_mod_func_int16_t_s_s(((*g_642) &= (0x19D26FEEL < ((((safe_div_func_uint64_t_u_u((((0L && (((l_655[0][1][4] > 0x6A71378DL) & ((safe_add_func_int32_t_s_s(((void*)0 != g_658), (safe_rshift_func_int16_t_s_u(l_662[1][2][0], (+(((~((*p_92) = (safe_div_func_uint8_t_u_u((l_667 == ((*l_670) = l_668)), 8L)))) , l_647) >= 0L)))))) < l_655[0][1][4])) & 0xB0A31252L)) || l_662[1][0][0]) | p_91.f0), p_91.f0)) && 1L) == l_671[0][2]) < (*l_643)))), p_91.f0)))
                    {
                        union U0 l_678 = {0xECC18A5D37C0EED1LL};
                        int32_t *l_679 = &g_590;
                        int64_t ***l_686 = &g_683[2][0][0];
                        (*l_679) = (safe_div_func_int32_t_s_s((p_91 , ((*l_643) = ((((p_91.f0 < 1UL) | (safe_mod_func_uint16_t_u_u((l_614 , (l_678 , 0xCE3FL)), (-8L)))) <= (((g_127 & (0xA5L <= 1UL)) <= (*g_642)) > p_93)) <= g_345[7][3][2]))), 0x02D5D224L));
                        (*l_643) = (l_680 , (safe_add_func_int8_t_s_s(g_127, ((((((((*l_686) = (l_685 = g_683[2][0][0])) == l_687) , &g_79) == &l_627) < 18446744073709551615UL) , (0x39L <= 0x9FL)) != p_91.f0))));
                        (*l_643) = 1L;
                    }
                    else
                    {
                        int32_t **l_688 = &l_643;
                        int32_t *l_689 = &l_647;
                        int32_t *l_690 = &l_627;
                        int32_t *l_692 = &g_590;
                        int32_t *l_693[4] = {&g_73,&g_73,&g_73,&g_73};
                        int i;
                        (*l_688) = &l_647;
                        g_695--;
                    }
                    --g_707;
                    if (p_91.f0)
                        break;
                }
            }
        }
        (*l_711) = l_710;
        (**l_711) = ((g_143.f1 && (*g_642)) , (0xD8B7L == ((void*)0 == &l_629)));
    }
    return p_93;
}







static union U0 func_95(int32_t * p_96)
{
    int32_t l_99[9][4][1] = {{{1L},{(-1L)},{0xD98557C7L},{(-1L)}},{{1L},{1L},{1L},{(-1L)}},{{0xD98557C7L},{(-1L)},{1L},{1L}},{{1L},{(-1L)},{0xD98557C7L},{(-1L)}},{{1L},{1L},{1L},{(-1L)}},{{0xD98557C7L},{(-1L)},{1L},{1L}},{{1L},{(-1L)},{0xD98557C7L},{(-1L)}},{{1L},{1L},{1L},{(-1L)}},{{0xD98557C7L},{(-1L)},{1L},{1L}}};
    int16_t l_125 = 0xA2E7L;
    int32_t l_180 = 0x1B6DC2EEL;
    int32_t *l_201 = &g_71;
    union U0 l_202[4] = {{0x643767A3BE24AF6DLL},{0x643767A3BE24AF6DLL},{0x643767A3BE24AF6DLL},{0x643767A3BE24AF6DLL}};
    uint8_t *l_233 = &g_139;
    int32_t l_266[10] = {(-1L),0xA4094C64L,0xA4094C64L,(-1L),0xA4094C64L,0xA4094C64L,(-1L),0xA4094C64L,0xA4094C64L,(-1L)};
    uint8_t **l_287 = (void*)0;
    uint8_t ***l_286 = &l_287;
    int8_t *l_362 = (void*)0;
    uint64_t l_370 = 18446744073709551615UL;
    uint64_t *l_433 = &g_177;
    uint64_t **l_432 = &l_433;
    union U1 *l_453 = (void*)0;
    int32_t l_487 = 0L;
    uint32_t **l_582 = &g_423;
    uint32_t ***l_583 = &l_582;
    int i, j, k;
    for (g_71 = 0; (g_71 < 16); g_71 = safe_add_func_int16_t_s_s(g_71, 3))
    {
        uint16_t l_172 = 0x2D90L;
        int32_t l_194 = 0x9F9EEFC3L;
        union U0 *l_207 = (void*)0;
        uint32_t *l_228 = &g_131[7];
        int32_t **l_251 = &g_197;
        int8_t *l_257 = &g_179;
        int64_t *l_340 = &g_275;
        int8_t l_419[2][4][5] = {{{0x37L,0x21L,0x37L,0L,0x92L},{0xABL,(-6L),0xABL,0x6EL,0x6EL},{0x37L,0x21L,0x37L,0L,0x92L},{0xABL,(-6L),0xABL,0x6EL,0x6EL}},{{0x37L,0x21L,0x37L,0L,0x92L},{0xABL,(-6L),0xABL,0x6EL,0x6EL},{0x37L,0x21L,0x37L,0L,0x92L},{0xABL,(-6L),0xABL,0x6EL,0x6EL}}};
        int32_t l_512[8][7] = {{0xE1205CD7L,0xE61A577BL,0xE1205CD7L,(-2L),(-2L),0xE1205CD7L,0xE61A577BL},{(-8L),1L,(-6L),(-6L),1L,(-8L),1L},{0xE1205CD7L,(-2L),(-2L),0xE1205CD7L,0xE61A577BL,0xE1205CD7L,(-2L)},{(-1L),(-1L),(-8L),(-6L),(-8L),(-1L),(-1L)},{0x6E8E60C9L,(-2L),5L,(-2L),0x6E8E60C9L,0x6E8E60C9L,(-2L)},{(-2L),1L,(-2L),(-8L),(-8L),(-2L),1L},{(-2L),0xE61A577BL,5L,5L,0xE61A577BL,(-2L),0xE61A577BL},{(-2L),(-8L),(-8L),(-2L),1L,(-2L),(-8L)}};
        uint32_t l_524 = 18446744073709551615UL;
        uint32_t ***l_535 = (void*)0;
        int i, j, k;
        for (g_73 = 0; (g_73 >= 0); g_73 -= 1)
        {
            union U0 l_112 = {0xE14B93870AF1AAC2LL};
            int32_t l_210 = 9L;
            int32_t *l_211[9];
            uint16_t l_231 = 0UL;
            union U1 l_245 = {0x4EC69529L};
            int i;
            for (i = 0; i < 9; i++)
                l_211[i] = &l_210;
            for (g_85 = 0; (g_85 <= 0); g_85 += 1)
            {
                int32_t l_174 = 4L;
                uint8_t * const l_176 = (void*)0;
                uint8_t * const *l_175[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_182[4] = {0xF4719CE8L,0xF4719CE8L,0xF4719CE8L,0xF4719CE8L};
                int8_t *l_203 = &g_179;
                int32_t *l_206 = &g_79;
                union U0 **l_208 = (void*)0;
                union U0 **l_209 = &l_207;
                int i, j, k;
                for (g_62 = 0; (g_62 <= 0); g_62 += 1)
                {
                    int32_t *l_100 = (void*)0;
                    int32_t *l_101 = (void*)0;
                    int32_t *l_102[6][1] = {{&l_99[8][0][0]},{&l_99[(g_62 + 6)][(g_62 + 2)][g_85]},{&l_99[8][0][0]},{&l_99[8][0][0]},{&l_99[(g_62 + 6)][(g_62 + 2)][g_85]},{&l_99[8][0][0]}};
                    int i, j, k;
                    g_79 &= l_99[(g_85 + 3)][(g_85 + 1)][g_62];
                    for (g_58 = 0; (g_58 >= 0); g_58 -= 1)
                    {
                        return g_103[3];
                    }
                    if ((g_73 , l_99[3][1][0]))
                    {
                        int64_t *l_126 = &g_127;
                        int64_t *l_128 = &g_129;
                        uint32_t *l_130 = &g_131[2];
                        uint8_t *l_138 = &g_139;
                        const union U1 *l_142 = &g_143;
                        const union U1 **l_141 = &l_142;
                        int32_t l_154 = (-1L);
                        uint64_t *l_173 = &g_103[3].f0;
                        int8_t *l_178 = &g_179;
                        g_140 = (((safe_div_func_uint8_t_u_u(((*l_138) &= func_106(&g_58, l_99[3][3][0], (l_99[2][2][0] , (((*l_130) &= (((safe_unary_minus_func_uint64_t_u(((((*l_128) = ((((((l_112 , (safe_sub_func_uint8_t_u_u(0x5AL, (safe_add_func_int64_t_s_s(((*l_126) ^= (safe_lshift_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(0xD5L, g_73)) | 0x239EB3E32E7287D2LL), (safe_div_func_uint32_t_u_u(l_125, l_99[5][0][0])))) && l_112.f0) ^ g_58), l_99[6][3][0]))), 0x7CD71D57AD53B930LL))))) <= l_112.f0) & g_85) > 18446744073709551615UL) > 0L) || 0x82C1L)) != g_71) | l_99[3][1][0]))) && g_4) < l_112.f0)) , (*p_96))), g_58)), l_112.f0)) < (-10L)) & (-1L));
                        (*l_141) = (void*)0;
                        l_182[2] &= ((safe_mod_func_int8_t_s_s((+((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((~((((safe_mod_func_uint16_t_u_u(l_154, (g_131[2] | 4UL))) , (safe_mul_func_int8_t_s_s((l_180 = ((*l_178) = (safe_sub_func_uint64_t_u_u((g_177 ^= ((l_154 = ((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((l_99[0][2][0] = ((g_139 < l_125) && 0x48L)) == (((((+(((g_85 >= ((*l_173) = (safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(l_112.f0, (safe_lshift_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((5L > 0L), l_172)) , l_125), l_125)))), 0x596EL)))) <= 4294967290UL) == l_172)) || l_172) , l_174) , l_175[7]) != (void*)0)) , l_99[8][1][0]), 0)), 0)) | l_112.f0)) , g_79)), g_4)))), 0xD7L))) != l_172) == l_174)), l_174)), g_58)) < 1UL)), g_181)) ^ l_172);
                    }
                    else
                    {
                        uint32_t l_193 = 1UL;
                        int32_t l_195 = (-4L);
                        int32_t **l_196[2][4] = {{&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100}};
                        int i, j;
                        l_195 = (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((((((((l_174 <= (((safe_sub_func_int64_t_s_s(g_85, g_129)) , ((l_99[0][2][0] = ((safe_mul_func_uint8_t_u_u(l_193, (g_139 = l_193))) , 0x8A4C82FAL)) < (0x9DEFL > (18446744073709551615UL >= (g_127 = (l_194 = (((void*)0 == &g_129) < l_182[2]))))))) == 0xA8A950BDL)) & l_172) , l_112.f0) || l_180) >= l_182[1]) , l_99[4][0][0]) && 1L), (-7L))) || g_139), 6)), 0x69L));
                        g_197 = &l_195;
                    }
                    if (l_112.f0)
                        break;
                }
                (*l_206) |= ((((((*l_203) = (+(safe_rshift_func_int16_t_s_u((l_201 == &g_71), (&g_197 != (l_202[0] , (void*)0)))))) > (safe_add_func_uint64_t_u_u((((&g_62 != ((l_99[g_73][g_85][g_73] < 0x69C20454707D7012LL) , &g_139)) <= l_99[(g_85 + 3)][(g_85 + 3)][g_85]) != 4UL), 0xD06A0EAF5A00D3CDLL))) , l_99[(g_85 + 7)][(g_85 + 1)][g_85]) , (-4L)) , 0L);
                (*l_209) = l_207;
                l_210 &= l_99[(g_85 + 8)][(g_73 + 1)][g_85];
            }
            g_79 = l_194;
            for (g_129 = 0; (g_129 <= 0); g_129 += 1)
            {
                const uint64_t l_218 = 0x2091D055632A555FLL;
                int8_t *l_224 = &g_179;
                uint8_t *l_229 = &g_62;
                uint64_t *l_230 = &l_112.f0;
                uint8_t **l_232[10][3][6] = {{{(void*)0,&l_229,&l_229,&l_229,&l_229,&l_229},{(void*)0,&l_229,&l_229,(void*)0,&l_229,(void*)0},{(void*)0,&l_229,(void*)0,&l_229,(void*)0,&l_229}},{{(void*)0,&l_229,&l_229,&l_229,&l_229,&l_229},{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229},{(void*)0,&l_229,(void*)0,&l_229,&l_229,&l_229}},{{&l_229,&l_229,&l_229,&l_229,(void*)0,&l_229},{&l_229,&l_229,&l_229,(void*)0,&l_229,(void*)0},{&l_229,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_229,&l_229,&l_229,&l_229,(void*)0,&l_229},{&l_229,(void*)0,(void*)0,(void*)0,&l_229,(void*)0},{&l_229,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229},{&l_229,&l_229,(void*)0,&l_229,&l_229,&l_229},{(void*)0,&l_229,(void*)0,&l_229,(void*)0,&l_229}},{{&l_229,&l_229,(void*)0,&l_229,&l_229,&l_229},{(void*)0,&l_229,&l_229,&l_229,&l_229,(void*)0},{(void*)0,&l_229,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_229,&l_229,(void*)0,(void*)0,(void*)0,&l_229},{&l_229,(void*)0,&l_229,&l_229,(void*)0,(void*)0},{&l_229,&l_229,(void*)0,&l_229,(void*)0,(void*)0}},{{(void*)0,&l_229,&l_229,(void*)0,&l_229,&l_229},{&l_229,&l_229,&l_229,(void*)0,&l_229,&l_229},{&l_229,&l_229,(void*)0,&l_229,(void*)0,&l_229}},{{&l_229,&l_229,&l_229,&l_229,&l_229,&l_229},{&l_229,&l_229,&l_229,(void*)0,&l_229,&l_229},{&l_229,&l_229,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_229,&l_229,&l_229,&l_229},{&l_229,(void*)0,&l_229,&l_229,(void*)0,&l_229},{&l_229,&l_229,&l_229,(void*)0,(void*)0,&l_229}}};
                int16_t l_248 = (-10L);
                int i, j, k;
                l_99[g_73][(g_73 + 1)][g_73] = (l_125 , (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((l_218 || ((safe_unary_minus_func_uint64_t_u(((safe_mod_func_uint64_t_u_u((g_181 != (safe_rshift_func_int8_t_s_s(l_202[0].f0, ((*l_224) = g_181)))), ((*l_230) = ((+(safe_mod_func_uint8_t_u_u(((*l_229) |= ((g_103[2] , ((void*)0 == l_228)) & g_139)), l_218))) , 18446744073709551615UL)))) <= g_177))) || g_85)), l_231)) >= 0x11F430733A3002C6LL) < 8L), l_218)) && 0x4CA53C526259D638LL), 0)));
                g_79 &= (&g_62 != (l_233 = l_229));
                l_99[g_73][(g_73 + 1)][g_73] = ((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0x63BEL, (safe_mod_func_uint16_t_u_u((g_143.f1 ^ (safe_mul_func_int8_t_s_s(((((((((~0x01E95282L) | (((*l_224) = ((safe_mod_func_int64_t_s_s(((l_245 , l_99[g_73][(g_73 + 1)][g_73]) > l_218), (((safe_rshift_func_uint8_t_u_u(0xC6L, 5)) > ((g_143.f0 && l_248) != l_218)) , l_172))) >= l_194)) < g_143.f0)) <= 4UL) == 0x6560234739FD564FLL) & l_99[2][1][0]) & l_194) != 0x3EL) > l_172), 0xD8L))), 0x44C1L)))), g_85)) ^ g_143.f1);
            }
        }
        if ((safe_sub_func_int64_t_s_s(l_99[2][1][0], (l_251 != &g_197))))
        {
            int8_t *l_258 = &g_179;
            int16_t *l_267 = &l_125;
            uint16_t *l_268[8][7][2] = {{{(void*)0,&l_172},{&l_172,&l_172},{(void*)0,(void*)0},{&l_172,&l_172},{(void*)0,&l_172},{(void*)0,(void*)0},{&l_172,&l_172}},{{(void*)0,&l_172},{&l_172,(void*)0},{(void*)0,(void*)0},{&l_172,(void*)0},{&l_172,&l_172},{(void*)0,&l_172},{(void*)0,(void*)0}},{{&l_172,&l_172},{&l_172,(void*)0},{(void*)0,&l_172},{(void*)0,&l_172},{&l_172,(void*)0},{&l_172,&l_172},{&l_172,&l_172}},{{(void*)0,&l_172},{(void*)0,(void*)0},{&l_172,&l_172},{&l_172,(void*)0},{(void*)0,&l_172},{(void*)0,&l_172},{(void*)0,&l_172}},{{&l_172,&l_172},{(void*)0,&l_172},{(void*)0,&l_172},{(void*)0,(void*)0},{&l_172,&l_172},{&l_172,(void*)0},{(void*)0,&l_172}},{{(void*)0,&l_172},{&l_172,&l_172},{&l_172,(void*)0},{&l_172,&l_172},{(void*)0,&l_172},{(void*)0,(void*)0},{&l_172,&l_172}},{{&l_172,(void*)0},{(void*)0,&l_172},{(void*)0,&l_172},{&l_172,(void*)0},{&l_172,&l_172},{&l_172,&l_172},{(void*)0,&l_172}},{{(void*)0,(void*)0},{&l_172,&l_172},{&l_172,(void*)0},{(void*)0,&l_172},{(void*)0,&l_172},{(void*)0,&l_172},{&l_172,&l_172}}};
            const union U0 **l_270 = (void*)0;
            const union U0 *l_272[4][4] = {{&g_273,&g_273,&g_273,&g_273},{&g_273,&g_273,&g_273,&g_273},{&g_273,&g_273,&g_273,&g_273},{&g_273,&g_273,&g_273,&g_273}};
            const union U0 **l_271 = &l_272[0][3];
            union U0 **l_274 = (void*)0;
            int32_t l_284 = 0x58ABCB27L;
            int32_t *l_285 = &g_73;
            int i, j, k;
            (*l_285) = (((*l_258) = ((((safe_add_func_uint64_t_u_u(((!(safe_add_func_int64_t_s_s((l_257 == l_258), ((safe_mul_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((((*l_267) = (safe_unary_minus_func_int32_t_s(l_266[0]))) | (g_179 != (g_269 = 0UL))), l_99[0][3][0])) >= (((*l_271) = (void*)0) == (l_207 = &g_103[1]))) , (g_276++)), (safe_mod_func_uint64_t_u_u((safe_div_func_int32_t_s_s((g_283 == l_284), l_284)), l_180)))) != g_131[2])))) < 0UL), l_180)) >= 0x9B6FL) >= g_58) != g_177)) != 0L);
            return l_202[0];
        }
        else
        {
            uint8_t ****l_288 = &l_286;
            uint16_t l_309 = 6UL;
            int16_t l_312[9];
            union U1 l_363 = {0xBC3CB085L};
            union U1 *l_365 = &g_325[2];
            union U1 * const *l_364 = &l_365;
            int32_t l_372 = (-1L);
            int32_t l_374[6][8][5] = {{{0xE5AE8739L,0x20B105ACL,4L,0x7C9921F2L,0xDF3E9730L},{1L,(-1L),0xA2C6E8D1L,0x5D2D68EDL,7L},{0x1120F866L,0x7C9921F2L,0x9BD8367EL,0L,4L},{7L,0x63B8446CL,6L,0xE48ADE77L,(-1L)},{0x9BD8367EL,0xC95FB7C6L,0x1DBA6F8BL,0x5879B4C8L,0xFAC490CDL},{0x709BD733L,0xCE6004F4L,0x8C90541FL,0xA2C6E8D1L,0x8C90541FL},{0xBDADDBFBL,0xBDADDBFBL,0xC95FB7C6L,0xDF3E9730L,0x9BD8367EL},{0x42D2C3E7L,9L,2L,0L,0xB6457AF9L}},{{0x9537BCFEL,6L,0x20A629C3L,0x1120F866L,1L},{0xA2C6E8D1L,9L,0xE48ADE77L,(-1L),(-1L)},{(-1L),0xBDADDBFBL,1L,7L,2L},{0x5D2D68EDL,0xCE6004F4L,0L,(-1L),0xCBEC2B73L},{7L,0xC95FB7C6L,(-2L),0x1DBA6F8BL,0x7C9921F2L},{0x33AE3B40L,0x63B8446CL,0x63B8446CL,0x33AE3B40L,(-1L)},{0x053FD55DL,0x7C9921F2L,2L,1L,0x9537BCFEL},{9L,(-1L),0L,0xB1D0A08CL,2L}},{{(-2L),0x20B105ACL,0x5879B4C8L,1L,6L},{0x06F268A6L,0L,(-1L),0x92AC12A0L,(-1L)},{0x2470A3ECL,0x1DBA6F8BL,4L,7L,(-6L)},{2L,0x06F268A6L,6L,0x8C90541FL,(-1L)},{0x7C9921F2L,0x40CED65FL,6L,6L,0x40CED65FL},{0xBF71C15AL,0x33AE3B40L,(-1L),0L,0x92AC12A0L},{0x9BC677A7L,0x20B105ACL,(-1L),(-7L),0xE5AE8739L},{(-1L),0L,0L,0x709BD733L,(-1L)}},{{0x9BC677A7L,9L,(-6L),0xFAC490CDL,0xDF3E9730L},{0xBF71C15AL,0xCE6004F4L,0L,9L,0xB6457AF9L},{0x7C9921F2L,4L,0x20B105ACL,0xE5AE8739L,2L},{2L,0x5D2D68EDL,0xE58D5345L,0x42D2C3E7L,0x42D2C3E7L},{0x2470A3ECL,0xDA5C2CDBL,0x2470A3ECL,(-10L),0x9C66B5A0L},{0x06F268A6L,0xCBEC2B73L,(-1L),0L,0xCE6004F4L},{0x9BD8367EL,0xFAC490CDL,0xC46F6058L,0x2470A3ECL,0xF359A630L},{0x40CB33A1L,(-1L),(-1L),0xCE6004F4L,(-1L)}},{{1L,6L,0x2470A3ECL,0x1DBA6F8BL,4L},{0x92AC12A0L,(-1L),0xE58D5345L,0x8BECDC32L,0L},{6L,0x9C66B5A0L,0x20B105ACL,0xDF3E9730L,0x9BC677A7L},{0L,(-7L),0L,(-7L),0L},{0xC46F6058L,(-2L),(-6L),0xDA5C2CDBL,0xD66C60C7L},{9L,2L,0L,0xB6457AF9L,0L},{1L,0x9BC677A7L,(-1L),(-2L),0xD66C60C7L},{(-1L),0xB6457AF9L,(-1L),0xB1D0A08CL,0L}},{{0xD66C60C7L,0xBDADDBFBL,6L,0x1120F866L,0x9BC677A7L},{(-1L),(-1L),6L,0xA2C6E8D1L,0L},{0x053FD55DL,1L,4L,(-1L),4L},{0xE58D5345L,0xE58D5345L,(-1L),0L,(-1L)},{(-7L),0L,0xE5AE8739L,0x9BD8367EL,0xF359A630L},{(-1L),0x92AC12A0L,1L,(-1L),0xCE6004F4L},{(-1L),0L,0x1120F866L,0xC46F6058L,0x9C66B5A0L},{0L,0xE58D5345L,7L,0x33AE3B40L,0x42D2C3E7L}}};
            uint64_t *l_417 = &g_103[3].f0;
            const uint32_t *l_458 = (void*)0;
            const uint32_t **l_457[2][8] = {{&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458}};
            int16_t *l_468 = &g_58;
            int16_t **l_467 = &l_468;
            union U0 l_507 = {1UL};
            int32_t l_525[9];
            uint64_t **l_581 = &l_433;
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_312[i] = 5L;
            for (i = 0; i < 9; i++)
                l_525[i] = 0x8C1AB482L;
            (*l_288) = l_286;
            for (g_129 = 0; (g_129 == (-25)); g_129 = safe_sub_func_uint32_t_u_u(g_129, 8))
            {
                uint64_t *l_299 = &g_4;
                int32_t *l_308 = &l_194;
                for (g_276 = 0; (g_276 <= 3); g_276 += 1)
                {
                    int16_t l_296 = 0x5B2BL;
                    int32_t l_310 = 0L;
                    union U1 *l_324 = &g_325[3];
                    for (g_79 = 0; (g_79 <= 0); g_79 += 1)
                    {
                        int16_t *l_300 = &l_296;
                        uint64_t *l_304 = &g_177;
                        union U0 **l_307 = &l_207;
                        uint16_t *l_311 = &l_172;
                        int i, j, k;
                        (*l_308) = (safe_mul_func_int16_t_s_s((((l_99[(g_79 + 8)][g_276][g_79] ^ ((!(((safe_add_func_uint64_t_u_u(((((((l_296 , (safe_mul_func_int8_t_s_s(((g_73 = (((*l_300) |= (l_299 != &g_177)) == ((*l_311) = (safe_mul_func_int16_t_s_s((((!(((*l_304)++) & (((((((*l_307) = &g_103[3]) == (void*)0) , p_96) == l_308) == (g_179 ^= 0L)) > g_58))) ^ l_309) < l_310), g_181))))) > g_140), g_273.f0))) != l_312[5]) , l_310) , g_276) > 1L) || g_58), g_143.f1)) ^ 0xDCL) & 1UL)) >= 0xEA88E26377905A4FLL)) >= l_310) , g_4), l_194));
                    }
                    (*l_308) = (((((((l_310 , (safe_rshift_func_uint16_t_u_s((g_127 < (((l_266[8] != ((l_312[4] > (safe_mod_func_int8_t_s_s(((*l_257) = l_194), l_312[7]))) == (safe_div_func_int8_t_s_s((!g_4), l_266[8])))) , ((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((0x6FL < (*l_308)), g_273.f0)), (*l_308))) <= l_309)) > l_266[0])), l_180))) < (-1L)) < g_131[2]) <= 0xE2L) , (void*)0) != l_324) >= g_139);
                }
            }
            for (g_139 = 0; (g_139 != 2); g_139 = safe_add_func_uint16_t_u_u(g_139, 2))
            {
                uint32_t l_354 = 1UL;
                union U0 * const *l_380 = (void*)0;
                int8_t l_401[9][10][2] = {{{0x86L,0x12L},{0xE4L,0L},{(-7L),1L},{8L,5L},{1L,1L},{0xB4L,0L},{0x3EL,(-10L)},{(-7L),0x37L},{0xA6L,(-7L)},{(-2L),1L}},{{0xDEL,0xD2L},{(-10L),(-10L)},{0xD2L,0x86L},{0xB3L,0xE4L},{0L,(-7L)},{(-7L),8L},{0xC3L,1L},{0xD2L,0xB4L},{0x8FL,0x3EL},{5L,(-7L)}},{{0x12L,0xA6L},{(-1L),(-2L)},{0xD2L,(-2L)},{(-1L),0xA6L},{0x12L,(-7L)},{5L,0x3EL},{0x8FL,0xB4L},{0xD2L,1L},{0xC3L,8L},{(-7L),(-7L)}},{{0L,0xE4L},{0xB3L,0x86L},{0xD2L,(-10L)},{(-10L),0xD2L},{0xDEL,(-7L)},{0xDEL,0xD2L},{(-10L),(-10L)},{0xD2L,0x86L},{0xB3L,0xE4L},{0L,(-7L)}},{{(-7L),8L},{0xC3L,1L},{0xD2L,0xB4L},{0x8FL,0x3EL},{5L,(-7L)},{0x12L,0xA6L},{(-1L),(-2L)},{0xD2L,(-2L)},{(-1L),0xA6L},{0x12L,(-7L)}},{{5L,0x3EL},{0x8FL,0xB4L},{0xD2L,1L},{0xC3L,8L},{(-7L),(-7L)},{0L,0xE4L},{0xB3L,0x86L},{0xD2L,(-10L)},{(-10L),0xD2L},{0xDEL,(-7L)}},{{0xDEL,0xD2L},{(-10L),(-10L)},{0xD2L,0x86L},{0xB3L,0xE4L},{0L,(-7L)},{(-7L),8L},{0xC3L,1L},{0xD2L,0xB4L},{0x8FL,0x3EL},{5L,(-7L)}},{{0x12L,0xA6L},{(-1L),(-2L)},{0xD2L,(-2L)},{(-1L),0xA6L},{0x12L,(-7L)},{5L,0x3EL},{0x8FL,0xB4L},{0xD2L,1L},{0xC3L,8L},{(-7L),(-7L)}},{{0L,0xE4L},{0xB3L,0x86L},{0xD2L,(-10L)},{(-10L),0xD2L},{0xDEL,(-7L)},{0xDEL,0xD2L},{(-10L),(-10L)},{0xD2L,0x86L},{0xB3L,0xE4L},{0L,(-7L)}}};
                uint64_t *l_478[2];
                int64_t **l_494[10][9] = {{&l_340,&l_340,&l_340,&l_340,(void*)0,(void*)0,&l_340,(void*)0,&l_340},{&l_340,&l_340,(void*)0,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{(void*)0,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0},{&l_340,(void*)0,&l_340,(void*)0,&l_340,&l_340,(void*)0,(void*)0,&l_340},{&l_340,(void*)0,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,(void*)0},{&l_340,(void*)0,&l_340,&l_340,(void*)0,(void*)0,(void*)0,&l_340,&l_340},{&l_340,&l_340,&l_340,(void*)0,&l_340,&l_340,&l_340,(void*)0,&l_340},{&l_340,&l_340,&l_340,(void*)0,(void*)0,&l_340,(void*)0,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,(void*)0,&l_340}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_478[i] = &l_202[0].f0;
                for (g_177 = 0; (g_177 >= 26); g_177 = safe_add_func_int64_t_s_s(g_177, 6))
                {
                    uint64_t l_336 = 0x3ED05CF7DCBB15B2LL;
                    int64_t **l_341 = &l_340;
                    const int64_t **l_342 = (void*)0;
                    const int64_t *l_344 = &g_345[7][3][2];
                    const int64_t **l_343 = &l_344;
                    int16_t *l_351 = &l_125;
                    int16_t **l_352 = (void*)0;
                    int16_t **l_353 = &l_351;
                    int32_t *l_355 = &g_79;
                    int32_t *l_356[2];
                    uint16_t *l_361 = &l_172;
                    union U0 l_400[6][8][4] = {{{{0xD23CC18F22128A1CLL},{0xB4DD08391A86DA81LL},{1UL},{0xB4DD08391A86DA81LL}},{{0xBD093D63FFA07259LL},{1UL},{1UL},{9UL}},{{0xD23CC18F22128A1CLL},{0xC70E43D812651C3FLL},{0xBD093D63FFA07259LL},{9UL}},{{0x0187A29230249B7FLL},{1UL},{0x0187A29230249B7FLL},{0xB4DD08391A86DA81LL}},{{0x0187A29230249B7FLL},{0xB4DD08391A86DA81LL},{0xBD093D63FFA07259LL},{0xE81BA145CB0C99F5LL}},{{0xD23CC18F22128A1CLL},{0xB4DD08391A86DA81LL},{1UL},{0xB4DD08391A86DA81LL}},{{0xBD093D63FFA07259LL},{1UL},{1UL},{9UL}},{{0xD23CC18F22128A1CLL},{0xC70E43D812651C3FLL},{0xBD093D63FFA07259LL},{9UL}}},{{{0x0187A29230249B7FLL},{1UL},{0x0187A29230249B7FLL},{0xB4DD08391A86DA81LL}},{{0x0187A29230249B7FLL},{0xB4DD08391A86DA81LL},{0xBD093D63FFA07259LL},{0xE81BA145CB0C99F5LL}},{{0xD23CC18F22128A1CLL},{0xB4DD08391A86DA81LL},{1UL},{0xB4DD08391A86DA81LL}},{{0xBD093D63FFA07259LL},{1UL},{1UL},{9UL}},{{0xD23CC18F22128A1CLL},{0xC70E43D812651C3FLL},{0xBD093D63FFA07259LL},{9UL}},{{0x0187A29230249B7FLL},{1UL},{0x0187A29230249B7FLL},{0xB4DD08391A86DA81LL}},{{0x0187A29230249B7FLL},{0xB4DD08391A86DA81LL},{0xBD093D63FFA07259LL},{0xE81BA145CB0C99F5LL}},{{0xD23CC18F22128A1CLL},{0xB4DD08391A86DA81LL},{1UL},{0xB4DD08391A86DA81LL}}},{{{0xBD093D63FFA07259LL},{1UL},{1UL},{9UL}},{{0xD23CC18F22128A1CLL},{0xC70E43D812651C3FLL},{0xBD093D63FFA07259LL},{9UL}},{{0x0187A29230249B7FLL},{1UL},{0x0187A29230249B7FLL},{0xB4DD08391A86DA81LL}},{{0x0187A29230249B7FLL},{0xB4DD08391A86DA81LL},{0xBD093D63FFA07259LL},{0xE81BA145CB0C99F5LL}},{{0xD23CC18F22128A1CLL},{0xB4DD08391A86DA81LL},{1UL},{0xB4DD08391A86DA81LL}},{{0xBD093D63FFA07259LL},{1UL},{1UL},{9UL}},{{0xD23CC18F22128A1CLL},{0xC70E43D812651C3FLL},{0xBD093D63FFA07259LL},{9UL}},{{0x0187A29230249B7FLL},{1UL},{0x0187A29230249B7FLL},{0xB4DD08391A86DA81LL}}},{{{0x0187A29230249B7FLL},{0xB4DD08391A86DA81LL},{0xBD093D63FFA07259LL},{0xE81BA145CB0C99F5LL}},{{0xD23CC18F22128A1CLL},{0xB4DD08391A86DA81LL},{1UL},{0xB4DD08391A86DA81LL}},{{0xBD093D63FFA07259LL},{1UL},{1UL},{9UL}},{{0xD23CC18F22128A1CLL},{0xC70E43D812651C3FLL},{0xBD093D63FFA07259LL},{9UL}},{{0x0187A29230249B7FLL},{1UL},{0x0187A29230249B7FLL},{0xB4DD08391A86DA81LL}},{{0x0187A29230249B7FLL},{0xB4DD08391A86DA81LL},{0xBD093D63FFA07259LL},{0xE81BA145CB0C99F5LL}},{{0xD23CC18F22128A1CLL},{0xB4DD08391A86DA81LL},{1UL},{0xB4DD08391A86DA81LL}},{{0xBD093D63FFA07259LL},{1UL},{1UL},{9UL}}},{{{0xD23CC18F22128A1CLL},{0xC70E43D812651C3FLL},{0xBD093D63FFA07259LL},{1UL}},{{1UL},{0xC70E43D812651C3FLL},{1UL},{0xE81BA145CB0C99F5LL}},{{1UL},{0xE81BA145CB0C99F5LL},{0x0187A29230249B7FLL},{9UL}},{{0xBD093D63FFA07259LL},{0xE81BA145CB0C99F5LL},{0x4FD0F99BAB8A4263LL},{0xE81BA145CB0C99F5LL}},{{0x0187A29230249B7FLL},{0xC70E43D812651C3FLL},{0x4FD0F99BAB8A4263LL},{1UL}},{{0xBD093D63FFA07259LL},{0xB4DD08391A86DA81LL},{0x0187A29230249B7FLL},{1UL}},{{1UL},{0xC70E43D812651C3FLL},{1UL},{0xE81BA145CB0C99F5LL}},{{1UL},{0xE81BA145CB0C99F5LL},{0x0187A29230249B7FLL},{9UL}}},{{{0xBD093D63FFA07259LL},{0xE81BA145CB0C99F5LL},{0x4FD0F99BAB8A4263LL},{0xE81BA145CB0C99F5LL}},{{0x0187A29230249B7FLL},{0xC70E43D812651C3FLL},{0x4FD0F99BAB8A4263LL},{1UL}},{{0xBD093D63FFA07259LL},{0xB4DD08391A86DA81LL},{0x0187A29230249B7FLL},{1UL}},{{1UL},{0xC70E43D812651C3FLL},{1UL},{0xE81BA145CB0C99F5LL}},{{1UL},{0xE81BA145CB0C99F5LL},{0x0187A29230249B7FLL},{9UL}},{{0xBD093D63FFA07259LL},{0xE81BA145CB0C99F5LL},{0x4FD0F99BAB8A4263LL},{0xE81BA145CB0C99F5LL}},{{0x0187A29230249B7FLL},{0xC70E43D812651C3FLL},{0x4FD0F99BAB8A4263LL},{1UL}},{{0xBD093D63FFA07259LL},{0xB4DD08391A86DA81LL},{0x0187A29230249B7FLL},{1UL}}}};
                    union U1 l_407[7][7][2] = {{{{0x4FB00BE1L},{0xED556092L}},{{18446744073709551615UL},{0xED556092L}},{{0x4FB00BE1L},{18446744073709551615UL}},{{0x1F0FB642L},{0x1F0FB642L}},{{0x1F0FB642L},{18446744073709551615UL}},{{0x4FB00BE1L},{0xED556092L}},{{18446744073709551615UL},{0xED556092L}}},{{{0x4FB00BE1L},{18446744073709551615UL}},{{0x1F0FB642L},{0x1F0FB642L}},{{0x1F0FB642L},{18446744073709551615UL}},{{0x4FB00BE1L},{0xED556092L}},{{18446744073709551615UL},{0xED556092L}},{{0x4FB00BE1L},{18446744073709551615UL}},{{0x1F0FB642L},{0x1F0FB642L}}},{{{0x1F0FB642L},{18446744073709551615UL}},{{0x4FB00BE1L},{0xED556092L}},{{18446744073709551615UL},{0xED556092L}},{{0x4FB00BE1L},{18446744073709551615UL}},{{0x1F0FB642L},{0x1F0FB642L}},{{0x1F0FB642L},{18446744073709551615UL}},{{0x4FB00BE1L},{0xED556092L}}},{{{18446744073709551615UL},{0xED556092L}},{{0x4FB00BE1L},{18446744073709551615UL}},{{0x1F0FB642L},{0x1F0FB642L}},{{0x1F0FB642L},{18446744073709551615UL}},{{0x4FB00BE1L},{0xED556092L}},{{18446744073709551615UL},{0xED556092L}},{{0x4FB00BE1L},{18446744073709551615UL}}},{{{0x1F0FB642L},{0x1F0FB642L}},{{0x1F0FB642L},{18446744073709551615UL}},{{0x4FB00BE1L},{0xED556092L}},{{18446744073709551615UL},{0xED556092L}},{{0x4FB00BE1L},{18446744073709551615UL}},{{0x1F0FB642L},{0x1F0FB642L}},{{0x1F0FB642L},{18446744073709551615UL}}},{{{0x4FB00BE1L},{0xED556092L}},{{18446744073709551615UL},{0xED556092L}},{{0x4FB00BE1L},{18446744073709551615UL}},{{0x1F0FB642L},{0x1F0FB642L}},{{0x1F0FB642L},{18446744073709551615UL}},{{0x4FB00BE1L},{0xED556092L}},{{18446744073709551615UL},{0xED556092L}}},{{{0x4FB00BE1L},{18446744073709551615UL}},{{0x1F0FB642L},{0x1F0FB642L}},{{0x1F0FB642L},{18446744073709551615UL}},{{0x4FB00BE1L},{0xED556092L}},{{18446744073709551615UL},{0xED556092L}},{{0x4FB00BE1L},{18446744073709551615UL}},{{0x1F0FB642L},{0x1F0FB642L}}}};
                    uint8_t *l_408 = &g_85;
                    int16_t *l_409 = &l_312[8];
                    uint64_t *l_410 = &l_400[4][1][1].f0;
                    uint32_t *l_411 = &g_181;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_356[i] = &l_99[3][2][0];
                    g_79 = g_139;
                    g_73 = ((*l_355) = ((((safe_rshift_func_int8_t_s_u(0x98L, g_179)) == (safe_mul_func_uint16_t_u_u(((((((safe_sub_func_uint8_t_u_u(l_336, (safe_lshift_func_int16_t_s_u((+(((((((*l_341) = l_340) == ((*l_343) = &g_140)) >= 0xDAL) , (~(safe_div_func_uint16_t_u_u(((1L & (safe_add_func_int64_t_s_s((((*l_353) = l_351) == &l_312[8]), l_309))) ^ g_139), l_354)))) == l_99[4][3][0]) && l_312[5])), g_4)))) > g_131[5]) , 0xBCC0BFC06B0F98DALL) <= 1UL) <= l_125) ^ g_85), g_140))) , g_103[3]) , 0x73E263C9L));
                    if ((((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((*l_361) = g_345[1][6][3]), ((l_257 == (l_362 = &g_179)) | ((*l_355) = ((((l_363 , l_364) == (void*)0) & g_73) < (g_181++)))))), ((0xD4346611L <= ((safe_rshift_func_uint16_t_u_s(((g_179 , l_99[8][0][0]) ^ l_370), l_312[5])) == l_363.f0)) , g_177))) ^ 0x87L) , l_312[5]))
                    {
                        int32_t l_373 = (-9L);
                        int32_t l_375 = 0x9E234106L;
                        int32_t l_376 = 7L;
                        g_377[0]++;
                        g_197 = &g_79;
                        (**l_251) ^= l_376;
                    }
                    else
                    {
                        union U0 * const **l_381 = &l_380;
                        (*l_251) = p_96;
                        (*l_381) = l_380;
                    }
                    l_372 &= (255UL != (safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(l_202[0].f0, (((safe_mod_func_uint32_t_u_u(((*l_411) = (safe_add_func_uint64_t_u_u(((*l_410) = (safe_rshift_func_uint16_t_u_s((((((((((((0xFFE65F4BL | (safe_add_func_int16_t_s_s(((*l_355) , ((*l_409) &= (safe_mod_func_uint16_t_u_u(((*l_361) = (safe_mul_func_int8_t_s_s(((*l_257) = (safe_lshift_func_uint8_t_u_s((g_62 = (((l_400[4][1][1] , l_401[3][8][0]) , (safe_sub_func_uint16_t_u_u(4UL, (l_180 >= (((*l_408) = ((safe_unary_minus_func_uint32_t_u((safe_mod_func_uint8_t_u_u((l_407[4][2][0] , l_99[8][0][0]), l_374[2][6][0])))) , (**l_251))) | l_354))))) < l_401[3][8][0])), 6))), l_125))), g_345[2][0][2])))), (*l_355)))) < g_129) , g_139) == g_371[6][0][2]) <= g_276) , 0x5E16218FCEB195B1LL) || (*l_355)) == 0UL) != g_275) & l_125) > (*g_197)), 4))), 18446744073709551615UL))), (*l_355))) && l_354) , (**l_251)))), l_401[2][6][0])));
                }
                for (g_179 = 0; (g_179 == (-2)); g_179 = safe_sub_func_uint32_t_u_u(g_179, 6))
                {
                    uint16_t l_414 = 0xBBF9L;
                    uint64_t *l_416 = &l_202[0].f0;
                    uint64_t **l_415 = &l_416;
                    int32_t *l_418 = &g_79;
                    g_79 ^= l_414;
                    l_419[1][2][4] = ((*l_418) = (((*l_415) = &g_4) == l_417));
                    for (l_125 = 0; (l_125 != (-4)); l_125 = safe_sub_func_uint8_t_u_u(l_125, 1))
                    {
                        int64_t l_447 = 2L;
                        union U1 *l_448 = &g_325[1];
                        union U1 **l_449 = &l_365;
                        g_422 = (void*)0;
                        (*l_449) = ((safe_mul_func_uint8_t_u_u(0xBEL, (safe_add_func_uint16_t_u_u(((((safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s(((l_432 = (void*)0) == ((safe_mod_func_uint8_t_u_u((((void*)0 == l_340) == g_371[3][1][1]), (safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((((safe_div_func_int16_t_s_s((!(g_445 == (void*)0)), g_73)) != ((g_275 & 18446744073709551607UL) < l_447)) , 0xBCL) == 0x59L), 0x8CABL)) || g_371[1][0][2]), l_180)), 0xD77EL)))) , (void*)0)), g_181)), 1UL)) && l_309) , (void*)0) == (void*)0), g_79)))) , l_448);
                        if (g_345[2][2][1])
                            continue;
                        if (l_447)
                            continue;
                    }
                }
                for (l_180 = 24; (l_180 == (-20)); --l_180)
                {
                    uint32_t l_474 = 0xBA04F860L;
                    uint8_t *l_485 = (void*)0;
                    int32_t *l_486 = &l_194;
                    for (g_58 = 0; (g_58 <= 3); g_58 += 1)
                    {
                        int32_t *l_452[9][8] = {{&g_79,&g_73,(void*)0,(void*)0,(void*)0,&g_79,(void*)0,(void*)0},{&g_73,(void*)0,&g_73,&l_374[5][2][2],(void*)0,&g_79,(void*)0,(void*)0},{(void*)0,&g_73,&g_79,&g_79,&g_73,(void*)0,(void*)0,(void*)0},{(void*)0,&l_180,&l_374[2][6][0],&g_73,(void*)0,&g_73,&l_374[2][6][0],&l_180},{&g_73,(void*)0,(void*)0,&g_79,&l_374[5][2][2],&l_374[2][6][0],&l_374[2][6][0],&l_374[5][2][2]},{(void*)0,&l_374[5][2][2],&l_374[5][2][2],(void*)0,&g_73,&g_79,&l_374[2][6][0],&g_73},{(void*)0,(void*)0,(void*)0,&l_374[2][6][0],(void*)0,(void*)0,(void*)0,&l_180},{(void*)0,(void*)0,(void*)0,&l_180,&g_79,&g_79,&l_180,(void*)0},{&l_374[5][2][2],&l_374[5][2][2],(void*)0,&g_73,&g_79,&l_374[2][6][0],&g_73,&l_374[2][6][0]}};
                        union U1 **l_454 = &l_453;
                        int i, j;
                        g_79 = g_325[3].f1;
                        if (l_374[2][6][0])
                            continue;
                        (*l_454) = l_453;
                    }
                    for (g_275 = (-8); (g_275 < (-3)); ++g_275)
                    {
                        const uint32_t ***l_459 = &l_457[1][5];
                        int16_t *l_466[10][1][8] = {{{&g_58,&l_312[5],&l_125,&l_125,&g_58,&g_58,&l_125,&l_125}},{{&l_125,&l_125,(void*)0,&l_312[5],(void*)0,&l_312[3],&l_312[3],&l_312[8]}},{{(void*)0,&l_312[3],&l_312[3],&l_312[8],&l_312[7],&l_125,&l_312[7],&l_312[8]}},{{&l_312[3],(void*)0,&l_312[3],&l_312[5],&g_58,&g_58,&l_312[5],&l_125}},{{&g_58,(void*)0,&l_312[5],&l_125,&l_312[3],&g_58,&g_58,&l_312[3]}},{{&g_58,&l_312[7],&l_312[7],&g_58,&g_58,&l_125,&l_312[8],&g_58}},{{&l_312[3],&g_58,&l_125,&l_312[5],&l_312[7],(void*)0,&g_58,(void*)0}},{{(void*)0,&g_58,&l_312[8],&g_58,(void*)0,&l_125,&g_58,(void*)0}},{{&l_125,&l_312[7],(void*)0,&l_125,&g_58,&g_58,&g_58,&g_58}},{{&g_58,(void*)0,(void*)0,(void*)0,(void*)0,&g_58,&g_58,&g_58}}};
                        int16_t **l_465 = &l_466[0][0][5];
                        int32_t l_473 = 0L;
                        int i, j, k;
                        (*l_459) = l_457[0][2];
                        g_475 &= (0x308D291AL || (g_273.f0 & ((l_99[3][0][0] = l_99[6][3][0]) , (safe_rshift_func_uint16_t_u_u((((safe_unary_minus_func_int16_t_s(l_401[0][2][1])) , ((safe_add_func_uint64_t_u_u((l_465 == l_467), ((safe_mul_func_int16_t_s_s(((((g_143.f0 && l_99[1][1][0]) > ((*l_468) &= (safe_mul_func_uint8_t_u_u((((((*l_257) = g_79) | 1L) , l_473) > g_143.f0), l_474)))) || g_273.f0) , l_473), g_73)) >= l_354))) | 0x24E46B2950B8D68BLL)) != g_143.f1), 11)))));
                        return l_202[1];
                    }
                    if (((*l_486) |= (((safe_lshift_func_uint8_t_u_s((l_478[0] != ((l_401[3][8][0] >= g_273.f0) , l_340)), 2)) & (safe_lshift_func_int8_t_s_s(((*l_257) = (safe_sub_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((l_99[6][0][0] = (7L ^ (((l_372 < 0x5033L) ^ 18446744073709551615UL) & g_131[6]))), g_143.f0)) & l_202[0].f0), l_474))), g_79))) , l_312[4])))
                    {
                        int64_t **l_492 = &l_340;
                        int32_t l_493[6] = {0L,0x1DD74179L,0x1DD74179L,0L,0x1DD74179L,0x1DD74179L};
                        uint8_t *l_495 = &g_62;
                        int64_t l_496[8] = {0xAF59C54C6B439EDELL,0xAF59C54C6B439EDELL,0xAF59C54C6B439EDELL,0xAF59C54C6B439EDELL,0xAF59C54C6B439EDELL,0xAF59C54C6B439EDELL,0xAF59C54C6B439EDELL,0xAF59C54C6B439EDELL};
                        int16_t *l_497 = (void*)0;
                        int16_t *l_498 = &l_312[1];
                        uint32_t *l_499[8][6][5] = {{{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181}},{{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181}},{{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181}},{{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181}},{{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181}},{{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181}},{{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181}},{{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181},{(void*)0,&l_474,(void*)0,&l_474,(void*)0},{&g_181,&g_181,&g_181,&g_181,&g_181}}};
                        int32_t *l_500[9][7][4] = {{{(void*)0,(void*)0,&l_374[5][6][3],&g_73},{&g_73,(void*)0,&g_73,&l_493[1]},{&l_493[1],&l_374[2][6][0],&l_374[5][6][3],&l_194},{&l_374[5][0][1],&l_374[2][6][0],(void*)0,&l_374[2][6][0]},{&l_99[4][1][0],&l_194,(void*)0,&g_73},{&l_374[5][0][1],&l_493[1],&l_374[5][6][3],&l_180},{&l_493[1],&l_374[2][6][3],&l_99[0][2][0],(void*)0}},{{&l_99[0][2][0],(void*)0,&l_180,(void*)0},{(void*)0,&l_374[2][6][3],&l_493[1],&l_180},{&g_73,&l_493[1],&l_180,&g_73},{&l_493[1],&l_194,(void*)0,&l_374[2][6][0]},{&l_493[1],&l_374[2][6][0],&l_180,&l_194},{&g_73,&l_374[2][6][0],&l_493[1],&l_493[1]},{(void*)0,&l_493[1],&l_180,&l_374[2][6][0]}},{{&l_99[0][2][0],&l_493[1],&l_99[0][2][0],&l_493[1]},{&l_493[1],&l_374[2][6][0],&l_374[5][6][3],&l_194},{&l_374[5][0][1],&l_374[2][6][0],(void*)0,&l_374[2][6][0]},{&l_99[4][1][0],&l_194,(void*)0,&g_73},{&l_374[5][0][1],&l_493[1],&l_374[5][6][3],&l_180},{&l_493[1],&l_374[2][6][3],&l_99[0][2][0],(void*)0},{&l_99[0][2][0],(void*)0,&l_180,(void*)0}},{{(void*)0,&l_374[2][6][3],&l_493[1],&l_180},{&g_73,&l_493[1],&l_180,&g_73},{&l_493[1],&l_194,(void*)0,&l_374[2][6][0]},{&l_493[1],&l_374[2][6][0],&l_180,&l_194},{&g_73,&l_374[2][6][0],&l_493[1],&l_493[1]},{(void*)0,&l_493[1],&l_180,&l_374[2][6][0]},{&l_99[0][2][0],&l_493[1],&l_99[0][2][0],&l_493[1]}},{{&l_493[1],&l_374[2][6][0],&l_374[5][6][3],&l_194},{&l_374[5][0][1],&l_374[2][6][0],(void*)0,&l_374[2][6][0]},{&l_99[4][1][0],&l_194,(void*)0,&g_73},{&l_374[5][0][1],&l_493[1],&l_374[5][6][3],&l_180},{&l_493[1],&l_374[2][6][3],&l_99[0][2][0],(void*)0},{&l_99[0][2][0],(void*)0,&l_180,(void*)0},{(void*)0,&l_374[2][6][3],&l_493[1],&l_180}},{{&g_73,&l_493[1],&l_180,&g_73},{&l_493[1],&l_194,(void*)0,&l_374[2][6][0]},{&l_493[1],&l_374[2][6][0],&l_180,&l_194},{&g_73,&l_374[2][6][0],&l_493[1],&l_493[1]},{(void*)0,&l_493[1],&l_180,&l_374[2][6][0]},{&l_99[0][2][0],&l_493[1],&l_99[0][2][0],&l_493[1]},{&l_493[1],&l_374[2][6][0],&l_374[5][6][3],&l_194}},{{&l_374[5][0][1],&l_374[2][6][0],(void*)0,&l_374[2][6][0]},{&l_99[4][1][0],&l_194,(void*)0,&g_73},{&l_374[5][0][1],&l_493[1],&l_374[5][6][3],&l_180},{&l_493[1],&l_374[2][6][3],&l_99[0][2][0],(void*)0},{&l_99[0][2][0],(void*)0,&l_180,(void*)0},{(void*)0,&l_374[2][6][3],&l_493[1],&l_180},{&g_73,&l_493[1],&l_180,&g_73}},{{&l_493[1],&g_73,(void*)0,&l_194},{&l_180,(void*)0,&l_493[1],&l_493[1]},{&l_99[0][2][0],&l_194,&l_180,&l_374[2][6][3]},{&l_99[4][1][0],&l_194,&g_73,(void*)0},{(void*)0,&l_194,(void*)0,&l_374[2][6][3]},{&l_374[5][0][1],&l_194,&l_180,&l_493[1]},{&g_73,(void*)0,&l_99[4][1][0],&l_194}},{{&l_493[1],&g_73,&l_99[4][1][0],&l_374[2][6][0]},{&g_73,&l_374[2][6][3],&l_180,&l_374[2][6][0]},{&l_374[5][0][1],&l_194,(void*)0,&l_493[1]},{(void*)0,&l_493[1],&g_73,&l_493[1]},{&l_99[4][1][0],&l_194,&l_180,&l_374[2][6][0]},{&l_99[0][2][0],&l_374[2][6][3],&l_493[1],&l_374[2][6][0]},{&l_180,&g_73,(void*)0,&l_194}}};
                        int i, j, k;
                        g_73 ^= ((g_79 &= (((l_354 && ((l_487 == g_325[3].f0) && (l_372 |= ((safe_mul_func_int32_t_s_s(l_363.f1, ((safe_lshift_func_uint8_t_u_s(((*l_495) = (l_492 != (l_493[1] , l_494[0][8]))), 0)) == ((((*l_498) |= ((*g_423) , ((**l_467) = ((l_496[1] , 0x70L) != 8UL)))) && l_401[3][8][0]) | (*l_486))))) || (*l_486))))) , (*l_486)) , (*l_486))) != 0x7E6BE9ACL);
                        if (l_363.f0)
                            break;
                        l_372 &= (*l_486);
                    }
                    else
                    {
                        uint64_t ***l_502 = &l_432;
                        uint64_t ***l_503 = &g_501;
                        (*l_503) = ((*l_502) = g_501);
                    }
                    if (l_401[5][3][1])
                        break;
                }
                for (g_283 = (-10); (g_283 <= 11); g_283 = safe_add_func_int32_t_s_s(g_283, 8))
                {
                    union U0 l_506 = {1UL};
                    for (l_363.f0 = 0; (l_363.f0 <= 7); l_363.f0 += 1)
                    {
                        int i;
                        if (l_312[l_363.f0])
                            break;
                        if (g_131[l_363.f0])
                            break;
                    }
                    g_197 = (l_506 , &g_79);
                    return l_507;
                }
            }
            for (l_194 = 4; (l_194 >= 1); l_194 -= 1)
            {
                int32_t l_510 = (-1L);
                int32_t l_511 = 0x4DFE439CL;
                int32_t l_514 = 0x1B2C5614L;
                uint8_t ***l_579 = &l_287;
                for (g_275 = 0; (g_275 <= 1); g_275 += 1)
                {
                    int32_t *l_508 = &l_180;
                    int32_t *l_509[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_509[i] = &l_99[5][1][0];
                    g_515--;
                }
                for (g_139 = 1; (g_139 <= 4); g_139 += 1)
                {
                    g_73 ^= (l_511 ^ ((safe_lshift_func_uint8_t_u_s((l_525[4] = (safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(255UL, l_524)), g_181))), g_513)) || ((safe_sub_func_uint16_t_u_u(g_276, (+(safe_mod_func_uint64_t_u_u(((safe_div_func_int64_t_s_s(0L, l_374[2][6][0])) == g_371[3][0][2]), 0x4E3531BA0169575FLL))))) , l_266[2])));
                }
                for (g_58 = 1; (g_58 >= 0); g_58 -= 1)
                {
                    uint8_t **l_536 = &l_233;
                    const int64_t l_577 = 5L;
                    uint64_t ***l_580[3][3][7] = {{{&l_432,&l_432,(void*)0,&l_432,&l_432,(void*)0,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432}},{{&l_432,&l_432,(void*)0,&l_432,&l_432,(void*)0,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432}},{{&l_432,&l_432,(void*)0,&l_432,&l_432,(void*)0,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432}}};
                    int i, j, k;
                    if (((((l_419[g_58][(g_58 + 2)][(g_58 + 3)] <= 2UL) ^ ((safe_sub_func_uint16_t_u_u(g_177, (l_312[(l_194 + 4)] = ((((void*)0 == l_535) , l_536) == ((**l_288) = g_537))))) , (g_377[0] <= 0x7061L))) && 1L) == 4L))
                    {
                        int32_t l_539 = 0x73E34C17L;
                        int32_t *l_540 = &l_372;
                        int32_t *l_541 = &l_374[0][1][2];
                        int32_t *l_542 = &g_79;
                        int32_t *l_543 = &l_374[3][7][1];
                        int32_t *l_544 = &l_372;
                        int32_t *l_545 = &l_180;
                        int32_t *l_546 = &l_374[5][0][0];
                        int32_t *l_547 = &l_512[6][4];
                        int32_t *l_548 = &l_374[3][2][3];
                        int32_t *l_549 = &g_79;
                        int32_t *l_550 = (void*)0;
                        int32_t *l_551 = &l_511;
                        int32_t *l_552[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_552[i] = &l_374[2][6][0];
                        (*l_251) = &l_180;
                        g_553[1][4]--;
                        l_542 = p_96;
                    }
                    else
                    {
                        int32_t *l_556 = &l_512[3][3];
                        if (l_312[(l_194 + 4)])
                            break;
                        (*l_556) |= l_125;
                    }
                    if ((((safe_div_func_int8_t_s_s((g_371[3][0][2] | 0x9A30L), l_419[g_58][(g_58 + 2)][(g_58 + 3)])) , ((safe_rshift_func_uint8_t_u_u(l_125, l_514)) | l_172)) < (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_325[3].f0, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(0xDEL, 5)), 4)), (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((void*)0 == &l_510), g_553[4][5])), l_577)), g_85)))))), 8UL))))
                    {
                        union U0 l_578 = {0UL};
                        return l_578;
                    }
                    else
                    {
                        g_197 = &g_73;
                    }
                    for (g_475 = 1; (g_475 <= 4); g_475 += 1)
                    {
                        (*l_288) = (l_579 = (*l_288));
                    }
                    l_581 = g_501;
                }
            }
        }
    }
    (*l_583) = l_582;
    return l_202[3];
}







static uint8_t func_106(int16_t * p_107, const int8_t p_108, int32_t p_109, int64_t p_110)
{
    uint8_t *l_132 = &g_85;
    uint8_t **l_133 = &l_132;
    int32_t *l_137[5][1][1];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_137[i][j][k] = &g_79;
        }
    }
    for (g_79 = 0; g_79 < 4; g_79 += 1)
    {
        union U0 tmp = {0UL};
        g_103[g_79] = tmp;
    }
    g_79 = ((((((*l_133) = l_132) != (void*)0) <= 0xF742FF3EL) >= (safe_lshift_func_uint8_t_u_u((~0x414CEA6EDC457790LL), 6))) == 1L);
    return g_62;
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
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_103[i].f0, "g_103[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_131[i], "g_131[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_143.f0, "g_143.f0", print_hash_value);
    transparent_crc(g_143.f1, "g_143.f1", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_273.f0, "g_273.f0", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_325[i].f0, "g_325[i].f0", print_hash_value);
        transparent_crc(g_325[i].f1, "g_325[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_345[i][j][k], "g_345[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_371[i][j][k], "g_371[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_377[i], "g_377[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_553[i][j], "g_553[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_585[i][j], "g_585[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_640, "g_640", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_706, "g_706", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    transparent_crc(g_756, "g_756", print_hash_value);
    transparent_crc(g_829, "g_829", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    transparent_crc(g_1002, "g_1002", print_hash_value);
    transparent_crc(g_1130, "g_1130", print_hash_value);
    transparent_crc(g_1160, "g_1160", print_hash_value);
    transparent_crc(g_1161, "g_1161", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    transparent_crc(g_1232, "g_1232", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1276[i], "g_1276[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1374, "g_1374", print_hash_value);
    transparent_crc(g_1416, "g_1416", print_hash_value);
    transparent_crc(g_1417, "g_1417", print_hash_value);
    transparent_crc(g_1418, "g_1418", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1419[i][j][k], "g_1419[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1684, "g_1684", print_hash_value);
    transparent_crc(g_1762, "g_1762", print_hash_value);
    transparent_crc(g_1784, "g_1784", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1869[i], "g_1869[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1870, "g_1870", print_hash_value);
    transparent_crc(g_1871, "g_1871", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1967[i], "g_1967[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1969, "g_1969", print_hash_value);
    transparent_crc(g_1971, "g_1971", print_hash_value);
    transparent_crc(g_1976, "g_1976", print_hash_value);
    transparent_crc(g_1977, "g_1977", print_hash_value);
    transparent_crc(g_2039, "g_2039", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2208[i], "g_2208[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2302, "g_2302", print_hash_value);
    transparent_crc(g_2365, "g_2365", print_hash_value);
    transparent_crc(g_2368, "g_2368", print_hash_value);
    transparent_crc(g_2543.f0, "g_2543.f0", print_hash_value);
    transparent_crc(g_2577, "g_2577", print_hash_value);
    transparent_crc(g_2578, "g_2578", print_hash_value);
    transparent_crc(g_2579, "g_2579", print_hash_value);
    transparent_crc(g_2758.f0, "g_2758.f0", print_hash_value);
    transparent_crc(g_2758.f1, "g_2758.f1", print_hash_value);
    transparent_crc(g_2801, "g_2801", print_hash_value);
    transparent_crc(g_2802, "g_2802", print_hash_value);
    transparent_crc(g_2842, "g_2842", print_hash_value);
    transparent_crc(g_2845, "g_2845", print_hash_value);
    transparent_crc(g_2846, "g_2846", print_hash_value);
    transparent_crc(g_2847, "g_2847", print_hash_value);
    transparent_crc(g_2851, "g_2851", print_hash_value);
    transparent_crc(g_2852, "g_2852", print_hash_value);
    transparent_crc(g_2853, "g_2853", print_hash_value);
    transparent_crc(g_2870, "g_2870", print_hash_value);
    transparent_crc(g_2871, "g_2871", print_hash_value);
    transparent_crc(g_2873, "g_2873", print_hash_value);
    transparent_crc(g_2931, "g_2931", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_3034[i], "g_3034[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3361, "g_3361", print_hash_value);
    transparent_crc(g_3608.f0, "g_3608.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
