// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 9C1DCC96
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
   signed f0 : 26;
   const signed f1 : 9;
   const signed f2 : 8;
   signed f3 : 19;
   const unsigned f4 : 24;
   signed f5 : 17;
   int8_t f6;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t f0;
   int16_t f1;
   const int64_t f2;
   struct S0 f3;
};
#pragma pack(pop)

union U2 {
   int8_t f0;
};


static int32_t g_3 = 0x5718A84DL;
static uint32_t g_39 = 0UL;
static int32_t g_42 = 0x461E62EDL;
static union U2 g_51 = {0xB1L};
static uint8_t g_65 = 0x68L;
static uint8_t g_76 = 0xD5L;
static int32_t *g_85 = &g_3;
static int32_t **g_84 = &g_85;
static uint64_t g_114[8][2][2] = {{{18446744073709551607UL,18446744073709551615UL},{1UL,18446744073709551607UL}},{{0x7877F70597A7083DLL,0x7877F70597A7083DLL},{0x7877F70597A7083DLL,18446744073709551607UL}},{{1UL,18446744073709551615UL},{18446744073709551607UL,18446744073709551615UL}},{{1UL,18446744073709551607UL},{0x7877F70597A7083DLL,0x7877F70597A7083DLL}},{{0x7877F70597A7083DLL,18446744073709551607UL},{1UL,18446744073709551615UL}},{{18446744073709551607UL,18446744073709551615UL},{1UL,18446744073709551607UL}},{{0x7877F70597A7083DLL,0x7877F70597A7083DLL},{0x7877F70597A7083DLL,18446744073709551607UL}},{{1UL,18446744073709551615UL},{18446744073709551607UL,18446744073709551615UL}}};
static uint16_t g_118 = 1UL;
static int32_t g_121 = 0x6EB578CFL;
static uint32_t g_131[9][8] = {{0xE0C58DE2L,1UL,1UL,0xE0C58DE2L,3UL,0x186CBB3EL,18446744073709551607UL,7UL},{1UL,7UL,0xAC2DAC23L,1UL,0x186CBB3EL,0x94E14C39L,0xAC2DAC23L,0UL},{0UL,1UL,2UL,0x77FD1FBCL,7UL,3UL,7UL,0x77FD1FBCL},{0x246BF972L,0x969A1B29L,0x246BF972L,0xB8834005L,0x94E14C39L,0x77FD1FBCL,18446744073709551610UL,7UL},{1UL,7UL,0UL,0x3A28AA74L,0x969A1B29L,8UL,0x94E14C39L,1UL},{1UL,2UL,8UL,7UL,0x94E14C39L,0x94E14C39L,7UL,8UL},{0x246BF972L,0x246BF972L,18446744073709551607UL,1UL,7UL,2UL,0xE0C58DE2L,0x9AC581D8L},{0UL,0UL,0x94E14C39L,2UL,3UL,1UL,0x969A1B29L,0x9AC581D8L},{0UL,8UL,0x3A28AA74L,1UL,1UL,1UL,0x3A28AA74L,8UL}};
static int16_t g_159[5][6][8] = {{{1L,0xD469L,0xD469L,1L,(-4L),0xD469L,1L,(-4L)},{1L,1L,0x8A77L,1L,1L,0x8A77L,1L,1L},{(-4L),1L,0xD469L,(-4L),1L,0xD469L,0xD469L,1L},{1L,0xD469L,0xD469L,1L,(-4L),0xD469L,1L,(-4L)},{1L,1L,0x8A77L,1L,1L,0x8A77L,1L,1L},{(-4L),1L,0xD469L,(-4L),1L,0xD469L,0xD469L,1L}},{{1L,0xD469L,0xD469L,1L,(-4L),0xD469L,1L,(-4L)},{1L,1L,0x8A77L,1L,1L,0x8A77L,1L,1L},{(-4L),1L,0xD469L,(-4L),1L,0xD469L,0xD469L,1L},{1L,0xD469L,0xD469L,1L,(-4L),0xD469L,1L,(-4L)},{1L,1L,0x8A77L,1L,1L,0x8A77L,1L,1L},{(-4L),1L,0xD469L,(-4L),1L,0xD469L,0xD469L,1L}},{{1L,0xD469L,0xD469L,1L,(-4L),0xD469L,1L,(-4L)},{1L,1L,0x8A77L,1L,1L,0x8A77L,1L,1L},{(-4L),1L,0xD469L,(-4L),1L,0xD469L,0xD469L,1L},{1L,0xD469L,0xD469L,1L,(-4L),0xD469L,1L,(-4L)},{1L,1L,0x8A77L,1L,1L,1L,0xD469L,(-4L)},{(-1L),0xD469L,0x8A77L,(-1L),(-4L),0x8A77L,0x8A77L,(-4L)}},{{(-4L),0x8A77L,0x8A77L,(-4L),(-1L),0x8A77L,0xD469L,(-1L)},{(-4L),0xD469L,1L,(-4L),(-4L),1L,0xD469L,(-4L)},{(-1L),0xD469L,0x8A77L,(-1L),(-4L),0x8A77L,0x8A77L,(-4L)},{(-4L),0x8A77L,0x8A77L,(-4L),(-1L),0x8A77L,0xD469L,(-1L)},{(-4L),0xD469L,1L,(-4L),(-4L),1L,0xD469L,(-4L)},{(-1L),0xD469L,0x8A77L,(-1L),(-4L),0x8A77L,0x8A77L,(-4L)}},{{(-4L),0x8A77L,0x8A77L,(-4L),(-1L),0x8A77L,0xD469L,(-1L)},{(-4L),0xD469L,1L,(-4L),(-4L),1L,0xD469L,(-4L)},{(-1L),0xD469L,0x8A77L,(-1L),(-4L),0x8A77L,0x8A77L,(-4L)},{(-4L),0x8A77L,0x8A77L,(-4L),(-1L),0x8A77L,0xD469L,(-1L)},{(-4L),0xD469L,1L,(-4L),(-4L),1L,0xD469L,(-4L)},{(-1L),0xD469L,0x8A77L,(-1L),(-4L),0x8A77L,0x8A77L,(-4L)}}};
static int8_t g_164 = 0xD2L;
static int32_t g_165 = (-1L);
static int32_t g_167 = (-2L);
static uint16_t g_194 = 1UL;
static const struct S1 g_199[3][3] = {{{0x97ED01E7L,0x05C1L,-2L,{884,-2,5,559,1943,-202,0L}},{0x823D4B9EL,0xBE4FL,0xC98B740B1378D5E2LL,{-5660,7,-3,-363,1838,191,0xD7L}},{0x823D4B9EL,0xBE4FL,0xC98B740B1378D5E2LL,{-5660,7,-3,-363,1838,191,0xD7L}}},{{0x97ED01E7L,0x05C1L,-2L,{884,-2,5,559,1943,-202,0L}},{0x823D4B9EL,0xBE4FL,0xC98B740B1378D5E2LL,{-5660,7,-3,-363,1838,191,0xD7L}},{0x823D4B9EL,0xBE4FL,0xC98B740B1378D5E2LL,{-5660,7,-3,-363,1838,191,0xD7L}}},{{0x97ED01E7L,0x05C1L,-2L,{884,-2,5,559,1943,-202,0L}},{0x823D4B9EL,0xBE4FL,0xC98B740B1378D5E2LL,{-5660,7,-3,-363,1838,191,0xD7L}},{0x823D4B9EL,0xBE4FL,0xC98B740B1378D5E2LL,{-5660,7,-3,-363,1838,191,0xD7L}}}};
static int16_t *g_233 = &g_159[3][4][1];
static int16_t **g_232[10][7] = {{&g_233,(void*)0,&g_233,&g_233,&g_233,&g_233,&g_233},{&g_233,&g_233,&g_233,&g_233,&g_233,(void*)0,(void*)0},{&g_233,&g_233,&g_233,&g_233,&g_233,&g_233,&g_233},{&g_233,(void*)0,&g_233,&g_233,&g_233,(void*)0,&g_233},{&g_233,&g_233,(void*)0,&g_233,&g_233,&g_233,(void*)0},{&g_233,&g_233,&g_233,&g_233,&g_233,&g_233,&g_233},{&g_233,(void*)0,(void*)0,&g_233,&g_233,&g_233,&g_233},{&g_233,&g_233,&g_233,&g_233,&g_233,&g_233,(void*)0},{&g_233,&g_233,&g_233,&g_233,&g_233,&g_233,&g_233},{&g_233,(void*)0,&g_233,&g_233,&g_233,&g_233,&g_233}};
static struct S0 g_243 = {6619,-1,-14,-135,855,-22,0x61L};
static struct S0 g_246 = {-3226,2,1,-34,188,25,8L};
static int32_t g_275[3][5][4] = {{{1L,0L,(-3L),0L},{1L,0L,(-3L),0L},{1L,0L,(-3L),0L},{1L,0L,(-3L),0L},{1L,0L,(-3L),0L}},{{1L,0L,(-3L),0L},{1L,0L,(-3L),0L},{1L,0L,(-3L),0L},{1L,0L,(-3L),0L},{1L,0L,(-3L),0L}},{{1L,0L,(-3L),0L},{1L,0L,(-3L),0L},{1L,0L,(-3L),0L},{1L,0L,(-3L),0L},{1L,0L,(-3L),0L}}};
static int64_t g_338 = 0x4ED1E39030A3B3E6LL;
static uint8_t *g_344 = &g_76;
static uint8_t ** const g_343 = &g_344;
static int8_t *g_374 = &g_243.f6;
static int8_t **g_373 = &g_374;
static int32_t *g_389 = (void*)0;
static int32_t **g_388 = &g_389;
static uint8_t g_391[10][9] = {{0xA6L,0UL,0x49L,0xB7L,255UL,253UL,0x5CL,255UL,0x5CL},{1UL,255UL,0UL,0UL,255UL,1UL,0x4CL,0xF9L,0x03L},{0xF9L,0x5CL,249UL,1UL,1UL,0x08L,0x49L,5UL,0xEFL},{1UL,0x01L,1UL,0UL,253UL,9UL,0x4CL,255UL,5UL},{0x4CL,5UL,0UL,0x5CL,0xEFL,0xEFL,0x5CL,0UL,5UL},{1UL,1UL,0x5CL,0x03L,1UL,0x28L,0x26L,0UL,0xEFL},{0x49L,253UL,0xB7L,0xEFL,0UL,0x26L,0x28L,1UL,0x03L},{0x08L,1UL,0x4CL,5UL,0UL,0x5CL,0xEFL,0xEFL,0x5CL},{255UL,5UL,0x08L,5UL,255UL,0x4CL,9UL,253UL,0UL},{0x03L,0x01L,0x08L,0xEFL,5UL,0x49L,0x08L,1UL,1UL}};
static int16_t g_418 = 0xFA9CL;
static int32_t g_505 = (-5L);
static uint8_t g_581[7][5][2] = {{{9UL,254UL},{0x97L,254UL},{9UL,0xC5L},{0xAFL,0x9AL},{0xAFL,0xC5L}},{{9UL,254UL},{0x97L,254UL},{9UL,0xC5L},{0xAFL,0x9AL},{0xAFL,0xC5L}},{{9UL,254UL},{0x97L,254UL},{9UL,0xC5L},{0xAFL,0x9AL},{0xAFL,0xC5L}},{{9UL,254UL},{0x97L,254UL},{9UL,0xC5L},{0xAFL,0x9AL},{0xAFL,0xC5L}},{{9UL,254UL},{0x97L,254UL},{9UL,248UL},{0x97L,0xC5L},{0x97L,248UL}},{{7UL,0x9AL},{9UL,0x9AL},{7UL,248UL},{0x97L,0xC5L},{0x97L,248UL}},{{7UL,0x9AL},{9UL,0x9AL},{7UL,248UL},{0x97L,0xC5L},{0x97L,248UL}}};
static uint64_t *g_611 = &g_114[2][0][1];
static uint64_t **g_610 = &g_611;
static struct S0 *g_692 = (void*)0;
static uint32_t g_703[7] = {0x3477D80CL,0x3477D80CL,0x3477D80CL,0x3477D80CL,0x3477D80CL,0x3477D80CL,0x3477D80CL};
static int16_t ***g_711 = &g_232[7][6];
static uint64_t ***g_758[6] = {&g_610,&g_610,&g_610,&g_610,&g_610,&g_610};
static int32_t g_803 = 8L;
static uint32_t g_822 = 0UL;
static struct S1 g_826[7][10] = {{{0xB01159F0L,0L,0x14B0DB79A953DB8CLL,{1128,7,-7,-529,2457,-44,0L}},{-1L,0x2E38L,0x9AA1F23DB31B198DLL,{7079,-16,9,113,910,54,1L}},{0x6BA936FDL,0x75C2L,2L,{1492,21,-0,-514,1945,197,-1L}},{3L,1L,0xC6CC7A834B9E0180LL,{-5858,-8,-15,-260,200,120,0x13L}},{-5L,0x1A65L,-4L,{2507,9,-8,590,936,-326,0x83L}},{0xB01159F0L,0L,0x14B0DB79A953DB8CLL,{1128,7,-7,-529,2457,-44,0L}},{-8L,-6L,0x44782882B71728D8LL,{-6930,16,-12,-298,2208,39,0x45L}},{-10L,0xD31EL,0x4CD956A9CA3B6CE1LL,{-7336,-4,-3,-615,2102,170,0xE5L}},{-1L,0x2E38L,0x9AA1F23DB31B198DLL,{7079,-16,9,113,910,54,1L}},{0xD250581CL,0x9BE4L,0x024C57E8E3A58091LL,{5126,20,-9,-177,2631,31,-3L}}},{{1L,1L,-3L,{1204,11,12,234,575,192,-3L}},{0xAF949724L,0x1298L,0x5A83EE30BCDD1C6FLL,{-3988,-5,-5,592,2233,-161,-6L}},{-4L,0x132CL,1L,{7250,-18,13,-65,1849,-104,1L}},{3L,1L,0xC6CC7A834B9E0180LL,{-5858,-8,-15,-260,200,120,0x13L}},{-1L,0x4921L,-6L,{7,-9,-11,-141,3052,-125,0x97L}},{-1L,0x4921L,-6L,{7,-9,-11,-141,3052,-125,0x97L}},{3L,1L,0xC6CC7A834B9E0180LL,{-5858,-8,-15,-260,200,120,0x13L}},{-4L,0x132CL,1L,{7250,-18,13,-65,1849,-104,1L}},{0xAF949724L,0x1298L,0x5A83EE30BCDD1C6FLL,{-3988,-5,-5,592,2233,-161,-6L}},{1L,1L,-3L,{1204,11,12,234,575,192,-3L}}},{{1L,1L,-3L,{1204,11,12,234,575,192,-3L}},{3L,-5L,1L,{-1642,19,6,519,934,69,9L}},{-9L,-1L,0xC242329C9AE35AE4LL,{-5012,-12,-6,-609,1974,28,1L}},{-1L,0x2E38L,0x9AA1F23DB31B198DLL,{7079,-16,9,113,910,54,1L}},{0x8AD50CDAL,0xE611L,0x57352C352FB0226BLL,{-5956,-7,6,177,1741,143,1L}},{0xB01159F0L,0L,0x14B0DB79A953DB8CLL,{1128,7,-7,-529,2457,-44,0L}},{-4L,1L,0xC2AC284D03D44DF6LL,{4262,-6,1,581,3872,288,0x1FL}},{-4L,0x132CL,1L,{7250,-18,13,-65,1849,-104,1L}},{3L,-5L,1L,{-1642,19,6,519,934,69,9L}},{0x8AD50CDAL,0xE611L,0x57352C352FB0226BLL,{-5956,-7,6,177,1741,143,1L}}},{{0xB01159F0L,0L,0x14B0DB79A953DB8CLL,{1128,7,-7,-529,2457,-44,0L}},{-4L,1L,0xC2AC284D03D44DF6LL,{4262,-6,1,581,3872,288,0x1FL}},{-4L,0x132CL,1L,{7250,-18,13,-65,1849,-104,1L}},{3L,-5L,1L,{-1642,19,6,519,934,69,9L}},{0x8AD50CDAL,0xE611L,0x57352C352FB0226BLL,{-5956,-7,6,177,1741,143,1L}},{-5L,0x1A65L,-4L,{2507,9,-8,590,936,-326,0x83L}},{0xAF949724L,0x1298L,0x5A83EE30BCDD1C6FLL,{-3988,-5,-5,592,2233,-161,-6L}},{-10L,0xD31EL,0x4CD956A9CA3B6CE1LL,{-7336,-4,-3,-615,2102,170,0xE5L}},{-4L,1L,0xC2AC284D03D44DF6LL,{4262,-6,1,581,3872,288,0x1FL}},{1L,1L,-3L,{1204,11,12,234,575,192,-3L}}},{{0x8AD50CDAL,0xE611L,0x57352C352FB0226BLL,{-5956,-7,6,177,1741,143,1L}},{-4L,1L,0xC2AC284D03D44DF6LL,{4262,-6,1,581,3872,288,0x1FL}},{0x6BA936FDL,0x75C2L,2L,{1492,21,-0,-514,1945,197,-1L}},{-8L,-6L,0x44782882B71728D8LL,{-6930,16,-12,-298,2208,39,0x45L}},{-1L,0x4921L,-6L,{7,-9,-11,-141,3052,-125,0x97L}},{0xD250581CL,0x9BE4L,0x024C57E8E3A58091LL,{5126,20,-9,-177,2631,31,-3L}},{-4L,1L,0xC2AC284D03D44DF6LL,{4262,-6,1,581,3872,288,0x1FL}},{-9L,-1L,0xC242329C9AE35AE4LL,{-5012,-12,-6,-609,1974,28,1L}},{-4L,1L,0xC2AC284D03D44DF6LL,{4262,-6,1,581,3872,288,0x1FL}},{0xD250581CL,0x9BE4L,0x024C57E8E3A58091LL,{5126,20,-9,-177,2631,31,-3L}}},{{-5L,0x1A65L,-4L,{2507,9,-8,590,936,-326,0x83L}},{3L,-5L,1L,{-1642,19,6,519,934,69,9L}},{-4L,1L,0xA61AB56BAE2D77DELL,{-686,12,7,1,301,31,0x65L}},{3L,-5L,1L,{-1642,19,6,519,934,69,9L}},{-5L,0x1A65L,-4L,{2507,9,-8,590,936,-326,0x83L}},{0xD250581CL,0x9BE4L,0x024C57E8E3A58091LL,{5126,20,-9,-177,2631,31,-3L}},{3L,1L,0xC6CC7A834B9E0180LL,{-5858,-8,-15,-260,200,120,0x13L}},{8L,0L,-6L,{-7565,-21,7,-452,2484,132,-1L}},{3L,-5L,1L,{-1642,19,6,519,934,69,9L}},{-1L,0x4921L,-6L,{7,-9,-11,-141,3052,-125,0x97L}}},{{0x8AD50CDAL,0xE611L,0x57352C352FB0226BLL,{-5956,-7,6,177,1741,143,1L}},{0xAF949724L,0x1298L,0x5A83EE30BCDD1C6FLL,{-3988,-5,-5,592,2233,-161,-6L}},{-4L,1L,0xA61AB56BAE2D77DELL,{-686,12,7,1,301,31,0x65L}},{-1L,0x2E38L,0x9AA1F23DB31B198DLL,{7079,-16,9,113,910,54,1L}},{2L,0xC85EL,-3L,{942,19,-1,149,522,75,0xEFL}},{-5L,0x1A65L,-4L,{2507,9,-8,590,936,-326,0x83L}},{-8L,-6L,0x44782882B71728D8LL,{-6930,16,-12,-298,2208,39,0x45L}},{-9L,-1L,0xC242329C9AE35AE4LL,{-5012,-12,-6,-609,1974,28,1L}},{0xAF949724L,0x1298L,0x5A83EE30BCDD1C6FLL,{-3988,-5,-5,592,2233,-161,-6L}},{-1L,0x4921L,-6L,{7,-9,-11,-141,3052,-125,0x97L}}}};
static struct S0 g_829[6][1][1] = {{{{1367,6,-8,-238,3170,276,4L}}},{{{1367,6,-8,-238,3170,276,4L}}},{{{1367,6,-8,-238,3170,276,4L}}},{{{1367,6,-8,-238,3170,276,4L}}},{{{1367,6,-8,-238,3170,276,4L}}},{{{1367,6,-8,-238,3170,276,4L}}}};
static uint32_t *g_835 = &g_131[1][1];
static uint32_t g_841 = 0xEBBFC3BFL;
static int32_t g_875[2] = {(-1L),(-1L)};
static uint16_t g_882 = 0x4277L;
static int8_t g_933 = 0x34L;
static uint16_t g_934 = 0x5239L;
static uint64_t g_1049 = 1UL;
static uint8_t ***g_1062 = (void*)0;
static uint8_t ****g_1061 = &g_1062;
static int32_t *g_1121 = &g_121;
static int32_t **g_1120 = &g_1121;
static uint32_t **g_1201 = (void*)0;
static uint64_t g_1225 = 0x7425DFCF5F9875EALL;
static int16_t g_1237 = (-8L);
static uint32_t g_1298 = 1UL;
static struct S1 g_1352 = {-4L,0x0DE3L,-1L,{3091,8,-1,366,1063,313,0x4FL}};
static int32_t ***g_1386 = &g_1120;
static int64_t g_1458 = 0xD72CAECA6D7EEDA2LL;
static uint32_t g_1459[6][8][5] = {{{0xA877B2B5L,4294967295UL,6UL,4294967295UL,0UL},{0x2FEDF006L,4294967289UL,4294967286UL,0xEDD2FBE9L,0x29299502L},{0x170523DEL,1UL,4294967295UL,1UL,0x170523DEL},{2UL,0UL,0x2496C2FBL,0xB9941A94L,0x137EB9E4L},{0x16DD402CL,0xF990D044L,0x3174736CL,0xA877B2B5L,4294967295UL},{0x2496C2FBL,0UL,0xE33252EFL,0UL,0x137EB9E4L},{0UL,0xA877B2B5L,0x16DD402CL,0x170523DEL,0x170523DEL},{0x137EB9E4L,0x986632EDL,0x137EB9E4L,0xF32D4543L,0x29299502L}},{{0x3BAAF85DL,1UL,4294967287UL,0x16DD402CL,0UL},{0xC5FA8AD4L,4294967288UL,0x2F3DE73FL,4294967287UL,0x34E6EFC1L},{0UL,0x83A3A1D1L,4294967287UL,0UL,0xF990D044L},{0xFD177BB3L,0x1679AFE6L,0x137EB9E4L,0UL,0x6784E6C4L},{0UL,0UL,0x16DD402CL,0x3BAAF85DL,4294967295UL},{4294967290UL,4294967295UL,0xE33252EFL,0x986632EDL,0x389C5868L},{4294967287UL,6UL,0x3174736CL,0UL,4294967295UL},{0UL,4294967288UL,2UL,0UL,0xC5FA8AD4L}},{{0xE392D6DAL,4294967294UL,4294967294UL,0xE392D6DAL,4294967295UL},{0x137EB9E4L,0xF32D4543L,0x29299502L,0xB9941A94L,0x34E6EFC1L},{4294967295UL,0UL,0UL,1UL,0x16DD402CL},{4294967295UL,4294967290UL,4294967290UL,0xB9941A94L,0x389C5868L},{0x83A3A1D1L,4294967295UL,4294967295UL,0xE392D6DAL,4294967295UL},{0xC254F63DL,0UL,0x2F3DE73FL,0UL,0xFD177BB3L},{0xA877B2B5L,1UL,0x3174736CL,4294967295UL,0xE392D6DAL},{2UL,1UL,0x6784E6C4L,3UL,0x2496C2FBL}},{{4294967295UL,1UL,6UL,0x83A3A1D1L,0UL},{0x293212FBL,0UL,4294967295UL,0UL,0x293212FBL},{4294967287UL,4294967295UL,0x170523DEL,0xA877B2B5L,4294967295UL},{0xC5FA8AD4L,4294967290UL,0UL,0xF32D4543L,4294967295UL},{0x170523DEL,0UL,0xBF9FB535L,4294967295UL,4294967295UL},{0x2496C2FBL,0xF32D4543L,0xC5FA8AD4L,4294967289UL,0x293212FBL},{4294967295UL,4294967294UL,4294967295UL,4294967287UL,0UL},{0x410C3B7DL,4294967288UL,4294967286UL,0x986632EDL,0x2496C2FBL}},{{4294967294UL,0UL,0UL,0x170523DEL,0xE392D6DAL},{0UL,0UL,4294967286UL,4294967287UL,0xFD177BB3L},{1UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,0UL,0xC5FA8AD4L,4294967295UL,0x389C5868L},{0UL,0x3174736CL,0xBF9FB535L,4294967294UL,0x16DD402CL},{4294967286UL,0x1679AFE6L,0UL,0x82338AD9L,0x34E6EFC1L},{0UL,6UL,0x170523DEL,1UL,4294967295UL},{4294967295UL,3UL,4294967295UL,0x5EC3CA84L,0xC5FA8AD4L}},{{1UL,0x170523DEL,6UL,0UL,0UL},{0UL,0xB9941A94L,0x6784E6C4L,0x62997F1FL,0x2FEDF006L},{4294967294UL,0xBF9FB535L,0x3174736CL,0UL,0x8E1A02D7L},{0x410C3B7DL,0x986632EDL,0x2F3DE73FL,0x5EC3CA84L,0x2F3DE73FL},{4294967295UL,4294967295UL,4294967295UL,1UL,0xBF9FB535L},{0x2496C2FBL,0x62997F1FL,4294967290UL,0x82338AD9L,4294967295UL},{0x170523DEL,0UL,0UL,4294967294UL,0xA877B2B5L},{0xC5FA8AD4L,0x62997F1FL,0x29299502L,4294967295UL,0x6784E6C4L}}};
static const uint8_t ****g_1578 = (void*)0;
static const uint8_t g_1584[10] = {253UL,0xDAL,0xDAL,253UL,0xDAL,0xDAL,253UL,0xDAL,0xDAL,253UL};
static const uint8_t *g_1583 = &g_1584[3];
static const uint8_t **g_1582 = &g_1583;
static const uint8_t ***g_1581 = &g_1582;
static const uint8_t ****g_1580[8][1] = {{&g_1581},{&g_1581},{&g_1581},{&g_1581},{&g_1581},{&g_1581},{&g_1581},{&g_1581}};
static int64_t **g_1585 = (void*)0;
static int32_t g_1726 = 0x5EF88314L;
static int16_t g_1769[4][2] = {{0L,0xC2BAL},{0L,0L},{0xC2BAL,0L},{0L,0xC2BAL}};
static int16_t g_1770 = 0x3174L;
static int64_t g_1772 = 0x181C61B91E7D1027LL;
static int32_t g_1773 = 0xCA59350EL;
static int8_t g_1775 = 1L;
static int32_t g_1777 = 0x358E9ADFL;
static uint32_t g_1778[4][1] = {{0UL},{0UL},{0UL},{0UL}};
static int32_t g_1951 = 0xAEBCF965L;
static int32_t * const *g_1952 = (void*)0;
static int64_t ***g_2016 = &g_1585;
static int64_t ****g_2015 = &g_2016;
static int64_t *****g_2014 = &g_2015;
static const uint16_t *g_2054[4] = {&g_882,&g_882,&g_882,&g_882};
static const uint16_t **g_2053 = &g_2054[1];
static const uint16_t ***g_2052 = &g_2053;
static int32_t ***g_2060 = &g_1120;
static int32_t g_2171 = 1L;
static struct S1 ***g_2203 = (void*)0;
static struct S1 ****g_2202[9][7] = {{&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203},{&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203},{&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203},{&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203},{&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203},{&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203},{&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203},{&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203},{&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203,&g_2203}};
static uint32_t **g_2296 = &g_835;
static union U2 g_2326 = {0xB8L};
static int32_t g_2422 = 0xD8D7774CL;
static uint8_t g_2429[9] = {0x34L,246UL,0x34L,0x34L,246UL,0x34L,0x34L,246UL,0x34L};
static const union U2 *g_2440 = (void*)0;
static const union U2 **g_2439 = &g_2440;
static uint32_t g_2470 = 0UL;
static const uint16_t **g_2502 = &g_2054[2];
static uint16_t *g_2576 = &g_194;
static uint16_t **g_2575 = &g_2576;
static uint16_t **g_2617 = &g_2576;
static int64_t g_2734 = 0xE635F225732DD5C3LL;
static int16_t ** const *g_2795 = &g_232[7][6];
static int16_t ** const **g_2794 = &g_2795;
static int16_t ** const ***g_2793 = &g_2794;
static uint64_t g_2814 = 0UL;
static union U2 g_2853[6] = {{0x6AL},{0x6AL},{0x6AL},{0x6AL},{0x6AL},{0x6AL}};
static struct S1 *g_2879 = &g_826[1][0];
static struct S1 **g_2878 = &g_2879;
static struct S0 g_2900 = {-1646,-21,3,141,903,-157,0xBFL};
static uint64_t g_2935[10] = {0x0E3B091FC0D47567LL,18446744073709551615UL,0x0E3B091FC0D47567LL,0x0E3B091FC0D47567LL,18446744073709551615UL,0x0E3B091FC0D47567LL,0x0E3B091FC0D47567LL,18446744073709551615UL,0x0E3B091FC0D47567LL,0x0E3B091FC0D47567LL};
static uint32_t ***g_2950[2][9] = {{&g_1201,&g_1201,&g_1201,&g_1201,&g_1201,&g_1201,&g_1201,&g_1201,&g_1201},{&g_1201,&g_1201,&g_1201,&g_1201,&g_1201,&g_1201,&g_1201,&g_1201,&g_1201}};
static uint32_t ****g_2949 = &g_2950[1][7];
static uint16_t g_2987[4] = {65535UL,65535UL,65535UL,65535UL};
static uint32_t g_3054 = 18446744073709551611UL;
static uint64_t g_3099 = 7UL;



