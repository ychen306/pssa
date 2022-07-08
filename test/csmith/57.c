// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 5121CEAA
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
   const uint8_t f0;
   int8_t f1;
   int32_t f2;
   int64_t f3;
   uint8_t f4;
   int32_t f5;
   uint32_t f6;
   uint32_t f7;
   uint16_t f8;
   int64_t f9;
};
#pragma pack(pop)


static int32_t g_2 = 0x4E6D4F28L;
static int32_t g_5 = 0x07E4FC22L;
static uint8_t g_32 = 249UL;
static int32_t g_37 = 0xD0D7276CL;
static int32_t g_41 = (-1L);
static uint16_t g_83 = 0x22F5L;
static int8_t g_100 = (-3L);
static uint32_t g_124 = 18446744073709551615UL;
static uint32_t g_137 = 0x0C72D929L;
static const uint8_t *g_150 = &g_32;
static const uint8_t **g_149 = &g_150;
static const uint8_t ***g_148 = &g_149;
static int16_t g_154 = (-1L);
static int32_t g_158[7][1][10] = {{{3L,(-4L),(-1L),(-1L),(-4L),3L,0xEEC06040L,(-1L),(-1L),0xEEC06040L}},{{9L,(-4L),7L,(-1L),(-4L),0xA2378118L,(-4L),(-1L),7L,(-4L)}},{{9L,0xEEC06040L,(-1L),(-1L),0xEEC06040L,3L,(-4L),(-1L),(-1L),(-4L)}},{{3L,(-4L),(-1L),(-1L),(-4L),3L,0xEEC06040L,(-1L),(-1L),0xEEC06040L}},{{9L,(-4L),7L,(-1L),(-4L),0xA2378118L,(-1L),0xEEC06040L,(-4L),(-1L)}},{{0L,(-1L),(-6L),0xEEC06040L,(-1L),9L,(-1L),(-6L),(-6L),(-1L)}},{{9L,(-1L),(-6L),(-6L),(-1L),9L,(-1L),0xEEC06040L,(-6L),(-1L)}}};
static int32_t *g_157 = &g_158[2][0][6];
static uint32_t g_175 = 0x5C8EA54EL;
static uint64_t g_176 = 0x0CD010C7F52387CALL;
static uint8_t g_179[7] = {0x69L,0x69L,249UL,0x69L,0x69L,249UL,0x69L};
static const int32_t g_209 = 0xFC1CA034L;
static uint16_t g_244 = 65529UL;
static struct S0 g_371 = {0x04L,0x0DL,0xE76D8878L,0x60A7155FC610984CLL,246UL,0x949E221BL,1UL,0x738CFE96L,65527UL,8L};
static int64_t *g_377 = &g_371.f9;
static uint32_t g_391 = 0xD8D69B9AL;
static int16_t *g_395 = &g_154;
static int16_t **g_394 = &g_395;
static int64_t **g_448 = &g_377;
static uint8_t g_458[9] = {4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL};
static uint8_t *g_474 = &g_458[2];
static uint8_t **g_473 = &g_474;
static uint64_t g_505[4] = {0x16CF3960AAA81D82LL,0x16CF3960AAA81D82LL,0x16CF3960AAA81D82LL,0x16CF3960AAA81D82LL};
static struct S0 g_528 = {7UL,0L,9L,0x7C5556554FD4947CLL,255UL,0xF9424950L,1UL,1UL,0x0E80L,-5L};
static struct S0 *g_527 = &g_528;
static struct S0 g_530 = {1UL,0x3EL,9L,-9L,0xFEL,-6L,0x22F0C061L,0UL,0UL,0xD55EDA3CF38AF548LL};
static uint16_t g_575 = 0x283AL;
static struct S0 **g_606 = &g_527;
static struct S0 **g_609 = &g_527;
static const int32_t *g_636 = &g_2;
static const int32_t **g_635 = &g_636;
static const int32_t *** const g_634 = &g_635;
static uint8_t *g_648 = &g_458[7];
static uint64_t *g_725 = &g_176;
static uint64_t **g_724 = &g_725;
static int8_t * const g_797 = &g_100;
static int8_t * const * const g_796 = &g_797;
static int8_t *g_828 = (void*)0;
static int8_t **g_827 = &g_828;
static int8_t ***g_826 = &g_827;
static int8_t *** const *g_825[9] = {&g_826,&g_826,&g_826,&g_826,&g_826,&g_826,&g_826,&g_826,&g_826};
static int64_t ***g_1084[3] = {(void*)0,(void*)0,(void*)0};
static int64_t ****g_1083 = &g_1084[0];
static uint32_t g_1106 = 0xA947501DL;
static const uint64_t *g_1263 = &g_505[2];
static const uint64_t **g_1262 = &g_1263;
static const uint64_t ***g_1261 = &g_1262;
static const uint64_t ****g_1260 = &g_1261;
static struct S0 g_1307 = {0x6BL,0L,0x33818CEDL,7L,255UL,-9L,0xBB8E884AL,0xE1DB4F28L,0x2239L,0x324403716922905DLL};
static struct S0 *g_1306 = &g_1307;
static uint8_t ***g_1441 = &g_473;
static struct S0 g_1470[5] = {{8UL,5L,0x2B6D5200L,2L,251UL,0L,0x4004102CL,1UL,0UL,-9L},{8UL,5L,0x2B6D5200L,2L,251UL,0L,0x4004102CL,1UL,0UL,-9L},{8UL,5L,0x2B6D5200L,2L,251UL,0L,0x4004102CL,1UL,0UL,-9L},{8UL,5L,0x2B6D5200L,2L,251UL,0L,0x4004102CL,1UL,0UL,-9L},{8UL,5L,0x2B6D5200L,2L,251UL,0L,0x4004102CL,1UL,0UL,-9L}};
static struct S0 *g_1469[2] = {&g_1470[4],&g_1470[4]};



