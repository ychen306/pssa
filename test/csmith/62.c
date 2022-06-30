// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 55B9F0AE
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



static int32_t g_5 = 0L;
static int32_t g_9 = 0L;
static int32_t g_14 = (-10L);
static int32_t g_18 = 0x7207182BL;
static int16_t g_23 = 0x46BDL;
static uint8_t g_25 = 255UL;
static int8_t g_32[2][9] = {{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L}};
static uint8_t g_35 = 1UL;
static uint16_t g_67[4][1][9] = {{{0x495BL,0UL,9UL,8UL,6UL,4UL,6UL,8UL,9UL}},{{6UL,6UL,0x495BL,65535UL,0xB711L,0UL,9UL,0UL,0xB711L}},{{0x495BL,6UL,6UL,0x495BL,65535UL,0xB711L,0UL,9UL,0UL}},{{9UL,0x495BL,6UL,6UL,0x495BL,65535UL,0xB711L,0UL,9UL}}};
static uint16_t g_103 = 0xE949L;
static uint16_t *g_102 = &g_103;
static int32_t g_106 = (-1L);
static int32_t g_109 = (-8L);
static int32_t g_110 = 1L;
static int32_t g_111 = 0x4D82229BL;
static int32_t g_112 = 9L;
static uint32_t g_113[3][3][5] = {{{0xEE19A6A9L,0UL,0xEE19A6A9L,0xEE19A6A9L,0UL},{0UL,0xEE19A6A9L,0xEE19A6A9L,0UL,0xEE19A6A9L},{0UL,0UL,0xC5103452L,0UL,0UL}},{{0xEE19A6A9L,0UL,0xEE19A6A9L,0xEE19A6A9L,0UL},{0UL,0xEE19A6A9L,0xEE19A6A9L,0UL,0xEE19A6A9L},{0UL,0UL,0xC5103452L,0UL,0UL}},{{0xEE19A6A9L,0UL,0xEE19A6A9L,0xEE19A6A9L,0UL},{0UL,0xEE19A6A9L,0xEE19A6A9L,0UL,0xEE19A6A9L},{0UL,0UL,0xC5103452L,0UL,0UL}}};
static int32_t *g_165[4][7][4] = {{{&g_9,&g_9,&g_106,&g_9},{&g_9,&g_106,&g_106,&g_106},{&g_9,&g_14,&g_106,&g_14},{&g_9,&g_106,&g_106,&g_106},{&g_9,&g_9,&g_106,&g_9},{&g_9,&g_106,&g_106,&g_106},{&g_9,&g_14,&g_106,&g_14}},{{&g_9,&g_106,&g_106,&g_106},{&g_9,&g_9,&g_106,&g_9},{&g_9,&g_106,&g_106,&g_106},{&g_9,&g_14,&g_106,&g_14},{&g_9,&g_106,&g_106,&g_106},{&g_9,&g_9,&g_106,&g_9},{&g_9,&g_106,&g_106,&g_106}},{{&g_9,&g_14,&g_106,&g_14},{&g_9,&g_106,&g_106,&g_106},{&g_9,&g_9,&g_106,&g_9},{&g_9,&g_106,&g_106,&g_106},{&g_9,&g_14,&g_106,&g_14},{&g_9,&g_106,&g_106,&g_106},{&g_9,&g_9,&g_106,&g_9}},{{&g_9,&g_106,&g_106,&g_106},{&g_9,&g_14,&g_106,&g_14},{&g_9,&g_106,&g_106,&g_106},{&g_9,&g_9,&g_106,&g_9},{&g_9,&g_106,&g_106,&g_106},{&g_9,&g_14,&g_106,&g_14},{&g_9,&g_106,&g_106,&g_106}}};
static int8_t g_178[2] = {3L,3L};
static int8_t *g_177 = &g_178[1];
static int32_t g_181 = 0x25695F44L;
static uint32_t g_225 = 2UL;
static uint8_t *g_230 = &g_35;
static uint8_t **g_229 = &g_230;
static uint8_t **g_270 = (void*)0;
static uint8_t ***g_269 = &g_270;
static int32_t g_272[3][5][10] = {{{0x424F5989L,0L,0xCB34AD73L,4L,4L,0xCB34AD73L,0L,0x424F5989L,0x6A296AE8L,0x8D4120DAL},{0x48F50E0BL,1L,0L,1L,0xFC6ADC05L,0xCB34AD73L,1L,0x48F50E0BL,1L,4L},{0x424F5989L,0x56BE5B37L,0L,0xFC6ADC05L,6L,0L,0x230FADCDL,1L,0L,0x424F5989L},{(-1L),0x95E0CB0CL,0x24D469CAL,0L,0xCB34AD73L,(-1L),0x230FADCDL,(-1L),0xCB34AD73L,0L},{(-8L),0L,(-8L),0L,0x424F5989L,(-8L),0xD8505F07L,(-8L),0L,0x48F50E0BL}},{{(-8L),0xB94FD68CL,1L,0xCB34AD73L,0L,(-1L),0x43430D16L,(-8L),(-6L),0L},{(-1L),0x43430D16L,(-8L),(-6L),0L,0L,0L,(-1L),0x48F50E0BL,0x48F50E0BL},{1L,0x43430D16L,0x24D469CAL,0x424F5989L,0x424F5989L,0x24D469CAL,0x43430D16L,1L,0x48F50E0BL,0L},{0L,0xB94FD68CL,(-8L),(-6L),0xCB34AD73L,0x24D469CAL,0xD8505F07L,0L,(-6L),0x424F5989L},{1L,0L,(-8L),0xCB34AD73L,6L,0L,0x230FADCDL,1L,0L,0x424F5989L}},{{(-1L),0x95E0CB0CL,0x24D469CAL,0L,0xCB34AD73L,(-1L),0x230FADCDL,(-1L),0xCB34AD73L,0L},{(-8L),0L,(-8L),0L,0x424F5989L,(-8L),0xD8505F07L,(-8L),0L,0x48F50E0BL},{(-8L),0xB94FD68CL,1L,0xCB34AD73L,0L,(-1L),0x43430D16L,(-8L),(-6L),0L},{(-1L),0x43430D16L,(-8L),(-6L),0L,0L,0L,(-1L),0x48F50E0BL,0x48F50E0BL},{1L,0x43430D16L,0x24D469CAL,0x424F5989L,0x424F5989L,0x24D469CAL,0x43430D16L,1L,0x48F50E0BL,0L}}};
static int64_t g_274[7] = {0x8D0BCE42B7FCCDD1LL,0x8D0BCE42B7FCCDD1LL,0x8D0BCE42B7FCCDD1LL,0x8D0BCE42B7FCCDD1LL,0x8D0BCE42B7FCCDD1LL,0x8D0BCE42B7FCCDD1LL,0x8D0BCE42B7FCCDD1LL};
static int16_t g_287[6][3] = {{(-1L),(-6L),7L},{0xCCECL,(-6L),0xCCECL},{0x19AFL,(-1L),7L},{0x19AFL,0x19AFL,(-1L)},{0xCCECL,(-1L),(-1L)},{(-1L),(-6L),7L}};
static int16_t g_311 = 0xD54AL;
static uint32_t g_340[8][8] = {{0xDBC6D1B6L,1UL,0x8BB86A01L,0x724B2485L,0x724B2485L,0x8BB86A01L,1UL,0xDBC6D1B6L},{1UL,18446744073709551613UL,0xDBC6D1B6L,3UL,0xDBC6D1B6L,18446744073709551613UL,1UL,1UL},{18446744073709551613UL,3UL,0x8BB86A01L,0x8BB86A01L,3UL,18446744073709551613UL,0x724B2485L,18446744073709551613UL},{3UL,18446744073709551613UL,0x724B2485L,18446744073709551613UL,3UL,0x8BB86A01L,0x8BB86A01L,3UL},{18446744073709551613UL,1UL,1UL,18446744073709551613UL,0xDBC6D1B6L,3UL,0xDBC6D1B6L,1UL},{3UL,0UL,3UL,0x724B2485L,0xDBC6D1B6L,0xDBC6D1B6L,0x724B2485L,3UL},{0UL,0UL,0xDBC6D1B6L,0x8BB86A01L,18446744073709551613UL,0x8BB86A01L,0xDBC6D1B6L,0UL},{0UL,3UL,0x724B2485L,0xDBC6D1B6L,0xDBC6D1B6L,0x724B2485L,3UL,0UL}};
static int64_t g_395 = (-9L);
static int8_t *g_398[7][7] = {{&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7]},{&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7]},{&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7]},{&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7]},{&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7]},{&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7]},{&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7],&g_32[0][7]}};
static uint16_t g_400 = 0x2F21L;
static uint8_t g_413[5] = {6UL,6UL,6UL,6UL,6UL};
static const int16_t g_419[2][8][4] = {{{1L,0x3525L,0xE807L,0xB059L},{0xFEC5L,1L,4L,0xA2F6L},{0x64F5L,0x02AFL,0x7F2AL,(-1L)},{0x64F5L,0x4B73L,4L,8L},{0xFEC5L,(-1L),0xE807L,0xC6ADL},{1L,7L,(-7L),0x02AFL},{7L,0x4B73L,0x4B73L,7L},{0xE807L,0x64F5L,0xCD45L,0xA2F6L}},{{0xBE31L,0xB059L,(-7L),1L},{0xC16EL,0x3525L,6L,1L},{0xFEC5L,0xB059L,0xC6ADL,0xA2F6L},{0x02AFL,0x64F5L,0x7F2AL,7L},{8L,0x4B73L,0xA2F6L,0x02AFL},{0xFEC5L,7L,0xFEC5L,0xC6ADL},{0xB059L,(-1L),(-7L),8L},{(-1L),0x4B73L,0x3525L,(-1L)}}};
static int16_t g_421[2] = {0xD32AL,0xD32AL};
static int32_t g_422 = 1L;
static uint64_t g_435 = 18446744073709551615UL;
static int32_t g_437 = 0x06FA5281L;
static uint16_t **g_493 = &g_102;
static uint16_t ***g_492 = &g_493;
static int8_t **g_563 = &g_177;
static int8_t ***g_562 = &g_563;
static int64_t *g_617 = &g_395;
static int8_t g_655 = 0x84L;
static uint8_t ****g_685 = &g_269;
static uint8_t *****g_684 = &g_685;
static int8_t ****g_982 = &g_562;
static int8_t *****g_981[9][9][3] = {{{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982}},{{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982}},{{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982}},{{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982}},{{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982}},{{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982}},{{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982}},{{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982}},{{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982},{&g_982,&g_982,&g_982}}};
static int8_t g_1020[4][1][2] = {{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}}};
static uint16_t g_1166 = 0x2721L;
static uint16_t g_1167[2] = {65535UL,65535UL};
static uint16_t g_1168 = 0UL;
static uint16_t g_1171[8] = {2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL};
static const int32_t *g_1205 = &g_9;
static const int32_t **g_1204 = &g_1205;
static const int32_t ***g_1203 = &g_1204;
static const int32_t ****g_1202[7] = {&g_1203,&g_1203,&g_1203,&g_1203,&g_1203,&g_1203,&g_1203};
static uint32_t *g_1258 = (void*)0;
static uint32_t **g_1257 = &g_1258;
static const uint16_t g_1265 = 1UL;
static int32_t **g_1327[7] = {&g_165[2][1][2],&g_165[2][1][2],&g_165[2][1][2],&g_165[2][1][2],&g_165[2][1][2],&g_165[2][1][2],&g_165[2][1][2]};
static int32_t ***g_1326[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
static int32_t ****g_1325 = &g_1326[1][0];
static int32_t g_1342 = 1L;
static int64_t **g_1400 = &g_617;
static int32_t g_1422 = 1L;
static uint16_t g_1445[3][9] = {{0xB832L,65529UL,0xF829L,65535UL,65535UL,65535UL,65535UL,0xF829L,65529UL},{65535UL,0x1596L,65535UL,0UL,0xDA48L,65529UL,1UL,1UL,65529UL},{0UL,0xF829L,65535UL,0xF829L,0UL,0x1596L,65535UL,65535UL,65535UL}};
static int16_t g_1503 = 0x3346L;
static uint16_t g_1589 = 0xFCECL;
static uint64_t g_1592[10] = {0x28D13C1CCE993859LL,0x28D13C1CCE993859LL,0x28D13C1CCE993859LL,0x28D13C1CCE993859LL,0x28D13C1CCE993859LL,0x28D13C1CCE993859LL,0x28D13C1CCE993859LL,0x28D13C1CCE993859LL,0x28D13C1CCE993859LL,0x28D13C1CCE993859LL};
static uint32_t ***g_1603 = &g_1257;
static int8_t * const * const g_1648 = (void*)0;
static int8_t * const * const *g_1647 = &g_1648;
static int8_t * const * const **g_1646 = &g_1647;
static int16_t *g_1667 = &g_1503;
static int16_t **g_1666 = &g_1667;
static int16_t ***g_1665[6][6][7] = {{{&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666},{(void*)0,&g_1666,&g_1666,(void*)0,&g_1666,&g_1666,&g_1666},{(void*)0,&g_1666,(void*)0,(void*)0,&g_1666,(void*)0,&g_1666},{&g_1666,&g_1666,&g_1666,(void*)0,&g_1666,&g_1666,(void*)0},{&g_1666,&g_1666,&g_1666,&g_1666,(void*)0,&g_1666,&g_1666},{&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666}},{{&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666},{(void*)0,&g_1666,&g_1666,&g_1666,&g_1666,(void*)0,(void*)0},{&g_1666,&g_1666,&g_1666,(void*)0,&g_1666,&g_1666,&g_1666},{(void*)0,&g_1666,(void*)0,&g_1666,&g_1666,&g_1666,&g_1666},{&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666},{&g_1666,(void*)0,&g_1666,&g_1666,(void*)0,(void*)0,(void*)0}},{{&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666},{&g_1666,(void*)0,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666},{(void*)0,&g_1666,(void*)0,&g_1666,&g_1666,&g_1666,&g_1666},{(void*)0,&g_1666,&g_1666,&g_1666,(void*)0,(void*)0,&g_1666},{(void*)0,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,(void*)0},{&g_1666,(void*)0,(void*)0,(void*)0,&g_1666,(void*)0,(void*)0}},{{&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,(void*)0},{(void*)0,(void*)0,&g_1666,(void*)0,&g_1666,(void*)0,&g_1666},{&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666},{&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666},{(void*)0,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666},{(void*)0,&g_1666,(void*)0,&g_1666,(void*)0,&g_1666,(void*)0}},{{&g_1666,(void*)0,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666},{(void*)0,(void*)0,(void*)0,&g_1666,(void*)0,(void*)0,(void*)0},{&g_1666,(void*)0,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666},{&g_1666,&g_1666,(void*)0,(void*)0,&g_1666,&g_1666,&g_1666},{&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666},{(void*)0,&g_1666,(void*)0,(void*)0,&g_1666,(void*)0,&g_1666}},{{&g_1666,&g_1666,&g_1666,&g_1666,(void*)0,&g_1666,&g_1666},{&g_1666,&g_1666,(void*)0,&g_1666,(void*)0,&g_1666,&g_1666},{&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,&g_1666},{&g_1666,&g_1666,&g_1666,&g_1666,&g_1666,(void*)0,&g_1666},{&g_1666,&g_1666,&g_1666,(void*)0,&g_1666,&g_1666,&g_1666},{&g_1666,&g_1666,&g_1666,(void*)0,&g_1666,&g_1666,(void*)0}}};
static uint32_t ****g_1680 = &g_1603;
static int32_t g_1886 = 1L;
static uint64_t g_1938 = 9UL;
static uint8_t g_1957 = 247UL;
static uint8_t g_1960 = 0xA2L;
static const uint8_t g_2030 = 0UL;
static int32_t g_2073[10][2] = {{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L}};
static int32_t g_2299 = 0L;
static uint64_t g_2388 = 0x1CCDA15603440106LL;
static uint64_t *g_2583 = &g_2388;
static uint64_t **g_2582 = &g_2583;
static uint64_t ***g_2581[3][10] = {{&g_2582,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582},{&g_2582,(void*)0,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582},{&g_2582,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582,&g_2582}};
static uint64_t ****g_2580 = &g_2581[1][4];



static int8_t func_1(void);
static int32_t func_3(uint8_t p_4);
static int32_t func_30(int32_t p_31);
static int32_t * func_38(int32_t * p_39, uint64_t p_40, int32_t * p_41, int16_t p_42);
static int32_t * func_43(int32_t * p_44);
static uint8_t func_45(int16_t p_46, int32_t * const p_47);
static uint64_t func_72(int32_t p_73, int32_t p_74, int32_t * p_75, int16_t p_76);
static const int8_t func_80(uint32_t p_81, int64_t p_82);
static const int64_t func_87(uint8_t p_88, const int8_t * const p_89, uint32_t p_90);
static int32_t * func_94(int8_t * p_95, int32_t * p_96, uint32_t p_97);
# 130 "<stdin>"
static int8_t func_1(void)
{
    uint16_t l_2 = 1UL;
    int32_t *l_2600[2];
    int64_t l_2601 = 0x3506D2FFA29C4A56LL;
    int i;
    for (i = 0; i < 2; i++)
        l_2600[i] = &g_2073[3][1];
    l_2 |= 0x3AE35568L;
    l_2601 |= func_3(g_5);
    return (***g_562);
}







static int32_t func_3(uint8_t p_4)
{
    uint32_t l_2436 = 0xAEAADFABL;
    uint16_t *l_2471 = (void*)0;
    int32_t l_2473[4];
    int64_t *l_2489 = &g_274[0];
    int32_t l_2493[4];
    int32_t l_2494 = 0x9A3CA292L;
    int8_t *l_2507 = &g_32[0][5];
    int8_t ****l_2526 = &g_562;
    uint16_t l_2528 = 0xBAECL;
    const int64_t l_2544 = (-1L);
    uint32_t l_2546 = 0xE3756379L;
    int32_t *l_2555 = &g_9;
    int32_t **l_2556 = &g_165[0][5][2];
    int8_t l_2579[1][1][1];
    int8_t l_2586 = 0x8FL;
    uint32_t *****l_2593 = &g_1680;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2473[i] = 0x7580A53CL;
    for (i = 0; i < 4; i++)
        l_2493[i] = 0x72F32E9DL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_2579[i][j][k] = 6L;
        }
    }
    for (p_4 = (-1); (p_4 <= 46); ++p_4)
    {
        int32_t *l_8 = &g_9;
        int32_t l_21 = 0x9AE4F78DL;
        int32_t l_24 = 0L;
        uint8_t **l_2425 = &g_230;
        uint16_t *l_2469 = &g_1171[7];
        uint16_t l_2474 = 0x53EDL;
        int32_t *l_2475[5];
        int i;
        for (i = 0; i < 5; i++)
            l_2475[i] = &g_2073[6][1];
        (*l_8) = g_5;
        for (g_9 = 0; (g_9 <= 5); g_9++)
        {
            int32_t *l_2419[8] = {&g_18,&g_18,&g_18,&g_18,&g_18,&g_18,&g_18,&g_18};
            int8_t *****l_2433 = &g_982;
            int8_t ***** const l_2434[7][8][1] = {{{&g_982},{&g_982},{&g_982},{&g_982},{&g_982},{&g_982},{&g_982},{(void*)0}},{{&g_982},{(void*)0},{&g_982},{&g_982},{&g_982},{&g_982},{&g_982},{&g_982}},{{&g_982},{(void*)0},{&g_982},{(void*)0},{&g_982},{&g_982},{&g_982},{&g_982}},{{&g_982},{&g_982},{&g_982},{(void*)0},{&g_982},{(void*)0},{&g_982},{&g_982}},{{&g_982},{&g_982},{&g_982},{&g_982},{&g_982},{(void*)0},{&g_982},{(void*)0}},{{&g_982},{&g_982},{&g_982},{&g_982},{&g_982},{&g_982},{&g_982},{(void*)0}},{{&g_982},{(void*)0},{&g_982},{&g_982},{&g_982},{&g_982},{&g_982},{&g_982}}};
            uint32_t l_2439 = 4294967287UL;
            uint16_t *l_2470 = &g_1168;
            uint32_t l_2495 = 4294967294UL;
            int32_t *l_2499[6];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_2499[i] = &l_2473[2];
            if (p_4)
                break;
            for (g_5 = 0; (g_5 == 6); g_5 = safe_add_func_int16_t_s_s(g_5, 6))
            {
                int16_t l_20 = 6L;
                int32_t l_22[2];
                int32_t l_2438 = 6L;
                uint16_t * const l_2451 = (void*)0;
                uint16_t * const *l_2450 = &l_2451;
                int32_t *l_2496[4][7] = {{&l_2493[2],&l_24,&l_2493[2],&l_2473[3],&l_2473[3],&l_2493[2],&l_24},{(void*)0,&g_2299,(void*)0,(void*)0,&g_2299,(void*)0,&g_2299},{&l_2493[2],&l_2473[3],&l_2473[3],&l_2493[2],&l_24,&l_2493[2],&l_2473[3]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_22[i] = 0L;
                for (g_14 = 0; (g_14 == (-9)); g_14 = safe_sub_func_uint32_t_u_u(g_14, 7))
                {
                    int32_t *l_17 = &g_18;
                    int32_t *l_19[10][10][2] = {{{&g_18,(void*)0},{&g_18,&g_18},{(void*)0,&g_18},{&g_18,(void*)0},{&g_18,&g_18},{(void*)0,&g_18},{&g_18,(void*)0},{&g_18,&g_18},{(void*)0,&g_18},{&g_18,(void*)0}},{{&g_18,&g_18},{(void*)0,&g_18},{&g_18,(void*)0},{&g_18,&g_18},{(void*)0,&g_18},{&g_18,(void*)0},{&g_18,&g_18},{(void*)0,&g_18},{&g_18,(void*)0},{&g_18,&g_18}},{{(void*)0,&g_18},{&g_18,(void*)0},{&g_18,&g_18},{(void*)0,&g_18},{&g_18,(void*)0},{&g_18,&g_18},{(void*)0,&g_18},{&g_18,(void*)0},{&g_18,&g_18},{(void*)0,&g_18}},{{&g_18,(void*)0},{&g_18,&g_18},{(void*)0,&g_18},{&g_18,(void*)0},{&g_18,&g_18},{(void*)0,&g_18},{&g_18,(void*)0},{&g_18,&g_18},{(void*)0,&g_18},{&g_18,(void*)0}},{{&g_18,&g_18},{(void*)0,&g_18},{&g_18,(void*)0},{&g_18,&g_18},{(void*)0,&g_18},{&g_18,(void*)0},{&g_18,&g_18},{(void*)0,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0}},{{&g_18,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0}},{{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0},{(void*)0,&g_18}},{{(void*)0,(void*)0},{&g_18,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0}},{{&g_18,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0}},{{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0},{(void*)0,&g_18},{(void*)0,(void*)0},{&g_18,(void*)0},{(void*)0,&g_18}}};
                    int8_t *****l_2432[8][4][5] = {{{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982},{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982}},{{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982},{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982}},{{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982},{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982}},{{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982},{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982}},{{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982},{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982}},{{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982},{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982}},{{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982},{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982}},{{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982},{(void*)0,(void*)0,&g_982,(void*)0,(void*)0},{&g_982,&g_982,(void*)0,&g_982,&g_982}}};
                    int16_t l_2437 = 0x9ECAL;
                    int i, j, k;
                    g_25++;
                    for (g_18 = 0; (g_18 != 0); g_18++)
                    {
                        return p_4;
                    }
                    if (func_30(g_5))
                    {
                        return p_4;
                    }
                    else
                    {
                        int32_t *l_2418 = &g_272[1][4][2];
                        uint32_t *l_2435 = &g_113[0][0][2];
                        (**g_1203) = &l_24;
                        l_2436 &= ((-1L) ^ ((safe_div_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((((l_2425 == (*g_269)) < ((l_22[1] &= ((0L & (safe_unary_minus_func_uint8_t_u((*l_2418)))) , (**g_493))) | ((safe_add_func_uint16_t_u_u(0x32E3L, ((*g_1667) ^= ((safe_sub_func_uint8_t_u_u((p_4 >= ((~((*l_2435) = (((l_2433 = l_2432[4][1][2]) != l_2434[1][0][0]) , p_4))) && (*g_617))), 4L)) >= (**g_1400))))) , l_20))) ^ l_20), p_4)) != (*l_17)), (*g_1205))) , (*l_2418)));
                        l_2439++;
                    }
                }
                for (g_435 = 2; (g_435 == 20); ++g_435)
                {
                    uint16_t * const **l_2448 = (void*)0;
                    uint16_t * const **l_2449 = (void*)0;
                    int32_t l_2472 = 1L;
                    int16_t *l_2492[1][6] = {{&l_20,&l_20,&l_20,&l_20,&l_20,&l_20}};
                    const uint32_t *l_2510 = &g_340[7][6];
                    int32_t l_2511 = (-1L);
                    int i, j;
                    l_2474 = (safe_lshift_func_uint16_t_u_s(((((safe_lshift_func_uint16_t_u_s(((*g_102) ^= (((((*g_492) = (*g_492)) == (l_2450 = (void*)0)) >= 4UL) >= (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((p_4 <= ((((l_2473[2] = (safe_add_func_uint64_t_u_u((0x1F714449L <= ((((~(safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(l_2438, 1)), ((safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s(p_4, (((safe_mul_func_uint16_t_u_u(((l_2470 = l_2469) != ((p_4 >= (*l_8)) , l_2471)), p_4)) == (-1L)) , l_22[1]))), l_2472)) | 0x4C1B1E60F4A2C53ELL)))) >= p_4) , (-7L)) , l_2436)), p_4))) == 0xBEL) == 0x1EL) >= p_4)), 1)), p_4)))), l_20)) , 0UL) < p_4) && 0xE3E7L), p_4));
                    (**g_1203) = l_2475[2];
                    if (((safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(255UL, (safe_mul_func_uint16_t_u_u((l_2436 | l_2473[0]), (0UL != ((safe_sub_func_uint16_t_u_u((*g_102), 1L)) , ((*g_1400) == (l_2489 = (void*)0)))))))), ((((l_2494 = (l_2493[1] ^= ((**g_1666) = (safe_sub_func_int8_t_s_s(l_2473[2], (-3L)))))) , l_2495) & p_4) | l_20))), p_4)), p_4)))) || l_2493[1]))
                    {
                        int32_t *l_2497 = &l_2473[0];
                        int32_t **l_2498 = &l_2419[2];
                        l_2496[1][1] = &l_2473[0];
                        (*g_1204) = (l_2499[4] = ((*l_2498) = l_2497));
                        return p_4;
                    }
                    else
                    {
                        uint32_t *l_2509 = &g_340[6][6];
                        uint32_t **l_2508 = &l_2509;
                        l_2494 = (safe_div_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((l_2511 ^= (p_4 != ((((*g_102) == (~(safe_add_func_uint32_t_u_u((((&g_340[6][6] != (void*)0) <= (!(-2L))) ^ (l_2472 >= p_4)), (((*l_2508) = func_94(l_2507, func_94((**g_562), &l_22[0], p_4), g_23)) != l_2510))))) | (*g_617)) & l_2493[1]))))), p_4));
                        l_2472 = (l_2473[2] != ((p_4 == ((0x993D7225L == l_2493[1]) , (0xE0C15D35L | p_4))) | ((4UL == (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((**l_2425)++), (0xF2194803DEE0DAAFLL || (((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((-4L), (*g_1667))), 0)) != 0x8341A13487E794C5LL) <= p_4)))), 0x2AL))) , (**g_1666))));
                        if (p_4)
                            continue;
                    }
                    return p_4;
                }
                for (l_2438 = 27; (l_2438 != (-18)); l_2438 = safe_sub_func_uint64_t_u_u(l_2438, 3))
                {
                    int8_t ****l_2527[7][4][9] = {{{&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562},{&g_562,&g_562,&g_562,&g_562,&g_562,(void*)0,&g_562,&g_562,&g_562},{&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562},{&g_562,(void*)0,&g_562,&g_562,&g_562,(void*)0,&g_562,&g_562,&g_562}},{{&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562},{&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562},{&g_562,&g_562,&g_562,&g_562,&g_562,(void*)0,&g_562,&g_562,&g_562},{&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562}},{{&g_562,(void*)0,&g_562,&g_562,&g_562,(void*)0,&g_562,&g_562,&g_562},{&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562},{&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562,&g_562},{&g_562,&g_562,&g_562,&g_562,&g_562,(void*)0,&g_562,&g_562,&g_562}},{{&g_562,&g_562,(void*)0,(void*)0,&g_562,&g_562,&g_562,&g_562,&g_562},{&g_562,&g_562,(void*)0,(void*)0,(void*)0,&g_562,&g_562,(void*)0,&g_562},{&g_562,&g_562,&g_562,&g_562,(void*)0,(void*)0,&g_562,(void*)0,(void*)0},{&g_562,&g_562,(void*)0,&g_562,&g_562,(void*)0,&g_562,(void*)0,(void*)0}},{{&g_562,&g_562,(void*)0,&g_562,&g_562,&g_562,&g_562,&g_562,(void*)0},{&g_562,&g_562,(void*)0,(void*)0,&g_562,&g_562,&g_562,&g_562,&g_562},{&g_562,&g_562,(void*)0,(void*)0,(void*)0,&g_562,&g_562,(void*)0,&g_562},{&g_562,&g_562,&g_562,&g_562,(void*)0,(void*)0,&g_562,(void*)0,(void*)0}},{{&g_562,&g_562,(void*)0,&g_562,&g_562,(void*)0,&g_562,(void*)0,(void*)0},{&g_562,&g_562,(void*)0,&g_562,&g_562,&g_562,&g_562,&g_562,(void*)0},{&g_562,&g_562,(void*)0,(void*)0,&g_562,&g_562,&g_562,&g_562,&g_562},{&g_562,&g_562,(void*)0,(void*)0,(void*)0,&g_562,&g_562,(void*)0,&g_562}},{{&g_562,&g_562,&g_562,&g_562,(void*)0,(void*)0,&g_562,(void*)0,(void*)0},{&g_562,&g_562,(void*)0,&g_562,&g_562,(void*)0,&g_562,(void*)0,(void*)0},{&g_562,&g_562,(void*)0,&g_562,&g_562,&g_562,&g_562,&g_562,(void*)0},{&g_562,&g_562,(void*)0,(void*)0,&g_562,&g_562,&g_562,&g_562,&g_562}}};
                    int i, j, k;
                    l_2527[4][3][3] = l_2526;
                }
                (**g_1203) = &l_22[0];
            }
            --l_2528;
        }
        if (((void*)0 == &l_21))
        {
            int32_t *l_2531 = &l_2493[2];
            int32_t *l_2545 = &l_2493[1];
            (*g_1204) = func_38(l_2531, (safe_unary_minus_func_uint64_t_u((safe_add_func_uint64_t_u_u(18446744073709551607UL, ((((**g_563) &= (safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((+(+((**g_1666) != (!((*g_230)++))))), p_4)) >= 0xECA0L), l_2544))) <= p_4) > 9UL))))), l_2545, (*l_2545));
            ++l_2546;
        }
        else
        {
            uint32_t *l_2551 = (void*)0;
            uint32_t *l_2552 = &l_2436;
            int32_t **l_2553 = (void*)0;
            int32_t **l_2554 = &l_2475[0];
            (*g_1204) = ((*l_2554) = func_94((***l_2526), &l_2473[2], ((*l_2552) = (safe_add_func_int8_t_s_s((*l_8), ((*g_230) |= (l_2493[1] ^= p_4)))))));
        }
    }
    (*l_2556) = func_38(l_2555, p_4, ((*l_2556) = &l_2494), ((p_4 == (*l_2555)) , ((safe_mul_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s(((*l_2555) <= (9L < ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u(p_4, ((++(***g_492)) | (((p_4 > 0x10208DEAL) ^ 0x532267C3L) ^ 0x3E06007C0E7D80BDLL)))), (-1L))), 6)) , p_4) , l_2579[0][0][0]), p_4)) > p_4), 6)), 0)), (*g_617))), 11)) & p_4))), 0x2C54B809L)) <= p_4) , g_2580) == (void*)0), p_4)) == (*l_2555))));
    (*l_2555) = ((*l_2555) != (((*g_2583) &= (safe_sub_func_uint64_t_u_u(l_2586, (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((((void*)0 != &g_1665[2][3][1]) != ((l_2593 != &g_1680) >= (1L <= p_4))), (safe_mod_func_int64_t_s_s(((((((safe_div_func_int32_t_s_s(((safe_div_func_int8_t_s_s(p_4, p_4)) & p_4), (*l_2555))) , 0x01AAL) , 4294967291UL) ^ p_4) == p_4) <= p_4), p_4)))) , (**g_1666)), (***g_492))) != 0xFAL), 0x7A11L))))) != 18446744073709551615UL));
    return p_4;
}







