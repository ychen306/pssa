// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = E06C5927
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
   int8_t * const f0;
   const signed f1 : 16;
   int32_t f2;
};


static uint64_t g_11 = 0x21F1EB32A831D26ELL;
static int32_t g_18[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int8_t g_20 = 0xA5L;
static const int8_t *g_44 = &g_20;
static const int8_t ** const g_43 = &g_44;
static int8_t *g_65 = &g_20;
static int8_t **g_64 = &g_65;
static int8_t **g_66 = &g_65;
static union U0 g_96 = {0};
static uint64_t g_102 = 0x80F5C685B35A07F5LL;
static int16_t g_103 = (-3L);
static int32_t g_106 = 7L;
static int32_t *g_111 = (void*)0;
static uint8_t g_123 = 0UL;
static uint8_t g_127[3][8][3] = {{{1UL,0x18L,1UL},{248UL,8UL,0xF6L},{2UL,0x18L,2UL},{248UL,0UL,0xF6L},{1UL,0x18L,1UL},{248UL,8UL,0xF6L},{2UL,0x18L,2UL},{248UL,0UL,0xF6L}},{{1UL,0x18L,1UL},{248UL,8UL,0xF6L},{2UL,0x18L,2UL},{248UL,0UL,0xF6L},{1UL,0xF4L,0x50L},{252UL,0xF6L,0xE9L},{249UL,0xF4L,249UL},{252UL,248UL,0xE9L}},{{0x50L,0xF4L,0x50L},{252UL,0xF6L,0xE9L},{249UL,0xF4L,249UL},{252UL,248UL,0xE9L},{0x50L,0xF4L,0x50L},{252UL,0xF6L,0xE9L},{249UL,0xF4L,249UL},{252UL,248UL,0xE9L}}};
static union U0 g_138 = {0};
static uint16_t g_184 = 0xD1F4L;
static uint64_t g_262 = 0xDCB01C2EB0A1AFBELL;
static uint16_t g_333 = 0x7060L;
static int16_t g_365 = 0x6CB6L;
static uint64_t g_397[10] = {0xF0B774321D9A322ELL,18446744073709551615UL,0xF0B774321D9A322ELL,0xF0B774321D9A322ELL,18446744073709551615UL,0xF0B774321D9A322ELL,0xF0B774321D9A322ELL,18446744073709551615UL,0xF0B774321D9A322ELL,0xF0B774321D9A322ELL};
static int32_t *g_430 = &g_18[8];
static uint32_t g_494[1] = {18446744073709551615UL};
static uint8_t *g_547 = &g_127[0][3][1];
static uint8_t **g_546[6] = {&g_547,&g_547,&g_547,&g_547,&g_547,&g_547};
static uint8_t ***g_545[2] = {&g_546[5],&g_546[5]};
static uint32_t g_601 = 0xB4873215L;
static uint16_t g_606 = 3UL;
static const int32_t *g_617 = &g_18[7];
static int32_t g_635 = 0xBA7AABE5L;
static uint32_t g_641 = 0xC24016D5L;
static uint16_t ***g_676 = (void*)0;
static uint16_t ****g_675[7][10] = {{&g_676,(void*)0,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676},{&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,(void*)0},{&g_676,&g_676,&g_676,&g_676,(void*)0,&g_676,&g_676,&g_676,(void*)0,&g_676},{&g_676,&g_676,&g_676,(void*)0,&g_676,&g_676,&g_676,(void*)0,&g_676,&g_676},{&g_676,&g_676,(void*)0,&g_676,&g_676,&g_676,(void*)0,&g_676,&g_676,&g_676},{&g_676,(void*)0,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676},{&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,(void*)0}};
static uint64_t g_735 = 18446744073709551610UL;
static uint32_t g_843 = 0UL;
static uint64_t *g_864 = &g_397[5];
static uint64_t **g_863 = &g_864;
static int16_t g_927 = 0xAB20L;
static uint16_t g_1009 = 0x6B05L;
static int8_t g_1037 = 1L;
static uint32_t g_1078 = 9UL;
static int64_t g_1118[5] = {1L,1L,1L,1L,1L};
static const int16_t g_1140 = (-1L);
static int8_t g_1179 = (-1L);
static int64_t *g_1231 = &g_1118[3];
static int64_t **g_1230 = &g_1231;
static int64_t ***g_1229 = &g_1230;
static int64_t ****g_1228 = &g_1229;
static int32_t g_1282 = 0xED3E4017L;
static const int16_t *g_1284 = &g_365;
static const int16_t **g_1283 = &g_1284;
static uint8_t ** const *g_1329 = &g_546[1];
static uint8_t ** const **g_1328 = &g_1329;
static const int64_t g_1335 = 0x851D357775F1FF12LL;
static int32_t g_1342 = 0xFEAE8509L;
static const int64_t ****g_1356 = (void*)0;
static int8_t g_1371 = 0L;
static uint64_t g_1426 = 1UL;
static int64_t g_1449 = 0xD72316671B058B3ALL;
static int16_t g_1633 = 1L;
static union U0 *g_1762 = &g_96;
static union U0 **g_1761 = &g_1762;
static int8_t *****g_1849 = (void*)0;
static int16_t *****g_2058 = (void*)0;
static int16_t *g_2074 = (void*)0;
static int16_t **g_2073 = &g_2074;
static uint32_t g_2083 = 0x8B350448L;
static uint32_t g_2196 = 0UL;
static uint32_t ** const g_2297 = (void*)0;
static uint8_t ****g_2418 = &g_545[0];
static int32_t * const g_2487 = &g_1282;
static uint16_t g_2516 = 0x86CCL;
static uint32_t g_2554 = 0x79814F5DL;
static uint8_t *****g_2602 = &g_2418;
static int16_t g_2634 = (-7L);
static int32_t g_2643[3] = {0x304CED09L,0x304CED09L,0x304CED09L};
static int32_t g_2648[10][2] = {{8L,0L},{0xE0B242C8L,0L},{8L,0xE0B242C8L},{6L,6L},{6L,0xE0B242C8L},{8L,0L},{0xE0B242C8L,0L},{8L,0xE0B242C8L},{6L,6L},{6L,0xE0B242C8L}};
static uint32_t g_2653 = 0x10C99AEFL;
static int16_t ***g_2700[2][8][10] = {{{(void*)0,&g_2073,&g_2073,(void*)0,&g_2073,&g_2073,(void*)0,(void*)0,&g_2073,(void*)0},{&g_2073,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_2073,(void*)0,&g_2073,&g_2073},{(void*)0,&g_2073,&g_2073,(void*)0,&g_2073,&g_2073,(void*)0,&g_2073,&g_2073,(void*)0},{(void*)0,&g_2073,&g_2073,&g_2073,(void*)0,&g_2073,&g_2073,&g_2073,(void*)0,&g_2073},{&g_2073,(void*)0,&g_2073,&g_2073,&g_2073,&g_2073,&g_2073,(void*)0,(void*)0,&g_2073},{&g_2073,(void*)0,&g_2073,&g_2073,(void*)0,&g_2073,&g_2073,(void*)0,(void*)0,&g_2073},{(void*)0,&g_2073,&g_2073,(void*)0,(void*)0,(void*)0,&g_2073,&g_2073,(void*)0,&g_2073},{(void*)0,&g_2073,(void*)0,&g_2073,(void*)0,&g_2073,&g_2073,(void*)0,&g_2073,(void*)0}},{{&g_2073,&g_2073,(void*)0,&g_2073,(void*)0,&g_2073,(void*)0,&g_2073,(void*)0,&g_2073},{&g_2073,(void*)0,(void*)0,(void*)0,&g_2073,&g_2073,(void*)0,&g_2073,(void*)0,(void*)0},{&g_2073,&g_2073,(void*)0,&g_2073,&g_2073,(void*)0,&g_2073,&g_2073,(void*)0,(void*)0},{&g_2073,&g_2073,&g_2073,&g_2073,&g_2073,(void*)0,&g_2073,&g_2073,&g_2073,&g_2073},{(void*)0,&g_2073,&g_2073,&g_2073,(void*)0,&g_2073,&g_2073,&g_2073,&g_2073,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_2073,&g_2073,&g_2073,(void*)0,&g_2073},{(void*)0,(void*)0,(void*)0,&g_2073,(void*)0,(void*)0,(void*)0,&g_2073,(void*)0,&g_2073},{&g_2073,&g_2073,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_2073,&g_2073}}};
static int16_t ****g_2699 = &g_2700[1][7][4];
static uint32_t g_2901[4][3] = {{4294967289UL,4294967289UL,0xD56C7111L},{4294967289UL,4294967289UL,0xD56C7111L},{4294967289UL,4294967289UL,0xD56C7111L},{4294967289UL,4294967289UL,0xD56C7111L}};
static const uint64_t *g_2994 = &g_262;
static const uint64_t **g_2993 = &g_2994;
static uint8_t g_3081 = 0x4AL;
static uint8_t * const g_3080 = &g_3081;
static uint8_t * const *g_3079 = &g_3080;
static uint8_t * const **g_3078 = &g_3079;
static int8_t ***g_3201 = &g_64;
static int8_t ****g_3200 = &g_3201;
static int8_t *****g_3199 = &g_3200;
static uint32_t *g_3266 = &g_601;
static uint32_t **g_3265 = &g_3266;
static uint32_t ***g_3264 = &g_3265;
static int64_t g_3285 = 0x8A1680BB8D7F3334LL;
static uint32_t g_3303 = 4294967290UL;
static uint8_t *****g_3349 = (void*)0;



static const int16_t func_1(void);
static union U0 * const func_2(int8_t * p_3, int16_t p_4);
static int8_t * func_5(uint32_t p_6, uint32_t p_7);
static int32_t * const func_12(int32_t * const p_13, int8_t * p_14, const int32_t * p_15, int8_t * p_16);
static int8_t * func_24(int16_t p_25, const uint16_t p_26, uint32_t p_27);
static int8_t * func_30(const uint8_t p_31);
static int32_t * func_34(uint32_t p_35, union U0 p_36, uint16_t p_37, int8_t p_38);
static union U0 func_39(uint64_t p_40, const int8_t ** const p_41, int8_t * p_42);
static uint64_t func_50(int32_t * p_51, const int8_t ** const p_52);
static int32_t * func_53(int32_t p_54, int32_t * p_55, uint16_t p_56);
# 140 "<stdin>"
static const int16_t func_1(void)
{
    int32_t l_8 = (-9L);
    union U0 **l_3388 = &g_1762;
    int32_t **l_3391[2][9][1] = {{{(void*)0},{&g_111},{&g_111},{&g_111},{(void*)0},{&g_111},{&g_111},{&g_111},{&g_111}},{{(void*)0},{&g_111},{&g_111},{&g_111},{(void*)0},{&g_111},{&g_111},{&g_111},{&g_111}}};
    int i, j, k;
    (*l_3388) = func_2(func_5(l_8, l_8), l_8);
    g_617 = (g_430 = func_34(((**g_3265) = (***g_3264)), (*g_1762), (safe_sub_func_int8_t_s_s((**g_66), l_8)), l_8));
    return (**g_1283);
}







static union U0 * const func_2(int8_t * p_3, int16_t p_4)
{
    int32_t l_3358 = 0x4426FAC4L;
    union U0 l_3360 = {0};
    const int32_t **l_3385 = &g_617;
    int32_t **l_3386 = &g_111;
    uint64_t l_3387 = 1UL;
    for (g_1371 = 0; (g_1371 == (-9)); g_1371--)
    {
        const int8_t ** const l_3359 = &g_44;
        union U0 **l_3365 = &g_1762;
        const int32_t l_3370 = 0xC6221292L;
        int32_t *l_3371 = &g_96.f2;
        const int32_t **l_3372 = &g_617;
        uint16_t *l_3373 = &g_184;
        int64_t l_3380 = (-10L);
        (*l_3372) = &l_3370;
        (*g_2487) = ((((((((*l_3373) = 0x81F0L) || p_4) == 0xD6L) , ((**g_64) = ((**l_3372) || (((safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((***g_3264) && (safe_mul_func_uint16_t_u_u((&l_3360 != (void*)0), ((((((*****g_2602) = l_3380) != ((safe_sub_func_uint64_t_u_u(((**g_863) = (safe_sub_func_int8_t_s_s((((void*)0 != &g_1762) & p_4), (**g_43)))), l_3358)) , p_4)) != 0xDAL) ^ p_4) , p_4)))), (-6L))), p_4)) <= p_4) <= 18446744073709551614UL)))) > 253UL) || 0L) , (-1L));
        return (*g_1761);
    }
    (*l_3386) = func_12(&l_3358, (*g_66), ((*l_3385) = &g_2648[5][1]), (**g_3201));
    (**l_3386) = p_4;
    (*g_2487) ^= l_3387;
    return (*g_1761);
}







