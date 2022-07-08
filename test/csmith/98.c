// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 31566AF6
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


struct S0 {
   signed f0 : 31;
   signed f1 : 24;
   unsigned f2 : 26;
   unsigned f3 : 30;
   unsigned f4 : 21;
   signed f5 : 24;
   unsigned f6 : 22;
   const unsigned f7 : 19;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t f0;
   int32_t f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   unsigned f0 : 7;
   unsigned f1 : 23;
   signed f2 : 8;
   unsigned f3 : 15;
   signed f4 : 1;
   unsigned f5 : 14;
   const signed f6 : 21;
   signed f7 : 5;
   unsigned f8 : 24;
};
#pragma pack(pop)

union U3 {
   int64_t f0;
};

union U4 {
   uint32_t f0;
   uint32_t f1;
   int64_t f2;
};

union U5 {
   const int64_t f0;
   uint32_t f1;
};

union U6 {
   signed f0 : 24;
   uint32_t f1;
   int8_t f2;
};

union U7 {
   struct S1 f0;
   const uint32_t f1;
   int16_t f2;
};

union U8 {
   int8_t * f0;
   uint8_t f1;
   const struct S1 f2;
   const int8_t * f3;
   const uint64_t f4;
};

union U9 {
   int16_t f0;
   uint16_t f1;
};


