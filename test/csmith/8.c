// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 17963B6B
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
   unsigned f0 : 18;
   unsigned f1 : 31;
   uint8_t f2;
   signed f3 : 29;
   unsigned f4 : 14;
   const int32_t f5;
   unsigned f6 : 17;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   unsigned f0 : 25;
   uint16_t f1;
   unsigned f2 : 6;
   signed f3 : 12;
   signed f4 : 18;
   unsigned f5 : 27;
};
#pragma pack(pop)


static struct S0 g_11 = {467,26253,0xEEL,-12018,43,2L,228};
static int16_t g_35[2][8][1] = {{{0xEB9DL},{(-1L)},{(-1L)},{0xEB9DL},{(-1L)},{(-1L)},{0xEB9DL},{(-1L)}},{{(-1L)},{0xEB9DL},{(-1L)},{(-1L)},{0xEB9DL},{(-1L)},{(-1L)},{0xEB9DL}}};
static int32_t g_37[7] = {0x4FF6A91AL,0x4FF6A91AL,0x4FF6A91AL,0x4FF6A91AL,0x4FF6A91AL,0x4FF6A91AL,0x4FF6A91AL};
static struct S1 g_67 = {1934,65526UL,1,-15,192,8198};
static const int32_t g_81 = 0x679804E6L;
static int64_t g_99 = 0x8C15133AA3A0A773LL;
static int16_t g_102 = 1L;
static uint32_t g_126 = 0x121EC5D8L;
static int32_t *g_128[7][8] = {{&g_37[4],(void*)0,&g_37[4],&g_37[4],&g_37[2],&g_37[4],(void*)0,&g_37[4]},{&g_37[2],&g_37[4],&g_37[0],&g_37[4],&g_37[2],&g_37[4],&g_37[2],(void*)0},{&g_37[2],&g_37[4],&g_37[2],(void*)0,&g_37[2],&g_37[4],&g_37[2],&g_37[4]},{&g_37[0],&g_37[4],&g_37[4],(void*)0,&g_37[2],(void*)0,&g_37[4],&g_37[4]},{&g_37[4],&g_37[4],(void*)0,(void*)0,&g_37[2],&g_37[4],&g_37[2],(void*)0},{&g_37[0],&g_37[4],&g_37[0],&g_37[4],&g_37[4],(void*)0,&g_37[2],(void*)0},{&g_37[2],&g_37[4],(void*)0,&g_37[4],&g_37[2],&g_37[4],&g_37[4],(void*)0}};
static int32_t * const *g_127[8] = {&g_128[1][7],&g_128[1][7],&g_128[3][2],&g_128[1][7],&g_128[1][7],&g_128[3][2],&g_128[1][7],&g_128[1][7]};
static int64_t *g_136 = &g_99;
static int64_t **g_135 = &g_136;
static int32_t g_142 = 0L;
static uint8_t g_145 = 0x9EL;
static uint64_t g_152 = 0x49C445E426DA7943LL;
static uint64_t g_153 = 0xC0CBE003A25DF1CALL;
static int64_t g_183 = 0x33570BABF467C7D0LL;
static uint32_t g_185 = 2UL;
static int64_t g_188 = (-2L);
static uint32_t g_304 = 0xAFBDEDD9L;
static const int64_t g_328[7][5] = {{0L,(-2L),0L,(-2L),0L},{1L,0xD121491CC74A03D8LL,0xD121491CC74A03D8LL,1L,1L},{0x1D59A99D01EAA86ELL,(-2L),0x1D59A99D01EAA86ELL,(-2L),0x1D59A99D01EAA86ELL},{1L,1L,0xD121491CC74A03D8LL,0xD121491CC74A03D8LL,1L},{0L,(-2L),0L,(-2L),0L},{1L,0xD121491CC74A03D8LL,0xD121491CC74A03D8LL,1L,1L},{0x1D59A99D01EAA86ELL,(-2L),0x1D59A99D01EAA86ELL,(-2L),0x1D59A99D01EAA86ELL}};
static struct S1 *g_334[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int64_t ***g_336[1] = {&g_135};
static int64_t ****g_335 = &g_336[0];
static uint16_t g_353 = 65530UL;
static int8_t g_364 = (-1L);
static int8_t *g_367 = &g_364;
static int8_t g_381 = (-1L);
static uint32_t g_403[3] = {4294967294UL,4294967294UL,4294967294UL};
static uint32_t *g_402 = &g_403[1];
static int32_t g_424 = 0xB85385DEL;
static uint32_t g_491 = 0UL;
static uint16_t **g_520 = (void*)0;
static struct S1 **g_534 = &g_334[7];
static const struct S0 g_544 = {427,1330,0x35L,-22527,60,0L,236};
static uint32_t g_624 = 0UL;
static int16_t g_651 = 8L;
static struct S0 *g_674 = &g_11;
static struct S0 **g_673 = &g_674;
static struct S0 ***g_672[8][8] = {{(void*)0,&g_673,(void*)0,(void*)0,&g_673,(void*)0,(void*)0,&g_673},{&g_673,&g_673,(void*)0,&g_673,&g_673,&g_673,(void*)0,&g_673},{(void*)0,&g_673,&g_673,&g_673,&g_673,&g_673,(void*)0,&g_673},{&g_673,&g_673,&g_673,(void*)0,&g_673,&g_673,&g_673,&g_673},{&g_673,&g_673,(void*)0,&g_673,&g_673,(void*)0,&g_673,&g_673},{&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673},{(void*)0,(void*)0,&g_673,&g_673,&g_673,&g_673,&g_673,(void*)0},{&g_673,&g_673,&g_673,(void*)0,&g_673,(void*)0,&g_673,&g_673}};
static uint16_t * const g_714 = &g_353;
static int32_t g_785 = (-3L);
static uint32_t g_869[1][4][2] = {{{0x64D5F042L,0x64D5F042L},{0x5F0FA236L,0x64D5F042L},{0x64D5F042L,0x5F0FA236L},{0x64D5F042L,0x64D5F042L}}};
static const uint16_t g_914[9][10] = {{65535UL,0xF6B3L,0x774EL,0UL,0x6C83L,0UL,0x774EL,0xF6B3L,65535UL,0UL},{0xDFA4L,0xA54CL,0x774EL,0x6C83L,0xF6B3L,0xF6B3L,0x6C83L,0x774EL,0xA54CL,0xDFA4L},{0xA54CL,0UL,65535UL,0x6C83L,0x2C8DL,0xDFA4L,0x2C8DL,0x6C83L,65535UL,0UL},{0UL,0x4A54L,65535UL,0xA54CL,0UL,0x774EL,0x774EL,0UL,0xA54CL,65535UL},{0UL,0UL,0x2C8DL,0UL,0xDFA4L,0x774EL,0UL,0x774EL,0xDFA4L,0UL},{0UL,0x6C83L,0UL,0x774EL,0xF6B3L,65535UL,0UL,0UL,65535UL,0xF6B3L},{0x2C8DL,0UL,0UL,0x2C8DL,0UL,0xDFA4L,0x774EL,0UL,0x774EL,0xDFA4L},{65535UL,0x4A54L,0UL,0x4A54L,65535UL,0xA54CL,0UL,0x774EL,0x774EL,0UL},{0UL,0xA54CL,0x2C8DL,0x2C8DL,0xA54CL,0UL,0xF6B3L,0UL,65535UL,0UL}};
static uint32_t g_943 = 0xD7515BA7L;
static int32_t *g_972 = (void*)0;
static int8_t **g_979[3][2][3] = {{{&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367}},{{&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367}},{{&g_367,&g_367,&g_367},{&g_367,&g_367,&g_367}}};
static int8_t ***g_978 = &g_979[2][1][0];
static const struct S0 g_1035 = {297,12958,0xDDL,-1095,34,-1L,1};
static const struct S0 g_1039 = {234,3261,1UL,-20266,127,0L,337};
static uint32_t g_1147 = 0x728E64E4L;
static int32_t g_1148 = 0x394A992DL;
static uint8_t g_1150 = 0xBEL;
static struct S0 g_1234 = {63,28153,1UL,3852,103,0x0511103BL,49};
static uint8_t * const g_1282[1] = {&g_1234.f2};
static uint8_t * const *g_1281 = &g_1282[0];
static uint8_t g_1286 = 246UL;
static int16_t *g_1392 = (void*)0;
static int16_t **g_1391 = &g_1392;
static uint32_t g_1416 = 1UL;
static uint64_t g_1418 = 18446744073709551606UL;
static uint64_t *g_1427 = (void*)0;
static struct S0 ****g_1485 = &g_672[3][5];
static struct S0 *****g_1484[5][8] = {{&g_1485,&g_1485,&g_1485,(void*)0,&g_1485,&g_1485,(void*)0,&g_1485},{&g_1485,&g_1485,&g_1485,&g_1485,&g_1485,&g_1485,&g_1485,&g_1485},{&g_1485,&g_1485,(void*)0,&g_1485,&g_1485,(void*)0,&g_1485,&g_1485},{&g_1485,(void*)0,&g_1485,&g_1485,&g_1485,(void*)0,&g_1485,&g_1485},{(void*)0,&g_1485,(void*)0,(void*)0,&g_1485,(void*)0,&g_1485,(void*)0}};
static uint8_t *g_1547[1][10] = {{&g_1234.f2,&g_1234.f2,&g_1234.f2,&g_1234.f2,&g_1234.f2,&g_1234.f2,&g_1234.f2,&g_1234.f2,&g_1234.f2,&g_1234.f2}};
static uint8_t **g_1546 = &g_1547[0][3];
static uint8_t ***g_1545 = &g_1546;
static uint8_t ****g_1544[6] = {&g_1545,&g_1545,&g_1545,&g_1545,&g_1545,&g_1545};
static int32_t **g_1553 = &g_972;
static int32_t **g_1554 = &g_128[3][2];
static uint8_t g_1620[9][3] = {{1UL,0x41L,0x41L},{0UL,0x30L,0UL},{1UL,1UL,0x41L},{0xE1L,0x30L,0xE1L},{1UL,0x41L,0x41L},{0UL,0x30L,0UL},{1UL,1UL,0x41L},{0xE1L,0x30L,0xE1L},{1UL,0x41L,0x41L}};
static const int8_t g_1648 = 0L;
static int64_t g_1711 = (-8L);
static int32_t g_1753 = 0x7F8A00ABL;
static uint8_t g_1892 = 0x42L;
static int8_t * const g_1946 = (void*)0;
static int8_t * const *g_1945 = &g_1946;
static uint64_t g_2014 = 18446744073709551607UL;
static int32_t g_2027 = 0x7D6A9B55L;
static uint32_t g_2028 = 1UL;
static int32_t *g_2051 = &g_1753;
static int64_t *****g_2131 = &g_335;
static uint32_t g_2133 = 0x8CC65BC0L;
static uint32_t g_2206 = 1UL;
static uint32_t g_2232 = 0xD17E8DB4L;
static uint16_t ***g_2264 = (void*)0;
static uint16_t ***g_2265 = &g_520;
static uint8_t ***g_2354 = &g_1546;
static const int64_t **g_2382 = (void*)0;
static const int64_t ***g_2381 = &g_2382;
static int8_t ****g_2489 = &g_978;
static int8_t *****g_2488 = &g_2489;
static int32_t g_2511 = 0x22846B9BL;
static struct S1 *** const **g_2717 = (void*)0;
static struct S1 *****g_2718 = (void*)0;
static uint32_t **g_2775 = &g_402;
static uint32_t ** const *g_2799[1][2][3] = {{{(void*)0,(void*)0,(void*)0},{&g_2775,&g_2775,&g_2775}}};
static int16_t g_2870 = 0x40CAL;
static struct S1 g_2957 = {3066,0xB3C1L,1,-21,412,8007};
static int32_t g_2979 = (-1L);
static const int32_t g_2982 = 0xD181FFE6L;



static int8_t func_1(void);
static int32_t func_4(struct S1 p_5, struct S0 p_6, int32_t p_7);
static struct S0 func_9(struct S0 p_10);
static int32_t func_12(uint64_t p_13, int32_t p_14, uint64_t p_15, int16_t p_16, int64_t p_17);
static int8_t func_30(uint16_t p_31, uint8_t p_32);
static int32_t * func_38(const uint16_t p_39, const int8_t p_40, struct S1 p_41, uint8_t p_42);
static const int64_t func_47(int32_t * p_48, const int32_t * p_49);
static const int32_t * func_51(const uint32_t p_52, struct S1 p_53, int32_t * p_54, const int16_t p_55);
static const int8_t func_58(int64_t p_59, int32_t * p_60, int64_t p_61, int64_t p_62);
static int64_t func_63(const int32_t * p_64, int32_t p_65, uint16_t p_66);
# 161 "<stdin>"
static int8_t func_1(void)
{
    uint16_t l_2 = 0x9D94L;
    int16_t l_2525 = (-3L);
    int32_t l_2556 = 0x04A958A1L;
    int32_t l_2557 = 0x8E7090C2L;
    int32_t l_2561 = 0x4F2E8340L;
    int32_t l_2562 = 0L;
    const int32_t *l_2617 = &l_2557;
    const int32_t *l_2620[5][5][1] = {{{&g_142},{&l_2557},{&g_142},{&l_2557},{&g_142}},{{&l_2557},{&g_142},{&l_2557},{&g_142},{&l_2557}},{{&g_142},{&l_2557},{&g_142},{&l_2557},{&g_142}},{{&l_2557},{&g_142},{&l_2557},{&g_142},{&l_2557}},{{&g_142},{&l_2557},{&g_142},{&l_2557},{&g_142}}};
    struct S1 * const l_2623 = &g_67;
    int16_t l_2634 = 0x2537L;
    struct S0 l_2648[4][4][6] = {{{{451,13935,0xA9L,-16189,76,0xFCECFF86L,232},{287,44695,0x36L,-4106,68,0xBEBD128BL,240},{222,34898,0x34L,21535,77,-3L,61},{156,33463,0x00L,22716,21,-1L,70},{323,8942,2UL,13830,119,0L,346},{451,13935,0xA9L,-16189,76,0xFCECFF86L,232}},{{131,7736,0xEAL,14813,100,-1L,246},{324,35680,1UL,-16624,0,0x5AFC3B9CL,16},{366,44185,0xBEL,-16603,58,-4L,197},{324,35680,1UL,-16624,0,0x5AFC3B9CL,16},{131,7736,0xEAL,14813,100,-1L,246},{56,26001,0x51L,-3413,24,-9L,219}},{{498,37025,0UL,-20090,50,-5L,84},{310,45322,253UL,15588,96,-2L,356},{263,39296,0xFFL,-6598,102,-1L,136},{332,7325,8UL,-14748,116,0xE2E58771L,10},{393,357,0x26L,-7087,45,0xD3FAB81EL,309},{102,24390,251UL,-16373,44,0x552A4F72L,188}},{{383,14335,0xB0L,13580,111,0x6E913FFBL,301},{329,8840,0x34L,-14034,11,0x27F6B718L,106},{332,7325,8UL,-14748,116,0xE2E58771L,10},{310,45322,253UL,15588,96,-2L,356},{451,13935,0xA9L,-16189,76,0xFCECFF86L,232},{102,24390,251UL,-16373,44,0x552A4F72L,188}}},{{{20,31929,0x15L,2758,76,0x0AB53A12L,350},{131,7736,0xEAL,14813,100,-1L,246},{263,39296,0xFFL,-6598,102,-1L,136},{222,34898,0x34L,21535,77,-3L,61},{144,20962,249UL,22113,83,0xA692C4DBL,51},{56,26001,0x51L,-3413,24,-9L,219}},{{451,13935,0xA9L,-16189,76,0xFCECFF86L,232},{288,22731,0x52L,6409,123,0x43659E9EL,138},{366,44185,0xBEL,-16603,58,-4L,197},{366,44185,0xBEL,-16603,58,-4L,197},{288,22731,0x52L,6409,123,0x43659E9EL,138},{451,13935,0xA9L,-16189,76,0xFCECFF86L,232}},{{56,26001,0x51L,-3413,24,-9L,219},{144,20962,249UL,22113,83,0xA692C4DBL,51},{222,34898,0x34L,21535,77,-3L,61},{263,39296,0xFFL,-6598,102,-1L,136},{131,7736,0xEAL,14813,100,-1L,246},{20,31929,0x15L,2758,76,0x0AB53A12L,350}},{{102,24390,251UL,-16373,44,0x552A4F72L,188},{451,13935,0xA9L,-16189,76,0xFCECFF86L,232},{310,45322,253UL,15588,96,-2L,356},{332,7325,8UL,-14748,116,0xE2E58771L,10},{329,8840,0x34L,-14034,11,0x27F6B718L,106},{383,14335,0xB0L,13580,111,0x6E913FFBL,301}}},{{{102,24390,251UL,-16373,44,0x552A4F72L,188},{393,357,0x26L,-7087,45,0xD3FAB81EL,309},{332,7325,8UL,-14748,116,0xE2E58771L,10},{263,39296,0xFFL,-6598,102,-1L,136},{310,45322,253UL,15588,96,-2L,356},{498,37025,0UL,-20090,50,-5L,84}},{{56,26001,0x51L,-3413,24,-9L,219},{131,7736,0xEAL,14813,100,-1L,246},{324,35680,1UL,-16624,0,0x5AFC3B9CL,16},{366,44185,0xBEL,-16603,58,-4L,197},{324,35680,1UL,-16624,0,0x5AFC3B9CL,16},{131,7736,0xEAL,14813,100,-1L,246}},{{451,13935,0xA9L,-16189,76,0xFCECFF86L,232},{323,8942,2UL,13830,119,0L,346},{156,33463,0x00L,22716,21,-1L,70},{222,34898,0x34L,21535,77,-3L,61},{287,44695,0x36L,-4106,68,0xBEBD128BL,240},{451,13935,0xA9L,-16189,76,0xFCECFF86L,232}},{{20,31929,0x15L,2758,76,0x0AB53A12L,350},{263,39296,0xFFL,-6598,102,-1L,136},{14,41101,7UL,12913,99,0xC6D02554L,246},{310,45322,253UL,15588,96,-2L,356},{131,7736,0xEAL,14813,100,-1L,246},{107,15108,255UL,20522,111,7L,306}}},{{{383,14335,0xB0L,13580,111,0x6E913FFBL,301},{263,39296,0xFFL,-6598,102,-1L,136},{144,20962,249UL,22113,83,0xA692C4DBL,51},{332,7325,8UL,-14748,116,0xE2E58771L,10},{287,44695,0x36L,-4106,68,0xBEBD128BL,240},{402,29613,248UL,-4624,20,0L,215}},{{498,37025,0UL,-20090,50,-5L,84},{323,8942,2UL,13830,119,0L,346},{332,7325,8UL,-14748,116,0xE2E58771L,10},{324,35680,1UL,-16624,0,0x5AFC3B9CL,16},{324,35680,1UL,-16624,0,0x5AFC3B9CL,16},{332,7325,8UL,-14748,116,0xE2E58771L,10}},{{131,7736,0xEAL,14813,100,-1L,246},{131,7736,0xEAL,14813,100,-1L,246},{451,13935,0xA9L,-16189,76,0xFCECFF86L,232},{156,33463,0x00L,22716,21,-1L,70},{310,45322,253UL,15588,96,-2L,356},{459,41457,0x6DL,-2981,17,1L,151}},{{451,13935,0xA9L,-16189,76,0xFCECFF86L,232},{393,357,0x26L,-7087,45,0xD3FAB81EL,309},{509,2930,0x0AL,-13236,97,0xED9C97A9L,193},{14,41101,7UL,12913,99,0xC6D02554L,246},{329,8840,0x34L,-14034,11,0x27F6B718L,106},{451,13935,0xA9L,-16189,76,0xFCECFF86L,232}}}};
    uint64_t l_2666[7][7] = {{0x234D11276302099DLL,0xD8A704480ECE6EBFLL,0x234D11276302099DLL,0UL,18446744073709551608UL,18446744073709551608UL,0UL},{18446744073709551615UL,8UL,18446744073709551615UL,18446744073709551615UL,2UL,2UL,18446744073709551615UL},{0x234D11276302099DLL,0xD8A704480ECE6EBFLL,0x234D11276302099DLL,0UL,18446744073709551608UL,18446744073709551608UL,0UL},{18446744073709551615UL,8UL,18446744073709551615UL,18446744073709551615UL,2UL,2UL,18446744073709551615UL},{0x234D11276302099DLL,0xD8A704480ECE6EBFLL,0x234D11276302099DLL,0UL,18446744073709551608UL,18446744073709551608UL,0UL},{18446744073709551615UL,8UL,18446744073709551615UL,18446744073709551615UL,2UL,2UL,18446744073709551615UL},{0x234D11276302099DLL,0xD8A704480ECE6EBFLL,0x234D11276302099DLL,0UL,18446744073709551608UL,18446744073709551608UL,0UL}};
    uint64_t l_2762[1];
    uint16_t l_2764[8];
    uint16_t ***l_2866[7][4][4] = {{{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,&g_520,&g_520}},{{&g_520,&g_520,(void*)0,&g_520},{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,(void*)0,&g_520}},{{(void*)0,&g_520,&g_520,&g_520},{&g_520,(void*)0,&g_520,&g_520},{(void*)0,&g_520,&g_520,(void*)0},{&g_520,&g_520,&g_520,&g_520}},{{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,&g_520,(void*)0},{&g_520,&g_520,&g_520,&g_520}},{{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,(void*)0,&g_520}},{{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,&g_520,&g_520}},{{&g_520,&g_520,&g_520,(void*)0},{(void*)0,&g_520,(void*)0,&g_520},{&g_520,&g_520,&g_520,&g_520},{&g_520,&g_520,&g_520,&g_520}}};
    struct S1 **l_2874 = &g_334[8];
    const uint16_t l_2948 = 3UL;
    struct S1 l_2953 = {3337,6UL,6,-3,-498,1842};
    uint8_t *l_2978 = &g_1620[7][1];
    const int32_t *l_2981[1][9][3] = {{{&g_2982,&g_2982,&g_2982},{&g_2982,&g_81,&g_2982},{&g_81,&g_2982,&g_2982},{&g_2982,&g_2982,&g_81},{&g_2982,&g_81,&g_2982},{&g_2982,&g_2982,&g_2982},{&g_81,&g_2982,&g_81},{&g_2982,&g_2982,&g_2982},{&g_2982,&g_81,&g_2982}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2762[i] = 7UL;
    for (i = 0; i < 8; i++)
        l_2764[i] = 65530UL;
lbl_2667:
    if (l_2)
    {
        uint32_t l_3 = 4294967295UL;
        return l_3;
    }
    else
    {
        struct S1 l_8 = {5223,0xEE76L,3,-7,170,6444};
        int32_t *l_2510 = &g_2511;
        int8_t l_2520 = 0L;
        uint8_t *l_2521 = &g_11.f2;
        int32_t l_2558 = (-1L);
        int32_t l_2559 = (-1L);
        int32_t l_2560[1];
        uint32_t l_2566 = 0xA0DD0116L;
        int i;
        for (i = 0; i < 1; i++)
            l_2560[i] = 5L;
    }
    if (l_2525)
    {
        int16_t l_2573[7][4] = {{1L,1L,0L,1L},{0x56E8L,(-4L),0x56E8L,0L},{0x56E8L,0L,0L,0x56E8L},{1L,0L,1L,0L},{0L,(-4L),1L,1L},{1L,1L,0L,1L},{0x56E8L,(-4L),0x56E8L,0L}};
        struct S1 l_2584 = {1413,8UL,1,-22,-127,0};
        struct S1 *l_2585 = &l_2584;
        uint8_t *l_2633 = &g_11.f2;
        struct S1 ***l_2721[10] = {&g_534,&g_534,&g_534,&g_534,&g_534,&g_534,&g_534,&g_534,&g_534,&g_534};
        struct S1 ****l_2720[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        struct S1 *****l_2719 = &l_2720[0];
        int64_t l_2722[9] = {0x6017858C43BCDA63LL,0x6017858C43BCDA63LL,0x6017858C43BCDA63LL,0x6017858C43BCDA63LL,0x6017858C43BCDA63LL,0x6017858C43BCDA63LL,0x6017858C43BCDA63LL,0x6017858C43BCDA63LL,0x6017858C43BCDA63LL};
        struct S1 l_2788 = {324,0xD6BCL,4,-26,358,2549};
        int16_t l_2804 = 0xF8FDL;
        uint64_t *l_2811 = &g_152;
        struct S0 l_2857 = {31,27567,2UL,-717,49,0x176F0E4EL,38};
        int32_t l_2912[7] = {0x73AC2CF3L,0x73AC2CF3L,0x73AC2CF3L,0x73AC2CF3L,0x73AC2CF3L,0x73AC2CF3L,0x73AC2CF3L};
        uint32_t *l_2924 = &g_2133;
        int i, j;
        (*g_335) = (**g_2131);
        if ((((****g_2489) ^= ((safe_lshift_func_uint8_t_u_s(1UL, (safe_rshift_func_int8_t_s_u((l_2573[6][0] > (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(8UL, (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((*g_714), 7)), ((((safe_add_func_uint16_t_u_u((*g_714), 0x5693L)) && ((((*l_2585) = l_2584) , l_2573[6][0]) > (safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((*g_2131) = (*g_2131)) == (void*)0), l_2525)), 0x29L)))) >= l_2562) <= g_869[0][3][0]))))), g_152))), l_2561)))) < 247UL)) != 0x90L))
        {
            struct S0 *l_2590 = &g_11;
            uint8_t *l_2599 = &g_11.f2;
            uint8_t *l_2602 = (void*)0;
            uint8_t *l_2603 = &g_1620[7][2];
            int64_t *l_2604 = &g_1711;
            int32_t l_2605 = 0xB3D59830L;
            int16_t *l_2606 = &l_2573[6][2];
            int16_t l_2607 = (-4L);
            uint8_t l_2614 = 0UL;
            struct S1 l_2632 = {3808,65533UL,1,17,-63,4627};
            int16_t l_2650[7] = {0x7D42L,0x7D42L,0x7D42L,0x7D42L,0x7D42L,0x7D42L,0x7D42L};
            const uint16_t l_2651 = 0x6A01L;
            int i;
            (*g_673) = l_2590;
            l_2584.f3 = ((*g_367) <= (1UL <= ((((*g_136) ^= l_2562) == ((0x8BL == (safe_mul_func_int8_t_s_s((l_2556 &= 0xB7L), ((((*l_2606) = ((((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((**g_1546), (*****g_2488))), ((*l_2604) ^= (safe_lshift_func_uint8_t_u_s(((*l_2603) = (++(*l_2599))), 2))))) && l_2605) , (g_1620[5][2] , (void*)0)) != (void*)0)) == (-1L)) , 0x4AL)))) | l_2607)) | 4294967295UL)));
            if (((((safe_div_func_int32_t_s_s(((((void*)0 != (*g_1554)) & ((0x5D4D2C4CL != (*g_2051)) | l_2607)) < (-1L)), (safe_lshift_func_int8_t_s_s(l_2, 0)))) ^ (((((65532UL <= ((((l_2561 &= (safe_mul_func_int16_t_s_s(l_2525, 0xCA08L))) || l_2607) >= l_2614) == g_11.f5)) || (*g_402)) != l_2584.f3) || l_2525) , 0x6941A0F0L)) & l_2556) & 0xCBL))
            {
                uint32_t l_2621[3][1][9] = {{{0UL,4UL,0UL,0UL,4UL,0UL,0UL,4UL,0UL}},{{6UL,2UL,6UL,6UL,2UL,6UL,6UL,2UL,6UL}},{{0UL,4UL,0UL,0UL,4UL,0UL,0UL,4UL,0UL}}};
                int i, j, k;
                for (l_2562 = 0; (l_2562 == 7); l_2562 = safe_add_func_uint64_t_u_u(l_2562, 6))
                {
                    const int32_t **l_2618 = (void*)0;
                    const int32_t **l_2619[7][7] = {{&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617},{&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617},{&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617},{&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617},{&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617},{&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617},{&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617,&l_2617}};
                    struct S1 l_2622 = {4846,0x67E7L,6,-59,-164,10394};
                    int i, j;
                    l_2620[4][0][0] = l_2617;
                    (*g_534) = ((0x34D5L & (l_2621[2][0][1] & (l_2622 , (**g_135)))) , l_2623);
                }
                (*g_2051) |= (safe_mul_func_int16_t_s_s(((***g_1545) < (safe_rshift_func_uint16_t_u_u((l_2621[2][0][1] & (((safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_u(l_2621[2][0][1], l_2621[2][0][1])) , func_38(l_2584.f5, (*****g_2488), ((*l_2623) = l_2632), ((*l_2603) &= ((l_2633 = (void*)0) != (**g_2354))))) != &g_1148), 2)) , (***g_2354)) <= 1UL)), l_2634))), (*g_714)));
            }
            else
            {
                uint8_t *** const *l_2637 = &g_1545;
                int32_t l_2649 = (-9L);
                (*g_1553) = &l_2561;
                (*g_1554) = func_38((safe_rshift_func_uint16_t_u_u(((l_2584.f1 , l_2637) == ((((((((safe_sub_func_uint64_t_u_u((((safe_sub_func_int32_t_s_s((*g_972), (*g_402))) && l_2584.f5) < (safe_mul_func_int8_t_s_s((l_2584.f3 = ((***g_978) = 0x26L)), l_2614))), (((l_2602 = ((**g_1545) = (**g_1545))) == ((safe_sub_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((l_2648[1][1][4] , 1L), 0x199227F9090AD4A5LL)) ^ 4294967286UL), g_328[5][1])) , l_2633)) , l_2632.f0))) & l_2649) <= l_2650[5]) , l_2605) || 4294967295UL) != l_2649) >= l_2614) , &g_2354)), 1)), l_2651, (*l_2623), l_2573[6][0]);
            }
        }
        else
        {
            int32_t *l_2654[1];
            uint16_t l_2660 = 0UL;
            int16_t l_2778 = 0xF30BL;
            const uint32_t l_2787 = 0xD916431CL;
            uint32_t l_2795 = 0x97BC95CBL;
            uint16_t l_2796 = 65534UL;
            struct S1 l_2801 = {679,65526UL,4,57,-193,6929};
            int i;
            for (i = 0; i < 1; i++)
                l_2654[i] = (void*)0;
            for (g_785 = (-17); (g_785 > (-26)); g_785 = safe_sub_func_int64_t_s_s(g_785, 9))
            {
                uint8_t l_2655 = 0x7EL;
                struct S0 ****l_2665 = &g_672[0][6];
                int16_t *l_2674[6][10] = {{&l_2573[6][0],(void*)0,&g_35[0][1][0],(void*)0,&l_2573[6][0],&l_2573[5][1],(void*)0,&g_651,&g_102,&l_2573[6][0]},{&l_2573[6][0],(void*)0,&g_651,(void*)0,&l_2573[6][0],&l_2573[6][0],(void*)0,&g_651,(void*)0,&l_2573[6][0]},{&l_2573[6][0],(void*)0,&g_651,(void*)0,&l_2573[6][0],&l_2573[6][0],(void*)0,&g_651,(void*)0,&l_2573[6][0]},{&l_2573[6][0],(void*)0,&g_35[0][1][0],(void*)0,&l_2573[6][0],&l_2573[5][1],(void*)0,&g_651,&g_102,&l_2573[6][0]},{&l_2573[6][0],(void*)0,&g_651,(void*)0,&l_2573[6][0],&l_2573[6][0],(void*)0,&g_651,(void*)0,&l_2573[6][0]},{&l_2573[6][0],(void*)0,&g_651,(void*)0,&l_2573[6][0],&l_2573[6][0],(void*)0,&g_651,(void*)0,&l_2573[6][0]}};
                struct S1 l_2675 = {334,0UL,6,-15,89,10448};
                uint32_t **l_2687 = &g_402;
                const uint64_t l_2698[1] = {1UL};
                int64_t *l_2748 = &g_188;
                struct S1 *l_2765 = (void*)0;
                int i, j;
                (*g_1554) = &l_2557;
                if ((*g_2051))
                    continue;
                if (g_364)
                    goto lbl_2667;
            }
            for (l_2556 = 24; (l_2556 == 0); l_2556 = safe_sub_func_int8_t_s_s(l_2556, 5))
            {
                int8_t l_2781 = 0x2DL;
                for (g_2028 = 0; g_2028 < 1; g_2028 += 1)
                {
                    for (g_624 = 0; g_624 < 4; g_624 += 1)
                    {
                        for (g_153 = 0; g_153 < 2; g_153 += 1)
                        {
                            g_869[g_2028][g_624][g_153] = 0UL;
                        }
                    }
                }
                if (l_2781)
                    continue;
                l_2557 = (g_1753 & l_2781);
                (*g_2051) = (safe_lshift_func_uint16_t_u_u(0xCAEFL, 6));
            }
            for (g_145 = 0; (g_145 >= 28); g_145 = safe_add_func_uint32_t_u_u(g_145, 1))
            {
                const uint16_t l_2786 = 0xEA27L;
                (*g_1554) = func_38(l_2786, l_2787, l_2788, (l_2788.f1 & ((safe_add_func_int32_t_s_s(l_2786, (safe_add_func_uint16_t_u_u((((l_2648[1][1][4].f3 ^= ((safe_rshift_func_uint8_t_u_s(l_2584.f2, ((g_152 != (*l_2617)) < l_2795))) != l_2796)) & (*l_2617)) == 0x512F5BF48CDCBBE9LL), 7UL)))) && 0xC6D26C2AL)));
                for (g_185 = 6; (g_185 != 51); g_185 = safe_add_func_int64_t_s_s(g_185, 9))
                {
                    uint32_t ** const **l_2800[7] = {&g_2799[0][1][2],&g_2799[0][1][2],&g_2799[0][1][2],&g_2799[0][1][2],&g_2799[0][1][2],&g_2799[0][1][2],&g_2799[0][1][2]};
                    int i;
                    for (g_381 = 0; (g_381 >= 0); g_381 -= 1)
                    {
                        (*g_1553) = (void*)0;
                    }
                    g_2799[0][0][0] = g_2799[0][1][2];
                }
            }
            l_2801 = (*l_2623);
        }
        l_2556 |= ((*g_2051) = (((*l_2811) = (((safe_mul_func_uint16_t_u_u(l_2804, (g_11.f4 || (*g_136)))) && (l_2557 = (safe_lshift_func_int8_t_s_u(0xB6L, 5)))) <= (safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((*g_714), 11)), g_2232)))) && ((*l_2617) > (l_2584.f1 & ((-1L) == l_2573[6][0])))));
        for (l_2556 = (-23); (l_2556 != (-23)); l_2556 = safe_add_func_uint8_t_u_u(l_2556, 4))
        {
            uint8_t l_2828[2][5][8] = {{{0UL,0x26L,7UL,0UL,0x34L,0x28L,0x29L,0xD2L},{0x26L,0x29L,7UL,0x81L,0xEEL,0xEEL,0x81L,7UL},{0x34L,0x34L,0xF1L,5UL,0x97L,0x4BL,0x7BL,0x34L},{0x29L,0x26L,1UL,0xEEL,0x7BL,1UL,7UL,0x34L},{0x26L,0UL,0x29L,5UL,0x29L,0UL,0x26L,7UL}},{{0xD2L,5UL,0x0EL,0x81L,5UL,8UL,0x7BL,0xD2L},{0x28L,0xD2L,0xEEL,0UL,5UL,1UL,1UL,5UL},{0xD2L,7UL,7UL,0xD2L,0x29L,0x28L,0x34L,0UL},{0x26L,0x34L,250UL,0x81L,0x7BL,0xF1L,0x81L,0x26L},{0x29L,0x34L,0xEEL,0x28L,0UL,0x0EL,0x70L,255UL}}};
            uint32_t *l_2829[1];
            int32_t *l_2841 = (void*)0;
            int32_t *l_2842 = &g_785;
            int32_t l_2843 = (-1L);
            int32_t l_2844 = 0x00FCB17AL;
            struct S1 l_2845 = {2223,3UL,4,-11,165,6737};
            int16_t **l_2846 = &g_1392;
            uint16_t ***l_2868 = &g_520;
            const struct S1 *l_2877 = &l_2584;
            const struct S1 **l_2876 = &l_2877;
            const int32_t *l_2950[3][4] = {{&l_2857.f5,&l_2857.f5,&l_2648[1][1][4].f5,&g_11.f5},{&g_1039.f5,&g_544.f5,&g_1039.f5,&l_2648[1][1][4].f5},{&g_1039.f5,&l_2648[1][1][4].f5,&l_2648[1][1][4].f5,&g_1039.f5}};
            const int32_t **l_2949 = &l_2950[1][3];
            const uint64_t l_2954 = 1UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2829[i] = &g_1416;
        }
    }
    else
    {
        uint32_t *l_2955 = (void*)0;
        uint32_t *l_2956 = &g_304;
        const uint8_t *l_2961 = &g_1620[7][2];
        const uint8_t **l_2960[3];
        uint64_t *l_2970 = &g_152;
        int32_t l_2973 = 0L;
        uint8_t *l_2976 = &g_1620[8][1];
        uint8_t **l_2977 = &l_2976;
        const int32_t **l_2980 = (void*)0;
        const int32_t **l_2983 = &l_2620[2][2][0];
        int i;
        for (i = 0; i < 3; i++)
            l_2960[i] = &l_2961;
        (*l_2983) = (l_2981[0][4][1] = &l_2556);
        (*g_1554) = (void*)0;
    }
    return (***g_978);
}







