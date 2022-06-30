// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = A7CA4AF8
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
   const signed f0 : 19;
   signed f1 : 28;
   unsigned f2 : 14;
   unsigned f3 : 2;
   signed f4 : 9;
   const signed f5 : 28;
   signed f6 : 10;
   const uint64_t f7;
   signed f8 : 30;
   signed f9 : 14;
};
#pragma pack(pop)

struct S1 {
   int16_t f0;
   int32_t f1;
   const int64_t f2;
   signed f3 : 8;
   unsigned f4 : 6;
   int16_t f5;
   unsigned f6 : 10;
   uint64_t f7;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   signed f0 : 30;
   const unsigned f1 : 10;
   unsigned f2 : 15;
   unsigned f3 : 19;
   unsigned f4 : 20;
   unsigned f5 : 1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   signed f0 : 14;
   unsigned f1 : 5;
   unsigned f2 : 21;
   unsigned f3 : 30;
   signed f4 : 18;
   signed f5 : 7;
   signed f6 : 18;
   unsigned : 0;
};
#pragma pack(pop)

struct S4 {
   const signed f0 : 26;
   const unsigned f1 : 29;
};


static uint32_t g_2 = 0x628405CEL;
static int32_t g_5[6] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
static struct S3 g_13 = {20,1,1301,16033,-56,4,-142};
static struct S3 g_39 = {121,4,780,28903,-138,-0,-346};
static const int32_t g_54 = 1L;
static int32_t g_63 = 0x486B6864L;
static int32_t *g_88[4][7][9] = {{{&g_63,(void*)0,&g_5[2],&g_5[2],&g_5[2],(void*)0,&g_63,&g_5[2],&g_5[2]},{&g_5[4],&g_63,&g_5[0],&g_5[4],&g_63,&g_5[4],&g_5[1],&g_5[4],&g_63},{&g_5[4],&g_63,&g_5[4],&g_63,&g_5[2],&g_63,&g_63,&g_5[2],&g_63},{&g_5[4],(void*)0,&g_5[4],&g_63,&g_5[2],(void*)0,&g_5[2],&g_63,&g_63},{&g_63,&g_63,&g_63,&g_63,(void*)0,&g_63,&g_63,&g_63,&g_63},{&g_5[3],&g_63,&g_5[4],&g_63,&g_5[0],(void*)0,&g_63,&g_5[4],&g_5[4]},{(void*)0,&g_5[2],&g_63,&g_63,&g_5[2],&g_63,&g_5[2],&g_5[2],(void*)0}},{{&g_63,(void*)0,&g_63,(void*)0,&g_5[4],&g_63,&g_5[4],&g_63,&g_5[4]},{&g_5[4],&g_63,&g_63,&g_5[4],&g_5[4],(void*)0,&g_63,(void*)0,&g_63},{&g_5[4],&g_63,&g_63,&g_63,&g_5[4],&g_5[4],&g_63,(void*)0,&g_63},{&g_63,&g_63,&g_5[2],(void*)0,&g_5[4],(void*)0,&g_5[2],&g_63,&g_63},{&g_5[0],(void*)0,&g_63,&g_5[4],&g_5[4],&g_5[4],&g_5[4],&g_5[1],&g_5[4]},{(void*)0,&g_5[2],&g_63,&g_5[3],&g_5[2],&g_63,&g_5[4],&g_5[4],&g_63},{&g_5[0],(void*)0,&g_5[4],(void*)0,&g_5[0],&g_5[4],&g_5[3],&g_5[5],&g_63}},{{&g_63,&g_63,&g_5[4],&g_63,(void*)0,&g_5[3],&g_63,&g_5[3],&g_5[4]},{&g_5[4],&g_63,&g_5[2],&g_5[4],&g_63,&g_5[4],&g_5[4],&g_5[4],&g_63},{&g_5[4],&g_5[3],&g_5[4],&g_5[4],(void*)0,&g_63,&g_63,&g_63,&g_63},{&g_63,&g_5[4],&g_63,&g_5[4],&g_5[3],&g_5[4],&g_5[2],&g_5[4],&g_5[2]},{(void*)0,&g_5[3],&g_5[2],&g_5[2],&g_5[3],(void*)0,&g_5[4],(void*)0,&g_5[2]},{&g_5[3],&g_63,&g_5[3],&g_5[1],&g_5[1],&g_5[4],&g_5[4],(void*)0,&g_5[4]},{&g_5[3],&g_63,(void*)0,&g_63,&g_5[4],(void*)0,&g_5[4],&g_63,(void*)0}},{{&g_5[4],(void*)0,&g_63,&g_5[4],&g_63,&g_63,&g_5[2],&g_5[4],&g_5[4]},{&g_63,&g_5[2],&g_63,&g_5[2],&g_5[4],&g_63,&g_63,&g_5[4],&g_5[4]},{&g_5[4],(void*)0,&g_63,&g_5[5],&g_63,(void*)0,&g_5[4],&g_5[4],&g_5[0]},{&g_5[4],&g_63,(void*)0,&g_5[4],&g_63,&g_63,&g_63,(void*)0,(void*)0},{&g_5[4],&g_63,&g_5[3],(void*)0,&g_5[4],&g_5[4],&g_63,&g_5[4],&g_5[3]},{(void*)0,&g_63,(void*)0,(void*)0,&g_5[3],&g_5[2],&g_63,(void*)0,&g_63},{&g_5[2],&g_5[4],&g_63,&g_5[4],&g_5[4],(void*)0,&g_5[4],&g_5[1],&g_63}}};
static int32_t **g_87 = &g_88[0][5][7];
static int32_t ***g_86 = &g_87;
static int16_t g_92 = 0x9881L;
static int32_t g_114 = 0xBB62B126L;
static uint16_t g_138 = 65535UL;
static int64_t g_141 = 0x1010FFDB434E9FA9LL;
static int32_t g_143[2] = {0x36E4CB23L,0x36E4CB23L};
static int8_t g_170 = 0x94L;
static int16_t g_174 = 0x1F54L;
static uint8_t g_188[1] = {252UL};
static struct S1 g_209 = {0x0FBEL,3L,-3L,11,4,0xEDC9L,28,0UL};
static struct S2 g_217 = {-14565,30,4,25,433,0};
static int8_t g_225[2][6] = {{0x98L,0x26L,0x98L,0x98L,0x26L,0x98L},{0x98L,0x26L,0x98L,0x98L,0x26L,0x98L}};
static int32_t g_228[3][10][5] = {{{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)},{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)},{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)},{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)},{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)}},{{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)},{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)},{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)},{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)},{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)}},{{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)},{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)},{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)},{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)},{0xBD129854L,0xEC67E8D8L,0xBD129854L,0x7286EC0BL,0x7286EC0BL},{0x6850A1A1L,0L,0x6850A1A1L,(-1L),(-1L)}}};
static int16_t *g_242 = (void*)0;
static const struct S4 g_254 = {-1437,21172};
static uint8_t g_257 = 0x02L;
static struct S1 g_305 = {-6L,0x6E1C05ADL,0xC4DEAE77555DD1EELL,-3,1,1L,12,8UL};
static uint32_t *g_324 = &g_2;
static uint32_t * const *g_323 = &g_324;
static uint32_t g_337[4] = {1UL,1UL,1UL,1UL};
static uint32_t **g_378 = &g_324;
static uint32_t ***g_377 = &g_378;
static const uint8_t g_396 = 0UL;
static const uint32_t *g_450 = &g_337[2];
static const uint32_t **g_449 = &g_450;
static int8_t *g_468[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static const int32_t *g_480 = &g_5[4];
static int32_t *g_509 = &g_114;
static uint8_t g_550 = 0x66L;
static uint32_t g_562 = 0UL;
static uint32_t * const ***g_588 = (void*)0;
static struct S0 g_599 = {439,9436,23,0,0,14115,-21,1UL,5180,56};
static struct S4 g_655 = {-8037,14646};
static struct S4 *g_715 = &g_655;
static struct S4 **g_714[9][7] = {{&g_715,(void*)0,&g_715,&g_715,(void*)0,&g_715,&g_715},{&g_715,&g_715,&g_715,&g_715,&g_715,&g_715,&g_715},{&g_715,(void*)0,&g_715,&g_715,(void*)0,&g_715,&g_715},{&g_715,&g_715,&g_715,&g_715,&g_715,&g_715,&g_715},{&g_715,(void*)0,&g_715,&g_715,(void*)0,&g_715,&g_715},{&g_715,&g_715,&g_715,&g_715,&g_715,&g_715,&g_715},{&g_715,(void*)0,&g_715,&g_715,(void*)0,&g_715,&g_715},{&g_715,&g_715,&g_715,&g_715,&g_715,&g_715,&g_715},{&g_715,(void*)0,&g_715,&g_715,(void*)0,&g_715,&g_715}};
static uint32_t *g_735 = &g_562;
static uint8_t *g_754 = (void*)0;
static uint8_t * const *g_753[9] = {&g_754,&g_754,&g_754,&g_754,&g_754,&g_754,&g_754,&g_754,&g_754};
static int64_t *g_842 = &g_141;
static int64_t * const *g_841 = &g_842;
static int64_t * const **g_840 = &g_841;
static const uint16_t g_876[5][2] = {{0x4C81L,0x4C81L},{0x4C81L,0xC619L},{1UL,0xDEFBL},{0xC619L,0xDEFBL},{1UL,0xC619L}};
static struct S4 ***g_975 = &g_714[2][6];
static struct S1 *g_1015 = (void*)0;
static struct S1 **g_1014 = &g_1015;
static uint8_t g_1052 = 247UL;
static const struct S1 g_1162 = {-1L,-10L,5L,-5,5,0xD21DL,19,0xA8CB46856AD22E03LL};
static struct S4 ****g_1184 = &g_975;
static struct S2 g_1191 = {18071,0,40,130,303,0};
static struct S2 *g_1190[6][1] = {{&g_1191},{&g_1191},{&g_1191},{&g_1191},{&g_1191},{&g_1191}};
static const struct S2 ***g_1262 = (void*)0;
static const int32_t *g_1283 = &g_143[1];
static uint64_t *g_1356[9][6][1] = {{{&g_305.f7},{&g_209.f7},{&g_305.f7},{(void*)0},{&g_305.f7},{&g_209.f7}},{{&g_305.f7},{(void*)0},{&g_305.f7},{&g_209.f7},{&g_305.f7},{(void*)0}},{{&g_305.f7},{&g_209.f7},{&g_305.f7},{(void*)0},{&g_305.f7},{&g_209.f7}},{{&g_305.f7},{(void*)0},{&g_305.f7},{&g_209.f7},{&g_305.f7},{(void*)0}},{{&g_305.f7},{&g_209.f7},{&g_305.f7},{(void*)0},{&g_305.f7},{&g_209.f7}},{{&g_305.f7},{(void*)0},{&g_305.f7},{&g_209.f7},{&g_305.f7},{(void*)0}},{{&g_305.f7},{&g_209.f7},{&g_305.f7},{(void*)0},{&g_305.f7},{&g_209.f7}},{{&g_305.f7},{(void*)0},{&g_305.f7},{&g_209.f7},{&g_305.f7},{(void*)0}},{{&g_305.f7},{&g_209.f7},{&g_305.f7},{(void*)0},{&g_305.f7},{&g_209.f7}}};
static uint64_t **g_1355[6][3] = {{&g_1356[0][3][0],&g_1356[0][3][0],&g_1356[0][4][0]},{(void*)0,&g_1356[0][4][0],&g_1356[0][4][0]},{&g_1356[0][4][0],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_1356[0][3][0],&g_1356[0][4][0],(void*)0},{&g_1356[0][3][0],&g_1356[0][3][0],&g_1356[0][4][0]}};
static uint64_t **g_1359[6] = {&g_1356[5][3][0],&g_1356[5][3][0],&g_1356[7][4][0],&g_1356[5][3][0],&g_1356[5][3][0],&g_1356[7][4][0]};
static uint32_t g_1383 = 0UL;
static struct S2 g_1391 = {-22130,20,152,372,119,0};
static uint16_t g_1439[8] = {0UL,0UL,9UL,0UL,0UL,9UL,0UL,0UL};
static struct S2 **g_1469[4][5][5] = {{{&g_1190[2][0],&g_1190[1][0],&g_1190[2][0],&g_1190[2][0],&g_1190[0][0]},{&g_1190[2][0],&g_1190[2][0],(void*)0,&g_1190[2][0],&g_1190[2][0]},{&g_1190[2][0],&g_1190[2][0],&g_1190[2][0],&g_1190[5][0],&g_1190[2][0]},{&g_1190[4][0],(void*)0,&g_1190[4][0],&g_1190[2][0],&g_1190[2][0]},{(void*)0,&g_1190[0][0],&g_1190[0][0],&g_1190[1][0],&g_1190[2][0]}},{{&g_1190[2][0],&g_1190[2][0],&g_1190[2][0],&g_1190[2][0],&g_1190[2][0]},{&g_1190[2][0],&g_1190[1][0],&g_1190[0][0],&g_1190[1][0],&g_1190[2][0]},{&g_1190[2][0],&g_1190[0][0],&g_1190[2][0],(void*)0,&g_1190[2][0]},{&g_1190[1][0],&g_1190[5][0],&g_1190[3][0],&g_1190[2][0],&g_1190[2][0]},{&g_1190[2][0],&g_1190[2][0],&g_1190[2][0],&g_1190[0][0],&g_1190[2][0]}},{{(void*)0,&g_1190[2][0],&g_1190[4][0],&g_1190[0][0],&g_1190[2][0]},{&g_1190[2][0],&g_1190[2][0],(void*)0,&g_1190[2][0],&g_1190[2][0]},{&g_1190[2][0],&g_1190[1][0],&g_1190[2][0],&g_1190[5][0],&g_1190[2][0]},{&g_1190[4][0],(void*)0,&g_1190[4][0],&g_1190[2][0],&g_1190[2][0]},{(void*)0,&g_1190[0][0],&g_1190[0][0],&g_1190[1][0],&g_1190[2][0]}},{{&g_1190[2][0],&g_1190[2][0],&g_1190[2][0],&g_1190[2][0],&g_1190[2][0]},{&g_1190[2][0],&g_1190[1][0],&g_1190[0][0],&g_1190[1][0],&g_1190[2][0]},{&g_1190[2][0],&g_1190[0][0],&g_1190[2][0],(void*)0,&g_1190[2][0]},{&g_1190[1][0],&g_1190[5][0],&g_1190[3][0],&g_1190[2][0],&g_1190[2][0]},{&g_1190[2][0],&g_1190[2][0],&g_1190[2][0],&g_1190[0][0],&g_1190[2][0]}}};



static struct S1 func_1(void);
static int32_t func_6(int8_t p_7, const int32_t * p_8, const int32_t * p_9, uint16_t p_10);
static struct S4 func_17(int32_t * const p_18, int32_t p_19, int32_t * p_20, int64_t p_21);
static int32_t * func_22(const struct S3 * p_23, int64_t p_24, struct S3 * const p_25, struct S3 * p_26, int32_t * p_27);
static struct S3 * func_28(int32_t * p_29, uint32_t p_30, int32_t p_31, struct S4 p_32);
static int32_t * func_33(int32_t * p_34, struct S3 * p_35);
static uint8_t func_46(const int32_t * p_47, uint8_t p_48, int16_t p_49, struct S3 * const p_50, int32_t * p_51);
static uint8_t func_57(uint32_t p_58);
static int32_t * func_65(uint64_t p_66, int32_t * p_67, int32_t * p_68, const struct S4 p_69, uint32_t p_70);
static uint16_t func_71(struct S3 * p_72, int32_t ** p_73, struct S1 p_74, int32_t ** p_75);
# 163 "<stdin>"
static struct S1 func_1(void)
{
    int32_t *l_3 = (void*)0;
    int32_t *l_4 = &g_5[4];
    struct S3 *l_14 = &g_13;
    struct S3 *l_38[5][3][6] = {{{&g_39,&g_39,&g_39,&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39,&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39,(void*)0,&g_39,&g_39}},{{&g_39,(void*)0,&g_39,(void*)0,&g_39,&g_39},{&g_39,&g_39,&g_39,&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39,&g_39,&g_39,&g_39}},{{&g_39,&g_39,&g_39,&g_39,(void*)0,&g_39},{&g_39,&g_39,&g_39,&g_39,(void*)0,&g_39},{&g_39,&g_39,&g_39,&g_39,(void*)0,&g_39}},{{(void*)0,&g_39,&g_39,&g_39,(void*)0,&g_39},{&g_39,&g_39,(void*)0,&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39,&g_39,&g_39,&g_39}},{{&g_39,&g_39,&g_39,&g_39,&g_39,&g_39},{&g_39,(void*)0,&g_39,&g_39,&g_39,&g_39},{(void*)0,&g_39,&g_39,(void*)0,&g_39,&g_39}}};
    const int32_t *l_53[7];
    const int32_t **l_52 = &l_53[0];
    uint64_t l_1013 = 0x71D262C3CE38796FLL;
    struct S4 l_1025 = {7940,16724};
    int16_t *l_1518 = &g_209.f0;
    struct S1 l_1519[3] = {{0L,-5L,1L,-3,6,0x2B23L,13,0x60C7F20B855CA453LL},{0L,-5L,1L,-3,6,0x2B23L,13,0x60C7F20B855CA453LL},{0L,-5L,1L,-3,6,0x2B23L,13,0x60C7F20B855CA453LL}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_53[i] = &g_54;
    (*l_4) &= g_2;
    (*l_4) = (((*l_1518) = (func_6((((safe_mul_func_uint8_t_u_u((((*l_14) = g_13) , (*l_4)), (safe_lshift_func_int8_t_s_u(((func_17(func_22(func_28(func_33(l_3, ((((g_2 || (safe_add_func_uint8_t_u_u((l_38[0][1][0] != ((safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((((g_2 || (safe_lshift_func_uint16_t_u_u((func_46(((*l_52) = (void*)0), g_5[5], ((safe_rshift_func_int16_t_s_s(g_39.f6, g_39.f4)) == g_5[4]), l_38[3][0][5], &g_5[4]) , g_217.f4), 2))) >= g_209.f3) , 0x885ABBC7L), (*l_4))), 0x4D0F71A4271C0701LL)) , &g_39)), g_209.f6))) , l_1013) && (*l_4)) , (void*)0)), (*l_4), (*g_480), l_1025), (*l_4), l_14, l_14, l_3), (*l_4), l_4, (*l_4)) , &g_39) == l_38[0][1][0]), 0)))) || g_1191.f3) > (*l_4)), l_4, l_4, (*l_4)) < (*l_4))) | (-1L));
    return l_1519[2];
}







static int32_t func_6(int8_t p_7, const int32_t * p_8, const int32_t * p_9, uint16_t p_10)
{
    int64_t l_1453[9] = {1L,0xDF4005B8B9F5E55CLL,1L,0xDF4005B8B9F5E55CLL,1L,0xDF4005B8B9F5E55CLL,1L,0xDF4005B8B9F5E55CLL,1L};
    int32_t l_1457 = 0xB2503BC4L;
    int64_t l_1458 = (-10L);
    uint32_t l_1459 = 4294967295UL;
    struct S2 **l_1467 = &g_1190[4][0];
    int32_t l_1512[6] = {0xA7A04E99L,(-8L),0xA7A04E99L,(-8L),(-8L),0xA7A04E99L};
    uint32_t ***l_1513 = &g_378;
    int32_t l_1514 = (-10L);
    int32_t l_1515[9][2] = {{1L,1L},{0xF9A636A3L,1L},{1L,0xF9A636A3L},{1L,1L},{0xF9A636A3L,1L},{1L,0xF9A636A3L},{1L,1L},{0xF9A636A3L,1L},{1L,0xF9A636A3L}};
    int32_t l_1516 = 0x45298CCAL;
    int i, j;
    for (g_63 = 9; (g_63 >= (-2)); g_63--)
    {
        (*g_1014) = (*g_1014);
        g_13 = g_13;
    }
    if (g_13.f1)
        goto lbl_1517;
lbl_1517:
    if ((*p_8))
    {
        int32_t *l_1452 = &g_143[0];
        int32_t *l_1454 = &g_114;
        int32_t *l_1455 = &g_114;
        int32_t *l_1456[8][1];
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 1; j++)
                l_1456[i][j] = (void*)0;
        }
        --l_1459;
        return l_1453[2];
    }
    else
    {
        int32_t l_1462[5][4] = {{0xAD536FEAL,0xAD536FEAL,(-9L),0xAD536FEAL},{0xAD536FEAL,(-6L),(-6L),0xAD536FEAL},{(-6L),0xAD536FEAL,(-6L),(-6L)},{0xAD536FEAL,0xAD536FEAL,(-9L),0xAD536FEAL},{0xAD536FEAL,(-6L),(-6L),0xAD536FEAL}};
        struct S2 ***l_1463 = (void*)0;
        struct S2 ***l_1464 = (void*)0;
        struct S2 **l_1466 = (void*)0;
        struct S2 ***l_1465[1][6][1];
        struct S2 **l_1468 = &g_1190[2][0];
        int16_t l_1478 = 0x2FDBL;
        uint64_t l_1500 = 1UL;
        uint8_t *l_1501[6] = {&g_188[0],&g_257,&g_188[0],&g_188[0],&g_257,&g_188[0]};
        uint64_t *l_1502 = &g_209.f7;
        int8_t *l_1503 = (void*)0;
        int8_t *l_1504 = &g_225[0][5];
        int32_t l_1505 = 0x41B60A66L;
        int32_t l_1506 = 0xDC3CB159L;
        int32_t *l_1507 = &g_143[0];
        int64_t *l_1508 = (void*)0;
        int64_t *l_1509 = (void*)0;
        int64_t *l_1510 = &l_1458;
        int8_t *l_1511[3][7] = {{&g_170,&g_170,&g_170,&g_170,&g_170,&g_170,&g_170},{&g_170,&g_170,&g_170,&g_170,&g_170,&g_170,&g_170},{&g_170,&g_170,&g_170,&g_170,&g_170,&g_170,&g_170}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1465[i][j][k] = &l_1466;
            }
        }
        l_1462[3][1] |= (*p_9);
        (*g_87) = &l_1457;
        l_1516 = (((l_1467 = &g_1190[4][0]) != (g_1469[0][0][3] = l_1468)) == (safe_div_func_int32_t_s_s(((l_1515[7][0] = (safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((l_1514 = ((g_217.f0 < (2L && (((safe_mod_func_uint64_t_u_u((((l_1512[4] = (((l_1478 = l_1462[3][1]) != (((*l_1510) = ((*g_842) = (((safe_mod_func_int32_t_s_s(((*l_1507) = ((*p_9) > (safe_div_func_int8_t_s_s((+((safe_add_func_uint64_t_u_u((l_1506 = (safe_lshift_func_int8_t_s_u(((*p_9) && ((safe_lshift_func_int16_t_s_u((l_1505 &= (safe_sub_func_uint64_t_u_u(l_1462[3][1], ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((((*l_1504) = (((*l_1502) = ((l_1457 = (safe_mod_func_int8_t_s_s(1L, l_1500))) <= p_7)) == (*g_842))) < l_1462[3][0]) | p_7), (-10L))) < 8UL), l_1453[5])), 3)) == p_7)))), g_305.f6)) >= 8L)), l_1453[0]))), l_1459)) | g_217.f0)), l_1500)))), l_1458)) > 0x97A9L) | (*p_9)))) & 0x5A2107A16FDD3052LL)) , l_1453[4])) & l_1453[0]) <= p_7), l_1462[3][1])) , l_1513) == l_1513))) && l_1512[4])), p_10)), l_1459))) >= l_1453[4]), p_10)));
    }
    return l_1453[5];
}







