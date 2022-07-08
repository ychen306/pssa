// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = D30C3A12
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
   int32_t f1;
   int8_t * f2;
};

union U1 {
   int32_t f0;
   const int16_t f1;
   int16_t f2;
};

union U2 {
   uint16_t f0;
   unsigned f1 : 26;
};


static int32_t g_2 = 0x50E6DA50L;
static int32_t g_6 = 0x72B21A35L;
static int32_t g_7 = (-1L);
static int32_t g_8 = 0x6B3BFA32L;
static int8_t g_15 = (-6L);
static uint16_t g_33 = 0UL;
static uint16_t g_37 = 0xA025L;
static uint8_t g_84 = 0x33L;
static union U0 g_92 = {0UL};
static uint16_t g_101[7] = {65529UL,65535UL,65529UL,65529UL,65535UL,65529UL,65529UL};
static int16_t g_119 = 1L;
static int32_t g_123 = (-3L);
static uint8_t g_127[7][3][1] = {{{0UL},{0xE1L},{0UL}},{{0xE1L},{0UL},{0xE1L}},{{0UL},{0xE1L},{0UL}},{{0xE1L},{0UL},{0xE1L}},{{0UL},{0xE1L},{0UL}},{{0xE1L},{0UL},{0xE1L}},{{0UL},{0xE1L},{0UL}}};
static uint16_t g_133 = 0x338CL;
static union U1 g_138[5] = {{0L},{0L},{0L},{0L},{0L}};
static union U1 *g_137[8][8] = {{(void*)0,&g_138[0],(void*)0,&g_138[4],&g_138[4],(void*)0,&g_138[0],(void*)0},{&g_138[2],&g_138[4],&g_138[2],&g_138[4],&g_138[2],&g_138[4],(void*)0,&g_138[0]},{&g_138[4],&g_138[4],(void*)0,&g_138[0],(void*)0,&g_138[4],&g_138[4],(void*)0},{&g_138[2],(void*)0,(void*)0,&g_138[2],&g_138[2],&g_138[2],(void*)0,(void*)0},{(void*)0,&g_138[2],&g_138[0],&g_138[0],&g_138[2],(void*)0,&g_138[2],&g_138[0]},{&g_138[2],&g_138[2],&g_138[2],(void*)0,(void*)0,&g_138[2],&g_138[2],&g_138[2]},{&g_138[4],(void*)0,&g_138[0],(void*)0,&g_138[4],&g_138[4],(void*)0,&g_138[0]},{&g_138[4],&g_138[4],(void*)0,&g_138[0],(void*)0,&g_138[4],&g_138[4],(void*)0}};
static uint32_t g_147 = 6UL;
static uint16_t g_162[7][9][4] = {{{0x2ACCL,0xE418L,0x805FL,65535UL},{0x3E27L,0x5D02L,0UL,65535UL},{0UL,0xE142L,0xE43CL,0x62D4L},{0xE142L,0xE418L,1UL,0x3E27L},{1UL,0x63D6L,0xD0C8L,0x3787L},{0UL,0x25D9L,0x936DL,0x5406L},{0x2A26L,65533UL,1UL,65533UL},{65535UL,0xE73AL,0x5406L,0xE142L},{3UL,0xC8DEL,4UL,0xF097L}},{{65533UL,0x25FAL,0x256CL,0x74D0L},{65533UL,0xC6ADL,4UL,1UL},{3UL,0x74D0L,0x5406L,0xD1B0L},{65535UL,0x2ACCL,1UL,1UL},{0x2A26L,4UL,0x936DL,1UL},{0UL,0x2A26L,0xD0C8L,0UL},{1UL,65535UL,1UL,2UL},{0xE142L,0x754CL,0xE43CL,0x95B4L},{0UL,1UL,0UL,0xA76EL}},{{0x3E27L,65532UL,0x805FL,2UL},{0x2ACCL,0x62D4L,0UL,0x9686L},{0x63D6L,0x2A26L,0x4CDDL,0x3D9AL},{0x74D0L,1UL,0x0D0CL,1UL},{1UL,1UL,0x5F59L,0xE418L},{0x286AL,0x74D0L,1UL,0UL},{0x0B9DL,0x2FFEL,0xD22CL,0x74D0L},{0x25D9L,0xE43CL,0x3D9AL,0x0B9DL},{0xF097L,0xC8DEL,1UL,0x5D02L}},{{0xE631L,0x3E27L,0x83A0L,65533UL},{1UL,65535UL,0x62D4L,0xC8DEL},{0UL,0x25D9L,0x4CDDL,0x4CDDL},{0xD75BL,0xD75BL,0xDF6FL,0x3E27L},{0x2ACCL,0xD1B0L,5UL,65535UL},{0xE73AL,0xE142L,0UL,5UL},{1UL,0xE142L,1UL,65535UL},{0xE142L,0xD1B0L,0x063BL,0x3E27L},{0UL,0x80E5L,0UL,0x0D0CL}},{{0xD0C8L,0x4CDDL,1UL,0xA76EL},{0x754CL,1UL,0UL,0x063BL},{0x1729L,3UL,0x71F3L,0UL},{0UL,0xA76EL,0xE142L,1UL},{0x063BL,65533UL,0xFFD3L,65535UL},{1UL,0xD1B0L,1UL,0xBA38L},{0UL,65535UL,0x95B4L,0xE43CL},{0UL,65535UL,0UL,0x3D9AL},{0UL,0x5D02L,0xD22CL,0x256CL}},{{0xD0C8L,0x754CL,65532UL,0xD0C8L},{0x5406L,65535UL,0x29BBL,0UL},{0UL,0x286AL,65533UL,0x805FL},{0x63D6L,0x3D9AL,0x2A26L,5UL},{3UL,1UL,0x1729L,0UL},{65535UL,0x0400L,0xBA38L,1UL},{0x80E5L,0x754CL,65535UL,0x808BL},{65535UL,1UL,65535UL,0x3D9AL},{0xDE28L,0UL,0xDE28L,1UL}},{{4UL,65535UL,0x9686L,0x63D6L},{1UL,0xC78FL,0x256CL,65535UL},{0x29BBL,1UL,0x256CL,65534UL},{1UL,0xA76EL,0x9686L,0x936DL},{4UL,0x404EL,0xDE28L,0x063BL},{0xDE28L,0x063BL,65535UL,0x71F3L},{65535UL,0x4CDDL,65535UL,0x62D4L},{0x80E5L,65527UL,0xBA38L,3UL},{65535UL,0xE43CL,0x1729L,65535UL}}};
static int16_t g_172 = 1L;
static int64_t g_192 = (-1L);
static union U0 *g_230 = &g_92;
static uint16_t g_249 = 0xA5BEL;
static uint32_t g_260 = 4294967294UL;
static uint16_t *g_281 = &g_33;
static int8_t g_286 = 0x18L;
static uint16_t **g_297 = &g_281;
static uint16_t ***g_296 = &g_297;
static int16_t g_315[8] = {0x06E9L,2L,0x06E9L,2L,0x06E9L,2L,0x06E9L,2L};
static int8_t g_319 = 0L;
static uint16_t g_320 = 0UL;
static uint64_t g_325 = 8UL;
static int32_t g_334 = (-3L);
static uint64_t g_335 = 0xD1E5C2C58BBABF78LL;
static uint64_t g_356 = 0x47C1FB6B1B6B8CC4LL;
static union U2 g_415[4][5][5] = {{{{1UL},{0x76E6L},{1UL},{65532UL},{65531UL}},{{0xDA3CL},{0xB0A9L},{0xB0A9L},{0xDA3CL},{0xB0A9L}},{{65531UL},{0x76E6L},{0x6785L},{0x76E6L},{65531UL}},{{0xB0A9L},{0xDA3CL},{0xB0A9L},{0xB0A9L},{0xDA3CL}},{{65531UL},{65532UL},{1UL},{0x76E6L},{1UL}}},{{{0xDA3CL},{0xDA3CL},{0UL},{0xDA3CL},{0xDA3CL}},{{1UL},{0x76E6L},{1UL},{65532UL},{65531UL}},{{0xDA3CL},{0xB0A9L},{0xB0A9L},{0xDA3CL},{0xB0A9L}},{{65531UL},{0x76E6L},{0x6785L},{0x76E6L},{65531UL}},{{0xB0A9L},{0xDA3CL},{0xB0A9L},{0xB0A9L},{0xDA3CL}}},{{{65531UL},{65532UL},{1UL},{0x76E6L},{1UL}},{{0xDA3CL},{0xDA3CL},{0UL},{0xDA3CL},{0xDA3CL}},{{1UL},{0x76E6L},{1UL},{65532UL},{65531UL}},{{0xDA3CL},{0xB0A9L},{0xB0A9L},{0xDA3CL},{0xB0A9L}},{{1UL},{65532UL},{65531UL},{65532UL},{1UL}}},{{{0UL},{0xB0A9L},{0UL},{0UL},{0xB0A9L}},{{1UL},{65530UL},{0x6785L},{65532UL},{0x6785L}},{{0xB0A9L},{0xB0A9L},{0xDA3CL},{0xB0A9L},{0xB0A9L}},{{0x6785L},{65532UL},{0x6785L},{65530UL},{1UL}},{{0xB0A9L},{0UL},{0UL},{0xB0A9L},{0UL}}}};
static int16_t *g_418[4] = {&g_315[0],&g_315[0],&g_315[0],&g_315[0]};
static int16_t **g_417[6] = {&g_418[2],&g_418[2],&g_418[2],&g_418[2],&g_418[2],&g_418[2]};
static union U2 *g_427 = &g_415[0][0][3];
static int32_t *g_466 = &g_138[2].f0;
static uint16_t g_474[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
static uint16_t *g_473[5] = {&g_474[0],&g_474[0],&g_474[0],&g_474[0],&g_474[0]};
static int8_t g_476 = 0x84L;
static int8_t *g_475 = &g_476;
static int32_t g_480 = 0x92609108L;
static uint64_t g_481[6] = {0x4131CA756EBC41ADLL,0x4131CA756EBC41ADLL,0x4131CA756EBC41ADLL,0x4131CA756EBC41ADLL,0x4131CA756EBC41ADLL,0x4131CA756EBC41ADLL};
static const union U0 *g_487[7][10][3] = {{{&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92},{(void*)0,(void*)0,&g_92},{&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92},{(void*)0,&g_92,&g_92},{&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92},{&g_92,&g_92,&g_92}},{{(void*)0,&g_92,(void*)0},{&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92},{(void*)0,(void*)0,&g_92},{&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92},{(void*)0,&g_92,&g_92},{&g_92,&g_92,&g_92}},{{&g_92,(void*)0,&g_92},{&g_92,&g_92,&g_92},{(void*)0,&g_92,(void*)0},{&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92},{(void*)0,(void*)0,&g_92},{&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92}},{{(void*)0,&g_92,&g_92},{&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92},{&g_92,&g_92,&g_92},{(void*)0,&g_92,(void*)0},{&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92},{&g_92,&g_92,&g_92},{(void*)0,(void*)0,&g_92},{&g_92,&g_92,&g_92}},{{&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92},{(void*)0,&g_92,&g_92},{&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92},{&g_92,(void*)0,&g_92},{(void*)0,(void*)0,(void*)0},{&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92},{&g_92,&g_92,&g_92}},{{(void*)0,(void*)0,&g_92},{&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92},{&g_92,&g_92,&g_92},{(void*)0,(void*)0,&g_92},{&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92},{&g_92,(void*)0,&g_92},{(void*)0,(void*)0,(void*)0},{&g_92,&g_92,&g_92}},{{&g_92,(void*)0,&g_92},{&g_92,&g_92,&g_92},{(void*)0,(void*)0,&g_92},{&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92},{&g_92,&g_92,&g_92},{(void*)0,(void*)0,&g_92},{&g_92,&g_92,&g_92},{&g_92,(void*)0,&g_92},{&g_92,(void*)0,&g_92}}};
static int32_t **g_490 = &g_466;
static int32_t g_497 = 0x48C11682L;
static uint64_t *g_569 = &g_92.f0;
static uint64_t ** const g_568 = &g_569;
static uint8_t g_627 = 7UL;
static const union U2 * const g_641 = &g_415[0][1][4];
static const union U2 * const *g_640[1][4][7] = {{{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641},{&g_641,&g_641,&g_641,&g_641,&g_641,&g_641,&g_641}}};
static const union U2 * const **g_639 = &g_640[0][1][2];
static uint64_t g_663 = 6UL;
static union U2 * const *g_671 = &g_427;
static union U2 * const **g_670 = &g_671;
static uint32_t g_762 = 0xFA9E1F70L;
static int64_t g_807 = (-1L);
static int16_t g_827[1][3] = {{0L,0L,0L}};
static uint32_t g_839 = 0UL;
static uint32_t *g_846 = &g_147;
static uint32_t **g_845 = &g_846;
static uint32_t ***g_844 = &g_845;
static union U2 * const ***g_864 = &g_670;
static union U2 * const ***g_865 = &g_670;
static union U2 **g_869 = &g_427;
static union U2 ***g_868 = &g_869;
static union U2 ****g_867 = &g_868;
static uint8_t g_892 = 254UL;
static uint32_t g_916[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static uint32_t * const g_915 = &g_916[1];
static uint32_t * const *g_914 = &g_915;
static uint32_t * const **g_913[3] = {&g_914,&g_914,&g_914};
static const uint8_t g_983 = 249UL;
static const uint8_t g_1031 = 0x0BL;
static union U2 *g_1032 = &g_415[2][0][2];
static uint8_t * const g_1069 = &g_127[0][2][0];
static uint8_t * const *g_1068 = &g_1069;
static uint16_t *g_1080 = &g_415[0][1][4].f0;
static uint16_t *g_1081[10] = {&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133};
static uint16_t ** const g_1079[6] = {&g_1080,&g_1080,&g_1080,&g_1080,&g_1080,&g_1080};
static uint16_t ** const *g_1078 = &g_1079[4];
static uint32_t g_1091 = 18446744073709551608UL;
static int64_t g_1124 = 0xBEA4859244F7C985LL;
static int32_t g_1125 = 0xAB355EF5L;
static uint32_t g_1126 = 18446744073709551615UL;
static int64_t g_1132 = 9L;
static int64_t g_1133 = 0x795451FAE925EF15LL;
static uint64_t g_1134 = 4UL;
static union U2 *****g_1139[2] = {(void*)0,(void*)0};
static union U2 g_1177 = {0xAF69L};
static uint64_t g_1193 = 18446744073709551614UL;
static uint64_t g_1217 = 0x71A70F515173A986LL;
static uint16_t g_1281 = 0x3A54L;
static int32_t g_1307 = 0xAA0C7C64L;
static uint16_t g_1308[2][8] = {{0xED64L,0xED64L,0x7A2AL,0xED64L,0xED64L,0x7A2AL,0xED64L,0xED64L},{0xA019L,0xED64L,0xA019L,0xA019L,0xED64L,0xA019L,0xA019L,0xED64L}};
static uint32_t g_1316 = 18446744073709551615UL;
static const uint64_t g_1387 = 0UL;
static uint32_t ****g_1406 = &g_844;
static uint16_t g_1468 = 0UL;
static uint8_t *g_1612 = &g_127[6][0][0];
static uint8_t **g_1611 = &g_1612;
static uint8_t ***g_1610[2][9][5] = {{{&g_1611,&g_1611,&g_1611,&g_1611,&g_1611},{(void*)0,&g_1611,(void*)0,&g_1611,(void*)0},{&g_1611,&g_1611,&g_1611,&g_1611,&g_1611},{&g_1611,&g_1611,&g_1611,&g_1611,&g_1611},{&g_1611,&g_1611,&g_1611,&g_1611,&g_1611},{(void*)0,&g_1611,(void*)0,&g_1611,(void*)0},{&g_1611,&g_1611,&g_1611,&g_1611,&g_1611},{&g_1611,&g_1611,&g_1611,&g_1611,&g_1611},{&g_1611,&g_1611,&g_1611,&g_1611,&g_1611}},{{(void*)0,&g_1611,(void*)0,&g_1611,(void*)0},{&g_1611,&g_1611,&g_1611,&g_1611,&g_1611},{&g_1611,&g_1611,&g_1611,&g_1611,&g_1611},{&g_1611,&g_1611,&g_1611,&g_1611,&g_1611},{(void*)0,&g_1611,(void*)0,&g_1611,(void*)0},{&g_1611,&g_1611,&g_1611,&g_1611,&g_1611},{&g_1611,&g_1611,&g_1611,&g_1611,&g_1611},{&g_1611,&g_1611,&g_1611,&g_1611,&g_1611},{(void*)0,&g_1611,(void*)0,&g_1611,(void*)0}}};
static uint8_t ****g_1609 = &g_1610[0][4][4];
static int32_t *g_1697 = &g_334;
static int32_t **g_1696 = &g_1697;
static int32_t ** const *g_1699 = &g_490;
static int32_t ** const **g_1698 = &g_1699;
static uint64_t **g_1808 = &g_569;
static uint64_t *** const g_1807 = &g_1808;
static uint64_t *** const *g_1806 = &g_1807;
static uint32_t g_1857 = 0x8B28A559L;
static uint16_t g_1920 = 0UL;



static uint16_t func_1(void);
static int32_t * func_9(int8_t * p_10, int8_t * p_11, int32_t * p_12, int64_t p_13);
static union U0 func_17(int16_t p_18, int32_t p_19);
static int64_t func_38(uint64_t p_39, const uint16_t p_40);
static uint16_t func_41(int8_t * p_42, int32_t p_43, uint32_t p_44);
static uint64_t func_53(union U1 p_54, uint16_t * p_55, int8_t * p_56, int8_t p_57, uint16_t * p_58);
static union U1 func_59(int32_t * p_60, const int8_t p_61, uint64_t p_62);
static uint64_t func_63(int32_t * p_64, const int8_t * p_65, int32_t p_66, uint64_t p_67, int8_t * p_68);
static int32_t * func_69(int8_t * p_70, union U0 p_71, const union U2 p_72, int8_t * p_73, const union U1 p_74);
static int8_t * func_75(int16_t p_76, uint16_t p_77, uint16_t * p_78, int32_t p_79);
# 169 "<stdin>"
static uint16_t func_1(void)
{
    int16_t l_5[3][7] = {{1L,(-9L),4L,4L,(-9L),1L,(-9L)},{0L,0x27D2L,0x27D2L,0L,5L,0L,0x27D2L},{2L,2L,1L,4L,1L,2L,2L}};
    int32_t *l_1345 = &g_480;
    uint64_t *l_1354 = &g_335;
    uint32_t ***l_1363 = &g_845;
    union U1 l_1375 = {0x36A8DEC5L};
    int64_t l_1381 = 0xE819A9C51D55FF70LL;
    uint32_t l_1452[3][8] = {{0xFA571D2CL,4294967295UL,0xF65BF47EL,4294967295UL,0xFA571D2CL,0xFA571D2CL,4294967295UL,0xF65BF47EL},{0xFA571D2CL,0xFA571D2CL,4294967295UL,0xF65BF47EL,4294967295UL,0xFA571D2CL,0xFA571D2CL,4294967295UL},{0x3F6FA51BL,4294967295UL,4294967295UL,0x3F6FA51BL,4294967295UL,0x3F6FA51BL,4294967295UL,4294967295UL}};
    union U0 l_1457 = {0xFC0D3B88E1AC0561LL};
    int8_t l_1467 = (-1L);
    uint32_t l_1538 = 0x718147B5L;
    uint64_t ** const *l_1579 = &g_568;
    uint64_t ** const **l_1578 = &l_1579;
    uint64_t ** const **l_1581 = (void*)0;
    union U2 l_1653 = {0x7742L};
    uint32_t l_1683 = 0xFC2D3C8CL;
    int64_t l_1728 = (-10L);
    int32_t l_1755 = 1L;
    uint32_t l_1764 = 4UL;
    uint16_t l_1775 = 0x64ABL;
    uint16_t **l_1918 = &g_473[3];
    int16_t l_1919 = 0x4587L;
    int32_t *l_1921[8] = {&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123};
    int i, j;
    for (g_2 = 29; (g_2 < (-6)); g_2 = safe_sub_func_int8_t_s_s(g_2, 1))
    {
        int8_t *l_16 = &g_15;
        int32_t l_1336 = (-9L);
        const uint32_t *l_1443 = &g_1126;
        const union U2 l_1474 = {0x2ADCL};
        int16_t **l_1491 = &g_418[2];
        uint16_t l_1506 = 0UL;
        int64_t l_1516 = 0x595B58DD290070EDLL;
        int8_t l_1620 = 0x6DL;
        int32_t l_1655 = 7L;
        union U1 l_1677 = {-1L};
        int8_t l_1685[1][1][1];
        int16_t l_1686[4] = {0x5590L,0x5590L,0x5590L,0x5590L};
        uint64_t l_1700 = 1UL;
        uint64_t ** const ***l_1748 = &l_1578;
        uint32_t l_1794 = 0xF94DDAFFL;
        int32_t l_1855 = 0L;
        int32_t l_1856 = (-1L);
        int32_t l_1876[5][10][5] = {{{1L,0xC77FA8EEL,0xA600EFBBL,(-3L),(-2L)},{1L,0x4923B5DAL,(-3L),0L,1L},{0L,0x4923B5DAL,0x06601CC7L,0L,(-2L)},{0L,0xC77FA8EEL,(-2L),(-6L),0x9B39289FL},{0xE0CFDE68L,0x817A7D88L,(-9L),(-9L),0x817A7D88L},{0xE3BC48DCL,0x6DEE2BA7L,0xFD774676L,(-8L),0x13480862L},{(-2L),0x1B5644E4L,0x23C84425L,0xA600EFBBL,0x00CA6E7FL},{0x23C84425L,0xABEB634EL,0x22C9EBFEL,(-2L),1L},{(-2L),(-1L),(-6L),1L,1L},{0xE3BC48DCL,0x5344F1B5L,0L,0x13480862L,1L}},{{0xE0CFDE68L,(-8L),(-1L),0xABEB634EL,(-3L)},{0L,(-1L),0xEA213DCCL,(-1L),0x5344F1B5L},{0L,0x006A737CL,0L,0x817A7D88L,0x5344F1B5L},{1L,1L,0x006A737CL,(-1L),(-3L)},{1L,(-1L),0L,0L,1L},{0x4FB1E52FL,1L,1L,0x4FB1E52FL,1L},{0xC77FA8EEL,0xB5037E7CL,1L,1L,0xB5037E7CL},{0xA600EFBBL,0x5344F1B5L,0L,1L,0xFD774676L},{(-1L),0L,1L,1L,0x1B5644E4L},{(-2L),0x06601CC7L,1L,(-6L),(-5L)}},{{0x6DEE2BA7L,0L,(-7L),(-6L),(-1L)},{0L,(-1L),(-1L),0L,1L},{1L,0L,0x22C9EBFEL,(-5L),0L},{0xEA213DCCL,(-6L),0x22C9EBFEL,0x13480862L,0x006A737CL},{1L,0x006A737CL,(-1L),(-3L),(-2L)},{0xFD774676L,(-1L),(-7L),0x1B5644E4L,(-7L)},{0x13480862L,0x13480862L,1L,(-1L),(-2L)},{0xE3BC48DCL,(-1L),1L,0x5344F1B5L,0x817A7D88L},{(-8L),0x66BD896FL,0L,0L,0x4FB1E52FL},{1L,(-1L),(-1L),0L,(-8L)}},{{(-7L),0x13480862L,0xB5037E7CL,(-8L),0xC77FA8EEL},{0x22C9EBFEL,(-1L),0xF067096DL,0xEA213DCCL,(-2L)},{(-9L),0x006A737CL,0x79EE3F78L,0x9B39289FL,0x23C84425L},{(-1L),(-6L),0L,0x4923B5DAL,0x06601CC7L},{(-1L),0L,(-9L),0x00CA6E7FL,1L},{(-9L),(-1L),0x13480862L,1L,0x4923B5DAL},{0x22C9EBFEL,0L,(-6L),0L,0x22C9EBFEL},{(-7L),0x06601CC7L,0xEA213DCCL,0x4FB1E52FL,0x13480862L},{1L,0L,1L,1L,(-9L)},{(-8L),0x5344F1B5L,0xC77FA8EEL,0x06601CC7L,0x13480862L}},{{0xE3BC48DCL,1L,0xE0CFDE68L,0xFD774676L,0x22C9EBFEL},{0x13480862L,0xB5037E7CL,(-8L),0xC77FA8EEL,0x4923B5DAL},{0xFD774676L,0L,0x006A737CL,0xB5037E7CL,1L},{1L,(-7L),(-9L),0xA600EFBBL,0x06601CC7L},{0xEA213DCCL,0x79EE3F78L,0x00CA6E7FL,0xA600EFBBL,0x23C84425L},{1L,0x6DEE2BA7L,0L,0xB5037E7CL,(-2L)},{0L,0L,(-1L),0xC77FA8EEL,0xC77FA8EEL},{0x6DEE2BA7L,0xE3BC48DCL,0x6DEE2BA7L,0xFD774676L,(-8L)},{(-2L),(-1L),1L,0x06601CC7L,0x4FB1E52FL},{(-1L),(-3L),0xFD774676L,1L,0x817A7D88L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1685[i][j][k] = (-1L);
            }
        }
        for (g_6 = 2; (g_6 >= 0); g_6 -= 1)
        {
            int8_t *l_14 = &g_15;
            union U0 l_1337 = {0x4DCD877CE7CEF6B2LL};
            int32_t *l_1346 = &g_92.f1;
            const uint32_t l_1355 = 0x0356321AL;
            union U1 l_1376[7] = {{9L},{9L},{9L},{9L},{9L},{9L},{9L}};
            uint64_t l_1444[8][9] = {{0x26CB33CDBE2F6CFFLL,1UL,0x2224E086B1C8843DLL,0xB731BFD83D08A3AALL,0x7C79705464763BEBLL,0UL,0UL,0x7C79705464763BEBLL,0xB731BFD83D08A3AALL},{18446744073709551612UL,0x26CB33CDBE2F6CFFLL,18446744073709551612UL,0UL,0xD6C249961E34C62ALL,0UL,0x9065E98FF90D65ACLL,1UL,0x44395BA0E45B3596LL},{0x7CD947F09713E9C3LL,0UL,0xE06397CEC84957F8LL,1UL,0xA5797ADBDC89C57ELL,0xB731BFD83D08A3AALL,0x81D675686D2B2C6DLL,18446744073709551612UL,1UL},{0UL,0UL,0x26CB33CDBE2F6CFFLL,0UL,0UL,0x26CB33CDBE2F6CFFLL,0UL,0UL,0x7C79705464763BEBLL},{18446744073709551612UL,0UL,0xD6C249961E34C62ALL,0UL,0x9065E98FF90D65ACLL,1UL,0xE06397CEC84957F8LL,0x7C79705464763BEBLL,18446744073709551615UL},{0UL,0UL,1UL,0x26CB33CDBE2F6CFFLL,0x7C79705464763BEBLL,1UL,18446744073709551612UL,1UL,0x7C79705464763BEBLL},{1UL,0x81D675686D2B2C6DLL,0x81D675686D2B2C6DLL,1UL,0x26CB33CDBE2F6CFFLL,0xA5797ADBDC89C57ELL,18446744073709551612UL,18446744073709551612UL,1UL},{0x26CB33CDBE2F6CFFLL,1UL,0UL,0UL,0x81D675686D2B2C6DLL,0xD6C249961E34C62ALL,0xE06397CEC84957F8LL,0xB731BFD83D08A3AALL,0x44395BA0E45B3596LL}};
            int32_t l_1450 = 0xB4A14FBAL;
            union U2 l_1451 = {65529UL};
            int16_t **l_1473[10][8][3] = {{{&g_418[0],&g_418[2],(void*)0},{&g_418[1],&g_418[2],&g_418[2]},{(void*)0,&g_418[1],&g_418[2]},{(void*)0,&g_418[1],&g_418[3]},{(void*)0,(void*)0,&g_418[0]},{&g_418[2],&g_418[2],&g_418[2]},{&g_418[0],&g_418[2],&g_418[2]},{&g_418[2],(void*)0,&g_418[2]}},{{(void*)0,&g_418[3],&g_418[2]},{&g_418[2],&g_418[2],&g_418[3]},{&g_418[3],&g_418[1],&g_418[2]},{&g_418[1],&g_418[2],&g_418[1]},{&g_418[2],&g_418[2],&g_418[2]},{&g_418[0],&g_418[2],(void*)0},{&g_418[2],(void*)0,(void*)0},{(void*)0,&g_418[1],&g_418[2]}},{{&g_418[1],(void*)0,(void*)0},{&g_418[0],&g_418[0],(void*)0},{&g_418[0],&g_418[2],&g_418[2]},{&g_418[2],&g_418[0],&g_418[3]},{&g_418[3],(void*)0,(void*)0},{&g_418[2],&g_418[1],(void*)0},{&g_418[2],(void*)0,(void*)0},{&g_418[0],&g_418[2],&g_418[2]}},{{(void*)0,&g_418[2],(void*)0},{&g_418[2],&g_418[2],&g_418[2]},{&g_418[0],&g_418[1],&g_418[2]},{&g_418[3],&g_418[2],&g_418[2]},{&g_418[2],&g_418[3],&g_418[2]},{&g_418[2],(void*)0,&g_418[2]},{&g_418[1],&g_418[2],(void*)0},{&g_418[2],&g_418[2],&g_418[3]}},{{&g_418[2],(void*)0,&g_418[2]},{&g_418[2],&g_418[1],&g_418[0]},{&g_418[3],&g_418[1],&g_418[2]},{(void*)0,&g_418[2],(void*)0},{(void*)0,&g_418[2],&g_418[2]},{&g_418[2],&g_418[2],&g_418[2]},{&g_418[0],&g_418[0],(void*)0},{&g_418[2],&g_418[1],&g_418[2]}},{{&g_418[2],&g_418[0],&g_418[0]},{&g_418[2],(void*)0,&g_418[2]},{(void*)0,&g_418[2],&g_418[3]},{(void*)0,&g_418[3],(void*)0},{&g_418[0],(void*)0,&g_418[2]},{&g_418[2],&g_418[1],&g_418[2]},{(void*)0,&g_418[2],&g_418[2]},{&g_418[1],(void*)0,&g_418[2]}},{{&g_418[2],(void*)0,&g_418[3]},{&g_418[2],(void*)0,&g_418[2]},{(void*)0,(void*)0,&g_418[2]},{&g_418[2],&g_418[2],&g_418[0]},{&g_418[2],&g_418[0],&g_418[2]},{&g_418[1],(void*)0,&g_418[0]},{&g_418[2],&g_418[0],&g_418[2]},{&g_418[2],&g_418[3],&g_418[2]}},{{(void*)0,&g_418[2],&g_418[1]},{&g_418[2],&g_418[2],&g_418[0]},{&g_418[2],&g_418[2],&g_418[0]},{&g_418[1],&g_418[1],(void*)0},{&g_418[2],&g_418[2],&g_418[3]},{&g_418[2],&g_418[1],&g_418[0]},{(void*)0,&g_418[1],&g_418[0]},{&g_418[2],&g_418[2],&g_418[1]}},{{&g_418[2],&g_418[1],&g_418[2]},{&g_418[1],&g_418[3],&g_418[2]},{(void*)0,&g_418[3],&g_418[1]},{&g_418[2],(void*)0,&g_418[2]},{&g_418[2],&g_418[2],(void*)0},{(void*)0,&g_418[2],(void*)0},{&g_418[0],&g_418[0],&g_418[2]},{&g_418[2],&g_418[0],(void*)0}},{{(void*)0,&g_418[3],&g_418[3]},{&g_418[2],&g_418[3],&g_418[1]},{(void*)0,&g_418[0],&g_418[2]},{(void*)0,&g_418[0],&g_418[2]},{&g_418[3],&g_418[3],&g_418[0]},{&g_418[3],&g_418[3],&g_418[2]},{&g_418[0],&g_418[0],&g_418[2]},{&g_418[2],&g_418[0],(void*)0}}};
            uint8_t *l_1498 = &g_892;
            uint16_t **l_1553 = &g_1081[2];
            uint32_t *l_1566[1][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t ***l_1603[2][5][1] = {{{&g_490},{&g_490},{&g_490},{&g_490},{(void*)0}},{{&g_490},{&g_490},{&g_490},{&g_490},{(void*)0}}};
            int32_t ****l_1602 = &l_1603[1][0][0];
            union U0 **l_1654[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1654[i] = &g_230;
            for (g_7 = 0; (g_7 <= 2); g_7 += 1)
            {
                int32_t *l_1326[10] = {&g_497,&g_497,&g_497,&g_497,&g_497,&g_497,&g_497,&g_497,&g_497,&g_497};
                int32_t **l_1329 = &l_1326[3];
                int32_t **l_1342 = (void*)0;
                int32_t **l_1343 = (void*)0;
                int32_t **l_1344 = (void*)0;
                uint64_t **l_1351 = (void*)0;
                uint64_t *l_1353 = &g_325;
                uint64_t **l_1352 = &l_1353;
                union U1 l_1356[4] = {{0L},{0L},{0L},{0L}};
                uint64_t l_1401 = 18446744073709551613UL;
                uint16_t l_1412 = 0UL;
                uint16_t l_1445[8][7] = {{5UL,5UL,5UL,5UL,5UL,5UL,5UL},{0UL,1UL,0UL,1UL,0UL,1UL,0UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL},{0UL,1UL,0UL,1UL,0UL,1UL,0UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL},{0UL,1UL,0UL,1UL,0UL,1UL,0UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL},{0UL,1UL,0UL,1UL,0UL,1UL,0UL}};
                int i, j;
                for (g_8 = 2; (g_8 >= 0); g_8 -= 1)
                {
                    int i, j;
                    return l_5[g_7][g_6];
                }
            }
        }
        for (l_1516 = 0; (l_1516 < 22); l_1516++)
        {
            int32_t l_1676[10][1][10] = {{{8L,0xD08CDEC5L,0xABAE9E38L,1L,1L,(-8L),1L,1L,0xABAE9E38L,0xD08CDEC5L}},{{7L,0xEF1150A1L,(-2L),0xF072FF6DL,0L,0x9421F1A2L,0xF072FF6DL,0x88E3FE58L,0xCBC10AC2L,7L}},{{(-2L),8L,0xEF1150A1L,0L,0xD08CDEC5L,0x9421F1A2L,0xF6E96E95L,8L,0L,0L}},{{7L,1L,(-8L),8L,8L,(-8L),1L,7L,0xA7A762B5L,1L}},{{8L,0xF6E96E95L,0x9421F1A2L,0xD08CDEC5L,0L,0xEF1150A1L,8L,(-2L),0x88E3FE58L,8L}},{{0x88E3FE58L,0xF072FF6DL,0x9421F1A2L,0L,0xF072FF6DL,(-2L),0xEF1150A1L,7L,0xEF1150A1L,(-2L)}},{{1L,1L,(-8L),1L,1L,0xABAE9E38L,0xD08CDEC5L,8L,0xABAE9E38L,(-7L)}},{{(-7L),0xF6E96E95L,0xEF1150A1L,(-7L),0x9421F1A2L,0L,(-1L),0x88E3FE58L,0L,(-7L)}},{{0x88E3FE58L,(-7L),(-2L),0x9421F1A2L,1L,0xF6E96E95L,0xF6E96E95L,1L,0x9421F1A2L,(-2L)}},{{(-7L),(-7L),0xABAE9E38L,(-1L),0xF072FF6DL,(-8L),7L,(-7L),0xABAE9E38L,8L}}};
            uint64_t l_1737 = 0x5E51192A9490F5B6LL;
            const uint64_t *l_1754 = (void*)0;
            const uint64_t * const *l_1753 = &l_1754;
            const uint64_t * const **l_1752 = &l_1753;
            const uint64_t * const ***l_1751 = &l_1752;
            const uint64_t * const ****l_1750 = &l_1751;
            uint64_t l_1760 = 18446744073709551615UL;
            union U2 *l_1769 = &g_1177;
            int32_t l_1802 = 0xDD1669F7L;
            union U2 ****l_1804[9][6][4] = {{{&g_868,(void*)0,&g_868,&g_868},{&g_868,&g_868,&g_868,&g_868},{(void*)0,&g_868,&g_868,&g_868},{&g_868,&g_868,&g_868,&g_868},{(void*)0,(void*)0,&g_868,&g_868},{&g_868,&g_868,&g_868,&g_868}},{{&g_868,&g_868,&g_868,&g_868},{&g_868,&g_868,&g_868,&g_868},{(void*)0,&g_868,&g_868,(void*)0},{&g_868,&g_868,&g_868,&g_868},{&g_868,&g_868,(void*)0,&g_868},{(void*)0,&g_868,&g_868,(void*)0}},{{&g_868,&g_868,&g_868,&g_868},{&g_868,(void*)0,(void*)0,&g_868},{&g_868,(void*)0,&g_868,&g_868},{&g_868,(void*)0,&g_868,&g_868},{&g_868,&g_868,&g_868,(void*)0},{&g_868,&g_868,&g_868,&g_868}},{{&g_868,&g_868,&g_868,&g_868},{&g_868,&g_868,&g_868,(void*)0},{(void*)0,&g_868,&g_868,&g_868},{&g_868,&g_868,&g_868,&g_868},{(void*)0,(void*)0,(void*)0,&g_868},{&g_868,(void*)0,&g_868,&g_868}},{{&g_868,&g_868,&g_868,&g_868},{&g_868,(void*)0,&g_868,&g_868},{&g_868,&g_868,(void*)0,&g_868},{&g_868,&g_868,(void*)0,(void*)0},{&g_868,&g_868,&g_868,&g_868},{&g_868,&g_868,&g_868,&g_868}},{{&g_868,&g_868,&g_868,(void*)0},{&g_868,(void*)0,&g_868,(void*)0},{&g_868,&g_868,&g_868,&g_868},{&g_868,&g_868,(void*)0,&g_868},{&g_868,&g_868,(void*)0,&g_868},{&g_868,&g_868,(void*)0,&g_868}},{{&g_868,&g_868,(void*)0,&g_868},{&g_868,&g_868,&g_868,(void*)0},{&g_868,(void*)0,&g_868,&g_868},{&g_868,&g_868,&g_868,(void*)0},{&g_868,(void*)0,&g_868,&g_868},{&g_868,&g_868,&g_868,&g_868}},{{&g_868,&g_868,(void*)0,&g_868},{&g_868,(void*)0,(void*)0,(void*)0},{&g_868,&g_868,&g_868,&g_868},{&g_868,&g_868,&g_868,&g_868},{&g_868,(void*)0,&g_868,&g_868},{&g_868,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_868,&g_868,&g_868},{&g_868,&g_868,&g_868,&g_868},{(void*)0,&g_868,&g_868,(void*)0},{&g_868,&g_868,&g_868,&g_868},{&g_868,&g_868,(void*)0,(void*)0},{(void*)0,(void*)0,&g_868,&g_868}}};
            uint16_t l_1853 = 65535UL;
            int i, j, k;
            if ((0x541F651E4C50FB10LL > (--(****l_1578))))
            {
                union U0 l_1671 = {0x30D84CC372A89AE8LL};
                int32_t l_1682 = (-3L);
                int16_t *l_1684 = &l_1375.f2;
                const union U2 *l_1722 = (void*)0;
                int32_t l_1763 = (-1L);
                union U2 *l_1767 = &l_1653;
                if (((l_1676[1][0][1] = (((**l_1491) ^= 0x7B2EL) < (((safe_sub_func_int64_t_s_s((((+(safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((l_1671 , (l_1655 != ((((((*l_1684) = (safe_div_func_uint32_t_u_u((0xBFFFC0125CA13D31LL | ((safe_mul_func_int16_t_s_s(((l_1676[1][0][1] & 18446744073709551606UL) && l_1467), ((l_1677 , (((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((1L & 0UL) >= 8L), l_1682)), 2)) < l_1474.f0) || l_1676[4][0][7])) , 8L))) , 0x76934A49F8CC1081LL)), l_1683))) <= l_1506) , l_1685[0][0][0]) < l_1686[0]) == 0x147161B9L))), (*g_466))), l_1620)), l_1676[3][0][6]))) <= l_1381) || 2L), 0UL)) == (**g_845)) >= (**g_568)))) >= l_1671.f0))
                {
                    uint16_t *** const l_1693 = &g_297;
                    int32_t l_1701[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1701[i] = 0x11E333F8L;
                    (**g_490) |= (((safe_div_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(1L, (safe_rshift_func_uint8_t_u_s(((((void*)0 != l_1693) | (safe_sub_func_int64_t_s_s(((void*)0 == g_1696), (**g_568)))) != (g_1698 == ((****g_864) , &g_1699))), 4)))), l_1700)) >= 0xE26FA9D4D407E844LL) < l_1701[1]);
                }
                else
                {
                    int64_t l_1703[6][6][7] = {{{0x6F6E60E5CC2D0403LL,0x215948990715F5A1LL,0x215948990715F5A1LL,0x6F6E60E5CC2D0403LL,3L,0xC2E2970F12791F73LL,0x33B29554B891867BLL},{0xAB4264C8F97FB07BLL,0xC7B559D87B137957LL,0L,(-2L),(-6L),(-2L),0L},{0x42A60FCB5F25E3C6LL,0x6F6E60E5CC2D0403LL,(-1L),0L,0x6F6E60E5CC2D0403LL,0L,0x33B29554B891867BLL},{4L,0xFAD7B2A48AA1C612LL,0xB464081BA7246BADLL,0xC7B559D87B137957LL,0xB464081BA7246BADLL,0xFAD7B2A48AA1C612LL,4L},{3L,0L,0xC2E2970F12791F73LL,0L,0x6F6E60E5CC2D0403LL,0xC2E2970F12791F73LL,0x215948990715F5A1LL},{(-6L),0x248D73CCCF74381ALL,0x88992005D3B81719LL,0x248D73CCCF74381ALL,(-6L),(-7L),0xBFED794C8CCE5A95LL}},{{0x6F6E60E5CC2D0403LL,0L,0xC2E2970F12791F73LL,0L,3L,3L,0L},{0xB464081BA7246BADLL,0xC7B559D87B137957LL,0xB464081BA7246BADLL,0xFAD7B2A48AA1C612LL,4L,(-2L),0xB464081BA7246BADLL},{0x6F6E60E5CC2D0403LL,0L,(-1L),0x6F6E60E5CC2D0403LL,0x42A60FCB5F25E3C6LL,0x33B29554B891867BLL,0xC2E2970F12791F73LL},{0xAB4264C8F97FB07BLL,6L,0x88992005D3B81719LL,(-2L),0xC12BF4C1847C2C06LL,6L,0L},{0L,0L,(-1L),(-1L),0L,0L,1L},{0xB464081BA7246BADLL,0xFAD7B2A48AA1C612LL,4L,(-2L),0xB464081BA7246BADLL,0x248D73CCCF74381ALL,0xB464081BA7246BADLL}},{{3L,(-1L),1L,0L,0x15AF2356D75EB1C0LL,1L,0x215948990715F5A1LL},{0xC12BF4C1847C2C06LL,0xFAD7B2A48AA1C612LL,0x88992005D3B81719LL,(-7L),0xAB4264C8F97FB07BLL,(-7L),0x88992005D3B81719LL},{0L,0L,0x33B29554B891867BLL,0x215948990715F5A1LL,3L,0x42A60FCB5F25E3C6LL,0x215948990715F5A1LL},{0xB464081BA7246BADLL,6L,0x0B5ECA019CF6F4C2LL,0xFAD7B2A48AA1C612LL,0x0B5ECA019CF6F4C2LL,6L,0xB464081BA7246BADLL},{0x15AF2356D75EB1C0LL,0x215948990715F5A1LL,(-1L),0x15AF2356D75EB1C0LL,3L,1L,1L},{0xAB4264C8F97FB07BLL,(-2L),0xBFED794C8CCE5A95LL,(-2L),0xAB4264C8F97FB07BLL,0xC7B559D87B137957LL,0L}},{{3L,0x15AF2356D75EB1C0LL,(-1L),0x215948990715F5A1LL,0x15AF2356D75EB1C0LL,0L,0xC2E2970F12791F73LL},{0x0B5ECA019CF6F4C2LL,0xFAD7B2A48AA1C612LL,0x0B5ECA019CF6F4C2LL,6L,0xB464081BA7246BADLL,(-7L),0x0B5ECA019CF6F4C2LL},{3L,0x215948990715F5A1LL,0x33B29554B891867BLL,0L,0L,0x33B29554B891867BLL,0x215948990715F5A1LL},{0xAB4264C8F97FB07BLL,(-7L),0x88992005D3B81719LL,0xFAD7B2A48AA1C612LL,0xC12BF4C1847C2C06LL,(-7L),0L},{0x15AF2356D75EB1C0LL,0L,1L,(-1L),3L,0L,(-1L)},{0xB464081BA7246BADLL,(-2L),4L,0xFAD7B2A48AA1C612LL,0xB464081BA7246BADLL,0xC7B559D87B137957LL,0xB464081BA7246BADLL}},{{0L,(-1L),(-1L),0L,0L,1L,0xC2E2970F12791F73LL},{0xC12BF4C1847C2C06LL,(-2L),0x88992005D3B81719LL,6L,0xAB4264C8F97FB07BLL,6L,0x88992005D3B81719LL},{3L,0L,0L,0x215948990715F5A1LL,0L,0x42A60FCB5F25E3C6LL,0xC2E2970F12791F73LL},{0xB464081BA7246BADLL,(-7L),0x0B5ECA019CF6F4C2LL,(-2L),0x0B5ECA019CF6F4C2LL,(-7L),0xB464081BA7246BADLL},{0L,0x215948990715F5A1LL,1L,0x15AF2356D75EB1C0LL,0L,1L,(-1L)},{0xAB4264C8F97FB07BLL,0xFAD7B2A48AA1C612LL,0xBFED794C8CCE5A95LL,0xFAD7B2A48AA1C612LL,0xAB4264C8F97FB07BLL,0x248D73CCCF74381ALL,0L}},{{0L,0x15AF2356D75EB1C0LL,1L,0x215948990715F5A1LL,0L,0L,0x215948990715F5A1LL},{0x0B5ECA019CF6F4C2LL,(-2L),0x0B5ECA019CF6F4C2LL,(-7L),0xB464081BA7246BADLL,6L,0x0B5ECA019CF6F4C2LL},{0L,0x215948990715F5A1LL,0L,0L,3L,0x33B29554B891867BLL,0xC2E2970F12791F73LL},{0xAB4264C8F97FB07BLL,6L,0x88992005D3B81719LL,(-2L),0xC12BF4C1847C2C06LL,6L,0L},{0L,0L,(-1L),(-1L),0L,0L,1L},{0xB464081BA7246BADLL,0xFAD7B2A48AA1C612LL,4L,(-2L),0xB464081BA7246BADLL,0x248D73CCCF74381ALL,0xB464081BA7246BADLL}}};
                    int64_t *l_1708 = &g_192;
                    const uint16_t *l_1711 = &g_162[0][3][2];
                    const uint16_t **l_1710[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1710[i] = &l_1711;
                    (*g_466) &= (!0xF5L);
                    (*g_466) = l_1676[1][0][1];
                    (*g_466) ^= ((((-1L) != ((l_1703[3][2][0] && (safe_mod_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u((((*l_1708) = (((void*)0 == &g_1698) || l_1467)) > (+(l_1710[1] != ((*g_296) = (*g_296))))), (safe_add_func_uint32_t_u_u(((**g_1078) != &l_1506), l_1676[5][0][8])))) || (*g_1612)), l_1671.f0))) != 8L)) && l_1703[1][5][1]) != (*g_475));
                    if ((safe_lshift_func_int8_t_s_u(0L, 5)))
                    {
                        const union U2 **l_1723 = &l_1722;
                        uint32_t * const ***l_1730 = &g_913[0];
                        uint32_t * const ****l_1729 = &l_1730;
                        int64_t *l_1731 = (void*)0;
                        int64_t *l_1732 = &l_1381;
                        int32_t l_1733 = 0x443C5B94L;
                        int32_t *l_1734[4][8];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_1734[i][j] = &l_1676[5][0][2];
                        }
                        (*g_466) |= (-5L);
                        l_1676[5][0][5] = ((****g_1698) |= (safe_div_func_int64_t_s_s((l_1474 , l_1686[0]), (((l_1375.f0 = (safe_mul_func_int16_t_s_s(l_1703[0][0][6], l_1677.f1))) | ((safe_add_func_uint64_t_u_u((((((*l_1723) = l_1722) != &l_1474) >= (l_1452[1][4] , l_1474.f0)) == ((safe_div_func_int64_t_s_s((g_1132 = ((*l_1732) = (safe_mod_func_int64_t_s_s(((*l_1708) = ((((((((((*g_1612) = l_1728) ^ l_1703[3][5][6]) >= l_1381) || 0UL) , l_1703[1][2][2]) || l_1677.f0) , l_1729) == (void*)0) ^ (**g_568))), l_1671.f0)))), 0x66A43DF68B9D0E0BLL)) ^ 65528UL)), l_1733)) || (-10L))) , l_1703[4][3][2]))));
                    }
                    else
                    {
                        int32_t *l_1735 = &g_1307;
                        int32_t *l_1736[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1736[i] = (void*)0;
                        --l_1737;
                    }
                }
                if (((*g_466) = (safe_mod_func_int32_t_s_s(((l_1677.f2 && ((void*)0 == (*g_1696))) != g_497), l_1685[0][0][0]))))
                {
                    uint64_t ** const ***l_1749 = &l_1581;
                    int32_t l_1762[8][3] = {{0xEFD10DEDL,0xDB1A4BB8L,0xDB1A4BB8L},{0xEFD10DEDL,0xDB1A4BB8L,0xDB1A4BB8L},{0xEFD10DEDL,0xDB1A4BB8L,0xDB1A4BB8L},{0xEFD10DEDL,0xDB1A4BB8L,0xDB1A4BB8L},{0xEFD10DEDL,0xDB1A4BB8L,0xDB1A4BB8L},{0xEFD10DEDL,0xDB1A4BB8L,0xDB1A4BB8L},{0xEFD10DEDL,0xDB1A4BB8L,0xDB1A4BB8L},{0xEFD10DEDL,0xDB1A4BB8L,0xDB1A4BB8L}};
                    union U2 *l_1768 = &l_1653;
                    int32_t *l_1770 = &l_1762[0][2];
                    int32_t *l_1771 = &g_497;
                    int32_t *l_1772 = (void*)0;
                    int32_t *l_1773 = &g_1307;
                    int32_t *l_1774 = (void*)0;
                    int i, j;
                    (*g_490) = (**g_1699);
                    for (g_1091 = 27; (g_1091 >= 31); g_1091++)
                    {
                        int32_t *l_1761[10][1][1] = {{{(void*)0}},{{&g_6}},{{(void*)0}},{{&g_6}},{{(void*)0}},{{&g_6}},{{(void*)0}},{{&g_6}},{{(void*)0}},{{&g_6}}};
                        int i, j, k;
                        (***g_1698) = ((((((safe_add_func_uint32_t_u_u(l_1457.f1, l_1671.f1)) & ((*g_1612) ^= 0x77L)) < (safe_lshift_func_int16_t_s_u(((l_1749 = l_1748) != l_1750), 14))) > l_1653.f0) != ((l_1755 , (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((4294967287UL != ((((*g_230) , 1UL) | (*g_475)) || l_1682)), 0x4EL)), l_1676[9][0][3]))) , l_1760)) , (***g_1698));
                        l_1764--;
                        l_1769 = (l_1768 = ((***g_867) = l_1767));
                    }
                    --l_1775;
                }
                else
                {
                    int32_t l_1778 = (-4L);
                    uint64_t *l_1788 = &l_1737;
                    const uint16_t l_1801[8][9][3] = {{{1UL,65535UL,1UL},{65535UL,7UL,0UL},{0x326BL,2UL,0x5000L},{4UL,0xEFD9L,65534UL},{0x8D47L,0x8D47L,0x39F9L},{0x426AL,0xBB84L,1UL},{3UL,0x4746L,7UL},{65531UL,0xD9A4L,65534UL},{6UL,3UL,7UL}},{{65527UL,0xE1CCL,1UL},{0xEFD9L,0x66A8L,0x39F9L},{7UL,6UL,65534UL},{0x3077L,0x5FD7L,0x5000L},{0x9541L,0x3077L,0UL},{0x850EL,0xDEAFL,1UL},{0x2607L,1UL,3UL},{0x2607L,0UL,0x9541L},{0x850EL,65527UL,65531UL}},{{0x9541L,9UL,0x2BEDL},{0x3077L,65535UL,65535UL},{7UL,4UL,0x2607L},{0xEFD9L,0x7917L,0xD9A4L},{65527UL,0x64B8L,6UL},{6UL,0x9541L,0xDEAFL},{65531UL,0x64B8L,65534UL},{3UL,0x7917L,0xE1CCL},{0x426AL,4UL,0xA513L}},{{0x8D47L,65535UL,3UL},{4UL,9UL,65527UL},{0x326BL,65527UL,0x5FD7L},{65535UL,0UL,9UL},{1UL,1UL,9UL},{65527UL,0xDEAFL,0x5FD7L},{2UL,0x3077L,65527UL},{0x4746L,0x5FD7L,3UL},{0xA513L,6UL,0xA513L}},{{0x5000L,0x66A8L,0xE1CCL},{0xF0F6L,0xE1CCL,65534UL},{3UL,3UL,0xDEAFL},{65534UL,0xD9A4L,6UL},{3UL,0x4746L,0xD9A4L},{0xF0F6L,0xBB84L,0x2607L},{0x5000L,0x8D47L,65535UL},{0xA513L,0xEFD9L,0x2BEDL},{0x4746L,2UL,65531UL}},{{2UL,7UL,0x9541L},{65527UL,65535UL,3UL},{1UL,65535UL,1UL},{65535UL,7UL,0UL},{0x326BL,2UL,0x5000L},{4UL,0xEFD9L,65534UL},{0x8D47L,0x8D47L,0x39F9L},{0xD9A4L,0x3077L,0x66A8L},{0x64B8L,2UL,9UL}},{{3UL,0x8D47L,0xEFD9L},{7UL,0x64B8L,9UL},{0x9541L,65531UL,0x66A8L},{0x326BL,0xDD47L,0xF0F6L},{9UL,7UL,0x2BEDL},{1UL,0x5000L,0UL},{0x8B61L,1UL,65534UL},{0x4746L,0xA513L,0xD7B1L},{65526UL,0x66A8L,0x2607L}},{{65526UL,65534UL,0x8B61L},{0x4746L,0x9541L,3UL},{0x8B61L,65527UL,0x7917L},{1UL,0x5FD7L,0x5FD7L},{9UL,65534UL,65526UL},{0x326BL,1UL,0x8D47L},{0x9541L,65535UL,7UL},{7UL,0x8B61L,0xA513L},{3UL,65535UL,65527UL}}};
                    int i, j, k;
                    (*g_466) = (l_1778 > (++(****g_1406)));
                    l_1802 ^= (safe_lshift_func_int8_t_s_u((((**g_568) > 0xADF10A409D4AF8B3LL) <= (0x65A8L < (((safe_add_func_int32_t_s_s((((+((((((l_1676[3][0][3] &= (((*l_1788) |= ((*l_1354) = l_1677.f0)) && (safe_mul_func_uint8_t_u_u((l_1685[0][0][0] > (*g_1080)), (+((((*l_1354) ^= ((*l_1788) = (safe_add_func_uint8_t_u_u(l_1794, (((safe_add_func_int64_t_s_s((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0x20L, (*g_475))), l_1801[3][6][0])) > g_315[0]) , l_1778), (**g_568))) & 0x421EL) <= (*g_475)))))) < (*g_569)) , l_1775)))))) ^ l_1801[3][6][0]) , (**g_1611)) , l_1676[9][0][5]) || 255UL) || l_1677.f2)) && 0L) != (**g_490)), (*g_466))) | l_1677.f2) || (*g_569)))), (*g_1612)));
                    (****g_1698) = (safe_unary_minus_func_uint16_t_u(((void*)0 == l_1804[7][2][0])));
                }
                if ((***g_1699))
                    continue;
            }
            else
            {
                const int16_t l_1811 = (-1L);
                int32_t *l_1819[10] = {&l_1336,&l_1336,&l_1676[4][0][0],&l_1676[1][0][3],&l_1676[4][0][0],&l_1336,&l_1336,&l_1676[4][0][0],&l_1676[1][0][3],&l_1676[4][0][0]};
                int8_t *l_1831 = &g_319;
                union U0 l_1873 = {18446744073709551609UL};
                int16_t l_1875 = 0L;
                uint64_t ***l_1881 = (void*)0;
                uint64_t ****l_1880 = &l_1881;
                int8_t *l_1882 = (void*)0;
                union U1 *l_1889 = &l_1375;
                uint32_t l_1891 = 0x757AA7B7L;
                int i;
                for (g_133 = 0; (g_133 <= 1); g_133 += 1)
                {
                    uint64_t ***l_1813[5];
                    uint64_t **** const l_1812[9][5] = {{&l_1813[0],&l_1813[2],&l_1813[0],&l_1813[0],&l_1813[0]},{&l_1813[2],&l_1813[0],&l_1813[0],&l_1813[0],&l_1813[0]},{&l_1813[0],&l_1813[0],&l_1813[0],&l_1813[0],&l_1813[0]},{&l_1813[2],&l_1813[0],&l_1813[0],&l_1813[0],&l_1813[0]},{&l_1813[0],&l_1813[0],&l_1813[0],&l_1813[0],(void*)0},{&l_1813[0],&l_1813[0],&l_1813[2],&l_1813[0],(void*)0},{&l_1813[0],&l_1813[0],&l_1813[0],&l_1813[0],&l_1813[0]},{&l_1813[0],&l_1813[0],&l_1813[2],(void*)0,&l_1813[0]},{&l_1813[0],&l_1813[2],&l_1813[0],&l_1813[2],&l_1813[0]}};
                    union U2 l_1815 = {65535UL};
                    int32_t l_1827 = (-1L);
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1813[i] = &g_1808;
                    for (g_286 = 0; (g_286 <= 1); g_286 += 1)
                    {
                        int i;
                        if (g_315[(g_133 + 3)])
                            break;
                    }
                }
                g_1857--;
                for (g_762 = 0; (g_762 == 49); g_762++)
                {
                    int8_t **l_1868 = (void*)0;
                    int8_t **l_1869 = (void*)0;
                    int8_t **l_1870 = &l_16;
                    int32_t l_1874 = (-1L);
                    int64_t *l_1890 = &g_1133;
                    int32_t l_1892 = 1L;
                }
            }
            return l_1676[1][0][1];
        }
        if (l_1467)
            continue;
    }
    for (l_1538 = 0; (l_1538 < 51); ++l_1538)
    {
        uint32_t l_1895 = 0x4652F03BL;
        return l_1895;
    }
    g_1125 &= (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((l_1452[0][1] && (safe_lshift_func_int16_t_s_s(l_1764, ((((*g_475) = ((0L > l_1538) < ((((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((((((0x2DFAL <= ((**l_1918) = (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(l_1457.f1, ((**g_1068) = (safe_sub_func_uint64_t_u_u((((***g_1807)--) | ((l_1918 == ((0xD052L > l_1764) , (*g_1078))) != 0L)), 1L))))) < 0xB5A1DAB3L), 0L)), 0xE2L)))) , l_1375.f2) >= 0L) == 65530UL) ^ l_1919) >= g_37), (***g_1699))), l_1755)) && l_1653.f0) , l_1538) > l_1381))) , 0xB9E18064F4A4B23DLL) , l_1728)))) , l_1375.f2), g_1920)), 0x395D090FL));
    return (***g_1078);
}