static int32_t func_30(int32_t p_31)
{
    int8_t l_34 = (-1L);
    int32_t *l_56 = &g_18;
    uint16_t l_1392 = 0x81CDL;
    int32_t l_1438 = 3L;
    const int8_t *****l_1474 = (void*)0;
    int32_t l_1493 = 0xE2AE3C5FL;
    int32_t l_1495[5] = {1L,1L,1L,1L,1L};
    int32_t l_1531 = 0x7AA01C88L;
    int64_t l_1534 = 0xDA6EC77ADD9D07CDLL;
    uint32_t **l_1548 = &g_1258;
    int16_t **l_1606 = (void*)0;
    uint64_t *l_1608 = &g_1592[1];
    uint8_t ****l_1613 = &g_269;
    uint8_t l_1614 = 0x30L;
    uint32_t l_1669 = 0xF8422200L;
    uint8_t l_1715 = 0UL;
    int8_t l_1739 = 7L;
    int32_t l_1740 = (-1L);
    int32_t l_1743 = 0xD18F946FL;
    uint32_t l_1772[5][9] = {{18446744073709551608UL,0x7A55EEFCL,18446744073709551615UL,9UL,4UL,0x97330AF7L,0x2D31F0F7L,0x4BFB1804L,0x72AEB6A8L},{0x7A55EEFCL,0x97330AF7L,18446744073709551611UL,0xD4F96A2FL,0xD4F96A2FL,18446744073709551611UL,0x97330AF7L,0x7A55EEFCL,6UL},{18446744073709551608UL,4UL,0x2D31F0F7L,0x8F29F48EL,0xD4F96A2FL,0x7F08484DL,0x6B1782F1L,9UL,9UL},{7UL,18446744073709551615UL,4UL,0x7A55EEFCL,4UL,18446744073709551615UL,7UL,0x7F08484DL,6UL},{0x7F08484DL,0x4BFB1804L,7UL,0x7A55EEFCL,9UL,0xD4F96A2FL,0x72AEB6A8L,4UL,9UL}};
    int16_t l_1824 = 0xB67EL;
    int32_t ****l_1927 = &g_1326[0][3];
    uint8_t * const l_1959 = &g_1960;
    uint8_t * const *l_1958[9] = {&l_1959,&l_1959,&l_1959,&l_1959,&l_1959,&l_1959,&l_1959,&l_1959,&l_1959};
    uint32_t l_2008 = 0xA0D1E903L;
    uint16_t ***l_2047[7];
    int32_t l_2156[4][9][7] = {{{0L,0L,0x1EC3B846L,0L,0L,0x98F68439L,0L},{(-1L),0x77EC9ED2L,0x8ED79559L,0x6B3D483DL,7L,1L,0x84EBD37CL},{0L,0x98F68439L,0x6E5970DFL,0xB748CD46L,1L,0xE2940B57L,0xAE5CBFCFL},{(-1L),0x6B3D483DL,0x0FDA0652L,0x7FE8B9D8L,0x0FDA0652L,0x6B3D483DL,(-1L)},{0L,0x8597EB5FL,4L,0x4251BD88L,(-5L),0x2A780ED4L,0x1EC3B846L},{0xAE8F4D18L,0x45F7313BL,0xB2E26762L,0xC74B6DBCL,0x7FE8B9D8L,0x84EBD37CL,0x77EC9ED2L},{0x6E5970DFL,0x0867DE35L,4L,0x936C25AAL,0xBC7095ABL,0x936C25AAL,4L},{(-1L),(-1L),0x0FDA0652L,(-7L),0x21812A9DL,0x8ED79559L,0x36719606L},{0xBC7095ABL,1L,0x6E5970DFL,(-1L),0x1EC3B846L,0x0867DE35L,3L}},{{9L,1L,0x8ED79559L,7L,0x21812A9DL,0x41FE78C1L,0x21812A9DL},{0xAE5CBFCFL,0x464FCDB3L,0x1EC3B846L,(-1L),0xBC7095ABL,(-1L),8L},{7L,0x8ED79559L,1L,9L,0x7FE8B9D8L,0x77EC9ED2L,(-7L)},{4L,0L,0xCAD1EB48L,0x8597EB5FL,(-5L),0xC860A62DL,8L},{(-7L),0x0FDA0652L,(-1L),(-1L),0x0FDA0652L,(-7L),0x21812A9DL},{0xFA863F24L,(-1L),0xD835E832L,0L,1L,(-4L),3L},{0xC74B6DBCL,0xB2E26762L,0x45F7313BL,0xAE8F4D18L,7L,(-1L),0x36719606L},{0L,(-1L),0xBC7095ABL,0xE2940B57L,0L,0x8597EB5FL,4L},{0x7FE8B9D8L,0x0FDA0652L,0x6B3D483DL,(-1L),0x4649489FL,5L,0x77EC9ED2L}},{{0xBBD3B43CL,0L,3L,0xC860A62DL,0x832A7746L,0x53A80235L,0x1EC3B846L},{0x6B3D483DL,0x8ED79559L,0x77EC9ED2L,(-1L),0x45F7313BL,0x45F7313BL,(-1L)},{(-5L),0x464FCDB3L,(-5L),0xE2940B57L,3L,0x4251BD88L,0xAE5CBFCFL},{(-7L),1L,0x21812A9DL,0xAE8F4D18L,0x41FE78C1L,0x0FDA0652L,0x84EBD37CL},{0x1EC3B846L,1L,0x2489A50FL,0L,0xBD6B3E12L,0x4251BD88L,0L},{5L,(-1L),0xAE8F4D18L,(-1L),5L,0x45F7313BL,7L},{(-1L),0x0867DE35L,0L,0x8597EB5FL,0L,0x53A80235L,4L},{0x8ED79559L,0x45F7313BL,(-7L),9L,0x36719606L,5L,0x84EBD37CL},{0x2489A50FL,0x464FCDB3L,8L,(-4L),8L,0x464FCDB3L,0x2489A50FL}},{{0x8ED79559L,0xAE8F4D18L,5L,0xC74B6DBCL,0x4649489FL,1L,0x25845DFFL},{0xD5965923L,0L,0xBBD3B43CL,0xE2940B57L,4L,1L,3L},{7L,0x45F7313BL,5L,(-1L),0xAE8F4D18L,(-1L),5L},{0xBD6B3E12L,0x90F2295EL,8L,0L,0xFA863F24L,0x0867DE35L,0xAE5CBFCFL},{0xAE8F4D18L,(-7L),7L,5L,0x25845DFFL,0x45F7313BL,0x0FDA0652L},{1L,0L,0xD835E832L,(-1L),0xFA863F24L,0x8597EB5FL,0xFA863F24L},{0x84EBD37CL,0x25845DFFL,0x25845DFFL,0x84EBD37CL,0xAE8F4D18L,0x6B3D483DL,9L},{4L,0x0867DE35L,0x6E5970DFL,0x073A67D7L,4L,0x98F68439L,(-5L)},{5L,7L,(-7L),0xAE8F4D18L,0x4649489FL,0x77EC9ED2L,9L}}};
    int32_t **l_2166 = &g_165[2][4][1];
    uint32_t l_2285[6];
    uint8_t l_2303 = 0xBCL;
    uint32_t * const *l_2342 = &g_1258;
    uint32_t * const * const *l_2341 = &l_2342;
    uint32_t * const * const **l_2340 = &l_2341;
    uint32_t * const * const ***l_2339 = &l_2340;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_2047[i] = &g_493;
    for (i = 0; i < 6; i++)
        l_2285[i] = 0x7DC89349L;
    for (g_25 = 0; (g_25 <= 1); g_25 += 1)
    {
        int32_t *l_33[6][10];
        int8_t *l_55 = &l_34;
        int32_t **l_1435 = &g_165[0][6][0];
        int32_t **l_1436 = &l_33[0][1];
        int8_t **l_1472 = &g_177;
        int8_t l_1476 = 0L;
        int64_t l_1484 = 0xD2B4E7B7005B898CLL;
        int8_t l_1504[1][6][1];
        int16_t l_1530 = 0x6EB5L;
        uint32_t **l_1549 = (void*)0;
        uint8_t ****l_1612 = &g_269;
        int64_t l_1641 = (-1L);
        int32_t *****l_1722 = (void*)0;
        uint16_t l_1758 = 0x36CEL;
        int16_t **l_1764 = &g_1667;
        uint16_t l_1792 = 0x2CE5L;
        const uint32_t *l_1881 = &g_113[1][2][1];
        const uint32_t **l_1880 = &l_1881;
        const uint32_t ***l_1879[6][1];
        const uint32_t ****l_1878[10] = {&l_1879[2][0],&l_1879[2][0],&l_1879[2][0],&l_1879[2][0],&l_1879[2][0],&l_1879[2][0],&l_1879[2][0],&l_1879[2][0],&l_1879[2][0],&l_1879[2][0]};
        int8_t l_1905[7][7][5] = {{{(-1L),0x29L,(-1L),(-2L),(-1L)},{0xB0L,0xB0L,1L,(-1L),(-1L)},{0x87L,(-10L),0x60L,0L,0x71L},{5L,(-3L),0x34L,0x87L,0xD4L},{(-2L),(-10L),0xB7L,(-9L),6L},{(-9L),0xB0L,0x24L,0x33L,0xB7L},{(-1L),0x29L,0L,7L,6L}},{{0x33L,1L,0L,0xD9L,0xFFL},{(-3L),0x24L,0x24L,(-3L),1L},{0x06L,0xFFL,0xB7L,0x7BL,5L},{(-10L),7L,0x34L,0L,0x60L},{0L,(-3L),0x60L,0x7BL,(-3L)},{6L,(-1L),1L,(-3L),0L},{0xFFL,0L,(-1L),0xD9L,0x04L}},{{(-3L),6L,0xD9L,7L,0x04L},{0xCCL,0L,0x33L,0x33L,0L},{0x71L,0x33L,(-1L),(-9L),(-3L)},{7L,0xC4L,(-2L),0x87L,0x60L},{0xC4L,(-1L),(-1L),0L,5L},{7L,0x7BL,0x04L,(-1L),1L},{0x71L,0xD4L,0xCCL,(-2L),0xFFL}},{{0xCCL,(-1L),0xC4L,0x60L,0xB7L},{0x60L,(-1L),0xCCL,0x87L,0x87L},{0x71L,0x29L,0x71L,0L,0L},{0L,6L,7L,0L,0x29L},{(-1L),0x32L,0xC4L,0x71L,0x04L},{0x5DL,(-3L),7L,0x29L,0x06L},{0x7BL,(-3L),0x71L,0xD9L,(-1L)}},{{1L,7L,0xCCL,(-1L),0x34L},{(-3L),0L,(-3L),(-1L),(-1L)},{0L,0xD9L,0xFFL,0xD9L,0L},{0xC4L,0L,6L,0x29L,0xCCL},{(-10L),0x60L,0L,0x71L,0x32L},{0xD4L,(-1L),(-10L),0L,0xCCL},{1L,0x71L,0x06L,0L,0L}},{{0xCCL,0xB0L,(-3L),0x87L,(-1L)},{0x06L,(-9L),0x33L,(-2L),0x34L},{0x06L,0x24L,(-1L),(-10L),(-1L)},{0xCCL,0xCCL,(-9L),0x32L,0x06L},{1L,0x5DL,(-2L),(-1L),0x04L},{0xD4L,1L,5L,1L,0x29L},{(-10L),0x5DL,0x87L,0xC4L,0L}},{{0xC4L,0xCCL,0xB0L,(-3L),0x87L},{0L,0x24L,(-1L),(-1L),0xB7L},{(-3L),(-9L),(-1L),0x33L,0x71L},{1L,0xB0L,0xB0L,1L,(-1L)},{0x7BL,0x71L,0x87L,6L,0xD4L},{0x5DL,(-1L),5L,7L,(-2L)},{(-1L),0x60L,(-2L),6L,1L}}};
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 10; j++)
                l_33[i][j] = &g_18;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1504[i][j][k] = 0xF9L;
            }
        }
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_1879[i][j] = &l_1880;
        }
        g_35--;
    }
    for (l_1824 = 0; (l_1824 < 21); ++l_1824)
    {
        int16_t ***l_1928 = &l_1606;
        int16_t ****l_1929 = &g_1665[2][3][1];
        uint8_t *l_1934 = (void*)0;
        uint8_t *l_1935 = (void*)0;
        uint8_t *l_1936[7];
        int32_t l_1937 = 0xB6D882BCL;
        uint16_t l_1941 = 0x18EEL;
        int32_t l_1963 = 0x974F54E0L;
        int32_t *l_2011[2];
        const uint64_t l_2085 = 7UL;
        const uint8_t **l_2172 = (void*)0;
        const uint8_t ***l_2171 = &l_2172;
        int64_t l_2176 = (-10L);
        uint32_t **l_2200 = &g_1258;
        uint8_t *****l_2269 = (void*)0;
        const int16_t l_2343 = 1L;
        uint64_t *l_2402 = &g_1592[1];
        uint64_t ** const l_2401 = &l_2402;
        uint64_t ** const *l_2400 = &l_2401;
        int i;
        for (i = 0; i < 7; i++)
            l_1936[i] = &l_1614;
        for (i = 0; i < 2; i++)
            l_2011[i] = &l_1495[0];
    }
    return p_31;
}







