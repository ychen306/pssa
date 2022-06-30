// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = C1597485
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
   uint64_t f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t f0;
};
#pragma pack(pop)

struct S2 {
   signed f0 : 29;
   const signed f1 : 3;
   signed : 0;
   signed f2 : 12;
   unsigned f3 : 1;
   signed f4 : 27;
};

struct S3 {
   uint32_t f0;
   struct S0 f1;
   signed f2 : 11;
   int8_t f3;
};

union U4 {
   uint32_t f0;
   const int32_t f1;
   int8_t f2;
};

union U5 {
   int8_t * f0;
   unsigned f1 : 26;
   const unsigned f2 : 20;
};


static uint32_t g_2[6] = {0x8E418A52L,0x8E418A52L,0x8E418A52L,0x8E418A52L,0x8E418A52L,0x8E418A52L};
static int32_t g_3 = (-6L);
static struct S0 g_5 = {0UL};
static int8_t g_9 = 0xF8L;
static int8_t *g_8 = &g_9;
static struct S3 g_33 = {7UL,{0x1B36C93846F26339LL},15,0x83L};
static int64_t g_37 = (-7L);
static union U4 g_38 = {4294967287UL};
static int8_t g_39 = 0xE5L;
static uint16_t g_43 = 65532UL;
static uint64_t *g_53[7][3][8] = {{{&g_5.f0,&g_33.f1.f0,(void*)0,(void*)0,&g_33.f1.f0,&g_5.f0,(void*)0,&g_5.f0},{&g_33.f1.f0,&g_5.f0,(void*)0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,(void*)0},{&g_33.f1.f0,&g_33.f1.f0,&g_5.f0,&g_5.f0,&g_33.f1.f0,&g_5.f0,&g_5.f0,&g_5.f0}},{{&g_5.f0,&g_33.f1.f0,(void*)0,(void*)0,&g_33.f1.f0,&g_5.f0,(void*)0,&g_5.f0},{&g_33.f1.f0,&g_5.f0,(void*)0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,(void*)0},{&g_5.f0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0,&g_33.f1.f0,(void*)0,(void*)0}},{{&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,(void*)0},{&g_5.f0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0},{&g_5.f0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0,&g_33.f1.f0,(void*)0,(void*)0}},{{&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,(void*)0},{&g_5.f0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0},{&g_5.f0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0,&g_33.f1.f0,(void*)0,(void*)0}},{{&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,(void*)0},{&g_5.f0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0},{&g_5.f0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0,&g_33.f1.f0,(void*)0,(void*)0}},{{&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,(void*)0},{&g_5.f0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0},{&g_5.f0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0,&g_33.f1.f0,(void*)0,(void*)0}},{{&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,(void*)0},{&g_5.f0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0},{&g_5.f0,&g_5.f0,&g_5.f0,(void*)0,&g_5.f0,&g_33.f1.f0,(void*)0,(void*)0}}};
static uint8_t g_57 = 0xE9L;
static union U5 g_96 = {0};
static int32_t g_118 = 1L;
static int32_t *g_119 = &g_118;
static int32_t g_125 = 1L;
static int8_t *g_140 = (void*)0;
static int32_t g_150 = 0x032B9FEBL;
static uint8_t g_186[1][10][1] = {{{0x06L},{248UL},{0x06L},{255UL},{255UL},{0x06L},{248UL},{0x06L},{255UL},{255UL}}};
static int32_t g_200 = 0xEC3C3146L;
static int16_t g_218 = 0x0FE3L;
static int16_t g_224 = 0x3E53L;
static int32_t g_229 = 1L;
static struct S1 g_230 = {-1L};
static uint64_t g_233 = 0xAEAED0E2EEFEA89CLL;
static uint32_t g_246 = 18446744073709551607UL;
static uint32_t g_248 = 0x6EBF33B0L;
static uint64_t g_262 = 3UL;
static int16_t g_317 = 8L;
static struct S1 *g_321 = &g_230;
static struct S3 g_325 = {0UL,{0UL},9,0xC9L};
static uint32_t g_358[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static struct S3 g_371 = {4294967289UL,{18446744073709551606UL},27,0L};
static int64_t *g_423 = (void*)0;
static int64_t * const *g_422 = &g_423;
static uint32_t g_472 = 0UL;
static const struct S1 g_490 = {0x4CD46D91L};
static uint8_t g_494[6][10][4] = {{{0x63L,255UL,0x43L,0xF6L},{0x64L,246UL,0xF2L,253UL},{0x03L,0UL,254UL,2UL},{255UL,6UL,0x70L,0x70L},{0UL,0UL,4UL,0x86L},{0xF2L,0xA3L,246UL,0xA4L},{255UL,0x68L,2UL,246UL},{0xFBL,0x68L,4UL,0xA4L},{0x68L,0xA3L,0x64L,0x86L},{8UL,0UL,0x16L,0x70L}},{{0xDAL,6UL,255UL,2UL},{0x56L,0UL,9UL,253UL},{0xB1L,255UL,0xA2L,0x68L},{1UL,255UL,3UL,0x43L},{0xFBL,255UL,0x84L,0x7AL},{253UL,0UL,0x70L,0xF2L},{1UL,250UL,0xA1L,250UL},{249UL,0x63L,0xA3L,255UL},{0xC9L,0xF6L,2UL,255UL},{0x7AL,6UL,250UL,250UL}},{{255UL,0UL,255UL,9UL},{0x7AL,0xABL,0x56L,5UL},{0xF2L,0x69L,255UL,0xA3L},{248UL,255UL,0xCDL,0xABL},{6UL,1UL,0x54L,0xABL},{255UL,8UL,0x20L,255UL},{255UL,0x20L,5UL,1UL},{0xABL,0xC6L,0xF6L,0xA3L},{255UL,0xB1L,4UL,6UL},{2UL,255UL,0x63L,255UL}},{{1UL,0xA2L,0x16L,7UL},{246UL,0xA2L,246UL,0x63L},{0xCDL,0x70L,1UL,0x10L},{1UL,0xC8L,250UL,0x70L},{0x03L,0x16L,250UL,0xFBL},{1UL,249UL,1UL,255UL},{0xCDL,254UL,246UL,254UL},{246UL,254UL,0x16L,0xFBL},{1UL,4UL,0x63L,0UL},{2UL,0xDAL,4UL,8UL}},{{255UL,255UL,0xF6L,246UL},{0xABL,0x86L,5UL,255UL},{255UL,7UL,0x20L,0x5DL},{255UL,255UL,0x54L,0xCDL},{6UL,0x9EL,0xCDL,1UL},{248UL,255UL,255UL,1UL},{0xF2L,0x84L,0x56L,255UL},{0x7AL,0x18L,255UL,0xADL},{255UL,0x03L,250UL,1UL},{0x7AL,0x9BL,2UL,0xB1L}},{{0xC9L,248UL,0xA3L,255UL},{249UL,0x5DL,0xA1L,0xC6L},{1UL,255UL,0x70L,0xDAL},{253UL,0xCDL,0x84L,255UL},{0xFBL,0xADL,3UL,4UL},{1UL,7UL,0xA2L,0xA4L},{0xB1L,0x10L,0xFBL,0xF6L},{0x54L,0x64L,0xA4L,8UL},{1UL,2UL,2UL,1UL},{254UL,0x59L,0x53L,0xC8L}}};
static int16_t g_500 = 0xC8D2L;
static int8_t g_501 = (-6L);
static uint8_t g_502 = 0xFCL;
static int32_t g_530 = (-4L);
static uint64_t g_535[2] = {0x34648B2AE1FBEB08LL,0x34648B2AE1FBEB08LL};
static union U4 *g_538 = &g_38;
static union U4 g_540 = {0x42015616L};
static uint32_t g_560 = 0x6AC72CEAL;
static union U5 g_612 = {0};
static int8_t **g_647 = &g_140;
static uint32_t * const g_722[10][6][4] = {{{(void*)0,(void*)0,&g_246,&g_246},{&g_246,&g_246,(void*)0,&g_560},{&g_246,&g_246,&g_246,&g_560},{&g_560,&g_246,(void*)0,&g_2[0]},{&g_2[4],&g_246,&g_560,&g_560},{&g_246,&g_246,(void*)0,&g_246}},{{&g_246,&g_560,&g_560,&g_246},{&g_2[4],&g_560,&g_246,&g_560},{&g_2[3],&g_560,(void*)0,&g_246},{&g_560,&g_560,&g_560,&g_246},{&g_560,&g_246,&g_246,&g_560},{(void*)0,&g_246,&g_560,&g_2[0]}},{{&g_246,&g_246,&g_246,&g_560},{&g_2[5],&g_246,&g_2[4],&g_560},{&g_2[3],&g_246,(void*)0,&g_246},{&g_246,(void*)0,&g_2[5],&g_246},{&g_2[4],&g_246,&g_2[1],&g_246},{(void*)0,&g_2[4],&g_2[3],&g_246}},{{&g_560,&g_560,(void*)0,(void*)0},{(void*)0,&g_560,(void*)0,&g_246},{(void*)0,&g_2[1],(void*)0,&g_2[1]},{&g_560,&g_246,&g_2[3],&g_2[4]},{(void*)0,&g_2[3],&g_2[1],&g_2[0]},{&g_2[4],(void*)0,&g_2[5],&g_246}},{{&g_246,(void*)0,(void*)0,&g_560},{&g_2[3],&g_2[3],&g_2[4],&g_560},{&g_2[5],&g_246,&g_246,(void*)0},{&g_246,&g_246,&g_560,&g_2[1]},{(void*)0,&g_246,&g_246,(void*)0},{&g_560,&g_246,&g_560,(void*)0}},{{&g_560,&g_2[4],(void*)0,(void*)0},{&g_2[3],(void*)0,&g_246,(void*)0},{&g_2[4],&g_2[4],&g_560,(void*)0},{&g_246,&g_246,(void*)0,(void*)0},{&g_246,&g_246,&g_560,&g_2[1]},{&g_2[4],&g_246,(void*)0,(void*)0}},{{&g_560,&g_246,&g_246,&g_560},{&g_246,&g_2[3],(void*)0,&g_560},{&g_246,(void*)0,&g_246,&g_246},{(void*)0,(void*)0,&g_560,&g_2[0]},{&g_2[0],&g_2[3],&g_2[0],&g_2[4]},{(void*)0,&g_246,&g_2[3],&g_2[1]}},{{&g_246,&g_2[1],&g_2[3],&g_246},{&g_2[1],&g_560,&g_2[3],(void*)0},{&g_246,&g_560,&g_2[3],&g_246},{(void*)0,&g_2[4],&g_2[0],&g_246},{&g_2[0],&g_246,&g_560,(void*)0},{(void*)0,&g_2[3],(void*)0,&g_246}},{{&g_246,(void*)0,&g_246,&g_246},{(void*)0,&g_560,&g_246,(void*)0},{&g_2[4],(void*)0,&g_2[4],&g_2[3]},{&g_246,&g_560,&g_2[1],&g_2[1]},{&g_560,&g_560,&g_560,(void*)0},{&g_246,&g_246,&g_246,&g_2[0]}},{{&g_2[3],&g_2[1],&g_2[0],&g_246},{(void*)0,&g_2[1],(void*)0,&g_2[0]},{&g_2[1],&g_246,(void*)0,(void*)0},{&g_246,&g_560,&g_246,&g_2[1]},{&g_2[3],&g_560,&g_246,&g_2[3]},{&g_246,(void*)0,&g_560,(void*)0}}};
static uint32_t * const *g_721 = &g_722[3][5][1];
static struct S3 *g_733[3][5][9] = {{{&g_33,&g_371,(void*)0,&g_325,(void*)0,&g_371,&g_33,&g_371,(void*)0},{(void*)0,&g_325,&g_325,(void*)0,&g_325,&g_325,&g_33,&g_325,&g_325},{&g_371,&g_371,&g_325,&g_325,&g_325,&g_371,&g_371,&g_371,&g_325},{(void*)0,&g_325,&g_325,&g_33,&g_325,&g_325,&g_33,&g_325,&g_325},{&g_33,&g_371,(void*)0,&g_325,(void*)0,&g_371,&g_33,&g_371,(void*)0}},{{(void*)0,&g_325,&g_325,(void*)0,&g_325,&g_325,&g_33,&g_325,&g_325},{&g_371,&g_371,&g_325,&g_325,&g_325,&g_371,&g_371,&g_371,&g_325},{(void*)0,&g_325,&g_325,&g_33,&g_325,&g_325,&g_33,&g_325,&g_325},{&g_33,&g_371,(void*)0,&g_325,(void*)0,&g_371,&g_33,&g_371,(void*)0},{(void*)0,&g_325,&g_325,(void*)0,&g_325,&g_325,&g_33,&g_325,&g_325}},{{&g_371,&g_371,&g_325,&g_325,&g_325,&g_371,&g_371,&g_371,&g_325},{(void*)0,&g_325,&g_325,&g_33,&g_325,&g_325,&g_33,&g_325,&g_325},{&g_33,&g_371,(void*)0,&g_325,(void*)0,&g_371,&g_33,&g_371,(void*)0},{(void*)0,&g_325,&g_325,(void*)0,&g_325,&g_325,&g_33,&g_325,&g_325},{&g_371,&g_371,&g_325,&g_325,&g_325,&g_371,&g_371,&g_371,&g_325}}};
static struct S3 **g_732[6][7][6] = {{{(void*)0,&g_733[2][3][1],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][1][6],&g_733[2][1][6]},{(void*)0,&g_733[2][0][7],&g_733[2][0][7],(void*)0,&g_733[0][1][3],&g_733[2][0][7]},{&g_733[0][1][5],(void*)0,&g_733[0][2][1],&g_733[2][0][7],&g_733[2][0][7],&g_733[0][1][5]},{&g_733[2][1][6],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7]},{&g_733[2][0][7],(void*)0,&g_733[2][0][7],(void*)0,&g_733[0][1][3],&g_733[2][0][7]},{&g_733[2][3][1],&g_733[2][0][7],(void*)0,&g_733[2][0][7],&g_733[2][1][6],&g_733[2][0][7]},{&g_733[0][1][5],&g_733[2][0][7],&g_733[2][0][7],&g_733[0][2][1],(void*)0,&g_733[0][1][5]}},{{&g_733[0][1][5],&g_733[1][3][3],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7]},{&g_733[2][3][1],&g_733[2][3][1],&g_733[2][0][7],(void*)0,&g_733[2][0][7],&g_733[2][1][6]},{&g_733[2][0][7],&g_733[1][3][3],(void*)0,&g_733[2][0][7],&g_733[0][1][3],&g_733[2][0][7]},{&g_733[2][1][6],&g_733[2][0][7],(void*)0,&g_733[2][0][7],&g_733[2][3][1],&g_733[2][1][6]},{&g_733[0][1][5],&g_733[2][0][7],&g_733[2][0][7],(void*)0,(void*)0,&g_733[2][0][7]},{(void*)0,(void*)0,&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[0][1][5]},{&g_733[2][3][1],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7]}},{{&g_733[2][0][7],(void*)0,(void*)0,(void*)0,(void*)0,&g_733[2][0][7]},{&g_733[2][1][6],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][3][1],&g_733[2][0][7]},{(void*)0,&g_733[2][0][7],&g_733[2][0][7],&g_733[0][2][1],&g_733[0][1][3],&g_733[0][1][5]},{(void*)0,&g_733[1][3][3],&g_733[0][2][1],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7]},{&g_733[2][1][6],&g_733[2][3][1],&g_733[2][0][7],(void*)0,&g_733[2][0][7],&g_733[2][1][6]},{&g_733[2][0][7],&g_733[1][3][3],&g_733[2][0][7],&g_733[2][0][7],(void*)0,&g_733[2][0][7]},{&g_733[2][3][1],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][1][6],&g_733[2][1][6]}},{{(void*)0,&g_733[2][0][7],&g_733[2][0][7],(void*)0,&g_733[0][1][3],&g_733[2][0][7]},{&g_733[0][1][5],(void*)0,&g_733[0][2][1],&g_733[2][0][7],&g_733[2][0][7],&g_733[0][1][5]},{&g_733[2][1][6],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7]},{&g_733[2][0][7],(void*)0,&g_733[2][0][7],(void*)0,&g_733[0][1][3],&g_733[2][0][7]},{&g_733[2][3][1],&g_733[2][0][7],(void*)0,&g_733[2][0][7],&g_733[2][1][6],&g_733[2][0][7]},{&g_733[0][1][5],&g_733[2][0][7],&g_733[2][0][7],&g_733[0][2][1],(void*)0,&g_733[0][1][5]},{&g_733[0][1][5],&g_733[1][3][3],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7]}},{{&g_733[2][3][1],&g_733[2][3][1],&g_733[2][0][7],(void*)0,&g_733[2][0][7],&g_733[2][1][6]},{&g_733[2][0][7],&g_733[1][3][3],(void*)0,&g_733[2][0][7],&g_733[0][1][3],&g_733[2][0][7]},{&g_733[2][1][6],&g_733[2][0][7],(void*)0,&g_733[2][0][7],&g_733[2][3][1],&g_733[2][1][6]},{&g_733[0][1][5],&g_733[2][0][7],&g_733[2][0][7],(void*)0,(void*)0,&g_733[2][0][7]},{(void*)0,(void*)0,&g_733[2][0][7],&g_733[0][2][1],&g_733[0][1][5],&g_733[2][0][7]},{&g_733[2][0][7],&g_733[2][0][7],&g_733[0][2][1],(void*)0,&g_733[0][1][5],&g_733[2][0][7]},{&g_733[0][1][5],&g_733[2][3][1],&g_733[1][3][3],&g_733[1][3][3],&g_733[2][3][1],&g_733[0][1][5]}},{{&g_733[2][0][7],&g_733[0][2][1],&g_733[2][0][7],(void*)0,&g_733[2][0][7],&g_733[2][0][7]},{&g_733[2][0][7],(void*)0,&g_733[2][0][7],(void*)0,&g_733[2][1][6],&g_733[2][0][7]},{&g_733[2][0][7],&g_733[2][0][7],(void*)0,(void*)0,&g_733[0][1][5],&g_733[2][0][7]},{&g_733[2][0][7],&g_733[2][0][7],&g_733[0][2][1],&g_733[1][3][3],(void*)0,&g_733[2][0][7]},{&g_733[0][1][5],&g_733[2][0][7],&g_733[2][0][7],(void*)0,&g_733[2][3][1],&g_733[2][0][7]},{&g_733[2][0][7],(void*)0,&g_733[2][0][7],&g_733[0][2][1],&g_733[2][0][7],&g_733[2][0][7]},{&g_733[2][0][7],&g_733[0][2][1],&g_733[0][2][1],&g_733[2][0][7],&g_733[2][1][6],&g_733[2][0][7]}}};
static uint16_t g_765 = 1UL;
static int64_t g_797 = 0x8D19E56B09797E3ELL;
static int8_t g_801 = 0x4DL;
static uint32_t g_805 = 18446744073709551615UL;
static struct S2 g_856 = {-22532,1,-0,0,6584};
static uint16_t g_905 = 0UL;
static const union U5 *g_930 = &g_96;
static const union U5 **g_929 = &g_930;
static const union U5 *** const g_928[8][5] = {{&g_929,&g_929,&g_929,&g_929,&g_929},{(void*)0,&g_929,(void*)0,&g_929,(void*)0},{&g_929,&g_929,&g_929,&g_929,&g_929},{&g_929,&g_929,&g_929,&g_929,&g_929},{&g_929,&g_929,&g_929,&g_929,&g_929},{(void*)0,&g_929,(void*)0,&g_929,(void*)0},{&g_929,&g_929,&g_929,&g_929,&g_929},{&g_929,&g_929,&g_929,&g_929,&g_929}};
static struct S1 **g_1024 = &g_321;
static struct S1 ***g_1023[2][2][2] = {{{&g_1024,&g_1024},{&g_1024,&g_1024}},{{&g_1024,&g_1024},{&g_1024,&g_1024}}};
static uint64_t *g_1063 = (void*)0;
static uint64_t **g_1062 = &g_1063;
static struct S1 g_1065[8] = {{0x2D7392FCL},{0x2D7392FCL},{0x2D7392FCL},{0x2D7392FCL},{0x2D7392FCL},{0x2D7392FCL},{0x2D7392FCL},{0x2D7392FCL}};
static struct S2 g_1091 = {-15233,-1,43,0,-9548};
static int8_t g_1113[7] = {0x32L,0x32L,0x32L,0x32L,0x32L,0x32L,0x32L};
static uint64_t g_1114[5] = {6UL,6UL,6UL,6UL,6UL};
static int8_t g_1129 = (-1L);
static int32_t g_1130 = 0L;
static uint64_t g_1132 = 0xE4D80E5424440477LL;
static union U4 * const *g_1195 = &g_538;
static union U4 * const **g_1194 = &g_1195;
static uint32_t *g_1242 = &g_358[1];
static uint32_t *g_1243 = (void*)0;
static uint8_t *g_1248 = (void*)0;
static uint8_t *g_1249 = &g_494[4][5][0];
static struct S0 ** const *g_1271 = (void*)0;
static int64_t * const **g_1319[7][5][1] = {{{&g_422},{&g_422},{&g_422},{&g_422},{&g_422}},{{&g_422},{&g_422},{&g_422},{&g_422},{&g_422}},{{&g_422},{&g_422},{&g_422},{&g_422},{&g_422}},{{&g_422},{&g_422},{&g_422},{&g_422},{&g_422}},{{&g_422},{&g_422},{&g_422},{&g_422},{&g_422}},{{&g_422},{&g_422},{&g_422},{&g_422},{&g_422}},{{&g_422},{&g_422},{&g_422},{&g_422},{&g_422}}};
static int64_t * const ***g_1318[4] = {&g_1319[6][3][0],&g_1319[6][3][0],&g_1319[6][3][0],&g_1319[6][3][0]};
static const uint16_t *g_1332 = (void*)0;
static const uint16_t **g_1331 = &g_1332;
static int64_t **g_1408[5][6][8] = {{{(void*)0,(void*)0,&g_423,&g_423,&g_423,(void*)0,&g_423,&g_423},{&g_423,&g_423,&g_423,&g_423,(void*)0,(void*)0,&g_423,&g_423},{&g_423,&g_423,&g_423,(void*)0,&g_423,&g_423,(void*)0,&g_423},{&g_423,(void*)0,&g_423,(void*)0,&g_423,(void*)0,&g_423,(void*)0},{&g_423,&g_423,&g_423,&g_423,&g_423,&g_423,&g_423,(void*)0},{&g_423,&g_423,&g_423,(void*)0,&g_423,&g_423,&g_423,(void*)0}},{{&g_423,&g_423,&g_423,&g_423,&g_423,&g_423,&g_423,&g_423},{&g_423,(void*)0,(void*)0,&g_423,(void*)0,&g_423,&g_423,(void*)0},{&g_423,(void*)0,(void*)0,&g_423,&g_423,&g_423,&g_423,&g_423},{&g_423,&g_423,&g_423,&g_423,&g_423,&g_423,(void*)0,&g_423},{&g_423,(void*)0,&g_423,(void*)0,&g_423,&g_423,&g_423,&g_423},{&g_423,(void*)0,&g_423,(void*)0,&g_423,&g_423,(void*)0,&g_423}},{{(void*)0,&g_423,(void*)0,&g_423,(void*)0,&g_423,&g_423,(void*)0},{(void*)0,(void*)0,&g_423,&g_423,&g_423,&g_423,&g_423,&g_423},{&g_423,(void*)0,&g_423,&g_423,&g_423,&g_423,&g_423,&g_423},{&g_423,&g_423,(void*)0,(void*)0,&g_423,&g_423,(void*)0,&g_423},{&g_423,&g_423,&g_423,&g_423,(void*)0,&g_423,&g_423,&g_423},{&g_423,&g_423,&g_423,&g_423,(void*)0,(void*)0,(void*)0,&g_423}},{{&g_423,(void*)0,&g_423,(void*)0,&g_423,(void*)0,&g_423,&g_423},{&g_423,&g_423,(void*)0,&g_423,(void*)0,&g_423,&g_423,&g_423},{&g_423,&g_423,(void*)0,&g_423,(void*)0,&g_423,&g_423,(void*)0},{&g_423,&g_423,&g_423,&g_423,&g_423,&g_423,&g_423,&g_423},{&g_423,&g_423,&g_423,(void*)0,(void*)0,&g_423,&g_423,&g_423},{&g_423,(void*)0,&g_423,(void*)0,(void*)0,&g_423,&g_423,&g_423}},{{&g_423,&g_423,&g_423,&g_423,&g_423,&g_423,&g_423,&g_423},{&g_423,&g_423,(void*)0,&g_423,&g_423,&g_423,&g_423,(void*)0},{&g_423,&g_423,&g_423,&g_423,&g_423,&g_423,&g_423,&g_423},{&g_423,&g_423,(void*)0,&g_423,&g_423,&g_423,&g_423,(void*)0},{&g_423,&g_423,&g_423,(void*)0,&g_423,&g_423,&g_423,&g_423},{(void*)0,&g_423,&g_423,(void*)0,&g_423,(void*)0,&g_423,&g_423}}};
static int64_t **g_1409 = &g_423;
static uint8_t **g_1444[7] = {&g_1249,&g_1249,&g_1249,&g_1249,&g_1249,&g_1249,&g_1249};
static uint8_t ***g_1443[4][6] = {{&g_1444[5],&g_1444[1],&g_1444[1],&g_1444[5],&g_1444[1],&g_1444[1]},{&g_1444[1],&g_1444[1],&g_1444[1],&g_1444[1],&g_1444[1],&g_1444[1]},{(void*)0,&g_1444[1],&g_1444[1],(void*)0,&g_1444[1],&g_1444[1]},{&g_1444[5],&g_1444[1],&g_1444[1],&g_1444[5],&g_1444[1],&g_1444[1]}};
static uint8_t ****g_1442 = &g_1443[2][2];
static struct S0 ***g_1501 = (void*)0;
static struct S0 ****g_1500 = &g_1501;
static struct S0 ***** const g_1499 = &g_1500;
static struct S0 *****g_1502 = &g_1500;
static int32_t g_1507 = (-1L);
static int64_t g_1574 = 9L;
static struct S0 *g_1625 = &g_5;
static int16_t g_1634 = 1L;
static uint64_t **g_1698 = &g_1063;
static const int64_t g_1848 = (-1L);
static uint16_t g_1925 = 0x728AL;
static union U4 g_1980 = {0x934379ECL};
static uint32_t *g_2012[3][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static uint32_t **g_2011 = &g_2012[2][5];
static uint32_t ** const *g_2010[6][3][3] = {{{(void*)0,(void*)0,(void*)0},{&g_2011,&g_2011,&g_2011},{(void*)0,(void*)0,(void*)0}},{{&g_2011,&g_2011,&g_2011},{(void*)0,(void*)0,(void*)0},{&g_2011,&g_2011,&g_2011}},{{(void*)0,(void*)0,(void*)0},{&g_2011,&g_2011,&g_2011},{(void*)0,(void*)0,(void*)0}},{{&g_2011,&g_2011,&g_2011},{(void*)0,(void*)0,(void*)0},{&g_2011,&g_2011,&g_2011}},{{(void*)0,(void*)0,(void*)0},{&g_2011,&g_2011,&g_2011},{(void*)0,(void*)0,(void*)0}},{{&g_2011,&g_2011,&g_2011},{(void*)0,(void*)0,(void*)0},{&g_2011,&g_2011,&g_2011}}};
static uint32_t ** const **g_2009[10][5] = {{&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2]},{&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0]},{&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2]},{&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0]},{&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2]},{&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0]},{&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2]},{&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0]},{&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2],&g_2010[2][2][2]},{&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0],&g_2010[5][2][0]}};
static uint8_t g_2048[2] = {0xF0L,0xF0L};
static uint16_t g_2082 = 0x93ACL;
static uint16_t g_2094 = 0xBC25L;
static uint16_t g_2102 = 0x0348L;
static int16_t g_2160 = 0x8A9DL;
static const int64_t g_2238 = 0xE84194EFFA74053ALL;
static const int64_t g_2239[4] = {(-1L),(-1L),(-1L),(-1L)};
static const int64_t * const g_2237[8] = {&g_2238,&g_2238,&g_2238,&g_2238,&g_2238,&g_2238,&g_2238,&g_2238};
static const int64_t * const *g_2236[7][10] = {{&g_2237[6],(void*)0,&g_2237[7],&g_2237[6],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_2237[6]},{&g_2237[7],&g_2237[2],&g_2237[7],&g_2237[6],&g_2237[3],&g_2237[6],&g_2237[2],(void*)0,&g_2237[6],(void*)0},{&g_2237[6],&g_2237[6],&g_2237[7],(void*)0,&g_2237[6],&g_2237[6],&g_2237[6],(void*)0,&g_2237[3],&g_2237[3]},{(void*)0,(void*)0,&g_2237[7],&g_2237[6],&g_2237[6],&g_2237[7],(void*)0,(void*)0,&g_2237[6],&g_2237[6]},{&g_2237[6],&g_2237[6],&g_2237[7],&g_2237[3],&g_2237[6],&g_2237[6],&g_2237[6],(void*)0,&g_2237[6],&g_2237[6]},{&g_2237[6],(void*)0,&g_2237[7],&g_2237[6],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_2237[6]},{&g_2237[7],&g_2237[2],&g_2237[7],&g_2237[6],&g_2237[3],&g_2237[6],&g_2237[2],(void*)0,&g_2237[6],(void*)0}};
static const int64_t * const **g_2235 = &g_2236[5][2];
static const int64_t * const ***g_2234 = &g_2235;
static const int64_t * const ****g_2233 = &g_2234;
static struct S3 g_2317[3] = {{0x328752C1L,{6UL},-32,-8L},{0x328752C1L,{6UL},-32,-8L},{0x328752C1L,{6UL},-32,-8L}};
static uint32_t *g_2348 = &g_38.f0;
static union U4 **g_2363[2] = {&g_538,&g_538};
static union U4 ***g_2362 = &g_2363[0];
static int32_t g_2378 = 0L;
static uint16_t g_2379 = 4UL;
static uint64_t g_2489 = 18446744073709551609UL;
static int8_t g_2517 = 0x10L;
static int8_t g_2572 = 8L;
static int32_t g_2574 = (-1L);
static uint16_t g_2575 = 1UL;
static int32_t g_2606 = (-9L);
static int16_t g_2608 = 0x7E1DL;
static uint64_t g_2610 = 0x466F09C54EC0522DLL;
static struct S2 g_2678[4] = {{-16922,-0,-4,0,-823},{-16922,-0,-4,0,-823},{-16922,-0,-4,0,-823},{-16922,-0,-4,0,-823}};
static union U5 g_2719 = {0};
static uint32_t g_2749 = 0x0F2A40A6L;
static int32_t g_2916 = 1L;
static int32_t g_2917 = (-2L);
static uint16_t g_2918 = 0x5F5CL;



