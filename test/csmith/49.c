// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = CF4625CF
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
   int16_t f0;
   uint32_t f1;
   int16_t f2;
   uint64_t f3;
   const uint8_t f4;
   int64_t f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t f0;
   uint64_t f1;
   uint64_t f2;
   int32_t f3;
   int64_t f4;
   int32_t f5;
   int32_t f6;
   uint32_t f7;
   uint16_t f8;
};
#pragma pack(pop)


static int32_t g_2 = 0L;
static int8_t g_77 = 5L;
static int32_t g_80 = 0x9AEEB1CBL;
static int32_t g_90 = 0x0B65BDA1L;
static int16_t g_91 = 0xF645L;
static uint16_t g_92 = 0UL;
static struct S1 g_97 = {0xBDB463C3L,0xAA4BB8C65540566FLL,18446744073709551614UL,0x1F07AA33L,0x3FF80110037B8604LL,-9L,0xD16D00E5L,18446744073709551614UL,0xBBB0L};
static uint32_t g_104 = 4294967294UL;
static int64_t g_118 = 0x1CAAAA389647ED55LL;
static uint16_t g_153[2] = {4UL,4UL};
static int64_t g_173 = 0L;
static int32_t *g_178 = &g_97.f3;
static int32_t **g_177 = &g_178;
static uint64_t *g_234 = &g_97.f1;
static int8_t g_239 = 0L;
static int32_t g_240 = 0xA4612F2EL;
static uint32_t g_242 = 4UL;
static int64_t *g_260 = &g_173;
static uint8_t g_279 = 255UL;
static struct S0 g_298[8][4] = {{{0x762DL,4294967294UL,0xBA41L,0UL,255UL,0x6B1E10E5CE820391LL},{0xF5D3L,1UL,0x2DCAL,1UL,0x07L,0x72F4CC3A63B0F016LL},{0xCC00L,0xC70BAF26L,0xE1CAL,0x2341EFE3EA39F046LL,255UL,0xB41E8C21D9A2B6C1LL},{0xF5D3L,1UL,0x2DCAL,1UL,0x07L,0x72F4CC3A63B0F016LL}},{{0xCC00L,0xC70BAF26L,0xE1CAL,0x2341EFE3EA39F046LL,255UL,0xB41E8C21D9A2B6C1LL},{0xF5D3L,1UL,0x2DCAL,1UL,0x07L,0x72F4CC3A63B0F016LL},{0x762DL,4294967294UL,0xBA41L,0UL,255UL,0x6B1E10E5CE820391LL},{2L,8UL,1L,0xF8924D8F25584206LL,0x8BL,0xF4D61A9F09814D24LL}},{{0xF5D3L,1UL,0x2DCAL,1UL,0x07L,0x72F4CC3A63B0F016LL},{0x2C4BL,1UL,6L,18446744073709551613UL,1UL,-1L},{0xDC43L,1UL,6L,18446744073709551608UL,0xBEL,-5L},{0xCC00L,0xC70BAF26L,0xE1CAL,0x2341EFE3EA39F046LL,255UL,0xB41E8C21D9A2B6C1LL}},{{0L,4294967286UL,0x99EDL,0xFD709BB61F359F1ELL,253UL,1L},{0x0258L,0xA573045CL,0x4839L,0x5B67D640485ED991LL,0x61L,-8L},{0x0258L,0xA573045CL,0x4839L,0x5B67D640485ED991LL,0x61L,-8L},{0L,4294967286UL,0x99EDL,0xFD709BB61F359F1ELL,253UL,1L}},{{0L,4294967286UL,0x99EDL,0xFD709BB61F359F1ELL,253UL,1L},{2L,8UL,1L,0xF8924D8F25584206LL,0x8BL,0xF4D61A9F09814D24LL},{0xDC43L,1UL,6L,18446744073709551608UL,0xBEL,-5L},{0xB644L,0UL,0xBD1BL,0xC318BE8490D8DB81LL,255UL,-5L}},{{0xF5D3L,1UL,0x2DCAL,1UL,0x07L,0x72F4CC3A63B0F016LL},{0L,4294967286UL,0x99EDL,0xFD709BB61F359F1ELL,253UL,1L},{0x762DL,4294967294UL,0xBA41L,0UL,255UL,0x6B1E10E5CE820391LL},{1L,0x0F4E434CL,0x9940L,18446744073709551607UL,0xB0L,0L}},{{0xCC00L,0xC70BAF26L,0xE1CAL,0x2341EFE3EA39F046LL,255UL,0xB41E8C21D9A2B6C1LL},{8L,0x1C7E4922L,0x293AL,0UL,255UL,0L},{0xCC00L,0xC70BAF26L,0xE1CAL,0x2341EFE3EA39F046LL,255UL,0xB41E8C21D9A2B6C1LL},{1L,0x0F4E434CL,0x9940L,18446744073709551607UL,0xB0L,0L}},{{0x762DL,4294967294UL,0xBA41L,0UL,255UL,0x6B1E10E5CE820391LL},{0L,4294967286UL,0x99EDL,0xFD709BB61F359F1ELL,253UL,1L},{0xF5D3L,1UL,0x2DCAL,1UL,0x07L,0x72F4CC3A63B0F016LL},{0xB644L,0UL,0xBD1BL,0xC318BE8490D8DB81LL,255UL,-5L}}};
static struct S0 *g_297 = &g_298[6][2];
static const struct S1 g_306[3][3][3] = {{{{0x96074C04L,0xE97ADAF23B5687EFLL,0x50595EDE52273621LL,0xFF2476AFL,0xC5CB491CE318A9A5LL,0xBAC4A2D6L,0L,0UL,0xD476L},{0x96074C04L,0xE97ADAF23B5687EFLL,0x50595EDE52273621LL,0xFF2476AFL,0xC5CB491CE318A9A5LL,0xBAC4A2D6L,0L,0UL,0xD476L},{4294967286UL,0xD824BCE20F7BB9FCLL,18446744073709551607UL,0xBC2B7C60L,0x04E81FBFCF653B7ELL,0x4470C024L,0xDE6B32EFL,0UL,1UL}},{{0x5418D6CEL,5UL,0xE1FFC19A040B981ALL,1L,0xE757407D1827CA51LL,0x5D321F0CL,6L,1UL,0xED63L},{0x5418D6CEL,5UL,0xE1FFC19A040B981ALL,1L,0xE757407D1827CA51LL,0x5D321F0CL,6L,1UL,0xED63L},{0xDC3242A6L,0xD3F7A21F05741900LL,0x27C2B00AAE8DF24CLL,0xECF58E64L,0x6B7683A6D4A1814ALL,-1L,0xCC7F6654L,18446744073709551615UL,0x9082L}},{{0x96074C04L,0xE97ADAF23B5687EFLL,0x50595EDE52273621LL,0xFF2476AFL,0xC5CB491CE318A9A5LL,0xBAC4A2D6L,0L,0UL,0xD476L},{0x96074C04L,0xE97ADAF23B5687EFLL,0x50595EDE52273621LL,0xFF2476AFL,0xC5CB491CE318A9A5LL,0xBAC4A2D6L,0L,0UL,0xD476L},{4294967286UL,0xD824BCE20F7BB9FCLL,18446744073709551607UL,0xBC2B7C60L,0x04E81FBFCF653B7ELL,0x4470C024L,0xDE6B32EFL,0UL,1UL}}},{{{0x5418D6CEL,5UL,0xE1FFC19A040B981ALL,1L,0xE757407D1827CA51LL,0x5D321F0CL,6L,1UL,0xED63L},{0x5418D6CEL,5UL,0xE1FFC19A040B981ALL,1L,0xE757407D1827CA51LL,0x5D321F0CL,6L,1UL,0xED63L},{0xDC3242A6L,0xD3F7A21F05741900LL,0x27C2B00AAE8DF24CLL,0xECF58E64L,0x6B7683A6D4A1814ALL,-1L,0xCC7F6654L,18446744073709551615UL,0x9082L}},{{0x228DA0AAL,0x4AC05CB2F4937AF5LL,0UL,-10L,0x8F1172DA7D141F14LL,0x62AAEC97L,5L,0x0DDA55B1L,65526UL},{0x228DA0AAL,0x4AC05CB2F4937AF5LL,0UL,-10L,0x8F1172DA7D141F14LL,0x62AAEC97L,5L,0x0DDA55B1L,65526UL},{0x96074C04L,0xE97ADAF23B5687EFLL,0x50595EDE52273621LL,0xFF2476AFL,0xC5CB491CE318A9A5LL,0xBAC4A2D6L,0L,0UL,0xD476L}},{{0xB035E907L,1UL,18446744073709551607UL,-2L,-6L,-8L,0xC6AD0894L,3UL,65529UL},{0xB035E907L,1UL,18446744073709551607UL,-2L,-6L,-8L,0xC6AD0894L,3UL,65529UL},{0x5418D6CEL,5UL,0xE1FFC19A040B981ALL,1L,0xE757407D1827CA51LL,0x5D321F0CL,6L,1UL,0xED63L}}},{{{0x228DA0AAL,0x4AC05CB2F4937AF5LL,0UL,-10L,0x8F1172DA7D141F14LL,0x62AAEC97L,5L,0x0DDA55B1L,65526UL},{0x228DA0AAL,0x4AC05CB2F4937AF5LL,0UL,-10L,0x8F1172DA7D141F14LL,0x62AAEC97L,5L,0x0DDA55B1L,65526UL},{0x96074C04L,0xE97ADAF23B5687EFLL,0x50595EDE52273621LL,0xFF2476AFL,0xC5CB491CE318A9A5LL,0xBAC4A2D6L,0L,0UL,0xD476L}},{{0xB035E907L,1UL,18446744073709551607UL,-2L,-6L,-8L,0xC6AD0894L,3UL,65529UL},{0xB035E907L,1UL,18446744073709551607UL,-2L,-6L,-8L,0xC6AD0894L,3UL,65529UL},{0x5418D6CEL,5UL,0xE1FFC19A040B981ALL,1L,0xE757407D1827CA51LL,0x5D321F0CL,6L,1UL,0xED63L}},{{0x228DA0AAL,0x4AC05CB2F4937AF5LL,0UL,-10L,0x8F1172DA7D141F14LL,0x62AAEC97L,5L,0x0DDA55B1L,65526UL},{0x228DA0AAL,0x4AC05CB2F4937AF5LL,0UL,-10L,0x8F1172DA7D141F14LL,0x62AAEC97L,5L,0x0DDA55B1L,65526UL},{0x96074C04L,0xE97ADAF23B5687EFLL,0x50595EDE52273621LL,0xFF2476AFL,0xC5CB491CE318A9A5LL,0xBAC4A2D6L,0L,0UL,0xD476L}}}};
static int32_t ***g_346 = &g_177;
static int32_t ****g_345 = &g_346;
static int32_t g_352 = 1L;
static struct S1 g_365 = {1UL,6UL,7UL,1L,0xF260A98DB1958532LL,1L,0x5E937098L,0xB1900796L,0xF1F2L};
static uint16_t *g_391 = &g_92;
static int32_t g_543 = 0x9B6B72C4L;
static int32_t g_544 = 0x6CBC7449L;
static uint8_t g_545 = 255UL;
static struct S1 *g_645 = &g_97;
static int64_t g_709[5][2] = {{9L,9L},{0x956D09C457482558LL,9L},{9L,0x956D09C457482558LL},{9L,9L},{0x956D09C457482558LL,9L}};
static uint16_t * const *g_745 = &g_391;
static uint16_t * const ** const g_744[9][9][3] = {{{(void*)0,(void*)0,&g_745},{(void*)0,(void*)0,&g_745},{&g_745,(void*)0,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,(void*)0,&g_745},{(void*)0,&g_745,&g_745},{&g_745,(void*)0,&g_745},{&g_745,&g_745,&g_745}},{{(void*)0,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,(void*)0},{&g_745,&g_745,&g_745},{(void*)0,&g_745,(void*)0},{&g_745,&g_745,&g_745},{&g_745,&g_745,(void*)0},{(void*)0,&g_745,&g_745},{&g_745,&g_745,&g_745}},{{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{(void*)0,(void*)0,&g_745},{(void*)0,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,(void*)0},{&g_745,&g_745,(void*)0},{&g_745,&g_745,&g_745}},{{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{(void*)0,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,(void*)0},{&g_745,&g_745,(void*)0},{&g_745,(void*)0,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745}},{{&g_745,(void*)0,&g_745},{(void*)0,&g_745,&g_745},{&g_745,(void*)0,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,(void*)0,(void*)0},{&g_745,&g_745,&g_745},{&g_745,&g_745,(void*)0},{&g_745,&g_745,&g_745}},{{&g_745,&g_745,(void*)0},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,(void*)0,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745}},{{&g_745,(void*)0,&g_745},{&g_745,(void*)0,&g_745},{&g_745,&g_745,&g_745},{(void*)0,&g_745,(void*)0},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,(void*)0}},{{&g_745,(void*)0,&g_745},{&g_745,&g_745,&g_745},{&g_745,(void*)0,&g_745},{&g_745,&g_745,(void*)0},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{(void*)0,&g_745,(void*)0}},{{&g_745,&g_745,&g_745},{&g_745,(void*)0,(void*)0},{&g_745,&g_745,(void*)0},{&g_745,&g_745,&g_745},{&g_745,&g_745,&g_745},{(void*)0,(void*)0,&g_745},{&g_745,&g_745,&g_745},{&g_745,(void*)0,&g_745},{&g_745,&g_745,&g_745}}};
static struct S0 **g_751[10][8] = {{&g_297,&g_297,(void*)0,&g_297,&g_297,(void*)0,&g_297,&g_297},{&g_297,&g_297,&g_297,(void*)0,&g_297,&g_297,(void*)0,&g_297},{&g_297,&g_297,&g_297,&g_297,&g_297,&g_297,&g_297,&g_297},{&g_297,&g_297,(void*)0,&g_297,(void*)0,&g_297,&g_297,&g_297},{&g_297,&g_297,&g_297,&g_297,&g_297,&g_297,&g_297,&g_297},{(void*)0,&g_297,&g_297,(void*)0,&g_297,&g_297,&g_297,&g_297},{&g_297,(void*)0,&g_297,&g_297,(void*)0,&g_297,&g_297,(void*)0},{&g_297,(void*)0,&g_297,&g_297,&g_297,&g_297,&g_297,&g_297},{&g_297,&g_297,&g_297,&g_297,&g_297,&g_297,&g_297,(void*)0},{&g_297,&g_297,&g_297,&g_297,&g_297,&g_297,&g_297,&g_297}};
static struct S0 *** const g_750 = &g_751[4][2];
static struct S0 *** const *g_749 = &g_750;
static struct S1 g_849[9] = {{4294967295UL,18446744073709551612UL,0x7F174C07311B7E37LL,0x49534F2EL,0x5569AF795D7B2BF5LL,0L,-2L,0x73E22091L,0x85DBL},{4294967295UL,18446744073709551612UL,0x7F174C07311B7E37LL,0x49534F2EL,0x5569AF795D7B2BF5LL,0L,-2L,0x73E22091L,0x85DBL},{4294967295UL,18446744073709551612UL,0x7F174C07311B7E37LL,0x49534F2EL,0x5569AF795D7B2BF5LL,0L,-2L,0x73E22091L,0x85DBL},{4294967295UL,18446744073709551612UL,0x7F174C07311B7E37LL,0x49534F2EL,0x5569AF795D7B2BF5LL,0L,-2L,0x73E22091L,0x85DBL},{4294967295UL,18446744073709551612UL,0x7F174C07311B7E37LL,0x49534F2EL,0x5569AF795D7B2BF5LL,0L,-2L,0x73E22091L,0x85DBL},{4294967295UL,18446744073709551612UL,0x7F174C07311B7E37LL,0x49534F2EL,0x5569AF795D7B2BF5LL,0L,-2L,0x73E22091L,0x85DBL},{4294967295UL,18446744073709551612UL,0x7F174C07311B7E37LL,0x49534F2EL,0x5569AF795D7B2BF5LL,0L,-2L,0x73E22091L,0x85DBL},{4294967295UL,18446744073709551612UL,0x7F174C07311B7E37LL,0x49534F2EL,0x5569AF795D7B2BF5LL,0L,-2L,0x73E22091L,0x85DBL},{4294967295UL,18446744073709551612UL,0x7F174C07311B7E37LL,0x49534F2EL,0x5569AF795D7B2BF5LL,0L,-2L,0x73E22091L,0x85DBL}};
static struct S1 g_850 = {0xFB44D344L,1UL,0UL,0xFD031F44L,0x60BF76DECA8D2293LL,0xDAB30C83L,-1L,0xB53B83FAL,65535UL};
static struct S1 g_851[1][8] = {{{0xCC25EBCAL,0x8BE0F4D277483E49LL,18446744073709551615UL,9L,-2L,-10L,0x42EAF743L,0xDB56B855L,0xA782L},{4294967295UL,1UL,0x017D8B2395D700B5LL,3L,0x54D4A247AC7FC210LL,0xC0BDFD41L,0x9D9161F2L,0xEB3698D9L,65526UL},{0xCC25EBCAL,0x8BE0F4D277483E49LL,18446744073709551615UL,9L,-2L,-10L,0x42EAF743L,0xDB56B855L,0xA782L},{4294967295UL,1UL,0x017D8B2395D700B5LL,3L,0x54D4A247AC7FC210LL,0xC0BDFD41L,0x9D9161F2L,0xEB3698D9L,65526UL},{0xCC25EBCAL,0x8BE0F4D277483E49LL,18446744073709551615UL,9L,-2L,-10L,0x42EAF743L,0xDB56B855L,0xA782L},{4294967295UL,1UL,0x017D8B2395D700B5LL,3L,0x54D4A247AC7FC210LL,0xC0BDFD41L,0x9D9161F2L,0xEB3698D9L,65526UL},{0xCC25EBCAL,0x8BE0F4D277483E49LL,18446744073709551615UL,9L,-2L,-10L,0x42EAF743L,0xDB56B855L,0xA782L},{4294967295UL,1UL,0x017D8B2395D700B5LL,3L,0x54D4A247AC7FC210LL,0xC0BDFD41L,0x9D9161F2L,0xEB3698D9L,65526UL}}};
static struct S1 g_852 = {4294967292UL,18446744073709551614UL,9UL,-6L,-1L,0x872DDAE3L,0L,1UL,0x83C4L};
static struct S1 g_853 = {0x307C2F9DL,0xE490C289FCE91DCFLL,0x2A44E999A8C596AFLL,0L,0x7477AA8DFF9745B5LL,0xD9431ABDL,0L,0xC82FC3A0L,65535UL};
static struct S1 g_854 = {4294967287UL,0xD0AD64AAF86B7C66LL,0UL,0x7EE3E819L,0x844F67E477F58735LL,-1L,-1L,0UL,0xB6BCL};
static struct S1 g_855 = {1UL,0x017A0F2CC27B5DD1LL,0x5F8A11281D3A7ABELL,0L,0L,0xD04F5C2DL,0x52316719L,0UL,1UL};
static struct S1 g_856 = {0x50D1115CL,5UL,1UL,-1L,0xCB42B2EA31F1712BLL,-1L,7L,18446744073709551608UL,0UL};
static struct S1 g_857 = {0xE6A2DB30L,0xBA1C822212D97D05LL,1UL,-1L,-5L,5L,0x64E66B65L,18446744073709551615UL,0x3781L};
static struct S1 g_858 = {4294967294UL,0xE4C85937B8D75029LL,18446744073709551615UL,-1L,1L,0x027275A7L,2L,0x66A4DA41L,65535UL};
static struct S1 g_859[9] = {{0x8EC9397EL,0x59A67C2DC0342045LL,0x37472E801A64BEBBLL,8L,0L,0L,1L,1UL,1UL},{0x8EC9397EL,0x59A67C2DC0342045LL,0x37472E801A64BEBBLL,8L,0L,0L,1L,1UL,1UL},{0x8EC9397EL,0x59A67C2DC0342045LL,0x37472E801A64BEBBLL,8L,0L,0L,1L,1UL,1UL},{0x8EC9397EL,0x59A67C2DC0342045LL,0x37472E801A64BEBBLL,8L,0L,0L,1L,1UL,1UL},{0x8EC9397EL,0x59A67C2DC0342045LL,0x37472E801A64BEBBLL,8L,0L,0L,1L,1UL,1UL},{0x8EC9397EL,0x59A67C2DC0342045LL,0x37472E801A64BEBBLL,8L,0L,0L,1L,1UL,1UL},{0x8EC9397EL,0x59A67C2DC0342045LL,0x37472E801A64BEBBLL,8L,0L,0L,1L,1UL,1UL},{0x8EC9397EL,0x59A67C2DC0342045LL,0x37472E801A64BEBBLL,8L,0L,0L,1L,1UL,1UL},{0x8EC9397EL,0x59A67C2DC0342045LL,0x37472E801A64BEBBLL,8L,0L,0L,1L,1UL,1UL}};
static struct S1 * const g_848[9][3][6] = {{{&g_851[0][1],(void*)0,(void*)0,&g_850,(void*)0,(void*)0},{&g_854,&g_858,&g_858,(void*)0,(void*)0,(void*)0},{&g_853,(void*)0,&g_849[7],&g_854,&g_850,&g_857}},{{&g_849[7],&g_855,(void*)0,&g_851[0][1],&g_850,&g_851[0][1]},{&g_856,(void*)0,&g_856,&g_859[6],(void*)0,&g_855},{(void*)0,&g_858,&g_852,&g_857,&g_853,(void*)0}},{{&g_854,&g_851[0][1],&g_859[6],&g_857,&g_857,&g_859[6]},{(void*)0,(void*)0,(void*)0,&g_859[6],&g_852,&g_856},{&g_856,&g_850,(void*)0,&g_851[0][1],&g_858,(void*)0}},{{&g_849[7],&g_856,(void*)0,&g_854,(void*)0,&g_856},{&g_853,&g_854,(void*)0,(void*)0,(void*)0,&g_859[6]},{(void*)0,(void*)0,&g_859[6],(void*)0,(void*)0,(void*)0}},{{&g_855,(void*)0,&g_852,&g_852,(void*)0,&g_855},{(void*)0,&g_854,&g_856,&g_850,(void*)0,&g_851[0][1]},{&g_852,&g_856,(void*)0,&g_849[7],&g_858,&g_857}},{{&g_852,&g_850,&g_849[7],&g_850,&g_852,(void*)0},{(void*)0,(void*)0,&g_858,&g_852,&g_857,&g_853},{&g_855,&g_851[0][1],&g_857,(void*)0,&g_853,&g_853}},{{(void*)0,&g_858,&g_858,(void*)0,(void*)0,(void*)0},{&g_853,(void*)0,&g_849[7],&g_854,&g_850,&g_857},{&g_849[7],&g_855,(void*)0,&g_851[0][1],&g_850,&g_851[0][1]}},{{&g_856,(void*)0,&g_856,&g_859[6],(void*)0,&g_855},{(void*)0,&g_858,&g_852,&g_857,&g_853,(void*)0},{&g_854,&g_851[0][1],&g_859[6],&g_857,&g_857,&g_859[6]}},{{(void*)0,(void*)0,(void*)0,&g_859[6],&g_852,&g_856},{&g_856,&g_850,(void*)0,&g_851[0][1],&g_858,(void*)0},{&g_849[7],&g_856,(void*)0,&g_854,(void*)0,&g_856}}};
static struct S1 * const *g_847 = &g_848[2][1][0];
static uint16_t g_916 = 0xEDDCL;
static uint32_t *g_941 = &g_859[6].f0;
static uint32_t **g_940 = &g_941;
static int32_t g_1018[2] = {0xA591722FL,0xA591722FL};
static uint64_t g_1020 = 0xC525F563A4A5C11CLL;
static uint8_t *g_1056[9] = {&g_545,&g_545,&g_545,&g_545,&g_545,&g_545,&g_545,&g_545,&g_545};
static uint8_t **g_1055 = &g_1056[0];
static uint64_t g_1093 = 0xE5DE9519F8DD35DDLL;
static int32_t g_1112 = 1L;
static uint16_t g_1115 = 9UL;
static int64_t g_1234 = (-1L);
static uint8_t ***g_1340 = &g_1055;
static uint8_t ****g_1339[8] = {&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340};
static uint16_t g_1358 = 1UL;
static int16_t *g_1433 = &g_91;
static int16_t **g_1432 = &g_1433;
static const uint8_t *g_1436 = &g_279;
static const uint8_t **g_1435 = &g_1436;
static int32_t * const *g_1459 = &g_178;
static int32_t * const **g_1458[10][5][5] = {{{&g_1459,(void*)0,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{(void*)0,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459}},{{&g_1459,&g_1459,&g_1459,(void*)0,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459}},{{&g_1459,&g_1459,&g_1459,(void*)0,&g_1459},{&g_1459,(void*)0,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459}},{{(void*)0,(void*)0,&g_1459,(void*)0,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{(void*)0,&g_1459,&g_1459,&g_1459,&g_1459},{(void*)0,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459}},{{&g_1459,&g_1459,&g_1459,&g_1459,(void*)0},{&g_1459,&g_1459,&g_1459,&g_1459,(void*)0},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459}},{{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,(void*)0,&g_1459,(void*)0,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,(void*)0,&g_1459,&g_1459,(void*)0},{(void*)0,&g_1459,&g_1459,&g_1459,&g_1459}},{{(void*)0,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{(void*)0,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{(void*)0,&g_1459,&g_1459,(void*)0,(void*)0}},{{(void*)0,&g_1459,&g_1459,&g_1459,&g_1459},{(void*)0,&g_1459,&g_1459,&g_1459,&g_1459},{(void*)0,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,(void*)0,&g_1459},{(void*)0,(void*)0,(void*)0,&g_1459,(void*)0}},{{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{(void*)0,&g_1459,&g_1459,(void*)0,&g_1459},{&g_1459,&g_1459,&g_1459,(void*)0,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459}},{{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459,(void*)0},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459},{(void*)0,&g_1459,(void*)0,&g_1459,(void*)0},{&g_1459,&g_1459,&g_1459,&g_1459,&g_1459}}};
static int32_t * const ***g_1457 = &g_1458[8][2][4];
static int32_t * const ****g_1456 = &g_1457;
static uint8_t g_1516 = 6UL;
static const int32_t ***g_1537 = (void*)0;
static const int32_t *** const *g_1536[2][1][9] = {{{(void*)0,&g_1537,&g_1537,(void*)0,&g_1537,&g_1537,(void*)0,&g_1537,&g_1537}},{{&g_1537,&g_1537,&g_1537,&g_1537,&g_1537,&g_1537,&g_1537,&g_1537,&g_1537}}};
static uint16_t **g_1585[3][1][6] = {{{(void*)0,(void*)0,&g_391,(void*)0,&g_391,(void*)0}},{{&g_391,&g_391,(void*)0,(void*)0,&g_391,&g_391}},{{(void*)0,&g_391,(void*)0,&g_391,(void*)0,(void*)0}}};
static uint16_t ***g_1584 = &g_1585[1][0][5];
static uint16_t ****g_1583 = &g_1584;
static int16_t g_1646[6][1][4] = {{{0x3E9AL,0L,(-1L),0L}},{{(-1L),0L,(-1L),0L}},{{0x3E9AL,0L,(-10L),0L}},{{0x3E9AL,0L,(-1L),0L}},{{(-1L),0L,(-1L),0L}},{{0x3E9AL,0L,(-10L),0L}}};
static const int64_t *g_1662[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static const int64_t **g_1661 = &g_1662[0];
static const int64_t ***g_1660 = &g_1661;
static const int64_t ****g_1659 = &g_1660;
static uint64_t g_1678 = 0xBCA84A4A9AE7E798LL;
static struct S1 **g_1688 = &g_645;
static int32_t *g_1699 = &g_857.f5;
static struct S1 ***g_1856[3] = {&g_1688,&g_1688,&g_1688};
static struct S1 ****g_1855[4] = {&g_1856[1],&g_1856[1],&g_1856[1],&g_1856[1]};
static uint8_t *g_1909 = &g_1516;
static uint8_t ** const g_1908 = &g_1909;
static uint8_t ** const *g_1907 = &g_1908;
static uint8_t ** const *g_1911 = (void*)0;
static struct S0 g_1930 = {-1L,1UL,3L,18446744073709551607UL,255UL,-3L};
static int32_t g_1987 = 0xFA6F0C6FL;



static const int32_t func_1(void);
static struct S1 func_5(uint16_t p_6, struct S0 p_7, uint64_t p_8, int32_t p_9);
static uint16_t func_10(int32_t p_11, struct S1 p_12);
static uint16_t func_15(uint32_t p_16, uint8_t p_17, struct S1 p_18, int8_t p_19);
static uint16_t func_22(int8_t p_23);
static uint8_t func_31(uint32_t p_32, int32_t p_33, int8_t p_34, struct S1 p_35);
static const int16_t func_38(int8_t p_39, uint8_t p_40);
static uint8_t func_41(struct S1 p_42, uint32_t p_43, int32_t p_44);
static struct S1 func_45(int8_t p_46, uint32_t p_47);
static uint8_t func_56(int64_t p_57);
# 159 "<stdin>"
static const int32_t func_1(void)
{
    int16_t l_1702 = 0x7EF4L;
    int64_t l_1961 = (-10L);
    struct S1 l_1966 = {0xCECC2FCFL,1UL,0xDC75790E36F363BBLL,1L,0xECF82584F164E9E2LL,0x62E968F5L,0x2801F5D8L,0UL,65535UL};
    int32_t l_1976 = 8L;
    int16_t l_1982[1];
    int32_t l_2004[4][1][2] = {{{(-3L),(-3L)}},{{(-3L),(-3L)}},{{(-3L),(-3L)}},{{(-3L),(-3L)}}};
    int8_t *l_2014 = (void*)0;
    int8_t *l_2015 = &g_239;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1982[i] = 0L;
    for (g_2 = 0; (g_2 > (-8)); g_2 = safe_sub_func_int32_t_s_s(g_2, 6))
    {
        int8_t l_1717 = (-10L);
        uint8_t *l_1718 = &g_1516;
        struct S1 l_1719 = {1UL,0xB911E05BB3C73F57LL,18446744073709551615UL,7L,0L,0xDDF2D540L,0L,0xAFD44625L,0xA46BL};
        struct S0 l_1960 = {0x1EA7L,0UL,0x3CF3L,4UL,0xD0L,0x34927B92311C7DC5LL};
        uint16_t *l_1975[3][7] = {{&g_858.f8,&g_858.f8,&g_858.f8,&g_858.f8,&g_858.f8,&g_858.f8,&g_858.f8},{&g_850.f8,&g_854.f8,&g_850.f8,&g_854.f8,&g_850.f8,&g_854.f8,&g_850.f8},{&g_858.f8,&g_858.f8,&g_858.f8,&g_858.f8,&g_858.f8,&g_858.f8,&g_858.f8}};
        uint64_t l_1977 = 18446744073709551615UL;
        uint32_t *l_1983 = &g_1930.f1;
        const uint8_t *** const l_1984 = &g_1435;
        uint16_t l_2005 = 65533UL;
        int i, j;
    }
    (**g_177) = ((safe_add_func_int32_t_s_s((-1L), (safe_rshift_func_uint16_t_u_u((246UL == (safe_mod_func_int8_t_s_s(((*l_2015) = l_1982[0]), 255UL))), 14)))) ^ (**g_1459));
    return l_1966.f3;
}







static struct S1 func_5(uint16_t p_6, struct S0 p_7, uint64_t p_8, int32_t p_9)
{
    uint32_t l_1962 = 1UL;
    struct S1 l_1965 = {4UL,0x4CB544DDB7621CC8LL,0x035E3094FC7A5556LL,-2L,0xB7CF170C459F779DLL,1L,0x8FA4CEBEL,0x4CBE064EL,1UL};
    --l_1962;
    return l_1965;
}







static uint16_t func_10(int32_t p_11, struct S1 p_12)
{
    const int64_t *l_1730 = (void*)0;
    int32_t l_1736 = 1L;
    struct S1 l_1786 = {0xA538CE44L,0x390FE5A2674B26BFLL,18446744073709551615UL,0x7C7EDE19L,0x3712ACB17D9D87A4LL,-1L,0x6B26F808L,0xC3746E9AL,65532UL};
    uint32_t *l_1918 = (void*)0;
    int16_t **l_1942 = &g_1433;
    int16_t l_1957 = (-8L);
    int32_t l_1959 = 4L;
    for (g_365.f4 = 26; (g_365.f4 != (-12)); g_365.f4--)
    {
        uint64_t l_1733 = 18446744073709551608UL;
        const uint16_t * const l_1739 = &g_851[0][1].f8;
        struct S0 l_1766[9][8][1] = {{{{3L,0xB2E12654L,1L,0UL,255UL,0L}},{{0xCBE2L,1UL,0x9799L,0x9410C438ACD314C8LL,0xAAL,0x8374EF34BA635ECDLL}},{{9L,0x08F5A5F6L,1L,18446744073709551615UL,0xD0L,-4L}},{{0xCBE2L,1UL,0x9799L,0x9410C438ACD314C8LL,0xAAL,0x8374EF34BA635ECDLL}},{{3L,0xB2E12654L,1L,0UL,255UL,0L}},{{1L,1UL,-7L,0xBE9689B3A159EA89LL,0xB7L,0x39E4AE0EE8B65DA4LL}},{{0xE3F5L,1UL,0xBFC1L,18446744073709551615UL,1UL,2L}},{{0xC553L,4294967295UL,0xD510L,0x85FFA75870509815LL,0UL,0L}}},{{{0xE3F5L,1UL,0xBFC1L,18446744073709551615UL,1UL,2L}},{{1L,1UL,-7L,0xBE9689B3A159EA89LL,0xB7L,0x39E4AE0EE8B65DA4LL}},{{3L,0xB2E12654L,1L,0UL,255UL,0L}},{{0xCBE2L,1UL,0x9799L,0x9410C438ACD314C8LL,0xAAL,0x8374EF34BA635ECDLL}},{{9L,0x08F5A5F6L,1L,18446744073709551615UL,0xD0L,-4L}},{{0xCBE2L,1UL,0x9799L,0x9410C438ACD314C8LL,0xAAL,0x8374EF34BA635ECDLL}},{{3L,0xB2E12654L,1L,0UL,255UL,0L}},{{1L,1UL,-7L,0xBE9689B3A159EA89LL,0xB7L,0x39E4AE0EE8B65DA4LL}}},{{{0xE3F5L,1UL,0xBFC1L,18446744073709551615UL,1UL,2L}},{{0xC553L,4294967295UL,0xD510L,0x85FFA75870509815LL,0UL,0L}},{{0xE3F5L,1UL,0xBFC1L,18446744073709551615UL,1UL,2L}},{{1L,1UL,-7L,0xBE9689B3A159EA89LL,0xB7L,0x39E4AE0EE8B65DA4LL}},{{3L,0xB2E12654L,1L,0UL,255UL,0L}},{{0xCBE2L,1UL,0x9799L,0x9410C438ACD314C8LL,0xAAL,0x8374EF34BA635ECDLL}},{{9L,0x08F5A5F6L,1L,18446744073709551615UL,0xD0L,-4L}},{{0xCBE2L,1UL,0x9799L,0x9410C438ACD314C8LL,0xAAL,0x8374EF34BA635ECDLL}}},{{{3L,0xB2E12654L,1L,0UL,255UL,0L}},{{1L,1UL,-7L,0xBE9689B3A159EA89LL,0xB7L,0x39E4AE0EE8B65DA4LL}},{{0xE3F5L,1UL,0xBFC1L,18446744073709551615UL,1UL,2L}},{{0xC553L,4294967295UL,0xD510L,0x85FFA75870509815LL,0UL,0L}},{{0xE3F5L,1UL,0xBFC1L,18446744073709551615UL,1UL,2L}},{{1L,1UL,-7L,0xBE9689B3A159EA89LL,0xB7L,0x39E4AE0EE8B65DA4LL}},{{3L,0xB2E12654L,1L,0UL,255UL,0L}},{{0xCBE2L,1UL,0x9799L,0x9410C438ACD314C8LL,0xAAL,0x8374EF34BA635ECDLL}}},{{{9L,0x08F5A5F6L,1L,18446744073709551615UL,0xD0L,-4L}},{{0xCBE2L,1UL,0x9799L,0x9410C438ACD314C8LL,0xAAL,0x8374EF34BA635ECDLL}},{{3L,0xB2E12654L,1L,0UL,255UL,0L}},{{1L,1UL,-7L,0xBE9689B3A159EA89LL,0xB7L,0x39E4AE0EE8B65DA4LL}},{{0xE3F5L,1UL,0xBFC1L,18446744073709551615UL,1UL,2L}},{{0xC553L,4294967295UL,0xD510L,0x85FFA75870509815LL,0UL,0L}},{{0xE3F5L,1UL,0xBFC1L,18446744073709551615UL,1UL,2L}},{{1L,1UL,-7L,0xBE9689B3A159EA89LL,0xB7L,0x39E4AE0EE8B65DA4LL}}},{{{3L,0xB2E12654L,1L,0UL,255UL,0L}},{{0xCBE2L,1UL,0x9799L,0x9410C438ACD314C8LL,0xAAL,0x8374EF34BA635ECDLL}},{{9L,0x08F5A5F6L,1L,18446744073709551615UL,0xD0L,-4L}},{{0xCBE2L,1UL,0x9799L,0x9410C438ACD314C8LL,0xAAL,0x8374EF34BA635ECDLL}},{{3L,0xB2E12654L,1L,0UL,255UL,0L}},{{1L,1UL,-7L,0xBE9689B3A159EA89LL,0xB7L,0x39E4AE0EE8B65DA4LL}},{{0xE3F5L,1UL,0xBFC1L,18446744073709551615UL,1UL,2L}},{{1L,1UL,-7L,0xBE9689B3A159EA89LL,0xB7L,0x39E4AE0EE8B65DA4LL}}},{{{9L,0x08F5A5F6L,1L,18446744073709551615UL,0xD0L,-4L}},{{1L,4294967295UL,0xBD86L,0x29D7F6BEE119A9A8LL,255UL,0L}},{{6L,3UL,0x92A4L,1UL,3UL,-2L}},{{0xC553L,4294967295UL,0xD510L,0x85FFA75870509815LL,0UL,0L}},{{3L,0xB2E12654L,1L,0UL,255UL,0L}},{{0xC553L,4294967295UL,0xD510L,0x85FFA75870509815LL,0UL,0L}},{{6L,3UL,0x92A4L,1UL,3UL,-2L}},{{1L,4294967295UL,0xBD86L,0x29D7F6BEE119A9A8LL,255UL,0L}}},{{{9L,0x08F5A5F6L,1L,18446744073709551615UL,0xD0L,-4L}},{{1L,1UL,-7L,0xBE9689B3A159EA89LL,0xB7L,0x39E4AE0EE8B65DA4LL}},{{9L,0x08F5A5F6L,1L,18446744073709551615UL,0xD0L,-4L}},{{1L,4294967295UL,0xBD86L,0x29D7F6BEE119A9A8LL,255UL,0L}},{{6L,3UL,0x92A4L,1UL,3UL,-2L}},{{0xC553L,4294967295UL,0xD510L,0x85FFA75870509815LL,0UL,0L}},{{3L,0xB2E12654L,1L,0UL,255UL,0L}},{{0xC553L,4294967295UL,0xD510L,0x85FFA75870509815LL,0UL,0L}}},{{{6L,3UL,0x92A4L,1UL,3UL,-2L}},{{1L,4294967295UL,0xBD86L,0x29D7F6BEE119A9A8LL,255UL,0L}},{{9L,0x08F5A5F6L,1L,18446744073709551615UL,0xD0L,-4L}},{{1L,1UL,-7L,0xBE9689B3A159EA89LL,0xB7L,0x39E4AE0EE8B65DA4LL}},{{9L,0x08F5A5F6L,1L,18446744073709551615UL,0xD0L,-4L}},{{1L,4294967295UL,0xBD86L,0x29D7F6BEE119A9A8LL,255UL,0L}},{{6L,3UL,0x92A4L,1UL,3UL,-2L}},{{0xC553L,4294967295UL,0xD510L,0x85FFA75870509815LL,0UL,0L}}}};
        int16_t l_1835 = 6L;
        int32_t l_1872[5][10][5] = {{{1L,(-1L),0xE6724E73L,0x151BF037L,0xC690F32DL},{1L,(-1L),(-1L),0x8485AEAAL,0x3E19C0BEL},{0x81D0F144L,0L,0x5B7625BCL,1L,0L},{1L,(-1L),1L,(-9L),1L},{0xC77CC679L,0x913E26FFL,0xAD10B0C3L,4L,0L},{0xB7C04EA8L,(-4L),0x60B0A2D1L,0x813A0DA7L,1L},{(-1L),0x5B7625BCL,0x813A0DA7L,0L,0L},{0x57F7F79AL,0L,(-9L),(-3L),(-1L)},{(-1L),3L,(-9L),(-3L),0xEA8239B8L},{0x4698B8D6L,0L,0x813A0DA7L,0xE6093432L,2L}},{{3L,0x7450DFE5L,0x60B0A2D1L,0xA2AFFD54L,0xFE9D3E85L},{4L,0x7ABC1152L,0xAD10B0C3L,(-1L),1L},{0x3E19C0BEL,1L,1L,0xEA8239B8L,(-1L)},{0x84B7181FL,0x3E19C0BEL,0x5B7625BCL,0x39ACA440L,5L},{(-1L),0xFE9D3E85L,(-1L),2L,0x237E529BL},{0x80871164L,0xE6093432L,0xE6724E73L,0xE6724E73L,0xE6093432L},{8L,(-9L),(-1L),0xB030B53DL,0x9AD4A674L},{(-9L),0x81D0F144L,(-1L),0L,(-1L)},{0L,0xAD10B0C3L,0x39ACA440L,0xBA6B2DC0L,0xE6724E73L},{(-9L),0x133845B1L,2L,5L,(-1L)}},{{8L,9L,1L,0L,0L},{0x80871164L,0x813A0DA7L,0x940226D8L,0L,(-1L)},{(-1L),1L,0x80871164L,2L,0x7ABC1152L},{0x84B7181FL,0xEA8239B8L,0x7ABC1152L,0L,1L},{0x3E19C0BEL,0L,1L,1L,2L},{4L,8L,8L,3L,(-9L)},{3L,0L,0xEA8239B8L,8L,0L},{0x4698B8D6L,0x2725150CL,0x9AD4A674L,0xC25027D9L,0L},{(-1L),(-1L),0xF581F2BFL,0xC25027D9L,(-1L)},{0x57F7F79AL,0x8485AEAAL,(-1L),8L,(-1L)}},{{(-1L),0x4698B8D6L,0xC25027D9L,3L,6L},{0xB7C04EA8L,0x59E7F531L,0x365572A4L,1L,0x15BB2A9BL},{0xC77CC679L,0L,(-4L),0L,0xB030B53DL},{2L,0L,1L,(-9L),(-1L)},{1L,0xC25027D9L,0x59E7F531L,0xAD10B0C3L,0L},{1L,(-4L),(-1L),0xE9626578L,(-1L)},{(-1L),(-1L),0x133845B1L,(-1L),(-4L)},{0xE9626578L,0xFE9D3E85L,2L,0xF6217572L,5L},{0x59E7F531L,1L,0xBA6B2DC0L,0x4698B8D6L,0x81D0F144L},{0x237E529BL,0xFE9D3E85L,0L,0xC25027D9L,0x3E19C0BEL}},{{4L,(-1L),(-1L),(-10L),0x57F7F79AL},{0x7450DFE5L,(-4L),0x940226D8L,(-1L),0x237E529BL},{0xEA8239B8L,0xC25027D9L,4L,0x7ACEECF6L,0xC77CC679L},{0xC1E42398L,0L,(-3L),0x80871164L,8L},{0x7ABC1152L,0L,1L,0xE6093432L,(-10L)},{0xBA6B2DC0L,(-1L),2L,0x133845B1L,1L},{1L,0L,9L,0x39ACA440L,(-7L)},{0xC25027D9L,(-7L),0xDE0B65CBL,0x365572A4L,0x15BB2A9BL},{0xF6217572L,0xB1D72737L,0xC77CC679L,0xFE9D3E85L,0x15BB2A9BL},{1L,0x237E529BL,0xB8768561L,0xC690F32DL,(-7L)}}};
        int32_t l_1893 = (-8L);
        uint8_t ** const *l_1912[2];
        uint16_t l_1919 = 0x95EFL;
        struct S0 ** const *l_1922 = &g_751[4][2];
        struct S0 *l_1929 = &g_1930;
        int32_t *l_1958 = &g_851[0][1].f3;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1912[i] = (void*)0;
        if ((((**g_1660) = l_1730) != l_1730))
        {
            int8_t *l_1750[2][5] = {{&g_77,&g_239,&g_77,&g_77,&g_239},{&g_239,&g_77,&g_77,&g_239,&g_77}};
            int32_t l_1758 = 0L;
            int i, j;
            for (g_857.f0 = 17; (g_857.f0 >= 40); g_857.f0++)
            {
                l_1733--;
                if (p_12.f3)
                    continue;
            }
            p_12.f3 = (((***g_1340)++) >= (((((void*)0 == l_1739) > ((safe_mod_func_int32_t_s_s(((**g_1432) <= (safe_mod_func_int32_t_s_s(0x945BFE0BL, (safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x81L, ((safe_mod_func_int8_t_s_s(p_12.f7, (g_239 = g_855.f7))) >= ((((safe_unary_minus_func_int16_t_s(((safe_mod_func_int8_t_s_s(l_1733, (safe_div_func_int32_t_s_s((((safe_sub_func_int8_t_s_s(((l_1736 <= 1UL) , p_12.f4), p_12.f2)) || p_12.f5) ^ l_1733), l_1758)))) ^ p_12.f6))) && 0x04L) && p_12.f2) != p_11)))), l_1736))))), 0x0E47D123L)) > p_12.f7)) | p_12.f0) >= p_12.f8));
            l_1758 = (safe_add_func_int16_t_s_s((((safe_div_func_int32_t_s_s(l_1736, l_1758)) , ((+(safe_mod_func_uint8_t_u_u(((l_1766[6][7][0] , &g_941) != (void*)0), (safe_sub_func_uint16_t_u_u(0xEC87L, (p_12.f3 , (safe_rshift_func_uint8_t_u_s(((***g_1340) = (safe_sub_func_uint16_t_u_u(((*g_391) = (safe_add_func_int64_t_s_s((((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u(p_12.f8, (safe_lshift_func_int8_t_s_u(((safe_div_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(2UL, p_12.f5)) < l_1758), l_1758)) ^ l_1736), 4)))) , 1L), 5)) >= (-7L)) <= p_11), l_1736))), l_1736))), g_853.f5)))))))) == l_1736)) <= (**g_1432)), p_12.f5));
        }
        else
        {
            struct S1 l_1792 = {1UL,0UL,1UL,0x3010A517L,0xD479BCE2E4AD233FLL,0xE567A8E2L,0xE3288036L,0UL,0x8826L};
            int32_t ****l_1801 = (void*)0;
            int64_t **l_1820 = &g_260;
            int64_t ***l_1819 = &l_1820;
            int64_t ****l_1818 = &l_1819;
            for (g_852.f2 = 0; (g_852.f2 <= 5); g_852.f2 += 1)
            {
                uint32_t l_1787 = 0x704535A3L;
                (**g_1688) = ((~p_12.f3) , l_1786);
                ++l_1787;
            }
            for (g_854.f3 = (-2); (g_854.f3 != 18); ++g_854.f3)
            {
                struct S1 **l_1803 = &g_645;
                int32_t l_1811[8][10][1] = {{{4L},{0x2ED5C1BEL},{(-5L)},{0x19CA69E0L},{(-1L)},{(-1L)},{(-1L)},{0x19CA69E0L},{(-5L)},{0x2ED5C1BEL}},{{4L},{0x2ED5C1BEL},{(-5L)},{0x19CA69E0L},{(-1L)},{(-1L)},{(-1L)},{0x19CA69E0L},{(-5L)},{0x2ED5C1BEL}},{{4L},{0x2ED5C1BEL},{(-5L)},{0x19CA69E0L},{(-1L)},{(-1L)},{(-1L)},{0x19CA69E0L},{(-5L)},{0x2ED5C1BEL}},{{4L},{0x2ED5C1BEL},{(-5L)},{0x19CA69E0L},{(-1L)},{(-1L)},{(-1L)},{0x19CA69E0L},{(-5L)},{0x2ED5C1BEL}},{{4L},{0x2ED5C1BEL},{(-5L)},{0x19CA69E0L},{(-1L)},{(-1L)},{(-1L)},{0x19CA69E0L},{(-5L)},{0x2ED5C1BEL}},{{4L},{0x2ED5C1BEL},{(-5L)},{0x19CA69E0L},{(-1L)},{(-1L)},{(-1L)},{0x19CA69E0L},{(-5L)},{0x2ED5C1BEL}},{{4L},{0x2ED5C1BEL},{(-5L)},{0x19CA69E0L},{(-1L)},{(-1L)},{(-1L)},{0x19CA69E0L},{(-5L)},{0x2ED5C1BEL}},{{4L},{0x2ED5C1BEL},{(-5L)},{0x19CA69E0L},{(-1L)},{(-1L)},{(-1L)},{0x19CA69E0L},{(-5L)},{0x2ED5C1BEL}}};
                int64_t **l_1817 = &g_260;
                int64_t ***l_1816 = &l_1817;
                int64_t ****l_1815[5][3][8] = {{{&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816},{&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,(void*)0,&l_1816},{&l_1816,&l_1816,&l_1816,(void*)0,&l_1816,&l_1816,(void*)0,&l_1816}},{{&l_1816,(void*)0,&l_1816,&l_1816,&l_1816,(void*)0,&l_1816,&l_1816},{&l_1816,(void*)0,&l_1816,&l_1816,(void*)0,&l_1816,&l_1816,&l_1816},{&l_1816,&l_1816,&l_1816,(void*)0,&l_1816,&l_1816,(void*)0,&l_1816}},{{&l_1816,&l_1816,&l_1816,(void*)0,&l_1816,(void*)0,&l_1816,&l_1816},{(void*)0,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816},{&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816}},{{(void*)0,&l_1816,&l_1816,(void*)0,&l_1816,&l_1816,&l_1816,&l_1816},{(void*)0,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816},{&l_1816,(void*)0,&l_1816,&l_1816,&l_1816,&l_1816,(void*)0,&l_1816}},{{(void*)0,(void*)0,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816},{&l_1816,&l_1816,(void*)0,&l_1816,&l_1816,&l_1816,&l_1816,&l_1816},{&l_1816,(void*)0,&l_1816,&l_1816,(void*)0,&l_1816,&l_1816,&l_1816}}};
                int i, j, k;
                l_1792 = p_12;
                for (g_854.f7 = 0; (g_854.f7 <= 7); g_854.f7 += 1)
                {
                    struct S1 **l_1802[3];
                    int32_t *l_1814[6] = {&g_849[7].f3,&g_849[7].f3,&g_849[7].f3,&g_849[7].f3,&g_849[7].f3,&g_849[7].f3};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1802[i] = &g_645;
                    if (l_1792.f0)
                        break;
                    for (g_858.f5 = 0; (g_858.f5 <= 7); g_858.f5 += 1)
                    {
                        int8_t l_1798 = 0xBAL;
                        int i;
                        (**g_1688) = func_45(g_859[6].f8, (((+(safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((l_1798 != (safe_lshift_func_uint16_t_u_u((l_1801 != (void*)0), 6))) > (l_1802[1] == l_1803)), 5)) ^ (!(safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(l_1811[1][2][0], (safe_div_func_uint16_t_u_u((0x430BDEEC3847BB75LL != 1UL), p_11)))), 18446744073709551615UL)), p_12.f0)))), p_11))) , 0xF99EL) >= 0xC574L));
                    }
                    p_12.f6 = (p_12.f2 > 0x05FEDF8ACC2E9BACLL);
                }
                l_1818 = l_1815[4][1][0];
                for (g_857.f3 = 26; (g_857.f3 >= (-7)); g_857.f3 = safe_sub_func_uint16_t_u_u(g_857.f3, 2))
                {
                    uint64_t l_1834 = 0x613A055D9F7FBD91LL;
                    for (g_855.f8 = 27; (g_855.f8 >= 50); g_855.f8 = safe_add_func_int8_t_s_s(g_855.f8, 2))
                    {
                        uint64_t *l_1825 = &g_859[6].f2;
                        const struct S1 l_1832 = {0xACEE53E3L,0x6FDB0662D7452D70LL,0x7E070AF58B1E46A7LL,0x8AAA4657L,0x3FEE15BE33517EB0LL,0xDCA98355L,0xEC509732L,0x931E2C63L,0UL};
                        l_1835 &= ((((&l_1739 != (void*)0) || (p_12 , (((*l_1825) ^= p_12.f6) , (safe_div_func_int8_t_s_s(l_1811[1][2][0], (safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_12.f0, (l_1832 , (!((((-1L) != ((*g_941) = 4294967295UL)) < p_12.f0) && l_1834))))), 255UL))))))) >= p_12.f6) , l_1733);
                    }
                    if (l_1786.f0)
                        break;
                }
            }
            return l_1792.f6;
        }
        if ((safe_add_func_int16_t_s_s((l_1766[6][7][0].f2 , (safe_div_func_uint8_t_u_u(p_12.f0, (safe_mul_func_uint16_t_u_u(0x28FCL, (((safe_mod_func_int16_t_s_s((**g_1432), ((func_45((7UL >= (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((l_1786 , (void*)0) == (void*)0), 6)), 9))), (safe_lshift_func_int8_t_s_u(l_1786.f3, 0))) , 0x0DDCL) ^ 0xCB5CL))) ^ (***g_1340)) , p_12.f8)))))), p_12.f4)))
        {
            (**g_1688) = (**g_1688);
        }
        else
        {
            int32_t l_1878 = 0x159472EEL;
            int32_t l_1880 = 0x85DEDAE3L;
            int64_t l_1884[6] = {1L,1L,1L,1L,1L,1L};
            int32_t l_1885 = (-1L);
            uint32_t l_1886 = 0UL;
            uint8_t ** const *l_1910 = &g_1908;
            struct S0 *l_1928 = &g_298[5][1];
            int i;
            for (g_854.f5 = (-21); (g_854.f5 <= 24); ++g_854.f5)
            {
                uint16_t l_1871[4][8][8] = {{{65527UL,0x37BDL,65527UL,1UL,0xC498L,3UL,0xFFA5L,1UL},{0x4327L,0xC498L,65526UL,0x37BDL,65527UL,0xC230L,0x6DAEL,65535UL},{65526UL,65530UL,4UL,0UL,3UL,0x51E3L,0xC498L,1UL},{0xA6D6L,0xC230L,0xC6B2L,65526UL,0UL,1UL,1UL,1UL},{65533UL,0x3355L,0x463CL,0x3355L,65533UL,1UL,0x4CD0L,0x293FL},{1UL,0UL,1UL,0x4E22L,65527UL,0x4CD0L,0x951AL,0x3355L},{65528UL,65527UL,1UL,0x463CL,1UL,65535UL,0x4CD0L,65531UL},{65527UL,65527UL,0x463CL,0x293FL,0xDC71L,0xC6B2L,1UL,65533UL}},{{0x8B26L,65527UL,0xC6B2L,0xDBE9L,65530UL,65535UL,0xC498L,0x951AL},{1UL,0x51E3L,4UL,65535UL,0xA6D6L,0xDC71L,0xDC71L,0xA6D6L},{65535UL,4UL,4UL,65535UL,0xA1A1L,65527UL,65535UL,0x8B26L},{65527UL,0x8B26L,0x2F3BL,0x4E22L,65533UL,1UL,0xC6B2L,0xDC71L},{0xA6D6L,0x8B26L,0xC498L,65530UL,0xDEBEL,65527UL,65526UL,0x8BD2L},{0x4CD0L,4UL,65527UL,65531UL,0UL,0xDC71L,0xC498L,65527UL},{0xCBEEL,0x293FL,3UL,0xA1A1L,0x8097L,65527UL,0x4327L,65526UL},{4UL,0x2F3BL,0UL,0x4327L,0xEE87L,0UL,0xEE87L,0x4327L}},{{65533UL,65527UL,65533UL,0xA6D6L,65526UL,1UL,0xDEBEL,0x4E22L},{0xC6B2L,65531UL,65527UL,0xEE87L,65526UL,0xCBEEL,65526UL,0x951AL},{0xC6B2L,65528UL,1UL,4UL,65526UL,0UL,0UL,65535UL},{65533UL,65526UL,0xDC71L,0xFFA5L,0xEE87L,65535UL,0x951AL,1UL},{4UL,0UL,65530UL,0xC230L,0x8097L,0x293FL,1UL,65527UL},{0xCBEEL,0xC6B2L,0xDEBEL,65527UL,0UL,0UL,65527UL,0xDEBEL},{0x4CD0L,0x4CD0L,1UL,0UL,0xDEBEL,0x37BDL,0x51E3L,65535UL},{0xA6D6L,65527UL,0x293FL,0xC498L,65533UL,0xDBE9L,4UL,65535UL}},{{65527UL,0x951AL,65528UL,0UL,0xA1A1L,0x8B26L,0x463CL,0xDEBEL},{65535UL,0x4327L,0xC230L,65527UL,0xA6D6L,0x4E22L,0x6DAEL,65527UL},{0UL,0xDBE9L,0xA6D6L,0xC230L,0xC6B2L,65526UL,0UL,1UL},{0x463CL,65535UL,0UL,0xFFA5L,0x951AL,0xFFA5L,0UL,65535UL},{0x2F3BL,1UL,0x8097L,4UL,65535UL,0xA6D6L,1UL,0x951AL},{0xDEBEL,0xC498L,0x3355L,0xEE87L,0x2F3BL,0x51E3L,1UL,0x4E22L},{0xA1A1L,0xEE87L,0x8097L,0xA6D6L,1UL,65530UL,0UL,0x4327L},{1UL,65530UL,0UL,0x4327L,0x3355L,0xC6B2L,0UL,65526UL}}};
                int32_t l_1874 = (-1L);
                uint16_t l_1875 = 0xFADBL;
                int32_t l_1879 = 0x99DC4400L;
                int32_t l_1881 = 1L;
                int32_t l_1882 = 5L;
                int32_t l_1883[7][3][10] = {{{0x95C2EEE3L,0xE0580F6DL,(-6L),0L,0L,6L,0x831AE993L,0x95C2EEE3L,1L,0x508EDDD7L},{0x5D9BD4DCL,(-1L),0x0EAB5CD3L,(-1L),6L,(-8L),0xB3CAD41CL,0L,0x831AE993L,0x0EAB5CD3L},{0x7D45435EL,0x34A37C9CL,1L,0x0A9BAFADL,0xB563C765L,6L,0x95C2EEE3L,(-8L),0xEE4C8C86L,0x10FB274FL}},{{1L,6L,0x508EDDD7L,0L,0x0A9BAFADL,(-1L),0x7ED56E00L,(-1L),0x0A9BAFADL,0L},{0L,0x7D45435EL,0L,0x508EDDD7L,1L,0x0EAB5CD3L,0xDB439F5FL,(-1L),0x7D45435EL,1L},{0x95C077EDL,(-1L),0x7D45435EL,6L,0x34A37C9CL,(-1L),1L,(-1L),0xE0580F6DL,0xEE4C8C86L}},{{0xE0580F6DL,0x95C077EDL,0L,1L,0x7D45435EL,0x5D9BD4DCL,0xF0348DA3L,(-1L),0x1B35CAABL,0x3F973351L},{(-8L),0x1B35CAABL,0x508EDDD7L,0x7ED56E00L,(-8L),3L,0L,(-8L),(-1L),0L},{0x5D9BD4DCL,1L,1L,0x7A0EE13BL,0L,0L,0L,0L,0x7A0EE13BL,1L}},{{0xBD0AB3AFL,0xBD0AB3AFL,0x0EAB5CD3L,(-6L),0xB563C765L,4L,8L,0xF0348DA3L,0x889F7E46L,0x7ED56E00L},{0x7A0EE13BL,6L,0xDB439F5FL,(-8L),3L,1L,8L,1L,0x0A9BAFADL,0xB3CAD41CL},{(-8L),0xBD0AB3AFL,(-1L),3L,0x7ED56E00L,0x0EAB5CD3L,0L,0x95C077EDL,0xBD0AB3AFL,0L}},{{(-1L),1L,0x7D45435EL,4L,0x889F7E46L,0xE0580F6DL,0L,(-8L),(-1L),0xEE4C8C86L},{0x831AE993L,0x1B35CAABL,1L,0xE0580F6DL,0xF0348DA3L,3L,0xF0348DA3L,0xE0580F6DL,1L,0x1B35CAABL},{0x34A37C9CL,0x95C077EDL,0L,0x7ED56E00L,8L,0x508EDDD7L,1L,0x34A37C9CL,(-8L),3L}},{{0x5D9BD4DCL,(-1L),0x95C2EEE3L,1L,4L,0x508EDDD7L,0xDB439F5FL,0L,1L,0x95C2EEE3L},{0x34A37C9CL,0x7D45435EL,(-8L),0L,0xB563C765L,3L,0x7ED56E00L,0x889F7E46L,0xF0348DA3L,8L},{0x831AE993L,6L,0L,0L,(-6L),0xE0580F6DL,0x95C2EEE3L,(-1L),0x0A9BAFADL,(-8L)}},{{(-1L),0x34A37C9CL,0x1B35CAABL,0xB3CAD41CL,0x0EAB5CD3L,0x0EAB5CD3L,0xB3CAD41CL,0x1B35CAABL,0x34A37C9CL,(-1L)},{(-8L),(-1L),0x7D45435EL,3L,0xBD0AB3AFL,1L,(-1L),0L,1L,0xEE4C8C86L},{0x3F973351L,(-6L),4L,0L,0x8EA8574AL,(-8L),0x5CC80A77L,(-1L),6L,0x0A9BAFADL}}};
                int i, j, k;
                if (l_1766[6][7][0].f2)
                {
                    struct S0 l_1868 = {0x5F9BL,0x01B97386L,0xAC59L,0UL,9UL,8L};
                    int32_t *l_1873[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1873[i] = &l_1872[2][0][3];
                    for (g_365.f6 = 0; (g_365.f6 <= 1); g_365.f6 += 1)
                    {
                        struct S1 ***l_1853 = &g_1688;
                        struct S1 ****l_1852 = &l_1853;
                        struct S1 *****l_1854[7][1] = {{&l_1852},{&l_1852},{&l_1852},{&l_1852},{&l_1852},{&l_1852},{&l_1852}};
                        int i, j;
                        g_1855[0] = l_1852;
                        l_1872[4][9][4] ^= (safe_div_func_uint64_t_u_u((g_153[g_365.f6] > (safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s(g_153[g_365.f6], (((~0xD65001C2AE079006LL) , (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((l_1868 , 1UL), 0)), (safe_lshift_func_int8_t_s_u(((g_1018[g_365.f6] <= (((((g_1018[g_365.f6] > (((l_1786.f3 | (-1L)) ^ l_1786.f4) == 0x9E77L)) | (**g_745)) <= p_12.f3) <= 0x148BL) , (*g_391))) && 0x95L), 1))))) >= l_1871[1][1][4]))), 0x4A63D2F7969D7DC9LL))), (-8L)));
                    }
                    l_1875++;
                    l_1886++;
                }
                else
                {
                    uint8_t ** const l_1906 = (void*)0;
                    uint8_t ** const *l_1905 = &l_1906;
                    uint8_t ** const **l_1904[3][3][10] = {{{&l_1905,&l_1905,&l_1905,&l_1905,(void*)0,&l_1905,&l_1905,&l_1905,(void*)0,&l_1905},{&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905},{&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905}},{{&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905},{&l_1905,&l_1905,&l_1905,(void*)0,&l_1905,(void*)0,(void*)0,&l_1905,(void*)0,&l_1905},{&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905}},{{&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,(void*)0,&l_1905,&l_1905},{(void*)0,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,(void*)0,&l_1905,&l_1905,&l_1905},{&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905,&l_1905}}};
                    uint64_t *l_1916 = &g_859[6].f2;
                    int32_t l_1917 = 1L;
                    int i, j, k;
                    l_1885 = ((((safe_mod_func_uint8_t_u_u(p_12.f5, (safe_mod_func_uint32_t_u_u(p_12.f6, ((l_1893 , (safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((((void*)0 != &l_1893) < ((((safe_sub_func_int16_t_s_s(((*g_1433) = ((safe_add_func_int16_t_s_s(((g_1907 = (void*)0) != (l_1912[1] = (g_1911 = l_1910))), (l_1917 = ((~((((safe_lshift_func_uint8_t_u_s((((*l_1916) = l_1871[1][1][4]) >= (l_1875 && 0xC013L)), l_1883[2][1][6])) & 0x50L) | (***g_1340)) | l_1786.f6)) == (*g_391))))) != l_1871[1][1][4])), l_1880)) < p_11) , l_1918) != (*g_940))), 0x18BDL)), l_1786.f6)), l_1786.f3))) & 1L))))) ^ 0x062CF9E8BFA08552LL) | 0x2CB5L) , l_1919);
                    for (g_853.f0 = 2; (g_853.f0 <= 8); g_853.f0 += 1)
                    {
                        int i;
                        p_12.f6 &= (((safe_add_func_uint8_t_u_u((((void*)0 != l_1922) & (safe_lshift_func_int16_t_s_u(p_11, (**g_745)))), (((p_12.f3 , 0x3CF54CEAL) != (safe_lshift_func_uint16_t_u_s(((!p_11) & ((**g_940) , 0xD319D7FCL)), l_1786.f1))) == p_12.f2))) , 0L) > p_12.f4);
                        (*g_645) = l_1786;
                    }
                }
                l_1929 = l_1928;
            }
        }
        for (g_97.f8 = 20; (g_97.f8 <= 32); g_97.f8 = safe_add_func_uint32_t_u_u(g_97.f8, 8))
        {
            uint32_t l_1935 = 0xDCE3FF50L;
            for (g_850.f1 = (-13); (g_850.f1 <= 1); g_850.f1++)
            {
                ++l_1935;
            }
        }
        (*l_1958) &= ((l_1872[4][9][4] = (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((l_1942 != (void*)0) <= ((**g_1908) & (safe_rshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u((!(l_1786.f2 & p_12.f7)), l_1786.f3)), (((**g_1055) = ((safe_unary_minus_func_int64_t_s(0L)) >= ((safe_div_func_int64_t_s_s((safe_add_func_uint16_t_u_u(p_12.f1, ((safe_mod_func_uint32_t_u_u(((**g_940) = (safe_div_func_uint64_t_u_u(0x2CDC5007C8A85F87LL, 0x4DBC71B5959469FDLL))), (-1L))) >= p_12.f0))), p_12.f6)) || p_12.f4))) > p_12.f3))))), p_12.f3)), l_1786.f5))) <= l_1957);
    }
    l_1786.f3 = l_1786.f5;
    return l_1959;
}