static union U2 func_1(void);
static int32_t func_4(struct S1 p_5);
static struct S1 func_6(int32_t p_7, uint16_t p_8, const int32_t p_9);
static int16_t func_13(const uint16_t p_14, int64_t p_15, int32_t p_16, int64_t p_17);
static uint16_t func_20(struct S1 p_21);
static union U2 func_23(int32_t p_24, const uint32_t p_25, union U2 p_26);
static uint8_t func_30(int8_t p_31, struct S0 p_32);
static struct S0 func_34(uint8_t p_35);
static uint64_t func_36(uint32_t p_37);
static int32_t ** func_43(int32_t * p_44, int8_t p_45, uint32_t p_46, int32_t p_47, uint32_t p_48);
# 181 "<stdin>"
static union U2 func_1(void)
{
    uint32_t l_2[3][6][10] = {{{18446744073709551615UL,0x4177FD8BL,0x76DF3E2EL,0x6A37BD55L,0xC2457718L,0x0E82CA96L,1UL,0x15CBCEF0L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x6A37BD55L,0x37C5B151L,0x50EBF085L,0x6E348CC3L,9UL,0x0E82CA96L,0UL,9UL,9UL},{0UL,0x51938D10L,7UL,0UL,0xA91E53BDL,0x4393632CL,0xB3D925D3L,0x6E348CC3L,0UL,18446744073709551615UL},{0x865E1BFEL,1UL,0xD2CE6C1CL,18446744073709551614UL,0x0E82CA96L,8UL,0x51938D10L,0x618B2576L,0UL,4UL},{0xDAAFE497L,18446744073709551615UL,0xC2457718L,0x15CBCEF0L,0x6A58390AL,18446744073709551615UL,0xB03E3869L,0xB8E136DCL,9UL,0x15CBCEF0L},{1UL,8UL,0x22A19820L,18446744073709551608UL,1UL,18446744073709551607UL,0x4A20A298L,18446744073709551614UL,0x41A4633BL,0x865E1BFEL}},{{0x3648BD92L,9UL,18446744073709551606UL,0x6A37BD55L,8UL,0x80D1C1D6L,18446744073709551615UL,1UL,0x89B1AB44L,0x51938D10L},{0xB03E3869L,1UL,0x2CB3A3FCL,18446744073709551607UL,0x37C5B151L,0UL,0UL,0x37C5B151L,18446744073709551607UL,0x2CB3A3FCL},{0x80D1C1D6L,0x80D1C1D6L,0x6E348CC3L,0x4177FD8BL,8UL,0x93DDA37BL,0xDAAFE497L,18446744073709551606UL,0x6A58390AL,0UL},{9UL,0xAD9DDCEFL,18446744073709551607UL,0x89B1AB44L,0x9220C436L,18446744073709551615UL,0xDAAFE497L,0xD0A3205FL,0x095B676BL,0x76DF3E2EL},{0xFE905687L,0x80D1C1D6L,0x975A1448L,2UL,0UL,0x4393632CL,0UL,1UL,0x975A1448L,0UL},{0x2A6CA0CEL,0x89B1AB44L,18446744073709551608UL,18446744073709551606UL,0xA2F617A9L,0x4A20A298L,1UL,18446744073709551615UL,0x865E1BFEL,9UL}},{{8UL,0xD0A3205FL,0xAACDA2A4L,1UL,18446744073709551615UL,0UL,0x618B2576L,0UL,1UL,18446744073709551615UL},{0xB389E767L,0x0E82CA96L,0xB0AE28DEL,0UL,18446744073709551606UL,0x4393632CL,0UL,18446744073709551612UL,6UL,0xB389E767L},{18446744073709551615UL,1UL,18446744073709551615UL,0x618B2576L,0x80D1C1D6L,0x865E1BFEL,1UL,0xD8C53784L,0xB0A94FE8L,8UL},{9UL,18446744073709551615UL,0x41A4633BL,1UL,0UL,18446744073709551607UL,18446744073709551606UL,0xAD9DDCEFL,0x22A19820L,0x2A6CA0CEL},{0UL,1UL,2UL,0UL,18446744073709551606UL,0UL,2UL,1UL,0UL,0xFE905687L},{0x76DF3E2EL,1UL,0xB0A94FE8L,0xDAAFE497L,0xC2457718L,0xB3D925D3L,0x89B1AB44L,0xA2F617A9L,18446744073709551608UL,9UL}}};
    struct S1 l_22 = {-5L,-6L,0xAE6E92ECD44262C4LL,{-52,-2,-1,405,1996,215,1L}};
    uint32_t **l_2257 = &g_835;
    uint16_t l_2274 = 1UL;
    struct S0 *l_2299 = &g_246;
    uint64_t l_2323 = 18446744073709551614UL;
    union U2 l_2341 = {-6L};
    int64_t *l_2366[4][2][1] = {{{&g_1772},{&g_1458}},{{&g_1772},{&g_1772}},{{&g_1458},{&g_1772}},{{&g_1772},{&g_1458}}};
    const uint8_t l_2395 = 0x20L;
    uint32_t l_2414 = 0x6C5533F2L;
    int32_t *l_2445 = &g_1951;
    uint16_t l_2522 = 6UL;
    struct S0 l_2560 = {3539,-2,-9,-413,3169,242,6L};
    union U2 l_2648 = {0L};
    int16_t * const *l_2704 = (void*)0;
    int16_t * const **l_2703 = &l_2704;
    int16_t * const ***l_2702 = &l_2703;
    int8_t l_2735 = 1L;
    uint32_t l_2742 = 0x996BEDF1L;
    uint32_t ***l_2820[3][1];
    uint32_t ****l_2819[7] = {&l_2820[2][0],&l_2820[2][0],&l_2820[0][0],&l_2820[2][0],&l_2820[2][0],&l_2820[0][0],&l_2820[2][0]};
    uint32_t l_2854 = 0UL;
    int8_t l_2868 = (-5L);
    int8_t l_2870 = (-1L);
    uint8_t l_2871[1][9] = {{0xC9L,0xC9L,0xC9L,0xC9L,0xC9L,0xC9L,0xC9L,0xC9L,0xC9L}};
    union U2 l_2901 = {1L};
    uint8_t ***l_2961 = (void*)0;
    uint32_t l_2995 = 0x71E01D5CL;
    int16_t l_3014 = 0L;
    uint32_t l_3035[5];
    uint32_t l_3053[5] = {1UL,1UL,1UL,1UL,1UL};
    uint8_t ****l_3061 = &l_2961;
    int16_t l_3080 = 0x521BL;
    uint64_t *l_3094 = &g_2935[5];
    uint32_t l_3098[1];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_2820[i][j] = &g_2296;
    }
    for (i = 0; i < 5; i++)
        l_3035[i] = 1UL;
    for (i = 0; i < 1; i++)
        l_3098[i] = 0UL;
    for (g_3 = 0; (g_3 <= 2); g_3 += 1)
    {
        uint32_t l_12[3];
        uint32_t **l_2265[9][6][4];
        uint32_t *l_2343 = &g_703[6];
        uint32_t **l_2342 = &l_2343;
        int64_t l_2345 = 0x3CD79E8B7F5CF670LL;
        const struct S1 l_2371 = {1L,6L,1L,{1552,4,6,-116,1266,-16,0x31L}};
        int32_t l_2419 = 0x05767A06L;
        int32_t l_2420 = 0xA07078C3L;
        int32_t l_2423 = 0x40302764L;
        int32_t l_2424 = 0x5E1C3789L;
        int32_t l_2425 = 0xD7CB4F91L;
        int32_t l_2426[8] = {(-7L),(-7L),0x3BA0E388L,(-7L),(-7L),0x3BA0E388L,(-7L),(-7L)};
        int32_t ***l_2444 = &g_388;
        uint16_t l_2607 = 0UL;
        uint16_t l_2633 = 0x3B26L;
        uint16_t **l_2638 = &g_2576;
        int64_t l_2644 = 0x55DB8D7A7FA219F3LL;
        uint32_t l_2665 = 4294967288UL;
        union U2 l_2682 = {0xC6L};
        int32_t **l_2763 = &g_1121;
        const uint64_t l_2773 = 4UL;
        int32_t l_2813 = (-6L);
        int32_t *l_2872 = &l_2420;
        int16_t l_2902[7][5][3] = {{{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L}},{{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L}},{{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L}},{{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L}},{{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L}},{{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L}},{{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L},{3L,3L,3L},{0x76E7L,0x76E7L,0x76E7L}}};
        int32_t l_2919 = 0x62950D39L;
        uint32_t ****l_2951[3][3][10] = {{{&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7]},{&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7]},{&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7]}},{{&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7]},{&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7]},{&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7]}},{{&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7]},{&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7]},{&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7],&g_2950[1][7]}}};
        const uint32_t l_2957 = 0xA3190CFDL;
        const struct S1 *l_2971 = &g_826[1][5];
        const struct S1 **l_2970[6][4] = {{&l_2971,&l_2971,(void*)0,&l_2971},{&l_2971,(void*)0,&l_2971,&l_2971},{&l_2971,&l_2971,&l_2971,&l_2971},{(void*)0,(void*)0,&l_2971,&l_2971},{&l_2971,&l_2971,&l_2971,&l_2971},{(void*)0,&l_2971,&l_2971,&l_2971}};
        const struct S1 ***l_2969 = &l_2970[4][3];
        uint32_t l_3078 = 0xEBF575A8L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_12[i] = 4UL;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 4; k++)
                    l_2265[i][j][k] = &g_835;
            }
        }
    }
    (*g_85) |= ((safe_mod_func_int32_t_s_s(((((8UL & (((safe_div_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((((**g_610) ^= 0xB978F497E9C80751LL) ^ ((((*l_2445) && (safe_div_func_int8_t_s_s((+((safe_mod_func_int8_t_s_s(((((*l_2445) != (-10L)) || (((*l_3094)--) < 1UL)) & 0xDBL), (*l_2445))) , (((**g_2617) = (~(*l_2445))) ^ (*l_2445)))), (*g_374)))) ^ (*l_2445)) <= (-8L))), 2L)) | (-1L)), l_3098[0])) , (*g_611)) && g_3099)) ^ 0xBBC55496L) > 0UL) || (*l_2445)), 0xBA4AF07CL)) , (*l_2445));
    return l_2341;
}







static int32_t func_4(struct S1 p_5)
{
    int32_t l_2143 = 0xC57D1C06L;
    int64_t l_2144 = 0x9905DB1A32F30DBALL;
    int32_t l_2165 = (-1L);
    int32_t l_2166 = 0xF319AB62L;
    int32_t l_2167 = (-9L);
    int32_t l_2168[7] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
    int32_t *l_2177 = &l_2167;
    int8_t l_2233 = (-1L);
    int32_t *l_2242 = &l_2165;
    int16_t l_2243 = 0xB4F6L;
    int i;
lbl_2224:
    for (g_1225 = 0; (g_1225 <= 5); g_1225 += 1)
    {
        struct S0 **l_2139 = (void*)0;
        struct S0 **l_2140 = &g_692;
        struct S1 *l_2157 = &g_826[2][0];
        struct S1 **l_2156 = &l_2157;
        const int32_t l_2158 = 0xD0BB18C8L;
        int32_t l_2169 = 0x015EDA89L;
        int32_t l_2170[1][2][1];
        uint8_t ** const * const * const l_2182 = (void*)0;
        uint8_t ** const * const * const *l_2181 = &l_2182;
        int8_t **l_2196 = &g_374;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_2170[i][j][k] = 0x34989848L;
            }
        }
        (*l_2140) = &g_829[1][0][0];
        if ((p_5.f3 , ((safe_mod_func_int8_t_s_s(((**g_373) = (*g_374)), (l_2143 , l_2144))) ^ ((((((!(safe_add_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((0xF69A0FFAAAC7537FLL >= 0xEDE15FABE6124B6DLL), ((safe_mod_func_int16_t_s_s((p_5.f3.f5 < (safe_mul_func_int8_t_s_s(((***g_1581) == (((*l_2156) = &g_1352) == &p_5)), l_2158))), 4L)) <= l_2158))), l_2158)) , 0xC0L) , 2UL) , 2UL), 0UL))) & p_5.f3.f0) > 0L) ^ l_2158) == g_243.f4) >= l_2144))))
        {
            int32_t *l_2159 = &g_167;
            int32_t *l_2160 = &g_167;
            int32_t *l_2161 = &g_803;
            int32_t *l_2162 = &g_1773;
            int32_t *l_2163 = &g_1773;
            int32_t *l_2164[3][2] = {{&g_803,&g_803},{&g_803,&g_803},{&g_803,&g_803}};
            uint32_t l_2172 = 4294967293UL;
            uint32_t *l_2178 = &g_822;
            uint8_t ** const * const l_2185 = (void*)0;
            uint8_t ** const * const * const l_2184 = &l_2185;
            uint8_t ** const * const * const *l_2183[6];
            const uint64_t l_2190 = 2UL;
            int i, j;
            for (i = 0; i < 6; i++)
                l_2183[i] = &l_2184;
            ++l_2172;
            if (((((*l_2178) &= ((((safe_lshift_func_uint8_t_u_s((*g_344), 1)) > (*l_2159)) , l_2163) == (l_2177 = &l_2165))) > ((safe_add_func_uint64_t_u_u(((l_2183[4] = l_2181) != &l_2184), 1L)) | ((safe_sub_func_int8_t_s_s((p_5.f3.f0 == (safe_mod_func_uint64_t_u_u((((*l_2160) , l_2190) < (**g_2053)), p_5.f3.f5))), p_5.f3.f5)) , 0xE929D484L))) ^ 1UL))
            {
                int8_t **l_2195 = &g_374;
                int8_t l_2204 = 0x30L;
                for (l_2172 = 1; (l_2172 <= 5); l_2172 += 1)
                {
                    p_5.f3.f3 &= 0xD66BFB26L;
                }
                (*l_2162) |= (p_5.f1 >= ((safe_rshift_func_int16_t_s_s((((p_5.f3.f3 , (((((p_5.f3.f5 ^ (safe_sub_func_uint32_t_u_u((l_2195 != l_2196), (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((~0xDEL) == (((l_2169 && (0L < p_5.f0)) , g_2202[3][0]) != &g_2203)), 4)), l_2204))))) > 0xD1L) & 0x81L) ^ (*l_2160)) || 0UL)) && 2L) != p_5.f3.f1), p_5.f3.f0)) >= 0xA7L));
                return p_5.f0;
            }
            else
            {
                l_2177 = &l_2167;
            }
        }
        else
        {
            uint8_t l_2221 = 0UL;
            for (l_2143 = 5; (l_2143 >= 0); l_2143 -= 1)
            {
                int32_t *l_2205 = &l_2168[6];
                int32_t *l_2206 = &g_42;
                int32_t *l_2207 = &l_2169;
                int32_t *l_2208 = &g_165;
                int32_t *l_2209 = (void*)0;
                int32_t *l_2210 = (void*)0;
                int32_t *l_2211 = &g_42;
                int32_t *l_2212 = &l_2165;
                int32_t *l_2213 = &l_2170[0][0][0];
                int32_t *l_2214 = &l_2165;
                int32_t *l_2215 = &l_2166;
                int32_t *l_2216 = &l_2170[0][0][0];
                int32_t *l_2217 = &g_165;
                int32_t *l_2218 = &l_2170[0][0][0];
                int32_t *l_2219 = &l_2168[3];
                int32_t *l_2220[6] = {&g_1726,&g_1726,&g_1726,&g_1726,&g_1726,&g_1726};
                int i;
                l_2221++;
                if (g_822)
                    goto lbl_2224;
            }
        }
    }
    (*l_2177) = (((*l_2177) >= ((*l_2177) , (*l_2177))) == (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((*l_2177), (p_5.f3.f3 = (safe_mul_func_uint8_t_u_u(((**g_343)--), (l_2233 & ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((*l_2177) | (safe_sub_func_int32_t_s_s(((*l_2242) |= (((0UL >= (65529UL || ((safe_div_func_uint16_t_u_u(p_5.f2, 0x8355L)) , (*l_2177)))) > (*l_2177)) ^ p_5.f0)), p_5.f3.f5))), p_5.f3.f5)), l_2243)) ^ p_5.f3.f4))))))), (**g_2053))));
    return p_5.f3.f3;
}







