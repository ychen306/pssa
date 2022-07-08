// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 55FFF8F
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
   const int32_t f0;
   int8_t f1;
   uint32_t f2;
   int32_t f3;
};


static uint32_t g_16 = 0UL;
static union U0 g_24[8] = {{7L},{7L},{7L},{7L},{7L},{7L},{7L},{7L}};
static union U0 *g_23 = &g_24[0];
static uint64_t g_51[2] = {18446744073709551615UL,18446744073709551615UL};
static int32_t g_59 = 0L;
static uint8_t g_89 = 255UL;
static const uint64_t **g_92 = (void*)0;
static uint64_t g_106 = 18446744073709551609UL;
static uint32_t g_124[6][7][6] = {{{4294967295UL,0x7B860488L,0xC112068EL,0xC007EE71L,4294967292UL,4294967294UL},{0x93E630EEL,0xC112068EL,0UL,4294967291UL,0x384F12CAL,0xE797ADA2L},{0UL,0x4DE99E49L,4294967290UL,1UL,4294967295UL,4294967288UL},{0UL,0xE2E988A7L,4294967295UL,0x0E5BD8EBL,0x0E5BD8EBL,4294967295UL},{4294967288UL,4294967288UL,0UL,0x3220CCB0L,3UL,0UL},{0x463C3EAAL,0UL,7UL,4294967292UL,0xF1E831F0L,0UL},{0xFF801100L,0x7B860488L,0x8B88EAD4L,4294967291UL,0UL,0x74787CBDL}},{{7UL,4294967291UL,4294967295UL,0xBDE39F74L,0x8B88EAD4L,0xC007EE71L},{0xBDE39F74L,0x8B88EAD4L,0xC007EE71L,0x74787CBDL,0xB3BAA24DL,0UL},{0UL,0xF1E831F0L,0UL,0x384F12CAL,1UL,0xBB8C6554L},{1UL,0xE797ADA2L,4294967288UL,0UL,4294967288UL,0xE797ADA2L},{3UL,0x384F12CAL,4UL,0x751BA34BL,0x4DE99E49L,0xE2E988A7L},{0xB3BAA24DL,4294967290UL,0x39075E30L,0x1CF52F59L,1UL,4294967291UL},{0xBB8C6554L,4294967290UL,4294967295UL,0x8B88EAD4L,0x4DE99E49L,1UL}},{{0xC007EE71L,0x384F12CAL,0x463C3EAAL,4UL,4294967288UL,0x39075E30L},{4294967295UL,0xE797ADA2L,0UL,4294967290UL,1UL,4294967288UL},{0UL,0xF1E831F0L,0x751BA34BL,5UL,0xB3BAA24DL,0x8B88EAD4L},{0x384F12CAL,0x8B88EAD4L,7UL,7UL,0x8B88EAD4L,0x384F12CAL},{0x39D0E3EEL,4294967291UL,0xF1E831F0L,0xC007EE71L,0UL,3UL},{0x4DE99E49L,0x7B860488L,0xBB8C6554L,4294967292UL,0x0E5BD8EBL,0x3220CCB0L},{0x4DE99E49L,4294967294UL,4294967292UL,0xC007EE71L,0xC112068EL,0x7B860488L}},{{0x39D0E3EEL,0UL,0xFF801100L,7UL,4294967295UL,0UL},{0x384F12CAL,0UL,0xBDE39F74L,5UL,0x3220CCB0L,0UL},{0UL,0UL,0x39D0E3EEL,4294967290UL,5UL,0xC112068EL},{4294967295UL,4UL,5UL,4UL,4294967295UL,0xFF801100L},{0xC007EE71L,0x1CF52F59L,0UL,0x8B88EAD4L,4294967290UL,0xF1E831F0L},{0xBB8C6554L,0xC112068EL,4294967291UL,0x1CF52F59L,3UL,0xF1E831F0L},{0xB3BAA24DL,0xBDE39F74L,0UL,0x751BA34BL,4294967294UL,0xFF801100L}},{{3UL,4294967295UL,5UL,0UL,0xBDE39F74L,0xC112068EL},{1UL,0xC007EE71L,0x39D0E3EEL,0x384F12CAL,0xBB8C6554L,0UL},{0UL,0x93E630EEL,0xBDE39F74L,0x74787CBDL,0UL,0UL},{0xBDE39F74L,0xFF801100L,0xFF801100L,0xBDE39F74L,0UL,0x7B860488L},{7UL,0xB3BAA24DL,4294967292UL,4294967291UL,0xC007EE71L,0x3220CCB0L},{0xFF801100L,0x463C3EAAL,0xBB8C6554L,4294967295UL,0xC007EE71L,3UL},{0x7B860488L,0xB3BAA24DL,0xF1E831F0L,1UL,0UL,0x384F12CAL}},{{0UL,0xFF801100L,7UL,4294967295UL,0UL,0x8B88EAD4L},{4294967295UL,0x93E630EEL,0x751BA34BL,3UL,0xBB8C6554L,4294967288UL},{4294967294UL,0xC007EE71L,0UL,0x39075E30L,0xBDE39F74L,0xF1E831F0L},{0x7B860488L,0xC007EE71L,0x7B860488L,0UL,0xE797ADA2L,1UL},{0x39D0E3EEL,0x4DE99E49L,0xC007EE71L,0xE797ADA2L,0xC112068EL,0x39075E30L},{0xBB8C6554L,4UL,0xF1E831F0L,0xE797ADA2L,0UL,0UL},{0x39D0E3EEL,0UL,4294967290UL,0UL,0x751BA34BL,0xBB8C6554L}}};
static int32_t g_129 = 1L;
static int32_t g_161 = 1L;
static uint32_t g_162 = 0x257D9C2FL;
static uint8_t *g_171[7][7][5] = {{{&g_89,(void*)0,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,(void*)0,&g_89,&g_89},{&g_89,(void*)0,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,(void*)0}},{{&g_89,&g_89,(void*)0,&g_89,&g_89},{&g_89,(void*)0,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,(void*)0,&g_89,&g_89},{&g_89,(void*)0,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,&g_89}},{{&g_89,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,(void*)0,&g_89,&g_89},{&g_89,(void*)0,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,(void*)0,&g_89,&g_89},{&g_89,(void*)0,&g_89,&g_89,(void*)0}},{{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,(void*)0,&g_89,&g_89},{&g_89,(void*)0,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,(void*)0,&g_89,&g_89}},{{&g_89,(void*)0,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,(void*)0,&g_89,&g_89},{&g_89,(void*)0,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,(void*)0}},{{(void*)0,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,(void*)0},{(void*)0,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,(void*)0}},{{&g_89,&g_89,&g_89,&g_89,(void*)0},{(void*)0,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,(void*)0},{(void*)0,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,(void*)0}}};
static uint8_t **g_170 = &g_171[4][1][3];
static int8_t g_179[4] = {0x59L,0x59L,0x59L,0x59L};
static int64_t g_183[8][5] = {{0x690D09DF1B6C9F75LL,0x09DEB9B2B9B809EDLL,0x690D09DF1B6C9F75LL,0x09DEB9B2B9B809EDLL,0x690D09DF1B6C9F75LL},{0xE72653B0F068E203LL,(-1L),(-1L),0xE72653B0F068E203LL,0xE72653B0F068E203LL},{0L,0x09DEB9B2B9B809EDLL,0L,0x09DEB9B2B9B809EDLL,0L},{0xE72653B0F068E203LL,0xE72653B0F068E203LL,(-1L),(-1L),0xE72653B0F068E203LL},{0x690D09DF1B6C9F75LL,0x09DEB9B2B9B809EDLL,0x690D09DF1B6C9F75LL,0x09DEB9B2B9B809EDLL,0x690D09DF1B6C9F75LL},{0xE72653B0F068E203LL,(-1L),(-1L),0xE72653B0F068E203LL,0xE72653B0F068E203LL},{0L,0x09DEB9B2B9B809EDLL,0L,0x09DEB9B2B9B809EDLL,0L},{0xE72653B0F068E203LL,0xE72653B0F068E203LL,(-1L),(-1L),0xE72653B0F068E203LL}};
static int32_t **g_193 = (void*)0;
static int32_t ***g_192[6] = {&g_193,&g_193,&g_193,&g_193,&g_193,&g_193};
static int32_t ***g_198 = &g_193;
static int64_t g_219 = 5L;
static uint8_t **g_247 = &g_171[4][1][3];
static uint8_t ***g_246 = &g_247;
static int8_t *g_279 = &g_179[0];
static int16_t g_284 = 0x75B0L;
static uint16_t g_288[6][6][1] = {{{0UL},{0xE651L},{0UL},{1UL},{0xA8FCL},{65531UL}},{{0x5BCBL},{0x0DD7L},{7UL},{0UL},{0UL},{7UL}},{{0x0DD7L},{0x5BCBL},{65531UL},{0xA8FCL},{1UL},{0UL}},{{0xE651L},{0UL},{1UL},{0xA8FCL},{65531UL},{0x5BCBL}},{{0x0DD7L},{7UL},{0UL},{0UL},{7UL},{0x0DD7L}},{{0x5BCBL},{65531UL},{0xA8FCL},{1UL},{0UL},{0xE651L}}};
static uint16_t g_291 = 1UL;
static uint16_t g_465[5] = {65526UL,65526UL,65526UL,65526UL,65526UL};
static int32_t g_491 = 0x95EC7957L;
static union U0 **g_503 = &g_23;
static union U0 ***g_502[1][7] = {{&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503}};
static int64_t g_567 = 0xA08EB1103292EA32LL;
static uint32_t g_568[5] = {7UL,7UL,7UL,7UL,7UL};
static union U0 g_572 = {0x027575E4L};
static int16_t *g_574 = &g_284;
static int16_t **g_573 = &g_574;
static uint16_t g_596 = 0UL;
static uint64_t *g_663 = &g_51[0];
static const int16_t g_741 = (-9L);
static const union U0 ***g_795 = (void*)0;
static const union U0 ****g_794 = &g_795;
static const int64_t g_818 = 4L;
static int32_t g_841 = 6L;
static uint16_t g_848 = 0x59BFL;
static uint8_t g_886 = 6UL;
static const int16_t g_893[4][5][2] = {{{(-10L),0x913CL},{0L,(-10L)},{0L,0L},{0L,(-10L)},{(-1L),0L}},{{0L,0L},{(-1L),0L},{(-10L),(-10L)},{(-10L),0L},{(-1L),0L}},{{0L,0L},{(-1L),0L},{(-10L),(-10L)},{(-10L),0L},{(-1L),0L}},{{0L,0L},{(-1L),0L},{(-10L),(-10L)},{(-10L),0L},{(-1L),0L}}};
static uint32_t *g_946 = &g_572.f2;
static int32_t g_981[4][6] = {{0x7810DC70L,0L,(-6L),(-6L),0L,0x7810DC70L},{1L,0x7810DC70L,(-6L),0x7810DC70L,1L,1L},{0x3446AAAEL,0x7810DC70L,0x7810DC70L,0x3446AAAEL,0L,0x3446AAAEL},{0x3446AAAEL,0L,0x3446AAAEL,0x7810DC70L,0x7810DC70L,0x3446AAAEL}};
static int8_t g_1041 = 0x9EL;
static uint16_t g_1048 = 65532UL;
static const uint32_t g_1080[6][8] = {{0x0A31CDBDL,6UL,6UL,0x0A31CDBDL,6UL,6UL,0x0A31CDBDL,6UL},{0x0A31CDBDL,0x0A31CDBDL,7UL,0x0A31CDBDL,0x0A31CDBDL,7UL,0x0A31CDBDL,0x0A31CDBDL},{6UL,0x0A31CDBDL,6UL,6UL,0x0A31CDBDL,6UL,6UL,0x0A31CDBDL},{0x0A31CDBDL,6UL,6UL,0x0A31CDBDL,6UL,6UL,0x0A31CDBDL,6UL},{0x0A31CDBDL,0x0A31CDBDL,7UL,0x0A31CDBDL,0x0A31CDBDL,7UL,0x0A31CDBDL,0x0A31CDBDL},{6UL,0x0A31CDBDL,6UL,6UL,0x0A31CDBDL,6UL,6UL,0x0A31CDBDL}};
static int32_t g_1091[5] = {0xE71EC5D3L,0xE71EC5D3L,0xE71EC5D3L,0xE71EC5D3L,0xE71EC5D3L};
static const int32_t *****g_1094 = (void*)0;
static uint32_t g_1142 = 4294967295UL;
static uint64_t g_1171 = 0x4A6A024DDB13C5ABLL;
static uint16_t *g_1200 = &g_596;
static uint16_t **g_1199 = &g_1200;
static uint8_t g_1261 = 0xBFL;
static int32_t *g_1309[7][8] = {{(void*)0,&g_161,&g_981[3][2],&g_161,(void*)0,&g_981[3][1],&g_981[3][1],(void*)0},{&g_161,&g_1091[2],&g_1091[2],&g_161,&g_1091[3],(void*)0,&g_1091[3],&g_161},{&g_1091[2],&g_1091[3],&g_1091[2],&g_981[3][1],&g_981[3][2],&g_981[3][2],&g_981[3][1],&g_1091[2]},{&g_1091[3],&g_1091[3],&g_981[3][2],(void*)0,&g_1091[3],(void*)0,&g_981[3][2],&g_1091[3]},{&g_1091[3],&g_1091[2],&g_981[3][1],&g_981[3][2],&g_981[3][2],&g_981[3][1],&g_1091[2],&g_1091[3]},{&g_1091[2],&g_161,&g_1091[3],(void*)0,&g_1091[3],&g_161,&g_1091[2],&g_1091[2]},{&g_161,(void*)0,&g_981[3][1],&g_981[3][1],(void*)0,&g_161,&g_981[3][2],&g_161}};
static int64_t g_1451 = 0L;
static int16_t g_1515 = (-1L);
static int32_t **g_1540 = (void*)0;
static uint32_t g_1593 = 0x39C2334EL;
static uint16_t g_1978 = 5UL;
static int32_t ****g_2020[8] = {&g_192[3],&g_192[3],&g_192[3],&g_192[3],&g_192[3],&g_192[3],&g_192[3],&g_192[3]};
static union U0 * const *g_2114 = (void*)0;
static union U0 * const **g_2113 = &g_2114;
static union U0 * const ***g_2112 = &g_2113;
static union U0 g_2134 = {0xA266237AL};
static uint32_t **g_2164 = &g_946;
static uint32_t *** const g_2163 = &g_2164;
static uint64_t g_2224 = 8UL;
static const uint16_t g_2239 = 0x6DBFL;
static const uint16_t g_2314 = 1UL;
static const uint16_t *g_2313[9][2] = {{&g_2314,&g_2314},{&g_2314,&g_2314},{&g_2314,&g_2314},{&g_2314,&g_2314},{&g_2314,&g_2314},{&g_2314,&g_2314},{&g_2314,&g_2314},{&g_2314,&g_2314},{&g_2314,&g_2314}};
static union U0 *g_2497 = &g_24[0];
static const int32_t g_2501 = (-7L);
static int8_t g_2539 = 0xB2L;



