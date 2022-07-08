// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 32374A29
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



static int32_t g_4 = 0x6F9B2CFBL;
static uint8_t g_5[4] = {0x21L,0x21L,0x21L,0x21L};
static int32_t *g_52 = &g_4;
static int32_t **g_51 = &g_52;
static uint8_t g_56 = 0xDFL;
static uint32_t g_72[7] = {0x4BAE9140L,0x4BAE9140L,0x4BAE9140L,0x4BAE9140L,0x4BAE9140L,0x4BAE9140L,0x4BAE9140L};
static uint64_t g_84[1] = {1UL};
static uint64_t g_86 = 18446744073709551606UL;
static uint64_t *g_85 = &g_86;
static int8_t g_95 = (-4L);
static uint16_t g_98 = 0xB41EL;
static const int16_t g_120 = 6L;
static const int16_t *g_119[6][1][10] = {{{(void*)0,(void*)0,&g_120,(void*)0,&g_120,(void*)0,&g_120,(void*)0,(void*)0,&g_120}},{{&g_120,(void*)0,(void*)0,&g_120,&g_120,(void*)0,(void*)0,(void*)0,(void*)0,&g_120}},{{&g_120,&g_120,&g_120,&g_120,&g_120,(void*)0,(void*)0,&g_120,(void*)0,&g_120}},{{(void*)0,(void*)0,&g_120,(void*)0,&g_120,(void*)0,(void*)0,(void*)0,(void*)0,&g_120}},{{(void*)0,(void*)0,&g_120,(void*)0,&g_120,&g_120,(void*)0,(void*)0,&g_120,&g_120}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_120,(void*)0,(void*)0,(void*)0,(void*)0,&g_120}}};
static int16_t g_158[1][1][2] = {{{0xA515L,0xA515L}}};
static int16_t *g_157 = &g_158[0][0][1];
static int64_t g_170 = 0xC81A46AFD11974AALL;
static int8_t g_227 = 0x2EL;
static uint32_t g_229 = 0x26A06325L;
static int8_t g_238 = 0L;
static int32_t g_239 = 5L;
static uint8_t g_241 = 0xFBL;
static uint8_t * const g_260[10][8][3] = {{{&g_5[1],&g_56,&g_56},{&g_241,&g_56,&g_56},{&g_56,(void*)0,&g_56},{&g_5[1],&g_56,&g_5[2]},{&g_56,(void*)0,&g_5[2]},{(void*)0,&g_56,&g_241},{&g_5[2],&g_56,(void*)0},{&g_241,&g_5[0],&g_5[3]}},{{&g_56,&g_5[0],&g_5[0]},{&g_56,&g_56,&g_241},{&g_56,&g_56,(void*)0},{(void*)0,(void*)0,&g_241},{&g_56,&g_56,&g_56},{(void*)0,(void*)0,&g_56},{(void*)0,&g_56,&g_56},{&g_56,&g_56,&g_241}},{{&g_241,&g_5[0],(void*)0},{&g_5[0],&g_5[0],&g_56},{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_241},{&g_56,(void*)0,&g_56},{&g_56,&g_56,&g_5[0]},{(void*)0,(void*)0,(void*)0},{&g_241,&g_56,&g_241}},{{&g_56,&g_56,&g_5[3]},{&g_241,&g_5[0],&g_5[1]},{&g_241,&g_5[0],(void*)0},{&g_5[1],&g_56,&g_56},{&g_241,&g_56,&g_56},{&g_56,(void*)0,&g_56},{&g_5[1],&g_56,&g_5[2]},{&g_56,(void*)0,&g_5[2]}},{{(void*)0,&g_56,&g_241},{&g_5[2],&g_56,(void*)0},{&g_241,&g_5[0],&g_5[3]},{&g_56,&g_5[0],&g_5[0]},{&g_56,&g_56,&g_241},{&g_56,&g_56,(void*)0},{(void*)0,(void*)0,&g_241},{&g_56,&g_56,&g_56}},{{(void*)0,(void*)0,&g_56},{(void*)0,&g_56,&g_56},{&g_56,&g_56,&g_241},{&g_241,&g_5[0],(void*)0},{&g_5[0],&g_5[0],&g_56},{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_241},{&g_56,(void*)0,&g_56}},{{&g_56,&g_56,&g_5[0]},{(void*)0,(void*)0,(void*)0},{&g_241,&g_56,&g_241},{&g_56,&g_56,&g_5[3]},{&g_241,&g_5[0],&g_5[1]},{&g_241,&g_5[0],(void*)0},{&g_5[1],&g_241,&g_5[2]},{&g_56,&g_56,&g_5[1]}},{{&g_56,&g_241,&g_5[0]},{&g_5[2],&g_241,&g_5[1]},{(void*)0,&g_241,&g_56},{(void*)0,&g_56,&g_241},{(void*)0,&g_241,&g_56},{&g_56,&g_5[3],&g_5[3]},{&g_241,&g_5[3],&g_5[3]},{(void*)0,&g_241,(void*)0}},{{&g_56,&g_56,&g_5[2]},{&g_241,&g_241,&g_5[2]},{(void*)0,&g_241,&g_5[0]},{&g_5[3],&g_241,&g_241},{&g_56,&g_56,&g_241},{&g_56,&g_241,(void*)0},{&g_5[2],&g_5[3],(void*)0},{&g_241,&g_5[3],&g_56}},{{&g_5[3],&g_241,&g_56},{&g_241,&g_56,&g_241},{&g_56,&g_241,&g_241},{&g_56,&g_241,&g_241},{&g_241,&g_241,&g_5[0]},{&g_5[0],&g_56,(void*)0},{&g_241,&g_241,&g_5[1]},{&g_5[0],&g_5[3],&g_241}}};
static uint8_t * const *g_259 = &g_260[6][5][1];
static const uint16_t *g_267 = (void*)0;
static const uint16_t **g_266 = &g_267;
static const uint16_t ***g_265 = &g_266;
static int16_t ****g_300 = (void*)0;
static const int32_t g_303[1][9] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
static uint64_t g_314 = 8UL;
static uint16_t g_318 = 0xA696L;
static const uint16_t ****g_324[3][8][10] = {{{&g_265,&g_265,(void*)0,&g_265,&g_265,&g_265,&g_265,&g_265,(void*)0,&g_265},{(void*)0,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265},{&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,(void*)0,(void*)0,&g_265},{&g_265,&g_265,&g_265,&g_265,(void*)0,&g_265,&g_265,&g_265,&g_265,&g_265},{&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265},{(void*)0,&g_265,(void*)0,&g_265,&g_265,(void*)0,&g_265,&g_265,(void*)0,&g_265},{&g_265,&g_265,&g_265,&g_265,&g_265,(void*)0,&g_265,&g_265,(void*)0,&g_265},{&g_265,&g_265,&g_265,&g_265,&g_265,(void*)0,&g_265,&g_265,&g_265,&g_265}},{{&g_265,&g_265,&g_265,&g_265,(void*)0,(void*)0,&g_265,(void*)0,&g_265,(void*)0},{(void*)0,(void*)0,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,(void*)0,(void*)0},{&g_265,&g_265,&g_265,(void*)0,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265},{&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,(void*)0,&g_265,(void*)0,(void*)0},{&g_265,&g_265,(void*)0,&g_265,&g_265,&g_265,(void*)0,&g_265,(void*)0,&g_265},{&g_265,&g_265,&g_265,(void*)0,&g_265,(void*)0,&g_265,&g_265,&g_265,&g_265},{&g_265,&g_265,(void*)0,(void*)0,(void*)0,&g_265,&g_265,(void*)0,&g_265,&g_265},{&g_265,&g_265,(void*)0,(void*)0,&g_265,(void*)0,&g_265,&g_265,&g_265,&g_265}},{{&g_265,(void*)0,&g_265,(void*)0,&g_265,&g_265,&g_265,&g_265,(void*)0,(void*)0},{(void*)0,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,(void*)0,(void*)0,&g_265},{(void*)0,(void*)0,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265},{&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,(void*)0,(void*)0,&g_265,&g_265},{&g_265,&g_265,&g_265,&g_265,(void*)0,(void*)0,(void*)0,&g_265,(void*)0,&g_265},{&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265},{&g_265,&g_265,(void*)0,(void*)0,&g_265,&g_265,(void*)0,(void*)0,&g_265,&g_265},{(void*)0,&g_265,(void*)0,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265}}};
static const uint16_t *****g_323[2] = {&g_324[2][5][8],&g_324[2][5][8]};
static int64_t g_351[9] = {0x00AAD98337A895C0LL,0x00AAD98337A895C0LL,0x00AAD98337A895C0LL,0x00AAD98337A895C0LL,0x00AAD98337A895C0LL,0x00AAD98337A895C0LL,0x00AAD98337A895C0LL,0x00AAD98337A895C0LL,0x00AAD98337A895C0LL};
static int16_t g_370 = 0L;
static int16_t * const g_369 = &g_370;
static int16_t * const *g_368[9] = {&g_369,&g_369,&g_369,&g_369,&g_369,&g_369,&g_369,&g_369,&g_369};
static int8_t g_377 = 8L;
static uint32_t g_378 = 0xB117E638L;
static uint8_t g_396 = 0x7FL;
static uint8_t g_405 = 0x7EL;
static int32_t **g_409 = &g_52;
static uint8_t g_410 = 0x95L;
static int32_t g_418[3][2][3] = {{{0L,1L,0L},{1L,1L,(-1L)}},{{0L,1L,0L},{1L,(-1L),(-1L)}},{{0L,1L,0L},{1L,1L,(-1L)}}};
static uint16_t g_553 = 0xF9E6L;
static uint16_t *g_641 = &g_318;
static uint16_t **g_640 = &g_641;
static uint8_t *g_735 = &g_56;
static uint8_t **g_734[3] = {&g_735,&g_735,&g_735};
static int16_t g_758 = 0x27B7L;
static int32_t g_814 = (-1L);
static uint32_t *g_842[6][5] = {{&g_72[0],&g_72[0],&g_72[6],&g_72[0],&g_72[0]},{&g_229,&g_72[0],&g_229,&g_229,&g_72[0]},{&g_72[0],&g_229,&g_229,&g_72[0],&g_72[6]},{&g_229,&g_229,&g_72[0],&g_229,&g_229},{&g_72[6],&g_229,&g_72[6],&g_72[6],&g_229},{&g_229,&g_72[6],&g_72[6],&g_229,&g_72[6]}};
static uint32_t **g_841 = &g_842[2][2];
static uint32_t ***g_840 = &g_841;
static uint8_t * const **g_1089 = (void*)0;
static uint8_t * const ***g_1088[7][4][5] = {{{&g_1089,(void*)0,&g_1089,&g_1089,&g_1089},{(void*)0,&g_1089,(void*)0,&g_1089,&g_1089},{&g_1089,(void*)0,&g_1089,(void*)0,&g_1089},{&g_1089,&g_1089,(void*)0,&g_1089,(void*)0}},{{&g_1089,&g_1089,&g_1089,&g_1089,&g_1089},{&g_1089,&g_1089,(void*)0,(void*)0,&g_1089},{&g_1089,&g_1089,&g_1089,(void*)0,&g_1089},{(void*)0,&g_1089,&g_1089,&g_1089,&g_1089}},{{&g_1089,&g_1089,&g_1089,&g_1089,&g_1089},{(void*)0,&g_1089,&g_1089,&g_1089,&g_1089},{&g_1089,(void*)0,&g_1089,(void*)0,&g_1089},{(void*)0,&g_1089,(void*)0,&g_1089,&g_1089}},{{&g_1089,(void*)0,&g_1089,&g_1089,(void*)0},{&g_1089,&g_1089,(void*)0,&g_1089,&g_1089},{(void*)0,&g_1089,&g_1089,(void*)0,&g_1089},{&g_1089,(void*)0,(void*)0,(void*)0,&g_1089}},{{(void*)0,&g_1089,&g_1089,&g_1089,&g_1089},{&g_1089,&g_1089,&g_1089,&g_1089,&g_1089},{&g_1089,&g_1089,(void*)0,(void*)0,&g_1089},{(void*)0,(void*)0,&g_1089,&g_1089,&g_1089}},{{&g_1089,&g_1089,(void*)0,&g_1089,&g_1089},{(void*)0,&g_1089,&g_1089,&g_1089,(void*)0},{&g_1089,(void*)0,&g_1089,&g_1089,&g_1089},{(void*)0,&g_1089,(void*)0,&g_1089,&g_1089}},{{&g_1089,(void*)0,&g_1089,(void*)0,&g_1089},{&g_1089,&g_1089,(void*)0,&g_1089,(void*)0},{&g_1089,&g_1089,&g_1089,&g_1089,&g_1089},{&g_1089,&g_1089,(void*)0,(void*)0,&g_1089}}};
static uint16_t g_1096 = 0x909DL;
static const int32_t *g_1198 = &g_814;
static const int32_t **g_1197 = &g_1198;
static int32_t g_1262 = 0x15B3F372L;
static int8_t g_1321[4] = {0x13L,0x13L,0x13L,0x13L};
static int8_t ** const g_1385 = (void*)0;
static uint32_t g_1411[6][6][3] = {{{0xD0961BE7L,0x0254EBAAL,0x19B19472L},{0x0254EBAAL,0xD8C8D16CL,1UL},{4294967295UL,4294967291UL,0x9589181BL},{0xD8C8D16CL,0xB3444FB6L,0x9589181BL},{4294967286UL,4294967295UL,1UL},{4294967291UL,4294967295UL,0x19B19472L}},{{0xB3444FB6L,0x14EE877DL,7UL},{4294967291UL,0x11D50C94L,4294967288UL},{4294967286UL,4294967286UL,0UL},{0xD8C8D16CL,4294967286UL,8UL},{4294967295UL,1UL,0xD0961BE7L},{0x13C20DF8L,0x4F590C74L,4294967291UL}},{{0x42526556L,0xA18BA0D1L,0xD0961BE7L},{0x7BD43980L,0xE9D0569BL,0xAA0857D7L},{4294967295UL,0x89D4BA7FL,0x14EE877DL},{4294967295UL,0xE7548E78L,0xB3444FB6L},{0x7BD43980L,1UL,0xD8C8D16CL},{0x42526556L,0x13C20DF8L,0x8A7DDE3CL}},{{0x13C20DF8L,1UL,4294967295UL},{0xA18BA0D1L,0xE7548E78L,0x79F43CECL},{1UL,0x89D4BA7FL,0x79F43CECL},{0xA6050DC2L,0xE9D0569BL,4294967295UL},{4294967295UL,0xA18BA0D1L,0x8A7DDE3CL},{0x89D4BA7FL,0x4F590C74L,0xD8C8D16CL}},{{4294967295UL,1UL,0xB3444FB6L},{0xA6050DC2L,0xA6050DC2L,0x14EE877DL},{1UL,0xA6050DC2L,0xAA0857D7L},{0xA18BA0D1L,1UL,0xD0961BE7L},{0x13C20DF8L,0x4F590C74L,4294967291UL},{0x42526556L,0xA18BA0D1L,0xD0961BE7L}},{{0x7BD43980L,0xE9D0569BL,0xAA0857D7L},{4294967295UL,0x89D4BA7FL,0x14EE877DL},{4294967295UL,0xE7548E78L,0xB3444FB6L},{0x7BD43980L,1UL,0xD8C8D16CL},{0x42526556L,0x13C20DF8L,0x8A7DDE3CL},{0x13C20DF8L,1UL,4294967295UL}}};
static uint16_t ***g_1492 = &g_640;
static uint16_t ****g_1491 = &g_1492;
static uint32_t **g_1726[6][2][10] = {{{&g_842[0][0],&g_842[4][4],&g_842[4][4],&g_842[0][0],&g_842[2][2],&g_842[2][2],&g_842[0][0],&g_842[2][2],&g_842[4][2],&g_842[2][2]},{&g_842[2][2],&g_842[2][2],&g_842[0][0],&g_842[2][2],&g_842[4][2],&g_842[0][0],&g_842[4][4],&g_842[0][0],&g_842[4][2],&g_842[2][2]}},{{&g_842[2][2],&g_842[2][2],&g_842[2][2],&g_842[0][0],&g_842[1][3],&g_842[5][1],&g_842[4][2],&g_842[0][4],&g_842[2][2],&g_842[2][2]},{&g_842[2][2],&g_842[5][1],&g_842[2][2],&g_842[4][4],&g_842[0][4],&g_842[2][2],&g_842[2][2],&g_842[0][4],&g_842[4][4],&g_842[2][2]}},{{&g_842[0][0],&g_842[0][0],&g_842[2][2],&g_842[4][4],&g_842[2][2],&g_842[2][2],&g_842[2][2],&g_842[0][0],&g_842[0][4],&g_842[2][2]},{&g_842[2][2],&g_842[4][2],&g_842[0][0],&g_842[2][2],&g_842[2][2],&g_842[1][3],&g_842[2][2],&g_842[2][2],&g_842[0][0],&g_842[4][2]}},{{&g_842[0][4],&g_842[0][0],&g_842[4][4],&g_842[2][2],&g_842[2][2],&g_842[0][0],&g_842[2][2],&g_842[1][3],&g_842[4][4],&g_842[0][0]},{&g_842[4][4],&g_842[5][1],&g_842[2][2],&g_842[4][2],&g_842[0][0],&g_842[0][0],&g_842[4][2],&g_842[2][2],&g_842[5][1],&g_842[4][4]}},{{&g_842[0][4],&g_842[2][2],&g_842[0][0],&g_842[2][2],&g_842[0][0],&g_842[1][3],&g_842[4][4],&g_842[5][1],&g_842[2][2],&g_842[2][2]},{&g_842[2][2],&g_842[2][2],&g_842[0][0],&g_842[2][2],&g_842[0][0],&g_842[2][2],&g_842[0][0],&g_842[2][2],&g_842[2][2],&g_842[4][4]}},{{&g_842[0][0],&g_842[4][4],&g_842[2][2],&g_842[2][2],&g_842[0][0],&g_842[2][2],&g_842[1][3],&g_842[4][4],&g_842[0][0],&g_842[0][0]},{&g_842[2][2],&g_842[2][2],&g_842[5][1],&g_842[2][2],&g_842[2][2],&g_842[2][2],&g_842[0][4],&g_842[0][0],&g_842[2][2],&g_842[0][0]}}};
static uint32_t *** const g_1725[9] = {&g_1726[0][0][7],&g_1726[0][0][7],&g_1726[0][0][7],&g_1726[0][0][7],&g_1726[0][0][7],&g_1726[0][0][7],&g_1726[0][0][7],&g_1726[0][0][7],&g_1726[0][0][7]};
static uint32_t *** const *g_1724 = &g_1725[1];
static uint16_t g_1779 = 0xD006L;
static uint16_t g_1870 = 0xAD5AL;
static uint32_t ****g_1917 = &g_840;
static uint32_t *****g_1916[9] = {&g_1917,&g_1917,&g_1917,&g_1917,&g_1917,&g_1917,&g_1917,&g_1917,&g_1917};
static const uint32_t *g_1957 = &g_378;
static const uint32_t **g_1956 = &g_1957;
static int16_t g_2113 = 0x10B3L;
static uint16_t g_2117[3] = {65535UL,65535UL,65535UL};
static int16_t **g_2289 = &g_157;
static int16_t ***g_2288 = &g_2289;
static int16_t ****g_2287 = &g_2288;
static int16_t *****g_2309[4][10][1] = {{{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300}},{{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300}},{{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300}},{{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300},{&g_300}}};
static uint64_t g_2440[7] = {0x339CCF96F58B76BELL,0x339CCF96F58B76BELL,0x339CCF96F58B76BELL,0x339CCF96F58B76BELL,0x339CCF96F58B76BELL,0x339CCF96F58B76BELL,0x339CCF96F58B76BELL};
static int32_t *g_2458[6] = {&g_239,&g_239,&g_239,&g_239,&g_239,&g_239};
static int32_t **g_2457 = &g_2458[5];
static int32_t ***g_2456 = &g_2457;
static int8_t g_2518 = 0xC8L;
static uint64_t g_2529 = 0x8E48B3C672E5EF1BLL;
static uint64_t g_2530 = 18446744073709551607UL;
static uint64_t g_2531 = 0UL;
static uint64_t g_2532[7][3] = {{0xE156B07EC2138A63LL,0xCBFE4BEF9295C881LL,0xE156B07EC2138A63LL},{0xE156B07EC2138A63LL,18446744073709551615UL,0xDEE6AE2941AA371DLL},{0xE156B07EC2138A63LL,0xA83730D04F597CF9LL,18446744073709551614UL},{0xE156B07EC2138A63LL,0xCBFE4BEF9295C881LL,0xE156B07EC2138A63LL},{0xE156B07EC2138A63LL,18446744073709551615UL,0xDEE6AE2941AA371DLL},{0xE156B07EC2138A63LL,0xA83730D04F597CF9LL,18446744073709551614UL},{0xE156B07EC2138A63LL,0xCBFE4BEF9295C881LL,0xE156B07EC2138A63LL}};
static uint64_t g_2533 = 0xCCDD73EEFEDBC475LL;
static uint64_t g_2534 = 6UL;
static uint64_t g_2535[2][1] = {{18446744073709551612UL},{18446744073709551612UL}};
static uint64_t * const *g_2537 = (void*)0;
static uint64_t **g_2648 = &g_85;
static uint64_t ***g_2647 = &g_2648;
static const int32_t *g_2664 = (void*)0;
static int64_t g_2823 = 3L;
static int64_t *g_2848 = &g_351[7];
static int64_t **g_2847 = &g_2848;
static uint32_t g_2859 = 4294967290UL;
static uint8_t g_2876 = 0xD5L;
static const int64_t g_2897 = 1L;
static int32_t g_3048 = 0x89C116CDL;
static uint16_t g_3071 = 1UL;
static int16_t * const ** const g_3240 = &g_368[2];
static int16_t * const ** const *g_3239[3] = {&g_3240,&g_3240,&g_3240};
static int8_t ***g_3302 = (void*)0;
static int8_t ****g_3301 = &g_3302;
static uint64_t g_3314[5][4] = {{0xF9796BDFF466345ALL,0x00DCAA762148968BLL,0x00DCAA762148968BLL,0xF9796BDFF466345ALL},{0x00DCAA762148968BLL,0xF9796BDFF466345ALL,0x00DCAA762148968BLL,0x00DCAA762148968BLL},{0xF9796BDFF466345ALL,0xF9796BDFF466345ALL,0x57CD09CAC45A1184LL,0xF9796BDFF466345ALL},{0xF9796BDFF466345ALL,0x00DCAA762148968BLL,0x00DCAA762148968BLL,0xF9796BDFF466345ALL},{0x00DCAA762148968BLL,0xF9796BDFF466345ALL,0x00DCAA762148968BLL,0x00DCAA762148968BLL}};
static int64_t g_3421 = 1L;
static int32_t g_3491[3][4][2] = {{{0x6F29A66CL,0x6F29A66CL},{0x365DD224L,0x6F29A66CL},{0x6F29A66CL,0x365DD224L},{0x6F29A66CL,0x6F29A66CL}},{{0x365DD224L,0x6F29A66CL},{0x6F29A66CL,0x365DD224L},{0x6F29A66CL,0x6F29A66CL},{0x365DD224L,0x6F29A66CL}},{{0x6F29A66CL,0x365DD224L},{0x6F29A66CL,0x6F29A66CL},{0x365DD224L,0x6F29A66CL},{0x6F29A66CL,0x365DD224L}}};



static int64_t func_1(void);
static const int16_t func_13(uint32_t p_14, int32_t * p_15, int32_t * p_16, const int64_t p_17, const int16_t p_18);
static int64_t func_28(int32_t p_29, const int32_t * p_30);
static const int32_t * func_31(uint16_t p_32, uint64_t p_33, int32_t * p_34, int32_t * p_35);
static int32_t * func_36(uint8_t p_37, uint32_t p_38);
static const int32_t ** func_44(const int32_t ** p_45, int32_t p_46, int32_t ** p_47);
static int32_t func_59(int32_t * p_60, int32_t ** p_61, uint8_t p_62, uint32_t p_63);
static uint8_t func_66(int8_t p_67, uint32_t p_68, int32_t ** p_69, uint8_t p_70, int32_t * p_71);
static const uint32_t func_73(uint32_t p_74, int32_t ** p_75, uint64_t p_76, int8_t p_77);
static uint64_t func_78(int32_t * p_79);
# 148 "<stdin>"
static int64_t func_1(void)
{
    uint32_t l_2 = 0xBCD8C45CL;
    int32_t *l_3 = &g_4;
    int16_t l_2908 = 1L;
    int32_t l_3412 = 0xE9B4C81BL;
    uint64_t ***l_3433 = &g_2648;
    int64_t ***l_3442 = &g_2847;
    uint16_t ***l_3443 = &g_640;
    const uint16_t ***l_3445 = &g_266;
    int64_t l_3460 = 0L;
    int32_t l_3467 = (-1L);
    int32_t l_3469 = 1L;
    int32_t l_3471 = 0xB98B234FL;
    int32_t l_3472 = 0xDFDBC5BBL;
    uint64_t l_3480 = 1UL;
    int64_t l_3518[1][3][5] = {{{0L,0L,0L,0L,0L},{0xA31D1A86F4F4DD4BLL,0xBA96985FB1229CA0LL,0xA31D1A86F4F4DD4BLL,0xBA96985FB1229CA0LL,0xA31D1A86F4F4DD4BLL},{0L,0L,0L,0L,0L}}};
    int i, j, k;
    (*l_3) = l_2;
    for (g_4 = 0; (g_4 <= 3); g_4 += 1)
    {
        uint16_t l_6 = 65532UL;
        int32_t *l_41 = &g_4;
        int8_t l_3420[4] = {0x21L,0x21L,0x21L,0x21L};
        int32_t l_3457 = 0x1F23E60FL;
        int32_t l_3470 = 1L;
        int16_t l_3519 = 0x2D7CL;
        int i;
        for (l_2 = 0; (l_2 <= 3); l_2 += 1)
        {
            l_6--;
        }
    }
    return (**g_2847);
}







