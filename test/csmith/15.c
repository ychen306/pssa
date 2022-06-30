// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 167B58EF
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
   uint16_t f0;
   int8_t * const f1;
   unsigned f2 : 22;
   int64_t f3;
   int16_t f4;
};

union U1 {
   unsigned f0 : 4;
   uint64_t f1;
   const uint32_t f2;
   const uint32_t f3;
};

union U2 {
   int8_t * const f0;
   int64_t f1;
   int32_t f2;
   uint8_t f3;
};


static uint16_t g_8 = 0xCFAFL;
static int16_t g_10 = 0xF996L;
static int16_t *g_24 = (void*)0;
static union U2 g_31[6] = {{0},{0},{0},{0},{0},{0}};
static int8_t g_52[7] = {0L,0L,0L,0L,0L,0L,0L};
static int32_t g_82 = (-4L);
static int32_t *g_81[5] = {&g_82,&g_82,&g_82,&g_82,&g_82};
static uint32_t g_89 = 0x039428F8L;
static int16_t g_92 = (-2L);
static union U1 g_121 = {0x1BE66BFFL};
static uint16_t g_124 = 0xF650L;
static uint16_t *g_123[4] = {&g_124,&g_124,&g_124,&g_124};
static int32_t g_198 = 0x894D0847L;
static union U0 g_271 = {0xF30FL};
static const int32_t g_301 = 0x3E592466L;
static int64_t g_335 = (-8L);
static union U2 g_368 = {0};
static union U2 *g_367 = &g_368;
static union U1 g_404 = {4294967295UL};
static union U1 *g_403 = &g_404;
static uint16_t **g_413 = &g_123[2];
static uint16_t ***g_412 = &g_413;
static int16_t g_426 = 0x02A9L;
static int32_t g_458 = 0x3A852397L;
static uint32_t g_517 = 18446744073709551615UL;
static uint16_t g_535 = 65528UL;
static int32_t g_585 = (-9L);
static int16_t g_633 = 1L;
static int8_t g_645[10][9][2] = {{{0x7AL,8L},{1L,0xB0L},{1L,0x0FL},{0L,6L},{0x60L,0x16L},{0x76L,0x53L},{0x7BL,1L},{(-1L),0L},{0x5DL,1L}},{{0x54L,0xA3L},{0L,0x75L},{0x6EL,7L},{1L,(-2L)},{0x16L,(-1L)},{8L,0x75L},{0x75L,1L},{0x0BL,8L},{0x60L,(-5L)}},{{0x18L,0x45L},{0x9DL,0x7BL},{0L,0x54L},{0x07L,7L},{(-5L),0L},{0x0FL,0x53L},{0L,0x67L},{0x7BL,0xA3L},{0x38L,0x5BL}},{{0x76L,0x75L},{0x5DL,0x5DL},{7L,0xE2L},{0x45L,0x60L},{6L,0x5DL},{0x54L,6L},{0x67L,0x0BL},{0x67L,6L},{0x54L,0x5DL}},{{6L,0x60L},{0x45L,0xE2L},{7L,0x5DL},{0x5DL,0x75L},{0x76L,0x5BL},{0x38L,0xA3L},{0x7BL,0x67L},{0L,0x53L},{0x0FL,0L}},{{(-5L),7L},{0x07L,0x54L},{0L,0x7BL},{0x9DL,0x45L},{0x18L,(-5L)},{0x60L,8L},{0x0BL,1L},{0x75L,0x75L},{8L,(-1L)}},{{0x16L,(-2L)},{1L,(-2L)},{0x16L,(-1L)},{8L,0x75L},{0x75L,1L},{0x0BL,8L},{0x60L,(-5L)},{0x18L,0x45L},{0x9DL,0x7BL}},{{0L,0x54L},{0x07L,7L},{(-5L),0L},{0x0FL,0x53L},{0L,0x67L},{0x7BL,0xA3L},{0x38L,0x5BL},{0x76L,0x75L},{0x5DL,0x5DL}},{{7L,0xE2L},{0x45L,0x60L},{6L,0x5DL},{0x54L,6L},{0x67L,0x0BL},{0x67L,6L},{0x54L,0x5DL},{6L,0x60L},{0x45L,0xE2L}},{{7L,0x5DL},{0x5DL,0x75L},{0x76L,0x5BL},{0x38L,0xA3L},{0x7BL,0x67L},{0L,0x53L},{0x0FL,0L},{(-5L),7L},{0x07L,0x54L}}};
static int8_t *g_644 = &g_645[4][3][1];
static uint8_t g_671 = 255UL;
static int8_t g_699[2][8] = {{5L,5L,0xFCL,0xFCL,5L,5L,0xFCL,0xFCL},{5L,5L,0xFCL,0xFCL,5L,5L,0xFCL,0xFCL}};
static int32_t *g_718 = (void*)0;
static int32_t **g_717 = &g_718;
static uint32_t g_743 = 4294967287UL;
static int32_t **g_858 = &g_81[1];
static int32_t ***g_857 = &g_858;
static int32_t *** const *g_856 = &g_857;
static uint8_t *g_874[7][7][1] = {{{(void*)0},{(void*)0},{&g_671},{(void*)0},{&g_671},{(void*)0},{&g_671}},{{(void*)0},{&g_671},{(void*)0},{(void*)0},{&g_671},{(void*)0},{&g_671}},{{(void*)0},{(void*)0},{&g_671},{(void*)0},{&g_671},{&g_671},{(void*)0}},{{(void*)0},{&g_671},{&g_671},{(void*)0},{(void*)0},{&g_671},{(void*)0}},{{(void*)0},{&g_671},{&g_671},{(void*)0},{(void*)0},{&g_671},{(void*)0}},{{(void*)0},{&g_671},{&g_671},{(void*)0},{(void*)0},{&g_671},{(void*)0}},{{(void*)0},{&g_671},{&g_671},{(void*)0},{(void*)0},{&g_671},{(void*)0}}};
static int8_t g_934 = (-5L);
static int32_t g_953 = 0xCB399227L;
static int64_t ***g_986 = (void*)0;
static int64_t ****g_985 = &g_986;
static int32_t * const *g_991 = &g_81[2];
static int32_t * const **g_990[4] = {&g_991,&g_991,&g_991,&g_991};
static int32_t * const ***g_989[3][10][4] = {{{&g_990[2],&g_990[3],&g_990[2],&g_990[3]},{&g_990[3],&g_990[3],&g_990[2],&g_990[2]},{&g_990[2],&g_990[2],&g_990[3],&g_990[2]},{(void*)0,&g_990[3],(void*)0,&g_990[3]},{(void*)0,&g_990[3],&g_990[3],(void*)0},{&g_990[2],&g_990[3],&g_990[2],&g_990[3]},{&g_990[3],&g_990[3],&g_990[2],&g_990[2]},{&g_990[2],&g_990[2],&g_990[3],&g_990[2]},{(void*)0,&g_990[3],(void*)0,&g_990[3]},{(void*)0,&g_990[3],&g_990[3],(void*)0}},{{&g_990[2],&g_990[3],&g_990[2],&g_990[3]},{&g_990[3],&g_990[3],&g_990[2],&g_990[2]},{&g_990[2],&g_990[2],&g_990[3],&g_990[2]},{(void*)0,&g_990[3],(void*)0,&g_990[3]},{(void*)0,&g_990[3],&g_990[3],(void*)0},{&g_990[2],&g_990[3],&g_990[2],&g_990[3]},{&g_990[3],&g_990[3],&g_990[2],&g_990[2]},{&g_990[2],&g_990[2],&g_990[3],&g_990[2]},{(void*)0,&g_990[3],(void*)0,&g_990[3]},{(void*)0,&g_990[3],&g_990[3],(void*)0}},{{&g_990[2],&g_990[3],&g_990[2],&g_990[3]},{&g_990[3],&g_990[3],&g_990[2],&g_990[2]},{&g_990[2],&g_990[2],&g_990[3],&g_990[2]},{(void*)0,&g_990[3],(void*)0,&g_990[3]},{(void*)0,&g_990[3],&g_990[3],(void*)0},{&g_990[2],&g_990[3],&g_990[2],&g_990[3]},{&g_990[3],&g_990[3],&g_990[2],&g_990[2]},{&g_990[2],&g_990[2],&g_990[3],&g_990[2]},{(void*)0,&g_990[3],(void*)0,&g_990[3]},{(void*)0,&g_990[3],&g_990[3],(void*)0}}};
static int64_t g_1008 = 0x43EE1145D230F5A1LL;
static uint64_t *g_1054 = (void*)0;
static const uint32_t g_1193 = 0x6CA995DBL;
static int8_t g_1194 = 0x56L;
static uint64_t *g_1209 = (void*)0;
static uint8_t g_1216 = 0x87L;
static int8_t g_1274 = 0x80L;
static int32_t g_1297 = 0L;
static int8_t g_1322 = 0L;
static uint64_t g_1367 = 0UL;
static int64_t g_1474 = (-5L);
static int64_t g_1518 = 0x2814119B0DC002DCLL;
static const int32_t *g_1533 = (void*)0;
static int64_t g_1608 = 2L;
static uint16_t g_1742 = 5UL;
static const int64_t g_1747[1][3][4] = {{{0xE65C27F7EFADD706LL,0x2AB8200B8FD369A9LL,1L,0x2AB8200B8FD369A9LL},{0x2AB8200B8FD369A9LL,(-1L),1L,1L},{0xE65C27F7EFADD706LL,0xE65C27F7EFADD706LL,0x2AB8200B8FD369A9LL,1L}}};
static int8_t * const *g_1823 = &g_644;
static int8_t * const **g_1822 = &g_1823;
static int8_t **g_1833 = &g_644;
static int8_t ***g_1832 = &g_1833;
static int8_t ****g_1831 = &g_1832;
static union U0 *g_1900[2] = {&g_271,&g_271};
static union U0 **g_1899 = &g_1900[1];
static uint8_t g_1945 = 1UL;
static uint8_t g_1999 = 0x49L;
static int32_t g_2051 = 0xF5CB5E02L;
static uint8_t g_2062 = 1UL;
static uint64_t g_2074 = 0xFF839E071A05132DLL;
static int16_t **g_2095 = &g_24;
static int16_t ***g_2094 = &g_2095;
static int16_t ** const *g_2128 = &g_2095;
static int16_t ** const **g_2127 = &g_2128;
static uint64_t * const g_2369 = (void*)0;
static uint64_t * const *g_2368 = &g_2369;
static uint64_t * const **g_2367[1][7] = {{&g_2368,&g_2368,&g_2368,&g_2368,&g_2368,&g_2368,&g_2368}};
static uint64_t g_2379 = 0xFF2E12BC1A5B93EELL;
static union U0 ***g_2412 = (void*)0;
static uint32_t g_2514 = 0x3F6B1774L;
static uint8_t g_2544[4][10] = {{0xA9L,0xA9L,255UL,0xA9L,0xA9L,255UL,0xA9L,0xA9L,255UL,0xA9L},{0xA9L,0x13L,0x13L,0xA9L,0x13L,255UL,0x13L,255UL,255UL,0x13L},{255UL,0x13L,255UL,255UL,0x13L,255UL,255UL,0x13L,255UL,255UL},{0x13L,0x13L,0xA9L,0x13L,0x13L,0xA9L,0x13L,0x13L,0xA9L,0x13L}};
static uint16_t g_2665 = 65533UL;
static const int32_t **g_2685 = &g_1533;
static const int32_t ***g_2684 = &g_2685;
static int16_t g_2739 = 0x3EE4L;
static int16_t g_2819 = 9L;
static const uint16_t *g_2830 = &g_535;
static const uint16_t **g_2829 = &g_2830;
static const uint16_t ***g_2828[5][8][6] = {{{&g_2829,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{(void*)0,&g_2829,(void*)0,(void*)0,&g_2829,&g_2829},{&g_2829,&g_2829,(void*)0,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,(void*)0,(void*)0,&g_2829,&g_2829},{&g_2829,&g_2829,(void*)0,&g_2829,(void*)0,&g_2829}},{{&g_2829,&g_2829,&g_2829,(void*)0,(void*)0,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,(void*)0,&g_2829},{&g_2829,&g_2829,&g_2829,(void*)0,(void*)0,&g_2829},{(void*)0,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829}},{{(void*)0,&g_2829,(void*)0,(void*)0,&g_2829,&g_2829},{&g_2829,&g_2829,(void*)0,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,(void*)0,(void*)0,&g_2829,&g_2829},{&g_2829,&g_2829,(void*)0,&g_2829,(void*)0,&g_2829},{&g_2829,&g_2829,&g_2829,(void*)0,(void*)0,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,(void*)0,&g_2829}},{{&g_2829,&g_2829,&g_2829,(void*)0,(void*)0,&g_2829},{(void*)0,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,(void*)0,&g_2829,(void*)0,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,(void*)0,&g_2829},{&g_2829,&g_2829,(void*)0,&g_2829,&g_2829,(void*)0},{&g_2829,(void*)0,&g_2829,&g_2829,(void*)0,(void*)0}},{{&g_2829,&g_2829,(void*)0,&g_2829,(void*)0,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,(void*)0,&g_2829,(void*)0,&g_2829},{&g_2829,(void*)0,(void*)0,&g_2829,&g_2829,(void*)0},{&g_2829,(void*)0,&g_2829,&g_2829,(void*)0,&g_2829},{&g_2829,&g_2829,(void*)0,&g_2829,&g_2829,&g_2829},{&g_2829,&g_2829,(void*)0,&g_2829,(void*)0,&g_2829},{&g_2829,&g_2829,&g_2829,&g_2829,(void*)0,(void*)0}}};
static const uint16_t ****g_2827[5] = {&g_2828[4][7][2],&g_2828[4][7][2],&g_2828[4][7][2],&g_2828[4][7][2],&g_2828[4][7][2]};
static uint16_t g_2842 = 0UL;
static const uint64_t g_2882[5] = {0x4758D1EB3B5E7820LL,0x4758D1EB3B5E7820LL,0x4758D1EB3B5E7820LL,0x4758D1EB3B5E7820LL,0x4758D1EB3B5E7820LL};



static int16_t func_1(void);
static int16_t func_2(int16_t p_3, int16_t p_4, uint16_t p_5, int8_t * p_6, uint32_t p_7);
static int16_t func_11(const int8_t p_12, const uint16_t p_13, int8_t * p_14, int8_t * p_15);
static uint16_t func_25(union U2 p_26, const int8_t * p_27, int16_t p_28, int16_t * p_29, uint64_t p_30);
static int8_t * func_32(int16_t * p_33, int8_t * p_34, union U2 p_35, int8_t * p_36, int32_t p_37);
static int16_t * func_38(int16_t * p_39, const int8_t p_40, int8_t * p_41, int8_t * p_42);
static int16_t * func_43(int16_t * p_44, int16_t * p_45);
static int16_t * func_46(const int16_t * p_47, int8_t * p_48, union U1 p_49, int8_t * p_50);
static int32_t * func_54(int8_t * p_55, uint64_t p_56);
static int8_t * func_57(union U2 p_58, uint32_t p_59, int8_t * p_60, int8_t p_61, int16_t * p_62);
# 156 "<stdin>"
static int16_t func_1(void)
{
    int16_t *l_9 = &g_10;
    int8_t *l_51[3];
    union U1 l_53 = {1UL};
    int16_t *l_629 = (void*)0;
    int16_t **l_628 = &l_629;
    uint16_t l_1161 = 0UL;
    int32_t l_1162[3][4];
    uint32_t l_1886 = 4294967295UL;
    int32_t *l_1887 = &g_82;
    int16_t l_1932 = 0x7C18L;
    int64_t *l_1936 = (void*)0;
    int64_t **l_1935 = &l_1936;
    uint16_t ***l_1964 = &g_413;
    int8_t l_1998[2][3] = {{0x1AL,0x1AL,0x1AL},{(-4L),(-4L),(-4L)}};
    uint32_t l_2036 = 0x9330CE1CL;
    int32_t l_2073 = 0L;
    union U2 l_2113 = {0};
    int32_t l_2177[5][5][7] = {{{0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L},{0xEE9290BCL,0xEE9290BCL,1L,0xEE9290BCL,0xEE9290BCL,1L,0xEE9290BCL},{0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL},{0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L},{0xEE9290BCL,0xEE9290BCL,1L,0xEE9290BCL,0xEE9290BCL,1L,0xEE9290BCL}},{{0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL},{0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L},{0xEE9290BCL,0xEE9290BCL,1L,0xEE9290BCL,0xEE9290BCL,1L,0xEE9290BCL},{0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL},{0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L}},{{0xEE9290BCL,0xEE9290BCL,1L,0xEE9290BCL,0xEE9290BCL,1L,0xEE9290BCL},{0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL},{0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L},{0xEE9290BCL,0xEE9290BCL,1L,0xEE9290BCL,0xEE9290BCL,1L,0xEE9290BCL},{0xEE9290BCL,0x0FF38971L,0x0FF38971L,0x0FF38971L,1L,1L,0x0FF38971L}},{{1L,0x0FF38971L,1L,1L,0x0FF38971L,1L,1L},{0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L},{0x0FF38971L,1L,1L,0x0FF38971L,1L,1L,0x0FF38971L},{1L,0x0FF38971L,1L,1L,0x0FF38971L,1L,1L},{0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L}},{{0x0FF38971L,1L,1L,0x0FF38971L,1L,1L,0x0FF38971L},{1L,0x0FF38971L,1L,1L,0x0FF38971L,1L,1L},{0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L,0x0FF38971L,0xEE9290BCL,0x0FF38971L},{0x0FF38971L,1L,1L,0x0FF38971L,1L,1L,0x0FF38971L},{1L,0x0FF38971L,1L,1L,0x0FF38971L,1L,1L}}};
    int8_t ***l_2200 = &g_1833;
    int8_t l_2201 = (-4L);
    uint16_t l_2203 = 1UL;
    uint16_t **** const l_2211 = &l_1964;
    uint16_t **** const *l_2210 = &l_2211;
    uint8_t l_2214 = 250UL;
    uint32_t *l_2217 = &l_1886;
    int16_t ****l_2221 = (void*)0;
    int16_t *****l_2220 = &l_2221;
    const int64_t l_2222[3][2][10] = {{{(-4L),(-4L),0L,0xC73AE872CB338217LL,0xAAF2569BDC768721LL,(-2L),(-1L),7L,0L,1L},{0L,(-1L),0x981B1BC71CFC68CCLL,(-1L),0L,1L,(-1L),(-1L),0x1417789D2C2FFDF5LL,0L}},{{0x0816E1F836BFB3ECLL,(-4L),0x1417789D2C2FFDF5LL,0L,1L,0L,0x1417789D2C2FFDF5LL,(-4L),0x0816E1F836BFB3ECLL,0x981B1BC71CFC68CCLL},{0xAAF2569BDC768721LL,7L,(-2L),(-4L),0xFA45521639E25003LL,(-2L),0xC73AE872CB338217LL,0L,8L,(-1L)}},{{0xFA45521639E25003LL,0x1417789D2C2FFDF5LL,1L,(-4L),0L,(-3L),0xFA45521639E25003LL,0x0816E1F836BFB3ECLL,0x0816E1F836BFB3ECLL,0xFA45521639E25003LL},{(-1L),0L,0L,0L,0L,(-1L),(-1L),0xAAF2569BDC768721LL,0x1417789D2C2FFDF5LL,0x0816E1F836BFB3ECLL}}};
    uint64_t **l_2224 = (void*)0;
    union U0 l_2252[9] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
    uint64_t l_2318[1][7] = {{7UL,7UL,9UL,7UL,7UL,9UL,7UL}};
    int32_t l_2339 = 0xB374B03EL;
    uint64_t * const *l_2365[7][7][5] = {{{&g_1054,&g_1209,&g_1209,(void*)0,&g_1209},{&g_1209,&g_1209,&g_1054,&g_1209,&g_1054},{&g_1054,(void*)0,&g_1209,&g_1209,&g_1054},{(void*)0,(void*)0,&g_1209,&g_1209,&g_1054},{&g_1054,(void*)0,&g_1209,&g_1209,&g_1054},{(void*)0,&g_1054,&g_1054,(void*)0,&g_1054},{&g_1054,&g_1054,&g_1209,&g_1054,&g_1054}},{{&g_1054,&g_1209,&g_1054,&g_1209,&g_1054},{(void*)0,&g_1209,&g_1209,&g_1209,&g_1054},{&g_1054,&g_1054,&g_1209,(void*)0,&g_1054},{&g_1209,&g_1209,&g_1209,&g_1209,&g_1209},{&g_1209,&g_1209,&g_1209,&g_1209,&g_1209},{&g_1209,&g_1209,&g_1054,&g_1209,&g_1054},{&g_1209,&g_1054,&g_1209,(void*)0,&g_1054}},{{&g_1209,&g_1054,&g_1209,&g_1209,&g_1209},{&g_1054,&g_1054,&g_1209,&g_1209,&g_1209},{&g_1209,&g_1209,&g_1054,&g_1209,&g_1054},{&g_1209,&g_1209,&g_1209,&g_1209,&g_1054},{&g_1209,&g_1054,&g_1209,&g_1054,(void*)0},{&g_1209,&g_1054,&g_1209,&g_1209,&g_1054},{&g_1209,&g_1054,&g_1054,&g_1209,&g_1209}},{{&g_1054,&g_1209,&g_1209,&g_1054,&g_1209},{&g_1054,&g_1209,&g_1209,&g_1209,&g_1209},{&g_1209,&g_1209,&g_1209,&g_1209,&g_1054},{&g_1209,&g_1054,&g_1054,&g_1209,(void*)0},{&g_1054,&g_1209,&g_1209,&g_1209,&g_1054},{&g_1054,&g_1054,&g_1209,(void*)0,&g_1054},{&g_1209,&g_1209,&g_1209,&g_1209,&g_1209}},{{&g_1209,&g_1209,&g_1209,&g_1209,&g_1209},{&g_1209,&g_1209,&g_1054,&g_1209,&g_1054},{&g_1209,&g_1054,&g_1209,(void*)0,&g_1054},{&g_1209,&g_1054,&g_1209,&g_1209,&g_1209},{&g_1054,&g_1054,&g_1209,&g_1209,&g_1209},{&g_1209,&g_1209,&g_1054,&g_1209,&g_1054},{&g_1209,&g_1209,&g_1209,&g_1209,&g_1054}},{{&g_1209,&g_1054,&g_1209,&g_1054,(void*)0},{&g_1209,&g_1054,&g_1209,&g_1209,&g_1054},{&g_1209,&g_1054,&g_1054,&g_1209,&g_1209},{&g_1054,&g_1209,&g_1209,&g_1054,&g_1209},{&g_1054,&g_1209,&g_1209,&g_1209,&g_1209},{&g_1209,&g_1209,&g_1209,&g_1209,&g_1054},{&g_1209,&g_1054,&g_1054,&g_1209,(void*)0}},{{&g_1054,&g_1209,&g_1209,&g_1209,&g_1054},{&g_1054,&g_1054,&g_1209,(void*)0,&g_1054},{&g_1209,&g_1209,&g_1209,&g_1209,&g_1209},{&g_1209,&g_1209,&g_1209,&g_1209,&g_1209},{&g_1209,&g_1209,&g_1054,&g_1209,&g_1054},{&g_1209,&g_1054,(void*)0,&g_1054,&g_1054},{&g_1054,&g_1209,(void*)0,(void*)0,&g_1209}}};
    uint64_t * const **l_2364 = &l_2365[0][6][4];
    uint64_t ***l_2394 = &l_2224;
    const uint32_t l_2432 = 18446744073709551608UL;
    int32_t ***l_2469 = &g_858;
    const uint8_t l_2472 = 0xDEL;
    int16_t l_2475 = 0x8F8BL;
    const int32_t l_2497 = (-9L);
    int8_t l_2500 = 0x43L;
    uint64_t l_2579 = 18446744073709551615UL;
    int8_t * const *l_2609 = &l_51[1];
    uint64_t l_2612[4][9] = {{0UL,6UL,0x256409D0F615277CLL,6UL,0UL,0x256409D0F615277CLL,0xDC3FD44F9913DD80LL,0xDC3FD44F9913DD80LL,0x256409D0F615277CLL},{0UL,6UL,0x256409D0F615277CLL,6UL,0UL,0x256409D0F615277CLL,0xDC3FD44F9913DD80LL,0xDC3FD44F9913DD80LL,0x256409D0F615277CLL},{0UL,6UL,0x256409D0F615277CLL,6UL,0UL,0x256409D0F615277CLL,0xDC3FD44F9913DD80LL,0xDC3FD44F9913DD80LL,0x256409D0F615277CLL},{0UL,6UL,0x256409D0F615277CLL,6UL,0UL,0x256409D0F615277CLL,0xDC3FD44F9913DD80LL,0xDC3FD44F9913DD80LL,0x256409D0F615277CLL}};
    uint64_t ** const **l_2668 = (void*)0;
    uint64_t *l_2673 = &l_2612[2][4];
    uint64_t *l_2674[6];
    uint64_t *l_2675[3][3] = {{(void*)0,(void*)0,(void*)0},{&g_121.f1,&l_2318[0][0],&g_121.f1},{(void*)0,(void*)0,(void*)0}};
    uint64_t ** const l_2672[10][2] = {{&l_2675[2][0],&l_2675[2][0]},{&l_2674[0],&l_2675[2][0]},{&l_2675[2][0],&l_2674[0]},{&l_2675[2][0],&l_2675[2][0]},{&l_2674[0],&l_2675[2][0]},{&l_2675[2][0],&l_2674[0]},{&l_2675[2][0],&l_2675[2][0]},{&l_2674[0],&l_2675[2][0]},{&l_2675[2][0],&l_2674[0]},{&l_2675[2][0],&l_2675[2][0]}};
    uint64_t ** const *l_2671 = &l_2672[2][1];
    uint64_t ** const **l_2670[9][1] = {{&l_2671},{&l_2671},{&l_2671},{&l_2671},{&l_2671},{&l_2671},{&l_2671},{&l_2671},{&l_2671}};
    const int32_t **l_2681 = &g_1533;
    const int32_t ***l_2680 = &l_2681;
    int32_t l_2690[2][4][10] = {{{0xA1B9BFCAL,0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL,0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL,0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL},{0x50550E37L,0x50550E37L,0x004D1EBFL,0x50550E37L,0x50550E37L,0x004D1EBFL,0x50550E37L,0x50550E37L,0x004D1EBFL,0x50550E37L},{0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL,0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL,0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL,0x50550E37L},{0xA1B9BFCAL,0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL,0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL,0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL}},{{0x50550E37L,0x50550E37L,0x004D1EBFL,0x50550E37L,0x50550E37L,0x004D1EBFL,0x50550E37L,0x50550E37L,0x004D1EBFL,0x50550E37L},{0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL,0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL,0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL,0x50550E37L},{0xA1B9BFCAL,0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL,0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL,0x50550E37L,0xA1B9BFCAL,0xA1B9BFCAL},{0x50550E37L,0x50550E37L,0x004D1EBFL,0x50550E37L,0x50550E37L,0x004D1EBFL,0x50550E37L,0x50550E37L,0x004D1EBFL,0x50550E37L}}};
    uint32_t l_2706 = 0x6E40FA7BL;
    const union U2 *l_2764 = &g_368;
    const union U2 **l_2763 = &l_2764;
    const int32_t l_2773 = 0x0B2F9A3EL;
    int8_t l_2859 = 0xEAL;
    int16_t l_2876 = (-4L);
    int8_t l_2888 = 1L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_51[i] = &g_52[1];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_1162[i][j] = 0x92F71680L;
    }
    for (i = 0; i < 6; i++)
        l_2674[i] = (void*)0;
    return l_2888;
}







