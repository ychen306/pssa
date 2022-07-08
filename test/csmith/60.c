// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = CEFF6241
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
   uint16_t f0;
   int16_t f1;
   uint64_t f2;
   uint64_t f3;
   uint16_t f4;
   int32_t f5;
   signed f6 : 28;
};
#pragma pack(pop)


static int64_t g_6 = 1L;
static struct S0 g_13 = {0UL,-1L,0UL,1UL,0xEDF6L,0L,-6679};
static uint8_t g_15 = 0x7DL;
static uint8_t g_57 = 0xAEL;
static int32_t *g_59[1][2][5] = {{{(void*)0,&g_13.f5,(void*)0,(void*)0,&g_13.f5},{&g_13.f5,(void*)0,(void*)0,&g_13.f5,(void*)0}}};
static int32_t **g_58 = &g_59[0][1][1];
static int32_t g_74 = (-3L);
static uint16_t g_75 = 65535UL;
static int16_t g_78 = (-1L);
static int32_t g_123 = 1L;
static uint64_t g_146 = 18446744073709551615UL;
static int16_t g_154[2] = {0x045DL,0x045DL};
static uint32_t g_181 = 0xC71B25C6L;
static uint32_t g_184 = 0x8B1C4E8FL;
static uint16_t g_187 = 0xEA1BL;
static int32_t g_188[3] = {0L,0L,0L};
static int32_t ***g_193 = &g_58;
static uint64_t g_220 = 0xEC0524341503C553LL;
static int16_t *g_245 = &g_13.f1;
static int16_t **g_244 = &g_245;
static uint32_t *g_286 = &g_181;
static uint32_t **g_285 = &g_286;
static struct S0 g_291[1][6][5] = {{{{65529UL,6L,0UL,0UL,0x7896L,3L,-16297},{65535UL,-9L,0x227AC345CE31C421LL,0xA9FA5B34151BE30DLL,65529UL,-6L,-4357},{65529UL,6L,0UL,0UL,0x7896L,3L,-16297},{0x0B1FL,0xB624L,0x792C0A512BFDCEE5LL,9UL,1UL,0x3299ABA9L,5937},{0x32E4L,-1L,0xC1A9024ED4AC31B2LL,0x7EB9098913C8C231LL,1UL,-1L,14128}},{{0xA713L,0x93D5L,0xF8A9D95EADCB5EDFLL,0xF51F5FFA1521E2DDLL,0x8366L,0x3AEF1938L,7778},{0x086DL,0L,1UL,18446744073709551615UL,65535UL,0L,10584},{65532UL,0x75B2L,18446744073709551614UL,0xBAB79FDA063CE230LL,0x5E8CL,6L,-1566},{0UL,9L,0xA1CC2CD02EC44FEFLL,0UL,65532UL,-5L,-7541},{0x32E4L,-1L,0xC1A9024ED4AC31B2LL,0x7EB9098913C8C231LL,1UL,-1L,14128}},{{0UL,-9L,0x17E8EA873BF14791LL,0x79139829F15E4691LL,0x1175L,-1L,-12198},{65529UL,0x4D8CL,0UL,0xACD87D66DD98F74BLL,0xB456L,-1L,7000},{65529UL,0x4D8CL,0UL,0xACD87D66DD98F74BLL,0xB456L,-1L,7000},{0UL,-9L,0x17E8EA873BF14791LL,0x79139829F15E4691LL,0x1175L,-1L,-12198},{65529UL,6L,0UL,0UL,0x7896L,3L,-16297}},{{0xD7A9L,0L,0x60E3B9EFC18ECF1CLL,0xC5D99A76D2E7ABA4LL,0x16BCL,0x71627F55L,13069},{0UL,-9L,0x17E8EA873BF14791LL,0x79139829F15E4691LL,0x1175L,-1L,-12198},{65532UL,0x75B2L,18446744073709551614UL,0xBAB79FDA063CE230LL,0x5E8CL,6L,-1566},{0x32E4L,-1L,0xC1A9024ED4AC31B2LL,0x7EB9098913C8C231LL,1UL,-1L,14128},{0x086DL,0L,1UL,18446744073709551615UL,65535UL,0L,10584}},{{0xD7A9L,0L,0x60E3B9EFC18ECF1CLL,0xC5D99A76D2E7ABA4LL,0x16BCL,0x71627F55L,13069},{65532UL,0x75B2L,18446744073709551614UL,0xBAB79FDA063CE230LL,0x5E8CL,6L,-1566},{65529UL,6L,0UL,0UL,0x7896L,3L,-16297},{65532UL,0x75B2L,18446744073709551614UL,0xBAB79FDA063CE230LL,0x5E8CL,6L,-1566},{0xD7A9L,0L,0x60E3B9EFC18ECF1CLL,0xC5D99A76D2E7ABA4LL,0x16BCL,0x71627F55L,13069}},{{0UL,-9L,0x17E8EA873BF14791LL,0x79139829F15E4691LL,0x1175L,-1L,-12198},{0UL,9L,0xA1CC2CD02EC44FEFLL,0UL,65532UL,-5L,-7541},{0xA713L,0x93D5L,0xF8A9D95EADCB5EDFLL,0xF51F5FFA1521E2DDLL,0x8366L,0x3AEF1938L,7778},{0x32E4L,-1L,0xC1A9024ED4AC31B2LL,0x7EB9098913C8C231LL,1UL,-1L,14128},{65529UL,0x4D8CL,0UL,0xACD87D66DD98F74BLL,0xB456L,-1L,7000}}}};
static uint32_t *g_388 = &g_184;
static uint32_t **g_387 = &g_388;
static int32_t g_428[7] = {7L,7L,7L,7L,7L,7L,7L};
static uint32_t * const ***g_521 = (void*)0;
static uint8_t g_540 = 0x28L;
static int64_t *g_641 = &g_6;
static int32_t *g_650 = &g_291[0][3][3].f5;
static int8_t g_668 = 0L;
static uint64_t *g_669 = &g_291[0][3][3].f3;
static int32_t g_684 = 0x3E22874AL;
static int32_t * const g_683 = &g_684;
static int32_t * const *g_682 = &g_683;
static uint32_t ***g_739 = &g_387;
static uint32_t **** const g_738[5][3] = {{&g_739,&g_739,&g_739},{&g_739,&g_739,&g_739},{&g_739,&g_739,&g_739},{&g_739,&g_739,&g_739},{&g_739,&g_739,&g_739}};
static int16_t g_741[1] = {1L};
static struct S0 *g_750 = &g_291[0][3][3];
static const uint16_t *g_806 = &g_13.f4;
static const uint16_t **g_805[8] = {&g_806,(void*)0,(void*)0,&g_806,(void*)0,(void*)0,&g_806,(void*)0};
static const uint16_t ***g_804 = &g_805[4];
static uint8_t g_841 = 0UL;
static uint8_t g_842 = 0x08L;
static uint16_t **g_989 = (void*)0;
static int32_t g_991 = 0xA131BD47L;
static uint8_t g_992 = 253UL;
static struct S0 **g_1092 = (void*)0;
static struct S0 ***g_1091[9][4] = {{&g_1092,&g_1092,&g_1092,&g_1092},{&g_1092,&g_1092,&g_1092,&g_1092},{&g_1092,&g_1092,&g_1092,&g_1092},{&g_1092,&g_1092,&g_1092,&g_1092},{&g_1092,&g_1092,&g_1092,&g_1092},{&g_1092,&g_1092,&g_1092,&g_1092},{&g_1092,&g_1092,&g_1092,&g_1092},{&g_1092,&g_1092,&g_1092,&g_1092},{&g_1092,&g_1092,&g_1092,&g_1092}};
static int16_t g_1131[3] = {0xC23EL,0xC23EL,0xC23EL};
static int16_t g_1155 = 0x0E18L;
static uint32_t g_1159 = 0xDD996B08L;
static int8_t g_1203 = 0x7AL;
static uint64_t ** const *g_1232[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint64_t ** const **g_1231 = &g_1232[0];
static uint8_t *g_1298 = &g_842;
static struct S0 g_1323 = {0UL,0x49C3L,0xD183673840E565F5LL,0x2749A7BA8B624A4FLL,4UL,-1L,-16325};
static uint8_t * const * const g_1345 = &g_1298;
static uint64_t g_1349 = 18446744073709551615UL;
static const int32_t g_1372 = (-4L);
static uint8_t g_1417 = 0x9AL;
static int8_t *g_1424[8] = {&g_668,&g_668,&g_668,&g_668,&g_668,&g_668,&g_668,&g_668};
static int8_t **g_1423[9] = {&g_1424[7],&g_1424[7],&g_1424[7],&g_1424[7],&g_1424[7],&g_1424[7],&g_1424[7],&g_1424[7],&g_1424[7]};
static struct S0 g_1522 = {0xC669L,0L,0xC9997416CBDA82EDLL,18446744073709551615UL,0x7CE0L,0xEB2A30A3L,8754};
static int32_t g_1539[7] = {0xF7555691L,2L,2L,0xF7555691L,2L,2L,0xF7555691L};
static uint32_t ***g_1566 = &g_285;
static uint32_t ****g_1565[4][8][6] = {{{(void*)0,(void*)0,&g_1566,&g_1566,&g_1566,&g_1566},{&g_1566,(void*)0,(void*)0,(void*)0,&g_1566,&g_1566},{&g_1566,(void*)0,(void*)0,&g_1566,&g_1566,(void*)0},{&g_1566,(void*)0,&g_1566,&g_1566,&g_1566,&g_1566},{&g_1566,&g_1566,&g_1566,&g_1566,&g_1566,&g_1566},{&g_1566,&g_1566,&g_1566,&g_1566,&g_1566,(void*)0},{&g_1566,&g_1566,(void*)0,&g_1566,&g_1566,&g_1566},{(void*)0,&g_1566,(void*)0,&g_1566,&g_1566,(void*)0}},{{&g_1566,&g_1566,&g_1566,(void*)0,(void*)0,&g_1566},{(void*)0,(void*)0,&g_1566,&g_1566,(void*)0,&g_1566},{(void*)0,&g_1566,&g_1566,(void*)0,&g_1566,(void*)0},{&g_1566,&g_1566,(void*)0,&g_1566,(void*)0,&g_1566},{(void*)0,&g_1566,(void*)0,&g_1566,&g_1566,&g_1566},{&g_1566,&g_1566,&g_1566,&g_1566,(void*)0,&g_1566},{&g_1566,&g_1566,&g_1566,&g_1566,&g_1566,&g_1566},{&g_1566,&g_1566,&g_1566,&g_1566,&g_1566,(void*)0}},{{&g_1566,&g_1566,&g_1566,(void*)0,&g_1566,&g_1566},{(void*)0,(void*)0,(void*)0,&g_1566,&g_1566,&g_1566},{&g_1566,&g_1566,(void*)0,(void*)0,&g_1566,&g_1566},{&g_1566,&g_1566,&g_1566,&g_1566,&g_1566,&g_1566},{&g_1566,&g_1566,&g_1566,(void*)0,&g_1566,&g_1566},{&g_1566,&g_1566,&g_1566,&g_1566,&g_1566,&g_1566},{&g_1566,(void*)0,(void*)0,&g_1566,&g_1566,(void*)0},{&g_1566,&g_1566,(void*)0,&g_1566,&g_1566,(void*)0}},{{&g_1566,(void*)0,(void*)0,&g_1566,&g_1566,&g_1566},{&g_1566,&g_1566,&g_1566,(void*)0,&g_1566,&g_1566},{(void*)0,&g_1566,&g_1566,(void*)0,&g_1566,&g_1566},{&g_1566,&g_1566,(void*)0,&g_1566,&g_1566,&g_1566},{(void*)0,&g_1566,&g_1566,&g_1566,&g_1566,&g_1566},{&g_1566,(void*)0,&g_1566,(void*)0,&g_1566,&g_1566},{&g_1566,&g_1566,(void*)0,(void*)0,&g_1566,&g_1566},{(void*)0,&g_1566,(void*)0,&g_1566,&g_1566,&g_1566}}};
static uint32_t **** const *g_1564 = &g_1565[2][7][1];
static int64_t **g_1585 = &g_641;
static int64_t ** const * const g_1584 = &g_1585;
static struct S0 **g_1602 = &g_750;
static struct S0 *** const g_1601 = &g_1602;
static struct S0 *** const *g_1600 = &g_1601;
static uint16_t ***g_1616 = &g_989;
static int8_t g_1663 = 1L;
static const uint32_t ***g_1688 = (void*)0;
static struct S0 *** const **g_1704 = &g_1600;
static uint64_t * const ****g_1800 = (void*)0;
static struct S0 ****g_1862 = &g_1091[7][1];
static struct S0 *****g_1861 = &g_1862;
static int64_t g_1885 = 0x8FCA1720A202EA5BLL;
static const int32_t g_1905 = 0xACC3EBCCL;
static const int32_t *g_1904 = &g_1905;
static uint32_t g_1923[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static int16_t g_1980[10][3][8] = {{{8L,(-7L),0xF3BCL,0x37B3L,0x5280L,(-1L),(-3L),(-10L)},{0xB589L,0xA328L,1L,(-1L),(-7L),0xA150L,0x5861L,(-1L)},{0x4D4DL,0x754AL,(-4L),0x3CB3L,0xFF40L,0xAEEFL,0x4F88L,0xD5ADL}},{{0x0BE6L,0xBF61L,5L,0x1886L,0xF4F5L,0x5E41L,(-10L),0xEC5BL},{0x1A72L,(-1L),(-1L),0L,0x4D4DL,0x4D4DL,0L,(-1L)},{0xAEEFL,0xAEEFL,(-1L),0x2752L,(-10L),0x201CL,0L,0xA851L}},{{1L,0xD0A0L,0x5280L,0xD5ADL,2L,(-1L),0x8200L,0xA851L},{0xD0A0L,(-8L),0x4F88L,0x2752L,0x0836L,0x19ADL,0x0BE6L,(-1L)},{0x5861L,5L,0x6C9EL,0L,0L,(-5L),0x0C2AL,0xEC5BL}},{{0xABE0L,(-1L),0xAEEFL,0x1886L,0x6C9EL,0x227BL,(-1L),0xD5ADL},{(-1L),6L,0x5FA3L,0xF4F5L,0xD4ABL,0x1A72L,1L,0x37B3L},{(-5L),0x4F88L,0x1886L,0x7213L,1L,0x0C2AL,0L,1L}},{{2L,(-1L),0xA328L,2L,0x55F0L,0x227BL,0x758BL,0x8200L},{0x41BCL,0L,8L,0xD0A0L,0x8200L,0x3FDEL,0x6021L,0x5E41L},{0x436FL,0x7981L,0xE4E6L,0x41BCL,1L,0x35C6L,9L,0x0BE6L}},{{0x19ADL,0L,2L,0xD4ABL,0xA5EDL,0x201CL,8L,7L},{(-2L),0xA150L,0x84BAL,(-1L),(-1L),(-1L),0x2EADL,(-5L)},{0xA328L,0x5861L,0x6322L,0x37B3L,(-10L),7L,0xA5FAL,(-1L)}},{{0x5280L,0xB923L,0xFB4DL,(-4L),(-5L),0x55F0L,(-5L),(-4L)},{0L,0xFB4DL,0L,0x744DL,0x7358L,0x5280L,7L,0x5FA3L},{0x37B3L,(-1L),(-10L),0x84BAL,0x1886L,(-5L),0x7358L,0xD5ADL}},{{0x37B3L,1L,0x0836L,0xABE0L,0x7358L,0xD606L,(-1L),0L},{0L,0xFC0DL,0x7E8AL,0x8200L,(-5L),0xA5FAL,(-1L),0L},{0x5280L,(-1L),0xF4F5L,1L,(-10L),0x5861L,0xD0A0L,0x7E8AL}},{{0xA328L,0x8359L,0xEC5BL,(-5L),(-1L),0L,(-1L),0xE4E6L},{(-2L),(-9L),(-4L),(-8L),0xA5EDL,0x4D4DL,0L,0x7D81L},{0x19ADL,9L,(-5L),8L,1L,0xEC5BL,0xB589L,0x7142L}},{{0x436FL,0xABE0L,(-1L),0xB923L,0x8200L,0x41BCL,6L,0xF394L},{0x41BCL,(-5L),1L,4L,0x55F0L,0xFF40L,0x436FL,0x758BL},{2L,0x2752L,0xD5ADL,1L,1L,(-1L),0xAC02L,(-7L)}}};
static const uint64_t g_2082 = 9UL;
static int32_t **g_2120 = &g_59[0][1][1];
static int32_t **g_2123 = &g_59[0][0][1];
static int32_t **g_2129 = &g_59[0][1][1];
static struct S0 * const * const *g_2217 = (void*)0;
static int16_t g_2265 = 0x1E93L;
static int32_t *g_2303 = &g_188[1];
static int64_t g_2313 = 0xBC98EC5190CC3448LL;
static int32_t *g_2318 = &g_291[0][3][3].f5;



static const int16_t func_1(void);
static int32_t * func_2(int8_t p_3, uint32_t p_4);
static int32_t ** func_7(uint64_t p_8, struct S0 p_9, const uint8_t p_10, struct S0 p_11);
static struct S0 func_16(uint16_t p_17, uint16_t p_18);
static int16_t func_21(int32_t * const p_22, int32_t * p_23, int16_t p_24, uint8_t * p_25);
static int32_t * func_26(uint8_t * const p_27, int32_t p_28, int32_t * const * p_29, uint8_t * p_30);
static int32_t * const * func_31(int32_t ** p_32, uint8_t * p_33, uint16_t p_34, const int16_t p_35, int8_t p_36);
static uint8_t * func_39(struct S0 p_40, const int32_t p_41, uint8_t p_42, int32_t ** p_43);
static struct S0 func_44(const uint8_t * p_45, uint32_t p_46, uint32_t p_47, const int32_t * p_48, int32_t * p_49);
static uint8_t * func_50(int32_t ** p_51, uint8_t * p_52, int32_t ** p_53, int64_t p_54, const uint32_t p_55);
# 145 "<stdin>"
static const int16_t func_1(void)
{
    int32_t l_5 = 1L;
    int32_t * const *l_2367 = &g_59[0][0][0];
    uint8_t *l_2368 = &g_841;
    int16_t *l_2388 = &g_13.f1;
    uint16_t ****l_2396[8][10] = {{&g_1616,&g_1616,(void*)0,&g_1616,&g_1616,(void*)0,&g_1616,&g_1616,(void*)0,&g_1616},{&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616},{&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616},{&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616},{&g_1616,(void*)0,&g_1616,&g_1616,&g_1616,(void*)0,&g_1616,&g_1616,&g_1616,&g_1616},{&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,(void*)0,&g_1616,(void*)0,&g_1616},{&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616},{&g_1616,(void*)0,(void*)0,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616,&g_1616}};
    int i, j;
    (*g_2120) = func_2(l_5, g_6);
    for (g_13.f5 = 0; (g_13.f5 != 12); ++g_13.f5)
    {
        uint8_t * const l_2358[1][8] = {{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57}};
        int32_t l_2361 = 0xC1493CA2L;
        uint64_t ** const **l_2371[7][9] = {{&g_1232[7],&g_1232[0],&g_1232[6],&g_1232[7],(void*)0,&g_1232[0],&g_1232[0],&g_1232[0],(void*)0},{&g_1232[0],&g_1232[0],&g_1232[0],&g_1232[0],(void*)0,&g_1232[0],&g_1232[1],&g_1232[0],(void*)0},{&g_1232[1],&g_1232[0],&g_1232[0],&g_1232[1],(void*)0,&g_1232[1],&g_1232[7],&g_1232[0],&g_1232[5]},{&g_1232[7],&g_1232[0],&g_1232[6],&g_1232[7],(void*)0,&g_1232[0],&g_1232[0],&g_1232[0],(void*)0},{&g_1232[0],&g_1232[0],&g_1232[0],&g_1232[0],(void*)0,&g_1232[0],&g_1232[1],&g_1232[0],(void*)0},{&g_1232[1],&g_1232[0],&g_1232[0],&g_1232[1],(void*)0,&g_1232[1],&g_1232[7],&g_1232[0],&g_1232[5]},{&g_1232[7],&g_1232[0],&g_1232[6],&g_1232[7],(void*)0,&g_1232[0],&g_1232[0],&g_1232[0],(void*)0}};
        int16_t *l_2387[6][3][1] = {{{&g_1155},{&g_154[1]},{&g_741[0]}},{{&g_291[0][3][3].f1},{&g_154[1]},{&g_291[0][3][3].f1}},{{&g_741[0]},{&g_154[1]},{&g_1155}},{{&g_1155},{&g_154[1]},{&g_741[0]}},{{&g_291[0][3][3].f1},{&g_154[1]},{&g_291[0][3][3].f1}},{{&g_741[0]},{&g_154[1]},{&g_1155}}};
        int16_t *l_2389 = (void*)0;
        int8_t *l_2397[7][6] = {{&g_668,(void*)0,&g_1203,&g_1663,(void*)0,&g_1663},{&g_1663,(void*)0,&g_1663,&g_1663,(void*)0,(void*)0},{&g_1663,(void*)0,&g_1663,&g_668,&g_1663,(void*)0},{&g_1203,(void*)0,&g_1663,&g_668,&g_1203,&g_1663},{&g_1203,&g_1663,&g_1203,&g_668,&g_1203,(void*)0},{&g_1663,&g_1663,(void*)0,&g_1663,&g_1203,&g_1203},{&g_1663,(void*)0,(void*)0,&g_1663,&g_1663,(void*)0}};
        int i, j, k;
        (**g_682) &= l_5;
        for (g_1522.f4 = 25; (g_1522.f4 > 9); g_1522.f4 = safe_sub_func_uint32_t_u_u(g_1522.f4, 9))
        {
            int8_t l_2362 = (-8L);
            uint16_t *l_2363[10] = {&g_1323.f0,&g_1323.f0,&g_1323.f0,&g_1323.f0,&g_1323.f0,&g_1323.f0,&g_1323.f0,&g_1323.f0,&g_1323.f0,&g_1323.f0};
            int32_t l_2364 = 0xCE609FFAL;
            int64_t ***l_2373[1];
            int64_t ****l_2372 = &l_2373[0];
            int32_t l_2380[1][8][3] = {{{0x226C8784L,0xF87221BEL,1L},{1L,0L,1L},{1L,0x226C8784L,1L},{1L,0L,1L},{1L,0x226C8784L,1L},{1L,0L,1L},{1L,0x226C8784L,1L},{1L,0L,1L}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2373[i] = (void*)0;
            (*g_1861) = (*g_1861);
            (*g_2123) = func_26(l_2358[0][0], (*g_683), (((safe_lshift_func_int8_t_s_s(l_2361, l_2362)) && (g_291[0][3][3].f0--)) , l_2367), l_2368);
            l_2380[0][0][1] |= (((255UL ^ ((safe_sub_func_int64_t_s_s((((void*)0 != l_2371[0][4]) <= ((((**g_285) = l_5) != (*g_650)) ^ (((*l_2372) = &g_1585) != &g_1585))), ((safe_lshift_func_int16_t_s_u(((((((((safe_mod_func_int32_t_s_s((((((safe_mod_func_uint64_t_u_u(((void*)0 == &g_1565[2][7][1]), (***g_1584))) || l_2361) | 2UL) , 7L) > (*g_669)), (*g_2318))) == l_2361) , &g_1584) != &g_1584) >= l_2361) >= l_2364) , 0x5B7D2326L) <= (**g_682)), 0)) , (***g_1584)))) == (**g_1345))) && l_2364) > l_2361);
        }
        (*g_683) = ((*g_1298) != (+(l_2361 = (0x58L == (+(safe_mod_func_uint16_t_u_u(((**g_244) > ((l_2361 == (safe_rshift_func_int8_t_s_s((l_2387[0][0][0] == (l_2389 = l_2388)), 5))) & (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_2361, 1)), ((l_2396[3][5] != &g_1616) != 0xA52EL))), l_2361)))), 65535UL)))))));
    }
    (***g_1601) = (**g_1602);
    return (**g_244);
}