static uint16_t func_15(uint32_t p_16, uint8_t p_17, struct S1 p_18, int8_t p_19)
{
    for (g_91 = 1; (g_91 >= 0); g_91 -= 1)
    {
        uint32_t l_1725[6][6] = {{0x5676FE1CL,0x621C75C5L,0x621C75C5L,0x5676FE1CL,0x621C75C5L,0x621C75C5L},{0x5676FE1CL,0x621C75C5L,0x621C75C5L,0x5676FE1CL,0x621C75C5L,0x621C75C5L},{0x5676FE1CL,0x621C75C5L,0x621C75C5L,0x5676FE1CL,0x621C75C5L,0x621C75C5L},{0x5676FE1CL,0x621C75C5L,0x621C75C5L,0x5676FE1CL,0x621C75C5L,0x621C75C5L},{0x5676FE1CL,0x621C75C5L,0x621C75C5L,0x5676FE1CL,0x621C75C5L,0x621C75C5L},{0x5676FE1CL,0x621C75C5L,0x621C75C5L,0x5676FE1CL,0x621C75C5L,0x621C75C5L}};
        int i, j;
        for (g_858.f2 = 0; (g_858.f2 <= 1); g_858.f2 += 1)
        {
            int32_t l_1720 = 0x66A155B1L;
            int32_t *l_1721 = (void*)0;
            int32_t *l_1722 = &g_858.f6;
            int32_t *l_1723 = &g_854.f6;
            int32_t *l_1724[10] = {(void*)0,&g_97.f6,&g_97.f6,(void*)0,&g_97.f6,&g_97.f6,(void*)0,&g_97.f6,&g_97.f6,(void*)0};
            int i;
            ++l_1725[4][0];
        }
    }
    return (*g_391);
}







