// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = A870CE83
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
   int64_t f0;
   signed f1 : 16;
};
#pragma pack(pop)

union U1 {
   uint32_t f0;
   const uint32_t f1;
   int16_t f2;
};

union U2 {
   const int8_t * f0;
   int32_t f1;
   int32_t f2;
   int8_t * const f3;
};

union U3 {
   int8_t * const f0;
   unsigned f1 : 11;
   const uint32_t f2;
   uint16_t f3;
};


static int8_t g_5 = 0x3CL;
static int8_t *g_4 = &g_5;
static int32_t g_6[3][1][2] = {{{1L,1L}},{{1L,1L}},{{1L,1L}}};
static uint32_t g_26 = 3UL;
static int32_t g_59[5][3][9] = {{{0L,0x82FB3486L,0x82859701L,5L,0x82859701L,0x82FB3486L,0L,6L,0L},{0xA42286E0L,7L,0L,0x149AF408L,1L,0x61529ABCL,0xCA2468F5L,0x010944B0L,0x53FB5D62L},{0x9CA31B86L,0x79C14114L,(-4L),0xA08677A3L,6L,0x298A7B98L,0x298A7B98L,6L,0xA08677A3L}},{{0x4895D34BL,0L,0x4895D34BL,(-6L),0x0B9C45D1L,1L,0xD1B33B75L,0xFF5237AEL,0x0197F5CEL},{(-9L),0xA08677A3L,0xD7CBC176L,6L,0x82FB3486L,0xA08677A3L,0x0BCC9DF7L,(-9L),0x79C14114L},{0xAF205A4AL,(-6L),0L,0L,0L,0L,(-6L),0xAF205A4AL,0x251D1740L}},{{0L,0L,0xD7CBC176L,0x298A7B98L,5L,0x79C14114L,0x82859701L,6L,0xD8B2D29CL},{(-6L),1L,0x53FB5D62L,0L,0x251D1740L,7L,(-9L),7L,0x251D1740L},{0xAB9BE056L,0x0BCC9DF7L,0x0BCC9DF7L,0xAB9BE056L,0x9CA31B86L,0x82FB3486L,(-9L),0L,0x79C14114L}},{{0L,0x53FB5D62L,1L,(-6L),1L,0x0B9C45D1L,0x0197F5CEL,1L,(-1L)},{0x298A7B98L,0xD7CBC176L,0L,0L,0x9CA31B86L,0L,0L,0xD7CBC176L,0x298A7B98L},{0L,0L,(-6L),0xAF205A4AL,0x251D1740L,0x61529ABCL,1L,1L,0x4895D34BL}},{{0xA760F2F4L,0x82859701L,0x298A7B98L,2L,5L,6L,0xAB9BE056L,0xAB9BE056L,6L},{0L,0x251D1740L,1L,0x251D1740L,0L,0x0197F5CEL,0xAF205A4AL,0xCA2468F5L,0x53FB5D62L},{0x298A7B98L,0xA08677A3L,8L,0x0BCC9DF7L,0x82FB3486L,0x4720237AL,0x79C14114L,2L,(-4L)}}};
static int32_t *g_61 = &g_59[1][0][7];
static union U2 g_97[2][4] = {{{0},{0},{0},{0}},{{0},{0},{0},{0}}};
static int32_t g_104[2] = {0xFB2F251BL,0xFB2F251BL};
static const union U1 g_112 = {4294967289UL};
static union U1 g_115[10][8][3] = {{{{0x865CE0FBL},{7UL},{0xCF43AC61L}},{{0x4E035C9AL},{0x4E035C9AL},{0x912EA93CL}},{{0xAE5F053FL},{0UL},{0x865CE0FBL}},{{1UL},{0UL},{0xEF02C85BL}},{{1UL},{0x865CE0FBL},{0x2E73AF25L}},{{0UL},{1UL},{0xEF02C85BL}},{{7UL},{8UL},{0x865CE0FBL}},{{4294967290UL},{2UL},{0x912EA93CL}}},{{{0xE0B4B7F8L},{0UL},{0xCF43AC61L}},{{0xEF02C85BL},{0xCF43AC61L},{0UL}},{{0xEF02C85BL},{4294967290UL},{4294967290UL}},{{0xE0B4B7F8L},{0x2E73AF25L},{4294967288UL}},{{4294967290UL},{0xD21B0195L},{0UL}},{{7UL},{0UL},{5UL}},{{0UL},{4294967288UL},{7UL}},{{1UL},{0UL},{1UL}}},{{{1UL},{0xD21B0195L},{0xAE5F053FL}},{{0xAE5F053FL},{0x2E73AF25L},{0xD21B0195L}},{{0x4E035C9AL},{4294967290UL},{0x13CF2979L}},{{0x865CE0FBL},{0xCF43AC61L},{0x13CF2979L}},{{0xD21B0195L},{0UL},{0xD21B0195L}},{{0UL},{2UL},{0xAE5F053FL}},{{4294967295UL},{8UL},{1UL}},{{0x912EA93CL},{1UL},{7UL}}},{{{1UL},{0x865CE0FBL},{5UL}},{{0x912EA93CL},{0UL},{0UL}},{{4294967295UL},{0UL},{4294967288UL}},{{0UL},{0x4E035C9AL},{4294967290UL}},{{0xD21B0195L},{7UL},{4294967288UL}},{{0xAE5F053FL},{1UL},{2UL}},{{0xFF5A80FCL},{0xFF5A80FCL},{0x865CE0FBL}},{{5UL},{1UL},{0xAE5F053FL}}},{{{0x912EA93CL},{4294967288UL},{0UL}},{{8UL},{0xAE5F053FL},{0xD21B0195L}},{{0xCF43AC61L},{0x912EA93CL},{0UL}},{{1UL},{0UL},{0xAE5F053FL}},{{1UL},{0UL},{0x865CE0FBL}},{{0UL},{0x13CF2979L},{2UL}},{{0UL},{2UL},{4294967288UL}},{{0UL},{1UL},{1UL}}},{{{0UL},{0xD21B0195L},{0x4E035C9AL}},{{1UL},{0UL},{0xEF02C85BL}},{{1UL},{0xCF43AC61L},{0x26FBF5F8L}},{{0xCF43AC61L},{0x4E035C9AL},{1UL}},{{8UL},{0xCF43AC61L},{0x2E73AF25L}},{{0x912EA93CL},{0UL},{5UL}},{{5UL},{0xD21B0195L},{0UL}},{{0xFF5A80FCL},{1UL},{0UL}}},{{{0xAE5F053FL},{2UL},{0UL}},{{0UL},{0x13CF2979L},{0UL}},{{4294967295UL},{0UL},{5UL}},{{4294967290UL},{0UL},{0x2E73AF25L}},{{0x865CE0FBL},{0x912EA93CL},{1UL}},{{0xE0B4B7F8L},{0xAE5F053FL},{0x26FBF5F8L}},{{0x865CE0FBL},{4294967288UL},{0xEF02C85BL}},{{4294967290UL},{1UL},{0x4E035C9AL}}},{{{4294967295UL},{0xFF5A80FCL},{1UL}},{{0UL},{1UL},{4294967288UL}},{{0xAE5F053FL},{1UL},{2UL}},{{0xFF5A80FCL},{0xFF5A80FCL},{0x865CE0FBL}},{{5UL},{1UL},{0xAE5F053FL}},{{0x912EA93CL},{4294967288UL},{0UL}},{{8UL},{0xAE5F053FL},{0xD21B0195L}},{{0xCF43AC61L},{0x912EA93CL},{0UL}}},{{{1UL},{0UL},{0xAE5F053FL}},{{1UL},{0UL},{0x865CE0FBL}},{{0UL},{0x13CF2979L},{2UL}},{{0UL},{2UL},{4294967288UL}},{{0UL},{1UL},{1UL}},{{0UL},{0xD21B0195L},{0x4E035C9AL}},{{1UL},{0UL},{0xEF02C85BL}},{{1UL},{0xCF43AC61L},{0x26FBF5F8L}}},{{{0xCF43AC61L},{0x4E035C9AL},{1UL}},{{8UL},{0xCF43AC61L},{0x2E73AF25L}},{{0x912EA93CL},{0UL},{5UL}},{{5UL},{0xD21B0195L},{0UL}},{{0xFF5A80FCL},{1UL},{0UL}},{{0xAE5F053FL},{2UL},{0UL}},{{0UL},{0x13CF2979L},{0UL}},{{4294967295UL},{0UL},{5UL}}}};
static const union U1 *g_114 = &g_115[4][3][1];
static union U3 g_118 = {0};
static uint64_t g_144 = 18446744073709551615UL;
static uint32_t g_171 = 18446744073709551615UL;
static uint32_t g_174 = 0xFB2AA1FCL;
static uint32_t *g_178 = &g_115[4][3][1].f0;
static struct S0 g_180 = {-1L,-158};
static uint16_t g_233[4][4][7] = {{{65533UL,0x2051L,65535UL,0x2051L,65533UL,0x1F3DL,0x985DL},{0x5D2CL,0x45A5L,5UL,0xEA4EL,0xD59AL,0x794FL,1UL},{65535UL,1UL,1UL,0x794FL,8UL,1UL,65535UL},{0x5D2CL,0xEA4EL,0xA9A9L,0x985DL,0x1C92L,0xFA8EL,65535UL}},{{65533UL,65535UL,65530UL,0UL,0xDDE4L,0x794FL,0xAFC6L},{6UL,65530UL,0xE561L,5UL,0x45A5L,65535UL,0xE1ADL},{5UL,65530UL,1UL,1UL,1UL,0x9FBCL,1UL},{65535UL,1UL,65535UL,6UL,65535UL,1UL,65535UL}},{{0UL,6UL,1UL,0x1F3DL,5UL,0x06E6L,0xE561L},{0xD59AL,65527UL,65533UL,5UL,1UL,0xA516L,5UL},{1UL,65529UL,1UL,1UL,0xA9A9L,0x12CCL,65527UL},{1UL,1UL,65535UL,0x06E6L,65530UL,65529UL,0x12CCL}},{{0xD59AL,0xDDE4L,1UL,65535UL,0xDDE4L,0x2051L,0UL},{0xDDE4L,65535UL,0xE561L,65535UL,0x866FL,0xFA8EL,0x45A5L},{0xE1ADL,0xD59AL,0x7751L,0x06E6L,1UL,0x06E6L,0x7751L},{5UL,5UL,1UL,1UL,65535UL,65526UL,0x794FL}}};
static int8_t g_284 = 0xE8L;
static struct S0 g_348 = {0xADDA3BFDC7CB5220LL,-65};
static uint64_t g_392 = 0xA8775C50D980B7DBLL;
static uint16_t *g_405 = &g_233[1][1][4];
static union U1 g_418 = {0x9D180346L};
static uint32_t g_469 = 0xC2678B5AL;
static uint8_t g_496 = 5UL;
static uint8_t **g_521[1][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static struct S0 g_529 = {-1L,-182};
static struct S0 *g_528 = &g_529;
static union U1 *g_556 = (void*)0;
static union U1 **g_555[2] = {&g_556,&g_556};
static union U1 ***g_554 = &g_555[1];
static const int32_t *g_706 = &g_104[0];
static int32_t g_734 = 0x1F45D24AL;
static uint32_t ** const *g_737 = (void*)0;
static uint64_t g_833 = 0x3349417DAC05C9C4LL;
static int8_t **g_863[9] = {&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4};
static int8_t ***g_862 = &g_863[7];
static int8_t ****g_861 = &g_862;
static int32_t **g_900 = (void*)0;
static int32_t ***g_899 = &g_900;
static uint16_t g_901 = 3UL;
static int16_t g_923 = 0x4F3AL;
static int64_t g_939[7] = {0x87A52BC87114A5DELL,(-1L),(-1L),0x87A52BC87114A5DELL,(-1L),(-1L),0x87A52BC87114A5DELL};
static int32_t g_1018[1][2][7] = {{{0x028DEE81L,0L,0x028DEE81L,0x028DEE81L,0L,0x028DEE81L,0x028DEE81L},{0xE6393068L,0xE6393068L,7L,0xE6393068L,0xE6393068L,7L,0xE6393068L}}};
static int64_t *g_1073 = &g_939[0];
static uint32_t *g_1088[8][9][3] = {{{&g_171,&g_469,&g_469},{&g_174,&g_469,&g_174},{&g_171,&g_174,(void*)0},{&g_171,&g_174,&g_174},{(void*)0,(void*)0,&g_469},{&g_469,&g_174,&g_174},{&g_469,&g_174,&g_171},{&g_171,&g_469,&g_171},{(void*)0,&g_469,&g_171}},{{&g_171,&g_174,&g_174},{&g_171,&g_469,&g_469},{&g_469,&g_469,&g_174},{&g_171,&g_171,(void*)0},{&g_171,&g_174,&g_174},{(void*)0,&g_174,&g_469},{&g_171,&g_174,&g_469},{&g_469,&g_171,&g_171},{&g_469,&g_469,&g_469}},{{(void*)0,&g_469,&g_171},{&g_171,&g_174,&g_469},{&g_171,&g_469,&g_469},{&g_174,&g_469,&g_174},{&g_171,&g_174,(void*)0},{&g_171,&g_174,&g_174},{(void*)0,(void*)0,&g_469},{&g_469,&g_171,&g_469},{&g_171,&g_174,&g_174}},{{&g_174,&g_174,&g_174},{&g_469,&g_171,&g_174},{&g_174,&g_174,&g_469},{&g_174,(void*)0,(void*)0},{&g_171,&g_174,&g_174},{&g_174,(void*)0,&g_171},{&g_174,&g_171,&g_469},{&g_469,&g_469,(void*)0},{&g_174,&g_171,&g_171}},{{&g_171,(void*)0,&g_174},{&g_174,&g_174,&g_174},{&g_469,(void*)0,&g_174},{&g_469,&g_174,&g_171},{&g_174,&g_171,(void*)0},{&g_469,&g_174,&g_469},{&g_174,&g_174,&g_171},{&g_469,&g_171,&g_174},{&g_469,&g_469,(void*)0}},{{&g_174,&g_171,&g_469},{&g_171,&g_174,&g_174},{&g_174,&g_174,&g_174},{&g_469,&g_171,&g_174},{&g_174,&g_174,&g_469},{&g_174,(void*)0,(void*)0},{&g_171,&g_174,&g_174},{&g_174,(void*)0,&g_171},{&g_174,&g_171,&g_469}},{{&g_469,&g_469,(void*)0},{&g_174,&g_171,&g_171},{&g_171,(void*)0,&g_174},{&g_174,&g_174,&g_174},{&g_469,(void*)0,&g_174},{&g_469,&g_174,&g_171},{&g_174,&g_171,(void*)0},{&g_469,&g_174,&g_469},{&g_174,&g_174,&g_171}},{{&g_469,&g_171,&g_174},{&g_469,&g_469,(void*)0},{&g_174,&g_171,&g_469},{&g_171,&g_174,&g_174},{&g_174,&g_174,&g_174},{&g_469,&g_171,&g_174},{&g_174,&g_174,&g_469},{&g_174,(void*)0,(void*)0},{&g_171,&g_174,&g_174}}};
static uint32_t **g_1087 = &g_1088[5][1][2];
static uint32_t g_1095 = 0xFA2580DCL;
static uint32_t ***g_1128 = (void*)0;
static uint32_t ****g_1127 = &g_1128;
static union U2 g_1168 = {0};
static union U3 *g_1214 = &g_118;
static union U3 **g_1213[4] = {&g_1214,&g_1214,&g_1214,&g_1214};
static int64_t g_1376 = (-8L);
static union U2 g_1422 = {0};
static const uint8_t ** const g_1530 = (void*)0;
static const uint8_t ** const *g_1529 = &g_1530;
static union U1 *** const *g_1536 = (void*)0;
static union U1 *** const **g_1535[3][8] = {{(void*)0,&g_1536,(void*)0,(void*)0,&g_1536,(void*)0,(void*)0,&g_1536},{&g_1536,(void*)0,(void*)0,&g_1536,(void*)0,(void*)0,&g_1536,(void*)0},{&g_1536,&g_1536,&g_1536,&g_1536,&g_1536,&g_1536,&g_1536,&g_1536}};
static struct S0 *g_1628 = &g_348;
static uint16_t g_1684 = 1UL;
static union U1 g_1785 = {0x4469FDB9L};
static int16_t g_1788 = 0x52D7L;
static union U2 * const * const *g_1862[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U2 g_1928[9] = {{0},{0},{0},{0},{0},{0},{0},{0},{0}};
static uint8_t ***g_1968 = &g_521[0][3];
static uint8_t ****g_1967 = &g_1968;
static uint8_t *****g_1966[7][9] = {{&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,(void*)0,&g_1967},{&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967},{(void*)0,(void*)0,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,(void*)0,(void*)0},{&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967},{&g_1967,(void*)0,&g_1967,(void*)0,&g_1967,&g_1967,&g_1967,&g_1967,(void*)0},{&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967},{(void*)0,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,&g_1967,(void*)0,&g_1967}};
static int64_t g_2012 = 0xAFCEF49199376E86LL;
static const uint32_t *g_2013[4][3][3] = {{{&g_26,&g_26,&g_1785.f0},{&g_26,&g_26,&g_1785.f0},{&g_112.f0,&g_26,&g_26}},{{&g_26,&g_26,&g_1785.f0},{&g_26,&g_26,&g_1785.f0},{&g_112.f0,&g_26,&g_26}},{{&g_26,&g_26,&g_1785.f0},{&g_26,&g_26,&g_1785.f0},{&g_112.f0,&g_26,&g_26}},{{&g_26,&g_26,&g_1785.f0},{&g_26,&g_26,&g_1785.f0},{&g_112.f0,&g_26,&g_26}}};
static union U2 g_2075[8] = {{0},{0},{0},{0},{0},{0},{0},{0}};
static uint32_t **g_2096 = &g_1088[5][1][2];
static union U1 g_2100 = {0x1AD2B9B8L};
static union U2 *g_2164[2][5][2] = {{{&g_2075[5],&g_2075[5]},{&g_1168,&g_2075[5]},{&g_2075[5],&g_1168},{&g_2075[5],&g_2075[5]},{&g_1168,&g_2075[5]}},{{&g_2075[5],&g_1168},{&g_2075[5],&g_2075[5]},{&g_1168,&g_2075[5]},{&g_2075[5],&g_1168},{&g_2075[5],&g_2075[5]}}};
static union U2 **g_2163 = &g_2164[1][0][0];
static uint8_t g_2200 = 0x21L;
static int16_t g_2281 = 0x415CL;
static int8_t g_2284 = 0L;
static const int8_t *g_2307 = &g_284;
static const int8_t **g_2306[3] = {&g_2307,&g_2307,&g_2307};
static const int8_t ***g_2305[1] = {&g_2306[2]};
static int16_t g_2331[9] = {0x0CE0L,0x0CE0L,1L,0x0CE0L,0x0CE0L,1L,0x0CE0L,0x0CE0L,1L};



static uint32_t func_1(void);
static int32_t func_2(int8_t * p_3);
static const int8_t func_14(uint32_t p_15);
static int8_t func_33(int8_t * p_34, uint32_t * p_35);
static int16_t func_49(int8_t p_50, int8_t * p_51, union U3 p_52, uint16_t p_53);
static uint8_t func_64(union U3 p_65, int8_t * p_66);
static union U3 func_67(int64_t p_68, uint8_t p_69, uint16_t p_70, int32_t p_71);
static int32_t func_72(const int32_t ** p_73);
static const int32_t * func_81(uint16_t p_82, const uint32_t * p_83, int8_t p_84);
static int8_t func_88(uint16_t p_89, union U2 p_90, int32_t * p_91);
# 148 "<stdin>"
static uint32_t func_1(void)
{
    uint8_t l_2021 = 251UL;
    uint64_t l_2053 = 0x583CD540B5EBE330LL;
    int32_t l_2059 = 0xD74FDE4BL;
    int32_t l_2060 = (-9L);
    int32_t l_2062[4];
    int32_t l_2064 = (-1L);
    int32_t l_2068 = 0xEBED4AC5L;
    union U2 * const l_2073 = &g_1168;
    union U2 *l_2074 = &g_2075[3];
    uint32_t ***l_2078 = &g_1087;
    const uint32_t *l_2079 = &g_26;
    union U1 *l_2099 = &g_2100;
    int32_t l_2109 = 0x42A66AFEL;
    uint64_t l_2172 = 0x21E61DF5B5C36C2FLL;
    uint16_t *l_2173[2][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int32_t *l_2196 = &l_2059;
    int16_t l_2218[2];
    const uint32_t *l_2258 = &g_26;
    int32_t l_2278 = 0xEB83C5AAL;
    int8_t l_2282 = (-1L);
    int32_t l_2315[9][3] = {{0L,0x906454F9L,1L},{0L,6L,1L},{(-10L),(-8L),0x906454F9L},{1L,0L,1L},{0x9CF65A28L,(-10L),1L},{0x13B85E3CL,(-10L),0L},{8L,0x9CF65A28L,0x13B85E3CL},{(-10L),8L,8L},{8L,1L,0L}};
    int32_t l_2371 = (-1L);
    union U3 l_2393 = {0};
    uint32_t l_2419 = 18446744073709551615UL;
    int32_t **l_2420 = &g_61;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2062[i] = (-1L);
    for (i = 0; i < 2; i++)
        l_2218[i] = 0xEC1FL;
    if (func_2(g_4))
    {
        int32_t *l_2020[9][5] = {{&g_104[0],&g_1018[0][0][0],(void*)0,&g_734,&g_1018[0][0][0]},{&g_104[0],&g_1018[0][1][1],(void*)0,&g_734,&g_1018[0][1][1]},{(void*)0,&g_1018[0][1][1],(void*)0,(void*)0,&g_1018[0][1][1]},{&g_104[0],&g_1018[0][0][0],(void*)0,&g_734,&g_1018[0][0][0]},{&g_104[0],&g_1018[0][1][1],(void*)0,&g_734,&g_1018[0][1][1]},{(void*)0,&g_1018[0][1][1],(void*)0,(void*)0,&g_1018[0][1][1]},{&g_104[0],&g_1018[0][0][0],(void*)0,&g_734,&g_1018[0][0][0]},{&g_104[0],&g_1018[0][1][1],(void*)0,&g_734,&g_1018[0][1][1]},{(void*)0,&g_1018[0][1][1],(void*)0,(void*)0,&g_1018[0][1][1]}};
        int i, j;
        --l_2021;
    }
    else
    {
        struct S0 *l_2044 = &g_529;
        int32_t l_2051 = 0L;
        int16_t *l_2052 = &g_923;
        int32_t l_2061 = 2L;
        int32_t l_2063[1];
        int8_t l_2067 = 0xA3L;
        int32_t l_2069 = (-1L);
        union U1 *l_2097 = &g_418;
        uint64_t l_2118[7] = {0xE039A49C0721CABDLL,0xDD2311282641B5CCLL,0xDD2311282641B5CCLL,0xE039A49C0721CABDLL,0xDD2311282641B5CCLL,0xDD2311282641B5CCLL,0xE039A49C0721CABDLL};
        int32_t l_2138 = 0L;
        int64_t l_2140[10][1] = {{4L},{0L},{4L},{0L},{4L},{0L},{4L},{0L},{4L},{0L}};
        uint8_t l_2143 = 2UL;
        int64_t l_2264 = 0x823F81C85D501CAFLL;
        int8_t l_2298 = 1L;
        int8_t ***l_2308 = &g_863[4];
        uint64_t l_2338[2][4][6] = {{{18446744073709551615UL,0x6253F52DF67C5101LL,18446744073709551615UL,18446744073709551612UL,0x9FE3509264C73C96LL,0x9FE3509264C73C96LL},{18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,0x6253F52DF67C5101LL,18446744073709551615UL},{18446744073709551615UL,18446744073709551607UL,0x9FE3509264C73C96LL,18446744073709551607UL,18446744073709551615UL,18446744073709551612UL},{18446744073709551607UL,18446744073709551615UL,18446744073709551612UL,18446744073709551612UL,18446744073709551615UL,18446744073709551607UL}},{{18446744073709551615UL,18446744073709551607UL,0x6253F52DF67C5101LL,18446744073709551615UL,0x6253F52DF67C5101LL,18446744073709551607UL},{0x6253F52DF67C5101LL,18446744073709551615UL,18446744073709551612UL,0x9FE3509264C73C96LL,0x9FE3509264C73C96LL,18446744073709551612UL},{0x6253F52DF67C5101LL,0x6253F52DF67C5101LL,0x9FE3509264C73C96LL,18446744073709551615UL,0x789F4D0217685AB8LL,18446744073709551615UL},{18446744073709551615UL,0x6253F52DF67C5101LL,18446744073709551615UL,18446744073709551612UL,0x9FE3509264C73C96LL,0x9FE3509264C73C96LL}}};
        struct S0 *l_2340 = &g_529;
        union U3 l_2370 = {0};
        int8_t l_2392 = (-2L);
        uint8_t l_2398 = 248UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2063[i] = 0x2E9BB931L;
lbl_2418:
        if ((l_2021 , (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(1UL, (safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((&g_1628 == &g_1628), (((***g_862) = 0x13L) | (safe_mod_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(((l_2021 <= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((l_2044 != ((safe_add_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u((((*l_2052) = (safe_lshift_func_uint8_t_u_s((18446744073709551609UL != (l_2021 , l_2051)), 0))) | 65526UL), l_2021)) < g_104[0]), l_2053)) , (void*)0)), g_939[0])), l_2021))) < l_2051), (*g_1073))) < g_233[3][2][2]), l_2053))))) , 1L), 0xC0BC80B3L)), l_2051)), (*g_405))))) < l_2051), 0xFDL))))
        {
            int32_t *l_2054 = &g_734;
            int32_t *l_2055 = &g_1018[0][0][3];
            int32_t *l_2056 = &g_6[2][0][0];
            int32_t *l_2057 = (void*)0;
            int32_t *l_2058[7] = {&g_104[0],&g_104[0],&g_104[0],&g_104[0],&g_104[0],&g_104[0],&g_104[0]};
            int8_t l_2065[5] = {(-8L),(-8L),(-8L),(-8L),(-8L)};
            int32_t l_2066 = 0x7112B7E6L;
            uint32_t l_2070 = 0UL;
            int i;
            l_2070--;
        }
        else
        {
            uint8_t l_2083[5][7] = {{255UL,0x01L,0x14L,0x14L,0x01L,255UL,0UL},{0x28L,255UL,255UL,255UL,255UL,0x28L,0x3FL},{255UL,0x01L,0x14L,0x14L,0x01L,255UL,0UL},{0x28L,255UL,255UL,255UL,255UL,0x28L,0x3FL},{255UL,0x01L,0x14L,0x14L,0x01L,255UL,0UL}};
            int32_t l_2084 = 1L;
            const int32_t *l_2087[10][10] = {{&g_734,&g_104[1],&g_6[1][0][1],&g_104[0],&l_2062[0],&g_104[0],&l_2063[0],&g_59[2][2][3],&g_6[1][0][1],&g_1018[0][0][0]},{&g_734,&g_104[1],&g_1018[0][0][0],&g_734,&g_734,&g_734,&g_1018[0][0][0],&g_104[1],&g_734,&l_2063[0]},{&g_734,&g_1018[0][0][0],&g_104[1],&l_2069,&l_2062[0],&g_6[1][0][1],&g_104[0],&l_2051,&l_2062[0],&l_2063[0]},{&g_59[4][1][0],&g_734,&g_734,&l_2069,&l_2062[0],&g_1018[0][0][0],&g_1018[0][0][0],&l_2062[0],&l_2069,&g_734},{&l_2051,&l_2051,&g_104[1],&l_2060,&g_734,&g_104[1],&l_2062[0],&g_59[2][2][3],&g_104[1],(void*)0},{&l_2063[0],&g_59[2][2][3],&g_104[0],&g_59[4][1][0],&g_1018[0][0][0],&g_104[1],&l_2062[0],&l_2060,&l_2062[0],&g_104[1]},{(void*)0,&l_2051,&g_59[4][1][0],&l_2051,(void*)0,&g_104[0],&g_1018[0][0][0],&l_2063[0],&g_734,&g_104[1]},{&g_104[0],&g_734,&l_2069,&l_2063[0],&g_59[4][1][0],&l_2059,&g_104[0],&g_734,&g_104[1],&g_104[1]},{&g_1018[0][0][0],&l_2063[0],&g_104[0],(void*)0,(void*)0,&g_104[0],&l_2063[0],&g_1018[0][0][0],&l_2051,&g_104[1]},{&g_104[1],&l_2059,&g_104[1],&g_104[0],&g_1018[0][0][0],&g_734,&g_6[1][0][1],&g_734,&l_2060,(void*)0}};
            uint32_t l_2095 = 1UL;
            uint32_t **l_2102 = &g_1088[5][1][2];
            int32_t l_2116 = 1L;
            int32_t l_2124 = 0x9C716773L;
            int32_t l_2139 = 0x55A88146L;
            int32_t l_2141 = 0x3C4E380DL;
            int32_t l_2142 = 0x9C711C35L;
            int32_t l_2169 = 0x7DC95B49L;
            int32_t l_2170[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
            union U3 *l_2202 = &g_118;
            union U1 l_2220 = {0xEFA4915FL};
            uint32_t l_2269 = 0x3073F3A4L;
            int64_t **l_2296[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_2296[i][j] = &g_1073;
            }
            l_2074 = l_2073;
        }
        for (l_2053 = 0; (l_2053 >= 13); l_2053++)
        {
            uint8_t *l_2357 = &l_2143;
            uint8_t *l_2360 = &g_2200;
            int32_t l_2363 = 0L;
            int32_t *l_2372 = &l_2062[2];
            union U1 *l_2376 = &g_115[7][4][0];
            uint8_t l_2414 = 0x40L;
            if ((((((((*l_2372) &= ((*l_2196) || ((l_2138 = (0xFCE3A2B28ECD0A4DLL || ((*g_405) != (safe_sub_func_uint64_t_u_u((((*l_2360) &= (255UL != ((*l_2196) = (--(*l_2357))))) ^ (((safe_add_func_uint64_t_u_u(g_171, 0x1C53491C5E827301LL)) , ((l_2363 , (safe_lshift_func_uint16_t_u_s((--g_1684), ((*l_2052) = ((safe_div_func_int16_t_s_s((l_2370 , ((*g_61) || 0x4BE3EF24L)), g_233[3][2][3])) & l_2371))))) & l_2363)) & l_2298)), (-6L)))))) > g_529.f1))) , g_59[3][0][3]) <= g_6[0][0][0]) >= (*g_61)) , 0UL) >= g_171))
            {
                uint16_t l_2389[1];
                int16_t l_2395 = 0xE11EL;
                union U3 l_2399 = {0};
                uint32_t * const ***l_2407 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_2389[i] = 0x1DB8L;
                for (g_734 = 0; (g_734 > 23); ++g_734)
                {
                    int32_t l_2375[2][4] = {{0x128E5BC7L,0x128E5BC7L,0x128E5BC7L,0x128E5BC7L},{0x128E5BC7L,0x128E5BC7L,0x128E5BC7L,0x128E5BC7L}};
                    struct S0 l_2379 = {-1L,250};
                    int64_t **l_2387 = &g_1073;
                    uint32_t **l_2394 = (void*)0;
                    uint16_t l_2417 = 65535UL;
                    int i, j;
                    if (l_2375[1][0])
                        break;
                    (**g_554) = l_2376;
                    (*l_2372) &= ((safe_mul_func_int16_t_s_s((l_2375[0][1] &= ((l_2393 , &g_1088[5][3][1]) != l_2394)), l_2395)) || l_2379.f1);
                    for (g_1376 = 0; (g_1376 >= 29); g_1376 = safe_add_func_int8_t_s_s(g_1376, 2))
                    {
                        int64_t *l_2415 = &l_2140[1][0];
                        int32_t l_2416[9][5] = {{7L,(-1L),7L,1L,1L},{7L,(-1L),7L,1L,1L},{7L,(-1L),7L,1L,1L},{7L,(-1L),7L,1L,1L},{7L,(-1L),7L,1L,1L},{7L,(-1L),7L,1L,1L},{7L,(-1L),7L,1L,1L},{7L,(-1L),7L,1L,1L},{7L,(-1L),7L,1L,1L}};
                        int i, j;
                        (*l_2372) &= (((*g_178) = ((((*g_4) = (l_2063[0] = l_2398)) | (l_2399 , ((*l_2360) = (safe_mul_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((*g_405), 3)) > (l_2416[6][0] = (+(safe_mul_func_uint8_t_u_u((0x0CA5L | (((l_2407 == (void*)0) & (safe_div_func_uint64_t_u_u(g_923, ((*l_2415) |= (safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s(l_2389[0], ((l_2414 < (*g_1073)) , (*g_178)))), 1L)))))) <= (*g_61))), l_2389[0]))))) && (*l_2196)), (*l_2196)))))) | (*g_61))) <= l_2395);
                        if (l_2417)
                            continue;
                        if (l_2416[6][0])
                            continue;
                        if (l_2363)
                            goto lbl_2418;
                    }
                }
            }
            else
            {
                (*l_2196) = l_2419;
            }
        }
    }
    (*l_2420) = (void*)0;
    return (*g_178);
}







