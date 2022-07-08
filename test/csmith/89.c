// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 51F9A96
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



static int32_t g_5 = 1L;
static int32_t *g_4 = &g_5;
static uint8_t g_6[4][2][2] = {{{0x4FL,0UL},{0x4FL,0x4FL}},{{0x4FL,0UL},{0x4FL,0x4FL}},{{0x4FL,0UL},{0x4FL,0x4FL}},{{0x4FL,0UL},{0x4FL,0x4FL}}};
static int32_t g_7 = 0x2285FAAFL;
static int32_t g_45 = (-6L);
static int16_t g_73 = 0L;
static uint8_t g_76[7] = {0x5BL,0x5BL,0UL,0x5BL,0x5BL,0UL,0x5BL};
static uint64_t g_87 = 18446744073709551607UL;
static uint32_t g_100 = 0x1E68A7D7L;
static const int16_t g_104 = 0x9DBCL;
static const int16_t *g_103 = &g_104;
static int16_t **g_112 = (void*)0;
static int16_t g_119[1] = {0x50EBL};
static uint64_t g_124 = 9UL;
static int32_t **g_144 = &g_4;
static int32_t *** const g_143 = &g_144;
static uint16_t g_147 = 65535UL;
static uint16_t g_149 = 65526UL;
static int8_t g_158 = 0xA2L;
static int64_t g_189 = 0xE3BE2858D32165E1LL;
static uint64_t g_190 = 6UL;
static int8_t ** const g_243 = (void*)0;
static int64_t g_254 = 0x59E71A88FC1CA034LL;
static uint32_t g_256 = 0xFD65F528L;
static int32_t g_280[6][9] = {{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL,0x44C22DBCL}};
static int8_t g_282[4][2][1] = {{{0xF0L},{0xA7L}},{{0xF0L},{0xA7L}},{{0xF0L},{0xA7L}},{{0xF0L},{0xA7L}}};
static uint16_t g_286 = 0xCA9BL;
static uint16_t g_325 = 65533UL;
static int32_t g_344 = 0xAAFB0FECL;
static uint8_t g_345[1][7] = {{0xE0L,0xE0L,0xE0L,0xE0L,0xE0L,0xE0L,0xE0L}};
static uint16_t g_359[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static int32_t g_382 = 0x1E256835L;
static int32_t **g_385[5][8][4] = {{{&g_4,&g_4,&g_4,(void*)0},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{(void*)0,(void*)0,&g_4,&g_4},{(void*)0,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,(void*)0,&g_4}},{{&g_4,(void*)0,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,(void*)0},{&g_4,&g_4,(void*)0,&g_4},{&g_4,&g_4,&g_4,(void*)0},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,(void*)0},{&g_4,&g_4,&g_4,&g_4}},{{&g_4,(void*)0,&g_4,&g_4},{&g_4,&g_4,(void*)0,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,(void*)0,(void*)0},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,(void*)0},{(void*)0,&g_4,&g_4,&g_4},{(void*)0,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,(void*)0,&g_4,&g_4},{(void*)0,&g_4,(void*)0,(void*)0}},{{(void*)0,&g_4,(void*)0,&g_4},{(void*)0,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{(void*)0,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{(void*)0,(void*)0,&g_4,(void*)0},{&g_4,&g_4,(void*)0,&g_4}}};
static uint64_t *g_442 = &g_124;
static uint64_t *g_444 = &g_190;
static uint64_t * const *g_443 = &g_444;
static int16_t g_547[3] = {(-1L),(-1L),(-1L)};
static uint16_t g_716 = 0xEAB5L;
static int64_t *g_816 = &g_189;
static int64_t **g_815 = &g_816;
static int64_t ***g_814 = &g_815;
static int8_t *g_821[6] = {&g_282[3][1][0],&g_282[3][1][0],&g_282[3][1][0],&g_282[3][1][0],&g_282[3][1][0],&g_282[3][1][0]};
static int8_t * const *g_820 = &g_821[0];
static int8_t * const **g_819 = &g_820;
static uint8_t *g_919[6] = {(void*)0,(void*)0,&g_345[0][6],(void*)0,(void*)0,&g_345[0][6]};
static uint8_t **g_918 = &g_919[3];
static int16_t g_943 = 0x8A92L;
static int16_t * const g_942 = &g_943;
static int16_t * const *g_941 = &g_942;
static int16_t * const **g_940 = &g_941;
static int16_t ***g_946 = (void*)0;
static uint64_t **g_1005 = &g_442;
static uint64_t ***g_1004 = &g_1005;
static uint16_t g_1027 = 65526UL;
static int16_t g_1130[10][3] = {{0x6F5BL,4L,(-1L)},{4L,0x6F5BL,0x6F5BL},{(-1L),0x6F5BL,0x9CF2L},{0xD98DL,4L,0x9176L},{(-1L),(-1L),0x9176L},{4L,0xD98DL,0x9CF2L},{0x6F5BL,(-1L),0x6F5BL},{0x6F5BL,4L,(-1L)},{4L,0x6F5BL,0x6F5BL},{(-1L),0x6F5BL,0x9CF2L}};
static int32_t g_1136 = 0L;
static uint16_t *g_1237 = &g_1027;
static uint32_t g_1311 = 0x35980FF9L;
static uint64_t g_1320 = 0UL;
static uint16_t * const ****g_1324 = (void*)0;
static int32_t g_1521 = 0L;
static uint16_t g_1680 = 0UL;
static uint16_t g_1681 = 65535UL;
static uint16_t g_1682 = 1UL;
static uint16_t g_1683[7] = {0x72DCL,0x72DCL,0x72DCL,0x72DCL,0x72DCL,0x72DCL,0x72DCL};
static uint16_t g_1684 = 0xE48EL;
static uint16_t g_1685 = 0x32C0L;
static uint16_t g_1686 = 5UL;
static uint16_t g_1687 = 0UL;
static uint16_t g_1688 = 3UL;
static uint16_t g_1691 = 0x1C36L;
static const int32_t *g_1694[8] = {&g_382,&g_382,&g_382,&g_382,&g_382,&g_382,&g_382,&g_382};
static int32_t g_1844 = 0x614F8EE0L;
static int8_t *g_1851 = &g_158;
static uint8_t ***g_1866 = &g_918;
static uint8_t ****g_1865 = &g_1866;
static uint8_t *****g_1864 = &g_1865;
static uint8_t g_1909 = 251UL;
static uint8_t * const g_1908 = &g_1909;
static uint8_t * const *g_1907 = &g_1908;
static uint8_t * const **g_1906 = &g_1907;
static int16_t g_2144 = (-5L);
static uint16_t ***g_2196 = (void*)0;
static uint16_t ****g_2195 = &g_2196;
static int32_t g_2221 = 0xC8E8EDE2L;
static uint32_t g_2254[8][7][3] = {{{0x65C8ADD5L,1UL,0x3CB17FE2L},{0x31B91258L,1UL,0x31B91258L},{1UL,7UL,0UL},{0x98B7ED65L,0xDFF43046L,4294967293UL},{0x3CB17FE2L,0UL,4UL},{4294967295UL,0x7142D1F0L,0x0048F72FL},{0x3CB17FE2L,1UL,6UL}},{{0x98B7ED65L,8UL,4294967292UL},{1UL,0UL,4294967289UL},{0x31B91258L,0xAE2690A4L,0x98B7ED65L},{0x65C8ADD5L,0x4D554833L,0xE723CD94L},{0x99019DD8L,1UL,0x98B7ED65L},{0xE4B87B2FL,4294967289UL,4294967289UL},{4294967295UL,3UL,4294967292UL}},{{0UL,0x2EA14CEDL,6UL},{0xFCA646DCL,0x2B6D61A5L,0x0048F72FL},{6UL,0x65C8ADD5L,4UL},{0x9266DBE6L,0x2B6D61A5L,4294967293UL},{0UL,0x2EA14CEDL,0UL},{0xB88EDABBL,3UL,0x31B91258L},{0UL,4294967289UL,0x3CB17FE2L}},{{4294967293UL,1UL,0x25075E95L},{7UL,0x4D554833L,0xFA3584A6L},{4294967293UL,0xAE2690A4L,0x99019DD8L},{0UL,0UL,0x2EA14CEDL},{0xB88EDABBL,8UL,1UL},{0UL,1UL,0UL},{0x9266DBE6L,0x7142D1F0L,6UL}},{{6UL,0UL,0UL},{0xFCA646DCL,0xDFF43046L,1UL},{0UL,7UL,0x2EA14CEDL},{4294967295UL,1UL,0x99019DD8L},{0xE4B87B2FL,1UL,0xFA3584A6L},{0x99019DD8L,1UL,0x25075E95L},{0x65C8ADD5L,1UL,0x3CB17FE2L}},{{0UL,0x7142D1F0L,0UL},{4294967289UL,0xE4B87B2FL,0x16CB1DADL},{0x99019DD8L,0UL,0x31B91258L},{0UL,0x16CB1DADL,0xE723CD94L},{0xFCA646DCL,1UL,0xB88EDABBL},{0UL,0UL,7UL},{0x99019DD8L,0x07AAE599L,4294967293UL}},{{4294967289UL,6UL,4UL},{0UL,8UL,0x99019DD8L},{1UL,0x65C8ADD5L,0x3CB17FE2L},{4294967295UL,4294967295UL,0x99019DD8L},{0UL,4UL,4UL},{0x0048F72FL,0x0B90905DL,4294967293UL},{0xFA3584A6L,0x4D554833L,7UL}},{{4294967295UL,0xDFF43046L,0xB88EDABBL},{7UL,1UL,0xE723CD94L},{0UL,0xDFF43046L,0x31B91258L},{0x16CB1DADL,0x4D554833L,0x16CB1DADL},{1UL,0x0B90905DL,0UL},{6UL,4UL,0UL},{0x31B91258L,4294967295UL,6UL}}};
static uint32_t g_2267 = 3UL;



static uint64_t func_1(void);
static int32_t * func_2(int32_t * p_3);
static int8_t func_18(const int32_t * p_19, int32_t * p_20, int64_t p_21, const int32_t * p_22, const int32_t * p_23);
static const int32_t * func_24(uint32_t p_25, uint32_t p_26, int32_t * p_27, uint8_t p_28);
static int32_t * func_29(int32_t p_30, int32_t * p_31);
static uint8_t func_36(int32_t * p_37, uint8_t p_38);
static int32_t * func_39(int32_t p_40);
static int32_t func_41(uint16_t p_42, int8_t p_43);
static uint64_t func_51(int32_t p_52, int32_t * p_53, int16_t p_54, uint64_t p_55);
static int64_t func_58(int32_t p_59, int32_t * p_60, const int32_t * p_61, uint32_t p_62, uint32_t p_63);
# 125 "<stdin>"
static uint64_t func_1(void)
{
    int32_t *l_2061 = &g_5;
    const uint8_t *****l_2066 = (void*)0;
    int32_t l_2078 = 0xF8C9B554L;
    int32_t l_2098 = 1L;
    int16_t l_2099 = 0x3365L;
    int32_t l_2102[10][3][2];
    int32_t l_2108 = 0xC62E5A57L;
    uint8_t l_2178 = 1UL;
    int64_t l_2179[6][2] = {{9L,0x542F41CB0BAC0718LL},{0xEC55EF644D30E748LL,9L},{0L,0L},{0L,9L},{0xEC55EF644D30E748LL,0x542F41CB0BAC0718LL},{9L,0x542F41CB0BAC0718LL}};
    uint16_t ****l_2197[3];
    uint16_t *l_2227 = &g_359[4];
    uint64_t l_2242 = 0x0D8B238F158FACBDLL;
    uint16_t **l_2269[2][2] = {{&g_1237,&g_1237},{&g_1237,&g_1237}};
    uint16_t ***l_2268[9] = {&l_2269[1][0],&l_2269[0][1],&l_2269[0][1],&l_2269[1][0],&l_2269[0][1],&l_2269[0][1],&l_2269[1][0],&l_2269[0][1],&l_2269[0][1]};
    uint32_t l_2270 = 0xD08C933EL;
    int8_t *l_2271 = &g_282[1][0][0];
    int32_t *l_2272[10] = {&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5};
    int64_t l_2273 = 0x24505FCC4B776403LL;
    int64_t l_2274 = 2L;
    uint8_t l_2275[2][3];
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
                l_2102[i][j][k] = 0x89CE26B3L;
        }
    }
    for (i = 0; i < 3; i++)
        l_2197[i] = (void*)0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_2275[i][j] = 0x53L;
    }
    return (*g_444);
}







