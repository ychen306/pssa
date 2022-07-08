// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = EC076BFA
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
   uint32_t f0;
   int32_t f1;
   int8_t * f2;
};

union U1 {
   uint32_t f0;
   int8_t * f1;
};


static int64_t g_2[8][7] = {{2L,0xD3BED162C5D177CCLL,0xDF2EF51AE9A07B30LL,2L,0xDF2EF51AE9A07B30LL,0xD3BED162C5D177CCLL,2L},{0xF0BC5021C3A23FE5LL,7L,0xC7B7F609B2B534DELL,1L,0x50F6B34C266D8FF8LL,0xF88D96753F3AC9D7LL,0L},{2L,2L,(-1L),(-1L),2L,2L,0x0AD8EA5F34BDAC84LL},{0xDDCD16652D0DA0BDLL,(-5L),0xC7B7F609B2B534DELL,0xF0BC5021C3A23FE5LL,1L,0x50F6B34C266D8FF8LL,0x50F6B34C266D8FF8LL},{1L,0x72A8358BD4DFBD6CLL,0xDF2EF51AE9A07B30LL,0x72A8358BD4DFBD6CLL,1L,(-1L),0xD3BED162C5D177CCLL},{1L,(-5L),0x50F6B34C266D8FF8LL,7L,1L,0xDDCD16652D0DA0BDLL,1L},{1L,2L,2L,1L,0xD3BED162C5D177CCLL,(-1L),1L},{1L,0xF88D96753F3AC9D7LL,0xDDCD16652D0DA0BDLL,0x50F6B34C266D8FF8LL,(-5L),(-5L),0x50F6B34C266D8FF8LL}};
static int32_t g_8 = 1L;
static int32_t g_13[10][3] = {{5L,0x34FFDEABL,0x34FFDEABL},{(-2L),0x4486CAE8L,2L},{0x4C6F4446L,5L,0x70CC321AL},{(-2L),(-2L),1L},{5L,0x4C6F4446L,(-1L)},{0x4486CAE8L,(-2L),0x4486CAE8L},{0x34FFDEABL,5L,8L},{6L,0x4486CAE8L,0x4486CAE8L},{8L,0x34FFDEABL,(-1L)},{0x33D2AFDDL,6L,1L}};
static int32_t *g_32 = &g_13[1][0];
static int32_t **g_31 = &g_32;
static int32_t g_73 = 0x59E2267CL;
static int8_t g_78 = 0L;
static int16_t g_80 = 1L;
static int16_t *g_79 = &g_80;
static uint8_t g_109 = 255UL;
static int16_t g_120 = (-6L);
static union U0 g_124[2][8] = {{{0x78BC37ACL},{0UL},{0UL},{0x78BC37ACL},{0UL},{0UL},{0x78BC37ACL},{0UL}},{{0x78BC37ACL},{0x78BC37ACL},{2UL},{0x78BC37ACL},{0x78BC37ACL},{2UL},{0x78BC37ACL},{0x78BC37ACL}}};
static uint32_t g_138 = 18446744073709551612UL;
static union U1 *g_147 = (void*)0;
static union U1 g_158 = {0x53B77AA8L};
static uint32_t g_167 = 1UL;
static uint32_t g_169 = 5UL;
static uint8_t *g_215 = &g_109;
static uint8_t **g_214 = &g_215;
static int16_t **g_216 = &g_79;
static int16_t g_281[9][7] = {{1L,0x4142L,1L,(-1L),0L,(-10L),(-1L)},{(-5L),0x5D3BL,0x6EE4L,0x4142L,0xD7B0L,8L,6L},{0x4142L,0x6EE4L,0x5D3BL,(-5L),0x6217L,(-10L),(-10L)},{(-1L),1L,0x4142L,1L,(-1L),0L,(-10L)},{(-7L),0x765BL,0L,0L,(-10L),0x5D3BL,6L},{0L,0L,(-5L),0x777AL,0L,(-1L),(-1L)},{(-7L),0L,8L,(-1L),8L,0L,(-7L)},{(-1L),0L,(-7L),(-10L),1L,(-7L),0x4142L},{0x4142L,0L,0xFC12L,(-7L),(-1L),6L,0x765BL}};
static int32_t *g_290 = &g_8;
static int8_t *g_293 = &g_78;
static int8_t **g_292 = &g_293;
static int8_t ***g_291 = &g_292;
static uint64_t g_295 = 0xF3B2665406049E47LL;
static int64_t g_348 = 1L;
static union U1 g_459 = {0xE49EFDF4L};
static int32_t ***g_473 = &g_31;
static int32_t ****g_472 = &g_473;
static uint8_t g_510 = 0x3CL;
static int32_t g_534 = 0x2CABB93EL;
static uint16_t g_536 = 0x1714L;
static uint8_t g_553 = 247UL;
static uint8_t ***g_558 = &g_214;
static uint32_t g_597 = 0UL;
static uint16_t g_754 = 0x01F9L;
static int8_t g_756[7][1][10] = {{{0xC9L,0x0AL,0x29L,1L,0x0AL,1L,0x29L,0x0AL,0xC9L,0xC9L}},{{3L,(-1L),0L,0x0AL,0x0AL,0L,(-1L),3L,0L,3L}},{{0x0AL,0x29L,1L,0x0AL,1L,0x29L,0x0AL,0xC9L,0xC9L,0x0AL}},{{0xC9L,3L,1L,1L,3L,0xC9L,0x29L,3L,0x29L,0xC9L}},{{(-1L),3L,0L,3L,(-1L),0L,0x0AL,0x0AL,0L,(-1L)}},{{(-1L),0x29L,0x29L,(-1L),1L,0xC9L,(-1L),0xC9L,1L,(-1L)}},{{0xC9L,(-1L),0xC9L,1L,(-1L),0x29L,0x29L,(-1L),1L,0xC9L}}};
static union U1 **g_796 = (void*)0;
static union U1 ***g_795 = &g_796;
static const uint16_t g_805 = 0x6433L;
static const uint16_t *g_804[10] = {&g_805,&g_805,&g_805,&g_805,&g_805,&g_805,&g_805,&g_805,&g_805,&g_805};
static const uint16_t **g_803 = &g_804[2];
static uint16_t **g_806 = (void*)0;
static int16_t *g_868[7] = {&g_281[7][0],&g_281[7][0],&g_281[7][0],&g_281[7][0],&g_281[7][0],&g_281[7][0],&g_281[7][0]};
static uint8_t g_883 = 253UL;
static int32_t g_962 = 2L;
static uint64_t g_1018 = 0xEDE2660CAE67A9DALL;
static uint32_t *g_1044[6] = {&g_597,&g_597,&g_597,&g_597,&g_597,&g_597};
static int32_t g_1076 = 1L;
static uint64_t g_1082 = 0xADE5526D5218EDFALL;
static const int8_t g_1086 = 1L;
static int64_t g_1198[6] = {1L,1L,1L,1L,1L,1L};
static int64_t *g_1224[1] = {&g_1198[0]};
static int64_t **g_1223 = &g_1224[0];
static uint16_t g_1236 = 65535UL;
static union U1 g_1383 = {18446744073709551609UL};
static union U1 g_1384 = {8UL};
static union U1 * const g_1382[4] = {&g_1384,&g_1384,&g_1384,&g_1384};
static union U1 * const *g_1381 = &g_1382[0];
static uint64_t g_1489 = 0xCF0F4A8CA81DB510LL;
static union U0 *g_1492[6][10][1] = {{{&g_124[1][7]},{(void*)0},{&g_124[1][6]},{&g_124[0][2]},{(void*)0},{&g_124[0][2]},{&g_124[1][6]},{(void*)0},{&g_124[1][7]},{&g_124[1][6]}},{{(void*)0},{&g_124[1][1]},{&g_124[1][7]},{(void*)0},{&g_124[1][7]},{&g_124[1][1]},{(void*)0},{&g_124[1][6]},{&g_124[1][7]},{(void*)0}},{{&g_124[1][6]},{&g_124[0][2]},{(void*)0},{&g_124[0][2]},{&g_124[1][6]},{(void*)0},{&g_124[1][7]},{&g_124[1][6]},{(void*)0},{&g_124[1][1]}},{{&g_124[1][7]},{(void*)0},{&g_124[1][7]},{&g_124[1][1]},{(void*)0},{&g_124[1][6]},{&g_124[1][7]},{(void*)0},{&g_124[1][6]},{&g_124[0][2]}},{{(void*)0},{&g_124[0][2]},{&g_124[1][6]},{(void*)0},{&g_124[1][7]},{&g_124[1][6]},{(void*)0},{&g_124[1][1]},{&g_124[1][7]},{(void*)0}},{{&g_124[1][7]},{&g_124[1][1]},{(void*)0},{&g_124[1][6]},{&g_124[1][7]},{(void*)0},{&g_124[1][6]},{&g_124[0][2]},{(void*)0},{&g_124[0][2]}}};
static union U0 **g_1491 = &g_1492[5][6][0];
static int8_t g_1507 = 0x8AL;
static union U1 ****g_1611 = &g_795;
static union U1 *****g_1610 = &g_1611;
static int8_t ****g_1630 = &g_291;
static int8_t *****g_1629 = &g_1630;
static uint64_t g_1649 = 0xD6E1A63E8D01CAC3LL;
static uint32_t **g_1665 = &g_1044[3];
static uint32_t ***g_1664[9][3][9] = {{{&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0},{&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0},{&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0}},{{&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0},{&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0},{&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0}},{{&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0},{&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0},{&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0}},{{&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0},{&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,(void*)0,&g_1665,(void*)0,&g_1665},{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665}},{{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665},{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665},{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665}},{{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665},{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665},{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665}},{{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665},{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665},{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665}},{{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665},{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665},{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665}},{{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665},{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665},{(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665,(void*)0,&g_1665,&g_1665}}};
static uint64_t g_1751 = 0x858ACD6FA92AB057LL;
static uint8_t *g_1763 = &g_510;
static uint64_t g_1785 = 1UL;
static int16_t g_1874 = (-9L);
static uint32_t g_1908 = 1UL;
static const uint8_t g_2071 = 0x3DL;
static const uint8_t *g_2070 = &g_2071;
static const uint8_t **g_2069[7] = {&g_2070,&g_2070,&g_2070,&g_2070,&g_2070,&g_2070,&g_2070};
static const uint8_t ***g_2068 = &g_2069[1];
static const uint8_t ****g_2067 = &g_2068;
static int64_t **g_2091[5][6] = {{&g_1224[0],&g_1224[0],&g_1224[0],&g_1224[0],&g_1224[0],&g_1224[0]},{(void*)0,&g_1224[0],&g_1224[0],&g_1224[0],&g_1224[0],&g_1224[0]},{(void*)0,&g_1224[0],&g_1224[0],&g_1224[0],&g_1224[0],&g_1224[0]},{&g_1224[0],&g_1224[0],(void*)0,&g_1224[0],&g_1224[0],(void*)0},{&g_1224[0],&g_1224[0],&g_1224[0],&g_1224[0],&g_1224[0],&g_1224[0]}};
static int32_t g_2098 = 0x60F87645L;
static uint32_t *g_2115 = &g_1384.f0;
static uint32_t **g_2114 = &g_2115;



static int32_t func_1(void);
static const int32_t func_9(int32_t * const p_10);
static union U1 * func_16(int16_t p_17, const int32_t ** p_18, uint32_t p_19);
static union U0 func_22(const union U1 p_23, int8_t * p_24, int16_t p_25, uint32_t p_26);
static int8_t * func_28(uint64_t p_29, int16_t p_30);
static int8_t func_33(int8_t * p_34, int8_t * p_35, int8_t * p_36);
static int8_t * func_37(uint32_t p_38, uint32_t p_39, int64_t p_40, int32_t ** const p_41, const int8_t * const p_42);
static int32_t ** const func_43(int8_t p_44);
static int32_t * func_45(uint32_t p_46, const int16_t p_47, uint8_t p_48, int32_t p_49);
static uint8_t func_53(int32_t ** const p_54, int32_t ** p_55);
# 134 "<stdin>"
static int32_t func_1(void)
{
    uint32_t l_3 = 0xFBEBF0A0L;
    int32_t *l_7[1][4];
    int32_t **l_6 = &l_7[0][1];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_7[i][j] = &g_8;
    }
    l_3++;
    (*l_6) = (void*)0;
    return (*g_32);
}