static struct S4 func_17(int32_t * const p_18, int32_t p_19, int32_t * p_20, int64_t p_21)
{
    int64_t l_1317 = 0x72BD64960E3522EBLL;
    int32_t l_1323[6][4] = {{0xFFCE3FD6L,0xFFCE3FD6L,(-6L),0x25EC5396L},{0xE1F8CA97L,1L,0xE1F8CA97L,(-6L)},{0xE1F8CA97L,(-6L),(-6L),0xE1F8CA97L},{0xFFCE3FD6L,(-6L),0x25EC5396L,(-6L)},{(-6L),1L,0x25EC5396L,0x25EC5396L},{0xFFCE3FD6L,0xFFCE3FD6L,(-6L),0x25EC5396L}};
    int64_t l_1333 = (-10L);
    uint64_t **l_1357 = &g_1356[1][4][0];
    uint32_t ***l_1404[2];
    struct S4 l_1443 = {3344,543};
    struct S3 *l_1446 = &g_39;
    int32_t l_1447 = 0x8BCBAED5L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1404[i] = &g_378;
    for (g_209.f0 = 0; (g_209.f0 <= (-26)); g_209.f0 = safe_sub_func_int64_t_s_s(g_209.f0, 9))
    {
        int32_t l_1324 = 0xB7FE5574L;
        int32_t l_1325 = (-1L);
        int32_t l_1326 = 0xA21F8234L;
        int32_t l_1327 = (-8L);
        int32_t l_1329 = 0L;
        int32_t l_1331[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int64_t l_1336 = 0xE764B52E70EEA2F1LL;
        uint64_t **l_1361 = &g_1356[0][3][0];
        struct S4 l_1401[7][9][4] = {{{{-753,3042},{4577,23027},{191,9558},{3733,12107}},{{4577,23027},{-2642,17622},{-3829,3019},{2638,494}},{{-1794,4620},{-3240,3920},{-6543,21928},{7770,16038}},{{-2434,3788},{-7411,11820},{-3240,3920},{6213,10798}},{{-1756,11426},{-5395,2179},{-2567,21781},{4577,23027}},{{-2338,19602},{-1778,2496},{3992,9907},{191,9558}},{{-577,11511},{7719,16810},{-577,11511},{5580,17877}},{{4475,4378},{-577,11511},{-2711,1107},{-2642,17622}},{{191,9558},{-1756,11426},{3733,12107},{-577,11511}}},{{{-1104,17374},{2638,494},{3733,12107},{5718,4228}},{{191,9558},{-7308,13611},{-2711,1107},{-1794,4620}},{{4475,4378},{7770,16038},{-577,11511},{-4575,8991}},{{-577,11511},{-4575,8991},{3992,9907},{-2567,21781}},{{-2338,19602},{5199,6458},{-2567,21781},{1515,13825}},{{-1756,11426},{3992,9907},{-3240,3920},{-2711,1107}},{{-2434,3788},{-6543,21928},{-6543,21928},{-2434,3788}},{{-1794,4620},{3733,12107},{-3829,3019},{7719,16810}},{{4577,23027},{-1104,17374},{191,9558},{-513,18854}}},{{{-753,3042},{-2434,3788},{-6334,5445},{-513,18854}},{{-7308,13611},{-1104,17374},{-7411,11820},{7719,16810}},{{-5395,2179},{3733,12107},{5199,6458},{-2434,3788}},{{-3240,3920},{-6543,21928},{7770,16038},{-2711,1107}},{{-6047,2527},{3992,9907},{-1756,11426},{191,9558}},{{-2434,3788},{-1794,4620},{-2338,19602},{7770,16038}},{{5718,4228},{-2567,21781},{-577,11511},{-2567,21781}},{{-3829,3019},{-2434,3788},{4475,4378},{-1104,17374}},{{6213,10798},{5580,17877},{191,9558},{-2338,19602}}},{{{-2338,19602},{7938,14189},{-1104,17374},{7490,12651}},{{-2338,19602},{1515,13825},{191,9558},{6715,4837}},{{6213,10798},{7490,12651},{4475,4378},{-7411,11820}},{{-3829,3019},{-1778,2496},{-577,11511},{-7308,13611}},{{5718,4228},{-6543,21928},{-2338,19602},{3992,9907}},{{-2434,3788},{-4575,8991},{-1756,11426},{2638,494}},{{-577,11511},{4577,23027},{-2434,3788},{-2434,3788}},{{-6047,2527},{-6047,2527},{-1794,4620},{7938,14189}},{{-4575,8991},{6715,4837},{4577,23027},{5718,4228}}},{{{5580,17877},{3992,9907},{-753,3042},{4577,23027}},{{7719,16810},{3992,9907},{-7308,13611},{5718,4228}},{{3992,9907},{6715,4837},{-5395,2179},{7938,14189}},{{-1104,17374},{-6047,2527},{-3240,3920},{-2434,3788}},{{5199,6458},{4577,23027},{-6047,2527},{2638,494}},{{1515,13825},{-4575,8991},{7770,16038},{3992,9907}},{{4475,4378},{-6543,21928},{3733,12107},{-7308,13611}},{{7490,12651},{-1778,2496},{7490,12651},{-7411,11820}},{{-2642,17622},{7490,12651},{-513,18854},{6715,4837}}},{{{-7308,13611},{1515,13825},{5718,4228},{7490,12651}},{{-1756,11426},{7938,14189},{5718,4228},{-2338,19602}},{{-7308,13611},{5580,17877},{-513,18854},{-1104,17374}},{{-2642,17622},{-2434,3788},{7490,12651},{-2567,21781}},{{7490,12651},{-2567,21781},{3733,12107},{7770,16038}},{{4475,4378},{-1794,4620},{7770,16038},{191,9558}},{{1515,13825},{3733,12107},{-6047,2527},{-513,18854}},{{5199,6458},{-3240,3920},{-3240,3920},{5199,6458}},{{-1104,17374},{5718,4228},{-5395,2179},{-1778,2496}}},{{{3992,9907},{-1756,11426},{-7308,13611},{6213,10798}},{{7719,16810},{5199,6458},{-753,3042},{6213,10798}},{{5580,17877},{-1756,11426},{4577,23027},{-1778,2496}},{{-4575,8991},{5718,4228},{-1794,4620},{5199,6458}},{{-6047,2527},{-3240,3920},{-2434,3788},{-513,18854}},{{-577,11511},{3733,12107},{-1756,11426},{191,9558}},{{-2434,3788},{-1794,4620},{-2338,19602},{7770,16038}},{{5718,4228},{-2567,21781},{-577,11511},{-2567,21781}},{{-3829,3019},{-2434,3788},{4475,4378},{-1104,17374}}}};
        int64_t *l_1413 = &l_1333;
        struct S2 l_1448[4] = {{-14864,16,152,415,920,0},{-14864,16,152,415,920,0},{-14864,16,152,415,920,0},{-14864,16,152,415,920,0}};
        struct S3 l_1449 = {-79,3,406,28837,-321,1,-510};
        int i, j, k;
        for (g_209.f1 = 0; (g_209.f1 != (-16)); --g_209.f1)
        {
            uint64_t *l_1315 = &g_209.f7;
            uint64_t **l_1316 = &l_1315;
            int32_t *l_1318 = &g_63;
            int32_t l_1321 = 0x7AE334CAL;
            int32_t l_1328 = 0xB82FCA71L;
            int32_t l_1330 = 0xFCB5769FL;
            int32_t l_1332[6][7][6] = {{{(-1L),0x811DF475L,1L,(-9L),0L,0L},{0L,0x811DF475L,0x811DF475L,0L,0xF630B0D1L,0xB61B0F6AL},{0L,0xF630B0D1L,0xB61B0F6AL,(-9L),0x811DF475L,0xB61B0F6AL},{(-1L),0L,0x811DF475L,0x2DEAF2DCL,0x811DF475L,0L},{0xB61B0F6AL,3L,0L,0xF630B0D1L,3L,0x7CACBAE6L},{0x811DF475L,0x7CACBAE6L,0L,0xB61B0F6AL,0x6F7D2991L,0x6F7D2991L},{1L,0x7CACBAE6L,0x7CACBAE6L,1L,3L,3L}},{{1L,3L,3L,0xB61B0F6AL,0x7CACBAE6L,3L},{0x811DF475L,0x6F7D2991L,0x7CACBAE6L,0xF630B0D1L,0x7CACBAE6L,0x6F7D2991L},{0xB61B0F6AL,3L,0L,0xF630B0D1L,3L,0x7CACBAE6L},{0x811DF475L,0x7CACBAE6L,0L,0xB61B0F6AL,0x6F7D2991L,0x6F7D2991L},{1L,0x7CACBAE6L,0x7CACBAE6L,1L,3L,3L},{1L,3L,3L,0xB61B0F6AL,0x7CACBAE6L,3L},{0x811DF475L,0x6F7D2991L,0x7CACBAE6L,0xF630B0D1L,0x7CACBAE6L,0x6F7D2991L}},{{0xB61B0F6AL,3L,0L,0xF630B0D1L,3L,0x7CACBAE6L},{0x811DF475L,0x7CACBAE6L,0L,0xB61B0F6AL,0x6F7D2991L,0x6F7D2991L},{1L,0x7CACBAE6L,0x7CACBAE6L,1L,3L,3L},{1L,3L,3L,0xB61B0F6AL,0x7CACBAE6L,3L},{0x811DF475L,0x6F7D2991L,0x7CACBAE6L,0xF630B0D1L,0x7CACBAE6L,0x6F7D2991L},{0xB61B0F6AL,3L,0L,0xF630B0D1L,3L,0x7CACBAE6L},{0x811DF475L,0x7CACBAE6L,0L,0xB61B0F6AL,0x6F7D2991L,0x6F7D2991L}},{{1L,0x7CACBAE6L,0x7CACBAE6L,1L,3L,3L},{1L,3L,3L,0xB61B0F6AL,0x7CACBAE6L,3L},{0x811DF475L,0x6F7D2991L,0x7CACBAE6L,0xF630B0D1L,0x7CACBAE6L,0x6F7D2991L},{0xB61B0F6AL,3L,0L,0xF630B0D1L,3L,0x7CACBAE6L},{0x811DF475L,0x7CACBAE6L,0L,0xB61B0F6AL,0x6F7D2991L,0x6F7D2991L},{1L,0x7CACBAE6L,0x7CACBAE6L,1L,3L,3L},{1L,3L,3L,0xB61B0F6AL,0x7CACBAE6L,3L}},{{0x811DF475L,0x6F7D2991L,0x7CACBAE6L,0xF630B0D1L,0x7CACBAE6L,0x6F7D2991L},{0xB61B0F6AL,3L,0L,0xF630B0D1L,3L,0x7CACBAE6L},{0x811DF475L,0x7CACBAE6L,0L,0xB61B0F6AL,0x6F7D2991L,0x6F7D2991L},{1L,0x7CACBAE6L,0x7CACBAE6L,1L,3L,3L},{1L,3L,3L,0xB61B0F6AL,0x7CACBAE6L,3L},{0x811DF475L,0x6F7D2991L,0x7CACBAE6L,0xF630B0D1L,0x7CACBAE6L,0x6F7D2991L},{0xB61B0F6AL,3L,0L,0xF630B0D1L,3L,0x7CACBAE6L}},{{0x811DF475L,0x7CACBAE6L,0L,0xB61B0F6AL,0x6F7D2991L,0L},{0L,0x2DEAF2DCL,0x2DEAF2DCL,0L,(-9L),(-5L)},{0L,(-9L),(-5L),3L,0x2DEAF2DCL,(-5L)},{0x7CACBAE6L,0L,0x2DEAF2DCL,3L,0x2DEAF2DCL,0L},{3L,(-9L),(-1L),3L,(-9L),0x2DEAF2DCL},{0x7CACBAE6L,0x2DEAF2DCL,(-1L),3L,0L,0L},{0L,0x2DEAF2DCL,0x2DEAF2DCL,0L,(-9L),(-5L)}}};
            struct S2 *l_1390 = &g_1391;
            uint32_t *l_1440 = &g_2;
            struct S3 * const l_1445 = (void*)0;
            int i, j, k;
            (*l_1318) = (safe_sub_func_int16_t_s_s(((((**g_323) , g_842) != ((*l_1316) = l_1315)) , l_1317), g_1191.f2));
            for (g_141 = 0; (g_141 != 12); ++g_141)
            {
                int32_t *l_1322[6] = {&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0]};
                int16_t l_1334 = 0x5B6CL;
                int16_t l_1335 = 0x8C0FL;
                uint8_t l_1337[2];
                uint8_t l_1340[7][7] = {{248UL,0UL,8UL,0x90L,0UL,0xAEL,249UL},{0UL,248UL,1UL,1UL,1UL,1UL,248UL},{0xA5L,8UL,1UL,0xAEL,0xB2L,1UL,0xE8L},{0x85L,1UL,8UL,251UL,0UL,3UL,0x90L},{1UL,251UL,0xE8L,0xAEL,8UL,8UL,0xAEL},{0xC9L,0x90L,0xC9L,1UL,8UL,0UL,0xA5L},{1UL,3UL,9UL,0x90L,0UL,8UL,0x7CL}};
                uint64_t *l_1347 = (void*)0;
                uint64_t *l_1348[6][6] = {{&g_305.f7,&g_305.f7,&g_305.f7,(void*)0,(void*)0,&g_305.f7},{(void*)0,(void*)0,(void*)0,&g_305.f7,(void*)0,(void*)0},{(void*)0,&g_305.f7,&g_305.f7,&g_305.f7,&g_305.f7,(void*)0},{(void*)0,(void*)0,&g_305.f7,(void*)0,(void*)0,(void*)0},{&g_305.f7,(void*)0,(void*)0,&g_305.f7,&g_305.f7,&g_305.f7},{&g_305.f7,&g_305.f7,&g_305.f7,(void*)0,(void*)0,&g_305.f7}};
                uint16_t *l_1351 = &g_138;
                uint16_t **l_1350 = &l_1351;
                struct S4 l_1362 = {3083,29};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1337[i] = 0x07L;
                ++l_1337[1];
                ++l_1340[5][2];
                if (((((l_1333 ^ g_228[2][3][2]) , ((*l_1318) |= l_1323[4][0])) , &g_876[4][0]) == ((*l_1350) = (((safe_add_func_uint64_t_u_u(((*l_1315) |= p_21), (safe_sub_func_uint64_t_u_u((g_599 , (g_305.f7 = 1UL)), l_1323[5][2])))) || ((safe_unary_minus_func_uint8_t_u(0x3CL)) == l_1324)) , (void*)0))))
                {
                    int32_t **l_1352 = &g_88[2][2][5];
                    uint64_t **l_1358[4];
                    uint64_t ***l_1360[7][1][10] = {{{&l_1358[2],&l_1316,&l_1316,&l_1316,&l_1316,&l_1316,&l_1358[2],&l_1358[1],&l_1316,&l_1358[0]}},{{&l_1316,&l_1358[1],&l_1358[2],&l_1316,&l_1316,&l_1316,&l_1316,&l_1316,&l_1358[2],&l_1358[1]}},{{&l_1316,&l_1358[1],&l_1358[3],&g_1355[2][2],&g_1355[5][0],&l_1358[0],&l_1358[2],&l_1358[0],&l_1358[2],&l_1358[0]}},{{(void*)0,&l_1316,&g_1355[5][0],&l_1316,(void*)0,&l_1358[0],&l_1358[3],&l_1316,&l_1316,&g_1355[2][2]}},{{&l_1316,&l_1358[0],&g_1355[5][0],&l_1316,&g_1355[2][0],&l_1316,&g_1355[5][0],&l_1358[0],&l_1316,&g_1355[2][2]}},{{&l_1316,&l_1316,&l_1358[3],&l_1358[0],(void*)0,&l_1316,&g_1355[5][0],&l_1316,(void*)0,&l_1358[0]}},{{&l_1358[2],&l_1358[0],&l_1358[2],&g_1355[2][2],&l_1316,&l_1358[0],&g_1355[5][0],&l_1316,&g_1355[2][0],&l_1316}}};
                    struct S4 l_1375 = {-4861,4614};
                    int32_t l_1392 = 0x7EEC15BDL;
                    int32_t l_1393 = (-1L);
                    uint16_t l_1398 = 0xBCCAL;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1358[i] = &l_1348[2][1];
                    (*l_1352) = p_18;
                    if ((safe_add_func_int64_t_s_s(((l_1357 = g_1355[4][0]) == (l_1361 = (g_1359[0] = l_1358[1]))), (l_1329 ^= ((**l_1316) = l_1325)))))
                    {
                        return l_1362;
                    }
                    else
                    {
                        int16_t *l_1378 = &l_1334;
                        int16_t *l_1379 = &l_1335;
                        uint64_t ***l_1380 = &g_1355[4][0];
                        int32_t l_1381[2][5][6] = {{{(-1L),0x2B554556L,(-1L),0x2B554556L,(-1L),0x2B554556L},{6L,0x2B554556L,6L,0x2B554556L,6L,0x2B554556L},{(-1L),0x2B554556L,(-1L),0x2B554556L,(-1L),0x2B554556L},{6L,0x2B554556L,6L,0x2B554556L,6L,0x2B554556L},{(-1L),0x2B554556L,(-1L),0x2B554556L,(-1L),0x2B554556L}},{{6L,0x2B554556L,6L,0x2B554556L,6L,0x2B554556L},{(-1L),0x2B554556L,(-1L),0x2B554556L,(-1L),0x2B554556L},{6L,0x2B554556L,6L,0x2B554556L,6L,0x2B554556L},{(-1L),0x2B554556L,(-1L),0x2B554556L,(-1L),0x2B554556L},{6L,0x2B554556L,6L,0x2B554556L,6L,0x2B554556L}}};
                        int32_t l_1382[7] = {0x078C766AL,0x078C766AL,0x078C766AL,0x078C766AL,0x078C766AL,0x078C766AL,0x078C766AL};
                        int i, j, k;
                        l_1382[3] |= (((safe_sub_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((((((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_19, 1)), (safe_sub_func_int32_t_s_s(((!((*l_1318) != 0x638F27CCF9BA3B4BLL)) , (~(l_1375 , ((safe_mul_func_int16_t_s_s((((*l_1379) &= ((*l_1378) = ((0x44FA6D37DAC7A754LL == p_21) && (*g_842)))) < (((&l_1316 == (((void*)0 != &g_841) , l_1380)) || 18446744073709551614UL) <= 0xC3L)), g_254.f1)) > g_305.f6)))), (*p_20))))) >= l_1375.f1) >= 0xAF1AL) & (-10L)) , p_19), (*l_1318))) != g_217.f0), (*p_20))) != l_1381[0][3][4]) , (*p_20));
                    }
                    g_1383--;
                    for (g_209.f7 = 0; (g_209.f7 <= 55); g_209.f7 = safe_add_func_uint64_t_u_u(g_209.f7, 1))
                    {
                        uint32_t l_1388 = 0x8640F85BL;
                        struct S2 *l_1389 = &g_217;
                        int32_t l_1394 = 0x2929E567L;
                        int32_t l_1395 = 0x544CE3ECL;
                        int32_t l_1396 = 0L;
                        int32_t l_1397[9] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
                        int i;
                        (*l_1318) = l_1388;
                        l_1390 = l_1389;
                        --l_1398;
                    }
                }
                else
                {
                    return l_1401[0][0][2];
                }
            }
            for (g_138 = (-28); (g_138 >= 37); g_138++)
            {
                int64_t *l_1412 = &l_1317;
                uint16_t *l_1438 = &g_1439[3];
                int32_t l_1444 = 0xB137F8C7L;
                if ((l_1327 = (*p_20)))
                {
                    uint32_t ****l_1405 = &l_1404[0];
                    int64_t **l_1414 = &l_1413;
                    (*l_1405) = l_1404[0];
                    if (l_1324)
                        break;
                    (**g_86) = (((*l_1318) = (safe_mul_func_uint16_t_u_u(p_21, (safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((l_1412 != ((*l_1414) = l_1413)), (safe_div_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((!(safe_rshift_func_uint16_t_u_s(l_1333, (*l_1318)))), (p_21 && (safe_mod_func_uint64_t_u_u((g_305.f3 , (0xD36FL & 1UL)), 0x51CF13B335A353D7LL))))) || l_1331[3]), (*p_20))))), 2))))) , p_20);
                }
                else
                {
                    struct S3 *l_1424 = (void*)0;
                    struct S3 *l_1425[7][3][3] = {{{&g_39,(void*)0,&g_39},{&g_39,&g_39,&g_39},{&g_39,(void*)0,&g_39}},{{&g_39,&g_39,&g_39},{&g_39,(void*)0,&g_39},{&g_39,&g_39,&g_39}},{{&g_39,(void*)0,&g_39},{&g_39,&g_39,&g_39},{&g_39,(void*)0,&g_39}},{{&g_39,&g_39,&g_39},{&g_39,(void*)0,&g_39},{&g_39,&g_39,&g_39}},{{&g_39,(void*)0,&g_39},{&g_39,&g_39,&g_39},{&g_39,(void*)0,&g_39}},{{&g_39,&g_39,&g_39},{&g_39,(void*)0,&g_39},{&g_39,&g_39,&g_39}},{{&g_39,(void*)0,&g_39},{&g_39,&g_39,&g_39},{&g_39,(void*)0,&g_39}}};
                    int i, j, k;
                    g_39 = g_39;
                    if ((*p_20))
                        break;
                }
                l_1447 &= ((safe_add_func_uint64_t_u_u((safe_div_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((((((safe_lshift_func_int16_t_s_s(((p_21 , func_22(&g_39, (safe_div_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u((l_1324 >= (((*l_1438) ^= g_599.f3) & ((p_19 , (*g_378)) != (l_1440 = (*g_378))))), (safe_div_func_int16_t_s_s(p_19, (l_1443 , p_19))))) | l_1444) ^ l_1444), p_19)), l_1445, l_1446, p_20)) != p_20), p_21)) < l_1444) || l_1323[2][2]) ^ (*g_324)) >= l_1331[3]), (*p_20))), l_1317)), l_1323[0][1])) , (*p_20));
            }
        }
        l_1449 = ((*l_1446) = (l_1448[1] , l_1449));
    }
    return l_1443;
}







