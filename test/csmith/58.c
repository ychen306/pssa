// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = AC26C4C1
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
   int8_t f0;
   uint32_t f1;
   const signed f2 : 6;
};


static int32_t g_3 = 0xA3DE81D5L;
static int32_t g_4 = 2L;
static uint64_t g_22 = 1UL;
static uint16_t g_43 = 0x64F7L;
static int16_t g_74 = (-10L);
static int16_t g_87[2] = {0x6AC6L,0x6AC6L};
static int64_t g_91[3] = {0x2D0685684CF74835LL,0x2D0685684CF74835LL,0x2D0685684CF74835LL};
static uint32_t g_104 = 0x76A924D9L;
static int8_t g_122 = 0x8AL;
static uint32_t g_129[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static uint32_t g_131 = 8UL;
static uint64_t g_184[6] = {4UL,4UL,4UL,4UL,4UL,4UL};
static int16_t g_185[3][6][8] = {{{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0xBA57L,0L,0L,0xBA57L,0L,0L},{0L,0L,0L,0L,0L,0xBA57L,0xBA57L,0L},{0L,0xBA57L,0xBA57L,0L,0xBA57L,0xBA57L,0L,0xBA57L},{0L,0L,0L,0L,0L,0L,0L,0L}},{{0xBA57L,0L,0xBA57L,0xBA57L,0L,0xBA57L,0xBA57L,0L},{0L,0xBA57L,0xBA57L,0L,0xBA57L,0xBA57L,0L,0xBA57L},{0L,0L,0L,0L,0L,0L,0L,0L},{0xBA57L,0L,0xBA57L,0xBA57L,0L,0xBA57L,0xBA57L,0L},{0L,0xBA57L,0xBA57L,0L,0xBA57L,0xBA57L,0L,0xBA57L},{0L,0L,0L,0L,0L,0L,0L,0L}},{{0xBA57L,0L,0xBA57L,0xBA57L,0L,0xBA57L,0xBA57L,0L},{0L,0xBA57L,0xBA57L,0L,0xBA57L,0xBA57L,0L,0xBA57L},{0L,0L,0L,0L,0L,0L,0L,0L},{0xBA57L,0L,0xBA57L,0xBA57L,0L,0xBA57L,0xBA57L,0L},{0L,0xBA57L,0xBA57L,0L,0xBA57L,0xBA57L,0L,0xBA57L},{0L,0L,0L,0L,0L,0L,0L,0L}}};
static uint8_t g_201 = 255UL;
static int32_t g_221 = 2L;
static int16_t g_227 = 0x19E2L;
static int32_t *g_232[5][4][5] = {{{&g_3,&g_3,&g_3,&g_3,&g_221},{&g_4,&g_3,&g_4,&g_3,&g_3},{(void*)0,&g_4,&g_3,&g_3,&g_221},{(void*)0,&g_4,&g_3,&g_3,&g_3}},{{&g_4,&g_3,&g_4,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_221},{&g_4,&g_3,&g_4,&g_3,&g_3},{(void*)0,&g_4,&g_3,&g_3,&g_221}},{{(void*)0,&g_4,&g_3,&g_3,&g_3},{&g_4,&g_3,&g_4,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_221},{&g_4,&g_3,&g_4,&g_3,&g_3}},{{(void*)0,&g_4,&g_3,&g_3,&g_221},{(void*)0,&g_4,&g_3,&g_3,&g_3},{&g_4,&g_3,&g_4,&g_3,&g_3},{(void*)0,&g_3,&g_3,(void*)0,&g_221}},{{&g_4,&g_4,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_4,(void*)0,&g_4},{(void*)0,(void*)0,&g_4,(void*)0,&g_3},{&g_3,&g_4,(void*)0,(void*)0,(void*)0}}};
static union U0 g_244 = {0x6AL};
static const union U0 g_246[5] = {{-1L},{-1L},{-1L},{-1L},{-1L}};
static const union U0 *g_245 = &g_246[1];
static uint64_t *g_294[6] = {&g_184[4],&g_184[4],&g_184[4],&g_184[4],&g_184[4],&g_184[4]};
static uint64_t **g_293 = &g_294[2];
static uint8_t g_312 = 1UL;
static uint64_t g_321 = 18446744073709551615UL;
static uint32_t g_325 = 0xAB4E013FL;
static uint32_t g_452 = 0x8AD1224FL;
static int32_t g_552[8][7][3] = {{{0xFC5A2E17L,0L,(-6L)},{1L,(-2L),0x2679E989L},{1L,0x24FB3AE4L,1L},{0x2679E989L,(-2L),1L},{(-6L),0L,0xFC5A2E17L},{(-1L),(-8L),0L},{0xD5A5CD8AL,5L,(-5L)}},{{(-1L),0x5A303A25L,1L},{(-6L),0L,(-1L)},{0x2679E989L,0xF5489800L,0x64173A46L},{1L,0L,(-1L)},{1L,0L,1L},{0xFC5A2E17L,(-1L),(-5L)},{0L,(-1L),0L}},{{(-5L),(-1L),0xFC5A2E17L},{1L,0L,1L},{(-1L),0L,1L},{0x64173A46L,0xF5489800L,0x2679E989L},{(-1L),0L,(-6L)},{1L,0x5A303A25L,(-1L)},{(-5L),5L,0xD5A5CD8AL}},{{0L,(-8L),(-1L)},{0xFC5A2E17L,0L,(-6L)},{1L,(-2L),0x2679E989L},{1L,0x24FB3AE4L,1L},{0x2679E989L,(-2L),1L},{(-6L),0L,0xFC5A2E17L},{(-1L),(-8L),0L}},{{0xD5A5CD8AL,5L,(-5L)},{(-1L),0x5A303A25L,1L},{(-6L),0L,(-1L)},{0x2679E989L,0xF5489800L,0x64173A46L},{1L,0L,(-1L)},{1L,0L,1L},{0xFC5A2E17L,(-1L),(-5L)}},{{0L,(-1L),0L},{(-5L),(-1L),0xFC5A2E17L},{1L,0L,1L},{(-1L),0L,1L},{0x64173A46L,0xF5489800L,0x2679E989L},{(-1L),0L,(-6L)},{1L,0x5A303A25L,(-1L)}},{{(-5L),5L,0xD5A5CD8AL},{0L,(-8L),(-1L)},{0xFC5A2E17L,0L,(-6L)},{1L,(-2L),0x2679E989L},{1L,0x24FB3AE4L,1L},{0x2679E989L,(-2L),1L},{(-6L),0L,0xFC5A2E17L}},{{(-1L),(-8L),0L},{0xD5A5CD8AL,5L,(-5L)},{(-1L),0x64173A46L,(-1L)},{1L,0xD5A5CD8AL,0L},{0L,0x091D9423L,0L},{0xD1CF9E49L,0x239BC3E9L,0L},{0x5E152BCCL,(-1L),(-1L)}}};
static uint32_t *g_675[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint32_t **g_674 = &g_675[3];
static uint32_t *** const g_673[8] = {&g_674,&g_674,&g_674,&g_674,&g_674,&g_674,&g_674,&g_674};
static int8_t g_688 = 1L;
static const int8_t *g_714 = (void*)0;
static const int8_t **g_713[6] = {&g_714,&g_714,&g_714,&g_714,&g_714,&g_714};
static uint16_t g_778[6][1][9] = {{{0xF2A0L,0x7049L,0x7049L,0xF2A0L,0x7049L,0x7049L,0xF2A0L,0x7049L,0x7049L}},{{0xF2A0L,0x7049L,0x7049L,0xF2A0L,0x7049L,0x7049L,0xF2A0L,0x7049L,0x7049L}},{{0xF2A0L,0x7049L,0x7049L,0xF2A0L,0x7049L,0x7049L,0xF2A0L,0x7049L,0x7049L}},{{0xF2A0L,0x7049L,0x7049L,0xF2A0L,0x7049L,0x7049L,0xF2A0L,0x7049L,0x7049L}},{{0xF2A0L,0x7049L,0x7049L,0xF2A0L,0x7049L,0x7049L,0xF2A0L,0x7049L,0x7049L}},{{0xF2A0L,0x7049L,0x7049L,0xF2A0L,0x7049L,0x7049L,0xF2A0L,0x7049L,0x7049L}}};
static uint64_t g_818 = 18446744073709551609UL;
static int32_t g_918[9][10] = {{0x41458FF3L,0x768B44F9L,0xE0F6B436L,0xCD0F8688L,0x2A215304L,7L,7L,0x2A215304L,0xCD0F8688L,0xE0F6B436L},{7L,7L,0x2A215304L,0xCD0F8688L,0xE0F6B436L,0x768B44F9L,0x41458FF3L,0x8D2B3BC5L,0x41458FF3L,0x768B44F9L},{0xC0681D23L,0x2A215304L,0x69848416L,0x2A215304L,0xC0681D23L,0L,0x41458FF3L,7L,0L,0L},{0xCD0F8688L,7L,0x00C8898EL,0x768B44F9L,0x768B44F9L,0x00C8898EL,7L,0xCD0F8688L,0x69848416L,0L},{0x8D2B3BC5L,0x768B44F9L,7L,(-1L),0xC0681D23L,0x41458FF3L,0xC0681D23L,(-1L),7L,0x768B44F9L},{0x00C8898EL,0L,7L,0xC0681D23L,0xE0F6B436L,(-1L),0xCD0F8688L,0xCD0F8688L,(-1L),0xE0F6B436L},{0L,0x00C8898EL,0x00C8898EL,0L,0x2A215304L,(-1L),0x8D2B3BC5L,7L,0xE0F6B436L,7L},{0x00C8898EL,0x41458FF3L,0x69848416L,7L,0x69848416L,0x41458FF3L,0x00C8898EL,0x8D2B3BC5L,0xE0F6B436L,0L},{0x8D2B3BC5L,(-1L),0x2A215304L,0L,0x00C8898EL,0x00C8898EL,0L,0x2A215304L,(-1L),0x8D2B3BC5L}};
static uint8_t g_919 = 0xC4L;
static uint64_t g_1006 = 18446744073709551615UL;
static uint64_t *g_1096 = &g_1006;
static int16_t *g_1117 = (void*)0;
static uint32_t g_1207 = 0x78FB9F37L;
static int8_t *g_1214[3][6] = {{&g_244.f0,&g_688,&g_244.f0,&g_244.f0,&g_688,&g_244.f0},{&g_688,&g_244.f0,&g_244.f0,&g_244.f0,&g_688,&g_688},{&g_244.f0,&g_244.f0,&g_244.f0,&g_244.f0,&g_688,&g_244.f0}};
static int8_t **g_1213 = &g_1214[1][1];
static int8_t ***g_1212 = &g_1213;
static int8_t ****g_1211 = &g_1212;
static int16_t g_1280 = (-4L);
static uint8_t *g_1328 = &g_312;
static uint8_t **g_1327 = &g_1328;
static uint64_t ***g_1346 = &g_293;
static uint64_t ****g_1345 = &g_1346;
static int32_t g_1402 = 0x01BD5E7CL;
static uint8_t g_1403 = 255UL;
static uint64_t ** const **g_1407 = (void*)0;
static int32_t g_1478 = 0x3D3957ADL;
static uint32_t g_1508 = 18446744073709551607UL;
static int64_t g_1512 = 0x60D07A379AC5E0C2LL;
static union U0 *g_1528 = &g_244;
static union U0 **g_1527 = &g_1528;



static const uint64_t func_1(void);
static int32_t func_5(const int64_t p_6, int64_t p_7, const uint64_t p_8, uint32_t p_9);
static uint16_t func_12(uint64_t p_13, const int16_t p_14, uint64_t p_15, uint8_t p_16, int64_t p_17);
static int16_t func_26(uint64_t * p_27);
static uint64_t * func_28(uint64_t * p_29, int32_t p_30, uint32_t p_31, uint64_t * p_32, const uint64_t * p_33);
static uint64_t * func_34(int32_t p_35);
static int32_t func_36(uint64_t * p_37, uint16_t p_38, int64_t p_39, uint64_t p_40);
static int32_t * func_46(union U0 p_47, uint32_t p_48, uint16_t p_49, uint8_t p_50);
static union U0 func_51(int8_t p_52);
static uint64_t func_53(const uint64_t * const p_54, uint32_t p_55);
# 102 "<stdin>"
static const uint64_t func_1(void)
{
    uint32_t l_2[10][10] = {{18446744073709551606UL,0xD585ED06L,0x4392F209L,18446744073709551608UL,0x10CAAD90L,18446744073709551615UL,0xD585ED06L,1UL,0x70CADD63L,0x70CADD63L},{1UL,9UL,0x4392F209L,0xB6B9DD95L,0xB6B9DD95L,0x4392F209L,9UL,1UL,18446744073709551612UL,0x10CAAD90L},{18446744073709551615UL,18446744073709551615UL,0x4392F209L,0x70CADD63L,18446744073709551612UL,18446744073709551606UL,18446744073709551615UL,1UL,0x10CAAD90L,0xB6B9DD95L},{18446744073709551615UL,6UL,0x4392F209L,18446744073709551612UL,18446744073709551608UL,1UL,6UL,1UL,18446744073709551608UL,18446744073709551612UL},{0x4392F209L,18446744073709551615UL,0x4392F209L,0x10CAAD90L,0x70CADD63L,18446744073709551615UL,18446744073709551615UL,1UL,0xB6B9DD95L,18446744073709551608UL},{18446744073709551606UL,0xD585ED06L,0x4392F209L,18446744073709551608UL,0x10CAAD90L,18446744073709551615UL,0xD585ED06L,1UL,0x70CADD63L,0x70CADD63L},{1UL,9UL,0x4392F209L,0xB6B9DD95L,0xB6B9DD95L,0x4392F209L,9UL,1UL,18446744073709551612UL,0x10CAAD90L},{18446744073709551615UL,18446744073709551615UL,0x4392F209L,0x70CADD63L,18446744073709551612UL,18446744073709551606UL,18446744073709551615UL,1UL,0x10CAAD90L,0xB6B9DD95L},{18446744073709551615UL,6UL,0x4392F209L,18446744073709551612UL,18446744073709551608UL,1UL,6UL,1UL,18446744073709551608UL,18446744073709551612UL},{0x4392F209L,18446744073709551615UL,0x4392F209L,0x10CAAD90L,0x70CADD63L,18446744073709551615UL,18446744073709551615UL,1UL,0xB6B9DD95L,18446744073709551608UL}};
    uint64_t *l_1005[4][6][6] = {{{&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,(void*)0,&g_1006,&g_1006,(void*)0},{&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,(void*)0,&g_1006,&g_1006,(void*)0},{(void*)0,(void*)0,&g_1006,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0,&g_1006,&g_1006}},{{&g_1006,(void*)0,&g_1006,&g_1006,(void*)0,(void*)0},{&g_1006,&g_1006,(void*)0,&g_1006,&g_1006,&g_1006},{(void*)0,(void*)0,&g_1006,&g_1006,(void*)0,(void*)0},{&g_1006,&g_1006,(void*)0,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,(void*)0},{&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,&g_1006}},{{&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,&g_1006},{(void*)0,(void*)0,&g_1006,&g_1006,&g_1006,(void*)0},{&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,(void*)0,&g_1006,(void*)0,&g_1006,&g_1006}},{{&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0,&g_1006,(void*)0},{&g_1006,(void*)0,&g_1006,&g_1006,(void*)0,&g_1006},{&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,(void*)0},{&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,&g_1006}}};
    int32_t l_1330[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    const int8_t l_1335[5] = {0xC3L,0xC3L,0xC3L,0xC3L,0xC3L};
    uint32_t l_1366 = 4294967291UL;
    uint8_t l_1404 = 0xA9L;
    const uint16_t l_1441 = 3UL;
    int32_t l_1487 = 0x90E0C3E4L;
    const uint64_t l_1488[2] = {18446744073709551608UL,18446744073709551608UL};
    int8_t l_1509 = 0xF4L;
    uint16_t l_1510[3];
    uint32_t **l_1525[10][6][2] = {{{(void*)0,&g_675[5]},{&g_675[3],&g_675[0]},{&g_675[0],&g_675[4]},{(void*)0,&g_675[3]},{&g_675[3],&g_675[3]},{&g_675[3],&g_675[3]}},{{&g_675[3],&g_675[0]},{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_675[3],(void*)0},{(void*)0,(void*)0},{(void*)0,&g_675[0]}},{{&g_675[3],&g_675[3]},{&g_675[3],&g_675[3]},{&g_675[3],&g_675[3]},{(void*)0,&g_675[4]},{&g_675[0],&g_675[0]},{&g_675[3],&g_675[5]}},{{(void*)0,(void*)0},{&g_675[3],&g_675[3]},{&g_675[3],&g_675[3]},{&g_675[5],&g_675[0]},{&g_675[5],&g_675[3]},{&g_675[3],&g_675[3]}},{{&g_675[3],(void*)0},{(void*)0,&g_675[5]},{&g_675[3],&g_675[0]},{&g_675[0],&g_675[4]},{(void*)0,&g_675[3]},{&g_675[3],&g_675[3]}},{{&g_675[3],&g_675[3]},{&g_675[3],&g_675[0]},{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_675[3],(void*)0},{(void*)0,(void*)0}},{{(void*)0,&g_675[0]},{&g_675[3],&g_675[3]},{&g_675[3],&g_675[3]},{&g_675[3],&g_675[3]},{(void*)0,&g_675[4]},{&g_675[0],&g_675[0]}},{{&g_675[3],&g_675[5]},{(void*)0,(void*)0},{&g_675[3],&g_675[3]},{&g_675[3],&g_675[3]},{&g_675[5],&g_675[0]},{&g_675[5],&g_675[3]}},{{&g_675[3],&g_675[3]},{&g_675[3],(void*)0},{(void*)0,&g_675[5]},{&g_675[3],&g_675[0]},{&g_675[0],&g_675[4]},{(void*)0,&g_675[3]}},{{&g_675[3],&g_675[3]},{&g_675[3],&g_675[3]},{&g_675[3],&g_675[0]},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,&g_675[5]}}};
    int64_t l_1536 = 0x23504501F4FDAE50LL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1510[i] = 65526UL;
    for (g_3 = 0; (g_3 <= 9); g_3 += 1)
    {
        uint64_t *l_41 = &g_22;
        int32_t l_1331 = (-1L);
        for (g_4 = 7; (g_4 >= 0); g_4 -= 1)
        {
            uint64_t *l_21[4];
            uint8_t l_23 = 0xB4L;
            uint16_t *l_42[2][4] = {{&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43}};
            int32_t *l_1333 = (void*)0;
            int i, j;
            for (i = 0; i < 4; i++)
                l_21[i] = &g_22;
            if ((l_1331 = func_5(l_2[g_4][g_3], l_2[g_3][g_4], g_3, (((((safe_add_func_int8_t_s_s((((0x23L != (l_1330[7] &= ((l_2[g_3][g_4] >= func_12((!((safe_mod_func_int8_t_s_s(((l_23--) < ((((void*)0 != l_21[0]) , func_26(func_28(func_34(func_36(l_41, (g_43 |= l_2[0][2]), l_2[8][2], l_2[9][8])), g_918[6][4], l_2[g_3][g_4], l_1005[1][5][2], l_41))) && l_2[0][1])), l_2[6][0])) && l_2[g_3][g_4])), l_2[5][3], (*g_1096), g_4, l_2[8][2])) != l_2[g_4][g_3]))) || l_1331) != (*g_1096)), l_1331)) ^ 18446744073709551615UL) , g_552[2][3][0]) == 0xE515L) != 4294967293UL))))
            {
                const uint64_t l_1334 = 0xEB8F55E7705C0D84LL;
                return l_1334;
            }
            else
            {
                return l_1335[4];
            }
        }
    }
    for (g_122 = 0; (g_122 >= (-28)); g_122--)
    {
        int32_t l_1352[10] = {0xFFD25CF8L,0xFFD25CF8L,0xFFD25CF8L,0xFFD25CF8L,0xFFD25CF8L,0xFFD25CF8L,0xFFD25CF8L,0xFFD25CF8L,0xFFD25CF8L,0xFFD25CF8L};
        uint64_t ** const *l_1410[7][1][6] = {{{&g_293,&g_293,(void*)0,&g_293,&g_293,&g_293}},{{&g_293,&g_293,&g_293,&g_293,(void*)0,&g_293}},{{&g_293,&g_293,(void*)0,&g_293,&g_293,&g_293}},{{(void*)0,&g_293,&g_293,(void*)0,(void*)0,&g_293}},{{&g_293,&g_293,(void*)0,&g_293,&g_293,(void*)0}},{{(void*)0,&g_293,&g_293,&g_293,&g_293,&g_293}},{{(void*)0,&g_293,(void*)0,&g_293,(void*)0,&g_293}}};
        uint64_t ** const **l_1409 = &l_1410[4][0][1];
        const int32_t l_1440 = 0xFC21C1AAL;
        int16_t *l_1469 = &g_87[0];
        int i, j, k;
        for (g_22 = 26; (g_22 <= 25); --g_22)
        {
            int8_t l_1340 = 0x75L;
            int16_t *l_1343 = (void*)0;
            int32_t l_1344 = 0xF577CA32L;
            uint64_t ****l_1347 = &g_1346;
            int16_t *l_1348 = &g_87[0];
            int16_t *l_1349 = &g_227;
            int32_t *l_1350 = &l_1330[7];
            int32_t *l_1351 = &g_3;
            int64_t *l_1359[3][4][5] = {{{&g_91[2],&g_91[1],&g_91[0],&g_91[2],&g_91[1]},{&g_91[2],&g_91[0],&g_91[0],&g_91[2],&g_91[0]},{&g_91[2],&g_91[1],&g_91[1],&g_91[2],&g_91[0]},{&g_91[1],&g_91[2],&g_91[1],&g_91[0],&g_91[2]}},{{&g_91[0],&g_91[1],&g_91[0],&g_91[2],&g_91[1]},{&g_91[0],&g_91[1],&g_91[0],&g_91[0],&g_91[1]},{&g_91[1],(void*)0,&g_91[0],&g_91[2],&g_91[1]},{&g_91[1],&g_91[0],&g_91[2],&g_91[2],&g_91[1]}},{{(void*)0,&g_91[2],&g_91[0],&g_91[2],&g_91[2]},{&g_91[1],&g_91[0],&g_91[1],&g_91[0],&g_91[0]},{&g_91[1],&g_91[0],&g_91[2],(void*)0,&g_91[0]},{&g_91[0],&g_91[2],&g_91[2],&g_91[2],&g_91[1]}}};
            int32_t l_1372 = 0x4E53B2A1L;
            int32_t l_1373 = 0xC059F411L;
            int32_t l_1374[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1374[i] = 0L;
        }
        if (l_1352[4])
            break;
        if (((+(*g_1328)) , ((void*)0 != (*g_1213))))
        {
            int32_t **l_1412 = &g_232[3][2][2];
            int32_t l_1442 = 0xEE56A1E3L;
            uint8_t l_1452 = 6UL;
            uint8_t ** const *l_1459 = &g_1327;
            int16_t *l_1471 = &g_185[0][5][4];
            int64_t l_1479 = 1L;
            (*l_1412) = &l_1352[3];
            for (g_131 = 0; (g_131 > 32); g_131 = safe_add_func_int32_t_s_s(g_131, 2))
            {
                int32_t l_1439 = 0xBE9DF157L;
                for (g_818 = 0; (g_818 >= 57); g_818 = safe_add_func_int16_t_s_s(g_818, 5))
                {
                    int32_t l_1428 = 0L;
                    for (g_227 = 2; (g_227 >= 0); g_227 -= 1)
                    {
                        int32_t *l_1422 = (void*)0;
                        int32_t *l_1423 = &l_1352[4];
                        uint32_t **l_1431 = &g_675[2];
                        int32_t *l_1443 = &g_3;
                        int i, j, k;
                        (*l_1443) |= ((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((~g_91[g_227]), ((*l_1423) &= g_91[g_227]))), (((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_1428 ^ 18446744073709551615UL), (safe_mul_func_uint8_t_u_u(((void*)0 != l_1431), (safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(l_1428, (safe_unary_minus_func_uint64_t_u((safe_lshift_func_int8_t_s_s(8L, (l_1439 < l_1440))))))), l_1441)))))), g_1402)) != 0x01L) <= l_1442))) ^ g_227);
                        (*l_1412) = g_232[g_227][g_227][(g_227 + 1)];
                        return (****g_1345);
                    }
                    g_232[0][3][1] = &g_552[4][3][1];
                }
                for (g_227 = 0; (g_227 > 14); g_227 = safe_add_func_uint8_t_u_u(g_227, 9))
                {
                    int32_t *l_1448 = (void*)0;
                    int32_t l_1449[5] = {0x8EADE12CL,0x8EADE12CL,0x8EADE12CL,0x8EADE12CL,0x8EADE12CL};
                    uint8_t ** const *l_1461[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1461[i] = (void*)0;
                    if ((safe_rshift_func_uint16_t_u_u(g_552[2][3][0], (l_1352[4] && l_1441))))
                    {
                        (*l_1412) = l_1448;
                    }
                    else
                    {
                        int32_t *l_1450[8] = {&g_552[2][3][0],&g_552[2][3][0],&g_552[2][3][0],&g_552[2][3][0],&g_552[2][3][0],&g_552[2][3][0],&g_552[2][3][0],&g_552[2][3][0]};
                        int8_t l_1451[4] = {0L,0L,0L,0L};
                        int i;
                        l_1452++;
                        (*l_1412) = &g_221;
                    }
                    if (l_1404)
                    {
                        l_1439 = l_1440;
                        if (l_1330[7])
                            break;
                    }
                    else
                    {
                        uint8_t ***l_1458 = &g_1327;
                        uint8_t ** const **l_1460[6];
                        int16_t **l_1470 = (void*)0;
                        uint32_t *l_1472 = (void*)0;
                        uint32_t *l_1473 = (void*)0;
                        uint32_t *l_1474[4][9][2] = {{{&l_1366,&g_104},{&l_1366,&l_1366},{&g_104,(void*)0},{&l_1366,&l_1366},{(void*)0,&l_1366},{&g_104,&l_1366},{&l_1366,&l_1366},{(void*)0,(void*)0},{&l_1366,(void*)0}},{{(void*)0,&l_1366},{&l_1366,&l_1366},{&g_104,&l_1366},{(void*)0,&l_1366},{&l_1366,(void*)0},{&g_104,&l_1366},{&l_1366,&g_104},{&l_1366,&l_1366},{&g_104,(void*)0}},{{&l_1366,&l_1366},{(void*)0,&l_1366},{&g_104,&l_1366},{&l_1366,&l_1366},{(void*)0,(void*)0},{&l_1366,(void*)0},{(void*)0,&l_1366},{&l_1366,&l_1366},{(void*)0,&g_104}},{{(void*)0,&l_1366},{&g_104,&g_104},{&l_1366,&g_104},{&l_1366,(void*)0},{&l_1366,&g_104},{&l_1366,&g_104},{&g_104,&l_1366},{(void*)0,&g_104},{(void*)0,&l_1366}}};
                        int32_t l_1475 = (-1L);
                        int32_t l_1476 = 1L;
                        int32_t l_1477 = 0x3A8A2BFCL;
                        uint8_t l_1480[6];
                        int32_t *l_1483 = &l_1449[2];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_1460[i] = &l_1459;
                        for (i = 0; i < 6; i++)
                            l_1480[i] = 0UL;
                        (*l_1483) ^= (+(safe_add_func_uint8_t_u_u(((l_1458 == (l_1461[1] = l_1459)) | ((l_1477 = (safe_lshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((g_1006 , (!7UL)) == l_1335[4]), ((**g_1327)++))) & (((l_1471 = l_1469) != &g_227) ^ ((l_1480[5]--) <= (1L & (&g_232[2][2][0] != l_1412))))), g_91[2]))) || l_1440)), l_1440)));
                    }
                }
            }
            return (***g_1346);
        }
        else
        {
            int16_t l_1495[1];
            int32_t l_1498[10][3][4] = {{{(-1L),(-3L),(-3L),(-1L)},{(-3L),(-1L),(-8L),(-1L)},{3L,(-1L),0x4007F606L,(-1L)}},{{(-1L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{0x6EDA0DD1L,(-1L),0xA4AAFC6DL,(-1L)}},{{(-1L),(-3L),0L,0L},{(-1L),3L,(-3L),(-1L)},{3L,(-1L),0L,0x6EDA0DD1L}},{{3L,(-8L),(-3L),(-1L)},{(-1L),0x6EDA0DD1L,0L,0L},{(-1L),(-1L),0xA4AAFC6DL,0x6EDA0DD1L}},{{0x6EDA0DD1L,(-1L),0L,(-1L)},{(-8L),3L,0L,0L},{(-1L),3L,0x4007F606L,(-1L)}},{{3L,(-1L),(-8L),0x6EDA0DD1L},{(-3L),(-1L),(-3L),0L},{(-1L),0x6EDA0DD1L,0xC55C03E0L,(-1L)}},{{(-1L),(-8L),0L,0x6EDA0DD1L},{(-1L),(-1L),0L,(-1L)},{(-1L),3L,0xC55C03E0L,0L}},{{(-1L),(-3L),(-3L),(-1L)},{(-3L),(-1L),(-8L),(-1L)},{3L,(-1L),0x4007F606L,(-1L)}},{{(-1L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{0x6EDA0DD1L,(-1L),0xA4AAFC6DL,(-1L)}},{{(-1L),(-3L),0L,0L},{(-1L),3L,(-3L),(-1L)},{3L,(-1L),0L,0x6EDA0DD1L}}};
            int64_t *l_1507 = &g_91[0];
            int64_t *l_1511 = &g_1512;
            uint16_t *l_1513 = &l_1510[1];
            int32_t *l_1514 = &g_4;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1495[i] = 0L;
            (*l_1514) = (((l_1441 > (safe_mul_func_uint16_t_u_u(((*l_1513) = ((~l_1487) && (l_1488[1] < ((*l_1511) = (safe_mod_func_uint16_t_u_u((((((safe_div_func_uint16_t_u_u((g_104 & (((((((l_1495[0] || (((((*l_1469) &= ((safe_mul_func_int8_t_s_s((((****g_1345) ^= ((l_1498[1][2][2] = (**g_1327)) < (l_1366 == ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((*l_1507) &= (((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(l_1352[4], g_778[0][0][5])), 3)) & 0xEF52968CL) || l_1352[4])) <= g_1508), 3)), l_1495[0])) , l_1352[3])))) != (*g_1096)), l_1440)) || (*g_1328))) & l_1488[1]) == 0xDE948EFAL) != 0x01BC3DEA90276DBFLL)) | l_1440) <= l_1440) && (**g_1213)) > l_1352[4]) ^ l_1495[0]) & l_1509)), l_2[6][8])) , (-1L)) || l_1352[4]) , (-1L)) != l_1352[0]), l_1510[1])))))), l_1352[7]))) && l_2[9][0]) & l_1352[6]);
            if (l_1488[1])
                break;
        }
    }
    for (g_818 = (-1); (g_818 == 52); g_818 = safe_add_func_int16_t_s_s(g_818, 1))
    {
        uint8_t l_1519 = 1UL;
        uint32_t **l_1523 = &g_675[3];
        uint32_t ***l_1524 = &l_1523;
        int32_t l_1526 = 1L;
        const int32_t *l_1534[8] = {&g_221,(void*)0,&g_221,(void*)0,&g_221,(void*)0,&g_221,(void*)0};
        const int32_t **l_1533 = &l_1534[1];
        const int32_t ***l_1535 = &l_1533;
        const uint64_t l_1537 = 0xED52B7BACA938933LL;
        int32_t *l_1538[9] = {(void*)0,&g_3,(void*)0,&g_3,(void*)0,&g_3,(void*)0,&g_3,(void*)0};
        int i;
        l_1330[6] &= ((safe_mod_func_uint32_t_u_u(0x06D51226L, ((((((((l_1519 <= (safe_lshift_func_int8_t_s_s((+(l_1526 = (((*l_1524) = l_1523) != (l_1525[9][5][1] = l_1525[9][5][1])))), 6))) < ((g_1527 = g_1527) == &g_1528)) , 0x49153F71F10DBAE9LL) && g_104) >= (safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s((((*l_1535) = l_1533) != &l_1534[1]), g_221)), l_1510[0]))) >= l_1536) || 0x55ABL) , l_1537))) , 0L);
    }
    return (***g_1346);
}