static const uint32_t func_1(void);
static union U5 func_21(const int8_t p_22, union U4 p_23, int32_t p_24, union U5 p_25);
static const union U5 func_47(uint64_t * p_48, int8_t * p_49, uint64_t * p_50, uint64_t * p_51, uint32_t p_52);
static uint8_t func_58(struct S1 p_59, int8_t * p_60, int64_t p_61, struct S0 p_62, struct S1 p_63);
static int32_t func_79(uint64_t p_80, struct S2 p_81, uint8_t p_82);
static int64_t * func_85(uint8_t p_86, const int8_t * p_87, int64_t * p_88, int32_t * p_89);
static int32_t func_92(uint8_t * const p_93, int8_t p_94, union U5 p_95);
static union U4 func_100(struct S1 p_101, int64_t * p_102, int16_t p_103, uint64_t * p_104);
static struct S1 func_105(int32_t p_106, int32_t p_107);
static uint16_t func_109(int64_t * p_110, int16_t p_111);
# 216 "<stdin>"
static const uint32_t func_1(void)
{
    int16_t l_4 = (-1L);
    int32_t l_15 = 6L;
    union U4 l_16 = {4294967291UL};
    int32_t l_34 = 5L;
    uint64_t *l_35 = &g_33.f1.f0;
    int64_t *l_36 = &g_37;
    union U5 l_40 = {0};
    struct S0 l_2991 = {1UL};
    int32_t *l_3003 = &l_34;
    const uint16_t l_3004 = 0x18DAL;
    for (g_3 = 0; (g_3 <= 5); g_3 += 1)
    {
        g_5 = (l_4 , g_5);
    }
    if ((safe_add_func_int64_t_s_s(2L, (g_2[2] , (g_8 == ((((l_15 |= (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((+(*g_8)), 8L)), 1))) & 0xBFL) != (((((l_16 , (safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((0UL == (func_21(((safe_add_func_uint64_t_u_u((safe_add_func_int64_t_s_s(((*l_36) = (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u(((*l_35) = ((g_33 , l_34) == g_33.f3)))), g_33.f3))), 0x5FBC01D4C3F121F2LL)), 0x515ED761E7FF5188LL)) , 4L), g_38, g_39, l_40) , l_16.f0)) > l_34), l_4)), l_16.f0))) , 0x1AL) & 0xE4L) >= l_34) != g_535[1])) , (*g_647)))))))
    {
        int32_t **l_2978 = &g_119;
        (*l_2978) = &g_1507;
    }
    else
    {
        int32_t *l_2979 = (void*)0;
        int32_t *l_2980 = &g_125;
        struct S3 l_2981 = {0x87BE48B4L,{1UL},-3,-4L};
        int16_t *l_2990 = &g_1634;
        int32_t l_2992 = 0xBC57A362L;
        int8_t *l_2993 = &g_2517;
        int32_t *l_2994 = &g_1130;
        (*l_2980) &= ((*g_119) = l_16.f2);
        (**g_1024) = (**g_1024);
        (*l_2994) |= ((l_2981 , ((*l_2993) ^= ((*g_8) = (safe_sub_func_int32_t_s_s(((*l_2980) = (safe_lshift_func_uint16_t_u_u(0UL, 0))), ((safe_mod_func_uint64_t_u_u(((*g_2348) , ((l_2981.f1 , ((safe_mul_func_int8_t_s_s(0x52L, (&g_218 == ((l_16.f0 & ((*l_2990) &= 0xDC79L)) , ((func_105(l_16.f0, g_2572) , l_2991) , l_2990))))) || l_2992)) , l_34)), l_2991.f0)) , (*g_119))))))) != 0x38L);
        return (*l_2994);
    }
    (*l_3003) = ((l_4 & (((*g_8) = l_4) ^ l_34)) != (safe_add_func_int8_t_s_s(((0xDCL > (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((*g_119) = (0x99L < ((g_2317[1].f0 , (***g_2362)) , (2UL & l_34)))), (*g_2348))), l_2991.f0)), l_16.f1))) & l_16.f0), l_2991.f0)));
    return l_3004;
}







static union U5 func_21(const int8_t p_22, union U4 p_23, int32_t p_24, union U5 p_25)
{
    struct S0 l_65 = {0xEC8B24CEC8E4446CLL};
    uint64_t *l_2414 = &g_1114[0];
    uint16_t l_2438 = 0UL;
    const uint32_t l_2446 = 0x6D10A4FCL;
    struct S3 *l_2461 = (void*)0;
    int8_t *l_2492[4][10][1] = {{{&g_540.f2},{&g_540.f2},{&g_1980.f2},{&g_1980.f2},{&g_38.f2},{&g_1129},{&g_540.f2},{&g_38.f2},{&g_1113[6]},{&g_38.f2}},{{&g_540.f2},{&g_1129},{&g_38.f2},{&g_1980.f2},{&g_1980.f2},{&g_540.f2},{&g_540.f2},{&g_1980.f2},{&g_1980.f2},{&g_38.f2}},{{&g_1129},{&g_540.f2},{&g_38.f2},{&g_1113[6]},{&g_38.f2},{&g_540.f2},{&g_1129},{&g_38.f2},{&g_1980.f2},{&g_1980.f2}},{{&g_540.f2},{&g_540.f2},{&g_1980.f2},{&g_1980.f2},{&g_38.f2},{&g_1129},{&g_540.f2},{&g_38.f2},{&g_1113[6]},{&g_38.f2}}};
    int32_t l_2511[3][9] = {{(-1L),(-8L),0x9FDEC663L,1L,3L,0x1286E22AL,(-2L),0x1286E22AL,3L},{0xB6CF6141L,(-2L),(-2L),0xB6CF6141L,0xCC201FDBL,(-8L),0x2885379CL,3L,0x9FDEC663L},{(-1L),3L,(-2L),5L,5L,(-2L),3L,(-1L),0L}};
    int8_t l_2512 = (-4L);
    uint8_t **l_2532 = &g_1249;
    uint16_t *l_2583 = &g_43;
    int32_t l_2602[9][7][4] = {{{0xF4F606E3L,2L,1L,0x6F6E398BL},{0x7C8BBA85L,(-1L),0x0F8F3257L,1L},{0x03A6F6BFL,(-1L),(-1L),0x6F6E398BL},{(-1L),2L,(-7L),0xFB4286F7L},{4L,2L,9L,(-1L)},{0x0EAF7AE4L,(-7L),4L,1L},{0L,7L,(-7L),(-7L)}},{{(-1L),0L,0x7C8BBA85L,4L},{0L,0xFB4286F7L,7L,0L},{0x304CBFABL,0x0EAF7AE4L,0x394A5918L,(-1L)},{0x1FA24A68L,0L,(-1L),0L},{0x96BB63F9L,0x1FA24A68L,(-1L),(-7L)},{(-10L),(-1L),(-1L),1L},{0x7C8BBA85L,2L,0xF4F606E3L,0x0EAF7AE4L}},{{0x7C8BBA85L,0L,(-1L),(-1L)},{(-10L),0x0EAF7AE4L,(-1L),0L},{0x96BB63F9L,(-1L),(-1L),(-1L)},{0x1FA24A68L,7L,0x394A5918L,4L},{1L,0x96BB63F9L,0xC5625565L,0x0F8F3257L},{(-1L),0x6F6E398BL,0L,(-10L)},{0x394A5918L,0xD449D27BL,4L,1L}},{{8L,1L,0xFB4286F7L,0L},{0L,(-7L),(-7L),0L},{0xFB4286F7L,1L,(-1L),7L},{7L,0x304CBFABL,0x96BB63F9L,1L},{(-1L),0xC5625565L,0xD449D27BL,1L},{0L,0x304CBFABL,2L,7L},{0L,1L,1L,0L}},{{0x9A246CE1L,(-7L),7L,0L},{0x304CBFABL,1L,0x7C8BBA85L,1L},{0L,0xD449D27BL,0xAAA1069FL,(-10L)},{(-1L),0x6F6E398BL,7L,0x0F8F3257L},{(-7L),0x96BB63F9L,(-8L),4L},{0xC5625565L,7L,2L,(-1L)},{(-1L),(-1L),(-1L),0L}},{{1L,0x0EAF7AE4L,0x6F6E398BL,(-1L)},{7L,0L,(-1L),0x0EAF7AE4L},{(-1L),2L,(-1L),1L},{7L,(-1L),0x6F6E398BL,(-7L)},{1L,0x1FA24A68L,(-1L),0L},{(-1L),0L,2L,(-1L)},{0xC5625565L,0L,(-8L),8L}},{{(-7L),(-8L),7L,0xFB4286F7L},{(-1L),(-1L),0xAAA1069FL,(-1L)},{0L,7L,0x7C8BBA85L,0x03A6F6BFL},{0x304CBFABL,4L,7L,7L},{0x9A246CE1L,0x9A246CE1L,1L,(-8L)},{0L,0xE5181CDDL,2L,1L},{0L,7L,0xD449D27BL,2L}},{{(-1L),7L,0x96BB63F9L,1L},{7L,0xE5181CDDL,(-1L),(-8L)},{0xFB4286F7L,0x9A246CE1L,(-7L),7L},{0L,4L,0xFB4286F7L,0x03A6F6BFL},{8L,7L,4L,(-1L)},{0x394A5918L,(-1L),0L,0xFB4286F7L},{(-1L),(-8L),0xC5625565L,8L}},{{1L,0L,0x394A5918L,(-1L)},{0x1FA24A68L,8L,2L,8L},{7L,(-1L),9L,4L},{(-7L),0x7C8BBA85L,0x394A5918L,(-10L)},{0L,0x9A246CE1L,0L,0L},{0L,(-1L),0x394A5918L,2L},{(-7L),0L,9L,(-1L)}}};
    int64_t l_2607 = (-5L);
    uint16_t l_2628 = 0xA057L;
    struct S2 *l_2684 = &g_2678[1];
    const int32_t *l_2690 = &g_1130;
    int64_t l_2693 = (-1L);
    struct S3 l_2900[5][3][10] = {{{{4294967287UL,{1UL},-12,0x45L},{4294967286UL,{0x5FCD5E2840A634C6LL},6,1L},{0x0A55C250L,{8UL},-43,0xBCL},{4294967288UL,{0x39617AC6931B3F7CLL},19,0xD2L},{0x0A55C250L,{8UL},-43,0xBCL},{4294967286UL,{0x5FCD5E2840A634C6LL},6,1L},{4294967287UL,{1UL},-12,0x45L},{4294967295UL,{0x40AD70EA69CA5723LL},11,1L},{0x83618A20L,{0xA81799648286403ALL},9,0x4CL},{0UL,{0UL},-1,0xAAL}},{{4294967295UL,{0x40AD70EA69CA5723LL},11,1L},{0xC902AD9DL,{0xAF450D31762525AELL},-34,0x10L},{0x42D9FDC5L,{18446744073709551612UL},-3,0x21L},{0xC7EA0BBCL,{0x6B0B2A739FFCCEA6LL},-6,-1L},{4294967287UL,{1UL},-12,0x45L},{3UL,{0x2D1C0889641B2DF1LL},-44,0xD6L},{0xC7EA0BBCL,{0x6B0B2A739FFCCEA6LL},-6,-1L},{0x89B73FF0L,{0x30B20F8B623F7150LL},-11,-1L},{0x77264771L,{0x008063659F51BEEBLL},21,0L},{4294967295UL,{0x40AD70EA69CA5723LL},11,1L}},{{1UL,{0x4BEFF9A2D5659A52LL},8,-5L},{0xC902AD9DL,{0xAF450D31762525AELL},-34,0x10L},{0x843D38D4L,{0x66E95E7F6EBCC850LL},11,0L},{0x2084F6F8L,{5UL},-21,0xE6L},{4294967288UL,{0x39617AC6931B3F7CLL},19,0xD2L},{4294967295UL,{0x01C4A62F74E0E854LL},-17,1L},{4294967287UL,{1UL},-12,0x45L},{0UL,{0UL},-1,0xAAL},{1UL,{0xB1261ABF1F398850LL},-21,-1L},{0x2084F6F8L,{5UL},-21,0xE6L}}},{{{0x2084F6F8L,{5UL},-21,0xE6L},{4294967286UL,{0x5FCD5E2840A634C6LL},6,1L},{0x72092851L,{0x55B3D94608B4CD04LL},-18,8L},{0xC902AD9DL,{0xAF450D31762525AELL},-34,0x10L},{4294967295UL,{0x81AE5043ED0E94F7LL},-3,9L},{0x4FB6C1C5L,{0x0CA73B6F990EEE9ALL},22,-4L},{5UL,{0xE52BB2FA91569356LL},-18,0xBCL},{0x0A55C250L,{8UL},-43,0xBCL},{0x0A55C250L,{8UL},-43,0xBCL},{5UL,{0xE52BB2FA91569356LL},-18,0xBCL}},{{4294967295UL,{0x81AE5043ED0E94F7LL},-3,9L},{4294967287UL,{1UL},-12,0x45L},{0x4FB6C1C5L,{0x0CA73B6F990EEE9ALL},22,-4L},{0x4FB6C1C5L,{0x0CA73B6F990EEE9ALL},22,-4L},{4294967287UL,{1UL},-12,0x45L},{4294967295UL,{0x81AE5043ED0E94F7LL},-3,9L},{0x4512622CL,{1UL},-29,0L},{0x2BD94C2BL,{0x8C4C8185F2E2462DLL},44,0x80L},{0xC7EA0BBCL,{0x6B0B2A739FFCCEA6LL},-6,-1L},{0x474EEFF7L,{1UL},-35,0L}},{{0x24EDE303L,{0xB60BA58C7C77CAFCLL},-27,0x99L},{0UL,{0UL},-1,0xAAL},{4294967288UL,{8UL},24,0xEAL},{0x89B73FF0L,{0x30B20F8B623F7150LL},-11,-1L},{0x2BD94C2BL,{0x8C4C8185F2E2462DLL},44,0x80L},{0x8317EBB2L,{0xC8573C973EF66856LL},-9,0xF8L},{0x2084F6F8L,{5UL},-21,0xE6L},{0UL,{0UL},-1,0xAAL},{0xF029C424L,{18446744073709551609UL},32,-3L},{4294967288UL,{0x39617AC6931B3F7CLL},19,0xD2L}}},{{{0x24EDE303L,{0xB60BA58C7C77CAFCLL},-27,0x99L},{0x4FB6C1C5L,{0x0CA73B6F990EEE9ALL},22,-4L},{0x83618A20L,{0xA81799648286403ALL},9,0x4CL},{1UL,{0x4BEFF9A2D5659A52LL},8,-5L},{0x42D9FDC5L,{18446744073709551612UL},-3,0x21L},{4294967295UL,{0x81AE5043ED0E94F7LL},-3,9L},{4294967288UL,{0x39617AC6931B3F7CLL},19,0xD2L},{0x42D9FDC5L,{18446744073709551612UL},-3,0x21L},{0x4512622CL,{1UL},-29,0L},{0x79C11F94L,{0UL},-28,-1L}},{{4294967295UL,{0x81AE5043ED0E94F7LL},-3,9L},{4294967288UL,{0x39617AC6931B3F7CLL},19,0xD2L},{0x42D9FDC5L,{18446744073709551612UL},-3,0x21L},{0x4512622CL,{1UL},-29,0L},{0x79C11F94L,{0UL},-28,-1L},{0x4FB6C1C5L,{0x0CA73B6F990EEE9ALL},22,-4L},{4294967286UL,{0x5FCD5E2840A634C6LL},6,1L},{5UL,{0xE52BB2FA91569356LL},-18,0xBCL},{4294967286UL,{0x5FCD5E2840A634C6LL},6,1L},{0x4FB6C1C5L,{0x0CA73B6F990EEE9ALL},22,-4L}},{{0x2084F6F8L,{5UL},-21,0xE6L},{0x89B73FF0L,{0x30B20F8B623F7150LL},-11,-1L},{0x25E7F820L,{18446744073709551615UL},-34,0x6FL},{0x89B73FF0L,{0x30B20F8B623F7150LL},-11,-1L},{0x2084F6F8L,{5UL},-21,0xE6L},{4294967295UL,{0x01C4A62F74E0E854LL},-17,1L},{0x24EDE303L,{0xB60BA58C7C77CAFCLL},-27,0x99L},{4294967288UL,{0x39617AC6931B3F7CLL},19,0xD2L},{0x05997DA2L,{0UL},-26,0x1DL},{0x48029C2BL,{0x5C5ECB5E790A7A44LL},-30,1L}}},{{{1UL,{0x4BEFF9A2D5659A52LL},8,-5L},{4294967295UL,{0x81AE5043ED0E94F7LL},-3,9L},{3UL,{0x2D1C0889641B2DF1LL},-44,0xD6L},{1UL,{1UL},26,1L},{0x4FB6C1C5L,{0x0CA73B6F990EEE9ALL},22,-4L},{3UL,{0x2D1C0889641B2DF1LL},-44,0xD6L},{4294967288UL,{0x39617AC6931B3F7CLL},19,0xD2L},{0x4512622CL,{1UL},-29,0L},{0x0A55C250L,{8UL},-43,0xBCL},{0x48029C2BL,{0x5C5ECB5E790A7A44LL},-30,1L}},{{4294967295UL,{0x40AD70EA69CA5723LL},11,1L},{1UL,{1UL},26,1L},{4294967295UL,{0x81AE5043ED0E94F7LL},-3,9L},{0x77264771L,{0x008063659F51BEEBLL},21,0L},{0x2084F6F8L,{5UL},-21,0xE6L},{4294967286UL,{0x5FCD5E2840A634C6LL},6,1L},{0x72092851L,{0x55B3D94608B4CD04LL},-18,8L},{0xC902AD9DL,{0xAF450D31762525AELL},-34,0x10L},{4294967295UL,{0x81AE5043ED0E94F7LL},-3,9L},{0x4FB6C1C5L,{0x0CA73B6F990EEE9ALL},22,-4L}},{{4294967287UL,{1UL},-12,0x45L},{0UL,{0UL},-1,0xAAL},{1UL,{0xB1261ABF1F398850LL},-21,-1L},{0x2084F6F8L,{5UL},-21,0xE6L},{0x79C11F94L,{0UL},-28,-1L},{4294967287UL,{1UL},16,-10L},{1UL,{0x4BEFF9A2D5659A52LL},8,-5L},{1UL,{0x4BEFF9A2D5659A52LL},8,-5L},{4294967287UL,{1UL},16,-10L},{0x79C11F94L,{0UL},-28,-1L}}},{{{0x48029C2BL,{0x5C5ECB5E790A7A44LL},-30,1L},{3UL,{0x2D1C0889641B2DF1LL},-44,0xD6L},{3UL,{0x2D1C0889641B2DF1LL},-44,0xD6L},{0x48029C2BL,{0x5C5ECB5E790A7A44LL},-30,1L},{0x42D9FDC5L,{18446744073709551612UL},-3,0x21L},{0x77264771L,{0x008063659F51BEEBLL},21,0L},{5UL,{0xE52BB2FA91569356LL},-18,0xBCL},{4294967295UL,{0x81AE5043ED0E94F7LL},-3,9L},{0x83618A20L,{0xA81799648286403ALL},9,0x4CL},{4294967288UL,{0x39617AC6931B3F7CLL},19,0xD2L}},{{3UL,{0x2D1C0889641B2DF1LL},-44,0xD6L},{0x24EDE303L,{0xB60BA58C7C77CAFCLL},-27,0x99L},{0x0A55C250L,{8UL},-43,0xBCL},{4294967295UL,{0x81AE5043ED0E94F7LL},-3,9L},{0x2BD94C2BL,{0x8C4C8185F2E2462DLL},44,0x80L},{4294967286UL,{0x5FCD5E2840A634C6LL},6,1L},{3UL,{0x2D1C0889641B2DF1LL},-44,0xD6L},{5UL,{0xE52BB2FA91569356LL},-18,0xBCL},{0x83618A20L,{0xA81799648286403ALL},9,0x4CL},{0x474EEFF7L,{1UL},-35,0L}},{{5UL,{0xE52BB2FA91569356LL},-18,0xBCL},{0xC902AD9DL,{0xAF450D31762525AELL},-34,0x10L},{0x8317EBB2L,{0xC8573C973EF66856LL},-9,0xF8L},{0x48029C2BL,{0x5C5ECB5E790A7A44LL},-30,1L},{4294967287UL,{1UL},-12,0x45L},{4294967293UL,{2UL},-40,0L},{0x48029C2BL,{0x5C5ECB5E790A7A44LL},-30,1L},{0x89B73FF0L,{0x30B20F8B623F7150LL},-11,-1L},{4294967287UL,{1UL},16,-10L},{5UL,{0xE52BB2FA91569356LL},-18,0xBCL}}}};
    int32_t *l_2944 = &g_530;
    int32_t *l_2945 = &g_125;
    int32_t *l_2946[3][9] = {{(void*)0,&g_200,&g_125,(void*)0,(void*)0,(void*)0,(void*)0,&g_125,&g_200},{(void*)0,&g_200,&g_125,(void*)0,(void*)0,(void*)0,(void*)0,&g_125,&g_200},{(void*)0,&g_2574,&l_2602[4][5][0],(void*)0,&g_2574,&g_2574,(void*)0,&l_2602[4][5][0],&g_2574}};
    int32_t l_2947 = 0xC5AF18D9L;
    uint8_t l_2948 = 0x29L;
    int64_t *l_2961 = &g_797;
    uint64_t ** const *l_2964 = &g_1698;
    uint64_t ** const **l_2965 = (void*)0;
    uint64_t ** const **l_2966 = &l_2964;
    uint64_t * const *l_2968 = (void*)0;
    uint64_t * const **l_2967 = &l_2968;
    uint64_t * const ***l_2969 = &l_2967;
    uint16_t ***l_2975 = (void*)0;
    uint8_t l_2976 = 1UL;
    union U5 l_2977 = {0};
    int i, j, k;
    for (g_33.f0 = 0; (g_33.f0 >= 19); g_33.f0++)
    {
        int32_t l_44 = 0x4AB19F88L;
        uint8_t *l_56 = &g_57;
        struct S1 l_64 = {4L};
        uint64_t *l_2413 = (void*)0;
        int32_t l_2458 = 0xFBD5A26FL;
        struct S3 *l_2459[2][1][2];
        int8_t *l_2493 = &g_325.f3;
        struct S0 l_2533 = {0UL};
        uint32_t l_2535 = 4UL;
        union U5 *l_2551 = &g_96;
        union U5 **l_2550[8][7][1] = {{{&l_2551},{(void*)0},{&l_2551},{&l_2551},{(void*)0},{&l_2551},{&l_2551}},{{&l_2551},{&l_2551},{&l_2551},{(void*)0},{&l_2551},{&l_2551},{(void*)0}},{{&l_2551},{&l_2551},{(void*)0},{&l_2551},{&l_2551},{(void*)0},{&l_2551}},{{&l_2551},{&l_2551},{&l_2551},{&l_2551},{(void*)0},{&l_2551},{&l_2551}},{{(void*)0},{&l_2551},{&l_2551},{(void*)0},{&l_2551},{&l_2551},{(void*)0}},{{&l_2551},{&l_2551},{&l_2551},{&l_2551},{&l_2551},{(void*)0},{&l_2551}},{{&l_2551},{(void*)0},{&l_2551},{&l_2551},{(void*)0},{&l_2551},{&l_2551}},{{(void*)0},{&l_2551},{&l_2551},{&l_2551},{&l_2551},{&l_2551},{(void*)0}}};
        union U5 ***l_2549 = &l_2550[4][2][0];
        int32_t l_2568 = 0x1DE55174L;
        int32_t l_2569[3][5] = {{0x39836713L,0x39836713L,0x97C6D2EDL,(-7L),0x97C6D2EDL},{0x39836713L,0x39836713L,0x97C6D2EDL,(-7L),0x97C6D2EDL},{0x39836713L,0x39836713L,0x97C6D2EDL,(-7L),0x97C6D2EDL}};
        uint16_t *l_2582 = (void*)0;
        struct S2 l_2627 = {-18683,1,5,0,2877};
        int16_t l_2646[3];
        struct S2 *l_2677 = &g_2678[1];
        struct S2 *l_2683[3][5] = {{&g_1091,&g_2678[1],&g_856,&g_856,&g_2678[1]},{&g_856,&g_856,&g_856,&g_2678[1],&g_2678[1]},{&g_856,&g_856,&g_856,&g_856,&g_2678[1]}};
        uint32_t *l_2696[7][5][7] = {{{&g_246,&g_805,(void*)0,&g_246,&g_560,&g_560,&g_246},{&g_805,&g_246,&g_805,&g_560,(void*)0,&g_560,&g_246},{&g_805,&g_805,&g_246,&g_805,(void*)0,(void*)0,&g_246},{&g_560,(void*)0,&g_560,&g_560,(void*)0,&g_560,&g_246},{&g_246,&g_246,(void*)0,&g_2[2],(void*)0,&g_560,&g_2[2]}},{{&g_560,&g_560,(void*)0,&g_246,(void*)0,&g_246,(void*)0},{&g_246,&g_246,(void*)0,&g_2[3],&g_2[2],&g_805,&g_805},{&g_246,(void*)0,&g_560,&g_805,(void*)0,(void*)0,(void*)0},{&g_2[2],&g_805,&g_2[2],&g_805,&g_2[2],&g_246,&g_560},{&g_2[1],&g_246,&g_560,&g_560,(void*)0,&g_246,&g_560}},{{&g_805,&g_805,&g_2[3],(void*)0,(void*)0,&g_2[3],&g_805},{&g_2[1],&g_560,&g_246,&g_246,(void*)0,&g_560,&g_805},{&g_2[2],&g_805,&g_805,&g_2[2],(void*)0,(void*)0,(void*)0},{&g_246,&g_805,&g_805,&g_246,&g_246,&g_560,&g_560},{&g_2[2],&g_805,&g_805,&g_2[2],&g_2[3],(void*)0,&g_246}},{{&g_560,(void*)0,&g_560,&g_246,&g_560,(void*)0,&g_560},{(void*)0,&g_560,&g_2[2],&g_246,&g_2[2],&g_246,&g_805},{(void*)0,&g_560,&g_560,&g_560,&g_560,&g_560,&g_560},{&g_2[2],&g_805,&g_2[2],&g_246,(void*)0,&g_805,&g_246},{(void*)0,&g_805,&g_560,&g_560,(void*)0,&g_246,(void*)0}},{{&g_805,(void*)0,&g_805,&g_805,(void*)0,&g_805,&g_560},{&g_805,&g_560,(void*)0,&g_805,&g_560,&g_560,&g_246},{&g_805,&g_805,(void*)0,&g_246,&g_246,&g_246,(void*)0},{&g_560,&g_560,&g_246,(void*)0,&g_805,(void*)0,&g_246},{&g_560,(void*)0,&g_246,&g_2[2],(void*)0,(void*)0,(void*)0}},{{&g_805,&g_805,&g_560,&g_805,&g_805,&g_560,&g_2[1]},{&g_2[3],&g_805,&g_805,&g_560,&g_246,&g_2[2],&g_805},{&g_246,&g_560,(void*)0,&g_560,&g_560,(void*)0,&g_560},{&g_2[3],&g_560,&g_805,&g_560,(void*)0,&g_246,&g_2[2]},{&g_805,(void*)0,&g_246,&g_560,(void*)0,&g_560,(void*)0}},{{&g_560,&g_805,&g_805,&g_560,(void*)0,&g_2[2],&g_805},{&g_560,(void*)0,&g_805,&g_560,&g_560,&g_246,&g_805},{&g_805,&g_2[2],&g_2[2],&g_560,&g_2[2],&g_2[2],&g_805},{&g_805,&g_246,(void*)0,&g_805,&g_560,&g_560,(void*)0},{&g_805,&g_246,&g_2[2],&g_2[2],&g_2[3],&g_2[3],&g_2[2]}}};
        int32_t l_2708 = 0x43525ACAL;
        const int64_t l_2882[2] = {0L,0L};
        const int32_t l_2897 = 0xFBAE1FCCL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_2459[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 3; i++)
            l_2646[i] = 1L;
        if (g_43)
            break;
    }
    l_2948++;
    (*g_119) = (safe_add_func_uint8_t_u_u(p_23.f0, ((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((0x3DF1L == (((*l_2961) = (-2L)) <= (((*g_2011) = l_2944) == &l_2446))) > (safe_mod_func_uint64_t_u_u(((((*l_2966) = l_2964) != ((*l_2969) = l_2967)) && ((*l_2690) || (!(safe_mod_func_int8_t_s_s(((*l_2944) ^= (g_3 , (*l_2945))), (*g_8)))))), p_23.f1))), 6)) < 255UL), 4)) < p_24), p_23.f1)), 0x746D6BFFL)) <= (*g_119))));
    (*l_2945) = ((p_25 , (l_2900[1][0][0].f1 = (p_23.f1 , l_2900[1][0][0].f1))) , ((*l_2944) ^= (0x0BF7BC4D93B9819FLL == ((&g_1331 == l_2975) >= (l_2976 = ((-1L) && ((18446744073709551611UL || ((1UL == p_22) | p_24)) & 4294967295UL)))))));
    return l_2977;
}