static int8_t g_13 = 6L;
static int8_t *g_12[1][10][8] = {{{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13}}};
static int32_t g_26 = (-3L);
static int16_t g_54 = 0x456AL;
static int8_t g_60 = 0xE0L;
static uint32_t g_61 = 0x7192EEDBL;
static int16_t g_70 = 0x8A50L;
static uint32_t g_88 = 4294967286UL;
static struct S0 g_94 = {-1937,1565,6368,19044,286,-2414,913,636};
static union U5 g_97 = {0L};
static int32_t **g_101 = (void*)0;
static struct S2 g_108 = {2,1122,-13,103,-0,13,96,2,3811};
static int8_t g_126 = (-10L);
static uint16_t g_128 = 0xABE7L;
static int64_t g_136 = 0L;
static uint64_t g_137 = 1UL;
static union U9 g_188 = {4L};
static union U6 g_206[10][9][2] = {{{{0x0854EA2EL},{1L}},{{-1L},{0x9C653176L}},{{-1L},{1L}},{{0x0854EA2EL},{0x0854EA2EL}},{{1L},{-1L}},{{0x9C653176L},{-1L}},{{1L},{0x0854EA2EL}},{{0x0854EA2EL},{1L}},{{-1L},{0x9C653176L}}},{{{-1L},{1L}},{{0x0854EA2EL},{0x0854EA2EL}},{{1L},{-1L}},{{0x9C653176L},{-1L}},{{1L},{0x0854EA2EL}},{{0x0854EA2EL},{1L}},{{-1L},{0x9C653176L}},{{-1L},{1L}},{{0x0854EA2EL},{0x0854EA2EL}}},{{{1L},{-1L}},{{0x9C653176L},{-1L}},{{1L},{0x0854EA2EL}},{{0x0854EA2EL},{1L}},{{-1L},{0x9C653176L}},{{-1L},{1L}},{{0x0854EA2EL},{0x0854EA2EL}},{{1L},{-1L}},{{0x9C653176L},{-1L}}},{{{1L},{0x0854EA2EL}},{{0x0854EA2EL},{1L}},{{-1L},{0x9C653176L}},{{-1L},{1L}},{{0x0854EA2EL},{0x0854EA2EL}},{{1L},{-1L}},{{0x9C653176L},{-1L}},{{1L},{0x0854EA2EL}},{{0x0854EA2EL},{1L}}},{{{-1L},{0x9C653176L}},{{-1L},{1L}},{{0x0854EA2EL},{0x0854EA2EL}},{{1L},{-1L}},{{0x9C653176L},{-1L}},{{1L},{0x0854EA2EL}},{{0x0854EA2EL},{1L}},{{-1L},{0x9C653176L}},{{-1L},{1L}}},{{{0x0854EA2EL},{0x0854EA2EL}},{{1L},{-1L}},{{0x9C653176L},{-1L}},{{1L},{0x0854EA2EL}},{{0x0854EA2EL},{1L}},{{-1L},{0x9C653176L}},{{-1L},{1L}},{{0x0854EA2EL},{0x0854EA2EL}},{{1L},{-1L}}},{{{0x9C653176L},{-1L}},{{1L},{0x0854EA2EL}},{{0x0854EA2EL},{1L}},{{-1L},{0x9C653176L}},{{-1L},{1L}},{{0x0854EA2EL},{0x0854EA2EL}},{{1L},{-1L}},{{0x9C653176L},{-1L}},{{1L},{0x0854EA2EL}}},{{{0x0854EA2EL},{1L}},{{-1L},{0x9C653176L}},{{-1L},{1L}},{{0x0854EA2EL},{0x0854EA2EL}},{{1L},{-1L}},{{0x9C653176L},{-1L}},{{1L},{0x0854EA2EL}},{{0x0854EA2EL},{1L}},{{-1L},{0x9C653176L}}},{{{-1L},{1L}},{{0x0854EA2EL},{0x0854EA2EL}},{{1L},{-1L}},{{0x9C653176L},{-1L}},{{1L},{0x0854EA2EL}},{{0x0854EA2EL},{1L}},{{-1L},{0x65AAC15AL}},{{1L},{0x9C653176L}},{{0L},{0L}}},{{{0x9C653176L},{1L}},{{0x65AAC15AL},{1L}},{{0x9C653176L},{0L}},{{0L},{0x9C653176L}},{{1L},{0x65AAC15AL}},{{1L},{0x9C653176L}},{{0L},{0L}},{{0x9C653176L},{1L}},{{0x65AAC15AL},{1L}}}};
static struct S1 g_207 = {0xF79F9116L,0L};
static uint8_t g_213 = 0UL;
static uint8_t *g_212[8][5][1] = {{{(void*)0},{&g_213},{(void*)0},{&g_213},{&g_213}},{{(void*)0},{&g_213},{(void*)0},{&g_213},{(void*)0}},{{&g_213},{(void*)0},{&g_213},{(void*)0},{&g_213}},{{&g_213},{(void*)0},{&g_213},{(void*)0},{&g_213}},{{(void*)0},{&g_213},{(void*)0},{&g_213},{(void*)0}},{{&g_213},{&g_213},{(void*)0},{&g_213},{(void*)0}},{{&g_213},{(void*)0},{&g_213},{(void*)0},{&g_213}},{{(void*)0},{&g_213},{&g_213},{(void*)0},{&g_213}}};
static const uint16_t g_226 = 1UL;
static int16_t *g_281 = (void*)0;
static int16_t **g_280 = &g_281;
static int16_t g_317 = 0x7FB9L;
static uint16_t g_320 = 0UL;
static int8_t **g_334[6][4][9] = {{{&g_12[0][5][0],&g_12[0][5][0],&g_12[0][9][7],(void*)0,(void*)0,&g_12[0][5][0],&g_12[0][4][1],&g_12[0][5][0],(void*)0},{&g_12[0][6][7],(void*)0,(void*)0,&g_12[0][5][0],(void*)0,&g_12[0][4][1],&g_12[0][8][1],&g_12[0][9][1],&g_12[0][5][0]},{&g_12[0][9][4],&g_12[0][5][0],&g_12[0][5][0],&g_12[0][5][0],(void*)0,&g_12[0][4][1],&g_12[0][9][7],&g_12[0][2][2],&g_12[0][5][0]},{(void*)0,&g_12[0][5][0],&g_12[0][5][0],&g_12[0][9][1],&g_12[0][6][4],(void*)0,&g_12[0][5][0],&g_12[0][8][3],&g_12[0][0][0]}},{{(void*)0,(void*)0,&g_12[0][5][0],&g_12[0][0][0],&g_12[0][8][4],&g_12[0][6][4],(void*)0,(void*)0,&g_12[0][6][4]},{(void*)0,&g_12[0][0][5],(void*)0,&g_12[0][6][4],&g_12[0][5][0],&g_12[0][5][1],&g_12[0][5][0],&g_12[0][6][7],(void*)0},{(void*)0,&g_12[0][8][3],(void*)0,(void*)0,(void*)0,(void*)0,&g_12[0][8][3],(void*)0,&g_12[0][5][0]},{&g_12[0][9][4],&g_12[0][5][0],&g_12[0][4][1],&g_12[0][8][3],(void*)0,&g_12[0][5][0],&g_12[0][6][4],&g_12[0][5][0],&g_12[0][5][0]}},{{&g_12[0][6][7],(void*)0,&g_12[0][5][0],&g_12[0][6][2],(void*)0,&g_12[0][5][0],&g_12[0][5][0],&g_12[0][5][0],&g_12[0][5][0]},{&g_12[0][5][0],&g_12[0][8][4],(void*)0,&g_12[0][9][4],&g_12[0][2][2],(void*)0,&g_12[0][8][5],(void*)0,(void*)0},{&g_12[0][0][0],&g_12[0][9][4],(void*)0,&g_12[0][7][1],&g_12[0][5][0],&g_12[0][4][6],&g_12[0][6][4],&g_12[0][3][2],&g_12[0][6][4]},{&g_12[0][5][0],&g_12[0][5][1],&g_12[0][5][0],&g_12[0][5][0],&g_12[0][5][0],&g_12[0][9][4],&g_12[0][5][0],&g_12[0][3][2],&g_12[0][0][0]}},{{&g_12[0][5][0],&g_12[0][6][7],&g_12[0][5][0],&g_12[0][5][0],&g_12[0][5][1],&g_12[0][8][1],&g_12[0][5][0],(void*)0,&g_12[0][5][0]},{&g_12[0][9][1],(void*)0,&g_12[0][4][6],&g_12[0][4][6],(void*)0,&g_12[0][9][1],&g_12[0][5][0],&g_12[0][5][0],&g_12[0][5][0]},{&g_12[0][0][5],&g_12[0][4][1],&g_12[0][9][4],(void*)0,&g_12[0][0][1],&g_12[0][5][1],&g_12[0][6][4],&g_12[0][3][2],&g_12[0][6][4]},{(void*)0,&g_12[0][5][0],&g_12[0][5][0],&g_12[0][2][2],&g_12[0][5][0],(void*)0,(void*)0,&g_12[0][6][4],(void*)0}},{{&g_12[0][2][4],&g_12[0][3][2],&g_12[0][5][0],&g_12[0][5][0],(void*)0,&g_12[0][5][0],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_12[0][5][0],&g_12[0][5][0],&g_12[0][5][0],&g_12[0][5][0],&g_12[0][5][0],&g_12[0][6][7],&g_12[0][5][0]},{&g_12[0][4][1],(void*)0,&g_12[0][5][0],&g_12[0][9][4],&g_12[0][0][5],&g_12[0][5][0],&g_12[0][5][0],(void*)0,(void*)0},{&g_12[0][5][0],&g_12[0][5][0],(void*)0,&g_12[0][5][0],(void*)0,&g_12[0][5][0],&g_12[0][4][1],&g_12[0][5][0],(void*)0}},{{(void*)0,&g_12[0][9][7],&g_12[0][9][7],(void*)0,&g_12[0][8][1],(void*)0,&g_12[0][2][4],&g_12[0][8][5],&g_12[0][5][0]},{&g_12[0][8][4],(void*)0,&g_12[0][5][0],(void*)0,&g_12[0][5][0],&g_12[0][5][1],&g_12[0][9][1],&g_12[0][4][1],&g_12[0][5][0]},{&g_12[0][5][0],&g_12[0][5][0],&g_12[0][0][5],&g_12[0][5][0],&g_12[0][8][1],&g_12[0][8][5],(void*)0,&g_12[0][5][0],&g_12[0][5][0]},{&g_12[0][5][1],(void*)0,(void*)0,(void*)0,(void*)0,&g_12[0][6][7],&g_12[0][3][2],&g_12[0][6][2],&g_12[0][5][0]}}};
static int8_t **g_335 = &g_12[0][5][0];
static int8_t **g_336 = &g_12[0][8][4];
static struct S0 *g_455 = &g_94;
static struct S0 **g_454[8][9] = {{&g_455,&g_455,&g_455,&g_455,&g_455,&g_455,(void*)0,&g_455,&g_455},{&g_455,&g_455,&g_455,&g_455,&g_455,&g_455,&g_455,&g_455,&g_455},{&g_455,&g_455,(void*)0,&g_455,&g_455,&g_455,(void*)0,&g_455,&g_455},{&g_455,&g_455,&g_455,&g_455,&g_455,&g_455,&g_455,&g_455,&g_455},{&g_455,&g_455,(void*)0,&g_455,&g_455,&g_455,&g_455,&g_455,&g_455},{&g_455,&g_455,&g_455,&g_455,(void*)0,(void*)0,&g_455,&g_455,&g_455},{&g_455,&g_455,&g_455,(void*)0,(void*)0,&g_455,&g_455,&g_455,&g_455},{&g_455,&g_455,&g_455,&g_455,&g_455,&g_455,(void*)0,&g_455,&g_455}};
static int16_t g_460 = (-1L);
static int32_t g_480 = 0L;
static uint16_t g_481 = 0UL;
static uint32_t g_491[7][7] = {{0x80D81783L,0x80D81783L,0x50558694L,0x1503D28DL,0x683F7E28L,0xC476571AL,18446744073709551615UL},{18446744073709551615UL,1UL,0x50558694L,0x50558694L,1UL,18446744073709551615UL,18446744073709551614UL},{18446744073709551615UL,0x50558694L,1UL,18446744073709551614UL,0x683F7E28L,0x683F7E28L,18446744073709551614UL},{0x1503D28DL,4UL,0x1503D28DL,0xC476571AL,18446744073709551614UL,18446744073709551615UL,18446744073709551615UL},{1UL,0x50558694L,18446744073709551615UL,1UL,18446744073709551615UL,0x80D81783L,4UL},{0x80D81783L,0x50558694L,0x1503D28DL,0x683F7E28L,0xC476571AL,18446744073709551615UL,0xC476571AL},{0x80D81783L,0xC476571AL,0xC476571AL,0x80D81783L,1UL,18446744073709551615UL,1UL}};
static union U3 g_554 = {1L};
static int32_t *g_567 = &g_480;
static const int16_t g_601[1] = {0x5D7DL};
static struct S0 g_608 = {-28551,715,5889,19971,444,1555,1321,553};
static struct S0 g_610 = {-42087,1506,6894,18427,77,-1105,859,175};
static union U7 g_611 = {{0x807090B9L,0x891D3664L}};
static union U3 *g_623 = &g_554;
static int64_t g_673 = 0x5D0D9D96228B2FCALL;
static struct S0 g_679 = {971,-909,7063,28772,1197,-441,1262,113};
static struct S2 *g_704[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static struct S2 ***g_706 = (void*)0;
static uint16_t g_730[8][7] = {{0x19E3L,1UL,0x19E3L,0xC286L,0xB757L,0xC286L,0x19E3L},{0xEE7DL,0x9CADL,0x9A11L,0xEE7DL,0xEE7DL,0x9A11L,0x9CADL},{0x08C3L,0xC286L,9UL,1UL,9UL,0xC286L,0x08C3L},{0xD3A2L,0xEE7DL,65529UL,65529UL,0xEE7DL,0xD3A2L,65529UL},{0xB757L,1UL,65532UL,1UL,0xB757L,0x39B1L,0xB757L},{0xEE7DL,65529UL,65529UL,0xEE7DL,0xD3A2L,65529UL,0x9CADL},{9UL,1UL,9UL,0xC286L,0x08C3L,0xC286L,9UL},{0xEE7DL,0xEE7DL,0x9A11L,0x9CADL,0xEE7DL,65534UL,0x9CADL}};
static union U4 g_750[9][8][1] = {{{{0x5996B5D8L}},{{0x80424F40L}},{{0x0500422EL}},{{4294967291UL}},{{4294967290UL}},{{4294967291UL}},{{0x0500422EL}},{{0x80424F40L}}},{{{0x5996B5D8L}},{{4294967295UL}},{{0x80424F40L}},{{0x1DA0A9C2L}},{{0xA6220282L}},{{4294967290UL}},{{0x3A9BAECBL}},{{4294967290UL}}},{{{0x80424F40L}},{{4UL}},{{4UL}},{{0x80424F40L}},{{4294967290UL}},{{0x3A9BAECBL}},{{4294967290UL}},{{0xA6220282L}}},{{{0x1DA0A9C2L}},{{0x80424F40L}},{{4294967295UL}},{{0x5996B5D8L}},{{0x80424F40L}},{{0x0500422EL}},{{4294967291UL}},{{4294967290UL}}},{{{4294967291UL}},{{0x0500422EL}},{{0x80424F40L}},{{0x5996B5D8L}},{{4294967295UL}},{{0x80424F40L}},{{0x1DA0A9C2L}},{{0xA6220282L}}},{{{4294967290UL}},{{0x3A9BAECBL}},{{4294967290UL}},{{0x80424F40L}},{{4UL}},{{4UL}},{{0x80424F40L}},{{4294967290UL}}},{{{0x3A9BAECBL}},{{4294967290UL}},{{0xA6220282L}},{{0x1DA0A9C2L}},{{0x80424F40L}},{{4294967295UL}},{{0x5996B5D8L}},{{0x80424F40L}}},{{{0x0500422EL}},{{4294967291UL}},{{4294967290UL}},{{4294967291UL}},{{0x0500422EL}},{{0x80424F40L}},{{0x5996B5D8L}},{{4294967295UL}}},{{{0x80424F40L}},{{0x1DA0A9C2L}},{{0xA6220282L}},{{4294967290UL}},{{0x3A9BAECBL}},{{4294967290UL}},{{0x80424F40L}},{{4UL}}}};
static int16_t g_767 = 0L;
static const union U8 g_865 = {0};
static union U8 g_885 = {0};
static union U5 g_893 = {0x74ADAA50DCED8349LL};
static const struct S2 ***g_899 = (void*)0;
static const struct S2 ****g_898 = &g_899;
static int16_t g_955 = (-2L);
static uint32_t g_956 = 0x18BDE281L;
static struct S1 *g_994[2] = {(void*)0,(void*)0};
static struct S1 **g_993 = &g_994[0];
static uint16_t g_1027 = 65535UL;
static uint16_t *g_1033 = &g_481;
static uint16_t **g_1032 = &g_1033;
static union U5 g_1111[8] = {{0xD48DE31AC81D9C0ELL},{0xD48DE31AC81D9C0ELL},{1L},{0xD48DE31AC81D9C0ELL},{0xD48DE31AC81D9C0ELL},{1L},{0xD48DE31AC81D9C0ELL},{0xD48DE31AC81D9C0ELL}};
static int32_t ***g_1126 = (void*)0;
static union U6 **g_1169 = (void*)0;
static int16_t g_1171 = 1L;
static union U7 g_1236[10] = {{{18446744073709551615UL,0x2990F21BL}},{{18446744073709551611UL,0x46E83F2DL}},{{18446744073709551615UL,0x2990F21BL}},{{18446744073709551611UL,0x46E83F2DL}},{{18446744073709551615UL,0x2990F21BL}},{{18446744073709551611UL,0x46E83F2DL}},{{18446744073709551615UL,0x2990F21BL}},{{18446744073709551611UL,0x46E83F2DL}},{{18446744073709551615UL,0x2990F21BL}},{{18446744073709551611UL,0x46E83F2DL}}};
static union U3 g_1244[9][10] = {{{3L},{1L},{3L},{3L},{3L},{1L},{3L},{3L},{3L},{1L}},{{-4L},{3L},{0L},{3L},{-4L},{3L},{0L},{3L},{-4L},{3L}},{{3L},{3L},{3L},{1L},{3L},{3L},{3L},{1L},{3L},{3L}},{{-4L},{1L},{0L},{1L},{-4L},{1L},{0L},{1L},{-4L},{1L}},{{3L},{1L},{3L},{3L},{3L},{1L},{3L},{3L},{3L},{1L}},{{-4L},{3L},{0L},{3L},{-4L},{3L},{0L},{3L},{-4L},{3L}},{{3L},{3L},{3L},{1L},{3L},{3L},{3L},{1L},{3L},{3L}},{{-4L},{1L},{0L},{1L},{-4L},{1L},{0L},{1L},{-4L},{1L}},{{3L},{1L},{3L},{3L},{3L},{1L},{3L},{3L},{3L},{1L}}};
static const int8_t *g_1247 = &g_60;
static const int8_t **g_1246 = &g_1247;
static uint16_t g_1277[1][9][8] = {{{65535UL,0x2408L,1UL,65535UL,0x9219L,0x78DFL,0x590CL,0UL},{0x9C25L,65535UL,4UL,1UL,0x8CE7L,6UL,0x9C25L,0x6D4FL},{0x8CE7L,6UL,0x9C25L,0x6D4FL,0xAB48L,0xAB48L,0x6D4FL,0x9C25L},{0x2408L,0x2408L,1UL,0x9219L,8UL,3UL,0UL,0x590CL},{4UL,0UL,65535UL,0x9C25L,0x8CE7L,0UL,9UL,0x590CL},{0UL,0xAB48L,0xE83FL,0x9219L,65535UL,0xE83FL,8UL,0x9C25L},{65535UL,65528UL,0x4A2FL,0x6D4FL,0x2408L,0xBF7EL,0x2408L,0x6D4FL},{65535UL,0xD3C6L,65535UL,1UL,0x6D4FL,4UL,0xE83FL,0UL},{0UL,0UL,6UL,65535UL,0UL,0xE83FL,0x6D4FL,9UL}}};
static uint64_t g_1294 = 18446744073709551615UL;
static struct S0 ***g_1324 = &g_454[3][8];
static struct S0 *** const *g_1323[9][10][2] = {{{&g_1324,(void*)0},{&g_1324,&g_1324},{&g_1324,&g_1324},{(void*)0,&g_1324},{(void*)0,&g_1324},{&g_1324,&g_1324},{&g_1324,(void*)0},{&g_1324,&g_1324},{&g_1324,&g_1324},{&g_1324,&g_1324}},{{&g_1324,&g_1324},{&g_1324,(void*)0},{&g_1324,&g_1324},{&g_1324,&g_1324},{(void*)0,&g_1324},{(void*)0,&g_1324},{&g_1324,&g_1324},{&g_1324,(void*)0},{&g_1324,&g_1324},{&g_1324,&g_1324}},{{&g_1324,&g_1324},{&g_1324,&g_1324},{&g_1324,&g_1324},{&g_1324,&g_1324},{&g_1324,&g_1324},{&g_1324,(void*)0},{&g_1324,&g_1324},{&g_1324,&g_1324},{&g_1324,&g_1324},{(void*)0,&g_1324}},{{&g_1324,(void*)0},{&g_1324,(void*)0},{&g_1324,&g_1324},{(void*)0,&g_1324},{&g_1324,&g_1324},{&g_1324,&g_1324},{&g_1324,(void*)0},{&g_1324,&g_1324},{&g_1324,&g_1324},{&g_1324,&g_1324}},{{(void*)0,&g_1324},{&g_1324,(void*)0},{&g_1324,(void*)0},{&g_1324,&g_1324},{(void*)0,&g_1324},{&g_1324,&g_1324},{&g_1324,&g_1324},{&g_1324,(void*)0},{&g_1324,&g_1324},{&g_1324,&g_1324}},{{&g_1324,&g_1324},{(void*)0,&g_1324},{&g_1324,(void*)0},{&g_1324,(void*)0},{&g_1324,&g_1324},{(void*)0,&g_1324},{&g_1324,&g_1324},{&g_1324,&g_1324},{&g_1324,(void*)0},{&g_1324,&g_1324}},{{&g_1324,&g_1324},{&g_1324,&g_1324},{(void*)0,&g_1324},{&g_1324,(void*)0},{&g_1324,(void*)0},{&g_1324,&g_1324},{(void*)0,&g_1324},{&g_1324,&g_1324},{&g_1324,&g_1324},{&g_1324,(void*)0}},{{&g_1324,&g_1324},{&g_1324,&g_1324},{&g_1324,&g_1324},{(void*)0,&g_1324},{&g_1324,(void*)0},{&g_1324,(void*)0},{&g_1324,&g_1324},{(void*)0,&g_1324},{&g_1324,&g_1324},{&g_1324,&g_1324}},{{&g_1324,(void*)0},{&g_1324,&g_1324},{&g_1324,&g_1324},{&g_1324,&g_1324},{(void*)0,&g_1324},{&g_1324,(void*)0},{&g_1324,(void*)0},{&g_1324,&g_1324},{(void*)0,&g_1324},{&g_1324,&g_1324}}};
static union U6 g_1453 = {-1L};
static uint16_t g_1486 = 0xB1B8L;
static union U8 g_1491 = {0};
static union U7 g_1517 = {{0xAF47C02BL,0x67FA0946L}};
static union U5 *g_1587 = &g_1111[6];
static union U5 **g_1586[1][3] = {{&g_1587,&g_1587,&g_1587}};
static union U5 * const g_1595 = (void*)0;
static union U5 * const *g_1594[9] = {&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595};
static const int16_t g_1683 = 1L;
static int32_t g_1803 = 1L;
static int16_t g_1809 = 0x5DDBL;
static int32_t g_1812 = 1L;
static uint64_t g_1813 = 0xBEEE820ADC1E8191LL;
static int32_t g_1830 = 8L;
static uint16_t g_1895 = 0x6534L;
static int64_t *g_1901 = &g_554.f0;
static uint8_t **g_1903[2] = {&g_212[6][3][0],&g_212[6][3][0]};
static uint8_t ***g_1902 = &g_1903[0];
static uint32_t g_1993 = 1UL;
static int32_t g_2003 = (-1L);
static uint64_t g_2007[4] = {0x459B681447B4A9B5LL,0x459B681447B4A9B5LL,0x459B681447B4A9B5LL,0x459B681447B4A9B5LL};
static uint32_t g_2011 = 0xD8A8EE96L;
static int16_t g_2016 = 1L;
static uint32_t g_2021 = 18446744073709551615UL;
static const union U5 *g_2028 = &g_893;
static const union U5 **g_2027[7] = {&g_2028,&g_2028,(void*)0,&g_2028,&g_2028,(void*)0,&g_2028};
static uint64_t **g_2059 = (void*)0;
static struct S1 g_2144 = {0x1A92BB14L,0x69D563D5L};
static int32_t g_2164[1] = {(-2L)};
static int8_t g_2177 = (-5L);
static union U8 *g_2181 = &g_1491;
static union U8 **g_2180 = &g_2181;
static struct S2 g_2224 = {6,1144,0,59,-0,37,-971,-2,318};
static const struct S1 g_2232 = {0xC0D28770L,0xC18003DBL};
static struct S1 ***g_2262 = &g_993;
static uint16_t g_2297 = 65531UL;
static uint8_t g_2440 = 1UL;
static uint64_t ****g_2520 = (void*)0;
static int32_t *g_2559 = (void*)0;
static int32_t g_2609 = (-3L);
static struct S2 g_2738 = {7,205,-3,103,0,58,901,4,3567};
static const union U6 ****g_2741 = (void*)0;
static int32_t g_2749 = (-4L);
static uint16_t g_2772 = 1UL;
static int32_t g_2801[4] = {0xEA4F172EL,0xEA4F172EL,0xEA4F172EL,0xEA4F172EL};
static uint16_t g_2804 = 0xBD24L;
static uint64_t g_2810 = 8UL;
static union U5 g_2827 = {0xDFE7BFC7EE09E97ELL};
static int64_t g_2845[10] = {0x847FF2F6B8F6950CLL,0x847FF2F6B8F6950CLL,0x847FF2F6B8F6950CLL,0x847FF2F6B8F6950CLL,0x847FF2F6B8F6950CLL,0x847FF2F6B8F6950CLL,0x847FF2F6B8F6950CLL,0x847FF2F6B8F6950CLL,0x847FF2F6B8F6950CLL,0x847FF2F6B8F6950CLL};
static int32_t g_2857 = 0xD4AD373AL;



static union U3 func_1(void);
static const int32_t func_2(int32_t p_3, int8_t * p_4);
static union U3 func_8(int64_t p_9);
static uint64_t func_15(int8_t * const p_16, union U8 p_17);
static int8_t * const func_18(int32_t p_19);
static int32_t * func_20(union U9 p_21, int32_t * p_22, int32_t * p_23);
static int32_t * func_27(uint64_t p_28);
static const int32_t func_29(union U6 p_30, union U8 p_31, union U6 p_32, union U4 p_33, int32_t p_34);
static union U8 func_36(struct S0 p_37, union U3 p_38);
static struct S0 func_39(int32_t * p_40);
# 235 "<stdin>"
static union U3 func_1(void)
{
    uint16_t l_5 = 65533UL;
    uint8_t l_14 = 1UL;
    union U8 l_2053 = {0};
    int32_t l_2061 = (-1L);
    int16_t l_2490 = 0x9DA7L;
    int32_t *l_2748 = &g_2749;
    uint16_t * const *l_2777 = (void*)0;
    uint16_t * const ** const l_2776 = &l_2777;
    union U9 l_2787[9][10] = {{{8L},{-5L},{-5L},{8L},{-5L},{-5L},{8L},{-5L},{-5L},{8L}},{{-5L},{8L},{-5L},{-5L},{8L},{1L},{1L},{-5L},{1L},{1L}},{{-5L},{-5L},{8L},{-5L},{-5L},{8L},{-5L},{-5L},{8L},{-5L}},{{-5L},{1L},{1L},{-5L},{1L},{1L},{-5L},{1L},{1L},{-5L}},{{1L},{-5L},{1L},{1L},{-5L},{1L},{1L},{-5L},{1L},{1L}},{{-5L},{-5L},{8L},{-5L},{-5L},{8L},{-5L},{-5L},{8L},{-5L}},{{-5L},{1L},{1L},{-5L},{1L},{1L},{-5L},{1L},{1L},{-5L}},{{1L},{-5L},{1L},{1L},{-5L},{1L},{1L},{-5L},{1L},{1L}},{{-5L},{-5L},{8L},{-5L},{-5L},{8L},{-5L},{-5L},{8L},{-5L}}};
    int32_t l_2800 = 4L;
    int32_t l_2802 = 0xCB1964CAL;
    struct S1 l_2808 = {0x774361FFL,0x1E7FB75EL};
    uint8_t l_2821 = 247UL;
    union U5 *l_2826 = &g_2827;
    struct S2 l_2839 = {8,2273,-7,114,-0,91,-1066,2,2475};
    struct S0 **l_2842 = &g_455;
    int32_t l_2863 = 0x9DEED874L;
    union U3 l_2897 = {1L};
    int i, j;
    return l_2897;
}







static const int32_t func_2(int32_t p_3, int8_t * p_4)
{
    union U7 *l_2492 = (void*)0;
    union U7 ** const l_2491 = &l_2492;
    int32_t l_2493[9][10] = {{0x93A24E9EL,0x061CD048L,0x09F07F19L,(-5L),0x09F07F19L,0x061CD048L,0x93A24E9EL,0x061CD048L,0x09F07F19L,(-5L)},{0x09F07F19L,(-5L),0x09F07F19L,0x061CD048L,0x93A24E9EL,0x061CD048L,0x09F07F19L,(-5L),0x09F07F19L,0x061CD048L},{0x93A24E9EL,(-5L),0xF172AF90L,(-5L),0x93A24E9EL,1L,0x93A24E9EL,(-5L),0xF172AF90L,(-5L)},{0x93A24E9EL,0x061CD048L,0x09F07F19L,(-5L),0x09F07F19L,0x061CD048L,0x93A24E9EL,0x061CD048L,0x09F07F19L,(-5L)},{0x09F07F19L,(-5L),0x09F07F19L,0x061CD048L,0x93A24E9EL,0x061CD048L,0x09F07F19L,(-5L),0x09F07F19L,0x061CD048L},{0x93A24E9EL,(-5L),0xF172AF90L,(-5L),0x93A24E9EL,1L,0x93A24E9EL,(-5L),0xF172AF90L,(-5L)},{0x93A24E9EL,0x061CD048L,0x09F07F19L,(-5L),0x09F07F19L,0x061CD048L,0x93A24E9EL,0x061CD048L,0x09F07F19L,(-5L)},{0x09F07F19L,(-5L),0x09F07F19L,0x061CD048L,0x93A24E9EL,0x061CD048L,0x09F07F19L,(-5L),0x09F07F19L,0x061CD048L},{0x93A24E9EL,(-5L),0xF172AF90L,(-5L),0x93A24E9EL,1L,0x93A24E9EL,(-5L),0xF172AF90L,(-5L)}};
    const struct S1 l_2499 = {0xEDD45C89L,0x4DA51A6DL};
    struct S1 ***l_2505 = &g_993;
    int8_t *l_2506 = &g_2177;
    int16_t **l_2507 = &g_281;
    struct S2 *** const * const l_2549 = &g_706;
    union U9 l_2558 = {0x8CFEL};
    union U8 **l_2625[9][5] = {{&g_2181,&g_2181,&g_2181,&g_2181,&g_2181},{&g_2181,&g_2181,&g_2181,&g_2181,&g_2181},{&g_2181,&g_2181,&g_2181,&g_2181,&g_2181},{&g_2181,&g_2181,&g_2181,&g_2181,&g_2181},{&g_2181,&g_2181,&g_2181,&g_2181,&g_2181},{&g_2181,&g_2181,&g_2181,&g_2181,&g_2181},{&g_2181,&g_2181,&g_2181,&g_2181,&g_2181},{&g_2181,&g_2181,&g_2181,&g_2181,&g_2181},{&g_2181,&g_2181,&g_2181,&g_2181,&g_2181}};
    union U6 ***l_2628 = &g_1169;
    int32_t *l_2631 = &g_1830;
    int16_t l_2743 = (-1L);
    int32_t *l_2744 = &l_2493[4][7];
    uint64_t l_2745[9][4] = {{0x027FD40E04E65BD2LL,0UL,0UL,0x027FD40E04E65BD2LL},{0UL,0x027FD40E04E65BD2LL,0UL,0UL},{0x027FD40E04E65BD2LL,0x027FD40E04E65BD2LL,0x70CB60EA42B7D35ALL,0x027FD40E04E65BD2LL},{0x027FD40E04E65BD2LL,0UL,0UL,0x027FD40E04E65BD2LL},{0UL,0x027FD40E04E65BD2LL,0UL,0UL},{0x027FD40E04E65BD2LL,0x027FD40E04E65BD2LL,0x70CB60EA42B7D35ALL,0x027FD40E04E65BD2LL},{0x027FD40E04E65BD2LL,0UL,0UL,0x027FD40E04E65BD2LL},{0UL,0x027FD40E04E65BD2LL,0UL,0UL},{0x027FD40E04E65BD2LL,0x027FD40E04E65BD2LL,0x70CB60EA42B7D35ALL,0x027FD40E04E65BD2LL}};
    int i, j;
    if ((l_2493[4][7] = ((*g_567) = ((void*)0 == l_2491))))
    {
        int32_t *l_2494 = &g_26;
        int32_t **l_2495[9][4][6] = {{{&g_567,&g_567,&g_567,&g_567,&l_2494,&l_2494},{&l_2494,&g_567,&g_567,&l_2494,&g_567,&l_2494},{&l_2494,&l_2494,&l_2494,&l_2494,&l_2494,&g_567},{&l_2494,&l_2494,&g_567,&g_567,&l_2494,&l_2494}},{{&g_567,&l_2494,&g_567,&l_2494,&g_567,&l_2494},{&g_567,&g_567,&g_567,&l_2494,&l_2494,&g_567},{&g_567,&g_567,&l_2494,&l_2494,&l_2494,&l_2494},{&g_567,&g_567,&g_567,&g_567,&l_2494,&l_2494}},{{&l_2494,&g_567,&g_567,&l_2494,&g_567,&l_2494},{&l_2494,&l_2494,&l_2494,&l_2494,&l_2494,&g_567},{&l_2494,&l_2494,&g_567,&g_567,&l_2494,&l_2494},{&g_567,&l_2494,&g_567,&l_2494,&g_567,&l_2494}},{{&g_567,&g_567,&g_567,&l_2494,&l_2494,&g_567},{&g_567,&g_567,&l_2494,&l_2494,&l_2494,&l_2494},{&g_567,&g_567,&g_567,&g_567,&l_2494,&l_2494},{&l_2494,&g_567,&g_567,&l_2494,&g_567,&l_2494}},{{&l_2494,&l_2494,&l_2494,&l_2494,&l_2494,&g_567},{&l_2494,&l_2494,&g_567,&g_567,&l_2494,&l_2494},{&g_567,&l_2494,&g_567,&l_2494,&g_567,&l_2494},{&g_567,&g_567,&g_567,&l_2494,&l_2494,&g_567}},{{&g_567,&g_567,&l_2494,&l_2494,&l_2494,&l_2494},{&g_567,&g_567,&g_567,&g_567,&l_2494,&l_2494},{&l_2494,&g_567,&g_567,&l_2494,&l_2494,&g_567},{&g_567,&g_567,&g_567,&g_567,&g_567,&l_2494}},{{&g_567,&g_567,&l_2494,&l_2494,&g_567,&g_567},{&l_2494,&g_567,&l_2494,&g_567,&l_2494,&g_567},{&l_2494,&l_2494,&l_2494,&g_567,&g_567,&l_2494},{&l_2494,&l_2494,&g_567,&g_567,&l_2494,&g_567}},{{&l_2494,&l_2494,&l_2494,&l_2494,&g_567,&g_567},{&g_567,&l_2494,&l_2494,&g_567,&l_2494,&g_567},{&g_567,&g_567,&g_567,&g_567,&g_567,&l_2494},{&g_567,&g_567,&l_2494,&l_2494,&g_567,&g_567}},{{&l_2494,&g_567,&l_2494,&g_567,&l_2494,&g_567},{&l_2494,&l_2494,&l_2494,&g_567,&g_567,&l_2494},{&l_2494,&l_2494,&g_567,&g_567,&l_2494,&g_567},{&l_2494,&l_2494,&l_2494,&l_2494,&g_567,&g_567}}};
        int32_t *l_2496 = &g_2003;
        struct S1 ***l_2497 = &g_993;
        struct S1 ****l_2498 = &g_2262;
        struct S1 ***l_2501 = (void*)0;
        struct S1 ****l_2500 = &l_2501;
        struct S1 ****l_2502 = (void*)0;
        struct S1 ****l_2503 = (void*)0;
        struct S1 ****l_2504 = (void*)0;
        union U6 l_2518 = {0xF70D1767L};
        struct S2 * const ***l_2536 = (void*)0;
        struct S2 * const ****l_2535 = &l_2536;
        union U8 *l_2539 = &g_885;
        int64_t *l_2556[6];
        union U9 l_2560 = {0L};
        union U7 l_2595[3][3][8] = {{{{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}}},{{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}}},{{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}}}},{{{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}}},{{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}}},{{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}}}},{{{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}}},{{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}}},{{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L}}}}};
        const union U3 *l_2597 = &g_1244[5][5];
        const union U3 ** const l_2596 = &l_2597;
        const uint8_t l_2610 = 0xBFL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_2556[i] = (void*)0;
        l_2496 = l_2494;
        l_2507 = (((((((*l_2498) = l_2497) == (l_2505 = ((*l_2500) = (l_2499 , &g_993)))) , l_2506) == p_4) & (l_2499.f1 != ((void*)0 != &g_2180))) , &g_281);
        for (g_554.f0 = 6; (g_554.f0 >= 0); g_554.f0 -= 1)
        {
            uint32_t l_2508 = 0x9D615776L;
            struct S1 l_2512 = {1UL,-4L};
            int32_t l_2519 = 0xEC0D51D8L;
            struct S2 ****l_2548 = &g_706;
            union U9 l_2557 = {-1L};
            --l_2508;
        }
        for (g_2003 = 8; (g_2003 >= 1); g_2003 -= 1)
        {
            int16_t ***l_2591 = &g_280;
            int32_t l_2612[10] = {0x629EC928L,0x629EC928L,(-2L),0xC315FBF4L,(-2L),0x629EC928L,0x629EC928L,(-2L),0xC315FBF4L,(-2L)};
            int i;
            for (l_2518.f1 = 0; (l_2518.f1 <= 8); l_2518.f1 += 1)
            {
                union U3 **l_2592[3];
                uint32_t *l_2608 = &g_61;
                union U9 *l_2614 = (void*)0;
                union U9 **l_2613 = &l_2614;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_2592[i] = &g_623;
                if (l_2493[l_2518.f1][(g_2003 + 1)])
                    break;
                for (g_213 = 0; (g_213 != 19); g_213++)
                {
                    uint8_t *l_2586 = &g_885.f1;
                    union U3 **l_2594[8][5][5] = {{{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,&g_623,&g_623}},{{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,(void*)0,&g_623},{&g_623,&g_623,(void*)0,&g_623,(void*)0},{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,(void*)0,(void*)0,&g_623}},{{&g_623,&g_623,&g_623,&g_623,(void*)0},{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,(void*)0,&g_623},{&g_623,&g_623,&g_623,&g_623,(void*)0},{&g_623,&g_623,&g_623,&g_623,&g_623}},{{&g_623,&g_623,&g_623,(void*)0,&g_623},{&g_623,&g_623,(void*)0,&g_623,(void*)0},{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,(void*)0,(void*)0,&g_623},{&g_623,&g_623,&g_623,&g_623,(void*)0}},{{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,(void*)0,&g_623},{&g_623,&g_623,&g_623,&g_623,(void*)0},{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,(void*)0,&g_623}},{{&g_623,&g_623,(void*)0,&g_623,(void*)0},{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,(void*)0,(void*)0,&g_623},{&g_623,&g_623,&g_623,&g_623,(void*)0},{&g_623,&g_623,&g_623,&g_623,&g_623}},{{&g_623,&g_623,&g_623,(void*)0,&g_623},{&g_623,&g_623,&g_623,&g_623,(void*)0},{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,(void*)0,&g_623},{&g_623,&g_623,(void*)0,&g_623,(void*)0}},{{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,(void*)0,(void*)0,&g_623},{&g_623,&g_623,&g_623,&g_623,(void*)0},{&g_623,&g_623,&g_623,&g_623,&g_623},{&g_623,&g_623,&g_623,(void*)0,&g_623}}};
                    union U3 ***l_2593 = &l_2594[1][3][3];
                    uint32_t *l_2600 = (void*)0;
                    uint32_t *l_2601[9] = {&g_2021,&g_2021,&g_2021,&g_2021,&g_2021,&g_2021,&g_2021,&g_2021,&g_2021};
                    int32_t l_2611 = 0x2DF312DBL;
                    int i, j, k;
                    l_2493[4][7] = (safe_div_func_int16_t_s_s((safe_add_func_int64_t_s_s((p_3 | (g_2224.f5 , (safe_sub_func_uint32_t_u_u((((safe_div_func_uint64_t_u_u((l_2611 &= (((((safe_sub_func_uint8_t_u_u(((*l_2586) = 0UL), (safe_add_func_int16_t_s_s((((((safe_lshift_func_int16_t_s_u(p_3, (l_2591 != (((((*l_2593) = (l_2592[2] = &g_623)) == (l_2595[2][2][2] , l_2596)) == (safe_mod_func_int16_t_s_s(((g_207.f0--) , ((*l_2496) = ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((**g_1032) = (&g_491[2][0] != l_2608)), (-10L))), 10)) < (-1L)))), p_3))) , (void*)0)))) | l_2493[l_2518.f1][(g_2003 + 1)]) <= g_2609) >= l_2610) <= l_2493[l_2518.f1][(g_2003 + 1)]), p_3)))) ^ 0x57L) <= 249UL) , l_2493[l_2518.f1][(g_2003 + 1)]) , p_3)), p_3)) & p_3) ^ (*g_1901)), p_3)))), p_3)), l_2612[3]));
                }
                (*l_2613) = &g_188;
                return p_3;
            }
        }
    }
    else
    {
        const union U5 l_2621 = {5L};
        int32_t *l_2632 = &l_2493[8][9];
        int16_t **l_2687 = &g_281;
        union U3 l_2721 = {1L};
        int32_t l_2727 = (-10L);
        int32_t l_2728[8][7][4] = {{{1L,0x15EB554BL,0x7AF09680L,0xA1783305L},{0L,0x9D2DF4F3L,1L,9L},{0xC116453CL,0x9D2DF4F3L,9L,7L},{(-6L),3L,0x3B7E490FL,(-1L)},{0x97203E4FL,0x9D2DF4F3L,0x7AF09680L,4L},{1L,0xD86F3C26L,1L,0x4D974A2FL},{0L,(-1L),0L,0x0E7C53F2L}},{{1L,0x18B7A700L,0xA15CD715L,(-1L)},{(-6L),0x1891B55AL,0xA15CD715L,0x15EB554BL},{1L,0x9D2DF4F3L,0L,0x702FDCF5L},{0L,0xB6D5B086L,1L,9L},{1L,9L,0x7AF09680L,0x0E7C53F2L},{0x97203E4FL,7L,0x3B7E490FL,0x18B7A700L},{(-6L),0xE25B97FBL,9L,0x1CA2836BL}},{{(-3L),0x9D2DF4F3L,1L,0x1CA2836BL},{0L,0xE25B97FBL,1L,0x18B7A700L},{(-1L),7L,(-6L),0x0E7C53F2L},{9L,9L,1L,9L},{(-6L),0xB6D5B086L,0xADEF5A08L,0x702FDCF5L},{0x9230E476L,0x9D2DF4F3L,0xB7E0530EL,0x15EB554BL},{(-2L),0x1891B55AL,1L,(-1L)}},{{(-2L),0x18B7A700L,0xB7E0530EL,0x0E7C53F2L},{0x9230E476L,(-1L),0xADEF5A08L,0x4D974A2FL},{(-6L),0xD86F3C26L,1L,4L},{9L,0x9D2DF4F3L,(-6L),(-1L)},{(-1L),3L,1L,7L},{0L,0x4D974A2FL,1L,0x0E7C53F2L},{(-3L),0x4D974A2FL,9L,7L}},{{(-6L),3L,0x3B7E490FL,(-1L)},{0x97203E4FL,0x9D2DF4F3L,0x7AF09680L,4L},{1L,0xD86F3C26L,1L,0x4D974A2FL},{0L,(-1L),0L,0x0E7C53F2L},{1L,0x18B7A700L,0xA15CD715L,(-1L)},{(-6L),0x1891B55AL,0xA15CD715L,0x15EB554BL},{1L,0x9D2DF4F3L,0L,0x702FDCF5L}},{{0L,0xB6D5B086L,1L,9L},{1L,9L,0x7AF09680L,0x0E7C53F2L},{0x97203E4FL,7L,0x3B7E490FL,0x18B7A700L},{(-6L),0xE25B97FBL,9L,0x1CA2836BL},{(-3L),0x9D2DF4F3L,1L,0x1CA2836BL},{0L,0xE25B97FBL,1L,0x18B7A700L},{(-1L),7L,(-6L),0x0E7C53F2L}},{{9L,9L,1L,9L},{(-6L),0xB6D5B086L,0xADEF5A08L,0x702FDCF5L},{0x9230E476L,0x9D2DF4F3L,0xB7E0530EL,0x15EB554BL},{(-2L),0x1891B55AL,1L,(-1L)},{(-2L),0x18B7A700L,0xB7E0530EL,0x0E7C53F2L},{0x9230E476L,(-1L),0xADEF5A08L,0x4D974A2FL},{(-6L),0xD86F3C26L,1L,4L}},{{9L,0x9D2DF4F3L,(-6L),(-1L)},{(-1L),0x753C7936L,0xA15CD715L,5L},{1L,4L,(-1L),0x1CA2836BL},{0L,4L,0xA885E292L,5L},{(-2L),0x753C7936L,0xC116453CL,0xE25B97FBL},{0xB7E0530EL,0x4D974A2FL,1L,0xD86F3C26L},{0xA15CD715L,0x9D2DF4F3L,0xA15CD715L,4L}}};
        union U6 *** const *l_2742[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2742[i] = &l_2628;
        if ((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_2558.f0, p_3)), ((safe_lshift_func_uint16_t_u_u((l_2621 , ((*g_1033) = ((p_3 ^ (safe_lshift_func_int8_t_s_s((-7L), (l_2621.f1 , ((!l_2621.f1) < (l_2625[5][0] != (void*)0)))))) , 0xB93FL))), p_3)) , l_2621.f1))))
        {
            union U7 *l_2626 = &g_611;
            union U7 **l_2627 = &l_2626;
            union U6 ****l_2629 = &l_2628;
            int32_t *l_2630 = &l_2493[4][7];
            union U6 l_2643 = {-4L};
            uint64_t l_2648[2][4][2] = {{{0xEA01AB5E679FB924LL,0xEA01AB5E679FB924LL},{18446744073709551615UL,0xEA01AB5E679FB924LL},{0xEA01AB5E679FB924LL,18446744073709551615UL},{0xEA01AB5E679FB924LL,0xEA01AB5E679FB924LL}},{{18446744073709551615UL,0xEA01AB5E679FB924LL},{0xEA01AB5E679FB924LL,18446744073709551615UL},{0xEA01AB5E679FB924LL,0xEA01AB5E679FB924LL},{18446744073709551615UL,0xEA01AB5E679FB924LL}}};
            struct S0 l_2658 = {6061,2635,7864,5091,651,16,1319,692};
            union U3 l_2659 = {0x3717DD678CE7FF82LL};
            union U5 l_2700 = {0xC9447E6B7E79F320LL};
            int64_t l_2711 = 0L;
            int i, j, k;
            (*l_2627) = ((*l_2491) = l_2626);
            (*l_2629) = l_2628;
            l_2632 = (l_2631 = l_2630);
            for (g_13 = 0; (g_13 >= (-24)); g_13 = safe_sub_func_uint8_t_u_u(g_13, 9))
            {
                uint32_t l_2640 = 5UL;
                uint8_t *l_2641 = &g_2440;
                int32_t l_2649 = 0x887998D6L;
                const union U4 l_2667 = {0x0881C58BL};
                int32_t *l_2671 = (void*)0;
                int64_t l_2714 = 0xA87744322F66B389LL;
                l_2649 &= (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((0xE680003521767ADCLL | ((((+(*g_1901)) | ((*l_2641) = l_2640)) && (!(((*l_2631) == p_3) <= (l_2643 , l_2640)))) || (safe_mul_func_uint16_t_u_u(((l_2643 , ((safe_rshift_func_int16_t_s_s((p_3 == 0x8EL), 15)) >= 0xFF27217BL)) <= 0L), l_2648[1][1][0])))), p_3)), p_3));
            }
        }
        else
        {
            (*g_567) ^= 1L;
            return (*l_2631);
        }
        if ((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((l_2721 , 0x99L), (safe_unary_minus_func_uint8_t_u((*l_2631))))), p_3)))
        {
            (*l_2632) = (*l_2631);
        }
        else
        {
            uint32_t l_2729 = 1UL;
            for (g_2144.f1 = 0; (g_2144.f1 != 24); g_2144.f1++)
            {
                int32_t *l_2725 = &g_1830;
                int32_t *l_2726[4][8][5] = {{{&g_2003,(void*)0,&g_1830,&l_2493[4][7],&g_2003},{&g_480,&g_480,&g_2003,&g_26,&g_26},{&g_26,(void*)0,&g_480,&g_1830,&g_2003},{&g_26,(void*)0,&g_480,&g_26,&l_2493[2][7]},{&g_26,&l_2493[2][7],&g_2003,&l_2493[4][6],&l_2493[2][1]},{&g_480,&g_2003,&g_1830,&g_26,&g_1830},{&g_26,&g_26,&l_2493[5][5],&g_480,&g_1830},{&g_26,&l_2493[2][1],&g_26,&g_26,&g_1830}},{{(void*)0,(void*)0,&g_26,(void*)0,&l_2493[0][6]},{&g_1830,&l_2493[2][1],&g_480,&g_2003,(void*)0},{&g_1830,&g_26,(void*)0,(void*)0,&g_2003},{&g_480,&g_2003,&g_26,&g_26,&g_480},{&l_2493[0][6],&l_2493[2][7],(void*)0,&l_2493[2][7],&l_2493[6][4]},{&l_2493[2][1],(void*)0,(void*)0,&g_1830,&l_2493[4][7]},{&l_2493[2][1],(void*)0,&g_2003,(void*)0,&l_2493[5][5]},{&l_2493[0][6],&g_480,&g_26,&g_26,&g_1830}},{{&g_480,(void*)0,&l_2493[4][7],(void*)0,&g_480},{&g_1830,&l_2493[4][7],&g_26,&l_2493[0][6],&g_26},{&g_1830,&g_2003,&l_2493[4][7],&g_26,&l_2493[0][6]},{(void*)0,&g_26,&g_2003,&l_2493[4][7],&g_26},{&g_26,&g_26,&g_480,&g_480,&g_480},{&g_26,(void*)0,(void*)0,&g_2003,&g_1830},{&g_480,&g_26,&l_2493[2][7],(void*)0,&l_2493[5][5]},{&g_26,&g_1830,&l_2493[0][6],&g_1830,&l_2493[4][7]}},{{&g_26,(void*)0,(void*)0,&g_1830,&l_2493[6][4]},{&g_26,&g_2003,(void*)0,(void*)0,&g_480},{&g_480,&g_2003,&g_26,&g_2003,&g_2003},{&g_2003,&g_26,&g_2003,&g_480,(void*)0},{&g_480,&g_26,&g_1830,&l_2493[4][7],&l_2493[0][6]},{&g_26,&l_2493[4][6],&g_480,&g_26,&g_1830},{&g_1830,&l_2493[4][7],&g_480,(void*)0,&l_2493[2][7]},{&l_2493[4][6],&g_26,&g_480,&l_2493[6][4],&g_1830}}};
                int i, j, k;
                ++l_2729;
                return p_3;
            }
            (*g_567) ^= (safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((-5L), p_3)) && (g_2738 , ((**g_1902) == ((*l_2631) , l_2506)))), l_2729));
            (*l_2631) = 0x60F22255L;
            (*l_2631) = (safe_mul_func_int16_t_s_s((g_2741 == l_2742[0]), (p_3 | 0xBFDEDE55616D7272LL)));
        }
    }
    l_2745[7][3]++;
    return p_3;
}