static int32_t * func_2(int32_t * p_3)
{
    uint64_t l_8 = 0xF4C59CDC345FE46CLL;
    int32_t *l_1453 = &g_1136;
    uint8_t ***l_1863 = &g_918;
    uint8_t ****l_1862 = &l_1863;
    uint8_t *****l_1861 = &l_1862;
    int32_t *l_1890 = &g_5;
    uint8_t * const *l_1905 = &g_919[4];
    uint8_t * const **l_1904 = &l_1905;
    uint64_t ** const *l_1925 = (void*)0;
    uint64_t ** const **l_1924 = &l_1925;
    uint16_t * const *l_1948 = &g_1237;
    uint16_t * const **l_1947[4] = {&l_1948,&l_1948,&l_1948,&l_1948};
    uint16_t * const ***l_1946 = &l_1947[2];
    int16_t *l_2043 = &g_73;
    int16_t **l_2042[7][8] = {{(void*)0,(void*)0,&l_2043,(void*)0,&l_2043,(void*)0,(void*)0,&l_2043},{(void*)0,&l_2043,&l_2043,(void*)0,(void*)0,(void*)0,&l_2043,&l_2043},{&l_2043,(void*)0,(void*)0,(void*)0,(void*)0,&l_2043,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_2043,&l_2043,(void*)0,(void*)0,(void*)0},{(void*)0,&l_2043,(void*)0,&l_2043,(void*)0,(void*)0,&l_2043,(void*)0},{(void*)0,(void*)0,&l_2043,(void*)0,&l_2043,(void*)0,(void*)0,&l_2043},{(void*)0,&l_2043,&l_2043,(void*)0,(void*)0,(void*)0,&l_2043,&l_2043}};
    int i, j;
    for (g_5 = 0; (g_5 <= 1); g_5 += 1)
    {
        int32_t *l_1452 = (void*)0;
        int32_t l_1911 = 0L;
        for (g_7 = 1; (g_7 >= 0); g_7 -= 1)
        {
            int32_t l_11 = 0x96378555L;
            int32_t l_1847[4][10] = {{(-6L),0x9519AE09L,(-5L),0xC622708CL,(-5L),0x9519AE09L,(-6L),(-6L),0x9519AE09L,(-5L)},{0x9519AE09L,(-6L),(-6L),0x9519AE09L,(-5L),0xC622708CL,(-5L),0x9519AE09L,(-6L),(-6L)},{(-5L),(-6L),2L,(-4L),(-4L),2L,(-6L),(-5L),(-6L),2L},{0xC622708CL,0x9519AE09L,(-4L),(-6L),2L,(-4L),(-4L),2L,(-6L),(-5L)}};
            int i, j;
            if ((*g_4))
                break;
            l_8--;
            for (l_8 = 0; (l_8 <= 1); l_8 += 1)
            {
                uint32_t l_14[9][2][4] = {{{0UL,0xA11600D5L,4294967292UL,4294967292UL},{0xC72B752BL,9UL,0x623B4709L,4294967295UL}},{{0x623B4709L,4294967295UL,6UL,4294967295UL},{4294967295UL,0xA11600D5L,0UL,0x142C78EFL}},{{0x3ACB6D64L,5UL,5UL,0x3ACB6D64L},{4294967288UL,4294967292UL,0xAFB5D1CBL,0xAFD77CCCL}},{{4294967295UL,0x3ACB6D64L,0xDA99DA97L,4294967295UL},{0x142C78EFL,0UL,0x623B4709L,4294967295UL}},{{6UL,0x3ACB6D64L,9UL,0xAFD77CCCL},{0UL,4294967292UL,0x4EA14C55L,0x3ACB6D64L}},{{0xEA0A9F4FL,5UL,4294967288UL,0x142C78EFL},{0xAFB5D1CBL,0xA11600D5L,9UL,4294967295UL}},{{0xC72B752BL,4294967295UL,4294967295UL,4294967295UL},{0x142C78EFL,9UL,6UL,4294967292UL}},{{9UL,0xA11600D5L,0xAFB5D1CBL,0x623B4709L},{0x3ACB6D64L,0xEA0A9F4FL,0UL,0x3ACB6D64L}},{{0x3ACB6D64L,4294967295UL,0xAFB5D1CBL,0UL},{9UL,0x3ACB6D64L,6UL,4294967291UL}}};
                int32_t *l_1451 = &g_344;
                int8_t *l_1845 = (void*)0;
                int8_t *l_1846 = &g_282[2][0][0];
                int i, j, k;
                if (((l_11 <= ((safe_lshift_func_uint16_t_u_s(0xFD43L, (g_7 > l_14[4][1][1]))) || ((((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_s(g_7, 0)))) != ((*l_1846) = func_18(func_24(((((*g_144) = func_29(((safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_11, func_36(func_39(func_41(l_8, g_7)), g_547[2]))), (*g_942))) | l_14[4][1][1]), l_1451)) != l_1452) | g_1130[6][1]), l_11, l_1453, l_11), p_3, l_11, p_3, p_3))) , p_3) == l_1451))) , l_1847[2][2]))
                {
                    int32_t *l_1848 = &g_382;
                    return l_1848;
                }
                else
                {
                    const uint32_t l_1857 = 18446744073709551606UL;
                    uint8_t *****l_1888 = (void*)0;
                    for (g_716 = 0; (g_716 <= 1); g_716 += 1)
                    {
                        uint32_t *l_1856 = &l_14[4][0][2];
                        int32_t l_1858 = 0xB35259D0L;
                        int32_t *l_1859 = (void*)0;
                        int32_t *l_1860 = &g_45;
                        int32_t *l_1889 = &g_382;
                        (*l_1860) ^= (((**g_815) = (*l_1453)) & ((-1L) ^ ((safe_lshift_func_int16_t_s_u(((void*)0 == g_1851), 13)) , ((safe_mul_func_uint8_t_u_u(((((*l_1856) = (((*p_3) != (safe_mul_func_int16_t_s_s((((g_547[0] <= l_1847[2][2]) , 1UL) > (*l_1453)), 0x1CE5L))) && 1L)) | l_1857) != l_1858), (*l_1451))) <= l_1847[2][2]))));
                        (*l_1889) &= (((g_1864 = l_1861) == (((safe_lshift_func_int16_t_s_u(((*l_1451) && (l_1857 > (((((((safe_add_func_int64_t_s_s((((safe_lshift_func_int16_t_s_u((*l_1453), 14)) >= ((safe_sub_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((((**g_443) , (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s(((*p_3) == ((*l_1451) , (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((**g_941), 10)) & (0x18L | 246UL)), (*g_1851))))))), 4)), 0UL))) , l_1857), 0xB4L)), (*l_1453))) | 2UL), (*l_1451))) , 6L)) && (***g_940)), (-4L))) <= 0x0AL) , (-1L)) , g_76[2]) , l_11) > 8L) >= (*l_1860)))), 7)) > 0xD14BA300A1B2286DLL) , l_1888)) > l_1847[2][2]);
                    }
                    return l_1890;
                }
            }
        }
        if (((*l_1453) = 0x6C1C8630L))
        {
            uint64_t l_1903 = 1UL;
            uint16_t **l_1910 = &g_1237;
            uint8_t ****l_1923 = (void*)0;
            if ((safe_div_func_int8_t_s_s(((*p_3) >= (safe_lshift_func_uint8_t_u_s(((*l_1453) || ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((*g_1237) , l_1903) != (*l_1453)), 1)), 0x3B58L)) != ((g_1906 = l_1904) == (void*)0)) , (((*g_1908) = (((**l_1910) |= (l_1910 == (void*)0)) , l_1903)) && (*l_1890))), 2)) , 0x6FL), 6)) , (***g_819))), 7))), l_1911)))
            {
                int32_t l_1912 = (-1L);
                l_1912 = (*p_3);
                if ((((*g_1237) = ((l_1912 = (*l_1453)) || (**g_1907))) , ((!((safe_div_func_uint32_t_u_u((0x49L >= (0xCEL > ((!(((((safe_lshift_func_uint8_t_u_s(0xEAL, ((*g_1851) = (l_1903 && (safe_div_func_int8_t_s_s((((**g_820) >= (((+(((((safe_unary_minus_func_int32_t_s(((g_76[2] , (**g_819)) == (void*)0))) , (void*)0) != (void*)0) , (*g_1237)) || l_1903)) , 18446744073709551615UL) , (*l_1453))) >= (*g_1908)), 0x3EL)))))) || l_1903) == 2UL) && l_1911) || (*l_1453))) < g_344))), 0xE469EAA8L)) , (*g_1237))) | 8UL)))
                {
                    (*l_1453) = (*p_3);
                    (*l_1861) = l_1923;
                }
                else
                {
                    (**g_143) = &l_1911;
                    (**g_144) &= ((*l_1453) = l_1903);
                    (*l_1453) = 0x2C1484C5L;
                }
            }
            else
            {
                return p_3;
            }
        }
        else
        {
            return p_3;
        }
        return p_3;
    }
    if (((&g_1004 != l_1924) , ((((*g_442) , ((*l_1890) = ((*g_816) = (*l_1453)))) < (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((*l_1453), ((safe_sub_func_int16_t_s_s(((*l_1453) >= ((safe_lshift_func_int8_t_s_s(((((*l_1453) , (safe_mul_func_int8_t_s_s(((*g_1851) |= ((***g_819) = (safe_div_func_uint64_t_u_u((*l_1453), (*l_1453))))), (*l_1453)))) , g_7) > (*l_1453)), (*l_1453))) <= 6UL)), 0x47B8L)) || (*l_1453)))), (*g_1237))), (*l_1453)))) != 0x8FL)))
    {
        uint32_t l_1969 = 7UL;
        int32_t ***l_1997 = &g_144;
        int32_t ****l_1996[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        for (g_1681 = 0; (g_1681 < 41); ++g_1681)
        {
            uint8_t l_1968[9] = {0x4FL,0x4FL,0x4FL,0x4FL,0x4FL,0x4FL,0x4FL,0x4FL,0x4FL};
            int i;
            if (((*l_1453) = ((*p_3) = (*p_3))))
            {
                if ((*l_1890))
                    break;
            }
            else
            {
                int32_t l_1963 = 0L;
                uint16_t l_1998 = 0x3EFBL;
                for (g_1682 = (-1); (g_1682 >= 40); g_1682 = safe_add_func_int64_t_s_s(g_1682, 1))
                {
                    int16_t l_1951 = 0x2392L;
                    if ((*p_3))
                        break;
                    (***g_143) ^= ((void*)0 != l_1946);
                    if (((0x43121D6FL != (safe_mul_func_int16_t_s_s((((l_1951 , ((((***g_814) = l_1951) , (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((*g_1908), ((1UL || ((((0x3F4CL < (!1UL)) >= (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u(l_1963, (safe_mod_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u(l_1968[3], l_1969)) > l_1951) != l_1951) && l_1951), (*g_1237))))) > g_87), 0)), g_100))) & 0UL) , 0xF6L)) > (*p_3)))), l_1963))) || l_1968[3])) , 0xEF3EC35AL) | (***g_143)), 0x70B5L))) , (***g_143)))
                    {
                        return p_3;
                    }
                    else
                    {
                        return l_1890;
                    }
                }
                (*l_1453) = (safe_mod_func_int64_t_s_s(((-3L) >= (safe_add_func_int32_t_s_s(((**g_820) | (safe_mul_func_uint16_t_u_u((l_1963 | (safe_lshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u((((*p_3) = (*g_4)) , ((((((safe_lshift_func_uint8_t_u_s(((safe_add_func_int64_t_s_s(((((safe_mul_func_uint8_t_u_u((*l_1453), (safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s(((*g_816) = (**g_815)), 1L)), (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((((*g_942) , (((void*)0 != l_1996[4]) & (-8L))) >= g_359[8]), l_1968[3])) && l_1963), (*l_1890))) | g_73), l_1963)))))) <= 0xDAF73983L) , (*g_816)) >= 0xB32E59459ACA77E7LL), l_1968[3])) , l_1998), (***g_819))) , (void*)0) == (void*)0) , 0x116CF66CL) & l_1998) , 0xAA9FL)), l_1998)) != l_1998), 5))), l_1963))), g_716))), 0x90A9A0C9E3F5BFB5LL));
                for (g_1684 = 0; (g_1684 >= 56); g_1684 = safe_add_func_int32_t_s_s(g_1684, 1))
                {
                    for (g_149 = 0; (g_149 <= 6); g_149 += 1)
                    {
                        int32_t *l_2001 = (void*)0;
                        return l_2001;
                    }
                }
            }
        }
    }
    else
    {
        int32_t *l_2006[4] = {&g_1844,&g_1844,&g_1844,&g_1844};
        int32_t l_2007 = 0x60AD66EFL;
        int32_t l_2041[5];
        int i;
        for (i = 0; i < 5; i++)
            l_2041[i] = 0x58A0B440L;
        (***g_143) = (safe_mul_func_uint8_t_u_u(((2UL | (((g_1844 = ((safe_rshift_func_int8_t_s_u(1L, 7)) , ((*l_1453) , g_190))) , (l_2007 , (((((*g_1237) <= (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(0x6033CE45C9D0E745LL, (l_2007 | (*l_1890)))) < 0x69586D9DL), 10)) & 0x4F4F5BA6L), 251UL))) <= 246UL) ^ (-1L)) == l_2007))) >= 0UL)) == (*l_1453)), 0x9EL));
        (**g_143) = p_3;
        for (g_254 = (-11); (g_254 < 14); ++g_254)
        {
            int64_t l_2024 = (-8L);
            int64_t l_2038 = 0L;
            int32_t **l_2052 = &l_1890;
            for (l_2007 = 3; (l_2007 >= 0); l_2007 -= 1)
            {
                const uint64_t l_2017 = 0x609FF8A5AB0C4765LL;
            }
            for (l_2007 = (-5); (l_2007 < (-15)); --l_2007)
            {
                if ((*p_3))
                {
                    if ((***g_143))
                        break;
                }
                else
                {
                    if ((*p_3))
                        break;
                }
                if (l_2024)
                    break;
            }
            (*l_2052) = ((*g_144) = func_29(((*l_1453) = ((((safe_rshift_func_uint16_t_u_s((0xFC610BFFL ^ l_2038), 0)) , 255UL) ^ ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((l_2038 == ((l_1861 = &l_1862) != &g_1865)), 3)), (65531UL == (*l_1890)))) || 0x44AEL)) , (-8L))), (**g_143)));
            (*p_3) = (safe_lshift_func_uint16_t_u_s((*g_1237), ((0x3C9CL == 65535UL) , ((*g_942) = ((((*l_2043) = ((l_2041[0] , func_29((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((safe_add_func_int16_t_s_s(l_2041[3], (g_359[8] = ((**l_2052) < (*l_1453))))) & g_189) > ((l_2007 >= 0x63L) != (*l_1890))), (*p_3))), (**l_2052))), p_3)) == &g_100)) <= 0UL) && l_2007)))));
        }
    }
    return l_1453;
}







