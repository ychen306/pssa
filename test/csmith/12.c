// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = A0F9E6
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
   signed f0 : 20;
   uint64_t f1;
};

union U1 {
   int16_t f0;
   int32_t f1;
   const uint16_t f2;
   int16_t f3;
   int16_t f4;
};


static int32_t g_3[6] = {0x11F07B4BL,(-10L),0x11F07B4BL,0x11F07B4BL,(-10L),0x11F07B4BL};
static union U1 g_12 = {0xECF7L};
static int32_t g_52 = 0L;
static uint64_t g_57 = 0UL;
static int32_t g_84 = (-1L);
static uint16_t g_95 = 0UL;
static int32_t g_102 = (-1L);
static int32_t *g_101 = &g_102;
static int32_t **g_100 = &g_101;
static int32_t ** const *g_110 = &g_100;
static const int32_t ***g_116[3] = {(void*)0,(void*)0,(void*)0};
static int64_t g_121 = 0L;
static uint8_t g_122 = 0UL;
static const int64_t g_125[7][10] = {{0xF8C8FF697105BA91LL,0L,(-6L),(-4L),0x03CBA28DA27851EDLL,0x4EAE5124A76911F3LL,0x03CBA28DA27851EDLL,(-4L),(-6L),0L},{(-1L),0x6FBAD4E8C809647BLL,(-6L),0x03CBA28DA27851EDLL,3L,(-4L),0x6DF2D4CE2787FF9ELL,0x6DF2D4CE2787FF9ELL,(-4L),3L},{(-1L),(-1L),(-1L),(-1L),1L,(-4L),0xF8C8FF697105BA91LL,(-6L),3L,(-6L)},{(-1L),0x4EAE5124A76911F3LL,0x60138ADD52706CD2LL,(-6L),0x60138ADD52706CD2LL,0x4EAE5124A76911F3LL,(-1L),0x03CBA28DA27851EDLL,0x60138ADD52706CD2LL,3L},{0x03CBA28DA27851EDLL,0x6FBAD4E8C809647BLL,0x4EAE5124A76911F3LL,(-6L),(-1L),(-1L),(-6L),0x4EAE5124A76911F3LL,0x6FBAD4E8C809647BLL,0x03CBA28DA27851EDLL},{(-4L),0x6FBAD4E8C809647BLL,0x60138ADD52706CD2LL,0L,1L,3L,(-1L),3L,1L,0L},{0L,0x6DF2D4CE2787FF9ELL,0L,0x6FBAD4E8C809647BLL,1L,(-1L),0x03CBA28DA27851EDLL,0xF8C8FF697105BA91LL,0xF8C8FF697105BA91LL,0x03CBA28DA27851EDLL}};
static int64_t g_135 = 5L;
static union U0 g_141 = {6L};
static uint8_t g_159 = 0UL;
static const int64_t g_170 = 0x8E123B5FEB66E786LL;
static const int64_t *g_169 = &g_170;
static int64_t *g_187[9] = {&g_121,&g_121,&g_121,&g_121,&g_121,&g_121,&g_121,&g_121,&g_121};
static uint16_t g_198 = 0x8A5DL;
static int16_t g_209 = 0xBA6CL;
static int32_t g_212 = 0x863CB28DL;
static uint64_t g_213 = 0xC00C78AF0DFD19A3LL;
static int32_t g_225 = 0L;
static uint64_t g_226 = 0UL;
static union U0 **g_240 = (void*)0;
static int32_t *g_243 = &g_84;
static uint8_t g_259 = 0x84L;
static uint64_t g_268 = 1UL;
static uint8_t g_343 = 0xB1L;
static int8_t g_353[10][9][1] = {{{0x52L},{(-5L)},{0L},{0L},{(-10L)},{0L},{5L},{0x6EL},{0L}},{{(-1L)},{(-1L)},{0L},{0x6EL},{5L},{0L},{(-10L)},{0L},{0L}},{{(-5L)},{0x52L},{0L},{0xC4L},{0x84L},{0L},{0x84L},{0xC4L},{0L}},{{0x52L},{(-5L)},{0L},{0L},{(-10L)},{0L},{5L},{0x6EL},{0L}},{{(-1L)},{(-1L)},{0L},{0x6EL},{5L},{0L},{(-10L)},{0L},{0L}},{{(-5L)},{0x52L},{0L},{0xC4L},{0x84L},{0L},{0x84L},{0xC4L},{0L}},{{0x52L},{(-5L)},{0L},{0L},{(-10L)},{0L},{5L},{0x6EL},{0L}},{{(-1L)},{(-1L)},{0L},{0x6EL},{5L},{0L},{(-10L)},{0L},{0L}},{{(-5L)},{0x52L},{0L},{0xC4L},{0x84L},{0L},{0x84L},{0xC4L},{0L}},{{0x52L},{(-5L)},{0L},{0L},{(-10L)},{0L},{5L},{0x6EL},{0L}}};
static uint32_t g_358[6][5][3] = {{{0UL,0UL,0x3655EE23L},{0x0A983902L,1UL,0xEAAF24BCL},{0x0A4C5BDCL,1UL,0UL},{1UL,1UL,0UL},{0x2172D3BCL,0UL,18446744073709551615UL}},{{0x2172D3BCL,0x3B592888L,0UL},{1UL,0xF49BC353L,0UL},{0x0A4C5BDCL,0x2172D3BCL,0UL},{0x0A983902L,0x3E02C395L,18446744073709551615UL},{0UL,0x3E02C395L,0UL}},{{0xF49BC353L,0x2172D3BCL,0UL},{0x6E722CEAL,0xF49BC353L,0xEAAF24BCL},{0xF49BC353L,0x3B592888L,0x3655EE23L},{0UL,0UL,0x3655EE23L},{0x0A983902L,1UL,0xEAAF24BCL}},{{0x0A4C5BDCL,1UL,0UL},{1UL,1UL,0UL},{0x2172D3BCL,0UL,18446744073709551615UL},{0x2172D3BCL,0x3B592888L,0UL},{1UL,0xF49BC353L,0xF49BC353L}},{{9UL,0UL,0UL},{18446744073709551608UL,0x9CF198F1L,0xB10A179DL},{18446744073709551610UL,0x9CF198F1L,0x2172D3BCL},{0x8D637EBFL,0UL,0UL},{0x46B94CA9L,0x8D637EBFL,0x6E722CEAL}},{{0x8D637EBFL,18446744073709551615UL,1UL},{18446744073709551610UL,0UL,1UL},{18446744073709551608UL,0xABDC0804L,0x6E722CEAL},{9UL,18446744073709551615UL,0UL},{0xABDC0804L,0xABDC0804L,0x2172D3BCL}}};
static union U1 *g_390 = &g_12;
static union U1 **g_389 = &g_390;
static int8_t *g_434 = (void*)0;
static uint32_t g_455 = 4294967295UL;
static uint32_t *g_454 = &g_455;
static uint32_t *g_458 = (void*)0;
static int16_t g_499 = 3L;
static int32_t g_503 = 0L;
static uint32_t g_504 = 2UL;
static uint64_t g_507 = 1UL;
static int8_t g_547 = 0x33L;
static int32_t g_548 = (-1L);
static uint64_t g_549 = 0x64A99CD742BEAE5ALL;
static int16_t g_552 = 0x7C2BL;
static uint16_t g_553[7][6][2] = {{{65528UL,0xB246L},{0x5408L,65528UL},{9UL,0xDC97L},{9UL,65528UL},{0x5408L,0xB246L},{65528UL,65528UL}},{{0x406EL,0xDC97L},{0x406EL,65528UL},{65528UL,0xB246L},{0x5408L,65528UL},{9UL,0xDC97L},{9UL,65528UL}},{{0x5408L,0xB246L},{65528UL,65528UL},{0x406EL,0xDC97L},{0x406EL,65528UL},{65528UL,0xB246L},{0x5408L,65528UL}},{{9UL,0xDC97L},{9UL,65528UL},{0x5408L,0xB246L},{65528UL,65528UL},{0x406EL,0xDC97L},{0x406EL,65528UL}},{{65528UL,0xB246L},{0x5408L,65528UL},{9UL,0xDC97L},{9UL,65528UL},{0x5408L,0xB246L},{65528UL,65528UL}},{{0x406EL,0xDC97L},{0x406EL,65528UL},{65528UL,0xB246L},{0x5408L,65528UL},{9UL,0xDC97L},{9UL,65528UL}},{{0x5408L,0xB246L},{65528UL,65528UL},{0x406EL,0xDC97L},{0x406EL,65528UL},{65528UL,0xB246L},{0x5408L,65528UL}}};
static int32_t g_561[5] = {0L,0L,0L,0L,0L};
static uint32_t g_581[1][6][1] = {{{0x1985BAA7L},{0x1985BAA7L},{0x1985BAA7L},{0x1985BAA7L},{0x1985BAA7L},{0x1985BAA7L}}};
static int8_t g_638 = 0xD8L;
static int64_t g_644[6] = {5L,9L,5L,5L,9L,5L};
static int8_t g_647 = 0xFCL;
static union U0 ***g_657 = (void*)0;
static union U0 ****g_656[3][2][4] = {{{&g_657,(void*)0,&g_657,&g_657},{(void*)0,&g_657,&g_657,&g_657}},{{&g_657,&g_657,&g_657,&g_657},{&g_657,&g_657,&g_657,(void*)0}},{{(void*)0,&g_657,&g_657,&g_657},{&g_657,(void*)0,&g_657,&g_657}}};
static uint32_t g_678 = 0xC334EAA2L;
static int8_t g_709 = (-4L);
static uint32_t g_710 = 0x2AED1B82L;
static const uint32_t g_780 = 0x2F8A2BCBL;
static const uint32_t g_782 = 0x2F23AA0DL;
static union U1 g_793[5] = {{0x520FL},{0x520FL},{0x520FL},{0x520FL},{0x520FL}};
static union U0 g_796 = {0x5F5AC8E2L};
static int16_t *g_811[4][6][7] = {{{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4}},{{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4}},{{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4}},{{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4}}};
static int16_t **g_810 = &g_811[1][5][0];
static int16_t ***g_809 = &g_810;
static uint32_t g_835 = 0UL;
static const int16_t *g_906 = (void*)0;
static int32_t **g_959 = &g_243;
static int32_t ***g_958 = &g_959;
static uint32_t g_976 = 0x968351CBL;
static int32_t g_987 = 1L;
static uint32_t g_988 = 0xE7EBF462L;
static union U0 g_1016 = {-4L};
static const uint16_t g_1040 = 65535UL;
static int64_t g_1050 = 0x33158D8B2BD45F84LL;
static int32_t g_1051 = 2L;
static uint32_t g_1052 = 1UL;
static int32_t g_1087[8] = {0x158B9240L,0x158B9240L,0x158B9240L,0x158B9240L,0x158B9240L,0x158B9240L,0x158B9240L,0x158B9240L};
static uint32_t **g_1194 = (void*)0;
static uint32_t ***g_1193 = &g_1194;
static const int16_t g_1196 = 0x8F98L;
static const uint16_t *g_1323 = &g_1040;
static const uint16_t **g_1322 = &g_1323;
static union U0 ***g_1424 = &g_240;
static uint8_t *g_1459 = (void*)0;
static uint8_t **g_1458 = &g_1459;
static int8_t *g_1474 = &g_638;
static int8_t **g_1473 = &g_1474;
static union U1 ***g_1478 = &g_389;
static union U1 ****g_1477 = &g_1478;
static int32_t g_1538 = (-2L);
static union U0 ****g_1637[1][8][5] = {{{(void*)0,(void*)0,&g_657,(void*)0,(void*)0},{&g_1424,&g_657,&g_1424,&g_1424,&g_657},{(void*)0,&g_1424,&g_1424,(void*)0,&g_1424},{&g_657,&g_657,&g_657,&g_657,&g_657},{&g_1424,(void*)0,&g_1424,&g_1424,(void*)0},{&g_657,&g_1424,&g_1424,&g_657,&g_1424},{(void*)0,(void*)0,&g_657,(void*)0,(void*)0},{&g_1424,&g_657,&g_1424,&g_1424,&g_657}}};
static int32_t ****g_1653 = (void*)0;
static int32_t *****g_1652[10] = {&g_1653,&g_1653,&g_1653,&g_1653,&g_1653,&g_1653,&g_1653,&g_1653,&g_1653,&g_1653};
static uint8_t g_1674 = 0xE2L;
static int32_t *** const **g_1690 = (void*)0;
static uint16_t g_1708 = 0UL;
static const union U1 *g_1732 = &g_12;
static const int8_t g_1752 = 0xBEL;
static const int8_t *g_1751 = &g_1752;
static const int8_t **g_1750[5] = {&g_1751,&g_1751,&g_1751,&g_1751,&g_1751};
static int32_t g_1816 = 0x0BC62A7FL;
static int16_t g_1854 = 0x90D0L;
static int32_t g_1871 = 0x51D11F4AL;
static union U1 ** const g_1995 = (void*)0;
static union U1 ** const *g_1994 = &g_1995;
static union U1 ** const **g_1993 = &g_1994;
static union U1 ** const ***g_1992 = &g_1993;
static int8_t g_2011 = 7L;
static uint32_t g_2029 = 0x9F3705A2L;
static uint8_t g_2062[10][6] = {{0x60L,0x1BL,0x01L,7UL,0x01L,0x1BL},{0x01L,0xF0L,253UL,7UL,0xF0L,5UL},{0x60L,5UL,253UL,5UL,0x60L,0x1BL},{251UL,5UL,0x01L,255UL,0xF0L,255UL},{251UL,0xF0L,251UL,5UL,0x01L,255UL},{0x60L,0x1BL,0x01L,7UL,0x01L,0x1BL},{0x01L,0xF0L,253UL,7UL,0xF0L,5UL},{0x60L,5UL,253UL,5UL,0x60L,0x1BL},{251UL,5UL,0x01L,255UL,0xF0L,255UL},{251UL,0xF0L,251UL,5UL,0x01L,255UL}};
static int32_t g_2070 = (-1L);
static int16_t g_2126 = 0xABDDL;
static int64_t **g_2151 = &g_187[5];
static int64_t ***g_2150[10][6][4] = {{{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,(void*)0},{&g_2151,&g_2151,&g_2151,(void*)0}},{{&g_2151,&g_2151,(void*)0,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{(void*)0,&g_2151,&g_2151,(void*)0},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,(void*)0}},{{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{(void*)0,(void*)0,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,(void*)0,(void*)0}},{{(void*)0,&g_2151,(void*)0,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,(void*)0,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{(void*)0,(void*)0,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,(void*)0}},{{(void*)0,&g_2151,&g_2151,(void*)0},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,(void*)0,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,(void*)0,&g_2151}},{{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,(void*)0,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{(void*)0,(void*)0,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151}},{{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,(void*)0},{(void*)0,(void*)0,&g_2151,(void*)0},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,(void*)0,(void*)0}},{{(void*)0,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,(void*)0,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{(void*)0,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151}},{{&g_2151,(void*)0,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{(void*)0,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,(void*)0,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{(void*)0,(void*)0,(void*)0,&g_2151}},{{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,(void*)0},{(void*)0,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,&g_2151},{&g_2151,&g_2151,&g_2151,(void*)0},{&g_2151,&g_2151,&g_2151,&g_2151}}};



static uint32_t func_1(void);
static int8_t func_9(union U1 p_10, uint16_t p_11);
static union U0 func_15(uint16_t p_16, uint8_t p_17, int16_t p_18, int16_t p_19, int32_t p_20);
static uint16_t func_21(int16_t p_22, union U1 p_23);
static union U1 func_25(uint64_t p_26, int64_t p_27, int32_t p_28);
static int32_t func_31(uint32_t p_32, const union U1 p_33);
static const uint16_t func_40(const union U1 p_41);
static union U1 func_42(int64_t p_43, int32_t p_44, int64_t p_45);
static int32_t func_62(uint32_t p_63, int32_t * p_64, union U1 p_65, int32_t * p_66);
static int32_t * func_68(int32_t * const p_69, int32_t * p_70);
# 166 "<stdin>"
static uint32_t func_1(void)
{
    int8_t l_2[1][2];
    int32_t l_1658 = 0x05D5EFACL;
    int32_t l_1678 = 0x1F1C67BFL;
    int32_t l_1680[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
    uint32_t l_1682 = 1UL;
    int32_t l_1683 = 0x277589F4L;
    int32_t *****l_1689 = &g_1653;
    const uint32_t l_1700 = 18446744073709551615UL;
    uint32_t l_1704 = 4UL;
    uint16_t *l_1711 = &g_1708;
    uint16_t l_1717 = 0x5358L;
    union U0 **l_1726 = (void*)0;
    int32_t l_1742 = 0xC088213DL;
    int32_t l_1783 = (-1L);
    int32_t *l_1786 = (void*)0;
    int32_t l_1815 = 0xE417BEA0L;
    const union U1 l_1828[3] = {{1L},{1L},{1L}};
    int32_t l_1867 = 0xC39DB95BL;
    int32_t l_1868 = 0x0156D698L;
    int32_t l_1869 = 1L;
    uint16_t l_1872 = 0x8A0BL;
    int16_t l_1912 = 0x2BBBL;
    int64_t l_1936[9][4] = {{(-1L),(-1L),0x45397195FAB3BDA9LL,(-1L)},{(-1L),0x388FDEED0F9485F5LL,0x388FDEED0F9485F5LL,(-1L)},{0x388FDEED0F9485F5LL,(-1L),0x388FDEED0F9485F5LL,0x388FDEED0F9485F5LL},{(-1L),(-1L),0x45397195FAB3BDA9LL,(-1L)},{(-1L),0x388FDEED0F9485F5LL,0x388FDEED0F9485F5LL,(-1L)},{0x388FDEED0F9485F5LL,(-1L),0x388FDEED0F9485F5LL,0x388FDEED0F9485F5LL},{(-1L),(-1L),0x45397195FAB3BDA9LL,(-1L)},{(-1L),0x388FDEED0F9485F5LL,0x388FDEED0F9485F5LL,(-1L)},{0x388FDEED0F9485F5LL,(-1L),0x388FDEED0F9485F5LL,0x388FDEED0F9485F5LL}};
    union U0 *****l_1945 = &g_1637[0][6][0];
    int32_t l_1956[10] = {0xD6C979FCL,0xD6C979FCL,0xD6C979FCL,0xD6C979FCL,0xD6C979FCL,0xD6C979FCL,0xD6C979FCL,0xD6C979FCL,0xD6C979FCL,0xD6C979FCL};
    union U1 *****l_1996 = &g_1477;
    union U1 *****l_1997 = &g_1477;
    int64_t l_2024[4] = {0x99A3CCD605953F50LL,0x99A3CCD605953F50LL,0x99A3CCD605953F50LL,0x99A3CCD605953F50LL};
    const uint32_t l_2026 = 0UL;
    int32_t l_2071[2];
    int8_t l_2183 = (-1L);
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_2[i][j] = 0x48L;
    }
    for (i = 0; i < 2; i++)
        l_2071[i] = 7L;
    for (g_3[2] = 0; (g_3[2] <= 0); g_3[2] += 1)
    {
        uint64_t l_4 = 18446744073709551606UL;
        int32_t ***l_1670[3][10] = {{(void*)0,&g_959,(void*)0,&g_959,&g_959,&g_959,&g_959,&g_959,&g_959,(void*)0},{(void*)0,(void*)0,&g_959,&g_959,&g_959,&g_959,&g_959,&g_959,&g_959,(void*)0},{&g_959,&g_959,&g_959,&g_959,(void*)0,(void*)0,&g_959,&g_959,&g_959,&g_959}};
        union U0 l_1673 = {0xB71BCD32L};
        uint8_t **l_1675 = &g_1459;
        int32_t ***l_1718[8] = {&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100};
        uint8_t l_1719 = 255UL;
        int8_t ***l_1817 = &g_1473;
        int32_t l_1894[1];
        int64_t l_1913[6][9][4] = {{{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)}},{{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)}},{{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)}},{{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)}},{{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)}},{{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)}}};
        union U0 *****l_1934 = &g_1637[0][6][2];
        union U0 *l_1963[4][10] = {{&g_1016,&g_796,&g_796,&g_1016,&g_796,&g_796,&g_1016,&g_796,&g_796,&g_1016},{&g_796,&g_1016,&g_796,&g_796,&g_1016,&g_796,&g_796,&g_1016,&g_796,&g_796},{&g_1016,&g_1016,(void*)0,&g_1016,&g_1016,(void*)0,&g_1016,&g_1016,(void*)0,&g_1016},{&g_1016,&g_796,&g_796,&g_1016,&g_796,&g_796,&g_1016,&g_796,&g_796,&g_1016}};
        union U1 ** const *l_1991 = &g_389;
        union U1 ** const **l_1990 = &l_1991;
        union U1 ** const ***l_1989 = &l_1990;
        uint8_t l_2014[1];
        uint32_t l_2030 = 0x02372D0FL;
        uint32_t l_2109 = 1UL;
        int32_t l_2152[7][3][5] = {{{1L,8L,8L,1L,0xCEED30C8L},{1L,(-5L),0x6308B7ADL,4L,0x6308B7ADL},{1L,1L,3L,8L,0x7CB18830L}},{{0xDD92C288L,4L,0x94E72C45L,4L,0xDD92C288L},{0xCEED30C8L,(-7L),0x67458838L,1L,1L},{0x6308B7ADL,4L,0x6308B7ADL,(-5L),1L}},{{0x7CB18830L,1L,(-7L),(-7L),1L},{0xDD92C288L,(-5L),0x7A239FABL,(-5L),0xDD92C288L},{1L,8L,(-7L),1L,0x7CB18830L}},{{1L,(-5L),0x6308B7ADL,(-7L),0x6308B7ADL},{1L,1L,0x67458838L,8L,0xCEED30C8L},{0xDD92C288L,(-7L),0x94E72C45L,(-7L),0xDD92C288L}},{{0x7CB18830L,(-7L),3L,1L,1L},{0x6308B7ADL,(-7L),0x6308B7ADL,(-5L),1L},{0xCEED30C8L,1L,8L,(-7L),1L}},{{0xDD92C288L,(-5L),0x7A239FABL,(-5L),0xDD92C288L},{1L,8L,8L,1L,0xCEED30C8L},{1L,(-5L),0x6308B7ADL,4L,0x6308B7ADL}},{{1L,1L,3L,8L,0x7CB18830L},{0xDD92C288L,4L,0x94E72C45L,4L,0xDD92C288L},{0xCEED30C8L,(-7L),0x67458838L,1L,1L}}};
        uint16_t l_2180 = 0UL;
        int16_t l_2181 = 0x0EC2L;
        int8_t l_2182 = 0xA7L;
        int16_t l_2184 = (-1L);
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1894[i] = 0x1304EC08L;
        for (i = 0; i < 1; i++)
            l_2014[i] = 7UL;
        if (l_4)
            break;
        if (l_4)
            break;
    }
    return l_2183;
}