static int32_t func_2(int8_t * p_3)
{
    uint64_t l_24[4][10] = {{0xFC167656540F213ELL,18446744073709551614UL,0xA41B870004DDC877LL,0xFC167656540F213ELL,0xA41B870004DDC877LL,18446744073709551614UL,0xFC167656540F213ELL,0xBDF78B15B45BEAC3LL,0xBDF78B15B45BEAC3LL,0xFC167656540F213ELL},{0xBDF78B15B45BEAC3LL,18446744073709551608UL,0xA41B870004DDC877LL,0xA41B870004DDC877LL,18446744073709551608UL,0xBDF78B15B45BEAC3LL,18446744073709551614UL,18446744073709551608UL,18446744073709551614UL,0xBDF78B15B45BEAC3LL},{0x1E9942C3B03C3FA3LL,18446744073709551608UL,0x423CB8E00457A23ALL,18446744073709551608UL,0x1E9942C3B03C3FA3LL,0x423CB8E00457A23ALL,0xFC167656540F213ELL,0xFC167656540F213ELL,0x423CB8E00457A23ALL,0x1E9942C3B03C3FA3LL},{0x1E9942C3B03C3FA3LL,18446744073709551614UL,18446744073709551614UL,0x1E9942C3B03C3FA3LL,0xA41B870004DDC877LL,0xBDF78B15B45BEAC3LL,0x1E9942C3B03C3FA3LL,0xBDF78B15B45BEAC3LL,0xA41B870004DDC877LL,0x1E9942C3B03C3FA3LL}};
    uint8_t l_1600 = 1UL;
    int32_t *l_1621[1][8];
    uint8_t *l_1676 = &l_1600;
    uint32_t l_1721 = 0x71618617L;
    union U1 *l_1724 = (void*)0;
    uint8_t ***l_1737 = &g_521[0][2];
    uint8_t ****l_1736[7];
    uint32_t l_1800 = 0x6AF80380L;
    struct S0 l_1884[4] = {{0xB531F67218AA370ELL,-133},{0xB531F67218AA370ELL,-133},{0xB531F67218AA370ELL,-133},{0xB531F67218AA370ELL,-133}};
    int8_t **** const l_1896 = &g_862;
    union U1 l_1908[9][5][5] = {{{{6UL},{0xAABB78B0L},{4294967295UL},{1UL},{0x9A53A8EDL}},{{6UL},{0xD6A0D3FCL},{0UL},{0xA83D3835L},{4UL}},{{0x6DE14BC6L},{0x2D6E73E1L},{0xBD7CB24CL},{7UL},{0xD090F055L}},{{1UL},{0xE0277206L},{0x9A719A69L},{0x1C0627C4L},{0x7787524EL}},{{0xBD7CB24CL},{4294967295UL},{4294967295UL},{1UL},{0UL}}},{{{0x0DC85872L},{0x3BD2213DL},{4294967295UL},{4294967295UL},{0x3BD2213DL}},{{0UL},{0UL},{0x61404442L},{0x0DC85872L},{0xDC1C43D6L}},{{0xDC1C43D6L},{1UL},{1UL},{0xAABB78B0L},{4294967290UL}},{{2UL},{4294967292UL},{4294967289UL},{7UL},{4294967294UL}},{{0xDC1C43D6L},{0x9D50C77EL},{0xA52ABB38L},{4294967291UL},{0UL}}},{{{0UL},{0xD725CC17L},{0x3EBE46D3L},{6UL},{7UL}},{{0x0DC85872L},{0x4E3343C3L},{4294967294UL},{1UL},{0xD6A0D3FCL}},{{0xBD7CB24CL},{0UL},{0UL},{0x4E3343C3L},{0x9A53A8EDL}},{{1UL},{0UL},{6UL},{1UL},{0x3EBE46D3L}},{{0x6DE14BC6L},{4294967295UL},{0UL},{0UL},{0xD6E9FF9CL}}},{{{4294967289UL},{0xA57CA876L},{4294967292UL},{0x2AA6CB55L},{4294967294UL}},{{0UL},{4294967290UL},{4294967289UL},{0x01446765L},{4294967295UL}},{{0x01446765L},{1UL},{0x2D6E73E1L},{4294967295UL},{4294967290UL}},{{0x1D56C0A1L},{4294967295UL},{0xAABB78B0L},{4294967289UL},{1UL}},{{0xD6A0D3FCL},{4294967295UL},{4294967293UL},{0x51F8446AL},{4294967290UL}}},{{{0x039F161AL},{1UL},{4294967290UL},{0xBD7CB24CL},{4294967295UL}},{{0xA83D3835L},{4294967290UL},{0x1D56C0A1L},{0UL},{0xD8044DF4L}},{{0x206E373DL},{0xA57CA876L},{0UL},{4294967289UL},{0UL}},{{4294967295UL},{4294967295UL},{0UL},{4294967295UL},{6UL}},{{1UL},{0UL},{1UL},{0x3BD2213DL},{1UL}}},{{{1UL},{0UL},{1UL},{0x7787524EL},{0x01446765L}},{{0xD6E9FF9CL},{0x4E3343C3L},{0UL},{4294967291UL},{4294967291UL}},{{1UL},{0xD725CC17L},{1UL},{0x41788EEEL},{1UL}},{{7UL},{0x9D50C77EL},{0x039F161AL},{0x206E373DL},{0UL}},{{0xA6D280ADL},{4294967292UL},{0x6DE14BC6L},{0UL},{0UL}}},{{{0x51F8446AL},{1UL},{0x039F161AL},{0UL},{0x9A719A69L}},{{0UL},{0UL},{1UL},{4294967293UL},{4294967291UL}},{{0xE0277206L},{0x3BD2213DL},{0UL},{0xA6D280ADL},{0UL}},{{0x3BD2213DL},{4294967295UL},{1UL},{4294967295UL},{4294967295UL}},{{4UL},{0xE0277206L},{1UL},{0UL},{1UL}}},{{{0xD725CC17L},{0x2D6E73E1L},{0UL},{0xC1B7C2A6L},{9UL}},{{4294967295UL},{2UL},{0UL},{0x3EBE46D3L},{4294967292UL}},{{1UL},{0x6DE14BC6L},{0x1D56C0A1L},{0x9A719A69L},{4294967295UL}},{{0x9A53A8EDL},{0UL},{4294967290UL},{4294967295UL},{0xD9E9ABDBL}},{{0x9D50C77EL},{0xF94E132BL},{4294967293UL},{0UL},{0x1C0627C4L}}},{{{0UL},{4294967295UL},{0x6DE14BC6L},{0xAABB78B0L},{4294967295UL}},{{0x1C0627C4L},{7UL},{0x3403E047L},{1UL},{0x05183458L}},{{0UL},{4294967292UL},{0xC1B7C2A6L},{0x51F8446AL},{0xE0277206L}},{{4UL},{4294967295UL},{0UL},{0xA83D3835L},{0UL}},{{0x9D50C77EL},{0x0DC85872L},{1UL},{0x9A719A69L},{0xA6D280ADL}}}};
    union U2 *l_1976 = (void*)0;
    union U2 **l_1975 = &l_1976;
    union U2 ***l_1974 = &l_1975;
    int32_t *l_1992 = &g_1018[0][0][6];
    uint32_t **l_1999 = &g_1088[5][1][2];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_1621[i][j] = &g_1422.f2;
    }
    for (i = 0; i < 7; i++)
        l_1736[i] = &l_1737;
    for (g_5 = 0; (g_5 <= 0); g_5 += 1)
    {
        int8_t l_11 = 1L;
        uint32_t *l_25 = &g_26;
        int32_t l_27 = (-9L);
        int32_t l_1565[3];
        union U2 l_1585[1][7][5] = {{{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}}}};
        union U3 l_1601 = {0};
        uint16_t l_1605 = 0xCC0AL;
        int32_t ***l_1609 = &g_900;
        struct S0 l_1631 = {0x848ABF985EED3C96LL,-235};
        union U1 l_1663 = {0x2A9D54D1L};
        int8_t l_1667 = 1L;
        uint32_t l_1669 = 0x4EE602ABL;
        const uint8_t l_1712 = 0xD1L;
        int16_t l_1714[2];
        uint8_t ***l_1735 = &g_521[0][1];
        uint8_t ****l_1734[4][6][3] = {{{&l_1735,&l_1735,&l_1735},{&l_1735,&l_1735,&l_1735},{(void*)0,&l_1735,&l_1735},{(void*)0,&l_1735,&l_1735},{&l_1735,&l_1735,&l_1735},{&l_1735,&l_1735,&l_1735}},{{&l_1735,&l_1735,(void*)0},{&l_1735,&l_1735,&l_1735},{&l_1735,&l_1735,(void*)0},{&l_1735,&l_1735,&l_1735},{&l_1735,&l_1735,&l_1735},{&l_1735,&l_1735,&l_1735}},{{&l_1735,&l_1735,&l_1735},{&l_1735,&l_1735,&l_1735},{&l_1735,(void*)0,&l_1735},{&l_1735,&l_1735,&l_1735},{&l_1735,(void*)0,&l_1735},{&l_1735,&l_1735,&l_1735}},{{&l_1735,&l_1735,&l_1735},{&l_1735,&l_1735,&l_1735},{(void*)0,&l_1735,&l_1735},{(void*)0,&l_1735,&l_1735},{&l_1735,&l_1735,&l_1735},{&l_1735,&l_1735,&l_1735}}};
        int8_t ** const *l_1777 = &g_863[7];
        const uint32_t **l_1779 = (void*)0;
        const uint32_t ***l_1778 = &l_1779;
        uint8_t l_1818[7][8][4] = {{{5UL,8UL,0xFCL,0xEDL},{0x67L,0UL,0UL,0x0DL},{0UL,1UL,5UL,246UL},{8UL,252UL,254UL,0x51L},{0xA1L,0xF7L,0x82L,249UL},{252UL,0x8BL,248UL,0xB0L},{0xB0L,0x67L,255UL,1UL},{0x14L,8UL,0xE4L,0x6BL}},{{0x0DL,0xCCL,0xCDL,0xA1L},{0xABL,0xD8L,5UL,5UL},{0x6DL,0x33L,254UL,0xA4L},{1UL,2UL,0x51L,0x82L},{255UL,247UL,0xDDL,0x8FL},{0x87L,1UL,0xEDL,1UL},{5UL,0UL,0x35L,247UL},{0x6DL,255UL,5UL,0UL}},{{0x8FL,0xFBL,1UL,0xA4L},{255UL,3UL,255UL,0x6FL},{0xFBL,0xE4L,4UL,0x5EL},{0x7BL,1UL,0x14L,0xE4L},{0x51L,5UL,0x14L,0UL},{0x7BL,2UL,4UL,0x8BL},{0xFBL,0xA2L,255UL,0xABL},{255UL,0xABL,1UL,0xD1L}},{{0x8FL,0UL,5UL,0xEDL},{0x6DL,0x18L,0x35L,249UL},{1UL,0x72L,255UL,0xE4L},{0xA4L,0UL,252UL,0xCCL},{0x96L,255UL,0xDDL,0x73L},{5UL,0xB0L,1UL,0UL},{255UL,0xFBL,0x32L,0x18L},{0xB0L,252UL,0xE8L,0x5EL}},{{0xCCL,0xA4L,0x6BL,255UL},{0xA1L,0x72L,0x14L,0x51L},{249UL,0UL,9UL,0UL},{3UL,0xA2L,0xEDL,252UL},{0UL,0xF7L,1UL,0xABL},{0x8FL,0xCDL,1UL,0xFCL},{251UL,0xABL,0xF7L,249UL},{0UL,0x74L,255UL,255UL}},{{1UL,1UL,252UL,249UL},{0x82L,8UL,0x33L,0UL},{0x72L,0xB0L,0UL,0x33L},{0UL,0xB0L,255UL,0UL},{0xB0L,8UL,1UL,249UL},{246UL,1UL,0x8FL,255UL},{0UL,0x74L,0x6BL,249UL},{0x7BL,0xABL,9UL,0xFCL}},{{5UL,0xCDL,0x8BL,0xABL},{0x32L,0xF7L,0UL,252UL},{5UL,0xA2L,5UL,0UL},{251UL,0UL,1UL,0x51L},{5UL,0x72L,255UL,255UL},{0UL,0xA4L,0x35L,0x5EL},{0x96L,252UL,0x33L,0x18L},{0x74L,0xFBL,255UL,0UL}}};
        int32_t l_1868 = 0xF7D750BFL;
        uint32_t l_1886 = 18446744073709551613UL;
        uint8_t l_1961 = 0xACL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1565[i] = 0x1ACAD91AL;
        for (i = 0; i < 2; i++)
            l_1714[i] = 0L;
    }
    return (*g_61);
}