static int32_t * func_2(int8_t p_3, uint32_t p_4)
{
    uint32_t l_12 = 0x69AC54C9L;
    uint8_t *l_14 = &g_15;
    int32_t *l_38 = &g_13.f5;
    int32_t **l_37 = &l_38;
    uint8_t *l_56[3][9] = {{(void*)0,&g_57,&g_57,&g_57,(void*)0,(void*)0,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{(void*)0,(void*)0,&g_57,&g_57,&g_57,(void*)0,(void*)0,&g_57,&g_57}};
    int32_t * const *l_686 = &g_683;
    int32_t * const **l_685 = &l_686;
    uint16_t *l_1922 = &g_291[0][3][3].f0;
    int32_t **l_2134[1];
    uint32_t ***l_2144 = &g_285;
    int32_t l_2152 = 5L;
    int32_t l_2263 = (-6L);
    uint16_t l_2286 = 0UL;
    int32_t *l_2316 = &l_2152;
    uint32_t l_2333 = 0x7AA9A029L;
    uint64_t **l_2352[9] = {&g_669,&g_669,&g_669,&g_669,&g_669,&g_669,&g_669,&g_669,&g_669};
    int i, j;
    for (i = 0; i < 1; i++)
        l_2134[i] = &l_38;
    return (*g_2129);
}







static int32_t ** func_7(uint64_t p_8, struct S0 p_9, const uint8_t p_10, struct S0 p_11)
{
    int16_t l_1928 = 0x6747L;
    int32_t l_1967 = (-8L);
    int32_t l_1969 = 2L;
    int32_t l_1971 = 0x2623427AL;
    int32_t l_1972[5];
    uint8_t l_1989 = 0UL;
    uint32_t ***l_2024 = &g_285;
    int8_t l_2027 = 0x4EL;
    uint16_t ***l_2028 = &g_989;
    int32_t l_2113 = 0xCFB6E6AAL;
    uint64_t l_2117 = 0xA2CB814C848226CALL;
    int32_t **l_2118 = &g_59[0][0][2];
    int32_t **l_2121 = &g_59[0][1][3];
    int32_t **l_2130 = &g_59[0][1][0];
    int i;
    for (i = 0; i < 5; i++)
        l_1972[i] = (-7L);
    for (g_74 = 5; (g_74 >= 0); g_74 -= 1)
    {
        uint16_t l_1932 = 0xCA6EL;
        int32_t l_1965 = (-8L);
        int32_t l_1968 = 0x88EEEED6L;
        int32_t l_1970 = 0xE0CD7406L;
        int32_t l_1973 = 0xCB908A94L;
        int32_t l_1975 = (-5L);
        int32_t l_1976 = 1L;
        int32_t l_1977 = 0x2F17507CL;
        int32_t l_1978 = 5L;
        int32_t l_1979[8][7] = {{3L,0x589323C1L,1L,1L,(-1L),1L,1L},{0x9C6C0631L,0x9C6C0631L,(-10L),0xB0C55621L,(-10L),0x9C6C0631L,0x9C6C0631L},{0xF250C753L,0x589323C1L,0x5699AFC5L,0x589323C1L,0xF250C753L,0x0CF7F5D2L,1L},{(-1L),0L,(-1L),(-10L),(-10L),(-1L),0L},{1L,1L,0x5699AFC5L,(-5L),(-1L),0x589323C1L,(-1L)},{(-1L),(-10L),(-10L),(-1L),0L,(-1L),(-10L)},{0xF250C753L,0x0CF7F5D2L,1L,(-5L),1L,0x0CF7F5D2L,0xF250C753L},{0x9C6C0631L,(-10L),0xB0C55621L,(-10L),0x9C6C0631L,0x9C6C0631L,(-10L)}};
        int32_t **l_1992[10] = {(void*)0,&g_59[0][1][1],(void*)0,&g_650,&g_650,(void*)0,&g_59[0][1][1],(void*)0,&g_650,&g_650};
        uint64_t l_1993 = 0UL;
        uint8_t *l_2002 = (void*)0;
        uint8_t *l_2003 = &g_841;
        int16_t *l_2008 = &g_1131[1];
        uint16_t *l_2015[2][10][6] = {{{&g_1323.f4,(void*)0,&g_1522.f4,&g_291[0][3][3].f4,&g_1522.f4,&g_291[0][3][3].f4},{&g_291[0][3][3].f0,&l_1932,&g_291[0][3][3].f0,&g_13.f4,&g_1522.f4,&l_1932},{&g_1522.f4,(void*)0,&g_1323.f4,&g_291[0][3][3].f0,&g_291[0][3][3].f0,&g_1323.f4},{&g_75,&g_75,&l_1932,&g_291[0][3][3].f0,(void*)0,&g_13.f4},{&g_1522.f4,&l_1932,&l_1932,&g_13.f4,&l_1932,&l_1932},{&g_291[0][3][3].f0,&g_1522.f4,&l_1932,&g_291[0][3][3].f4,&g_75,&g_13.f4},{&g_1323.f4,&g_291[0][3][3].f4,&l_1932,&l_1932,&g_291[0][3][3].f4,&g_1323.f4},{&l_1932,&g_291[0][3][3].f4,&g_1323.f4,&g_1522.f4,&g_75,&l_1932},{&l_1932,&g_1522.f4,&g_291[0][3][3].f0,&g_1522.f4,&l_1932,&g_291[0][3][3].f4},{&l_1932,&l_1932,&g_1522.f4,&g_1522.f4,(void*)0,(void*)0}},{{&l_1932,&g_75,&g_75,&l_1932,&g_291[0][3][3].f0,(void*)0},{&g_1323.f4,&l_1932,&l_1932,&l_1932,(void*)0,&l_1932},{&g_291[0][3][3].f4,&g_1522.f4,&g_291[0][3][3].f4,&g_1522.f4,(void*)0,&g_1323.f4},{&l_1932,&l_1932,&g_291[0][3][3].f0,&g_291[0][3][3].f4,&g_291[0][3][3].f4,&g_291[0][3][3].f0},{&g_13.f4,&g_13.f4,&g_75,&g_291[0][3][3].f4,&l_1932,&g_1522.f4},{&l_1932,&g_75,&g_1323.f4,&g_1522.f4,&g_1323.f4,&g_75},{&g_291[0][3][3].f4,&l_1932,&g_1323.f4,&l_1932,&g_13.f4,&g_1522.f4},{&g_291[0][3][3].f0,&l_1932,&g_75,&g_75,&l_1932,&g_291[0][3][3].f0},{&g_75,&l_1932,&g_291[0][3][3].f0,(void*)0,&g_13.f4,&g_1323.f4},{&g_1323.f4,&l_1932,&g_291[0][3][3].f4,&l_1932,&g_1323.f4,&l_1932}}};
        uint16_t **** const l_2016 = &g_1616;
        uint32_t l_2078 = 0UL;
        uint8_t l_2105 = 1UL;
        uint64_t **l_2114[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t **l_2122 = &g_59[0][0][0];
        int32_t **l_2125 = &g_59[0][0][4];
        int32_t **l_2126 = &g_59[0][0][0];
        int32_t **l_2127 = &g_59[0][1][1];
        int32_t **l_2128 = &g_59[0][0][3];
        int i, j, k;
    }
    for (g_13.f2 = (-4); (g_13.f2 >= 51); g_13.f2 = safe_add_func_int16_t_s_s(g_13.f2, 5))
    {
        (*g_650) = ((*g_683) = 0xF68AE125L);
    }
    p_9.f6 = ((*g_641) && (p_11.f4 <= (***g_1584)));
    return (*g_193);
}







static struct S0 func_16(uint16_t p_17, uint16_t p_18)
{
    int16_t l_1924 = 0x6EBFL;
    struct S0 l_1925 = {1UL,8L,0x3DDA053BE9B0D2A3LL,0x6D37E2D5507FF8A5LL,0x39A7L,0x2F75FE1BL,13625};
    l_1924 = ((*g_650) = 9L);
    return l_1925;
}







static int16_t func_21(int32_t * const p_22, int32_t * p_23, int16_t p_24, uint8_t * p_25)
{
    int32_t *l_1122 = &g_684;
    int32_t *l_1123 = &g_684;
    int32_t *l_1124 = (void*)0;
    int32_t *l_1125 = (void*)0;
    int32_t *l_1126[10][3] = {{(void*)0,&g_291[0][3][3].f5,&g_291[0][3][3].f5},{&g_123,&g_74,&g_123},{(void*)0,(void*)0,&g_291[0][3][3].f5},{&g_13.f5,&g_74,&g_13.f5},{(void*)0,&g_291[0][3][3].f5,&g_291[0][3][3].f5},{&g_123,&g_74,&g_123},{(void*)0,(void*)0,&g_291[0][3][3].f5},{&g_13.f5,&g_74,&g_13.f5},{(void*)0,&g_291[0][3][3].f5,&g_291[0][3][3].f5},{&g_123,&g_74,&g_123}};
    uint8_t l_1127 = 0xD6L;
    uint32_t *l_1154 = (void*)0;
    uint32_t *l_1158 = &g_1159;
    int16_t l_1178 = (-7L);
    struct S0 l_1281 = {0x8963L,0x34AAL,0xD212BFB432394BFBLL,0UL,65526UL,0x20091F9EL,11317};
    struct S0 *l_1369[4][4][1] = {{{&g_1323},{&g_13},{(void*)0},{&g_13}},{{&g_1323},{&g_291[0][3][3]},{&g_1323},{&g_13}},{{(void*)0},{&g_13},{&g_1323},{&g_291[0][3][3]}},{{&g_1323},{&g_13},{(void*)0},{&g_13}}};
    uint64_t l_1489 = 0x00F0464B80DC3E13LL;
    uint64_t **l_1510 = &g_669;
    uint64_t ***l_1509 = &l_1510;
    uint64_t ****l_1508 = &l_1509;
    int32_t l_1541 = 0x4437E3AAL;
    int16_t ** const l_1542 = &g_245;
    int32_t ***l_1548 = &g_58;
    const uint32_t **l_1554 = (void*)0;
    const uint32_t ***l_1553[10][5] = {{&l_1554,&l_1554,&l_1554,&l_1554,&l_1554},{(void*)0,(void*)0,&l_1554,(void*)0,(void*)0},{&l_1554,&l_1554,&l_1554,&l_1554,&l_1554},{(void*)0,(void*)0,&l_1554,(void*)0,(void*)0},{&l_1554,&l_1554,&l_1554,&l_1554,&l_1554},{(void*)0,(void*)0,&l_1554,(void*)0,(void*)0},{&l_1554,&l_1554,&l_1554,&l_1554,&l_1554},{(void*)0,(void*)0,&l_1554,(void*)0,(void*)0},{&l_1554,&l_1554,&l_1554,&l_1554,&l_1554},{(void*)0,(void*)0,&l_1554,(void*)0,(void*)0}};
    const uint32_t ****l_1552 = &l_1553[6][4];
    const uint32_t *****l_1551[6];
    uint16_t l_1556 = 0x1F2EL;
    uint32_t ***l_1631 = &g_285;
    int8_t l_1661 = 0x77L;
    uint32_t **l_1791 = &g_388;
    uint64_t l_1827 = 1UL;
    int64_t l_1855 = 9L;
    const int64_t *l_1912 = &l_1855;
    const int64_t **l_1911[7] = {(void*)0,(void*)0,&l_1912,(void*)0,(void*)0,&l_1912,(void*)0};
    uint8_t l_1919 = 1UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1551[i] = &l_1552;
lbl_1418:
    --l_1127;
lbl_1243:
    (*g_650) &= (+((g_1131[1] && (safe_lshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(p_24, 5)), (safe_rshift_func_uint8_t_u_u((((*g_388) |= 0xD3E70EAAL) , ((safe_rshift_func_int16_t_s_u(((((safe_mod_func_int64_t_s_s((((safe_mod_func_uint32_t_u_u(((((*l_1158) ^= (((*p_23) <= (safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((-1L) != ((safe_mod_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(((**g_285) = (g_1155 |= (*g_286))), 0xFFEEEE29L)) , (safe_sub_func_uint8_t_u_u(253UL, 1L))) <= 0x01A6C348L), (*l_1122))) & p_24)), (*l_1123))), (*g_669)))) , p_24)) && p_24) , 4294967286UL), 0xCBA66324L)) & (-1L)) != g_992), p_24)) , 0x0FL) >= g_668) , (**g_244)), 6)) > 0xBBF7C97CDF34341FLL)), 5)))) & g_428[4]), g_123))) > 0x596AFCF1L));