static int16_t func_1(void);
static union U0 func_3(uint32_t p_4, int32_t p_5, union U0 * p_6, uint64_t p_7);
static uint32_t func_10(int32_t p_11, int32_t p_12, union U0 * p_13);
static uint16_t func_17(union U0 * p_18, int8_t p_19, const union U0 * p_20, int32_t p_21, uint64_t p_22);
static const union U0 * func_25(union U0 * p_26, union U0 * const p_27, const union U0 * p_28);
static int32_t func_29(union U0 p_30);
static union U0 func_31(union U0 * p_32);
static union U0 * func_33(uint16_t p_34, uint8_t p_35, union U0 * p_36, uint8_t p_37);
static int32_t func_40(union U0 * const p_41, int16_t p_42, union U0 p_43, uint32_t p_44, uint16_t p_45);
static union U0 * func_46(int8_t p_47, uint8_t p_48, uint8_t p_49);
# 122 "<stdin>"
static int16_t func_1(void)
{
    uint32_t l_2 = 2UL;
    uint32_t l_60 = 0x394D2570L;
    uint64_t l_1277 = 1UL;
    const union U0 *l_1287 = &g_24[0];
    int16_t l_1689[3];
    union U0 *l_1726 = (void*)0;
    int32_t l_2522[3][2] = {{0x3790B324L,(-1L)},{0x3790B324L,0x3790B324L},{(-1L),0x3790B324L}};
    uint16_t l_2531 = 0x3CBDL;
    uint32_t l_2536[2][7][6] = {{{4294967293UL,4294967288UL,0UL,4294967295UL,4294967295UL,0UL},{4294967293UL,0xD90FC0F5L,4294967295UL,4294967294UL,4294967293UL,0UL},{0x1F8A70DBL,0xD90FC0F5L,4294967288UL,0x1F991E30L,4294967295UL,4294967295UL},{0x22EDDC5AL,4294967288UL,4294967288UL,0x22EDDC5AL,0xD90FC0F5L,0UL},{4294967294UL,0xD56804AEL,4294967295UL,0x22EDDC5AL,0UL,0UL},{0x22EDDC5AL,0UL,0UL,0x1F991E30L,0UL,0xD56804AEL},{0x1F8A70DBL,0xD56804AEL,0xD90FC0F5L,4294967294UL,0xD90FC0F5L,0xD56804AEL}},{{4294967293UL,4294967288UL,0UL,4294967295UL,4294967295UL,0UL},{4294967293UL,0xD90FC0F5L,4294967295UL,4294967294UL,4294967293UL,0UL},{0x1F8A70DBL,0xD90FC0F5L,4294967288UL,0x1F991E30L,4294967295UL,4294967295UL},{0x22EDDC5AL,4294967288UL,4294967288UL,0x22EDDC5AL,0xD90FC0F5L,0UL},{4294967294UL,0xD56804AEL,4294967295UL,0x22EDDC5AL,0UL,0UL},{0x22EDDC5AL,0UL,0UL,0x1F991E30L,0UL,0xD56804AEL},{0x1F8A70DBL,0xD56804AEL,0xD90FC0F5L,4294967294UL,0xD90FC0F5L,0xD56804AEL}}};
    uint16_t l_2540 = 0x4C94L;
    uint8_t ***l_2543[4][3][4] = {{{(void*)0,(void*)0,(void*)0,&g_170},{(void*)0,&g_170,(void*)0,&g_247},{(void*)0,(void*)0,&g_247,&g_247}},{{&g_247,(void*)0,&g_247,(void*)0},{&g_170,(void*)0,&g_247,&g_247},{&g_247,&g_247,&g_247,&g_247}},{{(void*)0,&g_170,(void*)0,&g_247},{(void*)0,&g_247,(void*)0,(void*)0},{(void*)0,&g_247,&g_170,(void*)0}},{{&g_247,&g_247,(void*)0,&g_247},{&g_170,&g_170,&g_170,&g_247},{(void*)0,&g_247,&g_247,&g_247}}};
    uint8_t ****l_2544 = &l_2543[1][1][3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1689[i] = (-1L);
    if (l_2)
    {
        uint64_t *l_50 = &g_51[0];
        int32_t l_56 = (-1L);
        union U0 *l_2133 = &g_2134;
        union U0 **l_2498 = &l_1726;
        const int32_t *l_2500 = &g_2501;
        const int32_t **l_2499 = &l_2500;
        int32_t *l_2502 = &g_981[3][2];
        int32_t l_2530 = 0xBAA8BADDL;
        (*l_2498) = (func_3(l_2, (((safe_add_func_uint32_t_u_u(func_10(((safe_mul_func_uint16_t_u_u(g_16, func_17(g_23, g_24[0].f3, func_25(&g_24[0], ((0xBC42206DL != func_29(func_31(func_33(((safe_mul_func_int16_t_s_s(((*g_574) = ((func_40(func_46(((++(*l_50)) & ((0x9C93E32883E731E7LL < ((safe_sub_func_uint64_t_u_u(l_56, (g_59 = ((safe_mul_func_int8_t_s_s((l_2 & g_24[0].f2), 0L)) & (-1L))))) , 0x31CD1AC8C6DCFF2FLL)) , l_60)), l_2, g_24[0].f1), g_124[5][1][4], (**g_503), g_491, g_183[6][3]) ^ l_60) , l_1277)), g_465[1])) , (*g_1200)), l_60, (*g_503), l_56)))) , (void*)0), l_1287), l_60, l_1689[0]))) < 4UL), l_60, l_1726), l_56)) & l_1689[0]) , 0L), l_2133, l_1689[1]) , g_2497);
        if (g_2134.f3)
            goto lbl_2503;
lbl_2503:
        (*l_2502) = (l_56 ^= (((*l_2499) = &g_841) == (void*)0));
        for (g_2224 = 0; (g_2224 <= 1); g_2224 += 1)
        {
            int32_t *l_2506 = &g_161;
            int32_t *l_2507 = &g_1091[3];
            int32_t *l_2508 = &g_1091[(g_2224 + 2)];
            int32_t *l_2509 = (void*)0;
            int32_t *l_2510 = &l_56;
            int32_t *l_2511 = &g_1091[(g_2224 + 2)];
            int32_t *l_2512 = &l_56;
            int32_t *l_2513 = &g_1091[3];
            int32_t *l_2514 = &g_129;
            int32_t *l_2515 = &g_59;
            int32_t *l_2516 = (void*)0;
            int32_t *l_2517 = &g_59;
            int32_t *l_2518 = (void*)0;
            int32_t *l_2519 = (void*)0;
            int32_t *l_2520 = &g_1091[(g_2224 + 2)];
            int32_t *l_2521 = &g_59;
            int32_t *l_2523 = &g_981[3][2];
            int32_t *l_2524 = &l_2522[2][0];
            int32_t *l_2525 = &g_491;
            int32_t *l_2526 = (void*)0;
            int32_t *l_2527 = &g_1091[3];
            int32_t *l_2528 = &g_1091[(g_2224 + 2)];
            int32_t *l_2529[10][10][2] = {{{(void*)0,&g_981[3][2]},{&l_2522[2][1],&g_981[3][2]},{(void*)0,&g_59},{(void*)0,&l_56},{&g_161,&g_1091[3]},{&g_1091[3],(void*)0},{&l_2522[2][0],&g_161},{&l_2522[2][0],&g_129},{&l_2522[1][1],&g_129},{&g_981[3][2],(void*)0}},{{&l_2522[1][1],&g_59},{&g_161,&g_1091[3]},{(void*)0,(void*)0},{&g_981[1][3],&l_56},{&g_129,&g_1091[4]},{&g_129,(void*)0},{&l_56,&g_161},{&g_981[3][2],&g_981[3][2]},{&g_59,&l_56},{&g_129,&l_2522[2][0]}},{{&g_129,(void*)0},{(void*)0,&g_129},{&l_56,&g_1091[3]},{&l_56,&g_129},{(void*)0,(void*)0},{&g_129,&l_2522[2][0]},{&g_129,&g_1091[3]},{&g_981[3][2],&g_1091[4]},{&g_1091[4],&l_2522[1][1]},{&l_2522[1][1],(void*)0}},{{(void*)0,&l_56},{&l_2522[2][0],&g_981[3][2]},{&l_56,&g_129},{&g_59,(void*)0},{&l_56,&g_981[3][2]},{&g_129,&g_161},{&g_129,&l_2522[2][0]},{&g_491,(void*)0},{&l_56,&l_56},{&g_981[3][2],&l_2522[2][1]}},{{&g_1091[(g_2224 + 2)],(void*)0},{&l_2522[1][1],&g_59},{&l_2522[2][1],&l_2522[2][0]},{&g_129,&g_129},{&g_1091[3],&g_129},{&g_129,&l_2522[2][0]},{&l_2522[2][1],&g_59},{&l_2522[1][1],(void*)0},{&g_1091[(g_2224 + 2)],&l_2522[2][1]},{&g_981[3][2],&l_56}},{{&l_56,(void*)0},{&g_491,&l_2522[2][0]},{&g_129,&g_161},{&g_129,&g_981[3][2]},{&l_56,(void*)0},{&g_59,&g_129},{&l_56,&g_981[3][2]},{&l_2522[2][0],&l_56},{(void*)0,(void*)0},{&l_2522[1][1],&l_2522[1][1]}},{{&g_1091[4],&g_1091[4]},{&g_981[3][2],&g_1091[3]},{&l_56,&g_981[3][2]},{(void*)0,&g_1091[3]},{&g_161,(void*)0},{&g_981[3][2],&g_1091[(g_2224 + 2)]},{&g_981[3][2],(void*)0},{&g_161,&g_1091[3]},{(void*)0,&g_981[3][2]},{&l_56,&g_1091[3]}},{{&g_981[3][2],&g_1091[4]},{&g_1091[4],&l_2522[1][1]},{&l_2522[1][1],(void*)0},{(void*)0,&l_56},{&l_2522[2][0],&g_981[3][2]},{&l_56,&g_129},{&g_59,(void*)0},{&l_56,&g_981[3][2]},{&g_129,&g_161},{&g_129,&l_2522[2][0]}},{{&g_491,(void*)0},{&l_56,&l_56},{&g_981[3][2],&l_2522[2][1]},{&g_1091[(g_2224 + 2)],(void*)0},{&l_2522[1][1],&g_59},{&l_2522[2][1],&l_2522[2][0]},{&g_129,&g_129},{&g_1091[3],&g_129},{&g_129,&l_2522[2][0]},{&l_2522[2][1],&g_59}},{{&l_2522[1][1],(void*)0},{&g_1091[(g_2224 + 2)],&l_2522[2][1]},{&g_981[3][2],&l_56},{&l_56,(void*)0},{&g_491,&l_2522[2][0]},{&g_129,&g_161},{&g_129,&g_981[3][2]},{&l_56,(void*)0},{&g_59,&g_129},{&l_56,&g_981[3][2]}}};
            int i, j, k;
            g_1091[(g_2224 + 2)] = (safe_lshift_func_uint16_t_u_u(0x02E2L, 12));
            l_2531--;
            if (g_1091[(g_2224 + 1)])
                break;
        }
    }
    else
    {
        int32_t *l_2534 = &g_129;
        int32_t *l_2535[2];
        int i;
        for (i = 0; i < 2; i++)
            l_2535[i] = &g_129;
        --l_2536[0][1][0];
        --l_2540;
    }
    l_2522[1][1] &= (((*l_2544) = l_2543[1][1][3]) != (void*)0);
    return (*g_574);
}







static union U0 func_3(uint32_t p_4, int32_t p_5, union U0 * p_6, uint64_t p_7)
{
    uint16_t l_2135 = 1UL;
    int32_t *l_2136 = &g_1091[3];
    uint8_t ***l_2137 = (void*)0;
    union U0 **l_2141 = &g_23;
    int32_t l_2153 = 0xB61A870DL;
    int32_t l_2155 = 0L;
    int32_t l_2157 = 0x2D5A0CA3L;
    int32_t l_2158[7][5][7] = {{{(-1L),0x583559A1L,0x20FBAEA8L,(-10L),(-2L),0xBD0E14EDL,0x1BC9CADEL},{3L,0x1BC9CADEL,(-10L),1L,(-8L),1L,(-10L)},{(-1L),(-1L),0x1ED1F55DL,1L,0x0E5EF0EDL,0x0EDD46B2L,(-4L)},{(-8L),0x0E5EF0EDL,3L,(-10L),(-1L),0x1BC9CADEL,0x583559A1L},{0xD7BFB214L,0x406031C6L,0x0EDD46B2L,0L,0x0E5EF0EDL,(-10L),0x0E5EF0EDL}},{{(-2L),(-1L),(-1L),(-2L),(-8L),(-10L),0x20FBAEA8L},{0L,0x1BC9CADEL,3L,(-4L),0xBD0E14EDL,0x583559A1L,(-1L)},{(-10L),0L,1L,(-1L),0L,0x1BC9CADEL,0xD7BFB214L},{(-1L),0x20FBAEA8L,0L,0L,0x20FBAEA8L,(-1L),1L},{(-1L),(-10L),0x583559A1L,0L,(-2L),0x0E5EF0EDL,0x1ED1F55DL}},{{(-10L),0xD7BFB214L,0x1ED1F55DL,0x3662A07EL,(-10L),0x406031C6L,(-2L)},{(-10L),(-10L),(-1L),0x0EDD46B2L,0x0EDD46B2L,(-1L),(-10L)},{0xBD0E14EDL,0x20FBAEA8L,(-1L),0x406031C6L,(-10L),0x0EDD46B2L,0x583559A1L},{(-4L),0L,0x1ED1F55DL,0x1BC9CADEL,(-8L),3L,0x3662A07EL},{(-1L),0x1BC9CADEL,0x583559A1L,0x406031C6L,0x1ED1F55DL,0x1ED1F55DL,0x406031C6L}},{{0L,0x3662A07EL,0L,0x0EDD46B2L,0x1ED1F55DL,(-10L),0xBD0E14EDL},{0L,3L,1L,0x3662A07EL,(-8L),0x20FBAEA8L,0x0E5EF0EDL},{0x3662A07EL,1L,3L,0L,(-10L),(-10L),(-10L)},{0x0EDD46B2L,0L,0x3662A07EL,0L,0x0EDD46B2L,0x1ED1F55DL,(-10L)},{0x406031C6L,0x583559A1L,0x1BC9CADEL,(-1L),(-10L),3L,0x0E5EF0EDL}},{{0x1BC9CADEL,0x1ED1F55DL,0L,(-4L),(-2L),0x0EDD46B2L,0xBD0E14EDL},{0x406031C6L,(-1L),0x20FBAEA8L,0xBD0E14EDL,0x20FBAEA8L,(-1L),0x406031C6L},{0x0EDD46B2L,(-1L),(-10L),(-10L),0L,0x406031C6L,0x3662A07EL},{0x3662A07EL,0x1ED1F55DL,0xD7BFB214L,(-10L),0xBD0E14EDL,0x0E5EF0EDL,0x583559A1L},{0L,0x583559A1L,(-10L),(-1L),(-1L),(-1L),(-10L)}},{{0L,0L,0x20FBAEA8L,(-1L),1L,0x1BC9CADEL,(-2L)},{(-1L),1L,0L,(-10L),0x3662A07EL,0x583559A1L,0x1ED1F55DL},{(-4L),3L,0x1BC9CADEL,(-10L),1L,(-8L),1L},{0xBD0E14EDL,0x3662A07EL,0x3662A07EL,0xBD0E14EDL,(-1L),(-8L),0xD7BFB214L},{(-10L),0x1BC9CADEL,3L,(-4L),0xBD0E14EDL,0x583559A1L,(-1L)}},{{(-10L),0L,1L,(-1L),0L,0x1BC9CADEL,0xD7BFB214L},{(-1L),0x20FBAEA8L,0L,0L,0x20FBAEA8L,(-1L),1L},{(-1L),(-10L),0x583559A1L,0L,(-2L),0x0E5EF0EDL,0x1ED1F55DL},{(-10L),0xD7BFB214L,0x1ED1F55DL,(-1L),(-10L),3L,0xBD0E14EDL},{(-10L),0x0EDD46B2L,0x3662A07EL,0x1BC9CADEL,0x1BC9CADEL,0x3662A07EL,0x0EDD46B2L}}};
    uint64_t l_2160 = 0xF2B2FFAFC6703545LL;
    uint32_t *l_2188 = &g_1142;
    uint32_t * const *l_2187 = &l_2188;
    uint8_t l_2234[5][6][8] = {{{1UL,255UL,255UL,0x5BL,0x54L,8UL,0x60L,255UL},{0xE7L,0x06L,0xB8L,248UL,8UL,0x06L,255UL,3UL},{255UL,0xE7L,250UL,255UL,0x7BL,255UL,6UL,6UL},{0x5BL,6UL,249UL,249UL,6UL,0x5BL,0x06L,0xDFL},{0xE7L,255UL,0UL,0xF8L,0x60L,0x82L,0x28L,0xAAL},{0x7BL,0xDFL,0x09L,0xF8L,0x51L,3UL,0x6BL,0xDFL}},{{3UL,0x51L,0x69L,249UL,0xC5L,0x9FL,1UL,6UL},{0UL,0x06L,0x9EL,255UL,3UL,1UL,0x7BL,3UL},{248UL,255UL,0x58L,248UL,0xDFL,1UL,0x6BL,255UL},{0x9EL,0xC5L,0x82L,0x5BL,255UL,0xB8L,3UL,0x54L},{0xF8L,0xAAL,0UL,0x54L,0UL,0xAAL,0xF8L,249UL},{0x51L,255UL,0x13L,0xC5L,248UL,0x76L,6UL,0UL}},{{255UL,0x54L,0x60L,0x6BL,248UL,0x9FL,0x6BL,0x54L},{0x51L,255UL,0xB8L,0UL,0UL,0x06L,0x54L,0x82L},{0xF8L,0xDFL,252UL,0xDBL,255UL,0x09L,255UL,0x6BL},{0x9EL,0UL,0x9FL,255UL,0xDFL,0x5BL,0xB8L,0x54L},{248UL,8UL,0x06L,255UL,3UL,0UL,0UL,255UL},{0UL,0xE7L,254UL,0xC5L,0xC5L,254UL,0xE7L,0UL}},{{3UL,0xF8L,0x9FL,0x60L,0x51L,8UL,0x69L,0x54L},{0x7BL,0x6BL,255UL,255UL,0x60L,8UL,0x54L,0x5BL},{0xE7L,0xF8L,0x39L,248UL,6UL,254UL,255UL,0x28L},{0x5BL,0xE7L,0x60L,0x69L,0x7BL,0UL,8UL,6UL},{255UL,8UL,249UL,0UL,0x05L,250UL,0x06L,5UL},{3UL,0x69L,0xDFL,0x06L,249UL,0xF8L,0xAAL,0UL}},{{1UL,255UL,3UL,254UL,1UL,254UL,3UL,255UL},{0xAAL,0x76L,252UL,0x9FL,255UL,0x39L,0xFBL,0x05L},{0x9FL,0x5BL,0UL,255UL,0xAAL,248UL,0xFBL,0xAAL},{0x39L,255UL,252UL,0x39L,255UL,255UL,3UL,0x60L},{255UL,255UL,3UL,0x60L,0x09L,0x39L,0xAAL,0x74L},{0x06L,0UL,0xDFL,249UL,0x9EL,0xDBL,0x06L,0x9FL}}};
    int8_t l_2236 = 0x20L;
    int32_t *l_2401 = (void*)0;
    int32_t **l_2400[10] = {(void*)0,&l_2401,&l_2401,(void*)0,&l_2401,(void*)0,&l_2401,&l_2401,(void*)0,&l_2401};
    int32_t l_2423 = (-1L);
    int32_t l_2424[7][1][8] = {{{0x1B4CED5FL,0x008AAB26L,0x008AAB26L,0x1B4CED5FL,8L,0x1B4CED5FL,0x008AAB26L,0x008AAB26L}},{{0x008AAB26L,8L,0L,0L,8L,0x008AAB26L,8L,0L}},{{0x1B4CED5FL,8L,0x1B4CED5FL,0x008AAB26L,0x008AAB26L,0x1B4CED5FL,8L,0x1B4CED5FL}},{{0x5C898F19L,0x008AAB26L,0L,0x008AAB26L,0x5C898F19L,0x5C898F19L,0x008AAB26L,0L}},{{0x5C898F19L,0x5C898F19L,0x008AAB26L,0L,0x008AAB26L,0x5C898F19L,0x5C898F19L,0x008AAB26L}},{{0x1B4CED5FL,0x008AAB26L,0x008AAB26L,0x1B4CED5FL,8L,0x1B4CED5FL,0x008AAB26L,0x008AAB26L}},{{0x008AAB26L,8L,0L,0L,8L,0x008AAB26L,8L,0L}}};
    int32_t *l_2452 = &l_2155;
    union U0 l_2496[9] = {{0x58FBD499L},{0x58FBD499L},{0x58FBD499L},{0x58FBD499L},{0x58FBD499L},{0x58FBD499L},{0x58FBD499L},{0x58FBD499L},{0x58FBD499L}};
    int i, j, k;
    if (((*l_2136) = (l_2135 = (p_4 , 0x1CCE31C6L))))
    {
        uint8_t ***l_2138 = &g_247;
        uint8_t l_2142 = 0xB7L;
        int32_t l_2147 = (-8L);
        int32_t l_2148 = 0x9E1FA4D6L;
        int32_t l_2152 = 0xE247A6F8L;
        int32_t l_2154 = 0L;
        int32_t l_2156[5][4];
        uint32_t ***l_2166[8][7] = {{(void*)0,&g_2164,(void*)0,&g_2164,(void*)0,&g_2164,(void*)0},{&g_2164,&g_2164,&g_2164,&g_2164,&g_2164,&g_2164,&g_2164},{(void*)0,&g_2164,(void*)0,&g_2164,(void*)0,&g_2164,(void*)0},{&g_2164,&g_2164,&g_2164,&g_2164,&g_2164,&g_2164,&g_2164},{(void*)0,&g_2164,(void*)0,&g_2164,(void*)0,&g_2164,(void*)0},{&g_2164,&g_2164,&g_2164,&g_2164,&g_2164,&g_2164,&g_2164},{(void*)0,&g_2164,(void*)0,&g_2164,(void*)0,&g_2164,(void*)0},{&g_2164,&g_2164,&g_2164,&g_2164,&g_2164,&g_2164,&g_2164}};
        uint32_t ****l_2165 = &l_2166[0][5];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
                l_2156[i][j] = 0L;
        }
        if (((p_5 , l_2137) == l_2138))
        {
            int32_t l_2146 = 0L;
            for (g_567 = 20; (g_567 < 24); ++g_567)
            {
                l_2142 |= ((*l_2136) = ((l_2141 == &p_6) && g_106));
                (*l_2136) ^= p_7;
                l_2146 ^= ((~((**g_1199)++)) & 0x91F53D3AF3EE60F8LL);
                if (l_2142)
                    break;
            }
            return (*p_6);
        }
        else
        {
            int32_t *l_2149 = &l_2147;
            int32_t *l_2150 = (void*)0;
            int32_t *l_2151[6][8] = {{(void*)0,&l_2148,(void*)0,&l_2148,(void*)0,&g_1091[3],&g_1091[3],(void*)0},{&l_2148,&g_1091[4],&g_1091[4],&l_2148,&l_2148,(void*)0,&l_2148,&l_2148},{&g_1091[4],&l_2148,&g_1091[4],&g_1091[3],(void*)0,(void*)0,&g_1091[3],&g_1091[4]},{&l_2148,&l_2148,(void*)0,(void*)0,&l_2147,(void*)0,(void*)0,&l_2148},{&l_2148,&g_1091[4],&g_1091[3],(void*)0,(void*)0,&g_1091[3],&g_1091[4],&l_2148},{&g_1091[4],&l_2148,&l_2148,(void*)0,&l_2148,&l_2148,&g_1091[4],&g_1091[4]}};
            int64_t l_2159 = 2L;
            int i, j;
            l_2160--;
        }
        (*l_2165) = g_2163;
    }
    else
    {
        uint32_t l_2171 = 0xB492BCE1L;
        uint32_t l_2181 = 0xDC3504ABL;
        uint32_t * const **l_2189 = &l_2187;
        int32_t l_2260 = (-5L);
        int32_t l_2266 = (-1L);
        union U0 l_2354 = {0xF368AB13L};
        uint8_t ** const *l_2361 = (void*)0;
        int8_t l_2364 = 0x6EL;
        int32_t l_2365 = 0x8DDAEBC9L;
        int32_t l_2366 = 0x1C677DE0L;
        uint32_t l_2367 = 0x41E91BFCL;
        int32_t *l_2394 = &l_2266;
        uint64_t l_2425 = 1UL;
        int16_t l_2494 = (-1L);
lbl_2426:
        (*l_2136) = (safe_mod_func_int8_t_s_s((((l_2171 ^ (((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((~((*g_1200) ^= l_2181)), (+((l_2171 && 0x825CCAB75088A454LL) <= (&l_2171 != ((+(*g_663)) , (void*)0)))))), l_2171)) ^ (((*l_2189) = ((safe_add_func_uint16_t_u_u(((~p_4) | (*l_2136)), l_2181)) , l_2187)) != (void*)0)), (*l_2136))), 8)) ^ 7L) , (void*)0) != (void*)0) != (*g_279))) >= p_4) && (*l_2136)), p_7));
        for (g_848 = 0; (g_848 < 25); g_848++)
        {
            int32_t l_2192 = 0L;
            union U0 **l_2209 = &g_23;
            int32_t l_2254 = 1L;
            int32_t l_2261 = (-1L);
            int32_t l_2265[2][5][5] = {{{1L,0x812756EEL,0x3646EBBAL,0x3646EBBAL,0x812756EEL},{0xC11DD320L,0xD4024034L,1L,(-5L),(-5L)},{0x8921DC29L,0xD8EA76DFL,0x8921DC29L,0x3646EBBAL,0x0C5D0814L},{0x240CD938L,0L,(-5L),0L,0x240CD938L},{0x8921DC29L,1L,0xD8EA76DFL,0x812756EEL,0xD8EA76DFL}},{{0xC11DD320L,0xC11DD320L,(-5L),0x240CD938L,7L},{1L,0x8921DC29L,0x8921DC29L,1L,0xD8EA76DFL},{0L,0x240CD938L,1L,1L,0x240CD938L},{0xD8EA76DFL,0x8921DC29L,0x3646EBBAL,0x0C5D0814L,0x0C5D0814L},{0xD4024034L,0xC11DD320L,0xD4024034L,1L,(-5L)}}};
            uint16_t l_2269 = 0xDAADL;
            uint8_t *l_2293 = &g_89;
            uint32_t l_2319 = 0xA51B2E7EL;
            uint32_t l_2334 = 3UL;
            uint8_t ***l_2362[9][5] = {{(void*)0,&g_170,&g_247,&g_170,(void*)0},{(void*)0,&g_247,&g_247,&g_247,&g_247},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_247,&g_170,&g_170,&g_247,&g_247},{&g_170,(void*)0,&g_170,(void*)0,(void*)0},{&g_247,&g_247,&g_247,&g_247,&g_247},{&g_170,&g_170,&g_247,(void*)0,&g_170},{(void*)0,&g_247,&g_247,&g_247,&g_247},{&g_170,(void*)0,&g_170,&g_170,(void*)0}};
            int32_t ***l_2393[4] = {&g_193,&g_193,&g_193,&g_193};
            int32_t **l_2403[5][1] = {{&l_2401},{&l_2401},{&l_2401},{&l_2401},{&l_2401}};
            int32_t ***l_2402 = &l_2403[4][0];
            int32_t ****l_2410 = &l_2393[2];
            int8_t **l_2422 = &g_279;
            const uint32_t l_2450 = 0xC880D4E3L;
            const uint32_t ***l_2457 = (void*)0;
            const uint32_t ****l_2456 = &l_2457;
            int32_t l_2492 = 4L;
            int i, j, k;
            for (g_284 = 5; (g_284 >= 0); g_284 -= 1)
            {
                uint8_t l_2197[4];
                uint64_t ** const l_2253[5] = {&g_663,&g_663,&g_663,&g_663,&g_663};
                int32_t l_2262 = (-6L);
                int32_t l_2264 = 0x4E4862DEL;
                int32_t l_2268 = (-9L);
                int16_t *l_2280 = (void*)0;
                int16_t *l_2281 = &g_1515;
                int32_t l_2285 = 0x088B9383L;
                int32_t l_2286 = (-1L);
                int32_t l_2287 = 0xF6AA2BCCL;
                uint16_t l_2288 = 65535UL;
                union U0 ****l_2292 = &g_502[0][3];
                int16_t l_2317 = 5L;
                uint8_t l_2326 = 1UL;
                int16_t ***l_2397[1][9][8] = {{{(void*)0,(void*)0,&g_573,&g_573,&g_573,&g_573,&g_573,&g_573},{&g_573,&g_573,&g_573,&g_573,(void*)0,&g_573,&g_573,&g_573},{(void*)0,&g_573,&g_573,&g_573,&g_573,(void*)0,(void*)0,&g_573},{&g_573,&g_573,&g_573,&g_573,(void*)0,&g_573,&g_573,(void*)0},{&g_573,&g_573,&g_573,&g_573,&g_573,&g_573,(void*)0,&g_573},{&g_573,&g_573,&g_573,&g_573,&g_573,&g_573,&g_573,&g_573},{&g_573,&g_573,&g_573,&g_573,&g_573,&g_573,&g_573,&g_573},{&g_573,(void*)0,&g_573,&g_573,&g_573,&g_573,&g_573,&g_573},{&g_573,&g_573,&g_573,&g_573,&g_573,(void*)0,(void*)0,(void*)0}}};
                int16_t ****l_2396 = &l_2397[0][3][2];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_2197[i] = 1UL;
                for (g_572.f2 = 1; (g_572.f2 <= 5); g_572.f2 += 1)
                {
                    union U0 ***l_2201 = &l_2141;
                    union U0 ***l_2202 = &g_503;
                    union U0 ***l_2203 = &g_503;
                    union U0 ***l_2204 = &g_503;
                    union U0 ***l_2205 = &g_503;
                    union U0 ***l_2206 = &g_503;
                    union U0 ***l_2207 = &g_503;
                    union U0 ***l_2208[6][9] = {{&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503},{(void*)0,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503},{&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503},{&g_503,&g_503,&g_503,&g_503,&g_503,(void*)0,&g_503,&g_503,&g_503},{&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503},{&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503,&g_503}};
                    uint32_t l_2222[6] = {4UL,8UL,4UL,4UL,8UL,4UL};
                    uint8_t l_2235 = 246UL;
                    int32_t l_2258 = 1L;
                    int32_t l_2259 = (-1L);
                    int32_t l_2263 = 0L;
                    int32_t l_2267 = (-1L);
                    int i, j, k;
                    if (((g_124[g_284][(g_572.f2 + 1)][g_572.f2] , (l_2192 > (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((~((0UL || ((l_2197[2] >= (-8L)) != ((p_5 ^ (*l_2136)) & 0xF35D09D9527E8FD3LL))) , (!(safe_lshift_func_uint16_t_u_s(((l_2209 = ((*l_2201) = (void*)0)) == (void*)0), (**g_573)))))))), (*g_574))))) , g_124[g_284][(g_572.f2 + 1)][g_572.f2]))
                    {
                        (*l_2136) &= p_4;
                        return (*p_6);
                    }
                    else
                    {
                        if (p_5)
                            break;
                    }
                    if ((0UL || ((l_2235 = (((((safe_div_func_uint64_t_u_u(0x2A9DDD121242E491LL, ((((((*l_2188) = ((safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((*g_279), 0)), ((((safe_div_func_int32_t_s_s((l_2197[3] , (safe_lshift_func_uint16_t_u_s(l_2222[1], p_7))), (safe_unary_minus_func_int8_t_s((g_2224 ^= p_5))))) , (((safe_sub_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(((*l_2136) &= (safe_lshift_func_uint8_t_u_s(((!((*g_279) <= 0x83L)) <= (*g_1200)), p_7))), 0x592596F0L)), p_5)) > l_2197[2]), l_2197[1])) == p_4) , l_2197[1])) , l_2192) >= l_2192))), p_5)) == 0x9E901CEAL)) , (*g_663)) , &g_1200) != (void*)0) , 1L))) & (*g_574)) , (-1L)) , l_2234[0][4][1]) >= 1UL)) <= l_2155)))
                    {
                        const uint16_t *l_2238[2];
                        const uint16_t **l_2237 = &l_2238[1];
                        int32_t *l_2251 = &l_2158[5][4][2];
                        int32_t l_2252 = 0x6532BD9DL;
                        int32_t *l_2255 = &g_129;
                        int32_t *l_2256 = &l_2254;
                        int32_t *l_2257[2][7][8] = {{{&l_2158[1][0][3],&l_2157,&g_59,(void*)0,&l_2153,(void*)0,&g_59,&l_2157},{&g_161,&l_2157,&l_2158[0][4][2],&g_59,&l_2157,&g_129,&l_2158[0][4][2],&l_2158[0][4][2]},{&l_2158[0][4][2],&g_161,&l_2155,&l_2155,&g_161,&l_2158[0][4][2],&l_2158[0][4][2],&l_2153},{&g_981[3][2],&l_2155,&l_2158[0][4][2],&g_129,&g_59,&l_2158[1][0][3],&g_59,&g_129},{&g_59,&l_2158[1][0][3],&g_59,&g_129,&l_2158[0][4][2],&l_2155,&g_981[3][2],&l_2153},{&l_2158[0][4][2],&l_2158[0][4][2],&g_161,&l_2155,&l_2155,&g_161,&l_2158[0][4][2],&l_2158[0][4][2]},{&l_2158[0][4][2],&g_129,&l_2157,&g_59,&l_2158[0][4][2],&l_2157,&g_161,&l_2157}},{{&g_59,(void*)0,&l_2153,(void*)0,&g_59,&l_2157,&l_2158[1][0][3],&l_2158[0][4][2]},{&g_981[3][2],&g_129,(void*)0,&l_2155,&g_161,&g_161,&l_2155,(void*)0},{&l_2158[0][4][2],&l_2158[0][4][2],(void*)0,&l_2158[0][4][2],&l_2157,&l_2155,&l_2158[1][0][3],&g_981[3][2]},{&g_161,&l_2158[1][0][3],&l_2153,&l_2158[0][4][2],&l_2153,&l_2158[1][0][3],&g_161,&g_981[3][2]},{&l_2158[1][0][3],&l_2155,&l_2157,&l_2158[0][4][2],&l_2158[1][0][3],(void*)0,(void*)0,&l_2158[1][0][3]},{&l_2158[0][4][2],&l_2155,&l_2155,&l_2158[0][4][2],&l_2158[1][0][3],&l_2157,&g_59,(void*)0},{&l_2158[0][4][2],&l_2157,&l_2155,&l_2158[1][0][3],&g_981[3][2],&l_2158[1][0][3],&l_2155,&l_2157}}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_2238[i] = &g_2239;
                        l_2254 &= (l_2236 && (((((*l_2237) = (*g_1199)) == ((safe_div_func_int16_t_s_s(p_5, (-3L))) , &l_2135)) | 0x91657F0AEE74936FLL) < (((((((((safe_unary_minus_func_uint8_t_u((safe_mul_func_uint16_t_u_u(((*g_279) || 0x99L), (safe_mul_func_uint8_t_u_u((l_2252 = (safe_add_func_int32_t_s_s(((*l_2251) = ((*l_2136) = ((safe_lshift_func_uint16_t_u_u(((*g_574) , (**g_1199)), 2)) || g_1080[3][0]))), p_4))), 0xABL)))))) | p_7) || (*g_663)) & p_7) <= l_2192) != (*g_279)) == p_4) , l_2253[2]) == (void*)0)));
                        l_2269--;
                    }
                    else
                    {
                        return (*p_6);
                    }
                }
                if ((((l_2181 , 1L) , ((g_288[0][0][0] == (((p_5 , ((0x658846170006223FLL || (safe_rshift_func_int16_t_s_s(((*l_2281) ^= ((((0xE13DAE5BF86D384FLL >= (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((*l_2136) |= (safe_sub_func_uint64_t_u_u(((l_2262 & l_2260) & ((l_2181 , (void*)0) != &g_179[2])), p_5))) > 0xB4L), p_5)), 0L))) , (**g_573)) ^ p_5) >= 1L)), 3))) ^ p_7)) , l_2266) , p_4)) <= g_106)) < 0x516FL))
                {
                    int32_t *l_2282 = (void*)0;
                    int32_t *l_2283 = &l_2265[0][0][1];
                    int32_t *l_2284[7][4][7] = {{{&l_2254,(void*)0,&g_981[3][2],&l_2153,&g_491,&g_981[3][1],&g_1091[4]},{(void*)0,&g_1091[0],&l_2265[0][0][4],&g_59,&l_2265[0][0][4],&g_1091[0],(void*)0},{&g_1091[4],&g_981[3][1],&g_491,&l_2153,&g_981[3][2],(void*)0,&l_2254},{&g_59,(void*)0,&l_2264,&l_2264,(void*)0,&g_59,(void*)0}},{{&l_2155,&l_2260,&g_491,&g_1091[4],&l_2265[0][3][2],&g_981[3][2],&g_981[3][2]},{(void*)0,&l_2265[1][3][2],&l_2265[0][0][4],&l_2265[1][3][2],(void*)0,&l_2260,&g_1091[0]},{&l_2155,&l_2260,&g_981[3][2],&g_981[3][1],&l_2153,&l_2155,&l_2153},{&g_1091[3],(void*)0,(void*)0,&g_1091[3],&l_2265[1][3][2],&l_2158[0][4][2],(void*)0}},{{&l_2155,&g_981[3][1],&l_2265[0][3][2],&l_2266,&l_2254,&l_2254,&l_2266},{(void*)0,&g_1091[0],(void*)0,&l_2158[0][4][2],&g_59,&l_2264,(void*)0},{&l_2155,(void*)0,&l_2153,&l_2265[0][3][2],&g_161,&l_2265[0][3][2],&l_2153},{&g_59,&g_59,&l_2265[1][3][2],(void*)0,&l_2260,&l_2264,&g_1091[0]}},{{&g_1091[4],&g_981[3][2],&l_2254,&l_2260,&l_2260,&l_2254,&g_981[3][2]},{(void*)0,&l_2260,&g_59,(void*)0,&l_2260,&l_2158[0][4][2],(void*)0},{&l_2254,&l_2155,&g_161,&g_981[3][2],&g_161,&l_2155,&l_2254},{(void*)0,&l_2158[0][4][2],&l_2260,(void*)0,&g_59,&l_2260,(void*)0}},{{&g_981[3][2],&l_2254,&l_2260,&l_2260,&l_2254,&g_981[3][2],&g_1091[4]},{&g_1091[0],&l_2264,&l_2260,(void*)0,&l_2265[1][3][2],&g_59,&g_59},{&l_2153,&l_2265[0][3][2],&g_161,&l_2265[0][3][2],&l_2153,(void*)0,&l_2155},{(void*)0,&l_2264,&g_59,&l_2158[0][4][2],(void*)0,&g_1091[0],(void*)0}},{{&l_2266,&l_2254,&l_2254,&l_2266,&l_2265[0][3][2],&g_981[3][1],&l_2155},{(void*)0,&l_2158[0][4][2],&l_2265[1][3][2],&g_1091[3],(void*)0,(void*)0,&g_1091[3]},{&l_2153,&l_2155,&l_2153,&g_981[3][1],&g_981[3][2],&l_2260,&l_2155},{&g_1091[0],&l_2260,(void*)0,&l_2265[1][3][2],&l_2265[0][0][4],&l_2265[1][3][2],(void*)0}},{{&g_981[3][2],&g_981[3][2],&l_2155,&g_981[3][1],&g_161,&l_2254,&g_1091[4]},{&l_2158[0][4][2],&l_2265[1][3][2],&g_1091[3],(void*)0,(void*)0,&g_1091[3],&l_2265[1][3][2]},{&l_2266,&g_491,&l_2265[0][3][2],&l_2260,&g_161,(void*)0,&g_981[3][1]},{&g_1091[3],(void*)0,(void*)0,&l_2265[1][3][2],(void*)0,(void*)0,&g_1091[3]}}};
                    const uint16_t *l_2312 = &g_288[1][2][0];
                    uint16_t *l_2329 = &g_288[0][0][0];
                    int64_t *l_2335[5] = {&g_567,&g_567,&g_567,&g_567,&g_567};
                    int32_t ***l_2363 = &g_1540;
                    int64_t l_2387 = (-4L);
                    int i, j, k;
                    ++l_2288;
                    for (l_2261 = 0; (l_2261 <= 0); l_2261 += 1)
                    {
                        int32_t **l_2291 = &l_2282;
                        int32_t l_2315 = 0L;
                        int32_t l_2316[6][6][4] = {{{(-2L),1L,0L,0L},{0L,0x380F53D9L,(-9L),0x10D6A5C9L},{0L,0L,0x92553A73L,0x59E60833L},{0L,0xD23BE6D6L,(-9L),0x92553A73L},{0L,0x59E60833L,0L,(-2L)},{(-2L),(-1L),0x48B95B34L,0x48B95B34L}},{{0x380F53D9L,0x380F53D9L,(-2L),0L},{0x9C668836L,0xC779E09FL,0x92553A73L,(-9L)},{1L,(-2L),0x59E60833L,0x92553A73L},{(-1L),(-2L),0x10D6A5C9L,(-9L)},{(-2L),0xC779E09FL,0L,0L},{3L,0x380F53D9L,0xFCB96FD2L,0x48B95B34L}},{{0x92553A73L,(-1L),0x92553A73L,(-2L)},{0x35DECE66L,0x59E60833L,0xD23BE6D6L,0x92553A73L},{1L,0xD23BE6D6L,0L,0x59E60833L},{(-2L),0L,0L,0x10D6A5C9L},{1L,0x380F53D9L,0xD23BE6D6L,0L},{0x35DECE66L,1L,0x92553A73L,0xFCB96FD2L}},{{0x92553A73L,0xFCB96FD2L,0xFCB96FD2L,0x92553A73L},{3L,(-9L),0L,0xD23BE6D6L},{(-2L),0xB407362EL,0x10D6A5C9L,0L},{(-1L),0x380F53D9L,0x59E60833L,0L},{1L,0xB407362EL,0x92553A73L,0xD23BE6D6L},{0x9C668836L,(-9L),(-2L),0x92553A73L}},{{0x380F53D9L,0xFCB96FD2L,0x48B95B34L,0xFCB96FD2L},{(-2L),1L,0L,0L},{0L,0x380F53D9L,(-9L),0x10D6A5C9L},{0L,0L,0x92553A73L,0x59E60833L},{0L,0xD23BE6D6L,(-9L),0x92553A73L},{0L,0x59E60833L,0L,(-2L)}},{{(-2L),(-1L),0x48B95B34L,0x48B95B34L},{0x380F53D9L,0x380F53D9L,(-2L),0L},{0x9C668836L,0xC779E09FL,0x92553A73L,(-9L)},{1L,(-2L),0x59E60833L,0x92553A73L},{(-1L),(-2L),0x10D6A5C9L,(-9L)},{(-2L),0xC779E09FL,0L,0L}}};
                        int64_t *l_2318[10] = {&g_183[6][3],&g_183[6][3],&g_183[6][3],&g_183[6][3],&g_183[6][3],&g_183[6][3],&g_183[6][3],&g_183[6][3],&g_183[6][3],&g_183[6][3]};
                        int i, j, k;
                        if (g_124[g_284][g_284][g_284])
                            break;
                        (*l_2291) = (g_124[g_284][g_284][g_284] , &l_2153);
                        (**l_2291) = ((((((l_2292 == ((((g_183[6][3] = (g_567 &= (((l_2293 != (((((safe_sub_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(p_7, (safe_add_func_int64_t_s_s(((safe_div_func_int32_t_s_s((p_5 & (safe_mul_func_uint16_t_u_u(p_7, (((*l_2293) = 0x91L) & (safe_sub_func_uint16_t_u_u((*g_1200), 7UL)))))), (--(*l_2188)))) > ((safe_div_func_uint8_t_u_u(((*l_2283) ^= ((safe_sub_func_int8_t_s_s((((g_2313[5][0] = l_2312) != (void*)0) > 0UL), l_2315)) < 0x325CL)), p_5)) == g_291)), p_7)))) < l_2316[1][0][0]), p_5)) ^ (**g_573)) >= g_2314) != 7L) , (void*)0)) , l_2317) < 3UL))) >= g_841) > (*l_2282)) , (void*)0)) < (**l_2291)) || 7UL) <= p_4) > 0x902F46E2AB714346LL) & l_2319);
                    }
                    if ((safe_add_func_int64_t_s_s((g_183[6][3] &= (safe_rshift_func_int16_t_s_u(((*l_2281) |= l_2265[1][3][2]), (((((safe_add_func_int16_t_s_s((l_2261 == ((*l_2188) = l_2326)), ((*l_2329) = ((**g_1199)--)))) < p_5) <= (safe_sub_func_int8_t_s_s(((*l_2136) & ((((((((++(*l_2293)) < l_2334) != (*l_2283)) != (l_2260 = 0x9622L)) != l_2181) , 0x41L) > p_4) || p_4)), l_2266))) , &p_6) != (void*)0)))), (*g_663))))
                    {
                        int32_t *l_2336[5][3] = {{&g_59,&g_59,&l_2158[0][4][2]},{&g_59,&l_2158[0][4][2],&l_2158[0][4][2]},{&g_59,&g_59,&l_2155},{&l_2264,&g_59,&l_2264},{&l_2158[0][4][2],&g_59,&l_2155}};
                        int32_t **l_2337 = &l_2284[5][2][5];
                        int i, j;
                        (*l_2337) = l_2336[4][0];
                        (*l_2136) = ((safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((((*g_279) = (safe_mod_func_int64_t_s_s(((*l_2283) = (((*l_2136) > (~(247UL ^ (g_893[2][3][1] != (safe_add_func_uint64_t_u_u((+((((*l_2293) &= 0xC6L) == ((~(((safe_div_func_uint32_t_u_u((~((safe_div_func_int16_t_s_s((l_2354 , (safe_lshift_func_int8_t_s_u((((*g_573) = (l_2181 , (*g_573))) == (void*)0), 6))), (safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((l_2361 != l_2362[3][3]), p_4)), 1)))) , (**g_573))), p_4)) , (void*)0) != l_2363)) == p_7)) <= 0x2EB7L)), p_4)))))) == (*g_279))), 0x9ABC6E6498BA1E7ELL))) || 0x44L) && l_2364), (-1L))), (-9L))) != p_5);
                        --l_2367;
                    }
                    else
                    {
                        union U0 *l_2386 = &g_2134;
                        int32_t l_2388[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_2388[i] = 0xE9B71E8BL;
                        l_2388[1] &= (safe_div_func_uint8_t_u_u(((*l_2136) , ((*l_2293) = ((*g_279) > (((safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((*l_2281) = p_4), (l_2354.f2 , ((**g_1199) = 0x9FCAL)))), (((*p_6) , g_1080[3][0]) <= p_7))) != p_5) >= (*l_2136))))), p_7));
                        (*l_2283) = ((0x1A87L ^ (safe_add_func_int8_t_s_s((l_2354 , 0x7FL), (((void*)0 == &l_2354) ^ ((((p_5 , p_4) != ((*l_2136) = (safe_lshift_func_uint16_t_u_u((((void*)0 == l_2393[2]) | g_1593), (*g_1200))))) <= p_7) & l_2388[1]))))) && 0x5A0CL);
                    }
                }
                else
                {
                    l_2394 = &l_2266;
                    for (g_16 = 0; (g_16 <= 0); g_16 += 1)
                    {
                        int32_t *l_2395 = (void*)0;
                        l_2395 = l_2395;
                    }
                }
                (*l_2396) = &g_573;
            }
            if ((safe_add_func_int64_t_s_s((((((*p_6) , p_4) , l_2400[9]) == ((*l_2402) = &l_2401)) == (safe_mod_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((((safe_rshift_func_int16_t_s_s((((((((((*l_2410) = (void*)0) == ((g_841 = ((((((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((((*l_2136) , 4L) | p_4), (safe_rshift_func_uint16_t_u_s((((~(safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((((((*l_2422) = &l_2364) == &g_1041) , p_7) , (*l_2394)) || 1UL), p_4)), 1L))) ^ l_2423) || 0x8E94FD36L), 5)))) & 65535UL), l_2424[2][0][3])) , p_4) || p_7) >= p_4) >= g_59) >= 0x8C0DB7C6L)) , (void*)0)) , p_4) == (*l_2136)) & (*l_2136)) ^ (*g_1200)) & 0xF3FB402EL) != 0xB3L), (*g_574))) && l_2425) ^ (*g_574)) , p_7), 0xDD42F2B91C441F53LL)), 0xA0F9L))), p_5)))
            {
                uint32_t l_2427 = 4294967287UL;
                if (l_2153)
                    goto lbl_2426;
                if (l_2427)
                    break;
            }
            else
            {
                int32_t *****l_2432 = &g_2020[2];
                (*l_2394) = ((*l_2136) = (safe_lshift_func_int8_t_s_u((((p_4 & ((*l_2394) , (*l_2394))) == 0x5E2367775A61C8E7LL) , (((safe_lshift_func_uint16_t_u_s((((p_5 = g_129) , l_2432) == ((safe_lshift_func_int8_t_s_u(((l_2354 , (((safe_rshift_func_int16_t_s_u((**g_573), 3)) >= ((18446744073709551615UL <= 3UL) > (-3L))) , (void*)0)) == (void*)0), 7)) , &l_2410)), 7)) <= 4294967295UL) < 0xEE3D578DL)), 2)));
            }
            for (g_59 = 0; (g_59 <= 4); g_59 += 1)
            {
                uint64_t l_2441 = 0x68EF630404BE7550LL;
                union U0 ****l_2458 = (void*)0;
                union U0 ****l_2459 = &g_502[0][3];
                for (l_2425 = 0; (l_2425 <= 4); l_2425 += 1)
                {
                    int16_t *l_2451 = &g_1515;
                    int32_t *l_2453 = &l_2261;
                    int i, j;
                    if ((((g_183[g_59][g_59] | (&g_1041 == (*l_2422))) , ((*l_2451) = (safe_rshift_func_int8_t_s_u((65531UL ^ (safe_sub_func_int64_t_s_s(l_2441, ((safe_mod_func_int8_t_s_s(p_4, (((*g_574) = (safe_mul_func_int8_t_s_s(((**l_2422) = 0x8BL), ((safe_lshift_func_int8_t_s_s(0xF4L, (safe_sub_func_uint8_t_u_u(p_4, 0x78L)))) > p_7)))) , 0xE6L))) <= (-1L))))), l_2450)))) ^ 0x2EBCL))
                    {
                        return (*p_6);
                    }
                    else
                    {
                        l_2453 = l_2452;
                        (*l_2136) = ((((*l_2452) = 0xA52544F5L) <= (*l_2394)) , (safe_mod_func_uint32_t_u_u(((void*)0 != l_2456), 0x49B384E4L)));
                        if (p_7)
                            break;
                    }
                }
                (*l_2459) = &l_2141;
            }
            for (l_2171 = 10; (l_2171 != 31); l_2171++)
            {
                uint8_t ****l_2462[7] = {&l_2362[6][1],&l_2362[6][1],&l_2362[6][1],&l_2362[6][1],&l_2362[6][1],&l_2362[6][1],&l_2362[6][1]};
                uint8_t *** const *l_2464[3];
                uint8_t *** const **l_2463 = &l_2464[2];
                const int32_t l_2481 = 0x0E4C6A6DL;
                uint32_t *l_2491 = &l_2334;
                int64_t *l_2493 = &g_1451;
                union U0 l_2495 = {0xD46D9ADFL};
                int i;
                for (i = 0; i < 3; i++)
                    l_2464[i] = (void*)0;
                (*l_2136) ^= (l_2462[0] == ((*l_2463) = &g_246));
                l_2365 ^= (((!(safe_unary_minus_func_uint32_t_u((safe_div_func_uint64_t_u_u(0x353F6AA7EE7DC26ELL, g_288[0][0][0]))))) == ((safe_div_func_int64_t_s_s((((*l_2493) &= ((((((((*l_2136) &= (((*l_2491) |= ((((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((*l_2293) |= (+(+(((((((*l_2452) , (p_4 >= ((safe_add_func_uint8_t_u_u(l_2481, (18446744073709551615UL >= (0x7BE97DE2L && (((**l_2187) |= (safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((*l_2394), (+(safe_sub_func_uint8_t_u_u(0UL, p_5))))), l_2481))) > 0xC5F729A6L))))) >= (*g_574)))) && 0x834AE2CFL) , 0x1887AD27L) , 255UL) <= 255UL) < 0UL)))), p_5)), p_7)) > (-10L)) < l_2481) != p_4)) , p_4)) , g_1171) > 18446744073709551607UL) , g_981[3][2]) < l_2492) ^ g_465[3]) , 0x7D2F40F60495096BLL)) | g_818), (*l_2394))) <= l_2494)) , 6L);
                if (p_5)
                    break;
                return l_2495;
            }
        }
    }
    return l_2496[2];
}