static int32_t func_5(const int64_t p_6, int64_t p_7, const uint64_t p_8, uint32_t p_9)
{
    int16_t l_1332 = 0x1674L;
    return l_1332;
}







static uint16_t func_12(uint64_t p_13, const int16_t p_14, uint64_t p_15, uint8_t p_16, int64_t p_17)
{
    int32_t *l_1139 = &g_221;
    int8_t *l_1168 = &g_688;
    int8_t **l_1167 = &l_1168;
    int8_t ***l_1166 = &l_1167;
    int32_t l_1176 = 0x93FC5883L;
    int32_t l_1177 = 1L;
    int32_t l_1179 = 0xFC6693CFL;
    uint8_t l_1183[4][5][3] = {{{0x67L,0x67L,0x1CL},{255UL,255UL,0xEAL},{0x67L,0x67L,0x1CL},{255UL,255UL,0xEAL},{0x67L,0x67L,0x1CL}},{{255UL,255UL,0xEAL},{0x67L,0x67L,0x1CL},{255UL,255UL,0xEAL},{0x67L,0x67L,0x1CL},{255UL,255UL,0xEAL}},{{0x67L,0x67L,0x1CL},{1UL,1UL,255UL},{0x93L,0x93L,0x67L},{1UL,1UL,255UL},{0x93L,0x93L,0x67L}},{{1UL,1UL,255UL},{0x93L,0x93L,0x67L},{1UL,1UL,255UL},{0x93L,0x93L,0x67L},{1UL,1UL,255UL}}};
    uint32_t **l_1236 = &g_675[1];
    union U0 l_1285 = {0L};
    int16_t l_1291 = (-10L);
    uint8_t *l_1325 = &l_1183[2][4][0];
    uint8_t **l_1324 = &l_1325;
    uint8_t ***l_1326[4];
    int32_t **l_1329 = &l_1139;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1326[i] = &l_1324;
lbl_1323:
    for (g_131 = 0; (g_131 <= 2); g_131 += 1)
    {
        uint32_t l_1136 = 4UL;
        int8_t *l_1151 = &g_244.f0;
        int8_t **l_1150 = &l_1151;
        int8_t ***l_1149[2][4] = {{&l_1150,&l_1150,&l_1150,&l_1150},{&l_1150,&l_1150,&l_1150,&l_1150}};
        int32_t l_1165 = 0xE2D8B318L;
        int32_t l_1175 = 0x45BAF16DL;
        int32_t l_1180 = 0xBB4D2AA9L;
        uint64_t l_1209 = 0x88863DAC69932B58LL;
        int8_t l_1229 = 1L;
        uint32_t ** const l_1238[8][10] = {{&g_675[3],&g_675[3],(void*)0,&g_675[3],&g_675[2],&g_675[3],(void*)0,&g_675[3],&g_675[3],(void*)0},{&g_675[3],&g_675[3],&g_675[3],&g_675[3],&g_675[3],&g_675[3],(void*)0,&g_675[3],&g_675[3],&g_675[3]},{&g_675[1],&g_675[3],&g_675[1],&g_675[3],(void*)0,(void*)0,&g_675[3],&g_675[1],&g_675[3],&g_675[1]},{&g_675[1],&g_675[3],&g_675[3],&g_675[3],&g_675[3],&g_675[3],&g_675[1],&g_675[1],&g_675[3],&g_675[3]},{&g_675[3],&g_675[1],&g_675[1],&g_675[3],&g_675[3],&g_675[3],&g_675[3],&g_675[3],&g_675[1],&g_675[1]},{&g_675[3],&g_675[1],&g_675[3],(void*)0,(void*)0,&g_675[3],&g_675[1],&g_675[3],&g_675[1],&g_675[3]},{&g_675[3],&g_675[3],(void*)0,&g_675[3],&g_675[3],&g_675[3],&g_675[3],&g_675[3],&g_675[3],(void*)0},{&g_675[3],&g_675[3],(void*)0,&g_675[3],&g_675[2],&g_675[3],(void*)0,&g_675[3],&g_675[3],(void*)0}};
        int32_t l_1317 = 1L;
        int i, j;
        for (g_22 = 0; (g_22 <= 2); g_22 += 1)
        {
            int32_t *l_1124 = &g_552[2][3][0];
            int32_t *l_1125 = (void*)0;
            int32_t *l_1126 = (void*)0;
            int32_t *l_1127 = &g_552[1][1][1];
            int32_t *l_1128 = (void*)0;
            int32_t *l_1129 = (void*)0;
            int32_t *l_1130 = &g_552[2][4][0];
            int32_t *l_1131 = &g_552[6][1][2];
            int32_t *l_1132 = (void*)0;
            int32_t *l_1133 = &g_552[7][2][1];
            int32_t *l_1134 = &g_221;
            int32_t *l_1135[3];
            int32_t **l_1140 = &g_232[3][2][2];
            int64_t l_1189 = 0x6B9AD09D79595220LL;
            int i;
            for (i = 0; i < 3; i++)
                l_1135[i] = &g_552[1][4][0];
            l_1136--;
            (*l_1140) = l_1139;
            for (p_15 = 0; (p_15 <= 2); p_15 += 1)
            {
                int8_t ****l_1152 = &l_1149[0][2];
                union U0 l_1162 = {-2L};
                int32_t l_1169 = 0x4B8ECAE0L;
                int32_t l_1170 = (-10L);
                uint32_t l_1186 = 4294967289UL;
                int8_t ***l_1232[5][1][2] = {{{&g_1213,&g_1213}},{{&g_1213,&g_1213}},{{&g_1213,&g_1213}},{{&g_1213,&g_1213}},{{&g_1213,&g_1213}}};
                uint32_t **l_1235[7][7][1] = {{{&g_675[3]},{&g_675[5]},{&g_675[3]},{(void*)0},{&g_675[1]},{(void*)0},{&g_675[3]}},{{&g_675[5]},{&g_675[3]},{&g_675[2]},{&g_675[3]},{&g_675[5]},{&g_675[3]},{(void*)0}},{{&g_675[1]},{(void*)0},{&g_675[3]},{&g_675[5]},{&g_675[3]},{&g_675[2]},{&g_675[3]}},{{&g_675[5]},{&g_675[3]},{(void*)0},{&g_675[1]},{(void*)0},{&g_675[3]},{&g_675[5]}},{{&g_675[3]},{&g_675[2]},{&g_675[3]},{&g_675[5]},{&g_675[3]},{(void*)0},{&g_675[1]}},{{(void*)0},{&g_675[3]},{&g_675[5]},{&g_675[3]},{&g_675[2]},{&g_675[3]},{&g_675[5]}},{{&g_675[3]},{(void*)0},{&g_675[1]},{(void*)0},{&g_675[3]},{&g_675[5]},{&g_675[3]}}};
                int i, j, k;
                if ((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((*l_1152) = l_1149[0][2]) == ((((safe_sub_func_int32_t_s_s((+18446744073709551608UL), (safe_lshift_func_uint16_t_u_u(p_14, g_129[5])))) && (*l_1134)) & ((((safe_mod_func_int16_t_s_s(0xFD8CL, ((((p_17 , (safe_div_func_uint32_t_u_u((l_1165 |= (l_1162 , (((safe_mul_func_uint8_t_u_u(p_13, p_14)) , 9L) || 0UL))), p_16))) == 0x33L) > 0x9AL) , 0x68AEL))) < 0xDEL) ^ l_1162.f0) & l_1136)) , l_1166)), l_1162.f0)), l_1162.f0)), l_1162.f0)), 255UL)))
                {
                    uint16_t l_1171 = 1UL;
                    int32_t l_1174 = 8L;
                    int32_t l_1178 = 0x0B215AC8L;
                    int32_t l_1181 = 7L;
                    for (g_244.f1 = 0; (g_244.f1 <= 2); g_244.f1 += 1)
                    {
                        int32_t l_1182 = 0x38471450L;
                        int i, j, k;
                        l_1171--;
                        l_1183[2][4][0]++;
                        --l_1186;
                        (*l_1140) = &g_4;
                    }
                    if ((*l_1139))
                    {
                        (*l_1130) = l_1189;
                        (*l_1140) = &g_552[6][3][2];
                        (*l_1133) |= p_15;
                    }
                    else
                    {
                        if (p_14)
                            break;
                    }
                    if (l_1169)
                        break;
                }
                else
                {
                    int64_t l_1190[9] = {1L,1L,0xA3D2AD988DBF708FLL,1L,1L,0xA3D2AD988DBF708FLL,1L,1L,0xA3D2AD988DBF708FLL};
                    uint64_t *** const l_1202 = (void*)0;
                    union U0 *l_1225 = &g_244;
                    union U0 l_1263 = {0x9DL};
                    uint16_t *l_1266 = &g_778[1][0][4];
                    int i;
                    (*l_1134) = l_1190[5];
                    if (p_14)
                    {
                        uint64_t ***l_1201 = (void*)0;
                        uint64_t ****l_1200 = &l_1201;
                        int32_t l_1208 = 0xD1D1E61EL;
                        int32_t l_1210 = 0x54694914L;
                        l_1177 |= (l_1210 &= ((*l_1139) = (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((((safe_div_func_uint32_t_u_u((p_14 != (+l_1162.f0)), 1UL)) || ((safe_add_func_uint16_t_u_u(0UL, (((*l_1200) = &g_293) == l_1202))) | (((((4294967291UL || (*l_1133)) , ((((safe_rshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s((*g_1117), (*l_1139))) == 9UL), g_1207)) > 1L) ^ g_244.f0) | g_184[4])) > l_1136) > l_1208) ^ p_14))) < l_1209), (*g_1117))) <= 0xB1AF9FD1L), (*l_1139)))));
                    }
                    else
                    {
                        int8_t *****l_1215 = &l_1152;
                        int32_t l_1226 = 0x567BD2ACL;
                        uint32_t ***l_1237 = &l_1235[2][0][0];
                        (*l_1139) = (((((*l_1215) = g_1211) == (void*)0) < (safe_lshift_func_uint16_t_u_u((~(l_1186 <= (+((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(((*l_1130) = (((safe_unary_minus_func_int16_t_s(l_1209)) && ((*g_245) , (l_1190[0] < (l_1225 == ((l_1226 == ((safe_mod_func_uint16_t_u_u(g_818, 0xBE30L)) , l_1229)) , (void*)0))))) <= 0L)), l_1162.f0)), 5)) > 0x38B46B7B3128F7A4LL)))), g_184[1]))) >= p_15);
                        (*l_1140) = &l_1170;
                        (*l_1124) = (((*l_1139) & (0xE21F40BAAAA9379DLL <= ((18446744073709551614UL < (((*g_1211) != l_1232[0][0][1]) <= (safe_div_func_int64_t_s_s(((((((*l_1237) = (l_1236 = l_1235[2][0][0])) != l_1238[3][2]) , &p_16) != (((((((safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_1226 ^= (safe_lshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(65535UL, 65535UL)) || l_1136), g_552[0][3][1]))), (****g_1211))), (*l_1133))), 0UL)) <= g_778[4][0][8]) < 0x8EL) != (-10L)) , &g_1096) == (void*)0) , &p_16)) , 1L), 0x8846E37CA1081220LL)))) < p_16))) == (*g_1117));
                    }
                    l_1170 &= ((safe_rshift_func_int16_t_s_u(l_1180, (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_int32_t_s(p_13)) > (*l_1139)), p_15)), (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0xEF98L, 14)), ((+(((safe_lshift_func_uint8_t_u_s(((l_1263 , (0x2AD86C0DL & ((safe_mul_func_uint16_t_u_u(g_818, (--(*l_1266)))) == (g_227 > 0xA7CFACE99DA6F2FELL)))) != p_17), (**g_1213))) || 0x5F8F1371L) , (*l_1124))) , g_452))))))) == l_1180);
                    (*l_1124) ^= (~(safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s((((**g_293) | (*l_1139)) > g_1280), (*g_1117))) , (safe_rshift_func_int8_t_s_s((((*l_1266) = 0x9320L) || p_15), 5))), 4)) == ((0xD55D7DA8L == ((safe_sub_func_uint64_t_u_u((((l_1285 , ((((safe_div_func_int16_t_s_s((-8L), 0xD9D8L)) && g_185[1][4][1]) , 0x9A3B4669L) <= 5UL)) & (**g_293)) & 254UL), 0x3598CFE4B68A1571LL)) || l_1186)) , l_1170)) && p_17), 0x0590L)), 5)), p_15)));
                }
            }
        }
        if (l_1175)
        {
            int64_t l_1288 = 0x5CD9C96D6E39859ELL;
            uint8_t *l_1301 = &g_919;
            int32_t *l_1316 = &g_918[6][8];
            uint16_t *l_1318[10][5] = {{(void*)0,&g_778[5][0][4],&g_43,&g_778[1][0][4],&g_778[1][0][4]},{&g_778[5][0][4],(void*)0,&g_778[5][0][4],&g_778[1][0][4],(void*)0},{&g_43,&g_778[5][0][4],(void*)0,&g_778[5][0][4],&g_43},{&g_778[1][0][4],&g_778[5][0][4],&g_778[3][0][8],&g_43,&g_778[3][0][8]},{&g_778[3][0][8],&g_778[3][0][8],(void*)0,&g_43,&g_778[3][0][7]},{&g_778[5][0][4],&g_778[1][0][4],&g_778[1][0][4],&g_778[5][0][4],&g_778[3][0][8]},{&g_778[5][0][4],&g_43,&g_778[1][0][4],&g_778[1][0][4],&g_43},{&g_778[3][0][8],&g_778[1][0][4],&g_778[1][0][4],(void*)0,(void*)0},{&g_778[1][0][4],&g_778[3][0][8],&g_778[1][0][4],&g_778[1][0][4],(void*)0},{&g_43,&g_778[5][0][4],(void*)0,&g_778[5][0][4],&g_43}};
            int32_t l_1319 = 0x6256A300L;
            uint8_t *l_1320 = (void*)0;
            int32_t *l_1321 = (void*)0;
            int32_t *l_1322 = &g_552[3][1][2];
            int i, j;
            (*l_1322) |= ((*g_293) == (((l_1288 || (p_16 = (((safe_mul_func_uint8_t_u_u(l_1291, (((safe_add_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((((safe_unary_minus_func_int64_t_s(((safe_lshift_func_int16_t_s_s((((*l_1301) = (l_1236 != l_1236)) != ((*g_245) , (((safe_rshift_func_uint16_t_u_u((l_1319 ^= ((safe_mod_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((*l_1316) = (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((*l_1139) |= g_129[5]) , ((p_16 , 1L) <= l_1136)) >= p_16), p_16)), 0x9AL))) , 0x5EL), 5)), (**g_1213))) , (*l_1139)) >= l_1209), p_13)) && p_14) , (-6L)), l_1317)) && 4294967295UL)), 2)) ^ l_1288) > p_13))), p_17)) < p_15))) , l_1319) || l_1319) <= p_17), p_14)) || p_13), 0x2E95L)) , p_17) > 1UL))) == (*g_1096)) , g_312))) & l_1288) , &p_13));
        }
        else
        {
            (*l_1139) = ((***g_1212) >= (1L == 0x144A8D4A287C17D9LL));
            if (l_1285.f0)
                goto lbl_1323;
        }
    }
    g_1327 = l_1324;
    (*l_1329) = &g_552[0][5][2];
    return g_91[0];
}







