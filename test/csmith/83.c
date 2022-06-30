// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = D87F7CF9
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



static int32_t g_8 = (-1L);
static int32_t g_11 = 0x46507E67L;
static uint32_t g_12[8] = {0x6887E08AL,0x6887E08AL,0x6887E08AL,0x6887E08AL,0x6887E08AL,0x6887E08AL,0x6887E08AL,0x6887E08AL};
static uint32_t g_14 = 4294967295UL;
static int8_t g_24 = 0x90L;
static int8_t g_31 = 1L;
static int8_t *g_30 = &g_31;
static uint8_t g_34 = 255UL;
static uint32_t g_80[7] = {0x0E9BCC68L,0x0E9BCC68L,0x0E9BCC68L,0x0E9BCC68L,0x0E9BCC68L,0x0E9BCC68L,0x0E9BCC68L};
static int8_t g_98 = 0x12L;
static int16_t g_131 = (-9L);
static uint16_t g_149 = 8UL;
static int64_t g_193 = (-1L);
static uint64_t g_195 = 18446744073709551615UL;
static uint64_t g_199 = 1UL;
static uint32_t *g_202 = &g_14;
static int32_t g_206 = 0x910C71A7L;
static int16_t g_219[10] = {(-7L),0x773BL,1L,1L,0x773BL,(-7L),0x773BL,1L,1L,0x773BL};
static int16_t g_220 = (-5L);
static uint32_t g_221[1][3] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
static int64_t g_228 = 0xC412B3B2B88CA998LL;
static uint32_t g_233 = 18446744073709551609UL;
static uint8_t *g_256 = &g_34;
static uint8_t **g_255 = &g_256;
static int64_t g_268 = 0xFE6923C3D6B9C23FLL;
static uint8_t g_269[4] = {255UL,255UL,255UL,255UL};
static int32_t g_279 = (-4L);
static int16_t g_280 = (-1L);
static uint8_t g_281[6] = {255UL,255UL,255UL,255UL,255UL,255UL};
static uint32_t g_287 = 0x5F1DC6DAL;
static int32_t g_290[6][5] = {{0x4479DD2CL,(-1L),0x4479DD2CL,1L,1L},{0x4479DD2CL,(-1L),0x4479DD2CL,0x4479DD2CL,0x4479DD2CL},{0xB667AFD7L,0x19D36E7CL,0xB667AFD7L,0x4479DD2CL,0x4479DD2CL},{0xB667AFD7L,0x19D36E7CL,0xB667AFD7L,0x4479DD2CL,0x4479DD2CL},{0xB667AFD7L,0x19D36E7CL,0xB667AFD7L,0x4479DD2CL,0x4479DD2CL},{0xB667AFD7L,0x19D36E7CL,0xB667AFD7L,0x4479DD2CL,0x4479DD2CL}};
static uint8_t g_325 = 0xF5L;
static uint8_t *g_326 = &g_325;
static int8_t g_337 = (-1L);
static int16_t g_357[7] = {0x23D9L,0x23D9L,0x23D9L,0x23D9L,0x23D9L,0x23D9L,0x23D9L};
static int32_t g_393[2][8] = {{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L}};
static int32_t * const *g_529 = (void*)0;
static uint8_t ***g_541 = &g_255;
static uint8_t ****g_540 = &g_541;
static uint32_t g_550 = 0xD615776AL;
static int16_t *g_570 = &g_357[5];
static const uint32_t g_714 = 0xF8738AC4L;
static int32_t *g_720 = &g_290[3][0];
static uint32_t **g_788[3] = {&g_202,&g_202,&g_202};
static uint32_t ***g_787 = &g_788[2];
static int16_t g_798 = (-8L);
static uint16_t *g_972[8][1][5] = {{{(void*)0,&g_149,&g_149,&g_149,&g_149}},{{&g_149,&g_149,&g_149,&g_149,&g_149}},{{&g_149,&g_149,&g_149,&g_149,&g_149}},{{&g_149,&g_149,(void*)0,&g_149,&g_149}},{{(void*)0,&g_149,&g_149,&g_149,&g_149}},{{&g_149,&g_149,&g_149,&g_149,&g_149}},{{&g_149,&g_149,&g_149,&g_149,&g_149}},{{&g_149,&g_149,&g_149,&g_149,&g_149}}};
static int32_t g_1002 = 0xB8699CCBL;
static int32_t *g_1079[6] = {&g_393[1][0],&g_393[1][0],&g_393[1][0],&g_393[1][0],&g_393[1][0],&g_393[1][0]};
static uint64_t g_1241 = 3UL;
static int64_t g_1357[7] = {0xB54DB40D3E831236LL,(-10L),(-10L),0xB54DB40D3E831236LL,(-10L),(-10L),0xB54DB40D3E831236LL};
static int8_t **g_1490 = &g_30;
static int8_t *** const g_1489 = &g_1490;
static int8_t g_1645 = 0x7DL;
static int32_t g_1655 = (-1L);
static uint32_t g_1679 = 4294967295UL;
static int64_t *g_1700 = &g_1357[2];
static int64_t **g_1699 = &g_1700;
static uint8_t *****g_1711 = &g_540;
static uint64_t *g_1719[6][10][4] = {{{&g_1241,&g_1241,&g_199,&g_1241},{&g_195,(void*)0,&g_199,&g_199},{&g_1241,&g_1241,&g_199,&g_1241},{&g_195,&g_195,&g_1241,&g_199},{&g_1241,&g_195,(void*)0,&g_1241},{&g_199,&g_195,&g_195,&g_199},{&g_195,&g_195,(void*)0,&g_1241},{&g_1241,&g_1241,(void*)0,&g_199},{(void*)0,(void*)0,&g_195,&g_1241},{(void*)0,&g_1241,(void*)0,&g_1241}},{{&g_1241,&g_1241,&g_1241,&g_195},{&g_1241,&g_1241,&g_195,&g_195},{&g_1241,&g_195,&g_1241,&g_195},{&g_1241,&g_199,&g_195,&g_199},{&g_1241,&g_195,&g_1241,&g_195},{&g_1241,&g_195,(void*)0,&g_195},{(void*)0,&g_195,&g_195,&g_195},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_1241,&g_199,(void*)0,&g_199},{&g_195,(void*)0,&g_195,&g_199}},{{&g_199,&g_195,(void*)0,&g_199},{&g_1241,(void*)0,&g_1241,&g_199},{&g_195,&g_199,&g_1241,(void*)0},{&g_195,(void*)0,&g_199,&g_1241},{&g_1241,&g_195,&g_1241,&g_195},{&g_195,(void*)0,&g_195,&g_195},{&g_195,&g_1241,(void*)0,&g_1241},{&g_199,&g_195,&g_1241,&g_1241},{&g_199,&g_195,&g_1241,&g_199},{&g_199,&g_199,(void*)0,&g_195}},{{&g_195,&g_1241,&g_195,(void*)0},{&g_195,(void*)0,&g_1241,&g_199},{&g_1241,&g_199,&g_199,&g_199},{&g_195,&g_195,&g_1241,&g_1241},{(void*)0,&g_195,&g_199,&g_1241},{&g_1241,&g_195,(void*)0,&g_199},{&g_1241,&g_195,&g_195,&g_1241},{&g_195,&g_195,&g_199,&g_1241},{&g_1241,&g_195,(void*)0,&g_199},{(void*)0,&g_199,&g_195,&g_199}},{{(void*)0,(void*)0,&g_195,(void*)0},{&g_199,&g_1241,&g_199,&g_195},{&g_199,&g_199,&g_195,&g_199},{(void*)0,&g_195,&g_1241,&g_1241},{(void*)0,&g_195,&g_195,&g_1241},{&g_199,&g_1241,&g_199,&g_195},{&g_199,(void*)0,&g_195,&g_195},{(void*)0,&g_195,&g_195,&g_1241},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_1241,&g_1241,&g_199,&g_195}},{{&g_195,(void*)0,&g_195,&g_1241},{&g_1241,&g_195,(void*)0,&g_1241},{&g_1241,(void*)0,&g_199,&g_195},{(void*)0,&g_1241,&g_1241,(void*)0},{&g_195,(void*)0,&g_199,&g_1241},{&g_1241,&g_195,&g_1241,&g_195},{&g_195,(void*)0,&g_195,&g_195},{&g_195,&g_1241,(void*)0,&g_1241},{&g_199,&g_195,&g_1241,&g_1241},{&g_199,&g_195,&g_1241,&g_199}}};
static uint64_t **g_1718 = &g_1719[1][5][2];
static uint16_t **g_1734[2] = {&g_972[0][0][0],&g_972[0][0][0]};
static uint16_t ***g_1733 = &g_1734[1];
static int16_t g_1830 = 0xE4FCL;
static const uint32_t g_1880 = 4294967287UL;
static const int16_t g_1935 = (-4L);
static const int64_t g_1958 = (-1L);
static int16_t g_2025 = 0x42B7L;
static uint8_t g_2026 = 252UL;
static uint64_t g_2031[5] = {0UL,0UL,0UL,0UL,0UL};
static uint16_t * const **g_2052 = (void*)0;
static uint16_t * const ***g_2051 = &g_2052;
static int32_t **g_2082 = &g_1079[4];
static int32_t ***g_2081 = &g_2082;
static int32_t ****g_2080 = &g_2081;
static uint8_t g_2170 = 250UL;
static int32_t *****g_2208[8][6] = {{&g_2080,&g_2080,&g_2080,&g_2080,&g_2080,&g_2080},{&g_2080,&g_2080,&g_2080,&g_2080,&g_2080,&g_2080},{&g_2080,&g_2080,&g_2080,&g_2080,&g_2080,&g_2080},{&g_2080,&g_2080,&g_2080,&g_2080,&g_2080,&g_2080},{&g_2080,&g_2080,&g_2080,&g_2080,&g_2080,&g_2080},{&g_2080,&g_2080,&g_2080,&g_2080,&g_2080,&g_2080},{&g_2080,&g_2080,&g_2080,&g_2080,&g_2080,&g_2080},{&g_2080,&g_2080,&g_2080,&g_2080,&g_2080,&g_2080}};
static uint32_t ****g_2223[4][7] = {{&g_787,&g_787,&g_787,&g_787,&g_787,&g_787,&g_787},{&g_787,&g_787,&g_787,&g_787,&g_787,&g_787,&g_787},{&g_787,&g_787,(void*)0,&g_787,&g_787,&g_787,&g_787},{&g_787,(void*)0,&g_787,&g_787,&g_787,&g_787,(void*)0}};
static uint32_t *****g_2222 = &g_2223[0][2];
static int16_t **g_2381 = (void*)0;
static uint32_t g_2386 = 0x831052E9L;
static uint16_t ****g_2444 = &g_1733;
static uint16_t *****g_2443[2] = {&g_2444,&g_2444};
static int16_t g_2467 = 0x1F5EL;
static const uint64_t ***g_2669 = (void*)0;
static uint32_t g_2721[4][3][5] = {{{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL}},{{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL}},{{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL}},{{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL}}};
static const int32_t *g_2749 = &g_290[3][0];
static const int64_t *g_2758 = &g_228;
static const int64_t **g_2757 = &g_2758;



static uint16_t func_1(void);
static uint16_t func_4(int32_t p_5, uint16_t p_6, int32_t p_7);
static int32_t * func_39(const int32_t * p_40, int64_t p_41, uint16_t p_42, int8_t * p_43, int8_t * p_44);
static const int8_t func_47(int32_t p_48, const uint16_t p_49, int32_t * p_50, int32_t * const p_51, const uint32_t * p_52);
static int32_t * const func_53(uint16_t p_54, uint32_t * p_55, int16_t p_56, uint32_t p_57, uint16_t p_58);
static uint16_t func_59(int8_t p_60, int32_t * p_61, uint8_t p_62, const int32_t p_63, int32_t * p_64);
static int32_t * func_76(int16_t p_77);
static int8_t ** func_85(int32_t * p_86, int8_t ** p_87);
static int32_t * func_88(int32_t * p_89, uint8_t * p_90, int32_t p_91, int8_t p_92, uint8_t p_93);
static int32_t * func_94(int8_t p_95, int8_t * p_96);
# 127 "<stdin>"
static uint16_t func_1(void)
{
    uint32_t l_9 = 0xB7161AB6L;
    int32_t *l_10 = &g_11;
    uint16_t *l_2875[10] = {&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149};
    int i;
    (*g_720) |= (safe_lshift_func_uint8_t_u_u((func_4((g_8 ^ 255UL), l_9, (((*l_10) = 0x813F1A07L) , 8L)) , (((((((-5L) < (((**g_1733) = (l_9 , (**g_1733))) == l_2875[9])) <= l_9) & (***g_1489)) , (-6L)) && (-7L)) != (-3L))), (**g_255)));
    return l_9;
}