static int32_t func_4(struct S1 p_5, struct S0 p_6, int32_t p_7)
{
    uint8_t *****l_2145 = &g_1544[3];
    const int32_t l_2148 = (-9L);
    uint32_t l_2149 = 0xFCEAC483L;
    int32_t l_2152 = (-9L);
    int32_t l_2153 = 0L;
    int8_t l_2154 = 0xE7L;
    int32_t l_2155 = 0x813D76F3L;
    int32_t l_2157 = 2L;
    int32_t l_2158 = 0xF459CB87L;
    int32_t l_2159 = 0x6C2DCE2FL;
    int32_t l_2160 = 0x94979DCBL;
    int32_t l_2161 = 0xF9BD9F56L;
    int32_t l_2162[5][2] = {{0x9B414852L,(-7L)},{0x9B414852L,0x9B414852L},{(-7L),0x9B414852L},{0x9B414852L,(-7L)},{0x9B414852L,0x9B414852L}};
    uint8_t * const **l_2179[3];
    struct S0 l_2295 = {86,3702,255UL,22097,31,0L,262};
    uint16_t l_2301 = 1UL;
    int8_t l_2321 = 0x78L;
    uint16_t *l_2325[5];
    uint16_t **l_2324 = &l_2325[3];
    struct S1 l_2340 = {2614,0xD786L,6,39,-373,11156};
    struct S0 ***l_2361 = &g_673;
    int64_t l_2389 = (-1L);
    struct S1 ***l_2431 = &g_534;
    struct S1 ****l_2430 = &l_2431;
    struct S1 *****l_2429 = &l_2430;
    uint32_t * const *l_2455 = &g_402;
    struct S1 l_2456 = {122,0x2104L,6,-9,436,1580};
    int8_t *****l_2490 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_2179[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_2325[i] = &g_353;
    if ((((((((*g_714) = 0UL) <= ((~(~((0xC9L > (***g_1545)) & 0x63L))) || ((((((!(safe_add_func_int64_t_s_s((safe_div_func_uint32_t_u_u(((p_5.f3 , ((l_2145 == &g_1544[3]) | (((safe_add_func_uint32_t_u_u((((l_2148 ^ l_2149) == l_2148) , 0xA1659101L), (-9L))) , (void*)0) == (void*)0))) | l_2149), (*g_402))), p_6.f0))) , l_2148) || l_2149) || 1UL) && 0xD1L) & l_2148))) >= l_2148) , &g_1545) == (*l_2145)) & l_2149))
    {
        int32_t *l_2150 = &g_37[1];
        int32_t *l_2151[9][5] = {{&g_1753,&g_142,&g_1753,&g_1753,&g_142},{&g_142,&g_1753,&g_1753,&g_142,&g_1753},{&g_142,&g_142,&g_37[0],&g_142,&g_142},{&g_1753,&g_142,&g_1753,&g_1753,&g_142},{&g_142,&g_1753,&g_1753,&g_142,&g_1753},{&g_142,&g_142,&g_37[0],&g_142,&g_142},{&g_1753,&g_142,&g_1753,&g_1753,&g_142},{&g_142,&g_1753,&g_1753,&g_142,&g_1753},{&g_142,&g_142,&g_37[0],&g_142,&g_142}};
        int32_t l_2156 = 8L;
        uint8_t l_2163 = 0x49L;
        uint16_t l_2166 = 0x1526L;
        const uint16_t l_2226 = 0xA510L;
        uint16_t ***l_2262 = &g_520;
        struct S1 ***l_2292[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j;
        l_2163--;
        l_2166 ^= p_6.f2;
        (*l_2150) = p_5.f4;
        for (g_304 = 0; (g_304 <= 5); g_304 += 1)
        {
            const int32_t l_2178 = 0x5AFFB38DL;
            int8_t *l_2180 = &g_364;
            int32_t l_2188 = 7L;
            const uint32_t l_2192 = 0xF0F53890L;
            struct S1 **l_2197 = (void*)0;
            int32_t ***l_2200 = &g_1554;
            uint8_t l_2259 = 255UL;
            uint16_t ***l_2266 = &g_520;
            int16_t **l_2271[8][2] = {{&g_1392,&g_1392},{&g_1392,&g_1392},{&g_1392,&g_1392},{&g_1392,&g_1392},{&g_1392,&g_1392},{&g_1392,&g_1392},{&g_1392,&g_1392},{&g_1392,&g_1392}};
            uint32_t l_2289 = 0xC5261853L;
            int i, j;
        }
    }
    else
    {
        const int32_t l_2306 = (-9L);
        int16_t l_2320 = 0L;
        int16_t *l_2322 = &g_102;
        struct S1 **l_2327 = &g_334[6];
        struct S0 l_2335 = {231,43733,255UL,12546,1,-1L,8};
        int64_t ***l_2336 = &g_135;
        int64_t ***l_2337 = &g_135;
        int32_t l_2365 = 0x3B7DD45DL;
        int32_t l_2366 = 0xA88F2D55L;
        int32_t l_2368[1];
        uint8_t l_2416[10][1][2];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2368[i] = 0x97CD9DEDL;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_2416[i][j][k] = 255UL;
            }
        }
lbl_2435:
        l_2161 ^= (((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((l_2306 > (safe_div_func_int64_t_s_s(((**g_135) = 0x71BE1C5456450C60LL), (safe_unary_minus_func_uint8_t_u((((safe_add_func_uint8_t_u_u((0x03202B1D1F3E0EEALL <= 18446744073709551610UL), ((safe_add_func_int64_t_s_s(((l_2295.f2 , 0x90L) ^ (p_6.f3 , (safe_rshift_func_int16_t_s_u(((*l_2322) ^= (((p_6 , (((((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(l_2320, l_2321)), l_2320)) | 0UL) & p_5.f0) != p_6.f3) <= p_5.f2)) != p_5.f2) == 0xD4L)), 0)))), 6UL)) & 0x7F99600B08A2019CLL))) && (***g_1545)) < l_2320)))))) == l_2306), p_5.f5)), l_2320)) != p_5.f0) > l_2148);
        for (g_99 = 6; (g_99 >= 0); g_99 -= 1)
        {
            struct S1 *l_2323 = &g_67;
            struct S1 ***l_2326 = &g_534;
            int32_t l_2334[8] = {0x849DB347L,0x849DB347L,0x849DB347L,0x849DB347L,0x849DB347L,0x849DB347L,0x849DB347L,0x849DB347L};
            uint16_t *l_2348 = (void*)0;
            struct S0 ***l_2360 = &g_673;
            int i;
            (*l_2323) = p_5;
            if ((l_2324 != ((((*l_2326) = &l_2323) == l_2327) , (*g_2265))))
            {
                return p_6.f2;
            }
            else
            {
                int64_t ***l_2338 = &g_135;
                int64_t l_2339 = 0x213720E50DB34185LL;
                struct S1 l_2345[3][6] = {{{5574,0x525AL,1,-39,-124,3032},{1602,0x5702L,1,36,-209,5066},{1602,0x5702L,1,36,-209,5066},{5574,0x525AL,1,-39,-124,3032},{5574,0x525AL,1,-39,-124,3032},{1602,0x5702L,1,36,-209,5066}},{{5574,0x525AL,1,-39,-124,3032},{5574,0x525AL,1,-39,-124,3032},{1602,0x5702L,1,36,-209,5066},{1602,0x5702L,1,36,-209,5066},{5574,0x525AL,1,-39,-124,3032},{5574,0x525AL,1,-39,-124,3032}},{{5574,0x525AL,1,-39,-124,3032},{1602,0x5702L,1,36,-209,5066},{1602,0x5702L,1,36,-209,5066},{5574,0x525AL,1,-39,-124,3032},{5574,0x525AL,1,-39,-124,3032},{1602,0x5702L,1,36,-209,5066}}};
                uint8_t ***l_2355 = &g_1546;
                int32_t l_2367[1][6] = {{0xF21422DFL,0xF21422DFL,0xF21422DFL,0xF21422DFL,0xF21422DFL,0xF21422DFL}};
                uint16_t l_2369 = 0x5AFDL;
                uint64_t l_2396[2];
                uint16_t l_2397 = 0x5E5FL;
                struct S1 ****l_2400[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_2396[i] = 0x551AED713EB5960DLL;
                for (i = 0; i < 2; i++)
                    l_2400[i] = &l_2326;
                if ((p_5.f3 , ((safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((*l_2322) = l_2334[0]), (p_6 , p_6.f5))), ((((**g_2131) = (l_2335 , l_2336)) != (l_2338 = l_2337)) , p_6.f5))), 0)) <= ((l_2339 == 0x5F14F369L) || 6L))))
                {
                    int64_t l_2353 = 2L;
                    (**g_534) = l_2340;
                    l_2353 ^= (safe_mul_func_int8_t_s_s((((((**g_1281) = l_2334[0]) < (0x619C15D4L & (((*l_2323) = l_2345[2][0]) , l_2334[0]))) <= (p_5.f1 > (safe_div_func_int64_t_s_s((((((((l_2348 == ((*l_2324) = l_2322)) , (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((p_6 , &p_6) != &p_6), l_2335.f4)) , p_6.f1), 2))) != l_2335.f2) & (*g_2051)) <= l_2334[0]) != p_5.f0) == p_5.f5), l_2148)))) > 0x40D48A4CL), p_5.f1));
                }
                else
                {
                    const int32_t *l_2357[2][8][3] = {{{&l_2153,&g_37[4],(void*)0},{&l_2160,&l_2152,&l_2152},{&l_2148,&l_2152,&l_2155},{&l_2155,&g_37[4],&l_2157},{&l_2148,(void*)0,&l_2157},{&l_2160,&g_1753,&l_2155},{&l_2153,(void*)0,&l_2152},{&l_2153,&g_37[4],(void*)0}},{{&l_2160,&l_2152,&l_2152},{&l_2148,&l_2152,&l_2155},{&l_2155,&g_37[4],&l_2157},{&l_2148,(void*)0,&l_2157},{&l_2160,&g_1753,&l_2155},{&l_2153,(void*)0,&l_2152},{&l_2153,&g_37[4],(void*)0},{&l_2160,&l_2152,&l_2152}}};
                    const int32_t **l_2356 = &l_2357[1][1][2];
                    int i, j, k;
                    (***l_2326) = l_2345[2][0];
                    p_5.f3 &= (g_2354 != l_2355);
                    (*l_2356) = &l_2306;
                    if (p_7)
                        continue;
                }
                for (g_152 = 3; (g_152 <= 8); g_152 += 1)
                {
                    int32_t *l_2364[3];
                    const int64_t ****l_2383 = &g_2381;
                    int64_t *l_2384[5][9] = {{&g_183,&g_99,&g_99,&g_183,&g_99,&g_99,&g_183,&g_99,&g_99},{(void*)0,&g_1711,&g_188,&l_2339,&g_188,&g_1711,(void*)0,&g_1711,&g_188},{&g_99,&g_183,&g_183,&g_99,&g_183,&g_183,&g_99,&g_183,&g_183},{&g_188,(void*)0,&g_1711,&g_1711,&g_1711,(void*)0,&g_188,(void*)0,&g_1711},{&g_99,&g_183,&g_183,&g_99,&g_183,&g_183,&g_99,&g_183,&g_183}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_2364[i] = &l_2158;
                    (*g_2051) = ((safe_sub_func_uint16_t_u_u(((l_2360 != ((*g_1485) = l_2361)) & (*g_402)), (++p_5.f1))) && p_5.f1);
                    ++l_2369;
                    if (((safe_add_func_int64_t_s_s((((*l_2145) = (*l_2145)) == (void*)0), l_2155)) ^ ((+(safe_add_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((p_5.f0 <= (((l_2340.f3 = (((*l_2383) = g_2381) == (*g_335))) , g_128[g_99][g_99]) == &l_2157)) , (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(l_2340.f5, l_2389)), p_6.f6))), p_6.f1)) == 0xB3A2F00C94F49408LL), p_5.f5))) >= 0x0FA6L)))
                    {
                        p_5.f3 ^= (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((p_6.f1 ^ (((safe_div_func_int32_t_s_s(l_2396[1], p_7)) && ((*g_367) = 3L)) == 0x07L)), l_2397)), 1UL));
                    }
                    else
                    {
                        struct S1 ****l_2399 = (void*)0;
                        struct S1 *****l_2398[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_2398[i] = &l_2399;
                        l_2400[0] = (void*)0;
                    }
                }
            }
            (*g_1554) = func_38((safe_rshift_func_int8_t_s_u(l_2389, 7)), l_2295.f1, (**g_534), l_2320);
        }
        p_5.f4 = ((p_5 , (safe_unary_minus_func_uint64_t_u(((-5L) >= ((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(l_2335.f2, 0xDC7EL)), (safe_add_func_uint32_t_u_u(l_2154, ((safe_div_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((((**l_2337) = (***g_335)) != &l_2389), 11)), (*g_402))) >= (p_6.f0 , l_2340.f1)), l_2416[8][0][1])) >= 0xEEE7F08302F1D8A5LL))))) > l_2320))))) <= l_2368[0]);
        for (l_2335.f2 = 0; (l_2335.f2 > 56); l_2335.f2 = safe_add_func_int16_t_s_s(l_2335.f2, 3))
        {
            uint64_t l_2432 = 0xDBD5CC6A068D99A1LL;
            int32_t l_2433 = 1L;
            int32_t l_2441 = 0xC1DCA76BL;
            if (p_5.f3)
                break;
            p_5.f3 ^= (safe_sub_func_int16_t_s_s(((*l_2322) = (((**g_1281) > (l_2433 ^= ((safe_div_func_int64_t_s_s((((g_1039.f5 || 8L) & ((safe_lshift_func_int8_t_s_u(0x20L, ((**g_135) > (safe_add_func_int16_t_s_s(l_2340.f3, (((safe_rshift_func_int16_t_s_s(((((void*)0 == l_2429) | ((*g_2051) ^= 0xFCDCB08DL)) | p_6.f5), 4)) , l_2416[1][0][0]) < p_5.f2)))))) ^ l_2159)) ^ p_6.f0), l_2432)) || (*g_714)))) , p_5.f2)), 1L));
            for (g_1418 = 0; (g_1418 <= 7); g_1418 += 1)
            {
                uint32_t l_2442[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_2442[i] = 7UL;
                for (g_102 = 1; (g_102 <= 7); g_102 += 1)
                {
                    struct S1 l_2434 = {5275,65527UL,0,-62,-212,4577};
                    for (l_2158 = 0; (l_2158 <= 0); l_2158 += 1)
                    {
                        return p_5.f2;
                    }
                    l_2434 = l_2434;
                }
                for (g_491 = 0; (g_491 <= 0); g_491 += 1)
                {
                    int32_t l_2439 = 0x485DB08BL;
                    int32_t l_2440 = 0x97BF32AAL;
                    if (g_491)
                        goto lbl_2435;
                    for (g_2014 = 2; (g_2014 <= 7); g_2014 += 1)
                    {
                        int32_t *l_2436 = &l_2158;
                        int32_t *l_2437 = &l_2366;
                        int32_t *l_2438[3][4][6] = {{{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142}},{{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142}},{{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142}}};
                        int i, j, k;
                        l_2442[1]--;
                    }
                }
            }
            for (g_364 = 0; (g_364 > (-26)); g_364--)
            {
                uint32_t l_2447 = 8UL;
                (*g_2051) = p_5.f4;
                return l_2447;
            }
        }
    }
    for (g_2206 = 1; (g_2206 < 58); g_2206 = safe_add_func_int64_t_s_s(g_2206, 6))
    {
        uint32_t **l_2454 = &g_402;
        uint32_t ***l_2453[3][4][4] = {{{&l_2454,&l_2454,&l_2454,&l_2454},{&l_2454,(void*)0,&l_2454,&l_2454},{&l_2454,&l_2454,&l_2454,&l_2454},{&l_2454,&l_2454,&l_2454,&l_2454}},{{&l_2454,(void*)0,&l_2454,&l_2454},{&l_2454,&l_2454,&l_2454,&l_2454},{&l_2454,(void*)0,&l_2454,&l_2454},{&l_2454,&l_2454,&l_2454,&l_2454}},{{&l_2454,&l_2454,&l_2454,&l_2454},{&l_2454,(void*)0,&l_2454,&l_2454},{&l_2454,&l_2454,&l_2454,&l_2454},{&l_2454,(void*)0,&l_2454,&l_2454}}};
        struct S1 *l_2457 = &l_2456;
        int i, j, k;
        l_2455 = (((*g_402) && (l_2155 = (safe_mod_func_int8_t_s_s(((**l_2361) != (**l_2361)), (l_2158 = (safe_unary_minus_func_int16_t_s((-7L)))))))) , (void*)0);
        (*l_2457) = l_2456;
    }
    if ((safe_mul_func_uint8_t_u_u((((&l_2149 != (void*)0) >= ((safe_mod_func_uint16_t_u_u(((((p_6.f5 , (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((((((**g_1546) = ((safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((~(+l_2295.f0)), (!(safe_add_func_int16_t_s_s((p_6.f3 , ((safe_div_func_int8_t_s_s(((((~((safe_mul_func_int16_t_s_s(l_2340.f3, (safe_rshift_func_int16_t_s_u((l_2162[4][1] || ((void*)0 == &l_2430)), p_5.f5)))) > l_2456.f4)) , (*g_2381)) != (void*)0) | 1L), p_6.f5)) >= l_2162[4][1])), l_2456.f4))))), l_2456.f3)) | 0UL)) > 0UL) ^ p_5.f1) <= 1L) , l_2157), 0x15L)), l_2159))) , g_2488) != l_2490) , (*g_714)), 7UL)) > p_6.f3)) , p_6.f0), p_6.f6)))
    {
        for (g_353 = 0; (g_353 == 42); g_353++)
        {
            (*g_1554) = &l_2152;
        }
    }
    else
    {
        uint16_t l_2503 = 0x28D6L;
        int32_t l_2506[3];
        uint16_t l_2507 = 1UL;
        int i;
        for (i = 0; i < 3; i++)
            l_2506[i] = (-8L);
        if ((l_2503 = ((safe_mul_func_int8_t_s_s(((*g_367) ^= p_5.f1), 1L)) , ((safe_rshift_func_uint8_t_u_u((1L >= ((1UL >= 249UL) >= ((**g_1281) &= (safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(((*g_714) ^ (safe_sub_func_int16_t_s_s(l_2340.f3, p_5.f1))), p_5.f5)), p_5.f5))))), 4)) && (*g_2051)))))
        {
            int32_t l_2504[9];
            int32_t *l_2505[10][6][4] = {{{(void*)0,&l_2153,&l_2153,&g_1753},{&g_1753,&l_2152,(void*)0,&l_2155},{&l_2158,&g_1753,&l_2160,&l_2161},{&l_2161,(void*)0,&l_2161,&l_2155},{&l_2152,&l_2152,&l_2152,&l_2162[3][1]},{&l_2152,&l_2157,&g_1753,&l_2155}},{{&l_2157,&l_2153,&l_2159,&l_2157},{&l_2162[4][1],&l_2159,&l_2159,&l_2152},{&l_2157,&l_2158,&g_1753,&l_2162[4][1]},{&l_2152,&l_2162[3][0],&l_2152,(void*)0},{&l_2152,(void*)0,&l_2161,&g_1753},{&g_1753,&g_1753,&l_2159,(void*)0}},{{&l_2161,&l_2158,&l_2152,&l_2157},{&g_142,&l_2152,&l_2161,&g_1753},{(void*)0,&g_142,&l_2155,&l_2155},{&l_2153,(void*)0,&g_1753,&l_2161},{&g_37[4],&l_2155,&g_1753,&l_2152},{&g_1753,&g_1753,&l_2158,&l_2155}},{{(void*)0,&l_2159,&g_142,&g_142},{&l_2157,&l_2157,&g_1753,&g_1753},{&l_2158,&g_37[4],&g_1753,&l_2155},{(void*)0,&l_2158,&g_142,&g_1753},{&l_2153,&l_2158,&l_2155,&l_2155},{&l_2158,&g_37[4],&l_2153,&g_1753}},{{&l_2153,&l_2157,(void*)0,&g_142},{&l_2162[4][1],&l_2159,&l_2155,&l_2155},{&l_2155,&g_1753,&l_2162[4][1],&l_2152},{&l_2162[4][1],&l_2155,&l_2155,&l_2161},{&l_2162[3][0],(void*)0,&l_2160,&l_2155},{&g_1753,&g_142,(void*)0,&g_1753}},{{&l_2155,&l_2152,&l_2155,&l_2157},{&l_2161,&l_2158,&g_1753,(void*)0},{(void*)0,&g_1753,(void*)0,(void*)0},{&l_2153,&g_1753,&l_2152,&g_1753},{&l_2160,(void*)0,&l_2158,&l_2155},{&g_142,&l_2161,&l_2153,&l_2153}},{{&l_2153,&l_2153,&l_2160,&l_2152},{&l_2153,&l_2155,&l_2153,&l_2162[3][0]},{&g_142,&l_2152,&l_2158,(void*)0},{&l_2160,&l_2162[3][1],&l_2152,(void*)0},{&l_2153,&g_1753,(void*)0,&l_2153},{(void*)0,&l_2162[4][1],&g_1753,&l_2158}},{{&l_2161,&l_2153,&l_2155,&g_142},{&l_2155,&l_2155,(void*)0,&l_2158},{&g_1753,&l_2158,&l_2160,&g_1753},{&l_2162[3][0],&g_1753,&l_2155,&l_2153},{&l_2162[4][1],&l_2157,&l_2162[4][1],&l_2162[4][1]},{&l_2155,&l_2160,&l_2155,(void*)0}},{{&l_2162[4][1],(void*)0,(void*)0,&l_2162[4][1]},{&l_2153,&l_2155,&l_2153,&l_2161},{&l_2158,&g_1753,&l_2155,&l_2159},{&l_2153,&l_2153,&g_142,&l_2159},{(void*)0,&g_1753,&g_1753,&l_2161},{&l_2158,&l_2155,&g_1753,&l_2162[4][1]}},{{&l_2157,(void*)0,&g_142,(void*)0},{(void*)0,&l_2160,&l_2158,&l_2162[4][1]},{&g_1753,&l_2157,&g_1753,&l_2153},{&g_37[4],&g_1753,&g_1753,&g_1753},{&l_2153,&l_2158,&l_2155,&l_2155},{&l_2158,&g_1753,&g_1753,&l_2155}}};
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_2504[i] = 0L;
            l_2507--;
        }
        else
        {
            return l_2148;
        }
    }
    return l_2389;
}