static int32_t * func_9(int8_t * p_10, int8_t * p_11, int32_t * p_12, int64_t p_13)
{
    int8_t l_1327 = 0xCBL;
    int32_t *l_1328 = (void*)0;
    (*p_12) = l_1327;
    return l_1328;
}







static union U0 func_17(int16_t p_18, int32_t p_19)
{
    uint16_t *l_32 = &g_33;
    uint16_t *l_36 = &g_37;
    int32_t l_45 = 0x744ED25EL;
    int16_t *l_826 = &g_827[0][2];
    int8_t l_1311 = 0x64L;
    int32_t *l_1312 = &g_123;
    int32_t *l_1313 = &g_1125;
    int32_t *l_1314 = &g_138[2].f0;
    int32_t *l_1315[5];
    int32_t l_1319 = 0L;
    int64_t *l_1324[5][10] = {{&g_1132,&g_1132,&g_1132,&g_807,&g_1132,&g_1132,&g_1132,&g_1132,&g_807,&g_1132},{&g_1132,&g_1132,&g_1132,&g_807,&g_1132,&g_1132,&g_1132,&g_1132,&g_807,&g_1132},{&g_1132,&g_1132,&g_1132,&g_807,&g_1132,&g_1132,&g_1132,&g_1132,&g_807,&g_1132},{&g_1132,&g_1132,&g_1132,&g_807,&g_1132,&g_1132,&g_1132,&g_1132,&g_807,&g_1132},{&g_1132,&g_1132,&g_1132,&g_807,&g_1132,&g_1132,&g_1132,&g_1132,&g_807,&g_1132}};
    union U0 l_1325 = {0x1535DF638A95096BLL};
    int i, j;
    for (i = 0; i < 5; i++)
        l_1315[i] = &g_123;
    (*l_1313) ^= ((*l_1312) = (safe_sub_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((l_1311 &= ((safe_sub_func_uint16_t_u_u(((*l_36) = (++(*l_32))), (-1L))) , (func_38((0xFF57L != func_41(&g_15, g_15, l_45)), (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(l_45, (safe_div_func_uint16_t_u_u(0xDD2DL, (safe_mul_func_int16_t_s_s(((*l_826) |= (l_45 != g_474[4])), l_45)))))) , 7UL), g_762)), l_45))) == 18446744073709551614UL))), 0L)), l_45)), p_18)), 65530UL)) != 18446744073709551615UL), p_19)));
    --g_1316;
    (*l_1312) = ((((3L >= (g_133 || p_18)) >= l_1319) == (safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(p_18, 12)), g_92.f0))) == ((*l_1312) | ((*l_1314) = (((*l_1313) &= p_19) >= ((&l_826 != &l_826) || p_18)))));
    return l_1325;
}