static int32_t * func_38(int32_t * p_39, uint64_t p_40, int32_t * p_41, int16_t p_42)
{
    int8_t l_1395[7][7] = {{0xC3L,0x84L,0x4EL,0x4EL,0x84L,0xC3L,0x84L},{0xE1L,0x7AL,0xF6L,0L,0L,0L,0xF6L},{0x92L,0x92L,0xC3L,0x4EL,0xC3L,0x92L,0x92L},{0x0FL,0x7AL,9L,0x7AL,0x0FL,0xC5L,0xF6L},{0x79L,0x84L,0x79L,0xC3L,0xC3L,0x79L,0x84L},{0xF6L,1L,9L,0x76L,0L,0x7AL,0L},{0x79L,0xC3L,0xC3L,0x79L,0x84L,0x79L,0xC3L}};
    int64_t **l_1399 = &g_617;
    int64_t ***l_1398[6] = {&l_1399,&l_1399,&l_1399,&l_1399,&l_1399,&l_1399};
    uint32_t l_1405 = 0xE6A220F7L;
    uint32_t *l_1416 = &g_113[2][0][2];
    uint16_t *l_1421 = &g_1171[7];
    int32_t l_1423[7] = {0x27A0A1DFL,0x27A0A1DFL,0x27A0A1DFL,0x27A0A1DFL,0x27A0A1DFL,0x27A0A1DFL,0x27A0A1DFL};
    int32_t *l_1424[2][7][10] = {{{&g_9,&g_272[1][1][6],&g_18,(void*)0,&g_112,&g_272[0][3][2],&g_272[0][3][2],&g_112,(void*)0,&g_18},{&g_14,&g_14,(void*)0,&g_272[0][3][2],(void*)0,&g_106,&g_112,&g_112,(void*)0,&g_272[0][3][7]},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1423[3],&g_272[0][3][7],&g_112,&g_272[0][3][5],(void*)0,(void*)0},{&g_112,&g_14,&g_18,&g_1342,&g_272[0][3][7],(void*)0,&g_272[0][3][2],(void*)0,&g_272[0][3][7],&g_1342},{(void*)0,&g_272[1][1][6],(void*)0,&g_112,&g_18,&g_112,&g_106,&g_14,&g_106,&g_1342},{&g_14,&g_1342,&g_112,&g_272[0][3][5],&g_9,&g_18,&g_272[0][3][7],&g_14,&l_1423[3],(void*)0},{&g_18,&g_272[0][3][2],(void*)0,&g_14,&g_106,(void*)0,(void*)0,(void*)0,(void*)0,&g_106}},{{(void*)0,&g_18,&g_18,(void*)0,&g_1342,&l_1423[3],&g_112,&g_272[0][3][5],(void*)0,(void*)0},{&g_272[0][3][2],(void*)0,(void*)0,&g_9,&g_14,&g_18,&g_18,&g_112,(void*)0,&g_272[1][1][6]},{&g_272[1][1][6],&g_106,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_112,(void*)0,(void*)0},{&g_18,&g_14,&g_18,&g_14,&g_18,(void*)0,&l_1423[3],(void*)0,&l_1423[3],&g_9},{(void*)0,&g_18,&g_272[0][3][7],&g_272[0][3][5],&l_1423[3],&g_18,&g_18,&l_1423[3],&g_106,&g_9},{&g_18,&g_272[0][3][5],(void*)0,&g_112,&g_18,(void*)0,(void*)0,&g_272[0][3][7],&g_272[0][3][7],(void*)0},{&g_272[0][3][5],(void*)0,&g_1342,&g_1342,(void*)0,&g_272[0][3][5],(void*)0,&g_18,(void*)0,&g_272[1][1][6]}}};
    uint64_t l_1425[6] = {0xF8767FEA582DBAC4LL,0xF8767FEA582DBAC4LL,0xF8767FEA582DBAC4LL,0xF8767FEA582DBAC4LL,0xF8767FEA582DBAC4LL,0xF8767FEA582DBAC4LL};
    uint64_t l_1428 = 1UL;
    int16_t l_1431 = 0xB867L;
    uint8_t l_1432 = 0x60L;
    int i, j, k;
    (*p_41) ^= (safe_lshift_func_uint8_t_u_u(((*g_230) &= (l_1395[4][2] != ((safe_rshift_func_int8_t_s_u(((g_1400 = &g_617) != (void*)0), (safe_add_func_int8_t_s_s(p_40, ((safe_mul_func_int16_t_s_s(p_40, (l_1405 | (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((*l_1416) = 4294967295UL), (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((**g_492) = l_1421) == (void*)0), p_40)), l_1395[4][2])))) < (*g_617)), l_1395[4][2])), 0xA839L)) , g_1422), l_1395[4][2])), 1))))) <= 0x8E7B6364L))))) & g_67[3][0][2]))), 1));
    l_1425[3]--;
    ++l_1428;
    --l_1432;
    return p_41;
}