static int8_t func_9(union U1 p_10, uint16_t p_11)
{
    uint32_t l_24 = 0x8BD85027L;
    int32_t l_1655 = (-6L);
    l_1655 = (func_15(func_21(l_24, func_25((safe_add_func_int32_t_s_s(func_31((safe_div_func_uint64_t_u_u(l_24, (g_3[3] , (l_24 | ((safe_lshift_func_int16_t_s_s((((safe_div_func_uint16_t_u_u(func_40(func_42(l_24, (g_12.f2 >= (((safe_sub_func_uint32_t_u_u(l_24, ((p_10.f0 ^ l_24) >= l_24))) != p_10.f4) <= l_24)), p_10.f0)), l_24)) , g_561[0]) > g_503), 6)) <= 1UL))))), p_10), 0x184093C5L)), p_10.f4, l_24)), p_11, p_10.f3, p_11, l_24) , 0L);
    return (**g_1473);
}







static union U0 func_15(uint16_t p_16, uint8_t p_17, int16_t p_18, int16_t p_19, int32_t p_20)
{
    int64_t l_1640 = 0xABADE66B749C2626LL;
    int32_t *l_1641 = &g_84;
    int32_t *l_1642 = &g_987;
    int32_t *l_1643 = &g_52;
    int32_t *l_1644 = &g_84;
    int32_t *l_1645[9] = {&g_987,&g_987,&g_987,&g_987,&g_987,&g_987,&g_987,&g_987,&g_987};
    uint16_t l_1646 = 1UL;
    int32_t ***l_1651 = &g_100;
    int32_t ****l_1650 = &l_1651;
    int32_t *****l_1649 = &l_1650;
    union U0 l_1654[7][9][4] = {{{{0xC57E3246L},{0x9E94B55FL},{-1L},{0xD61D21B8L}},{{-9L},{-1L},{0xB2A664F8L},{1L}},{{0L},{0x84717D09L},{1L},{-1L}},{{0xD7507AD2L},{0x3718AEE0L},{2L},{2L}},{{0x034B7B88L},{0x034B7B88L},{0xB2A664F8L},{0L}},{{0L},{0x05B20A7AL},{1L},{0x962664BAL}},{{0xC57E3246L},{7L},{0xD7507AD2L},{1L}},{{0L},{7L},{0x90C106C6L},{0x962664BAL}},{{7L},{0x05B20A7AL},{0x0CE111C0L},{0L}}},{{{-1L},{0x034B7B88L},{0x84717D09L},{2L}},{{-9L},{0x3718AEE0L},{1L},{-1L}},{{1L},{0x84717D09L},{0xD7507AD2L},{1L}},{{-1L},{-1L},{2L},{0xD61D21B8L}},{{0x962664BAL},{0x9E94B55FL},{0x90C106C6L},{0L}},{{0x034B7B88L},{-1L},{0xD61D21B8L},{4L}},{{0xC57E3246L},{-1L},{0xC57E3246L},{0xD61D21B8L}},{{1L},{7L},{0xB2A664F8L},{0L}},{{-3L},{0x84717D09L},{0x0CE111C0L},{7L}}},{{{0xD7507AD2L},{0x9E94B55FL},{0x0CE111C0L},{2L}},{{-3L},{0L},{0xB2A664F8L},{0x3B54410EL}},{{1L},{0x05B20A7AL},{0xC57E3246L},{-1L}},{{0xC57E3246L},{-1L},{0xD61D21B8L},{1L}},{{0x034B7B88L},{0x962664BAL},{0x90C106C6L},{7L}},{{0x962664BAL},{0x05B20A7AL},{2L},{4L}},{{-1L},{-3L},{0xD7507AD2L},{2L}},{{1L},{-1L},{1L},{0x962664BAL}},{{-9L},{0x84717D09L},{0x84717D09L},{-9L}}},{{{-1L},{0x962664BAL},{0x0CE111C0L},{0xD61D21B8L}},{{7L},{0x3718AEE0L},{0x90C106C6L},{0x3B54410EL}},{{0L},{-1L},{0xD7507AD2L},{0x3B54410EL}},{{0xC57E3246L},{0x3718AEE0L},{1L},{0xD61D21B8L}},{{0L},{0x962664BAL},{0xB2A664F8L},{-9L}},{{0x034B7B88L},{0x84717D09L},{2L},{0x962664BAL}},{{0xD7507AD2L},{-1L},{1L},{2L}},{{0L},{-3L},{0xB2A664F8L},{4L}},{{-9L},{0x05B20A7AL},{-1L},{7L}}},{{{0xC57E3246L},{0x962664BAL},{0x84717D09L},{1L}},{{-3L},{-1L},{0x90C106C6L},{-1L}},{{-1L},{0x05B20A7AL},{1L},{0x3B54410EL}},{{-1L},{0L},{0xD61D21B8L},{2L}},{{0L},{0x9E94B55FL},{1L},{7L}},{{0L},{0x84717D09L},{0xD61D21B8L},{0L}},{{-1L},{7L},{1L},{0xD61D21B8L}},{{-1L},{-1L},{0x9E94B55FL},{0xDB26773DL}},{{0x84717D09L},{0xB2A664F8L},{1L},{0x05B20A7AL}}},{{{-1L},{-1L},{0x90C106C6L},{0xB022A83CL}},{{0x0CE111C0L},{1L},{0L},{2L}},{{0xD61D21B8L},{1L},{-4L},{1L}},{{0L},{-1L},{-9L},{-9L}},{{0xD7507AD2L},{0xD7507AD2L},{0L},{0x05B20A7AL}},{{1L},{1L},{2L},{0xC57E3246L}},{{-1L},{-1L},{0L},{2L}},{{0xD61D21B8L},{-1L},{0x9E94B55FL},{0xC57E3246L}},{{-1L},{1L},{1L},{0x05B20A7AL}}},{{{3L},{0xD7507AD2L},{1L},{-9L}},{{0x0CE111C0L},{-1L},{4L},{1L}},{{2L},{1L},{0L},{2L}},{{3L},{1L},{-9L},{0xB022A83CL}},{{0xC57E3246L},{-1L},{0x9E94B55FL},{0x05B20A7AL}},{{0xD7507AD2L},{0xB2A664F8L},{0xB022A83CL},{0xDB26773DL}},{{-1L},{-1L},{-1L},{0xB022A83CL}},{{2L},{-1L},{0L},{1L}},{{0x84717D09L},{1L},{1L},{-1L}}}};
    int i, j, k;
    l_1646--;
    g_1652[5] = l_1649;
    (*l_1643) = (*l_1643);
    return l_1654[6][2][2];
}







static uint16_t func_21(int16_t p_22, union U1 p_23)
{
    int32_t l_1290[2];
    int64_t *l_1345 = &g_1050;
    const int16_t **l_1379 = &g_906;
    union U0 *l_1381 = &g_1016;
    union U0 **l_1380 = &l_1381;
    int8_t *l_1400 = &g_353[9][6][0];
    const int8_t l_1462 = 5L;
    int8_t l_1487 = 5L;
    uint8_t l_1521 = 0xA0L;
    uint32_t *l_1543 = &g_581[0][3][0];
    uint64_t l_1588 = 0xC05EBD153CC4C645LL;
    uint64_t l_1620 = 18446744073709551609UL;
    union U0 *****l_1633 = &g_656[0][1][0];
    union U0 *****l_1634 = (void*)0;
    union U0 ****l_1636 = &g_1424;
    union U0 *****l_1635[4][2] = {{&l_1636,&l_1636},{&l_1636,&l_1636},{&l_1636,&l_1636},{&l_1636,&l_1636}};
    uint8_t l_1638 = 0xA1L;
    int32_t *l_1639 = &g_1087[7];
    int i, j;
    for (i = 0; i < 2; i++)
        l_1290[i] = 5L;
    for (g_988 = 17; (g_988 != 9); g_988 = safe_sub_func_uint8_t_u_u(g_988, 8))
    {
        uint8_t l_1291 = 0x39L;
        int16_t ***l_1292 = (void*)0;
        int32_t *l_1317 = &g_548;
        int32_t *l_1318 = &g_561[1];
        union U0 l_1319 = {9L};
        int32_t l_1358 = 0x3B9DC520L;
        uint16_t l_1382 = 65529UL;
        int16_t l_1383[1][4];
        uint16_t *l_1384 = &g_95;
        uint32_t l_1385 = 0x7021226FL;
        uint16_t l_1386 = 65526UL;
        int32_t *l_1389 = (void*)0;
        int64_t *l_1429 = &g_135;
        const uint8_t *l_1461[5] = {&g_343,&g_343,&g_343,&g_343,&g_343};
        const uint8_t **l_1460 = &l_1461[2];
        int32_t l_1493 = 0x809B9380L;
        int32_t l_1494 = 0L;
        uint32_t l_1495 = 0x08F3508FL;
        uint32_t l_1529 = 1UL;
        uint32_t l_1531 = 4294967295UL;
        const uint64_t l_1589 = 18446744073709551615UL;
        uint8_t l_1598 = 255UL;
        int32_t *l_1619[9] = {(void*)0,(void*)0,&g_3[3],(void*)0,(void*)0,&g_3[3],(void*)0,(void*)0,&g_3[3]};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_1383[i][j] = 1L;
        }
        l_1291 = l_1290[1];
        for (l_1291 = 0; (l_1291 <= 0); l_1291 += 1)
        {
            int32_t *l_1293 = &g_84;
            const int16_t **l_1297[10][3] = {{&g_906,(void*)0,&g_906},{&g_906,&g_906,&g_906},{(void*)0,&g_906,&g_906},{(void*)0,&g_906,(void*)0},{&g_906,(void*)0,&g_906},{&g_906,(void*)0,(void*)0},{&g_906,&g_906,&g_906},{&g_906,&g_906,&g_906},{&g_906,&g_906,&g_906},{&g_906,&g_906,&g_906}};
            const int16_t ***l_1296 = &l_1297[2][1];
            int32_t *l_1299 = &l_1290[1];
            int32_t *l_1300 = &g_1051;
            int32_t **l_1313 = (void*)0;
            int32_t **l_1314 = (void*)0;
            int32_t *l_1316 = &g_212;
            int32_t **l_1315[1][9];
            uint16_t *l_1328 = (void*)0;
            uint16_t *l_1329 = &g_198;
            uint16_t *l_1330 = (void*)0;
            int32_t **l_1331 = &l_1293;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 9; j++)
                    l_1315[i][j] = &l_1316;
            }
            (*l_1293) |= ((void*)0 != l_1292);
            (*l_1300) = ((*l_1299) = (((safe_rshift_func_int8_t_s_s((l_1296 != &g_810), 5)) != l_1290[(l_1291 + 1)]) , ((*l_1293) = (+255UL))));
            (*l_1331) = ((*g_959) = (((((g_553[1][1][1]--) < p_23.f4) && (0x6D7FBF2AL <= 0xCB499E20L)) == (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((*g_100) == (l_1318 = (l_1317 = l_1300))), (g_95 = (l_1319 , ((*l_1329) ^= (safe_mod_func_uint8_t_u_u((g_1322 != ((p_23 , (safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((void*)0 == &g_1323) != g_1087[7]), 3)), l_1291))) , (void*)0)), g_504))))))), 0xD6L)), g_353[2][3][0])), 0xFEB8L)), (*g_1323)))) , &l_1290[(l_1291 + 1)]));
            for (p_23.f4 = 0; (p_23.f4 >= 0); p_23.f4 -= 1)
            {
                uint32_t l_1341[7];
                uint32_t l_1361 = 0x6CA2FCD2L;
                int i;
                for (i = 0; i < 7; i++)
                    l_1341[i] = 18446744073709551615UL;
                for (g_504 = 0; (g_504 <= 1); g_504 += 1)
                {
                    int64_t **l_1346 = &l_1345;
                    uint64_t *l_1357[9][2] = {{&g_268,&g_268},{&g_57,&g_268},{&g_268,&g_226},{&g_57,(void*)0},{&g_57,&g_57},{(void*)0,&g_226},{(void*)0,&g_57},{&g_57,(void*)0},{&g_57,&g_226}};
                    int32_t * const *l_1359[1];
                    uint32_t l_1360 = 4UL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1359[i] = &g_243;
                    (*l_1300) = (((+((((((*g_454) = (safe_rshift_func_int16_t_s_u((g_353[(g_504 + 1)][(g_504 + 4)][p_23.f4] == (safe_lshift_func_uint8_t_u_s(((l_1319.f0 < (safe_add_func_int32_t_s_s(((((((safe_lshift_func_uint16_t_u_s(l_1341[5], 14)) & (((((safe_sub_func_int32_t_s_s((+((g_187[2] = &g_135) != ((*l_1346) = l_1345))), ((((**l_1331) = (safe_mul_func_int16_t_s_s(((0UL ^ (p_23.f3 >= (safe_rshift_func_int8_t_s_u(((l_1341[4] , (((((safe_mul_func_int8_t_s_s((((**g_810) = (safe_lshift_func_uint8_t_u_s((((l_1358 = (g_12.f1 ^ p_23.f4)) < 0xF68A32E6FABE9258LL) < p_23.f0), 5))) < p_23.f3), 2UL)) <= (*l_1293)) < l_1290[1]) != 0x76A46C27L) || p_23.f3)) && 6L), 6)))) , (*l_1293)), 0x3DC2L))) < g_353[(g_504 + 1)][(g_504 + 4)][p_23.f4]) & p_22))) != p_23.f2) || l_1341[3]) | 0xADDC607ABCD8C4B5LL) , p_22)) , (void*)0) != l_1359[0]) > p_23.f3) >= 0xFB8507C1L), 4294967293UL))) & 1UL), (*l_1300)))), 2))) || p_23.f3) != p_23.f0) && g_455) & l_1360)) & p_23.f3) < l_1361);
                    return p_23.f0;
                }
            }
        }
        if ((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s(((((*g_454)--) && 0xD759FB83L) <= (safe_mod_func_int64_t_s_s((l_1290[1] | ((safe_lshift_func_uint16_t_u_u(((*l_1384) = (safe_rshift_func_int8_t_s_s((((((((+(((safe_mul_func_uint16_t_u_u(l_1291, p_23.f3)) & (l_1318 == &g_780)) ^ (p_22 && (((*l_1345) = (l_1379 == (void*)0)) && l_1290[1])))) & 0x8D02L) && p_23.f0) , (void*)0) == l_1380) != l_1382) & p_22), l_1383[0][0]))), l_1382)) == p_23.f2)), p_23.f4))), p_23.f0)) , l_1385), l_1386)) != (*g_1323)), (**g_1322))))
        {
            int32_t * const l_1387[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_1388 = &l_1358;
            int i;
            l_1389 = func_68(l_1387[0], func_68(func_68(&l_1290[0], l_1388), &l_1290[1]));
        }
        else
        {
            int16_t l_1394 = (-10L);
            uint8_t *l_1399 = &l_1291;
            int8_t **l_1401 = &g_434;
            int32_t *l_1402 = &g_52;
            int32_t *l_1403 = &l_1358;
            union U0 ***l_1422[6][9] = {{&l_1380,&l_1380,&l_1380,&l_1380,&l_1380,&l_1380,&l_1380,&l_1380,&l_1380},{&g_240,&g_240,&l_1380,&l_1380,&l_1380,&g_240,&g_240,&l_1380,&l_1380},{&l_1380,&l_1380,&l_1380,&l_1380,&l_1380,&l_1380,&l_1380,&l_1380,&l_1380},{&g_240,&l_1380,&l_1380,&g_240,&l_1380,&l_1380,&g_240,&g_240,&l_1380},{&l_1380,&l_1380,&l_1380,&l_1380,&l_1380,&l_1380,&l_1380,&l_1380,&l_1380},{&g_240,&g_240,&l_1380,&l_1380,&g_240,&g_240,&g_240,&l_1380,&l_1380}};
            union U0 ****l_1423 = &g_657;
            int64_t *l_1432 = &g_135;
            int32_t l_1482 = 0x4AFA6550L;
            int32_t l_1483 = 0x92E9FD0CL;
            int32_t l_1484 = 0x88155BE0L;
            int32_t l_1485 = 5L;
            int32_t l_1486[3][1][9] = {{{0xA8BC4942L,0L,0L,0xA8BC4942L,0L,0L,0xA8BC4942L,0L,0L}},{{0xA8BC4942L,0L,0L,0xA8BC4942L,0L,0L,0xA8BC4942L,0L,0L}},{{0xA8BC4942L,0L,0L,0xA8BC4942L,0L,0L,0xA8BC4942L,0L,0L}}};
            int32_t *l_1537 = &l_1358;
            int32_t l_1567 = 0x024203B2L;
            int32_t * const l_1616[10][9] = {{&l_1484,&l_1290[0],&g_3[2],&l_1484,&g_1087[7],&g_1087[7],&l_1484,&g_3[2],&l_1290[0]},{&l_1484,&l_1290[0],&g_3[2],&l_1484,&g_1087[7],&g_1087[7],&l_1484,&g_3[2],&l_1290[0]},{&l_1484,&l_1290[0],&g_3[2],&l_1484,&g_1087[7],&g_1087[7],&l_1484,&g_3[2],&l_1290[0]},{&l_1484,&l_1290[0],&g_3[2],&l_1484,&g_1087[7],&g_1087[7],&l_1484,&g_3[2],&l_1290[0]},{&l_1484,&l_1290[0],&g_3[2],&l_1484,&g_1087[7],&g_1087[7],&l_1484,&g_3[2],&l_1290[0]},{&l_1484,&l_1290[0],&g_3[2],&l_1484,&g_1087[7],&g_1087[7],&l_1484,&g_3[2],&l_1290[0]},{&l_1484,&l_1290[0],&g_3[2],&l_1484,&g_1087[7],&g_1087[7],&l_1484,&g_3[2],&l_1290[0]},{&l_1484,&l_1290[0],&g_3[2],&l_1484,&g_1087[7],&g_1087[7],&l_1484,&g_3[2],&l_1290[0]},{&l_1484,&l_1290[0],&g_3[2],&l_1484,&g_1087[7],&g_1087[7],&l_1484,&g_3[2],&l_1290[0]},{&l_1484,&l_1290[0],&g_3[2],&l_1484,&g_1087[7],&g_1087[7],&l_1484,&g_3[2],&l_1290[0]}};
            int i, j, k;
            (*l_1403) |= ((*l_1402) = (safe_sub_func_int32_t_s_s(((((((*g_454) ^= p_23.f3) < ((l_1394 && 0L) == (safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((*l_1399) &= 0UL), (l_1400 != ((*l_1401) = (((void*)0 == &g_1193) , l_1400))))), p_23.f0)))) & (*g_169)) , (**g_809)) == (void*)0), 0x9182ED4FL)));
            for (g_547 = 0; (g_547 <= 0); g_547 += 1)
            {
                return p_23.f2;
            }
            (*l_1403) = ((((*l_1423) = (((p_22 , (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((((safe_div_func_uint8_t_u_u(((*l_1399) = ((void*)0 == &l_1389)), (((safe_mul_func_uint8_t_u_u((*l_1402), ((*l_1402) <= (**g_1322)))) >= (safe_sub_func_uint8_t_u_u(((***g_809) , (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((l_1290[1] && (((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(1UL, 0x9CD2L)), 2)) , (*l_1402)) , 18446744073709551609UL)) > (*g_1323)) , (**g_1322)) && 0x24EBL), l_1290[1])), 4))), 9UL))) | p_22))) || 2L) ^ (*l_1402)) <= p_23.f3), (*l_1402))), p_23.f2))) > g_835) , l_1422[0][0])) != g_1424) , p_23.f4);
            for (l_1291 = 0; (l_1291 < 21); ++l_1291)
            {
                uint8_t *l_1439 = (void*)0;
                uint8_t *l_1440 = &g_259;
                int32_t l_1445 = 0L;
                int8_t l_1463 = 0L;
                union U1 ***l_1471 = &g_389;
                int32_t l_1488 = 1L;
                int32_t l_1489 = 0x96C320A6L;
                int32_t l_1490 = (-9L);
                int32_t l_1491 = 1L;
                int32_t l_1492[2];
                int32_t *l_1527 = &g_561[0];
                union U1 * const *l_1586 = &g_390;
                union U1 * const **l_1585 = &l_1586;
                uint16_t l_1615[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
                int32_t **l_1617[2];
                int32_t **l_1618 = &l_1389;
                int i;
                for (i = 0; i < 2; i++)
                    l_1492[i] = 0x9AB6DC16L;
                for (i = 0; i < 2; i++)
                    l_1617[i] = &l_1389;
            }
        }
        --l_1620;
    }
    (*l_1639) = ((safe_add_func_uint64_t_u_u(((((((safe_div_func_uint16_t_u_u(((((1UL | p_23.f0) && p_23.f4) != p_23.f3) == ((((p_22 ^ (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((0x2C04L > (((*l_1633) = &g_1424) == (g_1637[0][6][2] = &g_1424))), (-1L))), p_23.f3))) , p_23.f2) , &g_1424) != &g_1424)), p_23.f2)) , 8L) , l_1521) || p_23.f2) != l_1638) | 65528UL), (*g_169))) , p_23.f3);
    return p_22;
}