static const uint16_t func_1(void);
static int16_t func_14(uint8_t p_15, const int32_t p_16, uint16_t p_17, int8_t p_18, uint32_t p_19);
static int8_t func_22(const uint8_t p_23, uint32_t p_24, int32_t p_25);
static int32_t * func_28(uint64_t p_29);
static uint8_t func_44(const uint32_t p_45, uint8_t * p_46, int32_t * p_47);
static uint8_t * func_48(uint32_t p_49, int16_t p_50);
static int64_t func_51(uint32_t p_52, uint32_t p_53);
static uint32_t func_55(struct S0 p_56, int64_t p_57, uint8_t * const p_58, int8_t p_59);
static int32_t * func_64(const uint32_t p_65, uint8_t * p_66, int32_t * p_67, uint8_t * p_68);
static int32_t * func_70(struct S0 p_71, int32_t * p_72, uint16_t p_73, int16_t p_74, uint8_t * p_75);
# 114 "<stdin>"
static const uint16_t func_1(void)
{
    int8_t l_27 = 1L;
    int32_t l_1351[8][3] = {{(-8L),(-1L),(-8L)},{8L,8L,8L},{(-8L),(-1L),(-8L)},{8L,8L,8L},{(-8L),(-1L),(-8L)},{8L,8L,8L},{(-8L),(-1L),(-8L)},{8L,8L,8L}};
    int32_t l_1357 = 1L;
    int32_t l_1358[1];
    int8_t **l_1379 = &g_828;
    int8_t **l_1392[9][5] = {{&g_828,&g_828,&g_828,(void*)0,(void*)0},{&g_828,&g_828,&g_828,(void*)0,(void*)0},{&g_828,&g_828,&g_828,(void*)0,(void*)0},{&g_828,&g_828,&g_828,(void*)0,(void*)0},{&g_828,&g_828,&g_828,(void*)0,(void*)0},{&g_828,&g_828,&g_828,(void*)0,(void*)0},{&g_828,&g_828,&g_828,(void*)0,(void*)0},{&g_828,&g_828,&g_828,(void*)0,(void*)0},{&g_828,&g_828,&g_828,(void*)0,(void*)0}};
    uint64_t l_1427[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_1358[i] = 0x09CBE5AFL;
    for (i = 0; i < 1; i++)
        l_1427[i] = 0UL;
    for (g_2 = (-7); (g_2 != 2); g_2++)
    {
        const uint16_t l_26[2][2] = {{8UL,8UL},{8UL,8UL}};
        uint32_t l_1345 = 4UL;
        int32_t l_1361 = 0x5D1F48B8L;
        uint8_t ***l_1444 = &g_473;
        int16_t l_1475 = 5L;
        uint8_t ***l_1506 = (void*)0;
        uint64_t l_1521 = 18446744073709551615UL;
        int i, j;
        for (g_5 = (-1); (g_5 < 17); g_5++)
        {
            uint32_t l_772 = 8UL;
            uint8_t *l_1321[6] = {&g_458[8],&g_32,&g_32,&g_458[8],&g_32,&g_32};
            int32_t l_1322 = 0x33D1663EL;
            int i;
            (*g_157) = (~(safe_div_func_uint32_t_u_u(((l_1322 = (~(safe_rshift_func_int8_t_s_u(g_5, (g_2 | (((g_2 | func_14((safe_lshift_func_int16_t_s_s((((func_22(l_26[0][1], g_2, l_27) , 0xDBD27295L) ^ ((l_772 , 0x4A45L) | g_530.f1)) != 0xB9L), 13)), l_772, g_371.f4, g_371.f0, l_26[0][1])) , 0x96CB1497L) >= 0xF2F374DCL)))))) != l_772), g_371.f0)));
            if ((*g_157))
                break;
            if (l_26[0][0])
                continue;
        }
        for (g_371.f4 = (-22); (g_371.f4 > 9); g_371.f4++)
        {
            int16_t ***l_1333 = &g_394;
            int32_t l_1344 = 0x6F965BF0L;
            int32_t l_1359 = 0x5D70FC16L;
            const uint8_t *l_1367 = &g_179[5];
            const uint64_t ** const l_1402 = (void*)0;
            int64_t *l_1418 = &g_371.f9;
            const int8_t l_1471 = (-7L);
            int16_t l_1472 = 8L;
            const uint8_t ***l_1494 = &g_149;
        }
        if (l_1357)
            break;
    }
    return l_1427[0];
}







static int16_t func_14(uint8_t p_15, const int32_t p_16, uint16_t p_17, int8_t p_18, uint32_t p_19)
{
    uint8_t **l_775[3];
    uint32_t *l_776 = &g_175;
    int32_t l_790 = 0L;
    int8_t ***l_791 = (void*)0;
    int8_t **l_793 = (void*)0;
    int8_t ***l_792[2];
    int8_t *l_795 = &g_100;
    int8_t **l_794[4][10] = {{&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795},{&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795},{&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795},{&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795,&l_795}};
    int32_t l_798[10] = {0x7005C5C1L,7L,0x7005C5C1L,0x7005C5C1L,7L,0x7005C5C1L,0x7005C5C1L,7L,0x7005C5C1L,0x96EC488CL};
    int64_t *l_813 = &g_528.f9;
    struct S0 l_814[9][4][7] = {{{{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{254UL,0x7CL,0xEF360CC7L,-2L,0xCCL,1L,0x95C4F544L,0xC5D5B3A3L,65535UL,0x7BEC5C454010145ELL},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L}},{{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL}},{{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L}},{{255UL,0xF8L,0x67872DABL,0xA7842E43F03FA736LL,0x73L,-1L,0UL,18446744073709551613UL,0x6336L,-5L},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0x0EL,-1L,0xB5688B37L,0L,0x20L,0xE29EB14DL,0x7A7CD978L,18446744073709551613UL,0xEA81L,0x4BE1DBD29A312987LL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{255UL,0xF8L,0x67872DABL,0xA7842E43F03FA736LL,0x73L,-1L,0UL,18446744073709551613UL,0x6336L,-5L},{0x89L,1L,0xC193594BL,-1L,0x83L,-3L,18446744073709551615UL,0x48EDE4CFL,0xD634L,-3L},{255UL,0xF8L,0x67872DABL,0xA7842E43F03FA736LL,0x73L,-1L,0UL,18446744073709551613UL,0x6336L,-5L}}},{{{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L}},{{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL}},{{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L}},{{255UL,0xF8L,0x67872DABL,0xA7842E43F03FA736LL,0x73L,-1L,0UL,18446744073709551613UL,0x6336L,-5L},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{255UL,0xF8L,0x67872DABL,0xA7842E43F03FA736LL,0x73L,-1L,0UL,18446744073709551613UL,0x6336L,-5L}}},{{{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L}},{{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{255UL,0x6FL,1L,0x894412F1F9A801BFLL,0xB2L,0L,0xA0000318L,0UL,0UL,-1L},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL},{0x89L,1L,0xC193594BL,-1L,0x83L,-3L,18446744073709551615UL,0x48EDE4CFL,0xD634L,-3L},{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL}},{{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L}},{{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{255UL,0xF8L,0x67872DABL,0xA7842E43F03FA736LL,0x73L,-1L,0UL,18446744073709551613UL,0x6336L,-5L},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL}}},{{{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{254UL,0x7CL,0xEF360CC7L,-2L,0xCCL,1L,0x95C4F544L,0xC5D5B3A3L,65535UL,0x7BEC5C454010145ELL},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L}},{{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL}},{{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L}},{{255UL,0xF8L,0x67872DABL,0xA7842E43F03FA736LL,0x73L,-1L,0UL,18446744073709551613UL,0x6336L,-5L},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0x0EL,-1L,0xB5688B37L,0L,0x20L,0xE29EB14DL,0x7A7CD978L,18446744073709551613UL,0xEA81L,0x4BE1DBD29A312987LL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{255UL,0xF8L,0x67872DABL,0xA7842E43F03FA736LL,0x73L,-1L,0UL,18446744073709551613UL,0x6336L,-5L},{0x89L,1L,0xC193594BL,-1L,0x83L,-3L,18446744073709551615UL,0x48EDE4CFL,0xD634L,-3L},{255UL,0xF8L,0x67872DABL,0xA7842E43F03FA736LL,0x73L,-1L,0UL,18446744073709551613UL,0x6336L,-5L}}},{{{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L}},{{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL}},{{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L}},{{255UL,0xF8L,0x67872DABL,0xA7842E43F03FA736LL,0x73L,-1L,0UL,18446744073709551613UL,0x6336L,-5L},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{255UL,0xF8L,0x67872DABL,0xA7842E43F03FA736LL,0x73L,-1L,0UL,18446744073709551613UL,0x6336L,-5L}}},{{{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L}},{{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{255UL,0x6FL,1L,0x894412F1F9A801BFLL,0xB2L,0L,0xA0000318L,0UL,0UL,-1L},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL},{0x89L,1L,0xC193594BL,-1L,0x83L,-3L,18446744073709551615UL,0x48EDE4CFL,0xD634L,-3L},{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL}},{{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L}},{{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{255UL,0xF8L,0x67872DABL,0xA7842E43F03FA736LL,0x73L,-1L,0UL,18446744073709551613UL,0x6336L,-5L},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL}}},{{{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{254UL,0x7CL,0xEF360CC7L,-2L,0xCCL,1L,0x95C4F544L,0xC5D5B3A3L,65535UL,0x7BEC5C454010145ELL},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L}},{{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL}},{{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{0xCEL,0xB2L,0x38270AC7L,0x758CD253606760E6LL,247UL,0x140BF33EL,18446744073709551615UL,0x6BF6F138L,65526UL,0xD0F23A8921C41CFDLL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L}},{{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{255UL,0xF8L,0x67872DABL,0xA7842E43F03FA736LL,0x73L,-1L,0UL,18446744073709551613UL,0x6336L,-5L},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL}}},{{{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{254UL,0x7CL,0xEF360CC7L,-2L,0xCCL,1L,0x95C4F544L,0xC5D5B3A3L,65535UL,0x7BEC5C454010145ELL},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{254UL,0x7CL,0xEF360CC7L,-2L,0xCCL,1L,0x95C4F544L,0xC5D5B3A3L,65535UL,0x7BEC5C454010145ELL},{254UL,0x7CL,0xEF360CC7L,-2L,0xCCL,1L,0x95C4F544L,0xC5D5B3A3L,65535UL,0x7BEC5C454010145ELL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L}},{{255UL,0x6FL,1L,0x894412F1F9A801BFLL,0xB2L,0L,0xA0000318L,0UL,0UL,-1L},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{255UL,0x6FL,1L,0x894412F1F9A801BFLL,0xB2L,0L,0xA0000318L,0UL,0UL,-1L},{0x89L,1L,0xC193594BL,-1L,0x83L,-3L,18446744073709551615UL,0x48EDE4CFL,0xD634L,-3L},{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL},{0x89L,1L,0xC193594BL,-1L,0x83L,-3L,18446744073709551615UL,0x48EDE4CFL,0xD634L,-3L},{255UL,0x6FL,1L,0x894412F1F9A801BFLL,0xB2L,0L,0xA0000318L,0UL,0UL,-1L}},{{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{255UL,0x96L,0x5A744449L,0x17C344CD38443E76LL,0x09L,1L,1UL,0x673545B4L,65528UL,3L},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L}},{{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL},{0x89L,1L,0xC193594BL,-1L,0x83L,-3L,18446744073709551615UL,0x48EDE4CFL,0xD634L,-3L},{0x0EL,-1L,0xB5688B37L,0L,0x20L,0xE29EB14DL,0x7A7CD978L,18446744073709551613UL,0xEA81L,0x4BE1DBD29A312987LL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x0EL,-1L,0xB5688B37L,0L,0x20L,0xE29EB14DL,0x7A7CD978L,18446744073709551613UL,0xEA81L,0x4BE1DBD29A312987LL},{0x89L,1L,0xC193594BL,-1L,0x83L,-3L,18446744073709551615UL,0x48EDE4CFL,0xD634L,-3L},{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL}}},{{{254UL,0x7CL,0xEF360CC7L,-2L,0xCCL,1L,0x95C4F544L,0xC5D5B3A3L,65535UL,0x7BEC5C454010145ELL},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{254UL,0x7CL,0xEF360CC7L,-2L,0xCCL,1L,0x95C4F544L,0xC5D5B3A3L,65535UL,0x7BEC5C454010145ELL},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L}},{{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x61L,0x91L,0x71487CD6L,-1L,0UL,0L,18446744073709551613UL,0x1472BA8CL,0x1B4BL,0x900934FC7FD870EDLL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL},{0x64L,1L,8L,0xDC9DA3C3F8D6F4D5LL,0UL,-6L,2UL,0xD367C810L,1UL,0x01FF5C56FCB4BE9FLL},{0x34L,-1L,-1L,6L,246UL,0xA2FB9CC8L,0UL,1UL,65535UL,0x23B7ECBD49F46AE2LL}},{{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L},{9UL,0xB0L,-8L,0x0E1664BDCEE4117ALL,0x91L,0x963B8520L,18446744073709551615UL,0x0837829BL,0xCE97L,0xC95CBEF0E86583D0LL},{254UL,0x7CL,0xEF360CC7L,-2L,0xCCL,1L,0x95C4F544L,0xC5D5B3A3L,65535UL,0x7BEC5C454010145ELL},{1UL,0x05L,0L,0x96D108A993E3519BLL,0xBDL,0L,0x7761FA47L,18446744073709551608UL,1UL,-10L},{0x87L,-1L,1L,0x33F9C70318C3DCA3LL,0x5CL,0L,0x02237A11L,0UL,0x245AL,6L}},{{0x0EL,-1L,0xB5688B37L,0L,0x20L,0xE29EB14DL,0x7A7CD978L,18446744073709551613UL,0xEA81L,0x4BE1DBD29A312987LL},{1UL,0x27L,1L,8L,0x9BL,0x916431C2L,0x1ED7A27CL,0xCD346D6BL,0x4AC6L,0x823695E5E4089221LL},{0x0EL,-1L,0xB5688B37L,0L,0x20L,0xE29EB14DL,0x7A7CD978L,18446744073709551613UL,0xEA81L,0x4BE1DBD29A312987LL},{0x89L,1L,0xC193594BL,-1L,0x83L,-3L,18446744073709551615UL,0x48EDE4CFL,0xD634L,-3L},{0UL,-1L,0xF7120173L,0x4B8CBABA52601DE8LL,0xB6L,0x692B7E9CL,0x35152B26L,18446744073709551614UL,0UL,0xA19EF0BD3F8B464CLL},{0x89L,1L,0xC193594BL,-1L,0x83L,-3L,18446744073709551615UL,0x48EDE4CFL,0xD634L,-3L},{0x0EL,-1L,0xB5688B37L,0L,0x20L,0xE29EB14DL,0x7A7CD978L,18446744073709551613UL,0xEA81L,0x4BE1DBD29A312987LL}}}};
    int32_t l_887 = 1L;
    const uint8_t l_956 = 0xD9L;
    struct S0 **l_1020 = &g_527;
    uint16_t l_1090[1][6][3] = {{{1UL,0x2B67L,0xE465L},{1UL,0x2B67L,1UL},{0x56B6L,1UL,0xE465L},{0x56B6L,0x56B6L,1UL},{1UL,1UL,1UL},{1UL,0x2B67L,0xE465L}}};
    int64_t l_1166 = 0xFF0EB163C0EB671ELL;
    int32_t l_1167 = 0L;
    uint64_t l_1227[8][4][8] = {{{0x6FBEF9665F021D94LL,0xEC05DA96441219F0LL,0x937C70E36AF53874LL,1UL,18446744073709551615UL,0x6AE335BE0138CAB6LL,0x6FBEF9665F021D94LL,0x6FBEF9665F021D94LL},{0x778D9BC1A4CFE079LL,1UL,1UL,1UL,1UL,0x778D9BC1A4CFE079LL,18446744073709551615UL,0xEC05DA96441219F0LL},{1UL,0x778D9BC1A4CFE079LL,18446744073709551615UL,0xEC05DA96441219F0LL,0x1102CF4A551357BFLL,1UL,18446744073709551609UL,0x1102CF4A551357BFLL},{0xEC05DA96441219F0LL,0x6FBEF9665F021D94LL,6UL,0xEC05DA96441219F0LL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0xEC05DA96441219F0LL}},{{0xE2B47D57E440E102LL,18446744073709551615UL,0xE2B47D57E440E102LL,1UL,0x5FC2F896DED7897CLL,18446744073709551615UL,1UL,0x6FBEF9665F021D94LL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,1UL,0x0AE883E08FAC30D5LL,0x1102CF4A551357BFLL,0x5FC2F896DED7897CLL,18446744073709551615UL},{18446744073709551615UL,0x6FBEF9665F021D94LL,0x0BDF1C531692A7C8LL,0x5FC2F896DED7897CLL,0x5FC2F896DED7897CLL,0x0BDF1C531692A7C8LL,0x6FBEF9665F021D94LL,18446744073709551615UL},{0xE2B47D57E440E102LL,0xEC05DA96441219F0LL,18446744073709551615UL,0x1102CF4A551357BFLL,18446744073709551615UL,0x778D9BC1A4CFE079LL,0xE2B47D57E440E102LL,0x6FBEF9665F021D94LL}},{{0xEC05DA96441219F0LL,0x1102CF4A551357BFLL,1UL,18446744073709551609UL,0x1102CF4A551357BFLL,0x778D9BC1A4CFE079LL,0x5FC2F896DED7897CLL,0x778D9BC1A4CFE079LL},{1UL,0xEC05DA96441219F0LL,0x9A9185AED2120E15LL,0xEC05DA96441219F0LL,1UL,0x0BDF1C531692A7C8LL,18446744073709551609UL,1UL},{0x778D9BC1A4CFE079LL,0x6FBEF9665F021D94LL,0xE2B47D57E440E102LL,0x778D9BC1A4CFE079LL,18446744073709551615UL,0x1102CF4A551357BFLL,18446744073709551615UL,0xEC05DA96441219F0LL},{0x6FBEF9665F021D94LL,18446744073709551615UL,0xE2B47D57E440E102LL,18446744073709551609UL,18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,0xE2B47D57E440E102LL}},{{18446744073709551615UL,18446744073709551615UL,0x9A9185AED2120E15LL,1UL,0x14554BECCD63BD62LL,18446744073709551615UL,0x5FC2F896DED7897CLL,18446744073709551615UL},{18446744073709551615UL,0x6FBEF9665F021D94LL,1UL,18446744073709551615UL,0x5FC2F896DED7897CLL,1UL,18446744073709551615UL,0x0AE883E08FAC30D5LL},{0x1102CF4A551357BFLL,6UL,0x917728C0C777B282LL,1UL,0x917728C0C777B282LL,6UL,0x1102CF4A551357BFLL,18446744073709551615UL},{0xE2B47D57E440E102LL,1UL,0x5FC2F896DED7897CLL,18446744073709551615UL,1UL,0x6FBEF9665F021D94LL,18446744073709551615UL,0xE2B47D57E440E102LL}},{{0x0BDF1C531692A7C8LL,0xE2B47D57E440E102LL,0x937C70E36AF53874LL,6UL,1UL,0x9A9185AED2120E15LL,0x9A9185AED2120E15LL,1UL},{0xE2B47D57E440E102LL,18446744073709551615UL,18446744073709551615UL,0xE2B47D57E440E102LL,0x917728C0C777B282LL,0x0BDF1C531692A7C8LL,0x0AE883E08FAC30D5LL,6UL},{0x1102CF4A551357BFLL,0x0AE883E08FAC30D5LL,1UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x1102CF4A551357BFLL},{0x917728C0C777B282LL,0x0AE883E08FAC30D5LL,0x937C70E36AF53874LL,0x0BDF1C531692A7C8LL,0x778D9BC1A4CFE079LL,0x0BDF1C531692A7C8LL,0x937C70E36AF53874LL,0x0AE883E08FAC30D5LL}},{{0x0AE883E08FAC30D5LL,18446744073709551615UL,0x9A9185AED2120E15LL,18446744073709551615UL,0x937C70E36AF53874LL,0x9A9185AED2120E15LL,0x1102CF4A551357BFLL,0x917728C0C777B282LL},{0x1102CF4A551357BFLL,0xE2B47D57E440E102LL,0x14554BECCD63BD62LL,1UL,0x0AE883E08FAC30D5LL,0x6FBEF9665F021D94LL,0x1102CF4A551357BFLL,0x1102CF4A551357BFLL},{6UL,1UL,0x9A9185AED2120E15LL,0x9A9185AED2120E15LL,1UL,6UL,0x937C70E36AF53874LL,0xE2B47D57E440E102LL},{1UL,6UL,0x937C70E36AF53874LL,0xE2B47D57E440E102LL,0x0BDF1C531692A7C8LL,0x9A9185AED2120E15LL,18446744073709551615UL,0x0BDF1C531692A7C8LL}},{{0xE2B47D57E440E102LL,0x1102CF4A551357BFLL,1UL,0xE2B47D57E440E102LL,0x0AE883E08FAC30D5LL,18446744073709551609UL,0x0AE883E08FAC30D5LL,0xE2B47D57E440E102LL},{18446744073709551615UL,0x0AE883E08FAC30D5LL,18446744073709551615UL,0x9A9185AED2120E15LL,18446744073709551615UL,0x937C70E36AF53874LL,0x9A9185AED2120E15LL,0x1102CF4A551357BFLL},{0x0AE883E08FAC30D5LL,0x917728C0C777B282LL,0x937C70E36AF53874LL,1UL,0x6AE335BE0138CAB6LL,0x0BDF1C531692A7C8LL,18446744073709551615UL,0x917728C0C777B282LL},{0x0AE883E08FAC30D5LL,0x1102CF4A551357BFLL,0x5FC2F896DED7897CLL,18446744073709551615UL,18446744073709551615UL,0x5FC2F896DED7897CLL,0x1102CF4A551357BFLL,0x0AE883E08FAC30D5LL}},{{18446744073709551615UL,0xE2B47D57E440E102LL,0x917728C0C777B282LL,0x0BDF1C531692A7C8LL,0x0AE883E08FAC30D5LL,6UL,18446744073709551615UL,0x1102CF4A551357BFLL},{0xE2B47D57E440E102LL,0x0BDF1C531692A7C8LL,0x9A9185AED2120E15LL,18446744073709551615UL,0x0BDF1C531692A7C8LL,6UL,18446744073709551615UL,6UL},{1UL,0xE2B47D57E440E102LL,18446744073709551615UL,0xE2B47D57E440E102LL,1UL,0x5FC2F896DED7897CLL,18446744073709551615UL,1UL},{6UL,0x1102CF4A551357BFLL,18446744073709551615UL,6UL,0x0AE883E08FAC30D5LL,0x0BDF1C531692A7C8LL,0x917728C0C777B282LL,0xE2B47D57E440E102LL}}};
    uint64_t ****l_1315 = (void*)0;
    int64_t l_1320 = 0xC02A31DDCCC2F406LL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_775[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_792[i] = &l_793;
    return p_17;
}







static int8_t func_22(const uint8_t p_23, uint32_t p_24, int32_t p_25)
{
    int32_t * const l_30 = (void*)0;
    uint8_t *l_31 = &g_32;
    (**g_634) = func_28((((void*)0 == l_30) | ((*l_31) = g_5)));
    return g_530.f4;
}







static int32_t * func_28(uint64_t p_29)
{
    uint32_t l_63 = 0UL;
    uint8_t *l_69 = &g_32;
    uint8_t *l_78 = (void*)0;
    uint8_t *l_584[4];
    int16_t l_603 = 5L;
    struct S0 **l_607[6] = {&g_527,&g_527,&g_527,&g_527,&g_527,&g_527};
    const struct S0 *l_623 = &g_371;
    const struct S0 **l_622 = &l_623;
    int32_t l_669 = 0x54A32ABAL;
    int32_t l_670 = 0x2F22B173L;
    int32_t l_671 = (-6L);
    int32_t l_680 = 0x235D63E7L;
    int32_t l_685 = (-3L);
    int32_t l_688 = (-1L);
    int32_t l_692 = 0x546EBFFBL;
    int32_t l_694 = 0x148EA9B4L;
    int32_t l_697 = 1L;
    int32_t l_699 = 0x28B2B986L;
    int32_t l_700 = (-1L);
    int32_t *l_705 = &g_158[2][0][6];
    uint32_t l_734 = 0x61479C01L;
    uint32_t *l_739[6][7][5] = {{{&g_175,&g_175,(void*)0,&g_175,&g_137},{(void*)0,&g_137,&l_63,&g_175,&l_63},{&g_175,&g_175,(void*)0,(void*)0,(void*)0},{&g_175,&g_175,&g_175,&g_137,(void*)0},{(void*)0,(void*)0,&g_175,&g_137,(void*)0},{&g_175,&g_175,&g_137,&g_175,&g_137},{&l_63,&g_175,&l_63,(void*)0,(void*)0}},{{&g_175,&g_137,&g_175,&l_63,&g_175},{&g_137,&g_175,&g_175,(void*)0,&g_175},{&l_63,&g_175,&g_175,&g_175,&g_137},{&g_175,&g_175,&g_175,&g_175,&l_63},{&g_137,&l_63,&l_63,&g_137,&g_137},{&g_175,&g_175,&g_175,(void*)0,&g_175},{&g_137,(void*)0,&g_175,(void*)0,&g_175}},{{&g_137,(void*)0,&g_175,(void*)0,(void*)0},{&l_63,&g_175,&g_175,&g_137,&g_175},{&l_63,&l_63,&g_137,&g_175,&g_175},{&g_175,(void*)0,&g_175,&g_175,(void*)0},{&g_175,&g_175,&g_137,(void*)0,(void*)0},{&l_63,&g_137,&g_175,&g_175,&g_175},{(void*)0,&l_63,(void*)0,(void*)0,&l_63}},{{&g_137,&g_175,&g_137,&l_63,&g_175},{(void*)0,(void*)0,(void*)0,(void*)0,&l_63},{&l_63,(void*)0,(void*)0,&g_175,(void*)0},{(void*)0,&l_63,(void*)0,&g_137,(void*)0},{&g_137,(void*)0,&l_63,&g_175,(void*)0},{(void*)0,&g_175,&g_137,&g_175,(void*)0},{&l_63,&g_175,&g_175,&g_137,&g_137}},{{&g_175,&g_137,&g_137,&l_63,&g_175},{&g_175,(void*)0,&g_137,&g_175,&g_175},{&l_63,&g_175,&l_63,&g_137,&l_63},{&l_63,(void*)0,(void*)0,&g_175,&g_175},{&g_137,&g_175,&g_175,&g_175,(void*)0},{&g_137,&g_175,(void*)0,&g_175,&l_63},{&g_175,&g_137,&l_63,&l_63,&g_137}},{{&g_137,&g_175,&g_137,&l_63,&g_137},{&g_175,(void*)0,&g_137,&g_175,(void*)0},{&l_63,&l_63,&g_175,&g_175,&g_137},{&g_137,(void*)0,&g_137,(void*)0,&g_137},{&g_175,&l_63,&l_63,&l_63,&g_175},{(void*)0,(void*)0,(void*)0,&g_137,&g_175},{(void*)0,&g_175,(void*)0,&g_175,&l_63}}};
    int64_t *l_766[5][1];
    int16_t *l_767 = (void*)0;
    int16_t *l_768 = &l_603;
    int8_t l_769 = (-1L);
    int32_t *l_770[1][8][3] = {{{(void*)0,&l_670,&l_670},{&l_697,&l_697,&l_697},{(void*)0,&l_670,&l_670},{&l_697,&l_697,&l_697},{(void*)0,&l_670,&l_670},{&l_697,&l_697,&l_697},{(void*)0,&l_670,&l_685},{&l_697,&g_41,&g_41}}};
    int32_t *l_771 = &l_699;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_584[i] = &g_32;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_766[i][j] = &g_528.f9;
    }
    for (p_29 = 28; (p_29 != 47); ++p_29)
    {
        int32_t l_40[1][4][9] = {{{(-8L),0x77FEFB65L,0x83F7CD3EL,0x6AC116E0L,0x83F7CD3EL,0x77FEFB65L,(-8L),0x83F7CD3EL,0x15E0C0A1L},{1L,(-3L),0x095E04A2L,0xBAAA4F69L,0x83F7CD3EL,0x095E04A2L,0x33631AF6L,0x095E04A2L,0x83F7CD3EL},{1L,0x83F7CD3EL,0x83F7CD3EL,1L,(-3L),0x095E04A2L,0xBAAA4F69L,0x83F7CD3EL,0x095E04A2L},{(-8L),0x83F7CD3EL,0x15E0C0A1L,0xBAAA4F69L,0x77FEFB65L,0x77FEFB65L,0xBAAA4F69L,0x15E0C0A1L,0x83F7CD3EL}}};
        struct S0 l_210 = {0x89L,-5L,0x4C4754AEL,1L,0x26L,-2L,0UL,0x2A5FD6FEL,65535UL,1L};
        uint32_t l_585 = 0x682EA93DL;
        int32_t **l_627 = (void*)0;
        int32_t ***l_626[1][1][1];
        uint32_t l_633 = 0xB74FA415L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_626[i][j][k] = &l_627;
            }
        }
        for (g_32 = 0; (g_32 > 54); g_32 = safe_add_func_int32_t_s_s(g_32, 2))
        {
            struct S0 l_76 = {246UL,0x33L,0xC202EAB3L,-3L,0xE1L,1L,0x5108D7EBL,7UL,0x916FL,0x7DD1A1FBCDA4F1DFLL};
            int32_t l_637 = 1L;
            int32_t l_653[2];
            uint8_t *l_668[10];
            uint8_t l_702 = 0x47L;
            int i;
            for (i = 0; i < 2; i++)
                l_653[i] = 3L;
            for (i = 0; i < 10; i++)
                l_668[i] = &g_371.f4;
            for (g_37 = 21; (g_37 != 0); g_37--)
            {
                uint32_t l_54 = 0xEC253D5AL;
                struct S0 l_211 = {0x67L,-1L,0x71A36315L,-1L,0x5AL,0L,18446744073709551608UL,1UL,65535UL,0x78A848BB9C06754CLL};
                const int8_t *l_601[8] = {&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100};
                struct S0 **l_605 = &g_527;
                struct S0 ***l_604 = &l_605;
                struct S0 ***l_608[3][7] = {{&l_607[3],&l_607[3],&l_607[3],&l_607[3],&l_607[3],&l_607[3],&l_607[3]},{&l_607[1],&l_607[1],&l_607[1],&l_607[1],&l_607[1],&l_607[1],&l_607[1]},{&l_607[3],&l_607[3],&l_607[3],&l_607[3],&l_607[3],&l_607[3],&l_607[3]}};
                uint8_t *l_646 = &g_179[5];
                const int32_t l_649 = 0x301EECF5L;
                uint8_t **l_657 = &l_584[3];
                int32_t l_674 = (-10L);
                int32_t l_676 = 1L;
                int32_t l_684 = 1L;
                int32_t l_686 = 1L;
                int32_t l_689 = (-1L);
                int32_t l_691[4];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_691[i] = 4L;
                for (g_41 = 0; (g_41 <= 0); g_41 += 1)
                {
                    int32_t *l_77 = &g_37;
                    const int32_t **l_206 = (void*)0;
                    const int32_t *l_208[3][9] = {{&g_209,&g_209,&g_209,&g_209,&g_209,&g_209,&g_209,&g_209,&g_209},{&g_209,&g_209,&g_209,&g_209,&g_209,&g_209,&g_209,&g_209,&g_209},{&g_209,&g_209,&g_209,&g_209,&g_209,&g_209,&g_209,&g_209,&g_209}};
                    const int32_t **l_207 = &l_208[0][8];
                    int i, j, k;
                }
                if (l_211.f5)
                    continue;
                if (((((g_606 = ((*l_604) = &g_527)) == (g_609 = l_607[4])) , p_29) && 0x86L))
                {
                    const struct S0 ***l_624 = &l_622;
                    const int32_t l_625 = 3L;
                    uint8_t ***l_632 = &g_473;
                    uint8_t **l_647[1][2];
                    int32_t l_652 = (-1L);
                    int8_t *l_656 = &l_210.f1;
                    int32_t l_679 = (-1L);
                    int32_t l_682 = 0x0C46A3DFL;
                    int32_t l_698 = (-10L);
                    int64_t l_701 = 0xF3472D5C3594E346LL;
                    int8_t l_706 = 0x18L;
                    uint16_t *l_719 = &g_371.f8;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_647[i][j] = &l_584[3];
                    }
                    (*g_157) = (65535UL == (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u(0x98CAFB9D163EB116LL, (safe_div_func_int8_t_s_s(0x07L, (safe_mod_func_uint32_t_u_u(((((**g_473) = ((safe_sub_func_uint16_t_u_u((((*l_624) = l_622) == (l_625 , &g_527)), ((l_626[0][0][0] != ((((**g_606) , ((((((safe_div_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((((**g_394) ^ p_29) | l_211.f2), 0x4FL)) || 7L), (**g_394))) || p_29) , l_632) != (void*)0) && (-1L)) & p_29)) < l_633) , g_634)) || (**g_149)))) , l_637)) > p_29) || l_625), p_29)))))), 9)), 0x4EBEL)));
                    if (((((safe_rshift_func_int8_t_s_s(g_100, 2)) , ((*l_656) = (((safe_lshift_func_int16_t_s_u((g_530.f3 > (safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((l_211.f9 , ((g_648 = ((*g_473) = l_646)) == l_584[3])), l_649)) < (((*g_157) &= (safe_div_func_uint8_t_u_u((l_652 = l_63), ((*l_646)--)))) || (((1UL || ((g_505[0] , 1L) , 0x799621CEBDC75DA4LL)) , (**g_635)) | (**g_635)))), p_29))), 3)) == g_37) , 1L))) , l_76.f5) < 3UL))
                    {
                        int16_t l_661 = 0x0789L;
                        uint16_t *l_662 = &l_76.f8;
                        int32_t l_672 = 0xA9E5BDA3L;
                        int32_t l_673 = (-1L);
                        int32_t l_675 = 0x5DB7CFDBL;
                        int32_t l_677 = 0x81ADAA88L;
                        int32_t l_678 = 0L;
                        int32_t l_681 = 1L;
                        int32_t l_683 = 7L;
                        int32_t l_687 = 0x649CEFE8L;
                        int32_t l_690 = 0x046FDC1EL;
                        int32_t l_693 = (-1L);
                        int32_t l_695 = 0L;
                        int32_t l_696[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_696[i] = 0xD3A29086L;
                        (*g_635) = ((*g_395) , func_64((l_657 == ((safe_add_func_int32_t_s_s((~((*l_662) ^= l_661)), l_625)) , (*g_148))), ((((((((*g_648) < (safe_rshift_func_uint16_t_u_u(((p_29 & ((((safe_lshift_func_int16_t_s_s((+((0L > l_211.f4) > l_653[1])), (**g_394))) ^ (-1L)) <= (*g_395)) ^ 0xEAFB20BFL)) || (-1L)), 0))) || p_29) && (*g_150)) && 252UL) , &g_149) == (void*)0) , l_668[6]), &g_2, (*g_473)));
                        l_702++;
                        return l_705;
                    }
                    else
                    {
                        uint32_t l_707 = 1UL;
                        ++l_707;
                    }
                    for (l_76.f9 = 0; (l_76.f9 >= (-1)); --l_76.f9)
                    {
                        if (p_29)
                            break;
                    }
                    g_41 = (safe_mul_func_int16_t_s_s(((*g_149) != (void*)0), ((((((*g_648)--) > g_530.f9) >= (~(1UL == (((**g_448) = ((safe_rshift_func_int8_t_s_s(g_371.f9, 7)) && 0UL)) <= ((((**g_394) |= ((0UL | ((((((((*l_705) = (++(*l_719))) != (safe_unary_minus_func_uint32_t_u((((2UL != 0x4D11276302099DECLL) <= g_371.f5) , p_29)))) >= g_124) >= g_530.f3) < p_29) && l_701) >= p_29)) >= l_691[0])) < p_29) >= p_29))))) , (*g_609)) != (void*)0)));
                }
                else
                {
                    int32_t *l_723[7][4][1];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_723[i][j][k] = &l_653[0];
                        }
                    }
                    return &g_37;
                }
                (*g_157) ^= p_29;
            }
            g_724 = g_724;
            (**g_634) = (**g_634);
        }
    }
    (*l_705) = ((*l_705) , (0xB8079D2F2C89B797LL & (((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((***g_634) || (((g_100 = ((((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((g_458[2] , (*l_705)), p_29)) == (((l_688 = (l_734 = ((*l_69) = 0xA9L))) <= g_371.f6) > ((*l_705) , g_371.f1))), (*l_705))) > 0x2AL) <= 0xDD5DL) | (*l_705))) != (-6L)) ^ 0x23L)), g_530.f3)) , p_29), (*g_474))) | p_29) , (*l_705))));
    g_37 = (safe_div_func_uint16_t_u_u(g_391, (safe_div_func_uint8_t_u_u(((g_137++) >= (((safe_lshift_func_uint8_t_u_u((((*l_705) = (((!p_29) , ((*g_395) >= ((**g_448) , (((*l_768) ^= (safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(0x61L, (((**g_394) <= ((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((g_530.f9 ^= (safe_unary_minus_func_int64_t_s(((safe_mul_func_uint16_t_u_u(((0L != (safe_mul_func_uint16_t_u_u(0x8102L, (safe_rshift_func_int8_t_s_s(((safe_add_func_int64_t_s_s(((*l_623) , p_29), p_29)) | 0x45E3FE44L), g_371.f7))))) & 4294967295UL), (*g_395))) < (*l_705))))), (**g_724))) , (*g_474)), (*l_705))), p_29)), 0x09AACEE4L)) , p_29)) || p_29))), (**g_724)))) ^ l_769)))) , (*l_705))) && g_530.f4), (*g_150))) , p_29) && (*l_705))), 0xD1L))));
    return &g_37;
}