static uint16_t func_22(int8_t p_23)
{
    int8_t *l_76[6][2] = {{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77},{&g_77,&g_77}};
    uint32_t l_78[3][2];
    struct S1 l_163 = {0xA6F6121FL,9UL,1UL,4L,-9L,0xB15E2B98L,0xD90F720CL,2UL,2UL};
    int32_t l_1188 = 0x1DCDD7E2L;
    uint32_t l_1200 = 18446744073709551615UL;
    uint16_t l_1201 = 0x3BEAL;
    uint64_t * const l_1208 = &g_857.f2;
    int32_t l_1219[7][9][1] = {{{(-1L)},{0xC7DCF0CDL},{0xC7DCF0CDL},{(-1L)},{0xC7DCF0CDL},{0xC7DCF0CDL},{(-1L)},{0xC7DCF0CDL},{0xC7DCF0CDL}},{{(-1L)},{0xC7DCF0CDL},{0xC7DCF0CDL},{(-1L)},{0xC7DCF0CDL},{0xC7DCF0CDL},{(-1L)},{0xC7DCF0CDL},{0xC7DCF0CDL}},{{(-1L)},{0xC7DCF0CDL},{0xC7DCF0CDL},{(-1L)},{0xC7DCF0CDL},{0xC7DCF0CDL},{(-1L)},{0xC7DCF0CDL},{(-1L)}},{{0x312D3AB9L},{(-1L)},{(-1L)},{0x312D3AB9L},{(-1L)},{(-1L)},{0x312D3AB9L},{(-1L)},{(-1L)}},{{0x312D3AB9L},{(-1L)},{(-1L)},{0x312D3AB9L},{(-1L)},{(-1L)},{0x312D3AB9L},{(-1L)},{(-1L)}},{{0x312D3AB9L},{(-1L)},{(-1L)},{0x312D3AB9L},{(-1L)},{(-1L)},{0x312D3AB9L},{(-1L)},{(-1L)}},{{0x312D3AB9L},{(-1L)},{(-1L)},{0x312D3AB9L},{(-1L)},{(-1L)},{0x312D3AB9L},{(-1L)},{(-1L)}}};
    int32_t l_1236 = 1L;
    struct S0 ***l_1258 = &g_751[4][2];
    struct S0 ****l_1257 = &l_1258;
    struct S0 *****l_1256[7][8][2] = {{{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257}},{{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257}},{{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257}},{{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257}},{{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257}},{{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257}},{{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257},{&l_1257,&l_1257}}};
    int32_t *****l_1286 = &g_345;
    int64_t l_1287[9][10] = {{0x33B7281836C63909LL,0x2AC13891B62D0068LL,9L,0x3B6DA95FB85EE6E1LL,(-6L),(-9L),(-1L),(-1L),0xE49EA3AFA7E528C4LL,0x1B128165240B1AB3LL},{0x5300DCC27E65E3A3LL,0x5CCCB406F86F0B68LL,9L,(-6L),(-2L),(-1L),1L,7L,1L,0x41A4227EC220C321LL},{1L,(-1L),(-6L),(-1L),0x2AC13891B62D0068LL,(-1L),(-1L),(-4L),0x5300DCC27E65E3A3LL,0xFEBF276095E7FC62LL},{0x5CCCB406F86F0B68LL,(-6L),0x9859C7F7E98751FFLL,0xFEBF276095E7FC62LL,1L,0xFEBF276095E7FC62LL,0x9859C7F7E98751FFLL,(-6L),0x5CCCB406F86F0B68LL,0x60EB91A635137B8CLL},{(-6L),1L,7L,0x2AC13891B62D0068LL,(-1L),(-4L),0xCBE81EA13A8E4C05LL,(-7L),(-6L),0xE49EA3AFA7E528C4LL},{0x33B7281836C63909LL,(-1L),(-6L),0x2AC13891B62D0068LL,0x9859C7F7E98751FFLL,0x60EB91A635137B8CLL,0x1B128165240B1AB3LL,9L,0xCBE81EA13A8E4C05LL,1L},{(-1L),(-7L),(-1L),0x25AD41A4EBEE7F51LL,9L,0x33B7281836C63909LL,1L,(-1L),0x9859C7F7E98751FFLL,0x5300DCC27E65E3A3LL},{0x5CCCB406F86F0B68LL,(-1L),0x5300DCC27E65E3A3LL,0x45E3883D2A814063LL,(-1L),(-1L),0x45E3883D2A814063LL,0x5300DCC27E65E3A3LL,(-1L),0x5CCCB406F86F0B68LL},{0x3B6DA95FB85EE6E1LL,0xFEBF276095E7FC62LL,(-4L),0x776C1EA144AF4573LL,7L,(-2L),1L,1L,0x293730127796858FLL,0x1B128165240B1AB3LL}};
    uint8_t ***l_1298 = (void*)0;
    const uint32_t l_1357 = 1UL;
    uint32_t l_1404 = 18446744073709551608UL;
    uint32_t l_1463 = 0x3F04E30DL;
    uint8_t l_1524 = 255UL;
    uint16_t ****l_1586 = &g_1584;
    int8_t l_1640 = 0xB9L;
    struct S0 l_1668[2][2] = {{{0L,0xA19ECF3DL,-3L,0x9E4B0B643754F3D2LL,5UL,0x27B70827726BD783LL},{0L,0xA19ECF3DL,-3L,0x9E4B0B643754F3D2LL,5UL,0x27B70827726BD783LL}},{{0L,0xA19ECF3DL,-3L,0x9E4B0B643754F3D2LL,5UL,0x27B70827726BD783LL},{0L,0xA19ECF3DL,-3L,0x9E4B0B643754F3D2LL,5UL,0x27B70827726BD783LL}}};
    int32_t l_1677[1][6] = {{0x9BF77B0FL,(-1L),(-1L),0x9BF77B0FL,(-1L),(-1L)}};
    uint64_t l_1685 = 7UL;
    uint32_t *l_1695 = (void*)0;
    uint32_t *l_1696 = (void*)0;
    uint32_t *l_1697 = &g_852.f0;
    uint32_t l_1698 = 0x50B656BEL;
    int32_t *l_1700 = (void*)0;
    int32_t l_1701[4][9] = {{8L,0xE64020B3L,8L,(-1L),8L,0xE64020B3L,8L,(-1L),8L},{0x7141F55EL,0xF833CFA9L,0x21FF3CF5L,0x21FF3CF5L,0xF833CFA9L,0x7141F55EL,(-5L),(-5L),0x7141F55EL},{0xAD5F528BL,(-1L),(-1L),(-1L),0xAD5F528BL,(-1L),(-1L),(-1L),0xAD5F528BL},{0xF833CFA9L,0x21FF3CF5L,0x21FF3CF5L,0xF833CFA9L,0x7141F55EL,(-5L),(-5L),0x7141F55EL,0xF833CFA9L}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_78[i][j] = 18446744073709551612UL;
    }
    if (((safe_div_func_uint8_t_u_u(p_23, ((safe_div_func_int32_t_s_s(g_2, 0x5631CD1AL)) , (l_1188 ^= (65532UL ^ ((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s((func_31((((safe_mul_func_uint8_t_u_u(((func_38(p_23, func_41(func_45((((safe_sub_func_int8_t_s_s(g_2, (((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(func_56(((safe_mod_func_uint64_t_u_u(p_23, (~(safe_lshift_func_uint8_t_u_u((((g_2 & ((~(safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((g_77 = ((safe_lshift_func_uint8_t_u_s(0x1BL, p_23)) ^ 0L)), g_2)) && 0UL) != p_23), l_78[0][1])) || g_77), p_23)) , 0x7AL) > g_2), p_23))) , 0x53AF4B50L)) | l_78[1][1]) || l_78[0][1]), p_23))))) & p_23)), g_91)), 15)), 0x5DAA1C1EL)) , 0x4FF5L) ^ l_78[0][1]))) != (-8L)) , l_78[1][1]), l_78[0][1]), g_97.f1, l_78[0][1])) , l_78[1][1]) > l_78[0][1]), 0xF0L)) == l_78[0][1]) , l_78[0][1]), l_78[2][0], p_23, l_163) , 0xF6AADEC6L))) & 0x2911C7BD95FC5676LL), p_23)) && (**g_1055))))))) , l_163.f4))
    {
        const uint32_t l_1202 = 0UL;
        int16_t l_1215 = 0x1740L;
        int32_t l_1217 = 0x090CFC96L;
        int32_t l_1218[7][5][2] = {{{1L,(-9L)},{6L,6L},{(-9L),1L},{0L,0x81810957L},{(-10L),6L}},{{0L,(-10L)},{1L,(-6L)},{1L,(-10L)},{0L,6L},{(-10L),0x81810957L}},{{0L,1L},{(-9L),6L},{6L,(-9L)},{1L,0L},{0x81810957L,(-10L)}},{{6L,0L},{(-10L),1L},{(-6L),1L},{(-10L),0L},{6L,(-10L)}},{{0x81810957L,0L},{1L,(-9L)},{6L,6L},{(-9L),1L},{0L,0x81810957L}},{{(-10L),6L},{0L,(-10L)},{1L,(-6L)},{1L,(-10L)},{0L,6L}},{{(-10L),0x81810957L},{0L,1L},{(-9L),6L},{6L,(-9L)},{1L,0L}}};
        int8_t l_1235[5];
        uint64_t l_1237 = 2UL;
        uint64_t l_1250 = 0x94930F239287A079LL;
        uint32_t *l_1273 = &g_242;
        struct S1 l_1288 = {6UL,0xCD2F88E7FC3AE205LL,0x5DEB89DD5F82E69FLL,0x7EBEAC4CL,-3L,0x65CF8C7BL,-1L,0xB4010F47L,0x782EL};
        uint8_t ***l_1297 = &g_1055;
        int32_t **l_1309 = (void*)0;
        int64_t *l_1380 = &g_855.f4;
        uint8_t l_1462 = 4UL;
        uint64_t l_1465 = 0xD2B5011A6D072D3CLL;
        uint16_t l_1517[3][4] = {{0xAF69L,0xAF69L,0xAF69L,0xAF69L},{0xAF69L,0xAF69L,0xAF69L,0xAF69L},{0xAF69L,0xAF69L,0xAF69L,0xAF69L}};
        struct S1 **l_1519 = &g_645;
        int8_t l_1551 = 5L;
        struct S0 * const l_1558[3][8][1] = {{{&g_298[4][1]},{(void*)0},{&g_298[4][1]},{&g_298[1][3]},{&g_298[7][3]},{&g_298[7][3]},{&g_298[1][3]},{&g_298[4][1]}},{{(void*)0},{&g_298[4][1]},{&g_298[1][3]},{&g_298[7][3]},{&g_298[7][3]},{&g_298[1][3]},{&g_298[1][3]},{&g_298[1][3]}},{{&g_298[1][3]},{(void*)0},{&g_298[6][1]},{&g_298[6][1]},{(void*)0},{&g_298[1][3]},{&g_298[1][3]},{&g_298[1][3]}}};
        int8_t l_1611 = 1L;
        int16_t l_1623 = 0L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1235[i] = 0xB6L;
    }
    else
    {
        int32_t *l_1637 = &g_854.f6;
        int32_t l_1642[8][7] = {{0xAFE56A71L,0L,0xAFE56A71L,0xAFE56A71L,0L,0xAFE56A71L,0xAFE56A71L},{0L,0L,0xF448B4CFL,0L,0L,0xF448B4CFL,0L},{0L,0xAFE56A71L,0xAFE56A71L,0L,0xAFE56A71L,0xAFE56A71L,0L},{(-5L),0L,(-5L),(-5L),0L,(-5L),(-5L)},{0L,0L,1L,0L,0L,1L,0L},{0L,(-5L),(-5L),0L,(-5L),(-5L),0L},{0xAFE56A71L,0L,0xAFE56A71L,0xAFE56A71L,0L,0xAFE56A71L,0xAFE56A71L},{0L,0L,0xF448B4CFL,0L,0L,0xF448B4CFL,0L}};
        uint8_t l_1647 = 0x09L;
        uint8_t *l_1658[4][6] = {{&l_1647,&l_1647,&l_1647,&l_1647,&l_1647,&l_1647},{&l_1647,&l_1647,&l_1647,&l_1647,&l_1647,&l_1647},{&l_1647,&l_1647,&l_1647,&l_1647,&l_1647,&l_1647},{&l_1647,&l_1647,&l_1647,&l_1647,&l_1647,&l_1647}};
        const int64_t *****l_1663 = &g_1659;
        int i, j;
        l_1637 = ((**g_346) = l_1637);
        for (g_365.f4 = (-2); (g_365.f4 == 26); g_365.f4 = safe_add_func_uint32_t_u_u(g_365.f4, 1))
        {
            int32_t *l_1641 = (void*)0;
            int32_t *l_1643 = &g_365.f6;
            int32_t *l_1644 = (void*)0;
            int32_t *l_1645[4][1] = {{(void*)0},{&g_856.f6},{(void*)0},{&g_856.f6}};
            int i, j;
            --l_1647;
        }
        (*l_1663) = (((**g_1432) = (((safe_lshift_func_int16_t_s_s((**g_1432), (*l_1637))) != (!(+(l_1642[2][3] = ((***g_1340)++))))) & (l_1219[5][3][0] = 0L))) , g_1659);
        return (*l_1637);
    }
    if ((((*g_391) = ((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((l_1668[1][1] , ((((((**g_1432) = (&g_750 != (((**g_940) = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((((*g_1433) >= (g_856.f5 <= g_850.f5)) , 0x57L) | g_855.f2), (safe_mul_func_int16_t_s_s((p_23 > p_23), (*g_1433))))), l_1677[0][2])), 7))) , &g_750))) , &l_1287[5][3]) == &l_1287[5][3]) < 0xAACD9400L) >= 0xB751D4807824AD43LL)), p_23)), 6)) , 0x051BL)) == g_1678))
    {
        uint16_t l_1679 = 0x31AAL;
        int32_t *l_1682 = &l_1677[0][3];
        int32_t *l_1683[8] = {&l_1219[0][7][0],&l_1219[0][7][0],&l_1219[0][7][0],&l_1219[0][7][0],&l_1219[0][7][0],&l_1219[0][7][0],&l_1219[0][7][0],&l_1219[0][7][0]};
        int8_t l_1684 = (-5L);
        int i;
        l_1679++;
        --l_1685;
    }
    else
    {
        struct S1 ***l_1689 = (void*)0;
        struct S1 ***l_1690 = &g_1688;
        (*l_1690) = g_1688;
    }
    l_1236 ^= (((safe_sub_func_int32_t_s_s(p_23, (safe_unary_minus_func_int64_t_s(((0UL != (((((*g_297) , &g_1340) != ((!((*l_1697) = ((**g_940) = (**g_940)))) , &g_1340)) >= l_1698) & (l_1695 != (g_1699 = &g_543)))) , p_23))))) <= p_23) ^ 18446744073709551615UL);
    return l_1701[0][1];
}