static struct S0 func_9(struct S0 p_10)
{
    uint8_t l_24 = 1UL;
    int8_t l_29 = (-9L);
    uint8_t l_1790 = 1UL;
    uint64_t *l_1791 = &g_153;
    int32_t l_2134[6] = {1L,1L,1L,1L,1L,1L};
    struct S1 l_2135 = {4069,0x4ADBL,4,-31,190,1554};
    struct S1 *l_2136[6] = {&g_67,&l_2135,&l_2135,&g_67,&l_2135,&l_2135};
    struct S1 l_2137 = {618,0x3F73L,5,28,-318,200};
    int i;
    l_2134[2] = func_12(((safe_rshift_func_int8_t_s_s(0xB0L, (safe_lshift_func_uint8_t_u_u((0xC214F1636717B38ELL > ((*l_1791) |= (safe_rshift_func_uint8_t_u_u(l_24, (5L > ((p_10.f6 , g_11.f3) & (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_10.f5, ((((((l_29 > func_30(p_10.f2, l_29)) & 0L) == p_10.f0) , p_10.f1) != l_1790) > l_24))), p_10.f2)))))))), 0)))) == p_10.f3), g_11.f6, p_10.f5, p_10.f1, (*g_136));
    l_2137 = l_2135;
    return p_10;
}