static struct S1 func_6(int32_t p_7, uint16_t p_8, const int32_t p_9)
{
    int64_t * const *l_2020 = (void*)0;
    int64_t * const **l_2019 = &l_2020;
    int64_t * const ***l_2018 = &l_2019;
    int64_t * const ****l_2017 = &l_2018;
    struct S1 l_2029 = {1L,0x36BAL,0xAE1D7673BA27E244LL,{-2819,16,-13,102,2782,41,1L}};
    uint32_t l_2039 = 0x6CB1DC40L;
    int32_t *l_2134[4][6] = {{&g_1777,&g_1777,&g_3,&g_1777,&g_1777,&g_3},{&g_1777,&g_1777,&g_3,&g_1777,&g_1777,&g_3},{&g_1777,&g_1777,&g_3,&g_1777,&g_1777,&g_3},{&g_1777,&g_1777,&g_3,&g_1777,&g_1777,&g_3}};
    int i, j;
    if (p_8)
    {
        int32_t l_2013 = 0L;
        uint16_t *l_2025 = &g_118;
        int32_t l_2026 = 0x0AC9A5DDL;
        const union U2 l_2027 = {-1L};
        int32_t l_2028 = 0x0FEA848CL;
        l_2028 = (safe_mul_func_int16_t_s_s(((safe_div_func_int64_t_s_s(l_2013, (((g_2014 = g_2014) != l_2017) && (((**g_343)++) && (-1L))))) == ((safe_div_func_uint16_t_u_u(p_8, (l_2026 = ((*l_2025) = g_1769[2][1])))) , (l_2027 , ((*g_2015) != (*g_2015))))), p_9));
        for (g_505 = 0; (g_505 <= 2); g_505 += 1)
        {
            return l_2029;
        }
    }
    else
    {
        uint8_t *l_2032 = &g_581[0][4][0];
        const int32_t l_2059 = 0xD1AA37F6L;
        uint64_t ***l_2092[1][8];
        int32_t l_2105[5][3][5] = {{{(-1L),0x3F36E665L,0x6CF45B01L,0x8D85E4CCL,4L},{(-1L),0xB46BDFF9L,(-1L),4L,0xDD858A35L},{(-1L),(-1L),0xDD858A35L,(-1L),(-1L)}},{{(-1L),0xE8379B51L,0xDD858A35L,(-1L),1L},{0x8D85E4CCL,0L,(-1L),0x3373ACCCL,9L},{9L,(-1L),0x6CF45B01L,0xE8379B51L,1L}},{{0xDD858A35L,0x3373ACCCL,0x3373ACCCL,0xDD858A35L,(-1L)},{1L,0x3373ACCCL,0x95F7521DL,0x3F36E665L,0xDD858A35L},{0xE8379B51L,(-1L),1L,0xAE0D1685L,4L}},{{0x95F7521DL,0L,0xB46BDFF9L,0x3F36E665L,0x3F36E665L},{0L,0xE8379B51L,0L,0xDD858A35L,0xBE0BCCB9L},{0L,(-1L),0xAE0D1685L,0xE8379B51L,(-1L)}},{{0x95F7521DL,0xB46BDFF9L,(-1L),0x3373ACCCL,(-1L)},{0xE8379B51L,0x3F36E665L,0xAE0D1685L,(-1L),0xAE0D1685L},{1L,1L,0L,(-1L),0xAE0D1685L}}};
        struct S1 *l_2115 = &g_1352;
        struct S1 **l_2114[6][9] = {{&l_2115,&l_2115,(void*)0,&l_2115,&l_2115,&l_2115,(void*)0,&l_2115,&l_2115},{&l_2115,&l_2115,(void*)0,&l_2115,&l_2115,&l_2115,&l_2115,&l_2115,&l_2115},{&l_2115,&l_2115,(void*)0,&l_2115,&l_2115,&l_2115,&l_2115,(void*)0,&l_2115},{&l_2115,&l_2115,(void*)0,&l_2115,&l_2115,&l_2115,(void*)0,&l_2115,&l_2115},{&l_2115,&l_2115,(void*)0,&l_2115,&l_2115,&l_2115,&l_2115,&l_2115,&l_2115},{&l_2115,&l_2115,(void*)0,&l_2115,&l_2115,&l_2115,&l_2115,(void*)0,&l_2115}};
        struct S1 ***l_2113 = &l_2114[5][3];
        int32_t l_2138 = 6L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
                l_2092[i][j] = &g_610;
        }
        for (g_338 = 0; (g_338 <= 6); g_338 += 1)
        {
            int32_t l_2040 = 0x86005177L;
            int32_t l_2043 = 0xD38E138BL;
            struct S1 l_2085 = {1L,0xE3D3L,0L,{7215,13,-6,197,2023,78,0x4DL}};
            uint64_t ***l_2094 = (void*)0;
            int64_t *l_2106 = &g_338;
            uint32_t l_2110 = 3UL;
            int32_t l_2137 = 0x40002C70L;
            for (g_246.f6 = 0; (g_246.f6 <= 6); g_246.f6 += 1)
            {
                uint32_t l_2044 = 5UL;
                int32_t *l_2045[3][1][5] = {{{&g_167,&g_167,(void*)0,&g_167,&g_167}},{{&g_167,&g_1773,&g_167,&g_167,&g_1773}},{{&g_167,(void*)0,(void*)0,&g_167,(void*)0}}};
                int i, j, k;
                g_1777 = (((safe_mod_func_int8_t_s_s((255UL | (((((void*)0 == l_2032) <= ((*l_2032) &= (safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((((l_2040 = (safe_sub_func_int64_t_s_s(l_2039, 0UL))) & p_9) | (safe_rshift_func_uint16_t_u_u(0xDB84L, (l_2043 && 0x67308493L)))), 12)), 6UL)))) <= (-1L)) < (**g_373))), p_7)) , l_2044) <= 1UL);
                p_7 = (l_2043 = ((safe_div_func_uint16_t_u_u((((safe_div_func_int8_t_s_s((**g_373), l_2040)) ^ ((safe_mul_func_int8_t_s_s((((((((void*)0 == g_2052) || p_9) && (l_2040 <= (safe_add_func_int32_t_s_s(l_2029.f3.f2, ((safe_lshift_func_uint8_t_u_s(((l_2059 , &g_1120) == g_2060), 1)) < 4294967294UL))))) < 2UL) | (**g_343)) || p_8), l_2043)) | l_2040)) != p_8), 65535UL)) >= l_2029.f1));
            }
            p_7 = p_9;
            if (p_7)
            {
                uint32_t l_2081 = 0xBF90038CL;
                for (p_8 = 0; (p_8 <= 5); p_8 += 1)
                {
                    uint32_t l_2065 = 18446744073709551607UL;
                    int32_t l_2080 = 0x74EF1EF7L;
                    struct S0 l_2084 = {6092,-1,-1,-38,1170,260,0x21L};
                    for (g_39 = 0; (g_39 <= 5); g_39 += 1)
                    {
                        uint64_t l_2082 = 18446744073709551615UL;
                        int32_t *l_2083 = &g_165;
                        (*l_2083) &= (((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(l_2059, (l_2065 | (*g_611)))) , (***g_1581)), (safe_rshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s((&g_1201 == (void*)0), ((l_2080 = (p_8 ^ (safe_mul_func_uint16_t_u_u((((l_2029.f3.f0 | (((((l_2043 = ((-7L) != l_2040)) || 1UL) >= l_2065) >= 0xF788459CBC91465FLL) , 4294967295UL)) >= 0x769FL) , l_2043), p_9)))) | (-1L)))), l_2081)) < l_2081) == l_2059), (-1L))), l_2082)), p_9)) & l_2082), l_2029.f3.f2)))) ^ l_2082) || 0UL);
                        if (l_2080)
                            continue;
                        (*l_2083) ^= ((l_2084 , (*g_1120)) == (*g_1120));
                    }
                }
                for (g_1225 = 0; (g_1225 <= 6); g_1225 += 1)
                {
                    for (g_42 = 6; (g_42 >= 2); g_42 -= 1)
                    {
                        return l_2085;
                    }
                    for (g_39 = 0; (g_39 <= 6); g_39 += 1)
                    {
                        return g_199[0][2];
                    }
                    return g_826[0][0];
                }
                if (p_9)
                    continue;
                (*g_84) = &p_7;
            }
            else
            {
                if (l_2029.f3.f2)
                    break;
                p_7 &= l_2085.f1;
            }
            for (g_1352.f1 = 0; (g_1352.f1 <= 6); g_1352.f1 += 1)
            {
                uint32_t l_2091 = 4294967290UL;
                int64_t *l_2107 = &g_338;
                int32_t l_2136 = 9L;
                for (g_194 = 0; (g_194 <= 6); g_194 += 1)
                {
                    uint64_t ****l_2093 = &l_2092[0][4];
                    int32_t l_2103 = (-4L);
                    uint16_t *l_2104 = &g_118;
                    uint8_t l_2108 = 0xC1L;
                    l_2108 = (~(((((((((p_7 = (safe_add_func_int64_t_s_s((l_2105[1][1][1] = (p_7 , (((safe_div_func_uint16_t_u_u((***g_2052), (l_2091 ^ (((*l_2093) = l_2092[0][4]) == l_2094)))) == (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((*l_2104) = ((safe_div_func_int8_t_s_s((l_2059 <= 0UL), (safe_rshift_func_uint8_t_u_u(((*l_2032) = (0xA96986A2L & 4294967295UL)), p_9)))) >= l_2103)) < p_7), p_7)), 0xAEL))) != p_9))), l_2029.f3.f1))) == p_8) | p_8) ^ p_9) > 0xAEF7061AEDC3FF01LL) <= l_2103) , l_2106) != l_2107) , 8L));
                    for (g_76 = 0; (g_76 <= 6); g_76 += 1)
                    {
                        int32_t *l_2109 = &g_1726;
                        (*l_2109) ^= p_7;
                        if (l_2029.f2)
                            continue;
                        if (p_9)
                            continue;
                    }
                }
                for (g_39 = 0; (g_39 <= 6); g_39 += 1)
                {
                    struct S1 ****l_2116 = &l_2113;
                    int32_t l_2126 = 0x037AB58BL;
                    int16_t *l_2135 = &g_159[4][4][4];
                    l_2110++;
                    (*l_2116) = l_2113;
                    if ((+p_8))
                    {
                        (*g_84) = (void*)0;
                        return l_2029;
                    }
                    else
                    {
                        int32_t ** const l_2131 = &g_85;
                        int32_t *l_2132 = &g_42;
                        int32_t *l_2133[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_2133[i] = &l_2105[1][1][1];
                        l_2043 &= (safe_div_func_int32_t_s_s(l_2085.f3.f3, (safe_add_func_int32_t_s_s(((*l_2132) |= (((-10L) > (safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((l_2085.f1 ^ (l_2126 > (*g_611))), (safe_div_func_int64_t_s_s(p_8, (l_2085.f3.f0 = 0x7A2108740BBA1D78LL))))), ((safe_rshift_func_uint16_t_u_s((((((void*)0 != l_2131) | l_2091) >= p_8) || p_8), p_7)) != p_9)))) > l_2091)), p_9))));
                        if (l_2091)
                            break;
                        if (l_2105[1][2][1])
                            break;
                        (*g_84) = l_2134[1][5];
                    }
                    l_2138 = ((l_2136 = ((*l_2135) &= ((l_2105[1][1][1] = p_7) <= p_9))) == (l_2137 | ((l_2043 = p_7) > ((l_2059 <= 0UL) && p_9))));
                }
            }
        }
    }
    return g_826[5][6];
}







static int16_t func_13(const uint16_t p_14, int64_t p_15, int32_t p_16, int64_t p_17)
{
    uint32_t l_2008 = 1UL;
    for (p_15 = 0; (p_15 <= 0); p_15 += 1)
    {
        uint32_t l_2007 = 0x52C7C266L;
        if (l_2007)
            break;
        return p_14;
    }
    return l_2008;
}







static uint16_t func_20(struct S1 p_21)
{
    uint8_t l_27 = 0xEFL;
    uint64_t l_33 = 0x87F0BBFFD32083B0LL;
    int32_t l_385[6];
    uint8_t *l_390 = &g_391[0][8];
    int32_t l_1468 = 0xA2D819F4L;
    union U2 l_1469 = {1L};
    int8_t l_1788 = 0xD8L;
    int32_t * const *l_1800 = &g_1121;
    uint32_t ** const *l_1857 = (void*)0;
    uint32_t l_1866 = 0xCDFE68CDL;
    int32_t *l_1894 = (void*)0;
    int32_t **l_1893 = &l_1894;
    union U2 *l_1895 = &g_51;
    union U2 *l_1897 = (void*)0;
    union U2 **l_1896 = &l_1897;
    union U2 *l_1899[4][7] = {{&g_51,&g_51,&g_51,&g_51,&g_51,&g_51,&g_51},{&g_51,&g_51,&g_51,&g_51,&g_51,&g_51,&g_51},{&g_51,&g_51,&g_51,&g_51,&g_51,&g_51,&g_51},{&g_51,&g_51,&g_51,&g_51,&g_51,&g_51,&g_51}};
    union U2 **l_1898 = &l_1899[1][3];
    int32_t *l_1924 = &g_1777;
    int64_t ***l_1971 = &g_1585;
    int64_t ****l_1970 = &l_1971;
    union U2 l_1972 = {0xF7L};
    int32_t *l_1982 = &g_803;
    int32_t *l_1983 = (void*)0;
    int32_t *l_1984 = (void*)0;
    int32_t *l_1985 = &g_165;
    int32_t *l_1986 = (void*)0;
    int32_t *l_1987 = (void*)0;
    int32_t *l_1988 = &g_165;
    int64_t l_1989 = 1L;
    int32_t *l_1990 = &g_1951;
    int32_t *l_1991 = &g_42;
    int32_t *l_1992 = &g_167;
    int32_t *l_1993 = &g_1726;
    int32_t *l_1994 = &g_1726;
    int32_t *l_1995 = &g_167;
    int32_t *l_1996 = &g_803;
    int32_t *l_1997 = &l_385[2];
    int32_t *l_1998 = &g_1726;
    int32_t *l_1999 = &g_1726;
    uint8_t l_2000 = 7UL;
    int i, j;
    for (i = 0; i < 6; i++)
        l_385[i] = 0L;
    p_21.f3.f3 = (p_21.f1 & ((*g_374) = (func_23(g_3, ((l_27 == ((safe_lshift_func_int16_t_s_s((func_30(l_33, func_34(((*l_390) ^= ((func_36(l_27) != ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u((l_385[2] ^= p_21.f3.f6), p_21.f3.f3)) ^ (safe_add_func_int8_t_s_s(((void*)0 != g_388), l_33))), 5)), p_21.f3.f2)) && p_21.f3.f2)) <= 0xA0L)))) | p_21.f3.f0), l_1468)) < g_1237)) && p_21.f3.f2), l_1469) , l_1788)));
    for (g_243.f6 = 0; (g_243.f6 <= (-20)); g_243.f6 = safe_sub_func_int64_t_s_s(g_243.f6, 2))
    {
        int32_t * const **l_1801 = &l_1800;
        const int32_t l_1808 = 0x25B9DA5AL;
        int32_t *l_1809[7][8][4] = {{{&g_167,(void*)0,&g_803,(void*)0},{&l_385[2],&g_803,&g_3,(void*)0},{(void*)0,(void*)0,&l_385[3],(void*)0},{(void*)0,&l_385[2],&g_803,&g_42},{(void*)0,&g_165,(void*)0,&g_1773},{&g_1773,(void*)0,&l_385[0],&g_1773},{&g_1773,&g_1777,(void*)0,(void*)0},{(void*)0,&g_1773,&g_803,&g_165}},{{(void*)0,&g_803,&l_385[3],&g_1773},{(void*)0,&g_1773,&g_3,(void*)0},{&l_385[2],&g_165,&g_803,&g_165},{&g_167,&g_165,(void*)0,(void*)0},{&g_1773,&g_1773,&l_385[2],&g_1773},{(void*)0,&g_803,(void*)0,&g_165},{&g_167,&g_1773,(void*)0,(void*)0},{(void*)0,&g_1777,&g_3,&g_1773}},{{&g_3,(void*)0,&g_3,&g_1773},{(void*)0,&g_165,(void*)0,&g_42},{&g_167,&l_385[2],(void*)0,(void*)0},{(void*)0,(void*)0,&l_385[2],(void*)0},{&g_1773,&g_803,(void*)0,(void*)0},{&g_167,(void*)0,&g_803,(void*)0},{&l_385[2],&g_803,&g_3,(void*)0},{(void*)0,(void*)0,&l_385[3],(void*)0}},{{(void*)0,&l_385[2],&g_803,&g_42},{(void*)0,&g_165,(void*)0,&g_1773},{&g_1773,(void*)0,&l_385[0],&g_1773},{&g_1773,&g_1777,(void*)0,(void*)0},{(void*)0,&g_1773,&g_803,&g_165},{(void*)0,&g_803,&l_385[3],&g_1773},{(void*)0,&g_1773,&g_3,(void*)0},{&l_385[2],&g_165,&g_803,&g_165}},{{&g_167,&g_165,(void*)0,(void*)0},{&g_1773,&g_1773,&l_385[2],&g_1773},{(void*)0,&g_803,(void*)0,&g_165},{&g_167,&g_1773,(void*)0,(void*)0},{(void*)0,&g_1777,&g_3,&g_1773},{&g_3,(void*)0,&g_3,&g_1773},{(void*)0,&g_165,(void*)0,&g_42},{&g_167,&l_385[2],(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_385[2],(void*)0},{&g_1773,&g_803,(void*)0,(void*)0},{&g_167,(void*)0,&g_803,(void*)0},{&l_385[2],&g_803,&g_3,(void*)0},{(void*)0,(void*)0,&l_385[3],(void*)0},{(void*)0,&l_385[2],&g_803,&g_42},{(void*)0,(void*)0,&g_1777,&g_1773},{&g_3,&l_385[2],&g_167,&g_165}},{{&g_3,&g_1773,&g_1777,&g_165},{(void*)0,&g_165,&l_385[3],&l_385[2]},{&g_803,&g_3,(void*)0,&g_165},{&g_803,&g_1773,&l_385[0],&l_385[2]},{&g_1777,(void*)0,&l_385[3],&g_42},{(void*)0,(void*)0,(void*)0,&l_385[2]},{&g_3,&g_1773,&g_1777,&g_165},{&g_1777,&g_3,&g_1777,&l_385[2]}}};
        int64_t ** const *l_1817 = &g_1585;
        uint32_t l_1827 = 0x806E561DL;
        struct S1 * const l_1860 = &g_1352;
        uint32_t l_1870 = 0x03E2C19DL;
        uint32_t l_1890[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1890[i] = 8UL;
        if (p_21.f2)
            break;
        g_246.f0 = (g_1726 |= (safe_sub_func_uint8_t_u_u((+(safe_div_func_uint8_t_u_u((p_21.f3.f2 , (safe_sub_func_int64_t_s_s((safe_div_func_uint8_t_u_u((((*l_1801) = l_1800) == (g_826[1][5] , (*g_1386))), 0x79L)), 0xD72023AC1693D1D3LL))), ((((safe_mod_func_int8_t_s_s((+(safe_unary_minus_func_int16_t_s(((safe_div_func_int8_t_s_s((((7UL != (5UL > l_1808)) || 0L) > l_385[0]), l_1808)) | p_21.f1)))), (**g_1582))) , p_21.f3.f4) != l_1468) ^ p_21.f3.f4)))), 1L)));
        for (g_882 = (-16); (g_882 <= 38); g_882 = safe_add_func_int8_t_s_s(g_882, 3))
        {
            int32_t *l_1812[1];
            int64_t ** const *l_1818 = &g_1585;
            uint32_t ***l_1856 = &g_1201;
            union U2 *l_1876[8][1] = {{&l_1469},{&l_1469},{&l_1469},{&l_1469},{&l_1469},{&l_1469},{&l_1469},{&l_1469}};
            int16_t *l_1885 = &g_1770;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1812[i] = &g_3;
            l_1809[1][6][2] = l_1812[0];
            if ((safe_mod_func_int16_t_s_s((((*g_611) = (p_21.f1 , ((safe_add_func_int8_t_s_s((l_1817 == l_1818), p_21.f3.f1)) <= ((((((safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(((**g_610) , ((safe_div_func_uint32_t_u_u(p_21.f2, 0xC6DEAD02L)) > (0xAF01968EB1989F08LL ^ (safe_mul_func_int8_t_s_s((*g_374), p_21.f3.f4))))), l_385[2])) <= (-1L)), p_21.f3.f5)) , p_21.f3.f2) & 8L) == l_1827) , l_1468) | (-8L))))) >= p_21.f3.f2), 8UL)))
            {
                uint16_t *l_1833 = (void*)0;
                uint16_t *l_1834 = &g_934;
                uint32_t *l_1839 = (void*)0;
                uint32_t *l_1840[10][1][6] = {{{&g_703[6],&g_703[6],&g_703[6],&g_822,&g_822,&g_703[6]}},{{&g_1459[5][7][3],&g_1459[5][7][3],&g_39,&g_822,&g_703[6],&g_703[6]}},{{&g_703[6],&g_39,&g_822,&g_703[6],&g_822,&g_39}},{{&g_822,&g_703[6],&g_822,&g_822,&g_1459[5][7][3],&g_703[6]}},{{&g_703[6],&g_822,&g_39,&g_39,&g_822,&g_703[6]}},{{&g_39,&g_822,&g_703[6],&g_703[6],&g_1459[5][7][3],&g_822}},{{&g_822,&g_703[6],&g_822,&g_703[6],&g_822,&g_822}},{{&g_822,&g_39,&g_703[6],&g_703[6],&g_703[6],&g_703[6]}},{{&g_39,&g_1459[5][7][3],&g_1459[5][7][3],&g_39,&g_822,&g_703[6]}},{{&g_703[6],&g_703[6],&g_703[6],&g_822,&g_703[6],&g_822}}};
                const uint16_t l_1845 = 0x6A52L;
                const struct S1 *l_1859 = &g_826[3][9];
                int32_t l_1861 = 0L;
                uint32_t l_1873 = 0x38C7BA7FL;
                int i, j, k;
                if ((safe_div_func_int8_t_s_s(((safe_div_func_uint64_t_u_u((~((*l_1834) = p_21.f2)), 0x230FBE6421EAA931LL)) | ((safe_sub_func_int64_t_s_s((g_1458 = 4L), (p_21.f3.f4 | (safe_mod_func_uint32_t_u_u((g_1459[1][6][0]--), (g_39 = (safe_lshift_func_int16_t_s_s(l_1845, 5)))))))) || (safe_add_func_uint64_t_u_u(((g_826[1][5].f3.f6 = (safe_div_func_int64_t_s_s((((safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(l_33, p_21.f1)) == (l_27 >= (--g_1459[1][7][2]))), (((l_1856 != l_1857) & l_385[2]) || l_1469.f0))) ^ p_21.f2) , p_21.f3.f5), p_21.f2))) != (*g_374)), 0x97BA6CCA1B8F44C2LL)))), p_21.f3.f5)))
                {
                    union U2 l_1858 = {0xBBL};
                    int32_t l_1869 = 0xA410191CL;
                    if ((p_21.f3.f4 < (3UL & (l_1858 , ((l_1859 != l_1860) || (-5L))))))
                    {
                        uint64_t l_1862 = 6UL;
                        int32_t l_1865[4][7] = {{9L,0x311A8442L,9L,9L,0x311A8442L,9L,9L},{0x311A8442L,0x311A8442L,(-1L),0x311A8442L,0x311A8442L,(-1L),0x311A8442L},{0x311A8442L,9L,9L,0x311A8442L,9L,9L,0x311A8442L},{9L,0x311A8442L,9L,9L,0x311A8442L,9L,9L}};
                        int i, j;
                        l_1862++;
                        l_1866--;
                        (*g_388) = &l_1861;
                        l_1870++;
                    }
                    else
                    {
                        union U2 **l_1877 = (void*)0;
                        union U2 **l_1878 = &l_1876[3][0];
                        ++l_1873;
                        l_385[3] &= 0x706C4514L;
                        (*l_1878) = l_1876[1][0];
                    }
                }
                else
                {
                    return g_118;
                }
                if (p_21.f3.f2)
                    continue;
                if (g_246.f3)
                    goto lbl_1919;
            }
            else
            {
                int32_t **l_1879[7][9] = {{&g_1121,&g_1121,&g_1121,&g_1121,&g_1121,&g_1121,&g_1121,&g_1121,(void*)0},{&g_1121,&g_1121,&g_1121,&g_1121,&g_1121,&g_1121,&g_1121,&g_1121,&g_1121},{&g_1121,&g_1121,&g_1121,(void*)0,&g_1121,(void*)0,(void*)0,&g_1121,(void*)0},{&g_1121,&g_1121,&g_1121,(void*)0,&g_1121,&g_1121,&g_1121,&g_1121,&g_1121},{&g_1121,&g_1121,&g_1121,&g_1121,&g_1121,(void*)0,&g_1121,(void*)0,(void*)0},{&g_1121,&g_1121,&g_1121,(void*)0,&g_1121,&g_1121,&g_1121,&g_1121,&g_1121},{&g_1121,&g_1121,&g_1121,&g_1121,&g_1121,&g_1121,&g_1121,&g_1121,&g_1121}};
                struct S0 *l_1880 = (void*)0;
                int32_t l_1888 = (-3L);
                int32_t l_1889[7] = {0x876A4405L,0x876A4405L,(-2L),0x876A4405L,0x876A4405L,(-2L),0x876A4405L};
                int i, j;
                l_1800 = l_1879[4][0];
                g_246.f0 |= ((((((g_51 , ((((&g_243 != l_1880) == (safe_mul_func_int8_t_s_s(((**g_373) > (((((safe_mul_func_int16_t_s_s(((((void*)0 == l_1885) & ((((*g_835) , ((safe_mod_func_uint32_t_u_u(0xE788F214L, ((g_51 , l_385[2]) , p_21.f3.f6))) || 0xD865L)) ^ 0x7793L) != p_21.f3.f6)) ^ p_21.f1), 0xD89DL)) ^ p_21.f3.f4) , (**g_610)) == (-1L)) || (*g_1583))), l_1888))) >= l_1888) != p_21.f2)) <= l_1888) || p_21.f3.f4) >= (**g_343)) , 2UL) , p_21.f3.f4);
                --l_1890[1];
            }
        }
        if (l_385[2])
            break;
    }
    if ((((*g_1120) != ((*l_1893) = (*g_1120))) && (((*l_1896) = (l_1895 = (void*)0)) == ((*l_1898) = (void*)0))))
    {
        int32_t *l_1900 = &g_1726;
        int32_t *l_1901 = &g_165;
        int32_t *l_1902 = &g_42;
        int32_t *l_1903 = &g_1726;
        int32_t *l_1904 = (void*)0;
        int32_t *l_1905 = &g_1773;
        int32_t *l_1906 = &g_167;
        int32_t *l_1907 = (void*)0;
        int32_t *l_1908 = &g_1777;
        int32_t *l_1909 = (void*)0;
        int32_t *l_1910 = (void*)0;
        int32_t *l_1911 = &g_803;
        int32_t *l_1912 = &g_1777;
        int32_t *l_1913[9] = {(void*)0,&g_165,(void*)0,&g_165,(void*)0,&g_165,(void*)0,&g_165,(void*)0};
        uint32_t l_1914 = 0x95D54187L;
        int i;
        --l_1914;
    }
    else
    {
lbl_1919:
        for (g_1237 = 0; (g_1237 != 17); g_1237 = safe_add_func_uint16_t_u_u(g_1237, 1))
        {
            return p_21.f3.f1;
        }
        (*g_388) = ((safe_add_func_uint16_t_u_u((l_1788 | l_1469.f0), (safe_rshift_func_int8_t_s_s((p_21.f3.f6 = l_385[2]), 6)))) , (*g_84));
        (*g_388) = l_1924;
        for (g_841 = 0; (g_841 <= 38); ++g_841)
        {
            int16_t l_1927 = 0x38A2L;
            int32_t l_1957 = 0x505088BDL;
            int32_t l_1959 = (-6L);
            int64_t ***l_1968 = &g_1585;
            int64_t ****l_1967 = &l_1968;
            if (p_21.f2)
            {
                return l_1927;
            }
            else
            {
                int32_t **l_1958 = &g_389;
                int64_t ***l_1966 = &g_1585;
                int64_t ****l_1965 = &l_1966;
                int8_t * const *l_1981 = &g_374;
                for (g_118 = 0; (g_118 == 2); g_118 = safe_add_func_int8_t_s_s(g_118, 6))
                {
                    int32_t * const l_1950[3] = {&g_1951,&g_1951,&g_1951};
                    int32_t * const *l_1949 = &l_1950[0];
                    int32_t * const **l_1948[5][9] = {{&l_1949,&l_1949,&l_1949,&l_1949,&l_1949,(void*)0,&l_1949,&l_1949,&l_1949},{&l_1949,&l_1949,(void*)0,&l_1949,&l_1949,(void*)0,&l_1949,&l_1949,(void*)0},{&l_1949,&l_1949,&l_1949,&l_1949,(void*)0,&l_1949,&l_1949,(void*)0,&l_1949},{(void*)0,(void*)0,(void*)0,&l_1949,(void*)0,&l_1949,&l_1949,(void*)0,&l_1949},{(void*)0,&l_1949,&l_1949,&l_1949,&l_1949,&l_1949,&l_1949,&l_1949,&l_1949}};
                    int64_t *l_1956[6][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                    int16_t **l_1962 = &g_233;
                    int64_t *****l_1969 = &l_1965;
                    int i, j;
                    l_1959 ^= ((*l_1924) != (safe_sub_func_uint64_t_u_u((p_21.f3.f1 == (((safe_div_func_int32_t_s_s(p_21.f2, ((**l_1949) ^= (((safe_rshift_func_uint8_t_u_s((p_21.f3.f0 <= ((safe_rshift_func_uint8_t_u_s(((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(p_21.f3.f3, 7)), p_21.f3.f3)) == (((safe_mod_func_int16_t_s_s(((((((safe_sub_func_uint8_t_u_u(((l_1957 |= ((safe_div_func_uint32_t_u_u((&g_85 != (g_1952 = &g_389)), (safe_mod_func_int8_t_s_s(((~((**g_373) == p_21.f3.f0)) >= (**g_373)), 255UL)))) < 0UL)) > 0xC632A46BAAFAF31ELL), p_21.f3.f0)) < 5UL) < (*l_1924)) , p_21.f3.f5) , l_1958) == &g_389), p_21.f3.f1)) , (*g_84)) == &l_385[3])) ^ 0xA4AFCAB7L) , 0x9FL), p_21.f3.f5)) < 0xAF3357CAL)), 6)) > (*l_1924)) > (*l_1924))))) , p_21.f3.f4) == 3UL)), p_21.f3.f1)));
                    (*l_1924) = (p_21.f3.f6 >= ((0x72L ^ (safe_add_func_int8_t_s_s((((*l_1962) = &l_1927) != (void*)0), ((safe_mul_func_int16_t_s_s((((l_1970 = ((*l_1969) = (l_1967 = l_1965))) == &l_1968) == 0x8C2249E1L), (((**g_343) = (l_1972 , (safe_mod_func_int32_t_s_s(((safe_sub_func_int64_t_s_s((((((safe_div_func_int64_t_s_s(g_826[1][5].f3.f6, (*g_611))) > 0UL) , l_1981) != &g_374) && p_21.f3.f0), (*g_611))) > p_21.f2), (**g_1952))))) | (*l_1924)))) , 0xE2L)))) > p_21.f3.f0));
                    if (l_1959)
                        break;
                }
            }
        }
    }
    l_2000++;
    return (*l_1999);
}