static int8_t * func_5(uint32_t p_6, uint32_t p_7)
{
    int32_t * const l_17 = &g_18[8];
    int8_t *l_19 = &g_20;
    const int32_t *l_23 = (void*)0;
    int8_t *l_28 = &g_20;
    int8_t *l_1809[8] = {(void*)0,(void*)0,&g_1371,(void*)0,(void*)0,&g_1371,(void*)0,(void*)0};
    uint8_t ***l_2342 = &g_546[5];
    uint32_t *l_2357 = &g_1078;
    uint32_t **l_2356 = &l_2357;
    uint32_t ***l_2355 = &l_2356;
    int8_t l_2370 = 0L;
    union U0 *l_2392 = &g_138;
    const int32_t l_2396[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint64_t **l_2413 = &g_864;
    uint8_t ****l_2419 = &g_545[0];
    const int64_t l_2453[7][2][7] = {{{(-3L),1L,0x09BBF73BC91A03DCLL,0x09BBF73BC91A03DCLL,1L,(-3L),0xB0059F0AD72A7422LL},{0xBCB0F1F8A7072EE8LL,0x09BBF73BC91A03DCLL,(-1L),0xB0059F0AD72A7422LL,0x3399F167E6262DCCLL,(-3L),(-3L)}},{{0xE68A7D7D4B927459LL,0x3399F167E6262DCCLL,0L,0x3399F167E6262DCCLL,0xE68A7D7D4B927459LL,0L,0xBCB0F1F8A7072EE8LL},{3L,0x09BBF73BC91A03DCLL,0x3399F167E6262DCCLL,0L,0x09BBF73BC91A03DCLL,0xB0059F0AD72A7422LL,0x09BBF73BC91A03DCLL}},{{(-3L),0x7991EE5052BDF33DLL,0x7991EE5052BDF33DLL,(-3L),0xBCB0F1F8A7072EE8LL,0L,0xE68A7D7D4B927459LL},{0xE68A7D7D4B927459LL,0L,0xBCB0F1F8A7072EE8LL,(-3L),0x7991EE5052BDF33DLL,0x7991EE5052BDF33DLL,(-3L)}},{{0x09BBF73BC91A03DCLL,0xB0059F0AD72A7422LL,0x09BBF73BC91A03DCLL,0L,0x3399F167E6262DCCLL,1L,0xE68A7D7D4B927459LL},{0xB0059F0AD72A7422LL,(-1L),0x09BBF73BC91A03DCLL,0xBCB0F1F8A7072EE8LL,3L,0xBCB0F1F8A7072EE8LL,0x09BBF73BC91A03DCLL}},{{0x3399F167E6262DCCLL,0x3399F167E6262DCCLL,0xBCB0F1F8A7072EE8LL,0x0045B34FEB13CC22LL,0L,1L,0xB0059F0AD72A7422LL},{0x0045B34FEB13CC22LL,0x3399F167E6262DCCLL,0x7991EE5052BDF33DLL,1L,1L,0x7991EE5052BDF33DLL,0x3399F167E6262DCCLL}},{{0x7991EE5052BDF33DLL,(-1L),0x3399F167E6262DCCLL,0x09BBF73BC91A03DCLL,0L,0L,0x0045B34FEB13CC22LL},{0x7991EE5052BDF33DLL,0xB0059F0AD72A7422LL,3L,0x3399F167E6262DCCLL,3L,0xB0059F0AD72A7422LL,0x7991EE5052BDF33DLL}},{{0x0045B34FEB13CC22LL,0L,0L,0x09BBF73BC91A03DCLL,0x3399F167E6262DCCLL,(-1L),0x7991EE5052BDF33DLL},{0x3399F167E6262DCCLL,0x7991EE5052BDF33DLL,1L,1L,0x7991EE5052BDF33DLL,0x3399F167E6262DCCLL,0x0045B34FEB13CC22LL}}};
    int32_t l_2480 = 0xBD0F6225L;
    int16_t **l_2482 = (void*)0;
    int32_t l_2501 = 0L;
    int32_t l_2502 = 0L;
    int32_t l_2505 = 3L;
    int32_t l_2513 = 0xE32586A3L;
    int32_t l_2514[1];
    const int32_t *l_2586 = (void*)0;
    uint8_t l_2607 = 0x87L;
    uint32_t *l_2628 = &g_601;
    uint32_t **l_2627[8] = {(void*)0,(void*)0,&l_2628,(void*)0,(void*)0,&l_2628,(void*)0,(void*)0};
    int16_t l_2651 = 0x1D1BL;
    int64_t l_2661 = 0xAF359DAC3E94A3A9LL;
    uint16_t *l_2689 = &g_1009;
    uint16_t **l_2688[3];
    uint16_t ***l_2687[7];
    int64_t **l_2728 = (void*)0;
    int64_t l_2877 = 0L;
    const int16_t ***l_2934 = (void*)0;
    const int16_t ****l_2933 = &l_2934;
    int32_t l_3051[6][2] = {{0x14105471L,0x14105471L},{0x14105471L,0x14105471L},{0x14105471L,0x14105471L},{0x14105471L,0x14105471L},{0x14105471L,0x14105471L},{0x14105471L,0x14105471L}};
    uint64_t l_3053 = 2UL;
    uint8_t * const **l_3077[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t l_3180 = 0x1D9B3D69EB7AC2D2LL;
    uint32_t l_3202 = 8UL;
    uint8_t *****l_3213 = &l_2419;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2514[i] = 0x54691793L;
    for (i = 0; i < 3; i++)
        l_2688[i] = &l_2689;
    for (i = 0; i < 7; i++)
        l_2687[i] = &l_2688[2];
lbl_2420:
    for (p_7 = 27; (p_7 <= 27); ++p_7)
    {
        int8_t **l_21 = (void*)0;
        int8_t **l_22 = &l_19;
        const int32_t *l_29 = &g_18[7];
        int8_t **l_1808 = (void*)0;
        int32_t l_1810 = 8L;
        const int32_t l_1811[10][8] = {{0xFBB35A95L,(-4L),9L,1L,1L,9L,(-4L),0xFBB35A95L},{0x76C9DCF2L,(-1L),0xFD709A5BL,1L,0xC482C46CL,0x291EE33EL,(-1L),(-1L)},{0xDABF3345L,0x7E1EB81EL,1L,0xFBB35A95L,1L,0x291EE33EL,0xFBB35A95L,0x09C9C3A2L},{1L,(-1L),(-1L),(-4L),0xDABF3345L,9L,0xDABF3345L,(-4L)},{0x09C9C3A2L,(-4L),0x09C9C3A2L,0x6287EB99L,(-1L),0xFD709A5BL,(-1L),(-1L)},{(-1L),(-1L),0x7E1EB81EL,(-1L),0x6287EB99L,1L,(-1L),0x09C9C3A2L},{(-1L),0xFBB35A95L,9L,0xE67A8E18L,(-1L),(-1L),0xC482C46CL,0xC482C46CL},{0x09C9C3A2L,0xDABF3345L,1L,1L,0xDABF3345L,0x09C9C3A2L,0x7E1EB81EL,0xE67A8E18L},{1L,(-1L),0x6287EB99L,(-1L),1L,0x7E1EB81EL,1L,0x76C9DCF2L},{0xDABF3345L,(-1L),9L,(-1L),0xC482C46CL,9L,(-1L),0xE67A8E18L}};
        int i, j;
    }
    for (g_641 = 0; (g_641 >= 13); ++g_641)
    {
        int8_t l_2375 = 4L;
        int32_t l_2388[1][1][5] = {{{0L,0L,0L,0L,0L}}};
        union U0 *l_2393[3][4][2] = {{{&g_96,&g_96},{(void*)0,&g_96},{(void*)0,&g_96},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        int32_t *l_2395 = &g_1342;
        int16_t ***l_2400 = &g_2073;
        int16_t ****l_2399 = &l_2400;
        int16_t *****l_2398 = &l_2399;
        uint8_t l_2477 = 0x4DL;
        int32_t l_2506 = 0x2DF446B0L;
        uint16_t *l_2532[3][1];
        uint16_t **l_2531 = &l_2532[0][0];
        uint32_t l_2563 = 0xA6A7B588L;
        int32_t l_2573[8][4] = {{0x024934B0L,0L,0x6F9DCD16L,0x6F9DCD16L},{0L,0L,0xD5C622FEL,0L},{0L,0x024934B0L,0xD5C622FEL,0x024934B0L},{0L,0L,0x6F9DCD16L,0xD5C622FEL},{0x024934B0L,0L,0L,0x024934B0L},{0L,0x024934B0L,0L,0L},{0L,0L,0L,0x6F9DCD16L},{0x024934B0L,0L,0x6F9DCD16L,0x6F9DCD16L}};
        int8_t l_2646[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
        const int32_t l_2684[10][2] = {{1L,0x6A4EDC1FL},{0x36A53D2CL,0x6A4EDC1FL},{1L,0x97674739L},{0x97674739L,1L},{0x6A4EDC1FL,0x36A53D2CL},{0x6A4EDC1FL,1L},{0x97674739L,0x97674739L},{1L,0x6A4EDC1FL},{0x36A53D2CL,0x6A4EDC1FL},{1L,0x97674739L}};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_2532[i][j] = &g_333;
        }
        for (g_601 = 0; (g_601 != 42); g_601 = safe_add_func_int32_t_s_s(g_601, 6))
        {
            union U0 l_2376 = {0};
            int32_t l_2391 = (-5L);
            int32_t **l_2394 = &g_111;
            uint64_t **l_2412 = &g_864;
            (*l_17) &= ((void*)0 != l_2355);
            if ((safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((((*l_2394) = func_53((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((((((*l_17) = (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((l_2370 = 4294967288UL), (((*l_28) ^= (safe_add_func_uint64_t_u_u(((((l_2375 |= p_6) == (p_7 >= (l_2376 , (safe_mul_func_uint8_t_u_u(((***g_1329) &= (((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_6, (p_7 , (safe_unary_minus_func_uint64_t_u((safe_mul_func_uint32_t_u_u(l_2388[0][0][4], (((p_7 || (safe_sub_func_uint8_t_u_u((&g_1078 == &g_1078), 0x12L))) && p_7) != p_6)))))))), (**g_1283))), 15)) , 65529UL) && l_2388[0][0][4])), l_2391))))) , l_2392) == l_2393[0][2][1]), 0x6A0122D800F4D4E2LL))) || p_7))) , p_7), (**g_1283)))) && (*g_547)) ^ p_6) == 0x1033L) | l_2388[0][0][1]), 7)), 0x7D8169B41DBC46D7LL)), &l_2388[0][0][4], p_7)) == l_2395), 3)) > (*l_2395)), l_2396[5])))
            {
                int32_t *l_2397 = &g_1342;
                g_430 = l_2397;
                (*l_2394) = l_2397;
                (*l_2394) = (*l_2394);
            }
            else
            {
                union U0 l_2401 = {0};
                uint8_t *l_2410 = &g_123;
                int16_t *l_2411 = &g_103;
                int32_t l_2414 = (-1L);
                int32_t **l_2415[2];
                uint8_t ****l_2417 = (void*)0;
                uint8_t *****l_2416[10][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_2415[i] = &g_430;
                (*g_430) &= (l_2398 == (void*)0);
                g_430 = ((*l_2394) = func_34(g_1118[3], l_2401, (((safe_sub_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(((**l_2394) , (*g_1284)), 5)), 18446744073709551615UL)), ((*l_2411) = ((void*)0 != l_2410)))) , l_2412) != l_2413), l_2414)) == 255UL) , (**l_2394)), (**l_2394)));
                (*l_17) = ((g_2418 = &g_545[0]) == (l_2419 = &g_545[0]));
                if ((*g_617))
                    continue;
            }
            if (p_6)
                goto lbl_2420;
        }
        for (g_2196 = 0; (g_2196 <= 13); g_2196 = safe_add_func_uint16_t_u_u(g_2196, 9))
        {
            int32_t l_2423[3];
            int8_t *l_2471[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_2486 = 0L;
            int32_t l_2504[10][4][6] = {{{(-9L),0x8530E6B9L,0L,0x0BAC48D8L,(-1L),(-9L)},{1L,1L,1L,1L,0xCA523A44L,(-3L)},{(-6L),1L,(-9L),0L,(-1L),(-1L)},{0L,0x8530E6B9L,0L,0x6FDC01D4L,0x6FDC01D4L,0L}},{{0xCA523A44L,0xCA523A44L,(-9L),0L,1L,(-5L)},{(-9L),0x0F174FA8L,0xF8BEA3A2L,1L,(-3L),(-9L)},{(-3L),(-9L),0xF8BEA3A2L,(-9L),0xCA523A44L,(-5L)},{(-1L),(-9L),(-9L),0L,1L,0L}},{{0L,1L,0L,(-9L),(-9L),(-1L)},{(-5L),0xCA523A44L,(-9L),0xF8BEA3A2L,(-9L),(-3L)},{(-9L),(-3L),1L,0xF8BEA3A2L,0x0F174FA8L,(-9L)},{(-5L),1L,0L,(-6L),(-9L),(-9L)}},{{1L,0L,0L,1L,3L,0x0BAC48D8L},{0xF8BEA3A2L,(-5L),1L,0L,1L,0L},{1L,(-9L),(-1L),0x8530E6B9L,1L,1L},{(-6L),(-5L),(-3L),0x0F174FA8L,3L,(-6L)}},{{(-9L),0L,1L,0L,(-9L),(-9L)},{0x0BAC48D8L,(-1L),1L,1L,1L,1L},{0L,(-3L),1L,(-1L),(-6L),1L},{1L,(-9L),1L,(-3L),0L,(-9L)}},{{(-6L),0xCA523A44L,1L,1L,0xCA523A44L,(-6L)},{(-9L),0L,(-3L),1L,(-9L),1L},{1L,(-6L),(-1L),1L,(-3L),0L},{1L,1L,1L,1L,(-1L),0x0BAC48D8L}},{{(-9L),(-9L),0L,1L,0L,(-9L)},{(-6L),3L,0x0F174FA8L,(-3L),(-5L),(-6L)},{1L,1L,0x8530E6B9L,(-1L),(-9L),1L},{0L,1L,0L,1L,(-5L),0xF8BEA3A2L}},{{0x0BAC48D8L,3L,1L,0L,0L,1L},{(-9L),(-9L),(-6L),0x0F174FA8L,(-1L),0x6FDC01D4L},{(-6L),1L,(-1L),0x8530E6B9L,(-3L),(-6L)},{1L,(-6L),(-1L),0L,(-9L),0x6FDC01D4L}},{{0xF8BEA3A2L,0L,(-6L),1L,0xCA523A44L,1L},{1L,0xCA523A44L,1L,(-6L),0L,0xF8BEA3A2L},{0x6FDC01D4L,(-9L),0L,(-1L),(-6L),1L},{(-6L),(-3L),0x8530E6B9L,(-1L),1L,(-6L)}},{{0x6FDC01D4L,(-1L),0x0F174FA8L,(-6L),(-9L),(-9L)},{1L,0L,0L,1L,3L,0x0BAC48D8L},{0xF8BEA3A2L,(-5L),1L,0L,1L,0L},{1L,(-9L),(-1L),0x8530E6B9L,1L,1L}}};
            int64_t **l_2528 = (void*)0;
            const uint16_t *l_2576[1][10][8] = {{{&g_1009,(void*)0,(void*)0,&g_1009,(void*)0,(void*)0,(void*)0,&g_1009},{(void*)0,(void*)0,(void*)0,(void*)0,&g_2516,&g_2516,(void*)0,(void*)0},{(void*)0,(void*)0,&g_2516,(void*)0,&g_1009,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_2516,(void*)0,(void*)0,&g_2516,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_2516,&g_2516,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_2516,&g_2516,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_2516,(void*)0,(void*)0,&g_2516,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_1009,(void*)0,(void*)0,(void*)0}}};
            const uint16_t **l_2575 = &l_2576[0][5][7];
            int16_t *****l_2585[8][7][4] = {{{&l_2399,(void*)0,(void*)0,&l_2399},{&l_2399,&l_2399,&l_2399,&l_2399},{&l_2399,&l_2399,&l_2399,(void*)0},{&l_2399,(void*)0,&l_2399,&l_2399},{&l_2399,(void*)0,(void*)0,&l_2399},{&l_2399,&l_2399,&l_2399,&l_2399},{&l_2399,&l_2399,&l_2399,&l_2399}},{{&l_2399,&l_2399,(void*)0,&l_2399},{&l_2399,&l_2399,(void*)0,&l_2399},{(void*)0,&l_2399,(void*)0,&l_2399},{(void*)0,(void*)0,&l_2399,&l_2399},{&l_2399,(void*)0,&l_2399,(void*)0},{&l_2399,&l_2399,&l_2399,&l_2399},{&l_2399,&l_2399,&l_2399,&l_2399}},{{(void*)0,(void*)0,(void*)0,&l_2399},{(void*)0,&l_2399,(void*)0,&l_2399},{&l_2399,&l_2399,(void*)0,(void*)0},{&l_2399,&l_2399,&l_2399,&l_2399},{&l_2399,&l_2399,&l_2399,&l_2399},{&l_2399,(void*)0,(void*)0,&l_2399},{&l_2399,&l_2399,&l_2399,&l_2399}},{{&l_2399,&l_2399,&l_2399,(void*)0},{&l_2399,(void*)0,&l_2399,&l_2399},{&l_2399,(void*)0,(void*)0,&l_2399},{&l_2399,&l_2399,&l_2399,&l_2399},{&l_2399,&l_2399,&l_2399,&l_2399},{&l_2399,&l_2399,(void*)0,&l_2399},{&l_2399,&l_2399,(void*)0,&l_2399}},{{(void*)0,&l_2399,(void*)0,&l_2399},{(void*)0,(void*)0,&l_2399,&l_2399},{&l_2399,(void*)0,&l_2399,(void*)0},{&l_2399,&l_2399,&l_2399,&l_2399},{&l_2399,&l_2399,&l_2399,&l_2399},{&l_2399,&l_2399,&l_2399,(void*)0},{&l_2399,(void*)0,&l_2399,&l_2399}},{{&l_2399,&l_2399,&l_2399,&l_2399},{(void*)0,&l_2399,&l_2399,&l_2399},{&l_2399,(void*)0,(void*)0,(void*)0},{&l_2399,&l_2399,(void*)0,&l_2399},{(void*)0,&l_2399,&l_2399,&l_2399},{&l_2399,&l_2399,&l_2399,(void*)0},{&l_2399,&l_2399,&l_2399,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{&l_2399,&l_2399,(void*)0,&l_2399},{&l_2399,(void*)0,&l_2399,&l_2399},{(void*)0,&l_2399,&l_2399,&l_2399},{&l_2399,(void*)0,&l_2399,&l_2399},{&l_2399,&l_2399,&l_2399,(void*)0},{&l_2399,(void*)0,&l_2399,(void*)0}},{{&l_2399,&l_2399,&l_2399,(void*)0},{(void*)0,&l_2399,&l_2399,&l_2399},{&l_2399,&l_2399,&l_2399,&l_2399},{&l_2399,&l_2399,&l_2399,(void*)0},{&l_2399,(void*)0,&l_2399,&l_2399},{&l_2399,&l_2399,&l_2399,&l_2399},{(void*)0,&l_2399,&l_2399,&l_2399}}};
            int64_t **l_2729 = &g_1231;
            uint8_t * const *l_2735 = &g_547;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2423[i] = 9L;
        }
    }
    for (g_601 = 0; (g_601 <= 9); ++g_601)
    {
        int32_t **l_2777[8][1];
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 1; j++)
                l_2777[i][j] = &g_111;
        }
        l_2586 = (g_111 = (void*)0);
        g_617 = &g_2643[1];
        (*l_17) = 1L;
        l_2586 = (void*)0;
    }
    if (((*l_17) = p_7))
    {
        return (*g_66);
    }
    else
    {
        uint32_t l_2783 = 18446744073709551607UL;
        int32_t l_2792[1];
        const int8_t *l_2882 = &g_1371;
        int32_t l_2894[6] = {(-1L),0L,(-1L),(-1L),0L,(-1L)};
        int8_t *l_2940 = (void*)0;
        uint16_t **l_2959 = &l_2689;
        uint8_t ***l_2963[1][10][3] = {{{&g_546[5],&g_546[4],&g_546[4]},{&g_546[5],&g_546[3],&g_546[5]},{&g_546[2],&g_546[4],&g_546[3]},{&g_546[2],&g_546[5],&g_546[5]},{&g_546[5],&g_546[5],&g_546[5]},{&g_546[5],&g_546[5],&g_546[2]},{&g_546[3],&g_546[4],&g_546[2]},{&g_546[5],&g_546[3],&g_546[5]},{&g_546[4],&g_546[4],&g_546[5]},{&g_546[5],&g_546[5],&g_546[3]}}};
        uint64_t **l_3005 = &g_864;
        int64_t **l_3011 = (void*)0;
        const union U0 *l_3027 = &g_138;
        int16_t *l_3031 = &g_2634;
        uint8_t l_3126 = 0x36L;
        uint8_t l_3146 = 0x99L;
        uint8_t l_3149 = 255UL;
        const int16_t ****l_3204 = &l_2934;
        int32_t l_3220 = 0x5F8D6787L;
        int16_t *****l_3284 = &g_2699;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2792[i] = (-5L);
    }
    return (****g_3199);
}