lbl_1642:
    for (g_184 = 0; (g_184 <= 2); g_184 += 1)
    {
        int16_t l_1160 = 0L;
        int32_t l_1161 = 0x5186D83EL;
        int32_t l_1162 = 0L;
        int32_t l_1163 = 0xEFB9B430L;
        uint16_t l_1164 = 0x841EL;
        int64_t l_1184 = 6L;
        int32_t l_1192 = (-1L);
        int32_t l_1205 = 1L;
        int32_t l_1209 = 0x4375C4D9L;
        int32_t l_1215 = (-1L);
        struct S0 l_1236 = {0xEE6EL,0x5FAFL,18446744073709551615UL,0x12E436F2D61222FELL,0xB627L,0xFD719179L,-10307};
        const uint64_t l_1263 = 0x54A59055B59452A3LL;
        uint8_t l_1278 = 248UL;
        int8_t *l_1360 = &g_668;
        int8_t * const *l_1359 = &l_1360;
        int32_t *l_1370 = &g_291[0][3][3].f5;
        uint16_t l_1376 = 0xBCFDL;
        int8_t l_1385 = 0xECL;
        int8_t l_1386 = 0x0AL;
        int32_t l_1388 = 0x8B3CF49FL;
        uint32_t l_1450 = 4294967291UL;
        uint32_t **l_1473 = &l_1158;
        struct S0 * const **l_1482 = (void*)0;
        int64_t **l_1493 = &g_641;
        int64_t ***l_1492[5][7] = {{(void*)0,&l_1493,&l_1493,(void*)0,&l_1493,&l_1493,(void*)0},{&l_1493,&l_1493,&l_1493,&l_1493,&l_1493,&l_1493,&l_1493},{&l_1493,(void*)0,&l_1493,(void*)0,&l_1493,&l_1493,(void*)0},{(void*)0,&l_1493,&l_1493,(void*)0,&l_1493,&l_1493,&l_1493},{&l_1493,&l_1493,&l_1493,(void*)0,&l_1493,(void*)0,&l_1493}};
        uint64_t ****l_1507 = (void*)0;
        int i, j;
        --l_1164;
        if ((*p_22))
            break;
        for (l_1163 = 2; (l_1163 >= 0); l_1163 -= 1)
        {
            struct S0 l_1177 = {0xDE9DL,7L,18446744073709551607UL,1UL,65533UL,-1L,13531};
            uint16_t l_1179 = 0x4CE4L;
            int32_t l_1212 = 8L;
            int32_t l_1214[4][7][8] = {{{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)}},{{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)}},{{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)}},{{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)},{3L,3L,(-7L),(-1L),(-10L),(-10L),(-1L),(-7L)}}};
            int64_t *l_1261 = &g_6;
            uint64_t l_1268 = 0xB32CEF87A234362BLL;
            int64_t l_1271 = 0x5B8857832C4FFEF9LL;
            uint64_t *l_1387 = &l_1236.f3;
            uint16_t *l_1389 = &g_187;
            struct S0 * const *l_1449 = &g_750;
            int i, j, k;
            (*g_650) |= (l_1163 & (p_24 && ((p_24 <= (p_24 , (l_1179 = ((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(0UL, g_13.f6)), (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((l_1177 , (l_1177.f2 , 4294967288UL)), p_24)) == l_1160), 0x8109C7BFL)), (*l_1122))))) != l_1178)))) <= (*p_22))));
            for (g_841 = 24; (g_841 == 4); g_841 = safe_sub_func_uint16_t_u_u(g_841, 1))
            {
                uint16_t *l_1187 = &g_187;
                int32_t l_1190 = 0x5A79A37AL;
                int32_t l_1191 = 1L;
                int32_t l_1193[6] = {0L,0L,0L,0L,0L,0L};
                uint32_t l_1194 = 0xBEBBE788L;
                uint64_t *** const l_1234 = (void*)0;
                uint64_t *** const *l_1233[5][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_1239 = 4L;
                int64_t *l_1260 = &l_1184;
                int i, j;
                (*g_650) = (((*l_1122) = (*p_23)) , (0x81914D37A145A1A9LL & (safe_sub_func_uint16_t_u_u(l_1184, (!(p_24 , (safe_unary_minus_func_uint16_t_u((++(*l_1187))))))))));
                --l_1194;
                for (g_123 = 0; (g_123 <= (-24)); g_123--)
                {
                    int32_t l_1201 = 0L;
                    int32_t l_1207 = 0L;
                    int32_t l_1210 = 0x339DF20FL;
                    int32_t l_1211 = 0xF61118F3L;
                    int32_t l_1213[7][1] = {{1L},{0xAF5A56AFL},{1L},{0xAF5A56AFL},{1L},{0xAF5A56AFL},{1L}};
                    struct S0 l_1235[8] = {{0x69EAL,0L,0x1025B7265DD151C6LL,0x7DFBC5BEA493372BLL,65535UL,-1L,133},{0x13EAL,0x8AB3L,0x3DA0150F37ACDFA0LL,0x9F8C381FC5CD9EEBLL,1UL,0L,-7803},{0x69EAL,0L,0x1025B7265DD151C6LL,0x7DFBC5BEA493372BLL,65535UL,-1L,133},{0x13EAL,0x8AB3L,0x3DA0150F37ACDFA0LL,0x9F8C381FC5CD9EEBLL,1UL,0L,-7803},{0x69EAL,0L,0x1025B7265DD151C6LL,0x7DFBC5BEA493372BLL,65535UL,-1L,133},{0x13EAL,0x8AB3L,0x3DA0150F37ACDFA0LL,0x9F8C381FC5CD9EEBLL,1UL,0L,-7803},{0x69EAL,0L,0x1025B7265DD151C6LL,0x7DFBC5BEA493372BLL,65535UL,-1L,133},{0x13EAL,0x8AB3L,0x3DA0150F37ACDFA0LL,0x9F8C381FC5CD9EEBLL,1UL,0L,-7803}};
                    int16_t l_1265 = 0xC1E6L;
                    int16_t l_1276 = 0xB5B6L;
                    int16_t l_1277 = 1L;
                    int i, j;
                    for (g_6 = 11; (g_6 < (-15)); g_6 = safe_sub_func_uint32_t_u_u(g_6, 9))
                    {
                        int8_t l_1202 = 0xC2L;
                        int32_t l_1204[5][9] = {{0x5C9A8694L,(-1L),0xDC6FF360L,1L,0x51AAD5C3L,(-2L),0x51AAD5C3L,1L,0xDC6FF360L},{0xEEB3A04AL,0xEEB3A04AL,0xC17D4977L,1L,0x5C9A8694L,(-1L),0xDC6FF360L,1L,0x51AAD5C3L},{(-1L),0x8E993344L,(-2L),0xEEB3A04AL,0L,0L,0xEEB3A04AL,(-2L),0x8E993344L},{0L,0x2016E245L,0xC17D4977L,0x4D4319D7L,(-7L),1L,0xEEB3A04AL,0xDC6FF360L,0xBDEDFE9EL},{1L,(-1L),0xDC6FF360L,0x8E993344L,(-1L),0x8E993344L,0xDC6FF360L,(-1L),1L}};
                        int32_t l_1206 = 0xD40CAEE3L;
                        int32_t l_1208[5][4][1];
                        uint64_t l_1216 = 0xA17AE50B160AE602LL;
                        int8_t *l_1238[3];
                        int8_t **l_1237 = &l_1238[1];
                        const uint64_t l_1240 = 7UL;
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 4; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_1208[i][j][k] = 0L;
                            }
                        }
                        for (i = 0; i < 3; i++)
                            l_1238[i] = &g_1203;
                        l_1216--;
                        if ((*g_683))
                            break;
                        (*g_650) = (safe_div_func_uint8_t_u_u(((l_1205 ^ ((safe_sub_func_int64_t_s_s(((p_24 , (safe_mod_func_int32_t_s_s((((safe_add_func_int64_t_s_s(((((*l_1237) = func_39((g_841 , ((*g_750) = ((6L <= ((~(p_24 = (*g_245))) || ((+(*p_23)) && (*g_806)))) , (l_1236 = ((safe_div_func_int64_t_s_s((7L || (((g_1231 == l_1233[1][5]) < g_1203) < l_1208[4][3][0])), p_24)) , l_1235[4]))))), l_1204[4][0], l_1208[4][3][0], (*g_193))) == &g_1203) , (-2L)), l_1239)) < l_1177.f1) | (*g_641)), l_1193[4]))) == 1L), l_1240)) != l_1235[4].f5)) <= (*p_22)), (-8L)));
                    }
                    for (l_1184 = 0; (l_1184 > 22); l_1184 = safe_add_func_uint8_t_u_u(l_1184, 9))
                    {
                        int16_t *l_1258 = &g_78;
                        int32_t l_1262 = 0xF0AA4918L;
                        int16_t *l_1264 = &l_1235[4].f1;
                        if (g_1159)
                            goto lbl_1243;
                        (*p_22) &= ((*g_650) ^= ((*l_1122) = (safe_sub_func_int8_t_s_s(p_24, (safe_lshift_func_int16_t_s_u((18446744073709551615UL > (((*l_1264) = (safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_24, ((((*g_806) ^ ((((safe_lshift_func_int16_t_s_s(p_24, 13)) < l_1193[5]) && (g_540 &= (safe_lshift_func_int16_t_s_s((**g_244), 7)))) != ((((*l_1258) ^= (**g_244)) < ((+(l_1260 == l_1261)) , l_1262)) != (*g_641)))) , 0xB7F4BCB7L) & 0xD9D86BB1L))), l_1263))) < l_1263)), l_1160))))));
                        if ((*p_23))
                            continue;
                        (*g_650) = ((*p_22) = ((*l_1122) |= l_1236.f3));
                    }
                    for (l_1164 = 0; (l_1164 <= 1); l_1164 += 1)
                    {
                        int64_t l_1266 = 0L;
                        int32_t l_1267 = 0x2E197FFDL;
                        int32_t l_1272 = 0x0F77081BL;
                        uint64_t l_1273 = 0x5CFDE15A4598B739LL;
                        (*g_750) = l_1177;
                        --l_1268;
                        --l_1273;
                        l_1278--;
                    }
                    l_1236 = l_1281;
                }
                for (l_1236.f3 = 0; (l_1236.f3 <= 7); l_1236.f3 += 1)
                {
                    const int16_t **l_1282 = (void*)0;
                    const int16_t *l_1284 = (void*)0;
                    const int16_t **l_1283 = &l_1284;
                    int32_t **l_1291 = &l_1125;
                    uint8_t *l_1292[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    if ((((*l_1283) = &l_1160) != &l_1160))
                    {
                        int32_t l_1285[8][6] = {{0x0B3265D3L,0xF255D7D5L,0L,0xE190816DL,0xE190816DL,0L},{0x0B3265D3L,0x0B3265D3L,0xE190816DL,6L,1L,6L},{0xF255D7D5L,0x0B3265D3L,0xF255D7D5L,0L,0xE190816DL,0xE190816DL},{1L,0xF255D7D5L,0xF255D7D5L,1L,0x0B3265D3L,6L},{6L,1L,0xE190816DL,1L,6L,0L},{1L,6L,0L,0L,6L,1L},{0xF255D7D5L,1L,0x0B3265D3L,6L,0x0B3265D3L,1L},{0x0B3265D3L,0xF255D7D5L,0L,0xE190816DL,0xE190816DL,0L}};
                        int i, j;
                        return l_1285[6][5];
                    }
                    else
                    {
                        int32_t l_1293 = 1L;
                        (*l_1123) = (g_291[0][3][3].f0 , ((l_1236 , (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((l_1278 & ((+(g_291[0][3][3].f5 || (g_1203 , (((*l_1291) = func_26(p_25, (*g_650), (*g_193), &g_842)) == &l_1191)))) == 1UL)), l_1209)), 0xF785D453L))) <= l_1293));
                        if ((*g_650))
                            continue;
                    }
                }
            }
            for (l_1281.f0 = 0; (l_1281.f0 != 28); l_1281.f0 = safe_add_func_uint16_t_u_u(l_1281.f0, 7))
            {
                uint16_t l_1299 = 65535UL;
                uint8_t * const l_1305 = &g_842;
                int32_t l_1307 = (-1L);
                struct S0 l_1312 = {1UL,4L,0xF6531067BFF2751ELL,0UL,7UL,0xBB0106FBL,-611};
                int8_t *l_1330[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1330[i] = &g_1203;
                for (l_1161 = (-17); (l_1161 <= 28); ++l_1161)
                {
                    uint64_t l_1304 = 1UL;
                    uint8_t *l_1306 = &g_992;
                    (**g_193) = func_26(l_1305, (*g_683), (*g_193), l_1306);
                    l_1307 &= (*p_23);
                    for (l_1307 = 7; (l_1307 >= 0); l_1307 -= 1)
                    {
                        return p_24;
                    }
                }
                for (l_1281.f1 = 15; (l_1281.f1 <= 13); l_1281.f1--)
                {
                    int32_t l_1322[8] = {0x47AD222DL,0x47AD222DL,0x47AD222DL,0x47AD222DL,0x47AD222DL,0x47AD222DL,0x47AD222DL,0x47AD222DL};
                    int i;
                    for (g_1203 = 0; (g_1203 <= 26); g_1203 = safe_add_func_int16_t_s_s(g_1203, 7))
                    {
                        int16_t *l_1319 = (void*)0;
                        int16_t *l_1320 = &g_154[0];
                        struct S0 l_1321 = {0UL,0x3C1FL,0xF0F7B39340671FCELL,0x115EEDE86A4E9B9ELL,0UL,9L,10854};
                        uint64_t ****l_1325 = (void*)0;
                        uint64_t *****l_1324 = &l_1325;
                        uint8_t **l_1327 = &g_1298;
                        uint8_t ***l_1326 = &l_1327;
                        uint8_t **l_1329 = &g_1298;
                        uint8_t ***l_1328 = &l_1329;
                        (*g_750) = (l_1162 , l_1312);
                        (*l_1324) = (((((safe_mul_func_int8_t_s_s(g_13.f1, ((**g_244) > (safe_mod_func_uint8_t_u_u(0xF8L, (safe_add_func_int16_t_s_s(((*l_1320) |= ((void*)0 == (*g_244))), ((*g_641) , (l_1321 , l_1322[6]))))))))) | (((l_1312 = g_1323) , l_1322[6]) > l_1321.f1)) ^ 0L) && 1UL) , (void*)0);
                        (*l_1328) = ((*l_1326) = &p_25);
                    }
                }
                if ((251UL > (g_668 |= g_6)))
                {
                    uint16_t l_1346 = 0xEF0BL;
                    int32_t l_1348 = (-5L);
                    for (g_1323.f4 = 0; (g_1323.f4 != 39); ++g_1323.f4)
                    {
                        struct S0 l_1339 = {2UL,-6L,0xE9ACA9C3E7A303C5LL,0UL,65529UL,0L,-1798};
                        int16_t l_1340 = 0xE338L;
                        l_1346 &= (safe_add_func_int32_t_s_s((*l_1122), ((((g_668 |= ((g_6 , &g_1298) == ((((0xC3L != ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(((0UL ^ ((l_1339 , l_1340) , ((p_24 < (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((&l_1263 == (void*)0) && p_24), p_24)), g_1155))) && l_1160))) >= (*g_286)), (*g_245))), p_24)) , (*g_1298))) || p_24) , l_1161) , g_1345))) | g_842) <= l_1312.f0) && 0UL)));
                        if ((*p_22))
                            break;
                    }
                    if ((safe_unary_minus_func_uint64_t_u(0xDC287213A2D29D55LL)))
                    {
                        ++g_1349;
                    }
                    else
                    {
                        uint64_t l_1358 = 0x81E4A5AE68B2E11ALL;
                        int8_t * const *l_1362 = (void*)0;
                        int8_t * const **l_1361 = &l_1362;
                        (*p_22) = ((*l_1122) = (safe_rshift_func_uint8_t_u_s(247UL, (safe_mul_func_int8_t_s_s(g_13.f5, (safe_mod_func_int64_t_s_s(((l_1358 , l_1359) != ((*l_1361) = (void*)0)), (safe_add_func_uint16_t_u_u(p_24, (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(250UL, ((*l_1305) ^= 0xB0L))), (p_24 & p_24))))))))))));
                        l_1369[0][1][0] = &l_1177;
                    }
                }
                else
                {
                    const int32_t *l_1371 = &g_1372;
                    const int32_t **l_1373 = (void*)0;
                    const int32_t *l_1375 = &l_1162;
                    const int32_t **l_1374 = &l_1375;
                    (**g_193) = (l_1370 = p_23);
                    (*l_1374) = (l_1371 = &l_1209);
                }
                return (**g_244);
            }
            if (((l_1376 || ((*l_1389) = (((((**g_285) < ((safe_sub_func_int32_t_s_s((p_24 || (((safe_lshift_func_int16_t_s_u((p_24 = (**g_244)), ((*g_669) <= 0xB65DBCFA2BBABAFFLL))) & (l_1388 &= ((0xD8L || ((**g_1345) ^ (((*l_1387) ^= (safe_div_func_int32_t_s_s((g_741[0] , l_1385), l_1386))) > (*l_1370)))) < 0xCF9F581EL))) <= 0x62C2DBD4DF6BACE4LL)), 0UL)) != 0x3C75138AL)) < (**g_1345)) > 4294967295UL) , p_24))) || p_24))
            {
                uint16_t **l_1392 = &l_1389;
                int32_t l_1416[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_1416[i] = 0x4FD2BE20L;
                for (g_1323.f1 = (-4); (g_1323.f1 == 20); g_1323.f1 = safe_add_func_uint16_t_u_u(g_1323.f1, 2))
                {
                    int8_t **l_1414[4] = {&l_1360,&l_1360,&l_1360,&l_1360};
                    int8_t ***l_1413 = &l_1414[3];
                    int32_t l_1415 = (-9L);
                    int i;
                    if ((((0UL & ((*g_804) == l_1392)) != ((safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s((g_1417 = ((*g_641) = (((((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((--(**l_1392)) | ((safe_add_func_uint32_t_u_u((**g_285), ((safe_mod_func_uint8_t_u_u((1UL >= ((((safe_sub_func_uint64_t_u_u(0xACE387ADAA17B0B5LL, (((((void*)0 != l_1413) >= g_291[0][3][3].f5) && 0xBAA38A37L) > (*l_1370)))) , l_1415) >= (*l_1370)) != 0x33L)), g_184)) <= (*l_1370)))) & l_1177.f1)), p_24)) && 0x3DL), p_24)) > 0x2BA10B34L), l_1416[3])) , (**g_285)), p_24)) < l_1416[3]) == p_24) && 0L) != p_24))), p_24)), 4294967295UL)) ^ (*g_806))) || (**g_244)))
                    {
                        if (l_1281.f4)
                            goto lbl_1418;
                    }
                    else
                    {
                        return (**g_244);
                    }
                    (*l_1122) = (safe_div_func_uint16_t_u_u((*g_806), (safe_div_func_int64_t_s_s((g_1423[1] == &g_1424[3]), (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(l_1415, 3)), (((*l_1387) |= (safe_lshift_func_int8_t_s_s(0x4EL, (((((*g_286) &= ((*g_683) , ((void*)0 == p_23))) <= 0xBCA83CB6L) , (*g_750)) , 0xFDL)))) || (*g_641))))))));
                }
                for (l_1236.f5 = 0; (l_1236.f5 <= 0); l_1236.f5 += 1)
                {
                    int64_t l_1441 = 0x7D54F4FDEE65D680LL;
                    for (l_1278 = 0; (l_1278 <= 0); l_1278 += 1)
                    {
                        int i;
                        (*l_1122) = (l_1416[2] = (safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_uint64_t_u_u(g_741[l_1278], (p_24 | ((safe_sub_func_int16_t_s_s((((*l_1370) |= (l_1416[3] | ((0x439051EE59A08264LL || (safe_div_func_int8_t_s_s(((g_741[l_1278] <= l_1441) > ((safe_add_func_uint16_t_u_u(((~(0xBCL != (safe_rshift_func_int8_t_s_s(((**l_1359) &= p_24), (safe_mod_func_int32_t_s_s((&l_1369[0][1][0] == l_1449), (*g_286))))))) != (*g_683)), p_24)) && (*g_806))), p_24))) , 0L))) < g_741[l_1278]), 0x081BL)) == p_24)))), g_741[l_1278])), 1UL)));
                    }
                    (*l_1122) = ((void*)0 != (*l_1392));
                    ++l_1450;
                    (**g_193) = p_23;
                }
                for (l_1236.f5 = (-20); (l_1236.f5 >= 25); l_1236.f5 = safe_add_func_int64_t_s_s(l_1236.f5, 9))
                {
                    int32_t * const **l_1455 = &g_682;
                    uint8_t *l_1470 = &g_540;
                    (*l_1455) = &p_22;
                    (*l_1123) &= ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(255UL, 2)), (((-1L) && ((safe_mod_func_uint32_t_u_u((p_24 , ((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(0x93CEL, (*l_1370))) , ((*l_1470) &= (safe_lshift_func_uint8_t_u_u((**g_1345), (*g_1298))))), 5)) & ((((safe_sub_func_int16_t_s_s((l_1473 != (void*)0), 0xB8EEL)) && 65528UL) < (*l_1370)) == (***l_1455)))), (*p_22))) >= (***l_1455))) | (*l_1370)))) , (-3L));
                }
            }
            else
            {
                struct S0 ** const *l_1480 = (void*)0;
                int32_t l_1485 = 0x74E850FEL;
                uint32_t l_1498[1][8] = {{0UL,0UL,18446744073709551611UL,0UL,0UL,18446744073709551611UL,0UL,0UL}};
                uint32_t *l_1523 = &g_181;
                int i, j;
                for (l_1388 = 5; (l_1388 >= 0); l_1388 -= 1)
                {
                    struct S0 ** const **l_1481 = &l_1480;
                    int32_t l_1487 = 0x26834997L;
                    int i;
                    if ((safe_mod_func_int64_t_s_s(((((safe_lshift_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(g_428[(g_184 + 1)], ((((*l_1481) = l_1480) != (g_428[(g_184 + 1)] , l_1482)) , ((void*)0 == p_25)))) || ((*l_1389) = p_24)) , (safe_lshift_func_int8_t_s_u(l_1485, 5))), 7)) > (((!((*l_1360) = (p_24 | p_24))) , l_1485) & 0xABL)) , 253UL) ^ 0xABL), (*g_641))))
                    {
                        int16_t l_1488[8] = {0xEFBDL,0xEFBDL,0xEFBDL,0xEFBDL,0xEFBDL,0xEFBDL,0xEFBDL,0xEFBDL};
                        int i;
                        if (g_1323.f2)
                            goto lbl_1243;
                        (*g_650) = 0xE65FFF3DL;
                        ++l_1489;
                        l_1492[3][0] = (void*)0;
                    }
                    else
                    {
                        int32_t l_1517 = (-1L);
                        int16_t *l_1518 = &g_291[0][3][3].f1;
                        int32_t l_1519 = 9L;
                        uint16_t *l_1540[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1540[i] = &l_1376;
                        l_1519 &= ((safe_mod_func_int32_t_s_s(((((((*l_1370) , l_1487) , ((*g_683) = ((safe_div_func_int8_t_s_s(p_24, l_1485)) >= (l_1498[0][3] > ((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((*l_1518) &= ((l_1177.f6 = (safe_mul_func_uint8_t_u_u((((l_1507 != l_1508) | ((*l_1261) = (safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((**g_1345), ((safe_div_func_uint32_t_u_u(((*l_1158) = 0x92BAAE70L), (**g_285))) || 4294967288UL))) | l_1517), p_24)))) < (*g_1298)), p_24))) <= l_1498[0][7])) ^ p_24), (*l_1370))), 0UL)), p_24)) ^ (*g_286)))))) != 0UL) >= 0xB0L) <= 0L), p_24)) != (*g_1298));
                        (*p_22) = ((safe_lshift_func_uint16_t_u_u(((((g_1522 , l_1125) != ((*p_22) , l_1523)) && (((((((safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((p_24 , (safe_mul_func_int8_t_s_s((((+((*g_750) , (safe_mod_func_uint16_t_u_u(((((((((safe_mod_func_uint16_t_u_u(((*l_1389) = (l_1485 = 0xA7A7L)), (safe_add_func_int8_t_s_s((((*l_1370) = ((*g_1298) | (safe_div_func_uint16_t_u_u(((g_1539[0] >= 0xBCL) || (**g_244)), 65535UL)))) || 0x131DL), (**g_1345))))) , (-1L)) | p_24) | 0x62L) , p_24) < (*l_1123)) >= p_24) & 0x6FL), (**g_244))))) != 0xB235L) >= 0xA77738B0L), l_1236.f0))), p_24)), p_24)) ^ l_1541) < p_24) < p_24) & l_1519) >= 0xE01977D6L) <= g_428[(g_184 + 1)])) == p_24), 10)) || l_1485);
                    }
                    for (g_123 = 0; (g_123 <= 0); g_123 += 1)
                    {
                        (**g_193) = &l_1212;
                    }
                }
                return (**g_244);
            }
        }
    }
    if (((*l_1123) & ((*l_1158) = ((*g_245) != (l_1542 != (void*)0)))))
    {
        struct S0 l_1570[6] = {{0xB6B0L,0x2CEFL,1UL,1UL,0x70EDL,0x9705EC79L,15863},{0xB6B0L,0x2CEFL,1UL,1UL,0x70EDL,0x9705EC79L,15863},{0xB6B0L,0x2CEFL,1UL,1UL,0x70EDL,0x9705EC79L,15863},{0xB6B0L,0x2CEFL,1UL,1UL,0x70EDL,0x9705EC79L,15863},{0xB6B0L,0x2CEFL,1UL,1UL,0x70EDL,0x9705EC79L,15863},{0xB6B0L,0x2CEFL,1UL,1UL,0x70EDL,0x9705EC79L,15863}};
        uint16_t *l_1606 = &g_13.f0;
        uint16_t **l_1605 = &l_1606;
        const int32_t *l_1608 = &l_1541;
        uint32_t ***l_1630 = &g_285;
        int32_t l_1648 = (-1L);
        int32_t l_1649 = 0x84924865L;
        int32_t l_1654[4];
        int32_t l_1660 = (-6L);
        int32_t l_1662 = 0x8EBA5A0FL;
        uint64_t l_1667[3];
        uint32_t * const * const ***l_1736 = (void*)0;
        struct S0 **l_1743[6][10] = {{(void*)0,(void*)0,&g_750,(void*)0,&g_750,&l_1369[0][1][0],&g_750,&g_750,&g_750,&l_1369[0][1][0]},{&g_750,&g_750,(void*)0,&g_750,&g_750,&l_1369[1][2][0],&g_750,(void*)0,&l_1369[0][1][0],&l_1369[0][1][0]},{(void*)0,(void*)0,&g_750,&l_1369[0][1][0],&l_1369[0][1][0],&g_750,(void*)0,(void*)0,(void*)0,&l_1369[0][1][0]},{&g_750,&l_1369[0][1][0],(void*)0,&g_750,&g_750,&g_750,&g_750,&g_750,(void*)0,&l_1369[0][1][0]},{&g_750,&l_1369[1][2][0],(void*)0,&g_750,&g_750,&g_750,(void*)0,(void*)0,&g_750,&g_750},{&l_1369[0][1][0],&g_750,&g_750,&l_1369[0][1][0],&g_750,&g_750,&g_750,(void*)0,&g_750,(void*)0}};
        int64_t l_1759[9];
        struct S0 *****l_1863 = (void*)0;
        int8_t ***l_1865 = &g_1423[2];
        struct S0 *****l_1873 = &g_1862;
        uint32_t l_1895 = 0x3DFD5210L;
        int i, j;
        for (i = 0; i < 4; i++)
            l_1654[i] = 4L;
        for (i = 0; i < 3; i++)
            l_1667[i] = 0xC92D8ACBE65333F6LL;
        for (i = 0; i < 9; i++)
            l_1759[i] = (-1L);
        for (g_1522.f2 = 0; (g_1522.f2 > 46); g_1522.f2 = safe_add_func_uint32_t_u_u(g_1522.f2, 4))
        {
            uint32_t l_1547 = 0UL;
            int32_t ***l_1549[4][1] = {{&g_58},{&g_58},{&g_58},{&g_58}};
            uint32_t *****l_1567 = &g_1565[2][0][1];
            uint16_t ***l_1614 = &g_989;
            uint16_t ****l_1615 = (void*)0;
            uint32_t ***l_1632[10][1] = {{(void*)0},{&g_285},{(void*)0},{&g_285},{(void*)0},{&g_285},{(void*)0},{&g_285},{(void*)0},{&g_285}};
            int16_t l_1635 = (-1L);
            int i, j;
        }
        (*p_22) ^= (-1L);
        for (g_1522.f2 = 13; (g_1522.f2 <= 25); g_1522.f2 = safe_add_func_uint32_t_u_u(g_1522.f2, 2))
        {
            uint32_t ** const *l_1672 = &g_285;
            uint32_t ** const **l_1671[2][10] = {{&l_1672,&l_1672,&l_1672,&l_1672,&l_1672,&l_1672,&l_1672,&l_1672,&l_1672,&l_1672},{&l_1672,&l_1672,&l_1672,&l_1672,&l_1672,&l_1672,&l_1672,&l_1672,&l_1672,&l_1672}};
            uint32_t ** const ***l_1670[8][1][10] = {{{&l_1671[1][0],&l_1671[0][2],&l_1671[1][0],&l_1671[1][8],&l_1671[1][8],&l_1671[1][0],&l_1671[0][2],&l_1671[1][0],&l_1671[1][8],&l_1671[1][8]}},{{&l_1671[1][0],&l_1671[0][2],&l_1671[1][0],&l_1671[1][8],&l_1671[1][8],&l_1671[1][0],&l_1671[0][2],&l_1671[1][0],&l_1671[1][8],&l_1671[1][8]}},{{&l_1671[1][0],&l_1671[0][2],&l_1671[1][0],&l_1671[1][8],&l_1671[1][8],&l_1671[1][0],&l_1671[0][2],&l_1671[1][0],&l_1671[1][8],&l_1671[1][8]}},{{&l_1671[1][0],&l_1671[0][2],&l_1671[1][0],&l_1671[1][8],&l_1671[1][8],&l_1671[1][0],&l_1671[0][2],&l_1671[1][0],&l_1671[1][8],&l_1671[1][8]}},{{&l_1671[1][0],&l_1671[0][2],&l_1671[1][0],&l_1671[1][8],&l_1671[1][8],&l_1671[1][0],&l_1671[0][2],&l_1671[1][0],&l_1671[1][8],&l_1671[1][8]}},{{&l_1671[1][0],&l_1671[0][2],&l_1671[1][0],&l_1671[1][8],&l_1671[1][8],&l_1671[1][0],&l_1671[0][2],&l_1671[1][0],&l_1671[1][8],&l_1671[1][8]}},{{&l_1671[1][0],&l_1671[0][2],&l_1671[1][0],&l_1671[1][8],&l_1671[1][0],&l_1671[1][0],&l_1671[1][0],&l_1671[1][0],&l_1671[1][0],&l_1671[1][0]}},{{&l_1671[1][0],&l_1671[1][0],&l_1671[1][0],&l_1671[1][0],&l_1671[1][0],&l_1671[1][0],&l_1671[1][0],&l_1671[1][0],&l_1671[1][0],&l_1671[1][0]}}};
            int8_t * const l_1702[6][3] = {{&g_1663,&g_1663,&g_668},{&g_1663,(void*)0,&g_1663},{&g_1663,&g_668,&g_668},{&g_668,(void*)0,&g_668},{&g_1663,&g_1663,&g_668},{&g_1663,(void*)0,&g_1663}};
            int32_t l_1711[5][5] = {{(-1L),3L,1L,3L,(-1L)},{(-1L),3L,1L,3L,(-1L)},{(-1L),3L,1L,3L,(-1L)},{(-1L),3L,1L,3L,(-1L)},{(-1L),3L,1L,3L,(-1L)}};
            int8_t l_1714 = 0x6AL;
            int32_t l_1725 = 0x36E24741L;
            uint64_t l_1762 = 0x3A228F34CBA9DEEALL;
            const int32_t l_1768[6][9][2] = {{{0L,0L},{(-1L),(-1L)},{(-6L),0x78005BF6L},{(-4L),0xE40B139FL},{0xE40B139FL,(-6L)},{0xEA09B601L,(-1L)},{1L,0x1B1434C5L},{(-1L),0x3C68DB37L},{0x4E01FAFAL,0x4E45D43BL}},{{0x84E064D4L,0xA48CEE1FL},{(-1L),0xACD1D264L},{0x1B1434C5L,1L},{0x4F5A293BL,1L},{1L,1L},{0x4F5A293BL,1L},{0x1B1434C5L,0xACD1D264L},{(-1L),0xA48CEE1FL},{0x84E064D4L,0x4E45D43BL}},{{0x4E01FAFAL,0x3C68DB37L},{(-1L),0x1B1434C5L},{1L,(-1L)},{0xEA09B601L,(-6L)},{0xE40B139FL,0xE40B139FL},{(-4L),0x78005BF6L},{(-6L),(-1L)},{(-1L),0L},{0L,(-1L)}},{{1L,6L},{1L,(-1L)},{0L,0L},{(-1L),(-1L)},{(-6L),0x78005BF6L},{(-4L),0xE40B139FL},{0xE40B139FL,(-6L)},{0xEA09B601L,(-1L)},{1L,0x1B1434C5L}},{{(-1L),0x3C68DB37L},{0x4E01FAFAL,0x4E45D43BL},{0x84E064D4L,0xA48CEE1FL},{(-1L),0xACD1D264L},{0x1B1434C5L,1L},{0x4F5A293BL,1L},{1L,1L},{0x4F5A293BL,1L},{0x1B1434C5L,0xACD1D264L}},{{(-1L),0xA48CEE1FL},{0x84E064D4L,0x4E45D43BL},{0x4E01FAFAL,0x3C68DB37L},{(-1L),0x1B1434C5L},{1L,(-1L)},{0xEA09B601L,(-6L)},{0xE40B139FL,0xE40B139FL},{(-4L),0x78005BF6L},{(-6L),(-1L)}}};
            uint32_t l_1770 = 0x588B75ACL;
            int i, j, k;
            for (l_1489 = 0; l_1489 < 6; l_1489 += 1)
            {
                struct S0 tmp = {0x65D2L,-1L,3UL,0xB245118DF5629EFELL,0xFE28L,-8L,6912};
                l_1570[l_1489] = tmp;
            }
            if ((l_1670[3][0][9] == (void*)0))
            {
                const int16_t l_1679 = 0xC997L;
                const uint32_t *l_1693 = (void*)0;
                const uint32_t **l_1692 = &l_1693;
                const uint32_t ***l_1691 = &l_1692;
                for (g_684 = 1; (g_684 <= 14); ++g_684)
                {
                    uint32_t ***l_1687 = (void*)0;
                    const uint32_t ****l_1689 = (void*)0;
                    const uint32_t ****l_1690[4] = {&g_1688,&g_1688,&g_1688,&g_1688};
                    int16_t *l_1700 = &l_1281.f1;
                    int8_t *l_1701 = &g_1663;
                    int32_t l_1703 = 0x656F3E2CL;
                    int i;
                    if ((((((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_1679, ((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((void*)0 != p_23), (((((*g_286) = (!((l_1679 , l_1687) == (l_1691 = g_1688)))) && (safe_lshift_func_uint16_t_u_u(((((**g_1585) = (***g_1584)) == (((*l_1701) = (safe_mod_func_int16_t_s_s(((*l_1700) = (0xEA9F47982352D3A3LL == 0UL)), (*g_245)))) == l_1679)) < l_1679), 9))) , l_1702[1][0]) != p_25))), 11)), 1UL)) & p_24) || p_24) && 0xAF8100BB7BAEFEAELL))), (*l_1123))) | 18446744073709551615UL) & p_24) < l_1703) , (*p_22)))
                    {
                        int32_t **l_1705 = &l_1126[4][1];
                        g_1704 = &g_1600;
                        (*l_1705) = ((**l_1548) = p_23);
                    }
                    else
                    {
                        return (*g_245);
                    }
                }
            }
            else
            {
                int32_t l_1721 = 0x94D9463BL;
                uint32_t l_1724 = 0x56560A52L;
                int32_t **l_1737 = &l_1126[6][0];
                int32_t l_1760 = 0x5D4DE404L;
                int32_t l_1761[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1761[i] = 0xBAC0C1D0L;
                if (((((safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_int64_t_s(p_24)) <= (((safe_rshift_func_int8_t_s_s(l_1711[1][4], ((((0xA45FL == ((0x9989L > (safe_mul_func_uint16_t_u_u((((((**g_1585) = ((l_1714 , ((l_1649 = (safe_mul_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((*g_245), l_1721)) , ((((((((0x6A91L || (safe_mul_func_uint8_t_u_u((0xE15BL == l_1721), l_1721))) , &g_1565[2][7][1]) == &g_521) ^ 246UL) <= l_1724) <= (*g_1298)) < p_24) ^ l_1724)), p_24)) , (***g_1584)) , p_25) == (void*)0), 0xBBL))) | p_24)) | (*l_1608))) < p_24) & l_1714) || (**g_244)), 1UL))) | (*l_1608))) | l_1725) <= p_24) , p_24))) & (*l_1608)) , l_1711[4][2])), 0)) , 0x72E589B61494666CLL) >= p_24) < p_24))
                {
                    for (l_1281.f1 = 15; (l_1281.f1 != 0); l_1281.f1--)
                    {
                        uint32_t l_1728 = 0x9F62598FL;
                        (*g_683) |= (*g_650);
                        l_1728++;
                        return l_1728;
                    }
                    return (*g_245);
                }
                else
                {
                    const uint16_t l_1733[2][3][7] = {{{0UL,0x0DFBL,0x2F0BL,65533UL,0x59A8L,0x59A8L,65533UL},{1UL,0xD846L,1UL,0x39F8L,65533UL,0UL,0xE5F9L},{0x2F0BL,0x0DFBL,0UL,0x39F8L,0UL,0x0DFBL,0xD846L}},{{1UL,0x0DFBL,1UL,0x59A8L,0x39F8L,0xE5F9L,0x39F8L},{1UL,0x39F8L,0x39F8L,1UL,9UL,0UL,0x2F0BL},{0xD846L,0UL,1UL,9UL,9UL,1UL,0UL}}};
                    uint32_t l_1735 = 0xB179F7C2L;
                    uint8_t **l_1738 = (void*)0;
                    uint8_t **l_1739 = (void*)0;
                    uint8_t **l_1740 = (void*)0;
                    uint8_t **l_1741 = &g_1298;
                    int32_t l_1742 = 4L;
                    uint32_t l_1755 = 0x1D393D14L;
                    int64_t *l_1756[8][10] = {{(void*)0,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6},{&g_6,&g_6,&g_6,(void*)0,(void*)0,&g_6,&g_6,&g_6,(void*)0,(void*)0},{(void*)0,&g_6,(void*)0,&g_6,(void*)0,&g_6,&g_6,&g_6,&g_6,(void*)0},{&g_6,&g_6,&g_6,&g_6,(void*)0,(void*)0,&g_6,&g_6,&g_6,(void*)0},{&g_6,&g_6,(void*)0,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6},{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,(void*)0,&g_6,&g_6,&g_6},{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,(void*)0,(void*)0,(void*)0},{&g_6,(void*)0,&g_6,(void*)0,(void*)0,&g_6,(void*)0,&g_6,&g_6,(void*)0}};
                    int16_t *l_1757 = (void*)0;
                    int16_t *l_1758 = &g_1131[0];
                    int i, j, k;
                    (*g_650) &= (((l_1711[1][4] = (l_1742 ^= ((safe_sub_func_int64_t_s_s(p_24, ((***g_1584) = (((l_1733[1][1][0] , ((*l_1741) = &l_1127)) != p_25) == 65535UL)))) , p_24))) | 0xFBL) | (*l_1122));
                    l_1743[0][1] = (void*)0;
                    (*p_22) = (p_24 > ((*l_1758) &= ((safe_lshift_func_int16_t_s_s(((*p_22) | (((*l_1608) == (((**l_1741) |= (((((!((safe_add_func_uint64_t_u_u(p_24, 1L)) , ((safe_sub_func_int64_t_s_s((((safe_mul_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(p_24, l_1735)) , (l_1755 , ((void*)0 == p_23))) | p_24), p_24)) || l_1714) , 0x9442CB41C121D574LL), p_24)) == (*l_1608)))) , 0x3B09C9F4L) , l_1756[7][0]) == (void*)0) & 0x7CL)) , p_24)) > 0xBB3BCB28L)), p_24)) ^ (*g_245))));
                }
                --l_1762;
            }
            (*p_22) &= (safe_unary_minus_func_uint64_t_u((safe_sub_func_int16_t_s_s((l_1768[4][8][1] <= (~(l_1770 || (((****l_1508) = 4UL) && p_24)))), ((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint64_t_u_u((*l_1123), (*l_1608))) && ((+(18446744073709551615UL > (l_1725 , l_1768[4][8][1]))) , (*l_1608))), (*g_1298))) == (*g_1298))))));
        }
        for (g_57 = (-16); (g_57 <= 53); g_57 = safe_add_func_int32_t_s_s(g_57, 1))
        {
            uint16_t l_1790[7] = {65528UL,0x7BE8L,65528UL,65528UL,0x7BE8L,65528UL,65528UL};
            struct S0 l_1833 = {0UL,1L,18446744073709551615UL,3UL,0xE0C7L,0x584E0147L,-14799};
            int64_t l_1856 = 0x6BCD4BAF6C57A89DLL;
            int32_t * const *l_1860 = &l_1126[9][0];
            const uint64_t *l_1908 = &g_1349;
            const uint64_t **l_1907 = &l_1908;
            int i;
            for (g_74 = 21; (g_74 <= 25); ++g_74)
            {
                int32_t ****l_1784[10][1] = {{&l_1548},{&l_1548},{&l_1548},{&l_1548},{&l_1548},{&l_1548},{&l_1548},{&l_1548},{&l_1548},{&l_1548}};
                uint32_t * const * const l_1789 = (void*)0;
                uint64_t * const *l_1804 = (void*)0;
                uint64_t * const **l_1803 = &l_1804;
                uint64_t * const ***l_1802 = &l_1803;
                uint64_t * const ****l_1801 = &l_1802;
                uint64_t * const ****l_1805 = &l_1802;
                uint16_t *l_1812 = &l_1570[5].f4;
                uint8_t *l_1824 = (void*)0;
                uint8_t *l_1825 = (void*)0;
                uint8_t *l_1826[6][4] = {{(void*)0,&g_842,&g_842,(void*)0},{&g_540,&g_842,&g_57,&g_842},{&g_842,&g_1417,&g_57,&g_57},{&g_540,&g_540,&g_842,&g_57},{(void*)0,&g_1417,(void*)0,&g_842},{(void*)0,&g_842,&g_842,(void*)0}};
                struct S0 l_1832 = {0UL,0xEFA9L,18446744073709551612UL,18446744073709551615UL,1UL,0x02F20836L,3638};
                int i, j;
                (*l_1123) |= ((0L <= (safe_rshift_func_uint8_t_u_u((((((safe_mul_func_uint8_t_u_u(p_24, (l_1784[3][0] != (((safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s((l_1789 != ((*g_739) = ((((1UL > 0xFD33L) | p_24) >= l_1790[6]) , l_1791))), (*l_1608))), 0xB4DEDCD4L)) == p_24) , (void*)0)))) , (void*)0) == (void*)0) && 18446744073709551615UL) >= (*l_1608)), 4))) < p_24);
                (*p_22) = (l_1649 |= ((((*l_1123) &= ((safe_rshift_func_uint8_t_u_u(l_1790[6], 0)) & (((*g_650) = ((((*l_1158) = (safe_sub_func_uint8_t_u_u((**g_1345), (*g_1298)))) | l_1790[6]) , (*p_23))) | ((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((l_1805 = (l_1801 = g_1800)) != (void*)0), ((safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((++(*l_1812)) < ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((2L == (safe_mod_func_uint8_t_u_u((g_1417 = (!(safe_sub_func_uint8_t_u_u((*g_1298), (*l_1608))))), (*l_1608)))) > (-1L)), (**g_244))), p_24)) && l_1827)), p_24)), l_1790[6])), 6)) <= 0x2CL))), (*g_245))) & (**g_1345))))) , (*g_245)) < 0L));
                for (l_1281.f1 = 0; (l_1281.f1 == (-15)); l_1281.f1--)
                {
                    uint64_t l_1837 = 0UL;
                    int32_t *l_1857 = (void*)0;
                    for (g_6 = 0; (g_6 < 28); g_6 = safe_add_func_uint64_t_u_u(g_6, 4))
                    {
                        uint64_t l_1854 = 18446744073709551615UL;
                        l_1833 = l_1832;
                        if ((*p_23))
                            continue;
                        (*p_22) = ((((*g_1298) = (((safe_unary_minus_func_int8_t_s((safe_div_func_uint16_t_u_u((l_1837 > l_1837), (l_1837 || (((safe_mod_func_int64_t_s_s(((*g_750) , ((((l_1833.f5 = l_1837) || ((((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((&g_245 != (g_244 = &g_245)), ((safe_rshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((8UL & ((((safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((*p_23) && l_1854), 0x4AE7L)), (*g_641))) , p_24) , 4294967286UL) == (*g_286))), p_24)), 7)) , (*p_23)))) , (*p_23)), l_1837)), 0xD3D640DDL)) >= 6UL) , l_1855) & p_24)) ^ 0L) , (*l_1608))), 5L)) || (*g_669)) | (**g_1345))))))) >= p_24) <= l_1856)) , (*l_1608)) <= l_1833.f1);
                    }
                    (*g_58) = l_1857;
                }
                if ((*p_23))
                    break;
            }
            for (l_1833.f5 = (-3); (l_1833.f5 != 11); ++l_1833.f5)
            {
                struct S0 *****l_1864 = (void*)0;
                uint16_t *l_1866 = &g_187;
                uint16_t *l_1867 = &l_1570[5].f0;
                int32_t l_1876 = 1L;
                int32_t l_1879 = 1L;
                const int32_t *l_1906 = &l_1648;
                uint64_t **l_1909 = &g_669;
                (**g_193) = func_26(&l_1127, ((*l_1123) = (*p_22)), l_1860, &g_1417);
                if (((((g_1861 = g_1861) != (l_1864 = l_1863)) || ((*g_669) ^= ((((*l_1867) = ((*l_1866) = ((0xFB724E20L | 0xA0D714E2L) | ((*g_286) = ((void*)0 != l_1865))))) , ((*l_1122) & (p_24 |= ((*l_1608) , ((void*)0 == &l_1608))))) == 1L))) , 0x35DED0BBL))
                {
                    struct S0 *****l_1872 = (void*)0;
                    if ((*p_22))
                        break;
                    (*g_58) = func_26((*g_1345), (l_1879 &= ((safe_div_func_uint8_t_u_u(p_24, ((***l_1865) = (safe_add_func_uint16_t_u_u(p_24, ((((***g_1601) , l_1863) == (l_1873 = l_1872)) , (safe_mod_func_uint64_t_u_u((l_1876 | l_1876), ((safe_mul_func_int16_t_s_s((*g_245), 0L)) ^ l_1876))))))))) , (*g_650))), (*g_193), p_25);
                }
                else
                {
                    int32_t l_1880 = 0x7CE24A89L;
                    int32_t *l_1881[1][2];
                    struct S0 l_1882 = {1UL,0x1F38L,9UL,0x9DABC7E9F966532ELL,65535UL,0x62F7B3A0L,-11767};
                    uint8_t *l_1902 = &g_1417;
                    int64_t **l_1910[8][2] = {{(void*)0,&g_641},{(void*)0,&g_641},{&g_641,&g_641},{(void*)0,&g_641},{(void*)0,(void*)0},{(void*)0,&g_641},{(void*)0,&g_641},{&g_641,&g_641}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1881[i][j] = &g_428[4];
                    }
                    if (l_1880)
                    {
                        (**l_1548) = l_1881[0][1];
                    }
                    else
                    {
                        uint8_t **l_1900 = (void*)0;
                        uint8_t **l_1901 = &g_1298;
                        const int32_t **l_1903[7][2][4] = {{{&l_1608,&l_1608,&l_1608,&l_1608},{&l_1608,&l_1608,&l_1608,&l_1608}},{{&l_1608,&l_1608,(void*)0,&l_1608},{(void*)0,&l_1608,&l_1608,(void*)0}},{{&l_1608,&l_1608,&l_1608,&l_1608},{&l_1608,&l_1608,&l_1608,&l_1608}},{{(void*)0,&l_1608,(void*)0,&l_1608},{&l_1608,&l_1608,&l_1608,&l_1608}},{{&l_1608,&l_1608,&l_1608,&l_1608},{&l_1608,(void*)0,&l_1608,&l_1608}},{{(void*)0,&l_1608,&l_1608,(void*)0},{&l_1608,&l_1608,&l_1608,&l_1608}},{{&l_1608,(void*)0,&l_1608,&l_1608},{&l_1608,&l_1608,&l_1608,&l_1608}}};
                        int i, j, k;
                        l_1906 = (g_1904 = func_26(((*l_1901) = func_39(l_1882, ((safe_mul_func_uint8_t_u_u((*g_1298), g_1885)) , ((*l_1608) > (safe_mul_func_int8_t_s_s((((((**g_1602) , ((***l_1865) = (safe_rshift_func_uint16_t_u_s((!(safe_add_func_int8_t_s_s(p_24, ((safe_mod_func_int64_t_s_s(l_1895, l_1856)) <= (safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(1UL, 5)), 0x8CDC052EB67822A5LL)))))), 13)))) == 0x31L) , 0xC60C8B86L) > (-1L)), l_1876)))), (**g_1345), (*g_193))), (*p_22), (*g_193), l_1902));
                        return p_24;
                    }
                    if ((*p_22))
                        continue;
                    for (g_991 = 0; (g_991 <= 3); g_991 += 1)
                    {
                        int i;
                        (*p_22) &= ((((0x7CF1951BC1FF408FLL & ((l_1907 == l_1909) >= (l_1654[g_991] == (l_1910[2][0] == l_1911[4])))) , 6UL) && (safe_lshift_func_int8_t_s_u((((void*)0 == &g_1231) >= (*l_1608)), 2))) & 0xC74AL);
                    }
                }
                if (l_1489)
                    goto lbl_1418;
            }
            if ((*p_22))
                continue;
        }
    }
    else
    {
        int64_t l_1915 = 0x39DAB5ECF07EE18BLL;
        int32_t l_1916 = 0x971F6DC7L;
        int32_t l_1917 = 0x3CFDD1E2L;
        int32_t l_1918[10][4][1] = {{{(-10L)},{2L},{(-10L)},{0L}},{{(-3L)},{(-1L)},{0L},{0L}},{{(-1L)},{0L},{0L},{(-1L)}},{{(-3L)},{0L},{(-10L)},{2L}},{{(-10L)},{0L},{(-3L)},{(-1L)}},{{0L},{0L},{(-1L)},{0L}},{{0L},{(-1L)},{(-3L)},{0L}},{{(-10L)},{2L},{(-10L)},{0L}},{{(-3L)},{(-1L)},{0L},{0L}},{{(-1L)},{0L},{0L},{(-1L)}}};
        int i, j, k;
        (*g_650) = 7L;
        for (g_540 = 0; (g_540 <= 0); g_540 += 1)
        {
            if (g_1323.f5)
                goto lbl_1642;
        }
        --l_1919;
    }
    return p_24;
}