static int64_t func_38(uint64_t p_39, const uint16_t p_40)
{
    int32_t l_829 = 0L;
    int32_t l_837 = (-1L);
    union U2 *l_848 = &g_415[0][1][4];
    int32_t l_889 = 3L;
    int32_t l_890 = 1L;
    int32_t l_891[7];
    union U1 l_928 = {2L};
    uint64_t *l_961 = &g_481[1];
    union U2 *****l_1138 = &g_867;
    uint32_t l_1163[5];
    int8_t *l_1202 = &g_319;
    const uint8_t * const l_1244 = &g_84;
    const uint8_t * const *l_1243 = &l_1244;
    const uint8_t * const **l_1242 = &l_1243;
    int i;
    for (i = 0; i < 7; i++)
        l_891[i] = (-1L);
    for (i = 0; i < 5; i++)
        l_1163[i] = 1UL;
lbl_924:
    if ((p_39 || g_84))
    {
        int32_t *l_828 = &g_8;
        int32_t *l_830 = &g_497;
        int32_t l_831 = 2L;
        int32_t *l_832 = &l_829;
        int32_t *l_833 = (void*)0;
        int32_t *l_834 = &l_831;
        int32_t *l_835 = (void*)0;
        int32_t *l_836[4][7] = {{(void*)0,&g_138[2].f0,(void*)0,&g_138[2].f0,(void*)0,&g_138[2].f0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_138[2].f0,(void*)0,&g_138[2].f0,(void*)0,&g_138[2].f0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int16_t l_838 = 0x1C05L;
        union U0 l_847 = {0xF76AD49665BEA1B2LL};
        int32_t l_853 = 0x8A370C2EL;
        union U2 l_866 = {0xE1B4L};
        union U2 *****l_870 = &g_867;
        int i, j;
        g_839++;
        (*l_830) = (((safe_lshift_func_int16_t_s_s((((246UL & ((void*)0 == g_844)) , (p_40 , (void*)0)) == (void*)0), 2)) ^ (*g_846)) == ((l_847 , l_829) <= 0x2BD9L));
        (*l_834) ^= ((l_848 == ((((safe_sub_func_int64_t_s_s(((p_39 , 0x646242C8B4233847LL) | (safe_sub_func_int8_t_s_s(((*g_475) &= ((((*l_832) = l_853) , ((((safe_add_func_int64_t_s_s(((~(safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s(((g_865 = (g_864 = ((l_837 && p_40) , &g_670))) != ((*l_870) = (l_866 , g_867))))), 8)) , p_40), 0x6DE3L)) != 1UL), 0xEFL))) >= (*l_830)), 7UL)) < 0x6C587C38L) ^ l_837) <= (-3L))) > p_40)), l_837))), p_39)) < p_39) && 1L) , (****l_870))) == 6L);
    }
    else
    {
        uint16_t l_879 = 0x30E6L;
        int32_t *l_884 = (void*)0;
        int32_t *l_885 = &g_138[2].f0;
        int32_t *l_886 = &g_123;
        int32_t *l_887[10][5] = {{&l_837,&l_837,&l_829,&l_837,&l_837},{&g_123,&l_837,&g_123,&g_123,&l_837},{&l_837,&g_123,&g_123,&l_837,&g_123},{&l_837,&l_837,&l_829,&l_837,&l_837},{&g_123,&l_837,&g_123,&g_123,&l_837},{&l_837,&g_123,&g_123,&l_837,&g_123},{&l_837,&l_837,&l_829,&l_837,&l_837},{&g_123,&l_837,&g_123,&g_123,&l_837},{&l_837,&g_123,&g_123,&l_837,&g_123},{&l_837,&l_837,&l_829,&l_837,&l_837}};
        int32_t l_888[2];
        const union U0 l_895 = {18446744073709551615UL};
        union U1 * const l_896 = &g_138[4];
        int i, j;
        for (i = 0; i < 2; i++)
            l_888[i] = 0x81400A1CL;
        for (g_37 = 22; (g_37 > 54); ++g_37)
        {
            union U1 l_875 = {0x63232FEDL};
            union U0 **l_878[7] = {&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230};
            union U2 l_880[6] = {{0UL},{0UL},{0x67E1L},{0UL},{0UL},{0x67E1L}};
            int32_t *l_881 = &g_497;
            int32_t **l_882 = (void*)0;
            int32_t **l_883 = &g_466;
            int i;
            (*l_881) ^= (0x8FL ^ (safe_sub_func_uint8_t_u_u((((l_875 , (((*g_846) == ((-1L) != ((*g_281) = (safe_div_func_uint16_t_u_u((((void*)0 == l_878[1]) != 0x2357L), (l_879 |= 0x99BCL)))))) < (l_880[2] , p_40))) < 2L) == l_829), l_837)));
            (*l_883) = &l_829;
            if (l_837)
                break;
        }
        g_892++;
        (*l_886) = ((l_895 , l_896) == l_896);
    }
    for (g_356 = 0; (g_356 <= 5); g_356 += 1)
    {
        uint64_t l_898 = 1UL;
        int32_t l_901 = 0x62B83946L;
        union U0 l_930 = {0UL};
        int8_t l_936 = (-8L);
        uint64_t **l_942 = &g_569;
        int64_t l_956 = (-1L);
        union U2 l_963 = {0xE650L};
        const uint8_t *l_982[5][9] = {{&g_983,&g_983,&g_983,&g_983,&g_983,&g_983,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_983,(void*)0,(void*)0,&g_983,(void*)0,(void*)0,&g_983},{&g_983,(void*)0,(void*)0,(void*)0,&g_983,(void*)0,(void*)0,&g_983,(void*)0},{&g_983,&g_983,&g_983,&g_983,(void*)0,(void*)0,(void*)0,&g_983,&g_983},{&g_983,&g_983,&g_983,(void*)0,&g_983,&g_983,&g_983,(void*)0,(void*)0}};
        const uint32_t l_1015[2][9] = {{0x80BE7C1FL,0xC9EC5FBEL,0x80BE7C1FL,0xC9EC5FBEL,0x80BE7C1FL,0xC9EC5FBEL,0x80BE7C1FL,0xC9EC5FBEL,0x80BE7C1FL},{1UL,0x7341EE27L,0x7341EE27L,1UL,1UL,0x7341EE27L,0x7341EE27L,1UL,1UL}};
        uint64_t l_1065 = 18446744073709551615UL;
        uint8_t l_1113[9] = {1UL,0x27L,1UL,0x27L,1UL,0x27L,1UL,0x27L,1UL};
        int32_t l_1129 = 0xBBB7D5FFL;
        int32_t l_1131[7][7][5] = {{{0xFACF2AE5L,0x332FA46DL,0xB6A089FDL,0xEA545E56L,0x0076B197L},{0L,0x7DAEE27BL,5L,0L,0x346B68C8L},{0L,0x1DC7B673L,0xEE9EEF29L,1L,0x401D4E73L},{0x6C96F432L,5L,0xCDF10492L,(-1L),(-1L)},{7L,0xD827AE8AL,7L,0x1DC7B673L,0x76F562EEL},{0x574EA560L,(-5L),0xC9B377A5L,1L,0L},{0x76F562EEL,0x0076B197L,0L,0L,0x0076B197L}},{{(-7L),0x545F51A9L,0xC9B377A5L,0L,0L},{0xD827AE8AL,(-4L),7L,0L,0x20A7E742L},{0x34AC9112L,1L,0xCDF10492L,0x34AC9112L,0x7DAEE27BL},{0xA6DF7DB7L,0L,0xEE9EEF29L,0x7B4D2E84L,0xA6DF7DB7L},{0x6DD967BFL,0x649149FCL,9L,0L,9L},{0xBFCB4DE7L,0xBFCB4DE7L,0xD827AE8AL,0x1DC7B673L,0x20A7E742L},{0L,0x446EB6BDL,0L,(-5L),0x6DD967BFL}},{{0xAA0E112FL,0x4B47CE23L,0xD01E076BL,0xA6DF7DB7L,0L},{0x6C1F9FAEL,0x446EB6BDL,0x0D47AFA2L,(-5L),0L},{0x330F8007L,0xBFCB4DE7L,(-1L),0L,0x389A102BL},{(-5L),0x649149FCL,0x63650FE7L,0x446EB6BDL,0x74196A18L},{7L,0x389A102BL,0L,(-4L),0xAA0E112FL},{0x74196A18L,0x6DD967BFL,0xCDF10492L,0xCDF10492L,0x6DD967BFL},{2L,0xC27DDCEBL,0xB6A089FDL,0xAA0E112FL,1L}},{{1L,0xEE49A807L,(-1L),0x3368755CL,0L},{1L,2L,(-1L),1L,0xA6DF7DB7L},{1L,0xCDF10492L,0x09D8B986L,0x6C1F9FAEL,0L},{2L,0x7B4D2E84L,0xFACF2AE5L,0xBFCB4DE7L,(-1L)},{0x74196A18L,0L,0L,3L,5L},{7L,0x250D7A41L,0x4B47CE23L,0x401D4E73L,(-1L)},{(-5L),0x3368755CL,0x574EA560L,0x3368755CL,(-5L)}},{{0x330F8007L,(-4L),1L,0L,0xBFCB4DE7L},{0x6C1F9FAEL,0x74196A18L,1L,(-7L),0xCDF10492L},{0xAA0E112FL,0x7B4D2E84L,0L,(-4L),0xBFCB4DE7L},{0L,(-7L),0x74196A18L,1L,(-5L)},{0xBFCB4DE7L,(-1L),0L,0x389A102BL,(-1L)},{0x6DD967BFL,0xEE49A807L,0x7DAEE27BL,(-5L),5L},{0xC1B8405EL,0xEE9EEF29L,0L,0x4B47CE23L,(-1L)}},{{0xC9B377A5L,1L,1L,0xC9B377A5L,0L},{0x7B4D2E84L,0x389A102BL,(-1L),0x1DC7B673L,0xA6DF7DB7L},{1L,1L,9L,0x74196A18L,0L},{0xBFCB4DE7L,0xB6A089FDL,0x4B47CE23L,0x1DC7B673L,1L},{0L,0x446EB6BDL,0x99FAEB47L,0xC9B377A5L,0x6DD967BFL},{0L,0xA6DF7DB7L,0xD01E076BL,0x4B47CE23L,0xAA0E112FL},{0x6C1F9FAEL,1L,0x09D8B986L,(-5L),0x74196A18L}},{{0x1DC7B673L,0xBFCB4DE7L,0xEA545E56L,0x389A102BL,0x389A102BL},{0x63650FE7L,1L,0x63650FE7L,1L,0L},{7L,0L,0xB6A089FDL,(-4L),0L},{0L,0x6DD967BFL,1L,(-7L),0x6DD967BFL},{(-1L),0xEE9EEF29L,0xB6A089FDL,0L,0x20A7E742L},{1L,0xF4F3D787L,0x63650FE7L,0x3368755CL,9L},{0x401D4E73L,2L,0xEA545E56L,0x401D4E73L,0xA6DF7DB7L}}};
        union U2 ***** const l_1137 = &g_867;
        union U1 l_1173 = {0x5E60C4C8L};
        int8_t l_1188 = 0xC2L;
        int16_t *l_1189 = (void*)0;
        int i, j, k;
        for (g_249 = 0; (g_249 <= 4); g_249 += 1)
        {
            int32_t *l_897[6] = {&g_497,&g_2,&g_497,&g_497,&g_2,&g_497};
            int32_t **l_902 = (void*)0;
            int32_t **l_903 = &l_897[3];
            uint32_t * const *l_910 = &g_846;
            uint32_t * const **l_909[5][8] = {{&l_910,&l_910,&l_910,&l_910,&l_910,&l_910,&l_910,&l_910},{&l_910,&l_910,&l_910,&l_910,&l_910,&l_910,&l_910,&l_910},{&l_910,&l_910,&l_910,&l_910,&l_910,&l_910,&l_910,&l_910},{&l_910,&l_910,&l_910,&l_910,&l_910,&l_910,&l_910,&l_910},{&l_910,&l_910,&l_910,&l_910,&l_910,&l_910,&l_910,&l_910}};
            union U2 *l_923 = &g_415[1][4][2];
            uint16_t l_925 = 0x3705L;
            int i, j;
            l_898--;
            l_901 = l_889;
            (*l_903) = &l_901;
            for (g_892 = 1; (g_892 <= 5); g_892 += 1)
            {
                uint32_t ****l_908 = &g_844;
                uint32_t * const ***l_911 = (void*)0;
                uint32_t * const ***l_912[3][6][2];
                int32_t * const l_922 = &g_7;
                int32_t l_929 = 5L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 6; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_912[i][j][k] = &l_909[3][0];
                    }
                }
                g_497 = (safe_rshift_func_int16_t_s_u((l_891[6] || (l_890 = (((1UL != (((**g_568) = p_40) == (((p_39 < ((((*l_908) = &g_845) == (g_913[0] = l_909[3][6])) <= p_40)) ^ (+(p_39 && (safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((l_922 != (void*)0) <= p_39), p_40)), p_40))))) > 0xBCAEE780L))) && (*l_922)) && g_481[0]))), 0));
                (**g_868) = l_923;
                for (g_627 = 0; (g_627 <= 4); g_627 += 1)
                {
                    if (g_627)
                        goto lbl_924;
                }
                for (g_480 = 0; (g_480 <= 4); g_480 += 1)
                {
                    int32_t *l_931 = &g_138[2].f0;
                    int32_t l_932 = (-1L);
                    int i;
                    l_925--;
                    if ((l_929 = ((g_473[g_249] = &l_925) != (l_928 , &p_40))))
                    {
                        l_931 = (l_930 , &g_2);
                    }
                    else
                    {
                        uint8_t l_933 = 0xCAL;
                        ++l_933;
                        if (p_39)
                            continue;
                        (*l_931) = 0x3E3451E6L;
                        l_829 &= ((*l_931) &= p_40);
                    }
                }
            }
        }
        if (l_936)
            continue;
        for (g_476 = 5; (g_476 >= 1); g_476 -= 1)
        {
            int32_t *l_973 = &g_123;
            int32_t *l_974 = &g_8;
            union U0 *l_1040 = &l_930;
            union U1 l_1043 = {3L};
            const uint8_t **l_1066 = (void*)0;
            uint16_t ***l_1083 = (void*)0;
            uint64_t l_1092[7][8];
            uint32_t l_1093 = 0x691DC912L;
            int32_t l_1121 = 0x7FAFDF60L;
            int32_t l_1122[1];
            int32_t l_1166 = 2L;
            const union U2 l_1201 = {0x3DF2L};
            int32_t ***l_1273[9] = {&g_490,&g_490,&g_490,&g_490,&g_490,&g_490,&g_490,&g_490,&g_490};
            int32_t ****l_1272 = &l_1273[6];
            int32_t *****l_1271 = &l_1272;
            int8_t l_1306 = 0L;
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 8; j++)
                    l_1092[i][j] = 2UL;
            }
            for (i = 0; i < 1; i++)
                l_1122[i] = (-10L);
            for (g_123 = 0; (g_123 <= 5); g_123 += 1)
            {
                uint8_t l_937 = 1UL;
                int32_t *l_952 = &l_889;
                int32_t l_962 = 0x92760FC6L;
                int16_t *l_972 = &g_827[0][2];
                --l_937;
                for (g_663 = 1; (g_663 <= 5); g_663 += 1)
                {
                    uint64_t *l_943 = &g_325;
                    int32_t **l_953 = (void*)0;
                    int32_t *l_954 = &g_138[2].f0;
                    int32_t l_955 = 0xB7C92BD7L;
                    (*l_952) = (safe_sub_func_int64_t_s_s(((((l_928 , l_942) == &g_569) | ((((*l_943) = (*g_569)) || ((safe_sub_func_uint8_t_u_u(1UL, ((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((((l_954 = l_952) == (void*)0) | p_40) > (l_890 & p_39)), l_955)), l_936)) <= (**g_568)) ^ 0UL), 0x7275A381L)) || p_40))) > l_901)) & p_39)) , p_40), l_956));
                }
                (*l_952) |= (((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(p_39, 0x69L)), (l_961 == (*g_568)))) < l_928.f1) < (l_930.f0 && (l_962 >= (l_963 , (safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((*l_972) ^= (((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((**g_568), p_39)) || 0x3207L), 0x7BBEL)) < p_39) != 3UL)), p_39)), g_15))))));
            }
            if (((*l_974) = ((*l_973) = l_891[3])))
            {
                union U1 l_976 = {0x25752482L};
                uint64_t **l_977 = &l_961;
                const uint8_t *l_980 = &g_127[2][0][0];
                const uint8_t **l_981[5];
                int64_t *l_1016[3][8] = {{&l_956,&g_192,&g_192,&l_956,&g_807,&l_956,&g_192,&g_192},{&g_192,&g_807,(void*)0,(void*)0,&g_807,&g_192,&g_807,(void*)0},{&l_956,&g_807,&l_956,&g_192,&g_192,&l_956,&g_807,&l_956}};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_981[i] = &l_980;
                if (((((!(l_976 , l_898)) , ((p_40 & p_40) || ((void*)0 != l_977))) & (safe_lshift_func_int16_t_s_u(((((&g_127[4][2][0] != (l_982[2][4] = l_980)) && l_976.f2) >= (**g_568)) , p_39), l_976.f0))) >= 0xC5D00C993C64F2ACLL))
                {
                    int32_t **l_984 = &l_973;
                    (*l_984) = &l_891[6];
                }
                else
                {
                    return g_476;
                }
                (*l_974) &= ((safe_sub_func_int64_t_s_s(((0x28L && p_40) ^ (0x8941L == (safe_rshift_func_uint16_t_u_u((((l_837 < (safe_lshift_func_int16_t_s_u((((safe_mod_func_int8_t_s_s(p_40, (safe_div_func_uint64_t_u_u(p_39, (safe_sub_func_uint16_t_u_u(0xB349L, (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((g_807 = (safe_unary_minus_func_uint64_t_u(((((*l_973) = (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((!(safe_div_func_uint8_t_u_u(((-9L) >= ((**l_942) &= (safe_mul_func_int8_t_s_s(((void*)0 != (*g_568)), l_1015[0][4])))), 0x96L))), 7)) == l_936), l_976.f0)) & 65535UL), p_39))) >= 6L) == g_162[0][2][3])))) , 0x3DD7L), 14)), 0UL)), 8UL)))))))) , 18446744073709551615UL) > 1L), 2))) & g_356) | p_39), p_39)))), 0x143A49B39B1E0849LL)) <= 4294967290UL);
            }
            else
            {
                union U0 l_1033 = {18446744073709551609UL};
                int32_t l_1045 = 7L;
                union U1 l_1082 = {-1L};
                uint8_t l_1104 = 0UL;
                int32_t l_1123 = 0xD9C374AEL;
                uint32_t *l_1190 = &l_1163[4];
                if (((((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(((*l_973) = ((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(0UL, (safe_div_func_int32_t_s_s(p_40, ((safe_div_func_uint64_t_u_u((g_1031 | ((((void*)0 == g_1032) ^ (((**g_914) &= ((***g_844) = ((**g_845) ^ (p_39 , (((*g_569) < 1L) , l_928.f2))))) ^ p_39)) & p_40)), p_40)) , (-1L)))))), l_901)) , p_40)), 0xDB470DC7L)), l_930.f0)), g_839)) , l_1033) , l_1033.f0) < 0x39L))
                {
                    union U1 l_1044 = {0xAD403F49L};
                    for (l_928.f0 = 5; (l_928.f0 >= 0); l_928.f0 -= 1)
                    {
                        union U1 l_1038 = {3L};
                        l_1045 |= ((safe_rshift_func_uint16_t_u_s(65529UL, ((l_1038 , (~((void*)0 != l_1040))) & (p_40 >= g_286)))) && (safe_mul_func_int8_t_s_s((l_1043 , 0x7CL), ((l_1044 , (-9L)) > p_39))));
                    }
                    for (g_260 = 1; (g_260 <= 5); g_260 += 1)
                    {
                        (*l_974) = 1L;
                    }
                }
                else
                {
                    const uint16_t *l_1054[2][10] = {{&g_320,&g_320,&g_320,&g_320,&g_320,&g_320,&g_320,&g_320,&g_320,&g_320},{&g_320,&g_320,&g_320,&g_320,&g_320,&g_320,&g_320,&g_320,&g_320,&g_320}};
                    const uint16_t **l_1053 = &l_1054[0][8];
                    const uint16_t ***l_1052 = &l_1053;
                    int32_t l_1071 = (-1L);
                    int32_t *l_1116 = &l_889;
                    int32_t *l_1117 = &l_829;
                    int32_t *l_1118 = &g_8;
                    int32_t *l_1119 = (void*)0;
                    int32_t *l_1120[5][5] = {{&g_7,&g_8,&g_8,&g_7,&g_497},{&g_138[2].f0,&g_7,&l_901,&l_1071,&l_928.f0},{&g_138[2].f0,&l_901,&g_497,&l_901,&g_138[2].f0},{&g_7,&l_889,(void*)0,&l_1071,&g_8},{(void*)0,&l_889,&g_7,&g_7,&l_889}};
                    int8_t l_1130 = 0x01L;
                    int i, j;
                    if ((safe_mod_func_uint32_t_u_u((p_40 <= (safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(0x9E12F5D49F36C484LL, l_963.f0)), 0xF646L))), (*g_915))))
                    {
                        const uint16_t ****l_1055 = &l_1052;
                        (*l_1055) = l_1052;
                    }
                    else
                    {
                        union U2 l_1064 = {0x0C06L};
                        const uint8_t **l_1067 = (void*)0;
                        uint8_t * const **l_1070 = &g_1068;
                        uint32_t l_1072 = 0xEF997BEFL;
                        uint32_t *l_1090 = &g_1091;
                        g_497 = (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(0x2DL, (safe_add_func_int8_t_s_s(((l_1064 , l_1065) <= (&g_868 == (void*)0)), (((g_983 ^ ((p_39 = (((l_1067 = l_1066) != ((*l_1070) = (((*l_973) &= 0xCF81346AL) , g_1068))) <= 6UL)) , l_1071)) & l_1071) ^ l_1071))))) > p_40), (*g_1069))), l_1072));
                        (*l_973) = ((((*l_1090) = (safe_mod_func_int16_t_s_s((p_40 | (~0x612CL)), (l_928.f0 || (safe_mod_func_uint64_t_u_u((((g_1078 = &g_297) == ((l_1082 , (*g_427)) , l_1083)) , (safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((&g_807 == (l_1033.f1 , (void*)0)), 6)) <= p_39), (*g_475))), (**g_845)))), p_40)))))) , 0xF12DE756A4D97EE5LL) & l_1092[6][7]);
                        if (l_1071)
                            break;
                    }
                    if (p_40)
                    {
                        l_1093--;
                    }
                    else
                    {
                        int32_t *l_1096 = &l_1071;
                        int32_t *l_1097 = &g_123;
                        int32_t *l_1098 = &l_891[3];
                        int32_t *l_1099 = &l_928.f0;
                        int32_t *l_1100 = (void*)0;
                        int32_t *l_1101 = (void*)0;
                        int32_t *l_1102 = &l_1071;
                        int32_t *l_1103 = (void*)0;
                        int32_t *l_1107 = &g_8;
                        int32_t *l_1108 = &l_889;
                        int32_t *l_1109 = &l_901;
                        int32_t l_1110 = 0x3BFEEB27L;
                        int32_t *l_1111 = &l_1071;
                        int32_t *l_1112 = &l_891[6];
                        --l_1104;
                        l_1107 = l_1097;
                        l_1113[8]++;
                    }
                    g_1126--;
                    g_1134++;
                }
                (*l_974) &= ((l_963 , l_1137) == (g_1139[1] = l_1138));
                g_230 = &l_930;
                for (g_8 = 4; (g_8 >= 0); g_8 -= 1)
                {
                    const union U0 l_1145 = {0UL};
                    int32_t l_1157 = (-1L);
                    int32_t l_1159 = 1L;
                    union U2 l_1178 = {0xFAC7L};
                    int32_t l_1192[1][6][4] = {{{0x3C21D07AL,0L,0x59D06170L,0L},{0L,0x5DBC21C8L,0x59D06170L,0x59D06170L},{0x3C21D07AL,0x3C21D07AL,0L,0x59D06170L},{0xBC29B25EL,0x5DBC21C8L,0xBC29B25EL,0L},{0xBC29B25EL,0L,0L,0xBC29B25EL},{0x3C21D07AL,0L,0x59D06170L,0L}}};
                    int i, j, k;
                    for (l_1121 = 1; (l_1121 <= 5); l_1121 += 1)
                    {
                        union U1 **l_1140 = &g_137[7][0];
                        int16_t *l_1158 = &g_827[0][2];
                        int32_t *l_1160 = &l_1157;
                        int32_t *l_1161 = &l_1043.f0;
                        int32_t *l_1162[6] = {&g_6,&g_6,&l_1043.f0,&g_6,&g_6,&l_1043.f0};
                        int i;
                        if (p_40)
                            break;
                        (*l_1140) = &l_1043;
                        l_1159 = (((l_1123 , (safe_add_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(((***g_844) = ((l_1145 , (safe_div_func_uint64_t_u_u(((0x0A6CL != (safe_div_func_int64_t_s_s(g_474[1], (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((+2L) , ((*g_1069) > (((*l_1158) = (l_1157 = (p_39 > (0xF12AL < ((*g_569) != 0xF9FE35B7BB8B1C28LL))))) < 8L))), 6)), 0xCF5BCAB9L))))) == (*g_1069)), (**g_568)))) , 1UL)), (*l_973))) & p_40), 0x419EAD0EB129221ALL))) | p_39) && (*l_973));
                        ++l_1163[4];
                    }
                    (*l_973) = (l_1166 & (((((((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(1L, (l_1033 , ((*g_281) = ((((((l_1173 , (~(safe_add_func_int64_t_s_s(((l_1178 = ((***g_868) = g_1177)) , (safe_mul_func_int8_t_s_s(l_837, ((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((p_40 & (l_1033.f0 != (!((-1L) <= l_1178.f0)))) , 0x36CCL), 2)) != p_39), l_1188)), p_40)) , 0x73L)))), l_1123)))) <= p_40) | 0x4D88L) <= 0L) == l_829) <= p_39))))), (*l_974))), (*l_973))) > 0L) , l_1189) == (void*)0) & 0xADBBF563L) , &g_1091) != l_1190));
                    for (l_1173.f0 = 4; (l_1173.f0 >= 0); l_1173.f0 -= 1)
                    {
                        int32_t *l_1191[4] = {&g_138[2].f0,&g_138[2].f0,&g_138[2].f0,&g_138[2].f0};
                        int i;
                        --g_1193;
                        (*l_973) |= (*l_974);
                        if (p_40)
                            break;
                        if (p_39)
                            break;
                    }
                    if (l_1113[2])
                        continue;
                }
            }
            if ((safe_div_func_int64_t_s_s(g_839, 0xBCC9609AEA45CF3DLL)))
            {
                int32_t *l_1203 = &l_1166;
                int64_t *l_1213 = &l_956;
                int64_t **l_1212 = &l_1213;
                int32_t *l_1214 = &l_901;
                int32_t *l_1215[6][10][4] = {{{&l_1131[0][1][0],(void*)0,&l_1131[6][5][2],&g_497},{&g_138[2].f0,&l_890,&l_889,&l_889},{(void*)0,&l_837,&l_889,&l_829},{(void*)0,(void*)0,&l_889,&g_7},{&g_138[2].f0,&l_829,&l_1131[6][5][2],(void*)0},{&l_1131[0][1][0],&l_837,&g_8,&g_497},{(void*)0,&g_138[2].f0,&l_889,&g_497},{&l_1166,&l_837,&l_1166,(void*)0},{&l_1131[6][5][2],&l_837,(void*)0,&l_889},{&l_889,&g_7,&g_7,&l_837}},{{&l_889,&g_138[2].f0,&g_7,&l_889},{&l_889,(void*)0,(void*)0,(void*)0},{&l_1131[6][5][2],&l_1043.f0,&g_8,&l_837},{&g_8,&l_837,&l_889,&l_1166},{&l_889,&l_837,&l_1131[0][0][1],&l_837},{&l_1166,&l_1043.f0,&g_7,(void*)0},{&l_1122[0],(void*)0,&l_889,&l_889},{&l_1131[6][5][2],&g_138[2].f0,&l_1131[0][0][1],&l_837},{&l_1131[6][5][2],&g_7,&l_889,&l_889},{&l_1122[0],&l_837,&g_7,&g_7}},{{&l_1166,&g_138[2].f0,&l_1131[0][0][1],(void*)0},{&l_889,&l_1043.f0,&l_889,(void*)0},{&g_8,&g_138[2].f0,&g_8,&g_7},{&l_1131[6][5][2],&l_837,(void*)0,&l_889},{&l_889,&g_7,&g_7,&l_837},{&l_889,&g_138[2].f0,&g_7,&l_889},{&l_889,(void*)0,(void*)0,(void*)0},{&l_1131[6][5][2],&l_1043.f0,&g_8,&l_837},{&g_8,&l_837,&l_889,&l_1166},{&l_889,&l_837,&l_1131[0][0][1],&l_837}},{{&l_1166,&l_1043.f0,&g_7,(void*)0},{&l_1122[0],(void*)0,&l_889,&l_889},{&l_1131[6][5][2],&g_138[2].f0,&l_1131[0][0][1],&l_837},{&l_1131[6][5][2],&g_7,&l_889,&l_889},{&l_1122[0],&l_837,&g_7,&g_7},{&l_1166,&g_138[2].f0,&l_1131[0][0][1],(void*)0},{&l_889,&l_1043.f0,&l_889,(void*)0},{&g_8,&g_138[2].f0,&g_8,&g_7},{&l_1131[6][5][2],&l_837,(void*)0,&l_889},{&l_889,&g_7,&g_7,&l_837}},{{&l_889,&g_138[2].f0,&g_7,&l_889},{&l_889,(void*)0,(void*)0,(void*)0},{&l_1131[6][5][2],&l_1043.f0,&g_8,&l_837},{&g_8,&l_837,&l_889,&l_1166},{&l_889,&l_837,&l_1131[0][0][1],&l_837},{&l_1166,&l_1043.f0,&g_7,(void*)0},{&l_1122[0],(void*)0,&l_889,&l_889},{&l_1131[6][5][2],&g_138[2].f0,&l_1131[0][0][1],&l_837},{&l_1131[6][5][2],&g_7,&l_889,&l_889},{&l_1122[0],&l_837,&g_7,&g_7}},{{&l_1166,&g_138[2].f0,&l_1131[0][0][1],(void*)0},{&l_889,&l_1043.f0,&l_889,(void*)0},{&g_8,&g_138[2].f0,&g_8,&g_7},{&l_1131[6][5][2],&l_837,(void*)0,&l_889},{&l_889,&g_7,&g_7,&l_837},{&l_889,&g_138[2].f0,&g_7,&l_890},{&l_889,&g_7,&l_1131[6][5][2],&l_1043.f0},{&g_7,&l_829,&l_1131[0][0][1],&l_1166},{&l_1131[0][0][1],&l_1166,&l_1131[0][0][1],&l_837},{&l_889,&l_1166,&g_138[2].f0,&l_1166}}};
                int16_t l_1216 = (-6L);
                int i, j, k;
                l_1203 = ((safe_lshift_func_uint16_t_u_s(65533UL, 12)) , func_69(func_75((!p_39), p_40, l_1189, p_39), (*l_1040), (((****g_867) , (((l_1066 == l_1066) || 0xE7A516148AA348EDLL) ^ p_40)) , l_1201), l_1202, l_928));
                (*l_973) |= (safe_add_func_int64_t_s_s((-1L), ((g_335 , (&l_956 != (((*l_848) , ((safe_mod_func_int64_t_s_s((g_1132 = 0x3BDDCF500D17DDD0LL), (*g_569))) , l_1201)) , ((*l_1212) = ((((((*l_1202) &= (safe_sub_func_int16_t_s_s(p_40, (safe_div_func_int64_t_s_s(1L, (**g_568)))))) <= (*g_475)) > 0UL) != l_889) , (void*)0))))) <= (**g_568))));
                --g_1217;
            }
            else
            {
                union U0 l_1227 = {0UL};
                const union U2 l_1293 = {1UL};
                int32_t *l_1298[7][8][4] = {{{&l_891[6],&l_891[2],(void*)0,&g_138[2].f0},{&g_138[2].f0,&l_901,&l_1173.f0,&l_1129},{&g_497,&l_1131[0][0][1],&g_497,&l_1129},{&g_497,&l_901,&l_889,&g_138[2].f0},{&l_1043.f0,&l_891[2],(void*)0,&l_1131[0][0][1]},{(void*)0,&l_901,&l_901,&g_123},{&g_2,&g_123,&l_901,&l_1121},{&l_901,(void*)0,(void*)0,(void*)0}},{{&l_891[2],&g_6,&g_2,&g_6},{&l_829,&l_901,&l_1122[0],&l_891[6]},{&l_1129,&g_497,&l_1121,(void*)0},{(void*)0,&l_1122[0],&l_891[6],&l_891[4]},{(void*)0,&l_891[6],&l_1121,&g_123},{&l_1129,&l_891[4],&l_1122[0],&l_901},{&l_829,&g_138[2].f0,&g_2,&l_1173.f0},{&l_891[2],&g_7,(void*)0,&g_138[2].f0}},{{&l_901,&l_1043.f0,&l_901,&l_1129},{&g_2,&l_889,&l_901,&l_901},{(void*)0,(void*)0,(void*)0,&l_1122[0]},{&l_1043.f0,&g_123,&l_889,&l_891[2]},{&g_497,&g_138[2].f0,&g_497,&l_889},{&g_497,&g_138[2].f0,&l_1173.f0,&l_891[2]},{&g_138[2].f0,&g_123,(void*)0,&l_1122[0]},{&l_891[6],(void*)0,&l_901,&l_901}},{{&l_1131[0][0][1],&l_889,(void*)0,&l_1129},{&l_891[6],&l_1043.f0,(void*)0,&g_138[2].f0},{&l_1122[0],&g_7,&g_123,&l_1173.f0},{&l_891[4],&g_138[2].f0,&l_891[4],&l_901},{(void*)0,&l_891[4],&g_123,&g_123},{&l_1173.f0,&l_891[6],&l_891[2],&l_891[4]},{&l_901,&l_1122[0],&l_891[2],(void*)0},{&l_1173.f0,&g_497,&g_123,&l_891[6]}},{{(void*)0,&l_901,&l_891[4],&g_6},{&l_891[4],&g_6,&g_123,(void*)0},{&l_1122[0],(void*)0,(void*)0,&l_1121},{&l_891[6],&g_123,(void*)0,&g_123},{&l_1131[0][0][1],&l_901,&l_901,&l_1131[0][0][1]},{&l_891[6],&l_891[2],(void*)0,&g_138[2].f0},{&g_138[2].f0,&l_901,&l_1173.f0,&l_1129},{&g_497,&l_1131[0][0][1],&g_497,&l_1129}},{{&g_497,&l_901,&l_889,&g_138[2].f0},{&l_1043.f0,&l_891[2],(void*)0,&l_1131[0][0][1]},{(void*)0,&l_901,&l_901,&g_123},{&g_2,&g_123,&l_891[6],&l_1173.f0},{&l_1131[0][0][1],&l_891[6],&l_1122[0],&l_901},{(void*)0,(void*)0,&l_891[4],(void*)0},{(void*)0,&l_1131[0][0][1],(void*)0,&l_901},{&l_1129,&l_901,&l_1173.f0,&l_1122[0]}},{{&l_1122[0],&l_901,&l_901,&l_829},{&l_1122[0],&l_1121,&l_1173.f0,&l_889},{&l_1129,&l_829,(void*)0,&l_889},{(void*)0,&g_7,&l_891[4],&g_497},{(void*)0,&l_901,&l_1122[0],&g_123},{&l_1131[0][0][1],&g_6,&l_891[6],&l_1122[0]},{&l_891[4],&g_138[2].f0,&l_1131[0][0][1],&l_1131[0][0][1]},{&g_2,&g_2,&l_891[6],&l_901}}};
                int32_t l_1305 = (-1L);
                int i, j, k;
                for (g_133 = 0; (g_133 <= 4); g_133 += 1)
                {
                    int64_t l_1254 = 0xF8F2D36F340DF1A7LL;
                    int32_t l_1297 = 0L;
                }
                (*l_974) &= l_829;
                g_1308[0][5]--;
                for (g_320 = 0; g_320 < 4; g_320 += 1)
                {
                    g_418[g_320] = &g_172;
                }
            }
        }
    }
    return g_480;
}