static const int32_t func_9(int32_t * const p_10)
{
    const union U1 l_27 = {2UL};
    const int8_t * const l_1085 = &g_1086;
    int32_t l_2093 = 0L;
    uint16_t *l_2094 = &g_536;
    int32_t l_2095 = 0x650D4640L;
    const int32_t *l_2097[5][7] = {{&g_2098,&g_2098,&g_2098,&g_2098,&g_2098,&g_2098,&g_2098},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2098,&g_2098,&g_2098,&g_2098,&g_2098,&g_2098,&g_2098},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2098,&g_2098,&g_2098,&g_2098,&g_2098,&g_2098,&g_2098}};
    const int32_t **l_2096[4] = {&l_2097[4][3],&l_2097[4][3],&l_2097[4][3],&l_2097[4][3]};
    union U1 **l_2119 = &g_147;
    int i, j;
    for (g_8 = 0; (g_8 < 29); g_8++)
    {
        for (g_13[1][0] = (-19); (g_13[1][0] == (-28)); g_13[1][0] = safe_sub_func_uint64_t_u_u(g_13[1][0], 9))
        {
            return g_8;
        }
    }
    (*l_2119) = func_16(((l_2095 = (((*l_2094) = (safe_add_func_int16_t_s_s((func_22(l_27, func_28(((void*)0 != g_31), ((func_33(func_37(l_27.f0, l_27.f0, l_27.f0, func_43((((((*g_31) = func_45(l_27.f0, g_13[1][0], g_13[9][1], (*p_10))) == (void*)0) , (*g_293)) , 0x4BL)), l_1085), (*g_292), (*g_292)) && 0x48L) && g_13[1][0])), l_27.f0, l_27.f0) , l_2093), l_2093))) || l_27.f0)) | l_2093), l_2096[2], g_138);
    return (*p_10);
}







static union U1 * func_16(int16_t p_17, const int32_t ** p_18, uint32_t p_19)
{
    int8_t l_2100[1];
    int8_t l_2103 = 0x9BL;
    uint32_t *l_2112 = (void*)0;
    uint32_t **l_2111[5][9] = {{&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112},{&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112},{&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112},{&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112},{&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112,&l_2112}};
    uint32_t ***l_2113[6][10] = {{(void*)0,&l_2111[4][2],&l_2111[4][2],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_2111[4][2],&l_2111[4][2]},{(void*)0,&l_2111[4][2],&l_2111[4][5],&l_2111[4][2],&l_2111[4][2],&l_2111[4][5],&l_2111[4][2],(void*)0,&l_2111[4][2],&l_2111[4][5]},{(void*)0,(void*)0,&l_2111[4][2],(void*)0,(void*)0,&l_2111[4][5],&l_2111[4][5],(void*)0,(void*)0,&l_2111[4][2]},{(void*)0,(void*)0,&l_2111[4][2],(void*)0,&l_2111[0][4],(void*)0,&l_2111[4][2],(void*)0,(void*)0,&l_2111[4][2]},{(void*)0,(void*)0,&l_2111[4][5],&l_2111[4][5],(void*)0,(void*)0,&l_2111[4][2],(void*)0,(void*)0,&l_2111[4][5]},{&l_2111[4][2],(void*)0,&l_2111[4][2],&l_2111[4][5],&l_2111[4][2],&l_2111[4][2],&l_2111[4][5],&l_2111[4][2],(void*)0,&l_2111[4][2]}};
    uint32_t **l_2116 = &g_2115;
    int32_t l_2117 = (-1L);
    union U1 *l_2118 = &g_158;
    int i, j;
    for (i = 0; i < 1; i++)
        l_2100[i] = (-1L);
    l_2100[0] = (+0x8DL);
    (*g_290) = ((((l_2117 = ((safe_mod_func_uint8_t_u_u(((***g_558) |= (l_2103 > (safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((-1L), l_2100[0])), (safe_sub_func_int32_t_s_s((*g_290), (!(((18446744073709551606UL < 0x3A59795527E5BFF5LL) , ((((**g_216) , (g_2114 = l_2111[4][2])) == l_2116) >= 1UL)) == 0xB768100ADD6C70F4LL)))))))), (*g_1763))) | l_2100[0])) == 4294967289UL) || p_19) ^ 0xB8E46335L);
    return l_2118;
}







static union U0 func_22(const union U1 p_23, int8_t * p_24, int16_t p_25, uint32_t p_26)
{
    const uint16_t l_1388 = 65535UL;
    int64_t *l_1397 = &g_2[5][0];
    uint32_t *l_1405[5] = {&g_169,&g_169,&g_169,&g_169,&g_169};
    int32_t l_1406 = 0xFF211CEDL;
    union U1 l_1514[5] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
    uint64_t *l_1523 = &g_1082;
    union U0 l_1526[6][2] = {{{7UL},{7UL}},{{7UL},{7UL}},{{7UL},{7UL}},{{7UL},{7UL}},{{7UL},{7UL}},{{7UL},{7UL}}};
    int32_t *l_1569 = (void*)0;
    const uint8_t *l_1590[10][8] = {{(void*)0,(void*)0,&g_553,&g_109,&g_510,(void*)0,&g_553,&g_510},{&g_553,(void*)0,&g_510,&g_510,(void*)0,&g_883,&g_553,&g_510},{(void*)0,&g_553,&g_109,&g_109,&g_510,&g_109,&g_510,&g_510},{&g_510,(void*)0,(void*)0,&g_553,(void*)0,(void*)0,(void*)0,&g_553},{&g_510,&g_510,&g_109,&g_883,&g_553,(void*)0,&g_109,&g_510},{&g_510,&g_553,&g_510,&g_553,&g_553,&g_109,&g_553,(void*)0},{&g_510,&g_553,&g_510,(void*)0,&g_553,&g_510,&g_553,&g_553},{&g_109,&g_553,(void*)0,&g_553,(void*)0,&g_883,&g_883,(void*)0},{&g_553,(void*)0,(void*)0,&g_553,&g_109,(void*)0,&g_510,&g_109},{&g_553,&g_553,&g_553,&g_510,&g_109,(void*)0,&g_553,&g_553}};
    const uint8_t **l_1589 = &l_1590[3][7];
    union U1 ****l_1609 = (void*)0;
    union U1 *****l_1608 = &l_1609;
    union U1 *****l_1612 = &g_1611;
    int32_t l_1621 = 0L;
    int32_t l_1622 = 0x36C5E23CL;
    int32_t l_1623 = 1L;
    uint16_t l_1624 = 9UL;
    int8_t *****l_1644[7][4] = {{(void*)0,&g_1630,(void*)0,(void*)0},{&g_1630,&g_1630,&g_1630,&g_1630},{&g_1630,(void*)0,(void*)0,&g_1630},{(void*)0,&g_1630,(void*)0,(void*)0},{&g_1630,&g_1630,&g_1630,&g_1630},{&g_1630,(void*)0,(void*)0,&g_1630},{(void*)0,&g_1630,(void*)0,(void*)0}};
    uint16_t ***l_1658 = &g_806;
    int16_t **l_1666 = &g_79;
    uint16_t l_1714 = 0UL;
    int16_t *l_1748 = &g_120;
    union U0 **l_1802 = &g_1492[5][6][0];
    int64_t *l_1810 = &g_348;
    int32_t l_1885 = 0xFCD4EC0DL;
    int32_t l_1886 = 0x40C5FA8BL;
    int32_t l_1913 = 0xC35B3F5EL;
    int32_t l_1914 = (-7L);
    uint64_t l_1930 = 18446744073709551615UL;
    uint16_t *l_1955 = &g_1236;
    uint16_t **l_1954 = &l_1955;
    uint64_t l_1963[5];
    union U1 l_1971 = {0x870A31CFL};
    int i, j;
    for (i = 0; i < 5; i++)
        l_1963[i] = 0x39D518A0901EA3D3LL;
    return l_1526[5][0];
}