static int16_t func_26(uint64_t * p_27)
{
    union U0 l_1097[2] = {{-1L},{-1L}};
    uint32_t *l_1098 = &g_129[5];
    int32_t l_1104 = (-1L);
    int16_t *l_1115 = &g_185[2][4][3];
    int16_t **l_1116[3][10] = {{(void*)0,&l_1115,&l_1115,&l_1115,(void*)0,&l_1115,&l_1115,(void*)0,&l_1115,&l_1115},{&l_1115,&l_1115,&l_1115,(void*)0,&l_1115,(void*)0,&l_1115,&l_1115,&l_1115,&l_1115},{&l_1115,(void*)0,&l_1115,&l_1115,(void*)0,&l_1115,&l_1115,&l_1115,(void*)0,&l_1115}};
    int32_t *l_1118 = (void*)0;
    int32_t *l_1119 = &g_552[2][3][0];
    int32_t *l_1120 = (void*)0;
    int32_t l_1121 = 0xA8A898E0L;
    int32_t **l_1122 = &l_1118;
    int32_t **l_1123 = &g_232[3][2][2];
    int i, j;
    (*l_1123) = ((*l_1122) = func_46(l_1097[1], (--(*l_1098)), (safe_unary_minus_func_uint8_t_u(g_3)), (safe_lshift_func_uint8_t_u_s((l_1104 = l_1097[1].f0), (safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s((l_1121 = ((((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0x17L, 4)), 15)) , 0xA747L), g_688)) & l_1097[1].f0) , &g_552[2][3][0]) != ((((*l_1119) = ((g_1117 = l_1115) == &g_227)) & l_1097[1].f0) , &g_4))), l_1097[1].f0)), g_4))))));
    return (*l_1118);
}