static int32_t * const func_12(int32_t * const p_13, int8_t * p_14, const int32_t * p_15, int8_t * p_16)
{
    int64_t l_2091 = (-1L);
    int64_t *****l_2092 = &g_1228;
    int64_t l_2145 = 0x87B182468A1A768FLL;
    int32_t l_2152 = 0xB0C152C8L;
    uint16_t ***l_2153 = (void*)0;
    const uint32_t l_2159 = 7UL;
    uint16_t l_2231 = 65529UL;
    int32_t l_2250 = (-1L);
    int32_t l_2251 = 0x1DCC01A6L;
    int32_t l_2252[4][8][4] = {{{0x0CC282A7L,0x945A2392L,0L,1L},{1L,(-1L),0L,1L},{0xCF1CE4C0L,1L,0x0CC282A7L,(-2L)},{8L,(-1L),1L,1L},{0xEEB8B137L,0xEEB8B137L,0L,1L},{3L,8L,0x0CC282A7L,(-1L)},{0L,(-5L),(-1L),0x0CC282A7L},{1L,(-5L),0xC19185B6L,(-1L)}},{{(-5L),8L,8L,1L},{1L,0xEEB8B137L,0L,1L},{0x945A2392L,(-1L),(-1L),(-2L)},{(-5L),1L,0L,1L},{(-1L),(-1L),(-1L),1L},{0xCF1CE4C0L,0x945A2392L,(-1L),(-2L)},{3L,0xBB96B057L,1L,0x945A2392L},{0L,1L,(-10L),2L}},{{(-1L),0L,(-1L),1L},{8L,(-1L),2L,0x2A40DDC7L},{2L,0x2A40DDC7L,(-1L),0L},{0x2A40DDC7L,0L,1L,0xBB96B057L},{0L,0xA988BE4CL,0xA988BE4CL,0L},{(-10L),1L,0L,0x2FDDFB94L},{0x2A40DDC7L,0L,3L,0x0CC282A7L},{0xBB96B057L,0xDFA29A77L,2L,0x0CC282A7L}},{{(-1L),0L,(-1L),0x2FDDFB94L},{(-1L),1L,0xEEB8B137L,0L},{1L,0xA988BE4CL,(-10L),0xBB96B057L},{0L,0L,(-1L),0L},{8L,0x2A40DDC7L,(-1L),0x2A40DDC7L},{0xBB96B057L,(-1L),(-1L),1L},{(-1L),0L,0L,2L},{0L,1L,1L,0L}}};
    int16_t l_2286 = (-4L);
    int32_t l_2313 = 0xBB83B0C4L;
    uint16_t *l_2328[3];
    uint16_t l_2329 = 65535UL;
    int16_t *l_2332[9][4] = {{&g_927,&g_1633,&g_927,&g_927},{&g_927,&g_927,&g_927,&g_927},{(void*)0,&g_927,&g_1633,&g_927},{&g_927,&g_1633,&g_1633,&g_1633},{(void*)0,(void*)0,&g_927,&g_1633},{&g_927,&g_1633,&g_927,&g_927},{&g_927,&g_927,&g_927,&g_927},{(void*)0,&g_927,&g_1633,&g_927},{&g_927,&g_1633,&g_1633,&g_1633}};
    uint8_t **l_2337[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2328[i] = &g_333;
    if ((safe_add_func_uint16_t_u_u(l_2091, ((l_2091 > (((***g_1229) | ((**g_863) ^= l_2091)) , (&g_1228 == l_2092))) || l_2091))))
    {
        (*g_430) = (!0x1425780AL);
    }
    else
    {
        int32_t l_2120[1][8][3] = {{{0x23D8E73FL,0x17F0B561L,0x17F0B561L},{1L,0xB648741AL,0xB648741AL},{0x23D8E73FL,0x17F0B561L,0x17F0B561L},{1L,0xB648741AL,0xB648741AL},{0x23D8E73FL,0x17F0B561L,0x17F0B561L},{1L,0xB648741AL,0xB648741AL},{0x23D8E73FL,0x17F0B561L,0x17F0B561L},{1L,0xB648741AL,0xB648741AL}}};
        int8_t l_2144 = (-4L);
        uint16_t ****l_2154 = &g_676;
        uint16_t ***l_2155 = (void*)0;
        int16_t *l_2160 = &g_1633;
        int32_t l_2202 = 0x09BD1547L;
        int32_t l_2244 = 0L;
        int32_t l_2246[7][8] = {{0x876C9810L,(-1L),(-1L),0x876C9810L,(-1L),(-1L),0x876C9810L,(-1L)},{0x876C9810L,0x876C9810L,9L,0x876C9810L,0x876C9810L,9L,0x876C9810L,0x876C9810L},{(-1L),0x876C9810L,(-1L),(-1L),0x876C9810L,(-1L),(-1L),0x876C9810L},{0x876C9810L,(-1L),(-1L),0x876C9810L,(-1L),(-1L),0x876C9810L,(-1L)},{0x876C9810L,0x876C9810L,9L,0x876C9810L,0x876C9810L,9L,0x876C9810L,0x876C9810L},{(-1L),0x876C9810L,(-1L),(-1L),0x876C9810L,(-1L),(-1L),0x876C9810L},{0x876C9810L,(-1L),(-1L),0x876C9810L,(-1L),(-1L),0x876C9810L,9L}};
        int i, j, k;
        for (g_1371 = (-1); (g_1371 == 13); ++g_1371)
        {
            const uint64_t *l_2104 = &g_102;
            const uint64_t **l_2103 = &l_2104;
            uint32_t *l_2105[6];
            int32_t l_2108 = 0x60064AE0L;
            union U0 l_2123 = {0};
            int i;
            for (i = 0; i < 6; i++)
                l_2105[i] = &g_601;
            (*g_430) = (l_2108 = ((*g_430) <= (safe_div_func_int32_t_s_s(((*p_16) , 0x8C94170DL), ((safe_sub_func_int32_t_s_s((*g_430), ((*p_13) ^= (+((((safe_lshift_func_int16_t_s_s(0xB86EL, 2)) , l_2103) == (void*)0) , l_2091))))) ^ (g_601--))))));
            for (g_601 = (-15); (g_601 != 36); ++g_601)
            {
                uint8_t l_2121 = 255UL;
                union U0 * const *l_2143 = &g_1762;
                for (g_123 = 0; (g_123 < 48); g_123++)
                {
                    int32_t l_2122 = 0L;
                    int8_t * const *l_2127 = &g_65;
                    int8_t * const **l_2126[5][4] = {{&l_2127,&l_2127,&l_2127,&l_2127},{&l_2127,&l_2127,&l_2127,&l_2127},{&l_2127,&l_2127,&l_2127,&l_2127},{&l_2127,&l_2127,&l_2127,&l_2127},{&l_2127,&l_2127,&l_2127,&l_2127}};
                    int8_t * const ***l_2125 = &l_2126[3][3];
                    int8_t * const ****l_2124 = &l_2125;
                    int i, j;
                    for (g_1426 = 27; (g_1426 != 22); g_1426--)
                    {
                        int64_t l_2115 = 0xBD81044390525972LL;
                        int32_t *l_2116 = &g_1282;
                        int32_t **l_2117 = (void*)0;
                        int32_t **l_2118 = &g_430;
                        int32_t **l_2119 = &g_111;
                        (*g_430) = l_2115;
                        (*l_2119) = ((*l_2118) = l_2116);
                        if (l_2120[0][7][2])
                            break;
                        l_2108 = (l_2122 ^= (((****g_1328) = l_2120[0][7][2]) ^ ((*p_16) |= l_2121)));
                    }
                    (*p_13) = ((*g_430) ^= ((l_2124 = (l_2123 , l_2124)) != (void*)0));
                }
                (*g_430) = ((l_2120[0][3][2] , g_1633) , (0x93D9B8DEL | ((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((((*g_1762) , (((*p_13) = (safe_add_func_int32_t_s_s((*p_13), l_2120[0][7][2]))) & (safe_sub_func_int8_t_s_s(((+(safe_mul_func_int16_t_s_s(0L, ((((((safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((l_2143 != (void*)0), l_2108)), 9L)) == 0L) , l_2108) != (-4L)) > 0x3B52L) && 0xDCEFL)))) > 0x2CL), l_2091)))) | l_2144) <= l_2091), 0xA340L)), (****g_1328))) <= 0x9EACL)));
            }
        }
        (*p_13) ^= ((l_2145 != (safe_mul_func_int16_t_s_s((((*l_2160) |= (safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((l_2152 = 0x5DB1L), ((l_2153 != (l_2155 = ((*l_2154) = l_2153))) && (safe_sub_func_int64_t_s_s(((+l_2120[0][7][2]) == ((l_2144 >= (l_2145 || (((((**g_1283) <= (((void*)0 != p_13) , l_2159)) , 0x98B8145DL) , l_2091) , 0x9781L))) || (*g_1284))), l_2091))))), 1))) >= 4UL), l_2091))) < l_2144);
        for (g_1282 = 0; (g_1282 >= (-22)); g_1282 = safe_sub_func_uint32_t_u_u(g_1282, 6))
        {
            int16_t l_2169 = (-2L);
            uint32_t *l_2184 = (void*)0;
            uint32_t **l_2183 = &l_2184;
            uint32_t *** const l_2182 = &l_2183;
            int32_t l_2236 = 5L;
            int32_t l_2245 = 0L;
            int32_t l_2247 = 0xB9CC354BL;
            int32_t l_2248 = 5L;
            int16_t l_2253 = 0x0172L;
            int32_t l_2254 = 0x7E908E57L;
            uint64_t l_2255 = 0x7B3E6F4621EB3836LL;
            int8_t l_2266 = 1L;
            for (g_1078 = 0; (g_1078 >= 32); g_1078 = safe_add_func_int64_t_s_s(g_1078, 9))
            {
                const uint32_t l_2178 = 9UL;
                int32_t l_2213[7] = {0xA4C316AEL,0xA4C316AEL,0xA4C316AEL,0xA4C316AEL,0xA4C316AEL,0xA4C316AEL,0xA4C316AEL};
                uint16_t *l_2217 = &g_1009;
                int32_t l_2243 = 0x8059287DL;
                uint32_t l_2273 = 1UL;
                int i;
                if ((safe_mod_func_uint32_t_u_u(((~((***g_1229) = (((*g_864) |= (0x1AL == ((+1L) <= ((*g_1762) , (((*g_430) ^ 0xE2616CB1L) && (l_2169 == (safe_sub_func_int8_t_s_s((((l_2152 = (safe_rshift_func_uint8_t_u_u(255UL, 4))) <= (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s(((void*)0 != p_15), 10)) , l_2144), (*p_14)))) != (*g_44)), l_2178)))))))) , 0x3B9A2C4926766D37LL))) ^ l_2169), l_2178)))
                {
                    uint32_t l_2179[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2179[i] = 0x81DA5FF3L;
                    (*p_13) = l_2179[3];
                    return p_13;
                }
                else
                {
                    uint16_t *l_2192 = (void*)0;
                    int32_t l_2195[8][10] = {{0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL,(-1L)},{0x1559EB9CL,0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL},{0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL,(-1L)},{0x1559EB9CL,0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL},{0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL,(-1L)},{0x1559EB9CL,0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL},{0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL,(-1L)},{0x1559EB9CL,0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL,(-1L),(-1L),0x1559EB9CL,0x1559EB9CL}};
                    int32_t *l_2239 = &g_18[8];
                    int32_t *l_2240 = (void*)0;
                    int32_t *l_2241 = &l_2236;
                    int32_t *l_2242[1];
                    int8_t l_2249 = 0x57L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_2242[i] = &l_2152;
                    if ((safe_add_func_int16_t_s_s((-3L), ((((void*)0 == l_2182) , 4294967287UL) , (safe_lshift_func_uint16_t_u_s((((((g_494[0] = l_2152) , ((safe_div_func_int32_t_s_s((~(safe_add_func_int8_t_s_s((l_2159 > (l_2152 |= 1UL)), (safe_div_func_int64_t_s_s((((void*)0 != (**l_2092)) ^ l_2195[4][5]), 1UL))))), 0x7CAA23FBL)) , g_2196)) == (*p_13)) , 0x9BC2D654L) >= l_2144), 3))))))
                    {
                        int8_t l_2201 = 0L;
                        uint16_t *l_2216 = &g_184;
                        uint8_t *l_2222 = &g_123;
                        int32_t l_2223 = 0x76E16E48L;
                        l_2202 = ((*p_13) = (((safe_mod_func_int8_t_s_s((l_2178 < l_2159), ((l_2178 > (l_2195[4][2] = l_2201)) , (((**g_1761) , 0xF7678398L) , (*p_16))))) <= 3UL) | 0UL));
                        (*p_13) = (safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((l_2236 = (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((l_2213[5] = l_2145), (l_2195[6][4] = ((safe_div_func_int64_t_s_s((l_2216 == l_2217), (safe_mul_func_uint8_t_u_u((l_2223 = ((*l_2222) ^= (--(*g_547)))), (((*l_2216) = (safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((**g_1230), l_2159)), (safe_add_func_uint16_t_u_u(l_2145, (!((((*g_44) , (((g_1449 ^= (((l_2231 , (safe_add_func_uint64_t_u_u((((((safe_add_func_int32_t_s_s(((((l_2195[5][2] & l_2144) && l_2144) >= (**g_43)) & l_2144), 0x8C8FD240L)) , 1L) >= l_2201) || l_2231) || 0x8BAAL), 1UL))) != 0x0FA044FBEF127C68LL) , l_2195[0][6])) , (*g_430)) > l_2201)) , 0x59L) < l_2145))))))) || l_2178))))) >= l_2169)))), 0x7AA301AFL))), l_2169)), 9UL)), l_2201));
                        if ((*g_430))
                            continue;
                    }
                    else
                    {
                        (*l_2154) = l_2153;
                        (*p_13) &= ((l_2213[5] & 18446744073709551615UL) == (((**g_1283) , l_2120[0][7][2]) == (safe_sub_func_int8_t_s_s((*p_14), 0x50L))));
                        return &g_1282;
                    }
                    l_2255++;
                }
                if ((*g_430))
                    continue;
                (*p_13) &= (((safe_lshift_func_uint16_t_u_u(((l_2246[6][4] |= (((safe_add_func_uint8_t_u_u(l_2145, (l_2152 , l_2243))) != l_2244) , ((*g_864) = ((safe_add_func_uint8_t_u_u(((safe_mul_func_int64_t_s_s((18446744073709551615UL & l_2266), ((((safe_rshift_func_uint16_t_u_s(((void*)0 != &g_1762), (safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((***g_1329) ^= l_2273), l_2091)), 0x31399753L)))) , l_2144) < l_2178) != l_2120[0][5][1]))) || l_2144), l_2120[0][7][2])) != l_2236)))) || l_2253), 5)) & 0x49F43E79L) != l_2120[0][7][2]);
            }
            return &g_106;
        }
    }
    (*p_13) = (safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_add_func_uint64_t_u_u((l_2091 < (((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((*g_1284), ((*p_16) | ((((*g_430) ^= ((((*g_65) < l_2286) || (safe_rshift_func_int8_t_s_s((l_2251 , (*p_14)), (safe_add_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((((safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s((((****l_2092) == (void*)0) ^ l_2252[2][7][1]), 4)) , l_2145) & 0UL), 0x176D5BEEL)) , 18446744073709551611UL) || (**g_863)), 4)) , g_2297) == (void*)0), (-5L)))))) > g_184)) == g_184) & 0L)))), 5)) <= 0x951F2489L) & (*g_547))), 0x2792985B0DD99215LL)) < l_2252[2][0][2]) , l_2145), l_2231)), 0x9A49F098L)), l_2231));
    for (g_103 = 18; (g_103 <= 23); g_103 = safe_add_func_uint16_t_u_u(g_103, 8))
    {
        const int8_t ****l_2300 = (void*)0;
        int32_t l_2314 = 0x5475D3CAL;
        int32_t l_2315 = 0L;
        l_2315 ^= (((void*)0 != l_2300) , (((safe_div_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((l_2251 >= (safe_rshift_func_uint8_t_u_s(((*p_13) | (safe_sub_func_int64_t_s_s(l_2252[2][7][1], (safe_add_func_uint32_t_u_u(l_2251, (safe_mod_func_uint64_t_u_u((9L != (((l_2250 = 0x96ECL) || ((((*g_430) = (*p_13)) , (*p_16)) > 0xCAL)) >= 0L)), l_2313))))))), 5))) == 1L), l_2314)) , 0x61L), l_2159)) , (-9L)) < (*g_547)));
        (*g_430) = 0x04D53676L;
    }
    (*g_430) = (((safe_rshift_func_int8_t_s_u((*p_14), 2)) , (safe_lshift_func_uint16_t_u_s((((safe_div_func_int8_t_s_s(((*g_1231) < l_2159), (7UL ^ (safe_add_func_int16_t_s_s((l_2152 = (safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((*g_1284), 0x751AL)), (l_2251 = (--l_2329))))), (safe_sub_func_uint16_t_u_u(l_2145, (((((**g_863) |= l_2250) || (l_2337[4] == l_2337[4])) <= l_2313) <= 0xF3007B62D9E77BBBLL)))))))) && 0x79L) || l_2231), l_2286))) & l_2286);
    return &g_1342;
}