static int8_t * func_28(uint64_t p_29, int16_t p_30)
{
    int8_t ****l_1144 = &g_291;
    int32_t l_1147 = 0xD6DDAF2BL;
    int32_t l_1154[8] = {0x24E0CB48L,0x24E0CB48L,0x5E34C3AAL,0x24E0CB48L,0x24E0CB48L,0x5E34C3AAL,0x24E0CB48L,0x24E0CB48L};
    union U1 l_1155 = {0x1972BD17L};
    int32_t l_1193 = (-3L);
    int32_t *l_1195 = &l_1147;
    int32_t *l_1196 = &g_13[1][0];
    int32_t *l_1197[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_1199[5] = {0xADL,0xADL,0xADL,0xADL,0xADL};
    int8_t l_1200 = 7L;
    uint32_t l_1201[5];
    int64_t l_1210 = 3L;
    uint32_t *l_1213 = &g_169;
    uint16_t *l_1227 = &g_754;
    uint32_t *l_1233[5][2][9] = {{{(void*)0,&g_597,&l_1201[3],&l_1201[3],&g_597,(void*)0,&l_1201[3],(void*)0,&g_597},{(void*)0,(void*)0,&l_1201[3],&l_1201[2],(void*)0,&l_1201[3],&l_1201[3],&l_1201[3],&l_1201[3]}},{{&l_1201[3],&l_1201[3],&g_597,&l_1201[3],&l_1201[3],(void*)0,&l_1201[3],&l_1201[3],&l_1201[3]},{&l_1201[3],&l_1201[3],(void*)0,&l_1201[3],(void*)0,&l_1201[2],(void*)0,&l_1201[2],(void*)0}},{{&l_1201[3],(void*)0,(void*)0,&l_1201[3],&l_1201[3],(void*)0,&g_597,(void*)0,&l_1201[2]},{&l_1201[3],&g_597,&g_597,(void*)0,&l_1201[2],&l_1201[3],&l_1201[3],&l_1201[2],(void*)0}},{{&l_1201[3],&l_1201[2],&l_1201[3],&g_597,&l_1201[3],(void*)0,&l_1201[3],&l_1201[2],(void*)0},{&l_1201[3],&l_1201[3],&l_1201[2],&g_597,(void*)0,&l_1201[2],(void*)0,&g_597,&l_1201[2]}},{{(void*)0,(void*)0,&l_1201[2],&g_597,&l_1201[3],&l_1201[3],&l_1201[2],&g_597,(void*)0},{(void*)0,&l_1201[3],&l_1201[2],(void*)0,(void*)0,(void*)0,(void*)0,&l_1201[2],&l_1201[3]}}};
    union U1 ****l_1234 = (void*)0;
    int64_t ** const l_1235 = (void*)0;
    int16_t l_1237 = (-2L);
    int8_t l_1238 = (-8L);
    int32_t l_1241 = 6L;
    union U0 l_1246 = {0x9AF5DCC4L};
    uint16_t l_1325 = 0xE05BL;
    uint32_t l_1331 = 0x0AA52100L;
    union U1 * const *l_1344 = &g_147;
    union U1 * const **l_1343[6][10][4] = {{{&l_1344,&l_1344,&l_1344,&l_1344},{(void*)0,&l_1344,&l_1344,&l_1344},{(void*)0,&l_1344,&l_1344,&l_1344},{&l_1344,(void*)0,(void*)0,(void*)0},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,(void*)0,&l_1344,&l_1344},{(void*)0,&l_1344,(void*)0,&l_1344},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,(void*)0,&l_1344,&l_1344},{&l_1344,&l_1344,(void*)0,(void*)0}},{{&l_1344,(void*)0,(void*)0,&l_1344},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,&l_1344,(void*)0,&l_1344},{(void*)0,&l_1344,&l_1344,&l_1344},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,(void*)0,(void*)0,(void*)0},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,(void*)0,&l_1344,&l_1344},{(void*)0,&l_1344,(void*)0,&l_1344}},{{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,(void*)0,&l_1344,&l_1344},{&l_1344,&l_1344,(void*)0,(void*)0},{&l_1344,(void*)0,(void*)0,&l_1344},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,&l_1344,(void*)0,&l_1344},{(void*)0,&l_1344,&l_1344,&l_1344},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,(void*)0,(void*)0,(void*)0}},{{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,(void*)0,&l_1344,&l_1344},{(void*)0,&l_1344,(void*)0,&l_1344},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,(void*)0,&l_1344,&l_1344},{&l_1344,&l_1344,(void*)0,(void*)0},{&l_1344,(void*)0,(void*)0,&l_1344},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,&l_1344,(void*)0,&l_1344}},{{(void*)0,&l_1344,&l_1344,&l_1344},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,(void*)0,(void*)0,(void*)0},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,(void*)0,&l_1344,&l_1344},{(void*)0,&l_1344,(void*)0,&l_1344},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,(void*)0,&l_1344,&l_1344},{&l_1344,&l_1344,(void*)0,(void*)0},{&l_1344,(void*)0,(void*)0,&l_1344}},{{&l_1344,&l_1344,(void*)0,(void*)0},{&l_1344,&l_1344,(void*)0,&l_1344},{(void*)0,&l_1344,&l_1344,&l_1344},{&l_1344,&l_1344,&l_1344,(void*)0},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,&l_1344,(void*)0,(void*)0},{&l_1344,&l_1344,&l_1344,&l_1344},{&l_1344,(void*)0,&l_1344,&l_1344},{&l_1344,&l_1344,&l_1344,&l_1344},{(void*)0,&l_1344,(void*)0,&l_1344}}};
    union U1 * const ***l_1342 = &l_1343[4][9][2];
    int64_t l_1367 = 1L;
    uint8_t l_1377[5] = {0xCDL,0xCDL,0xCDL,0xCDL,0xCDL};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1201[i] = 0x841DDBFFL;
    for (g_295 = 0; (g_295 <= 1); g_295 += 1)
    {
        int8_t ****l_1145 = &g_291;
        int8_t l_1146 = 0x1AL;
        int8_t ****l_1153 = (void*)0;
        int8_t *****l_1152 = &l_1153;
        union U1 ** const *l_1192[8] = {(void*)0,&g_796,(void*)0,&g_796,(void*)0,&g_796,(void*)0,&g_796};
        union U1 ** const **l_1191 = &l_1192[6];
        int i;
        (*g_290) = ((l_1144 != l_1145) ^ (l_1146 , (l_1154[0] = ((l_1147 = 0x113996807178F9E1LL) >= (0L == (safe_lshift_func_uint8_t_u_s(5UL, (safe_lshift_func_uint16_t_u_s((g_459 , (((*l_1152) = &g_291) == l_1144)), 13)))))))));
        if (l_1154[1])
            continue;
        for (g_597 = 0; (g_597 <= 1); g_597 += 1)
        {
            uint8_t l_1156 = 0x15L;
            int8_t *l_1167 = &l_1146;
            for (l_1147 = 0; (l_1147 <= 1); l_1147 += 1)
            {
                int32_t *l_1157[3];
                uint64_t * const l_1162[4][5] = {{&g_295,&g_1018,&g_295,&g_1082,&g_1082},{(void*)0,&g_295,(void*)0,&g_1018,&g_1018},{&g_295,&g_1018,&g_295,&g_1082,&g_1082},{(void*)0,&g_295,(void*)0,&g_1018,&g_1018}};
                int8_t l_1194 = (-8L);
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1157[i] = &g_534;
                for (g_167 = 0; (g_167 <= 1); g_167 += 1)
                {
                    int32_t *l_1166 = (void*)0;
                    if (((*g_290) = (*g_290)))
                    {
                        (***g_472) = ((l_1155 , l_1156) , l_1157[2]);
                        if ((*g_290))
                            break;
                        if ((***g_473))
                            break;
                    }
                    else
                    {
                        int32_t l_1161 = 0x07FF53B7L;
                        int8_t *l_1168 = &g_78;
                        (*g_31) = l_1166;
                        return l_1168;
                    }
                    (*g_32) = (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_s((g_295 <= (safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((p_29 ^ ((safe_sub_func_uint64_t_u_u(0x2862650ADB9947AFLL, (!g_597))) < (safe_rshift_func_uint8_t_u_s((g_2[5][0] >= ((safe_mul_func_uint8_t_u_u(((**g_214) > ((safe_div_func_uint16_t_u_u(0x8B29L, ((safe_add_func_int16_t_s_s((&g_795 != l_1191), p_29)) | 1L))) <= l_1193)), 0x18L)) , p_29)), l_1146)))), 0x00L)) < 4294967295UL), p_29))), l_1194)))), l_1156));
                }
                return (*g_292);
            }
        }
    }
    --l_1201[3];
    if (((l_1238 |= ((safe_div_func_uint8_t_u_u((p_29 > (*l_1195)), (safe_add_func_uint32_t_u_u((((safe_add_func_uint64_t_u_u(l_1210, (safe_mod_func_uint32_t_u_u((--(*l_1213)), (-1L))))) <= (((*g_290) ^= (+(g_536 = ((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s((-7L), (safe_rshift_func_int16_t_s_u(((g_1223 != ((safe_add_func_uint8_t_u_u((***g_558), ((((((--(*l_1227)) > (+(safe_add_func_uint32_t_u_u(((*l_1196) = (*l_1195)), p_30)))) != 0xD0L) , l_1234) != (void*)0) && 4L))) , l_1235)) || 1L), p_29)))) ^ g_1236) > p_29), (*g_79))) , 7UL)))) != p_30)) , p_29), l_1237)))) , p_30)) > 0xA0752232L))
    {
        uint32_t *l_1247 = (void*)0;
        uint32_t *l_1248 = &g_158.f0;
        uint16_t ***l_1251[4] = {&g_806,&g_806,&g_806,&g_806};
        int32_t l_1262 = 0x9C6C20A4L;
        int8_t *l_1263 = &l_1200;
        int16_t *l_1264 = &g_281[1][3];
        int32_t l_1290 = 0x42507B1FL;
        uint16_t l_1313 = 7UL;
        union U1 l_1321 = {0x8EA6AA08L};
        union U1 l_1322[8] = {{4UL},{4UL},{4UL},{4UL},{4UL},{4UL},{4UL},{4UL}};
        uint16_t l_1358 = 0xA42DL;
        union U1 **l_1385[3][8] = {{&g_147,(void*)0,&g_147,&g_147,(void*)0,&g_147,&g_147,(void*)0},{&g_147,&g_147,&g_147,&g_147,&g_147,&g_147,&g_147,&g_147},{(void*)0,&g_147,&g_147,&g_147,&g_147,&g_147,&g_147,(void*)0}};
        int i, j;
        (*l_1196) = ((*l_1195) ^= ((safe_mul_func_uint8_t_u_u((*g_215), l_1241)) | (safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((l_1246 , ((*g_290) <= ((--(*l_1248)) , ((g_806 = &l_1227) == &l_1227)))), (safe_add_func_int64_t_s_s(((safe_div_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u((0xBB1D4B9DL ^ (safe_rshift_func_int8_t_s_s(((*l_1263) = ((***g_291) &= ((safe_div_func_int8_t_s_s(0x51L, p_30)) | l_1262))), p_29))), p_30)) <= 8UL) | p_29), 0xBE7EB64FL)) != l_1262), l_1262)))) & l_1262), (*g_79)))));
        if (((***g_558) && (&l_1237 != (((*g_290) = 0x8C0398D1L) , l_1264))))
        {
            uint64_t *l_1277 = (void*)0;
            uint64_t *l_1279 = &g_295;
            uint64_t **l_1278 = &l_1279;
            int16_t *l_1288 = &l_1237;
            int16_t *l_1289[9][2] = {{&g_120,&g_120},{&g_120,&g_120},{&g_120,&g_120},{&g_120,&g_120},{&g_120,&g_120},{&g_120,&g_120},{&g_120,&g_120},{&g_120,&g_120},{&g_120,&g_120}};
            union U0 *l_1296 = (void*)0;
            union U0 **l_1295 = &l_1296;
            int32_t l_1297 = (-3L);
            int32_t l_1314 = 0x71704545L;
            uint64_t *l_1315 = (void*)0;
            uint64_t *l_1316[5][3][7] = {{{(void*)0,&g_295,&g_1082,&g_1018,&g_295,&g_1018,&g_1082},{&g_295,(void*)0,&g_1082,&g_1082,&g_1018,&g_295,&g_1018},{(void*)0,(void*)0,(void*)0,(void*)0,&g_1018,&g_295,(void*)0}},{{&g_295,&g_295,&g_1018,(void*)0,(void*)0,&g_295,&g_1082},{&g_1082,&g_1018,&g_1018,&g_295,&g_295,&g_1082,(void*)0},{&g_295,&g_295,&g_1018,(void*)0,&g_295,&g_295,&g_1018}},{{&g_1082,&g_1018,&g_295,&g_295,&g_295,&g_1018,&g_1082},{(void*)0,&g_295,&g_1018,&g_1082,&g_295,&g_1082,(void*)0},{(void*)0,&g_1018,&g_1018,&g_1082,(void*)0,(void*)0,&g_1082}},{{&g_1018,&g_1018,&g_1082,&g_295,&g_1082,(void*)0,&g_1018},{(void*)0,&g_1018,(void*)0,&g_1018,(void*)0,(void*)0,&g_1018},{(void*)0,(void*)0,(void*)0,&g_1018,&g_1082,&g_295,&g_295}},{{&g_295,&g_295,&g_1082,(void*)0,&g_1018,&g_295,&g_1018},{&g_1018,(void*)0,&g_1018,&g_295,(void*)0,&g_295,&g_1082},{&g_295,&g_295,&g_1082,&g_295,&g_1018,(void*)0,&g_295}}};
            uint32_t l_1317 = 0x5517F902L;
            union U1 l_1320 = {0x02B84A8BL};
            union U1 *****l_1341 = &l_1234;
            int8_t *l_1353[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1353[i] = (void*)0;
            l_1290 |= ((safe_mod_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((**g_1223) = (((+((safe_unary_minus_func_uint64_t_u(0x10850DFC8CFA1101LL)) , (((**g_214) = (safe_sub_func_int64_t_s_s((safe_add_func_uint16_t_u_u(((*l_1195) = ((safe_add_func_int8_t_s_s(p_29, (l_1277 == ((*l_1278) = &p_29)))) && (p_30 = ((*l_1288) = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((0xDACA4D8BBF1E9815LL == (((**g_806) = (safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((**g_216) = ((((((&g_804[2] != (void*)0) ^ (p_29 <= (((((0x50L > (-1L)) & p_30) ^ 1L) | l_1262) >= (*l_1195)))) ^ l_1262) < l_1262) , p_30) <= 1UL)), p_30)), (***g_291)))) && 0UL)), 0)), (*l_1195))))))), l_1262)), 4L))) , 65534UL))) & (-8L)) >= p_29)), p_29)), 1L)) , l_1262);
            (*l_1195) = (((((safe_mul_func_uint16_t_u_u((l_1297 = ((safe_sub_func_uint64_t_u_u(g_1076, (&g_124[1][7] != ((*l_1295) = (void*)0)))) | (l_1297 > p_29))), (safe_add_func_int64_t_s_s(((safe_div_func_int8_t_s_s(((l_1317 = ((safe_lshift_func_uint8_t_u_s((((((*l_1288) ^= ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((safe_div_func_uint64_t_u_u((1L < 0x5DE93AEDFCC9E05BLL), (safe_mul_func_uint16_t_u_u(((((safe_unary_minus_func_int64_t_s((p_30 ^ l_1313))) ^ p_30) | p_30) == l_1314), l_1313)))) || p_29) < 1L), l_1314)), (-1L))) || (*g_79))) && p_29) , (*l_1195)) < l_1290), l_1314)) > 1UL)) >= (**g_1223)), l_1314)) ^ p_30), 18446744073709551615UL)))) >= l_1313) != (-1L)) < p_29) == p_30);
            if ((safe_rshift_func_uint16_t_u_u((1L == ((((l_1322[2] = (l_1321 = l_1320)) , (safe_div_func_uint16_t_u_u(l_1325, (safe_div_func_uint8_t_u_u((*l_1196), (**g_292)))))) , (++(*l_1213))) >= (l_1331 = (+p_30)))), (((safe_mul_func_uint8_t_u_u(p_29, ((*l_1263) = (safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((safe_sub_func_uint64_t_u_u((~((((*l_1341) = &g_795) == ((((l_1262 = ((void*)0 == &l_1316[2][0][6])) | l_1297) == p_30) , l_1342)) == 1UL)), g_167)) != 0x0729L) == (**g_806)), 7L)), (*l_1195)))))) == l_1290) >= (*g_290)))))
            {
                union U1 l_1359 = {0x8F62E826L};
                uint8_t ****l_1360 = &g_558;
                for (l_1297 = (-21); (l_1297 > (-1)); l_1297 = safe_add_func_uint64_t_u_u(l_1297, 5))
                {
                    uint32_t l_1350 = 1UL;
                    for (g_883 = 0; (g_883 < 49); g_883++)
                    {
                        int32_t l_1349 = 0x07E5E3A9L;
                        --l_1350;
                        return l_1353[0];
                    }
                }
                if ((safe_sub_func_int16_t_s_s(p_30, ((safe_sub_func_uint16_t_u_u(p_29, (l_1358 , (&g_214 == ((*l_1360) = (l_1359 , &g_214)))))) == (safe_rshift_func_uint8_t_u_s(((*g_215) = (((((safe_mod_func_uint64_t_u_u(18446744073709551608UL, ((*g_79) , (safe_rshift_func_int16_t_s_u(((**g_216) ^= ((void*)0 == &g_1224[0])), p_30))))) || l_1359.f0) <= l_1367) <= l_1320.f0) && 0UL)), 1))))))
                {
                    uint32_t **l_1369 = &l_1233[1][1][6];
                    uint32_t ***l_1368 = &l_1369;
                    (*l_1368) = (void*)0;
                }
                else
                {
                    (*g_290) = (*g_290);
                    (*l_1196) |= ((-7L) ^ (-7L));
                    return (***l_1144);
                }
                return (**g_291);
            }
            else
            {
                for (l_1238 = 0; (l_1238 <= 6); l_1238 += 1)
                {
                    (**g_473) = (p_29 , &l_1262);
                    (**g_31) = (-10L);
                }
                if (((*l_1196) |= l_1317))
                {
                    for (g_962 = 0; (g_962 != 27); g_962 = safe_add_func_int32_t_s_s(g_962, 1))
                    {
                        uint32_t l_1376 = 0UL;
                        l_1297 = ((*l_1196) &= (safe_rshift_func_uint16_t_u_u(((**g_806)--), l_1376)));
                        (*l_1195) &= p_30;
                        if (l_1377[0])
                            continue;
                    }
                }
                else
                {
                    int32_t *l_1378 = &l_1154[0];
                    union U1 *l_1380 = &l_1321;
                    (**g_473) = l_1378;
                    for (g_534 = 0; (g_534 <= 4); g_534 += 1)
                    {
                        union U1 *l_1379 = &l_1322[2];
                        l_1380 = l_1379;
                    }
                }
            }
        }
        else
        {
            (*l_1196) |= ((g_1381 = (void*)0) != ((*g_795) = l_1385[0][5]));
        }
    }
    else
    {
        for (g_80 = 0; (g_80 == 24); ++g_80)
        {
            return (**g_291);
        }
    }
    return (**g_291);
}