static union U1 func_25(uint64_t p_26, int64_t p_27, int32_t p_28)
{
    uint32_t l_1173 = 18446744073709551615UL;
    uint8_t *l_1189[8] = {&g_259,&g_259,&g_259,&g_259,&g_259,&g_259,&g_259,&g_259};
    uint8_t *l_1190[4] = {&g_343,&g_343,&g_343,&g_343};
    uint32_t ***l_1191 = (void*)0;
    const union U0 l_1195 = {0x70F96E37L};
    union U1 l_1197 = {0x7C27L};
    union U0 * const l_1234 = &g_141;
    union U0 * const *l_1233 = &l_1234;
    union U0 * const **l_1232 = &l_1233;
    union U0 * const ***l_1231 = &l_1232;
    union U0 * const ****l_1230 = &l_1231;
    int32_t * const l_1242 = &g_52;
    int32_t l_1247 = (-1L);
    int32_t l_1249[4];
    int32_t ***l_1258 = &g_959;
    int8_t l_1274 = 0x14L;
    int32_t l_1275 = 0x94D22DF3L;
    uint32_t l_1276 = 0xD79927EDL;
    int32_t *l_1279 = &g_1087[5];
    int32_t *l_1280 = (void*)0;
    int32_t *l_1281 = &l_1275;
    int32_t *l_1282 = (void*)0;
    int32_t *l_1283 = &g_84;
    int32_t *l_1284[6][10] = {{&g_1051,&g_1051,(void*)0,&g_1051,&g_1051,(void*)0,&g_1051,&g_1051,(void*)0,&g_1051},{&g_1051,&l_1249[2],&l_1249[2],&g_1051,&l_1249[2],&l_1249[2],&g_1051,&l_1249[2],&l_1249[2],&g_1051},{&l_1249[2],&g_1051,&l_1249[2],&l_1249[2],&g_1051,&l_1249[2],&l_1249[2],&g_1051,&l_1249[2],&l_1249[2]},{&g_1051,&g_1051,(void*)0,&g_1051,&g_1051,&g_1051,&l_1249[2],&l_1249[2],&g_1051,&l_1249[2]},{&l_1249[2],(void*)0,(void*)0,&l_1249[2],(void*)0,(void*)0,&l_1249[2],(void*)0,(void*)0,&l_1249[2]},{(void*)0,&l_1249[2],(void*)0,(void*)0,&l_1249[2],(void*)0,(void*)0,&l_1249[2],(void*)0,(void*)0}};
    uint32_t l_1285 = 0xC85CC821L;
    int i, j;
    for (i = 0; i < 4; i++)
        l_1249[i] = (-5L);
lbl_1209:
    l_1173--;
    for (g_12.f1 = 0; (g_12.f1 <= 5); g_12.f1 += 1)
    {
        union U1 *l_1176 = &g_793[0];
        union U1 **l_1177 = &l_1176;
        uint8_t *l_1187 = (void*)0;
        uint8_t **l_1186 = &l_1187;
        uint8_t **l_1188 = (void*)0;
        uint32_t ****l_1192[8][7] = {{&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191},{&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191},{&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191},{&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191},{&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191},{&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191},{&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191},{&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191,&l_1191}};
        int32_t l_1199 = 4L;
        uint16_t l_1220 = 65533UL;
        int32_t l_1250 = (-1L);
        int32_t l_1251 = 0x488B1B7DL;
        uint16_t l_1252 = 0xD3B6L;
        int32_t *l_1259 = &g_1087[7];
        int32_t *l_1260 = &g_987;
        int32_t *l_1261 = &g_987;
        int32_t *l_1262 = &g_1087[7];
        int32_t *l_1263 = &g_987;
        int32_t *l_1264 = (void*)0;
        int32_t *l_1265 = &l_1199;
        int32_t *l_1266 = &l_1250;
        int32_t *l_1267 = &g_987;
        int32_t *l_1268 = (void*)0;
        int32_t *l_1269 = &l_1247;
        int32_t *l_1270 = &g_987;
        int32_t *l_1271 = &l_1199;
        int32_t *l_1272 = &l_1249[1];
        int32_t *l_1273[7][3][2] = {{{(void*)0,&g_987},{&g_1087[3],&l_1249[2]},{&g_1087[3],&g_3[2]}},{{&g_3[2],&g_3[2]},{&g_1087[3],&l_1249[2]},{&g_1087[3],&g_987}},{{(void*)0,&g_1087[3]},{(void*)0,(void*)0},{&g_84,&g_3[2]}},{{&g_84,(void*)0},{(void*)0,&g_1087[3]},{(void*)0,&g_987}},{{&g_1087[3],&l_1249[2]},{&g_1087[3],&g_3[2]},{&g_3[2],&g_3[2]}},{{&g_1087[3],&l_1249[2]},{&g_1087[3],&g_987},{(void*)0,&g_1087[3]}},{{(void*)0,(void*)0},{&g_84,&g_3[2]},{&g_84,(void*)0}}};
        int i, j, k;
        (*l_1177) = l_1176;
        if ((safe_lshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((((((p_27 <= (((l_1189[5] = ((*l_1186) = &g_259)) == l_1190[1]) , 1L)) || ((l_1191 = l_1191) == g_1193)) , &p_26) == (l_1195 , &p_26)) <= g_1196), g_638)), l_1195.f0)), l_1173)))
        {
            return l_1197;
        }
        else
        {
            const int8_t l_1198 = (-2L);
            int32_t *l_1244 = &g_987;
            int32_t *l_1246[2][4][5] = {{{(void*)0,&g_987,&l_1199,&l_1199,&g_987},{&g_987,&g_987,(void*)0,&g_987,&l_1199},{(void*)0,&g_987,&g_987,&g_987,(void*)0},{(void*)0,(void*)0,&g_987,&l_1199,(void*)0}},{{(void*)0,&g_987,&g_987,(void*)0,&l_1199},{&g_987,(void*)0,&g_987,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1199,(void*)0},{(void*)0,&g_987,&l_1199,(void*)0,&l_1199}}};
            int i, j, k;
            (*g_243) = ((l_1198 < (p_28 = l_1199)) != (&g_1194 == l_1191));
            for (g_343 = 0; (g_343 <= 0); g_343 += 1)
            {
                int8_t *l_1205 = &g_638;
                uint16_t *l_1206 = &g_553[2][3][0];
                int32_t l_1216 = 0L;
                int32_t l_1219 = 0xC8059985L;
                union U1 ***l_1221 = &g_389;
                int32_t l_1225 = 0x7315818DL;
                if ((safe_div_func_uint32_t_u_u(0xCFA7CB76L, (0x708978C2L && (safe_div_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((((*l_1205) = 0x85L) , 0x2F29L))), (++(*l_1206))))))))
                {
                    union U0 l_1214 = {0x35D68655L};
                    union U1 ***l_1215[6][2] = {{&l_1177,&l_1177},{&l_1177,&l_1177},{&l_1177,&l_1177},{&l_1177,&l_1177},{&l_1177,&l_1177},{&l_1177,&l_1177}};
                    int16_t *l_1222[6][7][6] = {{{&g_793[0].f3,&g_793[0].f3,&g_12.f4,&g_12.f4,&g_793[0].f4,&l_1197.f3},{&g_793[0].f4,&l_1197.f3,&g_793[0].f3,&g_793[0].f4,(void*)0,&g_12.f4},{&g_12.f4,&g_793[0].f4,&g_793[0].f3,&g_12.f4,&g_499,&g_793[0].f4},{(void*)0,(void*)0,&g_793[0].f3,&g_499,(void*)0,&g_12.f4},{&g_499,(void*)0,&g_12.f4,&l_1197.f4,&g_499,(void*)0},{(void*)0,&g_12.f0,&g_12.f4,&g_12.f0,(void*)0,&l_1197.f3},{(void*)0,&g_499,&g_12.f4,&l_1197.f4,&g_552,(void*)0}},{{&g_499,&g_499,&g_793[0].f4,&g_499,&g_552,(void*)0},{(void*)0,&g_552,&g_12.f4,(void*)0,&l_1197.f4,&l_1197.f3},{&g_552,&l_1197.f0,&g_12.f4,(void*)0,&l_1197.f4,(void*)0},{&g_12.f0,&g_552,&g_12.f4,&g_552,&g_552,&g_12.f4},{&g_499,&g_499,&g_793[0].f3,&g_552,&g_552,&g_793[0].f4},{&g_12.f0,&g_499,(void*)0,(void*)0,(void*)0,&g_793[0].f3},{&g_552,&g_12.f0,(void*)0,(void*)0,&g_499,&g_793[0].f4}},{{(void*)0,(void*)0,&g_793[0].f3,&g_499,(void*)0,&g_12.f4},{&g_499,(void*)0,&g_12.f4,&l_1197.f4,&g_499,(void*)0},{(void*)0,&g_12.f0,&g_12.f4,&g_12.f0,(void*)0,&l_1197.f3},{(void*)0,&g_499,&g_12.f4,&l_1197.f4,&g_552,(void*)0},{&g_499,&g_499,&g_793[0].f4,&g_499,&g_552,(void*)0},{(void*)0,&g_552,&g_12.f4,(void*)0,&l_1197.f4,&l_1197.f3},{&g_552,&l_1197.f0,&g_12.f4,(void*)0,&l_1197.f4,(void*)0}},{{&g_12.f0,&g_552,&g_12.f4,&g_552,&g_552,&g_12.f4},{&g_499,&g_499,&g_793[0].f3,&g_552,&g_552,&g_793[0].f4},{&g_12.f0,&g_499,(void*)0,(void*)0,(void*)0,&g_793[0].f3},{&g_552,&g_12.f0,(void*)0,(void*)0,&g_499,&g_793[0].f4},{(void*)0,(void*)0,&g_793[0].f3,&g_499,(void*)0,&g_12.f4},{&g_499,(void*)0,&g_12.f4,&l_1197.f4,&g_499,(void*)0},{(void*)0,&g_12.f0,&g_12.f4,&g_12.f0,(void*)0,&l_1197.f3}},{{(void*)0,&g_499,&g_12.f4,&l_1197.f4,&g_552,(void*)0},{&g_499,&g_499,&g_793[0].f4,&g_499,&g_552,(void*)0},{(void*)0,&g_552,&g_12.f4,(void*)0,&l_1197.f4,&l_1197.f3},{&g_552,&l_1197.f0,&g_12.f4,(void*)0,&l_1197.f4,(void*)0},{&g_12.f0,&g_552,&g_12.f4,&g_552,&g_552,&g_12.f4},{&g_499,&g_499,&g_793[0].f3,&g_552,&g_552,&g_793[0].f4},{&g_12.f0,&g_499,(void*)0,&g_793[0].f3,&g_12.f3,&g_499}},{{&g_12.f4,&g_793[0].f3,(void*)0,&g_209,&g_12.f3,&g_12.f0},{&g_12.f3,&g_209,&g_499,&l_1197.f3,&g_209,&g_552},{&l_1197.f3,&g_209,&g_552,&g_793[0].f3,&g_12.f3,(void*)0},{&g_12.f3,&g_793[0].f3,(void*)0,&g_793[0].f3,&g_12.f3,&g_499},{&g_12.f3,&l_1197.f3,&l_1197.f0,&g_793[0].f3,&g_793[0].f3,(void*)0},{&l_1197.f3,&g_12.f3,(void*)0,&l_1197.f3,&g_12.f4,(void*)0},{&g_12.f3,&g_793[0].f3,&l_1197.f0,&g_209,&g_793[0].f3,&g_499}}};
                    int32_t *l_1226[3][10] = {{&l_1225,&g_3[5],&g_1087[7],&g_1087[7],&g_3[5],&l_1225,(void*)0,&g_987,&g_1051,&g_1087[7]},{(void*)0,&g_1087[7],&g_1087[4],(void*)0,&g_987,(void*)0,&g_1087[4],&g_1087[7],(void*)0,&l_1225},{(void*)0,&g_1087[7],&g_987,(void*)0,(void*)0,&l_1225,&l_1225,(void*)0,(void*)0,&g_987}};
                    int i, j, k;
                    if (l_1197.f4)
                        goto lbl_1209;
                    g_1051 = ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u((l_1219 = ((l_1214 , l_1215[1][0]) != (((l_1216 = l_1216) >= (0x4624E610F502617ALL || (safe_rshift_func_int16_t_s_u((l_1220 = ((l_1219 , &g_1193) != (void*)0)), 11)))) , l_1221))), 8)) && (safe_mul_func_uint8_t_u_u(((((*g_243) |= p_27) == l_1197.f0) < l_1219), g_12.f2))), l_1225)) , 0xB0B0A7ABL);
                }
                else
                {
                    union U1 l_1227 = {0x9898L};
                    return l_1227;
                }
                for (g_710 = 1; (g_710 <= 5); g_710 += 1)
                {
                    int32_t *l_1235 = &g_1051;
                    int32_t l_1248 = 0x97957D4CL;
                    int i, j, k;
                    if (g_581[g_343][g_12.f1][g_343])
                        break;
                    (*l_1235) &= ((*g_243) = (safe_div_func_uint16_t_u_u((&g_656[1][0][3] != l_1230), 0x5036L)));
                    for (l_1216 = 0; (l_1216 <= 2); l_1216 += 1)
                    {
                        union U1 ***l_1240 = &g_389;
                        uint16_t **l_1241 = &l_1206;
                        int32_t **l_1243 = (void*)0;
                        int32_t **l_1245 = &g_243;
                        int i, j, k;
                    }
                    l_1252++;
                }
            }
            (*g_243) = (safe_lshift_func_uint16_t_u_u((!((void*)0 != l_1258)), g_353[5][3][0]));
            (*g_959) = &p_28;
        }
        l_1276++;
        return (**l_1177);
    }
    ++l_1285;
    return l_1197;
}