static uint64_t * func_28(uint64_t * p_29, int32_t p_30, uint32_t p_31, uint64_t * p_32, const uint64_t * p_33)
{
    const union U0 l_1026 = {3L};
    int16_t *l_1031 = &g_87[0];
    int32_t l_1032 = 0L;
    uint32_t *l_1033 = &g_104;
    int8_t *l_1036 = (void*)0;
    int8_t **l_1035 = &l_1036;
    int8_t ***l_1034[5] = {&l_1035,&l_1035,&l_1035,&l_1035,&l_1035};
    int8_t **l_1041[9][1] = {{(void*)0},{&l_1036},{(void*)0},{&l_1036},{(void*)0},{&l_1036},{(void*)0},{&l_1036},{(void*)0}};
    uint32_t l_1053 = 5UL;
    uint32_t ***l_1088 = &g_674;
    int i, j;
    for (g_325 = 0; (g_325 <= 2); g_325 += 1)
    {
        int32_t l_1007 = 0x802B52B0L;
        uint32_t *l_1024[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t *l_1027 = &g_122;
        int32_t *l_1028 = &g_552[2][3][0];
        int i;
        (*l_1028) &= ((l_1007 & (safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((((&g_87[0] == &g_185[2][4][3]) > p_31) | ((((safe_lshift_func_int16_t_s_u((l_1007 | ((*l_1027) &= (l_1024[6] != (((~(l_1026 , (&g_325 != &g_452))) & p_31) , l_1024[6])))), 4)) , &l_1026) != (void*)0) <= p_30)), l_1026.f0)) < l_1007), g_778[1][0][4])), p_31)), p_30)), l_1007)), g_184[4]))) | l_1026.f0);
        for (g_43 = 0; (g_43 <= 2); g_43 += 1)
        {
            int32_t **l_1029[4] = {&g_232[3][2][2],&g_232[3][2][2],&g_232[3][2][2],&g_232[3][2][2]};
            uint64_t *l_1030 = &g_1006;
            int i;
            g_232[3][2][2] = (g_184[4] , &g_3);
            return l_1030;
        }
    }
    if ((l_1026.f0 || (((*l_1033) = (l_1032 |= ((void*)0 == l_1031))) < (((void*)0 == l_1034[3]) & (+g_246[1].f0)))))
    {
        int8_t **l_1040[5];
        uint8_t *l_1044 = &g_201;
        int32_t *l_1052 = &g_552[4][3][1];
        int32_t l_1054 = 1L;
        uint16_t l_1055 = 1UL;
        int i;
        for (i = 0; i < 5; i++)
            l_1040[i] = &l_1036;
        g_232[3][1][3] = func_46(l_1026, ((safe_sub_func_int16_t_s_s(((5UL >= (l_1040[3] == (l_1041[3][0] = l_1040[3]))) > (-9L)), (safe_add_func_uint8_t_u_u((--(*l_1044)), (((((((*l_1052) |= ((((safe_add_func_int32_t_s_s(((safe_unary_minus_func_int16_t_s((safe_mul_func_uint8_t_u_u(((void*)0 != &g_778[1][0][4]), p_31)))) == p_30), 0L)) < 4294967294UL) , (**g_293)) , 0xF13BF335L)) < l_1053) != l_1032) < 0UL) & l_1053) == l_1054))))) & l_1055), p_30, l_1053);
        return (*g_293);
    }
    else
    {
        int32_t l_1066 = 9L;
        int32_t l_1067[3];
        uint16_t *l_1068 = &g_43;
        int64_t *l_1069 = &g_91[0];
        int32_t **l_1070 = &g_232[3][2][2];
        int i;
        for (i = 0; i < 3; i++)
            l_1067[i] = 0xA20B36B4L;
        (*l_1070) = ((g_452 <= (((*l_1069) = ((((0x64AF8603F4D7E246LL && ((((((safe_mul_func_uint16_t_u_u(l_1053, ((*l_1068) |= (safe_mul_func_int8_t_s_s(p_31, (4294967295UL == (l_1026.f0 >= (safe_rshift_func_int8_t_s_s((l_1067[1] = ((safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((((-2L) == (((void*)0 != &g_312) <= p_31)) ^ l_1066), 1UL)) >= l_1066), 0UL)) < g_688)), p_30))))))))) , p_31) , 18446744073709551615UL) > 0x75D7004DB7400E86LL) && l_1053) , (**g_293))) >= p_31) , p_31) || p_30)) & p_30)) , &l_1067[0]);
        for (g_688 = 16; (g_688 != (-9)); g_688 = safe_sub_func_int8_t_s_s(g_688, 5))
        {
            uint32_t l_1075 = 0UL;
            uint8_t *l_1077 = (void*)0;
            uint8_t *l_1078 = &g_919;
            uint16_t *l_1081[10][9] = {{(void*)0,(void*)0,(void*)0,&g_778[1][0][4],&g_778[3][0][0],&g_778[1][0][4],&g_778[1][0][4],&g_778[2][0][5],&g_778[0][0][4]},{&g_778[1][0][4],&g_778[4][0][8],&g_778[1][0][4],&g_778[1][0][0],&g_778[1][0][4],&g_778[3][0][0],(void*)0,&g_778[1][0][4],&g_778[4][0][2]},{&g_778[3][0][0],&g_778[1][0][4],&g_778[1][0][4],&g_778[1][0][4],(void*)0,(void*)0,(void*)0,&g_778[5][0][1],&g_778[5][0][1]},{&g_778[1][0][4],(void*)0,&g_778[0][0][4],(void*)0,&g_778[0][0][4],(void*)0,&g_778[1][0][4],&g_778[0][0][4],&g_778[1][0][4]},{(void*)0,&g_778[1][0][4],&g_778[1][0][0],&g_778[0][0][4],(void*)0,&g_778[3][0][0],&g_778[3][0][2],&g_778[1][0][8],&g_778[1][0][4]},{&g_778[1][0][4],&g_778[1][0][4],(void*)0,&g_778[4][0][2],&g_778[1][0][4],&g_778[1][0][4],&g_778[1][0][8],&g_778[0][0][4],&g_778[1][0][4]},{&g_778[2][0][5],(void*)0,&g_778[1][0][4],&g_778[5][0][1],(void*)0,&g_778[1][0][4],(void*)0,&g_778[5][0][1],&g_778[1][0][4]},{&g_778[2][0][5],&g_778[2][0][5],&g_778[4][0][2],&g_778[1][0][4],(void*)0,&g_778[1][0][4],&g_778[1][0][4],&g_778[1][0][4],&g_778[1][0][4]},{&g_778[1][0][4],&g_778[0][0][4],&g_778[1][0][4],&g_778[1][0][4],&g_778[1][0][0],(void*)0,&g_778[5][0][1],&g_778[2][0][5],(void*)0},{(void*)0,&g_778[0][0][4],&g_778[4][0][2],&g_778[1][0][4],(void*)0,(void*)0,&g_778[1][0][4],&g_778[1][0][4],(void*)0}};
            int32_t l_1082 = 1L;
            int32_t *l_1083 = &g_552[6][6][1];
            int i, j;
            (*l_1083) = ((((((safe_lshift_func_uint16_t_u_s(l_1075, 12)) || (((*l_1078) &= (((~(-1L)) , (void*)0) == l_1036)) > ((safe_mul_func_int16_t_s_s(((*p_29) < 5UL), (l_1082 = ((*l_1068) = (g_244.f0 > 0xF3D7L))))) <= (l_1078 != l_1078)))) , g_87[0]) , p_30) , 0x81L) || p_31);
        }
    }
    for (g_74 = 0; (g_74 <= 0); g_74 += 1)
    {
        uint32_t ** const l_1084 = &g_675[3];
        uint32_t **l_1085 = &g_675[1];
        uint32_t ***l_1086 = &l_1085;
        int32_t l_1087[4][5][10] = {{{0xE4E5A336L,0xA6B40435L,(-1L),1L,0x2AD478F0L,7L,(-1L),0x072B276CL,0x5116FA75L,0xF28DF28CL},{(-8L),0x74073E10L,3L,0L,0L,0xF7B332F6L,0x41C5F60DL,1L,(-10L),(-10L)},{0x6EB1F235L,0x9AF2ECCAL,(-1L),0x4213ADECL,0x4213ADECL,(-1L),0x9AF2ECCAL,0x6EB1F235L,(-8L),8L},{0L,(-1L),0L,0xEA793FA7L,0xED999D88L,0xB0FE8EE5L,7L,0xCDA06904L,0xBF429F74L,0x4213ADECL},{0L,0x8702192EL,0L,0xED999D88L,(-5L),0xCDA06904L,0xCBD70991L,0x6EB1F235L,8L,1L}},{{0xDD71769CL,0x5116FA75L,(-1L),8L,0x41C5F60DL,0xCBD70991L,(-8L),1L,0x072B276CL,0x82E83132L},{0xED999D88L,0x41C5F60DL,3L,0x82E83132L,0xCDA06904L,0x74073E10L,0x81CD0A76L,0x072B276CL,0x2AD478F0L,0xBF429F74L},{0x072B276CL,(-1L),(-1L),(-8L),1L,0xEA793FA7L,1L,(-8L),(-1L),(-1L)},{0x8592E60DL,0L,(-10L),0x9AF2ECCAL,0xF7B332F6L,0xE4E5A336L,0xBF429F74L,(-5L),0L,(-1L)},{0x4213ADECL,6L,4L,0xCBD70991L,1L,0xE4E5A336L,3L,0xF7B332F6L,0xB0FE8EE5L,0x6EB1F235L}},{{0x8592E60DL,7L,0x072B276CL,0xF7B332F6L,8L,0xEA793FA7L,0x4DFAF811L,0xB24FE7BFL,0x0CF37E54L,(-5L)},{0x072B276CL,0xF28DF28CL,7L,0xD30F5ED8L,7L,0x74073E10L,0x8702192EL,(-1L),0xB24FE7BFL,0L},{0xED999D88L,0x7735B565L,0x74073E10L,0xA6B40435L,3L,0xCBD70991L,0xDB575F87L,0xDB575F87L,0xCBD70991L,3L},{0xDD71769CL,1L,1L,0xDD71769CL,0x0CF37E54L,0xCDA06904L,0L,0xBF429F74L,0x8702192EL,0x9AF2ECCAL},{0L,0xCBD70991L,0xA6B40435L,0L,0xE4E5A336L,0xB0FE8EE5L,1L,0L,0x8702192EL,0xEA793FA7L}},{{0L,0xEA793FA7L,0x2AD478F0L,0xDD71769CL,0x5116FA75L,(-1L),8L,0x41C5F60DL,0xCBD70991L,(-8L)},{0x6EB1F235L,8L,1L,0xA6B40435L,8L,0xF7B332F6L,0L,0xB0FE8EE5L,0xB24FE7BFL,7L},{(-8L),0xDD71769CL,0x8702192EL,0xD30F5ED8L,(-1L),7L,0xF7B332F6L,(-1L),0x0CF37E54L,(-1L)},{0xE4E5A336L,1L,0x7735B565L,0xF7B332F6L,0x7735B565L,1L,0xE4E5A336L,0x5116FA75L,0xB0FE8EE5L,0xA6B40435L},{0x8592E60DL,(-1L),0x0CF37E54L,7L,0x5116FA75L,0x61C65465L,0x74073E10L,0L,8L,0L}}};
        uint32_t l_1094 = 0UL;
        int32_t *l_1095[4] = {&l_1087[3][0][6],&l_1087[3][0][6],&l_1087[3][0][6],&l_1087[3][0][6]};
        int i, j, k;
        l_1032 = ((((((-1L) || (((l_1084 == ((*l_1086) = l_1085)) < l_1087[3][0][6]) != ((l_1087[3][0][6] || ((void*)0 != l_1088)) , 0L))) || (((((safe_unary_minus_func_uint32_t_u(((safe_add_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_s((l_1087[0][2][8] , p_31), l_1087[1][4][3])) >= 1L) & l_1087[0][3][3]), p_31)) , l_1032))) == p_30) | p_30) , (void*)0) == l_1031)) , (void*)0) == (void*)0) , l_1094);
        return p_32;
    }
    return g_1096;
}







static uint64_t * func_34(int32_t p_35)
{
    int32_t l_988 = 8L;
    int32_t *l_989 = &g_552[2][3][0];
    uint16_t l_995 = 65526UL;
    int8_t *l_996 = &g_244.f0;
    int8_t *l_997 = &g_122;
    int32_t *l_1002[9];
    uint8_t l_1003[10][7] = {{1UL,0x1BL,0x1BL,1UL,7UL,252UL,0x15L},{255UL,0x90L,0x1BL,8UL,0x15L,0x75L,0x89L},{255UL,0x1BL,1UL,1UL,0x89L,0x75L,0x15L},{1UL,0x2FL,1UL,1UL,0x15L,252UL,7UL},{1UL,0x2FL,1UL,8UL,7UL,246UL,7UL},{1UL,0x1BL,0x1BL,1UL,7UL,252UL,0x15L},{255UL,0x90L,0x1BL,8UL,0x15L,0x75L,0x89L},{255UL,0x1BL,1UL,1UL,0x89L,0x75L,0x15L},{1UL,0x2FL,1UL,1UL,0x15L,252UL,7UL},{1UL,0x2FL,1UL,8UL,7UL,246UL,7UL}};
    uint64_t *l_1004 = &g_818;
    int i, j;
    for (i = 0; i < 9; i++)
        l_1002[i] = &l_988;
    (*l_989) |= (0x21F5AB5A488950FFLL & (g_91[0] |= (p_35 > l_988)));
    l_1003[9][5] &= (safe_mul_func_uint8_t_u_u((0xD3D5F072L == (((*l_989) = ((*l_989) ^ (p_35 && (!p_35)))) == ((g_688 &= ((*l_997) = ((*l_996) = l_995))) ^ (((((*g_293) = (*g_293)) != (void*)0) && (safe_sub_func_int16_t_s_s((0x46B5L && (((safe_div_func_int64_t_s_s(l_995, 0xC0BAF52AE6FF9F9ELL)) , (void*)0) == &g_232[2][0][0])), g_74))) && 1UL)))), 1UL));
    return l_1004;
}







