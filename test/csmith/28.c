// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = B43702E9
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



static int8_t g_3 = 0xECL;
static uint8_t g_30 = 1UL;
static int32_t g_41 = (-10L);
static uint32_t g_77 = 0UL;
static uint64_t g_110 = 0xD42852A3B4A04EC1LL;
static int8_t g_120 = 0x16L;
static int16_t g_127[9][6][4] = {{{(-1L),(-2L),0xE5C9L,1L},{0x8D22L,0x1BEEL,0xB84AL,0x7CB9L},{0xA89DL,3L,0x91C4L,0x1146L},{(-1L),0xCF51L,0xCF51L,(-1L)},{(-1L),0x1174L,(-5L),0x4BD0L},{0xB84AL,(-1L),0L,(-1L)}},{{0xAF0DL,0L,0xF453L,(-1L)},{(-3L),(-1L),0xF70BL,0x4BD0L},{(-1L),0x1174L,0L,(-1L)},{0L,0xCF51L,0x38EFL,0x1146L},{(-3L),3L,3L,0x7CB9L},{0L,0x1BEEL,0xA89DL,0x25C6L}},{{3L,0L,(-5L),(-1L)},{(-2L),0x6339L,0x7A54L,0x7CB9L},{1L,0x88AFL,0x6277L,0x91C4L},{0x91C4L,0L,(-8L),0x6277L},{0xF121L,0x063AL,(-3L),0x0F6EL},{0x4C55L,0x0DFAL,1L,0x88AFL}},{{0x174CL,0x6339L,1L,(-5L)},{0L,0x8A20L,0x2A05L,0xF475L},{(-1L),0x72D5L,0x2287L,0x493BL},{(-1L),1L,(-1L),0x0D88L},{1L,0L,0x913EL,(-1L)},{0x174CL,0x91C4L,(-1L),0x38EFL}},{{0x063AL,0xF70BL,(-1L),(-2L)},{0x1FC1L,0xE517L,(-8L),(-8L)},{0x2451L,(-1L),4L,(-3L)},{0x93F5L,0x1BEEL,0x93F5L,(-1L)},{(-2L),1L,(-1L),0x08B4L},{0x4BD0L,0x7A54L,(-3L),1L}},{{0x88AFL,0x72D5L,(-3L),0x25C6L},{0x4BD0L,(-1L),(-1L),9L},{(-2L),0xAF0DL,0x93F5L,0x88AFL},{0x93F5L,0x88AFL,4L,0xE5C9L},{0x2451L,0xCCF3L,(-8L),4L},{0x1FC1L,0L,(-1L),0x0F6EL}},{{0x063AL,0xCF51L,(-1L),0L},{0x174CL,0xAF0DL,0x913EL,(-1L)},{1L,0x8A20L,(-1L),0L},{(-1L),(-1L),0x2287L,1L},{(-1L),(-1L),0x2A05L,0x0D88L},{0L,0xF453L,1L,3L}},{{0x174CL,0x1BEEL,1L,0xA89DL},{0x4C55L,0xF70BL,(-3L),3L},{0xF121L,0xF475L,(-8L),(-2L)},{0x91C4L,(-10L),0x6277L,(-3L)},{1L,0x2451L,0x7A54L,3L},{(-2L),0L,(-5L),0xF70BL}},{{3L,0x7A54L,0xA89DL,0x913EL},{0xCF51L,(-1L),(-3L),0xF475L},{(-2L),0L,9L,9L},{(-1L),(-1L),0x7A54L,0L},{0x93F5L,0x0DFAL,0xFD8EL,0x91C4L},{0xE5C9L,0xCCF3L,0x6339L,0xFD8EL}}};
static int32_t g_129 = 0x98C40119L;
static int8_t g_130 = 0x90L;
static uint16_t g_207 = 65535UL;
static int32_t *g_217 = &g_41;
static int32_t **g_216 = &g_217;
static int16_t g_233 = (-1L);
static uint32_t g_234 = 8UL;
static int8_t g_243 = 0xFDL;
static int8_t g_244 = 0xCDL;
static int32_t g_245 = 0xB04CF609L;
static int32_t g_246 = (-6L);
static int16_t g_247 = 0L;
static int32_t g_251 = (-6L);
static uint64_t g_252 = 18446744073709551611UL;
static uint32_t g_279 = 1UL;
static int64_t g_303[8] = {0x4A9B6D24C9DFCBD0LL,(-1L),0x4A9B6D24C9DFCBD0LL,0x4A9B6D24C9DFCBD0LL,(-1L),0x4A9B6D24C9DFCBD0LL,0x4A9B6D24C9DFCBD0LL,(-1L)};
static uint32_t *g_333 = &g_77;
static uint32_t **g_332 = &g_333;
static int64_t g_352[5][8][5] = {{{0x01D2B11E068EC750LL,0x3BDA3BE19D1D845ELL,0x01D2B11E068EC750LL,(-3L),2L},{0x7D12CE1CFEF05E6BLL,0xA344A1A613836D43LL,0xEA915CF9A51A2D85LL,0x3269671310D6146ALL,0x293277F54225877BLL},{(-8L),0L,0L,0L,1L},{0x7D12CE1CFEF05E6BLL,0xDF620D2C9EF1719ALL,0xA04C876800FB456DLL,0xA344A1A613836D43LL,(-1L)},{0x4CD39AF5786877DDLL,0x3BDA3BE19D1D845ELL,1L,0x3BDA3BE19D1D845ELL,0x4CD39AF5786877DDLL},{0xDF620D2C9EF1719ALL,6L,0L,0xA344A1A613836D43LL,0xA2793B3B70A786B7LL},{0x01D2B11E068EC750LL,(-8L),0L,0L,(-8L)},{0x3269671310D6146ALL,0xA04C876800FB456DLL,0x7D12CE1CFEF05E6BLL,6L,0xA2793B3B70A786B7LL}},{{0x3BDA3BE19D1D845ELL,0L,0x4CD39AF5786877DDLL,0xE8E1FBBDAB1B6190LL,0x4CD39AF5786877DDLL},{0xA2793B3B70A786B7LL,0xA2793B3B70A786B7LL,0xDF620D2C9EF1719ALL,0x3269671310D6146ALL,(-1L)},{0x3BDA3BE19D1D845ELL,8L,0x01D2B11E068EC750LL,1L,1L},{0x3269671310D6146ALL,0x293277F54225877BLL,0x3269671310D6146ALL,0xEA915CF9A51A2D85LL,0xA344A1A613836D43LL},{0x01D2B11E068EC750LL,8L,0x3BDA3BE19D1D845ELL,(-8L),0xADAF65EDA587845ELL},{0xDF620D2C9EF1719ALL,0xA2793B3B70A786B7LL,0xA2793B3B70A786B7LL,0xDF620D2C9EF1719ALL,0x3269671310D6146ALL},{0x4CD39AF5786877DDLL,0L,0x3BDA3BE19D1D845ELL,0xADAF65EDA587845ELL,8L},{0x7D12CE1CFEF05E6BLL,0xA04C876800FB456DLL,0x3269671310D6146ALL,0xA04C876800FB456DLL,0x7D12CE1CFEF05E6BLL}},{{0L,(-8L),0x01D2B11E068EC750LL,0xADAF65EDA587845ELL,(-3L)},{0L,6L,0xDF620D2C9EF1719ALL,0xDF620D2C9EF1719ALL,6L},{1L,0x3BDA3BE19D1D845ELL,0x4CD39AF5786877DDLL,(-8L),(-3L)},{0xA04C876800FB456DLL,0xDF620D2C9EF1719ALL,0x7D12CE1CFEF05E6BLL,0xEA915CF9A51A2D85LL,0x7D12CE1CFEF05E6BLL},{(-3L),(-3L),0L,1L,8L},{0xA04C876800FB456DLL,(-1L),0L,0x3269671310D6146ALL,0x3269671310D6146ALL},{1L,2L,1L,0xE8E1FBBDAB1B6190LL,0xADAF65EDA587845ELL},{0L,(-1L),0xA04C876800FB456DLL,6L,0xA344A1A613836D43LL}},{{0L,(-3L),(-3L),0L,1L},{0x7D12CE1CFEF05E6BLL,0xDF620D2C9EF1719ALL,0xA04C876800FB456DLL,0xA344A1A613836D43LL,(-1L)},{0x4CD39AF5786877DDLL,0x3BDA3BE19D1D845ELL,1L,0x3BDA3BE19D1D845ELL,0x4CD39AF5786877DDLL},{0xDF620D2C9EF1719ALL,6L,0L,0xA344A1A613836D43LL,0xA2793B3B70A786B7LL},{0x01D2B11E068EC750LL,(-8L),0L,0L,(-8L)},{0x3269671310D6146ALL,0xA04C876800FB456DLL,0x7D12CE1CFEF05E6BLL,6L,0xA2793B3B70A786B7LL},{0x3BDA3BE19D1D845ELL,0L,0x4CD39AF5786877DDLL,0xE8E1FBBDAB1B6190LL,0x4CD39AF5786877DDLL},{0xA2793B3B70A786B7LL,0xA2793B3B70A786B7LL,0xDF620D2C9EF1719ALL,0x3269671310D6146ALL,(-1L)}},{{0x3BDA3BE19D1D845ELL,8L,0x01D2B11E068EC750LL,1L,1L},{0x3269671310D6146ALL,0x293277F54225877BLL,0x3269671310D6146ALL,0xEA915CF9A51A2D85LL,0xA344A1A613836D43LL},{0x01D2B11E068EC750LL,8L,0x3BDA3BE19D1D845ELL,(-8L),0xADAF65EDA587845ELL},{0xDF620D2C9EF1719ALL,0xA2793B3B70A786B7LL,0xA2793B3B70A786B7LL,0xDF620D2C9EF1719ALL,0x3269671310D6146ALL},{0x4CD39AF5786877DDLL,0L,0x3BDA3BE19D1D845ELL,0xADAF65EDA587845ELL,8L},{0x7D12CE1CFEF05E6BLL,0xA04C876800FB456DLL,0x3269671310D6146ALL,0xA04C876800FB456DLL,0x7D12CE1CFEF05E6BLL},{0L,(-8L),0x01D2B11E068EC750LL,0xADAF65EDA587845ELL,(-3L)},{0L,6L,0xDF620D2C9EF1719ALL,0xDF620D2C9EF1719ALL,6L}}};
static uint8_t g_381 = 2UL;
static uint64_t g_446 = 1UL;
static uint8_t *g_565[2] = {(void*)0,(void*)0};
static uint8_t **g_564 = &g_565[1];
static uint64_t *g_628 = &g_446;
static uint16_t g_652 = 0x350EL;
static uint16_t g_662 = 65531UL;
static uint32_t ***g_743 = &g_332;
static uint32_t ****g_742[3][1] = {{&g_743},{&g_743},{&g_743}};
static int32_t g_759 = 0x6D4D14A1L;
static int64_t g_789 = (-10L);
static int8_t g_790 = 0x02L;
static int8_t g_820 = 0x76L;
static int32_t g_821 = 0x30F1EC4CL;
static uint32_t g_826 = 0xE850C2CBL;
static int32_t g_939 = 4L;
static int64_t *g_953[4] = {&g_352[3][3][0],&g_352[3][3][0],&g_352[3][3][0],&g_352[3][3][0]};
static int64_t **g_952[5] = {&g_953[1],&g_953[1],&g_953[1],&g_953[1],&g_953[1]};
static uint32_t g_986 = 0x9AF5F527L;
static uint8_t ***g_997 = &g_564;
static uint8_t ****g_996 = &g_997;
static int64_t ***g_1072 = &g_952[4];
static int64_t ***g_1073 = &g_952[4];
static int32_t ***g_1081[3] = {&g_216,&g_216,&g_216};
static int32_t ****g_1080[2] = {&g_1081[1],&g_1081[1]};
static const uint8_t g_1234[8][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
static uint32_t g_1259[2] = {0x0E730A49L,0x0E730A49L};
static int64_t g_1293 = 0L;
static const int64_t g_1325 = 0x0A0D253C1B042E43LL;
static const int32_t *g_1442 = (void*)0;
static uint32_t g_1447[10][10] = {{0x3D4933A2L,1UL,0xBB643A7CL,1UL,0xDD055330L,4294967292UL,4294967295UL,0xBB643A7CL,0xF21AE6A0L,0xBED3A73BL},{0x3D4933A2L,0x959A24EEL,1UL,0x913B1422L,0x94FF76E1L,1UL,0xBB643A7CL,0xBB643A7CL,1UL,0x94FF76E1L},{1UL,0xBB643A7CL,0xBB643A7CL,1UL,0x94FF76E1L,0x913B1422L,1UL,0x959A24EEL,0x3D4933A2L,0xBED3A73BL},{0xF21AE6A0L,0xBB643A7CL,4294967295UL,4294967292UL,0xDD055330L,1UL,0xBB643A7CL,1UL,0x3D4933A2L,5UL},{0x913B1422L,0x959A24EEL,0xF2BD000FL,1UL,4294967295UL,1UL,4294967295UL,0xA2D4BE38L,1UL,0xDD055330L},{0xF21AE6A0L,1UL,0xF2BD000FL,0x913B1422L,4294967288UL,0x913B1422L,0xF2BD000FL,1UL,0xF21AE6A0L,0xDD055330L},{1UL,0xA2D4BE38L,4294967295UL,1UL,4294967295UL,1UL,0xF2BD000FL,0x959A24EEL,0x913B1422L,5UL},{0x3D4933A2L,1UL,0xBB643A7CL,1UL,0xDD055330L,4294967292UL,4294967295UL,0xBB643A7CL,0xF21AE6A0L,0xBED3A73BL},{0x3D4933A2L,0x959A24EEL,1UL,0x913B1422L,0x94FF76E1L,1UL,0xBB643A7CL,0xBB643A7CL,1UL,0x94FF76E1L},{1UL,0xBB643A7CL,0xBB643A7CL,1UL,0x94FF76E1L,0x913B1422L,1UL,0x959A24EEL,0x3D4933A2L,0xBED3A73BL}};
static int64_t ****g_1480 = &g_1073;
static int64_t *****g_1479 = &g_1480;
static int32_t *g_1546[3] = {(void*)0,(void*)0,(void*)0};
static const uint32_t g_1585 = 0x786E082AL;
static const int16_t *g_1595[3][8] = {{&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1]},{&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1]},{&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1],&g_127[3][0][1]}};
static const int16_t **g_1594 = &g_1595[2][1];
static int32_t g_1626 = 0xB6B13AA0L;
static uint32_t *g_1645 = &g_234;
static uint32_t ** const g_1644 = &g_1645;
static int32_t *****g_1662 = &g_1080[0];
static int32_t g_1720 = 0x59758DECL;
static int64_t *g_1759 = &g_352[3][3][0];
static int32_t g_1873 = (-5L);
static uint8_t **** const *g_1903 = (void*)0;
static uint8_t *****g_1904 = &g_996;
static uint32_t g_1905 = 0x6693B8CCL;
static int16_t g_1908 = 0x84C6L;
static int16_t g_2007 = (-1L);
static uint8_t g_2031 = 0xE4L;
static int8_t g_2050 = 0L;
static uint64_t **g_2055 = &g_628;