static uint32_t func_10(int32_t p_11, int32_t p_12, union U0 * p_13)
{
    const union U0 ****l_1727 = &g_795;
    const union U0 *****l_1728 = &l_1727;
    int32_t *l_1729 = &g_572.f3;
    int32_t *l_1730 = &g_841;
    const uint8_t * const ***l_1731 = (void*)0;
    int32_t l_1732 = 0x8CCACCFEL;
    int32_t l_1745 = (-1L);
    int32_t l_1748 = 2L;
    union U0 ***l_1785 = &g_503;
    int32_t ****l_1796 = &g_198;
    int32_t *****l_1795 = &l_1796;
    int32_t *****l_1798 = (void*)0;
    int64_t *l_1815 = &g_183[6][3];
    const int32_t l_1867 = 0x9275C43FL;
    int32_t l_1900 = 1L;
    uint32_t l_2067 = 0x3D5CCC3DL;
    uint8_t **l_2078 = &g_171[0][4][1];
    int16_t l_2096 = 1L;
    int64_t l_2105 = 0xF9F2E5B4F79F9116LL;
    int32_t l_2118 = 0x30AFC9A4L;
    int32_t l_2119[2];
    int32_t **l_2123[9];
    int32_t *l_2124 = (void*)0;
    uint32_t l_2132 = 0xB3512454L;
    int i;
    for (i = 0; i < 2; i++)
        l_2119[i] = 6L;
    for (i = 0; i < 9; i++)
        l_2123[i] = &g_1309[2][3];
lbl_2101:
    l_1732 ^= (((*g_574) = (&g_246 == ((((*l_1728) = l_1727) == (((l_1730 = (l_1729 = &g_841)) != (void*)0) , &g_795)) , l_1731))) , p_12);
    for (g_129 = 13; (g_129 != 13); g_129++)
    {
        uint16_t l_1750 = 0x5531L;
        const int16_t *l_1755 = (void*)0;
        int16_t l_1762 = 7L;
        uint32_t *l_1775 = (void*)0;
        uint32_t *l_1776 = (void*)0;
        uint32_t *l_1777 = &g_1593;
        int32_t **l_1782 = &l_1729;
        int32_t *****l_1799 = &l_1796;
        int32_t l_1800 = (-3L);
        uint8_t *l_1837 = &g_886;
        int32_t *l_1929[9][10][2] = {{{(void*)0,&l_1748},{&l_1748,(void*)0},{(void*)0,&g_161},{&l_1900,&l_1748},{(void*)0,&l_1745},{&l_1748,&g_161},{(void*)0,&g_161},{&l_1748,&l_1745},{(void*)0,&l_1748},{&l_1900,&g_161}},{{(void*)0,(void*)0},{&l_1748,&l_1748},{(void*)0,&l_1748},{&l_1748,(void*)0},{(void*)0,&g_161},{&l_1900,&l_1748},{(void*)0,&l_1745},{&l_1748,&g_161},{(void*)0,&g_161},{&l_1748,&l_1745}},{{(void*)0,&l_1748},{&l_1900,&g_161},{(void*)0,(void*)0},{&l_1748,&l_1748},{(void*)0,&l_1748},{&l_1748,(void*)0},{(void*)0,&g_161},{&l_1900,&l_1748},{(void*)0,&l_1745},{&l_1748,&g_161}},{{(void*)0,&g_161},{&l_1748,&l_1745},{(void*)0,&l_1748},{&l_1900,&g_161},{(void*)0,(void*)0},{&l_1748,&l_1748},{(void*)0,&l_1748},{&l_1748,(void*)0},{(void*)0,&g_161},{&l_1900,&l_1748}},{{(void*)0,&l_1745},{&l_1748,&g_161},{(void*)0,&g_161},{&l_1748,&l_1745},{(void*)0,&l_1748},{&l_1900,&g_161},{(void*)0,(void*)0},{&l_1748,&l_1748},{(void*)0,&l_1748},{&l_1748,(void*)0}},{{(void*)0,&g_161},{&l_1900,&l_1748},{(void*)0,&l_1745},{&l_1748,&g_161},{(void*)0,&g_161},{&l_1748,&l_1745},{(void*)0,&l_1748},{&l_1900,&g_161},{(void*)0,(void*)0},{&l_1748,&l_1748}},{{(void*)0,&l_1748},{&l_1748,(void*)0},{(void*)0,&g_161},{&l_1900,&l_1748},{(void*)0,&l_1745},{&l_1748,&g_161},{(void*)0,&g_161},{&l_1748,&l_1745},{(void*)0,&l_1748},{&l_1900,&g_161}},{{(void*)0,(void*)0},{&l_1748,&l_1748},{(void*)0,&l_1748},{&l_1748,(void*)0},{(void*)0,&g_161},{&l_1900,&l_1748},{(void*)0,&l_1745},{&l_1748,&g_161},{(void*)0,&g_161},{&l_1748,&l_1745}},{{(void*)0,&l_1748},{&l_1900,&g_161},{(void*)0,(void*)0},{&l_1748,&l_1748},{(void*)0,&l_1748},{&l_1748,(void*)0},{(void*)0,&g_161},{&l_1900,&l_1745},{(void*)0,&g_161},{&l_1900,(void*)0}}};
        uint64_t l_1960[2];
        union U0 l_1995 = {0L};
        int32_t l_2060 = 0xE809F826L;
        int64_t *l_2094 = &g_567;
        int32_t l_2095 = 0xAB13C820L;
        uint16_t l_2117 = 0x6F6EL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1960[i] = 18446744073709551607UL;
        for (g_106 = (-3); (g_106 != 9); ++g_106)
        {
            int8_t l_1741 = 0xF4L;
            int32_t l_1743 = 0L;
            int32_t l_1746 = 0x8A4A31A6L;
            int32_t l_1747 = (-6L);
            int32_t l_1749 = 1L;
            l_1732 = (p_12 && p_11);
            for (g_161 = 19; (g_161 != 26); ++g_161)
            {
                int16_t *l_1739 = (void*)0;
                int32_t **l_1740 = &g_1309[2][3];
                int32_t *l_1742 = &g_981[3][2];
                int32_t *l_1744[2][4][3] = {{{&g_161,&g_129,&g_161},{&g_981[3][0],&g_491,&g_981[3][0]},{&g_161,&g_129,&g_161},{&g_981[3][0],&g_491,&g_981[3][0]}},{{&g_161,&g_129,&g_161},{&g_981[3][0],&g_491,&g_981[3][0]},{&g_161,&g_129,&g_161},{&g_981[3][0],&g_491,&g_981[3][0]}}};
                int i, j, k;
                (*l_1740) = (((l_1732 |= (*g_574)) || p_12) , &l_1732);
                l_1750--;
                for (l_1750 = 0; (l_1750 <= 5); l_1750 += 1)
                {
                    int16_t *l_1754 = &g_284;
                    int64_t *l_1764[4][5][1] = {{{(void*)0},{&g_567},{&g_567},{(void*)0},{&g_183[6][3]}},{{&g_219},{&g_183[6][3]},{(void*)0},{&g_567},{&g_567}},{{(void*)0},{&g_183[6][3]},{&g_219},{&g_183[6][3]},{(void*)0}},{{&g_567},{&g_567},{(void*)0},{&g_183[6][3]},{&g_219}}};
                    int i, j, k;
                    (*l_1742) &= ((!((((((*l_1754) = (l_1754 != l_1755)) , (safe_sub_func_uint8_t_u_u(((((safe_mod_func_int32_t_s_s(g_124[l_1750][l_1750][l_1750], p_11)) >= (safe_sub_func_int64_t_s_s((((l_1762 | ((0x11L & 255UL) >= (g_219 = ((+((p_12 == (((*g_23) , (-8L)) | (*g_279))) != p_12)) != 0x85L)))) , 6UL) != 4UL), 0x2A46D109567C3024LL))) , p_11) >= 1UL), p_12))) < 0x64L) , 0xA745L) ^ p_11)) != g_124[l_1750][l_1750][l_1750]);
                    if (p_12)
                        continue;
                }
            }
        }
        if ((((*l_1727) = ((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((((((l_1762 | ((safe_rshift_func_int8_t_s_s(((*g_279) = ((void*)0 == (*g_170))), (p_12 != ((~(!(g_567 || (--(*l_1777))))) && (((safe_rshift_func_int16_t_s_u(1L, (l_1782 != l_1782))) <= ((safe_sub_func_int64_t_s_s(l_1762, (*g_663))) && l_1732)) < p_11))))) > (**g_1199))) > 1UL) ^ 18446744073709551611UL) || p_12) <= 65535UL), g_1041)), 0xDA4DL)) , (void*)0)) != l_1785))
        {
            int32_t *l_1790 = (void*)0;
            int32_t *l_1791 = &g_981[3][2];
            p_12 = (safe_rshift_func_int8_t_s_u((*g_279), (safe_rshift_func_uint8_t_u_u(p_11, 1))));
            (*l_1791) = 0x4201EAE3L;
        }
        else
        {
            int32_t *****l_1797[1][10][9] = {{{&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796},{&l_1796,&l_1796,&l_1796,&l_1796,(void*)0,&l_1796,&l_1796,&l_1796,&l_1796},{&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796},{&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796},{&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796},{&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796},{&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796},{&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796},{&l_1796,&l_1796,&l_1796,&l_1796,(void*)0,&l_1796,&l_1796,&l_1796,&l_1796},{&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796,&l_1796}}};
            uint64_t **l_1809[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint64_t ***l_1808 = &l_1809[6];
            int32_t l_1830 = 0xB0E4AFADL;
            int16_t ***l_1850[6][3] = {{&g_573,&g_573,&g_573},{&g_573,&g_573,&g_573},{&g_573,&g_573,&g_573},{&g_573,&g_573,&g_573},{&g_573,&g_573,&g_573},{&g_573,&g_573,&g_573}};
            int64_t l_1881 = 0xDF6BBC9BF5160015LL;
            const uint8_t *l_1950[1];
            const uint8_t **l_1949[3][5][9] = {{{&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],(void*)0,(void*)0,(void*)0,&l_1950[0]},{&l_1950[0],(void*)0,&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],(void*)0,&l_1950[0]},{&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],(void*)0,&l_1950[0],&l_1950[0],&l_1950[0]},{(void*)0,(void*)0,(void*)0,&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],(void*)0},{&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0]}},{{&l_1950[0],(void*)0,(void*)0,&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],(void*)0},{&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0]},{(void*)0,&l_1950[0],(void*)0,&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],(void*)0},{&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0]},{(void*)0,(void*)0,(void*)0,&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],(void*)0}},{{&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0]},{&l_1950[0],(void*)0,(void*)0,&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],(void*)0},{&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0]},{(void*)0,&l_1950[0],(void*)0,&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],(void*)0},{&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0],&l_1950[0]}}};
            const uint8_t ***l_1948 = &l_1949[2][2][2];
            const int16_t **l_1989[8][8] = {{&l_1755,&l_1755,(void*)0,&l_1755,&l_1755,&l_1755,(void*)0,&l_1755},{&l_1755,&l_1755,&l_1755,&l_1755,&l_1755,&l_1755,&l_1755,&l_1755},{&l_1755,&l_1755,&l_1755,&l_1755,&l_1755,&l_1755,(void*)0,(void*)0},{&l_1755,&l_1755,(void*)0,&l_1755,&l_1755,&l_1755,&l_1755,&l_1755},{&l_1755,(void*)0,(void*)0,&l_1755,&l_1755,(void*)0,(void*)0,&l_1755},{&l_1755,&l_1755,&l_1755,(void*)0,&l_1755,&l_1755,&l_1755,(void*)0},{&l_1755,&l_1755,&l_1755,&l_1755,(void*)0,&l_1755,(void*)0,&l_1755},{(void*)0,&l_1755,(void*)0,&l_1755,&l_1755,(void*)0,&l_1755,&l_1755}};
            int8_t l_1993 = 0x7FL;
            union U0 ** const l_2062[9][8][3] = {{{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23},{&g_23,(void*)0,&g_23}},{{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23},{&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23}},{{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23},{&g_23,&g_23,&g_23}},{{&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23},{&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23},{&g_23,(void*)0,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23}},{{&g_23,(void*)0,&g_23},{&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23}},{{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23}},{{&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23},{(void*)0,&g_23,&g_23},{&g_23,(void*)0,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23},{&g_23,&g_23,&g_23}},{{(void*)0,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23}},{{&g_23,&g_23,(void*)0},{&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23},{&g_23,&g_23,&g_23}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1950[i] = &g_89;
            for (g_1048 = (-19); (g_1048 >= 49); g_1048++)
            {
                return g_1048;
            }
            if (p_12)
                break;
            if (((0x43AC02B169D9ED65LL <= 0L) , (!((l_1798 = (l_1797[0][2][6] = l_1795)) == l_1799))))
            {
                int64_t l_1810 = 0x963712ACB17D9D87LL;
                const int64_t *l_1816 = &g_183[6][3];
                int32_t l_1821 = 0x79EBA5ECL;
                uint16_t l_1823 = 0x5566L;
                l_1800 = (-1L);
                for (l_1800 = 28; (l_1800 < (-20)); l_1800--)
                {
                    uint8_t *l_1807 = &g_1261;
                    int32_t l_1811 = 0xB26F8086L;
                    int64_t *l_1817 = (void*)0;
                    int64_t *l_1818[10][2] = {{&g_219,&g_219},{&g_219,&g_219},{&g_219,&g_219},{&g_219,&g_219},{&g_219,&g_219},{&g_219,&g_219},{&g_219,&g_219},{&g_219,&g_219},{&g_219,&g_219},{&g_219,&g_219}};
                    int32_t l_1819[10] = {1L,0x7A871638L,0x6536B9B7L,0x7A871638L,1L,1L,0x7A871638L,0x6536B9B7L,0x7A871638L,1L};
                    int32_t l_1820[4][5][1] = {{{1L},{0xDDDDE0C8L},{1L},{1L},{0xDDDDE0C8L}},{{1L},{1L},{0xDDDDE0C8L},{1L},{1L}},{{0xDDDDE0C8L},{1L},{1L},{0xDDDDE0C8L},{1L}},{{1L},{0xDDDDE0C8L},{1L},{1L},{0xDDDDE0C8L}}};
                    int8_t l_1822 = (-10L);
                    int i, j, k;
                    l_1822 |= ((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_1807) = (g_51[0] ^ 7L)), ((void*)0 == l_1808))), 246UL)) <= 0x5A538CE4L) < ((l_1810 = 0xB26BF865L) == l_1811)) ^ (safe_add_func_int16_t_s_s(((((l_1820[0][3][0] = (((l_1819[9] = (safe_unary_minus_func_int32_t_s(((((l_1815 = &g_219) == l_1816) || p_12) >= p_11)))) & g_741) > 0x1EB06AF9D5B00D6CLL)) == l_1821) > g_89) , l_1819[7]), p_12)));
                    if (l_1823)
                        break;
                }
            }
            else
            {
                int16_t ***l_1849 = &g_573;
                int16_t ****l_1848[7][2][3] = {{{&l_1849,&l_1849,(void*)0},{&l_1849,&l_1849,&l_1849}},{{&l_1849,&l_1849,&l_1849},{&l_1849,&l_1849,&l_1849}},{{&l_1849,&l_1849,&l_1849},{(void*)0,&l_1849,&l_1849}},{{&l_1849,&l_1849,&l_1849},{&l_1849,&l_1849,&l_1849}},{{(void*)0,&l_1849,(void*)0},{&l_1849,&l_1849,&l_1849}},{{&l_1849,&l_1849,&l_1849},{&l_1849,&l_1849,(void*)0}},{{&l_1849,&l_1849,&l_1849},{&l_1849,&l_1849,&l_1849}}};
                int32_t l_1866 = 0xE46A7E8AL;
                int32_t *l_1928 = (void*)0;
                uint32_t *l_1958 = (void*)0;
                uint32_t *l_1959 = &g_24[0].f2;
                int8_t *l_1961 = &g_1041;
                uint8_t l_1972 = 253UL;
                union U0 * const *l_2063 = (void*)0;
                uint8_t **l_2079 = &l_1837;
                int i, j, k;
                if ((((safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((l_1830 == (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((**g_1199) = (((l_1837 != (void*)0) >= (((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((safe_mul_func_int64_t_s_s((1L >= (safe_rshift_func_int16_t_s_u(((l_1850[5][1] = &g_573) == &g_573), 12))), ((!(safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_12, 3)), 3)), 7)), 1)), (safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((void*)0 == l_1797[0][9][3]), (*g_574))), 0x2314L))))) >= 0x14L))) >= 0xF87D76EDL), p_11)), 0x6667L)), (-1L))) != p_11) > p_12)) == (*g_279))), 14)), l_1866))) == (-1L)), 1UL)) ^ 3UL), (*g_279))) ^ l_1866), l_1867)) == 1L) & 0x25A0ABA3L))
                {
                    int64_t l_1880 = 1L;
                    int32_t l_1911 = 0xB16EE860L;
                    int32_t *l_1927 = &l_1800;
                    if ((p_12 ^ (safe_div_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s(0x17F6FC79CA69EAB8LL, ((p_11 != 0UL) >= (p_12 & ((safe_lshift_func_uint16_t_u_s((0x5854L || (l_1866 >= (safe_sub_func_int64_t_s_s(g_1593, ((*l_1815) = (safe_mul_func_uint16_t_u_u(0x4AF8L, p_11))))))), (*g_574))) || (**g_573)))))) & l_1880) >= p_11), l_1881)) | p_12) ^ p_12), l_1880))))
                    {
                        int32_t l_1909[7][7] = {{0x6B78B1B3L,0x9B3A747CL,0x85F9B701L,0x7F6B1E26L,0x7F6B1E26L,0x85F9B701L,0x9B3A747CL},{0x7F6B1E26L,7L,0x973862ACL,(-1L),7L,(-1L),0x9B3A747CL},{0x6E29823FL,0x7F6B1E26L,(-1L),0x6E29823FL,0x9B3A747CL,0x6E29823FL,(-1L)},{0xF5AD0E9DL,0xF5AD0E9DL,0x2CA1190BL,(-1L),0x7F6B1E26L,9L,0xF5AD0E9DL},{0xF5AD0E9DL,(-1L),0x973862ACL,0x7F6B1E26L,0x919BD09EL,0x919BD09EL,0x7F6B1E26L},{0x6E29823FL,0x9B3A747CL,0x6E29823FL,(-1L),0x7F6B1E26L,0x6E29823FL,7L},{0x7F6B1E26L,0x9B3A747CL,(-1L),(-1L),0x9B3A747CL,0x2CA1190BL,0x9B3A747CL}};
                        uint16_t l_1910 = 0xA54FL;
                        int32_t l_1912 = (-6L);
                        int i, j;
                        p_11 |= p_12;
                        l_1911 |= (((++(*g_1200)) || (safe_mod_func_uint8_t_u_u(p_11, ((2L > (safe_sub_func_uint32_t_u_u((p_12 >= (p_12 >= (safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_div_func_uint64_t_u_u((4L > (p_12 , (safe_sub_func_uint8_t_u_u((l_1900 <= (((*g_279) ^ (safe_add_func_int32_t_s_s((l_1732 = (safe_mod_func_int16_t_s_s(((*g_574) = (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((l_1880 == l_1866), 3)), 2L))), l_1909[0][2]))), l_1910))) <= p_11)), l_1866)))), p_12)), l_1866)), p_12)), 0x8F87809E77509337LL)), 0x4FL)))), l_1866))) ^ p_12)))) || p_11);
                        l_1912 = 0x11CD4CD0L;
                        p_12 |= ((!((l_1866 = p_11) < ((void*)0 == &g_663))) >= 0UL);
                    }
                    else
                    {
                        p_12 ^= (-6L);
                    }
                    l_1800 |= (((((safe_mul_func_int16_t_s_s((p_12 != (g_106 , (+3L))), (((p_11 == (--(*l_1777))) | ((*g_574) = ((safe_mul_func_uint16_t_u_u((((*g_574) & ((((**g_1199) = l_1911) ^ l_1866) == ((l_1866 != ((((-5L) <= l_1866) <= (**g_573)) & 0xD634A63D2F7969D7LL)) < 0x92L))) , p_11), 65535UL)) ^ l_1880))) | p_11))) <= p_12) , p_12) | (*g_279)) , (-4L));
                    for (g_291 = 0; (g_291 < 27); g_291++)
                    {
                        l_1927 = &p_11;
                        l_1928 = &p_11;
                        if (p_11)
                            break;
                    }
                    l_1929[4][2][1] = &p_11;
                }
                else
                {
                    for (l_1762 = 5; (l_1762 >= 1); l_1762 -= 1)
                    {
                        return p_11;
                    }
                }
                if (p_12)
                    break;
                p_11 = ((safe_add_func_uint16_t_u_u((p_12 & ((safe_mod_func_uint8_t_u_u((!(((*l_1961) = ((((*g_279) &= (+(safe_lshift_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((safe_div_func_int8_t_s_s((((safe_div_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u((((*g_574) , (safe_lshift_func_uint16_t_u_u((((**g_573) & ((**g_1199) = ((0x42E530FDL > ((void*)0 == l_1948)) > (~((safe_mod_func_int64_t_s_s(0L, (safe_rshift_func_uint16_t_u_u(((((*l_1959) = (0xEB6DL ^ ((((safe_sub_func_int32_t_s_s((l_1748 = ((((*l_1782) = (void*)0) != &g_841) & 1UL)), 4294967289UL)) >= p_11) != p_12) != (-6L)))) , 0x9F64L) >= 0UL), 10)))) & 0x7D367369L))))) , p_12), p_12))) ^ p_12), 0x1EL)) || (**g_573)) < g_291), p_11)) != (*g_574)) > (-1L)), 0xEAL)), (*g_663))) | 1L), 7)))) <= l_1960[1]) & p_11)) ^ g_162)), (-1L))) <= (*g_663))), p_11)) < 0x56L);
                if (((((((*l_1815) |= (safe_rshift_func_int16_t_s_s((p_11 , ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(p_11, 7)), l_1972)), 12)), p_12)) & (p_12 != ((safe_mul_func_uint16_t_u_u((**g_1199), (0x6EB691228332F801LL ^ p_11))) && ((*g_279) = (safe_add_func_int32_t_s_s(((p_11 , p_12) ^ 1UL), p_12))))))), 8))) | p_12) >= g_24[0].f0) | p_12) < 0xADF46CDA5C986ACDLL))
                {
                    uint8_t l_1991 = 0x15L;
                    int32_t l_1992 = 7L;
                    int32_t l_2058 = 7L;
                    union U0 * const **l_2064 = &l_2063;
                    int32_t *l_2070[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2070[i] = (void*)0;
                    if (p_12)
                    {
                        int32_t l_1977 = 1L;
                        int32_t *l_1981 = (void*)0;
                        const int16_t ***l_1990 = &l_1989[0][4];
                        int32_t l_1994 = (-8L);
                        g_1978++;
                        l_1981 = (void*)0;
                        l_1993 = (p_11 = (l_1992 = ((safe_lshift_func_int16_t_s_u((+((safe_lshift_func_uint16_t_u_u(0x0CBEL, 15)) ^ (((&g_1080[3][0] != l_1775) != ((p_11 , (safe_rshift_func_int16_t_s_u((((*l_1990) = l_1989[0][4]) != (void*)0), ((((***l_1849) = (-4L)) > (&g_106 != (g_663 = &g_1171))) || 5UL)))) == 0L)) <= g_24[0].f3))), l_1991)) & g_183[3][4])));
                        l_1994 &= 4L;
                    }
                    else
                    {
                        uint8_t *l_2005 = (void*)0;
                        uint8_t *l_2006 = &l_1991;
                        int32_t l_2011[9][5] = {{0x18A503ECL,9L,9L,0x18A503ECL,7L},{0L,0x18A503ECL,(-10L),0x693878D3L,0x693878D3L},{0x2C4540E5L,0x18A503ECL,0x2C4540E5L,7L,0x18A503ECL},{0x693878D3L,9L,7L,0x693878D3L,7L},{0x693878D3L,0x693878D3L,(-10L),0x18A503ECL,0L},{0x2C4540E5L,0L,7L,7L,0L},{0L,9L,0x2C4540E5L,0L,7L},{0x18A503ECL,0L,(-10L),0L,0x18A503ECL},{0x2C4540E5L,0x693878D3L,(-10L),0xF36AA128L,0x2C4540E5L}};
                        int32_t l_2012 = 0L;
                        uint32_t l_2013 = 0x52544EE7L;
                        uint32_t l_2059 = 4294967292UL;
                        uint16_t *l_2061 = &g_291;
                        int i, j;
                        l_2013 = ((((l_1995 , (((**g_573) = (((l_2011[7][0] = ((p_11 != (!0xFAF1L)) ^ ((safe_mul_func_int16_t_s_s((**g_573), ((safe_lshift_func_uint16_t_u_u((**g_1199), 4)) == (((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((*l_2006) = ((*l_1837) = 252UL)), 2)), (safe_sub_func_uint8_t_u_u(((*g_574) < (**g_573)), ((safe_rshift_func_int16_t_s_u((*g_574), p_12)) < p_12))))) <= (*g_279)) == 0xCDL)))) , p_12))) == p_12) ^ (*g_1200))) == p_12)) , g_596) <= l_2012) , p_12);
                        p_12 = (safe_mul_func_int8_t_s_s((0UL ^ 0x4505C261L), ((*l_1837) = (safe_mul_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(((*l_1799) != (g_2020[2] = &g_198)), 12)) && (((safe_rshift_func_uint8_t_u_u(p_12, 5)) <= (p_11 = (p_12 >= ((*g_1200) = (((!((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_2012 &= (**g_1199)), 12)), (safe_lshift_func_int8_t_s_u(p_12, p_12)))) , (*g_663))) , g_981[3][2]) & 6L))))) || (**g_573))) && l_1992), 1UL)))));
                        l_1748 ^= ((safe_sub_func_int16_t_s_s(p_12, p_12)) & ((*l_2061) ^= ((((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(p_11, ((l_1992 &= (l_1866 = 0xABFD0B78L)) ^ (((*l_2006) = l_1991) < (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((*g_574), (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s(0x03L, ((safe_mul_func_uint8_t_u_u((l_2058 = (((safe_add_func_int16_t_s_s(p_11, (safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(247UL, p_12)), (-5L))), 0x573EL)))) | p_12) ^ (-1L))), (*g_279))) , (-9L)))) , (*g_1200)), l_2059)))), 6)), l_2060)))))), 0UL)) || 65535UL) & p_11) >= l_2011[7][0])));
                    }
                    if ((p_12 = (((*g_574) = 0xA57DL) , ((l_2062[3][2][1] != ((*l_2064) = l_2063)) > 1L))))
                    {
                        int64_t l_2065[5];
                        int32_t l_2066[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_2065[i] = (-1L);
                        for (i = 0; i < 5; i++)
                            l_2066[i] = 0L;
                        l_2067++;
                    }
                    else
                    {
                        int8_t l_2071 = 0x2EL;
                        int32_t l_2072 = 1L;
                        uint16_t l_2073[10] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                        int i;
                        l_2070[0] = &l_1866;
                        if (p_11)
                            break;
                        l_2073[4]++;
                    }
                }
                else
                {
                    p_12 |= (p_11 ^= (safe_rshift_func_uint8_t_u_u(((*l_1837) &= (l_2078 == l_2079)), 3)));
                }
            }
        }
        if (p_11)
            continue;
        if ((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0x7EL, (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(p_12, (0x77FFL > (safe_mod_func_int8_t_s_s((g_24[0].f3 , ((((((safe_lshift_func_uint8_t_u_u((p_11 , 2UL), 5)) || (&p_11 == ((((*l_2094) = (l_2094 == l_2094)) || g_1041) , (void*)0))) <= g_183[6][3]) != l_2095) >= 65529UL) & (*g_663))), l_2096))))), 0x2EL)), 15)))), 0x9A01L)))
        {
            for (l_1762 = 17; (l_1762 == 13); l_1762 = safe_sub_func_int64_t_s_s(l_1762, 3))
            {
                for (l_1750 = 20; (l_1750 == 5); l_1750 = safe_sub_func_int32_t_s_s(l_1750, 8))
                {
                    if (p_12)
                        goto lbl_2101;
                }
            }
        }
        else
        {
            int32_t *l_2102[5][1];
            union U0 l_2111 = {-1L};
            union U0 * const ****l_2115[1];
            uint8_t *l_2116[3];
            uint16_t l_2120[6] = {65532UL,65532UL,65532UL,65532UL,65532UL,65532UL};
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_2102[i][j] = &l_1800;
            }
            for (i = 0; i < 1; i++)
                l_2115[i] = (void*)0;
            for (i = 0; i < 3; i++)
                l_2116[i] = &g_89;
            l_2102[0][0] = &p_11;
            p_12 = (65532UL >= (safe_add_func_int16_t_s_s(p_12, ((l_1748 = ((((l_2105 & ((safe_rshift_func_int8_t_s_u(4L, (l_2117 = ((*l_1837) = ((+((safe_mul_func_uint8_t_u_u((g_741 , p_12), (l_2111 , ((g_2112 = g_2112) != (l_1995 , &g_502[0][5]))))) , 0x2D67L)) , 0x68L))))) != p_12)) , 0xC8189C3A6CB7A225LL) , p_11) == p_12)) < 0x4B218C28L))));
            l_2120[5]++;
            l_2102[0][0] = l_2102[4][0];
        }
    }
    l_2124 = &p_12;
    l_2132 |= ((safe_div_func_int8_t_s_s(p_11, ((p_11 == (((safe_div_func_uint8_t_u_u((0L <= 65535UL), p_12)) < 0x6110CAE8L) & 255UL)) | p_12))) , (!(safe_rshift_func_uint8_t_u_s((((((*g_279) = p_11) & 0xA6L) , p_11) && (*l_2124)), 1))));
    return p_12;
}







