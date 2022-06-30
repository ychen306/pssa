// RUN: %clang -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 19545B0B
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
   unsigned f0 : 29;
   int32_t f1;
   unsigned f2 : 6;
   const uint64_t f3;
   uint16_t f4;
   int16_t f5;
   uint32_t f6;
   int32_t f7;
   const uint8_t f8;
   int16_t f9;
};
#pragma pack(pop)

struct S1 {
   signed f0 : 17;
   const unsigned f1 : 10;
   const unsigned f2 : 13;
   const unsigned f3 : 5;
   signed f4 : 30;
};

union U2 {
   const int8_t * f0;
   int8_t * f1;
   uint32_t f2;
};


static const int8_t g_9 = 1L;
static const int8_t * const g_8 = &g_9;
static int8_t g_22 = 0x22L;
static struct S0 g_47[7][7] = {{{7522,1L,5,0x606BDE5E333AB1ADLL,0x13F3L,0x2C75L,18446744073709551612UL,3L,0UL,1L},{17732,-1L,3,0x0B8378C3A3B2B4B2LL,0xF959L,-2L,8UL,0x01672C65L,1UL,-1L},{17732,-1L,3,0x0B8378C3A3B2B4B2LL,0xF959L,-2L,8UL,0x01672C65L,1UL,-1L},{7522,1L,5,0x606BDE5E333AB1ADLL,0x13F3L,0x2C75L,18446744073709551612UL,3L,0UL,1L},{17882,0x0BE945D4L,4,0x5678D5680A256013LL,1UL,0x3333L,0xB9622CFBL,0L,1UL,0x2F9EL},{15965,0xDDC18638L,2,0x3AE4374F1E5EB906LL,65529UL,1L,0x03614A4DL,-1L,0UL,0x2673L},{17882,0x0BE945D4L,4,0x5678D5680A256013LL,1UL,0x3333L,0xB9622CFBL,0L,1UL,0x2F9EL}},{{20844,1L,1,18446744073709551608UL,1UL,0xCBD0L,1UL,0xA3CE577EL,0xFBL,0x33D7L},{6961,0xDD176C5BL,5,1UL,65535UL,0xF4D9L,0UL,0x4EEA3775L,0xD1L,0x28A3L},{6961,0xDD176C5BL,5,1UL,65535UL,0xF4D9L,0UL,0x4EEA3775L,0xD1L,0x28A3L},{20844,1L,1,18446744073709551608UL,1UL,0xCBD0L,1UL,0xA3CE577EL,0xFBL,0x33D7L},{4639,-1L,4,0xF43A495B2841C2FCLL,0UL,0xE8FAL,0xC18A1C1EL,0xAD3EE773L,254UL,-7L},{12596,0x571BE33BL,5,6UL,1UL,0L,0x7B4AD293L,4L,255UL,0xF941L},{4639,-1L,4,0xF43A495B2841C2FCLL,0UL,0xE8FAL,0xC18A1C1EL,0xAD3EE773L,254UL,-7L}},{{7522,1L,5,0x606BDE5E333AB1ADLL,0x13F3L,0x2C75L,18446744073709551612UL,3L,0UL,1L},{17732,-1L,3,0x0B8378C3A3B2B4B2LL,0xF959L,-2L,8UL,0x01672C65L,1UL,-1L},{17732,-1L,3,0x0B8378C3A3B2B4B2LL,0xF959L,-2L,8UL,0x01672C65L,1UL,-1L},{7522,1L,5,0x606BDE5E333AB1ADLL,0x13F3L,0x2C75L,18446744073709551612UL,3L,0UL,1L},{17882,0x0BE945D4L,4,0x5678D5680A256013LL,1UL,0x3333L,0xB9622CFBL,0L,1UL,0x2F9EL},{15965,0xDDC18638L,2,0x3AE4374F1E5EB906LL,65529UL,1L,0x03614A4DL,-1L,0UL,0x2673L},{17882,0x0BE945D4L,4,0x5678D5680A256013LL,1UL,0x3333L,0xB9622CFBL,0L,1UL,0x2F9EL}},{{20844,1L,1,18446744073709551608UL,1UL,0xCBD0L,1UL,0xA3CE577EL,0xFBL,0x33D7L},{6961,0xDD176C5BL,5,1UL,65535UL,0xF4D9L,0UL,0x4EEA3775L,0xD1L,0x28A3L},{6961,0xDD176C5BL,5,1UL,65535UL,0xF4D9L,0UL,0x4EEA3775L,0xD1L,0x28A3L},{20844,1L,1,18446744073709551608UL,1UL,0xCBD0L,1UL,0xA3CE577EL,0xFBL,0x33D7L},{4639,-1L,4,0xF43A495B2841C2FCLL,0UL,0xE8FAL,0xC18A1C1EL,0xAD3EE773L,254UL,-7L},{12596,0x571BE33BL,5,6UL,1UL,0L,0x7B4AD293L,4L,255UL,0xF941L},{4639,-1L,4,0xF43A495B2841C2FCLL,0UL,0xE8FAL,0xC18A1C1EL,0xAD3EE773L,254UL,-7L}},{{7522,1L,5,0x606BDE5E333AB1ADLL,0x13F3L,0x2C75L,18446744073709551612UL,3L,0UL,1L},{17732,-1L,3,0x0B8378C3A3B2B4B2LL,0xF959L,-2L,8UL,0x01672C65L,1UL,-1L},{17732,-1L,3,0x0B8378C3A3B2B4B2LL,0xF959L,-2L,8UL,0x01672C65L,1UL,-1L},{7522,1L,5,0x606BDE5E333AB1ADLL,0x13F3L,0x2C75L,18446744073709551612UL,3L,0UL,1L},{17882,0x0BE945D4L,4,0x5678D5680A256013LL,1UL,0x3333L,0xB9622CFBL,0L,1UL,0x2F9EL},{15965,0xDDC18638L,2,0x3AE4374F1E5EB906LL,65529UL,1L,0x03614A4DL,-1L,0UL,0x2673L},{17882,0x0BE945D4L,4,0x5678D5680A256013LL,1UL,0x3333L,0xB9622CFBL,0L,1UL,0x2F9EL}},{{20844,1L,1,18446744073709551608UL,1UL,0xCBD0L,1UL,0xA3CE577EL,0xFBL,0x33D7L},{6961,0xDD176C5BL,5,1UL,65535UL,0xF4D9L,0UL,0x4EEA3775L,0xD1L,0x28A3L},{6961,0xDD176C5BL,5,1UL,65535UL,0xF4D9L,0UL,0x4EEA3775L,0xD1L,0x28A3L},{20844,1L,1,18446744073709551608UL,1UL,0xCBD0L,1UL,0xA3CE577EL,0xFBL,0x33D7L},{4639,-1L,4,0xF43A495B2841C2FCLL,0UL,0xE8FAL,0xC18A1C1EL,0xAD3EE773L,254UL,-7L},{12596,0x571BE33BL,5,6UL,1UL,0L,0x7B4AD293L,4L,255UL,0xF941L},{4639,-1L,4,0xF43A495B2841C2FCLL,0UL,0xE8FAL,0xC18A1C1EL,0xAD3EE773L,254UL,-7L}},{{7522,1L,5,0x606BDE5E333AB1ADLL,0x13F3L,0x2C75L,18446744073709551612UL,3L,0UL,1L},{17732,-1L,3,0x0B8378C3A3B2B4B2LL,0xF959L,-2L,8UL,0x01672C65L,1UL,-1L},{17732,-1L,3,0x0B8378C3A3B2B4B2LL,0xF959L,-2L,8UL,0x01672C65L,1UL,-1L},{7522,1L,5,0x606BDE5E333AB1ADLL,0x13F3L,0x2C75L,18446744073709551612UL,3L,0UL,1L},{14999,0x5F1E6118L,0,0x95192C249DD62858LL,65535UL,1L,0x25E6B711L,0L,4UL,-1L},{11697,0xBDD2A48BL,7,0x52F0C8C580B0B8B0LL,0x3135L,0x901AL,0x003B9FE2L,0xF19B52D9L,0x6EL,0x5427L},{14999,0x5F1E6118L,0,0x95192C249DD62858LL,65535UL,1L,0x25E6B711L,0L,4UL,-1L}}};
static struct S1 g_48[4][7] = {{{200,19,25,4,21325},{-341,2,25,4,24549},{-341,2,25,4,24549},{200,19,25,4,21325},{311,18,60,4,-22929},{-103,4,66,0,354},{311,18,60,4,-22929}},{{200,19,25,4,21325},{-341,2,25,4,24549},{-341,2,25,4,24549},{200,19,25,4,21325},{311,18,60,4,-22929},{-103,4,66,0,354},{311,18,60,4,-22929}},{{200,19,25,4,21325},{-341,2,25,4,24549},{-341,2,25,4,24549},{200,19,25,4,21325},{311,18,60,4,-22929},{-103,4,66,0,354},{311,18,60,4,-22929}},{{200,19,25,4,21325},{-341,2,25,4,24549},{-341,2,25,4,24549},{200,19,25,4,21325},{311,18,60,4,-22929},{-103,4,66,0,354},{311,18,60,4,-22929}}};
static int32_t g_67 = 3L;
static struct S0 *g_73 = &g_47[6][3];
static struct S0 **g_72 = &g_73;
static int8_t g_75 = (-9L);
static int32_t g_79 = 1L;
static uint32_t g_107 = 0x3A19F56DL;
static uint64_t g_138 = 18446744073709551615UL;
static uint64_t g_144 = 3UL;
static struct S0 *g_175 = &g_47[6][6];
static uint8_t g_182 = 5UL;
static int64_t g_190 = 0x37FA7DB7F8A6E954LL;
static int32_t g_256 = 2L;
static int32_t g_257 = 0x3F1AFA0BL;
static uint8_t g_258[4] = {0x59L,0x59L,0x59L,0x59L};
static int8_t g_282 = (-1L);
static int64_t g_283 = 0xAA3A57C6E5AD4D92LL;
static int32_t g_284 = 8L;
static uint64_t g_285[9][4][3] = {{{18446744073709551615UL,18446744073709551613UL,3UL},{3UL,0x384C50C4B61ED80ALL,1UL},{0xBEE661A0D667F984LL,0xAFEF980BA0935403LL,1UL},{0xFF53A8C2101A90A6LL,18446744073709551609UL,3UL}},{{1UL,0UL,18446744073709551612UL},{1UL,18446744073709551609UL,0x1CC23A81BD4E096BLL},{1UL,0xAFEF980BA0935403LL,0xD6F9B7640594B7FELL},{1UL,0x384C50C4B61ED80ALL,1UL}},{{1UL,18446744073709551613UL,0x1FDCF0F10777FDD7LL},{1UL,0x46F1B900C287B772LL,1UL},{0xFF53A8C2101A90A6LL,0x20C5512B700E47C7LL,0xD6F9B7640594B7FELL},{0xBEE661A0D667F984LL,0x20C5512B700E47C7LL,0x1CC23A81BD4E096BLL}},{{3UL,0x46F1B900C287B772LL,18446744073709551612UL},{18446744073709551615UL,18446744073709551613UL,3UL},{3UL,0x384C50C4B61ED80ALL,1UL},{0xBEE661A0D667F984LL,0xAFEF980BA0935403LL,1UL}},{{0xFF53A8C2101A90A6LL,18446744073709551609UL,3UL},{1UL,0UL,18446744073709551612UL},{1UL,18446744073709551609UL,0x1CC23A81BD4E096BLL},{1UL,0xAFEF980BA0935403LL,0xD6F9B7640594B7FELL}},{{1UL,0x384C50C4B61ED80ALL,1UL},{1UL,18446744073709551613UL,0x1FDCF0F10777FDD7LL},{1UL,0x46F1B900C287B772LL,1UL},{0xFF53A8C2101A90A6LL,0x20C5512B700E47C7LL,0xD6F9B7640594B7FELL}},{{0xBEE661A0D667F984LL,0x20C5512B700E47C7LL,0x1CC23A81BD4E096BLL},{3UL,0x46F1B900C287B772LL,18446744073709551612UL},{18446744073709551615UL,18446744073709551613UL,3UL},{3UL,0x384C50C4B61ED80ALL,1UL}},{{0xBEE661A0D667F984LL,0xAFEF980BA0935403LL,1UL},{0xFF53A8C2101A90A6LL,18446744073709551609UL,3UL},{1UL,0UL,18446744073709551612UL},{1UL,18446744073709551609UL,0x1CC23A81BD4E096BLL}},{{1UL,0xAFEF980BA0935403LL,0xD6F9B7640594B7FELL},{1UL,0x384C50C4B61ED80ALL,1UL},{1UL,18446744073709551613UL,0x1FDCF0F10777FDD7LL},{1UL,0x46F1B900C287B772LL,1UL}}};
static uint64_t g_304 = 2UL;
static struct S0 ***g_321[2][5][7] = {{{&g_72,&g_72,(void*)0,(void*)0,&g_72,(void*)0,&g_72},{&g_72,&g_72,&g_72,&g_72,&g_72,&g_72,&g_72},{&g_72,(void*)0,&g_72,&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,(void*)0,&g_72,&g_72,&g_72,&g_72},{(void*)0,&g_72,&g_72,&g_72,&g_72,&g_72,&g_72}},{{&g_72,&g_72,&g_72,(void*)0,&g_72,&g_72,&g_72},{(void*)0,&g_72,&g_72,(void*)0,&g_72,(void*)0,&g_72},{&g_72,&g_72,&g_72,&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,&g_72,(void*)0,&g_72,&g_72,&g_72},{&g_72,(void*)0,&g_72,&g_72,(void*)0,&g_72,(void*)0}}};
static struct S0 ****g_320 = &g_321[0][1][5];
static int16_t *g_345 = &g_47[6][6].f9;
static const int16_t g_349 = 0x533BL;
static const int16_t *g_348[8] = {&g_349,(void*)0,&g_349,(void*)0,&g_349,(void*)0,&g_349,(void*)0};
static uint16_t g_361[3][6][10] = {{{0x856BL,1UL,0UL,0x71EEL,0x856BL,7UL,0x5FA0L,7UL,0x856BL,0x71EEL},{0x783BL,1UL,0x783BL,0UL,0x2A36L,0x71EEL,0xD8BBL,0UL,65534UL,1UL},{0x254BL,0UL,65535UL,3UL,0x856BL,3UL,65535UL,0UL,0x254BL,0x91B1L},{0xD8BBL,6UL,0x783BL,0UL,65534UL,6UL,0x2A36L,7UL,0x2A36L,6UL},{0x254BL,0UL,0UL,0UL,0x254BL,1UL,0x5FA0L,0x71EEL,0x254BL,7UL},{0x783BL,7UL,65534UL,3UL,0x2A36L,0UL,0x2A36L,3UL,65534UL,7UL}},{{0x856BL,3UL,65535UL,0UL,0x254BL,0x91B1L,65535UL,6UL,0x856BL,6UL},{0xD8BBL,0x91B1L,65534UL,0x71EEL,65534UL,0x91B1L,0xD8BBL,1UL,0x2A36L,0x91B1L},{0x856BL,0x71EEL,0UL,1UL,0x856BL,0UL,0x5FA0L,0UL,0x856BL,1UL},{0x783BL,0x71EEL,0x783BL,0x91B1L,0x2A36L,1UL,0xD8BBL,0x91B1L,65534UL,0x71EEL},{0x254BL,0x91B1L,65535UL,6UL,0x856BL,6UL,65535UL,0x91B1L,0x254BL,0UL},{0xD8BBL,3UL,0x783BL,7UL,65534UL,3UL,0x2A36L,0UL,0x2A36L,3UL}},{{0x254BL,7UL,0UL,7UL,0x254BL,0x71EEL,0x5FA0L,1UL,0x254BL,0UL},{0x783BL,0UL,65534UL,6UL,0x2A36L,7UL,0x2A36L,6UL,65534UL,0UL},{0x856BL,6UL,65535UL,0x91B1L,0x254BL,0UL,65535UL,3UL,0x856BL,3UL},{0xD8BBL,0UL,65534UL,1UL,65534UL,0UL,0xD8BBL,0x71EEL,0x2A36L,0UL},{0x856BL,1UL,0UL,0x71EEL,0x856BL,7UL,0x5FA0L,7UL,0x856BL,0x71EEL},{0x783BL,1UL,0x783BL,0UL,0x2A36L,0x71EEL,0xD8BBL,0UL,65534UL,1UL}}};
static int32_t *g_397 = &g_79;
static int32_t **g_396 = &g_397;
static struct S1 g_407 = {-202,8,79,4,24309};
static union U2 g_408[6][3] = {{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}};
static int16_t g_424 = 0x82D5L;
static union U2 *g_522 = &g_408[5][2];
static union U2 **g_521[10] = {&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522};
static uint64_t g_603 = 0x02E0EAB32600E700LL;
static int32_t g_618 = 0xD685D0DFL;
static uint32_t g_619[7] = {0x9E1732B4L,0x9E1732B4L,0x9E1732B4L,0x9E1732B4L,0x9E1732B4L,0x9E1732B4L,0x9E1732B4L};
static int8_t g_733 = 0x1FL;
static int64_t g_795 = 0L;
static uint32_t g_807 = 4294967295UL;
static struct S1 *g_897 = &g_48[0][3];
static struct S1 **g_896 = &g_897;
static const union U2 g_908 = {0};
static int8_t g_941 = 0x68L;
static uint16_t *g_950 = &g_361[0][5][8];
static uint32_t g_1022 = 0xF0B9DF5BL;
static int32_t g_1087 = 0x7D0AC5B9L;
static int8_t g_1089 = 0x62L;
static int64_t *g_1116 = &g_283;
static union U2 ***g_1128[4] = {&g_521[1],&g_521[1],&g_521[1],&g_521[1]};
static union U2 ****g_1127 = &g_1128[1];
static int16_t **g_1187 = (void*)0;
static int16_t ***g_1186[4][1] = {{&g_1187},{&g_1187},{&g_1187},{&g_1187}};
static int16_t ****g_1185 = &g_1186[3][0];
static const int16_t **g_1190[6][2] = {{&g_348[0],&g_348[0]},{&g_348[0],&g_348[0]},{&g_348[0],&g_348[0]},{&g_348[0],&g_348[0]},{&g_348[0],&g_348[0]},{&g_348[0],&g_348[0]}};
static const int16_t ***g_1189 = &g_1190[4][1];
static const int16_t ****g_1188[9] = {&g_1189,&g_1189,&g_1189,&g_1189,&g_1189,&g_1189,&g_1189,&g_1189,&g_1189};
static int32_t *g_1217 = &g_1087;
static uint8_t *g_1230 = &g_182;
static uint8_t **g_1229 = &g_1230;
static uint8_t **g_1232 = &g_1230;
static uint16_t g_1263 = 0x0BFEL;
static int64_t * const *g_1274 = &g_1116;
static int64_t * const **g_1273[10] = {&g_1274,&g_1274,&g_1274,&g_1274,&g_1274,&g_1274,&g_1274,&g_1274,&g_1274,&g_1274};
static uint32_t **g_1337 = (void*)0;
static int16_t g_1408 = 0x1DBBL;
static int32_t g_1450 = 1L;
static uint64_t g_1459 = 0UL;
static uint8_t g_1487 = 246UL;
static int8_t *g_1527 = (void*)0;
static int8_t * const g_1529 = &g_22;
static int8_t * const *g_1528 = &g_1529;
static int16_t g_1674 = 5L;
static int64_t g_1701[4] = {6L,6L,6L,6L};
static uint32_t g_1702 = 4294967295UL;
static uint32_t g_1726 = 0x5DC61801L;
static int32_t ** const **g_1790 = (void*)0;
static union U2 *****g_1836[2] = {&g_1127,&g_1127};
static int32_t g_1885 = 0xC1A7AA48L;
static uint8_t g_1886 = 6UL;
static int32_t g_1918 = (-1L);
static const struct S0 g_1944 = {5896,0xEDB72DBBL,2,18446744073709551606UL,65535UL,0x8AE4L,6UL,-10L,0x8CL,-7L};
static uint32_t g_2004 = 0xC378E82BL;
static int32_t g_2088 = 0x0F747DD8L;
static const int32_t *g_2101 = &g_1087;
static const int32_t **g_2100 = &g_2101;
static const int32_t ***g_2099[6][7] = {{&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100},{&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100},{&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100},{&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100},{&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100},{&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100,&g_2100}};
static int8_t **g_2231[5][6][4] = {{{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527}},{{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527}},{{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527}},{{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527}},{{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527},{&g_1527,&g_1527,&g_1527,&g_1527}}};
static int8_t ***g_2230 = &g_2231[2][0][1];
static uint16_t **g_2248 = &g_950;
static struct S0 g_2304 = {15704,0xFF66D27FL,4,1UL,65533UL,0x174DL,18446744073709551615UL,4L,0x4BL,0x808CL};
static int32_t g_2359 = (-9L);
static int32_t g_2361 = 0L;
static const int32_t *g_2368[10] = {&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284};
static const int32_t **g_2367 = &g_2368[1];
static uint32_t g_2399 = 18446744073709551615UL;
static struct S0 * const * const **g_2427 = (void*)0;
static struct S0 g_2435 = {22890,7L,5,0xDED4007721D6A582LL,0x98D1L,4L,1UL,-2L,246UL,0xBAE6L};
static struct S1 g_2442 = {-180,14,82,3,11860};
static uint16_t ***g_2561 = (void*)0;
static int8_t ****g_2586 = &g_2230;
static int8_t g_2628 = 0x36L;
static uint64_t g_2629 = 18446744073709551615UL;
static int32_t g_2718[2] = {0L,0L};
static int32_t *g_2741 = &g_2304.f7;
static int32_t **g_2740 = &g_2741;
static uint16_t g_2815 = 0UL;
static struct S0 * const g_2859 = &g_2435;
static const uint32_t g_2969 = 3UL;



static uint64_t func_1(void);
static int32_t func_2(const int8_t * const p_3, uint8_t p_4, int64_t p_5, struct S1 p_6, int8_t * p_7);
static uint32_t func_15(struct S1 p_16, int8_t * p_17, union U2 p_18, int8_t p_19);
static union U2 func_23(uint32_t p_24, union U2 p_25, int32_t p_26, int8_t p_27, int8_t * p_28);
static union U2 func_29(uint32_t p_30, struct S1 p_31, uint32_t p_32, int8_t * p_33);
static struct S1 func_34(const int8_t * p_35, int8_t * p_36, int8_t * p_37, uint8_t p_38);
static uint64_t func_55(struct S0 * p_56, int8_t * p_57, int8_t * p_58, struct S1 p_59, struct S0 * p_60);
static struct S0 * func_61(uint64_t p_62, struct S0 ** p_63, struct S0 p_64, struct S1 p_65, struct S0 p_66);
static struct S0 ** func_68(int8_t p_69, int32_t p_70, const int8_t * p_71);
static uint8_t func_76(int64_t p_77);
# 180 "<stdin>"
static uint64_t func_1(void)
{
    uint8_t l_10 = 1UL;
    struct S1 l_20 = {-50,26,12,1,-4539};
    int8_t *l_21 = &g_22;
    int8_t *l_41 = &g_22;
    int8_t *l_42[5];
    union U2 l_2457 = {0};
    int8_t *l_2635 = &g_2628;
    int i;
    for (i = 0; i < 5; i++)
        l_42[i] = &g_22;
    l_20.f4 = func_2(g_8, l_10, (safe_mul_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(func_15(l_20, l_21, (func_23(l_20.f2, func_29(l_10, func_34(((safe_sub_func_int8_t_s_s(((&g_22 == l_41) != g_9), g_22)) , &g_9), l_42[1], l_42[0], l_20.f1), g_407.f0, l_41), l_20.f4, (*g_8), g_1527) , l_2457), l_20.f4), l_20.f2)) ^ 18446744073709551615UL), g_407.f1)), l_20, l_2635);
    return l_10;
}