static int32_t * func_43(int32_t * p_44)
{
    int32_t l_61 = (-5L);
    uint16_t *l_66 = &g_67[2][0][1];
    uint64_t *l_434[8];
    int32_t *l_436 = &g_437;
    int8_t *l_488 = &g_178[1];
    int8_t l_490[5][3][8] = {{{(-9L),(-1L),(-1L),(-9L),(-1L),(-1L),(-9L),(-1L)},{(-9L),(-9L),3L,(-9L),(-9L),3L,(-9L),(-9L)},{(-1L),(-9L),(-1L),(-1L),(-9L),(-1L),(-1L),(-9L)}},{{(-9L),(-1L),(-1L),(-9L),(-1L),(-1L),(-9L),(-1L)},{(-9L),(-9L),3L,(-9L),(-9L),3L,(-1L),(-1L)},{3L,(-1L),3L,3L,(-1L),3L,3L,(-1L)}},{{(-1L),3L,3L,(-1L),3L,3L,(-1L),3L},{(-1L),(-1L),(-9L),(-1L),(-1L),(-9L),(-1L),(-1L)},{3L,(-1L),3L,3L,(-1L),3L,3L,(-1L)}},{{(-1L),3L,3L,(-1L),3L,3L,(-1L),3L},{(-1L),(-1L),(-9L),(-1L),(-1L),(-9L),(-1L),(-1L)},{3L,(-1L),3L,3L,(-1L),3L,3L,(-1L)}},{{(-1L),3L,3L,(-1L),3L,3L,(-1L),3L},{(-1L),(-1L),(-9L),(-1L),(-1L),(-9L),(-1L),(-1L)},{3L,(-1L),3L,3L,(-1L),3L,3L,(-1L)}}};
    int32_t l_544 = 0xBC51A492L;
    int32_t l_545 = 1L;
    int32_t l_548[2][10] = {{(-1L),0x42B11D2DL,(-1L),(-1L),0x42B11D2DL,(-1L),0x37497E68L,(-1L),0x42B11D2DL,(-1L)},{0x0586A4F1L,(-5L),0x0586A4F1L,(-1L),0x37497E68L,0x37497E68L,(-1L),0x0586A4F1L,(-5L),0x0586A4F1L}};
    int16_t l_603 = 0xA7B9L;
    uint16_t ***l_611 = (void*)0;
    int64_t *l_616[3][2] = {{&g_395,&g_395},{&g_395,&g_395},{&g_395,&g_395}};
    int16_t l_690 = 0x4F4CL;
    uint16_t l_729 = 4UL;
    int64_t *l_763 = &g_274[5];
    int64_t l_819 = 0x70C37922DD2227EBLL;
    int8_t ****l_844 = &g_562;
    uint32_t *l_851 = &g_113[0][1][3];
    uint32_t ** const l_850 = &l_851;
    const uint32_t l_908 = 0xFF9FFE1FL;
    int32_t l_913 = 0x20E0EFABL;
    int8_t l_1120 = 1L;
    int32_t *l_1266 = (void*)0;
    int16_t l_1285 = 0xD983L;
    uint32_t ***l_1302 = (void*)0;
    int32_t l_1308 = 2L;
    uint16_t l_1343[6][6] = {{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}};
    int32_t *l_1363[8] = {&l_61,&l_61,&l_61,&l_61,&l_61,&l_61,&l_61,&l_61};
    int32_t ** const *l_1382[6][2][3] = {{{&g_1327[6],(void*)0,&g_1327[3]},{&g_1327[6],(void*)0,&g_1327[6]}},{{(void*)0,&g_1327[6],(void*)0},{&g_1327[3],&g_1327[6],&g_1327[6]}},{{(void*)0,(void*)0,&g_1327[3]},{&g_1327[3],&g_1327[3],&g_1327[3]}},{{(void*)0,(void*)0,(void*)0},{&g_1327[3],&g_1327[3],&g_1327[3]}},{{(void*)0,(void*)0,(void*)0},{&g_1327[6],&g_1327[3],(void*)0}},{{&g_1327[6],(void*)0,(void*)0},{(void*)0,&g_1327[6],&g_1327[3]}}};
    int32_t ** const **l_1381[4];
    int32_t ** const ***l_1380 = &l_1381[3];
    int64_t **l_1389 = &l_616[0][1];
    uint64_t l_1390 = 18446744073709551615UL;
    int32_t *l_1391 = &l_1308;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_434[i] = &g_435;
    for (i = 0; i < 4; i++)
        l_1381[i] = &l_1382[3][0][1];
    (*l_436) ^= (safe_div_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(l_61, ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(g_9, ((((++(*l_66)) && (safe_mul_func_uint8_t_u_u(l_61, (9UL ^ (*p_44))))) == ((g_435 = func_72(l_61, (*p_44), p_44, ((0L <= 0xF2DCFCB68B63C96ALL) | 0xB6L))) & g_18)) , 0x76BCL))), l_61)) || 1UL))) > 0xD3L), 0x3513L));
    if ((*p_44))
    {
        return &g_437;
    }
    else
    {
        int32_t **l_438 = (void*)0;
        uint64_t l_443 = 0x261B0E70246FB89ALL;
        uint8_t l_444 = 250UL;
        int8_t *l_445 = &g_32[0][2];
        int8_t l_456 = 3L;
        int32_t l_457 = 0x6BAD744FL;
        int64_t l_469 = 0x005FB6EAA696D364LL;
        int32_t l_532 = (-1L);
        int16_t l_583 = (-4L);
        uint16_t ***l_602 = &g_493;
        int32_t l_643 = 0x1E688197L;
        int32_t l_644 = (-7L);
        int32_t l_645 = 0xFF151640L;
        int32_t l_646 = 0x5EFF9E39L;
        int32_t l_647 = 0x3CDFEDB5L;
        int32_t l_648 = 0xCEF71317L;
        int32_t l_649[4] = {0xF1211DD3L,0xF1211DD3L,0xF1211DD3L,0xF1211DD3L};
        int64_t l_650 = 0x84AB3B4D95FC30B4LL;
        int32_t l_651 = 1L;
        uint32_t l_652[6];
        int16_t l_656 = 6L;
        int16_t l_665[6] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
        uint8_t *****l_683 = (void*)0;
        int16_t l_768[3][3] = {{0x0DC8L,0x0DC8L,0x8121L},{0x0DC8L,0x0DC8L,0x8121L},{0x0DC8L,0x0DC8L,0x8121L}};
        uint8_t l_827 = 0x36L;
        uint8_t l_886 = 0xCBL;
        uint16_t l_963 = 0x20ABL;
        const uint32_t * const l_971 = &g_113[2][0][2];
        const uint32_t * const *l_970 = &l_971;
        int32_t l_1012 = (-5L);
        uint32_t l_1151 = 0xE946DBB2L;
        int32_t l_1188 = 0x9DE5A25AL;
        int i, j;
        for (i = 0; i < 6; i++)
            l_652[i] = 4294967295UL;
        p_44 = (void*)0;
    }
    for (l_61 = 21; (l_61 > (-17)); l_61 = safe_sub_func_int8_t_s_s(l_61, 2))
    {
        int32_t l_1274 = (-4L);
        int32_t l_1281 = 0x0647866FL;
        int32_t l_1283 = 8L;
        int32_t l_1307 = 0xE4800F3FL;
        int16_t *l_1314 = &g_311;
    }
    l_1390 ^= (safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(((((+(-3L)) < (****g_982)) && ((*l_436) >= (safe_lshift_func_int16_t_s_s((l_1380 != &g_1202[2]), g_437)))) == (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((*l_436) & (safe_lshift_func_int16_t_s_s(((((&l_819 == ((*l_1389) = &l_819)) < (*g_617)) , (-1L)) ^ (*g_617)), 11))) || 2L), (**g_493))), (**g_229)))), g_25)), (*l_436)));
    return p_44;
}