static uint8_t func_44(const uint32_t p_45, uint8_t * p_46, int32_t * p_47)
{
    int8_t l_552 = (-1L);
    int32_t l_553 = 9L;
    int32_t l_554 = (-2L);
    for (g_530.f1 = (-21); (g_530.f1 > (-11)); ++g_530.f1)
    {
        const int16_t l_535 = 0x06D8L;
        int32_t l_545[10][1][6];
        int i, j, k;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 6; k++)
                    l_545[i][j][k] = 0xB3711F95L;
            }
        }
        if (l_535)
            break;
        for (g_371.f6 = 0; (g_371.f6 <= 16); g_371.f6++)
        {
            int32_t l_540[5];
            int32_t *l_541 = (void*)0;
            int32_t *l_542 = (void*)0;
            int32_t *l_543 = &g_158[0][0][3];
            int32_t *l_544 = (void*)0;
            int32_t *l_546 = (void*)0;
            int32_t *l_547 = &g_158[2][0][6];
            int32_t *l_548 = &g_158[2][0][6];
            int32_t *l_549 = &l_540[2];
            int32_t *l_550 = &l_540[2];
            int32_t *l_551[7][4] = {{&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2]},{&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2]},{&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2]},{&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2]},{&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2]},{&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2]},{&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2],&l_545[5][0][2]}};
            uint32_t l_555 = 0xBC26CEEFL;
            uint32_t *l_566 = &g_137;
            int8_t *l_569 = &l_552;
            int8_t *l_574 = &l_552;
            int8_t **l_573 = &l_574;
            int i, j;
            for (i = 0; i < 5; i++)
                l_540[i] = 0x31FA74BAL;
            for (g_530.f6 = 0; (g_530.f6 >= 45); g_530.f6++)
            {
                return l_540[2];
            }
            l_555++;
            (*l_543) ^= ((safe_add_func_int8_t_s_s(0x63L, (safe_lshift_func_int16_t_s_u(((((((safe_mod_func_int16_t_s_s((*g_395), p_45)) > p_45) && ((safe_mul_func_int8_t_s_s(((((l_569 = p_46) != ((*l_573) = &g_100)) , 4294967295UL) == 0UL), g_528.f6)) < (*p_46))) < l_535) >= (**g_149)) | g_530.f7), 11)))) | 0x65F4L);
            return l_545[0][0][1];
        }
    }
    return (*g_474);
}