static const int8_t func_14(uint32_t p_15)
{
    uint32_t l_28[4];
    struct S0 l_29 = {0x10212AEAFD71021FLL,-245};
    struct S0 *l_30 = &l_29;
    int8_t *l_44 = (void*)0;
    union U3 l_54 = {0};
    uint32_t *l_1490 = &g_26;
    int32_t *l_1547[10] = {&g_1168.f2,&g_1168.f2,&g_1168.f2,&g_1168.f2,&g_1168.f2,&g_1168.f2,&g_1168.f2,&g_1168.f2,&g_1168.f2,&g_1168.f2};
    int i;
    for (i = 0; i < 4; i++)
        l_28[i] = 0UL;
    l_28[2] ^= 7L;
    (*l_30) = l_29;
    g_104[0] = (safe_rshift_func_int8_t_s_u(func_33(((((safe_add_func_uint32_t_u_u(g_5, ((safe_lshift_func_int8_t_s_s((l_29.f1 |= (safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(l_29.f0, p_15)), p_15))), (safe_add_func_uint8_t_u_u(l_29.f0, (l_28[2] >= (safe_lshift_func_uint16_t_u_u((func_49(l_29.f0, &g_5, l_54, p_15) == g_6[2][0][1]), 12))))))) , p_15))) >= g_734) > 0L) , (void*)0), l_1490), 6));
    return p_15;
}







static int8_t func_33(int8_t * p_34, uint32_t * p_35)
{
    uint8_t l_1506 = 0xACL;
    int32_t l_1537 = 1L;
    uint8_t ***l_1544 = &g_521[0][5];
    for (g_923 = 0; (g_923 <= 2); g_923 += 1)
    {
        union U2 *l_1492 = &g_1168;
        union U2 **l_1491 = &l_1492;
        union U1 *l_1493 = &g_418;
        int32_t ***l_1525 = &g_900;
        const uint8_t *l_1528 = &g_496;
        const uint8_t **l_1527[9][8] = {{&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528},{&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,(void*)0,&l_1528,&l_1528},{&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528},{&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528},{&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528},{&l_1528,(void*)0,&l_1528,(void*)0,&l_1528,&l_1528,&l_1528,&l_1528},{&l_1528,&l_1528,(void*)0,&l_1528,&l_1528,&l_1528,&l_1528,(void*)0},{&l_1528,&l_1528,(void*)0,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528},{&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528}};
        const uint8_t ** const *l_1526 = &l_1527[5][7];
        union U1 ****l_1534 = &g_554;
        union U1 *****l_1533 = &l_1534;
        int i, j;
        (*l_1491) = &g_97[1][3];
        (*l_1491) = (((void*)0 == l_1493) , (void*)0);
        for (g_418.f0 = 0; (g_418.f0 <= 2); g_418.f0 += 1)
        {
            uint64_t *l_1509[10];
            int64_t l_1510 = 6L;
            int32_t l_1513 = (-5L);
            uint32_t ****l_1514 = (void*)0;
            int8_t *l_1515 = &g_284;
            int32_t **l_1532 = &g_61;
            uint32_t l_1541[2][10] = {{0xABFD565CL,18446744073709551615UL,0UL,0UL,18446744073709551615UL,0xABFD565CL,18446744073709551615UL,0UL,0UL,18446744073709551615UL},{0xABFD565CL,18446744073709551615UL,0UL,0UL,18446744073709551615UL,0xABFD565CL,18446744073709551615UL,0UL,0UL,18446744073709551615UL}};
            int i, j;
            for (i = 0; i < 10; i++)
                l_1509[i] = &g_833;
            if ((safe_mul_func_int8_t_s_s(((*l_1515) = (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((((*g_1073) = l_1506) || ((&g_861 == &g_861) >= g_418.f1)) && ((safe_mod_func_uint64_t_u_u((l_1510 &= l_1506), (safe_div_func_int64_t_s_s(((l_1513 == ((void*)0 != l_1514)) && l_1506), g_144)))) , (-1L))), (*g_405))), l_1506)) & g_469), 4)), l_1513)), 0L))), 254UL)))
            {
                int32_t l_1518 = 0x25762A09L;
                union U2 l_1531 = {0};
                int32_t *l_1538 = &l_1513;
                int32_t *l_1539 = &g_97[1][3].f2;
                int32_t l_1540 = 0x557B6BEBL;
                l_1540 = (((*l_1539) = ((((*l_1515) ^= (safe_rshift_func_int8_t_s_u(((l_1518 , (safe_add_func_uint8_t_u_u(((((((*l_1538) = (safe_add_func_uint64_t_u_u((l_1537 = (safe_sub_func_int32_t_s_s(((void*)0 == l_1525), ((g_1529 = l_1526) != (((((l_1531 , l_1532) == (void*)0) < (g_115[4][3][1].f2 = ((l_1533 == g_1535[0][1]) | (**l_1532)))) , (-1L)) , (void*)0))))), 18446744073709551615UL))) , (void*)0) == (void*)0) || (*g_1073)) <= 0x6BA68E70L), l_1506))) | (*p_35)), 6))) ^ (**l_1532)) > 0xACL)) <= (**l_1532));
                l_1541[1][7]++;
            }
            else
            {
                return (**l_1532);
            }
            for (l_1510 = 0; (l_1510 <= 2); l_1510 += 1)
            {
                uint8_t ****l_1545 = (void*)0;
                uint8_t ****l_1546 = &l_1544;
                int i, j, k;
                (*l_1546) = l_1544;
                g_59[(g_923 + 1)][g_418.f0][(g_923 + 6)] = g_59[(g_923 + 1)][g_923][(g_923 + 4)];
                g_59[(g_923 + 1)][g_418.f0][(g_923 + 6)] = (-1L);
            }
        }
    }
    return l_1537;
}