static int32_t func_31(uint32_t p_32, const union U1 p_33)
{
    int8_t *l_564 = &g_353[9][6][0];
    const int32_t *l_572 = (void*)0;
    const int32_t **l_571[7] = {&l_572,&l_572,&l_572,&l_572,&l_572,&l_572,&l_572};
    int32_t l_575[6] = {0L,0x0CAE16E8L,0x0CAE16E8L,0L,0x0CAE16E8L,0x0CAE16E8L};
    uint32_t *l_580[3];
    int32_t l_582 = 0xEFA4F3A8L;
    int32_t *l_583 = &g_52;
    int32_t l_595 = 0xDF730857L;
    int32_t l_597 = (-10L);
    int32_t l_598 = 0x9EDD88C3L;
    uint32_t l_713 = 0x4850A0EEL;
    uint16_t *l_744[2][8][9] = {{{&g_95,&g_198,&g_95,&g_198,&g_553[6][3][0],&g_553[2][3][0],&g_553[2][3][0],&g_95,&g_198},{&g_553[2][3][0],(void*)0,&g_553[2][3][0],&g_198,&g_198,&g_553[2][3][0],(void*)0,&g_553[2][3][0],(void*)0},{&g_553[2][3][0],&g_95,&g_553[2][3][0],&g_198,&g_553[2][3][0],&g_95,&g_553[6][3][0],&g_95,&g_553[2][3][0]},{&g_95,(void*)0,(void*)0,&g_95,&g_553[2][3][0],&g_553[4][1][1],&g_553[2][3][0],&g_95,(void*)0},{&g_198,&g_198,&g_553[6][3][0],&g_95,&g_553[2][3][0],&g_95,&g_553[6][3][0],&g_198,&g_198},{(void*)0,&g_95,&g_553[2][3][0],&g_553[4][1][1],&g_553[2][3][0],&g_95,(void*)0,(void*)0,&g_95},{&g_553[2][3][0],&g_95,&g_553[6][3][0],&g_95,&g_553[2][3][0],&g_198,&g_553[2][3][0],&g_95,&g_553[2][3][0]},{(void*)0,&g_553[2][3][0],(void*)0,&g_553[2][3][0],&g_198,&g_198,&g_553[2][3][0],(void*)0,&g_553[2][3][0]}},{{&g_198,&g_95,&g_553[2][3][0],&g_553[2][3][0],&g_553[6][3][0],&g_198,&g_95,&g_198,&g_95},{&g_95,&g_553[4][1][1],&g_553[2][3][0],&g_553[2][3][0],&g_553[4][1][1],&g_95,&g_198,&g_95,&g_553[4][1][1]},{&g_553[2][3][0],&g_95,&g_95,&g_95,&g_198,&g_95,&g_198,&g_95,&g_95},{&g_553[2][3][0],&g_553[2][3][0],&g_198,&g_553[2][3][0],&g_95,&g_553[2][3][0],&g_553[2][3][0],&g_553[2][3][0],&g_553[2][3][0]},{&g_553[2][3][0],&g_95,&g_553[2][3][0],&g_198,&g_553[2][3][0],&g_95,&g_553[2][3][0],&g_95,&g_95},{&g_553[2][3][0],(void*)0,&g_553[2][3][0],(void*)0,&g_553[2][3][0],&g_198,&g_198,&g_553[2][3][0],(void*)0},{&g_553[2][3][0],&g_95,&g_553[2][3][0],&g_553[2][3][0],&g_198,&g_198,&g_553[6][3][0],&g_95,&g_553[2][3][0]},{&g_553[2][3][0],&g_553[4][1][1],&g_198,&g_553[2][3][0],&g_553[2][3][0],&g_198,&g_553[4][1][1],&g_553[2][3][0],&g_553[4][1][1]}}};
    union U1 **l_761 = (void*)0;
    int32_t l_831[2];
    int32_t l_879 = 0xD6A918A3L;
    const int32_t *l_890 = &l_598;
    const int32_t **l_889 = &l_890;
    union U0 *l_910 = &g_796;
    union U1 l_953 = {0xEC6DL};
    uint8_t l_1006 = 0x78L;
    union U1 *l_1008 = (void*)0;
    const uint16_t *l_1039 = &g_1040;
    union U0 *****l_1076 = &g_656[0][0][0];
    int32_t l_1170 = 0L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_580[i] = &g_581[0][3][0];
    for (i = 0; i < 2; i++)
        l_831[i] = 0x8B80FA93L;
    if (((*l_583) = (((safe_lshift_func_uint8_t_u_u((((((*g_454) = (((*l_564) = p_32) >= ((safe_div_func_uint64_t_u_u(((safe_add_func_int32_t_s_s(((l_571[5] == &l_572) >= (((((safe_sub_func_uint64_t_u_u(l_575[4], (safe_mul_func_int16_t_s_s((l_575[0] , l_575[4]), (safe_add_func_uint8_t_u_u(((((*g_454) | (l_582 = (p_32 ^ (l_575[4] == p_33.f0)))) != p_33.f2) <= l_575[1]), p_33.f0)))))) | p_33.f0) >= 0x298FD2DBL) && l_575[5]) != 0xD2BE89EDA9A246A7LL)), l_575[3])) | l_575[4]), p_33.f0)) != l_575[4]))) > 0x80141AA4L) && l_575[4]) < g_141.f0), g_3[5])) ^ p_32) , 0xD511CD56L)))
    {
        int32_t *l_584 = &g_52;
        int32_t *l_585 = &g_84;
        int32_t *l_586 = &g_84;
        int32_t *l_587 = &g_52;
        int32_t *l_588 = &g_52;
        int32_t *l_589 = (void*)0;
        int32_t *l_590 = &l_582;
        int32_t *l_591 = &g_52;
        int32_t *l_592 = (void*)0;
        int32_t *l_593 = &g_84;
        int32_t *l_594 = (void*)0;
        int32_t *l_596[1];
        uint8_t l_599 = 1UL;
        int64_t l_617 = 3L;
        int16_t **l_620 = (void*)0;
        const uint16_t *l_635[5][3][4] = {{{&g_95,&g_553[2][3][0],&g_95,(void*)0},{(void*)0,(void*)0,&g_553[0][0][0],(void*)0},{&g_553[5][3][1],&g_12.f2,(void*)0,(void*)0}},{{&g_12.f2,&g_12.f2,(void*)0,&g_95},{&g_553[5][3][1],&g_12.f2,&g_553[0][0][0],&g_12.f2},{(void*)0,&g_553[0][0][0],&g_95,&g_553[0][0][0]}},{{&g_95,&g_553[0][0][0],(void*)0,&g_12.f2},{&g_553[0][0][0],&g_12.f2,&g_553[5][3][1],&g_95},{(void*)0,&g_12.f2,&g_12.f2,(void*)0}},{{(void*)0,&g_12.f2,&g_553[5][3][1],(void*)0},{&g_553[0][0][0],(void*)0,(void*)0,(void*)0},{&g_95,&g_553[2][3][0],&g_95,(void*)0}},{{(void*)0,(void*)0,&g_553[0][0][0],(void*)0},{&g_553[5][3][1],&g_12.f2,(void*)0,(void*)0},{&g_12.f2,&g_12.f2,(void*)0,&g_95}}};
        uint16_t l_643[8][7] = {{0x1BEFL,0x550FL,0UL,0xA153L,0xEA71L,0xA153L,0UL},{0x3A8AL,0x3A8AL,8UL,0x121DL,8UL,0x3A8AL,0x3A8AL},{7UL,0x550FL,0x36BCL,0x550FL,7UL,65526UL,0UL},{1UL,0x6939L,1UL,8UL,8UL,1UL,0x6939L},{0UL,0UL,0x36BCL,0xC89CL,0xEA71L,0x550FL,0xEA71L},{1UL,8UL,8UL,1UL,0x6939L,1UL,8UL},{7UL,65526UL,0UL,0xC89CL,0UL,65526UL,7UL},{0x3A8AL,8UL,0x121DL,8UL,0x3A8AL,0x3A8AL,8UL}};
        union U0 ****l_658 = &g_657;
        const int32_t *l_697 = (void*)0;
        const int32_t **l_696[9][9] = {{&l_697,&l_697,(void*)0,&l_697,(void*)0,&l_697,(void*)0,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697,&l_697,&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,(void*)0,&l_697,&l_697,(void*)0,(void*)0,&l_697,&l_697},{&l_697,&l_697,&l_697,(void*)0,(void*)0,(void*)0,(void*)0,&l_697,(void*)0},{(void*)0,&l_697,(void*)0,&l_697,&l_697,(void*)0,&l_697,(void*)0,&l_697},{&l_697,(void*)0,(void*)0,(void*)0,(void*)0,&l_697,&l_697,&l_697,(void*)0},{&l_697,&l_697,&l_697,&l_697,(void*)0,(void*)0,(void*)0,&l_697,&l_697},{(void*)0,(void*)0,&l_697,(void*)0,&l_697,(void*)0,&l_697,(void*)0,(void*)0},{&l_697,&l_697,(void*)0,(void*)0,(void*)0,&l_697,&l_697,&l_697,&l_697}};
        const int32_t ***l_695[2];
        union U1 **l_758 = (void*)0;
        int32_t *l_764 = &l_582;
        uint8_t l_841 = 0x25L;
        uint64_t *l_909[9][2] = {{&g_796.f1,&g_796.f1},{&g_796.f1,&g_796.f1},{&g_796.f1,&g_796.f1},{&g_796.f1,&g_796.f1},{&g_796.f1,&g_796.f1},{&g_796.f1,&g_796.f1},{&g_796.f1,&g_796.f1},{&g_796.f1,&g_796.f1},{&g_796.f1,&g_796.f1}};
        int64_t *l_922 = &l_617;
        uint32_t l_933 = 0xD91EF592L;
        const union U1 ***l_950 = (void*)0;
        const union U1 ****l_949 = &l_950;
        int8_t l_951 = 0xB1L;
        uint16_t l_969 = 0x57F6L;
        int32_t ** const * const l_972 = &g_100;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_596[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_695[i] = &l_696[7][4];
lbl_907:
        --l_599;
lbl_786:
        (*l_587) ^= p_33.f3;
        for (g_507 = 0; (g_507 <= 8); g_507 += 1)
        {
            uint64_t l_618 = 18446744073709551607UL;
            int32_t l_677 = 0x8D427448L;
            union U0 l_743 = {-1L};
            int32_t l_752 = 0L;
            uint32_t l_757 = 0x480EF25AL;
            int16_t *l_770 = &g_12.f4;
            int16_t **l_769 = &l_770;
            const uint32_t *l_781[2][3][7] = {{{&g_780,&g_780,&g_782,&g_782,&g_782,&g_782,&g_782},{(void*)0,&g_782,&g_782,(void*)0,&g_782,&g_780,(void*)0},{&g_780,&g_782,&g_782,&g_782,&g_782,&g_780,&g_780}},{{(void*)0,(void*)0,&g_782,(void*)0,(void*)0,&g_782,(void*)0},{&g_782,&g_780,&g_780,&g_782,&g_782,&g_782,&g_782},{&g_780,(void*)0,&g_780,&g_782,(void*)0,&g_782,&g_782}}};
            union U1 *l_791 = &g_12;
            const uint32_t *l_851 = (void*)0;
            const uint16_t **l_877 = &l_635[3][0][3];
            uint32_t l_881 = 0UL;
            int32_t **l_888[4][3] = {{&l_591,&l_591,&l_588},{&l_591,&l_591,&l_588},{&l_591,&l_591,&l_588},{&l_591,&l_591,&l_588}};
            const int32_t **l_891 = &l_890;
            int i, j, k;
            for (g_226 = 1; (g_226 <= 8); g_226 += 1)
            {
                int32_t l_616 = 0x08D63C8FL;
                union U1 **l_634 = (void*)0;
                int8_t *l_636 = &g_547;
                int8_t *l_637[5] = {&g_638,&g_638,&g_638,&g_638,&g_638};
                int32_t l_639 = 0xE6EC383AL;
                int64_t *l_640 = (void*)0;
                int64_t *l_641 = &g_121;
                int64_t *l_642 = &l_617;
                int32_t l_645 = 0x56128634L;
                int32_t l_646[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_646[i] = 1L;
                (*g_243) |= ((*l_584) &= 0x4E4D2FACL);
                if ((*g_243))
                {
                    int32_t * const l_613 = &g_52;
                    for (g_548 = 0; (g_548 <= 4); g_548 += 1)
                    {
                        int32_t *l_614 = (void*)0;
                        int32_t **l_615 = &l_594;
                        uint64_t *l_619 = &g_213;
                        int i;
                        (*l_590) &= (((safe_add_func_int32_t_s_s((((-1L) && ((((safe_rshift_func_int16_t_s_u(0x8DEFL, 14)) , ((*l_619) = (((!((safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((((safe_add_func_int16_t_s_s((((*l_615) = func_68(func_68(l_613, l_614), l_614)) != (g_102 , l_584)), g_561[2])) > l_616) , 0L) < p_33.f3), 253UL)), l_617)) >= 0x5CB1D82DL)) > l_618) ^ p_33.f4))) <= (*g_169)) <= 0xD6L)) >= (*l_583)), 0xA0C6AE4CL)) > (*l_588)) != 0UL);
                        if ((*g_243))
                            continue;
                        return p_33.f0;
                    }
                }
                else
                {
                    int16_t ***l_621 = (void*)0;
                    int16_t ***l_622 = &l_620;
                    int32_t l_623[9][6][4] = {{{(-3L),(-1L),(-8L),1L},{0xCDD4653EL,0xD9FCE505L,1L,1L},{(-3L),0xEB069CECL,0xF91D28E6L,1L},{1L,0xD9FCE505L,0x1DB773FFL,1L},{0L,(-1L),0xBD5BF98BL,(-1L)},{0x1E9654DBL,1L,0xF866C8C4L,0x6B44E91CL}},{{0x1DB773FFL,0x1E9654DBL,0xEB069CECL,(-3L)},{0L,0x6B44E91CL,4L,(-1L)},{6L,3L,0xF91D28E6L,0x1E9654DBL},{1L,0xCDD4653EL,1L,0x3048AFC7L},{0xCDD4653EL,0x6B44E91CL,3L,4L},{4L,0x1DB773FFL,1L,0x6B44E91CL}},{{(-1L),6L,1L,(-1L)},{4L,(-1L),3L,(-3L)},{0xCDD4653EL,(-4L),1L,1L},{1L,1L,0xF91D28E6L,0xEB069CECL},{6L,0xD9FCE505L,1L,0xF866C8C4L},{1L,5L,1L,0x1DB773FFL}},{{0xBD5BF98BL,(-1L),(-5L),(-5L)},{0xEB069CECL,0xEB069CECL,0xCDD4653EL,0x3048AFC7L},{1L,(-5L),0xBD5BF98BL,(-4L)},{1L,(-3L),5L,0xBD5BF98BL},{0xF866C8C4L,(-3L),0x6B44E91CL,(-4L)},{(-3L),(-5L),8L,0x3048AFC7L}},{{0xB281FAA4L,0xEB069CECL,1L,(-5L)},{0x1DB773FFL,(-1L),(-1L),0x1DB773FFL},{0x3048AFC7L,5L,8L,0xF866C8C4L},{0x5544DB41L,(-8L),0L,1L},{0xF866C8C4L,3L,0L,3L},{(-1L),3L,0xBD5BF98BL,0xF866C8C4L}},{{1L,(-4L),1L,4L},{0xEB069CECL,(-1L),6L,1L},{0xEB069CECL,0xBD5BF98BL,1L,0x3048AFC7L},{1L,1L,0xBD5BF98BL,5L},{(-1L),(-3L),0L,0xEB069CECL},{0xF866C8C4L,0x5544DB41L,0L,(-4L)}},{{0x5544DB41L,1L,8L,0xB281FAA4L},{0x3048AFC7L,0xEB069CECL,(-1L),1L},{0x1DB773FFL,1L,1L,0x1DB773FFL},{0xB281FAA4L,(-4L),8L,0L},{(-3L),(-8L),0x6B44E91CL,3L},{0xF866C8C4L,1L,5L,3L}},{{1L,(-8L),0xBD5BF98BL,0L},{1L,(-4L),0xCDD4653EL,0x1DB773FFL},{0xEB069CECL,1L,(-5L),1L},{0xBD5BF98BL,0xEB069CECL,1L,0xB281FAA4L},{1L,1L,1L,(-4L)},{(-1L),0x5544DB41L,5L,0xEB069CECL}},{{0L,(-3L),0L,5L},{(-3L),1L,0x0338C941L,0x3048AFC7L},{0x3048AFC7L,0xBD5BF98BL,1L,1L},{4L,(-1L),1L,4L},{0x3048AFC7L,(-4L),0x0338C941L,0xF866C8C4L},{(-3L),3L,0L,3L}}};
                    int i, j, k;
                    (*l_622) = l_620;
                    for (g_343 = 1; (g_343 <= 4); g_343 += 1)
                    {
                        (*g_243) &= l_623[5][5][3];
                    }
                }
                if (((safe_mul_func_int16_t_s_s(((((*g_454) = 8UL) <= p_32) || ((safe_mod_func_int64_t_s_s(((*l_642) = ((*l_641) = ((safe_rshift_func_int16_t_s_s(((((((safe_lshift_func_int16_t_s_u((-1L), 5)) >= (l_639 ^= ((*l_636) ^= (((((p_33.f2 == (safe_add_func_uint8_t_u_u(((void*)0 != l_634), ((*l_564) = ((((0x68L > 246UL) == 1UL) <= l_618) | p_33.f3))))) , l_616) | 0x5DL) , (void*)0) != l_635[3][0][3])))) , p_33) , 0L) == 0x5A51L) < p_33.f3), 14)) == 0xE33A1BD2L))), 3L)) != 1L)), g_268)) <= l_643[7][1]))
                {
                    int32_t l_648 = (-1L);
                    for (g_343 = 0; (g_343 <= 4); g_343 += 1)
                    {
                        uint16_t l_649 = 0xB0ABL;
                        l_649++;
                    }
                }
                else
                {
                    uint32_t l_660 = 1UL;
                    for (g_12.f4 = 0; (g_12.f4 <= 4); g_12.f4 += 1)
                    {
                        union U0 *****l_659 = &l_658;
                        int32_t *l_661 = &l_645;
                        int32_t **l_675[7] = {&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101};
                        int i;
                        (*l_591) |= (safe_mul_func_int16_t_s_s(p_32, g_552));
                        l_660 |= ((++(*g_454)) == ((p_33 , g_656[0][0][0]) == ((*l_659) = l_658)));
                        (*g_243) = ((l_661 != (void*)0) != ((safe_lshift_func_uint16_t_u_s((p_33.f3 & g_125[6][7]), 6)) , ((((safe_mul_func_int8_t_s_s((*l_583), ((*l_636) |= (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(1UL, (safe_sub_func_int32_t_s_s((((((safe_mod_func_int32_t_s_s((!(((*g_110) == l_675[5]) | (safe_unary_minus_func_int16_t_s((6UL < 0xA1D7DA4107D789D1LL))))), p_33.f0)) >= g_135) ^ 250UL) >= g_581[0][3][0]) >= p_33.f3), p_33.f0)))), g_213))))) >= p_33.f0) , (*g_454)) , p_33.f3)));
                    }
                }
                --g_678;
            }
            for (l_597 = 1; (l_597 <= 4); l_597 += 1)
            {
                int8_t l_683 = 0x02L;
                int16_t *l_684 = &g_552;
                int64_t *l_701 = (void*)0;
                int64_t *l_702 = &g_135;
                const uint32_t l_703 = 0x6F708151L;
                int8_t *l_704 = &g_647;
                int64_t *l_705[8][3][3] = {{{&g_121,&g_121,&g_644[0]},{&g_121,&l_617,&g_644[2]},{&g_121,&g_121,&g_644[0]}},{{&l_617,&l_617,&g_644[5]},{&g_121,&g_121,&g_644[0]},{&g_121,&l_617,&g_644[2]}},{{&g_121,&g_121,&g_644[0]},{&l_617,&l_617,&g_644[5]},{&g_121,&g_121,&g_644[0]}},{{&g_121,&l_617,&g_644[2]},{&g_121,&g_121,&g_644[0]},{&g_121,(void*)0,&l_617}},{{(void*)0,&g_644[2],&g_121},{&l_617,(void*)0,&g_121},{(void*)0,(void*)0,&g_121}},{{&g_121,(void*)0,&l_617},{(void*)0,&g_644[2],&g_121},{&l_617,(void*)0,&g_121}},{{(void*)0,(void*)0,&g_121},{&g_121,(void*)0,&l_617},{(void*)0,&g_644[2],&g_121}},{{&l_617,(void*)0,&g_121},{(void*)0,(void*)0,&g_121},{&g_121,(void*)0,&l_617}}};
                int64_t l_706 = 0x061C9E113A566B73LL;
                int32_t l_707 = 8L;
                int32_t l_708 = (-1L);
                int32_t *l_725 = &l_595;
                int32_t l_756 = 8L;
                int i, j, k;
                (*l_585) = ((safe_mod_func_uint8_t_u_u((((*l_684) = l_683) | (g_12.f3 = (g_84 & p_32))), (-3L))) <= (safe_mul_func_uint8_t_u_u(((0xCA2DL < (((((*l_583) = (safe_sub_func_int8_t_s_s(((*l_704) = ((*l_564) ^= ((safe_lshift_func_int8_t_s_s((((((g_581[0][3][0] = (safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s((((65533UL & (l_695[1] != (void*)0)) < ((((*l_702) = (~(safe_add_func_uint8_t_u_u(g_84, p_33.f0)))) & 1UL) ^ 0x233466D0L)) <= l_618), p_33.f2)), l_703))) , p_33.f0) != 0x207CD33261783EF1LL) != g_507) < 0xCEB85BF3L), p_33.f2)) != 0xF470F9D95BEE93BFLL))), g_644[2]))) != g_213) == l_703) , l_703)) ^ l_706), l_618)));
                for (g_548 = 2; (g_548 >= 0); g_548 -= 1)
                {
                    uint16_t *l_714 = (void*)0;
                    int32_t l_715 = 0xB9132DB4L;
                    int32_t l_724[8][8] = {{0x5BC8F06AL,1L,0x82E6B681L,(-3L),(-3L),0x82E6B681L,1L,0x5BC8F06AL},{3L,(-3L),0x2252F4FDL,0xD6C513A2L,(-3L),0xD6C513A2L,0x2252F4FDL,(-3L)},{0x5BC8F06AL,0x2252F4FDL,3L,0x5BC8F06AL,0xD6C513A2L,0xD6C513A2L,0x5BC8F06AL,3L},{(-3L),(-3L),0x82E6B681L,1L,0x5BC8F06AL,0x82E6B681L,0x5BC8F06AL,1L},{3L,1L,3L,0xD6C513A2L,1L,0x2252F4FDL,0x2252F4FDL,1L},{1L,0x2252F4FDL,0x2252F4FDL,1L,0xD6C513A2L,3L,1L,3L},{1L,0x5BC8F06AL,0x82E6B681L,0x5BC8F06AL,1L,0x82E6B681L,(-3L),(-3L)},{3L,0x5BC8F06AL,0xD6C513A2L,0xD6C513A2L,0x5BC8F06AL,3L,0x2252F4FDL,0x5BC8F06AL}};
                    union U1 ***l_759 = (void*)0;
                    union U1 ***l_760[6];
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_760[i] = &l_758;
                    ++g_710;
                    if ((((-2L) < (l_707 = (l_715 |= l_713))) == ((p_32 > (safe_mod_func_uint8_t_u_u((p_33.f4 || ((*l_684) = 1L)), (safe_add_func_uint16_t_u_u(g_57, (((((safe_rshift_func_int8_t_s_u(l_724[1][6], 3)) , ((void*)0 != l_725)) != 0UL) , 0x0D52L) , g_121)))))) , (*g_454))))
                    {
                        (*l_591) &= 0xEEFAD974L;
                    }
                    else
                    {
                        return (*g_243);
                    }
                    for (l_598 = 0; (l_598 <= 8); l_598 += 1)
                    {
                        uint16_t **l_745 = &l_744[1][5][6];
                        int32_t l_753 = (-1L);
                        int32_t l_754 = 1L;
                        int32_t **l_755 = &l_586;
                        int i, j, k;
                        l_677 &= (safe_unary_minus_func_uint64_t_u((safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((((*g_243) , (safe_mul_func_int16_t_s_s((g_499 &= (((((*l_684) = (((*l_755) = func_68(((((((*l_583) = ((l_753 = (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_715, ((((safe_add_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((((((((l_743 , ((*l_745) = l_744[1][5][6])) == ((g_561[g_548] |= (safe_rshift_func_int8_t_s_u((p_33.f0 == p_33.f3), 0))) , &g_95)) <= ((*l_564) = ((*l_704) = (0xC2177D76L & ((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((g_358[g_548][(g_548 + 1)][g_548] = ((l_743 , p_33.f4) < 0x3945254EL)) , (*l_725)), p_33.f3)), 0xDB1BL)) , l_752))))) != l_743.f0) , l_743.f0) & l_753) & 0x3EL), 5)) | (-1L)), 0x12L)) != p_33.f2) >= (*l_725)), 0x7F78L)) ^ g_3[5]) , p_33.f3) == l_724[1][6]))), 4))) , (*l_725))) < l_754) && l_618) , 0x64C4EF19L) , &g_3[2]), &l_595)) == (void*)0)) < g_548) < l_756) && p_33.f3)), 0x176EL))) < l_743.f0), l_757)), p_32))));
                    }
                    g_389 = (l_761 = l_758);
                }
            }
            if (p_33.f3)
            {
                int16_t *l_766[3];
                int16_t ** const l_765[6][5] = {{&l_766[0],(void*)0,&l_766[1],(void*)0,(void*)0},{&l_766[0],&l_766[1],&l_766[1],(void*)0,&l_766[1]},{&l_766[0],&l_766[1],&l_766[1],&l_766[1],&l_766[1]},{&l_766[0],(void*)0,&l_766[1],(void*)0,(void*)0},{&l_766[0],&l_766[1],&l_766[1],(void*)0,&l_766[1]},{&l_766[0],&l_766[1],&l_766[1],&l_766[1],&l_766[1]}};
                int32_t l_795 = 0xB7CD014FL;
                uint64_t *l_801 = &g_796.f1;
                uint64_t *l_802 = &g_226;
                int32_t l_829 = 0x54309474L;
                const int32_t l_830[10][2] = {{0x5F7A4C26L,0x5CA1EC71L},{(-8L),0x5F7A4C26L},{(-4L),(-4L)},{(-4L),0x5F7A4C26L},{(-8L),0x5CA1EC71L},{0x5F7A4C26L,0x5CA1EC71L},{(-8L),0x5F7A4C26L},{(-4L),(-4L)},{(-4L),0x5F7A4C26L},{(-8L),0x5CA1EC71L}};
                int32_t l_832 = 0x0589D411L;
                int32_t l_833 = 1L;
                int32_t l_834[1][10][5] = {{{2L,2L,8L,(-1L),2L},{0xF6EAB7C1L,(-1L),0xF6EAB7C1L,(-9L),1L},{2L,0xA15A91EBL,0xA15A91EBL,2L,1L},{8L,(-1L),0x60A88995L,(-1L),8L},{1L,2L,0xA15A91EBL,0xA15A91EBL,2L},{1L,(-9L),0xF6EAB7C1L,(-1L),0xF6EAB7C1L},{2L,(-1L),8L,2L,2L},{0xE5F15BB3L,(-1L),0xE5F15BB3L,0L,0xE5F15BB3L},{1L,0xBE41D1F2L,8L,0xA15A91EBL,0xBE41D1F2L},{0xF6EAB7C1L,(-9L),1L,(-9L),0xF6EAB7C1L}}};
                int32_t *l_856[3];
                const union U0 l_880 = {0x5ED4DDDDL};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_766[i] = &g_12.f4;
                for (i = 0; i < 3; i++)
                    l_856[i] = &l_834[0][4][2];
                if ((*l_583))
                {
                    uint32_t l_768 = 0x165BFA5DL;
                    uint8_t *l_771 = (void*)0;
                    union U1 *l_792 = &g_793[0];
                    (*l_585) = (((&g_259 == ((safe_sub_func_int64_t_s_s(((*l_583) = ((l_564 == &g_638) != ((void*)0 == l_764))), (l_765[3][0] != (l_769 = (((*g_454) >= 0UL) , ((~(l_768 >= p_33.f3)) , l_620)))))) , l_771)) != 0xB3B7L) > p_33.f2);
                    if (l_768)
                    {
                        const uint32_t *l_779 = &g_780;
                        const uint32_t **l_778[1];
                        uint32_t **l_783 = &l_580[0];
                        int64_t *l_784[1][5][6] = {{{&g_644[2],&g_135,&g_644[2],&g_644[2],&g_135,&g_644[2]},{&g_644[2],&g_135,&g_644[2],&g_644[2],&g_135,&g_644[2]},{&g_644[2],&g_135,&g_644[2],&g_644[2],&g_135,&g_644[2]},{&g_644[2],&g_135,&g_644[2],&g_644[2],&g_135,&g_644[2]},{&g_644[2],&g_135,&g_644[2],&g_644[2],&g_135,&g_644[2]}}};
                        uint8_t l_785[10][8];
                        union U1 ****l_787 = (void*)0;
                        union U1 ***l_789 = &l_758;
                        union U1 ****l_788 = &l_789;
                        union U1 **l_794 = &l_791;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_778[i] = &l_779;
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_785[i][j] = 0x91L;
                        }
                        (*l_590) = (((g_504 ^ (safe_add_func_int8_t_s_s(p_33.f0, g_12.f3))) > ((-1L) != (g_552 |= (((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((l_743.f0 = ((((0xE7L > ((((*l_583) > (0x3A5BDFE0L ^ ((((((l_781[0][2][0] = (void*)0) != ((*l_783) = &g_581[0][4][0])) == p_32) <= 0x00805DB3L) == l_752) || (-5L)))) < p_32) == p_33.f2)) , &g_57) == &g_549) , (*l_584))) || (*g_169)), l_768)), p_33.f3)) || l_785[5][6]) , 4L)))) || 0UL);
                        if (p_33.f0)
                            goto lbl_786;
                        (*l_788) = &l_761;
                        l_752 = ((!(&p_33 != ((*l_794) = (l_792 = l_791)))) & p_33.f3);
                    }
                    else
                    {
                        if (l_795)
                            break;
                    }
                }
                else
                {
                    union U0 *l_797 = &l_743;
                    for (g_121 = 0; (g_121 <= 8); g_121 += 1)
                    {
                        (*l_583) = (p_33.f4 & ((g_796 , (&g_552 == &g_499)) && ((void*)0 == l_797)));
                    }
                    (*l_588) = 0x66290F73L;
                }
                if ((((((~((*l_802)++)) != (&p_33 != (g_390 = &g_12))) , (-1L)) , ((*g_390) , &l_572)) != (void*)0))
                {
                    union U0 l_823[2] = {{-1L},{-1L}};
                    int32_t l_828[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_828[i] = (-8L);
                    (*l_591) = (safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((l_829 = (p_33.f0 ^ (((void*)0 == g_809) , (safe_sub_func_uint8_t_u_u(((l_828[0] &= (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_33.f4, p_33.f2)), (safe_mul_func_int8_t_s_s(((l_795 = (((safe_mod_func_uint32_t_u_u((~(g_198 = g_561[0])), 0x37A8E780L)) && ((l_823[0] , func_68(((safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(0x4F6FL, l_752)), p_33.f4)) , (void*)0), &l_598)) == &l_752)) , g_95)) & 1L), p_33.f2))))) != p_33.f4), 0xB1L))))), 7)) >= l_830[8][0]), p_33.f3));
                    g_835--;
                    for (g_57 = 0; (g_57 <= 4); g_57 += 1)
                    {
                        uint32_t l_838 = 0xF8D07C01L;
                        (*l_593) = (l_752 >= 1L);
                        if (p_33.f2)
                            break;
                        (*l_588) ^= l_838;
                        if (l_838)
                            continue;
                    }
                }
                else
                {
                    union U0 *l_848[3];
                    int32_t l_863 = 0x613CEA3EL;
                    int32_t *l_876 = &g_52;
                    const uint16_t **l_878 = (void*)0;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_848[i] = &l_743;
                    if (((*l_591) = (((*l_593) &= (l_841 != (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((l_832 == ((l_848[0] = &l_743) != (((3UL <= (safe_add_func_int16_t_s_s((l_851 == (void*)0), (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(((***g_809) > (***g_809)), (*l_583))) & g_212), (-5L)))))) , 0xA8L) , &l_743))) & 0UL), 1)), 11)))) >= 1UL)))
                    {
                        (*l_584) &= 0L;
                    }
                    else
                    {
                        l_856[2] = func_68(&g_3[4], &g_52);
                    }
                    (*l_583) = (1L && (p_33.f0 & ((safe_sub_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u((0xFDA726F9B294A877LL ^ (safe_mod_func_uint64_t_u_u(((g_547 ^= l_863) & ((g_553[5][3][0]--) , ((*l_583) , (*l_583)))), (p_33 , (safe_mod_func_uint32_t_u_u((~(safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(1L, ((safe_unary_minus_func_int8_t_s((((***g_809) & l_752) & 0xF93F205AL))) > (*l_583)))), 0xCFL))), p_33.f4)))))), 2UL)) | p_33.f3) != g_552) < 65535UL), (*l_583))) && (**g_810))));
                    for (g_12.f1 = 8; (g_12.f1 >= 0); g_12.f1 -= 1)
                    {
                        int32_t * const l_874 = &l_832;
                        int32_t **l_875[8] = {(void*)0,&l_764,&l_764,(void*)0,&l_764,&l_764,(void*)0,&l_764};
                        int i;
                        (*l_590) &= (-1L);
                        l_876 = func_68(l_874, (l_596[0] = func_68(&l_833, (p_33 , &g_3[2]))));
                        l_878 = l_877;
                        return l_879;
                    }
                }
                l_881 = (l_880 , (g_198 >= g_343));
                for (p_32 = 1; (p_32 <= 8); p_32 += 1)
                {
                    union U1 l_901 = {0x25DEL};
                    const int16_t *l_902 = &l_901.f3;
                    for (g_12.f3 = 4; (g_12.f3 >= 0); g_12.f3 -= 1)
                    {
                        uint32_t l_900 = 0x83910BB9L;
                        const int16_t **l_903 = &l_902;
                        (*l_585) |= l_618;
                        (*l_588) = (((safe_add_func_uint64_t_u_u(((g_793[0].f2 <= (((safe_rshift_func_int8_t_s_u(((p_33.f3 && ((*l_593) = (((l_888[0][0] != (l_891 = l_889)) <= (safe_lshift_func_int8_t_s_s(((!(safe_mul_func_int16_t_s_s(p_33.f0, (safe_unary_minus_func_uint32_t_u((l_900 & (l_901 , (((*l_903) = l_902) != (g_906 = (((safe_mul_func_uint16_t_u_u((251UL ^ 0UL), (**l_889))) , 0xE6997345L) , (void*)0)))))))))) , 0xEAL), p_33.f0))) != (*g_454)))) < (-1L)), g_213)) || (*g_454)) == l_901.f0)) , (*l_585)), p_33.f4)) & l_901.f2) == p_33.f4);
                    }
                    if (g_12.f0)
                        goto lbl_907;
                }
            }
            else
            {
                int32_t *l_908 = (void*)0;
                l_908 = (void*)0;
            }
        }
        if (((((((*l_583) = 3UL) == ((l_910 != (void*)0) | ((*g_243) >= (safe_add_func_int32_t_s_s((((g_12.f4 || (((((**g_810) = (+(safe_mod_func_uint64_t_u_u(g_209, ((*l_922) = ((safe_rshift_func_uint16_t_u_u((((*l_590) = ((0xAFL ^ ((safe_rshift_func_uint16_t_u_s((g_198 |= (0xA8F6C36A5453A2ACLL < (safe_sub_func_int64_t_s_s(((0xC8L | 0UL) , (*g_169)), p_33.f2)))), 9)) < 0x8F2207BC864DCAA0LL)) , 0xB64D0949L)) != p_33.f2), (**l_889))) & (*g_243))))))) & (-1L)) , (*l_586)) | 1L)) > p_33.f3) <= 0x53L), p_33.f2))))) == 0x090BL) || p_33.f3) ^ (*g_454)))
        {
            const int16_t **l_931 = &g_906;
            uint8_t *l_932 = &g_122;
            int32_t *l_935 = &g_84;
            int32_t **l_957 = &l_596[0];
            int32_t ***l_956 = &l_957;
            uint8_t l_964 = 248UL;
            int32_t l_967 = 0x8C107FDAL;
            int32_t l_974 = 0x7C18E6A5L;
            int32_t l_975[1];
            int i;
            for (i = 0; i < 1; i++)
                l_975[i] = 5L;
            if (((*l_587) |= (((*l_932) |= (((&g_100 == (void*)0) , ((safe_rshift_func_int8_t_s_s(p_33.f3, 3)) ^ g_170)) & (g_12.f4 | ((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((void*)0 == l_758), (safe_mul_func_int8_t_s_s((((*l_931) = (void*)0) != (void*)0), (*l_890))))), g_793[0].f2)) , 1UL)))) <= l_933)))
            {
                int32_t *l_934 = &g_52;
                int16_t **l_945 = &g_811[1][5][0];
                union U0 l_952 = {0xA424992EL};
                int32_t **l_955 = &l_586;
                int32_t ** const *l_954[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_954[i] = &l_955;
                l_935 = l_934;
                (*l_764) ^= (safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((-1L), ((safe_mod_func_uint8_t_u_u((!((safe_rshift_func_int8_t_s_s(((*l_564) |= ((((void*)0 == l_945) , &g_389) != ((*g_390) , &g_389))), 6)) | (**l_889))), g_343)) , l_951))) , 0x9C11L), 0x8D88L));
                (*g_243) = ((((((l_952 , p_33.f2) || (((((*g_390) , ((l_953 , l_954[0]) == &l_696[7][4])) , &l_696[1][7]) != (g_958 = l_956)) < (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((p_33.f3 , g_121) | 0x7BL), p_33.f0)), l_964)))) ^ (*l_584)) && (*l_890)) & p_33.f0) || 2UL);
            }
            else
            {
                for (l_953.f4 = 0; (l_953.f4 != (-8)); l_953.f4 = safe_sub_func_int8_t_s_s(l_953.f4, 4))
                {
                    int32_t l_968 = (-1L);
                    int32_t ** const **l_973 = &g_110;
                    l_969--;
                    (*l_973) = l_972;
                }
            }
            --g_976;
            (*l_889) = (*l_889);
        }
        else
        {
            (***g_958) = ((*l_590) ^= (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s((p_33.f0 >= (-1L)))), (((0xF736595EF5BCDE72LL >= (safe_rshift_func_int16_t_s_s(((**g_810) = 0x2092L), 14))) == (safe_add_func_uint64_t_u_u(p_33.f0, ((*l_922) = p_33.f2)))) < ((*l_658) == (void*)0)))));
            return (*l_591);
        }
    }
    else
    {
        int32_t *l_986[10][3][8] = {{{(void*)0,&l_598,&l_595,(void*)0,&l_598,&l_597,&l_598,&g_3[5]},{&g_84,&g_3[4],&l_598,(void*)0,&g_3[2],&l_582,(void*)0,&l_582},{&l_595,&l_598,&g_52,&l_582,&l_582,&l_595,&g_3[3],&g_52}},{{&l_595,&g_3[3],&g_84,&g_3[2],&g_84,&g_3[3],&l_595,&g_3[1]},{&l_598,&g_84,&l_598,&l_582,&l_598,&g_3[2],&l_582,&g_3[2]},{&l_595,&l_597,&l_597,&l_597,&l_598,&l_598,&l_597,&g_3[2]}},{{&l_598,&l_598,&g_3[4],&g_3[2],&g_84,&l_598,&g_84,&g_52},{&l_595,&l_598,(void*)0,&l_597,&l_582,&l_597,&g_84,&l_597},{&l_595,&g_3[2],&g_3[2],&l_595,&g_3[2],(void*)0,(void*)0,&l_595}},{{&g_84,&g_3[2],&l_582,&g_3[4],&l_598,&l_582,(void*)0,&g_3[3]},{(void*)0,&l_595,&g_3[2],&l_597,&l_597,&l_598,&l_582,&g_3[2]},{&l_597,&g_84,(void*)0,&g_3[0],&g_3[1],(void*)0,&l_582,&l_582}},{{&g_3[2],&l_582,&l_595,&g_3[3],&g_3[3],&l_595,&l_598,&g_52},{&g_3[2],&l_597,&g_3[2],&l_595,(void*)0,&l_582,&g_84,&l_597},{&l_582,&g_3[4],&l_595,(void*)0,&g_84,&l_598,&g_3[2],(void*)0}},{{&g_3[2],(void*)0,&g_3[2],(void*)0,&l_597,(void*)0,&l_597,&g_52},{&l_597,&g_84,&l_582,&g_84,&l_582,&l_598,&l_597,(void*)0},{&g_3[3],&l_595,&l_595,(void*)0,&g_84,&g_84,(void*)0,&l_597}},{{&g_3[1],&g_3[1],&g_52,&g_52,&l_598,&l_598,&g_3[3],&l_582},{(void*)0,(void*)0,&g_52,&l_595,&g_3[3],&l_597,&g_52,&l_582},{(void*)0,&g_84,&l_598,&g_52,&g_3[2],&g_3[4],&g_3[5],&l_597}},{{&g_84,(void*)0,&l_595,(void*)0,&l_598,(void*)0,&g_84,&l_597},{(void*)0,&g_52,(void*)0,&g_84,&g_84,&g_3[2],&l_582,&l_582},{&g_84,&l_598,&l_597,&l_595,&g_52,&l_582,&l_598,&l_598}},{{(void*)0,&l_597,&g_84,&g_3[2],&l_582,&g_3[2],&g_52,&g_84},{&g_84,(void*)0,&l_598,(void*)0,&l_595,(void*)0,&g_3[2],&g_52},{&g_3[2],&g_3[2],&g_84,&g_3[2],&g_52,&l_595,&l_597,&l_597}},{{&g_3[2],&g_84,&l_597,(void*)0,&g_3[3],&g_3[2],&g_52,(void*)0},{&l_598,&g_84,(void*)0,&l_598,&l_598,&l_595,&g_84,&g_3[2]},{&g_3[2],&g_52,&l_582,&l_595,(void*)0,&g_3[2],&l_598,&l_598}}};
        union U0 l_993 = {0x5575A6BEL};
        int32_t ** const l_1023 = &g_101;
        const uint16_t * const l_1041 = &g_198;
        uint32_t **l_1134[7][2][9] = {{{&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1],&l_580[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_580[1],(void*)0,(void*)0,&l_580[1],(void*)0,(void*)0,&l_580[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_580[1],(void*)0,(void*)0,&l_580[1],(void*)0,(void*)0,&l_580[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint16_t *l_1163[4] = {&g_553[2][1][0],&g_553[2][1][0],&g_553[2][1][0],&g_553[2][1][0]};
        int i, j, k;
lbl_1172:
        --g_988;
        for (l_713 = 5; (l_713 != 16); ++l_713)
        {
            int8_t l_1009[3][7][10] = {{{0L,(-1L),0x5EL,0x47L,0L,4L,0x6EL,0x4DL,(-1L),0x0CL},{1L,(-1L),0xEAL,0x66L,0xBAL,0xB3L,0x5EL,1L,0x0CL,0x81L},{(-8L),0x1AL,(-1L),0x63L,4L,0x91L,4L,1L,0xF1L,(-1L)},{0L,0x6EL,0xBFL,0x84L,0x07L,0L,0L,0L,0L,0L},{0x47L,6L,4L,4L,6L,0x47L,1L,0x22L,4L,0L},{0x0CL,0L,(-2L),0xDBL,0x42L,0L,0xB3L,(-1L),0L,(-1L)},{0x0CL,0x22L,6L,0L,(-1L),0x47L,(-1L),0L,0x1AL,1L}},{{0x47L,(-1L),0L,0x1AL,1L,0L,0x6EL,0L,0x9AL,(-2L)},{0L,0x5EL,0x81L,0x66L,(-1L),0x91L,0L,0L,0L,0x91L},{(-8L),0x4DL,1L,0x4DL,(-8L),0xB3L,0xDBL,1L,0x63L,1L},{1L,(-1L),0x42L,6L,0x07L,4L,0xBAL,0L,6L,1L},{0L,6L,0xB3L,0L,(-8L),0x1AL,(-1L),0x63L,4L,0x91L},{0x5EL,1L,0x0CL,0x81L,(-1L),0L,0L,(-1L),1L,(-2L)},{0L,0x63L,6L,4L,1L,0x22L,(-2L),(-2L),0x22L,1L}},{{0xF1L,0x9AL,0x9AL,0xF1L,(-1L),1L,0x6EL,0x47L,(-2L),(-1L)},{(-9L),0L,(-1L),(-1L),0x6EL,1L,4L,(-9L),0x84L,0xBAL},{0xB3L,(-1L),0L,(-1L),0xEAL,0xBFL,1L,0L,0x9AL,0L},{0xA2L,0x0AL,0L,0x81L,0x22L,0xEAL,0x6EL,0x9BL,0x5FL,1L},{(-2L),0xEAL,0xBAL,0x42L,0x81L,(-1L),(-1L),(-1L),0x81L,0x42L},{0x9EL,0xA2L,0x9EL,0xBAL,0L,0L,(-1L),4L,0xA2L,0L},{0x84L,(-1L),0xA2L,0xEAL,0x0AL,(-1L),0L,4L,0x0CL,0x5FL}}};
            uint16_t *l_1013[8][9] = {{&g_553[3][0][1],&g_198,&g_553[1][0][1],&g_553[1][0][1],&g_198,&g_553[3][0][1],&g_198,&g_553[1][0][1],&g_553[1][0][1]},{&g_553[2][3][0],&g_553[2][3][0],&g_95,&g_198,&g_95,&g_553[2][3][0],&g_553[2][3][0],&g_198,&g_553[2][3][0]},{&g_95,&g_198,&g_95,&g_553[3][0][1],&g_553[3][0][1],&g_95,&g_198,&g_95,&g_553[3][0][1]},{&g_198,&g_198,&g_95,&g_198,(void*)0,&g_198,&g_95,&g_198,&g_198},{&g_198,&g_553[3][0][1],&g_553[1][0][1],&g_553[3][0][1],&g_198,&g_198,&g_553[3][0][1],&g_553[1][0][1],&g_553[3][0][1]},{&g_95,&g_553[2][3][0],&g_553[2][3][0],&g_198,(void*)0,&g_198,(void*)0,&g_198,&g_553[2][3][0]},{&g_198,&g_198,&g_553[3][0][1],&g_553[1][0][1],&g_553[3][0][1],&g_198,&g_198,&g_553[3][0][1],&g_553[1][0][1]},{&g_198,&g_553[2][3][0],&g_198,&g_198,&g_95,&g_198,(void*)0,&g_198,&g_95}};
            int32_t l_1024 = 1L;
            union U0 ** const * const l_1075[3] = {(void*)0,(void*)0,(void*)0};
            union U0 ** const * const * const l_1074[7][2] = {{&l_1075[0],&l_1075[1]},{&l_1075[0],(void*)0},{(void*)0,(void*)0},{(void*)0,&l_1075[0]},{&l_1075[1],&l_1075[0]},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            union U0 ** const * const * const *l_1073[8][9][3] = {{{&l_1074[6][0],&l_1074[4][1],&l_1074[6][0]},{&l_1074[3][1],&l_1074[4][0],&l_1074[3][1]},{(void*)0,&l_1074[3][1],&l_1074[6][0]},{&l_1074[4][0],&l_1074[3][1],&l_1074[3][1]},{(void*)0,&l_1074[6][0],&l_1074[6][0]},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{&l_1074[6][0],&l_1074[4][1],&l_1074[6][0]},{&l_1074[3][1],&l_1074[4][0],&l_1074[3][1]},{(void*)0,&l_1074[3][1],&l_1074[6][0]}},{{&l_1074[4][0],&l_1074[3][1],&l_1074[3][1]},{(void*)0,&l_1074[6][0],&l_1074[6][0]},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{&l_1074[6][0],&l_1074[4][1],&l_1074[6][0]},{&l_1074[3][1],&l_1074[4][0],&l_1074[3][1]},{(void*)0,&l_1074[3][1],(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{&l_1074[3][1],(void*)0,(void*)0},{&l_1074[4][1],&l_1074[4][1],&l_1074[3][1]}},{{&l_1074[1][1],(void*)0,(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{(void*)0,&l_1074[3][1],(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{&l_1074[3][1],(void*)0,(void*)0},{&l_1074[4][1],&l_1074[4][1],&l_1074[3][1]},{&l_1074[1][1],(void*)0,(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{(void*)0,&l_1074[3][1],(void*)0}},{{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{&l_1074[3][1],(void*)0,(void*)0},{&l_1074[4][1],&l_1074[4][1],&l_1074[3][1]},{&l_1074[1][1],(void*)0,(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{(void*)0,&l_1074[3][1],(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{&l_1074[3][1],(void*)0,(void*)0},{&l_1074[4][1],&l_1074[4][1],&l_1074[3][1]}},{{&l_1074[1][1],(void*)0,(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{(void*)0,&l_1074[3][1],(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{&l_1074[3][1],(void*)0,(void*)0},{&l_1074[4][1],&l_1074[4][1],&l_1074[3][1]},{&l_1074[1][1],(void*)0,(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{(void*)0,&l_1074[3][1],(void*)0}},{{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{&l_1074[3][1],(void*)0,(void*)0},{&l_1074[4][1],&l_1074[4][1],&l_1074[3][1]},{&l_1074[1][1],(void*)0,(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{(void*)0,&l_1074[3][1],(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{&l_1074[3][1],(void*)0,(void*)0},{&l_1074[4][1],&l_1074[4][1],&l_1074[3][1]}},{{&l_1074[1][1],(void*)0,(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{(void*)0,&l_1074[3][1],(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{&l_1074[3][1],(void*)0,(void*)0},{&l_1074[4][1],&l_1074[4][1],&l_1074[3][1]},{&l_1074[1][1],(void*)0,(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{(void*)0,&l_1074[3][1],(void*)0}},{{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{&l_1074[3][1],(void*)0,(void*)0},{&l_1074[4][1],&l_1074[4][1],&l_1074[3][1]},{&l_1074[1][1],(void*)0,(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{(void*)0,&l_1074[3][1],(void*)0},{&l_1074[3][1],&l_1074[3][1],&l_1074[3][1]},{&l_1074[3][1],(void*)0,(void*)0},{&l_1074[4][1],&l_1074[4][1],&l_1074[3][1]}}};
            uint32_t **l_1086[1][10] = {{(void*)0,&l_580[0],&l_580[1],&l_580[1],&l_580[0],(void*)0,&l_580[0],&l_580[1],&l_580[1],&l_580[0]}};
            union U1 ***l_1103 = &l_761;
            int32_t * const *l_1119[1][5] = {{&g_101,&g_101,&g_101,&g_101,&g_101}};
            int64_t l_1169 = 0L;
            int i, j, k;
            (*l_889) = (l_993 , func_68((*g_959), (*g_959)));
            if ((safe_add_func_uint32_t_u_u((g_548 , ((((safe_div_func_int64_t_s_s((((safe_sub_func_int64_t_s_s((safe_div_func_int64_t_s_s((((*g_390) , (void*)0) != (void*)0), (l_1006 ^= (((p_33.f4 , &g_454) != (void*)0) == ((((-6L) || (safe_lshift_func_int16_t_s_s(0L, (***g_809)))) != p_32) > 0UL))))), g_212)) >= 1UL) , p_33.f0), p_33.f4)) , &l_890) == (void*)0) < p_32)), (**l_889))))
            {
                const uint16_t l_1012 = 65535UL;
                union U0 l_1017 = {-1L};
                for (g_549 = 0; (g_549 <= 1); g_549 += 1)
                {
                    for (l_879 = 0; (l_879 <= 2); l_879 += 1)
                    {
                        int32_t l_1007 = 0x881C7EA1L;
                        int i;
                        l_1007 ^= (3UL < (l_580[g_549] != &l_713));
                    }
                    for (g_12.f0 = 0; (g_12.f0 <= 8); g_12.f0 += 1)
                    {
                        l_1008 = (*g_389);
                        return l_1009[1][6][5];
                    }
                }
                (*l_583) |= ((((((((*g_959) != (void*)0) == (safe_div_func_int8_t_s_s(l_1012, p_33.f4))) <= (l_1013[5][3] != (p_33.f0 , l_1013[1][1]))) , ((safe_mul_func_int8_t_s_s(0x86L, ((l_1017 = g_1016) , 1UL))) == g_793[0].f3)) ^ (-9L)) | p_32) <= g_987);
            }
            else
            {
                union U0 l_1042 = {-1L};
                int32_t l_1046 = 0x35D28405L;
                if ((safe_mod_func_uint8_t_u_u((~(-9L)), (safe_rshift_func_int16_t_s_u((l_1024 = ((***g_809) &= (l_1023 != (void*)0))), 5)))))
                {
                    (*l_889) = (void*)0;
                }
                else
                {
                    uint32_t l_1025 = 9UL;
                    int32_t l_1044 = 0xD04C8643L;
                    int32_t l_1045 = (-8L);
                    int32_t l_1047 = (-1L);
                    ++l_1025;
                    for (g_84 = 0; (g_84 >= (-15)); g_84--)
                    {
                        union U1 l_1038[5] = {{8L},{8L},{8L},{8L},{8L}};
                        int64_t *l_1043 = &g_644[2];
                        int32_t l_1048 = 0x84AC232FL;
                        int32_t l_1049 = 8L;
                        int i;
                        (*l_583) = (((+0x37L) | ((*l_1043) = (p_33.f3 <= (0x7AL | (((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((((&p_33 != (void*)0) >= (safe_unary_minus_func_int32_t_s(((l_1039 = (l_1038[4] , &g_198)) != l_1041)))) >= (l_1042 , (*g_243))), p_33.f2)), 1)), 4)) != p_32) , p_33.f3))))) < (***g_809));
                        --g_1052;
                        l_1049 = p_32;
                    }
                    (*l_583) &= 0x63E9CB05L;
                    for (l_1044 = 0; (l_1044 <= 27); ++l_1044)
                    {
                        int16_t *l_1061[7][4][4] = {{{&g_12.f0,&g_793[0].f4,&l_953.f3,&l_953.f3},{(void*)0,&g_793[0].f4,&g_12.f0,(void*)0},{&g_793[0].f4,(void*)0,&g_12.f0,&g_12.f0},{&g_12.f0,&l_953.f0,&g_12.f0,&l_953.f3}},{{(void*)0,&g_12.f0,&g_499,(void*)0},{&l_953.f0,&g_12.f0,&l_953.f3,&g_12.f0},{&g_793[0].f4,(void*)0,&l_953.f3,(void*)0},{&l_953.f0,&g_793[0].f4,&g_499,(void*)0}},{{(void*)0,&g_12.f0,&g_12.f0,(void*)0},{&g_12.f0,(void*)0,&g_12.f0,&g_793[0].f4},{&g_793[0].f4,&l_953.f0,&g_12.f0,(void*)0},{(void*)0,&g_793[0].f4,&l_953.f3,(void*)0}},{{&g_12.f0,&l_953.f0,&l_953.f3,&g_793[0].f4},{&g_12.f0,(void*)0,(void*)0,(void*)0},{&l_953.f0,&g_12.f0,&l_953.f3,(void*)0},{(void*)0,&g_793[0].f4,&g_12.f0,(void*)0}},{{&g_793[0].f4,(void*)0,&l_953.f3,&g_12.f0},{&g_793[0].f4,&g_12.f0,&g_12.f0,(void*)0},{(void*)0,&g_12.f0,&l_953.f3,&l_953.f3},{&l_953.f0,&l_953.f0,(void*)0,&g_12.f0}},{{&g_12.f0,(void*)0,&l_953.f3,(void*)0},{&g_12.f0,&g_793[0].f4,&l_953.f3,&l_953.f3},{(void*)0,&g_793[0].f4,&g_12.f0,(void*)0},{&g_793[0].f4,(void*)0,&g_12.f0,&g_12.f0}},{{&g_12.f0,&l_953.f0,&g_12.f0,&l_953.f3},{(void*)0,&g_12.f0,&g_499,(void*)0},{&l_953.f0,&g_12.f0,&l_953.f3,&g_12.f0},{&g_793[0].f4,(void*)0,&l_953.f3,(void*)0}}};
                        int32_t **l_1062 = &l_986[9][1][1];
                        int i, j, k;
                        (**g_959) ^= (g_561[0] , (p_32 , (safe_add_func_int32_t_s_s((g_12.f0 > (l_1024 = ((void*)0 == &g_810))), ((l_1062 == &l_890) >= 0x22A8FCA16C589F14LL)))));
                    }
                }
            }
            for (g_268 = 0; (g_268 == 17); g_268 = safe_add_func_uint32_t_u_u(g_268, 5))
            {
                uint64_t l_1088 = 0xA0CE339CD8AD3F99LL;
                int32_t *l_1116[2][3][3] = {{{&l_582,(void*)0,&g_84},{&l_595,&l_1024,&l_1024},{&l_582,&l_582,&l_1024}},{{&l_1024,&l_595,&g_84},{(void*)0,&l_582,(void*)0},{(void*)0,&l_1024,&l_582}}};
                uint32_t l_1121 = 0x990BF20EL;
                uint32_t l_1133[10][1] = {{1UL},{0UL},{1UL},{0UL},{1UL},{0UL},{1UL},{0UL},{1UL},{0UL}};
                union U0 *l_1144 = &g_1016;
                int32_t *l_1171 = &l_598;
                int i, j, k;
                for (g_1050 = 1; (g_1050 <= 5); g_1050 += 1)
                {
                    int16_t l_1077 = 3L;
                    union U0 *l_1128 = (void*)0;
                    uint32_t ***l_1135 = &l_1086[0][0];
                    int64_t *l_1140 = &g_644[5];
                    union U1 ****l_1141 = &l_1103;
                    int32_t l_1149 = (-1L);
                    int i;
                }
            }
            return p_33.f0;
        }
        if (l_713)
            goto lbl_1172;
    }
    return p_33.f3;
}







static const uint16_t func_40(const union U1 p_41)
{
    union U0 * const l_560 = &g_141;
    union U0 * const *l_559 = &l_560;
    union U0 * const **l_558 = &l_559;
    for (g_102 = 0; (g_102 == 5); g_102++)
    {
        (*g_243) = (l_558 != (void*)0);
        if (p_41.f4)
            break;
    }
    return p_41.f2;
}







static union U1 func_42(int64_t p_43, int32_t p_44, int64_t p_45)
{
    int8_t l_54 = (-8L);
    int32_t *l_55 = &g_52;
    int32_t *l_56[6];
    union U1 l_138 = {0x377CL};
    int32_t l_144 = (-2L);
    union U0 *l_219[8];
    union U0 **l_218 = &l_219[3];
    uint32_t l_222[6];
    uint64_t l_280[8] = {0UL,0xF7C02C53580D671FLL,0xF7C02C53580D671FLL,0UL,0xF7C02C53580D671FLL,0xF7C02C53580D671FLL,0UL,0xF7C02C53580D671FLL};
    const uint64_t *l_292 = (void*)0;
    int8_t l_301 = 6L;
    uint16_t l_303 = 6UL;
    uint32_t l_318 = 0xB209ACC2L;
    int32_t l_342 = 0x0F2169EFL;
    int64_t l_370 = 0x7063272226A998CCLL;
    int32_t *l_380 = &g_3[2];
    uint16_t l_417 = 0xC62DL;
    int32_t **l_437 = &g_101;
    int16_t l_465[10] = {0xBEC4L,0xBEC4L,0xB543L,0xBEC4L,0xBEC4L,0xB543L,0xBEC4L,0xBEC4L,0xB543L,0xBEC4L};
    int16_t l_546 = 8L;
    int i;
    for (i = 0; i < 6; i++)
        l_56[i] = &g_52;
    for (i = 0; i < 8; i++)
        l_219[i] = &g_141;
    for (i = 0; i < 6; i++)
        l_222[i] = 0x22A015E9L;
lbl_205:
    for (p_44 = 0; (p_44 >= (-9)); p_44 = safe_sub_func_uint32_t_u_u(p_44, 1))
    {
        uint32_t l_50[4][6] = {{1UL,0xC0C7FD57L,1UL,0UL,0UL,1UL},{0x9D707D8EL,0x9D707D8EL,0UL,0xDCC3592EL,0UL,0x9D707D8EL},{0UL,0xC0C7FD57L,0xDCC3592EL,0xDCC3592EL,0xC0C7FD57L,0UL},{0x9D707D8EL,0UL,0xDCC3592EL,0UL,0x9D707D8EL,0x9D707D8EL}};
        int i, j;
        for (g_12.f1 = 3; (g_12.f1 >= 0); g_12.f1 -= 1)
        {
            int32_t *l_51 = &g_52;
            union U1 l_53 = {1L};
            int i, j;
            if (l_50[g_12.f1][g_12.f1])
                break;
            (*l_51) |= g_3[2];
            return l_53;
        }
        return g_12;
    }
lbl_217:
    g_57--;
    for (g_52 = 0; (g_52 > (-23)); g_52 = safe_sub_func_uint64_t_u_u(g_52, 1))
    {
        int32_t *l_75 = &g_52;
        const int32_t *l_115 = (void*)0;
        const int32_t **l_114 = &l_115;
        const int32_t ***l_113[4][3] = {{&l_114,(void*)0,&l_114},{&l_114,&l_114,&l_114},{&l_114,(void*)0,&l_114},{&l_114,&l_114,&l_114}};
        int32_t l_117 = (-8L);
        int32_t l_120 = (-1L);
        union U1 l_134 = {0L};
        union U0 *l_145 = &g_141;
        union U0 **l_221[10][9] = {{&l_219[3],(void*)0,&l_219[2],&l_145,&l_219[2],(void*)0,&l_219[3],(void*)0,&l_219[2]},{&l_219[3],&l_219[3],&l_219[3],&l_219[3],(void*)0,&l_219[3],&l_145,(void*)0,(void*)0},{(void*)0,(void*)0,&l_145,&l_145,&l_145,(void*)0,(void*)0,(void*)0,&l_145},{&l_219[3],(void*)0,&l_219[3],&l_145,(void*)0,(void*)0,&l_145,&l_219[3],(void*)0},{&l_219[3],(void*)0,&l_219[2],&l_145,&l_219[2],(void*)0,&l_219[3],(void*)0,&l_219[2]},{&l_219[3],&l_219[3],&l_219[3],&l_219[3],(void*)0,&l_219[3],&l_145,(void*)0,(void*)0},{(void*)0,(void*)0,&l_145,&l_145,&l_145,(void*)0,(void*)0,(void*)0,&l_145},{&l_219[3],(void*)0,&l_219[3],&l_145,(void*)0,(void*)0,&l_145,&l_219[3],(void*)0},{&l_219[3],(void*)0,&l_219[2],&l_145,&l_219[2],(void*)0,&l_219[3],(void*)0,&l_219[2]},{&l_219[3],&l_219[3],&l_219[3],&l_219[3],(void*)0,&l_219[3],&l_145,(void*)0,(void*)0}};
        int8_t *l_363 = &g_353[9][6][0];
        union U1 *l_365 = (void*)0;
        union U1 **l_364 = &l_365;
        int32_t l_371 = 0x7BE2347FL;
        uint16_t l_374 = 0xCD65L;
        uint32_t l_484[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        uint32_t l_500 = 0x59539614L;
        int i, j;
        p_44 = func_62(((l_56[0] != l_56[0]) , p_43), &g_3[2], g_12, ((!(-1L)) , func_68(((safe_mul_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(p_43, ((((g_12.f0 , &g_3[2]) == l_75) , l_75) != &g_3[2]))) , g_12.f3), 0L)) , (void*)0), l_56[0])));
        for (g_12.f1 = 5; (g_12.f1 >= 1); g_12.f1 -= 1)
        {
            int32_t **l_132 = &g_101;
            union U0 *l_140[5][4] = {{&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141}};
            union U0 ** const l_139 = &l_140[4][3];
            int32_t * const *l_154[8] = {&l_55,&l_55,&l_55,&l_55,&l_55,&l_55,&l_55,&l_55};
            int32_t * const **l_153 = &l_154[5];
            uint8_t *l_155 = (void*)0;
            uint8_t *l_156 = &g_122;
            int64_t *l_157 = &g_135;
            int i, j;
            if ((*l_75))
            {
                g_116[2] = l_113[2][2];
            }
            else
            {
                int32_t l_118 = 0xCDCAC19DL;
                int32_t l_119 = (-5L);
                int i;
                g_122++;
                if (g_125[0][3])
                    continue;
                g_84 = ((*l_55) , p_45);
            }
            for (g_95 = (-19); (g_95 < 17); ++g_95)
            {
                g_84 |= p_44;
            }
            for (g_121 = 0; (g_121 <= 4); g_121 = safe_add_func_int8_t_s_s(g_121, 4))
            {
                int32_t *l_133 = &l_120;
                const union U0 *l_143 = &g_141;
                const union U0 **l_142 = &l_143;
                for (g_84 = 0; (g_84 <= 2); g_84 += 1)
                {
                    for (l_117 = 2; (l_117 >= 0); l_117 -= 1)
                    {
                        int32_t **l_130[5][5];
                        int32_t ***l_131[7];
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_130[i][j] = &g_101;
                        }
                        for (i = 0; i < 7; i++)
                            l_131[i] = (void*)0;
                        l_132 = l_130[2][4];
                        (*l_114) = &p_44;
                        p_44 |= p_43;
                        l_133 = (void*)0;
                    }
                    return l_134;
                }
                if (p_44)
                    break;
                if (g_135)
                {
                    int32_t **l_136[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t **l_137 = &l_75;
                    int i;
                    (*l_137) = func_68(((*l_137) = &g_3[2]), func_68(&p_44, &g_3[2]));
                    if (p_44)
                        continue;
                }
                else
                {
                    (*l_133) &= (((l_138 , l_139) == l_142) | (p_45 , (p_45 ^ ((p_44 || (p_45 && (1L != (*l_55)))) || 0x2896A24DL))));
                }
                if (l_144)
                    continue;
            }
            if (((l_145 == (*l_139)) & ((~p_45) && ((*l_157) = (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((g_141.f0 >= (0x85BE0904L <= g_12.f4)), (safe_rshift_func_int8_t_s_u((*l_55), ((*l_156) = ((void*)0 == l_153)))))), p_43))))))
            {
                int32_t l_158[1][5];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_158[i][j] = 0x393FB47EL;
                }
                --g_159;
                for (l_138.f4 = (-22); (l_138.f4 > (-23)); l_138.f4 = safe_sub_func_uint32_t_u_u(l_138.f4, 1))
                {
                    int32_t l_188 = 0xC78DC006L;
                    for (p_44 = (-7); (p_44 <= (-27)); p_44 = safe_sub_func_uint32_t_u_u(p_44, 7))
                    {
                        uint8_t l_166 = 0UL;
                        union U0 l_180 = {0xA5491B97L};
                        union U0 **l_181 = &l_145;
                        int16_t *l_184 = (void*)0;
                        int16_t *l_185 = &l_134.f4;
                        uint16_t *l_186 = &g_95;
                        l_166--;
                        g_141.f0 = (g_52 > ((g_169 = &g_135) == (g_187[2] = ((((g_121 && (safe_sub_func_uint64_t_u_u(p_43, (((safe_div_func_uint32_t_u_u((((*l_186) = (~((*l_185) = ((safe_add_func_uint8_t_u_u((g_122 = (safe_rshift_func_int8_t_s_s((l_180 , g_12.f4), 3))), ((((*l_139) = (*l_139)) != ((*l_181) = (void*)0)) == (safe_lshift_func_uint16_t_u_u((p_44 != g_3[2]), 12))))) & g_95)))) || l_158[0][0]), p_45)) ^ 0x34033A2AL) <= g_3[3])))) != g_12.f2) != 0xCE77D404L) , &g_121))));
                        if ((*l_55))
                            continue;
                    }
                    if (l_188)
                        continue;
                    g_141.f0 &= (*l_75);
                }
                for (l_138.f4 = 27; (l_138.f4 > 10); l_138.f4--)
                {
                    uint16_t *l_193 = &g_95;
                    int32_t l_204 = 1L;
                }
                if (p_43)
                    break;
            }
            else
            {
                union U0 ***l_220[10] = {&l_218,&l_218,&l_218,&l_218,&l_218,&l_218,&l_218,&l_218,&l_218,&l_218};
                int i;
                if (l_138.f0)
                    goto lbl_217;
                l_221[7][7] = l_218;
            }
        }
        if (l_222[1])
        {
            int64_t l_223 = 0x77E71CC039EE50CDLL;
            int32_t l_224 = 0L;
            uint16_t *l_239[10] = {&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95};
            union U0 *l_241 = (void*)0;
            int16_t *l_242 = &l_138.f3;
            int i;
            if (l_120)
                goto lbl_217;
            ++g_226;
            (*l_114) = func_68(&l_224, (((safe_add_func_uint64_t_u_u((((*l_242) ^= (safe_rshift_func_int16_t_s_u(((0x1C95L & (*l_55)) | (((p_43 , ((safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((((g_198 = (safe_lshift_func_uint8_t_u_s(g_125[3][6], 2))) <= 1UL) , g_240) == &l_219[3]), (l_241 != (*l_218)))) >= (*g_169)), g_12.f0)) >= (-1L))) < 0UL) < 0L)), 7))) , 0x6506466B9169658BLL), 0UL)) >= 9L) , g_243));
            for (g_84 = (-22); (g_84 >= 13); g_84 = safe_add_func_uint32_t_u_u(g_84, 5))
            {
                int64_t *l_246 = &g_121;
                int32_t l_247 = (-1L);
                union U0 l_253 = {1L};
                uint8_t *l_254 = &g_159;
                uint8_t *l_255 = &g_122;
                uint8_t *l_258[5][3] = {{&g_259,&g_259,&g_259},{&g_259,&g_259,&g_259},{&g_259,&g_259,&g_259},{&g_259,&g_259,&g_259},{&g_259,&g_259,&g_259}};
                int32_t l_260 = 0xC0795148L;
                int16_t *l_261 = &l_134.f3;
                int32_t l_262 = 0xF03833B4L;
                int8_t *l_267 = (void*)0;
                int8_t *l_269 = &l_54;
                union U1 l_285 = {-5L};
                int i, j;
                l_262 ^= (p_44 = ((0xB596F503D3159323LL && ((*l_246) = 5L)) , ((l_247 , g_141.f0) < ((+(safe_add_func_uint8_t_u_u(((*l_255) &= ((*l_254) = (safe_lshift_func_uint8_t_u_u(((*l_55) == g_12.f0), (l_253 , 3UL))))), ((safe_mul_func_int16_t_s_s(((*l_261) ^= ((*l_242) = ((l_260 = (g_3[3] , 0xBDL)) ^ 0xC8L))), 0x7F85L)) < p_43)))) ^ p_44))));
                p_44 ^= p_43;
                l_253.f0 = ((l_224 = (((0x0F176138E7733B7CLL | 18446744073709551612UL) <= (**l_114)) , (!(((*l_269) = (g_268 = (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s(g_12.f0)), 14)))) < (g_57 != ((1L & ((safe_mod_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u((g_84 == (0xD4075E5BE3678092LL || g_213)), g_95)) || p_45), l_223)) != l_223)) | g_95)))))) <= 0x1D22L);
                for (l_134.f3 = 0; (l_134.f3 > 1); l_134.f3 = safe_add_func_int64_t_s_s(l_134.f3, 1))
                {
                    uint64_t *l_281 = &g_213;
                    l_280[4] = (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_3[2], 14)), g_57));
                    if (((*g_169) <= ((*l_281) = g_125[0][3])))
                    {
                        union U1 *l_282[10] = {&l_134,&l_134,&l_134,&l_134,&l_134,&l_134,&l_134,&l_134,&l_134,&l_134};
                        union U1 **l_283 = &l_282[3];
                        const int32_t *l_284 = &l_260;
                        int i;
                        (*l_283) = l_282[3];
                        (*l_114) = l_284;
                        return l_285;
                    }
                    else
                    {
                        int32_t l_286 = 0xC719AC70L;
                        (*l_114) = &l_224;
                        g_141.f0 |= (p_45 | 0xB88169B939C0F995LL);
                        if (l_286)
                            continue;
                    }
                }
            }
        }
        else
        {
            int32_t l_300 = 1L;
            int32_t *l_309 = &g_102;
            int32_t l_336[10][4] = {{0x017DD661L,(-1L),0x713F5139L,0x71A2D92CL},{0x95540A51L,0L,0x6F493AA1L,0x71A2D92CL},{0x713F5139L,0L,0x713F5139L,0xCEDEFB31L},{1L,0x1AFCBC47L,(-3L),1L},{0x6F493AA1L,0xCEDEFB31L,(-6L),0x1AFCBC47L},{0xCEDEFB31L,0L,(-6L),(-6L)},{0x6F493AA1L,0x6F493AA1L,(-3L),4L},{1L,0xA9B5F793L,0x713F5139L,0x1AFCBC47L},{0x713F5139L,0x1AFCBC47L,0xCEDEFB31L,0x713F5139L},{0x6F493AA1L,0x1AFCBC47L,(-1L),0x1AFCBC47L}};
            int8_t l_337 = 1L;
            union U1 **l_366 = (void*)0;
            int32_t ** const l_369[5][9] = {{&l_56[3],&l_56[4],&l_56[0],&l_55,&l_56[4],&l_56[0],&l_55,&l_56[0],&l_56[0]},{&l_75,&l_75,&l_56[0],&l_55,&l_56[0],&l_75,&l_75,&l_56[0],&l_56[0]},{(void*)0,&l_56[4],&g_243,&l_56[3],&l_56[0],&g_243,&l_55,&g_243,&l_56[0]},{(void*)0,&l_56[0],&l_56[0],(void*)0,&l_56[4],&g_243,&l_56[3],&l_56[0],&g_243},{&l_75,&l_56[0],&l_56[0],&l_56[3],&l_75,&l_75,&l_56[3],&l_56[0],&l_56[0]}};
            union U0 *** const l_397 = &l_221[7][7];
            int32_t l_450 = 0xF2398405L;
            int i, j;
            if ((p_44 = (((safe_mod_func_uint32_t_u_u(p_43, g_209)) & (((safe_rshift_func_uint8_t_u_u((g_198 > (safe_unary_minus_func_uint64_t_u(((l_120 |= ((l_292 != (void*)0) | (((~((0x41E0B0FEL ^ (&p_44 != l_56[2])) & (safe_mod_func_int16_t_s_s(((safe_add_func_int64_t_s_s(((&g_213 == &g_268) && g_3[5]), g_268)) < p_43), l_300)))) , g_125[0][3]) , g_3[3]))) , g_52)))), 0)) == 1UL) < (-10L))) ^ l_301)))
            {
                (*g_243) &= ((safe_unary_minus_func_uint16_t_u(p_45)) > (g_121 ^ g_122));
                if (l_303)
                    break;
                return l_134;
            }
            else
            {
                (*g_243) = (safe_mul_func_int16_t_s_s(0x17BBL, ((0x49BCL || 0x01B5L) != (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u(((**g_110) != l_309))), (safe_add_func_uint16_t_u_u((((void*)0 == &l_134) > p_45), 0x2C24L)))))));
            }
            if ((safe_rshift_func_int8_t_s_s(g_12.f1, 4)))
            {
                int16_t *l_331 = (void*)0;
                const int32_t l_334 = 0xD6AA5246L;
                uint64_t *l_335[5] = {&l_280[2],&l_280[2],&l_280[2],&l_280[2],&l_280[2]};
                uint8_t *l_338 = &g_259;
                union U0 **l_346 = &l_145;
                int32_t l_350 = 1L;
                int i;
                if (g_141.f0)
                    goto lbl_217;
                if ((p_44 & ((*l_338) = ((safe_sub_func_uint8_t_u_u((((g_95 | (((safe_mod_func_int64_t_s_s(((-8L) || l_318), (7L || (safe_sub_func_uint8_t_u_u((g_122 = (safe_sub_func_int64_t_s_s(((l_336[6][0] ^= (safe_mod_func_int64_t_s_s((safe_mod_func_int8_t_s_s((((safe_add_func_int8_t_s_s((l_300 != ((void*)0 == l_331)), (safe_add_func_uint32_t_u_u(l_334, 1L)))) || (*g_169)) & p_45), g_12.f4)), p_44))) >= 0xA62E1F7FC1752087LL), g_95))), l_337))))) < g_3[2]) && p_43)) != (*l_55)) >= p_44), p_43)) , p_45))))
                {
                    (*g_243) = 0L;
                }
                else
                {
                    int32_t *l_339[6][8][1] = {{{&g_3[2]},{&l_336[7][1]},{&g_52},{&l_336[7][1]},{&g_3[2]},{&l_336[7][1]},{&g_52},{&l_336[7][1]}},{{&g_3[2]},{&l_336[7][1]},{&g_52},{&l_336[7][1]},{&g_3[2]},{&l_336[7][1]},{&g_52},{&l_336[7][1]}},{{&g_3[2]},{&l_336[7][1]},{&g_52},{&l_336[7][1]},{&g_3[2]},{&l_336[7][1]},{&g_52},{&l_336[7][1]}},{{&g_3[2]},{&l_336[7][1]},{&g_52},{&l_336[7][1]},{&g_3[2]},{&l_336[7][1]},{&g_52},{&l_336[7][1]}},{{&g_3[2]},{&l_336[7][1]},{&g_52},{&l_336[7][1]},{&g_3[2]},{&l_336[7][1]},{&g_52},{&l_336[7][1]}},{{&g_3[2]},{&l_336[7][1]},{&g_52},{&l_336[7][1]},{&g_3[2]},{&l_336[7][1]},{&g_52},{&l_336[7][1]}}};
                    union U0 ***l_347 = (void*)0;
                    union U0 **l_348 = &l_219[3];
                    uint16_t *l_351 = &l_303;
                    int8_t *l_352[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_352[i] = &l_54;
                    (*g_243) = ((&l_334 == (l_339[5][6][0] = &g_3[0])) < ((safe_lshift_func_uint8_t_u_u(0x21L, 1)) == 0x271EL));
                    --g_343;
                    p_44 = ((((g_240 = &l_219[3]) == (l_348 = l_346)) < l_334) | ((g_3[2] & (safe_unary_minus_func_int32_t_s(((g_353[9][6][0] = ((((l_350 |= (g_213 < (&g_141 != (void*)0))) ^ (((*l_351) = 65535UL) <= p_44)) , p_44) & p_44)) , p_43)))) < 0x83L));
                    if (p_43)
                        continue;
                }
            }
            else
            {
                int64_t l_356 = 0L;
                int8_t l_357 = 0L;
                const union U0 *l_361 = &g_141;
                const union U0 **l_362 = &l_361;
                for (p_45 = 0; (p_45 > 9); p_45++)
                {
                    if (p_44)
                        break;
                    --g_358[3][2][2];
                    (*g_243) &= 0x0F0CD6CEL;
                }
                if (p_45)
                    break;
                (*l_362) = l_361;
            }
            if ((((l_363 != ((l_364 == l_366) , &g_353[9][6][0])) , ((safe_mod_func_int8_t_s_s(((((void*)0 != l_369[3][6]) <= ((((&l_342 == &p_44) && (*l_55)) && (-2L)) | g_122)) != 0L), l_370)) == p_44)) > p_45))
            {
                int16_t l_372 = 0xB4B8L;
                int32_t l_373[7] = {0x1F37000EL,0x1F37000EL,0L,0x1F37000EL,0x1F37000EL,0L,0x1F37000EL};
                union U0 *l_445[4] = {&g_141,&g_141,&g_141,&g_141};
                int32_t l_459 = 0x13648CB2L;
                uint32_t l_477 = 0xB81B06D7L;
                int32_t *l_502 = &l_336[6][0];
                int i;
                l_374++;
                if (p_43)
                {
                    union U1 **l_391 = (void*)0;
                    union U0 ***l_395 = (void*)0;
                    union U0 ****l_396 = &l_395;
                    int64_t *l_398 = &g_135;
                    for (l_342 = 0; (l_342 != 6); ++l_342)
                    {
                        int32_t * const l_379[10][7] = {{&l_117,&l_373[0],(void*)0,&g_3[2],&g_3[2],&l_373[5],(void*)0},{&l_371,(void*)0,&l_373[5],&g_3[2],&l_373[5],(void*)0,&l_371},{(void*)0,&l_373[5],&g_3[2],&g_3[2],(void*)0,&l_373[0],&l_117},{&g_3[2],&l_371,(void*)0,(void*)0,&l_371,&g_3[2],&l_120},{(void*)0,&l_342,&g_3[2],(void*)0,&l_342,(void*)0,(void*)0},{&l_336[6][0],&l_300,&l_373[5],&l_300,&l_336[6][0],&l_117,(void*)0},{&l_300,&l_342,(void*)0,&l_373[5],&g_3[2],(void*)0,&g_3[2]},{&g_3[2],&l_117,&l_117,&g_3[2],(void*)0,&l_117,&l_336[6][0]},{&g_3[2],&l_373[0],(void*)0,(void*)0,&g_3[0],&g_3[0],(void*)0},{(void*)0,&l_120,(void*)0,&l_117,&l_300,&l_371,&l_336[6][0]}};
                        int i, j;
                        (*l_114) = func_68(l_379[5][1], l_380);
                    }
                    (*g_243) = 0xA31BF185L;
                    (*g_243) = (((safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_u(0x967EL, 10)) < (g_389 == l_391)) ^ g_170) > p_45), ((+(((safe_rshift_func_uint16_t_u_s(g_353[9][6][0], ((((p_44 || g_12.f3) >= ((((*l_398) = ((((*l_396) = l_395) != l_397) | 0L)) >= 0x2857CCBF9E9B86C7LL) != p_43)) && p_44) == g_268))) <= (-10L)) < p_45)) || 0xB8CF01FED1F277D8LL))) > g_95) || p_45), 6L)), p_43)) >= 0x35L) && g_52);
                    for (l_370 = 3; (l_370 >= 0); l_370 -= 1)
                    {
                        union U1 l_399 = {0xEACAL};
                        return l_399;
                    }
                }
                else
                {
                    int64_t l_442[4][7][1] = {{{0x9AC98F05BC626A04LL},{(-1L)},{(-1L)},{(-1L)},{0x9AC98F05BC626A04LL},{0xE47D894342D37320LL},{0xE47D894342D37320LL}},{{0x9AC98F05BC626A04LL},{(-1L)},{(-1L)},{(-1L)},{0x9AC98F05BC626A04LL},{0xE47D894342D37320LL},{0xE47D894342D37320LL}},{{0x9AC98F05BC626A04LL},{(-1L)},{(-1L)},{(-1L)},{0x9AC98F05BC626A04LL},{0xE47D894342D37320LL},{0xE47D894342D37320LL}},{{0x9AC98F05BC626A04LL},{(-1L)},{(-1L)},{(-1L)},{0x9AC98F05BC626A04LL},{0xE47D894342D37320LL},{0xE47D894342D37320LL}}};
                    int32_t l_444 = 1L;
                    union U0 l_466 = {6L};
                    union U0 * const *l_469[10][8] = {{&l_145,&l_219[4],&l_445[3],(void*)0,&l_445[3],&l_219[4],&l_145,(void*)0},{&l_219[4],&l_219[3],(void*)0,&l_445[3],&l_445[2],(void*)0,(void*)0,&l_445[2]},{&l_219[7],&l_145,&l_145,&l_219[7],&l_445[2],&l_219[3],(void*)0,(void*)0},{&l_219[4],&l_445[2],&l_445[3],&l_445[2],&l_445[3],&l_445[2],&l_445[3],&l_445[2]},{&l_145,&l_445[2],(void*)0,&l_445[3],(void*)0,&l_219[3],&l_445[3],&l_445[3]},{(void*)0,&l_145,&l_219[3],&l_219[3],&l_145,(void*)0,&l_445[3],&l_445[3]},{(void*)0,&l_219[3],(void*)0,&l_219[3],&l_445[3],&l_219[4],&l_445[3],&l_219[3]},{&l_445[3],&l_219[4],&l_445[3],&l_219[3],(void*)0,&l_219[3],(void*)0,&l_445[3]},{&l_445[3],(void*)0,&l_145,&l_219[3],&l_219[3],&l_145,(void*)0,&l_445[3]},{&l_445[3],&l_219[3],(void*)0,&l_445[3],(void*)0,&l_445[2],&l_145,&l_445[2]}};
                    union U0 * const **l_468 = &l_469[6][2];
                    union U0 * const ***l_467 = &l_468;
                    int i, j, k;
                    if (p_43)
                        break;
                    for (g_226 = 1; (g_226 <= 7); g_226 += 1)
                    {
                        int64_t *l_402 = &g_121;
                        uint32_t *l_415 = &l_318;
                        uint16_t *l_416 = &l_303;
                        uint8_t *l_418 = &g_343;
                        uint32_t **l_443 = &l_415;
                        int i;
                        p_44 = ((safe_sub_func_uint32_t_u_u((((*l_218) = (*l_218)) == &g_141), (l_280[g_226] , ((((*l_418) |= (l_280[g_226] >= ((((*l_402) = p_43) > (p_45 = ((((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((g_135 , (safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((&g_125[0][3] == ((((safe_div_func_int32_t_s_s(2L, (safe_mul_func_uint8_t_u_u(((((*l_415) = 4UL) || 0L) > p_43), g_122)))) & (-1L)) , p_43) , &g_125[4][1])), 0x13EEEFE5L)), 0))) != 0x2BL) >= p_45) , l_280[g_226]), g_12.f3)), (-1L))) , &l_374) == l_416) ^ l_373[5]))) < l_417))) > g_159) == 0x029DL)))) < p_44);
                        (*g_243) ^= (p_44 != l_280[g_226]);
                        l_444 = ((((((*l_443) = func_68(&g_3[2], func_68((((safe_add_func_int64_t_s_s(((*l_402) &= (((*l_416)--) | ((((safe_add_func_int64_t_s_s(((((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((*l_363) = p_43), (safe_lshift_func_uint8_t_u_s(((*l_418) &= ((safe_mod_func_int32_t_s_s((p_44 = ((+1UL) , ((*g_243) = ((((l_138 , (((void*)0 != g_434) == (safe_lshift_func_int8_t_s_u((l_437 == (void*)0), 1)))) & (((safe_sub_func_int32_t_s_s(((((safe_rshift_func_int16_t_s_u((0xB8753A32646635DCLL != l_372), g_170)) > 5UL) >= l_442[1][3][0]) ^ 1UL), 6UL)) <= p_44) , 0x368AEAEAL)) || p_45) != (*l_75))))), l_442[1][3][0])) > g_12.f1)), 3)))), 0x3187L)) < p_45) | p_43) , (-1L)), g_95)) & 65535UL) && 0x1081L) & g_259))), p_43)) <= 1L) , &p_44), &l_117))) == &l_318) >= p_43) , &g_100) == (void*)0);
                    }
                    l_445[3] = &g_141;
                    if (((*g_243) = ((void*)0 != &l_138)))
                    {
                        int16_t *l_451 = &l_138.f4;
                        uint32_t *l_453 = &l_318;
                        uint32_t **l_452[1];
                        int32_t **l_456 = (void*)0;
                        int32_t **l_457 = &l_56[3];
                        union U0 l_462 = {0xAB0F51D3L};
                        union U0 * const ****l_470 = &l_467;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_452[i] = &l_453;
                        l_459 ^= (p_44 = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((p_45 & (l_450 , l_373[5])), ((*l_451) |= g_52))), ((g_454 = g_243) != (g_458 = func_68(func_68(((*l_457) = func_68(&g_52, &g_84)), &p_44), &g_3[4]))))));
                        (*g_243) = 1L;
                        (*g_243) = ((((*l_397) = &l_219[3]) == ((safe_add_func_int16_t_s_s((((*l_363) = ((l_462 , (safe_mul_func_int8_t_s_s((p_43 & 0x21B8291A4F8CA952LL), l_372))) , ((p_43 < ((((*l_470) = ((g_226 &= ((l_465[3] || (l_466 , (**l_457))) <= (**l_457))) , l_467)) != &l_397) <= 0x0C2BL)) ^ p_45))) != (*l_75)), 0xEE07L)) , (void*)0)) , 0xA703EDE6L);
                    }
                    else
                    {
                        uint16_t *l_498 = &g_95;
                        int32_t l_501[3][2][7];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 7; k++)
                                    l_501[i][j][k] = (-1L);
                            }
                        }
                        l_502 = func_68(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(l_459, (((safe_add_func_int16_t_s_s(l_477, (safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(((g_3[2] >= l_372) || ((((safe_add_func_uint8_t_u_u((l_484[2] < ((safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((g_499 = (((safe_div_func_uint16_t_u_u(((-1L) & ((((safe_mod_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((p_45 <= ((l_466.f0 = ((*l_363) ^= (((p_45 || ((*l_498) = ((safe_unary_minus_func_int8_t_s(g_3[0])) < g_125[0][3]))) < (*g_454)) == 0x0EB0496D7EAB7ACELL))) | 0x2BL)), (*g_169))), (*g_243))) , p_45) <= p_45) > p_45)), g_3[2])) && p_43) < 0x4ED6CF80F6ABB0ADLL)), 0)) <= (*l_380)) , p_44), 0x61L)) , p_45)), g_12.f4)) > g_12.f0) || 8UL) >= l_500)), 3UL)) ^ 0L), l_442[1][5][0])))) ^ l_501[0][1][1]) ^ p_43))), 5L)) , &p_44), &g_3[2]);
                        g_504--;
                        if (p_45)
                            break;
                    }
                }
                g_507++;
            }
            else
            {
                const union U0 l_517[8] = {{2L},{2L},{2L},{2L},{2L},{2L},{2L},{2L}};
                int32_t l_520[3];
                int8_t *l_532 = &l_54;
                uint16_t l_545 = 0xED7CL;
                int i;
                for (i = 0; i < 3; i++)
                    l_520[i] = 4L;
                for (l_371 = 0; (l_371 <= 0); l_371 += 1)
                {
                    uint32_t l_518[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_518[i] = 0x2A82DE67L;
                    for (g_122 = 0; (g_122 <= 0); g_122 += 1)
                    {
                        uint64_t *l_519[5] = {&l_280[6],&l_280[6],&l_280[6],&l_280[6],&l_280[6]};
                        union U1 l_523[8] = {{0x08BCL},{-2L},{-2L},{0x08BCL},{-2L},{-2L},{0x08BCL},{-2L}};
                        int32_t l_538 = 0L;
                        int i, j, k;
                        if (g_353[(l_371 + 5)][(g_122 + 1)][l_371])
                            break;
                        (*g_243) = (safe_mod_func_uint64_t_u_u((((+(0x63EB93BDL >= (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((((l_517[2] , 0x800DAFAC68343BF5LL) == (g_259 , ((l_520[1] = l_518[1]) , ((((safe_mod_func_uint8_t_u_u((l_523[2] , (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((l_520[1] &= ((*g_101) , (safe_add_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((((4294967289UL == p_43) >= 0x22B0D939E87FC26DLL) >= p_43), 0xDCF6FDD0L)), 0xC202DD89D61C1FCBLL)))) || g_499), p_45)), 14))), 2UL)) , g_353[(l_371 + 5)][(g_122 + 1)][l_371]) , l_532) != &g_353[(l_371 + 5)][(g_122 + 1)][l_371])))) ^ 0xA274L), g_209)), 0L)))) , p_45) == p_45), g_12.f3));
                        (*g_243) = ((*g_243) > (p_45 < (safe_div_func_uint8_t_u_u(((**g_389) , (0x9DC6L <= (0xACA8L >= (safe_div_func_int32_t_s_s((((l_538 = (g_141.f0 ^= (!g_3[2]))) < 0x09823C35L) < (safe_rshift_func_int8_t_s_u((g_353[(g_122 + 8)][(l_371 + 1)][l_371] ^= 0L), 3))), ((safe_div_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(((*l_75) | l_520[1]), 0L)), l_545)) , (*g_454))))))), p_44))));
                        if (g_52)
                            goto lbl_205;
                    }
                    return l_138;
                }
                g_549--;
                --g_553[2][3][0];
            }
        }
        return l_138;
    }
    return l_138;
}