static const union U5 func_47(uint64_t * p_48, int8_t * p_49, uint64_t * p_50, uint64_t * p_51, uint32_t p_52)
{
    const union U5 l_2415 = {0};
    return l_2415;
}







static uint8_t func_58(struct S1 p_59, int8_t * p_60, int64_t p_61, struct S0 p_62, struct S1 p_63)
{
    int32_t *l_66 = &g_3;
    uint8_t l_74 = 0x41L;
    int32_t l_1931[10][3] = {{0x653F302FL,1L,1L},{1L,0xB76302E3L,0x3529C246L},{0x4054E166L,0x53F5BFDBL,0x3529C246L},{0L,0x3529C246L,1L},{0xED2F1D93L,0x59804B8EL,(-1L)},{0x3529C246L,0x3529C246L,0x59804B8EL},{0xD7DC1420L,0x53F5BFDBL,0x89782AAAL},{0xD7DC1420L,0xB76302E3L,0xED2F1D93L},{0x3529C246L,1L,0x53F5BFDBL},{0xED2F1D93L,0xD7DC1420L,0xED2F1D93L}};
    const int8_t *l_1932 = &g_9;
    union U4 *l_1979 = &g_1980;
    const struct S2 l_1993 = {-635,-1,-37,0,3796};
    struct S3 * const *l_1997[6] = {&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7],&g_733[2][0][7]};
    int64_t l_2073 = 0xF31C21E7C5B21DE3LL;
    int64_t l_2076[2];
    union U4 **l_2111[2];
    union U4 ***l_2110 = &l_2111[1];
    union U4 ****l_2109 = &l_2110;
    uint32_t ***l_2129 = (void*)0;
    int32_t l_2151 = 1L;
    uint8_t l_2159 = 1UL;
    int8_t l_2162[3];
    struct S3 *l_2166[1][1][9] = {{{(void*)0,&g_371,&g_371,&g_371,(void*)0,(void*)0,&g_371,(void*)0,(void*)0}}};
    struct S3 l_2220 = {0x7EB3377BL,{18446744073709551613UL},9,0x96L};
    const int64_t * const ***l_2232 = (void*)0;
    const int64_t * const ****l_2231 = &l_2232;
    int64_t *****l_2243 = (void*)0;
    union U5 l_2271[7] = {{0},{0},{0},{0},{0},{0},{0}};
    uint8_t l_2300[8][1];
    uint8_t l_2325[6] = {0x6DL,0x6DL,0x6DL,0x6DL,0x6DL,0x6DL};
    uint8_t *l_2331[3];
    union U5 *l_2333 = &g_612;
    union U5 ** const l_2332[3][4] = {{&l_2333,&l_2333,&l_2333,&l_2333},{&l_2333,&l_2333,&l_2333,&l_2333},{&l_2333,&l_2333,&l_2333,&l_2333}};
    uint32_t * const **l_2409 = &g_721;
    uint32_t * const ***l_2408[7][4][9] = {{{&l_2409,(void*)0,(void*)0,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409},{&l_2409,&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,(void*)0,&l_2409,&l_2409},{&l_2409,(void*)0,&l_2409,&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,&l_2409},{&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409}},{{&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,(void*)0},{&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,&l_2409,(void*)0,&l_2409,&l_2409},{&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409},{&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,(void*)0,(void*)0,&l_2409}},{{&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,(void*)0,(void*)0,&l_2409,(void*)0},{&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,(void*)0,&l_2409,(void*)0,&l_2409},{&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409},{&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,&l_2409,(void*)0,&l_2409,(void*)0}},{{&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409},{&l_2409,&l_2409,&l_2409,&l_2409,(void*)0,&l_2409,(void*)0,&l_2409,&l_2409},{&l_2409,&l_2409,&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,&l_2409,&l_2409},{&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,&l_2409}},{{&l_2409,(void*)0,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409},{&l_2409,(void*)0,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409},{&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,(void*)0,(void*)0,&l_2409,&l_2409},{&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409}},{{&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,&l_2409,(void*)0,&l_2409,&l_2409},{&l_2409,&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,&l_2409,(void*)0,(void*)0},{&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,(void*)0},{&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409}},{{&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,&l_2409},{(void*)0,&l_2409,&l_2409,&l_2409,&l_2409,(void*)0,&l_2409,&l_2409,&l_2409},{&l_2409,&l_2409,(void*)0,(void*)0,&l_2409,&l_2409,&l_2409,(void*)0,(void*)0},{&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,&l_2409,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2076[i] = 0x370AB24E8504F8E3LL;
    for (i = 0; i < 2; i++)
        l_2111[i] = &l_1979;
    for (i = 0; i < 3; i++)
        l_2162[i] = 4L;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
            l_2300[i][j] = 246UL;
    }
    for (i = 0; i < 3; i++)
        l_2331[i] = &g_186[0][9][0];
    (*l_66) = g_5.f0;
    for (p_63.f0 = 0; (p_63.f0 >= (-21)); p_63.f0--)
    {
        int32_t *l_69 = &g_3;
        int32_t *l_70 = &g_3;
        int32_t *l_71 = (void*)0;
        int32_t *l_72 = &g_3;
        int32_t *l_73[10] = {(void*)0,&g_3,(void*)0,(void*)0,&g_3,(void*)0,(void*)0,&g_3,(void*)0,(void*)0};
        int i;
        --l_74;
        (*l_66) ^= g_5.f0;
    }
    for (p_62.f0 = 0; (p_62.f0 == 45); p_62.f0++)
    {
        int64_t **l_1934 = &g_423;
        struct S3 l_1935 = {4294967295UL,{0UL},27,2L};
        uint8_t *l_1936 = (void*)0;
        uint16_t *l_1967 = (void*)0;
        int32_t *l_1985 = &g_125;
        uint16_t *l_1991 = &g_765;
        int16_t *l_1996 = &g_317;
        union U5 l_2026[6] = {{0},{0},{0},{0},{0},{0}};
        int64_t l_2043 = 0L;
        int32_t l_2046 = 0xBF1F7622L;
        int32_t l_2077 = 0xE62987E7L;
        int32_t l_2080 = 8L;
        int32_t l_2101 = 0xA4A8DDE5L;
        int64_t l_2161[9] = {0L,0L,0x3D6C9FD3DC6DCA7FLL,0L,0L,0x3D6C9FD3DC6DCA7FLL,0L,0L,0x3D6C9FD3DC6DCA7FLL};
        int32_t l_2167 = 0xC4E0AF19L;
        int32_t l_2207 = 0xD0168D22L;
        int i;
    }
    return (*l_66);
}







static int32_t func_79(uint64_t p_80, struct S2 p_81, uint8_t p_82)
{
    int16_t * const l_1951 = (void*)0;
    uint32_t l_1952[1][8] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
    int i, j;
    for (g_797 = 0; (g_797 != 4); ++g_797)
    {
        int32_t *l_1939 = &g_200;
        int32_t **l_1940 = &l_1939;
        int32_t l_1956 = 0x47BFB396L;
        (*l_1940) = l_1939;
        (*l_1939) = g_230.f0;
        for (g_1129 = 0; (g_1129 == (-1)); g_1129 = safe_sub_func_int32_t_s_s(g_1129, 1))
        {
            int16_t *l_1953 = (void*)0;
            int32_t l_1954 = 0xE42CAEF2L;
            int32_t *l_1955[3][4];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1955[i][j] = &g_118;
            }
            l_1956 = ((safe_mod_func_int64_t_s_s(((((*l_1939) |= (safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((g_1091 , g_797), 65535UL)), p_81.f2))) > (safe_mul_func_int16_t_s_s((g_317 &= ((((void*)0 == l_1951) <= g_765) <= l_1952[0][4])), (l_1954 ^ p_81.f3)))) || 0x9AFE24BFL), l_1954)) , p_82);
        }
    }
    return l_1952[0][2];
}







static int64_t * func_85(uint8_t p_86, const int8_t * p_87, int64_t * p_88, int32_t * p_89)
{
    int64_t *l_1933[5];
    int i;
    for (i = 0; i < 5; i++)
        l_1933[i] = &g_1574;
    return l_1933[1];
}







