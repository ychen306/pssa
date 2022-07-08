// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = DA7F1A68
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
   unsigned f0 : 10;
   const unsigned f1 : 25;
   signed f2 : 24;
   unsigned f3 : 3;
   signed f4 : 8;
   signed f5 : 1;
   signed f6 : 28;
   const unsigned f7 : 31;
   unsigned f8 : 6;
};
#pragma pack(pop)

union U1 {
   int32_t f0;
};


static int32_t g_3 = (-1L);
static int32_t *g_2[6] = {&g_3,&g_3,&g_3,&g_3,&g_3,&g_3};
static int8_t g_27 = 1L;
static uint64_t g_30 = 18446744073709551615UL;
static uint8_t g_40 = 0x25L;
static union U1 g_59 = {0x9A74B103L};
static uint32_t g_97 = 0x49688583L;
static int16_t g_101[6] = {1L,1L,1L,1L,1L,1L};
static struct S0 g_112 = {30,5078,2332,0,2,-0,14417,25608,0};
static uint16_t g_118 = 3UL;
static int16_t g_130 = 0L;
static int8_t g_142 = (-1L);
static int64_t g_167[8][6] = {{0xAF18FED6AD9D9C32LL,0xB3D9BBB440E12390LL,0x23D82C60171FE638LL,0x23D82C60171FE638LL,0xB3D9BBB440E12390LL,0xAF18FED6AD9D9C32LL},{0x23D82C60171FE638LL,0xB3D9BBB440E12390LL,0xAF18FED6AD9D9C32LL,1L,(-1L),0L},{0L,0L,(-7L),0L,0L,0xB3D9BBB440E12390LL},{0L,0x23D82C60171FE638LL,0L,1L,0x75D76A2BAD97F3C7LL,0x75D76A2BAD97F3C7LL},{0x23D82C60171FE638LL,(-1L),(-1L),0x23D82C60171FE638LL,(-7L),0x75D76A2BAD97F3C7LL},{0xAF18FED6AD9D9C32LL,0x75D76A2BAD97F3C7LL,0L,0xB3D9BBB440E12390LL,0x75D76A2BAD97F3C7LL,0x23D82C60171FE638LL},{0xB3D9BBB440E12390LL,1L,0xB3D9BBB440E12390LL,0L,0x75D76A2BAD97F3C7LL,0xAF18FED6AD9D9C32LL},{0xBA1BEA94EF2FCB7DLL,0L,(-7L),0xB3D9BBB440E12390LL,0xB3D9BBB440E12390LL,(-7L)}};
static uint32_t g_171 = 0xCF8C0091L;
static uint64_t g_279 = 0x6935B74068643F58LL;
static int32_t **g_284 = &g_2[2];
static int32_t ***g_283 = &g_284;
static uint32_t * const g_288 = &g_97;
static uint32_t * const *g_287 = &g_288;
static uint32_t * const ** const g_286 = &g_287;
static uint32_t * const **g_290 = &g_287;
static uint8_t g_322 = 3UL;
static uint32_t *g_334 = &g_97;
static uint32_t **g_333 = &g_334;
static const int32_t *g_450 = &g_3;
static const int32_t ** const g_449 = &g_450;
static const int32_t ** const *g_448 = &g_449;
static const int32_t ** const **g_447[2] = {&g_448,&g_448};
static const int32_t ** const **g_453[8][5] = {{&g_448,&g_448,&g_448,&g_448,&g_448},{&g_448,&g_448,(void*)0,&g_448,&g_448},{&g_448,&g_448,&g_448,&g_448,&g_448},{&g_448,&g_448,&g_448,&g_448,&g_448},{&g_448,&g_448,(void*)0,&g_448,&g_448},{&g_448,&g_448,&g_448,&g_448,&g_448},{&g_448,&g_448,&g_448,&g_448,&g_448},{&g_448,&g_448,(void*)0,&g_448,&g_448}};
static int32_t * const *g_456[7][9][4] = {{{&g_2[5],&g_2[2],&g_2[2],&g_2[2]},{&g_2[0],&g_2[2],(void*)0,&g_2[2]},{&g_2[3],&g_2[2],&g_2[2],&g_2[2]},{&g_2[2],&g_2[2],(void*)0,&g_2[2]},{&g_2[1],&g_2[2],(void*)0,&g_2[2]},{(void*)0,&g_2[2],&g_2[2],(void*)0},{&g_2[4],&g_2[0],&g_2[5],&g_2[2]},{&g_2[2],&g_2[2],&g_2[2],&g_2[1]},{&g_2[0],&g_2[2],&g_2[2],&g_2[2]}},{{&g_2[4],&g_2[1],&g_2[2],&g_2[2]},{&g_2[5],&g_2[2],(void*)0,(void*)0},{(void*)0,&g_2[4],&g_2[0],&g_2[3]},{&g_2[2],&g_2[2],&g_2[2],(void*)0},{&g_2[2],(void*)0,(void*)0,&g_2[2]},{(void*)0,&g_2[4],&g_2[2],&g_2[1]},{&g_2[5],&g_2[5],&g_2[5],&g_2[2]},{&g_2[3],&g_2[2],&g_2[3],(void*)0},{&g_2[5],&g_2[2],&g_2[2],&g_2[2]}},{{(void*)0,&g_2[2],&g_2[2],&g_2[2]},{&g_2[5],&g_2[2],&g_2[3],&g_2[1]},{&g_2[3],&g_2[2],&g_2[5],&g_2[3]},{&g_2[5],&g_2[3],&g_2[2],&g_2[2]},{(void*)0,(void*)0,(void*)0,&g_2[2]},{&g_2[2],&g_2[2],&g_2[2],(void*)0},{&g_2[2],&g_2[5],&g_2[0],&g_2[2]},{(void*)0,&g_2[2],(void*)0,&g_2[2]},{&g_2[5],&g_2[2],&g_2[2],&g_2[3]}},{{&g_2[4],(void*)0,&g_2[2],&g_2[2]},{&g_2[0],&g_2[3],&g_2[2],(void*)0},{&g_2[2],&g_2[2],&g_2[5],&g_2[2]},{&g_2[4],(void*)0,&g_2[2],&g_2[2]},{(void*)0,(void*)0,(void*)0,&g_2[2]},{&g_2[1],&g_2[4],(void*)0,&g_2[2]},{&g_2[2],&g_2[0],&g_2[2],&g_2[1]},{&g_2[5],&g_2[2],&g_2[1],&g_2[5]},{&g_2[2],(void*)0,&g_2[5],&g_2[2]}},{{(void*)0,&g_2[2],&g_2[5],(void*)0},{&g_2[2],&g_2[2],(void*)0,(void*)0},{&g_2[4],&g_2[5],&g_2[2],&g_2[2]},{&g_2[2],&g_2[5],&g_2[1],&g_2[2]},{&g_2[2],(void*)0,(void*)0,&g_2[2]},{&g_2[5],&g_2[5],&g_2[2],&g_2[5]},{(void*)0,&g_2[2],&g_2[3],&g_2[0]},{&g_2[2],&g_2[2],&g_2[1],&g_2[0]},{&g_2[2],&g_2[3],(void*)0,&g_2[2]}},{{&g_2[3],&g_2[2],&g_2[2],&g_2[0]},{&g_2[2],&g_2[5],(void*)0,&g_2[5]},{&g_2[4],&g_2[5],&g_2[2],&g_2[2]},{&g_2[2],&g_2[2],&g_2[2],&g_2[2]},{(void*)0,&g_2[5],(void*)0,&g_2[2]},{(void*)0,&g_2[5],&g_2[2],&g_2[0]},{&g_2[2],&g_2[2],&g_2[2],(void*)0},{&g_2[4],&g_2[2],(void*)0,&g_2[2]},{&g_2[2],(void*)0,&g_2[2],&g_2[2]}},{{&g_2[3],(void*)0,(void*)0,&g_2[1]},{&g_2[2],&g_2[2],&g_2[1],&g_2[5]},{&g_2[2],(void*)0,&g_2[3],&g_2[2]},{(void*)0,&g_2[4],&g_2[2],(void*)0},{&g_2[5],&g_2[2],(void*)0,&g_2[2]},{&g_2[2],&g_2[5],&g_2[1],&g_2[2]},{&g_2[2],&g_2[2],&g_2[2],&g_2[2]},{&g_2[4],&g_2[2],(void*)0,&g_2[2]},{&g_2[2],&g_2[5],&g_2[5],&g_2[2]}}};
static int32_t * const **g_455[10] = {&g_456[2][5][3],&g_456[2][5][3],&g_456[2][5][3],&g_456[2][5][3],&g_456[2][5][3],&g_456[2][5][3],&g_456[2][5][3],&g_456[2][5][3],&g_456[2][5][3],&g_456[2][5][3]};
static int32_t * const ***g_454 = &g_455[6];
static int64_t g_485 = 0x7F5C01F232201C15LL;
static uint16_t g_495[6] = {0x1431L,0x1431L,65534UL,0x1431L,0x1431L,65534UL};
static uint8_t g_526 = 1UL;
static const uint16_t g_533 = 0UL;
static uint16_t *g_545[1] = {&g_118};
static union U1 g_569 = {0x8DF2D374L};
static int8_t *g_571[6] = {&g_27,&g_27,&g_27,&g_27,&g_27,&g_27};
static int8_t **g_570 = &g_571[2];
static const int8_t *g_654 = &g_142;
static const int8_t * const *g_653 = &g_654;
static int32_t g_688 = 0x9764D1E5L;
static int64_t *g_714 = &g_485;
static union U1 *g_781 = &g_569;
static uint16_t **g_803 = &g_545[0];
static int32_t *g_854 = &g_569.f0;
static union U1 **g_957 = &g_781;
static int16_t g_1010 = 0x3566L;
static const union U1 g_1036 = {0xA3F73E87L};
static int32_t *g_1119 = &g_688;
static int32_t ** const g_1118 = &g_1119;
static int32_t ** const *g_1117 = &g_1118;
static int32_t ** const **g_1116 = &g_1117;
static int32_t ** const ***g_1115 = &g_1116;
static const uint16_t g_1192[5] = {0x49CEL,0x49CEL,0x49CEL,0x49CEL,0x49CEL};
static uint64_t *g_1198 = &g_279;
static uint64_t **g_1197 = &g_1198;
static uint64_t ***g_1196 = &g_1197;
static uint64_t ****g_1195 = &g_1196;
static int32_t g_1219[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint32_t g_1223 = 0UL;
static uint32_t g_1263 = 5UL;
static int32_t ****g_1292 = &g_283;
static int32_t **** const *g_1291[5] = {&g_1292,&g_1292,&g_1292,&g_1292,&g_1292};
static struct S0 **g_1423 = (void*)0;
static int32_t g_1544 = 0x30A46C1FL;
static uint16_t g_1562 = 65526UL;
static int32_t g_1616[7] = {0x17BE006BL,0x17BE006BL,0x17BE006BL,0x17BE006BL,0x17BE006BL,0x17BE006BL,0x17BE006BL};
static uint32_t g_1710 = 6UL;
static const int8_t **g_1720 = &g_654;
static const int8_t ***g_1719 = &g_1720;
static int8_t g_1747 = 0x69L;
static int16_t g_1766 = 0x5AF4L;
static int32_t g_1820 = (-3L);
static uint8_t g_1825 = 1UL;
static uint32_t g_1829 = 0xF6A1B6A7L;
static uint32_t g_1887[1][5][4] = {{{18446744073709551613UL,0x103F5F3BL,18446744073709551613UL,18446744073709551613UL},{0x103F5F3BL,0x103F5F3BL,1UL,0x103F5F3BL},{0x103F5F3BL,18446744073709551613UL,18446744073709551613UL,0x103F5F3BL},{18446744073709551613UL,0x103F5F3BL,18446744073709551613UL,18446744073709551613UL},{0x103F5F3BL,0x103F5F3BL,1UL,0x103F5F3BL}}};
static uint64_t *****g_1902 = &g_1195;
static uint64_t g_2109 = 0xB2AE449370665BF2LL;
static int32_t g_2156[6][5] = {{0xECA905A2L,3L,3L,0xECA905A2L,0x9196A7B8L},{0x894A0BB1L,0xECA905A2L,0xECA905A2L,0x894A0BB1L,0x385E6C6BL},{0x894A0BB1L,0xECA905A2L,0xECA905A2L,0x894A0BB1L,0x385E6C6BL},{0x894A0BB1L,0xECA905A2L,0xECA905A2L,0x894A0BB1L,0x385E6C6BL},{0x894A0BB1L,0xECA905A2L,0xECA905A2L,0x894A0BB1L,0x385E6C6BL},{0x894A0BB1L,0xECA905A2L,0xECA905A2L,0x894A0BB1L,0x385E6C6BL}};
static int8_t g_2180 = (-1L);
static int32_t *g_2265 = &g_3;
static uint64_t * const *g_2268[10][5][1] = {{{(void*)0},{&g_1198},{&g_1198},{&g_1198},{&g_1198}},{{&g_1198},{(void*)0},{(void*)0},{&g_1198},{(void*)0}},{{(void*)0},{&g_1198},{&g_1198},{&g_1198},{&g_1198}},{{&g_1198},{(void*)0},{(void*)0},{&g_1198},{(void*)0}},{{(void*)0},{&g_1198},{&g_1198},{&g_1198},{&g_1198}},{{&g_1198},{(void*)0},{(void*)0},{&g_1198},{(void*)0}},{{(void*)0},{&g_1198},{&g_1198},{&g_1198},{&g_1198}},{{&g_1198},{(void*)0},{(void*)0},{&g_1198},{(void*)0}},{{(void*)0},{&g_1198},{&g_1198},{&g_1198},{&g_1198}},{{&g_1198},{(void*)0},{(void*)0},{&g_1198},{(void*)0}}};
static int64_t g_2293 = 0xE426DA7943A2B23CLL;
static uint16_t g_2321[5][8][2] = {{{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL}},{{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL}},{{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL}},{{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL}},{{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL}}};
static uint32_t g_2333 = 0xC482C0EEL;
static uint8_t g_2350[4] = {0UL,0UL,0UL,0UL};
static struct S0 ***g_2371 = &g_1423;
static int16_t g_2378 = 0x8E80L;



static union U1 func_1(void);
static int32_t * func_5(int32_t p_6, int32_t ** const p_7, int32_t * p_8, uint16_t p_9);
static int64_t func_13(uint8_t p_14, int32_t * p_15, const uint64_t p_16, int32_t ** p_17);
static uint8_t func_20(const int32_t * p_21);
static int32_t func_33(int32_t ** p_34, int32_t ** p_35, int32_t p_36);
static int32_t ** func_37(int64_t p_38);
static const union U1 func_48(uint32_t p_49, const uint64_t p_50, union U1 p_51);
static int8_t func_54(union U1 p_55, int32_t p_56, int16_t p_57, int32_t ** p_58);
static uint16_t func_62(int32_t p_63, uint64_t p_64, uint8_t p_65, int32_t p_66);
static uint64_t func_68(uint64_t p_69);
# 147 "<stdin>"
static union U1 func_1(void)
{
    int32_t **l_4 = &g_2[2];
    uint64_t l_10 = 7UL;
    int32_t *l_1819 = &g_1820;
    const struct S0 l_1821 = {4,2887,1188,1,3,-0,-12241,22899,4};
    uint8_t *l_1824 = &g_1825;
    int16_t *l_1828 = &g_1766;
    uint64_t **l_1831 = &g_1198;
    uint64_t ***l_1830 = &l_1831;
    uint32_t l_2154[1];
    int32_t *l_2155 = &g_2156[4][4];
    struct S0 *l_2165[10];
    struct S0 **l_2164 = &l_2165[1];
    union U1 l_2167 = {0x31836E10L};
    int32_t l_2169[10][1] = {{0x7ECC4FB8L},{0x652D1B45L},{0x7ECC4FB8L},{0x652D1B45L},{0x7ECC4FB8L},{0x652D1B45L},{0x7ECC4FB8L},{0x652D1B45L},{0x7ECC4FB8L},{0x652D1B45L}};
    int32_t *l_2204 = &g_1219[5];
    uint8_t l_2235 = 1UL;
    uint32_t l_2259 = 9UL;
    uint32_t l_2264 = 0x5E61BCABL;
    uint32_t ***l_2271 = &g_333;
    int8_t l_2337 = 1L;
    uint64_t l_2340 = 6UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_2154[i] = 0UL;
    for (i = 0; i < 10; i++)
        l_2165[i] = &g_112;
    (*l_4) = g_2[2];
    (**g_1117) = func_5(((0x37BBL | l_10) | (safe_div_func_int64_t_s_s(func_13((safe_lshift_func_uint8_t_u_u(func_20(&g_3), 1)), l_1819, ((l_1830 = ((((*l_1819) ^ (l_1821 , (safe_add_func_int16_t_s_s(((((((((*l_1828) = (((*l_1819) , ((*l_1824)--)) != 0x52L)) == 0x2489L) == (*l_1819)) < g_1829) != 0xBC0DB233E07AA698LL) >= 0UL) <= (*l_1819)), g_1544)))) , (*l_1819)) , (void*)0)) != &l_1831), &l_1819), l_2154[0]))), l_4, l_2155, (*l_2155));
    for (g_1820 = 0; (g_1820 == (-23)); g_1820--)
    {
        int32_t *l_2168 = &g_1616[3];
        int32_t l_2179 = 0xA97F0B12L;
        int32_t l_2182[1];
        uint8_t l_2183 = 1UL;
        int32_t *l_2186 = (void*)0;
        struct S0 l_2190 = {22,3283,604,0,-7,-0,-15807,43656,2};
        uint32_t ***l_2196[7][5][7] = {{{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,(void*)0},{&g_333,&g_333,&g_333,&g_333,(void*)0,(void*)0,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,(void*)0,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333}},{{&g_333,&g_333,&g_333,(void*)0,&g_333,(void*)0,(void*)0},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,(void*)0,&g_333,(void*)0,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,(void*)0},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333}},{{&g_333,&g_333,(void*)0,(void*)0,&g_333,&g_333,&g_333},{&g_333,(void*)0,&g_333,(void*)0,&g_333,(void*)0,(void*)0},{&g_333,(void*)0,&g_333,&g_333,&g_333,&g_333,(void*)0},{(void*)0,&g_333,&g_333,&g_333,&g_333,(void*)0,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,(void*)0}},{{&g_333,(void*)0,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,(void*)0,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,(void*)0,&g_333,&g_333,&g_333,(void*)0,&g_333},{&g_333,&g_333,&g_333,(void*)0,(void*)0,&g_333,&g_333}},{{&g_333,(void*)0,&g_333,(void*)0,(void*)0,&g_333,&g_333},{&g_333,&g_333,&g_333,(void*)0,&g_333,(void*)0,&g_333},{&g_333,&g_333,&g_333,(void*)0,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{(void*)0,(void*)0,&g_333,&g_333,&g_333,&g_333,&g_333}},{{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,&g_333,(void*)0,&g_333,(void*)0},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{(void*)0,(void*)0,(void*)0,&g_333,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333}},{{&g_333,&g_333,&g_333,(void*)0,&g_333,(void*)0,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,(void*)0,&g_333,&g_333,&g_333},{(void*)0,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,&g_333,(void*)0,&g_333,&g_333}}};
        uint32_t ****l_2195 = &l_2196[3][1][6];
        int16_t l_2233 = 0L;
        int8_t l_2234 = (-3L);
        uint64_t l_2241[6];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2182[i] = 0x6A456F66L;
        for (i = 0; i < 6; i++)
            l_2241[i] = 0x1FF75AEE60D347FALL;
        for (l_10 = 0; (l_10 >= 25); l_10 = safe_add_func_int64_t_s_s(l_10, 2))
        {
            struct S0 ***l_2166 = &l_2164;
            (*l_2155) &= (g_1423 == ((*l_2166) = l_2164));
        }
        if ((*l_1819))
        {
            return l_2167;
        }
        else
        {
            int32_t *l_2170 = (void*)0;
            int32_t *l_2171 = &g_688;
            int32_t *l_2172 = &g_2156[2][2];
            int32_t *l_2173 = &g_1616[3];
            int32_t *l_2174 = &g_2156[4][4];
            int32_t *l_2175 = (void*)0;
            int32_t *l_2176 = &g_1616[3];
            int32_t *l_2177 = &g_688;
            int32_t *l_2178[6][2];
            int32_t l_2181 = 0xB460A166L;
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 2; j++)
                    l_2178[i][j] = &l_2169[7][0];
            }
            (***g_1292) = l_2168;
            (*g_284) = (*g_1118);
            ++l_2183;
            (***g_1116) = l_2186;
        }
        if (((~(safe_lshift_func_int8_t_s_s((l_2190 , (**g_653)), 6))) > (0xB541L & (safe_div_func_int64_t_s_s((*l_2155), ((*g_654) ^ (safe_add_func_int16_t_s_s(g_1219[5], ((void*)0 == l_2195)))))))))
        {
            int32_t l_2201 = 0xF1FA6F63L;
            uint64_t **** const l_2202 = &g_1196;
            uint16_t *l_2203 = &g_118;
            struct S0 *l_2205 = &g_112;
            int8_t ** const l_2212 = &g_571[2];
            uint16_t l_2232 = 0x9CE7L;
            (***g_1292) = ((safe_mul_func_int16_t_s_s((((*l_1828) = ((*g_714) <= (safe_add_func_uint32_t_u_u(l_2201, (((*l_2203) = ((0xFC7DL < ((((***g_290) = (((l_2201 , l_2202) == (g_322 , l_2202)) && ((*l_1819) < g_142))) ^ (*l_1819)) && 0xC3D8L)) > (-2L))) <= l_2201))))) ^ l_2201), l_2201)) , l_2204);
            (*l_2164) = l_2205;
            l_2235 = (safe_rshift_func_int8_t_s_s(((*l_2155) != ((safe_mul_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((void*)0 == l_2212), ((l_2201 | ((8L || l_2201) < ((l_2233 |= ((safe_mod_func_uint16_t_u_u((((((*g_1198) = (((safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u((((*l_2155) & ((-6L) < ((safe_lshift_func_uint16_t_u_s(((l_2232 = (((*l_1828) = (~(((((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_118, g_112.f7)), (*g_654))) ^ (**g_570)) && 0x24L) > 9L) <= 0xA070L))) , l_2201)) != (*l_2204)), 8)) , (-3L)))) , l_2201), (*l_2168))) && 1L), 13)) >= 4294967293UL), l_2201)) < 0x01FB0335L), g_1829)) & 2L) || (*l_2204))) == 0x0B10F657D2A19D8DLL) , (*g_1198)) | (*g_714)), g_97)) < (-4L))) <= 0x02764208L))) || 0UL))) > 65533UL), l_2234)) , 0x6445L)), (**g_653)));
        }
        else
        {
            int32_t *l_2236 = (void*)0;
            int32_t *l_2237 = &g_2156[1][0];
            int32_t *l_2238 = &l_2182[0];
            int32_t *l_2239[2];
            int8_t l_2240 = 0x0DL;
            int i;
            for (i = 0; i < 2; i++)
                l_2239[i] = &l_2182[0];
            l_2241[4]++;
        }
        (*g_284) = &l_2169[6][0];
    }
    if (((safe_sub_func_int32_t_s_s(6L, (((**g_333) && ((*l_2155) && 2UL)) , ((safe_div_func_int64_t_s_s(((void*)0 != &l_4), 18446744073709551607UL)) | (safe_unary_minus_func_uint64_t_u((safe_div_func_uint64_t_u_u((((*l_1828) = ((safe_rshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((**g_1197) = (l_2259 , ((safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s(2L, 0xDFDC5FA4L)), (***g_286))) | (-7L)))), (*l_1819))), 254UL)) || l_2264), (*l_1819))) , 0xE3L) , g_1829), g_1562)) <= (*l_1819))) && (*l_2204)), (*l_2204))))))))) != g_526))
    {
        uint64_t * const *l_2266 = &g_1198;
        uint64_t * const **l_2267[2];
        int i;
        for (i = 0; i < 2; i++)
            l_2267[i] = &l_2266;
        (*g_449) = g_2265;
        (*g_2265) = 0L;
        g_2268[2][0][0] = l_2266;
    }
    else
    {
        int64_t *l_2269 = (void*)0;
        int64_t *l_2270 = &g_167[1][3];
        uint32_t ***l_2273 = (void*)0;
        uint32_t ****l_2272 = &l_2273;
        int64_t *l_2276[7] = {&g_167[6][5],&g_167[6][5],(void*)0,&g_167[6][5],&g_167[6][5],(void*)0,&g_167[6][5]};
        int32_t l_2278 = 0x80D186C8L;
        int8_t l_2298[1];
        int64_t l_2319 = 9L;
        int32_t l_2338 = (-2L);
        int64_t l_2345[3];
        int32_t l_2346 = (-2L);
        int i;
        for (i = 0; i < 1; i++)
            l_2298[i] = 6L;
        for (i = 0; i < 3; i++)
            l_2345[i] = 0xE0D85DCC5815B4C5LL;
        if ((((*l_2270) ^= (*g_714)) > ((l_2271 != ((*l_2272) = &g_333)) | 0x2C97804E31C67621LL)))
        {
            (*l_2204) = (safe_mod_func_int32_t_s_s(((void*)0 == l_2276[6]), (*l_2204)));
            for (g_142 = 0; (g_142 <= 0); g_142 += 1)
            {
                union U1 l_2277 = {1L};
                return l_2277;
            }
        }
        else
        {
            uint16_t l_2279[5][6];
            uint16_t *l_2282 = &g_1562;
            struct S0 ***l_2297 = &g_1423;
            uint64_t *l_2299 = (void*)0;
            int16_t l_2300 = (-1L);
            int8_t *l_2301 = &g_2180;
            int16_t l_2306 = 7L;
            int32_t l_2320 = (-8L);
            int64_t l_2383 = 0x79318AA5284081EDLL;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 6; j++)
                    l_2279[i][j] = 65535UL;
            }
            (*g_2265) = l_2278;
            (*g_2265) &= ((((*l_2301) |= ((l_2279[4][2] || ((safe_mul_func_int16_t_s_s((l_2279[4][0] == (--(*l_2282))), (+(((safe_mul_func_int16_t_s_s(((*l_1828) &= ((safe_unary_minus_func_uint16_t_u((~g_1616[4]))) > ((!(((((safe_rshift_func_int8_t_s_s((g_2293 != (*g_714)), 0)) < (((((safe_mul_func_uint16_t_u_u((+((l_2279[4][2] == (((*l_2297) = g_1423) != (void*)0)) && l_2298[0])), (-1L))) , (**g_1196)) != l_2299) || (*l_1819)) & l_2298[0])) != l_2279[4][3]) , &g_854) == &g_854)) & (*l_2204)))), l_2300)) == l_2279[2][3]) && (**g_570))))) | (*g_1198))) && 0x56028530L)) ^ l_2279[2][5]) != 0x254AL);
            for (g_485 = (-5); (g_485 > 25); g_485 = safe_add_func_int16_t_s_s(g_485, 2))
            {
                int8_t l_2309 = (-3L);
                int16_t *l_2329 = &g_101[0];
                int32_t l_2343 = 0L;
                uint8_t l_2347[5][6] = {{0xC6L,0UL,0UL,0xC6L,0UL,0UL},{0xC6L,0UL,0UL,0xC6L,0UL,0UL},{0xC6L,0UL,0UL,0xC6L,0UL,0UL},{0xC6L,0UL,0UL,0xC6L,0UL,0UL},{0xC6L,0UL,0UL,0xC6L,0UL,0UL}};
                struct S0 * const *l_2368 = &l_2165[1];
                struct S0 * const **l_2367 = &l_2368;
                int i, j;
                if ((safe_rshift_func_uint16_t_u_u((((l_2278 = (0x0C7BFA83L | l_2306)) <= (&g_453[7][4] == &g_447[1])) && (0L <= (safe_sub_func_int64_t_s_s(((*l_2270) = l_2309), (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_2279[4][2], (safe_div_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((safe_lshift_func_uint16_t_u_u(0x66B9L, l_2309)))), (*g_288))))), l_2319)))))), 15)))
                {
                    uint32_t l_2336 = 18446744073709551615UL;
                    g_2321[1][2][0]++;
                    for (g_1223 = 0; (g_1223 <= 1); g_1223 += 1)
                    {
                        int16_t l_2330 = (-1L);
                        int32_t *l_2339[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_2339[i] = &g_2156[4][4];
                        (*l_2204) = 0x99A68D69L;
                        (*l_2155) |= ((*l_2204) = ((safe_lshift_func_uint8_t_u_s(((((!18446744073709551614UL) > (*l_2204)) < (l_2329 == (void*)0)) , ((((l_2330 <= 0x09B283B4B798DF4DLL) == ((safe_add_func_uint64_t_u_u(((*g_1198) &= (++g_2333)), (g_112 , ((*l_2270) &= (l_2336 & 0x50024F6DA58D7D70LL))))) > 0x32L)) > (-4L)) | g_171)), (*g_654))) == l_2298[0]));
                        ++l_2340;
                    }
                }
                else
                {
                    int32_t *l_2344[10] = {&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3};
                    int i;
                    l_2343 = (-3L);
                    l_2347[0][5]--;
                    g_2350[0]++;
                    for (l_2306 = (-23); (l_2306 >= (-23)); l_2306--)
                    {
                        uint8_t l_2355 = 0xD4L;
                        ++l_2355;
                        (**g_448) = ((**g_283) = &l_2343);
                        if (l_2347[0][5])
                            break;
                    }
                }
                for (g_1544 = 0; (g_1544 <= (-7)); g_1544--)
                {
                    struct S0 ***l_2369[10] = {&l_2164,&l_2164,&l_2164,&l_2164,&l_2164,&l_2164,&l_2164,&l_2164,&l_2164,&l_2164};
                    int32_t l_2380[7][2][5] = {{{1L,1L,0x65F372E6L,0L,0x692F92BEL},{0x8901DACAL,0L,0L,0x8901DACAL,6L}},{{0x2EB0A1AFL,0L,(-1L),(-1L),0L},{6L,0L,0x3990AE0BL,0x45E16A52L,0x45E16A52L}},{{1L,1L,1L,(-1L),0x65F372E6L},{0x5B5896D5L,0x8901DACAL,0x45E16A52L,0x8901DACAL,0x5B5896D5L}},{{1L,0x2EB0A1AFL,1L,0L,1L},{6L,6L,0x45E16A52L,0x5B5896D5L,0L}},{{0x2EB0A1AFL,1L,1L,0x2EB0A1AFL,1L},{0x8901DACAL,0x5B5896D5L,0x3990AE0BL,0x3990AE0BL,0x5B5896D5L}},{{1L,1L,(-1L),0x65F372E6L,0x65F372E6L},{0L,6L,0L,0x3990AE0BL,0x45E16A52L}},{{0L,0x2EB0A1AFL,0x65F372E6L,0x2EB0A1AFL,0L},{0L,0x8901DACAL,6L,0x5B5896D5L,6L}}};
                    int i, j, k;
                    (*g_2265) = l_2320;
                    if ((safe_div_func_int8_t_s_s((***g_1719), ((*l_2204) & l_2345[2]))))
                    {
                        struct S0 ****l_2370 = &l_2369[6];
                        int32_t l_2379 = 0xA583B5FAL;
                        l_2380[5][1][4] = ((safe_unary_minus_func_int8_t_s((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_167[1][3], (l_2367 != (g_2371 = ((*l_2370) = l_2369[4]))))), ((((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((((*l_1828) = g_688) , (l_2345[2] , (0x3C2EL & (((safe_sub_func_int64_t_s_s(0xE919F614CAE8D20ALL, ((*g_714) > ((g_2378 >= (*****g_1902)) >= 0x0DA225B38493D40ELL)))) < 9UL) > (***g_1719))))), (*l_2155))) & l_2347[0][5]), l_2379)) & 0L) , (***g_1196)) || 0x14572CAAE911EA6DLL))))) ^ (*l_1819));
                    }
                    else
                    {
                        uint64_t l_2389 = 0xA3EBE08290AFDDB5LL;
                        int8_t *l_2394 = &l_2337;
                        (*l_2155) = l_2278;
                        if (l_2380[1][1][0])
                            continue;
                        (*l_2204) = ((*g_2265) &= ((*l_2155) &= l_2380[5][1][4]));
                        (*l_1819) = ((safe_rshift_func_uint8_t_u_s(l_2383, 6)) && (((safe_lshift_func_uint16_t_u_s(((*l_2204) , ((*g_714) & (g_167[4][5] = (!(1L > (((((*l_2394) |= (safe_sub_func_uint8_t_u_u(l_2389, ((safe_mod_func_int64_t_s_s((((*g_2265) = ((safe_mul_func_int16_t_s_s(((((*l_2301) = (***g_1719)) || ((l_2343 = ((*l_2282) = l_2389)) || (((***g_290) = (**g_287)) || 0x5BCB941CL))) > l_2380[2][0][0]), g_27)) , 0x34EDE82FL)) && (*g_2265)), l_2345[2])) , l_2343)))) && l_2298[0]) ^ 0xE590L) > (*l_1819))))))), g_1544)) , l_2389) > l_2380[1][1][0]));
                    }
                }
                (*l_2204) = l_2278;
            }
            (*g_284) = (**g_1117);
        }
    }
    return l_2167;
}