static const int16_t func_13(uint32_t p_14, int32_t * p_15, int32_t * p_16, const int64_t p_17, const int16_t p_18)
{
    int16_t ***l_2914 = &g_2289;
    int32_t l_2927 = 0x828E6707L;
    uint16_t l_2994 = 0UL;
    int8_t l_3086 = 0x98L;
    uint64_t l_3129 = 0x8AA4264701FA29E7LL;
    uint8_t l_3131 = 246UL;
    int8_t **l_3176 = (void*)0;
    int8_t *l_3178[1];
    int8_t ** const l_3177 = &l_3178[0];
    int32_t l_3249 = 0x9B040E91L;
    int32_t l_3297 = 1L;
    int32_t l_3312 = 0xD291226AL;
    int32_t l_3313[2];
    uint8_t l_3319 = 1UL;
    int i;
    for (i = 0; i < 1; i++)
        l_3178[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_3313[i] = 7L;
    for (g_377 = 0; (g_377 <= 3); g_377 += 1)
    {
        int64_t **l_2911[6][5] = {{(void*)0,(void*)0,&g_2848,&g_2848,&g_2848},{&g_2848,&g_2848,&g_2848,&g_2848,&g_2848},{(void*)0,(void*)0,&g_2848,&g_2848,&g_2848},{&g_2848,&g_2848,&g_2848,&g_2848,&g_2848},{(void*)0,&g_2848,(void*)0,&g_2848,(void*)0},{&g_2848,&g_2848,&g_2848,&g_2848,&g_2848}};
        int16_t ***l_2915 = &g_2289;
        int32_t l_2926 = (-8L);
        int16_t l_3036 = 0x1138L;
        int32_t *l_3110[5];
        int8_t *** const *l_3112 = (void*)0;
        int8_t *** const **l_3111 = &l_3112;
        uint32_t l_3122 = 0xC3054B49L;
        uint8_t l_3127 = 255UL;
        uint32_t * const l_3180 = &g_72[5];
        uint8_t l_3182 = 0xE3L;
        uint32_t l_3188 = 0x2AC01CD9L;
        uint16_t l_3200 = 0UL;
        int16_t *****l_3256[4] = {&g_2287,&g_2287,&g_2287,&g_2287};
        int32_t **l_3271 = &l_3110[2];
        int i, j;
        for (i = 0; i < 5; i++)
            l_3110[i] = (void*)0;
        for (g_170 = 0; (g_170 <= 3); g_170 += 1)
        {
            uint16_t *l_2921 = &g_553;
            uint8_t ***l_2983 = &g_734[2];
            int32_t l_3000 = 0xF3050436L;
            int32_t l_3001 = 0x1BBD8797L;
            uint64_t l_3027[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
            int i;
            if (g_5[g_377])
            {
                uint16_t *l_2922 = &g_318;
                int32_t l_2946 = 0x2F11ADDEL;
                uint32_t *l_3083 = &g_378;
                uint32_t **l_3082 = &l_3083;
                uint64_t ****l_3103 = &g_2647;
                uint8_t l_3130 = 0x13L;
                int i;
                if ((l_2927 = ((safe_rshift_func_int8_t_s_s(((l_2911[5][1] == &g_2848) , (g_5[g_377] , (((l_2914 == l_2915) && (!(safe_div_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((g_5[g_377] <= (l_2921 != l_2922)), (((l_2926 = (safe_div_func_int16_t_s_s(((safe_unary_minus_func_uint64_t_u((((***g_2288) &= ((9L > g_5[g_377]) | g_5[g_377])) < p_17))) == 0xECDDF7F2FCDB299CLL), p_14))) <= p_14) & g_5[g_377]))) != (***g_840)) && p_18), p_18)))) || p_18))), 3)) , l_2927)))
                {
                    int64_t l_2937 = (-5L);
                    int32_t *l_2940 = &g_814;
                    uint32_t l_2965 = 0x8C7BE656L;
                    (*l_2940) = ((p_14 <= 0x1D35L) == (safe_rshift_func_uint8_t_u_u((((((*p_16) ^ 0x13B9B142L) || (+((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_2926, (safe_rshift_func_uint8_t_u_s(l_2937, 7)))), (l_2927 || ((safe_rshift_func_int16_t_s_u(((p_14 , (void*)0) == (void*)0), 12)) ^ p_17)))) || p_18))) != l_2927) && l_2927), p_18)));
                    for (g_396 = 0; (g_396 <= 1); g_396 += 1)
                    {
                        const int32_t *l_2943 = &l_2927;
                        int i, j, k;
                        (*g_1197) = (void*)0;
                        l_2926 ^= (safe_add_func_int64_t_s_s(0L, g_1411[(g_377 + 2)][(g_170 + 1)][g_396]));
                        (*g_1197) = l_2943;
                    }
                    for (g_2534 = 0; (g_2534 <= 2); g_2534 += 1)
                    {
                        int i, j, k;
                        (*l_2940) ^= (l_2946 |= (g_1411[g_170][g_170][g_2534] <= (safe_div_func_uint64_t_u_u(g_1411[(g_2534 + 1)][(g_377 + 2)][g_2534], ((**g_2648) = (**g_2648))))));
                        (*g_1197) = p_15;
                        g_418[2][1][0] ^= ((((((&g_1385 != ((safe_mul_func_uint16_t_u_u(p_17, ((safe_mul_func_int16_t_s_s(p_17, g_5[g_377])) ^ ((safe_add_func_int8_t_s_s(0xF2L, ((p_18 , (safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((**g_2289), (safe_sub_func_int8_t_s_s(p_14, (safe_lshift_func_int16_t_s_u((*l_2940), 6)))))), l_2965)), 1L)), 0x0CL))) == p_14))) | p_18)))) , (void*)0)) || p_14) ^ 6L) >= 0xCCL) == p_14) > (**g_2847));
                    }
                    if ((*l_2940))
                        continue;
                }
                else
                {
                    uint32_t l_2977 = 4294967288UL;
                    int32_t *l_2984 = &g_4;
                    uint8_t l_2989 = 0xD6L;
                    if ((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(p_14, (g_5[g_377] && ((**g_2847) = ((((safe_lshift_func_uint16_t_u_s(l_2927, 12)) && (((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(g_5[g_377])), p_18)) && (l_2927 & (++l_2977))) < (safe_rshift_func_uint8_t_u_s((~((void*)0 != l_2983)), 4)))) == l_2927) || 4294967286UL))))) < 18446744073709551615UL), 0UL)), 1L)))
                    {
                        uint8_t **l_3002 = &g_735;
                        int32_t l_3015 = 0x1FFB6967L;
                        int16_t *l_3028 = (void*)0;
                        int16_t *l_3029[4][3] = {{&g_2113,&g_2113,&g_2113},{&g_370,&g_370,&g_370},{&g_2113,&g_2113,&g_2113},{&g_370,&g_370,&g_370}};
                        int32_t *l_3030 = &g_418[1][0][2];
                        int i, j;
                        (*g_1197) = l_2984;
                        l_2946 = (((((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((((1UL > l_2989) , (((**g_640) < (**g_640)) , (g_5[g_377] , (((safe_div_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((l_2994 && (safe_lshift_func_int8_t_s_s((g_5[g_377] > (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(l_2994)), (l_3001 = (l_3000 &= 248UL))))), p_14))), 0x9AEEF652F60BC143LL)), 1L)) , (void*)0) == l_3002)))) , 253UL), 2)) != p_17), 1)) ^ (*g_2848)) , l_2926) > l_2927) || 18446744073709551611UL);
                        (*l_3030) = ((((l_2927 ^= ((0x021AC57CL != (((*l_2984) , (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(p_14, p_14)) | ((g_5[g_377] < ((safe_div_func_int8_t_s_s(0x5EL, (((((safe_mod_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(l_3015, (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((!l_2926) != p_14), 13)), p_14)), p_17)) , l_3027[4]), l_3027[3])), g_5[g_377])))) <= 7L) , p_17), 0x18B9L)) != 0x87386C2EL) || 0x871F423502DE34ADLL) != (*l_2984)) || (-7L)))) != 0xF6EAAD480EE3B517LL)) != 0xE37B4000L)), (****g_2287)))) && p_14)) < l_3015)) ^ p_17) , (void*)0) != (void*)0);
                    }
                    else
                    {
                        uint32_t l_3035 = 0UL;
                        int32_t l_3043 = (-2L);
                        int32_t *l_3049 = &g_418[0][1][2];
                        int32_t *l_3050[5][8][6] = {{{(void*)0,&g_1262,&l_3000,&g_814,&g_4,&l_2926},{(void*)0,&l_3001,&g_1262,(void*)0,(void*)0,&l_3043},{&l_3043,&l_2927,&l_3001,(void*)0,&l_2946,&l_2946},{&l_2946,(void*)0,(void*)0,&l_2946,&g_1262,&g_814},{&l_2927,&l_2926,&g_814,&l_2926,(void*)0,&g_4},{&l_3001,&l_2926,&l_2927,&g_814,(void*)0,&l_3000},{&l_3001,&l_2926,&g_1262,&l_3000,&g_1262,&l_3001},{(void*)0,(void*)0,&l_2927,&l_3043,&l_2946,&g_4}},{{&l_2926,&l_2927,(void*)0,&g_814,(void*)0,&l_3000},{&l_3043,&l_3001,(void*)0,&l_3001,&g_4,(void*)0},{&g_814,&g_1262,&g_1262,&l_2927,&g_814,(void*)0},{&g_814,&g_1262,(void*)0,&l_3001,&g_4,&l_3000},{&g_4,(void*)0,(void*)0,&l_3043,&g_1262,&g_4},{&l_2927,&g_1262,&l_2927,&l_3000,&g_1262,&l_3001},{&g_4,&l_3001,&g_1262,&g_814,&l_3000,&l_3000},{&l_3000,(void*)0,&l_2927,&g_4,&l_2927,&g_4}},{{&l_3000,&l_3001,&g_814,&g_814,&l_2926,&g_814},{&g_4,&l_3000,(void*)0,&l_3000,&l_3000,&l_2946},{&l_2927,&l_3043,&l_3001,&l_3043,&l_3001,&l_3043},{&g_4,&g_4,&g_1262,&l_3001,&l_3001,&l_2926},{&g_814,(void*)0,&l_3000,&l_2927,&g_814,(void*)0},{&g_814,(void*)0,&l_3043,&l_3001,&l_3001,&g_4},{&l_3043,&g_4,&l_3000,&g_814,&l_3001,&g_1262},{&l_2926,&l_3043,&l_2926,&l_3043,&l_3000,&l_2926}},{{(void*)0,&l_3000,(void*)0,&l_3000,&l_2926,&l_3001},{&l_3001,&l_3001,&g_1262,&g_814,&l_2927,(void*)0},{&l_3001,(void*)0,&g_1262,&l_2926,&l_3000,&l_2926},{&l_2927,(void*)0,&l_2926,(void*)0,&g_1262,&l_3001},{(void*)0,&g_1262,&l_3001,&l_2946,&g_1262,&l_2946},{&l_3001,(void*)0,(void*)0,&g_1262,&l_2927,(void*)0},{(void*)0,&l_2946,&l_2927,(void*)0,&l_2927,&g_1262},{&l_2927,&g_814,(void*)0,(void*)0,(void*)0,&l_3000}},{{(void*)0,&l_3001,&l_2946,&g_1262,&g_4,&l_2927},{&l_3001,&l_3000,(void*)0,&l_2946,&l_2926,&l_2926},{(void*)0,&g_4,&g_4,(void*)0,&g_814,&g_814},{&l_2927,&l_3000,&l_2927,&g_4,&l_3043,&l_2927},{&l_3000,&l_3001,&l_2927,&g_814,&l_3043,(void*)0},{&l_2926,&l_3000,&g_1262,&g_4,&g_814,&l_3001},{&g_1262,&g_4,&l_2946,&g_1262,&l_2926,(void*)0},{&l_3001,&l_3000,&g_1262,&g_1262,&g_4,(void*)0}}};
                        int8_t *l_3058 = &g_1321[3];
                        int8_t **l_3057 = &l_3058;
                        int8_t ***l_3056 = &l_3057;
                        int8_t ****l_3055 = &l_3056;
                        uint32_t l_3068 = 0xF71E702BL;
                        int i, j, k;
                        (*g_1197) = p_15;
                        g_1262 |= ((*l_3049) = (((safe_mul_func_uint8_t_u_u(((l_3036 = (4294967294UL >= (l_3035 &= (((safe_add_func_uint8_t_u_u(p_14, p_14)) , p_15) != (***g_1917))))) == (safe_add_func_int8_t_s_s((*l_2984), p_14))), (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(l_3043, (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((p_17 > l_2994), g_3048)), p_17)))), 0x10AAL)))) && p_17) < 0xD5D3120FL));
                        l_3000 = (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(((((((void*)0 != l_3055) , (((**g_2648) , (~(safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s(l_2927, (l_2927 | (--(*g_85))))), (safe_add_func_int8_t_s_s((((((l_3068 > ((safe_lshift_func_int8_t_s_s((l_2926 = ((**l_3057) = (((*l_2984) == (*l_2984)) && l_2927))), l_3001)) <= l_2994)) , p_14) <= l_3036) , (*l_3049)) , g_5[g_377]), p_18)))))) != p_18)) , g_3071) , 0xD2L) && (-1L)), 3)), 7));
                    }
                }
                if ((((safe_mod_func_int8_t_s_s(((void*)0 == (*g_1197)), ((safe_rshift_func_uint16_t_u_u((l_2946 = ((safe_add_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(l_2994, ((**g_2648) = ((((****g_1917) = ((***g_2647) , g_5[g_377])) <= (safe_rshift_func_uint8_t_u_s(((&p_14 == ((*l_3082) = &p_14)) || (safe_div_func_int16_t_s_s((p_14 >= 0x8CL), l_3000))), l_3086))) | p_14)))), l_3036)) , 0UL)), 12)) , 249UL))) <= l_2994) | l_2994))
                {
                    int8_t *l_3104[5][8] = {{(void*)0,&g_377,&g_95,&l_3086,(void*)0,(void*)0,&l_3086,&g_95},{(void*)0,(void*)0,&g_377,&l_3086,(void*)0,(void*)0,&g_377,(void*)0},{(void*)0,&g_95,&l_3086,&g_95,(void*)0,&g_2518,(void*)0,(void*)0},{&g_95,(void*)0,&g_377,&l_3086,&l_3086,&g_377,(void*)0,&g_95},{&g_377,&g_2518,&g_377,&l_3086,(void*)0,(void*)0,(void*)0,&l_3086}};
                    int32_t l_3105[1];
                    int32_t *l_3106 = &l_2927;
                    int32_t *l_3107 = (void*)0;
                    int32_t *l_3108[8][10][3] = {{{&l_3000,&g_1262,&l_3000},{&g_4,&g_418[1][0][2],&g_418[2][1][2]},{&l_3001,&g_418[1][1][2],(void*)0},{(void*)0,&l_3000,&g_418[1][0][2]},{&l_3001,&l_3001,&l_2926},{&l_2926,&l_3000,(void*)0},{(void*)0,&l_3105[0],&l_3105[0]},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_3105[0],&l_2926,&l_2926}},{{(void*)0,(void*)0,&l_3000},{&l_3105[0],(void*)0,&g_4},{(void*)0,&l_2926,&l_3000},{&l_3000,&g_814,&l_3000},{&g_418[2][1][2],&l_2926,&l_3001},{&g_814,(void*)0,&g_814},{&l_2926,(void*)0,&l_3001},{&l_3001,&l_2926,&l_3105[0]},{&g_814,(void*)0,&g_4},{&l_3105[0],(void*)0,&l_3001}},{{&l_2926,&l_3105[0],&g_4},{&g_4,&l_3000,&l_3001},{&g_418[1][0][2],&l_3001,(void*)0},{&l_3105[0],&l_3000,(void*)0},{(void*)0,&l_3105[0],&l_3000},{&l_3105[0],(void*)0,(void*)0},{&l_3105[0],&g_814,&g_4},{&l_3000,&l_3001,&l_3105[0]},{&l_3001,(void*)0,&g_1262},{&l_2926,&l_3105[0],&l_2926}},{{&g_418[2][1][2],&l_3105[0],&l_3000},{&l_3105[0],(void*)0,(void*)0},{(void*)0,&l_3000,&l_3000},{(void*)0,&g_418[1][0][2],&g_418[2][1][2]},{&l_3105[0],&l_3105[0],&l_2926},{&g_418[2][1][2],(void*)0,&g_1262},{&l_2926,&g_418[1][0][2],(void*)0},{&l_3001,&l_2926,&l_3105[0]},{&l_3000,&l_3000,&g_4},{&l_3105[0],&g_418[1][0][2],&l_3105[0]}},{{&l_3105[0],&l_3001,(void*)0},{(void*)0,(void*)0,&l_2926},{&g_4,&l_2926,&l_3105[0]},{(void*)0,&l_3000,&l_2926},{(void*)0,&l_2926,&l_3105[0]},{&g_1262,(void*)0,(void*)0},{&g_814,&g_814,&l_3000},{(void*)0,&l_3105[0],&l_3000},{&g_1262,&g_1262,&g_418[1][0][2]},{&l_3105[0],&g_4,&l_3105[0]}},{{&l_3105[0],(void*)0,&l_3105[0]},{&g_418[1][0][2],(void*)0,&g_418[1][0][2]},{&g_418[1][1][2],&l_3105[0],&l_3105[0]},{&l_2926,&g_418[1][0][2],&l_3105[0]},{&l_3105[0],&g_418[2][1][2],&g_418[1][0][2]},{(void*)0,&l_3001,&l_3000},{&g_418[1][0][2],&g_814,&l_3000},{&l_3001,&l_3105[0],(void*)0},{&l_2926,&g_1262,&l_3105[0]},{&l_2926,&g_1262,&l_2926}},{{&l_3000,(void*)0,&l_3105[0]},{&g_814,&g_418[1][1][0],&l_2926},{&g_418[1][1][2],&g_418[1][0][2],(void*)0},{&g_1262,&l_3001,&l_3105[0]},{(void*)0,&g_418[2][1][2],&g_4},{(void*)0,&l_3105[0],&l_3105[0]},{&l_2926,&l_3105[0],(void*)0},{&g_418[1][0][2],&l_2926,&g_1262},{(void*)0,&g_814,&l_2926},{&g_814,&g_4,&g_418[2][1][2]}},{{&g_4,(void*)0,&l_3000},{(void*)0,(void*)0,(void*)0},{&g_418[1][1][2],&g_4,&l_3000},{&l_3000,&g_814,&l_2926},{&g_418[1][0][2],&l_2926,&g_1262},{&g_4,&l_3105[0],&l_3105[0]},{&l_3000,&l_3105[0],&g_4},{&l_3001,&g_418[2][1][2],(void*)0},{(void*)0,&l_3001,&l_3000},{&g_418[1][0][2],&g_418[1][0][2],&g_418[2][1][2]}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_3105[i] = 0x14F8F192L;
                    g_1262 ^= (g_418[1][0][2] = ((*l_3106) = (p_14 | ((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((l_3036 , (safe_mod_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s((!((*p_16) && 0xC313DB7BL)), ((((((0L >= (safe_mul_func_int16_t_s_s(((***l_2915) &= (safe_add_func_int32_t_s_s(0xC5ECF50CL, ((((((*g_2847) = (*g_2847)) != &p_17) > (l_2946 = (safe_unary_minus_func_int8_t_s((g_95 ^= (l_3103 != &g_2647)))))) | (*p_15)) & p_17)))), 65526UL))) <= 0L) , l_3105[0]) , p_14) > 246UL) <= (-10L)))) >= g_5[g_377]) | l_3086) || 0x1D5349C06AFEF1B4LL), p_18))) , 0xC77CL), l_2926)), p_18)) <= 1UL), 4)) < p_14))));
                }
                else
                {
                    int32_t **l_3109 = &g_52;
                    for (g_56 = 0; (g_56 <= 2); g_56 += 1)
                    {
                        l_2946 = ((*p_15) == p_18);
                        return p_18;
                    }
                    l_3110[4] = ((*l_3109) = (void*)0);
                }
                for (g_2533 = 0; (g_2533 <= 2); g_2533 += 1)
                {
                    int8_t *** const **l_3113 = &l_3112;
                    l_3113 = l_3111;
                    (*g_1197) = &l_3000;
                }
                l_2946 &= (((safe_sub_func_int16_t_s_s(((*p_15) || ((l_3130 |= ((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(l_3027[1], ((--l_3122) , p_14))), p_14)) , (safe_add_func_uint8_t_u_u(l_3127, ((+p_18) , l_3129)))), ((*p_15) < 0x8E9D8C65L))) != l_3027[4])) <= l_3131)), p_18)) && g_2823) > p_17);
            }
            else
            {
                int64_t l_3132 = 0xBCF016E66D1958D8LL;
                int32_t l_3146 = 0xC07230E2L;
                int32_t l_3147[7][6] = {{0x37148FEAL,0L,(-1L),0L,1L,(-5L)},{0x517C86C5L,0x71734900L,1L,0L,(-5L),(-5L)},{0x0AE87712L,(-1L),(-1L),0x0AE87712L,0x0423DEB0L,0L},{(-5L),0x0D805C64L,0x9EE054C3L,(-1L),0L,0L},{(-1L),0xE0DC9790L,1L,0x517C86C5L,0L,0x517C86C5L},{0x0423DEB0L,0x71734900L,0x0423DEB0L,0x37148FEAL,0x0D805C64L,0xE0DC9790L},{0x9EE054C3L,(-2L),0xD5D6A0A1L,0L,1L,0x0D805C64L}};
                uint32_t **l_3154 = (void*)0;
                int8_t *l_3173[10];
                int8_t **l_3172 = &l_3173[9];
                uint32_t *l_3179 = &g_72[0];
                uint16_t ** const l_3194 = &l_2921;
                uint32_t *l_3195 = &l_3188;
                int32_t l_3201 = 1L;
                int i, j;
                for (i = 0; i < 10; i++)
                    l_3173[i] = &g_2518;
                l_3132 |= l_3027[0];
                for (g_2859 = 0; (g_2859 <= 1); g_2859 += 1)
                {
                    uint8_t l_3141 = 0xD3L;
                    int8_t *l_3144[7][6][4] = {{{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227}},{{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227}},{{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227}},{{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227}},{{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227}},{{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227}},{{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227},{&g_2518,&g_2518,&g_227,&g_227}}};
                    int32_t l_3155[10];
                    int i, j, k;
                    for (i = 0; i < 10; i++)
                        l_3155[i] = (-9L);
                    if ((p_17 ^ (l_3147[6][0] = ((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_18, l_3132)), ((p_18 != ((p_14 , (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((*l_2921) &= ((****g_1491) = l_3141)), (((safe_mul_func_int16_t_s_s((l_3146 |= (((((l_3000 = 0xEBL) > ((!((g_5[g_377] , (**g_2847)) > l_3027[4])) , 2L)) & p_14) , p_17) == 0x0493L)), p_17)) & (-2L)) < p_14))), 0x6845L))) || l_3141)) , 0x2AL))) , 0x2E17L))))
                    {
                        uint32_t **l_3153 = (void*)0;
                        uint8_t *l_3157 = (void*)0;
                        uint8_t *l_3158 = &l_3141;
                        int8_t **l_3163[1][10][2];
                        int8_t ***l_3174 = (void*)0;
                        int8_t ***l_3175[4][2][8] = {{{(void*)0,&l_3163[0][8][0],(void*)0,&l_3172,(void*)0,&l_3172,&l_3172,(void*)0},{(void*)0,&l_3172,&l_3172,(void*)0,&l_3172,&l_3172,(void*)0,&l_3172}},{{(void*)0,(void*)0,&l_3163[0][8][0],(void*)0,(void*)0,&l_3163[0][8][0],(void*)0,(void*)0},{&l_3172,(void*)0,&l_3172,&l_3172,(void*)0,&l_3172,&l_3172,(void*)0}},{{(void*)0,&l_3172,&l_3172,(void*)0,&l_3172,&l_3172,(void*)0,&l_3172},{(void*)0,(void*)0,&l_3163[0][8][0],(void*)0,(void*)0,&l_3163[0][8][0],(void*)0,(void*)0}},{{&l_3172,(void*)0,&l_3172,&l_3172,(void*)0,&l_3172,&l_3172,(void*)0},{(void*)0,&l_3172,&l_3172,(void*)0,&l_3172,&l_3172,(void*)0,&l_3172}}};
                        int32_t l_3181 = 0x716A6143L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 10; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_3163[i][j][k] = &l_3144[6][2][2];
                            }
                        }
                        l_3155[6] |= ((~((p_18 && (l_3027[2] != ((****g_2287) |= ((((**g_2847) = l_3141) , (0x6D73L > ((((((safe_mod_func_uint16_t_u_u((((((((*g_2848) = (*g_2848)) > (safe_rshift_func_int16_t_s_u(((l_3141 || (l_3153 == l_3154)) , p_17), l_3000))) <= p_14) & g_5[g_377]) <= p_17) < (*p_15)), 0x5A09L)) , 0UL) , l_3146) , 0x4302L) , l_3141) < p_17))) > 2UL)))) == 65529UL)) , (*p_16));
                        if ((*p_15))
                            break;
                        l_3182 |= ((((+(((*l_3158)--) , (((((safe_rshift_func_uint16_t_u_u((l_3163[0][9][0] == &l_3144[5][2][2]), ((((((safe_div_func_uint32_t_u_u(l_3155[6], (g_1411[(g_377 + 2)][(g_377 + 1)][(g_2859 + 1)] = (safe_sub_func_uint64_t_u_u(((*g_85) = (((((safe_sub_func_uint16_t_u_u((l_3155[1] != (safe_mul_func_uint16_t_u_u((((l_3176 = l_3172) != l_3177) != p_14), 0x7335L))), ((((**g_2847) = (((**g_2847) , (**g_1956)) , p_17)) > p_17) || 0UL))) || 7UL) && l_3131) | (*g_85)) , 0x89BB71653D2155C1LL)), p_14))))) , g_1411[(g_377 + 2)][(g_377 + 1)][(g_2859 + 1)]) <= 0x91B3AD8B2E021482LL) , l_3179) != l_3180) , l_3141))) , l_3147[5][1]) > p_17) == l_2994) , p_14))) < (*p_16)) > l_3181) < p_17);
                    }
                    else
                    {
                        int16_t l_3183 = (-4L);
                        l_3183 = (((*g_2848) = p_14) | l_3147[1][2]);
                        l_3146 = (*p_16);
                    }
                    for (g_2533 = 0; (g_2533 <= 1); g_2533 += 1)
                    {
                        return l_3131;
                    }
                    l_3201 &= (l_3147[6][0] = (safe_sub_func_int32_t_s_s((*p_16), (safe_div_func_uint8_t_u_u((l_3146 = l_3188), (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((!((***g_1492) = (l_3194 == &l_2921))), 0x26FEL)), ((p_16 != l_3195) > (l_3155[6] , (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((((l_3129 , 0x54C8L) | l_3027[1]) ^ l_3200) , (-1L)), 5)), l_3147[1][4])))))))))));
                }
            }
            return p_17;
        }
        (*g_1197) = p_15;
        for (g_227 = 3; (g_227 >= 0); g_227 -= 1)
        {
            uint8_t l_3247 = 0x45L;
            int32_t l_3248[5] = {0x7A9083E2L,0x7A9083E2L,0x7A9083E2L,0x7A9083E2L,0x7A9083E2L};
            int i;
            for (g_370 = 0; (g_370 <= 3); g_370 += 1)
            {
                int i;
                return g_5[g_370];
            }
            for (g_229 = 0; (g_229 <= 2); g_229 += 1)
            {
                uint64_t l_3202 = 1UL;
                int16_t * const ** const **l_3241 = &g_3239[2];
                int16_t **l_3246 = &g_157;
                int i, j, k;
                ++l_3202;
                l_3249 = (safe_div_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s((253UL && (l_3248[3] = (safe_rshift_func_uint8_t_u_s(g_1411[(g_227 + 2)][(g_229 + 1)][g_229], ((safe_rshift_func_int8_t_s_u(((((safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u((((safe_div_func_int8_t_s_s(((g_5[g_229] != (safe_rshift_func_int8_t_s_s((+(safe_add_func_int8_t_s_s((l_2927 = (safe_div_func_int64_t_s_s((*g_2848), ((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((g_1321[1] = ((safe_rshift_func_int16_t_s_s(((+(p_17 | (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((((*l_3241) = g_3239[2]) != &l_2915), (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((*l_2915) == l_3246), p_18)) , l_3129), p_14)))) | l_3131), 3)))) || (*p_15)), 0)) != 0x938BFF6932064B07LL)), l_3247)), l_3247)) && 5UL)))), p_14))), 0))) | 0xDC799F33L), 0xF0L)) > g_5[g_229]) ^ p_14), 8UL)), (*g_85))) , p_17) || 0UL) && 0x61L), 5)) | 0L))))), l_3247)), p_17)), 0x06C8726B812D5C3ALL));
                g_1262 ^= ((void*)0 == &g_1088[0][0][1]);
            }
        }
        for (l_2926 = 0; (l_2926 <= 2); l_2926 += 1)
        {
            uint32_t l_3255[3][6] = {{4294967293UL,0xAF872845L,4294967286UL,5UL,0xAF872845L,5UL},{4294967293UL,4294967295UL,4294967293UL,5UL,4294967295UL,4294967286UL},{4294967293UL,0x1C23F903L,5UL,5UL,0x1C23F903L,4294967293UL}};
            int32_t **l_3270 = &g_52;
            int16_t *****l_3278 = (void*)0;
            int32_t l_3279 = 0x032E1560L;
            int i, j;
            g_1262 = l_2927;
            for (l_2927 = 0; (l_2927 <= 2); l_2927 += 1)
            {
                int32_t l_3259 = 0x54159BD0L;
                int32_t ***l_3264 = (void*)0;
                int32_t ***l_3265 = &g_409;
                int32_t ***l_3266 = (void*)0;
                int32_t ***l_3267 = (void*)0;
                int32_t ***l_3268 = (void*)0;
                int32_t ***l_3269[1];
                int32_t ***l_3295 = &g_2457;
                int8_t ****l_3303 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_3269[i] = &g_51;
                if (((p_18 >= (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((~((-9L) != l_3255[1][3])), (l_3256[0] == (((l_3259 <= ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0x986D0960L, ((l_3271 = (l_3270 = &p_15)) == &p_15))), 2)) >= (safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((****g_1491) = (safe_sub_func_uint32_t_u_u((l_3131 , p_14), 0x169F2C79L))), 4)), (**g_1197))))) & 0x71L) , l_3278)))), 6UL))) && p_18))
                {
                    uint32_t l_3280 = 4294967291UL;
                    uint32_t ** const **l_3290[3];
                    uint32_t ** const ***l_3289 = &l_3290[0];
                    const uint16_t l_3294 = 4UL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_3290[i] = (void*)0;
                    --l_3280;
                    for (g_2113 = 0; (g_2113 <= 1); g_2113 += 1)
                    {
                        uint64_t l_3293[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_3293[i] = 0UL;
                        (*l_3271) = p_16;
                        (*g_1197) = (*g_1197);
                        (*g_1197) = p_16;
                    }
                    for (l_3036 = 0; (l_3036 <= 1); l_3036 += 1)
                    {
                        return l_3294;
                    }
                }
                else
                {
                    (*l_3271) = p_16;
                }
                if ((*p_16))
                    break;
                for (l_3036 = 2; (l_3036 >= 0); l_3036 -= 1)
                {
                    int32_t ****l_3296 = &g_2456;
                    (*l_3296) = l_3295;
                }
                for (g_410 = 0; (g_410 <= 1); g_410 += 1)
                {
                    uint64_t l_3298[9][6][4] = {{{0x4CAA5FDE43EB390FLL,1UL,18446744073709551615UL,0x4294A1F5BBCD2DB9LL},{18446744073709551615UL,0x19940CDABA788A11LL,0xD2B7E07D7194B360LL,1UL},{18446744073709551615UL,0UL,18446744073709551615UL,0xCFBF3526A1CB9DD7LL},{0x4CAA5FDE43EB390FLL,1UL,1UL,18446744073709551615UL},{0UL,0x2BE6A5FEB45B3A29LL,18446744073709551615UL,18446744073709551607UL},{0xFA66108BBC2E4511LL,0UL,0x60046B86BE0D7892LL,0x2E75590CD7A21E32LL}},{{1UL,1UL,0UL,0xEC04F1CB7E4AE8A4LL},{1UL,0x2AEF501F928FE01BLL,0x4CAA5FDE43EB390FLL,0x2C2A9A579D030C33LL},{18446744073709551607UL,18446744073709551615UL,1UL,0x237BE0BB7141F6B9LL},{0xE20720F7C924AD8CLL,4UL,1UL,0xD774197DC8636709LL},{18446744073709551608UL,0x4294A1F5BBCD2DB9LL,18446744073709551609UL,0UL},{0x3EB7E7C3C568738CLL,0xE3F3523DA2D6997FLL,0x85573742344EE83ELL,0UL}},{{0UL,0x60659DCD9A6F4138LL,0xE3F3523DA2D6997FLL,0xFA66108BBC2E4511LL},{0xEC04F1CB7E4AE8A4LL,0x236D7FCFD2CF0E27LL,0UL,18446744073709551608UL},{0xB0B8B24F4C6627E2LL,0x84834126D0020BB4LL,0xCD7B84E93B603284LL,0xCEDF7DB3A4A102F5LL},{0x2BE6A5FEB45B3A29LL,0UL,1UL,4UL},{0UL,0UL,0x84834126D0020BB4LL,0x84834126D0020BB4LL},{3UL,3UL,0x0384B085C812937ALL,18446744073709551615UL}},{{18446744073709551615UL,0x3EB7E7C3C568738CLL,0x2BE6A5FEB45B3A29LL,0UL},{0xE3F3523DA2D6997FLL,1UL,0x60659DCD9A6F4138LL,0x2BE6A5FEB45B3A29LL},{0UL,1UL,0UL,0UL},{1UL,0x3EB7E7C3C568738CLL,18446744073709551615UL,18446744073709551615UL},{0x60046B86BE0D7892LL,3UL,18446744073709551607UL,0x84834126D0020BB4LL},{0x9CD63CFA73641820LL,0UL,0xFA66108BBC2E4511LL,4UL}},{{1UL,0UL,0x236D7FCFD2CF0E27LL,0xCEDF7DB3A4A102F5LL},{18446744073709551613UL,0x84834126D0020BB4LL,0UL,18446744073709551608UL},{1UL,0x236D7FCFD2CF0E27LL,0xA17CD56D1AA78B35LL,0xB0B8B24F4C6627E2LL},{0UL,0xBC348C7F7356AE48LL,0xE20720F7C924AD8CLL,0x2AEF501F928FE01BLL},{1UL,0xFA66108BBC2E4511LL,0x2BE6A5FEB45B3A29LL,18446744073709551607UL},{0x9CD63CFA73641820LL,1UL,8UL,0xCEDF7DB3A4A102F5LL}},{{0xA17CD56D1AA78B35LL,0UL,0x4CAA5FDE43EB390FLL,0x46D78FE5A4354866LL},{0x19940CDABA788A11LL,18446744073709551608UL,0xCEDF7DB3A4A102F5LL,0x4294A1F5BBCD2DB9LL},{4UL,0x99A3DA6AED849888LL,0x3B08D1013FA0CDCALL,0x236D7FCFD2CF0E27LL},{18446744073709551613UL,0x3B08D1013FA0CDCALL,0xD2B7E07D7194B360LL,0x237BE0BB7141F6B9LL},{0x4294A1F5BBCD2DB9LL,0x6B389EC83625DCC4LL,0UL,18446744073709551615UL},{0x2AEF501F928FE01BLL,0x2C2A9A579D030C33LL,0x2AEF501F928FE01BLL,0x60659DCD9A6F4138LL}},{{1UL,0x85573742344EE83ELL,3UL,0UL},{0x3EB7E7C3C568738CLL,0UL,18446744073709551615UL,0x85573742344EE83ELL},{1UL,0xD774197DC8636709LL,18446744073709551615UL,1UL},{0x3EB7E7C3C568738CLL,0x0446FC802B3AB9F9LL,3UL,0xBC348C7F7356AE48LL},{1UL,1UL,0x2AEF501F928FE01BLL,0UL},{0x2AEF501F928FE01BLL,0UL,0UL,0xA17CD56D1AA78B35LL}},{{0x4294A1F5BBCD2DB9LL,0x3B398414553F1E27LL,0xD2B7E07D7194B360LL,4UL},{18446744073709551613UL,18446744073709551611UL,0x3B08D1013FA0CDCALL,18446744073709551615UL},{4UL,0UL,0xCEDF7DB3A4A102F5LL,0x4CAA5FDE43EB390FLL},{0x19940CDABA788A11LL,0UL,0x4CAA5FDE43EB390FLL,18446744073709551615UL},{0xA17CD56D1AA78B35LL,0UL,8UL,0xCFBF3526A1CB9DD7LL},{0x9CD63CFA73641820LL,0xD2B7E07D7194B360LL,0x2BE6A5FEB45B3A29LL,1UL}},{{1UL,0UL,0xE20720F7C924AD8CLL,18446744073709551608UL},{0UL,0xA17CD56D1AA78B35LL,0x4FA22A079D3B5537LL,0UL},{0xE3F3523DA2D6997FLL,0UL,0UL,0xDD070184DA5DE6B2LL},{0xD2B7E07D7194B360LL,0xE20720F7C924AD8CLL,0x60046B86BE0D7892LL,0x2BE6A5FEB45B3A29LL},{0x85573742344EE83ELL,18446744073709551609UL,0xB0B8B24F4C6627E2LL,0x0446FC802B3AB9F9LL},{0UL,18446744073709551615UL,18446744073709551615UL,0UL}}};
                    int32_t l_3309 = 0xE9C4BCD5L;
                    int i, j, k;
                    for (l_3259 = 0; (l_3259 <= 1); l_3259 += 1)
                    {
                        int8_t l_3308 = 0x4CL;
                        if ((*p_15))
                            break;
                        --l_3298[8][3][1];
                        l_3303 = g_3301;
                        l_3309 ^= ((p_17 , l_2994) && ((**g_2847) == (safe_mod_func_uint16_t_u_u(l_3308, (****g_2287)))));
                    }
                    return l_3298[3][0][2];
                }
            }
        }
    }
    (*g_1197) = p_16;
    for (g_1262 = 0; (g_1262 <= 3); g_1262 += 1)
    {
        int32_t *l_3310 = &l_3249;
        int32_t *l_3311[6] = {&l_2927,&l_2927,&l_2927,&l_2927,&l_2927,&l_2927};
        uint8_t ***l_3332 = &g_734[1];
        int i;
        ++g_3314[1][1];
        if (g_1321[g_1262])
            break;
        l_3312 = (safe_mul_func_uint8_t_u_u(l_3319, ((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(l_2927, (safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((*l_3310) &= ((((p_14 , (((**g_640) = (p_18 >= (p_14 | l_2994))) >= 1L)) <= (p_14 ^ (((((safe_mod_func_uint8_t_u_u(p_18, 255UL)) ^ p_18) , 0x4AL) , l_3332) == (void*)0))) != 0xFBL) ^ 0xB10921163F2D39B3LL)), l_2927)), l_3319)), 0x712BL)))), 0xD0L)) ^ 251UL)));
        for (l_3086 = 0; (l_3086 >= 0); l_3086 -= 1)
        {
            uint32_t l_3334 = 4294967290UL;
            int32_t * const *l_3338 = &g_2458[5];
            int32_t * const **l_3337 = &l_3338;
            int64_t l_3371 = 0xC5BAC53BDAE0FD0ALL;
            int32_t l_3375 = 0x3D1468B7L;
            int32_t l_3406 = 1L;
            int32_t l_3408[6];
            int i;
            for (i = 0; i < 6; i++)
                l_3408[i] = 0x0B2C9DFBL;
            (*l_3310) = (**g_1197);
            for (l_3249 = 0; (l_3249 <= 0); l_3249 += 1)
            {
                int8_t l_3333 = (-1L);
                uint32_t **l_3339 = (void*)0;
                uint32_t *l_3341 = &g_378;
                uint32_t **l_3340 = &l_3341;
                int64_t l_3362 = 3L;
                int32_t l_3403 = 0x352873E4L;
                int32_t l_3405 = (-1L);
                l_3334 |= l_3333;
                if ((((safe_add_func_int64_t_s_s(((l_3337 == (((((p_18 != (((*l_3340) = &p_14) != (*g_1956))) , ((safe_mul_func_int16_t_s_s(((((((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(1UL, (0x2784L >= 0x352EL))), (safe_sub_func_int8_t_s_s((-1L), (((safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(p_18, 7UL)), (*l_3310))) , (*g_1957)) , p_18))))) | 18446744073709551610UL) >= 0xABA029D4L) & l_3334) != 0UL) ^ l_3333), l_3086)) , p_18)) == 0x7961L) > 0xDEL) , (void*)0)) ^ p_14), p_18)) < l_3334) == p_17))
                {
                    int64_t ***l_3374 = &g_2847;
                    int32_t l_3380 = 0x46C02732L;
                    const int32_t ***l_3401 = &g_1197;
                    int32_t l_3407 = 0xA624E3F8L;
                    (*g_1197) = ((safe_sub_func_int64_t_s_s((p_18 && (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(l_3362, 12)), (l_3375 = (((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((**g_2648) <= (l_3297 = l_3333)), (safe_sub_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u(((void*)0 != &l_3333), l_3371)) < ((safe_lshift_func_uint8_t_u_u(((*g_641) & (((*l_3374) = (void*)0) != &g_2848)), p_18)) <= (-10L))), l_3086)))) && (***g_2647)), 0x5D19L)) ^ p_17) , p_14))))), 0xF97EBF8211013E3FLL)) , p_16);
                    for (g_1096 = 0; (g_1096 <= 1); g_1096 += 1)
                    {
                        uint8_t *l_3381 = &g_56;
                        int32_t l_3402 = 0xBC6A337FL;
                        int i, j;
                        l_3402 |= ((g_3314[(g_1096 + 2)][(l_3249 + 1)] ^ (safe_add_func_uint64_t_u_u((0L && (safe_add_func_int64_t_s_s(g_3314[l_3086][g_1262], 0x68AFE38AACF7A5CELL))), ((++(*l_3381)) & ((safe_mod_func_int16_t_s_s((l_3297 = (safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((((void*)0 != &g_2848) <= ((((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((***g_1492)++), (g_3314[l_3086][(l_3086 + 2)] | (((safe_mod_func_int16_t_s_s((+l_3380), ((**g_2289) & p_17))) < (-1L)) < p_14)))), 13)) , l_3401) == &g_51) <= p_18)), l_3371)), l_3362)), (*g_2848)))), l_3371)) ^ 0xFEF631C2L))))) < 0x90L);
                    }
                    for (g_98 = 0; (g_98 <= 0); g_98 += 1)
                    {
                        int64_t l_3404 = (-1L);
                        uint8_t l_3409[10][7][2] = {{{0x28L,1UL},{1UL,1UL},{1UL,248UL},{0x3BL,0xA1L},{1UL,0x53L},{0x02L,1UL},{255UL,251UL}},{{0x15L,0x1BL},{0x3BL,0x1BL},{0x15L,251UL},{255UL,1UL},{0x02L,0x53L},{1UL,0xA1L},{0x3BL,248UL}},{{1UL,1UL},{1UL,1UL},{0x28L,0xBEL},{0x50L,0x52L},{0x3BL,0x13L},{0UL,0x3BL},{0x85L,1UL}},{{0x85L,0x3BL},{0UL,0x13L},{0x3BL,0x52L},{0x50L,0xBEL},{0x28L,1UL},{1UL,1UL},{1UL,248UL}},{{0x3BL,0xA1L},{1UL,0x53L},{0x02L,1UL},{255UL,251UL},{0x15L,0x1BL},{0x3BL,0x1BL},{0x15L,251UL}},{{255UL,1UL},{0x02L,0x53L},{1UL,0x28L},{0x15L,1UL},{1UL,1UL},{0x3BL,0x3BL},{0xBEL,1UL}},{{255UL,0x02L},{0x15L,255UL},{248UL,0x15L},{251UL,0x3BL},{251UL,0x15L},{248UL,255UL},{0x15L,0x02L}},{{255UL,1UL},{0xBEL,0x3BL},{0x3BL,1UL},{1UL,1UL},{0x15L,0x28L},{252UL,0x50L},{1UL,0x3BL}},{{0x53L,0UL},{0x22L,0x85L},{0x15L,0x85L},{0x22L,0UL},{0x53L,0x3BL},{1UL,0x50L},{252UL,0x28L}},{{0x15L,1UL},{1UL,1UL},{0x3BL,0x3BL},{0xBEL,1UL},{255UL,0x02L},{0x15L,255UL},{248UL,0x15L}}};
                        int i, j, k;
                        l_3409[3][1][1]--;
                    }
                }
                else
                {
                    return l_3406;
                }
            }
        }
    }
    return p_17;
}