static int16_t func_2(int16_t p_3, int16_t p_4, uint16_t p_5, int8_t * p_6, uint32_t p_7)
{
    for (g_1274 = 0; (g_1274 <= 4); g_1274 += 1)
    {
        int i;
        return g_52[(g_1274 + 1)];
    }
    return p_7;
}







static int16_t func_11(const int8_t p_12, const uint16_t p_13, int8_t * p_14, int8_t * p_15)
{
    uint16_t l_1167 = 0UL;
    int32_t l_1189 = 0x62ADB271L;
    uint8_t l_1190 = 0x30L;
    uint16_t l_1260[4];
    union U0 *l_1264 = &g_271;
    int32_t **l_1283[3];
    int32_t l_1290 = 8L;
    int32_t l_1316 = 0x234A4AD2L;
    int32_t l_1317 = (-1L);
    int32_t l_1318 = 7L;
    int32_t l_1321[2];
    uint8_t l_1323 = 0x03L;
    int64_t *l_1364 = &g_1008;
    int32_t ** const * const l_1556 = &g_858;
    uint32_t l_1572 = 18446744073709551615UL;
    int32_t l_1581 = 0x34961FF2L;
    const int32_t l_1636 = 0xDFD3B9ADL;
    uint8_t l_1661 = 0xEDL;
    int16_t l_1663 = 0x6967L;
    uint64_t l_1680[3];
    int32_t l_1692 = 3L;
    int32_t l_1697 = (-1L);
    uint8_t l_1737 = 0x62L;
    uint16_t ***l_1749 = &g_413;
    uint32_t l_1765[3];
    union U2 l_1853 = {0};
    int32_t *l_1864[5][4][10] = {{{&l_1318,(void*)0,&g_585,(void*)0,&l_1189,&g_585,&l_1317,&g_585,&l_1189,(void*)0},{&g_585,&l_1317,&g_585,&l_1189,(void*)0,&g_585,(void*)0,&l_1318,&l_1189,&l_1189},{&l_1318,&l_1317,(void*)0,&g_585,&g_585,&l_1317,(void*)0,(void*)0,&l_1318,&g_585},{(void*)0,(void*)0,&g_585,&g_585,(void*)0,&g_585,(void*)0,&g_585,(void*)0,&g_585}},{{&g_585,(void*)0,&g_585,(void*)0,&g_585,&g_585,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1317,&g_585,&g_585,&l_1317,(void*)0,(void*)0,&l_1318,&g_585},{(void*)0,(void*)0,&g_585,&g_585,(void*)0,&g_585,(void*)0,&g_585,(void*)0,&g_585},{&g_585,(void*)0,&g_585,(void*)0,&g_585,&g_585,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_1317,&g_585,&g_585,&l_1317,(void*)0,(void*)0,&l_1318,&g_585},{(void*)0,(void*)0,&g_585,&g_585,(void*)0,&g_585,(void*)0,&g_585,(void*)0,&g_585},{&g_585,(void*)0,&g_585,(void*)0,&g_585,&g_585,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1317,&g_585,&g_585,&l_1317,(void*)0,(void*)0,&l_1318,&g_585}},{{(void*)0,(void*)0,&g_585,&g_585,(void*)0,&g_585,(void*)0,&g_585,(void*)0,&g_585},{&g_585,(void*)0,&g_585,(void*)0,&g_585,&g_585,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1317,&g_585,&g_585,&l_1317,(void*)0,(void*)0,&l_1318,&g_585},{(void*)0,(void*)0,&g_585,&g_585,(void*)0,&g_585,(void*)0,&g_585,(void*)0,&g_585}},{{&g_585,(void*)0,&g_585,(void*)0,&g_585,&g_585,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1317,&g_585,&g_585,&l_1317,(void*)0,(void*)0,&l_1318,&g_585},{(void*)0,(void*)0,&g_585,&g_585,(void*)0,&g_585,(void*)0,&g_585,(void*)0,&g_585},{&g_585,(void*)0,&g_585,(void*)0,&g_585,&g_585,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t **l_1863[3][6] = {{&l_1864[1][1][4],(void*)0,&l_1864[1][1][4],&l_1864[1][3][2],&l_1864[1][3][2],&l_1864[1][1][4]},{&l_1864[0][2][8],&l_1864[0][2][8],&l_1864[1][3][2],(void*)0,&l_1864[1][3][2],&l_1864[0][2][8]},{&l_1864[1][3][2],(void*)0,(void*)0,(void*)0,&l_1864[0][2][8],&l_1864[1][1][4]}};
    uint16_t ** const *l_1873[7][1][6] = {{{&g_413,&g_413,&g_413,&g_413,&g_413,&g_413}},{{&g_413,&g_413,&g_413,&g_413,&g_413,&g_413}},{{&g_413,&g_413,&g_413,&g_413,&g_413,&g_413}},{{&g_413,&g_413,&g_413,&g_413,&g_413,&g_413}},{{&g_413,&g_413,&g_413,&g_413,&g_413,&g_413}},{{&g_413,&g_413,&g_413,&g_413,&g_413,&g_413}},{{&g_413,&g_413,&g_413,&g_413,&g_413,&g_413}}};
    uint16_t ** const **l_1872 = &l_1873[6][0][1];
    uint16_t ** const ***l_1871 = &l_1872;
    int32_t ****l_1879 = (void*)0;
    int32_t *****l_1878 = &l_1879;
    const int8_t l_1880 = 1L;
    uint32_t l_1885 = 0xD696C0E4L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1260[i] = 0x8983L;
    for (i = 0; i < 3; i++)
        l_1283[i] = &g_718;
    for (i = 0; i < 2; i++)
        l_1321[i] = 0xCE9A6BD3L;
    for (i = 0; i < 3; i++)
        l_1680[i] = 0xBFFE752A080DC134LL;
    for (i = 0; i < 3; i++)
        l_1765[i] = 0UL;
    for (g_121.f1 = (-15); (g_121.f1 == 57); g_121.f1 = safe_add_func_int32_t_s_s(g_121.f1, 3))
    {
        int32_t l_1172[5][7][2] = {{{0L,0L},{0x7F78B77AL,0L},{0L,0x7F78B77AL},{0L,0L},{0x7F78B77AL,0L},{0L,0L},{0L,0L}},{{0x7F78B77AL,0L},{0L,0x7F78B77AL},{0L,0L},{0x7F78B77AL,0L},{0L,0L},{0L,0L},{0x7F78B77AL,0L}},{{0L,0x7F78B77AL},{0L,0L},{0x7F78B77AL,0L},{0L,0L},{0L,0L},{0x7F78B77AL,0L},{0L,0x7F78B77AL}},{{0L,0L},{0x7F78B77AL,0L},{0L,0L},{0L,0L},{0x7F78B77AL,0L},{0L,0x7F78B77AL},{0L,0L}},{{0x7F78B77AL,0L},{0L,0L},{0L,0L},{0x7F78B77AL,0L},{0L,0x7F78B77AL},{0L,0L},{0x7F78B77AL,0L}}};
        int32_t l_1192[4];
        union U1 l_1228 = {0x9C621C3AL};
        uint8_t *l_1244 = &g_671;
        int32_t l_1315[3][5][8] = {{{1L,0x2F37D40BL,0x32E6D30CL,(-7L),0x3F8E05CCL,0x32E6D30CL,0xAEA6C7A9L,0x32E6D30CL},{0x203306F4L,(-7L),0xBEEF7AEDL,(-7L),0x203306F4L,0x393441BFL,(-7L),0x14F2D809L},{0L,0x203306F4L,0x3F8E05CCL,0x258AF9C9L,(-7L),0L,0L,(-7L)},{1L,0x3F8E05CCL,0x3F8E05CCL,1L,0x2F37D40BL,0x32E6D30CL,(-7L),0x3F8E05CCL},{(-7L),0xAEA6C7A9L,0xBEEF7AEDL,0x14F2D809L,0xAEA6C7A9L,0x838B76A1L,0xAEA6C7A9L,0x14F2D809L}},{{0x32E6D30CL,0xAEA6C7A9L,0x32E6D30CL,0x3F8E05CCL,(-7L),0x32E6D30CL,0x2F37D40BL,1L},{0x203306F4L,0x3F8E05CCL,0x258AF9C9L,(-7L),0L,0L,(-7L),0x258AF9C9L},{0x203306F4L,0x203306F4L,0x838B76A1L,0x14F2D809L,(-7L),0x393441BFL,0x203306F4L,(-7L)},{0x32E6D30CL,(-7L),0x3F8E05CCL,0x32E6D30CL,0xAEA6C7A9L,0x32E6D30CL,0x3F8E05CCL,(-7L)},{(-7L),0x2F37D40BL,(-6L),0x2F37D40BL,0x393441BFL,0x1A93440DL,0L,(-6L)}},{{0x258AF9C9L,0L,0x14F2D809L,0x32E6D30CL,0x32E6D30CL,0x14F2D809L,0L,0x258AF9C9L},{0x838B76A1L,0x32E6D30CL,(-6L),0x1A93440DL,0x3F8E05CCL,0x838B76A1L,0x1A93440DL,0x2F37D40BL},{0x3F8E05CCL,0x838B76A1L,0x1A93440DL,0x2F37D40BL,0x1A93440DL,0x838B76A1L,0x3F8E05CCL,0x1A93440DL},{0x258AF9C9L,0x32E6D30CL,1L,0x258AF9C9L,0L,0x14F2D809L,0x32E6D30CL,0x32E6D30CL},{0x1A93440DL,0L,(-6L),(-6L),0L,0x1A93440DL,0x393441BFL,0x2F37D40BL}}};
        union U0 **l_1369 = (void*)0;
        union U2 *l_1375[10] = {&g_368,&g_368,&g_368,&g_368,&g_368,&g_368,&g_368,&g_368,&g_368,&g_368};
        const int32_t l_1451[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
        int32_t ****l_1460[6][10][4] = {{{(void*)0,(void*)0,(void*)0,&g_857},{&g_857,&g_857,&g_857,(void*)0},{&g_857,&g_857,(void*)0,&g_857},{&g_857,&g_857,(void*)0,&g_857},{&g_857,&g_857,&g_857,&g_857},{&g_857,&g_857,(void*)0,(void*)0},{(void*)0,(void*)0,&g_857,&g_857},{&g_857,&g_857,&g_857,&g_857},{&g_857,(void*)0,&g_857,&g_857},{&g_857,(void*)0,&g_857,&g_857}},{{(void*)0,&g_857,&g_857,&g_857},{&g_857,(void*)0,(void*)0,(void*)0},{&g_857,&g_857,&g_857,&g_857},{&g_857,&g_857,&g_857,&g_857},{(void*)0,&g_857,&g_857,&g_857},{(void*)0,&g_857,&g_857,(void*)0},{&g_857,&g_857,&g_857,&g_857},{&g_857,(void*)0,(void*)0,&g_857},{&g_857,&g_857,&g_857,&g_857},{(void*)0,&g_857,&g_857,(void*)0}},{{&g_857,&g_857,&g_857,(void*)0},{&g_857,&g_857,&g_857,&g_857},{&g_857,&g_857,&g_857,&g_857},{(void*)0,(void*)0,(void*)0,&g_857},{&g_857,&g_857,&g_857,(void*)0},{&g_857,&g_857,(void*)0,&g_857},{&g_857,&g_857,(void*)0,&g_857},{&g_857,&g_857,&g_857,&g_857},{&g_857,&g_857,(void*)0,(void*)0},{(void*)0,(void*)0,&g_857,&g_857}},{{&g_857,&g_857,&g_857,&g_857},{&g_857,(void*)0,&g_857,&g_857},{&g_857,&g_857,&g_857,(void*)0},{&g_857,&g_857,&g_857,(void*)0},{&g_857,(void*)0,&g_857,(void*)0},{&g_857,&g_857,(void*)0,&g_857},{&g_857,&g_857,(void*)0,&g_857},{&g_857,&g_857,&g_857,&g_857},{&g_857,&g_857,(void*)0,&g_857},{&g_857,&g_857,(void*)0,&g_857}},{{&g_857,&g_857,&g_857,&g_857},{&g_857,(void*)0,&g_857,&g_857},{&g_857,(void*)0,&g_857,&g_857},{&g_857,&g_857,&g_857,&g_857},{&g_857,(void*)0,&g_857,&g_857},{&g_857,(void*)0,&g_857,&g_857},{(void*)0,&g_857,(void*)0,&g_857},{(void*)0,&g_857,&g_857,&g_857},{(void*)0,&g_857,&g_857,&g_857},{&g_857,&g_857,&g_857,&g_857}},{{(void*)0,&g_857,&g_857,&g_857},{(void*)0,&g_857,(void*)0,(void*)0},{(void*)0,(void*)0,&g_857,(void*)0},{&g_857,&g_857,&g_857,(void*)0},{&g_857,&g_857,&g_857,&g_857},{&g_857,&g_857,&g_857,(void*)0},{&g_857,&g_857,&g_857,(void*)0},{&g_857,(void*)0,&g_857,(void*)0},{&g_857,&g_857,(void*)0,&g_857},{&g_857,&g_857,(void*)0,&g_857}}};
        int32_t **** const * const l_1459 = &l_1460[2][2][2];
        int16_t **l_1461 = &g_24;
        uint64_t l_1573 = 0x31CD7D14F71CD28ELL;
        uint8_t l_1576 = 1UL;
        uint64_t l_1609 = 0x6C2CE4D2BBB04C36LL;
        int32_t l_1662 = (-10L);
        uint16_t *l_1821[1][8][1] = {{{(void*)0},{&g_1742},{(void*)0},{&g_1742},{(void*)0},{&g_1742},{(void*)0},{&g_1742}}};
        uint8_t l_1835 = 255UL;
        union U0 l_1852 = {65533UL};
        const uint32_t l_1856 = 4294967293UL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1192[i] = 1L;
        for (g_124 = 0; (g_124 <= 2); g_124 += 1)
        {
            uint64_t l_1165 = 0x0CFBB4FA45A27B5CLL;
            union U0 * const l_1215[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            const int8_t l_1237 = 0xD2L;
            int32_t l_1238 = 0x1E878D7FL;
            int i, j;
            for (g_458 = 3; (g_458 >= 0); g_458 -= 1)
            {
                int32_t *l_1166 = (void*)0;
                uint16_t *l_1185 = &l_1167;
                uint16_t l_1188 = 1UL;
                uint16_t *l_1191[8][5][5] = {{{&g_535,&g_8,&g_124,&g_271.f0,&g_535},{(void*)0,&g_271.f0,(void*)0,(void*)0,&g_535},{(void*)0,&g_271.f0,&g_271.f0,&g_271.f0,(void*)0},{&g_535,&g_8,&g_124,&g_535,&g_271.f0},{&g_124,(void*)0,&g_535,&g_8,&g_535}},{{&g_535,&g_271.f0,&g_8,&g_8,&g_271.f0},{(void*)0,&g_8,&g_124,(void*)0,(void*)0},{&g_271.f0,&g_271.f0,(void*)0,(void*)0,&g_535},{&g_535,&g_8,&g_535,&g_8,&g_535},{&g_271.f0,&g_271.f0,&g_271.f0,(void*)0,&g_535}},{{(void*)0,&g_8,&g_271.f0,&g_271.f0,(void*)0},{&g_535,&g_8,&g_535,(void*)0,(void*)0},{&g_124,&g_8,&g_124,&g_8,&g_535},{&g_535,&g_271.f0,(void*)0,&g_8,&g_535},{(void*)0,&g_8,&g_124,&g_8,(void*)0}},{{(void*)0,&g_271.f0,(void*)0,&g_535,&g_271.f0},{&g_535,&g_8,&g_124,(void*)0,&g_535},{&g_535,&g_271.f0,&g_535,(void*)0,(void*)0},{(void*)0,(void*)0,&g_271.f0,(void*)0,(void*)0},{&g_271.f0,&g_8,&g_271.f0,&g_535,&g_271.f0}},{{&g_124,&g_271.f0,&g_535,&g_8,&g_535},{(void*)0,&g_271.f0,(void*)0,&g_8,&g_271.f0},{(void*)0,&g_8,&g_124,&g_8,(void*)0},{&g_271.f0,&g_271.f0,&g_8,(void*)0,(void*)0},{&g_535,(void*)0,&g_535,&g_271.f0,&g_535}},{{&g_271.f0,&g_271.f0,&g_124,(void*)0,&g_271.f0},{(void*)0,&g_271.f0,&g_271.f0,&g_8,(void*)0},{(void*)0,&g_8,(void*)0,(void*)0,&g_535},{&g_124,&g_271.f0,&g_124,(void*)0,&g_535},{&g_271.f0,&g_271.f0,&g_271.f0,&g_8,(void*)0}},{{(void*)0,(void*)0,&g_124,&g_8,(void*)0},{&g_535,&g_271.f0,&g_271.f0,&g_535,&g_535},{&g_535,&g_8,&g_124,&g_271.f0,&g_535},{(void*)0,&g_271.f0,(void*)0,(void*)0,&g_535},{(void*)0,&g_271.f0,&g_271.f0,&g_271.f0,(void*)0}},{{&g_535,&g_8,&g_124,&g_535,&g_271.f0},{&g_124,(void*)0,&g_535,&g_8,&g_535},{&g_535,&g_271.f0,&g_8,&g_8,&g_271.f0},{(void*)0,&g_8,&g_124,(void*)0,(void*)0},{&g_271.f0,&g_271.f0,(void*)0,(void*)0,&g_535}}};
                uint64_t *l_1207 = (void*)0;
                int i, j, k;
                l_1165 = p_12;
                l_1167--;
                (**g_857) = (void*)0;
                if ((safe_mul_func_int16_t_s_s((((l_1172[4][2][1] < (((l_1192[2] &= (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((l_1165 , (safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u((l_1189 = (((safe_add_func_uint16_t_u_u((((*l_1185) = (&g_367 == (void*)0)) <= (safe_mod_func_int32_t_s_s((l_1188 ^= p_13), p_12))), l_1189)) | (((l_1189 || (((g_535 , p_13) , 0x648A4E3FD3F0A9C1LL) < 0x8ABE16734A8B5094LL)) && p_13) >= l_1190)) & l_1190)), 0x53F3D07233A9A27DLL)), p_12)), 0xFC02L))), (*p_14))), 65535UL))) <= p_13) ^ g_1193)) | l_1172[4][2][1]) & g_1194), (**g_413))))
                {
                    uint64_t **l_1208[5][8][6] = {{{(void*)0,&l_1207,&g_1054,&l_1207,&g_1054,&l_1207},{&l_1207,&g_1054,&l_1207,&g_1054,&l_1207,(void*)0},{&l_1207,(void*)0,&g_1054,(void*)0,&l_1207,&l_1207},{&g_1054,(void*)0,&g_1054,(void*)0,&l_1207,&l_1207},{(void*)0,&l_1207,&g_1054,&g_1054,&g_1054,(void*)0},{&l_1207,&g_1054,&l_1207,&g_1054,(void*)0,&l_1207},{&l_1207,&l_1207,&g_1054,&l_1207,&l_1207,(void*)0},{&g_1054,(void*)0,&l_1207,&g_1054,&g_1054,(void*)0}},{{&l_1207,&g_1054,&l_1207,(void*)0,&l_1207,&l_1207},{&g_1054,&l_1207,&g_1054,&g_1054,(void*)0,&g_1054},{&l_1207,&l_1207,(void*)0,&g_1054,&g_1054,&g_1054},{&g_1054,(void*)0,&l_1207,&l_1207,&l_1207,(void*)0},{&l_1207,&g_1054,&g_1054,&g_1054,&l_1207,&l_1207},{&l_1207,&g_1054,&g_1054,&g_1054,&g_1054,&l_1207},{&l_1207,(void*)0,&g_1054,&l_1207,&l_1207,&l_1207},{(void*)0,&l_1207,&l_1207,&l_1207,&g_1054,&l_1207}},{{&l_1207,&g_1054,&g_1054,&l_1207,&l_1207,&g_1054},{&l_1207,&g_1054,&l_1207,&l_1207,&l_1207,(void*)0},{&g_1054,(void*)0,&l_1207,&l_1207,&l_1207,&l_1207},{(void*)0,&g_1054,&l_1207,&l_1207,(void*)0,&l_1207},{&l_1207,(void*)0,&l_1207,&l_1207,&g_1054,&g_1054},{&l_1207,&l_1207,&l_1207,&l_1207,&g_1054,&l_1207},{&l_1207,(void*)0,(void*)0,&g_1054,(void*)0,&g_1054},{&l_1207,(void*)0,(void*)0,&g_1054,(void*)0,&g_1054}},{{&g_1054,(void*)0,&g_1054,&g_1054,&g_1054,&l_1207},{&g_1054,&l_1207,&g_1054,&g_1054,&g_1054,&l_1207},{&g_1054,(void*)0,&l_1207,(void*)0,(void*)0,&g_1054},{&l_1207,&g_1054,&g_1054,&g_1054,&l_1207,&l_1207},{&g_1054,(void*)0,&l_1207,&g_1054,&l_1207,&l_1207},{&l_1207,&g_1054,&g_1054,&g_1054,&l_1207,&g_1054},{&l_1207,&g_1054,(void*)0,&g_1054,&g_1054,&g_1054},{&l_1207,&l_1207,&l_1207,&l_1207,&l_1207,(void*)0}},{{(void*)0,(void*)0,&g_1054,&l_1207,&g_1054,&l_1207},{(void*)0,&g_1054,&l_1207,(void*)0,&l_1207,&l_1207},{&l_1207,&g_1054,&l_1207,&l_1207,&l_1207,&g_1054},{&l_1207,(void*)0,&g_1054,(void*)0,&g_1054,&l_1207},{&g_1054,&l_1207,&l_1207,&l_1207,(void*)0,&g_1054},{&l_1207,&l_1207,&g_1054,&l_1207,&l_1207,&l_1207},{&l_1207,&g_1054,&l_1207,&g_1054,&g_1054,&l_1207},{(void*)0,&g_1054,(void*)0,&g_1054,&g_1054,&l_1207}}};
                    uint16_t ***l_1221 = &g_413;
                    const int32_t l_1235 = 2L;
                    uint8_t *l_1243 = &l_1190;
                    int32_t l_1251 = 0x335CF5D6L;
                    int32_t l_1261 = 0x2533E5FBL;
                    int i, j, k;
                    if (((safe_mul_func_int8_t_s_s(((l_1165 , (safe_rshift_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((((safe_add_func_int32_t_s_s(l_1190, p_12)) & (~(~(g_1054 == (g_1209 = l_1207))))) <= (*p_14)) >= (((g_271 , (safe_mul_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(((((p_12 > ((safe_rshift_func_int8_t_s_u((l_1215[1][1] != &g_271), 7)) | 2L)) && (***g_412)) , (void*)0) != (void*)0))), p_12))) <= p_13) < l_1189)), p_12)) || g_1216), 1L)) > l_1172[0][1][1]) == l_1189), 5))) & (***g_412)), (*p_14))) , p_12))
                    {
                        int16_t *l_1236 = &g_426;
                        l_1238 = (safe_add_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(((-1L) ^ (l_1221 != (void*)0)), ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((p_12 >= ((((**l_1221) = (*g_413)) == (l_1228 , (void*)0)) > ((safe_add_func_uint16_t_u_u((g_8 && ((safe_sub_func_int32_t_s_s(((safe_div_func_int16_t_s_s(((*l_1236) = ((g_301 , l_1190) >= l_1235)), l_1235)) , p_12), 0x3FE0DF1FL)) == l_1237)), l_1235)) > p_13))), g_458)), 0)) && l_1165))) < 0x95L) || 0xC7L), p_12));
                    }
                    else
                    {
                        int64_t l_1245 = 1L;
                        uint32_t *l_1250 = &g_89;
                        int32_t l_1259 = (-6L);
                        l_1261 |= (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(l_1238, (l_1243 == l_1244))), l_1245)) , (safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(l_1237, ((l_1251 = ((*l_1250) = g_404.f0)) <= (safe_unary_minus_func_uint16_t_u(((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(g_645[4][3][1], (0x949CAF46L & (((l_1259 = 8L) != g_953) ^ p_13)))) , 0x0FF9A716L), p_13)), 0xF9FBL)) < p_12)))))), l_1260[0]))) >= p_12);
                    }
                }
                else
                {
                    int32_t *l_1262[2][6] = {{&g_82,&l_1238,&g_82,&l_1238,&g_82,&l_1238},{&g_82,&l_1238,&g_82,&l_1238,&g_82,&l_1238}};
                    int i, j;
                    (***g_856) = l_1262[0][2];
                }
            }
            l_1192[0] = (~l_1260[2]);
            l_1189 = ((l_1264 == &g_271) || l_1260[1]);
            for (l_1228.f1 = 0; (l_1228.f1 <= 1); l_1228.f1 += 1)
            {
                uint64_t *l_1271 = &g_404.f1;
                uint64_t *l_1272 = (void*)0;
                uint64_t *l_1273[6][9] = {{&l_1228.f1,(void*)0,&g_121.f1,(void*)0,&l_1228.f1,(void*)0,&g_121.f1,&g_121.f1,&g_121.f1},{(void*)0,&g_121.f1,&l_1165,&l_1165,&g_121.f1,(void*)0,&g_121.f1,&l_1165,&l_1165},{&l_1228.f1,(void*)0,&g_121.f1,&g_121.f1,&g_121.f1,(void*)0,&l_1228.f1,(void*)0,&g_121.f1},{&l_1165,&g_121.f1,&l_1165,(void*)0,(void*)0,&l_1165,&g_121.f1,&l_1165,(void*)0},{&l_1228.f1,(void*)0,&g_121.f1,&g_121.f1,&l_1165,&g_121.f1,&g_121.f1,(void*)0,&l_1228.f1},{(void*)0,(void*)0,&l_1165,(void*)0,(void*)0,(void*)0,(void*)0,&l_1165,(void*)0}};
                uint32_t *l_1284 = (void*)0;
                uint32_t *l_1285[4][1] = {{&g_743},{&g_743},{&g_743},{&g_743}};
                int i, j, k;
                l_1290 |= (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u(0x3E496422F93799F8LL, (g_1274 ^= g_645[(l_1228.f1 + 6)][g_124][l_1228.f1]))), 6)) >= (+((safe_unary_minus_func_int8_t_s((g_645[(g_124 + 2)][(g_124 + 2)][l_1228.f1] , ((*p_14) = ((*p_15) = ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s(g_645[(l_1228.f1 + 5)][(l_1228.f1 + 1)][l_1228.f1], ((((void*)0 != l_1283[1]) <= (g_89--)) , (safe_mod_func_int32_t_s_s(g_645[(l_1228.f1 + 4)][(l_1228.f1 + 5)][l_1228.f1], 0x59159D6BL))))), ((g_743--) ^ (((((((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(p_13, 14)), 0x1B0E421FA7709D92LL)) , 0x5D898D06L) || 4294967287UL) & 0x9370133FL) >= p_13) != g_1297) | l_1190)))), 4)) , (*p_14))))))) < p_12))), (-10L)));
            }
        }
        for (g_1008 = 0; (g_1008 >= 1); ++g_1008)
        {
            int32_t *l_1300 = (void*)0;
            int32_t *l_1301 = (void*)0;
            int32_t *l_1302 = &l_1172[4][2][1];
            int32_t l_1305 = (-1L);
            int32_t l_1308[1];
            int16_t l_1320 = (-1L);
            uint8_t l_1423[5];
            uint64_t *l_1466[5][6] = {{&g_121.f1,&g_121.f1,(void*)0,&g_1367,&g_1367,(void*)0},{&g_121.f1,&g_121.f1,&g_121.f1,&g_121.f1,&g_121.f1,&g_1367},{&g_121.f1,(void*)0,&g_1367,&g_121.f1,&g_121.f1,&g_121.f1},{&g_1367,&g_121.f1,&g_1367,(void*)0,&g_121.f1,&g_1367},{(void*)0,(void*)0,&g_121.f1,&g_121.f1,(void*)0,(void*)0}};
            int32_t **l_1494 = &g_718;
            int16_t l_1519 = 0L;
            int8_t *l_1546 = &g_52[6];
            uint32_t l_1561 = 0x6C6C33CBL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1308[i] = 0x036F5D4FL;
            for (i = 0; i < 5; i++)
                l_1423[i] = 2UL;
            (*l_1302) = 7L;
            for (l_1190 = 0; (l_1190 < 38); ++l_1190)
            {
                int32_t *l_1306 = &l_1290;
                int32_t *l_1307 = &g_585;
                int32_t *l_1309 = &l_1172[4][2][1];
                int32_t *l_1310 = &l_1192[1];
                int32_t *l_1311 = &l_1189;
                int32_t *l_1312 = &l_1172[4][2][1];
                int32_t *l_1313 = &g_1297;
                int32_t *l_1314[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t l_1319[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1319[i] = 0xC0L;
                --l_1323;
            }
            for (g_743 = 15; (g_743 == 41); g_743 = safe_add_func_uint16_t_u_u(g_743, 8))
            {
                int32_t **l_1330 = &g_718;
                uint32_t *l_1331 = &g_89;
                int32_t l_1340 = 0x4BD7DAA3L;
                int64_t *l_1341[2][2][5];
                const union U2 l_1348[6][3][8] = {{{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}}};
                uint16_t *l_1362 = &g_124;
                int16_t *l_1363 = &g_92;
                uint64_t *l_1365 = &g_404.f1;
                uint64_t *l_1366[9][2] = {{(void*)0,&g_121.f1},{(void*)0,&g_1367},{&g_121.f1,&g_121.f1},{&g_1367,(void*)0},{&g_121.f1,(void*)0},{&g_1367,&g_121.f1},{&g_121.f1,&g_1367},{(void*)0,&g_121.f1},{(void*)0,&g_1367}};
                int32_t l_1368 = 7L;
                union U1 * const *l_1389 = &g_403;
                uint64_t l_1399 = 0x26A54117A6FDD184LL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_1341[i][j][k] = (void*)0;
                    }
                }
                l_1308[0] &= ((((g_89 & (safe_lshift_func_uint16_t_u_s((**g_413), 10))) || ((*l_1302) ^= (l_1330 == (void*)0))) , ((*l_1331) = 0xA61E0CEFL)) >= l_1260[2]);
                if (((safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((((((safe_lshift_func_int16_t_s_s((l_1340 <= ((((l_1172[4][2][1] |= 8L) || (l_1368 |= ((*l_1365) = ((safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s((((((l_1348[0][2][2] , (safe_rshift_func_int8_t_s_s(l_1340, (((safe_add_func_int8_t_s_s((((((*l_1363) = (+(safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((l_1290 >= 0xC73EL), 11)), ((safe_lshift_func_int8_t_s_s((*p_14), 1)) | (((*l_1362) = (p_13 & (g_1209 == l_1341[0][1][3]))) , l_1228.f0)))))) , (void*)0) != l_1364) <= l_1315[0][4][1]), p_13)) >= p_13) == l_1340)))) <= (-8L)) && p_13) < (*l_1302)) , l_1172[1][2][1]), p_13)) ^ 0x298254BBF7A748FBLL), 4)), p_13)) | l_1167)))) , &l_1264) == l_1369)), 3)) == p_12) < 0x97L) != p_13) == p_12), p_12)) <= p_12), 0x2E26L)), 0x000C63C0A0C0BC9ALL)) < l_1189))
                {
                    int8_t l_1370 = (-1L);
                    l_1370 = p_12;
                    (*l_1302) = (p_12 | (safe_rshift_func_uint16_t_u_s(p_12, 4)));
                    for (g_934 = 23; (g_934 != 28); ++g_934)
                    {
                        if (p_13)
                            break;
                        (**g_857) = &l_1308[0];
                        (*l_1302) = 1L;
                    }
                }
                else
                {
                    const int32_t l_1414 = 1L;
                    for (l_1316 = 3; (l_1316 >= 0); l_1316 -= 1)
                    {
                        union U2 **l_1376 = &l_1375[2];
                        union U0 *l_1377 = &g_271;
                        union U0 **l_1378 = &l_1377;
                        int32_t l_1393 = 1L;
                        int32_t *l_1394 = &g_82;
                        int32_t *l_1395 = &l_1318;
                        int32_t *l_1396 = &l_1192[2];
                        int32_t *l_1397 = &l_1393;
                        int32_t *l_1398 = &l_1368;
                        (*l_1376) = l_1375[2];
                        (*l_1378) = l_1377;
                        (*l_1302) = (safe_sub_func_int16_t_s_s(((***g_412) , 0L), ((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((void*)0 != l_1389), (safe_lshift_func_int16_t_s_u((g_271 , p_13), (!((-4L) || (g_89 & ((*l_1363) = g_1194)))))))), l_1192[2])), (-1L))), l_1393)) >= p_12)));
                        ++l_1399;
                    }
                    (*l_1302) = (safe_sub_func_uint32_t_u_u(g_271.f0, ((safe_div_func_int16_t_s_s(1L, (safe_lshift_func_uint16_t_u_u(((*g_644) && (safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(((void*)0 == &l_1305), (0xF03BL | (l_1414 & (safe_div_func_int64_t_s_s((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(0x6CL, (safe_mul_func_int16_t_s_s(p_13, p_12)))) && 4294967295UL), 0x16C9163DL)), p_12)))))) && l_1423[2]), 8UL)), 1))), (**g_413))))) || p_13)));
                }
            }
            for (g_1367 = 0; (g_1367 != 34); g_1367++)
            {
                uint16_t l_1435 = 0x3C78L;
                const uint64_t *l_1446 = &g_121.f1;
                const uint64_t **l_1445 = &l_1446;
                union U0 **l_1447 = &l_1264;
                uint64_t *l_1467 = (void*)0;
                int64_t **l_1472[1][7][5] = {{{&l_1364,&l_1364,&l_1364,&l_1364,&l_1364},{&l_1364,&l_1364,&l_1364,&l_1364,&l_1364},{&l_1364,&l_1364,&l_1364,(void*)0,&l_1364},{&l_1364,&l_1364,&l_1364,&l_1364,&l_1364},{&l_1364,&l_1364,&l_1364,&l_1364,&l_1364},{&l_1364,&l_1364,&l_1364,(void*)0,&l_1364},{&l_1364,&l_1364,&l_1364,&l_1364,&l_1364}}};
                int64_t ***l_1471 = &l_1472[0][6][1];
                int32_t l_1473 = 0xEAB530C6L;
                int32_t l_1507 = 0x612212BDL;
                int32_t l_1508[9] = {0x6D98A58FL,0x6D98A58FL,0x6D98A58FL,0x6D98A58FL,0x6D98A58FL,0x6D98A58FL,0x6D98A58FL,0x6D98A58FL,0x6D98A58FL};
                int32_t l_1509 = (-7L);
                int32_t *l_1537 = &l_1308[0];
                int32_t l_1538[6][10] = {{4L,6L,0xBE85041EL,(-1L),0xBE85041EL,6L,4L,4L,6L,0xBE85041EL},{6L,4L,4L,6L,0xBE85041EL,(-1L),0xBE85041EL,6L,4L,4L},{0xBE85041EL,4L,0x3AF1A013L,0L,0L,0x3AF1A013L,4L,0xBE85041EL,4L,0x3AF1A013L},{(-1L),6L,0L,6L,(-1L),0x3AF1A013L,0x3AF1A013L,(-1L),6L,0L},{0xBE85041EL,0xBE85041EL,0L,(-1L),0xF8147B31L,(-1L),0L,0xBE85041EL,0xBE85041EL,0L},{6L,(-1L),0x3AF1A013L,0x3AF1A013L,(-1L),6L,0L,6L,(-1L),0x3AF1A013L}};
                int i, j, k;
            }
        }
    }
    g_1533 = ((*g_858) = &l_1321[0]);
    l_1885 |= (safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((0UL != (safe_add_func_uint8_t_u_u(((void*)0 == l_1871), ((*g_1533) > ((safe_lshift_func_int8_t_s_u(((l_1878 != &l_1879) , l_1880), 5)) > ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(p_13, 7)), 0)) > p_13)))))), (*p_14))), p_12));
    return p_12;
}