static int32_t func_12(uint64_t p_13, int32_t p_14, uint64_t p_15, int16_t p_16, int64_t p_17)
{
    uint64_t l_1808 = 0x68A2AC830948E07BLL;
    int32_t l_1819[10][6][4] = {{{(-1L),0x03146ABBL,0x3421FDD1L,(-1L)},{0L,0x722F503CL,0L,0x3421FDD1L},{7L,0x722F503CL,0xDBE41387L,(-1L)},{0x722F503CL,0x03146ABBL,0x03146ABBL,0x722F503CL},{0L,(-1L),0x03146ABBL,0x3421FDD1L},{0x722F503CL,7L,0xDBE41387L,7L}},{{7L,0x03146ABBL,0L,7L},{0L,7L,0x3421FDD1L,0x3421FDD1L},{(-1L),(-1L),0xDBE41387L,0x722F503CL},{(-1L),0x03146ABBL,0x3421FDD1L,(-1L)},{0L,0x722F503CL,0L,0x3421FDD1L},{7L,0x722F503CL,0xDBE41387L,(-1L)}},{{0x722F503CL,0x03146ABBL,0x03146ABBL,0x722F503CL},{0L,(-1L),0x03146ABBL,0x3421FDD1L},{0x722F503CL,7L,0xDBE41387L,7L},{7L,0x03146ABBL,0L,7L},{0L,7L,0x3421FDD1L,0x3421FDD1L},{(-1L),(-1L),0xDBE41387L,0x722F503CL}},{{(-1L),0x03146ABBL,0x3421FDD1L,(-1L)},{0L,0x722F503CL,0L,0x3421FDD1L},{7L,0x722F503CL,0xDBE41387L,(-1L)},{0x722F503CL,0x03146ABBL,0x03146ABBL,0x722F503CL},{0L,(-1L),0x03146ABBL,0x3421FDD1L},{0x722F503CL,7L,0xDBE41387L,7L}},{{7L,0x03146ABBL,0L,7L},{0L,7L,0x3421FDD1L,0x3421FDD1L},{(-1L),(-1L),0xDBE41387L,0x722F503CL},{(-1L),0x03146ABBL,0x3421FDD1L,(-1L)},{0L,0x722F503CL,0L,0x3421FDD1L},{7L,0x722F503CL,0xDBE41387L,(-1L)}},{{0x722F503CL,0x03146ABBL,0x03146ABBL,0x722F503CL},{0L,(-1L),0x03146ABBL,0x3421FDD1L},{0x722F503CL,7L,0xDBE41387L,7L},{7L,0x03146ABBL,0L,7L},{0L,7L,0x3421FDD1L,0x3421FDD1L},{(-1L),(-1L),0xDBE41387L,0x722F503CL}},{{(-1L),0x03146ABBL,0x3421FDD1L,(-1L)},{0L,0x722F503CL,0L,0x3421FDD1L},{7L,0x722F503CL,0xDBE41387L,(-1L)},{0x722F503CL,0x03146ABBL,0x03146ABBL,0x722F503CL},{0L,(-1L),0x03146ABBL,0x3421FDD1L},{0x722F503CL,7L,0xDBE41387L,7L}},{{7L,0x03146ABBL,0L,7L},{0L,0x3421FDD1L,0x64B78004L,0x64B78004L},{0L,0L,(-1L),0x03146ABBL},{0L,0xDBE41387L,0x64B78004L,0L},{8L,0x03146ABBL,8L,0x64B78004L},{0x3421FDD1L,0x03146ABBL,(-1L),0L}},{{0x03146ABBL,0xDBE41387L,0xDBE41387L,0x03146ABBL},{8L,0L,0xDBE41387L,0x64B78004L},{0x03146ABBL,0x3421FDD1L,(-1L),0x3421FDD1L},{0x3421FDD1L,0xDBE41387L,8L,0x3421FDD1L},{8L,0x3421FDD1L,0x64B78004L,0x64B78004L},{0L,0L,(-1L),0x03146ABBL}},{{0L,0xDBE41387L,0x64B78004L,0L},{8L,0x03146ABBL,8L,0x64B78004L},{0x3421FDD1L,0x03146ABBL,(-1L),0L},{0x03146ABBL,0xDBE41387L,0xDBE41387L,0x03146ABBL},{8L,0L,0xDBE41387L,0x64B78004L},{0x03146ABBL,0x3421FDD1L,(-1L),0x3421FDD1L}}};
    int64_t l_1873 = 0xBBAB42626DC06E19LL;
    int64_t l_1895 = 0x104C9726D8BE3CD7LL;
    int32_t *l_1896 = &g_37[4];
    int32_t *l_1897 = &l_1819[0][4][0];
    int32_t *l_1898 = (void*)0;
    int32_t *l_1899 = &g_37[4];
    int32_t *l_1900 = &l_1819[6][4][0];
    int32_t *l_1901 = &g_37[1];
    int32_t *l_1902 = (void*)0;
    int32_t *l_1903 = &g_37[4];
    int32_t *l_1904 = &g_1753;
    int32_t *l_1905[1];
    uint16_t l_1906 = 65535UL;
    uint64_t l_1938 = 18446744073709551615UL;
    int8_t l_1939 = 0xE1L;
    int16_t *l_1940 = &g_35[1][6][0];
    int8_t * const *l_1943 = &g_367;
    uint16_t l_1965 = 65532UL;
    uint64_t l_1968 = 0xD901FB09BC2D654CLL;
    uint8_t * const **l_1982 = (void*)0;
    struct S1 l_2003 = {109,65527UL,6,15,-289,9635};
    uint64_t l_2009 = 18446744073709551612UL;
    int32_t l_2041 = 0x9BA07E4FL;
    int16_t l_2042 = 5L;
    int8_t l_2044 = 5L;
    uint8_t l_2048 = 255UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1905[i] = &g_1753;
    for (g_491 = 4; (g_491 == 4); g_491 = safe_add_func_uint32_t_u_u(g_491, 1))
    {
        uint16_t l_1832 = 0x68DEL;
        const struct S0 l_1851 = {156,25640,1UL,2554,10,0x7B1D9430L,39};
        uint64_t l_1855 = 0x5747E199C09D217FLL;
        int32_t l_1874[5];
        int64_t l_1875[4];
        int32_t l_1881 = 0L;
        int32_t *l_1890 = &l_1819[6][4][0];
        int32_t *l_1891[6] = {&l_1874[3],&l_1874[3],&l_1874[3],&l_1874[3],&l_1874[3],&l_1874[3]};
        int i;
        for (i = 0; i < 5; i++)
            l_1874[i] = (-1L);
        for (i = 0; i < 4; i++)
            l_1875[i] = 0xD069C1ADD00B5BE4LL;
        for (g_1150 = 0; (g_1150 <= 6); g_1150 += 1)
        {
            int8_t l_1807 = 0x8AL;
            struct S1 l_1809 = {4782,0x1B44L,7,-58,-256,4793};
            int32_t l_1836[9][8] = {{0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L},{0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L},{0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L},{0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L},{0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L},{0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L},{0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L},{0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L},{0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L,0xC1DBBA6DL,1L}};
            int32_t l_1876 = 1L;
            int16_t l_1877 = 0xB682L;
            int32_t l_1878 = 0x978A16B7L;
            int32_t l_1879 = 0x84C6F3C2L;
            int32_t l_1880 = 0x8F22BD76L;
            int32_t l_1882[10][8] = {{8L,0xED922907L,0L,0xED922907L,8L,(-1L),0L,(-1L)},{8L,(-1L),0L,(-1L),8L,0xED922907L,0L,0xED922907L},{8L,0xED922907L,0L,0xED922907L,8L,(-1L),0L,(-1L)},{8L,(-1L),0L,(-1L),8L,0xED922907L,0L,0xED922907L},{8L,0xED922907L,0L,0xED922907L,8L,(-1L),0L,(-1L)},{8L,(-1L),0L,(-1L),8L,0xED922907L,0L,0xED922907L},{8L,0xED922907L,0L,0xED922907L,8L,(-1L),0L,(-1L)},{8L,(-1L),0L,(-1L),8L,0xED922907L,0L,0xED922907L},{8L,0xED922907L,0L,0xED922907L,8L,(-1L),0L,(-1L)},{8L,(-1L),0L,(-1L),8L,0xED922907L,0L,0xED922907L}};
            int i, j;
            for (g_304 = 1; (g_304 <= 6); g_304 += 1)
            {
                int32_t l_1794 = 0L;
                struct S0 l_1844 = {20,19322,1UL,12763,89,0x395A91A8L,43};
                int i, j;
                if (l_1794)
                {
                    int32_t l_1797 = 0x8C87F91DL;
                    int i, j;
                    g_128[g_1150][g_1150] = func_38((p_15 , (safe_add_func_uint16_t_u_u((p_13 & ((p_16 ^ l_1797) | (((*g_714) = (g_11.f1 , (g_1035.f0 > (safe_rshift_func_uint8_t_u_u(((~(safe_mod_func_int32_t_s_s((((-10L) == (((l_1808 = ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((*g_714) & ((p_16 && p_17) != p_15)) < (***g_1545)), p_13)), l_1807)) >= p_14)) <= (*g_402)) , 0xEED13A56DE025767LL)) < (-6L)), p_14))) && p_16), 4))))) | (-1L)))), p_16))), l_1797, l_1809, l_1809.f4);
                }
                else
                {
                    uint64_t *l_1818 = (void*)0;
                    uint64_t *l_1820 = &l_1808;
                    int32_t l_1831 = 0xAFF2641AL;
                    struct S0 l_1837[5] = {{328,28258,9UL,6055,33,1L,329},{328,28258,9UL,6055,33,1L,329},{328,28258,9UL,6055,33,1L,329},{328,28258,9UL,6055,33,1L,329},{328,28258,9UL,6055,33,1L,329}};
                    int i;
                    if (((safe_add_func_uint64_t_u_u((l_1809.f3 ^= ((p_16 != (*g_367)) && (g_152--))), (((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_s((((p_15 ^ p_16) != (((*g_136) && ((*l_1820)++)) , ((1UL & p_13) , (safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_div_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(((((g_534 = &g_334[1]) != (void*)0) , l_1831) ^ 0xC054L), p_17)), p_14)) == (-10L)), l_1809.f1)) | 0x1FL), l_1832))))) == 0x89AD02766DD626B2LL), p_13)) != p_14) | l_1819[2][2][2]), p_16)) | 0xC0BBL) & l_1832))) && (-1L)))
                    {
                        const uint64_t l_1833 = 7UL;
                        int32_t *l_1852 = &g_1753;
                        int32_t *l_1853 = &g_37[4];
                        int32_t *l_1854[4][3] = {{&l_1819[6][4][0],&l_1819[6][4][0],&l_1819[6][4][0]},{&g_142,&g_142,&g_142},{&l_1819[6][4][0],&l_1819[6][4][0],&l_1819[6][4][0]},{&g_142,&g_142,&g_142}};
                        int i, j;
                        (*g_1554) = func_38(((&l_1807 == (void*)0) , 1UL), l_1833, (p_16 , l_1809), ((**g_1546) &= l_1832));
                        (*g_972) |= (0xB9C19D8E4A0FB747LL != ((safe_sub_func_int32_t_s_s(((((**g_135) = ((l_1836[8][6] |= (*g_1427)) | ((l_1837[0] , (safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((l_1844 , ((*g_714) = (safe_div_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s((**g_135), (****g_335))) , (safe_div_func_uint64_t_u_u((*g_1427), (****g_335)))) || ((*g_367) = (((l_1851 , p_15) <= (*g_402)) >= 65532UL))), p_17)))), 9)), 0xB97DL)), 0xB9BD411FL))) > (**g_1546)))) && p_16) | l_1819[6][4][0]), 0L)) <= 0UL));
                        l_1855++;
                    }
                    else
                    {
                        int16_t *l_1860[8] = {&g_651,&g_102,&g_651,&g_651,&g_102,&g_651,&g_651,&g_102};
                        int32_t l_1861 = 0L;
                        int32_t *l_1862 = &l_1831;
                        int i;
                        (*l_1862) &= (safe_div_func_uint16_t_u_u(0x0DF4L, (l_1861 = p_16)));
                        if (p_16)
                            continue;
                    }
                    for (g_188 = (-26); (g_188 == (-4)); g_188++)
                    {
                        return p_13;
                    }
                }
                if (l_1808)
                    continue;
            }
            for (g_142 = 0; (g_142 < 13); g_142 = safe_add_func_int32_t_s_s(g_142, 9))
            {
                int32_t ** const l_1867 = &g_972;
                int32_t *l_1868 = &g_1753;
                int32_t *l_1869 = &g_37[4];
                int32_t *l_1870 = &l_1819[0][1][3];
                int32_t *l_1871 = (void*)0;
                int32_t *l_1872[10] = {&l_1819[7][1][3],&l_1819[7][1][3],&l_1819[7][1][3],&l_1819[7][1][3],&l_1819[7][1][3],&l_1819[7][1][3],&l_1819[7][1][3],&l_1819[7][1][3],&l_1819[7][1][3],&l_1819[7][1][3]};
                uint32_t l_1883 = 18446744073709551615UL;
                int i;
                (*l_1868) |= (((***g_1545) = 0xB8L) >= ((l_1867 != (void*)0) < 4294967294UL));
                ++l_1883;
                for (l_1881 = 0; (l_1881 < (-26)); --l_1881)
                {
                    for (l_1807 = (-30); (l_1807 <= 23); ++l_1807)
                    {
                        if (p_14)
                            break;
                    }
                }
                return l_1809.f3;
            }
        }
        ++g_1892;
    }
    l_1906++;
    if (((((void*)0 == &g_979[1][1][1]) || (p_13 || (safe_mul_func_int16_t_s_s(((*l_1940) = (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((p_16 , ((+(((**g_135) = (((*l_1899) |= (safe_div_func_uint8_t_u_u((+((1UL && ((safe_rshift_func_int8_t_s_s((p_17 < ((*g_714) = ((((safe_add_func_int8_t_s_s((((l_1939 = (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((((safe_add_func_uint64_t_u_u((*l_1897), (((+(safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((*g_367) = (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((void*)0 == l_1899), (-5L))), 0x60L))), 1)) | (*l_1897)), p_13))) <= p_15) < p_13))) >= (*l_1897)) >= l_1938) || p_16), 0x76L)), (*g_714)))) ^ p_13) > 0L), p_15)) != p_17) >= p_13) >= p_13))), 2)) , (*l_1904))) ^ p_17)), p_16))) && p_13)) || 6UL)) == p_14)), 2)), (-5L)))), 1UL)))) < p_17))
    {
        int8_t * const **l_1944 = (void*)0;
        int32_t l_1973 = (-1L);
        int32_t l_2012 = 0x5DD7ADE3L;
        int32_t l_2013[2];
        int16_t l_2033[4];
        int8_t l_2040[5][8][3] = {{{(-1L),0xE0L,9L},{(-1L),(-6L),0x26L},{(-3L),(-5L),0x90L},{(-1L),0x90L,0x33L},{(-1L),0xB8L,0xEDL},{0L,0x33L,9L},{0L,(-2L),(-1L)},{(-1L),0x0AL,0xB8L}},{{(-1L),(-8L),(-1L)},{(-3L),0xC4L,0x7BL},{(-1L),0x31L,0x31L},{(-1L),6L,0x90L},{6L,0x26L,0xE0L},{0xE0L,0x87L,9L},{0x27L,0x86L,(-5L)},{0x26L,0x87L,(-1L)}},{{2L,0x26L,0xE7L},{(-1L),6L,0x0AL},{(-1L),0x31L,0x27L},{0xEDL,0xC4L,0L},{0x57L,(-8L),0xC4L},{9L,0x0AL,0x5DL},{0x49L,(-2L),0x1EL},{0xE7L,0x33L,0x1EL}},{{4L,0xB8L,0x5DL},{0x7CL,0x90L,0xC4L},{0x31L,(-5L),0L},{0xA0L,(-6L),0x27L},{0x0AL,0xE0L,0x0AL},{0x7BL,0L,0xE7L},{0xE0L,4L,(-1L)},{1L,2L,(-5L)}},{{1L,0x4AL,9L},{1L,0xEDL,0xE0L},{0xE0L,0x7CL,0x90L},{0x7BL,(-1L),0x31L},{0x0AL,9L,0x7BL},{0xA0L,0x9BL,(-1L)},{0x31L,(-1L),0xB8L},{0x7CL,0x7BL,(-1L)}}};
        int64_t l_2043 = 0xC345FE46C2E7CCC8LL;
        uint16_t l_2045 = 7UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2013[i] = 1L;
        for (i = 0; i < 4; i++)
            l_2033[i] = (-3L);
        if ((1L >= ((g_1945 = l_1943) != ((*g_978) = (*g_978)))))
        {
            uint32_t l_1947[5][8][3] = {{{0UL,18446744073709551608UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551613UL,1UL},{1UL,1UL,1UL},{1UL,18446744073709551608UL,1UL},{18446744073709551615UL,0UL,0x7422CCD9L},{1UL,0xACE2616CL,0x28A68F55L},{1UL,0x8711652BL,6UL},{18446744073709551615UL,0x389319D0L,0x0439B598L}},{{1UL,0xEA3A638CL,18446744073709551615UL},{1UL,1UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551613UL,1UL},{1UL,1UL,1UL},{1UL,18446744073709551608UL,1UL},{18446744073709551615UL,0UL,0x7422CCD9L},{1UL,0xACE2616CL,0x28A68F55L},{1UL,0x8711652BL,6UL}},{{18446744073709551615UL,0x389319D0L,0x0439B598L},{1UL,0xEA3A638CL,18446744073709551615UL},{1UL,1UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551613UL,1UL},{1UL,1UL,1UL},{1UL,18446744073709551608UL,1UL},{18446744073709551615UL,0UL,0x7422CCD9L},{1UL,0xACE2616CL,0x28A68F55L}},{{1UL,0x8711652BL,6UL},{18446744073709551615UL,0x389319D0L,0x0439B598L},{1UL,0xEA3A638CL,18446744073709551615UL},{1UL,1UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551613UL,1UL},{1UL,1UL,1UL},{1UL,18446744073709551608UL,1UL},{18446744073709551615UL,0UL,0x7422CCD9L}},{{1UL,0xACE2616CL,0x28A68F55L},{1UL,0x8711652BL,6UL},{18446744073709551615UL,0x389319D0L,0x0439B598L},{1UL,0xEA3A638CL,18446744073709551615UL},{1UL,1UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551613UL,1UL},{1UL,1UL,1UL},{1UL,18446744073709551608UL,1UL}}};
            struct S1 **l_1951 = &g_334[8];
            int64_t **** const *l_1961 = (void*)0;
            const int64_t * const l_1980 = &g_1711;
            const int64_t * const *l_1979 = &l_1980;
            const int64_t * const **l_1978[10][4][6] = {{{(void*)0,(void*)0,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,(void*)0,(void*)0},{(void*)0,&l_1979,&l_1979,(void*)0,(void*)0,(void*)0}},{{&l_1979,(void*)0,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,(void*)0,&l_1979,&l_1979,(void*)0,&l_1979},{&l_1979,&l_1979,(void*)0,&l_1979,(void*)0,&l_1979}},{{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,(void*)0},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,(void*)0,(void*)0,(void*)0,(void*)0,&l_1979},{(void*)0,(void*)0,&l_1979,&l_1979,&l_1979,&l_1979}},{{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,(void*)0,&l_1979}},{{&l_1979,&l_1979,&l_1979,&l_1979,(void*)0,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979}},{{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,(void*)0,&l_1979,&l_1979,(void*)0,&l_1979},{&l_1979,(void*)0,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979}},{{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,(void*)0,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,(void*)0,&l_1979}},{{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979}},{{&l_1979,(void*)0,&l_1979,&l_1979,(void*)0,&l_1979},{&l_1979,(void*)0,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979}},{{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,(void*)0,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,(void*)0,&l_1979},{&l_1979,&l_1979,&l_1979,&l_1979,&l_1979,&l_1979}}};
            const int64_t * const ***l_1977 = &l_1978[8][3][1];
            const int64_t * const ****l_1976 = &l_1977;
            const uint8_t *l_1985[6];
            const uint8_t **l_1984[9][9][3] = {{{&l_1985[0],&l_1985[0],&l_1985[0]},{&l_1985[0],&l_1985[2],&l_1985[3]},{&l_1985[0],&l_1985[3],&l_1985[1]},{(void*)0,(void*)0,(void*)0},{&l_1985[0],&l_1985[0],&l_1985[0]},{(void*)0,&l_1985[0],&l_1985[4]},{&l_1985[0],(void*)0,(void*)0},{&l_1985[0],&l_1985[0],&l_1985[0]},{&l_1985[0],(void*)0,(void*)0}},{{(void*)0,&l_1985[0],&l_1985[2]},{&l_1985[2],&l_1985[5],&l_1985[0]},{&l_1985[0],&l_1985[0],(void*)0},{(void*)0,(void*)0,&l_1985[4]},{&l_1985[0],&l_1985[5],&l_1985[0]},{&l_1985[0],(void*)0,&l_1985[0]},{&l_1985[0],&l_1985[4],&l_1985[0]},{&l_1985[0],&l_1985[1],(void*)0},{(void*)0,&l_1985[0],&l_1985[0]}},{{&l_1985[0],(void*)0,&l_1985[0]},{&l_1985[0],(void*)0,&l_1985[0]},{&l_1985[5],&l_1985[1],&l_1985[4]},{&l_1985[0],(void*)0,(void*)0},{&l_1985[0],&l_1985[0],&l_1985[0]},{&l_1985[0],&l_1985[0],&l_1985[2]},{&l_1985[0],&l_1985[0],(void*)0},{&l_1985[0],(void*)0,&l_1985[0]},{&l_1985[5],&l_1985[0],&l_1985[0]}},{{&l_1985[0],&l_1985[0],&l_1985[2]},{&l_1985[0],&l_1985[0],&l_1985[5]},{(void*)0,&l_1985[4],&l_1985[0]},{&l_1985[0],&l_1985[0],(void*)0},{&l_1985[0],&l_1985[0],&l_1985[0]},{&l_1985[0],&l_1985[0],&l_1985[0]},{&l_1985[0],(void*)0,&l_1985[0]},{(void*)0,&l_1985[0],&l_1985[0]},{&l_1985[0],&l_1985[0],&l_1985[0]}},{{&l_1985[2],&l_1985[0],&l_1985[0]},{(void*)0,(void*)0,&l_1985[0]},{&l_1985[0],&l_1985[1],&l_1985[0]},{&l_1985[0],(void*)0,&l_1985[0]},{&l_1985[4],(void*)0,(void*)0},{(void*)0,&l_1985[0],&l_1985[0]},{&l_1985[0],&l_1985[1],&l_1985[5]},{(void*)0,&l_1985[4],&l_1985[2]},{&l_1985[4],(void*)0,&l_1985[0]}},{{&l_1985[0],&l_1985[5],&l_1985[0]},{&l_1985[0],(void*)0,(void*)0},{(void*)0,&l_1985[0],&l_1985[2]},{&l_1985[2],&l_1985[5],&l_1985[0]},{&l_1985[0],&l_1985[0],(void*)0},{(void*)0,(void*)0,&l_1985[4]},{&l_1985[0],&l_1985[5],&l_1985[0]},{&l_1985[0],(void*)0,&l_1985[0]},{&l_1985[0],&l_1985[4],&l_1985[0]}},{{&l_1985[0],&l_1985[1],(void*)0},{(void*)0,&l_1985[0],&l_1985[0]},{&l_1985[0],(void*)0,&l_1985[0]},{&l_1985[0],(void*)0,&l_1985[0]},{&l_1985[5],&l_1985[1],&l_1985[4]},{&l_1985[0],(void*)0,(void*)0},{&l_1985[0],&l_1985[0],&l_1985[0]},{&l_1985[0],&l_1985[0],&l_1985[2]},{&l_1985[0],&l_1985[0],(void*)0}},{{&l_1985[0],(void*)0,&l_1985[0]},{&l_1985[5],&l_1985[0],&l_1985[0]},{&l_1985[0],&l_1985[0],&l_1985[2]},{&l_1985[0],&l_1985[0],&l_1985[5]},{(void*)0,&l_1985[4],&l_1985[0]},{&l_1985[0],&l_1985[0],(void*)0},{&l_1985[0],&l_1985[0],&l_1985[0]},{&l_1985[0],&l_1985[0],&l_1985[0]},{&l_1985[0],&l_1985[0],&l_1985[0]}},{{(void*)0,(void*)0,&l_1985[0]},{&l_1985[0],(void*)0,&l_1985[0]},{&l_1985[3],&l_1985[0],&l_1985[0]},{&l_1985[0],&l_1985[0],&l_1985[0]},{&l_1985[2],(void*)0,&l_1985[2]},{&l_1985[5],(void*)0,&l_1985[0]},{&l_1985[0],&l_1985[4],&l_1985[0]},{&l_1985[4],&l_1985[0],(void*)0},{(void*)0,&l_1985[0],&l_1985[5]}}};
            const uint8_t ***l_1983 = &l_1984[0][8][2];
            uint8_t l_1990[2][5] = {{255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL}};
            int32_t l_1993[2][2] = {{1L,1L},{1L,1L}};
            int8_t l_1999 = 0x3BL;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1985[i] = &g_1039.f2;
            if ((p_14 ^ (l_1947[2][7][2]++)))
            {
                struct S1 l_1950 = {3434,0UL,6,13,474,7915};
                struct S1 ***l_1952 = &l_1951;
                (*l_1952) = (l_1950 , l_1951);
                l_1950.f3 = (-10L);
            }
            else
            {
                const int64_t * const l_1960 = (void*)0;
                const int64_t * const *l_1959 = &l_1960;
                const int64_t * const **l_1958 = &l_1959;
                const int64_t * const ***l_1957 = &l_1958;
                const int64_t * const ****l_1956 = &l_1957;
                int8_t *l_1991 = &l_1939;
                int32_t l_1992 = 7L;
                const int8_t l_1998 = 0x50L;
                uint64_t l_2004 = 0x63A27D844B7BCA5DLL;
                struct S0 *l_2007 = &g_1234;
                int32_t l_2010[10][5] = {{0x26E20210L,0x26E20210L,(-4L),0x595496A2L,(-4L)},{0x26E20210L,0x26E20210L,(-4L),0x595496A2L,(-4L)},{0x26E20210L,0x26E20210L,(-4L),0x595496A2L,(-4L)},{0x26E20210L,0x26E20210L,(-4L),0x595496A2L,(-4L)},{0x26E20210L,0x26E20210L,(-4L),0x595496A2L,(-4L)},{0x26E20210L,0x26E20210L,(-4L),0x595496A2L,(-4L)},{0x26E20210L,0x26E20210L,(-4L),0x595496A2L,(-4L)},{0x26E20210L,0x26E20210L,(-4L),0x595496A2L,(-4L)},{0x26E20210L,0x26E20210L,(-4L),0x595496A2L,(-4L)},{0x26E20210L,0x26E20210L,(-4L),0x595496A2L,(-4L)}};
                int64_t l_2025[4][8][2] = {{{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L}},{{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L}},{{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L}},{{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L},{0x1DB5C52C0F165821LL,1L}}};
                int i, j, k;
                for (g_183 = (-24); (g_183 <= (-18)); g_183++)
                {
                    struct S1 l_1955[9] = {{4535,1UL,5,13,-46,5452},{1989,65535UL,7,5,490,448},{1989,65535UL,7,5,490,448},{4535,1UL,5,13,-46,5452},{1989,65535UL,7,5,490,448},{1989,65535UL,7,5,490,448},{4535,1UL,5,13,-46,5452},{1989,65535UL,7,5,490,448},{1989,65535UL,7,5,490,448}};
                    int i;
                    (*l_1896) &= (l_1955[3] , ((((*g_1391) == ((l_1956 == (l_1961 = (void*)0)) , &p_16)) & p_13) < 18446744073709551615UL));
                    if (p_13)
                    {
                        (*l_1903) &= (safe_div_func_uint64_t_u_u((+(((p_16 && l_1965) & p_17) , ((*g_714) = (*g_714)))), ((safe_rshift_func_int16_t_s_s(l_1968, 6)) & ((++p_13) & (safe_div_func_int16_t_s_s(l_1955[3].f0, 0x57C9L))))));
                        if (l_1973)
                            continue;
                        (*l_1904) = (0x1DACL || 0L);
                        if (l_1955[3].f3)
                            continue;
                    }
                    else
                    {
                        l_1976 = &l_1957;
                    }
                }
                if (((l_1993[1][0] = ((p_15 , (l_1992 = ((+((p_17 <= (l_1982 != l_1983)) == (safe_div_func_uint8_t_u_u(p_14, ((*l_1904) = (((safe_add_func_int64_t_s_s(((((p_13 , (l_1990[1][0] & ((*l_1943) == l_1991))) , (void*)0) != (void*)0) != 0xC886L), 9L)) | 0x9532C84AL) & l_1947[0][2][2])))))) == p_16))) && 0xE5L)) ^ l_1990[1][0]))
                {
                    struct S1 l_2000 = {5677,1UL,6,-19,86,6187};
                    for (l_1895 = 24; (l_1895 > (-10)); --l_1895)
                    {
                        struct S1 *l_2001 = (void*)0;
                        struct S1 *l_2002 = &g_67;
                        l_1999 &= (safe_div_func_int16_t_s_s(l_1998, 9UL));
                        (*l_2002) = l_2000;
                        (*l_2002) = l_2003;
                    }
                    (*g_1554) = &l_1973;
                    ++l_2004;
                    l_2007 = l_2007;
                }
                else
                {
                    int32_t l_2008 = (-8L);
                    int32_t l_2011[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2011[i] = 0xFD270AC2L;
                    l_2008 = l_2008;
                    (*l_1899) = l_2009;
                    --g_2014;
                }
                for (g_11.f2 = 14; (g_11.f2 >= 24); ++g_11.f2)
                {
                    uint32_t l_2021 = 18446744073709551606UL;
                    int32_t l_2024[8][8] = {{0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)},{0L,0L,(-5L),0L,0L,(-5L),0L,0L},{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L},{0L,(-5L),(-5L),(-1L),(-5L),(-5L),(-1L),(-5L)},{(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L)},{(-5L),(-1L),(-5L),(-5L),(-1L),(-5L),(-5L),(-1L)},{(-1L),(-5L),(-5L),(-1L),(-5L),(-5L),(-1L),(-5L)},{(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L)}};
                    int64_t l_2026 = 0xF090849A84990C3CLL;
                    int i, j;
                    for (l_1992 = 0; (l_1992 <= 5); l_1992 = safe_add_func_uint8_t_u_u(l_1992, 9))
                    {
                        return l_1947[0][5][0];
                    }
                    l_2021++;
                    --g_2028;
                }
                for (p_15 = 0; (p_15 <= 18); p_15++)
                {
                    uint32_t l_2034[7][8] = {{0x0E17F733L,1UL,18446744073709551609UL,18446744073709551609UL,1UL,0x0E17F733L,0x9B8B18A4L,0x9B8B18A4L},{0x0E17F733L,1UL,18446744073709551609UL,18446744073709551609UL,1UL,0x0E17F733L,0x9B8B18A4L,0x9B8B18A4L},{0x0E17F733L,1UL,18446744073709551609UL,18446744073709551609UL,1UL,0x0E17F733L,0x9B8B18A4L,0x9B8B18A4L},{0x0E17F733L,1UL,18446744073709551609UL,18446744073709551609UL,1UL,0x0E17F733L,0x9B8B18A4L,0x9B8B18A4L},{0x0E17F733L,1UL,18446744073709551609UL,18446744073709551609UL,1UL,0x0E17F733L,0x9B8B18A4L,0x9B8B18A4L},{0x0E17F733L,1UL,18446744073709551609UL,18446744073709551609UL,1UL,0x0E17F733L,0x9B8B18A4L,0x9B8B18A4L},{0x0E17F733L,1UL,18446744073709551609UL,18446744073709551609UL,1UL,0x0E17F733L,0x9B8B18A4L,0x9B8B18A4L}};
                    int i, j;
                    for (l_2003.f1 = 0; (l_2003.f1 <= 3); l_2003.f1 += 1)
                    {
                        const uint8_t ****l_2037 = &l_1983;
                        int32_t l_2038 = 0x5F52F7ECL;
                        int32_t l_2039 = 0x83F3235EL;
                        ++l_2034[6][3];
                        (*l_2037) = &l_1984[0][8][2];
                        l_2039 ^= l_2038;
                        if (l_1947[4][3][0])
                            break;
                    }
                    if (p_16)
                        break;
                    for (g_11.f2 = 0; (g_11.f2 <= 6); g_11.f2 += 1)
                    {
                        int i;
                        return g_37[g_11.f2];
                    }
                }
            }
            l_2045++;
            --l_2048;
        }
        else
        {
            int32_t *l_2052 = &g_424;
            uint8_t ****l_2063 = &g_1545;
            uint8_t *****l_2064 = &g_1544[3];
            uint32_t l_2065 = 0x4E94FA9FL;
            uint64_t *l_2068 = &l_1938;
            if ((0xD26BC8B8L < (((*l_2052) = ((void*)0 == g_2051)) , (p_13 != (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(p_13, (l_2063 != ((*l_2064) = (void*)0)))) <= 0xDC49L), (l_1973 & l_2065))) || p_16), 0x633072FEL)) && 0x61L), l_2040[0][0][2])) >= 9UL), 2))))))
            {
                const struct S1 l_2076 = {4961,65532UL,6,-18,-194,9786};
                (*l_1903) = (safe_rshift_func_int8_t_s_s(((*g_136) | ((void*)0 != l_2068)), 7));
                (*l_1904) |= (safe_mul_func_uint8_t_u_u(0xB1L, (safe_rshift_func_uint8_t_u_u(0x4DL, ((l_2013[1] || (safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_s((l_2076 , (safe_unary_minus_func_uint64_t_u((((((**g_1945) = ((safe_sub_func_int8_t_s_s(p_13, (((*g_714) & (-1L)) <= (((safe_mod_func_int16_t_s_s((l_2076.f4 , (4294967295UL > (*l_1897))), p_16)) <= l_2065) | 0xB95FE78FL)))) || 0x63812DD28D514EF7LL)) > p_17) == (****g_335)) < 1L)))), p_14))))) ^ 0x560E5BE992D143BFLL)))));
            }
            else
            {
                (*l_1899) = (safe_lshift_func_int8_t_s_u(2L, 4));
            }
        }
    }
    else
    {
        uint64_t l_2087[4][3] = {{0x99B0BCF61366E2C4LL,0xCF8C3DAD0BAEE16ELL,0xCF8C3DAD0BAEE16ELL},{0x25DA633836DABD80LL,18446744073709551609UL,18446744073709551609UL},{0x99B0BCF61366E2C4LL,0xCF8C3DAD0BAEE16ELL,0xCF8C3DAD0BAEE16ELL},{0x25DA633836DABD80LL,18446744073709551609UL,18446744073709551609UL}};
        int32_t l_2102[7];
        const uint64_t l_2118[3][3] = {{0UL,0UL,0UL},{1UL,1UL,1UL},{0UL,0UL,0UL}};
        int8_t ****l_2123 = &g_978;
        int8_t *****l_2124 = &l_2123;
        struct S1 *l_2127 = &g_67;
        int i, j;
        for (i = 0; i < 7; i++)
            l_2102[i] = 0xA0AD3F44L;
        for (g_1892 = 0; (g_1892 >= 58); ++g_1892)
        {
            uint32_t l_2086 = 4294967290UL;
            return l_2086;
        }
        --l_2087[2][0];
        for (g_2027 = 2; (g_2027 >= 0); g_2027 -= 1)
        {
            uint32_t l_2090[9][4] = {{4294967295UL,0x92DB271CL,4294967295UL,0xC8E20B3FL},{4294967295UL,0xC8E20B3FL,0xC8E20B3FL,4294967295UL},{4294967295UL,0xC8E20B3FL,4294967295UL,0xC8E20B3FL},{0xC8E20B3FL,0x92DB271CL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0xC8E20B3FL,4294967295UL},{4294967295UL,0x92DB271CL,4294967295UL,0xC8E20B3FL},{4294967295UL,0xC8E20B3FL,0xC8E20B3FL,4294967295UL},{4294967295UL,0xC8E20B3FL,4294967295UL,0xC8E20B3FL},{0xC8E20B3FL,0x92DB271CL,4294967295UL,4294967295UL}};
            uint16_t l_2093[9] = {0xE1C1L,0xEDCFL,0xEDCFL,0xE1C1L,0xEDCFL,0xEDCFL,0xE1C1L,0xEDCFL,0xEDCFL};
            int64_t *l_2113 = &g_99;
            struct S1 l_2119 = {2955,0xD9EFL,3,12,-423,3783};
            struct S1 *l_2120 = &l_2003;
            int i, j;
            (*l_1896) |= (l_2090[5][0] && (((safe_div_func_uint32_t_u_u((((**l_1943) |= l_2093[2]) | 0xBDL), p_17)) , (safe_add_func_int8_t_s_s(((((safe_add_func_int64_t_s_s(p_15, 0xF6BB9428C401F3C7LL)) <= ((safe_mod_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u((4L == ((1L < (p_13 != l_2087[2][0])) , 4294967295UL)), (*l_1897))) & 18446744073709551608UL), 2UL)) , p_17)) , p_13) == l_2087[0][1]), p_13))) > l_2093[2]));
            for (g_99 = 0; (g_99 <= 2); g_99 += 1)
            {
                uint64_t l_2103 = 8UL;
                int i, j;
                l_2103--;
                l_2102[6] ^= (safe_rshift_func_int8_t_s_s((!(safe_sub_func_int64_t_s_s(((((*l_1940) = ((safe_add_func_int32_t_s_s((248UL < ((((g_1620[(g_99 + 2)][g_99] ^ (((***g_335) = l_2113) != (void*)0)) < (((safe_add_func_uint32_t_u_u(0x4E7D6D0CL, (safe_mod_func_uint32_t_u_u((*g_402), (-1L))))) >= ((p_16 , (void*)0) == (void*)0)) || 0xF9891189L)) | l_2093[2]) <= 9L)), l_2118[1][2])) , (*l_1903))) != g_1620[(g_99 + 2)][g_99]) , p_13), p_14))), 3));
            }
            if (l_2118[1][2])
                break;
            (*l_2120) = (g_491 , l_2119);
            for (g_943 = 0; (g_943 <= 2); g_943 += 1)
            {
                if (p_16)
                    break;
            }
        }
        if ((((safe_rshift_func_uint8_t_u_s(((&g_978 != ((*l_2124) = l_2123)) || (safe_add_func_int32_t_s_s(((*l_1896) = (l_2127 != l_2127)), ((((safe_lshift_func_int8_t_s_u((!l_2118[2][1]), 7)) | ((*g_136) |= ((void*)0 != &g_1427))) || (((-1L) ^ 0x7566D79CL) == 0L)) > p_13)))), 5)) & (*g_402)) > (*g_402)))
        {
            for (l_2044 = 0; (l_2044 <= 2); l_2044 += 1)
            {
                return p_17;
            }
            return p_17;
        }
        else
        {
            int32_t l_2132[3];
            int i;
            for (i = 0; i < 3; i++)
                l_2132[i] = 0xA817FA55L;
            g_2131 = &g_335;
            return l_2132[1];
        }
    }
    return g_2133;
}