static uint16_t func_41(int8_t * p_42, int32_t p_43, uint32_t p_44)
{
    uint16_t *l_471 = &g_37;
    uint16_t **l_472[7][3] = {{(void*)0,(void*)0,&l_471},{(void*)0,(void*)0,&l_471},{(void*)0,(void*)0,&l_471},{(void*)0,(void*)0,&l_471},{(void*)0,(void*)0,&l_471},{(void*)0,(void*)0,&l_471},{(void*)0,(void*)0,&l_471}};
    int8_t l_814 = 0x41L;
    int32_t *l_815 = &g_8;
    int i, j;
    (*l_815) = ((-1L) <= (((p_44 < (safe_lshift_func_int16_t_s_u(1L, (((safe_sub_func_uint16_t_u_u(g_37, (((safe_rshift_func_uint16_t_u_s((!(func_53(func_59(&g_7, (*p_42), g_8), (g_473[3] = l_471), g_475, (*g_475), &g_37) && 1L)), 11)) , l_814) , p_44))) > 0x9C4B4760L) | p_43)))) , l_814) != 0xFE75L));
    return (*g_281);
}







static uint64_t func_53(union U1 p_54, uint16_t * p_55, int8_t * p_56, int8_t p_57, uint16_t * p_58)
{
    int32_t *l_477 = &g_8;
    int32_t *l_478[6];
    int32_t l_479[4][9] = {{0xF14F4EB4L,0xF14F4EB4L,0x45AE1502L,0L,0L,0L,0L,0x45AE1502L,0xF14F4EB4L},{0x6032137EL,0L,0x2BDA8A62L,0L,0x6032137EL,0L,0x2BDA8A62L,0L,0x6032137EL},{0L,0L,0x45AE1502L,0xF14F4EB4L,0xF14F4EB4L,0x45AE1502L,0L,0L,0L},{0x4D5020AAL,0L,0x4D5020AAL,8L,0x4D5020AAL,0L,0x4D5020AAL,8L,0x4D5020AAL}};
    int32_t **l_484 = (void*)0;
    int32_t **l_485 = (void*)0;
    const union U0 *l_486 = &g_92;
    int8_t l_559 = 0x33L;
    uint64_t l_703 = 0x9130B0FC950978BFLL;
    int32_t ***l_705 = &l_484;
    int32_t ****l_704 = &l_705;
    int64_t *l_709 = (void*)0;
    int8_t *l_811 = &g_319;
    const union U2 l_812 = {0xAE4FL};
    union U0 l_813 = {18446744073709551615UL};
    int i, j;
    for (i = 0; i < 6; i++)
        l_478[i] = &g_138[2].f0;
    g_481[0]--;
    g_466 = &l_479[2][7];
    if ((*g_466))
    {
        uint32_t l_499 = 0UL;
        int32_t *l_502[9][5][4] = {{{&g_8,&g_497,&g_497,&g_497},{&g_497,(void*)0,&l_479[3][0],&g_138[2].f0},{&g_497,&g_8,&l_479[3][0],&g_123},{&l_479[1][2],(void*)0,&g_7,&g_6},{&l_479[1][2],&g_7,&l_479[3][0],(void*)0}},{{&g_497,&g_6,&l_479[3][0],&g_2},{&g_497,&g_497,&g_497,(void*)0},{&g_8,&l_479[3][0],&g_2,&l_479[3][7]},{&g_7,&l_479[1][8],&g_2,&l_479[3][0]},{&l_479[3][0],&g_497,&l_479[3][0],(void*)0}},{{&g_497,&g_2,&g_123,(void*)0},{&g_2,&l_479[1][8],&l_479[3][0],&l_479[3][0]},{(void*)0,&g_8,&g_2,(void*)0},{(void*)0,&g_2,&g_2,&g_497},{&g_138[2].f0,&g_6,&g_7,&g_2}},{{(void*)0,&g_7,&g_2,&g_6},{&g_497,&g_6,&l_479[3][0],&g_138[2].f0},{&l_479[0][0],&g_8,&g_7,&l_479[3][0]},{(void*)0,&g_7,&g_7,&g_497},{(void*)0,&l_479[1][8],&l_479[1][8],(void*)0}},{{&g_138[2].f0,(void*)0,&l_479[3][0],&l_479[3][0]},{&g_2,&l_479[0][0],&l_479[1][8],(void*)0},{&g_7,&g_123,&g_6,(void*)0},{&g_497,&l_479[0][0],&g_2,&l_479[3][0]},{&g_123,&g_138[2].f0,&l_479[1][2],&l_479[3][0]}},{{&g_2,&g_7,&l_479[3][6],&g_2},{&l_479[3][0],&g_138[2].f0,&g_6,&g_8},{&l_479[1][8],&g_2,(void*)0,&g_6},{&l_479[3][0],&g_6,&g_2,&g_7},{&l_479[3][0],&g_123,&g_497,&g_2}},{{&l_479[1][8],&g_7,&l_479[0][8],&g_2},{&g_2,&g_497,&l_479[3][6],&g_2},{&g_123,&g_2,&l_479[3][0],&g_6},{&g_123,&g_497,&g_6,&g_138[2].f0},{&l_479[2][2],&l_479[3][0],&g_6,&l_479[3][0]}},{{(void*)0,&g_2,&g_6,&g_497},{&g_2,&g_497,(void*)0,&l_479[1][3]},{&l_479[3][0],&g_123,&g_7,&g_2},{&g_2,&l_479[3][0],&g_2,&l_479[3][0]},{&l_479[3][0],&g_7,&l_479[3][0],&l_479[3][0]}},{{&g_7,&l_479[3][0],&g_497,&g_7},{&l_479[3][0],&g_7,&g_497,&g_6},{&g_7,&g_2,&l_479[3][0],&g_6},{&l_479[3][0],(void*)0,&g_2,&g_2},{&g_2,&g_2,&g_7,&g_2}}};
        int16_t l_517 = 4L;
        union U2 ** const l_528 = &g_427;
        uint64_t **l_562 = (void*)0;
        const uint8_t l_659 = 0x3FL;
        union U2 **l_667 = (void*)0;
        union U2 ***l_666 = &l_667;
        uint16_t ***l_717 = &g_297;
        const union U0 l_758 = {0x0B1DA753BFC7770DLL};
        uint64_t l_759[6];
        uint8_t l_769 = 0UL;
        uint32_t l_790 = 0x4F1A2CF2L;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_759[i] = 18446744073709551614UL;
lbl_673:
        for (g_133 = 0; (g_133 <= 6); g_133 += 1)
        {
            int32_t **l_488 = &l_478[5];
            int16_t *l_492[8] = {&g_172,&g_172,&g_172,&g_172,&g_172,&g_172,&g_172,&g_172};
            int16_t l_496 = 0xFE9DL;
            int32_t l_498 = (-3L);
            uint32_t l_539 = 0x8E7C59ECL;
            union U0 *l_579 = &g_92;
            int i;
            for (g_320 = 0; (g_320 <= 6); g_320 += 1)
            {
                int32_t ***l_489[9][7][4] = {{{&l_484,&l_488,&l_484,(void*)0},{&l_485,&l_484,&l_488,&l_485},{&l_485,&l_488,&l_484,&l_484},{&l_484,&l_488,(void*)0,&l_484},{&l_488,&l_484,&l_488,(void*)0},{&l_488,&l_484,&l_484,(void*)0},{&l_484,&l_484,(void*)0,&l_484}},{{&l_485,&l_488,&l_484,&l_484},{&l_488,&l_488,(void*)0,&l_485},{&l_488,&l_484,(void*)0,(void*)0},{&l_488,&l_488,&l_484,(void*)0},{&l_485,(void*)0,(void*)0,&l_485},{&l_484,&l_488,&l_484,(void*)0},{&l_488,&l_488,&l_488,&l_485}},{{&l_488,(void*)0,(void*)0,(void*)0},{&l_484,&l_488,&l_484,(void*)0},{&l_485,&l_484,&l_488,&l_485},{&l_485,&l_488,&l_484,&l_484},{&l_484,&l_488,(void*)0,&l_484},{&l_488,&l_484,&l_488,(void*)0},{&l_488,&l_484,&l_484,(void*)0}},{{&l_484,&l_484,&l_488,&l_488},{&l_488,&l_484,&l_484,(void*)0},{&l_488,&l_488,(void*)0,(void*)0},{&l_488,&l_484,(void*)0,(void*)0},{&l_488,&l_488,&l_484,(void*)0},{&l_488,&l_484,&l_488,(void*)0},{&l_485,&l_484,&l_488,&l_488}},{{&l_488,&l_484,&l_484,(void*)0},{&l_484,&l_484,(void*)0,(void*)0},{&l_485,&l_488,&l_488,(void*)0},{&l_488,&l_484,(void*)0,(void*)0},{&l_488,&l_488,&l_488,(void*)0},{&l_485,&l_484,(void*)0,&l_488},{&l_484,&l_484,&l_484,(void*)0}},{{&l_488,&l_485,&l_488,(void*)0},{&l_485,&l_484,&l_488,&l_488},{&l_488,&l_484,&l_484,(void*)0},{&l_488,&l_488,(void*)0,(void*)0},{&l_488,&l_484,(void*)0,(void*)0},{&l_488,&l_488,&l_484,(void*)0},{&l_488,&l_484,&l_488,(void*)0}},{{&l_485,&l_484,&l_488,&l_488},{&l_488,&l_484,&l_484,(void*)0},{&l_484,&l_484,(void*)0,(void*)0},{&l_485,&l_488,&l_488,(void*)0},{&l_488,&l_484,(void*)0,(void*)0},{&l_488,&l_488,&l_488,(void*)0},{&l_485,&l_484,(void*)0,&l_488}},{{&l_484,&l_484,&l_484,(void*)0},{&l_488,&l_485,&l_488,(void*)0},{&l_485,&l_484,&l_488,&l_488},{&l_488,&l_484,&l_484,(void*)0},{&l_488,&l_488,(void*)0,(void*)0},{&l_488,&l_484,(void*)0,(void*)0},{&l_488,&l_488,&l_484,(void*)0}},{{&l_488,&l_484,&l_488,(void*)0},{&l_485,&l_484,&l_488,&l_488},{&l_488,&l_484,&l_484,(void*)0},{&l_484,&l_484,(void*)0,(void*)0},{&l_485,&l_488,&l_488,(void*)0},{&l_488,&l_484,(void*)0,(void*)0},{&l_488,&l_488,&l_488,(void*)0}}};
                int i, j, k;
                g_487[4][7][2] = l_486;
                g_490 = l_488;
                for (g_356 = 1; (g_356 <= 6); g_356 += 1)
                {
                    int16_t **l_493 = (void*)0;
                    int16_t **l_494 = &g_418[2];
                    int32_t l_495 = 4L;
                    if (((**g_297) & (**l_488)))
                    {
                        union U2 **l_491 = &g_427;
                        (*l_491) = &g_415[0][1][4];
                    }
                    else
                    {
                        (*l_477) |= (**g_490);
                        return p_57;
                    }
                    (**l_488) = (((*l_494) = l_492[4]) != p_58);
                    l_499--;
                }
            }
            for (g_356 = 1; (g_356 <= 6); g_356 += 1)
            {
                int16_t l_516 = (-5L);
                int64_t *l_518 = &g_192;
                int32_t l_519 = 5L;
                union U0 l_526 = {0x43314C88515E6A3BLL};
                const union U1 l_527 = {0x7CE30763L};
                uint32_t l_561 = 1UL;
                int32_t * const l_564 = &g_2;
                (*l_477) = ((**l_488) = (((*g_490) == l_502[7][1][1]) != ((safe_mod_func_uint8_t_u_u(g_334, ((g_325 != (safe_mod_func_uint32_t_u_u(((p_57 , ((g_8 , (safe_mul_func_int16_t_s_s((((*g_466) = (+((((*l_518) |= (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(((*g_466) > (p_54 , 8L)), l_516)), l_517)), 6))) >= 0UL) > g_481[0]))) & (**l_488)), p_54.f2))) || g_162[3][0][2])) >= l_519), 0xFAD3105DL))) | (**l_488)))) <= (*p_58))));
                for (p_54.f0 = 0; (p_54.f0 <= 4); p_54.f0 += 1)
                {
                    (*l_477) ^= p_54.f1;
                }
                for (g_286 = 0; (g_286 <= 0); g_286 += 1)
                {
                    uint16_t l_520 = 65535UL;
                    union U2 ***l_554 = (void*)0;
                    union U2 **l_556 = &g_427;
                    union U2 ***l_555 = &l_556;
                    uint8_t *l_560 = (void*)0;
                    union U1 l_577[4] = {{0x6EE22AE4L},{0x6EE22AE4L},{0x6EE22AE4L},{0x6EE22AE4L}};
                    int i, j, k;
                }
            }
        }
        (*g_296) = &p_55;
        for (g_133 = 15; (g_133 <= 1); g_133--)
        {
            int32_t l_588[7][10] = {{(-1L),0x8F62C7F2L,0xE1D9EB29L,0x0EF3DE38L,(-1L),(-1L),0x0EF3DE38L,0xE1D9EB29L,0x8F62C7F2L,(-1L)},{0xF15F6CE1L,0x929CF573L,0x07FE780EL,(-1L),0x8F62C7F2L,0xE1D9EB29L,0x0EF3DE38L,(-1L),(-1L),0x0EF3DE38L},{(-1L),0x8F62C7F2L,0x929CF573L,0x929CF573L,0x8F62C7F2L,(-1L),0xE1D9EB29L,0x07FE780EL,0xF15F6CE1L,(-1L)},{0x8F62C7F2L,0x0EF3DE38L,0x929CF573L,(-1L),(-1L),0x07FE780EL,0x07FE780EL,(-1L),(-1L),0x929CF573L},{0x8F62C7F2L,0x8F62C7F2L,0x07FE780EL,0x0EF3DE38L,0xF15F6CE1L,(-1L),0x929CF573L,0xE1D9EB29L,(-1L),(-1L)},{(-1L),0x929CF573L,0xE1D9EB29L,(-1L),(-1L),0xE1D9EB29L,0x929CF573L,(-1L),0xF15F6CE1L,0x0EF3DE38L},{0xF15F6CE1L,0x8F62C7F2L,0x0EF3DE38L,0x929CF573L,(-1L),(-1L),0x07FE780EL,0x07FE780EL,(-1L),(-1L)}};
            union U1 l_610 = {0xFD9226A7L};
            int32_t l_611 = 0x9AAF3293L;
            int32_t l_626 = 0xCB8E6715L;
            union U2 ****l_668 = (void*)0;
            union U2 ****l_669 = &l_666;
            union U2 * const ***l_672 = &g_670;
            int i, j;
            for (p_57 = 1; (p_57 <= 5); p_57 += 1)
            {
                int64_t *l_591[10] = {&g_192,&g_192,&g_192,&g_192,&g_192,&g_192,&g_192,&g_192,&g_192,&g_192};
                uint32_t *l_621[1][5][7] = {{{&g_260,&g_147,&g_260,&g_260,&g_147,&g_260,&g_147},{&g_147,&g_147,&g_147,&g_147,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_260,&g_147,&g_260,&g_147,(void*)0},{&g_147,&g_147,&g_260,&g_260,(void*)0,&g_147,&g_260},{&g_147,&g_147,&g_147,&g_147,&g_147,&g_147,&g_147}}};
                uint64_t l_622 = 0x2613ECBFC6C8C9F0LL;
                uint8_t *l_623 = &g_84;
                int8_t *l_624 = (void*)0;
                int32_t l_625 = 7L;
                int i, j, k;
            }
            p_54.f0 ^= (((*l_669) = l_666) == ((*l_672) = g_670));
            if (g_133)
                goto lbl_673;
        }
        for (g_356 = 0; (g_356 != 33); g_356 = safe_add_func_uint16_t_u_u(g_356, 1))
        {
            const uint32_t l_676 = 0x259B0F80L;
            union U0 **l_693 = &g_230;
            int32_t l_755 = 1L;
            int32_t l_799 = (-1L);
            if (l_676)
                break;
        }
    }
    else
    {
        int64_t l_805 = 0x08A47893A0ACD5B7LL;
        int32_t l_806[5][4][8] = {{{0L,0xF9D7DB10L,(-1L),0x8EB09E57L,0x64ED70FDL,0x8EB09E57L,(-1L),0xF9D7DB10L},{(-1L),(-1L),(-1L),0x8EB09E57L,0x1469377DL,0L,0L,0x1469377DL},{0x4F4FFF0BL,0x1469377DL,0x1469377DL,0x4F4FFF0BL,(-1L),0xF9D7DB10L,0L,0L},{(-1L),0x4F4FFF0BL,(-1L),0L,(-1L),0x4F4FFF0BL,(-1L),0x64ED70FDL}},{{(-1L),0x4F4FFF0BL,(-1L),0x64ED70FDL,0xF9D7DB10L,0xF9D7DB10L,0x64ED70FDL,(-1L)},{0x1469377DL,0x1469377DL,0x4F4FFF0BL,(-1L),0xF9D7DB10L,0L,0L,0L},{(-1L),(-1L),(-1L),(-1L),(-1L),0x8EB09E57L,0x1469377DL,0L},{(-1L),0xF9D7DB10L,0L,(-1L),(-1L),0L,0xF9D7DB10L,(-1L)}},{{0x4F4FFF0BL,0x8EB09E57L,0L,0x64ED70FDL,0x1469377DL,(-1L),0x1469377DL,0x64ED70FDL},{(-1L),0x05C22897L,(-1L),0L,0x64ED70FDL,(-1L),0L,0L},{0L,0x8EB09E57L,0x4F4FFF0BL,0x4F4FFF0BL,0x8EB09E57L,0L,0x64ED70FDL,0x1469377DL},{0L,0xF9D7DB10L,(-1L),0x8EB09E57L,0x64ED70FDL,0x8EB09E57L,(-1L),0xF9D7DB10L}},{{0x8EB09E57L,0x05C22897L,0L,0x4F4FFF0BL,0L,(-1L),(-1L),0L},{0x1469377DL,0L,0L,0x1469377DL,0x8EB09E57L,(-1L),(-1L),(-1L)},{0x05C22897L,0x1469377DL,0L,(-1L),0L,0x1469377DL,0x05C22897L,0xF9D7DB10L},{0L,0x1469377DL,0x05C22897L,0xF9D7DB10L,(-1L),(-1L),0xF9D7DB10L,0x05C22897L}},{{0L,0L,0x1469377DL,0x8EB09E57L,(-1L),(-1L),(-1L),(-1L)},{0L,0x05C22897L,0x8EB09E57L,0x05C22897L,0L,0x4F4FFF0BL,0L,(-1L)},{0x05C22897L,(-1L),(-1L),0x8EB09E57L,0x8EB09E57L,(-1L),(-1L),0x05C22897L},{0x1469377DL,0x4F4FFF0BL,(-1L),0xF9D7DB10L,0L,0L,0L,0xF9D7DB10L}}};
        uint8_t l_808[9] = {251UL,0xC1L,251UL,251UL,0xC1L,251UL,251UL,0xC1L,251UL};
        int i, j, k;
        l_808[2]--;
    }
    (*g_490) = func_69(l_811, (*l_486), l_812, &g_319, ((l_813 = (*l_486)) , p_54));
    return (**g_568);
}