static int64_t func_28(int32_t p_29, const int32_t * p_30)
{
    int8_t *l_2905 = (void*)0;
    int8_t **l_2904 = &l_2905;
    int8_t ***l_2906 = &l_2904;
    int32_t *l_2907 = &g_418[1][0][2];
    (*l_2907) &= (((*l_2906) = l_2904) == g_1385);
    (*g_1197) = l_2907;
    return (**g_2847);
}







static const int32_t * func_31(uint16_t p_32, uint64_t p_33, int32_t * p_34, int32_t * p_35)
{
    uint32_t l_1283 = 18446744073709551615UL;
    int32_t l_1292[3][7][8] = {{{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL}},{{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL}},{{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL},{1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL,1L,0xBA1C9F5BL}}};
    int8_t *l_1337 = (void*)0;
    int16_t l_1361 = 0x5971L;
    int8_t l_1364 = 0x18L;
    int8_t l_1368 = 0L;
    uint32_t l_1418 = 0x021D6B31L;
    uint64_t *l_1479 = &g_84[0];
    uint8_t l_1574 = 0x41L;
    int16_t l_1617 = 0x3105L;
    int32_t l_1619 = 0xA8FC0566L;
    uint32_t l_1625 = 4294967295UL;
    int8_t l_1737[7];
    uint32_t l_1739[2][5] = {{0x735A8634L,0xC3BEDA8FL,0xC3BEDA8FL,0x735A8634L,0xC3BEDA8FL},{0x735A8634L,0x735A8634L,6UL,0x735A8634L,0x735A8634L}};
    int64_t *l_1749 = (void*)0;
    int64_t *l_1750 = &g_351[5];
    int16_t ** const **l_1784[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint8_t ***l_1792 = &g_734[1];
    int32_t *l_1794 = &g_1262;
    const int32_t *l_1902 = &l_1292[2][1][3];
    const uint32_t *l_1906[8];
    const uint32_t **l_1905[8][3] = {{&l_1906[0],(void*)0,(void*)0},{&l_1906[4],&l_1906[4],(void*)0},{(void*)0,&l_1906[0],(void*)0},{&l_1906[0],(void*)0,(void*)0},{&l_1906[4],&l_1906[4],(void*)0},{(void*)0,&l_1906[0],(void*)0},{&l_1906[0],(void*)0,(void*)0},{&l_1906[4],&l_1906[4],(void*)0}};
    uint8_t l_1941 = 0x5CL;
    uint32_t *l_1955 = &l_1283;
    uint32_t **l_1954 = &l_1955;
    int32_t l_2027 = 0x7D827842L;
    const int16_t ***l_2086 = (void*)0;
    const int16_t ****l_2085 = &l_2086;
    uint16_t l_2141[1][3];
    uint16_t l_2194 = 1UL;
    uint32_t ****l_2254[3];
    int64_t l_2267 = 0x8E9A344E1BC11497LL;
    uint32_t l_2269 = 0UL;
    const int32_t *l_2292 = (void*)0;
    int8_t l_2321 = 0x31L;
    int32_t l_2322 = 0x469EF660L;
    int32_t l_2399 = 2L;
    int32_t l_2405[6][2][9] = {{{0x10666215L,0x2B4F59D9L,(-7L),0L,0xD5864A9AL,0x06ED7C2EL,1L,0xA9AFF048L,0xAF73F0B1L},{0x2B4F59D9L,(-1L),0xBA2E0405L,0xEB07EF6AL,0x01F09C70L,0L,0x06ED7C2EL,0x91696472L,(-8L)}},{{0xE70FFB75L,0xA9AFF048L,6L,0xFDDE3FD4L,2L,0x1983AEE0L,0x10666215L,0xBA2E0405L,0xBA2E0405L},{0x01F09C70L,(-1L),6L,0x3CC7C379L,6L,(-1L),0x01F09C70L,0x43A750CEL,1L}},{{(-8L),(-4L),0xBA2E0405L,0x43A750CEL,0xEB07EF6AL,6L,0x2B4F59D9L,0L,0xDEFC407AL},{0L,0x91696472L,(-7L),(-4L),2L,0xD5864A9AL,0xFDDE3FD4L,0x43A750CEL,6L}},{{0x91D6EE37L,0x852E956BL,6L,0xAF73F0B1L,(-2L),0x43A750CEL,0L,0xBA2E0405L,0x91696472L},{0x91696472L,6L,0x91D6EE37L,0xAF73F0B1L,0xAF73F0B1L,0x91D6EE37L,6L,0x91696472L,0x2B4F59D9L}},{{(-7L),0xE70FFB75L,0xAF73F0B1L,(-4L),0L,(-7L),(-8L),0xA9AFF048L,0xFF8C50C6L},{0L,(-2L),0x3CC7C379L,0x43A750CEL,0x91D6EE37L,3L,(-4L),0xEB07EF6AL,0x2B4F59D9L}},{{0xD5864A9AL,0xEB07EF6AL,0xDEFC407AL,0x3CC7C379L,0xE70FFB75L,0x852E956BL,0xA9AFF048L,0x01F09C70L,0x91696472L},{6L,0x44C41A38L,0L,0xFDDE3FD4L,0xE70FFB75L,0xFDDE3FD4L,0L,0x44C41A38L,6L}}};
    uint64_t l_2444[3][9][9] = {{{0UL,0x239D206D4F5B720FLL,0x5F4BFC2FA0C794C4LL,0UL,0xA194C6A289BCB487LL,0UL,0x9AF1C16E91AF71D5LL,0xC2C1C2BC09786FF1LL,0x7B8A4851E1FC5E4FLL},{18446744073709551615UL,0x7B8A4851E1FC5E4FLL,0x39DE0E0DEC91B87BLL,0x60C2CA81169F8CDELL,18446744073709551615UL,4UL,0xC28A2DC6DF943DE3LL,18446744073709551606UL,0UL},{0x3DE5CAB97CDD21E6LL,18446744073709551613UL,0xC3AF9F30E17634B3LL,18446744073709551615UL,18446744073709551613UL,0x3DE5CAB97CDD21E6LL,7UL,0xDC0476E92012BBA6LL,0x5F4BFC2FA0C794C4LL},{18446744073709551606UL,0x5E4C8C9CDA7E6F5ELL,18446744073709551615UL,0x30DAC72CA895AA6ALL,0UL,18446744073709551613UL,1UL,18446744073709551615UL,1UL},{18446744073709551613UL,0UL,0x7B8A4851E1FC5E4FLL,0x239D206D4F5B720FLL,0UL,0x606C316342F822FBLL,0x1E9EB4A1FC9E2C90LL,7UL,1UL},{0xE2384A1193F9A48BLL,0UL,0x68EDB20FA3370FCELL,0x39DE0E0DEC91B87BLL,0xA194C6A289BCB487LL,0xDCCA1A96F7532D90LL,8UL,18446744073709551615UL,0x5F4BFC2FA0C794C4LL},{0UL,1UL,0xA194C6A289BCB487LL,0x24BA6EC02004EBC5LL,0UL,0x24BA6EC02004EBC5LL,0xA194C6A289BCB487LL,1UL,0UL},{0x1E9EB4A1FC9E2C90LL,0UL,0x826CDBBA88CD851DLL,0xA194C6A289BCB487LL,0x3DE5CAB97CDD21E6LL,0UL,18446744073709551613UL,18446744073709551615UL,0x7B8A4851E1FC5E4FLL},{0x5F4BFC2FA0C794C4LL,0UL,18446744073709551614UL,0x30DAC72CA895AA6ALL,0UL,0UL,0xACEDEFAD6B3BE480LL,0x107DB140A27333C6LL,0x826CDBBA88CD851DLL}},{{0x1E9EB4A1FC9E2C90LL,0x3DE5CAB97CDD21E6LL,18446744073709551613UL,0xC3AF9F30E17634B3LL,18446744073709551615UL,18446744073709551613UL,0x3DE5CAB97CDD21E6LL,7UL,0xDC0476E92012BBA6LL},{0UL,18446744073709551615UL,18446744073709551609UL,7UL,0x39DE0E0DEC91B87BLL,18446744073709551615UL,18446744073709551607UL,0x24BA6EC02004EBC5LL,7UL},{0xE2384A1193F9A48BLL,0xC28A2DC6DF943DE3LL,0xA194C6A289BCB487LL,0xC2C1C2BC09786FF1LL,18446744073709551607UL,4UL,18446744073709551606UL,0UL,0x68EDB20FA3370FCELL},{18446744073709551613UL,0xC28A2DC6DF943DE3LL,0xDC0476E92012BBA6LL,0x7B8A4851E1FC5E4FLL,18446744073709551615UL,0xD8C69418BA95F857LL,18446744073709551613UL,18446744073709551613UL,0UL},{18446744073709551606UL,18446744073709551615UL,0x107DB140A27333C6LL,1UL,0x9AF1C16E91AF71D5LL,0xC28A2DC6DF943DE3LL,0x9AF1C16E91AF71D5LL,1UL,0x107DB140A27333C6LL},{0x3DE5CAB97CDD21E6LL,0x3DE5CAB97CDD21E6LL,0x39DE0E0DEC91B87BLL,1UL,0UL,0x0639E80F3C8EF328LL,0xD8C69418BA95F857LL,18446744073709551606UL,8UL},{18446744073709551615UL,0UL,4UL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0UL,0x68EDB20FA3370FCELL,0x5F4BFC2FA0C794C4LL},{0x000A2CFEF732CBA7LL,0UL,0x39DE0E0DEC91B87BLL,18446744073709551610UL,0UL,18446744073709551607UL,0x5F4BFC2FA0C794C4LL,0x39DE0E0DEC91B87BLL,0xC2C1C2BC09786FF1LL},{18446744073709551613UL,1UL,0x107DB140A27333C6LL,0xA194C6A289BCB487LL,0xB3CF9BBBD268FDACLL,0x606C316342F822FBLL,7UL,1UL,0UL}},{{0xA194C6A289BCB487LL,0UL,0xDC0476E92012BBA6LL,18446744073709551615UL,0x9AF1C16E91AF71D5LL,1UL,8UL,0x107DB140A27333C6LL,0x30DAC72CA895AA6ALL},{0xD8C69418BA95F857LL,0UL,0xA194C6A289BCB487LL,18446744073709551615UL,0UL,18446744073709551614UL,0x9AB62A0CADBE7059LL,1UL,8UL},{0x60C2CA81169F8CDELL,0x5E4C8C9CDA7E6F5ELL,18446744073709551609UL,0xA194C6A289BCB487LL,0x7B8A4851E1FC5E4FLL,0xDCCA1A96F7532D90LL,0UL,0xDCCA1A96F7532D90LL,0x7B8A4851E1FC5E4FLL},{18446744073709551610UL,18446744073709551613UL,18446744073709551613UL,18446744073709551610UL,0UL,18446744073709551615UL,0xE2384A1193F9A48BLL,0x24BA6EC02004EBC5LL,0xDC0476E92012BBA6LL},{0UL,0x24BA6EC02004EBC5LL,1UL,18446744073709551607UL,18446744073709551613UL,0x5F4BFC2FA0C794C4LL,0x24BA6EC02004EBC5LL,0x5E4C8C9CDA7E6F5ELL,0x000A2CFEF732CBA7LL},{0x60C2CA81169F8CDELL,18446744073709551613UL,0UL,0x5E4C8C9CDA7E6F5ELL,0xD8C69418BA95F857LL,0x24BA6EC02004EBC5LL,18446744073709551614UL,8UL,0x5E4C8C9CDA7E6F5ELL},{18446744073709551615UL,7UL,4UL,0xA0700F0F945BE066LL,0x24BA6EC02004EBC5LL,18446744073709551613UL,0xA194C6A289BCB487LL,0x000A2CFEF732CBA7LL,0xACEDEFAD6B3BE480LL},{0x30DAC72CA895AA6ALL,0x1E9EB4A1FC9E2C90LL,18446744073709551613UL,0x24BA6EC02004EBC5LL,0x000A2CFEF732CBA7LL,1UL,7UL,0x239D206D4F5B720FLL,0x68EDB20FA3370FCELL},{0x239D206D4F5B720FLL,18446744073709551607UL,0x24BA6EC02004EBC5LL,18446744073709551615UL,0x0639E80F3C8EF328LL,1UL,4UL,0xDCCA1A96F7532D90LL,18446744073709551615UL}}};
    uint8_t ****l_2561 = &l_1792;
    uint8_t *****l_2560 = &l_2561;
    uint16_t l_2568 = 1UL;
    const uint8_t ***l_2572 = (void*)0;
    int16_t l_2591[5][9][5] = {{{0x5E36L,0L,0xC6C3L,0L,0x5E36L},{(-4L),0xA358L,0xC6C3L,0xCEA9L,(-9L)},{1L,0x0D42L,0L,1L,0L},{0L,0x8A2BL,0x1FB2L,0xA358L,(-9L)},{0L,1L,0x0F66L,(-1L),0x5E36L},{(-9L),1L,(-1L),0xA7ECL,0L},{(-5L),0x8A2BL,8L,(-8L),(-1L)},{1L,0x0D42L,0xA0E6L,0xA7ECL,0xD125L},{9L,0xA358L,(-6L),(-1L),0xE5E3L}},{{9L,0L,(-7L),0xA358L,0L},{1L,(-6L),0xC95BL,1L,(-4L)},{(-5L),0xA7ECL,(-7L),0xCEA9L,1L},{(-9L),1L,(-6L),0L,1L},{0L,0L,0xA0E6L,0x371AL,(-4L)},{0L,0x371AL,8L,0x3CFCL,0L},{1L,0L,(-1L),1L,0xE5E3L},{(-4L),1L,0x0F66L,1L,0xD125L},{0x5E36L,0xA7ECL,0x1FB2L,0x3CFCL,(-1L)}},{{(-2L),(-6L),0L,0x371AL,0L},{0x5E36L,0L,0xC6C3L,0L,0x5E36L},{(-4L),0xA358L,0xC6C3L,0xCEA9L,(-9L)},{1L,0x0D42L,0L,1L,0L},{0L,0x8A2BL,0x1FB2L,0xA358L,(-9L)},{0L,1L,0x0F66L,(-1L),0x5E36L},{(-9L),1L,(-1L),0xA7ECL,0L},{(-5L),0x8A2BL,8L,(-8L),(-1L)},{1L,0x0D42L,0xA0E6L,0xA7ECL,0xD125L}},{{9L,0xA358L,(-6L),(-1L),0xE5E3L},{9L,(-3L),0xEB8DL,7L,1L},{(-1L),(-9L),0x0395L,0x9467L,0xA7ECL},{(-6L),0L,0xEB8DL,0xA0A7L,0x8A2BL},{0xCEF4L,0x24F7L,4L,(-3L),0x8A2BL},{0x0D42L,0x7D71L,4L,0x2C2EL,0xA7ECL},{1L,0x2C2EL,0x8D87L,1L,1L},{0xCEA9L,0x7D71L,0x4112L,1L,0x371AL},{0xA7ECL,0x24F7L,(-1L),1L,(-8L)}},{{0L,0L,(-2L),1L,(-1L)},{1L,(-9L),1L,0x2C2EL,0x0D42L},{0L,(-3L),0x3C60L,(-3L),0L},{0xA7ECL,7L,0x3C60L,0xA0A7L,0xCEF4L},{0xCEA9L,3L,1L,0x9467L,1L},{1L,1L,(-2L),7L,0xCEF4L},{0x0D42L,0x9467L,(-1L),1L,0L},{0xCEF4L,0x9467L,0x4112L,0L,0x0D42L},{(-6L),1L,0x8D87L,6L,(-1L)}}};
    int64_t l_2609 = 0x829C5727F2DF2BBCLL;
    uint16_t l_2701 = 5UL;
    int32_t **l_2713 = &g_2458[5];
    uint32_t l_2714 = 4294967291UL;
    uint8_t l_2720 = 1UL;
    uint8_t **l_2787 = (void*)0;
    uint64_t l_2825 = 18446744073709551611UL;
    int8_t ****l_2832 = (void*)0;
    int8_t l_2858[7][5] = {{0L,1L,0x21L,(-5L),(-5L)},{1L,0L,1L,0x21L,(-5L)},{0L,0xE6L,(-5L),0xE6L,0L},{1L,0xE6L,0L,0L,0L},{0L,0L,(-5L),0L,3L},{0xE6L,1L,1L,0xE6L,0L},{0xE6L,0L,0x21L,0x21L,0L}};
    uint64_t l_2865 = 8UL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1737[i] = 3L;
    for (i = 0; i < 8; i++)
        l_1906[i] = &g_229;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_2141[i][j] = 65532UL;
    }
    for (i = 0; i < 3; i++)
        l_2254[i] = &g_840;
    if ((0x0BEBB609L ^ (*g_1198)))
    {
        uint16_t l_1284 = 0x20C3L;
        int32_t l_1301 = 0x6651FFAAL;
        int32_t l_1348 = 0xBD05380AL;
        int32_t l_1352 = (-9L);
        int32_t l_1353 = (-4L);
        int32_t l_1354 = (-10L);
        int32_t l_1356 = 4L;
        uint64_t l_1357 = 18446744073709551613UL;
        int32_t l_1371[1];
        uint32_t l_1373 = 18446744073709551609UL;
        int16_t ***l_1399 = (void*)0;
        uint16_t l_1427 = 65530UL;
        uint8_t ***l_1440 = &g_734[2];
        uint8_t ****l_1439 = &l_1440;
        uint16_t ****l_1496 = &g_1492;
        uint8_t l_1542[3];
        uint32_t l_1549 = 18446744073709551615UL;
        uint32_t * const *l_1560 = &g_842[2][2];
        int64_t l_1612 = 0xD31DBDD6FF069986LL;
        int32_t l_1614[5] = {0x74EF73BFL,0x74EF73BFL,0x74EF73BFL,0x74EF73BFL,0x74EF73BFL};
        int8_t **l_1656 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_1371[i] = 0x0A5324C3L;
        for (i = 0; i < 3; i++)
            l_1542[i] = 0xC3L;
        for (g_238 = 0; (g_238 >= (-10)); g_238 = safe_sub_func_int32_t_s_s(g_238, 1))
        {
            uint8_t l_1266[3][4][9] = {{{0x89L,253UL,1UL,6UL,1UL,1UL,6UL,1UL,253UL},{255UL,1UL,0x74L,0x03L,1UL,0x74L,0x89L,253UL,1UL},{0UL,0x34L,0x74L,6UL,0x34L,0x42L,0x03L,0x42L,0x34L},{0UL,1UL,1UL,0UL,253UL,0x34L,255UL,0x42L,1UL}},{{255UL,253UL,1UL,248UL,0x3AL,0x34L,0x03L,253UL,253UL},{0x89L,0x42L,253UL,248UL,253UL,0x42L,0x89L,1UL,0x42L},{248UL,0x42L,1UL,0UL,0x34L,0x74L,6UL,0x34L,0x42L},{0x89L,253UL,1UL,6UL,0x93L,0x93L,1UL,0x20L,0x18L}},{{0x3AL,0x20L,0x7CL,253UL,0x93L,0x7CL,0x34L,0x18L,0x20L},{1UL,255UL,0x7CL,1UL,255UL,255UL,253UL,255UL,255UL},{1UL,0x20L,0x20L,1UL,0x18L,255UL,0x3AL,255UL,0x20L},{0x3AL,0x18L,0x93L,0x74L,0UL,255UL,253UL,0x18L,0x18L}}};
            const uint8_t l_1282[8] = {1UL,9UL,1UL,9UL,1UL,9UL,1UL,9UL};
            int32_t l_1291[10][3] = {{0x49E0CDA2L,0x2E4C770FL,0x2E4C770FL},{0x2E4C770FL,0xCFDC8BA6L,(-9L)},{0x49E0CDA2L,0xCFDC8BA6L,0x49E0CDA2L},{0xC9F0AEF3L,0x2E4C770FL,(-9L)},{0xC9F0AEF3L,0xC9F0AEF3L,0x2E4C770FL},{0x49E0CDA2L,0x2E4C770FL,0x2E4C770FL},{0x2E4C770FL,0xCFDC8BA6L,(-9L)},{0x49E0CDA2L,0xCFDC8BA6L,0x49E0CDA2L},{0xC9F0AEF3L,0x2E4C770FL,(-9L)},{0xC9F0AEF3L,0xC9F0AEF3L,0x2E4C770FL}};
            int64_t l_1293 = 0x1F3E3A356F87CE36LL;
            int32_t l_1362[9][8][3] = {{{(-1L),4L,0xFF535788L},{(-7L),0x424C5E58L,0x1C10060CL},{(-1L),1L,0x670F0EFEL},{0xE0621A0FL,(-1L),0x5C5F4911L},{0L,0xA5DD0E91L,0xE9E71A62L},{0x0B8400C7L,0xE3F06F29L,1L},{0x4BC7B191L,0x6D2CCB65L,(-1L)},{(-1L),0xA55F3BACL,(-1L)}},{{0xD38E62ECL,1L,(-1L)},{6L,0L,0xE0621A0FL},{1L,(-1L),0x6D2CCB65L},{0xDC05075CL,0x39DEBDC3L,(-1L)},{1L,0x8D7FB887L,(-9L)},{6L,0x670B3021L,0x39DEBDC3L},{0xD38E62ECL,(-2L),0x7DDB572CL},{(-1L),1L,0x4FBE0F55L}},{{0x4BC7B191L,0xAD5FC519L,0x993168E9L},{0x0B8400C7L,(-1L),0xD5B4A83DL},{0L,0x993168E9L,(-1L)},{0xE0621A0FL,0xD897DD04L,0x8C99325EL},{(-1L),8L,(-1L)},{(-7L),6L,6L},{(-1L),0xFF535788L,0L},{4L,0xD5B4A83DL,0x7F38FCB2L}},{{0xFF535788L,6L,1L},{0xD897DD04L,(-1L),0x424C5E58L},{0xD6E00DB8L,6L,0L},{0x4FBE0F55L,0xD5B4A83DL,1L},{(-1L),0xFF535788L,0x8B57128AL},{(-10L),6L,0x9D6CDCD0L},{0x670F0EFEL,8L,1L},{1L,0xD897DD04L,1L}},{{4L,0x993168E9L,0xE9F58741L},{0xA55F3BACL,(-1L),0x99FD5D27L},{8L,0xAD5FC519L,0L},{0x99FD5D27L,1L,0xAEF8E9E6L},{(-2L),(-2L),0x9945AF01L},{(-1L),0x1C10060CL,(-1L)},{1L,(-1L),0x8D7FB887L},{1L,4L,9L}},{{0xF1E1A31CL,1L,0x8D7FB887L},{0xDC05075CL,0xAAC4D4A2L,(-1L)},{0L,(-9L),(-8L)},{0x9D6CDCD0L,(-7L),0xDC05075CL},{0x670F0EFEL,0x0CE67198L,0xD38E62ECL},{0x4FBE0F55L,6L,0x8D9CFF63L},{0x2AED704AL,0xE9E71A62L,0x9945AF01L},{(-1L),1L,0x424C5E58L}},{{(-1L),0x7DDB572CL,(-9L)},{4L,7L,0x4FBE0F55L},{1L,0xFBBE8BE0L,1L},{0x39DEBDC3L,0x7F38FCB2L,(-1L)},{0x302D74A2L,6L,0x2AED704AL},{6L,0xE3F06F29L,7L},{1L,(-1L),0x993168E9L},{6L,(-1L),0xC4539FBFL}},{{0x302D74A2L,0L,(-1L)},{0x39DEBDC3L,0L,(-10L)},{1L,0x6D2CCB65L,1L},{4L,0L,0xAEF8E9E6L},{(-1L),0L,(-1L)},{(-1L),0xAEF8E9E6L,0x9D6CDCD0L},{0x2AED704AL,0xF1E1A31CL,0xFF535788L},{0x4FBE0F55L,(-1L),0xE3F06F29L}},{{0x670F0EFEL,0x302D74A2L,0x302D74A2L},{0x9D6CDCD0L,0xDC05075CL,4L},{0L,(-1L),0x4BC7B191L},{0xDC05075CL,0xD5B4A83DL,0x8C99325EL},{0xF1E1A31CL,1L,0x0CE67198L},{1L,0xD5B4A83DL,0xD897DD04L},{1L,(-1L),0xA5DD0E91L},{(-1L),0xDC05075CL,1L}}};
            int i, j, k;
            ++l_1266[1][1][7];
            for (p_32 = 0; (p_32 == 36); p_32++)
            {
                (*g_52) = (-3L);
                for (g_377 = 28; (g_377 < (-8)); g_377 = safe_sub_func_uint8_t_u_u(g_377, 4))
                {
                    uint16_t l_1273 = 0UL;
                    l_1273++;
                    (*g_1197) = ((&g_841 != &g_841) , (*g_409));
                    return (*g_1197);
                }
            }
            if (((*g_52) = (p_32 , (*p_35))))
            {
                uint32_t l_1278 = 0xF5EDA560L;
                const int32_t **l_1279 = &g_1198;
                uint32_t *l_1281 = &g_378;
                uint32_t **l_1280 = &l_1281;
                int32_t l_1290 = 0x1FFCC1DFL;
                (*g_51) = func_36((((((safe_add_func_int64_t_s_s((g_351[2] &= (0UL > (p_35 != ((*l_1280) = func_36(l_1278, ((l_1266[2][0][1] , func_44(l_1279, g_229, &g_52)) != &g_1198)))))), p_33)) , p_32) ^ l_1282[5]) <= g_241) < l_1283), l_1284);
                for (g_405 = (-5); (g_405 <= 54); g_405 = safe_add_func_int8_t_s_s(g_405, 1))
                {
                    uint32_t l_1294 = 4UL;
                    for (g_396 = 0; (g_396 >= 8); g_396 = safe_add_func_int16_t_s_s(g_396, 8))
                    {
                        int32_t *l_1289[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1289[i] = (void*)0;
                        l_1294++;
                    }
                }
                return (*g_51);
            }
            else
            {
                uint8_t l_1326 = 0x13L;
                int32_t l_1327 = 9L;
                int32_t l_1347[6][6] = {{(-9L),0x3A6C4491L,(-3L),0x3D9A6DFCL,1L,1L},{0x3A6C4491L,0x19B20C2AL,0x19B20C2AL,0x3A6C4491L,0L,1L},{5L,1L,(-3L),(-2L),0x3D9A6DFCL,(-2L)},{0L,1L,0L,0x6C63D2BDL,0x3D9A6DFCL,(-9L)},{(-3L),1L,5L,0L,0L,5L},{0x19B20C2AL,0x19B20C2AL,0x3A6C4491L,0L,1L,0x6C63D2BDL}};
                uint8_t l_1365 = 0UL;
                int32_t l_1369 = 0xE1932DA4L;
                int32_t l_1370 = 6L;
                int i, j;
                for (p_32 = (-16); (p_32 == 53); p_32++)
                {
                    int8_t *l_1338[1];
                    int32_t l_1345 = 0x14F3AD0FL;
                    int32_t l_1349 = 0x0C02C78AL;
                    int32_t l_1350 = 4L;
                    int32_t l_1351 = 8L;
                    int32_t l_1355[1][4][3] = {{{0x46560DA1L,0x46560DA1L,(-5L)},{0xF0BEE02FL,(-5L),(-5L)},{(-5L),(-1L),0L},{0xF0BEE02FL,(-1L),0xF0BEE02FL}}};
                    int16_t l_1363 = 1L;
                    int16_t ****l_1400 = &l_1399;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1338[i] = &g_238;
                    (*p_35) = (p_33 , (*p_34));
                    for (g_370 = (-24); (g_370 <= (-18)); g_370++)
                    {
                        (**g_409) ^= l_1291[7][2];
                    }
                    if ((((&l_1292[0][5][3] == (l_1301 , (void*)0)) <= ((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint32_t_u_u((((l_1326 = (safe_add_func_uint32_t_u_u((((***g_840) = 4UL) ^ (~(safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((l_1266[2][0][2] > ((l_1292[0][5][3] = 0xD2L) != ((g_1321[1] , ((safe_mul_func_int16_t_s_s((safe_mul_func_int32_t_s_s(0xA95C2851L, (p_33 != (-1L)))), (-2L))) == p_33)) & l_1283))), 2)), 15)))), (**g_51)))) && g_405) >= l_1327), 0x0B64BE13L)) <= p_33) <= l_1327), 7)), 1)) == (*g_85)), (-10L))) < 0xECL), 4294967286UL)), 65532UL)) , g_758)) && (*g_85)))
                    {
                        uint32_t l_1339 = 1UL;
                        int32_t *l_1346[9] = {&l_1345,&l_1345,&l_1291[2][0],&l_1345,&l_1345,&l_1291[2][0],&l_1345,&l_1345,&l_1291[2][0]};
                        int i;
                        if (l_1284)
                            break;
                        (**g_51) = (p_33 , (g_98 != ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u((~(safe_sub_func_uint8_t_u_u((l_1284 , ((((l_1337 != l_1338[0]) >= l_1339) >= 0xB3L) || (safe_mul_func_int16_t_s_s((!(((safe_mod_func_int64_t_s_s(((void*)0 != &g_324[1][2][3]), 0xAA7B9FB4BBB7E5A6LL)) , (*g_85)) || l_1345)), 65534UL)))), g_227))), 0)) ^ l_1284) , 1UL), 5L)) | 0UL), 0xB9L)) , 0x9664C82995AE41B3LL)));
                        if ((*g_1198))
                            break;
                        ++l_1357;
                    }
                    else
                    {
                        int32_t *l_1360[2][6][9] = {{{&l_1292[0][5][3],&l_1355[0][1][2],&l_1291[2][0],(void*)0,(void*)0,&l_1291[2][0],&l_1355[0][1][2],&l_1292[0][5][3],(void*)0},{&l_1291[2][0],&l_1348,&l_1356,&g_1262,&l_1291[2][0],&g_814,&l_1291[2][0],&g_1262,&l_1356},{&l_1292[0][5][3],(void*)0,&l_1353,&l_1355[0][1][2],(void*)0,(void*)0,&l_1349,&l_1349,(void*)0},{&g_4,&g_1262,&l_1351,&l_1345,&l_1292[2][6][3],&g_1262,&g_418[1][0][2],&l_1345,&g_4},{(void*)0,&l_1351,&l_1355[0][1][2],(void*)0,(void*)0,&l_1349,&l_1327,(void*)0,(void*)0},{&l_1355[0][2][1],&l_1345,&l_1291[2][0],&g_418[1][1][0],&l_1355[0][2][1],&g_1262,&l_1355[0][2][1],&g_418[1][1][0],&l_1291[2][0]}},{{(void*)0,(void*)0,&l_1349,&l_1351,(void*)0,&l_1292[0][5][3],&l_1351,&l_1327,(void*)0},{&l_1292[2][6][3],&g_418[1][1][0],&l_1351,&g_418[1][1][0],&l_1292[2][6][3],&l_1348,&g_418[1][0][2],&g_418[1][1][0],&g_4},{(void*)0,&l_1351,&l_1349,(void*)0,(void*)0,&l_1349,&l_1351,(void*)0,&l_1292[0][5][3]},{&l_1355[0][2][1],&g_418[1][1][0],&l_1291[2][0],&l_1345,&l_1355[0][2][1],&l_1348,&l_1355[0][2][1],&l_1345,&l_1291[2][0]},{(void*)0,(void*)0,&l_1355[0][1][2],&l_1351,(void*)0,&l_1292[0][5][3],&l_1327,&l_1327,&l_1292[0][5][3]},{&l_1292[2][6][3],&l_1345,&l_1351,&l_1345,&l_1292[2][6][3],&g_1262,&g_418[1][0][2],&l_1345,&g_4}}};
                        int16_t l_1372[5][9][5] = {{{0L,0x558CL,0L,(-10L),0x55DBL},{0x05D8L,1L,(-10L),0L,0x52A1L},{2L,0L,(-9L),0x137BL,1L},{0xD721L,0x282BL,(-9L),1L,0x01B5L},{6L,0xE1EAL,0x55DBL,0x558CL,0x77A3L},{0xD721L,0x187DL,1L,0x187DL,0xD721L},{2L,1L,0x77A3L,0x55DBL,0L},{0x05D8L,0xCC6CL,0x7ED7L,0x6EF1L,0L},{0L,0x26D7L,0x04BAL,1L,0L}},{{1L,0x6EF1L,0xCB0AL,0xB4ABL,0xD721L},{0L,(-9L),0x137BL,1L,0x77A3L},{8L,(-7L),0xE92FL,0L,0x01B5L},{0x137BL,0xE9AEL,0xE1EAL,1L,1L},{0L,(-1L),0L,0xB4ABL,0x52A1L},{0xE9AEL,6L,0x6936L,1L,0x55DBL},{(-10L),8L,0xD721L,0x6EF1L,(-1L)},{1L,1L,0x6936L,0x55DBL,0x6936L},{0xE92FL,3L,0L,0x187DL,0x364CL}},{{0x77A3L,0x4117L,0xE1EAL,0x558CL,2L},{0L,8L,0xE92FL,1L,0x7ED7L},{(-10L),0x4117L,0x137BL,0x137BL,0x4117L},{(-1L),3L,0xCB0AL,0L,(-5L)},{0x26D7L,1L,1L,0x55DBL,0x04BAL},{0xCB0AL,1L,(-10L),(-9L),0L},{6L,(-9L),0xE9AEL,(-9L),6L},{(-5L),8L,0L,0L,0L},{0x55DBL,2L,0x137BL,0L,(-7L)}},{{6L,0x187DL,8L,8L,0L},{0xE9AEL,0L,0L,0xE9AEL,6L},{0L,3L,1L,0L,0L},{0xE1EAL,6L,0L,0x26D7L,0x04BAL},{1L,0x3236L,0x05D8L,0L,0x364CL},{2L,0xE1EAL,2L,0xE9AEL,0x558CL},{(-1L),0x6EF1L,0xD721L,8L,(-10L)},{0x77A3L,(-10L),6L,0L,1L},{1L,0L,0xD721L,0L,0xD721L}},{{0L,0L,2L,(-9L),0x26D7L},{0L,8L,0x05D8L,(-9L),(-5L)},{(-7L),0x04BAL,0L,0x55DBL,0x137BL},{0x7ED7L,8L,1L,0xB4ABL,0x01B5L},{1L,0L,0L,0x77A3L,0x6936L},{0xA026L,0L,8L,1L,(-9L)},{(-9L),(-10L),0x137BL,0x04BAL,0xE9AEL},{0xA026L,0x6EF1L,0L,0x6EF1L,0xA026L},{1L,0xE1EAL,0xE9AEL,0x137BL,0L}}};
                        uint8_t *l_1386 = &g_241;
                        int i, j, k;
                        l_1365--;
                        ++l_1373;
                        (**g_51) ^= l_1292[0][5][3];
                        (*p_35) = (safe_rshift_func_int16_t_s_s(9L, (safe_div_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u((safe_mul_func_int16_t_s_s(0xDDA6L, (((++(*g_735)) ^ ((*l_1386) = (g_1385 != (void*)0))) <= (((0x9A68EE52BF412DE5LL ^ (safe_lshift_func_uint8_t_u_u(0UL, 5))) | (safe_div_func_int8_t_s_s(p_33, (safe_add_func_int8_t_s_s((l_1349 = ((safe_div_func_int16_t_s_s(((p_33 == l_1348) && 6L), (*g_641))) < p_33)), (-1L)))))) , (*p_34))))))), p_32))));
                    }
                    (**g_51) = (safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((*l_1400) = l_1399) == (void*)0), 0x05L)), p_33));
                }
            }
        }
        for (l_1364 = 0; (l_1364 <= 1); l_1364 += 1)
        {
            int64_t l_1408 = 0L;
            int32_t l_1409 = 0xDCE05FF1L;
            int32_t l_1410 = 0x35F2E55EL;
            uint64_t *l_1480[6] = {&g_86,&g_86,&g_314,&g_86,&g_86,&g_314};
            int32_t l_1529 = (-10L);
            int32_t l_1530 = (-9L);
            int32_t l_1538 = 0x1181FD18L;
            int32_t l_1539 = (-9L);
            int64_t l_1545 = (-1L);
            int32_t l_1547[5] = {0x792726C1L,0x792726C1L,0x792726C1L,0x792726C1L,0x792726C1L};
            int16_t l_1548[8][7] = {{0xB940L,0x7FA7L,0xB940L,0x5C6EL,1L,0L,(-5L)},{0xE270L,0x15A1L,0x93CDL,(-2L),(-5L),0xB940L,0xCA2AL},{0xA230L,0xB940L,0L,0x15A1L,0x15A1L,0L,0xB940L},{0xCA2AL,0xE200L,0xD7D3L,0xA230L,0x15A1L,0x5C6EL,(-10L)},{0x7FA7L,0xE270L,0xE200L,0x6054L,(-5L),0x93CDL,0xD7D3L},{(-2L),1L,0xA230L,0xA230L,1L,(-2L),0x7FA7L},{0xE200L,0xD7D3L,0xA230L,0x15A1L,0x5C6EL,(-10L),1L},{(-10L),(-5L),0xE200L,(-2L),0xA9CAL,1L,0xA9CAL}};
            uint32_t **l_1559 = (void*)0;
            int64_t l_1572 = (-4L);
            int32_t **l_1672[1];
            int32_t *l_1675[9] = {&g_418[2][0][1],&g_418[2][0][1],&g_418[2][0][1],&g_418[2][0][1],&g_418[2][0][1],&g_418[2][0][1],&g_418[2][0][1],&g_418[2][0][1],&g_418[2][0][1]};
            int8_t ***l_1681[3][3][7] = {{{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{(void*)0,&l_1656,&l_1656,&l_1656,(void*)0,&l_1656,(void*)0}},{{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,(void*)0,&l_1656,&l_1656,(void*)0,&l_1656}},{{(void*)0,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,(void*)0},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656}}};
            uint16_t ***l_1702[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1672[i] = &g_52;
            for (i = 0; i < 1; i++)
                l_1702[i] = &g_640;
            if ((((*g_735) |= (safe_lshift_func_uint16_t_u_s(((*g_85) ^ (*g_85)), 1))) > l_1348))
            {
                return p_34;
            }
            else
            {
                int32_t *l_1403 = &l_1371[0];
                int32_t *l_1404 = &l_1356;
                int32_t *l_1405 = &l_1292[0][5][3];
                int32_t *l_1406 = (void*)0;
                int32_t *l_1407[4][1][9] = {{{(void*)0,&g_1262,&g_1262,(void*)0,&l_1371[0],(void*)0,(void*)0,(void*)0,&l_1371[0]}},{{&l_1292[0][5][3],&l_1348,&l_1348,&l_1292[0][5][3],&g_1262,&g_418[2][0][2],&l_1292[0][5][3],&g_418[2][0][2],&g_1262}},{{(void*)0,&g_1262,&g_1262,(void*)0,&l_1371[0],(void*)0,(void*)0,(void*)0,&l_1371[0]}},{{&l_1292[0][5][3],&l_1348,&l_1348,&l_1292[0][5][3],&g_1262,&g_418[2][0][2],&l_1292[0][5][3],&g_418[2][0][2],&g_1262}}};
                uint32_t ****l_1416[6][1][9] = {{{&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840}},{{&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840}},{{&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840}},{{&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840}},{{&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840}},{{&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840,&g_840}}};
                int i, j, k;
                g_1411[1][5][1]--;
                (*l_1405) ^= (safe_lshift_func_uint8_t_u_s(((l_1416[0][0][4] == &g_840) >= (*l_1404)), 2));
                (*g_52) ^= ((+((*l_1404) , (((((**g_841) = l_1418) & l_1283) == (0x18L | (((**g_640) <= (safe_div_func_uint8_t_u_u(((*g_735) = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(p_33, 12)), 8))), (p_32 || (((*g_157) = (safe_mod_func_int64_t_s_s(((void*)0 != &g_840), p_32))) > (-5L)))))) && l_1427))) <= (*l_1404)))) ^ 0x4251A15F0312A0A8LL);
            }
        }
    }
    else
    {
        int32_t *l_1729 = &l_1292[1][6][2];
        int32_t *l_1730 = (void*)0;
        int32_t *l_1731 = (void*)0;
        int32_t l_1732 = 3L;
        int32_t *l_1733 = &l_1292[0][2][5];
        int32_t *l_1734 = (void*)0;
        int32_t *l_1735 = &l_1732;
        int32_t *l_1736[7][5][7] = {{{&g_4,&l_1292[0][3][0],&l_1292[0][3][0],&g_4,&g_814,&g_4,&g_4},{(void*)0,&g_418[1][1][2],&g_4,&g_4,&g_418[1][1][2],(void*)0,&l_1292[0][5][3]},{&l_1732,&g_4,&l_1292[0][5][3],(void*)0,(void*)0,&l_1292[0][5][3],&g_4},{&g_418[1][1][2],&l_1292[0][5][3],(void*)0,&g_418[1][1][2],&g_4,&g_4,&g_418[1][1][2]},{&g_4,&g_4,&g_4,&g_814,&g_4,&l_1292[0][3][0],&l_1292[0][3][0]}},{{&l_1292[1][1][5],&g_418[1][1][2],&l_1292[0][5][3],&g_418[1][1][2],&l_1292[0][5][3],&g_418[0][0][1],(void*)0},{&g_4,&l_1292[0][5][3],&l_1732,&g_4,&l_1732,&l_1292[0][5][3],&g_4},{(void*)0,(void*)0,&l_1292[0][5][3],&l_1292[2][3][3],(void*)0,&l_1292[2][3][3],&l_1292[0][5][3]},{&g_4,&g_4,(void*)0,&l_1292[0][3][0],&g_814,(void*)0,&g_814},{&l_1292[0][5][3],&l_1292[0][5][3],&l_1292[0][5][3],&l_1292[0][5][3],&l_1292[2][3][3],(void*)0,&l_1292[0][5][3]}},{{(void*)0,&g_814,&l_1732,&l_1732,&g_814,(void*)0,&l_1292[0][5][3]},{&g_4,&l_1292[0][5][3],&g_418[0][0][1],(void*)0,(void*)0,&g_418[0][0][1],&l_1292[0][5][3]},{&g_814,&l_1292[0][5][3],(void*)0,&g_814,&l_1732,&l_1732,&g_814},{(void*)0,&l_1292[0][5][3],(void*)0,&l_1292[2][3][3],&l_1292[0][5][3],&l_1292[0][5][3],&l_1292[0][5][3]},{&l_1292[0][3][0],&g_814,(void*)0,&g_814,&l_1292[0][3][0],(void*)0,&g_4}},{{(void*)0,&l_1292[0][5][3],&l_1292[2][3][3],(void*)0,&l_1292[2][3][3],&l_1292[0][5][3],(void*)0},{(void*)0,&g_4,&l_1292[0][5][3],&l_1732,&g_4,&l_1732,&l_1292[0][5][3]},{(void*)0,(void*)0,&g_418[0][0][1],&l_1292[0][5][3],&g_4,&g_418[0][0][1],&g_4},{&l_1292[0][3][0],&l_1292[0][5][3],&l_1292[0][5][3],&l_1292[0][3][0],&l_1732,(void*)0,&l_1292[0][3][0]},{(void*)0,&g_4,&l_1292[2][3][3],&l_1292[2][3][3],&g_4,(void*)0,&l_1292[0][5][3]}},{{&g_814,&l_1292[0][3][0],(void*)0,&g_4,&g_4,(void*)0,&l_1292[0][3][0]},{&g_4,&l_1292[0][5][3],(void*)0,&g_4,&l_1292[2][3][3],&l_1292[2][3][3],&g_4},{(void*)0,&l_1292[0][3][0],(void*)0,&l_1732,&l_1292[0][3][0],&l_1292[0][5][3],&l_1292[0][5][3]},{&l_1292[0][5][3],&g_4,&g_418[0][0][1],&g_4,&l_1292[0][5][3],&g_418[0][0][1],(void*)0},{&g_4,&l_1292[0][5][3],&l_1732,&g_4,&l_1732,&l_1292[0][5][3],&g_4}},{{(void*)0,(void*)0,&l_1292[0][5][3],&l_1292[2][3][3],(void*)0,&l_1292[2][3][3],&l_1292[0][5][3]},{&g_4,&g_4,(void*)0,&l_1292[0][3][0],&g_814,(void*)0,&g_814},{&l_1292[0][5][3],&l_1292[0][5][3],&l_1292[0][5][3],&l_1292[0][5][3],&l_1292[2][3][3],(void*)0,&l_1292[0][5][3]},{(void*)0,&g_814,&l_1732,&l_1732,&g_814,(void*)0,&l_1292[0][5][3]},{&g_4,&l_1292[0][5][3],&g_418[0][0][1],(void*)0,(void*)0,&g_418[0][0][1],&l_1292[0][5][3]}},{{&g_814,&l_1292[0][5][3],(void*)0,&g_814,&l_1732,&l_1732,&g_814},{(void*)0,&l_1292[0][5][3],(void*)0,&l_1292[2][3][3],&l_1292[0][5][3],&l_1292[0][5][3],&l_1292[0][5][3]},{&l_1292[0][3][0],&g_814,(void*)0,&g_814,&l_1292[0][3][0],(void*)0,(void*)0},{(void*)0,&g_418[0][0][1],&l_1292[1][1][5],(void*)0,&l_1292[1][1][5],&g_418[0][0][1],(void*)0},{&l_1732,(void*)0,(void*)0,&g_4,(void*)0,&g_4,(void*)0}}};
        int16_t l_1738 = 1L;
        int i, j, k;
        l_1739[0][0]--;
    }