static uint8_t func_31(uint32_t p_32, int32_t p_33, int8_t p_34, struct S1 p_35)
{
    const int64_t l_181[4] = {(-1L),(-1L),(-1L),(-1L)};
    int32_t l_191 = 1L;
    uint16_t *l_192 = &g_153[0];
    int64_t **l_201 = (void*)0;
    int64_t **l_202 = (void*)0;
    int64_t *l_204 = &g_118;
    int64_t **l_203 = &l_204;
    int32_t **l_205[7][8][4] = {{{(void*)0,(void*)0,&g_178,&g_178},{(void*)0,(void*)0,&g_178,(void*)0},{(void*)0,&g_178,(void*)0,(void*)0},{(void*)0,(void*)0,&g_178,&g_178},{(void*)0,(void*)0,&g_178,(void*)0},{(void*)0,&g_178,&g_178,(void*)0},{(void*)0,(void*)0,(void*)0,&g_178},{(void*)0,(void*)0,&g_178,(void*)0}},{{(void*)0,&g_178,&g_178,(void*)0},{(void*)0,(void*)0,&g_178,&g_178},{(void*)0,(void*)0,&g_178,(void*)0},{(void*)0,&g_178,(void*)0,(void*)0},{(void*)0,(void*)0,&g_178,&g_178},{(void*)0,(void*)0,&g_178,(void*)0},{(void*)0,&g_178,&g_178,(void*)0},{(void*)0,(void*)0,(void*)0,&g_178}},{{(void*)0,(void*)0,&g_178,(void*)0},{(void*)0,&g_178,&g_178,(void*)0},{(void*)0,(void*)0,&g_178,&g_178},{(void*)0,(void*)0,&g_178,(void*)0},{(void*)0,&g_178,(void*)0,(void*)0},{(void*)0,&g_178,&g_178,&g_178},{(void*)0,(void*)0,(void*)0,&g_178},{(void*)0,&g_178,&g_178,(void*)0}},{{&g_178,&g_178,&g_178,&g_178},{&g_178,&g_178,(void*)0,(void*)0},{&g_178,&g_178,&g_178,&g_178},{&g_178,(void*)0,&g_178,&g_178},{&g_178,&g_178,(void*)0,&g_178},{&g_178,&g_178,&g_178,&g_178},{&g_178,&g_178,&g_178,&g_178},{(void*)0,(void*)0,(void*)0,&g_178}},{{(void*)0,&g_178,&g_178,(void*)0},{&g_178,&g_178,&g_178,&g_178},{&g_178,&g_178,(void*)0,(void*)0},{&g_178,&g_178,&g_178,&g_178},{&g_178,(void*)0,&g_178,&g_178},{&g_178,&g_178,(void*)0,&g_178},{&g_178,&g_178,&g_178,&g_178},{&g_178,&g_178,&g_178,&g_178}},{{(void*)0,(void*)0,(void*)0,&g_178},{(void*)0,&g_178,&g_178,(void*)0},{&g_178,&g_178,&g_178,&g_178},{&g_178,&g_178,(void*)0,(void*)0},{&g_178,&g_178,&g_178,&g_178},{&g_178,(void*)0,&g_178,&g_178},{&g_178,&g_178,(void*)0,&g_178},{&g_178,&g_178,&g_178,&g_178}},{{&g_178,&g_178,&g_178,&g_178},{(void*)0,(void*)0,(void*)0,&g_178},{(void*)0,&g_178,&g_178,(void*)0},{&g_178,&g_178,&g_178,&g_178},{&g_178,&g_178,(void*)0,(void*)0},{&g_178,&g_178,&g_178,&g_178},{&g_178,(void*)0,&g_178,&g_178},{&g_178,&g_178,(void*)0,&g_178}}};
    int32_t ***l_206 = &l_205[3][6][0];
    struct S0 l_218[7][4] = {{{0xDCCDL,4294967294UL,9L,18446744073709551613UL,251UL,-7L},{0x79F7L,0x8797E1D4L,0L,18446744073709551615UL,0UL,0xAAFE1426F2505359LL},{1L,0x759B4EE9L,-1L,0x47B0158743B8E4AFLL,0UL,0x8AEBE6639B799871LL},{1L,0x759B4EE9L,-1L,0x47B0158743B8E4AFLL,0UL,0x8AEBE6639B799871LL}},{{0x7D7CL,4294967287UL,9L,0x5B1210621FF5390BLL,8UL,0x09C54EC0522D9FCFLL},{0x7D7CL,4294967287UL,9L,0x5B1210621FF5390BLL,8UL,0x09C54EC0522D9FCFLL},{0xDCCDL,4294967294UL,9L,18446744073709551613UL,251UL,-7L},{1L,0x759B4EE9L,-1L,0x47B0158743B8E4AFLL,0UL,0x8AEBE6639B799871LL}},{{0xA30DL,0x6A78DC8BL,0xB830L,18446744073709551615UL,1UL,0xDB9FF8E19E864CEELL},{0x79F7L,0x8797E1D4L,0L,18446744073709551615UL,0UL,0xAAFE1426F2505359LL},{0xA30DL,0x6A78DC8BL,0xB830L,18446744073709551615UL,1UL,0xDB9FF8E19E864CEELL},{0xDCCDL,4294967294UL,9L,18446744073709551613UL,251UL,-7L}},{{0xA30DL,0x6A78DC8BL,0xB830L,18446744073709551615UL,1UL,0xDB9FF8E19E864CEELL},{0xDCCDL,4294967294UL,9L,18446744073709551613UL,251UL,-7L},{0xDCCDL,4294967294UL,9L,18446744073709551613UL,251UL,-7L},{0xA30DL,0x6A78DC8BL,0xB830L,18446744073709551615UL,1UL,0xDB9FF8E19E864CEELL}},{{0x7D7CL,4294967287UL,9L,0x5B1210621FF5390BLL,8UL,0x09C54EC0522D9FCFLL},{0xDCCDL,4294967294UL,9L,18446744073709551613UL,251UL,-7L},{1L,0x759B4EE9L,-1L,0x47B0158743B8E4AFLL,0UL,0x8AEBE6639B799871LL},{0xDCCDL,4294967294UL,9L,18446744073709551613UL,251UL,-7L}},{{0xDCCDL,4294967294UL,9L,18446744073709551613UL,251UL,-7L},{0x79F7L,0x8797E1D4L,0L,18446744073709551615UL,0UL,0xAAFE1426F2505359LL},{1L,0x759B4EE9L,-1L,0x47B0158743B8E4AFLL,0UL,0x8AEBE6639B799871LL},{1L,0x759B4EE9L,-1L,0x47B0158743B8E4AFLL,0UL,0x8AEBE6639B799871LL}},{{0x7D7CL,4294967287UL,9L,0x5B1210621FF5390BLL,8UL,0x09C54EC0522D9FCFLL},{0x7D7CL,4294967287UL,9L,0x5B1210621FF5390BLL,8UL,0x09C54EC0522D9FCFLL},{0xDCCDL,4294967294UL,9L,18446744073709551613UL,251UL,-7L},{1L,0x759B4EE9L,-1L,0x47B0158743B8E4AFLL,0UL,0x8AEBE6639B799871LL}}};
    const uint32_t l_219 = 0xDCC66179L;
    int8_t l_235 = 4L;
    uint8_t l_408[2];
    struct S1 l_411 = {0x91393D2EL,0xE0552F0B213FFA74LL,1UL,0x1BA438DEL,-1L,0L,0L,0xAE35911AL,5UL};
    uint8_t l_439 = 0x8AL;
    int16_t l_561 = (-10L);
    int32_t l_575[5][2] = {{0xA5B71CFBL,0xA5B71CFBL},{0xA5B71CFBL,0xA5B71CFBL},{0xA5B71CFBL,0xA5B71CFBL},{0xA5B71CFBL,0xA5B71CFBL},{0xA5B71CFBL,0xA5B71CFBL}};
    int32_t ** const *l_592 = &l_205[3][6][0];
    int32_t ** const **l_591 = &l_592;
    int32_t ** const ***l_590 = &l_591;
    uint64_t l_681 = 18446744073709551615UL;
    struct S0 **l_695 = (void*)0;
    int32_t *****l_721 = &g_345;
    uint64_t l_737 = 1UL;
    int64_t l_828[8][2][9] = {{{3L,3L,(-1L),(-1L),(-1L),0L,0x0C26C3B47816E10ELL,3L,1L},{1L,0x2CBFE32D858888F9LL,1L,(-1L),3L,1L,0L,0L,1L}},{{0x5FB4F89C3786DD71LL,0x156000BCBA515346LL,3L,0x156000BCBA515346LL,0x5FB4F89C3786DD71LL,0x0C26C3B47816E10ELL,1L,0x5FB4F89C3786DD71LL,1L},{0L,(-7L),(-1L),1L,0x514D198463E7C65CLL,3L,1L,0L,(-1L)}},{{(-7L),0L,0x0C26C3B47816E10ELL,0x514D198463E7C65CLL,0x514D198463E7C65CLL,0x0C26C3B47816E10ELL,0L,(-7L),(-1L)},{0x156000BCBA515346LL,0x5FB4F89C3786DD71LL,0x0C26C3B47816E10ELL,1L,0x5FB4F89C3786DD71LL,1L,0x514D198463E7C65CLL,0x156000BCBA515346LL,0x7F62653E6EFF60DCLL}},{{0x156000BCBA515346LL,0L,(-1L),0x156000BCBA515346LL,(-7L),0x7F62653E6EFF60DCLL,(-7L),0x156000BCBA515346LL,(-1L)},{(-7L),(-7L),3L,0x5FB4F89C3786DD71LL,0x3911C2FE6CC322AALL,0x7F62653E6EFF60DCLL,0x514D198463E7C65CLL,(-7L),(-1L)}},{{0L,0x156000BCBA515346LL,(-1L),0x5FB4F89C3786DD71LL,(-7L),1L,0L,0L,1L},{0x5FB4F89C3786DD71LL,0x156000BCBA515346LL,3L,0x156000BCBA515346LL,0x5FB4F89C3786DD71LL,0x0C26C3B47816E10ELL,1L,0x5FB4F89C3786DD71LL,1L}},{{0L,(-7L),(-1L),1L,0x514D198463E7C65CLL,3L,1L,0L,(-1L)},{(-7L),0L,0x0C26C3B47816E10ELL,0x514D198463E7C65CLL,0x514D198463E7C65CLL,0x0C26C3B47816E10ELL,0L,(-7L),(-1L)}},{{0x156000BCBA515346LL,0x5FB4F89C3786DD71LL,0x0C26C3B47816E10ELL,1L,0x5FB4F89C3786DD71LL,1L,0x514D198463E7C65CLL,0x156000BCBA515346LL,0x7F62653E6EFF60DCLL},{0x156000BCBA515346LL,0L,(-1L),0x156000BCBA515346LL,(-7L),0x7F62653E6EFF60DCLL,(-7L),0x156000BCBA515346LL,(-1L)}},{{(-7L),(-7L),3L,0x5FB4F89C3786DD71LL,0x3911C2FE6CC322AALL,0x7F62653E6EFF60DCLL,0x514D198463E7C65CLL,(-7L),(-1L)},{0L,0x156000BCBA515346LL,(-1L),0x5FB4F89C3786DD71LL,(-7L),1L,0L,0L,1L}}};
    struct S1 * const *l_845[6] = {&g_645,&g_645,&g_645,&g_645,&g_645,&g_645};
    int64_t l_908 = 1L;
    int32_t l_934[5];
    int32_t l_949[8][5] = {{0L,0x9A64EE6DL,0x400076B6L,0x9A64EE6DL,0L},{0L,(-8L),0L,0L,(-8L)},{0L,(-5L),0xA01E88BFL,0x9A64EE6DL,0xA01E88BFL},{(-8L),(-8L),0x75B0EE8DL,(-8L),(-8L)},{0xA01E88BFL,0x9A64EE6DL,0xA01E88BFL,(-5L),0L},{(-8L),0L,0L,(-8L),0L},{0L,0x9A64EE6DL,0x400076B6L,0x9A64EE6DL,0L},{0L,(-8L),0L,0L,(-8L)}};
    const uint16_t *l_1025 = &g_153[0];
    const uint16_t * const *l_1024[5];
    const uint16_t * const **l_1023 = &l_1024[0];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_408[i] = 0xB1L;
    for (i = 0; i < 5; i++)
        l_934[i] = 0x7F997D34L;
    for (i = 0; i < 5; i++)
        l_1024[i] = &l_1025;
lbl_755:
    for (g_97.f4 = (-8); (g_97.f4 != (-8)); g_97.f4 = safe_add_func_int16_t_s_s(g_97.f4, 9))
    {
        return g_92;
    }
    for (g_104 = (-29); (g_104 > 45); g_104++)
    {
        uint8_t l_168 = 0xE1L;
        int64_t *l_171 = &g_118;
        int64_t *l_172 = &g_173;
        uint8_t l_174 = 0UL;
        g_90 ^= ((l_168 , (g_97.f4 == ((safe_add_func_uint16_t_u_u(0x9680L, 0UL)) , l_168))) == ((*l_172) = ((*l_171) = g_97.f6)));
        if (l_174)
            continue;
    }
    if (((**g_177) ^= (safe_mul_func_uint8_t_u_u((g_177 == ((*l_206) = (((safe_mod_func_int32_t_s_s((l_181[2] < (((((g_77 || (safe_mul_func_int8_t_s_s(((&l_181[2] != ((*l_203) = ((safe_lshift_func_int8_t_s_s((((safe_unary_minus_func_int16_t_s(0x61A9L)) >= (p_35.f8 = (safe_sub_func_int8_t_s_s(4L, ((safe_add_func_int64_t_s_s((g_97.f8 | (((*l_192)--) | (safe_div_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u((l_181[3] | (safe_div_func_uint64_t_u_u(p_35.f4, 0x9F626814382FC2C6LL))), 0L)) || g_97.f0) , 0xD269C2A3L) && 0UL), 0x49L)))), p_35.f8)) != l_181[2]))))) != l_181[1]), 2)) , (void*)0))) , (-1L)), 0xA6L))) <= 0x66L) || 0x4FCE7EEAL) , 0xB02FL) | 0L)), p_35.f7)) , l_181[1]) , l_205[3][6][0]))), l_181[2]))))
    {
        int32_t ****l_224 = &l_206;
        uint16_t *l_233 = &g_92;
        int32_t l_238 = 0x23A12770L;
        int32_t l_241 = (-1L);
        const int64_t *l_277 = &g_97.f4;
        int16_t *l_295 = &l_218[6][3].f2;
        int8_t *l_339 = &g_239;
        uint16_t l_403 = 0x35F5L;
        uint16_t l_451 = 0x7B75L;
        int32_t ****l_486 = (void*)0;
        int64_t l_489 = 0L;
        int32_t l_491 = (-1L);
        int32_t l_495 = (-2L);
        int32_t l_496 = 0x0F3C143BL;
        int32_t l_497[10];
        uint16_t l_498 = 0UL;
        struct S0 **l_511 = &g_297;
        uint64_t l_548 = 18446744073709551614UL;
        uint32_t l_579 = 1UL;
        int64_t l_621[2];
        struct S1 l_649 = {0x41C425DDL,1UL,0UL,0x2318AB3CL,-7L,0L,4L,1UL,0x81FBL};
        int64_t l_682 = 0xF07962739B0DDD3BLL;
        int8_t l_683 = 6L;
        struct S0 **l_692 = &g_297;
        uint32_t *l_707 = &g_242;
        uint32_t l_708 = 0xF2DBF79AL;
        int i;
        for (i = 0; i < 10; i++)
            l_497[i] = 9L;
        for (i = 0; i < 2; i++)
            l_621[i] = (-6L);
        if (((safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s(((l_218[6][3] , (p_35.f6 | l_219)) != (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_192) = ((*l_233) ^= ((&g_177 != ((*l_224) = &g_177)) > ((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((0x15554DE583D3069CLL & (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((**g_177) != ((((g_234 = (((p_35.f8 >= (l_192 == l_233)) < g_104) , l_204)) == l_204) , 0UL) ^ g_118)), 0x5196L)), 0x4CL))) || g_97.f2) == g_118), g_153[1])), g_97.f4)) | l_235)))), p_35.f6)), 5))))) | p_35.f5), p_35.f4)) > p_35.f3), 3)) | p_35.f8), (-10L))), g_90)), 255UL)) >= p_32))
        {
            int32_t l_263 = (-1L);
            uint32_t * const l_367 = &g_242;
            struct S0 l_375[10][7][3] = {{{{0xEEFFL,0UL,1L,4UL,255UL,-2L},{1L,0xF86D66ADL,0xC904L,0x08A6282CD812B562LL,0UL,0x1F77C40B2AE9A6A0LL},{6L,0x8304BA9EL,5L,0xFDB6B158CEC235C9LL,0x9BL,0x5BE9D4918EEBFF7DLL}},{{0L,0xE623DF4EL,1L,0xB5E6E2522F59E23ELL,0x93L,0x14B37D2776785EDFLL},{-1L,0x47AB530AL,0xA6C8L,1UL,0x10L,7L},{0x3EE3L,0x9C4B39CBL,0x23D4L,18446744073709551612UL,0xF2L,0xB8970C0A1ED84A09LL}},{{0L,0x8EB9621DL,0L,0UL,0UL,0x165C0020026B5087LL},{-1L,0x7C041B17L,0x9657L,0xE7E7E8FBAC872A51LL,0x8FL,1L},{0x892AL,0xD1924F3BL,0x39B0L,0x27F44DA31ED1E823LL,0UL,0xE88AB914D10479E6LL}},{{0xEEE9L,0UL,0x5ED4L,18446744073709551612UL,0xC2L,0x25C5ECB5E790A7A4LL},{0x3509L,0xCE9071DCL,0x9AD1L,0xF48234757DE3A5FBLL,1UL,0x9C1B7322BF575D46LL},{0x3509L,0xCE9071DCL,0x9AD1L,0xF48234757DE3A5FBLL,1UL,0x9C1B7322BF575D46LL}},{{1L,4294967295UL,-10L,0xE3EB1A200B15A4E9LL,255UL,0x7B932794AB9A405DLL},{0xAC91L,0x2D1C0889L,0L,0x2DF1A81D6DDEB396LL,0x7AL,0L},{0x7AD2L,0x0A55C250L,4L,0UL,0xC8L,-1L}},{{-1L,0x77A19276L,6L,0xD2177A27294CD86ELL,1UL,-1L},{0L,0xE623DF4EL,1L,0xB5E6E2522F59E23ELL,0x93L,0x14B37D2776785EDFLL},{0L,4294967295UL,0xC818L,8UL,0x24L,0x2DA2580746486A36LL}},{{0x892AL,0xD1924F3BL,0x39B0L,0x27F44DA31ED1E823LL,0UL,0xE88AB914D10479E6LL},{9L,4294967291UL,1L,0x45FCD5E2840A634CLL,0x9EL,1L},{0xE95EL,0UL,0xBCC8L,18446744073709551615UL,250UL,-6L}}},{{{0x3C2FL,4294967287UL,1L,0x88BCF91D977C2E0CLL,0xECL,-6L},{0x3509L,0xCE9071DCL,0x9AD1L,0xF48234757DE3A5FBLL,1UL,0x9C1B7322BF575D46LL},{-1L,0x27BACAAAL,0xBC4FL,0xEBD9461649A4F330LL,0UL,0L}},{{0x6340L,0xDD50E2D9L,0xA25CL,0xD7BF495CD00E1A1BLL,0UL,0x119ABA74D19CB0F0LL},{9L,4294967291UL,1L,0x45FCD5E2840A634CLL,0x9EL,1L},{6L,0x8304BA9EL,5L,0xFDB6B158CEC235C9LL,0x9BL,0x5BE9D4918EEBFF7DLL}},{{0xEEE9L,0UL,0x5ED4L,18446744073709551612UL,0xC2L,0x25C5ECB5E790A7A4LL},{0L,0xE623DF4EL,1L,0xB5E6E2522F59E23ELL,0x93L,0x14B37D2776785EDFLL},{8L,0UL,0x9117L,0xC8B28DB9A14C3500LL,255UL,0x7771C0A4F64A20EFLL}},{{0xA817L,8UL,0x8286L,9UL,4UL,0x4CA9FEE52BB2FA91LL},{-1L,0x7C041B17L,0x9657L,0xE7E7E8FBAC872A51LL,0x8FL,1L},{0xA817L,8UL,0x8286L,9UL,4UL,0x4CA9FEE52BB2FA91LL}},{{-1L,0x47AB530AL,0xA6C8L,1UL,0x10L,7L},{0x7222L,1UL,0L,0xB81F295BE7593958LL,0UL,1L},{0x41C2L,4294967295UL,1L,6UL,253UL,0x5FF2AC0B9D952C03LL}},{{1L,4294967295UL,-10L,0xE3EB1A200B15A4E9LL,255UL,0x7B932794AB9A405DLL},{0xC592L,4294967295UL,1L,0xC80E120C080BE2E1LL,252UL,1L},{6L,0x8304BA9EL,5L,0xFDB6B158CEC235C9LL,0x9BL,0x5BE9D4918EEBFF7DLL}},{{-1L,0x77A19276L,6L,0xD2177A27294CD86ELL,1UL,-1L},{0xEEE9L,0UL,0x5ED4L,18446744073709551612UL,0xC2L,0x25C5ECB5E790A7A4LL},{0x7222L,1UL,0L,0xB81F295BE7593958LL,0UL,1L}}},{{{0x68F0L,0x6BED0EE9L,0xEE71L,0UL,2UL,0x48D079E9538959A9LL},{0x2B2EL,0xA0155C86L,0L,1UL,253UL,-8L},{0xE95EL,0UL,0xBCC8L,18446744073709551615UL,250UL,-6L}},{{-1L,0x77A19276L,6L,0xD2177A27294CD86ELL,1UL,-1L},{0L,0xB650E995L,4L,0x686AA94C0A7CF92BLL,0xA4L,-1L},{0x3EE3L,0x9C4B39CBL,0x23D4L,18446744073709551612UL,0xF2L,0xB8970C0A1ED84A09LL}},{{1L,4294967295UL,-10L,0xE3EB1A200B15A4E9LL,255UL,0x7B932794AB9A405DLL},{9L,4294967291UL,1L,0x45FCD5E2840A634CLL,0x9EL,1L},{0x7AD2L,0x0A55C250L,4L,0UL,0xC8L,-1L}},{{-1L,0x47AB530AL,0xA6C8L,1UL,0x10L,7L},{-1L,0x47AB530AL,0xA6C8L,1UL,0x10L,7L},{-1L,0x27BACAAAL,0xBC4FL,0xEBD9461649A4F330LL,0UL,0L}},{{0xA817L,8UL,0x8286L,9UL,4UL,0x4CA9FEE52BB2FA91LL},{1L,0UL,0xAE36L,0UL,0xAEL,0x06AE2C2784677EECLL},{0x68F0L,0x6BED0EE9L,0xEE71L,0UL,2UL,0x48D079E9538959A9LL}},{{0xEEE9L,0UL,0x5ED4L,18446744073709551612UL,0xC2L,0x25C5ECB5E790A7A4LL},{0L,0xB650E995L,4L,0x686AA94C0A7CF92BLL,0xA4L,-1L},{0x41C2L,4294967295UL,1L,6UL,253UL,0x5FF2AC0B9D952C03LL}},{{0x6340L,0xDD50E2D9L,0xA25CL,0xD7BF495CD00E1A1BLL,0UL,0x119ABA74D19CB0F0LL},{-1L,0x7C041B17L,0x9657L,0xE7E7E8FBAC872A51LL,0x8FL,1L},{0x424CL,4294967295UL,-9L,0x465790289039B585LL,0UL,0xE49B540DE7AC40E2LL}}},{{{0x3C2FL,4294967287UL,1L,0x88BCF91D977C2E0CLL,0xECL,-6L},{0xEEE9L,0UL,0x5ED4L,18446744073709551612UL,0xC2L,0x25C5ECB5E790A7A4LL},{0x41C2L,4294967295UL,1L,6UL,253UL,0x5FF2AC0B9D952C03LL}},{{0x892AL,0xD1924F3BL,0x39B0L,0x27F44DA31ED1E823LL,0UL,0xE88AB914D10479E6LL},{0x618CL,0xF81281AEL,0x043EL,1UL,0UL,0x9DCE7A24EDE3030BLL},{0x68F0L,0x6BED0EE9L,0xEE71L,0UL,2UL,0x48D079E9538959A9LL}},{{-1L,0x77A19276L,6L,0xD2177A27294CD86ELL,1UL,-1L},{0x7222L,1UL,0L,0xB81F295BE7593958LL,0UL,1L},{-1L,0x27BACAAAL,0xBC4FL,0xEBD9461649A4F330LL,0UL,0L}},{{0xEEFFL,0UL,1L,4UL,255UL,-2L},{0x2B2EL,0xA0155C86L,0L,1UL,253UL,-8L},{0x7AD2L,0x0A55C250L,4L,0UL,0xC8L,-1L}},{{4L,0x4523FC24L,1L,0x2C92B1983A9C4ACALL,0x19L,1L},{0L,0xE623DF4EL,1L,0xB5E6E2522F59E23ELL,0x93L,0x14B37D2776785EDFLL},{0x3EE3L,0x9C4B39CBL,0x23D4L,18446744073709551612UL,0xF2L,0xB8970C0A1ED84A09LL}},{{0x892AL,0xD1924F3BL,0x39B0L,0x27F44DA31ED1E823LL,0UL,0xE88AB914D10479E6LL},{1L,0UL,0xAE36L,0UL,0xAEL,0x06AE2C2784677EECLL},{0xE95EL,0UL,0xBCC8L,18446744073709551615UL,250UL,-6L}},{{-1L,0x47AB530AL,0xA6C8L,1UL,0x10L,7L},{0x3509L,0xCE9071DCL,0x9AD1L,0xF48234757DE3A5FBLL,1UL,0x9C1B7322BF575D46LL},{0x7222L,1UL,0L,0xB81F295BE7593958LL,0UL,1L}}},{{{0x6340L,0xDD50E2D9L,0xA25CL,0xD7BF495CD00E1A1BLL,0UL,0x119ABA74D19CB0F0LL},{1L,0UL,0xAE36L,0UL,0xAEL,0x06AE2C2784677EECLL},{6L,0x8304BA9EL,5L,0xFDB6B158CEC235C9LL,0x9BL,0x5BE9D4918EEBFF7DLL}},{{0x4EA6L,0xFB3AADD4L,0L,3UL,4UL,1L},{0L,0xE623DF4EL,1L,0xB5E6E2522F59E23ELL,0x93L,0x14B37D2776785EDFLL},{0x41C2L,4294967295UL,1L,6UL,253UL,0x5FF2AC0B9D952C03LL}},{{0xA817L,8UL,0x8286L,9UL,4UL,0x4CA9FEE52BB2FA91LL},{0x2B2EL,0xA0155C86L,0L,1UL,253UL,-8L},{0xA817L,8UL,0x8286L,9UL,4UL,0x4CA9FEE52BB2FA91LL}},{{0x3C2FL,4294967287UL,1L,0x88BCF91D977C2E0CLL,0xECL,-6L},{0x7222L,1UL,0L,0xB81F295BE7593958LL,0UL,1L},{8L,0UL,0x9117L,0xC8B28DB9A14C3500LL,255UL,0x7771C0A4F64A20EFLL}},{{1L,4294967295UL,-10L,0xE3EB1A200B15A4E9LL,255UL,0x7B932794AB9A405DLL},{0x618CL,0xF81281AEL,0x043EL,1UL,0UL,0x9DCE7A24EDE3030BLL},{6L,0x8304BA9EL,5L,0xFDB6B158CEC235C9LL,0x9BL,0x5BE9D4918EEBFF7DLL}},{{4L,0x4523FC24L,1L,0x2C92B1983A9C4ACALL,0x19L,1L},{0xEEE9L,0UL,0x5ED4L,18446744073709551612UL,0xC2L,0x25C5ECB5E790A7A4LL},{-1L,0x27BACAAAL,0xBC4FL,0xEBD9461649A4F330LL,0UL,0L}},{{0x68F0L,0x6BED0EE9L,0xEE71L,0UL,2UL,0x48D079E9538959A9LL},{-1L,0x7C041B17L,0x9657L,0xE7E7E8FBAC872A51LL,0x8FL,1L},{0xE95EL,0UL,0xBCC8L,18446744073709551615UL,250UL,-6L}}},{{{4L,0x4523FC24L,1L,0x2C92B1983A9C4ACALL,0x19L,1L},{0L,0xB650E995L,4L,0x686AA94C0A7CF92BLL,0xA4L,-1L},{0L,4294967295UL,0xC818L,8UL,0x24L,0x2DA2580746486A36LL}},{{1L,4294967295UL,-10L,0xE3EB1A200B15A4E9LL,255UL,0x7B932794AB9A405DLL},{1L,0UL,0xAE36L,0UL,0xAEL,0x06AE2C2784677EECLL},{0x7AD2L,0x0A55C250L,4L,0UL,0xC8L,-1L}},{{0x3C2FL,4294967287UL,1L,0x88BCF91D977C2E0CLL,0xECL,-6L},{-1L,0x47AB530AL,0xA6C8L,1UL,0x10L,7L},{0x7222L,1UL,0L,0xB81F295BE7593958LL,0UL,1L}},{{0xA817L,8UL,0x8286L,9UL,4UL,0x4CA9FEE52BB2FA91LL},{9L,4294967291UL,1L,0x45FCD5E2840A634CLL,0x9EL,1L},{0x68F0L,0x6BED0EE9L,0xEE71L,0UL,2UL,0x48D079E9538959A9LL}},{{0x4EA6L,0xFB3AADD4L,0L,3UL,4UL,1L},{0L,0xB650E995L,4L,0x686AA94C0A7CF92BLL,0xA4L,-1L},{8L,0UL,0x9117L,0xC8B28DB9A14C3500LL,255UL,0x7771C0A4F64A20EFLL}},{{0x6340L,0xDD50E2D9L,0xA25CL,0xD7BF495CD00E1A1BLL,0UL,0x119ABA74D19CB0F0LL},{0x2B2EL,0xA0155C86L,0L,1UL,253UL,-8L},{0x424CL,4294967295UL,-9L,0x465790289039B585LL,0UL,0xE49B540DE7AC40E2LL}},{{-1L,0x47AB530AL,0xA6C8L,1UL,0x10L,7L},{0xEEE9L,0UL,0x5ED4L,18446744073709551612UL,0xC2L,0x25C5ECB5E790A7A4LL},{8L,0UL,0x9117L,0xC8B28DB9A14C3500LL,255UL,0x7771C0A4F64A20EFLL}}},{{{0x892AL,0xD1924F3BL,0x39B0L,0x27F44DA31ED1E823LL,0UL,0xE88AB914D10479E6LL},{0xC592L,4294967295UL,1L,0xC80E120C080BE2E1LL,252UL,1L},{0x68F0L,0x6BED0EE9L,0xEE71L,0UL,2UL,0x48D079E9538959A9LL}},{{4L,0x4523FC24L,1L,0x2C92B1983A9C4ACALL,0x19L,1L},{0x7222L,1UL,0L,0xB81F295BE7593958LL,0UL,1L},{0x7222L,1UL,0L,0xB81F295BE7593958LL,0UL,1L}},{{0xEEFFL,0UL,1L,4UL,255UL,-2L},{-1L,0x7C041B17L,0x9657L,0xE7E7E8FBAC872A51LL,0x8FL,1L},{0x7AD2L,0x0A55C250L,4L,0UL,0xC8L,-1L}},{{-1L,0x77A19276L,6L,0xD2177A27294CD86ELL,1UL,-1L},{0L,0xE623DF4EL,1L,0xB5E6E2522F59E23ELL,0x93L,0x14B37D2776785EDFLL},{0L,4294967295UL,0xC818L,8UL,0x24L,0x2DA2580746486A36LL}},{{0x892AL,0xD1924F3BL,0x39B0L,0x27F44DA31ED1E823LL,0UL,0xE88AB914D10479E6LL},{9L,4294967291UL,1L,0x45FCD5E2840A634CLL,0x9EL,1L},{0xE95EL,0UL,0xBCC8L,18446744073709551615UL,250UL,-6L}},{{0x3C2FL,4294967287UL,1L,0x88BCF91D977C2E0CLL,0xECL,-6L},{0x3509L,0xCE9071DCL,0x9AD1L,0xF48234757DE3A5FBLL,1UL,0x9C1B7322BF575D46LL},{-1L,0x27BACAAAL,0xBC4FL,0xEBD9461649A4F330LL,0UL,0L}},{{0x6340L,0xDD50E2D9L,0xA25CL,0xD7BF495CD00E1A1BLL,0UL,0x119ABA74D19CB0F0LL},{9L,4294967291UL,1L,0x45FCD5E2840A634CLL,0x9EL,1L},{6L,0x8304BA9EL,5L,0xFDB6B158CEC235C9LL,0x9BL,0x5BE9D4918EEBFF7DLL}}},{{{0xEEE9L,0UL,0x5ED4L,18446744073709551612UL,0xC2L,0x25C5ECB5E790A7A4LL},{0L,0xE623DF4EL,1L,0xB5E6E2522F59E23ELL,0x93L,0x14B37D2776785EDFLL},{8L,0UL,0x9117L,0xC8B28DB9A14C3500LL,255UL,0x7771C0A4F64A20EFLL}},{{0xA817L,8UL,0x8286L,9UL,4UL,0x4CA9FEE52BB2FA91LL},{-1L,0x7C041B17L,0x9657L,0xE7E7E8FBAC872A51LL,0x8FL,1L},{0xA817L,8UL,0x8286L,9UL,4UL,0x4CA9FEE52BB2FA91LL}},{{-1L,0x47AB530AL,0xA6C8L,1UL,0x10L,7L},{0x7222L,1UL,0L,0xB81F295BE7593958LL,0UL,1L},{0x41C2L,4294967295UL,1L,6UL,253UL,0x5FF2AC0B9D952C03LL}},{{1L,4294967295UL,-10L,0xE3EB1A200B15A4E9LL,255UL,0x7B932794AB9A405DLL},{0xC592L,4294967295UL,1L,0xC80E120C080BE2E1LL,252UL,1L},{6L,0x8304BA9EL,5L,0xFDB6B158CEC235C9LL,0x9BL,0x5BE9D4918EEBFF7DLL}},{{-1L,0x77A19276L,6L,0xD2177A27294CD86ELL,1UL,-1L},{0xEEE9L,0UL,0x5ED4L,18446744073709551612UL,0xC2L,0x25C5ECB5E790A7A4LL},{0x7222L,1UL,0L,0xB81F295BE7593958LL,0UL,1L}},{{0x68F0L,0x6BED0EE9L,0xEE71L,0UL,2UL,0x48D079E9538959A9LL},{0x2B2EL,0xA0155C86L,0L,1UL,253UL,-8L},{0xE95EL,0UL,0xBCC8L,18446744073709551615UL,250UL,-6L}},{{-1L,0x77A19276L,6L,0xD2177A27294CD86ELL,1UL,-1L},{0L,0xB650E995L,4L,0x686AA94C0A7CF92BLL,0xA4L,-1L},{0x3EE3L,0x9C4B39CBL,0x23D4L,18446744073709551612UL,0xF2L,0xB8970C0A1ED84A09LL}}},{{{1L,4294967295UL,-10L,0xE3EB1A200B15A4E9LL,255UL,0x7B932794AB9A405DLL},{9L,4294967291UL,1L,0x45FCD5E2840A634CLL,0x9EL,1L},{0x7AD2L,0x0A55C250L,4L,0UL,0xC8L,-1L}},{{-1L,0x47AB530AL,0xA6C8L,1UL,0x10L,7L},{-1L,0x47AB530AL,0xA6C8L,1UL,0x10L,7L},{-1L,0x27BACAAAL,0xBC4FL,0xEBD9461649A4F330LL,0UL,0L}},{{0xA817L,8UL,0x8286L,9UL,4UL,0x4CA9FEE52BB2FA91LL},{1L,0UL,0xAE36L,0UL,0xAEL,0x06AE2C2784677EECLL},{0x68F0L,0x6BED0EE9L,0xEE71L,0UL,2UL,0x48D079E9538959A9LL}},{{0xEEE9L,0UL,0x5ED4L,18446744073709551612UL,0xC2L,0x25C5ECB5E790A7A4LL},{0L,0xB650E995L,4L,0x686AA94C0A7CF92BLL,0xA4L,-1L},{0x41C2L,4294967295UL,1L,6UL,253UL,0x5FF2AC0B9D952C03LL}},{{0x6340L,0xDD50E2D9L,0xA25CL,0xD7BF495CD00E1A1BLL,0UL,0x119ABA74D19CB0F0LL},{-1L,0x7C041B17L,0x9657L,0xE7E7E8FBAC872A51LL,0x8FL,1L},{0x424CL,4294967295UL,-9L,0x465790289039B585LL,0UL,0xE49B540DE7AC40E2LL}},{{0x3C2FL,4294967287UL,1L,0x88BCF91D977C2E0CLL,0xECL,-6L},{0xEEE9L,0UL,0x5ED4L,18446744073709551612UL,0xC2L,0x25C5ECB5E790A7A4LL},{0x41C2L,4294967295UL,1L,6UL,253UL,0x5FF2AC0B9D952C03LL}},{{0x892AL,0xD1924F3BL,0x39B0L,0x27F44DA31ED1E823LL,0UL,0xE88AB914D10479E6LL},{0x618CL,0xF81281AEL,0x043EL,1UL,0UL,0x9DCE7A24EDE3030BLL},{0x68F0L,0x6BED0EE9L,0xEE71L,0UL,2UL,0x48D079E9538959A9LL}}},{{{-1L,0x77A19276L,6L,0xD2177A27294CD86ELL,1UL,-1L},{0x7222L,1UL,0L,0xB81F295BE7593958LL,0UL,1L},{-1L,0x27BACAAAL,0xBC4FL,0xEBD9461649A4F330LL,0UL,0L}},{{0xEEFFL,0UL,1L,4UL,255UL,-2L},{0x2B2EL,0xA0155C86L,0L,1UL,253UL,-8L},{0x7AD2L,0x0A55C250L,4L,0UL,0xC8L,-1L}},{{4L,0x4523FC24L,1L,0x2C92B1983A9C4ACALL,0x19L,1L},{0L,0xE623DF4EL,1L,0xB5E6E2522F59E23ELL,0x93L,0x14B37D2776785EDFLL},{0x3EE3L,0x9C4B39CBL,0x23D4L,18446744073709551612UL,0xF2L,0xB8970C0A1ED84A09LL}},{{0x892AL,0xD1924F3BL,0x39B0L,0x27F44DA31ED1E823LL,0UL,0xE88AB914D10479E6LL},{1L,0UL,0xAE36L,0UL,0xAEL,0x06AE2C2784677EECLL},{0xE95EL,0UL,0xBCC8L,18446744073709551615UL,250UL,-6L}},{{-1L,0x47AB530AL,0xA6C8L,1UL,0x10L,7L},{0x3509L,0xCE9071DCL,0x9AD1L,0xF48234757DE3A5FBLL,1UL,0x9C1B7322BF575D46LL},{0x7222L,1UL,0L,0xB81F295BE7593958LL,0UL,1L}},{{0x6340L,0xDD50E2D9L,0xA25CL,0xD7BF495CD00E1A1BLL,0UL,0x119ABA74D19CB0F0LL},{7L,1UL,0L,1UL,248UL,-7L},{0x424CL,4294967295UL,-9L,0x465790289039B585LL,0UL,0xE49B540DE7AC40E2LL}},{{-1L,0x77A19276L,6L,0xD2177A27294CD86ELL,1UL,-1L},{-1L,0x47AB530AL,0xA6C8L,1UL,0x10L,7L},{0L,0xB650E995L,4L,0x686AA94C0A7CF92BLL,0xA4L,-1L}}}};
            int64_t * const *l_380 = &g_260;
            uint16_t *l_388 = &g_92;
            int i, j, k;
            if (((void*)0 != &g_173))
            {
                int32_t l_237 = (-6L);
                uint32_t *l_360 = &g_104;
                const struct S1 l_363 = {4294967293UL,0xC93A7CE971563B04LL,0xF2C7330148BE7075LL,0xD9CDD7CEL,-1L,0x9D92A423L,0xBAF3439AL,0x60F41EE8L,0x7912L};
                struct S1 l_366[7] = {{0x798826D0L,0xA296EA8E69803BF5LL,0x1C439D849D0B7933LL,0x3DD30B71L,-1L,1L,-7L,1UL,65535UL},{0x798826D0L,0xA296EA8E69803BF5LL,0x1C439D849D0B7933LL,0x3DD30B71L,-1L,1L,-7L,1UL,65535UL},{0x798826D0L,0xA296EA8E69803BF5LL,0x1C439D849D0B7933LL,0x3DD30B71L,-1L,1L,-7L,1UL,65535UL},{0x798826D0L,0xA296EA8E69803BF5LL,0x1C439D849D0B7933LL,0x3DD30B71L,-1L,1L,-7L,1UL,65535UL},{0x798826D0L,0xA296EA8E69803BF5LL,0x1C439D849D0B7933LL,0x3DD30B71L,-1L,1L,-7L,1UL,65535UL},{0x798826D0L,0xA296EA8E69803BF5LL,0x1C439D849D0B7933LL,0x3DD30B71L,-1L,1L,-7L,1UL,65535UL},{0x798826D0L,0xA296EA8E69803BF5LL,0x1C439D849D0B7933LL,0x3DD30B71L,-1L,1L,-7L,1UL,65535UL}};
                uint32_t *l_385 = &l_366[3].f7;
                uint16_t **l_389 = (void*)0;
                uint16_t **l_390[9][2][10] = {{{&l_388,&l_388,&l_192,(void*)0,&l_192,&l_388,&l_388,&l_388,(void*)0,(void*)0},{&l_388,(void*)0,&l_233,&l_233,&l_233,&l_233,(void*)0,&l_388,(void*)0,&l_388}},{{&l_233,(void*)0,&l_388,(void*)0,&l_388,(void*)0,&l_388,(void*)0,&l_233,&l_233},{&l_192,&l_388,&l_388,&l_388,(void*)0,(void*)0,&l_388,&l_388,&l_388,&l_192}},{{&l_388,(void*)0,&l_233,&l_388,&l_388,&l_192,&l_388,&l_388,&l_233,(void*)0},{&l_233,&l_388,&l_192,(void*)0,&l_388,(void*)0,(void*)0,&l_388,(void*)0,&l_192}},{{&l_388,&l_388,&l_388,&l_233,(void*)0,(void*)0,&l_233,(void*)0,(void*)0,&l_233},{&l_233,&l_388,&l_233,(void*)0,&l_388,&l_192,&l_233,&l_233,&l_192,&l_388}},{{&l_388,&l_388,&l_388,&l_388,&l_233,(void*)0,(void*)0,&l_233,(void*)0,(void*)0},{&l_192,&l_388,&l_233,&l_388,&l_192,(void*)0,&l_388,(void*)0,(void*)0,&l_388}},{{&l_233,(void*)0,&l_388,&l_388,(void*)0,&l_233,&l_388,&l_388,&l_192,&l_388},{&l_388,&l_388,&l_192,(void*)0,&l_192,&l_388,&l_388,&l_388,(void*)0,(void*)0}},{{&l_388,(void*)0,&l_233,&l_233,&l_233,&l_233,(void*)0,&l_388,(void*)0,&l_388},{&l_233,(void*)0,&l_388,(void*)0,&l_388,(void*)0,&l_388,(void*)0,&l_233,&l_233}},{{&l_192,&l_388,&l_388,&l_388,(void*)0,(void*)0,&l_388,&l_388,&l_388,&l_192},{&l_388,(void*)0,&l_233,&l_388,&l_388,&l_192,&l_388,&l_388,&l_233,(void*)0}},{{&l_233,&l_388,&l_192,(void*)0,&l_388,(void*)0,(void*)0,&l_388,(void*)0,&l_192},{&l_388,&l_388,&l_388,&l_233,(void*)0,(void*)0,&l_233,(void*)0,(void*)0,(void*)0}}};
                uint64_t *l_402 = &g_97.f2;
                int i, j, k;
                for (g_97.f3 = 0; (g_97.f3 <= 1); g_97.f3 += 1)
                {
                    int32_t l_236 = 0L;
                    int16_t *l_264 = &l_218[6][3].f0;
                    int8_t *l_276 = &g_77;
                    uint8_t *l_278 = &g_279;
                    int32_t l_280[5][7] = {{1L,0L,0L,(-4L),(-4L),0L,0L},{0x66CCFA5AL,6L,0x2BCDFAA7L,6L,0x66CCFA5AL,6L,0x2BCDFAA7L},{(-4L),(-4L),0L,0L,1L,1L,0L},{(-6L),(-1L),(-6L),6L,(-6L),(-1L),(-6L)},{(-4L),0L,0L,(-4L),1L,0L,0L}};
                    int64_t *l_289[6][10][4] = {{{&g_97.f4,&g_97.f4,&g_173,&g_173},{&g_173,&g_97.f4,&g_118,&g_118},{(void*)0,&g_173,&g_97.f4,&g_118},{&g_173,&l_218[6][3].f5,(void*)0,&g_173},{&g_173,&l_218[6][3].f5,&g_173,&l_218[6][3].f5},{(void*)0,&g_118,&g_118,(void*)0},{&g_118,&g_97.f4,(void*)0,&g_118},{&g_173,&g_118,&g_173,&l_218[6][3].f5},{&g_118,&g_118,&l_218[6][3].f5,&l_218[6][3].f5},{&l_218[6][3].f5,&g_118,&g_97.f4,&g_118}},{{(void*)0,&g_97.f4,&g_173,(void*)0},{&l_218[6][3].f5,&g_118,&g_97.f4,&l_218[6][3].f5},{&l_218[6][3].f5,&l_218[6][3].f5,&g_97.f4,&g_173},{&g_173,&l_218[6][3].f5,&l_218[6][3].f5,&g_118},{&l_218[6][3].f5,&g_173,(void*)0,&g_118},{&g_118,&g_97.f4,&g_173,&g_173},{&l_218[6][3].f5,&g_97.f4,&g_97.f4,&l_218[6][3].f5},{&l_218[6][3].f5,&g_173,&l_218[6][3].f5,&g_97.f4},{&g_118,&g_173,&l_218[6][3].f5,&g_173},{(void*)0,&g_97.f4,&g_173,&g_173}},{{&g_97.f4,(void*)0,&g_97.f4,(void*)0},{&g_118,&g_97.f4,&g_118,(void*)0},{&l_218[6][3].f5,&g_173,&l_218[6][3].f5,&g_97.f4},{&g_173,&g_118,&l_218[6][3].f5,&g_173},{&l_218[6][3].f5,&g_118,&g_118,&g_173},{&g_118,(void*)0,&g_97.f4,&l_218[6][3].f5},{&g_97.f4,&l_218[6][3].f5,&g_173,&l_218[6][3].f5},{(void*)0,&g_173,&l_218[6][3].f5,&l_218[6][3].f5},{&g_118,(void*)0,&l_218[6][3].f5,&l_218[6][3].f5},{&l_218[6][3].f5,&l_218[6][3].f5,&g_97.f4,&g_97.f4}},{{&l_218[6][3].f5,&g_97.f4,&g_173,&g_97.f4},{&g_118,&l_218[6][3].f5,(void*)0,&g_173},{&l_218[6][3].f5,&g_173,&l_218[6][3].f5,&l_218[6][3].f5},{&g_173,&g_118,&g_97.f4,&g_173},{&l_218[6][3].f5,(void*)0,&g_97.f4,&g_97.f4},{&l_218[6][3].f5,&l_218[6][3].f5,&g_173,&g_173},{(void*)0,&l_218[6][3].f5,&g_97.f4,&g_97.f4},{&l_218[6][3].f5,&g_173,&l_218[6][3].f5,&g_97.f4},{&g_118,&g_173,&g_173,(void*)0},{&g_173,&g_118,&g_97.f4,&l_218[6][3].f5}},{{&g_173,&g_97.f4,&g_173,&g_173},{&g_173,&l_218[6][3].f5,&l_218[6][3].f5,&g_97.f4},{&g_173,&l_218[6][3].f5,&g_173,&g_118},{&g_97.f4,&l_218[6][3].f5,&g_118,&g_173},{(void*)0,&l_218[6][3].f5,&l_218[6][3].f5,(void*)0},{&l_218[6][3].f5,&g_173,&g_97.f4,&g_173},{(void*)0,&g_118,&g_97.f4,&l_218[6][3].f5},{(void*)0,&l_218[6][3].f5,&g_173,&g_173},{&g_118,&l_218[6][3].f5,&l_218[6][3].f5,&g_173},{&g_97.f4,&g_118,&g_173,&g_118}},{{(void*)0,(void*)0,&l_218[6][3].f5,&l_218[6][3].f5},{&g_173,(void*)0,&l_218[6][3].f5,&g_97.f4},{&g_97.f4,&g_173,&g_173,&g_173},{&g_97.f4,&g_97.f4,&l_218[6][3].f5,(void*)0},{&g_173,&g_173,&l_218[6][3].f5,(void*)0},{(void*)0,(void*)0,&g_173,&g_97.f4},{&g_97.f4,&g_173,&l_218[6][3].f5,&g_97.f4},{&g_118,&g_97.f4,&g_173,&g_118},{(void*)0,&g_97.f4,&g_97.f4,&g_173},{(void*)0,&g_118,&g_97.f4,&g_173}}};
                    uint8_t l_337 = 253UL;
                    uint32_t *l_342 = &l_218[6][3].f1;
                    int32_t * const l_351 = &g_352;
                    int32_t * const *l_350 = &l_351;
                    int32_t * const **l_349 = &l_350;
                    int32_t * const ***l_348[6][1];
                    int32_t * const ****l_347 = &l_348[0][0];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_348[i][j] = &l_349;
                    }
                    g_242--;
                }
                for (g_97.f2 = 0; (g_97.f2 <= 1); g_97.f2 += 1)
                {
                    for (g_97.f7 = 0; (g_97.f7 <= 3); g_97.f7 += 1)
                    {
                        struct S1 *l_364 = &g_365;
                        int i;
                        p_33 = ((****l_224) = (g_153[g_97.f2] == (((((*l_339) = (0x37CFECE7L & 1L)) != (!(safe_mul_func_int16_t_s_s((&p_34 == &g_77), (safe_rshift_func_int16_t_s_s(((void*)0 == l_360), 6)))))) && (safe_sub_func_uint64_t_u_u((g_153[g_97.f2] & (-1L)), g_92))) != g_306[0][1][2].f5)));
                        (*l_364) = l_363;
                        l_366[3] = p_35;
                        if (p_35.f8)
                            break;
                    }
                    p_33 = ((***l_206) = (&p_32 != l_367));
                    for (g_365.f4 = 0; (g_365.f4 <= 1); g_365.f4 += 1)
                    {
                        uint8_t l_368 = 0xFBL;
                        l_368--;
                    }
                }
                p_33 = (((p_35.f7 != ((safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((((l_375[1][3][0] , (--(*l_192))) >= (safe_mul_func_uint8_t_u_u(((l_380 != &l_277) == (((safe_rshift_func_int16_t_s_s(0L, (safe_lshift_func_int16_t_s_s((((((--(*l_385)) , l_192) == (g_391 = l_388)) >= ((safe_div_func_int8_t_s_s((l_366[3].f3 = 0x85L), (safe_mul_func_int16_t_s_s((((*l_402) = (safe_sub_func_uint16_t_u_u((+(safe_mul_func_int8_t_s_s(((~g_2) && g_97.f0), 0x37L))), p_35.f5))) , 7L), p_32)))) , p_35.f8)) > p_35.f5), 15)))) >= l_363.f1) | l_375[1][3][0].f3)), p_35.f0))) < 0xA9F6L), g_365.f1)) && l_403) != g_97.f4), 0)) & l_375[1][3][0].f2)) > g_306[0][1][2].f5) ^ 65534UL);
            }
            else
            {
                for (g_240 = 0; g_240 < 7; g_240 += 1)
                {
                    for (g_352 = 0; g_352 < 8; g_352 += 1)
                    {
                        for (g_239 = 0; g_239 < 4; g_239 += 1)
                        {
                            l_205[g_240][g_352][g_239] = &g_178;
                        }
                    }
                }
            }
            l_238 &= (*g_178);
            for (g_279 = 0; (g_279 == 18); g_279 = safe_add_func_uint8_t_u_u(g_279, 6))
            {
                for (g_352 = (-9); (g_352 == 21); ++g_352)
                {
                    struct S1 *l_412 = &g_97;
                    for (p_35.f5 = 0; (p_35.f5 <= 1); p_35.f5 += 1)
                    {
                        int i;
                        if (g_153[p_35.f5])
                            break;
                        l_408[0]++;
                    }
                    (*g_345) = (*g_345);
                    if ((****g_345))
                        continue;
                    (*l_412) = l_411;
                }
            }
        }
        else
        {
            for (g_80 = 0; (g_80 < (-7)); --g_80)
            {
                return p_33;
            }
        }
        if (((*g_297) , (safe_mod_func_int32_t_s_s((!1UL), (safe_mod_func_uint64_t_u_u((8UL ^ p_33), (****l_224)))))))
        {
            uint32_t l_440 = 0xF2DDB218L;
            int32_t l_441 = 0xFE5E10B6L;
            for (p_33 = 0; (p_33 == 23); p_33 = safe_add_func_uint64_t_u_u(p_33, 1))
            {
                int64_t ***l_428 = &l_202;
                l_441 ^= ((safe_sub_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u(((((*l_339) = (safe_lshift_func_int16_t_s_u(((((*l_428) = (void*)0) == &g_260) ^ (*g_260)), 9))) < (safe_lshift_func_int16_t_s_s((0xF1ECL <= ((*g_391) = 0x9F2AL)), 10))) >= (g_306[0][1][2].f3 > ((safe_add_func_uint64_t_u_u(0UL, ((((****l_224) == (safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_365.f5, g_306[0][1][2].f7)), 0xE7L)) , g_91), 3))) | p_34) & l_439))) , (****l_224)))), p_35.f3)) >= p_34) >= l_440) & p_35.f6), l_440)) >= g_97.f8);
            }
        }
        else
        {
            uint64_t l_447 = 0x0BC30D72CE9D8279LL;
            int32_t *****l_482 = (void*)0;
            int32_t *****l_483 = &g_345;
            int32_t ****l_485 = &l_206;
            int32_t *****l_484 = &l_485;
            int32_t ****l_488 = &l_206;
            int32_t *****l_487 = &l_488;
            uint32_t *l_490[3];
            int32_t l_492 = 1L;
            int32_t l_493 = 0xB15C7737L;
            int32_t l_494[9] = {0L,0xB740180FL,0xB740180FL,0L,0xB740180FL,0xB740180FL,0L,0xB740180FL,0xB740180FL};
            int i;
            for (i = 0; i < 3; i++)
                l_490[i] = &g_104;
            for (l_241 = 0; (l_241 < 14); l_241++)
            {
                uint16_t l_452 = 0xAB49L;
                (**l_206) = (***g_345);
                (**g_177) = (((!(safe_div_func_uint64_t_u_u((((((18446744073709551615UL || ((****l_224) < l_447)) & (l_204 != (void*)0)) >= (((safe_unary_minus_func_uint64_t_u((safe_sub_func_int16_t_s_s(0x8135L, p_35.f2)))) && (g_80 , ((((g_239 = ((l_447 >= p_35.f1) && l_447)) >= g_365.f3) == p_32) != g_306[0][1][2].f4))) , (***l_206))) || 1L) , l_451), p_35.f8))) , l_452) < l_447);
            }
            (*g_178) = (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((g_279 = (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((!(****l_224)), ((safe_mul_func_int16_t_s_s(((l_447 & (safe_rshift_func_int16_t_s_u(((g_104 = (safe_mul_func_uint8_t_u_u(((l_218[6][3] , p_35.f3) >= (safe_mod_func_int64_t_s_s(((l_204 == l_204) && (safe_div_func_int64_t_s_s((safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((((&g_346 != ((*l_487) = (l_486 = ((*l_484) = ((*l_483) = l_224))))) <= p_35.f1) | g_306[0][1][2].f6), l_489)) >= (*g_391)), 4UL)) , p_35.f0), (****l_224))), p_34)) & g_306[0][1][2].f4), (****l_224))), p_35.f1))), p_32))), g_298[6][2].f5))) | g_306[0][1][2].f2), 12))) > (*g_260)), p_35.f6)) ^ g_298[6][2].f1))), 13))), 0x2FL)) < p_35.f4), 2));
            --l_498;
        }
    }
    else
    {
        int64_t l_802[4][10][6] = {{{4L,0xD80BCF1B6FEE5DC5LL,0L,(-10L),0xF51C536E63B68A5ALL,0xAEF490C5AC70A9A6LL},{4L,(-4L),0xB007025563FC7053LL,0x1B2E2ECC66BCA99ALL,0xB007025563FC7053LL,(-4L)},{4L,0xAEF490C5AC70A9A6LL,0xF51C536E63B68A5ALL,(-10L),0L,0xD80BCF1B6FEE5DC5LL},{4L,0xF51C536E63B68A5ALL,0x383FC009DC687EAELL,0xA3E6A3A2D287A377LL,5L,0x383FC009DC687EAELL},{0x1B2E2ECC66BCA99ALL,0xF51C536E63B68A5ALL,0L,4L,0L,5L},{(-1L),0xAEF490C5AC70A9A6LL,1L,(-1L),0xB007025563FC7053LL,0L},{(-10L),(-4L),1L,(-1L),0xF51C536E63B68A5ALL,5L},{0x4EA821C8E2C7FECFLL,0xD80BCF1B6FEE5DC5LL,0L,0x3240EBE194E5626ELL,0x383FC009DC687EAELL,0x383FC009DC687EAELL},{0x3240EBE194E5626ELL,0x383FC009DC687EAELL,0x383FC009DC687EAELL,0x3240EBE194E5626ELL,0L,0xD80BCF1B6FEE5DC5LL},{0x4EA821C8E2C7FECFLL,5L,0xF51C536E63B68A5ALL,(-1L),1L,(-4L)}},{{(-10L),0L,0xB007025563FC7053LL,(-1L),1L,0xAEF490C5AC70A9A6LL},{(-1L),5L,0L,4L,0L,0xF51C536E63B68A5ALL},{0x1B2E2ECC66BCA99ALL,0x383FC009DC687EAELL,5L,0xA3E6A3A2D287A377LL,0x383FC009DC687EAELL,0xF51C536E63B68A5ALL},{4L,0xD80BCF1B6FEE5DC5LL,0L,(-10L),0xF51C536E63B68A5ALL,0xAEF490C5AC70A9A6LL},{4L,(-4L),0xB007025563FC7053LL,0x1B2E2ECC66BCA99ALL,0xB007025563FC7053LL,(-4L)},{4L,0xAEF490C5AC70A9A6LL,0xF51C536E63B68A5ALL,(-10L),0L,0xD80BCF1B6FEE5DC5LL},{0xD80BCF1B6FEE5DC5LL,1L,0xDD096F0294F88ACCLL,0x383FC009DC687EAELL,(-2L),0xDD096F0294F88ACCLL},{0L,1L,0x23954BB819094B64LL,0xD80BCF1B6FEE5DC5LL,1L,(-2L)},{(-8L),(-1L),0x5CC1BA582A24ADEFLL,(-4L),(-1L),0x23954BB819094B64LL},{5L,0xA742B74C12F42FD8LL,0x5CC1BA582A24ADEFLL,0xAEF490C5AC70A9A6LL,1L,(-2L)}},{{1L,0xBD5C2D60779B4D74LL,0x23954BB819094B64LL,0xF51C536E63B68A5ALL,0xDD096F0294F88ACCLL,0xDD096F0294F88ACCLL},{0xF51C536E63B68A5ALL,0xDD096F0294F88ACCLL,0xDD096F0294F88ACCLL,0xF51C536E63B68A5ALL,0x23954BB819094B64LL,0xBD5C2D60779B4D74LL},{1L,(-2L),1L,0xAEF490C5AC70A9A6LL,0x5CC1BA582A24ADEFLL,0xA742B74C12F42FD8LL},{5L,0x23954BB819094B64LL,(-1L),(-4L),0x5CC1BA582A24ADEFLL,(-1L)},{(-8L),(-2L),1L,0xD80BCF1B6FEE5DC5LL,0x23954BB819094B64LL,1L},{0L,0xDD096F0294F88ACCLL,(-2L),0x383FC009DC687EAELL,0xDD096F0294F88ACCLL,1L},{0xD80BCF1B6FEE5DC5LL,0xBD5C2D60779B4D74LL,1L,5L,1L,(-1L)},{1L,0xA742B74C12F42FD8LL,(-1L),0L,(-1L),0xA742B74C12F42FD8LL},{1L,(-1L),1L,5L,1L,0xBD5C2D60779B4D74LL},{0xD80BCF1B6FEE5DC5LL,1L,0xDD096F0294F88ACCLL,0x383FC009DC687EAELL,(-2L),0xDD096F0294F88ACCLL}},{{0L,1L,0x23954BB819094B64LL,0xD80BCF1B6FEE5DC5LL,1L,(-2L)},{(-8L),(-1L),0x5CC1BA582A24ADEFLL,(-4L),(-1L),0x23954BB819094B64LL},{5L,0xA742B74C12F42FD8LL,0x5CC1BA582A24ADEFLL,0xAEF490C5AC70A9A6LL,1L,(-2L)},{1L,0xBD5C2D60779B4D74LL,0x23954BB819094B64LL,0xF51C536E63B68A5ALL,0xDD096F0294F88ACCLL,0xDD096F0294F88ACCLL},{0xF51C536E63B68A5ALL,0xDD096F0294F88ACCLL,0xDD096F0294F88ACCLL,0xF51C536E63B68A5ALL,0x23954BB819094B64LL,0xBD5C2D60779B4D74LL},{1L,(-2L),1L,0xAEF490C5AC70A9A6LL,0x5CC1BA582A24ADEFLL,0xA742B74C12F42FD8LL},{5L,0x23954BB819094B64LL,(-1L),(-4L),0x5CC1BA582A24ADEFLL,(-1L)},{(-8L),(-2L),1L,0xD80BCF1B6FEE5DC5LL,0x23954BB819094B64LL,1L},{0L,0xDD096F0294F88ACCLL,(-2L),0x383FC009DC687EAELL,0xDD096F0294F88ACCLL,1L},{0xD80BCF1B6FEE5DC5LL,0xBD5C2D60779B4D74LL,1L,5L,1L,(-1L)}}};
        struct S1 l_804 = {0UL,18446744073709551612UL,0xA7E00E2B6809627CLL,-1L,-1L,-3L,-7L,18446744073709551615UL,0xC5A0L};
        int64_t l_827[9][8][3] = {{{0xF43F26E2F37CADBFLL,0x12272751FA59BBCFLL,0x12272751FA59BBCFLL},{9L,0xBCC45283E8344B68LL,0x5FF7373A075149DBLL},{0xFF468DB81937A907LL,0x30786CAE6DCF51E7LL,0x12272751FA59BBCFLL},{0xB9F3FEEC55900252LL,0x40250CD88177B583LL,0xB9F3FEEC55900252LL},{0x99FEAD71A1CBFA66LL,0x62948A6B782ADDAFLL,1L},{9L,0x40250CD88177B583LL,0x61CED72253DC3D28LL},{0x30786CAE6DCF51E7LL,0x30786CAE6DCF51E7LL,1L},{0x1B4AE74AEF559319LL,0xBCC45283E8344B68LL,0xB9F3FEEC55900252LL}},{{0x30786CAE6DCF51E7LL,0x12272751FA59BBCFLL,0x62948A6B782ADDAFLL},{9L,0xD49D1955585B5469LL,0x5FF7373A075149DBLL},{0x99FEAD71A1CBFA66LL,0x30786CAE6DCF51E7LL,0x62948A6B782ADDAFLL},{0xB9F3FEEC55900252LL,1L,0xB9F3FEEC55900252LL},{0xFF468DB81937A907LL,0x62948A6B782ADDAFLL,1L},{9L,1L,0x61CED72253DC3D28LL},{0xF43F26E2F37CADBFLL,0x30786CAE6DCF51E7LL,1L},{0x1B4AE74AEF559319LL,0xD49D1955585B5469LL,0xB9F3FEEC55900252LL}},{{0xF43F26E2F37CADBFLL,0x12272751FA59BBCFLL,0x12272751FA59BBCFLL},{9L,0xBCC45283E8344B68LL,0x5FF7373A075149DBLL},{0xFF468DB81937A907LL,0x30786CAE6DCF51E7LL,0x12272751FA59BBCFLL},{0xB9F3FEEC55900252LL,0x40250CD88177B583LL,0xB9F3FEEC55900252LL},{0x99FEAD71A1CBFA66LL,0x62948A6B782ADDAFLL,1L},{9L,0x40250CD88177B583LL,0x61CED72253DC3D28LL},{0x30786CAE6DCF51E7LL,0x30786CAE6DCF51E7LL,1L},{0x1B4AE74AEF559319LL,0xBCC45283E8344B68LL,0xB9F3FEEC55900252LL}},{{0x30786CAE6DCF51E7LL,0x12272751FA59BBCFLL,0x62948A6B782ADDAFLL},{9L,0xD49D1955585B5469LL,0x5FF7373A075149DBLL},{0x99FEAD71A1CBFA66LL,0x30786CAE6DCF51E7LL,0x62948A6B782ADDAFLL},{0xB9F3FEEC55900252LL,1L,0xB9F3FEEC55900252LL},{0xFF468DB81937A907LL,0x62948A6B782ADDAFLL,1L},{9L,1L,0x61CED72253DC3D28LL},{0xF43F26E2F37CADBFLL,0x30786CAE6DCF51E7LL,1L},{0x1B4AE74AEF559319LL,0xD49D1955585B5469LL,0xB9F3FEEC55900252LL}},{{0xF43F26E2F37CADBFLL,0x12272751FA59BBCFLL,0x12272751FA59BBCFLL},{9L,0xBCC45283E8344B68LL,0x5FF7373A075149DBLL},{0xFF468DB81937A907LL,0x30786CAE6DCF51E7LL,0x12272751FA59BBCFLL},{0xB9F3FEEC55900252LL,0x40250CD88177B583LL,0xB9F3FEEC55900252LL},{0x99FEAD71A1CBFA66LL,0x62948A6B782ADDAFLL,1L},{9L,0x40250CD88177B583LL,0x61CED72253DC3D28LL},{0x30786CAE6DCF51E7LL,0x30786CAE6DCF51E7LL,1L},{0x1B4AE74AEF559319LL,0xBCC45283E8344B68LL,0xB9F3FEEC55900252LL}},{{0x30786CAE6DCF51E7LL,0x12272751FA59BBCFLL,0x62948A6B782ADDAFLL},{9L,0xD49D1955585B5469LL,0x5FF7373A075149DBLL},{0x99FEAD71A1CBFA66LL,0x30786CAE6DCF51E7LL,0x62948A6B782ADDAFLL},{0xB9F3FEEC55900252LL,1L,0xB9F3FEEC55900252LL},{0xFF468DB81937A907LL,0x62948A6B782ADDAFLL,1L},{9L,1L,0x61CED72253DC3D28LL},{0xF43F26E2F37CADBFLL,0x30786CAE6DCF51E7LL,1L},{0x1B4AE74AEF559319LL,0xD49D1955585B5469LL,0xB9F3FEEC55900252LL}},{{0xF43F26E2F37CADBFLL,0x12272751FA59BBCFLL,0x12272751FA59BBCFLL},{9L,0xBCC45283E8344B68LL,0x5FF7373A075149DBLL},{0xFF468DB81937A907LL,0x30786CAE6DCF51E7LL,0x12272751FA59BBCFLL},{0xB9F3FEEC55900252LL,0x40250CD88177B583LL,0xB9F3FEEC55900252LL},{0x99FEAD71A1CBFA66LL,0x62948A6B782ADDAFLL,1L},{9L,0x40250CD88177B583LL,0x61CED72253DC3D28LL},{0x30786CAE6DCF51E7LL,0x30786CAE6DCF51E7LL,1L},{0x1B4AE74AEF559319LL,0xBCC45283E8344B68LL,0xB9F3FEEC55900252LL}},{{0x30786CAE6DCF51E7LL,0x12272751FA59BBCFLL,0x62948A6B782ADDAFLL},{9L,0xD49D1955585B5469LL,0x5FF7373A075149DBLL},{0x99FEAD71A1CBFA66LL,0x30786CAE6DCF51E7LL,0x62948A6B782ADDAFLL},{0xB9F3FEEC55900252LL,1L,0xB9F3FEEC55900252LL},{0xFF468DB81937A907LL,0x62948A6B782ADDAFLL,1L},{9L,1L,0x61CED72253DC3D28LL},{0xF43F26E2F37CADBFLL,0x30786CAE6DCF51E7LL,1L},{0x1B4AE74AEF559319LL,0xD49D1955585B5469LL,0xB9F3FEEC55900252LL}},{{0xF43F26E2F37CADBFLL,0x12272751FA59BBCFLL,0x12272751FA59BBCFLL},{9L,0xBCC45283E8344B68LL,0x5FF7373A075149DBLL},{0xFF468DB81937A907LL,0x30786CAE6DCF51E7LL,0x12272751FA59BBCFLL},{0xB9F3FEEC55900252LL,0x40250CD88177B583LL,0xB9F3FEEC55900252LL},{0x99FEAD71A1CBFA66LL,0x62948A6B782ADDAFLL,1L},{9L,0x40250CD88177B583LL,0x61CED72253DC3D28LL},{0x30786CAE6DCF51E7LL,0x30786CAE6DCF51E7LL,1L},{0x1B4AE74AEF559319LL,0xBCC45283E8344B68LL,0xB9F3FEEC55900252LL}}};
        int64_t l_873 = 6L;
        int32_t l_907 = 0L;
        int32_t l_909 = 0x340F3889L;
        int32_t l_910 = 3L;
        int32_t l_911 = (-1L);
        int32_t l_912 = 0xAA4B1087L;
        int32_t l_913 = (-9L);
        int32_t l_914 = (-3L);
        int32_t l_915[3];
        int16_t *l_948[6][3][4] = {{{&g_298[6][2].f2,&l_218[6][3].f2,&l_218[6][3].f0,&g_298[6][2].f0},{&g_298[6][2].f0,&g_298[6][2].f2,&l_561,&l_561},{&g_298[6][2].f0,&l_561,&l_218[6][3].f0,&g_91}},{{&l_561,&l_218[6][3].f2,&g_298[6][2].f0,&g_298[6][2].f0},{&l_218[6][3].f0,&g_298[6][2].f0,&l_218[6][3].f2,&l_218[6][3].f2},{&l_218[6][3].f0,&l_561,&l_218[6][3].f0,&l_218[6][3].f2}},{{&g_91,&l_561,&l_561,&l_218[6][3].f2},{&l_218[6][3].f2,&g_298[6][2].f0,&g_298[6][2].f0,&l_561},{&l_218[6][3].f2,&g_298[6][2].f0,&g_91,&l_218[6][3].f2}},{{&g_298[6][2].f0,&l_561,&l_218[6][3].f0,&l_218[6][3].f2},{&g_298[6][2].f0,&l_561,&g_91,&g_298[6][2].f0},{&g_298[6][2].f0,&l_218[6][3].f2,&g_298[6][2].f0,&l_218[6][3].f2}},{{&g_298[6][2].f0,&g_298[6][2].f0,&l_218[6][3].f2,&g_298[6][2].f0},{&g_298[6][2].f0,&g_298[6][2].f2,&g_298[6][2].f0,(void*)0},{&l_218[6][3].f0,&g_298[6][2].f0,&l_561,&l_218[6][3].f2}},{{&g_91,&g_298[6][2].f0,&g_298[6][2].f0,&g_298[6][2].f0},{&g_91,&l_561,&g_298[6][2].f0,&g_298[6][2].f0},{&g_91,&l_561,&l_561,&l_218[6][3].f2}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_915[i] = 0L;
        for (g_365.f6 = 0; (g_365.f6 <= 13); g_365.f6++)
        {
            int16_t l_764 = 0x8C37L;
            struct S0 l_801 = {0L,0x0ED53D79L,-6L,6UL,4UL,0x550E80D7100C066DLL};
            const uint8_t l_884 = 0xE9L;
            int32_t l_903 = (-3L);
            int32_t l_904 = 0x2D23DF56L;
            int32_t l_905 = 0xB25337ACL;
            int32_t l_906[5] = {7L,7L,7L,7L,7L};
            uint32_t *l_923 = &g_850.f0;
            int i;
            if (g_97.f4)
                goto lbl_755;
        }
        l_949[5][1] |= ((((void*)0 == &g_750) | (((g_298[6][2].f2 &= (safe_sub_func_uint16_t_u_u(((((~g_97.f0) <= 0x8565L) && (((**g_940) ^= ((((g_849[7].f4 , ((****g_345) == ((-1L) == (+((*g_260) = p_35.f6))))) == (((0L != 0x8B456242L) ^ p_35.f7) , 7L)) , p_34) , 4294967289UL)) != p_35.f2)) != p_32), p_35.f7))) , l_915[1]) , g_92)) <= p_35.f8);
    }
    for (g_850.f5 = 10; (g_850.f5 <= 10); ++g_850.f5)
    {
        uint32_t l_966 = 4294967295UL;
        int32_t *l_970 = &g_858.f3;
        int32_t l_1012 = 0xEA4275ABL;
        int32_t l_1016 = (-5L);
        struct S0 * const l_1045 = &l_218[6][3];
        uint8_t *l_1054 = &l_408[1];
        uint8_t **l_1053 = &l_1054;
        int16_t *l_1057 = (void*)0;
        int16_t *l_1058 = (void*)0;
        int16_t *l_1059 = (void*)0;
        int16_t *l_1060 = &l_561;
        int32_t ****l_1061 = &g_346;
        struct S0 ***l_1063 = &l_695;
        struct S0 ****l_1062 = &l_1063;
        struct S1 l_1064 = {0x3E574C25L,0UL,18446744073709551614UL,1L,-8L,7L,0xE64F0A63L,0UL,0UL};
        uint16_t l_1065[1];
        uint16_t l_1096 = 0x3310L;
        uint32_t l_1116[7][6] = {{1UL,0x0AD5E3A2L,4294967295UL,1UL,1UL,0x9D4BCDBAL},{1UL,1UL,0x9D4BCDBAL,0x0AD5E3A2L,0x0AD5E3A2L,0x9D4BCDBAL},{0x62AB84BCL,0x62AB84BCL,4294967295UL,0xF6DE75F5L,0x0AD5E3A2L,5UL},{0x0AD5E3A2L,1UL,4294967288UL,0xF6DE75F5L,1UL,4294967295UL},{0x62AB84BCL,0x0AD5E3A2L,4294967288UL,0x0AD5E3A2L,0x62AB84BCL,5UL},{1UL,0x0AD5E3A2L,4294967295UL,1UL,1UL,0x9D4BCDBAL},{1UL,1UL,0x9D4BCDBAL,0x0AD5E3A2L,0x0AD5E3A2L,0x9D4BCDBAL}};
        uint64_t l_1126 = 0xB79A4DC583D39E29LL;
        int32_t l_1187[10] = {0x613C67FDL,0x613C67FDL,0L,0x613C67FDL,0x613C67FDL,0L,0x613C67FDL,0x613C67FDL,0L,0x613C67FDL};
        int i, j;
        for (i = 0; i < 1; i++)
            l_1065[i] = 0x8FAEL;
        for (g_853.f4 = 0; (g_853.f4 != (-14)); --g_853.f4)
        {
            int32_t **l_960[1][8] = {{&g_178,&g_178,&g_178,&g_178,&g_178,&g_178,&g_178,&g_178}};
            uint8_t *l_991 = &g_279;
            struct S1 l_1002 = {0x59B6412FL,0UL,0x89259F0222E22664LL,1L,0L,0x8F000458L,0L,0x12E43496L,0UL};
            const uint16_t *l_1041[2][9][6] = {{{&l_1002.f8,(void*)0,&g_858.f8,&g_852.f8,&g_849[7].f8,&g_854.f8},{&l_1002.f8,&g_857.f8,&g_849[7].f8,&g_365.f8,&g_852.f8,&g_365.f8},{&g_856.f8,&g_857.f8,&g_856.f8,&g_854.f8,&g_849[7].f8,&g_852.f8},{&l_1002.f8,(void*)0,&g_856.f8,&g_854.f8,&l_1002.f8,&g_365.f8},{&g_859[6].f8,&g_854.f8,&g_849[7].f8,&g_854.f8,&g_859[6].f8,&g_854.f8},{&l_1002.f8,&g_365.f8,&g_858.f8,&g_854.f8,&g_859[6].f8,&g_854.f8},{&g_856.f8,&g_854.f8,&l_1002.f8,&g_365.f8,&l_1002.f8,&g_854.f8},{&l_1002.f8,(void*)0,&g_858.f8,&g_852.f8,&g_849[7].f8,&g_854.f8},{&l_1002.f8,&g_857.f8,&g_849[7].f8,&g_365.f8,&g_852.f8,&g_365.f8}},{{&g_856.f8,&g_857.f8,&g_856.f8,&g_854.f8,&g_849[7].f8,&g_852.f8},{&l_1002.f8,(void*)0,&g_856.f8,&g_854.f8,&l_1002.f8,&g_365.f8},{&g_859[6].f8,&g_854.f8,&g_849[7].f8,&g_854.f8,&g_859[6].f8,&g_854.f8},{&l_1002.f8,&g_365.f8,&g_858.f8,&g_852.f8,&g_858.f8,(void*)0},{&g_859[6].f8,(void*)0,&g_852.f8,&g_854.f8,&g_852.f8,(void*)0},{&g_852.f8,&g_365.f8,&g_849[7].f8,&g_857.f8,&l_1002.f8,&g_852.f8},{&g_852.f8,&g_365.f8,&l_1002.f8,&g_854.f8,&l_1002.f8,&g_854.f8},{&g_859[6].f8,&g_365.f8,&g_859[6].f8,&g_852.f8,&l_1002.f8,&g_857.f8},{&g_856.f8,&g_365.f8,&g_859[6].f8,(void*)0,&g_852.f8,&g_854.f8}}};
            struct S0 l_1044 = {0L,0xEC6CB945L,0x5068L,0x76A5478777CB122DLL,0x28L,0x6415D8A66540860BLL};
            int i, j, k;
            for (g_545 = 0; (g_545 != 35); g_545++)
            {
                int32_t l_965 = 0xC8084A7AL;
                uint8_t *l_967 = &l_408[0];
                int64_t *l_968 = &g_298[6][2].f5;
                int64_t *l_969 = &g_855.f4;
                l_970 = ((((*l_969) = ((*l_968) = ((safe_add_func_int64_t_s_s(((*g_260) = (-4L)), (safe_add_func_uint8_t_u_u(((*l_967) = (((**g_345) == l_960[0][4]) , (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(l_965, 0)), (p_33 == (l_966 , g_856.f3)))))), (p_33 ^ 1L))))) , p_35.f0))) , p_35.f1) , &p_33);
            }
            (*g_177) = &p_33;
            for (g_173 = 0; (g_173 != (-19)); g_173--)
            {
                uint8_t **l_988 = (void*)0;
                uint8_t *l_990 = &l_408[0];
                uint8_t **l_989[8] = {&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990};
                int32_t l_1003[8] = {0x22C5B57EL,0x22C5B57EL,0x22C5B57EL,0x22C5B57EL,0x22C5B57EL,0x22C5B57EL,0x22C5B57EL,0x22C5B57EL};
                int16_t l_1006 = 9L;
                struct S0 **l_1046[8] = {&g_297,&g_297,&g_297,&g_297,&g_297,&g_297,&g_297,&g_297};
                struct S0 **l_1047 = &g_297;
                int i;
            }
        }
        l_1064 = func_45((p_35.f6 <= (+(safe_sub_func_int8_t_s_s((((safe_add_func_int16_t_s_s(((((*l_1060) ^= (l_1053 == g_1055)) , (((*l_1045) , l_1061) == &g_346)) & ((((((*l_1062) = &g_751[4][4]) == &l_695) , (**l_1061)) != (*g_346)) >= g_856.f0)), 0xC583L)) != (-1L)) != p_35.f7), 0x05L)))), (****l_1061));
        l_1065[0]++;
        for (g_857.f4 = 0; (g_857.f4 <= 28); g_857.f4 = safe_add_func_uint64_t_u_u(g_857.f4, 1))
        {
            uint32_t l_1080 = 4294967294UL;
            uint8_t **l_1083 = &g_1056[0];
            uint64_t l_1084[8][6] = {{18446744073709551615UL,6UL,0UL,6UL,18446744073709551615UL,0UL},{6UL,18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL,0UL},{18446744073709551615UL,18446744073709551615UL,0UL,18446744073709551615UL,6UL,0UL},{18446744073709551615UL,6UL,0UL,6UL,18446744073709551615UL,0UL},{6UL,18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL,0UL},{18446744073709551615UL,18446744073709551615UL,0UL,18446744073709551615UL,6UL,0UL},{18446744073709551615UL,6UL,0UL,6UL,18446744073709551615UL,0UL},{6UL,18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL,0UL}};
            int32_t *****l_1087 = &g_345;
            uint32_t *l_1102 = &g_857.f7;
            uint32_t *l_1104 = &g_859[6].f7;
            int32_t l_1159 = (-10L);
            int32_t l_1161 = 0x5CB9FAEEL;
            struct S0 l_1179 = {0x14FDL,0x2EAB5DA6L,0L,0x8A77CEC0FF9E4652LL,0x70L,5L};
            uint32_t l_1180 = 0x43E9F499L;
            int8_t *l_1186 = &l_235;
            int i, j;
            if (((*l_1045) , (p_35.f3 ^= (safe_rshift_func_int16_t_s_s((((*l_970) > (0xD764573476D3F0B1LL || (safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(0xDFL, (safe_sub_func_uint16_t_u_u((((*g_260) , l_1080) , 65533UL), ((g_153[1] , ((safe_mul_func_uint8_t_u_u(((**g_1055) = (&g_1056[0] != l_1083)), p_35.f5)) , p_35.f5)) , g_849[7].f5))))), p_35.f1)) | p_35.f0), l_1084[1][5])))) == (**g_177)), (*l_970))))))
            {
                struct S1 * const **l_1085[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_1085[i] = &l_845[0];
                l_845[0] = (void*)0;
            }
            else
            {
                int32_t ***** const l_1086 = &l_1061;
                struct S1 **l_1137 = (void*)0;
                struct S1 ***l_1136 = &l_1137;
                int32_t l_1160 = 9L;
                int32_t l_1162 = 0x1DA0F8C2L;
                uint8_t l_1164[10] = {0x97L,0x94L,0x94L,0x97L,254UL,0x97L,0x94L,0x94L,0x97L,254UL};
                int i;
                l_1087 = l_1086;
                (*g_177) = &p_33;
                for (l_1064.f3 = 0; (l_1064.f3 >= 17); l_1064.f3 = safe_add_func_uint64_t_u_u(l_1064.f3, 4))
                {
                    uint32_t l_1092 = 1UL;
                    for (p_34 = (-2); (p_34 > 28); p_34 = safe_add_func_uint8_t_u_u(p_34, 1))
                    {
                        if ((*l_970))
                            break;
                        (***g_346) &= l_1092;
                    }
                    g_1093++;
                    if (p_35.f8)
                        continue;
                }
                if (l_1096)
                {
                    uint32_t **l_1103[8][9][3] = {{{(void*)0,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{(void*)0,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{(void*)0,&l_1102,&l_1102},{&l_1102,&l_1102,(void*)0},{(void*)0,&l_1102,(void*)0},{&l_1102,(void*)0,&l_1102}},{{&l_1102,&l_1102,&l_1102},{(void*)0,(void*)0,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,(void*)0},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,(void*)0},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,(void*)0}},{{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,(void*)0},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,(void*)0},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,(void*)0},{(void*)0,&l_1102,&l_1102}},{{(void*)0,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,(void*)0},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,(void*)0,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102}},{{(void*)0,(void*)0,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{(void*)0,&l_1102,(void*)0},{&l_1102,&l_1102,&l_1102},{(void*)0,&l_1102,&l_1102},{(void*)0,&l_1102,&l_1102},{&l_1102,&l_1102,(void*)0}},{{(void*)0,&l_1102,&l_1102},{(void*)0,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{(void*)0,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{(void*)0,&l_1102,&l_1102},{&l_1102,(void*)0,&l_1102}},{{&l_1102,&l_1102,&l_1102},{&l_1102,(void*)0,(void*)0},{(void*)0,&l_1102,&l_1102},{(void*)0,&l_1102,&l_1102},{&l_1102,(void*)0,&l_1102},{(void*)0,&l_1102,(void*)0},{(void*)0,(void*)0,&l_1102},{&l_1102,&l_1102,&l_1102},{(void*)0,&l_1102,&l_1102}},{{&l_1102,(void*)0,&l_1102},{&l_1102,&l_1102,(void*)0},{&l_1102,(void*)0,&l_1102},{(void*)0,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,&l_1102},{&l_1102,&l_1102,(void*)0},{&l_1102,&l_1102,&l_1102}}};
                    struct S0 l_1105 = {0x1088L,1UL,-1L,8UL,1UL,0x7D99781BCB928527LL};
                    uint64_t l_1110 = 1UL;
                    uint64_t *l_1111[10][9] = {{&g_857.f1,(void*)0,&g_857.f1,&l_737,&g_857.f2,(void*)0,&l_218[6][3].f3,&g_855.f2,&l_1064.f2},{&g_857.f1,&g_365.f2,(void*)0,&g_858.f1,&g_365.f2,(void*)0,&l_737,&g_1020,&g_365.f1},{&g_851[0][1].f2,&g_855.f1,&g_857.f1,&l_411.f2,&g_365.f2,&g_365.f2,&l_411.f2,&g_857.f1,&g_855.f1},{&g_856.f1,(void*)0,(void*)0,&g_97.f2,&g_857.f2,&g_855.f1,&l_737,&l_1064.f2,&g_855.f1},{&g_97.f2,&g_857.f1,&g_1020,&l_1084[5][1],&g_852.f2,(void*)0,&l_218[6][3].f3,(void*)0,&g_365.f1},{&l_218[6][3].f3,(void*)0,&g_852.f2,&l_1084[5][1],&g_1020,&l_1064.f2,(void*)0,(void*)0,(void*)0},{&g_855.f1,(void*)0,&g_298[6][2].f3,(void*)0,&g_853.f1,(void*)0,&g_365.f1,(void*)0,&g_853.f1},{(void*)0,&l_1084[7][0],&l_1084[7][0],(void*)0,&l_1064.f2,(void*)0,&g_852.f2,&g_853.f1,&g_298[6][2].f3},{&g_855.f1,&g_853.f1,&l_1084[7][0],&g_365.f2,&l_1110,&l_1084[7][0],&g_857.f1,&g_850.f1,&g_859[6].f2},{&l_1064.f2,&l_1110,&g_298[6][2].f3,&g_855.f1,&l_1064.f2,&g_853.f1,&g_857.f1,&l_1064.f2,&g_850.f1}};
                    struct S1 l_1138[3][1] = {{{0x7F27A6E5L,18446744073709551608UL,18446744073709551615UL,0x86E6880DL,0xF271493D5F8A6C66LL,0x44049CC5L,-3L,0x3670B641L,0xF186L}},{{0x7F27A6E5L,18446744073709551608UL,18446744073709551615UL,0x86E6880DL,0xF271493D5F8A6C66LL,0x44049CC5L,-3L,0x3670B641L,0xF186L}},{{0x7F27A6E5L,18446744073709551608UL,18446744073709551615UL,0x86E6880DL,0xF271493D5F8A6C66LL,0x44049CC5L,-3L,0x3670B641L,0xF186L}}};
                    int64_t *l_1139 = &g_97.f4;
                    int32_t l_1158 = 5L;
                    int i, j, k;
                    for (g_855.f4 = 0; (g_855.f4 < 2); g_855.f4 = safe_add_func_uint16_t_u_u(g_855.f4, 1))
                    {
                        return p_33;
                    }
                    if ((((g_1112 = (safe_lshift_func_int8_t_s_s(((g_856.f0 , g_851[0][1].f0) <= (((+((**g_940) = ((l_1102 == (l_1104 = g_178)) ^ (l_1105 , (safe_sub_func_uint32_t_u_u((p_35.f1 ^ ((*l_1060) = ((****l_1061) = (p_32 > (((((safe_sub_func_int16_t_s_s(l_1110, ((p_35.f2 &= ((g_260 = &g_173) != (void*)0)) <= (*****l_1087)))) != 18446744073709551615UL) , (*****l_1086)) == l_1105.f0) , p_35.f5))))), l_1105.f0)))))) >= p_35.f3) > g_849[7].f8)), 5))) > 0UL) & 1UL))
                    {
                        if (p_35.f5)
                            break;
                        return p_33;
                    }
                    else
                    {
                        uint16_t l_1121[4] = {0x8532L,0x8532L,0x8532L,0x8532L};
                        int i;
                        p_35.f6 &= (safe_mod_func_int16_t_s_s((((g_1115 = (****l_1061)) ^ ((**g_1055) < l_1116[5][5])) == (safe_mod_func_uint32_t_u_u(l_1110, (g_857.f6 ^= ((*g_178) && (p_32 , ((****l_1061) < (safe_div_func_int64_t_s_s(9L, g_852.f3))))))))), p_35.f0));
                        (****l_1086) = &p_33;
                        ++l_1121[2];
                    }
                    for (l_1064.f2 = 0; (l_1064.f2 < 53); ++l_1064.f2)
                    {
                        if ((*l_970))
                            break;
                        return l_1126;
                    }
                    l_1158 &= (((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((((*g_260) |= (safe_sub_func_uint16_t_u_u((&l_845[1] == l_1136), (**g_745)))) | (l_1111[1][2] != ((*l_203) = (l_1138[2][0] , l_1139)))))), (((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(1UL, (safe_mul_func_uint16_t_u_u(((*l_192) = (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((+((*****l_1086) ^= p_35.f2)) != (((((*l_1139) = (safe_mod_func_uint8_t_u_u((~0xB8493B73L), 3UL))) ^ g_306[0][1][2].f0) , &g_709[0][0]) == (void*)0)), g_857.f8)), l_1138[2][0].f2)), p_35.f0)), (-1L)))), 65535UL)))), p_35.f2)) < p_35.f4) , 0x654DL))), 0xE5F2L)), g_855.f8)) || p_33) > p_35.f2);
                }
                else
                {
                    int8_t l_1163[9][1] = {{(-1L)},{(-4L)},{(-1L)},{(-4L)},{(-1L)},{(-4L)},{(-1L)},{(-4L)},{(-1L)}};
                    int i, j;
                    --l_1164[6];
                    (*g_178) = (safe_mod_func_int16_t_s_s(0x7BB7L, (safe_lshift_func_uint8_t_u_u(p_33, p_35.f0))));
                }
            }
            p_35.f6 |= (((((*l_970) | p_35.f1) == p_35.f4) ^ p_34) & ((((**g_745) = (safe_mod_func_uint32_t_u_u(((****l_1061) < (((safe_mul_func_int16_t_s_s((p_35.f8 != ((safe_mod_func_uint64_t_u_u(((l_1179 , l_1180) && (safe_mul_func_int8_t_s_s(((*l_1186) = (safe_add_func_uint8_t_u_u((+0x1A88L), (**g_1055)))), p_33))), (*g_260))) , (**g_1055))), g_852.f8)) < 1L) || (*l_970))), (-1L)))) & l_1187[1]) < 0xAF4CF5E42A99A1E3LL));
            return p_35.f7;
        }
    }
    return p_32;
}