static union U2 func_23(int32_t p_24, const uint32_t p_25, union U2 p_26)
{
    uint8_t l_1504[6] = {9UL,9UL,9UL,9UL,9UL,9UL};
    int32_t l_1505 = (-1L);
    int16_t ****l_1525 = &g_711;
    int16_t *****l_1524 = &l_1525;
    int32_t l_1527 = (-2L);
    int32_t l_1540 = 1L;
    int32_t l_1541 = 5L;
    int32_t l_1542 = 0x4AFB63E5L;
    int32_t l_1543 = 1L;
    int32_t l_1544 = (-1L);
    int32_t l_1545 = (-4L);
    uint64_t l_1553[4];
    int64_t *l_1587[4][8] = {{&g_338,&g_1458,&g_338,&g_338,&g_1458,&g_338,&g_1458,&g_338},{&g_1458,&g_1458,&g_1458,&g_338,&g_338,&g_1458,&g_1458,&g_1458},{&g_338,&g_338,&g_338,&g_338,&g_338,&g_338,&g_338,&g_338},{&g_338,&g_338,&g_338,&g_338,&g_338,&g_338,&g_338,&g_338}};
    int64_t * const *l_1586 = &l_1587[2][7];
    uint32_t *l_1605 = &g_131[8][4];
    struct S0 ** const l_1616 = &g_692;
    uint8_t l_1631[10][2][9] = {{{248UL,9UL,0x39L,0x3DL,253UL,1UL,1UL,253UL,0x3DL},{0UL,251UL,0UL,0xBDL,0xDEL,0UL,0x02L,0x02L,0UL}},{{0x39L,9UL,248UL,9UL,0x39L,0x3DL,253UL,1UL,1UL},{0x49L,0xD6L,0UL,0xBDL,0UL,0xD6L,0x49L,0xDEL,0x75L}},{{249UL,0UL,9UL,0x3DL,0xD5L,0x3DL,9UL,0UL,249UL},{0xD6L,5UL,0x02L,0xDEL,3UL,0UL,3UL,0xDEL,0x02L}},{{253UL,253UL,0UL,248UL,0UL,1UL,249UL,1UL,0x39L},{3UL,0xBDL,0xBDL,3UL,5UL,0UL,0x49L,0UL,0x49L}},{{248UL,0UL,253UL,253UL,0UL,248UL,0UL,1UL,249UL},{251UL,0UL,0UL,5UL,5UL,0UL,0UL,251UL,0xD6L}},{{249UL,253UL,0xEDL,0UL,0x39L,0x39L,0UL,0xEDL,253UL},{5UL,251UL,0x02L,0xD6L,0xBDL,0x49L,0x49L,0xBDL,0xD6L}},{{0x3DL,0xD5L,0x3DL,9UL,0UL,249UL,248UL,248UL,249UL},{0x02L,251UL,5UL,251UL,0x02L,0xD6L,0xBDL,0x49L,0x49L}},{{0xEDL,253UL,249UL,9UL,249UL,253UL,0xEDL,0UL,0x39L},{0UL,0UL,251UL,0xD6L,0x75L,0xD6L,251UL,0UL,0UL}},{{253UL,0UL,248UL,0UL,1UL,249UL,1UL,0UL,248UL},{0xBDL,0xBDL,3UL,5UL,0UL,0x49L,0UL,0x49L,0UL}},{{253UL,1UL,1UL,253UL,0x3DL,0x39L,9UL,248UL,9UL},{0UL,0xD6L,3UL,3UL,0xD6L,0UL,0x75L,0xBDL,0x02L}}};
    int8_t l_1735 = 5L;
    struct S1 l_1742 = {0L,-1L,0L,{1169,10,-13,426,559,273,-1L}};
    int64_t l_1768 = 1L;
    int32_t l_1771 = 0x854DBA0BL;
    int32_t l_1776[10][4][4] = {{{0L,1L,0x080DF420L,0L},{0L,(-2L),0x3A888621L,1L},{(-2L),9L,0x3A888621L,0x3A888621L},{0L,0L,0x080DF420L,1L}},{{0L,0x6EE42505L,6L,1L},{6L,1L,(-2L),6L},{0L,1L,0x3D4424D7L,1L},{1L,0x6EE42505L,0x3A888621L,1L}},{{1L,0L,(-2L),0x3A888621L},{0L,9L,0x8568F3CBL,1L},{0L,(-2L),(-2L),0L},{1L,1L,0x3A888621L,(-2L)}},{{1L,9L,0x3D4424D7L,1L},{0L,1L,(-2L),1L},{6L,9L,6L,(-2L)},{0L,1L,0x080DF420L,0L}},{{0L,(-2L),0x3A888621L,1L},{(-2L),9L,0x3A888621L,0x3A888621L},{0L,(-2L),0L,0x6EE42505L},{0x3A888621L,2L,0x3D4424D7L,6L}},{{0x3D4424D7L,6L,0x8568F3CBL,0x3D4424D7L},{(-2L),6L,9L,6L},{6L,2L,0xEF5B16C1L,0x6EE42505L},{0x080DF420L,(-2L),0x8568F3CBL,0xEF5B16C1L}},{{0x3A888621L,1L,1L,6L},{0x3A888621L,0x8568F3CBL,0x8568F3CBL,0x3A888621L},{0x080DF420L,6L,0xEF5B16C1L,0x8568F3CBL},{6L,1L,9L,0x6EE42505L}},{{(-2L),0x080DF420L,0x8568F3CBL,0x6EE42505L},{0x3D4424D7L,1L,0x3D4424D7L,0x8568F3CBL},{0x3A888621L,6L,0L,0x3A888621L},{(-2L),0x8568F3CBL,0xEF5B16C1L,6L}},{{0x8568F3CBL,1L,0xEF5B16C1L,0xEF5B16C1L},{(-2L),(-2L),0L,0x6EE42505L},{0x3A888621L,2L,0x3D4424D7L,6L},{0x3D4424D7L,6L,0x8568F3CBL,0x3D4424D7L}},{{(-2L),6L,9L,6L},{6L,2L,0xEF5B16C1L,0x6EE42505L},{0x080DF420L,(-2L),0x8568F3CBL,0xEF5B16C1L},{0x3A888621L,1L,1L,6L}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1553[i] = 0xE820EAB3520E9233LL;
    for (g_243.f6 = (-5); (g_243.f6 < 19); g_243.f6++)
    {
        union U2 *l_1478 = &g_51;
        int32_t l_1498 = 0x545C8808L;
        int32_t l_1499 = 0x8969A713L;
        int16_t *l_1502 = &g_1352.f1;
        uint32_t *l_1503[5][5][4] = {{{&g_1459[1][7][2],&g_39,&g_39,&g_1459[1][7][2]},{&g_703[0],(void*)0,&g_703[6],&g_39},{(void*)0,&g_39,&g_703[6],&g_39},{&g_1459[1][7][2],&g_703[0],&g_39,&g_39},{&g_703[6],&g_39,&g_703[6],&g_39}},{{&g_1459[1][7][2],(void*)0,&g_1459[1][7][2],&g_1459[1][7][2]},{&g_1459[1][7][2],&g_39,&g_703[6],(void*)0},{&g_39,&g_39,&g_703[6],&g_703[6]},{&g_1459[1][7][2],&g_1459[1][7][2],&g_1459[1][7][2],&g_39},{&g_1459[1][7][2],&g_39,&g_703[6],(void*)0}},{{&g_703[6],(void*)0,&g_39,&g_703[6]},{&g_1459[1][7][2],(void*)0,&g_703[6],(void*)0},{(void*)0,&g_39,&g_703[6],&g_39},{&g_703[0],&g_1459[1][7][2],&g_39,&g_703[6]},{&g_1459[1][7][2],&g_39,(void*)0,(void*)0}},{{&g_1459[1][7][2],&g_39,&g_39,&g_1459[1][7][2]},{&g_703[0],(void*)0,&g_703[6],&g_39},{(void*)0,&g_39,&g_703[6],&g_39},{&g_1459[1][7][2],&g_703[0],&g_39,&g_39},{&g_703[6],&g_39,&g_703[6],&g_39}},{{&g_1459[1][7][2],(void*)0,&g_1459[1][7][2],&g_1459[1][7][2]},{&g_1459[1][7][2],&g_39,&g_703[6],(void*)0},{&g_39,&g_39,&g_703[6],&g_703[6]},{&g_1459[1][7][2],&g_1459[1][7][2],&g_1459[1][7][2],&g_39},{&g_1459[1][7][2],&g_39,&g_703[6],(void*)0}}};
        uint16_t *l_1506 = &g_934;
        int64_t *l_1507 = &g_338;
        int32_t l_1538 = 0x26D50877L;
        int32_t l_1539[9][8] = {{0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL},{0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL},{0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL},{0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL},{0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL},{0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL},{0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL},{0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL},{0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL,0xC0A55BEBL}};
        int32_t *l_1550 = (void*)0;
        int32_t *l_1551 = &l_1544;
        int32_t *l_1552[7][10][1] = {{{(void*)0},{&l_1538},{(void*)0},{&l_1505},{&g_167},{&l_1542},{(void*)0},{(void*)0},{&l_1543},{(void*)0}},{{&g_42},{&l_1541},{&l_1542},{&l_1505},{(void*)0},{&g_165},{&l_1542},{&g_42},{&g_167},{&g_167}},{{&g_42},{&l_1542},{&g_165},{(void*)0},{&l_1505},{&l_1542},{&l_1541},{&g_42},{(void*)0},{&l_1543}},{{(void*)0},{(void*)0},{&l_1542},{&g_167},{&l_1505},{(void*)0},{&l_1538},{(void*)0},{&l_1505},{&g_167}},{{&l_1542},{(void*)0},{(void*)0},{&l_1543},{(void*)0},{&g_42},{&l_1541},{&l_1542},{&l_1505},{(void*)0}},{{&g_165},{&l_1542},{&g_42},{&g_167},{&g_167},{&g_42},{&l_1542},{&g_165},{(void*)0},{&l_1505}},{{&l_1542},{&l_1541},{&g_42},{(void*)0},{&l_1543},{(void*)0},{(void*)0},{&l_1542},{&g_167},{&l_1505}}};
        int i, j, k;
        g_803 |= (g_829[0][0][0].f0 == (safe_lshift_func_int16_t_s_s(((((((0x769EFFC453B57D1BLL | ((*l_1507) = (safe_div_func_uint8_t_u_u(((**g_343) = (safe_lshift_func_int8_t_s_u((((*l_1478) = p_26) , (safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((!((safe_mul_func_uint16_t_u_u(((((*g_233) > (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((((((*l_1506) = (((safe_mul_func_uint8_t_u_u((g_199[0][2].f3 , (safe_rshift_func_uint16_t_u_u(g_505, (safe_rshift_func_uint8_t_u_s((((l_1504[5] = (safe_div_func_int16_t_s_s((l_1499 &= l_1498), (safe_sub_func_uint8_t_u_u((0UL ^ ((*l_1502) = ((p_25 != 0x4AL) == p_26.f0))), 0x25L))))) != 4294967287UL) == l_1498), p_25))))), l_1505)) ^ (*g_611)) & g_829[0][0][0].f5)) && l_1499) , (*g_233)) < p_24), (*g_344))) , (*g_233)), 15))) , (*g_1386)) != (void*)0), l_1498)) != l_1505)), p_25)), 4))), 4))), 1L)))) != p_25) == l_1498) , 0xACC999ECL) , (**g_343)) , p_24), 15)));
        (*g_84) = (void*)0;
        for (g_76 = 0; (g_76 <= 3); g_76 += 1)
        {
            uint32_t l_1518 = 0xF3446DC2L;
            int16_t ***** const l_1526[2][5] = {{&l_1525,&l_1525,&l_1525,&l_1525,&l_1525},{&l_1525,&l_1525,&l_1525,&l_1525,&l_1525}};
            int32_t l_1528[2];
            uint8_t *l_1529 = &g_391[0][8];
            uint8_t *l_1534 = &g_65;
            int8_t *l_1535 = &g_826[1][5].f3.f6;
            int8_t *l_1536 = (void*)0;
            int32_t *l_1537[10][2] = {{(void*)0,(void*)0},{(void*)0,&l_1498},{&g_165,&g_165},{&l_1498,&g_165},{&g_165,&l_1498},{(void*)0,(void*)0},{(void*)0,&l_1498},{&g_165,&g_165},{&l_1498,&g_165},{&g_165,&l_1498}};
            uint32_t l_1546 = 0UL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1528[i] = (-1L);
            g_243.f3 &= (safe_sub_func_int64_t_s_s(((*l_1507) |= p_26.f0), (safe_sub_func_uint16_t_u_u((((l_1505 = l_1504[5]) ^ (((l_1499 = ((*l_1535) |= ((p_26.f0 || (safe_rshift_func_uint8_t_u_s(5UL, 6))) && (safe_mul_func_int16_t_s_s((l_1518 > (((*l_1534) = (l_1527 = (((((0x09026F1EL <= (((((safe_unary_minus_func_int8_t_s((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((l_1524 != l_1526[0][4]), ((*l_1529)--))), ((safe_mul_func_uint8_t_u_u(0xA5L, (**g_373))) | l_1499))))) || l_1528[0]) & (**g_343)) , 0UL) != p_25)) | 0x67C6L) > 0x2EL) , 7L) >= 0x1F1BL))) != p_24)), l_1504[5]))))) , 0x4152EBA9L) >= p_26.f0)) < (**g_343)), l_1504[0]))));
            ++l_1546;
            for (p_26.f0 = 0; (p_26.f0 <= 3); p_26.f0 += 1)
            {
                struct S0 **l_1549 = &g_692;
                (*l_1549) = (void*)0;
            }
        }
        l_1553[0]--;
    }
    for (g_1049 = 0; (g_1049 < 3); g_1049 = safe_add_func_int16_t_s_s(g_1049, 8))
    {
        uint8_t *** const *l_1559 = (void*)0;
        uint8_t *** const **l_1558 = &l_1559;
        int32_t l_1577 = 0x6BDFDF1FL;
        uint32_t **l_1606 = &l_1605;
        union U2 *l_1608 = (void*)0;
        union U2 **l_1607 = &l_1608;
        if ((((*g_344) = ((((*l_1558) = (void*)0) == &g_1062) & (*g_611))) | (l_1504[5] , p_25)))
        {
            int16_t *l_1562 = &g_1352.f1;
            const uint8_t *****l_1579 = &g_1578;
            l_1545 ^= (0x3ED90DA1L & (((l_1562 != l_1562) > (l_1543 >= p_26.f0)) , ((safe_mod_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(l_1577, ((*l_1558) == (g_1580[1][0] = ((*l_1579) = g_1578))))), p_25)), (**g_373))), p_25)), p_25)) != p_24) , p_26.f0), (*g_233))) >= 1L), 18446744073709551607UL)) , g_875[1])));
            if (p_26.f0)
                continue;
            if (p_24)
                break;
        }
        else
        {
            int32_t *l_1588 = &l_1542;
            l_1542 ^= (g_1585 != l_1586);
            (*l_1588) &= (0x499B4AEFL == p_25);
            (*l_1588) = 0x2AB9DC3DL;
        }
        p_24 = (safe_add_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((0xC6L ^ (p_24 , ((((*l_1606) = l_1605) == &g_1298) ^ (((g_199[0][2].f2 != 0xB0EEL) && l_1577) ^ l_1577)))), ((l_1607 != &l_1608) || p_25))) < p_25), p_26.f0)), 1UL)) | l_1505), l_1505)), g_1352.f3.f3)), p_26.f0)) , l_1577), p_25)) == l_1577), p_26.f0));
        if (p_26.f0)
            break;
        p_24 = (g_829[0][0][0].f0 = l_1553[2]);
    }
    for (l_1505 = 0; (l_1505 >= (-15)); --l_1505)
    {
        struct S0 **l_1615 = &g_692;
        const int32_t l_1619 = 0xEEEE9903L;
        uint8_t *l_1655 = &g_76;
        int32_t l_1659 = 0x05324E99L;
        int32_t l_1660[1][5][5] = {{{1L,1L,(-1L),0x51783B49L,(-1L)},{1L,1L,0L,0x3B486123L,0L},{1L,1L,(-1L),0x51783B49L,(-1L)},{1L,1L,0L,0x3B486123L,0L},{1L,1L,(-1L),4L,0xF0C66F7FL}}};
        uint8_t l_1737[10] = {0x43L,0x43L,0x8DL,0xFBL,0x8DL,0x43L,0x43L,0x8DL,0xFBL,0x8DL};
        int16_t l_1763[10];
        int32_t l_1764[4][3][7] = {{{0x041A6429L,0L,(-10L),7L,(-1L),0x041A6429L,0x041A6429L},{0L,(-1L),(-1L),(-1L),0L,0xDB869255L,(-1L)},{0L,0x6E829A14L,(-2L),(-1L),(-10L),(-2L),(-8L)}},{{(-10L),(-8L),7L,7L,(-8L),(-10L),0x6E829A14L},{0L,(-1L),0L,0L,(-8L),0x5488B28AL,(-1L)},{0L,0x041A6429L,(-10L),0xD76708B7L,(-10L),0x041A6429L,0L}},{{0x041A6429L,(-1L),7L,(-10L),0L,0x041A6429L,(-10L)},{0L,(-8L),0x5488B28AL,(-1L),(-1L),0x5488B28AL,(-8L)},{(-1L),0x6E829A14L,7L,0xD76708B7L,0x6E829A14L,(-10L),(-8L)}},{{(-2L),(-1L),(-10L),(-2L),(-8L),(-2L),(-10L)},{0L,0L,0L,0xD76708B7L,(-1L),0xDB869255L,0L},{0L,(-10L),7L,(-1L),0x041A6429L,0x041A6429L,(-1L)}}};
        struct S1 *l_1785 = &l_1742;
        int32_t *l_1787 = &g_42;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_1763[i] = 0x61A9L;
    }
    return p_26;
}