static union U3 func_8(int64_t p_9)
{
    uint64_t *l_2070 = &g_1294;
    int32_t l_2074 = 0x470800A1L;
    uint8_t ***l_2079 = (void*)0;
    union U3 l_2082 = {0x5A2A6E3137CFAC1BLL};
    int32_t *l_2097 = &l_2074;
    int32_t l_2109 = 0x36ADF916L;
    int32_t l_2110 = 0xD4C6F115L;
    int32_t l_2111 = 1L;
    int32_t l_2113 = 0L;
    int32_t l_2153 = (-1L);
    int32_t l_2154 = 0x8C95E93EL;
    union U6 l_2165 = {-4L};
    struct S1 l_2234 = {0x229B0208L,2L};
    uint8_t l_2240 = 0UL;
    union U9 l_2254 = {0x7E1BL};
    uint8_t l_2273 = 6UL;
    union U9 *l_2279 = &g_188;
    uint32_t l_2403[5][1] = {{4UL},{0x50AB3EE3L},{4UL},{0x50AB3EE3L},{4UL}};
    struct S2 *l_2416 = &g_108;
    uint16_t l_2438 = 0x2390L;
    uint32_t l_2456 = 0x4DA0A32AL;
    int32_t l_2482 = (-1L);
    int32_t l_2483[9] = {0x8B280C1AL,0x8B280C1AL,0x8B280C1AL,0x8B280C1AL,0x8B280C1AL,0x8B280C1AL,0x8B280C1AL,0x8B280C1AL,0x8B280C1AL};
    int32_t l_2486 = 1L;
    uint32_t l_2487[9];
    int i, j;
    for (i = 0; i < 9; i++)
        l_2487[i] = 0xFD5737EEL;
    for (g_1517.f0.f0 = 0; (g_1517.f0.f0 >= 36); ++g_1517.f0.f0)
    {
        union U5 l_2069 = {-6L};
        struct S0 l_2073 = {-1773,3282,7601,6665,1215,1664,2008,62};
        uint16_t l_2114[7][4];
        int32_t l_2149 = 1L;
        int32_t l_2150 = 0x6D5D01F5L;
        int32_t l_2151 = 7L;
        int32_t l_2152 = 0x67970FCAL;
        int32_t l_2155 = (-9L);
        int32_t l_2156[2];
        union U6 *l_2214[8][6] = {{&l_2165,&g_206[0][4][0],&g_206[0][4][0],&l_2165,&l_2165,(void*)0},{&l_2165,&l_2165,(void*)0,&g_206[6][8][1],&g_206[0][4][0],(void*)0},{&g_206[6][8][1],&l_2165,&g_206[0][4][0],&l_2165,&g_206[0][4][0],&l_2165},{&g_206[6][8][1],&l_2165,(void*)0,&l_2165,&l_2165,&g_206[0][4][0]},{&g_206[6][8][1],&g_206[0][4][0],(void*)0,&g_206[6][8][1],&l_2165,&l_2165},{&l_2165,&g_206[0][4][0],&g_206[0][4][0],&l_2165,&l_2165,(void*)0},{&l_2165,&l_2165,(void*)0,&g_206[6][8][1],&g_206[0][4][0],(void*)0},{&g_206[6][8][1],&l_2165,&g_206[0][4][0],&l_2165,&g_206[0][4][0],&l_2165}};
        union U6 ** const l_2213 = &l_2214[6][4];
        struct S2 *l_2223 = &g_2224;
        union U8 l_2225 = {0};
        struct S1 l_2233 = {0xFA536CA9L,0x47FA8275L};
        const int32_t *l_2308 = &g_1517.f0.f1;
        union U3 *l_2322 = &g_1244[6][2];
        union U4 *l_2325[10][3][4] = {{{&g_750[0][6][0],&g_750[2][4][0],&g_750[4][2][0],&g_750[4][2][0]},{&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0]},{(void*)0,&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0]}},{{&g_750[4][2][0],&g_750[8][2][0],&g_750[4][2][0],&g_750[0][6][0]},{(void*)0,&g_750[1][3][0],&g_750[4][2][0],&g_750[1][4][0]},{(void*)0,&g_750[6][0][0],&g_750[4][2][0],&g_750[4][2][0]}},{{&g_750[4][2][0],&g_750[1][4][0],&g_750[4][2][0],&g_750[4][2][0]},{(void*)0,&g_750[4][2][0],&g_750[4][2][0],&g_750[2][0][0]},{&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0],&g_750[6][0][0]}},{{&g_750[0][6][0],&g_750[4][2][0],&g_750[4][2][0],(void*)0},{&g_750[2][0][0],(void*)0,&g_750[8][2][0],&g_750[1][2][0]},{&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0]}},{{(void*)0,(void*)0,&g_750[5][5][0],&g_750[4][2][0]},{&g_750[4][2][0],&g_750[6][5][0],&g_750[4][2][0],&g_750[4][2][0]},{(void*)0,&g_750[4][2][0],(void*)0,&g_750[4][2][0]}},{{&g_750[3][1][0],&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0]},{&g_750[4][2][0],&g_750[6][5][0],&g_750[1][4][0],&g_750[4][2][0]},{&g_750[1][5][0],(void*)0,&g_750[3][1][0],&g_750[4][2][0]}},{{&g_750[8][2][0],&g_750[4][2][0],&g_750[2][4][0],&g_750[1][2][0]},{&g_750[5][5][0],(void*)0,&g_750[4][2][0],(void*)0},{&g_750[4][2][0],&g_750[4][2][0],&g_750[1][5][0],&g_750[6][0][0]}},{{&g_750[4][2][0],&g_750[4][2][0],&g_750[3][4][0],&g_750[2][0][0]},{&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0]},{&g_750[2][4][0],&g_750[1][4][0],(void*)0,&g_750[4][2][0]}},{{&g_750[6][5][0],&g_750[6][0][0],&g_750[4][2][0],&g_750[1][4][0]},{&g_750[4][2][0],&g_750[1][3][0],&g_750[4][2][0],&g_750[0][6][0]},{&g_750[6][5][0],&g_750[8][2][0],(void*)0,&g_750[4][2][0]}},{{&g_750[2][4][0],&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0]},{&g_750[4][2][0],&g_750[4][2][0],&g_750[3][4][0],&g_750[4][2][0]},{&g_750[4][2][0],&g_750[2][4][0],&g_750[1][5][0],&g_750[4][2][0]}}};
        union U4 **l_2324 = &l_2325[0][1][2];
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 4; j++)
                l_2114[i][j] = 0x76C7L;
        }
        for (i = 0; i < 2; i++)
            l_2156[i] = 1L;
    }
    for (g_97.f1 = 0; (g_97.f1 < 23); ++g_97.f1)
    {
        int8_t ***l_2342 = &g_334[0][2][1];
        int32_t l_2377 = 0L;
        int32_t l_2378[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        int8_t l_2387 = (-4L);
        int16_t ***l_2392[9];
        uint8_t l_2439[3];
        union U3 l_2441 = {0xA6C5B2D2D59D7172LL};
        struct S0 **l_2455[3];
        int i;
        for (i = 0; i < 9; i++)
            l_2392[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_2439[i] = 9UL;
        for (i = 0; i < 3; i++)
            l_2455[i] = &g_455;
        for (g_554.f0 = 0; (g_554.f0 >= 0); g_554.f0 -= 1)
        {
            int32_t *l_2338 = &l_2153;
            int64_t l_2346 = 1L;
            int32_t l_2350 = 0xB56A9FD1L;
            int32_t l_2353 = 0L;
            int32_t l_2359 = 0x7E46ACBDL;
            int32_t l_2360 = (-1L);
            uint64_t l_2362 = 7UL;
            int16_t ***l_2391 = &g_280;
            int16_t l_2398 = (-1L);
            struct S1 l_2407 = {0x66AD1BECL,0x329FD5D0L};
        }
    }
    for (g_673 = 20; (g_673 == (-27)); --g_673)
    {
        uint32_t l_2464 = 4294967289UL;
        int32_t l_2467 = 0xD15DDF07L;
        int32_t *l_2468 = &g_480;
        int32_t *l_2469 = &l_2113;
        int32_t *l_2470 = &l_2113;
        int32_t *l_2471 = &l_2110;
        int32_t *l_2472 = (void*)0;
        int32_t *l_2473 = (void*)0;
        int32_t *l_2474 = &g_1830;
        int32_t *l_2475 = (void*)0;
        int32_t l_2476 = 0L;
        int32_t *l_2477 = (void*)0;
        int32_t *l_2478 = &g_26;
        int32_t *l_2479 = (void*)0;
        int32_t *l_2480 = &l_2467;
        int32_t *l_2481[3];
        int32_t l_2484 = 2L;
        int64_t l_2485 = 0xF0AF7EE29AD13BCELL;
        int i;
        for (i = 0; i < 3; i++)
            l_2481[i] = &l_2476;
        for (g_1812 = (-17); (g_1812 > 6); g_1812 = safe_add_func_uint32_t_u_u(g_1812, 1))
        {
            int32_t *l_2461 = &l_2110;
            int32_t *l_2462 = &l_2111;
            int32_t *l_2463[8][10] = {{&g_480,&g_1830,&g_480,&g_1830,(void*)0,&g_2003,&g_26,&l_2110,&l_2154,&g_480},{&g_26,&g_1830,&l_2153,&l_2110,&l_2111,(void*)0,&g_1830,(void*)0,&l_2154,&l_2153},{&g_2003,&g_480,&l_2111,&g_1830,&l_2074,(void*)0,(void*)0,&l_2074,&g_1830,&l_2111},{&g_26,&g_26,&l_2111,&g_26,(void*)0,&g_2003,&g_480,(void*)0,(void*)0,&l_2111},{&g_480,&g_2003,&l_2153,&g_26,&l_2074,&g_480,&g_480,&l_2110,&g_26,&l_2153},{&g_1830,&g_26,&g_480,&g_26,&l_2111,&g_480,(void*)0,&g_480,(void*)0,&g_480},{&g_1830,&g_480,(void*)0,&g_26,(void*)0,&g_480,&g_1830,&g_480,&g_1830,(void*)0},{&g_480,&g_1830,&g_480,&g_1830,(void*)0,&g_2003,&g_26,&l_2110,&l_2154,&g_480}};
            int i, j;
            l_2464--;
        }
        ++l_2487[0];
    }
    return l_2082;
}







static uint64_t func_15(int8_t * const p_16, union U8 p_17)
{
    int32_t *l_2054[4] = {&g_26,&g_26,&g_26,&g_26};
    int8_t l_2055 = 1L;
    uint32_t l_2056 = 0x64E3AEFEL;
    uint64_t ***l_2060[7][4][7] = {{{&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059},{(void*)0,&g_2059,(void*)0,&g_2059,&g_2059,&g_2059,(void*)0},{&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059},{&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059}},{{&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059},{&g_2059,&g_2059,(void*)0,&g_2059,&g_2059,&g_2059,&g_2059},{&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059},{&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059}},{{&g_2059,&g_2059,(void*)0,&g_2059,&g_2059,&g_2059,&g_2059},{&g_2059,&g_2059,(void*)0,&g_2059,(void*)0,&g_2059,&g_2059},{&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059},{&g_2059,&g_2059,(void*)0,&g_2059,&g_2059,(void*)0,&g_2059}},{{&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059},{(void*)0,&g_2059,(void*)0,&g_2059,&g_2059,&g_2059,(void*)0},{&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059},{&g_2059,&g_2059,(void*)0,&g_2059,&g_2059,&g_2059,&g_2059}},{{&g_2059,&g_2059,(void*)0,(void*)0,&g_2059,&g_2059,&g_2059},{(void*)0,&g_2059,&g_2059,&g_2059,(void*)0,&g_2059,(void*)0},{&g_2059,(void*)0,&g_2059,&g_2059,(void*)0,&g_2059,&g_2059},{&g_2059,&g_2059,(void*)0,(void*)0,&g_2059,(void*)0,(void*)0}},{{&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059},{(void*)0,&g_2059,(void*)0,&g_2059,(void*)0,&g_2059,(void*)0},{(void*)0,&g_2059,(void*)0,(void*)0,&g_2059,&g_2059,&g_2059},{&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059}},{{&g_2059,(void*)0,(void*)0,&g_2059,(void*)0,&g_2059,&g_2059},{(void*)0,&g_2059,(void*)0,&g_2059,(void*)0,(void*)0,(void*)0},{&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059,&g_2059},{&g_2059,(void*)0,(void*)0,&g_2059,&g_2059,(void*)0,&g_2059}}};
    int i, j, k;
    l_2056++;
    g_2059 = g_2059;
    return g_679.f4;
}







static int8_t * const func_18(int32_t p_19)
{
    union U9 l_24 = {-1L};
    int32_t *l_25 = &g_26;
    int32_t **l_2052[7][2][7];
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
                l_2052[i][j][k] = &g_567;
        }
    }
    g_567 = func_20(l_24, l_25, func_27(((void*)0 == &g_26)));
    return (*g_335);
}