static uint16_t func_17(union U0 * p_18, int8_t p_19, const union U0 * p_20, int32_t p_21, uint64_t p_22)
{
    uint32_t l_1690 = 0UL;
    int32_t l_1707 = 9L;
    int32_t l_1708 = 0x7E5643D3L;
    int32_t l_1709 = (-2L);
    int32_t l_1711 = 0xEEC9A48CL;
    int32_t l_1712 = (-1L);
    int32_t l_1714 = 1L;
    int32_t l_1716 = 0x6C9BF77BL;
    int32_t l_1721[1];
    int i;
    for (i = 0; i < 1; i++)
        l_1721[i] = 1L;
    for (g_284 = 2; (g_284 <= 6); g_284 += 1)
    {
        const int32_t *l_1693 = &g_59;
        int32_t l_1710 = 0x28C0F379L;
        int32_t l_1713 = 0x17D66DC3L;
        int32_t l_1715 = 0xC5C6CECFL;
        int32_t l_1717 = (-1L);
        int32_t l_1718 = 0xBA5FF301L;
        int32_t l_1719[6][8][4] = {{{1L,0xD43B6292L,0L,0L},{(-6L),(-3L),0xA27875C9L,0L},{0x844CFD95L,0x6793051BL,0x9807D442L,0x6793051BL},{(-3L),0xAAB922DEL,1L,0x9807D442L},{1L,(-6L),0xF58C6E91L,1L},{1L,0x50BF3919L,(-6L),8L},{1L,(-3L),0xF58C6E91L,0L},{1L,8L,1L,0L}},{{(-3L),3L,0x9807D442L,0L},{0x844CFD95L,1L,0xA27875C9L,1L},{(-6L),0xAAB922DEL,0L,0xA27875C9L},{1L,0xF58C6E91L,0xF58C6E91L,1L},{(-6L),0x6793051BL,0L,8L},{0xF58C6E91L,3L,0xDBB1697FL,1L},{1L,0x844CFD95L,0L,1L},{(-6L),3L,0x751D4807L,8L}},{{0L,0x6793051BL,0xA27875C9L,1L},{0xE04A28C6L,0xF58C6E91L,1L,0xA27875C9L},{0x6793051BL,0xAAB922DEL,0xDBB1697FL,1L},{(-6L),1L,(-3L),0L},{1L,3L,1L,0L},{1L,8L,0L,0L},{0xE04A28C6L,(-3L),0x9807D442L,8L},{8L,0x50BF3919L,0x9807D442L,1L}},{{0xE04A28C6L,(-6L),0L,0x9807D442L},{1L,0xAAB922DEL,1L,0x6793051BL},{1L,0x6793051BL,(-3L),0L},{(-6L),(-3L),0xDBB1697FL,0L},{0x6793051BL,0xD43B6292L,1L,1L},{0xE04A28C6L,0xE04A28C6L,0xA27875C9L,0L},{0L,0x50BF3919L,0x751D4807L,0x6793051BL},{(-6L),0xF58C6E91L,0L,0x751D4807L}},{{1L,0xF58C6E91L,0xDBB1697FL,0x6793051BL},{0xF58C6E91L,0x50BF3919L,0L,0L},{(-6L),0xE04A28C6L,0xF58C6E91L,1L},{1L,0xD43B6292L,0L,0L},{(-6L),(-3L),0xA27875C9L,0L},{0x844CFD95L,0x6793051BL,0x9807D442L,0x6793051BL},{(-3L),0xAAB922DEL,1L,0x9807D442L},{1L,(-6L),0xF58C6E91L,1L}},{{1L,0x50BF3919L,(-6L),8L},{1L,(-3L),0xF58C6E91L,0L},{1L,8L,1L,0x751D4807L},{0x53B24F57L,0x4AACD940L,3L,0L},{0L,0xF58C6E91L,(-6L),0xAAB922DEL},{3L,0x844CFD95L,0x9807D442L,(-6L)},{0xDBB1697FL,0L,0L,0xDBB1697FL},{8L,1L,0x79896896L,0L}}};
        int i, j, k;
        --l_1690;
        for (g_161 = 0; (g_161 <= 6); g_161 += 1)
        {
            const int32_t **l_1694 = &l_1693;
            uint32_t *l_1701 = &g_1593;
            int32_t *l_1702 = &g_981[3][2];
            int32_t *l_1703 = &g_981[0][3];
            int8_t l_1704 = 0xA8L;
            int32_t *l_1705 = &g_981[3][2];
            int32_t *l_1706[6] = {&g_1091[3],&g_491,&g_1091[3],&g_1091[3],&g_491,&g_1091[3]};
            int32_t l_1720 = 0L;
            int32_t l_1722 = 0xFFCA5D13L;
            uint64_t l_1723[7][10][3] = {{{1UL,0xE3C3231C947EF4BDLL,0x806DEA4268716F8ELL},{1UL,0xE9B37AD37280FED6LL,9UL},{7UL,18446744073709551615UL,0x5E0DA918BB26131DLL},{9UL,0xF9CA9A45E7443245LL,0x806DEA4268716F8ELL},{7UL,0xF60D2187B10AA3F1LL,7UL},{1UL,18446744073709551615UL,0xBB1B4E0145EDB258LL},{1UL,2UL,18446744073709551609UL},{7UL,0UL,9UL},{9UL,0x1640AF088D5D9539LL,0xBB1B4E0145EDB258LL},{7UL,0xF9CA9A45E7443245LL,0x7DF50B656BE1E8DFLL}},{{1UL,0UL,0x87950CE375CF04C8LL},{1UL,0x3421FF3CF593695ELL,0x5E0DA918BB26131DLL},{7UL,0xE3C3231C947EF4BDLL,18446744073709551609UL},{9UL,0xF60D2187B10AA3F1LL,0x87950CE375CF04C8LL},{7UL,0x1640AF088D5D9539LL,0xCFA9C39E87DBF2ECLL},{1UL,0xE3C3231C947EF4BDLL,0x806DEA4268716F8ELL},{1UL,0xE9B37AD37280FED6LL,9UL},{7UL,18446744073709551615UL,0x5E0DA918BB26131DLL},{9UL,0xF9CA9A45E7443245LL,0x806DEA4268716F8ELL},{7UL,0xF60D2187B10AA3F1LL,7UL}},{{1UL,18446744073709551615UL,0xBB1B4E0145EDB258LL},{1UL,2UL,18446744073709551609UL},{7UL,0UL,9UL},{9UL,0x1640AF088D5D9539LL,0xBB1B4E0145EDB258LL},{7UL,0xF9CA9A45E7443245LL,0x7DF50B656BE1E8DFLL},{1UL,0UL,0x87950CE375CF04C8LL},{1UL,0x3421FF3CF593695ELL,0x5E0DA918BB26131DLL},{7UL,0xE3C3231C947EF4BDLL,18446744073709551609UL},{9UL,0xF60D2187B10AA3F1LL,0x87950CE375CF04C8LL},{7UL,0x1640AF088D5D9539LL,0xCFA9C39E87DBF2ECLL}},{{1UL,0xE3C3231C947EF4BDLL,0x806DEA4268716F8ELL},{1UL,0xE9B37AD37280FED6LL,9UL},{7UL,18446744073709551615UL,0x5E0DA918BB26131DLL},{9UL,0xF9CA9A45E7443245LL,0x806DEA4268716F8ELL},{7UL,0xF60D2187B10AA3F1LL,7UL},{1UL,18446744073709551615UL,0xBB1B4E0145EDB258LL},{1UL,2UL,18446744073709551609UL},{7UL,0UL,9UL},{9UL,0x1640AF088D5D9539LL,0xBB1B4E0145EDB258LL},{7UL,0xF9CA9A45E7443245LL,0x7DF50B656BE1E8DFLL}},{{1UL,0UL,0x87950CE375CF04C8LL},{1UL,0x3421FF3CF593695ELL,0x5E0DA918BB26131DLL},{7UL,0xE3C3231C947EF4BDLL,18446744073709551609UL},{9UL,0xF60D2187B10AA3F1LL,0x87950CE375CF04C8LL},{7UL,0x1640AF088D5D9539LL,0xCFA9C39E87DBF2ECLL},{1UL,0xE3C3231C947EF4BDLL,0x806DEA4268716F8ELL},{1UL,0xE9B37AD37280FED6LL,9UL},{7UL,18446744073709551615UL,0x5E0DA918BB26131DLL},{9UL,0xF9CA9A45E7443245LL,0x806DEA4268716F8ELL},{7UL,0xF60D2187B10AA3F1LL,7UL}},{{1UL,18446744073709551615UL,0xBB1B4E0145EDB258LL},{1UL,2UL,18446744073709551609UL},{7UL,0UL,9UL},{9UL,0x1640AF088D5D9539LL,0xBB1B4E0145EDB258LL},{7UL,0xF9CA9A45E7443245LL,0x305A79DD844C763CLL},{0x9C6B413ADF8B7557LL,0xCFA9C39E87DBF2ECLL,2UL},{0x9C6B413ADF8B7557LL,9UL,0UL},{3UL,0x7DF50B656BE1E8DFLL,1UL},{9UL,0x7993581E4A4324FALL,2UL},{3UL,1UL,0x55C5768D0F77B8C6LL}},{{0x9C6B413ADF8B7557LL,0x7DF50B656BE1E8DFLL,0x87E47141F55E33DALL},{0x9C6B413ADF8B7557LL,0x5E0DA918BB26131DLL,9UL},{3UL,7UL,0UL},{9UL,0xC8AD5F528BC57A5DLL,0x87E47141F55E33DALL},{3UL,0x7993581E4A4324FALL,3UL},{0x9C6B413ADF8B7557LL,7UL,0xECFA9F42EAEA1AAFLL},{0x9C6B413ADF8B7557LL,18446744073709551609UL,1UL},{3UL,0xCFA9C39E87DBF2ECLL,9UL},{9UL,1UL,0xECFA9F42EAEA1AAFLL},{3UL,0xC8AD5F528BC57A5DLL,0x305A79DD844C763CLL}}};
            int i, j, k;
            (*l_1694) = l_1693;
            (*l_1702) = (((*l_1693) , ((*l_1701) = (safe_add_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(p_22, (**g_573))) == (**g_573)), ((safe_rshift_func_uint16_t_u_s((**l_1694), 9)) | 0xC6D6D118L))))) != p_21);
            ++l_1723[2][1][2];
        }
    }
    l_1709 = l_1711;
    return p_19;
}