static int8_t func_33(int8_t * p_34, int8_t * p_35, int8_t * p_36)
{
    union U1 l_1105 = {18446744073709551614UL};
    uint64_t *l_1108 = &g_1082;
    int32_t l_1109 = 0x510E2D87L;
    int32_t *l_1110 = (void*)0;
    int32_t *l_1111 = &g_962;
    const union U1 *l_1121 = (void*)0;
    const union U1 **l_1120 = &l_1121;
    const union U1 ***l_1119[2][8][1] = {{{(void*)0},{&l_1120},{(void*)0},{(void*)0},{(void*)0},{&l_1120},{(void*)0},{(void*)0}},{{(void*)0},{&l_1120},{(void*)0},{(void*)0},{(void*)0},{&l_1120},{(void*)0},{(void*)0}}};
    const union U1 ****l_1118 = &l_1119[1][5][0];
    uint16_t *l_1133 = &g_536;
    int i, j, k;
    (*l_1111) = ((*g_290) ^= (l_1109 &= (l_1105 , (safe_unary_minus_func_int16_t_s((!((*l_1108) = l_1105.f0)))))));
    (**g_473) = &l_1109;
    (*g_32) = ((safe_unary_minus_func_uint16_t_u(((l_1111 = ((((safe_sub_func_int16_t_s_s(((((*l_1111) , (void*)0) == (void*)0) <= (*l_1111)), ((((*l_1133) |= ((*l_1111) , (*l_1111))) & (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((((safe_mul_func_int16_t_s_s((*l_1111), (safe_rshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((&l_1110 != ((((*l_1111) == (*l_1111)) , (*l_1111)) , (*g_473))), (***g_558))) != 0xA59DD74E4036F6A8LL), 7)))) == 1L) , 0x43943823L) ^ 0x214468E0L), (**g_216))), (*l_1111)))) < 0x6309L))) == 0UL) && 0x77L) , (*g_31))) != (void*)0))) | (**g_214));
    return (**g_292);
}







static int8_t * func_37(uint32_t p_38, uint32_t p_39, int64_t p_40, int32_t ** const p_41, const int8_t * const p_42)
{
    union U1 l_1087 = {0UL};
    uint32_t l_1096 = 4294967292UL;
    int16_t l_1102 = 0x36A3L;
    uint32_t *l_1103 = &g_167;
    int8_t *l_1104[4][1][3] = {{{&g_756[0][0][3],&g_756[3][0][2],&g_756[0][0][3]}},{{&g_756[0][0][3],&g_78,&g_78}},{{&g_756[0][0][3],&g_756[0][0][3],&g_78}},{{&g_756[0][0][3],&g_78,&g_78}}};
    int i, j, k;
    (*g_290) = (l_1087 , ((safe_mod_func_uint16_t_u_u((p_40 == ((safe_mul_func_int16_t_s_s(l_1087.f0, (l_1087.f0 >= (l_1087.f0 || (safe_lshift_func_uint8_t_u_u(((**g_214) = l_1096), p_38)))))) != ((*l_1103) &= (!(safe_div_func_int32_t_s_s((0xD9L < ((***g_291) &= (safe_mod_func_uint64_t_u_u((0xE2L & 0L), 2L)))), l_1102)))))), 0xB97CL)) && p_40));
    return l_1104[2][0][0];
}







static int32_t ** const func_43(int8_t p_44)
{
    uint8_t *l_371 = &g_109;
    int32_t l_390[8][9] = {{1L,0x02E37C7DL,0x8A5C5590L,0x70190407L,0x557BB839L,0xD3903765L,(-8L),0xD3903765L,0x557BB839L},{0x993241DAL,0xD7A74477L,0xD7A74477L,0x993241DAL,0xADC7F729L,8L,0x905DA985L,0x05680592L,(-6L)},{1L,0x557BB839L,(-8L),0x516C75C1L,0x516C75C1L,(-8L),0x557BB839L,1L,1L},{(-1L),0L,(-6L),2L,0xADC7F729L,0x05680592L,0x05680592L,0xADC7F729L,2L},{0x70190407L,(-6L),0x70190407L,0x02E37C7DL,0x557BB839L,0x516C75C1L,(-1L),1L,1L},{0xD7A74477L,(-1L),0xA62D4478L,0x05680592L,0xA62D4478L,(-1L),0xD7A74477L,0x905DA985L,(-6L)},{(-1L),0x516C75C1L,0x557BB839L,0x02E37C7DL,0x70190407L,(-6L),0x70190407L,0x02E37C7DL,0x557BB839L},{0x05680592L,0x05680592L,0xADC7F729L,2L,(-6L),0L,(-1L),0x905DA985L,(-1L)}};
    union U1 l_391 = {18446744073709551609UL};
    union U1 *l_392 = &g_158;
    union U1 *l_393 = (void*)0;
    union U1 *l_394 = &l_391;
    union U0 l_395 = {0x77B78991L};
    int64_t *l_396 = &g_2[5][3];
    int32_t l_598 = 0x4F23AC4BL;
    int32_t * const *l_618 = &g_32;
    const int64_t *l_663 = &g_348;
    uint32_t l_675 = 0x6FE26BA7L;
    const int16_t l_691 = 0x637AL;
    uint16_t *l_710[2][1];
    uint32_t l_789 = 0x12453333L;
    union U0 *l_810 = &l_395;
    int8_t ****l_882 = &g_291;
    uint8_t l_884 = 255UL;
    uint64_t l_891 = 0x17D9439D0E559B51LL;
    int32_t ** const l_1080 = &g_290;
    int32_t *l_1081[1][9][1] = {{{&g_962},{&l_598},{&g_962},{&l_598},{&g_962},{&l_598},{&g_962},{&l_598},{&g_962}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_710[i][j] = &g_536;
    }
    if ((+((((*l_396) = (((*g_214) = l_371) == (((safe_mod_func_int8_t_s_s((((((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((!(safe_mul_func_int8_t_s_s((+0x21L), ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(((*g_291) == (*g_291)), (((((l_390[1][0] ^= (p_44 != g_295)) , ((*l_394) = ((*l_392) = l_391))) , g_78) , (((l_395 , 0xB25D945BL) , (void*)0) != l_396)) , 0x11L))) < l_395.f1) > 0x72FCL), g_2[6][4])), 1)), l_395.f0)) ^ p_44)))) == 0xB7690D09L), 0x1786AA2D01DE58FDLL)), 0UL)) == 0x1E2B5A86L) >= l_395.f1) || p_44) & (*g_32)), 0x1AL)) <= 4L) , l_371))) <= l_395.f1) & l_395.f1)))
    {
        const union U0 **l_397 = (void*)0;
        int32_t l_400 = 0xE1E21794L;
        int16_t l_405 = 0xE183L;
        uint64_t l_416[2];
        int32_t l_434 = 0x42C776DBL;
        int32_t l_435 = 0xD3992348L;
        int32_t l_436[4] = {0xD0246690L,0xD0246690L,0xD0246690L,0xD0246690L};
        uint16_t l_437 = 65533UL;
        uint32_t *l_440 = &g_169;
        int32_t ***l_471 = &g_31;
        int32_t **** const l_470[7] = {&l_471,&l_471,&l_471,&l_471,&l_471,&l_471,&l_471};
        const int64_t l_490 = 0x546DE4E4AE1AB64BLL;
        uint32_t l_498 = 0x5239043EL;
        uint8_t ***l_557 = &g_214;
        uint32_t l_594 = 4294967295UL;
        int32_t l_595 = 0x09257F5FL;
        uint32_t l_596 = 1UL;
        int64_t **l_662 = &l_396;
        const int32_t *l_684[2][4] = {{&l_400,&l_436[0],&l_400,&l_400},{&l_436[0],&l_436[0],(void*)0,&l_436[0]}};
        const int32_t **l_683 = &l_684[1][2];
        const int32_t ***l_682 = &l_683;
        int8_t **l_687[2][7];
        uint16_t *l_690[9];
        int i, j;
        for (i = 0; i < 2; i++)
            l_416[i] = 0x671D208F5D8D1942LL;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
                l_687[i][j] = &g_293;
        }
        for (i = 0; i < 9; i++)
            l_690[i] = &g_536;