static int32_t * func_20(union U9 p_21, int32_t * p_22, int32_t * p_23)
{
    const int8_t l_1473[9][4] = {{8L,0x02L,0x82L,0x82L},{0L,0L,0xADL,(-2L)},{0L,0L,0x82L,0L},{8L,(-2L),8L,0x82L},{0x02L,(-2L),0xADL,0L},{(-2L),0L,0L,(-2L)},{8L,0L,0L,0x82L},{(-2L),0x02L,0xADL,0x02L},{0x02L,0L,8L,0x02L}};
    struct S1 l_1475 = {0xB82A8391L,-5L};
    uint8_t * const *l_1478 = (void*)0;
    int32_t *l_1481 = &g_480;
    uint16_t l_1540 = 0x0B24L;
    uint32_t l_1545 = 0xB5342014L;
    union U4 *l_1568[6] = {&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0]};
    union U5 **l_1591 = &g_1587;
    union U7 l_1592[5] = {{{0x5A01B126L,0xA3A3F1ADL}},{{0x5A01B126L,0xA3A3F1ADL}},{{0x5A01B126L,0xA3A3F1ADL}},{{0x5A01B126L,0xA3A3F1ADL}},{{0x5A01B126L,0xA3A3F1ADL}}};
    union U5 * const *l_1593 = &g_1587;
    int32_t l_1641 = (-1L);
    int32_t l_1642 = 0x2C53CE14L;
    int32_t l_1643 = 0xE387DE2AL;
    int32_t *l_1653 = &l_1643;
    int8_t l_1738 = 0L;
    uint32_t l_1755 = 0xBB470E5FL;
    int32_t l_1808 = 0xA48ADACEL;
    struct S1 l_1838 = {0xC43DFC6AL,-4L};
    union U8 l_1843[6] = {{0},{0},{0},{0},{0},{0}};
    union U3 *l_1851[7] = {&g_1244[6][2],(void*)0,(void*)0,&g_1244[6][2],(void*)0,(void*)0,&g_1244[6][2]};
    union U3 *l_1852 = &g_1244[6][2];
    uint8_t l_1857 = 0xBBL;
    int8_t l_1886 = 0xBAL;
    uint16_t l_1911 = 0x7411L;
    int8_t l_1977 = 1L;
    int32_t l_1985 = 0x5635E3A7L;
    int32_t l_1987 = 1L;
    int32_t l_1989 = 0x63284876L;
    int32_t l_1990 = 1L;
    int32_t l_1991 = 0x9789E22AL;
    int32_t l_1992[8] = {0x7A22E849L,0x7A22E849L,0x7A22E849L,0x7A22E849L,0x7A22E849L,0x7A22E849L,0x7A22E849L,0x7A22E849L};
    uint8_t l_2047[2];
    struct S0 ****l_2051 = &g_1324;
    struct S0 *****l_2050 = &l_2051;
    int i, j;
    for (i = 0; i < 2; i++)
        l_2047[i] = 0xCDL;
    if ((safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s(p_21.f0, p_21.f1)) >= l_1473[1][3]) & (((**g_1032) = (g_188 , (safe_unary_minus_func_uint32_t_u((l_1475 , g_207.f1))))) <= (g_730[0][1] &= (((l_1475.f0 & (l_1473[1][3] && (safe_mod_func_int16_t_s_s((l_1478 == &g_212[6][3][0]), p_21.f1)))) , 18446744073709551615UL) & 0xA8EF764251BC2D99LL)))) || p_21.f1), 0x53L)), p_21.f0)))
    {
        uint64_t *l_1494 = &g_137;
        int64_t *l_1499 = (void*)0;
        int32_t l_1504[2][5] = {{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-1L),0L,(-1L),0L,(-1L)}};
        int32_t l_1507 = 0x85A6AD90L;
        int i, j;
        (*l_1481) = (safe_mul_func_int8_t_s_s((func_39(l_1481) , (safe_sub_func_uint32_t_u_u(g_610.f2, (*g_567)))), (safe_add_func_int8_t_s_s(g_1486, 0xBCL))));
        l_1507 |= (((((((*p_23) < (safe_sub_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((g_1491 , (p_21.f0 | (0xCE2CA51691493035LL == ((*l_1481) ^ (((*l_1494)++) | (safe_mul_func_uint8_t_u_u(0x4EL, ((g_750[4][2][0].f2 = g_601[0]) && (((safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u(l_1504[1][3], 7)) == ((safe_add_func_int64_t_s_s(0x1DE323CF153609C6LL, g_226)) ^ (**g_1032))), g_108.f6)) != (*l_1481)) & 0L))))))))), (*l_1481))) | (*l_1481)), g_608.f2))) > l_1504[1][3]) < g_1294) && p_21.f0) < l_1504[1][3]) || p_21.f1);
    }
    else
    {
        uint8_t l_1518 = 4UL;
        int32_t l_1530 = 0xEC8162AEL;
        int32_t l_1538 = 5L;
        int32_t l_1548 = 0x052C9700L;
        struct S1 l_1556 = {0x3F03ED4AL,0x895777E9L};
        int16_t l_1573 = (-1L);
        const int32_t l_1576 = 0x3D4DBB49L;
        int16_t **l_1651 = &g_281;
        int32_t *l_1656 = &l_1642;
        struct S0 l_1669 = {-23164,3702,182,8109,868,-2386,39,562};
        struct S2 l_1696 = {8,99,-1,19,0,91,-634,0,3186};
        int8_t *l_1714 = (void*)0;
        union U6 l_1784[8][4][7] = {{{{-5L},{-9L},{-9L},{-5L},{-5L},{-9L},{-9L}},{{-1L},{-10L},{-1L},{-10L},{-1L},{-10L},{-1L}},{{-5L},{-5L},{-9L},{-9L},{-5L},{-5L},{-9L}},{{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL}}},{{{-5L},{-9L},{-9L},{-5L},{-5L},{-9L},{-9L}},{{-1L},{-10L},{-1L},{-10L},{-1L},{-10L},{-1L}},{{-5L},{-5L},{-9L},{-9L},{-5L},{-5L},{-9L}},{{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL}}},{{{-5L},{-9L},{-9L},{-5L},{-5L},{-9L},{-9L}},{{-1L},{-10L},{-1L},{-10L},{-1L},{-10L},{-1L}},{{-5L},{-5L},{-9L},{-9L},{-5L},{-5L},{-9L}},{{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL}}},{{{-5L},{-9L},{-9L},{-5L},{-5L},{-9L},{-9L}},{{-1L},{-10L},{-1L},{-10L},{-1L},{-10L},{-1L}},{{-5L},{-5L},{-9L},{-9L},{-5L},{-5L},{-9L}},{{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL}}},{{{-5L},{-9L},{-9L},{-5L},{-5L},{-9L},{-9L}},{{-1L},{-10L},{-1L},{-10L},{-1L},{-10L},{-1L}},{{-5L},{-5L},{-9L},{-9L},{-5L},{-5L},{-9L}},{{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL}}},{{{-5L},{-9L},{-9L},{-5L},{-5L},{-9L},{-9L}},{{-1L},{-10L},{-1L},{-10L},{-1L},{-10L},{-1L}},{{-5L},{-5L},{-9L},{-9L},{-5L},{-5L},{-9L}},{{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL}}},{{{-5L},{-9L},{-9L},{-5L},{-5L},{-9L},{-9L}},{{-1L},{-10L},{-1L},{-10L},{-1L},{-10L},{-1L}},{{-5L},{-5L},{-9L},{-9L},{-5L},{-5L},{-9L}},{{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL}}},{{{-5L},{-9L},{-9L},{-5L},{-5L},{-9L},{-9L}},{{-1L},{-10L},{-1L},{-10L},{-1L},{-10L},{-1L}},{{-5L},{-5L},{-9L},{-9L},{-5L},{-5L},{-9L}},{{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL},{-10L},{0xB06EE4FBL}}}};
        uint32_t l_1861[3];
        uint16_t ***l_1892 = &g_1032;
        int32_t l_1939 = 0x7579B3F7L;
        int32_t l_2004[7] = {8L,8L,8L,8L,8L,8L,8L};
        uint32_t l_2037[9][10][2] = {{{0x4F397A9AL,0x6F4B96CAL},{4294967291UL,0x3067F082L},{0x18AD1CE8L,0x18AD1CE8L},{1UL,4294967290UL},{1UL,0UL},{0x47AD0C7BL,1UL},{0UL,0x47AD0C7BL},{0x7522CEE2L,4294967295UL},{0x7522CEE2L,0x47AD0C7BL},{0UL,1UL}},{{0x47AD0C7BL,0UL},{1UL,4294967290UL},{1UL,0x18AD1CE8L},{0x18AD1CE8L,0x3067F082L},{4294967291UL,0x6F4B96CAL},{0x4F397A9AL,7UL},{0UL,4294967287UL},{4UL,0x301283CFL},{8UL,0UL},{0x5BBFF972L,2UL}},{{0xCD0DD733L,0x8D1B63CDL},{0UL,0x8A8B9FD5L},{0UL,0x783B45A0L},{4294967290UL,4294967291UL},{0UL,0UL},{0UL,8UL},{0UL,0x19BB979FL},{0xC520C0A9L,0x2BB3EE51L},{0x8A8B9FD5L,0x58AB50BDL},{0x7A4935B7L,0x57EB22E6L}},{{4294967291UL,0x161C209EL},{0x3067F082L,4294967295UL},{4294967295UL,0x3E9898C0L},{0xD0AB3997L,0x7A4935B7L},{0xE70B76EFL,1UL},{8UL,0x5BBFF972L},{1UL,0x4D6C7EAFL},{0xE1400C82L,4294967295UL},{0x6F4B96CAL,4UL},{0x4D6C7EAFL,4294967295UL}},{{0x0F7D7421L,0UL},{0x9F5625EDL,0xD0AB3997L},{0x0605C3D4L,0x3AE70D2AL},{9UL,0x61B039C2L},{0xAB963752L,0x61B039C2L},{9UL,0x3AE70D2AL},{0x0605C3D4L,0xD0AB3997L},{0x9F5625EDL,0UL},{0x0F7D7421L,4294967295UL},{0x4D6C7EAFL,4UL}},{{0x6F4B96CAL,4294967295UL},{0xE1400C82L,0x4D6C7EAFL},{1UL,0x5BBFF972L},{8UL,1UL},{0xE70B76EFL,0x7A4935B7L},{0xD0AB3997L,0x3E9898C0L},{4294967295UL,4294967295UL},{0x3067F082L,0x161C209EL},{4294967291UL,0x57EB22E6L},{0x7A4935B7L,0x58AB50BDL}},{{0x8A8B9FD5L,0x2BB3EE51L},{0xC520C0A9L,0x19BB979FL},{0UL,8UL},{0UL,0UL},{0UL,4294967291UL},{4294967290UL,0x783B45A0L},{0UL,0x8A8B9FD5L},{0UL,0x8D1B63CDL},{0xCD0DD733L,2UL},{0x5BBFF972L,0UL}},{{8UL,0x301283CFL},{4UL,4294967287UL},{0UL,7UL},{0x4F397A9AL,0x6F4B96CAL},{4294967291UL,0x3067F082L},{0x18AD1CE8L,0x18AD1CE8L},{1UL,4294967290UL},{1UL,0UL},{0x47AD0C7BL,1UL},{0UL,0x47AD0C7BL}},{{0x7522CEE2L,4294967295UL},{0x7522CEE2L,0x47AD0C7BL},{0UL,0x19BB979FL},{1UL,0x47AD0C7BL},{1UL,4294967287UL},{1UL,0x0605C3D4L},{0x0605C3D4L,0UL},{0x0F7D7421L,0x3E9898C0L},{1UL,4294967290UL},{0UL,4294967295UL}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1861[i] = 0x4E28CC65L;
        for (g_88 = 26; (g_88 == 28); ++g_88)
        {
            union U7 *l_1514 = &g_611;
            int32_t l_1543[4][4][6] = {{{0x9EF9B64CL,0xB56E1769L,0x9EF9B64CL,0L,3L,0x9EF9B64CL},{(-9L),1L,0L,0xDB2EF42DL,3L,(-9L)},{0L,0xB56E1769L,0xDB2EF42DL,0xDB2EF42DL,0xB56E1769L,0L},{(-9L),3L,0xDB2EF42DL,0L,1L,(-9L)}},{{0x9EF9B64CL,3L,0L,0x9EF9B64CL,0xB56E1769L,0x9EF9B64CL},{0x9EF9B64CL,0xB56E1769L,0x9EF9B64CL,0L,3L,0x9EF9B64CL},{(-9L),1L,0L,0xDB2EF42DL,3L,(-9L)},{0L,0xB56E1769L,0xDB2EF42DL,0xDB2EF42DL,0xB56E1769L,0L}},{{(-9L),3L,0xDB2EF42DL,0L,1L,(-9L)},{0x9EF9B64CL,3L,0L,0x9EF9B64CL,0xB56E1769L,0x9EF9B64CL},{0x9EF9B64CL,0xB56E1769L,0x9EF9B64CL,0L,3L,0x9EF9B64CL},{(-9L),1L,0L,0xDB2EF42DL,3L,(-9L)}},{{0L,0xB56E1769L,0xDB2EF42DL,0xDB2EF42DL,0xB56E1769L,0L},{(-9L),3L,0xDB2EF42DL,0L,1L,(-9L)},{0x9EF9B64CL,3L,0L,0x9EF9B64CL,0xB56E1769L,0x9EF9B64CL},{0x9EF9B64CL,0xB56E1769L,0x9EF9B64CL,0L,3L,0x9EF9B64CL}}};
            struct S1 l_1567 = {2UL,0x85CA7F27L};
            int32_t l_1603 = 0x3BF2302BL;
            uint8_t l_1633 = 5UL;
            const union U4 *l_1664[9][2][4] = {{{&g_750[4][2][0],&g_750[4][2][0],(void*)0,&g_750[4][2][0]},{&g_750[8][0][0],&g_750[4][2][0],&g_750[8][0][0],(void*)0}},{{&g_750[8][0][0],(void*)0,(void*)0,&g_750[8][0][0]},{&g_750[4][2][0],(void*)0,&g_750[4][2][0],(void*)0}},{{(void*)0,&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0]},{&g_750[4][2][0],&g_750[4][2][0],(void*)0,&g_750[4][2][0]}},{{&g_750[8][0][0],&g_750[4][2][0],&g_750[8][0][0],(void*)0},{&g_750[8][0][0],(void*)0,(void*)0,&g_750[8][0][0]}},{{&g_750[4][2][0],(void*)0,&g_750[4][2][0],(void*)0},{(void*)0,&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0]}},{{&g_750[4][2][0],&g_750[4][2][0],(void*)0,&g_750[4][2][0]},{&g_750[8][0][0],&g_750[4][2][0],&g_750[8][0][0],(void*)0}},{{&g_750[8][0][0],(void*)0,(void*)0,&g_750[8][0][0]},{&g_750[4][2][0],(void*)0,&g_750[4][2][0],(void*)0}},{{(void*)0,&g_750[4][2][0],&g_750[4][2][0],&g_750[4][2][0]},{&g_750[4][2][0],&g_750[4][2][0],(void*)0,&g_750[4][2][0]}},{{&g_750[8][0][0],&g_750[4][2][0],&g_750[8][0][0],(void*)0},{&g_750[8][0][0],(void*)0,(void*)0,&g_750[8][0][0]}}};
            const union U4 * const *l_1663 = &l_1664[2][0][3];
            int8_t * const l_1670 = &g_60;
            union U5 l_1677[8][1] = {{{0x0D18025C365CE313LL}},{{0x0D18025C365CE313LL}},{{0x0D18025C365CE313LL}},{{0x0D18025C365CE313LL}},{{0x0D18025C365CE313LL}},{{0x0D18025C365CE313LL}},{{0x0D18025C365CE313LL}},{{0x0D18025C365CE313LL}}};
            struct S2 l_1704[8] = {{7,1377,-11,75,-0,87,-796,-2,3617},{7,1377,-11,75,-0,87,-796,-2,3617},{7,1377,-11,75,-0,87,-796,-2,3617},{7,1377,-11,75,-0,87,-796,-2,3617},{7,1377,-11,75,-0,87,-796,-2,3617},{7,1377,-11,75,-0,87,-796,-2,3617},{7,1377,-11,75,-0,87,-796,-2,3617},{7,1377,-11,75,-0,87,-796,-2,3617}};
            int32_t *l_1722 = &l_1643;
            union U9 * const l_1741 = &g_188;
            uint64_t *l_1770 = &g_1294;
            uint8_t *l_1785[6][6][3] = {{{&l_1633,&g_213,&l_1518},{&g_213,(void*)0,&g_213},{&g_213,(void*)0,(void*)0},{(void*)0,(void*)0,&g_213},{&g_213,&l_1633,(void*)0},{&l_1633,(void*)0,&g_213}},{{&g_213,&l_1518,(void*)0},{(void*)0,&l_1518,&l_1518},{&l_1633,(void*)0,(void*)0},{&l_1518,&l_1633,&l_1633},{&l_1633,(void*)0,&l_1633},{&g_213,(void*)0,&g_213}},{{&l_1518,(void*)0,&g_213},{(void*)0,&g_213,&l_1633},{(void*)0,&g_213,&g_213},{(void*)0,&g_213,(void*)0},{&l_1518,&g_213,&g_213},{&g_213,&g_213,&l_1518}},{{&l_1633,&l_1518,&g_213},{&l_1518,&g_213,&g_213},{&l_1633,&g_213,(void*)0},{(void*)0,&g_213,(void*)0},{&g_213,&l_1633,&g_213},{&l_1633,&g_213,&g_213}},{{&g_213,&l_1518,&l_1518},{(void*)0,&g_213,&g_213},{&g_213,(void*)0,(void*)0},{&g_213,&g_213,&g_213},{&l_1633,&l_1633,&l_1633},{&g_213,&g_213,&g_213}},{{&g_213,(void*)0,&g_213},{&l_1633,&g_213,&l_1633},{&g_213,&l_1518,&l_1633},{&g_213,&g_213,(void*)0},{&g_213,&l_1633,&l_1518},{(void*)0,&g_213,(void*)0}}};
            uint32_t l_1786 = 0x3FFC9E1FL;
            uint32_t l_1796 = 4294967295UL;
            int64_t l_1816 = 0xE5E18C3483226C51LL;
            uint16_t l_1859 = 0xCFFDL;
            uint64_t l_1889 = 18446744073709551615UL;
            uint8_t ***l_1904[10][8] = {{&g_1903[1],&g_1903[0],(void*)0,&g_1903[0],&g_1903[1],&g_1903[0],(void*)0,&g_1903[0]},{&g_1903[1],&g_1903[0],(void*)0,&g_1903[0],&g_1903[1],&g_1903[0],(void*)0,&g_1903[0]},{&g_1903[1],&g_1903[0],(void*)0,&g_1903[0],&g_1903[1],&g_1903[0],(void*)0,&g_1903[0]},{&g_1903[1],&g_1903[0],(void*)0,&g_1903[0],&g_1903[1],&g_1903[0],(void*)0,&g_1903[0]},{&g_1903[1],&g_1903[0],(void*)0,&g_1903[0],&g_1903[1],&g_1903[0],(void*)0,&g_1903[0]},{&g_1903[1],&g_1903[0],(void*)0,&g_1903[0],&g_1903[1],&g_1903[0],(void*)0,&g_1903[0]},{&g_1903[1],&g_1903[0],(void*)0,&g_1903[0],&g_1903[1],&g_1903[0],(void*)0,&g_1903[0]},{&g_1903[1],&g_1903[0],(void*)0,&g_1903[0],&g_1903[1],&g_1903[0],(void*)0,&g_1903[0]},{&g_1903[1],&g_1903[0],(void*)0,&g_1903[0],&g_1903[1],&g_1903[0],(void*)0,&g_1903[0]},{&g_1903[1],&g_1903[0],(void*)0,&g_1903[0],&g_1903[1],&g_1903[0],(void*)0,&g_1903[0]}};
            union U6 *l_1951 = &g_206[1][2][0];
            uint16_t l_1975 = 0x6FA9L;
            int8_t l_1976[2][10] = {{(-1L),0xE7L,7L,7L,0xE7L,(-1L),0xE7L,7L,7L,0xE7L},{(-1L),0xE7L,7L,7L,0xE7L,(-1L),0xE7L,7L,7L,0xE7L}};
            int i, j, k;
            for (g_213 = 19; (g_213 <= 22); g_213++)
            {
                union U7 *l_1516 = &g_1517;
                struct S1 l_1521[4][6][2] = {{{{18446744073709551615UL,0x9E3A9FD5L},{18446744073709551612UL,0xC0BBF73CL}},{{18446744073709551615UL,0x9E3A9FD5L},{0xDB86A1EAL,3L}},{{0x7B0EB6B6L,9L},{0xDB86A1EAL,3L}},{{18446744073709551615UL,0x9E3A9FD5L},{18446744073709551612UL,0xC0BBF73CL}},{{18446744073709551615UL,0x9E3A9FD5L},{0xDB86A1EAL,3L}},{{0x7B0EB6B6L,9L},{0xDB86A1EAL,3L}}},{{{18446744073709551615UL,0x9E3A9FD5L},{18446744073709551612UL,0xC0BBF73CL}},{{18446744073709551615UL,0x9E3A9FD5L},{0xDB86A1EAL,3L}},{{0x7B0EB6B6L,9L},{0xDB86A1EAL,3L}},{{18446744073709551615UL,0x9E3A9FD5L},{18446744073709551612UL,0xC0BBF73CL}},{{18446744073709551615UL,0x9E3A9FD5L},{0xDB86A1EAL,3L}},{{0x7B0EB6B6L,9L},{0xDB86A1EAL,3L}}},{{{18446744073709551615UL,0x9E3A9FD5L},{18446744073709551612UL,0xC0BBF73CL}},{{18446744073709551615UL,0x9E3A9FD5L},{0xDB86A1EAL,3L}},{{0x7B0EB6B6L,9L},{0xDB86A1EAL,3L}},{{18446744073709551615UL,0x9E3A9FD5L},{18446744073709551612UL,0xC0BBF73CL}},{{18446744073709551615UL,0x9E3A9FD5L},{0xDB86A1EAL,3L}},{{0x7B0EB6B6L,9L},{0xDB86A1EAL,3L}}},{{{18446744073709551615UL,0x9E3A9FD5L},{18446744073709551612UL,0xC0BBF73CL}},{{18446744073709551615UL,0x9E3A9FD5L},{0xDB86A1EAL,3L}},{{0x7B0EB6B6L,9L},{0xDB86A1EAL,3L}},{{18446744073709551615UL,0x9E3A9FD5L},{18446744073709551612UL,0xC0BBF73CL}},{{18446744073709551615UL,0x9E3A9FD5L},{0xDB86A1EAL,3L}},{{0x7B0EB6B6L,9L},{0xDB86A1EAL,3L}}}};
                int32_t l_1524 = 0xE4151317L;
                int32_t l_1526 = 1L;
                int32_t l_1535 = 0x9B5460EDL;
                union U9 l_1557[8][9][3] = {{{{0xD025L},{6L},{2L}},{{0x25AFL},{-4L},{0x0558L}},{{0x0F98L},{6L},{0L}},{{0xC982L},{0xAD11L},{0xFCB0L}},{{0xB2A0L},{0xAF6CL},{6L}},{{1L},{0xBA84L},{0xAD11L}},{{0L},{0x52FAL},{0L}},{{0L},{0xF11BL},{0xFCB0L}},{{0x1A12L},{0x06C6L},{0x8010L}}},{{{0xBA84L},{0xC982L},{0x0558L}},{{0xBE28L},{4L},{0xC72CL}},{{0xBA84L},{1L},{-9L}},{{0x1A12L},{-8L},{0x3187L}},{{0L},{1L},{0x1CB9L}},{{0L},{-4L},{-4L}},{{1L},{-9L},{0xFAABL}},{{0xB2A0L},{-8L},{5L}},{{0xC982L},{0x7DA9L},{0xAF7EL}}},{{{0x0F98L},{4L},{0x9C23L}},{{0x25AFL},{0xBBABL},{0xAF7EL}},{{0xD025L},{0x06C6L},{5L}},{{0xA635L},{0x6CCCL},{0xFAABL}},{{0xC72CL},{0x52FAL},{-4L}},{{0L},{0x1CB9L},{0x1CB9L}},{{2L},{0xAF6CL},{0x3187L}},{{0xA635L},{1L},{-9L}},{{0x0217L},{6L},{0xC72CL}}},{{{0x25AFL},{0xFAABL},{0x0558L}},{{0x3187L},{6L},{0x8010L}},{{0xC982L},{1L},{0xFCB0L}},{{0xEC86L},{0xAF6CL},{0L}},{{1L},{0x1CB9L},{0xAD11L}},{{6L},{0x52FAL},{6L}},{{0L},{0x6CCCL},{0xFCB0L}},{{1L},{0x06C6L},{0L}},{{0xBA84L},{0xBBABL},{0x0558L}}},{{{-1L},{4L},{2L}},{{0xBA84L},{0x7DA9L},{-9L}},{{1L},{-8L},{0x0F98L}},{{0x6CCCL},{0xFAABL},{0x585BL}},{{1L},{0x52FAL},{0x1A12L}},{{-4L},{-4L},{0xBBABL}},{{0x0217L},{4L},{-4L}},{{0L},{0xFCB0L},{0xAD11L}},{{0x8010L},{0L},{2L}}},{{{1L},{0L},{0xAD11L}},{{0xBE58L},{0xAF6CL},{-4L}},{{0x25AFL},{1L},{0xBBABL}},{{-1L},{1L},{0x1A12L}},{{1L},{0L},{0x585BL}},{{0xBE28L},{0x287CL},{0L}},{{0x25AFL},{0x1CB9L},{0xFAABL}},{{1L},{-4L},{-1L}},{{1L},{0xC982L},{0L}}},{{{0L},{-4L},{0xEC86L}},{{0L},{0x1CB9L},{0x0558L}},{{0xD025L},{0x287CL},{1L}},{{-4L},{0L},{0x1CB9L}},{{0x9C23L},{1L},{0x9C23L}},{{0x6CCCL},{1L},{0x0558L}},{{6L},{0xAF6CL},{0xB2A0L}},{{0L},{0L},{0L}},{{0x0F98L},{0L},{0xBE28L}}},{{{0L},{0xFCB0L},{0xFAABL}},{{6L},{4L},{0x8010L}},{{0x6CCCL},{-4L},{0x585BL}},{{0x9C23L},{0x52FAL},{1L}},{{-4L},{0xFAABL},{0xBBABL}},{{0xD025L},{4L},{-1L}},{{0L},{0x0581L},{0xAD11L}},{{0L},{0L},{0xC72CL}},{{1L},{0xDF1FL},{0xAD11L}}}};
                struct S1 *l_1566[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t *l_1577 = &g_13;
                union U5 *l_1580 = &g_97;
                int32_t *l_1655[9];
                uint64_t l_1665 = 1UL;
                union U6 l_1681 = {-1L};
                union U4 l_1693 = {0x12351606L};
                const uint64_t l_1737 = 18446744073709551615UL;
                uint16_t l_1763 = 0xCC53L;
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_1655[i] = &l_1543[3][2][2];
                for (g_460 = (-19); (g_460 <= 25); g_460 = safe_add_func_uint16_t_u_u(g_460, 1))
                {
                    struct S1 l_1519[5] = {{0UL,0x81A3A2EDL},{0UL,0x81A3A2EDL},{0UL,0x81A3A2EDL},{0UL,0x81A3A2EDL},{0UL,0x81A3A2EDL}};
                    int32_t l_1528 = (-7L);
                    int32_t l_1539 = 0x48DD930FL;
                    int32_t l_1544 = (-5L);
                    uint32_t l_1549 = 7UL;
                    union U7 *l_1554 = &g_611;
                    int i;
                    for (g_97.f1 = 0; (g_97.f1 <= 0); g_97.f1 += 1)
                    {
                        union U7 **l_1515[9][6][1] = {{{&l_1514},{&l_1514},{&l_1514},{&l_1514},{&l_1514},{&l_1514}},{{&l_1514},{&l_1514},{&l_1514},{&l_1514},{&l_1514},{(void*)0}},{{&l_1514},{&l_1514},{&l_1514},{&l_1514},{&l_1514},{&l_1514}},{{&l_1514},{&l_1514},{&l_1514},{&l_1514},{&l_1514},{&l_1514}},{{(void*)0},{&l_1514},{&l_1514},{&l_1514},{&l_1514},{&l_1514}},{{&l_1514},{&l_1514},{&l_1514},{&l_1514},{&l_1514},{&l_1514}},{{&l_1514},{(void*)0},{&l_1514},{&l_1514},{&l_1514},{&l_1514}},{{&l_1514},{&l_1514},{&l_1514},{&l_1514},{&l_1514},{&l_1514}},{{&l_1514},{&l_1514},{(void*)0},{&l_1514},{&l_1514},{&l_1514}}};
                        int i, j, k;
                        l_1516 = l_1514;
                        if (g_1277[g_97.f1][g_97.f1][(g_97.f1 + 7)])
                            break;
                    }
                    if (((*l_1514) , l_1518))
                    {
                        struct S1 *l_1520[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_1520[i] = &g_1517.f0;
                        l_1521[2][4][0] = l_1519[4];
                    }
                    else
                    {
                        int32_t *l_1522 = &g_26;
                        int32_t *l_1523 = &g_26;
                        int32_t *l_1525 = &g_480;
                        int32_t *l_1527 = &g_480;
                        int32_t *l_1529 = &l_1528;
                        int32_t *l_1531 = &l_1524;
                        int32_t *l_1532 = &g_480;
                        int32_t *l_1533 = &g_480;
                        int32_t *l_1534 = (void*)0;
                        int32_t *l_1536 = &g_480;
                        int32_t *l_1537[3][6] = {{&l_1528,&l_1524,&l_1524,&l_1528,&l_1528,&l_1524},{&l_1528,&l_1528,&l_1524,&l_1524,&l_1528,&l_1528},{&l_1528,&l_1524,&l_1524,&l_1528,&l_1528,&l_1524}};
                        int i, j;
                        ++l_1540;
                        l_1545--;
                        l_1549++;
                    }
                    for (g_136 = (-30); (g_136 > 7); g_136 = safe_add_func_int8_t_s_s(g_136, 4))
                    {
                        union U7 **l_1555 = &l_1516;
                        int16_t *l_1558 = (void*)0;
                        (*l_1555) = l_1554;
                        (*p_22) = ((l_1556 , (void*)0) != ((*g_280) = (l_1557[0][2][1] , l_1558)));
                    }
                }
            }
        }
        return p_23;
    }
    (*l_1653) = ((*p_23) ^= (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((p_21 , (~(((*l_1481) , (((((*g_993) = (void*)0) != (void*)0) , (l_2047[0] = (g_750[6][4][0] , (*g_1901)))) != (0L >= (safe_lshift_func_uint8_t_u_s(p_21.f0, 7))))) < (*l_1481)))), g_750[4][2][0].f0)), p_21.f0)));
    l_2050 = l_2050;
    (**l_2050) = (*l_2051);
    return p_23;
}