static int32_t func_36(uint64_t * p_37, uint16_t p_38, int64_t p_39, uint64_t p_40)
{
    uint32_t l_60 = 0xC20EB8FCL;
    int32_t *l_61 = (void*)0;
    int64_t l_678 = 2L;
    int16_t l_686 = 0xCE8FL;
    union U0 l_687 = {0xD8L};
    uint8_t l_690 = 0x29L;
    int32_t l_749 = 0x7B6700C3L;
    int32_t l_750 = (-9L);
    int32_t l_753 = 1L;
    int32_t l_757 = 1L;
    int32_t l_758 = 0x782D46FBL;
    int32_t l_762 = (-1L);
    int32_t l_765[7] = {1L,0xD2DFAF3CL,1L,1L,0xD2DFAF3CL,1L,1L};
    int8_t *l_843[8][8][1] = {{{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0}},{{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0}},{{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0}},{{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0}},{{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0}},{{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0}},{{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0}},{{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0},{&l_687.f0},{&g_244.f0}}};
    uint32_t ***l_921 = &g_674;
    int16_t l_939[2];
    int32_t l_964 = 0x2FE42E95L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_939[i] = 7L;
    for (p_38 = (-17); (p_38 != 8); ++p_38)
    {
        uint32_t l_72 = 18446744073709551615UL;
        int16_t *l_73 = &g_74;
        int8_t *l_186 = &g_122;
        int32_t **l_662 = &g_232[3][2][2];
        uint16_t *l_669 = (void*)0;
        uint16_t *l_670 = &g_43;
        uint64_t *l_676 = &g_321;
        int64_t *l_677 = &g_91[0];
        int8_t l_689 = (-2L);
        uint64_t * const *l_741 = &l_676;
        uint64_t * const **l_740 = &l_741;
        int32_t l_751 = 1L;
        int32_t l_760 = 0x7A32806FL;
        int32_t l_763 = 0x749B3E44L;
        uint16_t l_766 = 0x6CB0L;
        int32_t l_799 = 0L;
        int32_t l_801 = 0xD446E0D3L;
        uint64_t l_802 = 0x696F57DD1D7ED731LL;
        int8_t **l_848 = &l_843[5][1][0];
        uint8_t l_920 = 253UL;
        int64_t l_925 = 0L;
        int32_t l_983 = 1L;
        int32_t l_984 = (-4L);
        (*l_662) = func_46(func_51(((*l_186) = ((func_53((((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(l_60, (&g_4 != l_61))), 0x59719BD9L)) || 1UL) , &p_40), ((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(0x66L, (safe_lshift_func_int16_t_s_s(((*l_73) ^= (safe_div_func_int32_t_s_s(((18446744073709551615UL < g_43) , g_22), l_72))), g_4)))) && 0x3A5A14E9L) && g_43), 9L)) >= p_40), g_22)) , 0UL)) != p_40) <= 1L))), g_129[5], g_246[1].f0, l_72);
        l_678 ^= ((((*l_677) ^= (((safe_lshift_func_uint16_t_u_u(((*l_670) = (p_38 < (g_87[0] > (safe_add_func_uint64_t_u_u((*p_37), (**g_293)))))), 8)) > (safe_mul_func_uint16_t_u_u(((void*)0 != g_673[7]), 0x101BL))) | ((*l_676) &= (**g_293)))) > g_312) != l_72);
        l_690 = (p_40 <= (~((l_689 = ((safe_lshift_func_uint16_t_u_s((g_22 <= ((safe_rshift_func_uint8_t_u_u((((((*p_37) > (g_87[0] == ((*l_73) ^= p_38))) & ((safe_add_func_uint32_t_u_u(l_686, ((l_687 , ((g_321 <= p_38) , g_43)) && g_688))) , g_4)) >= 249UL) == g_185[2][4][3]), 4)) > 4294967295UL)), g_87[1])) == 0UL)) , 0x86L)));
        for (l_72 = 0; (l_72 <= 6); l_72 += 1)
        {
            int32_t *l_691 = &g_552[2][3][0];
            int32_t l_748[4] = {0x808C54D2L,0x808C54D2L,0x808C54D2L,0x808C54D2L};
            int8_t l_851[9] = {0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL};
            union U0 *l_887[6] = {&l_687,(void*)0,&l_687,&l_687,(void*)0,&l_687};
            uint16_t l_896 = 0x3711L;
            uint64_t **l_928 = &g_294[2];
            int64_t l_974 = 5L;
            uint32_t l_985[1][6][4] = {{{4294967290UL,0x682B214DL,4294967290UL,0UL},{1UL,0x682B214DL,1UL,0x682B214DL},{1UL,0UL,4294967290UL,0x682B214DL},{4294967290UL,0x682B214DL,4294967290UL,0UL},{1UL,0UL,1UL,0UL},{4294967290UL,4294967293UL,1UL,0UL}}};
            int i, j, k;
            (*l_691) = (-8L);
            for (l_687.f1 = 0; (l_687.f1 <= 6); l_687.f1 += 1)
            {
                uint32_t l_708[3];
                int32_t l_709 = 0xE186028BL;
                uint32_t l_712 = 1UL;
                int8_t *l_716 = (void*)0;
                int32_t l_752 = 0xF87EFE3AL;
                int32_t l_761 = (-1L);
                int32_t l_764 = 0x9E27D1C3L;
                uint32_t *l_775 = &l_712;
                int i;
                for (i = 0; i < 3; i++)
                    l_708[i] = 0x161392C0L;
                for (g_122 = 6; (g_122 >= 0); g_122 -= 1)
                {
                    int8_t *l_710 = (void*)0;
                    int8_t *l_711 = &l_689;
                    const int32_t l_717 = 3L;
                    int32_t l_754 = (-4L);
                    int32_t l_755 = (-7L);
                    int32_t l_756 = (-6L);
                    int32_t l_759 = 0x43C44C2DL;
                    for (g_321 = 0; (g_321 <= 2); g_321 += 1)
                    {
                        int32_t l_692 = (-1L);
                        int32_t *l_693 = &g_552[2][3][0];
                        int32_t *l_694[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint32_t l_695[8] = {0xF20052A7L,0x901CA799L,0xF20052A7L,0xF20052A7L,0x901CA799L,0xF20052A7L,0xF20052A7L,0x901CA799L};
                        int i, j, k;
                        l_695[0]++;
                        (*l_693) |= (g_129[g_122] && ((*p_37) ^= g_129[(g_321 + 2)]));
                    }
                    if (p_39)
                        break;
                    if ((((*l_73) = ((*g_245) , (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(((g_131 & ((*l_711) = ((g_122 , 0x113DL) < ((safe_mod_func_uint64_t_u_u(0x0AB74F63483B9526LL, (safe_mul_func_int8_t_s_s(((*g_245) , g_104), (((l_709 = (l_708[0] &= p_40)) , (*l_691)) , p_40))))) && p_40)))) ^ g_452), l_712)) & 18446744073709551615UL) && g_184[4]), 5)))) < 0x3EF6L))
                    {
                        const int8_t ***l_715 = &g_713[1];
                        (*l_715) = g_713[1];
                        return p_38;
                    }
                    else
                    {
                        int64_t *l_727 = &l_678;
                        const int32_t l_742 = 8L;
                        int32_t *l_743 = &g_552[2][3][0];
                        int32_t *l_744 = (void*)0;
                        int32_t l_745 = 1L;
                        int32_t *l_746 = &g_221;
                        int32_t *l_747[4] = {&g_552[2][3][0],&g_552[2][3][0],&g_552[2][3][0],&g_552[2][3][0]};
                        int32_t *l_769 = &l_763;
                        int i;
                        (*l_691) ^= ((l_716 != l_711) & l_717);
                        (*l_691) = (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((*g_245) , g_184[5]), 1)) && (0L < (!((safe_mod_func_int16_t_s_s(((g_185[1][5][6] || ((*l_677) ^= p_38)) < ((safe_sub_func_uint16_t_u_u((((*l_727) ^= 0x244F225368335AC5LL) == ((safe_mod_func_int32_t_s_s(p_40, (safe_mod_func_uint8_t_u_u(((((safe_mod_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(((*l_73) = (((p_40 <= (safe_sub_func_int16_t_s_s((l_740 != &g_293), l_742))) && 0x65A37D192A7B3D88LL) | (*l_691))), l_742)), 1UL)) && g_552[2][0][0]) > g_104), (-7L))) || g_688) == g_201) != 65535UL), l_717)))) , l_708[0])), (*l_691))) & p_40)), l_717)) && g_244.f0)))), g_244.f0));
                        ++l_766;
                        (*l_662) = l_769;
                    }
                    if ((*l_691))
                        break;
                }
                (*l_662) = func_46((*g_245), (safe_rshift_func_int8_t_s_s((g_129[l_687.f1] , (safe_unary_minus_func_uint16_t_u((p_40 & (safe_sub_func_uint32_t_u_u((++(*l_775)), p_40)))))), 6)), p_38, (((g_778[1][0][4] | (p_39 >= p_40)) | p_38) | l_761));
            }
            for (g_221 = 0; (g_221 <= 2); g_221 += 1)
            {
                int32_t l_791 = 0x6D562344L;
                int32_t l_796 = (-3L);
                int32_t l_797 = 1L;
                int32_t l_798 = 0xED8B22BCL;
                int32_t l_800 = 0xCEDC8DB9L;
                int i, j, k;
                if (((0x9CL <= ((*l_186) ^= (-1L))) <= g_185[g_221][(g_221 + 2)][(l_72 + 1)]))
                {
                    for (g_688 = 2; (g_688 >= 0); g_688 -= 1)
                    {
                        int i, j, k;
                        return g_185[g_688][(g_221 + 1)][(g_221 + 5)];
                    }
                    (*l_662) = &g_221;
                }
                else
                {
                    uint32_t *l_790[4];
                    uint8_t *l_792 = &g_312;
                    int32_t *l_793 = &l_753;
                    int32_t *l_794 = (void*)0;
                    int32_t *l_795[2];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_790[i] = &l_60;
                    for (i = 0; i < 2; i++)
                        l_795[i] = (void*)0;
                    if (g_185[g_221][g_221][l_72])
                        break;
                    (*l_793) &= (!((*l_792) ^= (safe_lshift_func_uint8_t_u_s((0x8C83E62FL || (safe_rshift_func_uint16_t_u_u(65535UL, ((safe_add_func_uint32_t_u_u(((g_185[g_221][(g_221 + 3)][g_221] != g_185[g_221][g_221][l_72]) & 65527UL), (g_185[g_221][(g_221 + 3)][l_72] , (l_791 = (g_185[g_221][g_221][(l_72 + 1)] , ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(((void*)0 == &g_714), g_552[2][3][0])) || p_38), 0x608CB8FDL)) ^ p_40)))))) && 0x2ADFL)))), 3))));
                    ++l_802;
                    return g_185[g_221][(g_221 + 2)][(l_72 + 1)];
                }
                if ((*l_691))
                    break;
            }
            for (l_758 = 0; (l_758 <= 2); l_758 += 1)
            {
                uint32_t l_805 = 7UL;
                int32_t l_816 = (-1L);
                uint16_t l_821 = 0xDB7AL;
                int8_t * const l_831 = &g_244.f0;
                int16_t *l_845 = &g_87[0];
                uint8_t *l_852 = &l_690;
                uint32_t l_873 = 4294967291UL;
                int32_t *l_881 = &g_552[2][3][0];
                uint16_t l_895 = 4UL;
                int32_t l_968 = (-6L);
                int32_t l_969 = 0x6175A06FL;
                int32_t l_971 = (-5L);
                int32_t l_972 = 0L;
                int32_t l_973 = (-3L);
                int32_t l_975 = (-1L);
                int32_t l_976 = 0x0171B157L;
                int32_t l_977 = 0xBDEA1F3BL;
                int32_t l_978 = (-1L);
                int32_t l_979 = 3L;
                int32_t l_980 = (-3L);
                int32_t l_981 = 0L;
                int32_t l_982 = 0xFDB06788L;
                l_805 |= ((*l_691) = p_38);
                for (g_227 = 2; (g_227 >= 0); g_227 -= 1)
                {
                    int32_t l_806[4][6][1] = {{{0xEBB58D08L},{0xEBB58D08L},{0xF3149BEFL},{0xC6A42539L},{0xF3149BEFL},{0xEBB58D08L}},{{0xEBB58D08L},{0xF3149BEFL},{0xC6A42539L},{0xF3149BEFL},{0xEBB58D08L},{0xEBB58D08L}},{{0xF3149BEFL},{0xC6A42539L},{0xF3149BEFL},{0xEBB58D08L},{0xEBB58D08L},{0xF3149BEFL}},{{0xC6A42539L},{0xF3149BEFL},{0xEBB58D08L},{0xEBB58D08L},{0xF3149BEFL},{0xC6A42539L}}};
                    int i, j, k;
                    for (l_802 = 0; (l_802 <= 2); l_802 += 1)
                    {
                        int32_t *l_807 = &l_765[4];
                        int32_t *l_808 = &l_760;
                        int32_t *l_809 = &l_765[1];
                        int32_t *l_810 = (void*)0;
                        int32_t *l_811 = &l_801;
                        int32_t *l_812 = &l_765[0];
                        uint32_t l_813 = 4294967295UL;
                        int32_t *l_817[10][3][5] = {{{&l_816,&l_816,(void*)0,(void*)0,&l_749},{(void*)0,&l_763,&g_221,(void*)0,&l_758},{&l_748[1],&g_3,&l_763,&l_816,&l_749}},{{&l_763,(void*)0,&l_765[2],&g_552[4][2][1],&l_765[2]},{&l_749,&l_749,&l_816,&l_748[1],&l_753},{&l_763,&l_816,(void*)0,&g_221,&l_799}},{{&l_748[1],&l_765[0],&l_748[1],&l_762,(void*)0},{(void*)0,&l_816,&l_763,&l_763,&g_552[2][3][0]},{&l_816,&l_749,&l_749,&l_816,&l_748[1]}},{{&l_765[2],(void*)0,&l_763,(void*)0,&l_765[5]},{&l_763,&g_3,&l_748[1],&g_3,&l_763},{&g_221,&l_763,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_816,&l_816,&l_816,&l_816},{&l_799,(void*)0,&l_765[2],&l_763,(void*)0},{&g_3,&l_816,&l_763,&l_762,&l_763}},{{(void*)0,&l_765[4],&g_221,&g_221,&l_765[5]},{&g_3,&l_753,(void*)0,&l_748[1],&l_748[1]},{&l_799,&l_765[4],&l_799,&g_552[4][2][1],&g_552[2][3][0]}},{{(void*)0,&l_753,&g_3,&l_816,(void*)0},{&g_221,&l_765[4],(void*)0,(void*)0,&l_799},{&l_763,&l_816,&g_3,(void*)0,&l_753}},{{&l_765[2],(void*)0,&l_799,(void*)0,&l_765[2]},{&l_816,&l_816,(void*)0,(void*)0,&l_749},{(void*)0,&l_763,&g_221,(void*)0,&l_758}},{{&l_748[1],&g_3,&l_763,&l_816,&l_749},{&l_763,(void*)0,&l_765[2],&g_552[4][2][1],&l_765[2]},{&l_749,&l_749,&l_816,&l_748[1],&l_753}},{{&l_763,&l_816,(void*)0,&l_763,&l_758},{&l_816,(void*)0,&l_816,&g_3,&l_753},{&l_799,&l_748[1],&l_816,(void*)0,&l_765[5]}}};
                        int i, j, k;
                        --l_813;
                        --g_818;
                        ++l_821;
                        if ((*l_691))
                            continue;
                    }
                }
                for (l_760 = 2; (l_760 >= 0); l_760 -= 1)
                {
                    uint16_t l_824 = 0x8B1CL;
                    union U0 *l_829 = &l_687;
                    int8_t *l_844 = &g_122;
                    if ((l_824 , l_805))
                    {
                        union U0 **l_830 = &l_829;
                        int32_t l_836 = 0x708A91B3L;
                        (*l_691) ^= ((safe_add_func_int64_t_s_s((-4L), (safe_mod_func_uint16_t_u_u(0xA8ADL, l_824)))) , ((((((*l_830) = l_829) == &g_246[1]) < ((l_831 == ((*g_245) , (void*)0)) > ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((*l_186) = (((void*)0 != &g_674) < l_836)) != g_778[2][0][3]), g_184[4])), 6)) > g_87[1]))) == 4UL) , l_836));
                    }
                    else
                    {
                        int32_t l_839[6][10] = {{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)}};
                        int i, j;
                        (*l_691) = (((g_185[2][0][1] != (safe_add_func_int64_t_s_s((g_3 == (l_839[2][8] <= ((0x1699L & (~(g_3 & (((safe_mod_func_uint16_t_u_u((((((g_91[0] , l_843[5][1][0]) == l_844) , g_184[4]) , p_39) && (*l_691)), (-1L))) <= (-1L)) & l_824)))) || p_40))), 0x01AEF2333162D84ALL))) , l_845) == &g_185[2][2][1]);
                        if (p_39)
                            continue;
                    }
                }
                if ((safe_mul_func_uint8_t_u_u((((((((*g_293) == (**l_740)) && ((*l_677) = g_552[2][3][0])) < (p_38 > (*l_691))) ^ ((*l_852) = ((((((void*)0 != l_848) , (p_39 , (safe_lshift_func_int8_t_s_u((l_831 == (void*)0), 7)))) == l_851[1]) , 4294967287UL) == p_39))) && 0UL) >= (*l_691)), 0x1EL)))
                {
                    int32_t l_874[5];
                    int32_t *l_875[7] = {&l_763,&l_753,&l_763,&l_763,&l_753,&l_763,&l_763};
                    uint16_t *l_878 = &g_778[1][0][4];
                    uint32_t l_886[2][1];
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_874[i] = 0x7AFEADA4L;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_886[i][j] = 0UL;
                    }
                    l_765[6] = ((*l_691) = (((safe_rshift_func_uint8_t_u_s(p_38, ((g_87[0] < (l_816 = ((*l_186) |= (safe_rshift_func_uint8_t_u_s(((*l_691) >= ((0L & ((safe_lshift_func_int16_t_s_u(0xA000L, (g_312 < (safe_lshift_func_int16_t_s_s(((**g_293) || (safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((*l_831) = (0x1341E6A1L & ((((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(l_816, 0x55L)), 13)), p_39)) , l_873) == p_38) != g_778[1][0][4]))), p_40)) , p_40), 0x877C2C55L))), p_39))))) >= l_874[1])) < (-1L))), 0))))) && 0x62C82BA17657639DLL))) > g_312) || 0UL));
                    for (l_749 = 2; (l_749 >= 0); l_749 -= 1)
                    {
                        l_748[0] = ((((*l_691) = p_38) , ((safe_rshift_func_int16_t_s_u((*l_691), ((((l_687 , ((*l_677) = g_43)) > (l_878 != (void*)0)) == 0x67073460722FE3AELL) > p_38))) , (safe_mod_func_int32_t_s_s((1UL || (*p_37)), p_39)))) & 0x68DA83FFA3A10D80LL);
                        if (p_38)
                            break;
                        l_881 = &g_552[2][3][0];
                    }
                    (*l_881) = ((((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(l_886[0][0], 5L)) & ((*p_37) , (&g_244 == l_887[0]))), (((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((g_246[1].f0 & ((*l_691) & 0x0AL)), (~((((safe_mod_func_int8_t_s_s((*l_691), 0xCEL)) ^ l_895) || p_39) , l_72)))) < (*l_881)), g_43)) != p_39) < l_896))) & (**g_293)) || (*l_881)) ^ 0x4B6F7C4861B69521LL);
                }
                else
                {
                    uint64_t **l_926[9][2] = {{&g_294[2],&g_294[2]},{&g_294[2],&g_294[2]},{&g_294[2],&l_676},{&g_294[2],(void*)0},{&g_294[2],&g_294[2]},{(void*)0,&l_676},{(void*)0,&g_294[2]},{&g_294[2],(void*)0},{&g_294[2],&l_676}};
                    int32_t l_938 = (-1L);
                    int32_t l_966 = 0x8A3AFB0FL;
                    int32_t l_970[4][3][9] = {{{(-5L),(-5L),(-1L),(-5L),(-5L),(-1L),(-5L),(-5L),(-1L)},{0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L,0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L,0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L},{(-5L),(-5L),(-1L),(-5L),(-5L),(-1L),(-5L),(-5L),(-1L)}},{{0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L,0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L,0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L},{(-5L),(-5L),(-1L),(-5L),(-5L),(-1L),(-5L),(-5L),(-1L)},{0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L,0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L,0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L}},{{(-5L),(-5L),(-1L),(-5L),(-5L),(-1L),(-5L),(-5L),(-1L)},{0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L,0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L,0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L},{(-5L),(-5L),(-1L),(-5L),(-5L),(-1L),(-5L),(-5L),(-1L)}},{{0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L,0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L,0xC3A9BB74L,0xC3A9BB74L,0xAD8CC9A6L},{(-5L),(-5L),(-1L),(-5L),0xACE2B411L,(-5L),0xACE2B411L,0xACE2B411L,(-5L)},{0x42B6BBBEL,0x42B6BBBEL,0xC3A9BB74L,0x42B6BBBEL,0x42B6BBBEL,0xC3A9BB74L,0x42B6BBBEL,0x42B6BBBEL,0xC3A9BB74L}}};
                    int i, j, k;
                    l_748[0] &= (((p_38 < ((safe_sub_func_uint32_t_u_u(((0L && (safe_sub_func_uint8_t_u_u(254UL, 0L))) | (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u(((((*g_245) , p_38) , ((g_919 = ((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s(g_918[7][8], 0x18668CF3L)) & l_686), g_87[0])), (*l_881))), 10)), p_39)) < 1L), 0xB137L)) || (-2L))) & p_39)) <= 0x1511L))), 65535UL)), l_762))), l_920)) >= (*p_37))) ^ 65535UL) > g_87[1]);
                    if ((g_22 && g_778[0][0][0]))
                    {
                        uint64_t ***l_927[8][5] = {{&g_293,&g_293,&g_293,&g_293,&g_293},{&g_293,&g_293,&g_293,&g_293,&g_293},{&g_293,&g_293,&g_293,&g_293,&g_293},{&g_293,&g_293,&g_293,&g_293,&g_293},{&g_293,&g_293,&g_293,&g_293,&g_293},{&g_293,&g_293,&g_293,&g_293,&g_293},{&g_293,&g_293,&g_293,&g_293,&g_293},{&g_293,&g_293,&g_293,&g_293,&g_293}};
                        int32_t l_936 = (-1L);
                        uint32_t *l_937 = &g_325;
                        int i, j;
                        (*l_691) = (l_921 == (void*)0);
                        (*l_691) = (~(safe_rshift_func_int16_t_s_u(0x67F2L, 5)));
                        l_757 |= (((p_39 , (0UL | l_925)) == (((l_928 = (l_926[3][1] = &g_294[2])) == ((~(((((*l_937) = (((((((safe_add_func_uint64_t_u_u((0xD668D949L != (0xDFBFFE98L == ((*l_691) = (safe_add_func_uint32_t_u_u(((p_40 != (((safe_sub_func_uint16_t_u_u((((*g_245) , p_40) | 0xD9000317L), (*l_881))) , (*p_37)) >= p_38)) >= 0L), p_39))))), 0x9FE58BA5779803F1LL)) , 0x94L) || g_131) , (void*)0) != (void*)0) >= 0x888BA867A22DB10ELL) < l_936)) , (*l_691)) | l_938) ^ p_38)) , &g_294[0])) && l_939[0])) == 7L);
                    }
                    else
                    {
                        const int8_t l_962 = 0x8AL;
                        uint8_t l_963 = 0x76L;
                        int32_t *l_965[8][10][2] = {{{&l_748[1],(void*)0},{&g_552[2][4][0],&l_938},{(void*)0,&l_758},{&l_748[1],(void*)0},{&l_801,&l_938},{(void*)0,&l_763},{(void*)0,&l_748[1]},{&l_816,&l_763},{&l_938,(void*)0},{(void*)0,&l_762}},{{(void*)0,&l_748[1]},{(void*)0,&l_763},{(void*)0,&g_221},{&l_748[0],&l_750},{&l_748[1],&l_763},{&l_757,&l_749},{&l_762,&l_763},{&g_552[2][3][0],&l_748[1]},{&l_801,&g_552[2][4][0]},{&l_749,&l_748[1]}},{{&l_748[0],&l_750},{(void*)0,(void*)0},{&l_763,&l_763},{&g_552[2][4][0],&l_762},{&l_762,&l_750},{&l_799,&g_552[2][4][0]},{&l_751,&l_938},{(void*)0,&l_750},{&g_552[2][3][0],&l_799},{&l_757,(void*)0}},{{&l_938,&l_758},{&l_762,&l_750},{&l_763,&l_763},{&l_763,&l_763},{&l_763,&l_750},{&l_762,&l_758},{&l_938,(void*)0},{&l_757,&l_799},{&g_552[2][3][0],&l_750},{(void*)0,&l_938}},{{&l_751,&g_552[2][4][0]},{&l_799,&l_750},{&l_762,&l_762},{&g_552[2][4][0],&l_763},{&l_763,(void*)0},{(void*)0,&l_750},{&l_748[0],&l_748[1]},{&l_749,&g_552[2][4][0]},{&l_801,&l_748[1]},{&g_552[2][3][0],&l_763}},{{&l_762,&l_749},{&l_757,&l_763},{&l_748[1],&l_750},{&l_748[0],&g_221},{(void*)0,&l_763},{(void*)0,&l_748[1]},{(void*)0,&l_762},{(void*)0,(void*)0},{&l_938,&l_763},{&l_816,&l_748[1]}},{{(void*)0,&l_763},{(void*)0,&l_938},{&l_801,(void*)0},{&l_748[1],&l_758},{(void*)0,&l_938},{&g_552[2][4][0],(void*)0},{&l_748[1],&l_748[1]},{&l_763,&g_221},{(void*)0,&l_801},{(void*)0,&l_753}},{{&l_964,(void*)0},{&l_762,&l_763},{&l_762,(void*)0},{&l_964,&l_753},{(void*)0,&l_801},{&l_765[4],&l_763},{&l_763,&l_762},{&l_762,(void*)0},{(void*)0,&l_816},{(void*)0,&l_751}}};
                        int32_t l_967 = (-1L);
                        int i, j, k;
                        (*l_691) = (safe_mul_func_int8_t_s_s(0x29L, p_39));
                        l_964 = ((safe_rshift_func_uint8_t_u_u(0x11L, 7)) , (((safe_sub_func_int8_t_s_s((((((*l_677) &= 0x1640EC0B07522E02LL) == (safe_sub_func_uint64_t_u_u(((1UL < (safe_mod_func_int8_t_s_s((((*l_670) = l_689) && ((safe_lshift_func_int8_t_s_u(p_39, g_321)) == ((safe_rshift_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u(((0x16A95CCA670B6578LL | (safe_lshift_func_uint16_t_u_s((((p_39 >= l_938) & (**g_293)) && l_962), (*l_691)))) > 0UL), l_963)) , 0xD6L) < g_778[4][0][5]), 2)) < l_938))), g_184[4]))) ^ p_39), 1UL))) > p_40) < l_962), g_246[1].f0)) >= p_39) <= l_962));
                        l_985[0][5][1]++;
                    }
                }
            }
        }
    }
    return g_919;
}