static uint16_t func_4(int32_t p_5, uint16_t p_6, int32_t p_7)
{
    uint16_t l_73[7][4][6] = {{{0x2A59L,0x4AE8L,0xFB09L,0x3980L,65532UL,65535UL},{0x2A59L,0x18B7L,0x3980L,0x3B58L,0UL,65535UL},{0x4AE8L,0x2A59L,65535UL,0xFB09L,65532UL,65532UL},{65535UL,65535UL,65535UL,65535UL,0x2A59L,65535UL}},{{0x3B58L,65535UL,0x3980L,0x6FBAL,0x3B58L,65535UL},{65535UL,65535UL,0xFB09L,65535UL,0x3B58L,0x6FBAL},{0x4AE8L,65535UL,0x18B7L,65535UL,0x2A59L,65535UL},{0x2A59L,65535UL,0xFB09L,65532UL,65532UL,0xFB09L}},{{0x2A59L,0x2A59L,0x3980L,65535UL,0UL,0x3B58L},{0x4AE8L,0x18B7L,65535UL,65535UL,65532UL,0x3980L},{65535UL,0x4AE8L,65535UL,0x6FBAL,0x2A59L,0x3B58L},{0x3B58L,0x6FBAL,0x3980L,65535UL,0x3B58L,0xFB09L}},{{65535UL,0x3B58L,0xFB09L,0xFB09L,65535UL,0x4AE8L},{0x3B58L,65535UL,0x2AD6L,65535UL,0UL,65535UL},{0UL,0x3B58L,0x3980L,0x18B7L,0x2A59L,65532UL},{0UL,0x2AD6L,0x18B7L,65535UL,65535UL,0xFB09L}},{{0x3B58L,0UL,65535UL,0x3980L,0x2A59L,0x2A59L},{0x4AE8L,65535UL,65535UL,0x4AE8L,0UL,0xFB09L},{65535UL,0x4AE8L,0x18B7L,65535UL,65535UL,65532UL},{0x4AE8L,0xFB09L,0x3980L,65532UL,65535UL,65535UL}},{{0x3B58L,0x4AE8L,0x2AD6L,0xFB09L,0UL,0x4AE8L},{0UL,65535UL,0x3980L,0x2A59L,0x2A59L,0x3980L},{0UL,0UL,0x18B7L,0xFB09L,65535UL,65535UL},{0x3B58L,0x2AD6L,65535UL,65532UL,0x2A59L,0x18B7L}},{{0x4AE8L,0x3B58L,65535UL,65535UL,0UL,65535UL},{65535UL,65535UL,0x18B7L,0x4AE8L,65535UL,0x3980L},{0x4AE8L,65535UL,0x3980L,0x3980L,65535UL,0x4AE8L},{0x3B58L,65535UL,0x2AD6L,65535UL,0UL,65535UL}}};
    int32_t *l_74 = &g_11;
    int8_t *l_2389 = &g_1645;
    int32_t l_2761 = 0L;
    int8_t l_2764 = 0xA2L;
    int32_t l_2766[9][9] = {{0x4228480EL,0x66BD0576L,1L,0x4228480EL,(-1L),0xA243F981L,0x1C1B7F8EL,0xA243F981L,(-1L)},{0x1C1B7F8EL,0x66BD0576L,0x66BD0576L,0x1C1B7F8EL,(-1L),(-1L),(-3L),0xA243F981L,0x64CFF485L},{(-3L),0x66BD0576L,0x2196A110L,(-3L),(-1L),0x1097917CL,0x4228480EL,0xA243F981L,(-1L)},{0x4228480EL,0x66BD0576L,1L,0x4228480EL,(-1L),0xA243F981L,0x1C1B7F8EL,0xA243F981L,(-1L)},{0x1C1B7F8EL,0x66BD0576L,0x66BD0576L,0x1C1B7F8EL,(-1L),(-1L),(-3L),0xA243F981L,0x64CFF485L},{(-3L),0x66BD0576L,0x2196A110L,(-3L),(-1L),0x1097917CL,0x4228480EL,0xA243F981L,(-1L)},{0x4228480EL,0x66BD0576L,1L,0x4228480EL,(-1L),0xA243F981L,0x1C1B7F8EL,0xA243F981L,(-1L)},{0x1C1B7F8EL,0x66BD0576L,0x66BD0576L,0x1C1B7F8EL,(-1L),(-1L),(-3L),0xA243F981L,0x64CFF485L},{(-3L),0x66BD0576L,0x2196A110L,(-3L),(-1L),0x1097917CL,0x4228480EL,0xA243F981L,(-1L)}};
    int8_t l_2768 = 2L;
    uint32_t **l_2781[2][5][7] = {{{&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202},{(void*)0,&g_202,(void*)0,&g_202,&g_202,(void*)0,&g_202},{&g_202,&g_202,&g_202,&g_202,&g_202,(void*)0,&g_202},{&g_202,(void*)0,(void*)0,&g_202,&g_202,&g_202,(void*)0},{&g_202,&g_202,(void*)0,&g_202,(void*)0,&g_202,&g_202}},{{&g_202,(void*)0,&g_202,(void*)0,&g_202,&g_202,(void*)0},{&g_202,&g_202,&g_202,(void*)0,(void*)0,&g_202,&g_202},{(void*)0,&g_202,&g_202,&g_202,&g_202,(void*)0,&g_202},{&g_202,(void*)0,(void*)0,&g_202,&g_202,&g_202,(void*)0},{&g_202,&g_202,(void*)0,&g_202,(void*)0,&g_202,&g_202}}};
    int32_t l_2870 = (-8L);
    int32_t l_2871 = 0xC2C94060L;
    uint32_t l_2872 = 0xC6C65355L;
    int i, j, k;
    for (p_7 = 7; (p_7 >= 0); p_7 -= 1)
    {
        uint32_t l_38 = 0x34166DA9L;
        int32_t l_2765 = 0xBA899021L;
        int32_t l_2767[5][6] = {{1L,(-1L),(-1L),(-1L),1L,1L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{1L,1L,(-1L),(-1L),(-1L),1L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
        uint16_t l_2814 = 0xE508L;
        int32_t *l_2865 = &g_290[2][3];
        int32_t *l_2866 = &g_1002;
        int32_t *l_2867 = &l_2766[7][2];
        int32_t *l_2868 = &l_2766[6][3];
        int32_t *l_2869[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_2869[i] = &g_393[1][4];
        g_8 = 0x66C619A8L;
        for (p_6 = 0; (p_6 <= 7); p_6 += 1)
        {
            uint32_t *l_13 = &g_14;
            int16_t l_15 = 0L;
            int32_t *l_16 = &g_8;
            int64_t * const *l_2755 = &g_1700;
            uint32_t l_2756 = 0UL;
            int32_t l_2769[8] = {0x3248954BL,(-1L),0x3248954BL,0x3248954BL,(-1L),0x3248954BL,0x3248954BL,(-1L)};
            uint32_t l_2776 = 0x960DC393L;
            uint64_t **l_2797 = &g_1719[1][5][2];
            int i;
            (*l_16) |= (((*l_13) ^= g_12[p_7]) < (l_15 ^= (p_5 , g_12[p_7])));
            for (l_15 = 7; (l_15 >= 1); l_15 -= 1)
            {
                uint64_t l_35 = 18446744073709551611UL;
                int32_t *l_75 = &g_11;
                int32_t l_2762 = 0x528CBE55L;
                int32_t l_2770 = 0L;
                int32_t l_2771 = (-10L);
                int32_t l_2772 = 0x1569EEFBL;
                int32_t l_2773 = (-1L);
                int32_t l_2774[6][5][8] = {{{0L,1L,4L,1L,0xD335A427L,(-4L),0x67DE4F1DL,1L},{0x67DE4F1DL,1L,0L,0L,0L,1L,0x67DE4F1DL,1L},{(-1L),0L,4L,(-4L),4L,1L,0xD335A427L,1L},{4L,1L,0xD335A427L,1L,4L,(-4L),4L,0L},{(-1L),1L,0x67DE4F1DL,1L,0L,0L,0L,1L}},{{0x67DE4F1DL,1L,0x67DE4F1DL,(-4L),0xD335A427L,1L,4L,1L},{0L,1L,0xD335A427L,0L,0x67487BE3L,0L,0xD335A427L,1L},{0L,1L,4L,1L,0xD335A427L,(-4L),0x67DE4F1DL,1L},{0x67DE4F1DL,1L,0L,0L,0L,1L,0x67DE4F1DL,1L},{(-1L),0L,4L,(-4L),4L,1L,0xD335A427L,1L}},{{4L,1L,0xD335A427L,1L,4L,(-4L),4L,0L},{(-1L),1L,0x67DE4F1DL,1L,0L,0L,0L,1L},{0x67DE4F1DL,1L,0x67DE4F1DL,(-4L),0xD335A427L,1L,0xD335A427L,0L},{0x67487BE3L,1L,0L,(-4L),(-1L),(-4L),0L,1L},{0x67487BE3L,0L,0xD335A427L,1L,0L,1L,4L,1L}},{{4L,1L,0x67487BE3L,(-4L),0x67487BE3L,1L,4L,0L},{0x67DE4F1DL,(-4L),0xD335A427L,1L,4L,1L,0L,1L},{4L,1L,0L,1L,4L,1L,0xD335A427L,(-4L)},{0x67DE4F1DL,0L,4L,1L,0x67487BE3L,(-4L),0x67487BE3L,1L},{4L,1L,4L,1L,0L,1L,0xD335A427L,0L}},{{0x67487BE3L,1L,0L,(-4L),(-1L),(-4L),0L,1L},{0x67487BE3L,0L,0xD335A427L,1L,0L,1L,4L,1L},{4L,1L,0x67487BE3L,(-4L),0x67487BE3L,1L,4L,0L},{0x67DE4F1DL,(-4L),0xD335A427L,1L,4L,1L,0L,1L},{4L,1L,0L,1L,4L,1L,0xD335A427L,(-4L)}},{{0x67DE4F1DL,0L,4L,1L,0x67487BE3L,(-4L),0x67487BE3L,1L},{4L,1L,4L,1L,0L,1L,0xD335A427L,0L},{0x67487BE3L,1L,0L,(-4L),(-1L),(-4L),0L,1L},{0x67487BE3L,0L,0xD335A427L,1L,0L,1L,4L,1L},{4L,1L,0x67487BE3L,(-4L),0x67487BE3L,1L,4L,0L}}};
                int8_t **l_2796[1][7][5] = {{{&g_30,&g_30,(void*)0,&g_30,&g_30},{&g_30,&l_2389,&g_30,&g_30,&g_30},{&l_2389,&g_30,&g_30,&g_30,(void*)0},{(void*)0,&g_30,&g_30,&l_2389,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&l_2389,&g_30},{(void*)0,&l_2389,(void*)0,&g_30,&g_30}}};
                const uint32_t *** const l_2800 = (void*)0;
                int i, j, k;
                for (p_5 = 7; (p_5 >= 0); p_5 -= 1)
                {
                    int8_t *l_32 = &g_31;
                    int32_t **l_2034 = &l_75;
                    const int64_t ***l_2759 = &g_2757;
                    int32_t l_2760[10][7] = {{(-1L),(-10L),(-1L),0L,(-1L),(-1L),0L},{9L,0x416A81A4L,9L,0xE61336CDL,0L,(-1L),0xECC9A09EL},{(-1L),(-10L),0xECC9A09EL,(-1L),0xECC9A09EL,(-8L),0x416A81A4L},{(-8L),(-10L),9L,(-1L),0xE61336CDL,0xECC9A09EL,0xE61336CDL},{(-8L),0xE61336CDL,0xE61336CDL,(-8L),1L,(-1L),(-1L)},{0x416A81A4L,(-1L),9L,1L,1L,9L,(-1L)},{1L,0x416A81A4L,0xECC9A09EL,(-10L),0xE61336CDL,(-1L),(-1L)},{0xECC9A09EL,0x416A81A4L,1L,0x416A81A4L,0xECC9A09EL,(-10L),0xE61336CDL},{9L,(-1L),0x416A81A4L,(-10L),(-1L),(-10L),0x416A81A4L},{0xE61336CDL,0xE61336CDL,(-8L),1L,(-1L),(-1L),9L}};
                    uint16_t *l_2763[3];
                    int64_t l_2775 = (-10L);
                    const uint32_t * const l_2784 = (void*)0;
                    const uint32_t * const *l_2783 = &l_2784;
                    const uint32_t * const **l_2782 = &l_2783;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_2763[i] = &l_73[3][2][0];
                    for (g_8 = 7; (g_8 >= 0); g_8 -= 1)
                    {
                        int8_t *l_23 = &g_24;
                        int64_t l_29 = 0xCB4E3473EDE5C489LL;
                        uint8_t *l_33[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t *l_36 = (void*)0;
                        int32_t l_37 = 0x0C7F2BACL;
                        int i;
                        l_37 &= (((1L && (4UL || p_5)) >= ((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((l_35 = (safe_mul_func_uint8_t_u_u((p_6 >= ((*l_23) = g_11)), (((((8UL && g_14) <= (((((safe_sub_func_int8_t_s_s(0x1BL, (((safe_add_func_int32_t_s_s(l_29, 0x5ABA8D6EL)) , g_30) != l_32))) , p_5) | 1UL) & p_6) >= g_12[2])) , 0UL) > p_6) > 0x5DL)))), 2)) , 4294967292UL), g_12[2])) == 0x9447610B5C7B1239LL)) | (-1L));
                        return l_38;
                    }
                }
                return (*l_16);
            }
        }
        if ((****g_2080))
            break;
        --l_2872;
    }
    return p_5;
}







static int32_t * func_39(const int32_t * p_40, int64_t p_41, uint16_t p_42, int8_t * p_43, int8_t * p_44)
{
    int32_t *l_2390 = &g_290[3][0];
    int32_t *l_2391 = &g_393[1][0];
    int32_t l_2392 = 1L;
    int32_t *l_2393 = &g_393[1][0];
    int32_t *l_2394 = &l_2392;
    int32_t *l_2395 = &l_2392;
    int32_t *l_2396 = &g_393[1][6];
    int32_t *l_2397 = &g_1002;
    int32_t l_2398 = 0x99F19B79L;
    int32_t *l_2399[3];
    int32_t l_2400 = (-2L);
    uint32_t l_2401 = 1UL;
    uint16_t *l_2412[6] = {&g_149,&g_149,&g_149,&g_149,&g_149,&g_149};
    int32_t ** const *l_2415 = &g_2082;
    int32_t ** const **l_2414 = &l_2415;
    int32_t ** const *** const l_2413 = &l_2414;
    uint8_t *****l_2453 = (void*)0;
    int64_t l_2502 = (-1L);
    uint32_t l_2514[8] = {0UL,0xF07088B2L,0xF07088B2L,0UL,0xF07088B2L,0xF07088B2L,0UL,0xF07088B2L};
    uint32_t l_2515 = 0x7B709EF9L;
    uint64_t l_2524[10] = {0x93E1AF96DA557E14LL,0x93E1AF96DA557E14LL,0x468A62B9273867A1LL,0x93E1AF96DA557E14LL,0x93E1AF96DA557E14LL,0x468A62B9273867A1LL,0x93E1AF96DA557E14LL,0x93E1AF96DA557E14LL,0x468A62B9273867A1LL,0x93E1AF96DA557E14LL};
    int8_t *l_2525[3][2][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_1645,(void*)0,(void*)0,&g_1645,(void*)0,(void*)0,&g_1645,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_1645,(void*)0,(void*)0,&g_1645,(void*)0,(void*)0,&g_1645,(void*)0}}};
    uint32_t l_2563[1][8][5] = {{{8UL,4294967287UL,4294967287UL,8UL,4294967287UL},{0xF4C30F2EL,0xF4C30F2EL,0xD60B4865L,0xF4C30F2EL,0xF4C30F2EL},{4294967287UL,8UL,4294967287UL,4294967287UL,8UL},{0xF4C30F2EL,0x3A5F20EDL,0x3A5F20EDL,0xF4C30F2EL,0x3A5F20EDL},{8UL,8UL,0x15AE44ECL,8UL,8UL},{0x3A5F20EDL,0xF4C30F2EL,0x3A5F20EDL,0x3A5F20EDL,0xF4C30F2EL},{8UL,4294967287UL,4294967287UL,8UL,4294967287UL},{0xF4C30F2EL,0xF4C30F2EL,0xD60B4865L,0xF4C30F2EL,0xF4C30F2EL}}};
    int32_t l_2584 = 1L;
    int16_t **l_2619 = &g_570;
    int32_t ***l_2662[7][7][3] = {{{&g_2082,&g_2082,(void*)0},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082}},{{&g_2082,(void*)0,(void*)0},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082}},{{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082}},{{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,(void*)0,&g_2082},{&g_2082,&g_2082,(void*)0},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,(void*)0},{&g_2082,&g_2082,(void*)0}},{{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082}},{{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,(void*)0},{&g_2082,(void*)0,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,(void*)0},{&g_2082,&g_2082,&g_2082}},{{&g_2082,&g_2082,&g_2082},{&g_2082,(void*)0,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082},{&g_2082,&g_2082,&g_2082}}};
    uint64_t ***l_2667 = &g_1718;
    uint32_t **l_2745 = &g_202;
    uint64_t l_2746 = 0xE4B953B5F3B14E47LL;
    const int32_t *l_2748 = &g_393[0][5];
    const int32_t **l_2747[10] = {&l_2748,&l_2748,&l_2748,&l_2748,&l_2748,&l_2748,&l_2748,&l_2748,&l_2748,&l_2748};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2399[i] = &g_1002;
    --l_2401;
    return (***g_2080);
}