static uint32_t func_1(void);
static uint8_t func_6(int64_t p_7, int32_t p_8, uint16_t p_9, uint8_t p_10);
static int16_t func_16(int32_t p_17);
static const int16_t func_18(int32_t p_19);
static uint64_t func_20(uint32_t p_21);
static uint32_t func_22(uint32_t p_23, int16_t p_24, uint32_t p_25, const int16_t p_26);
static int32_t func_33(uint8_t * p_34, uint16_t p_35, uint64_t p_36, uint8_t * p_37);
static uint8_t * func_38(int32_t p_39);
static uint16_t func_46(int32_t p_47, int32_t * p_48, int32_t ** p_49, const int16_t p_50);
static uint8_t func_57(int64_t p_58, int32_t p_59, int32_t p_60);
# 116 "<stdin>"
static uint32_t func_1(void)
{
    uint64_t l_2 = 1UL;
    int32_t *l_1721 = &g_939;
    uint32_t l_1752 = 0xDFBC6813L;
    uint32_t l_1753 = 4294967295UL;
    int64_t ** const *l_1771[5];
    int64_t ** const **l_1770 = &l_1771[0];
    uint32_t *l_1776 = (void*)0;
    int16_t *l_1808 = (void*)0;
    int16_t **l_1807 = &l_1808;
    int32_t l_1825 = 1L;
    int32_t l_1831 = 1L;
    const int64_t l_1887[2][3][1] = {{{1L},{1L},{1L}},{{1L},{1L},{1L}}};
    int32_t l_1921[2][3] = {{0xB7DF1FE9L,0xB7DF1FE9L,3L},{0xB7DF1FE9L,0xB7DF1FE9L,3L}};
    uint16_t l_2035 = 0x9970L;
    const int8_t ** const l_2048 = (void*)0;
    const int32_t l_2094 = 0xE8B793DEL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1771[i] = &g_952[2];
    if ((l_2 > g_3))
    {
        int64_t l_11 = (-1L);
        int32_t *l_1718 = (void*)0;
        int32_t *l_1719 = &g_1720;
        uint8_t ***l_1726 = &g_564;
        int64_t *l_1733 = &g_352[3][3][0];
        int8_t *l_1751 = &g_820;
        int8_t **l_1750 = &l_1751;
        uint64_t *l_1754[8];
        int32_t l_1755 = 0x42E101F7L;
        int i;
        for (i = 0; i < 8; i++)
            l_1754[i] = &g_110;
        (*l_1719) |= (safe_mul_func_uint8_t_u_u(func_6(l_11, g_3, g_3, (safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(func_16((18446744073709551614UL <= l_2)), ((safe_unary_minus_func_int16_t_s((-1L))) == ((safe_lshift_func_int16_t_s_u(l_11, (((void*)0 != &g_1595[1][3]) != g_1234[3][2]))) & 0L)))), 0x06FB3E3A881392DDLL))), 0x03L));
        (*g_216) = l_1721;
        l_1755 |= (safe_rshift_func_int8_t_s_s((((safe_mul_func_int8_t_s_s(g_986, ((*g_996) != (l_1726 = (*g_996))))) > (g_446 = (safe_div_func_uint64_t_u_u(((safe_div_func_int32_t_s_s(((**g_216) = (*g_217)), ((g_1259[1] , ((g_662 = ((((*l_1733) &= (safe_lshift_func_uint8_t_u_u(0x7CL, 2))) < ((((((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((g_207 && ((*l_1719) < (((((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((((*l_1750) = &g_790) != &g_3), (*l_1719))) , 8UL), g_1234[3][2])), g_247)) < l_1752) < g_1293) ^ (*l_1719)) >= (-9L)))) | 2UL) >= (**g_1594)), (*l_1719))), 3)), 2)) <= l_1753), 7)) , g_251) >= l_1752) > (*l_1719)) < l_1753) || l_1752)) == l_1753)) > (*l_1719))) && 0x7DE53B7AL))) , (*l_1719)), l_2)))) || (*l_1721)), g_129));
    }
    else
    {
        int64_t *l_1758[9][4][6] = {{{(void*)0,(void*)0,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0}},{{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0}},{{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0}},{{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0}},{{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0}},{{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0}},{{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0}},{{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0},{&g_1293,&g_1293,(void*)0,&g_1293,&g_1293,(void*)0}},{{&g_1293,&g_789,&g_1293,&g_789,&g_789,&g_1293},{&g_789,&g_789,&g_1293,&g_789,&g_789,&g_1293},{&g_789,&g_789,&g_1293,&g_789,&g_789,&g_1293},{&g_789,&g_789,&g_1293,&g_789,&g_789,&g_1293}}};
        int32_t l_1762 = 0x210076E9L;
        uint32_t *l_1768[4][10][6] = {{{&g_986,&l_1753,&g_279,&l_1753,&g_1447[9][1],&g_1447[3][6]},{&g_1259[0],&g_986,(void*)0,&g_279,&g_1447[3][6],&g_1447[9][1]},{&g_986,&g_1447[2][5],&g_986,&g_986,(void*)0,&l_1753},{&l_1753,&l_1753,&g_1447[3][6],&g_1447[3][6],&l_1753,&l_1753},{&l_1753,&g_986,&g_1447[2][5],&g_986,&g_1447[1][0],&g_1259[0]},{(void*)0,(void*)0,&g_986,&g_1259[1],&g_1259[0],&g_1447[4][6]},{(void*)0,&l_1753,&g_1259[1],&g_986,&g_1259[0],(void*)0},{&l_1753,&g_1447[1][0],&l_1753,&g_1447[3][6],&g_1259[0],&g_279},{&l_1753,&g_986,&g_986,&g_986,&g_1447[4][6],&g_1259[0]},{&g_986,(void*)0,&l_1753,&g_279,&g_986,&g_1259[0]}},{{&g_1259[0],&l_1753,&g_986,&l_1753,&g_1259[0],&l_1753},{&g_986,&g_1447[3][6],&g_1447[1][0],&l_1753,&g_279,&g_1447[2][5]},{&g_986,&g_1259[0],&g_986,&g_1447[3][6],&g_1259[0],&g_1447[2][5]},{(void*)0,&g_986,&g_1447[1][0],&g_986,&l_1753,&l_1753},{&g_1259[0],&g_1259[0],&g_986,&g_1259[0],&g_986,&g_1259[0]},{&g_1447[3][6],&g_986,&l_1753,&l_1753,&g_986,&g_1259[0]},{&g_1259[0],&g_1447[0][7],&g_986,&g_1259[0],&g_279,&g_279},{&g_986,&l_1753,&l_1753,&g_986,(void*)0,(void*)0},{&g_1447[3][6],(void*)0,&g_1259[1],&g_986,&g_986,&g_1447[4][6]},{&l_1753,&g_279,&g_986,&g_1259[0],&g_986,&g_1259[0]}},{{(void*)0,(void*)0,&g_1447[2][5],&g_1447[3][6],(void*)0,&l_1753},{&g_1447[1][0],&l_1753,&g_1447[3][6],&g_1259[0],&g_279,&l_1753},{&g_1447[2][9],&g_1447[0][7],&g_986,&g_1259[0],&g_986,&g_1447[9][1]},{&l_1753,&g_986,(void*)0,&g_1447[3][6],&g_986,&g_1447[3][6]},{&g_279,&g_1259[0],&g_279,(void*)0,&l_1753,&g_1447[3][6]},{&g_986,&g_986,&g_1259[0],&l_1753,&g_1259[0],&g_986},{&g_986,&g_1259[0],&g_1447[3][6],&l_1753,&g_279,(void*)0},{&g_986,&g_1447[3][6],&l_1753,(void*)0,&g_1259[0],&g_986},{(void*)0,&g_279,&g_1447[1][0],&g_1447[2][5],&g_1259[1],&g_1447[3][6]},{&g_986,&g_1447[0][7],&g_1259[0],&g_1259[0],&g_1447[3][6],&g_1447[2][9]}},{{&g_1447[4][6],&g_1447[9][1],(void*)0,&g_986,&g_986,(void*)0},{&g_1447[2][9],&g_1447[2][9],&g_1447[4][6],(void*)0,&l_1753,&l_1753},{&g_1447[3][6],&g_986,(void*)0,&g_986,&g_1259[0],&g_1447[4][6]},{&g_986,&g_1447[3][6],(void*)0,&g_1447[3][6],&g_1447[2][9],&l_1753},{&l_1753,&g_1447[3][6],&g_1447[4][6],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1753,&l_1753,&g_1447[2][9]},{&l_1753,&g_1259[0],&g_1259[0],&g_986,(void*)0,&g_1447[3][6]},{(void*)0,&g_986,&g_1447[1][0],&l_1753,&g_1447[1][0],&g_986},{&g_1259[0],&g_986,&g_279,&l_1753,(void*)0,&g_986},{&l_1753,&g_279,&g_1447[2][5],&g_1259[0],&g_1259[0],&g_1447[3][6]}}};
        int16_t *l_1769 = &g_233;
        int32_t l_1772 = 7L;
        uint32_t l_1801 = 2UL;
        int32_t l_1827 = 0L;
        int32_t l_1828 = (-1L);
        int32_t l_1829 = 0L;
        int8_t l_1832[3];
        int64_t l_1911 = 1L;
        int32_t l_1916 = 9L;
        int32_t l_1917 = 0x0288B330L;
        int16_t l_1982 = 0x5FADL;
        uint32_t l_2006 = 7UL;
        const int8_t *l_2037 = &l_1832[2];
        const int8_t **l_2036 = &l_2037;
        uint64_t l_2059 = 0x03F6EC9CB2818D16LL;
        uint16_t l_2062 = 0x118AL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1832[i] = 0xFCL;
        (*g_217) ^= ((safe_rshift_func_int8_t_s_u((g_129 == ((((**g_1072) = (g_1759 = l_1758[1][1][1])) != (void*)0) || 0x1FE99BA0ED798926LL)), (((((*l_1769) = (g_127[7][1][0] = ((safe_add_func_uint8_t_u_u(255UL, (l_1762 , (1UL & ((*l_1721) <= (l_1762 = ((*g_333) = (safe_add_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s((~((0xA2D29D55L <= (**g_332)) , 0xCC06L)), 4)) , l_1762) , l_1762), 9L))))))))) || 0x5E254585AB6CCDBCLL))) | g_30) , l_1770) != (void*)0))) <= l_1772);
        if ((*l_1721))
        {
            uint8_t l_1775 = 0UL;
            const int8_t * const l_1780 = &g_3;
            int32_t *l_1816[1];
            uint64_t l_1822 = 1UL;
            uint64_t l_1833 = 1UL;
            uint64_t l_1875[6] = {0x48874E1CA84FC79BLL,0x48874E1CA84FC79BLL,0x48874E1CA84FC79BLL,0x48874E1CA84FC79BLL,0x48874E1CA84FC79BLL,0x48874E1CA84FC79BLL};
            int16_t *l_1897 = (void*)0;
            int32_t l_1919 = 0xE096AF2CL;
            int64_t l_1922 = 0xCD10D7D65EF3E84ALL;
            int8_t l_1924 = 1L;
            uint32_t l_1983 = 0xB47E44E2L;
            int64_t l_2005 = 0x2D521DCEF0F968EBLL;
            int i;
            for (i = 0; i < 1; i++)
                l_1816[i] = &g_1720;
            for (g_986 = (-7); (g_986 > 15); g_986++)
            {
                int32_t l_1779 = 8L;
                int32_t l_1800[5] = {0x626FE455L,0x626FE455L,0x626FE455L,0x626FE455L,0x626FE455L};
                uint64_t **l_2003 = &g_628;
                uint16_t l_2004 = 2UL;
                int i;
                if (l_1775)
                {
                    int16_t l_1805 = 0xA66CL;
                    uint64_t l_1809 = 0xB29BB9ACE387ADAALL;
                    int32_t *l_1815 = &g_41;
                    int32_t l_1819 = 0x155C88C4L;
                    int32_t l_1826 = 0x5596AE2CL;
                    uint8_t *l_1845 = &l_1775;
                    uint16_t *l_1871 = &g_652;
                    uint32_t l_1872 = 0xFD1EE65FL;
                    uint32_t l_1874[3][1][7] = {{{0UL,4294967289UL,0UL,0UL,4294967289UL,0UL,0UL}},{{4294967289UL,4294967289UL,0x148A293AL,4294967289UL,4294967289UL,0x148A293AL,4294967289UL}},{{4294967289UL,0UL,0UL,4294967289UL,0UL,0UL,4294967289UL}}};
                    uint16_t l_1910 = 0x1801L;
                    int8_t l_1912 = 7L;
                    int32_t l_1914 = 0x7F6D3C00L;
                    int32_t l_1920 = 8L;
                    int32_t l_1923[10][7] = {{0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL},{(-4L),0L,(-4L),0L,(-4L),0L,(-4L)},{0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL},{(-4L),0L,(-4L),0L,(-4L),0L,(-4L)},{0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL},{(-4L),0L,(-4L),0L,(-4L),0L,(-4L)},{0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL},{(-4L),0L,(-4L),0L,(-4L),0L,(-4L)},{0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL,0x00EBA65EL},{(-4L),0L,(-4L),0L,(-4L),0L,(-4L)}};
                    uint32_t l_1925 = 0x68B21484L;
                    int i, j, k;
                    if ((((l_1768[1][6][2] != l_1776) , 1UL) ^ (safe_add_func_int64_t_s_s(l_1779, (&g_244 == l_1780)))))
                    {
                        int16_t l_1797[7] = {0x1CAFL,0x1CAFL,0x8A83L,0x1CAFL,0x1CAFL,0x8A83L,0x1CAFL};
                        uint8_t *l_1798[8][5] = {{(void*)0,&g_381,(void*)0,&g_30,(void*)0},{(void*)0,&g_381,&g_381,&g_381,&g_381},{(void*)0,&g_30,&l_1775,&g_30,(void*)0},{&g_381,&g_381,&g_381,&g_381,(void*)0},{(void*)0,&g_30,(void*)0,&g_381,(void*)0},{&g_381,&g_381,(void*)0,&g_381,(void*)0},{(void*)0,&g_381,&l_1775,&g_381,(void*)0},{(void*)0,&g_381,(void*)0,&g_381,&g_381}};
                        int32_t l_1799 = 0L;
                        int8_t *l_1804 = &g_790;
                        uint64_t *l_1810 = &g_110;
                        int8_t l_1811 = 0L;
                        uint64_t *l_1812[9] = {&l_1809,&g_252,&l_1809,&l_1809,&g_252,&l_1809,&l_1809,&g_252,&l_1809};
                        int16_t **l_1813 = &l_1808;
                        int16_t l_1814 = 8L;
                        int i, j;
                        (*g_217) = ((safe_add_func_uint64_t_u_u(0UL, ((safe_sub_func_uint64_t_u_u(((*g_628)--), ((safe_lshift_func_int16_t_s_s(0x5848L, ((safe_div_func_int32_t_s_s((((l_1800[4] = ((((!((safe_rshift_func_uint8_t_u_s(0xDDL, 7)) && (~(safe_rshift_func_int8_t_s_u(((*l_1804) = (l_1775 ^ (l_1801++))), (l_1805 , (~(l_1807 != (((((**g_332) = l_1809) != (((g_252 = (((((g_247 | ((*l_1810) = ((*g_1644) != (void*)0))) > l_1811) < l_1805) == l_1800[3]) , 0x0C62272F75CEF695LL)) , &g_652) == (void*)0)) < 18446744073709551615UL) , l_1813))))))))) == 0xE2L) == l_1772) < g_352[2][1][1])) > l_1779) ^ g_1234[3][1]), l_1814)) , l_1805))) != 0xCA19F85AF47B3E1ELL))) & l_1775))) < 0x111425B50CE6A483LL);
                    }
                    else
                    {
                        if (l_1801)
                            break;
                    }
                    l_1816[0] = l_1815;
                    for (g_789 = 0; (g_789 >= (-6)); g_789--)
                    {
                        int8_t l_1820[2][3][3] = {{{0xABL,0xE9L,5L},{0xF0L,0xE9L,0xF0L},{(-1L),0xABL,5L}},{{(-1L),(-1L),0xABL},{0xF0L,0xABL,0xABL},{0xABL,0xE9L,5L}}};
                        int32_t l_1821 = 0L;
                        int32_t l_1830 = (-5L);
                        int i, j, k;
                        (*g_217) = l_1801;
                        ++l_1822;
                        g_1479 = &g_1480;
                        --l_1833;
                    }
                    if (((((18446744073709551610UL <= (l_1800[3] | ((+((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((*l_1845) ^= l_1800[3]), g_790)) || (safe_mul_func_int16_t_s_s(((*l_1769) = (safe_rshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u((((~(l_1801 || (safe_mod_func_uint8_t_u_u(((*l_1845)--), (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(((l_1829 && (safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((*g_628) <= (((*l_1871) |= 1UL) <= ((0xB00AF1A867991686LL == l_1872) != (*g_217)))), (*l_1815))) <= 0x6FDEL), g_279))) & l_1800[2]), g_252)), 8)))))) == (*l_1815)) != 18446744073709551613UL), g_1873)) , l_1800[2]), l_1874[1][0][6])), 0)), (**g_332))) , 0x3FL), l_1827))), (**g_1594)))), 1L)), 5)) || l_1875[0])) != g_1234[6][1]))) | l_1779) | l_1772) < 8L))
                    {
                        int32_t l_1896 = (-1L);
                        int16_t **l_1898 = &l_1897;
                        int16_t *l_1906 = &l_1805;
                        int16_t *l_1907 = &g_1908;
                        int32_t l_1909 = 0L;
                        l_1909 |= ((safe_div_func_uint32_t_u_u((***g_743), ((safe_lshift_func_uint16_t_u_s(((g_233 = ((*l_1721) , ((*l_1907) &= (~(safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_1887[1][1][0], ((safe_rshift_func_int16_t_s_u(((*l_1906) |= (g_247 ^= (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(l_1896, (((*l_1807) = (g_233 , &l_1805)) != ((*l_1898) = l_1897)))), (safe_mul_func_uint16_t_u_u((--(*l_1871)), ((((9UL || (((*l_1721) = (((((g_1903 = &g_996) == g_1904) >= (*l_1815)) | (*l_1815)) , (*l_1721))) || l_1896)) | 0x0FBDL) >= g_1905) , (**g_1594)))))), 7UL)))), g_1585)) < (*l_1815)))), l_1896)) & g_279), l_1896)))))) >= (**g_1594)), 15)) | 1L))) ^ l_1800[3]);
                        if (l_1910)
                            break;
                        return l_1911;
                    }
                    else
                    {
                        int32_t l_1913 = 0x614437E3L;
                        int32_t l_1915 = 0xB5741649L;
                        int32_t l_1918[6][4][6] = {{{4L,0L,0xBF390A1FL,0xE1904926L,0x05800EFFL,1L},{0x40322D79L,1L,0x52F01096L,0xD5FDA90FL,0xF5A1A96DL,0x3BD8B0DEL},{(-2L),1L,0x97B02003L,0L,0L,4L},{0xBA7903D9L,4L,1L,6L,0x0AB761B3L,0x5D244433L}},{{0L,6L,0L,3L,0L,0x40322D79L},{0x5D244433L,1L,0L,4L,0L,4L},{0xA3735D39L,0x919C8700L,0xA3735D39L,0L,(-2L),4L},{(-1L),0xEBFE6577L,0x40322D79L,0x1D4809EEL,0L,0L}},{{0x919C8700L,0L,0xBA7903D9L,0x1D4809EEL,0xE57D8B4CL,0L},{(-1L),0L,0x7293C1B9L,0L,0xF201E227L,1L},{0xA3735D39L,0xBA7903D9L,(-1L),4L,0xEDF9705EL,1L},{0x5D244433L,(-1L),(-2L),3L,0xEB52BC3BL,0x83AE3577L}},{{0L,0x1D4809EEL,4L,6L,0xD5FDA90FL,0xBE7C23C8L},{0xBA7903D9L,1L,0x3BD8B0DEL,0L,0x94DED4D2L,1L},{(-2L),0xE57D8B4CL,0xEDF9705EL,0xD5FDA90FL,1L,0L},{0x40322D79L,0xB6B042CEL,1L,0xE1904926L,0x52F01096L,0x0AB761B3L}},{{4L,0L,1L,0xBE7C23C8L,0L,1L},{8L,0x97B02003L,0x19B59144L,0L,0L,0x19B59144L},{(-2L),(-2L),0xF201E227L,0x0AB761B3L,0x3BD8B0DEL,(-1L)},{0x2F5B3336L,0x7293C1B9L,6L,0xA3735D39L,1L,0xF201E227L}},{{1L,0x2F5B3336L,6L,0xCC59DABBL,(-2L),(-1L)},{0xF5A1A96DL,0xCC59DABBL,0xF201E227L,(-1L),(-10L),0x19B59144L},{(-1L),0x6E30EC80L,1L,4L,4L,0xCC59DABBL},{0xEDF9705EL,1L,(-2L),1L,0xBA7903D9L,6L}}};
                        int i, j, k;
                        l_1925++;
                    }
                }
                else
                {
                    int32_t l_1928 = 0xF4CE7D12L;
                    uint64_t **l_1937 = &g_628;
                    uint8_t *l_1974 = &g_381;
                    if (((*l_1721) = l_1928))
                    {
                        uint32_t l_1929[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1929[i] = 0x5844FD11L;
                        if (l_1929[8])
                            break;
                    }
                    else
                    {
                        const int8_t l_1942 = 0xD1L;
                        uint16_t *l_1943 = &g_662;
                        int32_t l_1944[5][1][3] = {{{0L,(-10L),0L}},{{0x35FA9373L,1L,0x35FA9373L}},{{0L,(-10L),0L}},{{0x35FA9373L,1L,0x35FA9373L}},{{0L,(-10L),0L}}};
                        int32_t * const l_1945 = &g_821;
                        int32_t **l_1946 = &g_217;
                        int i, j, k;
                        l_1944[0][0][2] ^= (+(safe_unary_minus_func_uint16_t_u((((+0x33AC24E64D013BB6LL) >= ((&g_129 != (l_1800[3] , &g_251)) >= ((safe_lshift_func_uint16_t_u_s(((*l_1943) = (safe_add_func_int8_t_s_s(((void*)0 == l_1937), ((safe_rshift_func_uint16_t_u_s(l_1832[0], ((*l_1769) |= l_1800[3]))) < ((((((safe_mul_func_uint8_t_u_u((l_1942 || (-2L)), 7L)) > l_1928) == (*l_1721)) , l_1942) , l_1928) != g_939))))), 9)) == l_1928))) || (*g_217)))));
                        (*l_1946) = l_1945;
                    }
                    for (g_821 = 0; (g_821 <= 18); g_821 = safe_add_func_uint32_t_u_u(g_821, 9))
                    {
                        (*l_1721) &= 9L;
                        if (l_1779)
                            break;
                    }
                    (*****g_1662) = ((safe_rshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((*g_1645) , (((0x4D50902FL < ((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((**g_1594) | ((safe_mul_func_uint16_t_u_u(((g_662 > (safe_mul_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(l_1801, (l_1928 < (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((+(safe_rshift_func_uint8_t_u_s((++(*l_1974)), g_446))), (safe_mod_func_uint16_t_u_u((~l_1928), (safe_mod_func_uint16_t_u_u(((g_303[4] < l_1832[0]) || 2UL), g_120)))))), g_1234[3][2]))))) , l_1982) < l_1800[3]), 1UL))) , l_1928), l_1983)) && 0L)) > 18446744073709551612UL), l_1800[3])), l_1928)) | (*l_1721))) <= g_246) || g_662)), l_1779)) < (-6L)), g_1585)) , l_1928);
                }
                (*g_217) = ((safe_mod_func_uint64_t_u_u((0xC23DL != (safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint64_t_u((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_1832[0], (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((l_1916 > (!((((&g_628 != (void*)0) > ((safe_add_func_uint16_t_u_u((0UL && ((~((**g_332) = (((((safe_add_func_uint16_t_u_u((((*l_2003) = &l_2) != ((**g_332) , (void*)0)), g_986)) > 0xCBA13A4EL) < (*l_1721)) | g_41) > (*g_217)))) & (*l_1721))), l_1800[3])) || l_2004)) || 0x797E93E67EF3F7B2LL) , l_1779))), l_2005)), l_1832[2])))), 0x03L)))), 12))), l_2006)) , l_2004);
            }
            (**g_216) |= g_2007;
            if (l_1828)
            {
                const int64_t *l_2022 = (void*)0;
                const int64_t **l_2021 = &l_2022;
                const int64_t ** const *l_2020[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                const int64_t ** const **l_2019 = &l_2020[2];
                const int64_t ** const *** const l_2018 = &l_2019;
                uint8_t *l_2023 = &l_1775;
                int32_t l_2024 = 0L;
                int i;
                (*l_1721) = ((*g_217) ^= (safe_mul_func_int8_t_s_s((~((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((!(((((void*)0 == &l_1827) , &l_1770) != l_2018) | (((*l_2023) = (*l_1721)) == l_2024))), l_2024)), (*l_1721))), (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((((((l_2024 >= l_2024) , l_2024) , l_1762) != g_352[0][5][0]) | g_207), g_1447[3][6])) ^ l_2024), (*l_1721))), g_2031)))) >= (*l_1721))), g_790)));
            }
            else
            {
                uint8_t *l_2032 = &g_30;
                int32_t l_2046 = 0x1400D6BEL;
                uint16_t *l_2047 = &g_652;
                int32_t l_2049[8][9][3] = {{{0xCD7954CFL,0L,(-1L)},{0L,(-2L),1L},{0x6EFBF109L,(-5L),1L},{(-1L),(-1L),(-1L)},{0x2663359DL,8L,9L},{0x77E95292L,0x7516D486L,0x77E95292L},{0x4502A1D6L,0x30623722L,(-5L)},{1L,0xC61F7254L,0x7516D486L},{1L,0x8C4FF2CDL,0L}},{{0L,(-1L),0xBE7FB077L},{1L,(-1L),(-1L)},{1L,0x3EC9B42FL,0x0491A1B6L},{0x4502A1D6L,0xF110E018L,3L},{0x77E95292L,0x0491A1B6L,0x1C38BB9BL},{0x2663359DL,0x6EFBF109L,0xC61F7254L},{(-1L),(-1L),(-6L)},{0x6EFBF109L,(-1L),0x4502A1D6L},{0L,0x6EFBF109L,(-1L)}},{{0xCD7954CFL,0x0491A1B6L,(-1L)},{0xF110E018L,0xF110E018L,0L},{(-1L),0x3EC9B42FL,0xF110E018L},{0x8C4FF2CDL,(-1L),8L},{0L,(-1L),0x30623722L},{3L,0x8C4FF2CDL,8L},{(-6L),0xC61F7254L,0xF110E018L},{9L,0x30623722L,0L},{3L,0x7516D486L,(-1L)}},{{0xC61F7254L,8L,(-1L)},{0L,(-1L),0x4502A1D6L},{0x5B7A0EEBL,(-5L),(-6L)},{0x5B7A0EEBL,(-2L),0xC61F7254L},{0L,0L,0x1C38BB9BL},{0xC61F7254L,3L,3L},{3L,0x2663359DL,0x0491A1B6L},{9L,(-6L),(-1L)},{(-6L),0L,0xBE7FB077L}},{{3L,0x77E95292L,0L},{0L,0L,0x7516D486L},{0x8C4FF2CDL,(-6L),(-5L)},{(-1L),0x2663359DL,0x77E95292L},{0xF110E018L,3L,9L},{0xCD7954CFL,0L,(-1L)},{0L,(-2L),1L},{0x6EFBF109L,(-5L),1L},{(-1L),(-1L),(-1L)}},{{0x2663359DL,8L,9L},{0x77E95292L,0x7516D486L,0x77E95292L},{0x4502A1D6L,0x30623722L,(-5L)},{1L,0xC61F7254L,0x7516D486L},{1L,0x8C4FF2CDL,0L},{0L,(-1L),0xBE7FB077L},{1L,(-1L),(-1L)},{1L,0x3EC9B42FL,0x0491A1B6L},{0x4502A1D6L,0L,0xC61F7254L}},{{0x8C4FF2CDL,0L,0xF110E018L},{(-1L),0x1C38BB9BL,1L},{0L,(-2L),0L},{0x1C38BB9BL,(-2L),0x30623722L},{0x804E7F70L,0x1C38BB9BL,1L},{1L,0L,(-1L)},{0L,0L,0x804E7F70L},{1L,0x5B7A0EEBL,0L},{0x3EC9B42FL,0L,(-6L)}},{{9L,0x0491A1B6L,0xBE7FB077L},{0xC61F7254L,0x3EC9B42FL,(-6L)},{0x2663359DL,1L,0L},{8L,0xBE7FB077L,0x804E7F70L},{(-1L),(-1L),(-1L)},{1L,(-6L),1L},{0L,1L,0x30623722L},{(-1L),(-6L),0L},{(-1L),0x77E95292L,1L}}};
                uint64_t **l_2053 = &g_628;
                uint64_t ***l_2054[10] = {&l_2053,&l_2053,&l_2053,&l_2053,&l_2053,&l_2053,&l_2053,&l_2053,&l_2053,&l_2053};
                int i, j, k;
lbl_2063:
                l_2049[3][0][1] ^= (((((*l_1721) , (((*l_2032) |= (*l_1721)) & (safe_add_func_int32_t_s_s(l_2035, (*g_333))))) , l_2036) != (((safe_rshift_func_uint8_t_u_s(251UL, ((safe_lshift_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u(((g_352[3][2][3] && ((*l_2047) = ((l_1801 != (safe_add_func_int16_t_s_s(8L, 0x4CD9L))) < l_2046))) , (*l_1721)), l_2046)) , g_352[1][3][0]) , g_207) || l_1911), g_789)) == l_2046))) == l_2046) , l_2048)) || (**g_332));
                if ((g_2050 | (safe_div_func_int64_t_s_s((&g_628 != (g_2055 = l_2053)), 18446744073709551608UL))))
                {
                    int8_t l_2058[1][6][8] = {{{(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)}}};
                    int i, j, k;
                    for (l_2 = (-23); (l_2 == 18); ++l_2)
                    {
                        ++l_2059;
                        (****g_1662) = (*g_216);
                        (*g_216) = &l_1828;
                    }
                    return l_2062;
                }
                else
                {
                    const int64_t l_2074 = 0L;
                    for (g_381 = 0; (g_381 <= 2); g_381 += 1)
                    {
                        int16_t ***l_2064 = &l_1807;
                        int i;
                        if (g_234)
                            goto lbl_2063;
                        (*l_2064) = &l_1808;
                        (*****g_1662) = l_1832[g_381];
                        (*l_1721) ^= (safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((l_1832[g_381] < (safe_sub_func_int16_t_s_s((l_1832[g_381] < (safe_mul_func_uint8_t_u_u((((+(((***g_743) <= l_2074) , (((*g_1645) = (safe_mod_func_uint16_t_u_u(1UL, (safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((l_1832[g_381] & ((safe_mod_func_int64_t_s_s((l_1916 | ((*g_996) != (void*)0)), l_2074)) == 18446744073709551615UL)), l_1829)), l_2046)), 0x1AL)) ^ (*g_628)), 4)), (**g_2055)))))) , l_2049[3][0][1]))) == 0x0C6BL) ^ 0x82L), 4L))), g_279))) >= l_1832[0]), g_30)), 6));
                    }
                }
                for (g_1293 = 13; (g_1293 <= 19); g_1293++)
                {
                    (*l_1721) ^= ((*g_217) = 3L);
                    for (g_759 = (-23); (g_759 > 14); g_759 = safe_add_func_int32_t_s_s(g_759, 2))
                    {
                        uint32_t l_2093 = 18446744073709551610UL;
                        l_2093 |= 0xA986F85CL;
                    }
                }
            }
        }
        else
        {
            (*****g_1662) = l_2094;
        }
    }
    return (*g_333);
}