static int32_t * func_22(const struct S3 * p_23, int64_t p_24, struct S3 * const p_25, struct S3 * p_26, int32_t * p_27)
{
    int32_t l_1284[8] = {5L,5L,5L,5L,5L,5L,5L,5L};
    int32_t l_1300 = 0x13B255DEL;
    int32_t l_1304 = (-9L);
    int32_t l_1305[7][7] = {{0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L},{0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL},{0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L},{0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL},{0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L},{0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL,0x4FFA44FAL},{0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L,0xEEDD3A10L}};
    uint16_t l_1306 = 3UL;
    int i, j;
    if (l_1284[4])
    {
        int64_t l_1285 = 1L;
        int8_t *l_1299[1];
        int32_t *l_1301 = &g_63;
        int32_t *l_1302 = (void*)0;
        int32_t *l_1303[6][10][4] = {{{&g_114,&g_143[0],&g_5[4],&g_5[4]},{(void*)0,&l_1300,&l_1300,&g_5[4]},{&g_143[1],&g_114,&g_114,&g_114},{(void*)0,(void*)0,&g_5[0],&g_143[1]},{&g_5[4],&g_143[0],&g_5[4],&l_1300},{&l_1300,&g_63,&g_143[1],(void*)0},{&l_1300,(void*)0,&g_5[4],&g_143[0]},{&g_5[4],(void*)0,&g_5[0],&g_5[4]},{(void*)0,&g_5[4],&g_114,(void*)0},{&g_143[1],&g_143[0],&l_1300,&l_1300}},{{(void*)0,&g_5[4],&g_5[4],&l_1300},{&g_114,&g_114,(void*)0,(void*)0},{&g_143[0],&g_143[0],&l_1300,&g_63},{&g_5[4],&g_143[0],&g_114,&g_143[1]},{&g_143[0],&l_1300,&g_143[0],&g_114},{&g_63,&l_1300,(void*)0,&g_143[1]},{&l_1300,&g_143[0],(void*)0,&g_63},{&g_143[1],&g_143[0],&l_1300,(void*)0},{&g_114,&g_114,&g_143[0],&l_1300},{(void*)0,&g_5[4],&g_5[4],&l_1300}},{{&g_5[0],&g_143[0],&g_143[0],(void*)0},{(void*)0,&g_5[4],(void*)0,&g_5[4]},{&g_63,(void*)0,&g_5[4],&g_143[0]},{(void*)0,(void*)0,&g_143[1],(void*)0},{&g_5[4],&g_63,&g_143[1],&l_1300},{(void*)0,&g_143[0],&g_5[4],&g_143[1]},{&g_63,(void*)0,(void*)0,&g_114},{(void*)0,&g_114,&g_143[0],&g_5[4]},{&g_5[0],&l_1300,&g_5[4],&g_5[4]},{(void*)0,&g_143[0],&g_143[0],&g_5[4]}},{{&g_114,&l_1300,&l_1300,&g_114},{&g_143[1],&g_143[1],(void*)0,&g_5[4]},{&l_1300,&g_5[4],(void*)0,&g_5[4]},{&g_63,&g_114,&g_143[0],&g_5[4]},{&g_143[0],&g_5[4],&g_114,&g_5[4]},{&g_5[4],&g_143[1],&l_1300,&g_114},{&g_143[0],&l_1300,(void*)0,&g_5[4]},{&g_114,&g_143[0],&g_5[4],&g_5[4]},{(void*)0,&l_1300,&l_1300,&g_5[4]},{&g_143[1],&g_114,&g_114,&g_114}},{{(void*)0,(void*)0,&g_5[0],&g_143[1]},{&g_5[4],&g_143[0],&g_5[4],&l_1300},{&l_1300,&g_63,&g_143[1],(void*)0},{&l_1300,(void*)0,&g_5[4],&g_143[0]},{&g_5[4],(void*)0,&g_63,&g_114},{(void*)0,&g_143[0],(void*)0,&g_143[0]},{&l_1300,&l_1300,&g_5[0],&g_143[0]},{&g_114,&g_114,(void*)0,&g_63},{(void*)0,&l_1300,&g_114,&g_114},{&g_114,&g_114,&g_143[1],(void*)0}},{{&g_114,&g_114,&l_1300,&l_1300},{&g_5[4],&g_143[0],&g_63,&l_1300},{&g_5[4],&g_143[0],&g_143[0],&l_1300},{&g_143[0],&g_114,&g_5[4],(void*)0},{&g_5[4],&g_114,&g_143[0],&g_114},{&l_1300,&l_1300,&g_114,&g_63},{&g_5[4],&g_114,(void*)0,&g_143[0]},{&g_63,&l_1300,&g_143[1],&g_143[0]},{(void*)0,&g_143[0],(void*)0,&g_114},{&g_143[0],(void*)0,&g_5[4],&g_114}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1299[i] = &g_225[1][3];
        l_1285 = ((**g_323) <= 4294967295UL);
        (*l_1301) = (safe_mul_func_int16_t_s_s(((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(l_1284[4], 0)), 0x4AE685E85E955C3ALL)) > (safe_mul_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s(p_24, p_24)) >= (-8L)) ^ ((**g_841) = (safe_lshift_func_int16_t_s_u(((l_1300 = (+0xD6L)) , l_1285), 15)))) || l_1284[4]), (l_1285 > (*g_324))))), 3UL));
        l_1306++;
        (*l_1301) &= l_1304;
    }
    else
    {
        l_1304 ^= (-1L);
    }
    return p_27;
}







static struct S3 * func_28(int32_t * p_29, uint32_t p_30, int32_t p_31, struct S4 p_32)
{
    struct S3 l_1032 = {35,4,448,3704,-392,-2,53};
    int32_t l_1044 = (-1L);
    int32_t l_1045 = 0xC6DCCB9CL;
    int32_t l_1046 = 0x7B2B77C1L;
    int32_t l_1047 = 0L;
    int32_t l_1048 = (-2L);
    int32_t l_1049 = 0L;
    int32_t l_1050[3][9][9] = {{{0L,0x973C498FL,0x304D7247L,0x44A2CBF8L,0L,0x7CD263E9L,8L,0x46A0D47EL,0x8C7DEBB4L},{0x909ED338L,0x8F2425C8L,0xEA5983C7L,(-1L),4L,(-1L),3L,8L,0xEF3F38F0L},{8L,5L,0x193BF217L,0x909ED338L,0x46A0D47EL,(-6L),1L,1L,(-6L)},{8L,(-6L),(-1L),0x543DB328L,0x304D7247L,0x73A7A50EL,0x48452919L,0x02A6014BL,1L},{0x909ED338L,8L,0x02A6014BL,0x1847E0A1L,0xEF3F38F0L,7L,0x4DAA72CAL,1L,0x304D7247L},{0L,(-3L),1L,0x35D6F4D8L,(-10L),0x73A7A50EL,0L,7L,0L},{0xDAEF2BD9L,1L,0xE3C55284L,1L,0x7CD263E9L,(-6L),0x1847E0A1L,0x513F5FBFL,1L},{(-10L),1L,0x7AD02692L,6L,1L,(-1L),(-1L),0x43A3227BL,7L},{0x1847E0A1L,(-3L),0xEF3F38F0L,0x4940F498L,0xF32053F3L,0x7CD263E9L,1L,(-6L),1L}},{{0x4DAA72CAL,8L,1L,0L,0x513F5FBFL,0x193BF217L,(-1L),0x973C498FL,(-10L)},{0x44A2CBF8L,(-6L),0x8C7DEBB4L,0x48452919L,0xEA5983C7L,0x541AB78CL,0x1847E0A1L,1L,1L},{0L,5L,0x8C7DEBB4L,0L,0x8C7DEBB4L,5L,0L,0x304D7247L,4L},{8L,0x8F2425C8L,1L,8L,0x43A3227BL,0x8C7DEBB4L,0x4DAA72CAL,0x193BF217L,(-1L)},{0x4940F498L,0x973C498FL,0xEF3F38F0L,3L,0x73A7A50EL,0xF32053F3L,0x48452919L,0x304D7247L,0x7AD02692L},{(-10L),0x945A99A6L,0x7AD02692L,1L,0L,0x338C7ED5L,0x43A3227BL,(-1L),0x1D0A15F4L},{0xEF3F38F0L,0x6A6CED64L,(-6L),1L,0L,(-6L),0x304D7247L,0x1D0A15F4L,0x8FE6E2F4L},{0x8F2425C8L,0x9B1AC2EAL,0L,0x46A0D47EL,1L,0x8B25E62BL,(-6L),0x75FC84B8L,(-9L)},{0x43A3227BL,0L,0xD70F1B3EL,0x193BF217L,(-6L),0x22D6D603L,0x46A0D47EL,0x4E1D0E68L,0x8FE6E2F4L}},{{0xEA5983C7L,0x4E1D0E68L,6L,(-3L),0x9B1AC2EAL,(-1L),0L,0xB0E148FDL,0x1D0A15F4L},{0x73A7A50EL,0x6211995DL,0x4A80B3CCL,0x7AD02692L,0x9B1AC2EAL,7L,0x513F5FBFL,0x6211995DL,1L},{8L,0x338C7ED5L,0L,5L,(-6L),0x1D0A15F4L,0xE3C55284L,0L,6L},{0x973C498FL,0x2DCDB30DL,0x338C7ED5L,0x513F5FBFL,1L,(-9L),8L,0xD70F1B3EL,(-9L)},{8L,(-6L),(-1L),0x73A7A50EL,0L,0L,0x193BF217L,1L,(-1L)},{0x73A7A50EL,0xB9B41AA4L,1L,0L,0L,0L,0L,1L,0xB9B41AA4L},{0xEA5983C7L,1L,0xB0E148FDL,8L,0x9217E603L,(-9L),0x945A99A6L,0x22D6D603L,0L},{0x43A3227BL,0x9217E603L,0L,4L,0x4E1D0E68L,0x1D0A15F4L,0xF32053F3L,6L,0x6211995DL},{0x8F2425C8L,1L,0x9B1AC2EAL,0L,0x6A6CED64L,7L,(-10L),0xE1D2961AL,(-8L)}}};
    struct S0 l_1100 = {96,8781,72,1,6,-12756,-8,0UL,-150,-78};
    uint8_t **l_1114 = &g_754;
    int32_t l_1144 = (-7L);
    int64_t l_1145[9][10] = {{0x5437C276635DA901LL,(-1L),1L,1L,(-1L),0x5437C276635DA901LL,0xD1479B18F2A8E77BLL,3L,0x5D8DD882AEAD92AALL,6L},{(-1L),0xC9A0802F3FB9B018LL,1L,6L,0x5437C276635DA901LL,3L,3L,0x5437C276635DA901LL,6L,1L},{(-1L),(-1L),3L,0xC9A0802F3FB9B018LL,0x5D8DD882AEAD92AALL,0x5437C276635DA901LL,1L,0xD1479B18F2A8E77BLL,6L,6L},{0x5437C276635DA901LL,1L,0xD1479B18F2A8E77BLL,6L,6L,0xD1479B18F2A8E77BLL,1L,0x5437C276635DA901LL,0x5D8DD882AEAD92AALL,0xC9A0802F3FB9B018LL},{0x5D8DD882AEAD92AALL,(-1L),0xC9A0802F3FB9B018LL,1L,6L,0x5437C276635DA901LL,3L,3L,0x5437C276635DA901LL,6L},{6L,0xC9A0802F3FB9B018LL,0xC9A0802F3FB9B018LL,6L,0x5D8DD882AEAD92AALL,3L,0xD1479B18F2A8E77BLL,0x5437C276635DA901LL,(-1L),1L},{6L,(-1L),0xD1479B18F2A8E77BLL,0xC9A0802F3FB9B018LL,0x5437C276635DA901LL,0x5437C276635DA901LL,0xC9A0802F3FB9B018LL,0xD1479B18F2A8E77BLL,(-1L),6L},{0x5D8DD882AEAD92AALL,1L,3L,6L,(-1L),0xD1479B18F2A8E77BLL,0xC9A0802F3FB9B018LL,0x5437C276635DA901LL,0x5437C276635DA901LL,0xC9A0802F3FB9B018LL},{0x5437C276635DA901LL,(-1L),1L,1L,(-1L),0x5437C276635DA901LL,0xD1479B18F2A8E77BLL,3L,0x5D8DD882AEAD92AALL,6L}};
    uint32_t l_1148 = 1UL;
    uint32_t l_1194 = 0xBDE9FD3EL;
    uint64_t l_1197[10][7] = {{0x0E95AD58D7479A8DLL,0x069FBB20A4B89ACDLL,1UL,0x69F5FC25F0583E9ELL,0x236CEE5C21FB7E38LL,3UL,3UL},{0x6A0D1561B40873C8LL,18446744073709551615UL,1UL,18446744073709551615UL,0x6A0D1561B40873C8LL,0xC065C5B34214591DLL,1UL},{4UL,0x0E95AD58D7479A8DLL,0x069FBB20A4B89ACDLL,1UL,0x69F5FC25F0583E9ELL,0x236CEE5C21FB7E38LL,3UL},{0xAF45D9AAE9C7161FLL,0UL,0x6D7129D11244BFF9LL,0xC065C5B34214591DLL,0x6D7129D11244BFF9LL,0UL,0xAF45D9AAE9C7161FLL},{4UL,1UL,3UL,0x69F5FC25F0583E9ELL,0x0E95AD58D7479A8DLL,18446744073709551615UL,0x069FBB20A4B89ACDLL},{0x6A0D1561B40873C8LL,0UL,0x16AECA368C382255LL,18446744073709551615UL,0x6A0D1561B40873C8LL,18446744073709551615UL,0x16AECA368C382255LL},{0x0E95AD58D7479A8DLL,0x0E95AD58D7479A8DLL,3UL,0x069FBB20A4B89ACDLL,4UL,0x236CEE5C21FB7E38LL,1UL},{0x6D7129D11244BFF9LL,18446744073709551615UL,0x6D7129D11244BFF9LL,18446744073709551615UL,0xAF45D9AAE9C7161FLL,18446744073709551615UL,0xAF45D9AAE9C7161FLL},{0x69F5FC25F0583E9ELL,0x069FBB20A4B89ACDLL,0x069FBB20A4B89ACDLL,0x69F5FC25F0583E9ELL,4UL,3UL,18446744073709551615UL},{0x6A0D1561B40873C8LL,0xC065C5B34214591DLL,1UL,0xC065C5B34214591DLL,0x6A0D1561B40873C8LL,18446744073709551615UL,1UL}};
    int32_t ***l_1230[8] = {&g_87,&g_87,&g_87,&g_87,&g_87,&g_87,&g_87,&g_87};
    struct S3 *l_1276 = &g_39;
    struct S3 **l_1275[8][10] = {{&l_1276,&l_1276,&l_1276,&l_1276,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1276,&l_1276,(void*)0,&l_1276,(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,&l_1276,&l_1276,(void*)0,(void*)0,&l_1276,&l_1276,&l_1276,(void*)0},{&l_1276,&l_1276,(void*)0,(void*)0,&l_1276,&l_1276,&l_1276,(void*)0,(void*)0,&l_1276},{(void*)0,&l_1276,&l_1276,&l_1276,&l_1276,(void*)0,&l_1276,(void*)0,&l_1276,(void*)0},{&l_1276,&l_1276,&l_1276,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1276},{&l_1276,&l_1276,(void*)0,&l_1276,&l_1276,(void*)0,&l_1276,&l_1276,(void*)0,(void*)0},{(void*)0,&l_1276,&l_1276,(void*)0,(void*)0,&l_1276,&l_1276,(void*)0,&l_1276,&l_1276}};
    uint32_t **l_1278 = &g_735;
    struct S2 *l_1280 = (void*)0;
    const int32_t **l_1282 = &g_480;
    int i, j, k;
lbl_1281:
    for (p_31 = 0; (p_31 < (-26)); --p_31)
    {
        int16_t l_1028 = 0x6DFCL;
        struct S3 l_1037 = {107,3,704,6789,488,10,-59};
        int16_t *l_1038 = &g_209.f0;
        int32_t l_1039 = (-6L);
        int32_t *l_1040 = (void*)0;
        int32_t *l_1041 = &g_114;
        int32_t *l_1042 = &l_1039;
        int32_t *l_1043[2][5];
        int32_t l_1051 = 0L;
        struct S3 *l_1089 = &l_1032;
        struct S3 **l_1088 = &l_1089;
        struct S4 l_1099 = {338,11031};
        int64_t l_1146 = 0x55182A981E6C0A18LL;
        struct S4 ****l_1182 = &g_975;
        uint32_t l_1208 = 0x4B2BE87BL;
        struct S0 l_1215 = {-156,16310,25,1,16,-12860,-20,6UL,-6629,-77};
        int32_t * const *l_1238 = &g_509;
        int32_t * const **l_1237 = &l_1238;
        struct S2 * const *l_1248 = &g_1190[2][0];
        struct S2 * const **l_1247 = &l_1248;
        uint8_t *l_1265 = &g_188[0];
        uint64_t *l_1273 = (void*)0;
        uint16_t l_1277 = 65535UL;
        const int32_t l_1279 = 0L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_1043[i][j] = &g_114;
        }
        l_1039 |= ((l_1028 <= (((safe_sub_func_int32_t_s_s(l_1028, l_1028)) ^ 0x4B43L) ^ (((+(l_1032 , (((safe_mod_func_uint64_t_u_u(((l_1037.f6 = ((0xBFA5DC1C31471AD5LL || (0x3270L > ((g_39 = l_1037) , ((*l_1038) = (((**g_323) == p_32.f1) <= p_32.f1))))) & 0UL)) <= l_1032.f0), (-4L))) ^ 0x5ABFF50EL) != l_1032.f6))) >= p_32.f1) <= 0x99E8F100C35620DCLL))) & l_1037.f0);
        g_1052++;
        if ((safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(3L, p_30)), p_31)))
        {
            int32_t *l_1059 = &l_1039;
            int32_t **l_1060 = &l_1043[1][0];
            (*l_1060) = ((**g_86) = l_1059);
            if (p_30)
                goto lbl_1281;
        }
        else
        {
            int32_t ***l_1065[9] = {&g_87,&g_87,&g_87,&g_87,&g_87,&g_87,&g_87,&g_87,&g_87};
            uint8_t **l_1102[5][7];
            int64_t **l_1110 = &g_842;
            int64_t ***l_1109 = &l_1110;
            struct S4 l_1116[2] = {{-4585,3607},{-4585,3607}};
            int32_t *l_1122[5];
            int8_t l_1147 = 0xDBL;
            struct S1 **l_1151 = (void*)0;
            int16_t *l_1157 = &g_209.f0;
            uint8_t **l_1163[10] = {&g_754,&g_754,&g_754,&g_754,&g_754,&g_754,&g_754,&g_754,&g_754,&g_754};
            struct S1 l_1175 = {0L,0x3F42F3BAL,7L,4,2,1L,20,0x118B02EC1690515ELL};
            struct S2 *l_1188[6] = {&g_217,&g_217,&g_217,&g_217,&g_217,&g_217};
            uint8_t ***l_1221 = (void*)0;
            uint8_t ****l_1220 = &l_1221;
            struct S3 *l_1224 = (void*)0;
            int32_t *l_1225 = &g_114;
            const int64_t l_1246[1][7][1] = {{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1102[i][j] = &g_754;
            }
            for (i = 0; i < 5; i++)
                l_1122[i] = &l_1048;
            for (g_209.f5 = (-3); (g_209.f5 <= (-26)); --g_209.f5)
            {
                uint32_t l_1070 = 0x9654CEACL;
                int32_t l_1075 = (-7L);
                const struct S4 l_1123 = {3475,11100};
                for (g_305.f7 = 0; (g_305.f7 <= 3); g_305.f7 += 1)
                {
                    int16_t l_1068 = 0L;
                    int32_t *l_1124 = &l_1050[1][7][0];
                    if (l_1032.f3)
                    {
                        uint8_t *l_1069[8] = {&g_188[0],&g_188[0],&g_188[0],&g_188[0],&g_188[0],&g_188[0],&g_188[0],&g_188[0]};
                        int8_t *l_1073 = (void*)0;
                        int8_t *l_1074 = &g_170;
                        uint16_t *l_1086 = &g_138;
                        uint32_t l_1090[3][6][10] = {{{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL}},{{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL}},{{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL}}};
                        int i, j, k;
                        (*l_1042) ^= (safe_sub_func_uint64_t_u_u((((void*)0 != l_1065[4]) >= p_30), ((l_1046 == (safe_mod_func_uint64_t_u_u(l_1068, ((l_1070++) | (l_1075 = ((*l_1074) = p_30)))))) ^ (4UL && (((safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((p_30 , ((safe_mul_func_int16_t_s_s((0L > l_1045), p_31)) & 4294967292UL)), 1UL)), 0xECL)), (*l_1041))) == 0x25L) | p_30)))));
                        (*l_1042) = (((((safe_mul_func_uint16_t_u_u(((*l_1086) = g_225[0][5]), ((~(((**g_323) = ((***g_840) >= (((void*)0 != l_1088) , l_1090[2][1][7]))) > ((safe_lshift_func_uint8_t_u_u(l_1049, (safe_mul_func_int8_t_s_s((p_32.f1 || ((((0xF9AD5FEBL != ((safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((l_1099 , p_32.f0) > 0x0134BEE4L), 0x97L)), l_1090[2][1][8])) ^ l_1032.f0)) && l_1046) , l_1100) , 6L)), p_31)))) || 0UL))) <= l_1070))) && (-3L)) <= l_1068) && p_32.f1) & l_1068);
                    }
                    else
                    {
                        uint8_t ***l_1101 = (void*)0;
                        uint8_t ***l_1103 = (void*)0;
                        uint8_t **l_1104 = &g_754;
                        uint16_t l_1105 = 1UL;
                        (*l_1042) &= (((l_1102[0][4] = &g_754) != (l_1104 = &g_754)) == (l_1105 & (0xCCL >= 1L)));
                    }
                    for (l_1045 = 3; (l_1045 >= 0); l_1045 -= 1)
                    {
                        uint64_t l_1121 = 6UL;
                        l_1124 = ((**g_86) = func_65(((safe_unary_minus_func_uint16_t_u(g_396)) >= (((safe_mod_func_int16_t_s_s(((((void*)0 != l_1109) == (safe_unary_minus_func_int16_t_s((((safe_add_func_uint32_t_u_u((&g_754 == l_1114), ((!((l_1116[0] , ((p_30 > (p_32.f1 & (safe_sub_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_s((p_32.f1 & l_1121), 7)) == l_1100.f9) , 0xC14F92F11C225C66LL), 0xD05605351C55F49ALL)))) , (-1L))) > p_32.f1)) & 18446744073709551607UL))) == p_30) == p_31)))) != p_32.f1), 3UL)) , l_1121) ^ l_1032.f6)), &l_1075, l_1122[3], l_1123, l_1068));
                        if (l_1123.f1)
                            goto lbl_1281;
                        return &g_39;
                    }
                }
            }
            for (l_1051 = 0; (l_1051 == 29); l_1051 = safe_add_func_uint64_t_u_u(l_1051, 9))
            {
                int32_t l_1139 = 0x41DE1EEFL;
                int32_t l_1140 = 0xD85FDD3CL;
                int32_t l_1141 = 0x8354FE16L;
                int32_t l_1142 = 0x5F5987D3L;
                int32_t l_1143[4][8] = {{0L,0L,0xB6FFEF14L,0x3E313F6BL,0x0FF58237L,0xB6FFEF14L,0x0FF58237L,0x3E313F6BL},{6L,0x3E313F6BL,6L,0x7C5E8B64L,0x3E313F6BL,1L,1L,0x3E313F6BL},{0x3E313F6BL,1L,1L,0x3E313F6BL,0x7C5E8B64L,6L,0x3E313F6BL,6L},{0x3E313F6BL,0x0FF58237L,0xB6FFEF14L,0x0FF58237L,0x3E313F6BL,0xB6FFEF14L,0L,0L}};
                struct S1 ***l_1152 = &l_1151;
                const struct S1 ***l_1158 = (void*)0;
                const struct S1 *l_1161 = &g_1162;
                const struct S1 **l_1160 = &l_1161;
                const struct S1 ***l_1159 = &l_1160;
                uint8_t ***l_1164 = &l_1114;
                int64_t *l_1176[8][8][2] = {{{&l_1145[7][1],&g_141},{&l_1146,(void*)0},{&g_141,(void*)0},{(void*)0,(void*)0},{&l_1146,(void*)0},{(void*)0,&l_1146},{&l_1145[7][1],&l_1146},{(void*)0,(void*)0}},{{&l_1146,(void*)0},{(void*)0,(void*)0},{&g_141,(void*)0},{&l_1146,&g_141},{&l_1145[7][1],&l_1145[7][1]},{&l_1145[7][1],&g_141},{&l_1146,(void*)0},{&g_141,(void*)0}},{{(void*)0,(void*)0},{&l_1146,(void*)0},{(void*)0,&l_1146},{&l_1145[7][1],&l_1146},{(void*)0,(void*)0},{&l_1146,(void*)0},{(void*)0,(void*)0},{&g_141,(void*)0}},{{&l_1146,&g_141},{&l_1145[7][1],&l_1145[7][1]},{&l_1145[7][1],&g_141},{&l_1146,(void*)0},{&g_141,(void*)0},{(void*)0,(void*)0},{&l_1146,(void*)0},{(void*)0,&l_1146}},{{&l_1145[7][1],&l_1146},{(void*)0,(void*)0},{&l_1146,(void*)0},{(void*)0,(void*)0},{&g_141,(void*)0},{&l_1146,&g_141},{&l_1145[7][1],&l_1145[7][1]},{&l_1145[7][1],&g_141}},{{&l_1146,(void*)0},{&g_141,(void*)0},{(void*)0,(void*)0},{&l_1146,(void*)0},{(void*)0,&l_1146},{&l_1145[7][1],&l_1146},{(void*)0,(void*)0},{&l_1146,(void*)0}},{{(void*)0,(void*)0},{&g_141,(void*)0},{&l_1146,&g_141},{&l_1145[7][1],&l_1145[7][1]},{&l_1145[7][1],&g_141},{&l_1146,(void*)0},{&g_141,(void*)0},{(void*)0,(void*)0}},{{&l_1146,(void*)0},{(void*)0,&l_1146},{&l_1145[7][1],&l_1146},{(void*)0,(void*)0},{&l_1146,(void*)0},{(void*)0,(void*)0},{&g_141,(void*)0},{&l_1146,&g_141}}};
                struct S0 l_1187[10] = {{-625,-13377,38,1,16,-6701,-12,1UL,7995,-97},{110,-10579,82,0,-11,-2870,-19,0x97926273313FE8E4LL,-20506,-2},{-625,-13377,38,1,16,-6701,-12,1UL,7995,-97},{250,13486,114,1,10,5275,25,0xC5D9F6118C9BD562LL,-20661,74},{250,13486,114,1,10,5275,25,0xC5D9F6118C9BD562LL,-20661,74},{-625,-13377,38,1,16,-6701,-12,1UL,7995,-97},{110,-10579,82,0,-11,-2870,-19,0x97926273313FE8E4LL,-20506,-2},{-625,-13377,38,1,16,-6701,-12,1UL,7995,-97},{250,13486,114,1,10,5275,25,0xC5D9F6118C9BD562LL,-20661,74},{250,13486,114,1,10,5275,25,0xC5D9F6118C9BD562LL,-20661,74}};
                int8_t l_1204 = 4L;
                int32_t *l_1216 = &g_143[0];
                struct S3 *l_1219 = &g_39;
                int i, j, k;
                if ((((*g_715) , &g_754) == ((*l_1164) = (((safe_add_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((-6L), 255UL)), p_30)) <= (safe_sub_func_uint64_t_u_u((((safe_div_func_uint64_t_u_u((0x04C56C13L & ((*l_1042) |= (((++l_1148) & (((*l_1152) = l_1151) != ((*l_1159) = ((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((l_1157 != (void*)0), p_30)), l_1100.f4)) , (void*)0)))) | 0x07D7L))), g_599.f7)) == p_32.f0) >= p_30), 1UL))), p_32.f0)) | 0x80L) , l_1163[0]))))
                {
                    int32_t l_1169[6] = {0L,0L,0L,0L,0L,0L};
                    int64_t **l_1177 = &l_1176[2][0][0];
                    struct S4 *****l_1183[7] = {&l_1182,&l_1182,&l_1182,&l_1182,&l_1182,&l_1182,&l_1182};
                    int8_t l_1199 = 8L;
                    uint32_t l_1211[5][2] = {{0x9CBC90EBL,0xBE419500L},{4294967287UL,0xA4608D03L},{0xBE419500L,0xA4608D03L},{4294967287UL,0xBE419500L},{0x9CBC90EBL,0x9CBC90EBL}};
                    int i, j;
                    if ((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((0x09EEE2BDL & l_1169[4]), p_30)), 0x51AEL)))
                    {
                        (**g_86) = (p_29 = (void*)0);
                    }
                    else
                    {
                        int32_t l_1170 = 0x523A747DL;
                        if (l_1170)
                            break;
                    }
                    if ((safe_rshift_func_int16_t_s_u(p_32.f1, (safe_sub_func_int16_t_s_s((l_1169[4] && (((l_1175 , (((*g_841) != ((*l_1177) = l_1176[2][0][0])) >= (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((g_1184 = l_1182) != l_1182), p_30)), (safe_div_func_int16_t_s_s(((*l_1157) = l_1169[3]), (-1L))))))) & l_1169[4]) | (-6L))), p_32.f1)))))
                    {
                        struct S2 **l_1189 = (void*)0;
                        int32_t l_1192 = 0x756FB37FL;
                        int32_t l_1193 = 5L;
                        int16_t l_1198 = 0x2F9FL;
                        int32_t l_1200 = (-1L);
                        int32_t l_1201 = 0x7A2D3AB8L;
                        int32_t l_1202[1];
                        int32_t l_1203 = 0L;
                        uint16_t l_1205 = 65527UL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1202[i] = 0xC81AC5C9L;
                        g_1190[2][0] = (l_1187[4] , l_1188[0]);
                        l_1194++;
                        if (l_1197[5][1])
                            continue;
                        --l_1205;
                    }
                    else
                    {
                        l_1187[4].f4 = ((*l_1041) = 0xEA3F29C9L);
                        return &g_39;
                    }
                    if (((***g_377) >= 0x4355F86CL))
                    {
                        l_1208++;
                        (**l_1088) = (**l_1088);
                        l_1211[1][1]--;
                        (**g_86) = &l_1046;
                    }
                    else
                    {
                        struct S2 l_1214 = {-12324,9,152,462,932,0};
                        (*l_1041) = (0x30B7C0AC927A349FLL <= (l_1214 , (***g_840)));
                        if (p_32.f1)
                            break;
                        (*l_1089) = (**l_1088);
                    }
                    (**l_1088) = l_1032;
                }
                else
                {
                    l_1216 = func_33((l_1215 , &l_1039), (((void*)0 == (*g_323)) , &g_39));
                    for (g_209.f7 = 18; (g_209.f7 == 19); g_209.f7 = safe_add_func_uint8_t_u_u(g_209.f7, 1))
                    {
                        uint8_t ** const *l_1223 = &l_1102[0][6];
                        uint8_t ** const * const *l_1222 = &l_1223;
                        (**g_86) = func_33(&l_1143[0][4], l_1219);
                        (*l_1216) |= (l_1220 != l_1222);
                    }
                    for (l_1142 = 0; l_1142 < 4; l_1142 += 1)
                    {
                        for (l_1039 = 0; l_1039 < 7; l_1039 += 1)
                        {
                            for (g_170 = 0; g_170 < 9; g_170 += 1)
                            {
                                g_88[l_1142][l_1039][g_170] = &l_1046;
                            }
                        }
                    }
                    l_1040 = func_33(((*g_87) = &l_1140), l_1224);
                }
                (**g_86) = l_1225;
                (*l_1216) ^= l_1100.f3;
                for (l_1039 = 0; (l_1039 <= 0); l_1039 += 1)
                {
                    uint32_t l_1252 = 4294967295UL;
                    struct S2 **l_1261[5][9] = {{&g_1190[2][0],&g_1190[4][0],(void*)0,(void*)0,&l_1188[3],&l_1188[3],(void*)0,(void*)0,&g_1190[4][0]},{(void*)0,&l_1188[0],(void*)0,&g_1190[5][0],&l_1188[0],&g_1190[4][0],&g_1190[2][0],(void*)0,(void*)0},{&g_1190[2][0],&l_1188[3],&g_1190[4][0],&g_1190[5][0],&g_1190[4][0],&l_1188[3],&g_1190[2][0],&g_1190[4][0],(void*)0},{&l_1188[4],&l_1188[0],&l_1188[3],(void*)0,&g_1190[4][0],&l_1188[3],&g_1190[2][0],&l_1188[3],&g_1190[4][0]},{&l_1188[4],&g_1190[4][0],&g_1190[4][0],&l_1188[4],&l_1188[0],&l_1188[3],(void*)0,&g_1190[4][0],&l_1188[3]}};
                    struct S2 ***l_1260[2][8][8] = {{{&l_1261[0][8],&l_1261[1][0],(void*)0,&l_1261[1][0],&l_1261[0][8],&l_1261[2][7],&l_1261[0][8],&l_1261[2][5]},{(void*)0,&l_1261[2][8],&l_1261[1][0],&l_1261[4][7],&l_1261[0][8],&l_1261[0][8],&l_1261[4][7],&l_1261[1][0]},{&l_1261[2][5],&l_1261[2][5],&l_1261[1][0],&l_1261[0][8],(void*)0,&l_1261[0][8],&l_1261[0][8],(void*)0},{&l_1261[0][8],&l_1261[0][8],(void*)0,&l_1261[2][5],(void*)0,&l_1261[0][8],&l_1261[0][8],(void*)0},{&l_1261[0][8],&l_1261[0][8],(void*)0,&l_1261[0][8],&l_1261[1][0],&l_1261[2][5],&l_1261[2][5],&l_1261[1][0]},{&l_1261[4][7],&l_1261[0][8],&l_1261[0][8],&l_1261[4][7],&l_1261[1][0],&l_1261[2][8],(void*)0,&l_1261[2][5]},{&l_1261[0][8],&l_1261[2][7],&l_1261[0][8],&l_1261[1][0],(void*)0,&l_1261[1][0],&l_1261[0][8],&l_1261[2][7]},{&l_1261[0][8],&l_1261[2][7],&l_1261[2][5],&l_1261[0][8],(void*)0,&l_1261[2][8],&l_1261[0][8],&l_1261[0][8]}},{{&l_1261[2][5],&l_1261[0][8],&l_1261[0][8],&l_1261[0][8],&l_1261[0][8],&l_1261[2][5],&l_1261[0][8],(void*)0},{(void*)0,&l_1261[0][8],&l_1261[2][5],&l_1261[2][8],&l_1261[0][8],&l_1261[0][8],&l_1261[0][8],&l_1261[2][8]},{&l_1261[0][8],&l_1261[0][8],&l_1261[0][8],&l_1261[2][8],&l_1261[2][5],&l_1261[0][8],(void*)0,(void*)0},{&l_1261[0][8],&l_1261[2][5],&l_1261[0][8],&l_1261[0][8],&l_1261[0][8],&l_1261[0][8],&l_1261[2][5],&l_1261[0][8]},{&l_1261[0][8],&l_1261[2][8],(void*)0,&l_1261[0][8],&l_1261[2][5],&l_1261[2][7],&l_1261[0][8],&l_1261[2][7]},{&l_1261[0][8],&l_1261[1][0],(void*)0,&l_1261[1][0],&l_1261[0][8],&l_1261[2][7],&l_1261[0][8],&l_1261[2][5]},{(void*)0,&l_1261[2][8],&l_1261[1][0],&l_1261[4][7],&l_1261[0][8],&l_1261[0][8],&l_1261[4][7],&l_1261[1][0]},{&l_1261[2][5],&l_1261[2][5],&l_1261[1][0],&l_1261[0][8],(void*)0,&l_1261[0][8],&l_1261[0][8],(void*)0}}};
                    int i, j, k;
                    for (g_2 = 0; (g_2 <= 0); g_2 += 1)
                    {
                        int8_t *l_1235 = (void*)0;
                        int8_t *l_1236 = &l_1147;
                        int32_t * const ***l_1239 = &l_1237;
                        int8_t *l_1245 = &g_225[0][5];
                        struct S2 * const ***l_1249 = &l_1247;
                        (*l_1041) |= ((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((void*)0 == l_1230[7]) < p_32.f1), ((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_1245) = ((((*l_1236) = p_30) < (&g_87 == ((*l_1239) = l_1237))) < (~((0x10E6AE57AF4C4D2CLL ^ (safe_rshift_func_int16_t_s_u(g_209.f7, (safe_lshift_func_int8_t_s_s(p_31, 0))))) ^ p_31)))), l_1246[0][2][0])), p_32.f0)) < p_32.f0))), p_32.f0)) < p_32.f1);
                        (*l_1249) = l_1247;
                    }
                    for (g_209.f1 = 2; (g_209.f1 >= 0); g_209.f1 -= 1)
                    {
                        int32_t l_1250 = 0xC82CF65EL;
                        int32_t l_1251 = (-1L);
                        int i, j, k;
                        l_1252--;
                        (*l_1225) &= ((g_39 , (safe_mul_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(((((*g_377) = (*g_377)) != (void*)0) , (0x91L && ((safe_unary_minus_func_uint64_t_u(((l_1050[g_209.f1][(l_1039 + 8)][l_1039] & 0x7FL) > 0x81L))) == (-1L)))), l_1252)) >= l_1252) == 4294967295UL), (*l_1216)))) == p_31);
                    }
                    (*l_1041) ^= (((*g_324) = (l_1260[0][2][7] != g_1262)) && (*l_1216));
                }
            }
        }
        l_1280 = (((((((((safe_mod_func_uint8_t_u_u((--(*l_1265)), ((+(safe_mod_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(((g_305.f7 &= p_30) == (p_32.f0 || ((!p_30) ^ p_30))), (((*l_1089) , 0xD9L) ^ (((g_225[1][0] & (((void*)0 == &p_30) ^ p_32.f1)) && 0L) || p_30)))) , l_1275[0][4]) == &l_1089), (-6L)))) ^ 0x80L))) || l_1277) == g_599.f0) == (*l_1041)) , l_1278) == (void*)0) == l_1279) ^ (*l_1042)) , &g_1191);
    }
    g_1283 = ((*l_1282) = &p_31);
    return &g_39;
}