static const int8_t func_47(int32_t p_48, const uint16_t p_49, int32_t * p_50, int32_t * const p_51, const uint32_t * p_52)
{
    int8_t l_2045 = 0x7BL;
    const uint16_t *l_2049 = (void*)0;
    const uint16_t **l_2048[1];
    const uint16_t ***l_2047[6];
    const uint16_t ****l_2046[7][1];
    uint16_t * const ***l_2053 = &g_2052;
    int64_t **l_2054 = &g_1700;
    int8_t l_2057 = 0x52L;
    int32_t **l_2062[3];
    int32_t ***l_2061 = &l_2062[2];
    int8_t ***l_2066 = &g_1490;
    int32_t l_2069 = 0L;
    const int8_t l_2092 = 1L;
    uint16_t l_2099 = 6UL;
    uint32_t l_2158 = 0x718C51A6L;
    uint64_t l_2273[10];
    int64_t l_2337[2];
    const int16_t l_2347 = 0x03E1L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_2048[i] = &l_2049;
    for (i = 0; i < 6; i++)
        l_2047[i] = &l_2048[0];
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_2046[i][j] = &l_2047[1];
    }
    for (i = 0; i < 3; i++)
        l_2062[i] = (void*)0;
    for (i = 0; i < 10; i++)
        l_2273[i] = 18446744073709551615UL;
    for (i = 0; i < 2; i++)
        l_2337[i] = 0L;
