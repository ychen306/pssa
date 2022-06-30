// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = F4D33773
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
   const uint64_t f0;
   const int16_t f1;
   int64_t f2;
   int8_t * const f3;
   uint64_t f4;
};

union U1 {
   const int32_t f0;
};

union U2 {
   uint8_t f0;
   int32_t f1;
   const int8_t f2;
   uint8_t f3;
   const signed f4 : 20;
};

union U3 {
   int8_t f0;
   const uint8_t f1;
};


static int32_t g_3 = 9L;
static int32_t g_4 = 0xCBA86BA4L;
static union U2 g_15[4] = {{0x2FL},{0x2FL},{0x2FL},{0x2FL}};
static const int8_t *g_33[9][8] = {{&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2},{&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,(void*)0,&g_15[3].f2},{&g_15[3].f2,&g_15[3].f2,(void*)0,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2},{&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2},{&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,(void*)0,(void*)0,&g_15[3].f2,&g_15[3].f2},{&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2},{&g_15[3].f2,&g_15[3].f2,(void*)0,&g_15[3].f2,&g_15[3].f2,(void*)0,&g_15[3].f2,&g_15[3].f2},{&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2},{&g_15[3].f2,&g_15[3].f2,(void*)0,(void*)0,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2,&g_15[3].f2}};
static int32_t g_38[9] = {0x3B91359AL,0x3B91359AL,0x3B91359AL,0x3B91359AL,0x3B91359AL,0x3B91359AL,0x3B91359AL,0x3B91359AL,0x3B91359AL};
static int32_t g_41 = 0L;
static int32_t g_44[10] = {2L,0xC837E05AL,2L,0xC837E05AL,2L,0xC837E05AL,2L,0xC837E05AL,2L,0xC837E05AL};
static uint64_t g_74 = 0x62E43232AF72DA61LL;
static uint64_t g_78[6][4][6] = {{{0xCD76E668196E547ELL,0x32D9FB0E7FB9BE98LL,18446744073709551615UL,0xBD5D228C8C4E1B82LL,1UL,0xCD76E668196E547ELL},{0x700A5FF0F9AB13FDLL,0xCD76E668196E547ELL,18446744073709551615UL,0x0DD78FD71F6E690DLL,8UL,1UL},{8UL,0x0DD78FD71F6E690DLL,0xCD76E668196E547ELL,1UL,0x80EDED6215A4C4AELL,1UL},{1UL,0x80EDED6215A4C4AELL,1UL,0xCD76E668196E547ELL,0x0DD78FD71F6E690DLL,8UL}},{{1UL,8UL,0x0DD78FD71F6E690DLL,18446744073709551615UL,0xCD76E668196E547ELL,0x700A5FF0F9AB13FDLL},{0xCD76E668196E547ELL,1UL,0xBD5D228C8C4E1B82LL,18446744073709551615UL,0x32D9FB0E7FB9BE98LL,0xCD76E668196E547ELL},{1UL,5UL,0UL,0xCD76E668196E547ELL,8UL,8UL},{1UL,0x52604697E54B5300LL,0x52604697E54B5300LL,1UL,9UL,0x9C4BD7DA5A1D0197LL}},{{8UL,18446744073709551615UL,1UL,0x0DD78FD71F6E690DLL,0x6B9930EDDB647B0CLL,1UL},{0x700A5FF0F9AB13FDLL,8UL,5UL,0xBD5D228C8C4E1B82LL,0x6B9930EDDB647B0CLL,0x5930CB0470BDE7D1LL},{0xCD76E668196E547ELL,18446744073709551615UL,1UL,0UL,9UL,0xCD76E668196E547ELL},{8UL,0x52604697E54B5300LL,0x846FFD3C4F9076B3LL,0x52604697E54B5300LL,8UL,18446744073709551609UL}},{{0x9C4BD7DA5A1D0197LL,5UL,0x6B9930EDDB647B0CLL,1UL,0x32D9FB0E7FB9BE98LL,0x96AAD9F1AA4961F0LL},{1UL,1UL,1UL,5UL,0xCD76E668196E547ELL,0x96AAD9F1AA4961F0LL},{0x5930CB0470BDE7D1LL,8UL,0x6B9930EDDB647B0CLL,1UL,0x0DD78FD71F6E690DLL,18446744073709551609UL},{0xCD76E668196E547ELL,0x80EDED6215A4C4AELL,0x846FFD3C4F9076B3LL,0x846FFD3C4F9076B3LL,0x80EDED6215A4C4AELL,0xCD76E668196E547ELL}},{{18446744073709551609UL,0x0DD78FD71F6E690DLL,1UL,0x6B9930EDDB647B0CLL,8UL,0x5930CB0470BDE7D1LL},{0x96AAD9F1AA4961F0LL,0xCD76E668196E547ELL,5UL,1UL,1UL,1UL},{0x96AAD9F1AA4961F0LL,0x32D9FB0E7FB9BE98LL,1UL,0x6B9930EDDB647B0CLL,5UL,0x9C4BD7DA5A1D0197LL},{18446744073709551609UL,8UL,0x52604697E54B5300LL,0x846FFD3C4F9076B3LL,0x52604697E54B5300LL,8UL}},{{0xCD76E668196E547ELL,9UL,0UL,1UL,18446744073709551615UL,0xCD76E668196E547ELL},{0x5930CB0470BDE7D1LL,0x6B9930EDDB647B0CLL,0xBD5D228C8C4E1B82LL,5UL,8UL,0x700A5FF0F9AB13FDLL},{1UL,0x6B9930EDDB647B0CLL,0x0DD78FD71F6E690DLL,1UL,18446744073709551615UL,8UL},{0x9C4BD7DA5A1D0197LL,9UL,1UL,0x52604697E54B5300LL,1UL,0xBD5D228C8C4E1B82LL}}};
static int64_t g_83 = 0x7B3CACAAAB22D3B6LL;
static uint8_t g_104 = 0xE0L;
static int8_t g_105 = 0x79L;
static uint8_t *g_171 = &g_104;
static uint16_t g_175 = 1UL;
static uint16_t g_177 = 65535UL;
static uint32_t g_182[9] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static int16_t g_206 = 3L;
static union U1 g_218[3][1][8] = {{{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}},{{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}},{{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}}};
static union U3 g_221 = {8L};
static int8_t * const g_225 = (void*)0;
static int8_t * const *g_224 = &g_225;
static int8_t * const **g_223[6] = {&g_224,&g_224,&g_224,&g_224,&g_224,&g_224};
static uint8_t g_242 = 0xA8L;
static const int32_t g_246 = 7L;
static const int32_t *g_245[4][1][5] = {{{&g_218[0][0][4].f0,&g_218[0][0][4].f0,&g_246,&g_246,&g_218[0][0][4].f0}},{{&g_218[0][0][4].f0,&g_218[0][0][4].f0,&g_218[0][0][4].f0,&g_218[0][0][4].f0,&g_218[0][0][4].f0}},{{&g_218[0][0][4].f0,&g_246,&g_246,&g_218[0][0][4].f0,&g_218[0][0][4].f0}},{{&g_218[0][0][4].f0,&g_218[0][0][4].f0,&g_218[0][0][4].f0,&g_218[0][0][4].f0,&g_218[0][0][4].f0}}};
static int64_t g_264 = 0x991BF46D65B00D46LL;
static union U2 *g_278 = &g_15[2];
static union U2 **g_277[6][6] = {{&g_278,&g_278,&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_278,(void*)0,(void*)0,&g_278},{&g_278,&g_278,(void*)0,&g_278,(void*)0,&g_278},{&g_278,&g_278,&g_278,&g_278,(void*)0,(void*)0},{&g_278,&g_278,&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,(void*)0,&g_278,&g_278,&g_278}};
static uint8_t g_301 = 0xD1L;
static union U2 g_322 = {0xD6L};
static int16_t g_331 = (-1L);
static int64_t *g_473[3][9] = {{(void*)0,(void*)0,&g_264,&g_264,(void*)0,(void*)0,&g_264,(void*)0,(void*)0},{(void*)0,&g_264,&g_264,(void*)0,&g_264,(void*)0,&g_264,(void*)0,&g_264},{&g_264,&g_264,&g_264,(void*)0,&g_264,(void*)0,&g_264,&g_264,&g_264}};
static int64_t **g_472 = &g_473[2][4];
static int64_t ***g_471 = &g_472;
static union U0 g_486 = {0x34EAB1FBFCC43FD2LL};
static union U3 *g_508 = &g_221;
static union U3 **g_507 = &g_508;
static int64_t ** const *g_540[2][9][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static int32_t *g_565 = &g_3;
static int8_t g_576 = 0x8CL;
static int64_t g_599 = 0x30E7A6A168FF8E28LL;
static const int32_t ***g_675 = (void*)0;
static uint32_t g_802[1][6] = {{0x630F8042L,0x630F8042L,18446744073709551615UL,0x630F8042L,0x630F8042L,18446744073709551615UL}};
static uint64_t g_880 = 18446744073709551615UL;
static uint32_t g_913 = 0x2E99A2CFL;
static int8_t * const **g_958 = (void*)0;
static union U2 g_989 = {0x5BL};
static int64_t g_1013 = 1L;
static int64_t g_1014 = 0x8DF323D9FF0BF4FCLL;
static int64_t g_1015[7] = {3L,3L,(-1L),3L,3L,(-1L),3L};
static int32_t g_1044 = 0xB11B6A57L;
static int32_t g_1068 = 1L;
static const uint32_t g_1075 = 0x69FB557BL;
static int32_t * const ***g_1110 = (void*)0;
static union U2 g_1128 = {0xBAL};
static union U0 g_1206 = {0xF729B98873B5C81ALL};
static int8_t ***g_1247 = (void*)0;
static int8_t ***g_1249 = (void*)0;
static union U3 ***g_1265 = &g_507;
static union U3 ****g_1264 = &g_1265;
static int16_t g_1299[2] = {0xAD04L,0xAD04L};
static int32_t *g_1329 = &g_38[8];
static uint8_t * const *g_1409[9] = {&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171};
static int64_t g_1423[6] = {1L,1L,1L,1L,1L,1L};
static const int64_t g_1570[2][1] = {{0x010BE4606CBE23DFLL},{0x010BE4606CBE23DFLL}};
static const int64_t *g_1569[1][6][3] = {{{&g_1570[0][0],&g_1570[0][0],&g_1570[0][0]},{&g_1570[0][0],&g_1570[0][0],&g_1570[0][0]},{&g_1570[0][0],&g_1570[0][0],&g_1570[0][0]},{&g_1570[0][0],&g_1570[0][0],&g_1570[0][0]},{&g_1570[0][0],&g_1570[0][0],&g_1570[0][0]},{&g_1570[0][0],&g_1570[0][0],&g_1570[0][0]}}};
static const int64_t **g_1568 = &g_1569[0][1][1];
static const int64_t ***g_1567 = &g_1568;
static union U0 **g_1612 = (void*)0;
static int64_t g_1618[2][10] = {{0x4A3F39C4BB283E21LL,0x465CFB9E4EEE1BE3LL,0x4A3F39C4BB283E21LL,0x465CFB9E4EEE1BE3LL,0x4A3F39C4BB283E21LL,0x465CFB9E4EEE1BE3LL,0x4A3F39C4BB283E21LL,0x465CFB9E4EEE1BE3LL,0x4A3F39C4BB283E21LL,0x465CFB9E4EEE1BE3LL},{1L,0x465CFB9E4EEE1BE3LL,1L,0x465CFB9E4EEE1BE3LL,1L,0x465CFB9E4EEE1BE3LL,1L,0x465CFB9E4EEE1BE3LL,1L,0x465CFB9E4EEE1BE3LL}};
static union U2 g_1648 = {0x88L};
static uint16_t g_1707 = 0x90CCL;
static uint64_t *g_1724 = &g_78[5][3][5];
static uint64_t * const *g_1723 = &g_1724;
static union U2 *g_1750 = &g_322;
static union U2 ** const g_1749 = &g_1750;
static union U2 ** const *g_1748[9][1][3] = {{{&g_1749,&g_1749,(void*)0}},{{&g_1749,&g_1749,&g_1749}},{{&g_1749,&g_1749,(void*)0}},{{&g_1749,&g_1749,&g_1749}},{{&g_1749,&g_1749,(void*)0}},{{&g_1749,&g_1749,&g_1749}},{{&g_1749,&g_1749,(void*)0}},{{&g_1749,&g_1749,&g_1749}},{{&g_1749,&g_1749,&g_1749}}};
static uint16_t g_1776 = 1UL;
static uint16_t * const *g_1836 = (void*)0;
static union U1 g_1887[4] = {{0xB4CD1CE4L},{0xB4CD1CE4L},{0xB4CD1CE4L},{0xB4CD1CE4L}};
static union U1 *g_1886 = &g_1887[3];
static union U3 g_1922[5] = {{0L},{0L},{0L},{0L},{0L}};
static int16_t *g_1930[3] = {&g_206,&g_206,&g_206};
static int16_t **g_1929 = &g_1930[1];
static const union U3 *g_1952 = (void*)0;
static uint32_t **g_1958 = (void*)0;
static uint32_t **g_1961 = (void*)0;
static int64_t *** const *g_2026 = (void*)0;
static uint32_t g_2074[6][6] = {{0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L},{0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L},{0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L},{0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L},{0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L},{0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L,0xA50F2DC7L}};
static const union U3 **g_2125 = &g_1952;
static int8_t g_2149 = 0x58L;
static union U1 **g_2264[3][10][6] = {{{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886}},{{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886}},{{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886},{&g_1886,&g_1886,&g_1886,&g_1886,&g_1886,&g_1886}}};
static int64_t ****g_2343 = (void*)0;
static int64_t *****g_2342 = &g_2343;
static uint8_t g_2363 = 0xB8L;
static uint32_t g_2371 = 0xA82B7DB7L;
static int32_t g_2372 = 0x8C969876L;



static uint16_t func_1(void);
static int32_t * const func_5(union U2 p_6, int8_t * const p_7);
static union U2 func_8(uint32_t p_9, int32_t * p_10);
static union U2 func_12(int32_t p_13, int32_t * p_14);
static union U1 func_23(int32_t * const p_24, uint16_t p_25, union U0 p_26);
static union U1 func_28(const int8_t * p_29, const uint64_t p_30, int64_t p_31, uint32_t p_32);
static uint32_t func_60(int8_t p_61, uint64_t p_62, int32_t * p_63, const int64_t p_64, uint8_t p_65);
static int8_t func_66(const uint32_t p_67);
static const uint8_t func_86(int64_t * p_87, int32_t * const p_88, uint64_t * p_89, int8_t p_90);
static union U1 func_91(union U2 p_92, int8_t p_93, const union U1 p_94);
# 160 "<stdin>"
static uint16_t func_1(void)
{
    int32_t l_2[9] = {9L,9L,9L,9L,9L,9L,9L,9L,9L};
    int32_t *l_11 = &g_4;
    int16_t *l_1893 = &g_1299[1];
    int16_t l_1908 = 0L;
    union U3 *l_1921 = &g_1922[2];
    union U1 *l_1942 = &g_1887[1];
    int64_t ****l_1983 = &g_471;
    int64_t l_2033 = 1L;
    uint8_t l_2035[2];
    uint16_t l_2095[3][5] = {{0x886AL,0xFDBEL,0xFDBEL,0x886AL,0xFDBEL},{0x2ED3L,0x2ED3L,65534UL,0x2ED3L,0x2ED3L},{0xFDBEL,0x886AL,0xFDBEL,0xFDBEL,0x886AL}};
    int32_t l_2100 = 1L;
    int32_t l_2101 = 0x0E3CB958L;
    int8_t * const ***l_2110 = &g_223[1];
    union U0 *l_2163 = &g_486;
    int32_t l_2207 = 0x704393EDL;
    int32_t l_2220 = 0x9A44407AL;
    int8_t l_2228[3];
    int32_t l_2231 = 0L;
    int32_t l_2232 = 0L;
    int32_t l_2233 = 1L;
    int32_t l_2235 = 0xCDD71311L;
    int32_t l_2236 = 0xF61D24E6L;
    int32_t l_2237 = 1L;
    int32_t l_2240 = 0xFA9D9DEDL;
    int64_t l_2297 = 0xDC104526038F21E5LL;
    union U1 **l_2301 = &l_1942;
    int16_t l_2305 = 0xF355L;
    uint32_t l_2318[9] = {0xF25CCADDL,0xF25CCADDL,0xF25CCADDL,0xF25CCADDL,0xF25CCADDL,0xF25CCADDL,0xF25CCADDL,0xF25CCADDL,0xF25CCADDL};
    uint16_t l_2327 = 0UL;
    uint8_t l_2370 = 255UL;
    uint8_t **l_2390 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
        l_2035[i] = 0x1EL;
    for (i = 0; i < 3; i++)
        l_2228[i] = 0x11L;
    for (g_3 = 8; (g_3 >= 0); g_3 -= 1)
    {
        int32_t l_18 = 1L;
        union U0 l_881 = {0xA3600A2854CE10ADLL};
        int32_t *l_1971[6];
        int8_t * const ***l_2113 = &g_223[2];
        union U3 ***l_2135 = &g_507;
        uint64_t l_2162 = 0xFF72EFB8FDDE27C6LL;
        uint8_t l_2175 = 0x98L;
        int16_t l_2226 = 4L;
        union U1 **l_2263 = &l_1942;
        const int8_t *l_2266 = &g_1128.f2;
        const union U2 l_2267 = {0xBAL};
        int64_t ***l_2268 = &g_472;
        int64_t l_2270 = 0L;
        union U1 **l_2291 = (void*)0;
        int32_t *l_2331 = &l_2232;
        int64_t *****l_2344 = (void*)0;
        int8_t *l_2359 = &g_1922[2].f0;
        uint32_t l_2362 = 0x5CBE9FF7L;
        uint16_t l_2364 = 0x9083L;
        int16_t *l_2365 = &g_331;
        int16_t *l_2366 = &l_2305;
        int16_t *l_2367 = (void*)0;
        int16_t *l_2368[9] = {&l_1908,(void*)0,&l_1908,(void*)0,&l_1908,(void*)0,&l_1908,(void*)0,&l_1908};
        uint32_t l_2369 = 0xBE148189L;
        uint64_t l_2393 = 0UL;
        int i;
        for (i = 0; i < 6; i++)
            l_1971[i] = &g_4;
        for (g_4 = 0; (g_4 <= 8); g_4 += 1)
        {
            int32_t * const l_27[3][8] = {{&g_3,&g_4,&g_4,&g_3,&g_4,&g_4,&g_3,&g_4},{&g_3,&g_3,&g_4,&g_3,&g_3,&g_4,&g_3,&g_3},{&g_4,&g_3,&g_4,&g_4,&g_3,&g_4,&g_4,&g_3}};
            int8_t * const l_1434 = &g_576;
            int32_t **l_1889 = (void*)0;
            int32_t **l_1890 = &g_1329;
            int i, j;
            (*l_1890) = func_5(func_8((l_11 == (func_12((g_1423[4] |= (((g_15[3] , (safe_add_func_int64_t_s_s((((((l_2[g_4] && l_18) != (safe_add_func_uint16_t_u_u(g_15[3].f3, (g_15[3].f0 > ((safe_add_func_uint64_t_u_u((func_23(l_27[0][4], g_15[3].f3, ((g_880 = ((func_28(g_33[6][3], g_15[3].f2, g_15[3].f2, g_3) , l_18) , (*l_11))) , l_881)) , 0xA47845AADA00F636LL), 7L)) ^ (*l_11)))))) & g_15[3].f3) != l_881.f1) | l_18), g_1206.f4))) ^ 1L) != g_246)), &g_3) , &g_44[8])), l_11), l_1434);
            return l_881.f1;
        }
        for (g_989.f1 = 7; (g_989.f1 >= 2); g_989.f1 -= 1)
        {
            union U0 l_1898 = {1UL};
            int32_t *l_1907 = &g_44[0];
            const union U1 l_1909 = {1L};
            uint16_t *l_1910 = &g_177;
            int64_t ***l_1915[4][9] = {{&g_472,(void*)0,&g_472,&g_472,(void*)0,&g_472,&g_472,&g_472,&g_472},{&g_472,&g_472,&g_472,&g_472,&g_472,&g_472,&g_472,&g_472,&g_472},{(void*)0,&g_472,&g_472,(void*)0,&g_472,&g_472,&g_472,&g_472,(void*)0},{&g_472,&g_472,&g_472,&g_472,&g_472,&g_472,&g_472,&g_472,&g_472}};
            const uint8_t l_1940 = 246UL;
            uint32_t *l_1960 = &g_182[6];
            uint32_t **l_1959 = &l_1960;
            int32_t *l_1970 = &g_44[5];
            uint32_t l_2049 = 4294967289UL;
            int32_t l_2103 = 1L;
            int32_t *l_2109 = &l_2101;
            union U2 l_2118 = {249UL};
            uint64_t l_2211 = 0xF298944FB3F689F9LL;
            int32_t l_2224 = (-4L);
            int32_t l_2227 = 5L;
            int32_t l_2230 = (-1L);
            int32_t l_2234 = (-8L);
            int16_t l_2238 = 0xB183L;
            int32_t l_2239[1][6][9] = {{{0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L},{0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L},{0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L},{0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L},{0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L,0x407ABAA9L},{0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L,0xB866D054L}}};
            int16_t l_2271 = 0x6E62L;
            union U1 **l_2272 = &g_1886;
            int i, j, k;
        }
    }
    return g_1648.f3;
}







static int32_t * const func_5(union U2 p_6, int8_t * const p_7)
{
    uint32_t l_1456 = 1UL;
    union U3 * const l_1506 = (void*)0;
    int32_t **l_1536[4][1][4] = {{{&g_1329,&g_1329,&g_1329,&g_565}},{{(void*)0,&g_1329,(void*)0,&g_1329}},{{(void*)0,&g_1329,&g_1329,(void*)0}},{{&g_1329,&g_1329,&g_565,&g_1329}}};
    int32_t ***l_1535 = &l_1536[0][0][2];
    union U3 l_1571 = {-1L};
    int16_t l_1635 = (-1L);
    union U2 *l_1647[9] = {&g_15[0],&g_1648,&g_15[0],&g_15[0],&g_1648,&g_15[0],&g_15[0],&g_1648,&g_15[0]};
    union U3 ****l_1663 = &g_1265;
    int16_t l_1696[3][10] = {{(-9L),0x316FL,0xD9FEL,0L,0x316FL,0L,0xD9FEL,0x316FL,(-9L),(-9L)},{3L,9L,(-6L),0x316FL,0x316FL,(-6L),9L,3L,(-6L),3L},{0x316FL,0xD9FEL,0L,0x316FL,0L,0xD9FEL,0x316FL,(-9L),(-9L),0x316FL}};
    uint64_t *l_1722 = &g_880;
    uint64_t ** const l_1721 = &l_1722;
    union U2 * const *l_1745 = &l_1647[7];
    union U2 * const **l_1744 = &l_1745;
    union U2 ** const *l_1746 = &g_277[2][5];
    uint16_t l_1752 = 0UL;
    int32_t l_1801 = 0L;
    uint64_t l_1806 = 1UL;
    uint64_t l_1818 = 6UL;
    const int16_t l_1827 = 0x7B66L;
    int i, j, k;
    for (g_83 = 0; (g_83 >= 25); g_83++)
    {
        uint64_t *l_1444 = &g_78[5][0][0];
        int32_t **l_1455 = &g_1329;
        int32_t ***l_1454 = &l_1455;
        int32_t ****l_1453 = &l_1454;
        int32_t l_1523 = 0L;
        int64_t l_1613 = (-1L);
        int32_t l_1616[2];
        int8_t l_1617 = (-1L);
        uint32_t l_1623 = 0xD733630CL;
        int8_t *l_1682[9][3] = {{&g_105,&g_105,&g_221.f0},{&g_576,&l_1571.f0,&g_576},{&g_576,&g_105,&g_576},{&g_576,&g_576,&g_105},{&g_576,&g_576,&g_576},{&g_105,&g_576,&g_576},{&l_1571.f0,&g_576,&g_221.f0},{&g_105,&g_105,&g_221.f0},{&g_576,&l_1571.f0,&g_576}};
        int8_t **l_1681 = &l_1682[8][1];
        int8_t * const *l_1684 = &l_1682[8][1];
        uint32_t l_1687[4][8] = {{0x86C8DF77L,0UL,0x86C8DF77L,0x86C8DF77L,0UL,0x86C8DF77L,0x86C8DF77L,0UL},{0UL,0x86C8DF77L,0x86C8DF77L,0UL,0x86C8DF77L,0x86C8DF77L,0UL,0x86C8DF77L},{0UL,0UL,0x273D789FL,0UL,0UL,0x273D789FL,0UL,0UL},{0x86C8DF77L,0UL,0x86C8DF77L,0x86C8DF77L,0UL,0x86C8DF77L,0x86C8DF77L,0UL}};
        union U3 l_1719 = {-8L};
        int64_t ****l_1738[8];
        int32_t **l_1794[1][5];
        uint64_t l_1850 = 1UL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1616[i] = (-1L);
        for (i = 0; i < 8; i++)
            l_1738[i] = &g_471;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_1794[i][j] = &g_1329;
        }
    }
    return &g_38[7];
}







