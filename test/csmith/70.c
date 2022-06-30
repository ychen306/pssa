// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 84D55E7B
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



static int32_t g_2 = 0x7E2799ACL;
static int64_t g_23 = 0x8E045DCEFBDE283BLL;
static int32_t g_25 = 0x7E011B55L;
static uint64_t g_43[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static uint8_t g_53 = 0x5FL;
static int32_t *g_70 = &g_25;
static int32_t **g_69 = &g_70;
static uint8_t *g_100 = &g_53;
static uint32_t g_131 = 0x7DA89762L;
static uint8_t g_132 = 0xFCL;
static int16_t g_154 = 7L;
static uint16_t g_156 = 1UL;
static int64_t *g_157 = (void*)0;
static int32_t *g_159 = &g_25;
static int32_t g_166[5] = {0x163BBE5BL,0x163BBE5BL,0x163BBE5BL,0x163BBE5BL,0x163BBE5BL};
static uint64_t g_224 = 1UL;
static uint32_t g_227 = 18446744073709551608UL;
static int64_t g_288 = 0x45550421CDDCF2B0LL;
static int8_t g_292 = 0x7CL;
static uint32_t g_347 = 5UL;
static int16_t g_374 = 1L;
static uint8_t g_391[6][1][5] = {{{0UL,0UL,0x83L,0UL,0UL}},{{0x01L,3UL,0x01L,0x01L,3UL}},{{0UL,1UL,1UL,0UL,1UL}},{{3UL,3UL,255UL,3UL,3UL}},{{1UL,0UL,1UL,1UL,0UL}},{{3UL,0x01L,0x01L,3UL,0x01L}}};
static uint64_t g_496[9][1][4] = {{{0x87573AF0072AAE1BLL,0xB8C85CB00327B808LL,0x87573AF0072AAE1BLL,0x87573AF0072AAE1BLL}},{{18446744073709551610UL,0x87573AF0072AAE1BLL,0x87573AF0072AAE1BLL,18446744073709551610UL}},{{0xDC03A35D333595A8LL,0x87573AF0072AAE1BLL,0xB8C85CB00327B808LL,0x87573AF0072AAE1BLL}},{{0x87573AF0072AAE1BLL,0x27D5CDC6855E92BDLL,0xB8C85CB00327B808LL,0xB8C85CB00327B808LL}},{{0xDC03A35D333595A8LL,0xDC03A35D333595A8LL,0x87573AF0072AAE1BLL,0xB8C85CB00327B808LL}},{{18446744073709551610UL,0x27D5CDC6855E92BDLL,18446744073709551610UL,0x87573AF0072AAE1BLL}},{{18446744073709551610UL,0x87573AF0072AAE1BLL,0x87573AF0072AAE1BLL,18446744073709551610UL}},{{0xDC03A35D333595A8LL,0x87573AF0072AAE1BLL,0xB8C85CB00327B808LL,0x87573AF0072AAE1BLL}},{{0x87573AF0072AAE1BLL,0x27D5CDC6855E92BDLL,0xB8C85CB00327B808LL,0xB8C85CB00327B808LL}}};
static uint32_t **g_611 = (void*)0;
static int8_t *g_628[9][3][9] = {{{(void*)0,&g_292,&g_292,&g_292,(void*)0,(void*)0,&g_292,&g_292,&g_292},{(void*)0,&g_292,&g_292,&g_292,(void*)0,&g_292,&g_292,&g_292,&g_292},{&g_292,&g_292,(void*)0,(void*)0,&g_292,&g_292,&g_292,&g_292,&g_292}},{{(void*)0,&g_292,&g_292,&g_292,(void*)0,&g_292,&g_292,(void*)0,&g_292},{&g_292,(void*)0,&g_292,&g_292,(void*)0,&g_292,&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292,&g_292,(void*)0,&g_292,&g_292,&g_292,(void*)0}},{{(void*)0,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292},{&g_292,(void*)0,(void*)0,&g_292,&g_292,&g_292,(void*)0,&g_292,&g_292},{&g_292,&g_292,&g_292,&g_292,&g_292,(void*)0,(void*)0,&g_292,&g_292}},{{&g_292,&g_292,&g_292,&g_292,(void*)0,&g_292,&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292,(void*)0,&g_292,&g_292,&g_292,&g_292,&g_292},{(void*)0,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292,(void*)0}},{{&g_292,(void*)0,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292},{(void*)0,(void*)0,&g_292,&g_292,&g_292,(void*)0,&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292,&g_292,&g_292,(void*)0,&g_292,&g_292,&g_292}},{{&g_292,&g_292,(void*)0,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292},{(void*)0,(void*)0,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292,&g_292,(void*)0,&g_292,&g_292,(void*)0,&g_292}},{{&g_292,&g_292,(void*)0,&g_292,&g_292,&g_292,(void*)0,&g_292,&g_292},{&g_292,&g_292,&g_292,(void*)0,&g_292,&g_292,(void*)0,(void*)0,(void*)0},{&g_292,&g_292,(void*)0,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292}},{{&g_292,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292,&g_292},{&g_292,&g_292,&g_292,&g_292,&g_292,&g_292,(void*)0,(void*)0,&g_292},{&g_292,&g_292,&g_292,&g_292,&g_292,&g_292,(void*)0,&g_292,&g_292}},{{(void*)0,&g_292,(void*)0,(void*)0,&g_292,&g_292,&g_292,(void*)0,(void*)0},{&g_292,&g_292,&g_292,&g_292,&g_292,(void*)0,&g_292,(void*)0,(void*)0},{&g_292,&g_292,&g_292,&g_292,(void*)0,&g_292,&g_292,&g_292,&g_292}}};
static int32_t g_681 = (-1L);
static int32_t g_704 = 0x56C6E81CL;
static int32_t *g_703 = &g_704;
static uint64_t *g_709 = &g_43[4];
static uint64_t **g_708[4] = {&g_709,&g_709,&g_709,&g_709};
static uint64_t ***g_707 = &g_708[2];
static int32_t g_713 = 8L;
static int64_t **g_776 = &g_157;
static int64_t ***g_775[4] = {&g_776,&g_776,&g_776,&g_776};
static uint16_t *g_820 = (void*)0;
static int32_t g_845 = 0L;
static int64_t g_893 = 0L;
static uint16_t * const *g_935 = &g_820;
static uint16_t * const **g_934 = &g_935;
static int16_t g_946 = 1L;
static uint32_t g_1054 = 4294967295UL;
static uint32_t *g_1053 = &g_1054;
static uint32_t g_1157[7][7][5] = {{{0xF9C9C6A9L,9UL,0x9F43C036L,1UL,9UL},{0xF8122826L,3UL,0UL,0x567AE85EL,0UL},{0UL,0x8B70CF3CL,0x10E26D54L,0x8B70CF3CL,0UL},{5UL,0x38AC07A8L,18446744073709551607UL,1UL,0x24B4D508L},{0x916BD042L,18446744073709551608UL,0xA4135F8BL,0x916BD042L,0x9F43C036L},{18446744073709551609UL,0x4F5FE076L,0x6DA168F0L,0x38AC07A8L,0x24B4D508L},{0xF9C9C6A9L,0x916BD042L,1UL,0x9F43C036L,0UL}},{{0x24B4D508L,0UL,0UL,18446744073709551612UL,0UL},{18446744073709551613UL,18446744073709551613UL,0UL,18446744073709551609UL,9UL},{0UL,1UL,18446744073709551615UL,1UL,0x3451F29FL},{0x8B70CF3CL,0xA4135F8BL,0xF7CDDA61L,0xD36CC956L,1UL},{18446744073709551615UL,1UL,0x6DA168F0L,18446744073709551609UL,1UL},{1UL,18446744073709551613UL,18446744073709551608UL,1UL,0x04276EC2L},{18446744073709551614UL,0UL,1UL,0x5B7DD520L,4UL}},{{9UL,0x916BD042L,0x10E26D54L,18446744073709551613UL,4UL},{0UL,0x4F5FE076L,0x132D6B5DL,0UL,18446744073709551615UL},{4UL,18446744073709551608UL,0x3E5AB7ECL,18446744073709551613UL,1UL},{4UL,0x38AC07A8L,0xB47A5E1EL,0x5B7DD520L,18446744073709551609UL},{0xF9C9C6A9L,0x8B70CF3CL,1UL,1UL,0x8B70CF3CL},{0x3451F29FL,3UL,18446744073709551609UL,0UL,0x36110BF1L},{18446744073709551608UL,0x9F43C036L,4UL,1UL,0xA4135F8BL}},{{18446744073709551609UL,0x3824F790L,0x6DA168F0L,0x00217D8EL,0UL},{18446744073709551608UL,0xE39458A5L,0UL,18446744073709551608UL,0UL},{0UL,0x4A0E26E3L,18446744073709551614UL,0x3824F790L,5UL},{5UL,0xF98D9785L,5UL,0UL,18446744073709551608UL},{5UL,1UL,0UL,18446744073709551613UL,0x36110BF1L},{0xF9C9C6A9L,1UL,0x04276EC2L,0xA4135F8BL,1UL},{1UL,0UL,0UL,0x00217D8EL,4UL}},{{0x9F43C036L,0x10E26D54L,5UL,0x3E5AB7ECL,0x785B8F46L},{18446744073709551607UL,0xDC3FD3E3L,18446744073709551614UL,0xDC3FD3E3L,18446744073709551607UL},{1UL,0xF9C9C6A9L,0UL,0x785B8F46L,0xF7CDDA61L},{18446744073709551610UL,1UL,0x6DA168F0L,3UL,0UL},{0x3E5AB7ECL,18446744073709551608UL,4UL,0xF9C9C6A9L,0xF7CDDA61L},{1UL,3UL,18446744073709551609UL,0x000D8E9EL,18446744073709551607UL},{0xF7CDDA61L,0xE39458A5L,0x785B8F46L,1UL,0x785B8F46L}},{{0x132D6B5DL,0xD83E58FEL,4UL,0UL,4UL},{5UL,1UL,0xA841F143L,0x785B8F46L,1UL},{18446744073709551615UL,0xE2DB7247L,9UL,1UL,0x36110BF1L},{0xA4135F8BL,1UL,4UL,0x9F43C036L,18446744073709551608UL},{18446744073709551609UL,0xD83E58FEL,6UL,0x00217D8EL,5UL},{0xF98D9785L,0xE39458A5L,0xE39458A5L,0xF98D9785L,0UL},{4UL,3UL,18446744073709551614UL,0xD83E58FEL,0UL}},{{5UL,18446744073709551608UL,0x51107041L,0UL,0xA4135F8BL},{0UL,1UL,0xABBD17FBL,0xD83E58FEL,0x36110BF1L},{1UL,0xF9C9C6A9L,0x04276EC2L,0xF98D9785L,0x3E5AB7ECL},{1UL,0xDC3FD3E3L,0x36110BF1L,0x00217D8EL,18446744073709551615UL},{1UL,0x10E26D54L,1UL,0x9F43C036L,0x785B8F46L},{1UL,0UL,18446744073709551614UL,1UL,18446744073709551610UL},{1UL,1UL,0x10E26D54L,0x785B8F46L,0xF9C9C6A9L}}};
static int64_t ****g_1163[5] = {&g_775[0],&g_775[0],&g_775[0],&g_775[0],&g_775[0]};
static uint16_t *g_1294[1] = {&g_156};
static int64_t *****g_1296 = &g_1163[4];
static uint32_t *g_1421 = &g_1157[5][4][1];
static int16_t g_1541 = (-5L);
static uint64_t g_1576 = 0x7992BBC25542195CLL;
static uint32_t g_1715 = 4294967295UL;
static int16_t g_1802 = 0x0B08L;
static int32_t g_1839 = (-9L);
static const uint64_t g_1878 = 0xE3BB7753729AEF5ELL;
static const uint64_t g_1880 = 8UL;
static const int32_t *g_1895 = &g_704;
static const int32_t **g_1894[1][10][4] = {{{&g_1895,(void*)0,&g_1895,&g_1895},{&g_1895,&g_1895,&g_1895,&g_1895},{&g_1895,&g_1895,&g_1895,&g_1895},{&g_1895,(void*)0,(void*)0,&g_1895},{&g_1895,&g_1895,(void*)0,&g_1895},{&g_1895,&g_1895,&g_1895,&g_1895},{&g_1895,(void*)0,&g_1895,&g_1895},{&g_1895,&g_1895,&g_1895,&g_1895},{&g_1895,&g_1895,&g_1895,&g_1895},{&g_1895,&g_1895,&g_1895,&g_1895}}};



static uint64_t func_1(void);
static uint8_t func_8(uint32_t p_9);
static uint16_t func_14(uint32_t p_15, int32_t p_16, uint16_t p_17, const int32_t p_18, int64_t p_19);
static const int32_t * func_46(uint32_t p_47);
static int64_t func_57(int32_t * p_58, int32_t p_59, int64_t * p_60);
static int32_t * func_61(int8_t p_62, int16_t p_63, const uint8_t p_64, int32_t p_65, int32_t ** p_66);
static int8_t func_72(int32_t ** p_73, uint8_t * p_74, uint64_t p_75, int32_t * p_76, int64_t p_77);
static int32_t ** func_78(const int32_t * p_79, int32_t ** p_80, uint8_t * p_81, int32_t p_82, const uint8_t p_83);
static int32_t func_84(int32_t ** p_85, const int32_t p_86, int16_t p_87, const int64_t * p_88);
static int32_t ** func_89(uint8_t * p_90, uint32_t p_91, const uint16_t p_92);
# 94 "<stdin>"
static uint64_t func_1(void)
{
    const int8_t l_10 = 0xA6L;
    int32_t l_42 = 1L;
    uint8_t *l_52[8] = {&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53};
    uint32_t l_54 = 0UL;
    int32_t **l_71 = &g_70;
    int64_t l_93 = 2L;
    uint8_t l_546 = 0UL;
    uint16_t l_547 = 9UL;
    const uint16_t l_548 = 0xA165L;
    uint32_t *l_866 = &g_131;
    int32_t **l_867 = (void*)0;
    const int32_t *l_1933 = (void*)0;
    int i;
    for (g_2 = 14; (g_2 > 19); g_2 = safe_add_func_uint32_t_u_u(g_2, 2))
    {
        const int16_t l_11 = 0xAE4BL;
        int64_t *l_22[6] = {&g_23,(void*)0,(void*)0,&g_23,(void*)0,(void*)0};
        int32_t *l_24 = &g_25;
        int32_t *l_26 = (void*)0;
        int32_t *l_27 = &g_25;
        int32_t *l_28 = &g_25;
        int32_t *l_29 = &g_25;
        int32_t *l_30 = (void*)0;
        int32_t *l_31 = &g_25;
        int32_t *l_32 = &g_25;
        int32_t *l_33 = &g_25;
        int32_t *l_34 = &g_25;
        int32_t *l_35 = &g_25;
        int32_t *l_36 = &g_25;
        int32_t *l_37 = &g_25;
        int32_t *l_38 = (void*)0;
        int32_t *l_39 = &g_25;
        int32_t *l_40[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t l_41 = 0xD7L;
        int i;
        (*l_24) = (((safe_sub_func_uint64_t_u_u((g_2 >= g_2), (safe_unary_minus_func_uint8_t_u(func_8((l_10 <= ((g_2 , g_2) || l_11))))))) < (g_23 = ((safe_add_func_int16_t_s_s(l_11, func_14(func_8((l_10 , 0x12AA53F0L)), g_2, l_11, l_11, g_2))) < l_11))) | 0xAB3AL);
        --g_43[7];
    }
    l_1933 = func_46((g_1576 &= ((g_23 = 0L) & ((safe_rshift_func_uint8_t_u_u(0x57L, (safe_mul_func_uint8_t_u_u((l_42 ^ g_43[4]), (++l_54))))) , func_57(func_61((((safe_mod_func_uint8_t_u_u(g_2, ((((((*l_866) = ((g_69 == l_71) , (func_72(func_78((((func_14((func_84(func_89(&g_53, (l_93 ^ (**g_69)), (**l_71)), g_131, g_43[5], g_157) , g_374), g_374, l_54, l_42, g_496[2][0][1]) && l_546) == g_288) , (void*)0), l_71, g_100, l_547, l_548), &l_546, (*g_709), &l_42, l_42) , (**l_71)))) , &l_93) != (void*)0) && 0x359AL) || g_496[0][0][0]))) < l_10) , (**l_71)), g_227, l_10, g_227, l_867), l_93, &l_93)))));
    return (*g_709);
}







static uint8_t func_8(uint32_t p_9)
{
    return g_2;
}







static uint16_t func_14(uint32_t p_15, int32_t p_16, uint16_t p_17, const int32_t p_18, int64_t p_19)
{
    int32_t *l_21 = &g_2;
    int32_t **l_20 = &l_21;
    (*l_20) = &p_16;
    return p_16;
}







static const int32_t * func_46(uint32_t p_47)
{
    int16_t l_1584 = 1L;
    uint32_t l_1601 = 0x6E911AA4L;
    int8_t * const l_1609 = &g_292;
    int32_t l_1618 = 0L;
    int32_t l_1619 = 0x788E0589L;
    int32_t l_1625 = (-2L);
    int32_t l_1626 = 0x1CAA4737L;
    uint8_t **l_1637 = &g_100;
    int32_t l_1710 = 0L;
    uint32_t *l_1737 = &g_1157[5][2][0];
    uint32_t * const * const l_1745 = &g_1053;
    uint32_t * const * const *l_1744 = &l_1745;
    int32_t l_1866 = 0x7E4FA36FL;
    int8_t l_1886 = 0xCFL;
    int32_t **l_1890 = &g_70;
    const int32_t *l_1893 = &l_1866;
    const int32_t **l_1892 = &l_1893;
    const int32_t *l_1904 = &l_1618;
    uint64_t l_1920 = 0x52E68D0E8D6A5745LL;
    int32_t l_1931[2];
    int8_t *l_1932 = &l_1886;
    int i;
    for (i = 0; i < 2; i++)
        l_1931[i] = 0L;
    for (g_288 = (-22); (g_288 != (-12)); g_288 = safe_add_func_uint8_t_u_u(g_288, 5))
    {
        uint16_t l_1591 = 0x7121L;
        int32_t *l_1592 = &g_845;
        int32_t l_1620 = 0x5ADD4FF5L;
        int32_t l_1621 = 0x3ADB6CBCL;
        int32_t l_1623[6] = {0x77514796L,0x77514796L,0x77514796L,0x77514796L,0x77514796L,0x77514796L};
        uint32_t l_1627 = 0x1142762EL;
        int32_t **l_1657 = &g_703;
        uint16_t **l_1771 = (void*)0;
        uint16_t ***l_1770 = &l_1771;
        const uint8_t l_1827 = 0x2AL;
        uint32_t l_1841 = 0xE3993494L;
        uint32_t * const *l_1868 = &g_1421;
        const int32_t *l_1903 = (void*)0;
        const int32_t *l_1905 = (void*)0;
        int i;
        (*l_1592) = (~(safe_sub_func_int8_t_s_s(((0x9EDAL && ((safe_mul_func_uint16_t_u_u((l_1584 != (7UL ^ (p_47 , ((safe_mul_func_int16_t_s_s((p_47 , (p_47 >= (safe_rshift_func_uint16_t_u_s(0xD359L, ((*g_709) && (l_1584 , 0L)))))), p_47)) >= l_1584)))), g_131)) > l_1591)) ^ 0x49L), l_1584)));
        if ((*l_1592))
        {
            uint64_t l_1599 = 18446744073709551607UL;
            uint16_t *l_1600[3][7][7] = {{{&g_156,&l_1591,&g_156,&g_156,&l_1591,&l_1591,&l_1591},{&g_156,(void*)0,(void*)0,(void*)0,&g_156,&l_1591,(void*)0},{&g_156,&l_1591,&l_1591,&g_156,&g_156,&l_1591,&l_1591},{&g_156,&l_1591,&g_156,&g_156,&g_156,&g_156,&l_1591},{&g_156,(void*)0,&l_1591,&l_1591,&l_1591,&g_156,(void*)0},{&g_156,&g_156,(void*)0,&g_156,&g_156,&g_156,&g_156},{&g_156,&l_1591,&g_156,&l_1591,&g_156,&l_1591,&l_1591}},{{&g_156,&g_156,&g_156,&g_156,&l_1591,&l_1591,&g_156},{&g_156,(void*)0,&l_1591,&g_156,&g_156,&l_1591,(void*)0},{&l_1591,&l_1591,&g_156,(void*)0,&g_156,(void*)0,&l_1591},{&g_156,&l_1591,&g_156,&g_156,&l_1591,&l_1591,&l_1591},{&g_156,(void*)0,(void*)0,(void*)0,&g_156,&l_1591,(void*)0},{&g_156,&l_1591,&l_1591,&g_156,&g_156,&l_1591,&l_1591},{&g_156,&l_1591,&g_156,&g_156,&g_156,&g_156,&l_1591}},{{&g_156,(void*)0,&l_1591,&l_1591,&l_1591,&g_156,(void*)0},{&g_156,&g_156,(void*)0,&g_156,&g_156,&g_156,&g_156},{&g_156,&l_1591,&g_156,&l_1591,&g_156,&l_1591,&l_1591},{&g_156,&g_156,&g_156,&g_156,&l_1591,&l_1591,&g_156},{&g_156,(void*)0,&l_1591,&g_156,&g_156,&l_1591,(void*)0},{&l_1591,&l_1591,&g_156,(void*)0,&g_156,(void*)0,&l_1591},{&g_156,&l_1591,&g_156,&g_156,&l_1591,&l_1591,&l_1591}}};
            int8_t *l_1608 = &g_292;
            uint32_t *l_1610 = &g_1054;
            int32_t l_1616 = 0xD68B31A0L;
            int32_t l_1617[5] = {0L,0L,0L,0L,0L};
            int16_t l_1630 = 0x9C99L;
            uint8_t l_1631 = 8UL;
            const int32_t *l_1698[6];
            uint32_t *l_1738 = &g_1157[5][5][2];
            uint16_t ****l_1772 = &l_1770;
            int32_t *l_1785 = &l_1621;
            uint32_t **l_1844 = &g_1421;
            const uint64_t *l_1879 = &g_1880;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1698[i] = &l_1623[3];
            if (((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((l_1599 < (((((-1L) <= 246UL) == (g_946 = p_47)) , ((l_1601--) & p_47)) == (safe_add_func_uint8_t_u_u((((*l_1592) = p_47) , (safe_add_func_uint16_t_u_u((((*l_1610) = (((*l_1592) ^= (((0x6DL && (l_1608 == l_1609)) > p_47) , l_1584)) ^ p_47)) ^ 1L), 0x597DL))), (*g_100))))), l_1584)) || l_1599) , 0xF707L), g_43[4])), g_292)) == l_1584))
            {
                int32_t l_1622 = 0xB9739354L;
                int32_t l_1624[10][9] = {{0xDB61228AL,0L,0xF549E1E3L,(-3L),8L,0xD2E98C62L,8L,(-3L),0xF549E1E3L},{0xA5B5FC73L,0x96F9A739L,0xA5B5FC73L,2L,0x0D49F3BEL,0x9F338528L,0L,0x9F338528L,0x0D49F3BEL},{8L,(-1L),(-1L),8L,0L,0xD2E98C62L,0x98F170ABL,8L,0x98F170ABL},{0L,8L,0xA5B5FC73L,0xA5B5FC73L,8L,0L,0L,0x96F9A739L,0xA49E1B17L},{0x364AF610L,0xD2E98C62L,8L,0L,0L,8L,0xD2E98C62L,0x364AF610L,0xDB61228AL},{0xA49E1B17L,0xA5B5FC73L,0x25D219E2L,0L,0x0D49F3BEL,0x0D49F3BEL,0L,0x25D219E2L,0xA5B5FC73L},{0L,0x364AF610L,0xF549E1E3L,0xDB61228AL,(-1L),0x98F170ABL,0x98F170ABL,(-1L),0xDB61228AL},{2L,1L,2L,0x9F338528L,0L,0xA49E1B17L,0L,0L,0xA49E1B17L},{0xF549E1E3L,0x364AF610L,0L,0x364AF610L,0xF549E1E3L,0xDB61228AL,(-1L),0x98F170ABL,0x98F170ABL},{0x25D219E2L,0xA5B5FC73L,0xA49E1B17L,0x9F338528L,0xA49E1B17L,0xA5B5FC73L,0x25D219E2L,0L,0x0D49F3BEL}};
                uint8_t l_1634 = 3UL;
                int i, j;
                (*g_69) = l_1592;
                for (l_1591 = 6; (l_1591 <= 20); l_1591++)
                {
                    (*g_69) = (*g_69);
                }
                (*l_1592) &= 0xA0404B0EL;
                if ((safe_div_func_int64_t_s_s(l_1599, 0x64B8C122D2FB65B5LL)))
                {
                    int32_t *l_1615[4][3][4] = {{{&g_845,&g_681,&g_845,&g_166[3]},{&g_845,&g_166[3],&g_845,&g_681},{&g_845,&g_681,&g_845,&g_166[3]}},{{&g_845,&g_166[3],&g_845,&g_681},{&g_845,&g_681,&g_845,&g_166[3]},{&g_845,&g_166[3],&g_845,&g_681}},{{&g_845,&g_681,&g_845,&g_166[3]},{&g_845,&g_166[3],&g_845,&g_681},{&g_845,&g_681,&g_845,&g_166[3]}},{{&g_845,&g_166[3],&g_845,&g_681},{&g_845,&g_681,&g_845,&g_166[3]},{&g_845,&g_166[3],&g_845,&g_681}}};
                    int i, j, k;
                    (*g_69) = l_1615[3][0][0];
                    l_1627++;
                }
                else
                {
                    int32_t *l_1659 = &g_681;
                    int32_t *l_1662 = &l_1618;
                    if (p_47)
                    {
                        l_1630 &= (*l_1592);
                    }
                    else
                    {
                        uint8_t **l_1636 = &g_100;
                        uint8_t ***l_1635 = &l_1636;
                        int8_t l_1658 = 0x8DL;
                        (**g_69) = 0L;
                        l_1631++;
                        (*g_69) = ((l_1634 == ((*g_100) = ((((((l_1601 < (((((((*l_1635) = (void*)0) != (l_1617[3] , l_1637)) & ((((((***g_707)++) != 0x74B87E2C6C3C19B1LL) >= ((safe_rshift_func_int8_t_s_u((((~(safe_div_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((*l_1610) &= (+((((+(*g_70)) == ((((*g_703) , l_1657) != (void*)0) || p_47)) | 1UL) < p_47))) != p_47), 0x7DL)), 1L)), (*l_1592))), 0x66L)), 18446744073709551608UL)), p_47))) < p_47) != (**g_69)), 4)) || p_47)) , 6UL) & 1L)) & 0x4B5B1C0E8B4BDF43LL) <= l_1624[0][5]) > 0xC7L)) == (**g_69)) & p_47) && (**g_69)) , l_1658) != 0x8CFD78CDL))) , l_1659);
                        g_611 = &g_1421;
                    }
                    (*l_1662) = ((safe_rshift_func_uint16_t_u_u(l_1617[1], 10)) && ((**g_69) |= (-1L)));
                    for (g_1541 = 3; (g_1541 >= 0); g_1541 -= 1)
                    {
                        int32_t l_1663 = 4L;
                        int i;
                        (**g_69) = l_1663;
                        (*l_1592) &= ((*g_100) != l_1599);
                        if ((*l_1662))
                            continue;
                        (*l_1592) &= ((safe_rshift_func_int8_t_s_s((-8L), 7)) >= ((((p_47 <= (safe_add_func_uint16_t_u_u(0xF909L, ((g_946 = 0L) || ((((safe_mod_func_int8_t_s_s(p_47, (safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(0x99L, l_1616)), l_1663)))) > 3UL) != l_1624[9][0]) == 0xCBL))))) < p_47) & p_47) ^ l_1663));
                    }
                }
            }
            else
            {
                uint8_t l_1678 = 9UL;
                const int32_t *l_1699[1];
                int32_t l_1703 = 2L;
                int32_t l_1707 = 0x8BE08D13L;
                int32_t l_1708 = (-10L);
                int32_t l_1709 = (-8L);
                int32_t l_1711[3];
                int32_t l_1712 = 0xA74EDCAFL;
                uint32_t **l_1743 = &l_1610;
                uint32_t ** const *l_1742 = &l_1743;
                int i;
                for (i = 0; i < 1; i++)
                    l_1699[i] = &g_166[4];
                for (i = 0; i < 3; i++)
                    l_1711[i] = 0xCB5BA1C4L;
                (*g_69) = &l_1623[5];
                for (g_132 = 0; (g_132 <= 3); g_132 += 1)
                {
                    int i;
                    g_166[g_132] &= (safe_add_func_int16_t_s_s(0L, 0x80E4L));
                    l_1678++;
                }
                for (g_1576 = 0; (g_1576 <= 2); g_1576 += 1)
                {
                    int32_t l_1697 = 0xF21F969DL;
                    int32_t l_1713 = (-2L);
                    int32_t l_1714 = 0xBD622D40L;
                    uint8_t *l_1727 = &l_1631;
                    int16_t l_1740 = 0xE4F2L;
                    uint32_t * const *l_1760 = &g_1421;
                    int i;
                    if (((safe_sub_func_int64_t_s_s((-1L), g_166[g_1576])) , ((safe_mod_func_uint64_t_u_u(((((l_1616 &= ((*l_1592) |= (safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((g_166[(g_1576 + 2)] , 0xEDA5L) | (g_166[g_1576] ^ 0xAE35L)), ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(l_1630, g_227)), (safe_sub_func_uint8_t_u_u(((l_1697 = ((safe_lshift_func_uint16_t_u_s(p_47, 14)) < 0xECL)) | (*g_100)), p_47)))) < g_166[g_1576]))), 18446744073709551615UL)))) == 6L) & 249UL) > 0x92L), p_47)) | p_47)))
                    {
                        return l_1699[0];
                    }
                    else
                    {
                        int32_t *l_1700 = &g_166[g_1576];
                        int32_t *l_1701 = &g_166[0];
                        int32_t *l_1702 = &g_166[4];
                        int32_t *l_1704 = &g_166[0];
                        int32_t *l_1705 = &l_1619;
                        int32_t *l_1706[6][8] = {{&l_1617[3],(void*)0,&l_1617[3],&l_1623[2],&l_1618,&l_1621,&l_1617[3],(void*)0},{&l_1621,&g_681,&l_1623[2],&l_1617[3],&l_1623[3],&l_1618,&l_1618,&l_1623[3]},{&l_1621,&g_166[g_1576],&g_166[g_1576],&l_1621,&l_1618,&l_1617[3],(void*)0,&l_1621},{&l_1617[3],&g_166[g_1576],&l_1617[3],&l_1617[3],&g_166[g_1576],(void*)0,&l_1621,(void*)0},{&l_1616,&g_166[g_1576],(void*)0,&g_166[g_1576],&l_1616,&l_1617[3],&l_1621,&g_166[g_1576]},{&l_1617[3],&g_166[g_1576],&l_1616,(void*)0,&l_1623[3],&l_1618,&g_166[g_1576],&g_166[g_1576]}};
                        int i, j;
                        if (p_47)
                            break;
                        (*g_70) ^= ((*l_1592) = (((-1L) ^ (***g_707)) ^ (-9L)));
                        g_1715++;
                    }
                    (**g_69) |= (0UL | 0xC6C3ABD9L);
                    for (l_1703 = 0; (l_1703 <= 2); l_1703 += 1)
                    {
                        uint32_t **l_1739 = &l_1737;
                        uint32_t *l_1741 = &l_1627;
                        int i, j, k;
                        l_1711[2] &= (safe_lshift_func_uint16_t_u_u((0xBCE2L >= ((g_156 <= (safe_sub_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((+p_47), p_47)) , p_47) < ((safe_sub_func_uint16_t_u_u((((***g_707) &= ((void*)0 == l_1727)) > (!((safe_sub_func_uint16_t_u_u((((*l_1741) = ((*l_1610) = (p_47 > (safe_sub_func_int16_t_s_s(((((*l_1739) = (l_1738 = (((g_347 = (safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(0xC2L, 0x9CL)), 0))) , 0x13L) , l_1737))) != (void*)0) != g_288), l_1740))))) , p_47), 0UL)) | 1UL))), 0xB408L)) | (**g_69))), (*l_1592)))) < 1UL)), p_47));
                    }
                    for (g_893 = 0; (g_893 <= 2); g_893 += 1)
                    {
                        uint32_t * const * const **l_1746 = &l_1744;
                        int32_t l_1752 = 3L;
                        int64_t *l_1753 = &g_23;
                        uint64_t ***l_1759 = &g_708[2];
                        uint32_t * const *l_1761[1][7][3] = {{{&g_1421,&l_1737,&g_1421},{&l_1737,&l_1737,&l_1737},{&l_1738,&l_1737,&l_1738},{&l_1737,&l_1737,&l_1737},{&g_1421,&l_1737,&g_1421},{&l_1737,&l_1737,&l_1737},{&l_1738,&l_1737,&l_1738}}};
                        int i, j, k;
                        (**g_69) = (((g_1054 > (((*l_1753) = ((l_1742 != ((*l_1746) = l_1744)) == (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_1157[5][4][1] && ((!p_47) , p_47)), 7)), l_1752)))) && (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint8_t_u_u((*g_100), ((safe_mul_func_int8_t_s_s((p_47 && g_713), 2L)) > (-8L)))))))) , &g_708[2]) == l_1759);
                        l_1761[0][5][1] = l_1760;
                        (*g_69) = &l_1620;
                        (*l_1592) = l_1618;
                    }
                }
            }
            if ((((*g_100) = (((*l_1592) = (((*g_100) & ((safe_rshift_func_uint16_t_u_s((*l_1592), 10)) || 0xFF69DE0BL)) & ((safe_sub_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((safe_add_func_uint16_t_u_u((((l_1617[3] = p_47) , (l_1625 , &g_935)) != ((*l_1772) = l_1770)), (safe_div_func_int16_t_s_s((((*l_1785) = (safe_mul_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((*l_1592), ((safe_div_func_int8_t_s_s(((p_47 ^ p_47) | p_47), p_47)) | (*l_1592)))), 6)) & (*l_1592)), p_47)) >= (*l_1592)), 1UL))) <= g_713), (-1L))))), l_1626)) & 4UL), p_47)) | l_1618))) ^ 0x67E0L)) != p_47))
            {
                int8_t l_1792 = 8L;
                int32_t *l_1803 = &g_713;
                int16_t *l_1833 = (void*)0;
                int16_t *l_1834 = &g_374;
                int32_t l_1840 = 0x766F7350L;
                uint32_t **l_1845 = &l_1738;
                uint32_t ***l_1846 = &l_1845;
                int32_t l_1867[4];
                int32_t *l_1869 = (void*)0;
                int32_t *l_1870 = &l_1618;
                int i;
                for (i = 0; i < 4; i++)
                    l_1867[i] = 1L;
                for (g_2 = 4; (g_2 >= 0); g_2 -= 1)
                {
                    int16_t *l_1799 = &g_374;
                    int64_t *l_1800 = &g_23;
                    int32_t l_1801 = 1L;
                    int32_t l_1816 = 9L;
                    (*l_1592) ^= (safe_lshift_func_uint8_t_u_s(((**l_1637) = (safe_lshift_func_uint8_t_u_u(255UL, 2))), 0));
                    g_166[4] ^= ((((safe_div_func_int32_t_s_s(l_1619, ((*l_1785) &= ((l_1792 && (safe_div_func_uint16_t_u_u(p_47, (safe_lshift_func_uint16_t_u_u((*l_1592), 3))))) | (-9L))))) || (((l_1801 = ((*l_1800) ^= (4L || ((*l_1799) = ((safe_add_func_uint16_t_u_u((p_47 >= (*l_1592)), (&g_374 == &g_374))) >= 0x929FF62BAEFF6BFCLL))))) != g_1802) <= 0L)) , l_1698[0]) == l_1803);
                    for (g_156 = 0; (g_156 <= 4); g_156 += 1)
                    {
                        uint64_t *l_1825 = (void*)0;
                        uint64_t *l_1826 = &g_1576;
                        const int32_t *l_1830 = &l_1623[1];
                        int i, j, k;
                        (*l_1785) = ((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((((g_1157[g_2][g_2][g_2] <= (((*l_1800) = ((p_47 <= ((safe_add_func_uint32_t_u_u(l_1801, (safe_div_func_uint64_t_u_u((*g_709), ((safe_div_func_int32_t_s_s((l_1816 = p_47), (safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((((safe_mul_func_int8_t_s_s(((((void*)0 == &g_1053) < (safe_mul_func_int16_t_s_s(((p_47 , ((((*l_1826) = (p_47 < 0xB2L)) | (*l_1592)) | (*l_1785))) == g_1157[g_2][g_2][g_2]), l_1792))) ^ 65535UL), g_1157[g_2][g_2][g_2])) != p_47) < l_1827) >= (-1L)) < p_47), 0xC810BE9922303FA5LL)), l_1801)))) , l_1601))))) , 6L)) , (-9L))) , g_1157[g_2][g_2][g_2])) | p_47) , g_1157[5][4][1]), (*l_1592))), 7)) > l_1801), p_47)) == p_47);
                        (*l_1785) = (safe_lshift_func_uint8_t_u_u(0x91L, 1));
                        return l_1803;
                    }
                    for (g_704 = 0; (g_704 <= 4); g_704 += 1)
                    {
                        return l_1803;
                    }
                }
                (*l_1870) = (((*l_1834) = (safe_rshift_func_int8_t_s_s(l_1792, 1))) < (safe_mul_func_uint8_t_u_u(0xE0L, ((((((*l_1738) = ((((*l_1785) = ((safe_add_func_uint32_t_u_u(4294967287UL, ((l_1841++) | ((l_1844 = &g_1421) == ((*l_1846) = l_1845))))) != ((*l_1608) = (safe_sub_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((*l_1785) < (((l_1623[3] = ((safe_lshift_func_int8_t_s_s(((((((((safe_unary_minus_func_int8_t_s(((safe_div_func_uint8_t_u_u(p_47, (safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((((*g_100)--) > ((safe_sub_func_uint8_t_u_u(0x03L, (safe_mod_func_uint16_t_u_u(((*l_1592) &= ((l_1792 != p_47) >= p_47)), p_47)))) <= l_1619)), p_47)), 2)))) | l_1866))) <= l_1867[0]) != 0xACCC1237D8FFFF62LL) , 1UL) != 8L) | 4294967290UL) > l_1626) , p_47), 5)) & (*l_1785))) , &l_1737) == l_1868)), p_47)) , g_131), p_47))))) , p_47) | p_47)) , 0x50F0110B32663E84LL) & (*g_709)) | p_47) > l_1867[0]))));
                if ((+p_47))
                {
                    const uint64_t *l_1877[3][1];
                    const uint64_t **l_1876[7][7][5] = {{{&l_1877[0][0],(void*)0,&l_1877[0][0],(void*)0,&l_1877[0][0]},{&l_1877[2][0],&l_1877[0][0],&l_1877[0][0],(void*)0,(void*)0},{&l_1877[0][0],&l_1877[0][0],&l_1877[1][0],&l_1877[1][0],&l_1877[2][0]},{&l_1877[0][0],&l_1877[0][0],&l_1877[1][0],&l_1877[0][0],(void*)0},{(void*)0,&l_1877[1][0],&l_1877[0][0],(void*)0,&l_1877[0][0]},{(void*)0,&l_1877[0][0],(void*)0,&l_1877[1][0],&l_1877[1][0]},{&l_1877[1][0],&l_1877[0][0],&l_1877[0][0],&l_1877[0][0],&l_1877[2][0]}},{{&l_1877[0][0],&l_1877[0][0],&l_1877[2][0],&l_1877[0][0],&l_1877[2][0]},{(void*)0,&l_1877[1][0],&l_1877[0][0],&l_1877[0][0],&l_1877[0][0]},{&l_1877[0][0],&l_1877[1][0],&l_1877[0][0],&l_1877[1][0],&l_1877[2][0]},{&l_1877[1][0],&l_1877[0][0],&l_1877[1][0],(void*)0,&l_1877[0][0]},{&l_1877[0][0],&l_1877[0][0],(void*)0,&l_1877[0][0],&l_1877[1][0]},{&l_1877[0][0],(void*)0,&l_1877[0][0],(void*)0,&l_1877[1][0]},{&l_1877[1][0],&l_1877[0][0],(void*)0,&l_1877[1][0],&l_1877[2][0]}},{{(void*)0,&l_1877[0][0],(void*)0,&l_1877[0][0],&l_1877[0][0]},{&l_1877[0][0],&l_1877[0][0],&l_1877[0][0],&l_1877[0][0],&l_1877[0][0]},{&l_1877[1][0],&l_1877[1][0],(void*)0,&l_1877[0][0],&l_1877[0][0]},{&l_1877[1][0],&l_1877[1][0],&l_1877[1][0],&l_1877[0][0],&l_1877[2][0]},{&l_1877[1][0],&l_1877[0][0],&l_1877[0][0],&l_1877[1][0],&l_1877[0][0]},{&l_1877[1][0],&l_1877[0][0],&l_1877[0][0],&l_1877[2][0],&l_1877[0][0]},{&l_1877[1][0],&l_1877[0][0],&l_1877[2][0],&l_1877[0][0],&l_1877[0][0]}},{{&l_1877[0][0],(void*)0,&l_1877[0][0],&l_1877[0][0],&l_1877[0][0]},{&l_1877[2][0],&l_1877[0][0],(void*)0,(void*)0,&l_1877[0][0]},{&l_1877[2][0],(void*)0,&l_1877[0][0],&l_1877[0][0],&l_1877[2][0]},{&l_1877[0][0],&l_1877[2][0],&l_1877[1][0],&l_1877[0][0],&l_1877[0][0]},{(void*)0,&l_1877[0][0],&l_1877[1][0],(void*)0,&l_1877[0][0]},{&l_1877[0][0],&l_1877[0][0],&l_1877[0][0],&l_1877[0][0],&l_1877[0][0]},{&l_1877[2][0],&l_1877[0][0],&l_1877[0][0],&l_1877[0][0],&l_1877[1][0]}},{{&l_1877[2][0],&l_1877[2][0],(void*)0,&l_1877[2][0],&l_1877[2][0]},{&l_1877[0][0],&l_1877[2][0],&l_1877[1][0],&l_1877[1][0],(void*)0},{&l_1877[1][0],&l_1877[0][0],&l_1877[1][0],&l_1877[1][0],(void*)0},{&l_1877[1][0],&l_1877[1][0],&l_1877[2][0],&l_1877[1][0],&l_1877[0][0]},{&l_1877[1][0],&l_1877[2][0],&l_1877[2][0],&l_1877[1][0],(void*)0},{&l_1877[1][0],&l_1877[2][0],&l_1877[0][0],&l_1877[0][0],&l_1877[1][0]},{&l_1877[1][0],(void*)0,&l_1877[0][0],&l_1877[0][0],&l_1877[2][0]}},{{&l_1877[0][0],&l_1877[2][0],&l_1877[1][0],&l_1877[0][0],&l_1877[0][0]},{(void*)0,(void*)0,&l_1877[2][0],&l_1877[0][0],&l_1877[2][0]},{&l_1877[2][0],&l_1877[0][0],&l_1877[1][0],&l_1877[0][0],(void*)0},{(void*)0,&l_1877[2][0],&l_1877[0][0],&l_1877[0][0],&l_1877[0][0]},{&l_1877[0][0],&l_1877[2][0],&l_1877[1][0],(void*)0,&l_1877[0][0]},{&l_1877[2][0],&l_1877[2][0],&l_1877[0][0],&l_1877[2][0],&l_1877[2][0]},{&l_1877[0][0],(void*)0,&l_1877[0][0],&l_1877[2][0],&l_1877[2][0]}},{{&l_1877[2][0],&l_1877[1][0],&l_1877[0][0],(void*)0,&l_1877[2][0]},{&l_1877[0][0],&l_1877[2][0],&l_1877[0][0],&l_1877[1][0],&l_1877[1][0]},{&l_1877[1][0],&l_1877[0][0],&l_1877[0][0],&l_1877[0][0],&l_1877[0][0]},{&l_1877[2][0],&l_1877[2][0],&l_1877[0][0],&l_1877[0][0],&l_1877[1][0]},{&l_1877[1][0],(void*)0,&l_1877[1][0],&l_1877[0][0],&l_1877[0][0]},{(void*)0,&l_1877[1][0],&l_1877[0][0],&l_1877[0][0],&l_1877[2][0]},{&l_1877[0][0],(void*)0,&l_1877[0][0],(void*)0,&l_1877[0][0]}}};
                    int32_t l_1883 = 1L;
                    int64_t *l_1889 = &g_23;
                    const int32_t *l_1891[5] = {&g_1839,&g_1839,&g_1839,&g_1839,&g_1839};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1877[i][j] = &g_1878;
                    }
                    if (((safe_sub_func_uint64_t_u_u((*g_709), (-4L))) && ((l_1879 = &l_1599) == ((safe_rshift_func_uint16_t_u_s((l_1883 = (*l_1870)), (safe_mul_func_uint8_t_u_u(251UL, (l_1886 || (((((*l_1889) = ((++(**l_1845)) , (*l_1592))) < (0x3352L > (l_1890 == &l_1869))) ^ (*g_100)) && 0UL)))))) , (void*)0))))
                    {
                        return l_1891[1];
                    }
                    else
                    {
                        (*l_1785) |= 1L;
                        g_1894[0][3][2] = l_1892;
                    }
                }
                else
                {
                    (*l_1890) = (*g_69);
                }
            }
            else
            {
                const int32_t *l_1900 = &l_1625;
                const int32_t **l_1906[4] = {&l_1904,&l_1904,&l_1904,&l_1904};
                int i;
                for (l_1620 = (-30); (l_1620 == 22); ++l_1620)
                {
                    const int32_t *l_1901[7][5][7] = {{{&l_1616,&l_1625,&g_166[4],&l_1620,&g_1839,(void*)0,&l_1620},{&l_1621,&g_166[4],&g_25,&g_681,&g_166[4],&l_1617[1],&l_1617[2]},{&l_1623[3],&l_1619,&l_1617[3],&l_1621,&l_1616,&g_166[4],&g_845},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_2,&g_681},{&g_845,&l_1621,&l_1617[3],&l_1616,&l_1621,(void*)0,(void*)0}},{{&l_1625,&l_1616,&g_845,&l_1619,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1625,(void*)0,&l_1620,(void*)0,&g_1839,&g_681},{&l_1621,&l_1625,&l_1626,&l_1621,&g_2,&g_1839,&g_845},{&g_1839,&g_1839,&l_1621,(void*)0,&g_845,&l_1621,&l_1617[2]},{&l_1621,(void*)0,&l_1617[3],&g_845,&g_2,&l_1620,&l_1620}},{{&l_1621,&l_1616,&g_1839,&l_1616,&l_1621,&g_166[4],&g_2},{(void*)0,&g_681,&l_1621,&l_1623[3],&g_681,(void*)0,&l_1623[3]},{&l_1616,&g_25,&g_2,&l_1625,(void*)0,&g_681,&g_1839},{(void*)0,&l_1623[3],(void*)0,&l_1625,&g_166[4],&g_2,&l_1619},{&l_1621,(void*)0,&g_845,&g_1839,&g_2,&g_845,&l_1617[1]}},{{&l_1621,&g_1839,(void*)0,&l_1626,&l_1621,&g_681,&g_2},{&g_1839,&l_1619,(void*)0,&l_1626,&l_1616,(void*)0,&l_1621},{&l_1621,(void*)0,(void*)0,&g_845,(void*)0,&l_1626,&l_1623[3]},{&l_1623[3],&g_1839,&l_1623[2],&g_2,&l_1621,(void*)0,&l_1621},{&g_166[4],&g_1839,&l_1616,&g_166[4],&l_1617[3],&l_1625,(void*)0}},{{(void*)0,&l_1623[3],&g_1839,&g_681,&g_845,(void*)0,(void*)0},{(void*)0,&g_845,&l_1621,&l_1617[3],(void*)0,&g_1839,&l_1617[3]},{(void*)0,(void*)0,&l_1621,&l_1616,&l_1616,&g_2,&l_1621},{&l_1623[3],&g_1839,&l_1617[3],&g_2,&l_1617[3],&g_1839,&l_1623[3]},{&l_1617[3],&l_1616,&g_25,&l_1617[1],(void*)0,&g_2,&g_845}},{{&l_1616,&l_1617[3],&g_1839,&l_1623[3],&l_1621,&l_1616,(void*)0},{&g_845,&l_1616,&g_25,(void*)0,&l_1621,&l_1617[3],&l_1626},{&l_1626,&l_1616,&l_1617[3],&l_1623[3],&l_1621,&l_1621,&l_1623[3]},{&l_1625,(void*)0,&l_1621,&l_1621,(void*)0,&l_1619,&l_1617[3]},{&g_845,&g_1839,&l_1621,&l_1621,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_681,&g_1839,(void*)0,&l_1623[3],&l_1617[3],&g_681},{(void*)0,(void*)0,&l_1616,&g_1839,(void*)0,&l_1626,(void*)0},{&l_1623[3],&g_25,&l_1623[2],&g_1839,&g_25,&l_1617[3],&l_1625},{(void*)0,&l_1623[3],(void*)0,(void*)0,(void*)0,&g_845,(void*)0},{(void*)0,&g_2,&l_1621,&l_1621,&l_1619,&g_2,&l_1621}}};
                    int i, j, k;
                    for (l_1625 = 0; (l_1625 != 9); ++l_1625)
                    {
                        const int32_t *l_1902[6][6] = {{&l_1616,&l_1616,&l_1616,&l_1616,&l_1616,&l_1616},{&l_1616,&l_1616,&l_1616,&l_1616,&l_1616,&l_1616},{&l_1616,&l_1616,&l_1616,&l_1616,&l_1616,&l_1616},{&l_1616,&l_1616,&l_1616,&l_1616,&l_1616,&l_1616},{&l_1616,&l_1616,&l_1616,&l_1616,&l_1616,&l_1616},{&l_1616,&l_1616,&l_1616,&l_1616,&l_1616,&l_1616}};
                        int i, j;
                        return l_1903;
                    }
                    return l_1905;
                }
                l_1698[0] = l_1900;
            }
            (*l_1890) = (*l_1890);
        }
        else
        {
            for (g_23 = 0; (g_23 == (-3)); g_23 = safe_sub_func_int64_t_s_s(g_23, 1))
            {
                for (l_1710 = 0; (l_1710 > 2); l_1710 = safe_add_func_int32_t_s_s(l_1710, 9))
                {
                    int8_t l_1911 = 0xDCL;
                    for (g_53 = 0; (g_53 <= 4); g_53 += 1)
                    {
                        return &g_166[4];
                    }
                    l_1911 ^= 1L;
                    (*l_1592) = (safe_rshift_func_uint16_t_u_s(p_47, 11));
                }
                if (p_47)
                    break;
            }
        }
    }
    (*l_1890) = &g_25;
    (**l_1890) = (((safe_mod_func_uint8_t_u_u((*g_100), (p_47 | ((l_1920 ^= ((!(~p_47)) , (safe_lshift_func_uint8_t_u_s((*g_100), 3)))) || ((safe_lshift_func_uint8_t_u_s((*g_100), 5)) != (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((((g_166[4] ^= (**l_1890)) < (safe_div_func_uint64_t_u_u((**l_1890), (((*l_1932) = ((l_1931[0] = ((safe_mul_func_int8_t_s_s(((*l_1609) = (p_47 & (**l_1890))), p_47)) ^ 9UL)) || g_946)) ^ (-1L))))) | 0x8CL), (*l_1904))) , (-7L)), p_47))))))) && (**l_1890)) , p_47);
    return (*l_1890);
}