static int32_t * func_5(int32_t p_6, int32_t ** const p_7, int32_t * p_8, uint16_t p_9)
{
    for (g_1820 = 17; (g_1820 <= 24); ++g_1820)
    {
        int32_t *l_2159 = &g_1219[5];
        return l_2159;
    }
    return (*g_1118);
}







static int64_t func_13(uint8_t p_14, int32_t * p_15, const uint64_t p_16, int32_t ** p_17)
{
    int16_t l_1848 = 1L;
    int32_t l_1849 = 0x738AF881L;
    int32_t l_1851[4][3][1] = {{{1L},{0x32D8BD4FL},{0x8181E410L}},{{0x32D8BD4FL},{1L},{1L}},{{0x32D8BD4FL},{0x8181E410L},{0x32D8BD4FL}},{{1L},{1L},{0x32D8BD4FL}}};
    struct S0 *l_1888 = (void*)0;
    int8_t l_1897 = (-3L);
    union U1 *l_1901 = (void*)0;
    int32_t *l_1928[5][1][6] = {{{&l_1851[1][0][0],&l_1851[1][0][0],&g_1616[3],(void*)0,&g_688,&g_3}},{{&g_1616[3],&g_1616[3],&g_1616[3],&g_1616[3],&g_3,&g_1616[3]}},{{&g_1616[3],&g_1616[3],&g_1616[3],&g_1616[3],&l_1851[1][0][0],&g_3}},{{&l_1851[1][0][0],&g_1616[3],&g_1616[3],&l_1851[1][0][0],&g_1616[3],&g_1616[3]}},{{&l_1851[1][0][0],&g_1616[3],&g_1616[3],&l_1851[1][0][0],&g_1616[3],&g_1616[3]}}};
    uint32_t l_2051 = 0xED8787DBL;
    int64_t **l_2054 = &g_714;
    int16_t l_2106 = 0x10C4L;
    int32_t * const **l_2131[4][3];
    uint64_t *****l_2141 = &g_1195;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_2131[i][j] = (void*)0;
    }