static int8_t func_18(const int32_t * p_19, int32_t * p_20, int64_t p_21, const int32_t * p_22, const int32_t * p_23)
{
    uint32_t l_1512[10][7] = {{18446744073709551606UL,0x47419F35L,1UL,0xA92E91A3L,18446744073709551606UL,0xA92E91A3L,1UL},{0x5F5B6E14L,0x5F5B6E14L,0xC8976ECEL,0x042C929CL,0x071FE102L,0x618B4ACDL,8UL},{0x16564675L,0x08D01BB7L,0x16564675L,0xA92E91A3L,7UL,0x08D01BB7L,7UL},{1UL,0x042C929CL,0x042C929CL,1UL,0x071FE102L,0xC8976ECEL,0x981AAA93L},{18446744073709551606UL,0x2E564A69L,0x02003C67L,0x2E564A69L,18446744073709551606UL,0x08D01BB7L,0x02003C67L},{0x618B4ACDL,0x5F5B6E14L,8UL,8UL,0x5F5B6E14L,0x618B4ACDL,0x981AAA93L},{7UL,0xA92E91A3L,0x16564675L,0x08D01BB7L,0x16564675L,0xA92E91A3L,7UL},{0x618B4ACDL,8UL,0x981AAA93L,1UL,1UL,0x981AAA93L,8UL},{18446744073709551606UL,0xA92E91A3L,1UL,0x47419F35L,18446744073709551606UL,0x47419F35L,1UL},{1UL,0x5F5B6E14L,0x981AAA93L,0x042C929CL,0x618B4ACDL,0x618B4ACDL,0x042C929CL}};
    int32_t l_1520[4][2][2] = {{{0x04E913DBL,0x0BCF3E4BL},{0x04E913DBL,0x0BCF3E4BL}},{{0x04E913DBL,0x0BCF3E4BL},{0x04E913DBL,0x0BCF3E4BL}},{{0x04E913DBL,0x0BCF3E4BL},{0x04E913DBL,0x0BCF3E4BL}},{{0x04E913DBL,0x0BCF3E4BL},{0x04E913DBL,0x0BCF3E4BL}}};
    uint8_t l_1523 = 0x82L;
    int16_t *l_1553 = (void*)0;
    int16_t **l_1552 = &l_1553;
    int64_t **l_1567 = &g_816;
    uint16_t l_1599 = 65526UL;
    uint8_t ***l_1632[7][7][5] = {{{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{(void*)0,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,(void*)0},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,(void*)0,&g_918,&g_918,(void*)0}},{{(void*)0,(void*)0,&g_918,(void*)0,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{(void*)0,&g_918,&g_918,(void*)0,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918}},{{&g_918,&g_918,&g_918,&g_918,&g_918},{(void*)0,&g_918,(void*)0,(void*)0,(void*)0},{&g_918,&g_918,(void*)0,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,(void*)0},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,(void*)0,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918}},{{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{(void*)0,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,(void*)0}},{{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,(void*)0,&g_918,&g_918,(void*)0},{(void*)0,(void*)0,&g_918,(void*)0,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{(void*)0,&g_918,&g_918,(void*)0,&g_918}},{{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{(void*)0,&g_918,(void*)0,(void*)0,(void*)0},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,(void*)0,&g_918,&g_918}},{{&g_918,&g_918,&g_918,&g_918,(void*)0},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,&g_918},{&g_918,&g_918,&g_918,&g_918,(void*)0}}};
    int8_t *l_1676 = &g_282[1][1][0];
    uint64_t ***l_1738 = &g_1005;
    uint8_t l_1742 = 0x55L;
    int16_t l_1761 = (-2L);
    uint32_t l_1828 = 0x0826F180L;
    int i, j, k;
    for (g_286 = (-10); (g_286 <= 44); g_286++)
    {
        int32_t l_1518 = 0x404D9D15L;
        int32_t l_1519[10] = {0x9D181E04L,0x895F9CBDL,0x9D181E04L,0x9D181E04L,0x895F9CBDL,0x9D181E04L,0x9D181E04L,0x895F9CBDL,0x9D181E04L,0x9D181E04L};
        int8_t l_1522[7][4][3] = {{{4L,(-5L),(-1L)},{1L,(-1L),8L},{0x8DL,4L,(-1L)},{0x4FL,1L,0x79L}},{{0x79L,0xB4L,0x8DL},{(-8L),0x79L,0L},{0xC3L,0L,0xA4L},{1L,0L,0x40L}},{{(-1L),0x79L,(-1L)},{(-10L),0xB4L,0L},{(-8L),1L,0x17L},{0x61L,4L,0xC3L}},{{0L,(-1L),0x61L},{0x61L,(-5L),(-8L)},{(-8L),1L,1L},{(-10L),0x75L,1L}},{{(-1L),1L,0xB4L},{1L,0x17L,0xB4L},{0xC3L,1L,1L},{(-8L),0x61L,1L}},{{0x79L,0L,(-8L)},{0x4FL,0x9BL,0x61L},{0x8DL,0xA4L,0xC3L},{1L,0x9BL,0x17L}},{{4L,0L,0L},{0L,0x61L,(-1L)},{0x75L,1L,0x40L},{1L,0x17L,0xA4L}}};
        uint32_t l_1573 = 0x3A1D5D68L;
        int32_t l_1598 = (-7L);
        uint16_t * const l_1690 = &g_1691;
        uint16_t * const *l_1689[7][9][2] = {{{(void*)0,(void*)0},{&l_1690,(void*)0},{(void*)0,&l_1690},{(void*)0,(void*)0},{&l_1690,(void*)0},{(void*)0,&l_1690},{&l_1690,&l_1690},{&l_1690,&l_1690},{&l_1690,(void*)0}},{{&l_1690,&l_1690},{&l_1690,(void*)0},{&l_1690,&l_1690},{&l_1690,&l_1690},{(void*)0,&l_1690},{&l_1690,&l_1690},{(void*)0,&l_1690},{&l_1690,&l_1690},{&l_1690,(void*)0}},{{&l_1690,&l_1690},{&l_1690,(void*)0},{&l_1690,&l_1690},{&l_1690,&l_1690},{&l_1690,&l_1690},{&l_1690,(void*)0},{&l_1690,&l_1690},{&l_1690,&l_1690},{&l_1690,&l_1690}},{{&l_1690,(void*)0},{&l_1690,&l_1690},{(void*)0,(void*)0},{&l_1690,&l_1690},{&l_1690,&l_1690},{(void*)0,&l_1690},{&l_1690,&l_1690},{(void*)0,&l_1690},{(void*)0,&l_1690}},{{&l_1690,&l_1690},{&l_1690,&l_1690},{&l_1690,&l_1690},{(void*)0,&l_1690},{(void*)0,&l_1690},{&l_1690,&l_1690},{(void*)0,&l_1690},{&l_1690,&l_1690},{&l_1690,(void*)0}},{{(void*)0,&l_1690},{&l_1690,(void*)0},{&l_1690,&l_1690},{&l_1690,&l_1690},{&l_1690,&l_1690},{&l_1690,(void*)0},{&l_1690,&l_1690},{(void*)0,(void*)0},{&l_1690,&l_1690}},{{&l_1690,&l_1690},{(void*)0,&l_1690},{&l_1690,&l_1690},{(void*)0,&l_1690},{(void*)0,&l_1690},{&l_1690,&l_1690},{&l_1690,&l_1690},{&l_1690,&l_1690},{(void*)0,&l_1690}}};
        int32_t **l_1714[4];
        uint16_t l_1721 = 9UL;
        uint64_t ****l_1760 = (void*)0;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1714[i] = &g_4;
        for (g_100 = 0; (g_100 <= 29); g_100 = safe_add_func_uint32_t_u_u(g_100, 2))
        {
            int32_t *l_1513 = &g_382;
            int32_t *l_1514 = (void*)0;
            int32_t *l_1515 = &g_382;
            int32_t *l_1516 = &g_1136;
            int32_t *l_1517[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1517[i] = &g_382;
            if (l_1512[2][5])
                break;
            ++l_1523;
        }
        for (g_147 = 0; (g_147 > 41); g_147 = safe_add_func_uint32_t_u_u(g_147, 7))
        {
            uint32_t l_1533[4];
            int32_t l_1541 = 0x1F6A1D16L;
            int16_t l_1570 = 0L;
            int32_t l_1657 = 0x4A77609FL;
            int32_t l_1707[4] = {(-10L),(-10L),(-10L),(-10L)};
            uint64_t ****l_1739 = &g_1004;
            int i;
            for (i = 0; i < 4; i++)
                l_1533[i] = 0x2E0F899CL;
            for (g_87 = 0; (g_87 <= 2); ++g_87)
            {
                uint16_t l_1542 = 65535UL;
                int32_t l_1571 = 0xE3ECAC3BL;
                int32_t l_1572[5];
                uint16_t l_1631 = 65531UL;
                int32_t l_1655 = 1L;
                int32_t l_1656 = (-4L);
                int32_t l_1658 = 9L;
                uint16_t **l_1669 = &g_1237;
                uint16_t ***l_1668 = &l_1669;
                uint16_t * const l_1679[3][2][4] = {{{&g_1686,(void*)0,(void*)0,&g_1686},{(void*)0,&g_1686,(void*)0,(void*)0}},{{&g_1686,&g_1686,&g_1680,&g_1686},{&g_1686,(void*)0,(void*)0,&g_1686}},{{(void*)0,&g_1686,(void*)0,(void*)0},{&g_1686,&g_1686,&g_1680,&g_1686}}};
                uint16_t * const *l_1678[8][9][3] = {{{&l_1679[0][1][3],&l_1679[0][1][3],&l_1679[1][1][0]},{&l_1679[1][1][0],&l_1679[0][1][2],&l_1679[1][1][1]},{(void*)0,(void*)0,&l_1679[2][0][2]},{&l_1679[0][1][3],&l_1679[1][1][0],&l_1679[1][1][1]},{&l_1679[0][1][3],&l_1679[1][1][0],&l_1679[1][1][0]},{(void*)0,&l_1679[0][1][3],&l_1679[0][0][2]},{&l_1679[0][1][3],&l_1679[0][1][1],(void*)0},{(void*)0,&l_1679[0][1][3],&l_1679[0][1][0]},{(void*)0,(void*)0,(void*)0}},{{&l_1679[0][1][3],&l_1679[0][1][3],&l_1679[1][1][2]},{&l_1679[2][1][2],&l_1679[0][1][1],&l_1679[2][1][2]},{&l_1679[0][1][3],&l_1679[0][1][3],&l_1679[1][1][0]},{&l_1679[0][1][3],&l_1679[1][1][0],&l_1679[2][0][2]},{&l_1679[1][1][2],&l_1679[1][1][0],(void*)0},{&l_1679[1][1][3],(void*)0,(void*)0},{&l_1679[1][1][2],&l_1679[0][1][2],&l_1679[0][1][3]},{&l_1679[0][1][3],&l_1679[0][1][3],&l_1679[0][1][1]},{&l_1679[0][1][3],&l_1679[1][1][1],(void*)0}},{{&l_1679[2][1][2],&l_1679[1][1][1],&l_1679[0][1][3]},{&l_1679[0][1][3],&l_1679[0][0][2],&l_1679[0][1][0]},{(void*)0,&l_1679[2][1][2],&l_1679[0][1][3]},{(void*)0,(void*)0,(void*)0},{&l_1679[0][1][3],&l_1679[1][1][3],&l_1679[0][1][1]},{(void*)0,&l_1679[0][0][2],&l_1679[0][1][3]},{&l_1679[0][1][3],&l_1679[0][1][3],(void*)0},{&l_1679[0][1][3],&l_1679[0][1][3],(void*)0},{(void*)0,&l_1679[0][1][3],&l_1679[2][0][2]}},{{&l_1679[1][1][0],&l_1679[0][0][2],&l_1679[0][1][3]},{&l_1679[1][1][0],&l_1679[0][1][3],&l_1679[0][1][3]},{&l_1679[0][1][3],(void*)0,&l_1679[1][1][0]},{&l_1679[2][1][2],&l_1679[0][1][3],&l_1679[2][0][2]},{(void*)0,&l_1679[0][1][3],&l_1679[0][1][3]},{&l_1679[2][1][2],&l_1679[0][1][3],&l_1679[1][1][3]},{&l_1679[0][1][3],&l_1679[0][1][3],&l_1679[0][0][2]},{&l_1679[1][1][0],(void*)0,(void*)0},{&l_1679[0][1][3],&l_1679[1][1][1],&l_1679[0][1][3]}},{{&l_1679[1][1][1],(void*)0,&l_1679[2][0][2]},{&l_1679[0][1][3],&l_1679[0][1][3],&l_1679[0][1][3]},{&l_1679[0][1][3],(void*)0,(void*)0},{&l_1679[0][1][0],(void*)0,&l_1679[0][0][2]},{(void*)0,(void*)0,&l_1679[1][1][3]},{(void*)0,(void*)0,&l_1679[0][1][3]},{&l_1679[1][1][3],&l_1679[1][1][1],&l_1679[2][0][2]},{&l_1679[0][1][2],(void*)0,&l_1679[1][1][0]},{&l_1679[0][1][3],(void*)0,&l_1679[0][1][3]}},{{(void*)0,(void*)0,&l_1679[0][1][3]},{(void*)0,(void*)0,&l_1679[2][1][2]},{&l_1679[1][1][0],&l_1679[0][1][3],&l_1679[0][1][0]},{&l_1679[0][1][3],(void*)0,&l_1679[0][1][3]},{&l_1679[1][1][0],&l_1679[1][1][1],&l_1679[0][1][3]},{(void*)0,(void*)0,(void*)0},{(void*)0,&l_1679[0][1][3],(void*)0},{&l_1679[0][1][3],&l_1679[0][1][3],(void*)0},{&l_1679[0][1][2],&l_1679[0][1][3],&l_1679[1][1][2]}},{{&l_1679[1][1][3],&l_1679[0][1][3],(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&l_1679[0][1][3],(void*)0},{&l_1679[0][1][0],&l_1679[0][0][2],&l_1679[0][1][3]},{&l_1679[0][1][3],&l_1679[1][1][0],&l_1679[0][1][3]},{&l_1679[0][1][3],&l_1679[0][1][2],&l_1679[0][1][0]},{&l_1679[1][1][1],&l_1679[1][1][0],&l_1679[2][1][2]},{&l_1679[0][1][3],&l_1679[0][0][2],&l_1679[0][1][3]},{&l_1679[1][1][0],&l_1679[0][1][3],&l_1679[0][1][3]}},{{&l_1679[0][1][3],(void*)0,&l_1679[1][1][0]},{&l_1679[2][1][2],&l_1679[0][1][3],&l_1679[2][0][2]},{(void*)0,&l_1679[0][1][3],&l_1679[0][1][3]},{&l_1679[2][1][2],&l_1679[0][1][3],&l_1679[1][1][3]},{&l_1679[0][1][3],&l_1679[0][1][3],&l_1679[0][0][2]},{&l_1679[1][1][0],(void*)0,(void*)0},{&l_1679[0][1][3],&l_1679[1][1][1],&l_1679[0][1][3]},{&l_1679[1][1][1],(void*)0,&l_1679[2][0][2]},{&l_1679[0][1][3],&l_1679[0][1][3],&l_1679[0][1][3]}}};
                uint16_t * const **l_1677 = &l_1678[6][2][2];
                uint32_t l_1708 = 0x93D2E47EL;
                uint32_t l_1729 = 1UL;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1572[i] = 0L;
                for (g_73 = 0; (g_73 >= 0); g_73 -= 1)
                {
                    int32_t l_1540[3][9] = {{0L,0L,0L,0L,0L,0L,0L,0L,0L},{(-5L),1L,1L,(-5L),1L,1L,(-5L),1L,1L},{0L,0L,0L,0L,0L,0L,0L,0L,0L}};
                    uint64_t ***l_1545 = &g_1005;
                    uint64_t l_1554 = 18446744073709551613UL;
                    int32_t *l_1555 = &g_1136;
                    int16_t * const *l_1597 = &l_1553;
                    int i, j;
                    if ((0L & (!g_1130[(g_73 + 1)][g_73])))
                    {
                        return l_1533[0];
                    }
                    else
                    {
                        int32_t *l_1535 = &l_1519[1];
                        int32_t *l_1536 = (void*)0;
                        int32_t *l_1537 = &g_344;
                        int32_t *l_1538 = &g_1136;
                        int32_t *l_1539[2][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j;
                        l_1519[1] ^= (~g_716);
                        --l_1542;
                    }
                    l_1541 = (l_1520[1][1][1] |= (((((((((void*)0 != l_1545) , (safe_add_func_int8_t_s_s(p_21, p_21))) , (void*)0) != (*g_143)) > (++g_345[g_73][(g_73 + 4)])) >= 0xE70676A8L) == (safe_div_func_uint32_t_u_u((((void*)0 != l_1552) <= 0xE2L), l_1554))) || (*g_444)));
                    (*l_1555) = (*p_19);
                }
                if (l_1599)
                {
                    const int32_t *l_1601 = &g_344;
                    const int32_t **l_1600 = &l_1601;
                    int32_t *l_1604 = (void*)0;
                    int32_t *l_1605 = &l_1520[1][1][1];
                    int32_t l_1637 = (-10L);
                    (*l_1600) = p_23;
                    if (((*l_1605) = (l_1572[0] ^= (4L >= ((safe_lshift_func_uint16_t_u_u(0xE571L, 3)) , ((**g_443) == l_1520[0][1][0]))))))
                    {
                        int16_t l_1626 = 0xB7ABL;
                        int16_t *l_1627 = (void*)0;
                        int16_t *l_1628 = &g_1130[2][2];
                        int32_t *** const *l_1630 = &g_143;
                        int32_t *** const **l_1629 = &l_1630;
                        (*g_144) = (void*)0;
                        (*l_1605) = (~((((4294967295UL < (((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(l_1523, (**g_941))), (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(((p_21 , ((((((*g_444) |= 0UL) & ((((*l_1629) = ((safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s(((l_1519[3] |= l_1520[2][0][1]) , (safe_lshift_func_uint16_t_u_s(p_21, 10))), (~(((*l_1628) = ((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s((((*l_1601) && l_1626) , p_21), p_21)), p_21)) , 0L)) & l_1626)))), 0xB3344BEBL)) , (void*)0)) != &g_143) || (*g_1237))) >= (***g_940)) > p_21) <= 0L)) != l_1571), (*l_1601))), l_1631)))) , (void*)0) != l_1632[2][5][2])) == p_21) , l_1533[0]) >= 18446744073709551615UL));
                    }
                    else
                    {
                        uint32_t l_1633 = 0x989CED5FL;
                        int32_t *l_1636[3][6][3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 6; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_1636[i][j][k] = &l_1572[0];
                            }
                        }
                        --l_1633;
                        l_1637 = ((*l_1605) ^= l_1572[2]);
                    }
                    for (l_1631 = 0; (l_1631 >= 40); ++l_1631)
                    {
                        int32_t ***l_1642 = &g_144;
                        int32_t ****l_1641 = &l_1642;
                        int32_t *****l_1640 = &l_1641;
                        uint32_t l_1659 = 0xF419FFB4L;
                        uint64_t *l_1662 = &g_1320;
                        uint32_t *l_1663 = &l_1512[7][5];
                        (*l_1600) = (*l_1600);
                        (****l_1640) = (****l_1640);
                        if (l_1631)
                            continue;
                    }
                }
                else
                {
                    (*g_144) = (void*)0;
                    for (g_254 = 0; (g_254 <= 2); g_254 += 1)
                    {
                        int i;
                        return g_547[g_254];
                    }
                }
                if ((p_21 > (safe_div_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_s((((*l_1668) = &g_1237) != (l_1689[2][8][0] = ((*l_1677) = ((safe_mul_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((-1L), ((safe_rshift_func_uint8_t_u_s(((l_1656 = (0xBFL != (((*g_1237) | (p_21 , 0x89D7L)) > (&l_1522[6][2][0] == l_1676)))) > l_1522[4][0][2]), p_21)) >= 0x7549L))) , 0L), 0x66L)) , (void*)0)))), p_21)) == 0x2CF35875L) || (*p_23)), p_21))))
                {
                    uint32_t *l_1699[6][9] = {{(void*)0,&g_1311,(void*)0,&g_1311,&g_1311,(void*)0,&g_1311,(void*)0,(void*)0},{&g_256,&g_256,(void*)0,(void*)0,(void*)0,(void*)0,&g_1311,&g_1311,(void*)0},{&g_1311,&g_1311,&g_1311,&g_1311,&g_1311,&g_1311,&g_1311,&g_1311,&g_1311},{&g_1311,&g_1311,(void*)0,(void*)0,(void*)0,(void*)0,&g_1311,&g_1311,(void*)0},{&g_1311,&g_1311,&g_1311,&g_1311,&g_1311,&g_1311,&g_1311,&g_1311,&g_1311},{&g_1311,&g_1311,(void*)0,(void*)0,(void*)0,(void*)0,&g_1311,&g_1311,(void*)0}};
                    int32_t l_1700 = 1L;
                    int32_t *l_1713 = &g_280[0][4];
                    const int32_t **l_1716 = &g_1694[4];
                    const int32_t ***l_1715 = &l_1716;
                    int i, j;
                    for (g_1681 = 0; (g_1681 <= 6); g_1681 += 1)
                    {
                        const int32_t *l_1693[7][7] = {{(void*)0,&g_1136,&g_7,&g_7,&g_1136,(void*)0,&g_1136},{&l_1657,(void*)0,(void*)0,&l_1657,&l_1541,&l_1657,(void*)0},{&l_1571,&l_1571,(void*)0,&g_7,(void*)0,&l_1571,&l_1571},{&g_1136,(void*)0,&l_1519[7],(void*)0,&g_1136,&g_1136,(void*)0},{&l_1572[0],&g_1136,&l_1572[0],(void*)0,(void*)0,&l_1572[0],&g_1136},{(void*)0,&l_1541,&l_1519[7],&l_1519[7],&l_1541,(void*)0,&l_1541},{&l_1572[0],(void*)0,(void*)0,&l_1572[0],&g_1136,&l_1572[0],(void*)0}};
                        const int32_t **l_1692[9] = {(void*)0,&l_1693[4][4],&l_1693[4][4],(void*)0,&l_1693[4][4],&l_1693[4][4],(void*)0,&l_1693[4][4],&l_1693[4][4]};
                        int i, j;
                        g_1694[0] = p_19;
                        g_1694[0] = p_22;
                    }
                    l_1700 ^= (safe_sub_func_uint8_t_u_u((0x59AEL && (safe_mod_func_uint16_t_u_u(((l_1657 = (0x3412B2C8L & ((--g_256) , 3L))) < (((safe_div_func_uint16_t_u_u((p_21 == ((((safe_add_func_uint8_t_u_u((l_1707[2] |= (++l_1708)), (safe_add_func_int32_t_s_s((((((*l_1713) = p_21) , l_1714[2]) == ((*l_1715) = &p_23)) , ((*g_940) == ((safe_add_func_int64_t_s_s((((((safe_add_func_int64_t_s_s((((*l_1690) &= ((*g_1237) = 0xB128L)) && 0x273AL), (**g_815))) , p_21) != p_21) , l_1542) == p_21), (**l_1716))) , (void*)0))), 0xFBC8D02FL)))) > l_1520[1][1][1]) != l_1721) , p_21)), p_21)) >= p_21) < 0x9FL)), p_21))), p_21));
                }
                else
                {
                    l_1655 = ((*g_1237) && (++(***l_1668)));
                }
                for (g_1691 = 0; (g_1691 >= 34); ++g_1691)
                {
                    int8_t l_1727 = 0x01L;
                    int32_t l_1728 = 4L;
                    int32_t l_1732 = 0x1D67A5E7L;
                    int32_t l_1734 = 1L;
                    uint32_t l_1735 = 0x614C086BL;
                    for (g_124 = 0; g_124 < 6; g_124 += 1)
                    {
                        g_821[g_124] = (void*)0;
                    }
                    for (l_1571 = 5; (l_1571 >= 0); l_1571 -= 1)
                    {
                        int16_t l_1726 = (-1L);
                        int32_t l_1733 = 0L;
                        --l_1729;
                        ++l_1735;
                    }
                }
            }
            l_1707[1] &= ((((((*l_1739) = l_1738) == (void*)0) | (((*g_1237) = ((safe_sub_func_uint8_t_u_u(p_21, (++l_1742))) == (l_1541 , ((**g_443) = (**g_443))))) ^ 0xF560L)) <= (safe_unary_minus_func_uint16_t_u((0xC382L != (((((*l_1690) = (l_1520[2][0][1] = 5UL)) ^ 0x915FL) | p_21) || 0L))))) || (*g_1237));
            if ((*p_19))
                break;
        }
        if ((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((***g_940) = (safe_mod_func_int64_t_s_s(l_1520[1][1][1], 0x35E73D085BC045A4LL))), 0)) == l_1742), p_21)))
        {
            const uint16_t *l_1756 = &g_325;
            const uint16_t **l_1755[1];
            const uint16_t ***l_1754 = &l_1755[0];
            int32_t l_1759 = 0x31701399L;
            const int32_t l_1762 = (-1L);
            int32_t l_1763[5];
            uint32_t l_1764 = 0UL;
            const int64_t l_1767 = 2L;
            int i;
            for (i = 0; i < 1; i++)
                l_1755[i] = &l_1756;
            for (i = 0; i < 5; i++)
                l_1763[i] = (-8L);
            l_1763[3] = (((void*)0 == l_1690) != (safe_mul_func_int16_t_s_s(((((((l_1754 == &l_1689[4][5][1]) , p_21) , (((safe_rshift_func_uint8_t_u_u(l_1520[1][1][1], ((l_1759 |= p_21) , p_21))) < ((void*)0 != l_1760)) < p_21)) >= l_1761) < p_21) ^ l_1762), 0x558EL)));
            (**g_143) = p_20;
        }
        else
        {
            for (g_716 = (-4); (g_716 >= 52); g_716 = safe_add_func_uint64_t_u_u(g_716, 1))
            {
                return p_21;
            }
        }
    }
    for (l_1761 = 0; (l_1761 <= 3); l_1761 += 1)
    {
        uint8_t l_1790 = 0UL;
        int32_t l_1793[7];
        int32_t *l_1794[6][1] = {{(void*)0},{&g_344},{(void*)0},{&g_344},{(void*)0},{&g_344}};
        uint8_t l_1795 = 0x73L;
        int64_t ***l_1819 = (void*)0;
        int32_t l_1826 = (-2L);
        uint64_t l_1827 = 0x95B0C99EFB0BB232LL;
        const uint64_t *l_1842 = &g_1320;
        const uint64_t **l_1841 = &l_1842;
        const uint64_t *** const l_1840 = &l_1841;
        int i, j;
        for (i = 0; i < 7; i++)
            l_1793[i] = 1L;
        l_1795 ^= (l_1793[6] |= ((((safe_div_func_uint64_t_u_u(0UL, (safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((((safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s((l_1520[1][1][1] && (l_1520[1][1][1] = (((l_1512[9][6] == (&g_814 != &g_814)) & 0xA7L) || (safe_div_func_int64_t_s_s((***g_814), (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_1523, ((safe_add_func_uint32_t_u_u(((l_1790--) || ((void*)0 == &g_918)), 0UL)) >= (-2L)))), (*g_942)))))))), (*g_942))), (*g_816))) , (void*)0) != (void*)0) ^ 0UL), 65535UL)), g_1311)))) < g_282[3][1][0]) != l_1761) && 1L));
        for (g_256 = 0; (g_256 <= 0); g_256 += 1)
        {
            int32_t *l_1796 = &l_1793[1];
            uint8_t ** const *l_1798 = &g_918;
            uint8_t ** const **l_1797[10][8] = {{&l_1798,&l_1798,&l_1798,&l_1798,&l_1798,&l_1798,&l_1798,&l_1798},{(void*)0,&l_1798,&l_1798,&l_1798,&l_1798,&l_1798,&l_1798,&l_1798},{&l_1798,&l_1798,(void*)0,(void*)0,&l_1798,&l_1798,&l_1798,&l_1798},{&l_1798,&l_1798,&l_1798,&l_1798,&l_1798,&l_1798,&l_1798,&l_1798},{(void*)0,&l_1798,&l_1798,&l_1798,&l_1798,&l_1798,&l_1798,&l_1798},{(void*)0,&l_1798,&l_1798,(void*)0,(void*)0,&l_1798,&l_1798,&l_1798},{&l_1798,(void*)0,&l_1798,&l_1798,&l_1798,(void*)0,&l_1798,&l_1798},{&l_1798,&l_1798,&l_1798,&l_1798,(void*)0,&l_1798,&l_1798,&l_1798},{&l_1798,&l_1798,(void*)0,(void*)0,(void*)0,&l_1798,&l_1798,&l_1798},{&l_1798,&l_1798,(void*)0,&l_1798,&l_1798,&l_1798,&l_1798,&l_1798}};
            uint8_t ** const ***l_1799 = &l_1797[5][1];
            uint8_t ** const **l_1801 = &l_1798;
            uint8_t ** const ***l_1800[9];
            uint8_t ** const **l_1802 = &l_1798;
            int i, j;
            for (i = 0; i < 9; i++)
                l_1800[i] = &l_1801;
            (**g_143) = l_1796;
            l_1802 = ((*l_1799) = l_1797[5][1]);
            if (((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int8_t_s_s(0x94L, (((*g_1237) = p_21) || ((p_21 < ((safe_rshift_func_uint16_t_u_u((((*l_1796) = (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((((**g_443)--) < (**g_815)) != (l_1819 != ((((*p_23) == (**g_144)) == (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(p_21, (-1L))) , p_21), l_1826)), p_21))) , &g_815))), (*l_1796))), 5))) > p_21), l_1512[2][5])) <= 1L)) > l_1827)))) , p_21) < 0UL), p_21)), l_1828)), 5)) < p_21))
            {
                return l_1742;
            }
            else
            {
                if ((*g_4))
                    break;
                for (g_1136 = 0; (g_1136 <= 3); g_1136 += 1)
                {
                    int i, j, k;
                    return g_282[g_1136][g_256][g_256];
                }
                (*g_4) ^= (*p_19);
            }
            if ((*p_20))
                break;
            for (g_1687 = 0; (g_1687 <= 3); g_1687 += 1)
            {
                uint64_t l_1833 = 6UL;
                uint64_t ***l_1839 = (void*)0;
                int32_t l_1843 = 0xFE4F016FL;
                int i, j, k;
                g_1844 |= (l_1843 = ((***g_143) = (safe_sub_func_uint16_t_u_u(((g_282[l_1761][(g_256 + 1)][g_256] < (l_1520[0][0][1] ^= (safe_div_func_int64_t_s_s((p_21 >= (*l_1796)), (((-6L) && l_1833) ^ (((safe_add_func_int64_t_s_s((((*g_103) & (safe_lshift_func_uint8_t_u_u(2UL, p_21))) || (((!(l_1839 == l_1840)) ^ g_1682) , 0x2F4833FF7D00185CLL)), 0L)) , g_1683[0]) , l_1833)))))) && p_21), l_1599))));
            }
        }
    }
    return p_21;
}