static uint8_t func_45(int16_t p_46, int32_t * const p_47)
{
    int32_t *l_50[9][5][5] = {{{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_9}},{{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9}},{{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_9}},{{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9}},{{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_9}},{{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9}},{{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_9},{&g_9,&g_14,&g_9,&g_9,&g_9},{&g_14,&g_14,&g_14,&g_9,&g_14}},{{&g_18,&g_18,&g_18,&g_9,&g_9},{&g_9,&g_18,&g_9,&g_14,&g_14},{&g_18,&g_18,&g_18,&g_9,&g_9},{&g_9,&g_18,&g_9,&g_14,&g_14},{&g_18,&g_18,&g_18,&g_9,&g_9}},{{&g_9,&g_18,&g_9,&g_14,&g_14},{&g_18,&g_18,&g_18,&g_9,&g_9},{&g_9,&g_18,&g_9,&g_14,&g_14},{&g_18,&g_18,&g_18,&g_9,&g_9},{&g_9,&g_18,&g_9,&g_14,&g_14}}};
    uint32_t l_51 = 18446744073709551612UL;
    uint8_t l_54 = 0x93L;
    int i, j, k;
    --l_51;
    return l_54;
}







static uint64_t func_72(int32_t p_73, int32_t p_74, int32_t * p_75, int16_t p_76)
{
    uint32_t l_79 = 4294967288UL;
    int32_t *l_405 = &g_106;
    uint8_t *l_412 = &g_413[3];
    const int16_t *l_418 = &g_419[0][5][2];
    int16_t *l_420 = &g_421[0];
    uint32_t l_427[5];
    uint16_t **l_428 = &g_102;
    uint16_t **l_432 = &g_102;
    int i;
    for (i = 0; i < 5; i++)
        l_427[i] = 0x0B48B304L;
    if (((safe_div_func_int64_t_s_s((((*l_405) = (l_79 || func_80(g_9, p_76))) == ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((((*l_412)++) && (safe_rshift_func_int16_t_s_s((g_422 = ((*l_420) = (l_418 == l_418))), (((safe_add_func_int32_t_s_s((*p_75), g_110)) > (((safe_add_func_int8_t_s_s(g_413[3], p_73)) < l_79) , 0x9800L)) > p_76)))), 5)), l_427[0])), p_73)) > p_74)), p_76)) , (*p_75)))
    {
        uint16_t ***l_429 = &l_428;
        uint16_t **l_431 = &g_102;
        uint16_t ***l_430[4][6][8] = {{{&l_431,(void*)0,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431},{&l_431,&l_431,(void*)0,&l_431,&l_431,&l_431,&l_431,(void*)0},{(void*)0,(void*)0,&l_431,&l_431,&l_431,(void*)0,(void*)0,&l_431},{(void*)0,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431},{&l_431,&l_431,(void*)0,(void*)0,&l_431,&l_431,&l_431,&l_431},{(void*)0,&l_431,&l_431,&l_431,&l_431,&l_431,(void*)0,&l_431}},{{(void*)0,&l_431,(void*)0,&l_431,&l_431,&l_431,&l_431,(void*)0},{&l_431,&l_431,&l_431,(void*)0,&l_431,(void*)0,(void*)0,&l_431},{&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431},{&l_431,(void*)0,(void*)0,(void*)0,&l_431,&l_431,&l_431,&l_431},{&l_431,(void*)0,&l_431,&l_431,&l_431,&l_431,&l_431,(void*)0},{(void*)0,&l_431,(void*)0,&l_431,&l_431,(void*)0,&l_431,&l_431}},{{&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431},{&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431},{&l_431,&l_431,&l_431,(void*)0,&l_431,&l_431,(void*)0,&l_431},{&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,(void*)0,&l_431},{&l_431,&l_431,&l_431,&l_431,&l_431,(void*)0,&l_431,(void*)0},{&l_431,(void*)0,&l_431,(void*)0,(void*)0,&l_431,&l_431,&l_431}},{{(void*)0,&l_431,&l_431,(void*)0,(void*)0,&l_431,&l_431,&l_431},{&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431},{&l_431,&l_431,&l_431,&l_431,(void*)0,(void*)0,&l_431,&l_431},{&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431},{&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431},{(void*)0,&l_431,&l_431,(void*)0,&l_431,&l_431,&l_431,&l_431}}};
        int i, j, k;
        l_432 = ((*l_429) = l_428);
    }
    else
    {
        int32_t **l_433 = &l_405;
        (*l_433) = &p_74;
    }
    return p_73;
}