static int32_t * func_27(uint64_t p_28)
{
    union U6 l_35[2][2][7] = {{{{0xCE695EF2L},{0xCE695EF2L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0xE525036FL},{0L},{0xE525036FL},{-1L},{0xD35555D5L},{0xE525036FL}}},{{{0xD35555D5L},{0x2FF82244L},{-1L},{-1L},{0x2FF82244L},{0xD35555D5L},{0L}},{{0x2FF82244L},{0xE525036FL},{0xCE695EF2L},{0xF5B04CE9L},{0xF5B04CE9L},{0xCE695EF2L},{0xE525036FL}}}};
    int32_t *l_41[8][9] = {{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26}};
    union U3 l_824 = {0L};
    union U6 l_1068 = {-1L};
    union U6 *l_1069 = &g_206[4][6][0];
    union U4 l_1070 = {0xF7F7A5DFL};
    int i, j, k;
    (*g_567) = func_29(l_35[1][0][3], func_36(func_39(l_41[7][5]), l_824), ((*l_1069) = (l_1068 = l_35[1][0][3])), l_1070, g_94.f7);
    return l_41[3][2];
}







static const int32_t func_29(union U6 p_30, union U8 p_31, union U6 p_32, union U4 p_33, int32_t p_34)
{
    int64_t l_1073 = 1L;
    int32_t *l_1087[5][6] = {{(void*)0,&g_26,&g_26,(void*)0,&g_26,(void*)0},{(void*)0,&g_26,(void*)0,&g_26,&g_26,(void*)0},{&g_26,&g_26,&g_26,(void*)0,&g_26,&g_26},{&g_26,&g_26,&g_26,(void*)0,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26}};
    int64_t *l_1088 = &g_673;
    int32_t ***l_1124 = &g_101;
    uint32_t l_1174[6] = {7UL,0xDB2F171EL,0xDB2F171EL,7UL,0xDB2F171EL,0xDB2F171EL};
    int8_t l_1290 = 0xA8L;
    uint16_t **l_1341 = &g_1033;
    uint16_t **l_1344 = &g_1033;
    int32_t l_1369 = 2L;
    struct S0 l_1386 = {23789,-1146,6828,27575,735,-458,1969,324};
    int16_t * const l_1412 = (void*)0;
    int64_t l_1444 = 0x216861597EC393FALL;
    int i, j;
    if (((((0x4F4E568AE692BF7ELL <= (safe_sub_func_uint32_t_u_u(l_1073, (l_1073 <= 0x535C65C4L)))) < (l_1073 < 0x2BL)) || ((*l_1088) |= (safe_sub_func_uint64_t_u_u((0L ^ (safe_mod_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((g_610.f1 |= (!(safe_add_func_uint64_t_u_u(((((*g_567) = ((safe_add_func_int32_t_s_s(((-1L) <= (l_1073 == l_1073)), l_1073)) <= p_30.f0)) & p_33.f1) == p_30.f0), g_679.f5)))), p_30.f0)), p_33.f0)) >= g_554.f0), 0xCBB2D8EB96C96819LL))), g_679.f1)))) > p_34))
    {
        int32_t l_1095[4][3] = {{0x0184E4D6L,0x0184E4D6L,0x0184E4D6L},{0x6925909AL,0L,0x6925909AL},{0x0184E4D6L,0x0184E4D6L,0x0184E4D6L},{0x6925909AL,0L,0x6925909AL}};
        int32_t l_1098 = 0x00363EAFL;
        union U6 *l_1141[8] = {(void*)0,&g_206[6][8][1],&g_206[6][8][1],(void*)0,&g_206[6][8][1],&g_206[6][8][1],(void*)0,&g_206[6][8][1]};
        int32_t *l_1146 = &g_480;
        struct S1 l_1161 = {1UL,0x45E6887AL};
        struct S0 *l_1182[5][8] = {{&g_94,&g_94,&g_679,&g_94,&g_94,&g_679,&g_94,&g_94},{&g_610,&g_94,&g_610,&g_610,&g_94,&g_610,&g_610,&g_94},{&g_94,&g_610,&g_610,&g_94,&g_610,&g_610,&g_94,&g_610},{&g_94,&g_94,&g_679,&g_94,&g_94,&g_679,&g_94,&g_94},{&g_610,&g_94,&g_610,&g_610,&g_94,&g_610,&g_610,&g_94}};
        struct S2 *l_1187[8][4] = {{&g_108,&g_108,&g_108,&g_108},{&g_108,&g_108,(void*)0,(void*)0},{(void*)0,&g_108,&g_108,&g_108},{&g_108,&g_108,&g_108,&g_108},{&g_108,&g_108,(void*)0,(void*)0},{(void*)0,&g_108,&g_108,&g_108},{&g_108,&g_108,&g_108,&g_108},{(void*)0,&g_108,(void*)0,&g_108}};
        int8_t l_1205 = (-1L);
        int32_t l_1207 = 1L;
        int32_t l_1208 = 0x7EDC3483L;
        int32_t l_1209 = (-3L);
        int32_t l_1210 = 0L;
        int32_t l_1211 = (-10L);
        int32_t l_1212 = 0x1F4BAD3AL;
        int32_t l_1213 = (-6L);
        int32_t l_1214 = 0L;
        int32_t l_1215 = 0x1F72E08BL;
        int32_t l_1216 = 0x92ADFCFEL;
        union U5 l_1245 = {0xA6104C4A3006E87BLL};
        const union U7 *l_1307 = &g_611;
        const union U7 **l_1306[9][7] = {{&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307},{&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307},{&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307},{&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307},{&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307},{&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307},{&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307},{&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307},{&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307}};
        uint64_t l_1313[3];
        struct S0 *** const *l_1326 = &g_1324;
        union U8 l_1329 = {0};
        struct S2 **l_1363 = &l_1187[6][3];
        struct S2 ***l_1362 = &l_1363;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1313[i] = 0xB81AAB662B6BEED1LL;
lbl_1271:
        for (p_32.f2 = 5; (p_32.f2 == (-22)); p_32.f2--)
        {
            uint64_t l_1091 = 0x117122B0CC0F29A1LL;
            uint8_t *l_1094[7][3] = {{&g_213,&g_213,&g_213},{(void*)0,&g_213,(void*)0},{&g_213,&g_213,&g_213},{&g_213,&g_213,&g_213},{&g_213,&g_213,&g_213},{&g_213,(void*)0,&g_213},{&g_213,&g_213,&g_213}};
            int32_t l_1101[9] = {0xF3CC7878L,0xF3CC7878L,0x83813255L,0xF3CC7878L,0xF3CC7878L,0x83813255L,0xF3CC7878L,0xF3CC7878L,0x83813255L};
            int32_t *l_1105 = &g_480;
            const struct S2 *l_1188 = &g_108;
            uint16_t l_1217[10][5] = {{0x43DDL,0x255AL,0xD695L,0x255AL,0x43DDL},{0xEC98L,1UL,0x33B8L,0x4FF1L,0x4FF1L},{0UL,0x255AL,0UL,0UL,0UL},{0xEC98L,0x4FF1L,1UL,1UL,0x4FF1L},{0x43DDL,0UL,0xD695L,0UL,0x43DDL},{0x4FF1L,1UL,1UL,0x4FF1L,0xEC98L},{0UL,0UL,0UL,0x255AL,0UL},{0x4FF1L,0x4FF1L,0x33B8L,1UL,0xEC98L},{0x43DDL,0x255AL,0xD695L,0x255AL,0x43DDL},{0xEC98L,1UL,0x33B8L,0x4FF1L,0x4FF1L}};
            int i, j;
            if ((p_33.f1 < (l_1091 , (((l_1101[2] &= ((((p_30.f0 ^ ((l_1095[3][2] |= 4UL) <= 0xE0L)) | ((*g_623) , ((safe_div_func_int32_t_s_s((l_1098 , ((safe_rshift_func_int8_t_s_u(2L, l_1098)) < (*g_567))), (*g_567))) && p_32.f2))) <= p_33.f0) && 0xA43427E1L)) < p_30.f0) == l_1091))))
            {
                const int32_t l_1104 = 0x20AD01FDL;
                struct S0 *l_1130 = &g_94;
                for (g_554.f0 = 16; (g_554.f0 >= (-22)); g_554.f0 = safe_sub_func_int32_t_s_s(g_554.f0, 9))
                {
                    return l_1104;
                }
                l_1105 = &p_34;
                for (g_893.f1 = 1; (g_893.f1 <= 6); g_893.f1 += 1)
                {
                    int i, j;
                    if ((safe_mod_func_int64_t_s_s((!((g_206[2][2][0] , (safe_mod_func_uint16_t_u_u((g_491[g_893.f1][g_893.f1] == (g_491[g_893.f1][g_893.f1] , p_33.f1)), (g_1111[6] , ((*l_1105) && ((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((g_206[0][5][1] , ((safe_lshift_func_uint16_t_u_u(((**g_1032) = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((g_491[g_893.f1][g_893.f1] && 0x51C6E218L) < g_955), 7)), 255UL))), l_1095[3][2])) == g_206[6][8][1].f0)), p_33.f1)), 7UL)) != 0L), 0)) <= 0x6DL)))))) <= 0x0DL)), 18446744073709551615UL)))
                    {
                        int32_t ****l_1125 = (void*)0;
                        g_1126 = l_1124;
                    }
                    else
                    {
                        union U6 *l_1143 = &g_206[5][7][0];
                        union U6 **l_1142 = &l_1143;
                        int32_t l_1144[5] = {0x02DD1EA3L,0x02DD1EA3L,0x02DD1EA3L,0x02DD1EA3L,0x02DD1EA3L};
                        uint64_t l_1145 = 0x45739BDE66DA2502LL;
                        int i;
                        (*g_567) |= (((((safe_lshift_func_int8_t_s_u(((0x823EED9D51CC8A27LL ^ (!(l_1130 == (void*)0))) && ((safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((!(((!l_1104) <= p_32.f2) <= ((*l_1088) = (p_33.f1 , g_491[4][6])))), ((((*l_1142) = (l_1141[2] = &p_32)) == (g_206[5][4][0] , (void*)0)) <= 9L))), 6)) < 0L), l_1144[4])) | p_30.f0), p_34)) && l_1095[0][0])), 6)) <= 0x3C357B5BL) != g_128) >= 0xB0FD4C2FL) && 0x40L);
                        (*g_567) ^= l_1145;
                    }
                    l_1146 = (void*)0;
                }
            }
            else
            {
                struct S1 l_1147 = {0x53ACAD06L,-7L};
                l_1147 = l_1147;
                for (l_1147.f0 = 0; (l_1147.f0 < 40); l_1147.f0 = safe_add_func_uint64_t_u_u(l_1147.f0, 4))
                {
                    struct S1 l_1160 = {18446744073709551608UL,1L};
                    union U8 *l_1162 = (void*)0;
                    int32_t l_1163 = (-2L);
                    int32_t l_1164[9] = {0x1CC495B9L,0x1CC495B9L,0x1CC495B9L,0x1CC495B9L,0x1CC495B9L,0x1CC495B9L,0x1CC495B9L,0x1CC495B9L,0x1CC495B9L};
                    union U6 ***l_1170 = &g_1169;
                    int i;
                    (*l_1105) = (g_611 , p_30.f0);
                    g_1171 |= (p_30.f0 |= ((safe_mod_func_uint32_t_u_u((g_956 &= ((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((-4L), 3)), ((((l_1160 , l_1161) , l_1162) == &g_885) >= (l_1164[2] = (l_1163 |= 0xA6L))))), ((*l_1105) = (*l_1105)))), ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((*l_1170) = g_1169) == (void*)0), 255UL)), 4)) ^ g_94.f6))) , p_32.f2)), 0x04600F97L)) , p_33.f0));
                    for (g_673 = 19; (g_673 == (-12)); g_673 = safe_sub_func_uint32_t_u_u(g_673, 6))
                    {
                        if ((*g_567))
                            break;
                        return p_30.f0;
                    }
                }
            }
            l_1174[0]++;
            g_679.f1 = ((*l_1105) = (~0x396492D8F175BF84LL));
            for (g_188.f0 = 26; (g_188.f0 > 14); g_188.f0--)
            {
                int16_t l_1204 = 0L;
                int32_t l_1206[6] = {0xAA2959C3L,(-1L),(-1L),0xAA2959C3L,(-1L),6L};
                int i;
                for (g_88 = 1; (g_88 <= 7); g_88 += 1)
                {
                    struct S0 * const l_1183 = (void*)0;
                    int32_t l_1186 = 0xE233AED5L;
                    struct S2 ****l_1203 = &g_706;
                    l_1098 |= (safe_mul_func_int16_t_s_s((l_1182[0][7] == l_1183), ((((safe_add_func_uint8_t_u_u(l_1186, (l_1187[6][3] != l_1188))) == (safe_add_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((safe_add_func_int64_t_s_s(0L, ((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((((*l_1203) = g_706) == ((*g_898) = (*g_898))), ((&g_280 == (void*)0) & 1L))), (*l_1105))) , p_32.f2) >= 18446744073709551614UL) || p_34), l_1204)), l_1205)) ^ p_33.f0))), p_33.f1)) && (*g_1033)), p_30.f0))) >= p_32.f2) != g_108.f7)));
                    if (p_33.f0)
                        continue;
                }
                ++l_1217[5][1];
            }
        }
        for (g_611.f0.f1 = 0; (g_611.f0.f1 != (-21)); g_611.f0.f1--)
        {
            uint32_t l_1230 = 0x49AF8935L;
            union U7 *l_1235 = &g_1236[7];
            struct S1 l_1263 = {2UL,0xD466265DL};
            int8_t *l_1276 = &g_60;
            uint16_t l_1287 = 1UL;
            int32_t l_1291 = (-1L);
            int32_t l_1309 = 1L;
            int32_t l_1310 = 0x72D2EB14L;
            int32_t l_1311 = 0xE46BD9FBL;
            int32_t l_1312[2][6] = {{6L,0xB009DEB8L,6L,0xA76215E5L,0xA76215E5L,6L},{1L,1L,0xA76215E5L,0xA7FA3023L,0xA76215E5L,1L}};
            struct S2 **l_1361 = &g_704[5];
            struct S2 ***l_1360 = &l_1361;
            union U4 *l_1374 = (void*)0;
            uint8_t **l_1387 = &g_212[5][0][0];
            int64_t l_1439 = 0x410E9373A0ED866ALL;
            int i, j;
            for (g_136 = 0; (g_136 == 15); ++g_136)
            {
                const union U5 *l_1224[1];
                const union U5 **l_1225 = &l_1224[0];
                const union U5 *l_1227 = (void*)0;
                const union U5 **l_1226 = &l_1227;
                const int32_t l_1266 = 0xD058537DL;
                uint32_t *l_1267[6][4] = {{&g_97.f1,&g_88,&g_97.f1,&g_88},{&g_97.f1,&g_88,&g_97.f1,&g_88},{&g_97.f1,&g_88,&g_97.f1,&g_88},{&g_97.f1,&g_88,&g_97.f1,&g_88},{&g_97.f1,&g_88,&g_97.f1,&g_88},{&g_97.f1,&g_88,&g_97.f1,&g_88}};
                uint16_t l_1270 = 0x5164L;
                int8_t l_1292 = 0L;
                int32_t l_1293[6] = {0xADB68F19L,0xADB68F19L,0xADB68F19L,0xADB68F19L,0xADB68F19L,0xADB68F19L};
                int32_t l_1303 = 0xD11BB560L;
                uint8_t *l_1308[5][4][1];
                uint32_t l_1320 = 0xD157F271L;
                uint16_t **l_1342 = (void*)0;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1224[i] = &g_893;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1308[i][j][k] = &g_213;
                    }
                }
                (*l_1226) = ((*l_1225) = l_1224[0]);
            }
            if ((*g_567))
                continue;
            if (((void*)0 == &l_1307))
            {
                int16_t *l_1351 = (void*)0;
                uint8_t *l_1354 = &g_885.f1;
                uint32_t *l_1364 = &g_893.f1;
                uint64_t *l_1365 = &g_137;
                int32_t l_1368[6];
                uint8_t **l_1384 = &l_1354;
                uint8_t ***l_1383 = &l_1384;
                int32_t *l_1385 = (void*)0;
                int16_t *l_1388 = &g_54;
                int16_t l_1395 = (-1L);
                int i;
                for (i = 0; i < 6; i++)
                    l_1368[i] = 0L;
                if ((safe_mod_func_int64_t_s_s((((safe_mod_func_uint16_t_u_u((--(*g_1033)), 0x7D47L)) | ((((void*)0 != (*l_1344)) | ((*l_1354) = ((g_955 ^= (g_460 ^= p_34)) == (safe_mod_func_int16_t_s_s(p_30.f0, p_33.f1))))) && (safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int16_t_s_u((+((*l_1365) = (safe_unary_minus_func_uint8_t_u(((l_1360 == l_1362) || (((*l_1364) = 0xE35BA739L) ^ 6L)))))), l_1263.f1)) && 1UL))))) && (**g_1032)), g_1111[6].f1)))
                {
                    for (p_30.f1 = 0; (p_30.f1 < 36); ++p_30.f1)
                    {
                        uint32_t l_1370 = 0UL;
                        struct S1 *l_1373 = &g_207;
                        union U4 **l_1375 = (void*)0;
                        union U4 **l_1376 = &l_1374;
                        ++l_1370;
                        (*l_1373) = l_1161;
                        (*l_1376) = l_1374;
                    }
                }
                else
                {
                    if ((safe_div_func_uint64_t_u_u(l_1312[0][1], (safe_div_func_uint64_t_u_u((--(*l_1365)), p_30.f0)))))
                    {
                        l_1161 = l_1161;
                        return (*g_567);
                    }
                    else
                    {
                        if (p_32.f2)
                            break;
                    }
                }
                if (g_481)
                    goto lbl_1271;
                l_1395 = (((*l_1388) = (((*l_1383) = (void*)0) != (l_1386 , l_1387))) >= (l_1368[3] = (safe_sub_func_uint64_t_u_u(g_460, (((*g_567) ^ ((l_1312[0][1] , l_1312[0][1]) || (safe_mul_func_uint16_t_u_u(((*g_1033) ^= (safe_div_func_int64_t_s_s(((void*)0 == (*l_1363)), p_34))), p_30.f0)))) && p_33.f0)))));
                return l_1263.f0;
            }
            else
            {
                union U3 **l_1396 = &g_623;
                int32_t *l_1411 = &g_207.f1;
                uint8_t l_1413[3][4] = {{0x17L,0xDFL,0xDFL,0x17L},{0xDFL,0x17L,0xDFL,0xDFL},{0x17L,0x17L,0x38L,0x17L}};
                uint64_t l_1425 = 0UL;
                uint8_t *l_1426 = (void*)0;
                int16_t *l_1438 = (void*)0;
                int32_t l_1440 = 3L;
                uint8_t *l_1441 = (void*)0;
                uint8_t *l_1442[7] = {&l_1329.f1,&l_1413[0][3],&l_1413[0][3],&l_1329.f1,&l_1413[0][3],&l_1413[0][3],&l_1329.f1};
                int32_t l_1443 = 0xE1F91518L;
                uint16_t l_1445 = 4UL;
                int i, j;
                (*l_1396) = &g_1244[2][2];
                p_34 &= ((*g_567) = (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((safe_unary_minus_func_uint64_t_u(((((&g_280 == (void*)0) || (safe_rshift_func_uint8_t_u_u((((0x3E2D765DL >= (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(g_94.f3)), 0x08E3L))) | 0x2830L) || ((safe_div_func_int32_t_s_s(0x7AB0F825L, g_608.f0)) != (((((*l_1411) &= g_97.f1) , (*g_280)) == l_1412) != 65534UL))), l_1413[0][0]))) | p_33.f0) || 0x691CE6FE73D6FCA6LL))) <= p_33.f1) || 65533UL), 254UL)), l_1309)));
                for (l_1230 = 0; (l_1230 != 35); ++l_1230)
                {
                    if (l_1161.f0)
                        goto lbl_1271;
                }
                l_1445 = (safe_rshift_func_int8_t_s_u(((p_31 , (((*g_1033) = (safe_mul_func_uint8_t_u_u((~(l_1413[0][3] <= (safe_mod_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((p_31.f1 = l_1425) | (p_32.f2 || ((*g_567) ^= (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(p_33.f0, ((g_136 |= 9L) & (((**g_1032) <= (((p_34 == (l_1443 ^= (safe_div_func_int32_t_s_s(((((l_1440 &= (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s((l_1312[1][1] = (g_54 = (safe_rshift_func_uint16_t_u_u(3UL, 7)))))), l_1439))) && 0L) < 3L) && l_1291), 0x64870241L)))) > l_1291) >= p_33.f0)) | l_1444)))), g_767))))), p_33.f0)), l_1287)))), 0xAEL))) && p_31.f1)) ^ l_1413[0][0]), 7));
            }
            if (l_1073)
                goto lbl_1271;
        }
        for (g_128 = 0; (g_128 > 16); g_128 = safe_add_func_int32_t_s_s(g_128, 5))
        {
            int32_t l_1448 = 0x2C871D6AL;
            int32_t l_1456[7];
            uint32_t *l_1457[4][5][7] = {{{&g_1111[6].f1,&g_893.f1,&g_750[4][2][0].f0,&g_750[4][2][0].f1,&g_88,&g_750[4][2][0].f0,&l_1245.f1},{&g_750[4][2][0].f0,&g_750[4][2][0].f1,(void*)0,&g_97.f1,&g_893.f1,&g_97.f1,(void*)0},{&g_97.f1,&g_97.f1,&g_88,(void*)0,&g_88,&g_750[4][2][0].f0,&l_1245.f1},{(void*)0,&g_893.f1,&g_893.f1,&g_750[4][2][0].f0,&g_750[4][2][0].f1,&g_750[4][2][0].f1,(void*)0},{&g_750[4][2][0].f0,&g_750[4][2][0].f0,&g_750[4][2][0].f1,&g_750[4][2][0].f1,&g_88,&g_956,&g_1111[6].f1}},{{&g_750[4][2][0].f0,&g_893.f1,&g_750[4][2][0].f1,&g_88,&g_893.f1,&g_750[4][2][0].f0,&g_893.f1},{&g_750[4][2][0].f0,&g_956,&g_750[4][2][0].f0,&g_97.f1,&g_88,&g_97.f1,&g_97.f1},{&g_88,(void*)0,&g_88,&g_750[4][2][0].f1,&g_750[4][2][0].f0,&g_97.f1,&g_750[4][2][0].f0},{&g_893.f1,&g_750[4][2][0].f1,&g_750[4][2][0].f1,&g_750[4][2][0].f1,&g_956,&g_88,&g_88},{&g_97.f1,&g_956,&g_893.f1,&g_97.f1,&g_893.f1,(void*)0,&g_88}},{{&g_956,(void*)0,&l_1245.f1,&g_88,&l_1245.f1,(void*)0,&g_956},{&g_893.f1,&g_750[4][2][0].f0,(void*)0,&g_750[4][2][0].f1,&g_97.f1,&g_750[4][2][0].f0,&g_750[4][2][0].f1},{&g_750[4][2][0].f1,(void*)0,&g_750[4][2][0].f1,&g_750[4][2][0].f0,&g_750[4][2][0].f0,&g_956,&g_97.f1},{&l_1245.f1,&l_1245.f1,(void*)0,(void*)0,&g_88,&g_97.f1,&g_1111[6].f1},{(void*)0,&l_1245.f1,&l_1245.f1,&g_97.f1,&g_750[4][2][0].f1,&g_893.f1,&g_750[4][2][0].f1}},{{(void*)0,&g_88,&g_893.f1,&g_750[4][2][0].f1,&g_1111[6].f1,&g_893.f1,&g_88},{&g_750[4][2][0].f1,&g_88,&g_750[4][2][0].f1,(void*)0,&g_893.f1,&g_88,&g_956},{(void*)0,&g_88,&g_88,&g_88,(void*)0,&g_750[4][2][0].f1,&g_893.f1},{&g_97.f1,&g_88,&g_750[4][2][0].f0,(void*)0,&g_88,&g_750[4][2][0].f0,&g_750[4][2][0].f0},{&g_956,(void*)0,&g_750[4][2][0].f0,(void*)0,&g_956,&g_88,&g_97.f1}}};
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1456[i] = (-9L);
            (*g_567) = (((l_1448 = p_34) ^ (safe_rshift_func_int16_t_s_u(0x7868L, p_33.f0))) != (safe_mod_func_uint8_t_u_u((((((void*)0 != &l_1290) > (((*g_623) = (*g_623)) , ((*g_1033) = ((g_1453 , (safe_add_func_uint32_t_u_u(p_33.f0, 0x2B4AC881L))) >= l_1456[4])))) , &g_956) == l_1457[2][2][5]), 0x11L)));
            p_34 |= (~(g_108.f5 | g_1171));
        }
        for (g_611.f0.f1 = (-1); (g_611.f0.f1 <= (-3)); g_611.f0.f1--)
        {
            (*g_567) = l_1205;
        }
    }
    else
    {
        uint32_t l_1461 = 0xC326D6ADL;
        uint32_t l_1464 = 18446744073709551608UL;
        ++l_1461;
        l_1464--;
    }
    return p_33.f0;
}