static uint16_t func_25(union U2 p_26, const int8_t * p_27, int16_t p_28, int16_t * p_29, uint64_t p_30)
{
    int32_t *l_1158 = &g_198;
    (***g_856) = l_1158;
    for (g_335 = (-5); (g_335 <= (-24)); --g_335)
    {
        return (**g_413);
    }
    return (*l_1158);
}







static int8_t * func_32(int16_t * p_33, int8_t * p_34, union U2 p_35, int8_t * p_36, int32_t p_37)
{
    uint16_t l_1156[7][9][1] = {{{1UL},{0x3372L},{1UL},{0x3B42L},{1UL},{1UL},{0x3B42L},{1UL},{0xB9A8L}},{{0x822CL},{0x33D4L},{0x822CL},{0xB9A8L},{0x3B42L},{1UL},{65527UL},{65527UL},{1UL}},{{0x3B42L},{0xB9A8L},{0x822CL},{0x33D4L},{0x822CL},{0xB9A8L},{0x3B42L},{1UL},{65527UL}},{{65527UL},{1UL},{0x3B42L},{0xB9A8L},{0x822CL},{0x33D4L},{0x822CL},{0xB9A8L},{0x3B42L}},{{1UL},{65527UL},{65527UL},{1UL},{0x3B42L},{0xB9A8L},{0x822CL},{0x33D4L},{0x822CL}},{{0xB9A8L},{0x3B42L},{1UL},{65527UL},{65527UL},{1UL},{0x3B42L},{0xB9A8L},{0x822CL}},{{0x33D4L},{0x822CL},{0xB9A8L},{0x3B42L},{1UL},{65527UL},{65527UL},{1UL},{0x3B42L}}};
    int32_t l_1157[5] = {0x1D60CF19L,0x1D60CF19L,0x1D60CF19L,0x1D60CF19L,0x1D60CF19L};
    int i, j, k;
    l_1156[3][1][0] |= p_37;
    l_1157[3] = (g_633 & l_1156[0][7][0]);
    return p_34;
}