lbl_1930:
    (**p_17) |= (l_1849 = ((safe_sub_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(p_16, (safe_add_func_uint16_t_u_u((4L >= ((safe_mod_func_int8_t_s_s(0xD0L, (safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((g_112 , (((*g_714) = 0x8E3F7D140446805DLL) | (((safe_sub_func_int8_t_s_s(l_1848, ((void*)0 != (*g_333)))) , ((((p_16 , g_30) ^ l_1848) & p_14) ^ 18446744073709551609UL)) && p_16))) != 0xF44558BDL), p_14)) | l_1848), l_1848)) >= l_1848), p_16)))) && 1UL)), l_1848)))) != 0L) < g_1766), l_1848)) | p_16));
    for (g_3 = 0; (g_3 <= 5); g_3 += 1)
    {
        uint16_t l_1850 = 0xCF6CL;
        int16_t l_1853 = 0xE6D7L;
        int32_t l_1875 = 1L;
        union U1 *l_1899 = &g_569;
        int32_t l_1956 = 1L;
        int32_t l_1960 = 0x1D6BE0BCL;
        struct S0 l_2030 = {1,5723,526,0,9,-0,-873,31941,1};
        uint64_t **l_2043 = &g_1198;
        uint32_t **l_2055 = (void*)0;
        uint16_t **l_2078[3][1];
        union U1 ***l_2100[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        union U1 ****l_2099 = &l_2100[1];
        uint16_t l_2103 = 0x90A5L;
        uint64_t *****l_2142[2];
        uint32_t l_2151 = 0x427ADFE7L;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_2078[i][j] = &g_545[0];
        }
        for (i = 0; i < 2; i++)
            l_2142[i] = &g_1195;
        for (g_118 = 0; (g_118 <= 5); g_118 += 1)
        {
            uint16_t l_1854 = 0x6A21L;
            int32_t l_1871 = (-3L);
            uint32_t * const ***l_1886 = &g_290;
            int32_t l_1953 = 5L;
            int32_t l_1954 = 0x3646CFECL;
            int32_t l_1955 = (-10L);
            int32_t l_1961 = (-3L);
            union U1 *** const l_1983 = &g_957;
            union U1 *** const *l_1982 = &l_1983;
            int16_t l_1997 = 0x0359L;
            uint64_t **l_2042[5] = {&g_1198,&g_1198,&g_1198,&g_1198,&g_1198};
            union U1 l_2086 = {0L};
            int32_t *** const l_2138 = &g_284;
            int i;
        }
        l_2151 &= (p_16 , (**p_17));
        for (g_569.f0 = (-14); (g_569.f0 > 12); g_569.f0++)
        {
            if (g_112.f7)
                goto lbl_1930;
        }
    }
    (*p_17) = (*p_17);
    return (*g_714);
}







static uint8_t func_20(const int32_t * p_21)
{
    uint32_t l_22[10][2][10] = {{{0UL,18446744073709551613UL,8UL,18446744073709551613UL,0UL,8UL,0UL,0UL,8UL,0UL},{0UL,1UL,1UL,0UL,18446744073709551615UL,0x136DC992L,0UL,0x136DC992L,18446744073709551615UL,0UL}},{{0x136DC992L,0UL,0x136DC992L,18446744073709551615UL,0UL,1UL,1UL,0UL,18446744073709551615UL,0x136DC992L},{0UL,0UL,8UL,0UL,18446744073709551613UL,8UL,18446744073709551613UL,0UL,8UL,0UL}},{{18446744073709551613UL,1UL,0x136DC992L,18446744073709551613UL,18446744073709551615UL,18446744073709551615UL,18446744073709551613UL,0x136DC992L,1UL,18446744073709551613UL},{0x136DC992L,0UL,1UL,18446744073709551615UL,0UL,18446744073709551615UL,1UL,0UL,0x136DC992L,0x136DC992L}},{{18446744073709551613UL,0UL,8UL,0UL,0UL,8UL,0UL,18446744073709551613UL,8UL,18446744073709551613UL},{0UL,1UL,18446744073709551615UL,0UL,18446744073709551615UL,1UL,0UL,0x136DC992L,0x136DC992L,0UL}},{{0x136DC992L,18446744073709551613UL,18446744073709551615UL,18446744073709551615UL,18446744073709551613UL,0x136DC992L,1UL,18446744073709551613UL,1UL,0x136DC992L},{0UL,18446744073709551613UL,8UL,18446744073709551613UL,0UL,8UL,0UL,0UL,8UL,0UL}},{{0UL,1UL,1UL,0UL,18446744073709551615UL,0x136DC992L,0UL,0x136DC992L,18446744073709551615UL,0UL},{0x136DC992L,0UL,0x136DC992L,18446744073709551615UL,0UL,1UL,1UL,0UL,18446744073709551615UL,0x136DC992L}},{{0UL,0UL,8UL,0UL,18446744073709551613UL,8UL,18446744073709551613UL,0UL,8UL,0UL},{18446744073709551613UL,1UL,0x136DC992L,18446744073709551613UL,18446744073709551615UL,18446744073709551615UL,18446744073709551613UL,0x136DC992L,1UL,18446744073709551613UL}},{{0x136DC992L,0UL,1UL,18446744073709551615UL,0UL,18446744073709551615UL,1UL,0UL,0x136DC992L,0x136DC992L},{18446744073709551613UL,0UL,8UL,0UL,0UL,8UL,0UL,18446744073709551613UL,8UL,18446744073709551613UL}},{{0UL,1UL,18446744073709551615UL,0UL,18446744073709551615UL,1UL,0x136DC992L,18446744073709551615UL,18446744073709551615UL,0x136DC992L},{18446744073709551615UL,18446744073709551615UL,0x5378470EL,0x5378470EL,18446744073709551615UL,18446744073709551615UL,8UL,18446744073709551615UL,8UL,18446744073709551615UL}},{{1UL,18446744073709551615UL,0UL,18446744073709551615UL,1UL,0UL,0x136DC992L,0x136DC992L,0UL,1UL},{1UL,8UL,8UL,1UL,0x5378470EL,18446744073709551615UL,1UL,18446744073709551615UL,0x5378470EL,1UL}}};
    int32_t l_25[9][6][4] = {{{0x50EBF085L,0x0D6158F8L,0xF3E2E166L,1L},{0xA64A9B53L,0x16DC91E8L,0x52C43DA4L,0x68BE3E2CL},{0x7B06F861L,0xCF746B32L,0xCF746B32L,0x7B06F861L},{0x6A58390AL,(-9L),0L,0x535718A8L},{0xFFF323E6L,(-1L),0L,0xB389E767L},{0x0D6158F8L,0x50EBF085L,4L,0xB389E767L}},{{0xE874D4A7L,(-1L),0xA91E53BDL,0x535718A8L},{0xA4D2C643L,(-9L),1L,0x7B06F861L},{0L,0xCF746B32L,(-1L),0x68BE3E2CL},{0xBB8686B4L,0x16DC91E8L,0xA2F617A9L,1L},{0xE2A90786L,0x0D6158F8L,(-2L),0xCD4EE3B9L},{0L,1L,0xDDA6A1E0L,0x6A37BD55L}},{{3L,(-1L),4L,7L},{0L,0xCCD29D3EL,(-3L),(-1L)},{(-1L),8L,0x0D94485EL,(-1L)},{0L,0xE2A90786L,4L,0x0D94485EL},{0x7B06F861L,0x16DC91E8L,0xB8319B88L,(-9L)},{0L,0xBB8686B4L,0x20B275CFL,0xA4D2C643L}},{{0x6A58390AL,0xCCD29D3EL,0xA2F617A9L,4L},{(-9L),0xB6322A57L,8L,0xB389E767L},{0L,0L,0xF3E2E166L,0xCD4EE3B9L},{(-10L),0x13E458C4L,0xA91E53BDL,0xBB8686B4L},{0xA64A9B53L,0xFFF323E6L,9L,0xB874BDBAL},{0x0D6158F8L,0xCF746B32L,0xA2F617A9L,(-9L)}},{{0xCF746B32L,0x13E458C4L,0L,0xA2EEDF21L},{0xE2A90786L,0L,0x1B3E233DL,0xB389E767L},{0x7B06F861L,1L,7L,0x6A37BD55L},{0xE874D4A7L,0xCCD29D3EL,0xF3E2E166L,(-10L)},{(-1L),(-9L),(-3L),(-9L)},{0xCCD29D3EL,0x7FD8B26DL,(-1L),0x8AFB1CADL}},{{0xB80F4B43L,0xE2A90786L,0xCF746B32L,1L},{0L,0x13E458C4L,0x86797B69L,(-1L)},{0L,0x20B275CFL,0xCF746B32L,0x8069D1FEL},{0xB80F4B43L,(-1L),(-1L),4L},{0xCCD29D3EL,(-1L),(-3L),0xCD4EE3B9L},{(-1L),0xB80F4B43L,0xF3E2E166L,(-1L)}},{{0xE874D4A7L,0x16DC91E8L,7L,0xF3E2E166L},{0x7B06F861L,0xFFF323E6L,0x1B3E233DL,0x7B06F861L},{0xE2A90786L,0xBB8686B4L,0L,(-1L)},{0xCF746B32L,0xFB07D6E1L,0xDAAFE497L,0xCEC51938L},{0xCF746B32L,4L,0xB874BDBAL,0x47D86C3CL},{(-6L),0x8A922A19L,(-7L),7L}},{{8L,0xDDA6A1E0L,0x86797B69L,0L},{0x23D2215AL,(-10L),0x618B2576L,0xE874D4A7L},{0xDDA6A1E0L,0L,0xDAAFE497L,0x7FD8B26DL},{0x8FE30C1AL,0xCF746B32L,(-8L),0L},{0xA2EEDF21L,0xFB07D6E1L,0xCD4EE3B9L,0xA91E53BDL},{0xA2F617A9L,0x52C43DA4L,2L,0x0D94485EL}},{{0x662B0A94L,0xDA2A4F2AL,0xBD4AA41AL,0x52C43DA4L},{7L,0x6A58390AL,(-1L),0x7FD8B26DL},{0x23D2215AL,0x8FE30C1AL,2L,1L},{0L,0x50EBF085L,0x05687C41L,0xB8319B88L},{0xA2EEDF21L,0xDDA6A1E0L,0x4BBCDFA8L,(-1L)},{0x535718A8L,(-8L),0xDAAFE497L,0xA91E53BDL}}};
    int32_t *l_1495 = (void*)0;
    int32_t **l_1494 = &l_1495;
    struct S0 l_1737[5] = {{21,1784,4053,1,5,0,-15683,27601,7},{21,1784,4053,1,5,0,-15683,27601,7},{21,1784,4053,1,5,0,-15683,27601,7},{21,1784,4053,1,5,0,-15683,27601,7},{21,1784,4053,1,5,0,-15683,27601,7}};
    uint64_t * const *l_1738 = &g_1198;
    int32_t l_1750 = 0x11BA9BF5L;
    int32_t l_1775 = 0xFBA8DDC0L;
    uint32_t l_1776 = 1UL;
    union U1 *l_1783 = &g_569;
    int32_t l_1784 = (-4L);
    uint16_t *l_1798[4] = {&g_495[4],&g_495[4],&g_495[4],&g_495[4]};
    int8_t l_1799 = 6L;
    uint64_t l_1800 = 0x8C86A7B35A65EF87LL;
    int8_t **l_1806[10] = {&g_571[2],&g_571[2],&g_571[2],&g_571[2],&g_571[2],&g_571[2],&g_571[2],&g_571[2],&g_571[2],&g_571[2]};
    int8_t l_1815 = (-1L);
    uint32_t l_1816 = 0xC460D915L;
    uint32_t *l_1817 = &l_22[2][1][1];
    int32_t *l_1818 = &g_1616[3];
    int i, j, k;
    --l_22[2][1][1];
    if ((*p_21))
    {
        return g_3;
    }
    else
    {
        int32_t *l_26[2];
        int32_t l_28 = 0x0AFD421DL;
        int32_t l_29 = 0x7241AB08L;
        uint8_t *l_39 = &g_40;
        const int32_t *l_1748 = &l_28;
        int32_t l_1785[7][4][9] = {{{1L,0L,0L,3L,6L,6L,0xCA3FFA98L,0xDEC192BAL,5L},{0L,0x2B23118CL,6L,0xFB65B0F1L,1L,(-6L),0x810678D6L,0L,0x64D93C29L},{1L,6L,0xED44BA60L,0x15400577L,1L,0xFCA07F59L,7L,0x1CA41019L,6L},{0xFE6A6B0AL,0xCA3FFA98L,0xED44BA60L,0xFE6A6B0AL,0x2B23118CL,0L,1L,(-7L),0x66F8B1C6L}},{{0xFB65B0F1L,0x1E7138C7L,6L,(-7L),0xB781879AL,(-1L),1L,3L,0x40237C68L},{1L,(-1L),0L,7L,0x2B23118CL,5L,0xA7427170L,0L,3L},{0xCA3FFA98L,0xA7427170L,3L,1L,1L,3L,0xA7427170L,0xCA3FFA98L,(-6L)},{0x2BF1E94FL,(-7L),0xAA583128L,1L,1L,0xED44BA60L,1L,0x036FB362L,0xAD2147AEL}},{{1L,1L,0x3DFBC318L,0L,6L,(-1L),1L,1L,(-6L)},{0xDEC192BAL,0xB3ACF433L,(-1L),0L,0xD065D87AL,0x64D93C29L,7L,0xD065D87AL,3L},{0xD1614CDCL,0xB3ACF433L,0x403E2C19L,(-1L),1L,0xC4F734CFL,0x810678D6L,6L,0x40237C68L},{7L,1L,0xDB8D5793L,0xDEC192BAL,0x036FB362L,1L,0xCA3FFA98L,1L,0x66F8B1C6L}},{{1L,(-7L),9L,(-1L),0xCA3FFA98L,1L,(-9L),0x68DA04D4L,0xD065D87AL},{0x8C3E4AA4L,(-1L),1L,(-9L),(-1L),1L,0x8C3E4AA4L,(-2L),1L},{0xBF50761CL,7L,0xB781879AL,(-1L),0x48B7E7ACL,1L,0x64E48BA0L,0x17661541L,0x036FB362L},{0x7134CB9FL,0x8074EB35L,1L,(-9L),0x8C3E4AA4L,0x3C9B3D8EL,0x17661541L,(-2L),0xCA3FFA98L}},{{0x13706C45L,(-1L),0L,0x68DA04D4L,1L,1L,1L,0x68DA04D4L,0L},{0x13706C45L,0x13706C45L,6L,0xD08E086EL,(-9L),0x2BF1E94FL,7L,1L,3L},{0x7134CB9FL,(-2L),7L,0x8C3E4AA4L,0xB18B9B3CL,0x810678D6L,0x68DA04D4L,0x13706C45L,(-7L)},{0xBF50761CL,(-1L),6L,0x7027BF91L,0xDF4DB558L,1L,1L,0x9C07A566L,0x1CA41019L}},{{0x8C3E4AA4L,0xDF4DB558L,0L,0x80EA50B4L,0xDF4DB558L,0x036FB362L,(-8L),0x205DB804L,0L},{0x205DB804L,1L,1L,0x9EBB83AEL,0xB18B9B3CL,0xA7427170L,(-9L),0x7134CB9FL,0xDEC192BAL},{0xD08E086EL,(-1L),0xB781879AL,0x48B7E7ACL,(-9L),0x1E7138C7L,(-8L),(-1L),0L},{(-8L),0x7134CB9FL,1L,1L,1L,0xDEC192BAL,1L,(-1L),0L}},{{0xB18B9B3CL,0xD08E086EL,0x1CA41019L,0xFD6DDCE0L,0x8C3E4AA4L,0x2B23118CL,0x68DA04D4L,0x48B7E7ACL,0xDEC192BAL},{(-9L),(-9L),0xCA3FFA98L,1L,0x48B7E7ACL,0xD065D87AL,7L,0x8C3E4AA4L,0L},{0x64E48BA0L,0xD08E086EL,0xFB65B0F1L,0x7134CB9FL,(-1L),0x1CA41019L,1L,1L,0x1CA41019L},{(-1L),0x7134CB9FL,0xA7427170L,0x7134CB9FL,(-1L),0xFB65B0F1L,0x17661541L,(-9L),(-7L)}}};
        uint32_t l_1786 = 0x034F60AEL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_26[i] = (void*)0;
        ++g_30;
        if (func_33(func_37(((l_25[6][2][3] > ((*l_39)++)) || g_27)), l_1494, (*g_854)))
        {
            uint32_t l_1745[5] = {0x501B07EEL,0x501B07EEL,0x501B07EEL,0x501B07EEL,0x501B07EEL};
            int32_t l_1756[5] = {1L,1L,1L,1L,1L};
            uint8_t l_1768[7] = {0x1DL,1UL,1UL,0x1DL,1UL,1UL,0x1DL};
            uint8_t l_1772 = 254UL;
            int i;
            for (l_29 = 3; (l_29 >= 0); l_29 -= 1)
            {
                int16_t l_1746 = 7L;
                uint8_t l_1751 = 255UL;
                int32_t l_1760 = (-2L);
                int32_t l_1761 = 1L;
                int32_t l_1765[6] = {0xB2F68584L,0L,0xB2F68584L,0xB2F68584L,0L,0xB2F68584L};
                int i;
                for (g_40 = 0; (g_40 <= 3); g_40 += 1)
                {
                    uint64_t * const **l_1739 = (void*)0;
                    uint64_t * const **l_1740 = &l_1738;
                    int32_t l_1744 = 0x7A1375E2L;
                    int i;
                    if ((safe_sub_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((g_1616[(l_29 + 2)] = ((!((l_1737[1] , (*g_1196)) != ((*l_1740) = l_1738))) | ((0L > (g_1616[(l_29 + 3)] , (0UL & 0L))) < (safe_unary_minus_func_int8_t_s((((0UL ^ (&g_40 == (void*)0)) | 0xBB71F5B832361CF5LL) <= 65535UL)))))) != l_1744) | l_1745[1]), l_1745[0])), 0UL)) || l_1746) | l_1744) < l_1746), 0x2CF3L)))
                    {
                        g_1747 = (*p_21);
                    }
                    else
                    {
                        if ((*p_21))
                            break;
                        l_1748 = p_21;
                    }
                    for (l_28 = 0; (l_28 >= 0); l_28 -= 1)
                    {
                        int32_t l_1749 = 0x09FAA62CL;
                        int32_t l_1754 = 0L;
                        int i, j, k;
                        ++l_1751;
                        l_1754 ^= l_25[(l_28 + 7)][(l_29 + 2)][g_40];
                    }
                    return g_1616[(l_29 + 3)];
                }
                for (g_526 = 0; (g_526 <= 3); g_526 += 1)
                {
                    int32_t l_1755 = 0x5D81DFE1L;
                    int32_t l_1757 = 1L;
                    int32_t l_1758 = (-4L);
                    int32_t l_1759 = 0L;
                    int32_t l_1762 = 0x89F08A18L;
                    int32_t l_1763 = 6L;
                    int32_t l_1764 = (-5L);
                    int32_t l_1767 = 5L;
                    int i;
                    l_1768[1]--;
                    if (g_1616[l_29])
                        continue;
                    for (l_1759 = 3; (l_1759 >= 0); l_1759 -= 1)
                    {
                        int32_t l_1771[6] = {0x5FF0922CL,0x7A104FB3L,0x5FF0922CL,0x5FF0922CL,0x7A104FB3L,0x5FF0922CL};
                        int i;
                        --l_1772;
                        l_25[5][2][2] = 0x132B32B5L;
                    }
                }
            }
            l_1756[3] ^= l_1775;
            ++l_1776;
        }
        else
        {
            int8_t l_1781 = 0x01L;
            int32_t l_1782 = 1L;
            for (g_485 = 0; (g_485 < (-6)); g_485 = safe_sub_func_uint64_t_u_u(g_485, 5))
            {
                if (l_1781)
                    break;
                return l_1782;
            }
        }
        g_781 = l_1783;
        --l_1786;
    }
    (*l_1818) |= (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(0x305AL, ((safe_mul_func_int16_t_s_s(1L, (((((((safe_div_func_int32_t_s_s(((((safe_unary_minus_func_uint16_t_u((++l_1800))) & (safe_lshift_func_uint16_t_u_s((~0xB0L), 5))) ^ ((l_1737[1].f7 <= g_1219[5]) & ((l_1806[9] != ((*l_1783) , (void*)0)) , 0x7DL))) , 0xE8C39A13L), (***g_286))) != g_1747) != (**g_333)) > (*g_714)) & (**g_287)) && 0x9655L) == 18446744073709551614UL))) , 0x023EL))), 1));
    return (*l_1818);
}