static int32_t func_92(uint8_t * const p_93, int8_t p_94, union U5 p_95)
{
    uint64_t *l_99 = &g_33.f1.f0;
    struct S1 ***l_1420 = &g_1024;
    int32_t l_1431 = 5L;
    int32_t l_1456 = 7L;
    uint32_t *l_1466[2][6] = {{&g_358[1],&g_248,&g_358[1],&g_358[1],&g_248,&g_358[1]},{&g_358[1],&g_248,&g_358[1],&g_358[1],&g_248,&g_358[1]}};
    union U5 l_1476 = {0};
    const union U4 l_1505 = {0xCD314BD0L};
    struct S3 *l_1510 = &g_371;
    union U4 **l_1522 = &g_538;
    union U4 ***l_1521 = &l_1522;
    int32_t l_1554 = 0x9F2F2B14L;
    uint32_t **l_1562 = (void*)0;
    uint32_t ***l_1561 = &l_1562;
    const int8_t l_1568[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
    uint64_t l_1589 = 18446744073709551615UL;
    uint16_t l_1628 = 0xC800L;
    const uint16_t l_1642 = 65535UL;
    uint32_t l_1665 = 0xAAE06697L;
    uint16_t l_1678[2][4] = {{0x9CCDL,0x9CCDL,0x9CCDL,0x9CCDL},{0x9CCDL,0x9CCDL,0x9CCDL,0x9CCDL}};
    int8_t **l_1692 = &g_140;
    struct S0 **l_1731 = &g_1625;
    struct S0 ***l_1730 = &l_1731;
    int64_t l_1734[5][5] = {{0x9C1D611A9AD35CA1LL,5L,0x9C1D611A9AD35CA1LL,5L,0x9C1D611A9AD35CA1LL},{9L,9L,9L,9L,9L},{0x9C1D611A9AD35CA1LL,5L,0x9C1D611A9AD35CA1LL,5L,0x9C1D611A9AD35CA1LL},{9L,9L,9L,9L,9L},{0x9C1D611A9AD35CA1LL,5L,0x9C1D611A9AD35CA1LL,5L,0x9C1D611A9AD35CA1LL}};
    uint8_t **l_1854 = &g_1249;
    int32_t *l_1873 = &g_1507;
    int32_t *l_1922[8][4] = {{&l_1431,&g_1507,&g_3,&l_1554},{&g_3,&g_1507,&g_1507,&g_3},{&g_1507,&g_3,&l_1431,(void*)0},{&g_1507,&g_200,(void*)0,&l_1554},{&g_1507,&g_3,&l_1554,&l_1554},{&g_200,&g_200,&l_1431,&g_3},{&g_3,&g_1507,&l_1431,&g_1507},{&g_200,(void*)0,&l_1554,&l_1431}};
    int8_t l_1923 = 0x43L;
    int8_t l_1924 = 0xD1L;
    uint32_t l_1928 = 1UL;
    int i, j;
    if ((safe_mul_func_uint32_t_u_u(4294967293UL, ((void*)0 != l_99))))
    {
        int64_t *l_108 = &g_37;
        int32_t **l_116 = (void*)0;
        int32_t *l_117 = &g_118;
        int32_t *l_120 = &g_118;
        uint8_t l_1401 = 0x13L;
        uint8_t *l_1418 = &g_186[0][9][0];
        uint8_t **l_1441 = &g_1248;
        uint8_t ***l_1440 = &l_1441;
        uint8_t **** const l_1439 = &l_1440;
        union U5 l_1448 = {0};
        struct S0 l_1457 = {0UL};
        int16_t l_1461 = 7L;
        int32_t l_1527 = 0x3057A7A4L;
        int32_t l_1531 = 0x02BACD50L;
        union U4 l_1542[1][8][7] = {{{{0UL},{0x409B5CB8L},{4294967286UL},{4294967286UL},{0x409B5CB8L},{0UL},{4294967295UL}},{{4294967291UL},{0xA07D459BL},{0UL},{4294967295UL},{0UL},{0xE01A16DEL},{0xE01A16DEL}},{{4294967295UL},{1UL},{8UL},{1UL},{4294967295UL},{0x21327AE8L},{1UL}},{{4294967295UL},{0xA07D459BL},{0xE01A16DEL},{0xB4EA5DC5L},{0xE1CA4642L},{4294967291UL},{0xE1CA4642L}},{{4UL},{0x409B5CB8L},{0x409B5CB8L},{4UL},{1UL},{8UL},{1UL}},{{4294967295UL},{0xB4EA5DC5L},{0UL},{8UL},{4294967295UL},{4294967295UL},{8UL}},{{4294967295UL},{1UL},{4294967295UL},{8UL},{0UL},{4294967286UL},{1UL}},{{4294967291UL},{7UL},{0xE1CA4642L},{0UL},{0UL},{0UL},{0xE1CA4642L}}}};
        struct S1 l_1545 = {0x30A8DF92L};
        uint16_t l_1557[8];
        const uint32_t *l_1565 = &g_246;
        const uint32_t **l_1564 = &l_1565;
        const uint32_t ***l_1563 = &l_1564;
        struct S2 l_1571 = {-784,1,2,0,9617};
        uint32_t l_1595 = 1UL;
        uint32_t l_1609[7];
        int8_t l_1699 = 0x54L;
        uint16_t l_1700[2][8][5] = {{{0x31F9L,7UL,0x31F9L,0x31F9L,7UL},{0UL,1UL,1UL,0UL,1UL},{7UL,7UL,65535UL,7UL,7UL},{1UL,0UL,1UL,1UL,0UL},{7UL,0x31F9L,0x31F9L,7UL,0x31F9L},{0UL,0UL,0x6661L,0UL,0UL},{0x31F9L,7UL,0x31F9L,0x31F9L,7UL},{0UL,1UL,1UL,0UL,1UL}},{{7UL,7UL,65535UL,7UL,7UL},{1UL,0UL,1UL,1UL,0UL},{7UL,0x31F9L,0x31F9L,7UL,0x31F9L},{0UL,0UL,0x6661L,0UL,0UL},{0x31F9L,7UL,0x31F9L,0x31F9L,7UL},{0UL,1UL,1UL,0UL,1UL},{7UL,7UL,65535UL,7UL,7UL},{1UL,0UL,1UL,1UL,0UL}}};
        struct S3 *l_1737 = &g_33;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_1557[i] = 0UL;
        for (i = 0; i < 7; i++)
            l_1609[i] = 2UL;
        if ((func_100(func_105((l_99 != l_108), (((func_109(l_108, (safe_div_func_uint64_t_u_u(p_94, (((((safe_add_func_uint32_t_u_u(((l_117 = (void*)0) != (g_119 = (void*)0)), ((*l_120) = 9L))) == ((void*)0 != &g_37)) & p_94) == 255UL) && 0x50L)))) , 0x893CB890L) && (-1L)) || 0L)), &g_797, g_9, l_99) , l_1401))
        {
            int32_t *l_1424 = &g_1130;
            union U5 l_1445 = {0};
            const struct S1 l_1464 = {0x308386E5L};
            struct S3 *l_1497 = &g_371;
            int32_t l_1528[10][5] = {{0xCC63A757L,1L,1L,0xCC63A757L,1L},{0x5F755A85L,0x5F755A85L,0x8E863214L,0x5F755A85L,0x5F755A85L},{1L,0xCC63A757L,1L,1L,0xCC63A757L},{0x5F755A85L,0x2756F2BEL,0x2756F2BEL,0x5F755A85L,0x2756F2BEL},{0xCC63A757L,0xCC63A757L,0x46404259L,0xCC63A757L,0xCC63A757L},{0x2756F2BEL,0x5F755A85L,0x2756F2BEL,0x2756F2BEL,0x5F755A85L},{0xCC63A757L,1L,1L,0xCC63A757L,1L},{0x2756F2BEL,0x2756F2BEL,0x5F755A85L,0x2756F2BEL,0x2756F2BEL},{0x46404259L,1L,0x46404259L,0x46404259L,1L},{0x2756F2BEL,0x8E863214L,0x8E863214L,0x2756F2BEL,0x8E863214L}};
            int16_t l_1552 = 0x5E48L;
            struct S2 l_1560 = {-15403,-0,10,0,2697};
            const uint32_t ****l_1566 = (void*)0;
            const uint32_t ****l_1567 = &l_1563;
            int64_t * const l_1573 = &g_1574;
            int64_t * const *l_1572 = &l_1573;
            int i, j;
            for (g_33.f1.f0 = 1; (g_33.f1.f0 <= 4); g_33.f1.f0 += 1)
            {
                const struct S3 l_1403 = {0x6AE3877FL,{5UL},40,0x95L};
                int32_t l_1438 = 0x7A8A82A6L;
                const int32_t *l_1468 = &g_1130;
                const int32_t **l_1467 = &l_1468;
                int16_t *l_1472 = &g_317;
                int8_t *l_1475 = &g_325.f3;
                struct S3 *l_1498 = &g_325;
                uint32_t **l_1513[1];
                int64_t l_1529 = 0x8C45FF3EA53DA1C4LL;
                int32_t l_1530[5][7][7] = {{{1L,1L,0x6F36A328L,0x49B8F3CCL,(-1L),0L,0xDECCC14CL},{1L,(-10L),(-10L),(-1L),(-10L),(-10L),1L},{(-9L),0x78A28DCBL,0xAB859ED1L,7L,8L,0x085A573FL,(-4L)},{(-10L),0x45549F8FL,0L,0x29C18F6BL,0xB96C2D77L,0xED6D14C6L,0L},{1L,1L,0xAB859ED1L,(-1L),0x7B860A0FL,(-3L),0xA9323B74L},{0L,(-1L),(-10L),5L,1L,1L,0xD2139F31L},{(-1L),0x74EF6473L,0x6F36A328L,(-9L),0x5E6C940BL,0xEB2FF642L,(-3L)}},{{0xC4901D04L,0x59382ED4L,(-1L),0x88B37769L,(-7L),0xF4F3B2EEL,0x82864FCFL},{0x35853DC4L,0x49B8F3CCL,7L,0x74EF6473L,0x42720558L,0x5E6C940BL,1L},{0x9203F462L,9L,(-7L),1L,0L,0L,1L},{0x78A28DCBL,1L,0x78A28DCBL,0xDECCC14CL,(-2L),0x49B8F3CCL,(-1L)},{0x88B37769L,4L,0L,0x0FCBB9AEL,(-7L),0x9203F462L,1L},{1L,7L,0xF43D8449L,0x5E6C940BL,(-3L),0x49B8F3CCL,(-1L)},{0x45549F8FL,1L,0L,0x4C2E5EC0L,7L,0L,0xC4901D04L}},{{(-8L),(-1L),(-3L),0xF4A65651L,1L,0x5E6C940BL,0xB00F8EEAL},{1L,0x9203F462L,1L,4L,5L,0xF4F3B2EEL,0L},{(-1L),0xD87EDA8BL,1L,0x02B9EA3BL,0x6F36A328L,0xEB2FF642L,0L},{0x4B6DA28DL,1L,0x92502AF0L,0L,0x9203F462L,1L,5L},{(-3L),1L,0L,0L,1L,(-3L),0xF43D8449L},{0x22BA3BA2L,0x29C18F6BL,0xA1A45E87L,0x3D415776L,0L,0xED6D14C6L,0x59382ED4L},{0xF43D8449L,0L,(-1L),(-3L),7L,0x085A573FL,1L}},{{0x4C2E5EC0L,0x29C18F6BL,1L,(-1L),0L,(-10L),0x22BA3BA2L},{0x8DC02CC1L,1L,1L,7L,0x736F445EL,0L,(-1L)},{(-6L),1L,0x0127DCF6L,0xD2139F31L,0x3C2AFE76L,0x59382ED4L,0x2C62A61CL},{0L,0xD87EDA8BL,0x7B860A0FL,1L,0x87A2EFDAL,0x876CBEC3L,1L},{0x3D415776L,0xCE443042L,9L,1L,0x0FCBB9AEL,(-1L),0L},{0x02B9EA3BL,0x085A573FL,0x6F36A328L,(-1L),4L,(-1L),0x6F36A328L},{0x29C18F6BL,0x29C18F6BL,0xCE443042L,0x3C2AFE76L,0x3D415776L,0x90B9D550L,0x4B6DA28DL}},{{1L,0xD87EDA8BL,0x49B8F3CCL,0L,(-1L),0x164D21A6L,0xB00F8EEAL},{0L,1L,0xAAEECD00L,0L,0x3D415776L,1L,0xE62774A8L},{0x42720558L,0xDECCC14CL,0L,0x764128CBL,4L,1L,(-1L)},{(-1L),5L,0x82864FCFL,0x22BA3BA2L,0x0FCBB9AEL,0xC4901D04L,0L},{(-5L),4L,(-8L),0x4C8D7CAEL,8L,7L,1L},{0x88B37769L,9L,1L,0L,0x92502AF0L,(-1L),5L},{0L,0x164D21A6L,0x7B860A0FL,(-4L),0x4C8D7CAEL,0x5E6C940BL,0x5E6C940BL}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1513[i] = &l_1466[0][0];
                for (g_224 = 1; (g_224 <= 4); g_224 += 1)
                {
                    uint32_t l_1419 = 5UL;
                    int32_t l_1421 = 0xA29C68D5L;
                    uint8_t l_1436[6][1][4] = {{{0x4FL,0x99L,0x4FL,0x99L}},{{0x4FL,0x99L,0x4FL,0x99L}},{{0x4FL,0x99L,0x4FL,0x99L}},{{0x4FL,0x99L,0x4FL,0x99L}},{{0x4FL,0x99L,0x4FL,0x99L}},{{0x4FL,0x99L,0x4FL,0x99L}}};
                    int i, j, k;
                    for (g_1130 = 0; (g_1130 <= 4); g_1130 += 1)
                    {
                        union U4 **l_1402 = &g_538;
                        int i;
                        (*l_1402) = (*g_1195);
                        (*l_120) ^= (l_1403 , (safe_lshift_func_uint8_t_u_u(g_358[g_224], 0)));
                        return g_1114[g_224];
                    }
                    for (g_218 = 0; (g_218 <= 0); g_218 += 1)
                    {
                        int64_t **l_1406 = &g_423;
                        int64_t ***l_1407[4][1][10] = {{{&l_1406,&l_1406,&l_1406,(void*)0,&l_1406,&l_1406,&l_1406,(void*)0,&l_1406,&l_1406}},{{(void*)0,(void*)0,&l_1406,(void*)0,(void*)0,(void*)0,&l_1406,(void*)0,(void*)0,(void*)0}},{{&l_1406,(void*)0,&l_1406,&l_1406,&l_1406,(void*)0,&l_1406,&l_1406,&l_1406,(void*)0}},{{(void*)0,&l_1406,&l_1406,&l_1406,(void*)0,&l_1406,&l_1406,&l_1406,(void*)0,&l_1406}}};
                        uint8_t **l_1417[10][1] = {{&g_1249},{&g_1248},{&g_1249},{&g_1248},{&g_1249},{&g_1248},{&g_1249},{&g_1248},{&g_1249},{&g_1248}};
                        int32_t l_1422[6];
                        int32_t l_1423 = 3L;
                        int32_t **l_1425 = &g_119;
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_1422[i] = 0L;
                        (*l_120) &= (((((g_1408[0][5][1] = l_1406) != (g_1409 = &g_423)) , (l_1422[1] = (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((*g_1249) = (!0x8AL)) | ((l_1418 = &l_1401) != p_93)), (l_1419 == ((((void*)0 != l_1420) > (l_1421 = p_94)) | p_94)))), l_1403.f3)))) , 1L) != l_1423);
                        (*l_1425) = l_1424;
                    }
                    if (l_1403.f3)
                    {
                        int16_t *l_1437[9] = {&g_500,&g_500,&g_500,&g_500,&g_500,&g_500,&g_500,&g_500,&g_500};
                        int i;
                        (*l_120) ^= (safe_div_func_int16_t_s_s(g_325.f1.f0, (0x4221L && (l_1438 ^= (g_218 = ((((0x68C70281D80D0A51LL | (*l_1424)) > ((~((safe_add_func_uint64_t_u_u((p_95 , 0x8BE4B3FA1790BBDALL), l_1431)) && (((safe_mul_func_uint8_t_u_u((l_1421 , (safe_rshift_func_uint8_t_u_u((*p_93), 4))), (*p_93))) || l_1431) ^ 0x73L))) >= (*p_93))) > l_1436[3][0][1]) && p_94))))));
                        if (p_94)
                            continue;
                    }
                    else
                    {
                        int32_t *l_1455 = &l_1421;
                        struct S0 *l_1458 = (void*)0;
                        struct S0 *l_1459 = &l_1457;
                        struct S0 *l_1460[8] = {(void*)0,&g_371.f1,&g_371.f1,(void*)0,&g_371.f1,&g_371.f1,(void*)0,&g_371.f1};
                        uint32_t **l_1465[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1465[i] = &g_1242;
                        g_371.f1 = ((*l_1459) = ((((((l_1439 == g_1442) & p_94) != ((l_1438 = ((*l_120) ^= ((void*)0 == &p_95))) < (l_1445 , (l_1456 = (l_1431 = (safe_div_func_int32_t_s_s(((*l_1455) = (((l_1448 , (safe_rshift_func_uint8_t_u_u((--(*l_1418)), 0))) <= p_94) > ((*l_1424) = (safe_rshift_func_uint8_t_u_s((18446744073709551615UL >= l_1419), 3))))), p_94))))))) < g_358[0]) ^ 0x69C6L) , l_1457));
                        (*l_1424) |= ((*l_120) = l_1461);
                        l_1456 = ((safe_sub_func_uint8_t_u_u(((*l_1424) ^ 1L), (l_1464 , ((l_1466[0][0] = l_1424) == (p_95 , &g_248))))) || ((*g_1242) > ((l_1467 == (l_116 = &g_119)) ^ 4L)));
                    }
                    if (g_224)
                        break;
                }
                if ((g_358[g_33.f1.f0] ^ (((safe_div_func_uint32_t_u_u((((!(*p_93)) || (((*l_1472) = (**l_1467)) && (safe_mul_func_int8_t_s_s((p_94 = ((***g_1194) , ((0xD133B2CF69E2D1C4LL && 0x9834F5E29207BD08LL) < (((*l_1468) , l_1475) != (void*)0)))), l_1431)))) == 0xEBAF350C3E5ED133LL), l_1431)) , (*l_120)) != l_1431)))
                {
                    if ((l_1476 , (*l_1424)))
                    {
                        l_1456 |= p_94;
                        return p_94;
                    }
                    else
                    {
                        int16_t l_1481 = 0x444EL;
                        int32_t l_1495 = 4L;
                        l_1495 = ((((safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u(l_1481, (safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((*p_93) <= (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u((*g_1242))) <= (-1L)), l_1481)), 0x01L)), 5))), l_1481)), (safe_add_func_int32_t_s_s(((*l_1424) = ((*l_120) = ((*l_1468) ^ g_2[4]))), 0x71025E08L)))))), p_94)) ^ l_1456) == 1UL) || l_1481);
                        return g_805;
                    }
                }
                else
                {
                    uint32_t **l_1514 = &g_1243;
                    int32_t l_1523 = 1L;
                    int16_t l_1524 = 0xB0CDL;
                    uint16_t l_1532 = 0xE655L;
                    uint8_t l_1539 = 0xA0L;
                    int32_t l_1550 = 0L;
                    int32_t l_1555 = 9L;
                    int32_t l_1556 = 0xEC9A7DF5L;
                    for (g_230.f0 = 4; (g_230.f0 >= 0); g_230.f0 -= 1)
                    {
                        int32_t *l_1496[3][4][3] = {{{(void*)0,(void*)0,(void*)0},{&g_3,&g_3,&g_3},{(void*)0,(void*)0,(void*)0},{&g_3,&g_3,&g_3}},{{(void*)0,(void*)0,(void*)0},{&g_3,&g_3,&g_3},{(void*)0,(void*)0,(void*)0},{&g_3,&g_3,&g_3}},{{(void*)0,(void*)0,(void*)0},{&g_3,&g_3,&g_3},{(void*)0,(void*)0,(void*)0},{&g_3,&g_3,&g_3}}};
                        int i, j, k;
                        l_1496[1][0][1] = &l_1456;
                    }
                    for (g_229 = 4; (g_229 >= 0); g_229 -= 1)
                    {
                        l_1498 = l_1497;
                        g_1502 = g_1499;
                    }
                    (*l_120) = ((safe_div_func_int16_t_s_s(p_94, (l_1505 , (+p_94)))) && g_1507);
                    if ((safe_add_func_uint64_t_u_u((((void*)0 != l_1510) , (((*l_1475) |= ((safe_mod_func_int64_t_s_s(((l_1513[0] = (void*)0) != l_1514), (safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(((*g_1242) |= (((safe_lshift_func_int8_t_s_u((*l_1424), (((void*)0 == &g_929) & 6L))) && (l_1521 == &g_1195)) <= p_94)), l_1523)), p_94)))) < l_1524)) != (-2L))), 0xB8FA55DB76C8FE99LL)))
                    {
                        int32_t *l_1525 = &g_125;
                        int32_t *l_1526[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1526[i] = &g_530;
                        l_1532++;
                        if (p_94)
                            continue;
                        (*l_120) &= (((safe_mul_func_int16_t_s_s((l_1438 = (safe_lshift_func_uint8_t_u_s((((((((0L != (((g_1114[g_33.f1.f0] = l_1539) >= ((safe_add_func_uint8_t_u_u(1UL, 1L)) > (-2L))) , (((l_1542[0][1][2] , (0xCB0351E3L == 1UL)) < ((safe_div_func_int16_t_s_s(((l_108 == l_99) < 0x62F5BD9BL), 0xF9BAL)) != (**l_1467))) != l_1505.f0))) ^ p_94) > 9L) | p_94) , 0x7563L) > p_94) != 255UL), p_94))), p_94)) , p_94) < 1UL);
                        l_1545 = (***l_1420);
                    }
                    else
                    {
                        int32_t *l_1546 = &l_1456;
                        int32_t *l_1547 = (void*)0;
                        int32_t *l_1548 = &g_125;
                        int32_t *l_1549 = (void*)0;
                        int32_t *l_1551 = &l_1523;
                        int32_t *l_1553[10] = {&g_530,&g_530,&g_200,&g_530,&g_530,&g_200,&g_530,&g_530,&g_200,&g_530};
                        int i;
                        --l_1557[3];
                    }
                }
                (*l_1467) = (l_1560 , (void*)0);
                (*l_1467) = &g_125;
            }
            (*l_120) ^= ((*l_1424) = (((*l_1424) , l_1561) != ((*l_1567) = l_1563)));
            (*l_120) &= (l_1568[6] && (((0L | (((safe_lshift_func_uint8_t_u_u((&l_108 != (l_1572 = (l_1571 , &l_108))), ((*g_1249) ^= (safe_lshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((safe_div_func_int32_t_s_s((((void*)0 == (*g_721)) == ((l_1589 = (safe_sub_func_uint64_t_u_u((p_94 & (safe_rshift_func_uint16_t_u_s((g_765 &= (p_94 > 0xD4D3L)), g_1091.f3))), 0x72BD89DD662EF89CLL))) == 0xA2L)), (*l_1424))), l_1431)), 6)) & p_94), p_94)), 14))))) == p_94) < p_94)) == 0x1533E8E2CCED6FE7LL) && 0x53A3EE13BB7DA4BALL));
        }
        else
        {
            struct S3 l_1590 = {4294967295UL,{0x2219869C8FB11CB4LL},-18,3L};
            int64_t **l_1648[9][6] = {{&l_108,&g_423,&l_108,(void*)0,&g_423,&g_423},{(void*)0,&g_423,&g_423,(void*)0,&l_108,&g_423},{&l_108,(void*)0,&l_108,&g_423,&l_108,(void*)0},{&l_108,&l_108,&l_108,&l_108,&l_108,&g_423},{(void*)0,(void*)0,&l_108,(void*)0,&l_108,&l_108},{&l_108,&g_423,(void*)0,(void*)0,&g_423,&l_108},{(void*)0,&g_423,&l_108,&l_108,&l_108,&g_423},{&g_423,(void*)0,&l_108,&l_108,&l_108,(void*)0},{&g_423,&g_423,&l_108,&l_108,&l_108,&g_423}};
            int8_t l_1675 = 2L;
            int32_t l_1703 = 0x438435C4L;
            int32_t l_1704 = 0xA4DBAE04L;
            int32_t l_1706 = 5L;
            int32_t l_1707 = 0x6D6F6F7DL;
            int i, j;
lbl_1612:
            (*l_1510) = l_1590;
            if (((safe_mul_func_int16_t_s_s(0L, p_94)) ^ 4L))
            {
                uint32_t l_1611 = 0x39D92995L;
                int32_t l_1652 = (-8L);
                int32_t l_1676 = 0x09036596L;
                int32_t **l_1679 = &g_119;
                for (l_1401 = 0; (l_1401 <= 7); l_1401 += 1)
                {
                    int32_t l_1610 = 0x24EB2B5BL;
                    int16_t *l_1615 = &l_1461;
                    struct S0 **l_1624[7];
                    uint16_t *l_1631 = &l_1557[7];
                    int16_t *l_1632 = (void*)0;
                    int16_t *l_1633[3];
                    uint8_t l_1677 = 250UL;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1624[i] = (void*)0;
                    for (i = 0; i < 3; i++)
                        l_1633[i] = &g_224;
                    for (g_371.f0 = 0; (g_371.f0 <= 7); g_371.f0 += 1)
                    {
                        int32_t *l_1593 = &g_530;
                        int32_t *l_1594[6][10][4] = {{{(void*)0,&g_530,(void*)0,&l_1531},{(void*)0,&l_1531,&l_1531,(void*)0},{&g_118,&l_1531,&g_530,&l_1531},{&l_1531,&g_530,&g_530,&g_530},{&g_118,&g_118,&l_1531,&g_530},{(void*)0,&g_530,(void*)0,&l_1531},{(void*)0,&l_1531,&l_1531,(void*)0},{&g_118,&l_1531,&g_530,&l_1531},{&l_1531,&g_530,&g_530,&g_530},{&g_118,&g_118,&l_1531,&g_530}},{{(void*)0,&g_530,(void*)0,&l_1531},{(void*)0,&l_1531,&l_1531,(void*)0},{&g_118,&l_1531,&g_530,&l_1531},{&l_1531,&g_530,&g_530,&g_530},{&g_118,&g_118,&l_1531,&g_530},{(void*)0,&g_530,(void*)0,&l_1531},{(void*)0,&l_1531,&l_1531,(void*)0},{&g_118,&l_1531,&g_530,&l_1531},{&l_1531,&g_530,&g_530,&g_530},{&g_118,&g_118,&l_1531,&g_530}},{{(void*)0,&g_530,(void*)0,&l_1531},{(void*)0,&l_1531,&l_1531,(void*)0},{&g_118,&l_1531,&g_530,&l_1531},{&l_1531,&g_530,&g_530,&g_530},{&g_118,&g_118,&l_1531,&g_530},{(void*)0,&g_530,(void*)0,&l_1531},{(void*)0,&l_1531,&l_1531,(void*)0},{&g_118,&l_1531,&g_530,&l_1531},{&l_1531,&g_530,&g_530,&g_530},{&g_118,&g_118,&l_1531,&g_530}},{{(void*)0,&g_118,&g_530,(void*)0},{&g_530,(void*)0,(void*)0,&g_530},{&l_1531,(void*)0,&g_530,(void*)0},{(void*)0,&g_118,&g_530,&g_530},{&l_1531,&l_1531,(void*)0,&g_530},{&g_530,&g_118,&g_530,(void*)0},{&g_530,(void*)0,(void*)0,&g_530},{&l_1531,(void*)0,&g_530,(void*)0},{(void*)0,&g_118,&g_530,&g_530},{&l_1531,&l_1531,(void*)0,&g_530}},{{&g_530,&g_118,&g_530,(void*)0},{&g_530,(void*)0,(void*)0,&g_530},{&l_1531,(void*)0,&g_530,(void*)0},{(void*)0,&g_118,&g_530,&g_530},{&l_1531,&l_1531,(void*)0,&g_530},{&g_530,&g_118,&g_530,(void*)0},{&g_530,(void*)0,(void*)0,&g_530},{&l_1531,(void*)0,&g_530,(void*)0},{(void*)0,&g_118,&g_530,&g_530},{&l_1531,&l_1531,(void*)0,&g_530}},{{&g_530,&g_118,&g_530,(void*)0},{&g_530,(void*)0,(void*)0,&g_530},{&l_1531,(void*)0,&g_530,(void*)0},{(void*)0,&g_118,&g_530,&g_530},{&l_1531,&l_1531,(void*)0,&g_530},{&g_530,&g_118,&g_530,(void*)0},{&g_530,(void*)0,(void*)0,&g_530},{&l_1531,(void*)0,&g_530,(void*)0},{(void*)0,&g_118,&g_530,&g_530},{&l_1531,&l_1531,(void*)0,&g_530}}};
                        uint16_t *l_1600 = &l_1557[5];
                        uint16_t l_1606 = 0x82A0L;
                        int i, j, k;
                        --l_1595;
                        if (p_94)
                            break;
                        l_1611 ^= (safe_mul_func_uint16_t_u_u(((*l_1600)++), ((g_9 && ((+((*l_120) ^= l_1568[6])) || (safe_sub_func_uint64_t_u_u(((-3L) && p_94), (l_1606 > (*l_1593)))))) == (l_1610 = (((*l_99)--) > l_1609[2])))));
                        if (g_1132)
                            goto lbl_1612;
                    }
                    (*l_120) = ((safe_lshift_func_uint16_t_u_u(((l_1456 = 65535UL) & ((*l_1615) = p_94)), 6)) & (safe_mod_func_int64_t_s_s(((~(g_224 = ((!0xC5A0L) | ((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((((g_1625 = &l_1457) == (void*)0) , l_1611) <= (((*l_1631) &= (safe_mod_func_uint16_t_u_u((l_1628 != (safe_sub_func_uint16_t_u_u(p_94, l_1611))), l_1568[6]))) < p_94)), l_1554)), 4L)) && 0xD807906DE0772B85LL)))) == g_1634), p_94)));
                    for (g_905 = 0; (g_905 <= 7); g_905 += 1)
                    {
                        int64_t l_1639 = 9L;
                        int32_t l_1647 = 0xD4F880D1L;
                        int64_t **l_1649[3];
                        int32_t l_1650 = 0x5AD26BF9L;
                        uint64_t *l_1651 = &g_5.f0;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1649[i] = &g_423;
                        l_1652 = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((4L || (l_1639 = (&g_1195 != (g_1091 , (void*)0)))) | (safe_rshift_func_uint16_t_u_u(l_1642, ((((safe_div_func_uint8_t_u_u((*p_93), (((((*l_1651) = (((safe_mod_func_uint32_t_u_u((g_1065[6].f0 > ((((l_1647 = ((*l_99) = p_94)) , l_1648[7][5]) != l_1649[2]) <= l_1611)), l_1650)) <= l_1590.f0) , l_1611)) <= l_1610) , (*g_8)) , (*g_8)))) , p_94) <= p_94) >= l_1610)))), 0)), l_1611));
                        (*l_120) &= (safe_sub_func_uint16_t_u_u((l_1590.f3 , ((*l_1631) = (g_765 = p_94))), (l_1647 >= (safe_add_func_int64_t_s_s((((*g_930) , (((((safe_rshift_func_int16_t_s_u((((p_94 ^ ((**g_1195) , l_1554)) == p_94) <= p_94), 1)) , (void*)0) != &g_1195) , l_1610) >= p_94)) & l_1505.f1), (-5L))))));
                    }
                    l_1652 = l_1611;
                    for (g_1129 = 5; (g_1129 >= 0); g_1129 -= 1)
                    {
                        (*g_929) = &p_95;
                        l_1677 ^= (safe_add_func_int8_t_s_s((l_1652 & (safe_div_func_int64_t_s_s(l_1610, p_94))), (safe_sub_func_uint16_t_u_u(((*l_1631) ^= l_1665), (l_1590.f2 | (((*p_93) && (!(l_1676 = (safe_add_func_int64_t_s_s((0xC1AE992D6595A24FLL | (safe_rshift_func_int8_t_s_u(0xF5L, 2))), (safe_rshift_func_uint8_t_u_u((((void*)0 != &g_358[0]) || l_1675), 6))))))) <= 255UL))))));
                        if ((*l_120))
                            continue;
                    }
                }
                (*l_1679) = (((*g_1242) = (l_1590.f1.f0 != l_1678[1][0])) , &l_1431);
            }
            else
            {
                uint16_t l_1686 = 0xEDC0L;
                int32_t l_1702[10] = {0xC431DADFL,7L,0xC431DADFL,0xB5D3C60DL,0xB5D3C60DL,0xC431DADFL,7L,0xC431DADFL,0xB5D3C60DL,0xB5D3C60DL};
                struct S1 **l_1714 = (void*)0;
                int8_t *l_1726 = &g_1113[4];
                struct S3 *l_1727 = &g_325;
                struct S0 **l_1729 = &g_1625;
                struct S0 ***l_1728 = &l_1729;
                int32_t *l_1732 = (void*)0;
                int32_t *l_1733[7] = {&l_1707,&l_1707,&l_1707,&l_1707,&l_1707,&l_1707,&l_1707};
                int i;
                for (g_801 = 0; (g_801 > (-1)); g_801--)
                {
                    uint64_t ***l_1693 = (void*)0;
                    uint64_t ***l_1694 = (void*)0;
                    uint64_t ***l_1695 = &g_1062;
                    uint64_t **l_1697 = &l_99;
                    uint64_t ***l_1696[1][1];
                    int32_t l_1705 = (-6L);
                    int64_t l_1708 = 9L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1696[i][j] = &l_1697;
                    }
                    if ((((safe_add_func_uint16_t_u_u(p_94, (safe_rshift_func_uint16_t_u_u((((l_1686 && (((!(safe_sub_func_int32_t_s_s(p_94, ((safe_add_func_uint32_t_u_u(((*g_1242) = (((65535UL == (l_1692 != l_1692)) <= (((*l_1695) = &l_99) == (g_1698 = &g_53[4][0][2]))) ^ (g_905 = ((*g_1242) || p_94)))), g_371.f3)) != l_1699)))) <= 6UL) | p_94)) , p_94) || g_1113[6]), 7)))) || p_94) < l_1700[0][6][1]))
                    {
                        (*g_1024) = (**l_1420);
                    }
                    else
                    {
                        int32_t *l_1701[1];
                        uint16_t l_1709 = 0xB2FEL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1701[i] = &l_1431;
                        --l_1709;
                        (*l_120) ^= (safe_mul_func_uint8_t_u_u(((void*)0 == l_1714), l_1707));
                    }
                    for (g_1574 = 0; g_1574 < 8; g_1574 += 1)
                    {
                        struct S1 tmp = {0xE9C6848DL};
                        g_1065[g_1574] = tmp;
                    }
                }
                l_1734[2][4] = (g_325.f2 |= (safe_mul_func_uint16_t_u_u((g_905 || ((safe_lshift_func_int8_t_s_s(((*l_1726) = (safe_sub_func_uint8_t_u_u((*p_93), (safe_rshift_func_int16_t_s_u((p_94 ^ (+((*l_120) ^= p_94))), l_1665))))), 3)) | ((((l_1727 == l_1727) <= (((((***l_1420) = (*g_321)) , ((l_1456 = p_94) == l_1702[6])) , l_1728) == l_1730)) , p_94) >= 0xC634B9CD3CC24DFFLL))), (-6L))));
                (*l_120) = (safe_sub_func_uint32_t_u_u((((void*)0 == l_1737) || (safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(l_1505.f0, 3)), 5)), (!0x1998L)))), (((*l_1418) = (safe_add_func_uint64_t_u_u(l_1456, l_1678[1][0]))) > (*p_93))));
            }
        }
    }
    else
    {
        struct S1 l_1749 = {-8L};
        int64_t ** const *l_1765[3];
        int64_t ** const **l_1764 = &l_1765[0];
        int32_t l_1800 = 9L;
        int32_t l_1810[3][8][8] = {{{0x3400F35FL,0x3400F35FL,0x1F126680L,0x3400F35FL,0x3400F35FL,0x1F126680L,0x3400F35FL,0x3400F35FL},{8L,0x3400F35FL,8L,8L,0x3400F35FL,8L,8L,0x3400F35FL},{0x3400F35FL,8L,8L,0x3400F35FL,8L,8L,0x3400F35FL,8L},{0x3400F35FL,0x3400F35FL,0x1F126680L,0x3400F35FL,0x3400F35FL,0x1F126680L,0x3400F35FL,0x3400F35FL},{8L,0x3400F35FL,8L,8L,0x3400F35FL,8L,8L,0x3400F35FL},{0x3400F35FL,8L,8L,0x3400F35FL,8L,8L,0x3400F35FL,8L},{0x3400F35FL,0x3400F35FL,0x1F126680L,0x3400F35FL,0x3400F35FL,0x1F126680L,0x3400F35FL,8L},{0x1F126680L,8L,0x1F126680L,0x1F126680L,8L,0x1F126680L,0x1F126680L,8L}},{{8L,0x1F126680L,0x1F126680L,8L,0x1F126680L,0x1F126680L,8L,0x1F126680L},{8L,8L,0x3400F35FL,8L,8L,0x3400F35FL,8L,8L},{0x1F126680L,8L,0x1F126680L,0x1F126680L,8L,0x1F126680L,0x1F126680L,8L},{8L,0x1F126680L,0x1F126680L,8L,0x1F126680L,0x1F126680L,8L,0x1F126680L},{8L,8L,0x3400F35FL,8L,8L,0x3400F35FL,8L,8L},{0x1F126680L,8L,0x1F126680L,0x1F126680L,8L,0x1F126680L,0x1F126680L,8L},{8L,0x1F126680L,0x1F126680L,8L,0x1F126680L,0x1F126680L,8L,0x1F126680L},{8L,8L,0x3400F35FL,8L,8L,0x3400F35FL,8L,8L}},{{0x1F126680L,8L,0x1F126680L,0x1F126680L,8L,0x1F126680L,0x1F126680L,8L},{8L,0x1F126680L,0x1F126680L,8L,0x1F126680L,0x1F126680L,8L,0x1F126680L},{8L,8L,0x3400F35FL,8L,8L,0x3400F35FL,8L,8L},{0x1F126680L,8L,0x1F126680L,0x1F126680L,8L,0x1F126680L,0x1F126680L,8L},{8L,0x1F126680L,0x1F126680L,8L,0x1F126680L,0x1F126680L,8L,0x1F126680L},{8L,8L,0x3400F35FL,8L,8L,0x3400F35FL,8L,8L},{0x1F126680L,8L,0x1F126680L,0x1F126680L,8L,0x1F126680L,0x1F126680L,8L},{8L,0x1F126680L,0x1F126680L,8L,0x1F126680L,0x1F126680L,8L,0x1F126680L}}};
        int32_t l_1830 = 0x2A55D27FL;
        struct S3 *l_1870[3];
        union U5 l_1919 = {0};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1765[i] = &g_1408[2][0][6];
        for (i = 0; i < 3; i++)
            l_1870[i] = &g_33;
        for (g_125 = (-6); (g_125 > (-29)); g_125 = safe_sub_func_int32_t_s_s(g_125, 7))
        {
            int64_t **l_1760 = &g_423;
            int16_t *l_1761[7] = {&g_218,&g_218,&g_317,&g_218,&g_218,&g_317,&g_218};
            int32_t l_1762 = 0x578FF61AL;
            int32_t l_1763 = 0xF648A1CBL;
            int32_t l_1811 = 0xDB559409L;
            int i;
            (*g_321) = l_1749;
        }
        for (g_200 = 10; (g_200 <= (-23)); --g_200)
        {
            int8_t *l_1853 = &g_325.f3;
            int32_t *l_1855[2];
            int32_t **l_1920 = &l_1855[0];
            int32_t **l_1921 = &l_1873;
            int i;
            for (i = 0; i < 2; i++)
                l_1855[i] = &g_1507;
        }
    }
    --g_1925;
    ++l_1928;
    return p_94;
}