static union U2 func_8(uint32_t p_9, int32_t * p_10)
{
    uint64_t l_1433 = 0x0E3B1EB47B49B101LL;
lbl_1430:
    for (g_206 = 0; (g_206 > (-27)); --g_206)
    {
        int32_t **l_1427 = &g_565;
        (*l_1427) = p_10;
        (*g_1329) = (safe_add_func_int8_t_s_s(0x62L, (**l_1427)));
        if (g_4)
            goto lbl_1430;
    }
    (*g_1329) = (safe_mul_func_uint8_t_u_u(p_9, l_1433));
    return (*g_278);
}







static union U2 func_12(int32_t p_13, int32_t * p_14)
{
    union U2 l_1424 = {5UL};
    return l_1424;
}







static union U1 func_23(int32_t * const p_24, uint16_t p_25, union U0 p_26)
{
    int32_t *l_882 = &g_44[5];
    uint64_t *l_894 = &g_486.f4;
    int32_t l_912[4][8][7] = {{{1L,1L,0x959F4205L,(-7L),0x782F2132L,0x3720CC9AL,(-1L)},{0x62703E74L,0xEEB9079DL,0xA9C88690L,0xF7A3FC2AL,0xCFA8E7E5L,(-1L),0xCFA8E7E5L},{1L,(-7L),(-7L),1L,1L,0x959F4205L,0x5B963E2BL},{0x3D941C6BL,(-4L),0xD15E9AEEL,(-1L),0x6851238CL,(-4L),0x5F07D85FL},{0x0D3D89DAL,(-4L),8L,(-7L),(-1L),0x0D3D89DAL,0x5B963E2BL},{(-1L),1L,(-1L),(-1L),0x62703E74L,0xB04EC839L,0xCFA8E7E5L},{0x782F2132L,(-1L),(-6L),0L,1L,0x5B963E2BL,(-1L)},{1L,0x102B14E0L,0xD15E9AEEL,0xB04EC839L,4L,0xB04EC839L,0xD15E9AEEL}},{{(-1L),(-1L),0x5B963E2BL,8L,0x782F2132L,0x0D3D89DAL,(-8L)},{(-8L),(-1L),0xA9C88690L,0x102B14E0L,(-8L),(-4L),0x62703E74L},{1L,(-1L),8L,1L,0x3720CC9AL,(-6L),0x9BCBC0CDL},{1L,(-4L),(-1L),0xEEB9079DL,0x3D941C6BL,0x7E506433L,0x5F07D85FL},{(-1L),1L,0xD245485FL,8L,(-1L),(-1L),0x959F4205L},{0x62703E74L,0x102B14E0L,(-1L),0xEEB9079DL,(-1L),0x102B14E0L,0x62703E74L},{0x782F2132L,0xD245485FL,0L,1L,(-4L),0x5B963E2BL,0xD245485FL},{0x01D05E03L,0x031D9291L,1L,0xB04EC839L,1L,0xF7A3FC2AL,0x5F07D85FL}},{{1L,(-1L),0L,(-1L),0x0D3D89DAL,0x3720CC9AL,(-8L)},{0xA9C88690L,0x7E506433L,(-1L),0xF7A3FC2AL,(-8L),(-1L),(-1L)},{(-4L),(-7L),0xD245485FL,1L,0x3720CC9AL,0x5B963E2BL,0x5B963E2BL},{0x6851238CL,0x7E506433L,(-1L),0x7E506433L,0x6851238CL,(-1L),(-8L)},{(-1L),(-1L),8L,0xD245485FL,1L,(-1L),0x9BCBC0CDL},{(-1L),0x031D9291L,0xCFA8E7E5L,0xEEB9079DL,(-8L),0xB04EC839L,(-8L)},{(-1L),0xD245485FL,0x959F4205L,0L,(-1L),(-6L),0xD245485FL},{0x6851238CL,0x102B14E0L,(-8L),1L,1L,0x102B14E0L,0xD15E9AEEL}},{{(-4L),1L,0L,0xD245485FL,0x782F2132L,0x782F2132L,0xD245485FL},{0xA9C88690L,(-4L),0xA9C88690L,0xB04EC839L,(-1L),(-1L),(-8L)},{1L,(-8L),(-1L),1L,0x0D3D89DAL,0x959F4205L,0x9BCBC0CDL},{0x01D05E03L,0x7E506433L,(-8L),(-1L),0x3D941C6BL,(-1L),(-8L)},{0x782F2132L,(-4L),0xD245485FL,(-1L),1L,0x782F2132L,0x5B963E2BL},{0x62703E74L,0xB04EC839L,0xCFA8E7E5L,0x7E506433L,0x62703E74L,0x102B14E0L,(-1L)},{(-1L),(-8L),(-6L),1L,1L,(-6L),(-8L)},{1L,0x031D9291L,(-1L),1L,0x3D941C6BL,0xB04EC839L,0x5F07D85FL}}};
    union U3 l_919[8][7] = {{{-5L},{-5L},{1L},{-5L},{-5L},{1L},{-5L}},{{-5L},{-3L},{-3L},{-5L},{-3L},{-3L},{-5L}},{{-3L},{-5L},{-3L},{-3L},{-5L},{-3L},{-3L}},{{-5L},{-5L},{1L},{-5L},{-5L},{1L},{-5L}},{{-5L},{-3L},{-3L},{-5L},{-3L},{-3L},{-5L}},{{-3L},{-5L},{-3L},{-3L},{-3L},{1L},{1L}},{{-3L},{-3L},{-5L},{-3L},{-3L},{-5L},{-3L}},{{-3L},{1L},{1L},{-3L},{1L},{1L},{-3L}}};
    union U0 *l_927[2][2][3] = {{{&g_486,&g_486,&g_486},{(void*)0,&g_486,&g_486}},{{(void*)0,(void*)0,&g_486},{&g_486,&g_486,&g_486}}};
    union U0 ** const l_926 = &l_927[1][1][0];
    const int8_t l_938[10] = {6L,0x32L,6L,6L,0x32L,6L,6L,0x32L,6L,6L};
    int64_t l_967 = (-3L);
    uint32_t l_1073 = 4294967295UL;
    const uint32_t l_1079 = 0xB073C55CL;
    union U2 *l_1081 = (void*)0;
    int8_t * const *l_1092[3];
    union U1 *l_1099 = &g_218[0][0][1];
    union U1 * const *l_1098 = &l_1099;
    uint8_t *l_1105 = &g_242;
    int16_t *l_1113 = &g_206;
    int32_t ** const l_1158[1] = {(void*)0};
    int32_t ** const *l_1157 = &l_1158[0];
    int64_t l_1224 = 0x63B8CF191C8B1C8BLL;
    int8_t ***l_1246 = (void*)0;
    union U3 ** const *l_1262 = &g_507;
    union U3 ** const **l_1261 = &l_1262;
    int32_t **l_1358[8];
    int32_t ***l_1357 = &l_1358[1];
    int32_t ****l_1356 = &l_1357;
    int32_t *****l_1355 = &l_1356;
    uint32_t *l_1422 = (void*)0;
    uint32_t **l_1421 = &l_1422;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1092[i] = &g_225;
    for (i = 0; i < 8; i++)
        l_1358[i] = &g_1329;
    l_882 = l_882;
    for (g_322.f1 = 0; (g_322.f1 >= 9); ++g_322.f1)
    {
        int32_t l_891[4][10][4] = {{{0x4A34CA2CL,0x08AB99F8L,(-10L),(-5L)},{6L,0L,(-10L),0xC5030938L},{0x4A34CA2CL,0xF85AC19FL,0x4A34CA2CL,(-8L)},{6L,(-1L),0x4A34CA2CL,1L},{0x4A34CA2CL,1L,(-10L),(-1L)},{6L,(-8L),(-10L),0xF85AC19FL},{0x4A34CA2CL,0xC5030938L,0x4A34CA2CL,0L},{6L,(-5L),0x4A34CA2CL,0x08AB99F8L},{0x4A34CA2CL,0x08AB99F8L,(-10L),(-5L)},{6L,0L,(-10L),0xC5030938L}},{{0x4A34CA2CL,0xF85AC19FL,0x4A34CA2CL,(-8L)},{6L,(-1L),0x4A34CA2CL,1L},{0x4A34CA2CL,1L,(-10L),(-1L)},{6L,(-8L),(-10L),0xF85AC19FL},{0x4A34CA2CL,0xC5030938L,0x4A34CA2CL,0L},{6L,(-5L),0x4A34CA2CL,0x08AB99F8L},{0x4A34CA2CL,0x08AB99F8L,(-10L),(-5L)},{6L,0L,(-10L),0xC5030938L},{0x4A34CA2CL,0xF85AC19FL,0x4A34CA2CL,(-8L)},{6L,(-1L),0x4A34CA2CL,1L}},{{0x4A34CA2CL,1L,(-10L),(-1L)},{6L,(-8L),(-10L),0xF85AC19FL},{0x4A34CA2CL,0xC5030938L,0x4A34CA2CL,0L},{6L,(-5L),0x4A34CA2CL,0x08AB99F8L},{0x4A34CA2CL,0x08AB99F8L,(-10L),(-5L)},{6L,0L,(-10L),0xC5030938L},{0x4A34CA2CL,0xF85AC19FL,0x4A34CA2CL,(-8L)},{6L,(-1L),0x4A34CA2CL,1L},{0x4A34CA2CL,1L,(-10L),(-1L)},{6L,(-8L),(-10L),0xF85AC19FL}},{{0x4A34CA2CL,0xC5030938L,0x4A34CA2CL,0L},{6L,(-5L),0x4A34CA2CL,0x08AB99F8L},{0x4A34CA2CL,0x08AB99F8L,(-10L),(-5L)},{6L,0L,(-10L),0xC5030938L},{0x4A34CA2CL,0xF85AC19FL,0x4A34CA2CL,(-8L)},{6L,(-1L),0x4A34CA2CL,1L},{0x4A34CA2CL,1L,(-10L),(-1L)},{6L,(-8L),(-10L),0xF85AC19FL},{0x4A34CA2CL,0xC5030938L,0x4A34CA2CL,0L},{6L,(-5L),0x4A34CA2CL,0x08AB99F8L}}};
        uint16_t *l_892 = &g_177;
        int32_t l_895 = 0x4590DDAAL;
        int64_t l_906 = 0x360238BC08AB45D8LL;
        union U3 **l_988 = &g_508;
        union U1 * const l_992[8][7] = {{&g_218[0][0][4],(void*)0,&g_218[0][0][4],(void*)0,&g_218[0][0][4],(void*)0,&g_218[0][0][4]},{&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4]},{&g_218[0][0][4],(void*)0,&g_218[0][0][4],(void*)0,&g_218[0][0][4],(void*)0,&g_218[0][0][4]},{&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4]},{&g_218[0][0][4],(void*)0,&g_218[0][0][4],(void*)0,&g_218[0][0][4],(void*)0,&g_218[0][0][4]},{&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4]},{&g_218[0][0][4],(void*)0,&g_218[0][0][4],(void*)0,&g_218[0][0][4],(void*)0,&g_218[0][0][4]},{&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4],&g_218[0][0][4]}};
        union U2 l_1022 = {0x97L};
        int32_t *l_1031 = &g_38[2];
        int32_t l_1036 = (-3L);
        int32_t l_1038 = 0x3B129174L;
        int32_t l_1041 = 0x8D27A124L;
        int32_t l_1045[2];
        uint8_t l_1046 = 0UL;
        uint32_t l_1100 = 4294967291UL;
        union U2 *l_1126 = &l_1022;
        union U2 *l_1127 = &g_1128;
        const union U3 *l_1149 = &g_221;
        const union U3 **l_1148 = &l_1149;
        const union U3 ***l_1147 = &l_1148;
        const union U3 ***l_1151 = &l_1148;
        int16_t l_1178 = 0x9632L;
        int32_t **l_1181 = &g_565;
        int32_t l_1182 = 0x242117DCL;
        int8_t *l_1187 = &g_105;
        int8_t l_1188 = 0xEBL;
        int64_t l_1194[1][4][9];
        union U1 l_1279 = {0x88FC29EAL};
        union U0 l_1316 = {7UL};
        int64_t ** const l_1393 = (void*)0;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1045[i] = (-9L);
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 9; k++)
                    l_1194[i][j][k] = 1L;
            }
        }
    }
    (*l_882) ^= (safe_add_func_uint64_t_u_u((((g_221.f1 || (*g_1329)) | ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(((*l_1355) != (*l_1355)), (safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((((**l_1261) == (void*)0) == (safe_unary_minus_func_uint64_t_u((((*l_1421) = &g_182[4]) != &l_1073)))) & (-4L)) || (-7L)), 0x45L)), p_26.f4)))), p_26.f1)) == (****l_1356))) , 0x5528D2AE404A1790LL), 0x957CC9AAF1D5C03ALL));
    return g_218[0][0][0];
}