static int32_t func_33(int32_t ** p_34, int32_t ** p_35, int32_t p_36)
{
    uint32_t l_1545 = 9UL;
    int16_t l_1582[2];
    uint32_t l_1602 = 1UL;
    int32_t l_1611[2][3][5] = {{{0xFCA6C0EAL,0x90E4A045L,0L,0L,0x90E4A045L},{0xFCA6C0EAL,0x90E4A045L,0L,0L,0x90E4A045L},{0xFCA6C0EAL,0x90E4A045L,0L,0L,0x90E4A045L}},{{0xFCA6C0EAL,0x90E4A045L,0L,0L,0x90E4A045L},{0xFCA6C0EAL,0x90E4A045L,0x90E4A045L,0x90E4A045L,0L},{0x9B8D2BE2L,0L,0x90E4A045L,0x90E4A045L,0L}}};
    int32_t l_1618 = 0x85F293E4L;
    int32_t *****l_1621 = &g_1292;
    union U1 l_1682 = {1L};
    uint64_t l_1689 = 0UL;
    int32_t l_1696[3][8][5] = {{{0L,0L,0x31F893ECL,0xD0553EE9L,0x1EF2E2F3L},{0L,(-9L),0x31CFA3B5L,0L,0xA4A0B811L},{0xA4A0B811L,(-1L),0x3D5A756BL,0xD0553EE9L,0L},{0x31F893ECL,0L,0xD0553EE9L,0x31CFA3B5L,5L},{0x46237629L,0xA4A0B811L,0L,0x4AA4C926L,0x3B868DADL},{0x0FC14D6AL,0xA4A0B811L,0L,0xA4A0B811L,0x0FC14D6AL},{0x1EF2E2F3L,0L,5L,0x06A35EEEL,0xC86E08D9L},{0L,(-1L),(-4L),0L,0x6869308EL}},{{0xD0553EE9L,(-9L),1L,0L,0xC86E08D9L},{0L,0L,0x4AA4C926L,1L,0x0FC14D6AL},{0xC86E08D9L,0x0FC14D6AL,(-1L),(-4L),0x3B868DADL},{0L,5L,(-1L),(-1L),5L},{0L,0L,0x4AA4C926L,(-9L),0L},{(-9L),(-8L),1L,0x3B868DADL,0xA4A0B811L},{5L,1L,(-4L),0L,0x1EF2E2F3L},{(-9L),1L,5L,0L,1L}},{{0L,0x31F893ECL,0L,0L,0x0A9F8FBFL},{0L,0x3D5A756BL,0L,0L,0L},{0xC86E08D9L,0xC86E08D9L,0xD0553EE9L,0L,0L},{0L,0x4AA4C926L,0x3D5A756BL,0L,0L},{0xD0553EE9L,0L,0x31CFA3B5L,0x3B868DADL,0x06A35EEEL},{0L,0x4AA4C926L,0x31F893ECL,(-9L),0L},{0x1EF2E2F3L,0xC86E08D9L,0x0FC14D6AL,(-1L),(-4L)},{0x0FC14D6AL,0x3D5A756BL,0L,(-4L),(-4L)}}};
    int32_t ** const l_1709 = &g_854;
    const struct S0 *l_1717 = &g_112;
    uint16_t l_1718 = 1UL;
    const int8_t ****l_1721 = &g_1719;
    uint8_t *l_1722[6] = {&g_322,&g_322,&g_322,&g_322,&g_322,&g_322};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1582[i] = 0x5855L;
    for (g_322 = 0; (g_322 != 49); g_322++)
    {
        uint8_t l_1501 = 0xDEL;
        int32_t *l_1654 = &g_688;
        int32_t l_1670[4] = {(-1L),(-1L),(-1L),(-1L)};
        int16_t *l_1683[1][6][5] = {{{(void*)0,&g_1010,&l_1582[0],&g_130,&l_1582[0]},{(void*)0,&l_1582[0],&l_1582[1],&l_1582[0],(void*)0},{&g_1010,&g_1010,&g_1010,&g_130,&l_1582[0]},{&g_1010,&g_1010,&g_1010,&g_1010,&g_1010},{&l_1582[1],&l_1582[0],(void*)0,&g_1010,&l_1582[0]},{&l_1582[0],&g_1010,(void*)0,&g_101[4],(void*)0}}};
        int32_t l_1691 = 0L;
        int i, j, k;
        if ((!(safe_div_func_uint16_t_u_u(0x34B1L, p_36))))
        {
            uint8_t *l_1507[5][2][10] = {{{&g_40,&g_322,&l_1501,&l_1501,&g_322,&g_40,&g_322,(void*)0,&g_40,&g_322},{&g_526,&g_40,&g_322,&l_1501,&g_322,&g_526,&g_322,&g_322,&g_526,(void*)0}},{{&g_526,&g_40,&g_526,&g_322,(void*)0,(void*)0,&l_1501,&g_322,(void*)0,(void*)0},{(void*)0,&l_1501,&g_322,(void*)0,(void*)0,&l_1501,(void*)0,(void*)0,&g_322,&l_1501}},{{&g_40,&l_1501,&g_322,&g_40,&g_322,&g_40,&l_1501,&g_322,&g_322,&g_322},{&l_1501,&g_40,&g_40,(void*)0,&g_40,&g_40,&g_322,&g_322,(void*)0,&g_322}},{{&g_40,(void*)0,&g_40,&g_322,&g_40,&l_1501,&g_322,&g_322,&g_322,&g_322},{(void*)0,&g_40,&g_322,&g_322,&g_40,(void*)0,&g_322,(void*)0,&g_322,&g_322}},{{&g_322,(void*)0,&g_322,&g_322,&g_322,(void*)0,&g_322,&g_322,&g_322,&l_1501},{&g_322,&g_40,&g_322,&g_322,(void*)0,(void*)0,&l_1501,&g_322,(void*)0,(void*)0}}};
            int32_t *l_1508 = (void*)0;
            int32_t *l_1509 = &g_1219[0];
            struct S0 l_1524 = {19,4858,-2876,0,-6,-0,12489,25460,7};
            union U1 **** const l_1548 = (void*)0;
            const union U1 ****l_1549 = (void*)0;
            uint32_t l_1596 = 0UL;
            uint32_t l_1599 = 1UL;
            int32_t *****l_1622 = &g_1292;
            uint16_t l_1634 = 4UL;
            int i, j, k;
            l_1501--;
            (*l_1509) = (p_36 || ((~(safe_sub_func_uint8_t_u_u((g_40 = 252UL), 0xACL))) == p_36));
            for (g_688 = 0; (g_688 < (-22)); --g_688)
            {
                uint16_t **l_1536 = &g_545[0];
                int32_t l_1539 = 5L;
                int32_t l_1546[4] = {0xA31C6637L,0xA31C6637L,0xA31C6637L,0xA31C6637L};
                int8_t l_1620 = 0L;
                union U1 l_1644 = {0x0306440EL};
                int i;
                (*l_1509) = ((*g_288) == l_1501);
                for (g_59.f0 = 17; (g_59.f0 == (-13)); --g_59.f0)
                {
                    uint32_t l_1514 = 0x35C02006L;
                    (*l_1509) ^= (p_36 != (p_36 == (-1L)));
                    ++l_1514;
                }
                for (g_279 = 0; (g_279 == 27); g_279++)
                {
                    int64_t **l_1537 = (void*)0;
                    int32_t l_1543[9][3] = {{3L,3L,0x62CF35ADL},{0x4A161E9FL,0x62CF35ADL,0x62CF35ADL},{0x62CF35ADL,0xC4496490L,(-1L)},{0x4A161E9FL,0xC4496490L,0x4A161E9FL},{3L,0x62CF35ADL,(-1L)},{3L,3L,0x62CF35ADL},{0x4A161E9FL,0x62CF35ADL,0x62CF35ADL},{0x62CF35ADL,0xC4496490L,(-1L)},{0x4A161E9FL,0xC4496490L,0x4A161E9FL}};
                    int32_t l_1597 = 0x12DEA855L;
                    int32_t *l_1623 = (void*)0;
                    int32_t *l_1624 = &g_3;
                    int32_t *l_1625 = &l_1618;
                    int32_t *l_1626 = (void*)0;
                    int32_t *l_1627 = (void*)0;
                    int32_t *l_1628 = &g_1219[0];
                    int32_t *l_1629 = &l_1618;
                    int32_t *l_1630 = &l_1611[0][2][3];
                    int32_t *l_1631 = &g_1616[3];
                    int32_t *l_1632 = &l_1546[3];
                    int32_t *l_1633[3][3] = {{&g_1616[3],&g_1616[3],&g_1616[3]},{&g_1219[3],&g_1219[3],&g_1219[3]},{&g_1616[3],&g_1616[3],&g_1616[3]}};
                    int i, j;
                    for (g_40 = 8; (g_40 < 28); ++g_40)
                    {
                        const uint16_t *l_1535 = &g_1192[2];
                        const uint16_t **l_1534 = &l_1535;
                        uint64_t *l_1538[2];
                        const uint16_t l_1547 = 1UL;
                        const union U1 *****l_1550 = (void*)0;
                        const union U1 *****l_1551 = &l_1549;
                        int32_t *l_1563 = (void*)0;
                        int32_t *l_1564 = &l_1539;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1538[i] = &g_30;
                        l_1546[3] &= (~(safe_sub_func_int32_t_s_s(((l_1524 , g_1010) > (safe_lshift_func_int16_t_s_u(((((safe_unary_minus_func_uint8_t_u(((safe_lshift_func_int8_t_s_u((-3L), 4)) > (safe_lshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_u((((***g_1196) & ((l_1534 == l_1536) <= ((l_1539 = ((void*)0 == l_1537)) , (l_1539 = (safe_div_func_int16_t_s_s((!p_36), l_1543[7][1])))))) || p_36), 1)) <= g_1544) > l_1545), 5))))) & p_36) ^ l_1501) < l_1501), p_36))), (*l_1509))));
                        (*l_1509) = l_1547;
                        (*l_1564) &= ((p_36 != (l_1548 != (p_36 , ((*l_1551) = l_1549)))) == ((safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s(((*l_1509) && (safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((g_526 &= ((l_1543[7][1] > l_1547) == g_171)), ((**g_653) == g_1562))), (*l_1509))), l_1547))), g_322)), l_1546[3])) <= 5UL));
                    }
                    if (((~(!255UL)) , (!((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(l_1545, ((l_1546[2] ^ (--(***g_286))) & 4294967286UL))), 3)) | (!(+(((l_1539 |= p_36) < (p_36 || p_36)) ^ ((((**g_570) , p_36) || 0xB006L) , 0xE647L))))))))
                    {
                        struct S0 **l_1577 = (void*)0;
                        struct S0 *l_1579 = &g_112;
                        struct S0 **l_1578 = &l_1579;
                        uint32_t ***l_1587 = &g_333;
                        int32_t l_1598 = 1L;
                        l_1597 |= (safe_unary_minus_func_uint32_t_u(((**g_287) = (((p_36 , 0x0353A66BL) && (((*l_1578) = (void*)0) == &g_112)) | (safe_div_func_int32_t_s_s(((l_1582[0] != ((safe_lshift_func_int16_t_s_s(p_36, ((((safe_lshift_func_int8_t_s_s(((**g_570) &= (l_1587 != &g_287)), 4)) < (safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_1596, l_1543[7][1])), p_36)), 65526UL)), p_36))) && p_36) && p_36))) <= g_142)) == 18446744073709551607UL), p_36))))));
                        (*l_1509) = l_1598;
                        if (p_36)
                            break;
                        return l_1599;
                    }
                    else
                    {
                        uint16_t *l_1606 = &g_118;
                        int32_t l_1614 = 0x5408168BL;
                        int16_t *l_1615 = &g_101[4];
                        int64_t *l_1617[9] = {&g_167[6][5],&g_167[6][5],&g_167[6][5],&g_167[6][5],&g_167[6][5],&g_167[6][5],&g_167[6][5],&g_167[6][5],&g_167[6][5]};
                        int32_t *l_1619 = &l_1611[0][2][3];
                        int i;
                        l_1620 ^= ((*l_1619) = ((*l_1509) = ((((safe_mul_func_uint8_t_u_u(((l_1618 |= (((l_1602 = l_1543[7][1]) > ((safe_lshift_func_int16_t_s_u(((safe_unary_minus_func_int64_t_s((((((0UL >= 0x6CL) ^ ((*l_1606) = 0x1204L)) ^ (safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(l_1611[0][2][3], (((safe_mod_func_int16_t_s_s((((((l_1539 = 0UL) != l_1614) >= (*l_1509)) ^ ((*l_1615) |= l_1546[3])) || 4294967295UL), p_36)) , (*g_714)) , g_1616[3]))) , 4294967295UL), p_36))) ^ l_1546[1]) ^ p_36))) >= p_36), 4)) , l_1611[1][0][2])) <= l_1611[0][0][3])) >= 9UL), l_1611[1][2][3])) >= p_36) > l_1597) >= (*l_1509))));
                        l_1622 = l_1621;
                    }
                    l_1634++;
                    (*l_1632) = (safe_mul_func_uint16_t_u_u(l_1501, (safe_rshift_func_int16_t_s_s(1L, (~(((safe_mod_func_int16_t_s_s((l_1644 , (+(safe_lshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u((****g_1195), (safe_mul_func_int16_t_s_s((p_36 && (-1L)), (((*g_714) & 0xDB3FFBA8405F2806LL) != (safe_mul_func_uint16_t_u_u(l_1501, l_1501))))))), (*l_1630))))), p_36)) != (*l_1509)) > 0xEB3B414F624E038CLL))))));
                }
            }
            (*p_35) = l_1654;
        }
        else
        {
            union U1 ****l_1668 = (void*)0;
            union U1 *****l_1667 = &l_1668;
            int32_t l_1669 = 0xCAACC040L;
            uint32_t *l_1684 = &l_1545;
            int32_t l_1685 = (-10L);
            int32_t l_1686 = 5L;
            l_1670[0] &= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(65530UL, (p_36 >= (+(((((*l_1654) && ((l_1669 = ((((p_36 == (safe_add_func_uint32_t_u_u(p_36, ((!((safe_sub_func_int8_t_s_s(((*l_1654) = 0x3FL), ((safe_lshift_func_int16_t_s_u(((void*)0 == l_1667), 14)) <= (((((**g_570) ^ p_36) && p_36) && (**g_1197)) , (-1L))))) && p_36)) >= l_1669)))) | 0xF458L) , 4UL) || 4294967287UL)) || 0x62CC5FC3D34F76DFLL)) >= 0xDAA189A0L) , p_36) , l_1669))))), (-4L)));
            l_1686 |= (1UL == ((safe_lshift_func_uint16_t_u_u(0x141AL, (safe_lshift_func_uint16_t_u_u(65535UL, 0)))) | ((**g_570) = (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((*l_1654), 0)), (+((((*l_1684) &= (safe_sub_func_int64_t_s_s((*g_714), (l_1682 , (((*g_714) , ((l_1669 ^= 0UL) , &g_101[4])) != l_1683[0][3][0]))))) , l_1685) , l_1611[0][2][0])))))));
        }
        for (g_3 = 0; (g_3 < (-19)); --g_3)
        {
            int16_t l_1690 = 0x00D7L;
            int32_t *l_1692 = &g_1219[2];
            int32_t l_1693[4] = {0x7B3D02C2L,0x7B3D02C2L,0x7B3D02C2L,0x7B3D02C2L};
            int32_t *l_1694[4];
            int32_t l_1695[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            uint32_t l_1697 = 0xA09806F7L;
            int i;
            for (i = 0; i < 4; i++)
                l_1694[i] = &l_1618;
            l_1690 = l_1689;
            l_1697++;
            if ((*l_1654))
                break;
        }
        (****l_1621) = (((safe_div_func_uint16_t_u_u(p_36, (*l_1654))) <= ((~((l_1670[0] = (safe_add_func_uint32_t_u_u((l_1611[0][1][2] ^= ((*g_288) = (safe_mul_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((l_1709 != (void*)0) & ((l_1618 = (((void*)0 != &l_1501) , ((*g_1196) != (**g_1195)))) <= ((g_1710 <= l_1582[0]) == (-4L)))), g_142)) < 0xA7B3039EL), p_36)))), (*l_1654)))) & 5L)) | p_36)) , (***g_1116));
    }
    l_1611[1][2][2] = ((l_1618 = (((safe_add_func_uint16_t_u_u((p_36 && p_36), (4294967295UL & (((*l_1721) = (((((safe_rshift_func_int16_t_s_u((l_1718 = (((((safe_mod_func_int16_t_s_s((((l_1682 , l_1682) , l_1717) == (void*)0), g_112.f5)) || (0x3356L || l_1611[0][2][3])) <= 0L) , g_495[4]) > 0x9373L)), 15)) == p_36) || p_36) == l_1696[1][2][4]) , g_1719)) != (void*)0)))) , p_36) <= (**g_287))) | (**g_1720));
    l_1618 = (safe_mul_func_int8_t_s_s(0x11L, (safe_mul_func_uint16_t_u_u((0x29L < 0xD5L), ((((p_36 && (65535UL == (l_1682 , p_36))) , ((&l_1682 == &l_1682) , (void*)0)) == (void*)0) != g_130)))));
    for (g_1562 = 0; (g_1562 != 18); g_1562 = safe_add_func_uint8_t_u_u(g_1562, 9))
    {
        int32_t l_1729 = 5L;
        l_1729 = (0xD1CCL < 0x901BL);
    }
    return l_1696[1][2][4];
}