static uint8_t func_6(int64_t p_7, int32_t p_8, uint16_t p_9, uint8_t p_10)
{
    int16_t l_1717 = 1L;
    return l_1717;
}







static int16_t func_16(int32_t p_17)
{
    int8_t l_27[1][8][8] = {{{0x52L,0x71L,0L,0x71L,0x52L,0L,0L,0x52L},{0x71L,0x4EL,0x4EL,0x71L,8L,0x52L,8L,0x71L},{0x4EL,8L,0x4EL,0L,0L,0L,0L,0x4EL},{8L,8L,0L,0x52L,(-1L),0x52L,0L,8L},{8L,0x4EL,0L,0L,0L,0L,0x4EL,8L},{0x4EL,0x71L,8L,0x52L,8L,0x71L,0x4EL,0x4EL},{0x71L,0x52L,0L,0L,0x52L,0x71L,0L,0x71L},{0x52L,0x71L,0L,0x71L,0x52L,0L,0L,0x52L}}};
    uint8_t *l_28 = (void*)0;
    uint8_t *l_29 = &g_30;
    int32_t *l_341 = (void*)0;
    int32_t *l_342[4];
    int32_t l_343 = 0x35416227L;
    int64_t *l_344 = &g_303[4];
    int32_t l_345 = 0xBF6379C1L;
    uint32_t l_439 = 1UL;
    uint32_t l_449 = 0x5192ABE0L;
    int16_t *l_1571 = &g_127[6][0][2];
    int16_t **l_1570 = &l_1571;
    int32_t l_1606 = (-1L);
    int32_t *l_1652[9][5][2] = {{{(void*)0,&g_41},{(void*)0,(void*)0},{(void*)0,&g_939},{(void*)0,(void*)0},{(void*)0,&g_41}},{{(void*)0,&g_939},{&g_821,(void*)0},{&l_345,&g_821},{&g_821,&g_41},{&g_821,&g_939}},{{&g_41,&g_939},{&g_821,&g_41},{&g_821,&g_821},{&l_345,(void*)0},{&g_821,&g_41}},{{(void*)0,&g_939},{&g_939,(void*)0},{&g_821,&l_345},{&g_821,(void*)0},{&g_939,&g_939}},{{(void*)0,&g_41},{&g_821,(void*)0},{&l_345,&g_821},{&g_821,&g_41},{&g_821,&g_939}},{{&g_41,&g_939},{&g_821,&g_41},{&g_821,&g_821},{&l_345,(void*)0},{&g_821,&g_41}},{{(void*)0,&g_939},{&g_939,(void*)0},{&g_821,&l_345},{&g_821,(void*)0},{&g_939,&g_939}},{{(void*)0,&g_41},{&g_821,(void*)0},{&l_345,&g_821},{&g_821,&g_41},{&g_821,&g_939}},{{&g_41,&g_939},{&g_821,&g_41},{&g_821,&g_821},{&l_345,(void*)0},{&g_821,&g_41}}};
    uint64_t l_1653 = 0xEB8C31536A469818LL;
    uint64_t **l_1704 = &g_628;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_342[i] = &g_41;
    if ((func_18((func_20(func_22(((((*l_29) |= l_27[0][5][7]) , (safe_sub_func_int16_t_s_s((((func_33(func_38(l_27[0][5][6]), (l_27[0][0][3] , (func_46((((((safe_mod_func_uint32_t_u_u(0x50C19791L, (safe_lshift_func_int16_t_s_s(((((*l_344) = (((0x94484F75DF1563CFLL < 0xDAB6AC39B398EF54LL) , (l_343 = (((safe_rshift_func_uint8_t_u_u(func_57(p_17, p_17, p_17), l_27[0][5][7])) >= 0x95EADCB5EDF6F51FLL) >= g_3))) , g_245)) , l_345) & 7L), p_17)))) > p_17) , 0x1755L) == 0x6253L) , 0L), &l_345, &l_342[3], g_245) , l_439)), p_17, l_29) , (**g_216)) , l_449) | p_17), p_17))) ^ p_17), p_17, p_17, g_279)) & p_17)) , p_17))
    {
        int16_t **l_1572 = &l_1571;
        int32_t l_1573 = 0x2F4D5E98L;
        if (p_17)
        {
            (*g_216) = &l_345;
        }
        else
        {
            uint32_t l_1569 = 4294967295UL;
            return l_1569;
        }
        l_1573 = (l_1570 != l_1572);
        for (g_110 = 0; (g_110 == 22); g_110 = safe_add_func_int64_t_s_s(g_110, 3))
        {
            uint8_t l_1576[6];
            uint32_t l_1603 = 1UL;
            uint64_t **l_1605 = &g_628;
            int32_t l_1623 = 1L;
            uint16_t l_1646 = 0x937CL;
            int8_t *l_1647 = (void*)0;
            int i;
            for (i = 0; i < 6; i++)
                l_1576[i] = 0x55L;
            --l_1576[2];
            for (g_1293 = (-26); (g_1293 > (-1)); g_1293 = safe_add_func_int32_t_s_s(g_1293, 3))
            {
                int32_t *l_1589 = (void*)0;
                int32_t *l_1590 = &g_251;
                uint32_t *** const *l_1598 = &g_743;
                const int8_t l_1604 = 0L;
                int32_t l_1607 = (-1L);
                int8_t l_1627 = 2L;
                for (l_1573 = 13; (l_1573 == (-9)); l_1573--)
                {
                    return g_303[7];
                }
                for (g_381 = 0; (g_381 <= 7); g_381 += 1)
                {
                    const uint32_t *l_1584 = &g_1585;
                    const uint32_t **l_1583 = &l_1584;
                    int32_t l_1586[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1586[i] = 1L;
                    l_1586[2] = (((*l_1583) = &g_826) != &g_1585);
                }
                if ((l_1607 = (safe_sub_func_int32_t_s_s((((*l_1590) = g_790) , ((**g_216) = (g_652 < (safe_mod_func_int8_t_s_s(g_110, (safe_unary_minus_func_uint16_t_u(((*g_628) || (((((*l_344) = (((**l_1572) = ((((g_1594 == (((safe_add_func_uint32_t_u_u((((l_1598 != ((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((p_17 != 0x2BD5148B1387AA2ALL), p_17)), 0xF9L)) , &g_743)) ^ g_252) && l_1603), (*g_333))) >= l_1604) , &g_1595[2][1])) , l_1605) != (void*)0) <= p_17)) > p_17)) <= (*g_628)) < l_1573) , (*g_628)))))))))), l_1606))))
                {
                    int32_t l_1620 = (-1L);
                    int32_t l_1634 = 9L;
                    for (g_247 = 0; (g_247 < (-16)); g_247 = safe_sub_func_int8_t_s_s(g_247, 4))
                    {
                        (**g_216) |= ((((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((p_17 ^ (p_17 && (p_17 != ((safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(l_1620, (g_120 > p_17))) != (safe_lshift_func_int8_t_s_u((p_17 | ((l_1623 == ((safe_sub_func_uint16_t_u_u(g_1626, g_662)) ^ p_17)) , p_17)), 2))), (-1L))) || 0x89FC011513FDA136LL), l_1627)) | 0x74FF0AA4L)))) , 0x6B74L), 7)), p_17)) & p_17) != p_17) > (**g_1594));
                        if ((**g_216))
                            break;
                        (*g_216) = &l_345;
                        (*g_217) = ((*l_1570) == (*g_1594));
                    }
                    for (l_1627 = 0; (l_1627 <= 1); l_1627 += 1)
                    {
                        int8_t *l_1633 = &g_120;
                        int i;
                        l_1634 = ((safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((*g_628), p_17)), (g_790 && 5L))) , ((((((*g_628) &= ((***g_743) == ((**g_216) = (p_17 , (((((~p_17) > ((*l_1633) = p_17)) , (((l_1627 && p_17) | l_1573) || (*g_333))) < p_17) & p_17))))) ^ 18446744073709551608UL) , p_17) , p_17) < (**g_1594)));
                        return p_17;
                    }
                }
                else
                {
                    if ((*g_217))
                        break;
                }
            }
            (*g_217) = ((p_17 > g_303[2]) & ((((safe_add_func_uint8_t_u_u((~(**g_1594)), (safe_div_func_uint64_t_u_u((+0x896CL), p_17)))) , (safe_sub_func_uint8_t_u_u((+0xF989L), p_17))) , g_1644) != ((l_1573 ^= (l_1603 , l_1646)) , &g_1645)));
        }
    }
    else
    {
        int32_t l_1648[7] = {0x2B80CDC7L,0x2B80CDC7L,0x2B80CDC7L,0x2B80CDC7L,0x2B80CDC7L,0x2B80CDC7L,0x2B80CDC7L};
        int i;
        l_1648[4] &= p_17;
        for (g_245 = 4; (g_245 >= 0); g_245 -= 1)
        {
            uint8_t l_1649 = 3UL;
            if (p_17)
                break;
            for (p_17 = 0; (p_17 <= 1); p_17 += 1)
            {
                l_1649++;
            }
        }
    }
    (*g_216) = (l_1652[4][2][1] = &l_345);
    ++l_1653;
    for (p_17 = 0; (p_17 > 14); p_17 = safe_add_func_int16_t_s_s(p_17, 6))
    {
        int32_t *****l_1661 = (void*)0;
        uint64_t *l_1666 = &g_110;
        int32_t l_1709 = 0x48B6EA06L;
        if (((*g_217) = p_17))
        {
            int32_t *****l_1660 = &g_1080[0];
            uint64_t *l_1665 = &g_252;
            uint8_t l_1667 = 253UL;
            int32_t l_1681 = 7L;
            for (g_986 = 0; (g_986 <= 25); g_986 = safe_add_func_int32_t_s_s(g_986, 2))
            {
                uint32_t *l_1678 = &g_1447[3][6];
                int32_t l_1680 = 0x594C5777L;
                (**g_216) ^= (((l_1661 = l_1660) != (g_1662 = &g_1080[0])) , (safe_lshift_func_uint16_t_u_s(((g_628 = &l_1653) == (l_1666 = l_1665)), 3)));
                l_1667++;
                for (l_439 = 0; (l_439 <= 1); l_439 += 1)
                {
                    int i, j, k;
                    if ((*****l_1661))
                    {
                        (****l_1660) = (****l_1661);
                    }
                    else
                    {
                        const int64_t l_1675 = (-1L);
                        (****g_1662) = &l_345;
                        (*g_217) |= 0xC1D757D3L;
                        (*g_217) = p_17;
                        l_1681 ^= (((((*****l_1661) < (safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((~(l_1675 == ((((safe_sub_func_uint64_t_u_u(((((*g_332) = l_1678) != (void*)0) && ((~l_1675) , 0x3D3CL)), ((((l_1680 & (((1UL > (*****l_1661)) || p_17) , 0x12BFB432L)) > 0x4BL) != 0x20091F9E545E91CELL) & l_1680))) & l_1680) , 0x8EF0L) < 9L))), (**g_1594))) & 0x1FC9A41FL), (-6L)))) & p_17) , 0x0F4212A0360EDCFBLL) ^ l_1675);
                    }
                    for (g_77 = 0; (g_77 <= 0); g_77 += 1)
                    {
                        int i, j, k;
                        (*g_217) = l_27[g_77][(l_439 + 6)][(l_439 + 4)];
                        return l_27[g_77][(l_439 + 1)][(g_77 + 6)];
                    }
                }
            }
        }
        else
        {
            uint32_t l_1682 = 4294967286UL;
            uint64_t l_1683 = 0xCD3F6594BB76FD1DLL;
            l_1682 = p_17;
            ++l_1683;
            if (p_17)
                break;
        }
        (*****g_1662) = (!p_17);
        for (g_986 = 0; g_986 < 2; g_986 += 1)
        {
            g_1259[g_986] = 9UL;
        }
        (*g_217) = (safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((g_1259[0] != p_17), 2)), ((~(p_17 < (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(0x6FL, 2)) == (safe_add_func_int32_t_s_s(((p_17 , ((*l_29) = (((l_1704 == &g_628) ^ (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(l_1709, (safe_rshift_func_uint8_t_u_s(((p_17 || p_17) | (*g_628)), p_17)))), (-10L)))) <= (*g_333)))) | 255UL), 0xBC97B77CL))), (-1L))))) && l_1709))) >= p_17) < 0UL), (**g_1594))), g_1234[3][0]));
    }
    return (**g_1594);
}