static int32_t * func_26(uint8_t * const p_27, int32_t p_28, int32_t * const * p_29, uint8_t * p_30)
{
    uint16_t l_693 = 65533UL;
    int32_t l_703 = 2L;
    int32_t l_720[2];
    uint64_t l_724[7] = {0x2F29CEABFC46729BLL,0UL,0x2F29CEABFC46729BLL,0x2F29CEABFC46729BLL,0UL,0x2F29CEABFC46729BLL,0x2F29CEABFC46729BLL};
    uint32_t ***l_734 = &g_387;
    uint32_t ****l_733 = &l_734;
    int32_t l_742 = (-1L);
    int64_t *l_825 = &g_6;
    uint64_t **l_849 = &g_669;
    int32_t *l_893 = &l_720[0];
    int32_t *l_894[9] = {&l_703,&l_703,&l_720[0],&l_703,&l_703,&l_720[0],&l_703,&l_703,&l_720[0]};
    int64_t *l_925 = &g_6;
    struct S0 *l_932[1];
    int64_t l_953 = 0x8CC4973BA9778245LL;
    uint16_t *l_987 = &g_291[0][3][3].f4;
    uint16_t **l_986 = &l_987;
    uint32_t ** const l_1067 = (void*)0;
    int64_t l_1116 = (-10L);
    int32_t **l_1121 = &l_893;
    int i;
    for (i = 0; i < 2; i++)
        l_720[i] = (-1L);
    for (i = 0; i < 1; i++)
        l_932[i] = (void*)0;
    for (g_78 = 6; (g_78 > (-1)); g_78--)
    {
        int64_t l_689 = (-1L);
        struct S0 l_691 = {0xBABDL,0xD0BCL,0x23A77AC919903DA2LL,0xA200C81CCFA8C6C0LL,0xB9B8L,0x4DD5587CL,-15430};
        int32_t l_721 = (-1L);
        int32_t l_722 = 0L;
        int32_t l_723 = 0L;
        uint32_t *****l_735 = (void*)0;
        uint32_t *****l_736 = (void*)0;
        uint32_t *****l_737 = &l_733;
        int8_t *l_740 = &g_668;
        (*g_650) ^= ((0x4C70BFF8L ^ 0x038F14BBL) , l_689);
        for (g_74 = 0; (g_74 <= 0); g_74 += 1)
        {
            int32_t *l_690 = &g_428[1];
            struct S0 *l_692 = &g_291[0][1][3];
            uint32_t l_700[1];
            int32_t l_708 = (-1L);
            int32_t l_718 = 1L;
            int32_t l_719[10][8][3] = {{{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)}},{{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)}},{{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)}},{{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)}},{{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)}},{{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)}},{{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)}},{{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)}},{{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)}},{{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)},{0L,0L,0L},{(-5L),0L,(-5L)}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_700[i] = 0x97A98793L;
            l_690 = &g_123;
            (*l_692) = l_691;
            if ((*l_690))
                break;
            for (g_540 = 0; (g_540 <= 0); g_540 += 1)
            {
                int8_t *l_701 = (void*)0;
                int8_t *l_702[4][1] = {{&g_668},{&g_668},{&g_668},{&g_668}};
                uint64_t l_704 = 0x15C9966AA9345F6ALL;
                int32_t l_707[1][7][7] = {{{0x7AE69B86L,0x3F495997L,0x3F495997L,0x7AE69B86L,0x7AE69B86L,0x3F495997L,0x3F495997L},{(-7L),0L,(-7L),0L,(-7L),0L,(-7L)},{0x7AE69B86L,0x7AE69B86L,0x3F495997L,0x3F495997L,0x7AE69B86L,0x7AE69B86L,0x3F495997L},{(-1L),0L,(-1L),0L,(-1L),0L,(-1L)},{0x7AE69B86L,0x3F495997L,0x3F495997L,0x7AE69B86L,0x7AE69B86L,0x3F495997L,0x3F495997L},{(-7L),0L,(-7L),0L,(-7L),0L,(-7L)},{0x7AE69B86L,0x7AE69B86L,0x3F495997L,0x3F495997L,0x7AE69B86L,0x7AE69B86L,0x3F495997L}}};
                int i, j, k;
                for (g_6 = 0; (g_6 >= 0); g_6 -= 1)
                {
                    --l_693;
                }
                (*g_683) = ((l_691.f5 = (safe_div_func_int64_t_s_s((l_691.f2 > ((void*)0 == &g_387)), p_28))) && ((((*g_641) = (-1L)) , ((*g_641) = (l_700[0] < (g_6 ^ (g_668 = (l_703 ^= 0xB8L)))))) > (((*g_245) > (*g_245)) | p_28)));
                for (g_181 = 0; (g_181 <= 0); g_181 += 1)
                {
                    uint32_t l_709[1];
                    int32_t *l_712 = (void*)0;
                    int32_t *l_713 = &l_691.f5;
                    int32_t *l_714 = &l_707[0][0][4];
                    int32_t *l_715 = &g_291[0][3][3].f5;
                    int32_t *l_716 = (void*)0;
                    int32_t *l_717[5] = {&g_428[4],&g_428[4],&g_428[4],&g_428[4],&g_428[4]};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_709[i] = 0x42C3F302L;
                    for (l_693 = 0; (l_693 <= 0); l_693 += 1)
                    {
                        (*g_683) &= l_704;
                    }
                    for (l_691.f2 = 0; (l_691.f2 <= 0); l_691.f2 += 1)
                    {
                        int32_t *l_705 = &l_703;
                        int32_t *l_706[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_706[i] = &l_691.f5;
                        ++l_709[0];
                    }
                    l_724[1]--;
                    if (l_724[1])
                        continue;
                }
            }
        }
        l_742 = ((*g_650) ^= (((*g_669) = (safe_rshift_func_uint8_t_u_u((0x286FL | (safe_sub_func_int64_t_s_s(0L, (g_668 && ((*l_740) = (safe_rshift_func_uint16_t_u_s((0x06ADL >= (l_720[1] = p_28)), (((*l_737) = l_733) != g_738[4][1])))))))), ((l_703 = ((*g_245) <= (**g_244))) == g_540)))) , g_741[0]));
    }
    return &g_428[4];
}