static int64_t func_57(int32_t * p_58, int32_t p_59, int64_t * p_60)
{
    int64_t l_1247[4] = {0x8E068F493B74436DLL,0x8E068F493B74436DLL,0x8E068F493B74436DLL,0x8E068F493B74436DLL};
    int32_t l_1310 = 0L;
    int32_t l_1313 = 8L;
    int32_t l_1314[7];
    uint16_t l_1493 = 0x031BL;
    int64_t l_1496 = 0x6897E9609F2B3800LL;
    int8_t *l_1557 = &g_292;
    const uint64_t *l_1559 = &g_496[2][0][1];
    const uint64_t **l_1558 = &l_1559;
    uint16_t **l_1561[1];
    uint16_t ** const *l_1560 = &l_1561[0];
    int32_t **l_1568 = &g_159;
    int32_t *l_1570 = &l_1314[0];
    int32_t **l_1569 = &l_1570;
    int32_t *l_1575 = &l_1313;
    int i;
    for (i = 0; i < 7; i++)
        l_1314[i] = 9L;
    for (i = 0; i < 1; i++)
        l_1561[i] = &g_1294[0];
    for (g_227 = (-11); (g_227 == 17); ++g_227)
    {
        const int64_t l_1233 = 1L;
        int32_t *l_1253 = &g_2;
        uint8_t l_1254[2][1];
        int32_t l_1266[1][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)}};
        int64_t l_1278 = 8L;
        int64_t l_1312 = 0L;
        uint32_t l_1321 = 18446744073709551609UL;
        uint64_t l_1328 = 2UL;
        uint64_t l_1368 = 0xB19A3E46B6501D70LL;
        uint16_t l_1415 = 65526UL;
        uint32_t *l_1418 = (void*)0;
        int16_t l_1444 = 0xBFE0L;
        int32_t l_1446 = 0x40CF735EL;
        int16_t l_1505 = 0L;
        uint32_t l_1507 = 4UL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_1254[i][j] = 0x2EL;
        }
        (*g_159) = (~(-1L));
        for (g_1054 = 0; (g_1054 > 42); g_1054 = safe_add_func_uint32_t_u_u(g_1054, 7))
        {
            uint16_t l_1268[7][5] = {{0x94BDL,3UL,0x1CFFL,0x1CFFL,3UL},{0x94BDL,3UL,0x1CFFL,0x1CFFL,3UL},{0x94BDL,3UL,0x1CFFL,0x1CFFL,3UL},{0x94BDL,3UL,0x1CFFL,0x1CFFL,3UL},{0x94BDL,3UL,3UL,3UL,0x7CB3L},{65535UL,0x7CB3L,3UL,3UL,0x7CB3L},{65535UL,0x7CB3L,3UL,3UL,0x7CB3L}};
            int32_t l_1271 = 0x94272B80L;
            int32_t l_1272 = 0xD5D6F262L;
            int32_t l_1275 = 0x253C19A9L;
            int32_t l_1276 = 0x0046FA93L;
            uint64_t ***l_1290 = (void*)0;
            int64_t l_1318[9] = {0x3C9EAD516624310FLL,0x3C9EAD516624310FLL,0x3C9EAD516624310FLL,0x3C9EAD516624310FLL,0x3C9EAD516624310FLL,0x3C9EAD516624310FLL,0x3C9EAD516624310FLL,0x3C9EAD516624310FLL,0x3C9EAD516624310FLL};
            uint16_t **l_1357 = &g_820;
            uint16_t ** const *l_1356 = &l_1357;
            int64_t l_1361 = 0x5E4E7A94B4FA5EB9LL;
            uint8_t *l_1364 = &g_391[4][0][0];
            int32_t *l_1367[4][7][1] = {{{&l_1313},{&g_25},{(void*)0},{&g_25},{&l_1313},{&g_845},{&l_1313}},{{&g_25},{(void*)0},{&g_25},{&l_1313},{&g_845},{&l_1313},{&g_25}},{{(void*)0},{&g_25},{&l_1313},{&g_845},{&l_1313},{&g_25},{(void*)0}},{{&g_25},{&l_1313},{&g_845},{&l_1313},{&g_25},{(void*)0},{&g_25}}};
            int i, j, k;
            for (g_288 = 0; (g_288 >= (-21)); g_288 = safe_sub_func_uint64_t_u_u(g_288, 9))
            {
                int8_t *l_1252 = &g_292;
                int32_t l_1257 = 1L;
                int32_t l_1265 = 0x327477D0L;
                int16_t l_1277[7][7] = {{1L,0x9DA8L,0x1FFAL,0L,0x6072L,(-1L),0xC882L},{0x1887L,0xDD87L,7L,0x9416L,5L,0x9B13L,1L},{0x1FFAL,0x9416L,0xC882L,0L,7L,7L,0L},{0xA571L,1L,0xA571L,(-1L),7L,0x6A7DL,1L},{0xDD87L,0x9B13L,0xC3C6L,1L,5L,0x9DA8L,0L},{1L,0xC3C6L,0x9B13L,0xDD87L,0x6072L,0x6A7DL,0x6A7DL},{(-1L),0xA571L,1L,0xA571L,(-1L),7L,0x6A7DL}};
                uint64_t * const *l_1284[7] = {&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709};
                int64_t *****l_1295 = &g_1163[1];
                const int64_t l_1300 = (-5L);
                int32_t l_1319 = 0xCFA88499L;
                int32_t l_1320 = 1L;
                int i, j;
                if (((*g_159) = (((safe_sub_func_int32_t_s_s((p_59 ^ ((l_1233 & ((safe_div_func_uint8_t_u_u((!((safe_div_func_int16_t_s_s(p_59, (safe_div_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_sub_func_int64_t_s_s((p_59 && (safe_rshift_func_int8_t_s_s((l_1247[0] && (safe_rshift_func_uint16_t_u_u(65535UL, 8))), ((safe_sub_func_int8_t_s_s(((*l_1252) = l_1247[0]), (((l_1247[2] ^ (*g_159)) , 0xBCL) | 0xE5L))) != 0x88DAL)))), (*g_709))) & l_1233), p_59)) , 0x3CBCL), l_1233)))) < 0x13DEL)), 0x54L)) | 0UL)) != l_1233)), (*g_159))) , p_59) > (*p_60))))
                {
                    (*g_69) = &p_59;
                    (*g_159) ^= l_1247[1];
                    (*g_69) = l_1253;
                    return l_1254[1][0];
                }
                else
                {
                    int64_t l_1258 = 0x70B9DC7AD2AD89E8LL;
                    int32_t l_1261 = (-4L);
                    int32_t l_1267 = 0x2CDA309FL;
                    int32_t l_1273 = 0xDB10719CL;
                    int32_t l_1274[9][5][5] = {{{0x7F6F1BBCL,(-3L),0xEED82832L,0xA6A38777L,0x91E24E4FL},{0xCDEC38A3L,1L,0x93DD025AL,0xE131D637L,(-1L)},{0xCC5151EDL,0L,0L,0x91E24E4FL,1L},{6L,0xCC5151EDL,0xCE9E63AAL,1L,0xA6A38777L},{0x8B0C501BL,0x0E2F43FFL,1L,0x70427674L,(-1L)}},{{1L,0x50BD0E05L,0x50BD0E05L,1L,(-1L)},{6L,0xBC2AC03FL,(-6L),0xF09D620FL,1L},{0xED3A8BD3L,5L,0x8B0C501BL,0L,1L},{1L,0x88A1DE39L,6L,0xF09D620FL,0xE131D637L},{0x7F6F1BBCL,0xA6A38777L,6L,1L,0x0E2F43FFL}},{{0x1CF724F3L,1L,(-1L),0x70427674L,1L},{0xAE52F6D7L,0xCDEC38A3L,0xD26A9E00L,1L,0x50BD0E05L},{1L,0xA6A38777L,1L,0x91E24E4FL,0xF1AAAD6BL},{0x9B1186A1L,0x21EF2727L,8L,0xE131D637L,(-3L)},{0xF09D620FL,0x04893715L,(-1L),0xA6A38777L,0xFD83E84FL}},{{0x048B2EEEL,0xBC2AC03FL,5L,(-3L),0xAE52F6D7L},{0xFD83E84FL,0xAE52F6D7L,0x8D2AE2F1L,8L,0L},{0xCDEC38A3L,0x122F65E0L,2L,(-1L),0x122F65E0L},{0x8DAC4123L,0x431A610BL,1L,1L,0xCDEC38A3L},{(-1L),0xD26A9E00L,(-6L),0xEED82832L,0x3F075446L}},{{0x8D2AE2F1L,(-6L),1L,0x38B2B116L,5L},{1L,(-1L),(-4L),0x431A610BL,0xC868825AL},{(-1L),0x8B0C501BL,(-3L),0x1A40E32DL,0xED3A8BD3L},{0xCDEC38A3L,(-8L),5L,8L,5L},{0xEBDE5F11L,0xEBDE5F11L,0xF1AAAD6BL,0x431A610BL,8L}},{{6L,8L,(-8L),0L,0x8DAC4123L},{0xFD83E84FL,0x1A40E32DL,0x3156D105L,0L,(-3L)},{0x38B2B116L,8L,1L,1L,(-9L)},{5L,0xEBDE5F11L,0x116165CCL,2L,0x93DD025AL},{0L,(-8L),0x1A40E32DL,0x93DD025AL,1L}},{{0x9B1186A1L,0x8B0C501BL,0xB849CFE4L,(-1L),(-9L)},{1L,(-1L),(-1L),5L,0xE131D637L},{0x3F075446L,(-6L),0x11D8FD3CL,0xCDEC38A3L,(-1L)},{0x431A610BL,0xD26A9E00L,(-3L),0xE131D637L,8L},{(-3L),0x431A610BL,(-3L),1L,0x7FF7BBF5L}},{{0x50BD0E05L,0x122F65E0L,0x1A40E32DL,8L,0x11D8FD3CL},{0x50BD0E05L,0L,1L,0x50BD0E05L,0xC868825AL},{(-3L),0xCDEC38A3L,1L,0L,0x70427674L},{0x431A610BL,(-1L),0x3156D105L,0x8DAC4123L,1L},{0x3F075446L,0xE0FBDA6AL,5L,0xFD83E84FL,0xCDEC38A3L}},{{1L,0x7FF7BBF5L,0L,0x3156D105L,0x8D2AE2F1L},{0x9B1186A1L,1L,5L,8L,0xEED82832L},{0L,0x3F075446L,4L,0x3F075446L,0L},{5L,0x7FF7BBF5L,0x122F65E0L,(-3L),0xEBDE5F11L},{0x38B2B116L,(-1L),1L,0xCDEC38A3L,1L}}};
                    int32_t l_1299 = 0L;
                    int i, j, k;
                    for (g_25 = 22; (g_25 >= 9); --g_25)
                    {
                        int32_t *l_1259 = (void*)0;
                        int32_t *l_1260 = &g_166[4];
                        int32_t *l_1262 = &g_2;
                        int32_t *l_1263 = &g_845;
                        int32_t *l_1264[3];
                        uint32_t l_1279 = 0UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1264[i] = (void*)0;
                        (*g_69) = &p_59;
                        l_1268[1][4]--;
                        l_1279--;
                        return (*p_60);
                    }
                    (*g_69) = ((safe_add_func_int16_t_s_s(((l_1257 == (*g_159)) != p_59), ((g_166[4] , l_1284[2]) != ((*g_707) = (*g_707))))) , &l_1275);
                    for (l_1257 = 0; (l_1257 != 12); l_1257 = safe_add_func_uint64_t_u_u(l_1257, 4))
                    {
                        uint16_t l_1289 = 0xC047L;
                        uint16_t **l_1293 = &g_820;
                        uint32_t *l_1301 = (void*)0;
                        uint32_t *l_1302[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1302[i] = (void*)0;
                        (**g_69) ^= ((l_1272 = ((safe_mul_func_int8_t_s_s(((((l_1289 & ((void*)0 == l_1290)) | l_1258) ^ ((safe_rshift_func_uint16_t_u_s((((((*l_1293) = &g_156) == (g_1294[0] = &l_1268[1][4])) != ((g_1296 = l_1295) == (((safe_rshift_func_int16_t_s_u(((((*p_60) = 1L) | p_59) , l_1299), l_1247[0])) , l_1277[0][5]) , &g_1163[0]))) == 0x88292E66L), g_224)) > l_1300)) <= 8UL), (*l_1253))) ^ 0UL)) ^ 0xECD35563L);
                        return l_1273;
                    }
                }
                for (g_845 = (-6); (g_845 == (-8)); --g_845)
                {
                    int32_t *l_1305 = &g_681;
                    int32_t *l_1306 = &l_1266[0][1];
                    int32_t *l_1307 = &g_166[4];
                    int32_t *l_1308 = &g_166[4];
                    int32_t *l_1309 = (void*)0;
                    int32_t *l_1311 = (void*)0;
                    int32_t *l_1315 = &l_1313;
                    int32_t *l_1316 = &l_1314[0];
                    int32_t *l_1317[6] = {&l_1313,&l_1313,&l_1313,&l_1313,&l_1313,&l_1313};
                    int i;
                    ++l_1321;
                    (*g_70) = 0x6754E106L;
                    if ((*g_159))
                        continue;
                }
            }
            for (g_374 = 0; (g_374 > 19); g_374++)
            {
                int32_t *l_1326 = (void*)0;
                int32_t *l_1327[7][3][2] = {{{&g_2,&g_2},{&l_1271,&g_2},{&g_2,&l_1271}},{{&g_2,&g_2},{&l_1271,&g_2},{&g_2,&l_1271}},{{&g_2,&g_2},{&l_1271,&g_2},{&g_2,&l_1271}},{{&g_2,&g_2},{&l_1271,&g_2},{&g_2,&l_1271}},{{&g_2,&g_2},{&l_1271,&g_2},{&g_2,&l_1271}},{{&g_2,&g_2},{&l_1271,&g_2},{&g_2,&l_1271}},{{&g_2,&g_2},{&l_1271,&g_2},{&g_2,&l_1271}}};
                const uint16_t *l_1360 = &l_1268[1][2];
                const uint16_t **l_1359[3];
                const uint16_t ***l_1358 = &l_1359[0];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1359[i] = &l_1360;
                l_1328++;
                for (g_681 = 0; (g_681 <= 4); g_681 += 1)
                {
                    int i, j;
                    for (g_347 = 0; (g_347 <= 8); g_347 += 1)
                    {
                        int32_t l_1331 = 3L;
                        int i, j;
                        (*g_69) = &p_59;
                        l_1331 &= l_1268[(g_681 + 1)][g_681];
                    }
                    if (l_1268[(g_681 + 1)][g_681])
                        break;
                }
                if (l_1275)
                {
                    (*l_1253) = l_1314[0];
                }
                else
                {
                    int32_t l_1334 = 0xFA135530L;
                    uint32_t l_1335 = 9UL;
                    for (l_1321 = 23; (l_1321 >= 39); l_1321++)
                    {
                        (*g_159) &= ((*g_709) , ((*g_100) , (*l_1253)));
                    }
                    --l_1335;
                }
                (*l_1253) &= ((safe_add_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0x2AB7L, (((safe_mul_func_int16_t_s_s((1UL ^ l_1272), ((!(safe_sub_func_int32_t_s_s((((void*)0 == g_611) & (+(safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((0x35L > 3L), (l_1356 != l_1358))), 2)))), 1L))) ^ (-7L)))) <= l_1276) ^ 18446744073709551614UL))), (-1L))), 15)) || l_1361) != 0x2BL), g_292)) , (*g_159));
            }
            (*l_1253) = ((safe_mod_func_uint8_t_u_u(((*l_1253) , p_59), ((*l_1364) = ((*g_100) &= ((void*)0 != &g_292))))) , (safe_mul_func_uint16_t_u_u(p_59, g_681)));
            ++l_1368;
        }
        for (g_154 = 2; (g_154 < (-27)); g_154 = safe_sub_func_int16_t_s_s(g_154, 6))
        {
            (*g_69) = &p_59;
        }
        for (g_224 = 10; (g_224 == 48); ++g_224)
        {
            int16_t l_1381 = 1L;
            int64_t ****l_1402 = &g_775[2];
            int32_t l_1414 = 1L;
            int64_t **l_1422 = (void*)0;
            int32_t l_1442 = 0xAAA4F487L;
            int32_t l_1443 = 9L;
            int32_t l_1445 = 0xFCD04CC9L;
            int32_t l_1447 = 0x308123D9L;
            int32_t l_1448 = 0L;
            int32_t l_1450[5][3][9] = {{{0x8B60A574L,1L,(-6L),0L,0x21BA541EL,(-6L),(-1L),(-1L),(-6L)},{9L,0L,0x2EA6E230L,0L,9L,0x2EA6E230L,0x6B2EF417L,0x6B2EF417L,0x2EA6E230L},{0x21BA541EL,0L,(-6L),0L,0x21BA541EL,(-6L),(-1L),(-1L),(-6L)}},{{9L,0L,0x2EA6E230L,0L,9L,0x2EA6E230L,0x6B2EF417L,0x6B2EF417L,0x2EA6E230L},{0x21BA541EL,0L,(-6L),0L,0x21BA541EL,(-6L),(-1L),(-1L),(-6L)},{9L,0L,0x2EA6E230L,0L,9L,0x2EA6E230L,0x6B2EF417L,0x6B2EF417L,0x2EA6E230L}},{{0x21BA541EL,0L,(-6L),0L,0x21BA541EL,(-6L),(-1L),(-1L),(-6L)},{9L,0L,0x2EA6E230L,0L,9L,0x2EA6E230L,0x6B2EF417L,0x6B2EF417L,0x2EA6E230L},{0x21BA541EL,0L,(-6L),0L,0x21BA541EL,(-6L),(-1L),(-1L),(-6L)}},{{9L,0L,0x2EA6E230L,0L,9L,0x2EA6E230L,0x6B2EF417L,0x6B2EF417L,0x2EA6E230L},{0x21BA541EL,0L,(-6L),0L,0x21BA541EL,(-6L),(-1L),(-1L),(-6L)},{9L,0L,0x2EA6E230L,0L,9L,0x2EA6E230L,0x6B2EF417L,0x6B2EF417L,0x2EA6E230L}},{{0x21BA541EL,0L,(-6L),0L,0x21BA541EL,(-6L),(-1L),(-1L),(-6L)},{9L,0L,0x2EA6E230L,0L,9L,0x2EA6E230L,0x6B2EF417L,0x6B2EF417L,0x2EA6E230L},{0x21BA541EL,0L,(-6L),0L,0x21BA541EL,(-6L),(-1L),(-1L),(-6L)}}};
            int64_t l_1453 = 1L;
            uint32_t *l_1469 = &g_131;
            uint8_t l_1544 = 0x00L;
            uint16_t l_1567 = 0x1099L;
            int i, j, k;
            for (g_53 = (-22); (g_53 == 27); ++g_53)
            {
                int64_t l_1383 = 1L;
                (*g_159) = (safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((l_1314[0] ^= l_1381), (+(l_1383 , (safe_mod_func_int32_t_s_s(((!1L) >= 0UL), l_1247[3])))))), 9));
                return l_1381;
            }
            for (g_131 = 0; (g_131 == 49); g_131++)
            {
                uint16_t l_1393 = 0xC1A4L;
                int32_t l_1441[2];
                int8_t l_1452 = 1L;
                int32_t l_1489 = (-6L);
                int32_t **l_1490 = &l_1253;
                int i;
                for (i = 0; i < 2; i++)
                    l_1441[i] = 0L;
                for (g_25 = 0; (g_25 <= 0); g_25 += 1)
                {
                    int8_t l_1408 = (-1L);
                    int32_t l_1413 = 0xF1BEA11AL;
                    uint32_t **l_1419 = (void*)0;
                    uint32_t **l_1420[10][4][4] = {{{&l_1418,(void*)0,&l_1418,&l_1418},{(void*)0,(void*)0,&l_1418,(void*)0},{&l_1418,&l_1418,&l_1418,(void*)0},{&l_1418,&l_1418,&l_1418,&l_1418}},{{&l_1418,&l_1418,&l_1418,&l_1418},{&l_1418,&l_1418,(void*)0,&l_1418},{&l_1418,&l_1418,&l_1418,&l_1418},{&l_1418,&l_1418,&l_1418,&l_1418}},{{&l_1418,&l_1418,&l_1418,&l_1418},{&l_1418,&l_1418,&l_1418,&l_1418},{&l_1418,(void*)0,&l_1418,&l_1418},{&l_1418,&l_1418,&l_1418,&l_1418}},{{&l_1418,&l_1418,(void*)0,&l_1418},{&l_1418,&l_1418,(void*)0,&l_1418},{&l_1418,&l_1418,&l_1418,&l_1418},{&l_1418,&l_1418,&l_1418,&l_1418}},{{(void*)0,&l_1418,(void*)0,(void*)0},{&l_1418,&l_1418,(void*)0,&l_1418},{&l_1418,&l_1418,&l_1418,(void*)0},{(void*)0,&l_1418,&l_1418,&l_1418}},{{&l_1418,&l_1418,&l_1418,(void*)0},{&l_1418,&l_1418,&l_1418,&l_1418},{&l_1418,&l_1418,&l_1418,&l_1418},{&l_1418,&l_1418,&l_1418,&l_1418}},{{&l_1418,&l_1418,&l_1418,(void*)0},{&l_1418,&l_1418,&l_1418,&l_1418},{&l_1418,&l_1418,&l_1418,&l_1418},{&l_1418,&l_1418,&l_1418,&l_1418}},{{&l_1418,(void*)0,&l_1418,&l_1418},{&l_1418,&l_1418,&l_1418,&l_1418},{&l_1418,&l_1418,&l_1418,(void*)0},{&l_1418,&l_1418,&l_1418,(void*)0}},{{&l_1418,&l_1418,&l_1418,&l_1418},{(void*)0,&l_1418,&l_1418,&l_1418},{&l_1418,(void*)0,(void*)0,&l_1418},{&l_1418,&l_1418,(void*)0,&l_1418}},{{(void*)0,&l_1418,&l_1418,(void*)0},{&l_1418,&l_1418,&l_1418,&l_1418},{&l_1418,(void*)0,&l_1418,&l_1418},{&l_1418,&l_1418,&l_1418,&l_1418}}};
                    int32_t l_1449[8][9][3] = {{{(-1L),5L,(-1L)},{0x439C0939L,(-1L),1L},{0xBF085D94L,5L,0L},{(-1L),0L,0x1ED18EAEL},{5L,0x5CDCCB0AL,0xA24A6A51L},{0xA2B8EB87L,1L,(-2L)},{(-1L),(-5L),7L},{(-1L),1L,1L},{(-5L),0x5CDCCB0AL,7L}},{{(-2L),0L,(-9L)},{0xEAB37DDCL,5L,1L},{0xA2B8EB87L,(-1L),(-1L)},{(-6L),5L,7L},{0x39C96961L,0L,3L},{0xBF085D94L,0x5CDCCB0AL,0xA6A02649L},{0xD4BE9096L,1L,0x1ED18EAEL},{0xEAB37DDCL,(-5L),5L},{1L,1L,(-1L)}},{{0x0DB0220DL,0x5CDCCB0AL,(-1L)},{(-1L),0L,0x88858CBBL},{6L,5L,7L},{0xD4BE9096L,(-1L),0L},{5L,5L,5L},{0L,0L,(-2L)},{(-6L),0x5CDCCB0AL,(-1L)},{0x439C0939L,1L,3L},{6L,(-5L),0L}},{{(-2L),1L,0L},{0x8ECE1760L,0x5CDCCB0AL,1L},{1L,0x66CFE852L,0xA124F512L},{0L,0xA96CB08CL,(-1L)},{1L,(-4L),(-10L)},{(-1L),0xA96CB08CL,0x23BBACD5L},{0xA5461B5AL,0x66CFE852L,0xC401DD87L},{1L,(-1L),0L},{0L,(-10L),1L}},{{0L,0L,2L},{3L,(-10L),(-10L)},{(-1L),(-1L),0L},{(-2L),0x66CFE852L,0xF98C9269L},{5L,0xA96CB08CL,0xF18C7726L},{0L,(-4L),0xDA89D1B1L},{7L,0xA96CB08CL,2L},{0x88858CBBL,0x66CFE852L,7L},{(-1L),(-1L),0xB92960A4L}},{{(-1L),(-10L),0xC401DD87L},{5L,0L,0xA96CB08CL},{0x1ED18EAEL,(-10L),0xDA89D1B1L},{0xA6A02649L,(-1L),(-1L)},{3L,0x66CFE852L,0x7572DC75L},{7L,0xA96CB08CL,0L},{(-1L),(-4L),0L},{1L,0xA96CB08CL,0xA96CB08CL},{(-9L),0x66CFE852L,1L}},{{7L,(-1L),0L},{1L,(-10L),7L},{7L,0L,0x23BBACD5L},{(-2L),(-10L),0L},{0xA24A6A51L,(-1L),0xF18C7726L},{0x1ED18EAEL,0x66CFE852L,0xA124F512L},{0L,0xA96CB08CL,(-1L)},{1L,(-4L),(-10L)},{(-1L),0xA96CB08CL,0x23BBACD5L}},{{0xA5461B5AL,0x66CFE852L,0xC401DD87L},{1L,(-1L),0L},{0L,(-10L),1L},{0L,0L,2L},{3L,(-10L),(-10L)},{(-1L),(-1L),0L},{(-2L),0x66CFE852L,0xF98C9269L},{5L,0xA96CB08CL,0xF18C7726L},{0L,(-4L),0xDA89D1B1L}}};
                    int i, j, k;
                    for (l_1278 = 0; (l_1278 <= 0); l_1278 += 1)
                    {
                        uint16_t **l_1401 = &g_1294[0];
                        uint16_t ***l_1400 = &l_1401;
                        int8_t *l_1403 = &g_292;
                        int32_t *l_1404 = &l_1266[0][3];
                        int32_t l_1405 = (-1L);
                        int32_t *l_1406 = &g_845;
                        int32_t *l_1407 = (void*)0;
                        int32_t *l_1409 = (void*)0;
                        int32_t *l_1410 = &l_1405;
                        int32_t *l_1411 = &l_1266[0][1];
                        int32_t *l_1412[4] = {&l_1314[0],&l_1314[0],&l_1314[0],&l_1314[0]};
                        int i, j, k;
                        (*l_1404) |= ((g_496[(g_25 + 4)][l_1278][(g_25 + 2)] , (safe_div_func_int64_t_s_s((((*l_1403) ^= ((((l_1393 && 0x97L) == (0L ^ (safe_sub_func_uint64_t_u_u(18446744073709551615UL, ((((safe_lshift_func_int8_t_s_s(p_59, ((safe_sub_func_int64_t_s_s(((((void*)0 != l_1400) >= (*l_1253)) && l_1381), p_59)) | p_59))) , l_1402) == (*g_1296)) <= 0UL))))) , (*p_60)) ^ 18446744073709551614UL)) ^ 1L), 0x549127F5A51B43C5LL))) , p_59);
                        l_1415--;
                        (*g_69) = &p_59;
                        if ((*g_159))
                            break;
                    }
                    if (((g_1421 = l_1418) != p_58))
                    {
                        p_59 = (&p_60 == l_1422);
                        if ((*g_159))
                            continue;
                        (*l_1253) = ((void*)0 != &l_1254[1][0]);
                    }
                    else
                    {
                        int8_t l_1423 = (-5L);
                        int32_t *l_1424 = &g_166[0];
                        int32_t *l_1425 = (void*)0;
                        int32_t *l_1426 = (void*)0;
                        int32_t *l_1427 = &l_1266[0][1];
                        int32_t *l_1428 = &l_1414;
                        int32_t *l_1429 = &l_1266[0][1];
                        int32_t *l_1430 = &g_845;
                        int32_t *l_1431 = &g_2;
                        int32_t *l_1432 = &l_1314[4];
                        int32_t *l_1433 = &l_1413;
                        int32_t *l_1434 = &l_1314[0];
                        int32_t *l_1435 = &g_166[1];
                        int32_t *l_1436 = &l_1413;
                        int32_t *l_1437 = &g_166[4];
                        int32_t *l_1438 = (void*)0;
                        int32_t *l_1439 = (void*)0;
                        int32_t *l_1440[2];
                        int32_t l_1451 = 0L;
                        int64_t l_1454 = (-2L);
                        uint64_t l_1455[1];
                        uint32_t *l_1465[5][9] = {{&g_1054,&g_1054,&g_1054,(void*)0,&g_347,&g_347,&g_347,(void*)0,&g_1054},{&g_1054,&g_1054,&g_1054,&g_131,&g_1054,&g_1054,&g_347,&g_1054,&g_347},{&g_1054,(void*)0,&g_1054,&g_1054,(void*)0,&g_1054,&g_131,&g_1054,&g_131},{&g_1054,(void*)0,&g_1054,&g_131,(void*)0,(void*)0,&g_131,&g_1054,(void*)0},{(void*)0,&g_347,&g_1054,&g_347,&g_1054,(void*)0,&g_131,&g_131,(void*)0}};
                        uint64_t *l_1477 = &l_1368;
                        uint8_t *l_1488 = &l_1254[1][0];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_1440[i] = &g_845;
                        for (i = 0; i < 1; i++)
                            l_1455[i] = 0x5A201FCE19F734B4LL;
                        --l_1455[0];
                        (*l_1436) = (((safe_lshift_func_uint8_t_u_s((l_1450[1][2][2] = (safe_mod_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s((p_59 , ((safe_unary_minus_func_int32_t_s((((*l_1253) = ((((--g_347) == (safe_unary_minus_func_int32_t_s(((0L | ((l_1469 != &g_1054) == (~(((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((((((*l_1477) = ((***g_707) = (g_496[(g_25 + 8)][g_25][(g_25 + 1)]--))) | (((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((((void*)0 == &g_227) < (safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((*l_1488) ^= (*g_100)), p_59)), (((*l_1253) , l_1314[2]) >= 3L))) != 0x45003109E6A590CALL), 1L))), l_1449[1][2][0])) != l_1489), p_59)) || p_59) >= 0L)) >= p_59) != 8L), p_59)), l_1450[0][2][7])) < l_1450[2][0][6]) , (-1L))))) ^ 1L)))) | (*l_1253)) ^ (*l_1253))) != l_1443))) != (*g_100))), 4)) >= (*p_60)), p_59))), l_1452)) > p_59) || 0x48D8L);
                    }
                }
                (*l_1490) = ((*g_69) = &g_845);
                (*g_69) = (*g_69);
            }
            for (g_845 = (-22); (g_845 >= (-22)); g_845 = safe_add_func_int8_t_s_s(g_845, 2))
            {
                uint8_t l_1510[8] = {253UL,1UL,253UL,253UL,1UL,253UL,253UL,1UL};
                int32_t l_1534 = 0xBD538CD2L;
                int32_t l_1539 = 0x56E517FBL;
                int32_t l_1543 = 1L;
                uint32_t * const l_1564 = &l_1321;
                int i;
                if (l_1493)
                    break;
                for (g_132 = 0; (g_132 == 10); g_132 = safe_add_func_int64_t_s_s(g_132, 9))
                {
                    int64_t l_1506[8][5][6] = {{{0x37DEA093C499C33CLL,(-4L),0x2FDD94D3293D5C5CLL,(-4L),0x37DEA093C499C33CLL,0x761182EB714C54F6LL},{0L,0x6804F76F778AAFD7LL,0x2FDD94D3293D5C5CLL,1L,1L,1L},{0x2FDD94D3293D5C5CLL,0x761182EB714C54F6LL,0xB41A0E63FBA1DAC8LL,0x6804F76F778AAFD7LL,(-10L),1L},{0L,0x37930DA7CE39A2D2LL,0x2FDD94D3293D5C5CLL,0x826AEDB3AD4087B1LL,(-1L),0x83162A6BA13AEE3ALL},{(-10L),(-1L),1L,(-1L),0L,0x37930DA7CE39A2D2LL}},{{(-1L),(-4L),0L,1L,0x452D34D5667B278FLL,1L},{(-1L),1L,0x37DEA093C499C33CLL,(-1L),0x37DEA093C499C33CLL,1L},{(-10L),(-1L),0x9607A382C399196ELL,0x826AEDB3AD4087B1LL,(-1L),0x4409F5E50B520C60LL},{0L,0x742E231B0DD590C5LL,(-7L),0x6804F76F778AAFD7LL,4L,1L},{0x2FDD94D3293D5C5CLL,0x742E231B0DD590C5LL,(-1L),1L,(-1L),0x761182EB714C54F6LL}},{{0L,(-1L),6L,0xB356CA1E4050223ELL,0x37DEA093C499C33CLL,(-1L)},{0xB41A0E63FBA1DAC8LL,1L,0xBD5BF46FA30D0BFELL,0x83162A6BA13AEE3ALL,0x452D34D5667B278FLL,0x742E231B0DD590C5LL},{4L,(-4L),0xBD5BF46FA30D0BFELL,(-1L),0L,(-1L)},{6L,(-1L),6L,0x4409F5E50B520C60LL,(-1L),0x761182EB714C54F6LL},{1L,0x37930DA7CE39A2D2LL,(-1L),0xC592D0764C2BF919LL,(-10L),1L}},{{0x2B7B6C844ACD2DFELL,0x761182EB714C54F6LL,(-7L),0xC592D0764C2BF919LL,1L,0x4409F5E50B520C60LL},{1L,0x6804F76F778AAFD7LL,0x9607A382C399196ELL,0x4409F5E50B520C60LL,0xB41A0E63FBA1DAC8LL,1L},{6L,0xB356CA1E4050223ELL,0x37DEA093C499C33CLL,(-1L),(-7L),1L},{4L,0xC592D0764C2BF919LL,0L,0x83162A6BA13AEE3ALL,(-7L),0x37930DA7CE39A2D2LL},{0xB41A0E63FBA1DAC8LL,0xB356CA1E4050223ELL,1L,0xB356CA1E4050223ELL,0xB41A0E63FBA1DAC8LL,0x83162A6BA13AEE3ALL}},{{0L,0x6804F76F778AAFD7LL,0x2FDD94D3293D5C5CLL,1L,1L,1L},{0x2FDD94D3293D5C5CLL,0x761182EB714C54F6LL,0xB41A0E63FBA1DAC8LL,0x6804F76F778AAFD7LL,(-10L),1L},{0L,0x37930DA7CE39A2D2LL,0x2FDD94D3293D5C5CLL,0x826AEDB3AD4087B1LL,(-1L),0x83162A6BA13AEE3ALL},{(-10L),(-1L),1L,(-1L),0L,0x37930DA7CE39A2D2LL},{(-1L),(-4L),0L,1L,0x452D34D5667B278FLL,1L}},{{(-1L),1L,0x37DEA093C499C33CLL,(-1L),0x37DEA093C499C33CLL,1L},{(-10L),(-1L),0x9607A382C399196ELL,0x826AEDB3AD4087B1LL,(-1L),0x4409F5E50B520C60LL},{0L,0x742E231B0DD590C5LL,(-7L),0x6804F76F778AAFD7LL,4L,1L},{0x2FDD94D3293D5C5CLL,0x742E231B0DD590C5LL,(-1L),1L,(-1L),0x761182EB714C54F6LL},{0L,(-1L),6L,0xB356CA1E4050223ELL,0x37DEA093C499C33CLL,(-1L)}},{{0xB41A0E63FBA1DAC8LL,1L,0xBD5BF46FA30D0BFELL,0x83162A6BA13AEE3ALL,0x452D34D5667B278FLL,0x742E231B0DD590C5LL},{4L,(-4L),0xBD5BF46FA30D0BFELL,(-1L),0L,(-1L)},{6L,(-1L),6L,0x4409F5E50B520C60LL,(-1L),0x83162A6BA13AEE3ALL},{6L,0xC592D0764C2BF919LL,0L,1L,(-1L),(-4L)},{0x9607A382C399196ELL,0x83162A6BA13AEE3ALL,0x2FDD94D3293D5C5CLL,1L,6L,0x742E231B0DD590C5LL}},{{6L,(-1L),0L,0x742E231B0DD590C5LL,0x2B7B6C844ACD2DFELL,1L},{(-10L),0x6804F76F778AAFD7LL,0xB41A0E63FBA1DAC8LL,0x761182EB714C54F6LL,0x2FDD94D3293D5C5CLL,(-1L)},{0xAEC01312136D309ELL,1L,4L,(-1L),0x2FDD94D3293D5C5CLL,0xC592D0764C2BF919LL},{0x2B7B6C844ACD2DFELL,0x6804F76F778AAFD7LL,6L,0x6804F76F778AAFD7LL,0x2B7B6C844ACD2DFELL,(-1L)},{4L,(-1L),1L,1L,6L,0L}}};
                    uint32_t *l_1525 = &l_1507;
                    uint16_t *l_1532[1][6][2] = {{{&l_1493,&l_1415},{&l_1493,&l_1493},{&l_1415,&l_1493},{&l_1493,&l_1415},{&l_1493,&l_1493},{&l_1415,&l_1493}}};
                    int32_t l_1533 = 1L;
                    int32_t l_1535 = 0L;
                    int32_t l_1536 = 0L;
                    int32_t l_1537 = 0L;
                    int32_t l_1538 = 1L;
                    int32_t l_1540[7][3][3] = {{{0x38BD4A25L,5L,0x58C9E2D8L},{4L,4L,0x58C9E2D8L},{5L,0x38BD4A25L,(-7L)}},{{(-4L),4L,(-4L)},{(-4L),5L,4L},{5L,(-4L),(-4L)}},{{4L,(-4L),(-7L)},{0x38BD4A25L,5L,0x58C9E2D8L},{4L,4L,0x58C9E2D8L}},{{5L,0x38BD4A25L,(-7L)},{(-4L),4L,(-4L)},{(-4L),5L,4L}},{{5L,(-4L),(-4L)},{4L,(-4L),(-7L)},{0x38BD4A25L,5L,0x58C9E2D8L}},{{4L,4L,0x58C9E2D8L},{5L,0x38BD4A25L,(-7L)},{(-4L),4L,(-4L)}},{{(-4L),5L,4L},{5L,(-4L),(-4L)},{4L,(-4L),(-7L)}}};
                    int32_t l_1542 = 3L;
                    int8_t *l_1553 = &g_292;
                    int i, j, k;
                    if (l_1496)
                    {
                        int32_t *l_1497 = &l_1443;
                        int32_t *l_1498 = &g_25;
                        int32_t *l_1499 = &g_25;
                        int32_t *l_1500 = &l_1443;
                        int32_t *l_1501 = &l_1310;
                        int32_t *l_1502 = &l_1310;
                        int32_t *l_1503 = &l_1450[2][0][6];
                        int32_t *l_1504[10] = {&l_1442,&l_1442,&l_1442,&l_1442,&l_1442,&l_1442,&l_1442,&l_1442,&l_1442,&l_1442};
                        int i;
                        l_1507--;
                        (*l_1503) &= 0x0EE383FFL;
                        l_1510[1]++;
                    }
                    else
                    {
                        return l_1510[1];
                    }
                    (*g_159) = ((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(p_59, l_1506[1][0][2])), 0)), (l_1534 = (safe_mul_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_59, g_53)), 4)) , (void*)0) != l_1525), (((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mod_func_int64_t_s_s(((l_1544--) , ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(((l_1540[3][2][1] = p_59) , ((*l_1553) = (safe_add_func_uint32_t_u_u(p_59, ((0xE4L <= (*l_1253)) != l_1247[3]))))), 3)), 0)) , (*p_60))), 0x01B711D6EC696ECFLL)) <= p_59), 10)), (*p_60))) , p_59) != l_1247[1])))))) <= 0x9DL);
                }
                for (g_288 = 7; (g_288 >= 0); g_288 -= 1)
                {
                    int64_t l_1556 = 0x059BE75359EBC193LL;
                    int i;
                    for (g_893 = 0; (g_893 <= 0); g_893 += 1)
                    {
                        int i, j;
                        (*g_69) = &l_1266[g_893][(g_893 + 2)];
                        (*g_70) |= l_1510[(g_893 + 4)];
                        (*g_70) ^= (((*g_703) ^= (-1L)) , ((0xE5L != p_59) | ((*p_60) = (l_1556 >= ((l_1557 != &g_292) , ((((void*)0 != l_1558) , l_1560) != &g_935))))));
                    }
                    (*g_159) = (((((l_1510[g_288] , (l_1510[g_288] ^ (((((safe_sub_func_uint8_t_u_u((l_1445 || 4294967289UL), l_1539)) , l_1469) != l_1564) <= ((*l_1469) = (safe_mod_func_int32_t_s_s((253UL < (-1L)), l_1567)))) > (*l_1253)))) < 0x69L) ^ p_59) , g_496[2][0][1]) , l_1314[0]);
                    for (l_1415 = 2; (l_1415 <= 7); l_1415 += 1)
                    {
                        (*g_69) = &l_1266[0][3];
                    }
                    for (g_292 = 7; (g_292 >= 2); g_292 -= 1)
                    {
                        return (*p_60);
                    }
                }
            }
        }
    }
    (*l_1569) = ((*l_1568) = ((*g_69) = (((*g_100) = (*g_100)) , (void*)0)));
    (*g_69) = ((*l_1568) = (*l_1568));
    (*l_1575) |= ((*g_100) != (safe_rshift_func_uint8_t_u_s((((((*p_60) & 9UL) , (safe_sub_func_uint16_t_u_u(((&g_131 != &g_347) != 0x58L), (((void*)0 == l_1570) || 9UL)))) ^ g_154) , p_59), 5)));
    return (*p_60);
}