lbl_454:
        (*g_32) = (((((void*)0 != l_397) < (&g_348 != (void*)0)) || ((-1L) >= (l_400 == (safe_add_func_int64_t_s_s(((((safe_lshift_func_uint16_t_u_u(g_13[2][1], l_405)) < (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_44, l_400)), l_400)), l_390[1][0]))) && g_2[4][2]) == (-8L)), p_44))))) > 0x42517B5075E8ECFALL);
        if (((p_44 != 0x8A24CCCF1ED32369LL) ^ (safe_mod_func_int64_t_s_s((safe_add_func_uint8_t_u_u((**g_214), ((**g_292) > (l_416[0] = l_390[4][5])))), (safe_sub_func_uint64_t_u_u(18446744073709551615UL, (safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s(g_78, ((-8L) >= 0x5689L))), p_44)), 0x5AED46774A5BB8BBLL)), l_405))))))))
        {
            int32_t *l_427 = &g_124[1][7].f1;
            int32_t *l_428 = (void*)0;
            int32_t *l_429 = &g_13[1][1];
            int32_t *l_430 = &l_400;
            int32_t *l_431 = &g_13[1][0];
            int32_t *l_432 = &g_13[8][2];
            int32_t *l_433[3];
            uint64_t *l_445 = (void*)0;
            uint64_t *l_446 = &l_416[0];
            uint8_t **l_462 = (void*)0;
            union U0 *l_506 = &l_395;
            int i;
            for (i = 0; i < 3; i++)
                l_433[i] = &g_8;
            ++l_437;
            if ((((((void*)0 != l_440) , p_44) , 0L) | ((safe_mod_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u(p_44, 2)) , ((-1L) == 5UL)) >= ((**g_216) |= 0L)) != (--(*l_446))), ((!(safe_mul_func_int16_t_s_s((*l_431), l_390[1][0]))) , p_44))) < g_120)))
            {
                int32_t l_455 = 1L;
                int32_t *l_456 = &l_436[0];
                uint8_t **l_460 = &g_215;
                int32_t l_493 = 0x82BB972BL;
                int32_t l_495 = 0x157624D3L;
                int32_t l_496[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_496[i] = 0xBCC04D73L;
                for (l_435 = 0; (l_435 > (-28)); l_435 = safe_sub_func_uint8_t_u_u(l_435, 1))
                {
                    (*g_290) = p_44;
                    if (g_295)
                        goto lbl_454;
                }
                (*g_290) = l_455;
                l_456 = (void*)0;
                for (l_455 = (-28); (l_455 != (-11)); ++l_455)
                {
                    uint8_t ***l_461 = &l_460;
                    const int32_t l_477 = 1L;
                    int32_t l_491 = 0L;
                    int32_t l_492[10] = {0xD7E45B4DL,0xD7E45B4DL,0xD7E45B4DL,0xD7E45B4DL,0xD7E45B4DL,0xD7E45B4DL,0xD7E45B4DL,0xD7E45B4DL,0xD7E45B4DL,0xD7E45B4DL};
                    int i;
                    if ((((*l_461) = (g_459 , l_460)) == l_462))
                    {
                        int32_t *****l_474 = &g_472;
                        int32_t l_494 = 0x394D4C2BL;
                        int32_t l_497 = 0xD755B25CL;
                        (*l_427) ^= (safe_lshift_func_uint16_t_u_u(0UL, 13));
                        (*l_431) ^= ((((*g_215) = (((void*)0 == &g_215) ^ l_390[1][0])) , ((safe_mul_func_uint16_t_u_u((~((safe_mul_func_uint8_t_u_u((l_470[5] != ((*l_474) = g_472)), (safe_mod_func_int16_t_s_s((l_477 >= ((safe_mul_func_int8_t_s_s(((*g_293) || ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(p_44, (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s(l_477, l_490)), p_44)), g_120)))), p_44)) , p_44)), p_44)) <= 0xDC84L)), (**g_216))))) < 0xB124A009L)), l_395.f0)) , 6L)) & 3L);
                        --l_498;
                        (*l_431) = (***g_473);
                    }
                    else
                    {
                        return (*g_473);
                    }
                }
            }
            else
            {
                uint8_t *l_509 = &g_510;
                for (g_78 = 26; (g_78 <= 0); --g_78)
                {
                    union U0 *l_503 = &l_395;
                    union U0 **l_504 = (void*)0;
                    union U0 **l_505[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    l_506 = l_503;
                    for (g_167 = 0; (g_167 == 49); g_167 = safe_add_func_uint64_t_u_u(g_167, 5))
                    {
                        (*g_290) ^= (***l_471);
                        if ((*g_32))
                            break;
                        if (p_44)
                            break;
                    }
                }
                (*g_290) &= ((**g_31) = ((p_44 = ((**g_292) = ((*g_215) | 0x0DL))) == ((*l_509)--)));
                return (**g_472);
            }
        }
        else
        {
            int8_t l_537 = 0x20L;
            int32_t l_538 = 0xD9857D7AL;
            int32_t l_539 = 6L;
            int16_t *l_550 = &g_281[7][6];
            union U1 l_551 = {3UL};
            int32_t ** const l_661 = &g_290;
            for (l_437 = 4; (l_437 > 47); l_437++)
            {
                uint16_t l_542[4][1][3];
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_542[i][j][k] = 1UL;
                    }
                }
                for (g_295 = 0; (g_295 == 53); ++g_295)
                {
                    uint16_t *l_535[2];
                    uint8_t *l_552[1][5][2] = {{{&g_510,&g_553},{&g_510,&g_553},{&g_510,&g_553},{&g_510,&g_553},{&g_510,&g_553}}};
                    int32_t l_554[3];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_535[i] = &g_536;
                    for (i = 0; i < 3; i++)
                        l_554[i] = (-3L);
                    (**g_31) = ((safe_lshift_func_int16_t_s_u((l_539 ^= ((safe_sub_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((+(safe_sub_func_uint64_t_u_u(g_13[5][1], ((*g_290) <= (0x6EF5D354AF73A05CLL || p_44))))), (((((safe_mul_func_int8_t_s_s((p_44 , (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((**g_214), ((g_534 & l_391.f0) < ((l_537 = g_510) ^ l_395.f0)))) >= 0L), g_534)), (**g_214)))), (-4L))) && 0x25L) != l_538) != 6L) , p_44))) , g_459.f0) , (*g_215)), p_44)) == 0xC42EL)), 15)) <= (**g_216));
                    if (g_8)
                        goto lbl_454;
                    (*g_290) = ((safe_div_func_uint8_t_u_u(l_542[1][0][1], ((***l_471) |= ((*l_371) = ((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((((l_542[1][0][1] ^ ((g_124[1][2] , l_550) != l_550)) >= p_44) > 4UL))), (l_551 , p_44))), 0x6F128F3AL)), g_510)) >= 8UL))))) | l_554[2]);
                    if (l_554[1])
                        continue;
                }
                if ((safe_rshift_func_int16_t_s_s(((*g_79) = p_44), 3)))
                {
                    g_558 = l_557;
                }
                else
                {
                    (***g_473) = 0xE036C3DEL;
                }
                (****g_472) = (***g_473);
                return (**g_472);
            }
            for (g_536 = 0; (g_536 >= 15); g_536 = safe_add_func_int16_t_s_s(g_536, 9))
            {
                uint16_t *l_565 = &l_437;
                int32_t l_568 = 5L;
            }
            l_598 ^= (((0x0CAC0A2179E32848LL && (safe_mod_func_int32_t_s_s((0xC263L < (safe_rshift_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s((((((((p_44 , p_44) & ((safe_add_func_int32_t_s_s(0L, ((safe_sub_func_int64_t_s_s((p_44 > g_348), (safe_mod_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((*g_293) ^= (((((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((2UL ^ (((****g_472) = p_44) || l_594)), (*g_215))), g_281[2][5])) && 0L) > 2UL) , p_44) < l_595)), (**g_214))), 0xE201F50FL)) >= l_596), l_390[3][0])))) <= l_390[6][1]))) <= 0xDE98L)) < (-2L)) != (***g_558)) || l_551.f0) , l_538) , g_510))) && (*g_290)), l_395.f0))), g_597))) < 0xA6L) ^ 0UL);
            for (g_536 = 0; (g_536 <= 7); g_536 += 1)
            {
                uint16_t l_599 = 0x5385L;
                union U1 l_617 = {18446744073709551608UL};
                int16_t **l_633 = &g_79;
                union U0 l_638 = {18446744073709551615UL};
                (***g_473) ^= l_599;
                for (l_599 = 1; (l_599 <= 7); l_599 += 1)
                {
                    union U0 *l_621[7];
                    uint16_t l_641 = 1UL;
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_621[i] = (void*)0;
                    (*g_290) ^= (((1UL & (safe_lshift_func_int8_t_s_s(l_390[l_599][l_599], 6))) < (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((*g_215) ^= ((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((((safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((+((((l_617 , (*g_473)) == l_618) && ((l_538 , (safe_lshift_func_int8_t_s_s(0xDFL, 7))) <= ((l_617 , (((*l_396) |= (1L || 8L)) != (**l_618))) | p_44))) < l_390[l_599][l_599])), 1UL)), p_44)), p_44)) && 0xE2084CCEEFE41DB2LL) , l_621[1]) == &g_124[1][7]), (**l_618))), 8L)) | g_348)), p_44)), p_44))) & 0xD924608AL);
                    if ((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((***g_558) >= 0UL), 1)), 9)) == (safe_rshift_func_int16_t_s_u(l_539, 13))) ^ (~((void*)0 == l_633))), (safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((l_638 , ((0x83BD1186L <= l_638.f1) , (safe_rshift_func_uint16_t_u_s(65535UL, 15)))) ^ 0xCF277F3ACFEBCB11LL) , 0xA7L), p_44)) < l_539), l_551.f0)))), (**l_618))))
                    {
                        int32_t **l_644 = &g_32;
                        l_641--;
                        (*l_644) = (*l_618);
                    }
                    else
                    {
                        int8_t l_649 = 7L;
                        int32_t **l_659 = &g_32;
                        (**l_618) = (((*l_440)--) , (0x044AL ^ (safe_lshift_func_uint16_t_u_s((l_649 >= (!(safe_rshift_func_uint16_t_u_s((p_44 , (((((*g_290) ^= (((+(safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((~((l_538 , l_659) == ((**g_216) , l_659))), (~(((**g_31) > ((void*)0 != (**g_558))) || 1UL)))), 0))) | l_599) | p_44)) < 0x3674EB0AL) | 0UL) <= 0xF039033DL)), (*g_79))))), l_539))));
                    }
                    return l_661;
                }
            }
        }
        (****g_472) ^= ((1L != g_281[3][4]) & ((p_44 , ((*l_662) = &g_2[0][6])) == l_663));
        (*g_290) = (safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s((safe_sub_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((l_675 = 0x564EL) ^ p_44), ((p_44 && (safe_div_func_int64_t_s_s(((*l_618) == ((safe_lshift_func_uint16_t_u_u((g_536 = (safe_add_func_int32_t_s_s(((((***l_471) = (((*g_472) = (*g_472)) != l_682)) & (safe_lshift_func_int16_t_s_s(((void*)0 == l_687[1][5]), 13))) > ((safe_rshift_func_int16_t_s_s((*g_79), 12)) , 4UL)), 0x881F548BL))), 7)) , (**g_473))), p_44))) , (*g_293)))) | 0x36L), p_44)))) <= l_691), p_44)), g_295)), 1UL));
    }
    else
    {
        int64_t l_696[3][1];
        int32_t l_731 = 0xD861AA55L;
        int64_t l_787 = 0xFBA6EC54C19AE93DLL;
        int32_t *l_799 = &g_8;
        int8_t ***l_841 = &g_292;
        int64_t l_843 = 1L;
        int32_t l_925 = 1L;
        uint32_t l_928 = 0x94038CE5L;
        uint32_t l_948 = 0UL;
        int32_t l_952 = 0x904F9896L;
        int32_t l_1072 = 0x7852BA25L;
        int32_t l_1073 = 0x8ADF626FL;
        int32_t l_1074 = 0xAF915D50L;
        int32_t l_1075 = 2L;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_696[i][j] = 0x3DED50B1A535FD86LL;
        }
        if ((safe_div_func_int64_t_s_s((-2L), (safe_add_func_uint8_t_u_u(p_44, l_696[2][0])))))
        {
            uint32_t l_702 = 0UL;
            uint16_t *l_708[8] = {&g_536,&g_536,&g_536,&g_536,&g_536,&g_536,&g_536,&g_536};
            int32_t l_721 = 0L;
            int i;
lbl_794:
            for (g_169 = 0; (g_169 <= 6); g_169 += 1)
            {
                int32_t l_753 = 4L;
                int32_t *l_788[6][4] = {{&l_395.f1,&l_395.f1,&l_395.f1,&l_395.f1},{&l_395.f1,&l_395.f1,&l_395.f1,&l_395.f1},{&l_395.f1,&l_395.f1,&l_395.f1,&l_395.f1},{&l_395.f1,&l_395.f1,&l_395.f1,&l_395.f1},{&l_395.f1,&l_395.f1,&l_395.f1,&l_395.f1},{&l_395.f1,&l_395.f1,&l_395.f1,&l_395.f1}};
                int i, j;
                if ((safe_mul_func_uint8_t_u_u(((*g_215) = (+(-6L))), ((safe_lshift_func_int8_t_s_u(p_44, 6)) < (l_702 == 18446744073709551608UL)))))
                {
                    uint16_t **l_709 = &l_708[4];
                    int32_t *l_711 = &g_13[0][0];
                    int32_t *l_712 = &g_13[1][0];
                    int32_t *l_713 = (void*)0;
                    int32_t *l_714 = &g_8;
                    int32_t *l_715 = &g_124[1][7].f1;
                    int32_t *l_716 = &g_534;
                    int32_t *l_717 = &g_8;
                    int32_t *l_718 = &g_8;
                    int32_t *l_719 = &l_390[6][4];
                    int32_t *l_720 = &l_598;
                    int32_t *l_722 = &g_124[1][7].f1;
                    int32_t *l_723 = &l_395.f1;
                    int32_t *l_724 = &l_395.f1;
                    int32_t *l_725 = (void*)0;
                    int32_t *l_726 = &l_390[3][2];
                    int32_t *l_727 = &l_598;
                    int32_t *l_728 = &g_13[1][1];
                    int32_t *l_729 = (void*)0;
                    int32_t *l_730[3];
                    uint64_t l_732 = 5UL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_730[i] = &l_395.f1;
                    (****g_472) &= ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(p_44, 7)), (!((p_44 == p_44) >= ((((*l_709) = l_708[6]) != l_710[0][0]) & 0L))))) | 6UL);
                    l_732++;
                    return (**g_472);
                }
                else
                {
                    int32_t l_758 = 0L;
                    for (l_731 = 0; (l_731 <= 6); l_731 += 1)
                    {
                        int8_t ***l_752 = &g_292;
                        int8_t *l_755 = &g_756[0][0][3];
                        uint8_t *l_757 = &g_510;
                        uint64_t l_759 = 0UL;
                        int i, j;
                        l_759 |= (((**l_618) = ((***g_291) = (safe_div_func_int8_t_s_s(0L, g_2[(l_731 + 1)][l_731])))) ^ ((safe_mul_func_uint8_t_u_u(((*l_757) = (((safe_sub_func_int64_t_s_s(g_2[(l_731 + 1)][g_169], ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(p_44, ((p_44 < ((((!(safe_mul_func_int16_t_s_s((((((safe_mod_func_uint64_t_u_u((p_44 , ((safe_mul_func_uint8_t_u_u(((*g_215) &= 0xC4L), ((*l_755) |= (g_754 = (l_753 = (((p_44 < (((void*)0 == l_752) , g_2[(l_731 + 1)][g_169])) > l_696[2][0]) == p_44)))))) && (-8L))), (-7L))) != p_44) , 0xF0BE3A64L) >= 4294967295UL) , 4L), 65528UL))) || (**g_214)) == 0xBBEB274BL) | g_459.f0)) == 0xD094FC7FE3F240E8LL))), 15)) <= 0x91L))) | p_44) > p_44)), p_44)) || l_758));
                        if (l_758)
                            break;
                    }
                    l_731 |= (safe_lshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(((**g_214) = ((safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u((0x9CC94309L >= 0x9AA78062L), g_2[7][1])), (*g_79))) , (safe_sub_func_uint16_t_u_u((((safe_unary_minus_func_uint16_t_u((4L == (((((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((p_44 = (safe_mul_func_int8_t_s_s(((((((p_44 & (safe_lshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((*g_79), (0x97L || (***g_291)))) | (**l_618)) || (**g_216)), g_78)) > 7UL), (*g_215))) & 18446744073709551615UL) == 4294967286UL), (***g_291)))) <= g_756[0][0][3]) >= 5L) & l_758) && l_787) || 0xD4L), l_753))), 7)) ^ l_753), l_753)) , l_702) || l_721) != 0xACB89161248EDA40LL) < l_702)))) , g_13[1][0]) < l_696[2][0]), g_109)))), (**l_618))), l_758)), 14));
                }
                --l_789;
                for (l_731 = 1; (l_731 <= 6); l_731 += 1)
                {
                    union U1 *l_792 = (void*)0;
                    union U1 **l_793 = &l_792;
                    (*l_793) = l_792;
                }
            }
            if ((l_721 = (*g_32)))
            {
                if (l_598)
                    goto lbl_794;
            }
            else
            {
                union U1 ****l_797 = &g_795;
                (*l_797) = g_795;
            }
        }
        else
        {
            int32_t *l_798 = (void*)0;
            const uint16_t *l_801 = &g_754;
            const uint16_t **l_800[9][10] = {{&l_801,&l_801,&l_801,&l_801,&l_801,&l_801,&l_801,&l_801,&l_801,(void*)0},{&l_801,&l_801,(void*)0,&l_801,(void*)0,&l_801,(void*)0,&l_801,&l_801,(void*)0},{(void*)0,&l_801,&l_801,&l_801,&l_801,(void*)0,&l_801,&l_801,&l_801,&l_801},{&l_801,&l_801,(void*)0,(void*)0,&l_801,(void*)0,&l_801,&l_801,&l_801,&l_801},{&l_801,&l_801,&l_801,&l_801,&l_801,(void*)0,&l_801,&l_801,&l_801,(void*)0},{(void*)0,&l_801,&l_801,&l_801,(void*)0,&l_801,&l_801,&l_801,&l_801,&l_801},{&l_801,&l_801,&l_801,&l_801,(void*)0,&l_801,(void*)0,(void*)0,&l_801,&l_801},{&l_801,&l_801,&l_801,&l_801,(void*)0,&l_801,&l_801,&l_801,&l_801,(void*)0},{(void*)0,&l_801,&l_801,(void*)0,&l_801,(void*)0,&l_801,(void*)0,&l_801,&l_801}};
            const uint16_t ***l_802[9] = {&l_800[2][6],&l_800[2][6],&l_800[2][6],&l_800[2][6],&l_800[2][6],&l_800[2][6],&l_800[2][6],&l_800[2][6],&l_800[2][6]};
            uint16_t ***l_807 = &g_806;
            int32_t l_825 = (-7L);
            int32_t l_826 = 0x3306DDD6L;
            int64_t *l_860 = &g_348;
            uint8_t l_875 = 0xCEL;
            int32_t l_926 = (-1L);
            int32_t l_985[4][1][5] = {{{0xE3CB7B1DL,0xE3CB7B1DL,1L,0xE3CB7B1DL,0xE3CB7B1DL}},{{0xF0A2C3AAL,0xE3CB7B1DL,0xF0A2C3AAL,0xF0A2C3AAL,0xE3CB7B1DL}},{{0xE3CB7B1DL,0xF0A2C3AAL,0xF0A2C3AAL,0xE3CB7B1DL,0xF0A2C3AAL}},{{0xE3CB7B1DL,0xE3CB7B1DL,1L,0xE3CB7B1DL,0xE3CB7B1DL}}};
            uint16_t l_986 = 0x1FA0L;
            int8_t **l_1025 = (void*)0;
            uint32_t *l_1045 = &g_167;
            int8_t **** const l_1051[8][3][6] = {{{&g_291,&l_841,&g_291,&l_841,&l_841,&g_291},{&l_841,&l_841,&l_841,&g_291,&l_841,&l_841},{&g_291,&l_841,&l_841,&l_841,&g_291,&l_841}},{{&l_841,&g_291,&l_841,&g_291,&l_841,&l_841},{&g_291,&g_291,&l_841,&l_841,&g_291,&g_291},{&l_841,&g_291,&g_291,&l_841,&g_291,&l_841}},{{&l_841,&g_291,&l_841,&l_841,&l_841,&g_291},{&l_841,&g_291,&g_291,&g_291,&l_841,&l_841},{&g_291,&g_291,&g_291,&g_291,&g_291,&l_841}},{{&l_841,&l_841,&g_291,&g_291,&l_841,&l_841},{&g_291,&l_841,&g_291,&l_841,&l_841,&l_841},{&l_841,&g_291,&g_291,&l_841,&g_291,&g_291}},{{&l_841,&l_841,&l_841,&l_841,&g_291,&l_841},{&g_291,&l_841,&l_841,&g_291,&g_291,&l_841},{&l_841,&l_841,&g_291,&g_291,&g_291,&g_291}},{{&g_291,&l_841,&l_841,&g_291,&g_291,&g_291},{&l_841,&g_291,&l_841,&l_841,&l_841,&g_291},{&l_841,&l_841,&g_291,&l_841,&l_841,&l_841}},{{&l_841,&l_841,&l_841,&l_841,&g_291,&l_841},{&l_841,&g_291,&l_841,&l_841,&l_841,&g_291},{&l_841,&g_291,&g_291,&g_291,&l_841,&l_841}},{{&g_291,&g_291,&g_291,&g_291,&g_291,&l_841},{&l_841,&l_841,&g_291,&g_291,&l_841,&l_841},{&g_291,&l_841,&g_291,&l_841,&l_841,&l_841}}};
            int64_t l_1053 = 1L;
            uint16_t l_1056[1][6] = {{65531UL,65531UL,65531UL,65531UL,65531UL,65531UL}};
            uint32_t l_1077 = 18446744073709551615UL;
            int i, j, k;
lbl_949:
            (*g_31) = &l_731;
            l_799 = l_798;
            if (((g_803 = l_800[2][6]) != ((*l_807) = g_806)))
            {
                uint64_t l_828 = 18446744073709551610UL;
                for (p_44 = 9; (p_44 != 0); p_44 = safe_sub_func_int16_t_s_s(p_44, 9))
                {
                    int64_t l_823[8] = {4L,4L,4L,4L,4L,4L,4L,4L};
                    int32_t l_824 = 0x175015F6L;
                    int32_t l_827[9] = {2L,0x0951DEAEL,0x0951DEAEL,2L,0x0951DEAEL,0x0951DEAEL,2L,0x0951DEAEL,0x0951DEAEL};
                    int i;
                    if ((1L < (***g_558)))
                    {
                        union U0 *l_812[7][9] = {{(void*)0,&g_124[1][7],&l_395,&l_395,&l_395,&g_124[1][7],(void*)0,&g_124[1][7],&l_395},{&g_124[1][7],&l_395,&l_395,&g_124[1][7],&g_124[1][7],&l_395,&g_124[1][7],&g_124[1][7],&g_124[1][7]},{&g_124[1][7],&g_124[1][7],&l_395,&l_395,&l_395,&g_124[1][7],&g_124[1][7],&g_124[1][7],&l_395},{&g_124[1][7],&g_124[1][7],&l_395,&g_124[1][7],&g_124[1][7],&g_124[1][7],&g_124[1][7],&l_395,&g_124[1][7]},{(void*)0,&g_124[1][7],&l_395,&l_395,&l_395,&g_124[1][7],(void*)0,&g_124[1][7],&l_395},{&g_124[1][7],&l_395,&l_395,&g_124[1][7],&g_124[1][7],&l_395,&g_124[1][7],&g_124[1][7],&g_124[1][7]},{&g_124[1][7],&g_124[1][7],&l_395,&l_395,&g_124[1][7],&g_124[1][7],&l_395,&g_124[1][7],&g_124[1][7]}};
                        union U0 **l_811 = &l_812[1][1];
                        int32_t *l_813 = &g_13[4][2];
                        int32_t *l_814 = &g_13[1][0];
                        int32_t *l_815 = &l_390[0][2];
                        int32_t *l_816 = &g_13[1][0];
                        int32_t *l_817 = &l_390[1][0];
                        int32_t *l_818 = &g_534;
                        int32_t *l_819 = (void*)0;
                        int32_t *l_820 = &g_534;
                        int32_t *l_821 = &l_598;
                        int32_t *l_822[6][10] = {{&l_390[1][6],&g_534,(void*)0,&l_390[1][6],(void*)0,&g_534,&l_390[1][6],&g_13[8][2],&g_13[8][2],&l_390[1][6]},{&g_13[8][2],&l_390[6][3],(void*)0,(void*)0,&l_390[6][3],&g_13[8][2],&g_534,&l_390[6][3],&g_534,&g_13[8][2]},{&g_534,&l_390[6][3],&l_390[7][0],&l_390[6][3],&g_534,&l_390[7][0],&l_390[1][6],&l_390[1][6],&l_390[7][0],&g_534},{&g_534,&g_534,&g_534,&g_534,(void*)0,&g_13[8][2],&g_534,&g_13[8][2],(void*)0,&g_534},{&g_13[8][2],&g_534,&g_13[8][2],(void*)0,&g_534,&g_534,&g_534,&g_534,(void*)0,&g_13[8][2]},{&l_390[1][6],&l_390[1][6],&l_390[7][0],&g_534,&l_390[6][3],&l_390[7][0],&l_390[6][3],&g_534,&l_390[7][0],&l_390[1][6]}};
                        int i, j;
                        (**l_618) |= (((*l_811) = (l_810 = &g_124[1][3])) == (void*)0);
                        l_828--;
                    }
                    else
                    {
                        int32_t l_831 = (-6L);
                        uint8_t *l_838 = &g_553;
                        (*g_290) = (((l_831 = (0x866DL == l_828)) > (safe_sub_func_int32_t_s_s(1L, (safe_mod_func_uint16_t_u_u(((*g_79) == (safe_lshift_func_uint8_t_u_s(((*l_838) ^= (**g_214)), p_44))), (safe_mod_func_int8_t_s_s(((void*)0 != l_841), (~g_756[0][0][3])))))))) , 0x95A0D4D4L);
                    }
                    (**g_31) &= p_44;
                }
                (*g_290) ^= l_843;
                (**g_31) &= ((safe_rshift_func_int8_t_s_u((**g_292), 5)) | (safe_lshift_func_uint16_t_u_s(p_44, 11)));
            }
            else
            {
                int32_t ***l_857 = &g_31;
                int16_t **l_861 = &g_79;
                int32_t l_889 = 0xFB0F0642L;
                int32_t l_922 = 0L;
                int32_t l_923 = 6L;
                int32_t l_924 = 0x3351D05AL;
                int32_t l_927 = (-3L);
                int8_t * const **l_1050 = (void*)0;
                int8_t * const ***l_1049 = &l_1050;
                int32_t *l_1063 = &l_923;
                int32_t *l_1064 = (void*)0;
                int32_t *l_1065 = &g_13[8][2];
                int32_t *l_1066 = &l_952;
                int32_t *l_1067 = &l_927;
                int32_t *l_1068 = &l_825;
                int32_t *l_1069 = &l_889;
                int32_t *l_1070 = &l_390[1][0];
                int32_t *l_1071[9][8][3] = {{{&l_926,&l_926,&l_922},{(void*)0,&l_731,&l_731},{&l_927,&l_922,&l_826},{&l_731,&l_390[1][0],&l_390[1][0]},{&l_598,&l_927,&l_826},{&l_925,&l_922,&l_731},{&l_390[0][2],&g_13[1][0],&l_922},{&l_923,&l_731,&l_923}},{{&l_922,&g_13[1][0],&l_390[0][2]},{&l_731,&l_922,&l_925},{&l_826,&l_927,&l_598},{&l_390[1][0],&l_390[1][0],&l_731},{&l_826,&l_922,&l_927},{&l_731,&l_731,(void*)0},{&l_922,&l_926,&l_926},{&l_923,&l_731,(void*)0}},{{&l_390[0][2],&g_13[1][0],&l_927},{&l_925,&l_390[7][6],&l_731},{&l_598,(void*)0,&l_598},{&l_731,&l_390[7][6],&l_925},{&l_927,&g_13[1][0],&l_390[0][2]},{(void*)0,&l_731,&l_923},{&l_926,&l_926,&l_922},{(void*)0,&l_731,&l_731}},{{&l_927,&l_922,&l_826},{&l_731,&l_390[1][0],&l_390[1][0]},{&l_598,&l_927,&l_826},{&l_925,&l_922,&l_731},{&l_390[0][2],&g_13[1][0],&l_922},{&l_923,&l_731,&l_923},{&l_922,&g_13[1][0],&l_390[0][2]},{&l_731,&l_922,&l_925}},{{&l_826,&l_927,&l_598},{&l_390[1][0],&l_390[1][0],&l_731},{&l_826,&l_922,&l_927},{&l_731,&l_731,(void*)0},{&l_922,&l_926,&l_926},{&l_923,&l_731,(void*)0},{&l_390[0][2],&g_13[1][0],&l_927},{&l_925,&l_390[7][6],&l_731}},{{&l_598,(void*)0,&l_598},{&l_731,&l_390[7][6],&l_925},{(void*)0,&l_826,&l_598},{&l_925,&l_731,&l_390[7][6]},{(void*)0,(void*)0,&l_926},{&l_925,&l_390[1][0],&l_731},{(void*)0,&l_926,&l_390[0][2]},{&l_390[1][0],(void*)0,(void*)0}},{{&g_13[1][0],(void*)0,&l_390[0][2]},{&l_923,(void*)0,&l_731},{&l_598,&l_922,&l_926},{&l_390[7][6],&l_922,&l_390[7][6]},{&l_926,&l_922,&l_598},{&l_731,(void*)0,&l_923},{&l_390[0][2],(void*)0,&g_13[1][0]},{(void*)0,(void*)0,&l_390[1][0]}},{{&l_390[0][2],&l_926,(void*)0},{&l_731,&l_390[1][0],&l_925},{&l_926,(void*)0,(void*)0},{&l_390[7][6],&l_731,&l_925},{&l_598,&l_826,(void*)0},{&l_923,&l_731,&l_390[1][0]},{&g_13[1][0],&l_889,&g_13[1][0]},{&l_390[1][0],&l_731,&l_923}},{{(void*)0,&l_826,&l_598},{&l_925,&l_731,&l_390[7][6]},{(void*)0,(void*)0,&l_926},{&l_925,&l_390[1][0],&l_731},{(void*)0,&l_926,&l_390[0][2]},{&l_390[1][0],(void*)0,(void*)0},{&g_13[1][0],(void*)0,&l_390[0][2]},{&l_923,(void*)0,&l_731}}};
                int i, j, k;
                for (g_169 = 0; (g_169 < 7); g_169 = safe_add_func_uint8_t_u_u(g_169, 1))
                {
                    uint32_t *l_850 = &g_167;
                    int32_t l_862 = (-7L);
                    int32_t l_863 = 0x65E096FCL;
                    uint8_t **l_873 = &g_215;
                    int16_t *l_874 = &g_281[1][3];
                    int32_t l_890 = 0x7DA7DA78L;
                    uint16_t * const *l_961 = &l_710[0][0];
                    (*g_290) |= (l_390[7][1] ^= ((((*g_293) , ((((*l_850)--) , ((l_862 = ((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(((**g_292) = (g_510 , (***g_291))), (&l_618 == ((*g_472) = l_857)))), (safe_rshift_func_uint16_t_u_u((l_860 == &g_348), (((***l_857) , (l_861 == &g_79)) != l_862))))) <= p_44)) & l_863)) == p_44)) == g_124[1][7].f0) | (*g_32)));
                    l_875 = ((*g_32) = (safe_sub_func_int8_t_s_s(0x84L, (p_44 || (((safe_rshift_func_int8_t_s_u(p_44, 4)) < (((*g_216) = g_868[2]) == l_801)) <= (safe_mul_func_int16_t_s_s(((*l_874) = (((safe_rshift_func_uint16_t_u_s(p_44, 3)) <= 0xD086FF25L) , ((void*)0 == l_873))), p_44)))))));
                    if ((((**g_292) >= (((safe_unary_minus_func_uint64_t_u(((l_862 != (+(safe_div_func_uint8_t_u_u(p_44, (((l_882 != (void*)0) , ((*g_32) <= ((*l_850) &= ((((***l_857) != (((g_883 >= 0x31EFD8954AE4995CLL) || (***l_857)) <= 4L)) ^ (**l_618)) ^ 0L)))) & p_44))))) && p_44))) | 0xCA5CL) != p_44)) && l_884))
                    {
                        int32_t *l_885 = &g_13[1][0];
                        int32_t *l_886 = &l_862;
                        int32_t *l_887 = &l_390[2][2];
                        int32_t *l_888[10] = {&l_826,&l_826,&l_826,&l_826,&l_826,&l_826,&l_826,&l_826,&l_826,&l_826};
                        uint64_t *l_939 = &l_891;
                        int i;
                        ++l_891;
                        (**l_857) = ((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((p_44 & (((*l_887) , (p_44 & ((((*l_396) = ((g_536++) && (((((*l_860) &= (safe_sub_func_int64_t_s_s((((((safe_add_func_int64_t_s_s(g_597, (safe_mul_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(0x0ABEC01EB0EC361FLL)), p_44)))) || (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((9L < (safe_rshift_func_uint16_t_u_u(((((+p_44) < ((****g_472) != (*g_32))) || p_44) != (-1L)), 2))) == 0xBF8BE1ABL), 9UL)), 9L)), p_44)), (**g_31))), 1))) , 0L) & 0xDD031E71L) <= p_44), g_13[1][0]))) , 0x2BL) , p_44) ^ 0UL))) < p_44) > 0xEF81L))) | l_890)), l_862)), p_44)) , (*g_31));
                        ++l_928;
                        (*l_887) |= ((safe_lshift_func_uint16_t_u_s((***l_857), ((*l_874) ^= (safe_lshift_func_uint16_t_u_u((((safe_div_func_int64_t_s_s(g_80, g_73)) <= (-5L)) <= (*g_290)), 8))))) , (safe_add_func_int64_t_s_s(p_44, (((*l_939) = 7UL) > (safe_mod_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((**l_618), (safe_mul_func_int8_t_s_s((((safe_div_func_uint32_t_u_u(g_597, 0xA3243FA6L)) ^ l_948) | p_44), (-6L))))) & (***g_291)), (***g_558)))))));
                    }
                    else
                    {
                        uint16_t * const *l_959 = &l_710[0][0];
                        uint64_t *l_960[7] = {&g_295,&g_295,&g_295,&g_295,&g_295,&g_295,&g_295};
                        int32_t **l_963 = &l_799;
                        int i;
                        (**g_473) = &l_925;
                        if (l_863)
                            goto lbl_949;
                        (*g_31) = (*g_31);
                        (*l_963) = ((safe_add_func_int16_t_s_s(l_952, 0xE205L)) , ((safe_div_func_int64_t_s_s((safe_div_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s((((((2UL >= (((((void*)0 != l_959) & (((g_295 = (0xE884L == (*g_79))) && (l_961 != (void*)0)) > 18446744073709551615UL)) | (**l_618)) && 0xEC45B3FAL)) == 248UL) , p_44) >= p_44) >= p_44), g_962)) , l_890) && (***l_857)), (**g_214))), p_44)) , (*l_618)));
                    }
                }
                for (l_924 = (-27); (l_924 > (-17)); l_924 = safe_add_func_int32_t_s_s(l_924, 1))
                {
                    int32_t *l_966 = &g_13[1][0];
                    int32_t *l_967 = &l_889;
                    int32_t *l_968 = &l_731;
                    int32_t *l_969 = &l_926;
                    int32_t *l_970 = &g_124[1][7].f1;
                    int32_t *l_971 = &g_13[1][0];
                    int32_t *l_972 = &l_925;
                    int32_t *l_973 = &g_534;
                    int32_t *l_974 = (void*)0;
                    int32_t *l_975 = &g_13[3][2];
                    int32_t *l_976 = &l_825;
                    int32_t *l_977 = &l_925;
                    int32_t *l_978 = (void*)0;
                    int32_t *l_979 = &l_395.f1;
                    int32_t *l_980 = &g_124[1][7].f1;
                    int32_t *l_981 = (void*)0;
                    int32_t *l_982 = (void*)0;
                    int32_t *l_983 = &l_395.f1;
                    int32_t *l_984[1];
                    uint64_t *l_1000 = (void*)0;
                    uint64_t *l_1001 = (void*)0;
                    uint64_t *l_1002[6];
                    int32_t l_1019 = 0xDA9CC936L;
                    uint32_t *l_1020 = &g_597;
                    int8_t **l_1024 = &g_293;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_984[i] = &l_825;
                    for (i = 0; i < 6; i++)
                        l_1002[i] = &g_295;
                    (**g_31) = 0x3D3A2835L;
                    l_986++;
                    if (((*l_972) = (((***g_291) = (((*l_1020) ^= ((((safe_mod_func_uint64_t_u_u((safe_div_func_int32_t_s_s(((p_44 , (safe_mul_func_uint16_t_u_u(((*l_970) = 0x1B4EL), (~p_44)))) < (((g_281[1][3] <= 18446744073709551614UL) > (g_536 ^= ((safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u((--g_295), ((****g_472) > ((+p_44) ^ ((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((**g_214), ((+(safe_add_func_uint64_t_u_u((l_952 = (+(safe_sub_func_uint8_t_u_u(0xFBL, (-1L))))), p_44))) , 9L))), g_1018)) | 0x48DC9EF3L), 0x3716B505L)) <= l_1019))))), p_44)) != 248UL))) && 0x33B6298ADEF48B33LL)), (**g_31))), 0x0392D4ED3EEB1D90LL)) , (****g_472)) , 0xCC783A1AL) != (*l_976))) , p_44)) >= 0x3EL)))
                    {
                        uint32_t **l_1043[6][10] = {{&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020},{&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020},{(void*)0,&l_1020,(void*)0,&l_1020,&l_1020,&l_1020,(void*)0,&l_1020,(void*)0,&l_1020},{&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020},{&l_1020,&l_1020,(void*)0,&l_1020,(void*)0,&l_1020,&l_1020,&l_1020,(void*)0,&l_1020},{&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020}};
                        const int32_t l_1048 = (-6L);
                        int32_t l_1052 = 0xC20B2B5EL;
                        int i, j;
                        (**l_618) = (~(safe_mod_func_int8_t_s_s((l_922 &= ((((*g_291) != (l_1025 = l_1024)) != (((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((((safe_unary_minus_func_uint64_t_u(g_78)) | ((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((-2L) < (((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(g_2[5][0], (((safe_lshift_func_uint8_t_u_s(((l_1052 = ((safe_add_func_int8_t_s_s((*l_966), (((((g_1044[3] = l_798) == (l_1045 = (void*)0)) ^ ((safe_div_func_uint8_t_u_u(p_44, l_1048)) & 4L)) , l_1049) != l_1051[7][0][4]))) != 0xC9D54E887CB75E15LL)) ^ 246UL), 5)) < p_44) == 4294967295UL))), 2)) , 0x599C4EA08BCC912ALL) & g_805)) , p_44), p_44)), (**l_618))) , p_44)) , p_44), 3)) && (-5L)), (***g_558))) > p_44) , (*g_215))) <= p_44)), (**l_618))));
                        (*l_983) = l_1053;
                    }
                    else
                    {
                        int16_t l_1054[5][9][4] = {{{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL}},{{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL}},{{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL}},{{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL}},{{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL},{0x9AB7L,0xF5CCL,0x9AB7L,0xF5CCL}}};
                        int32_t l_1055 = 0L;
                        int i, j, k;
                        --l_1056[0][5];
                    }
                    for (g_597 = 0; (g_597 > 22); g_597 = safe_add_func_uint32_t_u_u(g_597, 9))
                    {
                        (*l_972) = ((safe_div_func_uint64_t_u_u(g_534, g_13[1][1])) ^ ((**g_216) , (-1L)));
                    }
                }
                l_1077--;
                return l_1080;
            }
        }
    }
    g_1082--;
    return (**g_472);
}