static union U1 func_28(const int8_t * p_29, const uint64_t p_30, int64_t p_31, uint32_t p_32)
{
    int16_t l_779 = 7L;
    int32_t *l_796 = (void*)0;
    uint16_t l_871[9] = {0xDB5BL,0xDB5BL,0xDB5BL,0xDB5BL,0xDB5BL,0xDB5BL,0xDB5BL,0xDB5BL,0xDB5BL};
    int32_t *l_878 = (void*)0;
    int32_t *l_879 = &g_44[0];
    int i;
    for (p_32 = 11; (p_32 <= 11); ++p_32)
    {
        uint64_t l_47 = 6UL;
        int32_t l_751[10] = {0x4DEC0795L,0x4DEC0795L,0x4DEC0795L,0x4DEC0795L,0x4DEC0795L,0x4DEC0795L,0x4DEC0795L,0x4DEC0795L,0x4DEC0795L,0x4DEC0795L};
        int32_t l_858 = (-1L);
        int32_t l_859 = 0x035BBEB4L;
        int32_t l_864[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        union U1 l_867 = {6L};
        uint16_t *l_868 = (void*)0;
        int8_t *l_873 = &g_105;
        int i;
        for (p_31 = (-12); (p_31 > 5); ++p_31)
        {
            const uint16_t l_752 = 8UL;
            int32_t l_753 = 8L;
            int16_t l_792 = (-1L);
            union U1 l_835 = {0xC2F98EC1L};
            union U0 l_876[3] = {{0x0C934FDD167266CBLL},{0x0C934FDD167266CBLL},{0x0C934FDD167266CBLL}};
            int i;
            for (g_38[8] = 3; (g_38[8] == 17); g_38[8] = safe_add_func_uint64_t_u_u(g_38[8], 7))
            {
                int32_t *l_42 = (void*)0;
                int32_t *l_43 = &g_44[0];
                int32_t *l_45 = &g_44[6];
                int32_t *l_46 = &g_44[0];
                l_47++;
            }
            for (g_41 = 0; (g_41 <= 7); g_41 += 1)
            {
                int32_t l_791 = 0x41DD9C14L;
                int32_t *l_793 = &l_751[2];
                union U0 l_865 = {0x8750F94E9FF6EB88LL};
                int i, j;
                if ((safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(g_38[g_41], 6)), (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((func_60((l_751[2] &= func_66(p_32)), g_38[g_41], &g_4, (l_753 = l_752), g_38[g_41]) <= ((safe_sub_func_uint16_t_u_u(g_486.f2, p_31)) && l_47)) | 0UL) , 4UL), 6)), g_221.f1)))) || (-2L)), 0UL)))
                {
                    int64_t l_790 = 0x805C8A6FEE747790LL;
                    int32_t **l_794 = &l_793;
                    (*l_794) = ((((((g_576 >= (((safe_mod_func_uint16_t_u_u(1UL, ((safe_div_func_uint8_t_u_u((p_31 ^ l_779), l_752)) , (safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((safe_div_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(0x9FL, 0)), ((((g_182[4] != (((&g_182[0] == (void*)0) >= g_41) == 0xE6A9D74E683E4A43LL)) < l_790) != l_779) < p_32))) && l_791), p_32)) <= l_792), l_47)), p_31))))) != l_779) && p_31)) , g_15[3].f0) && l_790) >= (-7L)) & p_31) , l_793);
                    return g_218[0][0][4];
                }
                else
                {
                    int32_t **l_795 = &g_565;
                    int8_t l_801 = 1L;
                    int32_t *l_808[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_808[i] = &g_38[g_41];
                    (*l_795) = &l_751[2];
                    if (p_31)
                        break;
                    l_796 = (*l_795);
                    g_38[5] &= ((l_751[2] = ((safe_mod_func_uint8_t_u_u(l_753, p_31)) | 4294967291UL)) | (g_44[0] >= ((l_792 && p_30) ^ (safe_lshift_func_int8_t_s_s(((g_802[0][3] |= (l_801 &= l_792)) , (0x02L & (safe_add_func_int64_t_s_s(((+(((safe_lshift_func_int16_t_s_s((p_32 <= p_32), 13)) <= p_31) , (*g_171))) , 1L), 18446744073709551615UL)))), 2)))));
                }
                for (g_104 = 0; (g_104 <= 7); g_104 += 1)
                {
                    uint64_t *l_812 = &g_78[4][2][2];
                    int32_t l_834 = (-1L);
                    union U3 * const *l_861 = &g_508;
                    if ((safe_mul_func_uint16_t_u_u((~((((*l_812) = p_32) < (safe_add_func_int64_t_s_s(p_30, 0UL))) != (safe_lshift_func_uint16_t_u_u((!0xE7A58B27L), p_32)))), (((((g_206 = (((0x07E799691549CD6FLL && (safe_add_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((*g_171) || ((safe_sub_func_int16_t_s_s(g_301, ((safe_sub_func_uint32_t_u_u((l_751[1] = (safe_sub_func_uint8_t_u_u(l_753, p_31))), l_834)) , p_32))) ^ 1L)), 0x78FDL)) || (*g_171)), 2)), g_182[4])), p_32)) && l_834), p_30))) , l_835) , 0x780DL)) > 0x4F8FL) >= (*g_171)) || p_31) > p_30))))
                    {
                        uint8_t *l_857[1][1];
                        union U3 ***l_860 = &g_507;
                        int32_t l_862[9][9] = {{1L,0xFEFAF255L,1L,0xF06A1BACL,6L,0xA06B532AL,(-4L),7L,0xD849ADDBL},{0x603E85C7L,0xFF32AB47L,0x316147D7L,0x75CD51DEL,(-1L),0xF3863B2BL,(-1L),0x75CD51DEL,0x316147D7L},{0xD849ADDBL,0xD849ADDBL,0xFEFAF255L,0xF06A1BACL,1L,1L,1L,0L,0x8AFDA534L},{0L,0L,0xF3863B2BL,0x7F73DBD3L,0x1AF05108L,0x1AF05108L,0x7F73DBD3L,0xF3863B2BL,0L},{0xEF86F55BL,0x27225B98L,0xFEFAF255L,0x50FBDE9DL,0x8A1FBBF0L,0xF06A1BACL,0xD849ADDBL,1L,6L},{0x75CD51DEL,0L,0x316147D7L,0L,0x20BBFFB2L,0L,0x316147D7L,0L,0x75CD51DEL},{0x8A1FBBF0L,0x27225B98L,1L,0L,0xD849ADDBL,(-4L),0x8AFDA534L,0xFEFAF255L,0xA06B532AL},{0L,0L,0xF534720BL,0xF3863B2BL,0xF3863B2BL,0xF534720BL,0L,0L,(-10L)},{0x8A1FBBF0L,0xD849ADDBL,0x8AFDA534L,1L,7L,0xEF86F55BL,6L,0L,0L}};
                        uint64_t *l_863 = &l_47;
                        const uint16_t *l_866[9][9][3] = {{{&l_752,&g_177,&g_175},{&l_752,&l_752,&g_177},{&g_177,&g_175,(void*)0},{&g_175,&l_752,&g_175},{&l_752,&g_175,(void*)0},{&l_752,(void*)0,(void*)0},{(void*)0,&l_752,&g_175},{&g_177,&g_175,&g_175},{(void*)0,&l_752,&l_752}},{{&l_752,(void*)0,&g_177},{(void*)0,&l_752,(void*)0},{(void*)0,&g_175,&g_177},{(void*)0,&l_752,(void*)0},{&g_177,(void*)0,&g_177},{&l_752,&g_175,&l_752},{&g_177,(void*)0,&g_175},{(void*)0,&g_175,&g_175},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_175,(void*)0},{&l_752,(void*)0,(void*)0},{(void*)0,&l_752,&g_175},{&g_177,&g_175,&g_175},{(void*)0,&l_752,&l_752},{&l_752,(void*)0,&g_177},{(void*)0,&l_752,(void*)0},{(void*)0,&g_175,&g_177},{(void*)0,&l_752,(void*)0}},{{&g_177,(void*)0,&g_177},{&l_752,&g_175,&l_752},{&g_177,(void*)0,&g_175},{(void*)0,&g_175,&g_175},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_175,(void*)0},{&l_752,(void*)0,(void*)0},{(void*)0,&l_752,&g_175},{&g_177,&g_175,&g_175}},{{(void*)0,&l_752,&l_752},{&l_752,(void*)0,&g_177},{(void*)0,&l_752,(void*)0},{(void*)0,&g_175,&g_177},{(void*)0,&l_752,(void*)0},{&g_177,(void*)0,&g_177},{&l_752,&g_175,&l_752},{&g_177,(void*)0,&g_175},{(void*)0,&g_175,&g_175}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_175,(void*)0},{&l_752,(void*)0,(void*)0},{(void*)0,&l_752,&g_175},{&g_177,&g_175,&g_175},{(void*)0,&l_752,&l_752},{&l_752,(void*)0,&g_177},{(void*)0,&l_752,(void*)0},{(void*)0,&g_175,&g_177}},{{(void*)0,&l_752,(void*)0},{&g_177,(void*)0,&g_177},{&l_752,&g_175,&l_752},{&g_177,(void*)0,&g_175},{(void*)0,&g_175,&g_175},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_175,(void*)0},{&l_752,(void*)0,(void*)0},{(void*)0,&l_752,&g_175}},{{&g_177,&g_175,&g_175},{(void*)0,&l_752,&l_752},{&l_752,(void*)0,&g_177},{(void*)0,&l_752,(void*)0},{(void*)0,&g_175,&g_177},{&g_175,&g_175,&g_177},{&g_177,&g_177,&l_752},{&g_175,&g_175,&g_175},{&g_177,&g_177,(void*)0}},{{&g_175,(void*)0,&g_175},{&g_175,&g_177,&g_175},{&g_177,&g_175,&l_752},{&l_752,&g_177,&g_175},{&l_752,&g_175,&g_175},{&g_175,(void*)0,(void*)0},{&l_752,&l_752,&g_175},{&l_752,&g_177,&l_752},{&g_177,&l_752,&g_177}}};
                        int16_t *l_872 = &l_792;
                        int8_t **l_874 = &l_873;
                        int32_t **l_875 = &g_565;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_857[i][j] = &g_322.f3;
                        }
                        (*l_796) = (safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((((*l_793) >= (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((p_30 != ((~g_486.f1) | (l_752 <= (safe_div_func_int8_t_s_s((l_864[1] = ((safe_add_func_uint64_t_u_u(((*l_863) = ((*l_812) = ((safe_sub_func_uint32_t_u_u(((((((*l_860) = ((g_221.f1 > (safe_sub_func_int64_t_s_s((!(l_859 ^= (l_858 &= ((safe_div_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((((p_32 || p_30) > p_30) || (((g_38[8] && p_32) | 0x13E0AB6313009699LL) == 1UL)))), 1UL)) < l_751[2])))), l_834))) , &g_508)) == l_861) & 0L) >= l_862[3][2]) <= 0x17E0C197L), (*l_796))) && 0x330BL))), p_31)) != 18446744073709551610UL)), 0x28L))))), (-4L))), g_38[7]))) || p_30), (*l_793))), 1));
                        (*g_565) = ((g_206 != p_30) < ((l_753 = (l_865 , ((l_866[3][6][0] == (l_867 , l_868)) , (((l_752 & (((*l_874) = (((*l_872) = l_871[6]) , l_873)) != (*g_224))) >= (*l_793)) && p_32)))) == l_47));
                        (*l_875) = &l_862[5][0];
                        return l_835;
                    }
                    else
                    {
                        uint8_t *l_877 = &g_242;
                        (*l_793) = ((l_876[0] , (*l_796)) != ((*l_877) = (*g_171)));
                    }
                }
            }
        }
    }
    (*l_879) = l_779;
    return g_218[0][0][4];
}