lbl_2297:
    for (g_287 = 0; (g_287 <= 3); g_287 += 1)
    {
        const uint16_t *****l_2050 = &l_2046[0][0];
        uint32_t l_2055 = 0x52968831L;
        int16_t *l_2056[4][5] = {{&g_219[2],&g_219[2],(void*)0,&g_219[2],&g_219[2]},{&g_219[9],&g_131,&g_219[9],&g_219[9],&g_131},{&g_219[2],&g_1830,&g_1830,&g_219[2],&g_1830},{&g_131,&g_131,&g_219[4],&g_131,&g_131}};
        int32_t ****l_2063 = &l_2061;
        int64_t ***l_2067 = &g_1699;
        uint32_t **l_2068 = &g_202;
        int32_t l_2090 = 7L;
        int i, j;
        (*g_720) = (((((safe_sub_func_int8_t_s_s(0L, ((((((safe_add_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u(g_281[(g_287 + 2)], (safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int8_t_s_u(((~(l_2045 >= ((((*l_2050) = l_2046[0][0]) != (l_2053 = g_2051)) , ((((g_220 = (((0x0BC3L || ((*g_570) = p_49)) != (7UL == ((void*)0 == l_2054))) | l_2055)) , p_48) , (*g_1490)) != &l_2045)))) >= p_49), 0)) != 0x4AB5BAEEL))))) >= l_2045), 0x2D45DEF40E734B06LL)) < 0x2A1EF483L) , l_2057) < l_2045) , g_281[(g_287 + 2)]) >= l_2045))) , l_2057) | 0x2BA002AA4F9D3AC5LL) , (void*)0) != (*g_2051));
        (*g_720) = (p_49 > (safe_div_func_uint32_t_u_u(((!(((*l_2063) = l_2061) == &g_529)) < p_48), ((safe_add_func_int16_t_s_s(1L, (l_2066 != &g_1490))) || ((0L <= (((*l_2067) = l_2054) != l_2054)) || 0x2272D205L)))));
        for (g_220 = 5; (g_220 >= 0); g_220 -= 1)
        {
            const int8_t l_2083[1] = {(-6L)};
            int32_t l_2133 = 9L;
            const uint8_t *l_2147 = &g_269[0];
            uint8_t l_2163 = 0x3EL;
            int i;
            (*g_720) ^= ((void*)0 != l_2068);
        }
    }
    for (g_220 = 0; (g_220 >= 0); g_220 -= 1)
    {
        const uint8_t l_2220[9][3] = {{252UL,252UL,252UL},{252UL,252UL,252UL},{252UL,252UL,252UL},{252UL,252UL,252UL},{252UL,252UL,252UL},{252UL,252UL,252UL},{252UL,252UL,252UL},{252UL,252UL,252UL},{252UL,252UL,252UL}};
        int32_t l_2260 = 6L;
        int32_t l_2263 = 0L;
        int32_t l_2264[2];
        int32_t * const **l_2292 = &g_529;
        uint32_t l_2301[6][8] = {{0x0A051B88L,0x61D6041FL,0UL,0xDBF33FCBL,0xDBF33FCBL,0UL,0x61D6041FL,0x0A051B88L},{9UL,0xDBF33FCBL,18446744073709551615UL,0xAA98AF00L,0xDBF33FCBL,0xAA98AF00L,18446744073709551615UL,0xDBF33FCBL},{0x0A051B88L,18446744073709551615UL,9UL,0x0A051B88L,0xAA98AF00L,0xAA98AF00L,0x0A051B88L,9UL},{0xDBF33FCBL,0xDBF33FCBL,0UL,0x61D6041FL,0x0A051B88L,0UL,0x0A051B88L,0x61D6041FL},{9UL,0x61D6041FL,9UL,0xAA98AF00L,0x61D6041FL,18446744073709551615UL,18446744073709551615UL,0x61D6041FL},{0x61D6041FL,18446744073709551615UL,18446744073709551615UL,0x61D6041FL,0xAA98AF00L,9UL,0x61D6041FL,9UL}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_2264[i] = 0xC5B03C25L;
        for (g_798 = 0; (g_798 <= 3); g_798 += 1)
        {
            uint16_t *l_2213 = &g_149;
            uint64_t ***l_2214 = &g_1718;
            int32_t l_2217 = 0x71F5FEBDL;
            int8_t **l_2230[9] = {&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30};
            int32_t l_2243 = 0xFC52000BL;
            int32_t l_2259 = (-9L);
            int32_t l_2262[2][7][4] = {{{0x63319234L,(-1L),(-1L),0x63319234L},{0L,(-1L),2L,0x63319234L},{0x63319234L,(-1L),(-1L),0x63319234L},{0L,(-1L),2L,0x63319234L},{0x63319234L,(-1L),(-1L),0x63319234L},{0L,(-1L),2L,0x63319234L},{0x63319234L,(-1L),(-1L),0x63319234L}},{{0L,(-1L),2L,0x63319234L},{0x63319234L,(-1L),(-1L),0x63319234L},{0L,(-1L),2L,0x63319234L},{0x63319234L,(-1L),(-1L),0x63319234L},{0L,(-1L),2L,0x63319234L},{0x63319234L,(-1L),(-1L),0x63319234L},{0L,(-1L),2L,0x63319234L}}};
            int i, j, k;
            for (g_131 = 0; (g_131 >= 0); g_131 -= 1)
            {
                int i, j;
                g_2208[2][0] = (void*)0;
                return g_221[g_220][(g_131 + 1)];
            }
            g_393[(g_220 + 1)][g_798] = ((safe_lshift_func_uint8_t_u_u(p_48, ((((safe_add_func_int16_t_s_s((((*l_2213) = 65526UL) || (*g_570)), (p_49 == (***g_1489)))) || ((((((((*l_2214) = &g_1719[1][5][2]) != ((((-8L) == ((**g_1699) = (safe_mul_func_uint8_t_u_u(l_2217, ((***g_1489) = (safe_mod_func_uint16_t_u_u(l_2220[6][1], l_2217))))))) > p_49) , &g_1719[1][5][2])) & p_48) != l_2217) >= (**g_255)) | l_2220[3][1]) , (*g_570))) != 0UL) < (*g_326)))) <= 0x4F210C9BE36A27B9LL);
            for (g_98 = 2; (g_98 >= 0); g_98 -= 1)
            {
                int16_t l_2244 = 0xCC98L;
                int32_t *l_2245 = (void*)0;
                uint8_t *l_2246[10][1][7] = {{{&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1]}},{{&g_2170,&g_269[0],&g_2170,&g_269[0],&g_2170,&g_269[0],&g_2170}},{{&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1]}},{{&g_2170,&g_269[0],&g_2170,&g_269[0],&g_2170,&g_269[0],&g_2170}},{{&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1]}},{{&g_2170,&g_269[0],&g_2170,&g_269[0],&g_2170,&g_269[0],&g_2170}},{{&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1]}},{{&g_2170,&g_269[0],&g_2170,&g_269[0],&g_2170,&g_269[0],&g_2170}},{{&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1],&g_281[1]}},{{&g_2170,&g_269[0],&g_2170,&g_269[0],&g_2170,&g_269[0],&g_2170}}};
                int32_t l_2267 = (-1L);
                int32_t l_2268 = 4L;
                int32_t l_2269 = 0x86BDAE89L;
                int32_t l_2270 = 0x9718B2F1L;
                int32_t l_2271[4][4] = {{1L,1L,0xB5C50EC3L,0xB5C50EC3L},{1L,1L,0xB5C50EC3L,0xB5C50EC3L},{1L,1L,0xB5C50EC3L,0xB5C50EC3L},{1L,1L,0xB5C50EC3L,0xB5C50EC3L}};
                int i, j, k;
                for (l_2057 = 2; (l_2057 >= 0); l_2057 -= 1)
                {
                    uint32_t *****l_2221 = (void*)0;
                    uint32_t l_2225[5][8] = {{0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL},{0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL},{0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL},{0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL},{0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL,0xDD9FECAEL}};
                    uint8_t ****l_2247 = &g_541;
                    uint32_t l_2256[10][5] = {{0x1C61529FL,4294967295UL,0x1C61529FL,0UL,0UL},{0x1C61529FL,4294967295UL,0x1C61529FL,0UL,0UL},{0x1C61529FL,4294967295UL,0x1C61529FL,0UL,0UL},{0x1C61529FL,4294967295UL,0x1C61529FL,0UL,0UL},{0x1C61529FL,4294967295UL,0x1C61529FL,0UL,0UL},{0x1C61529FL,4294967295UL,0x1C61529FL,0UL,0UL},{0x1C61529FL,4294967295UL,0x1C61529FL,0UL,0UL},{0x1C61529FL,4294967295UL,0x1C61529FL,0UL,0UL},{0x1C61529FL,4294967295UL,0x1C61529FL,0UL,0UL},{0x1C61529FL,4294967295UL,0x1C61529FL,0UL,0UL}};
                    int32_t l_2261 = 0L;
                    int32_t l_2266[5][1];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2266[i][j] = 1L;
                    }
                    g_2222 = l_2221;
                    for (g_195 = 0; (g_195 <= 0); g_195 += 1)
                    {
                        int32_t l_2224 = 0x2D12DE6DL;
                        int i, j;
                        l_2225[1][2]++;
                    }
                    for (g_131 = 1; (g_131 >= 0); g_131 -= 1)
                    {
                        uint16_t l_2242[4][2] = {{0x0BEFL,0xC529L},{0x0BEFL,0x0BEFL},{0xC529L,0x0BEFL},{0x0BEFL,0xC529L}};
                        uint64_t *l_2252 = &g_195;
                        int32_t l_2253 = 0x37BC8261L;
                        uint8_t ***l_2258 = &g_255;
                        uint8_t ****l_2257 = &l_2258;
                        int32_t l_2265[9][1][1] = {{{0xE6E0DF5AL}},{{(-1L)}},{{0xE6E0DF5AL}},{{(-1L)}},{{0xE6E0DF5AL}},{{(-1L)}},{{0xE6E0DF5AL}},{{(-1L)}},{{0xE6E0DF5AL}}};
                        int8_t l_2272[2][8] = {{(-8L),(-8L),6L,(-8L),(-8L),6L,(-8L),(-8L)},{0L,(-8L),0L,0L,(-8L),0L,0L,(-8L)}};
                        int i, j, k;
                        l_2245 = func_88((p_50 = ((0x8576L && (safe_add_func_int16_t_s_s(((*l_2066) == (l_2230[4] = (*g_1489))), (safe_lshift_func_int16_t_s_u(0L, ((65531UL < ((*l_2213) = ((safe_mod_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s((((((-1L) < (*p_52)) | (+(safe_mod_func_int16_t_s_s(((*g_570) = ((safe_lshift_func_int16_t_s_u((*g_570), 15)) > (0x9374B9F4C177437DLL <= l_2225[4][5]))), l_2242[0][0])))) == l_2243) | (-5L)), 249UL)) <= p_49) <= l_2242[0][1]), (-1L))) , 0x845DL))) || l_2244)))))) , (void*)0)), (*g_255), g_393[(g_220 + 1)][g_798], (**g_1490), l_2242[2][0]);
                        (**g_2081) = func_88(func_76(p_48), l_2246[4][0][3], ((void*)0 == l_2247), ((**g_1490) = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((*l_2252) = l_2220[6][1]), (l_2253 |= (**g_1699)))), ((safe_sub_func_int8_t_s_s(0x98L, 254UL)) | l_2256[4][2])))), p_49);
                        (*g_2082) = func_76(((*g_540) != ((*l_2257) = (*g_540))));
                        l_2273[8]++;
                    }
                }
                return (***g_1489);
            }
            for (l_2158 = 0; (l_2158 <= 0); l_2158 += 1)
            {
                uint32_t l_2276[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_2276[i] = 0x1008EF74L;
                ++l_2276[2];
            }
            for (g_24 = 0; (g_24 >= 0); g_24 -= 1)
            {
                (*g_720) = (0UL | (**g_1490));
            }
        }
        for (l_2045 = 0; (l_2045 <= 0); l_2045 += 1)
        {
            int32_t l_2279 = 0x6465DC08L;
            uint64_t *l_2280[8] = {&g_1241,&g_195,&g_195,&g_1241,&g_195,&g_195,&g_1241,&g_195};
            int64_t l_2281 = (-1L);
            uint16_t *l_2293 = (void*)0;
            uint16_t *l_2294[4][1][3] = {{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}}};
            int8_t l_2295 = 0x47L;
            int i, j, k;
            if (((l_2279 > ((p_49 <= (l_2281 = l_2264[0])) == (((((*g_1700) = 1L) , (((255UL ^ 0L) < (((safe_rshift_func_uint16_t_u_u((((((0xEFL ^ (safe_mul_func_uint16_t_u_u(0UL, (((l_2263 &= (((safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((***g_1489) |= (safe_mul_func_uint8_t_u_u((&l_2062[0] != l_2292), l_2279))), (***g_541))) == 1UL), 65533UL)) , (**g_1490)) == l_2279)) ^ 0L) >= (*p_50))))) | l_2279) == 0x03L) ^ (-8L)) && (**g_1490)), 0)) >= (*g_570)) || l_2295)) | l_2295)) | (*g_570)) < 0x36L))) != 9L))
            {
                uint32_t l_2298 = 0x4C0915FCL;
                for (g_31 = 0; (g_31 <= 3); g_31 += 1)
                {
                    uint32_t l_2296 = 0xA3428438L;
                    for (g_1830 = 0; (g_1830 <= 0); g_1830 += 1)
                    {
                        (**g_2081) = (**g_2081);
                    }
                    (***g_2081) ^= (*p_50);
                    if (l_2296)
                        break;
                }
                if (g_220)
                    goto lbl_2297;
                --l_2298;
                l_2301[2][4]--;
            }
            else
            {
                uint64_t l_2304 = 0xA272E7E9FB3AEF0CLL;
                if (l_2304)
                    break;
                for (l_2158 = 0; (l_2158 <= 3); l_2158 += 1)
                {
                    int i, j, k;
                    g_290[(g_220 + 1)][(g_220 + 3)] &= g_219[(l_2045 + 4)];
                    if (g_219[(l_2158 + 1)])
                        break;
                    (***g_2081) = ((safe_mod_func_uint8_t_u_u((g_269[l_2158] |= (l_2279 , l_2304)), g_290[(g_220 + 1)][(g_220 + 3)])) , (safe_mod_func_uint8_t_u_u(((*g_256) >= (((*p_50) , (((**l_2054) &= (safe_add_func_int32_t_s_s((l_2279 >= (safe_div_func_int32_t_s_s(l_2295, (safe_mod_func_uint16_t_u_u(g_219[(l_2158 + 1)], (p_48 , l_2281)))))), (*p_52)))) != l_2281)) | 1UL)), (*g_30))));
                    if ((*g_720))
                        break;
                }
            }
            if ((****g_2080))
                continue;
            return (***g_1489);
        }
    }
    for (l_2069 = 2; (l_2069 >= (-29)); l_2069--)
    {
        uint16_t **l_2319 = &g_972[0][0][0];
        int32_t l_2320 = (-2L);
        int32_t l_2335 = (-7L);
        uint64_t *l_2336[2];
        int32_t l_2338 = 0xAAB2A123L;
        int32_t l_2339[3][6][9] = {{{(-3L),0x2AB67312L,(-1L),0x51DABA5DL,0x090A8C73L,0xC70B5F69L,3L,0x431B3FCDL,0x2A451E7EL},{1L,0x036E8254L,0xDE94E36BL,0x1F469DC8L,0xF33D140EL,0x9702AB04L,(-6L),(-5L),(-6L)},{0x053ABDBDL,0x2AB67312L,0x08A82E32L,0x08A82E32L,0x2AB67312L,0x053ABDBDL,0xAA762861L,0x3C61942FL,0x1A27D771L},{0xF33D140EL,(-9L),0xC7C0104BL,0L,0xBDEC8B57L,0xDE94E36BL,0x9BE9E0A6L,2L,0L},{0x1A27D771L,0xE13CD0DBL,3L,0x9186F8B6L,0x053ABDBDL,(-1L),0x053ABDBDL,0x9186F8B6L,3L},{2L,2L,0x036E8254L,0x9BE9E0A6L,(-5L),(-4L),0xBDEC8B57L,0L,0xC7C0104BL}},{{0x146DD524L,0x2AB67312L,7L,0xC70B5F69L,0xA18CC834L,0xAA762861L,(-7L),0x053ABDBDL,0x053ABDBDL},{0xC7C0104BL,0x1F469DC8L,0x036E8254L,0L,0x036E8254L,0x1F469DC8L,0xC7C0104BL,0x3192B746L,(-9L)},{0x431B3FCDL,(-7L),3L,(-7L),0x9186F8B6L,0xE13CD0DBL,0xAA762861L,(-1L),0x08A82E32L},{(-1L),(-5L),0xA7965D11L,0xF33D140EL,0x3192B746L,1L,1L,0x3192B746L,0xF33D140EL},{0x090A8C73L,0x146DD524L,0x090A8C73L,0x3C61942FL,0x2AB67312L,0x9186F8B6L,0xA18CC834L,0x053ABDBDL,0x2A451E7EL},{(-6L),0xF33D140EL,0x1EE394F3L,(-4L),0xE5360119L,0xA7965D11L,(-1L),0L,0xBC9B9D56L}},{{0x9186F8B6L,0xC70B5F69L,(-7L),0x3C61942FL,0x3C61942FL,(-7L),0xC70B5F69L,0x9186F8B6L,0x090A8C73L},{0x9BE9E0A6L,0x0035E637L,0xDE94E36BL,0xF33D140EL,0xBDEC8B57L,0xBC9B9D56L,0x1EE394F3L,2L,0x3192B746L},{0xC70B5F69L,0xC778EFA5L,0x053ABDBDL,(-7L),0x090A8C73L,3L,7L,3L,0x090A8C73L},{0L,(-1L),(-1L),0L,0x1F469DC8L,0xE5360119L,0L,0x9BE9E0A6L,0xBC9B9D56L},{(-7L),0x053ABDBDL,0xC778EFA5L,0xC70B5F69L,0x146DD524L,(-7L),0x2AB67312L,0xE13CD0DBL,0x2A451E7EL},{0xF33D140EL,0xDE94E36BL,0x0035E637L,0x9BE9E0A6L,0x1F469DC8L,0x9BE9E0A6L,0x0035E637L,0xDE94E36BL,0xF33D140EL}}};
        int32_t l_2340 = 0xBC0C80C9L;
        uint32_t l_2341 = 18446744073709551609UL;
        const uint8_t l_2346 = 1UL;
        uint8_t l_2348 = 248UL;
        int32_t *** const *l_2377 = (void*)0;
        const int32_t *l_2385 = &l_2338;
        const int32_t **l_2384 = &l_2385;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2336[i] = &g_2031[4];
        if (((safe_sub_func_int16_t_s_s(((void*)0 == l_2319), ((l_2320 = (l_2320 & ((p_49 || p_48) | (safe_sub_func_uint64_t_u_u(((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(p_48, ((safe_add_func_uint16_t_u_u((0x84E04F8DL || (safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((l_2340 ^= (--l_2341)) , ((safe_lshift_func_int16_t_s_u(l_2346, l_2347)) , p_49)), 0x74L)), 0x1B99297C0A964B63LL))), p_49)) & 0x280CL))), l_2335)), l_2348)) || (*p_52)) >= p_49) < p_49), (**g_1699)))))) & 0x53B413ECA28C0AEBLL))) , l_2338))
        {
            uint8_t *****l_2364 = &g_540;
            int32_t l_2375[1];
            int32_t ****l_2376 = &l_2061;
            uint32_t l_2378[5][4][7] = {{{1UL,0x07BB7D36L,0x59303987L,1UL,1UL,0x59303987L,0x07BB7D36L},{4294967288UL,4294967295UL,3UL,4294967288UL,0xDDF1352EL,0xDDF1352EL,4294967288UL},{5UL,0x07BB7D36L,5UL,8UL,0x07BB7D36L,8UL,8UL},{0x31DA364DL,4294967288UL,4294967295UL,4294967288UL,0x31DA364DL,4294967295UL,4294967292UL}},{{1UL,8UL,8UL,1UL,8UL,8UL,1UL},{3UL,4294967292UL,4294967295UL,0xDDF1352EL,4294967292UL,0xDDF1352EL,4294967295UL},{1UL,1UL,0x59303987L,0x07BB7D36L,1UL,0x59303987L,1UL},{0x31DA364DL,4294967295UL,4294967295UL,0x31DA364DL,0xDDF1352EL,3UL,0x31DA364DL}},{{5UL,1UL,8UL,8UL,1UL,0x7D65CAE7L,0x59303987L},{0xDDF1352EL,4294967295UL,4294967292UL,3UL,3UL,4294967292UL,4294967295UL},{8UL,0x59303987L,0x7D65CAE7L,8UL,0x6C08DA6CL,0x6C08DA6CL,8UL},{4294967289UL,4294967295UL,4294967289UL,7UL,4294967295UL,4294967295UL,4294967295UL}},{{8UL,8UL,1UL,8UL,8UL,1UL,5UL},{3UL,4294967295UL,7UL,3UL,7UL,4294967295UL,3UL},{0x7D65CAE7L,5UL,0x59303987L,0x6C08DA6CL,5UL,0x6C08DA6CL,0x59303987L},{3UL,3UL,4294967292UL,4294967295UL,0xDDF1352EL,4294967292UL,0xDDF1352EL}},{{8UL,0x59303987L,0x59303987L,8UL,0x6C08DA6CL,0x7D65CAE7L,8UL},{4294967289UL,0xDDF1352EL,7UL,7UL,0xDDF1352EL,4294967289UL,4294967295UL},{8UL,8UL,1UL,5UL,5UL,1UL,8UL},{0xDDF1352EL,4294967295UL,4294967289UL,0xDDF1352EL,7UL,7UL,0xDDF1352EL}}};
            int16_t **l_2380 = &g_570;
            int16_t ***l_2379[8][4] = {{&l_2380,&l_2380,&l_2380,&l_2380},{&l_2380,&l_2380,&l_2380,&l_2380},{&l_2380,&l_2380,&l_2380,&l_2380},{&l_2380,&l_2380,&l_2380,&l_2380},{&l_2380,&l_2380,&l_2380,&l_2380},{&l_2380,&l_2380,&l_2380,&l_2380},{&l_2380,&l_2380,&l_2380,&l_2380},{&l_2380,&l_2380,&l_2380,&l_2380}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2375[i] = 1L;
            g_2381 = (((safe_lshift_func_uint16_t_u_u((((***g_2081) &= ((p_48 | ((safe_unary_minus_func_uint16_t_u((safe_mod_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u(p_48, (p_48 , ((safe_rshift_func_int8_t_s_u(((safe_div_func_int64_t_s_s((((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((((((void*)0 != l_2364) , (safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((**g_1490) , ((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((((*g_1700) &= l_2375[0]) , l_2376) == l_2377) && p_49), p_49)), (***g_1489))), 4)) & p_49)), 255UL)), p_48))) ^ 0xFFBC523401E5B4BALL) > p_48), 0xF4L)), 0)) != 0xD647C19EDD3A6270LL) , p_49), p_48)) , (*g_30)), 4)) & g_8)))) , 0x14C923DBF3A56081LL), l_2378[3][0][1])))) , 0x1E03DBD97F58E8F7LL)) ^ 65535UL)) , p_48), 10)) < p_48) , &g_570);
            if (g_220)
                goto lbl_2297;
            (***g_2081) ^= (safe_sub_func_uint8_t_u_u((*****g_1711), ((l_2061 = &l_2062[2]) != (*g_2080))));
        }
        else
        {
            if ((*p_50))
                break;
        }
        (*l_2384) = p_52;
        --g_2386;
    }
    return (**g_1490);
}