static const int16_t func_18(int32_t p_19)
{
    int32_t *l_1236[9] = {(void*)0,&g_939,(void*)0,&g_939,(void*)0,&g_939,(void*)0,&g_939,(void*)0};
    int32_t *l_1237 = (void*)0;
    uint32_t ****l_1238 = (void*)0;
    int32_t l_1271 = 5L;
    uint8_t ***l_1272 = &g_564;
    int16_t l_1299 = 0x2E49L;
    int16_t l_1300 = 0x7786L;
    uint8_t l_1307 = 254UL;
    int32_t l_1321 = 0x02A877E5L;
    int64_t * const *l_1335 = &g_953[3];
    int64_t * const **l_1334 = &l_1335;
    int64_t * const ** const * const l_1333 = &l_1334;
    int64_t ****l_1478 = &g_1073;
    int64_t *****l_1477 = &l_1478;
    int8_t l_1512 = 0x96L;
    uint64_t l_1560 = 0xD7137036A8E99334LL;
    int8_t l_1561 = (-1L);
    int i;
    (*g_216) = l_1236[5];
    (*g_216) = l_1237;
    for (g_245 = 0; (g_245 <= 0); g_245 += 1)
    {
        int32_t l_1239 = 1L;
        int8_t l_1255[10] = {(-1L),0L,2L,0L,(-1L),(-1L),0L,2L,0L,(-1L)};
        uint16_t l_1270 = 1UL;
        int32_t l_1294 = 0L;
        int32_t l_1298 = 0L;
        int32_t l_1301 = 0xF219BF04L;
        int32_t l_1302 = (-1L);
        int32_t l_1303 = 1L;
        int32_t l_1304 = 0x401B00B5L;
        int32_t l_1306 = 8L;
        const int32_t *l_1318[7] = {&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41};
        const int32_t **l_1317 = &l_1318[4];
        const int32_t ** const *l_1316 = &l_1317;
        const int32_t ** const **l_1315[9] = {&l_1316,&l_1316,&l_1316,&l_1316,&l_1316,&l_1316,&l_1316,&l_1316,&l_1316};
        const int32_t ** const ***l_1314 = &l_1315[0];
        uint32_t l_1344 = 0x33D54E2AL;
        int8_t l_1385 = 0x8EL;
        uint8_t *l_1408 = &g_30;
        uint32_t ***l_1429 = (void*)0;
        int64_t ****l_1476 = (void*)0;
        int64_t *****l_1475[1][8];
        uint8_t * const *l_1487[2][2][1];
        int16_t l_1511 = 1L;
        uint32_t l_1522 = 18446744073709551606UL;
        uint8_t l_1525[1];
        int32_t l_1564 = 0x537CC565L;
        int32_t l_1565 = 9L;
        uint32_t l_1566[3][4][10] = {{{0x93EE264AL,0x779F7E9DL,4294967286UL,0x779F7E9DL,0x93EE264AL,0x0DDB1C13L,0x0DDB1C13L,0x93EE264AL,0x779F7E9DL,4294967286UL},{0x3E549E53L,0x3E549E53L,4294967286UL,0x93EE264AL,4294967295UL,0x93EE264AL,4294967286UL,0x3E549E53L,0x3E549E53L,4294967286UL},{0x779F7E9DL,0x93EE264AL,0x0DDB1C13L,0x0DDB1C13L,0x93EE264AL,0x779F7E9DL,4294967286UL,0x779F7E9DL,0x93EE264AL,0x0DDB1C13L},{0UL,0x3E549E53L,0UL,0x0DDB1C13L,4294967286UL,4294967286UL,0x0DDB1C13L,0UL,0x3E549E53L,0UL}},{{0UL,0x779F7E9DL,0x3E549E53L,0x93EE264AL,0x3E549E53L,0x779F7E9DL,0UL,0UL,0x779F7E9DL,0x3E549E53L},{0x779F7E9DL,0UL,0UL,0x779F7E9DL,0x3E549E53L,0x93EE264AL,0x3E549E53L,0x779F7E9DL,0UL,0UL},{0x3E549E53L,0UL,0x0DDB1C13L,4294967286UL,4294967286UL,0x0DDB1C13L,0UL,0x3E549E53L,0UL,0x0DDB1C13L},{0x93EE264AL,0UL,0x3E549E53L,0UL,0x0DDB1C13L,4294967286UL,4294967286UL,0x0DDB1C13L,0UL,0x3E549E53L}},{{4294967295UL,4294967295UL,0x3E549E53L,0x0DDB1C13L,0x779F7E9DL,0x0DDB1C13L,0x3E549E53L,4294967295UL,4294967295UL,0x3E549E53L},{0UL,0x0DDB1C13L,4294967286UL,4294967286UL,0x0DDB1C13L,0UL,0x3E549E53L,0UL,0x0DDB1C13L,4294967286UL},{0x93EE264AL,4294967295UL,0x93EE264AL,4294967286UL,0x3E549E53L,0x3E549E53L,4294967286UL,0x93EE264AL,4294967295UL,0x93EE264AL},{0x93EE264AL,0UL,4294967295UL,0x0DDB1C13L,4294967295UL,0UL,0x93EE264AL,0x93EE264AL,0UL,4294967295UL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
                l_1475[i][j] = &l_1476;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1487[i][j][k] = &g_565[0];
            }
        }
        for (i = 0; i < 1; i++)
            l_1525[i] = 0xEFL;
        for (g_30 = 0; (g_30 <= 4); g_30 += 1)
        {
            uint8_t * const ***l_1246 = (void*)0;
            int32_t l_1254 = (-9L);
            int32_t l_1292[5] = {0xBFCA30BEL,0xBFCA30BEL,0xBFCA30BEL,0xBFCA30BEL,0xBFCA30BEL};
            uint32_t l_1329 = 0x38382F23L;
            int32_t l_1376[5];
            int64_t l_1378 = 0x912F578048C0F6A8LL;
            int32_t l_1438[5][1];
            uint64_t l_1440 = 18446744073709551615UL;
            int32_t l_1441 = 0x7C3BF371L;
            int i, j;
            for (i = 0; i < 5; i++)
                l_1376[i] = 1L;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1438[i][j] = 0L;
            }
            if ((l_1239 = ((g_742[(g_245 + 1)][g_245] = &g_743) != l_1238)))
            {
                uint32_t l_1253 = 0x8A81CA25L;
                for (g_986 = 0; (g_986 <= 2); g_986 += 1)
                {
                    for (g_251 = 0; (g_251 <= 2); g_251 += 1)
                    {
                        int i, j, k;
                        l_1239 = ((0x51L || ((safe_rshift_func_uint16_t_u_s((((((((safe_rshift_func_uint16_t_u_s(((g_352[(g_251 + 2)][(g_245 + 3)][(g_986 + 2)] <= ((g_110 , l_1246) != &g_997)) , (safe_lshift_func_uint16_t_u_s(((0xC9L | (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_127[8][3][2], 10)), 0x728FL))) <= p_19), p_19))), 4)) , l_1253) , g_251) , p_19) | l_1254) , (-3L)) | g_30), g_127[4][4][0])) <= 0x0B56L)) , l_1239);
                    }
                }
            }
            else
            {
                if (l_1255[1])
                    break;
                for (g_243 = 1; (g_243 <= 4); g_243 += 1)
                {
                    int32_t l_1256 = 0xE4593A65L;
                    int i, j, k;
                    if (g_352[g_243][(g_245 + 3)][g_243])
                        break;
                    for (g_446 = 0; (g_446 <= 1); g_446 += 1)
                    {
                        int64_t l_1257[5] = {0x16D5816C988CC497LL,0x16D5816C988CC497LL,0x16D5816C988CC497LL,0x16D5816C988CC497LL,0x16D5816C988CC497LL};
                        int32_t l_1258[8][10] = {{0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL},{0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL},{0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL},{0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL},{0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL},{0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL},{0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL},{0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL,0x840EE8DDL}};
                        int i, j;
                        ++g_1259[0];
                        if (g_303[g_243])
                            continue;
                    }
                }
            }
            l_1239 &= (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((l_1271 = l_1270), 7L)), l_1254)), l_1254)), 8));
            if (((*g_996) != l_1272))
            {
                int16_t *l_1290 = &g_233;
                uint8_t *l_1291 = &g_381;
                int32_t l_1295 = 6L;
                int32_t l_1296 = 0xBDD8D1EEL;
                int32_t l_1297[6][1][2] = {{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}}};
                int64_t l_1305 = 0x5568B69D87A3FAA8LL;
                int i, j, k;
                l_1292[1] &= (0x0DL <= ((*l_1291) = (l_1254 = ((((safe_sub_func_int64_t_s_s(5L, (~(safe_mul_func_int8_t_s_s(g_939, (safe_lshift_func_int8_t_s_s((((*l_1290) = (safe_div_func_uint32_t_u_u((+(safe_rshift_func_int8_t_s_u(((0L ^ ((safe_add_func_uint64_t_u_u((*g_628), 0x18540C266625971CLL)) | ((+(safe_sub_func_int8_t_s_s(((***g_743) > l_1254), (((p_19 , l_1255[1]) == 0x2FL) ^ p_19)))) > p_19))) != p_19), l_1239))), p_19))) >= p_19), l_1254))))))) ^ 7L) | g_247) & 18446744073709551612UL))));
                --l_1307;
            }
            else
            {
                int64_t * const ** const *l_1337[10];
                int64_t * const ** const **l_1336 = &l_1337[6];
                int i;
                for (i = 0; i < 10; i++)
                    l_1337[i] = &l_1334;
                for (g_939 = 0; (g_939 <= 4); g_939 += 1)
                {
                    int16_t *l_1328 = &g_127[4][1][2];
                    int32_t l_1330[6][7] = {{0x02FF1310L,1L,9L,9L,0xD2DF4DD5L,0xA0E38CBCL,0x02FF1310L},{0x02FF1310L,0x30F9959CL,0xF2F27C1FL,9L,0xF2F27C1FL,0x30F9959CL,0x02FF1310L},{0xA9C5620CL,1L,0xF2F27C1FL,0xD1900910L,0xD2DF4DD5L,0x30F9959CL,0xA9C5620CL},{0x02FF1310L,1L,9L,9L,0xD2DF4DD5L,0xA0E38CBCL,0x02FF1310L},{0x02FF1310L,0x30F9959CL,0xF2F27C1FL,9L,0xF2F27C1FL,0x30F9959CL,0x02FF1310L},{0xA9C5620CL,1L,0xF2F27C1FL,0xD1900910L,0xD2DF4DD5L,(-10L),(-1L)}};
                    int i, j, k;
                    l_1330[5][5] ^= (((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((1UL < ((*g_628) = ((void*)0 != l_1314))) < (safe_lshift_func_int16_t_s_s(g_352[g_245][(g_245 + 2)][(g_245 + 2)], ((l_1321 , ((((((*l_1328) = ((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u(((p_19 , g_1325) == 0UL))) || (safe_add_func_int64_t_s_s(((***g_743) & p_19), p_19))), p_19)) & g_1293)) > 0x00F3L) | p_19) || l_1329) | g_1259[1])) || 0L)))), 251UL)), 3)) == p_19) == p_19);
                    for (p_19 = 0; (p_19 == (-9)); p_19 = safe_sub_func_int8_t_s_s(p_19, 2))
                    {
                        return g_821;
                    }
                }
                (*l_1336) = l_1333;
            }
        }
        for (l_1302 = (-22); (l_1302 == (-29)); l_1302--)
        {
            return g_759;
        }
        for (l_1301 = 0; (l_1301 >= (-12)); --l_1301)
        {
            int32_t l_1474 = 0x36460214L;
            int32_t l_1486[8][10][2] = {{{0L,0xB899BD0FL},{2L,0xB899BD0FL},{0L,(-10L)},{(-10L),0L},{0xB899BD0FL,2L},{0xB899BD0FL,0L},{(-10L),(-10L)},{0L,0xB899BD0FL},{2L,0xB899BD0FL},{0L,(-10L)}},{{(-10L),0L},{0xB899BD0FL,2L},{0xB899BD0FL,0L},{(-10L),(-10L)},{0L,0xB899BD0FL},{2L,0xB899BD0FL},{0L,(-10L)},{(-10L),0L},{0xB899BD0FL,2L},{0xB899BD0FL,0L}},{{(-10L),(-10L)},{0L,0xB899BD0FL},{2L,0xB899BD0FL},{0L,(-10L)},{(-10L),0L},{0xB899BD0FL,2L},{0xB899BD0FL,0L},{(-10L),(-10L)},{0L,0xB899BD0FL},{2L,0xB899BD0FL}},{{0L,(-10L)},{(-10L),0L},{0xB899BD0FL,2L},{0xB899BD0FL,0L},{(-10L),(-10L)},{0L,0xB899BD0FL},{2L,0xB899BD0FL},{0L,(-10L)},{(-10L),0L},{0xB899BD0FL,2L}},{{0xB899BD0FL,0L},{(-10L),(-10L)},{0L,0xB899BD0FL},{2L,0xB899BD0FL},{0L,(-10L)},{(-10L),0L},{0xB899BD0FL,2L},{0xB899BD0FL,0L},{(-10L),(-10L)},{0L,0xB899BD0FL}},{{2L,0xB899BD0FL},{0L,(-10L)},{(-10L),0L},{0xB899BD0FL,2L},{0xB899BD0FL,0L},{(-10L),(-10L)},{0L,0xB899BD0FL},{2L,0xB899BD0FL},{0L,(-10L)},{(-10L),0L}},{{0xB899BD0FL,2L},{0xB899BD0FL,0L},{(-10L),(-10L)},{0L,0xB899BD0FL},{2L,0xB899BD0FL},{0L,(-10L)},{(-10L),0L},{0xB899BD0FL,2L},{0xB899BD0FL,0L},{(-10L),(-10L)}},{{0L,0xB899BD0FL},{2L,0xB899BD0FL},{0L,(-10L)},{(-10L),0L},{0xB899BD0FL,2L},{0xB899BD0FL,0L},{(-10L),(-10L)},{0L,0xB899BD0FL},{2L,0xB899BD0FL},{0L,(-10L)}}};
            int64_t l_1505[6][5][7] = {{{(-1L),(-1L),6L,(-1L),(-1L),(-1L),(-1L)},{1L,0x08CAC5B54A9507D5LL,1L,9L,9L,1L,0x08CAC5B54A9507D5LL},{(-1L),(-3L),6L,6L,(-3L),(-1L),(-3L)},{1L,9L,9L,1L,0x08CAC5B54A9507D5LL,1L,9L},{(-1L),(-1L),1L,(-3L),1L,(-1L),(-1L)}},{{9L,1L,0x08CAC5B54A9507D5LL,1L,9L,9L,1L},{6L,(-1L),6L,1L,1L,6L,(-1L)},{1L,(-2L),0x08CAC5B54A9507D5LL,0x08CAC5B54A9507D5LL,(-2L),1L,(-2L)},{6L,1L,1L,6L,(-1L),6L,1L},{9L,9L,1L,0x08CAC5B54A9507D5LL,1L,9L,9L}},{{(-1L),1L,(-3L),1L,(-1L),(-1L),1L},{0L,(-2L),0L,1L,1L,0L,(-2L)},{1L,(-1L),(-3L),(-3L),(-1L),1L,(-1L)},{0L,1L,1L,0L,(-2L),0L,1L},{(-1L),(-1L),1L,(-3L),1L,(-1L),(-1L)}},{{9L,1L,0x08CAC5B54A9507D5LL,1L,9L,9L,1L},{6L,(-1L),6L,1L,1L,6L,(-1L)},{1L,(-2L),0x08CAC5B54A9507D5LL,0x08CAC5B54A9507D5LL,(-2L),1L,(-2L)},{6L,1L,1L,6L,(-1L),6L,1L},{9L,9L,1L,0x08CAC5B54A9507D5LL,1L,9L,9L}},{{(-1L),1L,(-3L),1L,(-1L),(-1L),1L},{0L,(-2L),0L,1L,1L,0L,(-2L)},{1L,(-1L),(-3L),(-3L),(-1L),1L,(-1L)},{0L,1L,1L,0L,(-2L),0L,1L},{(-1L),(-1L),1L,(-3L),1L,(-1L),(-1L)}},{{9L,1L,0x08CAC5B54A9507D5LL,1L,9L,9L,1L},{6L,(-1L),6L,1L,1L,6L,(-1L)},{1L,(-2L),0x08CAC5B54A9507D5LL,0x08CAC5B54A9507D5LL,(-2L),1L,(-2L)},{6L,1L,1L,6L,(-1L),6L,1L},{9L,9L,1L,0x08CAC5B54A9507D5LL,1L,9L,9L}}};
            int64_t l_1506 = 0xAE763F1DE8F22C32LL;
            const uint32_t l_1545 = 4294967295UL;
            int64_t *****l_1557 = &l_1476;
            int32_t l_1559 = (-1L);
            int32_t l_1562 = 0x1388566BL;
            int i, j, k;
            if ((p_19 , (safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(p_19, 0x57L)), (safe_sub_func_uint8_t_u_u(l_1474, ((l_1477 = l_1475[0][1]) != g_1479)))))))
            {
                uint32_t l_1485 = 0xE536D96AL;
                int32_t l_1490[8][4][4] = {{{(-1L),(-1L),0x727BC549L,0x2E30967CL},{2L,0L,0L,2L},{(-6L),0x727BC549L,(-1L),(-1L)},{0L,(-4L),1L,0xED6FB982L}},{{(-4L),0x24751758L,0x83142456L,0xED6FB982L},{0x727BC549L,(-4L),1L,(-1L)},{(-6L),0x727BC549L,(-6L),(-1L)},{0x83142456L,0xAF92928AL,2L,(-4L)}},{{0xED6FB982L,(-6L),(-1L),0xAF92928AL},{0L,0x8D95C079L,(-1L),0x24751758L},{0xED6FB982L,1L,2L,2L},{0x83142456L,0x83142456L,(-6L),0L}},{{(-6L),0L,1L,0x727BC549L},{0x727BC549L,0L,0x83142456L,1L},{(-4L),0L,1L,0x727BC549L},{0L,0L,(-1L),0L}},{{0x2E30967CL,0x83142456L,0xAF92928AL,2L},{(-1L),1L,0x8D95C079L,0x24751758L},{2L,0x8D95C079L,0L,0xAF92928AL},{2L,(-6L),0x8D95C079L,(-4L)}},{{(-1L),0xAF92928AL,0xAF92928AL,(-1L)},{0x2E30967CL,0x727BC549L,(-1L),(-1L)},{0L,(-4L),1L,0xED6FB982L},{(-4L),0x24751758L,0x83142456L,0xED6FB982L}},{{0x727BC549L,(-4L),1L,(-1L)},{(-6L),0x727BC549L,(-6L),(-1L)},{0x83142456L,0xAF92928AL,2L,(-4L)},{0xED6FB982L,(-6L),(-1L),0xAF92928AL}},{{0L,0x8D95C079L,(-1L),0x24751758L},{0xED6FB982L,1L,2L,2L},{0x83142456L,0x83142456L,(-6L),0L},{(-6L),0L,1L,0x727BC549L}}};
                uint8_t l_1507[4][9] = {{247UL,247UL,247UL,247UL,247UL,247UL,247UL,247UL,247UL},{0xE7L,0xDBL,0xE7L,0xDBL,0xE7L,0xDBL,0xE7L,0xDBL,0xE7L},{247UL,247UL,247UL,247UL,247UL,247UL,247UL,247UL,247UL},{0xE7L,0xDBL,0xE7L,0xDBL,0xE7L,0xDBL,0xE7L,0xDBL,0xE7L}};
                int32_t l_1517[2][7][10] = {{{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L}},{{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L}}};
                int i, j, k;
                for (l_1239 = 7; (l_1239 >= 3); l_1239 -= 1)
                {
                    uint8_t * const *l_1483 = &l_1408;
                    int16_t *l_1484[8][2] = {{&g_233,&g_233},{&g_127[1][5][1],&g_233},{&l_1299,&l_1299},{&l_1299,&g_233},{&g_127[1][5][1],&g_233},{&g_233,&g_233},{&g_127[1][5][1],&g_233},{&l_1299,&l_1299}};
                    uint8_t l_1508 = 0x11L;
                    int32_t l_1516 = 4L;
                    int32_t l_1518 = 0xCED23828L;
                    int16_t l_1519[1][5];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_1519[i][j] = 0xD5B9L;
                    }
                    (**l_1316) = (*g_216);
                    if ((g_1447[(l_1239 + 2)][l_1239] > (safe_lshift_func_int16_t_s_u(((((*l_1272) = (**g_996)) != (((l_1486[0][3][0] |= (l_1485 &= ((void*)0 == l_1483))) ^ g_1447[l_1239][(l_1239 + 2)]) , l_1487[0][0][0])) > ((safe_mod_func_uint8_t_u_u(255UL, (g_820 = g_1447[(g_245 + 7)][(l_1239 + 2)]))) > (((p_19 , g_41) || l_1474) & l_1490[7][3][1]))), 0))))
                    {
                        const uint16_t l_1491 = 65535UL;
                        l_1486[3][7][1] |= p_19;
                        return l_1491;
                    }
                    else
                    {
                        int32_t ***l_1500 = &g_216;
                        int i, j;
                        l_1507[0][2] = ((((((safe_add_func_uint32_t_u_u((((~(l_1294 = ((safe_div_func_int8_t_s_s((l_1485 , 0x66L), p_19)) | (((l_1475[g_245][(g_245 + 4)] == (((((l_1490[3][2][1] = ((**l_1483) = (+(((safe_mod_func_int64_t_s_s((((void*)0 != l_1500) && (safe_mod_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u(p_19, (((((p_19 != ((p_19 < g_1259[0]) , l_1505[4][0][4])) >= g_1447[(l_1239 + 2)][l_1239]) >= g_939) != g_352[3][3][0]) & 0xAD33L))) > p_19) ^ g_821), p_19))), p_19)) > g_41) != 0x17L)))) | l_1485) , l_1490[7][3][1]) != g_1447[(l_1239 + 2)][l_1239]) , &g_1480)) , p_19) && l_1505[4][0][4])))) < g_352[3][3][0]) == 65533UL), 0x4474E71DL)) > 0xF4L) > p_19) < l_1506) & (*g_628)) <= l_1486[4][5][0]);
                        ++l_1508;
                    }
                    for (g_821 = 9; (g_821 >= 1); g_821 -= 1)
                    {
                        int16_t l_1513 = 0x0243L;
                        int32_t l_1514 = 6L;
                        int16_t l_1515 = (-5L);
                        int32_t l_1520 = 0L;
                        int32_t l_1521 = 0x00B56088L;
                        ++l_1522;
                        if (l_1525[0])
                            break;
                        l_1517[1][4][0] = ((safe_mod_func_uint16_t_u_u(p_19, (((safe_sub_func_uint16_t_u_u(0x1CDEL, (((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_s(p_19, (safe_rshift_func_int8_t_s_u(g_1234[3][2], ((l_1303 = p_19) <= p_19))))))) , p_19), (l_1486[1][5][0] = (((((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s((g_986 | (l_1513 || 0x053EDED600265712LL)), g_1234[3][2])), p_19)) == p_19) ^ (-2L)) , &g_1080[1]) != &g_1080[0])))), l_1545)), (**g_332))) != 0x6052AB53204A5577LL) == p_19))) , 0x78818C69L) ^ l_1490[7][3][1]))) < g_246);
                        g_1546[1] = &l_1518;
                    }
                }
            }
            else
            {
                uint8_t l_1558 = 255UL;
                int32_t l_1563 = 0L;
                l_1563 = ((safe_lshift_func_int16_t_s_u(p_19, 13)) && ((l_1302 = ((safe_add_func_uint32_t_u_u(l_1486[0][3][0], (255UL > ((safe_lshift_func_uint16_t_u_s(g_127[4][3][2], 11)) | (safe_div_func_int8_t_s_s((((l_1559 |= (l_1557 != (l_1558 , &g_1480))) >= (p_19 == (l_1562 = (l_1561 ^= l_1560)))) , l_1558), g_1259[0])))))) < p_19)) < p_19));
            }
            l_1566[0][1][7]--;
        }
    }
    return p_19;
}