static union U1 func_59(int32_t * p_60, const int8_t p_61, uint64_t p_62)
{
    int32_t l_82 = (-9L);
    uint8_t *l_83 = &g_84;
    uint16_t *l_87[5][2] = {{(void*)0,(void*)0},{(void*)0,&g_33},{(void*)0,&g_33},{&g_33,&g_33},{(void*)0,&g_33}};
    int32_t *l_88[5] = {&g_8,&g_8,&g_8,&g_8,&g_8};
    union U0 l_90[9][4] = {{{18446744073709551615UL},{0UL},{0x9F1A7DFAE38EDFC7LL},{0xB292197989736453LL}},{{0x3C9E48991CD3C6E8LL},{0UL},{0UL},{0x3C9E48991CD3C6E8LL}},{{0UL},{0x3C9E48991CD3C6E8LL},{18446744073709551615UL},{0xF1B6398C3D34E0BBLL}},{{0UL},{18446744073709551615UL},{0UL},{0x9F1A7DFAE38EDFC7LL}},{{0x3C9E48991CD3C6E8LL},{0xF1B6398C3D34E0BBLL},{0x9F1A7DFAE38EDFC7LL},{0x9F1A7DFAE38EDFC7LL}},{{18446744073709551615UL},{18446744073709551615UL},{0xB292197989736453LL},{0xF1B6398C3D34E0BBLL}},{{0xF1B6398C3D34E0BBLL},{0x3C9E48991CD3C6E8LL},{0xB292197989736453LL},{0x3C9E48991CD3C6E8LL}},{{18446744073709551615UL},{0UL},{0x9F1A7DFAE38EDFC7LL},{0xB292197989736453LL}},{{0x3C9E48991CD3C6E8LL},{0UL},{0UL},{0x3C9E48991CD3C6E8LL}}};
    union U0 *l_91[1];
    const union U2 l_93 = {1UL};
    const union U1 l_94 = {1L};
    const int8_t *l_136 = &g_15;
    int32_t l_464 = (-1L);
    int32_t **l_465[8] = {&l_88[3],&l_88[0],&l_88[3],&l_88[0],&l_88[3],&l_88[0],&l_88[3],&l_88[0]};
    int32_t *l_467 = &g_138[2].f0;
    int i, j;
    for (i = 0; i < 1; i++)
        l_91[i] = &l_90[5][1];
lbl_470:
    l_464 = ((func_63(func_69(func_75((safe_mul_func_int8_t_s_s((4294967295UL ^ l_82), (--(*l_83)))), p_62, l_87[2][0], (g_8 &= l_82)), (g_92 = l_90[7][1]), l_93, &g_15, l_94), l_136, g_15, g_7, l_83) | p_61) != p_61);
    l_467 = (g_466 = &g_8);
    for (g_33 = 0; (g_33 == 17); g_33 = safe_add_func_uint64_t_u_u(g_33, 1))
    {
        if (g_172)
            goto lbl_470;
    }
    return l_94;
}