static int32_t func_2(const int8_t * const p_3, uint8_t p_4, int64_t p_5, struct S1 p_6, int8_t * p_7)
{
    union U2 **l_2638 = &g_522;
    const int32_t l_2641 = (-1L);
    int16_t ***l_2644 = (void*)0;
    int32_t *l_2647 = (void*)0;
    int32_t **l_2646 = &l_2647;
    int32_t *** const l_2645[9] = {(void*)0,&l_2646,(void*)0,&l_2646,(void*)0,&l_2646,(void*)0,&l_2646,(void*)0};
    int32_t **l_2648[3];
    int8_t l_2649 = 0L;
    const struct S1 l_2664 = {219,11,77,3,-15740};
    struct S1 **l_2666 = &g_897;
    int8_t * const **l_2678 = &g_1528;
    int8_t * const ***l_2677 = &l_2678;
    int32_t l_2703 = 0L;
    int32_t l_2714[1][4];
    int32_t *l_2828 = (void*)0;
    uint64_t l_2894 = 0xCCB1FB2FB07FBAF6LL;
    const uint32_t *l_2968 = &g_2969;
    uint32_t *l_2980 = &g_807;
    uint32_t **l_2979[7] = {&l_2980,&l_2980,&l_2980,&l_2980,&l_2980,&l_2980,&l_2980};
    int32_t l_2982[3][3][4] = {{{2L,0x4F28882AL,0x869FEBC3L,0x4F28882AL},{0x37C94DF5L,0xFF4B2717L,0x42921E7FL,2L},{0xFBBB4E97L,0L,0x4F28882AL,0xCA70AA73L}},{{0x42921E7FL,0x37C94DF5L,0x7E8E4B9EL,0x7E8E4B9EL},{0x42921E7FL,0x42921E7FL,0x4F28882AL,0x767FBA43L},{0xFBBB4E97L,0x7E8E4B9EL,0x42921E7FL,0L}},{{0x37C94DF5L,(-10L),0x869FEBC3L,0x42921E7FL},{2L,(-10L),2L,0L},{(-10L),0x7E8E4B9EL,0x8F539C82L,0x767FBA43L}}};
    struct S0 *l_2992[10] = {(void*)0,&g_2304,(void*)0,(void*)0,&g_2304,(void*)0,(void*)0,&g_2304,(void*)0,(void*)0};
    union U2 *****l_3063[1];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2648[i] = &l_2647;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_2714[i][j] = 1L;
    }
    for (i = 0; i < 1; i++)
        l_3063[i] = &g_1127;
    if ((l_2649 = (((safe_add_func_uint16_t_u_u((l_2638 != ((safe_mul_func_uint8_t_u_u(l_2641, ((((p_5 ^ (((((void*)0 == l_2644) < (l_2645[7] == (void*)0)) || p_5) ^ ((l_2648[0] = (void*)0) == (void*)0))) , g_47[6][6].f8) || 0x9EDB27232DC8EBC3LL) > l_2641))) , l_2638)), p_4)) > 3L) & 0x1FL)))
    {
        const int8_t *l_2653 = &g_2628;
        int32_t *l_2659 = &g_79;
        int64_t *l_2665 = &g_190;
        int32_t *** const l_2673 = &g_396;
        int32_t ***l_2674 = &g_396;
        int32_t ****l_2675 = &l_2674;
        int8_t ****l_2676 = &g_2230;
        const int32_t **l_2683 = (void*)0;
        const int32_t ***l_2684[9][10] = {{&l_2683,&g_2367,&l_2683,&g_2367,&l_2683,&l_2683,(void*)0,(void*)0,&l_2683,&l_2683},{&l_2683,&g_2367,&g_2367,&l_2683,&g_2367,&g_2367,&l_2683,&g_2367,&g_2367,&l_2683},{&g_2367,&l_2683,&g_2367,&g_2367,&l_2683,&g_2367,&g_2367,&l_2683,&g_2367,&g_2367},{(void*)0,(void*)0,&l_2683,&l_2683,&g_2367,&l_2683,&g_2367,&l_2683,&l_2683,(void*)0},{&g_2367,&g_2367,&g_2367,&g_2367,&g_2367,&g_2367,&g_2367,&g_2367,&l_2683,&g_2367},{&g_2367,&g_2367,&l_2683,&l_2683,&g_2367,&l_2683,&l_2683,&g_2367,&g_2367,&g_2367},{&g_2367,&g_2367,(void*)0,&g_2367,&g_2367,(void*)0,&g_2367,&g_2367,(void*)0,&g_2367},{&g_2367,&l_2683,&l_2683,&g_2367,&l_2683,&l_2683,&g_2367,&g_2367,&g_2367,&g_2367},{&g_2367,&g_2367,&l_2683,&l_2683,&g_2367,&g_2367,&l_2683,&g_2367,&l_2683,&g_2367}};
        uint8_t l_2700 = 0x19L;
        int32_t l_2711 = (-3L);
        int32_t l_2713 = 0x7C797FE8L;
        int32_t l_2719[10] = {0xA176321CL,0xF45E54C1L,0xA176321CL,(-6L),(-6L),0xA176321CL,0xF45E54C1L,0xA176321CL,(-6L),(-6L)};
        int32_t l_2724 = 0x58FC13AEL;
        int32_t **l_2742 = (void*)0;
        int64_t l_2744 = 1L;
        int16_t l_2795 = (-1L);
        struct S0 * const *l_2796 = &g_73;
        uint8_t l_2827 = 0UL;
        struct S0 l_2852 = {1256,-10L,5,9UL,1UL,1L,0x7B6DC8C6L,0L,1UL,0xAC1CL};
        struct S1 *l_2870 = (void*)0;
        uint8_t **l_2932 = &g_1230;
        uint32_t l_2937 = 0x24D7582DL;
        int i, j;
        if ((2L < (l_2641 , ((*l_2665) = (+(0x91C4A874DA7076BFLL < (l_2664 , 0L)))))))
        {
            (*l_2659) = l_2664.f0;
            return (*l_2659);
        }
        else
        {
            (*l_2659) &= p_6.f1;
        }
        p_6.f0 = (p_6.f2 | ((((void*)0 == l_2666) | (safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((l_2673 == ((*l_2675) = l_2674)) , ((l_2664.f0 , l_2676) == l_2677)), (safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((((g_2367 = l_2683) == &g_2368[1]) ^ (*l_2659)), p_6.f1)) , 1L), 15)))), (*l_2659))), p_6.f3))) == 0x89E0B1A4L));
        for (g_67 = 8; (g_67 != (-26)); --g_67)
        {
            uint32_t l_2701 = 1UL;
            int32_t l_2709[10][5][5] = {{{0xC520527FL,0x0B81AB11L,0x10D0AFCFL,(-1L),(-8L)},{0L,1L,(-6L),(-1L),(-1L)},{0xBA211ECBL,0x8AE4827AL,0xBA211ECBL,(-4L),0x06A350F1L},{0L,1L,4L,0xB126F15CL,0xB61DC55AL},{0xC520527FL,0x8AE4827AL,(-1L),(-1L),0xD901C866L}},{{0xD7481D7BL,1L,4L,0xB61DC55AL,(-1L)},{0x0B1FDF60L,0x0B81AB11L,0xBA211ECBL,(-1L),0x3FD81BFAL},{0L,(-4L),(-6L),0xB126F15CL,(-1L)},{0x10D0AFCFL,0x8AE4827AL,0x10D0AFCFL,(-4L),0xD901C866L},{0L,0x41832388L,4L,(-1L),0xB61DC55AL}},{{0x0B1FDF60L,0x8AE4827AL,0xD56DC5E0L,(-1L),0x06A350F1L},{0xD7481D7BL,(-4L),4L,0xC2285DE3L,(-1L)},{0xC520527FL,0x0B81AB11L,0x10D0AFCFL,(-1L),(-8L)},{0L,1L,(-6L),(-1L),(-1L)},{0xBA211ECBL,0x8AE4827AL,0xBA211ECBL,(-4L),0x06A350F1L}},{{0L,1L,4L,0xB126F15CL,0xB61DC55AL},{0xC520527FL,0x8AE4827AL,(-1L),(-1L),0xD901C866L},{0xD7481D7BL,1L,4L,0xB61DC55AL,(-1L)},{0x0B1FDF60L,0x0B81AB11L,0xBA211ECBL,(-1L),0x3FD81BFAL},{0L,(-4L),(-6L),0xB126F15CL,(-1L)}},{{0x10D0AFCFL,0x8AE4827AL,0x10D0AFCFL,(-4L),0xD901C866L},{0L,0x41832388L,4L,(-1L),0xB61DC55AL},{0x0B1FDF60L,0x8AE4827AL,0xD56DC5E0L,(-1L),0x06A350F1L},{0xD7481D7BL,(-4L),4L,0xC2285DE3L,(-1L)},{0xC520527FL,0x0B81AB11L,0x10D0AFCFL,(-1L),(-8L)}},{{0L,1L,(-6L),(-1L),(-1L)},{0xBA211ECBL,0x8AE4827AL,0xBA211ECBL,(-4L),0x06A350F1L},{0L,1L,0xA8CC3E68L,4L,0L},{(-5L),(-1L),0x22D10796L,3L,0x10D0AFCFL},{0x484A4214L,2L,0xA8CC3E68L,0L,0xD7481D7BL}},{{(-1L),0xF387A5E8L,(-1L),3L,0xD56DC5E0L},{0x2E3CCA1BL,0x9ECAB78EL,0L,4L,0xD7481D7BL},{(-1L),(-1L),(-1L),9L,0x10D0AFCFL},{0x2E3CCA1BL,0xE236CD4DL,0xA8CC3E68L,0xD7481D7BL,0L},{(-1L),(-1L),(-2L),3L,0xBA211ECBL}},{{0x484A4214L,0x9ECAB78EL,0xA8CC3E68L,(-6L),0xD7481D7BL},{(-5L),0xF387A5E8L,(-1L),3L,(-1L)},{0x2E3CCA1BL,2L,0L,0xD7481D7BL,0xD7481D7BL},{(-1L),(-1L),(-1L),9L,0xBA211ECBL},{0x2E3CCA1BL,8L,0xA8CC3E68L,4L,0L}},{{(-5L),(-1L),0x22D10796L,3L,0x10D0AFCFL},{0x484A4214L,2L,0xA8CC3E68L,0L,0xD7481D7BL},{(-1L),0xF387A5E8L,(-1L),3L,0xD56DC5E0L},{0x2E3CCA1BL,0x9ECAB78EL,0L,4L,0xD7481D7BL},{(-1L),(-1L),(-1L),9L,0x10D0AFCFL}},{{0x2E3CCA1BL,0xE236CD4DL,0xA8CC3E68L,0xD7481D7BL,0L},{(-1L),(-1L),(-2L),3L,0xBA211ECBL},{0x484A4214L,0x9ECAB78EL,0xA8CC3E68L,(-6L),0xD7481D7BL},{(-5L),0xF387A5E8L,(-1L),3L,(-1L)},{0x2E3CCA1BL,2L,0L,0xD7481D7BL,0xD7481D7BL}}};
            int64_t l_2717 = (-10L);
            int16_t **l_2732[3];
            uint8_t l_2739 = 0xA5L;
            uint8_t l_2914[7];
            int64_t ** const *l_2920 = (void*)0;
            uint32_t *l_2933 = (void*)0;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2732[i] = &g_345;
            for (i = 0; i < 7; i++)
                l_2914[i] = 0x6CL;
        }
    }
    else
    {
        int16_t l_2963 = 0xA84EL;
        const uint32_t *l_2967 = &g_2399;
        int32_t l_2976[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int32_t l_2981 = 6L;
        uint64_t *l_2983 = &g_2629;
        uint64_t *l_2985 = (void*)0;
        uint64_t **l_2984 = &l_2985;
        struct S1 l_2994[1] = {{173,13,9,4,12577}};
        union U2 ****l_3011 = &g_1128[2];
        struct S0 l_3036[10][10] = {{{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L}},{{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L}},{{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L}},{{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L}},{{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L}},{{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L}},{{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{23161,0x85F23406L,6,0xDE38F64A9B02EBABLL,2UL,0xC717L,0xA7B8834BL,0L,0x6EL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{9209,1L,1,0x756DF95DE57CDF1BLL,0x1A3FL,0xD238L,0UL,0L,0x13L,0x5DB5L},{11961,0L,2,0x164A330781316025LL,0xAB0DL,-5L,18446744073709551615UL,0x60F86864L,0xBCL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L}},{{11961,0L,2,0x164A330781316025LL,0xAB0DL,-5L,18446744073709551615UL,0x60F86864L,0xBCL,-1L},{18738,0x997800FDL,0,0xB8FC9B06F934027FLL,0xC06CL,1L,0UL,0x6D679383L,0xD0L,3L},{11961,0L,2,0x164A330781316025LL,0xAB0DL,-5L,18446744073709551615UL,0x60F86864L,0xBCL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{11961,0L,2,0x164A330781316025LL,0xAB0DL,-5L,18446744073709551615UL,0x60F86864L,0xBCL,-1L},{18738,0x997800FDL,0,0xB8FC9B06F934027FLL,0xC06CL,1L,0UL,0x6D679383L,0xD0L,3L},{11961,0L,2,0x164A330781316025LL,0xAB0DL,-5L,18446744073709551615UL,0x60F86864L,0xBCL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L}},{{11961,0L,2,0x164A330781316025LL,0xAB0DL,-5L,18446744073709551615UL,0x60F86864L,0xBCL,-1L},{18738,0x997800FDL,0,0xB8FC9B06F934027FLL,0xC06CL,1L,0UL,0x6D679383L,0xD0L,3L},{11961,0L,2,0x164A330781316025LL,0xAB0DL,-5L,18446744073709551615UL,0x60F86864L,0xBCL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{11961,0L,2,0x164A330781316025LL,0xAB0DL,-5L,18446744073709551615UL,0x60F86864L,0xBCL,-1L},{18738,0x997800FDL,0,0xB8FC9B06F934027FLL,0xC06CL,1L,0UL,0x6D679383L,0xD0L,3L},{11961,0L,2,0x164A330781316025LL,0xAB0DL,-5L,18446744073709551615UL,0x60F86864L,0xBCL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L}},{{11961,0L,2,0x164A330781316025LL,0xAB0DL,-5L,18446744073709551615UL,0x60F86864L,0xBCL,-1L},{18738,0x997800FDL,0,0xB8FC9B06F934027FLL,0xC06CL,1L,0UL,0x6D679383L,0xD0L,3L},{11961,0L,2,0x164A330781316025LL,0xAB0DL,-5L,18446744073709551615UL,0x60F86864L,0xBCL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{11961,0L,2,0x164A330781316025LL,0xAB0DL,-5L,18446744073709551615UL,0x60F86864L,0xBCL,-1L},{18738,0x997800FDL,0,0xB8FC9B06F934027FLL,0xC06CL,1L,0UL,0x6D679383L,0xD0L,3L},{11961,0L,2,0x164A330781316025LL,0xAB0DL,-5L,18446744073709551615UL,0x60F86864L,0xBCL,-1L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L},{22115,0L,2,18446744073709551615UL,7UL,0xE244L,0x5FB66765L,-1L,0UL,0xC454L}}};
        uint8_t **l_3038 = &g_1230;
        int8_t l_3047 = 0x17L;
        int i, j;
        l_2982[2][1][2] &= ((~(((~((((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((((l_2981 = ((p_5 ^= (safe_mod_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(1UL, (safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((~((safe_add_func_int32_t_s_s((&g_1022 == ((l_2963 && (!(safe_rshift_func_int8_t_s_s(l_2714[0][3], 6)))) , (l_2968 = l_2967))), (safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(((((l_2976[6] = p_6.f2) != (l_2963 <= (safe_lshift_func_uint16_t_u_s(65526UL, ((((l_2979[5] != (void*)0) , (void*)0) != &p_6) , p_4))))) , (void*)0) == &l_2638), (**g_1232))) < 5L) & g_2435.f0), l_2963)))) <= p_6.f0)), p_6.f3)), p_4)), l_2963)))), l_2963))) == p_6.f3)) == p_6.f0) , (*p_3)), 3)) , 0x087BL), p_6.f2)) > l_2703) ^ (*g_1230)) , p_6.f0)) && p_6.f1) >= p_6.f3)) > 0x87871CD3L);
        if ((0x61L | ((((l_2983 != ((*l_2984) = &g_1459)) , p_6.f3) != (*p_3)) < p_6.f0)))
        {
            union U2 ****l_2995 = &g_1128[1];
            int32_t l_2999 = 0xDE26C104L;
            for (g_256 = (-12); (g_256 >= 17); g_256 = safe_add_func_uint8_t_u_u(g_256, 9))
            {
                struct S0 *l_2993 = &g_47[6][6];
                union U2 * const *l_2998 = (void*)0;
                union U2 * const **l_2997 = &l_2998;
                union U2 * const ***l_2996 = &l_2997;
                uint64_t l_3006 = 0x16475D2D50D0751BLL;
                int32_t l_3010[9][2] = {{0x94430956L,0xDE1C84E2L},{0x94430956L,0x94430956L},{0xDE1C84E2L,0x94430956L},{0x94430956L,0xDE1C84E2L},{0x94430956L,0x94430956L},{0xDE1C84E2L,0x94430956L},{0x94430956L,0xDE1C84E2L},{0x94430956L,0x94430956L},{0xDE1C84E2L,0x94430956L}};
                int32_t *l_3026 = &g_1885;
                int i, j;
                for (g_2304.f9 = 0; (g_2304.f9 <= 3); g_2304.f9 += 1)
                {
                    int32_t *l_3000 = (void*)0;
                    int32_t *l_3001[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_3001[i] = (void*)0;
                    for (g_75 = 0; (g_75 <= 3); g_75 += 1)
                    {
                        p_6.f0 |= p_6.f4;
                    }
                    if (p_6.f3)
                        break;
                    p_6.f4 ^= (((0x19592B33L <= (l_2664.f4 || ((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((((&g_2099[5][2] == (void*)0) >= ((((l_2992[2] != (((void*)0 != g_1337) , l_2993)) , ((l_2994[0] , l_2995) != l_2996)) ^ (*g_1230)) | 0x30L)) , l_2976[6]) & 0x2CL), 6)), p_6.f3)) , l_2999))) | l_2976[5]) , p_5);
                }
                if (p_4)
                {
                    int32_t *l_3004 = &l_2999;
                    int32_t *l_3005[8] = {&l_2981,&l_2981,&l_2981,&l_2981,&l_2981,&l_2981,&l_2981,&l_2981};
                    int i;
                    for (g_2629 = 0; (g_2629 <= 40); ++g_2629)
                    {
                        (**l_2995) = (void*)0;
                    }
                    l_3006++;
                }
                else
                {
                    int32_t *l_3009 = &l_2714[0][1];
                    for (g_1450 = 1; (g_1450 <= 9); g_1450 += 1)
                    {
                        (*g_2100) = l_3009;
                        (*l_3009) = (0x59L | (*g_1529));
                        (*l_3009) = p_6.f2;
                        l_3010[5][1] = ((*l_3009) = p_6.f0);
                    }
                    for (g_733 = 1; (g_733 >= 0); g_733 -= 1)
                    {
                        union U2 *****l_3012[4][4] = {{&g_1127,&l_3011,&g_1127,&l_3011},{&g_1127,&l_3011,&g_1127,&l_3011},{&g_1127,&l_3011,&g_1127,&l_3011},{&g_1127,&l_3011,&g_1127,&l_3011}};
                        int i, j;
                        (*g_396) = &g_2718[g_733];
                        l_3011 = l_3011;
                    }
                }
                for (g_1702 = 0; (g_1702 <= 0); g_1702 += 1)
                {
                    uint16_t * const ***l_3023 = (void*)0;
                    int32_t l_3027 = 0L;
                    union U2 *l_3028 = (void*)0;
                    int i, j;
                    if (l_2714[g_1702][(g_1702 + 3)])
                        break;
                    p_6.f0 &= (((l_2714[g_1702][g_1702] & ((*l_2985) = l_2714[g_1702][(g_1702 + 2)])) || (-4L)) == ((l_3027 = (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((l_2994[0].f3 | (&g_2561 == l_3023)), 7)) ^ p_6.f2) , ((safe_div_func_int32_t_s_s(((*g_2740) == ((*l_2646) = l_3026)), p_6.f4)) == l_2714[g_1702][g_1702])), l_2714[g_1702][(g_1702 + 2)])), l_2714[g_1702][(g_1702 + 3)])), p_6.f2))) <= l_2999));
                    (*l_2638) = l_3028;
                }
            }
            (*g_2100) = &l_2999;
        }
        else
        {
            int32_t l_3033 = 0x4C565604L;
            uint8_t **l_3037 = (void*)0;
            int32_t *l_3041 = &l_2714[0][1];
            int16_t ***l_3044[1];
            int16_t * const *l_3046 = &g_345;
            int16_t * const **l_3045 = &l_3046;
            int32_t *l_3058 = (void*)0;
            int32_t *l_3059 = (void*)0;
            int32_t *l_3060 = &g_79;
            uint16_t *l_3061 = &l_3036[9][0].f4;
            int32_t *l_3062 = &g_2361;
            int i;
            for (i = 0; i < 1; i++)
                l_3044[i] = &g_1187;
            l_3033 = (p_4 == (((safe_rshift_func_int16_t_s_u((-1L), 11)) , 3L) & ((0x81L != (*p_7)) <= (safe_lshift_func_int16_t_s_s(2L, 6)))));
            (*g_2100) = &l_2976[6];
            (*l_3041) ^= ((safe_sub_func_uint32_t_u_u(p_6.f2, (((((l_3036[9][0] , l_3037) != (g_361[1][0][1] , l_3038)) || ((safe_mul_func_uint8_t_u_u((**g_1229), (((void*)0 == g_1337) , l_3033))) | 0UL)) != 249UL) & p_6.f2))) == p_6.f0);
            (*l_3062) &= ((((((++(**g_1229)) >= (*p_3)) , ((l_3044[0] = l_2644) == l_3045)) > ((*g_345) &= (l_3047 , (safe_mul_func_uint16_t_u_u(((*l_3061) = ((((*l_3060) |= (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((-9L) <= (*p_3)), 0)) , ((safe_rshift_func_uint8_t_u_s(1UL, 7)) <= ((safe_rshift_func_uint16_t_u_u((*l_3041), 7)) || p_6.f4))), (*p_7)))) & p_5) | 9UL)), p_4))))) < p_6.f2) || p_6.f2);
        }
    }
    l_3063[0] = l_3063[0];
    return p_6.f1;
}







static uint32_t func_15(struct S1 p_16, int8_t * p_17, union U2 p_18, int8_t p_19)
{
    int64_t l_2462 = 0xC506D444182BD7B1LL;
    int32_t *l_2465 = &g_2361;
    uint8_t l_2466 = 0xFEL;
    int32_t *l_2468 = &g_67;
    int32_t **l_2467 = &l_2468;
    const struct S1 l_2475 = {-154,28,63,2,10675};
    int32_t *l_2478 = &g_618;
    int16_t ****l_2479 = &g_1186[0][0];
    uint16_t * const *l_2612 = &g_950;
    int32_t l_2613 = 0x4FC2A325L;
    int32_t l_2616 = 0x7A72AD4AL;
    int32_t l_2619 = 0xBF62E494L;
    int32_t l_2623 = 0x7EEF6B1DL;
    int32_t l_2627 = (-4L);
    int32_t l_2632[1];
    struct S0 * const l_2633 = &g_47[6][6];
    int i;
    for (i = 0; i < 1; i++)
        l_2632[i] = (-7L);
    g_48[0][5].f4 = (safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(1L, (**g_1528))) && (l_2462 > ((safe_mod_func_int32_t_s_s(((*l_2465) = p_16.f1), l_2466)) , (((((*l_2467) = l_2465) == l_2465) , 1UL) | (safe_div_func_int16_t_s_s(((p_19 != (*l_2465)) ^ 0x70012AF0488F4F36LL), 0xCA4EL)))))), (**g_2100)));
    if (((((**l_2467) = (-1L)) , ((**g_1232) = (0UL != (((*l_2465) = ((safe_add_func_int32_t_s_s((**g_2100), (p_16.f2 && 4L))) > (*l_2465))) <= ((*l_2478) ^= ((((((safe_div_func_int8_t_s_s((l_2475 , (((*g_1529) &= ((*g_897) , ((((safe_mod_func_int64_t_s_s(p_16.f0, p_16.f1)) & (-5L)) || p_16.f2) != 0xAD22L))) , (*g_1529))), (*g_1230))) <= p_16.f4) , p_16.f1) == g_361[1][0][1]) && p_16.f0) <= 0xBC41BBBBFEFA2E57LL)))))) <= p_16.f3))
    {
        int16_t *****l_2480[2][6] = {{&l_2479,&l_2479,&l_2479,&l_2479,&l_2479,&l_2479},{&l_2479,&l_2479,&l_2479,&l_2479,&l_2479,&l_2479}};
        uint64_t *l_2494 = &g_138;
        uint32_t *l_2501[5][3] = {{(void*)0,&g_1702,(void*)0},{&g_408[5][2].f2,&g_408[5][2].f2,&g_408[5][2].f2},{(void*)0,&g_1702,(void*)0},{&g_408[5][2].f2,&g_408[5][2].f2,&g_408[5][2].f2},{(void*)0,&g_1702,(void*)0}};
        int i, j;
        g_1185 = l_2479;
        p_16.f4 |= ((*l_2465) ^= 0xF13D4640L);
        for (g_2304.f9 = 0; (g_2304.f9 < (-28)); g_2304.f9 = safe_sub_func_int64_t_s_s(g_2304.f9, 3))
        {
            uint32_t l_2483 = 4294967286UL;
            return l_2483;
        }
        (*l_2465) |= (~(3UL >= (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((+((((void*)0 == &g_2368[2]) , (**g_2100)) ^ p_16.f2)), (safe_sub_func_int32_t_s_s((*g_2101), (g_619[5] = (((g_603 = (safe_rshift_func_uint16_t_u_u(p_16.f3, 13))) > ((++(*l_2494)) || ((*l_2494)++))) , (safe_div_func_int16_t_s_s(((*g_345) = ((void*)0 != &l_2462)), (*l_2478))))))))), 248UL))));
    }
    else
    {
        union U2 l_2519 = {0};
        int32_t l_2522 = 2L;
        int64_t l_2534 = 0x423B0CAFCEB5E7B3LL;
        uint16_t ***l_2559 = &g_2248;
        const int8_t *l_2583 = &g_9;
        const int8_t **l_2582 = &l_2583;
        const int8_t ***l_2581[9][5] = {{&l_2582,(void*)0,(void*)0,&l_2582,&l_2582},{&l_2582,&l_2582,&l_2582,&l_2582,&l_2582},{(void*)0,&l_2582,(void*)0,(void*)0,&l_2582},{&l_2582,(void*)0,(void*)0,&l_2582,&l_2582},{&l_2582,&l_2582,&l_2582,&l_2582,&l_2582},{(void*)0,&l_2582,(void*)0,(void*)0,&l_2582},{&l_2582,(void*)0,(void*)0,&l_2582,&l_2582},{&l_2582,&l_2582,&l_2582,&l_2582,&l_2582},{(void*)0,&l_2582,(void*)0,(void*)0,&l_2582}};
        const int8_t ****l_2580[4] = {&l_2581[2][4],&l_2581[2][4],&l_2581[2][4],&l_2581[2][4]};
        int32_t * const l_2595 = &g_2361;
        int32_t l_2617 = (-1L);
        int32_t l_2621 = 0x8EEF55B7L;
        struct S0 **l_2634 = &g_175;
        int i, j;
        for (g_2304.f9 = (-12); (g_2304.f9 <= 7); g_2304.f9++)
        {
            return g_1944.f5;
        }
        for (g_304 = 0; (g_304 == 3); g_304 = safe_add_func_int64_t_s_s(g_304, 3))
        {
            uint32_t l_2523 = 0x8D59A436L;
            int32_t l_2532[8];
            const uint8_t *l_2533 = &g_182;
            int32_t *l_2558 = &l_2532[6];
            int32_t ***l_2563[1];
            uint16_t **l_2569 = &g_950;
            const int64_t l_2608[9][3] = {{0x2BE3D3D57EAC7645LL,0x8EFB81438DE027B5LL,0x2BE3D3D57EAC7645LL},{0xA6C9F1C0895ADC90LL,0x109EAC8149AEB805LL,0x109EAC8149AEB805LL},{(-9L),0x8EFB81438DE027B5LL,(-9L)},{0xA6C9F1C0895ADC90LL,0xA6C9F1C0895ADC90LL,0x109EAC8149AEB805LL},{0x2BE3D3D57EAC7645LL,0x8EFB81438DE027B5LL,0x2BE3D3D57EAC7645LL},{0xA6C9F1C0895ADC90LL,0x109EAC8149AEB805LL,0x109EAC8149AEB805LL},{(-9L),0x8EFB81438DE027B5LL,(-9L)},{0xA6C9F1C0895ADC90LL,0xA6C9F1C0895ADC90LL,0x109EAC8149AEB805LL},{0x2BE3D3D57EAC7645LL,0x8EFB81438DE027B5LL,0x2BE3D3D57EAC7645LL}};
            struct S0 l_2611 = {11936,0x3D463209L,1,1UL,7UL,0L,0xFFB0DACCL,8L,0xE9L,0x1D65L};
            int i, j;
            for (i = 0; i < 8; i++)
                l_2532[i] = 0x5370A27EL;
            for (i = 0; i < 1; i++)
                l_2563[i] = &g_396;
            if ((safe_sub_func_uint16_t_u_u((*l_2465), p_19)))
            {
                (*g_2100) = l_2468;
            }
            else
            {
                uint32_t *l_2530 = &g_619[5];
                int32_t l_2531 = 0xA6E97760L;
                if ((((((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((~(((safe_add_func_int64_t_s_s(((((l_2519 , ((*g_175) , (*l_2465))) != 0x20CE92B643983B7CLL) || (g_1702 = ((*l_2465) <= (safe_lshift_func_uint16_t_u_s(((++l_2523) , 0UL), (safe_mul_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u((((*l_2530) = g_138) ^ ((*l_2478) >= (0x04L <= 0x7BL))), (*g_1230))) != l_2522) || 0xDFA21EB82DDC797ALL), 0x54L))))))) || 5UL), l_2531)) , (-9L)) , p_16.f0)), (-2L))), 0x05L)), (**g_1232))) > (**g_1232)), 14)) <= l_2532[2]) , p_16.f1) != 0xFE0AB02DL) & 0xEAL))
                {
                    int64_t l_2557 = 0x2B79F9BF173AA332LL;
                    if ((l_2534 ^= (l_2533 == (*g_1232))))
                    {
                        return p_16.f0;
                    }
                    else
                    {
                        uint64_t *l_2549 = &g_285[1][2][0];
                        const int32_t l_2556 = 1L;
                        (*l_2465) |= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(0x4AL, 6)), (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(((**g_1229) = (safe_sub_func_int64_t_s_s((((*l_2478) == (&l_2466 != (*g_1232))) | ((void*)0 == l_2549)), ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((((p_18 , (0x71L && (safe_lshift_func_int8_t_s_u(0xB5L, 5)))) ^ 0xF243A45608AF67B5LL) != l_2556) , p_19), 0)) , 0UL), p_16.f3)) , l_2531)))), 5)) >= l_2557), p_16.f2)))) <= (*p_17)) >= 9UL), p_16.f3)), l_2532[2]));
                        return (*l_2478);
                    }
                }
                else
                {
                    const union U2 l_2562 = {0};
                    int32_t l_2566 = 7L;
                    (*g_2100) = (l_2558 = ((*g_396) = &l_2522));
                    if (p_16.f2)
                    {
                        uint16_t ****l_2560 = (void*)0;
                        int32_t ***l_2565[1][4];
                        int32_t ****l_2564 = &l_2565[0][0];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_2565[i][j] = (void*)0;
                        }
                        g_2561 = l_2559;
                        if (p_16.f0)
                            continue;
                        (*g_2100) = (((l_2562 , l_2563[0]) == ((*l_2564) = &g_396)) , (*g_2100));
                    }
                    else
                    {
                        uint8_t l_2572 = 1UL;
                        if ((**g_396))
                            break;
                        (*l_2558) = ((((0x4B88L < (l_2566 , (safe_mod_func_int64_t_s_s(((l_2522 , (void*)0) != l_2569), p_16.f3)))) | (((g_47[6][6].f9 < ((((safe_mod_func_uint64_t_u_u((l_2572 , 0x7338A2FE657869F8LL), p_16.f4)) >= g_47[6][6].f5) > l_2522) > l_2572)) < l_2534) , l_2531)) , 0xEA0BD5792D6E4BE9LL) == 0x6DDFF55CBB879D15LL);
                        if (p_16.f4)
                            break;
                    }
                }
            }
            if ((*g_2101))
            {
                uint32_t l_2573 = 0x8E3433B3L;
                l_2573 &= p_16.f2;
            }
            else
            {
                int8_t ****l_2585 = &g_2230;
                int8_t *****l_2584[3][5][4] = {{{&l_2585,(void*)0,&l_2585,&l_2585},{&l_2585,&l_2585,&l_2585,&l_2585},{&l_2585,&l_2585,&l_2585,&l_2585},{&l_2585,&l_2585,(void*)0,(void*)0},{&l_2585,&l_2585,&l_2585,(void*)0}},{{&l_2585,&l_2585,&l_2585,&l_2585},{&l_2585,&l_2585,&l_2585,&l_2585},{&l_2585,&l_2585,(void*)0,&l_2585},{&l_2585,&l_2585,(void*)0,(void*)0},{&l_2585,&l_2585,&l_2585,(void*)0}},{{&l_2585,&l_2585,&l_2585,&l_2585},{&l_2585,&l_2585,&l_2585,&l_2585},{&l_2585,&l_2585,(void*)0,&l_2585},{&l_2585,&l_2585,(void*)0,(void*)0},{&l_2585,&l_2585,&l_2585,(void*)0}}};
                int16_t l_2606[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
                int i, j, k;
                if ((((safe_lshift_func_uint8_t_u_s(((*l_2465) || ((0x7F6E1A6A6FFDE101LL > ((((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((**g_1232), (*g_1529))), (l_2580[0] != (g_2586 = &g_2230)))) && 0x9A07A57FL) < 0xE3A2289BD9ED4790LL) && (safe_lshift_func_uint16_t_u_s(p_19, 0)))) | p_16.f3)), 3)) , 1UL) >= 0xD8DAA76CBE3BFD9FLL))
                {
                    uint16_t l_2607 = 65535UL;
                    int64_t l_2609 = 0x8C764DEBD41BC699LL;
                    int32_t l_2610 = 0xB375827FL;
                    int32_t l_2618 = 2L;
                    int32_t l_2622 = (-5L);
                    int32_t l_2624 = 0xD3FFD625L;
                    int32_t l_2625 = 0x19071DA0L;
                    for (g_1886 = 18; (g_1886 > 30); g_1886 = safe_add_func_int16_t_s_s(g_1886, 9))
                    {
                        int32_t *l_2596 = &l_2532[2];
                        int32_t l_2614 = 0x8F47762CL;
                        int32_t l_2615 = (-1L);
                        int32_t l_2620 = 0x80A2A8B5L;
                        int32_t l_2626 = 0L;
                        l_2610 &= (safe_mod_func_int32_t_s_s(((0x9633L <= ((safe_rshift_func_int8_t_s_s(((*g_1529) |= (((0xBF50L && (l_2595 != (l_2596 = l_2596))) < ((safe_add_func_int8_t_s_s((safe_div_func_int64_t_s_s((p_16.f3 < (safe_mod_func_uint64_t_u_u(g_48[0][5].f0, (safe_mod_func_int32_t_s_s(0x79523B59L, ((((p_16.f0 && (((safe_unary_minus_func_uint64_t_u(l_2606[2])) > 65535UL) != l_2607)) , (*g_2367)) == (void*)0) || l_2608[1][0])))))), p_16.f3)), 0xACL)) >= 0x84171F4BL)) ^ (*l_2595))), l_2609)) | 0L)) && (*g_1230)), (*l_2595)));
                        (*l_2595) = (((l_2611 , (*l_2559)) == l_2612) ^ 0x73545BE4EFEDF996LL);
                        if ((*g_2101))
                            continue;
                        --g_2629;
                    }
                }
                else
                {
                    return l_2632[0];
                }
            }
        }
        (*l_2634) = l_2633;
    }
    return p_16.f1;
}