static uint64_t func_20(uint32_t p_21)
{
    int8_t l_746 = (-10L);
    int8_t l_760 = (-9L);
    int32_t **l_761 = &g_217;
    int16_t *l_762 = &g_127[4][5][0];
    uint64_t ** const l_786 = &g_628;
    int32_t l_814 = 6L;
    int32_t l_816 = 0L;
    int32_t l_819[8][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
    int64_t *l_860[10][2] = {{(void*)0,&g_303[4]},{(void*)0,&g_789},{(void*)0,&g_303[4]},{(void*)0,(void*)0},{&g_303[4],(void*)0},{&g_789,(void*)0},{&g_303[4],(void*)0},{(void*)0,&g_303[4]},{(void*)0,&g_789},{(void*)0,&g_303[4]}};
    int32_t ***l_881 = &l_761;
    int32_t ****l_880 = &l_881;
    uint32_t ****l_1031 = &g_743;
    int64_t ***l_1117 = &g_952[4];
    int8_t l_1219 = (-1L);
    int32_t *l_1235 = &l_814;
    int i, j;
    if ((((p_21 & (!((((((((-4L) < l_746) < (safe_sub_func_int16_t_s_s(((*l_762) |= (((safe_add_func_uint8_t_u_u((p_21 , (safe_sub_func_uint64_t_u_u(((l_746 , ((((((*g_628) = ((safe_mod_func_int16_t_s_s(p_21, (safe_add_func_uint32_t_u_u(((g_662 && (safe_add_func_int32_t_s_s(l_746, p_21))) != g_244), g_759)))) != 0xB1BD3AD2L)) , l_760) , l_761) == l_761) <= (-1L))) | (**l_761)), (-1L)))), 251UL)) ^ 0x0E6A587BL) >= 0x89A4L)), 3L))) != p_21) | p_21) < (**l_761)) , (**l_761)) > (**l_761)))) >= (**l_761)) == g_120))
    {
        int32_t l_787 = 0x64281D12L;
        uint16_t l_788 = 0x2866L;
        uint32_t *l_810 = &g_279;
        const int32_t l_812 = 0xAE087D1AL;
        int32_t l_817 = 0x8288AB53L;
        int32_t l_818 = (-7L);
        int32_t l_822 = 0L;
        int32_t l_823 = 1L;
        int32_t l_825 = (-1L);
        int32_t ****l_917 = &l_881;
        int8_t l_951 = 0x1BL;
        uint64_t l_962 = 0xEED34EBEDFE76CABLL;
        const int64_t l_965 = (-7L);
        (**l_761) = (1UL & ((safe_mod_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s((g_77 > (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(g_652, (safe_sub_func_int16_t_s_s((g_759 <= ((**g_216) & (+((((**l_761) , (~(safe_mod_func_uint16_t_u_u(((((safe_add_func_uint64_t_u_u((~(((((p_21 , (((safe_mod_func_int64_t_s_s((p_21 | (safe_rshift_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s((l_786 == l_786), p_21)) <= p_21) ^ (**l_761)), (**l_761)))), (**l_761))) >= l_787) <= p_21)) && l_787) && p_21) ^ (*g_628)) != 0x2659L)), 0xA060F5829ADA6394LL)) > g_251) >= l_788) && (*g_217)), p_21)))) > 0xD995L) <= g_789)))), 6UL)))), (**l_761)))), 3)) ^ p_21) <= g_790) || g_446), l_787)) < l_788));
        for (g_41 = (-20); (g_41 >= 21); ++g_41)
        {
            int32_t * const *l_800 = &g_217;
            int32_t * const **l_799 = &l_800;
            uint32_t *l_811 = &g_279;
            int64_t *l_813[6];
            int i;
            for (i = 0; i < 6; i++)
                l_813[i] = &g_352[3][2][0];
            (*g_216) = ((safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((l_814 = ((~(safe_unary_minus_func_uint8_t_u((((((l_799 != &g_216) >= (((+(**g_216)) ^ (18446744073709551609UL != (((safe_rshift_func_int8_t_s_u((g_790 ^= p_21), (***l_799))) >= (safe_mod_func_uint16_t_u_u((((l_787 = (safe_rshift_func_uint8_t_u_u(p_21, (***l_799)))) & (l_810 == l_811)) , 0x92A2L), p_21))) < (**l_800)))) , p_21)) >= 4L) <= (**l_761)) || p_21)))) & l_812)) <= p_21), (***l_799))) == g_303[4]), l_812)) , (void*)0);
            return (*g_628);
        }
        for (g_279 = 1; (g_279 <= 4); g_279 += 1)
        {
            int32_t *l_815[10][7][3] = {{{(void*)0,&g_245,&g_245},{&g_245,&g_41,&g_245},{(void*)0,&l_787,(void*)0},{&l_814,&g_245,&l_787},{&g_245,&l_814,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_245,&g_245,&l_787}},{{&l_787,&l_814,(void*)0},{&l_814,&g_245,&g_245},{&g_245,&l_814,&g_245},{&l_787,&g_245,&l_814},{&g_245,&l_814,&g_41},{&l_814,&g_245,&g_245},{&g_245,(void*)0,&l_814}},{{&g_245,&g_245,&l_787},{&l_814,&l_787,(void*)0},{&l_787,&l_814,&l_814},{&l_787,&g_245,&g_245},{&g_245,&l_787,&l_814},{&g_245,&g_245,(void*)0},{(void*)0,(void*)0,&l_787}},{{&l_787,&l_814,&l_814},{&g_245,&l_814,&g_245},{&l_814,(void*)0,&g_41},{(void*)0,&g_245,(void*)0},{(void*)0,&l_787,&l_787},{&l_787,&g_245,&g_245},{(void*)0,&l_814,&g_245}},{{(void*)0,&l_787,&l_787},{&l_814,&g_245,(void*)0},{&g_245,(void*)0,(void*)0},{&l_787,&g_245,&l_787},{(void*)0,&l_814,&g_245},{&g_245,(void*)0,&g_245},{&g_245,&g_245,&l_787}},{{&l_787,(void*)0,(void*)0},{&l_787,&l_814,&g_41},{&l_814,&g_245,&g_245},{&g_245,(void*)0,&l_814},{&g_245,&g_245,&l_787},{&l_814,&l_787,(void*)0},{&l_787,&l_814,&l_814}},{{&l_787,&g_245,&g_245},{&g_245,&l_787,&l_814},{&g_245,&g_245,(void*)0},{(void*)0,(void*)0,&l_787},{&l_787,&l_814,&l_814},{&g_245,&l_814,&g_245},{&l_814,(void*)0,&g_41}},{{(void*)0,&g_245,(void*)0},{(void*)0,&l_787,&l_787},{&l_787,&g_245,&g_245},{(void*)0,&l_814,&g_245},{(void*)0,&l_787,&l_787},{&l_814,&g_245,(void*)0},{&g_245,(void*)0,(void*)0}},{{&l_787,&g_245,&l_787},{(void*)0,&l_814,&g_245},{&g_245,(void*)0,&g_245},{&g_245,&g_245,&l_787},{&l_787,(void*)0,(void*)0},{&l_787,&l_814,&g_41},{&l_814,&g_245,&g_245}},{{&g_245,(void*)0,&l_814},{&g_245,&g_245,&l_787},{&l_814,&l_787,(void*)0},{&l_787,&l_814,&l_814},{&l_787,&g_245,&g_245},{&g_245,&l_787,&l_814},{&g_245,&g_245,(void*)0}}};
            int32_t l_824 = 0xFDD763FFL;
            uint8_t l_845[4] = {0xE3L,0xE3L,0xE3L,0xE3L};
            uint32_t l_905 = 1UL;
            int16_t l_920 = 7L;
            uint16_t *l_948 = (void*)0;
            int64_t *l_992 = &g_303[4];
            int i, j, k;
            (*g_216) = l_815[6][1][0];
            if (g_246)
                break;
            g_826++;
            if (p_21)
                break;
            for (g_130 = 0; (g_130 <= 4); g_130 += 1)
            {
                int64_t l_844[2];
                int64_t *l_862[8];
                uint8_t l_886 = 255UL;
                uint16_t *l_914 = &g_662;
                int8_t *l_918 = &l_760;
                uint64_t l_919 = 0UL;
                int32_t l_929 = 0L;
                uint8_t l_949 = 248UL;
                int32_t *l_964[7][7][3] = {{{&g_821,&l_824,&l_817},{&g_821,(void*)0,&l_824},{&g_821,&l_929,&l_816},{&g_821,(void*)0,&g_821},{(void*)0,&g_245,&l_816},{(void*)0,&l_822,&l_816},{(void*)0,&l_822,&g_821}},{{&l_819[0][1],&l_817,&l_814},{(void*)0,&l_814,&l_822},{(void*)0,&l_814,&g_939},{(void*)0,&l_817,&l_817},{&l_929,&l_822,&g_939},{&l_824,&l_822,&l_822},{&l_824,&g_245,&l_814}},{{&l_929,(void*)0,&g_821},{(void*)0,&g_245,&l_816},{(void*)0,&l_822,&l_816},{(void*)0,&l_822,&g_821},{&l_819[0][1],&l_817,&l_814},{(void*)0,&l_814,&l_822},{(void*)0,&l_814,&g_939}},{{(void*)0,&l_817,&l_817},{&l_929,&l_822,&g_939},{&l_824,&l_822,&l_822},{&l_824,&g_245,&l_814},{&l_929,(void*)0,&g_821},{(void*)0,&g_245,&l_816},{(void*)0,&l_822,&l_816}},{{(void*)0,&l_822,&g_821},{&l_819[0][1],&l_817,&l_814},{(void*)0,&l_814,&l_822},{(void*)0,&l_814,&g_939},{(void*)0,&l_817,&l_817},{&l_929,&l_822,&g_939},{&l_824,&l_822,&l_822}},{{&l_824,&g_245,&l_814},{&l_929,(void*)0,&g_821},{(void*)0,&g_245,&l_816},{(void*)0,&l_822,&l_816},{(void*)0,&l_822,&g_821},{&l_819[0][1],&l_817,&l_814},{(void*)0,&l_814,&l_822}},{{(void*)0,&l_814,&g_939},{(void*)0,&l_817,&l_817},{&l_929,&l_822,&g_939},{&l_824,&l_822,&l_822},{&l_824,&g_245,&l_814},{&l_929,(void*)0,&g_821},{(void*)0,&g_245,&l_816}}};
                uint8_t ****l_999 = &g_997;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_844[i] = 0x93546DB77BCBD6BCLL;
                for (i = 0; i < 8; i++)
                    l_862[i] = &g_352[3][3][0];
                if (((*g_628) && ((safe_rshift_func_uint8_t_u_s(((l_822 ^= (((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((!(safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_s((((4294967290UL ^ (++(*g_333))) && (((((p_21 == l_844[0]) , l_845[3]) , (safe_mod_func_int64_t_s_s((65529UL > 0UL), (safe_div_func_int64_t_s_s((l_823 , (safe_mod_func_int64_t_s_s(p_21, g_826))), 0x1891D9A1DD73BC7ELL))))) == (-1L)) , l_844[0])) ^ p_21), g_303[4])) ^ p_21) || 0x1D9DF6D4E0F96FB9LL) > (*g_628)), l_817)) == 7UL), p_21))), p_21)), p_21)) , p_21) , p_21)) , p_21), 7)) == 250UL)))
                {
                    int16_t l_854 = (-1L);
                    for (g_30 = 0; (g_30 <= 4); g_30 += 1)
                    {
                        uint32_t l_855 = 0xA693CB0AL;
                        int i, j, k;
                        l_854 |= ((void*)0 == &l_824);
                        l_855 = 0xAB7D64EEL;
                        return g_352[g_279][(g_30 + 1)][g_130];
                    }
                    for (l_816 = 0; l_816 < 9; l_816 += 1)
                    {
                        for (g_446 = 0; g_446 < 6; g_446 += 1)
                        {
                            for (l_788 = 0; l_788 < 4; l_788 += 1)
                            {
                                g_127[l_816][g_446][l_788] = 8L;
                            }
                        }
                    }
                }
                else
                {
                    int64_t **l_861 = (void*)0;
                    uint8_t ***l_864 = &g_564;
                    uint8_t ****l_863 = &l_864;
                    int32_t l_873[4][6] = {{0x00D265CFL,1L,0x00D265CFL,1L,0x00D265CFL,1L},{0x00D265CFL,1L,0x00D265CFL,1L,0x00D265CFL,1L},{0x00D265CFL,1L,0x00D265CFL,1L,0x00D265CFL,1L},{0x00D265CFL,1L,0x00D265CFL,1L,0x00D265CFL,1L}};
                    int32_t *l_874 = &l_818;
                    int8_t *l_903 = &l_760;
                    int32_t l_904 = (-9L);
                    int i, j;
                    if ((l_873[1][2] = (safe_div_func_int32_t_s_s(p_21, (safe_sub_func_int8_t_s_s(((l_862[7] = l_860[5][0]) == l_860[5][0]), ((((l_825 = (((*l_863) = &g_564) != (void*)0)) >= ((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(g_3, (safe_add_func_int32_t_s_s(0x0DFC4773L, p_21)))), (+(~p_21)))) , (*g_628))) , (*l_863)) != (void*)0)))))))
                    {
                        int32_t ** const l_877 = &l_815[3][2][2];
                        int32_t l_884[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_884[i] = 0xD955F57BL;
                        l_874 = (*g_216);
                        (***l_880) = (((safe_sub_func_uint64_t_u_u((((l_877 != &l_815[6][1][0]) == (safe_rshift_func_int16_t_s_s((l_880 == ((safe_add_func_int64_t_s_s(g_252, ((p_21 && (p_21 | p_21)) > (&p_21 != (void*)0)))) , &l_881)), 12))) < (-1L)), p_21)) && p_21) , (void*)0);
                        if (l_884[0])
                            break;
                    }
                    else
                    {
                        int8_t l_885 = 7L;
                        l_885 ^= 0x9C6E1010L;
                        --l_886;
                    }
                    l_904 |= (((((*l_903) = ((g_110 || (safe_mul_func_uint16_t_u_u(((l_787 = (safe_sub_func_int64_t_s_s((safe_add_func_uint32_t_u_u(((*g_628) && 0x76F5655CBAF62974LL), p_21)), (1L || (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(((l_844[0] , l_873[2][0]) , g_826), 3)), (safe_lshift_func_uint8_t_u_s((5UL < 0x5EL), 6)))))))) , 5UL), p_21))) & l_873[1][4])) & g_279) != 0L) == p_21);
                }
                l_905 |= 0x944424B2L;
                if (((l_844[0] >= (safe_lshift_func_uint8_t_u_u((l_919 |= (((safe_sub_func_uint32_t_u_u(((*g_333) = p_21), (((*l_914) = ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(0x01L, (g_303[4] > 0xBE4CL))), ((*l_762) = 2L))) | 0x14L)) > (((((*l_918) = ((g_279 <= ((l_844[0] , l_917) != (void*)0)) || g_129)) , p_21) && p_21) != l_787)))) < l_844[1]) | p_21)), 0))) <= 3L))
                {
                    g_821 = l_920;
                }
                else
                {
                    int32_t ** const *l_938 = &g_216;
                    int32_t ** const **l_937 = &l_938;
                    int32_t ** const ***l_936[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    if (((((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((l_929 = (p_21 , (*g_333))) > ((((safe_mod_func_int64_t_s_s((((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((l_936[5] == &l_880) <= 0x58L), ((*g_628) <= g_234))) , g_939), (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((g_821 = (safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((&g_662 == l_948), p_21)), g_252))) != p_21), l_949)), p_21)))) | p_21) >= g_234), g_826)) , g_207) < g_245) <= 0x51FCBDBA5DD5EF7ELL)), (*g_628))), g_303[5])), l_949)) , 0x584425C0L) , g_120) , (-7L)))
                    {
                        const int16_t l_950 = (-1L);
                        l_951 = l_950;
                        if (p_21)
                            continue;
                    }
                    else
                    {
                        int64_t **l_955 = &l_860[5][0];
                        int64_t ***l_954 = &l_955;
                        int32_t l_963 = 0L;
                        l_819[7][0] |= ((g_952[4] != ((*l_954) = &g_953[0])) && ((l_918 == &g_790) <= (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(((((safe_div_func_int32_t_s_s((-1L), (l_963 |= l_962))) != 5UL) , (l_929 && (**g_332))) && p_21), p_21)), 0))));
                        if (p_21)
                            continue;
                        l_964[1][1][1] = &l_824;
                        if (l_965)
                            continue;
                    }
                    return (*g_628);
                }
                for (l_920 = 0; (l_920 <= 4); l_920 += 1)
                {
                    uint64_t l_982 = 18446744073709551615UL;
                    uint64_t *l_1010 = (void*)0;
                    if (p_21)
                    {
                        int32_t l_979 = 0xB20CA598L;
                        const int32_t *l_980 = &g_821;
                        uint32_t *l_985 = &g_986;
                        int64_t **l_993 = &g_953[1];
                        uint8_t *****l_998 = &g_996;
                        g_939 &= (safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((((+(0xFBL && (safe_rshift_func_int8_t_s_s(((*l_918) = (((((g_303[4] , ((safe_mod_func_int8_t_s_s(l_979, 0x10L)) || p_21)) , ((((*g_216) != l_980) < (!(((*l_985) = ((l_982 >= (safe_mod_func_uint32_t_u_u(((***g_743) = 4294967295UL), p_21))) & (*g_628))) || (**g_332)))) ^ 0xC78B94F3L)) , p_21) ^ p_21) , g_820)), g_129)))) , g_127[4][1][3]) && p_21), 7)) ^ p_21), 6)) , p_21), 0x72FB3830L)), 7));
                        (*l_761) = (*g_216);
                        l_823 = (safe_lshift_func_int16_t_s_s(0xCC8AL, (safe_mul_func_int16_t_s_s(g_790, ((((!(l_992 == ((*l_993) = l_860[5][0]))) , 4294967287UL) >= (((safe_sub_func_uint32_t_u_u(p_21, 0xB9DDFF0CL)) ^ ((((*l_998) = (p_21 , g_996)) != l_999) & l_982)) && l_787)) , g_110)))));
                    }
                    else
                    {
                        uint64_t l_1000 = 18446744073709551615UL;
                        g_41 ^= (-1L);
                        l_819[3][1] = (l_1000 = ((((*g_628) = p_21) , l_982) , (g_41 |= (&l_815[6][1][0] != &g_217))));
                        g_939 = (((p_21 ^ ((safe_mod_func_uint8_t_u_u((l_982 < (((((g_446 , (safe_unary_minus_func_int8_t_s(((safe_mod_func_uint64_t_u_u((safe_div_func_int64_t_s_s((p_21 > p_21), (safe_sub_func_int16_t_s_s((p_21 , (l_1000 >= ((l_1000 & p_21) ^ 1L))), g_129)))), p_21)) , 0xC2L)))) , l_1010) != (void*)0) , 0UL) | l_1000)), p_21)) > 0x11ABE317L)) & g_759) , (-8L));
                    }
                    return (*g_628);
                }
            }
        }
    }
    else
    {
        uint32_t l_1011 = 0x923F88F2L;
        int32_t l_1114 = 0L;
        int64_t *l_1143 = &g_352[3][3][0];
        int32_t *** const *l_1206 = &g_1081[0];
        int32_t *** const **l_1205 = &l_1206;
        const uint8_t *l_1233 = &g_1234[3][2];
        const uint8_t **l_1232 = &l_1233;
        ++l_1011;
        for (g_244 = 0; (g_244 < 3); g_244++)
        {
            uint32_t **l_1044[4] = {&g_333,&g_333,&g_333,&g_333};
            const int32_t l_1047[3][9] = {{0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L,0xD08B4BF6L}};
            int32_t l_1066 = 0x51657857L;
            const int8_t *l_1202 = &l_760;
            int64_t l_1211 = (-3L);
            int i, j;
            for (g_30 = 0; (g_30 > 6); g_30++)
            {
                const uint32_t l_1045 = 0x5936AB0FL;
                int64_t *l_1162 = &g_303[2];
                int32_t l_1212 = 1L;
            }
            l_816 = ((safe_sub_func_int16_t_s_s((((safe_add_func_int32_t_s_s((0x49B3FAFCL <= ((((**l_786) = l_1047[1][7]) | (((((((**g_216) = p_21) == ((****l_1031) &= l_1047[2][5])) & p_21) >= p_21) && ((((l_1219 = 0xB4L) & ((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(0x83L, p_21)), p_21)) , l_1066)) == 0x07429E4DL) >= 0x9CB0BF68L)) , p_21)) , (**l_761))), p_21)) ^ p_21) , p_21), 3UL)) ^ g_939);
        }
        (**l_761) = ((p_21 >= g_120) | (((*g_628) = (((((safe_lshift_func_uint8_t_u_u(((***l_881) || (safe_rshift_func_uint8_t_u_s(0UL, g_233))), (safe_mul_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(((*l_762) &= ((((l_814 = p_21) | 0x0DD41F92L) , (void*)0) == ((*l_1232) = func_38(((6UL < (***l_881)) , g_352[1][1][3]))))), 0x6FDAL)) | (****l_1206)) == 0UL), g_1234[3][2])))) && (****l_880)) | (****l_1206)) && (****l_880)) <= (****l_1206))) ^ (****l_880)));
    }
    (*l_1235) = 0xA18125F9L;
    return (*g_628);
}