static int8_t func_30(uint16_t p_31, uint8_t p_32)
{
    int32_t *l_916[10] = {&g_142,&g_142,&g_142,&g_142,&g_142,&g_142,&g_142,&g_142,&g_142,&g_142};
    int64_t *l_1452 = &g_188;
    int16_t **l_1459[6][8] = {{&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392},{&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392},{&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392},{&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392},{&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392},{&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392,&g_1392}};
    int64_t ***l_1463 = &g_135;
    struct S0 l_1542[10][7][3] = {{{{399,26178,5UL,-18921,46,2L,344},{399,26178,5UL,-18921,46,2L,344},{21,1991,248UL,-16724,78,8L,294}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{30,9664,0x9EL,-9128,62,-1L,292},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50},{42,21325,0x8DL,318,90,1L,50}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{30,9664,0x9EL,-9128,62,-1L,292},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{115,27843,0x09L,-10045,33,0x6F572956L,213},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{42,21325,0x8DL,318,90,1L,50},{21,1991,248UL,-16724,78,8L,294}}},{{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{115,27843,0x09L,-10045,33,0x6F572956L,213},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{399,26178,5UL,-18921,46,2L,344},{399,26178,5UL,-18921,46,2L,344},{21,1991,248UL,-16724,78,8L,294}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{30,9664,0x9EL,-9128,62,-1L,292},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50},{42,21325,0x8DL,318,90,1L,50}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{30,9664,0x9EL,-9128,62,-1L,292},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{115,27843,0x09L,-10045,33,0x6F572956L,213},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}}},{{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{42,21325,0x8DL,318,90,1L,50},{21,1991,248UL,-16724,78,8L,294}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{115,27843,0x09L,-10045,33,0x6F572956L,213},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{399,26178,5UL,-18921,46,2L,344},{399,26178,5UL,-18921,46,2L,344},{21,1991,248UL,-16724,78,8L,294}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{30,9664,0x9EL,-9128,62,-1L,292},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50},{42,21325,0x8DL,318,90,1L,50}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{30,9664,0x9EL,-9128,62,-1L,292},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50}}},{{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{115,27843,0x09L,-10045,33,0x6F572956L,213},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{42,21325,0x8DL,318,90,1L,50},{21,1991,248UL,-16724,78,8L,294}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{115,27843,0x09L,-10045,33,0x6F572956L,213},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{399,26178,5UL,-18921,46,2L,344},{399,26178,5UL,-18921,46,2L,344},{21,1991,248UL,-16724,78,8L,294}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{30,9664,0x9EL,-9128,62,-1L,292},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50},{42,21325,0x8DL,318,90,1L,50}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{30,9664,0x9EL,-9128,62,-1L,292},{67,11773,1UL,-14925,95,0x634AD7DCL,5}}},{{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{115,27843,0x09L,-10045,33,0x6F572956L,213},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{42,21325,0x8DL,318,90,1L,50},{21,1991,248UL,-16724,78,8L,294}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{115,27843,0x09L,-10045,33,0x6F572956L,213},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{399,26178,5UL,-18921,46,2L,344},{399,26178,5UL,-18921,46,2L,344},{21,1991,248UL,-16724,78,8L,294}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{30,9664,0x9EL,-9128,62,-1L,292},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50},{42,21325,0x8DL,318,90,1L,50}}},{{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{30,9664,0x9EL,-9128,62,-1L,292},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{115,27843,0x09L,-10045,33,0x6F572956L,213},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{42,21325,0x8DL,318,90,1L,50},{21,1991,248UL,-16724,78,8L,294}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{115,27843,0x09L,-10045,33,0x6F572956L,213},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{399,26178,5UL,-18921,46,2L,344},{399,26178,5UL,-18921,46,2L,344},{21,1991,248UL,-16724,78,8L,294}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{30,9664,0x9EL,-9128,62,-1L,292},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}}},{{{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50},{42,21325,0x8DL,318,90,1L,50}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{30,9664,0x9EL,-9128,62,-1L,292},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{115,27843,0x09L,-10045,33,0x6F572956L,213},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{42,21325,0x8DL,318,90,1L,50},{21,1991,248UL,-16724,78,8L,294}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{115,27843,0x09L,-10045,33,0x6F572956L,213},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{399,26178,5UL,-18921,46,2L,344},{399,26178,5UL,-18921,46,2L,344},{21,1991,248UL,-16724,78,8L,294}}},{{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{30,9664,0x9EL,-9128,62,-1L,292},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50},{42,21325,0x8DL,318,90,1L,50}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{30,9664,0x9EL,-9128,62,-1L,292},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{115,27843,0x09L,-10045,33,0x6F572956L,213},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{42,21325,0x8DL,318,90,1L,50},{21,1991,248UL,-16724,78,8L,294}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{115,27843,0x09L,-10045,33,0x6F572956L,213},{67,11773,1UL,-14925,95,0x634AD7DCL,5}}},{{{399,26178,5UL,-18921,46,2L,344},{399,26178,5UL,-18921,46,2L,344},{21,1991,248UL,-16724,78,8L,294}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{30,9664,0x9EL,-9128,62,-1L,292},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50},{42,21325,0x8DL,318,90,1L,50}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{30,9664,0x9EL,-9128,62,-1L,292},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{115,27843,0x09L,-10045,33,0x6F572956L,213},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{42,21325,0x8DL,318,90,1L,50},{21,1991,248UL,-16724,78,8L,294}}},{{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{115,27843,0x09L,-10045,33,0x6F572956L,213},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{399,26178,5UL,-18921,46,2L,344},{399,26178,5UL,-18921,46,2L,344},{21,1991,248UL,-16724,78,8L,294}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{30,9664,0x9EL,-9128,62,-1L,292},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}},{{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50},{42,21325,0x8DL,318,90,1L,50}},{{199,27478,0x84L,3274,71,0xCBBD38FEL,331},{30,9664,0x9EL,-9128,62,-1L,292},{67,11773,1UL,-14925,95,0x634AD7DCL,5}},{{12,5633,0xDAL,-8922,98,0xFBBF7D9CL,164},{399,26178,5UL,-18921,46,2L,344},{42,21325,0x8DL,318,90,1L,50}},{{490,13171,0UL,-5204,111,0x9BF34FC0L,210},{115,27843,0x09L,-10045,33,0x6F572956L,213},{490,13171,0UL,-5204,111,0x9BF34FC0L,210}}}};
    uint8_t l_1549 = 0xACL;
    int32_t **l_1552 = &g_128[6][3];
    int32_t ***l_1551[10][7] = {{&l_1552,&l_1552,(void*)0,(void*)0,&l_1552,&l_1552,(void*)0},{&l_1552,&l_1552,(void*)0,&l_1552,&l_1552,(void*)0,(void*)0},{&l_1552,(void*)0,(void*)0,&l_1552,(void*)0,(void*)0,&l_1552},{&l_1552,&l_1552,&l_1552,&l_1552,&l_1552,&l_1552,&l_1552},{&l_1552,&l_1552,(void*)0,&l_1552,&l_1552,(void*)0,&l_1552},{&l_1552,&l_1552,&l_1552,&l_1552,(void*)0,(void*)0,&l_1552},{&l_1552,&l_1552,(void*)0,(void*)0,&l_1552,&l_1552,&l_1552},{&l_1552,&l_1552,(void*)0,&l_1552,&l_1552,(void*)0,&l_1552},{&l_1552,&l_1552,&l_1552,&l_1552,&l_1552,&l_1552,&l_1552},{&l_1552,&l_1552,(void*)0,(void*)0,&l_1552,(void*)0,(void*)0}};
    int16_t l_1555 = 0x2000L;
    struct S0 *****l_1560 = &g_1485;
    int32_t l_1595 = 0x72479AA8L;
    struct S1 l_1602 = {3071,65528UL,0,-27,142,2702};
    struct S1 ***l_1624 = &g_534;
    int64_t l_1686 = 0x5864507CD82D3247LL;
    int16_t l_1732 = 0xEB49L;
    uint8_t ****l_1772 = &g_1545;
    uint32_t l_1789 = 0x5C8A1E11L;
    int i, j, k;
    for (p_32 = 26; (p_32 > 42); p_32 = safe_add_func_int16_t_s_s(p_32, 8))
    {
        const int32_t *l_36 = &g_37[4];
        int32_t *l_50 = &g_37[4];
        struct S1 l_915 = {1932,0xDEACL,0,-10,358,1076};
        struct S0 ****l_1483 = &g_672[2][7];
        struct S0 ***** const l_1482[7][10][3] = {{{&l_1483,&l_1483,&l_1483},{&l_1483,(void*)0,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,(void*)0,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,(void*)0,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,(void*)0,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,(void*)0,&l_1483}},{{&l_1483,&l_1483,&l_1483},{&l_1483,(void*)0,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,(void*)0,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,(void*)0,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,(void*)0,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,(void*)0,&l_1483}},{{&l_1483,&l_1483,&l_1483},{&l_1483,(void*)0,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,(void*)0,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483}},{{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483}},{{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483}},{{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483}},{{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483},{&l_1483,&l_1483,&l_1483}}};
        int32_t l_1514 = 8L;
        int32_t l_1523 = 0x31919361L;
        uint32_t l_1533[2][5] = {{0xD7A9B5AFL,4294967289UL,0x2911C918L,4294967289UL,0xD7A9B5AFL},{0xD7A9B5AFL,4294967289UL,0x2911C918L,4294967289UL,0xD7A9B5AFL}};
        int i, j, k;
        for (g_11.f2 = 0; (g_11.f2 <= 0); g_11.f2 += 1)
        {
            uint16_t *l_70 = (void*)0;
            uint16_t *l_71 = &g_67.f1;
            int32_t l_1419 = 0x5C30919BL;
            int32_t **l_1438 = (void*)0;
            int32_t **l_1439 = (void*)0;
            int32_t **l_1440 = &l_50;
            struct S0 **l_1460 = &g_674;
            int32_t l_1511 = 1L;
            int32_t l_1512 = 0x31268A87L;
            int32_t l_1513 = 0x6686A455L;
            int32_t l_1515 = 6L;
            int32_t l_1518 = (-8L);
            int32_t l_1519 = 0L;
            int32_t l_1522 = 0x6FF5DBCFL;
            struct S1 l_1527[7] = {{392,0x9BE0L,2,47,-459,3294},{392,0x9BE0L,2,47,-459,3294},{392,0x9BE0L,2,47,-459,3294},{392,0x9BE0L,2,47,-459,3294},{392,0x9BE0L,2,47,-459,3294},{392,0x9BE0L,2,47,-459,3294},{392,0x9BE0L,2,47,-459,3294}};
            int i;
        }
    }
    l_1549 |= p_31;
    l_1555 ^= (((p_32 <= (safe_unary_minus_func_uint32_t_u((*g_402)))) && g_188) != (g_491 = ((g_1553 = (void*)0) == (g_1554 = &g_972))));
    for (g_381 = 10; (g_381 == 25); g_381++)
    {
        uint16_t l_1565 = 2UL;
        int32_t l_1567 = 0x453F8CAAL;
        int32_t ***l_1575 = (void*)0;
        uint16_t l_1596[2][2][2] = {{{0x8FD1L,8UL},{0x8FD1L,8UL}},{{0x8FD1L,8UL},{0x8FD1L,8UL}}};
        int32_t l_1603[1];
        struct S1 ****l_1631 = &l_1624;
        int32_t l_1632 = 7L;
        struct S1 l_1642[3] = {{3079,0UL,1,7,-22,5532},{3079,0UL,1,7,-22,5532},{3079,0UL,1,7,-22,5532}};
        int8_t l_1662 = 0L;
        uint8_t *****l_1694[3];
        uint32_t l_1708[2];
        struct S0 l_1731 = {299,5526,0x91L,1777,104,0xAC438550L,278};
        uint32_t l_1786 = 4UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1603[i] = 6L;
        for (i = 0; i < 3; i++)
            l_1694[i] = &g_1544[1];
        for (i = 0; i < 2; i++)
            l_1708[i] = 0x89FE568BL;
        for (g_1286 = 0; (g_1286 <= 2); g_1286 += 1)
        {
            struct S0 *****l_1558 = (void*)0;
            const int8_t * const l_1562[6][3] = {{(void*)0,(void*)0,(void*)0},{&g_381,&g_381,&g_381},{(void*)0,(void*)0,(void*)0},{&g_381,&g_381,&g_381},{(void*)0,(void*)0,(void*)0},{&g_381,&g_381,&g_381}};
            const int8_t * const *l_1561 = &l_1562[4][2];
            struct S1 *** const l_1576 = &g_534;
            const int32_t l_1578 = (-1L);
            int64_t l_1580 = (-1L);
            int i, j;
            for (g_152 = 2; (g_152 <= 6); g_152 += 1)
            {
                struct S0 *****l_1559 = &g_1485;
                int8_t **l_1564 = &g_367;
                int8_t ***l_1563 = &l_1564;
                int i;
                l_1560 = (l_1559 = l_1558);
                l_1565 ^= (g_403[g_1286] & (1UL || (l_1561 == ((*l_1563) = ((*g_978) = (void*)0)))));
                if (p_32)
                    continue;
                (*g_673) = (void*)0;
            }
            for (p_32 = 0; (p_32 <= 2); p_32 += 1)
            {
                const int8_t l_1566[3][4] = {{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L}};
                int32_t l_1579 = 0xF7FFD4C9L;
                int i, j;
                l_1567 &= l_1566[1][1];
                if ((safe_add_func_uint8_t_u_u((18446744073709551615UL & ((safe_rshift_func_int8_t_s_u((!(safe_mul_func_uint16_t_u_u(((*g_714) = (0x3BAB1DB9L & ((l_1575 == (void*)0) & (l_1579 = ((((l_1576 != (void*)0) >= 0xDA6A80F6L) || (-4L)) != ((+l_1578) , (**g_1281))))))), l_1580))), l_1566[2][2])) | (****g_335))), 0x64L)))
                {
                    uint32_t l_1587 = 0x44392BD7L;
                    struct S1 l_1594 = {5051,65531UL,3,21,225,2641};
                    int i, j;
                    g_128[(p_32 + 2)][(p_32 + 3)] = func_38((*g_714), (safe_lshift_func_uint16_t_u_u(((((((*g_402) || 0L) , ((*g_136) > (safe_add_func_int8_t_s_s((((safe_div_func_uint16_t_u_u((g_1039.f3 < p_32), l_1587)) | (p_31 ^ (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((g_403[p_32] = ((****g_335) && (**g_135))) ^ 0UL), 2)), (-1L))))) || p_31), p_32)))) | 0x39458ABBEFE8DEFDLL) , 6UL) & l_1566[1][1]), 6)), l_1594, l_1595);
                }
                else
                {
                    (*g_1554) = (*g_1554);
                    if (l_1578)
                        continue;
                    ++l_1596[1][0][0];
                }
            }
            if (p_31)
                break;
            for (g_785 = 0; (g_785 <= 2); g_785 += 1)
            {
                uint32_t l_1599 = 18446744073709551615UL;
                struct S1 l_1600 = {252,0xBD0BL,6,-8,6,327};
                struct S1 *l_1601[3][5] = {{&l_1600,&l_1600,&l_1600,&l_1600,&l_1600},{&g_67,&l_1600,&g_67,&l_1600,&g_67},{&l_1600,&l_1600,&l_1600,&l_1600,&l_1600}};
                int i, j;
                l_1599 &= p_31;
                l_1602 = l_1600;
            }
        }
        l_1567 &= (l_1603[0] <= (0L || ((*g_367) = 0x6CL)));
        l_1567 ^= 0x19DBD616L;
        for (g_185 = 0; (g_185 <= 13); g_185 = safe_add_func_int32_t_s_s(g_185, 4))
        {
            int64_t l_1618[7];
            int32_t l_1619[1][9] = {{0x0AEF5EE0L,0x7937FD3DL,0x0AEF5EE0L,0x7937FD3DL,0x0AEF5EE0L,0x7937FD3DL,0x0AEF5EE0L,0x7937FD3DL,0x0AEF5EE0L}};
            int32_t l_1621 = 0xA1F1D02FL;
            uint8_t l_1633 = 0xF5L;
            struct S0 l_1755 = {499,7203,248UL,-6192,121,0L,53};
            int16_t l_1771 = 0xBDF4L;
            int i, j;
            for (i = 0; i < 7; i++)
                l_1618[i] = 0x5D6AFBDBC5920362LL;
        }
    }
    return p_31;
}







static int32_t * func_38(const uint16_t p_39, const int8_t p_40, struct S1 p_41, uint8_t p_42)
{
    uint64_t *l_1424 = &g_1418;
    uint64_t **l_1425 = &l_1424;
    uint64_t **l_1426 = (void*)0;
    int32_t l_1435 = 9L;
    struct S0 ***l_1436 = &g_673;
    int32_t *l_1437 = &l_1435;
    p_41.f4 = (((safe_rshift_func_int8_t_s_u(0x05L, 7)) , (p_41 , (safe_sub_func_uint16_t_u_u(p_41.f0, (0xD19E6ACC9B4BA1E5LL <= (((g_1427 = ((*l_1425) = l_1424)) != &g_153) , (((safe_add_func_int8_t_s_s(p_41.f0, (1L && (safe_mod_func_int16_t_s_s(((((!((((safe_sub_func_int16_t_s_s((p_41.f0 > 6UL), (*g_714))) || 0xF0L) < 0x2330L) > l_1435)) , l_1436) == (void*)0) & 0x889DL), p_41.f5))))) != p_39) , (*g_1427)))))))) <= l_1435);
    l_1437 = &l_1435;
    (*l_1437) = p_41.f5;
    for (g_943 = 0; g_943 < 3; g_943 += 1)
    {
        for (g_364 = 0; g_364 < 2; g_364 += 1)
        {
            for (p_41.f1 = 0; p_41.f1 < 3; p_41.f1 += 1)
            {
                g_979[g_943][g_364][p_41.f1] = &g_367;
            }
        }
    }
    return &g_142;
}







static const int64_t func_47(int32_t * p_48, const int32_t * p_49)
{
    uint8_t l_1406[1][7] = {{0x72L,0x79L,0x79L,0x72L,0x79L,0x79L,0x72L}};
    int32_t *l_1409[7][9][4] = {{{(void*)0,&g_142,&g_37[3],&g_142},{&g_37[4],&g_37[4],&g_37[4],&g_37[3]},{&g_37[2],&g_37[5],(void*)0,&g_37[3]},{(void*)0,&g_37[4],(void*)0,&g_37[2]},{&g_37[3],&g_37[3],&g_37[4],&g_142},{&g_142,(void*)0,&g_142,(void*)0},{&g_37[4],&g_37[3],&g_142,&g_142},{&g_37[2],&g_142,&g_37[2],&g_142},{(void*)0,&g_142,(void*)0,&g_37[2]}},{{&g_37[4],&g_37[3],&g_37[4],&g_142},{&g_37[3],&g_142,&g_37[4],&g_37[1]},{&g_37[4],&g_37[6],(void*)0,&g_142},{(void*)0,&g_37[5],&g_37[2],(void*)0},{&g_37[2],(void*)0,&g_142,(void*)0},{&g_37[4],&g_37[4],&g_142,&g_37[4]},{&g_142,&g_142,&g_37[4],&g_37[4]},{&g_37[3],&g_37[6],(void*)0,(void*)0},{(void*)0,&g_37[4],(void*)0,&g_142}},{{&g_37[2],&g_37[4],&g_37[4],(void*)0},{&g_37[4],&g_142,&g_37[3],(void*)0},{(void*)0,(void*)0,&g_37[4],&g_37[4]},{&g_37[4],&g_37[4],&g_142,&g_37[1]},{&g_142,&g_142,(void*)0,&g_37[3]},{(void*)0,(void*)0,&g_37[4],(void*)0},{(void*)0,(void*)0,&g_37[4],&g_37[3]},{(void*)0,&g_142,&g_142,&g_37[1]},{&g_37[3],&g_37[4],&g_37[3],&g_37[4]}},{{(void*)0,(void*)0,&g_142,(void*)0},{(void*)0,&g_142,&g_142,(void*)0},{(void*)0,&g_37[4],&g_37[1],&g_142},{&g_142,&g_37[4],&g_37[3],(void*)0},{&g_37[4],&g_37[6],&g_142,&g_37[4]},{(void*)0,&g_142,(void*)0,&g_37[4]},{&g_142,&g_37[4],(void*)0,(void*)0},{&g_37[4],(void*)0,&g_37[1],(void*)0},{&g_37[4],&g_37[5],&g_37[4],&g_142}},{{&g_37[4],&g_37[6],(void*)0,&g_37[1]},{(void*)0,&g_142,(void*)0,&g_142},{(void*)0,&g_37[3],(void*)0,(void*)0},{&g_37[4],(void*)0,(void*)0,(void*)0},{(void*)0,&g_37[6],(void*)0,&g_37[5]},{(void*)0,&g_37[3],&g_142,&g_142},{&g_37[1],&g_37[3],&g_37[4],(void*)0},{&g_142,(void*)0,(void*)0,&g_142},{&g_37[4],(void*)0,&g_142,(void*)0}},{{&g_142,&g_142,(void*)0,&g_142},{&g_37[3],&g_37[4],&g_142,&g_37[4]},{&g_37[4],&g_37[4],&g_37[1],(void*)0},{&g_37[4],(void*)0,(void*)0,&g_37[4]},{&g_37[3],(void*)0,&g_142,&g_142},{&g_142,&g_37[4],(void*)0,&g_37[5]},{&g_37[3],(void*)0,(void*)0,&g_37[5]},{&g_142,&g_37[4],&g_37[4],&g_142},{&g_37[1],(void*)0,(void*)0,&g_37[4]}},{{&g_142,(void*)0,&g_142,(void*)0},{&g_37[2],&g_37[4],&g_142,&g_37[4]},{(void*)0,&g_37[4],(void*)0,&g_142},{&g_142,&g_142,&g_142,(void*)0},{&g_37[4],(void*)0,&g_37[2],&g_142},{&g_37[3],(void*)0,(void*)0,(void*)0},{(void*)0,&g_37[3],&g_142,&g_142},{&g_37[4],&g_37[3],&g_142,&g_37[5]},{&g_142,&g_37[6],&g_142,(void*)0}}};
    int64_t l_1410 = 0xA9D9E683C9D6A309LL;
    uint64_t l_1411 = 0x4C256245A1132A0BLL;
    uint32_t l_1417[4][7] = {{0x808DCA77L,0x0606945DL,0x0606945DL,0x808DCA77L,1UL,0x808DCA77L,0x0606945DL},{0x0F8198F2L,0x0F8198F2L,0x0606945DL,0x663334D0L,0x0606945DL,0x0F8198F2L,0x0F8198F2L},{0x0F8198F2L,0x0606945DL,0x663334D0L,0x0606945DL,0x0F8198F2L,0x0F8198F2L,0x0606945DL},{0x808DCA77L,1UL,0x808DCA77L,0x0606945DL,0x0606945DL,0x808DCA77L,1UL}};
    int i, j, k;
    l_1406[0][6]--;
    --l_1411;
    (*p_48) = (safe_lshift_func_int8_t_s_s((g_544.f5 , ((*g_402) == (g_1416 == l_1417[3][6]))), 7));
    return (*g_136);
}