static int32_t * func_45(uint32_t p_46, const int16_t p_47, uint8_t p_48, int32_t p_49)
{
    int32_t **l_60 = &g_32;
    int32_t l_76 = 0xC06FE6C8L;
    int32_t l_85 = 0x3605A4DEL;
    int32_t l_87 = 0xEC541CD8L;
    int32_t l_92 = (-2L);
    int32_t l_93 = 0x9A822CC0L;
    int32_t l_96 = (-1L);
    int32_t l_97 = 9L;
    int32_t l_100[4] = {2L,2L,2L,2L};
    union U0 l_122 = {0x1E59140EL};
    int8_t *l_173 = (void*)0;
    uint16_t l_209 = 1UL;
    uint64_t l_253 = 0UL;
    uint16_t l_265 = 6UL;
    int32_t *l_282[8][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_285 = &l_97;
    int32_t *l_286[10] = {&l_96,&l_87,&l_96,&l_87,&l_96,&l_87,&l_96,&l_87,&l_96,&l_87};
    int32_t *l_288 = &l_87;
    int64_t l_306[2][7] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x9EB063BA38D60401LL,0x9EB063BA38D60401LL,0x9EB063BA38D60401LL,0x9EB063BA38D60401LL,0x9EB063BA38D60401LL,0x9EB063BA38D60401LL,0x9EB063BA38D60401LL}};
    int i, j;
    for (p_49 = 0; (p_49 != 12); p_49++)
    {
        int32_t ** const l_56 = &g_32;
        int32_t **l_58 = (void*)0;
        int32_t ***l_57[6] = {(void*)0,(void*)0,&l_58,(void*)0,(void*)0,&l_58};
        int32_t ***l_59 = &l_58;
        int8_t l_101 = 0xFEL;
        uint16_t l_102 = 0UL;
        union U0 l_123[9] = {{0x7F7E7448L},{0x7F7E7448L},{0x7F7E7448L},{0x7F7E7448L},{0x7F7E7448L},{0x7F7E7448L},{0x7F7E7448L},{0x7F7E7448L},{0x7F7E7448L}};
        int8_t * const l_155 = &g_78;
        int32_t *l_287 = &l_87;
        int16_t *l_324 = &g_120;
        int8_t ****l_347 = &g_291;
        int i;
    }
    return (*g_31);
}