static int8_t * func_24(int16_t p_25, const uint16_t p_26, uint32_t p_27)
{
    int32_t l_1841 = 3L;
    int32_t l_1853 = (-5L);
    int32_t l_1872 = 0xFD766452L;
    uint64_t *l_1958 = &g_102;
    union U0 l_1972 = {0};
    int16_t *l_1979[5][10][5] = {{{&g_365,&g_103,(void*)0,&g_927,&g_927},{&g_103,&g_1633,&g_103,&g_365,&g_103},{&g_103,&g_927,&g_103,&g_1633,&g_365},{&g_365,(void*)0,&g_927,&g_103,&g_927},{&g_1633,&g_927,&g_103,&g_365,&g_103},{&g_1633,&g_1633,&g_103,&g_927,&g_103},{&g_365,&g_103,(void*)0,(void*)0,&g_927},{(void*)0,(void*)0,&g_1633,&g_365,&g_365},{&g_365,&g_103,&g_365,&g_365,&g_103},{&g_927,&g_1633,&g_103,&g_365,&g_927}},{{&g_927,&g_927,&g_927,&g_365,(void*)0},{&g_927,(void*)0,&g_365,(void*)0,&g_365},{&g_927,&g_927,&g_365,&g_927,&g_927},{&g_927,&g_1633,&g_365,&g_365,&g_1633},{&g_365,&g_103,&g_365,&g_103,(void*)0},{(void*)0,&g_927,&g_927,&g_1633,&g_1633},{&g_365,&g_103,&g_1633,&g_103,&g_927},{(void*)0,&g_1633,&g_365,&g_103,&g_103},{(void*)0,&g_927,(void*)0,&g_927,&g_927},{&g_365,&g_927,&g_365,&g_103,&g_103}},{{&g_927,(void*)0,&g_927,&g_103,(void*)0},{&g_927,&g_103,&g_927,(void*)0,&g_365},{&g_365,&g_365,&g_927,&g_1633,&g_927},{(void*)0,&g_103,&g_927,&g_365,&g_927},{(void*)0,(void*)0,&g_927,&g_103,&g_927},{&g_103,(void*)0,&g_365,&g_927,&g_927},{&g_103,&g_927,(void*)0,&g_365,&g_365},{&g_365,(void*)0,&g_365,&g_365,(void*)0},{&g_927,(void*)0,&g_1633,&g_365,&g_103},{&g_927,&g_103,&g_1633,&g_365,&g_927}},{{&g_103,&g_365,&g_365,&g_927,&g_103},{&g_927,&g_103,&g_103,&g_103,&g_927},{&g_927,(void*)0,&g_103,&g_365,(void*)0},{&g_365,&g_927,&g_365,&g_1633,&g_103},{&g_103,&g_927,&g_1633,(void*)0,(void*)0},{&g_103,&g_1633,&g_1633,&g_103,&g_927},{(void*)0,&g_1633,&g_365,&g_103,&g_103},{(void*)0,&g_927,(void*)0,&g_927,&g_927},{&g_365,&g_927,&g_365,&g_103,&g_103},{&g_927,(void*)0,&g_927,&g_103,(void*)0}},{{&g_927,&g_103,&g_927,(void*)0,&g_365},{&g_365,&g_365,&g_927,&g_1633,&g_927},{(void*)0,&g_103,&g_927,&g_365,&g_927},{(void*)0,(void*)0,&g_927,&g_103,&g_927},{&g_103,(void*)0,&g_365,&g_927,&g_927},{&g_103,&g_927,(void*)0,&g_365,&g_365},{&g_365,(void*)0,&g_365,&g_365,(void*)0},{&g_927,(void*)0,&g_1633,&g_365,&g_103},{&g_927,&g_103,&g_1633,&g_365,&g_927},{&g_103,&g_365,&g_365,&g_927,&g_103}}};
    int16_t **l_1978 = &l_1979[0][4][1];
    int32_t l_1999 = (-1L);
    int32_t l_2000[6];
    int64_t l_2009 = 0x40E71F69F7D66CF0LL;
    uint64_t l_2010 = 0x632CF1ECA1C3F7D0LL;
    int8_t ***l_2088 = &g_66;
    int8_t ****l_2087 = &l_2088;
    int8_t *****l_2086 = &l_2087;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_2000[i] = (-6L);
    for (g_601 = (-12); (g_601 <= 45); g_601++)
    {
        int64_t ***l_1837 = &g_1230;
        int32_t l_1844[1];
        union U0 l_1922 = {0};
        uint64_t *l_1957 = (void*)0;
        uint16_t ****l_1969 = &g_676;
        uint64_t l_2018 = 0x38F657C5C0C97DC7LL;
        int16_t l_2036 = 3L;
        int8_t *l_2040[9] = {&g_1179,&g_1179,&g_1179,&g_1179,&g_1179,&g_1179,&g_1179,&g_1179,&g_1179};
        int16_t ***l_2056 = &l_1978;
        int16_t ****l_2055 = &l_2056;
        int16_t *****l_2054[1][2];
        int i, j;
        for (i = 0; i < 1; i++)
            l_1844[i] = 4L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_2054[i][j] = &l_2055;
        }
        for (g_1009 = 0; (g_1009 < 47); g_1009 = safe_add_func_int16_t_s_s(g_1009, 9))
        {
            int8_t *l_1816 = &g_20;
            return l_1816;
        }
    }
    return (****l_2086);
}







static int8_t * func_30(const uint8_t p_31)
{
    int8_t *l_45 = (void*)0;
    uint8_t *** const *l_1788 = &g_545[0];
    int32_t l_1791[6][10][4] = {{{0x7A6B64C7L,0xAD4FB581L,0xC4481446L,0x935BBA71L},{4L,0x8BD7C122L,9L,0L},{1L,0xE5C4BD0BL,0xDD0144B7L,(-1L)},{1L,0x45FE0E8BL,0x5049C02CL,(-2L)},{0x9FC96C5FL,0x9F430A7CL,(-1L),(-9L)},{(-1L),0xAD4FB581L,1L,0x562AA58CL},{4L,4L,0L,1L},{1L,0xBD5F1E6BL,0x108EC7D8L,0x9F430A7CL},{0x612854A9L,(-8L),(-1L),0xE5C4BD0BL},{0xC81CD821L,0x45FE0E8BL,1L,(-1L)}},{{0x239B4B8CL,1L,0x2C76B699L,0x4077A297L},{(-1L),(-1L),0L,1L},{0x3BCE0CA4L,6L,0x935BBA71L,0xAD4FB581L},{1L,0x7A6B64C7L,(-7L),0L},{0x045F8CC9L,0L,0x72E6CAC4L,0x4E24D84FL},{(-8L),(-1L),0x045F8CC9L,5L},{0L,(-1L),0xBD5F1E6BL,0xF209BC0EL},{0x79077CA4L,0x239B4B8CL,0x45FE0E8BL,(-1L)},{(-1L),0L,1L,0x38FD158CL},{0xB0A68FC0L,0xD19E769AL,6L,0L}},{{0x5E7AF4B1L,0x1881CA19L,(-7L),(-7L)},{(-1L),(-1L),(-6L),(-7L)},{0x0BDC1C16L,0x4077A297L,0xB7EF8072L,(-4L)},{0x5049C02CL,(-9L),1L,0xB7EF8072L},{0x108EC7D8L,(-9L),0xDF6DD69CL,(-4L)},{(-9L),0x4077A297L,0x98418FEAL,(-7L)},{0x38FD158CL,(-1L),0x5F60391FL,(-7L)},{(-3L),0x1881CA19L,0x3BCE0CA4L,0L},{0xC4481446L,0xD19E769AL,1L,0x38FD158CL},{0xDF6DD69CL,0L,0L,(-1L)}},{{0xDDD47991L,0x239B4B8CL,4L,0xF209BC0EL},{0xAD4FB581L,(-1L),(-9L),5L},{0L,(-1L),0x8BD7C122L,0x4E24D84FL},{0L,0L,(-1L),0L},{0x935BBA71L,0x7A6B64C7L,0x79077CA4L,0xAD4FB581L},{(-4L),6L,0L,1L},{0xA4AB2677L,(-1L),5L,0x4077A297L},{0x98418FEAL,1L,0xEECBDA3DL,(-1L)},{(-1L),0x45FE0E8BL,0x9FC96C5FL,0xE5C4BD0BL},{(-9L),(-8L),(-7L),0x9F430A7CL}},{{0xD19E769AL,0xBD5F1E6BL,4L,1L},{0x8BD7C122L,4L,0xB82A840CL,0x562AA58CL},{0x9F430A7CL,0xAD4FB581L,0xDDD47991L,(-9L)},{0xBD5F1E6BL,0x9F430A7CL,0xF209BC0EL,(-2L)},{0xEECBDA3DL,0L,9L,(-1L)},{(-1L),1L,(-1L),0xDF6DD69CL},{0xEF87231AL,0xB0A68FC0L,0xE5C4BD0BL,4L},{0xA2AA6BFCL,0xAA8DE51FL,(-1L),0xB0A68FC0L},{1L,0L,(-1L),0x83DF0A71L},{0xA2AA6BFCL,9L,0xE5C4BD0BL,1L}},{{0xEF87231AL,0x78B6795CL,(-1L),0x98418FEAL},{(-1L),0x3D5582C1L,0L,0xAD4FB581L},{1L,0x38FD158CL,6L,0x4E24D84FL},{0x289227ACL,0x7A6B64C7L,0x8BD7C122L,0x83DF0A71L},{(-1L),0xDD0144B7L,1L,0xA2DB84ABL},{0xB0A68FC0L,(-7L),(-7L),(-9L)},{(-7L),0x8BD7C122L,0x108EC7D8L,0xC4481446L},{1L,4L,0xC4481446L,6L},{(-1L),0x239B4B8CL,1L,0x2C76B699L},{0x3D5582C1L,4L,0L,0xBD5F1E6BL}}};
    int16_t *l_1794 = &g_1633;
    int32_t l_1795 = 3L;
    union U0 l_1796 = {0};
    int32_t *l_1797 = &g_18[8];
    int32_t **l_1798 = &g_430;
    uint32_t l_1801 = 1UL;
    int32_t *l_1802 = (void*)0;
    int32_t *l_1803 = &g_18[4];
    int32_t *l_1804[10][1][7] = {{{&g_635,&l_1791[4][5][0],&g_106,(void*)0,&g_635,(void*)0,(void*)0}},{{&l_1791[0][4][0],&g_635,&g_18[3],&g_635,&l_1791[0][4][0],&g_1342,&g_635}},{{&g_106,&l_1791[4][5][0],(void*)0,&l_1795,&l_1791[0][4][0],&g_635,&l_1791[0][4][0]}},{{&l_1791[3][5][2],&g_18[5],&g_18[5],&l_1791[3][5][2],&g_635,&l_1795,&g_106}},{{&g_106,&l_1795,&g_635,&l_1791[3][5][2],&g_18[5],&g_18[5],&l_1791[3][5][2]}},{{&l_1791[0][4][0],&g_635,&l_1791[0][4][0],&l_1795,(void*)0,&l_1791[4][5][0],&g_106}},{{&g_635,&g_1342,&l_1791[0][4][0],&g_635,&g_18[3],&g_635,&l_1791[0][4][0]}},{{(void*)0,(void*)0,&g_635,(void*)0,&g_106,&l_1791[4][5][0],&g_635}},{{(void*)0,(void*)0,&g_18[5],&l_1791[4][5][0],&l_1791[4][5][0],&g_18[5],(void*)0}},{{&g_18[5],&g_1342,(void*)0,&l_1791[0][4][0],&g_106,&l_1795,(void*)0}}};
    uint32_t l_1805[3][2][3];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
                l_1805[i][j][k] = 0UL;
        }
    }
    (*l_1798) = (l_1797 = func_34((func_39(p_31, g_43, l_45) , (((safe_mod_func_int8_t_s_s((((*g_65) = (l_1788 != &g_545[0])) & (~(**g_863))), (((safe_unary_minus_func_int32_t_s(((*g_430) = l_1791[0][4][0]))) ^ (l_1795 &= ((((safe_mod_func_int8_t_s_s((((*l_1794) ^= (p_31 == l_1791[0][4][0])) < l_1791[0][4][0]), p_31)) <= (*g_547)) < g_1078) , p_31))) && p_31))) > 3UL) <= (*g_547))), l_1796, p_31, l_1791[0][4][0]));
    for (g_601 = 0; (g_601 <= 46); g_601++)
    {
        l_1801 ^= p_31;
    }
    l_1805[0][1][1]--;
    (*g_430) &= p_31;
    return l_45;
}







static int32_t * func_34(uint32_t p_35, union U0 p_36, uint16_t p_37, int8_t p_38)
{
    return &g_106;
}