static uint8_t func_30(int8_t p_31, struct S0 p_32)
{
    union U2 l_740 = {0L};
    uint64_t ***l_756 = &g_610;
    int32_t l_763[8][8] = {{0xABC6681EL,0x4A3D904DL,0xABC6681EL,0xABC6681EL,0x4A3D904DL,0xABC6681EL,0xABC6681EL,0x4A3D904DL},{0x4A3D904DL,0xABC6681EL,0xABC6681EL,0x4A3D904DL,0xABC6681EL,0xABC6681EL,0x4A3D904DL,0xABC6681EL},{0x4A3D904DL,0x4A3D904DL,0L,0x4A3D904DL,0x4A3D904DL,0L,0x4A3D904DL,0x4A3D904DL},{0xABC6681EL,0x4A3D904DL,0xABC6681EL,0xABC6681EL,0x4A3D904DL,0xABC6681EL,0xABC6681EL,0x4A3D904DL},{0x4A3D904DL,0xABC6681EL,0xABC6681EL,0x4A3D904DL,0xABC6681EL,0xABC6681EL,0x4A3D904DL,0xABC6681EL},{0x4A3D904DL,0x4A3D904DL,0L,0x4A3D904DL,0x4A3D904DL,0L,0x4A3D904DL,0x4A3D904DL},{0xABC6681EL,0x4A3D904DL,0xABC6681EL,0xABC6681EL,0x4A3D904DL,0xABC6681EL,0xABC6681EL,0x4A3D904DL},{0x4A3D904DL,0xABC6681EL,0xABC6681EL,0x4A3D904DL,0xABC6681EL,0xABC6681EL,0x4A3D904DL,0xABC6681EL}};
    int64_t *l_778 = (void*)0;
    const int8_t l_821[1] = {0xE9L};
    struct S1 l_824 = {-10L,1L,5L,{746,-20,-15,494,851,195,0L}};
    int32_t l_926 = 0L;
    uint8_t **l_938 = &g_344;
    int16_t l_956 = 0x2D6AL;
    int32_t *l_967[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_966 = &l_967[8];
    int16_t *l_1081 = &g_826[1][5].f1;
    uint8_t **l_1117 = (void*)0;
    uint8_t l_1259 = 1UL;
    uint16_t l_1271 = 0xB616L;
    uint8_t *****l_1301[3];
    int8_t **l_1310[7];
    int16_t l_1312 = 0x4B04L;
    struct S0 **l_1319[9];
    int32_t *l_1335 = &g_165;
    struct S1 *l_1351 = &g_1352;
    uint32_t ***l_1443 = &g_1201;
    int8_t l_1453 = 0x3BL;
    int64_t *l_1462 = &g_338;
    uint8_t ***l_1463 = &l_1117;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1301[i] = (void*)0;
    for (i = 0; i < 7; i++)
        l_1310[i] = &g_374;
    for (i = 0; i < 9; i++)
        l_1319[i] = &g_692;
    if ((l_740 , (&g_692 != &g_692)))
    {
        uint32_t l_743 = 0xFE282E00L;
        int8_t * const *l_748 = &g_374;
        uint64_t ***l_755 = &g_610;
        int32_t *l_760 = (void*)0;
        int16_t ****l_799[8][4] = {{&g_711,&g_711,&g_711,&g_711},{&g_711,&g_711,&g_711,&g_711},{&g_711,&g_711,&g_711,&g_711},{&g_711,&g_711,&g_711,&g_711},{&g_711,&g_711,&g_711,&g_711},{&g_711,&g_711,&g_711,&g_711},{&g_711,&g_711,&g_711,&g_711},{&g_711,&g_711,&g_711,&g_711}};
        int32_t l_837[5][10] = {{0x864D8888L,0x864D8888L,(-9L),0x864D8888L,0x864D8888L,(-9L),0x864D8888L,0x864D8888L,(-9L),0x864D8888L},{0x864D8888L,0xDC5F3598L,0xDC5F3598L,0x864D8888L,0xDC5F3598L,0xDC5F3598L,0x864D8888L,0xDC5F3598L,0xDC5F3598L,0x864D8888L},{0xDC5F3598L,0x864D8888L,0xDC5F3598L,0xDC5F3598L,0x864D8888L,0xDC5F3598L,0xDC5F3598L,0x864D8888L,0xDC5F3598L,0xDC5F3598L},{0x864D8888L,0x864D8888L,(-9L),0x864D8888L,0x864D8888L,(-9L),0x864D8888L,0x864D8888L,(-9L),0x864D8888L},{0x864D8888L,0xDC5F3598L,0xDC5F3598L,0x864D8888L,0xDC5F3598L,0xDC5F3598L,0x864D8888L,0xDC5F3598L,0xDC5F3598L,0x864D8888L}};
        int32_t *l_853 = &l_763[0][7];
        int8_t l_918 = 0x07L;
        int32_t l_921 = 0x2D514933L;
        int32_t l_922 = 0xF90B58C4L;
        int32_t l_928 = 0xB5AED91AL;
        int32_t l_931 = 0L;
        int32_t l_932 = 0xF4B41AF1L;
        uint8_t * const * const l_937[6] = {&g_344,&g_344,&g_344,&g_344,&g_344,&g_344};
        int64_t l_952 = 0x3C56AA240FBAF6CALL;
        uint32_t l_953 = 0x1B016E1CL;
        int i, j;
        for (g_505 = 14; (g_505 > (-25)); g_505 = safe_sub_func_int8_t_s_s(g_505, 7))
        {
            uint64_t ****l_757[4][1][3] = {{{(void*)0,&l_755,(void*)0}},{{(void*)0,&l_755,(void*)0}},{{(void*)0,&l_755,(void*)0}},{{(void*)0,&l_755,(void*)0}}};
            int32_t l_759 = 1L;
            uint8_t l_801 = 1UL;
            int64_t *l_802 = &g_338;
            int8_t l_819 = 0x98L;
            const struct S1 *l_825 = &g_826[1][5];
            struct S0 *l_828 = &g_829[0][0][0];
            const int16_t ** const l_873[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            const int16_t ** const *l_872 = &l_873[5];
            const int16_t ** const **l_871 = &l_872;
            int32_t l_920[1][8][4] = {{{(-5L),0x2C275E69L,(-5L),0x59E88346L},{(-5L),0x59E88346L,0x59E88346L,(-5L)},{(-9L),0x59E88346L,(-5L),0x59E88346L},{0x59E88346L,0x2C275E69L,(-5L),(-5L)},{(-9L),(-9L),0x59E88346L,(-5L)},{(-5L),0x2C275E69L,(-5L),0x59E88346L},{(-5L),0x59E88346L,0x59E88346L,(-5L)},{(-9L),0x59E88346L,(-5L),0x59E88346L}}};
            int i, j, k;
            if (((l_743 >= (l_759 ^= ((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((l_748 != ((safe_mod_func_uint8_t_u_u(((*g_344)--), p_32.f0)) , (void*)0)), 3)) == (safe_div_func_int64_t_s_s(((((((l_755 == (g_758[0] = l_756)) , ((void*)0 != &g_373)) <= p_32.f3) & 255UL) <= l_743) != p_32.f0), (**g_610)))), p_32.f1)) || l_743))) || l_743))
            {
                int16_t l_772 = 0xC94EL;
                int32_t **l_823 = &g_389;
                struct S0 *l_827 = &l_824.f3;
                int32_t l_840 = 2L;
                l_763[0][7] |= ((l_760 == l_760) == (safe_rshift_func_uint8_t_u_u((*g_344), 5)));
                (*g_388) = (*g_84);
                for (g_338 = 22; (g_338 < (-29)); g_338 = safe_sub_func_int64_t_s_s(g_338, 6))
                {
                    uint8_t l_773 = 0x09L;
                    uint16_t *l_782 = (void*)0;
                    uint32_t *l_800[2];
                    int64_t *l_807 = &g_338;
                    uint32_t *l_836 = &g_131[7][5];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_800[i] = (void*)0;
                    l_772 = ((safe_rshift_func_int16_t_s_u(0x790EL, ((((**g_343) = (safe_mul_func_int8_t_s_s(1L, 1UL))) >= 1L) == ((*g_611) , ((*g_374) = (((p_32.f6 != (g_243.f3 , ((18446744073709551615UL != (g_246.f4 == l_763[0][7])) || 2L))) <= g_131[1][1]) ^ 65535UL)))))) , p_32.f5);
                    if ((g_803 ^= ((l_773 | (safe_div_func_uint16_t_u_u(p_32.f3, (safe_mod_func_int8_t_s_s((((*g_374) ^ (**g_343)) , (l_778 != ((+(safe_add_func_uint64_t_u_u(((**g_610) = ((--g_118) <= ((safe_rshift_func_uint16_t_u_s(l_772, 14)) | 0x62L))), (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(((g_703[5] ^= ((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((p_32.f2 , (l_799[5][1] != (void*)0)) >= p_32.f3), 0xAFL)), (**g_343))) ^ p_32.f6)) ^ l_801), 0x30B90B54L)), 18446744073709551609UL)) != (-10L)), 4)), p_31))))) , l_802))), p_32.f1))))) , 0x4E8831A9L)))
                    {
                        int64_t **l_808 = &l_778;
                        int32_t l_820 = 0xB8DED2D8L;
                        g_822 = ((safe_lshift_func_uint16_t_u_s((!((l_755 != (void*)0) , ((g_243.f4 , l_807) != ((*l_808) = (void*)0)))), 8)) | (safe_add_func_int64_t_s_s(((safe_mod_func_int64_t_s_s(g_243.f4, (safe_rshift_func_uint16_t_u_u(((0xD4E5813E3BE9BE77LL < (*g_611)) != (safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(l_819, l_820)) & g_199[0][2].f3.f0), 1UL))), 0)))) , 0x3F622E6635BAC758LL), l_821[0])));
                        p_32.f0 = ((void*)0 == l_823);
                        l_825 = (l_824 , &g_199[0][2]);
                    }
                    else
                    {
                        struct S0 **l_830[2];
                        uint32_t *l_834[1][5] = {{&g_131[8][5],&g_131[8][5],&g_131[8][5],&g_131[8][5],&g_131[8][5]}};
                        uint32_t **l_833[10][3][8] = {{{(void*)0,&l_834[0][4],&l_834[0][4],&l_834[0][3],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][1]},{&l_834[0][3],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],(void*)0,&l_834[0][4],(void*)0},{(void*)0,&l_834[0][4],&l_834[0][4],&l_834[0][1],&l_834[0][4],&l_834[0][4],&l_834[0][3],&l_834[0][4]}},{{&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][3],(void*)0,&l_834[0][4],&l_834[0][0],(void*)0},{&l_834[0][4],&l_834[0][4],&l_834[0][1],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][1]},{&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][1],&l_834[0][4],(void*)0}},{{&l_834[0][4],&l_834[0][4],&l_834[0][0],&l_834[0][4],&l_834[0][3],&l_834[0][3],&l_834[0][4],(void*)0},{&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][1]},{&l_834[0][4],&l_834[0][0],&l_834[0][3],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][2],&l_834[0][4]}},{{&l_834[0][0],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][3],&l_834[0][4],&l_834[0][3]},{&l_834[0][3],&l_834[0][0],&l_834[0][3],&l_834[0][0],&l_834[0][3],&l_834[0][1],&l_834[0][1],&l_834[0][4]},{&l_834[0][4],(void*)0,&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][3],&l_834[0][0]}},{{&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],(void*)0,&l_834[0][1],&l_834[0][1],&l_834[0][4]},{&l_834[0][4],&l_834[0][4],&l_834[0][3],&l_834[0][4],&l_834[0][1],(void*)0,&l_834[0][4],&l_834[0][1]},{&l_834[0][4],&l_834[0][4],&l_834[0][4],(void*)0,&l_834[0][4],&l_834[0][4],&l_834[0][2],&l_834[0][4]}},{{&l_834[0][4],&l_834[0][4],&l_834[0][0],&l_834[0][4],&l_834[0][4],&l_834[0][0],&l_834[0][4],&l_834[0][4]},{&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4]},{&l_834[0][2],&l_834[0][4],&l_834[0][1],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4]}},{{(void*)0,&l_834[0][4],(void*)0,&l_834[0][4],&l_834[0][1],&l_834[0][0],&l_834[0][3],&l_834[0][4]},{&l_834[0][4],&l_834[0][4],&l_834[0][4],(void*)0,&l_834[0][3],&l_834[0][4],&l_834[0][4],(void*)0},{&l_834[0][4],&l_834[0][4],&l_834[0][3],&l_834[0][4],&l_834[0][4],(void*)0,&l_834[0][4],&l_834[0][4]}},{{&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][1],&l_834[0][4],&l_834[0][4]},{&l_834[0][3],&l_834[0][4],&l_834[0][1],&l_834[0][3],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4]},{&l_834[0][3],(void*)0,(void*)0,&l_834[0][4],&l_834[0][4],&l_834[0][1],&l_834[0][4],&l_834[0][4]}},{{&l_834[0][4],&l_834[0][0],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][3],&l_834[0][4],&l_834[0][1]},{&l_834[0][4],&l_834[0][4],&l_834[0][4],(void*)0,&l_834[0][3],&l_834[0][4],&l_834[0][4],&l_834[0][4]},{&l_834[0][4],&l_834[0][1],&l_834[0][4],&l_834[0][4],&l_834[0][1],&l_834[0][4],&l_834[0][1],&l_834[0][4]}},{{(void*)0,&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],(void*)0,&l_834[0][4]},{&l_834[0][2],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4]},{&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],&l_834[0][4],(void*)0,&l_834[0][4]}}};
                        int32_t *l_838 = (void*)0;
                        int32_t *l_839[3][4] = {{(void*)0,&l_763[0][7],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_763[0][7],&l_763[0][7],&l_763[0][7],(void*)0}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_830[i] = (void*)0;
                        g_692 = (l_828 = l_827);
                        p_32.f5 |= (p_32.f0 = (safe_mod_func_int32_t_s_s((p_32.f3 = (((((g_835 = &g_131[1][7]) == (l_836 = &g_131[1][1])) >= l_837[0][2]) , &g_711) == (void*)0)), g_829[0][0][0].f3)));
                        l_840 = (1L <= (g_829[0][0][0].f6 >= 0x70F8C705L));
                        g_841 |= p_32.f5;
                    }
                    if (((safe_sub_func_uint8_t_u_u(((g_829[0][0][0].f6 >= (safe_unary_minus_func_int16_t_s(0L))) || ((safe_unary_minus_func_uint64_t_u(((void*)0 != &g_338))) == ((safe_add_func_int64_t_s_s((((*g_233) == 0x336AL) > (**g_373)), g_246.f0)) == (18446744073709551615UL || (**g_610))))), l_743)) > l_773))
                    {
                        p_32.f3 ^= p_32.f4;
                        return p_31;
                    }
                    else
                    {
                        int32_t *l_852 = &l_763[0][7];
                        (*l_852) = ((((*g_374) && (-2L)) , 0x13L) , (((-8L) >= ((0x852B8476L >= (((p_32.f3 && 1L) ^ (p_32.f4 > (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(p_32.f3, p_32.f0)), p_32.f2)))) , 0L)) && (**g_343))) > p_32.f3));
                    }
                }
            }
            else
            {
                uint32_t l_874[3];
                int32_t l_919[6];
                int i;
                for (i = 0; i < 3; i++)
                    l_874[i] = 0x5D0BF8CAL;
                for (i = 0; i < 6; i++)
                    l_919[i] = 0x00281C1EL;
                for (g_165 = 4; (g_165 >= 0); g_165 -= 1)
                {
                    int32_t **l_868 = &g_389;
                    int32_t ***l_869 = &l_868;
                    int16_t *****l_870 = &l_799[4][1];
                    uint32_t *l_889[3][4][3] = {{{&g_39,&g_703[5],&l_743},{&g_39,&l_743,&g_822},{(void*)0,&g_703[6],&l_743},{&g_703[5],&g_703[1],&g_703[1]}},{{&g_703[1],&g_703[6],(void*)0},{&g_39,&g_822,&g_39},{&g_703[6],(void*)0,&g_39},{&g_822,&g_703[2],(void*)0}},{{(void*)0,&g_39,&g_703[1]},{(void*)0,(void*)0,&l_743},{(void*)0,&g_822,&g_703[5]},{&g_822,&g_822,&g_822}}};
                    union U2 *l_894 = &l_740;
                    int32_t *l_905 = &g_167;
                    int32_t l_923 = (-1L);
                    int32_t l_924 = 0xDFD781E2L;
                    int32_t l_925 = 0xB8F678D3L;
                    int32_t l_929 = 0x44FE525EL;
                    int32_t l_930 = 0x931B9D66L;
                    int i, j, k;
                    (*g_388) = (void*)0;
                    (*g_388) = l_853;
                    g_803 ^= ((safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s(p_32.f0, 1UL)), p_32.f4)) & (((((safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(((l_740 , (((safe_div_func_uint16_t_u_u(g_703[6], (l_801 & (((*l_869) = l_868) == (void*)0)))) , ((*l_870) = &g_711)) != l_871)) <= p_31), l_874[1])), p_32.f2)), (-7L))), 18446744073709551615UL)) & p_32.f1) <= g_875[0]) | p_32.f1) <= (*g_389)));
                    (*l_905) = ((((*g_389) = (-1L)) , ((safe_sub_func_int16_t_s_s(p_32.f5, (safe_sub_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((void*)0 != &l_837[0][2]), (g_882--))), 18446744073709551612UL)))) != (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((((g_39 = (**l_868)) , ((p_32.f2 <= ((safe_mul_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u((l_759 |= (((((*l_894) = l_740) , (safe_add_func_uint8_t_u_u((safe_div_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_s((g_118 = (safe_div_func_int32_t_s_s((*l_853), (*l_853)))), p_32.f2)) || 0L) <= p_32.f0), 1UL)), l_801))) || 0x057C66DFL) < (*l_853))), p_32.f0)) && (**g_388)) | l_874[1]), (-9L))) || p_32.f2)) , (**g_343))) == p_32.f6), (***l_869))), p_31)))) , p_32.f0);
                    for (l_824.f0 = 0; (l_824.f0 <= 4); l_824.f0 += 1)
                    {
                        int32_t *l_906 = &l_759;
                        int32_t *l_907 = &l_763[2][6];
                        int32_t *l_908 = &l_759;
                        int32_t *l_909 = &g_803;
                        int32_t *l_910 = (void*)0;
                        int32_t *l_911 = &g_803;
                        int32_t *l_912 = &g_803;
                        int32_t *l_913 = &g_42;
                        int32_t *l_914 = &g_803;
                        int32_t *l_915 = &l_763[2][1];
                        int32_t *l_916 = &l_759;
                        int32_t *l_917[3][8] = {{&g_3,&g_3,&g_42,&g_3,&g_3,&g_42,&g_3,&g_3},{&g_803,&g_3,&g_803,&g_803,&g_3,&g_803,&g_803,&g_3},{&g_3,&g_803,&g_803,&g_3,&g_803,&g_803,&g_3,&g_803}};
                        int32_t l_927 = 0x3DE39418L;
                        int i, j;
                        (**g_388) ^= 1L;
                        g_934--;
                    }
                }
                (*l_853) = (l_937[4] == l_938);
            }
            return p_31;
        }
        for (g_418 = 0; (g_418 <= (-11)); g_418 = safe_sub_func_uint8_t_u_u(g_418, 6))
        {
            uint32_t l_943 = 0x273911DAL;
            int32_t *l_950 = (void*)0;
            int32_t *l_951[5][6][5] = {{{&g_3,&l_932,&g_3,&l_932,(void*)0},{&l_931,(void*)0,&l_921,&g_803,&g_42},{&g_165,&g_803,&g_42,(void*)0,&g_165},{&g_167,&l_928,&l_922,&l_932,&l_931},{&l_932,&l_928,(void*)0,&l_922,&g_167},{&g_3,&g_803,&g_165,&g_165,&g_803}},{{&l_922,(void*)0,&l_931,&g_167,&l_931},{&g_42,&l_932,&g_3,(void*)0,&g_42},{&g_803,&l_931,&l_922,&l_921,&g_3},{&g_42,&l_922,&g_42,(void*)0,&l_922},{&l_922,&l_932,(void*)0,&g_167,&g_165},{&g_3,&l_932,&g_167,&g_167,&l_928}},{{&l_932,&g_167,(void*)0,&g_167,&l_928},{&g_167,&g_3,&g_42,(void*)0,&g_165},{&g_165,(void*)0,(void*)0,&g_165,&l_922},{&l_931,&l_928,&l_932,&g_167,&g_3},{&g_3,&g_42,&g_803,&g_3,&g_42},{(void*)0,(void*)0,&g_167,&g_167,&l_931}},{{&g_167,&g_42,&g_167,&g_165,&g_803},{&l_921,&g_803,&g_42,(void*)0,&g_167},{&g_803,&g_803,&g_803,&g_167,&l_931},{&g_42,&g_165,&g_803,&g_167,&g_165},{&g_165,&g_803,&g_42,&g_167,&g_42},{&l_921,&l_921,&g_167,(void*)0,(void*)0}},{{(void*)0,&l_931,&g_167,&l_921,&l_922},{&g_803,&l_931,&g_803,(void*)0,&l_932},{(void*)0,&l_931,&l_932,&g_167,&g_803},{&l_928,&l_921,&l_921,&g_42,&g_165},{&g_167,&l_921,&g_3,&g_165,&g_167},{&g_803,&g_803,&g_167,&l_931,&g_42}}};
            int i, j, k;
            p_32.f3 = (safe_mul_func_uint8_t_u_u(((*g_344) = (((*l_853) = (((l_943 | (((*l_853) , ((p_32.f1 >= l_824.f2) & p_32.f0)) < (-2L))) < (l_943 != (safe_mul_func_uint8_t_u_u(((*g_611) != (safe_add_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(l_824.f3.f6, (*l_853))) != g_246.f3), p_32.f2))), (-1L))))) , l_943)) , p_32.f6)), 0x2EL));
            ++l_953;
            if (l_956)
                continue;
        }
    }
    else
    {
        uint8_t l_970[10][1] = {{0UL},{0UL},{0UL},{248UL},{0UL},{0UL},{0UL},{0UL},{248UL},{0UL}};
        int32_t l_998 = (-1L);
        int32_t l_999 = 0x8431C625L;
        int32_t l_1000 = 0x606A1957L;
        int32_t l_1001 = 0xA2B8882BL;
        int32_t *l_1011 = (void*)0;
        int32_t *l_1012[7] = {&l_998,&l_998,&l_998,&l_998,&l_998,&l_998,&l_998};
        union U2 l_1016 = {-1L};
        int32_t l_1126[2][2] = {{(-9L),(-9L)},{(-9L),(-9L)}};
        uint8_t l_1191 = 9UL;
        uint32_t *l_1199 = &g_39;
        uint32_t **l_1198[8][9][3] = {{{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,(void*)0,&l_1199},{(void*)0,&l_1199,&l_1199},{&l_1199,&l_1199,(void*)0},{(void*)0,(void*)0,&l_1199},{&l_1199,&l_1199,&l_1199},{(void*)0,&l_1199,&l_1199}},{{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,(void*)0},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,(void*)0,(void*)0},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,(void*)0,&l_1199}},{{&l_1199,&l_1199,(void*)0},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,(void*)0},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199}},{{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,(void*)0,&l_1199},{(void*)0,&l_1199,&l_1199},{&l_1199,&l_1199,(void*)0},{(void*)0,(void*)0,&l_1199},{&l_1199,&l_1199,&l_1199},{(void*)0,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199}},{{&l_1199,&l_1199,(void*)0},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,(void*)0,(void*)0},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,(void*)0,&l_1199},{&l_1199,&l_1199,(void*)0}},{{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,(void*)0},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,(void*)0},{&l_1199,&l_1199,&l_1199}},{{(void*)0,&l_1199,(void*)0},{(void*)0,&l_1199,(void*)0},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,(void*)0},{&l_1199,&l_1199,&l_1199},{&l_1199,(void*)0,&l_1199},{(void*)0,&l_1199,&l_1199},{(void*)0,&l_1199,(void*)0}},{{&l_1199,&l_1199,&l_1199},{&l_1199,(void*)0,(void*)0},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,(void*)0},{&l_1199,&l_1199,&l_1199},{(void*)0,&l_1199,(void*)0},{&l_1199,&l_1199,&l_1199}}};
        uint32_t l_1206 = 0x7EDE6B18L;
        uint16_t *l_1216[7][9] = {{&g_934,&g_934,&g_118,&g_934,&g_934,&g_118,&g_934,&g_934,&g_118},{&g_934,&g_934,&g_882,&g_934,&g_934,&g_882,&g_934,&g_934,&g_882},{&g_934,&g_934,&g_118,&g_934,&g_934,&g_118,&g_934,&g_934,&g_118},{&g_934,&g_934,&g_882,&g_934,&g_934,&g_882,&g_934,&g_934,&g_882},{&g_934,&g_934,&g_118,&g_934,&g_934,&g_118,&g_934,&g_934,&g_118},{&g_934,&g_934,&g_882,&g_934,&g_934,&g_882,&g_934,&g_934,&g_882},{&g_934,&g_934,&g_118,&g_934,&g_934,&g_118,&g_934,&g_934,&g_118}};
        uint8_t l_1299 = 0xADL;
        int16_t **l_1327 = (void*)0;
        int8_t l_1333 = 8L;
        uint16_t **l_1447 = (void*)0;
        uint16_t ***l_1446 = &l_1447;
        union U2 *l_1449 = &l_1016;
        int8_t l_1455 = 0L;
        int i, j, k;
    }
    (*l_1335) = (&g_344 != &g_344);
    (*l_1335) |= ((void*)0 == &l_1081);
    (*g_84) = ((((*l_1462) ^= 0xF7540646C684FCE8LL) != (g_1458 = ((((p_32.f6 = ((*g_1061) != (l_1463 = (*g_1061)))) | (safe_div_func_int16_t_s_s(0xF7E4L, p_32.f0))) , ((*g_611) = ((*l_1335) < ((safe_add_func_uint64_t_u_u((*l_1335), ((void*)0 == &g_758[0]))) > p_31)))) , 1L))) , (void*)0);
    return p_31;
}