static union U4 func_100(struct S1 p_101, int64_t * p_102, int16_t p_103, uint64_t * p_104)
{
    union U4 **l_947 = &g_538;
    int32_t l_948 = (-1L);
    union U5 l_1008 = {0};
    uint16_t l_1022 = 65528UL;
    int8_t *l_1046 = &g_501;
    struct S2 *l_1090 = &g_1091;
    struct S3 l_1094 = {0x8455CD33L,{0x2075FC0854B53058LL},-2,0x9FL};
    struct S1 l_1153[3][10][1] = {{{{0x9F512D06L}},{{0x926B8185L}},{{0x9F512D06L}},{{0x926B8185L}},{{0x9F512D06L}},{{0x926B8185L}},{{0x9F512D06L}},{{0x926B8185L}},{{0x9F512D06L}},{{0x926B8185L}}},{{{0x9F512D06L}},{{0x926B8185L}},{{0x9F512D06L}},{{0x926B8185L}},{{0x9F512D06L}},{{0x926B8185L}},{{0x9F512D06L}},{{0x926B8185L}},{{0x9F512D06L}},{{0x926B8185L}}},{{{0x9F512D06L}},{{0x926B8185L}},{{0x9F512D06L}},{{0x926B8185L}},{{0x9F512D06L}},{{0x926B8185L}},{{0x9F512D06L}},{{0x926B8185L}},{{0x9F512D06L}},{{0x926B8185L}}}};
    struct S0 *l_1155 = (void*)0;
    struct S0 **l_1154 = &l_1155;
    union U5 *l_1170 = &l_1008;
    union U5 **l_1169 = &l_1170;
    int32_t l_1172 = 8L;
    uint16_t l_1216 = 8UL;
    uint32_t *l_1240[1][10][4] = {{{&g_472,&l_1094.f0,(void*)0,&g_472},{(void*)0,&g_472,(void*)0,(void*)0},{&g_325.f0,&g_325.f0,&g_540.f0,&g_371.f0},{&g_325.f0,&l_1094.f0,(void*)0,&g_325.f0},{(void*)0,&l_1094.f0,&g_325.f0,&l_1094.f0},{(void*)0,&l_1094.f0,&g_325.f0,(void*)0},{&l_1094.f0,&g_540.f0,&g_540.f0,&l_1094.f0},{&g_325.f0,(void*)0,&g_540.f0,&l_1094.f0},{&l_1094.f0,(void*)0,&g_325.f0,(void*)0},{(void*)0,&g_540.f0,&g_325.f0,(void*)0}}};
    int32_t *l_1276 = (void*)0;
    uint8_t *l_1301[5][9][3] = {{{(void*)0,(void*)0,&g_186[0][9][0]},{&g_494[3][2][0],(void*)0,&g_502},{(void*)0,&g_186[0][9][0],&g_494[4][5][0]},{&g_494[1][3][0],&g_494[3][5][0],(void*)0},{&g_494[4][5][0],(void*)0,&g_494[4][5][0]},{&g_502,&g_494[4][5][0],&g_502},{&g_502,&g_186[0][9][0],&g_186[0][9][0]},{&g_494[3][5][0],&g_494[3][2][0],&g_186[0][3][0]},{&g_494[4][5][0],&g_502,&g_502}},{{&g_494[3][5][0],&g_502,&g_494[1][3][0]},{&g_502,&g_494[4][5][0],(void*)0},{&g_502,&g_494[1][3][0],&g_494[3][5][0]},{&g_494[4][5][0],&g_186[0][9][0],&g_502},{&g_494[1][3][0],&g_494[1][3][0],&g_494[4][3][0]},{(void*)0,&g_494[4][5][0],(void*)0},{&g_494[3][2][0],&g_502,&g_494[4][5][0]},{(void*)0,&g_502,&g_494[4][5][0]},{&g_494[4][5][0],&g_494[3][2][0],&g_494[4][5][0]}},{{&g_502,&g_186[0][9][0],(void*)0},{&g_494[1][0][1],&g_494[4][5][0],&g_494[4][3][0]},{&g_502,(void*)0,&g_502},{&g_494[3][0][1],&g_494[3][5][0],&g_494[3][5][0]},{&g_502,&g_186[0][9][0],(void*)0},{&g_494[1][0][1],(void*)0,&g_494[1][3][0]},{&g_502,(void*)0,&g_502},{&g_494[4][5][0],&g_494[4][3][0],&g_186[0][3][0]},{(void*)0,(void*)0,&g_186[0][9][0]}},{{&g_494[3][2][0],(void*)0,&g_502},{(void*)0,&g_186[0][9][0],&g_494[4][5][0]},{&g_494[1][3][0],&g_494[3][5][0],(void*)0},{&g_494[4][5][0],(void*)0,&g_494[4][5][0]},{&g_502,&g_494[4][5][0],&g_502},{&g_502,&g_186[0][9][0],&g_186[0][9][0]},{&g_494[3][5][0],&g_494[3][2][0],&g_186[0][3][0]},{&g_494[4][5][0],&g_502,&g_502},{&g_494[3][5][0],&g_502,&g_494[1][3][0]}},{{&g_502,&g_494[4][5][0],(void*)0},{&g_502,&g_494[1][3][0],&g_494[3][5][0]},{&g_494[4][5][0],&g_186[0][9][0],&g_502},{&g_494[1][3][0],&g_494[1][3][0],&g_494[4][3][0]},{(void*)0,&g_494[4][5][0],(void*)0},{&g_494[3][2][0],&g_502,&g_494[4][5][0]},{(void*)0,&g_502,&g_494[4][5][0]},{&g_494[4][5][0],&g_494[3][2][0],&g_494[4][5][0]},{&g_502,&g_186[0][9][0],(void*)0}}};
    uint16_t l_1360[10][10][2] = {{{65535UL,0xCBCAL},{0UL,65532UL},{0x27E2L,0xEF74L},{65535UL,5UL},{0xFC5FL,0x7D26L},{0UL,0xEF74L},{1UL,65535UL},{0UL,65535UL},{0xFC5FL,0xCBCAL},{65535UL,65535UL}},{{0x27E2L,65533UL},{0UL,5UL},{65535UL,5UL},{0UL,65533UL},{0x27E2L,65535UL},{65535UL,0xCBCAL},{65535UL,0x93C1L},{65535UL,65532UL},{0xC461L,65533UL},{65535UL,0xD32CL}},{{65535UL,0x7D26L},{65532UL,65533UL},{1UL,0UL},{65535UL,65535UL},{65535UL,65535UL},{65535UL,0UL},{1UL,65533UL},{65532UL,0x7D26L},{65535UL,0xD32CL},{65535UL,65533UL}},{{0xC461L,65532UL},{65535UL,0x93C1L},{65535UL,65535UL},{65532UL,65532UL},{1UL,65532UL},{65535UL,0x7D26L},{65535UL,0x7D26L},{65535UL,65532UL},{1UL,65532UL},{65532UL,65535UL}},{{65535UL,0x93C1L},{65535UL,65532UL},{0xC461L,65533UL},{65535UL,0xD32CL},{65535UL,0x7D26L},{65532UL,65533UL},{1UL,0UL},{65535UL,65535UL},{65535UL,65535UL},{65535UL,0UL}},{{1UL,65533UL},{65532UL,0x7D26L},{65535UL,0xD32CL},{65535UL,65533UL},{0xC461L,65532UL},{65535UL,0x93C1L},{65535UL,65535UL},{65532UL,65532UL},{1UL,65532UL},{65535UL,0x7D26L}},{{65535UL,0x7D26L},{65535UL,65532UL},{1UL,65532UL},{65532UL,65535UL},{65535UL,0x93C1L},{65535UL,65532UL},{0xC461L,65533UL},{65535UL,0xD32CL},{65535UL,0x7D26L},{65532UL,65533UL}},{{1UL,0UL},{65535UL,65535UL},{65535UL,65535UL},{65535UL,0UL},{1UL,65533UL},{65532UL,0x7D26L},{65535UL,0xD32CL},{65535UL,65533UL},{0xC461L,65532UL},{65535UL,0x93C1L}},{{65535UL,65535UL},{65532UL,65532UL},{1UL,65532UL},{65535UL,0x7D26L},{65535UL,0x7D26L},{65535UL,65532UL},{1UL,65532UL},{65532UL,65535UL},{65535UL,0x93C1L},{65535UL,65532UL}},{{0xC461L,65533UL},{65535UL,0xD32CL},{65535UL,0x7D26L},{65532UL,65533UL},{1UL,0UL},{65535UL,65535UL},{65535UL,65535UL},{65535UL,0UL},{1UL,65533UL},{65532UL,0x7D26L}}};
    int i, j, k;
    for (g_150 = 0; (g_150 >= 0); g_150 -= 1)
    {
        struct S2 l_944 = {-15310,-0,-30,0,-10107};
        union U4 l_975 = {0xEC10AC5FL};
        uint8_t *l_1010 = &g_186[0][9][0];
        uint8_t **l_1009[4][1] = {{&l_1010},{&l_1010},{&l_1010},{&l_1010}};
        struct S1 *l_1017 = &g_230;
        uint64_t **l_1064 = &g_1063;
        struct S3 l_1092 = {1UL,{18446744073709551609UL},44,0x62L};
        int32_t **l_1106[5][1][1] = {{{&g_119}},{{&g_119}},{{&g_119}},{{&g_119}},{{&g_119}}};
        uint32_t *l_1144 = (void*)0;
        struct S1 ****l_1209 = &g_1023[1][1][1];
        struct S3 *l_1211 = &l_1094;
        struct S0 *l_1222 = &g_325.f1;
        uint32_t *l_1223 = &l_1092.f0;
        int16_t *l_1229[7][8][1] = {{{&g_218},{(void*)0},{&g_218},{&g_500},{&g_224},{&g_500},{&g_218},{(void*)0}},{{&g_218},{&g_500},{&g_224},{&g_218},{&g_317},{(void*)0},{&g_317},{(void*)0}},{{&g_500},{&g_317},{&g_218},{&g_218},{&g_224},{&g_224},{&g_500},{&g_224}},{{&g_224},{&g_218},{&g_218},{&g_317},{&g_500},{(void*)0},{&g_317},{&g_218}},{{&g_317},{(void*)0},{&g_500},{&g_317},{&g_218},{&g_218},{&g_224},{&g_224}},{{&g_500},{&g_224},{&g_224},{&g_218},{&g_218},{&g_317},{&g_500},{(void*)0}},{{&g_317},{&g_218},{&g_317},{(void*)0},{&g_500},{&g_317},{&g_218},{&g_218}}};
        uint16_t *l_1230 = &g_905;
        int16_t l_1253 = (-1L);
        uint8_t l_1269 = 0xB3L;
        uint64_t l_1298 = 0xA85A818C9D563DFDLL;
        int8_t ** const *l_1348 = &g_647;
        int i, j, k;
        if ((safe_mul_func_int16_t_s_s(0x40C9L, p_101.f0)))
        {
            uint16_t l_941 = 0x2549L;
            union U4 * const *l_946 = (void*)0;
            union U4 * const **l_945 = &l_946;
            int32_t l_964 = 3L;
            if ((g_229 ^ (safe_rshift_func_uint16_t_u_u((3L | (((p_103 | (l_941 & (0x502038B05227690CLL == (*p_102)))) | (((safe_mul_func_uint8_t_u_u((((((l_941 , l_944) , ((*l_945) = &g_538)) != l_947) >= (-7L)) , l_941), l_948)) != p_103) || p_101.f0)) != 0xB01EA4A74803C1B7LL)), g_186[0][9][0]))))
            {
                uint32_t l_949[5][10][4] = {{{4UL,4UL,0UL,4UL},{0x8E9C3088L,0UL,0x2283A80FL,0x24E157E1L},{0xF4BFFEFDL,4UL,4UL,0x2283A80FL},{9UL,4UL,0xDFB85BADL,0x24E157E1L},{4UL,0UL,0x2579E515L,4UL},{4294967287UL,4UL,0UL,0UL},{4294967295UL,9UL,0xDFB85BADL,9UL},{2UL,0UL,4294967287UL,4294967295UL},{0xF4BFFEFDL,2UL,0UL,0UL},{0x24E157E1L,0x8E9C3088L,0UL,0x066EFC4FL}},{{0x24E157E1L,0UL,0UL,4UL},{0xF4BFFEFDL,0x066EFC4FL,4294967287UL,0x2283A80FL},{2UL,4294967295UL,0xDFB85BADL,0x8E9C3088L},{4294967295UL,0UL,0UL,4294967295UL},{4294967287UL,0x24E157E1L,0x2579E515L,0UL},{4UL,4294967295UL,0xDFB85BADL,2UL},{9UL,0UL,4UL,2UL},{0xF4BFFEFDL,4294967295UL,0x2283A80FL,0UL},{0x8E9C3088L,0x24E157E1L,0UL,4294967295UL},{4UL,0UL,0UL,0x8E9C3088L}},{{0xF4BFFEFDL,4294967295UL,0xF4BFFEFDL,0x2283A80FL},{4294967295UL,0x066EFC4FL,0xDFB85BADL,4UL},{0x066EFC4FL,0UL,0UL,0x066EFC4FL},{4294967287UL,0x8E9C3088L,0UL,0UL},{0x066EFC4FL,2UL,0xDFB85BADL,4294967295UL},{4294967295UL,0UL,0xF4BFFEFDL,9UL},{0xF4BFFEFDL,9UL,0UL,0UL},{4UL,4UL,0UL,4UL},{0x8E9C3088L,0UL,0x2283A80FL,0x24E157E1L},{0xF4BFFEFDL,4UL,4UL,0x2283A80FL}},{{9UL,4UL,0xDFB85BADL,0x24E157E1L},{4UL,0UL,0x2579E515L,4UL},{4294967287UL,4UL,0UL,0UL},{4294967295UL,9UL,0xDFB85BADL,9UL},{2UL,0UL,4294967287UL,4294967295UL},{0xF4BFFEFDL,2UL,0UL,0UL},{0x24E157E1L,0x8E9C3088L,0UL,0x066EFC4FL},{0x24E157E1L,4294967295UL,4294967286UL,4UL},{4UL,0UL,0x1B072EF3L,4294967287UL},{0UL,0x2579E515L,0x24E157E1L,4294967287UL}},{{0x2579E515L,4294967295UL,4294967295UL,0x2579E515L},{0x1B072EF3L,0xF4BFFEFDL,0UL,0UL},{0UL,0x2283A80FL,0x24E157E1L,0UL},{0UL,0xDFB85BADL,0xBD636CA2L,0UL},{4UL,0x2283A80FL,4294967287UL,0UL},{4294967287UL,0xF4BFFEFDL,0x8E9C3088L,0x2579E515L},{4UL,4294967295UL,0UL,4294967287UL},{4UL,0x2579E515L,4UL,4294967287UL},{0x2283A80FL,0UL,0x24E157E1L,4UL},{0UL,4294967295UL,0xDFB85BADL,0UL}}};
                uint8_t *l_960 = (void*)0;
                uint8_t *l_961 = &g_186[0][7][0];
                union U4 l_967[9][6][4] = {{{{0xCCADF671L},{4294967294UL},{0xF0598F54L},{4UL}},{{0UL},{0x7ABB0528L},{0xA91CA569L},{0UL}},{{4294967289UL},{0xF0598F54L},{0xCE8B134AL},{0x7F399F7BL}},{{0xBE57448AL},{0xF310CD23L},{0x9C075511L},{0UL}},{{4294967294UL},{0xFBCEFBC1L},{0x8ACD10FCL},{0x7ABB0528L}},{{2UL},{0UL},{1UL},{0x7F399F7BL}}},{{{0x90FBF6E5L},{1UL},{1UL},{6UL}},{{0x828B0302L},{0x7ABB0528L},{0x2D66F231L},{4294967289UL}},{{4294967295UL},{0xCE8B134AL},{0xE04D5FACL},{0x9DF61C12L}},{{0xF0598F54L},{1UL},{0xBE57448AL},{0xCE8B134AL}},{{0x8EF6C42CL},{0UL},{0x5235C9B2L},{2UL}},{{1UL},{1UL},{0xE04D5FACL},{0x4F2AB7EFL}}},{{{0x3C1A91F7L},{0x278B8A3FL},{0xBFD5E07FL},{0xBFD5E07FL}},{{0x828B0302L},{0x828B0302L},{0xA97BB097L},{4294967295UL}},{{0x4F2AB7EFL},{0xE04D5FACL},{1UL},{1UL}},{{0xEF154F91L},{0x9DF61C12L},{0xD0672363L},{1UL}},{{4294967294UL},{0x9DF61C12L},{1UL},{1UL}},{{0x9DF61C12L},{0xE04D5FACL},{0xCE8B134AL},{4294967295UL}}},{{{4UL},{0x828B0302L},{0UL},{0xBFD5E07FL}},{{0UL},{0x278B8A3FL},{4294967295UL},{0x4F2AB7EFL}},{{0x7F399F7BL},{1UL},{0UL},{2UL}},{{0UL},{0UL},{0x43EDB568L},{0xCE8B134AL}},{{0x7ABB0528L},{1UL},{0x5DBE835CL},{0x9DF61C12L}},{{0x7F399F7BL},{0xCE8B134AL},{0xF0598F54L},{4294967289UL}}},{{{6UL},{0x7ABB0528L},{0UL},{6UL}},{{4294967289UL},{1UL},{0xAC821C4AL},{0x7F399F7BL}},{{0x9DF61C12L},{0UL},{0x9C075511L},{0x7ABB0528L}},{{0xCE8B134AL},{0xFBCEFBC1L},{0xD0672363L},{0UL}},{{2UL},{0xF310CD23L},{4294967291UL},{0x7F399F7BL}},{{0x4F2AB7EFL},{0xF0598F54L},{1UL},{0UL}}},{{{0xBFD5E07FL},{0x7ABB0528L},{0xBFD5E07FL},{4UL}},{{4294967295UL},{4294967294UL},{4294967286UL},{0x9DF61C12L}},{{1UL},{0x9C075511L},{0xBE57448AL},{4294967294UL}},{{1UL},{0UL},{0xBE57448AL},{0xEF154F91L}},{{1UL},{0x8EF6C42CL},{4294967286UL},{0UL}},{{0xBFD5E07FL},{1UL},{1UL},{0x08EBED70L}}},{{{1UL},{0x08EBED70L},{1UL},{0x2D66F231L}},{{0UL},{0xD0672363L},{0x83ACE001L},{0UL}},{{0x553178A9L},{6UL},{0xA97BB097L},{0xE04D5FACL}},{{4294967288UL},{0xCCADF671L},{4294967295UL},{0xA91CA569L}},{{0xCCADF671L},{0xD0672363L},{4294967289UL},{0xBFD5E07FL}},{{1UL},{1UL},{4294967295UL},{0x08EBED70L}}},{{{4294967295UL},{0x43EDB568L},{0xA91CA569L},{0x5DBE835CL}},{{0xCE8B134AL},{0xE04D5FACL},{0x9DF61C12L},{0x553178A9L}},{{4294967295UL},{0xA97BB097L},{0xE7CF3EE9L},{4UL}},{{4294967295UL},{0x3C1A91F7L},{0x5235C9B2L},{6UL}},{{0xCE8B134AL},{4UL},{0x7ABB0528L},{1UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}}},{{{4294967291UL},{0UL},{4294967288UL},{0xAC821C4AL}},{{0xCCADF671L},{0xBE57448AL},{4294967295UL},{4294967295UL}},{{4UL},{0xE7CF3EE9L},{0xA97BB097L},{4294967295UL}},{{0x74414D05L},{0xBE57448AL},{4294967286UL},{0xAC821C4AL}},{{0UL},{0UL},{0xFBCEFBC1L},{4294967295UL}},{{0x08EBED70L},{4294967295UL},{1UL},{1UL}}}};
                int i, j, k;
                if (l_949[3][8][2])
                    break;
                if ((safe_add_func_uint64_t_u_u(0x4D0472817B4FB976LL, (((safe_div_func_uint16_t_u_u((((((0x41558CFC5E6A47CELL && (l_964 = (((safe_sub_func_int8_t_s_s(0x85L, ((*l_961) = (safe_mul_func_int8_t_s_s((*g_8), (0xEAD6L & (safe_mul_func_int8_t_s_s(p_103, l_949[3][8][2])))))))) < (safe_lshift_func_uint16_t_u_s(1UL, (g_358[1] < g_33.f0)))) || 8L))) ^ l_944.f0) && l_944.f1) , (*p_102)) != l_941), l_941)) && g_856.f1) | 0x01BC6F12L))))
                {
                    if (l_944.f4)
                        break;
                    if (p_103)
                        break;
                }
                else
                {
                    for (g_371.f0 = 0; (g_371.f0 <= 0); g_371.f0 += 1)
                    {
                        return (***l_945);
                    }
                }
                g_200 &= ((safe_lshift_func_int8_t_s_s(0x83L, p_103)) , l_964);
                for (g_262 = 0; (g_262 <= 0); g_262 += 1)
                {
                    return l_967[3][2][2];
                }
            }
            else
            {
                int16_t *l_982 = &g_317;
                union U4 **l_983 = &g_538;
                int32_t l_996 = (-10L);
                for (p_103 = 0; (p_103 <= 0); p_103 += 1)
                {
                    union U4 l_969 = {0x62B6C6FAL};
                    int64_t * const *l_972 = (void*)0;
                    int32_t l_974 = 0x2EF1A60BL;
                    for (g_502 = 0; (g_502 <= 0); g_502 += 1)
                    {
                        int32_t **l_968 = &g_119;
                        (*l_968) = (void*)0;
                        return l_969;
                    }
                    for (g_325.f0 = 0; (g_325.f0 <= 0); g_325.f0 += 1)
                    {
                        int32_t *l_973[9];
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_973[i] = &g_118;
                        l_974 |= (l_948 = (safe_mul_func_uint16_t_u_u(((void*)0 == l_972), g_186[p_103][(g_325.f0 + 4)][g_325.f0])));
                        return l_975;
                    }
                }
                if ((l_944.f2 ^= (((*p_102) &= ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((*l_982) = l_948), 11)), 4)) ^ ((void*)0 != l_983))) && (++(*p_104)))))
                {
                    int8_t *l_1001[2][4] = {{&g_39,&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39,&g_39}};
                    int32_t *l_1002 = &l_948;
                    union U4 l_1003 = {0x35134635L};
                    int i, j;
                    (*l_1002) = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(((p_101.f0 <= (safe_lshift_func_int16_t_s_u(((g_38.f2 = (g_325.f3 = (safe_div_func_int8_t_s_s((1UL && ((*p_102) = l_964)), (safe_mod_func_uint8_t_u_u((l_996 != (0x9CL | (g_33.f3 ^ (safe_mul_func_uint16_t_u_u(g_224, 65530UL))))), (safe_div_func_uint64_t_u_u((*p_104), 5UL)))))))) > g_230.f0), 6))) && l_941), 6)), 7));
                    for (g_905 = 0; (g_905 <= 1); g_905 += 1)
                    {
                        return (**l_947);
                    }
                    return l_1003;
                }
                else
                {
                    return (*g_538);
                }
            }
        }
        else
        {
            const uint64_t *l_1007 = (void*)0;
            const uint64_t **l_1006 = &l_1007;
            int32_t l_1011 = (-1L);
            uint32_t *l_1012 = &g_805;
            uint64_t l_1015 = 0UL;
            int16_t *l_1016 = &g_317;
            uint16_t l_1052 = 0x66E1L;
            int32_t **l_1107 = (void*)0;
            int32_t *l_1123 = &g_530;
            int32_t l_1126 = 0x72B93E52L;
            int32_t l_1127 = 1L;
            int32_t l_1128[7][7] = {{0x7DA896F6L,0xE427DE95L,0x7DA896F6L,0xD118E346L,0xD118E346L,0x7DA896F6L,0xE427DE95L},{(-1L),0x4C8FDB9EL,0xC19ED2C8L,5L,0xCF782D30L,0x16FD5FB5L,0xCF782D30L},{0x7DA896F6L,0xD118E346L,0xD118E346L,0x7DA896F6L,0xE427DE95L,0x7DA896F6L,0xD118E346L},{0x7DE336D0L,1L,(-1L),5L,(-1L),1L,0x7DE336D0L},{0x4B5D476EL,0xD118E346L,1L,0xD118E346L,0x4B5D476EL,0x4B5D476EL,0xD118E346L},{0xBB571E9FL,0x4C8FDB9EL,0xBB571E9FL,0x16FD5FB5L,(-1L),0x56367C90L,0xCF782D30L},{0xD118E346L,0xE427DE95L,1L,1L,0xE427DE95L,0xD118E346L,0xE427DE95L}};
            uint64_t l_1137 = 1UL;
            union U5 *l_1168 = &g_96;
            union U5 **l_1167[5];
            int16_t l_1192 = 0xE33EL;
            int8_t **l_1203 = &l_1046;
            int i, j;
            for (i = 0; i < 5; i++)
                l_1167[i] = &l_1168;
            if ((((safe_mod_func_uint16_t_u_u((((*p_104) &= ((((*l_1006) = (void*)0) == &g_233) & ((l_1008 , l_1009[0][0]) != (((*l_1012)++) , (void*)0)))) | p_103), ((*l_1016) = l_1015))) , &p_101) != l_1017))
            {
                struct S1 ***l_1026[8][9] = {{&g_1024,(void*)0,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024},{&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,(void*)0,&g_1024,&g_1024,&g_1024},{&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024},{&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024},{&g_1024,&g_1024,&g_1024,(void*)0,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024},{&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024},{&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024},{&g_1024,&g_1024,&g_1024,(void*)0,&g_1024,&g_1024,&g_1024,&g_1024,&g_1024}};
                struct S1 ****l_1025 = &l_1026[7][7];
                int32_t l_1033 = 0x6F89C967L;
                struct S2 *l_1089 = (void*)0;
                int32_t l_1110 = 0x3E9E51BDL;
                int32_t l_1111 = 0x95FB4521L;
                union U5 ***l_1122 = (void*)0;
                int i, j;
                if ((+((*p_102) |= ((g_230.f0 == ((safe_sub_func_int32_t_s_s((g_39 , ((((!p_103) || (1L > (l_1022 > g_125))) , g_1023[1][1][0]) == ((*l_1025) = &g_1024))), (safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((((((safe_rshift_func_int16_t_s_u(1L, g_325.f3)) ^ 0x45L) , l_944.f1) & p_103) | (-9L)), 4)), l_1033)))) == l_948)) || g_856.f4))))
                {
                    struct S0 *l_1034 = &g_33.f1;
                    struct S0 **l_1035 = &l_1034;
                    int32_t l_1036 = 0x1C03533FL;
                    int32_t *l_1037[2];
                    uint16_t *l_1051 = &g_905;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1037[i] = &g_200;
                    (*l_1035) = l_1034;
                    if ((l_1011 = l_1036))
                    {
                        return (**l_947);
                    }
                    else
                    {
                        if (l_1022)
                            break;
                        (*l_947) = &g_38;
                    }
                    g_125 ^= 1L;
                    g_856.f4 |= (safe_sub_func_uint32_t_u_u(l_1011, (((((*l_1051) = ((**l_1035) , ((safe_add_func_int8_t_s_s((((((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((void*)0 == l_1046) > (1UL || (safe_mod_func_uint16_t_u_u((p_103 & 0xB9L), (safe_div_func_int32_t_s_s((((p_103 , (*p_104)) , (*p_102)) || (*p_102)), g_325.f0)))))), p_103)), 0xAD774CA1L)) && g_358[0]) || p_103) & l_1022) < 0x39L), p_103)) <= 0xC2543BB88511C32FLL))) && l_1052) == 0xDA6C8A2ED0F5CF4ALL) <= p_101.f0)));
                }
                else
                {
                    int16_t *l_1082 = &g_224;
                    int32_t l_1087[1][8][6] = {{{0x672319BCL,0x672319BCL,0L,7L,0L,0x672319BCL},{0L,0x371FD159L,7L,7L,0x371FD159L,0L},{0x672319BCL,0L,7L,0L,0x672319BCL,0x672319BCL},{0L,0L,0L,0L,0x371FD159L,0L},{0L,0x371FD159L,0L,0L,0L,0L},{0x672319BCL,0x672319BCL,0L,7L,0L,0x672319BCL},{0L,0x371FD159L,7L,7L,0x371FD159L,0L},{0x672319BCL,0L,7L,0L,0x672319BCL,0x672319BCL}}};
                    int32_t *l_1088 = &g_125;
                    int32_t l_1112[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1112[i] = 0xC6BD3DDFL;
                    (*l_1088) = (safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((p_103 & ((((safe_unary_minus_func_int16_t_s((((l_1064 = (g_1062 = &g_53[4][0][2])) == (g_1065[6] , &g_53[4][0][2])) || 4294967289UL))) , ((*l_1046) = ((safe_div_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((*p_104), (safe_sub_func_uint32_t_u_u((0x4FL ^ (((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((--(*l_1010)), (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((*l_1082) = ((*l_1016) = g_371.f3)), 13)), (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((0x0AL && 0x69L), g_371.f1.f0)), g_33.f0)))))), g_856.f1)) != g_560) < (-1L))), p_103)))), 0x243F465DCE293CCBLL)) , l_1052))) && p_103) ^ l_948)), 1)), g_856.f2)), 5UL)), l_1087[0][3][0]));
                    l_1090 = l_1089;
                    for (g_230.f0 = 0; (g_230.f0 >= 0); g_230.f0 -= 1)
                    {
                        int64_t **l_1093 = &g_423;
                        uint16_t *l_1108 = &l_1022;
                        int32_t l_1109[3];
                        union U5 *l_1121 = &g_612;
                        union U5 **l_1120 = &l_1121;
                        union U5 ***l_1119 = &l_1120;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1109[i] = 0x276D5F88L;
                        (*l_1088) = (p_101.f0 , ((((((*l_1046) |= (&g_423 == (l_1092 , l_1093))) , 0x296CFD68L) < (l_1094 , (safe_add_func_int64_t_s_s(l_1092.f1.f0, (!(p_101.f0 != (safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((*l_1108) ^= (safe_mul_func_uint8_t_u_u(((l_1107 = l_1106[1][0][0]) == &g_119), 1L))), p_101.f0)) && p_101.f0), p_103)), 0x6FL)))))))) == 0x5448L) <= (*p_102)));
                        ++g_1114[2];
                        l_1110 |= (((p_103 == ((*l_1108) = (safe_add_func_uint64_t_u_u(5UL, (((-4L) >= g_1091.f4) <= (l_1119 != l_1122)))))) == g_1091.f2) || p_103);
                    }
                    for (l_1094.f0 = 0; (l_1094.f0 <= 0); l_1094.f0 += 1)
                    {
                        int8_t l_1124[5][10][5] = {{{(-7L),5L,4L,5L,(-7L)},{0x88L,0L,0xCEL,0x39L,1L},{0x76L,0x79L,0xBAL,0x80L,0xB1L},{(-4L),0x88L,0xEFL,0L,1L},{0L,0x80L,0x64L,0xD1L,(-7L)},{1L,0xEFL,0xECL,(-3L),(-3L)},{0x5EL,0x79L,0x5EL,0xD1L,0xBAL},{0x39L,(-4L),(-1L),0L,0x39L},{0xE8L,5L,0x97L,0x80L,0x97L},{1L,0xCEL,(-1L),0x39L,(-1L)}},{{0xF8L,0xE8L,0x5EL,5L,0x76L},{(-4L),0x39L,0xECL,0xECL,0x39L},{0x97L,0xE8L,0x64L,0L,4L},{0x88L,0xCEL,0xEFL,0x10L,(-3L)},{0x94L,5L,0xBAL,5L,0x94L},{0x88L,(-4L),0xCEL,(-4L),1L},{0x97L,0x79L,4L,0x80L,1L},{(-4L),0xEFL,0xEFL,(-4L),1L},{0xF8L,0x80L,(-6L),0xD1L,0x94L},{1L,0x88L,0xECL,(-1L),(-3L)}},{{0xE8L,0x79L,0xE8L,0xD1L,4L},{0x39L,0L,(-1L),(-4L),0x39L},{0x5EL,5L,0x76L,0x80L,0x76L},{1L,1L,(-1L),(-4L),(-1L)},{0L,0xE8L,0xE8L,5L,0x97L},{(-4L),(-4L),(-1L),(-3L),0x10L},{0xB1L,0x80L,0xBAL,0x79L,0x76L},{0x39L,(-1L),(-4L),(-1L),1L},{0x64L,0xE8L,0x97L,0xE8L,0x64L},{0x39L,0xEFL,1L,0x10L,(-1L)}},{{0xB1L,0xDCL,0x76L,0xD1L,0xF8L},{0x88L,0x39L,(-4L),0xEFL,(-1L)},{0xE8L,0xD1L,4L,0L,0x64L},{(-1L),(-4L),(-1L),1L,1L},{0x94L,0xDCL,0x94L,0L,0x76L},{0x10L,0x88L,0xCEL,0xEFL,0x10L},{(-7L),0xE8L,1L,0xD1L,1L},{(-1L),1L,0xCEL,0x10L,(-4L)},{0x5EL,0x80L,0x94L,0xE8L,0xB1L},{0x88L,0x10L,(-1L),(-1L),0x10L}},{{1L,0x80L,4L,0x79L,0x97L},{0x39L,1L,(-4L),(-3L),1L},{(-6L),0xE8L,0x76L,0xE8L,(-6L)},{0x39L,0x88L,1L,0xECL,(-1L)},{1L,0xDCL,0x97L,0xD1L,0L},{0x88L,(-4L),(-4L),0x88L,(-1L)},{0x5EL,0xD1L,0xBAL,0L,(-6L)},{(-1L),0x39L,(-1L),0xCEL,1L},{(-7L),0xDCL,(-7L),0L,0x97L},{0x10L,0xEFL,0xCEL,0x88L,0x10L}}};
                        int32_t l_1125 = 0x91C522CAL;
                        int32_t l_1131 = 0L;
                        int i, j, k;
                        l_1123 = &l_948;
                        g_1132++;
                        (*l_1088) = (p_101.f0 >= (((safe_rshift_func_int16_t_s_u((2L < ((p_103 || (((*p_102) = l_1137) <= l_1125)) != p_101.f0)), (~(~((l_1094.f1 , (!(safe_unary_minus_func_int16_t_s((((*l_1088) >= (((((*l_1123) = (safe_rshift_func_int16_t_s_s((((p_101.f0 , p_101.f0) | l_1124[0][0][2]) && (*l_1123)), 9))) >= p_103) || g_262) , 0xE2505C3F9D8FD563LL)) , g_200))))) , (*l_1088)))))) , l_1144) != (void*)0));
                    }
                }
            }
            else
            {
                return (*g_538);
            }
            (*l_1123) ^= g_805;
            if ((safe_add_func_int8_t_s_s(p_101.f0, ((safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(p_101.f0, (safe_add_func_uint16_t_u_u(g_118, (g_371.f3 < (l_1094.f3 , (l_1153[2][9][0] , ((((*p_102) > 3L) >= (((void*)0 != l_1154) <= p_103)) >= 0x9DD4B1924E7707AELL)))))))), (*p_104))) > 0x308BL))))
            {
                uint8_t l_1174 = 0x74L;
                int16_t l_1183 = 0x1E29L;
                int32_t l_1193[4][8][8] = {{{0x44C53719L,0xB96CAA36L,0x1D7265E8L,(-1L),0xF0DE32D3L,0xF82D0B7AL,6L,6L},{1L,0x5E2A232BL,0xF0DE32D3L,0L,0xE8659019L,0xF82D0B7AL,0xE8659019L,0L},{5L,0xB96CAA36L,5L,1L,(-1L),6L,(-8L),0xA5914B3DL},{0x93A9E6FCL,(-1L),0xE8659019L,(-2L),1L,(-2L),(-1L),0xF82D0B7AL},{0x93A9E6FCL,0xF82D0B7AL,1L,0x70C8A473L,(-1L),0L,0x60AA4A9AL,1L},{5L,0x4B06E5D6L,0x8C00CF20L,0xB96CAA36L,0xE8659019L,0x4D99D726L,0x44C53719L,0xE7D9B6A3L},{1L,1L,(-10L),0xB96CAA36L,0xF0DE32D3L,0xB96CAA36L,(-10L),1L},{0x44C53719L,1L,6L,0x70C8A473L,(-7L),1L,1L,0xF82D0B7AL}},{{1L,6L,(-2L),(-2L),(-7L),0xC73BAD78L,0xAA5C75AFL,0xE7D9B6A3L},{5L,1L,0xF0DE32D3L,(-1L),0x7CF9F497L,(-2L),0x60AA4A9AL,(-1L)},{0x7CF9F497L,(-2L),0x60AA4A9AL,(-1L),(-10L),0xA5914B3DL,(-7L),0L},{(-6L),(-2L),(-2L),0x70C8A473L,(-2L),(-2L),(-6L),1L},{1L,1L,0x1D7265E8L,(-2L),5L,0xC73BAD78L,(-8L),(-2L)},{6L,0L,1L,0x4D99D726L,5L,(-1L),(-10L),0x70C8A473L},{1L,0xED4A3A22L,0x44C53719L,(-2L),(-2L),6L,1L,0xB96CAA36L},{(-6L),0x4B06E5D6L,1L,1L,(-10L),0xB96CAA36L,0xF0DE32D3L,0xB96CAA36L}},{{0x7CF9F497L,(-2L),5L,(-2L),0x7CF9F497L,(-1L),0x44C53719L,0x70C8A473L},{5L,0x5E2A232BL,0x93A9E6FCL,0x4D99D726L,(-7L),1L,0x1D7265E8L,(-2L)},{0x1D7265E8L,0xA5914B3DL,0x93A9E6FCL,(-2L),0x8C00CF20L,0L,0x44C53719L,1L},{(-7L),6L,5L,0x70C8A473L,1L,0x5E2A232BL,0xF0DE32D3L,0L},{0xAA5C75AFL,0x4D99D726L,1L,(-1L),1L,0x5E2A232BL,1L,(-1L)},{0x44C53719L,6L,0x44C53719L,(-1L),(-8L),0L,(-10L),0xE7D9B6A3L},{0xE8659019L,0xA5914B3DL,1L,1L,0xAA5C75AFL,1L,(-8L),0x5E2A232BL},{0xE8659019L,0x5E2A232BL,0x1D7265E8L,1L,(-8L),(-1L),(-6L),0x4B06E5D6L}},{{0x44C53719L,(-2L),(-2L),6L,1L,0xB96CAA36L,(-7L),(-2L)},{0xAA5C75AFL,0x4B06E5D6L,0x60AA4A9AL,6L,1L,6L,0x60AA4A9AL,0x4B06E5D6L},{(-7L),0xED4A3A22L,0xF0DE32D3L,1L,0x8C00CF20L,(-1L),0xAA5C75AFL,0x5E2A232BL},{0x1D7265E8L,0L,0x7CF9F497L,1L,(-7L),0xC73BAD78L,0xAA5C75AFL,0xE7D9B6A3L},{5L,1L,0xF0DE32D3L,(-1L),0x7CF9F497L,(-2L),0x60AA4A9AL,(-1L)},{0x7CF9F497L,(-2L),0x60AA4A9AL,(-1L),(-10L),0xA5914B3DL,(-7L),0L},{(-6L),(-2L),(-2L),0x70C8A473L,(-2L),(-2L),(-6L),1L},{1L,1L,0x1D7265E8L,(-2L),5L,0xC73BAD78L,(-8L),(-2L)}}};
                int i, j, k;
                for (l_1094.f0 = 0; (l_1094.f0 <= 0); l_1094.f0 += 1)
                {
                    uint64_t l_1171[10][7] = {{0x80215B70D6D8C49ELL,0x24BB857B32019DFDLL,0x80215B70D6D8C49ELL,0x8EC327E2640804FBLL,1UL,0x24BB857B32019DFDLL,1UL},{18446744073709551609UL,0UL,4UL,0xCC79E230C8FB0327LL,0xC0FBC08ADB001C2BLL,0xAB371FFBBC1C1601LL,0xAB371FFBBC1C1601LL},{0x54C786C28C7B4499LL,18446744073709551615UL,0xA9CF6ECA5C9BC9B5LL,18446744073709551615UL,0x54C786C28C7B4499LL,0x24BB857B32019DFDLL,0xA9CF6ECA5C9BC9B5LL},{18446744073709551615UL,18446744073709551609UL,0UL,4UL,0xCC79E230C8FB0327LL,0xC0FBC08ADB001C2BLL,0xAB371FFBBC1C1601LL},{1UL,0x8EC327E2640804FBLL,0x80215B70D6D8C49ELL,0x24BB857B32019DFDLL,0x80215B70D6D8C49ELL,0x8EC327E2640804FBLL,1UL},{18446744073709551615UL,4UL,0xAB371FFBBC1C1601LL,0xCC79E230C8FB0327LL,18446744073709551609UL,18446744073709551610UL,0UL},{0x54C786C28C7B4499LL,0x8EC327E2640804FBLL,0x00F316632024BCA4LL,4UL,0x54C786C28C7B4499LL,4UL,0x00F316632024BCA4LL},{18446744073709551609UL,18446744073709551609UL,0xAB371FFBBC1C1601LL,0UL,18446744073709551615UL,0xC0FBC08ADB001C2BLL,4UL},{0x80215B70D6D8C49ELL,18446744073709551615UL,0x80215B70D6D8C49ELL,4UL,1UL,18446744073709551615UL,1UL},{0xCC79E230C8FB0327LL,0UL,0UL,0xCC79E230C8FB0327LL,18446744073709551615UL,0xAB371FFBBC1C1601LL,18446744073709551610UL}};
                    int i, j;
                    for (g_371.f0 = 0; (g_371.f0 <= 0); g_371.f0 += 1)
                    {
                        int8_t l_1173[3][6][10] = {{{0x04L,0xFEL,0x04L,0xDDL,0L,1L,0L,0x08L,0x15L,0xDDL},{3L,0xFEL,(-2L),1L,0L,0x07L,0x29L,0x08L,(-1L),1L},{3L,0x7FL,0x04L,1L,0x15L,1L,0x29L,1L,0x15L,1L},{0x04L,0xFEL,0x04L,0xDDL,0L,1L,0L,0x08L,0x15L,0xDDL},{3L,0xFEL,(-2L),1L,0L,0x07L,0x29L,0x08L,(-1L),1L},{3L,0x7FL,0x04L,1L,0x15L,1L,0x29L,1L,0x15L,1L}},{{0x04L,0xFEL,0x04L,0xDDL,0L,1L,0L,0x08L,0x15L,0xDDL},{3L,0xFEL,(-2L),1L,0L,0x07L,0x29L,0x08L,(-1L),1L},{3L,0x7FL,0x04L,1L,0x15L,1L,0x29L,1L,0x15L,1L},{0x04L,0xFEL,0x04L,0xDDL,0L,1L,0L,0x08L,0x15L,0xDDL},{3L,0xFEL,(-2L),1L,0L,0x07L,0x29L,0x08L,(-1L),1L},{3L,0x7FL,0x04L,1L,0x15L,1L,0x29L,1L,0x15L,1L}},{{0x04L,0xFEL,0x04L,0x07L,0x04L,(-1L),0x85L,(-1L),(-2L),0x07L},{0L,1L,(-6L),1L,0x04L,0L,0L,(-1L),3L,1L},{0L,0xF0L,(-5L),1L,(-2L),(-1L),0L,(-1L),(-2L),1L},{(-5L),1L,(-5L),0x07L,0x04L,(-1L),0x85L,(-1L),(-2L),0x07L},{0L,1L,(-6L),1L,0x04L,0L,0L,(-1L),3L,1L},{0L,0xF0L,(-5L),1L,(-2L),(-1L),0L,(-1L),(-2L),1L}}};
                        int i, j, k;
                        l_1173[0][5][6] |= ((((safe_rshift_func_uint8_t_u_s(6UL, (safe_div_func_uint64_t_u_u((p_103 & (~(safe_div_func_int8_t_s_s(p_103, (65530UL | ((safe_div_func_uint16_t_u_u(g_1091.f4, ((safe_rshift_func_int8_t_s_u(((p_101.f0 , ((l_1167[1] != l_1169) >= (((g_502 != l_1094.f3) , l_1094.f0) | (*l_1123)))) || l_1171[6][4]), g_856.f1)) & 0x8C87AE3A872A445ELL))) || (*p_102))))))), l_1172)))) != 0x3542L) > p_103) ^ g_39);
                        l_1174--;
                    }
                    (*l_1123) = (safe_mod_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((safe_add_func_uint64_t_u_u((((((((l_1183 > (p_103 & p_103)) | ((((l_1193[2][4][3] = ((*p_104) ^ ((safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(0x2BL, l_1022)) > ((0xC91DACB30E068127LL & (safe_div_func_uint32_t_u_u(1UL, 1L))) < 0x22D2D61EL)) <= l_1192), p_101.f0)) ^ 0x07804FB3L))) | 6UL) , p_101.f0) > l_1153[2][9][0].f0)) , &l_947) == g_1194) | 0x388514FC554015A2LL) && (*p_104)) != p_101.f0), (*p_102))) ^ p_101.f0), (*l_1123))), 0x1BL));
                    for (l_1137 = 0; (l_1137 <= 0); l_1137 += 1)
                    {
                        if (p_103)
                            break;
                    }
                }
                if (p_101.f0)
                    break;
            }
            else
            {
                int8_t ***l_1204 = &l_1203;
                int32_t l_1205 = 0x4E003A1FL;
                uint32_t *l_1206 = (void*)0;
                uint32_t *l_1207 = &g_371.f0;
                struct S1 *** const *l_1208 = (void*)0;
                int32_t l_1210 = 0xA5BC1DD9L;
                (*l_1123) = (g_560 <= ((((safe_sub_func_uint8_t_u_u((((*l_1010) ^= 252UL) >= (((*p_104) | ((safe_unary_minus_func_int32_t_s((l_1022 ^ ((((safe_mod_func_uint32_t_u_u(((*l_1207) = (l_1205 = ((-1L) != ((g_43 >= ((&l_1046 == ((*l_1204) = l_1203)) > (((*g_647) == (*g_647)) < (*p_104)))) <= p_101.f0)))), p_103)) < g_33.f3) , l_1208) == l_1209)))) | l_1094.f3)) <= p_103)), p_103)) | g_801) & l_1210) == g_856.f1));
                return l_975;
            }
        }
        (*l_1211) = l_1094;
    }
    for (g_38.f2 = (-10); (g_38.f2 < (-22)); --g_38.f2)
    {
        return (**l_947);
    }
    return (*g_538);
}