static uint32_t func_60(int8_t p_61, uint64_t p_62, int32_t * p_63, const int64_t p_64, uint8_t p_65)
{
    union U0 l_756[7][4] = {{{0x5AABBD89EC0B05E7LL},{1UL},{1UL},{0x5AABBD89EC0B05E7LL}},{{18446744073709551611UL},{1UL},{0UL},{1UL}},{{1UL},{0x7E161472859EC389LL},{0UL},{0UL}},{{18446744073709551611UL},{18446744073709551611UL},{1UL},{0UL}},{{0x5AABBD89EC0B05E7LL},{0x7E161472859EC389LL},{0x5AABBD89EC0B05E7LL},{1UL}},{{0x5AABBD89EC0B05E7LL},{1UL},{1UL},{0x5AABBD89EC0B05E7LL}},{{18446744073709551611UL},{1UL},{0UL},{1UL}}};
    union U1 l_759 = {0L};
    union U2 **l_760 = (void*)0;
    union U2 **l_761 = &g_278;
    uint64_t *l_763[7][7] = {{&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5]},{&g_78[1][3][0],&g_74,&g_78[1][3][0],&g_74,&g_78[1][3][0],&g_74,&g_78[1][3][0]},{&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5]},{&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74},{&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5]},{&g_78[1][3][0],&g_74,&g_78[1][3][0],&g_74,&g_78[1][3][0],&g_74,&g_78[1][3][0]},{&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5],&g_78[5][3][5]}};
    int32_t l_764 = 0xF47A3B6DL;
    int32_t *l_772 = &g_44[0];
    int i, j;
    l_764 = ((*l_772) &= (safe_lshift_func_int16_t_s_s((((l_756[0][3] , (safe_mul_func_uint32_t_u_u(((l_759 , l_756[0][3].f2) | l_756[0][3].f1), (0xB0L > (l_760 != l_761))))) <= (+(++p_62))) ^ (+(safe_add_func_uint64_t_u_u(g_41, (safe_sub_func_int16_t_s_s((18446744073709551612UL > (-4L)), 65535UL)))))), 13)));
    return p_65;
}