static const int32_t * func_24(uint32_t p_25, uint32_t p_26, int32_t * p_27, uint8_t p_28)
{
    int32_t l_1457 = 0L;
    uint32_t *l_1458 = (void*)0;
    int32_t l_1459 = 0x2248EA44L;
    int32_t ***l_1465 = &g_385[0][6][3];
    int32_t ****l_1464 = &l_1465;
    uint8_t **l_1468[1][9];
    uint8_t **l_1469 = (void*)0;
    int16_t l_1479 = 0x9A07L;
    int64_t *l_1486 = &g_254;
    int32_t *l_1501 = (void*)0;
    int32_t *l_1502 = &g_382;
    uint32_t l_1503 = 4294967288UL;
    int64_t *l_1504 = &g_189;
    uint16_t *l_1505 = &g_359[8];
    uint32_t *l_1506 = (void*)0;
    uint32_t *l_1507 = &g_256;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
            l_1468[i][j] = &g_919[5];
    }
    for (g_943 = (-2); (g_943 > 11); g_943 = safe_add_func_uint32_t_u_u(g_943, 6))
    {
        int32_t l_1456 = 0x1540DF79L;
        l_1457 |= (1UL < l_1456);
    }
    (*p_27) = (((l_1457 != ((--g_1311) , (((l_1459 = (safe_sub_func_uint32_t_u_u((0x2016C777E92E0F7CLL || 0x25DA0F3E783A27CFLL), 0xE4810AB1L))) , ((*l_1464) = &g_144)) == ((safe_mod_func_uint16_t_u_u(((l_1468[0][0] = l_1468[0][0]) != l_1469), ((((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(p_25, ((safe_rshift_func_int16_t_s_s(((**g_941) != 65526UL), p_28)) , (***g_940)))), 0x2C42BBCBL)) < (-4L)) <= 18446744073709551615UL) | (**g_941)))) , (void*)0)))) && p_25) , (****l_1464));
    (*p_27) = (safe_sub_func_uint16_t_u_u((****l_1464), ((*g_1237) = (~l_1479))));
    (*p_27) = ((safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((((*l_1507) = ((safe_lshift_func_uint8_t_u_s(((0L <= ((((**g_814) = l_1486) != l_1486) || (p_28 = (safe_mul_func_int8_t_s_s((((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_28, (safe_rshift_func_int8_t_s_u(0xA5L, 2)))), (((*g_816) > ((safe_lshift_func_uint16_t_u_s(((****l_1464) == (((((*p_27) == (safe_sub_func_int64_t_s_s((((*g_1237) &= ((safe_mod_func_int32_t_s_s(((((*l_1504) = (((((*l_1502) = (l_1457 &= 0xF1DEC25EL)) || g_280[1][3]) , (***l_1465)) <= l_1503)) , l_1505) != (void*)0), (-7L))) | 0x7A03L)) == p_26), p_28))) == p_28) == (***l_1465)) , (***g_940))), 4)) || (***l_1465))) , (*g_1237)))) , 0xD9L) , 0x3CL), p_28))))) | p_26), 3)) < g_76[2])) & 0x7AA697BCL), p_25)) | p_26), p_26)) == (****l_1464));
    return (***l_1464);
}