static int32_t ** func_37(int64_t p_38)
{
    uint8_t *l_47 = &g_40;
    int32_t l_67 = 0x9B3F527EL;
    int32_t l_84 = 0x2D572512L;
    int32_t *l_356 = &g_3;
    int32_t l_905 = 1L;
    union U1 l_906 = {-2L};
    int32_t l_948 = 3L;
    union U1 **l_956 = &g_781;
    union U1 ***l_955[5][6][8] = {{{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,(void*)0,&l_956,(void*)0,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,(void*)0}},{{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,(void*)0,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,(void*)0,&l_956,&l_956},{&l_956,&l_956,(void*)0,&l_956,&l_956,(void*)0,&l_956,&l_956},{(void*)0,&l_956,&l_956,(void*)0,&l_956,&l_956,&l_956,&l_956}},{{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,(void*)0},{&l_956,&l_956,(void*)0,&l_956,&l_956,(void*)0,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,(void*)0,&l_956,&l_956,(void*)0,(void*)0,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956}},{{&l_956,&l_956,(void*)0,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,(void*)0,&l_956,&l_956},{&l_956,&l_956,(void*)0,&l_956,&l_956,(void*)0,&l_956,&l_956},{&l_956,&l_956,(void*)0,&l_956,&l_956,&l_956,&l_956,(void*)0},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,(void*)0,&l_956,(void*)0,&l_956,&l_956}},{{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,(void*)0,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956,&l_956}}};
    struct S0 l_958 = {24,4752,-1765,1,-10,-0,2197,11065,0};
    int32_t *l_959 = &l_948;
    uint16_t l_992 = 0xB8CDL;
    uint32_t ***l_995 = &g_333;
    int32_t ****l_1003 = (void*)0;
    int32_t *l_1013[6];
    uint16_t **l_1031[10][9] = {{(void*)0,&g_545[0],&g_545[0],(void*)0,&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0]},{&g_545[0],&g_545[0],&g_545[0],(void*)0,&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0]},{&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0]},{&g_545[0],&g_545[0],&g_545[0],(void*)0,&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0]},{&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0]},{&g_545[0],&g_545[0],&g_545[0],(void*)0,&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0]},{&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0]},{&g_545[0],&g_545[0],&g_545[0],(void*)0,&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0]},{&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0]},{&g_545[0],&g_545[0],&g_545[0],(void*)0,&g_545[0],&g_545[0],&g_545[0],&g_545[0],&g_545[0]}};
    int32_t *l_1067 = &g_59.f0;
    int32_t *l_1069 = &l_84;
    int8_t l_1220 = 0xD0L;
    uint64_t l_1344[5] = {0x8E8923BC8CAA8508LL,0x8E8923BC8CAA8508LL,0x8E8923BC8CAA8508LL,0x8E8923BC8CAA8508LL,0x8E8923BC8CAA8508LL};
    int32_t l_1355 = 0x9CE69BE4L;
    int8_t **l_1361 = &g_571[2];
    uint32_t ****l_1439 = &l_995;
    uint32_t ***** const l_1438 = &l_1439;
    int32_t **l_1493[1][2][4];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1013[i] = &l_905;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
                l_1493[i][j][k] = (void*)0;
        }
    }
    l_948 &= (safe_add_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u((l_47 == (func_48(((safe_lshift_func_int16_t_s_u((func_54(g_59, ((*l_356) = (((safe_mul_func_uint16_t_u_u(func_62(l_67, func_68(((((safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((0UL && l_67), ((((safe_div_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((((-10L) <= (safe_lshift_func_int16_t_s_s(p_38, 9))) == (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((1L <= 0x7933L), g_3)), l_67))), l_84)) , 5UL), l_84)) && p_38) == l_67) != g_3))) <= 0x00L), 0L)) < 1L) > 1L) & p_38)), p_38, g_3), 0x12B4L)) != l_67) || l_84)), p_38, &l_356) != p_38), l_905)) & p_38), p_38, l_906) , l_47)), g_112.f0)) != 0x92BEC1F442D839CFLL) != g_171), p_38));
    if ((safe_mod_func_int8_t_s_s((((((**g_449) == ((*l_356) < (safe_sub_func_uint8_t_u_u((p_38 && ((*l_959) &= (((((safe_add_func_uint32_t_u_u(((*g_288) = ((p_38 && (((g_957 = (void*)0) == ((**l_956) , (l_958 , &g_781))) | (*l_356))) != 0xFA50D78FCE4A9E0DLL)), (*l_356))) | (*l_356)) > (*l_356)) ^ 0xC7CEE8A52296224ELL) > (*l_356)))), p_38)))) <= g_40) <= 0x6EDE336E7B0A297ALL) , p_38), p_38)))
    {
        uint32_t l_964 = 2UL;
        int32_t *l_967 = &g_688;
        int32_t l_983 = 1L;
        int32_t l_991 = 0x2701DD6EL;
        for (g_30 = 0; (g_30 >= 51); g_30 = safe_add_func_int16_t_s_s(g_30, 6))
        {
            uint64_t l_981[8];
            int32_t l_982 = 0xD5A8CCC7L;
            int i;
            for (i = 0; i < 8; i++)
                l_981[i] = 18446744073709551615UL;
            for (p_38 = 0; (p_38 != 12); p_38 = safe_add_func_uint64_t_u_u(p_38, 1))
            {
                int64_t l_980 = (-1L);
                int32_t l_984 = 0xA4539047L;
                int32_t l_986[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_986[i] = (-3L);
                for (l_948 = 1; (l_948 <= 5); l_948 += 1)
                {
                    uint64_t *l_973 = &g_279;
                    uint64_t **l_972 = &l_973;
                    int32_t *l_985 = &l_905;
                    int32_t *l_987 = &g_3;
                    int32_t *l_988 = &g_3;
                    int32_t *l_989 = &l_986[1];
                    int32_t *l_990[6] = {(void*)0,(void*)0,&g_688,(void*)0,(void*)0,&g_688};
                    int i;
                    ++l_964;
                    l_967 = (**g_283);
                    (*l_356) = ((safe_add_func_int64_t_s_s((g_112.f8 | ((**g_570) = (safe_mul_func_uint16_t_u_u((*l_356), ((l_972 != (((p_38 >= (safe_div_func_uint8_t_u_u(249UL, (safe_rshift_func_int16_t_s_u(0x74F5L, 10))))) , (((((4UL >= ((((((safe_mul_func_int8_t_s_s((-1L), g_97)) & 0xBAFEB8C49611460ALL) > l_980) >= (**g_570)) , 0xF028257E19EECA2DLL) <= (*l_356))) >= p_38) && p_38) != l_981[1]) <= (*l_959))) , (void*)0)) == 1L))))), l_980)) && 0x01B754ACL);
                    l_992++;
                }
            }
            (**g_448) = &l_982;
            if (g_322)
                goto lbl_996;
        }
lbl_996:
        (*l_356) = ((void*)0 == l_995);
        return (*g_283);
    }
    else
    {
        uint16_t l_997 = 0x334BL;
        int32_t *l_1012[7][3] = {{&l_84,&l_906.f0,&l_906.f0},{&l_84,&l_84,&l_906.f0},{&g_569.f0,&l_906.f0,&l_906.f0},{&l_906.f0,(void*)0,&l_906.f0},{&g_569.f0,(void*)0,&g_569.f0},{&l_84,&l_906.f0,&l_906.f0},{&l_84,&l_84,&l_906.f0}};
        int32_t l_1014 = 0x3AE1D24BL;
        int32_t l_1037 = 0L;
        int32_t *l_1094 = &l_948;
        int8_t *l_1111[8][9] = {{&g_27,&g_27,&g_27,(void*)0,(void*)0,&g_27,&g_27,&g_27,&g_142},{&g_27,&g_142,&g_142,&g_142,&g_27,&g_27,&g_142,&g_142,&g_142},{(void*)0,&g_27,&g_142,&g_142,&g_142,&g_142,&g_142,&g_142,&g_142},{&g_27,&g_142,&g_27,&g_27,&g_142,&g_27,(void*)0,(void*)0,&g_27},{&g_142,&g_27,(void*)0,&g_27,&g_142,&g_142,&g_142,&g_142,&g_142},{&g_142,&g_142,&g_27,&g_27,&g_27,&g_142,&g_142,&g_142,&g_27},{&g_27,&g_27,&g_27,&g_142,&g_142,&g_142,&g_27,&g_27,&g_27},{&g_142,&g_142,(void*)0,&g_142,(void*)0,&g_27,(void*)0,&g_142,(void*)0}};
        struct S0 *l_1122 = &g_112;
        struct S0 **l_1121 = &l_1122;
        int32_t *****l_1169 = (void*)0;
        int64_t l_1190 = 0xBD6C45BE561B89B3LL;
        uint64_t * const *l_1201 = (void*)0;
        uint64_t * const * const *l_1200 = &l_1201;
        uint64_t * const * const **l_1199 = &l_1200;
        int32_t l_1216 = 0x209B1C83L;
        int32_t l_1217[6];
        int8_t l_1218 = 0x3EL;
        uint32_t l_1242 = 0xAC393D50L;
        union U1 l_1343 = {0L};
        int64_t *l_1368 = &g_167[3][4];
        uint8_t l_1379 = 249UL;
        int64_t l_1387 = 5L;
        uint32_t *****l_1440 = &l_1439;
        uint64_t l_1478 = 0x7CB531A62DE68EEDLL;
        int i, j;
        for (i = 0; i < 6; i++)
            l_1217[i] = 0L;
        if (l_997)
        {
lbl_998:
            (**g_448) = ((*g_284) = &l_948);
        }
        else
        {
            int32_t ****l_1002[4];
            int32_t *****l_1001[4][9] = {{(void*)0,(void*)0,&l_1002[2],(void*)0,&l_1002[2],(void*)0,&l_1002[2],&l_1002[2],(void*)0},{&l_1002[3],&l_1002[2],&l_1002[3],&l_1002[2],&l_1002[3],&l_1002[3],&l_1002[3],&l_1002[3],&l_1002[2]},{&l_1002[2],&l_1002[2],&l_1002[2],&l_1002[2],&l_1002[2],&l_1002[2],&l_1002[2],&l_1002[2],&l_1002[2]},{&l_1002[1],(void*)0,&l_1002[3],&l_1002[3],&l_1002[3],&l_1002[3],(void*)0,&l_1002[1],(void*)0}};
            uint8_t *l_1007 = &g_322;
            int32_t l_1011 = 0xBCFBBE99L;
            struct S0 l_1026 = {17,2544,-1529,0,10,0,5096,41279,3};
            const uint32_t *l_1030 = &g_171;
            const union U1 *l_1033 = &g_59;
            union U1 **l_1088 = &g_781;
            uint8_t l_1283 = 255UL;
            const int8_t **l_1346[5][8][1] = {{{(void*)0},{&g_654},{&g_654},{&g_654},{&g_654},{&g_654},{&g_654},{(void*)0}},{{&g_654},{(void*)0},{&g_654},{&g_654},{&g_654},{&g_654},{&g_654},{&g_654}},{{(void*)0},{&g_654},{(void*)0},{&g_654},{&g_654},{&g_654},{&g_654},{&g_654}},{{&g_654},{(void*)0},{&g_654},{(void*)0},{&g_654},{&g_654},{&g_654},{&g_654}},{{&g_654},{&g_654},{(void*)0},{&g_654},{(void*)0},{&g_654},{&g_654},{&g_654}}};
            uint64_t ***l_1370 = &g_1197;
            const struct S0 *l_1375 = (void*)0;
            const struct S0 **l_1374 = &l_1375;
            const struct S0 ***l_1373[1];
            int16_t l_1382 = 0x0891L;
            uint16_t l_1407 = 65535UL;
            int32_t l_1437 = (-1L);
            int8_t l_1488 = 0xFBL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_1002[i] = &g_283;
            for (i = 0; i < 1; i++)
                l_1373[i] = &l_1374;
            if (l_958.f1)
                goto lbl_998;
            if ((safe_sub_func_int64_t_s_s(0x8585C71D87661ED0LL, ((((**g_570) = ((((*l_47) = 0x3DL) <= (((((l_1003 = (void*)0) != &g_283) != 0xFBEDB6E83E4403FFLL) >= ((safe_mod_func_int32_t_s_s(((((*l_1007) |= (!(p_38 >= (*g_334)))) > (((((*l_959) &= (safe_lshift_func_int16_t_s_s(((g_101[4] , (g_1010 != g_495[4])) < p_38), 2))) == l_997) & 0xAC24E9FEL) > g_112.f0)) <= (*g_654)), (*g_334))) != (*g_450))) , l_1011)) <= 0L)) >= 0x58L) & 0x3147105CL))))
            {
                const union U1 *l_1035 = &g_1036;
                int16_t l_1038 = 8L;
                int32_t *l_1042 = &l_948;
                int32_t l_1090[8][2] = {{3L,(-1L)},{3L,3L},{(-1L),3L},{3L,(-1L)},{3L,3L},{(-1L),3L},{3L,(-1L)},{3L,3L}};
                struct S0 l_1142 = {9,5648,-3123,1,10,0,2530,19354,2};
                uint32_t l_1146 = 0x84EF00DAL;
                int32_t *****l_1168 = &l_1003;
                int i, j;
                if ((g_334 != (l_997 , l_1012[6][2])))
                {
                    uint32_t *l_1029 = &g_97;
                    int32_t l_1039[7] = {0xB92C48EAL,0xB92C48EAL,0xB92C48EAL,0xB92C48EAL,0xB92C48EAL,0xB92C48EAL,0xB92C48EAL};
                    const int32_t l_1048[4] = {0x69CC515BL,0x69CC515BL,0x69CC515BL,0x69CC515BL};
                    int16_t l_1062 = 0L;
                    int i;
                    (*g_449) = l_1013[5];
                    if ((l_1014 = (&g_455[5] == (void*)0)))
                    {
                        const union U1 **l_1034[6] = {(void*)0,&l_1033,&l_1033,(void*)0,&l_1033,&l_1033};
                        int32_t l_1040[3];
                        int32_t *l_1041 = &g_688;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1040[i] = 0x3F5F5877L;
                        (*l_356) = (((safe_lshift_func_int8_t_s_u((((((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s(((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((p_38 >= l_1014) || (l_1026 , ((*l_959) = (safe_rshift_func_uint8_t_u_s((l_1029 != l_1030), 3))))), ((l_1031[7][2] != ((((l_1037 = ((((safe_unary_minus_func_uint64_t_u(g_112.f8)) < (&g_59 != (l_1035 = l_1033))) , (void*)0) != (void*)0)) & p_38) , g_142) , &g_545[0])) | 0xDFCF5F98L))), 0xEDD9L)), 0x058C26BABD708CE6LL)) & l_1038))), 5)) | p_38) < p_38) <= p_38) ^ l_1039[5]), 4)) >= l_1039[5]) == 1L);
                        l_1040[1] ^= (***g_448);
                        (**g_448) = (l_1041 = ((*g_284) = (**g_283)));
                        l_1042 = (*g_284);
                    }
                    else
                    {
                        int16_t l_1043 = 0x44B8L;
                        uint64_t *l_1049 = &g_279;
                        int16_t *l_1052 = &g_101[4];
                        int32_t **l_1068[7][2] = {{&l_1012[6][1],(void*)0},{&l_1012[6][2],(void*)0},{&l_1012[6][1],&l_1012[6][2]},{&g_854,&g_854},{&g_854,&l_1012[6][2]},{&l_1012[6][1],(void*)0},{&l_1012[6][2],(void*)0}};
                        int i, j;
                        l_1014 = ((*l_356) |= (((l_1039[0] = l_1043) >= ((**g_653) | (p_38 == (((*l_1052) = (safe_mul_func_int16_t_s_s(4L, (safe_rshift_func_uint8_t_u_u(p_38, (l_1048[2] < ((*l_1049)--))))))) ^ (safe_div_func_int32_t_s_s((+(--(*l_1029))), (*l_1042))))))) ^ (safe_mul_func_uint16_t_u_u((*l_959), (safe_mul_func_int8_t_s_s((((*g_781) , 0xCDBF6E2BL) , l_1062), p_38))))));
                        (*l_356) |= (g_112 , ((((((-5L) && (safe_sub_func_int16_t_s_s(((((*l_959) ^= p_38) , ((safe_mul_func_int16_t_s_s(l_1043, (((*l_1035) , (l_1067 = (void*)0)) == (l_1069 = (void*)0)))) == (safe_mul_func_int16_t_s_s((((((*g_654) < l_1043) || l_1043) < p_38) <= 0xD9138FC1L), 0x05C1L)))) <= (**g_570)), 8UL))) ^ p_38) > g_167[1][5]) & g_526) < l_1043));
                        (*l_959) = (***g_448);
                    }
                }
                else
                {
                    (*l_959) = 0L;
                }
                if (((((((p_38 | (safe_mod_func_int32_t_s_s(((*g_781) , l_997), (***g_286)))) >= (*g_714)) < (*g_288)) && 0L) & p_38) <= 4UL))
                {
                    int8_t l_1089 = 0xD8L;
                    uint16_t l_1091 = 2UL;
                    int32_t ** const *l_1114 = &g_284;
                    int32_t ** const **l_1113[10] = {&l_1114,&l_1114,&l_1114,&l_1114,&l_1114,&l_1114,&l_1114,&l_1114,&l_1114,&l_1114};
                    int32_t ** const ***l_1112 = &l_1113[5];
                    struct S0 **l_1120 = (void*)0;
                    uint8_t l_1123 = 0x87L;
                    int32_t **l_1124 = &g_1119;
                    uint32_t *l_1135 = &g_97;
                    int i;
                    if (p_38)
                    {
                        int64_t l_1106[9] = {1L,(-8L),(-8L),1L,(-8L),(-8L),1L,(-8L),(-8L)};
                        int i;
                        l_1091++;
                        l_1094 = &l_1014;
                        l_1121 = (((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((~((*l_1094) = p_38)), ((*g_714) = ((void*)0 != &g_287)))) , 1UL), ((safe_lshift_func_uint16_t_u_s(((l_1106[8] , ((((safe_mul_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(((void*)0 != l_1111[7][6]), 5UL)) || ((g_1115 = l_1112) != &g_453[3][3])), p_38)) >= 1L) >= g_112.f5) >= (**g_1118))) >= p_38), p_38)) , p_38))), p_38)), (*g_334))) , l_1106[1]) , l_1120);
                    }
                    else
                    {
                        int16_t *l_1125 = (void*)0;
                        int16_t *l_1126 = &g_130;
                        int32_t l_1143 = 0L;
                        (*l_959) &= ((****g_1116) = ((((*g_333) != (void*)0) || (((*l_1126) = (((*g_714) = ((p_38 , 0x4362L) > g_112.f0)) , ((l_1123 , (l_1124 = l_1124)) == ((**g_454) = (**g_454))))) && 0x650CL)) != 0x84677865L));
                        (*l_1124) = (void*)0;
                        (*l_356) = (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(0x0236195F47EFB954LL, (safe_div_func_int64_t_s_s(((*g_714) = (((((void*)0 != l_1135) || 0x1DCAL) > ((p_38 , (safe_rshift_func_int16_t_s_s((p_38 & (safe_mod_func_int16_t_s_s((((*l_1126) = 2L) <= ((*g_781) , p_38)), p_38))), p_38))) == p_38)) < l_1143)), 18446744073709551615UL)))) || p_38), 3)), 0xDE3FL));
                        l_1143 &= ((*l_959) = (*l_1094));
                    }
                    for (l_1037 = 14; (l_1037 >= 19); l_1037++)
                    {
                        if (g_112.f1)
                            goto lbl_998;
                    }
                    (***g_1116) = (*g_1118);
                }
                else
                {
                    (*l_1094) &= l_1146;
                    for (g_279 = 3; (g_279 <= 9); g_279 += 1)
                    {
                        int8_t ***l_1147 = &g_570;
                        int8_t **l_1149 = &g_571[4];
                        int8_t ***l_1148 = &l_1149;
                        (*l_1148) = ((*l_1147) = &g_571[2]);
                        return (*g_283);
                    }
                    for (l_1038 = 18; (l_1038 < (-28)); --l_1038)
                    {
                        (***g_1117) &= 0x9A482383L;
                    }
                }
                for (l_906.f0 = (-22); (l_906.f0 >= (-28)); l_906.f0--)
                {
                    uint16_t l_1194 = 65530UL;
                    int32_t l_1202 = 0x1D4CC284L;
                    for (l_997 = (-16); (l_997 != 2); l_997 = safe_add_func_uint32_t_u_u(l_997, 3))
                    {
                        int64_t l_1191 = 0L;
                        int64_t l_1193 = 0x8F8340F76E696760LL;
                        int32_t *l_1203 = &l_1090[3][1];
                        if (p_38)
                            break;
                        l_1202 &= ((*l_959) = (safe_lshift_func_int8_t_s_u(((((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s(((p_38 > ((safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((((l_1169 = l_1168) == &g_1116) && (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((p_38 , 0x8C1EL) != 1L), 0)), ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((*l_47) = (safe_mul_func_uint8_t_u_u((l_1026 , (safe_add_func_uint64_t_u_u(g_112.f2, (safe_sub_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((8UL ^ (**g_333)), 0xD0L)), l_1190)), (-6L))), 1UL))))), l_1191))), g_1192[2])), 4)) == g_112.f0)))), 14)) == 0UL), (**g_333))) | p_38)) | l_1193), l_1194)) || p_38), 4)) <= 65535UL) , g_1195) == l_1199), (*l_959))));
                        l_1203 = &l_1202;
                    }
                }
            }
            else
            {
                const int32_t l_1206 = 8L;
                int16_t l_1215 = 0x95EFL;
                int32_t l_1221 = 0L;
                int32_t l_1222 = 0x2375B6DCL;
                union U1 l_1227[6] = {{0xB37B87C1L},{0xB37B87C1L},{0xB37B87C1L},{0xB37B87C1L},{0xB37B87C1L},{0xB37B87C1L}};
                int8_t **l_1247 = &g_571[3];
                int32_t **l_1313 = (void*)0;
                int i;
                for (g_485 = 27; (g_485 <= (-12)); g_485 = safe_sub_func_int16_t_s_s(g_485, 1))
                {
                    int32_t l_1210 = 0L;
                    int32_t l_1211 = (-1L);
                    int32_t *l_1226 = &l_1216;
                    union U1 l_1243 = {-8L};
                    int32_t l_1279[10][8][3] = {{{0x7EA8A288L,0xF996DE30L,0xC5A4F460L},{1L,0x47018671L,0x1622AEA8L},{0x81A66BE6L,0x81A66BE6L,(-5L)},{1L,0L,0x47018671L},{0x7EA8A288L,(-5L),6L},{0L,0L,0L},{0x531898BCL,0x7EA8A288L,6L},{1L,6L,0x47018671L}},{{0xC5A4F460L,(-1L),(-5L)},{0x1622AEA8L,(-1L),0x1622AEA8L},{(-5L),(-1L),0xC5A4F460L},{0x47018671L,6L,1L},{6L,0x7EA8A288L,0x531898BCL},{0L,0L,0L},{6L,(-5L),0L},{(-1L),0L,1L}},{{0x81A66BE6L,0L,0L},{0xF90D6E25L,(-1L),1L},{0x531898BCL,6L,0L},{0x1622AEA8L,0L,0L},{(-1L),(-9L),(-1L)},{0L,0L,0x1622AEA8L},{0L,6L,0x531898BCL},{1L,(-1L),0xF90D6E25L}},{{0L,0L,0x81A66BE6L},{1L,0L,(-1L)},{0L,0x81A66BE6L,0xC5A4F460L},{0L,0x44A61CFBL,0x44A61CFBL},{(-1L),0L,0xC5A4F460L},{0x1622AEA8L,1L,(-1L)},{0x531898BCL,(-5L),0x81A66BE6L},{0xF90D6E25L,0xD3D549AEL,0xF90D6E25L}},{{0x81A66BE6L,(-5L),0x531898BCL},{(-1L),1L,0x1622AEA8L},{0xC5A4F460L,0L,(-1L)},{0x44A61CFBL,0x44A61CFBL,0L},{0xC5A4F460L,0x81A66BE6L,0L},{(-1L),0L,1L},{0x81A66BE6L,0L,0L},{0xF90D6E25L,(-1L),1L}},{{0x531898BCL,6L,0L},{0x1622AEA8L,0L,0L},{(-1L),(-9L),(-1L)},{0L,0L,0x1622AEA8L},{0L,6L,0x531898BCL},{1L,(-1L),0xF90D6E25L},{0L,0L,0x81A66BE6L},{1L,0L,(-1L)}},{{0L,0x81A66BE6L,0xC5A4F460L},{0L,0x44A61CFBL,0x44A61CFBL},{(-1L),0L,0xC5A4F460L},{0x1622AEA8L,1L,(-1L)},{0x531898BCL,(-5L),0x81A66BE6L},{0xF90D6E25L,0xD3D549AEL,0xF90D6E25L},{0x81A66BE6L,(-5L),0x531898BCL},{(-1L),1L,0x1622AEA8L}},{{0xC5A4F460L,0L,(-1L)},{0x44A61CFBL,0x44A61CFBL,0L},{0xC5A4F460L,0x81A66BE6L,0L},{(-1L),0L,1L},{0x81A66BE6L,0L,0L},{0xF90D6E25L,(-1L),1L},{0x531898BCL,6L,0L},{0x1622AEA8L,0L,0L}},{{(-1L),(-9L),(-1L)},{0L,0L,0x1622AEA8L},{0L,6L,0x531898BCL},{1L,(-1L),0xF90D6E25L},{0L,0L,0x81A66BE6L},{1L,0L,(-1L)},{0L,0x81A66BE6L,0xC5A4F460L},{0L,0x44A61CFBL,0x44A61CFBL}},{{(-1L),0L,0xC5A4F460L},{0x1622AEA8L,1L,(-1L)},{0x531898BCL,(-5L),0x81A66BE6L},{0xF90D6E25L,0xD3D549AEL,0xF90D6E25L},{0x81A66BE6L,(-5L),0x531898BCL},{(-1L),1L,0x1622AEA8L},{0xC5A4F460L,(-9L),(-5L)},{0x47018671L,0x47018671L,0x44A61CFBL}}};
                    int i, j, k;
                    if (l_1206)
                        break;
                    if ((*****g_1115))
                        break;
                }
                for (l_1218 = (-14); (l_1218 <= 28); l_1218++)
                {
                    (**g_1118) &= l_1206;
                    for (g_27 = 0; (g_27 == (-17)); --g_27)
                    {
                        int32_t **l_1307 = &g_2[2];
                        return l_1307;
                    }
                    (*l_356) &= (safe_mul_func_int16_t_s_s((((*****g_1115) |= l_1221) , (safe_unary_minus_func_uint8_t_u(p_38))), ((0xF9D02473C9822B53LL & (((void*)0 == &g_569) , (safe_rshift_func_uint16_t_u_u(p_38, 5)))) == p_38)));
                }
                return l_1313;
            }
            for (g_279 = 21; (g_279 > 6); g_279 = safe_sub_func_uint8_t_u_u(g_279, 1))
            {
                const uint32_t l_1325 = 1UL;
                int32_t l_1345 = 0x3737DCCFL;
                uint64_t l_1351 = 0xC55286F1FABCB19ALL;
                int32_t **l_1364 = &l_356;
                int32_t l_1383 = 0x2B9DA2CDL;
                int32_t l_1385[1];
                uint32_t l_1388 = 0UL;
                union U1 *l_1408 = &l_906;
                uint16_t l_1410 = 1UL;
                const int64_t l_1487[3] = {0x54DB4A5CBB6CCE8FLL,0x54DB4A5CBB6CCE8FLL,0x54DB4A5CBB6CCE8FLL};
                uint32_t *l_1489 = (void*)0;
                uint32_t *l_1490 = &g_1263;
                uint64_t *l_1491 = &l_1478;
                uint64_t *l_1492 = &l_1351;
                int i;
                for (i = 0; i < 1; i++)
                    l_1385[i] = 0x76A0600DL;
                if (p_38)
                {
                    const int32_t l_1322 = 1L;
                    union U1 l_1342 = {0xE4442305L};
                    int64_t *l_1369[6] = {&g_485,&l_1190,&l_1190,&g_485,&l_1190,&l_1190};
                    struct S0 ** const *l_1376[9][10][2] = {{{(void*)0,&l_1121},{&l_1121,&l_1121},{&l_1121,&l_1121},{&l_1121,&l_1121},{(void*)0,&l_1121},{(void*)0,&l_1121},{&l_1121,&l_1121},{(void*)0,(void*)0},{&l_1121,&l_1121},{(void*)0,&l_1121}},{{(void*)0,&l_1121},{&l_1121,(void*)0},{&l_1121,(void*)0},{&l_1121,&l_1121},{(void*)0,&l_1121},{(void*)0,&l_1121},{&l_1121,(void*)0},{(void*)0,&l_1121},{&l_1121,&l_1121},{(void*)0,&l_1121}},{{(void*)0,&l_1121},{&l_1121,&l_1121},{&l_1121,&l_1121},{&l_1121,&l_1121},{(void*)0,&l_1121},{(void*)0,&l_1121},{&l_1121,&l_1121},{(void*)0,(void*)0},{&l_1121,&l_1121},{(void*)0,&l_1121}},{{(void*)0,&l_1121},{&l_1121,(void*)0},{&l_1121,(void*)0},{&l_1121,&l_1121},{(void*)0,&l_1121},{(void*)0,&l_1121},{&l_1121,(void*)0},{(void*)0,&l_1121},{&l_1121,&l_1121},{(void*)0,&l_1121}},{{(void*)0,&l_1121},{&l_1121,&l_1121},{&l_1121,&l_1121},{&l_1121,&l_1121},{(void*)0,&l_1121},{(void*)0,&l_1121},{&l_1121,&l_1121},{(void*)0,(void*)0},{&l_1121,&l_1121},{(void*)0,&l_1121}},{{(void*)0,&l_1121},{&l_1121,(void*)0},{&l_1121,(void*)0},{&l_1121,&l_1121},{(void*)0,&l_1121},{(void*)0,&l_1121},{&l_1121,(void*)0},{(void*)0,&l_1121},{&l_1121,&l_1121},{(void*)0,&l_1121}},{{(void*)0,&l_1121},{&l_1121,&l_1121},{&l_1121,&l_1121},{&l_1121,&l_1121},{(void*)0,&l_1121},{(void*)0,&l_1121},{&l_1121,&l_1121},{(void*)0,(void*)0},{&l_1121,&l_1121},{(void*)0,&l_1121}},{{(void*)0,&l_1121},{&l_1121,(void*)0},{&l_1121,(void*)0},{&l_1121,&l_1121},{(void*)0,&l_1121},{(void*)0,&l_1121},{&l_1121,(void*)0},{(void*)0,&l_1121},{&l_1121,&l_1121},{(void*)0,&l_1121}},{{(void*)0,&l_1121},{&l_1121,&l_1121},{&l_1121,&l_1121},{&l_1121,&l_1121},{(void*)0,&l_1121},{(void*)0,&l_1121},{&l_1121,&l_1121},{(void*)0,(void*)0},{&l_1121,&l_1121},{(void*)0,&l_1121}}};
                    int i, j, k;
                    l_1345 = ((((***g_286) , (safe_rshift_func_uint8_t_u_s(g_59.f0, (((~(~((safe_add_func_int64_t_s_s(l_1322, ((safe_lshift_func_uint16_t_u_s(p_38, ((l_1325 ^ 0xC3A82D1A60B40CF1LL) , (l_1343 , g_688)))) != p_38))) , p_38))) & l_1344[4]) >= p_38)))) , 0xF8L) <= l_1342.f0);
                    (*l_1094) ^= ((void*)0 != l_1346[0][4][0]);
                    (*l_956) = &l_1343;
                    if (((safe_rshift_func_uint16_t_u_u(l_1351, p_38)) == (((~((*g_714) = (safe_mul_func_uint8_t_u_u(((l_1355 >= ((safe_div_func_uint32_t_u_u(l_1342.f0, (safe_unary_minus_func_uint16_t_u(0x575FL)))) >= (safe_rshift_func_uint16_t_u_s((l_1361 != (void*)0), 15)))) == ((safe_lshift_func_int8_t_s_s((((*l_1007) = (((void*)0 != &g_653) ^ (*g_288))) || p_38), 1)) == p_38)), l_1345)))) || 0x1C49C763L) != 0xC7D2E170L)))
                    {
                        return (**g_1292);
                    }
                    else
                    {
                        int64_t **l_1367[7] = {&g_714,&g_714,&g_714,&g_714,&g_714,&g_714,&g_714};
                        int i;
                        (*l_356) |= (safe_mul_func_int16_t_s_s(((l_1368 = (void*)0) != (l_1369[5] = &l_1190)), ((((void*)0 == g_1119) , l_1370) == ((*g_1195) = (*g_1195)))));
                        (*l_1094) &= ((safe_mul_func_int8_t_s_s(((**g_570) = p_38), g_112.f4)) == ((l_1373[0] == l_1376[1][2][0]) , (**g_653)));
                        (**g_448) = (**g_448);
                    }
                }
                else
                {
                    int8_t l_1377 = 1L;
                    int32_t l_1378 = (-1L);
                    int32_t l_1384 = 0L;
                    int32_t l_1386 = 0x2093AD18L;
                    struct S0 **l_1424 = &l_1122;
                    int32_t l_1433 = 0x0A9038E8L;
                    union U1 ***l_1459 = &l_956;
                    int32_t **l_1461[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1461[i] = &l_1094;
                    --l_1379;
                    --l_1388;
                    if ((*l_959))
                    {
                        int32_t l_1406[3];
                        int32_t l_1409 = 0xB55A8EEDL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1406[i] = 0xAE9862E7L;
                        (*l_1094) = (((*l_1007) = ((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((**l_1364), (((**l_1364) ^ (+(((*g_288) = (safe_mod_func_uint8_t_u_u(0xF0L, (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((*l_1094), (l_1364 == (void*)0))) | g_112.f3), (((safe_mod_func_uint32_t_u_u(((l_1384 &= 0x820EL) , (safe_mul_func_int8_t_s_s((((g_495[4] , 0xB21FDE9EL) , (-3L)) >= l_1406[1]), p_38))), p_38)) && 0xA132L) != p_38)))))) & l_1386))) <= p_38))), 0xE9496D8C4051BD92LL)) >= l_1407)) | l_1406[1]);
                        if ((*l_1094))
                            continue;
                        (*l_1088) = l_1408;
                        --l_1410;
                    }
                    else
                    {
                        int8_t **l_1434 = &g_571[3];
                        const int8_t ***l_1435 = &l_1346[0][4][0];
                        int16_t *l_1436 = &g_101[0];
                        union U1 ****l_1458[3];
                        int32_t l_1460[6] = {0x82763F36L,0x82763F36L,0x82763F36L,0x82763F36L,0x82763F36L,0x82763F36L};
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1458[i] = &l_955[3][5][6];
                        (*l_356) = ((safe_div_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s(0xD7BEL, (safe_lshift_func_int8_t_s_s(((l_1424 = g_1423) == g_1423), (safe_sub_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(0x5E87L, (l_1433 = (safe_div_func_int64_t_s_s(((l_1433 | p_38) >= ((*l_1436) = (((l_1434 != ((*l_1435) = &g_654)) != p_38) <= 0xFDL))), 18446744073709551615UL))))), 0x67F26E8181ACD958LL)), p_38)))))), (*g_714))) | 0x2ED0L) < p_38), l_1437)) >= (****g_1195)), p_38)) & (*g_714));
                        l_1440 = l_1438;
                        (*l_356) = (safe_div_func_int64_t_s_s(((*g_714) = ((safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((p_38 == (safe_add_func_uint64_t_u_u(((**g_287) & (safe_div_func_int16_t_s_s((p_38 & p_38), p_38))), (p_38 , 0xCEF8E9020D4F7FBFLL)))) != (!(safe_lshift_func_int16_t_s_s(p_38, 12)))), ((safe_rshift_func_uint8_t_u_s(((l_1459 = &g_957) == &l_956), l_1460[5])) < 1UL))), (**g_570))) <= 0x7BL)), (**l_1364)));
                    }
                    return (**g_1292);
                }
                for (g_171 = (-20); (g_171 == 2); ++g_171)
                {
                    int32_t **** const l_1464[5] = {&g_283,&g_283,&g_283,&g_283,&g_283};
                    int i;
                    (**l_1364) &= (((void*)0 != l_1464[2]) ^ g_171);
                    (**l_1364) |= (p_38 > (safe_sub_func_int64_t_s_s(((safe_add_func_uint16_t_u_u(p_38, (((**g_1197) || (!p_38)) > (((((-5L) < (safe_lshift_func_int8_t_s_u(((*g_334) && ((((safe_mod_func_uint8_t_u_u((g_322 = (safe_rshift_func_uint16_t_u_s((&p_38 != (void*)0), 15))), 0x2EL)) > p_38) , 0xFAL) && 255UL)), g_30))) || (**g_287)) , (-2L)) & p_38)))) || p_38), 0xFECA5B19EE13498CLL)));
                    (*l_959) = ((**l_1364) ^= (safe_sub_func_int64_t_s_s((*g_714), (****g_1195))));
                }
                (**l_1364) ^= (l_1478 || ((safe_sub_func_int8_t_s_s((*l_1094), p_38)) || 0x1ECB3014L));
                (**l_1364) ^= (safe_add_func_uint32_t_u_u((p_38 != 0x3DCC20E8L), (!((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_s((((*g_781) , p_38) && (*g_714)), 2)))) && 250UL))));
            }
        }
    }
    return l_1493[0][0][1];
}