static uint32_t func_22(uint32_t p_23, int16_t p_24, uint32_t p_25, const int16_t p_26)
{
    uint64_t l_472[8] = {0x77F97370A3413CF0LL,0UL,0x77F97370A3413CF0LL,0x77F97370A3413CF0LL,0UL,0x77F97370A3413CF0LL,0x77F97370A3413CF0LL,0UL};
    const uint64_t l_507 = 5UL;
    int32_t * const **l_553 = (void*)0;
    int32_t * const ***l_552 = &l_553;
    uint64_t l_556 = 0x5B68036490BDA488LL;
    int32_t l_606 = 1L;
    int64_t *l_617[8] = {&g_303[5],&g_352[0][3][3],&g_352[0][3][3],&g_303[5],&g_352[0][3][3],&g_352[0][3][3],&g_303[5],&g_352[0][3][3]};
    int32_t ***l_630 = &g_216;
    int32_t ****l_629 = &l_630;
    uint8_t **l_703[8] = {&g_565[1],&g_565[1],&g_565[1],&g_565[1],&g_565[1],&g_565[1],&g_565[1],&g_565[1]};
    int8_t l_736 = 1L;
    int32_t *l_739 = &l_606;
    int i;
    for (g_246 = 0; (g_246 > 5); g_246 = safe_add_func_uint32_t_u_u(g_246, 8))
    {
        uint16_t *l_465 = &g_207;
        int32_t *l_475 = &g_245;
        uint32_t **l_487 = &g_333;
        uint32_t l_518[2];
        int32_t ** const *l_569 = &g_216;
        int32_t ** const **l_568 = &l_569;
        uint8_t l_601 = 0x85L;
        uint64_t *l_627 = &l_556;
        int32_t l_660[2][5][3] = {{{0L,(-3L),0L},{0xE3789498L,0xBE8953B0L,1L},{4L,4L,0x641CFA67L},{8L,0xBE8953B0L,0xBE8953B0L},{0x641CFA67L,(-3L),0x58BCACE0L}},{{8L,0xC068EA47L,8L},{4L,0x641CFA67L,0x58BCACE0L},{0xE3789498L,0xE3789498L,0xBE8953B0L},{0L,0x641CFA67L,0x641CFA67L},{0xBE8953B0L,0xC068EA47L,1L}}};
        uint64_t l_738 = 0xBC622A37772B6025LL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_518[i] = 0x96BCE63FL;
        for (g_446 = 4; (g_446 != 11); g_446 = safe_add_func_uint32_t_u_u(g_446, 7))
        {
            const uint8_t * const l_470 = &g_30;
            int32_t l_471[7][10] = {{0x994C7E0CL,(-4L),2L,0x994C7E0CL,0L,2L,2L,0L,0x994C7E0CL,2L},{0L,0L,0xD38D0A74L,(-4L),0L,0L,(-4L),(-4L),0L,0L},{0L,2L,2L,0L,0x994C7E0CL,2L,(-4L),0x994C7E0CL,0x994C7E0CL,(-4L)},{0x994C7E0CL,0L,2L,2L,0L,0x994C7E0CL,2L,(-4L),0x994C7E0CL,0x994C7E0CL},{0L,(-4L),0xD38D0A74L,0L,0L,0xD38D0A74L,(-4L),0L,0L,(-4L)},{0L,0x994C7E0CL,2L,(-4L),0x994C7E0CL,0x994C7E0CL,(-4L),2L,0x994C7E0CL,0L},{0x994C7E0CL,(-4L),2L,0x994C7E0CL,0L,2L,2L,0L,0x994C7E0CL,2L}};
            int32_t *l_503 = (void*)0;
            uint32_t ***l_537 = &g_332;
            uint64_t *l_625 = &g_110;
            uint8_t l_727 = 0x7AL;
            uint8_t l_729 = 0x13L;
            int16_t l_737 = 0x2F05L;
            int i, j;
        }
    }
    g_245 = ((*l_739) ^= ((**g_216) = (-9L)));
    for (g_662 = 0; (g_662 >= 32); g_662 = safe_add_func_int8_t_s_s(g_662, 9))
    {
        uint32_t ****l_744 = &g_743;
        (**g_216) = ((void*)0 != (*g_564));
        if ((*g_217))
            break;
        l_744 = g_742[0][0];
        if (p_24)
            break;
    }
    return g_127[0][0][3];
}







static int32_t func_33(uint8_t * p_34, uint16_t p_35, uint64_t p_36, uint8_t * p_37)
{
    int32_t *l_440 = &g_41;
    int32_t *l_441 = &g_245;
    int32_t *l_442 = &g_41;
    int32_t *l_443 = (void*)0;
    int32_t *l_444 = &g_41;
    int32_t *l_445[7][9] = {{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41},{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41},{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41},{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41},{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41},{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41},{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41}};
    int i, j;
    g_446--;
    return p_35;
}







static uint8_t * func_38(int32_t p_39)
{
    int32_t *l_40 = &g_41;
    int32_t **l_42 = (void*)0;
    int32_t **l_43[1];
    int32_t *l_44[3][1];
    uint8_t *l_45 = &g_30;
    int i, j;
    for (i = 0; i < 1; i++)
        l_43[i] = &l_40;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_44[i][j] = (void*)0;
    }
    l_44[1][0] = l_40;
    return l_45;
}