static int8_t func_66(const uint32_t p_67)
{
    int64_t l_68 = (-1L);
    int32_t *l_69 = (void*)0;
    int32_t *l_70 = &g_44[9];
    union U3 l_81[5] = {{0L},{0L},{0L},{0L},{0L}};
    int8_t * const l_106 = &g_105;
    int i;
    (*l_70) = l_68;
    for (l_68 = 0; (l_68 >= 26); l_68++)
    {
        uint64_t *l_73 = &g_74;
        uint64_t *l_77 = &g_78[5][3][5];
        int64_t *l_82 = &g_83;
        int8_t *l_84 = (void*)0;
        int8_t *l_85 = &l_81[1].f0;
        union U2 l_95[8][8] = {{{0xA6L},{0xA6L},{0x30L},{1UL},{255UL},{7UL},{0xA6L},{255UL}},{{3UL},{255UL},{0x54L},{3UL},{8UL},{3UL},{0x54L},{255UL}},{{255UL},{0x3DL},{0x22L},{1UL},{0x3DL},{0x54L},{8UL},{0x22L}},{{0x35L},{8UL},{1UL},{255UL},{255UL},{1UL},{8UL},{0x35L}},{{255UL},{255UL},{0x22L},{0x54L},{0xA6L},{255UL},{0x54L},{1UL}},{{0xA6L},{255UL},{0x54L},{1UL},{0x54L},{255UL},{0xA6L},{0x54L}},{{0x35L},{255UL},{0x30L},{0x35L},{8UL},{1UL},{255UL},{255UL}},{{0x54L},{8UL},{0x22L},{0x22L},{8UL},{0x54L},{0x3DL},{1UL}}};
        uint8_t *l_103 = &g_104;
        const union U1 l_107 = {9L};
        int i, j;
        (*l_70) = (((*l_77) = ((*l_73)++)) , (((0x9154L || (safe_rshift_func_int8_t_s_u(((*l_85) = ((l_81[1] , p_67) & ((*l_82) = g_38[8]))), func_86((func_91(l_95[6][3], (safe_sub_func_uint64_t_u_u(((((((safe_rshift_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((l_95[6][3].f2 ^ (((((g_105 = (((p_67 , (((((+((*l_103) = ((g_78[3][1][5] , g_4) || g_78[5][3][0]))) | (*l_70)) == g_74) ^ 0x1B61L) > g_15[3].f3)) || p_67) || (*l_70))) <= 1UL) >= p_67) ^ 0xA4L) , 0x52037B1C4CF876E4LL)), g_15[3].f3)) , 3UL) == p_67), 12)) , 0x810CDF1940C85F22LL) == 5UL) , l_106) != l_106) & l_95[6][3].f3), 0x84CCE31A558FF78FLL)), l_107) , (void*)0), l_69, l_77, p_67)))) && p_67) > l_107.f0));
    }
    return p_67;
}