static const union U1 func_48(uint32_t p_49, const uint64_t p_50, union U1 p_51)
{
    uint16_t **l_908 = &g_545[0];
    int32_t *l_909[8][10] = {{&g_688,&g_3,&g_3,&g_3,&g_688,&g_3,&g_688,&g_688,&g_3,&g_688},{(void*)0,&g_3,&g_3,(void*)0,&g_3,&g_688,&g_3,&g_688,&g_688,&g_3},{&g_3,&g_688,&g_688,&g_3,&g_3,&g_3,&g_3,&g_3,&g_688,&g_688},{&g_688,&g_3,(void*)0,(void*)0,&g_3,(void*)0,&g_688,&g_688,&g_3,&g_3},{&g_3,&g_3,(void*)0,&g_3,&g_3,(void*)0,&g_3,&g_3,(void*)0,&g_688},{&g_688,(void*)0,&g_3,&g_3,&g_688,&g_3,&g_688,&g_688,&g_688,&g_3},{&g_3,&g_688,&g_3,&g_688,&g_3,&g_688,(void*)0,&g_3,&g_3,(void*)0},{(void*)0,&g_3,(void*)0,&g_688,&g_688,&g_3,&g_3,&g_688,&g_688,(void*)0}};
    uint64_t l_910 = 0UL;
    int32_t ****l_913 = &g_283;
    uint8_t * const l_916 = (void*)0;
    int64_t * const *l_937 = &g_714;
    int8_t l_942[3][2][7] = {{{1L,0xA8L,0x0BL,0x9CL,(-1L),0x9CL,0x0BL},{(-1L),(-1L),0xCFL,(-1L),0x49L,0x9CL,(-9L)}},{{0L,0xCFL,(-9L),0L,1L,0x49L,(-8L)},{0x9CL,0x47L,0x49L,(-9L),0x49L,0x47L,0x9CL}},{{(-2L),0x9CL,0x15L,(-9L),(-1L),(-8L),0L},{0L,(-1L),0xA8L,0L,(-2L),1L,1L}}};
    int64_t l_943 = 1L;
    uint64_t *l_944 = &g_30;
    uint8_t *l_945 = &g_40;
    int8_t *l_946 = &g_142;
    int16_t l_947 = 0x3227L;
    int i, j, k;
    l_910 = ((safe_unary_minus_func_int8_t_s((&g_545[0] != l_908))) ^ p_49);
    l_947 |= (safe_lshift_func_int16_t_s_u((l_913 != (((safe_sub_func_int32_t_s_s(((void*)0 == l_916), ((safe_rshift_func_uint8_t_u_s(((***l_913) == ((safe_rshift_func_int8_t_s_s(((*l_946) ^= (safe_lshift_func_uint8_t_u_u(((*l_945) = (g_526 = ((safe_mul_func_int8_t_s_s(((**g_570) = (safe_lshift_func_uint16_t_u_s(((((*l_944) = ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(p_51.f0, ((safe_sub_func_int32_t_s_s(((+(safe_rshift_func_uint16_t_u_u((((l_943 ^= (safe_unary_minus_func_int32_t_s((((void*)0 == l_937) & ((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_171, ((((*g_450) <= 0L) <= l_942[1][0][1]) && 0xE900BF073238ED73LL))), g_569.f0)) >= g_118))))) && p_51.f0) , 1UL), 0))) == p_49), 0x7EBDF314L)) <= p_50))), p_50)) != 0xD24837A21207C4F5LL)) && 0x2E0EA9C747FDE931LL) < 1L), g_485))), p_51.f0)) <= g_3))), 6))), 1)) , (void*)0)), p_50)) <= p_51.f0))) || p_50) , (void*)0)), 5));
    g_781 = &g_59;
    return p_51;
}