static int32_t * func_61(int8_t p_62, int16_t p_63, const uint8_t p_64, int32_t p_65, int32_t ** p_66)
{
    uint8_t *l_870 = &g_132;
    uint64_t **l_881 = (void*)0;
    int32_t l_890 = 0x34C9DD6CL;
    int32_t l_894 = 0xE43A86F5L;
    uint16_t **l_911 = &g_820;
    uint16_t ***l_910 = &l_911;
    uint32_t *l_914 = (void*)0;
    int64_t *l_915 = (void*)0;
    int64_t *l_916 = &g_288;
    int8_t l_985[5][6] = {{9L,8L,9L,9L,8L,9L},{9L,8L,9L,9L,8L,9L},{9L,8L,9L,9L,8L,9L},{9L,8L,9L,9L,8L,9L},{9L,8L,9L,9L,8L,9L}};
    const int32_t l_1084 = (-1L);
    int32_t l_1101 = 0x3516343CL;
    int32_t l_1102[1][2][8] = {{{0L,0L,0x0D796086L,0x7CA2CD19L,0x0D796086L,0L,0L,0x0D796086L},{0x71DD576CL,0x0D796086L,0x0D796086L,0x71DD576CL,7L,0x71DD576CL,0x0D796086L,0x0D796086L}}};
    uint64_t l_1178 = 18446744073709551611UL;
    const uint8_t l_1195 = 1UL;
    int32_t *l_1221 = &l_1101;
    int32_t *l_1222 = &l_1101;
    int32_t *l_1223 = (void*)0;
    int i, j, k;
lbl_1208:
    for (g_154 = (-15); (g_154 >= 23); g_154 = safe_add_func_uint8_t_u_u(g_154, 6))
    {
        int64_t *l_882 = &g_288;
        int32_t l_891 = 0xAF264982L;
        int64_t *l_892[3];
        uint32_t *l_895 = &g_347;
        int i;
        for (i = 0; i < 3; i++)
            l_892[i] = &g_893;
        (*g_159) = (((void*)0 == l_870) || (safe_rshift_func_int16_t_s_s(0xA884L, (safe_div_func_uint8_t_u_u((((p_65 > (++(*l_870))) , ((*l_882) = (safe_add_func_int8_t_s_s((g_292 , p_63), ((void*)0 == l_881))))) == (((*l_895) ^= ((safe_mod_func_uint64_t_u_u(((l_890 = ((safe_add_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s((((((g_374 = (safe_unary_minus_func_uint64_t_u(18446744073709551615UL))) > (-3L)) & l_890) <= l_891) == p_63), l_891)) == 0xA9L), l_890)) <= g_845)) != l_894), p_65)) > l_891)) , 0UL)), 4UL)))));
    }
    if (((safe_sub_func_uint64_t_u_u((***g_707), ((*l_916) = (((((safe_rshift_func_uint16_t_u_u(((&p_62 == (void*)0) , (((l_881 == l_881) & (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((((((safe_div_func_int16_t_s_s((((safe_div_func_uint8_t_u_u((((((*l_910) = &g_820) != (void*)0) , 0xA817L) , (((safe_div_func_uint32_t_u_u(1UL, 0x57EB483FL)) | l_894) ^ 1L)), p_63)) , (-3L)) < 0UL), p_62)) || l_890) , l_914) == &g_347) < l_894), l_890)) , p_64), g_43[7])), l_890))) , l_894)), 12)) || (-4L)) >= 0x2D752CF9182081DELL) < p_64) > 0x6E0919115AD28253LL)))) | p_64))
    {
        uint16_t l_921 = 0x312EL;
        int32_t *l_950 = &g_166[1];
        int32_t l_963 = 1L;
        uint16_t ** const *l_1000 = &l_911;
        uint16_t ** const **l_999 = &l_1000;
        uint32_t l_1028[10] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        int i;
        (*g_69) = &l_890;
        if ((safe_add_func_uint16_t_u_u(p_62, ((l_921 = (safe_rshift_func_uint16_t_u_u(l_894, 11))) >= 0x9603L))))
        {
            int32_t *l_924 = &l_894;
            uint16_t * const **l_937 = (void*)0;
            const int64_t l_947 = 0x64FF68E4BE1E70C5LL;
            uint16_t l_964 = 1UL;
            for (g_845 = 0; (g_845 >= (-12)); g_845 = safe_sub_func_uint16_t_u_u(g_845, 1))
            {
                uint16_t * const ***l_936[1][7] = {{&g_934,&g_934,&g_934,&g_934,&g_934,&g_934,&g_934}};
                int32_t *l_949[6][7] = {{(void*)0,(void*)0,(void*)0,&g_166[0],(void*)0,&g_166[0],&g_166[0]},{&g_845,&l_894,&g_166[2],&l_894,&g_845,&g_166[2],&g_2},{&g_681,&g_166[0],&g_166[0],&g_681,&g_166[0],&g_166[0],&g_681},{&g_2,&g_2,&g_166[4],&l_890,&g_2,&l_890,&g_166[4]},{&g_681,&g_681,&l_890,(void*)0,&l_890,&l_890,&l_890},{&g_845,&g_166[4],&g_166[4],&g_845,&l_890,&g_2,&g_845}};
                int i, j;
                (*g_69) = l_924;
                if ((p_64 && (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(((g_43[7] < ((safe_div_func_uint16_t_u_u(0xF40DL, ((safe_div_func_uint64_t_u_u(((l_937 = g_934) != &l_911), 0x7A7E1F4A295CEC75LL)) , (safe_add_func_int64_t_s_s((((*g_159) = (0UL <= (((safe_mul_func_uint8_t_u_u(p_65, (--(*l_870)))) == (safe_mod_func_uint16_t_u_u(((-1L) < 0x01535C494E4D8DEELL), 0x0F23L))) == (*g_100)))) || (-9L)), (-1L)))))) < (*l_924))) >= g_946))), l_947)), p_65))))
                {
                    int32_t *l_948 = &l_890;
                    (*l_924) = (*g_159);
                    return l_950;
                }
                else
                {
                    int32_t *l_951 = (void*)0;
                    return l_951;
                }
            }
            for (g_893 = (-29); (g_893 >= (-12)); g_893 = safe_add_func_int32_t_s_s(g_893, 9))
            {
                uint32_t **l_958 = (void*)0;
                uint32_t *l_960 = &g_227;
                uint32_t **l_959 = &l_960;
                int32_t **l_988 = &l_924;
                uint32_t l_1008 = 0x9FAF1FEDL;
            }
        }
        else
        {
            uint64_t l_1014 = 0x094F7AAF73902BF4LL;
            uint16_t ***l_1018 = &l_911;
            uint32_t l_1019 = 0xA03585D7L;
            l_1014 = ((safe_mul_func_int16_t_s_s((~(*l_950)), l_890)) == l_890);
            (*g_159) &= (~((((safe_sub_func_uint16_t_u_u(((g_374 , (l_1018 != (l_1019 , l_1018))) > (safe_div_func_uint16_t_u_u(l_1019, (*l_950)))), p_63)) >= (safe_rshift_func_uint8_t_u_s((l_894 , ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(p_64, 2)), 0x73L)) < (*l_950))), 6))) >= l_1028[3]) , 4294967295UL));
            for (g_347 = 0; (g_347 <= 45); g_347 = safe_add_func_uint8_t_u_u(g_347, 2))
            {
                uint32_t *l_1039 = &g_131;
                int8_t *l_1045 = (void*)0;
                int8_t *l_1046 = &l_985[2][5];
                int8_t l_1055 = 1L;
                (**g_69) = (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_65, (safe_div_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u((((*l_1039)--) != ((safe_add_func_uint32_t_u_u(((~p_65) <= ((((*l_1046) = l_1014) > ((l_1055 &= (safe_mod_func_uint16_t_u_u(((*l_950) = ((safe_mod_func_int8_t_s_s(((0xD3L & 0xFFL) , l_890), ((safe_rshift_func_uint8_t_u_u((*g_100), (&l_1028[6] != (g_1053 = &l_1019)))) | p_65))) <= 1L)), 1L))) > 0x41L)) || p_65)), p_65)) != g_496[5][0][1])), (*g_100))) ^ g_845) != g_156), l_1019)))), p_65));
                for (g_292 = 13; (g_292 <= 3); g_292 = safe_sub_func_int32_t_s_s(g_292, 5))
                {
                    if ((*g_70))
                        break;
                }
            }
        }
        (*g_70) = l_985[2][4];
    }
    else
    {
        int32_t *l_1060 = &g_845;
        uint32_t *l_1083 = &g_227;
        int32_t l_1093 = 0x26B93EACL;
        int32_t l_1094 = (-9L);
        int32_t l_1096 = (-1L);
        int32_t l_1097 = (-5L);
        int32_t l_1098 = 0x94E186C1L;
        int32_t l_1099 = (-3L);
        int64_t *l_1170 = &g_288;
        int64_t l_1200 = 1L;
        uint64_t l_1202 = 0x693CDC14154EA3D7LL;
        for (g_131 = 0; (g_131 != 20); g_131 = safe_add_func_uint8_t_u_u(g_131, 5))
        {
            uint8_t l_1079 = 255UL;
            uint32_t *l_1082 = &g_227;
            int32_t l_1085 = 0xA3D59CEBL;
            uint16_t *l_1086[1][4][9] = {{{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156},{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156},{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156},{&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156}}};
            int8_t *l_1087[8] = {&g_292,(void*)0,&g_292,(void*)0,&g_292,(void*)0,&g_292,(void*)0};
            int32_t l_1100 = 1L;
            int32_t l_1104 = (-7L);
            int32_t l_1105 = 0x015F2666L;
            int32_t l_1106 = 0xEACF24CCL;
            uint32_t **l_1158 = &l_914;
            int64_t ****l_1161 = &g_775[2];
            int64_t l_1201 = 0xC1470E95C8CE8346LL;
            int64_t **l_1212 = &l_1170;
            int64_t ***l_1211 = &l_1212;
            uint32_t l_1215 = 0UL;
            int i, j, k;
            (*g_69) = l_1060;
            if (((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((void*)0 == l_1060) != (safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((*g_159) |= ((((l_894 |= (p_64 != (((safe_mul_func_uint16_t_u_u((g_156 = (safe_mod_func_uint64_t_u_u(((***g_707)--), (((*g_1053) , (l_1085 = (safe_lshift_func_uint8_t_u_u(((*g_100)++), (((((((*l_870) ^= (l_1079 == ((l_1083 = (((((safe_mul_func_int8_t_s_s((-1L), p_62)) || (((p_63 != (0UL < 0x322E186B4D14AAEFLL)) > l_1079) ^ p_64)) | 4294967295UL) <= 18446744073709551615UL) , l_1082)) == l_914))) , l_1084) , l_1083) != l_1060) == 3L) >= p_62))))) && g_2)))), p_63)) , (*l_1060)) ^ p_62))) == p_63) ^ l_1084) >= p_65)) ^ 0xF1CCF790L) == g_496[2][0][1]), l_1079)), l_1079))), 3)), p_65)) <= p_63))
            {
                int8_t l_1095 = 1L;
                int32_t l_1103 = 0x81F79D23L;
                uint32_t l_1142 = 0x6497ADECL;
                uint32_t **l_1143 = (void*)0;
                int32_t l_1176[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1176[i] = 0xC84F1564L;
                for (g_946 = 7; (g_946 >= 2); g_946 -= 1)
                {
                    int32_t *l_1088 = &l_890;
                    int32_t *l_1089 = &l_890;
                    int32_t *l_1090 = &g_166[4];
                    int32_t *l_1091 = &g_681;
                    int32_t *l_1092[8][4][7] = {{{&g_2,&g_166[4],(void*)0,&g_2,(void*)0,&g_166[4],&g_2},{(void*)0,&g_2,&g_166[4],(void*)0,&g_2,(void*)0,&g_166[4]},{&g_2,&g_2,&l_894,&g_681,&g_2,&l_894,&g_2},{&g_681,&g_166[4],&g_166[4],&g_681,(void*)0,(void*)0,&g_681}},{{(void*)0,&g_2,(void*)0,(void*)0,&g_2,(void*)0,&g_166[4]},{&g_2,&g_681,&l_894,&g_2,&g_2,&l_894,&g_681},{&g_2,&g_166[4],(void*)0,&g_2,(void*)0,(void*)0,&g_2},{(void*)0,&g_681,(void*)0,(void*)0,&g_681,&g_166[4],&g_166[4]}},{{&g_681,&g_2,&l_894,&g_2,&g_681,&l_894,&g_2},{&g_2,&g_166[4],(void*)0,&g_2,(void*)0,&g_166[4],&g_2},{(void*)0,&g_2,&g_166[4],(void*)0,&g_2,(void*)0,&g_166[4]},{&g_2,&g_2,&l_894,&g_681,&g_2,&l_894,&g_2}},{{&g_681,&g_166[4],&g_166[4],&g_681,(void*)0,(void*)0,&g_681},{(void*)0,&g_2,(void*)0,(void*)0,&g_2,(void*)0,&g_166[4]},{&g_2,&g_681,&l_894,&g_2,&g_2,&l_894,&g_166[4]},{(void*)0,&l_894,&l_890,(void*)0,&g_845,&g_845,(void*)0}},{{&l_890,&g_166[4],&l_890,&g_845,&g_166[4],&l_894,&l_894},{&g_166[4],(void*)0,&g_2,(void*)0,&g_166[4],&g_2,(void*)0},{(void*)0,&l_894,&g_845,(void*)0,&g_845,&l_894,(void*)0},{&l_890,(void*)0,&l_894,&g_845,(void*)0,&g_845,&l_894}},{{(void*)0,(void*)0,&g_2,&g_166[4],(void*)0,&g_2,(void*)0},{&g_166[4],&l_894,&l_894,&g_166[4],&g_845,&l_890,&g_166[4]},{&l_890,(void*)0,&g_845,&g_845,(void*)0,&l_890,&l_894},{(void*)0,&g_166[4],&g_2,(void*)0,(void*)0,&g_2,&g_166[4]}},{{(void*)0,&l_894,&l_890,(void*)0,&g_845,&g_845,(void*)0},{&l_890,&g_166[4],&l_890,&g_845,&g_166[4],&l_894,&l_894},{&g_166[4],(void*)0,&g_2,(void*)0,&g_166[4],&g_2,(void*)0},{(void*)0,&l_894,&g_845,(void*)0,&g_845,&l_894,(void*)0}},{{&l_890,(void*)0,&l_894,&g_845,(void*)0,&g_845,&l_894},{(void*)0,(void*)0,&g_2,&g_166[4],(void*)0,&g_2,(void*)0},{&g_166[4],&l_894,&l_894,&g_166[4],&g_845,&l_890,&g_166[4]},{&l_890,(void*)0,&g_845,&g_845,(void*)0,&l_890,&l_894}}};
                    uint32_t l_1107 = 4294967288UL;
                    uint32_t **l_1144 = &l_1083;
                    uint16_t l_1175 = 0x9FF0L;
                    int i, j, k;
                    --l_1107;
                    if (p_62)
                        goto lbl_1220;
                    (*l_1091) = ((*l_1060) = (safe_sub_func_uint32_t_u_u(((*g_1053) = (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_43[g_946], 5)), (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(7L, p_62)), (safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u((((safe_sub_func_int64_t_s_s(((!p_62) , ((*l_916) = ((safe_rshift_func_uint8_t_u_s(p_63, (*l_1060))) | l_1103))), (((+((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((-9L), (safe_add_func_uint16_t_u_u(l_1142, l_1095)))), 4)) , p_62)) != 9L) && p_62))) != p_63) >= 0xFBD2L), 5L)), (*g_1053))))))) != l_1101) == (***g_707)), p_65)), p_65)), 5))), p_63)));
                    if ((((l_1143 == l_1144) >= (*g_100)) && (safe_add_func_int8_t_s_s((p_65 != ((*l_916) = ((((safe_div_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(l_985[2][4], (safe_mul_func_uint16_t_u_u((*l_1060), (safe_mod_func_int32_t_s_s(((*g_159) = (((*l_1060) ^ ((safe_add_func_int64_t_s_s(l_1084, ((g_1157[5][4][1] &= (*g_1053)) || 0L))) && (*l_1060))) != 0x30200401L)), p_63)))))) , p_62), 0x43D4L)) , (*l_1060)) <= l_1102[0][1][1]) || 0x0EL))), 0xFFL))))
                    {
                        uint32_t ***l_1159 = (void*)0;
                        uint32_t ***l_1160 = &l_1158;
                        int64_t *****l_1162[2][5][9] = {{{&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161},{(void*)0,(void*)0,&l_1161,&l_1161,(void*)0,&l_1161,&l_1161,&l_1161,&l_1161},{&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161},{(void*)0,&l_1161,&l_1161,(void*)0,(void*)0,&l_1161,&l_1161,(void*)0,&l_1161},{&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161}},{{(void*)0,(void*)0,&l_1161,&l_1161,(void*)0,&l_1161,&l_1161,&l_1161,&l_1161},{&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161},{(void*)0,&l_1161,&l_1161,(void*)0,(void*)0,&l_1161,&l_1161,(void*)0,(void*)0},{&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,&l_1161},{&l_1161,&l_1161,&l_1161,&l_1161,&l_1161,(void*)0,&l_1161,&l_1161,(void*)0}}};
                        int i, j, k;
                        (*g_69) = (*g_69);
                        (*l_1160) = l_1158;
                        if (l_1079)
                            break;
                        g_1163[1] = l_1161;
                    }
                    else
                    {
                        return (*g_69);
                    }
                    for (l_1093 = 2; (l_1093 >= 0); l_1093 -= 1)
                    {
                        const int16_t l_1174 = 0L;
                        int32_t l_1177 = (-6L);
                        if (l_1142)
                            break;
                        l_1175 = (((((~(~p_62)) == p_62) & (((safe_rshift_func_int8_t_s_u((p_65 == (((safe_mul_func_int8_t_s_s((l_1100 , (l_1100 = p_63)), ((l_1170 != (void*)0) > (safe_div_func_int32_t_s_s((0x8AD6L & (!1L)), p_62))))) , 0xBE00L) , 1UL)), p_64)) && l_1174) >= p_65)) <= l_1102[0][1][7]) > 1UL);
                        l_1178--;
                        (*l_1089) = 0x32480B48L;
                    }
                }
            }
            else
            {
                const uint64_t l_1189 = 18446744073709551611UL;
                int16_t * const l_1196 = &g_946;
                int32_t l_1197 = 0x93138157L;
                int32_t *l_1198 = (void*)0;
                int32_t *l_1199[4][8] = {{&l_1098,&l_1098,&l_1098,&l_1098,&l_1098,&l_1098,&l_1098,&l_1098},{&l_1098,&l_1098,&l_1098,&l_1098,&l_1098,&l_1098,&l_1098,&l_1098},{&l_1098,&l_1098,&l_1098,&l_1098,&l_1098,&l_1098,&l_1098,&l_1098},{&l_1098,&l_1098,&l_1098,&l_1098,&l_1098,&l_1098,&l_1098,&l_1098}};
                uint32_t l_1205 = 4294967287UL;
                int i, j;
                if ((**g_69))
                    break;
                l_1197 |= ((**g_69) = (safe_div_func_uint64_t_u_u(l_1105, (safe_div_func_uint32_t_u_u((((((((safe_rshift_func_int8_t_s_u(p_63, ((safe_div_func_uint64_t_u_u(p_62, ((((void*)0 != g_611) , l_1189) , (-7L)))) >= (--g_156)))) | (safe_lshift_func_int16_t_s_u(((0x16A0D7FEL != ((*g_159) = (!l_1105))) >= l_1195), p_65))) || (***g_707)) < 0x90DBL) ^ l_1105) , &p_63) != l_1196), p_65)))));
                l_1202--;
                ++l_1205;
            }
            if (p_64)
                goto lbl_1208;
            (*g_159) &= ((((-8L) <= l_1100) > (((((**l_1161) = &l_1170) == ((*l_1211) = &l_1170)) == (l_1178 ^ (((safe_rshift_func_uint8_t_u_u(((((g_374 = ((l_1215 > p_63) == (((safe_rshift_func_uint16_t_u_s((l_1102[0][1][1] = (((*l_870) = (safe_add_func_int16_t_s_s((p_62 ^ ((l_1101 , (void*)0) != (void*)0)), 65535UL))) & p_62)), p_63)) && (*g_1053)) == g_496[2][0][1]))) && 0xAC9BL) , p_63) , p_64), p_63)) == (*l_1060)) && 0UL))) == p_62)) >= 0xE6138E8EL);
        }