static union U0 func_39(uint64_t p_40, const int8_t ** const p_41, int8_t * p_42)
{
    int32_t l_46 = 0xE3D4752EL;
    int32_t *l_47 = &g_18[3];
    int8_t **l_63 = (void*)0;
    int8_t ***l_62[4];
    const int8_t ** const l_473 = &g_44;
    int16_t *l_1427 = (void*)0;
    int16_t *l_1428 = &g_927;
    int32_t *l_1429 = &g_1342;
    const int8_t l_1447 = 1L;
    int64_t *l_1448 = &g_1449;
    int16_t l_1450 = 1L;
    union U0 l_1458[7] = {{0},{0},{0},{0},{0},{0},{0}};
    int16_t * const * const *l_1465 = (void*)0;
    int16_t * const * const * const *l_1464 = &l_1465;
    uint16_t ****l_1524 = &g_676;
    int64_t l_1531 = 0xD3D4EE2DFDB67C17LL;
    int32_t l_1540 = 8L;
    int32_t l_1542 = 5L;
    int32_t l_1546 = (-1L);
    int32_t l_1547 = 0x371B1647L;
    int32_t l_1550 = 0xFE2480D0L;
    int32_t l_1553[9][4] = {{0x6FF3183EL,0L,0L,0L},{0L,0xFA57B725L,0L,0L},{0x6FF3183EL,0x6FF3183EL,0L,0L},{(-1L),0xFA57B725L,(-1L),0L},{(-1L),0L,0L,(-1L)},{0x6FF3183EL,0L,0L,0L},{0L,0xFA57B725L,0L,0L},{0x6FF3183EL,0x6FF3183EL,0L,0L},{(-1L),0xFA57B725L,(-1L),0L}};
    int32_t l_1585[6] = {0L,(-4L),0L,0L,(-4L),0L};
    uint32_t *l_1617[7];
    uint32_t **l_1616[1][8] = {{&l_1617[5],&l_1617[5],&l_1617[5],&l_1617[5],&l_1617[5],&l_1617[5],&l_1617[5],&l_1617[5]}};
    uint32_t ***l_1615[2];
    uint32_t l_1619 = 4294967295UL;
    int64_t l_1624 = 0x09B683F155A66E07LL;
    uint32_t l_1668 = 0x72CC8A43L;
    uint8_t l_1721 = 5UL;
    uint64_t **l_1747 = &g_864;
    uint8_t **l_1767 = &g_547;
    int32_t *l_1782 = &g_18[5];
    const int32_t l_1785 = 0x8044392BL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_62[i] = &l_63;
    for (i = 0; i < 7; i++)
        l_1617[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_1615[i] = &l_1616[0][4];
    (*l_47) |= l_46;
    (*l_1429) &= ((((*l_47) = ((*l_1428) |= (safe_div_func_uint64_t_u_u(func_50(func_53(((((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u(g_11)), (g_18[8] , (safe_sub_func_int8_t_s_s(((((p_40 < ((g_64 = &p_42) != (g_66 = &g_65))) == (safe_lshift_func_uint8_t_u_s((((6L & (**g_43)) , ((void*)0 != &p_41)) ^ 0x8EF5D3CC114FF6A9LL), (**p_41)))) && 1UL) , (*l_47)), g_11))))) && 0x59CDE89C674F9898LL) , &g_18[8]) != l_47), l_47, p_40), l_473), (**g_1230))))) & 0x6002L) | g_1282);
    if ((safe_div_func_int16_t_s_s((((*l_1448) |= ((safe_sub_func_int8_t_s_s((((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(0xB665L, ((safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(p_40)), (*g_430))) < ((**g_1230) = (p_40 == (safe_sub_func_int16_t_s_s((*g_1284), (safe_rshift_func_int16_t_s_s(((*l_47) , p_40), 2))))))))), (((*l_1429) || (safe_sub_func_uint16_t_u_u(((*g_1284) < (*l_47)), 1UL))) <= (*l_1429)))) , (***g_1329)) , (**p_41)), l_1447)) != (*l_47))) , l_1450), (*l_47))))
    {
        const int64_t *l_1454 = &g_1335;
        const int64_t **l_1453 = &l_1454;
        int64_t *l_1455 = (void*)0;
        int32_t l_1462 = 0xC8ACF9FCL;
        int32_t l_1463 = 0L;
        int16_t l_1468 = 0x4D34L;
        uint8_t *l_1469 = (void*)0;
        uint16_t ****l_1491[7][9] = {{&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676},{&g_676,&g_676,&g_676,&g_676,&g_676,(void*)0,&g_676,(void*)0,&g_676},{&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,(void*)0,&g_676,(void*)0},{&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,(void*)0,&g_676},{(void*)0,&g_676,&g_676,&g_676,&g_676,&g_676,&g_676,(void*)0,&g_676},{&g_676,&g_676,(void*)0,&g_676,&g_676,&g_676,&g_676,(void*)0,&g_676},{&g_676,(void*)0,&g_676,&g_676,(void*)0,&g_676,&g_676,(void*)0,&g_676}};
        int32_t l_1541 = (-2L);
        int32_t l_1548 = 0x089601DFL;
        int32_t l_1549 = 0x3058600DL;
        int32_t l_1552 = 0x484CF674L;
        int32_t l_1557 = 0L;
        int32_t l_1558 = (-5L);
        int32_t l_1560 = 0x69A21A06L;
        int32_t l_1562 = 1L;
        int32_t l_1563 = 1L;
        union U0 l_1579 = {0};
        int64_t l_1588 = 0xC26A54FBB8DEC4BALL;
        int64_t l_1684 = (-1L);
        uint8_t l_1685 = 255UL;
        int32_t *l_1686 = &l_1553[5][3];
        int i, j;
        if (((*g_864) < ((safe_mod_func_int64_t_s_s((((*l_1453) = (***g_1228)) != (l_1448 = l_1455)), (((((0x7D3EB4A91FC6E486LL ^ (((safe_add_func_uint16_t_u_u(((((l_1458[2] , (!((((safe_sub_func_uint16_t_u_u(7UL, ((p_40 , (l_1462 |= (**g_1230))) > (*l_1429)))) > (*g_864)) > l_1463) < (**g_863)))) < 1UL) < l_1463) , l_1462), p_40)) < p_40) , l_1463)) < (*l_47)) , l_1464) != (void*)0) , l_1462))) > l_1463)))
        {
            uint16_t l_1470[5][1][4] = {{{65535UL,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL}}};
            const union U0 l_1471 = {0};
            int64_t *l_1509[1][10][9];
            int64_t ** const l_1508 = &l_1509[0][6][7];
            int64_t ** const *l_1507 = &l_1508;
            int64_t ** const **l_1506[7] = {&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,&l_1507,&l_1507};
            int64_t ** const ***l_1505 = &l_1506[6];
            int32_t *l_1528 = &g_106;
            int32_t l_1544 = 0L;
            int32_t l_1551 = 2L;
            int32_t l_1554 = 0L;
            int32_t l_1561 = 0xDCCE880DL;
            int32_t l_1565[5] = {0xFB2CB33BL,0xFB2CB33BL,0xFB2CB33BL,0xFB2CB33BL,0xFB2CB33BL};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    for (k = 0; k < 9; k++)
                        l_1509[i][j][k] = &g_1449;
                }
            }
            for (l_46 = 0; (l_46 > (-25)); l_46 = safe_sub_func_int8_t_s_s(l_46, 2))
            {
                int32_t l_1494 = 0x15A720C0L;
                int32_t l_1515 = 0L;
                uint16_t ****l_1525 = &g_676;
                int64_t *l_1534 = &g_1449;
                int32_t l_1543 = 0x6234181EL;
                int16_t l_1545 = 0x1E50L;
                int32_t l_1555 = 1L;
                int32_t l_1556 = 0x87756B85L;
                int32_t l_1559 = 0L;
                int32_t l_1564 = 0x6691B2B7L;
                int32_t l_1566 = 1L;
                union U0 l_1571 = {0};
                (*l_47) = (((l_1468 , l_1469) != l_1469) > ((p_40 , (((void*)0 == &g_1282) >= (l_1463 = (l_1470[3][0][3] != ((l_1471 , p_40) && (**p_41)))))) , (**g_43)));
                if (((*l_47) = ((!l_1468) <= ((***g_1329) |= ((((safe_lshift_func_uint16_t_u_s((((safe_sub_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((safe_add_func_int16_t_s_s(0x56D7L, (l_1494 = (1L == ((**g_863) >= (safe_mod_func_int16_t_s_s((safe_add_func_int64_t_s_s((0x5FL > (safe_sub_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((void*)0 != l_1491[1][8]), (p_40 > (safe_lshift_func_uint16_t_u_s((0x4F72L & (*g_1284)), 5))))) | p_40), (**p_41)))), (****g_1228))), l_1463))))))) , (*l_47)), g_1282)), p_40)) , p_40) != (*l_47)), (*g_1284))) | 0xA0DD03727239CB6ALL) , 0x9537F9E1L) && 3UL)))))
                {
                    int64_t *****l_1495 = &g_1228;
                    (*l_1495) = &g_1229;
                }
                else
                {
                    int64_t ** const *l_1504 = &g_1230;
                    int64_t ** const **l_1503 = &l_1504;
                    int64_t ** const ***l_1502 = &l_1503;
                    int32_t *l_1514 = &l_1458[2].f2;
                    int16_t *l_1523 = &l_1468;
                    int32_t l_1526 = 0xBCF05E2DL;
                    int32_t **l_1527[9][4] = {{&l_1429,&l_1429,&l_47,&l_1429},{&l_1429,&l_47,&l_47,&l_1429},{&l_47,&l_1429,&l_47,&l_47},{&l_1429,&l_1429,&l_47,&l_1429},{&l_1429,&l_47,&l_47,&l_1429},{&l_47,&l_1429,&l_47,&l_47},{&l_1429,&l_1429,&l_47,&l_1429},{&l_1429,&l_47,&l_47,&l_1429},{&l_47,&l_1429,&l_47,&l_47}};
                    uint32_t *l_1529 = &g_641;
                    uint8_t *l_1530[7];
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_1530[i] = &g_123;
                    l_1528 = &l_1462;
                    (*l_1429) ^= ((p_40 > ((l_1531 = (((*l_1528) = ((*l_1529) ^= ((((*l_47) &= 0L) && (*g_430)) < 9UL))) , ((*g_547) = 254UL))) | ((g_494[0] | (((***g_1229) = 1L) , ((((safe_sub_func_int8_t_s_s(((p_40 , (**l_1504)) != l_1534), l_1515)) , l_1494) & p_40) && (-7L)))) ^ (**p_41)))) > l_1463);
                }
                for (g_365 = (-1); (g_365 != (-7)); g_365--)
                {
                    int32_t *l_1539[1];
                    uint32_t l_1567[3][5][2] = {{{4294967288UL,0x25B4CC33L},{0xFDE5DBB2L,0x1BF67B98L},{0x25B4CC33L,4294967295UL},{4294967295UL,4294967292UL},{0x1BF67B98L,4294967295UL}},{{4294967295UL,4294967295UL},{0x1BF67B98L,4294967292UL},{4294967295UL,4294967295UL},{0x25B4CC33L,0x1BF67B98L},{0xFDE5DBB2L,0x25B4CC33L}},{{4294967288UL,1UL},{4294967288UL,0x25B4CC33L},{0xFDE5DBB2L,0x1BF67B98L},{0x25B4CC33L,4294967295UL},{4294967295UL,4294967292UL}}};
                    uint16_t l_1582 = 6UL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1539[i] = &g_1282;
                    (*l_1528) ^= (safe_lshift_func_uint16_t_u_s(((l_1515 , 1UL) <= (**g_863)), 13));
                    l_1567[0][0][0]--;
                    if ((*g_430))
                    {
                        int32_t **l_1570 = &l_47;
                        l_1539[0] = &l_1560;
                        (*l_1570) = (void*)0;
                        return l_1571;
                    }
                    else
                    {
                        union U0 *l_1576 = &l_1458[2];
                        int32_t **l_1580 = &g_111;
                        int32_t l_1581 = 0L;
                        int16_t l_1586 = 0x01E7L;
                        int32_t l_1587 = 0x14626A37L;
                        uint16_t l_1589[5][5] = {{0xD8D9L,0x9157L,65535UL,65534UL,65534UL},{0x9157L,0xD8D9L,0x9157L,65535UL,65534UL},{7UL,0x0AA2L,65534UL,0x0AA2L,7UL},{0x9157L,0x0AA2L,0xD8D9L,7UL,0xD8D9L},{0xD8D9L,0xD8D9L,65534UL,7UL,0UL}};
                        int i, j;
                        (*l_1580) = func_53((safe_rshift_func_int8_t_s_s(((((((l_1471 , ((*l_1528) >= (((((**g_1228) = (**g_1228)) != (void*)0) , (((8UL < (g_103 = (p_40 < ((l_1576 != l_1576) != (safe_add_func_int32_t_s_s(((l_1579 , 1UL) == p_40), 0x85B8348BL)))))) <= 0xE7L) , p_40)) & 1L))) > (*g_44)) || 0x19289E8A6010F95FLL) , p_40) , 0xDD2BDC12051825C3LL) < (*g_864)), 4)), l_1539[0], p_40);
                        l_1582++;
                        (*l_47) = 0x3AD1E7E0L;
                        ++l_1589[4][0];
                    }
                }
            }
            return l_1579;
        }
        else
        {
            uint16_t * const l_1609 = &g_333;
            uint16_t * const *l_1608 = &l_1609;
            uint32_t *l_1614 = &g_494[0];
            uint32_t **l_1613 = &l_1614;
            uint32_t ***l_1612[1][9][5] = {{{(void*)0,&l_1613,&l_1613,(void*)0,&l_1613},{(void*)0,&l_1613,&l_1613,(void*)0,&l_1613},{&l_1613,&l_1613,&l_1613,&l_1613,&l_1613},{(void*)0,&l_1613,&l_1613,(void*)0,&l_1613},{(void*)0,&l_1613,&l_1613,(void*)0,&l_1613},{&l_1613,&l_1613,&l_1613,&l_1613,&l_1613},{(void*)0,&l_1613,&l_1613,&l_1613,&l_1613},{&l_1613,&l_1613,(void*)0,&l_1613,&l_1613},{&l_1613,&l_1613,(void*)0,&l_1613,&l_1613}}};
            int32_t l_1618 = 0L;
            int32_t l_1623 = (-1L);
            int i, j, k;
            for (l_1468 = 7; (l_1468 != 7); l_1468 = safe_add_func_uint8_t_u_u(l_1468, 9))
            {
                uint16_t *l_1607 = &g_184;
                uint16_t **l_1606 = &l_1607;
                int8_t l_1636 = (-5L);
                if ((safe_div_func_int16_t_s_s((((((safe_mul_func_uint16_t_u_u((((((safe_mul_func_uint8_t_u_u(((((safe_div_func_int16_t_s_s(p_40, p_40)) | (((l_1619 |= (l_1618 ^= ((l_1606 == l_1608) && (((safe_lshift_func_int8_t_s_s(0x30L, 3)) , l_1612[0][2][0]) == l_1615[1])))) != (safe_add_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s(l_1623)) , 0x70L), l_1541))) == 0xBF3986EA91F99D84LL)) , l_1618) , p_40), (**g_43))) & 0x4E24L) <= 0L) , (void*)0) == &g_138), 7L)) >= g_1140) || (*g_430)) < 0x6C256686A45523CELL) > (**g_66)), l_1624)))
                {
                    uint32_t l_1634 = 18446744073709551610UL;
                    int32_t *l_1655 = &g_1342;
                    (*l_47) = (safe_rshift_func_int16_t_s_u((*l_47), 2));
                    for (g_1037 = (-17); (g_1037 != (-5)); g_1037++)
                    {
                        const int16_t l_1645 = 0x3FFCL;
                        int32_t l_1646 = 0xF5DBCF8CL;
                        int32_t *l_1647 = &g_635;
                        int32_t **l_1648 = &g_111;
                        l_1646 |= (safe_mod_func_int8_t_s_s(((*g_44) > ((&l_1608 == &l_1606) , l_1623)), ((((((((safe_lshift_func_int8_t_s_u(((l_1634 = g_1633) <= (+(((**g_863) = (**g_863)) | l_1636))), (safe_lshift_func_uint8_t_u_u((*g_547), 0)))) && ((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((-8L), 5)), 0UL)), 1)) , p_40)) < 0UL) != g_20) == (-10L)) == l_1618) < p_40) || l_1645)));
                        (*l_1648) = l_1647;
                        (*l_1647) |= (((l_1462 || (safe_mod_func_int64_t_s_s(((void*)0 == &l_1607), ((*g_864) |= 0x6423FAEEBF2AC08ELL)))) > p_40) ^ ((*l_1428) = (safe_add_func_int64_t_s_s(p_40, (safe_add_func_int32_t_s_s((g_927 || l_1636), (&l_1623 != l_1655)))))));
                        (*g_430) = 0x24DEDBEBL;
                    }
                }
                else
                {
                    if (l_1623)
                        break;
                }
                (*g_430) ^= p_40;
                return l_1579;
            }
        }
        (*l_1686) ^= (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((p_40 > (p_40 < (safe_mul_func_int8_t_s_s(l_1668, 1L)))), (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_1552 <= (safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((&l_473 != &p_41) <= (1UL ^ (!(safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s(((*l_47) = (((****g_1228) = (p_40 >= l_1557)) >= (*l_1429))), l_1468)), l_1684))))), 14)), (*l_1429))) , l_1684), l_1541))), 8UL)), l_1462)))), 7)) > 0L) & 0x07CBL), l_1685)), (*g_1284)));
    }
    else
    {
        uint8_t ***l_1690 = &g_546[4];
        uint8_t ****l_1691 = &g_545[0];
        const int32_t l_1701[5][8][1] = {{{(-9L)},{0x2F70CBBDL},{0x4BAB8FF6L},{0xA67BB82AL},{0x4BAB8FF6L},{0x2F70CBBDL},{(-9L)},{0x0CF4DBE8L}},{{0x1D97687DL},{0x0CF4DBE8L},{(-9L)},{0x2F70CBBDL},{0x4BAB8FF6L},{0xA67BB82AL},{0x4BAB8FF6L},{0x2F70CBBDL}},{{(-9L)},{0x0CF4DBE8L},{0x1D97687DL},{0x0CF4DBE8L},{(-9L)},{0x2F70CBBDL},{0x4BAB8FF6L},{0xA67BB82AL}},{{0x4BAB8FF6L},{0x2F70CBBDL},{(-9L)},{0x0CF4DBE8L},{0x1D97687DL},{0x0CF4DBE8L},{(-9L)},{0x2F70CBBDL}},{{0x4BAB8FF6L},{0xA67BB82AL},{0x4BAB8FF6L},{0x2F70CBBDL},{(-9L)},{0x0CF4DBE8L},{0x1D97687DL},{0x0CF4DBE8L}}};
        uint32_t *l_1722 = (void*)0;
        uint32_t *l_1723 = (void*)0;
        int64_t l_1724 = 4L;
        int32_t l_1725[8] = {(-1L),0x7E3534BCL,(-1L),(-1L),0x7E3534BCL,(-1L),(-1L),0x7E3534BCL};
        int16_t *l_1726 = &l_1450;
        int32_t *l_1727[1];
        int32_t l_1728 = (-1L);
        int32_t **l_1729 = &g_430;
        uint64_t **l_1748 = &g_864;
        union U0 **l_1763 = &g_1762;
        uint32_t l_1764 = 0x672D73BAL;
        int8_t ****l_1781 = &l_62[1];
        int8_t *****l_1780[1][8] = {{&l_1781,&l_1781,&l_1781,&l_1781,&l_1781,&l_1781,&l_1781,&l_1781}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1727[i] = &l_1458[2].f2;
        (*l_1729) = func_53((l_1728 &= (safe_unary_minus_func_int16_t_s(((*l_1726) &= ((*l_1428) = (((safe_add_func_uint8_t_u_u((l_1725[2] ^= ((((((((*l_1691) = l_1690) != l_1690) | (((safe_mul_func_int8_t_s_s((!((***g_1229) = (safe_sub_func_uint64_t_u_u(((*g_864)--), (((((safe_sub_func_int64_t_s_s(((l_1701[3][1][0] , (((*l_47) = (g_601 = ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_1701[3][1][0], (safe_lshift_func_uint16_t_u_s(0x0F12L, (+(safe_rshift_func_uint16_t_u_u((0x5AC1L || (((safe_sub_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u((((p_40 ^ ((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u(l_1701[2][4][0], (*g_547))) ^ l_1701[2][0][0]), l_1721)) <= l_1701[3][1][0])) == p_40) == (*l_1429)), (**p_41))) ^ g_927), p_40)) && 9UL) , l_1701[0][6][0])), l_1701[3][1][0]))))))), 8)), (**p_41))) && 0UL))) >= p_40)) == 0xDE84B587L), 1UL)) & l_1724) || (*g_1284)) == 0xB9DBL) & (*l_1429)))))), (**p_41))) ^ (*g_65)) | 0x9FE7L)) != p_40) , g_1335) , p_40) >= p_40)), (*l_1429))) , (void*)0) == &l_1724)))))), &l_1542, p_40);
        (*l_1729) = ((safe_unary_minus_func_int32_t_s((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(0xA642B6AE75A57D76LL, (safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((**g_1283), ((*g_44) <= ((((*l_1428) = (safe_mul_func_int8_t_s_s((l_1747 != l_1748), (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((((*l_1729) != (void*)0) , g_1761) == ((*l_47) , l_1763)), (**l_1729))) , (*l_47)), (*g_65))), 5)), 15)), 12)), (**l_1729)))))) == (**l_1729)) && p_40)))), (**l_1729))), (-1L))))), l_1764)), (-5L))), (*l_47))))) , &g_106);
        g_617 = func_53(((safe_sub_func_uint64_t_u_u((l_1767 != (void*)0), p_40)) && (p_40 | (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((*l_1429), ((**l_1729) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(1L, 1)), (safe_sub_func_uint64_t_u_u((((safe_div_func_int16_t_s_s(p_40, p_40)) != (l_1780[0][6] != &l_1781)) < 0x36L), (-8L)))))))), 11)))), l_1782, p_40);
        (**l_1729) |= (safe_add_func_uint32_t_u_u((((**g_43) != ((((**l_1767) = (((l_1785 < p_40) , 65535UL) && ((*g_44) && (g_1078 == (*l_1429))))) , ((void*)0 == &g_1078)) == 0x79L)) & p_40), p_40));
    }
    return (**g_1761);
}