static union U8 func_36(struct S0 p_37, union U3 p_38)
{
    uint32_t l_825 = 0xB294452BL;
    union U6 *l_837 = &g_206[0][6][1];
    struct S2 **l_850 = (void*)0;
    struct S2 ***l_849 = &l_850;
    union U5 *l_887 = &g_97;
    union U5 *l_891 = (void*)0;
    uint16_t *l_897 = (void*)0;
    uint16_t **l_896[6][4] = {{&l_897,&l_897,&l_897,&l_897},{&l_897,&l_897,&l_897,&l_897},{&l_897,&l_897,(void*)0,&l_897},{&l_897,&l_897,&l_897,&l_897},{&l_897,&l_897,&l_897,&l_897},{&l_897,&l_897,(void*)0,&l_897}};
    const struct S2 ****l_902 = &g_899;
    int64_t l_921 = 0x1A43BCCE3A34EDBCLL;
    int32_t l_922 = 0xF9D30324L;
    int64_t l_938 = (-1L);
    int32_t l_941 = 1L;
    int32_t l_942 = 0L;
    int32_t l_943 = (-1L);
    int32_t l_945 = 0xEA256F40L;
    int32_t l_954 = 9L;
    struct S0 *l_982 = (void*)0;
    uint16_t l_1023 = 0xF0BAL;
    int32_t *l_1053 = &l_954;
    int32_t *l_1054 = &l_954;
    int32_t *l_1055 = &g_480;
    int32_t *l_1056 = (void*)0;
    int32_t *l_1057[4][8][8] = {{{&l_954,&l_922,&l_943,(void*)0,&l_942,&l_942,&l_942,&l_942},{&l_954,&l_942,&g_26,(void*)0,&l_942,&l_954,&l_942,&l_942},{&l_942,&l_922,(void*)0,(void*)0,&l_922,&l_942,&l_922,&l_942},{&l_954,&l_942,&l_922,(void*)0,(void*)0,&l_954,&l_945,&l_942},{&l_954,&l_922,&l_943,(void*)0,&l_942,&l_942,&l_942,&l_942},{&l_954,&l_942,&g_26,(void*)0,&l_942,&l_954,&l_942,&l_942},{&l_942,&l_922,(void*)0,(void*)0,&l_922,&l_942,&l_922,&l_942},{&l_954,&l_942,&l_922,(void*)0,(void*)0,&l_954,&l_945,&l_942}},{{&l_954,&l_922,&l_943,(void*)0,&l_942,&l_942,&l_942,&l_942},{&l_954,&l_942,&g_26,(void*)0,&l_942,&l_954,&l_942,&l_942},{&l_942,&l_922,(void*)0,(void*)0,&l_922,&l_942,&l_922,&l_942},{&l_954,&l_942,&l_922,(void*)0,(void*)0,&l_954,&l_945,&l_942},{&l_954,&l_922,&l_943,(void*)0,&l_942,&l_942,&l_942,&l_942},{&l_954,&l_942,&g_26,(void*)0,&l_942,&l_954,&l_942,&l_942},{&l_942,&l_922,(void*)0,(void*)0,&l_922,&l_942,&l_922,&l_942},{&l_954,&l_942,&l_922,(void*)0,(void*)0,&l_954,&l_945,&l_942}},{{&l_954,&l_922,&l_943,(void*)0,&l_942,&l_942,&l_942,&l_942},{&l_954,&l_942,&g_26,(void*)0,&l_942,&l_954,&l_942,&l_942},{&l_942,&l_922,(void*)0,(void*)0,&l_922,&l_942,&l_922,&l_942},{&l_954,&l_942,&l_922,(void*)0,(void*)0,&l_954,&l_945,&l_942},{&l_954,&l_922,&l_943,(void*)0,&l_942,&l_942,&l_942,&l_942},{&l_954,&l_942,&g_26,(void*)0,&l_942,&l_954,&l_942,&l_942},{&l_942,&l_922,(void*)0,(void*)0,&l_922,&l_942,&l_922,&l_942},{&l_954,&l_942,&l_922,(void*)0,(void*)0,&l_954,&l_945,&l_942}},{{&l_954,&l_922,&l_943,(void*)0,&l_942,&l_942,&l_942,&l_942},{&l_954,&l_942,&g_26,(void*)0,&l_942,&l_954,&l_942,&l_942},{&l_942,&l_922,(void*)0,(void*)0,&l_922,&l_942,&l_922,&l_942},{&l_954,&l_942,&l_922,(void*)0,(void*)0,&l_954,&l_945,&l_942},{&l_954,&l_922,&l_943,(void*)0,&l_942,&l_942,&l_942,&l_942},{&l_954,&l_942,&g_26,(void*)0,&l_942,&l_954,&l_942,&l_942},{&l_942,&l_922,(void*)0,(void*)0,&l_922,&l_942,&l_922,&l_942},{&l_954,&l_942,&l_922,(void*)0,(void*)0,&l_954,&l_945,&l_942}}};
    int32_t l_1058 = 1L;
    int32_t l_1059[1][9][6] = {{{0x4929A1A3L,0xDB546EDFL,0xAF97254DL,0L,0xE35C40BFL,0x4929A1A3L},{0xAF97254DL,1L,0L,0L,1L,0xAF97254DL},{0x4929A1A3L,0xE35C40BFL,0L,0xAF97254DL,0xDB546EDFL,0x4929A1A3L},{0x044C329FL,0xE35C40BFL,0xAF97254DL,0x044C329FL,1L,0x044C329FL},{0x044C329FL,1L,0x044C329FL,0xAF97254DL,0xE35C40BFL,0x044C329FL},{0x4929A1A3L,0xDB546EDFL,0xAF97254DL,0L,0xE35C40BFL,0x4929A1A3L},{0xAF97254DL,1L,0L,0L,1L,0xAF97254DL},{0x4929A1A3L,0xE35C40BFL,0L,0xAF97254DL,0xDB546EDFL,0x4929A1A3L},{0x044C329FL,0xE35C40BFL,0xAF97254DL,0x044C329FL,1L,0x044C329FL}}};
    uint16_t l_1060[2];
    int32_t l_1063 = 0x75768746L;
    uint32_t l_1064 = 0x5F42AB51L;
    union U8 l_1067 = {0};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1060[i] = 0x0C48L;
    for (g_611.f2 = 5; (g_611.f2 >= 1); g_611.f2 -= 1)
    {
        struct S2 l_836 = {4,1815,3,142,0,78,-845,-0,1244};
        const int64_t l_931[2] = {0L,0L};
        int32_t l_944 = 0L;
        int32_t l_946 = 0xAF5E4CBAL;
        int32_t l_947 = (-1L);
        int32_t l_950 = 0xEF69D98DL;
        int32_t l_952[6];
        int32_t l_1040 = 0xB465D629L;
        int i;
        for (i = 0; i < 6; i++)
            l_952[i] = 1L;
        (*g_567) ^= (l_825 == (safe_rshift_func_int16_t_s_s(((l_825 > l_825) != (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((l_825 & (-8L)), (safe_add_func_int16_t_s_s(((*g_623) , (safe_rshift_func_uint8_t_u_s((((l_836 , ((((l_825 >= (g_317 ^ l_836.f0)) >= 65526UL) < g_679.f0) == l_825)) ^ l_825) ^ l_836.f1), p_37.f6))), p_37.f4)))) || g_88), 4294967293UL))), 2)));
        for (g_88 = 0; (g_88 <= 6); g_88 += 1)
        {
            struct S2 ***l_853 = &l_850;
            union U7 l_858 = {{8UL,0L}};
            int32_t l_864[2];
            union U5 *l_892 = &g_893;
            int64_t *l_913 = &g_136;
            struct S0 **l_981 = (void*)0;
            int16_t * const l_1008 = &g_70;
            int i, j;
            for (i = 0; i < 2; i++)
                l_864[i] = 0x291038A5L;
            (*g_567) = g_491[(g_611.f2 + 1)][g_88];
            for (g_128 = 2; (g_128 <= 6); g_128 += 1)
            {
                union U6 **l_838 = &l_837;
                int32_t l_854 = (-5L);
                int32_t l_882 = 0x17C3124DL;
                union U8 *l_884 = &g_885;
                int32_t l_948 = 1L;
                int32_t l_949 = 1L;
                int32_t l_951 = (-1L);
                int32_t l_953[5][10] = {{0x13E1449CL,0xE28D9B53L,0xE28D9B53L,0x13E1449CL,2L,0x941DBCDEL,0L,(-1L),0xE28D9B53L,(-1L)},{2L,(-1L),8L,3L,0x6A0371B0L,8L,0xE28D9B53L,0L,0xE28D9B53L,8L},{0x75B91AB6L,0x13E1449CL,0x02B3E432L,0x13E1449CL,0x75B91AB6L,0x2A01FD55L,0x76F94052L,0x75B91AB6L,0x82ACA2FFL,0x6A0371B0L},{0L,2L,3L,0x75B91AB6L,0x82ACA2FFL,0x2A01FD55L,2L,5L,5L,2L},{0xD9BF63B5L,8L,0x02B3E432L,0x02B3E432L,8L,0xD9BF63B5L,0x08ABDCBEL,0xE28D9B53L,0x2A01FD55L,0x02B3E432L}};
                struct S0 **l_1041 = &l_982;
                uint16_t **l_1047 = &l_897;
                int i, j;
                (*l_838) = l_837;
            }
        }
    }
    ++l_1060[0];
    (*l_1055) ^= 1L;
    --l_1064;
    return l_1067;
}