lbl_1220:
        (*g_69) = (*g_69);
        g_166[4] |= (*g_70);
    }
    return l_1223;
}







static int8_t func_72(int32_t ** p_73, uint8_t * p_74, uint64_t p_75, int32_t * p_76, int64_t p_77)
{
    uint32_t *l_847 = (void*)0;
    uint32_t **l_846[6][7][6] = {{{(void*)0,&l_847,&l_847,(void*)0,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,(void*)0,&l_847,&l_847},{(void*)0,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,(void*)0},{&l_847,&l_847,(void*)0,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847}},{{&l_847,&l_847,(void*)0,&l_847,&l_847,(void*)0},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{(void*)0,(void*)0,&l_847,(void*)0,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,(void*)0},{&l_847,(void*)0,&l_847,(void*)0,&l_847,&l_847},{(void*)0,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847}},{{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{(void*)0,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,(void*)0},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,(void*)0}},{{&l_847,&l_847,(void*)0,&l_847,(void*)0,&l_847},{(void*)0,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,(void*)0,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,(void*)0,&l_847},{&l_847,(void*)0,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,(void*)0,&l_847,&l_847}},{{&l_847,&l_847,&l_847,&l_847,(void*)0,&l_847},{&l_847,(void*)0,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,(void*)0,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,(void*)0,&l_847},{&l_847,(void*)0,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,(void*)0,&l_847,&l_847}},{{&l_847,&l_847,(void*)0,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,(void*)0,(void*)0,&l_847,(void*)0,&l_847},{&l_847,&l_847,&l_847,(void*)0,&l_847,&l_847},{&l_847,&l_847,(void*)0,&l_847,&l_847,&l_847},{&l_847,(void*)0,&l_847,&l_847,(void*)0,&l_847}}};
    int32_t l_848 = 0x985742C7L;
    int32_t * const * const l_864 = &g_703;
    int32_t *l_865 = &g_681;
    int i, j, k;
    (**p_73) ^= (((-1L) | (l_846[4][2][0] == &l_847)) != 0x6CL);
    (*l_865) |= (((p_77 = (l_848 >= (safe_add_func_int32_t_s_s((248UL ^ (-1L)), (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u(0xEABB044FL)), 1)) && (safe_rshift_func_uint8_t_u_u((((((p_75 < ((254UL & (safe_sub_func_int64_t_s_s(((((((((safe_mul_func_int8_t_s_s(l_848, ((safe_lshift_func_uint16_t_u_u(((((((((*g_703) = l_848) , l_864) == (void*)0) || 0x9CL) >= 65526UL) < (-1L)) <= 0L), 5)) , l_848))) == 0x7AFF4838L) && (*g_100)) | p_75) >= p_77) >= (**p_73)) , (*g_703)) , p_75), l_848))) , l_848)) , 0x800F7430L) > l_848) , g_53) != p_77), (*g_100)))), 4)))))) | (*g_709)) != (*p_76));
    return (*l_865);
}