static int32_t * const func_53(uint16_t p_54, uint32_t * p_55, int16_t p_56, uint32_t p_57, uint16_t p_58)
{
    uint16_t l_1297 = 0xFE0DL;
    uint16_t **l_1301 = &g_972[0][0][0];
    uint16_t ***l_1300 = &l_1301;
    int64_t *l_1302 = &g_193;
    uint64_t *l_1313 = &g_1241;
    int8_t *l_1320 = &g_337;
    uint8_t *l_1321 = &g_269[0];
    int32_t *l_1322 = &g_393[1][0];
    int32_t l_1323 = 0x34836C03L;
    int32_t l_1324 = 0x5632F093L;
    int32_t l_1463 = 0xF322A86AL;
    int32_t l_1465 = 0x6A2D0A2BL;
    int32_t l_1466 = 0L;
    int32_t l_1467 = 6L;
    int32_t l_1469 = 0xA116F507L;
    int32_t l_1473 = (-7L);
    uint8_t l_1474[7][7][1] = {{{7UL},{251UL},{254UL},{0x88L},{0x9DL},{0xC8L},{0x9DL}},{{0x88L},{254UL},{251UL},{7UL},{251UL},{254UL},{0x88L}},{{0x9DL},{0xC8L},{0x9DL},{0x88L},{254UL},{251UL},{7UL}},{{251UL},{254UL},{0x88L},{0x9DL},{0xC8L},{0x9DL},{0x88L}},{{254UL},{251UL},{7UL},{251UL},{254UL},{0x88L},{0x9DL}},{{0xC8L},{0x9DL},{0x88L},{254UL},{251UL},{7UL},{251UL}},{{254UL},{0x88L},{0x9DL},{0xC8L},{0x9DL},{0x88L},{254UL}}};
    int8_t ***l_1491 = (void*)0;
    int32_t l_1541 = 0x03BEB57FL;
    int32_t l_1542[7][7][5] = {{{3L,0x10132D90L,8L,0x89271431L,2L},{0L,0L,0L,0x7D369DDCL,0L},{0x10132D90L,0x10132D90L,0x2B29D4B2L,0x85CC7A48L,(-1L)},{1L,0x10132D90L,(-1L),0x57D268FAL,(-1L)},{0x07135D85L,0L,8L,0x88BEFFDAL,8L},{0xAEC2CAC6L,0x10132D90L,5L,5L,2L},{(-1L),1L,0xEDCE2C28L,(-1L),0x9806E49EL}},{{1L,0x2B29D4B2L,0L,0x9CF796DDL,0xEEC91838L},{0L,1L,0x799F8CCCL,0xA1B93DE4L,0xAB6ADFC5L},{5L,1L,0xEEC91838L,(-10L),0x87CE9542L},{8L,0x2B29D4B2L,0L,0xABA8B191L,0x9A827B21L},{(-1L),1L,0x60600B0AL,1L,0x9806E49EL},{0x2B29D4B2L,1L,0L,0xDD4DE1DBL,0xEBEDC10DL},{0L,0x2B29D4B2L,0x9A827B21L,0xA1B93DE4L,0L}},{{8L,1L,0x9E7EB57CL,0xADAAAD2BL,0x87CE9542L},{1L,1L,0L,(-3L),1L},{(-1L),0x2B29D4B2L,0xEDCE2C28L,1L,0xEDCE2C28L},{1L,1L,(-2L),0x9CF796DDL,0xEBEDC10DL},{0x6ECB7070L,1L,0x9A827B21L,(-1L),0xAB6ADFC5L},{8L,0x2B29D4B2L,0xEEC91838L,0xADAAAD2BL,0L},{8L,1L,0xB45ED8CBL,0xABA8B191L,1L}},{{(-1L),1L,0xEDCE2C28L,(-1L),0x9806E49EL},{1L,0x2B29D4B2L,0L,0x9CF796DDL,0xEEC91838L},{0L,1L,0x799F8CCCL,0xA1B93DE4L,0xAB6ADFC5L},{5L,1L,0xEEC91838L,(-10L),0x87CE9542L},{8L,0x2B29D4B2L,0L,0xABA8B191L,0x9A827B21L},{(-1L),1L,0x60600B0AL,1L,0x9806E49EL},{0x2B29D4B2L,1L,0L,0xDD4DE1DBL,0xEBEDC10DL}},{{0L,0x2B29D4B2L,0x9A827B21L,0xA1B93DE4L,0L},{8L,1L,0x9E7EB57CL,0xADAAAD2BL,0x87CE9542L},{1L,1L,0L,(-3L),1L},{(-1L),0x2B29D4B2L,0xEDCE2C28L,1L,0xEDCE2C28L},{1L,1L,(-2L),0x9CF796DDL,0xEBEDC10DL},{0x6ECB7070L,1L,0x9A827B21L,(-1L),0xAB6ADFC5L},{8L,0x2B29D4B2L,0xEEC91838L,0xADAAAD2BL,0L}},{{8L,1L,0xB45ED8CBL,0xABA8B191L,1L},{(-1L),1L,0xEDCE2C28L,(-1L),0x9806E49EL},{1L,0x2B29D4B2L,0L,0x9CF796DDL,0xEEC91838L},{0L,1L,0x799F8CCCL,0xA1B93DE4L,0xAB6ADFC5L},{5L,1L,0xEEC91838L,(-10L),0x87CE9542L},{8L,0x2B29D4B2L,0L,0xABA8B191L,0x9A827B21L},{(-1L),1L,0x60600B0AL,1L,0x9806E49EL}},{{0x2B29D4B2L,1L,0L,0xDD4DE1DBL,0xEBEDC10DL},{0L,0x2B29D4B2L,0x9A827B21L,0xA1B93DE4L,0L},{8L,0L,0x57D268FAL,0x7C0C4BFBL,0xA4D56C08L},{0x9E7EB57CL,0L,0x7D369DDCL,0x07135D85L,0xC1DD5194L},{0x9A827B21L,(-2L),0x88BEFFDAL,0x291B70AAL,0x88BEFFDAL},{0L,0L,0x5CA43FE9L,0x6C29D909L,0x29B46EDAL},{0x60600B0AL,0L,5L,(-10L),(-1L)}}};
    int16_t l_1543 = 1L;
    uint16_t l_1544[3][1];
    int8_t **l_1567 = (void*)0;
    int32_t * const **l_1631 = &g_529;
    uint64_t l_1660 = 0x354E2BF388E5035ELL;
    int32_t *l_1732 = &g_393[1][0];
    int8_t l_1853 = (-1L);
    uint32_t ****l_1862 = &g_787;
    int32_t l_1893 = (-1L);
    int32_t *l_2029 = &l_1467;
    int32_t *l_2030[5][2][7] = {{{&l_1893,&l_1467,&l_1893,&l_1463,&l_1469,&l_1469,&l_1463},{&l_1893,&l_1469,&l_1893,&l_1469,(void*)0,(void*)0,&l_1469}},{{&l_1893,&l_1467,&l_1893,&l_1463,&l_1469,&l_1469,&l_1463},{&l_1893,&l_1469,&l_1893,&l_1469,(void*)0,(void*)0,&l_1469}},{{&l_1893,&l_1467,&l_1893,&l_1463,&l_1469,&l_1469,&l_1463},{&l_1893,&l_1469,&l_1893,&l_1469,(void*)0,(void*)0,&l_1469}},{{&l_1893,&l_1467,&l_1893,&l_1463,&l_1469,&l_1469,&l_1463},{&l_1893,&l_1469,&l_1893,&l_1469,(void*)0,(void*)0,&l_1469}},{{&l_1893,&l_1467,&l_1893,&l_1463,&l_1469,&l_1469,&l_1463},{&l_1893,&l_1469,&l_1893,&l_1469,(void*)0,(void*)0,&l_1469}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_1544[i][j] = 1UL;
    }
    l_1324 = (l_1323 |= (((*l_1322) |= (safe_sub_func_uint16_t_u_u((safe_div_func_int64_t_s_s(l_1297, (((safe_rshift_func_int8_t_s_u((((*l_1321) &= ((l_1300 != (void*)0) == (((*l_1302) = (18446744073709551612UL & p_57)) == (safe_mod_func_int8_t_s_s(((*l_1320) |= (((((safe_lshift_func_int8_t_s_u(((*g_30) = (((*g_720) = (safe_mod_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u(p_56, ((*g_326) = (safe_add_func_uint64_t_u_u(((*l_1313) = l_1297), (safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(((p_57 & ((safe_rshift_func_uint16_t_u_u(l_1297, p_56)) && p_54)) & 0xFB2F70B2L), (**g_255))) , (*p_55)), 9UL))))))) != (-9L)) , (-1L)), p_56))) < 4294967295UL)), l_1297)) , (void*)0) != l_1302) , &g_540) != &g_540)), p_58))))) <= l_1297), 2)) , l_1297) ^ (-9L)))), l_1297))) ^ (***g_787)));
    for (g_131 = 0; (g_131 < 3); g_131++)
    {
        uint64_t l_1343 = 4UL;
        int32_t *l_1344 = (void*)0;
        int32_t *l_1345 = &g_1002;
        const int8_t l_1346 = 0x3BL;
        int32_t *l_1347 = &g_279;
        int32_t l_1348[3];
        uint16_t *l_1349 = &l_1297;
        uint8_t l_1382 = 0x8DL;
        int32_t l_1455 = (-10L);
        int32_t l_1456 = 1L;
        int32_t l_1457 = 1L;
        int32_t l_1459 = 0L;
        int32_t l_1461 = 0x9B9D0BB2L;
        int32_t l_1462[6];
        int32_t l_1510 = 6L;
        int8_t ** const l_1569 = &l_1320;
        uint32_t l_1611 = 0x3144EB21L;
        uint8_t l_1626 = 255UL;
        uint32_t l_1712 = 0x7A41C135L;
        uint16_t l_1756 = 1UL;
        uint8_t l_1758 = 0xDFL;
        int32_t l_1793 = 0x3DCD6CF6L;
        uint64_t l_1836 = 0xC2FAF207E81054E3LL;
        int32_t l_1854 = 8L;
        int8_t l_1856 = (-1L);
        int8_t *l_1947 = &g_337;
        uint64_t l_1955[10][9] = {{18446744073709551615UL,0xD507191D31D794F6LL,1UL,0xD507191D31D794F6LL,18446744073709551615UL,0xD507191D31D794F6LL,1UL,0xD507191D31D794F6LL,18446744073709551615UL},{18446744073709551615UL,1UL,1UL,18446744073709551615UL,0xE11A0B43892F94ECLL,0x94D0F56D5924FCC7LL,0x94D0F56D5924FCC7LL,0xE11A0B43892F94ECLL,18446744073709551615UL},{0xBF72100D06FBAC54LL,0xD507191D31D794F6LL,0xBF72100D06FBAC54LL,0x68E7DF99B16AAD30LL,0xBF72100D06FBAC54LL,0xD507191D31D794F6LL,0xBF72100D06FBAC54LL,0x68E7DF99B16AAD30LL,0xBF72100D06FBAC54LL},{18446744073709551615UL,18446744073709551615UL,0x94D0F56D5924FCC7LL,1UL,0xE11A0B43892F94ECLL,0xE11A0B43892F94ECLL,1UL,0x94D0F56D5924FCC7LL,18446744073709551615UL},{18446744073709551615UL,0x68E7DF99B16AAD30LL,1UL,0x68E7DF99B16AAD30LL,18446744073709551615UL,0x68E7DF99B16AAD30LL,1UL,0x68E7DF99B16AAD30LL,18446744073709551615UL},{0xE11A0B43892F94ECLL,1UL,0x94D0F56D5924FCC7LL,18446744073709551615UL,18446744073709551615UL,0x94D0F56D5924FCC7LL,1UL,0xE11A0B43892F94ECLL,0xE11A0B43892F94ECLL},{0xBF72100D06FBAC54LL,0x68E7DF99B16AAD30LL,0xBF72100D06FBAC54LL,0xD507191D31D794F6LL,0xBF72100D06FBAC54LL,0x68E7DF99B16AAD30LL,0xBF72100D06FBAC54LL,0xD507191D31D794F6LL,0xBF72100D06FBAC54LL},{0xE11A0B43892F94ECLL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,0xE11A0B43892F94ECLL,0x94D0F56D5924FCC7LL,0x94D0F56D5924FCC7LL,0xE11A0B43892F94ECLL},{18446744073709551615UL,0xD507191D31D794F6LL,1UL,0xD507191D31D794F6LL,18446744073709551615UL,0xD507191D31D794F6LL,1UL,0xD507191D31D794F6LL,18446744073709551615UL},{18446744073709551615UL,1UL,1UL,18446744073709551615UL,0xE11A0B43892F94ECLL,0x94D0F56D5924FCC7LL,0x94D0F56D5924FCC7LL,0xE11A0B43892F94ECLL,18446744073709551615UL}};
        uint64_t **l_1998 = &l_1313;
        int32_t *l_2023 = &l_1457;
        int32_t *l_2024[5][6] = {{&g_393[0][4],&g_393[0][4],(void*)0,&l_1456,&l_1510,&l_1455},{&l_1467,&l_1510,&l_1455,&l_1467,&l_1324,&l_1467},{&l_1455,&l_1456,&l_1455,&g_1655,(void*)0,&l_1462[2]},{&g_8,&g_1655,&l_1467,&g_393[0][4],&l_1456,&l_1456},{&g_393[0][4],&l_1456,&l_1456,&g_393[0][4],&l_1467,&g_1655}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_1348[i] = (-9L);
        for (i = 0; i < 6; i++)
            l_1462[i] = 0xB3761DC2L;
    }
    g_2031[4]++;
    return p_55;
}