static const int16_t func_38(int8_t p_39, uint8_t p_40)
{
    uint16_t l_159 = 65535UL;
    const int32_t l_162[2][4][9] = {{{(-9L),(-1L),0L,0xAE4C48B7L,3L,1L,0x5AE59394L,0x41906970L,0x5AE59394L},{0x5AE59394L,0xC174BAE2L,6L,6L,0xC174BAE2L,0x5AE59394L,9L,(-9L),0L},{0x41906970L,0x7516BF4FL,6L,1L,(-9L),0x487D7488L,3L,3L,0x487D7488L},{6L,3L,0L,3L,6L,0x41906970L,9L,0xAE4C48B7L,0x1CDD84ECL}},{{1L,3L,0x41906970L,0x1CDD84ECL,0x7516BF4FL,(-1L),0x5AE59394L,(-1L),0x7516BF4FL},{9L,0x7516BF4FL,0x7516BF4FL,9L,0x487D7488L,0x41906970L,0L,0x5AE59394L,1L},{9L,0xC174BAE2L,0x06E3EF0FL,0x41906970L,1L,0x487D7488L,0x487D7488L,1L,0x41906970L},{1L,(-1L),1L,0x06E3EF0FL,0x487D7488L,0x5AE59394L,0x1CDD84ECL,1L,0x41906970L}}};
    int i, j, k;
lbl_157:
    for (g_97.f6 = (-23); (g_97.f6 > 10); g_97.f6++)
    {
        uint8_t l_149[9];
        const uint64_t l_156 = 0UL;
        int i;
        for (i = 0; i < 9; i++)
            l_149[i] = 0x8CL;
        for (p_40 = 0; (p_40 <= 56); p_40 = safe_add_func_uint8_t_u_u(p_40, 9))
        {
            int32_t *l_148[5];
            int i;
            for (i = 0; i < 5; i++)
                l_148[i] = &g_90;
            --l_149[5];
            for (g_97.f0 = 0; (g_97.f0 <= 8); g_97.f0 += 1)
            {
                int i;
                g_90 = l_149[g_97.f0];
                for (g_91 = 0; (g_91 <= 8); g_91 += 1)
                {
                    int16_t l_152 = 0x3B0FL;
                    ++g_153[1];
                }
            }
        }
        if (p_39)
            continue;
        return l_156;
    }
    for (g_91 = 0; (g_91 <= 1); g_91 += 1)
    {
        if (g_97.f6)
            goto lbl_157;
        for (p_39 = 1; (p_39 >= 0); p_39 -= 1)
        {
            int32_t *l_158[3][5] = {{&g_97.f3,&g_2,&g_97.f3,&g_2,&g_97.f3},{&g_97.f6,&g_97.f6,&g_97.f6,&g_97.f6,&g_97.f6},{&g_97.f3,&g_2,&g_97.f3,&g_2,&g_97.f3}};
            int i, j;
            ++l_159;
            return g_153[p_39];
        }
    }
    return l_162[1][0][2];
}