static union U2 func_23(uint32_t p_24, union U2 p_25, int32_t p_26, int8_t p_27, int8_t * p_28)
{
    struct S0 l_2051 = {2154,0x7A72F5B2L,3,0UL,65535UL,-1L,0xCAD2E064L,-1L,0xCCL,0xD25FL};
    int32_t *l_2052 = &g_1087;
    struct S1 l_2057 = {246,13,35,1,6374};
    int64_t *l_2058 = &g_1701[1];
    int16_t *l_2061[6][4] = {{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424}};
    uint32_t l_2062[10] = {0x0116D1CBL,0x0116D1CBL,0x0116D1CBL,0x0116D1CBL,0x0116D1CBL,0x0116D1CBL,0x0116D1CBL,0x0116D1CBL,0x0116D1CBL,0x0116D1CBL};
    uint8_t l_2063 = 255UL;
    uint64_t l_2076[1][9];
    union U2 l_2169 = {0};
    uint32_t l_2189 = 4294967286UL;
    const struct S0 l_2203 = {9408,0xF83432EFL,0,0x5F53B1FF0CB9E212LL,0x3CE9L,1L,0x407D26BBL,0x1305EFB9L,3UL,0xC371L};
    uint32_t l_2214 = 0x70F9D43FL;
    struct S0 ****l_2240 = &g_321[0][1][5];
    struct S0 ****l_2243[9][6][4] = {{{&g_321[0][1][5],(void*)0,&g_321[1][2][1],&g_321[0][1][5]},{(void*)0,&g_321[0][1][5],&g_321[0][1][5],&g_321[0][4][1]},{&g_321[0][1][5],&g_321[0][1][5],(void*)0,&g_321[0][1][5]},{&g_321[1][4][6],&g_321[1][3][4],&g_321[0][1][5],&g_321[1][0][2]},{&g_321[0][0][0],&g_321[0][1][5],&g_321[0][1][6],&g_321[0][1][3]},{(void*)0,&g_321[0][1][0],(void*)0,&g_321[0][1][5]}},{{(void*)0,&g_321[1][2][1],&g_321[0][1][6],(void*)0},{&g_321[0][0][0],&g_321[0][1][5],&g_321[0][1][5],&g_321[0][1][5]},{&g_321[1][4][6],(void*)0,(void*)0,&g_321[1][4][6]},{&g_321[0][1][5],&g_321[0][1][5],&g_321[0][1][5],&g_321[0][0][0]},{(void*)0,&g_321[0][1][6],&g_321[1][2][1],(void*)0},{&g_321[0][1][5],(void*)0,&g_321[0][1][0],(void*)0}},{{&g_321[0][1][3],&g_321[0][1][6],&g_321[0][1][5],&g_321[0][0][0]},{&g_321[1][0][2],&g_321[0][1][5],&g_321[1][3][4],&g_321[1][4][6]},{&g_321[0][1][5],(void*)0,&g_321[0][1][5],&g_321[0][1][5]},{&g_321[0][4][1],&g_321[0][1][5],&g_321[0][1][5],(void*)0},{&g_321[0][1][5],&g_321[1][2][1],(void*)0,&g_321[0][1][5]},{&g_321[0][1][5],&g_321[0][1][0],(void*)0,&g_321[0][1][3]}},{{&g_321[0][1][5],&g_321[0][1][5],&g_321[0][1][5],&g_321[1][0][2]},{&g_321[0][4][1],&g_321[1][3][4],&g_321[0][1][5],&g_321[0][1][5]},{&g_321[0][1][5],&g_321[0][1][5],&g_321[1][3][4],&g_321[0][4][1]},{&g_321[1][0][2],&g_321[0][1][5],&g_321[0][1][5],&g_321[0][1][5]},{&g_321[0][1][3],(void*)0,&g_321[0][1][0],&g_321[0][1][5]},{&g_321[0][1][5],(void*)0,&g_321[1][2][1],&g_321[0][1][5]}},{{(void*)0,&g_321[0][1][5],&g_321[0][1][5],&g_321[0][4][1]},{&g_321[0][1][5],&g_321[0][4][6],&g_321[0][3][1],&g_321[0][4][6]},{&g_321[0][2][2],(void*)0,(void*)0,&g_321[0][1][6]},{&g_321[0][1][5],&g_321[0][1][5],(void*)0,(void*)0},{&g_321[0][3][1],&g_321[1][3][4],&g_321[0][1][3],&g_321[0][1][5]},{&g_321[0][3][1],&g_321[0][4][1],(void*)0,&g_321[0][0][0]}},{{&g_321[0][1][5],&g_321[0][1][5],(void*)0,&g_321[0][1][5]},{&g_321[0][2][2],&g_321[0][3][1],&g_321[0][3][1],&g_321[0][2][2]},{&g_321[0][1][5],(void*)0,&g_321[0][1][5],&g_321[0][1][5]},{&g_321[0][0][0],(void*)0,&g_321[0][4][1],&g_321[0][3][1]},{&g_321[0][1][5],&g_321[0][1][3],&g_321[1][3][4],&g_321[0][3][1]},{(void*)0,(void*)0,&g_321[0][1][5],&g_321[0][1][5]}},{{&g_321[0][1][6],(void*)0,(void*)0,&g_321[0][2][2]},{&g_321[0][4][6],&g_321[0][3][1],&g_321[0][4][6],&g_321[0][1][5]},{&g_321[0][1][5],&g_321[0][1][5],&g_321[0][1][0],&g_321[0][0][0]},{(void*)0,&g_321[0][4][1],&g_321[0][0][0],&g_321[0][1][5]},{&g_321[0][1][5],&g_321[1][3][4],&g_321[0][0][0],(void*)0},{(void*)0,&g_321[0][1][5],&g_321[0][1][0],&g_321[0][1][6]}},{{&g_321[0][1][5],(void*)0,&g_321[0][4][6],&g_321[0][4][6]},{&g_321[0][4][6],&g_321[0][4][6],(void*)0,&g_321[0][1][5]},{&g_321[0][1][6],&g_321[0][1][0],&g_321[0][1][5],(void*)0},{(void*)0,&g_321[0][0][0],&g_321[1][3][4],&g_321[0][1][5]},{&g_321[0][1][5],&g_321[0][0][0],&g_321[0][4][1],(void*)0},{&g_321[0][0][0],&g_321[0][1][0],&g_321[0][1][5],&g_321[0][1][5]}},{{&g_321[0][1][5],&g_321[0][4][6],&g_321[0][3][1],&g_321[0][4][6]},{&g_321[0][2][2],(void*)0,(void*)0,&g_321[0][1][6]},{&g_321[0][1][5],&g_321[0][1][5],(void*)0,(void*)0},{&g_321[0][3][1],&g_321[1][3][4],&g_321[0][1][3],&g_321[0][1][5]},{&g_321[0][3][1],&g_321[0][4][1],(void*)0,&g_321[0][0][0]},{&g_321[0][1][5],&g_321[0][1][5],(void*)0,&g_321[0][1][5]}}};
    uint16_t **l_2244 = &g_950;
    union U2 ***l_2324 = &g_521[1];
    int8_t l_2329 = (-1L);
    uint32_t l_2331 = 1UL;
    int32_t l_2396 = 0x4CB5290FL;
    uint64_t l_2436 = 0x0FCFDB4D6E0F18F1LL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
            l_2076[i][j] = 0xBB0D47D39EE20A83LL;
    }
lbl_2444:
    (*g_396) = ((l_2051 , 0xBF7CE358L) , l_2052);
lbl_2456:
    g_257 |= ((((*l_2052) = (safe_add_func_uint32_t_u_u((*l_2052), ((**g_1232) , (safe_mod_func_int16_t_s_s((((*l_2052) <= ((*g_345) = (*l_2052))) | (l_2057 , ((l_2058 == l_2058) == (l_2062[1] = (safe_div_func_int64_t_s_s((p_25 , ((*l_2052) || p_24)), p_26)))))), g_1726)))))) , l_2063) || p_24);
lbl_2443:
    for (g_603 = 0; (g_603 == 33); g_603 = safe_add_func_uint16_t_u_u(g_603, 8))
    {
        int8_t l_2070 = 6L;
        int32_t *** const l_2102 = &g_396;
        uint8_t l_2147 = 0x12L;
        uint8_t ***l_2204 = &g_1232;
        int8_t l_2226 = 0x0AL;
        uint16_t **l_2246 = &g_950;
        int32_t *l_2267 = &g_47[6][6].f7;
        int8_t ** const *l_2298[7] = {&g_2231[2][0][0],&g_2231[2][0][0],&g_2231[2][0][0],&g_2231[2][0][0],&g_2231[2][0][0],&g_2231[2][0][0],&g_2231[2][0][0]};
        int8_t ** const **l_2297 = &l_2298[1];
        int i;
    }
    for (l_2189 = 0; (l_2189 <= 3); l_2189 += 1)
    {
        const int32_t l_2308 = 3L;
        union U2 l_2309[5][3][10] = {{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}}};
        int32_t l_2348 = 1L;
        int16_t l_2356 = 0xF187L;
        int32_t l_2357 = 0x4AACBE72L;
        int32_t l_2358 = (-5L);
        uint32_t l_2381 = 1UL;
        struct S0 * const l_2434 = &g_2435;
        struct S0 * const * const l_2433 = &l_2434;
        struct S0 * const * const *l_2432 = &l_2433;
        struct S0 * const * const **l_2431[7] = {&l_2432,&l_2432,&l_2432,&l_2432,&l_2432,&l_2432,&l_2432};
        int32_t *l_2455[7][8] = {{&l_2358,&l_2357,&l_2396,&g_2361,(void*)0,&g_257,&g_2361,&g_2361},{(void*)0,&l_2357,&l_2396,&l_2396,&l_2357,(void*)0,&l_2357,(void*)0},{&g_257,(void*)0,&g_2361,&l_2396,&l_2357,&l_2358,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_2396,&l_2348,&l_2396,&l_2357,(void*)0},{&l_2348,&l_2348,&g_1087,&l_2396,&g_1087,&l_2348,&l_2348,&g_2361},{(void*)0,&g_2361,&l_2357,&g_2361,&l_2357,&g_79,&l_2396,&g_1087},{(void*)0,(void*)0,&g_1450,(void*)0,&l_2357,(void*)0,&l_2357,&l_2396}};
        int i, j, k;
        if (p_24)
        {
            uint32_t l_2300[3];
            int32_t *l_2301 = &g_257;
            int i;
            for (i = 0; i < 3; i++)
                l_2300[i] = 0xC47E4183L;
            (*g_396) = &p_26;
            if (l_2300[1])
            {
                struct S0 *l_2303 = &g_2304;
                l_2301 = l_2301;
                if ((*l_2301))
                {
                    struct S0 *l_2302 = &g_47[6][6];
                    (**g_396) ^= ((*l_2301) = 0xDE5B07D1L);
                    l_2303 = l_2302;
                    (***g_1127) = &p_25;
                }
                else
                {
                    uint64_t l_2305 = 18446744073709551614UL;
                    ++l_2305;
                    for (g_2304.f7 = 0; (g_2304.f7 <= 3); g_2304.f7 += 1)
                    {
                        (**g_396) = l_2308;
                        (*l_2052) ^= ((**g_396) = (*l_2301));
                    }
                    return l_2309[1][0][3];
                }
            }
            else
            {
                (*l_2301) &= (*g_397);
            }
            if ((*l_2301))
                continue;
            return p_25;
        }
        else
        {
            struct S0 *** const *l_2310 = (void*)0;
            uint32_t l_2323 = 18446744073709551614UL;
            int64_t l_2341 = 0xC2B6B3591845E889LL;
            int32_t l_2360 = 0x2C550651L;
            int32_t l_2362 = 0x0C5C9107L;
            int32_t *l_2371 = &g_1885;
            int32_t **l_2370 = &l_2371;
            int16_t **l_2372 = &g_345;
            int64_t **l_2423[7][1] = {{&l_2058},{&g_1116},{&g_1116},{&l_2058},{&g_1116},{&g_1116},{&l_2058}};
            int64_t ***l_2422 = &l_2423[1][0];
            int64_t ****l_2421 = &l_2422;
            struct S1 *l_2441 = &g_2442;
            int i, j;
            l_2310 = l_2310;
            if ((*g_397))
                continue;
            for (g_2004 = 0; (g_2004 <= 1); g_2004 += 1)
            {
                int32_t l_2314 = 9L;
                int32_t l_2315 = 0x5A05E75BL;
                uint16_t *l_2320 = &g_2304.f4;
                int32_t *l_2338 = &l_2051.f7;
                int32_t * const *l_2337 = &l_2338;
                int32_t l_2397 = 0x5774BDD8L;
                int32_t l_2398[7][1][5] = {{{0xE4F02F0BL,0L,(-2L),1L,1L}},{{0L,0x8031FEF1L,0xE4F02F0BL,0xE4F02F0BL,0x8031FEF1L}},{{6L,1L,0xC63F59E5L,0xC5ACBBB7L,0x8031FEF1L}},{{0L,0xA5D58368L,0xC63871D7L,0x54E3FFEBL,1L}},{{1L,0x54E3FFEBL,(-5L),0x9ACD335EL,0x9ACD335EL}},{{0L,0xC63F59E5L,0L,(-5L),1L}},{{6L,0xC63F59E5L,1L,1L,0xA5D58368L}}};
                int8_t *l_2416 = &g_22;
                int i, j, k;
            }
        }
        if (g_603)
            goto lbl_2444;
        l_2455[1][0] = (l_2057 , ((safe_lshift_func_uint16_t_u_s(((*l_2052) >= (safe_sub_func_int64_t_s_s(((((*l_2434) , (p_26 , (safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s((0xEDFA5EC7L ^ p_24), p_24)) == l_2308), 2)), p_26)))) , p_27) <= l_2308), p_27))), p_27)) , (void*)0));
        for (g_284 = 3; (g_284 >= 0); g_284 -= 1)
        {
            for (l_2396 = 0; (l_2396 <= 3); l_2396 += 1)
            {
                (*g_396) = (*g_396);
            }
            l_2455[5][6] = &l_2396;
            if ((*l_2052))
                continue;
            if (g_2004)
                goto lbl_2456;
            for (g_1487 = 0; (g_1487 <= 3); g_1487 += 1)
            {
                if (g_1487)
                    goto lbl_2443;
                if (p_26)
                    break;
            }
        }
    }
    return p_25;
}







static union U2 func_29(uint32_t p_30, struct S1 p_31, uint32_t p_32, int8_t * p_33)
{
    uint16_t l_1270 = 0xBC0FL;
    struct S0 l_1271[6][10] = {{{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{3288,0x783668A7L,2,0x9C0379BFC8CEDE85LL,0x9389L,0x2849L,0x9D94F98AL,-7L,0UL,-1L},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL}},{{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{3288,0x783668A7L,2,0x9C0379BFC8CEDE85LL,0x9389L,0x2849L,0x9D94F98AL,-7L,0UL,-1L},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{3288,0x783668A7L,2,0x9C0379BFC8CEDE85LL,0x9389L,0x2849L,0x9D94F98AL,-7L,0UL,-1L},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{3288,0x783668A7L,2,0x9C0379BFC8CEDE85LL,0x9389L,0x2849L,0x9D94F98AL,-7L,0UL,-1L},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L}},{{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L}},{{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL}},{{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{3288,0x783668A7L,2,0x9C0379BFC8CEDE85LL,0x9389L,0x2849L,0x9D94F98AL,-7L,0UL,-1L},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{3288,0x783668A7L,2,0x9C0379BFC8CEDE85LL,0x9389L,0x2849L,0x9D94F98AL,-7L,0UL,-1L},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{3288,0x783668A7L,2,0x9C0379BFC8CEDE85LL,0x9389L,0x2849L,0x9D94F98AL,-7L,0UL,-1L},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L}},{{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{10224,0xC60027C2L,3,0xB60D36F57609ADD0LL,65526UL,0xFDF4L,9UL,0x27715DB5L,0x47L,0xD4DEL},{20337,1L,3,0UL,0xB421L,0L,18446744073709551609UL,0L,0x91L,8L}}};
    int64_t ***l_1272 = (void*)0;
    union U2 l_1275 = {0};
    uint16_t l_1278 = 65535UL;
    int32_t l_1301 = 0xFC557FDEL;
    int32_t l_1310 = 0L;
    int16_t ****l_1364 = &g_1186[3][0];
    int32_t **l_1385 = &g_1217;
    int64_t *l_1449 = &g_283;
    int8_t *l_1492 = (void*)0;
    int8_t **l_1491[4] = {&l_1492,&l_1492,&l_1492,&l_1492};
    int8_t ***l_1490 = &l_1491[0];
    struct S0 ** const *l_1522[10][10][2] = {{{&g_72,(void*)0},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,(void*)0},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,(void*)0},{&g_72,&g_72}},{{&g_72,&g_72},{(void*)0,&g_72},{&g_72,(void*)0},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,(void*)0}},{{&g_72,(void*)0},{(void*)0,(void*)0},{&g_72,(void*)0},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,(void*)0}},{{&g_72,&g_72},{(void*)0,&g_72},{&g_72,&g_72},{&g_72,(void*)0},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,(void*)0},{&g_72,&g_72},{&g_72,&g_72}},{{&g_72,&g_72},{&g_72,(void*)0},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,(void*)0},{&g_72,&g_72},{&g_72,&g_72},{(void*)0,&g_72},{&g_72,(void*)0}},{{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,(void*)0},{&g_72,(void*)0},{(void*)0,(void*)0},{&g_72,(void*)0}},{{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,(void*)0},{&g_72,&g_72},{&g_72,&g_72},{(void*)0,&g_72},{&g_72,&g_72}},{{(void*)0,&g_72},{&g_72,&g_72},{(void*)0,&g_72},{&g_72,&g_72},{&g_72,(void*)0},{&g_72,&g_72},{&g_72,(void*)0},{&g_72,&g_72},{&g_72,(void*)0},{&g_72,&g_72}},{{&g_72,&g_72},{(void*)0,&g_72},{&g_72,&g_72},{(void*)0,&g_72},{&g_72,&g_72},{(void*)0,&g_72},{&g_72,&g_72},{&g_72,(void*)0},{&g_72,&g_72},{&g_72,&g_72}},{{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,(void*)0},{&g_72,&g_72},{(void*)0,&g_72},{&g_72,(void*)0},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72}}};
    struct S0 ** const ** const l_1521 = &l_1522[6][7][1];
    int16_t l_1602[10] = {0xCBEBL,0xCBEBL,0xCBEBL,0xCBEBL,0xCBEBL,0xCBEBL,0xCBEBL,0xCBEBL,0xCBEBL,0xCBEBL};
    int8_t l_1604 = (-1L);
    int32_t l_1607 = (-10L);
    uint64_t l_1645 = 0x85C631D54E2472E9LL;
    int32_t l_1657 = 0L;
    int32_t l_1658 = 0L;
    int32_t l_1664[10] = {0xD70F9E7FL,0xD70F9E7FL,(-1L),0xD70F9E7FL,0xD70F9E7FL,(-1L),0xD70F9E7FL,0xD70F9E7FL,(-1L),0xD70F9E7FL};
    uint32_t **l_1832 = (void*)0;
    int64_t l_1862 = 1L;
    int32_t l_1864[8][6] = {{(-9L),0L,0L,(-9L),0L,0L},{(-9L),0L,0L,(-9L),0L,0L},{(-9L),0L,0L,(-9L),0L,0L},{(-9L),0L,0L,(-9L),0L,0L},{(-9L),0L,0L,(-9L),0L,0L},{(-9L),0L,0L,(-9L),0L,0L},{(-9L),0L,0L,(-9L),0L,0L},{(-9L),0L,0L,(-9L),0L,0L}};
    uint32_t *l_1936 = &g_107;
    const struct S0 *l_1943 = &g_1944;
    union U2 ***l_1975[3];
    int8_t l_2011 = (-8L);
    union U2 l_2050 = {0};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1975[i] = &g_521[1];
    if ((&g_1022 == (((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_47[6][6].f1 == (l_1270 & p_31.f3)), 1)), (l_1271[4][0] , (l_1272 != g_1273[6])))) , l_1275) , (((safe_div_func_uint16_t_u_u(l_1278, g_256)) ^ l_1270) , (void*)0))))
    {
        union U2 l_1297 = {0};
        struct S0 *** const *l_1300 = &g_321[0][2][1];
        int32_t l_1304 = 0xF803DB81L;
        for (g_182 = 0; (g_182 < 37); ++g_182)
        {
            uint8_t l_1285 = 0UL;
            for (g_424 = 0; (g_424 < (-18)); g_424 = safe_sub_func_int64_t_s_s(g_424, 1))
            {
                struct S1 *l_1283 = &g_48[0][3];
                if (((*g_1217) |= (l_1283 == (void*)0)))
                {
                    (*g_1217) |= p_31.f4;
                }
                else
                {
                    int32_t *l_1284[1][2][5] = {{{&g_257,&g_257,&g_257,&g_257,&g_257},{&g_1087,&g_1087,&g_1087,&g_1087,&g_1087}}};
                    int i, j, k;
                    l_1285++;
                }
            }
            l_1310 ^= (((safe_add_func_int64_t_s_s(((((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((*g_345) = ((~g_47[6][6].f2) > (((*g_175) , (safe_add_func_int16_t_s_s((l_1297 , (safe_sub_func_int32_t_s_s((l_1300 == (void*)0), (-6L)))), ((((l_1301 = ((*p_33) = l_1278)) ^ (safe_lshift_func_int16_t_s_u(l_1304, 14))) , (!(safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(((*g_8) > (**g_1232)), l_1285)), p_31.f0)))) & p_30)))) , 0UL))), p_31.f3)), 10)) & p_30) != 1UL) > p_31.f3), (-1L))) == p_31.f4) || (-10L));
            for (g_941 = 0; g_941 < 10; g_941 += 1)
            {
                g_1273[g_941] = &g_1274;
            }
        }
        if ((*g_1217))
        {
            return l_1275;
        }
        else
        {
            return (*g_522);
        }
    }
    else
    {
        int32_t *l_1313[10] = {&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79};
        uint64_t l_1317[3];
        int8_t l_1333 = 0x9EL;
        uint8_t l_1344[10][3] = {{0x96L,0x8AL,2UL},{246UL,246UL,1UL},{0x8AL,0x96L,246UL},{255UL,246UL,255UL},{0UL,0x8AL,0UL},{0xA1L,255UL,255UL},{0UL,0UL,246UL},{0x6BL,0xA1L,1UL},{0UL,0UL,2UL},{0xA1L,0x6BL,254UL}};
        int64_t *l_1368 = &g_190;
        union U2 l_1388 = {0};
        const uint8_t l_1393 = 255UL;
        uint16_t *l_1394 = &g_361[2][0][1];
        uint16_t *l_1402 = &l_1270;
        uint32_t * const l_1483 = &g_619[5];
        uint32_t * const *l_1482 = &l_1483;
        int16_t ****l_1508[5] = {&g_1186[2][0],&g_1186[2][0],&g_1186[2][0],&g_1186[2][0],&g_1186[2][0]};
        int8_t **l_1509 = &l_1492;
        struct S0 *l_1553[5][5][3] = {{{&l_1271[2][2],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&l_1271[0][8],&g_47[6][6]},{&l_1271[2][2],&l_1271[0][8],&l_1271[2][2]},{&l_1271[5][7],&g_47[6][6],&g_47[6][6]},{&l_1271[5][7],&l_1271[5][7],&g_47[6][6]}},{{&l_1271[2][2],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&l_1271[0][8],&g_47[6][6]},{&l_1271[2][2],&l_1271[0][8],&l_1271[2][2]},{&l_1271[5][7],&g_47[6][6],&g_47[6][6]},{&l_1271[5][7],&l_1271[5][7],&g_47[6][6]}},{{&l_1271[2][2],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&l_1271[0][8],&g_47[6][6]},{&l_1271[2][2],&l_1271[0][8],&l_1271[2][2]},{&l_1271[5][7],&g_47[6][6],&g_47[6][6]},{&l_1271[5][7],&l_1271[5][7],&g_47[6][6]}},{{&l_1271[2][2],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&l_1271[0][8],&g_47[6][6]},{&l_1271[2][2],&l_1271[0][8],&l_1271[2][2]},{&l_1271[5][7],&g_47[6][6],&g_47[6][6]},{&l_1271[5][7],&l_1271[5][7],&g_47[6][6]}},{{&l_1271[2][2],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&l_1271[0][8],&g_47[6][6]},{&l_1271[2][2],&l_1271[0][8],&l_1271[2][2]},{&l_1271[5][7],&g_47[6][6],&g_47[6][6]},{&l_1271[5][7],&l_1271[5][7],&g_47[6][6]}}};
        uint8_t l_1567[7][2] = {{0xCCL,0xC0L},{0UL,0UL},{0UL,0xC0L},{0xCCL,0xE7L},{0xC0L,0xE7L},{0xCCL,0xC0L},{0UL,0UL}};
        uint64_t l_1601 = 3UL;
        uint8_t l_1616 = 0xD7L;
        int64_t l_1652 = (-4L);
        int16_t l_1672 = (-2L);
        int16_t l_1717 = (-4L);
        uint16_t l_1729[7] = {0x690CL,0x6A97L,0x6A97L,0x690CL,0x6A97L,0x6A97L,0x690CL};
        struct S1 l_1801 = {34,6,66,0,6351};
        uint16_t l_1829 = 0UL;
        int64_t * const **l_1830 = &g_1274;
        int16_t l_1853[2][4];
        const struct S0 *l_1899 = &l_1271[3][6];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1317[i] = 9UL;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_1853[i][j] = 0L;
        }