static uint64_t func_63(int32_t * p_64, const int8_t * p_65, int32_t p_66, uint64_t p_67, int8_t * p_68)
{
    union U1 *l_139 = (void*)0;
    int32_t l_140[8][1] = {{0xC1C087C3L},{0x2127F58FL},{0xC1C087C3L},{0xC1C087C3L},{0x2127F58FL},{0xC1C087C3L},{0xC1C087C3L},{0x2127F58FL}};
    uint16_t l_185 = 65535UL;
    uint16_t **l_221 = (void*)0;
    uint16_t ***l_220 = &l_221;
    int32_t *l_329 = &g_6;
    int32_t **l_328 = &l_329;
    union U0 l_338[6] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
    int16_t **l_403 = (void*)0;
    int32_t l_448 = 0xE399276BL;
    const int64_t *l_462 = &g_192;
    int i, j;
lbl_428:
    l_139 = g_137[7][0];
    for (g_84 = 0; (g_84 <= 6); g_84 += 1)
    {
        const union U2 l_141 = {0x1B5AL};
        uint32_t *l_146[7][9][4] = {{{&g_147,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_147,(void*)0},{&g_147,&g_147,&g_147,&g_147},{(void*)0,&g_147,(void*)0,&g_147},{(void*)0,(void*)0,&g_147,&g_147},{&g_147,&g_147,&g_147,(void*)0},{&g_147,&g_147,&g_147,(void*)0},{&g_147,&g_147,&g_147,&g_147}},{{(void*)0,&g_147,(void*)0,(void*)0},{(void*)0,(void*)0,&g_147,(void*)0},{&g_147,&g_147,&g_147,&g_147},{&g_147,(void*)0,&g_147,&g_147},{&g_147,(void*)0,(void*)0,&g_147},{(void*)0,&g_147,&g_147,(void*)0},{&g_147,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_147,&g_147}},{{&g_147,&g_147,(void*)0,&g_147},{&g_147,(void*)0,&g_147,(void*)0},{(void*)0,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_147,(void*)0},{&g_147,&g_147,&g_147,(void*)0},{(void*)0,&g_147,(void*)0,&g_147},{&g_147,(void*)0,&g_147,&g_147},{&g_147,&g_147,&g_147,(void*)0},{&g_147,&g_147,&g_147,(void*)0}},{{&g_147,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_147,(void*)0},{&g_147,(void*)0,(void*)0,&g_147},{&g_147,&g_147,(void*)0,&g_147},{&g_147,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_147,&g_147},{&g_147,&g_147,&g_147,(void*)0},{&g_147,&g_147,&g_147,&g_147},{&g_147,(void*)0,&g_147,&g_147}},{{&g_147,(void*)0,(void*)0,&g_147},{(void*)0,&g_147,&g_147,(void*)0},{&g_147,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_147,&g_147},{&g_147,&g_147,(void*)0,&g_147},{&g_147,(void*)0,&g_147,(void*)0},{(void*)0,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_147,(void*)0}},{{&g_147,&g_147,&g_147,(void*)0},{(void*)0,&g_147,(void*)0,&g_147},{&g_147,(void*)0,&g_147,&g_147},{&g_147,&g_147,&g_147,(void*)0},{&g_147,&g_147,&g_147,(void*)0},{&g_147,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_147,(void*)0},{&g_147,(void*)0,(void*)0,&g_147},{&g_147,&g_147,(void*)0,&g_147}},{{&g_147,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_147,&g_147},{&g_147,&g_147,&g_147,(void*)0},{&g_147,&g_147,&g_147,&g_147},{&g_147,(void*)0,&g_147,&g_147},{&g_147,(void*)0,(void*)0,&g_147},{(void*)0,&g_147,&g_147,&g_147},{&g_147,(void*)0,&g_147,(void*)0},{&g_147,(void*)0,&g_147,&g_147}}};
        int32_t l_148 = 0x406C9851L;
        uint16_t * const l_161 = &g_162[0][3][2];
        uint16_t * const *l_160 = &l_161;
        uint16_t * const **l_159 = &l_160;
        uint16_t *l_163 = &g_162[0][3][2];
        const union U1 l_164 = {0x86D33B1CL};
        int32_t *l_166 = &g_6;
        int32_t **l_165 = &l_166;
        int8_t *l_206 = &g_15;
        int32_t l_259[3];
        int16_t l_285 = 0L;
        int8_t l_376 = (-1L);
        uint8_t l_379 = 4UL;
        union U0 ** const l_394 = (void*)0;
        uint64_t l_397 = 18446744073709551615UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_259[i] = 0xA7CCC4FCL;
        if (l_140[4][0])
            break;
        (*l_165) = func_69(p_68, g_92, l_141, func_75(g_101[1], (safe_add_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((g_147 = (l_148 = l_140[4][0])), (((safe_add_func_int32_t_s_s((*p_64), ((((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((g_127[3][0][0] | ((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((*l_159) = (void*)0) == (void*)0), 0L)), 0x5E9BL)) || (*p_65))), (*p_65))) && g_8), 65535UL)) , 0xCEL) >= 0UL) , g_15))) <= l_141.f0) , l_140[6][0]))) != p_66), l_140[0][0])), l_163, (*p_64)), l_164);
        for (g_123 = 0; (g_123 <= 6); g_123 += 1)
        {
            uint8_t l_169 = 0x97L;
            int32_t *l_195 = &g_138[2].f0;
            int64_t *l_196 = &g_192;
            union U0 *l_233 = &g_92;
            uint16_t *l_239 = (void*)0;
            int32_t l_258[2][3] = {{0x001EDFECL,0x001EDFECL,0x001EDFECL},{0x144A9CEFL,0x144A9CEFL,0x144A9CEFL}};
            const int16_t l_280 = 0xE915L;
            int32_t l_314 = 0x265DA1E0L;
            union U1 l_353[9] = {{-1L},{-1L},{0L},{-1L},{-1L},{0L},{-1L},{-1L},{0L}};
            union U2 *l_425 = &g_415[0][2][4];
            int i, j;
            for (p_67 = 0; (p_67 <= 6); p_67 += 1)
            {
                union U1 l_167[5][9] = {{{7L},{7L},{0xBADF4511L},{7L},{7L},{0xBADF4511L},{7L},{7L},{0xBADF4511L}},{{7L},{7L},{0xBADF4511L},{7L},{7L},{0xBADF4511L},{7L},{7L},{0xBADF4511L}},{{7L},{7L},{0xBADF4511L},{7L},{7L},{0xBADF4511L},{7L},{7L},{0xBADF4511L}},{{7L},{7L},{0xBADF4511L},{7L},{7L},{0xBADF4511L},{7L},{7L},{0xBADF4511L}},{{7L},{7L},{0xBADF4511L},{7L},{7L},{0xBADF4511L},{7L},{7L},{0xBADF4511L}}};
                int32_t l_170 = 1L;
                int i, j;
                for (g_147 = 0; (g_147 <= 3); g_147 += 1)
                {
                    int32_t *l_171 = &l_140[6][0];
                    int64_t *l_190 = (void*)0;
                    int64_t *l_191 = &g_192;
                    int16_t *l_193[7][4] = {{(void*)0,&g_119,(void*)0,&g_119},{(void*)0,&g_119,(void*)0,&g_119},{(void*)0,&g_119,(void*)0,&g_119},{(void*)0,&g_119,(void*)0,&g_119},{(void*)0,&g_119,(void*)0,&g_119},{(void*)0,&g_119,(void*)0,&g_119},{(void*)0,&g_119,(void*)0,&g_119}};
                    int64_t l_194 = 0L;
                    int i, j;
                    (*l_171) |= (l_167[1][6] , (g_162[3][0][3] | (~(l_167[1][6].f2 <= (l_170 &= (l_169 = g_84))))));
                    (*l_171) = (((g_172 = p_67) != ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((p_67 || (-1L)), ((l_185 >= (g_119 ^= (safe_add_func_int64_t_s_s(((*l_191) = (safe_mod_func_uint64_t_u_u(((&l_167[1][6] != (void*)0) | (65535UL | (((-1L) ^ (*p_65)) >= g_162[0][3][2]))), p_66))), p_67)))) > p_67))), p_67)) , 0x8D19A333CC60E83FLL), 0xA121D4F9B34B0AA6LL)), 1)) & g_15), 1)), p_66)) , p_66)) & l_194);
                }
                g_8 &= (**l_165);
            }
            (*l_195) = l_185;
            (*l_195) = (((((&g_192 == l_196) > (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((*l_166) <= (safe_add_func_uint8_t_u_u(((((!(g_138[2].f0 != (*l_166))) && (safe_div_func_uint16_t_u_u((*l_166), p_67))) != ((p_66 | (l_206 != p_68)) >= (-1L))) , g_37), p_66))), 2)), 9))) , g_123) <= g_2) == l_140[6][0]);
            if (((safe_sub_func_uint8_t_u_u(p_67, (+((((((0x9632L > g_123) && ((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((*p_64) >= ((g_147 &= g_133) <= (((((((safe_lshift_func_int16_t_s_s((0xD099L != (safe_div_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(g_92.f0, (((void*)0 == l_220) , (-4L)))), l_185))), 0)) >= p_66) < 0xD96CL) == g_92.f1) | g_33) && 0xE8CB1020L) , (*p_64)))), g_119)), (-1L))) && 254UL)) | 0x20ADL) <= g_84) || g_2) > 0x9AL)))) && g_92.f0))
            {
                union U0 *l_232 = &g_92;
                union U0 **l_231 = &l_232;
                uint8_t *l_234 = &l_169;
                (*l_195) = (((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((((*l_206) = ((((*l_231) = (g_230 = &g_92)) == l_233) == ((((*l_234) = 0x3AL) >= 0x15L) & (safe_lshift_func_int8_t_s_u((*l_195), (safe_div_func_int16_t_s_s((l_239 == ((((*l_166) > g_119) && 0x67E062F4L) , (void*)0)), g_6))))))) & 0x47L) || p_67) | g_162[3][8][2]), (*p_68))), (*l_166))), (**l_165))), 2)) , g_37) && p_67);
            }
            else
            {
                int64_t l_240 = (-1L);
                int32_t l_252 = 0xC92A1477L;
                int32_t l_253 = 0x9C3896C7L;
                uint64_t *l_274 = (void*)0;
                uint16_t *l_284 = &l_185;
                int16_t l_299[10] = {3L,(-7L),3L,(-7L),3L,(-7L),3L,(-7L),3L,(-7L)};
                const union U2 l_307 = {65534UL};
                const int32_t l_313[3][3][10] = {{{0x94C9F594L,0xAC6A4DF1L,0L,0x94C9F594L,0xA2C21A14L,0x94C9F594L,0L,0xAC6A4DF1L,0x94C9F594L,(-1L)},{0L,0xAC6A4DF1L,0x876024A5L,0L,0xA2C21A14L,1L,0xAC6A4DF1L,0xAC6A4DF1L,1L,0xA2C21A14L},{0L,0L,0L,0L,(-1L),0x94C9F594L,0xAC6A4DF1L,0L,0x94C9F594L,0xA2C21A14L}},{{0x94C9F594L,0xAC6A4DF1L,0L,0x94C9F594L,0xA2C21A14L,0x94C9F594L,0L,0xAC6A4DF1L,0x94C9F594L,(-1L)},{0L,0xAC6A4DF1L,0x876024A5L,0L,0xA2C21A14L,1L,0xAC6A4DF1L,0xAC6A4DF1L,1L,0xA2C21A14L},{0L,0L,0L,0L,(-1L),0x94C9F594L,0xAC6A4DF1L,0L,0x94C9F594L,0xA2C21A14L}},{{0x94C9F594L,0xAC6A4DF1L,0L,0x94C9F594L,0xA2C21A14L,0x94C9F594L,0L,0xAC6A4DF1L,0x94C9F594L,(-1L)},{0L,0xAC6A4DF1L,0x876024A5L,0L,0xA2C21A14L,1L,0x94C9F594L,0x94C9F594L,3L,0x5D300AABL},{0L,1L,1L,0L,(-2L),0x6C9A34EFL,0x94C9F594L,1L,0x6C9A34EFL,0x5D300AABL}}};
                uint64_t l_340 = 6UL;
                uint32_t **l_384 = &l_146[1][8][1];
                uint8_t *l_398 = &l_379;
                uint8_t *l_401 = &g_127[0][2][0];
                int i, j, k;
                for (l_148 = 1; (l_148 <= 7); l_148 += 1)
                {
                    uint32_t l_254 = 0x7222D3A8L;
                    int32_t *l_257[10] = {&l_140[4][0],&l_148,&l_140[4][0],&l_140[4][0],&l_148,&l_140[4][0],&l_140[4][0],&l_148,&l_140[4][0],&l_140[4][0]};
                    int i;
                    for (l_185 = 0; (l_185 <= 7); l_185 += 1)
                    {
                        int32_t *l_241 = &l_140[4][0];
                        int32_t *l_242 = &l_140[4][0];
                        int32_t *l_243 = &l_140[2][0];
                        int32_t *l_244 = &l_140[4][0];
                        int32_t *l_245 = &g_138[2].f0;
                        int32_t *l_246 = (void*)0;
                        int32_t *l_247 = &l_140[4][0];
                        int32_t *l_248[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_248[i] = &g_138[2].f0;
                        (*l_195) ^= 0x5E6F1A90L;
                        ++g_249;
                        ++l_254;
                    }
                    if (g_37)
                        continue;
                    g_260--;
                }
                if ((g_101[5] ^ (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s((18446744073709551615UL && l_140[4][0]), ((((safe_div_func_uint32_t_u_u((g_260 = ((l_164 , (safe_mod_func_uint64_t_u_u((p_67 ^= (+0xE64603C1C094A489LL)), (g_192 ^= ((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u(((*l_195) = (l_253 = (l_252 = ((((*l_206) = ((l_280 , ((g_281 = &g_133) != (void*)0)) | (((safe_mul_func_int16_t_s_s(((l_239 != l_284) & g_101[6]), g_138[2].f1)) < 0x24E20385L) == 0L))) >= l_285) > 0xFC61L)))))), p_66)) , p_66))))) && l_240)), 4294967290UL)) & 0x512B0079L) , g_286) <= (**l_165)))) != g_101[2]) == l_240) == 0x300E0F48L), g_162[0][5][2])), 2))))
                {
                    uint64_t l_291 = 1UL;
                    int32_t l_316 = 8L;
                    for (g_172 = 4; (g_172 >= 0); g_172 -= 1)
                    {
                        int32_t l_300 = 0xC76F28C0L;
                        int32_t *l_301 = &l_253;
                        int32_t **l_302 = &l_301;
                        union U0 l_312 = {0x074A923E24EC49DALL};
                        int i;
                        (*l_301) |= (l_252 = (((l_300 |= ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(l_291, ((((g_162[0][3][2] | (((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((l_291 , (void*)0) == g_296), 0x6DL)), (safe_unary_minus_func_int8_t_s(((((*p_68) < (**l_165)) & ((g_101[g_84] &= (((0x01ECBBADL >= 4294967295UL) == l_240) & (*l_195))) <= g_33)) || g_123))))) == 18446744073709551615UL) <= (-1L))) == l_291) , l_299[7]) , (***g_296)))) , 4294967290UL), g_147)) , g_127[4][0][0])) , (*g_230)) , g_138[2].f2));
                        (*l_302) = ((*l_165) = p_64);
                        l_316 = (((p_66 <= ((g_315[0] |= (p_67 , (g_286 = (p_67 | (((safe_sub_func_int64_t_s_s(p_67, (safe_lshift_func_uint16_t_u_u((((g_37 != (((((l_307 , (safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_312 , ((((*l_206) = (l_185 , (-1L))) ^ g_260) && p_66)), (*l_301))), 6))) && g_249) != l_313[2][0][3]) < 0x23EFC6D466516C38LL) <= l_314)) ^ g_138[2].f1) == l_140[4][0]), 2)))) && g_147) , g_162[5][6][0]))))) == p_67)) | (*p_64)) || p_66);
                    }
                }
                else
                {
                    union U1 *l_332 = (void*)0;
                    int32_t l_349 = 3L;
                    int32_t l_357[7][6][5] = {{{(-7L),(-6L),(-1L),2L,0xDADD1EA7L},{0x3AF73780L,0xAF7DA5F0L,1L,0L,0xE918BFD0L},{7L,(-1L),1L,(-1L),0x54270C19L},{0xEF2415FEL,(-1L),(-4L),(-1L),0xEF2415FEL},{0xAF7DA5F0L,0L,7L,8L,(-4L)},{0x4F809129L,0x5808BEAAL,(-1L),0x78210C9AL,0xC2D5D75FL}},{{(-6L),(-5L),0x54270C19L,0L,(-4L)},{(-1L),0x78210C9AL,0L,0x4F809129L,0xEF2415FEL},{(-4L),(-2L),8L,(-1L),0x54270C19L},{0xAA4C6299L,0x6B9F2893L,0L,9L,0xE918BFD0L},{6L,(-1L),(-7L),0x6B9F2893L,0xDADD1EA7L},{0xDD481381L,(-1L),0x75E8FB9FL,6L,(-1L)}},{{0x1653EB9EL,0x3AF73780L,0xCFDA8591L,(-7L),(-1L)},{0x1653EB9EL,0x71CE9F94L,0xAF7DA5F0L,(-1L),(-8L)},{0xDD481381L,0x7EFDA621L,(-1L),0xEF2415FEL,(-4L)},{6L,(-7L),0x78210C9AL,(-1L),0x71CE9F94L},{0xAA4C6299L,0x0F74F535L,6L,(-7L),6L},{(-4L),(-4L),(-1L),7L,0x8411622CL}},{{(-1L),0x84BE0C72L,0x73F8D645L,0x8411622CL,0L},{(-6L),(-8L),0x0F74F535L,0xDD481381L,8L},{0x4F809129L,0x84BE0C72L,(-1L),0xDADD1EA7L,7L},{0xAF7DA5F0L,(-4L),(-2L),8L,(-1L)},{0xEF2415FEL,0x0F74F535L,0xE7C83C69L,0x1653EB9EL,0L},{7L,(-7L),0x4F809129L,(-1L),0L}},{{0x3AF73780L,0x7EFDA621L,0x71CE9F94L,0xCFDA8591L,0xCA68AB15L},{(-7L),0x71CE9F94L,9L,(-8L),0x84BE0C72L},{(-1L),0x3AF73780L,9L,(-2L),7L},{0x4447FE1CL,(-1L),0x71CE9F94L,0x75E8FB9FL,(-3L)},{0x73F8D645L,(-1L),0x4F809129L,9L,0xAA4C6299L},{(-1L),0x6B9F2893L,0xE7C83C69L,7L,0x75E8FB9FL}},{{0L,(-2L),(-2L),0L,0x7EFDA621L},{(-1L),0x78210C9AL,(-1L),0xE918BFD0L,0x0F74F535L},{0xCA68AB15L,(-5L),0x0F74F535L,(-3L),0x5808BEAAL},{0L,0x5808BEAAL,0xE918BFD0L,0xCFDA8591L,0xE7C83C69L},{0x4F809129L,0xC2995D31L,(-5L),(-3L),0x71CE9F94L},{(-4L),0x1653EB9EL,0xDD481381L,0x73F8D645L,0xDADD1EA7L}},{{0xAA4C6299L,(-4L),(-7L),7L,0L},{(-1L),(-1L),0xDADD1EA7L,(-1L),(-3L)},{7L,0L,(-1L),1L,(-7L)},{0x54270C19L,0x01091E14L,9L,0xAA4C6299L,(-7L)},{2L,(-5L),(-1L),9L,(-3L)},{(-1L),9L,0L,0xDADD1EA7L,0L}}};
                    const int8_t l_383 = 1L;
                    uint32_t **l_386 = (void*)0;
                    const int32_t *l_387 = &l_253;
                    int i, j, k;
                    if (g_37)
                        break;
                    for (l_252 = 5; (l_252 >= 0); l_252 -= 1)
                    {
                        int32_t *l_317 = (void*)0;
                        int32_t *l_318 = &l_253;
                        int32_t *l_323 = &l_148;
                        int32_t *l_324[10][1] = {{&g_2},{&g_2},{&g_138[2].f0},{&g_138[2].f0},{&g_138[2].f0},{&g_2},{&g_2},{&g_138[2].f0},{&g_138[2].f0},{&g_138[2].f0}};
                        int i, j;
                        g_320--;
                        (*l_165) = &l_140[4][0];
                        g_138[2].f0 &= (l_164 , ((**l_165) = 0xEEB307C9L));
                        --g_325;
                    }
                    l_328 = &p_64;
                    if ((safe_rshift_func_uint16_t_u_s((*g_281), (&l_164 != l_332))))
                    {
                        int32_t *l_333[5][2] = {{&g_7,(void*)0},{&g_7,(void*)0},{&g_7,(void*)0},{&g_7,(void*)0},{&g_7,(void*)0}};
                        int16_t *l_339 = &g_315[0];
                        uint8_t *l_382 = &g_127[6][2][0];
                        int i, j;
                        --g_335;
                        l_340 = (l_338[5] , ((g_2 != ((*l_339) |= g_15)) , 0x94F41C55L));
                        l_357[5][3][1] = ((((safe_sub_func_int32_t_s_s((((p_66 , (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_add_func_int64_t_s_s((*l_329), (l_349 && (((!g_192) , (((*l_339) = (safe_sub_func_int8_t_s_s(1L, (l_353[4] , l_349)))) < (safe_rshift_func_int8_t_s_s((*l_166), ((g_356 |= g_192) ^ (**l_165)))))) ^ 6UL)))) >= p_67), 0x2F0EL)), 2))) | g_92.f0) == (*g_281)), (*p_64))) ^ 0x05L) & 3L) | l_299[3]);
                        l_140[2][0] &= (safe_div_func_int64_t_s_s((safe_mod_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s(g_286, 5)) <= (safe_div_func_uint8_t_u_u(((!(safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((*l_163) = ((~((-10L) && 65527UL)) > ((*l_329) | (safe_rshift_func_uint8_t_u_u(l_376, ((&l_240 == (((safe_mod_func_uint8_t_u_u(l_379, ((*p_68) | (safe_add_func_uint8_t_u_u(((*l_382) = (18446744073709551614UL <= g_260)), 1L))))) && (*l_195)) , l_196)) == g_260)))))), 1)), p_67)), 3L))) || l_383), (-1L)))), 0x48FBCABF82D76ADCLL)), g_7));
                    }
                    else
                    {
                        uint32_t ***l_385[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_385[i] = &l_384;
                        l_386 = l_384;
                        l_387 = &l_313[2][0][3];
                    }
                }
                if ((safe_sub_func_int32_t_s_s(((g_319 <= (((safe_add_func_int8_t_s_s((*p_68), ((safe_rshift_func_int16_t_s_u((((*l_401) = (((((p_67 , l_394) != ((safe_mul_func_int16_t_s_s(g_286, (l_397 != ((*l_398) = (*l_195))))) , ((2L < (safe_mul_func_uint8_t_u_u(g_162[0][3][2], g_315[4]))) , &g_230))) | g_2) || 1UL) == l_252)) || (**l_328)), 3)) , g_162[4][3][1]))) > g_335) & g_8)) , l_340), 3L)))
                {
                    int16_t **l_402 = (void*)0;
                    int16_t *l_416 = (void*)0;
                    (*l_165) = &g_8;
                    for (g_319 = 7; (g_319 >= 0); g_319 -= 1)
                    {
                        l_403 = l_402;
                    }
                    (*l_195) = (safe_add_func_uint8_t_u_u(((*l_401) = ((p_67 , (safe_rshift_func_uint8_t_u_u((((((*p_68) < (safe_mul_func_int8_t_s_s(((0x4E60L < 0xC155L) >= (**g_297)), (g_334 > p_66)))) < ((*l_166) = (+(safe_lshift_func_uint16_t_u_s((***g_296), 6))))) , (g_172 &= (((safe_mod_func_int16_t_s_s((g_415[0][1][4] , g_2), 65529UL)) != p_67) != 0x7DL))) ^ p_67), 1))) || (**l_165))), g_123));
                    (*l_195) = (((g_356 |= ((**l_165) = g_315[0])) == (g_101[0] ^ (g_417[5] == &l_416))) >= (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_s(((((0x1C8AL >= 0xA7DBL) && 1L) , &l_285) != &l_285), 5)))), 3)));
                }
                else
                {
                    union U2 * const l_424 = &g_415[0][1][4];
                    union U2 **l_426 = (void*)0;
                    int32_t l_446 = 0L;
                    for (l_379 = 0; (l_379 <= 7); l_379 += 1)
                    {
                        p_64 = p_64;
                        if ((*p_64))
                            continue;
                    }
                    for (l_285 = 0; (l_285 <= 7); l_285 += 1)
                    {
                        l_425 = l_424;
                    }
                    g_427 = &g_415[1][4][1];
                    if ((*l_329))
                    {
                        uint32_t l_438 = 4294967295UL;
                        uint64_t *l_439 = &l_397;
                        int32_t l_447 = (-1L);
                        if (p_67)
                            goto lbl_428;
                        l_448 &= (((((~((*l_439) |= (4294967295UL ^ (((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((l_438 ^= ((**l_165) | (safe_lshift_func_int16_t_s_s(p_66, 8)))), ((*l_398) = 1UL))), 2)) && (-1L)) | p_67)))) | (safe_lshift_func_uint16_t_u_s(0UL, 7))) , (safe_lshift_func_int8_t_s_u((safe_div_func_int64_t_s_s((l_438 <= ((*l_195) < 0x167005C36656CE50LL)), g_286)), l_438))) < l_446) | l_447);
                    }
                    else
                    {
                        int32_t *l_463[4][7] = {{&l_252,&l_446,&l_446,&l_252,&l_253,&l_252,&l_446},{&l_259[1],&l_259[1],&l_446,&l_258[1][1],&l_446,&l_259[1],&l_259[1]},{&l_259[1],&l_446,&l_258[1][1],&l_446,&l_259[1],&l_259[1],&l_446},{&l_252,&l_253,&l_252,&l_446,&l_446,&l_252,&l_253}};
                        int i, j;
                        l_252 &= ((safe_mul_func_uint8_t_u_u(((*g_281) == (safe_sub_func_int8_t_s_s((*l_195), (-9L)))), (safe_lshift_func_int16_t_s_s(((((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(1L, ((safe_add_func_int8_t_s_s(((l_313[2][0][3] >= (l_462 == (void*)0)) , ((-1L) & p_66)), 0UL)) , (***g_296)))), 12)))) || p_66) && g_2) == 0x36L), (*l_195))))) || 0x6EA1B7AEL);
                        return (*l_195);
                    }
                }
                return (**l_328);
            }
        }
    }
    return (**l_328);
}