static int8_t func_54(union U1 p_55, int32_t p_56, int16_t p_57, int32_t ** p_58)
{
    int32_t * const l_359 = &g_3;
    struct S0 * const l_362 = &g_112;
    const uint16_t * const l_369[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t ***l_396 = &g_284;
    int32_t l_442[5][3][10] = {{{0xADA6EE03L,0xE62AFB88L,(-1L),(-1L),0x1E64668CL,0x814FE11BL,1L,0L,0x5BC42612L,0x4075F2E7L},{0x5BC42612L,1L,(-8L),0xE62AFB88L,(-1L),0xADA6EE03L,0x0110EF24L,0x0110EF24L,0xADA6EE03L,(-1L)},{0x1E64668CL,(-8L),(-8L),0x1E64668CL,(-1L),0x0110EF24L,0x814FE11BL,0L,1L,0xE62AFB88L}},{{(-1L),0x4A58D5EAL,(-1L),0x4075F2E7L,0L,0xADA6EE03L,(-8L),0x814FE11BL,1L,0x1E64668CL},{(-1L),0xE62AFB88L,0x0110EF24L,0x1E64668CL,0x4A58D5EAL,0x814FE11BL,0x4075F2E7L,0xADA6EE03L,0xADA6EE03L,0x4075F2E7L},{0L,0x4A58D5EAL,0xE62AFB88L,0xE62AFB88L,0x4A58D5EAL,0L,(-1L),0x0110EF24L,0x5BC42612L,0x1E64668CL}},{{0x4A58D5EAL,(-8L),1L,(-1L),0L,0x0110EF24L,(-4L),0xADA6EE03L,0x1E64668CL,0xE62AFB88L},{0x4A58D5EAL,1L,(-4L),0x4075F2E7L,(-1L),0L,0xE62AFB88L,0x814FE11BL,(-1L),(-1L)},{0L,0xE62AFB88L,0x814FE11BL,(-1L),(-1L),0x814FE11BL,0xE62AFB88L,0L,(-1L),0x4075F2E7L}},{{(-1L),1L,0x4075F2E7L,0xE62AFB88L,0x1E64668CL,0xADA6EE03L,(-4L),0x0110EF24L,0L,(-1L)},{(-1L),(-8L),0x4075F2E7L,0x1E64668CL,0x5BC42612L,0x0110EF24L,(-1L),0L,0x4A58D5EAL,0xE62AFB88L},{0x1E64668CL,0x4A58D5EAL,0x814FE11BL,0x4075F2E7L,0xADA6EE03L,0xADA6EE03L,0x4075F2E7L,0x814FE11BL,0x4A58D5EAL,0x1E64668CL}},{{0x5BC42612L,0xE62AFB88L,(-4L),0x1E64668CL,1L,0x814FE11BL,(-8L),0xADA6EE03L,0L,0x4075F2E7L},{0xADA6EE03L,0x4A58D5EAL,1L,0xE62AFB88L,1L,0L,0x814FE11BL,0x0110EF24L,(-1L),0x1E64668CL},{1L,(-8L),0xE62AFB88L,(-1L),0xADA6EE03L,0x0110EF24L,0x0110EF24L,0xADA6EE03L,(-1L),0xE62AFB88L}}};
    uint16_t l_444 = 0xD4F2L;
    int64_t *l_521 = &g_485;
    uint64_t l_746 = 0UL;
    int16_t l_775[6] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
    uint8_t l_777 = 0x14L;
    struct S0 *l_797 = &g_112;
    struct S0 **l_796 = &l_797;
    struct S0 ***l_795[3];
    int16_t l_896 = 1L;
    uint8_t l_902 = 255UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_795[i] = &l_796;
    for (g_59.f0 = 0; (g_59.f0 != (-28)); g_59.f0--)
    {
        int32_t **l_360 = &g_2[2];
        const int32_t l_424 = 0xE9C22656L;
        int32_t l_441[10][5] = {{0xEF406DD5L,0xEF406DD5L,1L,0x2A5D6B3DL,1L},{(-1L),0x1B413F52L,0L,0x583ADDD0L,0L},{0xEF406DD5L,0xEF406DD5L,1L,0x2A5D6B3DL,1L},{(-1L),0x1B413F52L,0L,0x583ADDD0L,0L},{0xEF406DD5L,0xEF406DD5L,1L,0x2A5D6B3DL,1L},{(-1L),0x1B413F52L,0L,0x583ADDD0L,0L},{0xEF406DD5L,0xEF406DD5L,1L,0x2A5D6B3DL,1L},{(-1L),0x1B413F52L,0L,0x583ADDD0L,0L},{0xEF406DD5L,0xEF406DD5L,1L,0x2A5D6B3DL,1L},{(-1L),0x1B413F52L,0L,0x583ADDD0L,0L}};
        uint32_t *l_475[5][8][6] = {{{&g_171,&g_171,&g_97,&g_171,&g_97,&g_171},{&g_171,&g_97,&g_97,&g_97,&g_97,&g_171},{&g_97,&g_97,&g_97,&g_171,(void*)0,&g_171},{&g_97,&g_97,&g_97,&g_97,&g_97,&g_97},{(void*)0,&g_171,&g_171,&g_171,&g_97,&g_171},{&g_97,&g_171,&g_97,&g_171,&g_97,&g_171},{&g_97,&g_97,&g_97,&g_171,&g_171,&g_171},{&g_97,&g_171,&g_171,&g_171,&g_97,&g_97}},{{&g_171,&g_97,&g_97,&g_97,&g_171,(void*)0},{&g_171,&g_97,(void*)0,(void*)0,&g_97,&g_171},{&g_97,&g_171,&g_171,&g_97,&g_171,(void*)0},{(void*)0,&g_97,&g_171,&g_97,&g_171,&g_97},{&g_171,&g_97,&g_171,(void*)0,&g_171,&g_97},{(void*)0,&g_171,&g_97,&g_171,&g_97,&g_171},{(void*)0,&g_171,&g_97,&g_171,&g_171,(void*)0},{&g_171,&g_97,&g_171,(void*)0,&g_171,&g_97}},{{&g_97,&g_97,&g_97,&g_97,&g_171,&g_97},{&g_97,&g_171,&g_171,(void*)0,&g_97,&g_171},{&g_97,&g_171,&g_97,&g_97,&g_171,&g_171},{&g_97,&g_97,&g_97,&g_97,&g_171,&g_97},{&g_97,&g_97,&g_171,&g_97,&g_171,&g_97},{&g_97,&g_171,(void*)0,(void*)0,&g_97,&g_97},{&g_171,&g_97,&g_171,(void*)0,&g_171,&g_97},{&g_171,&g_97,(void*)0,(void*)0,&g_97,&g_171}},{{(void*)0,&g_171,&g_97,&g_97,&g_171,&g_171},{&g_97,&g_97,&g_97,&g_171,&g_97,(void*)0},{&g_97,&g_171,&g_171,&g_97,&g_97,&g_171},{(void*)0,&g_171,(void*)0,(void*)0,&g_97,&g_171},{&g_171,(void*)0,&g_97,(void*)0,&g_171,&g_97},{&g_171,&g_97,&g_97,(void*)0,(void*)0,&g_97},{&g_97,&g_97,&g_171,&g_97,(void*)0,&g_171},{&g_97,&g_97,&g_97,&g_97,&g_97,&g_97}},{{&g_97,&g_171,&g_171,&g_97,&g_97,(void*)0},{&g_97,(void*)0,(void*)0,(void*)0,&g_97,&g_97},{&g_97,(void*)0,&g_97,&g_97,&g_97,&g_171},{&g_97,(void*)0,&g_171,(void*)0,(void*)0,&g_97},{&g_97,(void*)0,&g_97,&g_97,&g_171,&g_171},{&g_97,(void*)0,&g_97,&g_171,&g_97,&g_97},{&g_171,&g_171,(void*)0,&g_97,(void*)0,&g_171},{(void*)0,&g_97,&g_97,&g_97,(void*)0,(void*)0}}};
        int i, j, k;
        (*l_360) = l_359;
    }
    l_442[0][1][9] &= (**g_449);
    if (((safe_mod_func_uint64_t_u_u((g_30++), (safe_unary_minus_func_uint32_t_u((safe_mod_func_int8_t_s_s(((g_112 , ((safe_sub_func_uint32_t_u_u(((0UL & ((safe_mul_func_uint16_t_u_u((g_112.f4 , (safe_div_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s(((*l_359) = (safe_sub_func_int8_t_s_s(((*l_359) ^ (((((safe_rshift_func_int8_t_s_s((0x6F4E9507L | (((*l_521) = g_130) < ((p_55.f0 == ((p_56 > ((*l_359) >= 0x8EL)) >= g_112.f1)) < (*l_359)))), 7)) , 65533UL) && g_112.f4) != p_55.f0) , 4294967294UL)), 7UL))), g_322)) , 0x09822167L) < (*g_334)), p_57))), 0x6461L)) , 1L)) >= p_57), p_56)) , (void*)0)) == (void*)0), p_55.f0)))))) > p_57))
    {
        (**p_58) = 0x77340923L;
    }
    else
    {
        uint8_t l_522 = 0x10L;
        int32_t l_548 = 6L;
        int32_t l_584 = 0xC440FB0DL;
        int32_t l_585[7][2][10] = {{{7L,4L,0xD4DF5E73L,0x1A688C77L,0x1BBFCDC1L,1L,0xFDBAD260L,0x12C24232L,0L,0x8B31FBF4L},{0xF5D11746L,(-1L),0xD4DF5E73L,0x1BBFCDC1L,(-4L),0x12C24232L,(-1L),0xA396D471L,9L,5L}},{{0xE8E3A580L,0x63AFFD1FL,0x821260DFL,0L,0xD817D389L,0x1BBFCDC1L,9L,(-5L),0x31FB902FL,4L},{0x1F23DB31L,0x6500FBF6L,0L,4L,(-3L),7L,(-3L),4L,0L,0x6500FBF6L}},{{4L,(-4L),(-1L),0x2D250581L,0x5388D57FL,6L,1L,0xD4DF5E73L,0x1F23DB31L,0xD7401989L},{1L,(-1L),0x4E34B3F2L,0x57FC15B1L,0xD4DF5E73L,6L,0x31FB902FL,0xE4D024C5L,(-5L),0xD817D389L}},{{4L,0x1F23DB31L,(-4L),0xE4D024C5L,7L,7L,0xAE4454C6L,0x4E34B3F2L,0x2D250581L,0x31FB902FL},{0x1F23DB31L,0x2D250581L,0xC41C2154L,8L,(-1L),0x1BBFCDC1L,0x4C5A24C0L,0x4C5A24C0L,0x1BBFCDC1L,(-1L)}},{{0xE8E3A580L,4L,4L,0xE8E3A580L,0x4E34B3F2L,0x12C24232L,0xFACB36CFL,0L,7L,0x1BBFCDC1L},{0xF5D11746L,0xAE4454C6L,0x63AFFD1FL,0xD4DF5E73L,0x821260DFL,1L,4L,0xFACB36CFL,7L,8L}},{{7L,0x1A688C77L,8L,0xE8E3A580L,0x63AFFD1FL,0x821260DFL,0L,0xD817D389L,0x1BBFCDC1L,9L},{0xA396D471L,9L,5L,8L,6L,0x8B31FBF4L,0xE8E3A580L,7L,0x2D250581L,7L}},{{0xD817D389L,0xA396D471L,0xAE4454C6L,0xE4D024C5L,0xAE4454C6L,0xA396D471L,0xD817D389L,0xC41C2154L,(-5L),0xF5D11746L},{4L,0x5388D57FL,0x12C24232L,0x57FC15B1L,4L,0xE8E3A580L,(-1L),5L,0x1F23DB31L,0xC41C2154L}}};
        uint32_t l_587 = 0x4566DB87L;
        uint16_t l_599 = 0x8308L;
        uint32_t l_600 = 9UL;
        uint16_t l_601 = 0x0021L;
        uint16_t **l_607 = &g_545[0];
        uint64_t *l_615 = &g_30;
        uint16_t *l_616 = &l_444;
        int32_t l_639[9] = {2L,0x28B1B56AL,2L,2L,0x28B1B56AL,2L,2L,0x28B1B56AL,2L};
        int i, j, k;
        for (g_30 = 0; (g_30 <= 2); g_30 += 1)
        {
            int32_t l_558 = 0xD50CDA3EL;
            uint32_t l_562[8][4];
            int32_t l_586[1];
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 4; j++)
                    l_562[i][j] = 0x50BE3DDEL;
            }
            for (i = 0; i < 1; i++)
                l_586[i] = 0x08F3C427L;
        }
        if (((((*l_616) ^= ((*l_359) && ((~(safe_sub_func_uint64_t_u_u((((((*l_607) = &l_599) != (void*)0) <= (safe_rshift_func_uint16_t_u_s((((+(safe_div_func_int64_t_s_s((((*l_615) = (((safe_mul_func_uint16_t_u_u(((void*)0 != l_359), (-8L))) == ((void*)0 == l_359)) , 0x5A2948E14FD381CBLL)) , g_533), (-3L)))) & p_57) || (*l_359)), p_57))) == 0x3DL), 0x218E8B90D8C5764ELL))) <= g_112.f0))) <= l_601) || g_279))
        {
            uint32_t l_631 = 4294967295UL;
            int32_t l_638 = (-6L);
            int32_t l_640 = 0x8B0F349AL;
            for (g_97 = 0; (g_97 >= 21); g_97 = safe_add_func_int8_t_s_s(g_97, 3))
            {
                if ((*g_450))
                    break;
                if ((**p_58))
                    continue;
                if ((**p_58))
                    continue;
            }
            if (((l_548 , (safe_rshift_func_uint16_t_u_u(p_56, 13))) == (safe_mul_func_int8_t_s_s((**g_570), (((safe_div_func_uint64_t_u_u(p_57, 0xE43AD9AAC3772E24LL)) || (safe_sub_func_int16_t_s_s(0xE9BEL, ((**l_607) |= ((safe_mod_func_int32_t_s_s((**p_58), 0x524B3818L)) | ((l_600 , 0x32A265EE501A2DA0LL) > l_631)))))) < p_55.f0)))))
            {
                for (p_57 = (-18); (p_57 >= (-26)); --p_57)
                {
                    p_56 ^= ((18446744073709551615UL == p_57) < (*l_359));
                }
            }
            else
            {
                int32_t *l_634 = &l_585[0][1][5];
                int32_t *l_635 = &g_3;
                int32_t *l_636[3];
                int32_t l_637 = 0x0D27A989L;
                uint32_t l_641 = 0xBD4D13E4L;
                int i;
                for (i = 0; i < 3; i++)
                    l_636[i] = &l_442[0][1][9];
                ++l_641;
            }
            l_585[0][1][5] |= ((**p_58) ^= ((~l_601) || 0L));
        }
        else
        {
            (**l_396) = (void*)0;
        }
    }
    for (g_526 = 0; (g_526 != 56); g_526 = safe_add_func_uint8_t_u_u(g_526, 4))
    {
        const int8_t * const **l_655 = &g_653;
        uint64_t *l_656 = (void*)0;
        uint64_t *l_657 = (void*)0;
        uint64_t *l_658[4][1];
        int32_t l_661 = (-10L);
        int32_t l_670 = (-9L);
        int32_t l_682 = 0x436CFC58L;
        int32_t l_687 = (-9L);
        int32_t l_689 = (-9L);
        uint16_t l_690 = 1UL;
        int32_t ****l_700 = &l_396;
        int32_t *****l_699 = &l_700;
        uint32_t *l_825 = &g_171;
        int32_t l_895 = 3L;
        int32_t l_897 = 0x27E66657L;
        int32_t l_898 = (-1L);
        int32_t l_899 = 1L;
        int32_t l_900 = (-1L);
        int32_t l_901 = (-1L);
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_658[i][j] = &g_30;
        }
    }
    return (**g_570);
}