lbl_1649:
        for (g_603 = 0; (g_603 > 2); g_603 = safe_add_func_uint64_t_u_u(g_603, 7))
        {
            int32_t *l_1316 = &l_1310;
            (*g_396) = l_1313[4];
            if ((*g_1217))
                continue;
            for (g_190 = (-9); (g_190 <= 3); g_190 = safe_add_func_int32_t_s_s(g_190, 1))
            {
                (*g_396) = (void*)0;
                (*g_396) = l_1316;
                ++l_1317[1];
            }
        }
        for (g_67 = 29; (g_67 > (-11)); g_67 = safe_sub_func_uint16_t_u_u(g_67, 7))
        {
            uint32_t *l_1336 = &g_619[5];
            uint32_t ** const l_1335 = &l_1336;
            int32_t l_1345 = 0xCCB62670L;
            int64_t *l_1369 = &g_795;
            if (((*g_1217) &= (safe_rshift_func_int8_t_s_s((-9L), 4))))
            {
                union U2 ***l_1334 = &g_521[1];
                uint64_t *l_1346 = &l_1317[2];
                if ((*g_1217))
                    break;
                (*g_1217) ^= ((safe_unary_minus_func_int32_t_s((safe_add_func_uint8_t_u_u((**g_1229), (((*l_1346) &= (safe_sub_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_1333 == ((void*)0 == l_1334)), ((l_1335 != g_1337) , ((safe_lshift_func_int16_t_s_s((0xF7300F294988E847LL <= ((safe_mul_func_int16_t_s_s(l_1271[4][0].f3, (safe_sub_func_int16_t_s_s((g_304 || l_1344[6][0]), p_30)))) ^ l_1345)), p_31.f3)) , 0L)))), 3UL)), p_31.f4))) >= g_48[0][5].f4))))) & 4294967287UL);
            }
            else
            {
                int32_t l_1356 = 0L;
                if ((*g_1217))
                {
                    const int64_t l_1351 = (-6L);
                    int16_t * const ***l_1363 = (void*)0;
                    union U2 l_1373 = {0};
                    uint32_t l_1374 = 0x395A42FEL;
                    if ((safe_mod_func_uint8_t_u_u(0xD3L, ((**g_1232) |= (safe_rshift_func_uint16_t_u_s(l_1351, ((safe_mul_func_int8_t_s_s((*p_33), ((*g_897) , (l_1356 || (&g_1127 != (void*)0))))) <= l_1351)))))))
                    {
                        uint16_t l_1365 = 65535UL;
                        (*g_1217) |= (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(((safe_div_func_int64_t_s_s((l_1363 == l_1364), p_31.f0)) || 0x27B3L), 4)) && ((((l_1345 >= ((l_1365 && (safe_rshift_func_int16_t_s_s(0xE0F6L, 5))) ^ 0x9BL)) , l_1368) == l_1369) > 0x40D4L)), l_1365));
                        if ((*g_1217))
                            break;
                    }
                    else
                    {
                        int8_t *l_1371 = (void*)0;
                        int8_t **l_1370 = &l_1371;
                        int8_t ***l_1372 = &l_1370;
                        (*l_1372) = l_1370;
                        return l_1373;
                    }
                    l_1374++;
                    (*g_1217) = (-10L);
                    (*g_396) = &g_79;
                }
                else
                {
                    uint16_t l_1381 = 65535UL;
                    int32_t ** const l_1384 = &l_1313[4];
                    for (g_941 = 0; (g_941 <= (-1)); g_941--)
                    {
                        int32_t l_1379 = 0x08875531L;
                        int32_t l_1380[6][3][8] = {{{4L,0xFFD369BFL,0L,0xF92139DEL,(-9L),9L,0x2F6696A8L,0L},{9L,0x7E57DD42L,0x28D4520BL,0xFFD369BFL,0xFA00AA64L,0xFA00AA64L,0xFFD369BFL,0x28D4520BL},{0x27881D1DL,0x27881D1DL,7L,0xB2BD7789L,0x46D9AF5DL,0L,(-6L),(-7L)}},{{0xB2BD7789L,0xF92139DEL,0L,0x6390E5A9L,0x7E57DD42L,(-9L),0xB534EC04L,(-7L)},{0xF92139DEL,(-6L),0L,0xB2BD7789L,0xD2D21888L,0x2F6696A8L,0L,0x28D4520BL},{0L,0L,0x46D9AF5DL,0xFFD369BFL,0x58E537BAL,0xFFD369BFL,0x46D9AF5DL,0L}},{{0x6390E5A9L,0xB2BD7789L,0xFFD369BFL,0xF92139DEL,0x2F6696A8L,(-6L),(-1L),(-7L)},{0x7E57DD42L,0xD2D21888L,0x58E537BAL,0x2F6696A8L,0x6390E5A9L,0xB534EC04L,(-1L),0x27881D1DL},{(-9L),0x2F6696A8L,0xFFD369BFL,(-6L),0xB534EC04L,0L,0x46D9AF5DL,(-1L)}},{{0xB534EC04L,0L,0x46D9AF5DL,(-1L),(-1L),0x46D9AF5DL,0L,0xB534EC04L},{(-7L),0x28D4520BL,0L,(-7L),0x27881D1DL,(-1L),0xB534EC04L,0x6390E5A9L},{7L,0x46D9AF5DL,0L,0xFA00AA64L,0x2F6696A8L,0x58E537BAL,0xD2D21888L,0x7E57DD42L}},{{0L,(-7L),0x27881D1DL,0xB534EC04L,0x047EAAA8L,(-1L),0xFA00AA64L,0xB2BD7789L},{0x7E57DD42L,0xF92139DEL,(-7L),(-1L),(-7L),0xF92139DEL,0x7E57DD42L,0L},{0L,0x7E57DD42L,0L,0x27881D1DL,0xFFD369BFL,0L,7L,0L}},{{0x047EAAA8L,0L,0x58E537BAL,(-7L),0xFFD369BFL,0xD2D21888L,0x67C49CE4L,(-1L)},{0L,(-9L),4L,0L,(-7L),0xFA00AA64L,0x6390E5A9L,0x6390E5A9L},{0x7E57DD42L,0x047EAAA8L,0x28D4520BL,0x28D4520BL,0x047EAAA8L,0x7E57DD42L,4L,7L}}};
                        int i, j, k;
                        if (l_1356)
                            break;
                        l_1381--;
                    }
                    l_1385 = l_1384;
                    (*g_1217) &= (&l_1345 == (void*)0);
                    for (g_190 = (-20); (g_190 < 26); g_190 = safe_add_func_uint16_t_u_u(g_190, 3))
                    {
                        return l_1388;
                    }
                }
            }
        }
        (*g_396) = (*l_1385);
        if ((safe_lshift_func_uint16_t_u_u(((*l_1402) = (((0x06L <= (-1L)) && (safe_div_func_uint16_t_u_u(((*l_1394) = (0UL && l_1393)), ((safe_unary_minus_func_int64_t_s(((void*)0 != &g_1127))) || ((*p_33) & (safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s((-1L), (((((0x293EL | p_31.f1) ^ (-5L)) == 0UL) == p_31.f4) >= p_31.f3))) && 0UL), p_32))))))) != p_31.f3)), 12)))
        {
            int32_t l_1409 = 0x59645386L;
            int32_t l_1458 = 0xDED45753L;
            int8_t ** const * const l_1489 = (void*)0;
            struct S0 ***** const l_1494[1] = {(void*)0};
            int16_t ****l_1507 = &g_1186[3][0];
            union U2 ****l_1526[2][1];
            uint16_t l_1546[10][3] = {{0xAD99L,0xAD99L,0xC4A8L},{1UL,65535UL,65531UL},{7UL,0xAD99L,7UL},{7UL,1UL,0xAD99L},{1UL,7UL,7UL},{0xAD99L,7UL,65531UL},{65535UL,1UL,0xC4A8L},{0xAD99L,0xAD99L,0xC4A8L},{1UL,65535UL,65531UL},{7UL,0xAD99L,7UL}};
            uint8_t *l_1576 = &l_1344[6][0];
            uint64_t l_1579 = 0x7993269D236D8CF9LL;
            int32_t *l_1592 = (void*)0;
            int32_t l_1603[7] = {0x7DA54441L,0x7DA54441L,0x87785E88L,0x7DA54441L,0x7DA54441L,0x87785E88L,0x7DA54441L};
            uint8_t l_1606 = 0x3DL;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1526[i][j] = &g_1128[1];
            }
            if ((~((*p_33) = ((p_31.f3 & (1UL ^ (safe_add_func_uint8_t_u_u(((0xBC99D443E6A220F7LL >= (safe_rshift_func_uint8_t_u_s(((((*l_1368) = g_1408) & g_284) <= 0x9430L), (*p_33)))) != ((l_1409 , (safe_div_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((((safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s((l_1409 = (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(p_31.f1)), p_30))), g_1087)), p_30)) >= 0x0BAB18BEL) > 0x1682L) >= p_31.f3), 0x091DL)), 0x27A0A1DF8766DA49LL))) && (**g_1229))), (**g_1229))))) && (**g_1229)))))
            {
                int8_t l_1429 = (-9L);
                uint64_t *l_1430 = &g_144;
                int32_t l_1451 = 0x2F517EBCL;
                int32_t l_1452[5] = {(-5L),(-5L),(-5L),(-5L),(-5L)};
                const uint32_t *l_1485[3][7] = {{&g_619[0],&g_619[0],(void*)0,&g_807,(void*)0,&g_807,(void*)0},{&g_619[0],&g_619[0],(void*)0,&g_807,(void*)0,&g_807,(void*)0},{&g_619[0],&g_619[0],(void*)0,&g_807,(void*)0,&g_807,(void*)0}};
                const uint32_t **l_1484 = &l_1485[2][2];
                union U2 l_1517 = {0};
                struct S0 *****l_1520 = &g_320;
                int32_t l_1566 = 1L;
                uint8_t *l_1575 = (void*)0;
                uint8_t *l_1578 = &g_258[2];
                uint8_t **l_1577 = &l_1578;
                int32_t l_1605 = 0L;
                int i, j;
                if ((!(0x21B77E34210C75A3LL == (safe_sub_func_int64_t_s_s(((p_30 > (l_1409 > ((safe_lshift_func_uint16_t_u_s(((+(p_30 ^ (((*l_1430) = l_1429) || 18446744073709551611UL))) >= (g_1087 != (&g_397 != &l_1313[9]))), p_31.f3)) | l_1409))) , l_1409), g_107)))))
                {
                    int8_t l_1453 = (-1L);
                    int32_t l_1454 = (-3L);
                    int32_t l_1455 = 0x769D83F9L;
                    int32_t l_1456 = (-8L);
                    int32_t l_1457 = 0L;
lbl_1436:
                    for (g_138 = 4; (g_138 >= 30); g_138 = safe_add_func_int8_t_s_s(g_138, 2))
                    {
                        union U2 *l_1433 = &l_1388;
                        l_1433 = (***g_1127);
                    }
                    for (g_1089 = 0; (g_1089 >= (-8)); g_1089 = safe_sub_func_uint16_t_u_u(g_1089, 5))
                    {
                        const int64_t *l_1445 = &g_190;
                        const int64_t **l_1446 = &l_1445;
                        int64_t **l_1447 = &g_1116;
                        int64_t **l_1448 = (void*)0;
                        if (l_1278)
                            goto lbl_1436;
                        (*g_1217) = ((((((safe_sub_func_int64_t_s_s((((safe_mul_func_int16_t_s_s(((0x819D4C9FEA267C07LL > (safe_mul_func_int8_t_s_s((l_1429 > p_32), (**g_1229)))) != 0x89F112F2L), (0UL & (safe_add_func_uint8_t_u_u(p_31.f1, (p_31.f4 >= 65535UL)))))) && p_31.f0) == 250UL), g_619[5])) >= 6UL) , p_31.f0) == p_31.f1) >= p_31.f1) , l_1429);
                        g_1450 = (((*l_1446) = l_1445) == (l_1449 = &g_283));
                    }
                    --g_1459;
                    for (g_138 = 0; (g_138 < 48); g_138 = safe_add_func_int64_t_s_s(g_138, 3))
                    {
                        (*l_1385) = (*g_396);
                    }
                }
                else
                {
                    int16_t l_1486[4];
                    int8_t *l_1488 = &g_733;
                    int16_t l_1532[2];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1486[i] = 0x0225L;
                    for (i = 0; i < 2; i++)
                        l_1532[i] = 0L;
                    if ((((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((((safe_mul_func_int8_t_s_s(((*l_1488) &= ((((safe_mod_func_int8_t_s_s((((*p_33) == (p_31.f2 , (((safe_rshift_func_uint8_t_u_s(((void*)0 == (*g_896)), 2)) , ((safe_mod_func_uint32_t_u_u((safe_div_func_int32_t_s_s(p_30, (((((safe_mod_func_uint16_t_u_u(((1UL & 3UL) || ((**g_1127) != ((((l_1482 != l_1484) != p_32) <= p_32) , (void*)0))), (-2L))) <= 0x41BBL) && l_1486[1]) , p_30) && p_32))), p_31.f4)) ^ p_31.f2)) == p_31.f1))) ^ 0x8AL), (-4L))) > g_1487) < l_1486[1]) | l_1452[4])), 0xE1L)) , l_1489) == l_1490), (*g_8))), 0)), 18446744073709551615UL)) <= (-1L)) <= 0x6CL))
                    {
                        (*g_396) = &l_1409;
                    }
                    else
                    {
                        uint64_t l_1497 = 0UL;
                        uint8_t *l_1504 = &g_1487;
                        (*l_1385) = (*g_396);
                        p_31.f4 &= (safe_unary_minus_func_int8_t_s((2UL == (l_1486[1] , (((((void*)0 == l_1494[0]) & ((safe_lshift_func_uint8_t_u_s((0UL || ((l_1497 > (safe_div_func_int64_t_s_s((safe_div_func_uint32_t_u_u((((*p_33) , l_1394) == &g_1263), p_31.f3)), 1L))) != l_1452[2])), 3)) < 1L)) >= (*p_33)) <= (**g_1229))))));
                        g_407.f4 &= (safe_lshift_func_uint8_t_u_s((l_1497 , ((*l_1504) ^= (**g_1232))), 3));
                        (*l_1385) = (*g_396);
                    }
                    for (l_1310 = (-25); (l_1310 == (-9)); l_1310++)
                    {
                        l_1508[1] = l_1507;
                        (*l_1490) = l_1509;
                        l_1452[2] ^= p_31.f4;
                    }
                    if ((0x5193L | ((((*l_1430) = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s(p_32)), 6)), 0x5FL))) ^ (safe_add_func_uint64_t_u_u((((l_1517 , (safe_lshift_func_uint8_t_u_s(l_1452[3], 7))) & ((((*g_345) = p_30) , &g_320) == l_1520)) , (((p_32 , (void*)0) == l_1521) | 0UL)), 0L))) && g_941)))
                    {
                        uint8_t l_1523 = 0x9BL;
                        int8_t * const **l_1530 = (void*)0;
                        int8_t * const **l_1531 = &g_1528;
                        l_1523--;
                        l_1532[0] |= ((((void*)0 == l_1526[1][0]) , ((l_1451 , (((*g_897) , (*g_897)) , 18446744073709551615UL)) && p_31.f4)) && l_1486[1]);
                    }
                    else
                    {
                        int64_t l_1533[8][1] = {{0xE6A8061EA362CB1ELL},{0xE6A8061EA362CB1ELL},{0xD0C987A1ED751BCELL},{0xE6A8061EA362CB1ELL},{0xE6A8061EA362CB1ELL},{0xD0C987A1ED751BCELL},{0xE6A8061EA362CB1ELL},{0xE6A8061EA362CB1ELL}};
                        struct S0 l_1536 = {13038,0xF7F76A48L,4,1UL,0xEEFCL,0xF464L,0x893A200EL,0x468D7798L,1UL,0L};
                        int i, j;
                        l_1533[5][0] ^= 0x7C87AF2EL;
                        (*g_72) = (void*)0;
                        p_31.f4 = (safe_mul_func_int16_t_s_s(l_1533[5][0], ((l_1536 , (((((((safe_lshift_func_int16_t_s_u((((*g_345) &= p_31.f1) <= (l_1536 , (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(p_31.f3, (((g_48[0][5].f2 && ((safe_div_func_uint64_t_u_u(((~p_31.f3) < (((****g_1127) = l_1388) , p_31.f2)), p_32)) <= l_1486[1])) , p_32) && p_31.f4))), l_1409)))), l_1486[0])) , l_1546[2][2]) ^ l_1486[2]) ^ (**g_1232)) ^ p_32) , p_31.f1) && 0x41L)) <= l_1532[1])));
                    }
                }
                p_31.f4 = (safe_mod_func_int16_t_s_s(l_1451, (safe_sub_func_int32_t_s_s(9L, (safe_div_func_int16_t_s_s((l_1409 = ((void*)0 != l_1553[1][4][2])), ((((safe_sub_func_int16_t_s_s(l_1452[0], (safe_sub_func_int16_t_s_s((((*g_1230) <= (safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((l_1566 &= (safe_sub_func_int8_t_s_s((((((p_31.f3 != ((((0x09L != (*g_1529)) >= p_32) != 0x72657D9FL) && l_1429)) || p_30) , l_1520) == (void*)0) ^ 7UL), (**g_1528)))), l_1567[6][1])), l_1458)), (*g_8)))) | 0xAB450F1BL), p_31.f4)))) != l_1271[4][0].f5) ^ 0xC1FCB5EEB981FC3CLL) & p_30)))))));
                g_1087 ^= (g_407.f0 = (safe_add_func_int8_t_s_s((4294967291UL == ((**g_1232) && p_31.f0)), (0x672F44C1C746D008LL ^ ((safe_rshift_func_uint16_t_u_s((l_1429 < ((*l_1483) |= p_31.f3)), ((safe_lshift_func_uint8_t_u_s((l_1458 >= (!((l_1576 = l_1575) != ((*l_1577) = l_1492)))), 2)) ^ l_1579))) < l_1546[2][2])))));
                if (((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(p_31.f1, 14)) ^ ((l_1458 & ((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((0x2C60L <= (((safe_mul_func_uint8_t_u_u(((**g_1229) = (safe_div_func_uint8_t_u_u(((void*)0 != l_1592), 4UL))), ((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((((p_31.f4 || ((safe_div_func_uint64_t_u_u(1UL, 3L)) >= (*g_1529))) <= l_1409) | 0x108235B7L), 2)), l_1566)) && l_1451))) , l_1601) , l_1602[5])) ^ (*p_33)), l_1603[5])), 1L)) <= l_1604)) , l_1605)), p_31.f1)) ^ l_1606))
                {
                    uint64_t l_1608 = 0x6B72F5FF5B20ABCBLL;
                    l_1608++;
                }
                else
                {
                    g_48[0][5].f0 = (safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((*p_33), (*p_33))), g_1087));
                }
            }
            else
            {
                union U2 l_1615 = {0};
                return l_1615;
            }
            l_1616--;
        }
        else
        {
            const struct S1 *l_1639 = (void*)0;
            const struct S1 **l_1638[5][5][3] = {{{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,(void*)0},{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,&l_1639}},{{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,(void*)0},{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,&l_1639}},{{&l_1639,&l_1639,(void*)0},{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,&l_1639}},{{&l_1639,&l_1639,(void*)0},{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,(void*)0}},{{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,&l_1639},{&l_1639,&l_1639,&l_1639},{(void*)0,(void*)0,(void*)0},{&l_1639,&l_1639,(void*)0}}};
            int32_t l_1653 = 0x3CF313F9L;
            int32_t l_1654 = (-1L);
            int32_t l_1656 = 0x916B270DL;
            int32_t l_1659 = 0xCD5CA57BL;
            int32_t l_1661 = 0xB9A0A143L;
            int32_t l_1665 = (-1L);
            int32_t l_1669 = 0x4E7B7005L;
            int32_t l_1670 = 1L;
            int32_t l_1671[2][8][3] = {{{9L,(-2L),0x4B159852L},{2L,0x64C81D5BL,2L},{9L,(-7L),0x4B159852L},{0x0A8F4778L,0x64C81D5BL,0x0A8F4778L},{9L,(-2L),0x4B159852L},{2L,0x64C81D5BL,2L},{9L,(-7L),0x4B159852L},{0x0A8F4778L,0x64C81D5BL,0x0A8F4778L}},{{9L,(-2L),0x4B159852L},{2L,0x64C81D5BL,2L},{9L,(-7L),0x4B159852L},{0x0A8F4778L,0x64C81D5BL,0x0A8F4778L},{9L,(-2L),0x4B159852L},{2L,0x64C81D5BL,2L},{9L,(-7L),0x4B159852L},{0x0A8F4778L,0x64C81D5BL,0x0A8F4778L}}};
            uint32_t l_1675[7][8];
            int8_t l_1698 = 0x39L;
            union U2 l_1782 = {0};
            int16_t l_1808 = 2L;
            struct S0 **l_1839 = &g_73;
            uint16_t ** const l_1861 = &l_1402;
            const uint8_t *l_1866[1];
            const uint8_t **l_1865[3];
            union U2 **l_1889[3][9][9] = {{{&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,(void*)0,&g_522},{&g_522,&g_522,(void*)0,&g_522,&g_522,&g_522,(void*)0,(void*)0,(void*)0},{&g_522,(void*)0,(void*)0,&g_522,&g_522,(void*)0,(void*)0,&g_522,&g_522},{&g_522,(void*)0,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{&g_522,&g_522,(void*)0,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{(void*)0,(void*)0,&g_522,&g_522,&g_522,&g_522,(void*)0,(void*)0,(void*)0},{&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{(void*)0,&g_522,(void*)0,(void*)0,&g_522,&g_522,(void*)0,(void*)0,(void*)0},{&g_522,(void*)0,&g_522,&g_522,(void*)0,&g_522,&g_522,&g_522,&g_522}},{{(void*)0,(void*)0,(void*)0,&g_522,(void*)0,&g_522,(void*)0,(void*)0,&g_522},{&g_522,(void*)0,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{(void*)0,(void*)0,(void*)0,&g_522,(void*)0,&g_522,&g_522,(void*)0,(void*)0},{&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{(void*)0,&g_522,&g_522,&g_522,&g_522,(void*)0,&g_522,&g_522,&g_522},{(void*)0,(void*)0,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{&g_522,&g_522,(void*)0,&g_522,(void*)0,&g_522,(void*)0,&g_522,&g_522},{&g_522,&g_522,&g_522,(void*)0,&g_522,&g_522,&g_522,&g_522,&g_522},{&g_522,(void*)0,&g_522,(void*)0,&g_522,&g_522,&g_522,&g_522,&g_522}},{{&g_522,&g_522,&g_522,&g_522,(void*)0,&g_522,&g_522,&g_522,&g_522},{&g_522,&g_522,&g_522,&g_522,(void*)0,(void*)0,&g_522,&g_522,&g_522},{&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{(void*)0,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522},{&g_522,&g_522,&g_522,&g_522,(void*)0,&g_522,(void*)0,&g_522,(void*)0},{&g_522,(void*)0,&g_522,&g_522,&g_522,(void*)0,&g_522,&g_522,&g_522},{&g_522,&g_522,&g_522,(void*)0,&g_522,&g_522,&g_522,(void*)0,&g_522},{&g_522,&g_522,&g_522,(void*)0,&g_522,(void*)0,(void*)0,&g_522,&g_522},{(void*)0,&g_522,&g_522,&g_522,&g_522,&g_522,&g_522,(void*)0,&g_522}}};
            int32_t *l_1905[10] = {&l_1670,&l_1658,&g_79,&g_79,&l_1658,&l_1670,&l_1658,&g_79,&g_79,&l_1658};
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 8; j++)
                    l_1675[i][j] = 0xFC7E654AL;
            }
            for (i = 0; i < 1; i++)
                l_1866[i] = &g_258[3];
            for (i = 0; i < 3; i++)
                l_1865[i] = &l_1866[0];
            for (g_603 = 0; (g_603 < 60); ++g_603)
            {
                struct S0 **l_1631 = &g_73;
                int32_t l_1632 = 0xA973A75FL;
                (*g_1217) &= (((*g_73) , (*g_897)) , p_31.f4);
                for (g_282 = 0; (g_282 > 13); g_282 = safe_add_func_int64_t_s_s(g_282, 6))
                {
                    uint8_t l_1623 = 250UL;
                    uint8_t **l_1640 = &g_1230;
                    if ((*g_1217))
                    {
                        int32_t **l_1624 = &l_1313[4];
                        if (l_1623)
                            break;
                        (*l_1624) = l_1483;
                    }
                    else
                    {
                        p_31.f0 = 0xFD209C2EL;
                        (*g_1217) = l_1623;
                    }
                    (*g_1217) = (safe_sub_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((((*l_1402) = ((*l_1394) ^= (((void*)0 == l_1631) & ((((*g_345) = ((g_284 ^ l_1632) || (((+p_32) , &g_1230) != (((**l_1631) , (safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((void*)0 == l_1638[0][2][2]), (*g_345))) == 0xA25A1BF0L), 0xFFA1L))) , l_1640)))) , p_30) >= p_31.f4)))) && 0x618AL), (*p_33))), (-9L))) && p_31.f2) < g_1263), p_32));
                }
                if (g_67)
                    goto lbl_1650;
                for (g_618 = 0; (g_618 != 13); ++g_618)
                {
                    uint16_t l_1646 = 65534UL;
                    (*g_1217) = (safe_div_func_int32_t_s_s(0xC523A673L, l_1645));
                    l_1646++;
                }
                if (p_30)
                    continue;
            }
            (*g_396) = (void*)0;