static int16_t func_49(int8_t p_50, int8_t * p_51, union U3 p_52, uint16_t p_53)
{
    const int32_t *l_75 = &g_6[1][0][0];
    const int32_t **l_74 = &l_75;
    int32_t l_619 = 0x5595F65FL;
    uint32_t l_678 = 0UL;
    int32_t l_683 = 1L;
    int32_t l_684 = 0x2B298508L;
    int32_t l_686[9][5][5] = {{{0x722AB13FL,(-5L),0x59C6EC1BL,0x297D2B27L,(-5L)},{0L,(-5L),0L,(-9L),0xFACB4464L},{1L,0x8E26038DL,0x59C6EC1BL,0x59C6EC1BL,0x8E26038DL},{0L,0xA4919989L,1L,(-9L),0xA42E7856L},{0x722AB13FL,0x8E26038DL,0xF5041E53L,0x297D2B27L,0x8E26038DL}},{{(-1L),(-5L),1L,0L,0xFACB4464L},{0x722AB13FL,(-5L),0x59C6EC1BL,0x297D2B27L,(-5L)},{0L,(-5L),0L,(-9L),0xFACB4464L},{1L,0x8E26038DL,0x59C6EC1BL,0x59C6EC1BL,0x8E26038DL},{0L,0xA4919989L,1L,(-9L),0xA42E7856L}},{{0x722AB13FL,0x8E26038DL,0xF5041E53L,0x297D2B27L,0x8E26038DL},{(-1L),(-5L),1L,0L,0xFACB4464L},{0x722AB13FL,(-5L),0x59C6EC1BL,0x297D2B27L,(-5L)},{0L,(-5L),0L,(-9L),0xFACB4464L},{1L,0x8E26038DL,0x59C6EC1BL,0x59C6EC1BL,0x8E26038DL}},{{0L,0xA4919989L,1L,(-9L),0xA42E7856L},{0x722AB13FL,0x8E26038DL,0xF5041E53L,0x297D2B27L,0x8E26038DL},{(-1L),(-5L),1L,0L,0xFACB4464L},{0x722AB13FL,(-5L),0x59C6EC1BL,0x297D2B27L,(-5L)},{0L,(-5L),0L,(-9L),0xFACB4464L}},{{1L,0x8E26038DL,0x59C6EC1BL,0x59C6EC1BL,0x8E26038DL},{0L,0xA4919989L,1L,(-9L),0xA42E7856L},{0x722AB13FL,0x8E26038DL,0xF5041E53L,0x297D2B27L,0L},{0x8589A47EL,0xF18DD9C0L,0L,3L,9L},{0x110ECF56L,1L,0x36C1CB9CL,(-5L),1L}},{{0xEF7EBE4EL,0xF18DD9C0L,0xFACB4464L,0xA4919989L,9L},{0xF12B6CEDL,0L,0x36C1CB9CL,0x36C1CB9CL,0L},{0xEF7EBE4EL,0L,0L,0xA4919989L,(-10L)},{0x110ECF56L,0L,0x8E26038DL,(-5L),0L},{0x8589A47EL,0xF18DD9C0L,0L,3L,9L}},{{0x110ECF56L,1L,0x36C1CB9CL,(-5L),1L},{0xEF7EBE4EL,0xF18DD9C0L,0xFACB4464L,0xA4919989L,9L},{0xF12B6CEDL,0L,0x36C1CB9CL,0x36C1CB9CL,0L},{0xEF7EBE4EL,0L,0L,0xA4919989L,(-10L)},{0x110ECF56L,0L,0x8E26038DL,(-5L),0L}},{{0x8589A47EL,0xF18DD9C0L,0L,3L,9L},{0x110ECF56L,1L,0x36C1CB9CL,(-5L),1L},{0xEF7EBE4EL,0xF18DD9C0L,0xFACB4464L,0xA4919989L,9L},{0xF12B6CEDL,0L,0x36C1CB9CL,0x36C1CB9CL,0L},{0xEF7EBE4EL,0L,0L,0xA4919989L,(-10L)}},{{0x110ECF56L,0L,0x8E26038DL,(-5L),0L},{0x8589A47EL,0xF18DD9C0L,0L,3L,9L},{0x110ECF56L,1L,0x36C1CB9CL,(-5L),1L},{0xEF7EBE4EL,0xF18DD9C0L,0xFACB4464L,0xA4919989L,9L},{0xF12B6CEDL,0L,0x36C1CB9CL,0x36C1CB9CL,0L}}};
    int8_t l_696 = (-1L);
    int8_t **l_730 = &g_4;
    int8_t ***l_729 = &l_730;
    int8_t ****l_728[9][1][5] = {{{(void*)0,&l_729,&l_729,&l_729,&l_729}},{{&l_729,&l_729,(void*)0,(void*)0,&l_729}},{{(void*)0,&l_729,&l_729,&l_729,&l_729}},{{&l_729,&l_729,(void*)0,(void*)0,&l_729}},{{(void*)0,&l_729,&l_729,&l_729,&l_729}},{{&l_729,&l_729,(void*)0,(void*)0,&l_729}},{{(void*)0,&l_729,&l_729,&l_729,&l_729}},{{&l_729,&l_729,(void*)0,(void*)0,&l_729}},{{(void*)0,&l_729,&l_729,&l_729,&l_729}}};
    int32_t *l_770 = &g_104[0];
    int64_t l_789 = 1L;
    int64_t l_817 = 0xDB702A1E334D25E1LL;
    struct S0 l_874 = {0x86EF95AD23D9C96FLL,141};
    union U1 *l_890 = &g_115[4][3][1];
    int32_t l_913 = 0x984B54A0L;
    const union U2 *l_927[9] = {&g_97[0][1],&g_97[1][3],&g_97[1][3],&g_97[0][1],&g_97[1][3],&g_97[1][3],&g_97[0][1],&g_97[1][3],&g_97[1][3]};
    const union U2 **l_926 = &l_927[4];
    union U3 *l_997 = &g_118;
    uint64_t l_1044 = 0xEB17CD72575577DCLL;
    union U1 * const l_1051 = (void*)0;
    int16_t l_1077 = 1L;
    int8_t l_1155 = 0x7BL;
    int32_t l_1192[5][6][7] = {{{0L,0L,2L,0x4CEA1C1BL,0x3534BBE6L,1L,0L},{0xCB13E04DL,1L,(-8L),0x28D3661DL,0x84114DD5L,0xF2FC74BAL,0L},{1L,0xD413AD50L,0xC9F02347L,(-4L),0xD97DB32CL,0xA728F4D3L,0L},{0x9C7EE093L,1L,0xB71A30EAL,1L,0x0E777AB3L,8L,0x33BD5358L},{3L,0xE8BDFC24L,0x6A6C740DL,0x823FC289L,0xE8BDFC24L,8L,5L},{(-1L),(-7L),0L,8L,0x5E4F048CL,(-10L),1L}},{{0xF2FC74BAL,0xA728F4D3L,0x57B8E854L,0x3534BBE6L,0x6A6C740DL,(-10L),0x28D3661DL},{8L,(-1L),(-5L),0x590E5EE8L,0x33BD5358L,1L,1L},{0xB71A30EAL,0L,1L,0L,0xB71A30EAL,1L,0x7B4FD657L},{0xCB13E04DL,1L,0x590E5EE8L,0x5E4F048CL,0x6A6C740DL,0x0296A1F6L,0x3100CC64L},{(-5L),0xB7261BA9L,0x0296A1F6L,1L,0L,0x590E5EE8L,0x6FF03670L},{0xCB13E04DL,0x5E4F048CL,1L,(-8L),0xF2FC74BAL,1L,0xE8BDFC24L}},{{0xB71A30EAL,0x8B073204L,1L,0xB71A30EAL,0x0E777AB3L,(-5L),(-6L)},{8L,2L,(-10L),1L,0x28D3661DL,0x57B8E854L,5L},{0xF2FC74BAL,0L,(-10L),0x7B4FD657L,7L,0L,(-1L)},{(-1L),0xA728F4D3L,8L,0xF2FC74BAL,1L,0x6A6C740DL,0xF2FC74BAL},{3L,(-8L),8L,0x590E5EE8L,1L,0L,0x6FF03670L},{0L,(-1L),(-10L),2L,(-6L),1L,0xB7261BA9L}},{{0x7B4FD657L,0x6FF03670L,(-10L),7L,0x823FC289L,0x93ABF9E2L,0L},{(-5L),7L,1L,0x823FC289L,0xCB13E04DL,0x823FC289L,1L},{8L,8L,1L,0L,7L,0L,2L},{(-1L),0x6FF03670L,0x0296A1F6L,(-6L),0x0E777AB3L,4L,0x9D074A75L},{0x7BEF43C6L,1L,0x590E5EE8L,0x6A6C740DL,7L,0xACE9D749L,5L},{2L,0x33BD5358L,1L,0x3100CC64L,0xCB13E04DL,1L,(-8L)}},{{0x3534BBE6L,0xA728F4D3L,(-5L),7L,0x823FC289L,0x651ADC8DL,1L},{0x7BEF43C6L,0x9D074A75L,0x57B8E854L,0x590E5EE8L,(-6L),5L,0x8B073204L},{(-6L),0x28D3661DL,0L,(-1L),1L,1L,7L},{7L,0x8B073204L,0x6A6C740DL,0xCB13E04DL,1L,0x6FF03670L,7L},{(-5L),0L,0L,0x6A6C740DL,7L,0x8EF8B214L,0x8B073204L},{0L,0x3100CC64L,1L,(-1L),0x28D3661DL,(-10L),1L}}};
    uint32_t l_1242 = 4294967290UL;
    int64_t l_1296 = 0x8019197F44CC9D06LL;
    int32_t l_1310 = 1L;
    int32_t l_1314[5];
    uint16_t l_1325 = 0UL;
    union U1 ***l_1394 = &g_555[0];
    uint64_t l_1416 = 0xA0551AB31EC109F2LL;
    union U3 ***l_1451[3];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1314[i] = 0x2620CA8AL;
    for (i = 0; i < 3; i++)
        l_1451[i] = &g_1213[3];
    if (p_50)
    {
        int32_t *l_57 = &g_6[1][0][0];
        const int64_t l_428 = 3L;
        int32_t l_676 = (-3L);
        int64_t l_681 = 0x9B2F83FB655FB72ALL;
        int32_t l_685 = (-4L);
        int32_t l_687 = 0x43B13061L;
        int32_t l_694 = 0xF5646017L;
        int32_t l_695 = 0x4904DDD7L;
        int8_t l_702 = (-1L);
        struct S0 l_748 = {-1L,-33};
        union U1 *l_757 = &g_115[0][1][1];
        const struct S0 l_760 = {0xD2BAC0D074314893LL,-163};
        union U2 *l_763 = &g_97[1][3];
        uint16_t l_769 = 0x08DEL;
        int64_t l_785[9][4] = {{0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL},{0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL},{0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL},{0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL},{0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL},{0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL},{0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL},{0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL},{0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL,0x9EDD23BFEF334356LL}};
        uint64_t *l_818 = &g_144;
        uint8_t *l_829[3];
        uint64_t *l_830 = &g_392;
        uint64_t *l_831 = (void*)0;
        uint64_t *l_832 = &g_833;
        int64_t *l_834 = &l_748.f0;
        int32_t l_841 = 0x94324095L;
        int32_t l_842 = (-7L);
        int32_t l_843[3];
        int64_t l_844 = 0x9E52588C39FC78E5LL;
        int32_t l_845 = (-5L);
        uint32_t l_846 = 0x8B80C813L;
        uint32_t l_902 = 4294967292UL;
        uint16_t l_924 = 0UL;
        int32_t l_965 = 0x8AEF8C28L;
        int64_t l_1137 = (-1L);
        uint32_t ****l_1139 = (void*)0;
        uint8_t ***l_1165 = (void*)0;
        const int16_t l_1207 = 0xCAFFL;
        union U3 **l_1219 = &l_997;
        uint64_t l_1287 = 1UL;
        int32_t l_1315 = 0x4E4D3D30L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_829[i] = &g_496;
        for (i = 0; i < 3; i++)
            l_843[i] = (-1L);
lbl_1181:
        for (p_53 = 0; (p_53 <= 6); ++p_53)
        {
            int32_t *l_58 = &g_59[0][0][7];
            int32_t **l_60[1][8] = {{(void*)0,&l_58,(void*)0,&l_58,(void*)0,&l_58,(void*)0,&l_58}};
            union U3 *l_427 = &g_118;
            union U3 **l_426 = &l_427;
            int8_t *l_566 = &g_5;
            int8_t l_693 = (-1L);
            int64_t l_701[7] = {0x09ADD22C3E0E9BA9LL,0x09ADD22C3E0E9BA9LL,0x09ADD22C3E0E9BA9LL,0x09ADD22C3E0E9BA9LL,0x09ADD22C3E0E9BA9LL,0x09ADD22C3E0E9BA9LL,0x09ADD22C3E0E9BA9LL};
            int32_t l_735 = 7L;
            int32_t l_754 = 0xC0268867L;
            union U1 *l_811 = &g_115[4][3][1];
            int i, j;
            l_58 = l_57;
            if ((*l_57))
                break;
            g_61 = &g_6[0][0][1];
        }
        if ((safe_add_func_int16_t_s_s(l_817, (0x474FF3A871B08611LL != ((*l_834) = (((*l_818)++) < ((g_496 = (safe_sub_func_uint8_t_u_u((((4294967288UL ^ ((p_53 , (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((g_521[0][0] = (void*)0) == (void*)0), 5)), (safe_add_func_uint64_t_u_u(((*l_832) = (g_97[1][3] , ((*l_830) = (6UL > (((((((*l_770) ^= g_174) || g_171) != p_53) | 0xB3L) && 4294967289UL) || 0x116C28FCL))))), p_50))))) , 0x26FFEB7AL)) , 0x552932332F69BC4FLL) == (*l_57)), 0UL))) <= (*g_4))))))))
        {
            int32_t *l_837 = (void*)0;
            int32_t *l_838 = &l_683;
            int32_t *l_839 = (void*)0;
            int32_t *l_840[3][8][2] = {{{(void*)0,&l_619},{(void*)0,(void*)0},{&g_104[0],&l_686[3][3][0]},{&l_686[3][3][0],&l_695},{(void*)0,&l_686[3][3][0]},{&l_695,&l_686[3][3][0]},{(void*)0,&l_695},{&l_686[3][3][0],&l_686[3][3][0]}},{{&g_104[0],(void*)0},{(void*)0,&l_619},{(void*)0,&l_686[3][3][0]},{&g_734,(void*)0},{&l_686[3][3][0],&g_104[0]},{&l_686[3][3][0],(void*)0},{&g_734,&l_686[3][3][0]},{(void*)0,&l_619}},{{(void*)0,(void*)0},{&g_104[0],&l_686[3][3][0]},{&l_686[3][3][0],&l_695},{(void*)0,&l_686[3][3][0]},{&l_695,&l_686[3][3][0]},{(void*)0,&l_695},{&l_686[3][3][0],&l_686[3][3][0]},{&g_104[0],(void*)0}}};
            int32_t **l_897 = &l_838;
            int32_t ***l_896 = &l_897;
            uint64_t *l_921 = (void*)0;
            int8_t l_977[2][8][2] = {{{0xC3L,0xC3L},{0xC3L,0xC3L},{0xC3L,0xC3L},{0xC3L,0xC3L},{0xC3L,0xC3L},{0xC3L,0xC3L},{0xC3L,0xC3L},{0xC3L,0xC3L}},{{0xC3L,0xC3L},{0xC3L,0xC3L},{0xC3L,0xC3L},{0xC3L,0xC3L},{0xC3L,0xC3L},{0xC3L,0xC3L},{0xC3L,0xC3L},{0xC3L,0xC3L}}};
            union U1 ****l_980 = (void*)0;
            uint32_t l_1028 = 18446744073709551612UL;
            int i, j, k;
            (*l_770) ^= (safe_rshift_func_uint8_t_u_u(p_50, 5));
            l_846++;
            for (p_50 = 0; (p_50 > (-23)); p_50 = safe_sub_func_int64_t_s_s(p_50, 1))
            {
                uint8_t l_851 = 1UL;
                int8_t ****l_860 = &l_729;
                int16_t *l_866 = &g_115[4][3][1].f2;
                int16_t *l_867 = &g_418.f2;
                int32_t ****l_898[8][2] = {{&l_896,&l_896},{&l_896,(void*)0},{&l_896,&l_896},{&l_896,(void*)0},{&l_896,&l_896},{&l_896,(void*)0},{&l_896,&l_896},{&l_896,(void*)0}};
                uint16_t l_922 = 6UL;
                uint32_t *l_925 = &g_469;
                int i, j;
                if (((--l_851) < ((((safe_div_func_int32_t_s_s(p_50, (g_118 , p_50))) > (*l_770)) , g_118) , (*g_4))))
                {
                    if (p_50)
                        break;
                    (*l_770) = (g_59[0][2][7] = (safe_lshift_func_uint16_t_u_u(p_50, 0)));
                }
                else
                {
                    for (g_348.f0 = (-4); (g_348.f0 != 14); g_348.f0 = safe_add_func_int32_t_s_s(g_348.f0, 1))
                    {
                        (*g_528) = l_874;
                    }
                }
                if ((*g_61))
                    break;
            }
            if ((((*l_832) = (((*g_405) = (**l_74)) != ((((*l_770) = (((l_926 == &l_763) && (safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((p_52.f3 = 0xEC7CL), (((*p_51) , (((safe_mul_func_uint8_t_u_u((*l_57), (****g_861))) != (((*l_57) < g_59[2][1][1]) == g_469)) & (*g_178))) && 18446744073709551607UL))), (*l_75)))) || p_50)) , (-3L)) ^ (*l_57)))) , p_53))
            {
                int32_t * const l_936[7] = {&l_843[0],&l_843[0],&l_843[0],&l_843[0],&l_843[0],&l_843[0],&l_843[0]};
                const int32_t *l_948 = (void*)0;
                uint16_t *l_991 = &l_924;
                int64_t l_1015 = (-1L);
                uint32_t l_1020 = 0x9F498876L;
                int i;
                for (l_683 = (-25); (l_683 <= 6); l_683 = safe_add_func_int32_t_s_s(l_683, 1))
                {
                    const uint32_t *l_946 = (void*)0;
                    int32_t l_947 = (-10L);
                    union U2 l_970 = {0};
                    if ((*l_57))
                    {
                        int32_t **l_937 = (void*)0;
                        int32_t **l_938 = &l_840[0][0][0];
                        int16_t *l_944 = (void*)0;
                        int16_t *l_945 = &g_418.f2;
                        (*g_528) = (*g_528);
                        (*l_938) = l_936[2];
                        l_948 = func_81(g_939[1], func_81(p_50, func_81(((p_53 <= (safe_lshift_func_uint16_t_u_s(p_50, (p_53 , ((*l_945) ^= (safe_rshift_func_int16_t_s_u(((*g_554) != (p_53 , ((**l_74) , (void*)0))), 7))))))) > p_50), l_946, l_947), (*l_838)), (*l_57));
                        l_965 ^= ((!((safe_add_func_int64_t_s_s((l_947 && (~(0x47L > (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((1UL != (safe_mul_func_int16_t_s_s((g_737 != (void*)0), (safe_unary_minus_func_int64_t_s((safe_add_func_uint32_t_u_u((p_53 > (((+(*l_948)) != ((((p_50 , 7UL) , p_50) > (*l_75)) != 0xCBEFBE21L)) || 0x12L)), 0L))))))) , p_50), l_947)), (-1L))), p_50))))), 0xA4BD10476C3E029DLL)) , g_348.f0)) <= 0xD60CL);
                    }
                    else
                    {
                        const uint64_t l_976 = 18446744073709551607UL;
                        l_947 |= (((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((-8L), 1)) && (l_970 , (0x7C4AAE0F7B842799LL >= ((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((!0xE1A6D660BF69A51BLL), l_976)) <= 0x99L), ((*l_75) && (l_977[0][2][0] = ((*l_834) = (((void*)0 == &g_555[1]) && l_976)))))) & p_53)))), (*l_770))) , 2UL) > g_104[0]);
                    }
                    if ((*l_75))
                        continue;
                    for (l_619 = 26; (l_619 < (-17)); l_619 = safe_sub_func_int16_t_s_s(l_619, 6))
                    {
                        union U1 *****l_981 = &l_980;
                        int32_t l_982 = (-4L);
                        (*l_981) = l_980;
                        if (l_982)
                            continue;
                    }
                }
                if ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((*g_405), (((safe_add_func_uint16_t_u_u((&g_97[1][0] != &g_97[0][1]), (safe_mod_func_int16_t_s_s(g_5, g_6[0][0][1])))) <= p_53) >= ((*l_991) &= ((*g_861) == (*g_861)))))), (safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((*g_405) && 0L), p_53)) , p_50), p_53)))))
                {
                    struct S0 *l_996 = &l_874;
                    union U3 **l_998 = &l_997;
                    uint8_t ***l_1000 = &g_521[0][4];
                    uint8_t ****l_999 = &l_1000;
                    (*l_996) = ((*g_528) = (*g_528));
                    (*l_998) = l_997;
                    for (g_418.f0 = 1; (g_418.f0 <= 4); g_418.f0 += 1)
                    {
                        return p_50;
                    }
                    (*l_999) = &g_521[0][0];
                }
                else
                {
                    int8_t l_1003[3];
                    const union U1 l_1010[5] = {{0xDBDACE47L},{0xDBDACE47L},{0xDBDACE47L},{0xDBDACE47L},{0xDBDACE47L}};
                    int32_t l_1019[4] = {9L,9L,9L,9L};
                    int16_t *l_1021 = (void*)0;
                    int16_t *l_1022 = &g_923;
                    int16_t l_1031[3][10][4] = {{{0x1645L,0L,0x4F1EL,0L},{7L,(-3L),(-1L),0L},{0x5FFDL,0L,0L,0x39F2L},{(-6L),0x6C9CL,(-3L),4L},{0x6F45L,0x9B77L,2L,0L},{0L,(-7L),1L,7L},{0x9B77L,0L,0xAB49L,0xB130L},{1L,0x5FFDL,(-7L),0xE753L},{1L,(-3L),1L,1L},{0x224AL,(-3L),0xBA96L,0xE753L}},{{0xE753L,0x4F1EL,1L,0x4F1EL},{0xB6B3L,0xB130L,0L,0x4F1CL},{1L,0x39F2L,(-3L),1L},{0xB130L,(-7L),(-3L),0xEEEBL},{0xB130L,0x224AL,(-3L),0xE032L},{1L,0xEEEBL,0L,1L},{0xB6B3L,(-3L),1L,1L},{0xE753L,0x6C11L,0xBA96L,0x1645L},{0x224AL,(-6L),1L,0x4F1CL},{0x4F1EL,(-3L),0xA2CEL,0x9B77L}},{{(-6L),0x1645L,(-3L),0x3619L},{(-2L),0xB6B3L,(-6L),(-3L)},{1L,0xEEEBL,(-3L),(-3L)},{0L,0L,0L,(-1L)},{0xE753L,0x9B77L,0x4F1CL,1L},{0x9DF0L,0xD777L,0xE032L,0x4F1CL},{0x6C11L,0xD777L,0xB130L,1L},{0xD777L,0x9B77L,(-3L),(-1L)},{0xA2CEL,0L,(-2L),(-3L)},{(-7L),0xEEEBL,(-10L),(-3L)}}};
                    uint32_t l_1036 = 0UL;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1003[i] = (-1L);
                    (*l_838) &= ((l_948 != &g_104[0]) <= (l_684 |= (((*g_4) != ((p_52.f3 = (safe_mul_func_int16_t_s_s((l_1003[0] , (((((*l_1022) = (((safe_mul_func_uint8_t_u_u((l_1003[0] , ((*g_706) == ((((((safe_lshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((l_1010[4] , (g_1018[0][1][1] |= (safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((l_1015 = (**l_74)), (safe_sub_func_uint64_t_u_u((0xBAD09E4DF4401D2DLL > g_529.f0), g_115[4][3][1].f0)))) | 4294967295UL), 0L)))), l_1003[1])) , 0xFAL) >= l_1019[0]), p_50)) <= (*l_770)) == p_50) || (-1L)) >= g_5) , (*g_178)))), (**l_74))) <= g_939[1]) | l_1020)) > 65528UL) & 1L) | 0x2B264E3DL)), (-10L)))) > p_53)) , p_52.f3)));
                    for (l_845 = 0; (l_845 > (-8)); l_845 = safe_sub_func_uint64_t_u_u(l_845, 5))
                    {
                        int16_t l_1025 = 0x77AEL;
                        int32_t l_1026 = 4L;
                        int32_t l_1027 = 0x29C0C564L;
                        int32_t l_1032 = 0L;
                        int32_t l_1033 = 8L;
                        int32_t l_1034 = 0L;
                        int32_t l_1035 = 0L;
                        --l_1028;
                        l_1036--;
                        if ((*g_706))
                            continue;
                    }
                }
            }
            else
            {
                const int32_t l_1041[10][9][2] = {{{0x7B804E5BL,0x3EEC8F2EL},{0x3EEC8F2EL,1L},{0x3EEC8F2EL,0x3EEC8F2EL},{0x7B804E5BL,0xE1D2608EL},{2L,(-1L)},{0x3EEC8F2EL,0xE1D2608EL},{(-1L),0x3EEC8F2EL},{2L,1L},{2L,0x3EEC8F2EL}},{{(-1L),0xE1D2608EL},{0x3EEC8F2EL,(-1L)},{2L,0xE1D2608EL},{0x7B804E5BL,0x3EEC8F2EL},{0x3EEC8F2EL,1L},{0x3EEC8F2EL,0x3EEC8F2EL},{0x7B804E5BL,0xE1D2608EL},{2L,(-1L)},{0x3EEC8F2EL,0xE1D2608EL}},{{(-1L),0x3EEC8F2EL},{2L,1L},{2L,0x3EEC8F2EL},{(-1L),0xE1D2608EL},{0x3EEC8F2EL,(-1L)},{2L,0xE1D2608EL},{0x7B804E5BL,0x3EEC8F2EL},{0x3EEC8F2EL,1L},{0x3EEC8F2EL,0x3EEC8F2EL}},{{0x7B804E5BL,0xE1D2608EL},{2L,(-1L)},{0x3EEC8F2EL,0xE1D2608EL},{(-1L),0x3EEC8F2EL},{2L,1L},{2L,0x3EEC8F2EL},{(-1L),0xE1D2608EL},{0x3EEC8F2EL,(-1L)},{2L,0xE1D2608EL}},{{0x7B804E5BL,0x3EEC8F2EL},{0x3EEC8F2EL,1L},{0x3EEC8F2EL,0x3EEC8F2EL},{0x7B804E5BL,0xE1D2608EL},{2L,(-1L)},{0x3EEC8F2EL,0xE1D2608EL},{(-1L),0x3EEC8F2EL},{2L,1L},{2L,0x3EEC8F2EL}},{{(-1L),0xE1D2608EL},{0x3EEC8F2EL,(-1L)},{2L,0xE1D2608EL},{0x7B804E5BL,0x3EEC8F2EL},{0x3EEC8F2EL,1L},{0x3EEC8F2EL,0x3EEC8F2EL},{0x7B804E5BL,0xE1D2608EL},{2L,(-8L)},{(-1L),1L}},{{(-8L),(-1L)},{0x7B804E5BL,5L},{0x7B804E5BL,(-1L)},{(-8L),1L},{(-1L),(-8L)},{0x7B804E5BL,1L},{0xB4597F1DL,(-1L)},{(-1L),5L},{(-1L),(-1L)}},{{0xB4597F1DL,1L},{0x7B804E5BL,(-8L)},{(-1L),1L},{(-8L),(-1L)},{0x7B804E5BL,5L},{0x7B804E5BL,(-1L)},{(-8L),1L},{(-1L),(-8L)},{0x7B804E5BL,1L}},{{0xB4597F1DL,(-1L)},{(-1L),5L},{(-1L),(-1L)},{0xB4597F1DL,1L},{0x7B804E5BL,(-8L)},{(-1L),1L},{(-8L),(-1L)},{0x7B804E5BL,5L},{0x7B804E5BL,(-1L)}},{{(-8L),1L},{(-1L),(-8L)},{0x7B804E5BL,1L},{0xB4597F1DL,(-1L)},{(-1L),5L},{(-1L),(-1L)},{0xB4597F1DL,1L},{0x7B804E5BL,(-8L)},{(-1L),1L}}};
                const uint32_t *l_1047[9][8][3] = {{{(void*)0,&g_26,&g_26},{&g_112.f0,&l_902,&g_115[4][3][1].f0},{&g_26,&l_902,&g_112.f0},{&l_846,&l_902,&g_26},{(void*)0,&g_26,(void*)0},{&g_26,&l_846,&l_846},{(void*)0,&l_902,&g_418.f0},{&g_26,&l_846,&l_846}},{{&g_26,&g_112.f0,&g_115[4][3][1].f0},{&g_26,&l_846,&l_846},{(void*)0,(void*)0,&g_26},{&g_26,&l_902,&g_115[4][3][1].f0},{(void*)0,&g_26,(void*)0},{&l_846,&l_846,(void*)0},{&g_26,(void*)0,(void*)0},{&g_112.f0,(void*)0,&g_115[4][3][1].f0}},{{(void*)0,&g_26,&g_26},{(void*)0,&g_26,&l_846},{&l_846,&g_26,&g_115[4][3][1].f0},{&l_846,&g_26,&l_846},{&l_902,&g_26,&g_418.f0},{&l_846,&g_26,&l_846},{&g_26,&g_26,(void*)0},{&g_418.f0,(void*)0,&g_26}},{{&g_418.f0,(void*)0,&g_112.f0},{&l_902,&l_846,&g_115[4][3][1].f0},{&g_418.f0,&g_26,&g_26},{&g_418.f0,&l_902,&g_115[4][3][1].f0},{&g_26,(void*)0,&l_902},{&l_846,&l_846,&g_418.f0},{&l_902,&g_112.f0,&g_418.f0},{&l_846,&l_846,&g_418.f0}},{{&l_846,&l_902,&l_902},{(void*)0,&l_846,&g_115[4][3][1].f0},{(void*)0,&g_26,&g_26},{&g_112.f0,&l_902,&g_115[4][3][1].f0},{&g_26,&l_902,&g_112.f0},{&l_846,&l_902,&g_26},{(void*)0,&g_112.f0,&g_418.f0},{&g_115[4][3][1].f0,&l_846,(void*)0}},{{&g_26,&g_112.f0,(void*)0},{&l_846,&g_115[4][3][1].f0,(void*)0},{&l_846,&l_902,&g_26},{&l_846,&l_902,&l_902},{&g_26,&g_26,&g_112.f0},{&g_115[4][3][1].f0,&g_115[4][3][1].f0,&l_846},{&g_418.f0,(void*)0,&g_26},{&g_112.f0,&g_26,&g_26}},{{&g_26,&g_418.f0,&g_26},{(void*)0,&l_846,&l_846},{&g_115[4][3][1].f0,&l_846,&g_112.f0},{&g_115[4][3][1].f0,&l_846,&l_902},{(void*)0,&l_902,&g_26},{&l_902,&l_846,(void*)0},{&g_26,&l_902,(void*)0},{(void*)0,&l_846,(void*)0}},{{&l_902,&l_846,&g_418.f0},{&l_846,&l_846,&l_846},{(void*)0,&g_418.f0,&g_418.f0},{&g_112.f0,&g_26,&g_26},{(void*)0,(void*)0,&g_26},{&l_846,&g_115[4][3][1].f0,&g_112.f0},{&l_902,&g_26,&g_112.f0},{(void*)0,&l_902,&l_846}},{{&g_26,&l_902,&g_418.f0},{&l_902,&g_115[4][3][1].f0,&l_846},{(void*)0,&g_112.f0,&g_112.f0},{&g_115[4][3][1].f0,&l_846,&g_112.f0},{&g_115[4][3][1].f0,&g_112.f0,&g_26},{(void*)0,(void*)0,&g_26},{&g_26,&g_26,&g_418.f0},{&g_112.f0,(void*)0,&l_846}}};
                int32_t l_1064 = 1L;
                int32_t l_1065 = 0x83A64186L;
                int i, j, k;
                for (g_833 = 0; (g_833 <= 2); g_833 += 1)
                {
                    uint16_t **l_1040 = (void*)0;
                    uint16_t ***l_1039 = &l_1040;
                    int32_t l_1043 = (-1L);
                    union U1 *l_1050 = &g_418;
                    (*l_1039) = (void*)0;
                    (*g_528) = (*g_528);
                    if (l_1041[6][3][1])
                        continue;
                    for (p_53 = 0; (p_53 <= 2); p_53 += 1)
                    {
                        int32_t l_1042 = 1L;
                        int16_t *l_1052 = &g_418.f2;
                        const int32_t l_1063 = 0x05281582L;
                        l_1044--;
                        (*l_74) = func_81((*l_838), l_1047[6][4][0], (((safe_lshift_func_int16_t_s_u((l_1050 != l_1051), 9)) , ((*l_1052) ^= (l_1042 = g_233[3][2][0]))) != ((safe_rshift_func_int16_t_s_s(p_53, 9)) && (l_1065 ^= (safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((l_1064 = (((*l_830) &= g_112.f2) <= ((safe_mul_func_int16_t_s_s((0x2FL || ((g_144 = (**l_74)) >= (*l_770))), l_1063)) | p_53))), p_50)), 0UL))))));
                        (*l_838) = (*g_61);
                    }
                }
                return l_1065;
            }
        }
        else
        {
            int8_t l_1080 = (-6L);
            uint32_t *l_1084 = &g_174;
            uint32_t **l_1083 = &l_1084;
            int32_t l_1090 = 1L;
            const union U1 l_1151[2] = {{0x66911A2AL},{0x66911A2AL}};
            int32_t l_1173 = 0x9BC49F67L;
            int16_t l_1177 = 0L;
            uint8_t *l_1210 = (void*)0;
            union U3 **l_1221 = &g_1214;
            int8_t ** const *l_1222 = &g_863[7];
            union U1 ** const *l_1274 = (void*)0;
            int32_t l_1298 = 9L;
            int32_t l_1300 = 0x6A299AA1L;
            int32_t l_1301[6] = {4L,4L,4L,4L,4L,4L};
            uint32_t l_1317 = 4294967295UL;
            int i;
            if ((((((*l_832) = (g_392 = ((*l_818)++))) || g_180.f1) ^ p_53) >= (****g_861)))
            {
                int8_t l_1072 = 1L;
                int32_t l_1079 = 0x51A8B4E0L;
                int32_t l_1098[4][3][9] = {{{(-7L),0xAB38C44AL,0L,0L,0L,0xF84FC5EEL,0xF84FC5EEL,0L,0L},{0xD87B30A3L,4L,0xD87B30A3L,0x7074178FL,0x36B554D2L,(-7L),1L,0xF3B295CBL,0xF3B295CBL},{(-5L),(-7L),(-1L),0xF84FC5EEL,(-1L),(-7L),(-5L),0x879260BCL,0L}},{{1L,(-7L),0x36B554D2L,0x7074178FL,0xD87B30A3L,4L,0xD87B30A3L,0x7074178FL,0x36B554D2L},{0xF84FC5EEL,0xF84FC5EEL,0L,0L,0L,0xAB38C44AL,(-7L),0x879260BCL,(-7L)},{0x36B554D2L,(-5L),(-7L),(-7L),(-5L),0x36B554D2L,0x5B3E1F12L,0xF3B295CBL,0xCD8E5D9AL}},{{0x879260BCL,0xFAF2215BL,0L,0xE65C5B8BL,(-5L),(-5L),0xE65C5B8BL,0L,0xFAF2215BL},{(-5L),9L,0x36B554D2L,0xD87B30A3L,(-1L),0x7074178FL,0x5B3E1F12L,0x5B3E1F12L,0x7074178FL},{0L,0L,(-1L),0L,0L,(-5L),(-7L),0xF84FC5EEL,0xE65C5B8BL}},{{4L,(-1L),(-7L),4L,1L,4L,(-7L),(-1L),0x5B3E1F12L},{0xFAF2215BL,(-5L),(-1L),0xAB38C44AL,0L,0L,0xE65C5B8BL,0L,0L},{0x36B554D2L,0xCD8E5D9AL,0xCD8E5D9AL,0x36B554D2L,4L,9L,0xD87B30A3L,0x4C704EC4L,0xF3B295CBL}}};
                int i, j, k;
                if ((safe_rshift_func_uint8_t_u_s(((((safe_rshift_func_uint8_t_u_s(l_1072, (g_144 < (g_1073 != &g_939[6])))) && ((*g_178) = (safe_unary_minus_func_int8_t_s((safe_add_func_int8_t_s_s(l_1077, (***g_862))))))) , (~((**l_74) >= (*l_57)))) ^ (((l_1079 &= ((p_53 <= l_1072) >= 0xC8C4CCB9L)) ^ (*l_57)) , l_1080)), 1)))
                {
                    uint32_t l_1091[1][2];
                    union U1 ****l_1100 = &g_554;
                    union U1 *****l_1099 = &l_1100;
                    uint32_t ****l_1140 = &g_1128;
                    union U2 *l_1167 = &g_1168;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1091[i][j] = 0x63ADF70AL;
                    }
                    for (p_53 = (-13); (p_53 >= 45); ++p_53)
                    {
                        uint32_t ***l_1085 = (void*)0;
                        uint32_t ***l_1086[4] = {&l_1083,&l_1083,&l_1083,&l_1083};
                        int32_t *l_1089 = (void*)0;
                        int i;
                        g_1087 = l_1083;
                        ++l_1091[0][1];
                    }
lbl_1156:
                    if (l_1072)
                    {
                        int32_t *l_1094[7][5];
                        int32_t ****l_1122 = &g_899;
                        int32_t ***l_1124 = &g_900;
                        int32_t ****l_1123 = &l_1124;
                        int16_t *l_1125 = &l_1077;
                        int i, j;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_1094[i][j] = &l_684;
                        }
                        ++g_1095;
                        (*l_74) = func_81((((l_1098[2][1][5] | ((void*)0 == l_1099)) ^ ((safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((((*g_178) = p_50) == ((*l_57) , (((safe_sub_func_int8_t_s_s(((((safe_mod_func_int16_t_s_s(((*l_1125) = (safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint16_t_u(p_50)), (g_469 ^ (safe_mul_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s(((safe_div_func_uint64_t_u_u((((*l_1122) = &g_900) != ((*l_1123) = (void*)0)), l_1098[3][2][0])) ^ (*p_51)), 0x56DEFA3ABD8CD897LL)) && p_53) >= p_50), 0x47L)))))), p_53)) >= 0x21L) >= (*g_61)) == 1L), p_50)) ^ l_1090) > l_1091[0][1]))), (***g_862))) != (*g_405)), (*g_61))), g_180.f1)), (*l_770))) , p_50)) & (***g_862)), &g_26, l_1091[0][1]);
                    }
                    else
                    {
                        int32_t *l_1126 = &l_686[3][3][0];
                        int8_t *****l_1129 = &l_728[5][0][4];
                        uint32_t ****l_1138 = &g_1128;
                        int32_t l_1143 = 0xA72D8802L;
                        (*l_1126) = ((*l_770) = 8L);
                        g_1127 = (void*)0;
                        (*l_1129) = &g_862;
                        l_1143 = ((((((safe_sub_func_int16_t_s_s(((((((*g_1073) |= p_53) && (l_1079 ^= ((void*)0 == &l_729))) < (p_52.f3 = (p_53 ^ (safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((((*l_834) = (!((p_53 & l_1137) & ((l_1138 != (l_1140 = l_1139)) == ((*l_818) = ((*l_770) = (safe_add_func_int8_t_s_s((-1L), 0xB4L)))))))) && 0x4598078EC7B9BC61LL) <= 0L), g_734)), p_53))))) > g_59[4][1][8]) , l_1080), 1UL)) | (*p_51)) | (-1L)) | 0x0FE9L) , (*l_1126)) > 0xF877L);
                    }
                    if ((safe_add_func_uint8_t_u_u(0UL, (safe_mod_func_int8_t_s_s(0xEEL, (safe_unary_minus_func_uint64_t_u((((safe_rshift_func_int8_t_s_s(((*l_75) & 1L), ((18446744073709551609UL != (((l_1151[1] , ((~((safe_sub_func_uint16_t_u_u(0UL, ((((g_112.f1 & g_6[2][0][0]) > (*l_75)) ^ 0x0C21L) , 0x11DFL))) | 2L)) , p_50)) & 0xA40AL) & l_1151[1].f2)) , l_1155))) && p_53) || 0L))))))))
                    {
                        const struct S0 l_1157 = {0x9E8CF08F72FE3612LL,19};
                        if (l_1155)
                            goto lbl_1156;
                        (*l_74) = (*l_74);
                        (*g_528) = l_1157;
                    }
                    else
                    {
                        uint8_t l_1158 = 0x26L;
                        uint16_t *l_1161 = &l_769;
                        uint16_t *l_1162[3][2];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1162[i][j] = &g_233[3][2][0];
                        }
                        --l_1158;
                        (*l_770) = (l_1161 == (l_1162[2][0] = l_1161));
                        (*l_74) = &l_1090;
                        (*l_770) ^= p_53;
                    }
                    for (l_845 = (-24); (l_845 == 15); ++l_845)
                    {
                        uint8_t ****l_1166 = &l_1165;
                        (*l_770) = (l_1098[2][1][5] < (&g_521[0][6] == ((*l_1166) = l_1165)));
                        l_1167 = l_763;
                    }
                }
                else
                {
                    uint32_t l_1178 = 0x9F4D7408L;
                    union U2 l_1204 = {0};
                    int32_t *l_1208 = &l_686[3][3][0];
                    uint8_t * const l_1209 = &g_496;
                    int32_t *l_1211 = &l_1090;
                    for (l_1077 = 2; (l_1077 >= 0); l_1077 -= 1)
                    {
                        int32_t *l_1169 = &l_841;
                        int32_t *l_1170 = &l_676;
                        int32_t *l_1171 = (void*)0;
                        int32_t *l_1172 = &l_842;
                        int32_t *l_1174 = &l_686[3][3][0];
                        int32_t *l_1175 = &g_59[2][1][1];
                        int32_t *l_1176[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1176[i] = &l_676;
                        l_1178--;
                        if (g_144)
                            goto lbl_1181;
                    }
                    (*l_1211) ^= ((((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((((*l_1208) |= (((safe_mul_func_uint32_t_u_u(((*l_57) , ((*g_178)++)), (0x6E5240E53EABDB28LL >= 18446744073709551610UL))) != (*l_57)) <= ((*g_1073) ^= (safe_mod_func_int32_t_s_s((l_1192[2][1][1] , (safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(g_174, (safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((+((l_1204 , (p_52 , ((safe_add_func_int16_t_s_s((((***g_862) >= (*p_51)) && 0x26CED1F875B47C24LL), (*l_770))) , p_50))) > l_1207)), 6)), 0xF5D0L)), 0xE092L)))), l_1178))), 0xC1458CBAL))))) ^ 1L), g_418.f1)), (*g_61))) != 0x88CA9715L) , l_1209) == l_1210);
                    (*l_74) = &l_1173;
                }
                return p_50;
            }
            else
            {
                union U3 ***l_1220[6];
                int32_t l_1247 = 1L;
                int32_t l_1248 = 0x44D0EFFCL;
                int32_t l_1249 = 0xD7B027C6L;
                int32_t l_1250 = 1L;
                int32_t l_1251 = (-1L);
                uint8_t l_1288 = 1UL;
                struct S0 l_1289 = {0xE1BE41689601DA7BLL,175};
                int32_t l_1297 = 0x2519CCC4L;
                int64_t l_1299 = 0xC0F3CEF4D1AE3523LL;
                int32_t l_1302 = 0xAE029991L;
                int32_t l_1303 = 0xD0E26EC6L;
                int32_t l_1304 = 2L;
                int32_t l_1305 = 6L;
                int32_t l_1306 = 0x119AA7B3L;
                int32_t l_1307 = (-10L);
                int32_t l_1308 = 0L;
                int32_t l_1309 = 1L;
                int32_t l_1311 = 0xE155EDE3L;
                int32_t l_1312 = 2L;
                int32_t l_1313 = 1L;
                int64_t l_1316 = 0x5755841596F5B212LL;
                int i;
                for (i = 0; i < 6; i++)
                    l_1220[i] = &l_1219;
lbl_1329:
                if (((~(((((((g_1213[3] != (l_1221 = ((safe_lshift_func_uint16_t_u_s(((*g_405)--), 13)) , l_1219))) == 7UL) >= (*l_57)) > 3L) >= (((*l_57) || (g_418.f1 , ((*g_861) == l_1222))) , g_734)) >= 0x18L) != 0x6FL)) | p_50))
                {
                    int32_t l_1237[10];
                    int64_t l_1246 = 0x90D117616BD2C222LL;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1237[i] = 0x29804F11L;
                    l_676 |= (p_50 < (safe_add_func_int16_t_s_s((!(safe_lshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((((*g_405) = ((safe_rshift_func_uint16_t_u_s((*l_770), g_923)) < (p_50 && p_50))) <= ((*g_554) != ((*g_528) , (*g_554)))), (~(safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(0xD9L, l_1151[1].f1)), p_50))))), 1))), p_53)));
                    for (p_53 = 0; (p_53 <= 1); p_53 += 1)
                    {
                        int8_t l_1238 = 1L;
                        int32_t *l_1239 = &l_1237[6];
                        int32_t *l_1240[6] = {&g_1168.f2,&g_1168.f2,&g_1168.f2,&g_1168.f2,&g_1168.f2,&g_1168.f2};
                        int32_t l_1241 = (-1L);
                        union U1 ****l_1245 = &g_554;
                        uint64_t l_1252 = 0UL;
                        int i;
                        l_1242--;
                        (*l_1245) = &g_555[1];
                        ++l_1252;
                    }
                }
                else
                {
                    uint16_t l_1286 = 0UL;
                    int32_t *l_1290 = &l_684;
                    int32_t *l_1291 = &l_687;
                    int32_t *l_1292 = &l_1251;
                    int32_t *l_1293 = &l_842;
                    int32_t *l_1294 = &l_1249;
                    int32_t *l_1295[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1295[i] = &l_1247;
                    (*l_770) = p_53;
                    for (l_695 = 2; (l_695 >= 0); l_695 -= 1)
                    {
                        struct S0 l_1266[4][7] = {{{0x7BB95EC14F2BE968LL,254},{0xC5B34214591DB448LL,-134},{0x7BB95EC14F2BE968LL,254},{0x7BB95EC14F2BE968LL,254},{0xC5B34214591DB448LL,-134},{0x7BB95EC14F2BE968LL,254},{0x7BB95EC14F2BE968LL,254}},{{-1L,230},{-1L,230},{1L,-226},{-1L,230},{-1L,230},{1L,-226},{-1L,230}},{{0xC5B34214591DB448LL,-134},{0x7BB95EC14F2BE968LL,254},{0x7BB95EC14F2BE968LL,254},{0xC5B34214591DB448LL,-134},{0x7BB95EC14F2BE968LL,254},{0x7BB95EC14F2BE968LL,254},{0xC5B34214591DB448LL,-134}},{{9L,123},{-1L,230},{9L,123},{9L,123},{-1L,230},{9L,123},{9L,123}}};
                        uint32_t *l_1285 = &l_846;
                        int i, j;
                        (*l_1221) = &p_52;
                    }
                    --l_1317;
                }
                for (l_695 = 4; (l_695 >= 0); l_695 -= 1)
                {
                    int32_t *l_1320 = (void*)0;
                    int32_t *l_1321 = &l_843[0];
                    int32_t *l_1322 = &l_842;
                    int32_t *l_1323 = &l_1249;
                    int32_t *l_1324[4][5][7] = {{{&l_694,&l_1309,&l_1298,&l_685,&l_687,&l_685,&l_1298},{&l_619,&l_619,(void*)0,&l_1303,&l_1311,&l_676,&l_687},{(void*)0,(void*)0,&l_1315,&l_1313,&l_1313,&l_1315,(void*)0},{&l_695,&l_1309,&l_619,(void*)0,&l_1311,&l_1311,&l_1303},{&l_1315,&l_694,&l_687,(void*)0,&l_687,&l_694,&l_1315}},{{&l_1303,&l_1311,&l_1311,(void*)0,&l_619,&l_1309,&l_695},{(void*)0,&l_1315,&l_1313,&l_1313,&l_1315,(void*)0,(void*)0},{&l_687,&l_676,&l_1311,&l_1303,(void*)0,&l_619,&l_619},{&l_1298,&l_685,&l_687,&l_685,&l_1298,&l_1309,&l_694},{(void*)0,&l_676,&l_619,&l_1311,(void*)0,&l_687,(void*)0}},{{&g_59[2][1][3],&l_1315,&l_1315,&g_59[2][1][3],&l_685,&l_685,&g_59[0][2][6]},{(void*)0,&l_1311,(void*)0,&l_1250,&l_695,&l_695,&l_1250},{&l_1298,&l_694,&l_1298,&l_685,(void*)0,&l_1313,&g_59[0][2][6]},{&l_687,&l_1309,(void*)0,(void*)0,&l_843[0],(void*)0,(void*)0},{(void*)0,(void*)0,&l_685,(void*)0,&l_686[3][2][1],&l_1313,&l_694}},{{&l_1303,&l_619,&l_695,&l_676,&l_676,&l_695,&l_619},{&l_1315,&l_1309,(void*)0,&l_1298,&l_686[3][2][1],&l_685,(void*)0},{&l_695,&l_687,&l_843[0],&l_619,&l_843[0],&l_687,&l_695},{(void*)0,&l_1309,&l_687,&l_1313,&l_685,&l_686[3][2][1],&g_59[2][1][3]},{(void*)0,&l_1250,&l_695,&l_695,&l_1250,(void*)0,&l_1311}}};
                    int i, j, k;
                    if (l_1314[l_695])
                        break;
                    l_1325++;
                    for (l_1288 = 0; (l_1288 <= 4); l_1288 += 1)
                    {
                        int i;
                        (*l_1321) ^= (safe_unary_minus_func_uint64_t_u(l_1314[l_695]));
                    }
                    if (l_846)
                        goto lbl_1329;
                    for (l_844 = 0; (l_844 <= 3); l_844 += 1)
                    {
                        int i;
                        return l_1314[l_844];
                    }
                }
                if ((safe_rshift_func_uint16_t_u_s(((+(*p_51)) <= 7UL), 8)))
                {
                    return g_112.f0;
                }
                else
                {
                    int32_t l_1333 = (-1L);
                    return l_1333;
                }
            }
        }
    }
    else
    {
        uint8_t l_1338 = 5UL;
        uint32_t l_1344 = 0xD106BC95L;
        int32_t l_1360[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
        int32_t *l_1364 = &g_104[0];
        uint64_t l_1377[5][6];
        uint32_t l_1400[3];
        uint32_t ** const l_1418 = &g_1088[3][0][2];
        union U2 *l_1421 = &g_1422;
        int64_t l_1438 = 0xB7FE5574F7691F9FLL;
        int32_t l_1467 = 0xF5AEAA20L;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 6; j++)
                l_1377[i][j] = 1UL;
        }
        for (i = 0; i < 3; i++)
            l_1400[i] = 0x57BC10E4L;