static uint8_t func_41(struct S1 p_42, uint32_t p_43, int32_t p_44)
{
    int32_t l_123 = 0x04F0D90DL;
    int32_t *l_134 = &g_97.f3;
lbl_143:
    for (p_42.f5 = 0; (p_42.f5 <= (-26)); --p_42.f5)
    {
        for (p_44 = 0; (p_44 == (-11)); --p_44)
        {
            if (p_42.f1)
                break;
            return l_123;
        }
        for (g_97.f5 = (-5); (g_97.f5 != (-23)); g_97.f5 = safe_sub_func_uint8_t_u_u(g_97.f5, 9))
        {
            int32_t *l_126[9][5];
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 5; j++)
                    l_126[i][j] = &g_90;
            }
            p_44 = l_123;
        }
    }
    for (l_123 = 15; (l_123 >= (-30)); l_123 = safe_sub_func_uint16_t_u_u(l_123, 5))
    {
        int32_t **l_129 = (void*)0;
        int32_t *l_131 = &g_90;
        int32_t **l_130 = &l_131;
        int32_t *l_133[9];
        int32_t **l_132[9][3][5] = {{{&l_133[1],&l_133[7],&l_133[7],&l_133[1],&l_133[4]},{(void*)0,&l_133[1],&l_133[1],&l_133[1],&l_133[8]},{&l_133[7],&l_133[1],&l_133[4],&l_133[1],&l_133[4]}},{{&l_133[5],&l_133[6],&l_133[8],&l_133[1],&l_133[1]},{(void*)0,&l_133[1],&l_133[4],&l_133[1],&l_133[7]},{(void*)0,(void*)0,&l_133[7],(void*)0,(void*)0}},{{&l_133[1],&l_133[1],&l_133[1],&l_133[1],&l_133[1]},{&l_133[5],&l_133[6],&l_133[6],&l_133[1],&l_133[1]},{&l_133[1],&l_133[1],&l_133[1],&l_133[1],&l_133[1]}},{{(void*)0,&l_133[1],&l_133[5],&l_133[1],&l_133[1]},{&l_133[4],&l_133[1],&l_133[7],&l_133[7],&l_133[1]},{&l_133[1],&l_133[1],&l_133[8],&l_133[1],&l_133[7]}},{{&l_133[1],&l_133[1],&l_133[6],&l_133[1],(void*)0},{&l_133[5],&l_133[7],&l_133[1],&l_133[6],(void*)0},{&l_133[1],&l_133[7],&l_133[4],&l_133[1],&l_133[1]}},{{&l_133[1],&l_133[1],(void*)0,(void*)0,(void*)0},{&l_133[4],&l_133[4],&l_133[1],&l_133[1],&l_133[4]},{(void*)0,&l_133[1],(void*)0,&l_133[6],&l_133[1]}},{{&l_133[6],&l_133[1],(void*)0,&l_133[1],&l_133[6]},{&l_133[1],&l_133[1],&l_133[7],&l_133[1],&l_133[8]},{&l_133[1],&l_133[4],&l_133[1],&l_133[7],&l_133[7]}},{{&l_133[1],&l_133[1],&l_133[1],&l_133[1],&l_133[8]},{&l_133[1],&l_133[7],&l_133[4],&l_133[1],&l_133[6]},{&l_133[8],&l_133[7],&l_133[6],&l_133[1],&l_133[1]}},{{&l_133[1],&l_133[1],&l_133[4],&l_133[6],&l_133[4]},{&l_133[5],&l_133[1],&l_133[1],(void*)0,(void*)0},{&l_133[1],&l_133[1],&l_133[1],&l_133[1],&l_133[1]}}};
        uint64_t *l_137 = &g_97.f2;
        int8_t *l_138 = &g_77;
        struct S1 *l_142 = &g_97;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_133[i] = &g_97.f3;
        p_44 = ((l_134 = ((*l_130) = &g_90)) == &p_44);
        (*l_142) = func_45((((((safe_mul_func_uint16_t_u_u(p_42.f2, (((*l_138) = ((g_97 , l_137) == l_137)) , 0xB66AL))) || (+p_42.f8)) ^ p_42.f8) > ((-1L) <= ((safe_add_func_int64_t_s_s(0xC32A7D5B95D3AA6BLL, (*l_131))) , (-1L)))) && g_2), g_80);
        (*l_130) = (void*)0;
        if (p_42.f1)
            goto lbl_143;
    }
    return (*l_134);
}