static struct S1 func_105(int32_t p_106, int32_t p_107)
{
    struct S0 *l_708 = &g_371.f1;
    struct S3 l_727 = {2UL,{0x21B8D4A918BD923CLL},29,-1L};
    const int64_t *l_745 = &g_37;
    const int64_t **l_744 = &l_745;
    const int64_t ***l_743 = &l_744;
    uint64_t l_788 = 2UL;
    int32_t l_803 = 0L;
    int32_t l_804 = 0xD8641390L;
    uint8_t *l_892 = &g_186[0][9][0];
    struct S1 *l_895 = &g_230;
lbl_876:
    l_708 = l_708;
    for (g_371.f1.f0 = 0; (g_371.f1.f0 < 44); ++g_371.f1.f0)
    {
        struct S0 l_713[3][3][5] = {{{{0xC7FD85FB8E5D72F2LL},{0xB166DECCDC1A76C9LL},{0xB22A6021E605D80BLL},{1UL},{1UL}},{{0xD8EC7007D700C254LL},{1UL},{0x99D7E9ABD4CCE0B5LL},{18446744073709551615UL},{18446744073709551615UL}},{{0xC7FD85FB8E5D72F2LL},{1UL},{0xC7FD85FB8E5D72F2LL},{0x99D7E9ABD4CCE0B5LL},{0x1781D955CB60B8C2LL}}},{{{18446744073709551615UL},{1UL},{0x31232260CB54A543LL},{0xD8EC7007D700C254LL},{0xB166DECCDC1A76C9LL}},{{0x958DED5E04CCD919LL},{1UL},{18446744073709551615UL},{0xB22A6021E605D80BLL},{18446744073709551615UL}},{{1UL},{0xB166DECCDC1A76C9LL},{0x31232260CB54A543LL},{0xB166DECCDC1A76C9LL},{1UL}}},{{{18446744073709551615UL},{0xD8EC7007D700C254LL},{0xC7FD85FB8E5D72F2LL},{0xB166DECCDC1A76C9LL},{0xB22A6021E605D80BLL}},{{0x6F036CAF7C5DB8C9LL},{18446744073709551615UL},{0x99D7E9ABD4CCE0B5LL},{0xB22A6021E605D80BLL},{18446744073709551615UL}},{{0x31232260CB54A543LL},{0xC7FD85FB8E5D72F2LL},{0xB22A6021E605D80BLL},{0xD8EC7007D700C254LL},{0xB22A6021E605D80BLL}}}};
        uint32_t *l_724 = (void*)0;
        uint32_t **l_723 = &l_724;
        uint64_t *l_730 = &g_262;
        int32_t *l_731 = &g_118;
        union U5 l_749 = {0};
        struct S3 l_756 = {4294967295UL,{1UL},21,0x25L};
        int32_t l_792[1];
        union U4 *l_826 = &g_38;
        struct S2 l_832 = {-4369,-0,-12,0,3239};
        const uint16_t *l_837 = &g_43;
        uint64_t l_847[5];
        struct S1 l_934 = {-1L};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_792[i] = 0x3AE536DDL;
        for (i = 0; i < 5; i++)
            l_847[i] = 1UL;
        (*l_731) ^= (safe_sub_func_uint64_t_u_u(((l_713[0][1][1] , ((*l_730) = ((safe_lshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u(l_713[0][1][1].f0, (safe_add_func_int64_t_s_s((((!(g_721 == l_723)) != ((safe_mod_func_int8_t_s_s(0x36L, (l_727 , (safe_rshift_func_int16_t_s_s(((5L >= (l_727.f2 ^= p_106)) != (g_33.f3 | l_713[0][1][1].f0)), g_33.f3))))) | l_713[0][1][1].f0)) != p_106), l_713[0][1][1].f0)))) ^ 0xD754FCFAL), 0)) == 1L))) ^ 0x17EB4B1DBB0C34D6LL), 0x2751DF8B2501E9A1LL));
        if (p_106)
            continue;
        (*l_731) = (l_730 == l_730);
        for (g_540.f0 = 0; (g_540.f0 <= 5); g_540.f0 += 1)
        {
            int64_t l_757 = 1L;
            int32_t l_773 = 1L;
            int32_t l_798[8];
            struct S0 *l_908[7][1] = {{&g_5},{&l_727.f1},{&g_5},{&l_727.f1},{&g_5},{&l_727.f1},{&g_5}};
            int8_t *l_920[2][6][7] = {{{&g_540.f2,&g_9,&g_33.f3,&g_33.f3,&g_9,&g_540.f2,&g_9},{&g_371.f3,&g_540.f2,&g_540.f2,&g_371.f3,&g_9,&g_371.f3,&g_540.f2},{(void*)0,(void*)0,&g_540.f2,&g_33.f3,&g_540.f2,(void*)0,(void*)0},{(void*)0,&g_540.f2,&g_33.f3,&g_540.f2,(void*)0,(void*)0,&g_540.f2},{&g_371.f3,&g_9,&g_371.f3,&g_540.f2,&g_540.f2,&g_371.f3,&g_9},{&g_540.f2,&g_9,&g_33.f3,&g_33.f3,&g_9,&g_540.f2,&g_9}},{{&g_371.f3,&g_540.f2,&g_540.f2,&g_371.f3,&g_9,&g_371.f3,&g_540.f2},{(void*)0,(void*)0,&g_540.f2,&g_33.f3,&g_540.f2,(void*)0,(void*)0},{(void*)0,&g_540.f2,&g_33.f3,&g_540.f2,(void*)0,(void*)0,&g_540.f2},{&g_371.f3,&g_9,&g_371.f3,&g_540.f2,&g_540.f2,&g_371.f3,&g_9},{&g_540.f2,&g_9,&g_33.f3,&g_33.f3,&g_9,&g_540.f2,&g_9},{&g_371.f3,&g_540.f2,&g_540.f2,&g_371.f3,&g_9,&g_33.f3,&g_371.f3}}};
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_798[i] = 0x40EE5AEFL;
            if (((void*)0 != g_732[5][2][4]))
            {
                int64_t **l_747 = &g_423;
                int64_t ***l_746 = &l_747;
                int16_t *l_748 = &g_500;
                uint64_t l_755 = 0xC67BC11B7E21D214LL;
                int32_t l_772 = (-1L);
                int32_t l_793 = 0xE111AB3EL;
                int32_t l_794 = 0x3CC6B557L;
                int32_t l_795 = 8L;
                int32_t l_796 = 0xA88789C9L;
                int32_t l_799 = 0xAECE5900L;
                int32_t l_800 = (-4L);
                int32_t l_802 = (-5L);
                int8_t l_825 = 0x45L;
                const union U4 l_864 = {0xEE817FDEL};
                int i;
                if ((safe_unary_minus_func_int8_t_s(((safe_sub_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(g_2[g_540.f0], (safe_sub_func_int8_t_s_s(p_106, (((safe_mul_func_int16_t_s_s(2L, ((*l_748) = (l_743 != l_746)))) & ((((((l_749 , (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(p_107, 7)) , (!l_755)), (&g_423 == (*l_743))))) , l_756) , (-4L)) != l_757) ^ 0x82L) <= 0xB9L)) || p_107))))), 0x7DE84B6F2DE676DFLL)) & g_325.f1.f0))))
                {
                    int32_t l_766 = 0x071BD8BFL;
                    uint8_t l_785 = 0x29L;
                    int32_t *l_791[5][6] = {{&l_772,&l_772,&l_766,&l_773,&g_200,&g_200},{&l_772,&g_118,&g_118,&l_772,(void*)0,&g_200},{&l_773,&g_200,&l_766,&l_772,&l_773,&l_772},{(void*)0,(void*)0,(void*)0,&l_772,&l_773,&l_772},{&l_766,&g_200,&l_773,(void*)0,(void*)0,&l_773}};
                    struct S0 l_816 = {0x5E8C16462AA3B916LL};
                    union U4 **l_827 = &l_826;
                    int i, j;
                    for (l_727.f3 = 0; (l_727.f3 <= 1); l_727.f3 += 1)
                    {
                        uint16_t *l_764 = &g_765;
                        int32_t l_767[6] = {1L,1L,0xD8F18960L,1L,1L,0xD8F18960L};
                        int32_t *l_768 = &l_767[0];
                        int32_t *l_769 = &g_125;
                        int32_t *l_770 = &g_118;
                        int32_t *l_771 = &g_200;
                        int32_t *l_774 = (void*)0;
                        uint8_t l_775 = 0xC9L;
                        int32_t *l_778 = &l_772;
                        int32_t *l_779 = (void*)0;
                        int32_t *l_780 = &l_767[5];
                        int32_t *l_781 = &g_118;
                        int32_t *l_782 = &l_767[2];
                        int32_t *l_783 = &g_530;
                        int32_t *l_784[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_784[i] = &l_773;
                        l_766 = ((g_535[l_727.f3] < (safe_mod_func_uint8_t_u_u(((g_3 == (((p_107 , (((*l_731) |= ((safe_div_func_uint8_t_u_u((((g_612 , g_96) , 0xC6L) >= 0L), (safe_sub_func_int16_t_s_s(g_262, ((*l_764) = g_358[0]))))) != (-5L))) >= g_2[g_540.f0])) > 1UL) == 0x4410A1AE2D2712CFLL)) >= 0xDC86EF94L), (-8L)))) && 9L);
                        l_775++;
                        l_785--;
                        ++l_788;
                    }
                    --g_805;
                    if (p_106)
                        break;
                    (*l_827) = ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((((safe_div_func_uint32_t_u_u((l_816 , (((safe_lshift_func_int8_t_s_s(p_106, 7)) <= l_799) < ((g_371.f0 , p_107) >= ((*l_731) = 0x18L)))), (safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((l_755 < ((safe_sub_func_uint32_t_u_u(l_825, (l_792[0] = p_107))) ^ p_106)), 3)), p_107)))) == 65527UL) >= l_798[2]), p_107)), 0xE709L)) , (*l_731)), (-9L))) , l_826);
                }
                else
                {
                    int64_t l_842[3];
                    const int32_t l_874 = 0x71C77B78L;
                    struct S1 l_901 = {5L};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_842[i] = 8L;
                    if (((p_107 <= (((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((l_832 , (((*l_731) = (safe_mul_func_int16_t_s_s(((*l_748) = (safe_add_func_int32_t_s_s((l_837 == (void*)0), (safe_div_func_int8_t_s_s(p_107, (safe_add_func_uint32_t_u_u(l_842[0], (p_106 >= l_842[0])))))))), (safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((l_825 >= p_107), l_842[0])), 251UL))))) || g_150)), p_107)), g_33.f3)) == 18446744073709551614UL) | p_107) & l_842[1]) && l_847[0])) <= l_798[2]))
                    {
                        uint32_t *l_865 = &g_248;
                        int32_t l_875 = 2L;
                        if (l_842[0])
                            break;
                        (*l_731) = (safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_div_func_int16_t_s_s((l_794 != (safe_lshift_func_int16_t_s_s((g_856 , ((g_118 < (p_106 > ((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((+65535UL), 7)) == ((*l_730) = (0x2B45B7A3L > (l_864 , (--(*l_865)))))), (l_773 = (((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(l_874, 1)), g_560)), p_106)) >= 1L) , g_246)))), p_107)) , p_106))) , g_325.f1.f0)), 11))), p_107)), l_875)), p_106));
                        if (g_856.f2)
                            goto lbl_876;
                        if (p_107)
                            break;
                    }
                    else
                    {
                        uint32_t l_885 = 18446744073709551615UL;
                        struct S1 **l_896 = (void*)0;
                        struct S1 **l_897 = &l_895;
                        int32_t l_898 = 0x930F1B75L;
                        struct S0 **l_899 = (void*)0;
                        struct S0 **l_900 = &l_708;
                        g_200 = (((((safe_sub_func_int64_t_s_s((((safe_sub_func_int8_t_s_s((*g_8), ((((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s((p_107 , ((*l_731) != ((l_885 , (safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(p_107, (p_106 , (g_856 , ((void*)0 != &g_538))))) , 0x2C9A3966L), g_186[0][3][0])), g_502))) < p_106))), l_793)), g_371.f0)) , g_33.f3) , g_371.f2) , 0x2DL))) != (-1L)) >= p_107), p_106)) | l_864.f2) , l_892) == (void*)0) && g_5.f0);
                        g_33.f2 |= (((*l_731) = (safe_sub_func_int64_t_s_s(l_727.f0, ((((*l_897) = l_895) == (void*)0) >= l_773)))) > (l_898 = l_874));
                        (*l_900) = l_708;
                    }
                    if (g_248)
                        goto lbl_876;
                    (*g_321) = (*g_321);
                    (*g_321) = l_901;
                }
                (*l_731) = ((void*)0 == &l_864);
                for (l_772 = 0; (l_772 <= 1); l_772 += 1)
                {
                    int32_t *l_902 = &l_798[2];
                    int32_t *l_903 = &l_796;
                    int32_t *l_904[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_904[i] = &l_792[0];
                    g_905--;
                }
                l_908[2][0] = l_908[2][0];
            }
            else
            {
                int8_t l_913 = 0x96L;
                union U4 *l_925 = &g_540;
                uint8_t l_927 = 1UL;
                const union U5 ***l_931 = (void*)0;
                struct S3 l_932 = {4294967293UL,{0x634E986F8E9F3787LL},-25,4L};
                if ((safe_lshift_func_int16_t_s_s(l_788, 11)))
                {
                    union U4 **l_926 = &g_538;
                    (*l_731) ^= (0x4FL ^ (safe_lshift_func_uint16_t_u_s((l_913 , ((((safe_mod_func_int16_t_s_s(p_107, (safe_sub_func_int64_t_s_s((((void*)0 != &g_96) >= (((void*)0 != l_920[1][5][3]) > (safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((-3L), ((((*l_926) = l_925) == (void*)0) , 0x9EFDL))), l_927)))), l_727.f3)))) < g_856.f4) <= g_500) < p_107)), p_106)));
                    l_931 = g_928[3][3];
                }
                else
                {
                    struct S3 *l_933 = &g_325;
                    (*l_933) = l_932;
                }
                return l_934;
            }
        }
    }
    return (*l_895);
}