static int32_t * func_33(int32_t * p_34, struct S3 * p_35)
{
    struct S1 l_1016[2] = {{0x9F51L,-1L,1L,3,7,1L,3,3UL},{0x9F51L,-1L,1L,3,7,1L,3,3UL}};
    struct S1 **l_1017 = &g_1015;
    int32_t *l_1018[9][8] = {{&g_143[0],&g_114,&g_143[0],&g_143[0],&g_5[4],&g_5[1],(void*)0,&g_5[1]},{(void*)0,&g_5[4],&g_143[0],&g_5[4],(void*)0,&g_114,&g_114,&g_5[1]},{&g_5[4],&g_5[4],(void*)0,&g_143[0],&g_143[0],(void*)0,&g_5[4],&g_5[4]},{&g_143[0],&g_114,(void*)0,&g_5[4],&g_114,(void*)0,&g_114,&g_5[4]},{&g_143[0],&g_114,&g_143[0],&g_5[1],&g_5[4],(void*)0,(void*)0,(void*)0},{(void*)0,&g_114,&g_143[0],&g_143[0],&g_114,(void*)0,&g_5[4],&g_114},{(void*)0,&g_5[4],&g_5[4],&g_114,&g_5[4],&g_114,&g_5[4],&g_5[4]},{&g_143[0],&g_5[4],(void*)0,&g_114,&g_114,&g_5[1],&g_5[1],&g_114},{&g_143[0],&g_114,&g_114,&g_143[0],&g_143[0],&g_5[4],&g_5[1],(void*)0}};
    int8_t l_1019[8] = {(-5L),(-1L),(-5L),(-5L),(-1L),(-5L),(-5L),(-1L)};
    int32_t l_1020 = 0x23B55B44L;
    uint32_t l_1024 = 0x0083890CL;
    int i, j;
    l_1019[3] &= (g_1014 == (l_1016[0] , l_1017));
    l_1020 = (*g_480);
    for (g_305.f7 = 20; (g_305.f7 >= 9); g_305.f7--)
    {
        int32_t l_1023[6] = {0x5AD355EFL,0x5AD355EFL,0x5AD355EFL,0x5AD355EFL,0x5AD355EFL,0x5AD355EFL};
        int i;
        l_1024 &= l_1023[5];
    }
    return p_34;
}







static uint8_t func_46(const int32_t * p_47, uint8_t p_48, int16_t p_49, struct S3 * const p_50, int32_t * p_51)
{
    int64_t l_1011 = (-1L);
    int32_t l_1012 = 0xF1D89FEAL;
    l_1012 = (func_57(p_49) & (65535UL | (((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(0x0EL, (safe_add_func_int64_t_s_s((((safe_mod_func_uint16_t_u_u((((*g_480) | ((((void*)0 == p_47) , l_1011) , 0x2CFEA8D0L)) <= 0x014DC2677E21977CLL), (-10L))) | l_1011) , l_1011), p_48)))) , p_48), p_49)) == p_49) , 65532UL)));
    return p_48;
}