static struct S0 func_34(uint8_t p_35)
{
    int64_t l_394 = 0xAE85249B6448E566LL;
    int16_t l_399[7][2][5] = {{{(-1L),(-1L),0x7681L,(-1L),(-1L)},{0x65F6L,(-9L),0x65F6L,0x65F6L,(-9L)}},{{(-1L),0x9241L,0x9241L,(-1L),0x9241L},{(-9L),(-9L),0xAA53L,(-9L),(-9L)}},{{0x9241L,(-1L),0x9241L,0x9241L,(-1L)},{(-9L),0x65F6L,0x65F6L,(-9L),0x65F6L}},{{(-1L),(-1L),0x7681L,(-1L),(-1L)},{0x65F6L,(-9L),0x65F6L,0x65F6L,(-9L)}},{{(-1L),0x9241L,0x9241L,(-1L),0x9241L},{(-9L),(-9L),0xAA53L,(-9L),(-9L)}},{{0x9241L,(-1L),0x9241L,0x9241L,(-1L)},{(-9L),0x65F6L,0x65F6L,(-9L),0x65F6L}},{{(-1L),(-1L),0x7681L,(-1L),(-1L)},{0x65F6L,(-9L),0x65F6L,0x65F6L,0x65F6L}}};
    int32_t l_402[6][7][5] = {{{0x5BF5BF56L,0xFD058902L,(-7L),0x2C986EB8L,7L},{0x1E60B38DL,0x9D328F16L,0xD9664FAAL,0x342C0E8FL,0x3933C462L},{0x2C986EB8L,(-7L),0xFD058902L,0x5BF5BF56L,0xFC4DE4B1L},{0L,0x77A4FC91L,0x7B91C395L,0x33A5D2ADL,9L},{0x3B144C40L,1L,1L,0x5BF5BF56L,(-1L)},{0L,0xAF2C1D53L,(-1L),0x342C0E8FL,(-1L)},{0x32200663L,0x32200663L,0xCD99B518L,0x2C986EB8L,1L}},{{0L,0x33A5D2ADL,7L,(-1L),0x1E60B38DL},{(-7L),(-3L),0L,0x3B144C40L,0x1D0D9984L},{0x3933C462L,0x33A5D2ADL,0xCDBB26A6L,(-8L),0x7B91C395L},{0x2561FEC4L,0x32200663L,0x3B144C40L,0x32200663L,0x2561FEC4L},{1L,0xAF2C1D53L,(-1L),4L,0L},{7L,1L,0x5BF5BF56L,(-7L),0x3B144C40L},{(-1L),0x77A4FC91L,0x88F025ABL,0xAF2C1D53L,0L}},{{0x1D0D9984L,(-7L),7L,0x2561FEC4L,0x2561FEC4L},{0L,0x9D328F16L,0L,2L,0x7B91C395L},{0xA0C148EEL,0xFD058902L,1L,7L,0x1D0D9984L},{0xD9664FAAL,0xF81382A7L,0x22BCA56FL,4L,0x1E60B38DL},{0L,1L,1L,0x1D0D9984L,1L},{6L,0xE383FABBL,0L,0x460C7B6CL,(-1L)},{0L,0xCD99B518L,7L,0xA0C148EEL,(-1L)}},{{8L,0xA64897BAL,0x88F025ABL,0x9D328F16L,9L},{1L,0L,0x5BF5BF56L,0L,0xFC4DE4B1L},{8L,0xED359932L,(-1L),0x44B042B1L,0x3933C462L},{0L,0x3B144C40L,0x3B144C40L,0L,7L},{6L,4L,0xCDBB26A6L,0x77A4FC91L,9L},{0L,0x5BF5BF56L,0L,1L,0x51F16369L},{0xD9664FAAL,0x51A28089L,7L,0x77A4FC91L,(-10L)}},{{0xA0C148EEL,7L,0xCD99B518L,0L,0xCD99B518L},{0L,0x460C7B6CL,(-1L),0x44B042B1L,0x88F025ABL},{0x1D0D9984L,1L,1L,0L,0L},{(-1L),0L,0x7B91C395L,0x9D328F16L,0L},{7L,1L,0xFD058902L,0xA0C148EEL,0L},{1L,0x460C7B6CL,0xD9664FAAL,0x460C7B6CL,1L},{0x2561FEC4L,7L,(-7L),0x1D0D9984L,0x32200663L}},{{0x3933C462L,0x51A28089L,8L,4L,0xD9664FAAL},{(-7L),0x5BF5BF56L,1L,7L,0x32200663L},{0L,4L,0x3933C462L,2L,0x742DC938L},{(-1L),1L,(-1L),1L,0xCD99B518L},{7L,0xF81382A7L,0xCDBB26A6L,0x9D328F16L,(-1L)},{1L,0xCD99B518L,0L,0x2561FEC4L,0x77997638L},{9L,0x77A4FC91L,0xCDBB26A6L,4L,6L}}};
    int64_t l_410[5];
    uint64_t **l_451 = (void*)0;
    uint32_t l_514[1];
    uint64_t l_516 = 0xC94276EAC0C169ABLL;
    int32_t l_582 = 0xB489AFE9L;
    int8_t **l_636 = &g_374;
    int32_t * const *l_641 = &g_389;
    struct S0 *l_688[8][8] = {{&g_246,&g_243,&g_243,&g_246,&g_243,&g_243,&g_246,&g_243},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_243,&g_246,&g_243,&g_243,&g_246,&g_243,&g_243,&g_246},{&g_246,&g_243,&g_243,&g_246,&g_243,&g_243,&g_246,&g_243},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246},{&g_243,&g_246,&g_243,&g_243,&g_246,&g_243,&g_243,&g_246},{&g_246,&g_243,&g_243,&g_246,&g_243,&g_243,&g_246,&g_243},{&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246,&g_246}};
    struct S0 *l_693 = &g_246;
    const struct S1 l_702 = {0x24EBEF59L,-5L,-1L,{-2375,-13,3,-84,250,140,0x82L}};
    int16_t ***l_708[1][3][1];
    int16_t ****l_707[9] = {&l_708[0][0][0],&l_708[0][0][0],&l_708[0][0][0],&l_708[0][0][0],&l_708[0][0][0],&l_708[0][0][0],&l_708[0][0][0],&l_708[0][0][0],&l_708[0][0][0]};
    int16_t ***l_709 = &g_232[4][3];
    int16_t ***l_710 = &g_232[8][0];
    int64_t *l_712 = &l_410[1];
    uint32_t *l_714[5] = {&l_514[0],&l_514[0],&l_514[0],&l_514[0],&l_514[0]};
    int16_t * const ***l_727 = (void*)0;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_410[i] = 0x24279522852FF65BLL;
    for (i = 0; i < 1; i++)
        l_514[i] = 1UL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_708[i][j][k] = (void*)0;
        }
    }