static int32_t * func_46(union U0 p_47, uint32_t p_48, uint16_t p_49, uint8_t p_50)
{
    const int32_t l_526 = (-1L);
    int32_t *l_527 = &g_221;
    int16_t l_556 = 0x9878L;
    int32_t l_572 = 1L;
    int32_t l_584 = (-5L);
    int32_t *l_660 = (void*)0;
    int32_t *l_661 = &g_552[2][3][0];
    (*l_527) = l_526;
    for (p_47.f0 = 2; (p_47.f0 >= 0); p_47.f0 -= 1)
    {
        int32_t *l_528 = &g_221;
        int32_t **l_529 = &l_528;
        int32_t l_561 = 3L;
        uint64_t ***l_614 = &g_293;
        const union U0 l_634[6][8] = {{{-1L},{0xC2L},{-1L},{0xC2L},{-1L},{0xC2L},{-1L},{0xC2L}},{{-1L},{0xC2L},{-1L},{0xC2L},{-1L},{0xC2L},{-1L},{0xC2L}},{{-1L},{0xC2L},{-1L},{0xC2L},{-1L},{0xC2L},{-1L},{0xC2L}},{{-1L},{0xC2L},{-1L},{0xC2L},{-1L},{0xC2L},{-1L},{0xC2L}},{{-1L},{0xC2L},{-1L},{0xC2L},{-1L},{0xC2L},{-1L},{0xC2L}},{{-1L},{0xC2L},{-1L},{0xC2L},{-1L},{0xC2L},{-1L},{0xC2L}}};
        uint32_t l_646 = 0x205E264AL;
        int i, j;
        if (((g_91[p_47.f0] >= (&l_526 == ((*l_529) = l_528))) <= ((void*)0 == &l_527)))
        {
            uint8_t *l_550 = (void*)0;
            int32_t *l_551 = &g_552[2][3][0];
            int32_t l_555 = 7L;
            int32_t l_557[6][6][1] = {{{(-3L)},{0x1D2F544EL},{(-3L)},{0x1D2F544EL},{(-3L)},{0x1D2F544EL}},{{(-3L)},{0x1D2F544EL},{(-3L)},{0x1D2F544EL},{(-3L)},{0x1D2F544EL}},{{(-3L)},{0x1D2F544EL},{(-3L)},{0x1D2F544EL},{(-3L)},{0x1D2F544EL}},{{(-3L)},{0x1D2F544EL},{(-3L)},{0x1D2F544EL},{(-3L)},{0x1D2F544EL}},{{(-3L)},{0x1D2F544EL},{(-3L)},{0x1D2F544EL},{(-3L)},{0x1D2F544EL}},{{(-3L)},{0x1D2F544EL},{(-3L)},{0x1D2F544EL},{(-3L)},{0x1D2F544EL}}};
            int8_t l_558 = 1L;
            int32_t l_582 = 0x9EEE4284L;
            int i, j, k;
            (*l_528) &= ((*g_245) , 0x1B8BC197L);
            if (((((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_129[(p_47.f0 + 4)], (((!0x0DADA440L) < ((safe_mod_func_int32_t_s_s((safe_unary_minus_func_int32_t_s(((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((g_312 , (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((*l_527), 3)), (safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((((*l_551) = (g_129[(p_47.f0 + 4)] <= (g_201 ^= 0x3FL))) , (safe_div_func_int64_t_s_s(l_555, 0x7C5FCF85BDFB23EFLL))), ((l_557[0][4][0] = l_556) | 1L))), g_184[4]))))), 0xFBE4L)), p_49)) >= g_452))), 0x666100AEL)) != p_49)) , p_50))), 0xDEL)) > g_185[2][4][3]) ^ p_48) ^ p_49))
            {
                uint32_t l_585 = 0x5B1017EFL;
                uint16_t *l_600[1];
                int32_t l_613[1];
                int32_t l_615[7][4][9] = {{{0x337AA3CFL,0x5CA2923BL,0x5CA2923BL,0x337AA3CFL,0x6EE13196L,1L,(-1L),(-1L),6L},{0x337AA3CFL,(-2L),0x886CC487L,1L,6L,0x6EE13196L,0x6EE13196L,6L,1L},{0L,1L,0L,0x886CC487L,0x6EE13196L,(-1L),(-1L),(-4L),1L},{0xAEC50B3BL,0L,6L,(-1L),0x5CA2923BL,(-4L),0x5CA2923BL,(-1L),6L}},{{1L,1L,1L,0x886CC487L,0xAEC50B3BL,0L,6L,(-1L),0x5CA2923BL},{(-1L),(-1L),(-4L),1L,0xCB5DB2A8L,0xCB5DB2A8L,1L,(-4L),(-1L)},{0xCB5DB2A8L,0xB358F7B0L,1L,0x337AA3CFL,(-2L),0x886CC487L,1L,6L,0x6EE13196L},{(-1L),(-1L),6L,(-1L),0L,(-1L),6L,(-1L),(-1L)}},{{(-2L),0xB358F7B0L,0L,0L,1L,(-1L),0x5CA2923BL,1L,(-1L)},{0xB358F7B0L,(-1L),0x886CC487L,0xAEC50B3BL,0xAEC50B3BL,(-2L),(-1L),0x337AA3CFL,0xCB5DB2A8L},{0x5CA2923BL,(-1L),6L,0L,0xAEC50B3BL,0x886CC487L,1L,1L,1L},{0xB358F7B0L,0x6EE13196L,(-1L),0x337AA3CFL,(-1L),0x6EE13196L,0xB358F7B0L,0x886CC487L,0xCB5DB2A8L}},{{0x886CC487L,(-1L),0xB358F7B0L,0x337AA3CFL,1L,0xAEC50B3BL,0L,(-1L),0L},{0L,0x5CA2923BL,0L,0L,0x5CA2923BL,0L,0xCB5DB2A8L,0x886CC487L,0xB358F7B0L},{(-1L),6L,0L,0xAEC50B3BL,0x886CC487L,1L,1L,1L,1L},{0L,1L,0xB358F7B0L,1L,0L,(-1L),0xCB5DB2A8L,0x337AA3CFL,(-1L)}},{{0x6EE13196L,1L,(-1L),(-1L),6L,(-1L),0L,(-1L),6L},{0xCB5DB2A8L,6L,6L,0xCB5DB2A8L,1L,(-1L),0xB358F7B0L,0L,(-4L)},{0xCB5DB2A8L,0x5CA2923BL,(-2L),(-1L),(-4L),1L,1L,(-4L),(-1L)},{0x6EE13196L,(-1L),0x6EE13196L,(-2L),1L,0L,(-1L),0xAEC50B3BL,(-1L)}},{{0L,0x6EE13196L,(-4L),0xB358F7B0L,6L,0xAEC50B3BL,6L,0xB358F7B0L,(-4L)},{(-1L),(-1L),(-1L),(-2L),0L,0x6EE13196L,(-4L),0xB358F7B0L,6L},{0L,(-1L),0xAEC50B3BL,(-1L),0x886CC487L,0x886CC487L,(-1L),0xAEC50B3BL,(-1L)},{0x886CC487L,0x337AA3CFL,(-1L),0xCB5DB2A8L,0x5CA2923BL,(-2L),(-1L),(-4L),1L}},{{0xB358F7B0L,0L,(-4L),(-1L),1L,(-1L),(-4L),0L,0xB358F7B0L},{0x5CA2923BL,0x337AA3CFL,0x6EE13196L,1L,(-1L),(-1L),6L,(-1L),0L},{0x337AA3CFL,(-1L),(-2L),0xAEC50B3BL,0xAEC50B3BL,(-2L),(-1L),0x337AA3CFL,0xCB5DB2A8L},{0x5CA2923BL,(-1L),6L,0L,0xAEC50B3BL,0x886CC487L,1L,1L,1L}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_600[i] = &g_43;
                for (i = 0; i < 1; i++)
                    l_613[i] = (-1L);
                (*l_527) = (-6L);
                for (g_122 = 2; (g_122 >= 0); g_122 -= 1)
                {
                    uint32_t *l_590 = &l_585;
                    uint32_t **l_589 = &l_590;
                    uint32_t ***l_588 = &l_589;
                    int32_t l_592 = (-1L);
                    for (g_312 = 0; (g_312 <= 6); g_312 += 1)
                    {
                        int32_t *l_559 = &l_557[1][3][0];
                        int32_t *l_560 = (void*)0;
                        int32_t *l_562 = &l_557[2][5][0];
                        int32_t *l_563 = (void*)0;
                        int32_t *l_564 = &g_221;
                        int32_t *l_565 = &l_557[0][4][0];
                        int32_t *l_566 = &l_557[0][4][0];
                        int32_t *l_567 = &g_552[2][3][0];
                        int32_t *l_568 = (void*)0;
                        int32_t *l_569 = &l_557[0][4][0];
                        int32_t *l_570 = &l_557[5][1][0];
                        int32_t *l_571 = &l_557[0][4][0];
                        int32_t *l_573 = &l_557[0][4][0];
                        int32_t *l_574 = &g_552[2][5][1];
                        int32_t *l_575 = &l_557[0][4][0];
                        int32_t *l_576 = (void*)0;
                        int32_t *l_577 = &l_557[0][4][0];
                        int32_t *l_578 = (void*)0;
                        int32_t *l_579 = &g_552[2][3][0];
                        int32_t *l_580 = &l_572;
                        int32_t *l_581 = &g_552[2][3][0];
                        int32_t *l_583[8][1];
                        int i, j;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_583[i][j] = &g_221;
                        }
                        (**l_529) &= l_558;
                        l_585++;
                        (*l_529) = &g_552[2][3][0];
                        if (p_48)
                            continue;
                    }
                    (*l_588) = (void*)0;
                    (*l_551) &= (((+l_592) | p_49) , (*l_527));
                }
                if (p_50)
                    break;
                l_557[0][4][0] = ((safe_unary_minus_func_uint16_t_u(((safe_mod_func_uint32_t_u_u(((g_129[(p_47.f0 + 4)] = p_49) , (safe_div_func_uint16_t_u_u((0L & ((p_50 = (((safe_mul_func_uint16_t_u_u((p_49--), g_244.f0)) | ((~(g_91[p_47.f0] &= (&g_91[0] == &g_91[0]))) == (safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint16_t_u_s((l_615[2][0][1] |= ((safe_lshift_func_uint8_t_u_s((((((safe_lshift_func_uint16_t_u_u(((*l_528) = (p_50 | ((**g_293) = ((p_48 & (safe_mul_func_int16_t_s_s(g_185[2][4][3], ((g_43 ^= (l_613[0] &= g_129[5])) == g_185[0][3][5])))) | 0x1543F78BL)))), 4)) , l_614) != &g_293) , l_613[0]) | g_129[(p_47.f0 + 4)]), 6)) && 0x4714396F752C2775LL)), 5)))))) & p_48)) , g_452)), g_87[0]))), 8L)) <= g_185[2][4][3]))) & l_585);
            }
            else
            {
                uint64_t l_626[2][7][5] = {{{3UL,18446744073709551611UL,0x4FA6685AF391F1AFLL,0UL,18446744073709551608UL},{0x7C17C1646A34A7A8LL,0xDE02F41B75AB054ELL,0xDE02F41B75AB054ELL,0x7C17C1646A34A7A8LL,3UL},{0x7C17C1646A34A7A8LL,0xE312AAC90CE0CF0ALL,0x99771193891E9B16LL,0x38B6D8B68102430DLL,0xE312AAC90CE0CF0ALL},{3UL,18446744073709551610UL,0xEC2C819C4D017344LL,0x4FA6685AF391F1AFLL,7UL},{18446744073709551610UL,3UL,0x2C981E5381458D9FLL,0x4FA6685AF391F1AFLL,0x76FCC83216532A57LL},{0xEC2C819C4D017344LL,0xDE02F41B75AB054ELL,18446744073709551611UL,0xDE02F41B75AB054ELL,0xEC2C819C4D017344LL},{0x2C981E5381458D9FLL,0xDE02F41B75AB054ELL,0x232515B7C3415375LL,0x99771193891E9B16LL,4UL}},{{4UL,0x232515B7C3415375LL,0x76FCC83216532A57LL,0xEC2C819C4D017344LL,0x9A42D45ED98E562BLL},{0xDE02F41B75AB054ELL,0UL,0xE312AAC90CE0CF0ALL,0xDE02F41B75AB054ELL,4UL},{0x12C9894A6329B8A5LL,0xEC2C819C4D017344LL,3UL,3UL,0xEC2C819C4D017344LL},{4UL,0x2C981E5381458D9FLL,3UL,3UL,0x76FCC83216532A57LL},{0UL,4UL,0xE312AAC90CE0CF0ALL,0x4FA6685AF391F1AFLL,3UL},{0x99771193891E9B16LL,0xDE02F41B75AB054ELL,0x76FCC83216532A57LL,0x12C9894A6329B8A5LL,0xEC2C819C4D017344LL},{0UL,0x12C9894A6329B8A5LL,0x232515B7C3415375LL,0xEC2C819C4D017344LL,0x232515B7C3415375LL}}};
                int i, j, k;
                (**l_529) = p_47.f0;
                for (l_558 = 0; (l_558 > 12); l_558 = safe_add_func_int64_t_s_s(l_558, 1))
                {
                    int16_t *l_620 = &g_87[0];
                    uint8_t *l_621 = (void*)0;
                    uint8_t *l_622 = &g_201;
                    uint8_t *l_627 = &g_312;
                    if ((safe_div_func_uint8_t_u_u((((*l_620) = p_48) , ((*l_622) |= 0x55L)), ((safe_mod_func_uint64_t_u_u(p_49, (~l_626[0][1][0]))) , ((*l_627) = p_47.f0)))))
                    {
                        (**l_529) = p_48;
                    }
                    else
                    {
                        if (p_50)
                            break;
                        if ((*l_528))
                            continue;
                    }
                }
                (*l_529) = (*l_529);
            }
        }
        else
        {
            int32_t **l_635 = &g_232[3][2][2];
            int32_t **l_636 = &g_232[3][2][2];
            int32_t **l_637 = &g_232[3][2][2];
            int32_t **l_638 = &g_232[3][3][2];
            int32_t **l_639[1];
            int i;
            for (i = 0; i < 1; i++)
                l_639[i] = &l_527;
            (*l_528) = ((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(1L, (l_634[3][4] , (*l_528)))), ((&g_552[2][3][0] != (l_527 = (*l_529))) <= (l_556 , ((l_561 = (safe_sub_func_uint64_t_u_u(18446744073709551615UL, ((((safe_add_func_uint32_t_u_u(g_104, (safe_sub_func_uint64_t_u_u((((((void*)0 == &g_294[4]) == g_87[1]) <= (**l_529)) && l_572), g_3)))) || (**l_529)) != p_48) , 0x501A42E7D7244620LL)))) <= p_50))))), (**l_529))) ^ (**l_529));
        }
        (*l_528) = l_646;
        (*l_529) = &g_3;
        if ((*l_527))
            continue;
    }
    if ((safe_add_func_int16_t_s_s((*l_527), 0UL)))
    {
        uint32_t l_656[2];
        int i;
        for (i = 0; i < 2; i++)
            l_656[i] = 18446744073709551608UL;
        for (g_74 = 0; (g_74 <= (-19)); g_74 = safe_sub_func_int8_t_s_s(g_74, 4))
        {
            int32_t *l_655 = &g_552[2][3][0];
            if (p_47.f0)
            {
                int32_t *l_651 = (void*)0;
                int32_t **l_652 = (void*)0;
                int32_t **l_653 = (void*)0;
                int32_t **l_654[1][10];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_654[i][j] = &l_527;
                }
                l_655 = l_651;
            }
            else
            {
                l_656[0]++;
            }
        }
    }
    else
    {
        int32_t **l_659[3];
        int i;
        for (i = 0; i < 3; i++)
            l_659[i] = &g_232[3][2][2];
        g_232[3][2][2] = &g_552[7][0][0];
    }
    (*l_661) |= ((*l_527) = (*l_527));
    return &g_3;
}