static const int32_t * func_51(const uint32_t p_52, struct S1 p_53, int32_t * p_54, const int16_t p_55)
{
    int32_t l_917 = (-1L);
    int32_t l_919[4] = {1L,1L,1L,1L};
    int64_t **l_932[3][5] = {{(void*)0,&g_136,&g_136,(void*)0,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,(void*)0,&g_136,&g_136,(void*)0}};
    struct S1 l_953 = {749,0x6740L,4,-35,164,3817};
    uint32_t * const l_964 = &g_869[0][3][0];
    int32_t *l_981 = (void*)0;
    uint32_t l_1029 = 0xEF1EFCFEL;
    const struct S0 *l_1034[9] = {&g_1035,(void*)0,(void*)0,&g_1035,(void*)0,(void*)0,&g_1035,(void*)0,(void*)0};
    int32_t l_1041 = 0x9B5DBD0AL;
    int32_t l_1080 = 0x9A83AF06L;
    uint32_t l_1101[8][3] = {{4294967292UL,0xBAF27AFEL,4294967292UL},{4294967292UL,0x3BCDD92AL,0xA536BD61L},{1UL,0xAC1B6297L,1UL},{0xA536BD61L,0x3BCDD92AL,4294967292UL},{4294967292UL,0xBAF27AFEL,4294967292UL},{0x82CB025EL,4294967292UL,1UL},{0x53D34050L,0x53D34050L,0xA536BD61L},{0x82CB025EL,0xA536BD61L,4294967292UL}};
    struct S0 ***l_1114 = &g_673;
    int8_t **l_1122[5][1];
    const struct S0 *l_1178 = &g_1035;
    uint16_t l_1247 = 1UL;
    const uint16_t l_1260 = 0x03ACL;
    uint8_t l_1273[2][6] = {{255UL,0x3AL,0x3AL,255UL,0x3AL,0x3AL},{255UL,0x3AL,0x3AL,255UL,0x3AL,0x3AL}};
    uint64_t l_1382[9][1] = {{18446744073709551613UL},{0x49EA9FB1C8A4F676LL},{0x49EA9FB1C8A4F676LL},{0x49EA9FB1C8A4F676LL},{0xC2B0BCF4B74EC13DLL},{0x49EA9FB1C8A4F676LL},{0x49EA9FB1C8A4F676LL},{0xC2B0BCF4B74EC13DLL},{0x49EA9FB1C8A4F676LL}};
    struct S1 ***l_1388 = &g_534;
    struct S1 ****l_1387 = &l_1388;
    int16_t *l_1390 = &g_35[0][4][0];
    int16_t **l_1389[8][4][6] = {{{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390}},{{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390}},{{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390}},{{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390}},{{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390}},{{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390}},{{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390}},{{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390},{&l_1390,&l_1390,&l_1390,&l_1390,&l_1390,&l_1390}}};
    int32_t *l_1393 = &g_37[4];
    int32_t *l_1394 = (void*)0;
    int32_t *l_1395 = &l_917;
    int32_t *l_1396 = &g_37[1];
    int32_t *l_1397 = &l_1080;
    int32_t *l_1398 = (void*)0;
    int32_t *l_1399 = &l_917;
    int32_t *l_1400 = &l_919[0];
    int32_t *l_1401[7][2][4] = {{{&l_1080,(void*)0,&l_1080,&g_142},{(void*)0,&g_37[1],&g_142,&g_142}},{{(void*)0,(void*)0,&l_1080,&g_37[1]},{&g_37[1],(void*)0,&l_1080,(void*)0}},{{(void*)0,&l_1080,&g_142,&l_1080},{(void*)0,&l_1080,&l_1080,(void*)0}},{{&l_1080,(void*)0,(void*)0,&g_37[1]},{&l_1080,(void*)0,&l_1080,&g_142}},{{(void*)0,&g_37[1],&g_142,&g_142},{(void*)0,(void*)0,&l_1080,&g_37[1]}},{{&g_37[1],(void*)0,&l_1080,(void*)0},{(void*)0,&l_1080,&g_142,&l_1080}},{{(void*)0,&l_1080,&l_1080,(void*)0},{&l_1080,(void*)0,(void*)0,&g_37[1]}}};
    int32_t l_1402 = 0xC96799C0L;
    uint64_t l_1403 = 0x2089020C44FD6BD7LL;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_1122[i][j] = &g_367;
    }
    for (g_183 = 0; (g_183 <= 7); g_183 += 1)
    {
        uint32_t l_920[10][9] = {{0xDF830E25L,0x99B7E2DAL,0x09B52156L,0x99B7E2DAL,0xDF830E25L,0xDF830E25L,0x99B7E2DAL,0x09B52156L,0x99B7E2DAL},{0xA207059BL,0x591DCE79L,0UL,0xE134F7A8L,0xF9D9D381L,0UL,0xF9D9D381L,0xE134F7A8L,0UL},{0xDF830E25L,0xDF830E25L,0x99B7E2DAL,0x09B52156L,0x99B7E2DAL,0xDF830E25L,0xDF830E25L,0x99B7E2DAL,0x09B52156L},{0UL,0x591DCE79L,0UL,0UL,0xA207059BL,0x5DE6BDFDL,0xF9D9D381L,0x5DE6BDFDL,0xA207059BL},{0x30CF1F3FL,0x99B7E2DAL,0x99B7E2DAL,0x30CF1F3FL,18446744073709551615UL,0x30CF1F3FL,0x99B7E2DAL,0x99B7E2DAL,0x30CF1F3FL},{4UL,0UL,0UL,0UL,4UL,4UL,0xA207059BL,0xE134F7A8L,0xA207059BL},{0x99B7E2DAL,18446744073709551615UL,0x09B52156L,0x09B52156L,18446744073709551615UL,0x99B7E2DAL,18446744073709551615UL,0x09B52156L,0x09B52156L},{4UL,4UL,0xA207059BL,0xE134F7A8L,0xA207059BL,4UL,4UL,0UL,0UL},{0x30CF1F3FL,18446744073709551615UL,0x30CF1F3FL,0x99B7E2DAL,0x99B7E2DAL,0x30CF1F3FL,18446744073709551615UL,0x30CF1F3FL,0x99B7E2DAL},{0UL,0UL,0xA207059BL,0x5DE6BDFDL,0xF9D9D381L,0x5DE6BDFDL,0xA207059BL,0UL,0UL}};
        int32_t l_969 = (-1L);
        int32_t l_973 = 0xC526D6A3L;
        uint64_t *l_985 = &g_153;
        int64_t ***l_1020 = (void*)0;
        int32_t l_1028 = 0xD62315CAL;
        int16_t *l_1133[9] = {&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102};
        int16_t **l_1132 = &l_1133[5];
        int32_t l_1151[5];
        uint32_t l_1152[5] = {0xF4F30593L,0xF4F30593L,0xF4F30593L,0xF4F30593L,0xF4F30593L};
        const int8_t *l_1199 = &g_381;
        uint16_t l_1201 = 1UL;
        struct S0 *l_1233 = &g_1234;
        const uint16_t *l_1316 = &g_914[1][7];
        const uint16_t **l_1315 = &l_1316;
        const uint16_t ***l_1314 = &l_1315;
        struct S1 l_1344 = {51,0UL,1,41,333,10645};
        int32_t *l_1368 = &l_919[0];
        int32_t *l_1369 = &l_1080;
        int32_t *l_1370 = &l_973;
        int32_t *l_1371 = &l_1080;
        int32_t *l_1372 = (void*)0;
        int32_t *l_1373 = &g_37[0];
        int32_t *l_1374 = &g_142;
        int32_t *l_1375 = &l_973;
        int32_t *l_1376 = &l_919[0];
        int32_t *l_1377 = &g_37[4];
        int32_t *l_1378 = (void*)0;
        int32_t *l_1379 = &l_917;
        int32_t *l_1380 = &l_917;
        int32_t *l_1381[10][10][2] = {{{(void*)0,(void*)0},{&g_142,(void*)0},{&l_919[0],&l_919[0]},{&l_919[3],&l_917},{&g_142,&l_1028},{&l_917,(void*)0},{&l_919[0],&l_917},{&l_919[0],&l_919[3]},{&l_919[0],&l_917},{&l_919[0],(void*)0}},{{&l_917,&l_1028},{&g_37[2],&l_919[0]},{(void*)0,(void*)0},{(void*)0,&g_142},{&g_37[2],&l_919[3]},{&g_142,&l_919[3]},{&g_37[2],&g_142},{(void*)0,(void*)0},{(void*)0,&l_919[0]},{&g_37[2],&l_919[3]}},{{&l_919[0],&l_919[3]},{&l_917,&l_919[0]},{(void*)0,(void*)0},{(void*)0,&l_919[0]},{&l_917,&l_919[3]},{&l_919[0],&l_919[3]},{&g_37[2],&l_919[0]},{(void*)0,(void*)0},{(void*)0,&g_142},{&g_37[2],&l_919[3]}},{{&g_142,&l_919[3]},{&g_37[2],&g_142},{(void*)0,(void*)0},{(void*)0,&l_919[0]},{&g_37[2],&l_919[3]},{&l_919[0],&l_919[3]},{&l_917,&l_919[0]},{(void*)0,(void*)0},{(void*)0,&l_919[0]},{&l_917,&l_919[3]}},{{&l_919[0],&l_919[3]},{&g_37[2],&l_919[0]},{(void*)0,(void*)0},{(void*)0,&g_142},{&g_37[2],&l_919[3]},{&g_142,&l_919[3]},{&g_37[2],&g_142},{(void*)0,(void*)0},{(void*)0,&l_919[0]},{&g_37[2],&l_919[3]}},{{&l_919[0],&l_919[3]},{&l_917,&l_919[0]},{(void*)0,(void*)0},{(void*)0,&l_919[0]},{&l_917,&l_919[3]},{&l_919[0],&l_919[3]},{&g_37[2],&l_919[0]},{(void*)0,(void*)0},{(void*)0,&g_142},{&g_37[2],&l_919[3]}},{{&g_142,&l_919[3]},{&g_37[2],&g_142},{(void*)0,(void*)0},{(void*)0,&l_919[0]},{&g_37[2],&l_919[3]},{&l_919[0],&l_919[3]},{&l_917,&l_919[0]},{(void*)0,(void*)0},{(void*)0,&l_919[0]},{&l_917,&l_919[3]}},{{&l_919[0],&l_919[3]},{&g_37[2],&l_919[0]},{(void*)0,(void*)0},{(void*)0,&g_142},{&g_37[2],&l_919[3]},{&g_142,&l_919[3]},{&g_37[2],&g_142},{(void*)0,(void*)0},{(void*)0,&l_919[0]},{&g_37[2],&l_919[3]}},{{&l_919[0],&l_919[3]},{&l_917,&l_919[0]},{(void*)0,(void*)0},{(void*)0,&l_919[0]},{&l_917,&l_919[3]},{&l_919[0],&l_919[3]},{&g_37[2],&l_919[0]},{(void*)0,(void*)0},{(void*)0,&g_142},{&g_37[2],&l_919[3]}},{{&g_142,&l_919[3]},{&g_37[2],&g_142},{(void*)0,(void*)0},{(void*)0,&l_919[0]},{&g_37[2],&l_919[3]},{&l_919[0],&l_919[3]},{&l_917,&l_919[0]},{(void*)0,(void*)0},{(void*)0,&l_919[0]},{&l_917,&l_919[3]}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1151[i] = 0x3699C358L;
        for (g_491 = 2; (g_491 <= 7); g_491 += 1)
        {
            int32_t *l_918[5][2][8] = {{{&g_37[0],(void*)0,&g_142,&g_37[6],(void*)0,(void*)0,&g_37[6],&g_142},{&g_37[0],&g_37[0],&g_37[6],&g_37[6],&g_37[0],&g_37[0],&g_142,&g_142}},{{&l_917,(void*)0,&g_37[6],&g_37[6],(void*)0,&l_917,&g_37[6],&g_142},{(void*)0,&l_917,&g_37[6],&g_142,&l_917,&l_917,&g_142,&g_37[6]}},{{(void*)0,(void*)0,&g_37[6],&g_142,(void*)0,&g_37[0],&g_142,&g_142},{&l_917,(void*)0,&g_37[6],&g_37[6],(void*)0,&l_917,&g_37[6],&g_142}},{{(void*)0,&l_917,&g_37[6],&g_142,&l_917,&l_917,&g_142,&g_37[6]},{(void*)0,(void*)0,&g_37[6],&g_142,(void*)0,&g_37[0],&g_142,&g_142}},{{&l_917,(void*)0,&g_37[6],&g_37[6],(void*)0,&l_917,&g_37[6],&g_142},{(void*)0,&l_917,&g_37[6],&g_142,&l_917,&l_917,&g_142,&g_37[6]}}};
            int i, j, k;
            ++l_920[5][8];
            for (p_53.f1 = 0; (p_53.f1 <= 7); p_53.f1 += 1)
            {
                uint32_t *l_963[3][6];
                uint16_t *l_968 = &l_953.f1;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_963[i][j] = &g_869[0][3][0];
                }
                if ((p_53.f2 >= l_920[5][8]))
                {
                    for (g_424 = 0; (g_424 <= 3); g_424 += 1)
                    {
                        int32_t **l_923 = &l_918[2][0][0];
                        int i;
                        (*l_923) = &l_919[g_424];
                        if (l_919[g_424])
                            break;
                        (*p_54) &= l_919[g_424];
                    }
                    (*p_54) = (safe_div_func_uint8_t_u_u(p_53.f0, p_53.f4));
                }
                else
                {
                    struct S1 *l_954[8][9] = {{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953},{&g_67,&g_67,&l_953,(void*)0,&l_953,&g_67,&g_67,&l_953,(void*)0},{(void*)0,&l_953,(void*)0,&l_953,&l_953,(void*)0,&l_953,(void*)0,&l_953},{&g_67,&l_953,&l_953,&g_67,&l_953,&g_67,&l_953,&l_953,&g_67},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953},{&l_953,&g_67,(void*)0,(void*)0,&l_953,&l_953,&l_953,(void*)0,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953},{&g_67,&g_67,&g_67,&l_953,&l_953,&g_67,&l_953,&g_67,&l_953}};
                    int32_t l_957 = (-1L);
                    uint8_t *l_958[3][7] = {{&g_11.f2,&g_11.f2,&g_145,&g_145,&g_11.f2,&g_11.f2,&g_145},{&g_11.f2,&g_11.f2,&g_11.f2,&g_11.f2,&g_11.f2,&g_11.f2,&g_11.f2},{&g_11.f2,&g_145,&g_145,&g_11.f2,&g_11.f2,&g_145,&g_145}};
                    uint32_t l_965 = 4294967295UL;
                    int i, j;
                    l_919[3] = (safe_mul_func_int16_t_s_s(((((safe_mul_func_uint8_t_u_u(g_869[0][3][0], p_53.f0)) & ((safe_sub_func_int8_t_s_s(((0xCE5415DD089C76B7LL && ((void*)0 != l_932[0][2])) >= (((safe_sub_func_int32_t_s_s((l_920[4][1] > ((((safe_add_func_int16_t_s_s((((safe_add_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((p_53.f4 , &p_55) != &g_102), (****g_335))), g_943)) >= g_914[1][7]) , g_544.f5), p_53.f5)) ^ g_11.f0) , 0x40L) > p_53.f3)), p_53.f4)) , p_55) , p_52)), (*g_367))) ^ 2L)) == (****g_335)) > 0UL), g_35[1][7][0]));
                    (*p_54) = ((safe_sub_func_int16_t_s_s((((((*g_674) , ((((safe_mod_func_uint32_t_u_u(((((safe_unary_minus_func_int8_t_s(((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((l_953 = l_953) , 0xAEA0L), ((*p_54) ^ (safe_mod_func_int64_t_s_s(l_957, (l_919[0] = ((****g_335) = l_957))))))), (g_145 = g_544.f4))) <= (safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((*g_367) ^ 0x97L), 0x4EACL)), g_188))))) <= l_917) , l_963[1][4]) == l_964), p_53.f5)) && 0xF779865EL) > 0x988AAC8AL) < g_185)) & 1UL) && p_53.f1) & (*g_402)), 0x8DD6L)) <= l_965);
                }
                (*p_54) ^= (((*l_968) = ((*g_714)++)) != (l_969 ^= l_953.f2));
            }
            for (g_142 = 0; (g_142 >= 0); g_142 -= 1)
            {
                int i;
                if ((*p_54))
                    break;
            }
            for (g_102 = 7; (g_102 >= 1); g_102 -= 1)
            {
                uint32_t l_982 = 0xF140A62CL;
                for (g_153 = 1; (g_153 <= 7); g_153 += 1)
                {
                    int8_t **l_977 = &g_367;
                    int8_t ***l_976[9] = {&l_977,&l_977,(void*)0,&l_977,&l_977,(void*)0,&l_977,&l_977,(void*)0};
                    int8_t ****l_975 = &l_976[8];
                    int32_t **l_980[4] = {&g_972,&g_972,&g_972,&g_972};
                    int i;
                    for (l_969 = 7; (l_969 >= 1); l_969 -= 1)
                    {
                        int32_t **l_970 = (void*)0;
                        int32_t **l_971 = &g_128[3][2];
                        g_972 = ((*l_971) = &g_142);
                        l_973 &= ((*g_972) = l_969);
                        (*g_534) = (*g_534);
                        return &g_142;
                    }
                    for (l_969 = 7; (l_969 >= 0); l_969 -= 1)
                    {
                        const int32_t *l_974 = &g_81;
                        int i;
                        if ((*p_54))
                            break;
                        return l_974;
                    }
                    (*p_54) = (((*l_975) = (void*)0) == g_978);
                    l_981 = p_54;
                }
                --l_982;
                (*g_534) = &p_53;
            }
        }
        if (((*p_54) |= (p_53.f0 <= ((*l_985) = p_53.f1))))
        {
            uint8_t *l_1000 = &g_145;
            int32_t l_1008 = (-1L);
            int64_t ** const *l_1021 = (void*)0;
            struct S0 *l_1040 = &g_11;
            uint16_t * const *l_1047 = &g_714;
            uint16_t * const **l_1046 = &l_1047;
            struct S0 ***l_1073[8][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_673,&g_673,&g_673,&g_673,&g_673},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_673,&g_673,&g_673,&g_673,&g_673},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_673,&g_673,&g_673,&g_673,&g_673},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_673,&g_673,&g_673,&g_673,&g_673}};
            int8_t ***l_1079 = &g_979[2][1][0];
            int i, j;
            if ((*p_54))
                break;
            for (g_67.f1 = 0; (g_67.f1 >= 26); g_67.f1 = safe_add_func_int8_t_s_s(g_67.f1, 1))
            {
                uint8_t l_991[8] = {252UL,252UL,252UL,252UL,252UL,252UL,252UL,252UL};
                int32_t l_1026 = 0x0E7D1BA9L;
                int32_t l_1027 = (-4L);
                const struct S0 *l_1038 = &g_1039;
                int32_t * const *l_1064 = &g_128[3][2];
                int8_t *l_1072 = &g_364;
                struct S0 *** const l_1074 = &g_673;
                int i;
                for (l_973 = 0; (l_973 == 5); l_973++)
                {
                    int32_t *l_990[4][1][9] = {{{&l_919[0],&l_919[0],(void*)0,(void*)0,(void*)0,&l_919[0],&l_919[0],(void*)0,(void*)0}},{{&g_142,(void*)0,&g_142,(void*)0,(void*)0,&g_142,(void*)0,&g_142,(void*)0}},{{&g_142,(void*)0,(void*)0,&g_142,(void*)0,&g_142,(void*)0,(void*)0,&g_142}},{{&l_919[0],(void*)0,(void*)0,(void*)0,&l_919[0],&l_919[0],(void*)0,(void*)0,(void*)0}}};
                    int32_t **l_994 = (void*)0;
                    int32_t **l_995 = &g_128[3][2];
                    int i, j, k;
                    l_991[0]++;
                    (*l_995) = p_54;
                    if (((safe_lshift_func_uint8_t_u_s(((((((**g_673) , (((*p_54) ^= (safe_rshift_func_int8_t_s_u(((&g_145 == l_1000) <= (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((+(safe_rshift_func_int8_t_s_u(l_1008, (safe_mul_func_uint16_t_u_u(p_53.f5, 0L))))), (((safe_unary_minus_func_int32_t_s(2L)) ^ (((-1L) || (p_53 , l_973)) & l_1008)) , 65534UL))), 0))), 4))) , p_53.f1)) , (void*)0) == &g_714) & (*g_714)) || l_991[1]), 4)) != 0x75L))
                    {
                        (*p_54) ^= l_991[0];
                        (*p_54) = l_969;
                    }
                    else
                    {
                        int32_t l_1024 = 7L;
                        int32_t l_1025[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1025[i] = 0x8E22FA82L;
                        l_1024 |= (g_188 , ((*p_54) & (safe_mod_func_uint32_t_u_u(0xE71AEE51L, (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_11.f6, ((*g_714) = (safe_mod_func_int8_t_s_s((((*p_54) > (l_1020 != l_1021)) ^ (safe_lshift_func_uint16_t_u_s(((g_183 & (**g_135)) <= 18446744073709551614UL), p_53.f4))), p_53.f1))))), g_126))))));
                        l_1029++;
                    }
                }
                if (l_920[7][6])
                    continue;
                for (l_973 = 5; (l_973 >= 0); l_973 -= 1)
                {
                    uint32_t l_1043 = 0x44CCD137L;
                    uint32_t *l_1085 = (void*)0;
                    int32_t l_1086 = 0L;
                    int i;
                    for (g_353 = 1; (g_353 <= 6); g_353 += 1)
                    {
                        const struct S0 *l_1033 = &g_544;
                        const struct S0 **l_1032 = &l_1033;
                        const struct S0 *l_1037 = &g_544;
                        const struct S0 **l_1036[7][1] = {{&l_1037},{&l_1037},{&l_1037},{&l_1037},{&l_1037},{&l_1037},{&l_1037}};
                        int32_t *l_1042[1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_1042[i] = &l_919[0];
                        (*p_54) &= ((l_1038 = (l_1034[5] = ((*l_1032) = (void*)0))) != l_1040);
                        l_1043--;
                        return p_54;
                    }
                    if ((((void*)0 == l_1046) && (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(l_991[g_183], ((+(safe_add_func_int32_t_s_s(((**g_135) <= (((*g_136) | (****g_335)) != (safe_lshift_func_uint8_t_u_s(0x7EL, 4)))), p_53.f5))) & p_53.f1))), 14)), p_53.f4))))
                    {
                        return &g_37[0];
                    }
                    else
                    {
                        int8_t *l_1071 = &g_381;
                        (*p_54) = (+((((safe_rshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s((p_53.f1 ^ (&g_128[5][6] != l_1064)), (safe_add_func_int8_t_s_s(((((*g_402)--) < l_973) <= ((p_53 , l_1071) == ((p_53.f4 || (*g_367)) , l_1072))), (*g_367))))) >= p_55), 8)) >= 0xAFA98A4D50797DFFLL) & 5L) <= p_52));
                    }
                    for (l_1041 = 1; (l_1041 <= 6); l_1041 += 1)
                    {
                        int i, j;
                        g_128[(l_973 + 1)][(l_1041 + 1)] = (void*)0;
                    }
                    if (((*p_54) = (((l_1073[6][0] != l_1074) || (g_1035.f4 < (safe_add_func_int16_t_s_s((((l_1086 = (((*g_402) = ((((l_1028 , &g_979[2][1][0]) == (l_1079 = l_1079)) & l_1080) && (safe_mod_func_int8_t_s_s(((((safe_sub_func_uint8_t_u_u(((((*g_402) >= (l_991[g_183] & p_55)) || 0x7AL) , 0UL), p_53.f4)) & p_52) && 0UL) && 0x7121BA45D2554C19LL), l_920[3][1])))) >= l_920[4][6])) >= 0L) || l_920[2][2]), p_53.f4)))) < (-3L))))
                    {
                        return p_54;
                    }
                    else
                    {
                        int32_t *l_1087 = &l_969;
                        int32_t *l_1088 = &l_1026;
                        int32_t *l_1089 = &l_1028;
                        int32_t *l_1090 = &l_1028;
                        int32_t *l_1091 = &l_1027;
                        int32_t *l_1092 = &l_917;
                        int32_t *l_1093 = &g_37[4];
                        int32_t *l_1094 = &l_1028;
                        int32_t *l_1095 = &g_37[3];
                        uint64_t l_1096 = 18446744073709551609UL;
                        ++l_1096;
                        return p_54;
                    }
                }
            }
            if ((safe_rshift_func_int8_t_s_u((***g_978), l_1101[2][2])))
            {
                (*p_54) &= l_919[0];
                for (g_491 = 0; (g_491 == 25); g_491 = safe_add_func_int16_t_s_s(g_491, 6))
                {
                    if ((*p_54))
                        break;
                }
                return &g_81;
            }
            else
            {
                const int32_t *l_1115 = &g_37[5];
                for (p_53.f1 = (-23); (p_53.f1 <= 6); p_53.f1++)
                {
                    const int32_t **l_1116 = &l_1115;
                    (*l_1116) = ((safe_rshift_func_int16_t_s_s(g_403[1], (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((((-10L) <= (safe_lshift_func_int8_t_s_u(l_1008, (g_624 < p_52)))) >= ((g_328[5][1] ^ ((void*)0 == l_1114)) , 0xB6L)) <= (*g_367)), 6)), p_53.f2)))) , l_1115);
                }
            }
        }
        else
        {
            uint8_t *l_1134 = &g_145;
            int32_t l_1146 = (-7L);
            uint8_t *l_1149 = &g_1150;
            struct S0 ***l_1170[7][8] = {{&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673}};
            int32_t l_1177 = (-6L);
            struct S1 l_1186 = {3177,0UL,5,0,-119,9818};
            uint64_t l_1242 = 1UL;
            const int8_t **l_1255[7][7][5] = {{{&l_1199,&l_1199,&l_1199,(void*)0,&l_1199},{&l_1199,&l_1199,(void*)0,&l_1199,&l_1199},{&l_1199,(void*)0,&l_1199,&l_1199,(void*)0},{(void*)0,&l_1199,(void*)0,(void*)0,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,(void*)0},{(void*)0,&l_1199,&l_1199,&l_1199,(void*)0},{(void*)0,(void*)0,&l_1199,(void*)0,&l_1199}},{{(void*)0,(void*)0,&l_1199,(void*)0,&l_1199},{(void*)0,&l_1199,&l_1199,&l_1199,(void*)0},{(void*)0,&l_1199,&l_1199,&l_1199,(void*)0},{&l_1199,(void*)0,&l_1199,(void*)0,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,(void*)0,&l_1199},{&l_1199,(void*)0,&l_1199,&l_1199,&l_1199}},{{(void*)0,(void*)0,&l_1199,&l_1199,(void*)0},{&l_1199,&l_1199,(void*)0,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,(void*)0},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{(void*)0,&l_1199,&l_1199,&l_1199,&l_1199}},{{&l_1199,(void*)0,&l_1199,&l_1199,&l_1199},{(void*)0,&l_1199,&l_1199,&l_1199,&l_1199},{(void*)0,(void*)0,&l_1199,(void*)0,(void*)0},{&l_1199,(void*)0,&l_1199,(void*)0,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,(void*)0,(void*)0,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,(void*)0}},{{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{(void*)0,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,(void*)0,(void*)0,&l_1199,&l_1199},{(void*)0,&l_1199,&l_1199,&l_1199,(void*)0},{(void*)0,(void*)0,&l_1199,(void*)0,&l_1199},{&l_1199,&l_1199,(void*)0,(void*)0,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199}},{{&l_1199,&l_1199,&l_1199,(void*)0,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,(void*)0,(void*)0,&l_1199,(void*)0},{&l_1199,&l_1199,(void*)0,&l_1199,&l_1199},{&l_1199,(void*)0,(void*)0,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,(void*)0},{&l_1199,&l_1199,&l_1199,(void*)0,&l_1199}},{{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{(void*)0,&l_1199,(void*)0,&l_1199,&l_1199},{(void*)0,&l_1199,&l_1199,&l_1199,&l_1199},{(void*)0,(void*)0,&l_1199,&l_1199,&l_1199},{&l_1199,(void*)0,&l_1199,&l_1199,(void*)0},{&l_1199,&l_1199,&l_1199,(void*)0,(void*)0},{&l_1199,(void*)0,(void*)0,&l_1199,&l_1199}}};
            int i, j, k;
            for (g_651 = 20; (g_651 != 4); --g_651)
            {
                int32_t **l_1123[9][2] = {{&g_128[3][2],&g_128[5][5]},{&g_128[3][2],&g_128[5][5]},{&g_128[3][2],&g_128[3][2]},{&g_128[3][2],&g_128[3][2]},{&g_128[3][2],&g_128[3][2]},{&g_128[2][0],(void*)0},{&g_128[3][2],(void*)0},{&g_128[2][0],&g_128[3][2]},{&g_128[3][2],&g_128[3][2]}};
                int i, j;
                for (l_1028 = 0; (l_1028 > (-30)); --l_1028)
                {
                    int32_t **l_1121 = &g_128[3][2];
                    (*l_1121) = p_54;
                }
                (*g_978) = l_1122[0][0];
                p_54 = p_54;
            }
            if ((p_53.f1 != (((p_53.f0 , (((((((((*p_54) , ((l_1151[3] = (safe_add_func_uint16_t_u_u((((*l_1149) ^= ((safe_sub_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(0x1A2BD8B749DF9B2DLL, 0x4EBA86C77088A3CCLL)), ((**g_673) , (l_969 &= (safe_add_func_int8_t_s_s(((void*)0 != l_1132), ((*l_1134)++))))))) <= (safe_lshift_func_int8_t_s_u(((*g_367) |= ((safe_rshift_func_int8_t_s_s((((~(((((((++(*l_985)) && (((safe_sub_func_uint8_t_u_u(((((*g_402) = 0x45529AD6L) && l_1146) < g_1147), p_53.f4)) && l_973) == 65534UL)) | 0x95B8L) <= 0x63E6L) , &l_1020) == &g_336[0]) ^ 0x591E388FL)) && l_1028) && g_1148), l_920[7][3])) <= (****g_335))), 7)))) , p_53.f4), l_920[5][8]))) , 0x5A9FL)) == (*g_714)) <= l_1152[3]) || g_35[0][3][0]) > 0xAE83115C11C31059LL) , (-2L)) || (*g_402)) | l_973)) , (****g_335)) , g_544.f6)))
            {
                int32_t l_1171 = 0x458007B5L;
                int32_t l_1176[3][8][9] = {{{0xB2A1A4D7L,4L,0L,(-7L),(-1L),1L,0x9F56CE6EL,(-2L),(-2L)},{(-1L),(-5L),9L,0x5FFC8351L,9L,(-5L),(-1L),0xE122654BL,1L},{0xAA82C1BCL,(-2L),1L,0x1FEAD804L,(-1L),1L,(-1L),(-8L),0x96EAF570L},{1L,0xAC5C7EB3L,1L,(-5L),0x76593B45L,0x39A9E1BFL,2L,0xE122654BL,1L},{0xE965948EL,0x8A5D04D4L,0x9F56CE6EL,(-8L),0xB2A1A4D7L,0xAE004CB5L,4L,(-2L),1L},{1L,0x9FB6D3C4L,0x9306F338L,0x8350664BL,0xD72B50D4L,0x8350664BL,0x9306F338L,0x9FB6D3C4L,1L},{(-1L),0x1FEAD804L,0xB2A1A4D7L,(-1L),0xE965948EL,4L,0x8A5D04D4L,0L,0x96EAF570L},{(-7L),0x39A9E1BFL,0x54A400D5L,0x964FA6BFL,0x83BCBB89L,0xEE92AF41L,0x0195E114L,0x5FFC8351L,1L}},{{(-1L),0xE965948EL,0x8A5D04D4L,0x9F56CE6EL,(-8L),0xB2A1A4D7L,0xAE004CB5L,4L,(-2L)},{1L,0x964FA6BFL,0xD72B50D4L,0xF6716F71L,0x54A400D5L,(-5L),0x54A400D5L,0xF6716F71L,0xD72B50D4L},{0xE965948EL,0xE965948EL,0xAA82C1BCL,(-2L),1L,0x1FEAD804L,(-1L),1L,(-1L)},{1L,0x39A9E1BFL,(-3L),0xA2E9CFAFL,1L,1L,1L,3L,0xE7B6A26BL},{0xAA82C1BCL,0x1FEAD804L,0xAA82C1BCL,0xB2A1A4D7L,4L,0L,(-7L),(-1L),1L},{(-1L),0x9FB6D3C4L,0xD72B50D4L,0xFC8EB1C5L,0x0195E114L,1L,0xE7B6A26BL,1L,0x0195E114L},{0xB2A1A4D7L,0x8A5D04D4L,0x8A5D04D4L,0xB2A1A4D7L,0x8DCA6523L,(-8L),1L,0x96EAF570L,(-7L)},{0x0FB75F99L,0xAC5C7EB3L,0x54A400D5L,0xA2E9CFAFL,1L,0xFC8EB1C5L,8L,(-5L),9L}},{{0x8DCA6523L,(-2L),0xB2A1A4D7L,(-2L),0x8DCA6523L,0x96EAF570L,0xAA82C1BCL,(-1L),0x8A5D04D4L},{(-3L),(-5L),0x9306F338L,0xF6716F71L,0x0195E114L,0xAC5C7EB3L,1L,0x39A9E1BFL,1L},{0x96EAF570L,4L,0x9F56CE6EL,0x9F56CE6EL,4L,0x96EAF570L,0x1FEAD804L,0x8DCA6523L,0xE965948EL},{0x83BCBB89L,(-5L),1L,0x964FA6BFL,1L,0xFC8EB1C5L,1L,5L,0xE7B6A26BL},{0L,1L,0x8DCA6523L,0x9F56CE6EL,0x8DCA6523L,1L,0L,0xB2A1A4D7L,0x96EAF570L},{1L,0xA2E9CFAFL,(-3L),0x39A9E1BFL,1L,0x8350664BL,0x76593B45L,0xFC8EB1C5L,0x54A400D5L},{0xB2A1A4D7L,(-1L),0x96EAF570L,1L,1L,0x96EAF570L,(-1L),0xB2A1A4D7L,0xC04A46D7L},{1L,0x6606A352L,0x83BCBB89L,0xFC8EB1C5L,2L,0x60EF9F88L,0x0195E114L,0xA2E9CFAFL,(-1L)}}};
                int i, j, k;
                if (((safe_rshift_func_int8_t_s_s((-7L), 1)) & p_52))
                {
                    struct S1 ** const *l_1156 = &g_534;
                    struct S1 ** const **l_1155 = &l_1156;
                    (*l_1155) = (void*)0;
                }
                else
                {
                    int16_t l_1157[9][7][4] = {{{0xB6ECL,0x37EAL,0L,0x1853L},{1L,7L,0xCF91L,(-10L)},{0x41E0L,1L,8L,0xBECEL},{0L,1L,(-1L),1L},{1L,0x771CL,0L,0xF464L},{1L,0xCF91L,6L,0xD1DEL},{0x37EAL,1L,1L,0xB591L}},{{2L,0x37EAL,0x4026L,0x3DADL},{1L,0L,(-10L),0xA216L},{4L,0x3040L,0xF3F8L,0xB020L},{0x1A04L,0x3644L,0x45EAL,3L},{(-2L),0xE905L,0L,0x2F2CL},{0x62CDL,0xB6ECL,(-1L),1L},{0xB591L,0x0BEDL,(-1L),0xE905L}},{{(-8L),0xF464L,0xB060L,2L},{1L,(-1L),0xF9D0L,0xA216L},{0x43CFL,(-1L),0xA216L,0x6EB3L},{0x18A5L,0x1A04L,(-5L),0x1853L},{0x3DADL,0x315BL,0xC645L,0x061DL},{0x4AB0L,0xCF91L,8L,0x5AA4L},{0xB591L,0xFF7CL,0x82F5L,0x7AB3L}},{{(-1L),0x771CL,7L,0x7D98L},{0xFF7CL,0xB060L,0xFF7CL,(-10L)},{0x37EAL,0x3DADL,0xF3F8L,(-9L)},{(-1L),0x1A04L,0xD1DEL,0x3DADL},{0x7D98L,0x2F2CL,0xD1DEL,1L},{(-1L),1L,0xF3F8L,(-6L)},{0x37EAL,1L,0xFF7CL,0xE905L}},{{0xFF7CL,0xE905L,7L,(-1L)},{(-1L),0x18A5L,0x82F5L,0x3E4EL},{0xB591L,3L,8L,1L},{0x4AB0L,0x3644L,0xC645L,2L},{0x3DADL,0x851AL,(-5L),1L},{0x18A5L,(-1L),0xA216L,0L},{0x43CFL,0x88BAL,0xF9D0L,0xB591L}},{{1L,0x315BL,0xB060L,0x24C1L},{(-8L),0xB060L,(-1L),0xBECEL},{0xB591L,(-2L),(-1L),8L},{0x62CDL,1L,0x62CDL,0xB020L},{1L,(-1L),1L,0x88BAL},{0x5AE9L,1L,(-1L),1L},{(-8L),0x3040L,0xB8C8L,(-1L)}},{{2L,0xB6ECL,(-9L),(-9L)},{(-1L),0xA6EFL,8L,0x6B39L},{1L,0xB020L,(-1L),0L},{2L,0x5A76L,0x62CDL,0L},{0xBECEL,0x0BEDL,0x3A59L,0xB6ECL},{0xF37FL,0x3DADL,0x5AA4L,7L},{(-10L),2L,(-1L),(-8L)}},{{1L,0x82F5L,0xF37FL,(-9L)},{3L,0x44E7L,0x1853L,0x501BL},{0x0BEDL,0xF3F8L,0x45EAL,0x45EAL},{9L,9L,0L,(-1L)},{(-10L),(-1L),0x3644L,2L},{0xF37FL,(-1L),1L,0x3644L},{1L,(-1L),1L,2L}},{{(-1L),(-1L),2L,(-1L)},{0x3040L,9L,8L,0x45EAL},{(-8L),0xF3F8L,0x4679L,0x501BL},{0x3AD2L,0x44E7L,0x1A04L,(-9L)},{0xE5A4L,0x82F5L,0xD1B9L,(-8L)},{0x5AE9L,2L,(-1L),7L},{0L,0x3DADL,1L,0xB6ECL}}};
                    int i, j, k;
                    if (l_1157[7][1][0])
                        break;
                }
                l_1177 ^= (((g_1039.f1 , ((&l_1152[3] == ((safe_mod_func_uint32_t_u_u((*g_402), ((*p_54) = (p_55 | (safe_mod_func_int32_t_s_s((((l_1152[3] || ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((4L == (l_1171 = (l_1170[0][1] != &g_673))) && ((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int64_t_s_s(1L, 0xFBFE6EB68654EE65LL)) & g_1148), l_1176[1][6][3])) >= 18446744073709551606UL)), 2)) & p_53.f5), p_53.f1)) || p_52)) == p_53.f1) , l_1146), 8UL)))))) , (void*)0)) && l_1146)) | g_11.f6) > l_1146);
            }
            else
            {
                const int32_t *l_1185 = (void*)0;
                struct S0 *l_1231[1][8] = {{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11}};
                const int8_t **l_1257 = (void*)0;
                int32_t **l_1259 = &g_128[5][5];
                int i, j;
                if (((0xF23BL > (*g_714)) == 0x5FF217B7L))
                {
                    const struct S0 **l_1179 = &l_1034[4];
                    int32_t l_1182 = 0xADFDBAAEL;
                    uint16_t *l_1183[1][5] = {{&g_67.f1,&g_67.f1,&g_67.f1,&g_67.f1,&g_67.f1}};
                    int32_t l_1184 = (-3L);
                    struct S1 *l_1187 = &l_953;
                    int i, j;
                    (*l_1179) = l_1178;
                    if ((safe_lshift_func_int16_t_s_u((l_1182 ^ (0xA6F3L == (*g_714))), (l_1184 ^= (l_1028 |= l_1152[3])))))
                    {
                        return l_1185;
                    }
                    else
                    {
                        (*p_54) = (*p_54);
                    }
                    (*l_1187) = l_1186;
                }
                else
                {
                    const int8_t **l_1200 = &l_1199;
                    int32_t l_1202 = 0xBEC02BE9L;
                    for (g_126 = (-19); (g_126 < 9); ++g_126)
                    {
                        return p_54;
                    }
                    if (((((*l_985) = g_11.f4) > (!(safe_lshift_func_int16_t_s_u(((+(p_53.f0 != ((p_53.f0 != (0xB9B207BEL < ((safe_add_func_uint8_t_u_u(((*l_1149) = (+((&g_673 == &g_673) < 1L))), ((p_53.f2 ^= ((((*l_1200) = l_1199) == l_1149) <= 0x2D759E3652FE2816LL)) > l_1201))) | 0x4DB6CF33E499BCF1LL))) < g_67.f1))) != l_1202), 10)))) <= p_53.f4))
                    {
                        int32_t *l_1217 = &l_973;
                        int32_t *l_1218 = (void*)0;
                        int32_t *l_1219 = &l_969;
                        uint16_t l_1220 = 65535UL;
                        int32_t *l_1221 = &l_919[0];
                        int32_t **l_1222 = &l_981;
                        (*p_54) = (safe_mod_func_int16_t_s_s(((*g_402) | (safe_sub_func_int16_t_s_s(0x7BA4L, l_1186.f3))), 0x8D85L));
                        (*l_1221) &= (((void*)0 != &g_714) | (p_52 > ((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((g_145 = ((g_145 , ((p_53.f0 == (((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((*g_367) = ((*p_54) > ((safe_rshift_func_uint16_t_u_u(0x2BA2L, 4)) <= (((((((l_1202 != ((*l_1219) = ((*l_1217) = (0x82195527DA3D9292LL >= p_53.f2)))) ^ p_53.f3) == p_53.f5) ^ 65529UL) != p_53.f1) == g_99) == 0xBB30L)))), 0L)) < (*g_714)), p_53.f0)) == 0xFC7C3004L) && 0xE8F80CD223BD5EDALL)) == (*g_402))) > l_1220)), 7)) || g_1147), 0x53229844D97DE608LL)) && g_81)));
                        (*l_1222) = l_1221;
                        if ((*p_54))
                            break;
                    }
                    else
                    {
                        return p_54;
                    }
                }
                for (l_1041 = (-14); (l_1041 <= (-29)); --l_1041)
                {
                    struct S1 *l_1225 = &l_953;
                    struct S0 *l_1232 = &g_11;
                    const int8_t ***l_1256 = &l_1255[1][3][4];
                    int32_t l_1258[8][3][8] = {{{0xCBD36EC1L,0x5429CCA3L,0xAD0A7532L,(-6L),0x3C9D2A1AL,0x3C346E84L,9L,0xF3C5CCBEL},{1L,1L,0x110FF805L,0x6F9601BAL,2L,0L,0x2D2B542DL,1L},{(-5L),0xCF0D72D5L,0x070F9577L,0x110FF805L,0x2CC47485L,0x2CC47485L,0x110FF805L,0x070F9577L}},{{0xC204FF04L,0xC204FF04L,9L,0xA63799B7L,0x5429CCA3L,0x070F9577L,1L,0x0BFF7DABL},{1L,0x3C9D2A1AL,0x58D33E9FL,3L,3L,0x6F9601BAL,0x3C346E84L,0x0BFF7DABL},{0x3C9D2A1AL,0L,0L,0xA63799B7L,0x5C746987L,1L,0L,0x070F9577L}},{{0x5088FD80L,0x58D33E9FL,3L,0x110FF805L,1L,0L,0xCF0D72D5L,1L},{3L,0x070F9577L,0L,0x6F9601BAL,0x0BFF7DABL,0xF3C5CCBEL,0x3C9D2A1AL,0xF3C5CCBEL},{0x110FF805L,(-6L),0x5429CCA3L,(-6L),0x110FF805L,0x806C4A4AL,0x5C746987L,2L}},{{0x3C346E84L,(-10L),(-5L),0xC204FF04L,0L,0x5088FD80L,0xF3C5CCBEL,0x58D33E9FL},{(-1L),0L,0xCF0D72D5L,0xC204FF04L,1L,0x30D2BB1DL,0x070F9577L,9L},{1L,0x5088FD80L,0x6F9601BAL,0L,(-6L),0x0BFF7DABL,1L,0x070F9577L}},{{0L,(-2L),1L,0xCBD36EC1L,0x5C746987L,0x3C346E84L,(-10L),0x110FF805L},{0xAD0A7532L,(-10L),0x2D2B542DL,0x806C4A4AL,0x806C4A4AL,0x2D2B542DL,(-10L),0xAD0A7532L},{(-2L),3L,0x806C4A4AL,(-10L),0L,9L,0x2CC47485L,0x5C746987L}},{{(-10L),0x5C746987L,0x30D2BB1DL,0L,(-10L),9L,0x3C346E84L,0x3E01D8F2L},{0x0BFF7DABL,3L,2L,0x110FF805L,0x30D2BB1DL,0x2D2B542DL,9L,0x3C9D2A1AL},{0x3E01D8F2L,(-10L),0x5429CCA3L,0x0BFF7DABL,3L,0x3C346E84L,(-2L),(-7L)}},{{0x5088FD80L,(-2L),9L,1L,0xC204FF04L,0x0BFF7DABL,0xC204FF04L,1L},{0x58494FCBL,0x5088FD80L,0x58494FCBL,0x5C746987L,0xAD0A7532L,0x30D2BB1DL,0xA63799B7L,3L},{0x6F9601BAL,0L,0x070F9577L,3L,0x3E01D8F2L,0x110FF805L,0xAD0A7532L,1L}},{{0x6F9601BAL,1L,0xCBD36EC1L,0x5429CCA3L,0xAD0A7532L,(-6L),0x3C9D2A1AL,0x3C346E84L},{0x58494FCBL,0x58D33E9FL,1L,0x2CC47485L,0xC204FF04L,3L,0x806C4A4AL,(-6L)},{0x5088FD80L,0x5429CCA3L,9L,2L,3L,(-10L),0x58494FCBL,0x58494FCBL}}};
                    int i, j, k;
                    g_972 = &l_969;
                    (*l_1225) = l_1186;
                    (*g_972) = ((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((l_1177 == ((***g_978) = (((void*)0 != &g_1150) , (0x96B9417E2ED06B64LL & (0x16EE959DE0657A44LL || ((!((l_1231[0][1] == (l_1233 = ((*g_673) = l_1232))) ^ (l_1186 , (safe_lshift_func_int8_t_s_s((***g_978), (***g_978)))))) , g_11.f3)))))), 7UL)), l_1186.f4)) && (-10L));
                    (*p_54) &= (18446744073709551615UL <= (((((safe_add_func_uint16_t_u_u((((*g_714) &= (safe_unary_minus_func_uint16_t_u(0x1413L))) , l_920[5][8]), (safe_add_func_int16_t_s_s(g_152, l_1242)))) || ((safe_mod_func_uint64_t_u_u((((safe_mod_func_int64_t_s_s(l_1247, (safe_mul_func_int16_t_s_s((((safe_unary_minus_func_uint64_t_u(((safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(l_1186.f2, (((*l_1256) = l_1255[1][3][4]) == l_1257))), (*g_402))) > 0x53A4273FE340FFE3LL))) == p_53.f3) > 0x62L), 1UL)))) | l_1258[7][1][5]) <= 7L), p_53.f1)) , (***g_978))) & p_53.f0) > 0x7735L) , l_1186.f0));
                }
                (*l_1259) = p_54;
            }
            if (l_1260)
                break;
        }
        if (((*p_54) |= l_1201))
        {
            struct S0 *l_1266 = &g_11;
            p_53.f3 ^= ((~(((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((g_11.f5 != ((**l_1114) == l_1266)), (((p_53.f4 | (safe_mul_func_uint16_t_u_u(0x3FE3L, 65535UL))) | ((safe_add_func_int32_t_s_s((l_969 ^= (safe_sub_func_int32_t_s_s(((*l_1266) , (l_1273[1][0] &= ((*p_54) = (*p_54)))), 0x0EF6C35FL))), 0xA6A1D322L)) , g_67.f4)) >= (*g_402)))), g_544.f1)) , (void*)0) != (void*)0)) | p_53.f0);
        }
        else
        {
            uint32_t l_1297 = 4294967295UL;
            int32_t l_1327 = 1L;
            uint64_t l_1328 = 18446744073709551613UL;
            for (l_973 = 0; (l_973 >= 0); l_973 -= 1)
            {
                uint8_t ***l_1277 = (void*)0;
                uint8_t *l_1280[5][4][2] = {{{&g_145,&l_1273[0][2]},{&g_145,&g_1150},{&l_1273[1][0],&g_145},{&g_1150,&l_1273[0][3]}},{{&g_11.f2,&g_1150},{&l_1273[0][2],&g_145},{&g_145,&l_1273[1][0]},{&g_11.f2,&g_145}},{{&l_1273[1][0],&g_145},{&g_11.f2,&l_1273[1][0]},{&g_145,&g_145},{&l_1273[0][2],&g_1150}},{{&g_11.f2,&l_1273[0][3]},{&g_1150,&g_145},{&l_1273[1][0],&g_1150},{&g_145,&l_1273[0][2]}},{{&g_145,&g_1150},{&l_1273[1][0],&g_145},{&g_1150,&l_1273[0][3]},{&g_11.f2,&g_1150}}};
                uint8_t **l_1279 = &l_1280[3][1][1];
                uint8_t ***l_1278 = &l_1279;
                uint8_t * const **l_1283 = (void*)0;
                uint8_t * const l_1285 = &g_1286;
                uint8_t * const *l_1284[8][9][3] = {{{&g_1282[0],&g_1282[0],&l_1285},{(void*)0,&g_1282[0],(void*)0},{&g_1282[0],&g_1282[0],&g_1282[0]},{(void*)0,(void*)0,&g_1282[0]},{&g_1282[0],(void*)0,&l_1285},{&g_1282[0],&g_1282[0],&g_1282[0]},{&l_1285,&l_1285,&g_1282[0]},{&g_1282[0],(void*)0,&g_1282[0]},{&l_1285,&g_1282[0],&l_1285}},{{&l_1285,&g_1282[0],&g_1282[0]},{&g_1282[0],&l_1285,&g_1282[0]},{(void*)0,(void*)0,&g_1282[0]},{&l_1285,&g_1282[0],&l_1285},{&l_1285,&g_1282[0],(void*)0},{&g_1282[0],&g_1282[0],&g_1282[0]},{&g_1282[0],(void*)0,&g_1282[0]},{&g_1282[0],&g_1282[0],&l_1285},{(void*)0,&g_1282[0],(void*)0}},{{&g_1282[0],&l_1285,&g_1282[0]},{&l_1285,&g_1282[0],&g_1282[0]},{&l_1285,(void*)0,&l_1285},{&l_1285,&l_1285,&g_1282[0]},{&l_1285,&g_1282[0],&g_1282[0]},{&l_1285,&l_1285,&g_1282[0]},{&l_1285,&g_1282[0],&l_1285},{&l_1285,&g_1282[0],&g_1282[0]},{&g_1282[0],&g_1282[0],&l_1285}},{{(void*)0,&l_1285,&g_1282[0]},{&g_1282[0],&l_1285,&l_1285},{&g_1282[0],&l_1285,&g_1282[0]},{&g_1282[0],&l_1285,&l_1285},{&l_1285,&g_1282[0],&g_1282[0]},{&l_1285,&g_1282[0],&l_1285},{&l_1285,&g_1282[0],&g_1282[0]},{&g_1282[0],&g_1282[0],&g_1282[0]},{&l_1285,(void*)0,&g_1282[0]}},{{&g_1282[0],&g_1282[0],&l_1285},{&l_1285,&g_1282[0],&g_1282[0]},{&g_1282[0],&g_1282[0],&g_1282[0]},{&g_1282[0],&g_1282[0],(void*)0},{&l_1285,&l_1285,&l_1285},{&l_1285,&l_1285,&g_1282[0]},{&l_1285,&l_1285,&g_1282[0]},{&l_1285,&l_1285,(void*)0},{&l_1285,&g_1282[0],&l_1285}},{{&g_1282[0],&g_1282[0],&g_1282[0]},{&g_1282[0],&g_1282[0],&l_1285},{&l_1285,&l_1285,(void*)0},{&g_1282[0],&g_1282[0],&l_1285},{&l_1285,&l_1285,(void*)0},{&g_1282[0],(void*)0,&l_1285},{&l_1285,&g_1282[0],&g_1282[0]},{&l_1285,&l_1285,&l_1285},{&l_1285,&g_1282[0],(void*)0}},{{&g_1282[0],&g_1282[0],&g_1282[0]},{&g_1282[0],(void*)0,&g_1282[0]},{&g_1282[0],&g_1282[0],&l_1285},{(void*)0,&g_1282[0],(void*)0},{&g_1282[0],&l_1285,&g_1282[0]},{&l_1285,&g_1282[0],&g_1282[0]},{&l_1285,(void*)0,&l_1285},{&l_1285,&l_1285,&g_1282[0]},{&l_1285,&g_1282[0],&g_1282[0]}},{{&l_1285,&l_1285,&g_1282[0]},{&l_1285,&g_1282[0],&l_1285},{&l_1285,&g_1282[0],&g_1282[0]},{&g_1282[0],&g_1282[0],&l_1285},{(void*)0,&l_1285,&g_1282[0]},{&g_1282[0],&l_1285,&l_1285},{&g_1282[0],&l_1285,&g_1282[0]},{&g_1282[0],&l_1285,&l_1285},{&l_1285,&g_1282[0],&g_1282[0]}}};
                uint8_t * const **l_1287 = &g_1281;
                int32_t l_1296[3][9] = {{0x70EA676FL,0x99ABC0C7L,(-3L),0x07C41AA8L,0x07C41AA8L,(-3L),0x99ABC0C7L,0x70EA676FL,(-8L)},{0xD2F789BCL,0x07C41AA8L,(-9L),0x70EA676FL,0xD2F789BCL,0x326C7E7DL,0x326C7E7DL,0xD2F789BCL,0x9B87550EL},{0x07C41AA8L,0x70EA676FL,0x07C41AA8L,0xE12C6F42L,0x326C7E7DL,(-3L),(-1L),0xFA255E5BL,0xFA255E5BL}};
                struct S1 l_1343 = {5619,0xB8BBL,1,24,-238,9135};
                int i, j, k;
            }
            (*p_54) ^= 2L;
            for (g_1150 = 0; (g_1150 > 17); g_1150 = safe_add_func_int8_t_s_s(g_1150, 7))
            {
                int32_t l_1347 = 0x6802FFEFL;
                const int64_t *l_1360 = &g_183;
                int32_t *l_1367 = &l_1028;
                if (l_1328)
                    break;
                if (l_1347)
                    continue;
                (*l_1367) = ((*p_54) = ((safe_lshift_func_uint8_t_u_u(((void*)0 != (**g_335)), ((((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((((p_53.f4 ^ (safe_add_func_int8_t_s_s(((l_1347 < p_53.f5) , 3L), ((safe_mul_func_uint8_t_u_u((((((*g_135) = (***g_335)) != l_1360) && (++(**g_1281))) , (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(0xCC90822BL, p_53.f5)), 7))), (***g_978))) < (-3L))))) || 0xAB1A6D22FBC28BC4LL) , p_53.f5) == p_53.f3), p_53.f3)) ^ (*g_714)), l_1028)), (*g_714))) || (*g_136)) | l_1344.f0) | p_52))) | (*g_402)));
            }
        }
        --l_1382[5][0];
    }
    p_53.f4 &= (((p_55 || (&g_979[2][1][2] == &g_979[2][1][0])) | ((safe_add_func_uint8_t_u_u(p_52, ((*p_54) ^ ((*g_402) = (((*l_1387) = &g_534) != (void*)0))))) ^ ((l_1389[4][1][3] == g_1391) >= p_53.f5))) , (*p_54));
    l_1403--;
    return p_54;
}