static uint64_t func_50(int32_t * p_51, const int8_t ** const p_52)
{
    union U0 *l_474[8];
    int32_t l_485 = 0xCF218528L;
    int32_t l_492 = (-10L);
    int64_t l_531 = 0x7CBDC09D82C8770BLL;
    int32_t l_536 = 0L;
    uint8_t *l_544 = &g_127[2][6][1];
    uint8_t **l_543[10];
    uint8_t ***l_542 = &l_543[0];
    int32_t l_608 = 0x5A06651EL;
    int32_t l_609[2][6][7] = {{{9L,9L,9L,9L,9L,9L,9L},{1L,1L,1L,1L,1L,1L,1L},{9L,9L,9L,9L,9L,9L,9L},{1L,1L,1L,1L,1L,1L,1L},{9L,9L,9L,9L,9L,9L,9L},{1L,1L,1L,1L,1L,1L,1L}},{{9L,9L,9L,9L,9L,9L,9L},{1L,1L,1L,1L,1L,1L,1L},{9L,9L,9L,9L,9L,9L,9L},{1L,1L,1L,1L,1L,1L,1L},{9L,9L,9L,9L,9L,9L,9L},{1L,1L,1L,1L,1L,1L,1L}}};
    int32_t l_642 = (-4L);
    int64_t l_658 = 0x36EA9411AFE144DALL;
    int8_t ***l_664 = &g_64;
    uint16_t *l_796[5];
    uint16_t **l_795[1];
    uint16_t ****l_800 = &g_676;
    int32_t l_842 = (-6L);
    int64_t *l_897[5];
    int64_t **l_896 = &l_897[4];
    int16_t l_944 = 1L;
    int32_t l_954 = 1L;
    uint32_t l_1033 = 0UL;
    uint64_t l_1059 = 0x55A4C644624E87B1LL;
    int16_t l_1088 = 0xC2DEL;
    uint64_t l_1093 = 0UL;
    uint64_t l_1154 = 0x83A5A9F9510C0CA4LL;
    uint8_t l_1248 = 0x05L;
    uint8_t l_1262 = 2UL;
    uint64_t l_1265[4][1];
    int16_t l_1281 = 0x2F4CL;
    int64_t l_1350 = 0x43B0F46FE0194343LL;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_474[i] = (void*)0;
    for (i = 0; i < 10; i++)
        l_543[i] = &l_544;
    for (i = 0; i < 5; i++)
        l_796[i] = &g_333;
    for (i = 0; i < 1; i++)
        l_795[i] = &l_796[0];
    for (i = 0; i < 5; i++)
        l_897[i] = &l_531;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_1265[i][j] = 18446744073709551612UL;
    }
    l_474[0] = (void*)0;
    for (g_103 = 2; (g_103 >= 0); g_103 -= 1)
    {
        int8_t l_488 = 2L;
        int32_t l_500 = 1L;
        int64_t l_517 = 0L;
        uint16_t l_533[8] = {0x70DAL,0x70DAL,65535UL,0x70DAL,0x70DAL,65535UL,0x70DAL,0x70DAL};
        int32_t l_534 = 0x1E0BDE6FL;
        int32_t l_535[1];
        uint32_t l_569 = 18446744073709551614UL;
        uint8_t *l_599 = &g_123;
        int16_t l_605 = 2L;
        const int32_t l_632 = 0xC5E33333L;
        int32_t l_643 = 0xEB1299A8L;
        uint16_t *l_680 = &l_533[3];
        uint16_t * const *l_679[5];
        uint16_t * const **l_678[8] = {(void*)0,&l_679[4],(void*)0,(void*)0,&l_679[4],(void*)0,(void*)0,&l_679[4]};
        uint16_t * const ***l_677 = &l_678[1];
        uint64_t l_682 = 0xF1A4E1B76D610D1FLL;
        int64_t *l_690 = &l_517;
        int32_t **l_691 = &g_111;
        uint64_t *l_698 = &g_397[5];
        union U0 l_701[10] = {{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}};
        uint32_t l_712 = 7UL;
        int64_t l_746 = 2L;
        int32_t l_808[7] = {0xB2374A32L,0xB2374A32L,0xB2374A32L,0xB2374A32L,0xB2374A32L,0xB2374A32L,0xB2374A32L};
        uint8_t l_941 = 1UL;
        uint8_t l_945 = 0x37L;
        int8_t **l_969 = (void*)0;
        int64_t *****l_1274 = &g_1228;
        uint8_t ****l_1326 = &g_545[0];
        uint16_t l_1346[2][6] = {{0x0D2FL,0x0D2FL,0xD0B8L,0x0D2FL,0x0D2FL,0xD0B8L},{2UL,2UL,0x0D2FL,2UL,2UL,0x0D2FL}};
        uint16_t l_1375 = 1UL;
        int8_t l_1376 = 0x8DL;
        int16_t *l_1424 = &l_944;
        int16_t **l_1423 = &l_1424;
        int16_t ***l_1422 = &l_1423;
        int16_t ****l_1421 = &l_1422;
        int i, j;
        for (i = 0; i < 1; i++)
            l_535[i] = 0L;
        for (i = 0; i < 5; i++)
            l_679[i] = &l_680;
        for (g_20 = 3; (g_20 <= 9); g_20 += 1)
        {
            uint8_t *l_479 = &g_127[2][6][1];
            uint16_t *l_489 = &g_184;
            uint32_t *l_493 = &g_494[0];
            int32_t *l_499[5];
            uint16_t *l_574[2][1];
            uint32_t *l_600 = &g_601;
            int16_t l_602[1];
            uint64_t l_603 = 0x2750C409C2E319DALL;
            int8_t *l_604 = &l_488;
            uint16_t * const **l_686[5][1] = {{&l_679[4]},{&l_679[3]},{&l_679[4]},{&l_679[3]},{&l_679[4]}};
            int i, j;
            for (i = 0; i < 5; i++)
                l_499[i] = &g_106;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_574[i][j] = &g_333;
            }
            for (i = 0; i < 1; i++)
                l_602[i] = 0x46E8L;
            if ((l_500 |= (safe_rshift_func_uint8_t_u_u((((((*l_479) = (safe_rshift_func_int16_t_s_u(g_397[g_20], (0x8C486AF5L && 0xA6173FE6L)))) , (safe_add_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s((0x35097E2631EB68D2LL & ((safe_add_func_int64_t_s_s(g_20, (l_485 & ((g_397[g_20] && (safe_div_func_int32_t_s_s((g_18[(g_103 + 4)] = (((++(*l_489)) ^ (((l_488 , (((*l_493)++) , (--(*l_479)))) || (**p_52)) != l_485)) | 1UL)), g_397[g_20]))) != l_492)))) >= l_492)))), g_397[g_20]))) >= 0x7BL) , g_397[g_20]), l_488))))
            {
                int64_t l_501 = 0x168778ADEA07B0FCLL;
                uint64_t *l_505 = &g_397[5];
                uint64_t **l_504 = &l_505;
                int32_t l_537 = 0xFAF3B4D2L;
                if (l_501)
                    break;
                for (g_106 = 2; (g_106 >= 0); g_106 -= 1)
                {
                    uint64_t l_510[9] = {0xB502A0FDBCB59ABBLL,18446744073709551610UL,0xB502A0FDBCB59ABBLL,0xB502A0FDBCB59ABBLL,18446744073709551610UL,0xB502A0FDBCB59ABBLL,0xB502A0FDBCB59ABBLL,18446744073709551610UL,0xB502A0FDBCB59ABBLL};
                    int i;
                    l_500 = (((safe_mul_func_int16_t_s_s(((void*)0 == l_504), ((safe_sub_func_int16_t_s_s(l_488, (((((safe_lshift_func_uint16_t_u_s((l_510[3] && g_397[0]), 14)) < (safe_add_func_int16_t_s_s(((((*l_489) = (safe_rshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s(g_18[8], 0x526FL)) & (**p_52)), 3))) <= l_492) == l_500), 0x5455L))) <= l_501) >= g_11) >= l_492))) | 0x9AL))) && (*p_51)) < l_517);
                    for (g_262 = 0; (g_262 <= 0); g_262 += 1)
                    {
                        uint8_t *l_522[10][3] = {{&g_123,&g_123,(void*)0},{&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123},{&g_123,&g_123,&g_123},{(void*)0,&g_123,&g_123},{&g_123,&g_123,(void*)0},{&g_123,(void*)0,&g_123}};
                        int i, j, k;
                        l_531 = (((safe_mul_func_int16_t_s_s((-1L), (((((l_492 || (g_123 |= (g_127[g_106][(g_103 + 4)][g_106]++))) > (safe_sub_func_uint32_t_u_u((((g_333 && (((*p_51) = 0x55A30350L) ^ 0x8F92EB95L)) <= (0x4BFDL <= ((void*)0 != &g_65))) <= (((safe_mod_func_int8_t_s_s((safe_div_func_uint64_t_u_u(18446744073709551610UL, l_510[3])), (**p_52))) , l_510[0]) | l_501)), g_262))) > l_510[3]) || 0UL) | l_510[3]))) , g_20) && 0x6CL);
                    }
                    if ((*p_51))
                    {
                        int32_t *l_532[10][1][5] = {{{&g_106,&l_492,&g_106,&g_106,&l_492}},{{&l_492,&g_106,&g_106,&l_492,&g_106}},{{&l_492,&l_492,&g_18[8],&l_492,&l_492}},{{&g_106,&l_492,&g_106,&g_106,&l_492}},{{&l_492,&g_106,&g_106,&l_492,&g_106}},{{&l_492,&l_492,&g_18[8],&l_492,&l_492}},{{&g_106,&l_492,&g_106,&g_106,&l_492}},{{&l_492,&g_106,&g_106,&l_492,&g_106}},{{&l_492,&l_492,&g_18[8],&l_492,&l_492}},{{&g_106,&l_492,&g_106,&g_106,&l_492}}};
                        int i, j, k;
                        l_532[8][0][3] = p_51;
                        if (l_533[1])
                            continue;
                    }
                    else
                    {
                        uint8_t l_538 = 0UL;
                        --l_538;
                        (*g_430) = (~l_485);
                        if ((*p_51))
                            break;
                    }
                }
                (*p_51) = (((*p_51) , p_51) == (void*)0);
            }
            else
            {
                uint8_t ****l_548[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_562 = 0x98B4E334L;
                int i;
                (*p_51) |= (l_542 == (g_545[0] = g_545[0]));
                for (g_102 = 0; (g_102 <= 2); g_102 += 1)
                {
                    int16_t l_575 = 7L;
                    for (l_536 = 2; (l_536 >= 0); l_536 -= 1)
                    {
                        uint64_t *l_563 = &g_262;
                        int32_t l_566 = 0x2F4BA8D8L;
                        uint16_t **l_570 = &l_489;
                        uint16_t **l_571 = (void*)0;
                        uint16_t *l_573 = (void*)0;
                        uint16_t **l_572 = &l_573;
                        (*g_430) = (((((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((*p_51), (safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((((+(((safe_sub_func_int16_t_s_s(((--(*l_563)) <= ((l_566 > ((safe_sub_func_uint8_t_u_u((l_569 , (((*l_570) = &g_184) != (g_20 , (l_574[1][0] = ((*l_572) = &l_533[5]))))), 0x53L)) < (((l_566 <= l_562) && 0x1799L) < l_517))) , 0x9B59649130734205LL)), 8L)) == l_575) & l_575)) > (-1L)) , (void*)0) == p_51), l_562)), g_18[8])))), 0x44D2C272L)), 0)) , (*g_547)) & (**p_52)) ^ l_562) , 0xD982A0A6L);
                        if ((*g_430))
                            break;
                        if ((*p_51))
                            continue;
                    }
                    for (l_531 = 2; (l_531 >= 0); l_531 -= 1)
                    {
                        const union U0 l_580 = {0};
                        int64_t *l_581 = &l_517;
                        int32_t l_582 = 0xB74000F1L;
                        uint16_t **l_584 = &l_574[1][0];
                        uint16_t ***l_583 = &l_584;
                        uint16_t ****l_585 = &l_583;
                        (*g_430) = ((!65535UL) & (((g_11 = (safe_rshift_func_uint16_t_u_s((((l_500 <= (((!(l_580 , (*p_51))) | 0x6BL) < 0xFCL)) != (((**p_52) , ((*l_581) = g_103)) <= l_562)) & 4L), 10))) ^ l_562) > l_582));
                        (*g_430) ^= (-9L);
                        (*l_585) = l_583;
                    }
                }
                if ((*p_51))
                    continue;
            }
            g_606 = (l_605 = (((l_533[3] > g_184) , (safe_mul_func_int8_t_s_s((((1UL || g_102) & l_533[1]) != (!l_536)), (((((*l_604) ^= (((((!(((safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s(((*g_430) = (!(*g_65))), ((*l_600) = ((safe_sub_func_uint16_t_u_u((((void*)0 == l_599) > l_531), l_534)) | 1L)))), g_102)), 0xD4L)) >= 5UL) , l_602[0])) , g_601) ^ l_603) != 0UL) >= (*g_547))) ^ (**g_66)) , (void*)0) != &l_492)))) | 1L));
            for (g_102 = 0; (g_102 <= 2); g_102 += 1)
            {
                int32_t l_607 = 0xED9DA02DL;
                uint32_t l_610 = 6UL;
                int16_t *l_614 = (void*)0;
                int16_t *l_615 = &g_365;
                uint8_t **l_624 = &l_544;
                int32_t l_644 = 0x658A8E54L;
                int32_t l_645 = 0x6B908DBCL;
                int32_t l_646 = 0L;
                int32_t l_647 = 0L;
                int32_t l_648 = 0x91386733L;
                uint64_t l_649[5][7] = {{0UL,0UL,1UL,0UL,0UL,1UL,0UL},{4UL,0x5F9C377DC637B559LL,18446744073709551615UL,18446744073709551612UL,18446744073709551615UL,0x5F9C377DC637B559LL,4UL},{0x3C436A6CE801177FLL,0UL,0x3C436A6CE801177FLL,0x3C436A6CE801177FLL,0UL,0x3C436A6CE801177FLL,0x3C436A6CE801177FLL},{4UL,18446744073709551612UL,18446744073709551615UL,18446744073709551612UL,4UL,0x6DD0E25A161056D2LL,4UL},{0UL,0x3C436A6CE801177FLL,0x3C436A6CE801177FLL,0UL,0x3C436A6CE801177FLL,0x3C436A6CE801177FLL,0UL}};
                int i, j;
                --l_610;
                if ((((*g_430) = l_517) >= (1L >= ((*l_615) = ((safe_unary_minus_func_int32_t_s(0x1C289B03L)) <= (l_517 ^ g_601))))))
                {
                    const int32_t *l_616 = &l_500;
                    uint8_t **l_638 = &l_479;
                    uint8_t **l_639 = &l_599;
                    uint32_t *l_640 = &g_641;
                    g_617 = l_616;
                    for (g_262 = 0; (g_262 <= 2); g_262 += 1)
                    {
                        int32_t l_631 = 0x2DC4C73AL;
                        int i, j, k;
                        (*p_51) ^= ((safe_lshift_func_uint16_t_u_s((g_106 != ((0L < (*l_616)) <= ((safe_mul_func_uint8_t_u_u(l_607, (g_127[g_102][(g_103 + 3)][g_262] = (safe_rshift_func_uint16_t_u_s((l_624 == l_624), (safe_add_func_int64_t_s_s(((g_601 |= (safe_div_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(65533UL, 0xB401L)) , ((*l_616) | l_631)), l_531))) || g_365), 0xFC564CF22E3A02C0LL))))))) , 0x28793057L))), (*l_616))) && g_365);
                    }
                    l_642 = (l_632 , ((*g_430) = (safe_rshift_func_uint16_t_u_s((g_635 , (safe_mod_func_int16_t_s_s(g_601, 6UL))), (((*l_640) = ((l_638 = l_638) == (g_138 , l_639))) && l_605)))));
                }
                else
                {
                    (*g_430) |= (l_485 <= g_123);
                }
                ++l_649[3][0];
            }
            for (l_485 = 2; (l_485 >= 0); l_485 -= 1)
            {
                int8_t ***l_662 = &g_64;
                int8_t ****l_663 = (void*)0;
                const int32_t l_681 = (-1L);
                int16_t *l_683[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_683[i] = &l_605;
                (*g_430) = (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(l_658, ((g_365 = (safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_u(((l_664 = l_662) == (void*)0), (safe_add_func_uint64_t_u_u((g_635 , ((safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(((g_675[4][3] = g_675[4][3]) == ((*g_430) , l_677)), l_681)) | (*p_51)), 8)), 0x53A2L)), g_106)) > 0xD8L)), l_682))))))) , l_642))), g_641)), 0x58104058B9A11750LL));
                for (g_102 = 0; (g_102 <= 2); g_102 += 1)
                {
                    uint16_t **l_685[9][9] = {{&l_489,(void*)0,&l_574[1][0],&l_574[1][0],&l_574[1][0],&l_574[1][0],(void*)0,&l_489,&l_680},{(void*)0,&l_574[0][0],&l_574[1][0],&l_574[1][0],&l_680,&l_680,&l_574[1][0],&l_574[1][0],&l_574[0][0]},{&l_574[1][0],&l_489,&l_574[1][0],&l_680,(void*)0,&l_680,&l_680,(void*)0,&l_680},{&l_489,&l_574[0][0],&l_489,&l_680,&l_574[1][0],(void*)0,&l_489,&l_489,(void*)0},{&l_574[1][0],&l_489,&l_574[1][0],&l_489,&l_574[1][0],&l_680,(void*)0,&l_680,&l_680},{&l_574[1][0],&l_574[0][0],(void*)0,&l_574[1][0],&l_489,&l_489,&l_574[0][0],&l_680,(void*)0},{&l_574[1][0],&l_574[1][0],&l_489,&l_489,(void*)0,&l_489,&l_489,&l_574[1][0],&l_574[1][0]},{&l_489,&l_574[0][0],&l_489,&l_680,&l_680,&l_489,&l_680,&l_680,&l_489},{&l_680,&l_680,(void*)0,&l_680,&l_574[1][0],&l_489,&l_574[1][0],&l_489,&l_574[1][0]}};
                    uint16_t ***l_684 = &l_685[6][1];
                    int i, j;
                    (*g_430) |= (l_684 != l_686[1][0]);
                }
                return g_18[8];
            }
        }
        g_617 = ((*l_691) = func_53(g_184, &g_18[0], (safe_mod_func_int64_t_s_s(g_11, (~((*l_690) = l_485))))));
        (*p_51) = (safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(l_536, ((safe_mul_func_int16_t_s_s(g_606, ((--(*l_698)) | (((void*)0 == &l_698) != (l_701[1] , (safe_mul_func_int16_t_s_s((**l_691), ((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(((*g_65) = (2UL > ((*l_544) = (safe_mod_func_int64_t_s_s((**l_691), (safe_mod_func_uint32_t_u_u(((((**l_691) <= g_18[8]) , (void*)0) == p_52), g_635))))))), 250UL)), 4294967295UL)) > l_712)))))))) , (**l_691)))), 0xEA88L));
        if ((**l_691))
            continue;
        for (g_365 = 0; (g_365 <= 2); g_365 += 1)
        {
            int8_t ***l_715 = &g_64;
            int32_t l_736 = 0x4593FBCCL;
            int32_t l_763 = 0x5EBA0D2AL;
            int32_t l_766 = 0x243F12CAL;
            int32_t l_768[6][2] = {{(-7L),0x67C924B3L},{0x67C924B3L,(-7L)},{0x67C924B3L,0x67C924B3L},{(-7L),0x67C924B3L},{0x67C924B3L,(-7L)},{0x67C924B3L,0x67C924B3L}};
            int32_t l_798 = 1L;
            uint16_t l_809 = 0xAAF8L;
            uint16_t **l_831 = &l_796[4];
            uint8_t l_833 = 0xF5L;
            int8_t l_846 = 0xD4L;
            int64_t *l_886 = &l_531;
            int64_t **l_887 = &l_886;
            int8_t *l_888[8][6][5] = {{{(void*)0,&g_20,(void*)0,&l_488,&l_846},{&g_20,(void*)0,(void*)0,&l_846,&l_846},{(void*)0,&l_488,&l_488,(void*)0,(void*)0},{&g_20,&l_488,(void*)0,&l_846,(void*)0},{(void*)0,&g_20,(void*)0,&g_20,(void*)0},{&l_488,&l_846,&g_20,&l_846,(void*)0}},{{&l_488,&l_846,(void*)0,(void*)0,&l_846},{&l_488,(void*)0,&g_20,&l_846,(void*)0},{&g_20,(void*)0,(void*)0,&l_488,(void*)0},{(void*)0,(void*)0,&l_488,&l_488,(void*)0},{&g_20,&g_20,&l_488,(void*)0,(void*)0},{&l_488,&l_488,&l_488,&l_846,&l_846}},{{&l_488,&g_20,&g_20,&l_846,&l_846},{&l_488,(void*)0,(void*)0,&l_488,&l_488},{(void*)0,(void*)0,&g_20,&l_846,&g_20},{&g_20,(void*)0,&l_488,(void*)0,&g_20},{(void*)0,&l_846,&l_488,&l_846,&l_488},{&g_20,&l_846,&l_488,&l_488,&l_846}},{{(void*)0,&g_20,(void*)0,&l_846,&l_488},{(void*)0,&l_488,&g_20,&l_846,&g_20},{&l_488,&l_488,(void*)0,(void*)0,&g_20},{(void*)0,(void*)0,&g_20,&l_488,&l_488},{(void*)0,&g_20,(void*)0,&l_488,&l_846},{&g_20,(void*)0,(void*)0,&l_846,&l_846}},{{(void*)0,&l_488,&l_488,(void*)0,(void*)0},{&g_20,&l_488,(void*)0,&l_846,(void*)0},{(void*)0,&g_20,(void*)0,&g_20,(void*)0},{&l_488,&l_846,&g_20,&l_846,(void*)0},{&l_488,&l_846,(void*)0,(void*)0,&l_846},{&l_846,&l_488,&g_20,&l_488,&l_846}},{{&g_20,&l_488,&l_488,&g_20,&l_488},{&l_846,&l_846,(void*)0,&l_846,&g_20},{&g_20,(void*)0,(void*)0,&l_846,&l_846},{&l_846,&l_846,&l_846,(void*)0,(void*)0},{(void*)0,(void*)0,&g_20,(void*)0,&g_20},{(void*)0,&l_846,&l_846,(void*)0,&l_846}},{{&l_488,&l_488,&g_20,&g_20,(void*)0},{&g_20,&l_488,&l_846,&l_488,&g_20},{&l_488,(void*)0,(void*)0,&g_20,&l_488},{&l_488,&l_488,(void*)0,(void*)0,&l_488},{&l_846,&g_20,&l_488,(void*)0,&l_488},{&l_488,(void*)0,&g_20,(void*)0,&g_20}},{{&l_488,&l_488,&l_488,&l_846,(void*)0},{&l_488,&g_20,&l_488,&l_846,&l_846},{&l_846,&l_846,&l_846,&g_20,&g_20},{&l_488,&g_20,&l_488,&l_488,(void*)0},{&l_488,&l_488,&l_488,&l_488,&l_846},{&g_20,(void*)0,&l_488,(void*)0,&g_20}}};
            int32_t l_940[4] = {6L,6L,6L,6L};
            uint8_t l_972[3];
            union U0 l_1005 = {0};
            uint16_t *** const *l_1038 = &g_676;
            const int64_t l_1041 = 9L;
            int32_t **l_1062[7] = {&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430};
            int8_t l_1070 = 0x76L;
            uint32_t l_1071 = 0xC784CC77L;
            uint32_t l_1153 = 0xA9951DF9L;
            uint64_t l_1182 = 0x44E7FB060D45EA5ALL;
            int64_t l_1264 = 0xC4A4AE0BE6667143LL;
            uint32_t * const l_1276 = &g_494[0];
            uint32_t * const *l_1275[8][10] = {{(void*)0,&l_1276,&l_1276,(void*)0,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,(void*)0,&l_1276},{&l_1276,&l_1276,&l_1276,&l_1276,(void*)0,&l_1276,&l_1276,&l_1276,&l_1276,(void*)0},{(void*)0,&l_1276,&l_1276,&l_1276,(void*)0,&l_1276,(void*)0,(void*)0,&l_1276,(void*)0},{&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,(void*)0,&l_1276,&l_1276,(void*)0,&l_1276},{&l_1276,&l_1276,&l_1276,(void*)0,&l_1276,&l_1276,&l_1276,&l_1276,(void*)0,&l_1276},{&l_1276,(void*)0,(void*)0,&l_1276,(void*)0,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276}};
            uint64_t l_1352[5];
            int8_t * const l_1370 = &g_1371;
            int8_t * const *l_1369 = &l_1370;
            int8_t * const **l_1368[1][4][7] = {{{&l_1369,&l_1369,&l_1369,&l_1369,&l_1369,&l_1369,&l_1369},{&l_1369,&l_1369,&l_1369,&l_1369,&l_1369,&l_1369,&l_1369},{&l_1369,&l_1369,&l_1369,&l_1369,&l_1369,&l_1369,&l_1369},{&l_1369,&l_1369,&l_1369,&l_1369,&l_1369,&l_1369,&l_1369}}};
            int8_t * const ***l_1367 = &l_1368[0][3][6];
            uint32_t l_1414 = 0x41B9B532L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_972[i] = 0x7AL;
            for (i = 0; i < 5; i++)
                l_1352[i] = 18446744073709551613UL;
        }
    }
    g_1426 = (l_536 = (-1L));
    return (**g_863);
}