lbl_652:
    (*g_84) = (*g_388);
    if ((l_402[5][1][0] = ((safe_lshift_func_int8_t_s_s(l_394, (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((void*)0 != &g_373) ^ p_35), l_399[6][1][3])), (l_399[6][1][3] >= (p_35 && (safe_mod_func_int16_t_s_s(l_394, 0xF062L)))))))) & p_35)))
    {
        int32_t l_403 = 1L;
        int32_t l_446 = (-1L);
        int32_t l_447 = 0L;
        uint32_t l_448[2][9][3] = {{{1UL,0x2DCAAEBCL,4294967295UL},{0xBEF0643BL,4294967290UL,0x339E2D13L},{6UL,6UL,0x2DCAAEBCL},{6UL,1UL,1UL},{0xBEF0643BL,4294967287UL,0xC3CAAAD1L},{1UL,4294967295UL,0xBEF0643BL},{4294967295UL,0xBEF0643BL,0xC3CAAAD1L},{4294967295UL,0UL,1UL},{0x2DCAAEBCL,7UL,0x2DCAAEBCL}},{{0x0967919BL,7UL,0x339E2D13L},{0x339E2D13L,0UL,4294967295UL},{7UL,0xBEF0643BL,6UL},{4294967290UL,4294967295UL,0xC77DC720L},{7UL,4294967287UL,4294967290UL},{0x339E2D13L,1UL,1UL},{0x0967919BL,6UL,1UL},{0x2DCAAEBCL,4294967290UL,4294967290UL},{4294967295UL,0x2DCAAEBCL,0xC77DC720L}}};
        uint64_t *l_480 = &g_114[2][0][0];
        uint64_t **l_479[3][5][6] = {{{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480}},{{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480}},{{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480}}};
        int32_t **l_578[10][5] = {{&g_389,&g_389,&g_85,&g_389,&g_85},{&g_85,&g_85,&g_389,&g_389,&g_389},{&g_389,&g_389,&g_85,&g_389,&g_85},{&g_85,&g_85,&g_389,&g_389,&g_389},{&g_389,&g_389,&g_85,&g_389,&g_85},{&g_85,&g_85,&g_389,&g_389,&g_389},{&g_389,&g_389,&g_85,&g_389,&g_85},{&g_85,&g_85,&g_389,&g_389,&g_389},{&g_389,&g_389,&g_85,&g_389,&g_85},{&g_85,&g_85,&g_389,&g_389,&g_389}};
        uint8_t **l_580 = &g_344;
        uint8_t ***l_579[10][4];
        union U2 l_607 = {-1L};
        uint8_t l_646 = 0x75L;
        struct S0 **l_689 = &l_688[1][2];
        struct S0 *l_691 = &g_243;
        struct S0 **l_690[1][5][7] = {{{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691,&l_691}}};
        uint32_t *l_704[8][10] = {{&l_514[0],&l_448[0][4][1],(void*)0,&g_39,(void*)0,&l_448[0][4][1],&l_514[0],&g_703[1],&g_703[6],&g_703[1]},{&l_514[0],&l_448[0][4][1],(void*)0,&g_39,(void*)0,&l_448[0][4][1],&l_514[0],&g_703[1],&g_703[6],&g_703[1]},{&l_514[0],&l_448[0][4][1],(void*)0,&g_39,(void*)0,&l_448[0][4][1],&l_514[0],&g_703[1],&g_703[6],&g_703[1]},{&l_514[0],&l_448[0][4][1],(void*)0,&g_39,(void*)0,&l_448[0][4][1],&l_514[0],&g_703[1],&g_703[6],&g_703[1]},{&l_514[0],&l_448[0][4][1],(void*)0,&g_39,(void*)0,&l_448[0][4][1],&l_514[0],&g_703[1],&g_703[6],&g_703[1]},{&l_514[0],&l_448[0][4][1],(void*)0,&g_39,&l_514[0],&g_703[1],(void*)0,&l_448[0][8][1],(void*)0,&l_448[0][8][1]},{(void*)0,&g_703[1],&l_514[0],&g_703[6],&l_514[0],&g_703[1],(void*)0,&l_448[0][8][1],(void*)0,&l_448[0][8][1]},{(void*)0,&g_703[1],&l_514[0],&g_703[6],&l_514[0],&g_703[1],(void*)0,&l_448[0][8][1],(void*)0,&l_448[0][8][1]}};
        struct S0 l_705 = {5707,-21,-6,35,40,267,6L};
        int i, j, k;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 4; j++)
                l_579[i][j] = &l_580;
        }
        if ((l_403 = p_35))
        {
            int32_t *l_411 = &g_167;
            uint8_t **l_424[5][6][3] = {{{&g_344,&g_344,(void*)0},{&g_344,&g_344,&g_344},{(void*)0,(void*)0,(void*)0},{&g_344,&g_344,(void*)0},{&g_344,(void*)0,&g_344},{&g_344,&g_344,&g_344}},{{(void*)0,&g_344,&g_344},{&g_344,&g_344,&g_344},{&g_344,(void*)0,&g_344},{(void*)0,&g_344,&g_344},{&g_344,(void*)0,&g_344},{&g_344,&g_344,&g_344}},{{&g_344,&g_344,&g_344},{(void*)0,&g_344,(void*)0},{&g_344,&g_344,(void*)0},{&g_344,&g_344,&g_344},{(void*)0,(void*)0,(void*)0},{&g_344,&g_344,(void*)0}},{{&g_344,(void*)0,&g_344},{&g_344,&g_344,&g_344},{(void*)0,&g_344,&g_344},{&g_344,&g_344,&g_344},{&g_344,(void*)0,&g_344},{(void*)0,&g_344,&g_344}},{{&g_344,(void*)0,&g_344},{&g_344,&g_344,&g_344},{&g_344,&g_344,&g_344},{(void*)0,&g_344,(void*)0},{&g_344,&g_344,(void*)0},{&g_344,&g_344,&g_344}}};
            uint8_t ***l_423 = &l_424[2][1][1];
            uint8_t **l_426[1][5][3] = {{{&g_344,&g_344,&g_344},{&g_344,&g_344,&g_344},{&g_344,&g_344,&g_344},{&g_344,&g_344,&g_344},{&g_344,&g_344,&g_344}}};
            uint8_t ***l_425 = &l_426[0][2][2];
            int32_t *l_427 = &g_167;
            int32_t *l_428 = &l_402[5][1][0];
            int32_t *l_429 = &l_402[5][1][0];
            int32_t *l_430 = &g_165;
            int32_t *l_431 = &l_403;
            int32_t *l_432 = &g_42;
            int32_t *l_433 = (void*)0;
            int32_t *l_434 = (void*)0;
            int32_t *l_435 = &l_403;
            int32_t *l_436 = &g_165;
            int32_t *l_437 = (void*)0;
            int32_t *l_438 = &l_402[4][2][2];
            int32_t *l_439 = (void*)0;
            int32_t *l_440 = (void*)0;
            int32_t *l_441 = &l_402[5][0][0];
            int32_t *l_442 = &g_167;
            int32_t *l_443 = &g_165;
            int32_t *l_444 = &l_402[2][1][1];
            int32_t *l_445[4][10] = {{&g_167,&l_402[2][3][2],&g_167,&g_42,&g_165,&g_165,&g_42,&g_167,&l_402[2][3][2],&g_167},{&g_167,&l_402[5][1][0],&l_402[2][3][2],&l_402[5][1][0],&l_402[2][3][2],&l_402[5][1][0],&g_167,&g_167,&l_402[5][1][0],&l_402[2][3][2]},{&l_402[5][1][0],&g_167,&g_167,&l_402[5][1][0],&l_402[2][3][2],&l_402[5][1][0],&l_402[2][3][2],&l_402[5][1][0],&g_167,&g_167},{&l_402[2][3][2],&g_167,&g_42,&g_165,&g_165,&g_42,&g_167,&l_402[2][3][2],&g_167,&g_42}};
            int i, j, k;
            (*l_411) = (g_39 ^ (((safe_div_func_uint32_t_u_u(1UL, ((((l_402[0][3][2] = p_35) || p_35) > ((((g_246.f4 , &g_233) == &g_233) & (((safe_div_func_uint16_t_u_u(0xE893L, (safe_rshift_func_uint16_t_u_s((((0L & 0x06EDF1CBL) != (-1L)) , 65532UL), 7)))) ^ p_35) >= l_403)) < p_35)) , l_410[2]))) >= g_39) && 247UL));
            (*l_425) = ((*l_423) = (((p_35 && (safe_lshift_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_403, g_418)), (((p_35 && g_246.f5) , (safe_mul_func_uint8_t_u_u(((*l_411) > p_35), (**g_373)))) != (safe_mod_func_int16_t_s_s((*g_233), p_35))))) > 0xA7L) <= g_246.f3), 1))) & (*g_233)) , &g_344));
            l_448[0][4][1]--;
        }
        else
        {
            uint64_t ***l_452 = &l_451;
            int32_t *l_463 = &l_402[0][6][1];
            int32_t *l_466 = &l_447;
            int64_t l_478 = 0x6D1ECF1B0A72F707LL;
            uint8_t ***l_482 = (void*)0;
            uint8_t ****l_481 = &l_482;
            int32_t *l_483 = &l_446;
            int16_t **l_494 = &g_233;
            uint64_t l_512 = 0x4B3796D65741BCCBLL;
            int32_t l_526[4][6] = {{(-10L),0x12DE5D62L,0x20A67042L,0x12DE5D62L,(-10L),0xF2ECA3DCL},{0x12DE5D62L,(-10L),0xF2ECA3DCL,0xF2ECA3DCL,(-10L),0x12DE5D62L},{0L,0x12DE5D62L,7L,(-10L),7L,0x12DE5D62L},{7L,(-10L),0x20A67042L,7L,7L,0x20A67042L}};
            uint16_t l_543 = 65535UL;
            int8_t *l_576 = &g_51.f0;
            int64_t l_647[3][9] = {{0xD3D7BCE973FD62DFLL,0xD3D7BCE973FD62DFLL,8L,0xD34E3210497F247BLL,(-4L),0xD34E3210497F247BLL,8L,0xD3D7BCE973FD62DFLL,0xD3D7BCE973FD62DFLL},{1L,0xB95FDA5666F7A1ECLL,0xD3D7BCE973FD62DFLL,0xD34E3210497F247BLL,0xD3D7BCE973FD62DFLL,0xB95FDA5666F7A1ECLL,1L,1L,0xB95FDA5666F7A1ECLL},{0xD34E3210497F247BLL,0xB95FDA5666F7A1ECLL,8L,0xB95FDA5666F7A1ECLL,0xD34E3210497F247BLL,0x7E188042BC57881BLL,0x7E188042BC57881BLL,0xD34E3210497F247BLL,0xB95FDA5666F7A1ECLL}};
            int32_t *l_649 = &g_42;
            uint16_t l_675 = 65535UL;
            int i, j;
            (*l_452) = l_451;
            if ((safe_mod_func_int8_t_s_s(((((((((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((*l_483) = ((l_448[0][5][2] || (safe_mul_func_uint16_t_u_u(((((*l_481) = ((((g_51 , l_463) == &l_447) | ((safe_mod_func_int16_t_s_s(((*l_463) = ((*g_233) = 0x4068L)), (((*l_466) = p_35) ^ ((safe_lshift_func_uint16_t_u_u(((((((safe_mul_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((((l_394 & (!((safe_rshift_func_int8_t_s_s((l_478 = (**g_373)), ((**g_373) < 0x6DL))) ^ l_394))) || 0UL) | 0UL), 0xB0597F19L)) == l_399[6][1][3]), l_448[0][4][1])) | p_35) && l_394) , l_479[1][3][1]) != &l_480) <= g_199[0][2].f3.f2), p_35)) , p_35)))) || p_35)) , (void*)0)) != (void*)0) , 3UL), g_246.f2))) , (*l_463))) != l_403) , 1L), 9UL)), 5)) || 0xDC21L), g_199[0][2].f3.f3)) != (*g_374)) , 0xFA8BE72EA1801931LL) < 18446744073709551614UL) , &g_232[9][6]) != (void*)0) != 18446744073709551610UL) | 0UL), p_35)))
            {
                uint8_t l_495 = 0x1AL;
                for (l_403 = 1; (l_403 <= 4); l_403 += 1)
                {
                    uint32_t l_490 = 2UL;
                    int16_t **l_493 = &g_233;
                    l_495 = ((safe_mul_func_int8_t_s_s((**g_373), (safe_mod_func_int64_t_s_s((safe_div_func_int16_t_s_s(((p_35 ^ (0x96373AA40518AA6FLL ^ (((*l_483) = l_490) , 5L))) > ((l_394 && (g_167 > (((p_35 , l_493) == l_494) <= p_35))) <= l_490)), p_35)), 0xCA05D6CAF3B4F3A1LL)))) >= g_159[1][4][5]);
                    for (g_39 = 0; (g_39 <= 2); g_39 += 1)
                    {
                        (*l_483) = p_35;
                        return g_246;
                    }
                    for (l_495 = 1; (l_495 <= 4); l_495 += 1)
                    {
                        if (p_35)
                            break;
                        (*l_463) ^= ((*l_483) = l_490);
                        (*l_466) = 0xA27FF7EFL;
                    }
                }
            }
            else
            {
                int64_t *l_502 = &l_478;
                int32_t l_513 = 0x416E46E8L;
                uint64_t *l_515 = &l_512;
                uint32_t l_541 = 18446744073709551615UL;
                const uint64_t l_542 = 0x736BA712528239FBLL;
                int32_t l_589 = 0xB50F9AFDL;
                uint64_t **l_612 = (void*)0;
                int32_t l_634[10] = {0x62AFB886L,8L,0x62AFB886L,8L,0x62AFB886L,8L,0x62AFB886L,8L,0x62AFB886L,8L};
                int32_t **l_642[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_642[i] = &l_483;
                (*l_466) &= (l_448[0][4][1] <= ((((l_515 = ((safe_div_func_uint16_t_u_u(0x1178L, (((p_35 != (((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((((*l_502) |= g_275[2][2][0]) >= (((((((((safe_lshift_func_int8_t_s_u((**g_373), (l_403 < ((g_505 = ((*l_480) = 6UL)) & ((((safe_mod_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(p_35, 0)) != ((g_51 , p_35) ^ 249UL)), (-2L))), l_512)) , 0x200FL) == (*g_233)) == (*g_344)))))) < l_402[5][1][0]) & l_513) != l_402[5][1][0]) ^ p_35) || 6UL) , g_165) < (*l_463)) != g_246.f3)), 0x0080L)), l_513)) , (**g_373)) <= 4UL)) , l_514[0]) & 0xCBA3CBB7319AEABELL))) , (void*)0)) != (void*)0) > l_516) >= (*l_483)));
                if ((safe_sub_func_uint32_t_u_u((p_35 > p_35), (((!((*l_466) ^= (l_513 = (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((l_526[0][4] , (0xD223L & (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((((((safe_rshift_func_uint16_t_u_s(65535UL, (((safe_rshift_func_int8_t_s_s(0L, (safe_lshift_func_int16_t_s_s(0xAD30L, (*g_233))))) && ((0xE179L <= (*l_463)) || l_399[6][1][3])) < 1L))) , &l_483) == &l_466) , g_418) >= 0x02AA4E3212A5A835LL) < g_243.f5), 2)) & l_541), 65535UL)), g_199[0][2].f3.f3)), p_35)))) > l_542), 2L)), l_541)), l_543))))) >= 0x442D005B89243644LL) , 4294967293UL))))
                {
                    const int16_t l_558 = 0x01E2L;
                    uint32_t l_598 = 0x4A1B07B8L;
                    int32_t *l_604 = &g_275[2][1][0];
                    int32_t **l_603 = &l_604;
                    int32_t *l_606 = (void*)0;
                    int32_t **l_605 = &l_606;
                    for (g_338 = (-30); (g_338 < (-5)); g_338 = safe_add_func_uint8_t_u_u(g_338, 5))
                    {
                        uint64_t l_561 = 0x0A0BDABA20A043BCLL;
                        int8_t *l_577[4] = {&g_164,&g_164,&g_164,&g_164};
                        uint32_t *l_583[7];
                        int32_t l_584 = 0x51724A97L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_583[i] = &l_514[0];
                        l_584 ^= (safe_div_func_int8_t_s_s(((((*l_463) = ((safe_mul_func_uint32_t_u_u(l_448[0][3][0], (((((safe_add_func_int64_t_s_s((((safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((l_558 < (l_541 , (l_448[1][1][2] > ((((safe_mod_func_uint64_t_u_u(((((p_35 , l_561) & (((safe_mul_func_uint16_t_u_u((((((((*l_483) ^ (safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s(((0x60L | ((((((safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((((l_576 != l_577[3]) , p_35) , 0xC4L) != 0xBEL), p_35)), 0x0AE47A9CB780681BLL)) , (void*)0) != l_578[7][3]) & 0xD48294FBL) ^ p_35) > p_35)) , (**g_343)), (*g_374))) & l_399[1][1][2]), 9L)) > g_246.f0), p_35)), l_561))) < 8UL) && l_542) , &l_494) != (void*)0) | p_35), p_35)) || p_35) == l_561)) , l_579[4][3]) != (void*)0), 4L)) ^ p_35) >= (*l_483)) , p_35)))), 14)), 0xEC82D2EE42B8C058LL)), (*g_374))) , p_35) > g_581[0][4][0]), l_582)) < l_513) && 0x3C156BB3L) , p_35) <= 3UL))) | 0L)) == g_243.f1) || (*g_374)), l_558));
                    }
                    (*l_466) |= ((**g_373) , (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(0xCBC252F9A1867538LL, (l_589 > (safe_div_func_uint64_t_u_u((g_114[2][0][1] = (safe_sub_func_uint64_t_u_u(g_243.f5, (((safe_lshift_func_int16_t_s_u(l_402[5][1][0], 0)) >= (safe_mul_func_int16_t_s_s(((*g_233) = l_598), (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((p_35 >= (((*l_605) = ((*l_603) = &l_582)) != (l_607 , l_466))), 4)), l_514[0]))))) | 249UL)))), p_35))))) , 0xBFCAL), 0x07F1L)));
                }
                else
                {
                    uint32_t *l_622 = &l_514[0];
                    uint32_t **l_621[4];
                    int32_t *l_623 = &l_513;
                    int8_t **l_635 = &g_374;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_621[i] = &l_622;
                    (*g_388) = &l_402[5][1][0];
                    for (g_51.f0 = 4; (g_51.f0 >= 1); g_51.f0 -= 1)
                    {
                        (*l_466) = (safe_mod_func_int8_t_s_s((((l_612 = g_610) == (((g_39 = (0xA2L <= (safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((**g_343) ^ (**g_373)), 5)), p_35)) ^ ((*l_622) |= (((p_35 < (((p_35 < 18446744073709551615UL) > 0UL) || 0x06C5L)) , (void*)0) == l_621[3]))) <= p_35), g_246.f4)), l_582)))) == p_35) , (void*)0)) , p_35), (*g_344)));
                        l_623 = (*g_84);
                        if (p_35)
                            continue;
                    }
                    if ((safe_div_func_int16_t_s_s((0x0DL == ((0L | ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((p_35 , l_582), 5)), ((safe_rshift_func_uint16_t_u_u(g_42, 10)) || (g_199[2][0] , p_35)))), l_634[0])) == (l_635 != l_636))) <= (**g_373))), l_514[0])))
                    {
                        uint32_t l_648 = 4UL;
                        (*l_466) = ((((*l_622) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((l_641 != l_642[4]) , g_194), 3)), (((!(safe_add_func_uint16_t_u_u((((**g_610) <= ((*l_502) = (p_35 <= ((**l_641) = l_646)))) >= (l_647[1][5] && ((*g_344) <= (1UL & (**g_610))))), l_648))) & 0xA8L) < p_35)))) && g_114[2][0][1]) , (**g_388));
                        return g_199[0][2].f3;
                    }
                    else
                    {
                        uint32_t *l_651 = (void*)0;
                        uint32_t **l_650 = &l_651;
                        int32_t l_663 = 8L;
                        (*g_388) = l_649;
                        (*g_389) &= (((*l_650) = &g_131[1][1]) == (void*)0);
                        if (g_418)
                            goto lbl_652;
                        (*l_649) = (p_35 || (safe_mod_func_uint64_t_u_u(((**g_610) &= (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((*l_641) == ((**l_641) , l_623)), 3)), (safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((((l_607 , l_663) > (g_76 , (!(p_35 || ((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((**g_373), (**g_343))), 3)) <= 0xE36F437564849010LL), (**l_641))) ^ p_35))))) && 0x8EB5L) , p_35), 0xBC21L)), 0x7416L))))), 0xCF21480C92CCFF5DLL)));
                    }
                    if (g_338)
                        goto lbl_652;
                }
                (*l_463) = (safe_div_func_uint8_t_u_u((p_35 || ((void*)0 != (*g_388))), ((safe_lshift_func_int8_t_s_u(p_35, 0)) || 255UL)));
            }
            for (g_246.f6 = 0; g_246.f6 < 10; g_246.f6 += 1)
            {
                for (l_446 = 0; l_446 < 5; l_446 += 1)
                {
                    l_578[g_246.f6][l_446] = &l_649;
                }
            }
            ++l_675;
        }
        g_42 = (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((l_607 , (l_402[5][1][0] = ((((safe_mod_func_uint32_t_u_u((g_39 ^= (safe_sub_func_uint64_t_u_u((g_199[0][2].f2 > ((safe_lshift_func_uint8_t_u_u(((g_692 = ((*l_689) = l_688[0][1])) != l_693), ((g_243.f0 = (safe_add_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((((*l_691) , p_35) ^ (0x4740529BFCBE6D0FLL > 0L)), ((safe_add_func_int8_t_s_s(((((l_702 , 0x87230BEB46838D92LL) ^ (*g_611)) == (**g_610)) | 18446744073709551613UL), g_703[6])) & 0xB2ACL))) == p_35), p_35))) , p_35))) == 0x74L)), 4UL))), 0x7A88BC5AL)) > (-4L)) == p_35) || 0L))), 4)), 0));
        return l_705;
    }
    else
    {
        (*g_84) = (void*)0;
    }
    if ((((((+255UL) > ((*l_712) ^= (p_35 >= ((l_710 = (l_709 = &g_232[6][4])) != (g_711 = &g_232[7][6]))))) , ((g_703[6] |= (safe_unary_minus_func_uint16_t_u(0UL))) <= (g_199[0][2].f3 , (&l_394 != (l_702 , &g_338))))) && 5UL) && 1L))
    {
        int32_t l_723 = 0x7C5B14A5L;
        uint8_t *l_734 = &g_391[6][8];
        int32_t l_735[5];
        int32_t *l_736[10];
        int i;
        for (i = 0; i < 5; i++)
            l_735[i] = 0x13C39E1FL;
        for (i = 0; i < 10; i++)
            l_736[i] = &l_402[5][1][0];
        g_246.f5 = (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((l_735[2] = ((((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_723, (safe_mod_func_int8_t_s_s(((**g_343) , (safe_unary_minus_func_int64_t_s(((g_51 , l_727) == ((safe_rshift_func_int16_t_s_u(l_702.f3.f1, 8)) , &l_710))))), (**g_373))))), (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((*l_734) &= 0xAEL), 4)) , ((((*g_611) & 0x8003DF082DD75F29LL) || 4L) && 0x20L)), p_35)))) & l_723) && 1UL) != p_35)) < l_723), l_723)), 6));
        g_246.f0 |= (&p_35 != &p_35);
    }
    else
    {
        (*g_84) = (void*)0;
        for (g_418 = 19; (g_418 >= (-7)); g_418 = safe_sub_func_uint16_t_u_u(g_418, 2))
        {
            uint16_t l_739 = 0x030FL;
            l_402[0][0][1] = l_739;
        }
    }
    return g_199[0][2].f3;
}







static uint64_t func_36(uint32_t p_37)
{
    uint32_t *l_38 = &g_39;
    int32_t l_59 = (-8L);
    const int32_t *l_133[1];
    const int32_t **l_132 = &l_133[0];
    uint32_t l_155 = 0x1D393908L;
    int32_t l_162 = 1L;
    const int32_t *** const l_180[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_287 = 0x54D9L;
    int i;
    for (i = 0; i < 1; i++)
        l_133[i] = &g_42;
    if ((g_3 == (((*l_38) = 0x49F0E3FDL) , 0x6AB65697B4E6B2E5LL)))
    {
        uint32_t l_40[10] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        int32_t *l_41 = &g_42;
        int8_t l_111 = 0xA2L;
        int32_t l_161 = 1L;
        int16_t *l_195[4];
        uint32_t l_231 = 4294967291UL;
        int i;
        for (i = 0; i < 4; i++)
            l_195[i] = &g_159[0][5][0];
        if (((*l_41) = l_40[5]))
        {
            uint32_t l_139 = 4294967295UL;
            int8_t *l_152 = (void*)0;
            int32_t **l_153[8] = {&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85};
            int64_t l_166 = (-5L);
            int i;
            if (p_37)
            {
                int32_t **l_56 = (void*)0;
                int32_t *l_58 = &g_42;
                int32_t **l_57 = &l_58;
                int32_t ***l_86 = &g_84;
                (*l_86) = func_43(((safe_rshift_func_int8_t_s_u(((g_51 , (safe_lshift_func_uint16_t_u_s(p_37, ((p_37 || ((((*l_38) = ((*l_41) < (p_37 , 0L))) , (-1L)) > (l_41 == ((*l_57) = ((safe_mul_func_uint8_t_u_u((*l_41), 0x2BL)) , (void*)0))))) <= p_37)))) & l_59), 1)) , &g_3), l_59, l_59, p_37, g_3);
            }
            else
            {
                uint64_t l_116 = 0xF2713C04A0AC9A06LL;
                int32_t l_125 = 0x6CA20384L;
                int8_t *l_149 = &g_51.f0;
                int32_t l_154[4][3] = {{(-10L),0x16F2BD89L,(-10L)},{(-10L),0x16F2BD89L,(-10L)},{(-10L),0x16F2BD89L,(-10L)},{(-10L),0x16F2BD89L,(-10L)}};
                const int16_t *l_196 = (void*)0;
                int i, j;
                for (g_51.f0 = 0; (g_51.f0 <= 9); g_51.f0 += 1)
                {
                    struct S1 l_115 = {0xA3312545L,0xD931L,-1L,{7003,4,13,34,3981,295,-2L}};
                    int i;
                    for (g_42 = 0; (g_42 <= 9); g_42 += 1)
                    {
                        uint64_t *l_112 = (void*)0;
                        uint64_t *l_113 = &g_114[2][0][1];
                        uint16_t *l_117 = &g_118;
                        uint64_t *l_119 = &l_116;
                        uint64_t *l_120 = (void*)0;
                        uint8_t *l_122 = (void*)0;
                        uint8_t *l_123[2];
                        int32_t l_124 = (-1L);
                        int16_t *l_130[4][5][8] = {{{(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1},{(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1,&l_115.f1,&l_115.f1},{(void*)0,&l_115.f1,&l_115.f1,&l_115.f1,(void*)0,&l_115.f1,&l_115.f1,&l_115.f1},{(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1},{(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1,&l_115.f1,&l_115.f1}},{{(void*)0,&l_115.f1,&l_115.f1,&l_115.f1,(void*)0,&l_115.f1,&l_115.f1,&l_115.f1},{(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1},{(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1,&l_115.f1,&l_115.f1},{(void*)0,&l_115.f1,&l_115.f1,&l_115.f1,(void*)0,&l_115.f1,&l_115.f1,&l_115.f1},{(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1}},{{(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1,&l_115.f1,&l_115.f1},{(void*)0,&l_115.f1,&l_115.f1,&l_115.f1,(void*)0,&l_115.f1,&l_115.f1,&l_115.f1},{(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1},{(void*)0,&l_115.f1,&l_115.f1,&l_115.f1,&l_115.f1,&l_115.f1,(void*)0,&l_115.f1},{(void*)0,&l_115.f1,&l_115.f1,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1}},{{&l_115.f1,&l_115.f1,&l_115.f1,&l_115.f1,(void*)0,&l_115.f1,&l_115.f1,&l_115.f1},{(void*)0,&l_115.f1,&l_115.f1,&l_115.f1,&l_115.f1,&l_115.f1,(void*)0,&l_115.f1},{(void*)0,&l_115.f1,&l_115.f1,&l_115.f1,(void*)0,&l_115.f1,(void*)0,&l_115.f1},{&l_115.f1,&l_115.f1,&l_115.f1,&l_115.f1,(void*)0,&l_115.f1,&l_115.f1,&l_115.f1},{(void*)0,&l_115.f1,&l_115.f1,&l_115.f1,&l_115.f1,&l_115.f1,(void*)0,&l_115.f1}}};
                        const int32_t ***l_134 = (void*)0;
                        const int32_t ***l_135 = (void*)0;
                        const int32_t ***l_136 = &l_132;
                        int32_t *l_140 = &l_125;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_123[i] = &g_76;
                        l_125 |= (+(safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((l_124 = (safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((g_121 = ((*l_119) = (255UL >= (0xB465L != (~(((safe_div_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_u(((*l_117) ^= (safe_add_func_int64_t_s_s(((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((safe_add_func_int64_t_s_s(0xCC6DD0D521574284LL, (l_40[g_42] , ((*l_113) = l_111)))) , (*g_84)) == (l_115 , ((*l_41) , (*g_84)))), l_116)), g_42)) == (*g_85)), l_40[g_42]))), 9)) >= l_115.f1) < (*l_41)), l_116)) | p_37) != 1UL)))))), 1UL)), 0x1C1EL))), p_37)), 0UL)));
                        (*l_140) &= (l_40[g_42] & ((safe_sub_func_int64_t_s_s((&l_124 != &l_125), (0UL == ((*l_119) = ((safe_mul_func_int16_t_s_s((g_131[1][1] = (-6L)), (((*l_136) = l_132) != (void*)0))) != 0x65F0A685D562BBFFLL))))) & (((safe_add_func_uint8_t_u_u((g_39 <= 0L), 1L)) | 0L) & l_139)));
                    }
                    if (l_40[g_51.f0])
                        break;
                }
                if ((safe_rshift_func_int8_t_s_u(l_125, ((((safe_div_func_int32_t_s_s((((p_37 || ((((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((*l_149) = g_65), (g_65 > ((((g_39 | 1UL) != 0UL) < ((*l_41) = 0UL)) < ((void*)0 != l_152))))), g_114[2][0][1])) && (-1L)) & l_125) && 7L)) <= 65531UL) != g_114[3][0][0]), g_121)) <= g_114[2][0][1]) , l_153[7]) != &l_41))))
                {
                    uint16_t l_168 = 0x9F17L;
                    int32_t l_208 = 0x171D70ADL;
                    const int32_t *l_209 = &l_154[1][1];
lbl_158:
                    l_155++;
                    for (g_121 = 0; (g_121 <= 2); g_121 += 1)
                    {
                        int64_t l_160 = 0x5EDC9C37AF40EE7FLL;
                        int32_t l_163 = 0L;
                        (*l_132) = (void*)0;
                        if (g_39)
                            goto lbl_158;
                        l_168++;
                        return g_3;
                    }
                    for (l_166 = 0; (l_166 <= 0); l_166 += 1)
                    {
                        uint64_t *l_183 = &l_116;
                        const struct S1 l_184 = {-1L,0x96E9L,-6L,{4700,14,2,-387,2785,-244,0x9FL}};
                        uint8_t *l_185 = &g_76;
                        uint8_t **l_186 = &l_185;
                        int32_t *l_191[5];
                        uint32_t *l_207 = &l_40[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_191[i] = &g_121;
                        (*l_41) |= ((~(((safe_mod_func_uint64_t_u_u(l_154[1][1], (safe_add_func_uint32_t_u_u(((*l_38) = (safe_rshift_func_uint16_t_u_u(65535UL, 7))), (0x0DCDEADA25E56E32LL ^ (safe_add_func_int8_t_s_s((l_180[3] == &g_84), (safe_unary_minus_func_int16_t_s((p_37 && (g_114[7][1][0] <= (((!((*l_183) ^= 3UL)) , l_184) , p_37)))))))))))) , l_133[l_166]) == l_133[l_166])) ^ 0xDD20L);
                        if ((**g_84))
                            break;
                        g_194 = (((&g_65 != ((*l_186) = l_185)) == ((*l_38) &= ((p_37 , ((safe_div_func_uint8_t_u_u(0x12L, (safe_rshift_func_int8_t_s_s(((&l_125 != ((*g_84) = (*g_84))) != (((*l_41) = g_121) , ((safe_div_func_int8_t_s_s(0L, ((-1L) | l_154[1][1]))) || g_114[4][0][1]))), 7)))) != l_168)) || 0x1E447D40A0E336E5LL))) , (-1L));
                        l_208 &= (((((-1L) <= (l_195[1] == l_196)) , ((*l_41) |= 0xD6479EB2L)) | ((((safe_add_func_int64_t_s_s(((g_199[0][2] , (safe_rshift_func_uint16_t_u_u((l_168 && 0x15C57FDAL), (((safe_unary_minus_func_int8_t_s((0xA022L == (safe_lshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((((*l_207) = p_37) , g_118), g_159[3][4][1])), p_37))))) == g_121) || 0x47L)))) & p_37), g_39)) , g_199[0][2].f3.f1) != 4294967295UL) & l_161)) > p_37);
                    }
                    l_209 = (*l_132);
                }
                else
                {
                    return (**l_132);
                }
                g_167 = (((safe_rshift_func_uint8_t_u_s((((((g_159[3][4][1] = (safe_sub_func_int64_t_s_s(0L, ((((*l_41) = (*l_41)) > (!g_76)) <= (safe_sub_func_uint64_t_u_u((((*l_149) |= 0L) , (safe_lshift_func_uint8_t_u_u(g_3, (safe_mod_func_int8_t_s_s(((((+(safe_lshift_func_int8_t_s_s(p_37, 2))) != (l_59 = ((!p_37) != (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((p_37 , (safe_mul_func_uint16_t_u_u((l_125 != 0xA7L), p_37))), (**g_84))), p_37))))) , 0x760C6957L) , g_199[0][2].f3.f0), g_159[3][4][1]))))), 0x6CEFED949C42C81BLL)))))) | l_116) ^ g_118) , g_199[0][2].f2) | g_199[0][2].f3.f1), l_231)) , l_154[0][1]) , p_37);
            }
        }
        else
        {
            (*l_41) |= 0x29BA1BEAL;
            (*g_84) = &l_161;
        }
    }
    else
    {
        int16_t ***l_234[1][6] = {{&g_232[5][1],&g_232[5][1],&g_232[7][6],&g_232[5][1],&g_232[5][1],&g_232[7][6]}};
        struct S0 *l_245 = &g_246;
        int32_t *l_247 = &g_3;
        int32_t l_286 = (-1L);
        int8_t *l_294[7][2][10] = {{{&g_243.f6,&g_246.f6,&g_243.f6,&g_246.f6,&g_246.f6,&g_243.f6,&g_246.f6,&g_243.f6,(void*)0,(void*)0},{(void*)0,&g_164,&g_246.f6,&g_243.f6,&g_243.f6,&g_243.f6,&g_164,(void*)0,&g_164,&g_246.f6}},{{&g_51.f0,&g_243.f6,&g_246.f6,&g_243.f6,&g_51.f0,(void*)0,&g_51.f0,&g_243.f6,&g_246.f6,&g_243.f6},{&g_164,&g_243.f6,&g_243.f6,(void*)0,&g_51.f0,&g_246.f6,&g_164,&g_243.f6,&g_164,&g_51.f0}},{{&g_246.f6,&g_243.f6,&g_246.f6,&g_51.f0,&g_164,&g_246.f6,&g_164,&g_164,&g_246.f6,&g_164},{&g_164,&g_243.f6,&g_243.f6,&g_164,&g_243.f6,(void*)0,&g_164,&g_164,&g_164,&g_246.f6}},{{&g_51.f0,&g_246.f6,&g_243.f6,&g_246.f6,(void*)0,&g_243.f6,&g_243.f6,&g_164,&g_164,&g_164},{(void*)0,&g_243.f6,&g_243.f6,&g_164,&g_243.f6,&g_243.f6,(void*)0,&g_51.f0,&g_246.f6,&g_164}},{{&g_243.f6,&g_246.f6,&g_243.f6,&g_51.f0,&g_164,&g_164,&g_164,(void*)0,&g_164,&g_51.f0},{&g_243.f6,&g_246.f6,&g_164,(void*)0,&g_243.f6,&g_243.f6,(void*)0,&g_164,&g_246.f6,&g_243.f6}},{{&g_246.f6,&g_243.f6,&g_246.f6,&g_243.f6,(void*)0,(void*)0,&g_243.f6,&g_51.f0,&g_164,&g_164},{&g_246.f6,&g_246.f6,&g_51.f0,&g_243.f6,(void*)0,&g_246.f6,&g_164,&g_246.f6,(void*)0,&g_243.f6}},{{(void*)0,&g_243.f6,(void*)0,&g_246.f6,&g_243.f6,&g_243.f6,&g_164,&g_51.f0,&g_243.f6,(void*)0},{(void*)0,&g_243.f6,&g_51.f0,&g_246.f6,&g_164,&g_51.f0,&g_243.f6,&g_164,&g_164,&g_243.f6}}};
        int i, j, k;
        g_232[7][6] = g_232[7][6];
        if ((safe_lshift_func_int16_t_s_u(((**g_84) >= (**g_84)), 8)))
        {
            uint64_t l_255 = 18446744073709551609UL;
            int8_t *l_276[8][8][4] = {{{(void*)0,(void*)0,(void*)0,&g_246.f6},{&g_246.f6,(void*)0,&g_246.f6,&g_246.f6},{(void*)0,&g_243.f6,&g_164,&g_246.f6},{&g_246.f6,&g_51.f0,&g_51.f0,&g_246.f6},{&g_51.f0,&g_246.f6,(void*)0,(void*)0},{(void*)0,&g_246.f6,(void*)0,&g_164},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_51.f0,&g_243.f6,(void*)0}},{{&g_243.f6,&g_246.f6,&g_246.f6,&g_51.f0},{&g_51.f0,&g_51.f0,&g_246.f6,(void*)0},{&g_243.f6,&g_164,&g_243.f6,&g_246.f6},{(void*)0,&g_246.f6,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_246.f6},{(void*)0,&g_164,(void*)0,&g_246.f6},{&g_51.f0,&g_51.f0,&g_51.f0,&g_51.f0},{&g_246.f6,&g_246.f6,&g_164,&g_243.f6}},{{(void*)0,&g_51.f0,&g_246.f6,&g_164},{&g_246.f6,(void*)0,(void*)0,&g_164},{(void*)0,&g_51.f0,&g_246.f6,&g_243.f6},{&g_243.f6,&g_246.f6,(void*)0,&g_51.f0},{&g_51.f0,&g_51.f0,&g_246.f6,&g_246.f6},{&g_164,&g_164,&g_246.f6,&g_246.f6},{(void*)0,(void*)0,&g_51.f0,(void*)0},{&g_246.f6,&g_246.f6,(void*)0,&g_246.f6}},{{&g_246.f6,&g_164,&g_164,(void*)0},{&g_51.f0,&g_51.f0,&g_164,&g_51.f0},{&g_51.f0,&g_246.f6,&g_164,(void*)0},{&g_246.f6,&g_51.f0,(void*)0,(void*)0},{&g_246.f6,(void*)0,&g_51.f0,&g_164},{(void*)0,&g_246.f6,&g_246.f6,(void*)0},{&g_164,&g_246.f6,&g_246.f6,&g_246.f6},{&g_51.f0,&g_51.f0,(void*)0,&g_246.f6}},{{&g_243.f6,&g_243.f6,&g_246.f6,&g_246.f6},{(void*)0,(void*)0,(void*)0,&g_246.f6},{&g_246.f6,(void*)0,&g_246.f6,&g_246.f6},{(void*)0,&g_243.f6,&g_164,&g_246.f6},{&g_246.f6,&g_51.f0,&g_51.f0,&g_246.f6},{&g_51.f0,&g_246.f6,(void*)0,(void*)0},{(void*)0,&g_246.f6,(void*)0,&g_164},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_51.f0,&g_243.f6,(void*)0},{&g_243.f6,&g_246.f6,&g_246.f6,&g_51.f0},{&g_51.f0,&g_51.f0,&g_246.f6,(void*)0},{&g_243.f6,&g_164,&g_243.f6,&g_246.f6},{(void*)0,&g_246.f6,(void*)0,(void*)0},{&g_51.f0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_246.f6,&g_246.f6},{&g_51.f0,&g_164,&g_164,&g_51.f0}},{{&g_164,&g_246.f6,&g_51.f0,&g_51.f0},{(void*)0,&g_51.f0,&g_243.f6,&g_246.f6},{&g_246.f6,(void*)0,&g_51.f0,&g_246.f6},{(void*)0,&g_51.f0,&g_246.f6,&g_51.f0},{(void*)0,&g_246.f6,&g_51.f0,&g_51.f0},{(void*)0,&g_164,&g_164,&g_246.f6},{&g_51.f0,(void*)0,&g_246.f6,(void*)0},{&g_164,(void*)0,&g_246.f6,(void*)0}},{{&g_246.f6,&g_246.f6,(void*)0,&g_246.f6},{&g_246.f6,(void*)0,&g_51.f0,&g_51.f0},{&g_51.f0,(void*)0,&g_164,&g_51.f0},{&g_51.f0,(void*)0,&g_51.f0,&g_243.f6},{&g_246.f6,&g_51.f0,(void*)0,&g_243.f6},{&g_246.f6,&g_243.f6,&g_246.f6,&g_246.f6},{&g_164,&g_164,&g_246.f6,&g_243.f6},{&g_51.f0,&g_246.f6,&g_164,&g_164}}};
            int i, j, k;