static const uint8_t func_86(int64_t * p_87, int32_t * const p_88, uint64_t * p_89, int8_t p_90)
{
    const uint16_t l_420 = 0x0F0EL;
    int32_t l_437[4][3] = {{0x66B907F1L,0xD518D7FAL,0xD518D7FAL},{0xE33E00F8L,0xF561DA92L,0xF561DA92L},{0xD518D7FAL,0L,0L},{0xF561DA92L,(-9L),(-9L)}};
    uint32_t l_439 = 4294967293UL;
    int8_t l_440 = 0x47L;
    uint32_t l_442 = 7UL;
    int64_t *l_463 = &g_264;
    int64_t **l_462[9];
    union U3 *l_505 = (void*)0;
    union U3 **l_504 = &l_505;
    int64_t l_554 = 1L;
    uint32_t l_557 = 0x68739926L;
    uint8_t l_672 = 0x68L;
    union U1 *l_692 = &g_218[2][0][1];
    union U3 ***l_723 = &l_504;
    int32_t l_750 = 0x8132F2F4L;
    int i, j;
    for (i = 0; i < 9; i++)
        l_462[i] = &l_463;
    for (g_322.f3 = 0; (g_322.f3 <= 43); g_322.f3 = safe_add_func_int64_t_s_s(g_322.f3, 9))
    {
        int32_t l_410 = 0x288EE34AL;
        int32_t *l_411 = &l_410;
        int32_t l_412 = 1L;
        uint16_t *l_424 = &g_175;
        uint16_t l_438 = 65535UL;
        int32_t l_441 = 0x3BC9E0E8L;
        uint32_t *l_443 = &g_182[4];
        int32_t l_480 = 0x3A3B5AB2L;
        int8_t *l_500 = &l_440;
        int8_t **l_499 = &l_500;
        union U1 l_543 = {-1L};
        union U0 l_584 = {0xA85BE22672041773LL};
        uint64_t l_638[8][7] = {{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL},{9UL,9UL,9UL,9UL,9UL,9UL,9UL},{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL},{9UL,9UL,9UL,9UL,9UL,9UL,9UL},{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL},{9UL,9UL,9UL,9UL,9UL,9UL,9UL},{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL},{9UL,9UL,9UL,9UL,9UL,9UL,9UL}};
        uint32_t l_658 = 0xF33D3955L;
        uint16_t l_661 = 1UL;
        int32_t l_686 = 0L;
        int32_t l_710 = 0xCE98A5E3L;
        int i, j;
        (*l_411) = (l_410 || l_410);
        l_412 ^= (*l_411);
    }
    return p_90;
}