static const int8_t func_80(uint32_t p_81, int64_t p_82)
{
    int32_t l_104 = 0xF8266116L;
    int8_t l_121[8][4][3] = {{{1L,1L,1L},{6L,6L,6L},{1L,1L,1L},{6L,6L,6L}},{{1L,1L,1L},{6L,6L,6L},{1L,1L,1L},{6L,6L,6L}},{{1L,1L,1L},{6L,6L,6L},{1L,1L,1L},{6L,6L,6L}},{{1L,1L,1L},{6L,6L,6L},{1L,1L,1L},{6L,6L,6L}},{{1L,1L,1L},{6L,6L,6L},{1L,1L,1L},{6L,6L,6L}},{{1L,1L,1L},{6L,6L,6L},{1L,1L,1L},{6L,6L,6L}},{{1L,1L,1L},{6L,6L,6L},{1L,1L,1L},{6L,6L,6L}},{{1L,1L,1L},{6L,6L,6L},{1L,1L,1L},{6L,6L,6L}}};
    uint8_t *l_196 = &g_35;
    int32_t l_204 = 0x2BA47188L;
    uint32_t l_205 = 7UL;
    int32_t l_206 = 0xE8A67A0EL;
    int32_t **l_224 = &g_165[0][6][0];
    uint32_t l_313 = 0x71DC64E7L;
    int32_t l_333 = 0L;
    uint8_t *** const *l_339 = &g_269;
    int16_t *l_359 = &g_311;
    int8_t l_381[9] = {0x88L,0x88L,0x7CL,0x88L,0x88L,0x7CL,0x88L,0x88L,0x7CL};
    uint8_t l_392 = 0xC5L;
    const int16_t l_393[3][8][6] = {{{0x3A20L,(-1L),0x81BDL,(-1L),(-10L),0x52C7L},{0x3A20L,0xBE3BL,(-1L),0xBE3BL,0x3A20L,0x8DADL},{0x2BEEL,0x8DADL,(-10L),0x3A20L,0x52C7L,0xAAEFL},{0x984BL,0x7C7FL,0x52C7L,0x8DADL,0xAAEFL,0xAAEFL},{0x2DC6L,(-10L),(-10L),0x2DC6L,(-10L),0x8DADL},{0xAAEFL,0x2DE3L,(-1L),1L,0x8DADL,0x3A20L},{1L,0xBE3BL,0x52C7L,0x984BL,0x8DADL,0x984BL},{(-10L),0x7C7FL,(-10L),0x2BEEL,0x2DE3L,0xBE3BL}},{{(-1L),0x81BDL,(-1L),0x3A20L,0xC8A1L,0x2DE3L},{0x2DC6L,0x984BL,0x2BEEL,0x3A20L,0x3A20L,0x2BEEL},{(-1L),(-1L),0x7C7FL,0x2BEEL,(-1L),(-10L)},{(-10L),0x8DADL,(-1L),0x984BL,0x81BDL,0x7C7FL},{1L,(-10L),(-1L),0x2DC6L,(-1L),(-10L)},{0xC8A1L,0x2DC6L,0x7C7FL,0xAAEFL,(-10L),0x2BEEL},{0xAAEFL,(-10L),0x2BEEL,(-1L),0x52C7L,0x2DE3L},{0xBE3BL,(-10L),(-1L),(-1L),(-10L),0xBE3BL}},{{(-10L),0x2DC6L,(-10L),0x8DADL,(-1L),0x984BL},{(-1L),(-10L),0x52C7L,1L,0x81BDL,0x3A20L},{(-1L),0x8DADL,1L,0x8DADL,(-1L),(-1L)},{(-10L),(-1L),0x81BDL,(-1L),0x3A20L,0xC8A1L},{0xBE3BL,0x984BL,0x3A20L,(-1L),0xC8A1L,0xC8A1L},{0xAAEFL,0x81BDL,0x81BDL,0xAAEFL,0x2DE3L,(-1L)},{0xC8A1L,0x7C7FL,1L,0x2DC6L,0x8DADL,0x3A20L},{1L,0xBE3BL,0x52C7L,0x984BL,0x8DADL,0x984BL}}};
    const uint8_t l_404 = 0xFAL;
    int i, j, k;
lbl_239:
    for (g_35 = 0; (g_35 == 19); g_35 = safe_add_func_uint32_t_u_u(g_35, 3))
    {
        int32_t *l_93 = &g_14;
        int32_t *l_120 = &g_14;
        int32_t **l_119 = &l_120;
        const int8_t * const l_122 = &g_32[0][3];
        int32_t *l_124 = &g_112;
        g_106 = (safe_mod_func_int64_t_s_s(func_87(((249UL | ((safe_sub_func_uint32_t_u_u(((l_93 != ((*l_119) = func_94((g_18 , &g_32[1][8]), l_93, ((p_81 & (((p_82 & p_82) , (safe_mod_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((g_102 == (void*)0), l_104)), g_25))) , 3L)) , g_5)))) == l_121[0][3][2]), g_32[0][5])) < l_121[0][3][2])) , 250UL), l_122, p_81), 18446744073709551608UL));
        (*l_124) ^= 1L;
        for (p_82 = 15; (p_82 <= 8); --p_82)
        {
            return (*l_124);
        }
    }
    for (g_112 = 0; (g_112 == (-24)); g_112--)
    {
        int8_t *l_129 = &g_32[0][4];
        int32_t *l_131[4];
        uint8_t ***l_235 = (void*)0;
        int16_t *l_275 = &g_23;
        int i;
        for (i = 0; i < 4; i++)
            l_131[i] = &g_18;
        for (p_81 = 0; (p_81 <= 1); p_81 += 1)
        {
            int32_t l_159 = 1L;
            uint64_t l_163 = 0xD7A0FECAD7D98C00LL;
            int32_t l_166 = 9L;
            uint8_t ***l_267 = &g_229;
            int32_t l_277 = 0x18D7ED8BL;
            uint64_t l_312[7][8] = {{18446744073709551608UL,0xCE62D5B2A2280188LL,0x9773CC981A81CEC0LL,0xCE62D5B2A2280188LL,18446744073709551608UL,0x9773CC981A81CEC0LL,0xD0C7FC06333AFFB2LL,0xD0C7FC06333AFFB2LL},{18446744073709551613UL,0xCE62D5B2A2280188LL,0xC9E0B9C208A202F8LL,0xC9E0B9C208A202F8LL,0xCE62D5B2A2280188LL,18446744073709551613UL,0x11F6D28FF04680B1LL,0xCE62D5B2A2280188LL},{0xD0C7FC06333AFFB2LL,0x11F6D28FF04680B1LL,0xC9E0B9C208A202F8LL,0xD0C7FC06333AFFB2LL,0xC9E0B9C208A202F8LL,0x11F6D28FF04680B1LL,0xD0C7FC06333AFFB2LL,18446744073709551613UL},{0xCE62D5B2A2280188LL,18446744073709551608UL,0x9773CC981A81CEC0LL,0xD0C7FC06333AFFB2LL,0xD0C7FC06333AFFB2LL,0x9773CC981A81CEC0LL,18446744073709551608UL,0xCE62D5B2A2280188LL},{18446744073709551613UL,0xD0C7FC06333AFFB2LL,0x11F6D28FF04680B1LL,0xC9E0B9C208A202F8LL,0xD0C7FC06333AFFB2LL,0xC9E0B9C208A202F8LL,0x11F6D28FF04680B1LL,0xD0C7FC06333AFFB2LL},{0xCE62D5B2A2280188LL,0x11F6D28FF04680B1LL,18446744073709551613UL,0xCE62D5B2A2280188LL,0xC9E0B9C208A202F8LL,0xC9E0B9C208A202F8LL,0xCE62D5B2A2280188LL,18446744073709551613UL},{0xD0C7FC06333AFFB2LL,0xD0C7FC06333AFFB2LL,0x9773CC981A81CEC0LL,18446744073709551608UL,0xCE62D5B2A2280188LL,0x9773CC981A81CEC0LL,0xCE62D5B2A2280188LL,18446744073709551608UL}};
            int i, j;
            for (l_104 = 0; (l_104 <= 1); l_104 += 1)
            {
                uint8_t *l_173 = &g_35;
                uint8_t *l_176[1][9][1] = {{{&g_25},{(void*)0},{&g_25},{(void*)0},{&g_25},{(void*)0},{&g_25},{(void*)0},{&g_25}}};
                int32_t l_179 = (-9L);
                int32_t l_180 = 0L;
                int32_t l_203 = (-1L);
                int i, j, k;
                for (p_82 = 1; (p_82 >= 0); p_82 -= 1)
                {
                    int32_t l_158 = 0x0DF8BE3DL;
                    int32_t l_160 = 0x3DB586DAL;
                    int i, j;
                    for (g_35 = 0; (g_35 <= 1); g_35 += 1)
                    {
                        int8_t *l_130 = &l_121[7][3][2];
                        int16_t *l_161 = &g_23;
                        uint8_t *l_162[10] = {&g_35,(void*)0,&g_35,&g_35,(void*)0,&g_35,&g_35,(void*)0,&g_35,&g_35};
                        int32_t **l_164[5];
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_164[i] = &l_131[1];
                        g_165[0][6][0] = func_94(l_129, func_94(l_130, l_131[1], (((++(*g_102)) , (l_163 = (safe_div_func_int16_t_s_s((((*l_161) = (safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(g_32[g_35][(g_35 + 7)], 8)), (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((g_103 > (((0x9A2E5C1CL != ((g_5 <= (~(safe_sub_func_int8_t_s_s(((*l_130) = p_81), ((!(safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((g_113[2][0][2] || 255UL) ^ l_104), g_35)) > g_110), 0xE6L))) && g_106))))) , p_81)) , l_158) , 7L)), 1)), l_159)))) || p_82), p_81)) || l_159), l_160)), 13))) | (*g_102)), p_81)))) >= p_81)), g_9);
                    }
                    l_166 &= (g_32[p_81][(l_104 + 7)] >= p_82);
                }
                if ((l_179 = ((safe_sub_func_int16_t_s_s((((*g_177) = (((l_180 &= (((((safe_mod_func_uint64_t_u_u(0UL, g_32[0][8])) <= p_82) , (g_110 == (g_32[l_104][(l_104 + 1)] = 0x5AL))) >= ((((g_14 == (((safe_rshift_func_uint8_t_u_s(((0x9FL | (((l_166 = ((--(*l_173)) ^ 0L)) > (l_129 != g_177)) != 0x52L)) != l_121[0][3][2]), 4)) || p_82) < (-10L))) == (*g_102)) | l_179) != p_82)) == 5L)) || p_81) <= p_81)) == p_81), g_181)) & g_111)))
                {
                    uint16_t * const l_188 = (void*)0;
                    uint8_t **l_195 = &l_176[0][7][0];
                    int32_t l_201 = (-5L);
                    int16_t *l_202[8][9][3] = {{{(void*)0,&g_23,(void*)0},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0},{&g_23,&g_23,(void*)0},{&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23}},{{&g_23,&g_23,&g_23},{(void*)0,(void*)0,(void*)0},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23},{&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23}},{{&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23},{&g_23,&g_23,(void*)0},{&g_23,&g_23,(void*)0},{&g_23,&g_23,(void*)0},{&g_23,(void*)0,&g_23},{(void*)0,(void*)0,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23}},{{&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23},{&g_23,(void*)0,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23},{&g_23,(void*)0,&g_23},{&g_23,(void*)0,&g_23}},{{&g_23,&g_23,(void*)0},{&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23},{(void*)0,&g_23,&g_23}},{{&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23},{(void*)0,&g_23,&g_23},{&g_23,(void*)0,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0},{&g_23,&g_23,(void*)0},{&g_23,&g_23,(void*)0}},{{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{(void*)0,(void*)0,(void*)0},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23}},{{&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{(void*)0,&g_23,(void*)0},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,(void*)0,(void*)0},{&g_23,(void*)0,(void*)0},{(void*)0,(void*)0,&g_23}}};
                    int i, j, k;
                    l_206 |= (+(((((((l_204 = (g_32[0][3] , (!(safe_rshift_func_uint16_t_u_u(((l_203 |= (safe_lshift_func_int8_t_s_s((((void*)0 == l_188) || ((safe_mul_func_int16_t_s_s((((l_179 < (g_113[2][0][2]++)) , ((-1L) ^ ((safe_rshift_func_int16_t_s_s((((((l_196 = ((*l_195) = &g_35)) == (l_121[7][0][2] , l_173)) ^ ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((l_201 == p_82) || p_81), 0)), 13)) | p_82)) <= g_112) && g_18), g_14)) | 247UL))) || l_163), l_201)) & (*g_177))), 6))) < (*g_102)), (*g_102)))))) & l_104) ^ l_159) | l_205) > 1L) , l_159) , 0xBBL));
                    l_204 = (0xE2L < (0x19FDD49A4E49BDC6LL == l_204));
                }
                else
                {
                    uint64_t l_226 = 0x9908F0AE38097126LL;
                    l_180 = (((safe_mul_func_uint8_t_u_u(((!p_82) <= (safe_mul_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(((0xC288FB31F79D74A7LL >= ((safe_mul_func_uint32_t_u_u(((p_82 , &g_32[l_104][(l_104 + 1)]) == (void*)0), ((((((safe_sub_func_int8_t_s_s(0xD7L, ((safe_sub_func_uint64_t_u_u(((safe_div_func_int32_t_s_s((((((l_224 == ((g_225 != l_179) , &l_131[2])) <= 248UL) || p_81) && p_82) != p_82), 0x5C9785ECL)) && p_81), p_81)) < p_81))) , (-4L)) || l_226) < l_226) || p_81) > 3L))) > p_82)) & g_23), 0x70E7266255C8574BLL)) && p_82), 1L)) >= (*g_102)), 0UL))), g_103)) && l_226) , p_81);
                    for (l_205 = 25; (l_205 < 59); l_205++)
                    {
                        uint8_t **l_231 = &l_176[0][4][0];
                        int32_t **l_232 = &l_131[1];
                        int32_t *l_234[8][10][3] = {{{&g_14,(void*)0,&l_206},{&g_14,&g_14,(void*)0},{(void*)0,&l_206,&l_204},{&g_14,&l_204,&l_206},{&g_14,&l_179,&g_14},{(void*)0,&g_18,(void*)0},{&l_166,&l_166,(void*)0},{&g_106,(void*)0,&g_14},{&l_204,&l_206,&l_206},{(void*)0,(void*)0,(void*)0}},{{&l_179,&l_204,&l_206},{&g_106,&l_206,&g_14},{(void*)0,&g_14,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_179,(void*)0,&g_14},{(void*)0,&g_14,&l_206},{&g_14,&l_206,&l_204},{(void*)0,(void*)0,(void*)0},{&l_180,&l_206,&l_206},{&g_14,&g_14,(void*)0}},{{&l_179,(void*)0,&l_166},{&g_18,(void*)0,&g_18},{(void*)0,&g_14,&l_179},{&l_206,&l_206,&l_204},{(void*)0,&l_204,&l_206},{&l_206,(void*)0,&g_14},{(void*)0,&l_206,(void*)0},{&l_206,(void*)0,&g_106},{(void*)0,&l_166,&l_180},{&g_18,&g_18,&g_9}},{{&l_179,&l_179,&g_112},{&g_14,&l_204,&g_9},{&l_180,&l_206,(void*)0},{(void*)0,&g_14,&g_9},{&g_14,(void*)0,&g_112},{(void*)0,&g_106,&g_9},{&l_179,&l_180,&l_180},{(void*)0,&g_9,&g_106},{(void*)0,&g_112,(void*)0},{&g_106,&g_9,&g_14}},{{&l_179,(void*)0,&l_206},{(void*)0,&g_9,&l_204},{&l_204,&g_112,&l_179},{&g_106,&g_9,&g_18},{&l_166,&l_180,&l_166},{(void*)0,&g_106,(void*)0},{&g_14,(void*)0,&l_206},{&g_14,&g_14,(void*)0},{(void*)0,&l_206,&l_204},{&g_14,&l_204,&l_206}},{{&g_14,&l_179,&g_14},{(void*)0,&g_18,(void*)0},{&l_166,&l_166,(void*)0},{&g_106,(void*)0,&g_14},{&l_204,&l_206,&l_206},{(void*)0,(void*)0,(void*)0},{&l_179,&l_204,&l_206},{(void*)0,&g_14,(void*)0},{&l_206,&l_180,(void*)0},{&l_166,&g_106,&g_106}},{{&l_206,(void*)0,&l_180},{&l_204,(void*)0,&g_14},{&l_180,&l_179,&g_14},{(void*)0,&g_14,&g_9},{&g_9,&l_179,&l_204},{&l_206,(void*)0,(void*)0},{&l_166,(void*)0,&g_112},{&g_106,&g_106,&g_106},{(void*)0,&l_180,(void*)0},{(void*)0,&g_14,&g_14}},{{(void*)0,&g_14,(void*)0},{&g_14,&g_9,&l_206},{(void*)0,&l_204,&g_112},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_112,&g_9},{&g_106,&g_106,(void*)0},{&l_166,(void*)0,&l_206},{&l_206,&g_14,&g_106},{&g_9,(void*)0,(void*)0},{(void*)0,&l_206,&g_106}}};
                        int32_t **l_233 = &l_234[4][3][0];
                        uint8_t ****l_236[1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_236[i] = &l_235;
                        l_231 = g_229;
                        (*l_233) = ((*l_232) = ((*l_224) = &g_18));
                        l_235 = l_235;
                    }
                    for (g_181 = 0; (g_181 != 9); g_181 = safe_add_func_uint32_t_u_u(g_181, 1))
                    {
                        uint8_t l_246[8][1][10] = {{{5UL,3UL,3UL,5UL,5UL,3UL,3UL,5UL,5UL,3UL}},{{5UL,5UL,3UL,3UL,5UL,5UL,3UL,3UL,5UL,5UL}},{{5UL,3UL,3UL,5UL,5UL,3UL,3UL,5UL,5UL,3UL}},{{5UL,5UL,3UL,3UL,5UL,5UL,3UL,3UL,5UL,5UL}},{{5UL,3UL,3UL,5UL,5UL,3UL,3UL,5UL,5UL,3UL}},{{5UL,5UL,3UL,3UL,5UL,5UL,3UL,3UL,5UL,5UL}},{{5UL,3UL,3UL,5UL,5UL,3UL,3UL,5UL,5UL,3UL}},{{5UL,5UL,3UL,3UL,5UL,5UL,3UL,3UL,5UL,5UL}}};
                        uint16_t **l_249 = &g_102;
                        uint32_t *l_254 = &g_113[2][1][3];
                        uint8_t ****l_268[8][2] = {{(void*)0,&l_267},{&l_267,(void*)0},{&l_267,&l_267},{(void*)0,&l_267},{&l_267,(void*)0},{&l_267,&l_267},{(void*)0,&l_267},{&l_267,(void*)0}};
                        uint16_t *l_271 = &g_103;
                        int64_t *l_273[10][6] = {{&g_274[1],(void*)0,&g_274[0],(void*)0,&g_274[1],&g_274[0]},{&g_274[0],(void*)0,&g_274[0],&g_274[0],&g_274[0],(void*)0},{&g_274[0],&g_274[0],(void*)0,(void*)0,(void*)0,(void*)0},{&g_274[1],&g_274[1],&g_274[0],(void*)0,(void*)0,&g_274[0]},{(void*)0,&g_274[0],&g_274[0],&g_274[0],&g_274[0],&g_274[0]},{&g_274[0],&g_274[3],&g_274[0],&g_274[3],&g_274[0],(void*)0},{&g_274[0],&g_274[3],&g_274[0],&g_274[0],&g_274[0],(void*)0},{&g_274[0],&g_274[0],(void*)0,&g_274[3],&g_274[3],(void*)0},{&g_274[0],&g_274[0],&g_274[0],&g_274[0],&g_274[3],(void*)0},{&g_274[3],&g_274[0],&g_274[0],&g_274[0],&g_274[0],&g_274[0]}};
                        int32_t l_276 = 0x6FB75AE6L;
                        int i, j, k;
                        if (p_82)
                            goto lbl_239;
                        if (p_81)
                            continue;
                        l_277 &= (l_180 = (l_276 = ((safe_add_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s((**g_229), (((((safe_add_func_int32_t_s_s((g_25 , p_82), ((l_246[3][0][7] , (g_112 ^ (p_81 && (safe_add_func_uint32_t_u_u((((*l_249) = &g_103) != ((((g_274[2] = (g_272[1][1][6] = (((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(((*l_271) = (((((*l_254)++) == (safe_mul_func_int16_t_s_s((0x81DFD58D48762EDCLL || (safe_div_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((((g_269 = l_267) != (void*)0) , g_32[l_104][(l_104 + 1)]), 255UL)) == 0L) >= p_81), l_179)), 5UL)), 1UL))), g_5))) , l_179) || g_32[l_104][(l_104 + 1)])), g_106)) & (**g_229)) , p_81), 0x9091L)) ^ p_81) , p_82))) & p_82) && p_81) , (void*)0)), 1UL))))) < p_81))) , l_275) == (void*)0) > (-1L)) , 0L))) , l_246[2][0][1]) | p_82), p_81)) , l_166)));
                    }
                    for (l_166 = 0; (l_166 >= 0); l_166 -= 1)
                    {
                        return (*g_177);
                    }
                }
                if (p_81)
                    continue;
            }
            for (l_206 = (-20); (l_206 == (-20)); ++l_206)
            {
                uint16_t l_280[5][1][3] = {{{4UL,4UL,4UL}},{{0xCEA3L,0xA088L,0xCEA3L}},{{4UL,4UL,4UL}},{{0xCEA3L,0xA088L,0xCEA3L}},{{4UL,4UL,4UL}}};
                int8_t *l_323 = (void*)0;
                int32_t l_334[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_334[i] = 0x975B69B9L;
                for (g_23 = 2; (g_23 >= 0); g_23 -= 1)
                {
                    int32_t *l_282 = &l_206;
                    uint32_t l_288 = 0xBECAC809L;
                    int i;
                    if ((l_280[3][0][2] &= g_178[p_81]))
                    {
                        int32_t l_281 = 4L;
                        int i, j, k;
                        g_165[p_81][p_81][(g_23 + 1)] = func_94(&g_178[1], &g_14, g_178[p_81]);
                        if (g_113[g_23][g_23][p_81])
                            break;
                        l_281 |= l_280[3][0][2];
                    }
                    else
                    {
                        int16_t *l_286 = &g_287[5][0];
                        (*l_224) = l_282;
                        l_288 ^= ((0UL | (safe_lshift_func_uint8_t_u_s((0xE626L >= ((*l_286) = (~(*g_177)))), (&l_267 == (void*)0)))) > 2L);
                    }
                }
                for (l_166 = 8; (l_166 < 25); l_166 = safe_add_func_uint32_t_u_u(l_166, 4))
                {
                    const int8_t l_297 = (-2L);
                    uint8_t **l_314 = &g_230;
                    int32_t l_315[6][2][4] = {{{0x0D04DAC9L,0xFABAB807L,0x96BC7C0FL,0xFABAB807L},{0x71F94C5CL,0xEFAE4A95L,0x96BC7C0FL,0x0F99FADDL}},{{0x0D04DAC9L,0x37F9A2B0L,0x71F94C5CL,0x0F99FADDL},{0x2A7F2F2AL,0xEFAE4A95L,0x2A7F2F2AL,0xFABAB807L}},{{0x2A7F2F2AL,0xFABAB807L,0x71F94C5CL,0xEE534A33L},{0x0D04DAC9L,0xFABAB807L,0x96BC7C0FL,0xFABAB807L}},{{0x71F94C5CL,0xEFAE4A95L,0x96BC7C0FL,0x0F99FADDL},{0x0D04DAC9L,0x37F9A2B0L,0x71F94C5CL,0x0F99FADDL}},{{0x2A7F2F2AL,0xEFAE4A95L,0x2A7F2F2AL,0xFABAB807L},{0x2A7F2F2AL,0xFABAB807L,0x71F94C5CL,0xEE534A33L}},{{0x0D04DAC9L,0xFABAB807L,0x96BC7C0FL,0xFABAB807L},{0x71F94C5CL,0xEFAE4A95L,0x96BC7C0FL,0x0F99FADDL}}};
                    uint32_t *l_326 = &g_113[0][1][1];
                    int i, j, k;
                    for (l_159 = 1; (l_159 >= 0); l_159 -= 1)
                    {
                        uint64_t *l_310 = (void*)0;
                        int i, j;
                        if (g_32[l_159][(p_81 + 4)])
                            break;
                        l_315[2][1][3] = ((p_81 && (safe_mod_func_int64_t_s_s(p_82, (safe_mul_func_uint8_t_u_u(((*g_230) = ((safe_add_func_uint8_t_u_u((((((((l_297 , ((((((((safe_mul_func_uint8_t_u_u(p_81, (((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((*g_177), (~g_181))), (g_32[p_81][(l_159 + 3)] = (safe_mod_func_uint16_t_u_u(((*g_102) = (safe_mul_func_uint16_t_u_u(((((l_280[3][0][2] & 6L) || (safe_unary_minus_func_uint64_t_u((g_311 ^= (g_113[2][0][2] && (-7L)))))) > p_82) & g_287[2][1]), p_81))), l_312[2][7]))))) , p_81) != p_81))) < g_287[5][0]) >= l_313) , (void*)0) == l_314) || l_280[3][0][2]) , 0UL) > g_113[2][0][0])) , 3UL) & l_277) , g_274[0]) & g_113[2][0][2]) == g_287[5][0]) || p_82), p_82)) , (**g_229))), p_82))))) <= p_82);
                        (*l_224) = &g_9;
                    }
                    l_334[0] = (((((((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u((((safe_mod_func_uint32_t_u_u(((&g_178[0] == (l_280[2][0][2] , (p_82 , l_323))) ^ (safe_rshift_func_uint16_t_u_s((((--(*l_326)) & ((((0xE85B7223L <= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_297, 12)), (((0xD0234134AB348A6ALL == (((*g_102) > (((p_81 < g_106) == p_81) && (*g_230))) & p_81)) < p_82) > p_82)))) , (void*)0) != (void*)0) >= (*g_102))) | g_112), 5))), l_333)) , l_323) == &l_121[0][3][2]))), g_103)), l_280[2][0][1])) , 1UL) | (-3L)) || (**g_229)) || p_82) < 6L) , p_82);
                }
                l_204 = (safe_rshift_func_uint8_t_u_s((((safe_mod_func_int16_t_s_s(g_181, l_280[3][0][2])) == (&g_272[1][4][4] == ((*l_224) = func_94(&g_178[0], &g_112, p_81)))) == ((((void*)0 != l_339) , p_82) , g_340[6][6])), 4));
                if (p_82)
                    continue;
            }
            for (g_225 = 2; (g_225 == 29); g_225++)
            {
                int32_t l_343 = 0xC3BA4103L;
                int32_t l_344[3];
                int32_t l_345 = 0xFC31F58AL;
                uint8_t l_346[7][3] = {{0xF8L,0xF8L,0xF0L},{0xF8L,0xF8L,0xF0L},{0xF8L,0xF8L,0xF0L},{0xF8L,0xF8L,0xF0L},{0xF8L,0xF8L,0xF0L},{0xF8L,0xF8L,0xF0L},{0xF8L,0xF8L,0xF0L}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_344[i] = 0xDB3398E5L;
                l_346[2][2]++;
            }
        }
        for (g_109 = (-23); (g_109 <= 19); g_109 = safe_add_func_uint32_t_u_u(g_109, 7))
        {
            int8_t l_351 = 1L;
            if (l_351)
                break;
        }
    }
    (*l_224) = (((safe_rshift_func_int8_t_s_s(((!((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s(((*l_359) = l_206), g_287[5][0])), ((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((l_359 != &g_287[4][1]) && ((1L > 0x72L) > ((p_81 & p_81) , g_274[0]))), p_82)), g_340[3][5])) == p_81))) || 0x9572EBDD07A9120ELL)) & g_340[6][6]), p_82)) | g_5) , (void*)0);
    for (g_109 = (-9); (g_109 <= (-6)); g_109 = safe_add_func_int8_t_s_s(g_109, 9))
    {
        uint64_t l_370 = 0x1BF113D22CCC1D93LL;
        int32_t l_382 = (-1L);
        uint8_t *** const l_385 = &g_270;
        uint64_t *l_386 = &l_370;
        int64_t *l_391 = &g_274[0];
        int64_t *l_394 = &g_395;
        int8_t *l_397 = (void*)0;
        int8_t **l_396[10][1] = {{&g_177},{&g_177},{&l_397},{&g_177},{&g_177},{&l_397},{&g_177},{&g_177},{&l_397},{&g_177}};
        uint16_t *l_399 = &g_400;
        int32_t *l_401 = (void*)0;
        int32_t *l_402 = &l_206;
        int32_t *l_403 = &g_106;
        int i, j;
        for (l_313 = 5; (l_313 != 29); l_313 = safe_add_func_uint16_t_u_u(l_313, 6))
        {
            int32_t *l_368 = &g_112;
            int32_t *l_369[2];
            int i;
            for (i = 0; i < 2; i++)
                l_369[i] = &l_204;
            l_370++;
        }
        (*l_403) = (safe_sub_func_int32_t_s_s(((*l_402) &= ((*g_177) > ((g_113[2][0][2] < ((g_109 && (((((*l_399) = ((*g_102) = (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((g_398[4][5] = ((p_81 || ((safe_add_func_int8_t_s_s(((((*l_394) = (g_272[1][1][6] == (((((l_382 ^= l_381[8]) & (safe_sub_func_uint64_t_u_u(((*l_386) = ((void*)0 == l_385)), (safe_mod_func_int64_t_s_s(((((safe_sub_func_uint32_t_u_u((((*l_391) = (&g_18 != (*l_224))) && p_82), p_81)) < (*g_102)) || 0xD7758BA145E1BE1ALL) == l_392), g_178[1]))))) < p_81) != l_393[0][7][4]) & g_113[0][2][0]))) != p_82) & p_82), l_205)) , 0x0CF6L)) , (void*)0)) == &g_32[1][6]) && (-4L)), g_18)), 0x1BL)))) | g_112) != p_82) & p_81)) > 1L)) & p_82))), l_204));
    }
    return l_404;
}