static int16_t * func_38(int16_t * p_39, const int8_t p_40, int8_t * p_41, int8_t * p_42)
{
    uint64_t l_658 = 0xE5D2A18054C996F7LL;
    int8_t *l_659 = &g_645[9][6][1];
    union U1 l_663 = {4294967287UL};
    int64_t l_664 = 0x2A160DCCDCA8E724LL;
    union U1 * const l_678[10][1] = {{(void*)0},{&g_121},{(void*)0},{&g_121},{(void*)0},{&g_121},{(void*)0},{&g_121},{(void*)0},{&g_121}};
    uint16_t *** const *l_687 = &g_412;
    int32_t l_691 = 0x5FD1A83CL;
    int32_t l_729 = 0xF57C5D9DL;
    int32_t l_730 = 0xDC83E4CBL;
    int16_t **l_734 = &g_24;
    int64_t *l_759 = (void*)0;
    int64_t **l_758[1];
    int64_t ** const *l_757 = &l_758[0];
    int32_t l_783 = 5L;
    int32_t l_784 = 4L;
    int32_t l_814 = 0xA0F69566L;
    union U0 *l_908 = &g_271;
    uint64_t l_936 = 0x53E28EB8678A8DEFLL;
    int32_t **l_1121 = &g_81[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_758[i] = &l_759;
    for (g_633 = 0; (g_633 != (-7)); g_633--)
    {
        int32_t *l_650[3];
        uint64_t l_656 = 0x717CD6EA679D4A5ALL;
        union U2 l_657[3][4][2] = {{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}}};
        int8_t **l_660 = &l_659;
        uint16_t l_697 = 0x3B0FL;
        int16_t *l_852 = &g_633;
        int16_t **l_851 = &l_852;
        union U0 l_853 = {65526UL};
        int32_t l_890 = 1L;
        uint32_t l_904 = 0UL;
        uint64_t l_972 = 0x20460890769BCEA5LL;
        int16_t l_1015 = 0x7A62L;
        uint64_t *l_1055 = &l_972;
        uint32_t l_1101[3];
        int32_t * const ****l_1128 = &g_989[1][8][0];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_650[i] = &g_585;
        for (i = 0; i < 3; i++)
            l_1101[i] = 4294967295UL;
        for (g_89 = 18; (g_89 != 10); --g_89)
        {
            int32_t **l_651 = &g_81[1];
            (*l_651) = l_650[0];
        }
        if (((safe_sub_func_uint32_t_u_u(((p_40 != (((((((safe_mul_func_int32_t_s_s(l_656, (l_657[2][3][0] , (&p_39 != (l_658 , &p_39))))) != (((*l_660) = l_659) == (p_41 = p_42))) & (safe_rshift_func_int16_t_s_s((*p_39), l_658))) ^ p_40) == (*p_39)) , l_663) , 1UL)) , 0x17FDC76AL), g_645[0][0][0])) && p_40))
        {
            uint64_t l_665 = 0x4F495E25759A9922LL;
            union U2 l_668[2] = {{0},{0}};
            uint8_t *l_669 = &l_657[2][3][0].f3;
            uint8_t *l_670[4][7] = {{(void*)0,&g_671,(void*)0,&g_671,&g_671,(void*)0,&g_671},{&g_671,&g_671,&g_671,&g_671,&g_671,&g_671,&g_671},{(void*)0,&g_671,&g_671,(void*)0,&g_671,(void*)0,&g_671},{&l_657[2][3][0].f3,&l_657[2][3][0].f3,&g_671,&g_671,&g_671,&l_657[2][3][0].f3,&l_657[2][3][0].f3}};
            int32_t l_672 = 1L;
            int32_t l_673 = 1L;
            int32_t l_679 = 0x411542FEL;
            uint32_t l_680 = 0x27B1620BL;
            uint16_t ****l_688[2][9] = {{&g_412,&g_412,&g_412,&g_412,&g_412,&g_412,&g_412,&g_412,&g_412},{&g_412,&g_412,&g_412,&g_412,&g_412,&g_412,&g_412,&g_412,&g_412}};
            int8_t *l_689 = &g_52[1];
            union U1 *l_702 = &g_404;
            int16_t *l_766 = &g_633;
            int i, j;
            l_679 = ((((((p_40 >= l_664) <= 1L) != (l_665++)) == (l_672 ^= ((l_668[1] , g_644) == g_644))) != ((((l_673 = g_535) , (((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((*p_39) &= ((&g_121 == l_678[6][0]) , 0L)), l_658)), 11)) , g_404.f0) == p_40)) < 0x39D83C9609C566EDLL) | (***g_412))) <= l_663.f0);
            --l_680;
            if (((g_645[0][0][0] & ((((((l_691 &= ((*l_669) = (((safe_mod_func_int64_t_s_s(g_335, (safe_mul_func_uint8_t_u_u(((l_687 != l_688[1][1]) ^ (l_673 >= l_673)), (l_672 = ((*l_689) = l_679)))))) || 0x6CA12936159CBB96LL) || ((!0x0DEDL) & p_40)))) && l_691) , g_517) || g_82) & 0xB2C14FB7L) == g_633)) <= l_663.f0))
            {
                int32_t **l_692 = &g_81[1];
                int8_t *l_698 = &g_699[0][3];
                int32_t l_737 = 0x977923EBL;
                union U2 l_754 = {0};
                (*l_692) = (void*)0;
                if ((safe_lshift_func_uint16_t_u_u(((((((0xB7E927C4L != l_665) , (((safe_mod_func_int32_t_s_s(p_40, 0x6A2CCB16L)) , (l_697 < ((((*l_698) = ((g_271 , 1L) >= ((((*l_689) = ((*p_41) = (*p_42))) < (l_668[0] , g_92)) && 1L))) >= g_89) , g_458))) && p_40)) >= l_658) != p_40) && 0x00E676A7L) & (*p_39)), 13)))
                {
                    for (l_665 = 0; (l_665 > 44); ++l_665)
                    {
                        union U1 **l_703 = &l_702;
                        (*l_703) = l_702;
                    }
                }
                else
                {
                    uint8_t l_715 = 0x78L;
                    uint64_t *l_716[4][6] = {{&l_656,&l_656,&l_656,&l_665,&l_656,&l_656},{&l_656,&l_665,&l_665,&l_665,&l_665,&l_656},{&l_656,&l_656,&l_665,&l_656,&l_656,&l_656},{&l_665,&l_656,&l_656,&l_665,&l_665,&l_665}};
                    int32_t ***l_731 = &l_692;
                    uint64_t l_745[5];
                    int64_t ** const **l_760 = (void*)0;
                    int64_t ** const *l_761[5] = {&l_758[0],&l_758[0],&l_758[0],&l_758[0],&l_758[0]};
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_745[i] = 3UL;
                    if ((((p_40 != (safe_add_func_int64_t_s_s((safe_div_func_int16_t_s_s((*p_39), p_40)), (g_121.f1 = (safe_sub_func_uint32_t_u_u(((p_40 == (-5L)) >= 0L), (safe_mul_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(0x16L, (~((*p_39) ^ (g_271.f4 ^= (((p_40 < (*p_42)) > l_715) == (*g_644))))))) != g_645[4][3][1]), 0x488DL)))))))) , 3L) ^ g_198))
                    {
                        (*l_692) = l_650[0];
                    }
                    else
                    {
                        uint8_t l_719 = 6UL;
                        int64_t *l_728[10] = {&l_657[2][3][0].f1,&l_657[2][3][0].f1,&l_657[2][3][0].f1,&l_657[2][3][0].f1,&l_657[2][3][0].f1,&l_657[2][3][0].f1,&l_657[2][3][0].f1,&l_657[2][3][0].f1,&l_657[2][3][0].f1,&l_657[2][3][0].f1};
                        int i;
                        l_730 = (((l_691 |= (g_717 == (void*)0)) < p_40) == (((((l_719 || (l_679 = (g_8 , (safe_add_func_uint32_t_u_u(((l_729 = (p_40 & (safe_rshift_func_uint8_t_u_s(((g_198 && (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((((g_368.f1 = (-6L)) || ((((***l_687) != p_39) ^ l_680) == 8L)) == 0xF6L), 6)), 3))) < 0x850A7C07B06133F0LL), 5)))) , p_40), 0x507AEC91L))))) || 0x23L) <= 0x34L) != p_40) < l_715));
                    }
                    (*l_731) = l_692;
                    for (g_124 = 20; (g_124 < 16); g_124--)
                    {
                        int16_t ***l_735 = (void*)0;
                        int16_t ***l_736 = &l_734;
                        int32_t l_744[7] = {0x44FD655FL,0x44FD655FL,0x44FD655FL,0x44FD655FL,0x44FD655FL,0x44FD655FL,0x44FD655FL};
                        int16_t *l_755 = &g_426;
                        int32_t **l_756 = &l_650[0];
                        int i;
                        (*l_736) = l_734;
                        if (l_737)
                            continue;
                        (*l_756) = ((**l_731) = func_54(&g_52[1], (safe_rshift_func_int8_t_s_s(((!(safe_mul_func_int8_t_s_s(((g_743 = ((*g_644) & 255UL)) >= (l_745[0]--)), (*p_41)))) == (((((((safe_mul_func_int16_t_s_s((*p_39), ((*l_755) = ((255UL ^ ((((safe_rshift_func_uint16_t_u_u((***g_412), ((safe_sub_func_int32_t_s_s(((&g_335 == (l_754 , &l_664)) > l_744[4]), 6L)) && 0L))) != (*g_644)) ^ g_645[8][5][0]) ^ p_40)) , l_664)))) != l_673) ^ p_40) == (*p_39)) != p_40) != p_40) , p_40)), 2))));
                    }
                    l_761[2] = l_757;
                }
                if (l_664)
                    continue;
                for (g_404.f1 = 0; g_404.f1 < 4; g_404.f1 += 1)
                {
                    g_123[g_404.f1] = &g_535;
                }
            }
            else
            {
                uint8_t l_763 = 255UL;
                l_691 = ((l_658 > (+g_699[1][6])) , 0x9F349AECL);
                l_763--;
                return l_766;
            }
        }
        else
        {
            uint32_t *l_767 = &g_743;
            union U1 l_770 = {1UL};
            int8_t *l_777[2][8] = {{&g_645[6][1][0],&g_645[5][3][1],&g_645[5][3][1],&g_645[5][3][1],&g_52[1],&g_645[4][3][1],&g_52[1],&g_645[5][3][1]},{&g_52[4],&g_52[1],&g_52[4],&g_645[4][3][1],&g_645[4][3][1],&g_52[4],&g_52[1],&g_52[4]}};
            int32_t l_778 = 0xC4DE1F1CL;
            uint8_t *l_779 = &g_671;
            int32_t l_788 = 0L;
            uint8_t l_790 = 0x8CL;
            int32_t l_813[5][4][3] = {{{1L,1L,1L},{1L,(-1L),0L},{0x67A72982L,0L,0x800783F0L},{0L,0x37D0D812L,0x67A72982L}},{{0x41E74032L,0x67A72982L,0x800783F0L},{0xF08963EEL,0L,0L},{1L,0L,1L},{0x87B27F44L,0L,0xC6207CE2L}},{{0xC6207CE2L,0L,0x37D0D812L},{0L,0x67A72982L,1L},{(-10L),0x37D0D812L,0xD09669EDL},{0L,0L,0x320A115EL}},{{0xC6207CE2L,(-1L),(-1L)},{0x87B27F44L,1L,(-1L)},{1L,(-10L),0x320A115EL},{0xF08963EEL,1L,0xD09669EDL}},{{0x41E74032L,(-2L),1L},{0L,1L,0x37D0D812L},{0x67A72982L,(-10L),0xC6207CE2L},{1L,1L,1L}}};
            uint32_t l_861 = 1UL;
            int32_t ****l_907 = &g_857;
            int32_t *****l_906 = &l_907;
            union U0 **l_909 = &l_908;
            int i, j, k;
            if (((((*l_767) &= l_658) == p_40) >= ((*p_42) > (((l_770 , l_663.f0) < (1UL >= (((*l_779) ^= ((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(p_40, (((safe_mul_func_int8_t_s_s((l_778 ^= l_770.f0), (*g_644))) , p_40) || 1UL))), l_691)) != 0x2AB1L)) & (*p_42)))) , 252UL))))
            {
                int32_t l_780 = 0xDB0659C1L;
                int32_t l_781 = 1L;
                int32_t l_782 = 0x3495E90AL;
                int32_t l_785 = 0xFE8CC8E0L;
                int32_t l_786 = (-3L);
                int32_t l_787 = 0x5082A678L;
                int32_t l_789[1][10][4] = {{{0L,(-1L),(-1L),0L},{(-1L),0L,(-8L),(-1L)},{(-1L),(-8L),(-1L),0x6CD89276L},{0L,(-1L),0x6CD89276L,0x6CD89276L},{(-8L),(-8L),(-8L),(-1L)},{(-1L),0L,(-8L),0L},{(-8L),(-1L),0x6CD89276L,(-8L)},{0L,(-1L),(-1L),0L},{(-1L),0L,(-8L),(-1L)},{(-1L),(-8L),(-1L),0x6CD89276L}}};
                int16_t * const * const l_794 = &g_24;
                int16_t * const * const *l_793 = &l_794;
                int8_t l_806 = (-3L);
                uint8_t l_815 = 0x31L;
                uint32_t l_893 = 0UL;
                int i, j, k;
                l_790++;
                for (g_517 = 0; (g_517 <= 0); g_517 += 1)
                {
                    int64_t l_797 = 0xC1E9E1C14D8D57A0LL;
                    int32_t * const *l_812 = &l_650[0];
                    int32_t * const **l_811 = &l_812;
                    int32_t * const ***l_810[8][8] = {{&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811},{&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811},{&l_811,(void*)0,&l_811,&l_811,(void*)0,&l_811,&l_811,&l_811},{&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811},{&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811},{&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811},{&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811},{&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811,&l_811}};
                    int32_t * const ****l_809 = &l_810[7][5];
                    int i, j;
                    (*l_809) = (((((l_783 >= ((void*)0 != l_793)) | ((((safe_mod_func_uint64_t_u_u(((((p_40 < l_797) , (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((g_52[5] ^ (safe_add_func_uint64_t_u_u((l_806 && (safe_rshift_func_uint8_t_u_u(g_198, (l_734 == (void*)0)))), p_40))), 0xB68044EDE2C9B1B9LL)), (-1L))) >= l_797), l_790))) & l_778) && (*p_42)), l_788)) <= 1UL) | 0x6CL) != (*p_39))) && g_89) & 0x4BL) , (void*)0);
                    l_815--;
                    if (p_40)
                        continue;
                    for (g_89 = 0; (g_89 <= 1); g_89 += 1)
                    {
                        union U1 l_822 = {0UL};
                        uint16_t *l_828 = (void*)0;
                        int16_t ***l_849 = &l_734;
                        int16_t ***l_850 = (void*)0;
                        int i, j, k;
                        (**l_812) |= ((l_691 &= (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((((l_822 , (void*)0) == (void*)0) >= ((safe_sub_func_uint32_t_u_u((+l_789[g_517][(g_517 + 1)][(g_89 + 1)]), (((l_781 ^= 9UL) & (((safe_lshift_func_int8_t_s_u(l_813[(g_517 + 2)][(g_89 + 1)][g_517], 0)) ^ (l_813[(g_89 + 3)][g_517][(g_89 + 1)] == l_813[(g_517 + 1)][(g_517 + 1)][(g_517 + 2)])) != 0x9C7B4863L)) <= 0x36545A41L))) | 0x9366L)), 2)), g_645[(g_517 + 7)][(g_517 + 6)][g_89]))) , p_40);
                        l_787 ^= (((*p_39) & (((**l_812) = (safe_sub_func_int64_t_s_s(((safe_add_func_int32_t_s_s(6L, (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((((!0x6D522517A9DE90A0LL) , &g_413) == (((((safe_div_func_int16_t_s_s(6L, (safe_rshift_func_int8_t_s_u((g_585 || ((p_40 > ((*l_767) &= p_40)) > (&g_412 == &g_412))), p_40)))) , (*p_39)) || l_784) , p_40) , (*l_687))) & g_52[1]), 11)), l_813[(g_89 + 1)][g_517][g_89])))) , 0x76A39C093308F171LL), 0UL))) > l_789[g_517][(g_517 + 1)][(g_89 + 1)])) , 7L);
                        l_691 = (l_784 | ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(l_814, (((l_778 = 65532UL) , ((~(&g_24 == (l_851 = ((*l_849) = &g_24)))) | (((l_853 , ((*l_779) |= (p_40 ^ ((**l_812) < ((safe_div_func_uint8_t_u_u(((void*)0 != g_856), (*p_41))) , l_788))))) , 0xA6L) || l_783))) | 9L))), 6)) & l_781));
                    }
                    for (l_664 = 0; (l_664 <= 0); l_664 += 1)
                    {
                        int32_t l_859[5][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
                        int64_t l_860 = 1L;
                        int i, j, k;
                        ++l_861;
                    }
                }
                for (g_124 = 0; (g_124 <= 4); g_124 += 1)
                {
                    uint32_t l_866 = 4294967292UL;
                    uint64_t *l_879 = &l_663.f1;
                    uint64_t *l_880 = &l_656;
                    uint32_t *l_881 = &l_861;
                    int32_t l_882[6][4] = {{0x772DB070L,9L,0xF73DF3B2L,0L},{0L,0xAF1B97BEL,0xF73DF3B2L,0xC434D500L},{9L,0x1A3FF052L,9L,0xC434D500L},{0xF73DF3B2L,0xAF1B97BEL,0L,0L},{(-1L),0x772DB070L,0xAF1B97BEL,0xAF1B97BEL},{0xB3F6E6DEL,0xB3F6E6DEL,0xAF1B97BEL,9L}};
                    int16_t *l_883 = &l_853.f4;
                    int32_t l_889 = 0xBBBD812AL;
                    int32_t l_891 = 0x22D4DEEBL;
                    int32_t l_892 = 1L;
                    int i, j;
                    l_784 = ((((safe_mul_func_uint8_t_u_u(l_866, ((*p_39) , ((((*l_883) &= (!((safe_lshift_func_uint8_t_u_s(p_40, ((safe_add_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((((l_730 >= (&g_671 != (g_874[0][1][0] = p_42))) || (safe_mod_func_uint32_t_u_u(((*p_39) || (safe_rshift_func_uint16_t_u_u(((((*l_881) = (p_40 || (((*l_880) &= (((*l_767) = ((l_789[0][9][2] = 0x457D7595L) , g_92)) >= 4294967289UL)) < g_458))) , g_82) <= g_699[0][3]), 13))), p_40))) >= g_671), p_40)) >= 255UL), g_271.f4)) ^ g_335))) , l_882[1][1]))) < p_40) , p_40)))) <= 0xB8FF71E02A96FC89LL) , l_729) >= p_40);
                    for (g_458 = 0; (g_458 <= 2); g_458 += 1)
                    {
                        uint8_t l_884 = 0UL;
                        int i, j, k;
                        if (l_884)
                            break;
                        l_729 |= ((safe_mul_func_uint8_t_u_u(p_40, (*g_644))) , (l_730 = (l_813[(g_458 + 1)][(g_458 + 1)][g_458] = (safe_rshift_func_uint16_t_u_s(p_40, 6)))));
                        l_893--;
                    }
                }
            }
            else
            {
                l_778 |= (safe_add_func_uint32_t_u_u(g_633, (safe_lshift_func_int8_t_s_s((((*l_779)--) | ((safe_mul_func_int16_t_s_s(((l_813[1][3][2] > p_40) | l_904), (+(((void*)0 != l_906) < 0x7D053408L)))) , (((1UL && (9L < l_664)) && (*g_644)) , 0x63L))), 6))));
            }
            (*l_909) = l_908;
        }
    }
    return &g_426;
}