static int32_t ** func_78(const int32_t * p_79, int32_t ** p_80, uint8_t * p_81, int32_t p_82, const uint8_t p_83)
{
    int32_t l_553[7] = {1L,1L,1L,1L,1L,1L,1L};
    uint32_t l_558 = 0x0B9254E2L;
    uint32_t *l_571[3];
    uint32_t **l_570 = &l_571[0];
    int32_t l_572 = 0xC83FDD2CL;
    uint64_t *l_588 = &g_496[2][0][1];
    int32_t *l_589 = &l_553[6];
    int64_t * const l_599 = &g_288;
    int16_t *l_601 = &g_374;
    int64_t ***l_649 = (void*)0;
    int32_t l_675 = 0xE73EF4ABL;
    int32_t l_677 = 0xD2CC41B0L;
    int32_t l_683[4][6] = {{9L,9L,0L,0L,9L,9L},{9L,0L,0L,9L,9L,0L},{9L,9L,0L,0L,9L,9L},{9L,0L,0L,9L,9L,0L}};
    uint32_t l_808 = 0x09F4612DL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_571[i] = &g_227;
    l_572 &= ((((*l_570) = (((safe_mod_func_int8_t_s_s((l_553[5] <= ((((g_391[4][0][0] , ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((l_553[5] ^ (l_558 == (safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_43[7], (safe_rshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((((**p_80) = (safe_mul_func_int8_t_s_s(p_82, (+((((*p_81) = (((void*)0 == &g_292) | (g_391[4][0][0] , p_82))) && (-1L)) ^ 0x33L))))) || 0xF855B378L) > l_553[5]), g_156)), l_553[5])))), 2)))) >= g_391[0][0][4]) < (-1L)), 15)), 0x36L)) , (**p_80))) | 4L) , l_558) > 1UL)), g_288)) ^ 1UL) , (void*)0)) != &g_227) | 0x55F2L);
    (*g_159) = (((0xA03A25C4L | ((((safe_add_func_uint64_t_u_u((l_572 = ((safe_mul_func_uint16_t_u_u((((~(safe_mul_func_int8_t_s_s(g_224, ((safe_div_func_int32_t_s_s((**p_80), ((safe_mul_func_int8_t_s_s(((((((safe_div_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u(((*l_588) = l_558), (((((*l_589) = (g_131 ^ (*g_100))) , ((((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((+((safe_lshift_func_uint16_t_u_u(l_553[4], l_553[5])) != 0x7CA6FE22L)), (*g_100))), l_553[5])), g_391[4][0][0])) | 0xE0L) > l_572) || l_558)) , 0xB1FBL) && (-4L)))) >= 0x4F05FF53C097E077LL), 1L)) || p_83) , &g_159) != (void*)0) , l_553[5]) , p_83), 0x99L)) | l_572))) | l_558)))) && 4294967295UL) && 0xF8C0L), 7UL)) != l_572)), 1UL)) < g_43[1]) , &g_288) == l_599)) || (**g_69)) , l_553[5]);
    if ((&l_572 != (((!1UL) , ((*l_601) = (((void*)0 != (*g_69)) != p_83))) , &l_572)))
    {
        uint32_t l_617 = 4294967295UL;
        int64_t l_652 = 1L;
        int32_t l_668 = 0L;
        int32_t l_673 = 0L;
        int32_t l_674 = 0x9060C4F6L;
        int32_t l_676 = 0L;
        int32_t l_678[4];
        uint64_t ***l_710 = &g_708[3];
        uint64_t l_727 = 0x385A753C2CE75230LL;
        uint32_t * const l_813[4][2][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_227,(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227,(void*)0}},{{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227,(void*)0,&g_227},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_227,(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227,(void*)0},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227,(void*)0,(void*)0}},{{&g_227,&g_227,(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,(void*)0,(void*)0,&g_227,(void*)0,(void*)0,&g_227}}};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_678[i] = 0xB428E15AL;
        for (g_292 = 0; (g_292 < 26); g_292 = safe_add_func_uint8_t_u_u(g_292, 3))
        {
            uint32_t l_625 = 18446744073709551615UL;
            int32_t l_669 = (-1L);
            int32_t l_670 = 1L;
            int32_t l_679[5];
            int8_t *l_697 = (void*)0;
            int32_t l_720 = (-1L);
            int32_t *l_780 = (void*)0;
            uint32_t l_801[9];
            int i;
            for (i = 0; i < 5; i++)
                l_679[i] = (-4L);
            for (i = 0; i < 9; i++)
                l_801[i] = 0x4231F9E3L;
            (**p_80) = (safe_div_func_int64_t_s_s(1L, ((&g_157 != ((safe_sub_func_uint64_t_u_u(0x9FCAEA7A252EA9A7LL, (safe_add_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(p_83)), 0x1313L)))) , (((g_611 != (void*)0) | (safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((p_79 != ((!p_82) , p_79)), g_156)) , l_553[5]), p_83))) , &g_157))) , l_617)));
            for (l_558 = 0; (l_558 < 54); l_558++)
            {
                uint8_t **l_620 = (void*)0;
                int32_t l_629 = 5L;
                l_572 |= (p_82 = ((**p_80) = (((g_53 >= (l_620 == &p_81)) && (safe_div_func_int32_t_s_s(1L, ((((safe_rshift_func_uint16_t_u_u((((**p_80) , 1UL) == l_625), ((0x880E8974L > ((safe_div_func_int8_t_s_s((g_628[8][1][6] == (void*)0), (*g_100))) , 0x8C4A4244L)) , 0x8E83L))) <= g_131) > 1UL) , l_629)))) >= 0xF978L)));
            }
            (*g_69) = (*g_69);
            for (g_374 = (-4); (g_374 < 12); g_374++)
            {
                int8_t l_632 = (-4L);
                uint8_t *l_635 = (void*)0;
                uint8_t *l_636 = &g_132;
                uint32_t *l_653 = &l_558;
                int32_t l_672 = 0x60964F64L;
                int32_t l_680 = (-10L);
                int32_t l_682 = 7L;
                int8_t * const l_698 = &l_632;
                int32_t l_722 = (-7L);
                int32_t l_723 = 1L;
                int32_t l_724 = 0xAA82B8F7L;
                int32_t l_725 = 0xC60634C0L;
                int32_t l_726 = 1L;
            }
        }
        (**p_80) = (!(safe_div_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((l_808 = (+(*g_100))) , p_83), ((*g_69) != &l_683[0][1]))), (safe_rshift_func_uint16_t_u_u(((((((safe_lshift_func_uint8_t_u_s((l_813[1][1][6] != ((((l_677 & (l_588 == (**g_707))) , (safe_div_func_int32_t_s_s(8L, (**p_80)))) == (*g_709)) , (void*)0)), 0)) , p_82) ^ l_674) , g_2) , p_82) , l_668), l_678[0])))));
    }
    else
    {
        uint16_t *l_819[9] = {&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156};
        uint16_t **l_818[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_825 = 0x0B2B51F8L;
        int8_t *l_842 = (void*)0;
        int8_t *l_843 = &g_292;
        int32_t *l_844[5];
        int i;
        for (i = 0; i < 5; i++)
            l_844[i] = &l_677;
        (**p_80) = ((g_496[2][0][1] , (((g_845 ^= ((g_820 = l_601) == ((safe_mod_func_int16_t_s_s((safe_add_func_int64_t_s_s(l_825, (safe_add_func_int8_t_s_s(l_558, ((0x02L >= ((*l_843) = (((*l_601) = (safe_add_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s(1L, (safe_div_func_uint8_t_u_u((*p_81), (safe_mod_func_int64_t_s_s(3L, (safe_sub_func_uint64_t_u_u(0x9A47342516DCCAEFLL, (*g_709))))))))) | l_825), 2)) , &p_83) != &p_83) | l_825), (**p_80))) ^ 0x6506L), p_83))) , p_82))) && p_83))))), l_675)) , &g_156))) >= 0x3C85316FL) & p_83)) >= (-5L));
        return p_80;
    }
    (**p_80) = (*g_159);
    return p_80;
}