lbl_1650:
            if (p_31.f3)
                goto lbl_1649;
            for (g_1459 = 0; (g_1459 <= 2); g_1459 += 1)
            {
                int16_t l_1651 = 0L;
                int32_t l_1655 = (-7L);
                int32_t l_1660 = (-3L);
                int32_t l_1662 = 0L;
                int32_t l_1663 = (-6L);
                int32_t l_1666 = (-8L);
                int32_t l_1667 = (-1L);
                int32_t l_1668 = (-8L);
                int32_t l_1673 = 0x704E1FCFL;
                uint64_t l_1732[3][10][6] = {{{18446744073709551615UL,0xC1F73F64EB3A2B0ELL,1UL,0xE931E64ABBDBB6C2LL,0xDC404AE4A42A22F7LL,3UL},{0UL,0x12E85A13340A3530LL,0xE331DEB4A44AEB2ALL,0x18EB99509FE5F918LL,0x655F917870083F78LL,1UL},{0xDC404AE4A42A22F7LL,6UL,1UL,0UL,0UL,1UL},{0xA2875EC5344217EBLL,0x997BE47C040950DDLL,1UL,0xA6092350E717FAE3LL,0xAF930EAEFD7C9915LL,0xE331DEB4A44AEB2ALL},{0x655F917870083F78LL,18446744073709551615UL,3UL,0x12E85A13340A3530LL,1UL,1UL},{0x867575A5160750E4LL,0x6AB49B725BF1B33CLL,3UL,0xFC5A5F98CD1CB6BELL,0x997BE47C040950DDLL,0xE331DEB4A44AEB2ALL},{0xC1F73F64EB3A2B0ELL,18446744073709551607UL,1UL,6UL,2UL,1UL},{6UL,2UL,1UL,0x867575A5160750E4LL,0x4A866DD26BA00DDALL,1UL},{0xAF930EAEFD7C9915LL,1UL,0xE331DEB4A44AEB2ALL,0xD80ECDECD4EB55B7LL,18446744073709551615UL,3UL},{18446744073709551607UL,0UL,1UL,0UL,18446744073709551615UL,3UL}},{{1UL,0xDC404AE4A42A22F7LL,0xE331DEB4A44AEB2ALL,18446744073709551615UL,0x6AB49B725BF1B33CLL,1UL},{0x12E85A13340A3530LL,0xD2964E16A88B31C8LL,1UL,0xC1F73F64EB3A2B0ELL,0xC1F73F64EB3A2B0ELL,1UL},{0x2F96EF3AE1EDCD8ALL,0x2F96EF3AE1EDCD8ALL,0UL,9UL,0x6C8060759538FF68LL,18446744073709551607UL},{0UL,0x894B45597D71DE56LL,18446744073709551615UL,18446744073709551615UL,1UL,0UL},{0UL,0UL,18446744073709551615UL,0xA0AAEE471E1A02B0LL,0x2F96EF3AE1EDCD8ALL,18446744073709551607UL},{0x74058C1BEC17B341LL,0xA0AAEE471E1A02B0LL,0UL,0xE83CF1AFAE49F258LL,18446744073709551610UL,0xFC5A5F98CD1CB6BELL},{0xE83CF1AFAE49F258LL,18446744073709551610UL,0xFC5A5F98CD1CB6BELL,0UL,18446744073709551609UL,0UL},{0x894B45597D71DE56LL,1UL,18446744073709551607UL,1UL,0xE84056A8CDFDEDF2LL,18446744073709551615UL},{0xE84056A8CDFDEDF2LL,0x74058C1BEC17B341LL,0UL,0x2E32DD4EA73D0810LL,0xAF56E9EA1D2D4FFDLL,18446744073709551615UL},{18446744073709551606UL,18446744073709551615UL,18446744073709551607UL,18446744073709551609UL,0UL,0UL}},{{18446744073709551615UL,0xE83CF1AFAE49F258LL,0xFC5A5F98CD1CB6BELL,0x74058C1BEC17B341LL,0x9E9BAB1EB382FB42LL,0xFC5A5F98CD1CB6BELL},{1UL,0x86DA0C1CEEFA81A3LL,0UL,0xFD2E6276DF6AAF68LL,0x894B45597D71DE56LL,18446744073709551607UL},{9UL,18446744073709551609UL,18446744073709551615UL,0x50BB3142AB85542ELL,18446744073709551606UL,0UL},{0UL,0xFD2E6276DF6AAF68LL,18446744073709551615UL,18446744073709551615UL,0x86DA0C1CEEFA81A3LL,18446744073709551607UL},{0x9E9BAB1EB382FB42LL,0xE84056A8CDFDEDF2LL,0UL,0x7906AF802142F8F4LL,0UL,0xFC5A5F98CD1CB6BELL},{0x7906AF802142F8F4LL,0UL,0xFC5A5F98CD1CB6BELL,0UL,0x7906AF802142F8F4LL,0UL},{0x6C8060759538FF68LL,18446744073709551606UL,18446744073709551607UL,0x86DA0C1CEEFA81A3LL,18446744073709551615UL,18446744073709551615UL},{0xA0AAEE471E1A02B0LL,18446744073709551606UL,0UL,18446744073709551606UL,0x50BB3142AB85542ELL,18446744073709551615UL},{1UL,0xAF56E9EA1D2D4FFDLL,18446744073709551607UL,0x894B45597D71DE56LL,0xFD2E6276DF6AAF68LL,0UL},{0x50BB3142AB85542ELL,18446744073709551609UL,0xFC5A5F98CD1CB6BELL,0x9E9BAB1EB382FB42LL,0x74058C1BEC17B341LL,0xFC5A5F98CD1CB6BELL}}};
                struct S0 ****l_1785[2][8] = {{&g_321[1][2][1],&g_321[0][1][5],&g_321[0][1][5],&g_321[0][1][5],&g_321[1][2][1],&g_321[0][1][5],&g_321[0][1][5],&g_321[1][2][1]},{&g_321[0][1][5],&g_321[1][4][3],&g_321[1][4][3],&g_321[0][1][5],&g_321[0][1][5],&g_321[1][2][1],&g_321[0][1][5],&g_321[0][1][5]}};
                uint32_t l_1872 = 0x02254FF2L;
                int32_t l_1904[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                int i, j, k;
                l_1675[6][3]++;
            }
        }
    }
    for (g_75 = 2; (g_75 >= 0); g_75 -= 1)
    {
        uint16_t *l_1909 = &g_47[6][6].f4;
        int32_t * const *l_1914 = &g_397;
        int32_t * const **l_1913 = &l_1914;
        int32_t * const ***l_1912[4][4] = {{&l_1913,&l_1913,&l_1913,&l_1913},{&l_1913,&l_1913,&l_1913,&l_1913},{&l_1913,&l_1913,&l_1913,&l_1913},{&l_1913,&l_1913,&l_1913,&l_1913}};
        struct S0 l_1915[7] = {{11354,0xD5BC4828L,3,9UL,0x7FCFL,0x0940L,0UL,0xDBEFF6DBL,0x73L,0L},{17484,1L,1,0x5D3E64848802AFF1LL,2UL,8L,1UL,-9L,1UL,0L},{11354,0xD5BC4828L,3,9UL,0x7FCFL,0x0940L,0UL,0xDBEFF6DBL,0x73L,0L},{11354,0xD5BC4828L,3,9UL,0x7FCFL,0x0940L,0UL,0xDBEFF6DBL,0x73L,0L},{17484,1L,1,0x5D3E64848802AFF1LL,2UL,8L,1UL,-9L,1UL,0L},{11354,0xD5BC4828L,3,9UL,0x7FCFL,0x0940L,0UL,0xDBEFF6DBL,0x73L,0L},{11354,0xD5BC4828L,3,9UL,0x7FCFL,0x0940L,0UL,0xDBEFF6DBL,0x73L,0L}};
        int32_t ***l_1916 = &l_1385;
        int32_t ****l_1917 = &l_1916;
        uint16_t l_1970[4][2][9] = {{{0xB7BEL,1UL,65535UL,0xB49FL,0xCCE9L,65530UL,1UL,65530UL,0xCCE9L},{65535UL,1UL,1UL,65535UL,6UL,65530UL,0xB49FL,0xB38DL,9UL}},{{0xBE04L,0xB49FL,65531UL,0xCCE9L,0x1A4BL,65534UL,0x6E45L,65531UL,1UL},{0xB38DL,65527UL,65526UL,6UL,6UL,0xB38DL,6UL,6UL,0x4046L}},{{0xB38DL,0xB38DL,0x485DL,1UL,9UL,1UL,0x6E45L,0xB7BEL,1UL},{6UL,65534UL,65531UL,9UL,0x485DL,0xC602L,65534UL,65526UL,65530UL}},{{0x06EDL,65530UL,0x485DL,65531UL,0x1A4BL,65531UL,0x485DL,65530UL,0x06EDL},{0x6E45L,65530UL,0x4046L,0xB7BEL,0xB38DL,0xCCE9L,65535UL,0x4046L,0x485DL}}};
        const uint8_t *l_1998 = &l_1271[4][0].f8;
        const uint8_t **l_1997[5][10] = {{&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998},{&l_1998,&l_1998,(void*)0,&l_1998,&l_1998,&l_1998,(void*)0,&l_1998,&l_1998,&l_1998},{&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998},{&l_1998,&l_1998,(void*)0,&l_1998,&l_1998,&l_1998,(void*)0,&l_1998,&l_1998,&l_1998},{&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998,&l_1998}};
        const uint8_t ***l_1996[10] = {&l_1997[4][6],&l_1997[4][6],&l_1997[4][6],&l_1997[4][6],&l_1997[4][6],&l_1997[4][6],&l_1997[4][6],&l_1997[4][6],&l_1997[4][6],&l_1997[4][6]};
        int i, j, k;
        if ((g_1087 = ((safe_unary_minus_func_uint32_t_u(((safe_mul_func_uint16_t_u_u(((*l_1909)--), g_619[(g_75 + 2)])) || ((((**g_1528) = ((void*)0 != l_1912[3][2])) <= (l_1915[6] , 5L)) != p_31.f2)))) < (((*l_1917) = l_1916) == &l_1385))))
        {
            const uint64_t l_1924[3] = {0x40203C09CBFD4AF5LL,0x40203C09CBFD4AF5LL,0x40203C09CBFD4AF5LL};
            int8_t l_1931 = (-1L);
            struct S0 l_1932 = {14708,-1L,5,0xAF637A69FBB15225LL,0x7CEDL,0x65B1L,18446744073709551614UL,0L,1UL,-5L};
            uint32_t *l_1935 = &g_619[0];
            int i;
            if (g_1918)
                break;
            p_31.f4 = (safe_unary_minus_func_uint32_t_u((((0x52593562L ^ p_31.f1) | 0x08L) & (((((*l_1449) = (safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((((l_1924[0] , ((((((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_1931 && (((l_1932 , &l_1909) == (void*)0) ^ (safe_mod_func_uint16_t_u_u(((*l_1909) = (3UL <= p_31.f2)), 65527UL)))), p_31.f0)), 6)), 1L)) ^ p_31.f1) | 0x5AE3631CL) , l_1935) == l_1936) == (*g_345))) , g_424) , p_31.f0), 4)) , 0x5468L), p_32))) > p_31.f2) != p_31.f4) ^ l_1932.f5))));
        }
        else
        {
            uint64_t l_1937 = 0UL;
            int32_t l_1940 = 0x10521C96L;
            uint32_t l_1949 = 0x2C9B7980L;
            union U2 ***l_1974 = &g_521[1];
            int32_t l_1991 = 9L;
            for (g_138 = 0; (g_138 <= 2); g_138 += 1)
            {
                const struct S0 *l_1941[5][9] = {{(void*)0,&l_1915[2],&g_47[6][6],&l_1271[0][5],&l_1271[0][5],&g_47[6][6],&l_1915[2],(void*)0,&l_1271[4][2]},{(void*)0,&l_1271[0][5],&l_1271[4][2],(void*)0,&l_1915[2],&g_47[6][6],&l_1271[0][5],&l_1271[0][5],&g_47[6][6]},{(void*)0,&l_1271[0][5],&l_1915[6],&l_1271[0][5],(void*)0,&l_1271[4][8],&l_1271[0][5],&g_47[6][6],&l_1271[4][2]},{&l_1271[0][5],&l_1915[2],&l_1915[6],&g_47[6][6],&l_1915[2],&l_1271[4][2],&l_1915[2],&g_47[6][6],&l_1915[6]},{(void*)0,(void*)0,&l_1271[4][2],&g_47[6][6],&l_1271[0][5],&l_1271[4][8],(void*)0,&l_1271[0][5],&l_1915[6]}};
                const struct S0 **l_1942[2][1][7] = {{{&l_1941[1][8],&l_1941[1][8],&l_1941[4][8],&l_1941[1][8],&l_1941[1][8],&l_1941[4][8],&l_1941[1][8]}},{{&l_1941[1][8],&l_1941[1][8],&l_1941[4][8],&l_1941[1][8],&l_1941[1][8],&l_1941[4][8],&l_1941[1][8]}}};
                uint32_t l_1956 = 0x96170C47L;
                int32_t * const l_1983 = &g_618;
                int32_t l_2001[7] = {2L,0x22B64217L,2L,2L,0x22B64217L,2L,2L};
                union U2 l_2005 = {0};
                int i, j, k;
                ++l_1937;
                p_31.f0 = l_1604;
                l_1940 = p_31.f0;
                if ((((l_1943 = l_1941[1][8]) == &l_1915[2]) != (safe_add_func_uint32_t_u_u(p_31.f1, (+(~((((void*)0 == &g_1186[1][0]) | 0xA3BA2046L) || ((p_30 >= p_31.f1) > (0L | p_30)))))))))
                {
                    struct S0 *** const *l_1955 = &g_321[0][1][5];
                    struct S0 *** const ** const l_1954 = &l_1955;
                    union U2 *****l_1971 = &g_1127;
                    int32_t l_1972 = 0x427AAFC1L;
                    l_1949 |= 1L;
                    if (p_31.f3)
                    {
                        int32_t l_1969 = 0L;
                        union U2 ***l_1973 = &g_521[1];
                        int32_t l_1980 = 0x918ACCF9L;
                        int i, j;
                        p_31.f4 &= (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((l_1954 != &g_320), l_1956)), (((((*l_1449) = ((((safe_sub_func_int64_t_s_s((-9L), 0x936855DA96F352DELL)) , (safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((((p_31.f0 &= l_1956) || (safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_31.f3, 11)), ((p_31.f2 != (-9L)) || p_31.f2))) && g_182), g_285[1][2][0]))) ^ p_32), 1UL)), p_32))) | 1UL) , l_1969)) ^ l_1970[3][1][7]) && g_47[6][6].f4) ^ p_31.f2)));
                        if (l_1969)
                            break;
                        (*g_396) = (void*)0;
                        p_31.f0 ^= (((*l_1936) ^= (((((((l_1971 == (void*)0) >= (l_1972 &= 0xAFF187F6L)) || (((*l_1909) = ((l_1974 = l_1973) == ((l_1956 , g_408[(g_138 + 2)][g_75]) , l_1975[2]))) & (l_1980 |= (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(p_31.f1, p_31.f3)), 13))))) > p_32) && (-1L)) || p_31.f2) >= l_1969)) != 8UL);
                    }
                    else
                    {
                        if (p_30)
                            break;
                    }
                    for (g_1459 = 0; (g_1459 > 54); g_1459++)
                    {
                        p_31.f0 = 0L;
                        return (*****l_1971);
                    }
                }
                else
                {
                    int32_t **l_1984[2][7][3];
                    int32_t **l_1985 = &g_397;
                    int8_t l_2006 = 0L;
                    struct S0 *** const * const l_2008 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_1984[i][j][k] = &g_397;
                        }
                    }
                    (*l_1985) = l_1983;
                    (***l_1913) = (safe_div_func_uint16_t_u_u((!p_31.f3), (l_1991 = (safe_rshift_func_uint8_t_u_s(l_1937, 1)))));
                    for (g_284 = (-25); (g_284 > 13); g_284++)
                    {
                        l_2001[5] ^= (safe_lshift_func_int8_t_s_s(((l_1996[0] == &g_1232) ^ (safe_rshift_func_uint8_t_u_s((***l_1913), 4))), (*g_1529)));
                    }
                    p_31.f4 = ((0x1A0455ADL > (g_2004 = ((***l_1913) = (p_31.f4 && (p_31.f0 >= 1L))))) ^ (l_2005 , ((l_2006 >= ((*l_1449) = (+(p_31.f4 | ((*g_345) = ((l_2008 != ((((*l_1936) = g_1918) & p_31.f0) , &g_321[0][1][5])) >= 3UL)))))) || 254UL)));
                }
            }
            l_1940 = (((safe_unary_minus_func_int32_t_s(p_31.f1)) == p_31.f2) != ((*g_1529) = (safe_unary_minus_func_int8_t_s(l_2011))));
            (*g_396) = &l_1658;
            for (g_1885 = 5; (g_1885 > 8); g_1885 = safe_add_func_uint64_t_u_u(g_1885, 1))
            {
                int8_t l_2014 = 1L;
                l_2014 ^= 0xD2D31F0FL;
                (*g_397) = 0x786B1782L;
            }
        }
        (*g_396) = &l_1664[1];
    }
    for (g_67 = 0; (g_67 <= 3); g_67 += 1)
    {
        int32_t l_2031[7] = {0L,0L,0L,0L,0L,0L,0L};
        int32_t *l_2041 = &l_1658;
        struct S0 l_2044 = {5321,1L,6,0x31D1278D2D90C44FLL,65533UL,0L,1UL,0xB51ACC3BL,8UL,0x44CAL};
        uint32_t l_2047 = 0xA52D3951L;
        uint16_t *l_2048 = &l_1270;
        uint16_t *l_2049 = &l_1271[4][0].f4;
        int i;
        p_31.f4 = (p_31.f0 = (((*l_2049) = (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((l_1664[1] &= (safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u(((*l_2048) = (l_2031[2] && ((((*p_33) = (((((safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((!(safe_lshift_func_uint8_t_u_s(p_31.f3, (((((-1L) != (((*l_2041) = l_1602[6]) != (safe_mul_func_int8_t_s_s((l_2044 , (*p_33)), ((l_2044 , ((safe_div_func_int64_t_s_s(0x18DEA9E7A84633A1LL, 7UL)) != l_2044.f3)) & 0x168DB93EL))))) > 0x2206L) <= p_31.f3) < p_31.f2)))), p_30)), l_1271[4][0].f1)), l_2047)) , (*l_2041)) <= 0xB6L) || p_31.f0) || p_30)) >= 0x14L) != p_31.f4))), p_31.f4)) > p_31.f0), g_1944.f7)), l_2044.f1)), 0x0A21L)), p_31.f4))) >= p_31.f0), p_31.f1)), p_31.f2))) || p_32));
        (*l_2041) ^= p_31.f1;
        if (p_31.f1)
            continue;
    }
    return l_2050;
}







static struct S1 func_34(const int8_t * p_35, int8_t * p_36, int8_t * p_37, uint8_t p_38)
{
    const int8_t *l_43 = &g_9;
    int32_t l_53 = 0x3E25FC24L;
    struct S0 l_118 = {10352,0x2812B3B5L,6,9UL,65534UL,0x40E1L,7UL,0xCE241EA3L,3UL,0xDEDDL};
    struct S1 l_119 = {349,17,55,2,-26033};
    int8_t *l_940 = &g_941;
    int32_t *l_1163 = &g_1087;
    const struct S1 *l_1173 = &g_48[0][5];
    const struct S1 **l_1172 = &l_1173;
    uint8_t **l_1231 = &g_1230;
    if (((void*)0 == l_43))
    {
        struct S0 **l_44 = (void*)0;
        struct S0 *l_46[9][9][3] = {{{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[4][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[1][5],&g_47[6][6]},{&g_47[4][6],&g_47[1][5],&g_47[4][6]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[6][6],&g_47[4][6]},{&g_47[6][6],&g_47[4][6],&g_47[4][6]},{&g_47[4][6],&g_47[6][6],&g_47[1][5]}},{{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[4][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[4][6]},{&g_47[6][6],&g_47[4][6],&g_47[4][6]},{&g_47[4][6],&g_47[6][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[4][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[4][6]},{&g_47[6][6],&g_47[4][6],&g_47[4][6]}},{{&g_47[4][6],&g_47[6][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[4][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[4][6]},{&g_47[6][6],&g_47[4][6],&g_47[4][6]},{&g_47[4][6],&g_47[6][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[4][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[4][6]}},{{&g_47[6][6],&g_47[4][6],&g_47[4][6]},{&g_47[4][6],&g_47[6][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[4][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[4][6]},{&g_47[6][6],&g_47[4][6],&g_47[4][6]},{&g_47[4][6],&g_47[6][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[4][6],&g_47[1][5]}},{{&g_47[6][6],&g_47[6][6],&g_47[4][6]},{&g_47[6][6],&g_47[4][6],&g_47[4][6]},{&g_47[4][6],&g_47[6][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[4][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[4][6]},{&g_47[6][6],&g_47[4][6],&g_47[4][6]},{&g_47[4][6],&g_47[6][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]}},{{&g_47[6][6],&g_47[4][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[4][6]},{&g_47[6][6],&g_47[4][6],&g_47[4][6]},{&g_47[4][6],&g_47[6][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[4][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[4][6]},{&g_47[6][6],&g_47[4][6],&g_47[4][6]},{&g_47[4][6],&g_47[6][6],&g_47[1][5]}},{{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[4][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[4][6]},{&g_47[6][6],&g_47[4][6],&g_47[4][6]},{&g_47[4][6],&g_47[6][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[4][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[4][6]},{&g_47[6][6],&g_47[4][6],&g_47[4][6]}},{{&g_47[4][6],&g_47[6][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[4][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[4][6]},{&g_47[6][6],&g_47[4][6],&g_47[4][6]},{&g_47[4][6],&g_47[6][6],&g_47[1][5]},{&g_47[6][6],&g_47[6][6],&g_47[1][5]},{&g_47[4][6],&g_47[6][6],&g_47[6][6]},{&g_47[4][6],&g_47[4][6],&g_47[6][6]}},{{&g_47[1][5],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[1][5],&g_47[6][6],&g_47[1][5]},{&g_47[4][6],&g_47[6][6],&g_47[6][6]},{&g_47[4][6],&g_47[4][6],&g_47[6][6]},{&g_47[1][5],&g_47[6][6],&g_47[6][6]},{&g_47[6][6],&g_47[6][6],&g_47[6][6]},{&g_47[1][5],&g_47[6][6],&g_47[1][5]},{&g_47[4][6],&g_47[6][6],&g_47[6][6]}}};
        struct S0 **l_45 = &l_46[4][8][1];
        int i, j, k;
        (*l_45) = (void*)0;
    }
    else
    {
        return g_48[0][5];
    }
    (*l_1163) ^= ((safe_lshift_func_int8_t_s_u(((*p_36) = (-2L)), 5)) ^ ((safe_mod_func_int8_t_s_s((l_53 | g_9), (+(func_55(func_61((g_67 ^= 0x0D0CCF25865EE812LL), func_68(((void*)0 != g_72), l_53, &g_9), l_118, l_119, l_118), l_940, p_36, l_119, &l_118) || g_407.f0)))) < (-7L)));
    for (g_304 = 0; (g_304 <= 2); g_304 += 1)
    {
        struct S1 **l_1174 = (void*)0;
        uint16_t *l_1179 = &l_118.f4;
        int32_t l_1208 = (-9L);
        (*g_396) = &l_53;
        (**g_396) |= (0x1943L ^ (safe_sub_func_uint8_t_u_u(g_283, (safe_sub_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u(248UL, 1)) <= (safe_sub_func_int64_t_s_s(0x55205369A8FBB989LL, (l_1172 == l_1174)))), (safe_rshift_func_int16_t_s_u((*g_345), (((*l_1179) &= 65534UL) | ((*l_1163) == (*p_37))))))))));
        for (g_257 = 0; (g_257 <= 1); g_257 += 1)
        {
            int32_t * const l_1180[2][8][8] = {{{(void*)0,(void*)0,&l_53,&g_1087,&g_1087,&l_53,(void*)0,(void*)0},{(void*)0,&g_79,&g_1087,&g_618,(void*)0,&g_79,&l_53,&g_79},{&g_618,(void*)0,&g_1087,(void*)0,&g_618,&g_79,&l_53,(void*)0},{&l_53,&g_79,(void*)0,&g_618,&l_53,&l_53,&g_618,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_1087,&g_1087,&l_53,&l_53},{&l_53,&l_53,&g_1087,(void*)0,&g_1087,&l_53,&l_53,&l_53},{&l_53,&g_1087,&g_1087,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_618,&l_53,&l_53,&g_618,(void*)0,&g_79,&l_53,(void*)0}},{{&l_53,&g_79,&g_618,(void*)0,&g_1087,(void*)0,&g_618,&g_79},{&l_53,&g_79,(void*)0,&g_618,&g_1087,&g_79,(void*)0,(void*)0},{(void*)0,&l_53,&g_1087,&g_1087,&l_53,(void*)0,(void*)0,&g_1087},{&l_53,&g_1087,(void*)0,&g_79,&g_618,&l_53,&g_618,&g_79},{&g_618,&l_53,&g_618,&g_79,(void*)0,&g_1087,&l_53,&g_1087},{(void*)0,(void*)0,&l_53,&g_1087,&g_1087,&l_53,(void*)0,(void*)0},{(void*)0,&g_79,&g_1087,&g_618,(void*)0,&g_79,&l_53,&g_79},{&g_618,(void*)0,&g_1087,(void*)0,&g_618,&g_79,&l_53,(void*)0}}};
            int32_t l_1218[8][10][3] = {{{(-9L),(-1L),(-1L)},{(-1L),1L,0x4BD93F59L},{0xF4754032L,(-9L),(-1L)},{0xE45CFA9CL,0x64B30A8AL,(-1L)},{1L,(-1L),0x4BD93F59L},{0x64B30A8AL,0xB1F26EF7L,(-1L)},{0xB1F26EF7L,0xF4754032L,(-1L)},{(-1L),(-1L),0x4BD93F59L},{(-1L),0xE45CFA9CL,(-1L)},{(-9L),(-1L),(-1L)}},{{0x4EAF7509L,0xB754DCA8L,1L},{(-2L),0xE0B4A853L,(-1L)},{(-1L),0x0E0FB026L,(-1L)},{0xB754DCA8L,0x4EAF7509L,1L},{0x0E0FB026L,0xCC24C06EL,(-1L)},{0xCC24C06EL,(-2L),(-1L)},{0xFA6C4FF8L,0xFA6C4FF8L,1L},{(-1L),(-1L),(-1L)},{0xE0B4A853L,(-1L),(-1L)},{0x4EAF7509L,0xB754DCA8L,1L}},{{(-2L),0xE0B4A853L,(-1L)},{(-1L),0x0E0FB026L,(-1L)},{0xB754DCA8L,0x4EAF7509L,1L},{0x0E0FB026L,0xCC24C06EL,(-1L)},{0xCC24C06EL,(-2L),(-1L)},{0xFA6C4FF8L,0xFA6C4FF8L,1L},{(-1L),(-1L),(-1L)},{0xE0B4A853L,(-1L),(-1L)},{0x4EAF7509L,0xB754DCA8L,1L},{(-2L),0xE0B4A853L,(-1L)}},{{(-1L),0x0E0FB026L,(-1L)},{0xB754DCA8L,0x4EAF7509L,1L},{0x0E0FB026L,0xCC24C06EL,(-1L)},{0xCC24C06EL,(-2L),(-1L)},{0xFA6C4FF8L,0xFA6C4FF8L,1L},{(-1L),(-1L),(-1L)},{0xE0B4A853L,(-1L),(-1L)},{0x4EAF7509L,0xB754DCA8L,1L},{(-2L),0xE0B4A853L,(-1L)},{(-1L),0x0E0FB026L,(-1L)}},{{0xB754DCA8L,0x4EAF7509L,1L},{0x0E0FB026L,0xCC24C06EL,(-1L)},{0xCC24C06EL,(-2L),(-1L)},{0xFA6C4FF8L,0xFA6C4FF8L,1L},{(-1L),(-1L),(-1L)},{0xE0B4A853L,(-1L),(-1L)},{0x4EAF7509L,0xB754DCA8L,1L},{(-2L),0xE0B4A853L,(-1L)},{(-1L),0x0E0FB026L,(-1L)},{0xB754DCA8L,0x4EAF7509L,1L}},{{0x0E0FB026L,0xCC24C06EL,(-1L)},{0xCC24C06EL,(-2L),(-1L)},{0xFA6C4FF8L,0xFA6C4FF8L,1L},{(-1L),(-1L),(-1L)},{0xE0B4A853L,(-1L),(-1L)},{0x4EAF7509L,0xB754DCA8L,1L},{(-2L),0xE0B4A853L,(-1L)},{(-1L),0x0E0FB026L,(-1L)},{0xB754DCA8L,0x4EAF7509L,1L},{0x0E0FB026L,0xCC24C06EL,(-1L)}},{{0xCC24C06EL,(-2L),(-1L)},{0xFA6C4FF8L,0xFA6C4FF8L,1L},{(-1L),(-1L),(-1L)},{0xE0B4A853L,(-1L),(-1L)},{0x4EAF7509L,0xB754DCA8L,1L},{(-2L),0xE0B4A853L,(-1L)},{(-1L),0x0E0FB026L,(-1L)},{0xB754DCA8L,0x4EAF7509L,1L},{0x0E0FB026L,0xCC24C06EL,(-1L)},{0xCC24C06EL,(-2L),(-1L)}},{{0xFA6C4FF8L,0xFA6C4FF8L,1L},{(-1L),(-1L),(-1L)},{0xE0B4A853L,(-1L),(-1L)},{4L,4L,0xB754DCA8L},{(-1L),0x68452AECL,0x4EAF7509L},{(-1L),(-5L),0x4EAF7509L},{4L,4L,0xB754DCA8L},{(-5L),0x4BD93F59L,0x4EAF7509L},{0x4BD93F59L,(-1L),0x4EAF7509L},{0xB4178267L,0xB4178267L,0xB754DCA8L}}};
            struct S0 l_1260 = {17378,0x67AB121DL,4,0x0D98DF8A3D1F93CCLL,65530UL,0x360AL,0x0CD6F3E5L,-8L,0xC7L,0x4604L};
            int i, j, k;
        }
    }
    return (*l_1173);
}







static uint64_t func_55(struct S0 * p_56, int8_t * p_57, int8_t * p_58, struct S1 p_59, struct S0 * p_60)
{
    uint16_t *l_948[3][10] = {{&g_361[1][1][7],&g_361[0][0][7],&g_47[6][6].f4,&g_361[0][0][7],&g_361[1][1][7],(void*)0,&g_361[1][4][4],(void*)0,(void*)0,&g_361[1][4][4]},{&g_361[1][3][0],(void*)0,&g_47[6][6].f4,&g_47[6][6].f4,(void*)0,&g_361[1][3][0],&g_47[6][6].f4,&g_361[1][4][4],&g_361[1][1][7],&g_361[1][4][4]},{&g_361[0][0][7],&g_47[6][6].f4,&g_361[1][1][7],(void*)0,&g_361[1][1][7],&g_47[6][6].f4,&g_361[0][0][7],&g_47[6][6].f4,&g_361[1][3][4],&g_361[1][3][4]}};
    uint16_t **l_949[7] = {&l_948[0][5],&l_948[0][5],&l_948[2][4],&l_948[0][5],&l_948[0][5],&l_948[2][4],&l_948[0][5]};
    int32_t l_956[5] = {3L,3L,3L,3L,3L};
    uint64_t *l_957 = (void*)0;
    uint64_t *l_958[6] = {&g_138,&g_138,&g_144,&g_138,&g_138,&g_144};
    int32_t l_959 = 0xEBF2E018L;
    uint32_t *l_960 = &g_619[5];
    struct S0 ****l_966 = &g_321[0][1][4];
    int8_t *l_967 = &g_282;
    int8_t *l_968 = &g_75;
    int16_t l_1019 = 0x02E4L;
    struct S1 *l_1031 = &g_48[0][5];
    int16_t ***l_1053 = (void*)0;
    int64_t *l_1056 = (void*)0;
    int64_t **l_1055[3];
    union U2 ***l_1072 = &g_521[1];
    uint16_t l_1104 = 0UL;
    int64_t *l_1107 = &g_190;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1055[i] = &l_1056;
    g_618 = (safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(g_285[7][0][2], (((0x03F0E1D29886AB44LL <= ((((((g_950 = l_948[2][2]) == &g_361[0][5][0]) , (p_59.f4 || p_59.f1)) && ((*l_960) = ((safe_mul_func_int8_t_s_s(((safe_add_func_int32_t_s_s((+(l_956[1] = l_956[0])), (((1L && l_959) || l_959) == (*g_8)))) || p_59.f1), 4UL)) > g_47[6][6].f3))) <= 0x000CL) <= 3UL)) < 0UL) | 4UL))), l_959)), 2));
    if (((((*l_960) = (((*l_968) &= ((*g_8) == (safe_div_func_uint16_t_u_u(((p_59.f0 ^ (+(((*l_967) &= ((((*p_57) |= (7L ^ (((safe_mod_func_uint16_t_u_u((((((**g_72) , l_966) != (void*)0) == l_956[0]) == g_67), p_59.f2)) < 0x8299A4C7L) ^ g_285[1][2][0]))) && 0x56L) >= l_956[0])) < (-1L)))) && 0x89L), l_956[4])))) != 0x9BL)) == g_407.f0) , 0xAC62C82AL))
    {
        uint64_t l_998 = 0x4FA2FAF29F76440ELL;
        int8_t **l_1010 = &l_967;
        for (g_618 = (-23); (g_618 <= (-24)); g_618 = safe_sub_func_int32_t_s_s(g_618, 3))
        {
            uint64_t l_1003[4][8] = {{0UL,0x0D3177814EBF9549LL,18446744073709551615UL,0UL,18446744073709551615UL,0x0D3177814EBF9549LL,0UL,0UL},{0x0D3177814EBF9549LL,0UL,0UL,0UL,0UL,0x0D3177814EBF9549LL,18446744073709551615UL,0x0D3177814EBF9549LL},{0UL,0x0D3177814EBF9549LL,18446744073709551615UL,0x0D3177814EBF9549LL,0UL,0UL,0UL,0UL},{0x0D3177814EBF9549LL,0UL,0UL,0x0D3177814EBF9549LL,18446744073709551615UL,0UL,18446744073709551615UL,0x0D3177814EBF9549LL}};
            int32_t *l_1013 = &l_959;
            int i, j;
            for (g_304 = 0; (g_304 <= 4); g_304 += 1)
            {
                int32_t *l_971 = &l_956[0];
                int32_t *l_972 = &l_959;
                int32_t *l_973 = &g_257;
                int32_t *l_974 = &l_956[1];
                uint32_t l_975 = 0UL;
                int32_t *l_1011 = (void*)0;
                int32_t *l_1012[10][8][3] = {{{&l_956[0],&g_79,(void*)0},{&g_79,&g_257,(void*)0},{&l_956[0],&g_79,(void*)0},{&g_257,&g_618,&l_956[0]},{&l_956[0],&l_956[0],(void*)0},{&g_79,(void*)0,&g_79},{&l_956[0],&l_956[g_304],(void*)0},{&g_257,&g_257,&g_618}},{{&l_956[0],&l_956[0],(void*)0},{&g_79,&g_618,&g_257},{&l_956[0],(void*)0,(void*)0},{&g_257,(void*)0,&g_257},{&l_956[0],&g_79,(void*)0},{&g_79,&g_257,(void*)0},{&l_956[0],&g_79,(void*)0},{&g_257,&g_618,&l_956[0]}},{{&l_956[0],&l_956[0],(void*)0},{&g_79,(void*)0,&g_79},{&l_956[0],&l_956[g_304],(void*)0},{&g_257,&g_257,&g_618},{&l_956[0],&l_956[0],(void*)0},{&g_79,&g_618,&g_257},{&l_956[0],(void*)0,(void*)0},{&g_257,(void*)0,&g_257}},{{&l_956[0],&g_79,(void*)0},{&g_79,&g_257,(void*)0},{&l_956[0],&g_79,(void*)0},{&g_257,&g_618,&l_956[0]},{&l_956[0],&l_956[0],(void*)0},{&g_79,(void*)0,&l_959},{&g_618,&l_956[0],&g_79},{(void*)0,&l_959,&g_79}},{{&g_618,(void*)0,&l_956[0]},{&l_959,&g_79,&g_257},{&g_618,&l_956[1],&l_956[g_304]},{(void*)0,(void*)0,(void*)0},{&g_618,(void*)0,&g_79},{&l_959,&l_959,&l_959},{&g_618,&g_618,&l_956[0]},{(void*)0,&g_79,(void*)0}},{{&g_618,(void*)0,&l_956[g_304]},{&l_959,(void*)0,&l_959},{&g_618,&l_956[0],&g_79},{(void*)0,&l_959,&g_79},{&g_618,(void*)0,&l_956[0]},{&l_959,&g_79,&g_257},{&g_618,&l_956[1],&l_956[g_304]},{(void*)0,(void*)0,(void*)0}},{{&g_618,(void*)0,&g_79},{&l_959,&l_959,&l_959},{&g_618,&g_618,&l_956[0]},{(void*)0,&g_79,(void*)0},{&g_618,(void*)0,&l_956[g_304]},{&l_959,(void*)0,&l_959},{&g_618,&l_956[0],&g_79},{(void*)0,&l_959,&g_79}},{{&g_618,(void*)0,&l_956[0]},{&l_959,&g_79,&g_257},{&g_618,&l_956[1],&l_956[g_304]},{(void*)0,(void*)0,(void*)0},{&g_618,(void*)0,&g_79},{&l_959,&l_959,&l_959},{&g_618,&g_618,&l_956[0]},{(void*)0,&g_79,(void*)0}},{{&g_618,(void*)0,&l_956[g_304]},{&l_959,(void*)0,&l_959},{&g_618,&l_956[0],&g_79},{(void*)0,&l_959,&g_79},{&g_618,(void*)0,&l_956[0]},{&l_959,&g_79,&g_257},{&g_618,&l_956[1],&l_956[g_304]},{(void*)0,(void*)0,(void*)0}},{{&g_618,(void*)0,&g_79},{&l_959,&l_959,&l_959},{&g_618,&g_618,&l_956[0]},{(void*)0,&g_79,(void*)0},{&g_618,(void*)0,&l_956[g_304]},{&l_959,(void*)0,&l_959},{&g_618,&l_956[0],&g_79},{(void*)0,&l_959,&g_79}}};
                int i, j, k;
                ++l_975;
                g_48[0][5].f0 &= (safe_rshift_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((l_956[g_304] , (safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((l_956[g_304] > (0L & (safe_mod_func_int8_t_s_s(((*l_968) = ((*p_57) = (((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((((*g_522) , ((l_998 <= ((*p_57) ^ (((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_1003[0][4], (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_1003[2][7] | ((((safe_div_func_int8_t_s_s((p_59.f2 < p_59.f1), 0xF2L)) , (*l_973)) , (void*)0) == l_1010)), l_956[0])), (-8L))))), 3)) , l_1003[0][2]) == g_182))) > 0x6FE4D86BE2054E2FLL)) <= g_941), (*g_345))), 8)), p_59.f1)) != p_59.f0) & 0x7A19EDDDL))), l_959)))), (*l_972))), (*l_971)))), g_361[2][0][3])), g_619[6])) == (*l_974)) ^ p_59.f4), 6));
                if (l_998)
                    break;
            }
            (*l_1013) = l_1003[0][4];
        }
    }
    else
    {
        int32_t l_1017 = 0xE5704A7BL;
        int32_t l_1018 = 0x8205CEF6L;
        int32_t l_1020 = (-1L);
        int32_t l_1021 = 0L;
        struct S0 **** const l_1025 = &g_321[1][0][6];
        int32_t *l_1032[10] = {&l_1020,&g_618,&g_618,&l_1020,&l_959,&l_1020,&g_618,&g_618,&l_1020,&l_959};
        int i;
        for (g_941 = 0; (g_941 < 5); g_941++)
        {
            int32_t *l_1016[10][4][2] = {{{&g_257,&g_257},{&g_79,&g_79},{&g_79,&g_79},{&g_257,&g_257}},{{&g_257,&g_79},{&l_956[0],&g_79},{&g_257,&l_956[0]},{&l_959,&g_257}},{{&l_959,&l_956[0]},{&g_257,&g_79},{&l_956[0],&g_79},{&g_257,&g_257}},{{&g_257,&g_79},{&g_79,&g_79},{&g_79,&g_257},{&g_79,&g_257}},{{&g_79,&g_257},{&g_79,&g_79},{&g_257,&l_956[0]},{&l_959,&l_959}},{{&g_79,&g_79},{&l_959,&g_79},{&g_618,&g_79},{&l_956[0],&g_618}},{{&g_257,&g_79},{&g_257,&g_618},{&l_956[0],&g_79},{&g_618,&g_79}},{{&l_959,&g_79},{&g_79,&l_959},{&l_959,&l_956[0]},{&g_257,&g_79}},{{&g_79,&g_257},{&g_79,&g_257},{&g_79,&g_79},{&g_257,&l_956[0]}},{{&l_959,&l_959},{&g_79,&g_79},{&l_959,&g_79},{&g_618,&g_79}}};
            int i, j, k;
            g_1022--;
        }
        p_59.f0 |= (p_59.f4 = (((g_107 != l_1019) < (((**g_896) , ((((void*)0 != l_1025) | (safe_lshift_func_uint16_t_u_u((l_1017 && ((!(safe_rshift_func_int8_t_s_s(((*p_57) <= (((void*)0 == l_1031) && 255UL)), 2))) | 255UL)), p_59.f2))) && 0x72L)) || g_190)) | g_67));
    }
    for (g_107 = 22; (g_107 <= 2); g_107--)
    {
        union U2 ***l_1036 = &g_521[3];
        union U2 ****l_1035 = &l_1036;
        int32_t l_1043 = 0L;
        int32_t l_1046[4][10] = {{0x56C6B588L,0xF0A02A14L,0xF0A02A14L,0x56C6B588L,0x2E5E0EEAL,0x56C6B588L,0xF0A02A14L,0xF0A02A14L,0x56C6B588L,0x2E5E0EEAL},{0x56C6B588L,0xF0A02A14L,0xF0A02A14L,0x56C6B588L,0x2E5E0EEAL,0x56C6B588L,0xF0A02A14L,0xF0A02A14L,0x56C6B588L,0x2E5E0EEAL},{0x56C6B588L,0xF0A02A14L,0xF0A02A14L,0x56C6B588L,0x2E5E0EEAL,0x56C6B588L,0xF0A02A14L,0xF0A02A14L,0x56C6B588L,0x2E5E0EEAL},{0x56C6B588L,0xF0A02A14L,0xF0A02A14L,0x56C6B588L,0x2E5E0EEAL,0x56C6B588L,0xF0A02A14L,0xF0A02A14L,0x56C6B588L,0x2E5E0EEAL}};
        int64_t *l_1047[7][5] = {{(void*)0,&g_283,&g_283,(void*)0,&g_283},{(void*)0,(void*)0,&g_190,&g_190,(void*)0},{&g_283,&g_283,&g_190,&g_795,&g_795},{&g_283,&g_283,&g_283,&g_190,&g_795},{(void*)0,(void*)0,&g_795,(void*)0,(void*)0},{&g_283,(void*)0,&g_283,(void*)0,&g_283},{&g_283,&g_283,&g_795,(void*)0,&g_795}};
        int16_t **l_1052[6][2][5] = {{{&g_345,&g_345,&g_345,(void*)0,(void*)0},{&g_345,&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,&g_345,&g_345,(void*)0},{(void*)0,&g_345,&g_345,&g_345,&g_345}},{{(void*)0,&g_345,(void*)0,&g_345,(void*)0},{(void*)0,(void*)0,&g_345,&g_345,&g_345}},{{(void*)0,&g_345,&g_345,(void*)0,&g_345},{&g_345,&g_345,&g_345,&g_345,(void*)0}},{{&g_345,&g_345,&g_345,&g_345,&g_345},{&g_345,(void*)0,&g_345,(void*)0,&g_345}},{{&g_345,&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,(void*)0,&g_345}}};
        int16_t ** const *l_1051[8] = {(void*)0,&l_1052[5][1][3],(void*)0,&l_1052[5][1][3],(void*)0,&l_1052[5][1][3],(void*)0,&l_1052[5][1][3]};
        int16_t ****l_1054[6] = {&l_1053,&l_1053,&l_1053,&l_1053,&l_1053,&l_1053};
        uint16_t **l_1066 = (void*)0;
        uint8_t *l_1067 = &g_258[3];
        int i, j, k;
        p_59.f4 &= (((((void*)0 == l_1035) < ((safe_add_func_int8_t_s_s((l_1046[1][6] |= (((safe_add_func_int32_t_s_s((0xB2L >= (l_1043 && p_59.f0)), (safe_rshift_func_uint8_t_u_s((((l_1043 < ((*l_1035) != ((0xC6L & (0UL >= (-1L))) , (void*)0))) || 0x10DA5EE640617FDCLL) != g_47[6][6].f5), 0)))) | 0UL) == g_256)), p_59.f3)) , p_59.f0)) <= l_956[0]) < 1L);
        p_59.f0 = ((l_1046[1][6] = 0xEA13750981648EE9LL) , ((+((safe_sub_func_uint8_t_u_u((l_1051[1] == (l_1053 = l_1053)), (*p_57))) || (&l_1047[0][1] != l_1055[0]))) , (safe_unary_minus_func_uint64_t_u(((l_1046[1][3] = p_59.f3) || ((***l_1036) , (safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((((*l_1067) = (((&l_948[0][6] == l_1066) >= (-4L)) != l_959)) , p_59.f1) > p_59.f1), 8)), 253UL)), p_59.f1)), l_956[4]))))))));
    }
    for (g_1022 = 0; (g_1022 <= 2); g_1022 += 1)
    {
        union U2 ***l_1070[1][8][1];
        int32_t l_1084 = 0xFB66119BL;
        int32_t l_1086 = 0L;
        int32_t l_1088 = 0x77D91D0BL;
        uint8_t l_1136[5][3] = {{0x13L,0xA3L,0x46L},{0xA3L,0x13L,0x13L},{0x46L,0x13L,250UL},{0xFCL,0xA3L,6UL},{0x46L,0x46L,6UL}};
        const uint32_t *l_1154 = &g_619[5];
        const uint32_t **l_1153 = &l_1154;
        uint32_t l_1155 = 0UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1070[i][j][k] = &g_521[1];
            }
        }
        (*g_396) = (((void*)0 != &g_522) , &l_956[0]);
        for (g_941 = 0; (g_941 <= 2); g_941 += 1)
        {
            int64_t l_1079 = 0xEF0A4D690EDC6B09LL;
            int32_t l_1085 = (-2L);
            int64_t *l_1117 = &g_190;
            int32_t *l_1118 = &g_79;
            const int32_t *l_1159 = &l_1088;
            const int32_t ** const l_1158 = &l_1159;
            const int32_t ** const *l_1157 = &l_1158;
            for (g_75 = 0; (g_75 <= 2); g_75 += 1)
            {
                int32_t l_1082 = 1L;
                uint32_t l_1090 = 1UL;
                int i, j, k;
            }
            (*l_1118) ^= ((safe_mod_func_int16_t_s_s((0UL <= ((g_256 <= ((safe_div_func_int64_t_s_s((((safe_add_func_uint8_t_u_u((p_59.f1 , (((l_956[4] , ((safe_div_func_uint64_t_u_u(0x3D977AF8E25B5468LL, g_1022)) , p_59.f3)) == (((l_1117 = (g_1116 = &l_1079)) == ((l_956[0] == g_618) , (void*)0)) , l_1079)) & p_59.f0)), (*g_8))) || (*g_397)) | 0L), 0xC4143013B3E9F244LL)) , (*g_1116))) > l_959)), g_284)) , (-1L));
            for (g_190 = 0; (g_190 <= 2); g_190 += 1)
            {
                int8_t l_1148 = 2L;
                uint32_t l_1156 = 0xAE8E5FD0L;
                int32_t *l_1162 = &g_257;
                for (g_618 = 5; (g_618 >= 0); g_618 -= 1)
                {
                    union U2 ****l_1125 = &l_1072;
                    int32_t l_1133 = 0x8E9BC4BDL;
                    struct S0 l_1161[1][6][5] = {{{{9505,0x4DB359EFL,2,1UL,0UL,0xAA64L,2UL,1L,0xE3L,0L},{5206,1L,1,1UL,0x3561L,6L,0x43508791L,-1L,252UL,0xC3DDL},{5206,1L,1,1UL,0x3561L,6L,0x43508791L,-1L,252UL,0xC3DDL},{9505,0x4DB359EFL,2,1UL,0UL,0xAA64L,2UL,1L,0xE3L,0L},{5206,1L,1,1UL,0x3561L,6L,0x43508791L,-1L,252UL,0xC3DDL}},{{16514,-8L,6,0UL,65530UL,-1L,0x2DDCAD56L,0x44C33104L,2UL,0L},{16514,-8L,6,0UL,65530UL,-1L,0x2DDCAD56L,0x44C33104L,2UL,0L},{19072,0x2D4CCD21L,1,0xF01DDA29BEC6CADCLL,0xFC6AL,0xB224L,1UL,-1L,0xCDL,-1L},{16514,-8L,6,0UL,65530UL,-1L,0x2DDCAD56L,0x44C33104L,2UL,0L},{16514,-8L,6,0UL,65530UL,-1L,0x2DDCAD56L,0x44C33104L,2UL,0L}},{{5206,1L,1,1UL,0x3561L,6L,0x43508791L,-1L,252UL,0xC3DDL},{9505,0x4DB359EFL,2,1UL,0UL,0xAA64L,2UL,1L,0xE3L,0L},{5206,1L,1,1UL,0x3561L,6L,0x43508791L,-1L,252UL,0xC3DDL},{5206,1L,1,1UL,0x3561L,6L,0x43508791L,-1L,252UL,0xC3DDL},{9505,0x4DB359EFL,2,1UL,0UL,0xAA64L,2UL,1L,0xE3L,0L}},{{16514,-8L,6,0UL,65530UL,-1L,0x2DDCAD56L,0x44C33104L,2UL,0L},{1485,3L,3,0UL,1UL,-1L,0xB1AFAC0BL,0L,255UL,-4L},{1485,3L,3,0UL,1UL,-1L,0xB1AFAC0BL,0L,255UL,-4L},{16514,-8L,6,0UL,65530UL,-1L,0x2DDCAD56L,0x44C33104L,2UL,0L},{1485,3L,3,0UL,1UL,-1L,0xB1AFAC0BL,0L,255UL,-4L}},{{9505,0x4DB359EFL,2,1UL,0UL,0xAA64L,2UL,1L,0xE3L,0L},{9505,0x4DB359EFL,2,1UL,0UL,0xAA64L,2UL,1L,0xE3L,0L},{20936,0xAB201626L,6,0xE239B2CC3D3C5062LL,0xA90FL,-7L,0x4A7F4DDEL,-4L,9UL,4L},{9505,0x4DB359EFL,2,1UL,0UL,0xAA64L,2UL,1L,0xE3L,0L},{9505,0x4DB359EFL,2,1UL,0UL,0xAA64L,2UL,1L,0xE3L,0L}},{{1485,3L,3,0UL,1UL,-1L,0xB1AFAC0BL,0L,255UL,-4L},{16514,-8L,6,0UL,65530UL,-1L,0x2DDCAD56L,0x44C33104L,2UL,0L},{1485,3L,3,0UL,1UL,-1L,0xB1AFAC0BL,0L,255UL,-4L},{1485,3L,3,0UL,1UL,-1L,0xB1AFAC0BL,0L,255UL,-4L},{16514,-8L,6,0UL,65530UL,-1L,0x2DDCAD56L,0x44C33104L,2UL,0L}}}};
                    int i, j, k;
                    for (g_282 = 2; (g_282 >= 0); g_282 -= 1)
                    {
                        union U2 *****l_1126 = &l_1125;
                        struct S1 l_1143[7][7] = {{{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782}},{{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396}},{{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782}},{{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396}},{{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782}},{{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396},{339,6,36,0,-16396}},{{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782},{-266,1,19,3,15782}}};
                        uint32_t **l_1152 = &l_960;
                        const int32_t ** const **l_1160 = &l_1157;
                        int i, j;
                        l_1088 |= (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((((safe_mod_func_int8_t_s_s(g_619[(g_941 + 4)], ((((((*l_1126) = l_1125) == g_1127) >= (*l_1118)) && (safe_mod_func_int32_t_s_s((safe_div_func_int64_t_s_s((p_59.f2 & ((l_1133 >= ((**g_72) , (safe_mod_func_uint8_t_u_u(l_1136[1][2], ((p_59 , (-2L)) && 0x5C9B190AL))))) <= (*p_57))), 0x3AF57F87875FFEDCLL)), 0x17688FFFL))) && 8L))) ^ p_59.f3) > l_959) < l_956[0]), (*l_1118))) < g_48[0][5].f0), 0x98L));
                        (*l_1160) = ((safe_mod_func_int8_t_s_s(((((((((safe_rshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((l_1143[3][0] , (((safe_div_func_uint16_t_u_u(0UL, (safe_rshift_func_int8_t_s_s(l_1148, 0)))) == (*g_397)) , (0xF94C8AA559C1A8B4LL | (safe_lshift_func_int16_t_s_u((((l_1148 & ((!((p_59.f3 > (l_1152 == l_1153)) || l_1155)) && (*g_8))) > p_59.f0) , l_1156), 8))))), p_59.f1)) >= 0x1237E784L), 6)) & 18446744073709551615UL) <= 0x69L) <= 1UL) | l_1136[1][0]) ^ 1L) == p_59.f2) , (*p_57)), g_79)) , l_1157);
                        if ((**g_396))
                            break;
                        l_1133 &= (l_1161[0][5][4] , l_1155);
                    }
                    (**g_396) = 1L;
                    return l_1148;
                }
                for (g_733 = 2; (g_733 >= 0); g_733 -= 1)
                {
                    for (g_75 = 2; (g_75 >= 0); g_75 -= 1)
                    {
                        (**l_1157) = l_1162;
                    }
                }
                (**g_396) |= ((*l_1158) != (*g_396));
                if (l_956[4])
                    break;
            }
        }
        for (g_941 = 0; (g_941 <= 2); g_941 += 1)
        {
            return p_59.f1;
        }
        return g_9;
    }
    return l_1019;
}