static int32_t func_62(uint32_t p_63, int32_t * p_64, union U1 p_65, int32_t * p_66)
{
    int32_t ** const *l_109 = &g_100;
    union U0 *l_111 = (void*)0;
    union U0 **l_112 = &l_111;
    g_110 = l_109;
    (*l_112) = l_111;
    return (*p_64);
}







static int32_t * func_68(int32_t * const p_69, int32_t * p_70)
{
    uint16_t l_76 = 0x4ADCL;
    const union U1 l_80 = {0x1F9FL};
    int32_t l_81 = 0x1B53A2ADL;
    int32_t *l_82 = (void*)0;
    int32_t *l_83 = &g_84;
    int32_t *l_94 = (void*)0;
    union U0 l_99 = {0xE2D2C906L};
    int32_t **l_104 = &g_101;
lbl_96:
    l_76++;
    (*l_83) ^= ((l_76 ^ (0xCA0F9639L > (l_81 |= (!(g_3[2] < (l_80 , g_12.f0)))))) & 4L);
    if ((safe_div_func_uint8_t_u_u(1UL, (safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_uint32_t_u((g_57 <= (1L < (-1L))))) >= (&l_81 != ((g_95 = (safe_add_func_int32_t_s_s(g_3[1], (0x5DA298B2L >= 0x5B212F01L)))) , p_69))), 7)), (*l_83))))))
    {
        uint64_t l_97[3];
        int32_t l_98[2];
        int i;
        for (i = 0; i < 3; i++)
            l_97[i] = 1UL;
        for (i = 0; i < 2; i++)
            l_98[i] = 0xAE0D08F1L;
        if (g_57)
            goto lbl_96;
        l_98[1] = (g_12.f0 && ((7UL && (l_97[1] || (l_97[1] <= 0x30L))) <= g_95));
    }
    else
    {
        int32_t ***l_103 = &g_100;
        int32_t *l_107 = &g_3[5];
        int32_t **l_108 = &l_83;
        (*l_83) = (l_99 , (-1L));
        l_104 = ((*l_103) = g_100);
        (*l_108) = ((safe_lshift_func_uint8_t_u_u((l_103 == &l_104), 6)) , l_107);
    }
    return &g_3[2];
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
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f2, "g_12.f2", print_hash_value);
    transparent_crc(g_12.f3, "g_12.f3", print_hash_value);
    transparent_crc(g_12.f4, "g_12.f4", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_125[i][j], "g_125[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_141.f0, "g_141.f0", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_353[i][j][k], "g_353[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_358[i][j][k], "g_358[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_553[i][j][k], "g_553[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_561[i], "g_561[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_581[i][j][k], "g_581[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_638, "g_638", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_644[i], "g_644[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_678, "g_678", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_780, "g_780", print_hash_value);
    transparent_crc(g_782, "g_782", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_793[i].f0, "g_793[i].f0", print_hash_value);
        transparent_crc(g_793[i].f2, "g_793[i].f2", print_hash_value);
        transparent_crc(g_793[i].f3, "g_793[i].f3", print_hash_value);
        transparent_crc(g_793[i].f4, "g_793[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_796.f0, "g_796.f0", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    transparent_crc(g_987, "g_987", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1016.f0, "g_1016.f0", print_hash_value);
    transparent_crc(g_1040, "g_1040", print_hash_value);
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1051, "g_1051", print_hash_value);
    transparent_crc(g_1052, "g_1052", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1087[i], "g_1087[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1196, "g_1196", print_hash_value);
    transparent_crc(g_1538, "g_1538", print_hash_value);
    transparent_crc(g_1674, "g_1674", print_hash_value);
    transparent_crc(g_1708, "g_1708", print_hash_value);
    transparent_crc(g_1752, "g_1752", print_hash_value);
    transparent_crc(g_1816, "g_1816", print_hash_value);
    transparent_crc(g_1854, "g_1854", print_hash_value);
    transparent_crc(g_1871, "g_1871", print_hash_value);
    transparent_crc(g_2011, "g_2011", print_hash_value);
    transparent_crc(g_2029, "g_2029", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_2062[i][j], "g_2062[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2070, "g_2070", print_hash_value);
    transparent_crc(g_2126, "g_2126", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