static uint16_t func_109(int64_t * p_110, int16_t p_111)
{
    int64_t l_121 = (-8L);
    int32_t l_126 = (-1L);
    struct S0 l_147 = {0x2F3D6CDB74EB91FBLL};
    uint16_t l_312 = 0UL;
    int32_t l_313[7][10] = {{0x66131344L,0x66131344L,0xBCE47EABL,0x66131344L,0x66131344L,0xBCE47EABL,0x66131344L,0x66131344L,0xBCE47EABL,0x66131344L},{0x66131344L,0xD1E1DB44L,0xD1E1DB44L,0x66131344L,0xD1E1DB44L,0xD1E1DB44L,0x66131344L,0xD1E1DB44L,0xD1E1DB44L,0x66131344L},{0xD1E1DB44L,0x66131344L,0xD1E1DB44L,0xD1E1DB44L,0x66131344L,0xD1E1DB44L,0xD1E1DB44L,0x66131344L,0xD1E1DB44L,0xD1E1DB44L},{0x66131344L,0x66131344L,0xBCE47EABL,0x66131344L,0x66131344L,0xBCE47EABL,0x66131344L,0x66131344L,0xBCE47EABL,0x66131344L},{0x66131344L,0xD1E1DB44L,0xD1E1DB44L,0x66131344L,0xD1E1DB44L,0xD1E1DB44L,0x66131344L,0xD1E1DB44L,0xD1E1DB44L,0x66131344L},{0xD1E1DB44L,0x66131344L,0xD1E1DB44L,0xD1E1DB44L,0x66131344L,0xD1E1DB44L,0xD1E1DB44L,0x66131344L,0xD1E1DB44L,0xD1E1DB44L},{0x66131344L,0x66131344L,0xBCE47EABL,0x66131344L,0x66131344L,0xBCE47EABL,0x66131344L,0x66131344L,0xBCE47EABL,0x66131344L}};
    int32_t l_318 = 0x229614BAL;
    const struct S3 l_323 = {0x19A00E81L,{0x4AFDD0078BCC8813LL},26,1L};
    uint16_t l_346 = 8UL;
    uint8_t *l_351[7] = {&g_186[0][9][0],&g_186[0][9][0],&g_186[0][9][0],&g_186[0][9][0],&g_186[0][9][0],&g_186[0][9][0],&g_186[0][9][0]};
    int32_t l_412[1];
    int64_t *l_419 = (void*)0;
    int64_t **l_418 = &l_419;
    uint32_t l_565 = 0x61113FE2L;
    struct S0 *l_580 = &g_5;
    struct S0 **l_579 = &l_580;
    struct S0 ***l_578 = &l_579;
    int8_t *l_656 = &g_371.f3;
    struct S1 **l_689 = &g_321;
    int i, j;
    for (i = 0; i < 1; i++)
        l_412[i] = 0x6B217372L;
    if ((l_121 = p_111))
    {
        uint32_t l_128 = 0UL;
        int8_t *l_141 = &g_39;
        int32_t l_142 = 0x44AA9F20L;
        int32_t **l_166 = &g_119;
        uint32_t l_286 = 0xF425CC56L;
        union U5 l_308[4] = {{0},{0},{0},{0}};
        int8_t l_310 = 0x55L;
        struct S3 *l_324 = &g_325;
        int i;
        if (p_111)
        {
            int8_t l_127 = 0x2CL;
            int8_t *l_136[5][6][6] = {{{&g_9,&g_39,&l_127,(void*)0,&g_38.f2,&g_38.f2},{&g_38.f2,(void*)0,&g_39,&l_127,&g_33.f3,&g_38.f2},{&g_38.f2,&l_127,&g_33.f3,(void*)0,(void*)0,&g_33.f3},{&g_9,&g_9,&g_33.f3,&l_127,&g_38.f2,&g_38.f2},{(void*)0,&l_127,&l_127,&g_9,&g_38.f2,&g_33.f3},{&g_38.f2,(void*)0,&l_127,&g_39,&g_9,&g_38.f2}},{{&g_38.f2,&g_39,&g_33.f3,(void*)0,&g_33.f3,&g_33.f3},{(void*)0,&g_33.f3,&g_33.f3,&g_39,&g_38.f2,&g_38.f2},{&g_9,(void*)0,&g_39,&g_9,&g_38.f2,&g_38.f2},{&g_38.f2,&g_33.f3,&l_127,&l_127,&g_33.f3,&g_38.f2},{&g_38.f2,&g_39,(void*)0,(void*)0,&g_9,&g_38.f2},{(void*)0,(void*)0,&g_33.f3,&l_127,&g_38.f2,&g_38.f2}},{{&g_9,(void*)0,&l_127,(void*)0,&g_38.f2,(void*)0},{&g_38.f2,(void*)0,&l_127,&l_127,(void*)0,&g_38.f2},{&g_38.f2,(void*)0,&l_127,&g_33.f3,&g_9,&g_33.f3},{(void*)0,(void*)0,&l_127,&l_127,&g_38.f2,&g_38.f2},{&g_9,&l_127,&l_127,&g_9,&g_38.f2,(void*)0},{&g_33.f3,&g_9,&l_127,&l_127,(void*)0,&g_33.f3}},{{&g_38.f2,&g_39,&g_33.f3,&g_33.f3,(void*)0,&g_33.f3},{(void*)0,&g_9,&l_127,&l_127,&g_38.f2,&g_38.f2},{(void*)0,&l_127,&l_127,(void*)0,&g_38.f2,&g_33.f3},{&g_33.f3,(void*)0,&l_127,&l_127,&g_9,&g_33.f3},{&g_33.f3,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_33.f3,&l_127,&g_38.f2,&g_38.f2}},{{(void*)0,(void*)0,&l_127,&g_33.f3,&g_38.f2,&g_33.f3},{&g_38.f2,(void*)0,&l_127,&l_127,(void*)0,&g_38.f2},{&g_33.f3,&l_127,&g_33.f3,&g_9,&g_9,(void*)0},{&g_9,&g_9,(void*)0,&l_127,&g_38.f2,&g_33.f3},{(void*)0,&g_39,&l_127,&g_33.f3,&g_38.f2,&g_33.f3},{&g_38.f2,&g_9,&l_127,&l_127,&g_9,&g_38.f2}}};
            int8_t **l_135 = &l_136[1][3][2];
            int8_t **l_137 = (void*)0;
            int8_t *l_139 = (void*)0;
            int8_t **l_138[10][7] = {{&l_139,&l_139,(void*)0,(void*)0,&g_8,&g_8,(void*)0},{&l_139,(void*)0,&l_139,&l_139,(void*)0,&l_139,(void*)0},{&l_139,&l_139,&l_139,&l_139,&l_139,&l_139,&l_139},{&l_139,&l_139,(void*)0,(void*)0,&l_139,&l_139,&l_139},{&l_139,&l_139,&l_139,&l_139,&l_139,&g_8,&l_139},{&l_139,&g_8,&l_139,&l_139,&l_139,&l_139,&g_8},{&l_139,(void*)0,&l_139,&l_139,&l_139,&l_139,&l_139},{&l_139,&l_139,&l_139,(void*)0,&l_139,&l_139,&l_139},{&l_139,&g_8,&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,&l_139,&l_139,&g_8,&l_139,(void*)0}};
            int64_t *l_151 = &l_121;
            int32_t l_159 = 0L;
            const int32_t *l_165[4] = {&l_142,&l_142,&l_142,&l_142};
            const int32_t **l_164 = &l_165[3];
            union U5 l_181 = {0};
            struct S0 l_188 = {0xF9A3E397D913FAE4LL};
            int i, j, k;
            for (g_118 = 0; (g_118 <= 11); g_118++)
            {
                int32_t *l_124[1][6];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_124[i][j] = &g_125;
                }
                --l_128;
            }
            if ((((*p_110) && (l_142 = ((0x62BDL || ((((safe_sub_func_int8_t_s_s(((void*)0 != &g_119), 0xD7L)) == l_127) != (safe_mul_func_int8_t_s_s(l_121, ((g_140 = ((*l_135) = &g_39)) != l_141)))) | (-1L))) , g_39))) > (*p_110)))
            {
                int64_t *l_152 = &l_121;
                struct S0 l_170 = {0xD5895350F15932AALL};
                const uint32_t *l_180[5];
                int32_t l_187 = 0x18BB1ADAL;
                int i;
                for (i = 0; i < 5; i++)
                    l_180[i] = &g_2[0];
                for (g_5.f0 = 0; (g_5.f0 != 4); ++g_5.f0)
                {
                    int32_t **l_157 = &g_119;
                    int32_t *l_158[3][5][2] = {{{&l_126,&l_126},{&l_142,&g_125},{&l_142,&g_125},{&l_142,&l_126},{&g_3,&l_142}},{{&l_142,&l_126},{&l_142,&l_142},{&g_3,&g_3},{&l_142,&l_142},{&l_126,&l_142}},{{&l_142,&g_3},{&g_3,&l_142},{&l_142,&l_126},{&l_142,&l_142},{&g_3,&g_3}}};
                    int i, j, k;
                    for (g_38.f2 = 29; (g_38.f2 >= 3); g_38.f2 = safe_sub_func_int8_t_s_s(g_38.f2, 9))
                    {
                        return p_111;
                    }
                    l_147 = g_5;
                    l_159 = ((((((p_111 >= ((safe_rshift_func_int16_t_s_s((g_150 = l_147.f0), 6)) || (((((((l_151 != l_152) < (safe_rshift_func_int16_t_s_u((g_38.f2 >= (safe_mul_func_int8_t_s_s((l_157 == &g_119), ((void*)0 == &g_37)))), g_37))) && 0x7B4D5CE2L) , 3L) > l_147.f0) , p_111) > p_111))) <= p_111) == 0xC475L) >= l_147.f0) <= g_2[4]) < l_142);
                    return p_111;
                }
                for (g_125 = 0; (g_125 <= 5); g_125 += 1)
                {
                    int i;
                    return g_2[g_125];
                }
                if (p_111)
                {
                    struct S3 l_169 = {0UL,{0x998A83C557905800LL},-40,-1L};
                    if ((((safe_mul_func_int16_t_s_s((g_140 != (void*)0), (safe_mul_func_uint8_t_u_u(p_111, ((*l_141) = ((l_164 != l_166) & (safe_mod_func_uint16_t_u_u(0UL, (l_159 = l_128))))))))) ^ ((l_169 , l_170) , p_111)) > g_33.f2))
                    {
                        struct S0 l_171 = {18446744073709551615UL};
                        int32_t *l_172[9] = {&l_159,&g_3,&l_159,&l_159,&g_3,&l_159,&l_159,&g_3,&l_159};
                        int i;
                        l_159 ^= ((l_171 , 0xFB6B4A24L) < (l_169.f2 = (g_43 > 7UL)));
                        return g_38.f2;
                    }
                    else
                    {
                        uint32_t *l_175 = &g_2[0];
                        int32_t l_184[6][4][6] = {{{0x993B904DL,0x9D622751L,0x22E85F59L,1L,0x3E7769F7L,0x889BAE77L},{0x555B3299L,(-5L),1L,1L,(-5L),1L},{0x1016036AL,0xE04B37A0L,0x0F2B41A0L,1L,0x1CC493F2L,0x615696D6L},{0x0F2B41A0L,0xFF7F1617L,1L,0x22E85F59L,0x5B79E8ABL,0x889BAE77L}},{{0x0F2B41A0L,0x79A86176L,0L,1L,0x2AD0072BL,1L},{0x1016036AL,0x1CC493F2L,0x1016036AL,1L,0x49259ABBL,0L},{0x555B3299L,0xFF7F1617L,0L,1L,1L,0x993B904DL},{0x993B904DL,(-1L),0L,1L,(-5L),1L}},{{0x555B3299L,(-1L),0x889BAE77L,1L,(-1L),0x615696D6L},{0x1016036AL,0x9D622751L,(-1L),1L,1L,0x555B3299L},{0x0F2B41A0L,0L,1L,0x22E85F59L,0xB31F0EA3L,1L},{0x0F2B41A0L,0x1CC493F2L,(-2L),1L,0x4557DD34L,7L}},{{0x1016036AL,1L,0L,1L,0x5B79E8ABL,(-2L)},{0x555B3299L,0L,0xB1967CBAL,1L,0x79A86176L,1L},{0x993B904DL,0xE04B37A0L,(-2L),1L,(-1L),1L},{0x555B3299L,0x3E7769F7L,1L,1L,0x3E7769F7L,0x555B3299L}},{{0x1016036AL,(-1L),(-4L),1L,0x79A86176L,1L},{0x0F2B41A0L,0xB0B10695L,0x889BAE77L,0x22E85F59L,0x49259ABBL,1L},{0x0F2B41A0L,1L,0x22E85F59L,1L,(-3L),0x993B904DL},{0x1016036AL,0x79A86176L,0xB1967CBAL,1L,0xB31F0EA3L,0x22E85F59L}},{{0x555B3299L,0xB0B10695L,0x1016036AL,1L,0x1CC493F2L,7L},{0x993B904DL,0x9D622751L,0x22E85F59L,1L,0x3E7769F7L,0x889BAE77L},{0x555B3299L,(-5L),1L,1L,(-5L),1L},{0x1016036AL,0xE04B37A0L,0x0F2B41A0L,1L,0x1CC493F2L,0x615696D6L}}};
                        uint8_t *l_185[5] = {&g_186[0][9][0],&g_186[0][9][0],&g_186[0][9][0],&g_186[0][9][0],&g_186[0][9][0]};
                        struct S0 *l_189 = &l_188;
                        int i, j, k;
                        (*l_189) = ((l_187 = ((safe_add_func_uint32_t_u_u(((((((*l_175) = p_111) , ((safe_sub_func_int8_t_s_s(((((l_180[4] == (l_181 , (void*)0)) ^ 0xFCAAD6EEL) | ((safe_mul_func_int8_t_s_s((p_111 < (l_184[5][3][0] || (((0L && g_33.f2) > l_184[4][0][5]) > l_170.f0))), 0L)) < p_111)) , l_184[5][3][0]), 0x80L)) <= l_169.f3)) != p_111) , 255UL) , l_169.f0), l_169.f1.f0)) > 0L)) , l_188);
                        (*l_164) = &l_187;
                    }
                }
                else
                {
                    int32_t *l_194 = &l_126;
                    for (l_147.f0 = 2; (l_147.f0 != 18); l_147.f0 = safe_add_func_int64_t_s_s(l_147.f0, 4))
                    {
                        return p_111;
                    }
                    (*l_194) = (safe_lshift_func_uint16_t_u_s(8UL, l_170.f0));
                }
                return p_111;
            }
            else
            {
                uint64_t l_195[3];
                int32_t *l_196 = (void*)0;
                int32_t *l_197[2];
                int16_t *l_217 = &g_218;
                int64_t **l_221 = &l_151;
                int16_t *l_222 = (void*)0;
                int16_t *l_223[2];
                int i;
                for (i = 0; i < 3; i++)
                    l_195[i] = 18446744073709551615UL;
                for (i = 0; i < 2; i++)
                    l_197[i] = &l_159;
                for (i = 0; i < 2; i++)
                    l_223[i] = &g_224;
                l_159 |= (l_121 || (((0x73AEL && l_195[0]) , &g_39) == (g_140 = (void*)0)));
                if (((l_142 = ((g_224 = ((safe_mul_func_int16_t_s_s(g_200, (safe_add_func_int64_t_s_s(g_39, (g_150 , ((safe_sub_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((((g_39 | (safe_add_func_int8_t_s_s((+0xA1989BE62DB80F26LL), p_111))) >= (safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((((*l_217) = (safe_unary_minus_func_uint16_t_u((p_111 >= p_111)))) > (((((safe_rshift_func_int8_t_s_s(((((*l_221) = p_110) != &g_37) != g_38.f2), l_126)) || 0x45407581L) ^ (-1L)) && g_5.f0) == 0x1CB5L)), p_111)) , g_33.f2), g_186[0][9][0]))) , (void*)0) == &l_136[0][4][3]) | l_121) >= (-1L)), l_147.f0)), p_111)), 1L)) ^ 5UL)))))) <= g_33.f3)) == g_200)) >= g_125))
                {
                    int32_t l_228 = (-1L);
                    if ((safe_mod_func_uint8_t_u_u((((~6UL) ^ l_228) < 0x4D2AL), ((g_229 |= 0UL) ^ (g_125 ^ 65535UL)))))
                    {
                        return p_111;
                    }
                    else
                    {
                        struct S3 l_237 = {5UL,{18446744073709551615UL},37,0x7CL};
                        int64_t *l_247[5][9] = {{&l_121,&l_121,(void*)0,(void*)0,(void*)0,(void*)0,&g_37,&l_121,&g_37},{&g_37,&g_37,&l_121,&l_121,(void*)0,(void*)0,&l_121,&l_121,(void*)0},{(void*)0,&g_37,&l_121,(void*)0,&l_121,&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,(void*)0,&l_121,&l_121,(void*)0,&l_121,&l_121,&g_37},{&g_37,&l_121,(void*)0,&g_37,&g_37,&l_121,(void*)0,&l_121,&g_37}};
                        int i, j;
                        g_200 |= (g_230 , (safe_div_func_int8_t_s_s(((*p_110) < (g_233 || (~((g_248 = (((safe_lshift_func_uint8_t_u_u((((&l_228 != (l_237 , l_197[0])) >= g_38.f0) , ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((p_111 || (safe_lshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u(g_38.f2, 0xAFL)) < g_125), 1))) == p_111), p_111)), 1L)) < l_228)), 0)) , g_9) > g_246)) == g_38.f2)))), g_186[0][1][0])));
                        return p_111;
                    }
                }
                else
                {
                    return g_218;
                }
            }
        }
        else
        {
            int32_t *l_249 = &l_142;
            int32_t *l_250 = &g_200;
            int32_t *l_251 = &g_200;
            int32_t *l_252 = &g_118;
            int32_t *l_253 = &l_126;
            int32_t *l_254 = &l_126;
            int32_t *l_255 = &g_118;
            int32_t *l_256 = (void*)0;
            int32_t *l_257 = &g_200;
            int32_t *l_258 = &l_142;
            int32_t l_259 = 0xED7957FEL;
            int32_t *l_260 = &g_200;
            int32_t *l_261[4][7] = {{&g_3,&g_118,&g_3,&g_118,&g_3,&g_118,&g_3},{&g_200,&g_200,&g_200,&g_200,&g_200,&g_200,&g_200},{&g_3,&g_118,&g_3,&g_118,&g_3,&g_118,&g_3},{&g_200,&g_200,&g_200,&g_200,&g_200,&g_200,&g_200}};
            uint8_t *l_275 = &g_186[0][1][0];
            int i, j;
            ++g_262;
            l_126 = (safe_mul_func_int8_t_s_s((&g_119 == &g_119), ((l_121 , ((((safe_div_func_uint8_t_u_u((((((((safe_mul_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s((((*g_8) != g_9) || (((*l_275)--) | ((safe_sub_func_int16_t_s_s(((((+0x5EL) , (g_38.f2 || (!((safe_div_func_int64_t_s_s(0x787789EAE0A9FA56LL, (safe_mul_func_uint16_t_u_u(((void*)0 != &l_141), p_111)))) == g_33.f1.f0)))) > p_111) <= 0xB09113BFD860E4E3LL), p_111)) >= (-1L)))), (*p_110))), l_126)) , (void*)0) == l_141) < (-8L)), l_286)) <= g_230.f0) , p_111) < (*p_110)) && (*l_258)) | g_125) > (*l_254)), 1UL)) <= g_125) && g_118) | g_118)) > p_111)));
        }
        if (g_200)
            goto lbl_322;