static int32_t * const * func_31(int32_t ** p_32, uint8_t * p_33, uint16_t p_34, const int16_t p_35, int8_t p_36)
{
    int32_t *l_674 = &g_74;
    int32_t l_675 = (-1L);
    int32_t *l_676 = &g_74;
    int32_t *l_677 = &g_123;
    int32_t *l_678[1];
    uint16_t l_679 = 0xA106L;
    int i;
    for (i = 0; i < 1; i++)
        l_678[i] = &g_428[1];
    for (g_181 = 0; (g_181 != 12); g_181 = safe_add_func_uint8_t_u_u(g_181, 4))
    {
        return (*g_193);
    }
    ++l_679;
    return (*g_193);
}







static uint8_t * func_39(struct S0 p_40, const int32_t p_41, uint8_t p_42, int32_t ** p_43)
{
    const uint32_t *l_657 = &g_184;
    const uint32_t **l_656[7];
    const uint32_t *** const l_655 = &l_656[4];
    int8_t *l_667 = &g_668;
    const int32_t l_670 = 0xE81E330FL;
    uint16_t *l_671 = &g_291[0][3][3].f0;
    int i;
    for (i = 0; i < 7; i++)
        l_656[i] = &l_657;
    (*g_650) &= (((void*)0 == l_655) > (safe_div_func_uint16_t_u_u((!(safe_rshift_func_int16_t_s_u(p_40.f5, 10))), (safe_div_func_uint16_t_u_u(((*l_671) |= (safe_rshift_func_int8_t_s_u(0xABL, (((g_13.f4 , (void*)0) != (((*l_667) ^= p_40.f6) , g_669)) ^ l_670)))), 0xE5DFL)))));
    return &g_57;
}