lbl_1455:
        for (g_496 = 0; (g_496 == 29); ++g_496)
        {
            (*l_770) &= (*g_61);
            (*g_61) &= (**l_74);
            l_1338 = (safe_lshift_func_uint16_t_u_s((*g_405), 15));
        }
        if ((safe_rshift_func_uint8_t_u_u((l_1338 , (safe_lshift_func_int8_t_s_s((~l_1344), 1))), (l_874 , (((*l_890) , (safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_1338, ((+0L) < ((**l_74) ^ (safe_mod_func_int8_t_s_s(l_1344, p_50)))))), (*l_770)))) , 0x05L)))))
        {
            uint64_t l_1361 = 18446744073709551615UL;
            int32_t l_1365 = 0x32558040L;
            int32_t l_1370 = 0x5122C716L;
            int32_t l_1372 = 9L;
            int32_t l_1373 = 1L;
            int32_t l_1374 = 0x63928DC5L;
            int32_t l_1375[7][7][3] = {{{0x714AAFA1L,0xAA6A53BDL,0xC6606CE1L},{0x6CE27A42L,0x56795BB5L,0xD1899C0AL},{9L,0xC67ECE4FL,0x59C92964L},{0x6CE27A42L,0x09880007L,0x4D168FC0L},{0x714AAFA1L,9L,0x7F71B077L},{1L,0x59C92964L,9L},{0L,0L,(-10L)}},{{(-1L),0xED989A24L,0x54CC70FEL},{0L,0x804B05CAL,(-1L)},{0x42C9C9E6L,0xA79D0EE1L,8L},{0x914A944BL,8L,1L},{0xC672FF68L,0x9425089AL,0x6CE27A42L},{6L,0L,0xAA6A53BDL},{0xA79D0EE1L,0x6CE27A42L,0xFA588855L}},{{0xF48B80DEL,0x42C9C9E6L,0xFA588855L},{0L,8L,0xAA6A53BDL},{0xB6EA387CL,0xD1899C0AL,0x6CE27A42L},{0x2FE311DEL,0x3D9284D9L,1L},{0x54CC70FEL,0x652B14C5L,8L},{0xAA6A53BDL,6L,(-1L)},{0x4D168FC0L,0x6C636F15L,0x54CC70FEL}},{{0x09880007L,0x0F8AEC3EL,(-10L)},{(-1L),9L,9L},{0x0F8AEC3EL,(-10L),0x7F71B077L},{0L,6L,0x4D168FC0L},{0L,1L,0x59C92964L},{0xF9510BA1L,(-10L),0xD1899C0AL},{0L,1L,0xC6606CE1L}},{{0x56795BB5L,6L,0x3D9284D9L},{0x232AD743L,(-10L),0L},{0x59C92964L,9L,0xA79D0EE1L},{0x7F9F66F4L,0x0F8AEC3EL,1L},{9L,0x6C636F15L,(-2L)},{0x7F71B077L,6L,0x804B05CAL},{(-9L),0x652B14C5L,0xB6EA387CL}},{{9L,0x3D9284D9L,0x56795BB5L},{0xBD8C326AL,0xD1899C0AL,0xA4EAB012L},{0x9425089AL,8L,0L},{6L,0x42C9C9E6L,5L},{6L,0x6CE27A42L,0xBD8C326AL},{0x9425089AL,0L,0x1834F7B0L},{0xBD8C326AL,0x9425089AL,0xF5649403L}},{{9L,8L,0x714AAFA1L},{(-9L),0xA79D0EE1L,0xE2FDCE8EL},{0x7F71B077L,0x804B05CAL,0x42C9C9E6L},{9L,0xED989A24L,0x7F9F66F4L},{0x7F9F66F4L,0L,(-1L)},{0x59C92964L,0x59C92964L,1L},{0x232AD743L,9L,0x4E6DD7B5L}}};
            union U1 ***l_1392 = (void*)0;
            union U3 ***l_1397 = &g_1213[3];
            uint32_t **l_1417 = &g_1088[3][0][0];
            int i, j, k;
lbl_1380:
            for (g_833 = 0; g_833 < 4; g_833 += 1)
            {
                for (l_1296 = 0; l_1296 < 4; l_1296 += 1)
                {
                    for (l_684 = 0; l_684 < 7; l_684 += 1)
                    {
                        g_233[g_833][l_1296][l_684] = 0xBB70L;
                    }
                }
            }
            for (l_817 = 1; (l_817 <= 4); l_817 += 1)
            {
                int32_t *l_1352 = &g_1168.f2;
                int32_t *l_1353 = &g_1168.f2;
                int32_t *l_1354 = &g_1018[0][1][1];
                int32_t *l_1355 = &l_683;
                int32_t *l_1356 = &g_1018[0][1][1];
                int32_t *l_1357 = &g_59[4][2][3];
                int32_t *l_1358 = (void*)0;
                int32_t *l_1359[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t *****l_1409 = &g_861;
                int8_t l_1453[9];
                int16_t l_1454 = 0L;
                int i;
                for (i = 0; i < 9; i++)
                    l_1453[i] = (-6L);
                ++l_1361;
                l_1364 = l_1352;
                for (g_529.f0 = 0; (g_529.f0 <= 1); g_529.f0 += 1)
                {
                    uint64_t l_1366 = 0x4A3C72CF861CE52DLL;
                    int32_t l_1369 = 1L;
                    int32_t l_1371 = 0xACE099B5L;
                    const int64_t l_1398 = 4L;
                    uint32_t l_1399 = 7UL;
                    l_1366--;
                    --l_1377[4][0];
                    if (g_348.f0)
                        goto lbl_1380;
                    for (g_144 = 0; (g_144 <= 0); g_144 += 1)
                    {
                        uint8_t l_1381 = 255UL;
                        int32_t l_1391[8];
                        union U1 ****l_1393[2];
                        int i, j;
                        for (i = 0; i < 8; i++)
                            l_1391[i] = (-6L);
                        for (i = 0; i < 2; i++)
                            l_1393[i] = (void*)0;
                        ++l_1381;
                        (*l_74) = l_1359[7];
                        (*l_74) = func_81(((safe_add_func_int8_t_s_s((+(((((((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(l_1391[7], p_50)), p_50)) && (((l_1394 = l_1392) != (void*)0) > ((((safe_mul_func_int8_t_s_s(((void*)0 != l_1397), ((l_1372 | (p_50 >= p_53)) , p_53))) | 0x18065ABCL) > 8UL) <= (***g_862)))) && l_1398) & l_1371) != 0x4F33D749L) > l_1399) >= (*g_178))), 0xC0L)) , l_1391[7]), &g_26, (*l_770));
                    }
                }
                l_1400[1]++;
                for (g_284 = 0; (g_284 >= 0); g_284 -= 1)
                {
                    int32_t l_1407 = 0x0260AEB3L;
                    struct S0 l_1437 = {-1L,162};
                    int32_t *l_1439[6] = {&l_1375[2][5][2],&g_1018[0][1][1],&g_1018[0][1][1],&l_1375[2][5][2],&g_1018[0][1][1],&g_1018[0][1][1]};
                    int i;
                    if (((safe_mod_func_uint64_t_u_u(p_53, 0xB4CFC158FDF373BCLL)) <= 1L))
                    {
                        uint8_t *l_1408 = &l_1338;
                        int16_t *l_1410[3][4] = {{&g_115[4][3][1].f2,&l_1077,&g_115[4][3][1].f2,&l_1077},{&g_115[4][3][1].f2,&l_1077,&g_115[4][3][1].f2,&l_1077},{&g_115[4][3][1].f2,&l_1077,&g_115[4][3][1].f2,&l_1077}};
                        uint16_t *l_1411 = (void*)0;
                        uint16_t *l_1412 = (void*)0;
                        uint16_t *l_1413 = &g_118.f3;
                        union U2 *l_1420 = (void*)0;
                        union U2 **l_1419 = &l_1420;
                        int i, j;
                        l_1421 = ((*l_1419) = ((((*l_1413) = ((*g_405) = (safe_mul_func_int16_t_s_s(((((((*l_1408) = l_1407) , (void*)0) == l_1409) == g_104[0]) , g_233[3][0][1]), (l_686[3][2][4] = p_50))))) > ((safe_mul_func_int16_t_s_s(l_1416, (0xA3L | ((((*l_1364) = ((l_1417 == l_1418) == 0L)) != l_1374) , (*p_51))))) > 0x59L)) , (void*)0));
                        (*g_61) ^= ((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(0x6BL, 4)), (safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((l_874 , (((safe_sub_func_int64_t_s_s((*l_1364), (*g_1073))) >= ((*g_528) , (g_1376 = p_50))) == ((*g_405) < ((((*l_890) , l_1437) , l_1438) > (-6L))))), (-3L))), (*g_4))))) > g_180.f0);
                        l_1439[3] = &l_1360[3];
                        return g_115[4][3][1].f1;
                    }
                    else
                    {
                        uint8_t *l_1452 = &l_1338;
                        int i, j;
                        (*l_1356) &= ((*l_1352) = (p_50 | (~(((((0x52L & (safe_lshift_func_int8_t_s_u((((-5L) > ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((*l_1452) &= (((p_50 < (safe_sub_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s((*p_51), (p_53 != (&g_1213[3] != l_1451[1])))) < (l_1372 = (*p_51))) != 0x1DL) <= 0xCBL), p_53))) != (*g_1073)) ^ 0UL)), (*l_1357))), (*g_405))) ^ p_50)) , 1L), l_1453[4]))) != 1L) ^ l_1454) , p_53) | 0xF3FF374EL))));
                        (*l_1364) = 0L;
                    }
                    (*l_770) ^= (((***l_1409) = &p_51) != &g_4);
                }
            }
            (*g_861) = (*g_861);
        }
        else
        {
            uint32_t l_1471 = 1UL;
            struct S0 l_1489 = {0xBBD7C040D7251851LL,218};
            if ((*l_770))
            {
                uint32_t l_1457 = 0xF8AD0FECL;
                int32_t l_1468 = 0xC60C3E80L;
                int32_t l_1469 = 0x4FDCE147L;
                int32_t l_1470 = 0x9C53B26CL;
                if (g_392)
                    goto lbl_1455;
                for (l_913 = 0; (l_913 <= 8); l_913 += 1)
                {
                    int32_t *l_1456[6][9][4] = {{{&g_104[0],&l_686[3][3][0],&g_1018[0][0][4],&g_59[0][0][7]},{(void*)0,&l_683,&g_59[0][1][7],&l_686[3][3][0]},{&g_1018[0][1][1],(void*)0,&l_686[6][1][0],&g_104[0]},{(void*)0,(void*)0,&g_734,(void*)0},{&g_104[0],&g_1018[0][1][5],(void*)0,&g_59[0][0][7]},{&l_1360[1],&l_686[3][3][0],&g_104[0],(void*)0},{&l_1360[3],&l_686[6][1][0],(void*)0,&l_686[1][0][3]},{&l_686[1][0][3],&l_1360[3],&l_1360[3],&g_104[0]},{(void*)0,(void*)0,(void*)0,&g_1018[0][1][0]}},{{&l_1360[2],&g_1018[0][1][1],&g_734,&g_104[0]},{&l_619,&g_1018[0][0][1],&l_686[7][2][3],(void*)0},{(void*)0,&l_1360[1],(void*)0,&g_1018[0][0][2]},{&g_1018[0][1][1],&l_686[7][2][3],&g_104[0],&l_686[3][3][0]},{(void*)0,&l_686[3][3][0],&l_619,&l_1360[3]},{&g_1018[0][1][0],&l_1360[3],&l_1360[3],&g_59[0][0][7]},{&g_734,&l_1360[1],&g_1018[0][1][1],&g_1018[0][1][6]},{&l_1360[4],&g_6[0][0][1],&g_59[0][0][7],&l_619},{(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_1018[0][0][1],&l_686[3][3][0],(void*)0,&l_686[3][3][0]},{&g_1018[0][0][4],(void*)0,(void*)0,&l_1360[3]},{&l_686[3][3][0],&g_734,&l_1360[3],&g_1018[0][1][1]},{&l_686[3][3][0],(void*)0,(void*)0,(void*)0},{&g_1018[0][0][4],&g_1018[0][1][1],(void*)0,&l_686[3][3][0]},{&g_1018[0][0][1],&g_1018[0][1][0],(void*)0,(void*)0},{(void*)0,&l_686[1][0][3],&g_59[0][0][7],&g_1018[0][1][5]},{&l_1360[4],&l_683,&g_1018[0][1][1],(void*)0},{&g_734,&g_104[0],&l_1360[3],&l_1360[3]}},{{&g_1018[0][1][0],(void*)0,&l_619,(void*)0},{(void*)0,&g_1018[0][0][2],&g_104[0],&g_1018[0][1][1]},{&g_1018[0][1][1],&g_104[0],(void*)0,&l_686[8][4][0]},{(void*)0,&l_686[3][3][0],&l_686[7][2][3],(void*)0},{&l_619,&g_1018[0][1][1],&g_734,&g_1018[0][1][1]},{&l_1360[2],(void*)0,(void*)0,&l_684},{(void*)0,&g_104[1],&l_1360[3],(void*)0},{&l_686[1][0][3],(void*)0,(void*)0,&l_683},{&l_1360[3],&g_104[0],&g_104[0],&l_686[3][3][0]}},{{&l_1360[1],&g_1018[0][1][6],(void*)0,&g_734},{&g_104[0],(void*)0,&g_734,&l_619},{(void*)0,&l_1360[3],&l_686[6][1][0],&l_686[3][3][0]},{&g_1018[0][1][1],&g_734,&g_59[0][1][7],&g_59[0][1][7]},{(void*)0,(void*)0,&g_1018[0][0][4],&l_1360[3]},{&g_104[0],&l_1360[4],&l_1360[2],&l_686[3][3][0]},{&g_59[0][0][7],&l_683,&l_619,&l_1360[2]},{&g_1018[0][1][1],&l_683,&g_1018[0][1][0],&l_686[3][3][0]},{&l_683,&l_1360[4],&l_686[3][3][0],&l_1360[3]}},{{&g_104[0],(void*)0,&l_683,&g_59[0][1][7]},{&g_59[0][0][7],&g_734,&g_1018[0][1][5],&l_686[3][3][0]},{&g_734,&g_59[0][0][7],&l_686[3][3][0],&l_686[1][0][3]},{&g_734,&g_1018[0][1][1],(void*)0,&l_686[6][1][0]},{(void*)0,&l_686[3][3][0],&g_104[0],(void*)0},{&g_104[0],&l_684,&g_1018[0][1][1],&l_1360[2]},{(void*)0,&g_59[0][0][7],&l_684,&g_1018[0][1][6]},{&l_1360[3],&l_686[3][3][0],(void*)0,&g_734},{(void*)0,&g_104[0],&l_686[1][0][3],&g_1018[0][1][5]}}};
                    uint8_t *l_1466[10] = {&l_1338,&g_496,&g_496,&l_1338,&g_496,&l_1338,&g_496,&g_496,&l_1338,&g_496};
                    int i, j, k;
                    ++l_1457;
                    (*g_61) = (((safe_add_func_int16_t_s_s(p_53, ((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(0x02L, (--l_1471))), (+((*l_75) < 0x65L)))) != (*g_405)))) | (((p_50 <= (safe_mod_func_int64_t_s_s((((0x8283L > 1UL) || 0x2283L) <= (*l_770)), g_104[0]))) , l_1457) , p_50)) || l_1471);
                    (*l_1364) = ((p_53 , 65532UL) | 0x0E91L);
                    for (g_833 = 0; (g_833 <= 1); g_833 += 1)
                    {
                        (*g_528) = (*g_528);
                        (*g_528) = (*g_528);
                        (*g_528) = (*g_528);
                    }
                }
            }
            else
            {
                for (l_913 = 0; (l_913 != 16); l_913 = safe_add_func_uint64_t_u_u(l_913, 2))
                {
                    union U1 l_1481 = {0xD7D77433L};
                    uint32_t **l_1485 = &g_1088[6][0][2];
                    uint8_t *l_1488 = &g_496;
                    (*l_1364) = (safe_mul_func_int8_t_s_s((l_1481 , (~((safe_mul_func_uint8_t_u_u((((void*)0 != l_1485) > l_1471), ((*l_1488) ^= ((safe_rshift_func_int16_t_s_s(5L, p_50)) > ((((*g_1073) == 0x8CB1EAF4A2B49782LL) & (*l_770)) ^ (***g_862)))))) >= (*p_51)))), l_1481.f0));
                    (*g_528) = l_1489;
                }
            }
            return g_112.f0;
        }
    }
    return g_529.f1;
}