static union U1 func_91(union U2 p_92, int8_t p_93, const union U1 p_94)
{
    int32_t *l_112 = &g_38[3];
    int32_t **l_111 = &l_112;
    int32_t *l_113 = &g_3;
    int32_t l_123 = 0x09896714L;
    int32_t l_124[3];
    uint8_t l_126 = 9UL;
    uint16_t l_238[6] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
    union U2 **l_293[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_313[3][3];
    const union U2 l_364[10] = {{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}};
    union U1 l_407 = {-1L};
    int i, j;
    for (i = 0; i < 3; i++)
        l_124[i] = (-4L);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_313[i][j] = 0x1EBCL;
    }
    if ((((safe_div_func_uint16_t_u_u((((~(((void*)0 == &g_104) | p_92.f0)) | 0x6BB7L) > (g_44[0] | (((*l_111) = &g_44[5]) != l_113))), (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_92.f0, p_94.f0)), (*l_113))))) ^ g_104) <= (*l_113)))
    {
        const int8_t **l_119 = &g_33[2][1];
        const int8_t ***l_118 = &l_119;
        union U2 *l_121 = &g_15[0];
        union U2 **l_120 = &l_121;
        (*l_118) = &g_33[0][1];
        (*l_120) = &g_15[3];
    }
    else
    {
        int32_t *l_122[1];
        int32_t l_125[1][9][10] = {{{(-7L),0xF764A2DAL,0xDD98C9EDL,0xAAE3D9D2L,0xF3A8CD93L,0xDA75DD02L,0x3B116CE8L,0xDA75DD02L,0xF3A8CD93L,0xAAE3D9D2L},{0x8F5FB703L,(-7L),0x8F5FB703L,0xDA75DD02L,0L,0x17B476EAL,0x3B116CE8L,0x19F4420CL,(-5L),0xE66CDFB5L},{0xDD98C9EDL,0xF764A2DAL,(-7L),0L,0x8F5FB703L,0xC6C47E74L,0x8EE3FE42L,0x19F4420CL,0x8EE3FE42L,0xC6C47E74L},{(-5L),0x4F48EE9FL,0x8F5FB703L,0x4F48EE9FL,(-5L),0L,(-7L),0xDA75DD02L,0x8EE3FE42L,0xF764A2DAL},{0x3B116CE8L,0L,0xDD98C9EDL,0L,1L,0x19F4420CL,0L,0xF764A2DAL,(-5L),0xF764A2DAL},{(-1L),0L,(-5L),0xDA75DD02L,(-5L),0L,(-1L),0xE66CDFB5L,0xF3A8CD93L,0xC6C47E74L},{(-1L),0xC6C47E74L,0x3B116CE8L,0xAAE3D9D2L,0x8F5FB703L,0x19F4420CL,0xF3A8CD93L,0x4F48EE9FL,1L,0xE66CDFB5L},{0x3B116CE8L,0xC6C47E74L,(-1L),0L,0L,0L,(-1L),0xC6C47E74L,0x3B116CE8L,0xAAE3D9D2L},{(-5L),0L,(-1L),0xE66CDFB5L,0xF3A8CD93L,0xC6C47E74L,0L,0x4F48EE9FL,0xDD98C9EDL,0x17B476EAL}}};
        uint32_t l_135 = 0x0CA3772BL;
        const int8_t **l_143 = &g_33[5][7];
        const int8_t ***l_142 = &l_143;
        uint8_t * const l_185[4] = {&g_15[3].f3,&g_15[3].f3,&g_15[3].f3,&g_15[3].f3};
        union U2 l_254 = {0x19L};
        uint16_t *l_270 = &l_238[3];
        union U2 *l_321 = &g_322;
        int64_t *l_357 = &g_264;
        int32_t l_359[6];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_122[i] = &g_44[0];
        for (i = 0; i < 6; i++)
            l_359[i] = 0L;
        l_126--;
        if (g_104)
        {
            int32_t **l_131 = &l_122[0];
            g_44[0] = (safe_rshift_func_uint16_t_u_u((l_131 != (void*)0), 10));
        }
        else
        {
            int64_t l_146[6][10][4] = {{{2L,(-1L),0xDB93C28B900DAA46LL,0x2429456BCAD55B1ALL},{2L,0x272E7E9FB3AEF0CFLL,2L,0x0190B99AC91F7FDDLL},{0x3268B7DADB20BFABLL,0x2429456BCAD55B1ALL,0x1698A3390C0CC138LL,0x0190B99AC91F7FDDLL},{0xDB93C28B900DAA46LL,(-1L),0xDB93C28B900DAA46LL,0x0190B99AC91F7FDDLL},{0x1698A3390C0CC138LL,0L,0xDB93C28B900DAA46LL,0L},{0x68CC48AF1FBA9B0ELL,0x2429456BCAD55B1ALL,3L,0x272E7E9FB3AEF0CFLL},{2L,0x2429456BCAD55B1ALL,0xDAE7EE4AC108E42ALL,0L},{0xDAE7EE4AC108E42ALL,0L,0x68CC48AF1FBA9B0ELL,0x0190B99AC91F7FDDLL},{0xDAE7EE4AC108E42ALL,(-1L),0xDAE7EE4AC108E42ALL,0x16C4F008F7B83498LL},{2L,0x0190B99AC91F7FDDLL,3L,0x16C4F008F7B83498LL}},{{0x68CC48AF1FBA9B0ELL,(-1L),0xDB93C28B900DAA46LL,0x0190B99AC91F7FDDLL},{0x1698A3390C0CC138LL,0L,0xDB93C28B900DAA46LL,0L},{0x68CC48AF1FBA9B0ELL,0x2429456BCAD55B1ALL,3L,0x272E7E9FB3AEF0CFLL},{2L,0x2429456BCAD55B1ALL,0xDAE7EE4AC108E42ALL,0L},{0xDAE7EE4AC108E42ALL,0L,0x68CC48AF1FBA9B0ELL,0x0190B99AC91F7FDDLL},{0xDAE7EE4AC108E42ALL,(-1L),0xDAE7EE4AC108E42ALL,0x16C4F008F7B83498LL},{2L,0x0190B99AC91F7FDDLL,3L,0x16C4F008F7B83498LL},{0x68CC48AF1FBA9B0ELL,(-1L),0xDB93C28B900DAA46LL,0x0190B99AC91F7FDDLL},{0x1698A3390C0CC138LL,0L,0xDB93C28B900DAA46LL,0L},{0x68CC48AF1FBA9B0ELL,0x2429456BCAD55B1ALL,3L,0x272E7E9FB3AEF0CFLL}},{{2L,0x2429456BCAD55B1ALL,0xDAE7EE4AC108E42ALL,0L},{0xDAE7EE4AC108E42ALL,0L,0x68CC48AF1FBA9B0ELL,0x0190B99AC91F7FDDLL},{0xDAE7EE4AC108E42ALL,(-1L),0xDAE7EE4AC108E42ALL,0x16C4F008F7B83498LL},{2L,0x0190B99AC91F7FDDLL,3L,0x16C4F008F7B83498LL},{0x68CC48AF1FBA9B0ELL,(-1L),0xDB93C28B900DAA46LL,0x0190B99AC91F7FDDLL},{0x1698A3390C0CC138LL,0L,0xDB93C28B900DAA46LL,0L},{0x68CC48AF1FBA9B0ELL,0x2429456BCAD55B1ALL,3L,0x272E7E9FB3AEF0CFLL},{2L,0x2429456BCAD55B1ALL,0xDAE7EE4AC108E42ALL,0L},{0xDAE7EE4AC108E42ALL,0L,0x68CC48AF1FBA9B0ELL,0x0190B99AC91F7FDDLL},{0xDAE7EE4AC108E42ALL,(-1L),0xDAE7EE4AC108E42ALL,0x16C4F008F7B83498LL}},{{2L,0x0190B99AC91F7FDDLL,3L,0x16C4F008F7B83498LL},{0x68CC48AF1FBA9B0ELL,(-1L),0xDB93C28B900DAA46LL,0x0190B99AC91F7FDDLL},{0x1698A3390C0CC138LL,0L,0xDB93C28B900DAA46LL,0L},{0x68CC48AF1FBA9B0ELL,0x2429456BCAD55B1ALL,3L,0x272E7E9FB3AEF0CFLL},{2L,0x2429456BCAD55B1ALL,0xDAE7EE4AC108E42ALL,0L},{0xDAE7EE4AC108E42ALL,0L,0x68CC48AF1FBA9B0ELL,0x0190B99AC91F7FDDLL},{0xDAE7EE4AC108E42ALL,(-1L),0xDAE7EE4AC108E42ALL,0x16C4F008F7B83498LL},{2L,0x0190B99AC91F7FDDLL,3L,0x16C4F008F7B83498LL},{0x68CC48AF1FBA9B0ELL,(-1L),0xDB93C28B900DAA46LL,0x0190B99AC91F7FDDLL},{0x1698A3390C0CC138LL,0L,0xDB93C28B900DAA46LL,0L}},{{0x68CC48AF1FBA9B0ELL,0x2429456BCAD55B1ALL,3L,0x272E7E9FB3AEF0CFLL},{2L,0x2429456BCAD55B1ALL,0xDAE7EE4AC108E42ALL,0L},{0xDAE7EE4AC108E42ALL,0L,0x68CC48AF1FBA9B0ELL,0x0190B99AC91F7FDDLL},{0xDAE7EE4AC108E42ALL,(-1L),0xDAE7EE4AC108E42ALL,0x16C4F008F7B83498LL},{2L,0x0190B99AC91F7FDDLL,3L,0x16C4F008F7B83498LL},{0x68CC48AF1FBA9B0ELL,(-1L),0xDB93C28B900DAA46LL,0x0190B99AC91F7FDDLL},{0x1698A3390C0CC138LL,0L,0xDB93C28B900DAA46LL,0L},{0x68CC48AF1FBA9B0ELL,0x2429456BCAD55B1ALL,3L,0x272E7E9FB3AEF0CFLL},{2L,0x2429456BCAD55B1ALL,0xDAE7EE4AC108E42ALL,0L},{0xDAE7EE4AC108E42ALL,0L,0x68CC48AF1FBA9B0ELL,0x0190B99AC91F7FDDLL}},{{0xDAE7EE4AC108E42ALL,(-1L),0xDAE7EE4AC108E42ALL,0x16C4F008F7B83498LL},{0xDAE7EE4AC108E42ALL,0x16C4F008F7B83498LL,0xDB93C28B900DAA46LL,0x272E7E9FB3AEF0CFLL},{0x3268B7DADB20BFABLL,(-1L),0x68CC48AF1FBA9B0ELL,0x16C4F008F7B83498LL},{3L,0x2429456BCAD55B1ALL,0x68CC48AF1FBA9B0ELL,0x2429456BCAD55B1ALL},{0x3268B7DADB20BFABLL,0x0190B99AC91F7FDDLL,0xDB93C28B900DAA46LL,(-1L)},{0xDAE7EE4AC108E42ALL,0x0190B99AC91F7FDDLL,0x1698A3390C0CC138LL,0x2429456BCAD55B1ALL},{0x1698A3390C0CC138LL,0x2429456BCAD55B1ALL,0x3268B7DADB20BFABLL,0x16C4F008F7B83498LL},{0x1698A3390C0CC138LL,(-1L),0x1698A3390C0CC138LL,0x272E7E9FB3AEF0CFLL},{0xDAE7EE4AC108E42ALL,0x16C4F008F7B83498LL,0xDB93C28B900DAA46LL,0x272E7E9FB3AEF0CFLL},{0x3268B7DADB20BFABLL,(-1L),0x68CC48AF1FBA9B0ELL,0x16C4F008F7B83498LL}}};
            int32_t l_148 = 0x5F74D8AAL;
            int8_t l_318 = (-1L);
            union U2 l_323 = {0x7EL};
            uint8_t *l_365[2][8][4] = {{{&g_242,&g_104,(void*)0,&g_15[3].f3},{&g_104,&g_15[3].f3,(void*)0,(void*)0},{&g_242,&g_242,&l_323.f0,&l_254.f3},{&l_254.f3,&g_322.f0,(void*)0,&g_15[3].f3},{(void*)0,&g_15[3].f3,&g_104,(void*)0},{&g_242,&g_15[3].f3,&l_254.f3,&g_15[3].f3},{&g_15[3].f3,&g_322.f0,(void*)0,&l_254.f3},{(void*)0,&g_242,&g_104,(void*)0}},{{&l_254.f3,&g_15[3].f3,&g_242,&g_15[3].f3},{&l_254.f3,&g_104,&g_104,&l_254.f3},{(void*)0,&g_15[3].f3,(void*)0,&g_104},{&g_15[3].f3,&g_15[3].f3,&l_254.f3,&l_254.f3},{&g_242,(void*)0,&g_104,&l_254.f3},{(void*)0,&g_15[3].f3,(void*)0,&g_104},{&l_254.f3,&g_15[3].f3,&l_323.f0,&l_254.f3},{&g_242,&g_104,(void*)0,&g_15[3].f3}}};
            int32_t l_371 = 5L;
            uint16_t l_372 = 0xEAC0L;
            uint8_t l_375 = 3UL;
            int32_t l_377 = (-1L);
            int32_t l_378 = 0x585A9F62L;
            union U0 l_406 = {0xDDEF2FD902092CFBLL};
            int i, j, k;
            (**l_111) |= (safe_div_func_uint32_t_u_u(0x28438D7AL, (+0x6AL)));
            if (l_135)
            {
                int8_t l_180 = 0x89L;
                union U1 l_181[10][7][3] = {{{{-6L},{1L},{-6L}},{{-10L},{0xC90199ECL},{0xC90199ECL}},{{0xC659404AL},{1L},{-1L}},{{0x558BC879L},{-10L},{0xC90199ECL}},{{-6L},{0xBCAAB667L},{-6L}},{{0x558BC879L},{0xC90199ECL},{1L}},{{0xC659404AL},{0xBCAAB667L},{-1L}}},{{{-10L},{-10L},{1L}},{{-6L},{1L},{-6L}},{{-10L},{0xC90199ECL},{0xC90199ECL}},{{0xC659404AL},{1L},{-1L}},{{0x558BC879L},{-10L},{0xC90199ECL}},{{-6L},{0xBCAAB667L},{-6L}},{{0x558BC879L},{0xC90199ECL},{1L}}},{{{0xC659404AL},{0xBCAAB667L},{-1L}},{{-10L},{-10L},{1L}},{{-6L},{1L},{-6L}},{{-10L},{0xC90199ECL},{0xC90199ECL}},{{0xC659404AL},{1L},{-1L}},{{0x558BC879L},{-10L},{0xC90199ECL}},{{-6L},{0xBCAAB667L},{-6L}}},{{{0x558BC879L},{0xC90199ECL},{1L}},{{0xC659404AL},{0xBCAAB667L},{-1L}},{{-10L},{-10L},{1L}},{{-6L},{1L},{-6L}},{{-10L},{0xC90199ECL},{0xC90199ECL}},{{0xC659404AL},{1L},{-1L}},{{0x558BC879L},{-10L},{0xC90199ECL}}},{{{-6L},{0xBCAAB667L},{-6L}},{{0x558BC879L},{0xC90199ECL},{1L}},{{0xC659404AL},{0xBCAAB667L},{-1L}},{{-10L},{-10L},{1L}},{{-6L},{1L},{-6L}},{{-10L},{0xC90199ECL},{0xC90199ECL}},{{0xC659404AL},{1L},{-1L}}},{{{0x558BC879L},{-10L},{0xC90199ECL}},{{-6L},{0xBCAAB667L},{-6L}},{{0x558BC879L},{0xC90199ECL},{1L}},{{0xC659404AL},{0xBCAAB667L},{-1L}},{{-10L},{-10L},{1L}},{{-6L},{1L},{-6L}},{{-10L},{0xC90199ECL},{0xC90199ECL}}},{{{0xC659404AL},{1L},{-1L}},{{0x558BC879L},{-10L},{0xC90199ECL}},{{-6L},{0xBCAAB667L},{-6L}},{{0x558BC879L},{0xC90199ECL},{1L}},{{0xC659404AL},{0xBCAAB667L},{-1L}},{{-10L},{-10L},{1L}},{{-6L},{1L},{-6L}}},{{{-10L},{0xC90199ECL},{0xC90199ECL}},{{0xC659404AL},{1L},{-1L}},{{0x558BC879L},{-10L},{0xC90199ECL}},{{-6L},{0xBCAAB667L},{-6L}},{{0x558BC879L},{0xC90199ECL},{1L}},{{0xC659404AL},{0xBCAAB667L},{-1L}},{{-10L},{-10L},{1L}}},{{{-6L},{1L},{-6L}},{{-10L},{0xC90199ECL},{0xC90199ECL}},{{0xC659404AL},{1L},{-1L}},{{0x558BC879L},{-10L},{0xC90199ECL}},{{-6L},{0xBCAAB667L},{-6L}},{{0x558BC879L},{0xC90199ECL},{1L}},{{0xC659404AL},{0xBCAAB667L},{-1L}}},{{{-10L},{-10L},{1L}},{{-6L},{1L},{-6L}},{{-10L},{0xC90199ECL},{0xC90199ECL}},{{0xC659404AL},{1L},{-1L}},{{0x558BC879L},{-10L},{0xC90199ECL}},{{-6L},{0xBCAAB667L},{-6L}},{{0x558BC879L},{0xC90199ECL},{1L}}}};
                int32_t l_204 = 0x5D6DC47BL;
                int32_t l_207 = 0x480904A3L;
                int16_t *l_228 = &g_206;
                uint64_t *l_229 = (void*)0;
                uint64_t *l_230 = &g_78[5][3][5];
                union U0 l_275 = {0xB2BADB3697223DDDLL};
                union U2 **l_280 = &g_278;
                int16_t *l_330[10][4][6] = {{{&g_331,&g_331,&g_331,(void*)0,(void*)0,&g_331},{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331},{(void*)0,(void*)0,&g_331,&g_331,(void*)0,&g_331},{&g_331,&g_331,&g_331,(void*)0,(void*)0,(void*)0}},{{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331},{&g_331,&g_331,&g_331,&g_331,&g_331,(void*)0},{&g_331,(void*)0,&g_331,(void*)0,&g_331,&g_331},{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331}},{{(void*)0,&g_331,&g_331,&g_331,&g_331,&g_331},{&g_331,&g_331,&g_331,(void*)0,&g_331,&g_331},{&g_331,(void*)0,(void*)0,&g_331,&g_331,&g_331},{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331}},{{(void*)0,&g_331,(void*)0,&g_331,&g_331,&g_331},{&g_331,(void*)0,(void*)0,&g_331,&g_331,&g_331},{&g_331,(void*)0,&g_331,&g_331,&g_331,&g_331},{(void*)0,&g_331,&g_331,&g_331,(void*)0,(void*)0}},{{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331},{&g_331,&g_331,&g_331,(void*)0,(void*)0,&g_331},{(void*)0,&g_331,(void*)0,&g_331,(void*)0,&g_331},{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331}},{{(void*)0,&g_331,&g_331,&g_331,(void*)0,&g_331},{(void*)0,&g_331,&g_331,&g_331,&g_331,&g_331},{&g_331,(void*)0,&g_331,&g_331,&g_331,&g_331},{&g_331,(void*)0,&g_331,(void*)0,&g_331,&g_331}},{{&g_331,&g_331,&g_331,(void*)0,&g_331,(void*)0},{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331},{&g_331,&g_331,&g_331,(void*)0,&g_331,&g_331},{(void*)0,&g_331,&g_331,(void*)0,&g_331,&g_331}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_331,&g_331},{&g_331,(void*)0,&g_331,(void*)0,&g_331,(void*)0},{&g_331,&g_331,(void*)0,&g_331,&g_331,&g_331},{&g_331,&g_331,(void*)0,&g_331,&g_331,&g_331}},{{(void*)0,&g_331,(void*)0,&g_331,&g_331,(void*)0},{&g_331,&g_331,&g_331,(void*)0,&g_331,&g_331},{&g_331,&g_331,(void*)0,&g_331,&g_331,&g_331},{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331}},{{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331},{&g_331,&g_331,&g_331,(void*)0,&g_331,(void*)0},{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331},{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331}}};
                int32_t l_347 = 0x4492F3A7L;
                int i, j, k;
                for (p_93 = (-1); (p_93 >= (-7)); p_93 = safe_sub_func_int16_t_s_s(p_93, 5))
                {
                    int8_t *l_141 = &g_105;
                    int8_t **l_140 = &l_141;
                    int8_t ***l_139 = &l_140;
                    int8_t ****l_138[4];
                    int32_t l_147 = 0xDE851E6AL;
                    uint32_t l_149 = 1UL;
                    uint8_t *l_170 = &g_104;
                    uint8_t **l_169 = &l_170;
                    uint16_t *l_174 = &g_175;
                    uint16_t *l_176 = &g_177;
                    uint32_t *l_178 = &l_135;
                    uint8_t *l_179 = &g_104;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_138[i] = &l_139;
                    l_142 = (void*)0;
                    for (l_135 = 0; (l_135 != 54); l_135 = safe_add_func_int32_t_s_s(l_135, 3))
                    {
                        l_149--;
                        if (l_149)
                            break;
                    }
                    if ((safe_rshift_func_int8_t_s_u((p_94.f0 | (safe_rshift_func_int16_t_s_s((+((safe_div_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((p_94.f0 == (((*l_179) = (((*l_112) != (safe_div_func_uint64_t_u_u(((+(!((((((p_92.f2 , (safe_div_func_uint8_t_u_u(((g_105 == (((((*l_169) = l_141) != (g_171 = &g_104)) , ((safe_mod_func_int32_t_s_s(g_74, ((*l_178) = (((*l_176) = (((*l_174) |= p_93) | g_15[3].f3)) | g_15[3].f0)))) | 0x7BL)) , l_149)) , 248UL), p_92.f3))) , g_74) , p_94.f0) && 0L) ^ g_44[0]) >= (*l_112)))) | p_92.f0), p_93))) >= 0x8F46018AEFFB0687LL)) <= 4UL)), 11)), 6)) | (*l_113)), 9UL)) <= (*l_112))), l_180))), g_78[5][3][5])))
                    {
                        return l_181[0][3][0];
                    }
                    else
                    {
                        int16_t *l_205[7][3] = {{&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206}};
                        int i, j;
                        ++g_182[4];
                        l_207 = ((l_185[2] != ((*l_169) = &l_126)) < ((g_206 = (safe_mod_func_uint64_t_u_u(((-10L) || g_78[4][0][0]), (+(((safe_sub_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u(p_92.f3, (((*l_176) = (!(*l_113))) , (l_204 = (safe_mul_func_int8_t_s_s((18446744073709551613UL <= ((((*l_174) ^= (safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((g_44[0] <= p_92.f3), (*l_112))), (-4L))), g_182[4]))) & p_93) < 0x4722L)), l_147)))))) > 0x15L) | p_92.f3), 0xFEFFL)) || 0x66AFL) , (-1L)))))) <= p_94.f0));
                        return p_94;
                    }
                }
            }
            else
            {
                int32_t l_376[6] = {0x07354037L,0x07354037L,0x07354037L,0x07354037L,0x07354037L,0x07354037L};
                uint32_t l_379 = 1UL;
                int i;
                l_379--;
            }
            l_371 = ((safe_mod_func_int32_t_s_s((((((*l_270) = (p_92.f3 & (**l_111))) <= p_93) <= (((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((*g_171), (safe_add_func_int16_t_s_s(((0xC3L | (((safe_add_func_int64_t_s_s(((((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0x8E882E90L, p_92.f0)), (safe_rshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((l_406 , ((p_92 , g_38[3]) , (-6L))), 0x7F623BDBL)) && p_92.f0) > (-1L)), p_92.f2)) && (-9L)), p_92.f0)))) < (*l_112)) || 1UL) || p_92.f0), 0x95DDFB3247F7E071LL)) , g_322.f2) != l_406.f0)) , g_38[5]), g_175)))), l_406.f0)) , 0xB6L), p_92.f0)) , 1L), l_375)) || g_182[4]) != 0xD8L)) || (*l_112)), g_15[3].f0)) | g_177);
        }
    }
    return l_407;
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
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_15[i].f0, "g_15[i].f0", print_hash_value);
        transparent_crc(g_15[i].f2, "g_15[i].f2", print_hash_value);
        transparent_crc(g_15[i].f3, "g_15[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_38[i], "g_38[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_41, "g_41", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_44[i], "g_44[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_78[i][j][k], "g_78[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_182[i], "g_182[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_206, "g_206", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_218[i][j][k].f0, "g_218[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_221.f0, "g_221.f0", print_hash_value);
    transparent_crc(g_221.f1, "g_221.f1", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_322.f0, "g_322.f0", print_hash_value);
    transparent_crc(g_322.f2, "g_322.f2", print_hash_value);
    transparent_crc(g_322.f3, "g_322.f3", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_486.f0, "g_486.f0", print_hash_value);
    transparent_crc(g_486.f1, "g_486.f1", print_hash_value);
    transparent_crc(g_486.f2, "g_486.f2", print_hash_value);
    transparent_crc(g_486.f4, "g_486.f4", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_802[i][j], "g_802[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_880, "g_880", print_hash_value);
    transparent_crc(g_913, "g_913", print_hash_value);
    transparent_crc(g_989.f0, "g_989.f0", print_hash_value);
    transparent_crc(g_989.f2, "g_989.f2", print_hash_value);
    transparent_crc(g_989.f3, "g_989.f3", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1014, "g_1014", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1015[i], "g_1015[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1044, "g_1044", print_hash_value);
    transparent_crc(g_1068, "g_1068", print_hash_value);
    transparent_crc(g_1075, "g_1075", print_hash_value);
    transparent_crc(g_1128.f0, "g_1128.f0", print_hash_value);
    transparent_crc(g_1128.f2, "g_1128.f2", print_hash_value);
    transparent_crc(g_1128.f3, "g_1128.f3", print_hash_value);
    transparent_crc(g_1206.f0, "g_1206.f0", print_hash_value);
    transparent_crc(g_1206.f1, "g_1206.f1", print_hash_value);
    transparent_crc(g_1206.f2, "g_1206.f2", print_hash_value);
    transparent_crc(g_1206.f4, "g_1206.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1299[i], "g_1299[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1423[i], "g_1423[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1570[i][j], "g_1570[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1618[i][j], "g_1618[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1648.f0, "g_1648.f0", print_hash_value);
    transparent_crc(g_1648.f2, "g_1648.f2", print_hash_value);
    transparent_crc(g_1648.f3, "g_1648.f3", print_hash_value);
    transparent_crc(g_1707, "g_1707", print_hash_value);
    transparent_crc(g_1776, "g_1776", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1887[i].f0, "g_1887[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1922[i].f0, "g_1922[i].f0", print_hash_value);
        transparent_crc(g_1922[i].f1, "g_1922[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_2074[i][j], "g_2074[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2149, "g_2149", print_hash_value);
    transparent_crc(g_2363, "g_2363", print_hash_value);
    transparent_crc(g_2371, "g_2371", print_hash_value);
    transparent_crc(g_2372, "g_2372", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