static struct S0 func_44(const uint8_t * p_45, uint32_t p_46, uint32_t p_47, const int32_t * p_48, int32_t * p_49)
{
    uint16_t l_132 = 65526UL;
    int8_t l_182 = (-2L);
    int16_t *l_214 = &g_13.f1;
    int32_t ***l_224[2];
    int32_t l_225 = 4L;
    int16_t l_232[1][4][1] = {{{0x2342L},{1L},{0x2342L},{1L}}};
    struct S0 l_257 = {0x2F34L,1L,18446744073709551615UL,18446744073709551613UL,6UL,2L,-2989};
    uint32_t *l_274 = &g_184;
    const uint64_t l_275[10] = {2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL};
    int8_t *l_276 = &l_182;
    const int32_t l_348 = 0xE8A64E1BL;
    int8_t l_351 = 0x29L;
    uint8_t l_406 = 255UL;
    uint32_t ***l_441 = &g_285;
    uint32_t l_514 = 5UL;
    int64_t l_539 = 0xF5A64AC66E3ED526LL;
    struct S0 l_582 = {0x4E88L,-3L,18446744073709551615UL,0x0F4F157C6E60966BLL,0UL,0xAB3546E8L,12682};
    int16_t l_593[8][10][3] = {{{1L,0L,0xAA26L},{2L,0x6F3AL,0xE2F2L},{(-5L),0xBE80L,0xF9B3L},{0x03CCL,1L,(-7L)},{0xEFBAL,0x6F3AL,1L},{0xAC90L,(-2L),0x8EABL},{(-2L),9L,0x245BL},{(-10L),1L,0x245BL},{(-5L),1L,0x8EABL},{1L,0xE4D9L,1L}},{{0xBAA3L,0xBAA3L,(-7L)},{(-4L),0x3C26L,0xF9B3L},{1L,9L,0xE2F2L},{0xBAA3L,0xEFBAL,0xAA26L},{6L,1L,0xE2F2L},{1L,1L,0xF9B3L},{(-10L),0xA257L,(-7L)},{0L,1L,1L},{0xF599L,0L,0x8EABL},{0xEFBAL,0xC01AL,0x245BL}},{{(-9L),0x3C26L,0x245BL},{1L,0x1DA0L,0x8EABL},{2L,0xD8E3L,1L},{0x1DA0L,1L,(-7L)},{1L,0xEB30L,0xF9B3L},{0x6F3AL,0xC01AL,0xE2F2L},{0x1DA0L,(-2L),0xAA26L},{1L,(-4L),0xE2F2L},{0x4281L,0xA257L,0xF9B3L},{(-9L),0xBE80L,(-7L)}},{{(-2L),(-4L),1L},{0xC532L,0xEFBAL,0x8EABL},{0L,8L,0x245BL},{0x03CCL,0xEB30L,0x245BL},{0x4281L,0xBAA3L,0x8EABL},{6L,(-3L),1L},{1L,0x1DA0L,(-7L)},{0x6F3AL,1L,0xF9B3L},{(-4L),8L,0xE2F2L},{1L,0L,0xAA26L}},{{2L,0x6F3AL,0xE2F2L},{(-5L),0xBE80L,0xF9B3L},{0x03CCL,1L,(-7L)},{0xEFBAL,0x6F3AL,1L},{0xAC90L,(-2L),0x8EABL},{(-2L),9L,0x245BL},{(-10L),1L,0x245BL},{(-5L),1L,0x8EABL},{1L,0xE4D9L,1L},{0xBAA3L,0xBAA3L,(-7L)}},{{(-4L),0x3C26L,0xF9B3L},{1L,9L,0xE2F2L},{0xBAA3L,0xEFBAL,0xAA26L},{6L,1L,0xE2F2L},{1L,1L,0xF9B3L},{(-10L),0xA257L,(-7L)},{0L,1L,1L},{0xF599L,0L,0x8EABL},{0xEFBAL,0xC01AL,0x245BL},{(-9L),0x3C26L,0x245BL}},{{2L,0L,0xC532L},{5L,0xB215L,(-10L)},{0L,0x2512L,0x6F3AL},{0xF16DL,0x25A2L,0x3407L},{1L,0xBD36L,1L},{0L,0x930AL,0xEFBAL},{0x1689L,(-8L),1L},{0x3BA6L,0x1500L,0x3407L},{0L,(-3L),0x6F3AL},{0x930AL,(-8L),(-10L)}},{{0x7C04L,0xB1B5L,0xC532L},{2L,0xE0FDL,0xD8E3L},{0x958DL,0x25A2L,0xD8E3L},{0x3BA6L,0xF337L,0xC532L},{4L,0L,(-10L)},{0x2512L,0L,0x6F3AL},{1L,0L,0x3407L},{(-8L),0xE0FDL,1L},{0x2512L,2L,0xEFBAL},{5L,1L,1L}}};
    uint32_t * const *l_621 = &g_388;
    uint32_t * const **l_620 = &l_621;
    uint32_t * const ***l_619 = &l_620;
    uint32_t * const ****l_618 = &l_619;
    struct S0 *l_653 = (void*)0;
    struct S0 *l_654 = &l_257;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_224[i] = &g_58;
    for (g_74 = 0; (g_74 >= 0); g_74 -= 1)
    {
        int32_t l_130 = 0x5C488BB1L;
        const int16_t l_131 = 0x1480L;
        int32_t l_157 = 0x74B01682L;
        uint16_t *l_200 = &g_13.f0;
        uint64_t *l_219 = &g_220;
        int32_t l_230 = 0x617F48A4L;
        int32_t l_233 = (-7L);
        struct S0 l_255 = {0x440BL,4L,5UL,18446744073709551608UL,65535UL,-1L,-8395};
        struct S0 *l_256[2];
        int i;
        for (i = 0; i < 2; i++)
            l_256[i] = (void*)0;
        for (g_78 = 0; (g_78 >= 0); g_78 -= 1)
        {
            int32_t *l_121 = (void*)0;
            int32_t *l_122 = &g_123;
            uint64_t *l_133 = &g_13.f2;
            const uint16_t *l_202 = (void*)0;
            int32_t ****l_223 = &g_193;
            int32_t l_229[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            (*l_122) &= (*p_48);
            if (((*l_122) = (0xFF93L <= ((8L > (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_130, l_131)), 2)), (((((p_46 && g_123) <= (l_132 ^ ((((g_13 , (void*)0) != l_133) > 0xBAEEB665L) ^ p_46))) > (-9L)) , (*p_49)) < 0x5B7F6ABCL)))) , 9L))))
            {
                if (l_130)
                    break;
                if (l_132)
                    continue;
            }
            else
            {
                uint16_t l_152[4][2];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_152[i][j] = 0x9F96L;
                }
                for (g_6 = 0; (g_6 <= 0); g_6 += 1)
                {
                    for (p_47 = 0; (p_47 <= 0); p_47 += 1)
                    {
                        uint64_t *l_145 = &g_146;
                        uint8_t *l_151 = &g_57;
                        int16_t *l_153 = &g_154[0];
                        int32_t *l_155 = &l_130;
                        int32_t *l_156 = (void*)0;
                        int i, j, k;
                        g_59[g_6][p_47][(g_6 + 3)] = (void*)0;
                        l_157 &= ((g_13.f0 > ((((safe_add_func_uint16_t_u_u((((*l_155) ^= (g_123 > (l_131 , ((((*l_153) &= ((1UL < (safe_sub_func_int8_t_s_s((g_75 , p_46), ((l_152[0][0] = (safe_lshift_func_uint16_t_u_u((+((((safe_sub_func_uint64_t_u_u(((*l_145) = (safe_lshift_func_uint8_t_u_u(0x96L, 7))), ((safe_mul_func_uint8_t_u_u(1UL, ((safe_sub_func_uint8_t_u_u(((*l_151) = 5UL), g_6)) & p_46))) > (*p_49)))) | (-1L)) == p_47) ^ 0xAFL)), 15))) & g_74)))) < g_13.f6)) == 0x9A96L) ^ p_47)))) <= 1L), g_13.f4)) <= 7L) ^ l_131) < g_13.f3)) < g_13.f1);
                        (*g_58) = p_49;
                    }
                }
            }
            for (l_157 = 0; (l_157 <= 0); l_157 += 1)
            {
                int32_t **l_179[5];
                uint32_t *l_180 = &g_181;
                uint32_t *l_183 = &g_184;
                uint16_t *l_185 = &g_75;
                uint16_t *l_186 = &g_187;
                int32_t ***l_192 = &l_179[0];
                int32_t ****l_191[10][1][8] = {{{&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192}},{{&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192}},{{&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192}},{{&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192}},{{&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192}},{{&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192}},{{&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192}},{{&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192}},{{&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192}},{{&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_179[i] = &l_122;
                g_188[1] &= (((safe_mul_func_int16_t_s_s(0x6E17L, ((*l_186) &= ((*l_185) |= ((0xCF2A4E10F472F1F1LL != g_13.f3) == ((safe_mul_func_int16_t_s_s((((*l_183) ^= (0x8484EA1FL != (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(p_46, 4)), (!((l_132 | (safe_sub_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s(((p_46 > (((safe_mod_func_int16_t_s_s(0x912BL, ((((*l_180) = ((((g_154[0] > g_13.f0) , (void*)0) == l_179[0]) < g_13.f5)) == l_130) || (*l_122)))) , p_47) == 1L)) | p_47), l_182)) | g_57), p_47))) & 0x83EEC5992523FAAALL)))), g_13.f0)) , 0x7F3BL) ^ l_132), 3)), g_13.f2)))) , p_46), p_46)) > g_6)))))) || p_47) <= (*l_122));
                g_193 = ((safe_rshift_func_uint8_t_u_u(0x5AL, 7)) , &g_58);
                if ((*p_49))
                    break;
            }
            for (g_187 = 0; (g_187 <= 0); g_187 += 1)
            {
                uint16_t **l_201 = &l_200;
                int16_t *l_212 = (void*)0;
                int16_t **l_213 = &l_212;
                struct S0 l_215 = {0x0684L,0x4F7AL,0xDD0333103EE402FCLL,18446744073709551615UL,0x3771L,1L,-4968};
                uint64_t *l_218[10];
                uint64_t l_235 = 18446744073709551610UL;
                int32_t ****l_241 = &l_224[1];
                int i;
                for (i = 0; i < 10; i++)
                    l_218[i] = &g_13.f2;
                if ((6UL > (((safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((((*l_201) = l_200) == l_202), (safe_rshift_func_int8_t_s_s(g_154[1], 6)))), (!(safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(p_46, (-1L))) > (safe_lshift_func_uint8_t_u_s(g_154[0], (((0xA3349E90ACFBF7B5LL & (((*l_213) = l_212) != l_214)) == 0xF6D627CF3F8CE4E9LL) ^ 0x1CF844EDL)))), 0x19E1L))))) & p_46) != 0xF3FEL)))
                {
                    uint32_t *l_222[4];
                    int32_t l_227[10] = {0x8CCBB781L,0x8CCBB781L,0x8CCBB781L,0x8CCBB781L,0x8CCBB781L,0x8CCBB781L,0x8CCBB781L,0x8CCBB781L,0x8CCBB781L,0x8CCBB781L};
                    struct S0 l_247[7] = {{65535UL,0x9AC9L,8UL,0xFC87E67C628EA8F4LL,65531UL,0x7B029217L,-988},{65535UL,0x9AC9L,8UL,0xFC87E67C628EA8F4LL,65531UL,0x7B029217L,-988},{65535UL,0x9AC9L,8UL,0xFC87E67C628EA8F4LL,65531UL,0x7B029217L,-988},{65535UL,0x9AC9L,8UL,0xFC87E67C628EA8F4LL,65531UL,0x7B029217L,-988},{65535UL,0x9AC9L,8UL,0xFC87E67C628EA8F4LL,65531UL,0x7B029217L,-988},{65535UL,0x9AC9L,8UL,0xFC87E67C628EA8F4LL,65531UL,0x7B029217L,-988},{65535UL,0x9AC9L,8UL,0xFC87E67C628EA8F4LL,65531UL,0x7B029217L,-988}};
                    int i;
                    for (i = 0; i < 4; i++)
                        l_222[i] = &g_181;
                    l_215 = l_215;
                    if (((((((l_182 < l_182) && ((((*l_122) = (g_146 == ((l_219 = l_218[3]) == (void*)0))) , ((~((p_47 & ((g_181 = (g_188[2] >= ((void*)0 != &g_154[1]))) && (*p_49))) , 0xE317D50ABDCF2520LL)) , l_223)) != &g_193)) , 0x7E7BF935L) ^ 8L) , (void*)0) != l_224[1]))
                    {
                        int16_t l_226 = 0xFFBBL;
                        if (l_225)
                            break;
                        l_226 |= ((*l_122) = (*p_49));
                    }
                    else
                    {
                        int32_t l_228 = 0L;
                        int64_t l_231 = 0x612C4D34D6390605LL;
                        int32_t l_234 = 8L;
                        int i, j, k;
                        (*l_122) ^= 0x1ED44951L;
                        if (l_215.f5)
                            continue;
                        l_235++;
                        (***l_223) = p_49;
                    }
                    for (g_220 = 0; (g_220 <= 44); g_220 = safe_add_func_int16_t_s_s(g_220, 8))
                    {
                        int32_t ****l_240 = &l_224[1];
                        uint8_t *l_246 = &g_57;
                        struct S0 *l_248 = (void*)0;
                        struct S0 *l_249 = &l_247[0];
                        (*l_122) &= ((l_240 = &g_193) == l_241);
                        p_48 = p_49;
                        (*l_249) = ((safe_mod_func_uint8_t_u_u(((*l_246) &= (((g_244 == &g_245) && (g_6 , (g_154[0] && p_47))) < g_13.f6)), l_227[7])) , l_247[0]);
                    }
                }
                else
                {
                    for (l_215.f0 = (-27); (l_215.f0 < 19); ++l_215.f0)
                    {
                        uint64_t l_252 = 0xAC969B5C3765FA4DLL;
                        ++l_252;
                        if ((*p_49))
                            continue;
                    }
                    if (l_215.f4)
                        continue;
                }
            }
        }
        l_257 = l_255;
        (**g_193) = &l_157;
    }
    if ((g_13.f0 && (safe_mod_func_int16_t_s_s((((*g_245) == (((safe_div_func_int64_t_s_s((((g_188[2] < (0x18L || g_181)) & (&p_49 == (void*)0)) < ((safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((((*l_276) = ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((((safe_mod_func_int32_t_s_s((p_46 ^ (l_274 != &g_184)), g_13.f6)) && p_47) || l_275[7]) , p_47), 6)), g_13.f2)) || 4L)) == g_13.f3), (*p_49))), 7)) , 4294967287UL)), 0x45E32B3647BB7FCCLL)) >= p_46) > 0UL)) > 0x1BC6L), (*g_245)))))
    {
        uint32_t l_279 = 0x4190295BL;
        int32_t l_280 = 0xA2B4AD35L;
        int32_t ** const *l_292[5] = {&g_58,&g_58,&g_58,&g_58,&g_58};
        uint32_t *** const *l_365 = (void*)0;
        uint32_t **l_385 = &l_274;
        uint64_t *l_392 = &g_220;
        uint32_t l_482 = 0UL;
        uint8_t l_483[4][7] = {{0xB0L,0xB7L,0xB7L,0xB0L,0xB7L,0xB7L,0xB0L},{0xB7L,0xB0L,0xB7L,0xB7L,0xB0L,0xB7L,0xB7L},{0xB0L,0xB0L,0xC5L,0xB0L,0xB0L,0xB0L,0xB7L},{0xB7L,0xC5L,0xC5L,0xB7L,0xC5L,0xC5L,0xB7L}};
        uint8_t l_516 = 0xEDL;
        uint32_t ****l_522 = &l_441;
        struct S0 l_557 = {0x4613L,0L,0UL,1UL,0x9DB6L,0xAC62F9ABL,-1410};
        int8_t l_649[8];
        int i, j;
        for (i = 0; i < 8; i++)
            l_649[i] = 0xB9L;
lbl_341:
        l_280 &= (safe_lshift_func_uint8_t_u_u(l_279, 7));
        for (p_46 = (-11); (p_46 > 38); p_46 = safe_add_func_uint64_t_u_u(p_46, 1))
        {
            uint64_t l_293 = 0x5E46161DA2793B3BLL;
            uint32_t l_319 = 0xB6D0C135L;
            int32_t l_352 = (-1L);
            int32_t l_353 = 0xD83B7224L;
            int32_t l_354 = 0x9B24927DL;
            int32_t l_355 = 0L;
            uint16_t l_356 = 6UL;
            uint32_t ****l_367 = (void*)0;
            int32_t ***l_436[1];
            uint64_t l_486 = 0x3449A3642B52DAA0LL;
            uint64_t l_515 = 1UL;
            uint32_t ***l_543 = &g_387;
            uint32_t ****l_542 = &l_543;
            const int32_t *l_573[10] = {&l_353,&l_353,&l_353,&l_353,&l_353,&l_353,&l_353,&l_353,&l_353,&l_353};
            struct S0 l_580 = {0x7B48L,0x8104L,18446744073709551607UL,18446744073709551606UL,0xC0BAL,0xA18642A5L,6755};
            uint8_t l_635[1][2][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_436[i] = &g_58;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_635[i][j][k] = 0xADL;
                }
            }
            for (l_132 = 0; (l_132 < 41); l_132++)
            {
                uint32_t ***l_287 = (void*)0;
                uint32_t ***l_288 = (void*)0;
                uint32_t ***l_289 = &g_285;
                struct S0 *l_290[9][8][1] = {{{&l_257},{&g_13},{&l_257},{&g_13},{&l_257},{&l_257},{&l_257},{&g_13}},{{&g_13},{&g_13},{&g_13},{&l_257},{&l_257},{&l_257},{&g_13},{&l_257}},{{&g_13},{&l_257},{&l_257},{&l_257},{&g_13},{&g_13},{&g_13},{&g_13}},{{&l_257},{&l_257},{&l_257},{&g_13},{&l_257},{&g_13},{&l_257},{&l_257}},{{&l_257},{&g_13},{&g_13},{&g_13},{&g_13},{&l_257},{&l_257},{&l_257}},{{&g_13},{&l_257},{&g_13},{&l_257},{&l_257},{&l_257},{&g_13},{&g_13}},{{&g_13},{&g_13},{&l_257},{&l_257},{&l_257},{&g_13},{&l_257},{&g_13}},{{&l_257},{&l_257},{&l_257},{&g_13},{&g_13},{&g_13},{&g_13},{&l_257}},{{&l_257},{&l_257},{&g_13},{&l_257},{&g_13},{&l_257},{&l_257},{&l_257}}};
                int i, j, k;
                (*l_289) = g_285;
                g_291[0][3][3] = l_257;
            }
            if ((l_293 ^= ((void*)0 == l_292[2])))
            {
                const struct S0 l_324[4] = {{0x2B14L,0xED04L,0x91B9CB3088F5452ELL,0UL,0xA088L,0x07F98C77L,-5930},{0x2B14L,0xED04L,0x91B9CB3088F5452ELL,0UL,0xA088L,0x07F98C77L,-5930},{0x2B14L,0xED04L,0x91B9CB3088F5452ELL,0UL,0xA088L,0x07F98C77L,-5930},{0x2B14L,0xED04L,0x91B9CB3088F5452ELL,0UL,0xA088L,0x07F98C77L,-5930}};
                uint32_t ** const *l_342 = &g_285;
                int32_t l_349 = 0x676D68D6L;
                int32_t l_350[5] = {(-2L),(-2L),(-2L),(-2L),(-2L)};
                int i;
                for (g_181 = 20; (g_181 <= 44); g_181++)
                {
                    p_49 = p_49;
                }
                for (l_279 = (-24); (l_279 >= 7); l_279 = safe_add_func_uint64_t_u_u(l_279, 3))
                {
                    uint16_t l_322 = 0xF420L;
                    struct S0 l_323 = {9UL,0L,0UL,0x7031BFC02F5E8996LL,8UL,1L,1438};
                    uint32_t *l_340 = &g_184;
                    uint32_t ** const **l_343 = &l_342;
                    uint32_t ** const *l_345 = &g_285;
                    uint32_t ** const **l_344 = &l_345;
                    if ((safe_lshift_func_int8_t_s_s((p_47 , (((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((**g_244) >= (safe_mul_func_uint16_t_u_u((((+(safe_div_func_int16_t_s_s(p_46, (l_293 & (((safe_rshift_func_uint16_t_u_s((g_291[0][3][3].f4 ^= 0xDAE8L), 11)) >= ((((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s(p_47, (!l_319))), ((safe_rshift_func_int16_t_s_u(0x44F1L, 7)) , l_293))))) , &g_184) == (void*)0) > l_322)) ^ 0x68L))))) && (-4L)) & l_319), p_47))), (*g_245))), 0x23C30839L)), g_13.f5)) , 0xA67B4F66L) || p_46)), 6)))
                    {
                        return l_323;
                    }
                    else
                    {
                        struct S0 *l_325 = &l_257;
                        int32_t l_332 = (-2L);
                        int32_t l_333[4][5][8] = {{{2L,0xF3137693L,0x2416CB1CL,0x2A1E5462L,0x2416CB1CL,0xF3137693L,2L,0xB995970DL},{(-1L),6L,0x4C672D69L,0L,0x7E1C385CL,0xB995970DL,0L,(-3L)},{0xE63B7FDEL,(-7L),0L,0x976597AFL,0x7E1C385CL,0xFAE8A57FL,(-1L),0x2A1E5462L},{(-1L),0x2A1E5462L,0L,(-3L),0x2416CB1CL,(-7L),0x4C672D69L,2L},{2L,(-5L),7L,(-7L),0x20555534L,(-7L),7L,(-5L)}},{{1L,0x2A1E5462L,0L,(-10L),(-1L),0xFAE8A57FL,0x2416CB1CL,0xDF443716L},{0x5A454E62L,(-7L),0x7E1C385CL,6L,1L,0xB995970DL,0x2416CB1CL,0x976597AFL},{0x2416CB1CL,6L,0L,0xFAE8A57FL,0xDDBA5227L,0xF3137693L,7L,0x767FC0F5L},{0xDDBA5227L,0xF3137693L,7L,0x767FC0F5L,0x4C672D69L,0x976597AFL,0x4C672D69L,0x767FC0F5L},{0L,2L,0L,0xFAE8A57FL,0L,(-5L),(-1L),0x976597AFL}},{{(-1L),0L,0L,6L,7L,0L,0L,0xDF443716L},{(-1L),1L,7L,0xB995970DL,0L,0x767FC0F5L,0xE63B7FDEL,(-3L)},{0L,6L,2L,(-5L),7L,(-7L),0x20555534L,(-7L)},{0L,6L,0xE63B7FDEL,6L,0L,0x767FC0F5L,1L,(-10L)},{2L,0xDF443716L,0L,0L,0L,2L,0x2416CB1CL,6L}},{{0x20555534L,1L,0L,0xF3137693L,0x4C672D69L,(-3L),1L,0xFAE8A57FL},{0L,(-7L),0xE63B7FDEL,(-10L),0x2416CB1CL,0L,0x20555534L,0x767FC0F5L},{0xE63B7FDEL,0L,2L,(-10L),2L,0L,0xE63B7FDEL,0xFAE8A57FL},{0x4C672D69L,0x767FC0F5L,7L,0xF3137693L,0xDDBA5227L,0xFAE8A57FL,0L,6L},{(-1L),(-5L),(-1L),0L,0xDDBA5227L,0L,0x5A454E62L,(-10L)}}};
                        uint32_t **l_338 = (void*)0;
                        uint32_t **l_339 = &l_274;
                        int i, j, k;
                        (*l_325) = l_324[0];
                        l_332 = (safe_div_func_uint32_t_u_u((((*g_245) | (safe_div_func_int64_t_s_s((safe_div_func_int16_t_s_s((l_333[3][2][6] |= l_332), (**g_244))), (7UL || (safe_mul_func_int16_t_s_s((0L != (safe_add_func_int32_t_s_s(((*p_48) || ((((*l_339) = (void*)0) == l_340) >= (1UL < g_75))), (*p_48)))), g_74)))))) == (-1L)), l_293));
                        if (l_257.f5)
                            goto lbl_341;
                    }
                    (*l_344) = ((*l_343) = l_342);
                }
                l_349 &= (g_6 <= (safe_div_func_int8_t_s_s(g_154[0], l_348)));
                ++l_356;
            }
            else
            {
                uint32_t *** const **l_366 = &l_365;
                struct S0 l_378[10][1][7] = {{{{0xB853L,0x5649L,18446744073709551610UL,18446744073709551615UL,0xF973L,0x0A3413CFL,7552},{65535UL,1L,18446744073709551615UL,1UL,0x34DEL,0L,-10820},{65535UL,-1L,1UL,0x3B4B8722DBC187ACLL,0xB2DBL,0xAA0DB085L,-14273},{0xB671L,-4L,0xFFACCB4F9CFB12D9LL,0UL,0UL,0x5C3BD3D9L,4144},{65530UL,6L,0x23DCB5FB8BDD0EB8LL,0x2800B51BC157B25BLL,0x2C8DL,0x74819134L,-10187},{0UL,8L,0x1D33DDA98BC18B6CLL,0UL,0x0F27L,4L,13681},{65532UL,-1L,18446744073709551606UL,18446744073709551615UL,0UL,0x42387D95L,5307}}},{{{65527UL,-1L,0x531B9809EB5BE354LL,0x0A62D9222CCB60AALL,65533UL,-5L,-2788},{1UL,0L,18446744073709551615UL,18446744073709551612UL,0xD2FFL,0x09544605L,-9577},{0xE1A0L,-10L,0x1A4AA381EEB869F0LL,0x853F57A4429F5E57LL,1UL,-7L,7366},{6UL,-1L,8UL,0xCA80E5810E25FBF8LL,0x6511L,0x5CD829BEL,13756},{6UL,-1L,8UL,0xCA80E5810E25FBF8LL,0x6511L,0x5CD829BEL,13756},{0xE1A0L,-10L,0x1A4AA381EEB869F0LL,0x853F57A4429F5E57LL,1UL,-7L,7366},{1UL,0L,18446744073709551615UL,18446744073709551612UL,0xD2FFL,0x09544605L,-9577}}},{{{0xB853L,0x5649L,18446744073709551610UL,18446744073709551615UL,0xF973L,0x0A3413CFL,7552},{65535UL,1L,18446744073709551615UL,1UL,0x34DEL,0L,-10820},{65535UL,-1L,1UL,0x3B4B8722DBC187ACLL,0xB2DBL,0xAA0DB085L,-14273},{0xB671L,-4L,0xFFACCB4F9CFB12D9LL,0UL,0UL,0x5C3BD3D9L,4144},{65530UL,6L,0x23DCB5FB8BDD0EB8LL,0x2800B51BC157B25BLL,0x2C8DL,0x74819134L,-10187},{0UL,8L,0x1D33DDA98BC18B6CLL,0UL,0x0F27L,4L,13681},{65532UL,-1L,18446744073709551606UL,18446744073709551615UL,0UL,0x42387D95L,5307}}},{{{65527UL,-1L,0x531B9809EB5BE354LL,0x0A62D9222CCB60AALL,65533UL,-5L,-2788},{1UL,0L,18446744073709551615UL,18446744073709551612UL,0xD2FFL,0x09544605L,-9577},{0xE1A0L,-10L,0x1A4AA381EEB869F0LL,0x853F57A4429F5E57LL,1UL,-7L,7366},{6UL,-1L,8UL,0xCA80E5810E25FBF8LL,0x6511L,0x5CD829BEL,13756},{6UL,-1L,8UL,0xCA80E5810E25FBF8LL,0x6511L,0x5CD829BEL,13756},{0xE1A0L,-10L,0x1A4AA381EEB869F0LL,0x853F57A4429F5E57LL,1UL,-7L,7366},{1UL,0L,18446744073709551615UL,18446744073709551612UL,0xD2FFL,0x09544605L,-9577}}},{{{0xB853L,0x5649L,18446744073709551610UL,18446744073709551615UL,0xF973L,0x0A3413CFL,7552},{65535UL,1L,18446744073709551615UL,1UL,0x34DEL,0L,-10820},{65535UL,-1L,1UL,0x3B4B8722DBC187ACLL,0xB2DBL,0xAA0DB085L,-14273},{0xB671L,-4L,0xFFACCB4F9CFB12D9LL,0UL,0UL,0x5C3BD3D9L,4144},{65530UL,6L,0x23DCB5FB8BDD0EB8LL,0x2800B51BC157B25BLL,0x2C8DL,0x74819134L,-10187},{0UL,8L,0x1D33DDA98BC18B6CLL,0UL,0x0F27L,4L,13681},{65532UL,-1L,18446744073709551606UL,18446744073709551615UL,0UL,0x42387D95L,5307}}},{{{65527UL,-1L,0x531B9809EB5BE354LL,0x0A62D9222CCB60AALL,65533UL,-5L,-2788},{1UL,0L,18446744073709551615UL,18446744073709551612UL,0xD2FFL,0x09544605L,-9577},{0xE1A0L,-10L,0x1A4AA381EEB869F0LL,0x853F57A4429F5E57LL,1UL,-7L,7366},{6UL,-1L,8UL,0xCA80E5810E25FBF8LL,0x6511L,0x5CD829BEL,13756},{6UL,-1L,8UL,0xCA80E5810E25FBF8LL,0x6511L,0x5CD829BEL,13756},{0xE1A0L,-10L,0x1A4AA381EEB869F0LL,0x853F57A4429F5E57LL,1UL,-7L,7366},{1UL,0L,18446744073709551615UL,18446744073709551612UL,0xD2FFL,0x09544605L,-9577}}},{{{0xB853L,0x5649L,18446744073709551610UL,18446744073709551615UL,0xF973L,0x0A3413CFL,7552},{65535UL,1L,18446744073709551615UL,1UL,0x34DEL,0L,-10820},{65535UL,-1L,1UL,0x3B4B8722DBC187ACLL,0xB2DBL,0xAA0DB085L,-14273},{0xB671L,-4L,0xFFACCB4F9CFB12D9LL,0UL,0UL,0x5C3BD3D9L,4144},{65530UL,6L,0x23DCB5FB8BDD0EB8LL,0x2800B51BC157B25BLL,0x2C8DL,0x74819134L,-10187},{0UL,8L,0x1D33DDA98BC18B6CLL,0UL,0x0F27L,4L,13681},{65532UL,-1L,18446744073709551606UL,18446744073709551615UL,0UL,0x42387D95L,5307}}},{{{65527UL,-1L,0x531B9809EB5BE354LL,0x0A62D9222CCB60AALL,65533UL,-5L,-2788},{1UL,0L,18446744073709551615UL,18446744073709551612UL,0xD2FFL,0x09544605L,-9577},{0xE1A0L,-10L,0x1A4AA381EEB869F0LL,0x853F57A4429F5E57LL,1UL,-7L,7366},{6UL,-1L,8UL,0xCA80E5810E25FBF8LL,0x6511L,0x5CD829BEL,13756},{6UL,-1L,8UL,0xCA80E5810E25FBF8LL,0x6511L,0x5CD829BEL,13756},{0xE1A0L,-10L,0x1A4AA381EEB869F0LL,0x853F57A4429F5E57LL,1UL,-7L,7366},{1UL,0L,18446744073709551615UL,18446744073709551612UL,0xD2FFL,0x09544605L,-9577}}},{{{0xB853L,0x5649L,18446744073709551610UL,18446744073709551615UL,0xF973L,0x0A3413CFL,7552},{65535UL,1L,18446744073709551615UL,1UL,0x34DEL,0L,-10820},{65535UL,-1L,1UL,0x3B4B8722DBC187ACLL,0xB2DBL,0xAA0DB085L,-14273},{0xB671L,-4L,0xFFACCB4F9CFB12D9LL,0UL,0UL,0x5C3BD3D9L,4144},{65530UL,6L,0x23DCB5FB8BDD0EB8LL,0x2800B51BC157B25BLL,0x2C8DL,0x74819134L,-10187},{0UL,8L,0x1D33DDA98BC18B6CLL,0UL,0x0F27L,4L,13681},{65532UL,-1L,18446744073709551606UL,18446744073709551615UL,0UL,0x42387D95L,5307}}},{{{65527UL,-1L,0x531B9809EB5BE354LL,0x0A62D9222CCB60AALL,65533UL,-5L,-2788},{1UL,0L,18446744073709551615UL,18446744073709551612UL,0xD2FFL,0x09544605L,-9577},{0xE1A0L,-10L,0x1A4AA381EEB869F0LL,0x853F57A4429F5E57LL,1UL,-7L,7366},{6UL,-1L,8UL,0xCA80E5810E25FBF8LL,0x6511L,0x5CD829BEL,13756},{6UL,-1L,8UL,0xCA80E5810E25FBF8LL,0x6511L,0x5CD829BEL,13756},{0xE1A0L,-10L,0x1A4AA381EEB869F0LL,0x853F57A4429F5E57LL,1UL,-7L,7366},{1UL,0L,18446744073709551615UL,18446744073709551612UL,0xD2FFL,0x09544605L,-9577}}}};
                uint32_t ***l_386 = &l_385;
                const int16_t l_389 = 0x19ADL;
                int64_t *l_442[9][6] = {{&g_6,&g_6,(void*)0,&g_6,&g_6,&g_6},{&g_6,&g_6,&g_6,(void*)0,&g_6,&g_6},{&g_6,&g_6,(void*)0,&g_6,&g_6,&g_6},{(void*)0,&g_6,&g_6,&g_6,&g_6,(void*)0},{&g_6,&g_6,&g_6,(void*)0,&g_6,&g_6},{&g_6,&g_6,(void*)0,&g_6,&g_6,&g_6},{&g_6,&g_6,&g_6,(void*)0,&g_6,&g_6},{&g_6,&g_6,(void*)0,&g_6,&g_6,&g_6},{(void*)0,&g_6,&g_6,&g_6,&g_6,&g_6}};
                int32_t l_487 = 0xF57CA1BDL;
                uint16_t *l_501 = &l_356;
                uint16_t **l_500[5][2] = {{&l_501,&l_501},{(void*)0,&l_501},{&l_501,&l_501},{(void*)0,&l_501},{&l_501,&l_501}};
                int32_t l_588 = (-9L);
                int32_t l_589 = (-3L);
                int32_t l_591 = 0x8BD9B33DL;
                int32_t l_592 = 0x48E94169L;
                uint32_t l_594 = 0xECE5C807L;
                int i, j, k;
                if (((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(p_47, p_46)), 0)) || (((((((*l_366) = l_365) == l_367) > (g_13.f1 , (safe_add_func_int32_t_s_s((l_352 = (((safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((l_354 && (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((l_378[8][0][5] , (safe_div_func_uint32_t_u_u((safe_add_func_int64_t_s_s((safe_mod_func_int64_t_s_s(((((*l_386) = l_385) == g_387) > g_57), 18446744073709551608UL)), p_46)), p_46))), p_47)), 1))) || g_184), l_378[8][0][5].f2)), (-7L))) & l_389) >= (-1L))), l_353)))) | g_74) ^ (*g_245)) , g_184)), 7)) & l_354))
                {
                    return g_291[0][3][3];
                }
                else
                {
                    uint64_t **l_393 = &l_392;
                    uint16_t *l_411 = &g_291[0][3][3].f4;
                    uint16_t *l_414[10][2] = {{&l_378[8][0][5].f4,&g_75},{&l_378[8][0][5].f4,&g_75},{&l_378[8][0][5].f4,&g_75},{&l_378[8][0][5].f4,&g_75},{&l_378[8][0][5].f4,&g_75},{&l_378[8][0][5].f4,&g_75},{&l_378[8][0][5].f4,&g_75},{&l_378[8][0][5].f4,&g_75},{&l_378[8][0][5].f4,&g_75},{&l_378[8][0][5].f4,&g_75}};
                    int32_t l_424[3];
                    int16_t *l_425 = (void*)0;
                    int16_t *l_426 = &l_232[0][3][0];
                    uint8_t *l_427[9] = {&l_406,&l_406,&l_406,&l_406,&l_406,&l_406,&l_406,&l_406,&l_406};
                    const struct S0 l_429[9] = {{1UL,-1L,6UL,1UL,0xDCDDL,-1L,-10111},{1UL,-1L,6UL,1UL,0xDCDDL,-1L,-10111},{1UL,-1L,6UL,1UL,0xDCDDL,-1L,-10111},{1UL,-1L,6UL,1UL,0xDCDDL,-1L,-10111},{1UL,-1L,6UL,1UL,0xDCDDL,-1L,-10111},{1UL,-1L,6UL,1UL,0xDCDDL,-1L,-10111},{1UL,-1L,6UL,1UL,0xDCDDL,-1L,-10111},{1UL,-1L,6UL,1UL,0xDCDDL,-1L,-10111},{1UL,-1L,6UL,1UL,0xDCDDL,-1L,-10111}};
                    int64_t *l_433 = (void*)0;
                    int64_t *l_434 = &g_6;
                    int32_t ****l_435 = &l_224[0];
                    int32_t ****l_437 = &l_436[0];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_424[i] = 0xDD8CB413L;
                    l_355 |= (((**g_285) || p_47) == ((((safe_mul_func_int8_t_s_s((((*l_393) = l_392) != &l_293), (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((g_428[4] = (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((l_352 = (((*l_426) = ((safe_mul_func_uint16_t_u_u(l_406, (safe_lshift_func_int8_t_s_u((248UL && (g_57 = (safe_add_func_uint16_t_u_u((++(*l_411)), (--g_291[0][3][3].f0))))), ((safe_add_func_int16_t_s_s(((safe_add_func_int16_t_s_s((p_47 != (-2L)), ((((safe_mod_func_uint8_t_u_u((~(l_424[0] = (l_378[8][0][5].f5 < 0xAA58L))), p_47)) >= 0x69E38981L) , 8L) <= 1L))) | p_46), 0L)) , 0x16L))))) , p_47)) ^ p_46)), g_6)), 10)) > (*p_48)), g_13.f0))), 2)), g_13.f2)))) < 1UL) , l_429[0]) , (*p_49)));
                    l_355 = (safe_add_func_int32_t_s_s((l_352 = (*p_49)), (((*l_435) = (((*l_434) = (!(**g_285))) , &g_58)) == ((*l_437) = l_436[0]))));
                }
                if (((&p_48 == (void*)0) < ((*l_276) = (safe_sub_func_int64_t_s_s(g_291[0][3][3].f2, (g_6 = (l_378[8][0][5].f5 = (~((void*)0 == l_441)))))))))
                {
                    uint64_t *l_461[7] = {&g_13.f2,&l_293,&g_13.f2,&g_13.f2,&l_293,&g_13.f2,&g_13.f2};
                    const int32_t l_474 = 0L;
                    int16_t *l_484 = (void*)0;
                    int16_t *l_485 = &l_378[8][0][5].f1;
                    int16_t *l_511 = &g_154[0];
                    int32_t l_512[8] = {0x2ACE2FDBL,0x2ACE2FDBL,0xC6745617L,0x2ACE2FDBL,0x2ACE2FDBL,0xC6745617L,0x2ACE2FDBL,0x2ACE2FDBL};
                    int64_t l_513 = (-1L);
                    uint8_t l_520[9][4] = {{6UL,255UL,6UL,6UL},{255UL,255UL,0UL,255UL},{255UL,6UL,6UL,255UL},{6UL,255UL,6UL,6UL},{255UL,255UL,0UL,255UL},{255UL,6UL,6UL,255UL},{6UL,255UL,6UL,6UL},{255UL,255UL,0UL,255UL},{255UL,6UL,6UL,255UL}};
                    int32_t l_538 = 0x34D9A9D9L;
                    int32_t l_541[2][7][3] = {{{0xC8454C82L,2L,0x6601E1C6L},{4L,0x81D50A4FL,(-9L)},{0x3E43AFF5L,0x3E43AFF5L,2L},{0x3E43AFF5L,0xBB524E32L,0xC8454C82L},{4L,0L,0x09BAD08FL},{0xC8454C82L,0x6601E1C6L,4L},{1L,4L,0x09BAD08FL}},{{0xB1951718L,(-1L),0xC8454C82L},{2L,0L,2L},{2L,0L,(-9L)},{(-9L),(-1L),0x6601E1C6L},{0L,4L,0x3E43AFF5L},{0x81D50A4FL,0x6601E1C6L,(-1L)},{0L,0L,6L}}};
                    int i, j, k;
                    l_378[8][0][5].f5 &= (l_487 = (safe_rshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(p_46, ((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(0x3B35133EL, ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((void*)0 != l_461[4]), (safe_mul_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(g_428[4], 0x07L)) | (safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((((*l_485) = (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(l_474, (safe_sub_func_uint8_t_u_u((((g_13.f5 == (~(safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((l_483[1][0] = l_482) || (*p_49)), l_474)), (**g_244))))) , 0x1BD51D61L) | p_46), p_46)))), p_47))) >= l_486), 1L)) ^ p_47), g_78))) ^ p_46), g_13.f0)))), 15)), g_154[0])) && p_47))), 0x12EA7D0AL)) && 0x1F84AD64L))), g_123)) > 0x27CAD426353488CELL), g_146)) < g_220), 1)));
                    p_48 = ((((((*l_485) = p_46) & ((l_515 |= ((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_378[8][0][5].f6, (safe_lshift_func_int16_t_s_u((((void*)0 == l_500[2][0]) || ((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s((l_512[2] |= (l_378[8][0][5].f5 = (g_13.f2 < (safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(((void*)0 != &g_220), ((((*l_511) ^= (((*l_501) = 7UL) , p_47)) != 0x183FL) < p_46))) && 0x9E60072C20F67358LL), l_378[8][0][5].f0))))))), 13)), l_513)) <= g_13.f5)), 0)))), 0x22L)), (*g_245))), g_291[0][3][3].f3)), l_514)) , (-2L))) <= 1UL)) >= (**g_285)) && 0UL) , p_49);
                    if (l_516)
                    {
                        int8_t l_517 = 0L;
                        int32_t l_537 = 0L;
                        l_512[2] = (g_291[0][3][3] , (l_517 ^= (*p_49)));
                        l_378[8][0][5].f5 = (l_541[1][1][0] |= ((((safe_unary_minus_func_uint64_t_u((+l_520[6][0]))) > (((g_521 == l_522) >= ((safe_lshift_func_int8_t_s_u((((((safe_sub_func_int32_t_s_s((*p_49), ((safe_add_func_uint32_t_u_u((((*l_511) = (safe_mod_func_int8_t_s_s((((((g_123 , (l_538 &= ((safe_rshift_func_uint16_t_u_s(l_517, 5)) <= ((((safe_lshift_func_int16_t_s_s((p_46 , (((0x42B9C000E5129237LL & (safe_lshift_func_int8_t_s_s((((l_537 = (((l_512[2] = g_13.f4) >= p_46) , p_47)) & g_78) , 1L), 5))) , p_45) != (void*)0)), p_46)) | g_13.f1) , 0xC7L) & g_220)))) | (*p_49)) >= 0UL) || (-7L)) & g_146), g_291[0][3][3].f1))) > 7UL), 0x06EC776BL)) && l_537))) , 1UL) ^ l_539) < g_146) | 0UL), g_540)) && 65535UL)) | 0x74L)) <= (*g_286)) , (*p_49)));
                    }
                    else
                    {
                        uint32_t *****l_544 = &l_542;
                        int32_t ****l_552 = &l_224[1];
                        struct S0 **l_558 = (void*)0;
                        struct S0 *l_560[3];
                        struct S0 **l_559 = &l_560[2];
                        const int32_t **l_572 = (void*)0;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_560[i] = &l_557;
                        if ((*p_49))
                            break;
                        (*l_544) = (g_540 , l_542);
                        l_538 &= ((+p_47) ^ (safe_mod_func_uint8_t_u_u((g_57 ^= (safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s((p_46 > (((*l_552) = &g_58) != &g_58)), ((p_46 < g_146) >= (safe_mul_func_uint16_t_u_u(g_181, 7UL))))), ((safe_rshift_func_uint16_t_u_u(((l_557 , 1L) & g_291[0][3][3].f2), g_187)) , (*p_48))))), 0x6AL)));
                        l_573[1] = (((((&g_13 == ((*l_559) = &l_257)) , (((void*)0 == l_461[4]) != (p_47 == ((*p_48) == (((safe_rshift_func_uint16_t_u_u(((*l_501) &= (safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((&g_58 != ((*l_552) = &g_58)), ((((+(l_512[2] = (((*p_48) , 0UL) > 0x2EED9845L))) && p_46) >= g_291[0][3][3].f5) < l_520[6][0]))), 4UL)), p_46))), 4)) || 0x672DL) , (*g_286)))))) , g_13.f1) ^ p_47) , p_48);
                    }
                    for (g_181 = 0; (g_181 <= 0); g_181 += 1)
                    {
                        uint64_t l_574 = 0UL;
                        l_574--;
                        l_541[1][4][0] = (g_291[0][3][3] , 3L);
                        if ((*p_49))
                            break;
                        if (l_538)
                            continue;
                    }
                }
                else
                {
                    return l_378[2][0][4];
                }
                for (l_257.f2 = 0; (l_257.f2 >= 39); l_257.f2 = safe_add_func_uint32_t_u_u(l_257.f2, 9))
                {
                    int32_t *l_579 = (void*)0;
                    struct S0 *l_581[5] = {&l_557,&l_557,&l_557,&l_557,&l_557};
                    int32_t l_585 = (-9L);
                    int32_t l_586 = 0x96D4D14AL;
                    int64_t l_587[3];
                    int32_t l_590 = 0L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_587[i] = 0x61B370E6A587B327LL;
                    (*g_58) = l_579;
                    l_582 = l_580;
                    for (l_225 = 0; (l_225 >= 4); ++l_225)
                    {
                        (**g_193) = p_49;
                    }
                    l_594++;
                }
            }
            for (l_582.f2 = (-14); (l_582.f2 > 33); l_582.f2 = safe_add_func_uint16_t_u_u(l_582.f2, 5))
            {
                int16_t *l_609 = (void*)0;
                int16_t *l_610 = &l_257.f1;
                uint64_t **l_624 = &l_392;
                int32_t l_634[7] = {0x295CDDD0L,8L,8L,0x295CDDD0L,8L,8L,0x295CDDD0L};
                int i;
                if (((safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_291[0][3][3].f2, 10)), (p_47 ^ (safe_rshift_func_uint8_t_u_s(p_46, ((*l_276) = g_13.f0)))))), (g_291[0][3][3].f1 == (safe_lshift_func_int16_t_s_s((*g_245), ((*l_610) = ((p_46 < ((void*)0 != &g_245)) && (*p_49)))))))) > (**g_285)))
                {
                    uint32_t l_611 = 18446744073709551611UL;
                    ++l_611;
                    if ((safe_add_func_int32_t_s_s(0xD9816FF0L, (((safe_lshift_func_uint16_t_u_u((l_618 != &l_619), 14)) > g_187) | 1UL))))
                    {
                        struct S0 *l_623 = &g_291[0][3][3];
                        struct S0 **l_622 = &l_623;
                        (*l_622) = &l_580;
                        return g_13;
                    }
                    else
                    {
                        uint8_t *l_627 = (void*)0;
                        uint8_t *l_628 = &l_516;
                        uint64_t *l_633[6][5][3] = {{{&l_257.f2,&g_146,(void*)0},{&l_257.f3,&l_557.f3,&g_146},{&l_580.f3,&l_257.f2,(void*)0},{(void*)0,&l_557.f3,(void*)0},{&l_257.f2,(void*)0,(void*)0}},{{(void*)0,&g_146,&g_146},{(void*)0,&l_580.f3,(void*)0},{&g_13.f2,&l_557.f3,&l_557.f3},{(void*)0,&g_13.f2,&l_557.f3},{(void*)0,&l_557.f3,&l_557.f3}},{{&l_257.f2,&l_257.f2,(void*)0},{(void*)0,&l_557.f3,(void*)0},{(void*)0,&g_146,&g_13.f2},{&l_557.f3,&g_146,&l_557.f3},{&l_580.f3,(void*)0,&g_13.f2}},{{&g_13.f2,&l_557.f3,(void*)0},{&l_515,&l_557.f3,&l_557.f3},{&l_257.f3,&g_146,&l_293},{&l_515,&l_257.f2,(void*)0},{&g_13.f2,&l_580.f3,&g_291[0][3][3].f3}},{{&l_580.f3,(void*)0,&l_557.f3},{&l_557.f3,&l_580.f3,&l_257.f3},{(void*)0,&l_257.f2,&g_13.f2},{&l_557.f3,&g_146,&l_557.f3},{&l_580.f3,&l_557.f3,&g_13.f2}},{{&g_146,&l_557.f3,&l_257.f3},{&l_515,(void*)0,&l_557.f3},{(void*)0,&g_146,&g_291[0][3][3].f3},{&l_515,&g_146,(void*)0},{&g_146,&l_580.f3,&l_293}}};
                        int32_t l_636 = 7L;
                        uint16_t *l_637 = &l_582.f0;
                        uint16_t *l_638 = &l_257.f4;
                        int i, j, k;
                        l_636 = (((*l_638) = ((*l_637) = (((((void*)0 == l_624) && ((safe_rshift_func_int16_t_s_u(((++(*l_628)) , (*g_245)), (l_611 == (((*l_392) = p_46) | (safe_unary_minus_func_int16_t_s((4294967294UL >= (+4294967294UL)))))))) ^ (l_634[2] = 0xD48EB54A8DEA2B34LL))) < l_635[0][0][0]) < l_636))) > p_46);
                        l_634[1] ^= (&l_436[0] == (void*)0);
                        if ((*p_48))
                            continue;
                    }
                    return l_257;
                }
                else
                {
                    uint32_t *****l_640 = &l_367;
                    uint16_t *l_642 = &g_291[0][3][3].f0;
                    int32_t l_647 = (-1L);
                    int32_t l_648[3][9] = {{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L}};
                    int i, j;
                    l_649[5] = (l_648[2][5] &= ((~((*l_642) |= (((&l_441 == ((*l_640) = (void*)0)) >= (((*l_610) = (p_47 , ((g_641 = &g_6) != l_392))) && 0x3935L)) , 1UL))) >= ((safe_mod_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u((p_47 , 18446744073709551615UL), p_47)) || p_46), l_647)) && (-1L))));
                    p_49 = g_650;
                }
            }
            for (l_486 = 0; l_486 < 2; l_486 += 1)
            {
                g_154[l_486] = (-1L);
            }
        }
    }
    else
    {
        struct S0 *l_652 = &g_291[0][1][4];
        struct S0 **l_651 = &l_652;
        (*l_651) = &g_13;
        g_291[0][3][3] = g_13;
    }
    (*l_654) = l_582;
    return g_291[0][4][1];
}