static uint8_t func_64(union U3 p_65, int8_t * p_66)
{
    uint64_t l_567[8];
    int32_t *l_568[3][7] = {{&g_104[0],&g_104[0],&g_59[0][0][7],&g_59[0][0][7],&g_104[0],&g_104[0],&g_104[0]},{&g_104[0],&g_104[0],&g_59[0][0][7],&g_59[0][0][7],&g_104[0],&g_104[0],&g_104[0]},{&g_104[0],&g_104[0],&g_59[0][0][7],&g_59[0][0][7],&g_104[0],&g_104[0],&g_104[0]}};
    uint8_t l_569 = 249UL;
    struct S0 l_573 = {-1L,-248};
    int32_t l_590 = 0xEA719744L;
    int32_t l_592 = 0x5E5F710FL;
    int8_t l_606[7] = {(-1L),0x3BL,(-1L),(-1L),0x3BL,(-1L),(-1L)};
    uint8_t *l_611 = &l_569;
    uint8_t **l_610 = &l_611;
    union U1 ***l_617[7] = {&g_555[1],&g_555[1],&g_555[1],&g_555[1],&g_555[1],&g_555[1],&g_555[1]};
    int16_t l_618 = (-2L);
    int i, j;
    for (i = 0; i < 8; i++)
        l_567[i] = 0xCEF57FF2BA08E751LL;
    l_569 |= l_567[1];
    for (g_348.f0 = 0; (g_348.f0 >= (-29)); --g_348.f0)
    {
        int16_t l_572 = 0L;
        int8_t **l_583 = &g_4;
        int8_t ***l_582 = &l_583;
        int8_t ****l_584 = (void*)0;
        int8_t ***l_586 = (void*)0;
        int8_t ****l_585 = &l_586;
        int8_t *l_587 = (void*)0;
        int8_t *l_588 = &g_284;
        int32_t l_589[5][6] = {{(-1L),0L,0L,(-1L),0L,0L},{(-1L),0L,0L,(-1L),0L,0L},{(-1L),0L,0L,(-1L),0L,0L},{(-1L),0L,0L,(-1L),0L,0L},{(-1L),0L,0L,(-1L),0L,0L}};
        int16_t *l_591 = (void*)0;
        int i, j;
        g_348.f1 &= (l_572 < (l_573 , ((safe_add_func_uint16_t_u_u(((g_233[2][2][0] , 253UL) | (l_592 = (safe_rshift_func_int16_t_s_s(((*g_61) , (g_115[4][3][1].f2 = ((((safe_mod_func_int8_t_s_s((l_589[3][1] = (g_112.f0 < ((((*l_588) = (safe_lshift_func_int8_t_s_s((((*l_585) = (l_582 = l_582)) != (g_118 , &l_583)), l_572))) == l_572) | 4294967290UL))), 2UL)) ^ l_572) <= l_572) != l_590))), l_572)))), (*g_405))) , 0xA549L)));
    }
    for (l_573.f0 = 29; (l_573.f0 == (-16)); --l_573.f0)
    {
        int32_t *l_595 = (void*)0;
        int32_t **l_596 = &l_568[2][3];
        uint32_t l_599 = 18446744073709551615UL;
        int32_t l_607[8] = {1L,0xBB11E152L,0xBB11E152L,1L,0xBB11E152L,0xBB11E152L,1L,0xBB11E152L};
        uint8_t *l_609 = &g_496;
        uint8_t **l_608 = &l_609;
        int32_t l_616 = 0L;
        int i;
        (*l_596) = l_595;
        l_607[3] = (safe_mul_func_int16_t_s_s(l_599, ((safe_add_func_uint64_t_u_u(0xC3740A3E5DEABCC8LL, g_171)) == (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((l_606[6] | (g_171 & l_607[3])), (l_608 != l_610))), (safe_rshift_func_int8_t_s_u(((((((((((safe_mul_func_uint16_t_u_u((((l_616 = (0UL & 0xB6B5DE58L)) ^ (*g_61)) < (*g_61)), (*g_405))) < g_104[1]) , (*g_4)) & 0x59L) , l_617[3]) != (void*)0) >= g_144) | 4L) , &l_611) != &l_611), l_607[3])))))));
    }
    (*g_528) = l_573;
    return l_618;
}







static union U3 func_67(int64_t p_68, uint8_t p_69, uint16_t p_70, int32_t p_71)
{
    int32_t **l_431 = &g_61;
    int32_t l_435 = 0x6DEA3CB6L;
    uint32_t *l_452[3];
    union U3 l_461[2][10] = {{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}};
    int8_t **l_488 = &g_4;
    int i, j;
    for (i = 0; i < 3; i++)
        l_452[i] = &g_26;
    for (p_70 = 0; (p_70 < 31); p_70++)
    {
        int32_t **l_432 = &g_61;
        int32_t ***l_433 = (void*)0;
        int32_t **l_434 = &g_61;
        struct S0 l_436 = {0x14C589FBCC56B9A2LL,162};
        uint16_t l_557 = 0x6893L;
        if ((l_431 != (l_434 = l_432)))
        {
            struct S0 *l_437 = &g_180;
            l_435 = (*g_61);
            (*l_437) = l_436;
        }
        else
        {
            int32_t *l_438 = &l_435;
            int16_t *l_445[6][9][4] = {{{&g_115[4][3][1].f2,&g_115[4][3][1].f2,(void*)0,(void*)0},{&g_418.f2,&g_418.f2,&g_418.f2,&g_115[4][3][1].f2},{&g_418.f2,&g_418.f2,&g_115[4][3][1].f2,&g_115[4][3][1].f2},{&g_115[4][3][1].f2,&g_115[4][3][1].f2,&g_115[4][3][1].f2,&g_418.f2},{&g_418.f2,&g_418.f2,(void*)0,&g_418.f2},{(void*)0,(void*)0,&g_115[4][3][1].f2,&g_418.f2},{&g_418.f2,(void*)0,&g_115[4][3][1].f2,&g_418.f2},{&g_418.f2,(void*)0,(void*)0,(void*)0},{&g_418.f2,(void*)0,&g_418.f2,&g_418.f2}},{{&g_115[4][3][1].f2,&g_418.f2,(void*)0,(void*)0},{(void*)0,&g_418.f2,&g_418.f2,&g_418.f2},{&g_115[4][3][1].f2,(void*)0,&g_418.f2,&g_418.f2},{&g_418.f2,&g_418.f2,(void*)0,&g_418.f2},{&g_418.f2,&g_418.f2,&g_418.f2,&g_115[4][3][1].f2},{(void*)0,&g_115[4][3][1].f2,(void*)0,&g_115[4][3][1].f2},{&g_115[4][3][1].f2,(void*)0,&g_418.f2,(void*)0},{&g_418.f2,&g_418.f2,&g_418.f2,&g_418.f2},{&g_418.f2,&g_115[4][3][1].f2,&g_418.f2,&g_418.f2}},{{&g_418.f2,&g_115[4][3][1].f2,(void*)0,&g_418.f2},{&g_418.f2,&g_115[4][3][1].f2,&g_418.f2,&g_418.f2},{&g_418.f2,&g_418.f2,&g_418.f2,&g_115[4][3][1].f2},{&g_115[4][3][1].f2,&g_418.f2,&g_418.f2,&g_115[4][3][1].f2},{&g_418.f2,&g_115[4][3][1].f2,&g_115[4][3][1].f2,(void*)0},{&g_418.f2,&g_418.f2,(void*)0,(void*)0},{(void*)0,&g_418.f2,&g_115[4][3][1].f2,(void*)0},{&g_115[4][3][1].f2,&g_418.f2,&g_115[4][3][1].f2,(void*)0},{&g_115[4][3][1].f2,&g_115[4][3][1].f2,&g_418.f2,&g_115[4][3][1].f2}},{{&g_418.f2,&g_418.f2,&g_418.f2,&g_115[4][3][1].f2},{&g_418.f2,&g_418.f2,&g_418.f2,&g_418.f2},{&g_115[4][3][1].f2,&g_115[4][3][1].f2,(void*)0,&g_418.f2},{&g_115[4][3][1].f2,&g_115[4][3][1].f2,&g_115[4][3][1].f2,&g_418.f2},{&g_115[4][3][1].f2,&g_115[4][3][1].f2,&g_418.f2,&g_418.f2},{(void*)0,&g_418.f2,&g_418.f2,(void*)0},{(void*)0,(void*)0,&g_115[4][3][1].f2,&g_115[4][3][1].f2},{(void*)0,&g_115[4][3][1].f2,&g_418.f2,&g_418.f2},{&g_418.f2,&g_418.f2,&g_115[4][3][1].f2,&g_115[4][3][1].f2}},{{&g_115[4][3][1].f2,&g_115[4][3][1].f2,&g_418.f2,(void*)0},{(void*)0,&g_115[4][3][1].f2,(void*)0,(void*)0},{&g_418.f2,&g_115[4][3][1].f2,&g_418.f2,&g_115[4][3][1].f2},{(void*)0,&g_418.f2,&g_115[4][3][1].f2,&g_418.f2},{&g_418.f2,&g_115[4][3][1].f2,(void*)0,(void*)0},{&g_418.f2,&g_115[4][3][1].f2,&g_115[4][3][1].f2,(void*)0},{&g_418.f2,&g_115[4][3][1].f2,(void*)0,&g_418.f2},{&g_418.f2,&g_418.f2,&g_418.f2,&g_115[4][3][1].f2},{(void*)0,(void*)0,&g_115[4][3][1].f2,&g_115[4][3][1].f2}},{{(void*)0,&g_115[4][3][1].f2,&g_115[4][3][1].f2,&g_418.f2},{(void*)0,&g_418.f2,(void*)0,&g_418.f2},{&g_418.f2,&g_418.f2,&g_115[4][3][1].f2,&g_418.f2},{&g_418.f2,(void*)0,&g_418.f2,&g_115[4][3][1].f2},{&g_115[4][3][1].f2,&g_115[4][3][1].f2,(void*)0,&g_418.f2},{&g_115[4][3][1].f2,&g_418.f2,(void*)0,&g_115[4][3][1].f2},{&g_418.f2,&g_115[4][3][1].f2,(void*)0,&g_115[4][3][1].f2},{&g_115[4][3][1].f2,&g_418.f2,(void*)0,&g_418.f2},{&g_115[4][3][1].f2,&g_418.f2,&g_418.f2,&g_418.f2}}};
            int32_t *l_451 = &g_59[0][0][7];
            uint32_t **l_453 = &l_452[0];
            int32_t l_468 = (-1L);
            uint8_t *l_520 = &g_496;
            uint8_t **l_519 = &l_520;
            int32_t **l_524 = &g_61;
            int i, j, k;
            (*l_451) = ((*l_438) = (((((*l_431) == (g_348 , l_438)) , ((safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((g_418.f2 &= (safe_mul_func_uint16_t_u_u((**l_434), 0xDC69L))), (safe_rshift_func_uint16_t_u_s((*g_405), ((!p_68) || (safe_sub_func_int32_t_s_s(((p_69 <= 0xB1L) || (**l_432)), (**l_434)))))))) & (*l_438)), p_70)) > (*g_405))) , g_59[3][1][2]) || 0x7ABA182A7D4FD74DLL));
            if ((((*l_453) = l_452[1]) == ((*g_114) , &g_26)))
            {
                int32_t *l_456 = &g_104[1];
                (*l_451) &= p_71;
                for (l_435 = (-28); (l_435 >= 0); l_435++)
                {
                    int8_t **l_460[7][8][4] = {{{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4}}};
                    int8_t ***l_459 = &l_460[1][6][3];
                    int32_t l_462 = 3L;
                    int32_t *l_463 = &l_462;
                    int32_t *l_464 = &g_104[0];
                    int32_t *l_465 = &g_59[0][0][7];
                    int32_t *l_466 = &g_104[0];
                    int32_t *l_467[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j, k;
                    (*l_431) = l_456;
                    for (g_418.f0 = 0; (g_418.f0 == 51); g_418.f0 = safe_add_func_int16_t_s_s(g_418.f0, 7))
                    {
                        (**l_434) &= 0x2FE6F7A8L;
                        (*l_451) ^= (((void*)0 == l_459) != 0x66L);
                        return l_461[1][9];
                    }
                    g_469--;
                }
                for (l_436.f0 = 0; (l_436.f0 >= 13); l_436.f0 = safe_add_func_int16_t_s_s(l_436.f0, 3))
                {
                    for (g_284 = 9; (g_284 == (-23)); g_284 = safe_sub_func_int8_t_s_s(g_284, 2))
                    {
                        if ((*g_61))
                            break;
                        (*l_438) |= (safe_add_func_uint64_t_u_u((**l_432), (safe_rshift_func_uint16_t_u_s((p_69 == p_68), p_71))));
                    }
                    if ((*g_61))
                        break;
                }
                for (g_174 = 0; (g_174 <= 1); g_174 += 1)
                {
                    int64_t *l_482 = (void*)0;
                    int64_t *l_483 = &g_180.f0;
                    uint64_t *l_489 = (void*)0;
                    uint8_t *l_494 = (void*)0;
                    uint8_t *l_495 = (void*)0;
                    uint64_t *l_509 = &g_392;
                    int32_t l_516 = 0xABC90B84L;
                    int64_t l_517 = 0x54109888F319D9C0LL;
                    int i;
                }
            }
            else
            {
                int32_t *l_518 = &g_104[1];
                for (g_348.f0 = 3; (g_348.f0 >= 0); g_348.f0 -= 1)
                {
                    int32_t ***l_523 = &l_432;
                    for (g_496 = 0; (g_496 <= 2); g_496 += 1)
                    {
                        uint8_t ***l_522 = &l_519;
                        if ((*g_61))
                            break;
                        (*l_434) = l_518;
                        (*l_522) = (g_521[0][1] = l_519);
                    }
                    l_524 = ((*l_523) = l_431);
                    for (g_180.f0 = 0; (g_180.f0 <= 3); g_180.f0 += 1)
                    {
                        union U1 l_527 = {4294967290UL};
                        int64_t *l_534[3][8] = {{&g_180.f0,(void*)0,&g_348.f0,&g_348.f0,(void*)0,&g_180.f0,(void*)0,&g_348.f0},{&l_436.f0,(void*)0,&l_436.f0,&g_180.f0,&g_180.f0,&l_436.f0,(void*)0,&l_436.f0},{&g_348.f0,&g_180.f0,&g_348.f0,&g_180.f0,&g_348.f0,&g_348.f0,&g_180.f0,&g_348.f0}};
                        int32_t l_535 = (-1L);
                        uint32_t *l_553 = &g_469;
                        uint32_t **l_552 = &l_553;
                        int i, j, k;
                        (*l_438) |= (((l_445[g_348.f0][(g_180.f0 + 5)][g_348.f0] == g_405) == (safe_mod_func_uint8_t_u_u(((*g_61) | (((*l_518) ^ (l_527 , (&g_180 == (p_68 , (g_528 = &g_180))))) > (safe_mod_func_int64_t_s_s(((l_535 = (((((safe_sub_func_int32_t_s_s(((p_69 < p_68) != (**l_432)), p_71)) , (void*)0) != (void*)0) != 0x7AADL) ^ p_68)) , 0x5CACB7A77C9F6559LL), (***l_523))))), 0xCBL))) > (*l_518));
                        l_435 &= ((safe_unary_minus_func_int32_t_s((l_535 = (g_112.f0 && ((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((safe_div_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((*g_178), ((1UL & ((safe_sub_func_int64_t_s_s(2L, p_69)) <= ((((*g_528) , (((p_68 || (((((safe_rshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(p_70, (((*l_552) = (void*)0) == l_452[1]))), (*g_61))), p_71)) ^ (*g_178)) == g_348.f0) <= p_70) || g_5)) >= p_69) >= 0x04DC5AA3L)) != 0x5EL) , 0x290A3DE1L))) || (**l_434)))) , 0xBC59129141D1DA66LL), 0x0E151FD4A6385435LL)))), 0x45L)) == (-5L)))))) , (*g_61));
                        (*l_518) |= (g_554 == &g_555[1]);
                    }
                    for (p_71 = 3; (p_71 >= 0); p_71 -= 1)
                    {
                        l_557 |= (*l_438);
                    }
                }
                for (g_26 = 0; (g_26 <= 50); g_26 = safe_add_func_uint64_t_u_u(g_26, 5))
                {
                    uint32_t *l_562 = &g_174;
                    uint32_t **l_561[5] = {&l_562,&l_562,&l_562,&l_562,&l_562};
                    uint32_t ***l_560 = &l_561[2];
                    int i;
                    (*l_560) = (void*)0;
                }
            }
            for (g_496 = 0; (g_496 <= 0); g_496 += 1)
            {
                return l_461[1][1];
            }
        }
        (*l_434) = (*l_431);
        if (p_71)
            break;
    }
    for (g_171 = 0; (g_171 == 49); g_171 = safe_add_func_int8_t_s_s(g_171, 9))
    {
        union U3 l_565[1][4][9] = {{{{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0}}}};
        int i, j, k;
        return l_565[0][2][1];
    }
    return l_461[1][9];
}