static struct S0 * func_61(uint64_t p_62, struct S0 ** p_63, struct S0 p_64, struct S1 p_65, struct S0 p_66)
{
    int32_t *l_120 = &g_79;
    uint16_t l_121[6] = {0xA26DL,0xA26DL,0xA26DL,0xA26DL,0xA26DL,0xA26DL};
    struct S0 l_133[9][6][1] = {{{{15291,0x40514D0CL,5,0xB409F4FCCDD416DDLL,0x041BL,0x4B74L,0x7CF25E2EL,0L,0xCAL,0x3CD1L}},{{12636,0L,1,0xEDC4901C99F48E8CLL,0xB87BL,0x2CBBL,0UL,0x9786083EL,253UL,0x14AAL}},{{2544,0xD7A1EBC9L,3,0x6246BDDA40BB9802LL,65535UL,0x188FL,5UL,0x9CC73FA7L,6UL,0x5DAEL}},{{20014,8L,7,1UL,0x3796L,-4L,0x88C446EDL,0x045812C5L,9UL,0xE483L}},{{1333,0L,0,0UL,65535UL,0xBD7EL,0x5E09DB5BL,0L,0x2DL,-9L}},{{20014,8L,7,1UL,0x3796L,-4L,0x88C446EDL,0x045812C5L,9UL,0xE483L}}},{{{2544,0xD7A1EBC9L,3,0x6246BDDA40BB9802LL,65535UL,0x188FL,5UL,0x9CC73FA7L,6UL,0x5DAEL}},{{12636,0L,1,0xEDC4901C99F48E8CLL,0xB87BL,0x2CBBL,0UL,0x9786083EL,253UL,0x14AAL}},{{15291,0x40514D0CL,5,0xB409F4FCCDD416DDLL,0x041BL,0x4B74L,0x7CF25E2EL,0L,0xCAL,0x3CD1L}},{{13604,2L,2,18446744073709551615UL,0x9712L,0x8E89L,0x66197A97L,0x6A314E8DL,246UL,-1L}},{{779,0xB4E0D6F0L,3,1UL,0xD556L,-1L,0UL,0x5B41805AL,1UL,-8L}},{{19485,0xE87DA6A6L,7,18446744073709551611UL,1UL,0x6FC7L,0x2C9011E9L,0xCA764965L,0x8AL,0x4066L}}},{{{2988,-1L,5,1UL,9UL,0x9A47L,6UL,0xFECB2317L,247UL,0x9F99L}},{{13517,0x52A38B0DL,2,1UL,1UL,0x8EA0L,0UL,-1L,255UL,0x11D5L}},{{15803,0xAC288FB3L,1,0x79D74A7D6E7BBDDALL,1UL,0L,9UL,0x468045C7L,5UL,9L}},{{20545,1L,7,0x65D847C295546736LL,0x5234L,0L,0UL,0x6D5E1E2EL,250UL,0x5FBFL}},{{15803,0xAC288FB3L,1,0x79D74A7D6E7BBDDALL,1UL,0L,9UL,0x468045C7L,5UL,9L}},{{13517,0x52A38B0DL,2,1UL,1UL,0x8EA0L,0UL,-1L,255UL,0x11D5L}}},{{{2988,-1L,5,1UL,9UL,0x9A47L,6UL,0xFECB2317L,247UL,0x9F99L}},{{19485,0xE87DA6A6L,7,18446744073709551611UL,1UL,0x6FC7L,0x2C9011E9L,0xCA764965L,0x8AL,0x4066L}},{{779,0xB4E0D6F0L,3,1UL,0xD556L,-1L,0UL,0x5B41805AL,1UL,-8L}},{{13604,2L,2,18446744073709551615UL,0x9712L,0x8E89L,0x66197A97L,0x6A314E8DL,246UL,-1L}},{{15291,0x40514D0CL,5,0xB409F4FCCDD416DDLL,0x041BL,0x4B74L,0x7CF25E2EL,0L,0xCAL,0x3CD1L}},{{12636,0L,1,0xEDC4901C99F48E8CLL,0xB87BL,0x2CBBL,0UL,0x9786083EL,253UL,0x14AAL}}},{{{2544,0xD7A1EBC9L,3,0x6246BDDA40BB9802LL,65535UL,0x188FL,5UL,0x9CC73FA7L,6UL,0x5DAEL}},{{20014,8L,7,1UL,0x3796L,-4L,0x88C446EDL,0x045812C5L,9UL,0xE483L}},{{1333,0L,0,0UL,65535UL,0xBD7EL,0x5E09DB5BL,0L,0x2DL,-9L}},{{20014,8L,7,1UL,0x3796L,-4L,0x88C446EDL,0x045812C5L,9UL,0xE483L}},{{2544,0xD7A1EBC9L,3,0x6246BDDA40BB9802LL,65535UL,0x188FL,5UL,0x9CC73FA7L,6UL,0x5DAEL}},{{12636,0L,1,0xEDC4901C99F48E8CLL,0xB87BL,0x2CBBL,0UL,0x9786083EL,253UL,0x14AAL}}},{{{15291,0x40514D0CL,5,0xB409F4FCCDD416DDLL,0x041BL,0x4B74L,0x7CF25E2EL,0L,0xCAL,0x3CD1L}},{{13604,2L,2,18446744073709551615UL,0x9712L,0x8E89L,0x66197A97L,0x6A314E8DL,246UL,-1L}},{{779,0xB4E0D6F0L,3,1UL,0xD556L,-1L,0UL,0x5B41805AL,1UL,-8L}},{{19485,0xE87DA6A6L,7,18446744073709551611UL,1UL,0x6FC7L,0x2C9011E9L,0xCA764965L,0x8AL,0x4066L}},{{2988,-1L,5,1UL,9UL,0x9A47L,6UL,0xFECB2317L,247UL,0x9F99L}},{{13517,0x52A38B0DL,2,1UL,1UL,0x8EA0L,0UL,-1L,255UL,0x11D5L}}},{{{15803,0xAC288FB3L,1,0x79D74A7D6E7BBDDALL,1UL,0L,9UL,0x468045C7L,5UL,9L}},{{20545,1L,7,0x65D847C295546736LL,0x5234L,0L,0UL,0x6D5E1E2EL,250UL,0x5FBFL}},{{15803,0xAC288FB3L,1,0x79D74A7D6E7BBDDALL,1UL,0L,9UL,0x468045C7L,5UL,9L}},{{13517,0x52A38B0DL,2,1UL,1UL,0x8EA0L,0UL,-1L,255UL,0x11D5L}},{{2988,-1L,5,1UL,9UL,0x9A47L,6UL,0xFECB2317L,247UL,0x9F99L}},{{19485,0xE87DA6A6L,7,18446744073709551611UL,1UL,0x6FC7L,0x2C9011E9L,0xCA764965L,0x8AL,0x4066L}}},{{{779,0xB4E0D6F0L,3,1UL,0xD556L,-1L,0UL,0x5B41805AL,1UL,-8L}},{{13604,2L,2,18446744073709551615UL,0x9712L,0x8E89L,0x66197A97L,0x6A314E8DL,246UL,-1L}},{{15291,0x40514D0CL,5,0xB409F4FCCDD416DDLL,0x041BL,0x4B74L,0x7CF25E2EL,0L,0xCAL,0x3CD1L}},{{12636,0L,1,0xEDC4901C99F48E8CLL,0xB87BL,0x2CBBL,0UL,0x9786083EL,253UL,0x14AAL}},{{2544,0xD7A1EBC9L,3,0x6246BDDA40BB9802LL,65535UL,0x188FL,5UL,0x9CC73FA7L,6UL,0x5DAEL}},{{20014,8L,7,1UL,0x3796L,-4L,0x88C446EDL,0x045812C5L,9UL,0xE483L}}},{{{1333,0L,0,0UL,65535UL,0xBD7EL,0x5E09DB5BL,0L,0x2DL,-9L}},{{20014,8L,7,1UL,0x3796L,-4L,0x88C446EDL,0x045812C5L,9UL,0xE483L}},{{2544,0xD7A1EBC9L,3,0x6246BDDA40BB9802LL,65535UL,0x188FL,5UL,0x9CC73FA7L,6UL,0x5DAEL}},{{12636,0L,1,0xEDC4901C99F48E8CLL,0xB87BL,0x2CBBL,0UL,0x9786083EL,253UL,0x14AAL}},{{15291,0x40514D0CL,5,0xB409F4FCCDD416DDLL,0x041BL,0x4B74L,0x7CF25E2EL,0L,0xCAL,0x3CD1L}},{{13604,2L,2,18446744073709551615UL,0x9712L,0x8E89L,0x66197A97L,0x6A314E8DL,246UL,-1L}}}};
    int32_t l_142 = 0x84E98FBDL;
    int32_t l_143 = 0L;
    struct S1 l_148 = {113,0,56,4,21169};
    int32_t *l_176 = (void*)0;
    int8_t *l_215 = &g_75;
    int16_t *l_347 = &l_133[1][4][0].f5;
    uint8_t l_354[5][7][6] = {{{252UL,0x82L,0xD1L,246UL,0x45L,1UL},{6UL,252UL,0xD1L,0x86L,0xC7L,246UL},{0xE1L,0x86L,1UL,0UL,0x17L,0xE1L},{0UL,0x17L,0xE1L,0x45L,246UL,0x43L},{0x83L,0xDEL,0xECL,1UL,0xE1L,1UL},{0xE1L,0xC7L,1UL,252UL,0x83L,0x43L},{246UL,0x71L,255UL,0x8CL,0x86L,250UL}},{{0xA8L,0x43L,0x0AL,0UL,0UL,0UL},{1UL,250UL,1UL,0UL,1UL,0xAAL},{0x38L,250UL,0x95L,0x17L,0x2AL,0xECL},{0x71L,246UL,255UL,0x17L,0x83L,0UL},{0x38L,0x8CL,0xE4L,0UL,252UL,246UL},{1UL,0x0AL,0xE1L,0UL,246UL,1UL},{0xA8L,0x59L,0UL,0x8CL,0UL,0xA8L}},{{246UL,1UL,0x95L,252UL,0x71L,252UL},{0xE1L,0x9DL,0x17L,1UL,248UL,0UL},{252UL,0x8CL,1UL,1UL,250UL,250UL},{0UL,0x71L,0x71L,0UL,252UL,0xD1L},{0xA8L,0x83L,5UL,0UL,1UL,0UL},{0x86L,0x45L,0x2AL,0xC7L,1UL,252UL},{0x0AL,0x83L,0x6EL,0x17L,252UL,0x95L}},{{1UL,0x71L,255UL,0x2AL,250UL,252UL},{5UL,0x8CL,0xE1L,1UL,248UL,0UL},{1UL,0x9DL,0xAAL,0UL,0x71L,1UL},{0xECL,1UL,0x8CL,255UL,0UL,0xECL},{0x8CL,0x59L,0x6EL,252UL,246UL,0xE1L},{252UL,0x0AL,0x17L,0x0AL,252UL,1UL},{0xAAL,0x8CL,0x0AL,0x43L,0x83L,0xD1L}},{{0UL,246UL,246UL,0x8CL,0x2AL,0xD1L},{0xECL,250UL,0x0AL,0x82L,1UL,1UL},{0x2AL,250UL,0x17L,0xC7L,0UL,0xE1L},{0x38L,0x43L,0x6EL,0x2AL,0x86L,0xECL},{246UL,0x71L,0x8CL,1UL,0x83L,1UL},{5UL,0xC7L,0xAAL,0UL,0xE1L,0UL},{0x86L,0x38L,0xE1L,0x82L,0x71L,252UL}}};
    uint8_t l_371[1][3];
    struct S0 **l_377 = (void*)0;
    uint32_t *l_388 = &g_107;
    int8_t l_409 = 1L;
    const uint32_t l_429 = 0xB47AB691L;
    uint8_t l_540 = 0x89L;
    union U2 l_552 = {0};
    uint16_t l_566[6][1][6] = {{{0xFA1AL,65533UL,2UL,65533UL,0xFA1AL,65533UL}},{{0xF2AAL,1UL,0xF2AAL,65533UL,0xF2AAL,1UL}},{{0xFA1AL,1UL,2UL,1UL,0xFA1AL,1UL}},{{0xF2AAL,65533UL,0xF2AAL,1UL,0xF2AAL,65533UL}},{{0xFA1AL,65533UL,2UL,65533UL,0xFA1AL,65533UL}},{{0xF2AAL,1UL,0xF2AAL,65533UL,0xF2AAL,1UL}}};
    const struct S0 * const * const *l_639 = (void*)0;
    int64_t *l_692 = (void*)0;
    const union U2 **l_904 = (void*)0;
    int64_t l_931 = 0x1DD13DEB4D7262B1LL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_371[i][j] = 0UL;
    }
    (*l_120) = g_48[0][5].f0;
    for (p_66.f9 = 0; (p_66.f9 <= 5); p_66.f9 += 1)
    {
        int32_t l_125 = 0x8185611DL;
        const uint32_t *l_151 = &g_107;
        int8_t *l_218 = &g_75;
        struct S0 *** const l_310 = (void*)0;
        int i;
    }
    if ((g_47[6][6].f2 > ((*l_388)--)))
    {
        uint8_t l_395 = 0x22L;
        int32_t **l_398 = &l_176;
        uint8_t *l_399[10][9][2] = {{{(void*)0,&l_395},{&l_395,&g_258[0]},{&g_182,&l_371[0][2]},{&l_395,&g_258[2]},{&l_371[0][2],&l_354[0][5][1]},{(void*)0,&l_354[2][3][4]},{&g_182,&l_371[0][2]},{&g_258[0],&l_395},{&l_395,&l_395}},{{&g_258[0],&l_371[0][2]},{&g_182,&l_354[2][3][4]},{(void*)0,&l_354[0][5][1]},{&l_371[0][2],&g_258[2]},{&l_395,&l_371[0][2]},{&g_182,&g_258[0]},{&l_395,&l_395},{(void*)0,&l_371[0][2]},{&g_258[1],&g_258[2]}},{{&l_395,(void*)0},{&g_258[2],&l_371[0][0]},{(void*)0,&l_395},{&g_258[2],&l_371[0][0]},{&l_354[2][3][4],&l_354[3][3][0]},{&l_371[0][2],&l_371[0][2]},{&g_258[0],(void*)0},{(void*)0,&g_182},{&l_395,&g_258[1]}},{{&l_371[0][2],&l_395},{&l_354[3][3][0],&g_182},{&l_354[3][3][0],&l_395},{&l_371[0][2],&g_258[1]},{&l_395,&g_182},{(void*)0,(void*)0},{&g_258[0],&l_371[0][2]},{&l_371[0][2],&l_354[3][3][0]},{&l_354[2][3][4],&l_371[0][0]}},{{&g_258[2],&l_395},{(void*)0,&l_371[0][0]},{&g_258[2],(void*)0},{&l_395,&g_258[2]},{&g_258[1],&l_371[0][2]},{(void*)0,&l_395},{&l_395,&g_258[0]},{&g_182,&l_371[0][2]},{&l_395,&g_258[2]}},{{&l_371[0][2],&l_354[0][5][1]},{(void*)0,&l_354[2][3][4]},{&g_182,&l_371[0][2]},{&g_258[0],&l_395},{&l_395,&l_395},{&g_258[0],&l_371[0][2]},{&g_182,&l_354[2][3][4]},{(void*)0,&l_354[0][5][1]},{&l_371[0][2],&g_258[2]}},{{&l_395,&l_371[0][2]},{&g_182,&g_258[0]},{&l_395,&l_395},{(void*)0,&l_371[0][2]},{&g_258[1],&g_258[2]},{&l_395,(void*)0},{&g_258[2],&l_371[0][0]},{(void*)0,&l_395},{&g_258[2],&l_371[0][0]}},{{&l_354[2][3][4],&l_354[3][3][0]},{&l_371[0][2],&l_371[0][2]},{&g_258[0],(void*)0},{(void*)0,&g_182},{&l_395,&g_258[1]},{&l_371[0][2],&l_395},{&l_354[3][3][0],&g_182},{&l_354[3][3][0],&l_395},{&l_371[0][2],&g_258[1]}},{{&l_395,&g_182},{(void*)0,(void*)0},{&g_258[0],&l_371[0][2]},{&l_371[0][2],&l_354[3][3][0]},{&l_354[2][3][4],&l_371[0][0]},{&g_258[2],&l_395},{(void*)0,&l_371[0][0]},{&g_258[2],(void*)0},{&l_395,&g_258[2]}},{{&g_258[1],&l_395},{&l_395,&g_258[0]},{(void*)0,&l_371[0][2]},{&l_395,&l_371[0][2]},{&l_395,&l_371[0][2]},{&l_395,&g_258[2]},{&g_258[0],&l_371[0][2]},{&g_258[2],(void*)0},{(void*)0,&g_258[0]}}};
        int32_t l_400 = 1L;
        uint16_t *l_410 = &g_361[2][2][8];
        struct S0 * const *l_411 = (void*)0;
        uint32_t *l_412 = (void*)0;
        uint64_t *l_413 = (void*)0;
        uint64_t *l_414 = &g_285[7][1][1];
        int32_t l_415 = 0x5F415CF0L;
        int i, j, k;
        l_415 |= (((safe_lshift_func_uint8_t_u_s((l_400 |= (p_65.f2 > ((safe_rshift_func_uint16_t_u_u((g_138 & l_395), 8)) <= ((g_396 != l_398) , 65527UL)))), (safe_mul_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u(((*l_414) = ((safe_sub_func_uint8_t_u_u((((p_66.f6 = ((((g_407 , (p_65.f1 & (((((*l_410) = ((g_408[5][2] , l_409) && (*l_120))) | p_64.f0) , g_258[3]) , p_66.f0))) || 0UL) , (void*)0) == l_411)) , g_407.f2) == l_395), (*g_8))) != p_66.f7)), p_62)) || 5UL) >= 0xFFL), p_65.f2)))) , (void*)0) != &g_107);
    }
    else
    {
        int32_t *l_416 = &g_257;
        struct S0 *l_419 = &g_47[6][6];
        uint64_t *l_428[2];
        int64_t *l_430 = &g_283;
        uint32_t *l_442 = (void*)0;
        int16_t l_456[6][8][5] = {{{(-10L),0xF90BL,(-10L),0x5B39L,0xF90BL},{0x1E24L,0L,1L,0x1E24L,1L},{0x0EB8L,0x0EB8L,0L,0xF90BL,(-1L)},{1L,(-5L),1L,1L,(-5L)},{(-1L),0L,(-10L),(-1L),0x5B39L},{0xCEE9L,(-5L),0x57C5L,(-5L),0xCEE9L},{(-10L),0x0EB8L,0L,0x5B39L,0x0EB8L},{0xCEE9L,0L,0L,0xCEE9L,1L}},{{(-1L),0xF90BL,0L,0x0EB8L,0x0EB8L},{1L,0xCEE9L,1L,1L,0xCEE9L},{0x0EB8L,0L,0x5B39L,0x0EB8L,0x5B39L},{0x1E24L,0x1E24L,0x57C5L,0xCEE9L,(-5L)},{(-10L),(-1L),0x5B39L,0x5B39L,(-1L)},{(-5L),0L,1L,(-5L),1L},{0xF90BL,(-1L),0L,(-1L),0xF90BL},{1L,0x1E24L,0L,1L,0x1E24L}},{{0xF90BL,0L,0L,0xF90BL,0x5B39L},{(-5L),0xCEE9L,0x57C5L,0x1E24L,0x1E24L},{(-10L),0xF90BL,(-10L),0x5B39L,0xF90BL},{0x1E24L,0L,1L,0x1E24L,1L},{0x0EB8L,0x0EB8L,0L,0xF90BL,(-1L)},{1L,(-5L),1L,1L,(-5L)},{(-1L),0L,(-10L),(-1L),0x5B39L},{0xCEE9L,(-5L),0x57C5L,(-5L),0xCEE9L}},{{(-10L),0x0EB8L,0L,0x5B39L,0x0EB8L},{0xCEE9L,0L,0L,0xCEE9L,1L},{(-1L),0xF90BL,0L,0x0EB8L,0x0EB8L},{1L,0xCEE9L,1L,1L,0xCEE9L},{0x0EB8L,0L,0x5B39L,0x0EB8L,0x5B39L},{0x1E24L,0x1E24L,0x57C5L,0xCEE9L,(-5L)},{(-10L),(-1L),0x5B39L,0x5B39L,(-1L)},{(-5L),0L,1L,(-5L),1L}},{{0xF90BL,(-1L),0L,(-1L),0xF90BL},{1L,0x1E24L,0L,1L,0x1E24L},{0xF90BL,0L,0L,0xF90BL,0x52A1L},{1L,0L,0x1E24L,1L,1L},{0xC5C2L,0L,0xC5C2L,0x52A1L,0L},{1L,0x57C5L,0x37D9L,1L,0x37D9L},{(-10L),(-10L),0x0EB8L,0L,0x5B39L},{0x511FL,1L,0x37D9L,0x37D9L,1L}},{{0x5B39L,0L,0xC5C2L,0x5B39L,0x52A1L},{0L,1L,0x1E24L,1L,0L},{0xC5C2L,(-10L),0L,0x52A1L,(-10L)},{0L,0x57C5L,0x57C5L,0L,0x37D9L},{0x5B39L,0L,0x0EB8L,(-10L),(-10L)},{0x511FL,0L,0x511FL,0x37D9L,0L},{(-10L),0L,0x52A1L,(-10L),0x52A1L},{1L,1L,0x1E24L,0L,1L}}};
        union U2 **l_523 = (void*)0;
        int32_t l_534 = 3L;
        int32_t l_537 = 0x185C484AL;
        uint8_t *l_634 = &g_258[0];
        int64_t l_658 = 0x50425570613DEB37LL;
        uint8_t *l_696 = &l_354[4][5][5];
        int8_t * const *l_729 = &l_215;
        int32_t l_762 = (-1L);
        int32_t l_763 = 0x97AF7846L;
        int32_t l_764 = (-4L);
        uint16_t l_765 = 65532UL;
        int16_t * const *l_790[10][7][2] = {{{&l_347,(void*)0},{&g_345,&g_345},{&g_345,&l_347},{&l_347,&l_347},{&g_345,&g_345},{&g_345,(void*)0},{&l_347,&g_345}},{{&l_347,&l_347},{(void*)0,&l_347},{&l_347,&g_345},{&l_347,&g_345},{&l_347,&l_347},{&l_347,&g_345},{&l_347,&g_345}},{{&l_347,&l_347},{&l_347,&l_347},{&g_345,&l_347},{&g_345,&l_347},{&l_347,&l_347},{&l_347,&g_345},{&l_347,&g_345}},{{&l_347,&l_347},{&l_347,&g_345},{&l_347,&g_345},{&l_347,&l_347},{(void*)0,&l_347},{&l_347,&g_345},{&l_347,(void*)0}},{{&g_345,&g_345},{&g_345,&l_347},{&l_347,&l_347},{&g_345,&g_345},{&g_345,(void*)0},{&l_347,&g_345},{&l_347,&l_347}},{{(void*)0,&l_347},{&l_347,&g_345},{&l_347,&g_345},{&l_347,&l_347},{&l_347,&g_345},{&l_347,&g_345},{&l_347,&l_347}},{{&l_347,&l_347},{&g_345,&l_347},{&g_345,&l_347},{&l_347,&l_347},{&l_347,&g_345},{&l_347,&g_345},{&l_347,&l_347}},{{&l_347,&g_345},{&l_347,&g_345},{&l_347,&l_347},{(void*)0,&l_347},{&l_347,&g_345},{&l_347,(void*)0},{&g_345,&g_345}},{{&g_345,&l_347},{&l_347,&l_347},{&g_345,&g_345},{&g_345,(void*)0},{&l_347,&g_345},{&l_347,&l_347},{(void*)0,&l_347}},{{&g_345,&g_345},{&l_347,&g_345},{&l_347,&l_347},{&g_345,&l_347},{&l_347,&g_345},{&g_345,&g_345},{&g_345,&g_345}}};
        struct S1 *l_824 = &g_407;
        union U2 l_898[1][2][10] = {{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}}};
        const struct S0 ***l_911[4][1];
        const struct S0 ****l_910[5];
        const union U2 ***l_938 = &l_904;
        const union U2 ****l_937 = &l_938;
        const union U2 ****l_939 = (void*)0;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_428[i] = &g_285[7][0][1];
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_911[i][j] = (void*)0;
        }
        for (i = 0; i < 5; i++)
            l_910[i] = &l_911[2][0];