static const int8_t func_58(int64_t p_59, int32_t * p_60, int64_t p_61, int64_t p_62)
{
    struct S1 **l_340 = &g_334[8];
    struct S1 *l_342 = &g_67;
    struct S1 **l_341 = &l_342;
    int32_t **l_343 = (void*)0;
    int32_t **l_344 = &g_128[3][2];
    uint16_t *l_349 = &g_67.f1;
    uint16_t *l_352 = &g_353;
    uint16_t l_354[9][1];
    uint64_t *l_355 = &g_152;
    uint32_t *l_356 = &g_126;
    struct S0 l_362[9][5][1] = {{{{386,6731,0xBAL,244,8,0x532C6DF3L,310}},{{386,6731,0xBAL,244,8,0x532C6DF3L,310}},{{282,25244,252UL,-14356,63,0xCADB47E4L,155}},{{29,10536,255UL,13983,55,-2L,102}},{{156,9314,249UL,814,100,-5L,245}}},{{{29,10536,255UL,13983,55,-2L,102}},{{282,25244,252UL,-14356,63,0xCADB47E4L,155}},{{386,6731,0xBAL,244,8,0x532C6DF3L,310}},{{386,6731,0xBAL,244,8,0x532C6DF3L,310}},{{282,25244,252UL,-14356,63,0xCADB47E4L,155}}},{{{29,10536,255UL,13983,55,-2L,102}},{{156,9314,249UL,814,100,-5L,245}},{{29,10536,255UL,13983,55,-2L,102}},{{282,25244,252UL,-14356,63,0xCADB47E4L,155}},{{386,6731,0xBAL,244,8,0x532C6DF3L,310}}},{{{386,6731,0xBAL,244,8,0x532C6DF3L,310}},{{282,25244,252UL,-14356,63,0xCADB47E4L,155}},{{29,10536,255UL,13983,55,-2L,102}},{{156,9314,249UL,814,100,-5L,245}},{{29,10536,255UL,13983,55,-2L,102}}},{{{282,25244,252UL,-14356,63,0xCADB47E4L,155}},{{386,6731,0xBAL,244,8,0x532C6DF3L,310}},{{386,6731,0xBAL,244,8,0x532C6DF3L,310}},{{282,25244,252UL,-14356,63,0xCADB47E4L,155}},{{29,10536,255UL,13983,55,-2L,102}}},{{{156,9314,249UL,814,100,-5L,245}},{{29,10536,255UL,13983,55,-2L,102}},{{282,25244,252UL,-14356,63,0xCADB47E4L,155}},{{386,6731,0xBAL,244,8,0x532C6DF3L,310}},{{386,6731,0xBAL,244,8,0x532C6DF3L,310}}},{{{282,25244,252UL,-14356,63,0xCADB47E4L,155}},{{29,10536,255UL,13983,55,-2L,102}},{{156,9314,249UL,814,100,-5L,245}},{{29,10536,255UL,13983,55,-2L,102}},{{282,25244,252UL,-14356,63,0xCADB47E4L,155}}},{{{386,6731,0xBAL,244,8,0x532C6DF3L,310}},{{386,6731,0xBAL,244,8,0x532C6DF3L,310}},{{282,25244,252UL,-14356,63,0xCADB47E4L,155}},{{29,10536,255UL,13983,55,-2L,102}},{{156,9314,249UL,814,100,-5L,245}}},{{{29,10536,255UL,13983,55,-2L,102}},{{282,25244,252UL,-14356,63,0xCADB47E4L,155}},{{386,6731,0xBAL,244,8,0x532C6DF3L,310}},{{386,6731,0xBAL,244,8,0x532C6DF3L,310}},{{282,25244,252UL,-14356,63,0xCADB47E4L,155}}}};
    uint8_t l_374 = 0x61L;
    int16_t l_375[10];
    uint32_t *l_404 = &g_403[2];
    int32_t l_407[9] = {0xB0A5A066L,0xA01C0CB8L,0xB0A5A066L,0xA01C0CB8L,0xB0A5A066L,0xA01C0CB8L,0xB0A5A066L,0xA01C0CB8L,0xB0A5A066L};
    uint32_t l_485 = 0x2950D394L;
    int64_t ***l_487 = &g_135;
    int64_t l_498 = 1L;
    int64_t *****l_602[2][10][10] = {{{&g_335,&g_335,(void*)0,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,(void*)0,(void*)0,(void*)0,(void*)0,&g_335,&g_335,&g_335,(void*)0},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,(void*)0},{(void*)0,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{(void*)0,&g_335,(void*)0,(void*)0,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,(void*)0,&g_335,(void*)0,&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335,(void*)0,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,(void*)0,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,(void*)0,(void*)0,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335}},{{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,(void*)0,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,(void*)0,&g_335,(void*)0,(void*)0,&g_335,&g_335,&g_335,(void*)0},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,&g_335,(void*)0,(void*)0,&g_335,&g_335,&g_335,(void*)0,&g_335},{&g_335,(void*)0,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,(void*)0},{&g_335,&g_335,&g_335,&g_335,(void*)0,&g_335,&g_335,&g_335,&g_335,(void*)0},{&g_335,&g_335,&g_335,&g_335,(void*)0,&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,(void*)0,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335,(void*)0,&g_335,&g_335,&g_335,&g_335}}};
    int16_t *l_680 = &g_35[0][4][0];
    struct S0 l_684 = {181,32795,8UL,-14760,94,2L,349};
    uint32_t l_695 = 0x0CDF987AL;
    int32_t l_702 = 0xFA05B460L;
    uint64_t l_749 = 0x0259841528CBFB14LL;
    uint32_t l_870[6];
    struct S0 ****l_893 = (void*)0;
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_354[i][j] = 65535UL;
    }
    for (i = 0; i < 10; i++)
        l_375[i] = 0xB466L;
    for (i = 0; i < 6; i++)
        l_870[i] = 0x6C6F54AEL;
    (*l_341) = ((*l_340) = &g_67);
    (*l_344) = (void*)0;
    return (*g_367);
}