static uint8_t * func_50(int32_t ** p_51, uint8_t * p_52, int32_t ** p_53, int64_t p_54, const uint32_t p_55)
{
    uint16_t l_66[8][7] = {{0xDCC2L,0xC691L,0x6A6CL,1UL,65532UL,1UL,0x3856L},{0x33B8L,65533UL,4UL,4UL,65533UL,0x33B8L,8UL},{0xDCC2L,0xC691L,0x6A6CL,1UL,65532UL,1UL,0x3856L},{0x33B8L,65533UL,4UL,4UL,65533UL,0x33B8L,8UL},{0xDCC2L,0xC691L,0x6A6CL,1UL,65532UL,1UL,0x3856L},{0x33B8L,65533UL,4UL,4UL,65533UL,0x33B8L,8UL},{0xDCC2L,0xC691L,0x6A6CL,1UL,65532UL,1UL,0x3856L},{0x33B8L,65533UL,4UL,4UL,65533UL,0x33B8L,8UL}};
    int32_t l_71 = 0x71EB1C26L;
    uint64_t *l_72[9] = {&g_13.f2,&g_13.f2,&g_13.f2,&g_13.f2,&g_13.f2,&g_13.f2,&g_13.f2,&g_13.f2,&g_13.f2};
    int32_t l_73[8][5] = {{0L,0x2E7A53CCL,0x0DB1B793L,0xC40293E9L,7L},{0L,0xC40293E9L,(-1L),0xC40293E9L,0L},{7L,0xC40293E9L,0x0DB1B793L,0x2E7A53CCL,0L},{0L,0x2E7A53CCL,0x0DB1B793L,0xC40293E9L,7L},{0L,0xC40293E9L,(-1L),0xC40293E9L,0L},{7L,0xC40293E9L,0x0DB1B793L,0x2E7A53CCL,0L},{0L,0x2E7A53CCL,0x0DB1B793L,0xC40293E9L,7L},{0L,0xC40293E9L,(-1L),0xC40293E9L,0L}};
    int8_t l_117 = (-9L);
    int i, j;
    if ((g_13.f3 != (safe_mul_func_int16_t_s_s((((**p_51) == (g_78 |= (0L < (safe_rshift_func_uint8_t_u_u(((((safe_mod_func_int8_t_s_s(g_57, 0xD9L)) , l_66[4][5]) >= (safe_sub_func_uint8_t_u_u((g_13.f3 | (safe_sub_func_uint64_t_u_u((g_75++), l_73[1][1]))), ((void*)0 == (*p_53))))) == p_54), 4))))) || l_73[7][1]), p_55))))
    {
        uint32_t l_104 = 4UL;
        int32_t l_107 = 0xBD50C841L;
        int32_t l_115 = 0x4B0DFAB6L;
        int32_t l_116[2][1][1];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_116[i][j][k] = (-4L);
            }
        }
        if ((**p_51))
        {
            int16_t l_101 = 0x4EC1L;
            int32_t l_102[3][3][9] = {{{(-1L),1L,0xB5DC4542L,(-4L),1L,1L,(-4L),(-9L),0x2EE889C3L},{1L,0xBAB3D6DBL,0xD57AD3C0L,(-1L),0x50FDF9F9L,0xBE7CA300L,0x50FDF9F9L,(-1L),0xD57AD3C0L},{1L,(-1L),(-4L),0x95A6083BL,0x2EE889C3L,(-1L),(-1L),0x2EE889C3L,0x95A6083BL}},{{0xAB8759D8L,0xBAB3D6DBL,0xAB8759D8L,0xBE7CA300L,0xE90A8693L,0xE9F729FAL,0L,0xE9F729FAL,0xE90A8693L},{0L,0x2EE889C3L,(-4L),0xB5DC4542L,(-1L),0L,(-4L),(-4L),0L},{0xE1F98D32L,0xBE7CA300L,0xD57AD3C0L,0xBE7CA300L,0xE1F98D32L,0xE1F03B47L,1L,(-1L),1L}},{{0x2EE889C3L,(-3L),(-9L),0x95A6083BL,(-1L),(-4L),(-3L),0x95A6083BL,0x95A6083BL},{6L,0xE1F03B47L,0xE90A8693L,(-1L),0xE90A8693L,0xE1F03B47L,6L,0xBE7CA300L,0L},{0L,(-1L),0xB5DC4542L,(-4L),0x2EE889C3L,0L,(-3L),0xB5DC4542L,0x2EE889C3L}}};
            int32_t *l_103[7][9][2] = {{{&g_74,&l_102[0][2][7]},{&l_71,&l_102[0][2][7]},{&g_74,&l_102[0][2][7]},{&l_73[7][1],&l_102[1][1][0]},{&l_73[6][0],&l_73[7][1]},{&l_102[0][2][7],&l_102[0][2][7]},{&l_71,&l_102[0][2][7]},{&l_102[0][2][7],&l_71},{&l_73[7][4],&g_74}},{{&l_102[0][2][7],&l_73[7][4]},{&l_71,(void*)0},{&l_71,&l_73[7][4]},{&l_102[0][2][7],&g_74},{&l_73[7][4],&l_71},{&l_102[0][2][7],&l_102[0][2][7]},{&l_71,&l_102[0][2][7]},{&l_102[0][2][7],&l_73[7][1]},{&l_73[6][0],&l_102[1][1][0]}},{{&l_73[7][1],&l_102[0][2][7]},{&g_74,&l_102[0][2][7]},{&l_71,&l_102[0][2][7]},{&g_74,&l_102[0][2][7]},{&l_73[7][1],&l_102[1][1][0]},{&l_73[6][0],&l_73[7][1]},{&l_102[0][2][7],&l_102[0][2][7]},{&l_71,&l_102[0][2][7]},{&l_102[0][2][7],&l_71}},{{&l_73[7][4],&g_74},{&l_102[0][2][7],&l_73[7][4]},{&l_71,(void*)0},{&l_71,&l_73[7][4]},{&l_102[0][2][7],&g_74},{&l_73[7][4],&l_71},{&l_102[0][2][7],&l_102[0][2][7]},{&l_71,&l_102[0][2][7]},{&l_102[0][2][7],&l_73[7][1]}},{{&l_73[6][0],&l_102[1][1][0]},{&l_73[7][1],&l_102[0][2][7]},{&g_74,&l_102[0][2][7]},{&l_71,&l_102[0][2][7]},{&g_74,&l_102[0][2][7]},{&l_73[7][1],&l_102[1][1][0]},{&l_73[6][0],&l_73[7][1]},{&l_102[0][2][7],&l_102[0][2][7]},{&l_71,&l_102[0][2][7]}},{{&l_102[0][2][7],&l_71},{&l_73[7][4],&g_74},{&l_102[0][2][7],&l_73[7][4]},{&l_71,(void*)0},{&l_71,&l_73[7][4]},{&l_102[0][2][7],&g_74},{&l_73[7][4],&l_71},{&l_102[0][2][7],&l_102[0][2][7]},{&l_71,&l_102[0][2][7]}},{{&l_102[0][2][7],&l_73[7][1]},{&l_73[6][0],&l_102[1][1][0]},{&l_73[7][1],&l_71},{&l_73[6][0],&l_73[7][1]},{&l_73[7][1],&l_73[7][1]},{&l_73[6][0],&l_71},{&l_102[2][1][7],(void*)0},{&l_102[0][2][7],&l_102[0][2][7]},{&l_71,&l_71}}};
            int i, j, k;
            l_102[0][2][7] = (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s(0x80793961L, (safe_mul_func_int16_t_s_s(g_13.f4, l_71)))), (safe_div_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((p_55 || 0xB5C327FA81B22E00LL) , (l_66[5][6] == (g_6 = ((**p_51) && (**p_51))))), (safe_rshift_func_uint8_t_u_u((g_13.f2 ^ 4294967295UL), g_78)))), p_54)) , p_55), l_101)), g_78)) & p_55), 0x4EL)))), g_57)), 6));
            l_104 &= (-3L);
            l_107 |= (safe_mod_func_uint8_t_u_u(250UL, g_78));
            for (l_101 = (-20); (l_101 < (-27)); l_101--)
            {
                l_107 ^= ((void*)0 == (*p_53));
                return p_52;
            }
        }
        else
        {
            int32_t *l_110 = &l_73[7][1];
            int32_t *l_111 = (void*)0;
            int32_t *l_112 = &l_71;
            int32_t *l_113 = &l_107;
            int32_t *l_114[8];
            uint64_t l_118 = 18446744073709551609UL;
            int i;
            for (i = 0; i < 8; i++)
                l_114[i] = (void*)0;
            l_118++;
        }
        return &g_57;
    }
    else
    {
        return p_52;
    }
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
    transparent_crc(g_13.f1, "g_13.f1", print_hash_value);
    transparent_crc(g_13.f2, "g_13.f2", print_hash_value);
    transparent_crc(g_13.f3, "g_13.f3", print_hash_value);
    transparent_crc(g_13.f4, "g_13.f4", print_hash_value);
    transparent_crc(g_13.f5, "g_13.f5", print_hash_value);
    transparent_crc(g_13.f6, "g_13.f6", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_154[i], "g_154[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_188[i], "g_188[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_220, "g_220", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_291[i][j][k].f0, "g_291[i][j][k].f0", print_hash_value);
                transparent_crc(g_291[i][j][k].f1, "g_291[i][j][k].f1", print_hash_value);
                transparent_crc(g_291[i][j][k].f2, "g_291[i][j][k].f2", print_hash_value);
                transparent_crc(g_291[i][j][k].f3, "g_291[i][j][k].f3", print_hash_value);
                transparent_crc(g_291[i][j][k].f4, "g_291[i][j][k].f4", print_hash_value);
                transparent_crc(g_291[i][j][k].f5, "g_291[i][j][k].f5", print_hash_value);
                transparent_crc(g_291[i][j][k].f6, "g_291[i][j][k].f6", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_428[i], "g_428[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_684, "g_684", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_741[i], "g_741[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_841, "g_841", print_hash_value);
    transparent_crc(g_842, "g_842", print_hash_value);
    transparent_crc(g_991, "g_991", print_hash_value);
    transparent_crc(g_992, "g_992", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1131[i], "g_1131[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1155, "g_1155", print_hash_value);
    transparent_crc(g_1159, "g_1159", print_hash_value);
    transparent_crc(g_1203, "g_1203", print_hash_value);
    transparent_crc(g_1323.f0, "g_1323.f0", print_hash_value);
    transparent_crc(g_1323.f1, "g_1323.f1", print_hash_value);
    transparent_crc(g_1323.f2, "g_1323.f2", print_hash_value);
    transparent_crc(g_1323.f3, "g_1323.f3", print_hash_value);
    transparent_crc(g_1323.f4, "g_1323.f4", print_hash_value);
    transparent_crc(g_1323.f5, "g_1323.f5", print_hash_value);
    transparent_crc(g_1323.f6, "g_1323.f6", print_hash_value);
    transparent_crc(g_1349, "g_1349", print_hash_value);
    transparent_crc(g_1372, "g_1372", print_hash_value);
    transparent_crc(g_1417, "g_1417", print_hash_value);
    transparent_crc(g_1522.f0, "g_1522.f0", print_hash_value);
    transparent_crc(g_1522.f1, "g_1522.f1", print_hash_value);
    transparent_crc(g_1522.f2, "g_1522.f2", print_hash_value);
    transparent_crc(g_1522.f3, "g_1522.f3", print_hash_value);
    transparent_crc(g_1522.f4, "g_1522.f4", print_hash_value);
    transparent_crc(g_1522.f5, "g_1522.f5", print_hash_value);
    transparent_crc(g_1522.f6, "g_1522.f6", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1539[i], "g_1539[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1663, "g_1663", print_hash_value);
    transparent_crc(g_1885, "g_1885", print_hash_value);
    transparent_crc(g_1905, "g_1905", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1923[i], "g_1923[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_1980[i][j][k], "g_1980[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2082, "g_2082", print_hash_value);
    transparent_crc(g_2265, "g_2265", print_hash_value);
    transparent_crc(g_2313, "g_2313", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