lbl_258:
            for (g_164 = 22; (g_164 == 25); ++g_164)
            {
                int32_t *l_241 = &g_3;
                (*g_84) = (void*)0;
                for (g_76 = 0; (g_76 < 56); g_76 = safe_add_func_int16_t_s_s(g_76, 5))
                {
                    (*l_132) = l_241;
                }
            }
            for (g_76 = 0; (g_76 <= 0); g_76 += 1)
            {
                struct S0 *l_242 = &g_243;
                struct S0 **l_244[4];
                int32_t l_251 = 0L;
                int i;
                for (i = 0; i < 4; i++)
                    l_244[i] = &l_242;
                l_245 = l_242;
                for (g_121 = 0; (g_121 >= 0); g_121 -= 1)
                {
                    int32_t *l_248 = &g_165;
                    int32_t *l_249 = &l_59;
                    int32_t *l_250 = &l_162;
                    int32_t *l_252 = &g_165;
                    int32_t *l_253 = &g_167;
                    int32_t *l_254 = &g_42;
                    int32_t l_263 = 0x9E0A391BL;
                    int8_t *l_278 = (void*)0;
                    int i;
                    l_133[g_76] = l_247;
                    l_255++;
                    if (l_255)
                        goto lbl_258;
                    l_162 = (((safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((p_37 < l_263), ((safe_lshift_func_uint16_t_u_s(g_51.f0, (((1UL >= (65533UL < 0xD050L)) & p_37) > ((safe_mod_func_int8_t_s_s(g_159[3][4][1], (safe_rshift_func_uint8_t_u_s(g_121, l_251)))) || g_243.f1)))) , l_251))) ^ p_37), p_37)) != g_194) & 0x9B477CBAL);
                    for (l_263 = 0; (l_263 <= 1); l_263 += 1)
                    {
                        union U2 l_277 = {0x9BL};
                        int i, j, k;
                        (*l_249) = (safe_unary_minus_func_uint32_t_u((((+(safe_div_func_uint64_t_u_u(((+((65529UL || 0xD9CCL) <= g_114[(g_76 + 4)][g_76][l_263])) || g_275[2][2][0]), (p_37 | (l_276[1][2][3] != (l_277 , l_278)))))) || g_131[1][1]) , 0x3074D369L)));
                        (*g_84) = (void*)0;
                    }
                }
            }
        }
        else
        {
            int32_t *l_279 = &g_167;
            int32_t *l_280 = &g_167;
            int16_t l_281 = 1L;
            int32_t *l_282 = &l_162;
            int32_t *l_283 = &g_42;
            int32_t *l_284 = &g_165;
            int32_t *l_285[4] = {&l_59,&l_59,&l_59,&l_59};
            int i;
            l_287--;
            (*l_132) = &l_286;
            for (l_155 = 0; (l_155 > 53); l_155++)
            {
                const uint16_t l_309 = 65532UL;
                int8_t **l_330 = &l_294[3][0][9];
                int64_t *l_337[6][3] = {{&g_338,&g_338,&g_338},{&g_338,&g_338,&g_338},{&g_338,&g_338,&g_338},{&g_338,&g_338,&g_338},{&g_338,&g_338,&g_338},{&g_338,&g_338,&g_338}};
                int32_t **l_358[9];
                int32_t ***l_359 = &l_358[2];
                union U2 l_360 = {0x78L};
                uint32_t *l_372 = (void*)0;
                int8_t ***l_375 = &l_330;
                uint32_t *l_376 = &g_39;
                int i, j;
                for (i = 0; i < 9; i++)
                    l_358[i] = &l_285[0];
                if (((*l_283) = (-5L)))
                {
                    int8_t *l_293 = (void*)0;
                    int8_t **l_292[3][3] = {{&l_293,&l_293,&l_293},{(void*)0,(void*)0,(void*)0},{&l_293,&l_293,&l_293}};
                    int32_t l_310[8] = {(-8L),0x90389298L,0x90389298L,(-8L),0x90389298L,0x90389298L,(-8L),0x90389298L};
                    int i, j;
                    (*l_132) = &l_286;
                    (*l_279) &= ((((((l_294[3][0][9] = (void*)0) != &g_164) ^ (*g_233)) || (safe_mod_func_int8_t_s_s(g_199[0][2].f0, 0xB3L))) & (**g_84)) | (((((safe_sub_func_int64_t_s_s((safe_unary_minus_func_int32_t_s((*l_282))), (~((safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(1UL, ((safe_div_func_int16_t_s_s(l_309, l_310[4])) == 0UL))), (*l_247))), 0xC1L)) , p_37)))) < p_37) ^ (*g_85)) , p_37) <= g_65));
                }
                else
                {
                    uint32_t *l_317 = &l_155;
                    uint32_t **l_318 = &l_317;
                    uint32_t *l_320 = &g_39;
                    uint32_t **l_319 = &l_320;
                    int32_t l_331 = 1L;
                    uint16_t *l_332 = &l_287;
                    int32_t l_333[9] = {0xEF614622L,0xEF614622L,0xEF614622L,0xEF614622L,0xEF614622L,0xEF614622L,0xEF614622L,0xEF614622L,0xEF614622L};
                    int i;
                    l_333[5] = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((*l_332) = ((safe_sub_func_int32_t_s_s((((*l_319) = (l_38 = ((*l_318) = l_317))) != (void*)0), ((*l_280) = ((!(((p_37 == (p_37 == (g_243.f6 == p_37))) == (safe_add_func_int64_t_s_s(((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((*l_282) = (safe_sub_func_int32_t_s_s(((l_330 != (void*)0) > (*g_85)), (-5L)))), l_331)), 0x8579L)) ^ l_309), 0x3E80B92BDCCD84E1LL))) > g_159[0][2][3])) == (*l_247))))) == 0xAF5DF2E6AC674C49LL)), (*l_284))), 3));
                }
                l_162 = (((safe_add_func_uint16_t_u_u((p_37 | (g_114[2][0][1] = ((p_37 && ((safe_unary_minus_func_uint32_t_u((((*l_280) ^= (l_59 = p_37)) && (safe_add_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u(((g_343 == (void*)0) ^ (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((g_114[1][0][0] != (safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((~((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((*l_283) == ((*g_344) , g_246.f5)), g_199[0][2].f3.f3)), l_309)) && p_37)), g_246.f6)), (**g_84)))), 7)), (-9L)))), (*g_344))) && g_3) && g_199[0][2].f0), 9L))))) == (*l_247))) , 18446744073709551610UL))), (*l_247))) <= 0x24L) , (**g_84));
                (*l_359) = l_358[2];
                (***l_359) = (((l_360 , ((**g_373) = (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((~(l_286 = ((p_37 , (safe_lshift_func_int16_t_s_u((((safe_sub_func_uint16_t_u_u(g_246.f5, g_51.f0)) & g_199[0][2].f3.f2) == (g_194--)), 15))) < (*l_247)))) && (g_373 != ((*l_375) = &g_374))), (++(*l_376)))), (g_118 &= 0x7E4FL))))) <= (*l_283)) || (*g_233));
            }
        }
    }
    return g_243.f6;
}







static int32_t ** func_43(int32_t * p_44, int8_t p_45, uint32_t p_46, int32_t p_47, uint32_t p_48)
{
    uint8_t *l_74 = (void*)0;
    uint8_t *l_75 = &g_76;
    int32_t *l_77 = &g_42;
    int32_t l_81 = 0x212A48E7L;
    int32_t *l_82[10][6][1] = {{{&l_81},{&l_81},{&l_81},{&l_81},{&l_81},{&g_3}},{{&g_42},{&g_3},{&l_81},{&l_81},{&l_81},{&l_81}},{{&l_81},{&l_81},{&l_81},{&g_3},{&g_42},{&g_3}},{{&l_81},{&l_81},{&l_81},{&l_81},{&l_81},{&l_81}},{{&l_81},{&g_3},{&g_42},{&g_3},{&l_81},{&l_81}},{{&l_81},{&l_81},{&l_81},{&l_81},{&l_81},{&g_3}},{{&g_42},{&g_3},{&l_81},{&l_81},{&l_81},{&l_81}},{{&l_81},{&l_81},{&l_81},{&g_3},{&g_42},{&g_3}},{{&l_81},{&l_81},{&l_81},{&l_81},{&l_81},{&l_81}},{{&l_81},{&g_3},{&g_42},{&g_3},{&l_81},{&l_81}}};
    int i, j, k;
    (*l_77) |= (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((~(g_65++)) >= (&g_39 != &g_39)), (safe_mod_func_uint8_t_u_u(p_47, g_39)))), (((((void*)0 == &p_48) == (safe_lshift_func_int8_t_s_u(g_39, (g_51.f0 ^ ((((*l_75) = (&g_42 != &g_3)) > g_51.f0) == g_51.f0))))) , &p_46) != (void*)0)));
lbl_83:
    for (g_76 = (-28); (g_76 > 2); ++g_76)
    {
        int32_t **l_80 = &l_77;
        (*l_80) = (void*)0;
        if (g_3)
            continue;
    }
    g_42 = l_81;
    if (g_76)
        goto lbl_83;
    return g_84;
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
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_51.f0, "g_51.f0", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_114[i][j][k], "g_114[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_131[i][j], "g_131[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_159[i][j][k], "g_159[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_199[i][j].f0, "g_199[i][j].f0", print_hash_value);
            transparent_crc(g_199[i][j].f1, "g_199[i][j].f1", print_hash_value);
            transparent_crc(g_199[i][j].f2, "g_199[i][j].f2", print_hash_value);
            transparent_crc(g_199[i][j].f3.f0, "g_199[i][j].f3.f0", print_hash_value);
            transparent_crc(g_199[i][j].f3.f1, "g_199[i][j].f3.f1", print_hash_value);
            transparent_crc(g_199[i][j].f3.f2, "g_199[i][j].f3.f2", print_hash_value);
            transparent_crc(g_199[i][j].f3.f3, "g_199[i][j].f3.f3", print_hash_value);
            transparent_crc(g_199[i][j].f3.f4, "g_199[i][j].f3.f4", print_hash_value);
            transparent_crc(g_199[i][j].f3.f5, "g_199[i][j].f3.f5", print_hash_value);
            transparent_crc(g_199[i][j].f3.f6, "g_199[i][j].f3.f6", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_243.f0, "g_243.f0", print_hash_value);
    transparent_crc(g_243.f1, "g_243.f1", print_hash_value);
    transparent_crc(g_243.f2, "g_243.f2", print_hash_value);
    transparent_crc(g_243.f3, "g_243.f3", print_hash_value);
    transparent_crc(g_243.f4, "g_243.f4", print_hash_value);
    transparent_crc(g_243.f5, "g_243.f5", print_hash_value);
    transparent_crc(g_243.f6, "g_243.f6", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2, "g_246.f2", print_hash_value);
    transparent_crc(g_246.f3, "g_246.f3", print_hash_value);
    transparent_crc(g_246.f4, "g_246.f4", print_hash_value);
    transparent_crc(g_246.f5, "g_246.f5", print_hash_value);
    transparent_crc(g_246.f6, "g_246.f6", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_275[i][j][k], "g_275[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_338, "g_338", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_391[i][j], "g_391[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_581[i][j][k], "g_581[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_703[i], "g_703[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_826[i][j].f0, "g_826[i][j].f0", print_hash_value);
            transparent_crc(g_826[i][j].f1, "g_826[i][j].f1", print_hash_value);
            transparent_crc(g_826[i][j].f2, "g_826[i][j].f2", print_hash_value);
            transparent_crc(g_826[i][j].f3.f0, "g_826[i][j].f3.f0", print_hash_value);
            transparent_crc(g_826[i][j].f3.f1, "g_826[i][j].f3.f1", print_hash_value);
            transparent_crc(g_826[i][j].f3.f2, "g_826[i][j].f3.f2", print_hash_value);
            transparent_crc(g_826[i][j].f3.f3, "g_826[i][j].f3.f3", print_hash_value);
            transparent_crc(g_826[i][j].f3.f4, "g_826[i][j].f3.f4", print_hash_value);
            transparent_crc(g_826[i][j].f3.f5, "g_826[i][j].f3.f5", print_hash_value);
            transparent_crc(g_826[i][j].f3.f6, "g_826[i][j].f3.f6", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_829[i][j][k].f0, "g_829[i][j][k].f0", print_hash_value);
                transparent_crc(g_829[i][j][k].f1, "g_829[i][j][k].f1", print_hash_value);
                transparent_crc(g_829[i][j][k].f2, "g_829[i][j][k].f2", print_hash_value);
                transparent_crc(g_829[i][j][k].f3, "g_829[i][j][k].f3", print_hash_value);
                transparent_crc(g_829[i][j][k].f4, "g_829[i][j][k].f4", print_hash_value);
                transparent_crc(g_829[i][j][k].f5, "g_829[i][j][k].f5", print_hash_value);
                transparent_crc(g_829[i][j][k].f6, "g_829[i][j][k].f6", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_841, "g_841", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_875[i], "g_875[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_882, "g_882", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    transparent_crc(g_934, "g_934", print_hash_value);
    transparent_crc(g_1049, "g_1049", print_hash_value);
    transparent_crc(g_1225, "g_1225", print_hash_value);
    transparent_crc(g_1237, "g_1237", print_hash_value);
    transparent_crc(g_1298, "g_1298", print_hash_value);
    transparent_crc(g_1352.f0, "g_1352.f0", print_hash_value);
    transparent_crc(g_1352.f1, "g_1352.f1", print_hash_value);
    transparent_crc(g_1352.f2, "g_1352.f2", print_hash_value);
    transparent_crc(g_1352.f3.f0, "g_1352.f3.f0", print_hash_value);
    transparent_crc(g_1352.f3.f1, "g_1352.f3.f1", print_hash_value);
    transparent_crc(g_1352.f3.f2, "g_1352.f3.f2", print_hash_value);
    transparent_crc(g_1352.f3.f3, "g_1352.f3.f3", print_hash_value);
    transparent_crc(g_1352.f3.f4, "g_1352.f3.f4", print_hash_value);
    transparent_crc(g_1352.f3.f5, "g_1352.f3.f5", print_hash_value);
    transparent_crc(g_1352.f3.f6, "g_1352.f3.f6", print_hash_value);
    transparent_crc(g_1458, "g_1458", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1459[i][j][k], "g_1459[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1584[i], "g_1584[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1726, "g_1726", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1769[i][j], "g_1769[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1770, "g_1770", print_hash_value);
    transparent_crc(g_1772, "g_1772", print_hash_value);
    transparent_crc(g_1773, "g_1773", print_hash_value);
    transparent_crc(g_1775, "g_1775", print_hash_value);
    transparent_crc(g_1777, "g_1777", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1778[i][j], "g_1778[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1951, "g_1951", print_hash_value);
    transparent_crc(g_2171, "g_2171", print_hash_value);
    transparent_crc(g_2326.f0, "g_2326.f0", print_hash_value);
    transparent_crc(g_2422, "g_2422", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_2429[i], "g_2429[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2470, "g_2470", print_hash_value);
    transparent_crc(g_2734, "g_2734", print_hash_value);
    transparent_crc(g_2814, "g_2814", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2853[i].f0, "g_2853[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2900.f0, "g_2900.f0", print_hash_value);
    transparent_crc(g_2900.f1, "g_2900.f1", print_hash_value);
    transparent_crc(g_2900.f2, "g_2900.f2", print_hash_value);
    transparent_crc(g_2900.f3, "g_2900.f3", print_hash_value);
    transparent_crc(g_2900.f4, "g_2900.f4", print_hash_value);
    transparent_crc(g_2900.f5, "g_2900.f5", print_hash_value);
    transparent_crc(g_2900.f6, "g_2900.f6", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2935[i], "g_2935[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2987[i], "g_2987[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3054, "g_3054", print_hash_value);
    transparent_crc(g_3099, "g_3099", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