static uint16_t func_46(int32_t p_47, int32_t * p_48, int32_t ** p_49, const int16_t p_50)
{
    const uint16_t l_361 = 65531UL;
    uint8_t *l_364 = &g_30;
    uint8_t l_365 = 8UL;
    int32_t l_376 = 0x7F98C77AL;
    int32_t l_380[8][1][5] = {{{0x982B9379L,0x982B9379L,0xDA8EE133L,0x4A060F06L,0L}},{{0x1BE66A94L,0x85279585L,0x85279585L,0x1BE66A94L,0x982B9379L}},{{0x1BE66A94L,0x4A060F06L,0x43EEAD4BL,0x43EEAD4BL,0x4A060F06L}},{{0x982B9379L,0x85279585L,0x43EEAD4BL,0xDA8EE133L,0xDA8EE133L}},{{0x85279585L,0x982B9379L,0x85279585L,0x43EEAD4BL,0xDA8EE133L}},{{0x4A060F06L,0x1BE66A94L,0xDA8EE133L,0x1BE66A94L,0x4A060F06L}},{{0x85279585L,0x1BE66A94L,0x982B9379L,0x4A060F06L,0x982B9379L}},{{0x982B9379L,0x982B9379L,0xDA8EE133L,0x4A060F06L,0L}}};
    uint8_t l_409 = 0xBDL;
    int32_t ***l_425 = &g_216;
    int32_t *l_427 = &g_251;
    int i, j, k;
    if ((((*g_333) |= (safe_lshift_func_int8_t_s_s(p_47, (0x4BL != (g_127[4][5][3] ^ (0UL & ((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_130, g_352[3][3][0])), (safe_mod_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s(((((safe_mod_func_uint8_t_u_u(((*l_364) ^= (safe_lshift_func_uint8_t_u_s(l_361, (safe_div_func_uint8_t_u_u((&p_48 == (p_50 , &p_48)), 1UL))))), 1L)) | 5L) < p_50) & p_47), (-1L))) <= l_365) , 0xE4L), p_47)))) != g_234))))))) , (*p_48)))
    {
        int32_t *l_368 = &g_245;
        int32_t *l_369 = &g_41;
        int32_t *l_370 = &g_41;
        int32_t *l_371 = (void*)0;
        int32_t *l_372 = &g_41;
        int32_t *l_373 = (void*)0;
        int32_t *l_374 = &g_41;
        int32_t *l_375 = &g_245;
        int32_t *l_377 = (void*)0;
        int32_t *l_378 = &g_41;
        int32_t *l_379[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        (*g_216) = (*g_216);
        for (g_129 = 0; (g_129 != (-6)); g_129 = safe_sub_func_int32_t_s_s(g_129, 2))
        {
            return p_50;
        }
        (**p_49) |= 3L;
        ++g_381;
    }
    else
    {
        int8_t l_394[1];
        uint32_t l_408 = 1UL;
        uint16_t *l_410 = &g_207;
        int8_t *l_411 = &g_120;
        int32_t ****l_426[4][5] = {{&l_425,(void*)0,(void*)0,&l_425,(void*)0},{&l_425,&l_425,&l_425,&l_425,&l_425},{&l_425,(void*)0,(void*)0,&l_425,(void*)0},{&l_425,&l_425,&l_425,&l_425,&l_425}};
        int64_t *l_428 = &g_352[3][3][0];
        int i, j;
        for (i = 0; i < 1; i++)
            l_394[i] = 0L;
        (*g_217) = ((*p_48) = ((safe_lshift_func_uint16_t_u_u(l_376, 8)) == ((*l_411) = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((((*l_410) &= ((l_394[0] != p_50) > (safe_mod_func_int64_t_s_s(((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((&l_361 != &g_207), (((((*g_333) = (((((void*)0 != &g_303[5]) == ((*l_364) ^= (!0UL))) ^ 0x478976597AFF5056LL) , l_408)) > l_409) , g_243) | g_120))), 0x3F10L)), l_409)) >= l_409), l_394[0])), g_381)) , g_234), g_130)))) < g_130), g_279)) != l_365), g_303[1])), g_233)), 0xE3L)))));
        if ((safe_lshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((*l_428) = ((((((((l_425 = ((safe_mod_func_int32_t_s_s(((**g_216) ^= (p_48 != (void*)0)), (+((*l_410) &= ((l_408 < (safe_div_func_uint8_t_u_u(((*l_364) &= 0xF9L), (safe_mod_func_int8_t_s_s((((((0UL | g_130) || ((g_233 < (18446744073709551613UL | ((0xC510959B66676D68LL ^ p_47) , g_110))) != 0xA4B1L)) < 0x4F48F441L) , (**g_332)) & (*p_48)), g_352[3][4][1]))))) , p_50))))) , l_425)) != &p_49) <= g_279) , p_48) != l_427) , 4294967295UL) != l_380[1][0][0]) ^ 0x5CEC5E8BL)) <= p_50), 0x9E41L)), g_245)) , (void*)0) != (void*)0), 8)))
        {
            uint16_t l_429 = 0xD4C3L;
            l_429++;
            for (g_130 = 0; (g_130 < (-18)); g_130 = safe_sub_func_int16_t_s_s(g_130, 5))
            {
                uint32_t l_436 = 6UL;
                for (l_429 = 0; (l_429 < 60); ++l_429)
                {
                    l_436++;
                    if ((*g_217))
                        break;
                }
                return p_50;
            }
        }
        else
        {
            (*p_48) &= (((***l_425) = (**g_216)) ^ p_50);
            (*p_48) |= (**p_49);
        }
    }
    (*p_49) = (*g_216);
    (*g_216) = (*p_49);
    return p_47;
}