lbl_2197:
    (**g_409) |= ((safe_mul_func_uint8_t_u_u((l_1574 && ((**g_841) == (safe_mul_func_int8_t_s_s((((((*g_85) = 18446744073709551615UL) < ((*l_1479) = ((((**g_640) >= (+((*l_1750) = (safe_sub_func_uint16_t_u_u((((*g_369) = (0UL <= 4294967294UL)) < 0xAA67L), (&l_1337 != (void*)0)))))) <= 1L) > 0x2C828AA6L))) < 4L) <= p_33), l_1619)))), l_1418)) && 0x9AA1L);
    if ((*p_34))
    {
        uint8_t *l_1757[6][9] = {{&g_396,&g_396,&l_1574,&g_56,(void*)0,&g_405,&g_410,&g_396,&g_405},{&g_5[0],&g_241,&g_405,&g_56,&g_396,&g_410,&g_5[0],&g_5[0],&g_410},{&g_56,&g_241,&l_1574,&g_241,&g_56,(void*)0,&g_56,&g_56,&g_410},{&g_5[0],&g_396,&g_5[2],&g_56,&g_410,&l_1574,&g_56,&g_5[0],&g_405},{&g_396,&g_5[0],(void*)0,&g_410,&g_410,(void*)0,&g_5[0],&g_396,&g_5[2]},{&g_241,&g_56,(void*)0,&g_56,&g_56,&g_410,&g_410,&g_241,&g_405}};
        int32_t l_1780 = (-9L);
        int32_t l_1799 = 0x076104AAL;
        int32_t l_1801 = 7L;
        int32_t l_1802[4] = {(-1L),(-1L),(-1L),(-1L)};
        uint32_t l_1803[3][8][10] = {{{1UL,0x8F0E6811L,0x7FFE2C60L,0xDBF44FF0L,0UL,5UL,0UL,4294967295UL,3UL,4294967295UL},{4294967295UL,4294967295UL,0x3D811CD8L,4294967286UL,0x63584BD5L,0UL,4294967286UL,9UL,4294967295UL,4294967286UL},{0x623F4BC4L,4294967292UL,0x764E392CL,9UL,4294967295UL,4294967287UL,0x2F0D2E73L,0x2F0D2E73L,4294967287UL,4294967295UL},{4294967288UL,4294967295UL,4294967295UL,4294967288UL,4294967286UL,4294967289UL,0xC677B495L,0x3882F584L,0x7C8073E4L,0xBCCB62FFL},{0xA35CE445L,0x3B39EC86L,4294967286UL,0x11DC6F12L,0x55BBB269L,0x7D014BC6L,4294967295UL,0xC677B495L,0x7C8073E4L,4294967295UL},{0x2F0D2E73L,0xDBF44FF0L,4294967294UL,4294967288UL,0x4A2C0145L,0x27D81AACL,0x2CDCF894L,1UL,4294967287UL,1UL},{0xEDFF6FA5L,0x090A296DL,0xA35CE445L,9UL,0x7FFE2C60L,0x3D811CD8L,0xEDFF6FA5L,0x44FB573DL,4294967295UL,0x63584BD5L},{1UL,4294967295UL,4294967286UL,4294967286UL,1UL,4294967295UL,4294967295UL,0x3EF373CEL,3UL,0x44FB573DL}},{{0UL,0xBCCB62FFL,0UL,0xDBF44FF0L,1UL,1UL,0x3B39EC86L,0x63584BD5L,0x27D81AACL,8UL},{4294967295UL,0x090A296DL,0x11DC6F12L,1UL,0x2F94090FL,4294967295UL,1UL,1UL,0x8DC1060FL,4294967295UL},{0x8DC1060FL,0x4A2C0145L,4294967295UL,4294967290UL,4294967295UL,0xA35CE445L,4294967295UL,0x2CDCF894L,4294967286UL,3UL},{0x623F4BC4L,0xEDFF6FA5L,4294967287UL,0x4A2C0145L,1UL,4294967293UL,0UL,1UL,4294967295UL,4294967286UL},{5UL,4294967293UL,0xFEC6D792L,0x7D014BC6L,1UL,0xE23C9AA8L,3UL,0xE23C9AA8L,1UL,0x7D014BC6L},{5UL,0UL,5UL,1UL,4294967295UL,0x27D81AACL,0x764E392CL,3UL,0xD7427FE4L,0xFC85EB5BL},{4294967295UL,0UL,0UL,4294967295UL,0x005B19AEL,4294967295UL,0x11DC6F12L,3UL,0x3EF373CEL,0xA35CE445L},{4294967295UL,1UL,5UL,4294967295UL,0xD7427FE4L,4294967295UL,0x7C8073E4L,0xE23C9AA8L,0UL,0x7C8073E4L}},{{4294967289UL,0x8DC1060FL,0xFEC6D792L,0UL,0x8DC1060FL,0x23571F96L,0x37541E90L,0UL,0x1AE9B898L,7UL},{4294967295UL,4294967295UL,0x2F0D2E73L,1UL,0x3882F584L,1UL,0x9C659CBFL,0x2F94090FL,4294967295UL,0x7FFE2C60L},{4294967292UL,4294967287UL,0x23571F96L,3UL,0x1756B90FL,0x764E392CL,0xA35CE445L,0x7095DEE5L,1UL,4294967289UL},{4294967289UL,0x7FFE2C60L,1UL,4294967295UL,0x2F94090FL,1UL,1UL,0x7FFE2C60L,0x764E392CL,5UL},{4294967286UL,0UL,0x3FD7E454L,0x2F94090FL,0x3425A996L,4294967295UL,4294967289UL,4294967292UL,1UL,4294967286UL},{4294967295UL,4294967294UL,0x764E392CL,4294967295UL,0x3499BA34L,0x1AE9B898L,5UL,0xFC85EB5BL,0x23571F96L,0x090A296DL},{5UL,0x9C659CBFL,0x1AE9B898L,4294967295UL,5UL,0UL,0UL,5UL,4294967295UL,0x1AE9B898L},{0UL,0UL,1UL,0x7D014BC6L,0x7FFE2C60L,0x3EF373CEL,4294967286UL,0x8F0E6811L,4294967295UL,3UL}}};
        int64_t l_1809 = 8L;
        int16_t **l_1820 = (void*)0;
        const int32_t *l_1899 = &l_1799;
        int32_t l_1949[1];
        int32_t l_1950 = 2L;
        uint32_t l_2022 = 0x55FC4B57L;
        uint16_t ****l_2050 = &g_1492;
        uint16_t l_2078 = 1UL;
        const int16_t **l_2083 = (void*)0;
        const int16_t ***l_2082 = &l_2083;
        const int16_t ****l_2081 = &l_2082;
        const uint32_t ***l_2089 = &l_1905[6][0];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1949[i] = 1L;
        if ((safe_sub_func_uint8_t_u_u((*g_735), (g_1262 && ((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_32, ((l_1757[2][0] != (void*)0) != (~(p_33 != p_32))))), (((p_33 & (l_1292[0][6][2] = (safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((l_1292[0][5][3] < p_32), 6L)), p_32)))) & p_33) , 0x7190L))) , p_32)))))
        {
            uint16_t ****l_1777[7][7][3] = {{{&g_1492,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492},{&g_1492,(void*)0,&g_1492},{&g_1492,(void*)0,&g_1492},{&g_1492,&g_1492,&g_1492},{(void*)0,(void*)0,&g_1492},{&g_1492,&g_1492,(void*)0}},{{(void*)0,(void*)0,&g_1492},{(void*)0,(void*)0,&g_1492},{&g_1492,&g_1492,(void*)0},{(void*)0,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492},{&g_1492,&g_1492,(void*)0},{&g_1492,&g_1492,&g_1492}},{{&g_1492,&g_1492,&g_1492},{&g_1492,(void*)0,&g_1492},{&g_1492,(void*)0,&g_1492},{&g_1492,&g_1492,&g_1492},{(void*)0,(void*)0,&g_1492},{&g_1492,&g_1492,(void*)0},{(void*)0,(void*)0,&g_1492}},{{(void*)0,(void*)0,&g_1492},{&g_1492,&g_1492,&g_1492},{(void*)0,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492},{&g_1492,&g_1492,(void*)0},{&g_1492,&g_1492,&g_1492}},{{&g_1492,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492},{(void*)0,&g_1492,(void*)0},{(void*)0,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492}},{{(void*)0,&g_1492,&g_1492},{(void*)0,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492},{&g_1492,&g_1492,(void*)0},{&g_1492,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492}},{{&g_1492,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492},{(void*)0,&g_1492,(void*)0},{(void*)0,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492},{&g_1492,&g_1492,&g_1492},{(void*)0,&g_1492,&g_1492}}};
            uint64_t **l_1781 = &l_1479;
            int32_t l_1793 = 0xEFB13C0EL;
            int32_t l_1800[7];
            int16_t **l_1821 = &g_157;
            int32_t l_1844 = 0xAF819588L;
            uint32_t *l_1851[4] = {&g_72[4],&g_72[4],&g_72[4],&g_72[4]};
            uint8_t *l_1911 = &g_241;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1800[i] = 0x70860EF0L;
lbl_1890:
            for (p_32 = (-9); (p_32 <= 29); p_32 = safe_add_func_uint8_t_u_u(p_32, 6))
            {
                for (g_170 = 0; (g_170 < (-28)); g_170--)
                {
                    for (g_318 = 0; (g_318 > 7); g_318 = safe_add_func_uint8_t_u_u(g_318, 4))
                    {
                        (**g_51) ^= l_1617;
                    }
                }
            }
            for (g_98 = (-19); (g_98 > 52); ++g_98)
            {
                int16_t ** const ***l_1785 = &l_1784[1];
                int32_t *l_1795 = (void*)0;
                int32_t *l_1796 = &l_1292[1][2][3];
                int32_t l_1797 = (-10L);
                int32_t *l_1798[4] = {&l_1780,&l_1780,&l_1780,&l_1780};
                int i;
                for (l_1368 = (-8); (l_1368 > 29); l_1368++)
                {
                    for (g_1262 = 28; (g_1262 == (-17)); g_1262 = safe_sub_func_uint16_t_u_u(g_1262, 9))
                    {
                        uint16_t *****l_1778[7][7] = {{(void*)0,&l_1777[5][0][1],&l_1777[5][0][1],(void*)0,&l_1777[4][6][0],&g_1491,&l_1777[4][6][0]},{&g_1491,&g_1491,&g_1491,&g_1491,&l_1777[1][2][2],&g_1491,&l_1777[1][2][2]},{(void*)0,&l_1777[5][0][1],&l_1777[5][0][1],(void*)0,&l_1777[4][6][0],&g_1491,&l_1777[4][6][0]},{&g_1491,&g_1491,&g_1491,&g_1491,&l_1777[1][2][2],&g_1491,&l_1777[1][2][2]},{(void*)0,&l_1777[5][0][1],&l_1777[5][0][1],(void*)0,&l_1777[4][6][0],&g_1491,&l_1777[4][6][0]},{&g_1491,&g_1491,&g_1491,&g_1491,&l_1777[1][2][2],&g_1491,&l_1777[1][2][2]},{(void*)0,&l_1777[5][0][1],&l_1777[5][0][1],(void*)0,&l_1777[4][6][0],&g_1491,&l_1777[4][6][0]}};
                        int i, j;
                        (*p_35) = ((l_1777[3][0][0] = (g_1096 , ((p_33 , (--(*l_1479))) , l_1777[1][2][2]))) != (void*)0);
                        (*g_409) = (*g_409);
                        (*g_1197) = (g_1779 , p_34);
                        return (*g_409);
                    }
                }
                l_1794 = func_36(l_1780, (((void*)0 != l_1781) == (((**g_841) = (****g_1724)) < (safe_rshift_func_int16_t_s_u((((g_300 == ((*l_1785) = l_1784[1])) , (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((((void*)0 != l_1792) || g_758) , p_32) && 4294967295UL), 2)), 0x97L)), 255UL))) ^ p_32), l_1793)))));
                l_1803[1][0][6]++;
                (*p_35) |= 0xB43CF49EL;
            }
            for (g_396 = 7; (g_396 > 12); ++g_396)
            {
                uint32_t l_1824 = 6UL;
                int32_t l_1863[1][4][6] = {{{1L,1L,0x0A2E6237L,(-1L),0x0A2E6237L,1L},{0x0A2E6237L,4L,(-1L),(-1L),4L,0x0A2E6237L},{1L,0x0A2E6237L,(-1L),0x0A2E6237L,1L,1L},{0x6CC1455EL,0x0A2E6237L,0x0A2E6237L,0x6CC1455EL,4L,0x6CC1455EL}}};
                int64_t l_1894 = 0x9666B3CCC6276498LL;
                int i, j, k;
                if ((safe_unary_minus_func_uint64_t_u(((l_1809 > (safe_mul_func_uint16_t_u_u((((((*l_1750) = ((~(~(l_1793 = (p_32 ^ l_1793)))) <= ((p_33 > (((safe_rshift_func_int16_t_s_u((p_33 & p_33), (((*g_735) &= ((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((l_1820 != l_1821) && ((0xF3F14415L && l_1800[0]) | 0UL)), p_33)), l_1824)) , l_1824)) != 0UL))) < l_1824) , (*l_1794))) < 0x3999L))) != 0x5B9B5AD730E5F231LL) < l_1824) == g_1411[1][5][1]), p_32))) && (*l_1794)))))
                {
                    return p_34;
                }
                else
                {
                    int8_t *l_1835 = (void*)0;
                    int8_t *l_1836[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_1854 = 0x33BB00F5L;
                    uint16_t ***l_1866 = &g_640;
                    uint64_t l_1884 = 0x869F0791430B7251LL;
                    uint32_t l_1889 = 0x3A8949CCL;
                    int32_t l_1893 = (-6L);
                    int32_t l_1895 = 0xCF73465DL;
                    uint8_t l_1896[4] = {0xF5L,0xF5L,0xF5L,0xF5L};
                    int i;
                    l_1292[2][4][0] = ((*p_35) = (safe_add_func_uint16_t_u_u(((l_1802[3] & ((safe_mul_func_uint16_t_u_u((&g_378 == p_35), 0L)) < ((safe_mod_func_uint64_t_u_u(((p_33 == (l_1800[0] != ((****g_1491)++))) < ((*g_52) = (safe_rshift_func_int8_t_s_s(0x58L, ((g_95 = 6L) || ((safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((((!0L) || p_33) <= 0x400FL), 0)) > l_1793) || 0L), (*l_1794))), 18446744073709551615UL)) <= g_238)))))), l_1844)) | g_120))) != (*g_85)), 0xA2F0L)));
                    for (g_170 = 9; (g_170 <= (-15)); g_170--)
                    {
                        return (*g_51);
                    }
                    if (((safe_mod_func_int8_t_s_s((l_1851[3] == p_34), ((safe_lshift_func_int8_t_s_u((l_1854 >= 5L), ((*g_735) = (safe_div_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((*l_1794) = ((safe_mul_func_int16_t_s_s(((((-4L) || (*g_85)) , ((0x02L | ((void*)0 == (*g_51))) | 0x706DL)) <= l_1824), p_32)) == l_1844)), l_1863[0][1][3])) , p_33) && (-5L)), p_32))))) & p_33))) >= 0UL))
                    {
                        uint16_t ***l_1867 = (void*)0;
                        (**g_51) = (l_1800[6] , (safe_lshift_func_uint16_t_u_s(((l_1866 == l_1867) & ((***l_1866) = ((0xBA4B8F74L & (**g_409)) & (safe_add_func_int32_t_s_s(0L, (((*l_1750) = (((0x0982AAB8L != 0x7C2E2641L) , (((-7L) != p_32) , p_33)) > g_1870)) == 0x3097D1F96DA6C20ALL)))))), 4)));
                        return (*g_51);
                    }
                    else
                    {
                        int32_t l_1874 = 0x2AE8F1E9L;
                        int64_t *l_1881 = &l_1809;
                        int32_t *l_1891[7];
                        int32_t l_1892 = 0xF0D6EC3DL;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1891[i] = &l_1800[0];
                        (*p_35) ^= (((**g_409) & ((((+(((**l_1781) ^= (l_1874 >= (*g_85))) <= (safe_mod_func_int16_t_s_s((((((*g_735)++) < (((((*l_1881) = ((*l_1750) |= (safe_mul_func_int16_t_s_s((*g_369), l_1874)))) , ((safe_div_func_int32_t_s_s(1L, (((l_1884 & (0x9A5375019EC82E07LL && (((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(0x6AL, 6)), p_32)) && l_1854) < l_1889))) ^ p_33) && (*g_85)))) , g_318)) == l_1874) , l_1884)) > p_33) , 0x8BCCL), 0x400FL)))) || (***g_1492)) || p_33) < p_33)) && p_33);
                        if (g_1870)
                            goto lbl_1890;
                        --l_1896[2];
                        (*p_34) = (*p_34);
                    }
                }
                l_1899 = ((*g_1197) = (*g_51));
                for (l_1809 = 0; (l_1809 <= 3); l_1809 += 1)
                {
                    int i;
                    return l_1851[l_1809];
                }
                for (g_553 = 0; (g_553 < 48); g_553 = safe_add_func_int16_t_s_s(g_553, 4))
                {
                    (*p_35) = (**g_409);
                    l_1863[0][2][2] = 0x208742EAL;
                    return p_35;
                }
            }
            (*g_409) = func_36((((safe_mod_func_uint64_t_u_u((l_1905[3][2] == ((safe_rshift_func_uint8_t_u_s(((((((safe_lshift_func_int16_t_s_s(((void*)0 != l_1911), (0x08F9L | 1UL))) < (((((safe_div_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((g_1916[2] = (void*)0) != &g_1724), ((**l_1781) ^= (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((l_1844 == p_32), p_33)), (*p_35)))))), (***g_1492))) > p_33) & p_33) && p_32) == (*l_1902))) , p_32) ^ (*l_1794)) != 65530UL) , 0UL), p_32)) , &l_1906[3])), p_32)) >= p_32) >= 1L), (*l_1794));
        }
        else
        {
            const uint32_t ***l_1922 = &l_1905[1][0];
            int8_t *l_1923 = &l_1368;
            int32_t l_1936 = 1L;
            int32_t l_1937 = 0x0BF920D5L;
            int32_t l_1938 = 0x51E8008AL;
            int32_t l_1939 = 1L;
            int32_t l_1940 = 0x7AF8A1DBL;
            uint32_t *l_2099[2];
            int32_t l_2111 = 0x10D52C88L;
            int32_t l_2112 = (-7L);
            int32_t l_2114 = (-1L);
            int32_t l_2115 = 1L;
            int32_t l_2116 = 0x326EEDADL;
            int i;
            for (i = 0; i < 2; i++)
                l_2099[i] = &l_1283;
            if ((p_33 | ((*l_1923) = (l_1922 == (void*)0))))
            {
                int32_t *l_1924 = (void*)0;
                int32_t *l_1925 = &g_814;
                int32_t *l_1926 = &g_814;
                int32_t *l_1927 = &g_814;
                int32_t *l_1928 = &g_814;
                int32_t *l_1929 = &l_1802[0];
                int32_t *l_1930 = &l_1292[1][6][7];
                int32_t *l_1931 = &l_1802[2];
                int32_t *l_1932 = &l_1802[1];
                int32_t *l_1933 = &l_1292[0][3][6];
                int32_t *l_1934 = &l_1799;
                int32_t *l_1935[7][7][5] = {{{&g_814,(void*)0,&l_1292[1][6][4],&g_418[0][0][1],&l_1780},{&g_418[2][1][1],(void*)0,&l_1799,&l_1292[0][5][3],(void*)0},{&l_1292[0][5][3],(void*)0,&l_1802[2],&g_418[0][0][2],&l_1292[2][3][7]},{&l_1801,(void*)0,&l_1292[0][1][5],&g_1262,(void*)0},{&g_4,&g_814,&g_4,&g_814,(void*)0},{&g_814,&g_418[1][0][2],(void*)0,(void*)0,&g_418[1][0][2]},{&g_418[0][0][2],&l_1292[0][5][3],&g_4,&l_1801,&g_1262}},{{&l_1780,&g_418[1][0][1],&g_418[2][1][1],(void*)0,&l_1292[0][5][3]},{&g_418[2][0][0],&l_1801,&l_1801,&l_1799,&l_1802[2]},{&l_1780,&g_4,&g_418[2][0][1],(void*)0,(void*)0},{&g_418[0][0][2],(void*)0,&l_1801,(void*)0,&g_418[1][0][2]},{&g_814,(void*)0,&l_1292[0][5][3],&g_1262,&l_1801},{&l_1799,&g_418[2][0][2],&l_1292[0][5][3],(void*)0,&l_1292[0][5][3]},{&g_418[1][0][2],&g_4,(void*)0,&g_418[1][0][2],&l_1780}},{{&l_1292[0][5][3],&l_1292[0][5][3],&l_1801,&g_1262,&l_1802[2]},{&l_1292[0][1][5],(void*)0,&g_4,&l_1802[2],&l_1801},{&l_1801,&l_1780,&g_418[1][1][0],&g_418[1][0][2],&g_418[1][0][2]},{(void*)0,&l_1292[0][1][5],(void*)0,&g_418[2][0][1],&g_418[1][0][2]},{&l_1780,&g_418[2][0][0],&g_814,(void*)0,&l_1801},{(void*)0,&l_1801,(void*)0,&g_4,&g_418[0][1][1]},{&l_1802[2],&g_418[1][0][2],&g_814,&l_1801,&l_1292[1][6][4]}},{{&l_1802[0],&g_4,(void*)0,(void*)0,&l_1780},{&l_1802[2],&l_1801,&g_418[1][1][0],&l_1801,&g_418[0][0][2]},{&g_4,&l_1292[0][5][3],&g_4,&g_814,&g_4},{&g_814,&g_814,&l_1801,&l_1801,&g_814},{&g_418[0][1][1],&l_1802[0],(void*)0,(void*)0,&g_418[1][0][1]},{&g_418[2][0][2],&g_418[1][0][2],&l_1292[0][5][3],&l_1292[0][5][3],&l_1801},{(void*)0,&l_1799,&l_1292[0][5][3],&l_1292[0][5][3],&g_418[2][0][1]}},{{&g_418[0][0][2],(void*)0,&l_1801,(void*)0,&g_418[0][0][2]},{&l_1292[0][3][7],&l_1292[0][1][5],&g_418[2][0][1],&l_1292[0][5][3],&l_1802[0]},{&g_814,&l_1802[2],&l_1801,&l_1292[0][5][3],&l_1799},{&l_1801,&l_1780,&g_418[2][1][1],&l_1292[0][1][5],&l_1802[0]},{(void*)0,&l_1292[0][5][3],&g_4,(void*)0,&g_418[0][0][2]},{&l_1802[0],&g_1262,(void*)0,&g_418[1][0][1],&g_418[2][0][1]},{(void*)0,&g_418[0][0][2],&g_4,&l_1292[1][6][4],&l_1801}},{{(void*)0,(void*)0,&l_1799,&l_1799,&g_418[1][0][1]},{&l_1780,&l_1802[2],&l_1802[2],&l_1802[2],&g_814},{(void*)0,(void*)0,(void*)0,&l_1292[0][1][5],&g_4},{&l_1801,&l_1801,&g_418[2][0][2],&g_4,&g_418[0][0][2]},{&l_1292[0][1][5],&l_1799,&l_1780,&g_4,&l_1780},{&g_418[1][0][2],&g_418[1][0][2],&l_1802[1],(void*)0,&l_1292[1][6][4]},{&g_418[2][0][1],&g_418[1][0][2],&l_1799,&l_1801,&g_418[0][1][1]}},{{&l_1799,&l_1799,&g_1262,&l_1801,&l_1802[3]},{&l_1292[0][5][3],&l_1801,&g_418[1][0][2],&g_418[2][0][1],&l_1801},{&l_1292[2][3][7],&l_1799,&g_4,&l_1801,&g_814},{&g_4,(void*)0,&l_1802[3],&l_1292[0][5][3],&g_418[2][1][1]},{&g_4,&l_1292[0][5][3],&l_1801,&l_1292[0][5][3],&l_1802[2]},{(void*)0,&g_1262,&g_418[1][0][2],(void*)0,&g_4},{&g_1262,&g_418[1][1][0],&l_1802[1],&l_1801,&g_1262}}};
                int8_t **l_2030 = &l_1337;
                int8_t ***l_2029 = &l_2030;
                int8_t ****l_2028 = &l_2029;
                int16_t ***l_2032[4];
                int16_t ****l_2031 = &l_2032[0];
                int16_t ***l_2047 = &l_1820;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_2032[i] = &l_1820;
                --l_1941;
                if ((*l_1926))
                {
                    int64_t l_1946[8][10] = {{0xFEA85B7C1FCEDF60LL,0xF8DC8D10F9879020LL,0x70B086C9640D2B29LL,0x70B086C9640D2B29LL,0xF8DC8D10F9879020LL,0xFEA85B7C1FCEDF60LL,8L,0xFEA85B7C1FCEDF60LL,0xF8DC8D10F9879020LL,0x70B086C9640D2B29LL},{0x4B0C716013D1A4E2LL,(-3L),0x4B0C716013D1A4E2LL,0x70B086C9640D2B29LL,8L,8L,0x70B086C9640D2B29LL,0x4B0C716013D1A4E2LL,(-3L),0x4B0C716013D1A4E2LL},{0x4B0C716013D1A4E2LL,0xFEA85B7C1FCEDF60LL,(-3L),0xF8DC8D10F9879020LL,(-3L),0xFEA85B7C1FCEDF60LL,0x4B0C716013D1A4E2LL,0x4B0C716013D1A4E2LL,0xFEA85B7C1FCEDF60LL,(-3L)},{0xFEA85B7C1FCEDF60LL,0x4B0C716013D1A4E2LL,0x4B0C716013D1A4E2LL,0xFEA85B7C1FCEDF60LL,(-3L),0xF8DC8D10F9879020LL,(-3L),0xFEA85B7C1FCEDF60LL,0x4B0C716013D1A4E2LL,0x4B0C716013D1A4E2LL},{(-3L),0x4B0C716013D1A4E2LL,0x70B086C9640D2B29LL,8L,8L,0x70B086C9640D2B29LL,0x4B0C716013D1A4E2LL,(-3L),0x4B0C716013D1A4E2LL,0x70B086C9640D2B29LL},{0xF8DC8D10F9879020LL,0xFEA85B7C1FCEDF60LL,8L,0xFEA85B7C1FCEDF60LL,0xF8DC8D10F9879020LL,0x70B086C9640D2B29LL,0x70B086C9640D2B29LL,0xF8DC8D10F9879020LL,0xFEA85B7C1FCEDF60LL,8L},{(-3L),(-3L),8L,0xF8DC8D10F9879020LL,(-1L),0xF8DC8D10F9879020LL,8L,(-3L),(-3L),8L},{0xFEA85B7C1FCEDF60LL,0xF8DC8D10F9879020LL,0x70B086C9640D2B29LL,0x70B086C9640D2B29LL,0xF8DC8D10F9879020LL,0xFEA85B7C1FCEDF60LL,8L,0xFEA85B7C1FCEDF60LL,0xF8DC8D10F9879020LL,0x70B086C9640D2B29LL}};
                    int32_t l_1947 = 0x2DAA62BAL;
                    int32_t l_1948 = 0x190CD600L;
                    int i, j;
                    for (g_370 = 0; (g_370 > (-24)); --g_370)
                    {
                        uint32_t l_1951[8][9][3] = {{{0x4381D2C9L,1UL,0xBEBE9F4AL},{0x953348BAL,0x68219B41L,0x4A4538A4L},{18446744073709551615UL,5UL,0xE4E49F85L},{0xBC8D853EL,18446744073709551615UL,0xC886E871L},{18446744073709551610UL,1UL,1UL},{0x0399BFD7L,0x7564AC98L,0UL},{18446744073709551615UL,3UL,0x721568C2L},{0x436FAE47L,18446744073709551615UL,0x96EA952BL},{0xB0E32DDEL,0xD44845D2L,18446744073709551615UL}},{{0xD27E39E1L,18446744073709551615UL,0UL},{4UL,3UL,1UL},{0UL,0x7564AC98L,0x641517F8L},{8UL,1UL,18446744073709551615UL},{0x4E5890A2L,18446744073709551615UL,0UL},{18446744073709551613UL,5UL,0x85F0F44EL},{0x5BAA0FEEL,0x68219B41L,0x4381D2C9L},{0xB07710D8L,1UL,2UL},{0x177DD09AL,0x07E0E060L,18446744073709551615UL}},{{0UL,0x96EA952BL,18446744073709551610UL},{5UL,0x4381D2C9L,1UL},{4UL,0x4A4538A4L,2UL},{0xF6CB1B7FL,2UL,0x14562BA1L},{18446744073709551615UL,0x92EA5BFCL,0xFB50AD1FL},{1UL,0UL,0x9BA002B0L},{0x6CF72246L,0x177DD09AL,1UL},{0x6CF72246L,0x0399BFD7L,18446744073709551615UL},{0UL,1UL,0xDBF348D2L}},{{0x177DD09AL,9UL,0x6CF72246L},{18446744073709551615UL,0x177DD09AL,0xB07710D8L},{0x9BA002B0L,0x6CF72246L,0xD8E37FECL},{18446744073709551615UL,0x68219B41L,1UL},{18446744073709551615UL,1UL,1UL},{1UL,0x657C0FBDL,0x0399BFD7L},{0UL,0xFA4DD8EDL,0xBC8D853EL},{0x68219B41L,0x4A4538A4L,0xE4E49F85L},{0UL,0x96EA952BL,0x5EE5933FL}},{{0UL,0UL,0x4A4538A4L},{0xF6CB1B7FL,0xF6CB1B7FL,0x09C2132EL},{0x657C0FBDL,18446744073709551610UL,18446744073709551615UL},{2UL,0x4E5890A2L,18446744073709551610UL},{18446744073709551612UL,0x93AC2DC7L,0UL},{0UL,2UL,18446744073709551610UL},{0x21E3371BL,0UL,18446744073709551615UL},{18446744073709551611UL,0xFB50AD1FL,0x09C2132EL},{0UL,18446744073709551615UL,0x4A4538A4L}},{{0x8793A9E8L,1UL,0x5EE5933FL},{0xDBF348D2L,0xE5340843L,0xE4E49F85L},{18446744073709551610UL,18446744073709551613UL,0xBC8D853EL},{4UL,18446744073709551615UL,0x0399BFD7L},{0x59AB2C2AL,0x945D451DL,1UL},{18446744073709551615UL,18446744073709551615UL,1UL},{0xFA7F64D2L,0x5EE5933FL,0xD8E37FECL},{5UL,0x641517F8L,0xB07710D8L},{0xB389EEEEL,18446744073709551610UL,0x6CF72246L}},{{0x7DBD4AEEL,18446744073709551610UL,0xDBF348D2L},{1UL,18446744073709551610UL,0x177DD09AL},{0xB07710D8L,4UL,0xFA4DD8EDL},{0xEE6A4903L,4UL,0xBEBE9F4AL},{0xFB50AD1FL,18446744073709551610UL,1UL},{0x945D451DL,18446744073709551610UL,3UL},{0xD8E37FECL,18446744073709551610UL,1UL},{0x2CD0D081L,0x641517F8L,0xB0E32DDEL},{0x93AC2DC7L,0x5EE5933FL,0x2CD0D081L}},{{1UL,18446744073709551615UL,0x85F0F44EL},{1UL,0x945D451DL,18446744073709551615UL},{0x4A4538A4L,18446744073709551615UL,0x59AB2C2AL},{18446744073709551610UL,18446744073709551613UL,18446744073709551610UL},{18446744073709551613UL,0xE5340843L,0x07E0E060L},{1UL,1UL,0xE5340843L},{0x5BAA0FEEL,18446744073709551615UL,0x5BAA0FEEL},{0xC886E871L,0xFB50AD1FL,0UL},{0xB0E32DDEL,0UL,4UL}}};
                        uint16_t ** const *l_1981[6];
                        uint16_t ** const **l_1980[10] = {&l_1981[4],&l_1981[2],&l_1981[4],&l_1981[4],&l_1981[4],&l_1981[4],&l_1981[2],&l_1981[4],&l_1981[4],&l_1981[4]};
                        int32_t l_1982[2];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_1981[i] = &g_640;
                        for (i = 0; i < 2; i++)
                            l_1982[i] = 0xEB14A560L;
                        ++l_1951[1][5][1];
                        (*l_1931) = ((l_1954 = (void*)0) == g_1956);
                        (*l_1929) &= (~((l_1982[1] = (l_1799 = (safe_sub_func_int32_t_s_s((*p_34), (safe_mul_func_int16_t_s_s(((((3L | (safe_add_func_int64_t_s_s((+((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((2UL && (safe_lshift_func_int16_t_s_u((((*g_85) < ((((****g_1724) = (****g_1917)) < (((((((**g_640)--) != (*l_1899)) ^ (!((((safe_lshift_func_uint8_t_u_u(((***l_1792) = ((p_33 || ((safe_sub_func_uint32_t_u_u(p_33, ((!(*l_1899)) , 0x0C6D17ACL))) == 0L)) > 0xA693L)), 5)) || 0x68F7CC4580A7B838LL) && p_32) | p_33))) , (*g_735)) == 0xA8L) <= (*l_1794))) || l_1951[1][5][1])) < l_1946[0][9]), 15))), 2)), l_1951[4][0][0])) , (*l_1899))), (*l_1902)))) <= p_32) , l_1980[2]) != (void*)0), 0x9234L)))))) , 5UL));
                        (*g_409) = &l_1947;
                    }
                    if (((safe_sub_func_uint64_t_u_u(((g_157 = &g_370) != (void*)0), g_56)) >= (safe_mul_func_uint8_t_u_u(0UL, l_1939))))
                    {
                        const int32_t *l_1987 = &g_1262;
                        (*g_1197) = l_1924;
                        return l_1987;
                    }
                    else
                    {
                        int8_t l_1990[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1990[i] = (-5L);
                        (*g_1197) = (*g_1197);
                        (*l_1925) |= (((((safe_sub_func_int16_t_s_s(l_1990[2], (l_1940 = ((*g_369) |= 5L)))) <= ((l_1947 = p_32) < ((0xADL == ((safe_lshift_func_int8_t_s_u((-2L), l_1990[2])) , 0x57L)) , ((((*g_85) == (safe_add_func_int8_t_s_s((+(*g_85)), 0xBCL))) | 0xEFL) & (*l_1899))))) , p_33) , (-1L)) , (**g_51));
                    }
                }
                else
                {
                    uint16_t l_2009 = 65529UL;
                    if ((safe_add_func_int64_t_s_s(p_33, ((void*)0 != (*g_259)))))
                    {
                        return (*g_51);
                    }
                    else
                    {
                        const uint64_t *l_1999 = &g_84[0];
                        const uint64_t **l_1998 = &l_1999;
                        (**g_51) = ((void*)0 == l_1998);
                        (*l_1926) = (((l_1940 ^= 3L) < (((safe_div_func_uint64_t_u_u(((*l_1479) = 0x91E8EF35BD143A7FLL), (*g_85))) ^ (!(safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((((*l_1923) = ((*g_85) && (&l_1792 == &g_1089))) >= ((safe_mul_func_int16_t_s_s((*g_369), (l_2009 && (65530UL ^ 0L)))) != (-8L))) == (*p_34)), p_33)), (*l_1899))))) >= 0L)) , (*p_34));
                        (*g_1197) = ((*g_409) = (*g_409));
                        (*g_1197) = l_1927;
                    }
                }
                if (((*l_1931) = (((*l_2028) = ((safe_add_func_uint16_t_u_u((*l_1899), (((**l_1792) = (void*)0) == (void*)0))) , ((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((-5L), ((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(l_2022, (l_1937 = p_33))), ((((p_32 & (*l_1928)) && (safe_mod_func_int8_t_s_s(((((safe_mod_func_uint32_t_u_u(p_33, l_2027)) < p_32) || (*g_85)) , (*l_1794)), (*l_1902)))) ^ (*g_85)) | (*l_1899)))) | p_32))), (*l_1927))) , (void*)0))) == &g_1385)))
                {
                    int16_t l_2048[2];
                    int32_t l_2049 = 0xE9131306L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2048[i] = (-2L);
                    (*l_1933) ^= ((0x8A63L == (((*g_369) &= (l_2031 == g_300)) | l_1937)) <= (((safe_unary_minus_func_int32_t_s(((+((((*g_641) = (p_33 && ((0x75L >= (((safe_mod_func_int8_t_s_s((((((((safe_rshift_func_int16_t_s_s(p_32, 15)) , (((safe_rshift_func_uint16_t_u_u((((*l_1925) = (**g_1197)) >= ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((l_2047 == &l_1820), (-4L))), 13)) != g_396)), 7)) , 1UL) != p_32)) && (*l_1931)) ^ p_32) && l_2048[0]) , (****g_1917)) ^ l_2049), (*l_1899))) & (**g_640)) , (-1L))) || p_33))) | 0x14E1L) && (-8L))) == p_33))) , (void*)0) == l_2050));
                }
                else
                {
                    uint16_t *l_2060 = &g_98;
                    int32_t **l_2066 = &l_1928;
                    for (l_1809 = (-24); (l_1809 == 26); l_1809 = safe_add_func_uint32_t_u_u(l_1809, 3))
                    {
                        uint16_t *l_2059[5][10] = {{&g_553,&g_1870,&g_1870,&g_1096,&g_98,&g_98,&g_98,&g_98,&g_1096,&g_1870},{&g_98,&g_98,&g_98,&g_1096,&g_1870,&g_1870,&g_553,&g_553,&g_553,&g_1870},{&g_98,&g_98,&g_1779,&g_98,&g_98,&g_1779,&g_553,&g_98,&g_318,&g_318},{&g_1096,&g_98,&g_1779,&g_1870,&g_1870,&g_1779,&g_98,&g_1096,&g_1779,&g_318},{&g_553,&g_1870,&g_98,&g_1779,&g_1870,&g_1096,&g_1870,&g_1779,&g_98,&g_1779}};
                        int32_t ***l_2062 = &g_409;
                        int32_t ***l_2063[2];
                        int64_t l_2067[10][9][2] = {{{0x8AB2AFB8346438CELL,(-1L)},{(-1L),0L},{0xF27D2D8A067DB417LL,(-1L)},{0x9B9DE75F346E4B99LL,0x23BD7321B2DC34A7LL},{0x9B9DE75F346E4B99LL,(-1L)},{0xF27D2D8A067DB417LL,0L},{(-1L),(-1L)},{0x8AB2AFB8346438CELL,0x0BA08B9F33873B67LL},{0xAB36572D64FC2B9BLL,0xF453C58DA43264F8LL}},{{0xF453C58DA43264F8LL,0xDC1BD9151753FBD0LL},{0L,0xAB36572D64FC2B9BLL},{0x23BD7321B2DC34A7LL,0L},{0x0BA08B9F33873B67LL,0L},{0x23BD7321B2DC34A7LL,0xAB36572D64FC2B9BLL},{0L,0xDC1BD9151753FBD0LL},{0xF453C58DA43264F8LL,0xF453C58DA43264F8LL},{0xAB36572D64FC2B9BLL,0x0BA08B9F33873B67LL},{0x8AB2AFB8346438CELL,(-1L)}},{{(-1L),0L},{0xF27D2D8A067DB417LL,(-1L)},{0x9B9DE75F346E4B99LL,0x23BD7321B2DC34A7LL},{0x9B9DE75F346E4B99LL,(-1L)},{0xF27D2D8A067DB417LL,0L},{(-1L),(-1L)},{0x8AB2AFB8346438CELL,0x0BA08B9F33873B67LL},{0xAB36572D64FC2B9BLL,0xF453C58DA43264F8LL},{0xF453C58DA43264F8LL,0xDC1BD9151753FBD0LL}},{{0L,0xAB36572D64FC2B9BLL},{0x23BD7321B2DC34A7LL,0L},{0x0BA08B9F33873B67LL,0L},{0x23BD7321B2DC34A7LL,0xAB36572D64FC2B9BLL},{0L,0xDC1BD9151753FBD0LL},{0xF453C58DA43264F8LL,0xF453C58DA43264F8LL},{0xAB36572D64FC2B9BLL,0x0BA08B9F33873B67LL},{0x8AB2AFB8346438CELL,(-1L)},{(-1L),0L}},{{0xF27D2D8A067DB417LL,(-1L)},{0x9B9DE75F346E4B99LL,0x23BD7321B2DC34A7LL},{0x9B9DE75F346E4B99LL,(-1L)},{0xF27D2D8A067DB417LL,0L},{(-1L),(-1L)},{0x8AB2AFB8346438CELL,0x0BA08B9F33873B67LL},{0xAB36572D64FC2B9BLL,0xF453C58DA43264F8LL},{0xF453C58DA43264F8LL,0xDC1BD9151753FBD0LL},{0L,0xAB36572D64FC2B9BLL}},{{0x23BD7321B2DC34A7LL,0L},{0x0BA08B9F33873B67LL,0L},{0x23BD7321B2DC34A7LL,0xAB36572D64FC2B9BLL},{0L,0xDC1BD9151753FBD0LL},{0xF453C58DA43264F8LL,0xF453C58DA43264F8LL},{0xAB36572D64FC2B9BLL,0x0BA08B9F33873B67LL},{0x8AB2AFB8346438CELL,(-1L)},{(-1L),0L},{0xF27D2D8A067DB417LL,(-1L)}},{{0x9B9DE75F346E4B99LL,0x23BD7321B2DC34A7LL},{0x9B9DE75F346E4B99LL,(-1L)},{0xF27D2D8A067DB417LL,0L},{(-1L),(-1L)},{0x8AB2AFB8346438CELL,0x0BA08B9F33873B67LL},{0xAB36572D64FC2B9BLL,0xF453C58DA43264F8LL},{0xF453C58DA43264F8LL,0xDC1BD9151753FBD0LL},{0L,0xAB36572D64FC2B9BLL},{0x23BD7321B2DC34A7LL,0L}},{{0x0BA08B9F33873B67LL,0L},{0x23BD7321B2DC34A7LL,0xAB36572D64FC2B9BLL},{0L,0xDC1BD9151753FBD0LL},{0xF453C58DA43264F8LL,0xF453C58DA43264F8LL},{0xAB36572D64FC2B9BLL,0x0BA08B9F33873B67LL},{0x8AB2AFB8346438CELL,(-1L)},{(-1L),0L},{0xF27D2D8A067DB417LL,(-1L)},{0x9B9DE75F346E4B99LL,0x23BD7321B2DC34A7LL}},{{0x9B9DE75F346E4B99LL,(-1L)},{0xF27D2D8A067DB417LL,0L},{(-1L),(-1L)},{0x8AB2AFB8346438CELL,0x0BA08B9F33873B67LL},{0xAB36572D64FC2B9BLL,0xF453C58DA43264F8LL},{0xF453C58DA43264F8LL,0xDC1BD9151753FBD0LL},{0L,0xAB36572D64FC2B9BLL},{0x23BD7321B2DC34A7LL,0L},{0x0BA08B9F33873B67LL,0L}},{{0x23BD7321B2DC34A7LL,0xAB36572D64FC2B9BLL},{0L,0xDC1BD9151753FBD0LL},{0xF453C58DA43264F8LL,0xF453C58DA43264F8LL},{0xAB36572D64FC2B9BLL,0x0BA08B9F33873B67LL},{0x8AB2AFB8346438CELL,(-1L)},{(-1L),0L},{0xF27D2D8A067DB417LL,(-1L)},{0x9B9DE75F346E4B99LL,0x23BD7321B2DC34A7LL},{0x9B9DE75F346E4B99LL,(-1L)}}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_2063[i] = &g_51;
                        (*g_1197) = &l_1292[0][5][3];
                        (*l_1931) = ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((l_2067[2][1][0] |= ((((safe_add_func_int8_t_s_s((-2L), ((&p_32 == (l_2060 = l_2059[2][9])) , (l_1936 = (p_33 && ((safe_unary_minus_func_int16_t_s(((void*)0 != &g_239))) , (((g_51 = ((*l_2062) = &p_34)) == (((safe_mul_func_uint16_t_u_u((0x53L ^ 0x0CL), 1L)) == (*g_369)) , l_2066)) , 0x7DEFL))))))) | 0xD0L) <= p_33) | 255UL)) && 1UL), (**l_2066))), p_33)) >= (**l_2066));
                    }
                }
            }
            else
            {
                const int16_t *****l_2084[3];
                int32_t l_2087 = 4L;
                int32_t l_2088[4];
                int i;
                for (i = 0; i < 3; i++)
                    l_2084[i] = &l_2081;
                for (i = 0; i < 4; i++)
                    l_2088[i] = 0x89F42C60L;
                if (((safe_mod_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((*l_1750) ^= 4L), ((((safe_mod_func_uint32_t_u_u((p_32 , (((****g_1917) < (*g_52)) < (*l_1899))), ((((*l_1899) , (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(l_2078, ((safe_div_func_int32_t_s_s((0xF0ED1AD67A4BEDCCLL ^ (l_2087 = ((l_2085 = l_2081) == &l_2086))), l_2088[0])) <= g_377))), p_33))) <= 0xB0L) | 7UL))) , l_2089) != l_2089) , p_33))), l_1936)) && p_33))
                {
                    uint8_t l_2094 = 0x19L;
                    int16_t l_2100 = (-1L);
                    int32_t *l_2101 = &l_1936;
                    int32_t *l_2102 = &g_814;
                    int32_t *l_2103 = &l_2088[3];
                    int32_t *l_2104 = &l_1799;
                    int32_t *l_2105 = (void*)0;
                    int32_t *l_2106 = &g_1262;
                    int32_t *l_2107 = &g_418[1][0][2];
                    int32_t *l_2108 = (void*)0;
                    int32_t *l_2109 = &l_2088[1];
                    int32_t *l_2110[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_2110[i] = &l_1939;
                    (*p_35) = ((safe_div_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((*l_1899), l_2094)) && 0x14E76493L), ((l_2094 , ((*l_1750) ^= (((**g_51) &= ((safe_mod_func_int64_t_s_s(((((safe_mul_func_int16_t_s_s(p_32, ((-1L) & (l_2094 , ((l_2099[1] == (*g_1956)) != 65532UL))))) , (*l_1899)) | l_2094) > 65535UL), 0xB085BB31CF6A1241LL)) || (-1L))) & l_1939))) && p_33))) ^ l_2100);
                    --g_2117[0];
                }
                else
                {
                    for (l_1938 = 0; (l_1938 != (-18)); l_1938 = safe_sub_func_uint8_t_u_u(l_1938, 9))
                    {
                        return (*g_1197);
                    }
                }
            }
            for (g_553 = 0; (g_553 == 16); ++g_553)
            {
                uint64_t l_2124[10] = {0xBA9C6CD8D3427313LL,0xBA9C6CD8D3427313LL,0xBA9C6CD8D3427313LL,0xBA9C6CD8D3427313LL,0xBA9C6CD8D3427313LL,0xBA9C6CD8D3427313LL,0xBA9C6CD8D3427313LL,0xBA9C6CD8D3427313LL,0xBA9C6CD8D3427313LL,0xBA9C6CD8D3427313LL};
                int16_t ** const ***l_2145 = &l_1784[2];
                uint64_t l_2172 = 0x9DC4BF33FD128F2DLL;
                int i;
                (*l_1794) = l_2124[8];
            }
        }
    }
    else
    {
        int16_t l_2185 = 0xFC2CL;
        int32_t l_2186 = 0xF7EE6340L;
        int32_t l_2187[9][8] = {{0xFBDCD36CL,8L,(-1L),(-1L),8L,0xFBDCD36CL,1L,0x74A005E7L},{0x7E552D92L,(-1L),0xFBDCD36CL,(-6L),0x8639D1CFL,0x765711E9L,0x8639D1CFL,(-6L)},{0x8639D1CFL,0x765711E9L,0x8639D1CFL,(-6L),0xFBDCD36CL,(-1L),0x7E552D92L,0x74A005E7L},{1L,0xFBDCD36CL,8L,(-1L),(-1L),8L,0xFBDCD36CL,1L},{1L,(-6L),0L,0x8639D1CFL,0xFBDCD36CL,0xC901BE33L,8L,0xC901BE33L},{0x8639D1CFL,0xFF11A6D5L,0x74A005E7L,0xFF11A6D5L,0x8639D1CFL,0xC901BE33L,0x765711E9L,0xFBDCD36CL},{0x7E552D92L,(-6L),0xFF11A6D5L,(-5L),8L,8L,(-5L),0xFF11A6D5L},{0xFBDCD36CL,0xFBDCD36CL,0xFF11A6D5L,1L,0L,(-1L),0x765711E9L,0x7E552D92L},{8L,0x765711E9L,0x74A005E7L,0xFBDCD36CL,0x74A005E7L,0x765711E9L,8L,0x7E552D92L}};
        uint32_t ****l_2207 = &g_840;
        uint32_t ****l_2209 = &g_840;
        uint8_t ***l_2227 = &g_734[2];
        int i, j;
        for (l_1368 = 0; (l_1368 >= 0); l_1368 -= 1)
        {
            int32_t l_2183 = (-1L);
            int32_t l_2189[10][1] = {{0L},{0x204145B7L},{(-4L)},{(-4L)},{0x204145B7L},{0L},{0x204145B7L},{(-4L)},{(-4L)},{0x204145B7L}};
            int32_t l_2229 = 0xAB009086L;
            uint32_t ****l_2255 = (void*)0;
            const int32_t *l_2272[10] = {&l_2189[6][0],&l_1292[0][5][3],&l_1292[0][5][3],&l_2189[6][0],&l_1292[0][5][3],&l_1292[0][5][3],&l_2189[6][0],&l_1292[0][5][3],&l_1292[0][5][3],&l_2189[6][0]};
            int16_t *****l_2282 = &g_300;
            uint8_t ****l_2284 = &l_2227;
            uint8_t *****l_2283 = &l_2284;
            int8_t *l_2290 = (void*)0;
            int8_t *l_2291 = (void*)0;
            int i, j;
            (*g_409) = (*g_409);
            if (((safe_unary_minus_func_int32_t_s(g_84[l_1368])) & g_84[l_1368]))
            {
                (*l_1794) = 1L;
            }
            else
            {
                int16_t l_2181 = 0x4124L;
                int32_t l_2184 = 0xA2E41794L;
                int32_t l_2191 = 0x8657140BL;
                int32_t l_2192[5];
                int8_t l_2193 = 0x59L;
                uint32_t *****l_2208 = &l_2207;
                uint64_t l_2216 = 1UL;
                uint8_t ***l_2228[3][7];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_2192[i] = (-6L);
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_2228[i][j] = &g_734[0];
                }
                for (l_1625 = 0; (l_1625 > 21); l_1625 = safe_add_func_int64_t_s_s(l_1625, 8))
                {
                    int32_t l_2188 = 0x1E92AA66L;
                    int32_t l_2190[7][10] = {{4L,0L,4L,4L,0L,4L,4L,0L,4L,4L},{0L,0L,0x837EA6C1L,0L,0L,0x837EA6C1L,0L,0L,0x837EA6C1L,0L},{0L,4L,4L,0L,4L,4L,0L,4L,4L,0L},{4L,0L,4L,4L,0L,4L,4L,0L,4L,4L},{0L,0L,0x837EA6C1L,0L,0L,0x837EA6C1L,0L,0L,0x837EA6C1L,0L},{0L,4L,4L,0L,4L,4L,0L,4L,4L,0L},{4L,0L,4L,4L,0L,4L,4L,0L,4L,4L}};
                    int i, j;
                    if ((0x644EL >= ((*g_157) = l_2181)))
                    {
                        int32_t *l_2182[8][10] = {{&l_1292[0][5][3],&g_4,(void*)0,&g_814,&g_4,(void*)0,(void*)0,(void*)0,&g_1262,&g_1262},{&g_1262,&g_4,&g_4,&l_1292[0][5][3],&l_1292[1][0][0],&l_1292[0][5][3],&g_4,&g_4,&g_1262,(void*)0},{&g_1262,&l_1292[0][3][5],&g_1262,&g_1262,&l_1292[0][5][3],&g_4,(void*)0,&g_4,(void*)0,(void*)0},{&g_4,&g_418[1][0][2],(void*)0,&g_1262,&g_1262,&l_1292[0][5][3],&g_418[2][1][2],&g_1262,(void*)0,&g_4},{&g_418[2][1][1],&g_4,&g_4,&l_1292[1][1][2],(void*)0,(void*)0,&l_1292[1][1][2],&g_4,&g_4,&g_418[2][1][1]},{&l_1292[0][5][3],&g_4,&g_418[1][0][2],&l_1292[0][3][5],&g_814,&l_1292[1][0][0],&g_4,(void*)0,&g_1262,&l_1292[0][5][3]},{&g_1262,&g_4,&g_1262,&g_4,&g_814,&g_1262,&l_1292[0][5][3],(void*)0,&g_4,&g_418[2][1][1]},{&g_814,&g_4,&g_418[1][0][2],&l_1292[1][0][0],(void*)0,(void*)0,(void*)0,&l_1292[1][0][0],&g_418[1][0][2],&g_4}};
                        int i, j;
                        (*g_1197) = (*g_1197);
                        l_2182[1][6] = p_35;
                        ++l_2194;
                        if (g_370)
                            goto lbl_2197;
                    }
                    else
                    {
                        if ((*p_34))
                            break;
                    }
                }
                (*p_34) ^= ((((((*g_369) |= ((void*)0 != p_35)) | (~(((*l_2208) = (((l_2191 &= ((((+(safe_div_func_int64_t_s_s((safe_unary_minus_func_int32_t_s(((safe_div_func_uint16_t_u_u(((p_33 && 0L) <= (*g_85)), ((*g_157) = (p_33 | ((*l_1794) = (*g_157)))))) > (safe_rshift_func_int8_t_s_u((l_2187[5][2] , g_405), p_33))))), (*g_85)))) <= (**g_640)) ^ l_2184) && 4294967295UL)) <= p_33) , l_2207)) != l_2209))) >= 0x559ADEDAL) > p_33) , (-1L));
                for (l_2191 = (-6); (l_2191 >= (-1)); ++l_2191)
                {
                    uint8_t ***l_2223 = &g_734[2];
                    int32_t l_2230 = 0x2A996439L;
                    uint32_t l_2256 = 18446744073709551608UL;
                    if ((+p_32))
                    {
                        int32_t l_2215 = 0xB7F1E471L;
                        uint8_t ****l_2224 = (void*)0;
                        uint8_t ****l_2225 = (void*)0;
                        uint8_t ****l_2226[2];
                        int32_t ***l_2268 = (void*)0;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_2226[i] = &l_1792;
                        (*p_35) = ((+(p_32 , (((((*g_85) = ((*g_85) > (g_84[l_1368] ^ (((((l_2216 ^= (((+((-1L) >= p_32)) != l_2215) ^ ((**g_51) = (*p_35)))) , (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((l_2227 = l_2223) != l_2228[2][3]), p_33)), 4)), p_33))) | l_2189[6][0]) > l_2229) , l_2230)))) ^ 18446744073709551615UL) && (*g_85)) >= l_2215))) || 1UL);
                        (*g_52) &= ((l_2186 = (((*p_35) != (l_2215 = ((****l_2209) = (((((safe_mod_func_int16_t_s_s((l_2183 &= (safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((((*g_85) = (safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((5L < (safe_mul_func_uint16_t_u_u(((***g_1492)--), (0L < ((p_32 & (*g_85)) <= ((void*)0 != &g_324[2][5][8])))))) || (((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((((+(safe_mod_func_uint32_t_u_u(((l_2254[0] != l_2255) ^ p_32), l_2256))) && p_33) != (**g_640)) && 0x8798FFAEL), p_33)), 0x877228C6L)), (*g_369))) | 0xFE1A1999L) , p_32)), p_32)), g_2113))) < l_2189[6][0]), 2)), g_1096))), (*l_1902))) == l_2184) == g_241) && 249UL) | l_2193)))) <= (**g_1197))) <= l_2187[2][7]);
                        (*p_34) = ((((*g_157) && (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((((safe_sub_func_int16_t_s_s(((((l_2185 ^ ((safe_rshift_func_int16_t_s_s((((*g_157) & 65535UL) & p_32), 8)) , ((-1L) > l_2267))) == ((l_2268 != ((p_32 > (**g_1197)) , l_2268)) , 0x9C6DL)) < l_2256) , 0xD423L), 0UL)) , 0x0AL) == p_32) || 0x59D47CD6DC492EAALL), p_33)), l_2269))) != (**g_640)) <= 0xCBL);
                    }
                    else
                    {
                        return (*g_51);
                    }
                    return (*g_1197);
                }
            }
            for (l_2185 = 0; (l_2185 >= 23); l_2185++)
            {
                if ((*g_52))
                    break;
                return p_34;
            }
            (*g_52) &= ((l_2187[5][2] , (g_227 |= (safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((((safe_unary_minus_func_int16_t_s(((*g_157) < ((*g_369) = p_33)))) | ((safe_mod_func_uint8_t_u_u((++(***l_2227)), ((((*l_2282) = g_300) != (((l_2283 != (void*)0) > ((safe_add_func_uint64_t_u_u(((((((*g_85) && ((**g_1197) , ((p_33 < (*l_1794)) <= 1UL))) | p_33) < p_32) , (void*)0) != (void*)0), (*l_1902))) > p_33)) , g_2287)) ^ p_32))) > 0xF6C983EDL)) <= p_33) || p_33), p_32)), l_2187[5][2])))) , (*g_1198));
        }
        return l_2292;
    }
    for (g_553 = 0; (g_553 <= 2); g_553 += 1)
    {
        int32_t l_2315 = (-1L);
        int32_t l_2320[9];
        uint8_t l_2323 = 1UL;
        uint8_t ***l_2342 = (void*)0;
        int32_t *l_2361 = &l_2315;
        const int8_t *l_2364 = &l_2321;
        const int8_t **l_2363 = &l_2364;
        const int32_t l_2414 = 9L;
        uint8_t *l_2415[7][4] = {{&g_5[1],&g_5[1],&g_241,&l_1574},{&l_1574,(void*)0,&g_241,(void*)0},{&g_5[1],(void*)0,&g_241,&g_241},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_5[1],&l_1574},{(void*)0,&g_5[1],(void*)0,&g_241},{(void*)0,&l_1574,&g_241,&g_241}};
        uint64_t l_2416 = 0x01FD15744315CCBCLL;
        int32_t **l_2455 = &l_2361;
        int32_t ***l_2454 = &l_2455;
        int16_t **l_2465 = &g_157;
        uint32_t *l_2493 = (void*)0;
        uint64_t **l_2538 = &g_85;
        int8_t l_2589 = 0xEAL;
        int8_t l_2590 = 0x36L;
        int8_t l_2592[3];
        int8_t l_2593 = (-1L);
        int32_t l_2629 = 0x9EB43BFFL;
        uint64_t ***l_2650 = &g_2648;
        uint8_t l_2712 = 0x26L;
        int32_t l_2718 = 0L;
        int32_t l_2741[1];
        uint8_t l_2824 = 0x03L;
        int32_t l_2826 = (-6L);
        int16_t l_2862 = 0x45E9L;
        int32_t l_2863 = 0x70F38B90L;
        int i, j;
        for (i = 0; i < 9; i++)
            l_2320[i] = 0L;
        for (i = 0; i < 3; i++)
            l_2592[i] = (-1L);
        for (i = 0; i < 1; i++)
            l_2741[i] = 0x125E313BL;
    }
    return p_34;
}