lbl_322:
        for (g_33.f3 = 0; (g_33.f3 >= 0); g_33.f3 -= 1)
        {
            int32_t *l_288 = &l_142;
            int32_t **l_287 = &l_288;
            int i;
            (*l_166) = &g_200;
            (*l_287) = ((*l_166) = (g_2[(g_33.f3 + 3)] , (*l_166)));
            if (p_111)
                break;
            for (g_5.f0 = 0; (g_5.f0 <= 5); g_5.f0 += 1)
            {
                struct S1 *l_320[4][10] = {{&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230},{&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230},{&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230},{&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230,&g_230}};
                struct S1 **l_319[5][4] = {{(void*)0,(void*)0,&l_320[0][3],(void*)0},{(void*)0,&l_320[0][8],&l_320[0][3],&l_320[0][3]},{(void*)0,(void*)0,(void*)0,&l_320[0][3]},{&l_320[2][7],&l_320[0][8],&l_320[2][7],(void*)0},{&l_320[2][7],(void*)0,(void*)0,&l_320[2][7]}};
                int i, j;
                for (g_218 = 0; (g_218 <= 0); g_218 += 1)
                {
                    uint64_t *l_309[7][1][7] = {{{(void*)0,&g_262,&g_233,&g_262,(void*)0,(void*)0,&g_233}},{{&g_5.f0,(void*)0,&g_5.f0,&g_33.f1.f0,&g_33.f1.f0,&g_5.f0,(void*)0}},{{&g_233,&g_233,&g_233,&g_233,&g_262,&g_262,&g_262}},{{&g_5.f0,&g_33.f1.f0,&g_33.f1.f0,&g_5.f0,(void*)0,&g_5.f0,&g_33.f1.f0}},{{(void*)0,(void*)0,&g_233,&g_233,&g_233,(void*)0,(void*)0}},{{&l_147.f0,&g_33.f1.f0,&g_262,&g_33.f1.f0,&l_147.f0,&l_147.f0,&g_33.f1.f0}},{{&g_33.f1.f0,&g_233,&g_33.f1.f0,&g_262,&g_233,&g_33.f1.f0,&g_262}}};
                    int32_t l_311 = 0x099B40CFL;
                    int16_t *l_314 = (void*)0;
                    int16_t *l_315 = &g_224;
                    int16_t *l_316 = &g_317;
                    int i, j, k;
                    l_318 |= (safe_lshift_func_int16_t_s_s(((*l_316) = ((*l_315) |= (0xB3L || (1UL > (((l_147.f0 , ((~((l_313[1][8] = (safe_rshift_func_int16_t_s_s((p_111 > (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((l_312 = ((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_2[2], ((safe_mod_func_uint64_t_u_u((g_230 , ((18446744073709551615UL != (l_308[1] , ((l_126 |= ((void*)0 == &g_8)) <= (*p_110)))) , 0x45DA4C048E1D8DCDLL)), (**l_166))) && l_310))), p_111)), 1)), l_311)) < g_246)) , 0x29711FA603679C85LL) == l_147.f0), (*g_8))), 0xFEL))), 1))) > 1UL)) , l_311)) >= 0xDDL) > p_111))))), g_37));
                }
                g_321 = &g_230;
                return p_111;
            }
        }
        (*l_324) = l_323;
    }
    else
    {
        int32_t *l_326 = &g_200;
        int32_t *l_327 = &l_126;
        int32_t *l_328[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_329 = 0xAC4B7426L;
        struct S3 l_372[6] = {{0xECC1296CL,{0xF90A15924B5834C9LL},-22,1L},{0xECC1296CL,{0xF90A15924B5834C9LL},-22,1L},{3UL,{0xFF74C4999E4DED22LL},-35,0L},{0xECC1296CL,{0xF90A15924B5834C9LL},-22,1L},{0xECC1296CL,{0xF90A15924B5834C9LL},-22,1L},{3UL,{0xFF74C4999E4DED22LL},-35,0L}};
        struct S1 l_375 = {0x7FA70DFFL};
        struct S1 * const *l_395 = &g_321;
        struct S1 * const **l_394 = &l_395;
        int64_t **l_421 = &l_419;
        int i;
        --l_329;
lbl_377:
        if (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(g_325.f2, ((*l_326) ^ (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((((l_346 <= p_111) <= (safe_mul_func_uint8_t_u_u(((&g_119 == ((safe_add_func_int8_t_s_s((((void*)0 == l_351[4]) > ((*l_327) = ((((void*)0 != &g_317) , l_121) & 0x865CL))), (*g_8))) , (void*)0)) == 0UL), 0UL))) , (-3L)), g_325.f0)), (*l_326))), 2)) || p_111) < p_111) & g_38.f0), l_323.f0)), p_111))))), g_33.f2)) > g_325.f3))
        {
            union U5 l_355[5][3][2] = {{{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}}}};
            int i, j, k;
            (*l_326) ^= (safe_mod_func_int64_t_s_s((safe_unary_minus_func_int8_t_s(p_111)), ((l_355[4][2][0] , p_111) | ((*p_110) > (*p_110)))));
            return p_111;
        }
        else
        {
            int8_t l_356 = 0L;
            int32_t l_357[2];
            struct S1 **l_361 = &g_321;
            struct S1 ***l_362 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_357[i] = 0x8DC023EAL;
            --g_358[0];
            l_361 = l_361;
        }
        for (l_312 = 0; (l_312 < 12); l_312 = safe_add_func_uint32_t_u_u(l_312, 3))
        {
            uint32_t l_365 = 4294967295UL;
            int32_t l_379[9][5][2] = {{{(-1L),0xD93545C0L},{0xBDAC23D5L,0xBDAC23D5L},{0xBDAC23D5L,0xD93545C0L},{(-1L),(-7L)},{0xD93545C0L,(-7L)}},{{(-1L),0xD93545C0L},{0xBDAC23D5L,0xBDAC23D5L},{0xBDAC23D5L,0xD93545C0L},{(-1L),(-7L)},{0xD93545C0L,(-7L)}},{{(-1L),0xD93545C0L},{0xBDAC23D5L,0xBDAC23D5L},{0xBDAC23D5L,0xD93545C0L},{(-1L),(-7L)},{0xD93545C0L,(-7L)}},{{(-1L),0xD93545C0L},{0xBDAC23D5L,0xBDAC23D5L},{0xBDAC23D5L,0xD93545C0L},{(-1L),(-7L)},{0xD93545C0L,(-7L)}},{{(-1L),0xD93545C0L},{0xBDAC23D5L,0xBDAC23D5L},{0xBDAC23D5L,0xD93545C0L},{(-1L),(-7L)},{0xD93545C0L,(-7L)}},{{(-1L),0xD93545C0L},{0xBDAC23D5L,0xBDAC23D5L},{0xBDAC23D5L,0xD93545C0L},{(-1L),(-7L)},{0xD93545C0L,(-7L)}},{{(-1L),0xD93545C0L},{0xBDAC23D5L,0xBDAC23D5L},{0xBDAC23D5L,0xD93545C0L},{(-1L),(-7L)},{0xD93545C0L,(-7L)}},{{(-1L),0xD93545C0L},{0xBDAC23D5L,0xBDAC23D5L},{0xBDAC23D5L,0xD93545C0L},{(-1L),(-7L)},{0xD93545C0L,(-7L)}},{{(-1L),0xD93545C0L},{0xBDAC23D5L,0xBDAC23D5L},{0xBDAC23D5L,0xD93545C0L},{(-1L),(-7L)},{0xD93545C0L,(-7L)}}};
            int64_t ***l_420[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j, k;
            ++l_365;
            for (g_33.f1.f0 = 0; (g_33.f1.f0 <= 6); g_33.f1.f0 += 1)
            {
                struct S3 *l_368 = &g_325;
                struct S3 *l_369 = (void*)0;
                struct S3 *l_370 = &g_371;
                l_372[3] = ((*l_370) = ((*l_368) = l_323));
            }
            for (g_371.f1.f0 = 0; (g_371.f1.f0 <= 5); g_371.f1.f0 += 1)
            {
                struct S3 *l_374 = &g_33;
                struct S3 **l_373 = &l_374;
                int32_t l_380 = 1L;
                struct S1 * const ***l_396 = &l_394;
                int8_t *l_413 = &g_371.f3;
                int i;
                (*l_373) = &l_372[g_371.f1.f0];
                for (g_38.f0 = 0; (g_38.f0 <= 5); g_38.f0 += 1)
                {
                    uint32_t l_381[6][5] = {{1UL,0xDA284915L,0xFED1B261L,0xDA284915L,1UL},{4294967294UL,0xA0BE3B21L,1UL,1UL,4294967286UL},{4294967294UL,4294967286UL,4294967289UL,4294967295UL,4294967295UL},{1UL,0x1F2F8721L,1UL,0xA0BE3B21L,4294967286UL},{4294967295UL,4294967295UL,4294967286UL,0xA0BE3B21L,1UL},{4294967286UL,4294967289UL,4294967295UL,4294967295UL,4294967289UL}};
                    int8_t * const *l_393 = (void*)0;
                    int8_t * const **l_392 = &l_393;
                    int i, j;
                    for (l_329 = 0; (l_329 <= 5); l_329 += 1)
                    {
                        int64_t *l_376 = &g_37;
                        int i, j;
                        (*g_321) = l_375;
                        l_313[l_329][g_371.f1.f0] = ((void*)0 == l_376);
                        if (l_313[(g_38.f0 + 1)][(g_38.f0 + 4)])
                            continue;
                    }
                    for (l_147.f0 = 1; (l_147.f0 <= 6); l_147.f0 += 1)
                    {
                        int32_t l_378[6][3][9] = {{{0xC74D2140L,1L,0x7619C6F2L,0x7619C6F2L,1L,0xC74D2140L,1L,0x7619C6F2L,0x7619C6F2L},{(-1L),0x694970F5L,0x52A4E985L,0x8482E40AL,0x52A4E985L,0x694970F5L,(-1L),(-3L),(-4L)},{(-1L),1L,(-1L),0xC74D2140L,0xC74D2140L,(-1L),1L,(-1L),0xC74D2140L}},{{0x1ED3BFB1L,(-3L),0x52A4E985L,0xCF99B61EL,0x6D59C3A3L,0xCF99B61EL,0x52A4E985L,(-3L),0x1ED3BFB1L},{(-5L),0xC74D2140L,0x7619C6F2L,0xC74D2140L,0xC74D2140L,0xC74D2140L,(-1L),1L,(-1L)},{0x1ED3BFB1L,0x694970F5L,0x6D59C3A3L,(-1L),(-1L),0xCF99B61EL,(-1L),(-1L),0x6D59C3A3L}},{{0xC74D2140L,0xC74D2140L,(-1L),1L,(-1L),0xC74D2140L,0xC74D2140L,(-1L),1L},{(-4L),0x694970F5L,(-4L),0xCF99B61EL,0x1ED3BFB1L,0x8482E40AL,(-1L),0x8482E40AL,0x1ED3BFB1L},{0x7619C6F2L,(-1L),(-1L),0x7619C6F2L,(-5L),0x7619C6F2L,(-1L),(-1L),0x7619C6F2L}},{{0x52A4E985L,0xCF99B61EL,0x6D59C3A3L,0xCF99B61EL,0x52A4E985L,(-3L),0x1ED3BFB1L,(-1L),0x1ED3BFB1L},{(-1L),(-5L),1L,1L,(-5L),(-1L),(-5L),1L,1L},{0x52A4E985L,(-3L),0x1ED3BFB1L,(-1L),0x1ED3BFB1L,(-3L),0x52A4E985L,0xCF99B61EL,0x6D59C3A3L}},{{0x7619C6F2L,(-5L),0x7619C6F2L,(-1L),(-1L),0x7619C6F2L,(-5L),0x7619C6F2L,(-1L)},{(-4L),0xCF99B61EL,0x1ED3BFB1L,0x8482E40AL,(-1L),0x8482E40AL,0x1ED3BFB1L,0xCF99B61EL,(-4L)},{0xC74D2140L,(-1L),1L,(-1L),0xC74D2140L,0xC74D2140L,(-1L),1L,(-1L)}},{{0x1ED3BFB1L,0x694970F5L,0x6D59C3A3L,(-1L),(-1L),0xCF99B61EL,(-1L),(-1L),0x6D59C3A3L},{0xC74D2140L,0xC74D2140L,(-1L),1L,(-1L),0xC74D2140L,0xC74D2140L,(-1L),1L},{(-4L),0x694970F5L,(-4L),0xCF99B61EL,0x1ED3BFB1L,0x8482E40AL,(-1L),0x8482E40AL,0x1ED3BFB1L}}};
                        uint64_t *l_386 = &l_372[3].f1.f0;
                        uint64_t *l_389[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_389[i] = &g_262;
                        if (g_150)
                            goto lbl_377;
                        l_381[1][1]--;
                        (*l_326) = (safe_sub_func_uint32_t_u_u(((l_313[(g_38.f0 + 1)][(l_147.f0 + 1)] <= p_111) != (1L >= (((((l_318 &= ((l_380 || ((p_111 & (l_126 &= ((*l_386)++))) & ((l_372[g_371.f1.f0].f0 && (*l_326)) , 0x3E8A2A857ABA26CFLL))) >= 0x3E3075481A67B9ECLL)) | g_248) || p_111) >= (*g_8)) & l_381[1][1]))), l_147.f0));
                    }
                    if (g_39)
                        continue;
                    (*l_327) &= (safe_lshift_func_uint8_t_u_s((((*l_392) = (void*)0) == &g_140), 4));
                }
                (*l_396) = l_394;
                (*l_327) = ((*l_326) ^= (!(((l_379[6][2][1] ^= 1UL) && ((l_365 && l_372[g_371.f1.f0].f3) == ((l_372[g_371.f1.f0].f0 || ((*l_413) = ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((g_38 , (!l_372[g_371.f1.f0].f2)) && 0xE22FE3B4D8D37606LL), (safe_unary_minus_func_uint16_t_u(0xAB8CL)))), 10)), (safe_sub_func_int32_t_s_s(((safe_div_func_int16_t_s_s((l_379[6][2][1] , g_38.f2), l_379[3][3][0])) == l_412[0]), 0x0D94507BL)))) < 0x1182DDDCL))) > 0UL))) != l_365)));
            }
            (*l_327) |= (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((*l_326), (((l_421 = l_418) != (g_96 , g_422)) <= (*p_110)))), 2));
        }
    }
    for (g_229 = (-21); (g_229 >= (-8)); g_229 = safe_add_func_int64_t_s_s(g_229, 2))
    {
        union U5 l_428 = {0};
        struct S0 l_429 = {1UL};
        int32_t l_464[4][3][9] = {{{(-1L),(-9L),(-9L),(-1L),0L,0L,(-1L),0x2433469AL,(-1L)},{0x95F55AF5L,0L,0L,0x343A8D19L,0x30436C59L,1L,0x88637AB9L,0xF76F243DL,(-1L)},{0xFC6CE2F4L,0L,0x2433469AL,0L,0L,0x2433469AL,0L,0xFC6CE2F4L,0x5E3DE920L}},{{(-1L),0x343A8D19L,8L,0x86DE8318L,1L,(-4L),0x88637AB9L,(-3L),0L},{0L,0xFC6CE2F4L,0L,0x5E3DE920L,(-9L),(-1L),(-1L),(-9L),0x5E3DE920L},{0xA0FAB284L,0xC37CB852L,0xA0FAB284L,0xB0391536L,0x88637AB9L,0x2D0E156FL,0x95F55AF5L,1L,(-1L)}},{{0L,0xFC6CE2F4L,0L,0xFC6CE2F4L,0L,0x5E3DE920L,(-9L),(-1L),(-1L)},{8L,0x343A8D19L,(-1L),0xB0391536L,(-1L),0x343A8D19L,0xBFD57F4BL,(-4L),(-1L)},{0L,0L,(-1L),(-1L),0L,(-1L),(-1L),0L,0L}},{{(-1L),0x343A8D19L,0xA0FAB284L,(-4L),0x82638BEDL,1L,0x82638BEDL,(-4L),0xA0FAB284L},{(-1L),(-1L),(-9L),0x5E3DE920L,0L,0xFC6CE2F4L,0L,0xFC6CE2F4L,0L},{(-1L),0xB0391536L,0x82638BEDL,0xF76F243DL,0x30436C59L,0x2D0E156FL,8L,0xB212BE98L,8L}}};
        struct S0 *l_466 = (void*)0;
        uint32_t l_562 = 8UL;
        union U5 *l_564 = &g_96;
        union U5 **l_563 = &l_564;
        union U5 * const l_611 = &g_612;
        union U5 * const *l_610 = &l_611;
        struct S3 * const l_643 = &g_325;
        int i, j, k;
    }
    return p_111;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f1.f0, "g_33.f1.f0", print_hash_value);
    transparent_crc(g_33.f2, "g_33.f2", print_hash_value);
    transparent_crc(g_33.f3, "g_33.f3", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_38.f1, "g_38.f1", print_hash_value);
    transparent_crc(g_38.f2, "g_38.f2", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_186[i][j][k], "g_186[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_230.f0, "g_230.f0", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_325.f0, "g_325.f0", print_hash_value);
    transparent_crc(g_325.f1.f0, "g_325.f1.f0", print_hash_value);
    transparent_crc(g_325.f2, "g_325.f2", print_hash_value);
    transparent_crc(g_325.f3, "g_325.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_358[i], "g_358[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_371.f0, "g_371.f0", print_hash_value);
    transparent_crc(g_371.f1.f0, "g_371.f1.f0", print_hash_value);
    transparent_crc(g_371.f2, "g_371.f2", print_hash_value);
    transparent_crc(g_371.f3, "g_371.f3", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_490.f0, "g_490.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_494[i][j][k], "g_494[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_535[i], "g_535[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_540.f0, "g_540.f0", print_hash_value);
    transparent_crc(g_540.f1, "g_540.f1", print_hash_value);
    transparent_crc(g_540.f2, "g_540.f2", print_hash_value);
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    transparent_crc(g_797, "g_797", print_hash_value);
    transparent_crc(g_801, "g_801", print_hash_value);
    transparent_crc(g_805, "g_805", print_hash_value);
    transparent_crc(g_856.f0, "g_856.f0", print_hash_value);
    transparent_crc(g_856.f1, "g_856.f1", print_hash_value);
    transparent_crc(g_856.f2, "g_856.f2", print_hash_value);
    transparent_crc(g_856.f3, "g_856.f3", print_hash_value);
    transparent_crc(g_856.f4, "g_856.f4", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1065[i].f0, "g_1065[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1091.f0, "g_1091.f0", print_hash_value);
    transparent_crc(g_1091.f1, "g_1091.f1", print_hash_value);
    transparent_crc(g_1091.f2, "g_1091.f2", print_hash_value);
    transparent_crc(g_1091.f3, "g_1091.f3", print_hash_value);
    transparent_crc(g_1091.f4, "g_1091.f4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1113[i], "g_1113[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1114[i], "g_1114[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1129, "g_1129", print_hash_value);
    transparent_crc(g_1130, "g_1130", print_hash_value);
    transparent_crc(g_1132, "g_1132", print_hash_value);
    transparent_crc(g_1507, "g_1507", print_hash_value);
    transparent_crc(g_1574, "g_1574", print_hash_value);
    transparent_crc(g_1634, "g_1634", print_hash_value);
    transparent_crc(g_1848, "g_1848", print_hash_value);
    transparent_crc(g_1925, "g_1925", print_hash_value);
    transparent_crc(g_1980.f0, "g_1980.f0", print_hash_value);
    transparent_crc(g_1980.f1, "g_1980.f1", print_hash_value);
    transparent_crc(g_1980.f2, "g_1980.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2048[i], "g_2048[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2082, "g_2082", print_hash_value);
    transparent_crc(g_2094, "g_2094", print_hash_value);
    transparent_crc(g_2102, "g_2102", print_hash_value);
    transparent_crc(g_2160, "g_2160", print_hash_value);
    transparent_crc(g_2238, "g_2238", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2239[i], "g_2239[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2317[i].f0, "g_2317[i].f0", print_hash_value);
        transparent_crc(g_2317[i].f1.f0, "g_2317[i].f1.f0", print_hash_value);
        transparent_crc(g_2317[i].f2, "g_2317[i].f2", print_hash_value);
        transparent_crc(g_2317[i].f3, "g_2317[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2378, "g_2378", print_hash_value);
    transparent_crc(g_2379, "g_2379", print_hash_value);
    transparent_crc(g_2489, "g_2489", print_hash_value);
    transparent_crc(g_2517, "g_2517", print_hash_value);
    transparent_crc(g_2572, "g_2572", print_hash_value);
    transparent_crc(g_2574, "g_2574", print_hash_value);
    transparent_crc(g_2575, "g_2575", print_hash_value);
    transparent_crc(g_2606, "g_2606", print_hash_value);
    transparent_crc(g_2608, "g_2608", print_hash_value);
    transparent_crc(g_2610, "g_2610", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2678[i].f0, "g_2678[i].f0", print_hash_value);
        transparent_crc(g_2678[i].f1, "g_2678[i].f1", print_hash_value);
        transparent_crc(g_2678[i].f2, "g_2678[i].f2", print_hash_value);
        transparent_crc(g_2678[i].f3, "g_2678[i].f3", print_hash_value);
        transparent_crc(g_2678[i].f4, "g_2678[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2749, "g_2749", print_hash_value);
    transparent_crc(g_2916, "g_2916", print_hash_value);
    transparent_crc(g_2917, "g_2917", print_hash_value);
    transparent_crc(g_2918, "g_2918", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