static uint8_t func_57(uint32_t p_58)
{
    int32_t l_59 = (-6L);
    int32_t *l_78 = &g_5[4];
    int32_t **l_77 = &l_78;
    struct S4 *l_654[3][1];
    const uint32_t **l_700 = (void*)0;
    uint32_t *l_733[6][7][6] = {{{&g_337[1],&g_337[1],&g_337[1],&g_337[1],&g_337[1],&g_337[2]},{&g_337[1],&g_337[1],&g_337[2],(void*)0,&g_337[1],&g_337[2]},{&g_337[1],(void*)0,&g_337[1],(void*)0,&g_337[1],(void*)0},{(void*)0,&g_337[1],&g_337[1],(void*)0,&g_337[1],&g_337[1]},{&g_337[1],&g_337[1],&g_337[1],(void*)0,(void*)0,(void*)0},{&g_337[1],&g_337[1],&g_337[1],&g_337[1],&g_337[1],&g_337[2]},{&g_337[1],&g_337[1],&g_337[2],(void*)0,&g_337[1],&g_337[2]}},{{&g_337[1],(void*)0,&g_337[1],(void*)0,&g_337[1],(void*)0},{(void*)0,&g_337[1],&g_337[1],(void*)0,&g_337[1],&g_337[1]},{&g_337[1],&g_337[1],&g_337[1],(void*)0,(void*)0,(void*)0},{&g_337[1],&g_337[1],&g_337[1],&g_337[1],&g_337[1],&g_337[2]},{&g_337[1],&g_337[1],&g_337[2],(void*)0,&g_337[1],&g_337[2]},{&g_337[1],(void*)0,&g_337[1],(void*)0,&g_337[1],(void*)0},{(void*)0,&g_337[1],&g_337[1],(void*)0,&g_337[1],&g_337[1]}},{{&g_337[1],&g_337[1],&g_337[1],(void*)0,(void*)0,(void*)0},{&g_337[1],&g_337[1],&g_337[1],&g_337[1],&g_337[1],&g_337[2]},{&g_337[1],&g_337[1],&g_337[2],(void*)0,&g_337[1],&g_337[2]},{&g_337[1],(void*)0,&g_337[1],(void*)0,(void*)0,&g_337[1]},{&g_337[2],(void*)0,(void*)0,&g_337[1],(void*)0,(void*)0},{&g_337[1],(void*)0,(void*)0,&g_337[2],&g_337[1],&g_337[1]},{&g_337[1],(void*)0,(void*)0,&g_337[1],(void*)0,(void*)0}},{{&g_337[1],(void*)0,(void*)0,&g_337[2],(void*)0,(void*)0},{&g_337[1],&g_337[1],(void*)0,&g_337[1],(void*)0,&g_337[1]},{&g_337[2],(void*)0,(void*)0,&g_337[1],(void*)0,(void*)0},{&g_337[1],(void*)0,(void*)0,&g_337[2],&g_337[1],&g_337[1]},{&g_337[1],(void*)0,(void*)0,&g_337[1],(void*)0,(void*)0},{&g_337[1],(void*)0,(void*)0,&g_337[2],(void*)0,(void*)0},{&g_337[1],&g_337[1],(void*)0,&g_337[1],(void*)0,&g_337[1]}},{{&g_337[2],(void*)0,(void*)0,&g_337[1],(void*)0,(void*)0},{&g_337[1],(void*)0,(void*)0,&g_337[2],&g_337[1],&g_337[1]},{&g_337[1],(void*)0,(void*)0,&g_337[1],(void*)0,(void*)0},{&g_337[1],(void*)0,(void*)0,&g_337[2],(void*)0,(void*)0},{&g_337[1],&g_337[1],(void*)0,&g_337[1],(void*)0,&g_337[1]},{&g_337[2],(void*)0,(void*)0,&g_337[1],(void*)0,(void*)0},{&g_337[1],(void*)0,(void*)0,&g_337[2],&g_337[1],&g_337[1]}},{{&g_337[1],(void*)0,(void*)0,&g_337[1],(void*)0,(void*)0},{&g_337[1],(void*)0,(void*)0,&g_337[2],(void*)0,(void*)0},{&g_337[1],&g_337[1],(void*)0,&g_337[1],(void*)0,&g_337[1]},{&g_337[2],(void*)0,(void*)0,&g_337[1],(void*)0,(void*)0},{&g_337[1],(void*)0,(void*)0,&g_337[2],&g_337[1],&g_337[1]},{&g_337[1],(void*)0,(void*)0,&g_337[1],(void*)0,(void*)0},{&g_337[1],(void*)0,(void*)0,&g_337[2],(void*)0,(void*)0}}};
    uint32_t **l_750 = (void*)0;
    int32_t l_759 = (-1L);
    int8_t l_760 = 0L;
    int32_t l_761 = 0x72C9A985L;
    int32_t l_762 = 3L;
    int32_t l_763 = 0x710B3B47L;
    int32_t l_764 = 0xD8C93F5BL;
    int32_t l_766 = (-1L);
    int32_t l_770 = 4L;
    int32_t l_771 = 0L;
    int32_t l_772[9] = {0x3E1E88A2L,0x3E1E88A2L,0x3E1E88A2L,0x3E1E88A2L,0x3E1E88A2L,0x3E1E88A2L,0x3E1E88A2L,0x3E1E88A2L,0x3E1E88A2L};
    int64_t *l_818 = &g_141;
    int64_t **l_817 = &l_818;
    uint8_t *l_862 = &g_188[0];
    struct S1 l_871[8] = {{0x0D63L,0xF68241A5L,-8L,-14,3,4L,2,0x7D595CA2B17705A8LL},{0xA515L,-6L,0xE6ACABDFAEC9B345LL,7,7,-1L,30,0UL},{0xA515L,-6L,0xE6ACABDFAEC9B345LL,7,7,-1L,30,0UL},{0x0D63L,0xF68241A5L,-8L,-14,3,4L,2,0x7D595CA2B17705A8LL},{0xA515L,-6L,0xE6ACABDFAEC9B345LL,7,7,-1L,30,0UL},{0xA515L,-6L,0xE6ACABDFAEC9B345LL,7,7,-1L,30,0UL},{0x0D63L,0xF68241A5L,-8L,-14,3,4L,2,0x7D595CA2B17705A8LL},{0xA515L,-6L,0xE6ACABDFAEC9B345LL,7,7,-1L,30,0UL}};
    uint8_t **l_1001 = &l_862;
    uint8_t ***l_1000 = &l_1001;
    uint8_t ****l_999 = &l_1000;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_654[i][j] = &g_655;
    }
    if (((l_59 ^ p_58) < g_54))
    {
        int8_t l_64 = (-1L);
        struct S3 *l_76[3][3] = {{&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39}};
        int32_t ***l_79 = &l_77;
        struct S1 l_80 = {1L,0x677A3B2FL,-1L,6,0,0L,2,0x5AD7CBC17640197FLL};
        int16_t *l_91 = &g_92;
        int32_t *l_481 = &g_5[4];
        int i, j;
        for (l_59 = 0; (l_59 < (-24)); l_59 = safe_sub_func_uint16_t_u_u(l_59, 9))
        {
            int32_t *l_62 = &g_63;
            if (p_58)
                break;
            l_64 = ((*l_62) = 0xE5F3778AL);
        }
        (*g_87) = func_65((g_305.f7 = ((func_71(l_76[2][0], ((*l_79) = l_77), l_80, (((safe_rshift_func_int8_t_s_s((((*l_78) ^ ((safe_rshift_func_uint16_t_u_u((+g_63), (l_79 != g_86))) > ((*l_91) = (safe_mod_func_uint8_t_u_u(((-1L) & (*l_78)), g_39.f2))))) , g_39.f2), p_58)) , 1UL) , &l_78)) < (-1L)) , 0UL)), l_481, l_481, g_254, p_58);
    }
    else
    {
        struct S4 **l_656 = &l_654[0][0];
        int32_t l_663[4][4][10] = {{{0L,(-1L),7L,0L,1L,0xDB1200A4L,1L,1L,0xBB51997BL,0x1FB0AE83L},{1L,0xF2436431L,0x9F6013ADL,0L,0xCC0B53C1L,0xA9ED1030L,0x1261FABBL,0xA9ED1030L,0xCC0B53C1L,0x422CC811L},{0xBB51997BL,0x7786BAC0L,0xBB51997BL,0x67ABBB9EL,0xCC0B53C1L,1L,0xFD1B0E72L,0x73E01E53L,1L,(-1L)},{0xF2436431L,0xA9ED1030L,1L,0xF2436431L,0x422CC811L,0x1FB0AE83L,0L,0x73E01E53L,(-1L),0x758CFD21L}},{{(-1L),(-1L),0xBB51997BL,(-6L),1L,4L,0xA9ED1030L,0x67ABBB9EL,0x67ABBB9EL,0xA9ED1030L},{0xFD1B0E72L,0x9F6013ADL,0xC7B02F87L,0xC7B02F87L,0x9F6013ADL,0xFD1B0E72L,(-1L),0xA9ED1030L,1L,0xDB1200A4L},{(-6L),0xF2436431L,0x1261FABBL,0L,(-1L),1L,(-6L),0xCC0B53C1L,0x1FB0AE83L,0x758CFD21L},{(-6L),7L,0xFD1B0E72L,0x422CC811L,0xBB51997BL,0xFD1B0E72L,0x758CFD21L,(-1L),4L,0xCC0B53C1L}},{{0xFD1B0E72L,0x758CFD21L,(-1L),4L,0xCC0B53C1L,4L,(-1L),0x758CFD21L,0xFD1B0E72L,0xBB51997BL},{(-1L),0xF2436431L,(-1L),0xCC0B53C1L,0x758CFD21L,0x1FB0AE83L,0xCC0B53C1L,(-6L),1L,(-1L)},{0xF2436431L,4L,0xFD1B0E72L,0xCC0B53C1L,0xDB1200A4L,1L,0xA9ED1030L,(-1L),0xFD1B0E72L,0x9F6013ADL},{0xBB51997BL,(-6L),1L,4L,0xA9ED1030L,0x67ABBB9EL,0x67ABBB9EL,0xA9ED1030L,4L,1L}},{{0xA9ED1030L,0xA9ED1030L,1L,0x422CC811L,0x758CFD21L,(-1L),0x73E01E53L,0L,0x1FB0AE83L,0x422CC811L},{0x422CC811L,0x50387A4FL,0xBB51997BL,0L,(-1L),1L,0x73E01E53L,0xFD1B0E72L,1L,0xCC0B53C1L},{0xC7B02F87L,0xA9ED1030L,0xDB1200A4L,0xC7B02F87L,0x422CC811L,7L,0x67ABBB9EL,0x73E01E53L,0x67ABBB9EL,7L},{(-1L),(-6L),0L,(-6L),(-1L),0xCEEF6A60L,0xA9ED1030L,0L,(-1L),0xA9ED1030L}}};
        uint32_t ****l_685 = &g_377;
        struct S2 l_686 = {14216,31,74,274,219,0};
        uint16_t *l_694 = (void*)0;
        uint16_t *l_695 = &g_138;
        uint8_t *l_703 = (void*)0;
        uint8_t *l_704 = &g_188[0];
        struct S1 l_711 = {0xE047L,0x022C0018L,0xB60F0EAC689A91ECLL,2,0,0x136AL,13,0xD72B639BF6571E94LL};
        int32_t ****l_712 = (void*)0;
        int32_t ****l_713 = &g_86;
        uint64_t l_716 = 0xCEB85D5EF7A9DDDCLL;
        int8_t *l_717 = &g_170;
        uint32_t l_718 = 18446744073709551608UL;
        uint16_t l_755[8][6][5] = {{{0xE906L,2UL,5UL,0x8566L,0x41FCL},{65528UL,1UL,2UL,65535UL,0x6353L},{5UL,1UL,0x31FDL,0x31FDL,1UL},{0x8456L,0x247FL,0xF608L,0xA211L,0x3369L},{1UL,65535UL,65535UL,0x41FCL,0x31FDL},{0x81C6L,0x7030L,0xEAB0L,2UL,1UL}},{{1UL,0xB089L,65535UL,2UL,0xDCC3L},{0x8456L,0x67A6L,0x72E2L,65527UL,0xA211L},{5UL,0xE906L,1UL,0xE906L,5UL},{65528UL,65527UL,65527UL,65528UL,65528UL},{0xB832L,1UL,0xDCC3L,1UL,5UL},{0x72E2L,0x12B7L,65531UL,0xD51BL,65528UL}},{{65534UL,1UL,1UL,65529UL,65535UL},{65528UL,0x6353L,65528UL,1UL,0x247FL},{65535UL,0xA61EL,0xA61EL,65535UL,0xE906L},{0xEAB0L,1UL,65527UL,2UL,0x12B7L},{5UL,0xEE5DL,0xB832L,65535UL,0UL},{1UL,0x72E2L,0x247FL,2UL,0x81C6L}},{{0xA61EL,1UL,5UL,65535UL,0xEE94L},{65527UL,0x81C6L,0xF608L,1UL,1UL},{0UL,0x31FDL,0UL,65529UL,0xB089L},{0x6353L,65527UL,0x72AFL,0xD51BL,0xA211L},{2UL,65535UL,0xB089L,1UL,0x0AE3L},{0x7030L,0xF608L,0x72AFL,0xA211L,0x8456L}},{{2UL,0xB089L,0UL,0xB832L,0x9211L},{65531UL,65527UL,0xF608L,0xEAB0L,0xF608L},{65529UL,65529UL,5UL,0xCCB3L,0xB273L},{2UL,0xA1E1L,0x247FL,0x6353L,0x67A6L},{1UL,1UL,0xB832L,0xB089L,0x8566L},{0x81C6L,0xA1E1L,65527UL,0x247FL,0xE19DL}},{{65531UL,65529UL,0xA61EL,0UL,2UL},{65527UL,65527UL,65528UL,65528UL,65527UL},{0x0AE3L,0xB089L,1UL,0x41FCL,0xB832L},{0x12B7L,0xF608L,65531UL,0xE19DL,65528UL},{0xB273L,65535UL,0xDCC3L,0xA61EL,0xEE5DL},{0x12B7L,65527UL,0xEAB0L,0xA1E1L,0x3369L}},{{0x0AE3L,0x31FDL,0xEE94L,2UL,0x41FCL},{65527UL,0x81C6L,65527UL,0x81C6L,65527UL},{65531UL,1UL,2UL,0x8566L,65529UL},{0x81C6L,0x72E2L,65535UL,1UL,0x7030L},{1UL,0xEE5DL,65535UL,1UL,65529UL},{2UL,1UL,1UL,65528UL,65527UL}},{{65529UL,0xA61EL,0UL,2UL,0x41FCL},{65531UL,0x6353L,0x6353L,65531UL,0x3369L},{2UL,1UL,65535UL,65534UL,0xEE5DL},{0x7030L,0x12B7L,0x81C6L,0x72AFL,65528UL},{2UL,1UL,0x41FCL,65534UL,0xB832L},{0x6353L,0xD51BL,0x7030L,65531UL,65527UL}}};
        int16_t l_795 = 1L;
        uint32_t l_805 = 18446744073709551612UL;
        struct S4 ***l_859[8][8][2];
        struct S4 ****l_858 = &l_859[7][0][0];
        const int64_t *l_868 = &g_141;
        const int64_t **l_867 = &l_868;
        const int64_t ***l_866 = &l_867;
        uint8_t l_970 = 0UL;
        int i, j, k;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                for (k = 0; k < 2; k++)
                    l_859[i][j][k] = (void*)0;
            }
        }
        (*l_656) = l_654[1][0];
        for (g_209.f0 = 20; (g_209.f0 <= (-16)); --g_209.f0)
        {
            for (g_562 = 0; (g_562 < 46); g_562 = safe_add_func_uint8_t_u_u(g_562, 4))
            {
                uint32_t l_664[4][7][8] = {{{0x230E7A43L,1UL,1UL,1UL,18446744073709551615UL,0xC8286235L,0xD89BA8AEL,0xA4A2FAD7L},{0UL,0x81EC597AL,1UL,0x9F84E26EL,0xA4A2FAD7L,0UL,0xD89BA8AEL,18446744073709551612UL},{0UL,0x17DB86CEL,1UL,0xD4B5DE25L,0UL,0UL,0x871E28D2L,0x1BF10860L},{0x9F84E26EL,0x81EC597AL,0x8396F276L,0UL,0UL,0xC8286235L,0xC8286235L,0UL},{0UL,1UL,1UL,0UL,0xA4A2FAD7L,1UL,2UL,0x1BF10860L},{0UL,1UL,1UL,0xD4B5DE25L,18446744073709551615UL,0x871E28D2L,0xC8286235L,18446744073709551612UL},{0x230E7A43L,1UL,0x8396F276L,0x9F84E26EL,3UL,1UL,0x871E28D2L,0xA4A2FAD7L}},{{0x230E7A43L,1UL,1UL,1UL,18446744073709551615UL,0xC8286235L,0xD89BA8AEL,0xA4A2FAD7L},{0UL,0x81EC597AL,1UL,0x9F84E26EL,0xA4A2FAD7L,0UL,0xD89BA8AEL,18446744073709551612UL},{0UL,0x17DB86CEL,1UL,0xD4B5DE25L,0UL,0UL,0x871E28D2L,0x1BF10860L},{0x9F84E26EL,0x81EC597AL,0x8396F276L,0UL,0UL,0xC8286235L,0xC8286235L,0UL},{0UL,1UL,1UL,0UL,0xA4A2FAD7L,1UL,2UL,0x1BF10860L},{0UL,1UL,1UL,0xD4B5DE25L,18446744073709551615UL,0x871E28D2L,0xC8286235L,18446744073709551612UL},{0x230E7A43L,1UL,0x8396F276L,0x9F84E26EL,3UL,1UL,0x871E28D2L,0xA4A2FAD7L}},{{0x230E7A43L,1UL,1UL,1UL,18446744073709551615UL,0xC8286235L,0xD89BA8AEL,0xA4A2FAD7L},{0UL,0x81EC597AL,1UL,0x9F84E26EL,0xA4A2FAD7L,0UL,0xD89BA8AEL,18446744073709551612UL},{0UL,0x17DB86CEL,1UL,0xD4B5DE25L,0UL,0UL,0x871E28D2L,0x1BF10860L},{0x9F84E26EL,0x81EC597AL,0x8396F276L,0UL,0UL,0xC8286235L,0xC8286235L,0UL},{0UL,1UL,1UL,0UL,0xA4A2FAD7L,1UL,2UL,0x1BF10860L},{0UL,1UL,1UL,0xD4B5DE25L,18446744073709551615UL,0x871E28D2L,0xC8286235L,18446744073709551612UL},{0x230E7A43L,1UL,0x8396F276L,0x9F84E26EL,3UL,1UL,0x871E28D2L,0xA4A2FAD7L}},{{0x230E7A43L,1UL,1UL,1UL,18446744073709551615UL,0xC8286235L,0xD89BA8AEL,0xA4A2FAD7L},{0UL,0x81EC597AL,1UL,0x9F84E26EL,0xA4A2FAD7L,0UL,0xD89BA8AEL,18446744073709551612UL},{0UL,0x17DB86CEL,1UL,0xD4B5DE25L,0UL,0UL,0x871E28D2L,18446744073709551612UL},{0xD4B5DE25L,1UL,1UL,0UL,0x0111ACF1L,0x871E28D2L,0x871E28D2L,0x0111ACF1L},{0UL,0x17DB86CEL,0x17DB86CEL,0UL,3UL,0xC8286235L,0x973AEEB2L,18446744073709551612UL},{0x9F84E26EL,1UL,0x17DB86CEL,1UL,0xA4A2FAD7L,2UL,0x871E28D2L,0UL},{18446744073709551612UL,1UL,1UL,0xD4B5DE25L,0x1BF10860L,0xC8286235L,2UL,3UL}}};
                uint32_t *l_689 = &g_562;
                uint32_t **l_688[2];
                int32_t l_690 = 0x85C84626L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_688[i] = &l_689;
                for (g_174 = 1; (g_174 >= 0); g_174 -= 1)
                {
                    int32_t l_661 = (-7L);
                    int32_t *l_662[4][7] = {{&g_143[0],&g_143[0],(void*)0,&g_143[0],&g_143[0],&g_143[g_174],&g_143[0]},{(void*)0,&g_143[0],&g_143[1],&l_59,&g_143[0],&g_143[0],&g_143[0]},{&l_661,&g_143[g_174],&g_143[g_174],&l_661,&g_143[0],&l_59,(void*)0},{(void*)0,&l_59,&g_143[0],&l_661,&g_143[g_174],&g_143[g_174],&l_661}};
                    int i, j;
                    --l_664[1][3][0];
                    for (g_209.f1 = 1; (g_209.f1 >= 0); g_209.f1 -= 1)
                    {
                        int64_t **l_669 = (void*)0;
                        int64_t *l_671 = &g_141;
                        int64_t **l_670 = &l_671;
                        int32_t l_672 = (-2L);
                        struct S1 l_676 = {0xDF38L,-1L,0x092469FE41072CFBLL,15,7,0x2D99L,14,18446744073709551614UL};
                        uint16_t l_687[9] = {0xDD9CL,0xDD9CL,0xDD9CL,0xDD9CL,0xDD9CL,0xDD9CL,0xDD9CL,0xDD9CL,0xDD9CL};
                        int i;
                        l_672 ^= (safe_mod_func_uint64_t_u_u((&g_141 != ((*l_670) = (void*)0)), 18446744073709551614UL));
                        (*g_509) &= (l_672 = 0xFE4556CAL);
                        l_663[1][1][7] = (((g_143[g_209.f1] == g_143[g_174]) || (g_143[g_209.f1] <= (((*g_509) = (safe_div_func_uint64_t_u_u((~((l_676 , (safe_rshift_func_int16_t_s_u((((1L || ((safe_add_func_int16_t_s_s((((**l_656) , l_663[1][3][9]) && (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((l_685 == (((l_686 , p_58) && 4294967290UL) , &g_377)) > l_664[0][0][3]), (*l_78))), p_58))), p_58)) | g_5[4])) , p_58) || 0x13L), 12))) || l_687[6])), l_663[1][2][0]))) <= (***g_377)))) <= p_58);
                    }
                    l_690 = ((void*)0 != l_688[0]);
                }
                (*g_509) = p_58;
                (*l_77) = (*l_77);
            }
        }
        if (((*g_509) = (safe_mul_func_uint8_t_u_u((+((*l_695)--)), (safe_div_func_uint16_t_u_u((((l_718 = ((**l_77) || ((&g_450 == l_700) | ((*l_717) = (safe_div_func_uint8_t_u_u(((*l_704)++), (safe_mod_func_int64_t_s_s(((((((l_711 , ((*l_713) = &g_87)) != &l_77) != (l_656 == g_714[2][6])) != (((**g_378) ^= p_58) ^ l_716)) | p_58) != p_58), p_58)))))))) >= 0x493AL) , (*l_78)), g_209.f7))))))
        {
            const struct S2 l_719 = {25508,23,85,502,792,0};
            uint32_t l_725 = 4294967295UL;
            uint32_t *l_732 = &g_337[1];
            uint32_t **l_734 = &l_732;
            struct S3 * const l_738 = (void*)0;
            struct S0 l_739 = {388,-11946,41,0,-17,15174,-8,0xC60B9E8881BDF6C2LL,1967,-58};
            int32_t l_765 = 0x0B3311BCL;
            int16_t l_767 = 0x51D2L;
            int32_t l_768 = (-3L);
            int32_t l_769[2][8][4] = {{{0x4D06BC2AL,0xA0E3D174L,0L,0L},{(-2L),(-2L),0xD96334C2L,0xA0E3D174L},{0xA0E3D174L,0x4D06BC2AL,0xD96334C2L,0x4D06BC2AL},{(-2L),(-1L),0L,0xD96334C2L},{0x4D06BC2AL,(-1L),(-1L),0x4D06BC2AL},{(-1L),0x4D06BC2AL,(-2L),0xA0E3D174L},{(-1L),(-2L),(-1L),0L},{0x4D06BC2AL,0xA0E3D174L,0L,0L}},{{(-2L),(-2L),0xD96334C2L,0xA0E3D174L},{0xA0E3D174L,0x4D06BC2AL,0xD96334C2L,0x4D06BC2AL},{(-2L),(-1L),0L,0xD96334C2L},{0x4D06BC2AL,(-1L),(-1L),0x4D06BC2AL},{(-1L),0x4D06BC2AL,(-2L),0xA0E3D174L},{(-1L),(-2L),(-1L),0L},{0x4D06BC2AL,0xA0E3D174L,0L,0L},{(-2L),(-2L),0xD96334C2L,0xA0E3D174L}}};
            int32_t ***l_786 = &g_87;
            uint16_t l_787 = 65527UL;
            uint32_t l_839 = 1UL;
            const uint32_t l_877 = 0x6236E5D2L;
            uint32_t **l_903[9][3][8] = {{{&g_324,&g_324,(void*)0,&g_324,&g_324,&g_324,&g_324,&g_324},{&g_324,(void*)0,&g_324,&g_324,(void*)0,&g_324,&g_324,&g_324},{&g_324,&g_324,(void*)0,&g_324,(void*)0,&g_324,&g_324,&g_324}},{{&g_324,&g_324,&g_324,&g_324,&g_324,&g_324,&g_324,&g_324},{&g_324,&g_324,&g_324,&g_324,&g_324,&g_324,(void*)0,&g_324},{(void*)0,&g_324,&g_324,&g_324,&g_324,(void*)0,&g_324,&g_324}},{{&g_324,(void*)0,&g_324,&g_324,&g_324,(void*)0,(void*)0,&g_324},{(void*)0,&g_324,&g_324,&g_324,&g_324,&g_324,&g_324,&g_324},{&g_324,&g_324,(void*)0,(void*)0,&g_324,&g_324,&g_324,&g_324}},{{&g_324,&g_324,&g_324,(void*)0,(void*)0,&g_324,&g_324,&g_324},{&g_324,&g_324,&g_324,&g_324,&g_324,(void*)0,&g_324,(void*)0},{&g_324,&g_324,(void*)0,&g_324,&g_324,(void*)0,(void*)0,&g_324}},{{(void*)0,&g_324,&g_324,&g_324,&g_324,&g_324,(void*)0,&g_324},{&g_324,(void*)0,&g_324,(void*)0,&g_324,&g_324,(void*)0,&g_324},{&g_324,&g_324,(void*)0,&g_324,&g_324,&g_324,&g_324,&g_324}},{{(void*)0,&g_324,&g_324,(void*)0,(void*)0,&g_324,&g_324,&g_324},{&g_324,&g_324,&g_324,&g_324,(void*)0,&g_324,&g_324,(void*)0},{&g_324,(void*)0,(void*)0,&g_324,&g_324,&g_324,&g_324,&g_324}},{{&g_324,&g_324,&g_324,(void*)0,&g_324,&g_324,&g_324,(void*)0},{&g_324,(void*)0,(void*)0,&g_324,&g_324,&g_324,&g_324,&g_324},{&g_324,&g_324,&g_324,(void*)0,&g_324,(void*)0,(void*)0,&g_324}},{{&g_324,&g_324,&g_324,&g_324,(void*)0,&g_324,&g_324,&g_324},{&g_324,(void*)0,&g_324,&g_324,&g_324,&g_324,&g_324,&g_324},{&g_324,(void*)0,&g_324,&g_324,&g_324,&g_324,&g_324,&g_324}},{{&g_324,&g_324,&g_324,&g_324,&g_324,(void*)0,&g_324,&g_324},{&g_324,&g_324,&g_324,&g_324,&g_324,&g_324,(void*)0,&g_324},{&g_324,(void*)0,&g_324,&g_324,(void*)0,&g_324,&g_324,&g_324}}};
            uint32_t **l_904 = &g_324;
            const int8_t l_971 = 0x28L;
            struct S4 ***l_974 = &l_656;
            const struct S4 l_976 = {599,20150};
            int i, j, k;
            (*g_509) = (l_719 , (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((((safe_mod_func_int8_t_s_s(((*g_87) == (*l_77)), (0x880AL || l_725))) & (safe_rshift_func_int16_t_s_u(l_719.f2, (safe_mul_func_uint8_t_u_u((&l_718 == (g_735 = ((*l_734) = (((*l_732) ^= (safe_mul_func_int16_t_s_s(0L, (((((((g_92 != g_217.f2) >= 9L) > g_54) ^ p_58) != p_58) ^ 18446744073709551609UL) == 1UL)))) , l_733[1][1][5])))), 0x03L))))) ^ (**l_77)))), g_39.f1)));
            for (l_711.f1 = 3; (l_711.f1 >= 0); l_711.f1 -= 1)
            {
                uint8_t **l_752 = &l_703;
                uint8_t ***l_751 = &l_752;
                int32_t l_756[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                uint32_t l_773 = 0xB5BA94AEL;
                int8_t l_794 = 0x96L;
                int8_t l_796 = 0L;
                uint16_t l_797 = 1UL;
                int64_t * const *l_820 = (void*)0;
                int i;
                if ((safe_add_func_uint32_t_u_u(((l_738 == (void*)0) >= ((l_739 , 2UL) && (safe_div_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((p_58 & ((safe_mod_func_uint32_t_u_u((((*l_717) |= (safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u(((((l_750 != (**l_685)) && (((p_58 > ((((*l_751) = &l_703) == g_753[5]) && 0xD547CE9517C91836LL)) != g_655.f0) & p_58)) > 0x3A76CA61D4374CFCLL) <= p_58), 11)) && l_755[6][3][0]), 11))) >= l_739.f0), (-2L))) <= p_58)), p_58)) <= (-4L)) , 65535UL), p_58)))), (*g_509))))
                {
                    int32_t *l_757 = &l_756[7];
                    int32_t *l_758[8] = {&l_756[3],&l_756[3],&l_756[3],&l_756[3],&l_756[3],&l_756[3],&l_756[3],&l_756[3]};
                    int64_t *l_783 = &g_141;
                    int i;
                    --l_773;
                    if ((safe_add_func_uint8_t_u_u(l_739.f6, ((l_756[3] & (((((safe_mul_func_uint8_t_u_u(p_58, (safe_add_func_uint64_t_u_u(3UL, ((**l_77) , (18446744073709551615UL >= ((*l_783) = (!(p_58 > 0xC6CAL))))))))) < ((((*l_704)--) , ((*l_713) = l_786)) == &g_87)) != l_773) < l_756[8]) >= (-8L))) , 0x8CL))))
                    {
                        (**l_786) = (*g_87);
                        l_787--;
                    }
                    else
                    {
                        int64_t l_790 = 0x5E651450FE1BF6ADLL;
                        int32_t l_791 = 0x814562C1L;
                        int32_t l_792 = 0x13705176L;
                        int32_t l_793[3][4][6] = {{{0x7F0E8945L,0x7F0E8945L,(-1L),(-1L),0x7F0E8945L,0x7F0E8945L},{0x7F0E8945L,(-1L),(-1L),0x7F0E8945L,0x7F0E8945L,(-1L)},{0x7F0E8945L,0x7F0E8945L,(-1L),(-1L),0x7F0E8945L,0x7F0E8945L},{0x7F0E8945L,(-1L),(-1L),0x7F0E8945L,0x7F0E8945L,(-1L)}},{{0x7F0E8945L,0x7F0E8945L,(-1L),(-1L),0x7F0E8945L,0x7F0E8945L},{0x7F0E8945L,(-1L),(-1L),0x7F0E8945L,0x7F0E8945L,(-1L)},{0x7F0E8945L,0x7F0E8945L,(-1L),(-1L),0x7F0E8945L,0x7F0E8945L},{0x7F0E8945L,(-1L),(-1L),0x7F0E8945L,0x7F0E8945L,(-1L)}},{{0x7F0E8945L,0x7F0E8945L,(-1L),(-1L),0x7F0E8945L,0x7F0E8945L},{0x7F0E8945L,(-1L),(-1L),0x7F0E8945L,0x7F0E8945L,(-1L)},{0x7F0E8945L,0x7F0E8945L,(-1L),(-1L),0x7F0E8945L,0x7F0E8945L},{0x7F0E8945L,(-1L),(-1L),0x7F0E8945L,0x7F0E8945L,(-1L)}}};
                        int i, j, k;
                        (*g_509) |= (*l_78);
                        (*l_757) ^= (-8L);
                        --l_797;
                        (*g_509) &= l_756[4];
                    }
                    for (g_2 = 0; (g_2 <= 3); g_2 += 1)
                    {
                        uint8_t l_800 = 0x75L;
                        if (l_800)
                            break;
                        (***l_713) = &l_756[3];
                        (*l_757) = p_58;
                        return (**l_77);
                    }
                }
                else
                {
                    int32_t l_801 = (-1L);
                    int32_t *l_802 = (void*)0;
                    int32_t *l_803 = &l_756[3];
                    int32_t *l_804[10][1] = {{(void*)0},{&l_764},{(void*)0},{(void*)0},{&l_764},{(void*)0},{(void*)0},{&l_764},{(void*)0},{(void*)0}};
                    int64_t ***l_819 = &l_817;
                    int i, j;
                    l_805--;
                    if (((p_58 | (p_58 && (l_756[1] ^= p_58))) < ((((safe_mod_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(4L, ((249UL && l_719.f2) && (((((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((l_773 == (((((((((((*l_819) = l_817) == l_820) && p_58) || p_58) && l_797) | 65535UL) , p_58) , g_188[0]) || 0x9B37L) , 9UL)))), p_58)), (*l_78))) || 0x839BL) && g_599.f1) | 0x635FE96CC6FD6EABLL) , 18446744073709551615UL)))) && 6UL), (*l_78))) & 65530UL) > g_209.f5) == (**l_77))))
                    {
                        return p_58;
                    }
                    else
                    {
                        (*g_509) &= (*l_78);
                    }
                }
                (*g_509) = l_794;
                for (l_797 = 0; (l_797 <= 3); l_797 += 1)
                {
                    return l_797;
                }
                if ((!1L))
                {
                    int8_t l_822 = (-10L);
                    return l_822;
                }
                else
                {
                    int32_t l_832 = 0x9BFD5F88L;
                    struct S1 l_837[9] = {{0x9BD4L,0x19BC74A3L,-9L,4,7,-2L,0,18446744073709551607UL},{0x9BD4L,0x19BC74A3L,-9L,4,7,-2L,0,18446744073709551607UL},{0x9BD4L,0x19BC74A3L,-9L,4,7,-2L,0,18446744073709551607UL},{0x9BD4L,0x19BC74A3L,-9L,4,7,-2L,0,18446744073709551607UL},{0x9BD4L,0x19BC74A3L,-9L,4,7,-2L,0,18446744073709551607UL},{0x9BD4L,0x19BC74A3L,-9L,4,7,-2L,0,18446744073709551607UL},{0x9BD4L,0x19BC74A3L,-9L,4,7,-2L,0,18446744073709551607UL},{0x9BD4L,0x19BC74A3L,-9L,4,7,-2L,0,18446744073709551607UL},{0x9BD4L,0x19BC74A3L,-9L,4,7,-2L,0,18446744073709551607UL}};
                    int i;
                    for (l_795 = 0; (l_795 <= 3); l_795 += 1)
                    {
                        if ((*g_509))
                            break;
                    }
                    if (l_794)
                    {
                        struct S3 *l_829 = &g_39;
                        int32_t l_838 = 0L;
                        int8_t l_843[2][9][4] = {{{0xBEL,0xE0L,0xBEL,0xBEL},{0xE0L,0xE0L,0x59L,0xE0L},{0xE0L,0xBEL,0xBEL,0xE0L},{0xBEL,0xE0L,0xBEL,0xBEL},{0xE0L,0xE0L,0x59L,0xE0L},{0xE0L,0xBEL,0xBEL,0xE0L},{0xBEL,0xE0L,0xBEL,0xBEL},{0xE0L,0xE0L,0x59L,0xE0L},{0xE0L,0xBEL,0xBEL,0xE0L}},{{0xBEL,0xE0L,0xBEL,0xBEL},{0xE0L,0xE0L,0x59L,0xE0L},{0xE0L,0xBEL,0xBEL,0xE0L},{0xBEL,0xE0L,0xBEL,0xBEL},{0xE0L,0xE0L,0x59L,0xE0L},{0xE0L,0xBEL,0xBEL,0xE0L},{0xBEL,0xE0L,0xBEL,0xBEL},{0xE0L,0xE0L,0x59L,0xE0L},{0xE0L,0xBEL,0xBEL,0xE0L}}};
                        int i, j, k;
                        (*g_509) ^= (&l_820 != &l_817);
                        l_843[1][3][0] ^= ((safe_mod_func_uint8_t_u_u(((p_58 & ((safe_lshift_func_uint16_t_u_u(65535UL, ((**l_77) , (safe_rshift_func_uint16_t_u_s((((((l_756[3] &= ((l_829 = &g_39) == ((safe_add_func_int32_t_s_s((((l_832 && l_832) >= ((safe_add_func_uint32_t_u_u(p_58, (safe_add_func_int16_t_s_s((l_837[2] , ((((**l_817) |= (l_838 && 0xAFD69A9CL)) > 18446744073709551607UL) | l_839)), p_58)))) >= g_217.f1)) && 0x9D52E06FL), (*g_509))) , &g_39))) | p_58) , g_840) == (void*)0) | p_58), 0))))) | 0x04L)) == p_58), p_58)) && p_58);
                    }
                    else
                    {
                        if (l_756[7])
                            break;
                    }
                }
                for (g_305.f7 = 0; (g_305.f7 <= 3); g_305.f7 += 1)
                {
                    struct S4 ***l_856 = &g_714[2][6];
                    struct S4 ****l_855 = &l_856;
                    struct S4 *****l_857 = &l_855;
                    int16_t *l_863 = &g_209.f5;
                    uint32_t l_864[10];
                    int32_t *l_865[8][3] = {{&l_756[3],&l_768,&l_756[3]},{&l_771,(void*)0,(void*)0},{&l_768,&l_768,&l_768},{&l_771,&l_771,(void*)0},{&l_756[3],&l_768,&l_756[3]},{&l_771,(void*)0,(void*)0},{&l_768,&l_768,&l_768},{&l_771,&l_771,(void*)0}};
                    int i, j;
                    for (i = 0; i < 10; i++)
                        l_864[i] = 0x93D753DFL;
                    l_772[6] |= (safe_sub_func_int16_t_s_s(p_58, (((*g_842) |= ((((((safe_unary_minus_func_int32_t_s((~(safe_add_func_int16_t_s_s(((&g_86 != (void*)0) ^ (safe_mul_func_uint8_t_u_u((l_756[2] == 4L), (safe_sub_func_int16_t_s_s(((*l_863) = (~((((*l_857) = l_855) != (l_719 , l_858)) & ((((((*g_509) |= (safe_lshift_func_int16_t_s_s((((*l_752) = l_862) == (void*)0), p_58))) & 4294967295UL) || 0xA904528E18C71E0CLL) , p_58) <= p_58)))), 0UL))))), p_58))))) == l_864[3]) , (*g_509)) | p_58) ^ p_58) || p_58)) || g_39.f6)));
                }
            }
            if ((*g_509))
            {
                struct S3 *l_880 = &g_39;
                struct S3 **l_879 = &l_880;
                (*l_879) = &g_39;
                (*l_879) = (*l_879);
                for (l_795 = 0; (l_795 <= (-4)); l_795--)
                {
                    int16_t l_883[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                    int i;
                    return l_883[4];
                }
            }
            else
            {
                uint32_t l_907[9][4] = {{1UL,0x9F6D7B8DL,4294967294UL,4294967294UL},{4294967295UL,4294967295UL,4294967288UL,4294967286UL},{4294967295UL,4294967288UL,4294967289UL,1UL},{4294967288UL,4294967295UL,4294967288UL,4294967289UL},{4294967294UL,4294967295UL,4294967295UL,1UL},{4294967295UL,4294967288UL,4294967288UL,4294967295UL},{4294967288UL,1UL,4294967288UL,4294967289UL},{4294967295UL,4294967294UL,4294967295UL,4294967294UL},{4294967294UL,4294967288UL,4294967288UL,4294967294UL}};
                struct S4 l_937 = {-2182,6608};
                int32_t l_993 = 0xE68EEF52L;
                int32_t l_994[3];
                int8_t l_995 = 1L;
                uint8_t *****l_1002[10][4][4] = {{{(void*)0,&l_999,&l_999,(void*)0},{&l_999,(void*)0,&l_999,(void*)0},{&l_999,&l_999,&l_999,&l_999},{(void*)0,&l_999,&l_999,(void*)0}},{{&l_999,&l_999,&l_999,&l_999},{(void*)0,(void*)0,&l_999,&l_999},{(void*)0,&l_999,&l_999,&l_999},{&l_999,&l_999,&l_999,&l_999}},{{(void*)0,&l_999,&l_999,&l_999},{&l_999,(void*)0,&l_999,&l_999},{&l_999,(void*)0,&l_999,&l_999},{(void*)0,&l_999,(void*)0,&l_999}},{{&l_999,&l_999,&l_999,&l_999},{(void*)0,&l_999,&l_999,&l_999},{&l_999,(void*)0,&l_999,&l_999},{(void*)0,&l_999,&l_999,(void*)0}},{{&l_999,&l_999,(void*)0,&l_999},{(void*)0,&l_999,&l_999,(void*)0},{&l_999,(void*)0,&l_999,(void*)0},{&l_999,&l_999,&l_999,&l_999}},{{(void*)0,&l_999,&l_999,(void*)0},{&l_999,&l_999,&l_999,&l_999},{(void*)0,(void*)0,&l_999,&l_999},{(void*)0,&l_999,&l_999,&l_999}},{{&l_999,&l_999,&l_999,&l_999},{(void*)0,&l_999,&l_999,&l_999},{&l_999,(void*)0,&l_999,&l_999},{&l_999,(void*)0,&l_999,&l_999}},{{(void*)0,&l_999,(void*)0,&l_999},{&l_999,&l_999,&l_999,&l_999},{(void*)0,&l_999,&l_999,&l_999},{&l_999,(void*)0,&l_999,&l_999}},{{(void*)0,&l_999,&l_999,(void*)0},{&l_999,&l_999,(void*)0,&l_999},{(void*)0,&l_999,&l_999,(void*)0},{&l_999,(void*)0,&l_999,(void*)0}},{{&l_999,&l_999,&l_999,&l_999},{(void*)0,&l_999,&l_999,(void*)0},{&l_999,&l_999,&l_999,&l_999},{(void*)0,(void*)0,&l_999,&l_999}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_994[i] = 0xF39F3EC6L;
                for (l_765 = 0; (l_765 == 6); l_765++)
                {
                    struct S4 l_888[3][7] = {{{-6453,4325},{-6453,4325},{-570,3199},{-570,3199},{-6453,4325},{-6453,4325},{-570,3199}},{{-4949,2654},{966,20945},{-4949,2654},{966,20945},{-4949,2654},{966,20945},{-4949,2654}},{{-6453,4325},{-570,3199},{-570,3199},{-6453,4325},{-6453,4325},{-570,3199},{-570,3199}}};
                    int16_t *l_972 = &g_209.f0;
                    uint32_t l_973 = 0xD4DEF35AL;
                    int32_t l_977 = 0xA2F3D9E5L;
                    uint64_t l_978 = 0xBB960DA5B2618C12LL;
                    int i, j;
                    (*g_87) = (*g_87);
                    for (l_711.f1 = 12; (l_711.f1 == 23); l_711.f1 = safe_add_func_uint32_t_u_u(l_711.f1, 7))
                    {
                        uint32_t **l_902 = &g_324;
                        int32_t *l_908 = (void*)0;
                        int32_t *l_909 = &l_663[3][1][8];
                        struct S4 l_910[10][7] = {{{-957,3419},{-4167,12273},{154,11641},{-4167,12273},{-957,3419},{-4167,12273},{154,11641}},{{6819,3703},{6819,3703},{-7665,5987},{-2636,13238},{5396,6482},{5396,6482},{-2636,13238}},{{732,4435},{-7444,20292},{732,4435},{-4167,12273},{732,4435},{-7444,20292},{732,4435}},{{6819,3703},{-2636,13238},{-2636,13238},{6819,3703},{5396,6482},{-7665,5987},{-7665,5987}},{{-957,3419},{-7444,20292},{154,11641},{-7444,20292},{-957,3419},{-7444,20292},{154,11641}},{{5396,6482},{6819,3703},{-2636,13238},{-2636,13238},{6819,3703},{5396,6482},{-7665,5987}},{{732,4435},{-4167,12273},{732,4435},{-7444,20292},{732,4435},{-4167,12273},{732,4435}},{{5396,6482},{-2636,13238},{-7665,5987},{6819,3703},{6819,3703},{-7665,5987},{-2636,13238}},{{-957,3419},{-4167,12273},{154,11641},{-4167,12273},{-957,3419},{-4167,12273},{154,11641}},{{6819,3703},{6819,3703},{-7665,5987},{-2636,13238},{5396,6482},{5396,6482},{-2636,13238}}};
                        int16_t *l_919 = &g_305.f5;
                        int8_t l_922 = 0L;
                        struct S1 **l_934 = (void*)0;
                        struct S1 ***l_933 = &l_934;
                        int i, j;
                        if (p_58)
                            break;
                        (*l_909) &= ((*g_509) = (l_888[1][1] , (safe_mod_func_int64_t_s_s((((*g_509) > p_58) == ((~((*l_695) |= (safe_rshift_func_int16_t_s_s(((**l_77) & l_888[1][1].f1), (((*l_862) = (safe_mul_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((((((*l_717) = ((l_903[8][2][1] = l_902) == l_904)) <= (((safe_lshift_func_uint8_t_u_u(((-4L) | ((((1UL == p_58) , &g_714[2][6]) == &g_714[1][1]) >= p_58)), l_907[8][0])) && 0xCF47L) != (*g_842))) != 0x3DB69810L) , l_888[1][1].f0), 0x81F98A21L)) && p_58), p_58)) || p_58), p_58))) , p_58))))) > l_907[8][0])), g_655.f1))));
                        (*l_909) = (l_910[0][4] , ((safe_add_func_uint16_t_u_u((((0UL | (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((*l_919) = g_655.f0), g_217.f2)) >= ((*l_717) = (safe_div_func_uint32_t_u_u(((((l_922 , ((safe_mod_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(p_58, 6)), (safe_mod_func_uint64_t_u_u(18446744073709551615UL, 0x02B901EEFC6261B6LL)))) ^ 0xA2E7A6BEL), g_209.f1)) > (-2L)) && g_228[2][3][1]), 0xB8A0L)) | 0x0B7D3378908034D4LL)) >= p_58) <= 0xFBL) || p_58), 0x73B2BE45L)))), p_58)), p_58))) <= 3L) <= p_58), p_58)) || 0xEDL));
                        (*l_933) = (void*)0;
                    }
                    if (((((safe_div_func_uint32_t_u_u((**g_378), ((l_973 = ((((((l_937 , (-1L)) & (l_888[1][1].f0 | (safe_div_func_int64_t_s_s((((((g_209.f7 = ((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((-5L) < (((safe_mod_func_int8_t_s_s(((0xD9C9L | ((*l_972) = ((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((((l_771 |= (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((p_58 <= (safe_mul_func_uint16_t_u_u((((*l_862) = ((~p_58) || (safe_div_func_int64_t_s_s(((~(+(!((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((*l_717) ^= l_937.f0), 0x17L)), (**l_77))) || l_970)))) | g_599.f0), p_58)))) & 0x85L), 1L))), 15)) || (*l_78)), p_58)), 0L))) < (**g_323)) , (**l_77)) , l_971), (**l_77))), 0x7F5EL)) || 0L) >= p_58) > 0x757EL))) | l_739.f4), p_58)) || 0x2EL) == (-1L))), p_58)), 6UL)) | p_58), 6)) >= p_58)) & (*g_842)) || 251UL) , p_58) & (**l_77)), 0x0B9BA6C900646049LL)))) < p_58) > l_907[8][0]) >= (-6L)) , 0L)) ^ 0xA4A2L))) | p_58) <= 0x737136B82C177364LL) & p_58))
                    {
                        (***l_713) = (**l_786);
                        ++l_978;
                        if (p_58)
                            continue;
                    }
                    else
                    {
                        (*g_509) |= (0xA74E2B00L < (**g_378));
                    }
                    (*g_509) = (((***g_840) = (***g_840)) >= (l_907[8][0] >= (safe_lshift_func_uint8_t_u_s(1UL, 1))));
                }
                for (g_562 = 0; (g_562 > 1); g_562 = safe_add_func_int64_t_s_s(g_562, 3))
                {
                    int32_t *l_987 = (void*)0;
                    int32_t *l_988 = &l_759;
                    int32_t *l_989 = &l_772[1];
                    int32_t *l_990 = (void*)0;
                    int32_t *l_991 = (void*)0;
                    int32_t *l_992[10] = {&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63};
                    uint32_t l_996 = 0x3CF7DA8DL;
                    int i;
                    for (l_787 = 23; (l_787 == 39); l_787 = safe_add_func_uint32_t_u_u(l_787, 5))
                    {
                        if (p_58)
                            break;
                    }
                    (*g_509) = p_58;
                    l_996--;
                }
                l_999 = l_999;
            }
        }
        else
        {
            return p_58;
        }
    }
    return p_58;
}