static int32_t * func_36(uint8_t p_37, uint32_t p_38)
{
    const int32_t *l_49 = (void*)0;
    const int32_t **l_48[3][7][8] = {{{&l_49,&l_49,&l_49,(void*)0,&l_49,&l_49,&l_49,(void*)0},{&l_49,&l_49,&l_49,&l_49,(void*)0,&l_49,&l_49,&l_49},{(void*)0,(void*)0,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49},{&l_49,(void*)0,&l_49,&l_49,(void*)0,&l_49,&l_49,&l_49},{&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49},{(void*)0,&l_49,&l_49,(void*)0,&l_49,&l_49,&l_49,&l_49},{(void*)0,&l_49,&l_49,&l_49,&l_49,(void*)0,(void*)0,(void*)0}},{{&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49},{&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49},{(void*)0,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,(void*)0},{&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49},{&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,(void*)0,&l_49},{&l_49,(void*)0,&l_49,(void*)0,&l_49,(void*)0,&l_49,(void*)0},{&l_49,(void*)0,&l_49,&l_49,&l_49,&l_49,(void*)0,&l_49}},{{&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49},{&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49},{&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49},{&l_49,&l_49,&l_49,(void*)0,&l_49,&l_49,&l_49,(void*)0},{&l_49,&l_49,(void*)0,(void*)0,&l_49,&l_49,&l_49,&l_49},{(void*)0,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49},{&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49,&l_49}}};
    int16_t **l_1239 = &g_157;
    int16_t ***l_1238 = &l_1239;
    int16_t ****l_1237 = &l_1238;
    uint16_t ** const *l_1243 = &g_640;
    uint16_t ** const **l_1242 = &l_1243;
    const uint32_t *l_1249[3];
    const uint32_t **l_1248 = &l_1249[2];
    const uint32_t ***l_1247[7][6] = {{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,&l_1248,(void*)0,&l_1248},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,&l_1248,(void*)0,&l_1248},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,&l_1248,(void*)0,&l_1248}};
    int32_t l_1257 = 7L;
    uint16_t l_1260[7][9] = {{2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL}};
    int32_t *l_1263 = &g_418[0][1][0];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1249[i] = (void*)0;
    for (p_38 = (-8); (p_38 >= 52); p_38++)
    {
        int16_t l_50 = (-7L);
        const int32_t ***l_1230[5];
        uint16_t ** const ***l_1244 = &l_1242;
        int8_t *l_1256[4][7][2] = {{{&g_227,&g_227},{&g_238,&g_377},{&g_227,&g_377},{&g_238,&g_227},{&g_227,&g_238},{&g_377,&g_227},{&g_377,&g_238}},{{&g_227,&g_227},{&g_238,&g_377},{&g_227,&g_377},{&g_238,&g_227},{&g_377,&g_227},{&g_238,(void*)0},{&g_238,&g_227}},{{&g_377,&g_377},{&g_227,&g_238},{(void*)0,&g_238},{&g_227,&g_377},{&g_377,&g_227},{&g_238,(void*)0},{&g_238,&g_227}},{{&g_377,&g_377},{&g_227,&g_238},{(void*)0,&g_238},{&g_227,&g_377},{&g_377,&g_227},{&g_238,(void*)0},{&g_238,&g_227}}};
        int32_t l_1258 = 0L;
        int32_t *l_1259 = &g_418[2][0][2];
        int32_t *l_1261 = &g_1262;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1230[i] = (void*)0;
        g_1197 = func_44(l_48[1][5][2], l_50, g_51);
        (*l_1261) &= (safe_div_func_int16_t_s_s((safe_sub_func_int64_t_s_s((0x16F8BB6555701811LL | ((((*g_85) &= (safe_lshift_func_int8_t_s_u(g_95, (l_1237 != (void*)0)))) >= ((((((*l_1259) = ((((safe_mul_func_int8_t_s_s((((*g_369) ^= (((*l_1244) = l_1242) == &l_1243)) & (safe_rshift_func_uint16_t_u_s((l_1247[5][3] != &g_841), (safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((l_1258 = (l_1257 |= (((g_170 = (safe_div_func_int64_t_s_s(0x0CC789554B48581CLL, p_38))) > 0xE068A0839324BAAELL) , p_38))), 0xEAL)), g_1096))))), 2L)) && 1UL) < p_38) , (*g_1198))) == 4294967295UL) & 0xB1196442L) < p_37) == 65535UL)) < (-1L))), p_38)), l_1260[0][0]));
    }
    return l_1263;
}