static const union U0 * func_25(union U0 * p_26, union U0 * const p_27, const union U0 * p_28)
{
    int64_t *l_1291 = &g_567;
    int32_t l_1296 = 0x4310124DL;
    union U0 ****l_1305 = (void*)0;
    union U0 ****l_1307 = &g_502[0][5];
    union U0 *****l_1306 = &l_1307;
    int8_t *l_1308 = &g_179[0];
    uint32_t l_1323[9] = {0x3073B2E3L,0x3073B2E3L,0x3073B2E3L,0x3073B2E3L,0x3073B2E3L,0x3073B2E3L,0x3073B2E3L,0x3073B2E3L,0x3073B2E3L};
    uint8_t **l_1342[6][1][5] = {{{&g_171[4][1][3],(void*)0,&g_171[4][1][3],&g_171[4][1][3],(void*)0}},{{&g_171[4][1][0],&g_171[5][1][3],&g_171[5][1][3],&g_171[4][1][0],&g_171[5][1][3]}},{{(void*)0,(void*)0,&g_171[4][1][3],(void*)0,(void*)0}},{{&g_171[5][1][3],&g_171[4][1][0],&g_171[5][1][3],&g_171[5][1][3],&g_171[4][1][0]}},{{(void*)0,&g_171[4][1][3],&g_171[4][1][3],(void*)0,&g_171[4][1][3]}},{{&g_171[4][1][0],&g_171[4][1][0],&g_171[4][1][3],&g_171[4][1][0],&g_171[4][1][0]}}};
    int32_t ****l_1359[3][10][8] = {{{&g_192[3],(void*)0,&g_192[3],&g_192[3],(void*)0,&g_192[3],&g_198,&g_192[3]},{&g_198,&g_198,&g_192[3],&g_192[3],&g_192[3],&g_192[3],(void*)0,&g_192[3]},{&g_192[3],&g_192[3],&g_192[2],&g_192[3],&g_192[3],(void*)0,&g_192[3],&g_192[3]},{(void*)0,&g_192[3],&g_192[3],&g_192[3],&g_192[3],(void*)0,(void*)0,&g_192[3]},{&g_198,&g_192[3],&g_192[3],&g_198,&g_198,&g_192[3],&g_192[3],&g_192[3]},{&g_192[3],(void*)0,&g_192[2],&g_192[3],(void*)0,(void*)0,(void*)0,&g_192[3]},{&g_192[3],(void*)0,&g_192[3],&g_192[3],&g_192[3],&g_192[3],&g_198,&g_198},{&g_192[3],&g_192[3],&g_192[3],&g_192[3],(void*)0,(void*)0,&g_192[3],&g_192[3]},{&g_192[3],&g_192[3],(void*)0,&g_192[3],&g_192[3],(void*)0,&g_192[3],&g_192[3]},{&g_192[3],&g_192[3],&g_192[3],&g_192[3],(void*)0,&g_192[3],&g_192[3],&g_192[3]}},{{&g_192[3],&g_198,&g_192[3],&g_192[3],&g_198,&g_192[3],(void*)0,&g_192[3]},{&g_198,(void*)0,&g_198,&g_192[3],&g_192[3],&g_198,(void*)0,&g_198},{(void*)0,&g_192[3],&g_192[3],&g_192[3],&g_192[3],(void*)0,&g_192[3],&g_192[3]},{&g_192[3],(void*)0,&g_198,&g_198,&g_198,(void*)0,&g_192[3],&g_198},{&g_192[3],&g_192[3],&g_198,&g_192[3],(void*)0,&g_192[3],&g_192[3],&g_192[3]},{&g_198,(void*)0,&g_192[2],&g_192[2],(void*)0,&g_198,(void*)0,&g_198},{&g_192[3],(void*)0,&g_192[2],&g_192[3],&g_198,&g_192[2],(void*)0,&g_192[2]},{&g_192[3],&g_192[3],(void*)0,&g_192[3],&g_192[3],&g_192[3],&g_192[3],&g_198},{(void*)0,&g_192[3],&g_198,&g_192[2],&g_192[3],(void*)0,(void*)0,&g_192[3]},{&g_192[3],&g_198,&g_198,&g_192[3],(void*)0,&g_192[2],&g_192[3],&g_198}},{{&g_192[3],(void*)0,(void*)0,&g_198,(void*)0,&g_198,(void*)0,&g_198},{&g_192[2],(void*)0,&g_192[2],&g_198,&g_192[3],&g_192[2],(void*)0,&g_192[3]},{&g_192[3],&g_198,&g_192[2],&g_192[3],(void*)0,(void*)0,&g_192[3],&g_192[2]},{&g_192[3],&g_192[3],&g_198,&g_198,&g_192[3],&g_192[3],&g_192[3],&g_192[3]},{&g_192[2],&g_192[3],&g_198,&g_192[2],(void*)0,&g_192[2],&g_198,&g_192[3]},{&g_192[3],(void*)0,&g_192[2],&g_198,(void*)0,&g_198,(void*)0,&g_192[2]},{&g_192[3],(void*)0,&g_192[3],&g_192[3],&g_192[3],&g_192[3],(void*)0,&g_192[3]},{(void*)0,&g_192[3],&g_192[2],&g_198,&g_192[3],(void*)0,&g_198,&g_198},{&g_192[3],(void*)0,&g_198,&g_198,&g_198,(void*)0,&g_192[3],&g_198},{&g_192[3],&g_192[3],&g_198,&g_192[3],(void*)0,&g_192[3],&g_192[3],&g_192[3]}}};
    int32_t **** const *l_1358[1][7][1] = {{{(void*)0},{&l_1359[2][7][0]},{(void*)0},{&l_1359[2][7][0]},{(void*)0},{&l_1359[2][7][0]},{(void*)0}}};
    int16_t l_1360 = 0x50FBL;
    uint32_t l_1385 = 18446744073709551606UL;
    int16_t **l_1392 = (void*)0;
    uint32_t *l_1429 = &g_568[1];
    int8_t l_1454 = 0L;
    const int32_t **** const *l_1473 = (void*)0;
    int32_t **l_1557[4][7][6] = {{{&g_1309[2][3],(void*)0,&g_1309[3][4],&g_1309[2][3],(void*)0,&g_1309[1][3]},{&g_1309[2][3],(void*)0,&g_1309[2][3],(void*)0,&g_1309[2][3],&g_1309[1][3]},{&g_1309[2][3],&g_1309[2][3],&g_1309[0][4],&g_1309[2][3],(void*)0,&g_1309[2][3]},{&g_1309[5][4],&g_1309[2][3],&g_1309[1][3],&g_1309[1][3],&g_1309[2][3],&g_1309[5][4]},{(void*)0,&g_1309[2][3],&g_1309[2][3],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_1309[2][3],&g_1309[2][3],&g_1309[1][3],&g_1309[4][7]},{(void*)0,(void*)0,&g_1309[2][3],(void*)0,&g_1309[1][3],&g_1309[2][3]}},{{(void*)0,(void*)0,&g_1309[2][3],&g_1309[1][3],&g_1309[2][3],&g_1309[2][3]},{&g_1309[5][4],&g_1309[1][3],&g_1309[2][3],&g_1309[1][3],&g_1309[2][3],&g_1309[2][3]},{&g_1309[3][4],(void*)0,&g_1309[2][3],&g_1309[2][3],(void*)0,&g_1309[2][3]},{&g_1309[2][3],&g_1309[2][3],&g_1309[0][4],(void*)0,&g_1309[2][3],&g_1309[2][3]},{&g_1309[1][3],(void*)0,&g_1309[2][3],&g_1309[2][3],&g_1309[0][4],&g_1309[2][3]},{&g_1309[2][3],&g_1309[1][3],&g_1309[2][3],&g_1309[3][4],&g_1309[2][3],&g_1309[2][3]},{(void*)0,&g_1309[2][3],&g_1309[2][3],(void*)0,&g_1309[2][3],&g_1309[0][4]}},{{&g_1309[2][3],&g_1309[2][3],&g_1309[2][3],&g_1309[2][3],&g_1309[2][3],&g_1309[2][3]},{&g_1309[2][3],(void*)0,&g_1309[1][3],&g_1309[0][4],&g_1309[2][3],(void*)0},{(void*)0,&g_1309[2][3],&g_1309[3][4],(void*)0,&g_1309[2][3],&g_1309[2][3]},{(void*)0,&g_1309[2][3],(void*)0,&g_1309[2][3],&g_1309[2][3],&g_1309[2][3]},{&g_1309[2][3],&g_1309[1][3],&g_1309[2][3],(void*)0,&g_1309[0][4],&g_1309[4][7]},{&g_1309[2][3],(void*)0,&g_1309[2][3],&g_1309[2][3],&g_1309[2][3],(void*)0},{&g_1309[4][7],&g_1309[2][3],&g_1309[2][3],&g_1309[2][3],(void*)0,(void*)0}},{{&g_1309[2][3],(void*)0,(void*)0,(void*)0,&g_1309[2][3],&g_1309[2][3]},{&g_1309[2][3],&g_1309[1][3],&g_1309[6][6],&g_1309[2][3],&g_1309[2][3],&g_1309[6][6]},{(void*)0,(void*)0,&g_1309[5][4],(void*)0,&g_1309[4][7],&g_1309[1][3]},{(void*)0,&g_1309[6][6],(void*)0,&g_1309[0][4],(void*)0,&g_1309[5][4]},{&g_1309[2][3],(void*)0,(void*)0,&g_1309[2][3],(void*)0,&g_1309[1][3]},{&g_1309[2][3],&g_1309[2][3],&g_1309[5][4],(void*)0,&g_1309[2][3],&g_1309[6][6]},{(void*)0,&g_1309[2][3],&g_1309[6][6],&g_1309[3][4],&g_1309[6][6],&g_1309[2][3]}}};
    int64_t l_1560 = 0x91B14D4609B87EEFLL;
    uint16_t l_1567 = 0x76E9L;
    uint8_t l_1612[5][10][5] = {{{0x8AL,0x75L,0UL,255UL,0x92L},{0x87L,9UL,0x6EL,0xE3L,1UL},{6UL,0UL,0UL,0xF8L,7UL},{255UL,255UL,255UL,0x14L,1UL},{246UL,0x92L,0x25L,0x25L,0x92L},{0x69L,255UL,0x2BL,0xF6L,0xEBL},{252UL,0UL,250UL,0x25L,7UL},{251UL,9UL,0xF6L,0x14L,1UL},{252UL,0x75L,0x28L,0xF8L,0UL},{0x69L,1UL,0xF6L,0xE3L,0UL}},{{246UL,0x17L,250UL,255UL,0UL},{255UL,1UL,0x2BL,0x2BL,1UL},{6UL,0x17L,0x25L,0UL,7UL},{0x87L,1UL,255UL,0x2BL,0xEBL},{0x8AL,0x75L,0UL,0x17L,3UL},{0x61L,0xB8L,0UL,255UL,255UL},{0UL,3UL,0UL,0x2EL,248UL},{0xB5L,1UL,1UL,255UL,255UL},{0x03L,3UL,7UL,7UL,3UL},{0x6EL,1UL,0xEBL,1UL,0x1CL}},{{0x87L,3UL,0x92L,7UL,0UL},{0xF6L,0xB8L,1UL,255UL,0x67L},{0x87L,4UL,7UL,0x2EL,3UL},{0x6EL,255UL,1UL,255UL,5UL},{0x03L,249UL,0x92L,0x17L,3UL},{0xB5L,0x67L,0xEBL,0xEBL,0x67L},{0UL,249UL,7UL,0UL,0UL},{0x61L,255UL,1UL,0xEBL,0x1CL},{0x67L,4UL,0UL,0x17L,3UL},{0x61L,0xB8L,0UL,255UL,255UL}},{{0UL,3UL,0UL,0x2EL,248UL},{0xB5L,1UL,1UL,255UL,255UL},{0x03L,3UL,7UL,7UL,3UL},{0x6EL,1UL,0xEBL,1UL,0x1CL},{0x87L,3UL,0x92L,7UL,0UL},{0xF6L,0xB8L,1UL,255UL,0x67L},{0x87L,4UL,7UL,0x2EL,3UL},{0x6EL,255UL,1UL,255UL,5UL},{0x03L,249UL,0x92L,0x17L,3UL},{0xB5L,0x67L,0xEBL,0xEBL,0x67L}},{{0UL,249UL,7UL,0UL,0UL},{0x61L,255UL,1UL,0xEBL,0x1CL},{0x67L,4UL,0UL,0x17L,3UL},{0x61L,0xB8L,0UL,255UL,255UL},{0UL,3UL,0UL,0x2EL,248UL},{0xB5L,1UL,1UL,255UL,255UL},{0x03L,3UL,7UL,7UL,3UL},{0x6EL,1UL,0xEBL,1UL,0x1CL},{0x87L,3UL,0x92L,7UL,0UL},{0xF6L,0xB8L,1UL,255UL,0x67L}}};
    int i, j, k;
    if (((safe_lshift_func_uint8_t_u_s(246UL, (*g_279))) , ((~((*l_1291) = 0L)) || (((**g_573) = (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((((l_1296 , (safe_rshift_func_int16_t_s_s(l_1296, ((~(((safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s(((*l_1291) |= l_1296))) , ((l_1305 = l_1305) != ((*l_1306) = &g_502[0][3]))), ((void*)0 != l_1308))) <= (-1L)) & 0UL)) , 0x8375L)))) && 0x20L) | l_1296) <= l_1296), l_1296)), l_1296))) || (**g_573)))))
    {
        int32_t **l_1310 = &g_1309[2][3];
        const int8_t l_1321 = 0x92L;
        int8_t *l_1322 = &g_572.f1;
        uint16_t l_1355[9][4] = {{65535UL,0x38CDL,1UL,65535UL},{65535UL,65528UL,0x2A7FL,0x38CDL},{4UL,0x2A7FL,0x2A7FL,4UL},{65535UL,65527UL,65533UL,0x38CDL},{65535UL,1UL,0x38CDL,65535UL},{0x38CDL,65535UL,0UL,65535UL},{4UL,1UL,6UL,0x38CDL},{0xFAAAL,65527UL,65535UL,65528UL},{6UL,4UL,0x2A7FL,0x2A7FL}};
        int32_t ***** const l_1357 = (void*)0;
        int32_t l_1361 = (-4L);
        uint32_t l_1363 = 1UL;
        const int64_t *l_1375 = &g_818;
        const int64_t ** const l_1374 = &l_1375;
        union U0 *l_1379[4][5] = {{&g_24[0],&g_24[7],&g_24[7],&g_24[0],&g_24[7]},{&g_24[0],&g_24[0],(void*)0,&g_24[0],&g_24[0]},{&g_24[7],&g_24[0],&g_24[7],&g_24[7],&g_24[0]},{&g_24[0],&g_24[7],&g_24[7],&g_24[0],&g_24[7]}};
        int32_t l_1410 = 0x8D786F6DL;
        int32_t l_1443 = 0x2BB3467EL;
        int8_t l_1450 = 4L;
        int32_t l_1452 = 0x9EE8DD91L;
        int32_t l_1453[4][1][3] = {{{0x286FFA54L,1L,(-1L)}},{{0x286FFA54L,0x286FFA54L,1L}},{{7L,1L,1L}},{{1L,(-1L),(-1L)}}};
        uint32_t *l_1470 = &g_568[1];
        int8_t l_1471 = (-6L);
        const uint8_t *l_1510[3][3];
        const uint8_t **l_1509 = &l_1510[2][0];
        const uint8_t ***l_1508 = &l_1509;
        const uint8_t ****l_1507 = &l_1508;
        int8_t l_1530[5][3][10] = {{{(-5L),5L,0xEFL,0xD3L,(-8L),0xD3L,0x91L,0x18L,6L,0x18L},{0x6CL,0x4CL,0x28L,0x4AL,0x28L,0x4CL,0x6CL,0x1FL,0x21L,0xB3L},{7L,0x27L,4L,5L,0xB4L,0xDDL,0x01L,0x55L,0xA4L,0x1FL}},{{(-6L),0x27L,0xF4L,0xF0L,(-4L),0x2BL,0x6CL,0xB3L,1L,0x21L},{0x33L,0x4CL,(-6L),(-1L),0xF6L,4L,0x91L,(-6L),0xD3L,0xF4L},{0x38L,5L,0xCDL,5L,0x07L,0x6CL,(-6L),0x01L,0x53L,0x95L}},{{0L,0xA6L,(-6L),(-4L),0xB9L,1L,0xEFL,0xC8L,0L,6L},{0x65L,0L,0xD3L,(-1L),0x1FL,0x53L,0xB4L,0x9DL,5L,5L},{1L,0x2BL,0x36L,0xEFL,0xEFL,0x36L,0x2BL,1L,0x9DL,0x53L}},{{0xB9L,0x1FL,0xD3L,0x01L,0L,0L,0xA4L,0xF0L,(-8L),0xEFL},{0xF4L,(-5L),0xD3L,0L,(-1L),0xF0L,0xC8L,1L,(-1L),0x3AL},{0x28L,0x21L,0x36L,0x53L,0xD3L,0xBDL,0L,0x9DL,0xB3L,0xEAL}},{{1L,0xB4L,0xD3L,0xEAL,(-1L),0x1FL,(-1L),0xC8L,0xB9L,5L},{0xC8L,0x53L,(-6L),(-6L),0x03L,0xD3L,0xEAL,1L,0x3AL,0x07L},{0xF6L,0xC4L,0x95L,0x27L,0xC8L,(-1L),0xB0L,0x18L,0xF0L,0x03L}}};
        uint32_t l_1545 = 18446744073709551615UL;
        int32_t l_1564 = 1L;
        int16_t **l_1573 = &g_574;
        uint64_t l_1613 = 0xD0F41D0FA9223A80LL;
        const int32_t l_1621 = 0x7AA71897L;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_1510[i][j] = &g_886;
        }
        (*l_1310) = (func_31((*g_503)) , g_1309[2][3]);
        if ((((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((-7L), (safe_mul_func_int8_t_s_s(((*l_1308) = l_1296), g_24[0].f3)))) >= g_24[0].f2), (g_981[3][2] < ((((-1L) && (safe_mod_func_uint64_t_u_u((((*l_1322) ^= ((l_1296 == l_1296) || ((((((l_1296 || l_1296) || l_1296) <= 0x76D3F0B1DECEA4C2LL) && 0x2E84F3FFCACF04BCLL) == l_1296) , l_1321))) , (*g_663)), 0x774E538FC50855ADLL))) & l_1323[0]) <= l_1296)))) | 0x2CFCL), l_1296)) & l_1323[5]) || (*g_279)))
        {
            int32_t l_1324 = (-4L);
            int8_t *l_1352 = &g_24[0].f1;
            uint8_t **l_1356 = &g_171[4][0][0];
            int32_t l_1362 = (-1L);
            uint16_t l_1386 = 0xBADCL;
            int16_t l_1409[10];
            uint32_t l_1411 = 4294967292UL;
            int i;
            for (i = 0; i < 10; i++)
                l_1409[i] = 5L;
            if (l_1324)
            {
                uint16_t l_1339 = 65531UL;
                l_1296 = ((l_1324 > (safe_rshift_func_int16_t_s_u((**g_573), (**g_1199)))) , (((!(safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((*g_663) , (-9L)), l_1323[0])), (l_1323[8] ^ (safe_sub_func_uint64_t_u_u(((~((safe_lshift_func_uint16_t_u_u(l_1296, 8)) , ((safe_lshift_func_int8_t_s_u(l_1323[0], 4)) , l_1339))) | l_1339), l_1321)))))) & (**g_573)) <= (**g_573)));
                return p_26;
            }
            else
            {
                int32_t l_1345 = 0L;
                int32_t *l_1346 = &g_981[3][2];
                union U0 *l_1353[6][1][5] = {{{&g_572,&g_572,&g_24[6],&g_24[0],&g_24[0]}},{{&g_572,&g_24[4],&g_24[6],&g_24[4],&g_24[0]}},{{(void*)0,&g_24[6],(void*)0,&g_24[6],(void*)0}},{{&g_24[0],&g_24[4],&g_24[0],(void*)0,&g_572}},{{&g_24[0],&g_572,&g_24[0],&g_572,&g_572}},{{(void*)0,(void*)0,(void*)0,&g_24[4],&g_572}}};
                union U0 **l_1354 = &l_1353[4][0][0];
                int i, j, k;
                l_1360 = (safe_lshift_func_uint16_t_u_u((l_1296 ^ 0x45L), ((((((*g_246) = l_1342[2][0][0]) == ((((safe_mod_func_uint32_t_u_u((l_1345 , ((((((*g_663) , (((*l_1346) = l_1324) , ((**g_573) = ((((((safe_rshift_func_uint16_t_u_u((~(safe_rshift_func_int16_t_s_u((*l_1346), 0))), ((**g_1199) ^= ((((18446744073709551607UL != (((*l_1354) = func_33((&l_1321 == l_1352), (*l_1346), l_1353[4][0][0], l_1323[5])) != p_26)) , (*p_28)) , l_1323[0]) == 0x23489671L)))) != l_1321) || g_24[0].f1) <= l_1296) , (void*)0) == (void*)0)))) == l_1323[0]) <= g_1091[1]) | l_1324) , 0UL)), l_1345)) , g_51[0]) != l_1355[1][3]) , l_1356)) >= g_24[0].f1) , l_1357) == l_1358[0][5][0])));
                --l_1363;
            }
            if ((((((0xA6L && ((safe_add_func_int32_t_s_s(0xA2B2E2B7L, ((((***l_1306) = &p_26) == &p_27) , (safe_rshift_func_uint16_t_u_s(((*g_1200) = (((*g_1200) , (safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((void*)0 != l_1374), 0x22L)), (0x5392EE0EEA5C847FLL | 0x9A8E1AF33254A6F2LL)))) || 1L)), 9))))) & (*g_574))) | 0xBCBFF353L) | (*g_279)) , 0xAB87C667L) | 0x8C0AFCBAL))
            {
                int32_t *l_1376[4][6][4] = {{{&g_981[1][0],(void*)0,&g_981[1][0],&g_491},{&g_981[1][0],&g_491,&g_491,&g_981[1][0]},{&g_981[3][2],&g_491,&g_1091[3],&g_491},{&g_491,(void*)0,&g_1091[3],&g_1091[3]},{&g_981[3][2],&g_981[3][2],&g_491,&g_1091[3]},{&g_981[1][0],(void*)0,&g_981[1][0],&g_491}},{{&g_981[1][0],&g_491,&g_491,&g_981[1][0]},{&g_981[3][2],&g_491,&g_1091[3],&g_491},{&g_491,(void*)0,&g_1091[3],&g_1091[3]},{&g_981[3][2],&g_981[3][2],&g_491,&g_1091[3]},{&g_981[1][0],(void*)0,&g_981[1][0],&g_491},{&g_981[1][0],&g_491,&g_491,&g_981[1][0]}},{{&g_981[3][2],&g_491,&g_1091[3],&g_491},{&g_491,(void*)0,&g_1091[3],&g_1091[3]},{&g_981[3][2],&g_981[3][2],&g_491,&g_1091[3]},{&g_981[1][0],(void*)0,&g_981[1][0],&g_491},{&g_981[1][0],&g_491,&g_491,&g_981[1][0]},{&g_981[3][2],&g_491,&g_1091[3],&g_491}},{{&g_491,(void*)0,&g_1091[3],&g_1091[3]},{&g_981[3][2],&g_981[3][2],&g_491,&g_1091[3]},{&g_981[1][0],(void*)0,&g_981[1][0],&g_491},{&g_981[1][0],&g_491,&g_491,&g_981[1][0]},{&g_981[3][2],&g_491,&g_1091[3],&g_491},{&g_491,(void*)0,&g_1091[3],&g_1091[3]}}};
                int32_t *l_1378 = &g_841;
                int i, j, k;
                for (g_1142 = 0; (g_1142 <= 3); g_1142 += 1)
                {
                    const union U0 *l_1377 = (void*)0;
                    l_1376[0][2][3] = l_1376[2][4][0];
                    for (l_1362 = 0; (l_1362 <= 0); l_1362 += 1)
                    {
                        return l_1377;
                    }
                }
                l_1386 ^= ((((*l_1378) ^= l_1362) , (func_31(l_1379[1][0]) , ((safe_sub_func_uint64_t_u_u(((*g_279) ^ (g_288[0][0][0] ^ (((safe_add_func_int64_t_s_s((!l_1362), g_183[0][1])) | (((void*)0 == g_1094) < l_1324)) , l_1385))), (*g_663))) <= l_1324))) , l_1321);
            }
            else
            {
                int64_t *l_1396 = &g_567;
                int32_t l_1403[3][1];
                int32_t **l_1404 = (void*)0;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1403[i][j] = 4L;
                }
                for (g_886 = 0; (g_886 < 39); g_886++)
                {
                    int16_t **l_1389[7] = {&g_574,&g_574,&g_574,&g_574,&g_574,&g_574,&g_574};
                    int16_t ***l_1390 = (void*)0;
                    int16_t ***l_1391 = (void*)0;
                    int32_t l_1393[3];
                    const union U0 *l_1406 = &g_572;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1393[i] = 0x2185B845L;
                    l_1392 = l_1389[2];
                    l_1362 = (l_1393[0] , (safe_rshift_func_int8_t_s_s(l_1393[2], (l_1396 != &g_183[0][2]))));
                    if (((safe_lshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((**l_1392) = (safe_sub_func_uint64_t_u_u(l_1403[1][0], (((-2L) && g_24[0].f0) , 0x0BA3B8E819FA9231LL)))), (((((*p_28) , (l_1404 == l_1404)) | l_1362) , ((0x31L == (*g_279)) && l_1386)) , (*g_1200)))) | 5UL), (*g_279))) && 0x2EL))
                    {
                        const union U0 *l_1405 = &g_572;
                        if (l_1324)
                            break;
                        return l_1405;
                    }
                    else
                    {
                        return l_1406;
                    }
                }
                (*l_1310) = &l_1362;
                l_1410 ^= (safe_add_func_uint32_t_u_u(0UL, l_1409[6]));
            }
            l_1362 |= (l_1411 <= l_1386);
        }
        else
        {
            const int64_t l_1419[8][3][10] = {{{(-9L),1L,0L,(-4L),0x40B1DA0F8C221FDCLL,(-1L),0x73B15AA3A3D5378ELL,(-1L),0x71C385B466CE1B3ELL,(-1L)},{0x7DBDDBC4F253C496LL,(-4L),0x55D59F9EE1D6AEC0LL,(-7L),0xED74149FC66F1B97LL,0L,0xBEAB3939FC90AA58LL,1L,0L,0x71C385B466CE1B3ELL},{0L,0x97CDAA1718278D35LL,(-1L),1L,1L,0xBA67EF7D24FD2C0ELL,9L,0x8F08DFE63B8DFC03LL,0x8F08DFE63B8DFC03LL,9L}},{{1L,0xAB7BB704E9200581LL,9L,9L,0xAB7BB704E9200581LL,1L,0xED74149FC66F1B97LL,0L,(-7L),0L},{9L,0x73B15AA3A3D5378ELL,0xAB7BB704E9200581LL,0x7DBDDBC4F253C496LL,0L,0xD7E69F0C1D54079ELL,0x92D3F4A47005B62DLL,0xBA67EF7D24FD2C0ELL,0xED74149FC66F1B97LL,0x71C385B466CE1B3ELL},{(-4L),1L,0L,0x40B1DA0F8C221FDCLL,0x7D0C186860B35CB9LL,0x2DAD5159FB8231E7LL,0x71C385B466CE1B3ELL,(-1L),0xA88A176C7415775DLL,0L}},{{0x2DAD5159FB8231E7LL,0x71C385B466CE1B3ELL,(-1L),0xA88A176C7415775DLL,0L,0x73B15AA3A3D5378ELL,(-7L),0x8F08DFE63B8DFC03LL,0L,0x8F08DFE63B8DFC03LL},{0x40B1DA0F8C221FDCLL,1L,1L,0x73B15AA3A3D5378ELL,1L,1L,0x40B1DA0F8C221FDCLL,0xA88A176C7415775DLL,(-8L),(-7L)},{(-1L),(-1L),0x97CDAA1718278D35LL,0L,0xC0F6979443315EDDLL,0L,0x73B15AA3A3D5378ELL,1L,(-7L),0xA88A176C7415775DLL}},{{1L,(-1L),0x9F93DCB67D667FAELL,(-1L),0L,(-8L),0x40B1DA0F8C221FDCLL,(-7L),(-1L),0x2DAD5159FB8231E7LL},{0x7DBDDBC4F253C496LL,1L,0x7D0C186860B35CB9LL,(-1L),0x40B1DA0F8C221FDCLL,1L,(-7L),0L,0L,0L},{0xD7E69F0C1D54079ELL,0x71C385B466CE1B3ELL,(-7L),0x97CDAA1718278D35LL,0x97CDAA1718278D35LL,(-7L),0x71C385B466CE1B3ELL,0xD7E69F0C1D54079ELL,0xC0F6979443315EDDLL,0L}},{{0xAB7BB704E9200581LL,1L,0xED74149FC66F1B97LL,0L,(-7L),0L,0x92D3F4A47005B62DLL,(-4L),0x2DAD5159FB8231E7LL,0x97CDAA1718278D35LL},{0xBEAB3939FC90AA58LL,0L,0xED74149FC66F1B97LL,(-7L),0x55D59F9EE1D6AEC0LL,(-4L),0x7DBDDBC4F253C496LL,0xD7E69F0C1D54079ELL,0x8F08DFE63B8DFC03LL,(-1L)},{(-1L),(-9L),(-7L),0L,1L,0x9F93DCB67D667FAELL,(-4L),0L,0xBEAB3939FC90AA58LL,0x2522871B831D6386LL}},{{0L,(-7L),0x7D0C186860B35CB9LL,0x2522871B831D6386LL,(-1L),0x2522871B831D6386LL,0x7D0C186860B35CB9LL,(-7L),0L,(-1L)},{(-7L),0xBA67EF7D24FD2C0ELL,0x9F93DCB67D667FAELL,(-9L),(-1L),0L,0L,1L,0x97CDAA1718278D35LL,1L},{9L,(-1L),0x97CDAA1718278D35LL,(-9L),0xBEAB3939FC90AA58LL,0x40B1DA0F8C221FDCLL,0L,0xA88A176C7415775DLL,0L,0x7D0C186860B35CB9LL}},{{9L,1L,1L,0x2522871B831D6386LL,0xA88A176C7415775DLL,9L,0xBA67EF7D24FD2C0ELL,0x8F08DFE63B8DFC03LL,0xBEAB3939FC90AA58LL,(-1L)},{0x73B15AA3A3D5378ELL,0x8F08DFE63B8DFC03LL,(-1L),0L,0x92D3F4A47005B62DLL,0x92D3F4A47005B62DLL,0L,(-1L),0x8F08DFE63B8DFC03LL,0x73B15AA3A3D5378ELL},{(-1L),0L,0L,(-7L),0x9F93DCB67D667FAELL,0xC0F6979443315EDDLL,(-8L),0xBA67EF7D24FD2C0ELL,0x2DAD5159FB8231E7LL,0L}},{{(-8L),(-4L),(-9L),0L,0x9F93DCB67D667FAELL,0L,1L,0x2522871B831D6386LL,0xC0F6979443315EDDLL,0x73B15AA3A3D5378ELL},{0x9F93DCB67D667FAELL,(-8L),0xAB7BB704E9200581LL,0x97CDAA1718278D35LL,0x92D3F4A47005B62DLL,(-9L),1L,9L,0L,(-1L)},{0x71C385B466CE1B3ELL,0x7D0C186860B35CB9LL,(-1L),0x92D3F4A47005B62DLL,0xED74149FC66F1B97LL,1L,0xED74149FC66F1B97LL,0x92D3F4A47005B62DLL,0L,0x8F08DFE63B8DFC03LL}}};
            uint32_t *l_1426 = (void*)0;
            uint32_t **l_1427 = (void*)0;
            uint32_t **l_1428 = &l_1426;
            int32_t l_1430 = 0x8BE0B1AAL;
            int32_t l_1448[5][8] = {{(-9L),0x54BF4223L,0x54BF4223L,(-9L),0x54BF4223L,0x54BF4223L,(-9L),0x54BF4223L},{(-9L),(-9L),(-1L),(-9L),(-9L),(-1L),(-9L),(-9L)},{0x54BF4223L,(-9L),0x54BF4223L,0x54BF4223L,(-9L),0x54BF4223L,0x54BF4223L,(-9L)},{(-9L),0x54BF4223L,0x54BF4223L,(-9L),0x54BF4223L,0x54BF4223L,(-9L),0x54BF4223L},{(-9L),(-9L),(-1L),(-9L),(-9L),(-1L),(-9L),(-9L)}};
            const uint16_t l_1449 = 0x4751L;
            uint32_t l_1455[9][2][5] = {{{0xE3FF7B6DL,0xE3FF7B6DL,7UL,4294967295UL,4294967294UL},{0x87DC8562L,0UL,4294967295UL,0x8AFEB262L,0x9C7CD9D7L}},{{0x34149814L,0UL,1UL,4294967295UL,0x458A91BEL},{4294967289UL,0UL,0xE3FF7B6DL,0x87DC8562L,0x8AFEB262L}},{{1UL,0xE3FF7B6DL,0x34149814L,4294967293UL,4294967295UL},{4294967295UL,1UL,1UL,0UL,4294967295UL}},{{5UL,0xDAD7B6EDL,0xC20F8203L,4294967286UL,4294967295UL},{7UL,0x6F8B2480L,0x458A91BEL,4294967295UL,4294967295UL}},{{0UL,4294967295UL,0UL,0xC4AA7AFFL,0x8AFEB262L},{4294967293UL,4294967289UL,7UL,0x39BC5442L,0x458A91BEL}},{{1UL,4294967294UL,0x39BC5442L,0x06A4AE39L,0x9C7CD9D7L},{0x5B6989B1L,0x8AFEB262L,7UL,0x458A91BEL,4294967294UL}},{{0x458A91BEL,4294967286UL,0UL,0x1121F8F4L,4294967295UL},{0UL,0x40987626L,0x458A91BEL,4294967295UL,4294967289UL}},{{0x8AFEB262L,1UL,0xC20F8203L,0x9C7CD9D7L,0x071645FBL},{0x8AFEB262L,0x458A91BEL,1UL,4294967289UL,0UL}},{{0UL,0x34149814L,0x34149814L,0UL,1UL},{0x458A91BEL,0x06A4AE39L,0xE3FF7B6DL,0x40987626L,0UL}}};
            uint16_t *l_1472 = &g_288[2][4][0];
            const int32_t *l_1478 = &g_24[0].f0;
            const int32_t **l_1477 = &l_1478;
            const int32_t ***l_1476[9];
            const int32_t **** const l_1475 = &l_1476[2];
            const int32_t **** const *l_1474 = &l_1475;
            int32_t ***l_1501 = &g_193;
            uint8_t l_1538 = 248UL;
            uint8_t **l_1541[7][2] = {{&g_171[4][3][3],&g_171[4][1][3]},{&g_171[4][3][3],&g_171[4][1][3]},{&g_171[4][3][3],&g_171[4][1][3]},{&g_171[4][3][3],&g_171[4][1][3]},{&g_171[4][3][3],&g_171[4][1][3]},{&g_171[4][3][3],&g_171[4][1][3]},{&g_171[4][3][3],&g_171[4][1][3]}};
            int16_t l_1565 = (-1L);
            uint8_t l_1572 = 1UL;
            int16_t ***l_1620 = &l_1392;
            int64_t l_1652 = 0L;
            uint32_t l_1661 = 4UL;
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_1476[i] = &l_1477;
            l_1410 = (safe_mod_func_uint8_t_u_u((l_1430 = (safe_add_func_int32_t_s_s(((+((void*)0 == &l_1359[2][7][0])) || ((((safe_div_func_uint64_t_u_u((0xA6C2L && (l_1419[7][2][1] & ((safe_mod_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((*g_279) && l_1419[7][2][1]) != (((((*l_1428) = l_1426) == l_1429) || (1L ^ 0x061A8A77L)) , l_1419[7][2][1])), (*g_279))), 0xE3L)) == 0L), (*g_1200))) || l_1419[7][2][1]))), (*g_663))) < l_1419[4][2][0]) <= (*g_279)) > 250UL)), l_1363))), l_1419[7][2][1]));
            (*l_1310) = ((safe_lshift_func_uint16_t_u_u((0UL | (safe_mod_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((*l_1308) &= l_1419[1][0][9]) >= (((safe_lshift_func_uint16_t_u_s(((void*)0 != &g_192[3]), 13)) == ((*g_574) = (((-1L) < ((l_1443 != (safe_sub_func_uint16_t_u_u(((**g_1199) = (safe_mul_func_uint8_t_u_u((l_1448[0][6] |= l_1430), 248UL))), ((l_1449 , (*g_663)) < (*g_663))))) & l_1449)) , l_1450))) != 1UL)), 6)), l_1430)) != g_893[3][1][0]), l_1449))), l_1430)) , &l_1448[0][6]);
            if (((*g_279) != ((l_1455[6][0][1]++) , ((l_1474 = (((*l_1472) &= ((**g_1199) = ((((((safe_mod_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(((l_1448[0][6] , (safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s((l_1448[2][5] > (l_1470 != (void*)0)), 0xB3L)), (*g_279))), l_1471)), 8))) == ((void*)0 == l_1322)), l_1355[1][3])) , g_1041), 0x18C08846749EE72CLL)) ^ l_1448[2][1]) , 0x0F36L) && l_1449) | l_1449) >= g_284))) , l_1473)) == l_1357))))
            {
                int32_t l_1488 = 0x6D06974BL;
                int32_t l_1491 = 0x92FF6EDDL;
                int32_t ***l_1500 = &l_1310;
                const union U0 *l_1514[4] = {&g_572,&g_572,&g_572,&g_572};
                uint8_t **l_1520 = &g_171[6][5][2];
                uint8_t ***l_1521 = &g_170;
                int16_t *l_1539 = &l_1360;
                uint32_t *l_1542 = &l_1323[5];
                int32_t l_1543 = 0x18E190B5L;
                int16_t *l_1544 = &g_1515;
                int32_t l_1562[8] = {(-7L),(-1L),(-7L),(-1L),(-7L),(-1L),(-7L),(-1L)};
                int32_t l_1566 = 1L;
                const int8_t l_1603 = 0x04L;
                int i;
                if (((safe_mul_func_int8_t_s_s((!g_106), (safe_div_func_uint16_t_u_u(0x95CAL, (~0L))))) < (*g_663)))
                {
                    int64_t l_1492[3][8][10] = {{{1L,(-1L),0x16AF6FFD6DC0B64CLL,0x0A3D8C521D2EFD32LL,(-7L),8L,0x16AF6FFD6DC0B64CLL,0xDDD5C7D950E5F820LL,1L,0xDCF0312C75B2E9AELL},{(-8L),0x0A3D8C521D2EFD32LL,6L,0L,1L,9L,0xFF0A6F608EF2957FLL,9L,1L,0L},{1L,0xDDD5C7D950E5F820LL,1L,0x5E0F4FD82DA2CCB3LL,0x16AF6FFD6DC0B64CLL,0x0267320DE993198ALL,8L,0x4586CDF2A5A49B25LL,(-7L),0x0A3D8C521D2EFD32LL},{1L,0x4586CDF2A5A49B25LL,0xCED59AB1E8624593LL,0x5E0F4FD82DA2CCB3LL,1L,0x4586CDF2A5A49B25LL,1L,8L,(-7L),0x650EA7EBA5D5FFD2LL},{1L,8L,(-2L),(-4L),(-7L),0x5E0F4FD82DA2CCB3LL,(-7L),(-4L),(-2L),8L},{1L,0x0A3D8C521D2EFD32LL,0xFF0A6F608EF2957FLL,0xDDD5C7D950E5F820LL,(-1L),0x0267320DE993198ALL,1L,0x4AAD0CCAA97462CDLL,1L,0x0267320DE993198ALL},{8L,(-4L),1L,0x4586CDF2A5A49B25LL,8L,0x0267320DE993198ALL,0x16AF6FFD6DC0B64CLL,0x5E0F4FD82DA2CCB3LL,1L,0xDDD5C7D950E5F820LL},{1L,0x650EA7EBA5D5FFD2LL,0x2B4E29BFC97BB7D1LL,0x5E0F4FD82DA2CCB3LL,(-8L),0x5E0F4FD82DA2CCB3LL,0x2B4E29BFC97BB7D1LL,0x650EA7EBA5D5FFD2LL,1L,(-1L)}},{{1L,0x5E0F4FD82DA2CCB3LL,0x16AF6FFD6DC0B64CLL,0x0267320DE993198ALL,8L,0x4586CDF2A5A49B25LL,1L,(-4L),8L,0xDCF0312C75B2E9AELL},{1L,0x4AAD0CCAA97462CDLL,1L,0x0267320DE993198ALL,(-1L),0xDDD5C7D950E5F820LL,0xFF0A6F608EF2957FLL,0x0A3D8C521D2EFD32LL,1L,0x0A3D8C521D2EFD32LL},{(-2L),(-4L),(-7L),0x5E0F4FD82DA2CCB3LL,(-7L),(-4L),(-2L),8L,1L,0x4AAD0CCAA97462CDLL},{(-7L),8L,1L,0x4586CDF2A5A49B25LL,1L,0x5E0F4FD82DA2CCB3LL,0xCED59AB1E8624593LL,0x4586CDF2A5A49B25LL,1L,8L},{(-7L),8L,0x16AF6FFD6DC0B64CLL,0xDDD5C7D950E5F820LL,1L,0xDCF0312C75B2E9AELL,(-2L),0x4AAD0CCAA97462CDLL,(-2L),0xDCF0312C75B2E9AELL},{0x85DD58074B646EE9LL,(-4L),0x2B4E29BFC97BB7D1LL,(-4L),0x85DD58074B646EE9LL,0x0267320DE993198ALL,0xFF0A6F608EF2957FLL,0L,(-7L),0xDDD5C7D950E5F820LL},{(-7L),0x4AAD0CCAA97462CDLL,1L,0x5E0F4FD82DA2CCB3LL,0xAF03520CE54AA0B4LL,0L,1L,0x650EA7EBA5D5FFD2LL,(-7L),0xDDD5C7D950E5F820LL},{(-7L),0x5E0F4FD82DA2CCB3LL,0xFF0A6F608EF2957FLL,0xDCF0312C75B2E9AELL,0x85DD58074B646EE9LL,0x4586CDF2A5A49B25LL,0x2B4E29BFC97BB7D1LL,0x4586CDF2A5A49B25LL,0x85DD58074B646EE9LL,0xDCF0312C75B2E9AELL}},{{(-2L),0x650EA7EBA5D5FFD2LL,(-2L),0x0267320DE993198ALL,1L,(-1L),0x16AF6FFD6DC0B64CLL,0x0A3D8C521D2EFD32LL,(-7L),8L},{1L,(-4L),0xCED59AB1E8624593LL,0L,1L,(-4L),1L,0x0A3D8C521D2EFD32LL,(-7L),0x4AAD0CCAA97462CDLL},{1L,0x0A3D8C521D2EFD32LL,(-2L),0x4586CDF2A5A49B25LL,(-7L),0L,(-7L),0x4586CDF2A5A49B25LL,(-2L),0x0A3D8C521D2EFD32LL},{1L,8L,0xFF0A6F608EF2957FLL,(-1L),(-1L),0xDCF0312C75B2E9AELL,1L,0x650EA7EBA5D5FFD2LL,1L,0xDCF0312C75B2E9AELL},{8L,0x4586CDF2A5A49B25LL,1L,(-4L),8L,0xDCF0312C75B2E9AELL,0x16AF6FFD6DC0B64CLL,0L,1L,(-1L)},{1L,0x4AAD0CCAA97462CDLL,0x2B4E29BFC97BB7D1LL,0L,(-8L),0L,0x2B4E29BFC97BB7D1LL,0x4AAD0CCAA97462CDLL,1L,0x4AAD0CCAA97462CDLL},{(-2L),0x0267320DE993198ALL,1L,(-1L),0x16AF6FFD6DC0B64CLL,0x0A3D8C521D2EFD32LL,(-7L),8L,0x16AF6FFD6DC0B64CLL,0xDDD5C7D950E5F820LL},{0x85DD58074B646EE9LL,(-10L),6L,(-1L),1L,0x650EA7EBA5D5FFD2LL,0x2B4E29BFC97BB7D1LL,0x5E0F4FD82DA2CCB3LL,(-8L),0x5E0F4FD82DA2CCB3LL}}};
                    int32_t l_1502 = 0xCD4BC4B3L;
                    int i, j, k;
                    l_1492[1][0][5] = (safe_div_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s(l_1488)) | l_1488), (safe_sub_func_uint16_t_u_u(l_1355[3][2], ((l_1491 ^= 248UL) && ((void*)0 == g_1094))))));
                    l_1430 ^= (l_1410 = (safe_sub_func_uint16_t_u_u(0x836CL, 0L)));
                    for (g_848 = 0; (g_848 <= 27); g_848 = safe_add_func_uint32_t_u_u(g_848, 3))
                    {
                        int32_t *l_1497 = (void*)0;
                        uint8_t * const *l_1506 = &g_171[6][4][2];
                        uint8_t * const **l_1505 = &l_1506;
                        uint8_t * const ** const * const l_1504 = &l_1505;
                        int32_t l_1513 = 0xD5120FBAL;
                        (***l_1475) = l_1497;
                        l_1502 ^= (((*g_574) <= ((void*)0 != &g_574)) <= (safe_mul_func_uint16_t_u_u((l_1500 == (g_192[5] = l_1501)), (**g_573))));
                        (*l_1477) = (**l_1500);
                        l_1513 &= (l_1443 ^= ((((safe_unary_minus_func_uint16_t_u(((void*)0 == (*l_1500)))) ^ ((((l_1504 != l_1507) <= 0x0D156C9804C00A32LL) , (safe_mul_func_uint8_t_u_u(l_1502, ((*l_1322) ^= (*g_279))))) >= 0x299AF34AL)) && (0xFBE6953AL < g_24[0].f1)) , l_1502));
                    }
                }
                else
                {
                    return l_1514[2];
                }
                g_1515 |= l_1450;
                (*l_1310) = ((((safe_add_func_int32_t_s_s((((**g_573) |= (safe_rshift_func_uint16_t_u_s(((*g_246) != ((*l_1521) = l_1520)), 9))) > ((*l_1544) = ((*g_279) || (((*g_279) = (safe_div_func_int32_t_s_s((((*l_1542) |= (safe_add_func_int8_t_s_s(((((((safe_rshift_func_int8_t_s_u((*g_279), (safe_mul_func_int16_t_s_s(((l_1488 >= l_1530[0][0][4]) , 9L), (((+((safe_mul_func_int16_t_s_s(((*l_1539) = ((safe_rshift_func_int8_t_s_s((*g_279), (safe_rshift_func_uint16_t_u_s((l_1538 == l_1488), l_1491)))) != 0x5F7B81B355F77363LL)), l_1491)) > 0xF13AL)) , g_1540) == l_1310))))) , (void*)0) != l_1541[6][0]) , 255UL) >= (*g_279)) && (**g_1199)), (*g_279)))) , 0L), l_1543))) <= g_291)))), 0xB0C1C670L)) ^ g_288[0][0][0]) == l_1545) , (**l_1500));
                for (l_1488 = 27; (l_1488 != 16); --l_1488)
                {
                    int32_t l_1550[8] = {5L,0x8173E71FL,5L,0x8173E71FL,5L,0x8173E71FL,5L,0x8173E71FL};
                    int32_t **l_1556 = &g_1309[2][3];
                    int32_t *l_1571[5];
                    int32_t **l_1570 = &l_1571[2];
                    int32_t l_1601 = 1L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1571[i] = &l_1452;
                    for (g_106 = (-25); (g_106 != 47); g_106 = safe_add_func_uint16_t_u_u(g_106, 1))
                    {
                        uint16_t l_1551 = 0UL;
                        int32_t l_1561 = 5L;
                        int32_t l_1563[6][10][4] = {{{0xC038DEC2L,3L,(-1L),0x02D0511CL},{(-6L),0x5F3FDB87L,0x50FC69F0L,0x02D0511CL},{0x489E4207L,3L,1L,0x3C5B100BL},{0L,0L,0x8C88C21FL,0xFFF95EC5L},{0xDCAF6A2EL,(-5L),0x20C2EE87L,0L},{0x50FC69F0L,0xDCF1F78EL,0xDD221AA1L,0x20C2EE87L},{(-6L),0x2A1DF7EDL,0x8C88C21FL,0L},{0xFFF95EC5L,0x5C8A01E8L,1L,0xC038DEC2L},{0x489E4207L,0L,(-5L),1L},{0x2A1DF7EDL,7L,(-1L),7L}},{{7L,0x5C8A01E8L,0xDD221AA1L,0x02D0511CL},{1L,(-6L),0x3C5B100BL,0x20C2EE87L},{0L,0x87C50F51L,0xBC111AF7L,0xC038DEC2L},{0L,(-5L),0x3C5B100BL,0L},{1L,0xC038DEC2L,0xDD221AA1L,0x3C5B100BL},{7L,0xDCF1F78EL,(-1L),0L},{0x2A1DF7EDL,0x5F3FDB87L,(-5L),0xC8E66EC8L},{0x489E4207L,0x87C50F51L,1L,0x3C5B100BL},{0xFFF95EC5L,7L,0x8C88C21FL,0x08D3DE02L},{(-6L),(-5L),0xDD221AA1L,7L}},{{0x50FC69F0L,3L,0x20C2EE87L,0x20C2EE87L},{0xDCAF6A2EL,0xDCAF6A2EL,0x8C88C21FL,0xC8E66EC8L},{0L,0x5C8A01E8L,1L,0L},{0x489E4207L,0xC038DEC2L,0x50FC69F0L,1L},{(-6L),0xC038DEC2L,(-1L),0L},{0xC038DEC2L,0x5C8A01E8L,0xBEFB2F61L,0xC8E66EC8L},{1L,0xDCAF6A2EL,(-5L),0x20C2EE87L},{0xFFF95EC5L,3L,0xBC111AF7L,7L},{0x08D3DE02L,(-5L),0x50FC69F0L,0x08D3DE02L},{1L,7L,0x20C2EE87L,0x3C5B100BL}},{{0L,0x87C50F51L,(-1L),0xC8E66EC8L},{0xDCAF6A2EL,0x5F3FDB87L,0x3C5B100BL,0L},{0x489E4207L,0xDCF1F78EL,0x489E4207L,0x3C5B100BL},{0x08D3DE02L,0xC038DEC2L,0x8C88C21FL,0L},{0x2A1DF7EDL,(-5L),0xBEFB2F61L,0xC038DEC2L},{0x50FC69F0L,0x87C50F51L,0xBEFB2F61L,0x20C2EE87L},{0x2A1DF7EDL,(-6L),0x8C88C21FL,0x02D0511CL},{0x08D3DE02L,0x5C8A01E8L,0x489E4207L,7L},{0x489E4207L,7L,0x3C5B100BL,1L},{0xDCAF6A2EL,0L,(-1L),0xC038DEC2L}},{{0L,(-2L),0x01D86F3DL,0L},{0x34C4E230L,(-5L),0xF15622BBL,0x01D86F3DL},{0x20C2EE87L,0x5F3FDB87L,0L,0x489E4207L},{0xBEFB2F61L,0xBC111AF7L,0xBC111AF7L,0xBEFB2F61L},{0x34C4E230L,0x489E4207L,7L,(-1L)},{1L,0x152534CFL,0x87C50F51L,4L},{0x3C5B100BL,0x8C88C21FL,0xF15622BBL,4L},{0x6117B915L,0x152534CFL,1L,(-1L)},{0xDD221AA1L,0x489E4207L,0L,0xBEFB2F61L},{0x50FC69F0L,0xBC111AF7L,0x01D86F3DL,0x489E4207L}},{{0xF15622BBL,0x5F3FDB87L,1L,0x01D86F3DL},{0x3C5B100BL,(-5L),0L,0L},{0xBEFB2F61L,(-2L),(-1L),1L},{0x6117B915L,0x489E4207L,0xBC111AF7L,1L},{(-5L),1L,0x87C50F51L,1L},{1L,(-2L),1L,4L},{0x34C4E230L,0x3C5B100BL,(-1L),0x01D86F3DL},{0xDD221AA1L,1L,0L,1L},{0xDD221AA1L,0xBC111AF7L,(-1L),0xDD221AA1L},{0x34C4E230L,1L,1L,(-1L)}}};
                        int i, j, k;
                        if (l_1550[0])
                            break;
                        ++l_1551;
                        l_1561 = (((*l_1429) = (safe_lshift_func_int8_t_s_u((((*g_198) = l_1556) == ((*g_574) , l_1557[2][6][3])), (((void*)0 != &g_946) ^ (l_1550[0] = (safe_rshift_func_int8_t_s_u(0x27L, 2))))))) || (l_1560 ^ g_59));
                        ++l_1567;
                    }
                    l_1453[1][0][1] = (((*l_1570) = &g_841) != &g_841);
                    if ((l_1572 <= ((*l_1308) = (l_1543 > (l_1573 == l_1392)))))
                    {
                        uint16_t l_1596[2];
                        uint64_t *l_1602 = &g_1171;
                        union U0 *l_1611[1][10] = {{&g_24[1],&g_24[4],&g_24[1],&g_24[1],&g_24[4],&g_24[1],&g_24[4],&g_24[1],&g_24[1],&g_24[4]}};
                        union U0 ** const l_1610 = &l_1611[0][9];
                        union U0 ** const *l_1609 = &l_1610;
                        union U0 ** const **l_1608 = &l_1609;
                        int32_t l_1622 = 0xBB24553BL;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1596[i] = 0xEDFDL;
                        l_1448[3][5] = (safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u(((((*l_1539) = (safe_add_func_int16_t_s_s((((**g_573) = (safe_sub_func_uint64_t_u_u((~(*g_574)), ((safe_add_func_int64_t_s_s((~(~(safe_sub_func_int32_t_s_s(((g_1593 & ((safe_lshift_func_int8_t_s_u(((*g_279) = (*g_279)), 3)) < ((l_1550[3] ^ l_1596[1]) != ((((l_1291 == ((safe_mul_func_uint8_t_u_u(((**g_573) == (safe_rshift_func_int8_t_s_s(((l_1596[1] != g_291) || l_1601), g_568[1]))), 5UL)) , l_1602)) >= l_1488) == 1UL) , g_465[4])))) || l_1596[1]), 0L)))), g_1091[0])) , l_1603)))) , 0L), g_596))) , g_1593) > 0UL), 0x5F4C8FA5L)) > g_491) < 0xECDD14D3C0ECE9E9LL) >= (**g_1199)), l_1550[2])), 0xF33BCD3909358CEELL)), 6L));
                        l_1613 = ((**g_1199) | (((*l_1291) = (safe_mul_func_uint8_t_u_u((((*l_1322) &= ((g_179[1] , ((*g_1200) || (safe_mul_func_int8_t_s_s((*g_279), 0xCEL)))) ^ (l_1601 & (((*l_1608) = &g_503) != (*g_794))))) | l_1612[1][7][1]), 5UL))) | l_1566));
                        l_1622 = (l_1550[0] = (safe_sub_func_uint16_t_u_u((*g_1200), (((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((l_1539 == &l_1449), (&g_573 == l_1620))), ((((((*g_663) == ((((((g_183[6][3] != (((l_1596[0] , l_1562[4]) > l_1621) , 0L)) >= l_1596[1]) & l_1596[1]) , g_491) , l_1550[3]) , (*g_663))) , l_1596[1]) | l_1566) , g_848) , l_1596[1]))) | (**g_1199)) > 0xC6L))));
                        (*l_1556) = (((**l_1570) |= ((**g_1199) < (((safe_mul_func_uint16_t_u_u(4UL, (((0xC3758C19L | (safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x27L, ((*p_28) , (safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((*g_1200), 10)), (*g_1200))), (0x33ACE835L && g_106)))))), 0xA8FCL))) | 4294967289UL) && l_1603))) <= (*g_1200)) , l_1601))) , (**l_1500));
                    }
                    else
                    {
                        (***l_1475) = (**l_1500);
                        return l_1379[2][0];
                    }
                }
            }
            else
            {
                uint64_t l_1645 = 18446744073709551615UL;
                int32_t *l_1659[7] = {&g_161,&g_161,&g_161,&g_161,&g_161,&g_161,&g_161};
                uint64_t **l_1660 = &g_663;
                int i;
                for (g_1041 = (-17); (g_1041 >= 6); g_1041++)
                {
                    uint32_t l_1637 = 0xA06709AFL;
                    l_1637++;
                }
                for (g_1048 = 20; (g_1048 == 30); ++g_1048)
                {
                    uint32_t l_1657 = 0xE59D5BC0L;
                    int32_t l_1658 = 0x1FF08513L;
                    for (g_59 = 25; (g_59 != 7); g_59 = safe_sub_func_uint16_t_u_u(g_59, 2))
                    {
                        uint8_t l_1644 = 0x41L;
                        l_1658 = (l_1644 & ((((l_1645 && 2L) | (safe_sub_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((0x88C1BB41L & ((safe_div_func_uint8_t_u_u((l_1652 > (safe_lshift_func_uint8_t_u_u(l_1645, ((safe_lshift_func_int16_t_s_u(1L, (**g_1199))) >= (*g_1200))))), (*g_279))) || l_1657)), 0L)) <= l_1645), l_1644))) <= l_1644) && (*l_1478)));
                        (***l_1475) = l_1659[2];
                    }
                    l_1448[1][5] = (&g_663 != l_1660);
                }
                l_1661--;
            }
        }
    }
    else
    {
        int16_t l_1668 = (-1L);
        int32_t l_1673 = 0xF1936EE8L;
        int32_t * const l_1674 = &g_59;
        int32_t *l_1675 = &g_1091[0];
        uint32_t l_1688 = 0xBCFE43A3L;
        l_1673 |= (((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((l_1668 > 0x01L) && (((((((*g_663) < g_51[0]) | (safe_mod_func_int64_t_s_s(0x4540503A5B7F02D2LL, (g_51[1] , 1L)))) | 1L) >= ((*g_574) > (-1L))) ^ l_1668) == 0UL)), l_1668)) >= 18446744073709551615UL), (**g_573))) != l_1668) , l_1668);
        l_1675 = l_1674;
        l_1673 ^= (safe_add_func_int32_t_s_s(0xA811AB20L, (((*g_279) = (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((((((safe_add_func_int8_t_s_s((*l_1675), (*g_279))) < ((*l_1674) , 0x2EA00705L)) , (-3L)) != (safe_mod_func_int16_t_s_s((*g_574), 0x3B0CL))) <= (safe_mod_func_int64_t_s_s(0x9430CAAE63B003D7LL, g_161))), 0x632FL)), l_1688))) != 0UL)));
    }
    return p_26;
}