lbl_890:
        (*l_416) ^= (**g_396);
        (**g_396) = (*l_120);
        if (((safe_rshift_func_uint8_t_u_u(((l_419 != (void*)0) ^ (8UL > ((g_361[2][1][5] ^ (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(p_65.f0, (((g_424 > (safe_lshift_func_uint16_t_u_u((((*l_430) = (safe_unary_minus_func_uint32_t_u(((((g_285[1][2][0] = p_62) || (g_9 , ((*g_8) > p_65.f3))) & l_429) && 0xEEL)))) != 18446744073709551615UL), 8))) ^ 247UL) , g_47[6][6].f2))), (*g_8)))) < p_64.f4))), 2)) | (*l_416)))
        {
            struct S0 *l_431 = &l_133[1][4][0];
            struct S0 *l_432 = (void*)0;
            int32_t l_437 = 9L;
            uint16_t l_448[3];
            struct S0 *l_451 = (void*)0;
            union U2 *l_455 = &g_408[5][1];
            int16_t *l_470 = &g_47[6][6].f9;
            const struct S0 *l_487 = &l_133[1][4][0];
            const struct S0 **l_486 = &l_487;
            const struct S0 ***l_485 = &l_486;
            const struct S0 ****l_484[2];
            const struct S0 *****l_483[6];
            int32_t l_498[4][9] = {{9L,0x0B9631EBL,9L,0x0B9631EBL,9L,0x0B9631EBL,9L,0x0B9631EBL,9L},{0xC7B75965L,5L,5L,0xC7B75965L,0xC7B75965L,5L,5L,0xC7B75965L,0xC7B75965L},{(-1L),0x0B9631EBL,(-1L),0x0B9631EBL,(-1L),0x0B9631EBL,(-1L),0x0B9631EBL,(-1L)},{0xC7B75965L,0xC7B75965L,5L,5L,0xC7B75965L,0xC7B75965L,5L,5L,0xC7B75965L}};
            const uint64_t l_527 = 1UL;
            int32_t l_539 = 0x7C94A8C7L;
            int8_t l_556[8];
            int8_t l_557 = 0L;
            uint16_t l_571 = 5UL;
            int32_t l_616[9] = {0x3900AF0EL,0x13390B23L,0x3900AF0EL,0x13390B23L,0x3900AF0EL,0x13390B23L,0x3900AF0EL,0x13390B23L,0x3900AF0EL};
            uint8_t *l_633 = &l_371[0][1];
            uint64_t *l_709 = &g_285[1][1][2];
            int64_t *l_753 = &l_658;
            uint32_t *l_754 = &l_552.f2;
            int32_t *l_755 = &l_616[8];
            int i, j;
            for (i = 0; i < 3; i++)
                l_448[i] = 0UL;
            for (i = 0; i < 2; i++)
                l_484[i] = &l_485;
            for (i = 0; i < 6; i++)
                l_483[i] = &l_484[1];
            for (i = 0; i < 8; i++)
                l_556[i] = 0x39L;
            for (g_190 = 4; (g_190 >= 0); g_190 -= 1)
            {
                return l_432;
            }
            if (((safe_mul_func_uint16_t_u_u((7UL != (*g_8)), g_407.f4)) || 65533UL))
            {
                struct S0 ****l_443 = &g_321[0][2][6];
                int32_t l_445 = (-1L);
                struct S0 *****l_488 = &g_320;
                int8_t **l_493 = &l_215;
                uint32_t l_506 = 0xB96ADC7FL;
                union U2 **l_524 = &l_455;
                int32_t l_538 = 0x7620C6CBL;
                for (p_66.f5 = 1; (p_66.f5 >= 0); p_66.f5 -= 1)
                {
                    uint8_t *l_440 = &g_182;
                    int32_t l_441 = 0x1EE3A12CL;
                    struct S0 *****l_444[8][9][3] = {{{&l_443,&l_443,&l_443},{(void*)0,(void*)0,&l_443},{&g_320,&g_320,&l_443},{(void*)0,&g_320,&l_443},{&g_320,&g_320,&l_443},{&g_320,&l_443,&l_443},{&l_443,&g_320,&l_443},{&l_443,(void*)0,&l_443},{&g_320,&g_320,&l_443}},{{&g_320,&g_320,&l_443},{&g_320,&l_443,&l_443},{&l_443,&l_443,&l_443},{&l_443,&l_443,&l_443},{(void*)0,(void*)0,&l_443},{&g_320,&g_320,&l_443},{(void*)0,&g_320,&l_443},{&g_320,&g_320,&l_443},{&g_320,&l_443,&l_443}},{{&l_443,&g_320,&l_443},{&l_443,(void*)0,&l_443},{&g_320,&g_320,&l_443},{&g_320,&g_320,&l_443},{&g_320,&l_443,&l_443},{&l_443,&l_443,&l_443},{&l_443,&l_443,&l_443},{(void*)0,(void*)0,&l_443},{&g_320,&g_320,&l_443}},{{(void*)0,&g_320,&l_443},{&g_320,&g_320,&l_443},{&g_320,&l_443,&l_443},{&l_443,&g_320,&l_443},{&l_443,(void*)0,&l_443},{&g_320,&g_320,&l_443},{&g_320,&g_320,&l_443},{&g_320,&l_443,&l_443},{&l_443,&l_443,&l_443}},{{&l_443,&l_443,&g_320},{(void*)0,&g_320,&g_320},{(void*)0,(void*)0,&g_320},{&l_443,(void*)0,&l_443},{&g_320,&g_320,&g_320},{(void*)0,(void*)0,&g_320},{(void*)0,&g_320,&g_320},{&l_443,&g_320,&l_443},{(void*)0,&l_443,&g_320}},{{&l_443,(void*)0,&g_320},{&g_320,(void*)0,&g_320},{&l_443,(void*)0,&l_443},{(void*)0,&l_443,&g_320},{(void*)0,&g_320,&g_320},{(void*)0,(void*)0,&g_320},{&l_443,(void*)0,&l_443},{&g_320,&g_320,&g_320},{(void*)0,(void*)0,&g_320}},{{(void*)0,&g_320,&g_320},{&l_443,&g_320,&l_443},{(void*)0,&l_443,&g_320},{&l_443,(void*)0,&g_320},{&g_320,(void*)0,&g_320},{&l_443,(void*)0,&l_443},{(void*)0,&l_443,&g_320},{(void*)0,&g_320,&g_320},{(void*)0,(void*)0,&g_320}},{{&l_443,(void*)0,&l_443},{&g_320,&g_320,&g_320},{(void*)0,(void*)0,&g_320},{(void*)0,&g_320,&g_320},{&l_443,&g_320,&l_443},{(void*)0,&l_443,&g_320},{&l_443,(void*)0,&g_320},{&g_320,(void*)0,&g_320},{&l_443,(void*)0,&l_443}}};
                    int32_t l_447 = 1L;
                    union U2 *l_454 = &g_408[5][2];
                    int32_t l_459 = 0xEBB0B0BEL;
                    int16_t *l_468 = &l_456[1][1][3];
                    uint32_t *l_473 = &g_107;
                    int i, j, k;
                    if (p_64.f3)
                        break;
                    if (p_64.f3)
                        goto lbl_499;
                    if ((safe_mul_func_int8_t_s_s((((g_304 |= l_437) < ((safe_lshift_func_uint8_t_u_u(((*l_440) = p_64.f8), 5)) <= p_64.f1)) , (0x1F62B22ACE610382LL & (l_441 <= ((((((*l_416) = ((p_62 = (g_397 != l_442)) , ((g_320 = l_443) == (void*)0))) , l_441) ^ l_441) != 9UL) < p_64.f9)))), l_445)))
                    {
                        int32_t *l_446[6][7][6] = {{{&l_441,&l_441,(void*)0,&g_79,&l_142,&l_437},{&l_441,&l_143,&l_143,&g_257,&l_441,&g_79},{&g_79,&l_445,&g_79,(void*)0,(void*)0,&l_441},{&l_441,&l_437,(void*)0,&g_257,&l_441,&l_143},{&l_142,&g_257,(void*)0,&l_441,&l_445,&g_79},{&l_441,&g_257,&l_437,&g_79,&l_441,&l_445},{(void*)0,&l_437,&l_143,(void*)0,(void*)0,&l_143}},{{&l_445,&l_445,&l_143,&g_257,&l_441,&g_79},{&l_441,&l_143,(void*)0,&l_142,&l_142,&l_143},{&l_142,&l_441,(void*)0,(void*)0,&l_445,&g_79},{&l_445,(void*)0,&l_143,&g_79,&l_445,&l_143},{&g_79,&l_445,&l_143,&l_441,(void*)0,&l_445},{&g_257,&l_445,&l_437,&l_143,&l_441,&g_79},{&l_441,&l_142,(void*)0,&l_143,&l_143,&l_143}},{{&g_257,&l_445,&l_143,&g_257,&l_143,&l_441},{&l_142,(void*)0,&g_79,&l_142,&l_445,&g_257},{(void*)0,(void*)0,&l_142,&l_441,(void*)0,&g_257},{&l_441,&l_143,&l_445,&g_79,(void*)0,&l_441},{&g_257,(void*)0,&l_142,&l_142,&l_445,&l_441},{&l_143,(void*)0,&l_445,(void*)0,&l_143,(void*)0},{&l_445,&l_445,&l_441,&l_142,&g_257,(void*)0}},{{&l_142,&l_441,&l_142,&l_445,&g_257,(void*)0},{&g_257,&l_143,&l_441,&l_142,&l_441,(void*)0},{&g_257,&g_257,&l_445,&g_79,&g_257,&l_441},{&g_79,&l_441,&l_142,(void*)0,&l_143,&l_441},{&g_257,&g_257,&l_445,&l_142,&l_441,&g_257},{&g_257,&g_257,&l_142,(void*)0,&l_445,&g_257},{&g_79,&l_143,&g_79,&g_79,(void*)0,&l_441}},{{&g_257,&l_445,&l_143,&l_142,(void*)0,&l_441},{&g_257,(void*)0,&l_437,&l_445,&l_143,&g_257},{&l_142,(void*)0,(void*)0,&l_142,(void*)0,&l_143},{&l_445,&l_445,&l_142,(void*)0,(void*)0,&l_142},{&l_143,&l_143,&l_441,&l_142,&l_445,(void*)0},{&g_257,&g_257,&l_441,&g_79,&l_441,&l_441},{&l_441,&g_257,&l_441,&l_441,&l_143,(void*)0}},{{(void*)0,&l_441,&l_441,&l_142,&g_257,&l_142},{&l_142,&g_257,&l_142,&g_257,&l_441,&l_143},{&l_445,&l_143,(void*)0,&l_143,&g_257,&g_257},{&g_257,&l_441,&l_437,&l_143,&g_257,&l_441},{&l_445,&l_445,&l_143,&g_257,&l_143,&l_441},{&l_142,(void*)0,&g_79,&l_142,&l_445,&g_257},{(void*)0,(void*)0,&l_142,&l_441,(void*)0,&g_257}}};
                        int i, j, k;
                        ++l_448[1];
                    }
                    else
                    {
                        return l_451;
                    }
                    for (p_64.f4 = 0; (p_64.f4 <= 1); p_64.f4 += 1)
                    {
                        (*g_396) = &l_441;
                        return (*g_72);
                    }
                    for (g_257 = 0; (g_257 <= 1); g_257 += 1)
                    {
                        union U2 *l_453 = &g_408[5][0];
                        union U2 **l_452[1];
                        int16_t *l_467 = &g_47[6][6].f5;
                        int16_t **l_469[10][8][3] = {{{&l_468,&l_468,&l_467},{&l_468,&l_467,&l_467},{&l_467,&g_345,&l_468},{&l_468,&l_468,&l_468},{&l_468,&l_467,&l_468},{&g_345,&l_467,&l_467},{&l_467,&l_467,&l_467},{&l_467,&l_468,(void*)0}},{{&l_468,&l_468,&l_468},{&l_467,&l_347,&l_468},{&l_467,&l_467,&l_467},{(void*)0,&l_347,&l_468},{&l_467,&l_468,&g_345},{(void*)0,&l_467,(void*)0},{&l_467,&l_467,&g_345},{&l_467,&l_467,&l_468}},{{&l_468,&l_467,&l_467},{&l_468,&l_467,&l_468},{&l_468,&l_468,&l_468},{&l_467,&l_347,&l_468},{&l_467,&l_467,&l_467},{(void*)0,&l_347,&l_468},{&l_467,&l_468,&g_345},{(void*)0,&l_467,(void*)0}},{{&l_467,&l_467,&g_345},{&l_467,&l_467,&l_468},{&l_468,&l_467,&l_467},{&l_468,&l_467,&l_468},{&l_468,&l_468,&l_468},{&l_467,&l_347,&l_468},{&l_467,&l_467,&l_467},{(void*)0,&l_347,&l_468}},{{&l_467,&l_468,&g_345},{(void*)0,&l_467,(void*)0},{&l_467,&l_467,&g_345},{&l_467,&l_467,&l_468},{&l_468,&l_467,&l_467},{&l_468,&l_467,&l_468},{&l_468,&l_468,&l_468},{&l_467,&l_347,&l_468}},{{&l_467,&l_467,&l_467},{(void*)0,&l_347,&l_468},{&l_467,&l_468,&g_345},{(void*)0,&l_467,(void*)0},{&l_467,&l_467,&g_345},{&l_467,&l_467,&l_468},{&l_468,&l_467,&l_467},{&l_468,&l_467,&l_468}},{{&l_468,&l_468,&l_468},{&l_467,&l_347,&l_468},{&l_467,&l_467,&l_467},{(void*)0,&l_347,&l_468},{&l_467,&l_468,&g_345},{(void*)0,&l_467,(void*)0},{&l_467,&l_467,&g_345},{&l_467,&l_467,&l_468}},{{&l_468,&l_467,&l_467},{&l_468,&l_467,&l_468},{&l_468,&l_468,&l_468},{&l_467,&l_347,&l_468},{&l_467,&l_467,&l_467},{(void*)0,&l_347,&l_468},{&l_467,&l_468,&g_345},{(void*)0,&l_467,(void*)0}},{{&l_467,&l_467,&g_345},{&l_467,&l_467,&l_468},{&l_468,&l_467,&l_467},{&l_468,&l_467,&l_468},{&l_468,&l_468,&l_468},{&l_467,&l_347,&l_468},{&l_467,&l_467,&l_467},{(void*)0,&l_468,(void*)0}},{{&l_468,&l_467,&l_468},{&l_468,&l_467,&l_468},{&l_467,&l_468,&l_468},{&l_468,&l_347,(void*)0},{&g_345,&l_468,&l_468},{(void*)0,&l_467,&g_345},{&g_345,&l_467,&g_345},{&l_468,&l_468,&g_345}}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_452[i] = &l_453;
                        (*g_396) = (*g_396);
                        l_455 = (l_454 = &g_408[5][2]);
                        l_447 ^= ((((l_456[1][1][3] != (safe_add_func_int16_t_s_s((*l_416), (((*g_8) >= l_459) > (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(p_65.f2, 8)), ((*l_430) ^= (safe_add_func_int32_t_s_s((-1L), ((~(l_467 != (l_470 = l_468))) != (safe_div_func_uint32_t_u_u((l_473 != &l_429), (-5L))))))))))))) && (*g_345)) | (*g_397)) || p_66.f3);
                        return l_451;
                    }
                }
lbl_499:
                (*l_120) = ((g_283 != (p_62 = (safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((~((l_483[5] == (l_488 = &g_320)) >= (((l_443 != (void*)0) >= (((safe_sub_func_uint64_t_u_u(((void*)0 == l_493), (safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_66.f0, (*g_8))), 1)))) == p_65.f3) != p_64.f3)) , p_66.f0))), l_445)), p_65.f2)), l_498[3][8])), g_144)))) <= l_445);
                for (g_282 = 0; (g_282 <= 3); g_282 += 1)
                {
                    uint16_t l_528 = 65530UL;
                    int32_t l_535 = 1L;
                    for (p_66.f1 = 1; (p_66.f1 <= 5); p_66.f1 += 1)
                    {
                        uint16_t *l_525 = (void*)0;
                        uint16_t *l_526 = &g_361[1][0][1];
                        int i, j;
                        (*l_120) = (safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(l_498[g_282][(p_66.f1 + 2)], (p_64.f2 || p_66.f2))), ((l_445 ^= ((((**g_72) , (*l_120)) == (safe_mul_func_int8_t_s_s(l_506, (safe_unary_minus_func_uint16_t_u(p_65.f2))))) == ((safe_add_func_int64_t_s_s(((*l_430) ^= 0x505825EE8E99F49ALL), (safe_div_func_int64_t_s_s((*l_416), p_64.f4)))) & (*l_120)))) , g_407.f3)));
                        (*l_416) = ((*g_397) &= (safe_unary_minus_func_int64_t_s((safe_sub_func_uint16_t_u_u((((((((*l_430) = ((safe_sub_func_int32_t_s_s(p_66.f8, (-8L))) , (-10L))) != ((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((0xB10A9F40F52A489ALL <= ((((*l_388) ^= ((l_523 = g_521[1]) != l_524)) || (((((*l_526) = 0xEBE3L) > p_64.f4) == g_107) || p_66.f9)) && 0L)), g_9)), 252UL)) ^ l_527)) ^ l_498[g_282][(p_66.f1 + 2)]) , 6L) & (*l_416)) | l_528), (-1L))))));
                    }
                    for (g_283 = 0; (g_283 <= 3); g_283 += 1)
                    {
                        int32_t *l_530 = &g_79;
                        int32_t *l_531 = &l_143;
                        int32_t *l_532 = &g_257;
                        int32_t *l_533[5][7] = {{&l_143,&l_143,&l_437,&l_143,&l_143,&l_437,&l_143},{(void*)0,&l_445,&l_445,(void*)0,&l_445,&l_445,(void*)0},{&g_257,&l_143,&g_257,&g_257,&l_143,&g_257,&g_257},{(void*)0,(void*)0,&l_445,(void*)0,(void*)0,&l_445,(void*)0},{&l_143,&g_257,&g_257,&l_143,&g_257,&g_257,&l_143}};
                        int8_t l_536 = 0x8AL;
                        int i, j;
                        (*l_416) ^= ((**g_396) = (0xCFL != (((~l_498[g_283][g_283]) , l_133[1][4][0]) , (p_64 , p_65.f3))));
                        ++l_540;
                        (*g_396) = &l_534;
                    }
                }
            }
            else
            {
                uint64_t l_547 = 0x33B9F0CF28671C15LL;
                uint32_t *l_555[9] = {(void*)0,&g_47[6][6].f6,(void*)0,&g_47[6][6].f6,(void*)0,&g_47[6][6].f6,(void*)0,&g_47[6][6].f6,(void*)0};
                int32_t l_617 = 0x9279E647L;
                struct S1 l_663[5] = {{-292,14,72,2,30208},{-292,14,72,2,30208},{-292,14,72,2,30208},{-292,14,72,2,30208},{-292,14,72,2,30208}};
                int64_t l_678 = 0xF5E5DF50837B7E26LL;
                uint8_t **l_695 = &l_634;
                int64_t l_701 = (-1L);
                uint16_t *l_710[7][4][9] = {{{&l_566[4][0][1],&l_566[4][0][1],(void*)0,(void*)0,&l_566[4][0][1],&l_566[4][0][1],&g_47[6][6].f4,&g_361[1][0][1],&l_121[3]},{&g_361[1][0][1],&l_448[1],&l_571,&l_566[4][0][1],(void*)0,&l_566[4][0][1],&l_448[2],&l_566[0][0][5],&l_448[1]},{&l_448[0],(void*)0,(void*)0,&l_571,&l_566[4][0][4],&l_448[2],&g_47[6][6].f4,&l_448[0],&l_566[0][0][5]},{&g_47[6][6].f4,&l_566[0][0][5],&l_133[1][4][0].f4,&l_448[1],&l_448[1],&l_448[1],&l_448[1],&l_133[1][4][0].f4,&l_566[0][0][5]}},{{(void*)0,&l_448[0],&l_448[1],&l_121[3],&l_566[4][0][1],&g_361[1][0][1],&g_361[1][0][1],&l_571,&l_448[1]},{&l_448[2],&l_566[4][0][4],&g_47[6][6].f4,&l_448[1],&l_571,&g_361[1][0][1],&g_361[1][0][1],&l_566[4][0][1],&l_121[3]},{&l_566[4][0][1],&l_448[0],&g_47[6][6].f4,&l_566[0][0][5],&l_133[1][4][0].f4,&l_448[1],&l_448[1],&l_448[1],&l_448[1]},{&l_448[0],&l_566[0][0][5],&l_566[4][0][1],&l_566[0][0][5],&l_448[0],&g_47[6][6].f4,&l_448[2],&l_566[4][0][4],&l_571}},{{&l_121[3],(void*)0,&l_566[4][0][1],&l_448[1],&l_566[0][0][5],&l_448[2],&l_566[4][0][1],(void*)0,&l_566[4][0][1]},{&l_566[4][0][1],&l_448[1],&l_448[1],&l_121[3],&g_361[1][0][1],&g_47[6][6].f4,&l_566[4][0][1],&l_566[4][0][1],(void*)0},{&g_47[6][6].f4,&l_566[4][0][1],&l_566[4][0][4],&l_448[1],&l_566[0][0][4],&l_448[1],&l_566[4][0][4],&l_566[4][0][1],&g_47[6][6].f4},{&l_121[2],&l_133[1][4][0].f4,&l_566[4][0][1],&l_571,&l_566[3][0][5],&g_361[1][0][1],&l_448[0],(void*)0,&l_566[4][0][1]}},{{&l_566[4][0][1],&l_566[4][0][1],&g_361[1][0][1],&l_566[4][0][1],&l_121[2],&g_361[1][0][1],(void*)0,&l_566[4][0][4],&g_361[1][0][1]},{&l_448[1],&l_448[1],(void*)0,&l_133[1][4][0].f4,&l_566[0][0][4],(void*)0,&g_361[1][0][1],(void*)0,&l_566[0][0][4]},{&l_448[0],(void*)0,(void*)0,&l_448[0],&l_448[1],&l_571,&l_448[1],&l_566[0][0][5],&l_566[3][0][5]},{&l_571,&g_361[1][0][1],&l_566[0][0][4],&l_566[0][0][5],&l_571,&l_571,&l_448[2],&l_566[4][0][1],&l_121[2]}},{{&l_566[4][0][4],&l_566[4][0][1],(void*)0,&g_361[1][0][1],&l_448[1],&l_566[0][0][5],&l_121[3],&l_121[2],&g_361[1][0][1]},{(void*)0,&l_121[3],&g_361[1][0][1],&l_566[0][0][4],&l_566[0][0][4],&g_361[1][0][1],&l_121[3],(void*)0,&l_566[4][0][1]},{&l_571,&l_566[0][0][5],&g_47[6][6].f4,&l_566[3][0][5],&l_448[1],(void*)0,&l_448[2],&l_566[4][0][1],&l_448[2]},{&l_566[3][0][5],&l_566[4][0][4],&l_448[1],&l_121[2],&l_448[1],&l_566[4][0][1],&l_448[1],&l_448[2],&l_566[4][0][1]}},{{&l_448[2],&g_47[6][6].f4,&l_571,&g_361[1][0][1],&l_448[0],&g_361[1][0][1],&g_361[1][0][1],&l_448[0],&g_361[1][0][1]},{&l_566[4][0][1],&g_47[6][6].f4,&l_566[4][0][1],&l_566[4][0][1],&l_448[2],&l_448[1],&l_566[4][0][1],&l_448[1],&l_121[2]},{&g_361[1][0][1],&l_566[4][0][4],&l_448[0],&l_448[2],&l_566[4][0][1],&l_448[2],(void*)0,&l_448[1],&l_566[3][0][5]},{&l_448[2],&l_566[0][0][5],&l_448[1],&l_566[4][0][1],(void*)0,&l_121[3],&g_361[1][0][1],&l_566[0][0][4],&l_566[0][0][4]}},{{&l_566[0][0][5],&l_121[3],&l_121[2],&g_361[1][0][1],&l_121[2],&l_121[3],&l_566[0][0][5],&l_448[1],&g_361[1][0][1]},{&g_47[6][6].f4,&l_566[4][0][1],&l_448[2],&l_121[2],&l_566[4][0][1],&l_448[2],&l_571,&l_571,&l_566[0][0][5]},{&l_566[4][0][1],&g_361[1][0][1],&l_121[3],&l_566[3][0][5],&l_566[0][0][5],&l_448[1],&l_571,&l_448[1],&l_448[0]},{&l_448[1],(void*)0,&l_133[1][4][0].f4,&l_566[0][0][4],(void*)0,&g_361[1][0][1],(void*)0,&l_566[0][0][4],&l_133[1][4][0].f4}}};
                uint32_t *l_711 = &g_107;
                int i, j, k;
                (*g_397) = ((&g_304 != &p_62) , (((safe_mod_func_int64_t_s_s(g_47[6][6].f4, (p_62 = g_47[6][6].f5))) != ((*l_416) = ((*l_347) = (safe_mul_func_int16_t_s_s(((*g_345) = (l_547 , ((1UL && (((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((l_552 , (((g_182 ^= (((safe_add_func_int64_t_s_s(((l_120 != l_555[6]) < p_66.f4), 0x26405D54714FA0E7LL)) , &g_304) != &g_285[6][0][2])) != 0x60L) != p_66.f0)), l_547)), l_556[4])) != 0xADF27569L) >= p_64.f5)) ^ p_65.f2))), l_556[4]))))) <= l_557));
                for (g_107 = 0; (g_107 <= 1); g_107 += 1)
                {
                    uint64_t l_560 = 18446744073709551613UL;
                    uint32_t **l_561 = &l_388;
                    union U2 l_587[7][4][6] = {{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}}};
                    uint32_t *l_592[5];
                    int64_t l_593 = 0L;
                    int8_t **l_601 = &l_215;
                    int32_t l_602 = 1L;
                    uint8_t l_606 = 0UL;
                    struct S0 ***l_612 = (void*)0;
                    struct S0 **l_613 = &l_419;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_592[i] = (void*)0;
                    (*g_396) = (((safe_mod_func_uint32_t_u_u((((l_560 || (*l_416)) , (0x8B1910724C6E1C4FLL <= 18446744073709551607UL)) ^ ((0xB8A790E6CE5293A0LL && (0xBB4A44CFE688B36ALL == (l_539 ^= ((((*l_561) = l_555[5]) == ((safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((l_566[4][0][1] ^ ((*l_470) = ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((g_257 == 0x8315L) && l_560), 0x2375L)), g_47[6][6].f0)) || g_47[6][6].f0))), p_65.f0)) , (-6L)), l_571)) , (void*)0)) == (*l_416))))) != 0x3BAEL)), p_64.f7)) >= g_47[6][6].f2) , &l_437);
                    if ((*g_397))
                        continue;
                    (*l_120) = ((((safe_mod_func_int64_t_s_s((safe_unary_minus_func_int32_t_s((safe_mod_func_uint32_t_u_u((g_47[6][6].f2 = (safe_add_func_int32_t_s_s((&p_66 != (void*)0), (safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((((((safe_sub_func_uint64_t_u_u(((((*l_416) = l_547) > (((((safe_mod_func_int64_t_s_s((l_587[4][3][1] , (safe_lshift_func_int16_t_s_u(0xF2D1L, (((void*)0 != &g_361[1][0][1]) & (g_285[3][0][2] = (safe_lshift_func_uint8_t_u_u(g_361[1][0][1], g_107))))))), l_560)) , p_65.f3) , l_428[g_107]) == l_428[g_107]) >= 0xF1L)) , g_285[1][2][0]), p_65.f0)) != l_560) <= p_65.f0) < 0x66C1L) == l_498[3][0]), p_66.f4)), l_437))))), p_66.f9)))), p_65.f3)) < p_66.f0) & l_593) & (-1L));
                    p_65.f0 = ((*l_120) = ((+(safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u((((safe_div_func_uint32_t_u_u(p_64.f2, (*g_397))) , &g_9) == ((*l_601) = &l_556[4])), p_64.f1)) || ((g_603--) && l_606)), (l_556[4] == ((g_282 |= (safe_mul_func_int16_t_s_s((((*l_347) = ((*g_8) <= ((safe_unary_minus_func_uint8_t_u(((safe_sub_func_uint16_t_u_u(((p_63 = p_63) != l_613), g_47[6][6].f5)) & p_66.f5))) && 0x4D9DDAE1L))) && l_547), 0xD230L))) >= l_437))))) >= g_47[6][6].f7));
                    for (l_143 = 0; (l_143 <= 1); l_143 += 1)
                    {
                        int i, j;
                        (*l_120) = (((9L > l_498[(g_107 + 2)][(l_143 + 2)]) , ((*g_397) , (*g_397))) >= ((safe_add_func_uint64_t_u_u(p_64.f5, ((((g_619[5]--) != ((!((g_304 ^ (safe_rshift_func_uint8_t_u_u(((**g_396) || (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(p_65.f0, (((g_48[0][5].f1 , l_498[(g_107 + 2)][(l_143 + 2)]) | 0UL) > g_407.f2))), (*l_120)))), 4))) , p_64.f0)) && l_560)) >= g_407.f2) == 0x9EL))) | l_556[4]));
                        (*l_120) = ((void*)0 == &g_258[0]);
                    }
                }
                for (l_143 = 0; (l_143 == 2); ++l_143)
                {
                    struct S0 ***l_632 = &l_377;
                    const struct S0 * const l_638 = (void*)0;
                    const struct S0 * const * const l_637 = &l_638;
                    const struct S0 * const * const *l_636 = &l_637;
                    const struct S0 * const * const **l_635[6] = {&l_636,&l_636,&l_636,&l_636,&l_636,&l_636};
                    const union U2 l_652 = {0};
                    int32_t l_653 = 0xBC1BB1F8L;
                    int64_t *l_689 = &l_658;
                    int64_t *l_691 = &l_658;
                    int i;
                    p_65.f4 |= (!(((p_66.f4 , g_619[5]) != ((l_632 = (void*)0) == ((l_633 != l_634) , (l_639 = (void*)0)))) || (safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s(0x210349BA0A2D2384LL, (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((((0xAEE9A96BL != (safe_add_func_int16_t_s_s((((g_48[0][5].f0 , l_652) , 0UL) >= p_65.f2), g_407.f3))) , p_64.f4) > l_653) <= 0xC334L) & (*l_416)), 15)), g_407.f3)))) < (*l_120)) == g_47[6][6].f8), 0xA55BL)), l_547))));
                    for (g_107 = 0; (g_107 == 4); g_107 = safe_add_func_int32_t_s_s(g_107, 7))
                    {
                        uint16_t *l_666 = (void*)0;
                        uint16_t *l_667 = &l_566[4][0][1];
                        uint16_t *l_668[2][10] = {{(void*)0,&l_121[5],&l_121[5],(void*)0,&l_121[5],&l_121[5],(void*)0,&l_121[5],&l_121[5],(void*)0},{&l_121[5],(void*)0,&l_121[5],&l_121[5],(void*)0,&l_121[5],&l_121[5],(void*)0,&l_121[5],&l_121[5]}};
                        union U2 l_683 = {0};
                        int32_t l_684 = 0x72EACFD5L;
                        int64_t **l_690 = &l_689;
                        int i, j;
                        (**g_396) = (safe_div_func_uint8_t_u_u(((*l_633) = l_658), (safe_lshift_func_int8_t_s_u(((*l_215) &= ((g_361[1][5][0] ^= ((*l_667) = (safe_mul_func_uint8_t_u_u(248UL, (l_663[2] , (((safe_rshift_func_uint8_t_u_s(p_64.f0, 2)) <= 3L) != 0x6A636E1EL)))))) ^ ((safe_mod_func_uint32_t_u_u(l_557, 1L)) , ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((((((+(l_678 && (*g_8))) < 6UL) , &l_639) == &g_321[0][2][1]) , g_47[6][6].f4) , (void*)0) == (void*)0), p_65.f0)), 1L)), 7)) | 0x91AAF54BL)))), 4))));
                        (*g_396) = (*g_396);
                        l_653 &= (((g_304 = p_65.f1) < (*l_120)) || ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((g_47[6][6].f5 , (((4294967295UL ^ (((**g_396) = (*g_397)) && (((((*l_430) = ((l_683 , &g_522) != (void*)0)) | g_407.f4) , 0x6EL) || l_539))) , l_684) && 0x1FL)), (-1L))), g_67)) >= p_64.f1));
                        (*l_120) = (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((*l_215) = (((*l_690) = l_689) == (l_692 = l_691))), p_66.f7)), l_684));
                    }
                }
                (**g_396) = (safe_lshift_func_int16_t_s_u(((&p_62 == &p_62) < (((((*l_695) = &g_258[0]) != l_696) ^ ((*l_711) = ((safe_mul_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((((1L | l_701) > (safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u((+((p_64.f4 = ((safe_add_func_int64_t_s_s(((((*l_347) = (((*l_215) = (p_66 , (&p_62 == (l_709 = l_692)))) != p_65.f2)) <= p_65.f3) | p_65.f2), g_67)) && g_182)) ^ 0xBE9BL)), p_65.f3)), 0xD4EAAB8FFBD8139CLL))) , g_285[6][0][1]), 0xA9064075F3531D67LL)) <= l_701), 0x1884L)) < 0UL))) , l_556[2])), 11));
            }
            (*l_416) = ((*l_120) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((((**l_729) = (safe_sub_func_uint64_t_u_u((*l_416), (safe_mod_func_int16_t_s_s(((void*)0 != &l_639), (~(safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((p_66.f1 & (l_729 != &g_8)), (safe_sub_func_uint16_t_u_u(l_448[0], ((((~(-1L)) | ((g_47[6][6].f5 > g_48[0][5].f3) , g_733)) ^ p_64.f5) > 0L))))), p_66.f5)) > 1L), (*l_416))))))))) != 0UL) , p_66.f1), 1)), p_65.f2)));
            if (((*l_755) ^= (safe_lshift_func_int8_t_s_s((p_65 , (~(safe_rshift_func_int8_t_s_u((0L && (((*l_416) |= (**g_396)) == ((safe_div_func_int64_t_s_s(((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((g_733 = (safe_rshift_func_uint8_t_u_s((((l_498[3][8] != (g_47[6][6].f8 ^ (g_258[0] = g_349))) > ((*l_754) = (((*l_753) = ((*l_430) |= 0xACE872D86C31F5A0LL)) && p_64.f7))) != 0x89L), 6))), 1)) || g_361[2][3][2]), 6)), 0x5F2B5C2CL)), p_66.f7)) | g_349), g_424)) , p_66.f0))), 4)))), l_556[1]))))
            {
                int32_t *l_756 = &l_143;
                int32_t *l_757 = &l_616[5];
                int32_t *l_758 = &g_257;
                int32_t *l_759 = (void*)0;
                int64_t l_760 = 1L;
                int32_t *l_761[7][2] = {{&l_539,&l_539},{&l_616[0],&l_539},{&l_539,&l_616[0]},{&l_539,&l_539},{&l_616[0],&l_539},{&l_539,&l_616[0]},{&l_539,&l_539}};
                int16_t **l_789 = &l_347;
                int16_t * const **l_791 = &l_790[5][2][0];
                uint8_t l_801 = 0x84L;
                uint32_t l_823 = 0x1F8E8A31L;
                union U2 *l_837 = &g_408[0][0];
                uint8_t **l_838[6] = {&l_634,&l_634,&l_634,&l_634,&l_634,&l_634};
                struct S0 l_843 = {4658,0x2834A577L,3,0x4A5A833FFDD0D50BLL,65535UL,0x7B05L,1UL,1L,0xF9L,0xAA66L};
                int i, j;
                --l_765;
            }
            else
            {
                (*l_755) |= (-1L);
            }
        }
        else
        {
            int16_t l_903 = 0L;
            const union U2 ***l_935 = &l_904;
            const union U2 ****l_934 = &l_935;
            if (p_64.f5)
                goto lbl_890;
            for (g_284 = (-5); (g_284 != (-17)); --g_284)
            {
                const union U2 *l_907 = &g_908;
                const union U2 **l_906 = &l_907;
                int32_t l_917 = 0x85792AB6L;
                struct S0 *l_918 = &g_47[6][6];
                if ((+(((*l_416) = ((safe_sub_func_uint16_t_u_u(((g_896 != &g_897) ^ (p_65.f0 > g_9)), (l_898[0][0][6] , p_64.f3))) != g_733)) ^ ((safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint64_t_u_u((l_903 | p_64.f6), 0xD6E73DB2F5D99488LL)) > p_66.f4) && p_65.f4), 6)) < (-6L)))))
                {
                    const union U2 ***l_905 = (void*)0;
                    const uint8_t l_909 = 0x5CL;
                    const struct S0 *****l_912 = &l_910[3];
                    l_917 = ((((l_906 = l_904) != l_523) && ((l_909 <= ((((*l_912) = l_910[1]) != (void*)0) && p_66.f1)) || (safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((void*)0 != &l_409), 0xE7517CABL)), 12)))) || p_64.f2);
                    for (g_283 = 0; (g_283 <= 9); g_283 += 1)
                    {
                        return l_918;
                    }
                }
                else
                {
                    (*g_397) ^= p_66.f7;
                    (**g_396) = ((void*)0 != &g_521[1]);
                    for (p_66.f1 = 0; p_66.f1 < 10; p_66.f1 += 1)
                    {
                        for (p_66.f9 = 0; p_66.f9 < 7; p_66.f9 += 1)
                        {
                            for (g_67 = 0; g_67 < 2; g_67 += 1)
                            {
                                l_790[p_66.f1][p_66.f9][g_67] = &g_345;
                            }
                        }
                    }
                }
                (*l_416) = ((**g_396) = l_917);
                for (p_64.f6 = (-15); (p_64.f6 < 33); p_64.f6++)
                {
                    uint32_t l_932[6][8] = {{0xC2AC85CCL,0UL,0xC2AC85CCL,0x005C340AL,0xA446CDA1L,0x5EB009ABL,0xF9036267L,0xF9036267L},{0xF9036267L,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,18446744073709551610UL,0xF9036267L,0xA446CDA1L,0x5A1F1631L},{0xF9036267L,0x56D7396AL,1UL,18446744073709551610UL,0xA446CDA1L,18446744073709551610UL,1UL,0x56D7396AL},{0xC2AC85CCL,1UL,0x5EB009ABL,18446744073709551610UL,0x5A1F1631L,0x005C340AL,0x005C340AL,0x005C340AL},{0x5A1F1631L,0x005C340AL,0x005C340AL,0x5A1F1631L,18446744073709551610UL,0x5EB009ABL,1UL,0xC2AC85CCL},{0UL,0x5A1F1631L,0xF9036267L,1UL,0xF9036267L,0x5A1F1631L,0UL,0x56D7396AL}};
                    int32_t l_933 = (-8L);
                    const union U2 *****l_936[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j;
                    (*l_120) = (((safe_mul_func_uint16_t_u_u(l_917, p_66.f6)) == (((**g_72) , (l_932[1][4] = ((1L ^ (((((safe_sub_func_uint8_t_u_u(p_66.f8, ((safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(7L, 4)), (safe_sub_func_uint32_t_u_u(g_285[1][2][0], l_931)))) ^ l_917))) != l_903) || p_65.f0) >= g_285[6][2][2]) & 6UL)) != (*l_416)))) == l_933)) > 9L);
                    l_939 = (l_937 = l_934);
                }
            }
        }
        (*l_416) = (g_407.f0 != g_361[0][2][8]);
    }
    return (*g_72);
}