static int32_t * func_29(int32_t p_30, int32_t * p_31)
{
    return (*g_144);
}







static uint8_t func_36(int32_t * p_37, uint8_t p_38)
{
    uint64_t l_720 = 6UL;
    uint64_t *l_731 = &g_124;
    int32_t *l_732 = &g_382;
    int8_t *l_738 = (void*)0;
    int64_t *l_747 = &g_189;
    int64_t **l_746[8][10][3] = {{{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747},{&l_747,(void*)0,&l_747},{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747},{(void*)0,&l_747,&l_747},{&l_747,&l_747,&l_747}},{{&l_747,(void*)0,&l_747},{&l_747,&l_747,(void*)0},{&l_747,&l_747,&l_747},{&l_747,&l_747,(void*)0},{(void*)0,&l_747,(void*)0},{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747},{&l_747,&l_747,(void*)0},{&l_747,&l_747,(void*)0}},{{&l_747,&l_747,&l_747},{(void*)0,&l_747,(void*)0},{&l_747,(void*)0,&l_747},{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747},{&l_747,(void*)0,&l_747},{(void*)0,&l_747,&l_747},{&l_747,&l_747,&l_747},{(void*)0,&l_747,&l_747},{&l_747,&l_747,&l_747}},{{(void*)0,&l_747,&l_747},{&l_747,&l_747,&l_747},{(void*)0,(void*)0,&l_747},{&l_747,&l_747,&l_747},{(void*)0,&l_747,&l_747},{&l_747,(void*)0,&l_747},{(void*)0,&l_747,&l_747},{&l_747,&l_747,(void*)0},{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747}},{{&l_747,(void*)0,&l_747},{(void*)0,&l_747,&l_747},{&l_747,&l_747,&l_747},{&l_747,(void*)0,&l_747},{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747},{&l_747,(void*)0,&l_747},{(void*)0,&l_747,&l_747},{&l_747,&l_747,&l_747}},{{&l_747,(void*)0,&l_747},{&l_747,&l_747,(void*)0},{&l_747,&l_747,(void*)0},{&l_747,&l_747,&l_747},{(void*)0,&l_747,&l_747},{&l_747,(void*)0,&l_747},{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747},{&l_747,(void*)0,(void*)0},{&l_747,&l_747,&l_747}},{{&l_747,&l_747,(void*)0},{&l_747,&l_747,&l_747},{(void*)0,&l_747,&l_747},{(void*)0,&l_747,&l_747},{&l_747,&l_747,(void*)0},{&l_747,&l_747,(void*)0},{&l_747,&l_747,&l_747},{&l_747,(void*)0,&l_747},{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747}},{{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747},{&l_747,&l_747,&l_747},{&l_747,(void*)0,&l_747},{&l_747,(void*)0,&l_747},{&l_747,&l_747,&l_747},{&l_747,&l_747,(void*)0},{&l_747,&l_747,&l_747},{&l_747,&l_747,(void*)0},{&l_747,&l_747,&l_747}}};
    int64_t ***l_745 = &l_746[3][5][1];
    int32_t l_748[10] = {0x64DE4139L,0xD9745D3AL,0x64DE4139L,0xD9745D3AL,0x64DE4139L,0xD9745D3AL,0x64DE4139L,0xD9745D3AL,0x64DE4139L,0xD9745D3AL};
    int16_t *l_749 = (void*)0;
    int16_t *l_750[5] = {&g_119[0],&g_119[0],&g_119[0],&g_119[0],&g_119[0]};
    uint16_t *l_751[6];
    int32_t l_752 = 8L;
    uint64_t l_766 = 0xCECD26EEC4CE2E58LL;
    int8_t *** const *l_772 = (void*)0;
    uint8_t l_796 = 0x6DL;
    int8_t * const **l_823 = &g_820;
    int8_t l_848 = 0x9DL;
    int8_t l_930 = 1L;
    int16_t * const *l_938 = &l_750[2];
    int16_t * const **l_937 = &l_938;
    uint32_t l_1058 = 0x19D2A81AL;
    int8_t ***l_1109 = (void*)0;
    int8_t ****l_1108 = &l_1109;
    uint16_t l_1206 = 0x69C4L;
    uint16_t * const ****l_1325[1][4][1];
    int32_t *l_1443 = &g_7;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_751[i] = &g_325;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_1325[i][j][k] = (void*)0;
        }
    }
    p_37 = (void*)0;
    return (*l_1443);
}