static const int32_t ** func_44(const int32_t ** p_45, int32_t p_46, int32_t ** p_47)
{
    int32_t l_53 = 0x5D482642L;
    int32_t *l_54 = &l_53;
    int32_t *l_55 = &l_53;
    uint64_t l_352 = 1UL;
    int8_t *l_353 = (void*)0;
    int8_t *l_354 = (void*)0;
    int8_t *l_355 = &g_238;
    int8_t *l_356 = &g_227;
    int16_t l_357[7][3] = {{0L,0x63C9L,0L},{0L,(-10L),0x2552L},{0L,7L,0xDDFAL},{0L,0x63C9L,0L},{0L,(-10L),0x2552L},{0L,7L,0xDDFAL},{0L,0x63C9L,0L}};
    int32_t **l_936 = &l_54;
    const int8_t l_973 = (-4L);
    int64_t *l_981 = &g_351[1];
    uint8_t ** const **l_1085 = (void*)0;
    int32_t l_1094 = (-1L);
    int32_t l_1095 = 0L;
    int32_t l_1151 = (-7L);
    int32_t l_1152 = 0L;
    int32_t l_1153 = (-1L);
    int32_t l_1154 = 0x9E047EC2L;
    int32_t l_1155 = 1L;
    int32_t l_1156 = 0x1E575214L;
    int32_t l_1157 = 1L;
    int8_t l_1192 = 0L;
    int64_t l_1203 = (-1L);
    uint32_t l_1207 = 0x6FD41B87L;
    uint32_t l_1214 = 0x44CBD80FL;
    uint8_t l_1228 = 6UL;
    const int32_t **l_1229 = &g_1198;
    int i, j;
    g_56--;
    return l_1229;
}