static uint8_t * func_48(uint32_t p_49, int16_t p_50)
{
    struct S0 l_476 = {1UL,0L,-1L,0x92B3C647758CCA36LL,0x64L,1L,0UL,0x9F71D8A4L,65530UL,-1L};
    int64_t ***l_484 = &g_448;
    int32_t l_496 = (-7L);
    int64_t l_498[6][8][1] = {{{0xE5D073737B878663LL},{1L},{0x160D6F5DC7ED08E0LL},{1L},{0xE5D073737B878663LL},{(-8L)},{(-8L)},{0xE5D073737B878663LL}},{{1L},{0x160D6F5DC7ED08E0LL},{1L},{0xE5D073737B878663LL},{(-8L)},{(-8L)},{0xE5D073737B878663LL},{1L}},{{0x160D6F5DC7ED08E0LL},{1L},{0xE5D073737B878663LL},{(-8L)},{(-8L)},{0xE5D073737B878663LL},{1L},{0x160D6F5DC7ED08E0LL}},{{1L},{0xE5D073737B878663LL},{(-8L)},{(-8L)},{0xE5D073737B878663LL},{1L},{0x160D6F5DC7ED08E0LL},{1L}},{{0xE5D073737B878663LL},{(-8L)},{(-8L)},{0xE5D073737B878663LL},{1L},{0x160D6F5DC7ED08E0LL},{1L},{0xE5D073737B878663LL}},{{(-8L)},{(-8L)},{0xE5D073737B878663LL},{1L},{0x160D6F5DC7ED08E0LL},{1L},{0xE5D073737B878663LL},{(-8L)}}};
    uint16_t l_499[2];
    int32_t l_503 = 0xDB4E0C9CL;
    int32_t l_504 = 0x9DCF0F05L;
    uint8_t *l_532 = &g_458[3];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_499[i] = 0UL;
    if ((l_476 , (*g_157)))
    {
        int32_t *l_481 = &g_158[2][0][6];
        (*l_481) = (safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((-5L), (**g_448))), 4L));
    }
    else
    {
        int64_t ***l_487 = (void*)0;
        int32_t l_493 = 0x36A8BFF0L;
        int32_t l_501 = 0xA15A9044L;
        int32_t l_502 = 0x21DE096BL;
        struct S0 *l_514[7][3] = {{&g_371,&l_476,&l_476},{(void*)0,&g_371,(void*)0},{&g_371,&g_371,&l_476},{&g_371,&g_371,&g_371},{&g_371,&l_476,&l_476},{(void*)0,&g_371,(void*)0},{&g_371,&g_371,&l_476}};
        int i, j;
        for (g_371.f2 = (-23); (g_371.f2 != 7); g_371.f2++)
        {
            int64_t ****l_488 = &l_487;
            const uint8_t **l_489[9][10][1] = {{{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{(void*)0},{&g_150},{&g_150},{&g_150}},{{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{(void*)0},{&g_150},{&g_150},{&g_150}},{{&g_150},{&g_150},{&g_150},{&g_150},{(void*)0},{&g_150},{&g_150},{(void*)0},{&g_150},{(void*)0}},{{&g_150},{&g_150},{(void*)0},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150}},{{(void*)0},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150}},{{(void*)0},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{(void*)0},{&g_150}},{{&g_150},{(void*)0},{&g_150},{(void*)0},{&g_150},{&g_150},{(void*)0},{&g_150},{&g_150},{&g_150}},{{&g_150},{&g_150},{&g_150},{&g_150},{(void*)0},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150}},{{&g_150},{&g_150},{&g_150},{&g_150},{(void*)0},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150}}};
            const uint8_t ***l_490 = &l_489[4][0][0];
            int8_t *l_494 = &l_476.f1;
            int8_t *l_495[4] = {&g_100,&g_100,&g_100,&g_100};
            int32_t *l_497[10][4] = {{(void*)0,&l_493,&g_41,&g_41},{&g_158[2][0][6],&l_493,&g_158[2][0][6],(void*)0},{&l_493,(void*)0,&g_158[2][0][6],(void*)0},{(void*)0,&g_41,(void*)0,(void*)0},{&g_158[3][0][3],(void*)0,(void*)0,&g_158[3][0][3]},{(void*)0,(void*)0,&g_158[2][0][6],&g_158[2][0][6]},{&l_493,&g_2,&g_158[2][0][6],(void*)0},{&g_158[2][0][6],(void*)0,&g_41,(void*)0},{(void*)0,&g_2,&g_41,&g_158[2][0][6]},{&g_5,(void*)0,(void*)0,&g_158[3][0][3]}};
            int32_t l_521 = 2L;
            struct S0 *l_529[9] = {&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530};
            int i, j, k;
            l_498[2][2][0] |= ((l_476.f5 <= ((**g_473) <= (l_484 != ((safe_add_func_int8_t_s_s(p_50, g_179[5])) , ((*l_488) = l_487))))) <= (((*g_148) == ((*l_490) = l_489[8][7][0])) , (safe_lshift_func_int8_t_s_s((l_496 = ((*l_494) = l_493)), g_41))));
            if ((((-1L) < (p_49 <= p_49)) <= l_499[1]))
            {
                int32_t l_500 = 0x00CD059FL;
                g_505[1]--;
                if (l_500)
                    break;
                for (l_476.f7 = 0; (l_476.f7 != 40); l_476.f7++)
                {
                    struct S0 *l_525 = &l_476;
                    if ((g_158[4][0][7] ^= (*g_157)))
                    {
                        uint32_t l_512 = 0x6D8AA2BEL;
                        uint32_t *l_513 = &g_175;
                        int32_t l_522[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_522[i] = 9L;
                        g_157 = &g_5;
                        l_522[0] ^= (((((g_158[6][0][2] | 0x98L) == ((*g_474) | ((((void*)0 == l_514[2][1]) != 0x243F7939L) < (safe_sub_func_uint16_t_u_u((((**g_448) > (safe_mul_func_uint16_t_u_u(((0x4C9C44FFA04D5B03LL != (safe_add_func_int32_t_s_s((l_501 == 0xDCL), (*g_157)))) , p_49), l_512))) != l_501), 4L))))) | l_521) <= g_5) , p_50);
                        (*l_484) = ((safe_lshift_func_uint16_t_u_u((g_83 ^= p_49), 10)) , &g_377);
                    }
                    else
                    {
                        struct S0 **l_526 = (void*)0;
                        l_529[6] = (g_527 = l_525);
                    }
                    if (p_50)
                        break;
                }
                l_497[1][1] = &l_500;
            }
            else
            {
                int32_t **l_531 = &l_497[5][3];
                (*l_531) = &l_501;
            }
            return l_532;
        }
    }
    return l_532;
}