static int16_t * func_43(int16_t * p_44, int16_t * p_45)
{
    int32_t *l_630 = (void*)0;
    int32_t *l_631 = (void*)0;
    int32_t *l_632[10][5] = {{&g_585,&g_585,&g_585,&g_585,&g_585},{&g_198,&g_198,(void*)0,(void*)0,&g_198},{&g_82,&g_585,&g_82,&g_585,&g_82},{&g_198,(void*)0,(void*)0,&g_198,&g_198},{&g_585,&g_585,&g_585,&g_585,&g_585},{&g_198,&g_198,(void*)0,(void*)0,&g_198},{&g_82,&g_585,&g_82,&g_585,&g_82},{&g_198,(void*)0,(void*)0,&g_198,&g_198},{&g_585,&g_585,&g_585,&g_585,&g_585},{&g_198,&g_198,(void*)0,(void*)0,&g_198}};
    int32_t l_634 = (-1L);
    int16_t l_635[8] = {1L,0x478EL,1L,0x478EL,1L,0x478EL,1L,0x478EL};
    uint64_t l_636 = 0x671A1D4009084435LL;
    union U1 l_639[9][3] = {{{0UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{0xB03185F2L}},{{0x40669DE3L},{0UL},{0x4710967BL}},{{4294967295UL},{4294967295UL},{0x4710967BL}},{{0UL},{0x40669DE3L},{0xB03185F2L}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{0UL},{4294967295UL}},{{0UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{0xB03185F2L}}};
    int64_t *l_642[4][2][5] = {{{&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335}},{{&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335}},{{&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335}},{{&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335}}};
    int64_t * const *l_641 = &l_642[3][1][4];
    int64_t * const * const *l_640 = &l_641;
    int64_t * const * const **l_643 = &l_640;
    int i, j, k;
    --l_636;
    (*l_643) = (l_639[7][2] , l_640);
    return p_44;
}







static int16_t * func_46(const int16_t * p_47, int8_t * p_48, union U1 p_49, int8_t * p_50)
{
    union U2 l_63 = {0};
    int32_t l_85[3][9] = {{0x5AC95004L,0x7FE137C2L,0x7FE137C2L,0x5AC95004L,0x7FE137C2L,0x7FE137C2L,0x5AC95004L,0x7FE137C2L,0x7FE137C2L},{0x5AC95004L,0x7FE137C2L,0x7FE137C2L,0x5AC95004L,0x7FE137C2L,0x7FE137C2L,0x5AC95004L,0x7FE137C2L,0x7FE137C2L},{0x5AC95004L,0x7FE137C2L,0x7FE137C2L,0x5AC95004L,0x7FE137C2L,0x7FE137C2L,0x5AC95004L,0x7FE137C2L,0x7FE137C2L}};
    int32_t *l_86 = (void*)0;
    int32_t *l_87 = &g_82;
    uint32_t *l_88[10][4][1] = {{{&g_89},{&g_89},{&g_89},{&g_89}},{{(void*)0},{&g_89},{&g_89},{&g_89}},{{&g_89},{(void*)0},{&g_89},{&g_89}},{{&g_89},{&g_89},{(void*)0},{&g_89}},{{&g_89},{&g_89},{(void*)0},{&g_89}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{&g_89},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{&g_89},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{&g_89},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{&g_89}}};
    int32_t l_90 = 0x3F861273L;
    int16_t *l_91 = &g_92;
    int32_t **l_607 = &g_81[1];
    int64_t *l_614 = &g_335;
    int64_t *l_618 = &l_63.f1;
    int64_t *l_619 = &g_368.f1;
    int64_t *l_620 = &l_63.f1;
    int64_t *l_621 = &g_368.f1;
    int64_t *l_622 = &g_271.f3;
    int64_t *l_623 = &g_368.f1;
    int64_t *l_624 = &g_368.f1;
    int64_t *l_625 = (void*)0;
    int32_t *l_626 = &g_585;
    int16_t *l_627 = &g_92;
    int i, j, k;
    (*l_607) = func_54(func_57(l_63, (safe_mul_func_uint8_t_u_u((((((((g_89 ^= (safe_add_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((+((safe_add_func_int8_t_s_s(0x0FL, ((*p_50) = ((g_52[3] == (safe_unary_minus_func_int64_t_s((((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((g_52[1] , g_52[1]), (g_81[1] != (void*)0))), 0x48C3L)) ^ ((safe_rshift_func_uint16_t_u_s((((*l_87) = (l_85[0][3] = (l_85[2][4] <= p_49.f0))) , p_49.f0), 12)) <= g_52[1])) , 0L)))) < g_52[1])))) , 0xB86D5672FEE61394LL)))), 0x74242702L))) | p_49.f0) && p_49.f0) || g_89) && 0UL) > l_90) & 0UL), g_8)), p_48, g_8, l_91), p_49.f0);
    (*l_626) = (safe_mod_func_int64_t_s_s((g_535 || ((*l_618) = (safe_div_func_uint32_t_u_u((g_124 < ((*l_87) ^= (safe_div_func_uint64_t_u_u(p_49.f0, (((g_31[2] , (((*l_614) = 0x0C0B0C31BEA3B012LL) | (safe_unary_minus_func_uint32_t_u(0x7A2851D2L)))) , (g_198 < (l_91 == (void*)0))) & p_49.f0))))), l_90)))), p_49.f0));
    return l_627;
}