static union U0 func_51(int8_t p_52)
{
    int16_t l_187 = 0xEB8FL;
    int32_t l_188[4] = {(-1L),(-1L),(-1L),(-1L)};
    uint32_t *l_218 = (void*)0;
    int32_t l_219 = 0L;
    const union U0 *l_243 = &g_244;
    int16_t l_270[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
    uint64_t l_290 = 9UL;
    int8_t l_354 = 0x13L;
    int32_t l_356[6][9] = {{(-1L),(-3L),(-1L),1L,(-1L),1L,(-1L),(-3L),(-1L)},{(-1L),1L,0x40B8C9EBL,(-1L),0x35DF6C03L,1L,(-1L),0x07AE0362L,(-3L)},{1L,1L,0xEDD31E41L,(-7L),(-7L),0xEDD31E41L,1L,1L,0x754496E0L},{(-1L),0x35DF6C03L,(-1L),0x48D2584CL,(-7L),5L,0L,(-1L),(-1L)},{(-1L),0x40B8C9EBL,0x35DF6C03L,1L,0x35DF6C03L,0x40B8C9EBL,(-1L),5L,0x754496E0L},{5L,0x07AE0362L,(-1L),1L,(-1L),(-7L),(-3L),0x35DF6C03L,(-3L)}};
    int8_t l_367 = 0x19L;
    uint32_t l_368[1];
    uint64_t **l_431 = &g_294[0];
    uint8_t l_477 = 253UL;
    int32_t **l_518 = &g_232[3][2][2];
    uint8_t *l_519 = &l_477;
    int i, j;
    for (i = 0; i < 1; i++)
        l_368[i] = 0xCC3408FFL;
    l_188[0] |= l_187;
lbl_455:
    for (g_74 = (-16); (g_74 == (-30)); --g_74)
    {
        int32_t l_195 = 0xE049F0CEL;
        uint8_t *l_200 = &g_201;
        union U0 l_228 = {0xA1L};
        const uint32_t l_235 = 0x125314CBL;
        int32_t * const l_268 = (void*)0;
        int32_t l_271 = (-7L);
        int32_t l_285 = (-1L);
        int32_t l_288 = 1L;
        int32_t l_289 = 0xA489E2ECL;
        int32_t l_313 = 0xAC0A0C22L;
        int16_t *l_336[3][9] = {{&g_185[2][4][3],&g_87[0],&g_87[0],&g_185[2][4][3],&g_185[2][4][3],&g_87[0],&g_87[0],&g_185[2][4][3],&g_185[2][4][3]},{&g_87[1],(void*)0,&g_87[1],(void*)0,&g_87[1],(void*)0,&g_87[1],(void*)0,&g_87[1]},{&g_185[2][4][3],&g_185[2][4][3],&g_87[0],&g_87[0],&g_185[2][4][3],&g_185[2][4][3],&g_87[0],&g_87[0],&g_185[2][4][3]}};
        uint64_t ***l_338 = &g_293;
        uint64_t ****l_337 = &l_338;
        uint64_t ***l_339 = (void*)0;
        int32_t *l_343 = &l_313;
        int8_t l_355 = 0x02L;
        int i, j;
        if ((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(l_195, ((l_187 || ((0x04132071L > 0xEE3B782AL) >= 5UL)) != (((((((((safe_sub_func_uint64_t_u_u((p_52 & (((p_52 > (((*l_200) = (p_52 || ((g_185[1][0][2] < 1UL) < l_188[0]))) < l_187)) <= p_52) < l_187)), p_52)) || 0x8ACA71B24F34597DLL) | l_187) || 0x90B889745CED4DE4LL) < 0xF74ECC6D06614CE2LL) && g_4) & p_52) , 0x7B45A8BD48D08612LL) & 0x72B09FDD955504D0LL)))) >= l_195), g_184[4])))
        {
            int32_t l_222 = (-1L);
            int32_t *l_225[5][3] = {{&l_188[0],&l_188[0],&l_219},{&l_188[0],&l_219,&l_219},{&l_219,&l_188[2],&l_219},{&l_188[0],&l_188[2],&l_188[0]},{&l_188[0],&l_219,&l_219}};
            int32_t l_239[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_239[i][j] = 0xE4413314L;
            }
            for (g_131 = 0; (g_131 >= 52); g_131 = safe_add_func_int8_t_s_s(g_131, 5))
            {
                uint64_t *l_213 = (void*)0;
                uint64_t *l_214 = &g_22;
                int16_t *l_217 = &g_74;
                int32_t *l_220 = &g_221;
                if (((((g_185[0][2][5] = (l_195 > (((safe_sub_func_uint32_t_u_u(l_188[1], ((*l_220) = ((safe_sub_func_uint64_t_u_u(0UL, ((((0xCCL <= (safe_mod_func_uint64_t_u_u(((+l_187) <= (0x00C7963A9DBF6C95LL < (l_219 = (((safe_sub_func_int64_t_s_s((((*l_214) = l_187) , l_187), (safe_rshift_func_uint8_t_u_u((((((((void*)0 == l_217) < l_187) , l_218) != l_218) && g_131) , 1UL), 1)))) > g_91[1]) < 0x956CL)))), g_122))) > p_52) > p_52) && p_52))) || g_185[2][4][6])))) | l_222) >= p_52))) , p_52) || 0x6E2AL) >= g_43))
                {
                    for (l_187 = (-28); (l_187 >= (-25)); ++l_187)
                    {
                        int32_t **l_226 = &l_225[3][1];
                        (*l_226) = l_225[0][0];
                        if (g_227)
                            continue;
                    }
                    return l_228;
                }
                else
                {
                    int32_t *l_231 = &l_188[3];
                    for (l_219 = (-29); (l_219 <= 13); l_219 = safe_add_func_uint16_t_u_u(l_219, 9))
                    {
                        l_231 = l_220;
                    }
                    g_232[3][2][2] = &l_219;
                    (*l_220) = (safe_lshift_func_uint8_t_u_s((g_3 | l_235), 3));
                    for (l_222 = 0; (l_222 <= (-4)); l_222--)
                    {
                        int32_t **l_238 = &g_232[3][2][2];
                        (*l_238) = (void*)0;
                        (*l_231) = l_188[2];
                        (*l_231) = p_52;
                    }
                }
            }
            for (g_221 = 1; (g_221 <= 6); g_221 += 1)
            {
                uint32_t l_240[4][1] = {{0x87139D68L},{0xF628736EL},{0x87139D68L},{0xF628736EL}};
                int i, j;
                --l_240[2][0];
            }
            l_219 |= 0x0654149EL;
        }
        else
        {
            uint64_t *l_269[9][5][1] = {{{&g_184[0]},{&g_184[3]},{&g_22},{(void*)0},{&g_22}},{{&g_184[3]},{&g_184[0]},{&g_184[0]},{&g_184[3]},{&g_22}},{{(void*)0},{&g_22},{&g_184[3]},{&g_184[0]},{&g_184[0]}},{{&g_184[3]},{&g_22},{(void*)0},{&g_22},{&g_184[3]}},{{&g_184[0]},{&g_184[0]},{&g_184[3]},{&g_22},{(void*)0}},{{&g_22},{&g_184[3]},{&g_184[0]},{&g_184[0]},{&g_184[3]}},{{&g_184[3]},{&g_184[4]},{&g_184[3]},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{&g_184[3]},{&g_184[4]},{&g_184[3]}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{&g_184[3]}}};
            int32_t l_272 = 0x1EE1E09EL;
            union U0 l_273 = {0xEAL};
            int32_t l_286 = 0x7A8C7C72L;
            int32_t l_287[4];
            uint64_t ***l_295 = &g_293;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_287[i] = 0xFB855981L;
            g_245 = l_243;
            if (p_52)
                continue;
            if ((((l_219 &= (safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s(0x2BFBAC01L, l_188[0])), (safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_s(1UL, 10)) != ((*l_200) = (18446744073709551613UL ^ (g_87[0] != ((~(g_184[4] = (1L || (((safe_add_func_int8_t_s_s((0xF632706BL & (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((p_52 , l_268) == &g_4), g_3)), p_52)), g_129[5]))), g_104)) <= 0xFD28B290L) == l_235)))) & l_270[7]))))) != l_271) != g_91[0]) == p_52), 1UL)) , (-8L)) | p_52), 0xC1D3L)), g_43))))) , 1UL) , l_272))
            {
                return l_273;
            }
            else
            {
                int32_t **l_274 = &g_232[1][3][4];
                int32_t *l_275 = &l_188[2];
                int32_t *l_276 = &l_219;
                int32_t *l_277 = &l_219;
                int32_t *l_278 = &l_188[0];
                int32_t *l_279 = &l_188[0];
                int32_t *l_280 = &l_219;
                int32_t l_281 = 0L;
                int32_t *l_282 = &l_281;
                int32_t *l_283[7] = {&l_188[2],&l_188[2],&l_188[2],&l_188[2],&l_188[2],&l_188[2],&l_188[2]};
                int16_t l_284 = 0L;
                int i;
                (*l_274) = (void*)0;
                ++l_290;
            }
            (*l_295) = g_293;
        }
        for (l_288 = 0; (l_288 <= 3); l_288 += 1)
        {
            int32_t *l_298 = &l_285;
            uint16_t *l_307 = &g_43;
            uint32_t *l_310 = &g_104;
            uint8_t *l_311 = &g_312;
            int32_t *l_322 = &l_188[l_288];
            int32_t *l_323 = &g_221;
            int32_t *l_324[7] = {&l_188[0],&l_188[0],&l_188[0],&l_188[0],&l_188[0],&l_188[0],&l_188[0]};
            int i;
            l_313 &= ((((safe_add_func_int32_t_s_s((((*l_298) |= l_188[l_288]) | (safe_add_func_uint8_t_u_u(0UL, 0L))), ((((((((l_289 & ((((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((*l_311) = (((((void*)0 == l_307) < l_270[5]) == (l_219 , ((((*l_310) = ((safe_add_func_uint8_t_u_u(((*l_200) = 252UL), (-7L))) & 9L)) || p_52) & 0x7170A34BB5C3AA3BLL))) | p_52)), p_52)), p_52)) ^ (-1L)) , l_270[7]) >= l_219)) && p_52) || p_52) < (**g_293)) & 8UL) | g_91[0]) < (-1L)) == g_3))) || (*l_298)) <= l_188[2]) < p_52);
            for (l_271 = (-11); (l_271 > 4); ++l_271)
            {
                uint64_t l_318 = 18446744073709551615UL;
                int32_t *l_319 = (void*)0;
                int32_t *l_320[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_320[i] = &l_188[2];
                l_188[0] ^= (safe_mod_func_uint64_t_u_u((p_52 | (*l_298)), l_318));
            }
            if (g_321)
                break;
            ++g_325;
        }
        (*l_343) |= ((9UL != (((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((p_52 <= 0xC0EEL), (safe_div_func_uint16_t_u_u(g_129[5], (g_227 = (g_185[2][4][3] |= 9L)))))), (((*l_337) = (void*)0) != l_339))) , (safe_unary_minus_func_int16_t_s(((g_184[3] ^ (safe_add_func_uint32_t_u_u(4UL, g_129[6]))) | l_187)))) , 6UL), 13)) == g_246[1].f0) , p_52)) < (-8L));
        l_356[3][1] |= ((((l_243 == ((safe_sub_func_uint16_t_u_u((((g_91[1] | ((l_219 = (((g_131 == 6L) >= (*l_343)) , ((*l_200) |= (safe_div_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((**g_293) = 0x45DB1F9F6BFAA2CBLL), l_219)), 3)) < (((safe_sub_func_uint16_t_u_u((g_3 & l_354), p_52)) && 0x11L) , (-1L))), l_355))))) | 0xA3L)) < 1L) != l_270[7]), g_185[1][4][6])) , &g_244)) < p_52) || g_43) , l_188[0]);
    }
    for (l_290 = (-5); (l_290 > 23); l_290 = safe_add_func_uint64_t_u_u(l_290, 2))
    {
        int32_t *l_359 = (void*)0;
        int32_t *l_360 = &l_356[3][1];
        int32_t *l_361 = (void*)0;
        int32_t *l_362 = &l_219;
        int32_t *l_363 = &l_356[3][1];
        int32_t *l_364 = &l_219;
        int32_t *l_365 = (void*)0;
        int32_t *l_366[7] = {&l_356[4][2],&l_356[3][1],&l_356[3][1],&l_356[4][2],&l_356[3][1],&l_356[3][1],&l_356[4][2]};
        uint64_t l_382 = 0x98EF1BAC67C9084DLL;
        uint8_t * const l_425 = &g_312;
        uint64_t l_509 = 0x7AAE4016742B50ECLL;
        int16_t l_510[3];
        int32_t l_513 = 0x626EB689L;
        int64_t l_514[2][8][1] = {{{(-9L)},{0xC8F80B0F98DF71B5LL},{1L},{0x3448D23467864B7ALL},{0x3448D23467864B7ALL},{1L},{0xC8F80B0F98DF71B5LL},{(-9L)}},{{0xC8F80B0F98DF71B5LL},{1L},{0x3448D23467864B7ALL},{0x3448D23467864B7ALL},{1L},{0xC8F80B0F98DF71B5LL},{(-9L)},{0xC8F80B0F98DF71B5LL}}};
        uint16_t l_515 = 0UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_510[i] = 0x19D9L;
        ++l_368[0];
        for (g_74 = 0; (g_74 <= (-26)); --g_74)
        {
            int32_t l_381 = 0x240CD41CL;
            union U0 * const l_394 = &g_244;
            int32_t l_432 = 0x2D8758F1L;
            uint32_t *l_493 = &l_368[0];
            uint16_t *l_506 = &g_43;
            uint32_t l_511 = 18446744073709551615UL;
            int32_t l_512 = 4L;
            for (g_244.f1 = 19; (g_244.f1 > 28); g_244.f1 = safe_add_func_int64_t_s_s(g_244.f1, 6))
            {
                const uint32_t l_377[3] = {0x8A783AEDL,0x8A783AEDL,0x8A783AEDL};
                int32_t l_380 = (-8L);
                uint16_t *l_395 = (void*)0;
                uint16_t *l_396 = &g_43;
                int8_t *l_407 = &l_367;
                uint8_t *l_408 = &g_312;
                uint32_t l_409 = 0xB837798AL;
                uint32_t l_447 = 0x11D77B6DL;
                int i;
                for (g_22 = 0; (g_22 > 8); ++g_22)
                {
                    int64_t l_378[7][2] = {{0xD5B61872BC794F0ELL,0xD5B61872BC794F0ELL},{0xB106207E78FE0421LL,0xD5B61872BC794F0ELL},{0xD5B61872BC794F0ELL,0xB106207E78FE0421LL},{0xD5B61872BC794F0ELL,0xD5B61872BC794F0ELL},{0xB106207E78FE0421LL,0xD5B61872BC794F0ELL},{0xD5B61872BC794F0ELL,0xB106207E78FE0421LL},{0xD5B61872BC794F0ELL,0xD5B61872BC794F0ELL}};
                    int32_t l_379[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_379[i] = 0L;
                    (*l_362) = l_377[1];
                    l_378[2][0] = p_52;
                    l_382--;
                }
                if (((l_356[3][1] == ((*l_408) |= (safe_div_func_uint8_t_u_u(((!((*l_360) , ((l_219 = ((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((void*)0 == l_394), (0xBCL ^ p_52))), p_52)) == ((++(*l_396)) > (safe_mod_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((*l_407) = (safe_mod_func_uint64_t_u_u(p_52, (safe_mul_func_uint8_t_u_u((((l_270[4] | 1L) & 0xCDL) < g_201), p_52))))), 0x0AL)) == 1UL), g_221))))) ^ g_87[0]))) , l_380), p_52)))) , l_409))
                {
                    uint16_t l_412 = 0xA0FCL;
                    int32_t l_415[3][6] = {{(-6L),0xF371B4ADL,(-6L),(-6L),0xF371B4ADL,(-6L)},{(-6L),0xF371B4ADL,(-6L),(-6L),0xF371B4ADL,(-6L)},{(-6L),0xF371B4ADL,(-6L),(-6L),0xF371B4ADL,(-6L)}};
                    uint16_t *l_423 = (void*)0;
                    uint16_t *l_424 = &l_412;
                    const uint8_t *l_426 = &g_312;
                    int i, j;
                    for (l_367 = 0; (l_367 == (-9)); l_367--)
                    {
                        uint64_t l_416 = 0xD792CEEDB600DA55LL;
                        (*l_360) = (-3L);
                        ++l_412;
                        if (l_381)
                            break;
                        l_416++;
                    }
                    l_432 = ((g_74 > ((((safe_lshift_func_uint16_t_u_s(g_244.f0, (((*l_424) = ((*l_396)--)) ^ ((l_425 != l_426) >= (p_52 >= (safe_rshift_func_int8_t_s_u((l_381 || (safe_mod_func_uint8_t_u_u(p_52, (((void*)0 == l_431) & 1UL)))), p_52))))))) == g_244.f0) >= g_185[2][5][4]) , p_52)) > 0x3C67L);
                }
                else
                {
                    uint32_t *l_435 = (void*)0;
                    union U0 l_436 = {0x7FL};
                    int32_t l_445 = 0x480ECD03L;
                    if ((p_52 ^ (safe_lshift_func_uint8_t_u_u((&g_131 == l_435), ((1UL & (l_436 , (safe_mul_func_uint16_t_u_u(p_52, (safe_sub_func_int64_t_s_s(p_52, (safe_lshift_func_uint16_t_u_s((--(*l_396)), ((void*)0 != l_395))))))))) , g_22)))))
                    {
                        l_445 = ((*l_364) = l_380);
                        if (p_52)
                            break;
                    }
                    else
                    {
                        int64_t l_446[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_446[i] = 0x576C6910572C1804LL;
                        ++l_447;
                    }
                    if (l_380)
                        continue;
                }
            }
            for (l_187 = 0; (l_187 != (-24)); --l_187)
            {
                union U0 *l_456 = &g_244;
                for (l_219 = 0; (l_219 <= 2); l_219 += 1)
                {
                    union U0 l_458 = {-9L};
                    for (g_131 = 0; (g_131 <= 2); g_131 += 1)
                    {
                        union U0 **l_457 = &l_456;
                        int i;
                        --g_452;
                        if (g_321)
                            goto lbl_455;
                        (*l_457) = l_456;
                        if (g_91[g_131])
                            continue;
                    }
                    return l_458;
                }
                for (p_52 = (-4); (p_52 > (-30)); p_52 = safe_sub_func_int16_t_s_s(p_52, 5))
                {
                    return (*l_394);
                }
            }
            for (g_201 = 0; (g_201 <= 3); g_201 += 1)
            {
                int8_t *l_474 = &l_354;
                int8_t *l_475 = (void*)0;
                int8_t *l_476 = &g_244.f0;
                int i;
                l_188[g_201] = (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((l_270[3] && (((((safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(((((*l_476) = ((*l_474) &= ((p_52 && ((safe_div_func_int64_t_s_s(((*l_243) , (0xF3DD709AE37447B1LL | ((~(safe_rshift_func_int16_t_s_s(g_184[4], 10))) != ((((void*)0 == &g_91[0]) ^ g_184[3]) , l_219)))), p_52)) , 0UL)) > p_52))) != 0x02L) ^ 0x75L), (*l_362))) != g_246[1].f0) , g_43), p_52)) <= l_187) && p_52) != 1L) >= l_477)), g_91[0])), p_52));
                (*l_363) = (safe_mod_func_int32_t_s_s(p_52, (safe_add_func_uint64_t_u_u((+(+(p_52 && 1UL))), (l_432 , ((void*)0 == &g_293))))));
            }
            (*l_363) &= ((safe_mul_func_uint16_t_u_u(((((**l_431) = ((0xC37F6B4112D747DALL != (safe_mod_func_uint32_t_u_u(((((*l_364) >= (((safe_lshift_func_uint8_t_u_s(((~(g_129[2] , (safe_rshift_func_uint8_t_u_s((((--(*l_493)) != (((safe_div_func_uint16_t_u_u(g_227, l_188[0])) < (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((((*g_245) , (l_510[2] = ((((*l_506) = (g_185[0][4][0] , 0x1A80L)) != ((safe_add_func_uint64_t_u_u((((p_52 >= 248UL) ^ l_509) != g_129[5]), p_52)) >= 0UL)) & 0x9663L))) & l_290) & l_511), p_52)) >= p_52), 6)) <= g_122) , l_270[7]) & p_52) == l_512), 3)), p_52))) | 0UL)) & p_52), l_381)))) != l_512), 0)) , 4294967295UL) && g_74)) & g_3) && 0L), g_131))) & l_513)) , g_452) && l_381), 9L)) && l_477);
        }
        l_515--;
    }
    l_356[1][6] = (((l_518 == ((++(*l_519)) , &g_232[3][2][2])) && p_52) , ((safe_mod_func_int16_t_s_s(g_312, (safe_sub_func_uint64_t_u_u(((*l_431) == (*l_431)), g_91[0])))) & g_321));
    return (*g_245);
}