static int64_t func_51(uint32_t p_52, uint32_t p_53)
{
    int32_t *l_464 = &g_158[6][0][3];
    int32_t *l_465 = &g_158[2][0][6];
    int32_t *l_466 = &g_158[6][0][6];
    int32_t l_467 = 0xB7334A74L;
    int32_t *l_468 = &g_158[2][0][6];
    int32_t *l_469[3][6][8] = {{{(void*)0,(void*)0,&l_467,(void*)0,(void*)0,&g_158[1][0][7],&g_5,&g_158[2][0][6]},{&l_467,&g_5,&g_158[2][0][6],&g_41,&g_158[2][0][2],(void*)0,(void*)0,(void*)0},{&g_41,&g_158[2][0][2],&g_158[2][0][6],&g_158[5][0][1],&g_5,&g_5,&g_5,&g_158[2][0][6]},{&g_158[2][0][2],&l_467,&l_467,&g_158[2][0][6],&l_467,&g_37,&g_5,&g_158[2][0][6]},{&l_467,&l_467,&g_158[5][0][1],&g_37,&g_37,&g_158[5][0][1],&l_467,&l_467},{&g_5,(void*)0,&g_158[2][0][6],&g_37,(void*)0,&g_158[2][0][6],&l_467,&g_37}},{{&g_158[2][0][6],&g_5,&g_5,&g_5,&g_158[5][0][1],&g_158[2][0][6],&g_158[2][0][2],&g_41},{&g_41,&g_41,&l_467,&g_37,&g_158[1][0][7],&l_467,&g_5,&g_158[5][0][1]},{&g_41,(void*)0,&g_37,&l_467,&g_2,&g_158[5][0][1],&g_2,&l_467},{&g_158[2][0][6],&g_2,&g_158[2][0][6],&g_5,&l_467,&g_158[2][0][6],&g_2,&g_158[2][0][6]},{&g_41,&g_37,&l_467,&g_158[5][0][1],(void*)0,&g_5,&l_467,&l_467},{&g_41,&g_37,&g_5,&l_467,&l_467,&g_37,&g_37,&g_37}},{{&g_158[2][0][6],&g_41,&g_37,&g_41,&g_2,&g_37,&l_467,&l_467},{&g_41,&g_158[1][0][7],&g_5,&g_5,&g_158[1][0][7],&g_41,(void*)0,&l_467},{&g_41,&g_5,&g_158[2][0][6],&g_41,&g_158[5][0][1],&l_467,&g_2,&g_41},{&g_158[2][0][6],&l_467,&g_37,&g_41,&g_41,&g_5,&g_37,&l_467},{&g_37,&g_41,&l_467,&g_5,&l_467,&g_158[2][0][2],&g_37,&l_467},{&g_5,&g_37,&l_467,&g_41,&l_467,&g_41,&l_467,&g_37}}};
    uint32_t l_470[10] = {0x395F22F0L,0x395F22F0L,0x395F22F0L,0x395F22F0L,0x395F22F0L,0x395F22F0L,0x395F22F0L,0x395F22F0L,0x395F22F0L,0x395F22F0L};
    uint8_t ***l_475[7];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_475[i] = &g_473;
    --l_470[5];
    (*l_464) |= (p_52 , ((g_473 = g_473) == (*g_148)));
    return p_52;
}