static int64_t func_63(const int32_t * p_64, int32_t p_65, uint16_t p_66)
{
    const uint8_t l_76 = 0UL;
    struct S1 l_77 = {3283,0x0705L,6,55,-51,11372};
    int32_t *l_78[10][7] = {{&g_37[4],&g_37[6],&g_37[5],&g_37[4],&g_37[4],&g_37[5],&g_37[6]},{(void*)0,&g_37[4],&g_37[3],&g_37[4],(void*)0,&g_37[4],&g_37[3]},{&g_37[4],&g_37[4],&g_37[5],&g_37[6],&g_37[4],&g_37[4],&g_37[6]},{&g_37[6],&g_37[4],&g_37[6],&g_37[4],&g_37[6],&g_37[4],&g_37[6]},{&g_37[4],&g_37[6],&g_37[6],&g_37[4],&g_37[4],&g_37[5],&g_37[5]},{(void*)0,&g_37[4],&g_37[3],&g_37[4],(void*)0,&g_37[4],&g_37[3]},{&g_37[4],&g_37[4],&g_37[6],&g_37[6],&g_37[4],&g_37[4],&g_37[5]},{&g_37[6],&g_37[4],&g_37[6],&g_37[4],&g_37[6],&g_37[4],&g_37[6]},{&g_37[4],&g_37[6],&g_37[5],&g_37[4],&g_37[4],&g_37[5],&g_37[6]},{(void*)0,&g_37[4],&g_37[3],&g_37[4],(void*)0,&g_37[4],&g_37[3]}};
    int32_t **l_79 = &l_78[0][5];
    const int32_t *l_80 = &g_81;
    struct S0 l_104 = {424,36997,0xA4L,-21830,67,1L,108};
    uint16_t *l_123 = &l_77.f1;
    uint16_t l_130[9][3][5] = {{{0x3071L,1UL,9UL,1UL,0xB552L},{0xB552L,4UL,0x5A1EL,1UL,0x1E33L},{7UL,3UL,65528UL,1UL,0xB552L}},{{7UL,1UL,0x64EFL,6UL,65529UL},{0xB552L,3UL,0x64EFL,65528UL,0x72C9L},{0x3071L,4UL,65528UL,6UL,0x72C9L}},{{65529UL,1UL,0x5A1EL,1UL,65529UL},{0x3071L,1UL,9UL,1UL,0xB552L},{0xB552L,4UL,0x5A1EL,5UL,1UL}},{{3UL,65535UL,0UL,0xD8A0L,0x4FADL},{3UL,5UL,0UL,65532UL,6UL},{0x4FADL,65535UL,0UL,0xDE1AL,4UL}},{{1UL,0xD0E7L,0UL,65532UL,4UL},{6UL,0xD8A0L,1UL,0xD8A0L,6UL},{1UL,0xD8A0L,0x337CL,5UL,0x4FADL}},{{0x4FADL,0xD0E7L,1UL,5UL,1UL},{3UL,65535UL,0UL,0xD8A0L,0x4FADL},{3UL,5UL,0UL,65532UL,6UL}},{{0x4FADL,65535UL,0UL,0xDE1AL,4UL},{1UL,0xD0E7L,0UL,65532UL,4UL},{6UL,0xD8A0L,1UL,0xD8A0L,6UL}},{{1UL,0xD8A0L,0x337CL,5UL,0x4FADL},{0x4FADL,0xD0E7L,1UL,5UL,1UL},{3UL,65535UL,0UL,0xD8A0L,0x4FADL}},{{3UL,5UL,0UL,65532UL,6UL},{0x4FADL,65535UL,0UL,0xDE1AL,4UL},{1UL,0xD0E7L,0UL,65532UL,4UL}}};
    uint8_t *l_177 = &g_11.f2;
    uint64_t *l_202[7] = {&g_152,&g_152,&g_152,&g_152,&g_152,&g_152,&g_152};
    int32_t l_206 = 0x5D496808L;
    int8_t l_219 = 4L;
    int8_t l_273 = 7L;
    int64_t **l_302[7][7][5] = {{{&g_136,&g_136,(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,(void*)0,&g_136,&g_136},{&g_136,&g_136,(void*)0,&g_136,&g_136},{(void*)0,&g_136,&g_136,&g_136,&g_136}},{{&g_136,(void*)0,(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,(void*)0,(void*)0,&g_136},{&g_136,&g_136,(void*)0,(void*)0,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136},{(void*)0,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136}},{{&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,(void*)0,&g_136,&g_136,&g_136},{&g_136,(void*)0,(void*)0,&g_136,&g_136},{&g_136,(void*)0,&g_136,&g_136,&g_136},{&g_136,(void*)0,(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,(void*)0},{&g_136,&g_136,&g_136,&g_136,&g_136}},{{&g_136,&g_136,&g_136,&g_136,(void*)0},{&g_136,&g_136,&g_136,&g_136,(void*)0},{(void*)0,&g_136,&g_136,&g_136,(void*)0},{(void*)0,&g_136,(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,(void*)0}},{{&g_136,&g_136,&g_136,&g_136,(void*)0},{&g_136,&g_136,(void*)0,(void*)0,&g_136},{&g_136,&g_136,&g_136,(void*)0,&g_136},{(void*)0,(void*)0,&g_136,&g_136,&g_136},{&g_136,(void*)0,&g_136,&g_136,&g_136},{(void*)0,&g_136,&g_136,(void*)0,(void*)0},{&g_136,(void*)0,&g_136,(void*)0,&g_136}},{{&g_136,&g_136,&g_136,(void*)0,(void*)0},{&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,&g_136,(void*)0,&g_136,&g_136},{&g_136,&g_136,&g_136,&g_136,(void*)0},{&g_136,&g_136,(void*)0,&g_136,(void*)0},{(void*)0,&g_136,&g_136,&g_136,&g_136},{(void*)0,&g_136,&g_136,(void*)0,&g_136}},{{&g_136,(void*)0,&g_136,(void*)0,(void*)0},{&g_136,&g_136,&g_136,&g_136,&g_136},{&g_136,(void*)0,(void*)0,&g_136,(void*)0},{&g_136,(void*)0,&g_136,(void*)0,&g_136},{&g_136,(void*)0,(void*)0,(void*)0,&g_136},{&g_136,&g_136,(void*)0,(void*)0,&g_136},{&g_136,&g_136,&g_136,&g_136,&g_136}}};
    struct S1 *l_338[10];
    uint8_t l_339 = 0x00L;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_338[i] = (void*)0;
    if ((safe_mod_func_uint16_t_u_u((((0xBD9FL | (((safe_lshift_func_int8_t_s_s(l_76, 6)) , ((l_77 , (l_77.f4 > ((g_67.f4 = (p_65 &= l_77.f1)) <= (((*l_79) = &g_37[4]) == (l_80 = (l_77 , &g_37[4])))))) || (safe_div_func_uint16_t_u_u(g_11.f2, p_65)))) , 0x1534L)) , (void*)0) != (void*)0), 0xCA85L)))
    {
        const uint16_t l_94[8] = {7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL};
        int32_t l_100 = 0x10DA34DBL;
        struct S1 l_119 = {567,0x82F8L,0,-30,502,546};
        uint8_t *l_178 = &g_145;
        const uint8_t l_204 = 0x7AL;
        int32_t l_248 = 0x84081ED5L;
        int64_t l_250[10][5][5] = {{{0xCEF8C5BBA556991DLL,0x0F248867B80CB62ALL,0xF00E5BF4506700EALL,(-8L),0xE493BE05BE547552LL},{4L,0x3EBE08290AFDDB5ELL,0x3EBE08290AFDDB5ELL,4L,0x409948576C49478BLL},{5L,(-7L),1L,0x5629B9E970FD2532LL,(-1L)},{0xA26107CED499C858LL,1L,(-9L),0xEF527235E5902A96LL,0x3EBE08290AFDDB5ELL},{0x0F248867B80CB62ALL,5L,0x5629B9E970FD2532LL,0x5629B9E970FD2532LL,5L}},{{(-1L),0x5CF9645D199DA16FLL,(-9L),4L,0x3EBE08290AFDDB5ELL},{0x2231ABC1FECEB42ALL,(-7L),0xCEF8C5BBA556991DLL,0x0F248867B80CB62ALL,0xF00E5BF4506700EALL},{4L,1L,0x7C0EDF71B5F48D63LL,0xA26107CED499C858LL,0xA26107CED499C858LL},{0x2231ABC1FECEB42ALL,(-8L),0x2231ABC1FECEB42ALL,5L,1L},{(-10L),0x8AB1B66BC57D9547LL,0x5CF9645D199DA16FLL,4L,0x8632126A534EDE82LL}},{{0xE493BE05BE547552LL,0x0F248867B80CB62ALL,0x5629B9E970FD2532LL,0xCEF8C5BBA556991DLL,0x5BD49030FC9DB44ELL},{1L,0x8632126A534EDE82LL,0x5CF9645D199DA16FLL,0x8632126A534EDE82LL,1L},{1L,(-9L),0x2231ABC1FECEB42ALL,(-7L),0xCEF8C5BBA556991DLL},{(-1L),0x3EBE08290AFDDB5ELL,0x7C0EDF71B5F48D63LL,0xEF527235E5902A96LL,0x8C51EAA54678E963LL},{0xCB941C5EEF02D27CLL,0x2231ABC1FECEB42ALL,0xCEF8C5BBA556991DLL,(-9L),0xCEF8C5BBA556991DLL}},{{0xEF527235E5902A96LL,0xEF527235E5902A96LL,0x8AB1B66BC57D9547LL,0x7C0EDF71B5F48D63LL,1L},{0xCEF8C5BBA556991DLL,0xF00E5BF4506700EALL,0x7C5E2B0FDED41F1BLL,0x5629B9E970FD2532LL,0x5BD49030FC9DB44ELL},{0x5CF9645D199DA16FLL,0x868CC2CD189FC507LL,0x8C51EAA54678E963LL,1L,0x8632126A534EDE82LL},{0x81A09870BFBD2DB2LL,0xF00E5BF4506700EALL,0xF00E5BF4506700EALL,0x81A09870BFBD2DB2LL,1L},{0x3EBE08290AFDDB5ELL,0xEF527235E5902A96LL,(-9L),1L,0xA26107CED499C858LL}},{{0x7C5E2B0FDED41F1BLL,0x2231ABC1FECEB42ALL,(-1L),0xCB941C5EEF02D27CLL,0xF00E5BF4506700EALL},{0x868CC2CD189FC507LL,0x3EBE08290AFDDB5ELL,1L,1L,0x3EBE08290AFDDB5ELL},{0x5BD49030FC9DB44ELL,(-9L),(-8L),0x81A09870BFBD2DB2LL,1L},{0x409948576C49478BLL,0x8632126A534EDE82LL,0xEF527235E5902A96LL,1L,(-9L)},{(-9L),0x0F248867B80CB62ALL,5L,0x5629B9E970FD2532LL,0x5629B9E970FD2532LL}},{{0x409948576C49478BLL,0x8AB1B66BC57D9547LL,0x409948576C49478BLL,0x7C0EDF71B5F48D63LL,(-9L)},{0x5BD49030FC9DB44ELL,(-8L),0xCB941C5EEF02D27CLL,(-9L),(-7L)},{0x868CC2CD189FC507LL,1L,0xA26107CED499C858LL,0xEF527235E5902A96LL,(-10L)},{0x7C5E2B0FDED41F1BLL,(-7L),0xCB941C5EEF02D27CLL,(-7L),0x7C5E2B0FDED41F1BLL},{0x3EBE08290AFDDB5ELL,4L,0x409948576C49478BLL,0x8632126A534EDE82LL,0xEF527235E5902A96LL}},{{0x81A09870BFBD2DB2LL,1L,5L,0xCEF8C5BBA556991DLL,(-1L)},{0x5CF9645D199DA16FLL,0x409948576C49478BLL,0xEF527235E5902A96LL,4L,0xEF527235E5902A96LL},{0xCEF8C5BBA556991DLL,0xCEF8C5BBA556991DLL,(-8L),5L,0x7C5E2B0FDED41F1BLL},{0xEF527235E5902A96LL,(-9L),1L,0xA26107CED499C858LL,(-10L)},{0xCB941C5EEF02D27CLL,0xE493BE05BE547552LL,(-1L),0x0F248867B80CB62ALL,(-7L)}},{{(-1L),(-9L),(-9L),(-1L),(-9L)},{1L,0xCEF8C5BBA556991DLL,0xF00E5BF4506700EALL,0x7C5E2B0FDED41F1BLL,0x5629B9E970FD2532LL},{1L,0x409948576C49478BLL,0x8C51EAA54678E963LL,0x5CF9645D199DA16FLL,(-9L)},{0xE493BE05BE547552LL,1L,0x7C5E2B0FDED41F1BLL,0x7C5E2B0FDED41F1BLL,1L},{(-10L),4L,0x8AB1B66BC57D9547LL,(-1L),0x3EBE08290AFDDB5ELL}},{{0x2231ABC1FECEB42ALL,(-7L),0xCEF8C5BBA556991DLL,0x0F248867B80CB62ALL,0xF00E5BF4506700EALL},{4L,1L,0x7C0EDF71B5F48D63LL,0xA26107CED499C858LL,0xA26107CED499C858LL},{0x2231ABC1FECEB42ALL,(-8L),0x2231ABC1FECEB42ALL,5L,1L},{(-10L),0x8AB1B66BC57D9547LL,0x5CF9645D199DA16FLL,4L,0x8632126A534EDE82LL},{(-7L),0xE493BE05BE547552LL,0x7C5E2B0FDED41F1BLL,0xCB941C5EEF02D27CLL,5L}},{{0x409948576C49478BLL,0xEF527235E5902A96LL,4L,0xEF527235E5902A96LL,0x409948576C49478BLL},{0xF00E5BF4506700EALL,0x81A09870BFBD2DB2LL,1L,0xCEF8C5BBA556991DLL,0xCB941C5EEF02D27CLL},{(-10L),(-9L),0x3EBE08290AFDDB5ELL,0x5CF9645D199DA16FLL,0xA26107CED499C858LL},{(-9L),1L,0xCB941C5EEF02D27CLL,0x81A09870BFBD2DB2LL,0xCB941C5EEF02D27CLL},{0x5CF9645D199DA16FLL,0x5CF9645D199DA16FLL,1L,0x3EBE08290AFDDB5ELL,0x409948576C49478BLL}}};
        int64_t l_253 = 0xB53869009A4825EFLL;
        int32_t l_258 = (-4L);
        int32_t l_260 = 1L;
        int32_t l_263[5][6][4] = {{{2L,0xD69C6D1AL,(-4L),0x448EBF45L},{8L,1L,0x448EBF45L,2L},{8L,0x8D7A7FA2L,(-4L),(-4L)},{2L,2L,1L,0xBF8CB437L},{0x8FC74D14L,1L,1L,0x41124B31L},{(-4L),0x69B05E94L,(-1L),1L}},{{1L,0x69B05E94L,2L,0x41124B31L},{0x69B05E94L,1L,0x69B05E94L,0xBF8CB437L},{0x8D7A7FA2L,2L,0xD69C6D1AL,(-4L)},{(-6L),0x8D7A7FA2L,0xBF8CB437L,2L},{0x41124B31L,1L,0xBF8CB437L,0x448EBF45L},{(-6L),0xD69C6D1AL,0xD69C6D1AL,(-6L)}},{{0x8D7A7FA2L,0x41124B31L,0x69B05E94L,0x7360DF40L},{0x69B05E94L,0x7360DF40L,2L,1L},{1L,8L,(-1L),1L},{(-4L),0x7360DF40L,1L,0x7360DF40L},{0x8FC74D14L,0x41124B31L,1L,(-6L)},{2L,0xD69C6D1AL,(-4L),0x448EBF45L}},{{8L,1L,0x448EBF45L,2L},{8L,0x8D7A7FA2L,(-4L),(-4L)},{2L,2L,1L,0xBF8CB437L},{0x8FC74D14L,1L,1L,0x41124B31L},{(-4L),0x69B05E94L,(-1L),1L},{1L,0x69B05E94L,2L,0x41124B31L}},{{0x69B05E94L,1L,0x69B05E94L,0xBF8CB437L},{0x8D7A7FA2L,2L,0xD69C6D1AL,(-4L)},{(-6L),0x8D7A7FA2L,0xBF8CB437L,2L},{0x41124B31L,1L,0xBF8CB437L,0x448EBF45L},{(-6L),0xD69C6D1AL,0xD69C6D1AL,(-6L)},{0x8D7A7FA2L,0x41124B31L,0x69B05E94L,0x7360DF40L}}};
        int32_t l_275 = 0xCF87A171L;
        uint16_t l_276 = 65533UL;
        int64_t *****l_337 = &g_335;
        int i, j, k;
        for (p_66 = 0; (p_66 >= 48); ++p_66)
        {
            int32_t l_97 = 5L;
            for (l_77.f1 = 2; (l_77.f1 <= 6); l_77.f1 += 1)
            {
                int64_t *l_98[3][9] = {{(void*)0,&g_99,&g_99,&g_99,(void*)0,&g_99,&g_99,&g_99,&g_99},{&g_99,&g_99,(void*)0,&g_99,(void*)0,&g_99,&g_99,&g_99,&g_99},{&g_99,&g_99,&g_99,&g_99,&g_99,&g_99,&g_99,&g_99,&g_99}};
                int16_t *l_101[10][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                uint16_t *l_103 = &g_67.f1;
                int i, j;
                g_37[l_77.f1] = (safe_sub_func_int64_t_s_s(g_37[l_77.f1], ((((&l_78[(l_77.f1 + 1)][l_77.f1] == (void*)0) , (safe_sub_func_int8_t_s_s(9L, p_65))) != (((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_94[4], ((*l_103) = (((g_11.f3 >= (g_102 = (safe_mod_func_uint16_t_u_u((l_97 != (l_100 = (g_99 = (*l_80)))), p_65)))) ^ 1L) & g_67.f0)))), g_11.f1)) < l_94[4]) == 1UL)) != l_97)));
            }
        }
    }
    else
    {
        l_338[9] = &l_77;
    }
    return l_339;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_11.f3, "g_11.f3", print_hash_value);
    transparent_crc(g_11.f4, "g_11.f4", print_hash_value);
    transparent_crc(g_11.f5, "g_11.f5", print_hash_value);
    transparent_crc(g_11.f6, "g_11.f6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_35[i][j][k], "g_35[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_37[i], "g_37[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_67.f1, "g_67.f1", print_hash_value);
    transparent_crc(g_67.f2, "g_67.f2", print_hash_value);
    transparent_crc(g_67.f3, "g_67.f3", print_hash_value);
    transparent_crc(g_67.f4, "g_67.f4", print_hash_value);
    transparent_crc(g_67.f5, "g_67.f5", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_328[i][j], "g_328[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_403[i], "g_403[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_544.f0, "g_544.f0", print_hash_value);
    transparent_crc(g_544.f1, "g_544.f1", print_hash_value);
    transparent_crc(g_544.f2, "g_544.f2", print_hash_value);
    transparent_crc(g_544.f3, "g_544.f3", print_hash_value);
    transparent_crc(g_544.f4, "g_544.f4", print_hash_value);
    transparent_crc(g_544.f5, "g_544.f5", print_hash_value);
    transparent_crc(g_544.f6, "g_544.f6", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_869[i][j][k], "g_869[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_914[i][j], "g_914[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_943, "g_943", print_hash_value);
    transparent_crc(g_1035.f0, "g_1035.f0", print_hash_value);
    transparent_crc(g_1035.f1, "g_1035.f1", print_hash_value);
    transparent_crc(g_1035.f2, "g_1035.f2", print_hash_value);
    transparent_crc(g_1035.f3, "g_1035.f3", print_hash_value);
    transparent_crc(g_1035.f4, "g_1035.f4", print_hash_value);
    transparent_crc(g_1035.f5, "g_1035.f5", print_hash_value);
    transparent_crc(g_1035.f6, "g_1035.f6", print_hash_value);
    transparent_crc(g_1039.f0, "g_1039.f0", print_hash_value);
    transparent_crc(g_1039.f1, "g_1039.f1", print_hash_value);
    transparent_crc(g_1039.f2, "g_1039.f2", print_hash_value);
    transparent_crc(g_1039.f3, "g_1039.f3", print_hash_value);
    transparent_crc(g_1039.f4, "g_1039.f4", print_hash_value);
    transparent_crc(g_1039.f5, "g_1039.f5", print_hash_value);
    transparent_crc(g_1039.f6, "g_1039.f6", print_hash_value);
    transparent_crc(g_1147, "g_1147", print_hash_value);
    transparent_crc(g_1148, "g_1148", print_hash_value);
    transparent_crc(g_1150, "g_1150", print_hash_value);
    transparent_crc(g_1234.f0, "g_1234.f0", print_hash_value);
    transparent_crc(g_1234.f1, "g_1234.f1", print_hash_value);
    transparent_crc(g_1234.f2, "g_1234.f2", print_hash_value);
    transparent_crc(g_1234.f3, "g_1234.f3", print_hash_value);
    transparent_crc(g_1234.f4, "g_1234.f4", print_hash_value);
    transparent_crc(g_1234.f5, "g_1234.f5", print_hash_value);
    transparent_crc(g_1234.f6, "g_1234.f6", print_hash_value);
    transparent_crc(g_1286, "g_1286", print_hash_value);
    transparent_crc(g_1416, "g_1416", print_hash_value);
    transparent_crc(g_1418, "g_1418", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1620[i][j], "g_1620[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1648, "g_1648", print_hash_value);
    transparent_crc(g_1711, "g_1711", print_hash_value);
    transparent_crc(g_1753, "g_1753", print_hash_value);
    transparent_crc(g_1892, "g_1892", print_hash_value);
    transparent_crc(g_2014, "g_2014", print_hash_value);
    transparent_crc(g_2027, "g_2027", print_hash_value);
    transparent_crc(g_2028, "g_2028", print_hash_value);
    transparent_crc(g_2133, "g_2133", print_hash_value);
    transparent_crc(g_2206, "g_2206", print_hash_value);
    transparent_crc(g_2232, "g_2232", print_hash_value);
    transparent_crc(g_2511, "g_2511", print_hash_value);
    transparent_crc(g_2870, "g_2870", print_hash_value);
    transparent_crc(g_2957.f0, "g_2957.f0", print_hash_value);
    transparent_crc(g_2957.f1, "g_2957.f1", print_hash_value);
    transparent_crc(g_2957.f2, "g_2957.f2", print_hash_value);
    transparent_crc(g_2957.f3, "g_2957.f3", print_hash_value);
    transparent_crc(g_2957.f4, "g_2957.f4", print_hash_value);
    transparent_crc(g_2957.f5, "g_2957.f5", print_hash_value);
    transparent_crc(g_2979, "g_2979", print_hash_value);
    transparent_crc(g_2982, "g_2982", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