static uint8_t func_53(int32_t ** const p_54, int32_t ** p_55)
{
    return g_13[3][0];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_13[i][j], "g_13[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_124[i][j].f0, "g_124[i][j].f0", print_hash_value);
            transparent_crc(g_124[i][j].f1, "g_124[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_158.f0, "g_158.f0", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_281[i][j], "g_281[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_459.f0, "g_459.f0", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_553, "g_553", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_754, "g_754", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_756[i][j][k], "g_756[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_805, "g_805", print_hash_value);
    transparent_crc(g_883, "g_883", print_hash_value);
    transparent_crc(g_962, "g_962", print_hash_value);
    transparent_crc(g_1018, "g_1018", print_hash_value);
    transparent_crc(g_1076, "g_1076", print_hash_value);
    transparent_crc(g_1082, "g_1082", print_hash_value);
    transparent_crc(g_1086, "g_1086", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1198[i], "g_1198[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1236, "g_1236", print_hash_value);
    transparent_crc(g_1383.f0, "g_1383.f0", print_hash_value);
    transparent_crc(g_1384.f0, "g_1384.f0", print_hash_value);
    transparent_crc(g_1489, "g_1489", print_hash_value);
    transparent_crc(g_1507, "g_1507", print_hash_value);
    transparent_crc(g_1649, "g_1649", print_hash_value);
    transparent_crc(g_1751, "g_1751", print_hash_value);
    transparent_crc(g_1785, "g_1785", print_hash_value);
    transparent_crc(g_1874, "g_1874", print_hash_value);
    transparent_crc(g_1908, "g_1908", print_hash_value);
    transparent_crc(g_2071, "g_2071", print_hash_value);
    transparent_crc(g_2098, "g_2098", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