static int32_t func_72(const int32_t ** p_73)
{
    uint16_t l_92 = 65527UL;
    union U1 *l_140 = &g_115[8][5][2];
    union U1 **l_139[4][4] = {{(void*)0,&l_140,&l_140,&l_140},{&l_140,&l_140,&l_140,&l_140},{&l_140,&l_140,&l_140,&l_140},{&l_140,&l_140,&l_140,(void*)0}};
    int32_t l_148 = 0x68622381L;
    int32_t l_189 = 0L;
    int32_t l_191 = 6L;
    int32_t l_194 = 0xA03A189BL;
    int32_t l_250 = 0x839243F1L;
    int32_t l_251 = 0L;
    int32_t l_258 = 6L;
    int32_t l_264 = 0xE92C8F08L;
    int32_t l_265 = 0xC25399B9L;
    int32_t l_267 = (-6L);
    int32_t l_268[2];
    struct S0 l_294 = {0L,-191};
    int16_t l_414 = 1L;
    union U1 * const l_417 = &g_418;
    union U1 * const *l_416 = &l_417;
    int32_t *l_420 = &l_148;
    int i, j;
    for (i = 0; i < 2; i++)
        l_268[i] = 0x346069A6L;
    for (g_26 = 12; (g_26 == 40); ++g_26)
    {
        int16_t l_78 = 0L;
        struct S0 l_79 = {0x037A9E214278D6BFLL,-77};
        struct S0 *l_80 = &l_79;
        int32_t *l_98 = &g_59[4][2][5];
        union U1 *l_134[3];
        union U1 **l_133 = &l_134[2];
        int32_t l_147 = 0x2851A426L;
        uint64_t l_195 = 0UL;
        int8_t *l_209 = &g_5;
        int16_t l_210[6] = {0xDD75L,0xDD75L,0xDD75L,0xDD75L,0xDD75L,0xDD75L};
        int32_t l_249 = 0x9C2DA446L;
        int32_t l_254 = 0L;
        int32_t l_255 = 0x62C8C59DL;
        int32_t l_256 = 0x93DD36EDL;
        int16_t l_259 = 0xE23BL;
        int32_t l_262 = 0x44BA3495L;
        int32_t l_263 = 5L;
        int32_t l_266[3];
        int8_t l_361 = (-1L);
        uint16_t *l_403 = &g_233[3][2][3];
        int i;
        for (i = 0; i < 3; i++)
            l_134[i] = &g_115[2][1][2];
        for (i = 0; i < 3; i++)
            l_266[i] = 1L;
        l_78 |= (*g_61);
        (*l_80) = l_79;
        if (l_79.f0)
        {
            const uint32_t *l_87 = (void*)0;
            union U1 ***l_135 = (void*)0;
            union U1 ***l_136 = (void*)0;
            union U1 **l_138[4] = {&l_134[1],&l_134[1],&l_134[1],&l_134[1]};
            union U1 ***l_137[2][4] = {{&l_138[0],&l_138[0],&l_138[0],&l_138[0]},{&l_138[0],&l_138[0],&l_138[0],&l_138[0]}};
            uint64_t *l_143[2][6][6] = {{{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144}},{{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144}}};
            int32_t l_145 = 0x6C76D569L;
            int32_t *l_146[9][10][2] = {{{&g_104[1],&g_59[0][0][7]},{&g_6[1][0][1],&g_104[0]},{&g_104[0],&g_59[0][0][7]},{&g_6[1][0][1],&g_104[0]},{&g_59[0][1][5],&g_104[1]},{&g_6[0][0][0],&g_6[0][0][1]},{&g_104[1],(void*)0},{&g_104[0],&g_6[2][0][1]},{&g_104[0],&g_104[1]},{&g_104[0],&g_104[1]}},{{&g_59[0][0][7],&g_6[1][0][0]},{&g_6[0][0][0],&g_59[0][0][7]},{&g_6[0][0][1],&g_104[0]},{&g_59[0][1][2],(void*)0},{&g_6[0][0][0],&g_6[2][0][1]},{(void*)0,&g_104[1]},{(void*)0,&g_6[1][0][0]},{&g_6[1][0][1],&g_104[0]},{&g_59[4][2][8],&g_104[0]},{&g_59[4][0][8],&g_6[0][0][1]}},{{&g_6[1][0][1],&g_6[1][0][1]},{&g_104[1],&g_104[0]},{&g_6[0][0][0],&g_59[0][1][5]},{(void*)0,&g_59[0][0][7]},{(void*)0,&g_59[3][2][3]},{&g_6[1][0][1],&g_6[0][0][1]},{&g_59[3][2][5],&g_6[0][0][0]},{&g_104[0],&g_6[1][0][1]},{(void*)0,&g_6[0][0][1]},{&g_104[1],&g_59[0][0][7]}},{{(void*)0,(void*)0},{&g_6[0][0][1],&g_59[0][1][5]},{&g_6[2][0][1],&g_6[2][0][1]},{&g_104[1],&g_104[1]},{&g_6[0][0][0],&g_6[0][0][1]},{&g_104[0],(void*)0},{&g_59[4][2][8],&g_59[4][2][8]},{&g_59[0][0][7],&g_6[1][0][0]},{&g_104[0],&g_59[0][0][7]},{(void*)0,&g_6[1][0][0]}},{{&g_59[1][1][7],(void*)0},{&g_6[0][0][1],&g_104[0]},{&g_6[0][0][1],(void*)0},{&g_59[1][1][7],&g_6[1][0][0]},{(void*)0,&g_59[0][0][7]},{&g_104[0],&g_6[1][0][0]},{&g_59[0][0][7],&g_59[4][2][8]},{&g_59[4][2][8],(void*)0},{&g_104[0],&g_6[0][0][1]},{&g_6[0][0][0],&g_104[1]}},{{&g_104[1],&g_6[2][0][1]},{&g_6[2][0][1],&g_59[0][1][5]},{&g_6[0][0][1],(void*)0},{(void*)0,&g_59[0][0][7]},{&g_104[1],&g_6[0][0][1]},{(void*)0,&g_6[1][0][1]},{&g_104[0],&g_6[0][0][0]},{&g_59[3][2][5],&g_6[0][0][1]},{&g_6[1][0][1],&g_59[3][2][3]},{(void*)0,&g_59[0][0][7]}},{{(void*)0,&g_59[0][1][5]},{&g_6[0][0][0],&g_104[0]},{&g_104[1],&g_6[1][0][1]},{&g_6[1][0][1],&g_6[0][0][1]},{&g_59[4][0][8],&g_104[0]},{&g_59[4][2][8],&g_104[0]},{&g_6[1][0][1],&g_6[1][0][0]},{(void*)0,&g_104[1]},{(void*)0,&g_6[2][0][1]},{&g_6[0][0][0],(void*)0}},{{&g_59[0][1][2],&g_104[0]},{&g_6[0][0][1],&g_59[0][0][7]},{&g_6[0][0][0],&g_6[1][0][0]},{&g_59[0][0][7],&g_104[1]},{&g_104[0],&g_104[1]},{&g_6[1][0][1],&g_59[4][2][8]},{&g_104[0],&g_104[0]},{&g_104[0],&g_104[0]},{&g_6[1][0][1],&g_104[1]},{&g_59[0][0][7],&g_104[0]}},{{&g_6[2][0][1],(void*)0},{(void*)0,(void*)0},{&g_6[2][0][1],&g_59[3][2][3]},{&g_104[1],&g_59[0][1][2]},{&g_59[3][2][5],&g_6[1][0][1]},{&g_104[0],&g_6[1][0][1]},{&g_59[3][2][5],&g_59[0][1][2]},{&g_104[1],&g_59[3][2][3]},{&g_6[2][0][1],(void*)0},{(void*)0,(void*)0}}};
            int i, j, k;
            (*p_73) = func_81((safe_rshift_func_int8_t_s_s(0L, 7)), l_87, func_88(((0x500C2479274D830BLL == ((l_92 >= (0x02F2280F24A82083LL > g_59[0][0][7])) >= (safe_div_func_int64_t_s_s(l_92, ((0x70L > (0UL != 0x85020063L)) , g_5))))) || l_92), g_97[1][3], l_98));
            l_147 = (0x3FA6EFE3CF7B5A89LL <= (l_145 = (l_79.f1 = ((*g_114) , ((0x30719000L && ((-5L) ^ (0xC699ED95L & 8L))) , ((l_133 != (l_139[1][3] = &l_134[2])) != ((safe_mul_func_int8_t_s_s((g_97[1][1] , (*l_98)), (*l_98))) == 4L)))))));
            l_147 |= (g_97[0][2] , (l_148 ^= (*g_61)));
        }
        else
        {
            union U1 l_157 = {0x698BDAB2L};
            uint32_t *l_164 = &l_157.f0;
            const int32_t l_175[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            const int32_t l_179 = 0x9BB9CBACL;
            int32_t l_187 = 1L;
            int32_t l_188 = 4L;
            int32_t l_190 = 3L;
            int32_t l_192 = 0xDF1D7F75L;
            int32_t l_193 = 0x02216667L;
            union U3 *l_212 = &g_118;
            int32_t l_252 = 4L;
            int32_t l_253 = 0x45DB5CEEL;
            int32_t l_260 = 0L;
            int32_t l_261[3][1];
            int8_t **l_339 = &g_4;
            int8_t ***l_338 = &l_339;
            uint16_t l_344 = 0UL;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_261[i][j] = 0x3AE9CA03L;
            }
            for (l_78 = 1; (l_78 >= 0); l_78 -= 1)
            {
                struct S0 l_165 = {3L,-13};
                int64_t *l_170[1];
                uint32_t *l_172 = (void*)0;
                uint32_t *l_173[8][2] = {{&g_174,&g_174},{&g_174,&g_174},{&g_174,&g_174},{&g_174,(void*)0},{&g_174,(void*)0},{&g_174,&g_174},{&g_174,&g_174},{&g_174,&g_174}};
                uint32_t *l_177 = (void*)0;
                uint32_t **l_176[3];
                int32_t *l_181 = &l_147;
                int32_t *l_182 = &l_147;
                int32_t *l_183 = &g_97[1][3].f2;
                int32_t *l_184 = &l_147;
                int32_t *l_185 = &g_104[0];
                int32_t *l_186[5] = {&g_97[1][3].f2,&g_97[1][3].f2,&g_97[1][3].f2,&g_97[1][3].f2,&g_97[1][3].f2};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_170[i] = &l_79.f0;
                for (i = 0; i < 3; i++)
                    l_176[i] = &l_177;
                (*l_181) ^= (+((safe_sub_func_int32_t_s_s(0x6A2B58D0L, ((safe_mod_func_int8_t_s_s((l_165.f1 = (safe_div_func_int8_t_s_s((!(65528UL < (l_157 , (safe_sub_func_uint8_t_u_u(7UL, ((((((((((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((l_164 = l_164) != (g_178 = ((l_165 , ((safe_rshift_func_int8_t_s_s(5L, (safe_add_func_int16_t_s_s((((g_174 = (((g_171 = g_104[l_78]) | l_165.f0) >= 0xC27BL)) , 3L) ^ l_175[5]), l_148)))) , l_157)) , &g_26))), g_26)), 7L)) ^ l_157.f0) & l_175[4]) >= l_179) , g_180) , 0x45E9411AL) ^ 0xF7D754D2L) > (*l_98)) && 0x0FBEL) | g_115[4][3][1].f1)))))), l_165.f0))), g_59[0][0][7])) == g_115[4][3][1].f1))) <= l_175[2]));
                --l_195;
            }
            if ((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u((g_97[1][2] , (g_97[0][0] , ((((*l_98) && (8UL >= g_180.f1)) != (+0x71E2L)) ^ (safe_mul_func_uint8_t_u_u(0x37L, (safe_mul_func_uint16_t_u_u(0x8A07L, (safe_div_func_uint8_t_u_u((&g_5 == l_209), (-4L)))))))))), l_187)), l_210[5])))
            {
                uint64_t *l_211 = &l_195;
                int8_t **l_235 = &g_4;
                int32_t l_239[2];
                int8_t l_257 = (-7L);
                uint64_t l_269 = 0UL;
                int32_t l_278[8][1][10] = {{{0x58822933L,0xD4ACA55BL,0xC72E4ECCL,0x58822933L,0xC7E04F13L,0xB765CC06L,1L,0x03CD6C90L,0x07555441L,0x03CD6C90L}},{{0xD4ACA55BL,(-1L),2L,0x03CD6C90L,2L,(-1L),0xD4ACA55BL,5L,0L,(-1L)}},{{5L,0x8120A1A0L,8L,0x01D7B1E9L,0xD4ACA55BL,4L,0x01D7B1E9L,0xC7E04F13L,(-1L),5L}},{{0x5A85A11AL,0x8120A1A0L,0x07555441L,0x00141ED1L,0x03CD6C90L,0xD37A764BL,0xD4ACA55BL,(-1L),(-10L),0x00141ED1L}},{{0x00141ED1L,(-1L),0x4334580EL,0x8120A1A0L,0x5241B77EL,(-1L),1L,2L,2L,1L}},{{0x5241B77EL,0xD4ACA55BL,(-1L),(-1L),0xD4ACA55BL,0x5241B77EL,(-2L),0x08E9BBEAL,0x01D7B1E9L,0L}},{{0L,(-1L),0xC1CBE06BL,0xC7E04F13L,0x08E9BBEAL,0xFC29A356L,0x00141ED1L,(-1L),0xD2ADCC10L,0x03CD6C90L}},{{0L,(-1L),0L,0x5A85A11AL,8L,0x5241B77EL,0x03CD6C90L,8L,(-2L),(-6L)}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_239[i] = 0xC584207BL;
                (*p_73) = &g_104[0];
                l_190 = (g_112.f2 != (&g_61 == (g_180.f1 , &g_61)));
                if ((g_26 >= ((*l_211) = 0xB6333A4172F5B41CLL)))
                {
                    union U3 **l_213 = &l_212;
                    struct S0 l_214[8][7][4] = {{{{-1L,-150},{0xC1D7FB455FA8C28ELL,-4},{-1L,-150},{-1L,-121}},{{-1L,-150},{-1L,-121},{0L,13},{0xBA9483A5459D30CCLL,67}},{{0x5BAFC07765BBCBE8LL,-116},{-1L,-121},{0x8FBC9ECE6E98DB74LL,190},{-1L,-121}},{{0L,13},{0xC1D7FB455FA8C28ELL,-4},{0x8FBC9ECE6E98DB74LL,190},{-6L,21}},{{0x5BAFC07765BBCBE8LL,-116},{0x1EF775B68F63AD2DLL,-47},{0L,13},{-6L,21}},{{-1L,-150},{0xC1D7FB455FA8C28ELL,-4},{-1L,-150},{-1L,-121}},{{-1L,-150},{-1L,-121},{0L,13},{0xBA9483A5459D30CCLL,67}}},{{{0x5BAFC07765BBCBE8LL,-116},{-1L,-121},{0x8FBC9ECE6E98DB74LL,190},{-1L,-121}},{{0L,13},{0xC1D7FB455FA8C28ELL,-4},{0x8FBC9ECE6E98DB74LL,190},{-6L,21}},{{0x5BAFC07765BBCBE8LL,-116},{0x1EF775B68F63AD2DLL,-47},{0L,13},{-6L,21}},{{-1L,-150},{0xC1D7FB455FA8C28ELL,-4},{-1L,-150},{-1L,-121}},{{-1L,-150},{-1L,-121},{0L,13},{0xBA9483A5459D30CCLL,67}},{{0x5BAFC07765BBCBE8LL,-116},{-1L,-121},{0x8FBC9ECE6E98DB74LL,190},{-1L,-121}},{{0L,13},{0xC1D7FB455FA8C28ELL,-4},{0x8FBC9ECE6E98DB74LL,190},{-6L,21}}},{{{0x5BAFC07765BBCBE8LL,-116},{0x1EF775B68F63AD2DLL,-47},{0L,13},{-6L,21}},{{-1L,-150},{0xC1D7FB455FA8C28ELL,-4},{-1L,-150},{-1L,-121}},{{-1L,-150},{-1L,-121},{0L,13},{0xBA9483A5459D30CCLL,67}},{{0x5BAFC07765BBCBE8LL,-116},{-1L,-121},{0x8FBC9ECE6E98DB74LL,190},{-1L,-121}},{{0L,13},{0xC1D7FB455FA8C28ELL,-4},{0x8FBC9ECE6E98DB74LL,190},{-6L,21}},{{0x5BAFC07765BBCBE8LL,-116},{0x1EF775B68F63AD2DLL,-47},{0L,13},{-6L,21}},{{-1L,-150},{0xC1D7FB455FA8C28ELL,-4},{-1L,-150},{-1L,-121}}},{{{-1L,-150},{-1L,-121},{0L,13},{0xBA9483A5459D30CCLL,67}},{{0x5BAFC07765BBCBE8LL,-116},{-1L,-121},{0x8FBC9ECE6E98DB74LL,190},{-1L,-121}},{{0L,13},{0xC1D7FB455FA8C28ELL,-4},{0x8FBC9ECE6E98DB74LL,190},{-6L,21}},{{0x5BAFC07765BBCBE8LL,-116},{0x1EF775B68F63AD2DLL,-47},{0L,13},{-6L,21}},{{-1L,-150},{0xC1D7FB455FA8C28ELL,-4},{-1L,-150},{-1L,-121}},{{-1L,-150},{-1L,-121},{0L,13},{0xBA9483A5459D30CCLL,67}},{{0x5BAFC07765BBCBE8LL,-116},{-1L,-121},{0x8FBC9ECE6E98DB74LL,190},{0xBA9483A5459D30CCLL,67}}},{{{-1L,-150},{0x1EF775B68F63AD2DLL,-47},{0x5560447B2E25A390LL,-124},{0xC1D7FB455FA8C28ELL,-4}},{{0L,13},{-1L,-121},{-1L,-150},{0xC1D7FB455FA8C28ELL,-4}},{{0x8FBC9ECE6E98DB74LL,190},{0x1EF775B68F63AD2DLL,-47},{0x8FBC9ECE6E98DB74LL,190},{0xBA9483A5459D30CCLL,67}},{{0x8FBC9ECE6E98DB74LL,190},{0xBA9483A5459D30CCLL,67},{-1L,-150},{-6L,21}},{{0L,13},{0xBA9483A5459D30CCLL,67},{0x5560447B2E25A390LL,-124},{0xBA9483A5459D30CCLL,67}},{{-1L,-150},{0x1EF775B68F63AD2DLL,-47},{0x5560447B2E25A390LL,-124},{0xC1D7FB455FA8C28ELL,-4}},{{0L,13},{-1L,-121},{-1L,-150},{0xC1D7FB455FA8C28ELL,-4}}},{{{0x8FBC9ECE6E98DB74LL,190},{0x1EF775B68F63AD2DLL,-47},{0x8FBC9ECE6E98DB74LL,190},{0xBA9483A5459D30CCLL,67}},{{0x8FBC9ECE6E98DB74LL,190},{0xBA9483A5459D30CCLL,67},{-1L,-150},{-6L,21}},{{0L,13},{0xBA9483A5459D30CCLL,67},{0x5560447B2E25A390LL,-124},{0xBA9483A5459D30CCLL,67}},{{-1L,-150},{0x1EF775B68F63AD2DLL,-47},{0x5560447B2E25A390LL,-124},{0xC1D7FB455FA8C28ELL,-4}},{{0L,13},{-1L,-121},{-1L,-150},{0xC1D7FB455FA8C28ELL,-4}},{{0x8FBC9ECE6E98DB74LL,190},{0x1EF775B68F63AD2DLL,-47},{0x8FBC9ECE6E98DB74LL,190},{0xBA9483A5459D30CCLL,67}},{{0x8FBC9ECE6E98DB74LL,190},{0xBA9483A5459D30CCLL,67},{-1L,-150},{-6L,21}}},{{{0L,13},{0xBA9483A5459D30CCLL,67},{0x5560447B2E25A390LL,-124},{0xBA9483A5459D30CCLL,67}},{{-1L,-150},{0x1EF775B68F63AD2DLL,-47},{0x5560447B2E25A390LL,-124},{0xC1D7FB455FA8C28ELL,-4}},{{0L,13},{-1L,-121},{-1L,-150},{0xC1D7FB455FA8C28ELL,-4}},{{0x8FBC9ECE6E98DB74LL,190},{0x1EF775B68F63AD2DLL,-47},{0x8FBC9ECE6E98DB74LL,190},{0xBA9483A5459D30CCLL,67}},{{0x8FBC9ECE6E98DB74LL,190},{0xBA9483A5459D30CCLL,67},{-1L,-150},{-6L,21}},{{0L,13},{0xBA9483A5459D30CCLL,67},{0x5560447B2E25A390LL,-124},{0xBA9483A5459D30CCLL,67}},{{-1L,-150},{0x1EF775B68F63AD2DLL,-47},{0x5560447B2E25A390LL,-124},{0xC1D7FB455FA8C28ELL,-4}}},{{{0L,13},{-1L,-121},{-1L,-150},{0xC1D7FB455FA8C28ELL,-4}},{{0x8FBC9ECE6E98DB74LL,190},{0x1EF775B68F63AD2DLL,-47},{0x8FBC9ECE6E98DB74LL,190},{0xBA9483A5459D30CCLL,67}},{{0x8FBC9ECE6E98DB74LL,190},{0xBA9483A5459D30CCLL,67},{-1L,-150},{-6L,21}},{{0L,13},{0xBA9483A5459D30CCLL,67},{0x5560447B2E25A390LL,-124},{0xBA9483A5459D30CCLL,67}},{{-1L,-150},{0x1EF775B68F63AD2DLL,-47},{0x5560447B2E25A390LL,-124},{0xC1D7FB455FA8C28ELL,-4}},{{0L,13},{-1L,-121},{-1L,-150},{0xC1D7FB455FA8C28ELL,-4}},{{0x8FBC9ECE6E98DB74LL,190},{0x1EF775B68F63AD2DLL,-47},{0x8FBC9ECE6E98DB74LL,190},{0xBA9483A5459D30CCLL,67}}}};
                    int i, j, k;
                    (*l_213) = l_212;
                    for (l_148 = 3; (l_148 >= 0); l_148 -= 1)
                    {
                        (*l_80) = l_214[4][4][1];
                    }
                    for (l_157.f2 = 3; (l_157.f2 >= 0); l_157.f2 -= 1)
                    {
                        int8_t *l_231 = (void*)0;
                        int8_t *l_232[1][10][7] = {{{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,(void*)0,&g_5,(void*)0,&g_5,(void*)0,&g_5},{&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5,&g_5},{&g_5,(void*)0,&g_5,&g_5,(void*)0,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,(void*)0,(void*)0,&g_5},{&g_5,&g_5,&g_5,(void*)0,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,(void*)0,&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5},{&g_5,(void*)0,&g_5,&g_5,&g_5,&g_5,(void*)0}}};
                        uint16_t *l_234 = &l_92;
                        int8_t ***l_236 = &l_235;
                        const uint32_t *l_237 = &g_112.f0;
                        int64_t *l_238[7][7][5] = {{{&l_79.f0,&l_79.f0,&g_180.f0,&g_180.f0,&l_79.f0},{&l_214[4][4][1].f0,&l_214[4][4][1].f0,&l_79.f0,&l_214[4][4][1].f0,&g_180.f0},{&g_180.f0,&g_180.f0,&l_79.f0,&l_79.f0,&l_79.f0},{&l_79.f0,&l_214[4][4][1].f0,&l_79.f0,&g_180.f0,&l_214[4][4][1].f0},{&l_79.f0,&g_180.f0,&l_214[4][4][1].f0,&l_79.f0,&l_214[4][4][1].f0},{&l_214[4][4][1].f0,&l_214[4][4][1].f0,(void*)0,&l_214[4][4][1].f0,&g_180.f0},{(void*)0,&g_180.f0,&l_214[4][4][1].f0,&l_214[4][4][1].f0,&g_180.f0}},{{&g_180.f0,&l_79.f0,&l_79.f0,&g_180.f0,&g_180.f0},{&g_180.f0,&g_180.f0,&l_79.f0,&g_180.f0,&g_180.f0},{&l_79.f0,&l_214[4][4][1].f0,&l_79.f0,&g_180.f0,&l_214[4][4][1].f0},{&g_180.f0,&g_180.f0,&g_180.f0,&g_180.f0,&l_214[4][4][1].f0},{&g_180.f0,&l_214[4][4][1].f0,(void*)0,&l_214[4][4][1].f0,&l_214[4][4][1].f0},{(void*)0,&g_180.f0,(void*)0,&l_214[4][4][1].f0,&g_180.f0},{&l_214[4][4][1].f0,&l_79.f0,&g_180.f0,&l_214[4][4][1].f0,&g_180.f0}},{{&l_79.f0,&l_79.f0,&l_79.f0,&g_180.f0,&g_180.f0},{&l_79.f0,&g_180.f0,&g_180.f0,&g_180.f0,&g_180.f0},{&g_180.f0,&g_180.f0,(void*)0,&g_180.f0,&l_214[4][4][1].f0},{&l_214[4][4][1].f0,&g_180.f0,(void*)0,&g_180.f0,&l_214[4][4][1].f0},{(void*)0,&l_79.f0,&g_180.f0,&l_214[4][4][1].f0,&l_79.f0},{&l_214[4][4][1].f0,&l_79.f0,&l_79.f0,&l_214[4][4][1].f0,&g_180.f0},{&g_180.f0,&g_180.f0,&l_79.f0,&l_79.f0,&l_79.f0}},{{&l_79.f0,&l_214[4][4][1].f0,&l_79.f0,&g_180.f0,&l_214[4][4][1].f0},{&l_79.f0,&g_180.f0,&l_214[4][4][1].f0,&l_79.f0,&l_214[4][4][1].f0},{&l_214[4][4][1].f0,&l_214[4][4][1].f0,(void*)0,&l_214[4][4][1].f0,&g_180.f0},{(void*)0,&g_180.f0,&l_214[4][4][1].f0,&l_214[4][4][1].f0,&g_180.f0},{&g_180.f0,&l_79.f0,&l_79.f0,&g_180.f0,&g_180.f0},{&g_180.f0,&g_180.f0,&l_79.f0,&g_180.f0,&g_180.f0},{&l_79.f0,&l_214[4][4][1].f0,&l_79.f0,&g_180.f0,&l_214[4][4][1].f0}},{{&g_180.f0,&g_180.f0,&g_180.f0,&g_180.f0,&l_214[4][4][1].f0},{&g_180.f0,&l_214[4][4][1].f0,(void*)0,&l_214[4][4][1].f0,&l_214[4][4][1].f0},{(void*)0,&g_180.f0,(void*)0,&l_214[4][4][1].f0,&g_180.f0},{&l_214[4][4][1].f0,&l_79.f0,&g_180.f0,&l_214[4][4][1].f0,&g_180.f0},{&l_79.f0,&l_79.f0,&l_79.f0,&g_180.f0,&g_180.f0},{&l_79.f0,&g_180.f0,&g_180.f0,&g_180.f0,&g_180.f0},{&g_180.f0,&g_180.f0,(void*)0,&g_180.f0,&l_214[4][4][1].f0}},{{&l_214[4][4][1].f0,&g_180.f0,(void*)0,&g_180.f0,&l_214[4][4][1].f0},{(void*)0,&l_79.f0,&g_180.f0,&l_214[4][4][1].f0,&l_79.f0},{&l_214[4][4][1].f0,&l_79.f0,&l_79.f0,&l_214[4][4][1].f0,&g_180.f0},{&g_180.f0,&g_180.f0,&l_79.f0,&l_79.f0,&l_79.f0},{&l_79.f0,&l_214[4][4][1].f0,&l_79.f0,&l_214[4][4][1].f0,&l_79.f0},{(void*)0,&l_79.f0,&g_180.f0,(void*)0,&g_180.f0},{&l_79.f0,&l_79.f0,&l_214[4][4][1].f0,&l_79.f0,&g_180.f0}},{{&l_214[4][4][1].f0,&l_214[4][4][1].f0,&g_180.f0,&g_180.f0,&l_214[4][4][1].f0},{&g_180.f0,(void*)0,&g_180.f0,&g_180.f0,&l_214[4][4][1].f0},{&g_180.f0,&l_214[4][4][1].f0,&l_79.f0,&l_214[4][4][1].f0,&g_180.f0},{&g_180.f0,&l_79.f0,(void*)0,&l_214[4][4][1].f0,&l_79.f0},{&g_180.f0,&l_79.f0,&l_79.f0,&g_180.f0,&g_180.f0},{&g_180.f0,&l_79.f0,&l_214[4][4][1].f0,&l_79.f0,&l_79.f0},{&l_214[4][4][1].f0,&g_180.f0,&l_214[4][4][1].f0,&g_180.f0,&g_180.f0}}};
                        int i, j, k;
                        l_79.f1 |= (safe_add_func_uint16_t_u_u((0x0EL & g_112.f1), (~((*l_234) = (safe_sub_func_int32_t_s_s((*g_61), (safe_rshift_func_int16_t_s_u(((*g_4) | (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(l_214[4][4][1].f0, (-1L))), (g_233[3][2][0] = (((!(((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(1UL, (-1L))) & 0x3DL), l_214[4][4][1].f1)) != l_179) < 0x2A84L)) < 0x01L) , 0xC7L))))), 4))))))));
                        (*l_236) = l_235;
                        (*p_73) = func_81(l_214[4][4][1].f0, l_237, ((l_148 = (-5L)) >= ((l_239[0] &= (g_180.f0 &= (-1L))) != ((safe_mul_func_uint16_t_u_u((++(*l_234)), ((l_211 == l_211) == (safe_div_func_uint8_t_u_u(g_115[4][3][1].f2, (g_26 && g_112.f2)))))) == g_59[0][0][7]))));
                        g_180 = g_180;
                    }
                    return l_157.f2;
                }
                else
                {
                    int32_t *l_246 = (void*)0;
                    int32_t *l_247 = &l_194;
                    int32_t *l_248[7][9] = {{&l_239[0],&g_104[0],&g_104[0],&l_239[0],&l_190,&g_104[0],&l_188,&l_190,&l_190},{&g_59[0][0][6],(void*)0,&l_187,&l_239[0],&l_187,(void*)0,&g_59[0][0][6],(void*)0,&l_187},{&l_239[0],&l_190,&g_104[0],&l_188,&l_190,&l_190,&l_188,&g_104[0],&l_190},{&g_104[0],(void*)0,&g_59[3][2][1],&l_239[0],&g_59[3][2][1],(void*)0,&g_104[0],(void*)0,&g_59[3][2][1]},{&l_239[0],&g_104[0],&g_104[0],&l_239[0],&l_190,&g_104[0],&l_188,&l_190,&l_190},{&g_59[0][0][6],(void*)0,&l_187,&l_239[0],&l_187,(void*)0,&g_59[0][0][6],(void*)0,&l_187},{&l_239[0],&l_190,&g_104[0],&l_188,&l_190,&l_190,&l_188,&g_104[0],&l_190}};
                    uint32_t *l_277 = &g_174;
                    int i, j;
                    ++l_269;
                    l_278[6][0][6] &= ((l_187 = (((*l_277) &= (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((*g_4), 0)), (l_239[1] || ((*g_114) , (g_233[3][2][0] != (~g_144))))))) , (*g_61))) , ((*g_114) , 0x11995FF3L));
                    for (l_192 = 0; (l_192 <= (-18)); l_192 = safe_sub_func_uint16_t_u_u(l_192, 1))
                    {
                        struct S0 l_281 = {0x3F52E7747F3B22E1LL,156};
                        (*l_80) = l_281;
                    }
                }
            }
            else
            {
                uint8_t l_282 = 0UL;
                int8_t *l_283 = &g_284;
                int32_t l_285 = 0x567DA4C6L;
                uint64_t l_320[9] = {0x3599655FAAF14233LL,18446744073709551610UL,0x3599655FAAF14233LL,18446744073709551610UL,0x3599655FAAF14233LL,18446744073709551610UL,0x3599655FAAF14233LL,18446744073709551610UL,0x3599655FAAF14233LL};
                int32_t l_343[9] = {0x394B41FAL,0xCB0D71E8L,0xCB0D71E8L,0x394B41FAL,0xCB0D71E8L,0xCB0D71E8L,0x394B41FAL,0xCB0D71E8L,0xCB0D71E8L};
                const union U1 l_347 = {0x739DBB08L};
                int16_t *l_364 = &g_115[4][3][1].f2;
                union U3 **l_391 = &l_212;
                union U1 **l_419[7] = {&l_134[1],&l_134[1],&l_134[1],&l_134[1],&l_134[1],&l_134[1],&l_134[1]};
                int i;
                l_285 = (l_282 ^ ((*l_283) = 0x26L));
                for (g_180.f0 = 3; (g_180.f0 <= 29); ++g_180.f0)
                {
                    uint64_t *l_306[9][5] = {{&l_195,&g_144,&l_195,&g_144,&g_144},{&l_195,&l_195,&g_144,&l_195,&g_144},{&l_195,&l_195,&g_144,&g_144,&l_195},{&l_195,&l_195,&g_144,&l_195,&l_195},{&l_195,&g_144,&g_144,&g_144,&l_195},{&g_144,&l_195,&l_195,&l_195,&l_195},{&g_144,&l_195,&l_195,&g_144,&g_144},{&l_195,&l_195,&l_195,&l_195,&l_195},{&l_195,&g_144,&l_195,&l_195,&l_195}};
                    struct S0 l_315 = {4L,-145};
                    int64_t *l_321 = &l_79.f0;
                    uint16_t *l_322 = &l_92;
                    int32_t **l_370 = &l_98;
                    uint8_t *l_388 = &l_282;
                    int32_t l_411 = 0xEE2DFE11L;
                    int i, j;
                }
            }
        }
    }
    return (*g_61);
}