static int32_t * func_65(uint64_t p_66, int32_t * p_67, int32_t * p_68, const struct S4 p_69, uint32_t p_70)
{
    int16_t l_482 = 0x5E8CL;
    uint64_t *l_483 = (void*)0;
    int16_t *l_484 = (void*)0;
    int16_t *l_485 = &g_92;
    int32_t *l_486 = &g_63;
    int32_t l_489 = 8L;
    int32_t l_492 = 0x4584BE17L;
    int32_t l_495 = 0x8F319D9CL;
    int32_t l_504 = 0x7690E8A0L;
    uint16_t l_505 = 1UL;
    int32_t *l_508[10] = {&g_5[4],&l_495,&g_5[4],&g_5[4],&l_495,&g_5[4],&g_5[4],&l_495,&g_5[4],&g_5[4]};
    struct S2 l_515 = {7785,5,37,532,104,0};
    struct S1 l_611 = {0x0D6CL,-1L,0x20F47D9BA2B3B552LL,-10,3,0xB5D3L,22,0x13A7BC11E2F0D744LL};
    struct S2 l_634 = {-14986,18,166,151,315,0};
    int32_t *l_653[8][7] = {{&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495},{&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0]},{&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495},{&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0]},{&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495},{&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0]},{&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495},{&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[0]}};
    int i, j;
    (*l_486) &= (l_482 & ((((65535UL || ((((0x51298723L >= ((p_66 = g_305.f4) & 6L)) != ((*l_485) ^= p_69.f0)) || (0xE0DEL > (p_70 || 0x003ED0576930EAF5LL))) != l_482)) && 4294967295UL) <= p_69.f0) != g_39.f3));
    for (g_209.f7 = 0; (g_209.f7 == 42); g_209.f7++)
    {
        int32_t *l_490 = &g_143[0];
        int32_t *l_491 = &g_143[1];
        int32_t *l_493 = &g_143[0];
        int32_t *l_494 = &g_143[0];
        int32_t *l_496 = &g_143[1];
        int32_t *l_497 = &l_489;
        int32_t *l_498 = &g_143[0];
        int32_t *l_499 = &l_495;
        int32_t *l_500 = &g_143[1];
        int32_t *l_501 = &g_143[0];
        int32_t *l_502 = (void*)0;
        int32_t *l_503[2];
        int i;
        for (i = 0; i < 2; i++)
            l_503[i] = &g_143[0];
        l_505++;
    }
    g_509 = l_508[1];
    for (p_66 = 0; (p_66 <= 0); p_66 += 1)
    {
        struct S4 l_510 = {2169,12393};
        struct S4 *l_514 = &l_510;
        struct S4 **l_513[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        struct S4 ***l_512 = &l_513[1];
        struct S4 ****l_511 = &l_512;
        uint8_t *l_549 = &g_550;
        int32_t l_554[7] = {1L,1L,9L,1L,1L,9L,1L};
        int32_t l_556 = (-1L);
        int32_t l_563 = 0x4A2F7BFCL;
        int32_t l_564 = 0L;
        int32_t l_566[3][5] = {{0xEF57FF2BL,0x8042EF43L,0x8042EF43L,0xEF57FF2BL,0xB89D6259L},{0xEF57FF2BL,0x5394D57EL,1L,1L,0x5394D57EL},{0xB89D6259L,0x8042EF43L,1L,0xB89D6259L,0xB89D6259L}};
        uint32_t * const ***l_586 = (void*)0;
        struct S3 *l_618 = (void*)0;
        uint32_t l_650 = 0x90A228A3L;
        int i, j;
        (*l_511) = (l_510 , (void*)0);
        for (l_492 = 0; l_492 < 2; l_492 += 1)
        {
            for (g_2 = 0; g_2 < 6; g_2 += 1)
            {
                g_225[l_492][g_2] = 0x1AL;
            }
        }
        if (g_337[p_66])
        {
            uint8_t *l_533[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t **l_548[1][1];
            uint64_t *l_551 = (void*)0;
            uint64_t *l_552 = (void*)0;
            uint64_t *l_553 = (void*)0;
            int8_t l_555 = 0x01L;
            int16_t l_557 = 1L;
            uint16_t *l_558[2][1];
            int32_t l_559[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
            int8_t l_560 = 0xA9L;
            uint32_t *l_561[9];
            int32_t l_565 = 1L;
            int32_t l_567 = 0x4EF459C9L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_548[i][j] = &l_533[2];
            }
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_558[i][j] = &g_138;
            }
            for (i = 0; i < 9; i++)
                l_561[i] = &g_562;
            l_567 = ((l_515 , (l_566[1][2] = (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(g_188[p_66], (safe_rshift_func_uint8_t_u_s((l_565 ^= (l_564 ^= (l_563 = (((safe_rshift_func_uint8_t_u_u(((+(safe_mul_func_uint8_t_u_u(g_39.f2, 0x20L))) , (g_257 = g_337[p_66])), 5)) & (safe_div_func_int64_t_s_s(((((g_562 |= (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((l_559[3] |= (g_305.f2 < (((safe_add_func_int32_t_s_s((l_557 = ((safe_mod_func_int32_t_s_s((l_556 ^= ((((**g_378) = (safe_sub_func_int16_t_s_s(((*l_485) = (l_554[0] ^= (((((*l_486) = ((l_549 = &g_188[0]) == (void*)0)) & 0x89D2DF288E20999ALL) >= 65531UL) <= g_217.f3))), p_69.f1))) < g_305.f0) != l_555)), p_70)) && 0x6CF630E151FD4A63LL)), 0xFC685A2AL)) == (*p_67)) | g_188[p_66]))) || l_557) && p_69.f0), l_560)), g_305.f5)), p_69.f0))) , (**g_378)) >= 1L) > g_305.f0), g_188[0]))) , g_63)))), 3)))), (-10L))), p_69.f0)) | g_209.f7), p_70)), p_69.f1)))) && (**g_323));
        }
        else
        {
            int64_t l_584[10] = {(-1L),0x60CD585AF06F7DEFLL,(-1L),0x60CD585AF06F7DEFLL,(-1L),0x60CD585AF06F7DEFLL,(-1L),0x60CD585AF06F7DEFLL,(-1L),0x60CD585AF06F7DEFLL};
            uint8_t *l_585[7] = {&g_257,&g_257,&g_257,&g_257,&g_257,&g_257,&g_257};
            uint32_t * const ****l_587[10] = {(void*)0,(void*)0,(void*)0,(void*)0,&l_586,(void*)0,(void*)0,(void*)0,(void*)0,&l_586};
            int32_t l_589 = 0x755ED2A7L;
            struct S4 *l_590 = &l_510;
            int i;
            if ((*p_68))
                break;
            l_589 &= (safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(((g_588 = (((safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((*l_486), (((safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(0xC5L, g_305.f6)) < (p_66 ^ (p_69.f0 | ((*l_485) &= (0xA0A5C54BL | (safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(l_584[6], 14)), (l_584[1] & (g_188[0] |= ((*l_549) = p_70)))))))))), p_69.f1)) < l_584[6]) != 0x5540L))) , l_584[6]), p_70)) , p_69.f0) , l_586)) != l_586), 0x2D791E0DL)) < (*g_324)) & 4294967286UL), 1));
            (*l_486) = (l_590 != l_590);
            for (l_563 = 0; (l_563 == 15); l_563++)
            {
                struct S3 *l_593 = (void*)0;
                struct S3 *l_594 = &g_39;
                (*l_594) = g_39;
            }
        }
        for (p_70 = 0; (p_70 <= 1); p_70 += 1)
        {
            struct S3 *l_610 = &g_39;
            struct S4 ***l_617 = &l_513[1];
            int i;
            (*g_87) = &g_143[p_70];
            for (g_209.f0 = 0; (g_209.f0 <= 3); g_209.f0 += 1)
            {
                int32_t l_645 = 0xC3C100CEL;
                int i;
                if ((((*l_549) = (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((g_599 , ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((g_209 , (safe_sub_func_int8_t_s_s((g_337[(p_66 + 3)] , (safe_lshift_func_uint8_t_u_s((l_610 != ((((l_611 , (!(safe_add_func_int16_t_s_s(g_143[p_66], g_143[p_70])))) == (safe_mul_func_int16_t_s_s(((void*)0 == l_617), 0x53DDL))) == 8L) , l_618)), 5))), 0xD4L))), g_143[p_66])), 4)), (-7L))) < l_566[1][2])), p_66)), p_66))) ^ 1L))
                {
                    int64_t l_619 = 1L;
                    int32_t *l_620 = (void*)0;
                    if ((*p_67))
                    {
                        int i;
                        (**g_86) = &g_143[p_66];
                        g_143[p_70] = l_619;
                    }
                    else
                    {
                        if (g_143[p_70])
                            break;
                        (**g_86) = l_620;
                    }
                }
                else
                {
                    const int8_t l_633[5][6][7] = {{{0L,9L,1L,9L,0x5CL,9L,1L},{1L,1L,0x1EL,0L,0x4DL,(-1L),0x13L},{1L,1L,5L,(-9L),(-3L),8L,(-9L)},{0L,0x98L,9L,5L,0x4DL,0L,0L},{0x4DL,(-1L),0x76L,0xADL,0x5CL,0x1EL,(-1L)},{1L,1L,0x8BL,1L,0xB9L,9L,0x4DL}},{{8L,1L,0x8BL,0L,(-9L),9L,9L},{1L,0x4DL,0x76L,0x4DL,1L,(-1L),9L},{0x1EL,0L,9L,9L,5L,0xDEL,0x5CL},{0x8BL,0x5CL,5L,0L,0x5CL,5L,0L},{0x1EL,9L,0x1EL,(-9L),0x98L,(-1L),0x4DL},{1L,9L,1L,0L,5L,8L,1L}},{{8L,0x4DL,0L,5L,0x13L,8L,1L},{1L,(-1L),(-1L),9L,9L,(-1L),(-1L)},{0x4DL,0L,(-1L),0x34L,0xB9L,5L,0x98L},{0L,(-9L),0x8BL,9L,(-1L),0xDEL,1L},{1L,0x13L,0x1EL,0x34L,(-9L),(-1L),1L},{1L,1L,0L,9L,(-3L),9L,9L}},{{0L,0x5CL,0xDEL,5L,9L,9L,0L},{9L,0x5CL,0x76L,0L,0x98L,0x1EL,0x98L},{(-9L),1L,(-1L),5L,8L,0x01L,0xDEL},{0x71L,5L,1L,1L,9L,0x71L,0x1EL},{5L,0xDEL,0x5CL,0L,0x8BL,9L,0xDEL},{0L,(-1L),0x01L,9L,1L,(-1L),(-3L)}},{{0x92L,9L,0x8CL,1L,9L,(-1L),(-1L)},{5L,9L,0x1EL,0L,9L,0xADL,0L},{0x8BL,0x1EL,1L,(-2L),1L,0x1EL,0x8BL},{0x71L,0L,1L,1L,0x8BL,1L,(-1L)},{(-1L),8L,0xADL,0xDEL,9L,0xADL,(-3L)},{0xDEL,(-1L),1L,0L,8L,0x92L,9L}}};
                    struct S4 *l_635 = &l_510;
                    int i, j, k;
                    for (g_114 = 3; (g_114 >= 0); g_114 -= 1)
                    {
                        struct S4 *l_636 = &l_510;
                        int8_t *l_643 = &g_170;
                        int64_t *l_644 = (void*)0;
                        int i;
                        g_143[p_70] &= (safe_unary_minus_func_uint64_t_u(1UL));
                        if ((*p_68))
                            continue;
                        l_645 &= (safe_lshift_func_int16_t_s_s((((*l_486) >= ((safe_add_func_int64_t_s_s((g_141 = ((safe_mod_func_uint8_t_u_u(p_69.f1, (safe_mod_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s((((+l_633[2][4][4]) & ((l_634 , l_635) != l_636)) && p_66), (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u(p_69.f0, ((safe_rshift_func_int8_t_s_u(((((*l_643) = (g_599.f9 | g_143[p_70])) & g_143[p_70]) && p_69.f1), l_554[3])) >= l_633[0][5][5]))) | (**g_378)), 7)))) ^ (**g_378)), l_633[2][4][4])))) < g_254.f1)), 1L)) ^ 0L)) , g_39.f5), g_143[p_70]));
                    }
                    for (g_305.f1 = 4; (g_305.f1 >= 1); g_305.f1 -= 1)
                    {
                        struct S1 l_646 = {0x5199L,-9L,0x60AD9D8C9A757FD1LL,10,5,-1L,17,0xF735A181AD9CF40DLL};
                        const struct S4 *l_648 = (void*)0;
                        const struct S4 **l_647 = &l_648;
                        int32_t *l_649 = &l_566[2][2];
                        (*l_647) = (l_646 , &g_254);
                        return &g_143[0];
                    }
                }
            }
            l_650++;
            return &g_143[0];
        }
    }
    return &g_114;
}