static int32_t func_59(int32_t * p_60, int32_t ** p_61, uint8_t p_62, uint32_t p_63)
{
    int32_t l_919[9];
    int i;
    for (i = 0; i < 9; i++)
        l_919[i] = (-1L);
    for (g_410 = 18; (g_410 < 4); g_410--)
    {
        int32_t *l_917 = &g_418[1][0][2];
        int32_t *l_918[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint16_t l_920 = 1UL;
        int i;
        l_920--;
    }
    return (*p_60);
}







static uint8_t func_66(int8_t p_67, uint32_t p_68, int32_t ** p_69, uint8_t p_70, int32_t * p_71)
{
    uint32_t l_362 = 0x6BC05B62L;
    int16_t **l_367 = &g_157;
    int32_t *l_371 = &g_239;
    int32_t *l_374 = &g_4;
    uint16_t ****l_387 = (void*)0;
    uint16_t *****l_386 = &l_387;
    int32_t l_394 = 1L;
    int32_t l_422[9] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
    uint32_t l_495 = 0x76EA888AL;
    int64_t l_554 = 0xC6778101BD1B4413LL;
    int8_t l_576 = (-1L);
    uint8_t *l_623 = &g_410;
    uint8_t **l_622 = &l_623;
    uint8_t l_691 = 0x26L;
    int64_t l_724 = 1L;
    int32_t l_757[10][2][2] = {{{0x2BE47E69L,0x2BE47E69L},{3L,0xCEC75175L}},{{0x1601CF97L,0x3A50CA8DL},{0L,0xCFD85D54L}},{{8L,0L},{0x00AFDE37L,0x8EE8F6A7L}},{{0x00AFDE37L,0L},{8L,0xCFD85D54L}},{{0L,0x3A50CA8DL},{0x1601CF97L,0xCEC75175L}},{{3L,0x2BE47E69L},{0x2BE47E69L,0L}},{{0x362D8BFEL,3L},{0x8EE8F6A7L,0x6497E773L}},{{0xCEC75175L,0x6497E773L},{0x8EE8F6A7L,3L}},{{0x362D8BFEL,0L},{0x2BE47E69L,0x2BE47E69L}},{{3L,0xCEC75175L},{0x1601CF97L,0x3A50CA8DL}}};
    uint16_t l_759 = 0xC038L;
    const int16_t **l_889 = (void*)0;
    int i, j, k;
    for (g_318 = 0; (g_318 <= 59); g_318 = safe_add_func_int8_t_s_s(g_318, 8))
    {
        int8_t *l_361[9][5] = {{&g_238,&g_238,&g_238,&g_238,&g_227},{&g_95,&g_238,&g_95,&g_95,&g_95},{&g_238,&g_238,&g_238,&g_238,&g_227},{&g_238,&g_95,&g_227,&g_95,&g_238},{&g_227,&g_238,&g_238,&g_238,&g_238},{&g_95,&g_95,&g_95,&g_238,&g_95},{&g_227,&g_238,&g_238,&g_238,&g_238},{&g_238,&g_238,&g_227,&g_238,&g_238},{&g_238,&g_238,&g_238,&g_238,&g_227}};
        int32_t l_363 = 0x7C132428L;
        int32_t l_366 = (-1L);
        int i, j;
        (*p_71) &= ((((((!(g_238 = (-1L))) & ((g_84[0] | l_362) , p_70)) && ((l_363 = l_363) & (((((safe_mul_func_uint16_t_u_u(l_366, ((((l_367 != (g_368[2] = &g_157)) != p_68) & l_366) >= l_362))) , 0x576BE43EL) != p_68) , l_371) != p_71))) , g_227) & 0x3874F58ABC9BC23BLL) < p_70);
        for (g_229 = (-14); (g_229 != 8); g_229++)
        {
            uint16_t *l_385 = (void*)0;
            uint16_t **l_384 = &l_385;
            uint16_t ***l_383 = &l_384;
            uint16_t ****l_382 = &l_383;
            uint16_t *****l_381 = &l_382;
            int32_t l_395 = (-5L);
            int32_t l_399[10][1][9] = {{{(-6L),(-6L),0L,0xF03E3E7EL,0x70D78081L,(-1L),(-1L),1L,(-7L)}},{{(-1L),(-1L),0xA3E1B3F8L,(-1L),(-1L),(-1L),(-1L),0xA3E1B3F8L,(-1L)}},{{0xAFBB84C3L,6L,0L,(-7L),0xEA31313DL,0xF03E3E7EL,(-6L),(-1L),(-9L)}},{{0x106D1848L,(-1L),5L,(-1L),0xF67E6F34L,(-1L),0xA3E1B3F8L,0xF67E6F34L,0x4B97D02AL}},{{(-7L),(-7L),(-9L),(-6L),1L,(-3L),(-1L),(-6L),0xE351D107L}},{{0L,(-1L),0L,0L,0L,0L,(-1L),0L,(-1L)}},{{(-7L),1L,(-1L),(-1L),0x70D78081L,0xF03E3E7EL,0L,(-6L),(-6L)}},{{0x4B97D02AL,0L,0x106D1848L,0L,0x106D1848L,0L,0x4B97D02AL,0L,(-1L)}},{{0xF03E3E7EL,(-6L),6L,(-7L),(-6L),0x70D78081L,0xE351D107L,1L,0xE351D107L}},{{0xF67E6F34L,0x172D4697L,0xDB47F5A9L,0xDB47F5A9L,0x172D4697L,0xF67E6F34L,(-1L),0L,0x4B97D02AL}}};
            int i, j, k;
            (*p_71) = (p_70 == 65533UL);
            (*g_51) = l_374;
            if (((*p_71) = (*p_71)))
            {
                int32_t *l_375 = &l_363;
                int32_t *l_376[1][2][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                ++g_378;
                l_386 = l_381;
            }
            else
            {
                for (g_378 = 0; (g_378 <= 4); g_378 += 1)
                {
                    int32_t *l_388 = &l_363;
                    int32_t *l_389 = &l_363;
                    int32_t *l_390 = &l_366;
                    int32_t l_391 = 0x6DD8D7B7L;
                    int32_t *l_392 = &l_391;
                    int32_t *l_393[9][4] = {{(void*)0,(void*)0,&l_366,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_366,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_366,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    g_396++;
                    l_399[6][0][6] ^= (*p_71);
                }
            }
        }
    }
    if ((*l_374))
    {
        int32_t *l_400 = &l_394;
        int32_t *l_401 = &l_394;
        int32_t *l_402 = &l_394;
        int32_t l_403 = 0x2A196B49L;
        int32_t *l_404 = (void*)0;
        --g_405;
    }
    else
    {
        int32_t ***l_408 = &g_51;
        int32_t l_423 = 0x6B1574CEL;
        int32_t *l_427 = (void*)0;
        int32_t l_434 = 0x755FFD03L;
        int32_t l_441 = 0L;
        int32_t l_487 = 1L;
        uint16_t *l_502 = &g_98;
        uint16_t **l_501 = &l_502;
        uint16_t ***l_500 = &l_501;
        uint16_t ****l_499 = &l_500;
        int16_t ***l_526 = &l_367;
        int16_t ****l_525 = &l_526;
        uint32_t l_563[7] = {0x3E8A9B76L,0x3E8A9B76L,0x2DA62468L,0x3E8A9B76L,0x3E8A9B76L,0x2DA62468L,0x3E8A9B76L};
        int32_t *l_631[10][6][4] = {{{(void*)0,&l_441,&l_441,&l_394},{&l_394,&l_422[3],&l_422[2],&l_441},{&l_423,&l_422[2],&l_422[2],&l_423},{&l_394,(void*)0,&l_441,&l_487},{(void*)0,(void*)0,&l_487,&l_487},{&l_487,&l_487,&g_418[0][1][0],&l_487}},{{&l_422[2],(void*)0,&l_422[3],&l_487},{&l_394,(void*)0,&l_487,&l_423},{&l_422[3],&l_422[2],&l_441,&l_441},{&l_422[3],&l_422[3],&l_487,&l_394},{&l_394,&l_441,&l_422[3],(void*)0},{&l_422[2],(void*)0,&g_418[0][1][0],&l_422[3]}},{{&l_487,(void*)0,&l_487,(void*)0},{(void*)0,&l_441,&l_441,&l_394},{&l_394,&l_422[3],&l_422[2],&l_441},{&l_423,&l_422[2],&l_422[2],&l_423},{&l_394,(void*)0,&l_441,&l_487},{(void*)0,(void*)0,&l_487,&l_487}},{{&l_487,&l_487,&g_418[0][1][0],&l_487},{&l_422[2],(void*)0,&l_422[3],&l_487},{&l_394,(void*)0,(void*)0,&l_422[3]},{&l_487,&l_423,&l_422[2],&l_422[2]},{&l_487,&l_487,(void*)0,(void*)0},{&l_487,&l_422[2],&l_487,(void*)0}},{{&l_423,&l_394,&l_394,&l_487},{&l_441,&l_394,&l_441,(void*)0},{&l_394,&l_422[2],&g_418[0][1][0],(void*)0},{(void*)0,&l_487,&l_423,&l_422[2]},{&l_422[3],&l_423,&l_423,&l_422[3]},{(void*)0,(void*)0,&g_418[0][1][0],&l_441}},{{&l_394,&l_441,&l_441,(void*)0},{&l_441,(void*)0,&l_394,(void*)0},{&l_423,&l_441,&l_487,&l_441},{&l_487,(void*)0,(void*)0,&l_422[3]},{&l_487,&l_423,&l_422[2],&l_422[2]},{&l_487,&l_487,(void*)0,(void*)0}},{{&l_487,&l_422[2],&l_487,(void*)0},{&l_423,&l_394,&l_394,&l_487},{&l_441,&l_394,&l_441,(void*)0},{&l_394,&l_422[2],&g_418[0][1][0],(void*)0},{(void*)0,&l_487,&l_423,&l_422[2]},{&l_422[3],&l_423,&l_423,&l_422[3]}},{{(void*)0,(void*)0,&g_418[0][1][0],&l_441},{&l_394,&l_441,&l_441,(void*)0},{&l_441,(void*)0,&l_394,(void*)0},{&l_423,&l_441,&l_487,&l_441},{&l_487,(void*)0,(void*)0,&l_422[3]},{&l_487,&l_423,&l_422[2],&l_422[2]}},{{&l_487,&l_487,(void*)0,(void*)0},{&l_487,&l_422[2],&l_487,(void*)0},{&l_423,&l_394,&l_394,&l_487},{&l_441,&l_394,&l_441,(void*)0},{&l_394,&l_422[2],&g_418[0][1][0],(void*)0},{(void*)0,&l_487,&l_423,&l_422[2]}},{{&l_422[3],&l_423,&l_423,&l_422[3]},{(void*)0,(void*)0,&g_418[0][1][0],&l_441},{&l_394,&l_441,&l_441,(void*)0},{&l_441,(void*)0,&l_394,(void*)0},{&l_423,&l_441,&l_487,&l_441},{&l_487,(void*)0,(void*)0,&l_422[3]}}};
        const int16_t *l_654 = (void*)0;
        int8_t l_703 = 0x72L;
        int64_t *l_745[7][7] = {{&l_724,&g_351[1],&l_724,&g_351[1],&g_351[1],&l_724,&g_351[1]},{&g_351[6],&g_170,&l_554,&l_554,&g_170,&g_351[6],&g_170},{&l_724,&g_351[1],&g_351[1],&l_724,&g_351[1],&l_724,&g_351[1]},{&g_351[1],&g_351[1],&g_351[6],&l_554,&g_351[6],&g_351[1],&g_351[1]},{&g_351[1],&g_351[1],(void*)0,&g_351[1],&g_351[1],&g_351[1],&l_724},{&l_554,&g_351[1],&l_554,&l_554,&l_554,&l_554,&g_351[1]},{&l_724,&g_351[1],&g_351[1],&g_351[1],&g_351[1],&l_724,&g_351[1]}};
        int64_t l_755 = 0xB383F4DC86955E5BLL;
        int8_t l_811 = 0x23L;
        int32_t l_853 = 0xF1EB54E6L;
        uint32_t l_854 = 0xF633FD2AL;
        uint8_t l_883 = 6UL;
        uint64_t l_910 = 0x82E6DD33143F9CC9LL;
        int i, j, k;
        g_410 ^= (((*l_408) = &p_71) == (g_409 = &g_52));
    }
    return p_70;
}







static const uint32_t func_73(uint32_t p_74, int32_t ** p_75, uint64_t p_76, int8_t p_77)
{
    uint64_t *l_83 = &g_84[0];
    int32_t l_106 = 0xFD9B51ECL;
    int32_t l_213 = 0xD21332A2L;
    int32_t l_226 = 0xC685E78BL;
    int32_t l_228[8] = {1L,6L,1L,1L,6L,1L,1L,6L};
    uint8_t *l_246 = &g_56;
    int8_t *l_340 = &g_95;
    const uint16_t ****l_344 = &g_265;
    const uint16_t *****l_345[9][8] = {{&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8]},{&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8]},{&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8]},{&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8]},{&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8]},{&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8]},{&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8]},{&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8]},{&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8],&g_324[2][5][8]}};
    const uint16_t ****l_346 = &g_265;
    uint16_t *l_350[3][1][4] = {{{(void*)0,&g_98,(void*)0,&g_98}},{{(void*)0,&g_98,(void*)0,&g_98}},{{(void*)0,&g_98,(void*)0,&g_98}}};
    uint16_t **l_349 = &l_350[2][0][2];
    uint16_t *** const l_348 = &l_349;
    uint16_t *** const *l_347 = &l_348;
    int i, j, k;
    if (((safe_add_func_uint64_t_u_u(((*l_83) = 1UL), 0xB3BD830BF04B2B3ALL)) && p_77))
    {
        int64_t l_99[2][7] = {{1L,0xEB022B26CBFC796DLL,0xEB022B26CBFC796DLL,1L,0xEB022B26CBFC796DLL,0xEB022B26CBFC796DLL,1L},{(-1L),0x318E2BB11FE8BE9CLL,(-1L),(-1L),0x318E2BB11FE8BE9CLL,(-1L),(-1L)}};
        int32_t l_104 = (-1L);
        int16_t *l_161 = &g_158[0][0][1];
        int64_t *l_169 = &g_170;
        int64_t l_195 = 0xA7FF29F3A5184A0FLL;
        int32_t *l_317[6][1] = {{&l_228[6]},{&l_228[6]},{&l_226},{&l_228[6]},{&l_228[6]},{&l_226}};
        int i, j;
        for (p_77 = 0; (p_77 >= 0); p_77 -= 1)
        {
            int16_t l_101 = 0x9B7BL;
            uint8_t l_107 = 0xC9L;
            uint32_t l_127 = 4294967294UL;
            uint16_t *l_142 = (void*)0;
            int32_t l_171 = (-10L);
            uint16_t ** const l_270 = &l_142;
            uint16_t ** const *l_269 = &l_270;
            int32_t *l_310 = &l_106;
            int32_t *l_311 = &l_226;
            int32_t *l_312 = (void*)0;
            int32_t *l_313 = &l_228[6];
            int i;
            if ((g_84[p_77] >= ((g_85 = &p_76) != &g_84[p_77])))
            {
                int64_t l_87 = 0x00F1D91A4AC155EALL;
                const uint16_t l_92 = 0x464CL;
                int8_t *l_93 = (void*)0;
                int8_t *l_94[3][7] = {{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95}};
                int32_t l_96 = 0xA37A5474L;
                uint16_t *l_97[3];
                int16_t *l_105[5] = {&l_101,&l_101,&l_101,&l_101,&l_101};
                int32_t *l_150 = &l_104;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_97[i] = &g_98;
                if ((l_87 >= (p_76 ^= ((safe_mul_func_uint16_t_u_u((l_99[1][1] = ((safe_mod_func_int64_t_s_s(g_56, l_92)) != (g_84[p_77] >= (l_96 = ((g_85 = &g_86) != &p_76))))), (l_106 = (g_86 ^ (!((((l_101 == (safe_lshift_func_int8_t_s_s(p_77, 3))) , (void*)0) == &p_76) ^ l_104)))))) < (-4L)))))
                {
                    int32_t *l_108 = &l_96;
                    int16_t * const l_118 = &l_101;
                    int64_t *l_125 = &l_99[0][4];
                    int32_t *l_126 = &l_104;
                    (*l_108) = l_107;
                    if (l_104)
                    {
                        uint16_t **l_110 = &l_97[1];
                        uint16_t ***l_109 = &l_110;
                        (*l_109) = &l_97[0];
                        (*g_51) = &l_106;
                        (*p_75) = &l_106;
                    }
                    else
                    {
                        uint16_t l_111 = 65531UL;
                        (*l_108) = (l_111 | p_76);
                    }
                    l_127 |= ((*l_126) = (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((((l_118 == g_119[4][0][5]) , (safe_mod_func_int64_t_s_s((((*l_108) = 0xC44AE9DAL) == ((*g_85) | ((l_87 || g_56) <= (((*l_125) = g_86) == (((&g_95 == (void*)0) , l_106) <= g_72[6]))))), g_84[p_77]))) || l_96), 5)), g_98)) >= p_74), p_77)));
                }
                else
                {
                    uint8_t l_134 = 0xDAL;
                    uint32_t l_145 = 18446744073709551615UL;
                    for (l_101 = 0; (l_101 <= 24); ++l_101)
                    {
                        int32_t *l_135 = &l_96;
                        uint16_t *l_146[9][9][2] = {{{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{(void*)0,(void*)0},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98}},{{&g_98,(void*)0},{(void*)0,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{(void*)0,(void*)0},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98}},{{(void*)0,&g_98},{(void*)0,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98}},{{(void*)0,&g_98},{(void*)0,&g_98},{(void*)0,&g_98},{(void*)0,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98}},{{&g_98,&g_98},{&g_98,&g_98},{(void*)0,&g_98},{(void*)0,&g_98},{(void*)0,&g_98},{(void*)0,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98}},{{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{(void*)0,&g_98},{(void*)0,&g_98},{(void*)0,&g_98},{(void*)0,&g_98},{&g_98,&g_98}},{{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{(void*)0,&g_98},{(void*)0,&g_98},{(void*)0,&g_98}},{{(void*)0,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{(void*)0,&g_98}},{{(void*)0,&g_98},{(void*)0,&g_98},{(void*)0,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98},{&g_98,&g_98}}};
                        int32_t *l_147 = &l_104;
                        int i, j, k;
                        (*l_147) ^= ((safe_add_func_uint16_t_u_u((l_134 == ((void*)0 != l_135)), ((0xEC0817FF2A7570BALL != (((safe_lshift_func_uint16_t_u_s(1UL, (l_96 &= 0xD60FL))) == p_74) , (((safe_sub_func_int64_t_s_s((safe_add_func_int16_t_s_s((l_142 != ((safe_lshift_func_int8_t_s_s((((-8L) && l_96) , l_145), 5)) , l_146[5][6][1])), l_134)), p_77)) != p_76) & 7UL))) >= p_76))) | 0x8A27L);
                        return p_77;
                    }
                }
                (*l_150) = (safe_sub_func_int32_t_s_s(3L, 8UL));
            }
            else
            {
                return p_77;
            }
            for (l_106 = 0; (l_106 != 26); ++l_106)
            {
                int32_t l_203 = 0x53962AE5L;
                int32_t l_244 = 0x11807826L;
                const uint16_t ***l_268 = &g_266;
            }
            ++g_314;
            if (l_213)
                continue;
        }
        l_106 = l_99[1][4];
        --g_318;
    }
    else
    {
        const uint16_t ****l_322 = (void*)0;
        const uint16_t *****l_321[10] = {&l_322,(void*)0,&l_322,(void*)0,&l_322,(void*)0,&l_322,(void*)0,&l_322,(void*)0};
        int i;
        g_323[0] = l_321[7];
    }
    g_351[1] = (p_76 & (safe_mul_func_uint16_t_u_u(((!((safe_mul_func_int8_t_s_s(((**p_75) | 0UL), (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s(l_226, (safe_add_func_int8_t_s_s(((*l_340) = (safe_add_func_int32_t_s_s((&g_84[0] != (void*)0), p_74))), (p_76 || (((!(safe_sub_func_int64_t_s_s(((l_346 = l_344) != l_347), p_76))) >= 4L) & 0xC6FAL)))))), 6)), 0UL)))) && 0UL)) | 0xBD3B3BA4L), (*g_157))));
    return p_77;
}