static uint16_t func_59(int8_t p_60, int32_t * p_61, uint8_t p_62, const int32_t p_63, int32_t * p_64)
{
    int32_t l_78 = 0x691D5B90L;
    int32_t *l_79[5][7] = {{&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8},{&l_78,&l_78,&g_8,&l_78,&l_78,&g_8,&l_78},{&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8},{&l_78,&l_78,&l_78,&l_78,&l_78,&l_78,&l_78},{&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8}};
    uint8_t **l_334 = &g_256;
    int16_t l_338 = 9L;
    int8_t **l_340 = &g_30;
    int8_t **l_1072[7] = {&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30};
    int64_t l_1083 = (-8L);
    uint8_t l_1107 = 255UL;
    uint32_t l_1120 = 6UL;
    int32_t l_1123[2];
    const int32_t *l_1182 = &g_393[1][0];
    uint32_t l_1263 = 3UL;
    uint8_t ****l_1278 = &g_541;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1123[i] = 0x397B77D2L;
    l_79[4][5] = func_76(l_78);
    g_80[0]++;
    for (g_11 = 5; (g_11 != 11); ++g_11)
    {
        int8_t *l_97 = &g_98;
        uint8_t *l_324 = &g_325;
        int16_t *l_330[3];
        int32_t l_331 = 0x67DAB682L;
        int8_t *l_335 = (void*)0;
        int8_t *l_336 = &g_337;
        int8_t ***l_1070 = &l_340;
        int8_t ***l_1071 = (void*)0;
        uint32_t * const *l_1088[1][10] = {{&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202}};
        uint32_t * const **l_1087 = &l_1088[0][4];
        uint32_t l_1095 = 0x79A33626L;
        int32_t l_1110 = 0L;
        int32_t l_1111 = 0xBDE8D859L;
        int32_t l_1118 = 0L;
        int64_t *l_1159 = &g_193;
        int8_t l_1228[8][9] = {{0L,0xD8L,0xBFL,0L,0x8BL,0x8BL,0L,0xBFL,0xD8L},{1L,(-1L),1L,0x7FL,(-2L),(-1L),(-1L),(-2L),0x7FL},{7L,0L,7L,1L,0L,0L,1L,1L,0L},{1L,(-1L),1L,(-1L),1L,0x7FL,(-2L),(-1L),(-1L)},{0xBFL,0xD8L,0L,1L,0L,0xD8L,0xBFL,0L,0x8BL},{0x1CL,0x20L,(-1L),0x7FL,0xABL,0x7FL,(-1L),0x20L,0x1CL},{0xD8L,0xE6L,1L,0L,0L,0L,0L,0L,1L},{(-2L),(-2L),(-1L),1L,0x20L,(-1L),0x1CL,(-1L),0x20L}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_330[i] = &g_280;
        l_1072[4] = ((*l_1070) = func_85(func_88(func_94((g_24 , ((*l_97) &= (*g_30))), &g_31), g_256, g_12[5], ((*l_336) &= (((g_326 = l_324) != ((((safe_lshift_func_int16_t_s_s((l_331 = (~0xC4F47248L)), 8)) , (((safe_mod_func_int8_t_s_s((((((0x1B9A4E51L >= (*g_202)) , 0x1425B391CD93EC3ALL) || 8L) <= p_62) > 0xFBL), 0xAAL)) , l_334) != l_334)) > p_60) , &g_325)) <= g_228)), l_338), l_340));
    }
    return (*l_1182);
}







static int32_t * func_76(int16_t p_77)
{
    return &g_8;
}







static int8_t ** func_85(int32_t * p_86, int8_t ** p_87)
{
    uint32_t l_349[4] = {0xC167C2F4L,0xC167C2F4L,0xC167C2F4L,0xC167C2F4L};
    uint8_t ***l_356 = &g_255;
    uint8_t ****l_355 = &l_356;
    int32_t l_370 = 0xBF4BDEB0L;
    int64_t *l_380 = &g_228;
    int32_t l_391 = (-2L);
    int32_t l_519 = 0L;
    int32_t l_522 = 0xB85E3ECCL;
    uint32_t l_523 = 18446744073709551615UL;
    uint32_t l_584 = 18446744073709551615UL;
    int32_t l_650 = 0xCD5477ECL;
    uint32_t **l_659 = &g_202;
    int32_t l_690 = 0x626CA44BL;
    int32_t l_756 = 0x46B3CA98L;
    int8_t l_799 = 0x4FL;
    uint32_t *l_800 = &l_349[1];
    int32_t **l_825 = &g_720;
    int16_t l_832[2];
    int32_t l_834 = (-4L);
    uint64_t l_841 = 18446744073709551615UL;
    int8_t l_915[1][1];
    uint32_t l_948 = 0xF6FF52A7L;
    uint16_t *l_988[7][6] = {{&g_149,&g_149,(void*)0,&g_149,&g_149,&g_149},{&g_149,(void*)0,&g_149,(void*)0,&g_149,&g_149},{&g_149,&g_149,&g_149,&g_149,&g_149,(void*)0},{&g_149,&g_149,&g_149,&g_149,(void*)0,(void*)0},{&g_149,&g_149,&g_149,&g_149,&g_149,&g_149},{(void*)0,&g_149,&g_149,&g_149,(void*)0,&g_149},{&g_149,&g_149,(void*)0,&g_149,&g_149,&g_149}};
    uint16_t **l_987[3];
    int32_t l_1003 = 1L;
    int32_t l_1004[9][8] = {{0x1A061D55L,(-7L),0x1A061D55L,(-10L),0x6945960FL,0x2117D7BAL,(-5L),0L},{0L,0xE797FF57L,(-10L),(-4L),1L,0x6945960FL,0x6945960FL,1L},{0L,0x65BF1147L,0x65BF1147L,0L,0x6945960FL,(-4L),0x952FC220L,0x2117D7BAL},{0x1A061D55L,0x5E14CFEFL,(-4L),(-5L),0x65BF1147L,(-7L),0x2117D7BAL,(-7L)},{0x6F3CF25EL,0x5E14CFEFL,0x952FC220L,0x5E14CFEFL,0x6F3CF25EL,(-4L),0L,0xBD72606CL},{(-4L),0x65BF1147L,0x6F3CF25EL,0L,0x1472E59BL,0x6945960FL,0x5E14CFEFL,0x5E14CFEFL},{0x2117D7BAL,0xE797FF57L,0x6F3CF25EL,0x6F3CF25EL,0xE797FF57L,0x2117D7BAL,0L,0x1472E59BL},{0x1472E59BL,(-7L),0x952FC220L,0xBD72606CL,0x5E14CFEFL,0L,0x2117D7BAL,(-4L)},{0x952FC220L,0x1A061D55L,(-4L),0xBD72606CL,(-4L),0x1A061D55L,0x952FC220L,0x1472E59BL}};
    uint32_t l_1005 = 0UL;
    uint8_t l_1016 = 2UL;
    uint16_t **l_1035[1];
    uint16_t ***l_1034 = &l_1035[0];
    int8_t **l_1069 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
        l_832[i] = 0xFB63L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_915[i][j] = 0L;
    }
    for (i = 0; i < 3; i++)
        l_987[i] = &l_988[2][3];
    for (i = 0; i < 1; i++)
        l_1035[i] = &g_972[0][0][0];
    return l_1069;
}