static int32_t * func_54(int8_t * p_55, uint64_t p_56)
{
    int32_t *l_606 = &g_198;
    return l_606;
}







static int8_t * func_57(union U2 p_58, uint32_t p_59, int8_t * p_60, int8_t p_61, int16_t * p_62)
{
    uint16_t l_105 = 4UL;
    union U1 l_108 = {0x643983B7L};
    uint16_t *l_118 = (void*)0;
    int32_t l_119 = 0xB9FEC4F7L;
    int32_t l_120 = 0xAC6B8A9BL;
    uint32_t *l_172 = &g_89;
    int32_t l_186[1][5] = {{0L,0L,0L,0L,0L}};
    int8_t l_326 = (-7L);
    uint8_t l_336 = 0x9BL;
    int64_t *l_438 = &g_335;
    int64_t **l_437[5][7][1] = {{{&l_438},{&l_438},{&l_438},{&l_438},{&l_438},{&l_438},{&l_438}},{{&l_438},{&l_438},{&l_438},{&l_438},{&l_438},{&l_438},{&l_438}},{{&l_438},{&l_438},{&l_438},{&l_438},{&l_438},{&l_438},{&l_438}},{{&l_438},{&l_438},{&l_438},{&l_438},{&l_438},{&l_438},{&l_438}},{{&l_438},{&l_438},{&l_438},{&l_438},{&l_438},{&l_438},{&l_438}}};
    int8_t *l_461 = (void*)0;
    int8_t **l_460[10] = {&l_461,(void*)0,&l_461,(void*)0,&l_461,(void*)0,&l_461,(void*)0,&l_461,(void*)0};
    int32_t l_564 = 1L;
    int32_t l_596 = 0xEB16087BL;
    int32_t l_602 = 3L;
    int i, j, k;
    if ((safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((*p_60), 0L)), (safe_add_func_uint8_t_u_u(g_89, (*p_60))))), ((safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(l_105, ((safe_rshift_func_int16_t_s_s(0xD994L, (l_108 , (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int64_t_s((((safe_lshift_func_uint8_t_u_s((((*p_62) = l_108.f0) == ((safe_mod_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s(((l_119 |= ((0x4A74L <= l_108.f0) < 1L)) ^ l_105), 65535UL)) & g_89) ^ g_82), l_120)) != p_61)), l_105)) < l_120) < p_59))), 2))))) ^ g_8))), g_52[1])) ^ p_59))))
    {
        const uint16_t *l_122 = &g_8;
        union U2 *l_156 = (void*)0;
        uint32_t l_159 = 0xA2FE6578L;
        uint16_t **l_175[2][1];
        int32_t l_185[9] = {0x2DA91462L,0x53E6D428L,0x2DA91462L,0x53E6D428L,0x2DA91462L,0x53E6D428L,0x2DA91462L,0x53E6D428L,0x2DA91462L};
        int32_t l_220 = 0x2631F386L;
        uint8_t l_274 = 0x1EL;
        union U1 l_281 = {4294967286UL};
        uint64_t l_290 = 18446744073709551615UL;
        union U0 l_348 = {0xF607L};
        int8_t *l_372 = (void*)0;
        int64_t *l_407 = &l_348.f3;
        int64_t **l_406 = &l_407;
        int32_t *l_457[4];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_175[i][j] = &g_123[0];
        }
        for (i = 0; i < 4; i++)
            l_457[i] = &g_458;