static uint32_t func_55(struct S0 p_56, int64_t p_57, uint8_t * const p_58, int8_t p_59)
{
    int32_t **l_212 = &g_157;
    int64_t l_252[4];
    int32_t l_255 = 0xF3463579L;
    int32_t l_257[6][4] = {{0xD20069F1L,0xB1EF512BL,0x7A4677E4L,0x7A4677E4L},{0x28F6E9EAL,0x28F6E9EAL,0xD20069F1L,0x7A4677E4L},{4L,0xB1EF512BL,4L,0xD20069F1L},{4L,0xD20069F1L,0xD20069F1L,4L},{0x28F6E9EAL,0xD20069F1L,0x7A4677E4L,0xD20069F1L},{0xD20069F1L,0xB1EF512BL,0x7A4677E4L,0x7A4677E4L}};
    uint8_t *l_357 = &g_179[5];
    uint64_t l_390 = 18446744073709551614UL;
    int8_t l_429 = (-1L);
    int i, j;
    for (i = 0; i < 4; i++)
        l_252[i] = 0xC7ACA809D498514BLL;
    (*l_212) = &g_37;
    for (g_83 = 0; (g_83 <= 0); g_83 += 1)
    {
        const int32_t *l_213 = &g_41;
        int32_t l_214 = 0xE44C22DBL;
        int16_t *l_223 = &g_154;
        int32_t l_256 = 0xC2129FDFL;
        int32_t l_258 = (-1L);
        int32_t l_259 = 0x34E0CEF9L;
        int16_t l_316 = 5L;
        uint8_t *l_343 = (void*)0;
        uint64_t l_348 = 0x45BF8BA87FB0D7EBLL;
        int64_t *l_379[1];
        int64_t *l_393 = &g_371.f3;
        uint64_t *l_453 = &g_176;
        int i;
        for (i = 0; i < 1; i++)
            l_379[i] = &g_371.f9;
        l_214 &= ((*l_212) != l_213);
        g_158[1][0][2] ^= p_56.f7;
        for (p_57 = 0; (p_57 <= 6); p_57 += 1)
        {
            int16_t *l_230 = &g_154;
            int16_t * const *l_229 = &l_230;
            int16_t **l_231 = &l_230;
            int32_t l_249 = 0xB9444563L;
            int32_t l_250[3];
            int32_t l_254 = 0x6CCCA00BL;
            int8_t l_284 = 1L;
            uint64_t l_317[4][10][6] = {{{0xF0E9EB29FBD4BA8CLL,0x704DF307D05B8496LL,0UL,0x4279E7049906E010LL,18446744073709551614UL,6UL},{0x45463E3B50CB846DLL,0UL,0xA6EE20DBA3BF411ELL,0x949DA9C52775E7EELL,0x949DA9C52775E7EELL,0xA6EE20DBA3BF411ELL},{0xDE4CB3BAD0AA76A3LL,0xDE4CB3BAD0AA76A3LL,0x8F02643BFFD309D1LL,18446744073709551615UL,18446744073709551614UL,0x949DA9C52775E7EELL},{18446744073709551609UL,0x2B0F47E2C166499ELL,0x4279E7049906E010LL,18446744073709551615UL,0x0C7EED4EAE016783LL,0x8F02643BFFD309D1LL},{18446744073709551615UL,18446744073709551609UL,0x4279E7049906E010LL,0xA924B26B4A26B304LL,0xDE4CB3BAD0AA76A3LL,0x949DA9C52775E7EELL},{1UL,0xA924B26B4A26B304LL,0x8F02643BFFD309D1LL,0x521786769AABB43BLL,0xF0E9EB29FBD4BA8CLL,0xA6EE20DBA3BF411ELL},{0x521786769AABB43BLL,0xF0E9EB29FBD4BA8CLL,0xA6EE20DBA3BF411ELL,0x261853A4BD3031F6LL,18446744073709551615UL,6UL},{1UL,18446744073709551615UL,0UL,6UL,18446744073709551615UL,9UL},{18446744073709551615UL,18446744073709551615UL,0x1E256835DC99D922LL,0x8F02643BFFD309D1LL,18446744073709551615UL,0x704DF307D05B8496LL},{18446744073709551609UL,18446744073709551615UL,18446744073709551608UL,0x45463E3B50CB846DLL,18446744073709551609UL,0x8F02643BFFD309D1LL}},{{18446744073709551615UL,0x521786769AABB43BLL,0xA6EE20DBA3BF411ELL,0xA6EE20DBA3BF411ELL,0x521786769AABB43BLL,18446744073709551615UL},{6UL,0x2B0F47E2C166499ELL,0x1E256835DC99D922LL,0x949DA9C52775E7EELL,18446744073709551615UL,18446744073709551608UL},{0x521786769AABB43BLL,0x45463E3B50CB846DLL,0xBEAFEB27DD0A5689LL,0x8F02643BFFD309D1LL,1UL,0x45463E3B50CB846DLL},{0x521786769AABB43BLL,18446744073709551608UL,0x8F02643BFFD309D1LL,0x949DA9C52775E7EELL,0x0C7EED4EAE016783LL,0x2B0F47E2C166499ELL},{6UL,18446744073709551615UL,0x261853A4BD3031F6LL,0xA6EE20DBA3BF411ELL,0xF0E9EB29FBD4BA8CLL,0x521786769AABB43BLL},{18446744073709551615UL,0x8F02643BFFD309D1LL,9UL,6UL,0x0C7EED4EAE016783LL,0xA6EE20DBA3BF411ELL},{0x45463E3B50CB846DLL,18446744073709551614UL,18446744073709551615UL,9UL,1UL,18446744073709551609UL},{0x949DA9C52775E7EELL,18446744073709551615UL,18446744073709551615UL,0x704DF307D05B8496LL,18446744073709551615UL,0xA6EE20DBA3BF411ELL},{18446744073709551615UL,0x704DF307D05B8496LL,9UL,0UL,0x521786769AABB43BLL,0x521786769AABB43BLL},{0xDE4CB3BAD0AA76A3LL,0x261853A4BD3031F6LL,0x261853A4BD3031F6LL,0xDE4CB3BAD0AA76A3LL,18446744073709551609UL,0x2B0F47E2C166499ELL}},{{18446744073709551615UL,0xF0E9EB29FBD4BA8CLL,0x8F02643BFFD309D1LL,0x2B0F47E2C166499ELL,0x949DA9C52775E7EELL,0x45463E3B50CB846DLL},{0x949DA9C52775E7EELL,9UL,0xBEAFEB27DD0A5689LL,18446744073709551609UL,0x949DA9C52775E7EELL,18446744073709551608UL},{0x45463E3B50CB846DLL,0xF0E9EB29FBD4BA8CLL,0x1E256835DC99D922LL,0xA924B26B4A26B304LL,18446744073709551609UL,18446744073709551615UL},{18446744073709551615UL,0x261853A4BD3031F6LL,0xA6EE20DBA3BF411ELL,0xF0E9EB29FBD4BA8CLL,0x521786769AABB43BLL,0x8F02643BFFD309D1LL},{6UL,0x704DF307D05B8496LL,0x1E256835DC99D922LL,18446744073709551615UL,18446744073709551615UL,18446744073709551614UL},{0x521786769AABB43BLL,18446744073709551615UL,0xBEAFEB27DD0A5689LL,18446744073709551615UL,1UL,18446744073709551615UL},{0x521786769AABB43BLL,18446744073709551614UL,0x8F02643BFFD309D1LL,18446744073709551615UL,0x0C7EED4EAE016783LL,0x704DF307D05B8496LL},{6UL,0x8F02643BFFD309D1LL,0x261853A4BD3031F6LL,0xF0E9EB29FBD4BA8CLL,0xF0E9EB29FBD4BA8CLL,0x261853A4BD3031F6LL},{18446744073709551615UL,18446744073709551615UL,9UL,0xA924B26B4A26B304LL,0x0C7EED4EAE016783LL,0xF0E9EB29FBD4BA8CLL},{0x45463E3B50CB846DLL,18446744073709551608UL,18446744073709551615UL,18446744073709551609UL,1UL,9UL}},{{0x949DA9C52775E7EELL,0x45463E3B50CB846DLL,18446744073709551615UL,0x2B0F47E2C166499ELL,18446744073709551615UL,0xF0E9EB29FBD4BA8CLL},{18446744073709551615UL,0x2B0F47E2C166499ELL,9UL,0xDE4CB3BAD0AA76A3LL,0x521786769AABB43BLL,0x261853A4BD3031F6LL},{0xDE4CB3BAD0AA76A3LL,0x521786769AABB43BLL,0x261853A4BD3031F6LL,0UL,18446744073709551609UL,0x704DF307D05B8496LL},{18446744073709551615UL,0xA6EE20DBA3BF411ELL,0x8F02643BFFD309D1LL,0x704DF307D05B8496LL,0x949DA9C52775E7EELL,18446744073709551615UL},{0x949DA9C52775E7EELL,18446744073709551609UL,0xBEAFEB27DD0A5689LL,9UL,0x949DA9C52775E7EELL,18446744073709551614UL},{0x45463E3B50CB846DLL,0xA6EE20DBA3BF411ELL,0x1E256835DC99D922LL,6UL,18446744073709551609UL,0x8F02643BFFD309D1LL},{18446744073709551615UL,0x521786769AABB43BLL,0xA6EE20DBA3BF411ELL,0xA6EE20DBA3BF411ELL,0x521786769AABB43BLL,18446744073709551615UL},{6UL,0x2B0F47E2C166499ELL,0x1E256835DC99D922LL,0x949DA9C52775E7EELL,18446744073709551615UL,18446744073709551608UL},{0x521786769AABB43BLL,0x45463E3B50CB846DLL,0xBEAFEB27DD0A5689LL,0x8F02643BFFD309D1LL,1UL,0x45463E3B50CB846DLL},{0x521786769AABB43BLL,18446744073709551608UL,0x8F02643BFFD309D1LL,0x949DA9C52775E7EELL,0x0C7EED4EAE016783LL,0x2B0F47E2C166499ELL}}};
            uint8_t *l_353 = &g_179[5];
            int64_t *l_374 = &l_252[1];
            int64_t **l_373 = &l_374;
            int64_t **l_378[7][2][7] = {{{&g_377,&g_377,&g_377,&g_377,&g_377,(void*)0,(void*)0},{&g_377,&g_377,&g_377,&g_377,&g_377,&g_377,(void*)0}},{{&g_377,&g_377,&g_377,&g_377,&g_377,&g_377,&g_377},{&g_377,&g_377,&g_377,(void*)0,&g_377,&g_377,&g_377}},{{&g_377,&g_377,&g_377,&g_377,&g_377,&g_377,(void*)0},{&g_377,&g_377,&g_377,(void*)0,&g_377,(void*)0,&g_377}},{{&g_377,&g_377,&g_377,&g_377,&g_377,&g_377,&g_377},{&g_377,&g_377,(void*)0,&g_377,&g_377,&g_377,&g_377}},{{&g_377,&g_377,&g_377,(void*)0,(void*)0,&g_377,&g_377},{&g_377,&g_377,&g_377,&g_377,&g_377,&g_377,&g_377}},{{&g_377,&g_377,(void*)0,&g_377,&g_377,&g_377,&g_377},{&g_377,&g_377,&g_377,&g_377,(void*)0,&g_377,(void*)0}},{{&g_377,&g_377,&g_377,&g_377,&g_377,&g_377,(void*)0},{&g_377,(void*)0,&g_377,&g_377,&g_377,&g_377,&g_377}}};
            int32_t *l_392[3];
            int64_t **l_447 = &l_393;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_250[i] = 0L;
            for (i = 0; i < 3; i++)
                l_392[i] = &l_214;
        }
    }
    return (**l_212);
}