static struct S1 func_45(int8_t p_46, uint32_t p_47)
{
    struct S1 l_98 = {0xDD39D0E3L,18446744073709551614UL,0UL,0xEE719322L,0xCCB0868ECCAC4738LL,1L,-4L,0x7A55E9D0L,65529UL};
    int32_t *l_99 = (void*)0;
    int32_t *l_100 = &g_97.f6;
    int32_t *l_101 = &l_98.f6;
    int32_t *l_102 = &g_97.f6;
    int32_t *l_103[1];
    uint64_t *l_117 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_103[i] = &g_90;
    for (g_92 = 10; (g_92 <= 59); ++g_92)
    {
        l_98 = g_97;
        return g_97;
    }
    ++g_104;
    g_118 = ((((g_97.f2 = (safe_rshift_func_int8_t_s_s((((&g_2 != (void*)0) != (((safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u((*l_101), (g_97.f6 |= ((void*)0 != &p_46)))), g_91)) != (safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((p_47 ^ p_47) , &p_46) != (void*)0), g_2)), 0x0D76L))) && (*l_101))) != g_97.f8), p_47))) | 0xAE7220935DC34743LL) && g_80) == 0xB2EE1CE7L);
    return l_98;
}







static uint8_t func_56(int64_t p_57)
{
    int32_t *l_79 = &g_80;
    int32_t *l_81 = &g_80;
    int32_t *l_82 = &g_80;
    int32_t *l_83 = &g_80;
    int32_t *l_84 = &g_80;
    int32_t l_85 = 0x9E88CDAFL;
    int32_t *l_86 = &l_85;
    int32_t *l_87 = &g_80;
    int32_t *l_88 = &g_80;
    int32_t *l_89[1];
    int i;
    for (i = 0; i < 1; i++)
        l_89[i] = &g_80;
    ++g_92;
    return p_57;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_97.f2, "g_97.f2", print_hash_value);
    transparent_crc(g_97.f3, "g_97.f3", print_hash_value);
    transparent_crc(g_97.f4, "g_97.f4", print_hash_value);
    transparent_crc(g_97.f5, "g_97.f5", print_hash_value);
    transparent_crc(g_97.f6, "g_97.f6", print_hash_value);
    transparent_crc(g_97.f7, "g_97.f7", print_hash_value);
    transparent_crc(g_97.f8, "g_97.f8", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_153[i], "g_153[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_298[i][j].f0, "g_298[i][j].f0", print_hash_value);
            transparent_crc(g_298[i][j].f1, "g_298[i][j].f1", print_hash_value);
            transparent_crc(g_298[i][j].f2, "g_298[i][j].f2", print_hash_value);
            transparent_crc(g_298[i][j].f3, "g_298[i][j].f3", print_hash_value);
            transparent_crc(g_298[i][j].f4, "g_298[i][j].f4", print_hash_value);
            transparent_crc(g_298[i][j].f5, "g_298[i][j].f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_306[i][j][k].f0, "g_306[i][j][k].f0", print_hash_value);
                transparent_crc(g_306[i][j][k].f1, "g_306[i][j][k].f1", print_hash_value);
                transparent_crc(g_306[i][j][k].f2, "g_306[i][j][k].f2", print_hash_value);
                transparent_crc(g_306[i][j][k].f3, "g_306[i][j][k].f3", print_hash_value);
                transparent_crc(g_306[i][j][k].f4, "g_306[i][j][k].f4", print_hash_value);
                transparent_crc(g_306[i][j][k].f5, "g_306[i][j][k].f5", print_hash_value);
                transparent_crc(g_306[i][j][k].f6, "g_306[i][j][k].f6", print_hash_value);
                transparent_crc(g_306[i][j][k].f7, "g_306[i][j][k].f7", print_hash_value);
                transparent_crc(g_306[i][j][k].f8, "g_306[i][j][k].f8", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_365.f0, "g_365.f0", print_hash_value);
    transparent_crc(g_365.f1, "g_365.f1", print_hash_value);
    transparent_crc(g_365.f2, "g_365.f2", print_hash_value);
    transparent_crc(g_365.f3, "g_365.f3", print_hash_value);
    transparent_crc(g_365.f4, "g_365.f4", print_hash_value);
    transparent_crc(g_365.f5, "g_365.f5", print_hash_value);
    transparent_crc(g_365.f6, "g_365.f6", print_hash_value);
    transparent_crc(g_365.f7, "g_365.f7", print_hash_value);
    transparent_crc(g_365.f8, "g_365.f8", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_545, "g_545", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_709[i][j], "g_709[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_849[i].f0, "g_849[i].f0", print_hash_value);
        transparent_crc(g_849[i].f1, "g_849[i].f1", print_hash_value);
        transparent_crc(g_849[i].f2, "g_849[i].f2", print_hash_value);
        transparent_crc(g_849[i].f3, "g_849[i].f3", print_hash_value);
        transparent_crc(g_849[i].f4, "g_849[i].f4", print_hash_value);
        transparent_crc(g_849[i].f5, "g_849[i].f5", print_hash_value);
        transparent_crc(g_849[i].f6, "g_849[i].f6", print_hash_value);
        transparent_crc(g_849[i].f7, "g_849[i].f7", print_hash_value);
        transparent_crc(g_849[i].f8, "g_849[i].f8", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_850.f0, "g_850.f0", print_hash_value);
    transparent_crc(g_850.f1, "g_850.f1", print_hash_value);
    transparent_crc(g_850.f2, "g_850.f2", print_hash_value);
    transparent_crc(g_850.f3, "g_850.f3", print_hash_value);
    transparent_crc(g_850.f4, "g_850.f4", print_hash_value);
    transparent_crc(g_850.f5, "g_850.f5", print_hash_value);
    transparent_crc(g_850.f6, "g_850.f6", print_hash_value);
    transparent_crc(g_850.f7, "g_850.f7", print_hash_value);
    transparent_crc(g_850.f8, "g_850.f8", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_851[i][j].f0, "g_851[i][j].f0", print_hash_value);
            transparent_crc(g_851[i][j].f1, "g_851[i][j].f1", print_hash_value);
            transparent_crc(g_851[i][j].f2, "g_851[i][j].f2", print_hash_value);
            transparent_crc(g_851[i][j].f3, "g_851[i][j].f3", print_hash_value);
            transparent_crc(g_851[i][j].f4, "g_851[i][j].f4", print_hash_value);
            transparent_crc(g_851[i][j].f5, "g_851[i][j].f5", print_hash_value);
            transparent_crc(g_851[i][j].f6, "g_851[i][j].f6", print_hash_value);
            transparent_crc(g_851[i][j].f7, "g_851[i][j].f7", print_hash_value);
            transparent_crc(g_851[i][j].f8, "g_851[i][j].f8", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_852.f0, "g_852.f0", print_hash_value);
    transparent_crc(g_852.f1, "g_852.f1", print_hash_value);
    transparent_crc(g_852.f2, "g_852.f2", print_hash_value);
    transparent_crc(g_852.f3, "g_852.f3", print_hash_value);
    transparent_crc(g_852.f4, "g_852.f4", print_hash_value);
    transparent_crc(g_852.f5, "g_852.f5", print_hash_value);
    transparent_crc(g_852.f6, "g_852.f6", print_hash_value);
    transparent_crc(g_852.f7, "g_852.f7", print_hash_value);
    transparent_crc(g_852.f8, "g_852.f8", print_hash_value);
    transparent_crc(g_853.f0, "g_853.f0", print_hash_value);
    transparent_crc(g_853.f1, "g_853.f1", print_hash_value);
    transparent_crc(g_853.f2, "g_853.f2", print_hash_value);
    transparent_crc(g_853.f3, "g_853.f3", print_hash_value);
    transparent_crc(g_853.f4, "g_853.f4", print_hash_value);
    transparent_crc(g_853.f5, "g_853.f5", print_hash_value);
    transparent_crc(g_853.f6, "g_853.f6", print_hash_value);
    transparent_crc(g_853.f7, "g_853.f7", print_hash_value);
    transparent_crc(g_853.f8, "g_853.f8", print_hash_value);
    transparent_crc(g_854.f0, "g_854.f0", print_hash_value);
    transparent_crc(g_854.f1, "g_854.f1", print_hash_value);
    transparent_crc(g_854.f2, "g_854.f2", print_hash_value);
    transparent_crc(g_854.f3, "g_854.f3", print_hash_value);
    transparent_crc(g_854.f4, "g_854.f4", print_hash_value);
    transparent_crc(g_854.f5, "g_854.f5", print_hash_value);
    transparent_crc(g_854.f6, "g_854.f6", print_hash_value);
    transparent_crc(g_854.f7, "g_854.f7", print_hash_value);
    transparent_crc(g_854.f8, "g_854.f8", print_hash_value);
    transparent_crc(g_855.f0, "g_855.f0", print_hash_value);
    transparent_crc(g_855.f1, "g_855.f1", print_hash_value);
    transparent_crc(g_855.f2, "g_855.f2", print_hash_value);
    transparent_crc(g_855.f3, "g_855.f3", print_hash_value);
    transparent_crc(g_855.f4, "g_855.f4", print_hash_value);
    transparent_crc(g_855.f5, "g_855.f5", print_hash_value);
    transparent_crc(g_855.f6, "g_855.f6", print_hash_value);
    transparent_crc(g_855.f7, "g_855.f7", print_hash_value);
    transparent_crc(g_855.f8, "g_855.f8", print_hash_value);
    transparent_crc(g_856.f0, "g_856.f0", print_hash_value);
    transparent_crc(g_856.f1, "g_856.f1", print_hash_value);
    transparent_crc(g_856.f2, "g_856.f2", print_hash_value);
    transparent_crc(g_856.f3, "g_856.f3", print_hash_value);
    transparent_crc(g_856.f4, "g_856.f4", print_hash_value);
    transparent_crc(g_856.f5, "g_856.f5", print_hash_value);
    transparent_crc(g_856.f6, "g_856.f6", print_hash_value);
    transparent_crc(g_856.f7, "g_856.f7", print_hash_value);
    transparent_crc(g_856.f8, "g_856.f8", print_hash_value);
    transparent_crc(g_857.f0, "g_857.f0", print_hash_value);
    transparent_crc(g_857.f1, "g_857.f1", print_hash_value);
    transparent_crc(g_857.f2, "g_857.f2", print_hash_value);
    transparent_crc(g_857.f3, "g_857.f3", print_hash_value);
    transparent_crc(g_857.f4, "g_857.f4", print_hash_value);
    transparent_crc(g_857.f5, "g_857.f5", print_hash_value);
    transparent_crc(g_857.f6, "g_857.f6", print_hash_value);
    transparent_crc(g_857.f7, "g_857.f7", print_hash_value);
    transparent_crc(g_857.f8, "g_857.f8", print_hash_value);
    transparent_crc(g_858.f0, "g_858.f0", print_hash_value);
    transparent_crc(g_858.f1, "g_858.f1", print_hash_value);
    transparent_crc(g_858.f2, "g_858.f2", print_hash_value);
    transparent_crc(g_858.f3, "g_858.f3", print_hash_value);
    transparent_crc(g_858.f4, "g_858.f4", print_hash_value);
    transparent_crc(g_858.f5, "g_858.f5", print_hash_value);
    transparent_crc(g_858.f6, "g_858.f6", print_hash_value);
    transparent_crc(g_858.f7, "g_858.f7", print_hash_value);
    transparent_crc(g_858.f8, "g_858.f8", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_859[i].f0, "g_859[i].f0", print_hash_value);
        transparent_crc(g_859[i].f1, "g_859[i].f1", print_hash_value);
        transparent_crc(g_859[i].f2, "g_859[i].f2", print_hash_value);
        transparent_crc(g_859[i].f3, "g_859[i].f3", print_hash_value);
        transparent_crc(g_859[i].f4, "g_859[i].f4", print_hash_value);
        transparent_crc(g_859[i].f5, "g_859[i].f5", print_hash_value);
        transparent_crc(g_859[i].f6, "g_859[i].f6", print_hash_value);
        transparent_crc(g_859[i].f7, "g_859[i].f7", print_hash_value);
        transparent_crc(g_859[i].f8, "g_859[i].f8", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_916, "g_916", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1018[i], "g_1018[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1020, "g_1020", print_hash_value);
    transparent_crc(g_1093, "g_1093", print_hash_value);
    transparent_crc(g_1112, "g_1112", print_hash_value);
    transparent_crc(g_1115, "g_1115", print_hash_value);
    transparent_crc(g_1234, "g_1234", print_hash_value);
    transparent_crc(g_1358, "g_1358", print_hash_value);
    transparent_crc(g_1516, "g_1516", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1646[i][j][k], "g_1646[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1678, "g_1678", print_hash_value);
    transparent_crc(g_1930.f0, "g_1930.f0", print_hash_value);
    transparent_crc(g_1930.f1, "g_1930.f1", print_hash_value);
    transparent_crc(g_1930.f2, "g_1930.f2", print_hash_value);
    transparent_crc(g_1930.f3, "g_1930.f3", print_hash_value);
    transparent_crc(g_1930.f4, "g_1930.f4", print_hash_value);
    transparent_crc(g_1930.f5, "g_1930.f5", print_hash_value);
    transparent_crc(g_1987, "g_1987", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