static int32_t func_84(int32_t ** p_85, const int32_t p_86, int16_t p_87, const int64_t * p_88)
{
    uint32_t l_249 = 4294967294UL;
    int32_t l_295[6] = {0x914E3687L,0x914E3687L,0x914E3687L,0x914E3687L,0x914E3687L,0x914E3687L};
    int8_t l_304 = 0x0DL;
    uint64_t l_463 = 18446744073709551611UL;
    int32_t l_495 = 0L;
    int16_t l_545 = (-2L);
    int i;
    for (g_156 = 0; (g_156 <= 8); g_156++)
    {
        uint8_t l_257 = 0x8FL;
        int32_t l_301 = (-9L);
        int32_t l_302[9][9][3] = {{{(-8L),(-10L),0x059BEA66L},{(-1L),0x9BA98011L,1L},{0x54C6CEB2L,0xAAB8DD6DL,0xAAB8DD6DL},{0x02A3C4F2L,1L,0x9BA98011L},{0xF79B3D01L,0x059BEA66L,(-10L)},{0x9BA98011L,0x4DDB9A78L,0xACC88B0BL},{0L,0L,1L},{1L,0x4DDB9A78L,0x1F272451L},{(-7L),0x059BEA66L,0L}},{{4L,1L,(-9L)},{1L,0xAAB8DD6DL,1L},{0x75DE3B2CL,0x9BA98011L,8L},{0x48760730L,(-10L),0xDF3346A6L},{1L,0xACC88B0BL,0x83E4668FL},{(-10L),1L,(-7L)},{1L,0x1F272451L,0L},{0x48760730L,0L,(-8L)},{0x75DE3B2CL,(-9L),1L}},{{1L,1L,(-8L)},{4L,8L,0x0281DD29L},{(-7L),0xDF3346A6L,0x4E9A3B20L},{1L,0x83E4668FL,1L},{0L,(-7L),0x4E9A3B20L},{0x9BA98011L,0L,0x0281DD29L},{0xF79B3D01L,(-8L),(-8L)},{0x02A3C4F2L,1L,1L},{0x54C6CEB2L,(-8L),(-8L)}},{{(-1L),0x0281DD29L,0L},{(-8L),0x4E9A3B20L,(-7L)},{8L,1L,0x83E4668FL},{0xAAB8DD6DL,0x4E9A3B20L,0xDF3346A6L},{0xACC88B0BL,0x0281DD29L,8L},{(-1L),(-8L),1L},{(-9L),1L,(-9L)},{0xEC9501E4L,(-8L),0L},{0xAD306A48L,0L,0x1F272451L}},{{0x67D4B8A6L,(-7L),1L},{0L,0x83E4668FL,0xACC88B0BL},{0x67D4B8A6L,0xDF3346A6L,(-10L)},{0xAD306A48L,8L,0x9BA98011L},{0xEC9501E4L,1L,0xAAB8DD6DL},{(-9L),(-9L),1L},{(-1L),0L,0x059BEA66L},{0xACC88B0BL,0x1F272451L,0x4DDB9A78L},{0xAAB8DD6DL,1L,0L}},{{8L,0xACC88B0BL,0x4DDB9A78L},{(-8L),(-10L),0x059BEA66L},{(-1L),0x9BA98011L,1L},{0x54C6CEB2L,0xAAB8DD6DL,0xAAB8DD6DL},{0x02A3C4F2L,1L,0x9BA98011L},{0xF79B3D01L,0x059BEA66L,(-10L)},{0x9BA98011L,4L,0xAD306A48L},{0xEC9501E4L,0x67D4B8A6L,(-8L)},{(-1L),4L,0xACC88B0BL}},{{0x48760730L,1L,0xEC9501E4L},{(-9L),1L,4L},{(-8L),1L,(-8L)},{0L,1L,0x75DE3B2CL},{0L,0x059BEA66L,(-7L)},{0xAFEBF34AL,0xAD306A48L,1L},{0x059BEA66L,(-8L),0x48760730L},{0xAFEBF34AL,0xACC88B0BL,0x0281DD29L},{0L,0xEC9501E4L,0xAAB8DD6DL}},{{0L,4L,(-1L)},{(-8L),(-8L),0L},{(-9L),0x75DE3B2CL,0x83E4668FL},{0x48760730L,(-7L),(-1L)},{(-1L),1L,1L},{0xEC9501E4L,0x48760730L,(-1L)},{1L,0x0281DD29L,0x83E4668FL},{0xDF3346A6L,0xAAB8DD6DL,0L},{(-1L),(-1L),(-1L)}},{{(-10L),0L,0xAAB8DD6DL},{0x1F272451L,0x83E4668FL,0x0281DD29L},{0xAAB8DD6DL,(-1L),0x48760730L},{0x75DE3B2CL,1L,1L},{1L,(-1L),(-7L)},{0xAD306A48L,0x83E4668FL,0x75DE3B2CL},{1L,0L,(-8L)},{4L,(-1L),4L},{(-10L),0xAAB8DD6DL,0xEC9501E4L}}};
        int8_t l_303 = (-7L);
        uint32_t l_341 = 18446744073709551615UL;
        int32_t l_403 = 0x11D47ED1L;
        uint64_t l_522 = 0xD0D9A576E8CABCD4LL;
        uint16_t l_532 = 0x2CCEL;
        int i, j, k;
        ++l_249;
        if ((**p_85))
            break;
        for (p_87 = 0; (p_87 < (-15)); p_87 = safe_sub_func_int8_t_s_s(p_87, 2))
        {
            uint64_t l_254 = 0xE97A1A07391C9919LL;
            int8_t l_296 = 0xD2L;
            int32_t l_298 = (-1L);
            int32_t l_300[1][1][9];
            uint64_t l_328 = 0xFDFDF90A1ABE4F0CLL;
            uint16_t l_332 = 0x6E38L;
            int16_t l_392 = 0xE8E5L;
            uint8_t l_404 = 252UL;
            uint64_t l_409 = 0xBE2FDE95CDB92091LL;
            uint64_t l_422 = 0xF614554C47E68454LL;
            uint8_t l_469[2][6][7] = {{{0xF1L,0xF1L,1UL,253UL,255UL,0x08L,0xF1L},{0xBFL,255UL,0x44L,0x77L,0xBCL,0xBCL,0x77L},{0x77L,0x1DL,0x77L,0x6DL,255UL,0x77L,0x62L},{0x77L,0UL,0xACL,249UL,0UL,1UL,0UL},{0x88L,0x6DL,0x6DL,0x88L,0x62L,0x77L,255UL},{0xBCL,0xBFL,255UL,0x44L,0x77L,0xBCL,0xBCL}},{{0xF1L,255UL,1UL,255UL,0xF1L,0x08L,255UL},{0xEBL,0x40L,0UL,0x77L,255UL,0UL,0UL},{0x6DL,0x1DL,0xD7L,0xD7L,0x1DL,0x6DL,0x62L},{0xEBL,0x77L,1UL,0xEBL,0UL,2UL,0x77L},{0xF1L,0xF3L,0x6DL,253UL,0x6DL,0xF3L,0xF1L},{0xBCL,0x77L,0x44L,255UL,0xBFL,0xBCL,255UL}}};
            int16_t l_512 = 1L;
            uint32_t *l_539[6][8][5] = {{{&l_249,(void*)0,&l_249,(void*)0,&g_131},{&l_249,&g_131,(void*)0,&g_347,&g_347},{&g_347,(void*)0,(void*)0,&l_249,&g_131},{&g_347,&g_347,&l_249,&g_347,&g_347},{&l_249,&g_131,&l_249,(void*)0,(void*)0},{&g_347,&l_249,&g_347,&g_347,(void*)0},{&g_347,&g_131,&g_347,&l_249,&g_131},{&g_347,&g_347,&g_131,&g_131,(void*)0}},{{&l_249,&g_131,&g_347,&g_131,&l_249},{&g_131,(void*)0,&l_249,&g_347,&l_249},{(void*)0,&g_131,(void*)0,&g_347,&g_347},{&g_131,&g_347,&l_249,&g_131,&l_249},{&g_347,&g_347,&g_131,&g_131,&g_131},{(void*)0,&l_249,&g_131,&l_249,&l_249},{&g_347,(void*)0,&l_249,&g_347,&g_347},{&g_347,&l_249,&g_347,(void*)0,&l_249}},{{&l_249,&g_347,&g_347,&g_347,&g_131},{&g_347,&g_347,(void*)0,&g_131,&g_131},{&g_131,&g_131,&l_249,&g_131,&g_131},{&g_131,(void*)0,&g_347,&g_131,&g_131},{(void*)0,&g_131,(void*)0,&g_347,&l_249},{&g_347,&g_347,&g_131,&l_249,&g_347},{&l_249,&g_131,&l_249,&g_347,&l_249},{(void*)0,&l_249,&g_131,&g_347,&g_131}},{{&g_347,&g_131,(void*)0,&l_249,&l_249},{&l_249,&g_347,&g_347,(void*)0,&g_347},{&l_249,(void*)0,&l_249,&l_249,&l_249},{&l_249,&g_347,(void*)0,&g_347,&l_249},{&l_249,&g_347,&g_347,&l_249,(void*)0},{&g_347,&g_347,&g_347,&g_347,&g_131},{(void*)0,&g_347,&l_249,&g_131,(void*)0},{&l_249,&g_131,&g_131,&g_347,(void*)0}},{{&g_347,&l_249,&g_131,&l_249,&g_347},{(void*)0,&l_249,&l_249,&g_347,&g_347},{&g_131,&g_347,(void*)0,&l_249,&l_249},{&g_131,&g_347,&l_249,(void*)0,&l_249},{&g_347,&l_249,&g_347,&l_249,&g_347},{&l_249,&l_249,&g_131,&g_347,&g_347},{&g_347,&g_131,&g_347,&g_347,&g_347},{&g_347,&g_347,&g_347,&l_249,&g_347}},{{(void*)0,&g_347,&l_249,&g_347,&g_347},{&g_347,&g_347,&g_347,&g_347,(void*)0},{&g_347,&g_347,&l_249,&g_347,&g_347},{&l_249,&g_347,&l_249,&l_249,&g_131},{&g_347,&g_347,&g_347,&g_347,&g_347},{&g_131,&g_347,&g_131,&l_249,(void*)0},{&g_347,&g_347,&g_347,(void*)0,&g_131},{&l_249,&l_249,&g_131,&g_347,&l_249}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 9; k++)
                        l_300[i][j][k] = 0x139C095AL;
                }
            }
            if ((**p_85))
            {
                uint8_t *l_264 = &l_257;
                int64_t *l_268 = (void*)0;
                int32_t l_290[6][3][6];
                uint8_t l_305 = 1UL;
                int16_t l_340 = (-2L);
                uint32_t l_399[1];
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 6; k++)
                            l_290[i][j][k] = 1L;
                    }
                }
                for (i = 0; i < 1; i++)
                    l_399[i] = 0xA5F47472L;
                if (((l_254 & g_227) < (safe_lshift_func_int16_t_s_u(l_257, 8))))
                {
                    for (l_257 = 24; (l_257 >= 26); l_257++)
                    {
                        return p_87;
                    }
                }
                else
                {
                    int16_t *l_267 = &g_154;
                    int64_t *l_287[2];
                    int64_t **l_286[2];
                    int64_t ***l_285 = &l_286[1];
                    int32_t l_289 = 0x3080C64BL;
                    int8_t *l_291 = &g_292;
                    int32_t l_297 = 0x16C94C7DL;
                    int32_t l_299[7] = {7L,7L,5L,7L,7L,5L,7L};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_287[i] = &g_288;
                    for (i = 0; i < 2; i++)
                        l_286[i] = &l_287[0];
                    if ((safe_mul_func_int16_t_s_s(g_227, ((safe_div_func_uint32_t_u_u((l_264 != ((safe_lshift_func_int8_t_s_u(((((*l_267) = l_254) < ((void*)0 == p_85)) ^ ((l_257 , ((((l_268 = (g_157 = g_157)) == p_88) >= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((*l_291) &= (safe_add_func_int64_t_s_s(((((((((safe_div_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((((*l_285) = (void*)0) == (void*)0), l_289)) <= l_290[1][1][4]), g_53)), l_249)) || 0x11L), p_87)), 8L)) && 0x7BDDL) <= 1UL) || g_132) < l_289) , p_86) != p_86) && 0x523ACF053E8E71EELL), g_53))), l_249)), l_289))) ^ (**g_69))) != g_131)), p_86)) , (void*)0)), (**p_85))) > l_290[1][1][4]))))
                    {
                        g_166[2] = ((**p_85) |= (-4L));
                    }
                    else
                    {
                        int32_t *l_293 = &l_290[1][1][4];
                        int32_t *l_294[4][10] = {{&l_290[0][1][3],&g_25,&l_290[2][0][5],&g_25,&g_166[4],&g_25,&l_290[2][0][5],&g_25,&l_290[0][1][3],&l_290[1][1][4]},{&l_290[1][0][2],&l_290[1][1][4],&l_290[5][1][3],&g_166[0],&g_166[4],&l_290[1][2][3],&g_25,&g_166[4],&g_166[4],&g_25},{&g_25,&l_290[1][0][2],&g_166[0],&g_166[0],&l_290[1][0][2],&g_25,&g_166[4],&l_290[1][2][3],&l_290[0][1][3],&l_290[2][0][4]},{&l_290[2][0][4],&g_166[4],&l_290[1][1][4],&g_25,&l_290[5][1][3],&g_25,&g_25,&g_25,&l_290[5][1][3],&g_25}};
                        int i, j;
                        l_305++;
                        if (l_297)
                            break;
                    }
                    if ((safe_sub_func_int16_t_s_s(p_86, ((safe_mod_func_int8_t_s_s(((0UL < l_289) , ((((safe_sub_func_int8_t_s_s(((((p_85 == (void*)0) && 0xB1467857L) , 0xF78CEAEBL) , (safe_div_func_int16_t_s_s(g_25, ((*l_267) = ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(l_296, l_249)), 12)) , l_303))))), g_53)) , p_86) == g_43[7]) <= 0x79F3L)), (*g_100))) == g_2))))
                    {
                        int32_t *l_320 = (void*)0;
                        int32_t *l_321 = &l_302[1][1][0];
                        int32_t *l_322 = (void*)0;
                        int32_t *l_323 = &l_295[4];
                        int32_t *l_324 = &l_290[2][0][4];
                        int32_t *l_325 = &g_166[4];
                        int32_t *l_326 = &g_166[4];
                        int32_t *l_327[6][4] = {{&l_301,&l_301,&l_301,&l_301},{&l_301,&l_301,&l_301,&l_301},{&l_301,&l_301,&l_301,&l_301},{&l_301,&l_301,&l_301,&l_301},{&l_301,&l_301,&l_301,&l_301},{&l_301,&l_301,&l_301,&l_301}};
                        int32_t l_331 = (-3L);
                        int i, j;
                        (*p_85) = (*g_69);
                        l_302[5][0][1] ^= (**p_85);
                        --l_328;
                        --l_332;
                    }
                    else
                    {
                        int8_t l_335[9];
                        int32_t *l_336 = &l_298;
                        int32_t *l_337 = &l_298;
                        int32_t *l_338[7];
                        int16_t l_339 = 0x7B79L;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_335[i] = (-4L);
                        for (i = 0; i < 7; i++)
                            l_338[i] = &l_290[2][1][5];
                        l_341--;
                        (*g_69) = (*g_69);
                        return g_131;
                    }
                }
                for (l_328 = 0; (l_328 <= 2); l_328 += 1)
                {
                    uint64_t l_350[5][9][5] = {{{1UL,7UL,7UL,1UL,0x8735E89D6E7DEB9FLL},{0xBFA8556881AFF978LL,7UL,1UL,18446744073709551615UL,1UL},{18446744073709551607UL,0x8735E89D6E7DEB9FLL,0xBFA8556881AFF978LL,0x15DF48449C6FEABFLL,0x9A5F6F0DBF80F289LL},{1UL,0x7FA248BC0D39F2BALL,0x23A0FC1427660146LL,18446744073709551615UL,18446744073709551615UL},{0x7FA248BC0D39F2BALL,18446744073709551607UL,0x7FA248BC0D39F2BALL,1UL,18446744073709551612UL},{0x7FA248BC0D39F2BALL,4UL,0x15DF48449C6FEABFLL,18446744073709551607UL,3UL},{1UL,0x23A0FC1427660146LL,0x8735E89D6E7DEB9FLL,7UL,0xE75AAC8FB9A0D794LL},{18446744073709551607UL,18446744073709551615UL,0x15DF48449C6FEABFLL,3UL,0x15DF48449C6FEABFLL},{0xBFA8556881AFF978LL,0xBFA8556881AFF978LL,0x7FA248BC0D39F2BALL,4UL,0x15DF48449C6FEABFLL}},{{1UL,18446744073709551612UL,0x23A0FC1427660146LL,0x9A5F6F0DBF80F289LL,0xE75AAC8FB9A0D794LL},{18446744073709551615UL,0x9A5F6F0DBF80F289LL,0xBFA8556881AFF978LL,0xDDA966ECBB81FF36LL,3UL},{0xDDA966ECBB81FF36LL,18446744073709551612UL,1UL,1UL,18446744073709551612UL},{0xE75AAC8FB9A0D794LL,0xBFA8556881AFF978LL,7UL,1UL,18446744073709551615UL},{0x8735E89D6E7DEB9FLL,18446744073709551615UL,18446744073709551606UL,0xDDA966ECBB81FF36LL,0x9A5F6F0DBF80F289LL},{4UL,0x23A0FC1427660146LL,3UL,0x9A5F6F0DBF80F289LL,1UL},{0x8735E89D6E7DEB9FLL,4UL,1UL,4UL,0x8735E89D6E7DEB9FLL},{0xE75AAC8FB9A0D794LL,18446744073709551607UL,1UL,3UL,0xBFA8556881AFF978LL},{0xDDA966ECBB81FF36LL,0x7FA248BC0D39F2BALL,3UL,0xBFA8556881AFF978LL,0UL}},{{0UL,4UL,18446744073709551607UL,0x23A0FC1427660146LL,18446744073709551615UL},{0x7FA248BC0D39F2BALL,0xBFA8556881AFF978LL,0xBFA8556881AFF978LL,0x7FA248BC0D39F2BALL,4UL},{18446744073709551615UL,0xBFA8556881AFF978LL,1UL,0x15DF48449C6FEABFLL,0x7FA248BC0D39F2BALL},{0x23A0FC1427660146LL,4UL,18446744073709551615UL,0x8735E89D6E7DEB9FLL,18446744073709551606UL},{1UL,0xE75AAC8FB9A0D794LL,0xDDA966ECBB81FF36LL,0x15DF48449C6FEABFLL,0x15DF48449C6FEABFLL},{0xE75AAC8FB9A0D794LL,0x23A0FC1427660146LL,0xE75AAC8FB9A0D794LL,0x7FA248BC0D39F2BALL,0x9A5F6F0DBF80F289LL},{0xE75AAC8FB9A0D794LL,7UL,0x8735E89D6E7DEB9FLL,0x23A0FC1427660146LL,1UL},{1UL,0xDDA966ECBB81FF36LL,4UL,0xBFA8556881AFF978LL,18446744073709551615UL},{0x23A0FC1427660146LL,0x15DF48449C6FEABFLL,0x8735E89D6E7DEB9FLL,1UL,0x8735E89D6E7DEB9FLL}},{{18446744073709551615UL,18446744073709551615UL,0xE75AAC8FB9A0D794LL,7UL,0x8735E89D6E7DEB9FLL},{0x7FA248BC0D39F2BALL,0x9A5F6F0DBF80F289LL,0xDDA966ECBB81FF36LL,18446744073709551606UL,18446744073709551615UL},{0UL,18446744073709551606UL,18446744073709551615UL,3UL,1UL},{3UL,0x9A5F6F0DBF80F289LL,1UL,1UL,0x9A5F6F0DBF80F289LL},{18446744073709551615UL,18446744073709551615UL,0xBFA8556881AFF978LL,1UL,0x15DF48449C6FEABFLL},{4UL,0x15DF48449C6FEABFLL,18446744073709551607UL,3UL,18446744073709551606UL},{7UL,0xDDA966ECBB81FF36LL,1UL,18446744073709551606UL,0x7FA248BC0D39F2BALL},{4UL,7UL,0x7FA248BC0D39F2BALL,7UL,4UL},{18446744073709551615UL,0x23A0FC1427660146LL,0x7FA248BC0D39F2BALL,1UL,18446744073709551615UL}},{{3UL,0xE75AAC8FB9A0D794LL,1UL,0xBFA8556881AFF978LL,0UL},{0UL,4UL,18446744073709551607UL,0x23A0FC1427660146LL,18446744073709551615UL},{0x7FA248BC0D39F2BALL,0xBFA8556881AFF978LL,0xBFA8556881AFF978LL,0x7FA248BC0D39F2BALL,4UL},{18446744073709551615UL,0xBFA8556881AFF978LL,1UL,0x15DF48449C6FEABFLL,0x7FA248BC0D39F2BALL},{0x23A0FC1427660146LL,4UL,18446744073709551615UL,0x8735E89D6E7DEB9FLL,18446744073709551606UL},{1UL,0xE75AAC8FB9A0D794LL,0xDDA966ECBB81FF36LL,0x15DF48449C6FEABFLL,0x15DF48449C6FEABFLL},{0xE75AAC8FB9A0D794LL,0x23A0FC1427660146LL,0xE75AAC8FB9A0D794LL,0x7FA248BC0D39F2BALL,0x9A5F6F0DBF80F289LL},{0xE75AAC8FB9A0D794LL,7UL,0x8735E89D6E7DEB9FLL,0x23A0FC1427660146LL,1UL},{1UL,0xDDA966ECBB81FF36LL,4UL,0xBFA8556881AFF978LL,18446744073709551615UL}}};
                    int i, j, k;
                    for (l_341 = 0; (l_341 <= 5); l_341 += 1)
                    {
                        int32_t *l_344 = &l_302[l_341][(l_341 + 3)][l_328];
                        int32_t *l_345 = &l_295[2];
                        int32_t *l_346[7] = {&l_302[8][6][1],(void*)0,&l_302[8][6][1],&l_302[8][6][1],(void*)0,&l_302[8][6][1],&l_302[8][6][1]};
                        int i, j, k;
                        g_347--;
                        (**g_69) ^= l_302[(l_341 + 1)][(l_328 + 2)][l_328];
                        l_350[3][7][2] = ((**p_85) = l_302[(l_328 + 4)][(l_341 + 2)][l_328]);
                        (*l_344) &= ((safe_mul_func_int16_t_s_s(0xCADAL, l_296)) ^ (p_86 , (safe_rshift_func_uint16_t_u_s((l_350[3][7][2] && l_340), (&g_292 == (void*)0)))));
                    }
                    if ((**p_85))
                    {
                        uint64_t *l_356 = &l_254;
                        uint64_t **l_355 = &l_356;
                        uint64_t ***l_357 = &l_355;
                        int16_t *l_360 = &l_340;
                        (*l_357) = l_355;
                        if (l_290[1][1][4])
                            continue;
                        (**p_85) = (safe_mul_func_uint8_t_u_u((p_86 < ((*l_360) = (-1L))), (safe_rshift_func_uint8_t_u_s((p_86 >= l_304), 1))));
                        if ((*g_159))
                            continue;
                    }
                    else
                    {
                        return p_86;
                    }
                }
                for (l_340 = 0; (l_340 < 17); l_340++)
                {
                    uint8_t l_387 = 1UL;
                    int8_t *l_388 = &l_304;
                    int8_t *l_389[2];
                    uint8_t *l_390 = &g_132;
                    int32_t *l_393 = &l_302[8][1][0];
                    int32_t *l_394 = &l_300[0][0][3];
                    int32_t *l_395 = &l_295[4];
                    int32_t *l_396 = &g_25;
                    int32_t *l_397 = &l_301;
                    int32_t *l_398 = (void*)0;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_389[i] = &l_296;
                    (*l_393) |= (g_156 | ((safe_sub_func_uint16_t_u_u((~g_154), (((safe_rshift_func_int8_t_s_u(g_224, ((p_87 >= p_87) , (g_391[4][0][0] = ((safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((g_374 && ((safe_div_func_uint8_t_u_u(((*l_390) &= ((*g_100) = ((l_290[1][1][4] &= (safe_div_func_int32_t_s_s(((((*l_388) = (safe_rshift_func_uint8_t_u_u((g_292 , ((g_166[4] & (((*l_264) &= (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(l_300[0][0][4], g_25)) && p_87) | l_303), l_387)), g_53))) && l_254)) , p_86)), (*g_100)))) , 0xF4D9917F30D895FFLL) ^ l_295[5]), (**g_69)))) | 1UL))), 0xF7L)) <= l_249)), p_87)), 0x3859034B24C716A9LL)) <= p_87))))) <= 0L) && l_295[4]))) == l_392));
                    --l_399[0];
                    if (l_290[2][0][0])
                        break;
                }
            }
            else
            {
                int32_t *l_402[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint64_t *l_543 = &g_496[2][0][1];
                uint64_t **l_542[2][3];
                uint16_t l_544 = 1UL;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_542[i][j] = &l_543;
                }
                l_404--;
                for (g_224 = 0; (g_224 >= 16); g_224 = safe_add_func_uint32_t_u_u(g_224, 3))
                {
                    l_409++;
                    return p_87;
                }
                if ((safe_sub_func_uint32_t_u_u(0x5567A5E6L, ((p_86 , ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_43[7], (l_295[4] , (((safe_add_func_uint16_t_u_u((l_295[2] = (g_53 != (p_86 , (safe_div_func_uint16_t_u_u(l_422, 0x18D5L))))), (p_87 , g_391[1][0][0]))) && g_224) > p_87)))), 0x28L)) && p_86)) <= 4294967290UL))))
                {
                    int16_t l_448[4][8][8] = {{{0x16ECL,0x890FL,(-1L),0xEABAL,0x5D46L,0x9FDFL,(-8L),1L},{0x537AL,8L,(-1L),0x9A7CL,9L,0x35B9L,0x6401L,0x4C42L},{0x5D46L,0x2E77L,0x18FDL,0x14E7L,(-8L),0xEABAL,0x537AL,0x0E2AL},{0x18FDL,1L,0x16ECL,0x14E7L,0x16ECL,1L,0x18FDL,0x4C42L},{9L,0x0E2AL,2L,0x9A7CL,0x84F4L,0x4C42L,0x8A6EL,1L},{0x3BBEL,4L,9L,0x9A7CL,(-1L),8L,0x537AL,(-1L)},{2L,(-1L),0x8A6EL,0x0E2AL,0x18FDL,0x35B9L,(-4L),4L},{0x3BBEL,1L,0x84F4L,0x35B9L,0x16ECL,0x35B9L,0x84F4L,1L}},{{0L,(-1L),0xC5D4L,0x4C42L,2L,8L,0x18FDL,0xEABAL},{(-8L),0x35B9L,(-1L),(-8L),0L,0xBE0DL,0x18FDL,0x9A7CL},{0x18FDL,(-8L),0xC5D4L,8L,7L,0x9FDFL,0x84F4L,0x14E7L},{7L,0x9FDFL,0x84F4L,0x14E7L,(-4L),0x9A7CL,(-4L),0x14E7L},{0x8A6EL,4L,0x8A6EL,8L,(-6L),1L,0x537AL,0x9A7CL},{0x5D46L,0x890FL,9L,(-8L),0x84F4L,0x2E77L,(-6L),0xEABAL},{0x5D46L,(-9L),(-4L),0x4C42L,(-6L),(-8L),0x3BBEL,1L},{0x8A6EL,0x0E2AL,0x18FDL,0x35B9L,(-4L),4L,(-8L),4L}},{{7L,0x0E2AL,0x3BBEL,0x0E2AL,7L,(-8L),0x5D46L,(-1L)},{0x18FDL,(-9L),7L,0x9A7CL,0L,0x2E77L,0x16ECL,0x0E2AL},{(-8L),0x890FL,7L,1L,2L,1L,0x5D46L,0xBE0DL},{0L,4L,0x3BBEL,(-1L),0x16ECL,0x9A7CL,(-8L),(-8L)},{0x3BBEL,0x9FDFL,0x18FDL,(-1L),0x18FDL,0x9FDFL,0x3BBEL,0xBE0DL},{2L,(-8L),(-4L),1L,(-1L),0xBE0DL,(-6L),0x0E2AL},{0x6401L,0x35B9L,9L,0x9A7CL,(-1L),8L,0x537AL,(-1L)},{2L,(-1L),0x8A6EL,0x0E2AL,0x18FDL,0x35B9L,(-4L),4L}},{{0x3BBEL,1L,0x84F4L,0x35B9L,0x16ECL,0x35B9L,0x84F4L,1L},{0L,(-1L),0xC5D4L,0x4C42L,2L,8L,0x18FDL,0xEABAL},{(-8L),0x35B9L,(-1L),(-8L),0L,0xBE0DL,0x18FDL,0x9A7CL},{0x18FDL,(-8L),0xC5D4L,8L,7L,0x9FDFL,0x84F4L,0x14E7L},{7L,0x9FDFL,0x84F4L,0x14E7L,(-4L),0x9A7CL,(-4L),0x14E7L},{(-6L),0x35B9L,(-6L),0x890FL,0xC5D4L,0x0E2AL,(-8L),1L},{0L,(-9L),2L,0x14E7L,(-1L),4L,0xC5D4L,0x9A7CL},{0L,0xEABAL,0x84F4L,0xBE0DL,0xC5D4L,0x14E7L,0x6401L,0x0E2AL}}};
                    int16_t l_465 = 3L;
                    uint32_t l_466 = 0x48EE19A4L;
                    int32_t l_467 = (-5L);
                    int i, j, k;
                    for (l_296 = 16; (l_296 != 16); l_296 = safe_add_func_uint16_t_u_u(l_296, 6))
                    {
                        uint64_t l_429[9] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                        int16_t *l_449 = (void*)0;
                        int16_t *l_450 = &l_392;
                        int8_t *l_464[7][4][9] = {{{&l_304,&l_304,&l_296,&l_304,&l_296,&l_303,&l_304,(void*)0,&l_296},{&l_303,&g_292,(void*)0,&g_292,&l_303,&l_303,(void*)0,&g_292,(void*)0},{&l_296,&l_304,&l_296,&l_304,&l_304,&l_296,&l_304,&l_296,&l_303},{&l_296,&g_292,&l_303,&l_303,&l_296,&l_303,&l_296,&l_303,&l_303}},{{&l_296,&l_304,(void*)0,&l_304,&l_304,&l_303,(void*)0,(void*)0,&l_303},{&l_303,&l_303,(void*)0,&l_303,&l_303,(void*)0,(void*)0,&l_303,(void*)0},{&l_304,&l_304,(void*)0,&l_304,&l_296,&l_296,(void*)0,&l_296,&l_296},{&l_296,&l_303,&l_303,&g_292,&l_296,(void*)0,&l_296,&g_292,&l_303}},{{&l_304,&l_304,&l_296,&l_304,&l_296,&l_303,&l_304,(void*)0,&l_296},{&l_303,&g_292,(void*)0,&g_292,&l_303,&l_303,(void*)0,&g_292,(void*)0},{&l_296,&l_304,&l_296,&l_304,&l_304,&l_296,&l_304,&l_296,&l_303},{&l_296,&g_292,&l_303,&l_303,&l_296,&l_303,&l_296,&l_303,&l_303}},{{&l_296,&l_304,(void*)0,&l_304,&l_304,&l_303,(void*)0,(void*)0,&l_303},{&l_303,&l_303,(void*)0,&l_303,&l_303,(void*)0,(void*)0,&l_303,(void*)0},{&l_304,&l_304,(void*)0,&l_304,&l_296,&l_296,(void*)0,&l_296,&l_296},{&l_296,&l_303,&l_303,&g_292,&l_296,(void*)0,&l_296,&g_292,&l_303}},{{&l_304,&l_304,&l_296,&l_304,&l_296,&l_303,&l_304,(void*)0,&l_296},{&l_303,&g_292,(void*)0,&g_292,&l_303,&g_292,&l_303,&g_292,&l_303},{&l_304,&l_303,(void*)0,(void*)0,(void*)0,(void*)0,&l_303,&l_304,&l_296},{&l_296,&g_292,&l_296,&l_303,&l_296,&g_292,&l_296,&l_303,&l_296}},{{&l_304,(void*)0,&l_304,&l_303,(void*)0,&l_296,&l_303,&l_303,&l_296},{&l_296,&l_303,(void*)0,&l_303,&l_296,&l_303,&l_303,&l_303,&l_303},{(void*)0,&l_303,&l_304,(void*)0,&l_304,(void*)0,&l_303,&l_304,&l_304},{&l_296,&l_303,&l_296,&g_292,&l_296,&l_303,&l_296,&g_292,&l_296}},{{(void*)0,(void*)0,(void*)0,&l_303,&l_304,&l_296,&l_303,&l_303,&l_304},{&l_296,&g_292,(void*)0,&g_292,&l_296,&g_292,&l_303,&g_292,&l_303},{&l_304,&l_303,(void*)0,(void*)0,(void*)0,(void*)0,&l_303,&l_304,&l_296},{&l_296,&g_292,&l_296,&l_303,&l_296,&g_292,&l_296,&l_303,&l_296}}};
                        int32_t l_468 = 0x18FC3900L;
                        int i, j, k;
                        (**p_85) = (safe_sub_func_uint8_t_u_u(((**g_69) , ((safe_sub_func_uint8_t_u_u(((*g_100) = l_429[4]), ((l_302[8][4][2] = (safe_div_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_87, 5)), (((-4L) ^ (safe_lshift_func_uint8_t_u_s(l_295[4], 2))) < (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((((*l_450) = l_448[2][6][6]) && 0x4605L), ((0x6834L >= (((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_131, g_374)), l_448[2][6][6])) , g_292), p_87)), l_463)), g_391[0][0][0])), l_448[2][6][6])) && l_301) >= l_302[8][8][2])) > l_296))) , 0xFB7661A4L), 0xAE5473ABL)) && 3L), l_429[4])), p_86)), g_227))))) <= 0xCAB4L) <= l_463), (**g_69)))) == p_86))) , l_465)), l_466));
                        ++l_469[1][2][1];
                        l_468 = (-1L);
                    }
                    if ((**p_85))
                        break;
                }
                else
                {
                    const int16_t *l_482 = &g_154;
                    int32_t l_494[8][1] = {{0xD8EE9292L},{0xD8EE9292L},{7L},{0xD8EE9292L},{0xD8EE9292L},{7L},{0xD8EE9292L},{0xD8EE9292L}};
                    int i, j;
                    for (g_131 = 0; (g_131 <= 4); g_131 += 1)
                    {
                        uint32_t l_474 = 0xE2E9FDBBL;
                        int16_t *l_483 = (void*)0;
                        int16_t *l_484 = &g_154;
                        uint64_t *l_489 = &l_254;
                        (**p_85) = (safe_mod_func_uint8_t_u_u(0x92L, ((l_474 ^ ((safe_mod_func_int16_t_s_s((l_474 | 4294967290UL), (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_sub_func_int16_t_s_s((((void*)0 == l_482) >= p_87), p_86)))), ((*l_484) = g_391[4][0][0]))))) <= 250UL)) , (*g_100))));
                        (*g_159) &= (((((safe_div_func_uint64_t_u_u((0xCFF41DE3L || ((g_391[2][0][0] ^ 3UL) , l_304)), (p_87 || ((safe_mod_func_int64_t_s_s((0xC518055757F54ED3LL ^ p_87), ((((((*l_489)--) ^ (safe_sub_func_int8_t_s_s((l_494[5][0] || (*g_100)), l_463))) > g_292) < p_87) , 1UL))) && l_495)))) ^ 0UL) && l_302[8][1][0]) ^ 0x8A185707L) && 0xD8L);
                        if (g_496[2][0][1])
                            continue;
                        if ((*g_159))
                            break;
                    }
                }
                for (g_154 = 12; (g_154 < (-11)); --g_154)
                {
                    int16_t l_504 = (-1L);
                    int32_t l_505 = 0xF303F1E7L;
                    int32_t l_507 = (-1L);
                    int32_t l_510 = 0xB9A82DE8L;
                    int32_t l_511 = (-5L);
                    int32_t l_514 = 0x2ACCF7AEL;
                    int32_t l_515 = (-1L);
                    int32_t l_516 = 0x4923B36EL;
                    int32_t l_517 = (-1L);
                    int32_t l_518 = 0x467F0B24L;
                    int32_t l_519 = 0L;
                    int64_t l_520 = 0x7ABB548EEA04DA12LL;
                    int64_t l_521 = 1L;
                    int32_t *l_525 = &l_495;
                    const uint32_t *l_536 = (void*)0;
                    const uint32_t **l_535 = &l_536;
                    uint32_t *l_538 = &l_249;
                    uint32_t **l_537[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_537[i] = &l_538;
                    for (g_53 = 0; (g_53 != 56); ++g_53)
                    {
                        uint32_t l_501 = 0x21F9047AL;
                        int32_t l_506 = 0x75692212L;
                        int32_t l_508 = 0x06EB005EL;
                        int32_t l_509[1][8];
                        int32_t l_513 = 0xF0CFE325L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_509[i][j] = (-1L);
                        }
                        l_501++;
                        (*p_85) = (*g_69);
                        ++l_522;
                    }
                    l_525 = (void*)0;
                    l_544 |= (l_295[2] ^= (safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(248UL, (safe_div_func_int64_t_s_s((l_532 || (safe_rshift_func_uint16_t_u_s(((((*l_535) = &g_131) == (l_539[1][7][1] = &g_131)) >= (p_87 , (g_156 , p_87))), (safe_sub_func_int64_t_s_s(l_469[1][2][1], (((*g_159) &= (l_542[1][1] != (void*)0)) <= g_43[7])))))), g_154)))), 0xE5AC88ABL)));
                    if ((**g_69))
                        break;
                }
            }
            if ((**p_85))
                continue;
            return l_545;
        }
    }
    return p_86;
}