static int32_t * func_88(int32_t * p_89, uint8_t * p_90, int32_t p_91, int8_t p_92, uint8_t p_93)
{
    int32_t *l_339 = &g_8;
    return l_339;
}







static int32_t * func_94(int8_t p_95, int8_t * p_96)
{
    uint32_t *l_107 = &g_14;
    int32_t l_111 = 0L;
    uint16_t *l_170 = &g_149;
    uint8_t *l_178 = &g_34;
    uint32_t l_204 = 0x15F6FD86L;
    int32_t l_217[3];
    int32_t *l_323 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_217[i] = (-7L);
    for (g_34 = 12; (g_34 <= 57); g_34++)
    {
        uint32_t *l_108 = &g_14;
        int32_t l_112[7] = {0xB111D6B6L,0x962D9888L,0x962D9888L,0xB111D6B6L,0x962D9888L,0x962D9888L,0xB111D6B6L};
        int8_t *l_113 = &g_98;
        uint64_t l_172 = 1UL;
        uint16_t *l_291 = &g_149;
        int i;
        if ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(((*l_113) = ((g_34 , (0x1642L & (l_107 == ((l_108 != (void*)0) , l_107)))) ^ (safe_lshift_func_uint8_t_u_s(((l_111 , p_95) , (((*g_30) = ((((void*)0 == l_107) > l_112[5]) , (*p_96))) > g_24)), l_111)))), g_12[2])) >= g_11), l_112[6])))
        {
            int64_t l_132 = 0x988D8264474F4469LL;
            int32_t l_214 = 1L;
            int32_t *l_278[3];
            int i;
            for (i = 0; i < 3; i++)
                l_278[i] = &l_214;
            if (p_95)
            {
                int16_t *l_130 = &g_131;
                int32_t l_133[5][4][3] = {{{(-1L),0x7329A4BBL,0x351F18F2L},{0x87FBE72DL,(-6L),0x87FBE72DL},{(-1L),0L,0x351F18F2L},{1L,(-6L),1L}},{{(-1L),0x7329A4BBL,0x351F18F2L},{0x87FBE72DL,(-6L),0x87FBE72DL},{(-1L),0L,0x351F18F2L},{1L,(-6L),1L}},{{(-1L),0x7329A4BBL,0x351F18F2L},{0x87FBE72DL,(-6L),0x87FBE72DL},{(-1L),0L,0x351F18F2L},{1L,(-6L),1L}},{{(-1L),0x7329A4BBL,0x351F18F2L},{0x87FBE72DL,(-6L),0x87FBE72DL},{(-1L),0L,0x351F18F2L},{1L,(-6L),1L}},{{(-1L),0x7329A4BBL,0x351F18F2L},{0x87FBE72DL,(-6L),0x87FBE72DL},{(-1L),0L,0x351F18F2L},{1L,(-6L),1L}}};
                int32_t *l_134 = &l_111;
                uint8_t l_207[3][5] = {{0x8BL,255UL,0x8BL,0x8BL,0x8BL},{0x8BL,255UL,0x8BL,0x8BL,0x8BL},{0x8BL,255UL,0x8BL,0x8BL,0x8BL}};
                int32_t *l_227 = (void*)0;
                int32_t *l_229 = &l_217[2];
                int32_t *l_230 = &l_133[0][3][1];
                int32_t *l_231 = &l_133[1][3][0];
                int32_t *l_232[6] = {&g_8,&g_8,&g_8,&g_8,&g_8,&g_8};
                uint8_t *l_244 = &l_207[0][1];
                int8_t **l_250 = (void*)0;
                int i, j, k;
                if (((*l_134) ^= ((((&p_95 == &g_24) , (safe_lshift_func_int16_t_s_s((0xB5D94593L >= 0xD93154CDL), g_11))) <= ((g_14 | ((safe_div_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((+(~((!0x5461874A806017ABLL) != (((*l_113) &= (!((*l_130) &= (safe_rshift_func_int8_t_s_s((*p_96), 2))))) > (g_8 != 0xEF3BFE2BL))))), g_12[2])), l_132)) > (*g_30)), 4294967295UL)) && p_95)) || 4294967287UL)) , l_133[2][2][1])))
                {
                    uint64_t *l_183 = &l_172;
                    int32_t l_190 = 0xDFDFF98CL;
                    for (g_31 = 0; (g_31 == (-8)); g_31 = safe_sub_func_uint16_t_u_u(g_31, 5))
                    {
                        uint64_t l_137 = 0xD286A5854D8CAD77LL;
                        uint16_t *l_148 = &g_149;
                        int32_t l_154 = 0x895C1B54L;
                        uint16_t **l_171 = &l_148;
                        int32_t *l_173 = &l_154;
                        (*l_134) &= l_137;
                        (*l_134) = (+(safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((((~((safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((*l_148) = p_95), 0x8B94L)), g_14)) == 4UL)) ^ (g_98 && (safe_div_func_uint16_t_u_u(p_95, p_95)))) , (safe_mod_func_uint64_t_u_u((l_154 |= (*l_134)), (safe_mod_func_int32_t_s_s((l_112[5] & (-1L)), p_95))))) , (void*)0) != &l_112[6]), 0)), g_34)));
                        (*l_173) &= ((g_14 != ((safe_lshift_func_uint16_t_u_s(((0x0AF8641BL ^ (safe_div_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_add_func_int64_t_s_s((g_80[0] , 0x4CA3D7B8FE932ECCLL), l_132)), ((safe_mul_func_uint16_t_u_u(g_98, (((~(p_95 < (safe_sub_func_uint64_t_u_u((l_170 == ((*l_171) = (void*)0)), g_34)))) , p_95) , l_172))) ^ 8L))) ^ g_80[4]), (-6L)))) & p_95), 12)) , 18446744073709551607UL)) ^ l_111);
                    }
                    (*l_134) = ((safe_div_func_int8_t_s_s(((0x682AE03F78152941LL > p_95) > (safe_add_func_int64_t_s_s((l_178 == p_96), (l_132 , ((*l_183) = (+(safe_lshift_func_int16_t_s_s(0x473EL, (0x9A9CB853F4F87987LL == ((p_95 && ((((safe_unary_minus_func_int32_t_s(g_12[6])) , (void*)0) != l_130) >= 18446744073709551613UL)) ^ g_149)))))))))), (*l_134))) > 0x23L);
                    if (p_95)
                    {
                        uint32_t *l_194[6][7] = {{&g_14,(void*)0,&g_14,&g_14,(void*)0,&g_14,&g_14},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_14,&g_14,(void*)0,&g_14,&g_14,(void*)0},{&g_14,(void*)0,&g_14,&g_14,(void*)0,&g_14,&g_14},{&g_14,&g_14,(void*)0,&g_14,&g_14,(void*)0,&g_14},{&g_14,(void*)0,(void*)0,&g_14,(void*)0,(void*)0,&g_14}};
                        int32_t l_198[3][1];
                        int32_t *l_205[10][4][5] = {{{&l_198[2][0],&l_133[4][1][1],&l_190,&l_133[4][1][1],&l_198[2][0]},{&g_8,&l_133[1][0][1],&l_133[1][0][1],&g_8,&l_198[0][0]},{&g_8,&l_133[4][1][1],&g_8,&l_198[0][0],&g_8},{&g_8,&g_8,&l_198[0][0],&l_133[1][0][1],&l_198[0][0]}},{{&l_198[2][0],&l_198[0][0],&l_190,&l_198[0][0],&l_198[2][0]},{&l_198[0][0],&l_133[1][0][1],&l_198[0][0],&g_8,&g_8},{&g_8,&l_198[0][0],&g_8,&l_133[4][1][1],&g_8},{&l_198[0][0],&g_8,&l_133[1][0][1],&l_133[1][0][1],&g_8}},{{&l_198[2][0],&l_133[4][1][1],&l_190,&l_133[4][1][1],&l_198[2][0]},{&g_8,&l_133[1][0][1],&l_133[1][0][1],&g_8,&l_198[0][0]},{&g_8,&l_133[4][1][1],&g_8,&l_198[0][0],&g_8},{&g_8,&g_8,&l_198[0][0],&l_133[1][0][1],&l_198[0][0]}},{{&l_198[2][0],&l_198[0][0],&l_190,&l_198[0][0],&l_198[2][0]},{&l_198[0][0],&l_133[1][0][1],&l_198[0][0],&g_8,&g_8},{&g_8,&l_198[0][0],&g_8,&l_133[4][1][1],&g_8},{&l_198[0][0],&g_8,&l_133[1][0][1],&l_133[1][0][1],&g_8}},{{&l_198[2][0],&l_133[4][1][1],&l_190,&l_133[4][1][1],&l_198[2][0]},{&g_8,&l_133[1][0][1],&l_133[1][0][1],&g_8,&l_198[0][0]},{&g_8,&l_133[4][1][1],&g_8,&l_198[0][0],&g_8},{&g_8,&g_8,&l_198[0][0],&l_133[1][0][1],&l_198[0][0]}},{{&l_198[2][0],&l_198[0][0],&l_190,&l_198[0][0],&l_198[2][0]},{&l_198[0][0],&l_133[1][0][1],&l_198[0][0],&g_8,&g_8},{&g_8,&l_198[0][0],&g_8,&l_133[4][1][1],&g_8},{&l_198[0][0],&g_8,&l_133[1][0][1],&l_133[1][0][1],&g_8}},{{&l_198[2][0],&l_133[4][1][1],&l_190,&l_133[4][1][1],&l_198[2][0]},{&g_8,&l_133[1][0][1],&l_133[1][0][1],&g_8,&l_198[0][0]},{&g_8,&l_133[4][1][1],&g_8,&l_198[0][0],&g_8},{&g_8,&g_8,&l_198[0][0],&l_133[1][0][1],&l_198[0][0]}},{{&l_198[2][0],&l_198[0][0],&l_190,&l_198[0][0],&l_198[2][0]},{&l_198[0][0],&l_133[1][0][1],&l_198[0][0],&g_8,&g_8},{&g_8,&l_198[0][0],&g_8,&l_133[4][1][1],&g_8},{&l_198[0][0],&g_8,&l_133[1][0][1],&l_133[1][0][1],&g_8}},{{&l_198[2][0],&l_133[4][1][1],&l_190,&l_133[4][1][1],&l_198[2][0]},{&g_8,&l_133[1][0][1],&l_133[1][0][1],&g_8,&l_198[0][0]},{&g_8,&l_133[4][1][1],&g_8,&l_198[0][0],&g_8},{&g_8,&g_8,&l_198[0][0],&l_133[1][0][1],&l_198[0][0]}},{{&l_198[2][0],&l_198[0][0],&l_190,&l_198[0][0],&l_198[2][0]},{&l_198[0][0],&l_133[1][0][1],&l_198[0][0],&g_8,&g_8},{&g_8,&l_198[0][0],&g_8,&l_133[4][1][1],&g_8},{&l_198[0][0],&g_8,&l_133[1][0][1],&l_133[1][0][1],&g_8}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_198[i][j] = 1L;
                        }
                        g_206 |= (g_80[0] , (safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(l_190, (*g_30))) > ((safe_add_func_int64_t_s_s((p_95 != (l_132 <= ((((*l_134) = ((--g_195) , ((l_112[5] = ((((++g_199) , p_95) == ((((l_108 == g_202) && ((!((*l_170) ^= 0xE46DL)) , l_198[0][0])) > p_95) , 0xE67889039BF0741CLL)) != (*g_202))) | 0x507D193BL))) , l_112[0]) , p_95))), 0L)) & p_95)) , l_204), l_204)), (*g_202))));
                        if (g_206)
                            break;
                    }
                    else
                    {
                        (*l_134) |= l_207[0][0];
                    }
                }
                else
                {
                    int32_t *l_210 = &g_8;
                    int32_t *l_211 = &l_112[5];
                    int32_t *l_212 = &l_112[6];
                    int32_t *l_213 = &l_133[1][2][2];
                    int32_t *l_215 = (void*)0;
                    int32_t *l_216 = &l_214;
                    int32_t *l_218[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    for (g_149 = (-29); (g_149 == 38); g_149 = safe_add_func_uint16_t_u_u(g_149, 8))
                    {
                        if (p_95)
                            break;
                    }
                    for (g_149 = 1; (g_149 <= 6); g_149 += 1)
                    {
                        return l_210;
                    }
                    g_221[0][0]++;
                    for (p_95 = 0; (p_95 >= 27); p_95 = safe_add_func_int32_t_s_s(p_95, 6))
                    {
                        uint32_t **l_226 = &l_108;
                        (*l_134) = (&g_14 == ((*l_226) = &g_14));
                    }
                }
                g_233--;
                l_111 = (((*l_130) &= p_95) == ((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(p_95, ((safe_sub_func_uint8_t_u_u(((*l_244) = (0xDFL && 0UL)), g_11)) | 1UL))), 3)) > (safe_mul_func_uint8_t_u_u((+(l_214 &= (safe_add_func_int8_t_s_s((g_12[5] , (((g_195 , l_250) != &g_30) == (-1L))), 0x60L)))), 0xD4L))));
            }
            else
            {
                uint32_t l_275 = 0UL;
                for (l_111 = 2; (l_111 >= 0); l_111 -= 1)
                {
                    int8_t **l_272 = (void*)0;
                    int i;
                    if ((safe_sub_func_int64_t_s_s(((l_217[l_111] || l_112[(l_111 + 4)]) <= l_112[(l_111 + 3)]), g_12[l_111])))
                    {
                        int32_t *l_254 = &l_217[1];
                        int32_t **l_253 = &l_254;
                        uint8_t ***l_257 = &g_255;
                        int32_t *l_258 = &l_112[(l_111 + 3)];
                        int32_t *l_259 = &l_112[(l_111 + 3)];
                        int32_t *l_260 = &l_112[(l_111 + 3)];
                        int32_t *l_261 = (void*)0;
                        int32_t *l_262 = &l_112[(l_111 + 4)];
                        int32_t *l_263 = &l_112[1];
                        int32_t *l_264 = &l_112[(l_111 + 3)];
                        int32_t *l_265 = &l_112[(l_111 + 3)];
                        int32_t *l_266 = (void*)0;
                        int32_t *l_267 = &l_112[5];
                        int i;
                        (*l_253) = &g_8;
                        (*l_257) = g_255;
                        --g_269[0];
                        l_272 = l_272;
                    }
                    else
                    {
                        int32_t *l_273 = (void*)0;
                        int32_t *l_274[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_274[i] = &l_112[5];
                        l_275++;
                    }
                }
            }
            if (g_269[0])
                continue;
            g_281[3]--;
        }
        else
        {
            int32_t *l_285 = &l_112[5];
            uint16_t *l_292 = &g_149;
            const uint8_t ***l_296 = (void*)0;
            if ((l_217[2] = (((void*)0 != &l_107) & (((*p_96) |= l_204) , 0x7576DCB222EA5A7ALL))))
            {
                int32_t *l_284 = &l_112[5];
                return &g_8;
            }
            else
            {
                uint32_t *l_286 = &g_287;
                (*l_285) ^= (((g_290[3][0] = ((--(*l_286)) , p_95)) , g_34) == (((l_291 == l_292) , (((!((0x87L != (safe_sub_func_int64_t_s_s((((&g_255 != l_296) , (l_107 != &g_14)) , 0L), p_95))) > 65529UL)) && 0xF3L) , g_8)) , 0UL));
            }
        }
    }
    for (l_204 = 6; (l_204 != 31); l_204++)
    {
        int32_t *l_299 = &g_290[3][0];
        int32_t **l_300 = &l_299;
        (*l_300) = l_299;
        for (g_220 = 0; (g_220 >= 0); g_220 -= 1)
        {
            uint16_t l_319 = 0x7218L;
            int32_t *l_322 = &g_290[3][0];
            for (p_95 = 0; (p_95 <= 5); p_95 += 1)
            {
                int32_t l_312 = (-6L);
                int i;
                if ((g_80[(g_220 + 2)] | 0x15DBDD8853D5540ALL))
                {
                    int32_t l_301 = 0x7A784966L;
                    int i;
                    if (g_80[(g_220 + 5)])
                    {
                        int16_t *l_310 = &g_219[1];
                        int16_t *l_311 = &g_131;
                        int i, j;
                        l_301 = g_281[(g_220 + 3)];
                        (*l_300) = func_76((l_312 = ((*l_311) ^= (safe_mod_func_uint32_t_u_u(((((((safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(((g_221[g_220][g_220] || ((g_221[g_220][(g_220 + 1)] , g_80[(g_220 + 2)]) , (*g_256))) , (((**l_300) == 7UL) , (0x1FB92C6DL >= (((*l_310) = (g_281[(g_220 + 3)] | (safe_lshift_func_uint8_t_u_s(((*l_299) >= p_95), 7)))) | 65526UL)))), g_221[0][0])), 5)) > g_80[(g_220 + 5)]) && p_95) < g_221[g_220][(g_220 + 1)]) < p_95) != 0x022BL), l_111)))));
                    }
                    else
                    {
                        int32_t *l_313 = (void*)0;
                        int32_t *l_314 = &l_312;
                        int32_t *l_315 = &l_217[2];
                        int32_t *l_316 = (void*)0;
                        int32_t *l_317 = &l_301;
                        int32_t *l_318[10] = {&g_290[3][0],&g_290[3][0],&g_290[3][0],&g_290[3][0],&g_290[3][0],&g_290[3][0],&g_290[3][0],&g_290[3][0],&g_290[3][0],&g_290[3][0]};
                        int i;
                        l_319--;
                        l_312 &= l_217[2];
                    }
                    return &g_8;
                }
                else
                {
                    (*l_300) = l_322;
                }
            }
        }
    }
    return l_323;
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
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_12[i], "g_12[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_80[i], "g_80[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_219[i], "g_219[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_220, "g_220", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_221[i][j], "g_221[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_269[i], "g_269[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_281[i], "g_281[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_287, "g_287", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_290[i][j], "g_290[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_357[i], "g_357[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_393[i][j], "g_393[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_550, "g_550", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    transparent_crc(g_1002, "g_1002", print_hash_value);
    transparent_crc(g_1241, "g_1241", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1357[i], "g_1357[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1645, "g_1645", print_hash_value);
    transparent_crc(g_1655, "g_1655", print_hash_value);
    transparent_crc(g_1679, "g_1679", print_hash_value);
    transparent_crc(g_1830, "g_1830", print_hash_value);
    transparent_crc(g_1880, "g_1880", print_hash_value);
    transparent_crc(g_1935, "g_1935", print_hash_value);
    transparent_crc(g_1958, "g_1958", print_hash_value);
    transparent_crc(g_2025, "g_2025", print_hash_value);
    transparent_crc(g_2026, "g_2026", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2031[i], "g_2031[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2170, "g_2170", print_hash_value);
    transparent_crc(g_2386, "g_2386", print_hash_value);
    transparent_crc(g_2467, "g_2467", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2721[i][j][k], "g_2721[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