static int32_t * func_69(int8_t * p_70, union U0 p_71, const union U2 p_72, int8_t * p_73, const union U1 p_74)
{
    uint32_t l_97 = 4294967289UL;
    uint8_t *l_117 = &g_84;
    int32_t l_125 = 0xEE06F66BL;
    int32_t l_126[6][2][7] = {{{0x74DCC0C0L,(-8L),(-4L),0x2F72762BL,0x74DCC0C0L,0x2F72762BL,(-4L)},{3L,1L,0x50DA4A23L,0x44EC192DL,0xD2E07F6AL,0xD2E07F6AL,0x44EC192DL}},{{0x05658C46L,0xA3FFCED7L,0x05658C46L,0x2F72762BL,0xFF0E9B23L,0xA3FFCED7L,0xFF0E9B23L},{1L,0x44EC192DL,(-1L),3L,0xD2E07F6AL,(-10L),(-10L)}},{{0x74DCC0C0L,0x0F0EF91DL,0x5C1F9A20L,0x0F0EF91DL,0x74DCC0C0L,0xA3FFCED7L,0x5C1F9A20L},{(-1L),1L,0x44EC192DL,(-1L),3L,0xD2E07F6AL,(-10L)}},{{0xFF0E9B23L,0x2F72762BL,0x05658C46L,0xA3FFCED7L,0x05658C46L,0x2F72762BL,0xFF0E9B23L},{(-1L),(-1L),(-10L),3L,1L,0x50DA4A23L,0x44EC192DL}},{{0x74DCC0C0L,0x2F72762BL,(-4L),(-8L),0x74DCC0C0L,(-8L),(-4L)},{1L,1L,(-10L),0x44EC192DL,(-1L),0xD2E07F6AL,(-1L)}},{{0x05658C46L,0x0F0EF91DL,0x05658C46L,(-8L),0xFF0E9B23L,0x0F0EF91DL,0xFF0E9B23L},{3L,0x44EC192DL,0x44EC192DL,3L,(-1L),(-10L),0x50DA4A23L}}};
    int32_t *l_130 = &l_125;
    int32_t *l_131[3];
    int8_t l_132 = 7L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_131[i] = &l_126[4][1][6];
    if ((safe_sub_func_int8_t_s_s((g_8 , l_97), g_15)))
    {
        const union U2 l_98 = {65528UL};
        int32_t *l_99 = &g_7;
        int32_t **l_100 = &l_99;
        (*l_100) = (l_98 , l_99);
        for (g_33 = 1; (g_33 <= 6); g_33 += 1)
        {
            uint16_t *l_105 = (void*)0;
            uint16_t **l_104 = &l_105;
            int16_t *l_118 = &g_119;
            int32_t *l_120 = &g_8;
            int32_t *l_121 = (void*)0;
            int32_t *l_122 = &g_123;
            int i;
            (*l_122) ^= ((*l_120) = ((g_101[g_33] || 0x032CD4B48EDA2973LL) == (0xE3L > (safe_mul_func_uint8_t_u_u((p_71.f1 & (((*l_104) = &g_37) != (void*)0)), (((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(((((*l_118) = ((*l_99) >= (!(safe_mod_func_int32_t_s_s((l_117 == &g_84), p_71.f0))))) & g_8) ^ 0xA6BAL), 18446744073709551613UL)) | 1UL), (*p_70))), p_72.f0)) , g_7) | g_37))))));
        }
    }
    else
    {
        int32_t *l_124[5] = {&g_123,&g_123,&g_123,&g_123,&g_123};
        int i;
        --g_127[0][2][0];
    }
    --g_133;
    return &g_6;
}