static uint8_t func_57(int64_t p_58, int32_t p_59, int32_t p_60)
{
    uint8_t *l_63[4][10] = {{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,(void*)0,&g_30,(void*)0,&g_30,(void*)0,&g_30,&g_30,&g_30,&g_30}};
    int32_t l_66[2];
    const int32_t l_114 = 0xF8E1F03BL;
    const uint64_t *l_138 = &g_110;
    int32_t l_273 = 0xAB5DB340L;
    int32_t l_305[7];
    uint32_t *l_329 = &g_279;
    uint32_t **l_328 = &l_329;
    int i, j;
    for (i = 0; i < 2; i++)
        l_66[i] = 1L;
    for (i = 0; i < 7; i++)
        l_305[i] = 0xD6A4EE52L;
lbl_72:
    for (g_30 = (-30); (g_30 != 12); ++g_30)
    {
        return g_3;
    }
    if ((0x2646899DL < ((&g_41 == (void*)0) ^ (l_63[3][6] != ((safe_div_func_uint8_t_u_u((p_60 || ((((g_30 <= (0xD97F668CL < l_66[1])) , l_66[0]) ^ 0x691C6C8EL) < g_3)), l_66[1])) , (void*)0)))))
    {
        const uint32_t l_69 = 0x7181CA8FL;
        int32_t l_111 = 0x729FA49BL;
        uint64_t *l_137[10] = {(void*)0,&g_110,(void*)0,&g_110,(void*)0,&g_110,(void*)0,&g_110,(void*)0,&g_110};
        int8_t l_143[6][9][4] = {{{(-1L),0x8EL,4L,(-1L)},{0x36L,0x55L,0xABL,0xADL},{0x36L,6L,4L,0x55L},{(-1L),0xADL,(-1L),(-1L)},{0xF9L,0xADL,0xABL,0x55L},{0x7AL,6L,0x7BL,0xADL},{(-1L),0x55L,0x7BL,(-1L)},{0x7AL,0x8EL,0xABL,0x8EL},{0xF9L,6L,(-1L),0x8EL}},{{(-1L),0x8EL,4L,(-1L)},{0x36L,0x55L,0xABL,0xADL},{0x36L,6L,4L,0x55L},{(-1L),0xADL,(-1L),(-1L)},{0xF9L,0xADL,0xABL,0x55L},{0x7AL,6L,0x7BL,0xADL},{(-1L),0x55L,0x7BL,(-1L)},{0x7AL,0x8EL,0xABL,0x8EL},{0xF9L,6L,(-1L),0x8EL}},{{0xFFL,(-1L),5L,0x93L},{(-1L),0xB0L,0x36L,6L},{(-1L),9L,5L,0xB0L},{0xFFL,6L,0xFFL,0x93L},{4L,6L,0x36L,0xB0L},{0x7BL,9L,0xABL,6L},{0xFFL,0xB0L,0xABL,0x93L},{0x7BL,(-1L),0x36L,(-1L)},{4L,9L,0xFFL,(-1L)}},{{0xFFL,(-1L),5L,0x93L},{(-1L),0xB0L,0x36L,6L},{(-1L),9L,5L,0xB0L},{0xFFL,6L,0xFFL,0x93L},{4L,6L,0x36L,0xB0L},{0x7BL,9L,0xABL,6L},{0xFFL,0xB0L,0xABL,0x93L},{0x7BL,(-1L),0x36L,(-1L)},{4L,9L,0xFFL,(-1L)}},{{0xFFL,(-1L),5L,0x93L},{(-1L),0xB0L,0x36L,6L},{(-1L),9L,5L,0xB0L},{0xFFL,6L,0xFFL,0x93L},{4L,6L,0x36L,0xB0L},{0x7BL,9L,0xABL,6L},{0xFFL,0xB0L,0xABL,0x93L},{0x7BL,(-1L),0x36L,(-1L)},{4L,9L,0xFFL,(-1L)}},{{0xFFL,(-1L),5L,0x93L},{(-1L),0xB0L,0x36L,6L},{(-1L),9L,5L,0xB0L},{0xFFL,6L,0xFFL,0x93L},{4L,6L,0x36L,0xB0L},{0x7BL,9L,0xABL,6L},{0xFFL,0xB0L,0xABL,0x93L},{0x7BL,(-1L),0x36L,(-1L)},{4L,9L,0xFFL,(-1L)}}};
        int32_t l_167 = 0x8EF96A3AL;
        int32_t l_170[7][3][1] = {{{0x6EA00FD1L},{(-8L)},{0L}},{{(-8L)},{0x6EA00FD1L},{(-8L)}},{{0L},{(-8L)},{0x6EA00FD1L}},{{(-8L)},{0L},{(-8L)}},{{0x6EA00FD1L},{(-8L)},{0L}},{{(-8L)},{0x6EA00FD1L},{(-8L)}},{{0L},{(-8L)},{0x6EA00FD1L}}};
        uint32_t l_179 = 4294967287UL;
        int64_t l_187 = 0xAC5C6483FAFD5E73LL;
        int i, j, k;
        if ((safe_add_func_int8_t_s_s(g_41, l_69)))
        {
            uint32_t *l_95[5][8][6] = {{{&g_77,&g_77,(void*)0,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,(void*)0,&g_77,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_77,&g_77},{(void*)0,&g_77,(void*)0,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77},{(void*)0,&g_77,&g_77,&g_77,(void*)0,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77}},{{&g_77,&g_77,(void*)0,&g_77,&g_77,(void*)0},{&g_77,&g_77,&g_77,&g_77,(void*)0,&g_77},{(void*)0,&g_77,(void*)0,(void*)0,(void*)0,&g_77},{&g_77,(void*)0,(void*)0,(void*)0,&g_77,&g_77},{(void*)0,(void*)0,&g_77,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,(void*)0,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77}},{{&g_77,(void*)0,&g_77,(void*)0,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,(void*)0},{&g_77,&g_77,&g_77,(void*)0,&g_77,&g_77},{(void*)0,(void*)0,&g_77,&g_77,&g_77,&g_77},{(void*)0,&g_77,&g_77,&g_77,&g_77,&g_77},{&g_77,&g_77,(void*)0,&g_77,&g_77,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_77,(void*)0,&g_77,(void*)0,&g_77,&g_77}},{{&g_77,(void*)0,&g_77,(void*)0,(void*)0,&g_77},{&g_77,&g_77,(void*)0,(void*)0,(void*)0,(void*)0},{&g_77,&g_77,&g_77,(void*)0,&g_77,&g_77},{(void*)0,&g_77,(void*)0,&g_77,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,&g_77,(void*)0},{(void*)0,&g_77,&g_77,&g_77,(void*)0,&g_77},{(void*)0,&g_77,&g_77,(void*)0,&g_77,&g_77},{&g_77,(void*)0,(void*)0,&g_77,&g_77,&g_77}},{{&g_77,(void*)0,&g_77,(void*)0,&g_77,&g_77},{&g_77,&g_77,&g_77,&g_77,(void*)0,(void*)0},{&g_77,(void*)0,&g_77,(void*)0,&g_77,&g_77},{&g_77,(void*)0,(void*)0,&g_77,&g_77,&g_77},{(void*)0,(void*)0,(void*)0,&g_77,(void*)0,&g_77},{(void*)0,(void*)0,(void*)0,&g_77,&g_77,&g_77},{(void*)0,(void*)0,(void*)0,(void*)0,&g_77,(void*)0},{&g_77,(void*)0,(void*)0,&g_77,(void*)0,&g_77}}};
            int32_t l_117 = 0x95A6083BL;
            uint64_t *l_136 = &g_110;
            int32_t *l_166[9][7] = {{&l_66[1],&l_117,&l_66[1],&l_66[1],&l_66[1],&g_41,&l_117},{&l_66[1],&l_66[1],&l_117,&l_66[1],&l_66[1],&l_66[1],&l_66[1]},{&l_117,&l_66[0],&l_66[1],&l_66[1],&l_117,&l_66[1],&l_66[1]},{&g_41,&l_66[1],&l_66[1],&l_66[1],&g_41,&l_117,&l_117},{&l_66[1],&l_66[1],&l_117,&l_66[1],&g_41,&l_66[1],&g_41},{&g_41,&g_41,&l_66[0],&l_66[1],&l_66[1],&l_66[1],&g_41},{&l_66[1],&l_66[1],&l_66[1],&l_117,&l_66[1],&l_117,&l_117},{&g_41,&l_66[1],&g_41,&g_41,&l_66[1],&g_41,&l_66[1]},{&l_117,&g_41,&g_41,&l_66[1],&l_66[1],&g_41,&l_66[0]}};
            int i, j, k;
            for (p_60 = 3; (p_60 == (-8)); p_60 = safe_sub_func_uint64_t_u_u(p_60, 2))
            {
                uint32_t *l_82 = &g_77;
                int32_t l_157 = 0L;
                for (p_58 = 3; (p_58 >= 0); p_58 -= 1)
                {
                    if (p_58)
                        break;
                    if (p_58)
                        goto lbl_72;
                }
                for (g_41 = 7; (g_41 != (-29)); --g_41)
                {
                    uint16_t l_75 = 0x71EBL;
                    const int32_t * const l_79 = &l_66[1];
                    int32_t l_96 = (-9L);
                    int32_t l_97 = 0x926A5A41L;
                    int32_t *l_107 = (void*)0;
                    int32_t *l_108 = &l_66[1];
                    uint64_t *l_109[5][2][7] = {{{&g_110,&g_110,&g_110,&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,(void*)0,&g_110,&g_110,&g_110}},{{&g_110,(void*)0,&g_110,&g_110,&g_110,(void*)0,&g_110},{&g_110,&g_110,&g_110,&g_110,&g_110,&g_110,(void*)0}},{{&g_110,&g_110,&g_110,(void*)0,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110,&g_110,&g_110,&g_110}},{{&g_110,&g_110,&g_110,&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110,&g_110,&g_110,&g_110}},{{&g_110,&g_110,&g_110,&g_110,&g_110,&g_110,&g_110},{&g_110,(void*)0,&g_110,&g_110,&g_110,&g_110,&g_110}}};
                    uint16_t *l_152 = &l_75;
                    int8_t *l_158 = &g_120;
                    int32_t **l_159 = &l_108;
                    int i, j, k;
                    if (l_75)
                    {
                        uint32_t *l_76 = &g_77;
                        int32_t *l_78 = &l_66[1];
                        const int32_t *l_81 = &l_66[1];
                        const int32_t **l_80 = &l_81;
                        (*l_78) |= (((*l_76) = 0x42895483L) <= p_58);
                        (*l_80) = l_79;
                    }
                    else
                    {
                        uint32_t *l_94[7];
                        uint32_t **l_93 = &l_94[5];
                        int32_t *l_99 = &l_66[1];
                        int32_t **l_98 = &l_99;
                        uint8_t **l_101 = &l_63[2][1];
                        uint8_t ***l_100 = &l_101;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_94[i] = (void*)0;
                        l_97 = (l_82 == ((0x943CDC1821526695LL & (safe_rshift_func_int16_t_s_u(((p_60 & (safe_add_func_int16_t_s_s(g_41, (safe_mod_func_int8_t_s_s(p_59, (*l_79)))))) < (safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((l_96 ^= ((((*l_93) = l_82) == l_95[3][3][5]) , (&p_59 != (void*)0))), 0xB846L)) , 0x85L), g_30))), 12))) , (void*)0));
                        (*l_98) = &g_41;
                        if (p_59)
                            goto lbl_72;
                        (*l_100) = &l_63[3][6];
                    }
                    g_120 = (((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((!(((*l_108) = p_60) <= (0xE3L ^ 253UL))) > 0x1E569BB2L) | (l_111 = l_69)), (safe_mul_func_uint8_t_u_u((0x3D5FL < (l_114 || (safe_add_func_int8_t_s_s((l_117 == (((safe_mul_func_uint16_t_u_u(65535UL, p_60)) > g_77) && 0xC3L)), p_60)))), p_59)))), p_58)) && 0xAF45EF5D7AD18499LL) == 0xC8L);
                    for (l_75 = 0; (l_75 <= 1); l_75 += 1)
                    {
                        int32_t *l_128[7][10] = {{(void*)0,&l_66[l_75],&l_117,&l_66[1],&l_66[1],&l_117,&l_66[l_75],(void*)0,(void*)0,&l_111},{&l_66[l_75],&l_111,&l_117,(void*)0,(void*)0,&l_66[l_75],&l_66[1],&l_66[1],(void*)0,&l_66[1]},{(void*)0,&l_66[1],&l_117,(void*)0,&l_117,&l_66[1],(void*)0,(void*)0,&l_117,(void*)0},{&l_66[1],&l_111,&l_117,&l_111,&l_66[1],(void*)0,&l_66[1],&l_66[l_75],&l_66[l_75],&l_66[1]},{(void*)0,&l_111,&l_66[1],&l_66[1],&l_111,(void*)0,&l_117,&l_111,(void*)0,(void*)0},{&l_111,&l_117,(void*)0,(void*)0,&l_66[l_75],&l_66[1],&l_66[1],(void*)0,&l_66[1],&l_66[1]},{&l_111,&l_66[l_75],&l_66[l_75],&l_66[l_75],&l_111,(void*)0,&l_66[1],(void*)0,(void*)0,&l_66[l_75]}};
                        int i, j;
                        g_129 &= (l_66[l_75] >= (safe_lshift_func_int16_t_s_s((0x67763B3A31468BD1LL == (0x46AF0F77L != (p_59 < (p_59 && (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((void*)0 != &g_41) | (g_127[5][1][3] = 0xC626D9ACL)), (((p_60 == p_59) >= l_117) & g_77))), (-1L))))))), 12)));
                        g_130 = ((*l_108) |= g_3);
                    }
                    (*l_159) = (((~((*l_79) < ((*l_158) = (safe_mod_func_uint32_t_u_u(g_129, (safe_sub_func_uint32_t_u_u((((l_137[8] = l_136) == l_138) , (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((l_143[4][8][0] == ((safe_mod_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((((g_77 == (safe_rshift_func_uint8_t_u_s((*l_79), 7))) <= ((*l_152)++)) & ((-10L) >= ((((l_157 = ((safe_sub_func_int8_t_s_s(((l_69 >= g_41) , 0xDCL), 0x62L)) | 1L)) , g_130) <= 0xC5D1B8DA6205CD23LL) >= 0x335C488BL))) && p_58), l_117)), p_59)) == l_143[2][2][2]), l_66[1])) ^ l_117)), p_59)), g_127[5][1][3]))), l_143[4][8][0]))))))) | 0x637DL) , &g_41);
                }
                for (l_111 = 6; (l_111 <= 7); l_111++)
                {
                    return g_127[5][1][3];
                }
            }
            l_167 &= (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((l_111 |= g_110), (-7L))), 6));
        }
        else
        {
            uint16_t l_225 = 1UL;
            int32_t l_227 = 1L;
            int32_t *l_229 = &l_167;
            if ((safe_mod_func_int8_t_s_s(((l_170[3][0][0] && (((0L ^ (safe_mod_func_uint32_t_u_u(p_58, (safe_rshift_func_uint8_t_u_s(((l_170[3][0][0] < ((0UL < l_167) >= 5UL)) , ((safe_lshift_func_int8_t_s_s(((0xB67EAC4BL || (((safe_rshift_func_int8_t_s_u((((((0xBE248804L != l_143[0][0][2]) < l_66[1]) && p_60) , g_30) == l_179), l_66[1])) , 0xC7A1140AC0B4975FLL) , l_170[1][0][0])) == 0x58L), g_129)) , p_58)), g_41))))) , g_77) | (-1L))) || l_111), l_111)))
            {
                int32_t *l_181[3][9][9] = {{{&l_66[1],(void*)0,&l_170[2][1][0],&g_41,&l_66[1],&l_111,&l_167,&l_66[1],&l_111},{&l_111,&l_170[5][1][0],(void*)0,&l_170[4][0][0],&l_66[1],(void*)0,&l_66[1],&l_167,&l_111},{&g_41,(void*)0,&l_111,&l_66[1],&l_170[3][0][0],(void*)0,(void*)0,&l_66[0],&l_167},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_66[1],&l_66[1],&l_167},{&l_170[2][1][0],&l_66[1],&l_66[0],(void*)0,&l_167,&l_111,&l_66[1],&l_66[1],&l_66[1]},{&l_66[1],&l_66[0],&l_170[3][0][0],&g_41,&l_170[3][0][0],&l_66[0],&l_66[1],(void*)0,&l_167},{&l_66[1],&l_66[1],&l_111,&l_167,&l_170[2][1][0],&l_111,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_167,&l_66[0],&l_66[0],&l_167,&l_66[1],(void*)0,(void*)0},{&g_41,&l_170[3][0][0],(void*)0,&l_170[3][0][0],&g_41,&l_66[1],&l_167,&l_66[1],&l_111}},{{(void*)0,&l_66[1],&l_170[3][0][0],&l_66[1],&l_167,&l_66[1],(void*)0,&l_66[1],(void*)0},{(void*)0,&g_41,&g_41,&l_111,&g_41,&l_66[1],&g_41,&l_66[0],(void*)0},{&l_170[4][0][0],&l_167,&l_167,&l_66[1],(void*)0,(void*)0,&l_66[1],&l_167,&l_167},{(void*)0,&g_41,&l_170[3][0][0],&l_66[1],(void*)0,&g_41,(void*)0,&l_66[1],&l_66[1]},{(void*)0,&l_66[1],&l_167,(void*)0,&l_167,(void*)0,&g_41,(void*)0,&l_167},{&g_41,&g_41,(void*)0,&l_167,&l_111,&g_41,&l_111,&l_111,&l_167},{(void*)0,&l_167,&l_66[1],&l_170[0][1][0],(void*)0,(void*)0,(void*)0,(void*)0,&l_111},{&l_66[1],&g_41,(void*)0,&l_170[2][1][0],&l_66[1],&l_66[0],(void*)0,&l_167,&l_111},{&l_66[1],&l_66[1],&l_66[1],&l_66[1],&g_41,&l_170[1][0][0],&l_167,&l_170[1][0][0],&g_41}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_41,&g_41,&l_167,&l_66[0]},{&l_167,&g_41,&l_167,&l_167,&l_111,&l_111,&l_66[1],&l_66[1],&l_111},{&l_66[1],(void*)0,&l_170[3][0][0],&l_170[3][0][0],(void*)0,&l_167,&l_167,&g_41,(void*)0},{&l_170[5][1][0],&l_170[3][2][0],&l_170[1][0][0],&l_167,&g_41,&g_41,&l_66[0],&l_66[1],&l_111},{&l_170[2][1][0],&l_170[2][0][0],&l_111,&g_41,&l_170[2][0][0],&l_167,&l_66[0],(void*)0,(void*)0},{(void*)0,&l_66[1],&l_66[1],&l_170[3][0][0],&l_111,&l_111,(void*)0,&l_170[6][2][0],&l_170[6][2][0]},{&l_66[0],&g_41,&l_66[0],(void*)0,&l_66[0],&g_41,&l_66[0],&l_111,&l_111},{(void*)0,&l_170[6][2][0],&l_111,&l_167,&l_167,&l_170[1][0][0],&l_66[0],&l_170[3][2][0],&g_41},{&g_41,&l_111,&l_111,&l_111,&g_41,&l_111,&l_167,&l_111,&l_170[4][1][0]}}};
                int32_t **l_180 = &l_181[1][5][8];
                int i, j, k;
                (*l_180) = &g_41;
            }
            else
            {
                int32_t l_184 = 0x78575912L;
                int32_t l_226[2];
                uint16_t l_228 = 65535UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_226[i] = 0xD03BD80FL;
                for (p_59 = 0; (p_59 <= 9); p_59++)
                {
                    int32_t *l_200 = &l_111;
                    int32_t l_248 = (-1L);
                    int32_t l_249 = 0xD6390605L;
                    int32_t l_250 = 0xE8FEB3E2L;
                    if (l_184)
                        break;
                    (*l_200) ^= (safe_div_func_uint16_t_u_u(l_187, ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((p_58 <= (&g_77 != (void*)0)) , p_59), (safe_sub_func_int8_t_s_s(p_59, (((-8L) > (0UL == (~((g_120 = (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((g_127[5][1][3] = p_60))), 250UL))) , p_60)))) , g_129))))), 14)), l_66[0])) && g_3)));
                    if ((safe_lshift_func_int16_t_s_s(g_127[3][3][0], 12)))
                    {
                        uint8_t l_212 = 8UL;
                        int8_t *l_213 = &g_130;
                        int32_t ***l_218[10] = {&g_216,&g_216,&g_216,&g_216,&g_216,&g_216,&g_216,&g_216,&g_216,&g_216};
                        int32_t *l_223 = (void*)0;
                        int32_t *l_224 = &l_184;
                        int i;
                        l_228 = (((safe_mul_func_uint8_t_u_u(((g_207 ^= (g_110 != (safe_rshift_func_int16_t_s_s(g_41, 15)))) || (g_41 & (safe_div_func_uint64_t_u_u((((safe_mod_func_int8_t_s_s(((*l_213) = (0x2F78L & l_212)), l_212)) || ((((safe_rshift_func_uint8_t_u_u(((g_216 = g_216) == ((((safe_lshift_func_int8_t_s_s(((*l_213) = (((((*l_224) = (safe_add_func_int64_t_s_s(g_127[2][0][1], (((((p_60 < (-9L)) , 8L) <= (*g_217)) , &g_217) == &l_200)))) , (-10L)) , 1L) | g_30)), p_59)) >= p_59) && l_143[4][8][0]) , &g_217)), l_225)) , p_58) > 1UL) == 0xCF3F8CE4E9EF1CF8LL)) != 252UL), l_226[1])))), l_226[1])) && p_58) || l_227);
                        l_229 = &l_170[0][0][0];
                    }
                    else
                    {
                        int32_t *l_230 = &l_226[1];
                        int32_t *l_231 = &l_111;
                        int32_t *l_232[8][9] = {{&l_111,&l_66[1],&g_41,(void*)0,&l_66[1],(void*)0,&g_41,&l_66[1],&l_111},{&l_111,&l_66[1],&g_41,(void*)0,&l_66[1],(void*)0,&g_41,&l_66[1],&l_111},{&l_111,&l_66[1],&g_41,(void*)0,&l_66[1],(void*)0,&g_41,&l_66[1],&l_111},{&l_111,&l_66[1],&g_41,(void*)0,&l_66[1],(void*)0,&g_41,&l_66[1],&l_111},{&l_111,&l_66[1],&g_41,(void*)0,&l_66[1],(void*)0,&g_41,&l_66[1],&l_111},{&l_111,&l_66[1],&g_41,(void*)0,&l_66[1],(void*)0,&g_41,&l_66[1],&l_111},{&l_111,&l_66[1],&g_41,(void*)0,&l_66[1],(void*)0,&g_41,&l_66[1],&l_111},{&l_111,&l_66[1],&g_41,(void*)0,&l_66[1],(void*)0,&g_41,&l_66[1],&l_111}};
                        int i, j;
                        g_234++;
                    }
                    for (g_120 = (-16); (g_120 <= 19); g_120 = safe_add_func_uint8_t_u_u(g_120, 1))
                    {
                        int64_t l_239[6][8] = {{0xBB3E879FE9B06FFBLL,1L,0xBB3E879FE9B06FFBLL,0xBB3E879FE9B06FFBLL,1L,0xBB3E879FE9B06FFBLL,0xBB3E879FE9B06FFBLL,1L},{1L,0xBB3E879FE9B06FFBLL,0xBB3E879FE9B06FFBLL,1L,0xBB3E879FE9B06FFBLL,0xBB3E879FE9B06FFBLL,1L,0xBB3E879FE9B06FFBLL},{1L,1L,0xDB586E15FCF3D8B4LL,1L,1L,1L,0xBB3E879FE9B06FFBLL,0xBB3E879FE9B06FFBLL},{0xDB586E15FCF3D8B4LL,0xBB3E879FE9B06FFBLL,0xDB586E15FCF3D8B4LL,0xDB586E15FCF3D8B4LL,0xBB3E879FE9B06FFBLL,0xDB586E15FCF3D8B4LL,0xDB586E15FCF3D8B4LL,0xBB3E879FE9B06FFBLL},{0xBB3E879FE9B06FFBLL,0xDB586E15FCF3D8B4LL,0xDB586E15FCF3D8B4LL,0xBB3E879FE9B06FFBLL,0xDB586E15FCF3D8B4LL,0xDB586E15FCF3D8B4LL,0xBB3E879FE9B06FFBLL,0xDB586E15FCF3D8B4LL},{0xBB3E879FE9B06FFBLL,0xBB3E879FE9B06FFBLL,1L,0xBB3E879FE9B06FFBLL,0xBB3E879FE9B06FFBLL,1L,0xBB3E879FE9B06FFBLL,0xBB3E879FE9B06FFBLL}};
                        int32_t *l_240 = &l_66[1];
                        int32_t *l_241 = &g_41;
                        int32_t *l_242[6][9] = {{&l_66[1],&l_66[1],(void*)0,(void*)0,&l_66[1],&l_66[1],(void*)0,&l_226[1],&l_66[1]},{&l_170[3][0][0],&l_226[1],&l_170[3][0][0],(void*)0,&l_226[1],(void*)0,&l_170[3][0][0],&l_226[1],&l_170[3][0][0]},{&l_66[1],&l_226[1],(void*)0,&l_66[1],&l_66[1],(void*)0,(void*)0,&l_66[1],&l_66[1]},{(void*)0,&l_226[1],(void*)0,(void*)0,&l_111,(void*)0,(void*)0,&l_226[1],(void*)0},{&l_66[1],&l_66[1],(void*)0,(void*)0,&l_66[1],&l_66[1],(void*)0,&l_226[1],&l_66[1]},{&l_170[3][0][0],&l_226[1],&l_170[3][0][0],(void*)0,&l_226[1],(void*)0,&l_170[3][0][0],&l_226[1],&l_170[3][0][0]}};
                        int i, j;
                        --g_252;
                        if (l_170[0][1][0])
                            continue;
                    }
                }
                (*g_216) = (*g_216);
                (**g_216) = (-8L);
            }
            for (g_120 = 0; (g_120 > (-15)); --g_120)
            {
                const uint16_t l_272 = 0x40B6L;
                int32_t l_275 = (-1L);
                int16_t l_276 = 0L;
            }
            for (l_187 = 0; (l_187 >= (-9)); --l_187)
            {
                if ((**g_216))
                    break;
            }
        }
    }
    else
    {
        int32_t *l_286 = &g_251;
        int32_t l_299[3][1][1];
        int64_t *l_302 = &g_303[4];
        uint64_t *l_304[5][6][4] = {{{&g_252,&g_252,&g_252,(void*)0},{&g_252,&g_252,&g_252,&g_252},{&g_252,&g_110,&g_252,&g_252},{&g_252,&g_252,&g_252,(void*)0},{&g_252,&g_252,&g_252,&g_252},{&g_110,&g_110,&g_252,&g_252}},{{&g_252,&g_110,&g_252,&g_252},{&g_252,&g_252,&g_252,&g_252},{&g_252,&g_252,&g_252,&g_252},{&g_252,&g_110,&g_252,&g_252},{&g_252,&g_110,&g_110,&g_252},{&g_252,&g_252,&g_252,(void*)0}},{{&g_252,&g_252,&g_252,&g_252},{&g_252,&g_110,&g_252,&g_252},{&g_252,&g_252,&g_252,(void*)0},{&g_252,&g_252,&g_252,&g_252},{&g_110,&g_110,&g_252,&g_252},{&g_252,&g_110,&g_252,&g_252}},{{&g_252,&g_252,&g_252,&g_252},{&g_252,&g_252,&g_252,&g_252},{&g_252,&g_110,&g_252,&g_252},{&g_252,&g_110,&g_110,&g_252},{&g_252,&g_252,&g_252,(void*)0},{&g_252,&g_252,&g_252,&g_252}},{{&g_252,&g_110,&g_252,&g_252},{&g_252,&g_252,&g_252,(void*)0},{&g_252,&g_252,&g_252,&g_252},{&g_110,&g_252,&g_110,&g_252},{&g_252,&g_252,&g_110,&g_252},{&g_252,&g_110,&g_252,&g_110}}};
        uint8_t *l_306 = &g_30;
        int32_t l_340 = (-4L);
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_299[i][j][k] = 0x09B306FAL;
            }
        }
        p_59 = ((safe_mul_func_uint16_t_u_u(((((((((l_305[6] = (((((*l_286) = g_234) , (0xB2L | (p_60 || (safe_mod_func_uint8_t_u_u(((p_60 , (l_66[1] = ((18446744073709551615UL & (safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((((*l_302) &= (l_299[0][0][0] , (8UL ^ (safe_mod_func_int32_t_s_s(p_59, ((*g_217) = 0xF57F58CEL)))))) ^ 0L), (-7L))) , 0x1DDC82D9L), 1L)), 0x27434CF9L)), p_60)), l_299[1][0][0]))) <= g_127[5][1][3]))) ^ p_58), l_273))))) <= g_130) > p_58)) , 1UL) , l_306) != (void*)0) <= g_244) , 0xB7L) && (-1L)) >= l_273), p_58)) <= g_129);
        for (g_251 = (-26); (g_251 <= (-8)); g_251++)
        {
            uint8_t l_315 = 7UL;
            uint32_t *l_325 = &g_234;
            uint32_t ***l_330 = (void*)0;
            uint32_t ***l_331[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_339[1];
            int i;
            for (i = 0; i < 1; i++)
                l_339[i] = &l_305[3];
            for (g_234 = (-6); (g_234 <= 54); g_234++)
            {
                for (g_41 = 3; (g_41 >= 0); g_41 -= 1)
                {
                    for (g_252 = 0; (g_252 <= 3); g_252 += 1)
                    {
                        int32_t *l_313 = (void*)0;
                        int32_t *l_314 = &l_66[0];
                        int32_t **l_316 = &l_313;
                        int i, j, k;
                        (*l_314) = (safe_sub_func_int16_t_s_s(g_127[(g_41 + 5)][(g_41 + 1)][g_252], 6L));
                        if (l_315)
                            break;
                        (*l_316) = ((*g_216) = (*g_216));
                    }
                    return p_59;
                }
            }
            (*g_217) = (safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((((((g_127[1][3][0] , func_38(((4294967294UL || ((++(*l_325)) , (l_340 ^= ((*g_217) = (0xE7ABA4B1L | (((l_328 = l_328) != g_332) & (((safe_mul_func_int8_t_s_s((((~((safe_rshift_func_int8_t_s_u(0xEFL, 6)) ^ 0xE2035544L)) < l_299[0][0][0]) < (l_286 != l_329)), 3UL)) != g_252) == (-10L)))))))) || g_245))) != l_63[3][6]) , p_58) < p_58) >= 0x24ED4AC3L), p_60)) , 8L), p_60)), g_207)), 1UL));
        }
    }
    return p_59;
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
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_127[i][j][k], "g_127[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_303[i], "g_303[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_352[i][j][k], "g_352[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_652, "g_652", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_826, "g_826", print_hash_value);
    transparent_crc(g_939, "g_939", print_hash_value);
    transparent_crc(g_986, "g_986", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1234[i][j], "g_1234[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1259[i], "g_1259[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1293, "g_1293", print_hash_value);
    transparent_crc(g_1325, "g_1325", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1447[i][j], "g_1447[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1585, "g_1585", print_hash_value);
    transparent_crc(g_1626, "g_1626", print_hash_value);
    transparent_crc(g_1720, "g_1720", print_hash_value);
    transparent_crc(g_1873, "g_1873", print_hash_value);
    transparent_crc(g_1905, "g_1905", print_hash_value);
    transparent_crc(g_1908, "g_1908", print_hash_value);
    transparent_crc(g_2007, "g_2007", print_hash_value);
    transparent_crc(g_2031, "g_2031", print_hash_value);
    transparent_crc(g_2050, "g_2050", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