static int32_t * func_53(int32_t p_54, int32_t * p_55, uint16_t p_56)
{
    int8_t l_81[3];
    int32_t l_131 = 0xF4B6F1E5L;
    int8_t **l_183 = (void*)0;
    int32_t l_284[2][2];
    int16_t *l_328[5] = {&g_103,&g_103,&g_103,&g_103,&g_103};
    int64_t l_384 = 0xD78697EFC4D0B0B5LL;
    union U0 l_407 = {0};
    int i, j;
    for (i = 0; i < 3; i++)
        l_81[i] = 0x6EL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_284[i][j] = 9L;
    }
    for (g_11 = 0; (g_11 != 45); ++g_11)
    {
        int64_t l_97[2][1];
        int32_t l_104 = 8L;
        const int8_t **l_129 = &g_44;
        int8_t **l_130[1][8];
        int32_t l_155 = 0L;
        int32_t l_162 = 0xCFDDCEC7L;
        int32_t l_163 = 0L;
        int64_t l_263 = 0x5F372E633990AE0BLL;
        int32_t l_288 = 0x3BA547C4L;
        int32_t l_293 = 0xB1CF1519L;
        int32_t l_295 = 4L;
        int32_t l_296 = (-6L);
        int32_t l_297 = 0x269C6AF2L;
        int8_t l_322 = (-1L);
        uint32_t l_359 = 0xFB86A834L;
        int8_t l_410[7] = {0L,0L,(-1L),0L,0L,(-1L),0L};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_97[i][j] = 9L;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
                l_130[i][j] = &g_65;
        }
        for (p_54 = 6; (p_54 == (-10)); p_54 = safe_sub_func_int32_t_s_s(p_54, 5))
        {
            uint32_t l_98[4][8][4] = {{{0UL,18446744073709551615UL,18446744073709551615UL,0UL},{18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL},{0UL,18446744073709551615UL,18446744073709551615UL,0UL},{18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL},{0UL,18446744073709551615UL,18446744073709551615UL,0UL},{18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL}},{{0UL,0UL,18446744073709551615UL,0UL},{0UL,18446744073709551615UL,18446744073709551615UL,0UL},{18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL},{0UL,18446744073709551615UL,18446744073709551615UL,0UL},{18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL},{0UL,18446744073709551615UL,18446744073709551615UL,0UL}},{{18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL},{0UL,18446744073709551615UL,18446744073709551615UL,0UL},{18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL},{0UL,18446744073709551615UL,18446744073709551615UL,0UL},{18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL}},{{0UL,18446744073709551615UL,18446744073709551615UL,0UL},{18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL},{0UL,18446744073709551615UL,18446744073709551615UL,0UL},{18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL},{0UL,18446744073709551615UL,18446744073709551615UL,0UL},{18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL}}};
            union U0 *l_99 = &g_96;
            int8_t **l_100 = &g_65;
            uint64_t *l_101 = &g_102;
            int32_t *l_105 = &g_106;
            int32_t **l_107 = &l_105;
            int32_t **l_108 = (void*)0;
            int32_t *l_110 = &g_18[0];
            int32_t **l_109[9][10] = {{&l_110,&l_110,(void*)0,&l_110,&l_110,(void*)0,&l_110,&l_110,(void*)0,&l_110},{&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110},{&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,(void*)0,(void*)0},{&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110},{&l_110,(void*)0,(void*)0,&l_110,(void*)0,(void*)0,&l_110,(void*)0,(void*)0,&l_110},{(void*)0,&l_110,(void*)0,(void*)0,&l_110,(void*)0,(void*)0,&l_110,(void*)0,(void*)0},{&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110,&l_110},{&l_110,(void*)0,(void*)0,&l_110,(void*)0,(void*)0,&l_110,(void*)0,(void*)0,&l_110},{(void*)0,&l_110,(void*)0,(void*)0,&l_110,(void*)0,(void*)0,&l_110,(void*)0,(void*)0}};
            uint8_t *l_122 = &g_123;
            uint8_t *l_126 = &g_127[2][6][1];
            const int8_t **l_128 = &g_44;
            int64_t l_151 = (-1L);
            int i, j, k;
            (*l_105) |= ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((((safe_sub_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((((l_81[1] >= p_56) < ((l_81[1] , ((((((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_54, ((g_20 >= (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((*l_101) &= ((((((g_96 , ((0xB60AL & (((((l_97[1][0] ^ 249UL) & l_98[2][7][2]) && 0x8A60B10F657D2A19LL) <= 1L) || (*g_44))) , (void*)0)) == l_99) && 0x86L) , (void*)0) != l_100) , 0xBB1342F278403027LL)) ^ 18446744073709551615UL), l_97[1][0])), l_97[0][0])), p_54)), 4))) >= g_20))), p_54)) != p_54), g_103)) , (void*)0) != (void*)0) || 4294967295UL) , l_104) | l_81[1])) ^ g_11)) <= l_98[2][7][2]), 0x7412L)), 0UL)) , p_56) || (-1L)), g_20)), 0)) , (*p_55));
            g_111 = ((*l_107) = &g_18[8]);
            l_131 |= (safe_rshift_func_int8_t_s_s((p_56 , ((4294967295UL > (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_18[8], 15)), (((p_55 == &g_18[8]) && ((safe_mul_func_uint8_t_u_u(((*l_126) ^= ((*l_122)--)), (-3L))) >= (((l_129 = l_128) == l_130[0][7]) > p_56))) || g_20)))) ^ p_54)), p_54));
            for (g_20 = 0; (g_20 <= 2); g_20 += 1)
            {
                int8_t ** const l_152 = &g_65;
                int32_t l_154 = 0L;
                union U0 *l_188 = &g_96;
            }
        }
        for (l_163 = (-7); (l_163 < (-15)); l_163 = safe_sub_func_int32_t_s_s(l_163, 6))
        {
            uint64_t *l_212 = &g_102;
            uint64_t **l_211 = &l_212;
            uint64_t *l_215 = &g_11;
            int8_t *l_218[6] = {&l_81[1],&l_81[1],&l_81[1],&l_81[1],&l_81[1],&l_81[1]};
            int8_t ***l_219 = &g_64;
            int32_t l_240 = (-8L);
            int32_t l_290 = 0xFF8256CFL;
            int32_t l_292 = 0x8EFFDFD5L;
            union U0 l_351 = {0};
            uint16_t *l_427[4][9] = {{&g_184,&g_184,&g_184,&g_184,&g_184,&g_184,&g_184,&g_184,&g_184},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,&g_184,&g_333,&g_184,&g_333,&g_184,&g_333,&g_184,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333}};
            int32_t **l_431 = &g_430;
            int32_t l_468 = 0L;
            int i, j;
            if (((safe_add_func_int64_t_s_s(((((*l_211) = &g_102) != (void*)0) >= (9L <= ((((*p_55) && ((void*)0 != l_215)) | ((safe_mul_func_int16_t_s_s(0x701AL, ((((-1L) <= 0UL) , l_218[1]) != (*g_43)))) , (*p_55))) <= g_18[7]))), p_56)) , (*p_55)))
            {
                uint32_t l_228 = 4294967290UL;
                int32_t l_291[2];
                int16_t *l_329 = &g_103;
                int i;
                for (i = 0; i < 2; i++)
                    l_291[i] = (-1L);
                (*p_55) = (&l_130[0][4] != l_219);
                if ((*p_55))
                {
                    uint8_t l_233 = 0x46L;
                    uint16_t *l_241 = (void*)0;
                    uint64_t *l_274 = &g_262;
                    uint64_t *l_276 = &g_262;
                    if ((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((**g_66), (safe_mul_func_int16_t_s_s((l_228 != (safe_add_func_uint64_t_u_u((l_81[0] || 255UL), ((safe_div_func_int32_t_s_s(0x26944799L, l_233)) ^ ((((((l_240 = (((safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(5L, 0xED1E4CC4L)), (g_127[2][1][1] , 0x16890952E1ABEA05LL))), l_228)) > l_240) | l_233)) & p_56) != g_11) , 4L) || l_228) | g_20))))), 0xF27BL)))), g_102)), 0L)))
                    {
                        uint16_t l_245[10][3] = {{0x4B9CL,0x450FL,0xC2CCL},{0x4B9CL,0UL,65530UL},{65535UL,0x6D62L,0x450FL},{65530UL,0x4B9CL,65530UL},{1UL,2UL,0xC2CCL},{0xAF27L,2UL,1UL},{0x6D62L,0x4B9CL,65535UL},{0xE0A5L,0x6D62L,0x6D62L},{0x6D62L,0UL,65535UL},{0xAF27L,0x450FL,65535UL}};
                        uint8_t *l_264 = &g_123;
                        int i, j;
                        (*p_55) |= (((safe_mul_func_int16_t_s_s((~l_81[1]), l_245[2][0])) | (g_127[1][2][2] < p_56)) , (((safe_lshift_func_int16_t_s_s((0x68F25B8A72973F10LL >= (safe_rshift_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(p_56, ((*l_264) = (((((l_245[2][0] & (safe_lshift_func_int16_t_s_s(l_240, ((safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s((((~((((((((~(((safe_div_func_uint16_t_u_u(((l_97[1][0] > 0L) | 0x21L), g_20)) , (**g_66)) || 0x1DL)) <= g_103) , p_56) | 4UL) ^ (-1L)) != p_56) | 4294967288UL) , 1L)) , 0x4572CAAEL) != g_262), p_56)), l_228)) , g_127[2][6][1])))) != 0x59D5B589L) || l_97[1][0]) , p_54) ^ l_263)))) , g_127[2][6][1]) == g_20), 5))), p_54)) == l_131) == l_228));
                        if (l_245[2][0])
                            break;
                    }
                    else
                    {
                        uint64_t **l_275 = &l_274;
                        int32_t l_279 = 0x56991D48L;
                        (*p_55) = (p_56 | ((1UL != ((safe_mul_func_int16_t_s_s((+l_228), ((*p_55) != (*p_55)))) < (safe_lshift_func_uint16_t_u_u(((p_56 | (((--(*l_212)) | (((*l_275) = l_274) == l_276)) & ((((safe_lshift_func_uint8_t_u_s(0x0AL, p_56)) , p_56) ^ g_127[2][6][1]) , g_18[2]))) , l_279), l_81[1])))) == p_54));
                    }
                }
                else
                {
                    int16_t l_285 = 1L;
                    int32_t l_286 = 0x3081A098L;
                    int32_t l_289 = 3L;
                    int32_t l_294 = 1L;
                    uint8_t l_298[8][10] = {{9UL,247UL,9UL,0x46L,3UL,254UL,255UL,1UL,0xF1L,1UL},{9UL,0xFCL,0xF1L,251UL,0xF1L,0xFCL,9UL,1UL,0xF0L,247UL},{0xF0L,1UL,9UL,0xFCL,0xF1L,251UL,0xF1L,0xFCL,9UL,1UL},{0xF1L,1UL,255UL,254UL,3UL,0x46L,9UL,247UL,9UL,0x46L},{0xADL,0xFCL,3UL,0xFCL,0xADL,0x46L,255UL,251UL,0xF0L,254UL},{0xF1L,247UL,3UL,251UL,0UL,251UL,0xF1L,0xBDL,0UL,247UL},{9UL,0x46L,3UL,254UL,255UL,1UL,0xF1L,1UL,255UL,254UL},{0xADL,0xBDL,0xADL,254UL,0xF1L,247UL,3UL,251UL,0UL,251UL}};
                    int i, j;
                    if (((void*)0 == &g_127[2][6][1]))
                    {
                        int32_t *l_280 = (void*)0;
                        int32_t *l_281 = &l_162;
                        int32_t *l_282 = &l_155;
                        int32_t *l_283[4];
                        int32_t l_287 = 0xE674F9F1L;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_283[i] = &g_18[8];
                        --l_298[3][1];
                        return p_55;
                    }
                    else
                    {
                        int64_t l_304[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                        int16_t *l_320 = (void*)0;
                        int16_t *l_321[6][2] = {{&g_103,&g_103},{&g_103,&g_103},{&g_103,&g_103},{&l_285,&l_285},{&l_285,&g_103},{&g_103,&g_103}};
                        int32_t l_323 = 0xBF028B2EL;
                        uint16_t *l_332 = &g_333;
                        int32_t *l_334 = &l_286;
                        int i, j;
                        l_323 |= ((+(safe_div_func_uint32_t_u_u(l_304[2], (0x2F2FL ^ (safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint64_t_u_u((l_81[1] & (p_56 >= (safe_mul_func_uint16_t_u_u(((l_291[0] == (l_155 || (~(g_262 = ((safe_mul_func_uint16_t_u_u((((((l_322 &= (l_284[1][0] = (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((((safe_mod_func_uint32_t_u_u(g_123, 0xB593A661L)) > 4294967289UL) <= 0x1DA3L), p_54)), p_54)))) <= g_11) , &g_127[0][0][2]) != (void*)0) || g_184), 0xCB82L)) > 4294967291UL))))) ^ 0xEFL), 0xEDF9L)))), p_56)) > g_184) ^ l_298[3][9]), (**g_43))))))) , (*p_55));
                        if (l_289)
                            continue;
                        (*p_55) = g_18[5];
                        (*l_334) ^= (l_323 , ((18446744073709551611UL | ((safe_add_func_int16_t_s_s((g_184 >= (*p_55)), ((safe_lshift_func_int8_t_s_u((-4L), (g_123 == ((*l_332) = ((&g_103 != (l_329 = l_328[4])) | (safe_mul_func_uint8_t_u_u((l_285 == 0xC588E31144BCF00CLL), l_296))))))) > p_54))) , p_54)) | 0x8DL));
                    }
                }
                (*p_55) = (!(safe_div_func_uint64_t_u_u(p_56, 7L)));
            }
            else
            {
                int32_t l_356 = 4L;
                int32_t *l_362 = &g_18[2];
                int32_t l_367 = 8L;
                int32_t l_368 = 0x0311AFBFL;
                const union U0 *l_412 = (void*)0;
                const union U0 **l_413 = &l_412;
                if (l_81[1])
                {
                    uint8_t l_360 = 0xAEL;
                    int32_t l_366[6][6] = {{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}};
                    int32_t **l_378 = (void*)0;
                    int i, j;
                    for (g_102 = (-19); (g_102 == 49); g_102 = safe_add_func_uint8_t_u_u(g_102, 6))
                    {
                        uint16_t *l_348 = &g_184;
                        uint8_t *l_357 = &g_123;
                        int32_t *l_358 = &l_155;
                        (*l_358) |= (safe_sub_func_uint32_t_u_u((l_296 & (safe_mul_func_int8_t_s_s((((5L ^ (safe_div_func_int64_t_s_s(1L, (g_262--)))) ^ (--(*l_348))) == g_333), ((*l_357) &= (g_20 || (p_54 <= (l_351 , (l_356 = ((safe_div_func_uint16_t_u_u(((g_20 , ((safe_add_func_uint8_t_u_u((g_127[2][7][2] != g_127[2][6][1]), g_18[5])) || 0x04B7L)) > p_54), g_106)) <= 0xFBL))))))))), 0x3F384602L));
                        if ((*p_55))
                            break;
                        (*l_358) = l_359;
                        if ((*p_55))
                            break;
                    }
                    if ((g_127[2][6][1] < l_360))
                    {
                        int32_t **l_361[5][2] = {{&g_111,&g_111},{&g_111,&g_111},{&g_111,&g_111},{&g_111,&g_111},{&g_111,&g_111}};
                        int i, j;
                        p_55 = &g_18[0];
                        if (g_262)
                            continue;
                        p_55 = l_362;
                    }
                    else
                    {
                        int64_t l_363 = (-1L);
                        int32_t *l_364[2][9][4] = {{{&l_292,(void*)0,&l_292,&l_292},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_292,&l_292,(void*)0},{&l_292,(void*)0,&l_292,&l_292},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_292,&l_292,(void*)0},{&l_292,(void*)0,&l_292,&l_292},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_292,&l_292,(void*)0}},{{&l_292,(void*)0,&l_292,&l_292},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_292,&l_292,(void*)0},{&l_292,(void*)0,&l_292,&l_292},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_292,&l_292,(void*)0},{&l_292,(void*)0,&l_292,&l_292},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_292,&l_292,(void*)0}}};
                        int32_t l_369 = 0x3F0E6EE9L;
                        uint8_t l_370[3][1];
                        uint16_t *l_376 = &g_333;
                        uint8_t *l_383 = &g_127[1][1][1];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_370[i][j] = 0x8FL;
                        }
                        l_370[0][0]--;
                        l_297 &= ((safe_unary_minus_func_uint16_t_u((safe_add_func_uint64_t_u_u(18446744073709551615UL, ((((g_106 = (((*l_376) = 65530UL) != (0xA5L == (((*l_383) = (safe_unary_minus_func_int16_t_s((((l_240 , l_378) != &p_55) , ((l_131 = p_56) | ((l_368 = (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(3UL, 3)) , ((*l_362) &= (p_56 & p_54))), 12))) || 0xB3EB4133L)))))) && l_384)))) | 1UL) != l_292) ^ l_240))))) < p_54);
                    }
                    l_284[0][0] = (((*g_64) = (*g_64)) != (void*)0);
                }
                else
                {
                    int8_t l_399 = (-1L);
                    for (g_123 = 0; (g_123 <= 1); g_123 += 1)
                    {
                        uint8_t *l_394 = &g_123;
                        uint8_t **l_393 = &l_394;
                        int32_t *l_398 = &l_131;
                        int8_t ****l_400 = &l_219;
                        uint16_t *l_411[2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_411[i] = &g_184;
                        (*l_398) |= (((((*p_55) = (safe_lshift_func_uint8_t_u_s(l_284[g_123][g_123], ((safe_mul_func_uint8_t_u_u(p_54, (((g_102 && 0x274297AA096E82DCLL) ^ (safe_div_func_uint8_t_u_u((g_397[5] |= (safe_div_func_uint32_t_u_u((((*l_393) = (void*)0) != (void*)0), (safe_mod_func_int64_t_s_s((((((&l_296 == &l_293) && ((g_127[2][6][1] > 7L) && l_384)) , 249UL) == (**g_43)) && 0x5834L), 0x1835A0E910793A5BLL))))), p_56))) , 0xC3L))) > 0x3CB65DE4F27F65B8LL)))) <= g_123) == g_184) ^ g_184);
                        (*p_55) = (((*l_398) ^= (9UL | (l_399 ^ ((((*l_400) = &l_130[0][7]) == &l_183) == ((0xFA0DL < (safe_mod_func_uint64_t_u_u(0xE1B65AA1217C3E0CLL, (safe_mul_func_uint16_t_u_u((g_20 | (safe_mod_func_uint8_t_u_u(((l_407 , (safe_mul_func_uint8_t_u_u(3UL, l_410[1]))) == 5UL), l_295))), p_56))))) | p_54))))) > p_54);
                    }
                }
                (*l_413) = l_412;
                return p_55;
            }
            (*p_55) = (safe_rshift_func_uint8_t_u_s(0x3AL, (safe_mod_func_int32_t_s_s((((((safe_mod_func_int64_t_s_s(((!(safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(p_54, (((p_54 >= ((l_297 &= g_184) < ((-1L) >= (l_292 = g_184)))) | (((safe_rshift_func_int16_t_s_u(1L, 7)) , (void*)0) != &g_96)) != 0x0E0FL))) | l_162), 1))) > 1L), p_56)) > l_81[1]) , p_56) >= p_56) && 251UL), (*p_55)))));
            (*l_431) = g_430;
            for (l_288 = (-2); (l_288 != 10); l_288 = safe_add_func_uint8_t_u_u(l_288, 6))
            {
                int32_t l_442 = 0x2E06FD1DL;
                uint8_t *l_464 = &g_123;
                int64_t *l_465 = (void*)0;
                int64_t *l_466 = (void*)0;
                int64_t *l_467 = &l_263;
                uint8_t **l_470 = &l_464;
                uint8_t ***l_469 = &l_470;
                (*l_469) = (((((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((((((safe_mod_func_int16_t_s_s((safe_div_func_int64_t_s_s(((*l_467) = (l_442 >= ((*p_55) = (((**l_431) != (safe_add_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_56, 1)), (safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s(((((0xB2BDL | 0x96D3L) & (safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(0L, 0)) ^ 0x3338E9F50F9E5B10LL), (safe_mul_func_uint16_t_u_u((((p_56 > (safe_sub_func_uint16_t_u_u((l_284[1][0] ^= (safe_rshift_func_uint8_t_u_s((g_127[2][6][1] = (+((*l_464) &= (l_131 == p_56)))), (**g_66)))), l_81[0]))) , g_96) , p_54), (**l_431)))))) | p_54) | l_81[0]), (**g_43))), p_56)))) < 0xAAL), g_20))) || 0UL)))), l_81[1])), l_410[1])) != 0x9037L) != g_397[5]) && (**l_431)) || l_384), 0xF315L)), p_54)) | l_81[1]) != (-6L)) ^ l_468) , (void*)0);
                l_468 &= (*p_55);
            }
        }
        for (g_184 = 0; (g_184 < 20); g_184 = safe_add_func_uint8_t_u_u(g_184, 6))
        {
            if ((*p_55))
                break;
        }
        if ((*g_430))
            break;
    }
    return &g_18[4];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_18[i], "g_18[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_127[i][j][k], "g_127[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_397[i], "g_397[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_494[i], "g_494[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_601, "g_601", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_735, "g_735", print_hash_value);
    transparent_crc(g_843, "g_843", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_1009, "g_1009", print_hash_value);
    transparent_crc(g_1037, "g_1037", print_hash_value);
    transparent_crc(g_1078, "g_1078", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1118[i], "g_1118[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1140, "g_1140", print_hash_value);
    transparent_crc(g_1179, "g_1179", print_hash_value);
    transparent_crc(g_1282, "g_1282", print_hash_value);
    transparent_crc(g_1335, "g_1335", print_hash_value);
    transparent_crc(g_1342, "g_1342", print_hash_value);
    transparent_crc(g_1371, "g_1371", print_hash_value);
    transparent_crc(g_1426, "g_1426", print_hash_value);
    transparent_crc(g_1449, "g_1449", print_hash_value);
    transparent_crc(g_1633, "g_1633", print_hash_value);
    transparent_crc(g_2083, "g_2083", print_hash_value);
    transparent_crc(g_2196, "g_2196", print_hash_value);
    transparent_crc(g_2516, "g_2516", print_hash_value);
    transparent_crc(g_2554, "g_2554", print_hash_value);
    transparent_crc(g_2634, "g_2634", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2643[i], "g_2643[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2648[i][j], "g_2648[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2653, "g_2653", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2901[i][j], "g_2901[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3081, "g_3081", print_hash_value);
    transparent_crc(g_3285, "g_3285", print_hash_value);
    transparent_crc(g_3303, "g_3303", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