static const int64_t func_87(uint8_t p_88, const int8_t * const p_89, uint32_t p_90)
{
    const uint32_t l_123 = 0UL;
    return l_123;
}







static int32_t * func_94(int8_t * p_95, int32_t * p_96, uint32_t p_97)
{
    int32_t *l_105 = &g_106;
    int32_t *l_107 = &g_106;
    int32_t *l_108[10] = {&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106};
    int i;
lbl_118:
    --g_113[2][0][2];
    for (g_111 = (-5); (g_111 < 10); g_111 = safe_add_func_uint64_t_u_u(g_111, 1))
    {
        if (g_111)
            goto lbl_118;
    }
    return &g_14;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_32[i][j], "g_32[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_35, "g_35", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_67[i][j][k], "g_67[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_113[i][j][k], "g_113[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_178[i], "g_178[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_272[i][j][k], "g_272[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_274[i], "g_274[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_287[i][j], "g_287[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_311, "g_311", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_340[i][j], "g_340[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_413[i], "g_413[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_419[i][j][k], "g_419[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_421[i], "g_421[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1020[i][j][k], "g_1020[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1166, "g_1166", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1167[i], "g_1167[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1168, "g_1168", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1171[i], "g_1171[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1265, "g_1265", print_hash_value);
    transparent_crc(g_1342, "g_1342", print_hash_value);
    transparent_crc(g_1422, "g_1422", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1445[i][j], "g_1445[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1503, "g_1503", print_hash_value);
    transparent_crc(g_1589, "g_1589", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1592[i], "g_1592[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1886, "g_1886", print_hash_value);
    transparent_crc(g_1938, "g_1938", print_hash_value);
    transparent_crc(g_1957, "g_1957", print_hash_value);
    transparent_crc(g_1960, "g_1960", print_hash_value);
    transparent_crc(g_2030, "g_2030", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2073[i][j], "g_2073[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2299, "g_2299", print_hash_value);
    transparent_crc(g_2388, "g_2388", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