static struct S0 func_39(int32_t * p_40)
{
    int32_t *l_52 = &g_26;
    int32_t **l_53 = &l_52;
    int32_t l_55 = (-1L);
    union U5 l_73[9] = {{0xA5F6804519F073E4LL},{0xA5F6804519F073E4LL},{0xA5F6804519F073E4LL},{0xA5F6804519F073E4LL},{0xA5F6804519F073E4LL},{0xA5F6804519F073E4LL},{0xA5F6804519F073E4LL},{0xA5F6804519F073E4LL},{0xA5F6804519F073E4LL}};
    struct S2 l_85 = {1,1299,-1,7,0,6,429,-3,1360};
    uint32_t l_89[6] = {18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL};
    union U8 l_107 = {0};
    uint16_t *l_157[4] = {&g_128,&g_128,&g_128,&g_128};
    uint64_t l_175[5] = {0x70A894EA7FDE322FLL,0x70A894EA7FDE322FLL,0x70A894EA7FDE322FLL,0x70A894EA7FDE322FLL,0x70A894EA7FDE322FLL};
    struct S0 l_240[9][9] = {{{-4227,-1355,5250,15314,407,964,1242,671},{-41426,-2226,5098,4375,1385,4050,1743,328},{25789,-1853,6695,26179,1296,-701,1810,91},{-29954,1016,5859,29293,613,-2517,1694,452},{25789,-1853,6695,26179,1296,-701,1810,91},{-41426,-2226,5098,4375,1385,4050,1743,328},{-4227,-1355,5250,15314,407,964,1242,671},{-9384,1094,3990,31979,1082,-2298,474,129},{39412,1015,3381,31930,1440,-250,906,221}},{{34358,1797,2446,22908,935,3945,1022,673},{37882,1513,1294,14111,1270,1816,1086,396},{-12692,412,2243,21356,1295,642,1135,671},{-44535,-2485,5786,17415,162,2693,1144,378},{-3101,-2061,4132,8552,695,-1973,1160,343},{26370,-439,4392,2740,1044,3459,724,48},{-37765,-1627,8020,18374,92,-1363,684,135},{34358,1797,2446,22908,935,3945,1022,673},{-44535,-2485,5786,17415,162,2693,1144,378}},{{24102,2084,1402,3731,1403,-1089,1964,702},{25789,-1853,6695,26179,1296,-701,1810,91},{-9384,1094,3990,31979,1082,-2298,474,129},{26370,-439,4392,2740,1044,3459,724,48},{6998,2385,138,10183,415,2828,1143,64},{-12692,412,2243,21356,1295,642,1135,671},{-7924,-450,3724,7751,966,1239,1381,509},{-9384,1094,3990,31979,1082,-2298,474,129},{3362,-1773,5246,8510,954,2094,167,362}},{{44266,2646,6118,18441,967,-403,963,321},{-9384,1094,3990,31979,1082,-2298,474,129},{20702,189,910,939,377,1015,525,564},{24977,25,4855,26786,878,3739,1691,74},{-9713,-417,6813,21455,1029,2034,5,722},{15787,-2154,7426,22882,1061,4003,1474,311},{-9384,1094,3990,31979,1082,-2298,474,129},{26103,597,4606,5367,624,-1916,1592,620},{-9384,1094,3990,31979,1082,-2298,474,129}},{{-44535,-2485,5786,17415,162,2693,1144,378},{-40943,1637,8043,27000,712,-3361,829,80},{20702,189,910,939,377,1015,525,564},{20702,189,910,939,377,1015,525,564},{-40943,1637,8043,27000,712,-3361,829,80},{-44535,-2485,5786,17415,162,2693,1144,378},{6998,2385,138,10183,415,2828,1143,64},{39412,1015,3381,31930,1440,-250,906,221},{-29954,1016,5859,29293,613,-2517,1694,452}},{{-41426,-2226,5098,4375,1385,4050,1743,328},{-4227,-1355,5250,15314,407,964,1242,671},{-9384,1094,3990,31979,1082,-2298,474,129},{39412,1015,3381,31930,1440,-250,906,221},{25789,-1853,6695,26179,1296,-701,1810,91},{-18411,1187,731,7353,1237,-2115,9,287},{44266,2646,6118,18441,967,-403,963,321},{-44535,-2485,5786,17415,162,2693,1144,378},{22028,-1936,2946,15743,807,2922,98,635}},{{3362,-1773,5246,8510,954,2094,167,362},{37380,-1039,1138,31599,118,4090,1942,489},{-12692,412,2243,21356,1295,642,1135,671},{-3101,-2061,4132,8552,695,-1973,1160,343},{30407,2838,7153,26591,666,-1704,69,708},{34358,1797,2446,22908,935,3945,1022,673},{6998,2385,138,10183,415,2828,1143,64},{3362,-1773,5246,8510,954,2094,167,362},{25789,-1853,6695,26179,1296,-701,1810,91}},{{24102,2084,1402,3731,1403,-1089,1964,702},{-44535,-2485,5786,17415,162,2693,1144,378},{25789,-1853,6695,26179,1296,-701,1810,91},{34358,1797,2446,22908,935,3945,1022,673},{37380,-1039,1138,31599,118,4090,1942,489},{27274,-3232,5588,4653,206,2870,405,137},{-9384,1094,3990,31979,1082,-2298,474,129},{-9384,1094,3990,31979,1082,-2298,474,129},{27274,-3232,5588,4653,206,2870,405,137}},{{-18411,1187,731,7353,1237,-2115,9,287},{-44535,-2485,5786,17415,162,2693,1144,378},{29819,3857,5087,8707,708,-3548,1848,40},{-44535,-2485,5786,17415,162,2693,1144,378},{-18411,1187,731,7353,1237,-2115,9,287},{15787,-2154,7426,22882,1061,4003,1474,311},{-7924,-450,3724,7751,966,1239,1381,509},{-29954,1016,5859,29293,613,-2517,1694,452},{-44535,-2485,5786,17415,162,2693,1144,378}}};
    union U7 l_254 = {{0x4CA97F19L,0x72042A24L}};
    uint16_t l_256 = 0xFCB4L;
    uint64_t l_305 = 5UL;
    int32_t l_316 = (-9L);
    int32_t l_318 = 0xEEB9AF1AL;
    int32_t l_319 = 0L;
    uint64_t *l_323 = &l_175[3];
    uint32_t l_324 = 0xA492C279L;
    struct S2 *l_326 = &l_85;
    struct S2 **l_325[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    struct S1 *l_329 = &g_207;
    int8_t **l_332 = &g_12[0][5][0];
    int16_t l_364[4];
    int32_t l_425[2];
    union U6 l_496 = {1L};
    uint32_t l_566 = 0UL;
    int16_t l_807 = (-9L);
    int i, j;
    for (i = 0; i < 4; i++)
        l_364[i] = 0xDCE9L;
    for (i = 0; i < 2; i++)
        l_425[i] = 1L;
lbl_112:
    g_61 ^= ((*p_40) = ((safe_unary_minus_func_uint8_t_u((g_60 ^= (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((0UL & ((g_54 = (safe_unary_minus_func_int8_t_s((&g_26 == ((*l_53) = l_52))))) != g_13)), 1)), g_13)) > l_55) , ((&g_26 == (void*)0) == (safe_add_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u((**l_53), (**l_53))) < 0L) < 0x19D4L), g_54)))), g_26)), 0x0EDCL))))) & 65535UL));
    if ((safe_rshift_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((((*l_52) | (g_70 = 0x40E51693878D320CLL)) & (safe_mod_func_int32_t_s_s(((((l_73[8] , (((+((safe_mod_func_uint32_t_u_u(((((1L ^ ((**l_53) || (((safe_mod_func_uint32_t_u_u(((*l_52) == (safe_rshift_func_uint8_t_u_u(((((l_85.f2 = (safe_add_func_uint32_t_u_u((((*l_52) , (safe_add_func_uint8_t_u_u(((l_85 , (safe_add_func_int8_t_s_s((*l_52), (**l_53)))) | 0x8C84420CA5725C8ELL), (*l_52)))) <= 0xFCBC420B167AC4CBLL), 0x4DDB7621L))) < 0xC7A5L) & (*l_52)) >= (**l_53)), (**l_53)))), 0xEBEE4CBEL)) > (*l_52)) ^ (*l_52)))) <= 9UL) | (*l_52)) != (**l_53)), 0xD681D092L)) == g_54)) == 2UL) <= g_54)) == (*l_52)) == g_88) < (**l_53)), g_26))), g_61)) != 0x2E968F5B2801F5D8LL), 5)), l_89[4])) ^ (**l_53)), (*l_52))))
    {
        int8_t l_100[5] = {0x4AL,0x4AL,0x4AL,0x4AL,0x4AL};
        int8_t *l_109 = &g_13;
        int32_t l_110 = 0x39573E0FL;
        int32_t *l_111[6][2] = {{&g_26,&g_26},{&g_26,&l_55},{(void*)0,&l_55},{&l_55,&l_55},{(void*)0,&l_55},{&g_26,&g_26}};
        int i, j;
        for (g_70 = 26; (g_70 >= 25); g_70 = safe_sub_func_uint16_t_u_u(g_70, 1))
        {
            for (g_61 = 0; (g_61 == 38); ++g_61)
            {
                return g_94;
            }
        }
        (*l_52) = (*p_40);
        g_94.f5 ^= (safe_rshift_func_int8_t_s_u((l_110 ^= (((*l_109) = ((g_97 , (*p_40)) & ((safe_rshift_func_int8_t_s_s((l_100[2] >= ((((void*)0 != g_101) < (safe_unary_minus_func_int16_t_s((*l_52)))) && (safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(g_94.f2, (l_107 , (g_108 , (*p_40))))), 2)))), (*l_52))) | 0x0772L))) != 0xC1L)), 0));
    }
    else
    {
        int32_t l_122 = 1L;
        int8_t *l_125 = &g_13;
        int32_t l_192[6][2][5] = {{{6L,0x3B6C18EBL,1L,(-1L),(-3L)},{0x9A2E6310L,(-1L),(-7L),(-3L),(-7L)}},{{(-1L),(-1L),4L,(-3L),(-1L)},{(-1L),0x9A2E6310L,5L,(-1L),(-1L)}},{{0x3B6C18EBL,6L,0x851F4452L,0x60001698L,6L},{(-1L),0x9A2E6310L,0xBDA7ED1FL,1L,1L}},{{5L,(-1L),5L,0x851F4452L,1L},{(-3L),(-1L),1L,0x3B6C18EBL,6L}},{{0x9A2E6310L,0x3B6C18EBL,0L,0x851F4452L,(-6L)},{0x78A46E20L,(-6L),0L,0xBDA7ED1FL,(-1L)}},{{5L,0L,0L,5L,0x78A46E20L},{5L,0x851F4452L,1L,1L,0x851F4452L}}};
        uint16_t * const l_223 = &g_128;
        int32_t *l_309 = &l_55;
        int32_t *l_310 = (void*)0;
        int32_t *l_311 = (void*)0;
        int32_t *l_312 = &l_192[4][0][2];
        int32_t *l_313 = &l_192[4][0][0];
        int32_t *l_314[5];
        int32_t l_315[3][1][9] = {{{8L,(-1L),8L,8L,(-1L),8L,8L,(-1L),8L}},{{8L,(-1L),8L,8L,(-1L),8L,8L,(-1L),8L}},{{8L,(-1L),8L,8L,(-1L),8L,8L,(-1L),8L}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_314[i] = &l_192[4][0][2];
lbl_283:
        if (g_108.f7)
            goto lbl_112;
        if (g_108.f2)
        {
            const int32_t *l_113 = &g_26;
            const int32_t **l_114 = &l_113;
            int8_t *l_124 = (void*)0;
            const uint16_t *l_224 = &g_128;
            int32_t l_233 = 0x5F31A84BL;
            int32_t l_234 = (-4L);
            int32_t l_235 = 0x780F6304L;
            int32_t l_236 = 0xABB2B166L;
            (*l_114) = l_113;
            if ((*p_40))
            {
                struct S0 l_115 = {20932,1237,4180,17694,251,231,212,141};
                return l_115;
            }
            else
            {
                union U5 l_123 = {0x7DF8BE535D5B9400LL};
                uint16_t *l_127 = &g_128;
                int8_t **l_131 = &g_12[0][1][3];
                int64_t *l_135 = &g_136;
                int32_t l_147[6];
                union U5 l_148 = {0x64293352AEDA2CA1LL};
                int32_t l_154 = 0xD107E331L;
                uint32_t l_187 = 0xF7C6F1CCL;
                union U4 l_270 = {5UL};
                union U9 l_276 = {0x1D2BL};
                int i;
                for (i = 0; i < 6; i++)
                    l_147[i] = 0xD1DAF1BBL;
                (*p_40) = (safe_mul_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((((*l_127) &= (g_126 ^= (((safe_mul_func_int16_t_s_s(l_122, g_88)) & (**l_114)) && ((l_123 , l_124) != l_125)))) || (safe_mod_func_uint64_t_u_u(((l_124 != ((*l_131) = l_124)) <= (~((((((*l_135) = (safe_sub_func_int8_t_s_s(((*l_52) != g_108.f2), 1UL))) && l_123.f1) | (-1L)) != 0xEC9762EAL) || 5UL))), 0xEE1BD5518D9D7C22LL))), 0xA28B5F6DL)) == g_137) != l_123.f0), 0x0DB9L));
                (*l_52) = (safe_lshift_func_int16_t_s_s(g_108.f0, 4));
                for (l_123.f1 = 0; (l_123.f1 <= 0); l_123.f1 += 1)
                {
                    int16_t *l_146[5][4] = {{&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54}};
                    const int32_t l_153 = (-1L);
                    uint32_t *l_189 = &g_97.f1;
                    uint64_t *l_195 = &l_175[3];
                    int32_t l_230 = 0xB7A2258DL;
                    const struct S1 l_259 = {0UL,-2L};
                    int i, j;
                }
                for (g_213 = 0; (g_213 <= 1); g_213 += 1)
                {
                    int32_t l_265[3][1][6] = {{{1L,1L,0L,0L,1L,1L}},{{1L,0L,0L,1L,1L,0L}},{{1L,1L,0L,0L,1L,1L}}};
                    const struct S2 *l_266 = &l_85;
                    int i, j, k;
                    for (g_188.f1 = 0; (g_188.f1 <= 1); g_188.f1 += 1)
                    {
                        struct S2 **l_261 = (void*)0;
                        struct S2 *l_263[4][7] = {{(void*)0,&l_85,&l_85,(void*)0,&l_85,&l_85,(void*)0},{&l_85,(void*)0,&l_85,&l_85,(void*)0,&l_85,&l_85},{(void*)0,(void*)0,&l_85,(void*)0,(void*)0,&l_85,(void*)0},{(void*)0,&l_85,&l_85,(void*)0,&l_85,&l_85,(void*)0}};
                        struct S2 **l_262 = &l_263[1][0];
                        int i, j;
                        (*l_262) = &l_85;
                    }
                    for (g_26 = 0; (g_26 <= 1); g_26 += 1)
                    {
                        int32_t *l_267 = &l_236;
                        uint8_t *l_273 = (void*)0;
                        uint8_t *l_274 = &l_107.f1;
                        const union U6 l_275 = {0L};
                        uint32_t *l_277 = (void*)0;
                        uint32_t *l_278 = (void*)0;
                        uint32_t *l_279 = &l_123.f1;
                        l_265[2][0][2] = ((+l_265[2][0][2]) , (l_73[8] , (g_97 , ((*l_267) = (l_266 == (void*)0)))));
                        (*l_267) &= ((safe_mod_func_int16_t_s_s((-7L), ((l_265[2][0][1] = ((*l_125) = (0x74L || l_192[4][0][2]))) || (l_270 , ((*l_125) ^= (((*l_279) = (safe_sub_func_uint16_t_u_u((((*l_274) = 0xCFL) ^ ((l_275 , l_276) , 255UL)), ((g_226 >= g_26) > (**l_114))))) && (*p_40))))))) ^ 0UL);
                    }
                }
            }
        }
        else
        {
            uint16_t l_302 = 1UL;
            for (l_55 = 0; (l_55 <= 3); l_55 += 1)
            {
                int16_t ***l_282 = &g_280;
                struct S0 l_290 = {-39281,-431,4166,5592,296,-3597,195,497};
                uint32_t l_306 = 0x9E1FA4D6L;
                for (g_207.f1 = 0; g_207.f1 < 6; g_207.f1 += 1)
                {
                    l_89[g_207.f1] = 0x07350B06L;
                }
                (**l_53) = g_108.f6;
                (*l_282) = g_280;
                if (l_192[4][0][2])
                    continue;
                for (g_13 = 0; (g_13 <= 1); g_13 += 1)
                {
                    uint32_t l_287 = 4UL;
                    struct S2 **l_295[2];
                    struct S0 l_308[10] = {{-34955,1527,5204,10955,974,-162,1751,474},{-34955,1527,5204,10955,974,-162,1751,474},{-34955,1527,5204,10955,974,-162,1751,474},{-34955,1527,5204,10955,974,-162,1751,474},{-34955,1527,5204,10955,974,-162,1751,474},{-34955,1527,5204,10955,974,-162,1751,474},{-34955,1527,5204,10955,974,-162,1751,474},{-34955,1527,5204,10955,974,-162,1751,474},{-34955,1527,5204,10955,974,-162,1751,474},{-34955,1527,5204,10955,974,-162,1751,474}};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_295[i] = (void*)0;
                    for (g_136 = 0; (g_136 <= 3); g_136 += 1)
                    {
                        int32_t *l_284 = (void*)0;
                        int32_t *l_285 = &l_192[0][0][1];
                        int32_t *l_286[2][5][3] = {{{&g_26,&g_26,&g_26},{&l_192[4][0][2],&g_26,&l_192[4][0][2]},{&g_26,&g_26,&g_26},{&l_192[4][0][2],&g_26,&l_192[4][0][2]},{&g_26,&g_26,&g_26}},{{&l_192[4][0][2],&g_26,&l_192[4][0][2]},{&g_26,&g_26,&g_26},{&l_192[4][0][2],&g_26,&l_192[4][0][2]},{&g_26,&g_26,&g_26},{&l_192[4][0][2],&g_26,&l_192[4][0][2]}}};
                        uint8_t *l_307[9][9] = {{&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213},{&g_213,(void*)0,&g_213,(void*)0,&g_213,(void*)0,&g_213,(void*)0,&g_213},{&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213},{&g_213,(void*)0,&g_213,(void*)0,&g_213,(void*)0,&g_213,(void*)0,&g_213},{&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213},{&g_213,(void*)0,&g_213,(void*)0,&g_213,(void*)0,&g_213,(void*)0,&g_213},{&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213},{&g_213,(void*)0,&g_213,(void*)0,&g_213,(void*)0,&g_213,(void*)0,&g_213},{&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213}};
                        int i, j, k;
                        if (l_122)
                            goto lbl_283;
                        --l_287;
                        l_290.f5 = ((g_101 == (l_290 , g_101)) > (safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u(0x784F500AEE977EAELL, (l_295[1] == (void*)0))), (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((l_192[(l_55 + 2)][g_13][(g_13 + 3)] && (safe_lshift_func_int8_t_s_s(l_302, ((((((*l_52) ^= ((l_306 = (g_188.f1 ^= (((safe_lshift_func_uint16_t_u_u(g_94.f7, 14)) | l_305) > l_122))) >= l_287)) , g_207.f0) && 1UL) ^ l_290.f4) == l_287)))) && l_290.f4), 13)), g_61)))));
                    }
                    if (l_302)
                        break;
                    for (g_61 = 0; (g_61 <= 1); g_61 += 1)
                    {
                        return l_308[4];
                    }
                }
            }
        }
        --g_320;
        (*l_313) |= (-1L);
    }
    if ((((*l_323) &= 0x10F0830096BF9411LL) , ((((l_324 && (((void*)0 != &l_52) & (g_128 = (l_325[8] == &l_326)))) != (safe_div_func_uint64_t_u_u((((**l_53) = (0x4BB4A0B93BEB5692LL || (((*l_329) = g_207) , (g_101 != &l_52)))) != l_305), g_97.f0))) , &g_108) == (void*)0)))
    {
        struct S0 *l_331[9][6] = {{&l_240[1][8],(void*)0,&l_240[1][8],&l_240[1][8],&l_240[1][8],(void*)0},{&g_94,(void*)0,&l_240[1][8],(void*)0,&g_94,(void*)0},{&l_240[1][8],&l_240[1][8],&l_240[1][8],(void*)0,&l_240[1][8],&l_240[1][8]},{&g_94,&l_240[1][8],&l_240[1][8],&l_240[1][8],&g_94,&l_240[1][8]},{&l_240[1][8],(void*)0,&l_240[1][8],&l_240[1][8],&l_240[1][8],(void*)0},{&g_94,(void*)0,&l_240[1][8],(void*)0,&g_94,(void*)0},{&l_240[1][8],&l_240[1][8],&l_240[1][8],(void*)0,&l_240[1][8],&l_240[1][8]},{&g_94,&l_240[1][8],&l_240[1][8],&l_240[1][8],&g_94,&l_240[1][8]},{&l_240[1][8],(void*)0,&l_240[1][8],&l_240[1][8],&l_240[1][8],(void*)0}};
        struct S0 **l_330 = &l_331[8][0];
        int8_t ***l_333[3][5][9] = {{{(void*)0,&l_332,&l_332,&l_332,(void*)0,&l_332,&l_332,&l_332,&l_332},{(void*)0,&l_332,&l_332,(void*)0,(void*)0,&l_332,&l_332,(void*)0,(void*)0},{(void*)0,(void*)0,&l_332,&l_332,&l_332,(void*)0,&l_332,&l_332,&l_332},{&l_332,&l_332,&l_332,(void*)0,&l_332,&l_332,&l_332,&l_332,(void*)0},{(void*)0,&l_332,&l_332,&l_332,&l_332,&l_332,&l_332,(void*)0,&l_332}},{{(void*)0,(void*)0,&l_332,&l_332,(void*)0,(void*)0,(void*)0,&l_332,&l_332},{(void*)0,&l_332,&l_332,&l_332,(void*)0,&l_332,&l_332,&l_332,&l_332},{&l_332,(void*)0,&l_332,(void*)0,&l_332,&l_332,(void*)0,(void*)0,&l_332},{&l_332,&l_332,(void*)0,&l_332,&l_332,&l_332,&l_332,&l_332,&l_332},{(void*)0,&l_332,&l_332,(void*)0,&l_332,&l_332,&l_332,(void*)0,&l_332}},{{&l_332,(void*)0,&l_332,(void*)0,&l_332,&l_332,&l_332,&l_332,&l_332},{&l_332,&l_332,&l_332,(void*)0,&l_332,(void*)0,(void*)0,&l_332,&l_332},{&l_332,&l_332,&l_332,&l_332,&l_332,&l_332,&l_332,&l_332,&l_332},{&l_332,&l_332,&l_332,(void*)0,&l_332,&l_332,(void*)0,(void*)0,&l_332},{&l_332,&l_332,&l_332,&l_332,&l_332,&l_332,&l_332,&l_332,&l_332}}};
        int i, j, k;
        (*l_330) = &g_94;
        g_336 = (g_335 = (g_334[0][3][1] = l_332));
        return l_240[1][1];
    }
    else
    {
        uint16_t l_340 = 0UL;
        int32_t l_365 = (-1L);
        int8_t *l_366 = &g_126;
        int32_t l_367 = 0x78684F4DL;
        uint8_t *l_368 = &g_213;
        uint32_t *l_369 = (void*)0;
        uint32_t *l_370 = &g_88;
        uint32_t *l_371 = &l_73[8].f1;
        int32_t l_396[1][9] = {{1L,1L,1L,1L,1L,1L,1L,1L,1L}};
        uint32_t l_419[6][1];
        uint32_t l_422[8][5] = {{0x6868B74DL,0x6868B74DL,18446744073709551612UL,0x6868B74DL,0x6868B74DL},{0x90686117L,0x3BBAA280L,0x90686117L,0x90686117L,0x3BBAA280L},{0x6868B74DL,18446744073709551614UL,18446744073709551614UL,0x6868B74DL,18446744073709551614UL},{0x3BBAA280L,0x3BBAA280L,1UL,0x3BBAA280L,0x3BBAA280L},{18446744073709551614UL,0x6868B74DL,18446744073709551614UL,18446744073709551614UL,0x6868B74DL},{0x3BBAA280L,0x90686117L,0x90686117L,0x3BBAA280L,0x90686117L},{0x6868B74DL,0x6868B74DL,18446744073709551612UL,0x6868B74DL,0x6868B74DL},{0x90686117L,0x3BBAA280L,0x90686117L,0x90686117L,0x3BBAA280L}};
        struct S0 l_568 = {-4438,1654,6736,7575,1205,1889,1904,125};
        int16_t *l_602[2];
        uint16_t l_648 = 0xD96EL;
        union U5 l_699 = {-9L};
        const uint64_t *l_816 = &l_175[3];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_419[i][j] = 0x6590245AL;
        }
        for (i = 0; i < 2; i++)
            l_602[i] = &l_254.f2;
    }
    return l_240[8][3];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_94.f3, "g_94.f3", print_hash_value);
    transparent_crc(g_94.f4, "g_94.f4", print_hash_value);
    transparent_crc(g_94.f5, "g_94.f5", print_hash_value);
    transparent_crc(g_94.f6, "g_94.f6", print_hash_value);
    transparent_crc(g_94.f7, "g_94.f7", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    transparent_crc(g_108.f1, "g_108.f1", print_hash_value);
    transparent_crc(g_108.f2, "g_108.f2", print_hash_value);
    transparent_crc(g_108.f3, "g_108.f3", print_hash_value);
    transparent_crc(g_108.f4, "g_108.f4", print_hash_value);
    transparent_crc(g_108.f5, "g_108.f5", print_hash_value);
    transparent_crc(g_108.f6, "g_108.f6", print_hash_value);
    transparent_crc(g_108.f7, "g_108.f7", print_hash_value);
    transparent_crc(g_108.f8, "g_108.f8", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_188.f1, "g_188.f1", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_206[i][j][k].f0, "g_206[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_207.f0, "g_207.f0", print_hash_value);
    transparent_crc(g_207.f1, "g_207.f1", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_491[i][j], "g_491[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_554.f0, "g_554.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_601[i], "g_601[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_608.f0, "g_608.f0", print_hash_value);
    transparent_crc(g_608.f1, "g_608.f1", print_hash_value);
    transparent_crc(g_608.f2, "g_608.f2", print_hash_value);
    transparent_crc(g_608.f3, "g_608.f3", print_hash_value);
    transparent_crc(g_608.f4, "g_608.f4", print_hash_value);
    transparent_crc(g_608.f5, "g_608.f5", print_hash_value);
    transparent_crc(g_608.f6, "g_608.f6", print_hash_value);
    transparent_crc(g_608.f7, "g_608.f7", print_hash_value);
    transparent_crc(g_610.f0, "g_610.f0", print_hash_value);
    transparent_crc(g_610.f1, "g_610.f1", print_hash_value);
    transparent_crc(g_610.f2, "g_610.f2", print_hash_value);
    transparent_crc(g_610.f3, "g_610.f3", print_hash_value);
    transparent_crc(g_610.f4, "g_610.f4", print_hash_value);
    transparent_crc(g_610.f5, "g_610.f5", print_hash_value);
    transparent_crc(g_610.f6, "g_610.f6", print_hash_value);
    transparent_crc(g_610.f7, "g_610.f7", print_hash_value);
    transparent_crc(g_611.f0.f0, "g_611.f0.f0", print_hash_value);
    transparent_crc(g_611.f0.f1, "g_611.f0.f1", print_hash_value);
    transparent_crc(g_611.f1, "g_611.f1", print_hash_value);
    transparent_crc(g_611.f2, "g_611.f2", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_679.f0, "g_679.f0", print_hash_value);
    transparent_crc(g_679.f1, "g_679.f1", print_hash_value);
    transparent_crc(g_679.f2, "g_679.f2", print_hash_value);
    transparent_crc(g_679.f3, "g_679.f3", print_hash_value);
    transparent_crc(g_679.f4, "g_679.f4", print_hash_value);
    transparent_crc(g_679.f5, "g_679.f5", print_hash_value);
    transparent_crc(g_679.f6, "g_679.f6", print_hash_value);
    transparent_crc(g_679.f7, "g_679.f7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_730[i][j], "g_730[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_750[i][j][k].f0, "g_750[i][j][k].f0", print_hash_value);
                transparent_crc(g_750[i][j][k].f1, "g_750[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_767, "g_767", print_hash_value);
    transparent_crc(g_893.f0, "g_893.f0", print_hash_value);
    transparent_crc(g_893.f1, "g_893.f1", print_hash_value);
    transparent_crc(g_955, "g_955", print_hash_value);
    transparent_crc(g_956, "g_956", print_hash_value);
    transparent_crc(g_1027, "g_1027", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1111[i].f0, "g_1111[i].f0", print_hash_value);
        transparent_crc(g_1111[i].f1, "g_1111[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1171, "g_1171", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1236[i].f0.f0, "g_1236[i].f0.f0", print_hash_value);
        transparent_crc(g_1236[i].f0.f1, "g_1236[i].f0.f1", print_hash_value);
        transparent_crc(g_1236[i].f1, "g_1236[i].f1", print_hash_value);
        transparent_crc(g_1236[i].f2, "g_1236[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1244[i][j].f0, "g_1244[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_1277[i][j][k], "g_1277[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1294, "g_1294", print_hash_value);
    transparent_crc(g_1453.f0, "g_1453.f0", print_hash_value);
    transparent_crc(g_1486, "g_1486", print_hash_value);
    transparent_crc(g_1517.f0.f0, "g_1517.f0.f0", print_hash_value);
    transparent_crc(g_1517.f0.f1, "g_1517.f0.f1", print_hash_value);
    transparent_crc(g_1517.f1, "g_1517.f1", print_hash_value);
    transparent_crc(g_1517.f2, "g_1517.f2", print_hash_value);
    transparent_crc(g_1683, "g_1683", print_hash_value);
    transparent_crc(g_1803, "g_1803", print_hash_value);
    transparent_crc(g_1809, "g_1809", print_hash_value);
    transparent_crc(g_1812, "g_1812", print_hash_value);
    transparent_crc(g_1813, "g_1813", print_hash_value);
    transparent_crc(g_1830, "g_1830", print_hash_value);
    transparent_crc(g_1895, "g_1895", print_hash_value);
    transparent_crc(g_1993, "g_1993", print_hash_value);
    transparent_crc(g_2003, "g_2003", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2007[i], "g_2007[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2011, "g_2011", print_hash_value);
    transparent_crc(g_2016, "g_2016", print_hash_value);
    transparent_crc(g_2021, "g_2021", print_hash_value);
    transparent_crc(g_2144.f0, "g_2144.f0", print_hash_value);
    transparent_crc(g_2144.f1, "g_2144.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2164[i], "g_2164[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2177, "g_2177", print_hash_value);
    transparent_crc(g_2224.f0, "g_2224.f0", print_hash_value);
    transparent_crc(g_2224.f1, "g_2224.f1", print_hash_value);
    transparent_crc(g_2224.f2, "g_2224.f2", print_hash_value);
    transparent_crc(g_2224.f3, "g_2224.f3", print_hash_value);
    transparent_crc(g_2224.f4, "g_2224.f4", print_hash_value);
    transparent_crc(g_2224.f5, "g_2224.f5", print_hash_value);
    transparent_crc(g_2224.f6, "g_2224.f6", print_hash_value);
    transparent_crc(g_2224.f7, "g_2224.f7", print_hash_value);
    transparent_crc(g_2224.f8, "g_2224.f8", print_hash_value);
    transparent_crc(g_2232.f0, "g_2232.f0", print_hash_value);
    transparent_crc(g_2232.f1, "g_2232.f1", print_hash_value);
    transparent_crc(g_2297, "g_2297", print_hash_value);
    transparent_crc(g_2440, "g_2440", print_hash_value);
    transparent_crc(g_2609, "g_2609", print_hash_value);
    transparent_crc(g_2738.f0, "g_2738.f0", print_hash_value);
    transparent_crc(g_2738.f1, "g_2738.f1", print_hash_value);
    transparent_crc(g_2738.f2, "g_2738.f2", print_hash_value);
    transparent_crc(g_2738.f3, "g_2738.f3", print_hash_value);
    transparent_crc(g_2738.f4, "g_2738.f4", print_hash_value);
    transparent_crc(g_2738.f5, "g_2738.f5", print_hash_value);
    transparent_crc(g_2738.f6, "g_2738.f6", print_hash_value);
    transparent_crc(g_2738.f7, "g_2738.f7", print_hash_value);
    transparent_crc(g_2738.f8, "g_2738.f8", print_hash_value);
    transparent_crc(g_2749, "g_2749", print_hash_value);
    transparent_crc(g_2772, "g_2772", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2801[i], "g_2801[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2804, "g_2804", print_hash_value);
    transparent_crc(g_2810, "g_2810", print_hash_value);
    transparent_crc(g_2827.f0, "g_2827.f0", print_hash_value);
    transparent_crc(g_2827.f1, "g_2827.f1", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2845[i], "g_2845[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2857, "g_2857", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