static uint64_t func_78(int32_t * p_79)
{
    uint32_t l_80 = 0xDD1892F8L;
    return l_80;
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
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_56, "g_56", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_158[i][j][k], "g_158[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_303[i][j], "g_303[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_351[i], "g_351[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_418[i][j][k], "g_418[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_553, "g_553", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_1096, "g_1096", print_hash_value);
    transparent_crc(g_1262, "g_1262", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1321[i], "g_1321[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1411[i][j][k], "g_1411[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1779, "g_1779", print_hash_value);
    transparent_crc(g_1870, "g_1870", print_hash_value);
    transparent_crc(g_2113, "g_2113", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2117[i], "g_2117[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2440[i], "g_2440[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2518, "g_2518", print_hash_value);
    transparent_crc(g_2529, "g_2529", print_hash_value);
    transparent_crc(g_2530, "g_2530", print_hash_value);
    transparent_crc(g_2531, "g_2531", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2532[i][j], "g_2532[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2533, "g_2533", print_hash_value);
    transparent_crc(g_2534, "g_2534", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2535[i][j], "g_2535[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2823, "g_2823", print_hash_value);
    transparent_crc(g_2859, "g_2859", print_hash_value);
    transparent_crc(g_2876, "g_2876", print_hash_value);
    transparent_crc(g_2897, "g_2897", print_hash_value);
    transparent_crc(g_3048, "g_3048", print_hash_value);
    transparent_crc(g_3071, "g_3071", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_3314[i][j], "g_3314[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3421, "g_3421", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_3491[i][j][k], "g_3491[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