static uint64_t func_53(const uint64_t * const p_54, uint32_t p_55)
{
    int32_t l_89 = 0x6847A7A0L;
    int32_t l_92 = 0L;
    uint16_t l_121 = 65535UL;
    const uint32_t *l_132[1];
    uint32_t l_142 = 4294967286UL;
    int32_t *l_161[9] = {&l_92,&g_3,&l_92,&l_92,&g_3,&l_92,&l_92,&g_3,&l_92};
    int32_t **l_160 = &l_161[3];
    int32_t *l_162 = &g_4;
    int16_t *l_171[9] = {&g_87[0],&g_87[0],&g_87[0],&g_87[0],&g_87[0],&g_87[0],&g_87[0],&g_87[0],&g_87[0]};
    int64_t *l_179 = &g_91[0];
    union U0 l_180 = {0L};
    int16_t *l_181 = &g_87[1];
    uint64_t *l_182 = &g_22;
    uint64_t *l_183 = &g_184[4];
    int i;
    for (i = 0; i < 1; i++)
        l_132[i] = &g_104;
    for (g_74 = 22; (g_74 == 11); g_74 = safe_sub_func_uint64_t_u_u(g_74, 6))
    {
        int16_t l_88 = (-3L);
        int32_t *l_95 = &l_92;
        for (p_55 = 10; (p_55 >= 5); p_55--)
        {
            int32_t l_81 = 0x641B4341L;
            int16_t *l_86[1][4];
            int64_t *l_90[7][8] = {{&g_91[1],&g_91[0],&g_91[1],(void*)0,(void*)0,&g_91[1],&g_91[0],&g_91[1]},{&g_91[2],(void*)0,&g_91[0],(void*)0,&g_91[2],&g_91[2],(void*)0,&g_91[0]},{&g_91[2],&g_91[2],(void*)0,&g_91[0],(void*)0,&g_91[2],&g_91[2],(void*)0},{&g_91[1],(void*)0,(void*)0,&g_91[1],&g_91[0],&g_91[1],(void*)0,(void*)0},{(void*)0,&g_91[0],&g_91[0],&g_91[0],&g_91[0],(void*)0,&g_91[0],&g_91[0]},{&g_91[1],&g_91[0],&g_91[1],(void*)0,(void*)0,&g_91[1],&g_91[0],&g_91[1]},{&g_91[2],(void*)0,&g_91[0],(void*)0,&g_91[2],&g_91[2],(void*)0,&g_91[0]}};
            int32_t **l_126 = &l_95;
            uint32_t * const l_147[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_159 = &l_92;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_86[i][j] = &g_87[0];
            }
        }
    }
    (*l_160) = &l_92;
    (*l_160) = (g_104 , l_162);
    g_185[2][4][3] ^= ((safe_sub_func_uint16_t_u_u((((*l_183) &= ((*l_182) &= ((((((safe_mod_func_uint64_t_u_u(((((safe_rshift_func_uint16_t_u_s((*l_162), 2)) <= (g_87[1] = (((((safe_rshift_func_int8_t_s_u(g_87[0], 5)) < 0UL) >= (**l_160)) ^ (((void*)0 == l_171[0]) , ((safe_rshift_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((~((g_122 ^ (((*l_179) = 1L) , p_55)) , g_74)), 12)) > (*l_162)), g_87[0])) || p_55) & p_55), 2)) < g_131))) | 1L))) && g_122) , (*p_54)), 0x56F6DE51AEE02A26LL)) > g_4) , l_180) , l_181) == &g_74) >= p_55))) && g_87[0]), p_55)) ^ g_131);
    return (*l_162);
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
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_87[i], "g_87[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_91[i], "g_91[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_129[i], "g_129[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_131, "g_131", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_184[i], "g_184[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_185[i][j][k], "g_185[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_244.f0, "g_244.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_246[i].f0, "g_246[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_552[i][j][k], "g_552[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_688, "g_688", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_778[i][j][k], "g_778[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_818, "g_818", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_918[i][j], "g_918[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_919, "g_919", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1207, "g_1207", print_hash_value);
    transparent_crc(g_1280, "g_1280", print_hash_value);
    transparent_crc(g_1402, "g_1402", print_hash_value);
    transparent_crc(g_1403, "g_1403", print_hash_value);
    transparent_crc(g_1478, "g_1478", print_hash_value);
    transparent_crc(g_1508, "g_1508", print_hash_value);
    transparent_crc(g_1512, "g_1512", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