static int8_t * func_75(int16_t p_76, uint16_t p_77, uint16_t * p_78, int32_t p_79)
{
    int8_t *l_89[2];
    int i;
    for (i = 0; i < 2; i++)
        l_89[i] = &g_15;
    return l_89[0];
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
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    transparent_crc(g_92.f1, "g_92.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_101[i], "g_101[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_127[i][j][k], "g_127[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_138[i].f0, "g_138[i].f0", print_hash_value);
        transparent_crc(g_138[i].f1, "g_138[i].f1", print_hash_value);
        transparent_crc(g_138[i].f2, "g_138[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_147, "g_147", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_162[i][j][k], "g_162[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_315[i], "g_315[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_415[i][j][k].f0, "g_415[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_474[i], "g_474[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_481[i], "g_481[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    transparent_crc(g_807, "g_807", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_827[i][j], "g_827[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_839, "g_839", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_916[i], "g_916[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_983, "g_983", print_hash_value);
    transparent_crc(g_1031, "g_1031", print_hash_value);
    transparent_crc(g_1091, "g_1091", print_hash_value);
    transparent_crc(g_1124, "g_1124", print_hash_value);
    transparent_crc(g_1125, "g_1125", print_hash_value);
    transparent_crc(g_1126, "g_1126", print_hash_value);
    transparent_crc(g_1132, "g_1132", print_hash_value);
    transparent_crc(g_1133, "g_1133", print_hash_value);
    transparent_crc(g_1134, "g_1134", print_hash_value);
    transparent_crc(g_1177.f0, "g_1177.f0", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    transparent_crc(g_1217, "g_1217", print_hash_value);
    transparent_crc(g_1281, "g_1281", print_hash_value);
    transparent_crc(g_1307, "g_1307", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1308[i][j], "g_1308[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1316, "g_1316", print_hash_value);
    transparent_crc(g_1387, "g_1387", print_hash_value);
    transparent_crc(g_1468, "g_1468", print_hash_value);
    transparent_crc(g_1857, "g_1857", print_hash_value);
    transparent_crc(g_1920, "g_1920", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