static uint16_t func_62(int32_t p_63, uint64_t p_64, uint8_t p_65, int32_t p_66)
{
    int32_t *l_86[6];
    uint16_t l_87 = 0xD13BL;
    const uint32_t *l_161[8] = {&g_97,&g_97,&g_97,&g_97,&g_97,&g_97,&g_97,&g_97};
    const uint32_t ** const l_160 = &l_161[5];
    const uint32_t ** const *l_159 = &l_160;
    int16_t l_268 = 1L;
    int16_t l_273 = (-5L);
    uint32_t *l_316 = &g_171;
    uint32_t **l_315[1][9] = {{&l_316,(void*)0,&l_316,(void*)0,&l_316,(void*)0,&l_316,(void*)0,&l_316}};
    uint32_t ***l_314[4][9] = {{&l_315[0][2],(void*)0,&l_315[0][8],&l_315[0][3],(void*)0,(void*)0,(void*)0,&l_315[0][8],&l_315[0][8]},{&l_315[0][3],&l_315[0][5],(void*)0,&l_315[0][3],(void*)0,&l_315[0][5],&l_315[0][3],(void*)0,&l_315[0][8]},{(void*)0,(void*)0,&l_315[0][3],&l_315[0][2],(void*)0,&l_315[0][3],(void*)0,&l_315[0][3],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_315[0][3],&l_315[0][2],(void*)0,&l_315[0][3]}};
    uint64_t *l_342 = &g_30;
    const int8_t *l_349[4][8] = {{&g_27,&g_27,&g_142,&g_27,&g_142,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_142,&g_142,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27,&g_142,&g_142,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_142,&g_27,&g_142,&g_27}};
    const int8_t **l_348 = &l_349[2][7];
    int32_t * const *l_355 = &l_86[1];
    int32_t * const **l_354 = &l_355;
    int32_t * const ***l_353[2];
    int i, j;
    for (i = 0; i < 6; i++)
        l_86[i] = &g_3;
    for (i = 0; i < 2; i++)
        l_353[i] = &l_354;
    l_87 = p_66;
    for (p_63 = 1; (p_63 <= 5); p_63 += 1)
    {
        int32_t **l_106 = &l_86[1];
        uint32_t *l_113 = &g_97;
        int32_t l_120 = (-1L);
        int32_t l_129 = (-1L);
        uint16_t l_226 = 8UL;
        int16_t l_230 = 0L;
        int32_t l_233 = (-4L);
        int32_t l_234 = 1L;
        int32_t l_235 = 0x46BB0C33L;
        int32_t l_236 = 0xDF2E6AC6L;
        int32_t l_274 = (-7L);
        int8_t l_278 = 1L;
        int i;
    }
    if ((+0xCDL))
    {
        uint32_t *l_312 = &g_171;
        uint32_t **l_311[10][10][1] = {{{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0}},{{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0}},{{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0}},{{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0}},{{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0}},{{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0}},{{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0}},{{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0}},{{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0}},{{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0},{&l_312},{(void*)0}}};
        uint32_t ***l_310 = &l_311[5][1][0];
        int32_t l_325 = (-9L);
        int32_t l_343[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_343[i] = 5L;
        for (g_40 = 10; (g_40 < 4); g_40 = safe_sub_func_uint16_t_u_u(g_40, 7))
        {
            uint64_t l_305 = 0UL;
            uint32_t ****l_313[3][8][8] = {{{&l_310,&l_310,&l_310,&l_310,&l_310,(void*)0,&l_310,&l_310},{(void*)0,&l_310,(void*)0,(void*)0,&l_310,&l_310,&l_310,&l_310},{&l_310,(void*)0,&l_310,&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,(void*)0,(void*)0,(void*)0,&l_310,&l_310,&l_310,&l_310},{&l_310,(void*)0,&l_310,&l_310,&l_310,&l_310,(void*)0,&l_310},{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,(void*)0,&l_310},{&l_310,&l_310,&l_310,(void*)0,&l_310,&l_310,&l_310,&l_310},{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310}},{{&l_310,(void*)0,&l_310,(void*)0,&l_310,&l_310,(void*)0,&l_310},{&l_310,(void*)0,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310},{(void*)0,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310},{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310},{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310,(void*)0,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310,&l_310,&l_310,&l_310},{(void*)0,&l_310,&l_310,&l_310,&l_310,(void*)0,&l_310,(void*)0}},{{&l_310,&l_310,(void*)0,&l_310,&l_310,&l_310,&l_310,&l_310},{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,(void*)0,&l_310},{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,(void*)0},{&l_310,&l_310,(void*)0,&l_310,&l_310,&l_310,&l_310,&l_310},{&l_310,&l_310,(void*)0,&l_310,&l_310,&l_310,&l_310,&l_310},{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,(void*)0,(void*)0},{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310},{&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310,&l_310}}};
            uint8_t *l_321 = &g_322;
            int8_t *l_328 = &g_27;
            int16_t *l_329 = (void*)0;
            int32_t l_330[9][2][5] = {{{4L,0xDBDBDF9DL,(-1L),6L,0xE8BF0F63L},{0xBFF06634L,0xE8BF0F63L,(-3L),1L,0L}},{{(-4L),(-1L),(-10L),1L,(-1L)},{0x3CB8BBBDL,3L,0L,0xDBDBDF9DL,0xBFF06634L}},{{0x4FDE5374L,0x7FB1C3DAL,1L,(-1L),0L},{0xDBDBDF9DL,0xBAF44911L,0L,0L,0xBAF44911L}},{{(-1L),0L,0x3A8E5BAAL,0xE8BF0F63L,0x0C007682L},{4L,0xBFF06634L,0xDBDBDF9DL,0L,3L}},{{0x5741BCCBL,0x3A8E5BAAL,0xB7190C5EL,6L,(-1L)},{4L,(-1L),1L,0x359DC185L,0xB7190C5EL}},{{(-1L),(-4L),0L,1L,1L},{0xDBDBDF9DL,0x3D4A6B51L,0xE8BF0F63L,(-4L),(-10L)}},{{(-4L),0xE8BF0F63L,0xC7413641L,0x3CB8BBBDL,(-10L)},{1L,0L,(-1L),(-1L),1L}},{{1L,(-1L),(-1L),1L,0xB7190C5EL},{7L,(-10L),0xBFF06634L,0L,(-1L)}},{{0L,4L,0xBAF44911L,(-1L),3L},{0x359DC185L,0L,0xC6200F53L,0L,0x0C007682L}}};
            uint64_t *l_341[4];
            uint64_t **l_340[10];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_341[i] = &l_305;
            for (i = 0; i < 10; i++)
                l_340[i] = &l_341[0];
            if (l_305)
                break;
            l_330[2][0][0] = (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((***g_290) = (((l_314[1][5] = l_310) != (void*)0) ^ ((0x7EDDL || (safe_add_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(p_63, 0xEC3E5BA2L)) | ((*l_321) &= p_66)), (l_305 || (safe_sub_func_uint64_t_u_u(l_325, ((g_101[4] = (safe_sub_func_int16_t_s_s((((*l_328) = (0x2DC2L | (-10L))) && 7UL), 0xE75CL))) ^ 65535UL))))))) <= p_63))), 1L)), 5));
            l_343[2] ^= (safe_mod_func_uint8_t_u_u((0xB909L > ((((*l_310) = g_333) != (*g_290)) ^ ((((~((safe_sub_func_uint16_t_u_u((0x2EL != ((*l_328) = 0x4FL)), (safe_lshift_func_int16_t_s_u((((l_342 = &l_305) == &p_64) != ((1L & g_130) < g_112.f4)), 12)))) ^ 1L)) , l_325) & p_65) | 0xF2L))), 0x43L));
        }
        for (g_279 = 0; (g_279 > 47); g_279 = safe_add_func_uint32_t_u_u(g_279, 8))
        {
            l_325 |= (l_343[0] = p_64);
        }
    }
    else
    {
        uint8_t l_350 = 1UL;
        l_350 &= (safe_rshift_func_int16_t_s_u(((void*)0 == l_348), 4));
        return p_66;
    }
    (**l_355) |= (safe_rshift_func_int16_t_s_u((l_353[0] == (void*)0), 6));
    return (**l_355);
}







static uint64_t func_68(uint64_t p_69)
{
    int64_t l_85 = 0x15D3C3E5AF5969A1LL;
    return l_85;
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
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_101[i], "g_101[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_112.f0, "g_112.f0", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_112.f2, "g_112.f2", print_hash_value);
    transparent_crc(g_112.f3, "g_112.f3", print_hash_value);
    transparent_crc(g_112.f4, "g_112.f4", print_hash_value);
    transparent_crc(g_112.f5, "g_112.f5", print_hash_value);
    transparent_crc(g_112.f6, "g_112.f6", print_hash_value);
    transparent_crc(g_112.f7, "g_112.f7", print_hash_value);
    transparent_crc(g_112.f8, "g_112.f8", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_167[i][j], "g_167[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_495[i], "g_495[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_569.f0, "g_569.f0", print_hash_value);
    transparent_crc(g_688, "g_688", print_hash_value);
    transparent_crc(g_1010, "g_1010", print_hash_value);
    transparent_crc(g_1036.f0, "g_1036.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1192[i], "g_1192[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1219[i], "g_1219[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1223, "g_1223", print_hash_value);
    transparent_crc(g_1263, "g_1263", print_hash_value);
    transparent_crc(g_1544, "g_1544", print_hash_value);
    transparent_crc(g_1562, "g_1562", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1616[i], "g_1616[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1710, "g_1710", print_hash_value);
    transparent_crc(g_1747, "g_1747", print_hash_value);
    transparent_crc(g_1766, "g_1766", print_hash_value);
    transparent_crc(g_1820, "g_1820", print_hash_value);
    transparent_crc(g_1825, "g_1825", print_hash_value);
    transparent_crc(g_1829, "g_1829", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1887[i][j][k], "g_1887[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2109, "g_2109", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2156[i][j], "g_2156[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2180, "g_2180", print_hash_value);
    transparent_crc(g_2293, "g_2293", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2321[i][j][k], "g_2321[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2333, "g_2333", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2350[i], "g_2350[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2378, "g_2378", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