lbl_235:
        for (l_108.f1 = 0; (l_108.f1 <= 4); l_108.f1 += 1)
        {
            uint16_t **l_125 = &l_118;
            int32_t *l_126 = &l_120;
            int32_t *l_158 = &l_119;
            int i;
            l_119 ^= ((*l_126) |= ((g_121 , l_122) == ((*l_125) = (g_123[2] = &g_8))));
            for (l_105 = 1; (l_105 <= 4); l_105 += 1)
            {
                int8_t *l_130 = &g_52[1];
                int8_t **l_129 = &l_130;
                uint32_t l_135 = 0UL;
                int32_t *l_136 = &g_82;
                uint64_t *l_146 = &g_121.f1;
                uint64_t *l_147[8][5][5] = {{{&l_108.f1,&l_108.f1,&l_108.f1,&g_121.f1,&l_108.f1},{&l_108.f1,&l_108.f1,(void*)0,(void*)0,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,(void*)0},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1}},{{&l_108.f1,&l_108.f1,(void*)0,&l_108.f1,(void*)0},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{(void*)0,&l_108.f1,&l_108.f1,(void*)0,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1}},{{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1}},{{&l_108.f1,&l_108.f1,&l_108.f1,(void*)0,(void*)0},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1}},{{&l_108.f1,&g_121.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,(void*)0,(void*)0},{&g_121.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1}},{{&l_108.f1,&l_108.f1,(void*)0,&l_108.f1,(void*)0},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&g_121.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1}},{{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,(void*)0,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&g_121.f1,&l_108.f1,&l_108.f1}},{{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&g_121.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,(void*)0,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1},{&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1,&l_108.f1}}};
                int32_t *l_154 = (void*)0;
                int32_t *l_155[10][9];
                union U2 **l_157 = &l_156;
                int i, j, k;
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_155[i][j] = &l_119;
                }
                (*l_136) |= (g_124 < ((safe_sub_func_uint8_t_u_u(((((*l_129) = (void*)0) != (void*)0) >= (safe_rshift_func_int8_t_s_s((((((g_52[5] , g_81[l_105]) != (void*)0) > p_61) && (g_92 || (safe_add_func_uint64_t_u_u((&g_123[3] != l_125), p_61)))) , l_135), (*l_126)))), 2L)) && (*l_126)));
                l_119 = ((*l_126) = (safe_add_func_uint64_t_u_u(18446744073709551615UL, ((safe_mul_func_int8_t_s_s((+(safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(p_61, 7)), ((*l_136) |= p_59)))), (g_124 == (((((((safe_mul_func_uint16_t_u_u(4UL, ((safe_sub_func_int64_t_s_s(((void*)0 != l_147[2][0][2]), 0x63684A2D252A4F93LL)) , (safe_add_func_uint32_t_u_u((5L == 18446744073709551615UL), (*l_126)))))) >= 0x97E4L) < 0x85L) && g_121.f0) && (*p_62)) , 0xE11D1409L) , (-1L))))) && 6UL))));
                if (p_61)
                    break;
                (*l_157) = l_156;
            }
            --l_159;
        }
        for (l_159 = 0; (l_159 == 37); l_159 = safe_add_func_int64_t_s_s(l_159, 7))
        {
            uint16_t **l_174 = &l_118;
            uint16_t ***l_173[10];
            uint64_t *l_179 = &l_108.f1;
            uint16_t ****l_180 = &l_173[7];
            int32_t l_182 = 0x642384D7L;
            int32_t l_183 = (-1L);
            int32_t l_184[5][8][3] = {{{0x06B8BA93L,0x9CA4D499L,0x9CA4D499L},{0x9CA4D499L,0x2B0E76B2L,0xD19F8FA1L},{0x7533B9DBL,(-3L),0xD19F8FA1L},{0xB2D28ECCL,0xD19F8FA1L,0x9CA4D499L},{0x3B59FD8AL,0L,0xC9ACA795L},{0xD19F8FA1L,0xD19F8FA1L,0L},{0xB15256D7L,(-3L),0x4DD17DDFL},{0xB15256D7L,0x2B0E76B2L,0x3B59FD8AL}},{{0xD19F8FA1L,0x9CA4D499L,(-3L)},{0x3B59FD8AL,0xB15256D7L,0x3B59FD8AL},{0xB2D28ECCL,0x5A20DB3BL,0x4DD17DDFL},{0x7533B9DBL,0x5A20DB3BL,0L},{0x9CA4D499L,0xB15256D7L,0xC9ACA795L},{0x06B8BA93L,0x9CA4D499L,0x9CA4D499L},{0x9CA4D499L,0x2B0E76B2L,0xD19F8FA1L},{0x7533B9DBL,(-3L),0xD19F8FA1L}},{{0xB2D28ECCL,0xD19F8FA1L,0x9CA4D499L},{0x3B59FD8AL,0L,0xC9ACA795L},{0xD19F8FA1L,0xD19F8FA1L,0L},{0xB15256D7L,(-3L),0x4DD17DDFL},{0xB15256D7L,0x2B0E76B2L,0x3B59FD8AL},{0xD19F8FA1L,0x9CA4D499L,(-3L)},{0x3B59FD8AL,0xB15256D7L,0x3B59FD8AL},{0xB2D28ECCL,0x5A20DB3BL,0x4DD17DDFL}},{{0x7533B9DBL,0x5A20DB3BL,0L},{0x9CA4D499L,0xB15256D7L,0xC9ACA795L},{0x06B8BA93L,0x9CA4D499L,0x9CA4D499L},{0x9CA4D499L,0x2B0E76B2L,0xD19F8FA1L},{0x7533B9DBL,(-3L),0xD19F8FA1L},{0xB2D28ECCL,0xD19F8FA1L,0x9CA4D499L},{0x3B59FD8AL,0L,0xC9ACA795L},{0xD19F8FA1L,0xD19F8FA1L,0L}},{{0xB15256D7L,(-3L),0x4DD17DDFL},{0xB15256D7L,0x4DD17DDFL,(-3L)},{0L,0x06B8BA93L,0x9CA4D499L},{(-3L),0xB2D28ECCL,(-3L)},{0x5A20DB3BL,0x2B0E76B2L,0xC9ACA795L},{0x3B59FD8AL,0x2B0E76B2L,0xB15256D7L},{0x06B8BA93L,0xB2D28ECCL,0x7533B9DBL},{0xD19F8FA1L,0x06B8BA93L,0x06B8BA93L}}};
            uint32_t l_187[5];
            const union U0 l_193 = {0xBD79L};
            int8_t *l_197 = &g_52[1];
            int32_t l_239[9] = {0xF631836CL,0xF631836CL,0xF631836CL,0xF631836CL,0xF631836CL,0xF631836CL,0xF631836CL,0xF631836CL,0xF631836CL};
            union U2 l_361 = {0};
            int32_t *l_374 = (void*)0;
            int32_t **l_373[2][3][1] = {{{(void*)0},{&l_374},{(void*)0}},{{&l_374},{(void*)0},{&l_374}}};
            int32_t *l_379 = &l_184[3][6][2];
            int64_t *l_390 = &l_348.f3;
            int32_t *l_391 = &l_186[0][2];
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_173[i] = &l_174;
            for (i = 0; i < 5; i++)
                l_187[i] = 0xEDEA70BFL;
            if ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s(p_61, (safe_mod_func_uint64_t_u_u((((((l_172 != &l_159) != (((((l_175[0][0] = &g_123[2]) != &g_123[2]) , (((*l_180) = ((((*l_179) = (((!(*p_62)) && (safe_add_func_uint8_t_u_u(0x3FL, g_89))) | ((p_61 != l_159) && 0xC3L))) || g_121.f0) , (void*)0)) != &l_175[1][0])) , 1L) || 0xD8DAA76CL)) < 1L) ^ p_61) || (-6L)), g_8)))) & 0x7326E483L) , p_59), l_119)), p_59)))
            {
                int32_t *l_181[8] = {&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119};
                union U0 l_192 = {65535UL};
                int8_t *l_196 = &g_52[4];
                int8_t l_234[9][7][4] = {{{8L,0x8BL,0xCDL,0L},{(-2L),6L,0x00L,0xCDL},{4L,6L,8L,0L},{6L,0x8BL,0L,0xBCL},{0x8EL,1L,0xB5L,(-2L)},{0x12L,0x47L,8L,0x29L},{0xCDL,(-1L),0xC3L,0x9AL}},{{4L,(-4L),0xBCL,0x8FL},{0xC3L,0xFEL,0x8DL,0x63L},{(-9L),0L,(-1L),(-2L)},{0xDBL,0x88L,0x12L,0x00L},{8L,9L,6L,(-1L)},{0x15L,6L,0xBCL,6L},{0x00L,0x7AL,8L,0x1EL}},{{1L,0x3DL,2L,0xBCL},{0x12L,0x88L,0xDBL,(-1L)},{0x12L,0L,2L,0x90L},{1L,(-1L),8L,0x8FL},{0x00L,0L,0xBCL,(-1L)},{0x15L,0x8EL,6L,0x63L},{8L,0x47L,0x12L,(-1L)}},{{0xDBL,0xB5L,(-1L),1L},{(-9L),9L,0x8DL,0L},{0xC3L,0x7AL,0xBCL,0x8DL},{4L,1L,0xC3L,0x1EL},{0xCDL,0x8BL,8L,0x00L},{0x12L,0xB5L,0xB5L,0x12L},{0x8EL,0L,0L,0x29L}},{{6L,0xFEL,8L,(-1L)},{4L,(-1L),0x00L,(-1L)},{(-2L),0xFEL,0xCDL,0x29L},{8L,0L,(-1L),0x12L},{1L,0xB5L,(-2L),0x00L},{2L,0x8BL,0x8DL,0x1EL},{0x15L,1L,0x00L,0x8DL}},{{1L,0x7AL,(-2L),0L},{0xCDL,9L,2L,1L},{0xB5L,0x9AL,(-1L),0xDBL},{0xDBL,0x8EL,0xCCL,0x8BL},{(-4L),0xB5L,8L,0x7AL},{0x1EL,0x05L,0x1EL,0xCDL},{0L,0xDBL,0x19L,(-1L)}},{{0x00L,0x12L,0x88L,0xDBL},{0x9AL,0x1DL,0x88L,0x47L},{0x00L,0xC3L,0x19L,0xFEL},{0L,(-1L),0x1EL,0x19L},{0x1EL,0x19L,8L,(-2L)},{(-4L),(-2L),0xCCL,(-1L)},{0xDBL,0x1DL,(-1L),0x88L}},{{0xB5L,(-1L),1L,0x8BL},{4L,1L,0L,0xCDL},{0x1EL,0x90L,(-1L),0x8DL},{2L,0xDBL,0L,0x03L},{1L,0x8EL,0x88L,0x88L},{0x8FL,0x8FL,0xDBL,0x47L},{0xBCL,0x15L,4L,0x12L}},{{0L,0x19L,(-1L),4L},{0L,0x19L,(-7L),0x12L},{0x19L,0x15L,0xCCL,0x47L},{0xB5L,0x8FL,0x9AL,0x88L},{0x6CL,0x8EL,0xBCL,0x03L},{4L,0xDBL,8L,0x8DL},{0L,0x90L,0x47L,0xCDL}}};
                uint64_t l_247 = 0x77700CADEF5C6319LL;
                union U2 **l_270 = (void*)0;
                int i, j, k;
                ++l_187[3];
                l_184[3][6][2] = (safe_add_func_uint16_t_u_u((l_192 , p_59), ((*p_62) |= ((void*)0 != &l_184[3][6][2]))));
                if (((((l_193 , 255UL) < 0x0FL) > (safe_mul_func_int16_t_s_s(0x80A2L, p_61))) == ((l_196 != l_197) || g_198)))
                {
                    const union U0 l_201 = {0xF605L};
                    int32_t *l_214 = (void*)0;
                    int32_t **l_215 = &g_81[1];
                    int32_t l_241 = 0x4F20DA12L;
                    int32_t l_245 = 0xE8019E2EL;
                    int32_t l_246 = 7L;
                    int32_t l_259 = 0xAD9DD56EL;
                    uint32_t l_272 = 8UL;
                    if ((safe_lshift_func_int8_t_s_s((g_52[1] | (l_201 , ((safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((+(!((&g_31[2] == l_156) >= (l_185[8] && (p_61 ^ (((*l_215) = l_214) == (void*)0)))))), (safe_mod_func_int16_t_s_s(((*p_62) = (safe_mul_func_uint8_t_u_u(0x17L, (*p_60)))), 0x9C36L)))), g_89)) | l_220), p_61)), l_186[0][4])) && g_8))), (*p_60))))
                    {
                        int16_t *l_233 = &l_192.f4;
                        int32_t l_238 = 0L;
                        int32_t l_240 = 0L;
                        int32_t l_242 = (-9L);
                        int32_t l_243 = 1L;
                        int32_t l_244[2];
                        int32_t *l_273 = (void*)0;
                        int64_t *l_275 = (void*)0;
                        int64_t *l_276 = &g_271.f3;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_244[i] = 0xE36E89E0L;
                        l_234[0][3][1] = (l_185[8] = (&g_8 == ((safe_sub_func_int64_t_s_s(p_61, ((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(p_59)), 1L)) & ((*l_233) = (p_61 ^ (safe_add_func_uint16_t_u_u(p_61, (g_121 , ((*p_62) = ((p_61 > (l_220 = (((+(safe_lshift_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(0x532398D2L, g_121.f0)) != l_105) >= 0x1D56L), (*p_60)))) , p_61) , l_108.f1))) && 0xEBL)))))))))) , &g_8)));
                        if (g_8)
                            goto lbl_235;
                        l_240 = ((safe_lshift_func_int16_t_s_s(((l_247++) , ((safe_div_func_int64_t_s_s((((*l_233) = (+l_159)) != (((((*l_276) = ((safe_add_func_int16_t_s_s((*p_62), (*p_62))) < (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(l_259, 3)), (((g_124 , (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((((safe_lshift_func_uint16_t_u_u(((void*)0 == l_270), 1)) , (l_186[0][4] |= (((((g_271 , ((l_244[0] == l_108.f1) == 0xB9977A37L)) < p_61) >= l_272) <= g_124) & p_61))) , l_183) ^ 255UL), 0x0030FD1EL)), (*p_62))), l_274)), l_108.f2))) || g_124) ^ p_61))))) , l_185[8]) , p_58) , l_244[0])), l_220)) , (*p_62))), g_52[1])) < 0xBA5BL);
                    }
                    else
                    {
                        union U0 l_285 = {0x6F15L};
                        l_290 ^= (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((0x38799992L == (l_281 , (((*l_179) = ((safe_unary_minus_func_uint64_t_u((((safe_sub_func_uint16_t_u_u(p_59, ((l_285 , &g_123[2]) != (void*)0))) >= (+p_61)) && (~g_82)))) , (safe_rshift_func_int8_t_s_s(l_184[4][0][2], (*p_60))))) < (-7L)))), 2)), g_82));
                    }
                }
                else
                {
                    for (l_183 = 8; (l_183 >= 0); l_183 -= 1)
                    {
                        return &g_52[5];
                    }
                }
            }
            else
            {
                const int32_t *l_300 = &g_301;
                const int32_t **l_299 = &l_300;
                int16_t *l_302 = &g_271.f4;
                int16_t **l_303 = &l_302;
                int32_t l_304 = 0L;
                int32_t l_310 = (-1L);
                if ((safe_mod_func_uint64_t_u_u((((((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((l_187[3] & g_8), (safe_mod_func_uint64_t_u_u((((p_58 , (p_61 , ((((*l_299) = &g_198) != &l_184[3][6][2]) , 4UL))) , ((*l_303) = l_302)) == (void*)0), g_8)))) , p_61), p_61)) | l_108.f0) , p_59) >= l_281.f0) & 0xC34DCA40L), l_274)))
                {
                    int32_t *l_305 = (void*)0;
                    int32_t *l_306 = &l_184[0][5][2];
                    int32_t *l_307 = &l_304;
                    int32_t *l_308 = &l_120;
                    int32_t *l_309[7] = {&l_184[3][6][2],(void*)0,&l_184[3][6][2],&l_184[3][6][2],(void*)0,&l_184[3][6][2],&l_184[3][6][2]};
                    uint64_t l_311 = 7UL;
                    int i;
                    l_304 ^= 0L;
                    --l_311;
                    for (l_183 = 0; (l_183 == (-16)); l_183 = safe_sub_func_uint8_t_u_u(l_183, 5))
                    {
                        int32_t l_327 = 0xB3CAC8E3L;
                        (*l_307) = ((*l_308) = (safe_mod_func_int8_t_s_s((g_31[2] , (p_61 ^ (((void*)0 == &g_81[0]) , (l_187[3] , (safe_add_func_int64_t_s_s((3L | l_290), ((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((safe_add_func_int8_t_s_s(((void*)0 != p_62), (-1L))) < 2UL) == 65526UL), 0x2917L)), l_326)) < (*p_60)))))))), l_327)));
                    }
                    if (l_108.f1)
                        goto lbl_235;
                }
                else
                {
                    int64_t *l_331 = &g_271.f3;
                    int64_t *l_332 = &g_271.f3;
                    int64_t *l_333 = &g_271.f3;
                    int64_t *l_334[5][4][6] = {{{&g_335,&g_335,&g_271.f3,(void*)0,(void*)0,&g_271.f3},{(void*)0,(void*)0,&g_271.f3,&g_335,&g_335,&g_271.f3},{&g_335,&g_335,&g_271.f3,&g_335,&g_335,&g_271.f3},{&g_335,&g_335,&g_271.f3,(void*)0,(void*)0,&g_271.f3}},{{(void*)0,(void*)0,&g_271.f3,&g_335,&g_335,&g_271.f3},{&g_335,&g_335,&g_271.f3,&g_335,&g_335,&g_271.f3},{&g_335,&g_335,&g_271.f3,(void*)0,(void*)0,&g_271.f3},{(void*)0,(void*)0,&g_271.f3,&g_335,&g_335,&g_271.f3}},{{&g_335,&g_335,&g_271.f3,&g_335,&g_335,&g_271.f3},{&g_335,&g_335,&g_271.f3,(void*)0,(void*)0,&g_271.f3},{(void*)0,(void*)0,&g_271.f3,&g_335,&g_335,&g_271.f3},{&g_335,&g_335,&g_271.f3,&g_335,&g_335,&g_271.f3}},{{&g_335,&g_335,&g_271.f3,(void*)0,(void*)0,&g_271.f3},{(void*)0,&g_335,(void*)0,&g_335,(void*)0,(void*)0},{&g_335,(void*)0,(void*)0,(void*)0,&g_335,(void*)0},{(void*)0,&g_335,(void*)0,&g_335,&g_335,(void*)0}},{{&g_335,&g_335,(void*)0,&g_335,(void*)0,(void*)0},{&g_335,(void*)0,(void*)0,(void*)0,&g_335,(void*)0},{(void*)0,&g_335,(void*)0,&g_335,&g_335,(void*)0},{&g_335,&g_335,(void*)0,&g_335,(void*)0,(void*)0}}};
                    const int32_t l_339 = 0x29EA8D36L;
                    int i, j, k;
                    if ((g_82 == (!(safe_mod_func_int64_t_s_s((l_336 ^= g_52[2]), ((&l_300 != (void*)0) ^ l_184[4][2][2]))))))
                    {
                        int16_t l_346[2];
                        int32_t l_347 = 0x103E1795L;
                        int32_t *l_349 = &l_183;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_346[i] = (-5L);
                        (*l_349) = ((((*p_62) |= (safe_rshift_func_uint16_t_u_s(l_339, 6))) , (safe_rshift_func_uint16_t_u_u(((!(safe_div_func_uint64_t_u_u(g_335, (+p_61)))) & ((*p_62) = ((l_347 = ((l_346[0] , ((*l_174) = &g_8)) != p_62)) && (0x2706L != p_59)))), ((l_348 , p_62) == (void*)0)))) ^ p_61);
                    }
                    else
                    {
                        int32_t *l_356 = &l_184[2][6][0];
                        union U2 **l_366[5][1];
                        uint8_t *l_369 = (void*)0;
                        uint8_t *l_370 = &g_368.f3;
                        int32_t *l_371 = &g_198;
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_366[i][j] = &l_156;
                        }
                        (*l_371) = ((safe_sub_func_int64_t_s_s((safe_sub_func_int32_t_s_s(l_185[0], ((*l_356) = 0x96BA76FAL))), g_271.f4)) != (safe_mul_func_int16_t_s_s(0L, ((safe_rshift_func_uint8_t_u_s(((*l_370) = (((l_361 , ((safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((((g_367 = (void*)0) == ((g_121 , p_58) , &g_31[2])) == l_185[8]) , (*l_300)) <= p_59), p_59)), 255UL)) < 0xF43AB875L)) <= (**l_299)) && p_59)), (*p_60))) < (*p_60)))));
                        if ((*l_356))
                            continue;
                        if (l_348.f4)
                            goto lbl_235;
                        return l_372;
                    }
                    l_373[0][2][0] = l_373[0][0][0];
                }
                if (p_59)
                    continue;
            }
            (*l_391) ^= ((g_121 , (((((safe_sub_func_int32_t_s_s(l_220, ((*l_379) |= (safe_lshift_func_int8_t_s_u(3L, l_193.f0))))) & (g_92 | l_120)) , (p_61 ^ ((safe_mod_func_int64_t_s_s(((*l_390) = (((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(p_61, ((*l_379) |= (((*l_172) = (safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(0x94C157F8L, 0x7760C5BBL)), l_185[8]))) | 0UL)))), 0)) > 0xEE0DL) & 0x0B69L)), p_61)) && 0x2C08L))) , 0x9B432B1EE840198CLL) , l_336)) | 0x487E794CL);
        }
    }
    else
    {
        uint16_t l_482[3][1];
        int32_t l_485 = 1L;
        int32_t l_509 = (-3L);
        int64_t l_533 = 6L;
        int32_t l_534 = 1L;
        int32_t l_591 = 0L;
        int32_t l_592 = 0xB0B8030FL;
        int32_t l_593 = 0x6CA4F18CL;
        int32_t l_594 = 0x3CAC38BAL;
        int32_t l_597 = 0x39C82AFBL;
        int32_t l_598 = 0x48CFE61AL;
        int32_t l_599 = (-3L);
        int32_t l_600 = 0xFF36FD3EL;
        int32_t l_601 = 0x2149EEC2L;
        uint16_t l_603[9];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_482[i][j] = 0x0B71L;
        }
        for (i = 0; i < 9; i++)
            l_603[i] = 0x5D6DL;
        for (g_121.f1 = 18; (g_121.f1 > 51); g_121.f1 = safe_add_func_uint64_t_u_u(g_121.f1, 2))
        {
            int32_t l_468 = 0x7501433DL;
            int32_t l_472 = 0x8489B811L;
            union U1 l_475 = {5UL};
            int32_t *l_519 = &l_509;
            int32_t *l_520 = (void*)0;
            int32_t *l_521 = (void*)0;
            int32_t *l_522 = &l_472;
            int32_t *l_523 = &g_198;
            int32_t *l_524 = (void*)0;
            int32_t *l_525 = &l_186[0][4];
            int32_t *l_526 = &l_509;
            int32_t *l_527 = &l_485;
            int32_t *l_528 = (void*)0;
            int32_t *l_529 = &l_472;
            int32_t *l_530 = &l_472;
            int32_t *l_531 = &l_120;
            int32_t *l_532[8];
            int i;
            for (i = 0; i < 8; i++)
                l_532[i] = (void*)0;
            if (p_59)
            {
                uint32_t l_470 = 0x1F430520L;
                union U0 l_481 = {0UL};
                int32_t *l_518 = &l_120;
                for (g_82 = 0; (g_82 > (-22)); g_82--)
                {
                    int32_t *l_467[4];
                    int32_t **l_469 = &l_467[0];
                    uint64_t * const l_471 = &g_121.f1;
                    uint16_t l_508 = 0x5BEDL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_467[i] = &l_186[0][1];
                    l_468 = 2L;
                    (*l_469) = l_467[1];
                    if (l_470)
                    {
                        (**l_469) = ((l_471 != (void*)0) == (l_472 , ((*l_172) = (((*p_62) & l_470) == (safe_add_func_uint64_t_u_u(0x69606F892E7B8968LL, (l_475 , (safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_int16_t_s((safe_rshift_func_int8_t_s_s(((*p_60) = ((l_481 , ((l_326 < p_59) && l_481.f4)) <= (-1L))), 5)))) < (***g_412)), p_59)))))))));
                        --l_482[0][0];
                    }
                    else
                    {
                        int64_t * const l_496 = &g_335;
                        int32_t *l_502 = &g_458;
                        int32_t **l_501 = &l_502;
                        uint8_t *l_503 = &l_336;
                        union U1 l_512 = {4294967291UL};
                        uint64_t *l_515 = (void*)0;
                        uint64_t *l_516 = &l_475.f1;
                        l_509 &= ((**l_469) = ((l_485 ^= (g_404.f1 = 0x9D6BABC24A0D2B40LL)) , (safe_sub_func_uint8_t_u_u(((**g_413) , ((((safe_add_func_int16_t_s_s(((l_472 || (l_120 = (((((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((((((void*)0 != l_496) != (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(((l_501 != (void*)0) & ((*l_503)++)), (p_59 && ((safe_sub_func_int32_t_s_s(p_59, 0x43B97613L)) , p_61)))), l_508))) , g_404.f2) != 3UL), g_404.f0)), 6)), (-7L))) < (**g_413)) , p_59) && 0x87A4DF89L) & 0x6DL))) != l_485), p_59)) | p_59) || g_8) | p_61)), l_481.f4))));
                        if ((**l_469))
                            continue;
                        (**l_469) = (safe_sub_func_uint64_t_u_u((l_512 , (safe_rshift_func_int16_t_s_u(g_198, 14))), ((*l_516) = g_404.f3)));
                    }
                }
                (*l_518) = g_517;
            }
            else
            {
                if (l_485)
                    break;
            }
            g_535++;
        }
        for (l_105 = 0; (l_105 >= 38); l_105 = safe_add_func_uint64_t_u_u(l_105, 6))
        {
            const uint16_t l_560 = 65533UL;
            int32_t *l_561 = (void*)0;
            int32_t *l_562[3][9] = {{&l_485,&l_485,(void*)0,&l_485,&l_485,(void*)0,&l_485,&l_485,(void*)0},{&g_198,&g_198,&g_82,&g_198,&g_198,&g_82,&g_198,&g_198,&g_82},{&l_485,&l_485,(void*)0,&l_485,&l_485,(void*)0,&l_485,&l_485,(void*)0}};
            union U2 *l_577 = &g_31[2];
            union U1 *l_584 = &g_121;
            int32_t l_595 = 0x2A54E571L;
            int i, j;
            if (((l_509 = (safe_sub_func_int32_t_s_s((p_61 == (((**g_413)++) , (safe_add_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u(((*g_403) , (l_534 || (l_482[0][0] < (((safe_lshift_func_int16_t_s_s(((*g_367) , ((p_59 < ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((((((g_89 | ((*p_60) ^ (*p_60))) ^ 2L) , (*p_62)) , &l_534) == &g_82) , l_509) >= g_121.f1), 0)), l_560)) ^ 0x97979B59C90DA631LL)) ^ l_186[0][3])), l_485)) & l_336) & l_509)))), (*p_60))) < p_61) || (*p_60)), (-1L))), g_52[1])), g_198)), l_560)))), p_61))) >= g_271.f4))
            {
                int32_t **l_563 = &l_562[0][3];
                (*l_563) = &g_198;
                l_564 = 0xA6BBF363L;
                l_564 ^= (((safe_mul_func_int8_t_s_s((((l_119 & (safe_mul_func_uint8_t_u_u(g_404.f0, (safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((-1L), ((*l_438) &= (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((&p_58 != l_577), 14)) != (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((p_61 & p_61), ((safe_lshift_func_int8_t_s_u(((&g_404 == l_584) || p_61), g_82)) || 0x86F98790L))), 8))), g_585))))), p_61))))) || p_61) <= 0xDE70L), l_509)) , (void*)0) != &g_92);
            }
            else
            {
                int64_t l_586 = 1L;
                int32_t l_587 = 0x439813C1L;
                int32_t l_588 = 0xBF5D643FL;
                int32_t l_589 = 0x44D65A0AL;
                int32_t l_590[8] = {0xE497CDE0L,(-1L),0xE497CDE0L,(-1L),0xE497CDE0L,(-1L),0xE497CDE0L,(-1L)};
                int i;
                l_603[0]++;
            }
            return &g_52[0];
        }
    }
    return &g_52[1];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_271.f0, "g_271.f0", print_hash_value);
    transparent_crc(g_271.f4, "g_271.f4", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_404.f0, "g_404.f0", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_645[i][j][k], "g_645[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_671, "g_671", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_699[i][j], "g_699[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_743, "g_743", print_hash_value);
    transparent_crc(g_934, "g_934", print_hash_value);
    transparent_crc(g_953, "g_953", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    transparent_crc(g_1194, "g_1194", print_hash_value);
    transparent_crc(g_1216, "g_1216", print_hash_value);
    transparent_crc(g_1274, "g_1274", print_hash_value);
    transparent_crc(g_1297, "g_1297", print_hash_value);
    transparent_crc(g_1322, "g_1322", print_hash_value);
    transparent_crc(g_1367, "g_1367", print_hash_value);
    transparent_crc(g_1474, "g_1474", print_hash_value);
    transparent_crc(g_1518, "g_1518", print_hash_value);
    transparent_crc(g_1608, "g_1608", print_hash_value);
    transparent_crc(g_1742, "g_1742", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1747[i][j][k], "g_1747[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1945, "g_1945", print_hash_value);
    transparent_crc(g_1999, "g_1999", print_hash_value);
    transparent_crc(g_2051, "g_2051", print_hash_value);
    transparent_crc(g_2062, "g_2062", print_hash_value);
    transparent_crc(g_2074, "g_2074", print_hash_value);
    transparent_crc(g_2379, "g_2379", print_hash_value);
    transparent_crc(g_2514, "g_2514", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_2544[i][j], "g_2544[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2665, "g_2665", print_hash_value);
    transparent_crc(g_2739, "g_2739", print_hash_value);
    transparent_crc(g_2819, "g_2819", print_hash_value);
    transparent_crc(g_2842, "g_2842", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2882[i], "g_2882[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