static int32_t func_29(union U0 p_30)
{
    int8_t l_1286 = 0x18L;
    return l_1286;
}







static union U0 func_31(union U0 * p_32)
{
    int32_t *l_1278 = &g_59;
    int32_t *l_1279 = &g_1091[3];
    int32_t *l_1280[5][7] = {{&g_491,&g_491,&g_491,&g_491,&g_491,&g_491,&g_491},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_491,&g_491,&g_491,&g_491,&g_491,&g_491,&g_491},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_491,&g_491,&g_491,&g_491,&g_491,&g_491,&g_491}};
    int32_t l_1281 = 0L;
    int8_t l_1282 = 0L;
    uint8_t l_1283 = 0xEFL;
    int i, j;
    l_1283++;
    return (**g_503);
}







static union U0 * func_33(uint16_t p_34, uint8_t p_35, union U0 * p_36, uint8_t p_37)
{
    return (*g_503);
}







static int32_t func_40(union U0 * const p_41, int16_t p_42, union U0 p_43, uint32_t p_44, uint16_t p_45)
{
    union U0 ***l_504 = &g_503;
    union U0 ****l_505 = &l_504;
    const int32_t *l_506[2][4] = {{&g_491,&g_491,&g_491,&g_491},{&g_491,&g_491,&g_491,&g_491}};
    const int32_t **l_507 = &l_506[1][1];
    int32_t l_508 = 0L;
    union U0 **l_523 = &g_23;
    union U0 *l_527 = &g_24[0];
    union U0 **l_526 = &l_527;
    int32_t l_543[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint8_t l_569 = 0x53L;
    int16_t **l_576[10] = {(void*)0,&g_574,(void*)0,&g_574,(void*)0,&g_574,(void*)0,&g_574,(void*)0,&g_574};
    uint64_t *l_662 = &g_51[0];
    uint8_t l_742 = 0x06L;
    const int16_t *l_892 = &g_893[0][4][1];
    uint8_t l_900 = 0x8AL;
    int16_t l_945 = 0xAF79L;
    uint8_t l_962 = 1UL;
    int8_t **l_992 = &g_279;
    const int64_t *l_996 = (void*)0;
    const int64_t **l_995 = &l_996;
    uint16_t *l_997 = &g_596;
    int8_t *l_1000[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t *l_1007[3];
    int8_t *l_1165 = &g_179[0];
    const uint32_t l_1175[10] = {0x9521D8EDL,0x9521D8EDL,0x71E1FBC6L,0x9521D8EDL,0x9521D8EDL,0x71E1FBC6L,0x9521D8EDL,0x9521D8EDL,0x71E1FBC6L,0x9521D8EDL};
    uint64_t ** const l_1212 = &g_663;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1007[i] = &g_124[1][1][2];
    (*l_505) = l_504;
    (*l_507) = l_506[1][1];
    if (((*g_279) | (*g_279)))
    {
        int32_t l_510 = (-1L);
        int32_t l_530 = 1L;
        int32_t l_544 = 0xBA438DEEL;
        union U0 *l_571 = &g_572;
        uint16_t *l_701 = (void*)0;
        uint64_t * const l_702 = &g_106;
        if ((l_508 = 0x62DA2580L))
        {
            uint16_t l_511 = 0x6B93L;
            int32_t *l_515 = &l_510;
            int32_t **l_514 = &l_515;
            int32_t l_534 = 0x41C3F264L;
            int32_t l_535 = (-1L);
            int32_t l_537 = 0x771077C2L;
            uint32_t l_539 = 0xD7ED9AC5L;
            uint64_t l_545 = 18446744073709551615UL;
            int32_t l_577 = (-1L);
            int32_t l_583 = 0x37A0E916L;
            int32_t l_585 = 0L;
            int32_t l_586 = 0xBE8DC383L;
            int32_t l_587[8][3][1] = {{{0xBAE57EADL},{(-1L)},{0xBAE57EADL}},{{0L},{1L},{0L}},{{0xBAE57EADL},{(-1L)},{0xBAE57EADL}},{{0L},{1L},{0L}},{{0xBAE57EADL},{(-1L)},{0xBAE57EADL}},{{0L},{1L},{0L}},{{1L},{0x6D010A09L},{1L}},{{(-1L)},{0L},{(-1L)}}};
            int32_t *l_594 = &g_59;
            int32_t *l_595[9] = {&g_129,(void*)0,&g_129,(void*)0,&g_129,(void*)0,&g_129,(void*)0,&g_129};
            uint8_t *l_617[6][2];
            int32_t ** const *l_628[6][9][3] = {{{&g_193,(void*)0,(void*)0},{&l_514,&l_514,&g_193},{&g_193,&l_514,&l_514},{&g_193,(void*)0,&g_193},{&l_514,&g_193,(void*)0},{(void*)0,(void*)0,&l_514},{&l_514,&l_514,&l_514},{(void*)0,&l_514,&l_514},{&l_514,(void*)0,&l_514}},{{&g_193,&l_514,&l_514},{&g_193,(void*)0,(void*)0},{&l_514,&l_514,&g_193},{&g_193,&l_514,&l_514},{&g_193,(void*)0,&g_193},{&l_514,&g_193,(void*)0},{(void*)0,(void*)0,&l_514},{&l_514,&l_514,&l_514},{(void*)0,&l_514,&l_514}},{{&l_514,(void*)0,&l_514},{&g_193,&l_514,&l_514},{&g_193,(void*)0,(void*)0},{&l_514,&l_514,&g_193},{&g_193,&l_514,&l_514},{&g_193,(void*)0,&g_193},{&l_514,&g_193,(void*)0},{(void*)0,(void*)0,&l_514},{&l_514,&l_514,&l_514}},{{(void*)0,&l_514,&l_514},{&l_514,(void*)0,&l_514},{&g_193,&l_514,&l_514},{&g_193,(void*)0,(void*)0},{&l_514,&l_514,&g_193},{&g_193,&l_514,&l_514},{&g_193,(void*)0,&g_193},{&l_514,&g_193,(void*)0},{(void*)0,(void*)0,&l_514}},{{&l_514,&l_514,&l_514},{(void*)0,&l_514,&l_514},{&l_514,(void*)0,&l_514},{&g_193,&l_514,&l_514},{&g_193,(void*)0,(void*)0},{&l_514,&l_514,&g_193},{&g_193,&l_514,&l_514},{&g_193,(void*)0,&g_193},{&l_514,&g_193,(void*)0}},{{(void*)0,(void*)0,&l_514},{&l_514,&l_514,&l_514},{(void*)0,&l_514,&l_514},{&l_514,(void*)0,&l_514},{&g_193,&l_514,&l_514},{&g_193,(void*)0,(void*)0},{&l_514,&l_514,&g_193},{&g_193,&l_514,&l_514},{&g_193,(void*)0,&g_193}}};
            int32_t ** const **l_627[1][3][2] = {{{&l_628[2][2][1],&l_628[2][2][1]},{&l_628[2][2][1],&l_628[2][2][1]},{&l_628[2][2][1],&l_628[2][2][1]}}};
            int32_t ** const ***l_626 = &l_627[0][2][1];
            int16_t l_680 = 0L;
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 2; j++)
                    l_617[i][j] = &g_89;
            }
            for (p_43.f1 = 4; (p_43.f1 >= 0); p_43.f1 -= 1)
            {
                int32_t l_509 = 0x17AC6931L;
                int32_t **l_517 = &l_515;
                int32_t l_536 = 0xB3BD3BD8L;
                int32_t l_538 = 0x6B508783L;
                int32_t l_581 = 7L;
                int32_t l_584 = 0x2C0D27F5L;
                int32_t l_588 = (-1L);
                int32_t l_589 = 0xCD3C7C2AL;
                uint16_t l_591 = 1UL;
                int i;
                l_509 = g_465[p_43.f1];
            }
            ++g_596;
            if (((safe_lshift_func_uint8_t_u_u((g_16 | (l_543[5] = p_44)), 3)) & ((0xFFD96280730B60D1LL & (safe_mod_func_int32_t_s_s(((*l_515) = ((safe_lshift_func_int8_t_s_s((**l_514), (((safe_sub_func_uint16_t_u_u(g_24[0].f0, (((l_508 = (safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x2CL, ((((1L >= (safe_rshift_func_int16_t_s_u((((g_568[2] & (safe_sub_func_int64_t_s_s(6L, (-4L)))) || (*g_279)) <= 0x0750L), (**l_507)))) , p_45) || 65526UL) ^ p_45))), p_42)), 4))) & p_44) != l_510))) && 0x3F96L) == 0xFAL))) && g_572.f3)), 0x3FCDE490L))) >= 1UL)))
            {
                uint16_t l_629 = 0x1C50L;
                int32_t l_652 = 8L;
                uint16_t *l_666 = &l_629;
                uint8_t *l_671 = &l_569;
                for (p_43.f2 = 0; (p_43.f2 > 17); ++p_43.f2)
                {
                    int8_t l_622 = (-8L);
                    int32_t ** const *l_625[3];
                    int32_t ** const **l_624 = &l_625[0];
                    int32_t ** const ***l_623[5];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_625[i] = &l_514;
                    for (i = 0; i < 5; i++)
                        l_623[i] = &l_624;
                    if ((safe_rshift_func_int16_t_s_u(l_622, 8)))
                    {
                        return p_43.f2;
                    }
                    else
                    {
                        uint32_t *l_642 = &g_568[1];
                        uint64_t *l_648[10] = {&g_51[1],&g_51[1],&g_51[1],&g_51[1],&g_51[1],&g_51[1],&g_51[1],&g_51[1],&g_51[1],&g_51[1]};
                        int64_t l_649[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_649[i] = 0xB6F1853B34208106LL;
                        l_626 = l_623[3];
                        --l_629;
                        (*l_514) = &l_530;
                        l_652 = (l_510 == (safe_sub_func_int16_t_s_s((-6L), (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_59, (safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u((l_642 != (void*)0), (((****l_624) || ((safe_sub_func_int64_t_s_s(p_43.f2, (safe_lshift_func_int16_t_s_u(0xEAC4L, 12)))) < (~(g_106++)))) < (((p_43.f1 | p_45) > p_43.f1) | p_43.f3)))), l_649[0])))), p_44)))));
                    }
                    (*l_507) = (*l_514);
                }
                (*l_515) = p_43.f3;
                l_543[0] &= ((((*l_666) = ((l_652 ^= (~(((((p_43.f0 ^ (g_284 && (safe_mod_func_uint16_t_u_u(0x421DL, ((safe_mul_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u(p_43.f2, (safe_rshift_func_uint8_t_u_u(((l_662 != g_663) > ((safe_mul_func_uint8_t_u_u(p_42, ((p_42 ^ ((g_161 & g_572.f1) , g_465[2])) < g_106))) ^ l_510)), p_43.f1)))) > 0xFAL) | l_510), p_45)) , 65534UL))))) && (*g_279)) , 0x71909E80L) && 0x023D9A0AL) , p_43.f0))) && p_43.f1)) & 65531UL) != 0x7D87L);
                for (l_535 = 0; (l_535 <= 17); l_535 = safe_add_func_uint32_t_u_u(l_535, 1))
                {
                    for (g_596 = (-6); (g_596 >= 57); g_596++)
                    {
                        (*l_594) ^= ((void*)0 != l_671);
                        (*l_514) = &l_652;
                    }
                }
            }
            else
            {
                union U0 **l_692 = &g_23;
                union U0 *** const l_691 = &l_692;
                union U0 *** const *l_690[5][8][6] = {{{(void*)0,(void*)0,&l_691,&l_691,&l_691,(void*)0},{&l_691,&l_691,&l_691,(void*)0,&l_691,&l_691},{&l_691,&l_691,(void*)0,&l_691,(void*)0,&l_691},{(void*)0,(void*)0,(void*)0,&l_691,&l_691,(void*)0},{&l_691,(void*)0,&l_691,&l_691,(void*)0,&l_691},{&l_691,&l_691,(void*)0,&l_691,(void*)0,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,(void*)0,&l_691,&l_691}},{{(void*)0,&l_691,&l_691,&l_691,&l_691,&l_691},{(void*)0,&l_691,(void*)0,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{(void*)0,(void*)0,&l_691,(void*)0,&l_691,(void*)0},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,(void*)0,(void*)0},{(void*)0,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691}},{{&l_691,&l_691,(void*)0,&l_691,(void*)0,&l_691},{(void*)0,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,(void*)0,&l_691},{&l_691,&l_691,(void*)0,(void*)0,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,(void*)0},{&l_691,(void*)0,(void*)0,&l_691,&l_691,&l_691},{(void*)0,&l_691,(void*)0,&l_691,&l_691,&l_691}},{{&l_691,(void*)0,&l_691,&l_691,&l_691,(void*)0},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{(void*)0,&l_691,(void*)0,&l_691,(void*)0,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,(void*)0},{&l_691,&l_691,&l_691,(void*)0,&l_691,&l_691}},{{&l_691,&l_691,&l_691,(void*)0,&l_691,&l_691},{&l_691,&l_691,(void*)0,&l_691,&l_691,&l_691},{(void*)0,&l_691,&l_691,&l_691,&l_691,&l_691},{&l_691,&l_691,(void*)0,&l_691,&l_691,&l_691},{&l_691,&l_691,(void*)0,&l_691,&l_691,&l_691},{&l_691,&l_691,&l_691,&l_691,&l_691,(void*)0},{&l_691,&l_691,&l_691,&l_691,&l_691,(void*)0},{&l_691,&l_691,(void*)0,&l_691,&l_691,&l_691}}};
                union U0 *** const **l_689 = &l_690[0][5][4];
                uint16_t *l_697 = (void*)0;
                uint16_t *l_698 = &l_511;
                int i, j, k;
                (*l_594) = ((*g_574) , ((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_42, ((((((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_680, (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0x49L, 2)), (((safe_add_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((&g_502[0][0] == ((*l_689) = (void*)0)), p_43.f1)) && p_43.f1) > (((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((((g_288[3][5][0] |= (--(*l_698))) , ((*l_662) ^= (p_44 || (*g_574)))) , l_617[3][0]) != (void*)0), 6)), 9)) >= 0x3E7E53B024FB471DLL) && p_45) , l_701) != &g_465[1])), l_530)) > l_510) < 0UL))))), p_45)) == p_42) , &g_106) != l_702) == 0xEA5BL) || p_42))), 0x0F45L)) == p_42));
            }
        }
        else
        {
            int32_t *l_703[2][10] = {{(void*)0,&g_59,&l_543[0],&g_59,(void*)0,&l_530,&l_530,(void*)0,&g_59,&l_543[0]},{&l_530,&l_530,&l_543[0],(void*)0,&l_530,(void*)0,&l_543[0],&l_530,&l_530,&l_543[0]}};
            int i, j;
            (*l_507) = l_703[0][9];
        }
    }
    else
    {
        uint16_t l_704 = 65526UL;
        int32_t *l_736 = (void*)0;
        union U0 ****l_743 = &l_504;
        int16_t ***l_757 = &l_576[4];
        const union U0 *l_792 = &g_24[4];
        const union U0 **l_791[1][7][10] = {{{(void*)0,&l_792,&l_792,(void*)0,&l_792,&l_792,&l_792,&l_792,&l_792,&l_792},{&l_792,&l_792,&l_792,&l_792,&l_792,&l_792,&l_792,(void*)0,&l_792,&l_792},{(void*)0,&l_792,&l_792,(void*)0,&l_792,&l_792,&l_792,(void*)0,&l_792,&l_792},{(void*)0,&l_792,&l_792,(void*)0,&l_792,&l_792,&l_792,&l_792,&l_792,&l_792},{&l_792,&l_792,&l_792,&l_792,&l_792,&l_792,&l_792,(void*)0,&l_792,&l_792},{(void*)0,&l_792,&l_792,(void*)0,&l_792,&l_792,&l_792,(void*)0,&l_792,&l_792},{(void*)0,&l_792,&l_792,(void*)0,&l_792,&l_792,&l_792,&l_792,&l_792,&l_792}}};
        const union U0 ***l_790 = &l_791[0][2][7];
        const union U0 ****l_789[5] = {&l_790,&l_790,&l_790,&l_790,&l_790};
        int32_t l_831 = 0x40DFB67AL;
        int32_t l_834 = 0L;
        int32_t l_837 = 0L;
        int32_t l_838 = (-3L);
        int32_t l_840[5][8] = {{0x188CEA07L,0x5C9DDCF4L,0x188CEA07L,0L,0x188CEA07L,0x5C9DDCF4L,0x188CEA07L,0L},{0x188CEA07L,0x5C9DDCF4L,0x188CEA07L,0L,0x188CEA07L,0x5C9DDCF4L,0x188CEA07L,0L},{0x188CEA07L,0x5C9DDCF4L,0x188CEA07L,0L,0x188CEA07L,0x5C9DDCF4L,0x188CEA07L,0L},{0x188CEA07L,0x5C9DDCF4L,0x188CEA07L,0L,0x188CEA07L,0x5C9DDCF4L,0x188CEA07L,0L},{0x188CEA07L,0x5C9DDCF4L,0x188CEA07L,0L,0x188CEA07L,0x5C9DDCF4L,0x188CEA07L,0L}};
        int64_t l_845[5];
        int8_t l_846 = 0x70L;
        int8_t **l_944 = (void*)0;
        int32_t *l_983 = &l_834;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_845[i] = 0x0C45EED898C85BEDLL;
        for (l_508 = 1; (l_508 <= 4); l_508 += 1)
        {
            uint64_t l_719 = 0x2B3301E4161D954FLL;
            int64_t *l_720[7][4] = {{&g_567,(void*)0,&g_567,(void*)0},{&g_567,(void*)0,&g_567,(void*)0},{&g_567,(void*)0,&g_567,(void*)0},{&g_567,(void*)0,&g_567,(void*)0},{&g_567,(void*)0,&g_567,(void*)0},{&g_567,(void*)0,&g_567,(void*)0},{&g_567,(void*)0,&g_567,(void*)0}};
            uint8_t *l_721 = &g_89;
            int32_t l_830 = 0x2353D8BFL;
            int32_t l_832 = 0xBA7F3C4DL;
            int32_t l_836 = 0xFFB583CFL;
            int32_t l_842[2];
            uint64_t l_949 = 0x928DAE55DD1C7850LL;
            int32_t ***l_970 = &g_193;
            uint64_t l_980 = 0xED6CADBA74987087LL;
            int32_t *l_982 = &l_837;
            int i, j;
            for (i = 0; i < 2; i++)
                l_842[i] = 0xA2ABDAD0L;
        }
        (*l_983) = p_43.f1;
    }
    if (((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((((*l_992) = &g_179[0]) != (((*p_41) , (safe_rshift_func_int16_t_s_u(((((*l_995) = l_662) != &g_219) , (-8L)), (--(*l_997))))) , l_1000[1])), (safe_div_func_uint32_t_u_u((l_508 |= ((((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_45, p_44)), ((**g_503) , g_465[4]))) | 0x2E71L) < p_43.f1) , g_219)), p_45)))) | p_43.f1), 0L)), p_45)), p_43.f1)) >= 0L))
    {
        int16_t l_1018 = 1L;
        int64_t *l_1023 = &g_567;
        int32_t *l_1024 = (void*)0;
        int32_t *l_1025 = &g_981[3][2];
        int32_t *l_1026 = &l_508;
        uint64_t l_1040 = 0UL;
        (*l_1026) = ((*l_1025) = (p_45 , ((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(0L, (l_543[2] = (((0x7425931FL | (safe_add_func_uint64_t_u_u(18446744073709551615UL, g_848))) | (((*l_1023) = ((g_596 | (g_568[1] = (p_44 = (!((safe_unary_minus_func_uint8_t_u(p_44)) , l_1018))))) || (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(255UL, p_44)), (*g_279))))) > p_42)) && 0x4CD1B11992AF4670LL)))), p_43.f1)) ^ 0xC2BA96BB4BF11ADBLL)));
        for (g_572.f2 = 11; (g_572.f2 == 56); g_572.f2 = safe_add_func_int64_t_s_s(g_572.f2, 6))
        {
            uint32_t l_1037[3];
            int8_t **l_1046 = &l_1000[1];
            uint8_t l_1047 = 0xE3L;
            int i;
            for (i = 0; i < 3; i++)
                l_1037[i] = 0x8BC2E5EDL;
            (*l_1026) = (safe_lshift_func_uint8_t_u_s(((((((((0x8A0EL != (safe_rshift_func_int8_t_s_u(((*g_279) = (safe_rshift_func_uint16_t_u_u(((*l_997)--), 6))), 0))) > ((*g_663) = (*g_663))) != ((l_1037[2] & p_43.f1) , (safe_add_func_int64_t_s_s(0L, (((*l_1023) = (2UL || (l_543[5] = ((g_1041 ^= (l_1040 = (l_1037[1] & g_124[1][1][2]))) , ((safe_mul_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((g_162 = (*l_1026)), p_43.f1)) | p_45), (*l_1025))) != p_43.f1))))) && 1L))))) , l_1046) != (void*)0) <= p_44) < 0L) < l_1047), g_1048));
        }
        return p_44;
    }
    else
    {
        int32_t * const l_1053[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t *l_1062 = &l_543[5];
        const int32_t * const *l_1101[6][6] = {{&l_506[0][1],&l_506[1][1],&l_506[0][1],&l_506[0][2],&l_506[1][1],&l_506[1][2]},{&l_506[0][1],&l_506[1][3],&l_506[0][2],&l_506[0][2],&l_506[1][3],&l_506[0][1]},{&l_506[0][1],&l_506[0][2],&l_506[1][2],&l_506[0][2],&l_506[0][2],&l_506[0][2]},{&l_506[0][1],&l_506[1][1],&l_506[0][1],&l_506[0][2],&l_506[1][1],&l_506[1][2]},{&l_506[0][1],&l_506[1][3],&l_506[0][2],&l_506[0][2],&l_506[1][3],&l_506[0][1]},{&l_506[0][1],&l_506[0][2],&l_506[1][2],&l_506[0][2],&l_506[0][2],&l_506[0][2]}};
        const int32_t * const **l_1100 = &l_1101[2][2];
        int32_t l_1107 = (-8L);
        uint8_t *** const *l_1150 = (void*)0;
        int32_t **l_1193 = &l_1062;
        uint16_t l_1194 = 0xFB01L;
        uint64_t **l_1217[6][7][2] = {{{&g_663,&g_663},{&g_663,&l_662},{&l_662,&l_662},{&l_662,&l_662},{&l_662,&l_662},{(void*)0,(void*)0},{&l_662,&l_662}},{{&g_663,&g_663},{&g_663,&l_662},{(void*)0,&g_663},{&g_663,&l_662},{&g_663,&g_663},{(void*)0,&l_662},{&g_663,&g_663}},{{&g_663,&l_662},{&l_662,(void*)0},{(void*)0,&l_662},{&l_662,&l_662},{&l_662,&l_662},{&l_662,&l_662},{&g_663,&g_663}},{{&g_663,(void*)0},{&l_662,&l_662},{&g_663,&g_663},{&l_662,&l_662},{&l_662,&l_662},{&l_662,&l_662},{&l_662,&l_662}},{{&l_662,&g_663},{&g_663,&l_662},{&l_662,(void*)0},{&g_663,&g_663},{&g_663,&l_662},{&l_662,&l_662},{&l_662,&l_662}},{{&l_662,&l_662},{(void*)0,(void*)0},{&l_662,&l_662},{&g_663,&g_663},{&g_663,&l_662},{(void*)0,&g_663},{&g_663,&l_662}}};
        int i, j, k;
        for (g_572.f1 = 25; (g_572.f1 <= 0); g_572.f1 = safe_sub_func_uint32_t_u_u(g_572.f1, 5))
        {
            int32_t *l_1061 = (void*)0;
            const uint32_t *l_1079 = &g_1080[3][0];
            const uint32_t **l_1078 = &l_1079;
            const int32_t ***l_1097 = &l_507;
            const int32_t ****l_1096 = &l_1097;
            const int32_t *****l_1095[10][4][6] = {{{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{(void*)0,&l_1096,&l_1096,&l_1096,(void*)0,&l_1096},{&l_1096,&l_1096,&l_1096,(void*)0,&l_1096,(void*)0},{(void*)0,&l_1096,(void*)0,&l_1096,&l_1096,(void*)0}},{{&l_1096,(void*)0,&l_1096,&l_1096,(void*)0,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,(void*)0,&l_1096},{&l_1096,&l_1096,(void*)0,&l_1096,&l_1096,&l_1096},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1096,&l_1096}},{{&l_1096,&l_1096,&l_1096,&l_1096,(void*)0,&l_1096},{&l_1096,&l_1096,(void*)0,(void*)0,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,(void*)0,&l_1096}},{{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,(void*)0,&l_1096,(void*)0},{&l_1096,&l_1096,&l_1096,&l_1096,(void*)0,&l_1096},{(void*)0,(void*)0,&l_1096,&l_1096,(void*)0,&l_1096}},{{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,(void*)0},{(void*)0,&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{(void*)0,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096}},{{&l_1096,&l_1096,&l_1096,(void*)0,(void*)0,&l_1096},{&l_1096,(void*)0,(void*)0,&l_1096,&l_1096,&l_1096},{(void*)0,&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,(void*)0,&l_1096,(void*)0,&l_1096}},{{(void*)0,&l_1096,(void*)0,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{(void*)0,&l_1096,&l_1096,&l_1096,&l_1096,(void*)0},{&l_1096,&l_1096,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096,(void*)0},{&l_1096,(void*)0,(void*)0,&l_1096,(void*)0,&l_1096},{&l_1096,&l_1096,(void*)0,(void*)0,&l_1096,(void*)0}},{{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,(void*)0,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,(void*)0,&l_1096,(void*)0},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096,&l_1096}},{{&l_1096,&l_1096,&l_1096,&l_1096,(void*)0,(void*)0},{&l_1096,(void*)0,&l_1096,(void*)0,(void*)0,&l_1096},{&l_1096,&l_1096,(void*)0,&l_1096,(void*)0,(void*)0},{&l_1096,(void*)0,(void*)0,&l_1096,&l_1096,&l_1096}}};
            uint16_t *l_1106[3][2] = {{&g_288[3][3][0],(void*)0},{(void*)0,&g_288[3][3][0]},{(void*)0,(void*)0}};
            int8_t *l_1137 = (void*)0;
            int32_t l_1138 = 7L;
            int8_t **l_1164[10][8][3] = {{{&g_279,&l_1000[5],&l_1000[1]},{&l_1137,&l_1000[5],&l_1137},{&l_1137,&g_279,&l_1000[3]},{&l_1137,&l_1000[1],&l_1000[1]},{&l_1000[0],&l_1000[1],&g_279},{&l_1000[1],&l_1000[1],&l_1000[1]},{&l_1000[1],&l_1137,&l_1000[0]},{&g_279,&l_1000[1],(void*)0}},{{&g_279,&l_1000[0],&l_1137},{&l_1000[1],&g_279,(void*)0},{&l_1000[1],&l_1000[3],&l_1000[0]},{(void*)0,(void*)0,&l_1000[1]},{&g_279,&g_279,&g_279},{(void*)0,&l_1000[1],&l_1000[1]},{&l_1000[5],&l_1000[3],&l_1000[3]},{(void*)0,&l_1000[0],&l_1137}},{{&l_1000[3],(void*)0,&l_1000[1]},{&l_1000[1],&l_1000[1],&l_1000[5]},{(void*)0,&g_279,&l_1000[1]},{&l_1137,&l_1000[1],&l_1137},{(void*)0,(void*)0,&l_1000[1]},{&l_1000[1],&l_1000[0],&l_1137},{&g_279,&l_1000[3],(void*)0},{&l_1137,&l_1000[1],&l_1137}},{{(void*)0,&g_279,(void*)0},{&g_279,(void*)0,&l_1000[1]},{&g_279,&l_1000[3],&g_279},{&l_1000[1],&g_279,&l_1000[1]},{&g_279,&l_1000[0],&g_279},{&l_1000[1],&l_1000[1],&l_1000[1]},{&g_279,&l_1137,&g_279},{&g_279,&l_1000[1],(void*)0}},{{(void*)0,&l_1000[1],&l_1000[5]},{&l_1137,&l_1000[1],&l_1000[1]},{&g_279,&g_279,&g_279},{&l_1000[1],&l_1000[5],&l_1137},{(void*)0,&l_1000[5],&l_1000[5]},{&l_1137,&l_1137,&l_1000[0]},{(void*)0,(void*)0,&l_1000[5]},{&l_1000[1],(void*)0,&l_1137}},{{&l_1000[3],(void*)0,&g_279},{(void*)0,&l_1000[1],&l_1000[1]},{&l_1000[5],&g_279,&l_1000[5]},{(void*)0,(void*)0,(void*)0},{&g_279,&l_1137,&g_279},{(void*)0,&l_1137,&l_1000[1]},{&l_1000[1],(void*)0,&g_279},{&l_1000[1],&l_1137,&l_1000[1]}},{{&g_279,(void*)0,&g_279},{&l_1000[1],&l_1000[5],&l_1000[5]},{&g_279,(void*)0,&l_1137},{(void*)0,&l_1137,&g_279},{&l_1000[1],(void*)0,&l_1137},{&l_1000[5],&l_1137,&l_1000[5]},{&g_279,&l_1000[1],&g_279},{(void*)0,&l_1000[1],&l_1000[0]}},{{&l_1000[0],&g_279,&g_279},{(void*)0,&l_1000[1],&l_1000[1]},{&l_1000[0],&g_279,&l_1000[5]},{(void*)0,&g_279,&l_1000[1]},{&g_279,&l_1000[0],&g_279},{&l_1000[5],(void*)0,&l_1137},{&l_1000[1],&g_279,(void*)0},{(void*)0,(void*)0,&l_1137}},{{&g_279,(void*)0,&l_1000[1]},{&l_1000[1],&l_1137,&l_1000[1]},{&l_1000[3],&l_1000[1],(void*)0},{&l_1000[1],&l_1000[1],&l_1000[1]},{&g_279,(void*)0,&l_1000[1]},{&l_1137,&l_1000[1],&l_1137},{&g_279,(void*)0,(void*)0},{&l_1000[1],(void*)0,&l_1137}},{{&l_1000[5],&g_279,&g_279},{&l_1000[1],&l_1137,&l_1000[1]},{&g_279,&l_1137,&l_1000[5]},{(void*)0,&l_1000[1],&l_1000[1]},{&g_279,&g_279,&g_279},{(void*)0,&l_1000[1],&l_1000[0]},{&g_279,&l_1137,&g_279},{&l_1000[5],&l_1137,&l_1000[5]}}};
            uint8_t **l_1166[8][10] = {{&g_171[6][6][3],(void*)0,&g_171[6][3][0],&g_171[6][0][0],&g_171[5][5][2],&g_171[4][1][3],&g_171[3][3][0],&g_171[6][2][1],&g_171[3][3][0],&g_171[4][1][3]},{&g_171[4][1][3],&g_171[4][1][3],&g_171[4][1][3],&g_171[4][1][3],&g_171[4][1][3],&g_171[3][0][4],&g_171[4][1][3],(void*)0,&g_171[4][1][3],&g_171[4][1][3]},{&g_171[4][1][3],&g_171[6][6][3],&g_171[4][1][3],&g_171[0][6][3],&g_171[4][1][3],&g_171[4][1][3],(void*)0,&g_171[6][0][0],&g_171[5][5][0],&g_171[4][1][3]},{&g_171[4][1][3],&g_171[0][6][3],&g_171[6][6][3],&g_171[3][3][0],&g_171[4][1][3],&g_171[3][3][0],&g_171[3][1][3],&g_171[4][1][3],&g_171[6][6][3],&g_171[4][1][3]},{(void*)0,&g_171[3][3][4],&g_171[4][1][3],&g_171[4][1][3],&g_171[5][5][2],&g_171[4][1][3],&g_171[4][1][3],&g_171[4][1][3],&g_171[4][1][3],&g_171[5][5][2]},{&g_171[4][1][3],&g_171[4][1][3],&g_171[4][1][3],&g_171[4][1][3],&g_171[6][3][0],&g_171[3][3][0],&g_171[6][2][1],&g_171[6][6][3],&g_171[4][1][3],(void*)0},{&g_171[4][1][3],&g_171[4][1][3],&g_171[5][5][0],&g_171[6][6][3],&g_171[0][4][0],&g_171[3][3][0],&g_171[4][1][3],&g_171[6][2][1],&g_171[4][1][3],&g_171[4][1][3]},{&g_171[6][2][1],&g_171[4][1][3],&g_171[4][1][3],&g_171[4][1][3],(void*)0,(void*)0,&g_171[4][1][3],&g_171[4][1][3],&g_171[4][1][3],&g_171[6][2][1]}};
            uint8_t ***l_1167 = &l_1166[4][9];
            uint8_t **l_1168 = &g_171[4][1][3];
            uint8_t ***l_1169 = &g_170;
            uint32_t l_1170 = 0UL;
            int i, j, k;
            for (g_567 = 0; (g_567 >= (-25)); --g_567)
            {
                int32_t **l_1054 = (void*)0;
                int32_t *l_1055 = &g_981[3][2];
                int32_t **l_1056 = (void*)0;
                int32_t **l_1057[8];
                int32_t **l_1058[8][9][3] = {{{(void*)0,&l_1055,(void*)0},{&l_1055,&l_1055,&l_1055},{&l_1055,(void*)0,(void*)0},{&l_1055,&l_1055,(void*)0},{&l_1055,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,(void*)0,&l_1055}},{{&l_1055,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,(void*)0,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055}},{{&l_1055,(void*)0,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,(void*)0,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055}},{{&l_1055,(void*)0,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,(void*)0,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055}},{{&l_1055,(void*)0,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,(void*)0,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055}},{{&l_1055,&l_1055,&l_1055},{&l_1055,(void*)0,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,(void*)0,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055}},{{&l_1055,&l_1055,&l_1055},{&l_1055,(void*)0,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,(void*)0,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055}},{{&l_1055,&l_1055,&l_1055},{&l_1055,(void*)0,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{&l_1055,&l_1055,&l_1055},{(void*)0,&l_1055,&l_1055}}};
                int32_t **l_1059[1][6] = {{&l_1055,&l_1055,&l_1055,&l_1055,&l_1055,&l_1055}};
                int32_t **l_1060 = &l_1055;
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_1057[i] = &l_1055;
                l_1055 = l_1053[4][1];
                (*l_1060) = l_1053[5][4];
            }
            l_1062 = l_1061;
            if ((safe_rshift_func_uint16_t_u_u(((!((p_45 < (safe_mul_func_int16_t_s_s((((**l_992) |= (((safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((safe_div_func_int64_t_s_s((l_1007[0] == ((*l_1078) = ((--(*l_662)) , g_946))), 8UL)) == p_44), (safe_mul_func_int16_t_s_s((g_1091[3] &= (((safe_lshift_func_int16_t_s_s((safe_div_func_int64_t_s_s(((safe_div_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((p_45 <= p_44) , ((l_543[3] = (p_42 , (((&p_41 != (**l_505)) ^ p_44) , p_43.f1))) , 18446744073709551615UL)), 0x2B22707165390540LL)), g_568[1])) ^ g_841), p_45)), p_42)) < (-9L)) , (**g_573))), p_42)))), 18446744073709551613UL)), 0x11E8L)) == 0x78B7L) > 0x69CCL)) || (*g_279)), 9UL))) >= p_43.f1)) || p_45), 6)))
            {
                int32_t * const **l_1098 = (void*)0;
                const uint32_t l_1123 = 18446744073709551615UL;
                int8_t *l_1136 = &g_179[0];
                for (p_44 = 0; (p_44 <= 26); p_44++)
                {
                    int32_t * const ***l_1099 = &l_1098;
                    uint16_t *l_1102 = &g_596;
                    uint8_t *l_1103 = &g_886;
                    int32_t l_1126[9] = {0x7978D41FL,0x7978D41FL,0x7978D41FL,0x7978D41FL,0x7978D41FL,0x7978D41FL,0x7978D41FL,0x7978D41FL,0x7978D41FL};
                    int i;
                    if ((l_508 = (l_1107 = (0UL != (((l_1095[1][0][0] = g_1094) == (void*)0) ^ (((((*l_1099) = l_1098) != l_1100) , (l_1102 == (((l_543[2] |= ((*l_1103)--)) > 3L) , l_1106[0][1]))) || g_893[0][0][1]))))))
                    {
                        uint32_t **l_1120 = &g_946;
                        int64_t *l_1124 = &g_183[7][1];
                        int32_t l_1125 = 9L;
                        l_1126[3] ^= (safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_818, (safe_sub_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((((*l_1103) = (&p_41 == &p_41)) && (-1L)), (0xD20156F0FB33A6E1LL >= g_465[4]))) < ((safe_lshift_func_int16_t_s_u((p_42 = (safe_lshift_func_uint16_t_u_u(((*l_997) = (((*l_1120) = l_1062) == (void*)0)), 13))), 8)) == ((*l_1124) ^= ((safe_rshift_func_int8_t_s_s(p_44, 5)) == l_1123)))), l_1125)))), 0x15D7L));
                        if (p_45)
                            break;
                        return p_42;
                    }
                    else
                    {
                        uint32_t l_1127 = 1UL;
                        if (l_1127)
                            break;
                        return p_42;
                    }
                }
                for (p_43.f3 = (-28); (p_43.f3 != (-14)); p_43.f3 = safe_add_func_int32_t_s_s(p_43.f3, 7))
                {
                    uint32_t l_1130 = 0x0BC49854L;
                    int32_t l_1139 = 0x0A02ECD4L;
                    int32_t l_1140 = 0x44B1D221L;
                    int32_t l_1141 = (-10L);
                    l_1138 = (((0x85L > l_1130) == ((safe_mul_func_uint16_t_u_u(0x6045L, (!(l_1130 == (p_45 || (4L && (safe_lshift_func_int8_t_s_s((l_1130 <= ((((*l_992) = l_1136) == l_1137) , (*g_663))), 6)))))))) >= p_43.f1)) <= 0x3CL);
                    g_1142++;
                }
            }
            else
            {
                int64_t l_1147 = 0x707197B2AD1AFA86LL;
                int32_t l_1152 = 0xF8812824L;
                l_1152 = ((((safe_div_func_int8_t_s_s(0x79L, ((((l_1147 || (((p_43.f1 >= ((safe_sub_func_uint64_t_u_u(5UL, ((void*)0 != l_1150))) || (safe_unary_minus_func_int64_t_s(0L)))) | 0x3A5C2727L) | (g_179[1] | 0x3DE2L))) < p_44) , 1UL) , (-3L)))) ^ (*g_574)) | 0x50B2703CC7F91628LL) , p_45);
                for (g_106 = 0; (g_106 == 7); g_106++)
                {
                    (***l_1096) = &l_1152;
                }
                return p_44;
            }
            l_1138 ^= (+(safe_lshift_func_uint8_t_u_u((((safe_unary_minus_func_int16_t_s(((((safe_sub_func_uint64_t_u_u(((((((p_44 = ((!(p_44 > p_43.f3)) , 0x00B0D863L)) & (((safe_div_func_int16_t_s_s((**g_573), (g_1171 = ((((((*l_662) = p_42) , ((*l_992) == (l_1165 = &g_1041))) < (((((*l_1167) = ((*g_246) = l_1166[0][0])) != ((*l_1169) = l_1168)) < 0xF34209B3L) , l_1170)) != p_43.f2) , p_43.f1)))) , (*g_574)) <= 3L)) < p_43.f3) == p_43.f0) || 0x4A68L) ^ p_43.f2), p_45)) > 0x658CL) , (*g_574)) != g_24[0].f3))) , p_43.f3) >= 0xD06F18BFL), 6)));
        }
        if ((p_43.f1 >= (safe_lshift_func_uint8_t_u_u(0x82L, 7))))
        {
            int32_t *l_1174 = &g_161;
            uint64_t **l_1182[1][3][9] = {{{&l_662,&l_662,&l_662,&l_662,&l_662,&l_662,&l_662,&l_662,&l_662},{&g_663,&g_663,&g_663,&g_663,&g_663,&g_663,&g_663,&g_663,&g_663},{&l_662,&l_662,&l_662,&l_662,&l_662,&l_662,&l_662,&l_662,&l_662}}};
            uint8_t *l_1189 = (void*)0;
            int32_t l_1246 = 1L;
            int i, j, k;
            (*l_507) = l_1174;
            if (((0UL || l_1175[1]) == ((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((((g_124[1][1][2] = ((l_543[2] = 0x84L) & (safe_sub_func_uint16_t_u_u((l_1182[0][0][5] == &l_662), (safe_mul_func_int16_t_s_s((1UL | ((*l_1174) >= (safe_div_func_uint8_t_u_u((l_508 = (safe_rshift_func_int16_t_s_u((*g_574), 1))), (safe_mod_func_uint8_t_u_u((!((void*)0 == l_1193)), p_42)))))), 0xE3ABL)))))) , g_893[0][4][1]) <= g_284), (*g_279))) ^ l_1194), (*l_1174))) && p_45)))
            {
                uint32_t l_1198 = 0x8A80E8F5L;
                uint64_t **l_1204 = (void*)0;
                int32_t l_1216 = 0x1B564134L;
                int32_t l_1219 = 0x18F00045L;
                if (((g_24[0].f3 != 8UL) | p_42))
                {
                    int64_t *l_1211 = &g_183[2][2];
                    int32_t l_1215 = 0xBC27AEA4L;
                    uint64_t ***l_1218 = &l_1217[4][1][1];
                    int32_t l_1241 = 0xDB91E3DFL;
                    for (g_491 = 0; (g_491 <= 16); g_491 = safe_add_func_uint16_t_u_u(g_491, 5))
                    {
                        const int32_t *l_1197[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1197[i] = (void*)0;
                        (*l_507) = l_1197[0];
                    }
                    l_543[4] ^= ((((l_1198 , g_1199) != (void*)0) , ((*l_1174) = 0x9BE8ED42L)) != 4294967288UL);
                    if (((l_1219 = (p_42 = (((g_219 &= (safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_s(((**g_573) = (((*p_41) , l_1204) == ((*l_1218) = ((((*l_1211) = (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((1L < 0xECD0L), 0x58DEL)), ((safe_lshift_func_int8_t_s_u(p_44, 2)) , 0xE2L)))) > (l_1212 != ((l_1216 |= (((*g_1200) = (safe_lshift_func_uint8_t_u_s(l_1215, (*g_279)))) == p_43.f1)) , l_1217[1][6][1]))) , (void*)0)))), 15))))) | 0x1E5059B6412F7D84LL) == g_89))) < l_1198))
                    {
                        int8_t l_1242 = 0x6AL;
                        (*l_1174) &= l_1216;
                        l_1242 = ((*l_1174) = (safe_mul_func_uint16_t_u_u((0L & ((safe_mul_func_int8_t_s_s((safe_mul_func_uint64_t_u_u(l_1215, (((void*)0 != l_1174) < (safe_rshift_func_int16_t_s_u(0xF95FL, ((safe_div_func_uint8_t_u_u(((-1L) | ((l_1241 = (safe_mul_func_int8_t_s_s((!(safe_lshift_func_uint16_t_u_s((0x3C1DB7E7A74FBC74LL & 18446744073709551615UL), (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((g_89 > 0x28455F383CAF26B1LL), p_44)), 0))))), p_43.f1))) >= p_43.f1)), 0x70L)) , l_1216)))))), (-1L))) != (*l_1174))), (-2L))));
                    }
                    else
                    {
                        uint32_t l_1247 = 0xA57F28FAL;
                        l_1246 &= ((*l_1174) = (safe_mod_func_int16_t_s_s((+g_288[0][0][0]), p_42)));
                        ++l_1247;
                    }
                }
                else
                {
                    uint32_t *l_1260[1][5][10] = {{{&g_24[0].f2,&g_572.f2,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_572.f2,&g_24[0].f2,&g_24[0].f2},{&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_572.f2,(void*)0,&g_24[0].f2,&g_24[0].f2},{(void*)0,&g_24[0].f2,&g_572.f2,&g_24[0].f2,(void*)0,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,(void*)0},{&g_24[0].f2,(void*)0,(void*)0,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2},{&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2,(void*)0,(void*)0,&g_24[0].f2,&g_24[0].f2,&g_24[0].f2}}};
                    uint8_t *l_1264 = &g_1261;
                    uint8_t *l_1265 = &l_742;
                    int32_t l_1270 = (-1L);
                    int i, j, k;
                    l_1216 |= (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((0x09DB8DC5L ^ ((safe_mod_func_uint32_t_u_u(((l_1204 != &l_662) == (*l_1174)), g_465[2])) == ((((g_841 > (safe_mul_func_uint8_t_u_u((((g_1261++) , ((*l_1265) = ((*l_1264) = 255UL))) != (safe_rshift_func_uint8_t_u_u(p_45, 7))), ((((safe_mul_func_int16_t_s_s(l_1270, (*l_1174))) , p_44) != 1L) != l_1219)))) ^ p_45) > l_1270) ^ l_1198))), p_43.f1)), p_42));
                    l_1270 ^= (*l_1174);
                }
            }
            else
            {
                int64_t l_1275 = 1L;
                l_1275 &= (l_1246 ^= (safe_lshift_func_int8_t_s_s(((((0x166E38AAE52DEDFELL >= g_818) & (safe_div_func_uint32_t_u_u((p_43.f1 , 0x23EEADE3L), (*l_1174)))) > p_42) || (0xE4EE8F093457526CLL == (&g_193 != &l_1101[2][2]))), 1)));
            }
        }
        else
        {
            int32_t *l_1276 = &l_543[5];
            (*l_1193) = l_1276;
        }
        l_543[3] ^= (l_508 = 0xF0677F65L);
        return p_43.f1;
    }
}