static int32_t * func_39(int32_t p_40)
{
    int32_t **l_383 = &g_4;
    int64_t *l_391[10][10][1] = {{{(void*)0},{&g_254},{&g_189},{&g_189},{(void*)0},{&g_254},{(void*)0},{&g_189},{&g_189},{&g_254}},{{(void*)0},{&g_189},{(void*)0},{&g_254},{&g_189},{&g_189},{(void*)0},{&g_254},{(void*)0},{&g_189}},{{&g_189},{&g_254},{(void*)0},{&g_189},{(void*)0},{&g_254},{&g_189},{&g_189},{(void*)0},{&g_254}},{{(void*)0},{&g_189},{&g_189},{&g_254},{(void*)0},{&g_189},{(void*)0},{&g_254},{&g_189},{&g_189}},{{(void*)0},{&g_254},{(void*)0},{&g_189},{&g_189},{&g_254},{(void*)0},{&g_189},{(void*)0},{&g_254}},{{&g_189},{&g_189},{(void*)0},{&g_254},{(void*)0},{&g_189},{&g_189},{&g_254},{(void*)0},{&g_189}},{{(void*)0},{&g_254},{&g_189},{&g_189},{(void*)0},{&g_254},{(void*)0},{&g_189},{&g_189},{&g_254}},{{(void*)0},{&g_189},{(void*)0},{&g_254},{&g_189},{&g_189},{(void*)0},{&g_254},{(void*)0},{&g_189}},{{&g_189},{&g_254},{(void*)0},{&g_189},{(void*)0},{&g_254},{&g_189},{&g_189},{(void*)0},{&g_254}},{{(void*)0},{&g_189},{&g_189},{&g_254},{(void*)0},{&g_189},{(void*)0},{&g_254},{&g_189},{&g_189}}};
    int8_t l_392[4] = {0xB7L,0xB7L,0xB7L,0xB7L};
    int64_t l_456 = 0xBACFE627C25200B4LL;
    int16_t *l_463[6];
    int16_t ** const l_462[1] = {&l_463[0]};
    int32_t l_493 = 7L;
    int32_t l_555 = 0x068D99A1L;
    int32_t l_556 = 9L;
    int32_t l_557 = 0xCEF3B74BL;
    int32_t l_559 = 0x141AA751L;
    int32_t l_560 = 1L;
    int32_t l_563 = (-1L);
    int32_t l_564 = 0x3EFE719FL;
    const int32_t l_598 = 0L;
    uint64_t **l_616 = (void*)0;
    uint16_t l_619 = 65535UL;
    uint32_t *l_628[3];
    uint64_t ***l_717 = &l_616;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_463[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_628[i] = &g_100;
    for (g_149 = 0; (g_149 == 17); g_149 = safe_add_func_uint16_t_u_u(g_149, 7))
    {
        int32_t *l_378 = (void*)0;
        int32_t * const l_381 = &g_382;
        int32_t * const *l_380[5][9] = {{&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381}};
        int32_t * const **l_379 = &l_380[3][3];
        int32_t ***l_384[9] = {&l_383,&l_383,&l_383,&l_383,&l_383,&l_383,&l_383,&l_383,&l_383};
        uint64_t *l_386 = &g_87;
        uint32_t l_445 = 9UL;
        int8_t *l_457 = &g_282[1][1][0];
        const int16_t *l_501[6][5][8] = {{{&g_119[0],(void*)0,&g_119[0],&g_119[0],&g_104,&g_119[0],&g_119[0],&g_119[0]},{&g_73,&g_104,(void*)0,&g_119[0],&g_73,(void*)0,&g_73,&g_119[0]},{&g_73,&g_73,&g_73,(void*)0,&g_119[0],(void*)0,&g_119[0],&g_104},{&g_119[0],(void*)0,&g_73,&g_73,(void*)0,&g_119[0],&g_119[0],&g_119[0]},{&g_119[0],&g_104,(void*)0,&g_73,&g_119[0],&g_119[0],(void*)0,&g_119[0]}},{{&g_73,(void*)0,&g_104,&g_119[0],&g_73,(void*)0,&g_119[0],(void*)0},{&g_73,(void*)0,&g_119[0],&g_73,&g_104,(void*)0,(void*)0,&g_119[0]},{&g_119[0],&g_119[0],&g_119[0],&g_119[0],(void*)0,(void*)0,&g_119[0],&g_119[0]},{&g_119[0],&g_119[0],&g_119[0],(void*)0,&g_119[0],&g_73,&g_104,&g_73},{(void*)0,&g_119[0],(void*)0,&g_119[0],&g_73,&g_119[0],&g_73,&g_73}},{{&g_119[0],&g_119[0],&g_104,(void*)0,&g_119[0],&g_73,(void*)0,&g_119[0]},{&g_119[0],&g_119[0],&g_73,&g_119[0],(void*)0,&g_104,&g_119[0],&g_119[0]},{&g_119[0],&g_119[0],(void*)0,&g_73,&g_119[0],(void*)0,(void*)0,(void*)0},{(void*)0,&g_119[0],&g_119[0],&g_119[0],&g_119[0],&g_119[0],&g_119[0],&g_119[0]},{&g_104,&g_73,&g_104,&g_73,(void*)0,(void*)0,&g_119[0],&g_119[0]}},{{&g_119[0],&g_119[0],&g_73,&g_73,&g_104,&g_104,&g_119[0],&g_104},{&g_119[0],&g_73,&g_104,(void*)0,&g_73,&g_119[0],&g_119[0],&g_119[0]},{&g_73,&g_119[0],&g_119[0],&g_119[0],&g_73,&g_119[0],(void*)0,&g_119[0]},{&g_104,(void*)0,(void*)0,&g_119[0],&g_73,&g_73,&g_119[0],&g_119[0]},{&g_73,(void*)0,&g_73,(void*)0,(void*)0,&g_73,(void*)0,&g_73}},{{&g_73,&g_119[0],&g_119[0],&g_119[0],&g_119[0],&g_104,&g_119[0],&g_119[0]},{&g_104,&g_104,&g_73,&g_119[0],&g_119[0],&g_104,(void*)0,(void*)0},{&g_73,&g_119[0],&g_119[0],(void*)0,&g_73,(void*)0,&g_73,&g_104},{(void*)0,&g_119[0],(void*)0,&g_119[0],(void*)0,&g_104,(void*)0,&g_73},{&g_73,(void*)0,&g_119[0],(void*)0,&g_119[0],(void*)0,&g_119[0],&g_104}},{{&g_104,&g_119[0],&g_119[0],&g_73,&g_119[0],&g_119[0],&g_104,&g_104},{&g_119[0],&g_119[0],(void*)0,&g_104,&g_73,(void*)0,&g_73,&g_73},{&g_104,&g_119[0],&g_104,&g_119[0],&g_73,&g_104,(void*)0,&g_73},{&g_119[0],&g_104,&g_73,&g_73,&g_119[0],&g_73,&g_119[0],&g_119[0]},{&g_104,(void*)0,&g_73,&g_119[0],&g_119[0],&g_73,&g_73,&g_119[0]}}};
        int64_t **l_541 = &l_391[6][9][0];
        int16_t *l_597 = &g_73;
        int64_t *l_664 = &g_254;
        uint32_t l_711 = 0x975EEF4EL;
        int i, j, k;
        if ((safe_rshift_func_int8_t_s_u((((safe_add_func_uint64_t_u_u(((*l_386) ^= (l_378 != ((((*l_379) = (*g_143)) != (g_385[3][1][3] = l_383)) , ((**l_383) , (**g_143))))), ((safe_sub_func_uint8_t_u_u(((+(((~0L) & p_40) , (255UL >= ((l_391[8][6][0] == &g_254) | 18446744073709551615UL)))) != g_344), (*l_381))) && (**g_144)))) <= 4294967286UL) | 0UL), l_392[1])))
        {
            int64_t *l_401[1];
            int32_t l_403[7][5][7] = {{{(-4L),0L,(-1L),1L,(-7L),(-1L),1L},{0L,0x3EBB1A31L,9L,0xC436E84EL,0x989D66A2L,0xDDF2FB80L,0x84B7907BL},{0xA2949DA9L,(-1L),0x166499E2L,(-5L),0x989D66A2L,(-4L),0L},{0xDD0A5689L,0x2B0F47E2L,(-9L),(-2L),(-7L),0x61F652B7L,(-8L)},{(-8L),0xE29910F5L,0xC436E84EL,0x122CDF6BL,0x2B0F47E2L,0x2B0F47E2L,0x122CDF6BL}},{{0xBAD0AA76L,0x84B7907BL,0xBAD0AA76L,0xE29910F5L,0x166499E2L,4L,0xD4EAE016L},{(-5L),7L,0xD0A2CF00L,0xC436E84EL,0x94A89D1CL,(-7L),0x989D66A2L},{(-1L),0x166499E2L,(-7L),0xEF935917L,(-2L),4L,(-5L)},{1L,(-4L),(-9L),(-8L),(-1L),0x2B0F47E2L,(-4L)},{0x2B0F47E2L,0xDDF2FB80L,0x3EE53BEDL,0L,3L,0x61F652B7L,1L}},{{(-10L),0x84B7907BL,0xB15BB331L,0x166499E2L,9L,(-4L),0L},{1L,2L,(-1L),0xD0A2CF00L,1L,0xDDF2FB80L,0L},{(-1L),(-9L),(-1L),4L,0L,(-1L),1L},{0L,9L,0x1EC9E225L,1L,(-7L),(-4L),(-4L)},{(-1L),(-7L),9L,(-7L),(-1L),0L,(-5L)}},{{0xA2949DA9L,0L,(-1L),0xE29910F5L,0L,(-4L),0x989D66A2L},{(-1L),0xDD0A5689L,0x75E7EE65L,1L,0L,0L,(-1L)},{0xD0A2CF00L,0L,(-4L),0x3EE53BEDL,0xDD0A5689L,(-2L),(-1L)},{(-1L),1L,4L,7L,0x077340E4L,(-9L),0L},{1L,(-1L),0L,(-4L),0xFC2CCE62L,(-5L),4L}},{{0xC436E84EL,7L,0x463E3B50L,(-5L),0xB15BB331L,(-1L),1L},{(-5L),7L,0x75E7EE65L,0L,0x2B0F47E2L,0L,7L},{(-2L),(-1L),0x077340E4L,(-8L),0x180E5726L,0x24C9B862L,(-5L)},{0x122CDF6BL,1L,0xA2949DA9L,0x3EBB1A31L,0xA2949DA9L,1L,0x122CDF6BL},{0xE29910F5L,0L,0x94A89D1CL,4L,(-7L),0x1EC9E225L,0L}},{{0xC436E84EL,0xDD0A5689L,(-1L),(-10L),0L,0xC436E84EL,0x61F652B7L},{0xEF935917L,0x2B0F47E2L,0x94A89D1CL,2L,0L,0x077340E4L,7L},{(-8L),(-4L),0xA2949DA9L,0x463E3B50L,9L,(-1L),0xEF935917L},{0L,(-9L),0x077340E4L,7L,4L,1L,(-1L)},{0x166499E2L,0L,0x75E7EE65L,(-1L),(-5L),0xDDF2FB80L,0xBAD0AA76L}},{{0xD0A2CF00L,0L,0x463E3B50L,(-1L),0L,(-2L),(-4L)},{4L,1L,0L,7L,7L,(-10L),(-1L)},{1L,(-1L),4L,0x463E3B50L,(-8L),0x463E3B50L,4L},{(-7L),(-7L),(-4L),2L,0xB15BB331L,(-9L),1L},{0xE29910F5L,0x077340E4L,0x75E7EE65L,(-10L),(-9L),0x122CDF6BL,0x077340E4L}}};
            uint8_t *l_494 = &g_6[0][0][0];
            int64_t l_561 = (-8L);
            int16_t *l_580 = (void*)0;
            int32_t l_589 = (-3L);
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_401[i] = (void*)0;
            for (g_286 = 29; (g_286 < 3); --g_286)
            {
                int32_t **l_399 = (void*)0;
                uint64_t *l_400 = &g_124;
                int64_t **l_402 = &l_391[8][6][0];
                int8_t *l_458 = &l_392[1];
                if ((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((g_87 ^ (((p_40 , (*g_103)) <= (((*l_400) = ((((void*)0 != l_399) == (-1L)) > ((void*)0 != &g_103))) | (((*l_402) = l_401[0]) != (void*)0))) < l_403[3][4][3])), g_282[1][0][0])), g_87)) & (*l_381)) && 9UL))
                {
                    uint32_t l_447 = 0xD586583FL;
                    int32_t l_449 = 1L;
                    uint16_t *l_453[9] = {&g_359[2],&g_359[2],&g_359[2],&g_359[2],&g_359[2],&g_359[2],&g_359[2],&g_359[2],&g_359[2]};
                    int16_t **l_461 = (void*)0;
                    int i;
                    (*l_381) |= (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((+(safe_rshift_func_int16_t_s_s((g_359[4] || 0x71AC5D8DL), 1))), (0L >= l_403[3][4][3]))), p_40));
                    for (g_189 = (-26); (g_189 <= (-26)); ++g_189)
                    {
                        int8_t *l_429 = &l_392[3];
                        uint64_t **l_441[4][9];
                        int32_t l_446 = 0xBB463BC3L;
                        uint16_t *l_448 = &g_325;
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_441[i][j] = &l_400;
                        }
                        (*l_381) = (-3L);
                        (*l_381) |= (g_282[3][1][0] != (!(g_254 = (safe_add_func_int64_t_s_s((l_403[3][4][3] ^= g_158), g_190)))));
                        l_403[2][4][2] = ((*l_381) = (g_147 ^ ((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((*l_448) = (safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_int8_t_s(((*l_429) = 0x7DL))) , ((l_446 &= (g_254 ^= (l_445 = (safe_sub_func_uint64_t_u_u((g_124 = (safe_rshift_func_int16_t_s_s((p_40 == (safe_rshift_func_uint16_t_u_s(0x36A5L, (p_40 > (safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(((g_442 = (l_400 = l_391[8][6][0])) == (void*)0), 0x93C8L)), 6)) == ((((*g_444) = ((g_443 = g_443) != (void*)0)) != g_189) >= (-6L))))))))), 14))), p_40))))) > p_40)), 3)), l_447)), p_40)), g_359[8]))), 4)) , 0UL), 1L)) < 5L)));
                        l_403[3][4][3] = (l_449 = l_403[2][3][4]);
                    }
                    if (((~p_40) <= (safe_sub_func_uint64_t_u_u(((void*)0 == l_453[8]), ((l_449 >= (0x090D9D56L < (((l_449 || p_40) >= (((***g_143) , (l_456 = (l_403[3][4][3] , p_40))) < 0x40L)) , g_7))) , (*l_381))))))
                    {
                        l_403[2][1][4] ^= (((((*g_444) , l_457) != l_458) >= (g_382 >= (p_40 , (((safe_mul_func_int64_t_s_s(4L, ((l_461 != l_462[0]) >= g_344))) , (**l_383)) , (**l_383))))) || (**g_443));
                        if (p_40)
                            break;
                    }
                    else
                    {
                        uint32_t *l_490 = (void*)0;
                        uint32_t *l_491[10] = {&g_256,(void*)0,(void*)0,&g_256,&g_256,&g_256,(void*)0,(void*)0,&g_256,&g_256};
                        int32_t l_492 = 1L;
                        int i;
                        if ((**g_144))
                            break;
                        l_403[3][4][3] ^= 1L;
                        l_493 = ((((safe_mul_func_uint16_t_u_u(((0x496B3881E752152CLL ^ (safe_div_func_uint32_t_u_u((l_492 = (g_256 = (p_40 | (l_403[3][4][3] = (safe_rshift_func_uint16_t_u_s((((safe_mod_func_int64_t_s_s((((g_73 = p_40) >= (safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_119[0] = (-9L)), ((l_449 = (p_40 | ((safe_mul_func_uint16_t_u_u(0x18A1L, (-5L))) ^ ((safe_mul_func_uint8_t_u_u(0x26L, (safe_add_func_int64_t_s_s(0x204423AFD62D1949LL, 0x7D2F8A94D586B5BELL)))) != 0x66BCL)))) < p_40))), p_40)), p_40)), l_447)), g_158)), p_40))) || p_40), (-5L))) < (**l_383)) || p_40), 7)))))), g_345[0][2]))) , 1UL), (-10L))) == p_40) != (**l_383)) , p_40);
                    }
                }
                else
                {
                    int32_t l_500 = (-1L);
                    uint32_t *l_513 = &g_256;
                    (*l_381) = (((void*)0 == l_494) , (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s(((!(g_87 , (**l_383))) | (l_500 < ((void*)0 != l_501[0][0][1]))), 8UL)), (safe_sub_func_int32_t_s_s((**g_144), 4294967295UL)))));
                    l_403[3][4][3] = (p_40 == (!(((safe_add_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u(((l_403[3][4][3] >= g_282[1][1][0]) < ((safe_div_func_int8_t_s_s(p_40, ((*l_494) = l_500))) | (safe_sub_func_int8_t_s_s((-5L), g_119[0])))), (**l_383))) , ((*l_513) = ((void*)0 == l_401[0]))), p_40)) >= p_40) < (*g_103))));
                }
                if (p_40)
                    continue;
            }
            for (l_456 = 6; (l_456 >= 2); l_456 -= 1)
            {
                int32_t *l_522 = (void*)0;
                int32_t l_551[4] = {0x38D90144L,0x38D90144L,0x38D90144L,0x38D90144L};
                int64_t l_565 = 3L;
                uint32_t l_567 = 0UL;
                int16_t **l_615[9][1][10] = {{{&l_580,(void*)0,&l_463[0],&l_580,&l_463[0],&l_580,&l_463[2],&l_463[1],&l_463[0],&l_463[2]}},{{(void*)0,&l_463[1],&l_463[2],&l_580,&l_580,&l_580,&l_580,&l_463[2],&l_463[1],(void*)0}},{{(void*)0,&l_580,&l_597,&l_463[5],&l_580,(void*)0,(void*)0,&l_463[2],&l_597,(void*)0}},{{(void*)0,&l_463[0],&l_463[0],&l_580,&l_580,(void*)0,&l_580,&l_597,&l_463[0],&l_580}},{{&l_580,&l_463[2],&l_463[0],&l_463[5],&l_580,&l_580,&l_580,&l_463[0],(void*)0,&l_463[0]}},{{&l_463[0],&l_463[1],&l_580,&l_580,&l_597,(void*)0,&l_597,&l_580,&l_580,&l_463[1]}},{{&l_463[0],&l_463[0],&l_463[0],(void*)0,&l_597,(void*)0,&l_463[0],&l_580,&l_463[0],&l_597}},{{&l_580,(void*)0,&l_597,&l_463[2],&l_580,(void*)0,&l_463[0],&l_580,&l_463[2],(void*)0}},{{&l_463[0],&l_463[5],&l_597,&l_580,&l_463[0],(void*)0,&l_597,(void*)0,&l_463[0],&l_597}}};
                int32_t l_622[10][1] = {{(-3L)},{1L},{(-3L)},{1L},{(-3L)},{1L},{(-3L)},{1L},{(-3L)},{1L}};
                int i, j, k;
                l_403[3][1][5] |= (safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((((p_40 < (safe_unary_minus_func_uint8_t_u(251UL))) || (~((0x27L >= ((*l_383) != l_522)) || ((safe_mod_func_uint8_t_u_u(p_40, g_76[5])) <= (**l_383))))) & ((0xEBL < (-1L)) | p_40)), p_40)) & (*g_444)), g_359[8])), (**l_383)));
                for (g_45 = 5; (g_45 >= 1); g_45 -= 1)
                {
                    int8_t l_550 = (-1L);
                    int32_t l_552 = (-3L);
                    int32_t l_553 = 0x4BB063C2L;
                    int32_t l_554[3][4][5] = {{{(-5L),0x204B0BD9L,1L,(-2L),0L},{0x19148886L,0x2BD3024CL,0xF03D51DBL,0xDCB08D1FL,1L},{(-1L),0xD947F102L,(-2L),0xD947F102L,(-1L)},{(-1L),0x19148886L,(-5L),0L,0xD947F102L}},{{0x19148886L,(-8L),0xDB4E0C9CL,(-5L),(-2L)},{(-5L),0xDB4E0C9CL,(-8L),0x19148886L,0xD947F102L},{0L,(-5L),0x19148886L,(-1L),(-1L)},{0xD947F102L,(-2L),0xD947F102L,(-1L),1L}},{{0xDCB08D1FL,0xF03D51DBL,0x2BD3024CL,0x19148886L,0L},{(-2L),1L,0x204B0BD9L,(-5L),6L},{1L,0x8C1EB45DL,0x2BD3024CL,0L,(-8L)},{0xDE096B94L,(-2L),0xD947F102L,0xD947F102L,(-2L)}}};
                    int32_t l_562 = (-2L);
                    int64_t **l_588 = &l_401[0];
                    uint16_t *l_592 = &g_359[5];
                    int i, j, k;
                    for (l_445 = 2; (l_445 <= 6); l_445 += 1)
                    {
                        int64_t l_535 = 0L;
                        uint32_t *l_538 = &g_256;
                        uint16_t *l_542[8] = {&g_149,&g_359[8],&g_149,&g_149,&g_359[8],&g_149,&g_149,&g_359[8]};
                        uint64_t *l_548 = &g_124;
                        int32_t l_549 = 0L;
                        int32_t l_558 = (-7L);
                        int32_t l_566 = (-9L);
                        int i;
                        l_549 |= ((*l_381) = (g_280[2][3] && (l_403[2][4][6] == (((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_sub_func_int64_t_s_s(((((*l_548) = (safe_rshift_func_int8_t_s_s((1L > (safe_sub_func_uint32_t_u_u(((l_535 = (65526UL & (**l_383))) != ((*l_386) ^= ((**g_443) = (((safe_sub_func_int64_t_s_s(((((*l_538)++) , l_541) != ((l_542[0] == (void*)0) , (((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((**l_383) ^ p_40), g_7)), 1UL)) <= g_547[2]) , (void*)0))), g_382)) > (*g_103)) & g_100)))), 0x2B3C6477L))), 0))) != 0xF71D8A4CF801480BLL) || (**g_443)), p_40)) || g_256), (**l_383))) & (-2L)), p_40)) == p_40) == p_40))));
                        l_567++;
                        l_589 ^= (safe_sub_func_int32_t_s_s((l_554[1][0][0] = (safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((l_403[3][4][3] , (*l_381)) | l_566), (safe_mul_func_uint8_t_u_u(g_6[0][0][1], ((safe_sub_func_int16_t_s_s((*g_103), (l_580 != (void*)0))) > (((((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((((safe_div_func_uint64_t_u_u((((+0L) || ((void*)0 == l_588)) == 0x72L), 0xE83A258A5554F3AFLL)) ^ 0x772F0E567B26BC06LL) ^ g_149), p_40)), g_254)) >= 7UL) > (*g_444)) > l_558) ^ 5UL)))))), g_547[2]))), 1L));
                    }
                    l_589 ^= p_40;
                    l_552 = ((((safe_lshift_func_uint8_t_u_s((g_345[0][2] | (((void*)0 != &g_144) <= (l_592 == (void*)0))), (safe_rshift_func_int16_t_s_u(((0x4CL || (((*l_386) = (((*g_444) = (*g_444)) & (**l_383))) | (safe_div_func_int64_t_s_s(((void*)0 == l_597), p_40)))) ^ g_286), 14)))) , (**g_443)) & p_40) > l_598);
                    if ((***g_143))
                        break;
                }
                for (l_564 = 0; (l_564 <= 5); l_564 += 1)
                {
                    uint32_t l_602[2][3];
                    uint8_t *l_625 = &g_345[0][6];
                    uint8_t **l_626 = &l_625;
                    int32_t l_629 = 6L;
                    uint16_t *l_640 = &g_359[8];
                    uint16_t *l_643 = &g_147;
                    uint16_t *l_644 = &g_286;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_602[i][j] = 1UL;
                    }
                }
            }
        }
        else
        {
            uint16_t *l_690 = &g_325;
            uint32_t *l_712 = &g_256;
            int32_t l_713 = 0x203B8898L;
            uint16_t *l_714 = &g_359[8];
            int32_t l_715[8][1][10] = {{{0x76AB4EC3L,(-1L),0xC43493D8L,0x0DCDA81AL,5L,0xE5671055L,0L,0L,9L,0x7A0F6665L}},{{(-9L),0L,0L,5L,(-9L),0L,0L,0x8651F1D8L,0xC43493D8L,9L}},{{1L,(-9L),0x3EEA7DE0L,(-1L),0x76AB4EC3L,0x751DD36BL,0x76AB4EC3L,(-1L),0x3EEA7DE0L,(-9L)}},{{4L,0xE5671055L,0L,0x76AB4EC3L,0x099B290DL,0x726C4624L,0x8651F1D8L,(-9L),0x726C4624L,0x3286DBDFL}},{{9L,4L,0L,9L,0x0DCDA81AL,0x726C4624L,1L,0L,0x099B290DL,0L}},{{4L,0L,0x66170235L,0L,(-1L),0x751DD36BL,4L,1L,(-1L),0x099B290DL}},{{5L,6L,0x751DD36BL,0L,0x4118A9ADL,0x4118A9ADL,0L,0x751DD36BL,6L,5L}},{{1L,0xE5671055L,0x66170235L,0x598307F5L,(-1L),0L,0x4118A9ADL,0x099B290DL,(-8L),0x598307F5L}}};
            int i, j, k;
            l_564 ^= ((safe_unary_minus_func_uint8_t_u((safe_add_func_int64_t_s_s((safe_div_func_uint32_t_u_u((p_40 < (g_716 = ((safe_mul_func_int16_t_s_s((l_715[6][0][6] ^= (p_40 != (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(p_40, 0)), (p_40 > ((((((*l_714) = (safe_add_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s(((*l_381) = (((safe_unary_minus_func_uint64_t_u((safe_mul_func_uint16_t_u_u((+(((*l_690) = 3UL) != ((safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(8L, 9)), ((safe_sub_func_int64_t_s_s((1UL < (safe_mod_func_uint32_t_u_u(((*l_712) |= (safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_int8_t_s((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((1L != (((safe_lshift_func_int8_t_s_u((+l_711), 4)) == p_40) > (**l_383))) < g_280[0][0]), 65526UL)), g_282[3][0][0])), 0xFAA4L)))) >= 0xDE7ABBF8L), 7))), 0xAA2F22B1L))), g_5)) != (-1L)))) && l_713))), 0x5B8FL)))) | 0UL) && p_40)), g_345[0][6])) != g_345[0][6]), p_40))) | l_713) > p_40) < (-2L)) | (-10L))))))), (**l_383))) > 0x7ECFL))), (-1L))), p_40)))) | g_104);
            return (*g_144);
        }
    }
    (*l_717) = &g_444;
    return (*l_383);
}