static int32_t ** func_89(uint8_t * p_90, uint32_t p_91, const uint16_t p_92)
{
    int64_t l_96[5][7] = {{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{3L,(-8L),3L,(-8L),3L,(-8L),3L},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{3L,(-8L),3L,(-8L),3L,(-8L),3L},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}};
    uint8_t *l_99 = &g_53;
    int32_t **l_110 = &g_70;
    int32_t l_111 = 0x258348F9L;
    uint16_t l_153 = 0x8459L;
    int32_t l_226[6];
    int32_t *l_230 = &l_226[3];
    int32_t *l_231 = &l_111;
    int32_t *l_232 = &g_166[4];
    int32_t *l_233 = &l_226[3];
    int32_t *l_234 = (void*)0;
    int32_t *l_235 = &l_111;
    int32_t *l_236 = &l_226[5];
    int32_t *l_237 = &l_226[1];
    int32_t *l_238 = &l_226[3];
    int32_t *l_239 = (void*)0;
    int32_t *l_240 = &l_226[3];
    int32_t *l_241 = (void*)0;
    int32_t *l_242 = &g_166[4];
    int32_t *l_243 = &l_226[3];
    uint32_t l_244 = 1UL;
    int i, j;
    for (i = 0; i < 6; i++)
        l_226[i] = 0x8AF396E7L;
    for (p_91 = 0; (p_91 > 57); p_91 = safe_add_func_int64_t_s_s(p_91, 2))
    {
        uint8_t **l_101 = (void*)0;
        uint8_t *l_103[1];
        uint8_t **l_102 = &l_103[0];
        uint64_t *l_112 = &g_43[7];
        int32_t **l_115[10] = {&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70};
        uint32_t l_133 = 0xF6214041L;
        uint16_t l_161[3][5] = {{0x18C0L,0x89B7L,0xAABCL,0x89B7L,0x18C0L},{65535UL,0x89B7L,0xD3B5L,0x18C0L,0xD3B5L},{0xD3B5L,0xD3B5L,0xAABCL,0x18C0L,0xF595L}};
        uint64_t l_194 = 6UL;
        uint64_t l_222[9] = {0x8EB1A2BFF11E01BELL,0x8EB1A2BFF11E01BELL,0x8EB1A2BFF11E01BELL,0x8EB1A2BFF11E01BELL,0x8EB1A2BFF11E01BELL,0x8EB1A2BFF11E01BELL,0x8EB1A2BFF11E01BELL,0x8EB1A2BFF11E01BELL,0x8EB1A2BFF11E01BELL};
        int i, j;
        for (i = 0; i < 1; i++)
            l_103[i] = &g_53;
        l_96[3][3] ^= ((g_53 <= 0L) && (-1L));
    }
    --l_244;
    return &g_70;
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
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_43[i], "g_43[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_391[i][j][k], "g_391[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_496[i][j][k], "g_496[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_704, "g_704", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    transparent_crc(g_893, "g_893", print_hash_value);
    transparent_crc(g_946, "g_946", print_hash_value);
    transparent_crc(g_1054, "g_1054", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1157[i][j][k], "g_1157[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1541, "g_1541", print_hash_value);
    transparent_crc(g_1576, "g_1576", print_hash_value);
    transparent_crc(g_1715, "g_1715", print_hash_value);
    transparent_crc(g_1802, "g_1802", print_hash_value);
    transparent_crc(g_1839, "g_1839", print_hash_value);
    transparent_crc(g_1878, "g_1878", print_hash_value);
    transparent_crc(g_1880, "g_1880", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