static const int32_t * func_81(uint16_t p_82, const uint32_t * p_83, int8_t p_84)
{
    int32_t **l_132 = &g_61;
    (*l_132) = &g_59[0][0][7];
    return &g_59[0][0][7];
}







static int8_t func_88(uint16_t p_89, union U2 p_90, int32_t * p_91)
{
    int32_t *l_99 = (void*)0;
    int32_t *l_100 = &g_97[1][3].f2;
    int32_t *l_101 = &g_97[1][3].f2;
    int32_t *l_102 = &g_97[1][3].f2;
    int32_t *l_103[5] = {&g_59[0][0][7],&g_59[0][0][7],&g_59[0][0][7],&g_59[0][0][7],&g_59[0][0][7]};
    uint32_t l_105 = 0x9A98420AL;
    uint16_t l_110 = 7UL;
    const union U1 *l_111 = &g_112;
    const union U1 **l_113 = &l_111;
    int i;
    l_105++;
    g_104[1] &= ((safe_add_func_uint16_t_u_u(l_110, 0x4380L)) && (*p_91));
    g_114 = ((*l_113) = l_111);
    for (l_105 = 0; (l_105 <= 4); l_105 += 1)
    {
        int32_t l_129 = 0x213BFE59L;
        int32_t *l_130[10][9] = {{&g_59[0][2][4],&g_104[0],(void*)0,(void*)0,&g_104[0],&g_59[0][2][4],&g_59[0][0][6],&g_104[0],&g_104[0]},{&g_104[0],&g_104[0],&g_104[0],(void*)0,&g_104[0],&g_104[0],&g_104[0],&g_104[0],(void*)0},{(void*)0,&g_59[0][0][6],(void*)0,&g_104[0],&g_104[0],(void*)0,&g_59[0][0][6],(void*)0,&g_104[0]},{&g_59[2][2][1],&g_104[0],&g_104[0],&g_59[2][2][1],&g_104[1],&g_59[2][2][1],&g_104[0],&g_104[0],&g_59[2][2][1]},{&g_59[0][2][4],&g_104[0],&g_104[0],&g_104[0],&g_59[0][2][4],&g_59[0][2][4],&g_104[0],&g_104[0],&g_104[0]},{&g_104[0],&g_104[1],(void*)0,(void*)0,&g_104[1],&g_104[0],&g_104[1],(void*)0,(void*)0},{&g_59[0][2][4],&g_59[0][2][4],&g_104[0],&g_104[0],&g_104[0],&g_59[0][2][4],&g_59[0][2][4],&g_104[0],&g_104[0]},{&g_59[2][2][1],&g_104[1],&g_59[2][2][1],&g_104[0],&g_104[0],&g_59[2][2][1],&g_104[1],&g_59[2][2][1],&g_104[0]},{(void*)0,&g_104[0],&g_104[0],(void*)0,&g_59[0][0][6],(void*)0,&g_104[0],&g_104[0],(void*)0},{&g_104[0],&g_104[0],(void*)0,&g_104[0],&g_104[0],&g_104[0],&g_104[0],(void*)0,&g_104[0]}};
        int i, j;
        for (p_89 = 0; (p_89 <= 4); p_89 += 1)
        {
            union U3 *l_117 = &g_118;
            union U3 **l_116 = &l_117;
            const union U1 *l_119 = (void*)0;
            (*l_116) = (void*)0;
        }
    }
    return (*g_4);
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
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_59[i][j][k], "g_59[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_104[i], "g_104[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_112.f0, "g_112.f0", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_112.f2, "g_112.f2", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_115[i][j][k].f0, "g_115[i][j][k].f0", print_hash_value);
                transparent_crc(g_115[i][j][k].f1, "g_115[i][j][k].f1", print_hash_value);
                transparent_crc(g_115[i][j][k].f2, "g_115[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_180.f0, "g_180.f0", print_hash_value);
    transparent_crc(g_180.f1, "g_180.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_233[i][j][k], "g_233[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_348.f0, "g_348.f0", print_hash_value);
    transparent_crc(g_348.f1, "g_348.f1", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_418.f0, "g_418.f0", print_hash_value);
    transparent_crc(g_418.f1, "g_418.f1", print_hash_value);
    transparent_crc(g_418.f2, "g_418.f2", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_529.f0, "g_529.f0", print_hash_value);
    transparent_crc(g_529.f1, "g_529.f1", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_833, "g_833", print_hash_value);
    transparent_crc(g_901, "g_901", print_hash_value);
    transparent_crc(g_923, "g_923", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_939[i], "g_939[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1018[i][j][k], "g_1018[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1095, "g_1095", print_hash_value);
    transparent_crc(g_1376, "g_1376", print_hash_value);
    transparent_crc(g_1684, "g_1684", print_hash_value);
    transparent_crc(g_1785.f0, "g_1785.f0", print_hash_value);
    transparent_crc(g_1785.f1, "g_1785.f1", print_hash_value);
    transparent_crc(g_1785.f2, "g_1785.f2", print_hash_value);
    transparent_crc(g_1788, "g_1788", print_hash_value);
    transparent_crc(g_2012, "g_2012", print_hash_value);
    transparent_crc(g_2100.f0, "g_2100.f0", print_hash_value);
    transparent_crc(g_2100.f1, "g_2100.f1", print_hash_value);
    transparent_crc(g_2100.f2, "g_2100.f2", print_hash_value);
    transparent_crc(g_2200, "g_2200", print_hash_value);
    transparent_crc(g_2281, "g_2281", print_hash_value);
    transparent_crc(g_2284, "g_2284", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_2331[i], "g_2331[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