static int32_t func_41(uint16_t p_42, int8_t p_43)
{
    uint16_t l_48 = 65527UL;
    uint32_t l_291 = 0xCA5B1883L;
    uint32_t l_319 = 1UL;
    int8_t *l_326 = (void*)0;
    int8_t *l_328 = (void*)0;
    int64_t *l_331 = &g_254;
    int64_t **l_330[2][9][7] = {{{&l_331,(void*)0,&l_331,(void*)0,&l_331,(void*)0,&l_331},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_331,(void*)0,&l_331,(void*)0,&l_331,(void*)0,&l_331},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_331,(void*)0,&l_331,(void*)0,&l_331,(void*)0,&l_331},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_331,(void*)0,&l_331,(void*)0,&l_331,(void*)0,&l_331},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_331,(void*)0,&l_331,(void*)0,&l_331,(void*)0,&l_331}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_331,(void*)0,&l_331,(void*)0,&l_331,(void*)0,&l_331},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_331,(void*)0,&l_331,(void*)0,&l_331,(void*)0,&l_331},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_331,(void*)0,&l_331,(void*)0,&l_331,(void*)0,&l_331},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_331,(void*)0,&l_331,(void*)0,&l_331,(void*)0,&l_331},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_343 = 0x2E63CF0BL;
    uint16_t *l_369 = &g_286;
    int i, j, k;
    for (p_43 = 1; (p_43 >= 0); p_43 -= 1)
    {
        int32_t *l_44 = &g_45;
        int32_t *l_46 = &g_45;
        int32_t *l_47[1][2][5] = {{{&g_45,&g_45,&g_45,&g_45,&g_45},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int16_t *l_72 = &g_73;
        uint8_t *l_74 = &g_6[1][1][1];
        uint8_t *l_75[9] = {&g_76[4],&g_76[4],&g_76[4],&g_76[4],&g_76[4],&g_76[4],&g_76[4],&g_76[4],&g_76[4]};
        uint16_t l_79[4][8] = {{65533UL,65535UL,0x1AA3L,0x6DCEL,0xDE22L,0x8B8EL,7UL,7UL},{0x1AA3L,65533UL,0xADE0L,0xADE0L,65533UL,0x1AA3L,7UL,65532UL},{65535UL,0xADE0L,0x1AA3L,0x8B8EL,0x6DCEL,0xD26BL,0x6DCEL,65535UL},{0xADE0L,7UL,0xADE0L,65535UL,1UL,65533UL,0x6DCEL,65535UL}};
        uint64_t l_292[9] = {18446744073709551615UL,18446744073709551615UL,0x754F78D936C7ACA8LL,18446744073709551615UL,18446744073709551615UL,0x754F78D936C7ACA8LL,18446744073709551615UL,18446744073709551615UL,0x754F78D936C7ACA8LL};
        int16_t *l_322 = &g_119[0];
        int16_t *l_323 = (void*)0;
        int16_t *l_324[7];
        int8_t **l_327 = &l_326;
        uint8_t l_329 = 6UL;
        int64_t **l_335 = &l_331;
        int16_t * const *l_341 = &l_72;
        int16_t * const **l_340 = &l_341;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_324[i] = (void*)0;
        ++l_48;
        (*l_46) = p_42;
        (*l_46) = ((func_51(((((safe_mod_func_uint16_t_u_u((((0UL & func_58(((((safe_mod_func_uint32_t_u_u(4UL, (safe_lshift_func_int8_t_s_s((p_42 != (safe_mod_func_uint8_t_u_u((g_76[3] = ((*l_74) = (safe_rshift_func_int16_t_s_u(((*l_72) = (-2L)), ((-1L) && 7UL))))), ((safe_sub_func_int64_t_s_s(p_43, ((-1L) || (0xA8F4439DL & 4294967290UL)))) | p_42)))), l_48)))) , 0x7197E38FL) || p_42) <= l_79[3][7]), l_44, &g_45, g_7, g_7)) >= 248UL) & l_291), p_42)) , (-1L)) & g_286) ^ l_292[0]), l_44, l_291, g_254) == 2L) , p_42);
        l_329 = (g_254 != ((g_325 = ((*l_322) = ((~(safe_mul_func_uint16_t_u_u(l_319, (safe_sub_func_int8_t_s_s(0xD5L, p_42))))) , ((*l_72) = (p_42 && l_319))))) >= (((*l_327) = l_326) != l_328)));
        for (g_256 = 0; (g_256 <= 1); g_256 += 1)
        {
            int64_t ***l_332 = &l_330[1][6][1];
            int64_t **l_334 = &l_331;
            int64_t ***l_333[10][8] = {{(void*)0,&l_334,&l_334,&l_334,&l_334,&l_334,&l_334,&l_334},{(void*)0,&l_334,(void*)0,&l_334,&l_334,&l_334,&l_334,&l_334},{&l_334,&l_334,&l_334,&l_334,&l_334,(void*)0,&l_334,(void*)0},{&l_334,&l_334,&l_334,&l_334,&l_334,&l_334,(void*)0,(void*)0},{(void*)0,&l_334,&l_334,&l_334,&l_334,(void*)0,&l_334,&l_334},{(void*)0,&l_334,&l_334,&l_334,&l_334,&l_334,(void*)0,&l_334},{&l_334,&l_334,&l_334,&l_334,(void*)0,&l_334,&l_334,&l_334},{&l_334,(void*)0,&l_334,&l_334,(void*)0,&l_334,&l_334,(void*)0},{&l_334,&l_334,&l_334,&l_334,&l_334,&l_334,&l_334,(void*)0},{&l_334,(void*)0,&l_334,&l_334,&l_334,&l_334,&l_334,&l_334}};
            int32_t l_342[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_342[i] = 1L;
            l_335 = ((*l_332) = l_330[1][6][1]);
            (*l_46) = (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(5L, 1UL)), ((void*)0 != l_340)));
            g_345[0][6]--;
            for (g_325 = 0; (g_325 <= 1); g_325 += 1)
            {
                int8_t l_367 = 0xFDL;
                uint32_t l_368 = 4294967286UL;
                for (g_190 = 0; (g_190 <= 1); g_190 += 1)
                {
                    uint32_t *l_358[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_358[i] = &l_319;
                    (*l_46) = (0UL >= (safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((((&g_144 == &g_144) & (g_359[8] ^= g_6[(g_256 + 2)][g_325][p_43])) || ((0xC7C355B61EB15853LL == ((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((!l_367), l_368)) & 0x15C6L), ((l_369 == &p_42) > l_48))) > 0x3BL), 7)) , 0x2F06FB0A4E482C53LL)) ^ p_43)), p_42)), g_6[(g_256 + 2)][g_325][p_43])) , 0UL) || l_48), p_43)), 1UL)), p_43)));
                    if (l_48)
                        break;
                }
            }
        }
    }
    return g_189;
}







static uint64_t func_51(int32_t p_52, int32_t * p_53, int16_t p_54, uint64_t p_55)
{
    uint16_t l_293 = 0x8573L;
    int8_t *l_297[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t **l_296 = &l_297[4];
    int8_t l_310 = 0x3EL;
    uint32_t *l_311 = &g_256;
    uint64_t *l_312 = &g_190;
    int32_t l_313 = (-9L);
    uint8_t l_314 = 6UL;
    int32_t l_315[7][9] = {{1L,1L,0L,4L,0L,1L,1L,0x3CD681C3L,0L},{0xE9C9E939L,1L,5L,(-1L),0x4FFD2AC4L,(-1L),5L,1L,0xE9C9E939L},{1L,0x38007EA7L,(-6L),0x3CD681C3L,(-5L),0L,(-5L),0x3CD681C3L,(-6L)},{0x710BBA61L,0x710BBA61L,(-1L),0xB87969E0L,1L,0x91393ED6L,0xE9C9E939L,0x91393ED6L,1L},{1L,(-5L),(-5L),1L,1L,0L,4L,(-6L),4L},{0xE9C9E939L,(-1L),(-1L),(-1L),(-1L),0xE9C9E939L,0x4FFD2AC4L,0x710BBA61L,1L},{1L,0L,(-6L),1L,1L,(-6L),0L,1L,0x38007EA7L}};
    int i, j;
    l_293 &= (*p_53);
    (*g_144) = p_53;
    (*g_144) = p_53;
    (**g_144) = ((*g_4) ^ ((l_315[2][7] |= (safe_lshift_func_int8_t_s_s((l_296 != &l_297[4]), ((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(6L, (((safe_mul_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(p_55, (l_313 = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((g_6[2][0][1] = (0x890954F3EA3D8A23LL == ((*l_312) = (l_310 != ((((*l_311) = (g_76[5] ^ 1UL)) != 0xD20069F1L) < 0xD0C68EEB7C2CE1DBLL))))), l_293)), 11))))) && p_55), l_314)) || (*g_4)) && l_314))), 1UL)) & 4L)))) , 0xC381A5EDL));
    return g_286;
}