static int32_t * func_64(const uint32_t p_65, uint8_t * p_66, int32_t * p_67, uint8_t * p_68)
{
    int32_t *l_201[5];
    int32_t l_202[9];
    uint16_t l_203[5][2] = {{1UL,1UL},{0xE8B6L,0xE8B6L},{0xE8B6L,1UL},{1UL,0x8053L},{1UL,0x8053L}};
    int i, j;
    for (i = 0; i < 5; i++)
        l_201[i] = (void*)0;
    for (i = 0; i < 9; i++)
        l_202[i] = 0L;
    ++l_203[3][0];
    return l_201[4];
}







static int32_t * func_70(struct S0 p_71, int32_t * p_72, uint16_t p_73, int16_t p_74, uint8_t * p_75)
{
    const uint8_t *l_82[8];
    int32_t l_84 = 0L;
    int8_t *l_99 = &g_100;
    int64_t l_101 = 0L;
    int8_t l_151 = 0L;
    uint8_t *l_194[7] = {&g_179[2],&g_179[2],&g_179[2],&g_179[2],&g_179[2],&g_179[2],&g_179[2]};
    uint8_t **l_193 = &l_194[4];
    uint8_t ***l_192 = &l_193;
    int32_t **l_196[10] = {&g_157,&g_157,(void*)0,(void*)0,(void*)0,&g_157,&g_157,(void*)0,(void*)0,(void*)0};
    int32_t ***l_195 = &l_196[8];
    int i;
    for (i = 0; i < 8; i++)
        l_82[i] = &g_32;
lbl_117:
    for (p_71.f9 = 7; (p_71.f9 <= (-10)); p_71.f9--)
    {
        int16_t l_81 = 9L;
        if (l_81)
            break;
        g_83 ^= ((((p_71.f5 , ((void*)0 != &g_37)) , l_82[5]) != (void*)0) & p_71.f6);
        if (l_84)
            break;
    }
    if ((p_71 , ((p_71.f2 >= ((safe_div_func_int64_t_s_s((safe_div_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((((65534UL != ((safe_mod_func_uint32_t_u_u(g_37, 1UL)) | ((*l_99) &= (safe_mod_func_int32_t_s_s((((safe_add_func_int8_t_s_s((g_5 != (safe_div_func_int64_t_s_s(p_71.f5, ((((l_82[5] != &g_32) <= 18446744073709551615UL) == (-8L)) , 0x857B2633072FE88DLL)))), g_83)) , l_84) & g_32), (-6L)))))) != p_71.f9) , g_32), l_84)), p_71.f9)), l_84)) >= l_84)) , l_101)))
    {
        uint64_t l_115 = 1UL;
        int32_t l_116 = 0xA8B9AC94L;
        int8_t *l_184 = (void*)0;
        for (p_71.f4 = 4; (p_71.f4 >= 47); ++p_71.f4)
        {
            int32_t *l_114 = &l_84;
            int32_t l_123[10][1][5] = {{{0xE0FD4834L,0xE0FD4834L,(-10L),(-4L),0xA2B5784CL}},{{1L,0xE0FD4834L,(-1L),0L,0xA2B5784CL}},{{0xE0FD4834L,1L,(-1L),(-4L),(-1L)}},{{0xE0FD4834L,0xE0FD4834L,(-10L),(-4L),0xA2B5784CL}},{{1L,0xE0FD4834L,(-1L),0L,0xA2B5784CL}},{{0xE0FD4834L,1L,(-1L),(-4L),(-1L)}},{{0xE0FD4834L,0xE0FD4834L,(-10L),(-4L),0xA2B5784CL}},{{1L,0xE0FD4834L,(-1L),0L,0xA2B5784CL}},{{0xE0FD4834L,1L,(-1L),(-4L),(-1L)}},{{0xE0FD4834L,0xE0FD4834L,(-10L),(-4L),0xA2B5784CL}}};
            int i, j, k;
            l_116 = (((safe_div_func_uint16_t_u_u((((g_2 ^ (g_83 > g_100)) , ((safe_sub_func_int16_t_s_s((((((*l_114) = (safe_rshift_func_uint16_t_u_u((((*l_99) = (&g_100 == (void*)0)) , ((safe_sub_func_uint64_t_u_u((l_84 ^ g_83), (safe_mul_func_int16_t_s_s((1UL && (((*p_72) & (-9L)) && g_41)), 0UL)))) | 2L)), g_37))) | p_71.f2) | 3UL) & g_41), 0x2B5DL)) >= (-10L))) && l_115), l_101)) >= 0x143BL) == l_101);
            if ((l_101 , l_115))
            {
                uint16_t l_147 = 1UL;
                int64_t l_152[3][4];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_152[i][j] = 0x42A304AAC6DB221BLL;
                }
                for (l_116 = 2; (l_116 <= 7); l_116 += 1)
                {
                    const uint8_t **l_120 = &l_82[7];
                    uint32_t *l_136 = &g_137;
                    int16_t *l_153 = &g_154;
                    int i;
                    for (p_71.f2 = 7; (p_71.f2 >= 1); p_71.f2 -= 1)
                    {
                        const uint8_t **l_119[9][2] = {{(void*)0,&l_82[5]},{(void*)0,&l_82[5]},{(void*)0,&l_82[5]},{(void*)0,&l_82[5]},{(void*)0,&l_82[5]},{(void*)0,&l_82[5]},{(void*)0,&l_82[5]},{(void*)0,&l_82[5]},{(void*)0,&l_82[5]}};
                        const uint8_t ***l_118[7][2][9] = {{{&l_119[2][0],&l_119[7][0],&l_119[7][0],&l_119[4][0],&l_119[0][0],&l_119[4][0],&l_119[0][0],&l_119[4][0],&l_119[0][0]},{&l_119[0][0],&l_119[4][1],&l_119[0][0],&l_119[4][1],&l_119[0][0],&l_119[0][0],&l_119[4][1],&l_119[0][0],&l_119[4][1]}},{{&l_119[0][0],&l_119[4][1],&l_119[1][0],&l_119[7][0],(void*)0,&l_119[0][0],&l_119[7][1],(void*)0,&l_119[1][0]},{&l_119[0][0],&l_119[0][0],&l_119[4][1],&l_119[0][0],&l_119[4][1],&l_119[0][0],&l_119[0][0],&l_119[4][1],&l_119[0][0]}},{{&l_119[0][0],&l_119[4][1],&l_119[0][0],&l_119[0][0],&l_119[2][0],&l_119[6][1],&l_119[7][1],&l_119[1][1],&l_119[0][0]},{&l_119[1][0],&l_119[4][1],&l_119[4][1],&l_119[1][0],&l_119[6][0],&l_119[1][0],&l_119[4][1],&l_119[4][1],&l_119[1][0]}},{{&l_119[3][1],&l_119[4][0],&l_119[1][0],&l_119[0][0],&l_119[7][0],&l_119[1][0],&l_119[0][0],(void*)0,&l_119[0][0]},{&l_119[4][1],&l_119[6][0],&l_119[0][0],&l_119[0][0],&l_119[6][0],&l_119[4][1],&l_119[2][1],&l_119[0][0],&l_119[0][0]}},{{&l_119[3][1],&l_119[0][0],&l_119[0][0],&l_119[7][0],&l_119[2][0],&l_119[1][0],&l_119[3][1],&l_119[4][0],&l_119[1][0]},{&l_119[1][0],&l_119[6][0],&l_119[1][0],&l_119[4][1],&l_119[4][1],&l_119[1][0],&l_119[2][1],&l_119[0][0],&l_119[4][1]}},{{&l_119[0][0],&l_119[4][0],&l_119[0][0],&l_119[6][1],(void*)0,&l_119[6][1],&l_119[0][0],&l_119[4][0],&l_119[0][0]},{&l_119[0][0],&l_119[4][1],&l_119[0][0],&l_119[4][1],&l_119[0][0],&l_119[0][0],&l_119[4][1],&l_119[0][0],&l_119[4][1]}},{{&l_119[0][0],&l_119[4][1],&l_119[1][0],&l_119[7][0],(void*)0,&l_119[0][0],&l_119[7][1],(void*)0,&l_119[1][0]},{&l_119[0][0],&l_119[0][0],&l_119[4][1],&l_119[0][0],&l_119[4][1],&l_119[0][0],&l_119[0][0],&l_119[4][1],&l_119[0][0]}}};
                        int i, j, k;
                        if (g_37)
                            goto lbl_117;
                        (*l_114) = g_5;
                        l_120 = &l_82[p_71.f2];
                        if (g_37)
                            break;
                    }
                    for (p_71.f9 = 7; (p_71.f9 >= 2); p_71.f9 -= 1)
                    {
                        (*l_114) = (p_71.f4 >= (g_83 = 0xE5B1L));
                    }
                    for (g_100 = 7; (g_100 >= 0); g_100 -= 1)
                    {
                        int32_t *l_121 = &l_84;
                        int32_t *l_122[9];
                        int32_t **l_127 = &l_114;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_122[i] = &l_84;
                        g_124--;
                    }
                }
                g_148 = &g_149;
            }
            else
            {
                int16_t *l_173 = (void*)0;
                int16_t *l_174[2][2][5] = {{{&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,(void*)0,&g_154,(void*)0,(void*)0}},{{&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,(void*)0,&g_154,(void*)0,(void*)0}}};
                uint8_t *l_178 = &g_179[5];
                int32_t l_180 = 0x4EF8352AL;
                int32_t *l_181 = &l_123[9][0][1];
                int i, j, k;
                (*l_181) = (safe_lshift_func_int8_t_s_u((((*g_157) = (*p_72)) > l_101), (((safe_mod_func_int64_t_s_s((((p_71.f0 | ((safe_mod_func_int16_t_s_s((!(((**g_149) || ((safe_mul_func_int16_t_s_s(((p_71.f0 && ((safe_unary_minus_func_int16_t_s((1UL ^ (safe_mod_func_int16_t_s_s(p_71.f5, (g_176 = (g_175 = (g_154 = 0x7DCFL)))))))) & ((~(l_84 = ((*l_178) = 0UL))) != g_5))) != (**g_149)), l_180)) < 0x4355L)) >= g_41)), g_37)) , g_2)) | p_71.f1) == 0L), 2UL)) , g_41) >= g_41)));
                (*g_157) |= (safe_div_func_uint8_t_u_u((g_32 >= (l_184 == (void*)0)), (*l_114)));
            }
        }
        (*g_157) |= (&g_100 == (p_71.f4 , p_75));
    }
    else
    {
        return &g_37;
    }
    (*g_157) = ((g_158[0][0][1] >= (p_71.f5 || l_151)) != (safe_div_func_int32_t_s_s((+(safe_div_func_int32_t_s_s((7L ^ ((safe_sub_func_int8_t_s_s((p_71.f1 = (&p_75 == ((*l_192) = &p_75))), (((*l_195) = &g_157) != (void*)0))) , (safe_div_func_int64_t_s_s((safe_add_func_int8_t_s_s(0x76L, g_176)), g_158[2][0][6])))), 0x23432199L))), p_71.f4)));
    (*g_157) |= (*p_72);
    return p_72;
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
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_158[i][j][k], "g_158[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_179[i], "g_179[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_371.f0, "g_371.f0", print_hash_value);
    transparent_crc(g_371.f1, "g_371.f1", print_hash_value);
    transparent_crc(g_371.f2, "g_371.f2", print_hash_value);
    transparent_crc(g_371.f3, "g_371.f3", print_hash_value);
    transparent_crc(g_371.f4, "g_371.f4", print_hash_value);
    transparent_crc(g_371.f5, "g_371.f5", print_hash_value);
    transparent_crc(g_371.f6, "g_371.f6", print_hash_value);
    transparent_crc(g_371.f7, "g_371.f7", print_hash_value);
    transparent_crc(g_371.f8, "g_371.f8", print_hash_value);
    transparent_crc(g_371.f9, "g_371.f9", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_458[i], "g_458[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_505[i], "g_505[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_528.f0, "g_528.f0", print_hash_value);
    transparent_crc(g_528.f1, "g_528.f1", print_hash_value);
    transparent_crc(g_528.f2, "g_528.f2", print_hash_value);
    transparent_crc(g_528.f3, "g_528.f3", print_hash_value);
    transparent_crc(g_528.f4, "g_528.f4", print_hash_value);
    transparent_crc(g_528.f5, "g_528.f5", print_hash_value);
    transparent_crc(g_528.f6, "g_528.f6", print_hash_value);
    transparent_crc(g_528.f7, "g_528.f7", print_hash_value);
    transparent_crc(g_528.f8, "g_528.f8", print_hash_value);
    transparent_crc(g_528.f9, "g_528.f9", print_hash_value);
    transparent_crc(g_530.f0, "g_530.f0", print_hash_value);
    transparent_crc(g_530.f1, "g_530.f1", print_hash_value);
    transparent_crc(g_530.f2, "g_530.f2", print_hash_value);
    transparent_crc(g_530.f3, "g_530.f3", print_hash_value);
    transparent_crc(g_530.f4, "g_530.f4", print_hash_value);
    transparent_crc(g_530.f5, "g_530.f5", print_hash_value);
    transparent_crc(g_530.f6, "g_530.f6", print_hash_value);
    transparent_crc(g_530.f7, "g_530.f7", print_hash_value);
    transparent_crc(g_530.f8, "g_530.f8", print_hash_value);
    transparent_crc(g_530.f9, "g_530.f9", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_1106, "g_1106", print_hash_value);
    transparent_crc(g_1307.f0, "g_1307.f0", print_hash_value);
    transparent_crc(g_1307.f1, "g_1307.f1", print_hash_value);
    transparent_crc(g_1307.f2, "g_1307.f2", print_hash_value);
    transparent_crc(g_1307.f3, "g_1307.f3", print_hash_value);
    transparent_crc(g_1307.f4, "g_1307.f4", print_hash_value);
    transparent_crc(g_1307.f5, "g_1307.f5", print_hash_value);
    transparent_crc(g_1307.f6, "g_1307.f6", print_hash_value);
    transparent_crc(g_1307.f7, "g_1307.f7", print_hash_value);
    transparent_crc(g_1307.f8, "g_1307.f8", print_hash_value);
    transparent_crc(g_1307.f9, "g_1307.f9", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1470[i].f0, "g_1470[i].f0", print_hash_value);
        transparent_crc(g_1470[i].f1, "g_1470[i].f1", print_hash_value);
        transparent_crc(g_1470[i].f2, "g_1470[i].f2", print_hash_value);
        transparent_crc(g_1470[i].f3, "g_1470[i].f3", print_hash_value);
        transparent_crc(g_1470[i].f4, "g_1470[i].f4", print_hash_value);
        transparent_crc(g_1470[i].f5, "g_1470[i].f5", print_hash_value);
        transparent_crc(g_1470[i].f6, "g_1470[i].f6", print_hash_value);
        transparent_crc(g_1470[i].f7, "g_1470[i].f7", print_hash_value);
        transparent_crc(g_1470[i].f8, "g_1470[i].f8", print_hash_value);
        transparent_crc(g_1470[i].f9, "g_1470[i].f9", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