static struct S0 ** func_68(int8_t p_69, int32_t p_70, const int8_t * p_71)
{
    int8_t *l_74 = &g_75;
    int32_t *l_78 = &g_79;
    struct S0 *l_80 = (void*)0;
    struct S0 **l_117 = (void*)0;
    (*l_78) = (((*l_74) &= (l_74 == (void*)0)) && func_76(((((*l_78) &= ((void*)0 == &p_69)) && (((*l_74) &= ((l_80 == ((*g_72) = (*g_72))) , (-8L))) > (((((g_48[3][6] , p_70) , (void*)0) == (void*)0) > p_69) ^ 1UL))) , 0x58D0DBADF6968256LL)));
    return l_117;
}







static uint8_t func_76(int64_t p_77)
{
    uint8_t l_104 = 0xCCL;
    struct S0 l_105 = {5414,4L,2,7UL,0UL,0x0733L,0xA2236089L,0xC684B151L,1UL,-5L};
    int32_t *l_111 = (void*)0;
    int32_t *l_112 = &g_79;
    int32_t *l_113[2][5] = {{&g_79,(void*)0,&g_79,(void*)0,&g_79},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint32_t l_114 = 0x0C28791BL;
    int i, j;
    for (g_75 = 0; (g_75 == (-9)); g_75 = safe_sub_func_uint8_t_u_u(g_75, 5))
    {
        uint32_t l_83 = 0x29ECF7F4L;
        uint16_t *l_96 = (void*)0;
        uint32_t *l_106 = &g_107;
        int32_t l_108 = 0xCBC4CB45L;
        int32_t *l_110 = &g_79;
        int32_t **l_109 = &l_110;
        l_83++;
        l_108 &= ((((((*l_106) &= (((((safe_div_func_int64_t_s_s((safe_add_func_int64_t_s_s(1L, (safe_div_func_uint8_t_u_u((((((safe_add_func_uint16_t_u_u((++g_47[6][6].f4), (!8UL))) && ((safe_lshift_func_int16_t_s_s((p_77 ^ g_47[6][6].f6), 13)) > (l_104 &= ((safe_sub_func_uint32_t_u_u(p_77, 0x3EC18018L)) && l_83)))) & (*g_8)) , l_105) , 0xCBL), 0x0CL)))), l_83)) , g_47[6][6].f0) < g_47[6][6].f6) && 0x5258A0805470BB3ALL) , l_105.f6)) , 0xB6L) & p_77) != 1UL) , g_47[6][6].f4);
        (*l_109) = &l_108;
    }
    --l_114;
    return p_77;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_47[i][j].f0, "g_47[i][j].f0", print_hash_value);
            transparent_crc(g_47[i][j].f1, "g_47[i][j].f1", print_hash_value);
            transparent_crc(g_47[i][j].f2, "g_47[i][j].f2", print_hash_value);
            transparent_crc(g_47[i][j].f3, "g_47[i][j].f3", print_hash_value);
            transparent_crc(g_47[i][j].f4, "g_47[i][j].f4", print_hash_value);
            transparent_crc(g_47[i][j].f5, "g_47[i][j].f5", print_hash_value);
            transparent_crc(g_47[i][j].f6, "g_47[i][j].f6", print_hash_value);
            transparent_crc(g_47[i][j].f7, "g_47[i][j].f7", print_hash_value);
            transparent_crc(g_47[i][j].f8, "g_47[i][j].f8", print_hash_value);
            transparent_crc(g_47[i][j].f9, "g_47[i][j].f9", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_48[i][j].f0, "g_48[i][j].f0", print_hash_value);
            transparent_crc(g_48[i][j].f1, "g_48[i][j].f1", print_hash_value);
            transparent_crc(g_48[i][j].f2, "g_48[i][j].f2", print_hash_value);
            transparent_crc(g_48[i][j].f3, "g_48[i][j].f3", print_hash_value);
            transparent_crc(g_48[i][j].f4, "g_48[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_258[i], "g_258[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_285[i][j][k], "g_285[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_361[i][j][k], "g_361[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_407.f0, "g_407.f0", print_hash_value);
    transparent_crc(g_407.f1, "g_407.f1", print_hash_value);
    transparent_crc(g_407.f2, "g_407.f2", print_hash_value);
    transparent_crc(g_407.f3, "g_407.f3", print_hash_value);
    transparent_crc(g_407.f4, "g_407.f4", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_603, "g_603", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_619[i], "g_619[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_807, "g_807", print_hash_value);
    transparent_crc(g_941, "g_941", print_hash_value);
    transparent_crc(g_1022, "g_1022", print_hash_value);
    transparent_crc(g_1087, "g_1087", print_hash_value);
    transparent_crc(g_1089, "g_1089", print_hash_value);
    transparent_crc(g_1263, "g_1263", print_hash_value);
    transparent_crc(g_1408, "g_1408", print_hash_value);
    transparent_crc(g_1450, "g_1450", print_hash_value);
    transparent_crc(g_1459, "g_1459", print_hash_value);
    transparent_crc(g_1487, "g_1487", print_hash_value);
    transparent_crc(g_1674, "g_1674", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1701[i], "g_1701[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1702, "g_1702", print_hash_value);
    transparent_crc(g_1726, "g_1726", print_hash_value);
    transparent_crc(g_1885, "g_1885", print_hash_value);
    transparent_crc(g_1886, "g_1886", print_hash_value);
    transparent_crc(g_1918, "g_1918", print_hash_value);
    transparent_crc(g_1944.f0, "g_1944.f0", print_hash_value);
    transparent_crc(g_1944.f1, "g_1944.f1", print_hash_value);
    transparent_crc(g_1944.f2, "g_1944.f2", print_hash_value);
    transparent_crc(g_1944.f3, "g_1944.f3", print_hash_value);
    transparent_crc(g_1944.f4, "g_1944.f4", print_hash_value);
    transparent_crc(g_1944.f5, "g_1944.f5", print_hash_value);
    transparent_crc(g_1944.f6, "g_1944.f6", print_hash_value);
    transparent_crc(g_1944.f7, "g_1944.f7", print_hash_value);
    transparent_crc(g_1944.f8, "g_1944.f8", print_hash_value);
    transparent_crc(g_1944.f9, "g_1944.f9", print_hash_value);
    transparent_crc(g_2004, "g_2004", print_hash_value);
    transparent_crc(g_2088, "g_2088", print_hash_value);
    transparent_crc(g_2304.f0, "g_2304.f0", print_hash_value);
    transparent_crc(g_2304.f1, "g_2304.f1", print_hash_value);
    transparent_crc(g_2304.f2, "g_2304.f2", print_hash_value);
    transparent_crc(g_2304.f3, "g_2304.f3", print_hash_value);
    transparent_crc(g_2304.f4, "g_2304.f4", print_hash_value);
    transparent_crc(g_2304.f5, "g_2304.f5", print_hash_value);
    transparent_crc(g_2304.f6, "g_2304.f6", print_hash_value);
    transparent_crc(g_2304.f7, "g_2304.f7", print_hash_value);
    transparent_crc(g_2304.f8, "g_2304.f8", print_hash_value);
    transparent_crc(g_2304.f9, "g_2304.f9", print_hash_value);
    transparent_crc(g_2359, "g_2359", print_hash_value);
    transparent_crc(g_2361, "g_2361", print_hash_value);
    transparent_crc(g_2399, "g_2399", print_hash_value);
    transparent_crc(g_2435.f0, "g_2435.f0", print_hash_value);
    transparent_crc(g_2435.f1, "g_2435.f1", print_hash_value);
    transparent_crc(g_2435.f2, "g_2435.f2", print_hash_value);
    transparent_crc(g_2435.f3, "g_2435.f3", print_hash_value);
    transparent_crc(g_2435.f4, "g_2435.f4", print_hash_value);
    transparent_crc(g_2435.f5, "g_2435.f5", print_hash_value);
    transparent_crc(g_2435.f6, "g_2435.f6", print_hash_value);
    transparent_crc(g_2435.f7, "g_2435.f7", print_hash_value);
    transparent_crc(g_2435.f8, "g_2435.f8", print_hash_value);
    transparent_crc(g_2435.f9, "g_2435.f9", print_hash_value);
    transparent_crc(g_2442.f0, "g_2442.f0", print_hash_value);
    transparent_crc(g_2442.f1, "g_2442.f1", print_hash_value);
    transparent_crc(g_2442.f2, "g_2442.f2", print_hash_value);
    transparent_crc(g_2442.f3, "g_2442.f3", print_hash_value);
    transparent_crc(g_2442.f4, "g_2442.f4", print_hash_value);
    transparent_crc(g_2628, "g_2628", print_hash_value);
    transparent_crc(g_2629, "g_2629", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2718[i], "g_2718[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2815, "g_2815", print_hash_value);
    transparent_crc(g_2969, "g_2969", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