static uint16_t func_71(struct S3 * p_72, int32_t ** p_73, struct S1 p_74, int32_t ** p_75)
{
    int32_t **l_98 = &g_88[0][5][7];
    const int32_t *l_100[5];
    const int32_t **l_99 = &l_100[0];
    const int32_t ***l_101 = &l_99;
    struct S2 l_107[2] = {{14217,28,48,588,257,0},{14217,28,48,588,257,0}};
    struct S1 l_108 = {0x1F77L,-1L,-1L,-10,3,0xB2F2L,21,0xB451AF0014B0E7A3LL};
    int16_t *l_109 = &l_108.f5;
    int32_t *l_110 = &g_63;
    struct S0 l_135 = {-7,1526,99,0,15,8222,-3,0xA379BBF3D30447F0LL,-14793,34};
    const struct S3 l_299 = {9,1,1096,17751,-71,-2,264};
    const uint32_t l_355[2][6][7] = {{{0UL,0xE44BC807L,0x1FA2D0A0L,18446744073709551615UL,18446744073709551610UL,2UL,0UL},{18446744073709551615UL,0UL,18446744073709551615UL,0x3802C973L,1UL,0x3802C973L,18446744073709551615UL},{18446744073709551612UL,18446744073709551612UL,0xE6660620L,0x3802C973L,0x4D165CD4L,0xB5F97AF9L,1UL},{1UL,0x4D165CD4L,18446744073709551615UL,18446744073709551615UL,0UL,0UL,0xE44BC807L},{9UL,18446744073709551610UL,0xB5F97AF9L,0x9D4AEB7AL,0x4D165CD4L,0xFE6A86D9L,0x4D165CD4L},{18446744073709551610UL,0UL,0UL,18446744073709551610UL,1UL,0xFE6A86D9L,0x1FA2D0A0L}},{{0x9D4AEB7AL,0xB5F97AF9L,18446744073709551610UL,9UL,18446744073709551610UL,0UL,0x3802C973L},{18446744073709551615UL,18446744073709551615UL,0x4D165CD4L,1UL,18446744073709551612UL,0xB5F97AF9L,0x1FA2D0A0L},{0x3802C973L,0xE6660620L,18446744073709551612UL,18446744073709551612UL,0xE6660620L,0x3802C973L,0x4D165CD4L},{0x3802C973L,18446744073709551615UL,0UL,18446744073709551615UL,1UL,2UL,0xE44BC807L},{18446744073709551615UL,0x1FA2D0A0L,0xE44BC807L,0UL,0x9D4AEB7AL,0xE5047524L,1UL},{0x9D4AEB7AL,18446744073709551615UL,1UL,18446744073709551608UL,18446744073709551608UL,1UL,18446744073709551615UL}}};
    uint32_t l_365[2];
    int64_t l_387 = 0L;
    int32_t l_391[5];
    uint32_t **l_424 = &g_324;
    uint32_t ***l_423 = &l_424;
    const uint32_t **l_451 = &g_450;
    int32_t l_456 = 5L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_100[i] = &g_5[5];
    for (i = 0; i < 2; i++)
        l_365[i] = 0xC50B6E63L;
    for (i = 0; i < 5; i++)
        l_391[i] = 0xF4CA21FFL;
    (*l_110) &= ((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint32_t_u_u((+(l_98 == ((*l_101) = l_99))), (((g_5[4] , (+((safe_lshift_func_int16_t_s_s((((p_74.f3 = 0L) ^ (**p_73)) >= (safe_lshift_func_int8_t_s_u(((((((l_107[0] , l_108) , l_109) != &g_92) || p_74.f1) <= 18446744073709551608UL) || 0x50L), 6))), 3)) | g_39.f5))) & p_74.f4) < g_39.f0))), g_39.f6)) >= p_74.f1);
    for (p_74.f5 = 0; (p_74.f5 == (-29)); p_74.f5 = safe_sub_func_uint64_t_u_u(p_74.f5, 1))
    {
        int32_t *l_113 = &g_114;
        (*l_113) |= (*l_110);
    }
    if ((g_39.f3 , (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((((g_2 & ((safe_mod_func_int8_t_s_s(((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(((((***l_101) >= g_39.f5) , (*g_86)) != (void*)0), 6)), (**l_99))) || (**l_99)), ((((p_74.f3 = (**p_75)) <= g_39.f3) >= 0L) , 7UL))) , g_39.f6)) , &l_98) != (void*)0), p_74.f4)), 0x4F4E0B4BL))))
    {
        const int64_t l_136 = (-1L);
        uint16_t *l_137 = &g_138;
        int64_t *l_139 = (void*)0;
        int64_t *l_140 = &g_141;
        int32_t *l_142 = &g_143[0];
        struct S2 l_166 = {21017,11,6,306,469,0};
        uint64_t l_182[1][2][7] = {{{0x133A8E694F7BBAF5LL,18446744073709551615UL,0x133A8E694F7BBAF5LL,4UL,4UL,0x133A8E694F7BBAF5LL,18446744073709551615UL},{4UL,18446744073709551615UL,7UL,7UL,18446744073709551615UL,4UL,18446744073709551615UL}}};
        int32_t l_270 = 0xA623C689L;
        int32_t l_271 = 0L;
        struct S1 *l_304 = &g_305;
        uint32_t * const *l_326 = (void*)0;
        uint32_t **l_327 = &g_324;
        int32_t l_335 = 0x0E1AEA47L;
        const struct S3 l_380 = {-100,1,931,19423,-351,-7,-253};
        int32_t l_388 = 0x1DE85882L;
        int32_t l_389 = 0x11AED37AL;
        int32_t l_390[10] = {0x9825BB45L,0x9825BB45L,0x9825BB45L,0x9825BB45L,0x9825BB45L,0x9825BB45L,0x9825BB45L,0x9825BB45L,0x9825BB45L,0x9825BB45L};
        int32_t *l_403[6];
        uint64_t l_404 = 8UL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_403[i] = &l_391[0];
        (*l_142) |= (safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(((*l_140) = (~((((***l_101) && ((((*l_137) = ((~g_39.f5) != (safe_div_func_int16_t_s_s((((**l_99) > (p_74.f6 & (safe_sub_func_int32_t_s_s(((((*l_110) , (((**g_86) == (l_135 , (*p_75))) < p_74.f4)) , p_74.f7) , l_136), (**p_75))))) & (-1L)), l_136)))) | 0x2F89L) == (**p_75))) | (**l_99)) < g_39.f1))), g_114)), p_74.f2));
        if ((safe_rshift_func_int8_t_s_u(0x7BL, ((safe_div_func_uint64_t_u_u((g_138 > (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((((1L | ((*l_109) = (p_74.f0 = ((void*)0 != (*l_99))))) && (0UL || p_74.f4)) | (-1L)) & ((void*)0 != &g_87)), p_74.f7)), 3))), (-1L))) && (**l_99)))))
        {
            uint32_t *l_159 = &g_2;
            int32_t l_160 = 0L;
            int8_t *l_169 = &g_170;
            struct S1 l_173 = {0x433BL,6L,0L,14,3,-7L,22,1UL};
            int32_t *l_177[9][4][7] = {{{&g_5[5],&g_143[0],(void*)0,&g_143[0],&l_160,&g_114,&l_160},{(void*)0,&g_5[4],&g_143[0],&g_114,&g_143[0],&l_160,(void*)0},{&g_143[0],&l_160,&g_143[1],&g_143[0],&g_143[0],&g_143[1],&g_143[0]},{&g_5[4],&g_143[0],(void*)0,&g_143[0],(void*)0,(void*)0,&g_143[0]}},{{&g_63,(void*)0,&l_160,&g_114,&g_5[4],&g_143[0],&g_143[0]},{&g_143[1],&g_114,&g_5[4],&g_114,&g_143[1],&l_160,&g_143[0]},{&g_143[0],(void*)0,(void*)0,&g_143[0],&g_143[0],&g_143[0],&g_5[4]},{(void*)0,(void*)0,&g_143[0],&g_114,(void*)0,(void*)0,&g_114}},{{&g_143[0],&g_143[0],&g_114,(void*)0,&g_143[0],&g_114,&g_63},{&g_143[1],&g_143[0],&g_143[0],&g_143[0],&g_114,&g_63,&g_5[4]},{&g_63,&g_143[0],(void*)0,&g_143[0],&l_160,(void*)0,&g_63},{&g_5[4],&g_63,&g_5[5],&g_143[1],&l_160,&g_5[4],&g_143[1]}},{{&g_143[0],&l_160,(void*)0,&g_143[0],&g_114,&g_143[0],&g_143[0]},{&g_5[1],&g_143[0],&g_63,&g_63,&g_143[0],&g_5[1],&g_143[0]},{&g_63,&g_143[0],(void*)0,&l_160,(void*)0,(void*)0,&g_143[0]},{&g_143[1],&g_114,(void*)0,&g_143[0],&g_143[0],(void*)0,&g_143[0]}},{{(void*)0,&g_143[0],&g_114,(void*)0,&g_143[1],&g_143[0],&g_143[0]},{(void*)0,&g_143[0],&g_114,&g_63,&g_5[4],&g_143[1],&g_143[1]},{&g_143[1],&l_160,&g_143[0],&g_143[0],(void*)0,&g_143[0],&g_114},{(void*)0,&g_63,&g_63,(void*)0,&g_143[0],&g_143[0],&g_143[0]}},{{&g_143[0],&g_143[0],&g_143[0],&g_143[0],&g_143[1],&g_143[1],&g_143[0]},{&g_143[0],&g_143[0],(void*)0,&g_143[0],(void*)0,&g_143[0],&g_143[0]},{&l_160,&g_143[0],(void*)0,&g_143[0],&g_63,(void*)0,&g_114},{&g_143[1],(void*)0,&g_143[0],&g_143[0],&g_5[4],(void*)0,&g_143[1]}},{{&g_143[1],(void*)0,(void*)0,&g_114,&l_160,&g_5[1],&g_143[0]},{&g_63,&g_114,(void*)0,&g_143[0],&g_143[0],&g_143[0],&l_160},{&g_114,(void*)0,&g_143[0],&g_63,(void*)0,&g_5[4],&g_63},{&g_143[0],&g_143[0],&g_63,(void*)0,(void*)0,(void*)0,&g_63}},{{&l_160,&l_160,&g_143[0],&g_5[1],&g_63,&g_63,&l_160},{&g_143[1],&l_160,&g_143[0],(void*)0,(void*)0,&g_143[0],&l_160},{&g_143[0],(void*)0,&g_143[0],(void*)0,&g_143[1],&g_114,(void*)0},{&g_114,(void*)0,(void*)0,&g_143[0],&g_143[0],(void*)0,&g_143[0]}},{{&g_143[0],&g_114,(void*)0,(void*)0,&g_114,&g_143[0],(void*)0},{&g_143[0],&g_143[0],&g_5[4],(void*)0,&g_114,&g_5[2],&g_114},{&g_5[2],&g_143[0],(void*)0,&g_143[0],&g_63,&g_114,(void*)0},{&g_63,(void*)0,&g_63,&g_63,(void*)0,&g_143[0],&g_143[0]}}};
            int8_t l_207[7][3][9] = {{{0x71L,(-6L),0xBAL,0x58L,0x3BL,(-6L),0x6CL,0x5CL,0xB4L},{8L,0xB4L,0L,(-1L),0L,(-1L),1L,1L,(-2L)},{0xDBL,(-6L),(-1L),0L,(-6L),1L,1L,2L,(-2L)}},{{0L,2L,0x5CL,6L,0xDFL,1L,0xDBL,(-1L),0xB4L},{6L,0x5CL,2L,0L,0x59L,0x96L,1L,0L,2L},{0L,(-1L),(-6L),0xDBL,0x59L,2L,1L,0xB4L,(-1L)}},{{(-1L),0L,0xB4L,8L,0xDFL,0L,0x6CL,0x59L,0x59L},{0x58L,0xBAL,(-6L),0x71L,(-6L),0xBAL,0x58L,0x3BL,(-6L)},{0x58L,1L,2L,3L,0L,0x5CL,1L,0x96L,1L}},{{(-1L),0x59L,0x5CL,(-6L),0x3BL,0L,0L,0x3BL,0L},{0L,7L,(-1L),0xD1L,0L,0L,0x71L,0x59L,(-6L)},{6L,0L,0L,0L,0x96L,0x5CL,(-1L),0xB4L,0L}},{{0L,0x41L,0xBAL,0xD1L,(-6L),0xBAL,8L,0L,(-1L)},{0xDBL,0x41L,1L,(-6L),(-2L),0L,0x1BL,(-1L),0x3BL},{8L,0L,0x59L,3L,(-1L),2L,0xACL,2L,(-1L)}},{{0x71L,7L,7L,0x71L,0xBAL,0x96L,0xACL,(-1L),(-1L)},{7L,9L,0x88L,(-6L),(-8L),9L,(-6L),0xC5L,0x92L},{0L,9L,(-1L),(-1L),0L,(-1L),(-6L),9L,0x88L}},{{2L,0L,(-1L),0x41L,0xABL,0x16L,(-1L),0x72L,(-1L)},{1L,0L,0x88L,(-2L),0xA9L,0xF9L,0L,0xA3L,0xF9L},{2L,0xABL,(-8L),0x3BL,0xF9L,0L,0x41L,0xA3L,9L}}};
            struct S3 l_278 = {111,0,1225,20230,-256,-6,-19};
            uint8_t l_302[9][9][1] = {{{0x63L},{5UL},{0x1FL},{0xF7L},{247UL},{0x63L},{0xF7L},{0x1BL},{0xF7L}},{{0x63L},{247UL},{0xF7L},{0x1FL},{5UL},{0x63L},{0x63L},{5UL},{0x1FL}},{{0xF7L},{247UL},{0x63L},{0xF7L},{0x1BL},{0xF7L},{0x63L},{247UL},{0xF7L}},{{0x1FL},{5UL},{0x63L},{0x63L},{5UL},{0x1FL},{0xF7L},{247UL},{0x63L}},{{0xF7L},{0x1BL},{0xF7L},{0x63L},{247UL},{0xF7L},{0x1FL},{5UL},{0x63L}},{{0x63L},{5UL},{0x1FL},{0xF7L},{247UL},{0x63L},{0xF7L},{0x1BL},{0xF7L}},{{0x63L},{247UL},{0xF7L},{0x1FL},{5UL},{0x63L},{0x63L},{5UL},{0x1FL}},{{0xF7L},{247UL},{0x63L},{0xF7L},{0x1BL},{0xF7L},{0x63L},{247UL},{0xF7L}},{{0x1FL},{5UL},{0x63L},{0x63L},{5UL},{0x1FL},{0xF7L},{247UL},{0x63L}}};
            uint32_t * const **l_325 = (void*)0;
            uint32_t *l_336 = (void*)0;
            uint32_t ***l_353 = &l_327;
            const int8_t l_372 = (-1L);
            int8_t l_392 = 1L;
            uint16_t l_393 = 1UL;
            int32_t l_397 = (-4L);
            uint32_t l_398 = 6UL;
            int i, j, k;
            if ((safe_rshift_func_int16_t_s_s(p_74.f3, ((safe_unary_minus_func_uint16_t_u(((((safe_mod_func_uint32_t_u_u(((*l_159) = ((**p_73) ^ ((void*)0 == l_137))), (l_160 = 0x25D12158L))) , ((((g_92 = ((*g_86) != (((safe_mod_func_int64_t_s_s((((safe_sub_func_uint8_t_u_u(((!((*l_142) = (l_166 , (((((*l_169) = ((**p_73) >= ((safe_div_func_uint8_t_u_u(0xD9L, 0xCBL)) >= (*l_142)))) > g_5[4]) , g_39.f5) , 0x07C0FF9DL)))) | 0xA8C9L), p_74.f7)) | (**p_75)) , (*l_110)), 0xC1AF18482C93B026LL)) == 0x7EL) , (*g_86)))) , l_160) | l_160) < p_74.f2)) && g_2) | l_166.f2))) != p_74.f2))))
            {
                uint64_t l_235 = 0UL;
                int32_t l_269 = 9L;
                int32_t l_273 = (-6L);
                int64_t l_277 = (-9L);
                if (((safe_lshift_func_uint8_t_u_u(((void*)0 != &p_75), 6)) & (g_174 = (l_142 == (l_173 , (void*)0)))))
                {
                    for (l_160 = (-18); (l_160 == (-13)); l_160 = safe_add_func_int32_t_s_s(l_160, 1))
                    {
                        (**l_101) = (l_177[2][2][1] = (*g_87));
                        (*l_110) = (((g_39.f6 , 0UL) <= ((safe_sub_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_u(0x30A4L, 4)) == ((p_74.f3 , (*p_73)) != (*l_98))) && 0x884F1EB21537E41DLL), (g_141 = (l_182[0][1][0] != ((&g_174 == &g_174) & 0x46F5C477D8F50401LL))))) >= p_74.f3)) > (-1L));
                    }
                }
                else
                {
                    int64_t *l_185[7][2] = {{&g_141,&g_141},{&g_141,&g_141},{&g_141,&g_141},{&g_141,&g_141},{&g_141,&g_141},{&g_141,&g_141},{&g_141,&g_141}};
                    uint8_t *l_186 = (void*)0;
                    uint8_t *l_187 = &g_188[0];
                    int32_t l_208 = 0L;
                    int i, j;
                    if (((*l_110) = (g_54 ^ ((safe_mul_func_int8_t_s_s(((void*)0 != l_185[4][1]), ((--(*l_187)) || ((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((*l_187) = 0x3EL), ((l_207[6][1][1] |= (g_63 , (safe_div_func_uint64_t_u_u(g_39.f4, ((safe_add_func_int64_t_s_s((((safe_mul_func_int16_t_s_s((&l_142 != (void*)0), (safe_mod_func_int8_t_s_s(0xB1L, g_143[0])))) == p_74.f4) < 1UL), 18446744073709551615UL)) , p_74.f5))))) | 4294967288UL))), p_74.f7)), l_208)), g_39.f3)) ^ g_39.f4)))) , p_74.f2))))
                    {
                        uint32_t **l_212 = &l_159;
                        (*l_142) = (((g_209 , ((*p_72) = (*p_72))) , 0xA373L) | ((safe_lshift_func_uint8_t_u_u(0x46L, ((((*l_212) = l_142) != l_100[2]) >= g_92))) ^ ((g_54 <= ((*g_87) == (*g_87))) == 0x4B1B77E2L)));
                        (*g_87) = (l_142 = ((*p_75) = (**g_86)));
                        (*l_110) = 0xEFF6F5AAL;
                    }
                    else
                    {
                        uint8_t **l_218 = &l_187;
                        int8_t *l_221 = &l_207[6][1][1];
                        int8_t *l_224[8][9] = {{&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5]},{&g_225[0][2],&g_225[0][2],&g_225[0][2],&g_225[0][2],&g_225[0][2],&g_225[0][2],&g_225[0][2],&g_225[0][2],&g_225[0][2]},{&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5]},{&g_225[0][5],&g_225[0][2],&g_225[0][5],&g_225[0][2],&g_225[0][5],&g_225[0][2],&g_225[0][5],&g_225[0][2],&g_225[0][5]},{&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5]},{&g_225[0][2],&g_225[0][2],&g_225[0][2],&g_225[0][2],&g_225[0][2],&g_225[0][2],&g_225[0][2],&g_225[0][2],&g_225[0][2]},{&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5],&g_225[0][5]},{&g_225[0][5],&g_225[0][2],&g_225[0][5],&g_225[0][2],&g_225[0][5],&g_225[0][2],&g_225[0][5],&g_225[0][2],&g_225[0][5]}};
                        int32_t l_226[2][8][6];
                        uint8_t *l_227[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 8; j++)
                            {
                                for (k = 0; k < 6; k++)
                                    l_226[i][j][k] = 1L;
                            }
                        }
                        p_74.f3 |= (safe_rshift_func_uint8_t_u_u((((*l_142) == (safe_add_func_uint8_t_u_u((g_217 , ((*l_110) = (((((*l_218) = l_169) != (((*l_221) = (g_170 |= (!(g_39.f2 ^= (((void*)0 != (*g_86)) , (!p_74.f0)))))) , l_169)) & ((g_225[0][5] = (safe_rshift_func_int16_t_s_s(g_92, 3))) && (--g_188[0]))) <= g_39.f0))), l_208))) >= g_217.f4), g_39.f3));
                    }
                }
                (*l_110) = ((safe_lshift_func_uint16_t_u_u(((((*l_109) &= (safe_rshift_func_int8_t_s_s(l_235, ((safe_lshift_func_uint8_t_u_s((((g_5[4] != (safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(0x79BEL, (l_137 != (g_242 = &g_174)))) || (safe_mul_func_int8_t_s_s((((((*g_242) | (safe_div_func_int32_t_s_s(l_182[0][1][0], (0xC3610736L || ((*l_110) <= g_217.f5))))) || l_235) == p_74.f7) > l_235), 1UL))), p_74.f0))) != p_74.f5) && p_74.f6), g_39.f5)) , g_39.f6)))) ^ p_74.f2) || 0x293935BCL), g_5[4])) ^ l_235);
                (**g_86) = (**g_86);
                for (p_74.f5 = 0; (p_74.f5 == (-8)); --p_74.f5)
                {
                    uint64_t l_249 = 0x7765BBCBE842449FLL;
                    int32_t l_261[7] = {0L,0L,0xE9BAB346L,0L,0L,0xE9BAB346L,0L};
                    uint32_t l_274 = 7UL;
                    int i;
                    if (l_249)
                    {
                        uint8_t *l_255 = &g_188[0];
                        uint8_t *l_256 = &g_257;
                        const int32_t l_260 = (-2L);
                        int32_t l_268 = (-1L);
                        int32_t l_272[8] = {0x9BDB669DL,0x9BDB669DL,0x9BDB669DL,0x9BDB669DL,0x9BDB669DL,0x9BDB669DL,0x9BDB669DL,0x9BDB669DL};
                        int i;
                        l_261[3] ^= ((((p_74.f5 , ((((8L & 0xEAFFL) && (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(((1UL != (p_74.f6 == (g_254 , ((*l_255) = p_74.f1)))) <= (((*l_256) &= p_74.f5) , ((safe_lshift_func_uint8_t_u_u((g_209 , g_54), g_143[0])) & 18446744073709551615UL))), p_74.f0)) != 0x18L), l_260))) < g_63) | (*g_242))) < p_74.f7) != (*g_242)) | l_249);
                        (*l_110) = (safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_225[0][5], (safe_div_func_int8_t_s_s(l_261[4], g_188[0])))), 4));
                        --l_274;
                    }
                    else
                    {
                        (*l_110) = l_277;
                    }
                    l_278 = (*p_72);
                }
            }
            else
            {
                uint64_t l_303 = 1UL;
                int32_t l_310 = (-1L);
                for (p_74.f0 = 24; (p_74.f0 <= 20); p_74.f0 = safe_sub_func_int8_t_s_s(p_74.f0, 5))
                {
                    uint32_t l_287 = 18446744073709551615UL;
                    int8_t l_294 = 0x17L;
                    if ((*l_142))
                        break;
                    for (l_108.f5 = 0; l_108.f5 < 9; l_108.f5 += 1)
                    {
                        for (g_209.f5 = 0; g_209.f5 < 4; g_209.f5 += 1)
                        {
                            for (l_108.f7 = 0; l_108.f7 < 7; l_108.f7 += 1)
                            {
                                l_177[l_108.f5][g_209.f5][l_108.f7] = &g_63;
                            }
                        }
                    }
                    if ((**p_75))
                        break;
                    for (g_114 = (-12); (g_114 <= 21); g_114 = safe_add_func_int8_t_s_s(g_114, 6))
                    {
                        uint64_t *l_300 = (void*)0;
                        uint64_t *l_301 = &l_173.f7;
                        (*l_142) = (safe_div_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(l_287, g_39.f4)) ^ (safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u(p_74.f3, g_217.f2)), 0x89D3L))), (safe_mul_func_int8_t_s_s(((l_294 , (safe_rshift_func_int8_t_s_s(g_143[0], (((*l_301) = (safe_div_func_uint16_t_u_u((g_39.f2 <= (l_299 , p_74.f0)), (-6L)))) & l_302[7][7][0])))) | l_303), 9UL))));
                        (*l_110) &= 0x76027655L;
                        l_304 = &l_108;
                    }
                }
                for (l_108.f0 = (-14); (l_108.f0 >= (-11)); l_108.f0++)
                {
                    for (p_74.f0 = 0; (p_74.f0 == (-2)); p_74.f0 = safe_sub_func_uint8_t_u_u(p_74.f0, 2))
                    {
                        uint8_t *l_311 = &l_302[7][7][0];
                        int32_t l_312 = 0xF099D6D3L;
                        (*l_142) &= ((*l_110) = ((l_310 |= l_303) <= ((*l_311) = p_74.f2)));
                        (*l_110) &= l_312;
                    }
                }
            }
            (*l_110) = (p_74.f3 ^= ((safe_div_func_uint8_t_u_u((((l_166 , (g_337[1] ^= (safe_rshift_func_int8_t_s_s(((0x4EL == g_39.f1) ^ (((safe_rshift_func_uint16_t_u_u(g_217.f2, 9)) , &g_2) == ((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((l_326 = g_323) == l_327), 1)), ((+(((safe_rshift_func_uint16_t_u_s((l_173 , ((((safe_add_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(l_335, p_74.f6)), p_74.f0)) || 0x4C1F5CB2L) && 0x1A6A6CDAL) >= (-10L))), 0)) > (*g_324)) , p_74.f0)) && 0L))) , (*l_327)))), 0)))) , p_74.f5) | p_74.f1), g_170)) && g_228[0][9][3]));
            for (g_209.f1 = (-18); (g_209.f1 == 1); g_209.f1 = safe_add_func_uint8_t_u_u(g_209.f1, 5))
            {
                uint16_t l_351 = 0x623FL;
                uint32_t ***l_352 = &l_327;
                const int32_t l_362 = 0xC9411BC2L;
                int32_t l_382 = 6L;
                int32_t l_384[10][5] = {{9L,(-1L),0x8222B4EFL,0x8222B4EFL,(-1L)},{0xDA14404AL,0x23BCFAC4L,0x8222B4EFL,0x69F62E9FL,0x69F62E9FL},{0x23BCFAC4L,0xDA14404AL,0x23BCFAC4L,0x8222B4EFL,0x69F62E9FL},{(-1L),9L,0x69F62E9FL,9L,(-1L)},{0x23BCFAC4L,9L,0xDA14404AL,(-1L),0xDA14404AL},{0xDA14404AL,0xDA14404AL,0x69F62E9FL,(-1L),0x3DFDAE5EL},{9L,0x23BCFAC4L,0x23BCFAC4L,9L,0xDA14404AL},{9L,(-1L),0x8222B4EFL,0x8222B4EFL,(-1L)},{0xDA14404AL,0x23BCFAC4L,0x8222B4EFL,0x69F62E9FL,0x69F62E9FL},{0x23BCFAC4L,0xDA14404AL,0x23BCFAC4L,0x8222B4EFL,0x69F62E9FL}};
                int i, j;
                (*p_75) = (*g_87);
                for (g_114 = 0; (g_114 > (-15)); --g_114)
                {
                    uint8_t l_342[3][10][6] = {{{0x4EL,8UL,0x37L,1UL,250UL,0x79L},{1UL,250UL,0x79L,0x79L,250UL,1UL},{0x9AL,8UL,0x93L,0x4EL,3UL,1UL},{0x93L,0xA2L,0x79L,0x37L,247UL,0x79L},{0x93L,3UL,0x37L,0x4EL,252UL,0x4EL},{0x9AL,3UL,0x9AL,0x79L,247UL,0x37L},{1UL,0xA2L,0x9AL,1UL,3UL,0x4EL},{0x4EL,8UL,0x37L,1UL,250UL,0x79L},{1UL,250UL,0x79L,0x79L,250UL,1UL},{0x9AL,8UL,0x93L,0x4EL,3UL,1UL}},{{0x93L,0xA2L,0x79L,0x37L,247UL,0x79L},{0x93L,3UL,0x37L,0x4EL,252UL,0x4EL},{0x9AL,3UL,0x9AL,0x79L,247UL,0x37L},{1UL,0xA2L,0x9AL,1UL,3UL,0x4EL},{0x4EL,8UL,0x37L,1UL,250UL,0x79L},{1UL,250UL,0x79L,0x79L,0x79L,255UL},{255UL,0x9AL,1UL,1UL,0x1EL,255UL},{1UL,0x4EL,0x42L,0xEDL,0x93L,0x42L},{1UL,0x1EL,0xEDL,1UL,1UL,1UL},{255UL,0x1EL,255UL,0x42L,0x93L,0xEDL}},{{255UL,0x4EL,255UL,255UL,0x1EL,1UL},{1UL,0x9AL,0xEDL,255UL,0x79L,0x42L},{255UL,0x79L,0x42L,0x42L,0x79L,255UL},{255UL,0x9AL,1UL,1UL,0x1EL,255UL},{1UL,0x4EL,0x42L,0xEDL,0x93L,0x42L},{1UL,0x1EL,0xEDL,1UL,1UL,1UL},{255UL,0x1EL,255UL,0x42L,0x93L,0xEDL},{255UL,0x4EL,255UL,255UL,0x1EL,1UL},{1UL,0x9AL,0xEDL,255UL,0x79L,0x42L},{255UL,0x79L,0x42L,0x42L,0x79L,255UL}}};
                    uint32_t ****l_354 = &l_353;
                    int8_t l_381 = 5L;
                    int32_t l_383 = (-1L);
                    int8_t l_385 = (-9L);
                    int32_t l_386[5];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_386[i] = 0xBF9D6B5CL;
                    if (((*l_110) = ((p_74.f7 || (((*l_109) = ((p_74 , (l_342[2][8][2] > (safe_sub_func_uint32_t_u_u(((p_74.f0 &= ((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_351, ((l_352 == ((*l_354) = l_353)) , (0L <= l_355[0][1][1])))), ((-4L) ^ 1L))), 0x16L)) >= l_351)) != p_74.f1), 0x8735A37DL)))) ^ 0UL)) < l_351)) != (*l_110))))
                    {
                        uint32_t ***l_376 = &l_327;
                        int32_t *l_379[6] = {&l_335,&l_335,&l_335,&l_335,&l_335,&l_335};
                        int i;
                        (*p_72) = g_39;
                        (*g_87) = (((((p_74.f5 ^ 0UL) != (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(0x4CF0L, ((((l_362 > (--(**l_326))) > l_365[1]) ^ ((((safe_mod_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((*l_109) = ((safe_sub_func_int32_t_s_s(((l_372 != (~(p_74.f5 | (l_376 == ((*l_354) = g_377))))) || (-1L)), 0L)) , p_74.f6)), 65535UL)) < g_92), g_141)) , (*p_72)) , (*g_87)) == l_379[4])) , p_74.f5))), p_74.f4))) ^ p_74.f3) != p_74.f3) , &l_335);
                        return g_5[2];
                    }
                    else
                    {
                        (*p_72) = l_380;
                    }
                    --l_393;
                    l_384[0][1] = l_362;
                    (*g_87) = (*l_98);
                }
                l_384[4][4] |= g_396;
                l_398--;
            }
        }
        else
        {
            (*l_110) = (safe_rshift_func_int16_t_s_s(0x73ABL, 7));
        }
        for (l_108.f1 = 0; (l_108.f1 >= 0); l_108.f1 -= 1)
        {
            return g_217.f2;
        }
        ++l_404;
    }
    else
    {
        return g_39.f3;
    }
    for (g_63 = (-26); (g_63 > (-23)); g_63++)
    {
        const struct S0 l_420[1] = {{672,-7891,117,1,-2,-14832,-19,18446744073709551609UL,5679,120}};
        int32_t *l_447 = &g_5[0];
        int32_t l_454 = (-1L);
        int32_t l_457 = 1L;
        int8_t *l_469 = &g_225[0][5];
        int64_t *l_472 = (void*)0;
        int16_t l_474[5][5] = {{0x92C8L,0x92C8L,0x2269L,0x92C8L,0x92C8L},{0L,0x92C8L,0L,0L,0x92C8L},{0x92C8L,0L,0L,0x92C8L,0L},{0x92C8L,0x92C8L,0x2269L,0x92C8L,0x92C8L},{0L,0x92C8L,0L,0L,0x92C8L}};
        int i, j;
        for (p_74.f1 = 0; (p_74.f1 == 9); p_74.f1++)
        {
            uint64_t l_415[7] = {0x407FC92C2BD86C56LL,0xD7E3B0A91AB7716BLL,0xD7E3B0A91AB7716BLL,0x407FC92C2BD86C56LL,0xD7E3B0A91AB7716BLL,0xD7E3B0A91AB7716BLL,0x407FC92C2BD86C56LL};
            uint32_t ***l_421 = &g_378;
            uint32_t ****l_422[4];
            uint16_t *l_425[8][3][2] = {{{&g_138,&g_138},{&g_138,&g_138},{&g_138,&g_138}},{{&g_138,(void*)0},{&g_138,&g_138},{&g_138,&g_138}},{{&g_138,&g_138},{&g_138,&g_138},{&g_138,&g_138}},{{&g_138,(void*)0},{&g_138,&g_138},{&g_138,&g_138}},{{&g_138,&g_138},{&g_138,&g_138},{&g_138,(void*)0}},{{&g_138,&g_138},{&g_138,&g_138},{&g_138,&g_138}},{{&g_138,&g_138},{&g_138,&g_138},{&g_138,(void*)0}},{{&g_138,&g_138},{&g_138,&g_138},{&g_138,&g_138}}};
            int32_t l_426 = 0x11FF991BL;
            int8_t l_427 = (-5L);
            int32_t l_455 = (-1L);
            int32_t l_473[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
            struct S3 l_477[6] = {{-91,1,306,31843,258,-8,-400},{-91,1,306,31843,258,-8,-400},{-91,1,306,31843,258,-8,-400},{-91,1,306,31843,258,-8,-400},{-91,1,306,31843,258,-8,-400},{-91,1,306,31843,258,-8,-400}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_422[i] = (void*)0;
            l_427 = (((*g_377) != (*g_377)) != (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((**g_323) <= 0xAA540F61L), (l_426 = (l_415[2] & (safe_add_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u(((l_420[0] , &g_337[1]) != (void*)0), (((l_423 = l_421) != (void*)0) && 0x2847701B571264E6LL))) >= 0L) , (-7L)), l_415[2])))))), l_420[0].f0)));
            for (g_257 = 0; (g_257 <= 46); g_257 = safe_add_func_uint32_t_u_u(g_257, 1))
            {
                uint8_t *l_445[4][6] = {{&g_257,&g_257,&g_257,&g_257,&g_257,&g_257},{&g_257,&g_257,&g_257,&g_257,&g_257,&g_257},{&g_257,&g_257,&g_257,&g_257,&g_257,&g_257},{&g_257,&g_257,&g_257,&g_257,&g_257,&g_257}};
                uint8_t **l_446 = &l_445[3][5];
                int32_t l_448 = 0L;
                int32_t l_458 = 0L;
                int32_t l_459 = 8L;
                uint16_t l_460 = 65533UL;
                int i, j;
                (*l_99) = (p_74.f4 , (*l_99));
                if ((safe_mul_func_int16_t_s_s((p_74.f5 = (safe_mod_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u((safe_div_func_int32_t_s_s(((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((--(**l_424)) > ((safe_rshift_func_int8_t_s_u((g_305.f1 , (g_225[0][5] = (-1L))), (0x68A7C93FD238DC69LL != (&g_396 == ((*l_446) = l_445[3][5]))))) && ((**l_101) != ((*p_73) = l_447)))), 14)), 0x81L)) & ((((-4L) || l_415[6]) <= 0x3C27L) < l_427)), (*l_447))))) > g_257), 0x67L))), l_448)))
                {
                    int32_t *l_452 = &l_426;
                    int32_t *l_453[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_453[i] = &l_391[2];
                    l_451 = g_449;
                    --l_460;
                    l_474[4][4] = (5L <= (safe_rshift_func_uint16_t_u_u((l_107[0] , (safe_sub_func_int64_t_s_s(0x9A772CBAF9A9E991LL, (+(((0xE677DC1A4F2CCB98LL != (65530UL ^ (l_455 = ((g_468[1] = &g_225[0][5]) != l_469)))) & (safe_div_func_uint32_t_u_u((((g_138 = (((void*)0 == l_472) && g_217.f4)) ^ 8UL) == l_426), l_473[2]))) , g_254.f0))))), 11)));
                }
                else
                {
                    for (g_2 = 0; (g_2 != 8); g_2 = safe_add_func_int16_t_s_s(g_2, 8))
                    {
                        const struct S4 *l_479 = &g_254;
                        const struct S4 **l_478 = &l_479;
                        (*p_72) = l_477[1];
                        (*l_478) = &g_254;
                    }
                }
                (**l_101) = g_480;
            }
        }
        (*p_72) = (g_170 , g_39);
    }
    return g_217.f5;
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
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
    transparent_crc(g_13.f1, "g_13.f1", print_hash_value);
    transparent_crc(g_13.f2, "g_13.f2", print_hash_value);
    transparent_crc(g_13.f3, "g_13.f3", print_hash_value);
    transparent_crc(g_13.f4, "g_13.f4", print_hash_value);
    transparent_crc(g_13.f5, "g_13.f5", print_hash_value);
    transparent_crc(g_13.f6, "g_13.f6", print_hash_value);
    transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
    transparent_crc(g_39.f1, "g_39.f1", print_hash_value);
    transparent_crc(g_39.f2, "g_39.f2", print_hash_value);
    transparent_crc(g_39.f3, "g_39.f3", print_hash_value);
    transparent_crc(g_39.f4, "g_39.f4", print_hash_value);
    transparent_crc(g_39.f5, "g_39.f5", print_hash_value);
    transparent_crc(g_39.f6, "g_39.f6", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_143[i], "g_143[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_188[i], "g_188[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_209.f0, "g_209.f0", print_hash_value);
    transparent_crc(g_209.f1, "g_209.f1", print_hash_value);
    transparent_crc(g_209.f2, "g_209.f2", print_hash_value);
    transparent_crc(g_209.f3, "g_209.f3", print_hash_value);
    transparent_crc(g_209.f4, "g_209.f4", print_hash_value);
    transparent_crc(g_209.f5, "g_209.f5", print_hash_value);
    transparent_crc(g_209.f6, "g_209.f6", print_hash_value);
    transparent_crc(g_209.f7, "g_209.f7", print_hash_value);
    transparent_crc(g_217.f0, "g_217.f0", print_hash_value);
    transparent_crc(g_217.f1, "g_217.f1", print_hash_value);
    transparent_crc(g_217.f2, "g_217.f2", print_hash_value);
    transparent_crc(g_217.f3, "g_217.f3", print_hash_value);
    transparent_crc(g_217.f4, "g_217.f4", print_hash_value);
    transparent_crc(g_217.f5, "g_217.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_225[i][j], "g_225[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_228[i][j][k], "g_228[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_254.f0, "g_254.f0", print_hash_value);
    transparent_crc(g_254.f1, "g_254.f1", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_305.f0, "g_305.f0", print_hash_value);
    transparent_crc(g_305.f1, "g_305.f1", print_hash_value);
    transparent_crc(g_305.f2, "g_305.f2", print_hash_value);
    transparent_crc(g_305.f3, "g_305.f3", print_hash_value);
    transparent_crc(g_305.f4, "g_305.f4", print_hash_value);
    transparent_crc(g_305.f5, "g_305.f5", print_hash_value);
    transparent_crc(g_305.f6, "g_305.f6", print_hash_value);
    transparent_crc(g_305.f7, "g_305.f7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_337[i], "g_337[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_550, "g_550", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_599.f0, "g_599.f0", print_hash_value);
    transparent_crc(g_599.f1, "g_599.f1", print_hash_value);
    transparent_crc(g_599.f2, "g_599.f2", print_hash_value);
    transparent_crc(g_599.f3, "g_599.f3", print_hash_value);
    transparent_crc(g_599.f4, "g_599.f4", print_hash_value);
    transparent_crc(g_599.f5, "g_599.f5", print_hash_value);
    transparent_crc(g_599.f6, "g_599.f6", print_hash_value);
    transparent_crc(g_599.f7, "g_599.f7", print_hash_value);
    transparent_crc(g_599.f8, "g_599.f8", print_hash_value);
    transparent_crc(g_599.f9, "g_599.f9", print_hash_value);
    transparent_crc(g_655.f0, "g_655.f0", print_hash_value);
    transparent_crc(g_655.f1, "g_655.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_876[i][j], "g_876[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1052, "g_1052", print_hash_value);
    transparent_crc(g_1162.f0, "g_1162.f0", print_hash_value);
    transparent_crc(g_1162.f1, "g_1162.f1", print_hash_value);
    transparent_crc(g_1162.f2, "g_1162.f2", print_hash_value);
    transparent_crc(g_1162.f3, "g_1162.f3", print_hash_value);
    transparent_crc(g_1162.f4, "g_1162.f4", print_hash_value);
    transparent_crc(g_1162.f5, "g_1162.f5", print_hash_value);
    transparent_crc(g_1162.f6, "g_1162.f6", print_hash_value);
    transparent_crc(g_1162.f7, "g_1162.f7", print_hash_value);
    transparent_crc(g_1191.f0, "g_1191.f0", print_hash_value);
    transparent_crc(g_1191.f1, "g_1191.f1", print_hash_value);
    transparent_crc(g_1191.f2, "g_1191.f2", print_hash_value);
    transparent_crc(g_1191.f3, "g_1191.f3", print_hash_value);
    transparent_crc(g_1191.f4, "g_1191.f4", print_hash_value);
    transparent_crc(g_1191.f5, "g_1191.f5", print_hash_value);
    transparent_crc(g_1383, "g_1383", print_hash_value);
    transparent_crc(g_1391.f0, "g_1391.f0", print_hash_value);
    transparent_crc(g_1391.f1, "g_1391.f1", print_hash_value);
    transparent_crc(g_1391.f2, "g_1391.f2", print_hash_value);
    transparent_crc(g_1391.f3, "g_1391.f3", print_hash_value);
    transparent_crc(g_1391.f4, "g_1391.f4", print_hash_value);
    transparent_crc(g_1391.f5, "g_1391.f5", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1439[i], "g_1439[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