static union U0 * func_46(int8_t p_47, uint8_t p_48, uint8_t p_49)
{
    const uint16_t l_77 = 0x5C00L;
    uint64_t *l_94 = &g_51[0];
    uint64_t **l_93 = &l_94;
    int32_t l_144 = (-5L);
    int32_t l_158 = 0xFFD0F064L;
    uint8_t *l_169 = &g_89;
    uint16_t l_177 = 0x1956L;
    int64_t l_188[6];
    int64_t *l_227 = &g_219;
    int32_t l_233[3][3][3] = {{{1L,0x310836F5L,0x310836F5L},{0x310836F5L,(-1L),0x2D47BFB2L},{0xA2507952L,0x1DAC2A05L,0x2D47BFB2L}},{{0xA66D69CEL,0x2D47BFB2L,0x310836F5L},{(-1L),7L,1L},{0x2D47BFB2L,0x2D47BFB2L,7L}},{{1L,0x1DAC2A05L,0xA5E9E908L},{1L,(-1L),(-1L)},{0x2D47BFB2L,0x310836F5L,0x1DAC2A05L}}};
    union U0 *l_243[3][2];
    int32_t ***l_295 = &g_193;
    int64_t l_306 = 0x1AA3C21802581A57LL;
    uint64_t * const l_353 = &g_106;
    int32_t *l_355 = &g_161;
    uint8_t ***l_374[1][8][10] = {{{(void*)0,(void*)0,&g_170,(void*)0,(void*)0,&g_170,(void*)0,(void*)0,&g_170,(void*)0},{(void*)0,&g_170,&g_170,(void*)0,&g_170,&g_170,(void*)0,&g_170,&g_170,(void*)0},{&g_170,(void*)0,&g_170,&g_170,(void*)0,&g_170,&g_170,(void*)0,&g_170,&g_170},{(void*)0,(void*)0,&g_170,(void*)0,(void*)0,&g_170,(void*)0,(void*)0,&g_170,(void*)0},{(void*)0,&g_170,&g_170,(void*)0,&g_170,&g_170,(void*)0,&g_170,&g_170,(void*)0},{&g_170,(void*)0,&g_170,&g_170,(void*)0,&g_170,&g_170,(void*)0,&g_170,&g_170},{(void*)0,(void*)0,&g_170,(void*)0,&g_170,(void*)0,&g_170,&g_170,(void*)0,&g_170},{&g_170,&g_170,&g_170,&g_170,&g_170,&g_170,&g_170,&g_170,&g_170,&g_170}}};
    uint16_t l_466 = 0xB9A1L;
    uint32_t l_470 = 18446744073709551606UL;
    int32_t l_495 = 0x9A2D5659L;
    uint32_t l_496 = 0xC4A62F74L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_188[i] = 0L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_243[i][j] = &g_24[6];
    }
    for (p_49 = 0; (p_49 <= 42); p_49 = safe_add_func_uint8_t_u_u(p_49, 6))
    {
        uint64_t * const l_63 = &g_51[1];
        int32_t l_66 = 0xE12B6A36L;
        uint64_t *l_67 = &g_51[0];
        uint64_t **l_68 = &l_67;
        int32_t *l_78 = &g_59;
        (*l_78) ^= ((((void*)0 == l_63) ^ (g_51[0] , (safe_rshift_func_uint16_t_u_u(l_66, ((((*l_68) = l_67) == &g_51[0]) <= (safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_s((0x6DAD3F04E266BC59LL <= ((*l_63) ^= (safe_mod_func_uint16_t_u_u(g_24[0].f2, (p_49 & 0x8DD2DC09L))))), 7)) , p_47) <= g_24[0].f1) , p_48), l_77)), g_24[0].f1))))))) <= g_24[0].f1);
    }
    for (p_47 = 1; (p_47 >= 0); p_47 -= 1)
    {
        union U0 *l_100[10][2];
        uint64_t *l_105 = &g_106;
        int32_t l_187[9];
        int32_t l_202 = 0x163EC924L;
        uint32_t *l_248 = &g_124[1][1][2];
        const int8_t *l_276 = &g_24[0].f1;
        int32_t *l_360 = &l_202;
        int32_t l_363 = 0x962B1F8AL;
        const int32_t l_364 = 0xCCEF30CBL;
        int16_t l_408 = 0x017BL;
        uint8_t *l_429 = (void*)0;
        int32_t *l_430 = &l_187[8];
        uint8_t l_463 = 0xAAL;
        uint16_t *l_492 = &l_466;
        uint16_t *l_494 = &l_466;
        union U0 **l_501 = &l_100[1][0];
        union U0 ***l_500 = &l_501;
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 2; j++)
                l_100[i][j] = &g_24[0];
        }
        for (i = 0; i < 9; i++)
            l_187[i] = 7L;
    }
    l_355 = &l_158;
    return (*g_503);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_24[i].f0, "g_24[i].f0", print_hash_value);
        transparent_crc(g_24[i].f1, "g_24[i].f1", print_hash_value);
        transparent_crc(g_24[i].f2, "g_24[i].f2", print_hash_value);
        transparent_crc(g_24[i].f3, "g_24[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_51[i], "g_51[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_124[i][j][k], "g_124[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_179[i], "g_179[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_183[i][j], "g_183[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_288[i][j][k], "g_288[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_291, "g_291", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_465[i], "g_465[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_568[i], "g_568[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_572.f1, "g_572.f1", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_818, "g_818", print_hash_value);
    transparent_crc(g_841, "g_841", print_hash_value);
    transparent_crc(g_848, "g_848", print_hash_value);
    transparent_crc(g_886, "g_886", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_893[i][j][k], "g_893[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_981[i][j], "g_981[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1041, "g_1041", print_hash_value);
    transparent_crc(g_1048, "g_1048", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1080[i][j], "g_1080[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1091[i], "g_1091[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1142, "g_1142", print_hash_value);
    transparent_crc(g_1171, "g_1171", print_hash_value);
    transparent_crc(g_1261, "g_1261", print_hash_value);
    transparent_crc(g_1451, "g_1451", print_hash_value);
    transparent_crc(g_1515, "g_1515", print_hash_value);
    transparent_crc(g_1593, "g_1593", print_hash_value);
    transparent_crc(g_1978, "g_1978", print_hash_value);
    transparent_crc(g_2134.f0, "g_2134.f0", print_hash_value);
    transparent_crc(g_2134.f1, "g_2134.f1", print_hash_value);
    transparent_crc(g_2134.f2, "g_2134.f2", print_hash_value);
    transparent_crc(g_2134.f3, "g_2134.f3", print_hash_value);
    transparent_crc(g_2224, "g_2224", print_hash_value);
    transparent_crc(g_2239, "g_2239", print_hash_value);
    transparent_crc(g_2314, "g_2314", print_hash_value);
    transparent_crc(g_2501, "g_2501", print_hash_value);
    transparent_crc(g_2539, "g_2539", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