static int64_t func_58(int32_t p_59, int32_t * p_60, const int32_t * p_61, uint32_t p_62, uint32_t p_63)
{
    uint16_t l_98 = 6UL;
    int16_t *l_105[8][5] = {{&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,(void*)0,&g_73,(void*)0,&g_73},{&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,(void*)0,&g_73,(void*)0,&g_73},{&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,(void*)0,&g_73,(void*)0,&g_73},{&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,(void*)0,&g_73,(void*)0,&g_73}};
    int16_t *l_118 = &g_73;
    int32_t l_120 = 0xBF676F39L;
    int32_t l_123[1][9][4] = {{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}}};
    uint8_t *l_185[5][3] = {{(void*)0,&g_6[1][0][0],(void*)0},{(void*)0,&g_76[3],&g_6[1][0][0]},{&g_76[3],(void*)0,(void*)0},{&g_6[1][0][0],(void*)0,&g_6[2][1][1]},{&g_6[3][0][0],&g_76[3],&g_76[2]}};
    int i, j, k;
    for (p_63 = 0; (p_63 <= 1); p_63 += 1)
    {
        uint64_t *l_86 = &g_87;
        uint32_t *l_99 = &g_100;
        int32_t l_111 = 0xC9426B2CL;
        int16_t *l_115 = &g_73;
        int16_t **l_114 = &l_115;
        int32_t *l_209 = (void*)0;
        int32_t l_248 = 1L;
        int32_t l_249 = 0x2049661DL;
        int32_t l_252 = (-2L);
        int32_t l_253 = 1L;
        int32_t l_255 = 0L;
        int i;
        p_59 = (safe_div_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((safe_div_func_int64_t_s_s((g_76[(p_63 + 5)] < 0xC5B2E90EL), ((*l_86) = 18446744073709551615UL))), (((*l_99) = (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((g_45 = (0x4E94FA9FL >= (safe_mul_func_uint8_t_u_u(((g_76[(p_63 + 5)] , p_62) , (safe_rshift_func_uint8_t_u_u((((!g_73) , ((((safe_div_func_int64_t_s_s(((((g_76[4] & (l_98 && g_5)) , 0x09706B00L) || l_98) , 0L), 0x44DEA1A09BBF73BCLL)) , g_76[2]) , g_5) == 18446744073709551607UL)) ^ 0L), 6))), p_63)))) | g_76[(p_63 + 5)]))), g_73))) , g_6[2][1][0]))) , l_98), g_76[2]));
        for (l_98 = 2; (l_98 <= 6); l_98 += 1)
        {
            const int16_t *l_102 = (void*)0;
            const int16_t **l_101[3][1][6];
            int16_t **l_106 = &l_105[1][1];
            int16_t *l_109 = (void*)0;
            int16_t *l_110[6][9] = {{&g_73,(void*)0,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73},{&g_73,&g_73,&g_73,(void*)0,&g_73,&g_73,&g_73,&g_73,(void*)0},{&g_73,&g_73,&g_73,&g_73,(void*)0,&g_73,&g_73,&g_73,&g_73},{&g_73,(void*)0,(void*)0,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73}};
            int16_t ***l_113[8] = {&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112};
            const int32_t l_152 = 0x0E0C72D9L;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 6; k++)
                        l_101[i][j][k] = &l_102;
                }
            }
            (*p_60) |= ((((g_103 = &g_73) != ((*l_106) = l_105[3][2])) > ((l_111 = 8L) || ((&l_102 != (l_114 = g_112)) < (safe_div_func_uint16_t_u_u(((((void*)0 == l_118) > g_76[(p_63 + 5)]) > 1UL), g_76[2]))))) == p_59);
            for (g_45 = 1; (g_45 >= 0); g_45 -= 1)
            {
                int32_t *l_121 = &l_120;
                int32_t *l_122 = &l_111;
                ++g_124;
                for (l_111 = 1; (l_111 <= 7); l_111 += 1)
                {
                    int32_t ***l_145 = &g_144;
                    for (p_62 = 0; (p_62 <= 0); p_62 += 1)
                    {
                        int32_t **l_128 = &l_122;
                        int32_t ***l_127 = &l_128;
                        uint16_t *l_146 = &g_147;
                        uint16_t *l_148[1][6] = {{&l_98,&l_98,&l_98,&l_98,&l_98,&l_98}};
                        int8_t *l_157 = &g_158;
                        uint64_t *l_161 = &g_124;
                        int i, j, k;
                        (*l_127) = &g_4;
                        (*l_121) &= (safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((g_6[(p_63 + 1)][g_45][p_63] >= ((g_149 = (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((0UL ^ (&p_63 == &p_63)) ^ (safe_sub_func_uint8_t_u_u((g_76[(p_63 + 3)] |= (l_123[p_62][(l_111 + 1)][(g_45 + 2)] >= (((*l_146) = (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(0x1C8CL, (g_143 == (p_63 , l_145)))), p_62))) && p_62))), 255UL))) == g_5), p_59)), 7UL))) , (*l_122))), g_45)), l_98));
                        p_59 = ((0x520E672542557B45LL < (((l_152 ^ (g_87 >= ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((*l_146) ^= 0x6C4FL), (((*l_157) ^= 8L) ^ (safe_lshift_func_int16_t_s_u((*g_103), 0))))), (-8L))) , ((*l_161) = g_87)))) , ((p_59 == (***l_145)) > g_76[(p_63 + 5)])) , 0x12287F110A1B7E20LL)) >= (**g_144));
                        if ((*g_4))
                            continue;
                    }
                    (**g_143) = (**g_143);
                }
            }
        }
        if (l_111)
            continue;
        for (g_87 = 1; (g_87 <= 6); g_87 += 1)
        {
            uint64_t l_162[3];
            int32_t l_169 = 0x07B2B6A9L;
            uint64_t *l_186 = &l_162[2];
            int16_t **l_187 = &l_118;
            int64_t *l_188 = &g_189;
            int32_t *l_191 = &l_111;
            int32_t l_207 = (-5L);
            int i;
            for (i = 0; i < 3; i++)
                l_162[i] = 0xB169A602268D07ABLL;
            l_162[2]--;
            (*l_191) &= ((g_190 = ((*l_188) = ((safe_mul_func_int8_t_s_s(((p_59 == (((*l_187) = ((0xEDEB9ED2L && 0xA5AB319EL) , ((safe_sub_func_uint64_t_u_u((l_169 = ((*p_61) <= 0x9788E8F3L)), ((((*l_186) = (~(~(safe_div_func_int32_t_s_s(l_162[1], (safe_lshift_func_uint16_t_u_s((+(safe_mul_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(((g_76[(p_63 + 5)] ^ (safe_mod_func_uint16_t_u_u(((g_87 , l_185[1][0]) != l_185[2][2]), p_63))) == g_5), g_76[2])) & p_62) == p_59), g_147))), 10))))))) , l_162[2]) > 0L))) , (void*)0))) != (void*)0)) <= 0xC295L), g_76[(p_63 + 5)])) != g_119[0]))) , 0x6B0E93CEL);
            for (g_100 = 0; (g_100 <= 6); g_100 += 1)
            {
                int8_t *l_201 = &g_158;
                int8_t **l_200 = &l_201;
                uint16_t l_228 = 0xCE69L;
                int16_t ***l_231 = &l_187;
                int32_t l_250 = 2L;
                int32_t l_251[6][10][4] = {{{(-10L),1L,(-10L),0x49BDA0E2L},{1L,0x788934BAL,(-8L),1L},{0xD45DB1E3L,0x49BDA0E2L,0x62B34686L,0x788934BAL},{0x49BDA0E2L,1L,0x62B34686L,0x62B34686L},{0xD45DB1E3L,0xD45DB1E3L,(-8L),0x74AD0AB6L},{1L,0xC2503615L,(-10L),0x788934BAL},{(-10L),0x788934BAL,0x49BDA0E2L,(-10L)},{0xD45DB1E3L,0x788934BAL,9L,0x788934BAL},{0x788934BAL,0xC2503615L,0x62B34686L,0x74AD0AB6L},{(-9L),0xD45DB1E3L,0x49BDA0E2L,0x62B34686L}},{{1L,1L,0xDE277DF4L,0x788934BAL},{1L,0x49BDA0E2L,0x49BDA0E2L,1L},{(-9L),0x788934BAL,0x62B34686L,0x49BDA0E2L},{0x788934BAL,1L,9L,0x74AD0AB6L},{0x49BDA0E2L,(-8L),0xDE277DF4L,0xC2503615L},{9L,(-9L),9L,0xDE277DF4L},{0x62B34686L,(-10L),1L,0x62B34686L},{0x49BDA0E2L,0xDE277DF4L,0x9A02EE29L,(-10L)},{0xDE277DF4L,(-9L),0x9A02EE29L,0x9A02EE29L},{0x49BDA0E2L,0x49BDA0E2L,1L,0xC2503615L}},{{0x62B34686L,0x98670366L,9L,(-10L)},{9L,(-10L),0xDE277DF4L,9L},{0x49BDA0E2L,(-10L),1L,(-10L)},{(-10L),0x98670366L,0x9A02EE29L,0xC2503615L},{(-8L),0x49BDA0E2L,0xDE277DF4L,0x9A02EE29L},{0x62B34686L,(-9L),0x74AD0AB6L,(-10L)},{0x62B34686L,0xDE277DF4L,0xDE277DF4L,0x62B34686L},{(-8L),(-10L),0x9A02EE29L,0xDE277DF4L},{(-10L),(-9L),1L,0xC2503615L},{0x49BDA0E2L,(-8L),0xDE277DF4L,0xC2503615L}},{{9L,(-9L),9L,0xDE277DF4L},{0x62B34686L,(-10L),1L,0x62B34686L},{0x49BDA0E2L,0xDE277DF4L,0x9A02EE29L,(-10L)},{0xDE277DF4L,(-9L),0x9A02EE29L,0x9A02EE29L},{0x49BDA0E2L,0x49BDA0E2L,1L,0xC2503615L},{0x62B34686L,0x98670366L,9L,(-10L)},{9L,(-10L),0xDE277DF4L,9L},{0x49BDA0E2L,(-10L),1L,(-10L)},{(-10L),0x98670366L,0x9A02EE29L,0xC2503615L},{(-8L),0x49BDA0E2L,0xDE277DF4L,0x9A02EE29L}},{{0x62B34686L,(-9L),0x74AD0AB6L,(-10L)},{0x62B34686L,0xDE277DF4L,0xDE277DF4L,0x62B34686L},{(-8L),(-10L),0x9A02EE29L,0xDE277DF4L},{(-10L),(-9L),1L,0xC2503615L},{0x49BDA0E2L,(-8L),0xDE277DF4L,0xC2503615L},{9L,(-9L),9L,0xDE277DF4L},{0x62B34686L,(-10L),1L,0x62B34686L},{0x49BDA0E2L,0xDE277DF4L,0x9A02EE29L,(-10L)},{0xDE277DF4L,(-9L),0x9A02EE29L,0x9A02EE29L},{0x49BDA0E2L,0x49BDA0E2L,1L,0xC2503615L}},{{0x62B34686L,0x98670366L,9L,(-10L)},{9L,(-10L),0xDE277DF4L,9L},{0x49BDA0E2L,(-10L),1L,(-10L)},{(-10L),0x98670366L,0x9A02EE29L,0xC2503615L},{(-8L),0x49BDA0E2L,0xDE277DF4L,0x9A02EE29L},{0x62B34686L,(-9L),0x74AD0AB6L,(-10L)},{0x62B34686L,0xDE277DF4L,0xDE277DF4L,0x62B34686L},{(-8L),(-10L),0x9A02EE29L,0xDE277DF4L},{(-10L),(-9L),1L,0xC2503615L},{0x49BDA0E2L,(-8L),0xDE277DF4L,0xC2503615L}}};
                int i, j, k;
            }
        }
    }
    for (g_158 = (-29); (g_158 == 22); g_158 = safe_add_func_int16_t_s_s(g_158, 6))
    {
        p_60 = (**g_143);
    }
    (*g_144) = (*g_144);
    return g_5;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_76[i], "g_76[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_119[i], "g_119[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_280[i][j], "g_280[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_282[i][j][k], "g_282[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_345[i][j], "g_345[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_359[i], "g_359[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_382, "g_382", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_547[i], "g_547[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_716, "g_716", print_hash_value);
    transparent_crc(g_943, "g_943", print_hash_value);
    transparent_crc(g_1027, "g_1027", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1130[i][j], "g_1130[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1136, "g_1136", print_hash_value);
    transparent_crc(g_1311, "g_1311", print_hash_value);
    transparent_crc(g_1320, "g_1320", print_hash_value);
    transparent_crc(g_1521, "g_1521", print_hash_value);
    transparent_crc(g_1680, "g_1680", print_hash_value);
    transparent_crc(g_1681, "g_1681", print_hash_value);
    transparent_crc(g_1682, "g_1682", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1683[i], "g_1683[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1684, "g_1684", print_hash_value);
    transparent_crc(g_1685, "g_1685", print_hash_value);
    transparent_crc(g_1686, "g_1686", print_hash_value);
    transparent_crc(g_1687, "g_1687", print_hash_value);
    transparent_crc(g_1688, "g_1688", print_hash_value);
    transparent_crc(g_1691, "g_1691", print_hash_value);
    transparent_crc(g_1844, "g_1844", print_hash_value);
    transparent_crc(g_1909, "g_1909", print_hash_value);
    transparent_crc(g_2144, "g_2144", print_hash_value);
    transparent_crc(g_2221, "g_2221", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_2254[i][j][k], "g_2254[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2267, "g_2267", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
