// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 45B630D1
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
   const uint32_t f0;
   signed f1 : 19;
   int8_t f2;
};
#pragma pack(pop)


static int32_t g_4 = 0L;
static uint32_t g_28[10] = {18446744073709551615UL,0xC4DF8E3BL,0xD02268F6L,0xD02268F6L,0xC4DF8E3BL,18446744073709551615UL,0xC4DF8E3BL,0xD02268F6L,0xD02268F6L,0xC4DF8E3BL};
static uint8_t g_29 = 255UL;
static int32_t g_32 = 0x28EAF608L;
static int32_t g_79 = 1L;
static int32_t *g_84 = (void*)0;
static int64_t g_86 = 0x8EAF535935178915LL;
static uint32_t g_91[9] = {4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL};
static int8_t g_99 = 0L;
static uint64_t g_110 = 18446744073709551615UL;
static int64_t g_117[4] = {3L,3L,3L,3L};
static uint16_t g_118 = 0x3D7CL;
static uint32_t g_120[4][1] = {{0xD99A0A08L},{0xD99A0A08L},{0xD99A0A08L},{0xD99A0A08L}};
static int16_t g_140 = 0xE195L;
static uint32_t g_141 = 0x55718CB2L;
static int32_t g_144 = (-3L);
static uint32_t g_145 = 0x434A3FD7L;
static uint32_t **g_163 = (void*)0;
static uint32_t ***g_162[7] = {&g_163,&g_163,&g_163,&g_163,&g_163,&g_163,&g_163};
static int32_t g_227 = 0L;
static int64_t g_228 = 0xAD08EFB34F4D14C4LL;
static int32_t g_229 = (-4L);
static uint16_t g_230 = 65526UL;
static int32_t g_313 = (-1L);
static uint16_t *g_351 = &g_118;
static uint16_t **g_350 = &g_351;
static int16_t **g_364 = (void*)0;
static int16_t ***g_363 = &g_364;
static uint8_t *g_396 = &g_29;
static uint8_t **g_395 = &g_396;
static uint32_t *****g_418 = (void*)0;
static struct S0 g_448[7][1][8] = {{{{4294967287UL,-226,0xA3L},{4294967287UL,-226,0xA3L},{0x19C78306L,537,0x79L},{0x75A34FBBL,-316,0L},{0x19C78306L,537,0x79L},{4294967287UL,-226,0xA3L},{4294967287UL,-226,0xA3L},{0x19C78306L,537,0x79L}}},{{{0x71E6D9B8L,-547,-8L},{0x19C78306L,537,0x79L},{0x19C78306L,537,0x79L},{0x71E6D9B8L,-547,-8L},{4294967287UL,-226,0xA3L},{0x75A34FBBL,-316,0L},{0x71E6D9B8L,-547,-8L},{0x71E6D9B8L,-547,-8L}}},{{{0x71E6D9B8L,-547,-8L},{4294967287UL,-226,0xA3L},{0xE7662D70L,-15,6L},{0xE7662D70L,-15,6L},{4294967287UL,-226,0xA3L},{0x71E6D9B8L,-547,-8L},{4294967287UL,-226,0xA3L},{0xE7662D70L,-15,6L}}},{{{0x75A34FBBL,-316,0L},{4294967287UL,-226,0xA3L},{0x75A34FBBL,-316,0L},{0x71E6D9B8L,-547,-8L},{0x71E6D9B8L,-547,-8L},{0x75A34FBBL,-316,0L},{4294967287UL,-226,0xA3L},{0x75A34FBBL,-316,0L}}},{{{0x19C78306L,537,0x79L},{0x71E6D9B8L,-547,-8L},{0xE7662D70L,-15,6L},{0x71E6D9B8L,-547,-8L},{0x19C78306L,537,0x79L},{0x19C78306L,537,0x79L},{0x71E6D9B8L,-547,-8L},{0xE7662D70L,-15,6L}}},{{{0x19C78306L,537,0x79L},{0x19C78306L,537,0x79L},{0x71E6D9B8L,-547,-8L},{0xE7662D70L,-15,6L},{0x71E6D9B8L,-547,-8L},{0x19C78306L,537,0x79L},{0x19C78306L,537,0x79L},{0x71E6D9B8L,-547,-8L}}},{{{0x75A34FBBL,-316,0L},{0x71E6D9B8L,-547,-8L},{0x71E6D9B8L,-547,-8L},{0x75A34FBBL,-316,0L},{4294967287UL,-226,0xA3L},{0x75A34FBBL,-316,0L},{0x71E6D9B8L,-547,-8L},{0x71E6D9B8L,-547,-8L}}}};
static int16_t ****g_483 = &g_363;
static int16_t g_526[2][9] = {{6L,0xCDABL,0x4346L,0x4346L,0xCDABL,6L,0xCDABL,0x4346L,0x4346L},{0x6233L,0x6233L,6L,0x4346L,6L,0x6233L,0x6233L,6L,0x4346L}};
static uint64_t g_590 = 0x80B8F6F7FDB96DCFLL;
static uint32_t ** const **g_609 = (void*)0;
static uint8_t g_624 = 1UL;
static uint32_t g_646 = 0x0CDB6751L;
static uint8_t g_652[7][4] = {{0xFFL,0xFFL,0xFFL,0xFFL},{0xFFL,0xFFL,0xFFL,0xFFL},{0xFFL,0xFFL,0xFFL,0xFFL},{0xFFL,0xFFL,0xFFL,0xFFL},{0xFFL,0xFFL,0xFFL,0xFFL},{0xFFL,0xFFL,0xFFL,0xFFL},{0xFFL,0xFFL,0xFFL,0xFFL}};
static uint32_t g_701[7] = {4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL};
static int16_t g_704 = 0x6275L;
static int32_t g_705 = 6L;
static uint8_t g_707 = 1UL;
static int16_t *****g_710 = &g_483;
static int16_t g_711 = 0x8091L;
static int32_t g_713 = 7L;
static int32_t g_714 = 0L;
static int32_t g_715 = 0L;
static int8_t g_717 = 0x47L;
static int32_t g_718[1][7] = {{0x26CBEEE5L,0xCEB325BEL,0xCEB325BEL,0x26CBEEE5L,0xCEB325BEL,0xCEB325BEL,0x26CBEEE5L}};
static int64_t **g_757 = (void*)0;
static const int32_t *g_762 = (void*)0;
static const uint32_t ****g_768 = (void*)0;
static const uint32_t *****g_767 = &g_768;
static int32_t *g_884 = &g_713;
static const int32_t g_1013 = 0L;
static const uint32_t *g_1038 = (void*)0;
static const uint32_t **g_1037 = &g_1038;
static const uint32_t ***g_1036[9][7] = {{&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037},{&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037},{&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037},{&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037},{&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037},{&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037},{&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037},{&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037},{&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037,&g_1037}};
static struct S0 g_1047 = {0UL,-705,0L};
static int32_t g_1067[4][9] = {{7L,3L,0xDF5DB7B7L,0x69A5C273L,0x69A5C273L,0xDF5DB7B7L,3L,7L,3L},{0L,(-1L),0x86FFCBF7L,0x86FFCBF7L,(-1L),0L,1L,0L,(-1L)},{1L,3L,3L,1L,7L,(-1L),0xEE523C01L,3L,(-1L)},{0x47129D38L,0x47129D38L,3L,0x86FFCBF7L,0L,0x86FFCBF7L,3L,0x47129D38L,0x47129D38L}};
static int8_t g_1102 = (-8L);
static uint64_t *g_1147 = &g_110;
static uint64_t * const *g_1146 = &g_1147;
static uint64_t * const **g_1145 = &g_1146;
static int16_t g_1175[7][2][2] = {{{1L,0x5C5AL},{0xD4C4L,0x9F2FL}},{{(-1L),(-1L)},{1L,(-1L)}},{{(-1L),0x9F2FL},{0xD4C4L,0x5C5AL}},{{1L,0xD4C4L},{0x5C5AL,0x9F2FL}},{{0x5C5AL,0xD4C4L},{1L,0x5C5AL}},{{0xD4C4L,0x9F2FL},{(-1L),(-1L)}},{{1L,(-1L)},{(-1L),0x9F2FL}}};
static struct S0 g_1294 = {0xE8E24F2AL,-162,-6L};
static struct S0 *g_1293 = &g_1294;
static const int64_t g_1313[9] = {0xFFC41B7D051AFE7ALL,0xFFC41B7D051AFE7ALL,0x433B0EB8842620FDLL,0xFFC41B7D051AFE7ALL,0xFFC41B7D051AFE7ALL,0x433B0EB8842620FDLL,0xFFC41B7D051AFE7ALL,0xFFC41B7D051AFE7ALL,0x433B0EB8842620FDLL};
static const uint8_t g_1314 = 0UL;
static int32_t g_1340 = 0x57D46EB6L;
static int32_t g_1474 = 1L;
static int8_t g_1528 = 0x1AL;
static const int32_t *g_1614 = &g_1067[3][3];
static const int32_t **g_1613 = &g_1614;
static const int32_t ***g_1612 = &g_1613;
static uint64_t **g_1728 = &g_1147;
static uint64_t ***g_1727 = &g_1728;
static uint32_t g_1799 = 18446744073709551609UL;
static uint64_t g_1809 = 0x79C3FC36C6527CC1LL;
static int64_t g_1994 = (-1L);
static uint64_t g_2057 = 18446744073709551606UL;
static int8_t g_2060 = 2L;
static int8_t *g_2163 = (void*)0;
static uint64_t g_2193 = 18446744073709551609UL;
static int64_t ***g_2242 = &g_757;
static int64_t ****g_2241[8][4][8] = {{{&g_2242,&g_2242,(void*)0,&g_2242,&g_2242,(void*)0,&g_2242,&g_2242},{(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242},{&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0},{&g_2242,&g_2242,(void*)0,&g_2242,&g_2242,(void*)0,&g_2242,&g_2242}},{{(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242},{&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0},{&g_2242,&g_2242,(void*)0,&g_2242,&g_2242,(void*)0,&g_2242,&g_2242},{(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242}},{{&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0},{&g_2242,&g_2242,(void*)0,&g_2242,&g_2242,(void*)0,&g_2242,&g_2242},{(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242},{&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0}},{{&g_2242,&g_2242,(void*)0,&g_2242,&g_2242,(void*)0,&g_2242,&g_2242},{(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242},{&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0},{&g_2242,&g_2242,(void*)0,&g_2242,&g_2242,(void*)0,&g_2242,&g_2242}},{{(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242},{&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_2242,(void*)0,(void*)0,&g_2242,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static int64_t *****g_2240 = &g_2241[5][1][3];
static int32_t **g_2535 = (void*)0;
static int32_t ***g_2534 = &g_2535;
static int16_t g_2721[5][5][1] = {{{8L},{4L},{8L},{4L},{8L}},{{4L},{8L},{4L},{8L},{4L}},{{8L},{4L},{8L},{4L},{8L}},{{4L},{8L},{4L},{8L},{4L}},{{8L},{4L},{8L},{4L},{8L}}};
static int16_t g_2722 = 0x7C85L;
static uint32_t ****g_2879 = &g_162[4];
static uint32_t *g_2898[2][10][3] = {{{(void*)0,&g_1799,&g_28[9]},{&g_1799,&g_145,(void*)0},{(void*)0,&g_1799,&g_145},{&g_28[7],&g_120[1][0],&g_120[3][0]},{&g_120[3][0],&g_646,&g_120[1][0]},{&g_28[1],&g_28[9],(void*)0},{(void*)0,&g_28[9],(void*)0},{&g_120[1][0],(void*)0,&g_120[1][0]},{&g_120[3][0],(void*)0,&g_120[3][0]},{(void*)0,(void*)0,&g_145}},{{&g_145,&g_28[7],(void*)0},{&g_120[1][0],(void*)0,&g_28[9]},{&g_145,(void*)0,&g_145},{(void*)0,&g_120[3][0],&g_145},{&g_120[3][0],&g_28[1],&g_28[9]},{&g_120[1][0],(void*)0,(void*)0},{(void*)0,(void*)0,&g_28[9]},{&g_1799,&g_1799,(void*)0},{&g_28[9],&g_28[7],&g_120[3][0]},{&g_145,&g_145,(void*)0}}};
static uint32_t **g_2897[10][10] = {{&g_2898[0][4][2],&g_2898[0][1][2],(void*)0,&g_2898[0][8][0],&g_2898[0][4][2],&g_2898[0][4][2],&g_2898[0][4][2],&g_2898[0][4][2],&g_2898[0][4][2],&g_2898[0][4][2]},{&g_2898[1][9][2],&g_2898[0][3][2],&g_2898[0][3][2],&g_2898[1][9][2],(void*)0,&g_2898[0][6][2],&g_2898[0][4][2],&g_2898[0][4][2],(void*)0,&g_2898[0][4][2]},{&g_2898[1][5][1],&g_2898[0][7][1],(void*)0,&g_2898[0][4][2],(void*)0,&g_2898[0][1][2],&g_2898[0][3][2],&g_2898[0][4][2],(void*)0,(void*)0},{&g_2898[0][3][1],&g_2898[0][4][2],(void*)0,&g_2898[1][9][2],&g_2898[0][4][2],&g_2898[0][4][2],(void*)0,&g_2898[1][5][1],&g_2898[0][4][2],&g_2898[0][2][0]},{&g_2898[0][4][2],&g_2898[0][4][2],&g_2898[0][4][2],&g_2898[0][8][0],&g_2898[0][4][2],(void*)0,&g_2898[0][4][2],&g_2898[0][4][2],(void*)0,&g_2898[0][9][2]},{&g_2898[0][3][2],&g_2898[1][5][1],&g_2898[0][7][1],&g_2898[0][4][2],&g_2898[0][4][2],&g_2898[0][4][2],&g_2898[0][4][2],&g_2898[0][4][2],&g_2898[0][7][1],&g_2898[1][5][1]},{&g_2898[1][5][1],&g_2898[0][4][2],(void*)0,&g_2898[0][3][2],&g_2898[0][4][2],&g_2898[1][5][1],(void*)0,(void*)0,&g_2898[0][4][2],&g_2898[0][4][2]},{&g_2898[0][2][0],&g_2898[0][4][2],&g_2898[0][6][2],(void*)0,&g_2898[0][4][2],&g_2898[1][5][1],&g_2898[0][1][1],(void*)0,&g_2898[1][5][1],&g_2898[0][4][2]},{&g_2898[1][5][1],&g_2898[0][6][2],&g_2898[0][2][0],(void*)0,(void*)0,&g_2898[0][4][2],(void*)0,&g_2898[0][4][2],(void*)0,&g_2898[1][6][0]},{&g_2898[0][3][2],&g_2898[0][7][1],&g_2898[1][6][0],&g_2898[0][4][2],(void*)0,(void*)0,&g_2898[0][4][2],&g_2898[0][7][1],&g_2898[0][4][2],&g_2898[0][4][2]}};
static uint32_t ***g_2896[8][6][5] = {{{&g_2897[1][4],&g_2897[4][7],&g_2897[8][2],&g_2897[1][4],&g_2897[1][4]},{&g_2897[1][4],(void*)0,&g_2897[1][4],&g_2897[2][9],&g_2897[9][9]},{&g_2897[8][4],&g_2897[6][2],(void*)0,&g_2897[1][4],&g_2897[1][4]},{&g_2897[8][4],&g_2897[1][4],&g_2897[6][2],(void*)0,&g_2897[2][5]},{&g_2897[1][4],&g_2897[1][4],&g_2897[1][4],&g_2897[1][4],&g_2897[1][4]},{&g_2897[1][4],&g_2897[4][2],&g_2897[1][4],&g_2897[9][3],(void*)0}},{{&g_2897[4][2],&g_2897[1][4],&g_2897[0][7],&g_2897[1][4],&g_2897[1][4]},{&g_2897[1][4],&g_2897[1][4],&g_2897[4][0],&g_2897[1][4],&g_2897[1][4]},{&g_2897[2][5],&g_2897[1][4],&g_2897[5][4],&g_2897[5][1],&g_2897[1][4]},{&g_2897[4][0],(void*)0,&g_2897[1][4],&g_2897[1][4],&g_2897[2][9]},{&g_2897[5][2],&g_2897[8][9],(void*)0,&g_2897[8][9],&g_2897[5][2]},{&g_2897[1][4],(void*)0,&g_2897[5][2],&g_2897[1][4],(void*)0}},{{&g_2897[1][4],(void*)0,&g_2897[1][4],(void*)0,&g_2897[1][4]},{&g_2897[1][4],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_2897[3][2],(void*)0,&g_2897[5][2]},{(void*)0,&g_2897[5][1],&g_2897[1][4],&g_2897[1][4],&g_2897[2][9]},{&g_2897[5][7],&g_2897[1][4],&g_2897[8][2],(void*)0,&g_2897[1][4]},{&g_2897[1][4],(void*)0,&g_2897[5][1],&g_2897[1][4],&g_2897[3][8]}},{{&g_2897[5][1],&g_2897[1][4],(void*)0,&g_2897[4][2],&g_2897[4][5]},{&g_2897[1][4],(void*)0,&g_2897[3][8],&g_2897[1][4],(void*)0},{&g_2897[1][4],&g_2897[1][4],(void*)0,(void*)0,&g_2897[7][4]},{(void*)0,&g_2897[1][4],&g_2897[1][4],&g_2897[7][4],(void*)0},{&g_2897[1][4],(void*)0,&g_2897[1][4],&g_2897[0][7],&g_2897[2][5]},{&g_2897[1][4],&g_2897[8][9],&g_2897[8][1],&g_2897[0][7],&g_2897[1][4]}},{{(void*)0,&g_2897[6][3],&g_2897[6][2],&g_2897[7][4],&g_2897[1][4]},{(void*)0,&g_2897[8][1],(void*)0,(void*)0,&g_2897[1][4]},{(void*)0,(void*)0,(void*)0,&g_2897[1][4],&g_2897[1][4]},{&g_2897[3][0],&g_2897[1][4],&g_2897[1][4],&g_2897[4][2],&g_2897[1][4]},{&g_2897[1][4],&g_2897[1][4],&g_2897[1][4],&g_2897[1][4],(void*)0},{&g_2897[8][1],&g_2897[6][2],&g_2897[5][6],(void*)0,&g_2897[1][4]}},{{(void*)0,&g_2897[9][0],&g_2897[1][4],&g_2897[8][2],&g_2897[8][2]},{&g_2897[1][4],&g_2897[1][4],&g_2897[1][4],&g_2897[8][9],(void*)0},{(void*)0,(void*)0,&g_2897[4][5],(void*)0,&g_2897[1][8]},{(void*)0,&g_2897[5][1],&g_2897[1][4],&g_2897[1][4],(void*)0},{&g_2897[6][2],&g_2897[8][2],&g_2897[4][5],&g_2897[1][8],&g_2897[1][4]},{&g_2897[1][4],&g_2897[1][4],&g_2897[1][4],&g_2897[1][4],&g_2897[1][4]}},{{&g_2897[1][4],&g_2897[1][4],&g_2897[1][4],&g_2897[4][7],&g_2897[5][4]},{(void*)0,&g_2897[1][4],&g_2897[5][6],&g_2897[1][4],&g_2897[1][4]},{&g_2897[5][8],&g_2897[1][4],&g_2897[1][4],&g_2897[1][4],&g_2897[1][4]},{&g_2897[1][4],(void*)0,&g_2897[1][4],&g_2897[3][8],&g_2897[1][4]},{&g_2897[8][2],&g_2897[1][4],(void*)0,&g_2897[1][4],&g_2897[2][7]},{&g_2897[1][8],(void*)0,(void*)0,&g_2897[1][4],&g_2897[4][8]}},{{&g_2897[1][4],&g_2897[3][8],&g_2897[6][2],&g_2897[5][1],&g_2897[1][4]},{(void*)0,&g_2897[5][2],&g_2897[8][1],&g_2897[8][4],&g_2897[1][4]},{(void*)0,&g_2897[5][2],&g_2897[1][4],&g_2897[4][0],(void*)0},{&g_2897[3][2],&g_2897[3][8],&g_2897[1][4],&g_2897[1][4],&g_2897[1][4]},{&g_2897[1][4],(void*)0,(void*)0,(void*)0,&g_2897[5][2]},{&g_2897[1][4],&g_2897[1][4],&g_2897[3][8],&g_2897[1][4],&g_2897[1][4]}}};
static uint8_t *g_2921 = &g_652[0][1];
static int32_t * const *g_2930 = &g_84;
static int32_t * const **g_2929[6][8][5] = {{{&g_2930,(void*)0,&g_2930,&g_2930,&g_2930},{&g_2930,(void*)0,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,&g_2930,(void*)0,&g_2930},{(void*)0,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,(void*)0,&g_2930,&g_2930},{&g_2930,&g_2930,&g_2930,&g_2930,&g_2930}},{{&g_2930,(void*)0,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,(void*)0,&g_2930,&g_2930},{&g_2930,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,(void*)0,&g_2930,&g_2930,(void*)0},{(void*)0,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,&g_2930,(void*)0,&g_2930},{&g_2930,(void*)0,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,(void*)0,&g_2930,&g_2930}},{{&g_2930,&g_2930,&g_2930,&g_2930,(void*)0},{&g_2930,&g_2930,&g_2930,&g_2930,(void*)0},{&g_2930,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,(void*)0,&g_2930,&g_2930},{(void*)0,(void*)0,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,(void*)0,&g_2930,&g_2930},{&g_2930,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,(void*)0,(void*)0,&g_2930,(void*)0}},{{&g_2930,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,&g_2930,(void*)0,&g_2930},{&g_2930,(void*)0,(void*)0,&g_2930,&g_2930},{&g_2930,&g_2930,(void*)0,&g_2930,&g_2930},{&g_2930,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,&g_2930,&g_2930,(void*)0},{&g_2930,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,&g_2930,&g_2930,&g_2930}},{{&g_2930,(void*)0,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,(void*)0,&g_2930,&g_2930},{&g_2930,&g_2930,(void*)0,&g_2930,&g_2930},{&g_2930,(void*)0,&g_2930,&g_2930,(void*)0},{&g_2930,&g_2930,&g_2930,&g_2930,(void*)0},{&g_2930,&g_2930,(void*)0,(void*)0,&g_2930},{&g_2930,(void*)0,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,(void*)0,&g_2930,&g_2930}},{{&g_2930,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,(void*)0,&g_2930,(void*)0},{&g_2930,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,(void*)0,&g_2930,(void*)0,&g_2930},{(void*)0,&g_2930,&g_2930,&g_2930,&g_2930},{&g_2930,(void*)0,&g_2930,(void*)0,(void*)0},{&g_2930,&g_2930,(void*)0,(void*)0,&g_2930}}};
static int32_t * const *** const g_2928 = &g_2929[2][5][1];
static int32_t * const *** const *g_2927[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t * const *g_2933 = &g_884;
static int16_t g_2942 = 0xD748L;
static int32_t *g_2955 = &g_714;
static int32_t *g_2956 = &g_714;
static int32_t *g_2957 = &g_4;
static int32_t *g_2958 = &g_714;
static int32_t ** const g_2954[6][5] = {{&g_2958,&g_2958,(void*)0,&g_2958,&g_2958},{&g_2957,&g_2956,&g_2957,&g_2957,&g_2956},{&g_2958,&g_2955,&g_2955,&g_2958,&g_2955},{&g_2956,&g_2956,(void*)0,&g_2956,&g_2956},{&g_2955,&g_2958,&g_2955,&g_2955,&g_2958},{&g_2956,&g_2957,&g_2957,&g_2956,&g_2957}};
static int32_t ** const *g_2953 = &g_2954[4][0];
static const int8_t g_3128[3] = {0L,0L,0L};
static int32_t ***g_3134 = (void*)0;
static int32_t ****g_3133 = &g_3134;
static uint64_t g_3157 = 18446744073709551615UL;
static struct S0 ***g_3159 = (void*)0;
static int16_t g_3264 = (-1L);
static uint16_t g_3515 = 0x23A0L;
static struct S0 **g_3544[3] = {&g_1293,&g_1293,&g_1293};
static const int64_t g_3552 = 0xACB6A6731F72141ELL;
static int32_t *****g_3623 = (void*)0;
static const int32_t * const * const g_3629 = &g_762;
static const int32_t * const * const *g_3628 = &g_3629;
static const int32_t * const * const **g_3627 = &g_3628;
static const int32_t * const * const ***g_3626 = &g_3627;
static int64_t * const *g_3724 = (void*)0;
static int64_t * const **g_3723 = &g_3724;
static int64_t * const ***g_3722 = &g_3723;
static int64_t * const ****g_3721[9][9][3] = {{{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,(void*)0},{&g_3722,&g_3722,&g_3722},{(void*)0,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{(void*)0,&g_3722,&g_3722}},{{&g_3722,&g_3722,&g_3722},{(void*)0,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{(void*)0,(void*)0,&g_3722},{&g_3722,(void*)0,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722}},{{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{(void*)0,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722}},{{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,(void*)0},{&g_3722,(void*)0,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,(void*)0,&g_3722},{&g_3722,&g_3722,(void*)0},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722}},{{(void*)0,&g_3722,&g_3722},{&g_3722,&g_3722,(void*)0},{&g_3722,&g_3722,&g_3722},{(void*)0,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,(void*)0},{&g_3722,&g_3722,&g_3722}},{{&g_3722,&g_3722,(void*)0},{&g_3722,(void*)0,&g_3722},{(void*)0,&g_3722,&g_3722},{&g_3722,&g_3722,(void*)0},{&g_3722,&g_3722,(void*)0},{&g_3722,&g_3722,&g_3722},{(void*)0,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,(void*)0}},{{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,(void*)0,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,(void*)0,&g_3722}},{{&g_3722,&g_3722,(void*)0},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{(void*)0,&g_3722,(void*)0},{(void*)0,&g_3722,(void*)0},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{(void*)0,&g_3722,(void*)0}},{{(void*)0,&g_3722,&g_3722},{&g_3722,&g_3722,(void*)0},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{(void*)0,&g_3722,(void*)0},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722},{&g_3722,&g_3722,&g_3722}}};
static const uint32_t g_3785[7][8] = {{4UL,0xC8098A2DL,0xC8098A2DL,4UL,0x546470B4L,4UL,0xC8098A2DL,0xC8098A2DL},{0xC8098A2DL,0x546470B4L,18446744073709551615UL,18446744073709551615UL,0x546470B4L,0xC8098A2DL,0x546470B4L,18446744073709551615UL},{4UL,0x546470B4L,4UL,0xC8098A2DL,0xC8098A2DL,4UL,0x546470B4L,4UL},{1UL,0xC8098A2DL,18446744073709551615UL,0xC8098A2DL,1UL,1UL,0xC8098A2DL,18446744073709551615UL},{1UL,1UL,0xC8098A2DL,18446744073709551615UL,0xC8098A2DL,1UL,1UL,0xC8098A2DL},{4UL,0xC8098A2DL,0xC8098A2DL,4UL,0x546470B4L,4UL,0xC8098A2DL,0xC8098A2DL},{0xC8098A2DL,0x546470B4L,18446744073709551615UL,18446744073709551615UL,0x546470B4L,0xC8098A2DL,0x546470B4L,18446744073709551615UL}};
static const uint32_t g_3886 = 0x3832E6A0L;
static int16_t g_3890[3] = {1L,1L,1L};
static const struct S0 *g_3906 = &g_1047;
static const struct S0 **g_3905 = &g_3906;
static const struct S0 ***g_3904 = &g_3905;
static const struct S0 **** const g_3903 = &g_3904;
static const struct S0 **** const *g_3902[10][4][1] = {{{&g_3903},{&g_3903},{&g_3903},{&g_3903}},{{&g_3903},{(void*)0},{&g_3903},{&g_3903}},{{&g_3903},{&g_3903},{&g_3903},{&g_3903}},{{&g_3903},{(void*)0},{&g_3903},{&g_3903}},{{&g_3903},{&g_3903},{&g_3903},{(void*)0}},{{&g_3903},{&g_3903},{&g_3903},{&g_3903}},{{&g_3903},{&g_3903},{&g_3903},{&g_3903}},{{&g_3903},{&g_3903},{&g_3903},{&g_3903}},{{&g_3903},{&g_3903},{&g_3903},{&g_3903}},{{&g_3903},{&g_3903},{&g_3903},{&g_3903}}};
static uint8_t ****g_3944 = (void*)0;
static uint8_t *****g_3943[10] = {&g_3944,&g_3944,&g_3944,&g_3944,&g_3944,&g_3944,&g_3944,&g_3944,&g_3944,&g_3944};
static uint32_t *g_3946 = (void*)0;
static uint16_t g_3963 = 65535UL;
static int32_t *g_4044 = (void*)0;
static uint8_t g_4059 = 0x91L;



static const int32_t func_1(void);
static int8_t func_13(uint8_t p_14, int32_t * p_15, int32_t * p_16, int32_t * const p_17);
static uint8_t func_18(uint32_t p_19, int8_t p_20);
static int32_t * const func_22(int32_t p_23, int16_t p_24, const int32_t p_25, int32_t * p_26);
static int8_t func_43(int32_t * p_44, struct S0 p_45, uint16_t p_46, uint64_t p_47, uint8_t p_48);
static uint16_t func_50(int32_t p_51);
static int32_t func_54(const int32_t * p_55, int32_t * p_56, int32_t * p_57, int32_t * p_58);
static int32_t * func_59(const uint32_t p_60, const int8_t p_61, uint64_t p_62);
static const int8_t func_63(uint32_t p_64);
static int16_t func_67(int32_t p_68, int16_t p_69);
# 188 "<stdin>"
static const int32_t func_1(void)
{
    uint64_t l_2[7] = {0UL,0xAED23B6182EAC453LL,0xAED23B6182EAC453LL,0UL,0xAED23B6182EAC453LL,0xAED23B6182EAC453LL,0UL};
    int32_t *l_3 = &g_4;
    uint32_t **l_2939 = &g_2898[1][4][0];
    uint32_t l_2969 = 4294967289UL;
    int32_t ** const **l_3028 = (void*)0;
    uint8_t * const *l_3034 = (void*)0;
    int32_t l_3080 = 0L;
    int32_t l_3081 = 1L;
    int32_t l_3083 = (-2L);
    int32_t l_3085[1];
    int32_t l_3104 = 1L;
    int32_t l_3136 = 7L;
    uint32_t ****l_3156 = &g_162[4];
    const struct S0 *l_3166[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_3216 = 0xC6182630L;
    int16_t l_3240 = (-2L);
    struct S0 l_3251 = {0x5FA2974EL,-73,0x75L};
    uint32_t l_3268 = 0x980F9AD5L;
    uint32_t l_3276[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    uint16_t l_3280 = 0x8D41L;
    uint32_t l_3300 = 0xB6DFC4ADL;
    uint8_t l_3304[8] = {248UL,0x5EL,0x5EL,248UL,0x5EL,0x5EL,248UL,0x5EL};
    int8_t *l_3378 = &g_1294.f2;
    int8_t l_3402 = 0xB7L;
    int8_t l_3453 = 0xC7L;
    uint64_t *** const *l_3486 = &g_1727;
    int64_t ***l_3514 = &g_757;
    uint16_t l_3517 = 1UL;
    uint32_t l_3574 = 0x55D08FC3L;
    int16_t l_3577[3][5] = {{0x5FEEL,0x18C2L,0x5FEEL,0x18C2L,0x5FEEL},{0L,0L,0L,0L,0L},{0x5FEEL,0x18C2L,0x5FEEL,0x18C2L,0x5FEEL}};
    struct S0 l_3585 = {0x47498326L,443,-1L};
    uint32_t l_3603 = 0x2896B0E2L;
    int16_t l_3614 = (-1L);
    uint16_t *** const l_3621 = &g_350;
    uint16_t *** const *l_3620 = &l_3621;
    uint32_t l_3660 = 0x51ABE92BL;
    uint8_t l_3699[3][2][2];
    int16_t ****l_3711[10] = {&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363};
    int16_t *****l_3710 = &l_3711[5];
    const int64_t l_3742[4] = {0x64EBD2B82233158FLL,0x64EBD2B82233158FLL,0x64EBD2B82233158FLL,0x64EBD2B82233158FLL};
    uint64_t l_3804 = 0x67D69FF2338E0C78LL;
    uint8_t ** const *l_3838 = (void*)0;
    uint8_t ** const **l_3837 = &l_3838;
    const uint32_t l_3854 = 0xF7876C4EL;
    int8_t l_3867 = 1L;
    uint32_t l_3871 = 4294967295UL;
    uint16_t l_3957 = 0x3D1AL;
    uint64_t l_4001 = 0x747B9041BA7A3856LL;
    uint32_t l_4045 = 0x905ECEE1L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_3085[i] = 0x5DB7DC14L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_3699[i][j][k] = 255UL;
        }
    }
    if ((l_2[6] , ((*l_3) = l_2[2])))
    {
        uint8_t l_7 = 0x02L;
        int32_t l_21 = 1L;
        const int16_t l_2934 = 0xE2AAL;
        int32_t l_2935 = 0xF567CC45L;
        const struct S0 *l_2967 = (void*)0;
        int8_t l_2993[10][1] = {{0x19L},{0x19L},{0L},{(-1L)},{0L},{0x19L},{0x19L},{0L},{(-1L)},{0L}};
        int32_t l_3009[3][5][7] = {{{0xDFABDE1BL,0x2E68AD0CL,0xC855045AL,0x2E68AD0CL,0xDFABDE1BL,1L,1L},{0x7B40993BL,0x6B753B3EL,1L,0x6B753B3EL,0x7B40993BL,0L,0L},{0xDFABDE1BL,0x2E68AD0CL,0xC855045AL,0x2E68AD0CL,0xDFABDE1BL,1L,1L},{0x7B40993BL,0x6B753B3EL,1L,0x6B753B3EL,0x7B40993BL,0L,0L},{0xDFABDE1BL,0x2E68AD0CL,0xC855045AL,0x2E68AD0CL,0xDFABDE1BL,1L,1L}},{{0x7B40993BL,0x6B753B3EL,1L,0x6B753B3EL,0x7B40993BL,0L,0L},{0xDFABDE1BL,0x2E68AD0CL,0xC855045AL,0x2E68AD0CL,0xDFABDE1BL,1L,1L},{0x7B40993BL,0x6B753B3EL,1L,0x6B753B3EL,0x7B40993BL,0L,0L},{0xDFABDE1BL,0x2E68AD0CL,0xC855045AL,0x2E68AD0CL,0xDFABDE1BL,1L,1L},{0x7B40993BL,0x6B753B3EL,1L,0x6B753B3EL,0x7B40993BL,0L,0L}},{{0xDFABDE1BL,0x2E68AD0CL,0xC855045AL,0x2E68AD0CL,0xDFABDE1BL,1L,1L},{0x7B40993BL,0x6B753B3EL,1L,0x6B753B3EL,0x7B40993BL,0L,0L},{0xDFABDE1BL,0x2E68AD0CL,0xC855045AL,0x2E68AD0CL,0xDFABDE1BL,1L,0xC855045AL},{0L,0L,2L,0L,0L,1L,1L},{1L,0L,0x036D7C81L,0L,1L,0xC855045AL,0xC855045AL}}};
        uint32_t l_3077 = 0xF9E7D4F7L;
        const uint32_t l_3107 = 0xF15A40DDL;
        int16_t ****l_3110 = &g_363;
        int16_t l_3160 = 2L;
        int16_t l_3161 = 6L;
        int32_t l_3173 = (-5L);
        uint32_t l_3195 = 0x2FC734FCL;
        uint32_t l_3212 = 0xA06B2738L;
        int32_t ****l_3213 = &g_3134;
        uint32_t l_3214 = 18446744073709551615UL;
        uint64_t l_3217 = 0x3ACC5546038E9957LL;
        int64_t l_3263 = 1L;
        int8_t l_3271[9][4] = {{(-1L),1L,(-6L),0xEBL},{0x3BL,0x38L,(-4L),(-6L)},{0x7CL,0x38L,0x7CL,0xEBL},{0x38L,1L,1L,(-1L)},{(-1L),(-6L),0x3BL,1L},{0x8CL,0x3BL,0x3BL,0x8CL},{(-1L),0xEBL,1L,0x7CL},{0x38L,(-1L),0x7CL,(-8L)},{0x7CL,(-8L),(-4L),(-8L)}};
        uint64_t **l_3334 = &g_1147;
        struct S0 **l_3364 = &g_1293;
        struct S0 ***l_3363 = &l_3364;
        int16_t l_3372 = 2L;
        int64_t *l_3418 = &g_228;
        const uint32_t l_3434 = 0x780576EBL;
        int32_t *l_3435 = &g_1340;
        int64_t l_3436 = 1L;
        int16_t l_3444 = 7L;
        int32_t l_3455 = 0x32F5FBA2L;
        int32_t **l_3463 = &g_2958;
        uint8_t l_3506[7][9] = {{0x2DL,0x04L,0x04L,0x2DL,0x2DL,0xEDL,0x2DL,0x2DL,0x04L},{0x2DL,0x2DL,249UL,0xEDL,0x9DL,0xEDL,249UL,0x2DL,0x2DL},{0x04L,0x2DL,0x2DL,0xEDL,0x2DL,0x2DL,0x04L,0x04L,0x2DL},{0xEDL,0x2DL,249UL,0x2DL,0xEDL,0x2DL,0x2DL,0xEDL,0x2DL},{0x04L,0x2DL,0x04L,0x2DL,249UL,249UL,0x2DL,0x04L,0x2DL},{0x2DL,0x04L,0x2DL,249UL,249UL,0x2DL,0x04L,0x2DL,0x04L},{0x2DL,0xEDL,0x2DL,0x2DL,0xEDL,0x2DL,249UL,0x2DL,0xEDL}};
        uint16_t l_3530 = 2UL;
        uint16_t l_3564 = 0x663EL;
        uint64_t l_3567 = 0x264C5B0495FE9D48LL;
        int8_t l_3573 = 0x18L;
        int i, j, k;
        for (g_4 = (-6); (g_4 < 10); g_4 = safe_add_func_uint64_t_u_u(g_4, 7))
        {
            uint32_t * const *l_2938 = &g_2898[1][3][2];
            int16_t *l_2943 = &g_526[0][1];
            int32_t ** const *l_2952 = (void*)0;
            int64_t *l_2966 = &g_117[1];
            int64_t **l_2965 = &l_2966;
            int32_t l_2968 = 0xF4EE854FL;
            uint64_t l_3105[8] = {0x993B7A0D18191FC8LL,0x993B7A0D18191FC8LL,0x993B7A0D18191FC8LL,0x993B7A0D18191FC8LL,0x993B7A0D18191FC8LL,0x993B7A0D18191FC8LL,0x993B7A0D18191FC8LL,0x993B7A0D18191FC8LL};
            int32_t l_3113[4][3] = {{0xDAA60445L,0xDAA60445L,0xDAA60445L},{0L,1L,0L},{0xDAA60445L,0xDAA60445L,0xDAA60445L},{0L,1L,0L}};
            const int8_t *l_3127 = &g_3128[0];
            uint32_t l_3158 = 0x2964D420L;
            const struct S0 *l_3165 = &g_448[5][0][7];
            const int32_t l_3259[6][2][2] = {{{7L,7L},{7L,7L}},{{7L,7L},{7L,7L}},{{7L,7L},{7L,7L}},{{7L,7L},{7L,7L}},{{7L,7L},{7L,7L}},{{7L,7L},{7L,7L}}};
            int i, j, k;
        }
        for (g_1294.f2 = 0; (g_1294.f2 <= 6); g_1294.f2 += 1)
        {
            uint32_t *l_3272 = (void*)0;
            uint32_t *l_3273 = &g_141;
            int32_t l_3282 = 2L;
            int16_t *l_3292 = (void*)0;
            int16_t ** const l_3291 = &l_3292;
            uint16_t l_3298 = 0x251FL;
            int32_t l_3299[5];
            uint32_t l_3303 = 0x612FD6CFL;
            struct S0 l_3308 = {0x13D2F7E7L,-425,0x80L};
            int64_t ***l_3351[2];
            struct S0 ***l_3362 = (void*)0;
            int64_t l_3382 = 0x89C236A733310549LL;
            int8_t *l_3384 = &g_1102;
            int16_t l_3405 = (-1L);
            uint32_t l_3432 = 18446744073709551615UL;
            int64_t l_3469 = 1L;
            int32_t *l_3476 = (void*)0;
            int64_t ** const *l_3512 = &g_757;
            int i;
            for (i = 0; i < 5; i++)
                l_3299[i] = 0x68847B5AL;
            for (i = 0; i < 2; i++)
                l_3351[i] = &g_757;
        }
    }
    else
    {
        int32_t l_3578[2];
        int32_t *l_3586[10][3] = {{(void*)0,(void*)0,&g_4},{(void*)0,&g_4,&g_718[0][5]},{&l_3083,(void*)0,(void*)0},{&g_4,&g_4,(void*)0},{&g_313,(void*)0,&g_1340},{&g_313,&g_718[0][5],&l_3083},{&g_4,&g_718[0][5],(void*)0},{&l_3083,&g_313,&l_3083},{(void*)0,&g_1340,&g_1340},{(void*)0,&g_1340,(void*)0}};
        int32_t **l_3587 = &l_3586[2][0];
        uint32_t *l_3596 = &g_141;
        uint32_t l_3604 = 0xF62068BAL;
        int64_t *l_3605 = (void*)0;
        int64_t *l_3606 = &g_86;
        const int8_t l_3607 = 8L;
        uint32_t **l_3612 = &g_2898[0][4][2];
        uint16_t *** const *l_3622 = (void*)0;
        struct S0 * const *l_3659 = &g_1293;
        struct S0 * const **l_3658 = &l_3659;
        struct S0 * const ***l_3657 = &l_3658;
        uint32_t l_3692 = 0x30F848B0L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_3578[i] = 0xD49449F7L;
        (*l_3587) = func_22((((l_3577[0][0] && 0xAAD1L) , l_3578[0]) >= ((*l_3) < (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((((((*g_2956) = ((safe_sub_func_int16_t_s_s(((((*l_3378) = (*l_3)) && g_1294.f0) ^ (*g_1147)), ((0x1EDF3B4AA75D3F06LL & (l_3585 , (*l_3))) , 0xBE41L))) , (*l_3))) < l_3578[0]) <= 3UL) & (*l_3)) , (*l_3)) , l_3578[0]), 0x8B38L)), 1UL)))), l_3578[0], l_3578[0], l_3586[2][0]);
        if (((*l_3) != ((*l_3606) = (((((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((0x3B100EFEDDF23A3ALL < (safe_sub_func_uint16_t_u_u((((*l_3596) &= (0x4122L & (safe_mul_func_int8_t_s_s(g_1528, (*g_2921))))) , ((((((safe_add_func_int8_t_s_s(((((((safe_mul_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((g_2942 || (((((*l_3) != (*l_3)) || ((255UL == (**g_395)) | (*l_3))) | 0x82BAFDF2098D35D0LL) | (*g_2921))), (*g_2955))) <= 0x27BCL), 0UL)) && (**g_350)) ^ 1L) && (*l_3)) | 0x340DE999L) < (*l_3)), (*g_2921))) == l_3603) | (*g_396)) > g_3128[0]) & (*l_3)) || 1UL)), l_3604))) == g_1067[0][1]) | (*l_3)) & (*l_3)), 0UL)), 0x7EL)) <= (*l_3)) && 0x6080D0FFL) < (*g_396)) >= 1L))))
        {
            int16_t l_3608 = 0L;
lbl_3609:
            (*g_2955) &= l_3607;
            (*g_2957) = l_3608;
            if (l_3585.f2)
                goto lbl_3609;
        }
        else
        {
            uint32_t **l_3613 = &g_2898[0][1][1];
            int32_t l_3663 = 0xD59EFDCFL;
            const int32_t **l_3691 = &g_762;
            for (g_714 = 25; (g_714 == 15); g_714--)
            {
                const int32_t l_3615 = 0x406C6059L;
                for (g_99 = 0; (g_99 >= 0); g_99 -= 1)
                {
                    for (l_3268 = 0; (l_3268 <= 2); l_3268 += 1)
                    {
                        int i;
                        l_3613 = l_3612;
                        (*l_3587) = &l_3085[g_99];
                    }
                }
                (*g_2957) &= l_3614;
                for (g_110 = 0; g_110 < 10; g_110 += 1)
                {
                    g_28[g_110] = 0xDE036841L;
                }
                (*g_2957) = l_3615;
            }
            for (l_2969 = 0; (l_2969 != 30); l_2969 = safe_add_func_int8_t_s_s(l_2969, 5))
            {
                const int32_t * const * const ***l_3630[9][4] = {{&g_3627,(void*)0,&g_3627,(void*)0},{&g_3627,&g_3627,(void*)0,(void*)0},{&g_3627,&g_3627,&g_3627,(void*)0},{&g_3627,(void*)0,(void*)0,&g_3627},{&g_3627,(void*)0,(void*)0,(void*)0},{(void*)0,&g_3627,(void*)0,(void*)0},{&g_3627,&g_3627,(void*)0,(void*)0},{&g_3627,&g_3627,&g_3627,(void*)0},{&g_3627,(void*)0,(void*)0,&g_3627}};
                int32_t l_3665 = 0x09FB6F97L;
                int i, j;
                (*g_2957) |= (*g_2955);
                for (g_1994 = 0; (g_1994 < 13); g_1994++)
                {
                    int32_t ****l_3625 = (void*)0;
                    int32_t *****l_3624 = &l_3625;
                    int32_t l_3664 = 7L;
                    if ((*l_3))
                    {
                        l_3622 = l_3620;
                    }
                    else
                    {
                        uint64_t l_3668 = 18446744073709551612UL;
                        struct S0 **l_3685 = &g_1293;
                        int16_t *l_3686[8] = {&g_2721[3][2][0],&g_2721[3][2][0],&g_2721[3][2][0],&g_2721[3][2][0],&g_2721[3][2][0],&g_2721[3][2][0],&g_2721[3][2][0],&g_2721[3][2][0]};
                        int32_t l_3687[10][6][4] = {{{(-3L),(-9L),0xDAF41964L,0xF4F8C05EL},{0x6C48D445L,0xCE35A385L,0xFA89EFBEL,9L},{0xE0D07076L,1L,0xCE35A385L,0L},{0xD22F04E8L,0xF836CBEDL,0x6542B3ADL,(-3L)},{(-7L),0L,6L,0L},{0x5C92C636L,0xF7D9E4D0L,0xF836CBEDL,0x0BE4EB18L}},{{(-1L),(-3L),0x9332F5A2L,0L},{0xBEBC982CL,(-1L),0x89692721L,0x6C48D445L},{0xBEBC982CL,0xFA6C4153L,0x9332F5A2L,(-7L)},{(-1L),0x6C48D445L,0xF836CBEDL,0xB6A8C9E1L},{0x5C92C636L,0xB2BEBAAAL,6L,(-1L)},{(-7L),0x89692721L,0x6542B3ADL,(-1L)}},{{0xD22F04E8L,(-1L),0xCE35A385L,0xE7369635L},{0xE0D07076L,0x0193EA58L,0xFA89EFBEL,0x192EBD9BL},{0x6C48D445L,(-1L),0xDAF41964L,0xF7D9E4D0L},{(-3L),0xEB4A68F5L,1L,(-1L)},{0x0193EA58L,1L,0x4AA84BA9L,(-1L)},{0xFA6C4153L,0x4AA84BA9L,0x39CC07F4L,0x923BE398L}},{{(-1L),0x4295E5B4L,0xE70E783EL,1L},{0x1119CB08L,0L,0x1C92CAAFL,(-3L)},{(-9L),1L,0xD22F04E8L,0x163B73C4L},{0x192EBD9BL,(-1L),0xB6A8C9E1L,0xA61D1E86L},{0xA09EDAC8L,0x609629B2L,0L,(-2L)},{1L,(-1L),0x5C92C636L,0x4295E5B4L}},{{0x209C8EB7L,(-1L),(-1L),0x26A11460L},{0x4295E5B4L,7L,0x51CE9D66L,0x0193EA58L},{(-1L),0xF4F8C05EL,(-8L),(-9L)},{(-1L),0x0F45650DL,0x11634C19L,1L},{1L,2L,0xFA6C4153L,(-1L)},{0xC0BC3574L,0x4BBB3FA0L,0xCD6B00B5L,0xCD6B00B5L}},{{0xDAF41964L,0xDAF41964L,(-1L),0xAD2FF1DCL},{0xB6A8C9E1L,0x7F610FD9L,(-1L),0L},{(-10L),0x1C92CAAFL,0x0193EA58L,(-1L)},{0xF7D9E4D0L,0x1C92CAAFL,(-2L),0L},{0x1C92CAAFL,0x7F610FD9L,9L,0xAD2FF1DCL},{0x11634C19L,0xDAF41964L,1L,0xCD6B00B5L}},{{0x609629B2L,0x4BBB3FA0L,0x6604C80BL,(-1L)},{6L,2L,1L,0x6542B3ADL},{0x6C48D445L,0x923BE398L,0x0F45650DL,1L},{0x4295E5B4L,0xC0BC3574L,1L,0L},{(-1L),0x0193EA58L,0x39CC07F4L,0x4BBB3FA0L},{0xCD6B00B5L,1L,0x304C1D2EL,0L}},{{0L,0xE81D6F74L,0x26A11460L,0xA61D1E86L},{0x6542B3ADL,0x0F45650DL,0xF836CBEDL,0L},{0x7D4175EAL,0xB6A8C9E1L,1L,0x26A11460L},{0x682BB62AL,0L,0x4295E5B4L,(-1L)},{0xFA89EFBEL,0xB2BEBAAAL,1L,1L},{0x163B73C4L,0L,0xC0BC3574L,(-1L)}},{{0x0BE4EB18L,0x9332F5A2L,1L,0x7F610FD9L},{(-1L),0x6604C80BL,0xD22F04E8L,0xE0D07076L},{(-1L),0xE7369635L,0x609629B2L,1L},{(-10L),(-9L),(-3L),0xDAF41964L},{0x85C0BEC3L,0L,(-1L),0x7D4175EAL},{0L,0xCD6B00B5L,0x6542B3ADL,0x192EBD9BL}},{{6L,0x51CE9D66L,0x428DC76CL,(-1L)},{(-9L),1L,(-9L),8L},{1L,0x73BF7DF1L,7L,0L},{0xB6A8C9E1L,(-8L),0x11634C19L,0x73BF7DF1L},{0x923BE398L,(-1L),0x11634C19L,0x682BB62AL},{0xB6A8C9E1L,(-1L),7L,0x163B73C4L}}};
                        const int32_t **l_3688 = &g_762;
                        const int32_t *l_3690 = &l_3083;
                        const int32_t **l_3689 = &l_3690;
                        int i, j, k;
                        (*g_2958) = ((l_3624 = g_3623) == (g_3626 = (l_3630[1][2] = g_3626)));
                        l_3665 &= (safe_rshift_func_uint8_t_u_s(((safe_div_func_uint32_t_u_u((255UL > (*l_3)), ((*l_3596) = ((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(0x625FC415L, ((*l_3) <= ((***g_1145)++)))) < (((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((*g_2921) ^= (((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u((((safe_sub_func_int64_t_s_s((l_3657 != &g_3159), l_3660)) || (safe_sub_func_int64_t_s_s((*l_3), (l_3663 , 1L)))) < 0xFA522B8B25C75250LL), 3)) == (*g_396)) >= l_3663), (*g_396))) ^ l_3663), g_117[0])) ^ 0xA5A969E7L) >= (**g_350)), l_3663)), (*g_351))) & 65535UL) <= (*l_3))) ^ l_3663), (**g_395))), g_1809)) | (*g_396)) && g_91[1])), 0xA2FEL)) || l_3664)))) , 7UL), l_3663));
                        (*l_3689) = ((*l_3688) = (((safe_lshift_func_uint16_t_u_u(l_3663, 13)) && ((g_1175[2][1][0] = (l_3687[4][5][2] = (l_3668 && (l_3668 < (safe_div_func_uint64_t_u_u((**g_1728), (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((***l_3658) , (((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((l_3663 >= (((*l_3606) |= ((safe_mod_func_uint32_t_u_u(((((*l_3378) = 0x37L) <= (*g_2921)) <= ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(5UL, g_3128[0])), l_3663)) >= g_118)), 7L)) & 0x0DC0L)) || 0xAD99405B5E6CBA09LL)) , 0x457DL), g_28[9])), 3)) && 0x667EL) <= 1UL) , l_3685) != (void*)0)), (*g_2921))), (*g_351))))))))) , (*g_2956))) , &l_3663));
                    }
                    if ((*l_3))
                        break;
                }
            }
            (*l_3691) = (****g_3626);
        }
        l_3692--;
    }
    for (l_3081 = (-9); (l_3081 < 23); l_3081 = safe_add_func_int32_t_s_s(l_3081, 1))
    {
        const int64_t l_3697[6] = {0x08A58D994ED0AC5CLL,0x08A58D994ED0AC5CLL,0x08A58D994ED0AC5CLL,0x08A58D994ED0AC5CLL,0x08A58D994ED0AC5CLL,0x08A58D994ED0AC5CLL};
        int64_t * const ****l_3720[1];
        int32_t **l_3819 = &g_884;
        int32_t ***l_3818 = &l_3819;
        uint8_t l_3820 = 0x21L;
        int32_t l_3827[8];
        struct S0 ****l_3889[8][4] = {{(void*)0,&g_3159,&g_3159,(void*)0},{&g_3159,(void*)0,&g_3159,&g_3159},{&g_3159,&g_3159,&g_3159,&g_3159},{(void*)0,&g_3159,&g_3159,&g_3159},{&g_3159,&g_3159,&g_3159,&g_3159},{&g_3159,(void*)0,&g_3159,(void*)0},{&g_3159,&g_3159,&g_3159,&g_3159},{(void*)0,&g_3159,&g_3159,(void*)0}};
        uint32_t *l_3921 = &l_3276[8];
        uint64_t l_3931 = 7UL;
        int32_t * const **l_3990[6][7][5] = {{{(void*)0,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,&g_2933,&g_2933},{&g_2933,&g_2933,&g_2933,&g_2933,&g_2933},{(void*)0,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,&g_2933,&g_2933,&g_2933,&g_2933}},{{(void*)0,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,&g_2933,&g_2933},{&g_2933,&g_2933,&g_2933,&g_2933,&g_2933},{(void*)0,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,(void*)0,&g_2933}},{{&g_2933,(void*)0,(void*)0,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,&g_2933,&g_2933},{(void*)0,&g_2933,&g_2933,(void*)0,&g_2933},{(void*)0,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,(void*)0,&g_2933}},{{&g_2933,(void*)0,(void*)0,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,&g_2933,&g_2933},{(void*)0,&g_2933,&g_2933,(void*)0,&g_2933},{(void*)0,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,(void*)0,&g_2933}},{{&g_2933,(void*)0,(void*)0,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,&g_2933,&g_2933},{(void*)0,&g_2933,&g_2933,(void*)0,&g_2933},{(void*)0,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,(void*)0,&g_2933}},{{&g_2933,(void*)0,(void*)0,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,&g_2933,&g_2933},{(void*)0,&g_2933,&g_2933,(void*)0,&g_2933},{(void*)0,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,&g_2933,&g_2933,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,&g_2933,&g_2933},{&g_2933,(void*)0,&g_2933,(void*)0,&g_2933}}};
        int32_t * const ***l_3989 = &l_3990[1][3][3];
        int32_t * const ****l_3988[10][10] = {{&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989},{&l_3989,&l_3989,&l_3989,(void*)0,(void*)0,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989},{&l_3989,&l_3989,&l_3989,(void*)0,(void*)0,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989},{&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989},{&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,(void*)0,&l_3989,&l_3989},{(void*)0,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,(void*)0},{&l_3989,&l_3989,(void*)0,&l_3989,&l_3989,(void*)0,&l_3989,&l_3989,&l_3989,&l_3989},{&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,(void*)0,&l_3989,&l_3989,(void*)0},{&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989},{&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989,&l_3989}};
        int16_t l_4003 = (-9L);
        int32_t l_4006[1][8];
        int32_t l_4007[9] = {0L,0xC08B3AF3L,0xC08B3AF3L,0L,0xC08B3AF3L,0xC08B3AF3L,0L,0xC08B3AF3L,0xC08B3AF3L};
        uint32_t l_4010 = 0x59F886A5L;
        int32_t *l_4014 = &l_3085[0];
        uint16_t l_4025 = 0UL;
        uint8_t l_4050 = 0x16L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_3720[i] = (void*)0;
        for (i = 0; i < 8; i++)
            l_3827[i] = 0x99FEE974L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
                l_4006[i][j] = (-1L);
        }
        for (g_646 = 0; (g_646 <= 7); g_646 += 1)
        {
            int32_t **l_3700 = &g_2955;
            int16_t ****l_3704 = (void*)0;
            uint16_t ***l_3706 = &g_350;
            int64_t l_3741 = 0L;
            uint8_t l_3770 = 0xB9L;
            uint64_t l_3777 = 8UL;
            int64_t *l_3787 = &g_117[3];
            int64_t * const * const l_3786 = &l_3787;
            int8_t l_3835[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
            uint8_t ** const **l_3840[5][3][6] = {{{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838},{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838},{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838}},{{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838},{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838},{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838}},{{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838},{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838},{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838}},{{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838},{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838},{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838}},{{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838},{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838},{&l_3838,&l_3838,&l_3838,&l_3838,&l_3838,&l_3838}}};
            int i, j, k;
            (*l_3700) = func_59((l_3304[g_646] , (((l_3697[1] > (l_3304[g_646] > (*g_1147))) <= (~(((*l_3) ^= ((l_3699[1][0][0] > (*g_1147)) , ((*g_396) == ((l_3304[g_646] , l_3697[1]) <= l_3697[1])))) , (***g_1727)))) , l_3697[2])), g_1047.f1, (***g_1145));
            if (((*l_3) < ((*l_3) == 0x40E5B55AL)))
            {
                return (*l_3);
            }
            else
            {
                uint16_t l_3701 = 0x8DC2L;
                struct S0 *l_3707[6][7] = {{&g_1294,&g_1294,(void*)0,&g_1047,(void*)0,&g_1047,&g_1047},{(void*)0,&g_448[1][0][4],&g_1047,&g_1294,&g_1047,(void*)0,(void*)0},{(void*)0,&g_448[3][0][4],&g_1047,&g_448[3][0][4],(void*)0,&g_1294,(void*)0},{&l_3251,(void*)0,&g_1047,(void*)0,&g_448[3][0][4],&g_1047,&g_448[3][0][4]},{(void*)0,&g_1047,&g_448[1][0][4],(void*)0,(void*)0,&g_448[1][0][4],&g_1047},{&g_1047,(void*)0,&g_448[5][0][7],&l_3251,(void*)0,&g_448[1][0][4],&g_1047}};
                int16_t ****l_3709[7][1] = {{&g_363},{&g_363},{&g_363},{&g_363},{&g_363},{&g_363},{&g_363}};
                int16_t *****l_3708 = &l_3709[3][0];
                int i, j;
                (*g_2956) = ((*l_3) = ((void*)0 == &g_717));
                (*l_3) = (l_3701 == (l_3697[1] | (((**l_3700) , (0x61L || (safe_mul_func_int16_t_s_s((**l_3700), 0UL)))) || (((((*g_710) = (*g_710)) == (l_3704 = (void*)0)) > (+(((((((((((((*l_3) ^ (*g_351)) , 5L) , 0xD09CB4525B324A51LL) | 0x1DB5D0EB95D383B9LL) , (**l_3700)) && 0xC3D9DFB1L) , (void*)0) != l_3706) , l_3707[4][1]) != &l_3585) , l_3708) == l_3710))) > 246UL))));
            }
            for (g_715 = 0; (g_715 <= 7); g_715 += 1)
            {
                struct S0 ***l_3725 = &g_3544[2];
                int32_t l_3727 = 0L;
                int32_t *l_3744 = (void*)0;
                const int64_t *l_3789 = (void*)0;
                const int64_t **l_3788 = &l_3789;
                uint8_t ** const ***l_3839[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (g_2193 = 0; (g_2193 <= 7); g_2193 += 1)
                {
                    int64_t ***** const l_3719 = &g_2241[3][2][2];
                    int32_t l_3726[2][4] = {{0x5C5DB17EL,0x5C5DB17EL,0x5C5DB17EL,0x5C5DB17EL},{0x5C5DB17EL,0x5C5DB17EL,0x5C5DB17EL,0x5C5DB17EL}};
                    int i, j;
                }
            }
        }
        for (g_99 = 2; (g_99 >= 0); g_99 -= 1)
        {
            int32_t l_3841 = 0xBD417EAFL;
            uint32_t *l_3842 = &l_3216;
            int32_t l_3861 = 0x51B40451L;
            int32_t l_3868 = 0x3E32BC2AL;
            int32_t l_3869[10] = {0xA71E74EBL,(-5L),0xA71E74EBL,0xA71E74EBL,(-5L),0xA71E74EBL,0xA71E74EBL,(-5L),0xA71E74EBL,0xA71E74EBL};
            struct S0 ****l_3874 = &g_3159;
            uint32_t *l_3914 = &l_3276[3];
            int8_t l_3930 = 0xA7L;
            uint64_t l_3932 = 18446744073709551610UL;
            int32_t l_3959[3][6] = {{0L,0xA682383BL,0x8FC76BF9L,0xA682383BL,0L,0L},{0x2DD2BA53L,0xA682383BL,0xA682383BL,0x2DD2BA53L,0x3B2CCDFFL,0x2DD2BA53L},{0x2DD2BA53L,0x3B2CCDFFL,0x2DD2BA53L,0xA682383BL,0xA682383BL,0x2DD2BA53L}};
            int32_t *l_3962[1][5][5] = {{{(void*)0,&g_714,&g_714,(void*)0,(void*)0},{(void*)0,&l_3869[4],&l_3827[0],&l_3827[0],&l_3869[4]},{(void*)0,&g_714,&l_3827[0],&l_3085[0],&l_3085[0]},{&g_714,(void*)0,&g_714,&l_3827[0],&l_3085[0]},{&l_3869[4],(void*)0,&l_3085[0],(void*)0,&l_3869[4]}}};
            uint32_t *****l_3985 = &g_2879;
            int16_t *l_4004 = &g_3890[1];
            int32_t l_4005[10][2][6] = {{{6L,0x1B794F6BL,2L,(-10L),2L,0x1B794F6BL},{0xAC6AD162L,0L,0x4A3DB7A7L,(-10L),0L,2L}},{{6L,2L,0x4A3DB7A7L,0xAC6AD162L,0x1B794F6BL,0x1B794F6BL},{(-1L),2L,2L,(-1L),0L,0xF6D9A00AL}},{{(-1L),0L,0xF6D9A00AL,0xAC6AD162L,2L,0xF6D9A00AL},{6L,0x1B794F6BL,2L,(-10L),2L,0x1B794F6BL}},{{0xAC6AD162L,0L,0x4A3DB7A7L,(-10L),0L,2L},{6L,2L,0x4A3DB7A7L,0xAC6AD162L,0x1B794F6BL,0x1B794F6BL}},{{(-1L),2L,2L,(-1L),0L,0xF6D9A00AL},{(-1L),0L,0xF6D9A00AL,0xAC6AD162L,2L,0xF6D9A00AL}},{{6L,0x1B794F6BL,2L,(-10L),2L,0x1B794F6BL},{0xAC6AD162L,0L,0x4A3DB7A7L,(-10L),0L,2L}},{{6L,2L,0x4A3DB7A7L,0xAC6AD162L,0x1B794F6BL,0x1B794F6BL},{(-1L),2L,2L,(-1L),0L,0xF6D9A00AL}},{{(-1L),0L,0xF6D9A00AL,0xAC6AD162L,2L,0xF6D9A00AL},{6L,0x1B794F6BL,2L,(-10L),2L,0x1B794F6BL}},{{0xAC6AD162L,0L,0x4A3DB7A7L,(-10L),0L,2L},{6L,(-3L),0xC037390BL,0xF6D9A00AL,0x6AC3E923L,0x6AC3E923L}},{{0x4A3DB7A7L,(-3L),(-3L),0x4A3DB7A7L,2L,0xF78A5A36L},{0x4A3DB7A7L,2L,0xF78A5A36L,0xF6D9A00AL,(-3L),0xF78A5A36L}}};
            int32_t l_4008 = 0x6B1B6203L;
            uint32_t l_4040 = 0x0F22B0BFL;
            int64_t ***l_4049 = &g_757;
            int32_t l_4101[7][1];
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_4101[i][j] = 0xEF206A76L;
            }
            for (g_32 = 9; (g_32 >= 0); g_32 -= 1)
            {
                uint32_t *l_3843 = &l_3660;
                int32_t l_3853 = 0L;
                int8_t l_3855 = 0xE9L;
                int32_t l_3870 = (-7L);
                struct S0 *****l_3907 = (void*)0;
                int32_t l_3909 = (-1L);
                uint32_t **l_3922 = (void*)0;
                uint32_t **l_3923 = (void*)0;
                uint32_t **l_3924 = &l_3843;
                uint32_t **l_3925 = &l_3842;
                int32_t ****l_3938 = &g_2534;
                int16_t l_3960[10] = {(-1L),0L,0L,(-1L),0L,0L,(-1L),0L,0L,(-1L)};
                int i, j;
                (*g_2958) = (((l_3841 , l_3842) != l_3843) , (safe_div_func_uint8_t_u_u(((*g_2921) &= ((*g_396) = (((((l_3841 , (safe_sub_func_uint32_t_u_u(l_3820, ((safe_unary_minus_func_uint64_t_u(((safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(l_3853, 1)), (l_3827[0] = (*l_3)))) & (g_2193 != l_3854)))) > 0xB0A243E9L)))) && l_3820) == 0x7171L) | l_3853) >= l_3841))), 0x87L)));
            }
            (*g_2240) = (*g_2240);
        }
    }
    return (*l_3);
}







static int8_t func_13(uint8_t p_14, int32_t * p_15, int32_t * p_16, int32_t * const p_17)
{
    int32_t *l_2813 = (void*)0;
    const struct S0 l_2823 = {1UL,500,5L};
    int32_t l_2868[2][1][5] = {{{(-1L),(-1L),0x7B426B64L,0L,0x7B426B64L}},{{(-1L),(-1L),0x7B426B64L,0L,0x7B426B64L}}};
    uint8_t l_2875[1][2];
    uint64_t ***l_2891 = &g_1728;
    int32_t **l_2903 = &g_884;
    int32_t * const ***l_2926 = (void*)0;
    int32_t * const *** const *l_2925 = &l_2926;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_2875[i][j] = 248UL;
    }
    if ((*p_15))
    {
        uint32_t l_2845 = 18446744073709551609UL;
        int32_t l_2866 = 0xD6BF2090L;
        int32_t l_2870 = 0xDC219C44L;
        int32_t l_2872[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
        uint32_t *** const *l_2880[1];
        int8_t l_2881 = 0L;
        int32_t *l_2902 = &g_144;
        uint32_t l_2923 = 0UL;
        int i;
        for (i = 0; i < 1; i++)
            l_2880[i] = &g_162[4];
        for (p_14 = 0; (p_14 <= 3); p_14 += 1)
        {
            uint32_t l_2837[6][9] = {{0xDB52C136L,18446744073709551609UL,7UL,18446744073709551609UL,0xDB52C136L,0x69707E11L,0xF7F1028EL,7UL,9UL},{0UL,0UL,9UL,7UL,0UL,1UL,0xBC862873L,0x993C1ABCL,18446744073709551615UL},{0x7A32D12FL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x69707E11L,0x69707E11L,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{7UL,1UL,0x7A32D12FL,18446744073709551615UL,0x8D12AB8CL,0xDB52C136L,18446744073709551615UL,0UL,1UL},{18446744073709551615UL,1UL,0x69707E11L,7UL,0xF7F1028EL,18446744073709551615UL,18446744073709551607UL,18446744073709551609UL,18446744073709551607UL},{18446744073709551609UL,1UL,18446744073709551609UL,18446744073709551609UL,1UL,18446744073709551609UL,9UL,18446744073709551615UL,18446744073709551607UL}};
            uint32_t l_2847[5] = {0UL,0UL,0UL,0UL,0UL};
            int32_t l_2848[6] = {0x65AD0F1EL,0x10ACB086L,0x10ACB086L,0x65AD0F1EL,0x10ACB086L,0x10ACB086L};
            struct S0 l_2861 = {0xDDCEB05DL,451,0L};
            uint32_t l_2883 = 9UL;
            uint64_t ***l_2892 = &g_1728;
            uint8_t *l_2920 = (void*)0;
            int i, j;
            for (g_715 = 1; (g_715 >= 0); g_715 -= 1)
            {
                int32_t **l_2812[4][4][7] = {{{&g_84,&g_84,(void*)0,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,(void*)0,&g_84},{&g_84,&g_84,(void*)0,&g_84,&g_84,(void*)0,&g_84},{&g_84,&g_84,(void*)0,&g_84,&g_84,&g_84,(void*)0}},{{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,(void*)0},{&g_84,&g_84,&g_84,&g_84,(void*)0,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,(void*)0,(void*)0,&g_84,&g_84,&g_84,&g_84}},{{(void*)0,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{(void*)0,&g_84,&g_84,&g_84,&g_84,(void*)0,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,(void*)0,&g_84},{&g_84,&g_84,&g_84,(void*)0,(void*)0,&g_84,&g_84}},{{&g_84,&g_84,&g_84,(void*)0,(void*)0,(void*)0,(void*)0},{&g_84,&g_84,&g_84,&g_84,&g_84,(void*)0,&g_84},{&g_84,&g_84,&g_84,(void*)0,&g_84,(void*)0,(void*)0},{&g_84,&g_84,&g_84,&g_84,&g_84,(void*)0,&g_84}}};
                int32_t l_2825 = 1L;
                uint32_t ****l_2878 = &g_162[4];
                uint32_t l_2899 = 0x36D45FC6L;
                int i, j, k;
                l_2813 = (p_15 = &g_32);
                for (g_1799 = 0; (g_1799 <= 1); g_1799 += 1)
                {
                    uint32_t *l_2824[1][5];
                    int32_t l_2867 = 0L;
                    int32_t l_2869 = 0L;
                    int32_t l_2874 = 0L;
                    int32_t l_2882[10] = {0x12EA8BAEL,0x12EA8BAEL,0x12EA8BAEL,0x12EA8BAEL,0x12EA8BAEL,0x12EA8BAEL,0x12EA8BAEL,0x12EA8BAEL,0x12EA8BAEL,0x12EA8BAEL};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_2824[i][j] = &g_91[8];
                    }
                    if ((safe_sub_func_uint32_t_u_u(g_1067[p_14][(g_715 + 6)], (l_2825 = ((*l_2813) = ((((***g_1145) = (((((void*)0 == &g_1612) ^ g_1175[(g_715 + 4)][g_1799][g_715]) < 5L) ^ ((safe_div_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((!(safe_mul_func_uint8_t_u_u(((g_1175[(g_1799 + 2)][g_715][g_1799] && (&g_1175[(g_1799 + 5)][g_1799][g_715] != (l_2823 , (void*)0))) <= 6UL), g_1175[(g_715 + 5)][g_715][g_1799]))), g_1175[(p_14 + 2)][g_1799][g_715])), 0x52EAD88A929EB51DLL)) & (*g_396)))) == g_1175[(g_715 + 5)][g_715][g_1799]) >= 0UL))))))
                    {
                        int8_t *l_2832 = &g_1294.f2;
                        const int32_t l_2844[7] = {2L,2L,2L,2L,2L,2L,2L};
                        int16_t *l_2846 = &g_526[0][2];
                        int i, j, k;
                        (*p_17) |= (((*l_2846) = (safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((*g_396) & ((safe_mul_func_int8_t_s_s(((*l_2832) ^= p_14), (safe_lshift_func_uint8_t_u_u((((1L || (*g_351)) != (safe_sub_func_uint64_t_u_u((l_2837[5][1] != (g_1175[(p_14 + 1)][g_715][g_1799] = p_14)), ((***g_1145) &= ((safe_lshift_func_uint16_t_u_s(p_14, (p_14 >= (safe_mod_func_uint32_t_u_u((((((safe_add_func_uint16_t_u_u(p_14, p_14)) , 0x36A3L) , g_1067[p_14][(g_715 + 6)]) < l_2837[2][7]) != p_14), g_1067[p_14][(g_715 + 6)]))))) | l_2844[1]))))) & 0xC4L), g_1067[p_14][(g_715 + 6)])))) < (*l_2813))), l_2845)) , (**g_350)), g_1067[p_14][(g_715 + 6)]))) != l_2847[4]);
                        g_144 ^= (*l_2813);
                    }
                    else
                    {
                        l_2848[4] &= (*l_2813);
                    }
                    for (g_118 = 0; (g_118 <= 3); g_118 += 1)
                    {
                        int32_t l_2871 = 0x3777844BL;
                        int32_t l_2873[6][6][7] = {{{0x6EDD66FCL,0xDB0B5B0AL,0x3F84961AL,0x84FA7E1AL,0x1ADADB79L,0x1ADADB79L,0x84FA7E1AL},{0xF109ED88L,0x75395346L,0xF109ED88L,(-1L),1L,0x0E3C998FL,(-4L)},{0x84FA7E1AL,0xACA9B4ABL,0L,0L,0xACA9B4ABL,0L,0xACA9B4ABL},{8L,(-1L),1L,1L,(-4L),0x0E3C998FL,1L},{0x1ADADB79L,0x6EDD66FCL,0xDB0B5B0AL,0x3F84961AL,0x84FA7E1AL,0x1ADADB79L,0x1ADADB79L},{0xF00CAC11L,0x3FA24402L,(-2L),0x3FA24402L,0xF00CAC11L,0x6E27F124L,1L}},{{(-1L),0x8A8285A3L,(-5L),0x84FA7E1AL,0xDB0B5B0AL,(-5L),0xACA9B4ABL},{1L,0x75395346L,(-1L),(-7L),(-1L),(-1L),(-4L)},{(-1L),0x84FA7E1AL,0L,(-1L),0xACA9B4ABL,0xBB63EC34L,0x84FA7E1AL},{0xF00CAC11L,(-2L),1L,(-1L),1L,(-2L),0xF00CAC11L},{0x1ADADB79L,0x84FA7E1AL,0x3F84961AL,0xDB0B5B0AL,0x6EDD66FCL,0x1ADADB79L,0xDB0B5B0AL},{8L,0x75395346L,0L,0x3FA24402L,1L,4L,(-1L)}},{{0x84FA7E1AL,0x8A8285A3L,0x3F84961AL,0L,0x8A8285A3L,0xDB0B5B0AL,0xACA9B4ABL},{0xF109ED88L,0x3FA24402L,1L,0x0E3C998FL,(-1L),0x0E3C998FL,1L},{0x6EDD66FCL,0x6EDD66FCL,0L,0L,0x84FA7E1AL,(-1L),0x6EDD66FCL},{0xF00CAC11L,(-1L),(-1L),0x3FA24402L,0x55605C98L,(-2L),1L},{(-5L),0xACA9B4ABL,(-5L),0xDB0B5B0AL,0x84FA7E1AL,(-5L),0x8A8285A3L},{1L,0x75395346L,(-2L),(-1L),(-1L),0x775F36B3L,(-1L)}},{{(-1L),0xDB0B5B0AL,0xDB0B5B0AL,(-1L),0x8A8285A3L,(-5L),0x84FA7E1AL},{0x55605C98L,1L,1L,(-7L),1L,(-2L),0x55605C98L},{0x6EDD66FCL,0x84FA7E1AL,0xACA9B4ABL,(-5L),0xDB0B5B0AL,0x84FA7E1AL,(-5L)},{(-1L),0x6E27F124L,(-2L),0x0E3C998FL,0L,0xB5D7044FL,0x55605C98L},{0xBB63EC34L,0x1ADADB79L,0x07844972L,0x07844972L,0x1ADADB79L,0xBB63EC34L,(-1L)},{(-1L),0x0E3C998FL,8L,(-7L),0x55605C98L,(-1L),0xF109ED88L}},{{0xDB0B5B0AL,0L,0xBB63EC34L,0x8A8285A3L,0xBB63EC34L,0L,0xDB0B5B0AL},{0x51836FE3L,0x0E3C998FL,0L,4L,1L,0x775F36B3L,0L},{0x3F84961AL,0x1ADADB79L,0L,(-5L),(-5L),0L,0x1ADADB79L},{0xF109ED88L,0x6E27F124L,0L,1L,0L,4L,0x55605C98L},{0L,(-5L),0xBB63EC34L,0L,0x1ADADB79L,0L,0xBB63EC34L},{1L,(-1L),8L,1L,0xF109ED88L,0x3FA24402L,1L}},{{0xDB0B5B0AL,0xBB63EC34L,0x07844972L,(-5L),0L,0L,(-5L)},{(-2L),(-2L),(-2L),4L,0xF109ED88L,0xB5D7044FL,0L},{(-5L),0x1ADADB79L,0xACA9B4ABL,0x8A8285A3L,0x1ADADB79L,(-1L),0x1ADADB79L},{(-1L),4L,0L,(-7L),0L,0xB5D7044FL,0xF109ED88L},{0L,0xDB0B5B0AL,0xBB63EC34L,0x07844972L,(-5L),0L,0L},{1L,0x0E3C998FL,(-1L),0x0E3C998FL,1L,0x3FA24402L,0xF109ED88L}}};
                        uint16_t l_2886 = 0x8F87L;
                        uint32_t *l_2895 = &l_2837[1][7];
                        uint32_t **l_2894 = &l_2895;
                        uint32_t ***l_2893 = &l_2894;
                        int i, j, k;
                        (*p_17) ^= ((safe_mul_func_int16_t_s_s((p_14 , ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(0L, (safe_lshift_func_uint8_t_u_u(((**g_395) = ((-10L) < 0x8DD5B0788017C887LL)), 2)))), ((safe_div_func_int8_t_s_s((l_2861 , (((((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(65535UL, (((l_2875[0][1]--) > l_2874) , (((0xF26C9690L <= (((g_2879 = l_2878) == l_2880[0]) > l_2847[1])) ^ 65532UL) >= p_14)))), g_1047.f2)) , p_14) ^ g_1175[(p_14 + 2)][g_1799][g_715]) < (***g_1145)) <= 0xA80A2B75A13B012BLL)), 7UL)) ^ 0x7A7B9AB9L))), (*l_2813))) <= 0xA07BL)), 0L)) | (*g_1147));
                        --l_2883;
                        --l_2886;
                        g_2896[5][2][3] = (((safe_rshift_func_uint16_t_u_u((l_2891 == l_2892), p_14)) | 0UL) , l_2893);
                    }
                    l_2899--;
                    l_2902 = &l_2868[0][0][3];
                }
            }
            for (g_707 = 2; (g_707 <= 6); g_707 += 1)
            {
                int16_t *l_2922 = &g_2721[4][4][0];
                int32_t l_2924 = (-1L);
                int32_t * const *l_2931 = &g_884;
                int32_t * const **l_2932[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i, j;
                (*l_2902) ^= (l_2903 == (*g_1612));
                l_2924 ^= (safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((**g_395) |= (safe_mul_func_uint16_t_u_u(g_1067[p_14][p_14], 0L))), (safe_lshift_func_uint16_t_u_u(((((g_1067[p_14][(p_14 + 4)] && (l_2861.f1 >= ((*p_17) = (safe_sub_func_int16_t_s_s(((*l_2902) = g_1067[p_14][(p_14 + 4)]), 0x0D84L))))) | (((*l_2922) |= (safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((l_2920 != (g_2921 = &p_14)) | p_14) ^ p_14), p_14)), 0))) >= p_14)) != g_1067[0][1]) , g_1067[p_14][p_14]), (**g_350))))), 5)) || l_2923), 0xAAL));
                g_2927[1] = l_2925;
                g_2933 = l_2931;
            }
        }
    }
    else
    {
        return p_14;
    }
    return g_711;
}







static uint8_t func_18(uint32_t p_19, int8_t p_20)
{
    int32_t *l_27[5][3] = {{&g_4,(void*)0,&g_4},{&g_4,&g_4,&g_4},{&g_4,(void*)0,&g_4},{&g_4,&g_4,&g_4},{&g_4,(void*)0,&g_4}};
    struct S0 l_49 = {1UL,-588,1L};
    uint32_t ****l_1914 = &g_162[4];
    uint32_t *****l_1913 = &l_1914;
    int16_t ****l_1950 = &g_363;
    uint16_t l_1951 = 65535UL;
    int32_t * const *l_1998 = (void*)0;
    int32_t * const **l_1997 = &l_1998;
    int32_t * const *** const l_1996 = &l_1997;
    int32_t l_2032 = 9L;
    uint32_t *l_2048 = &g_91[8];
    int64_t ***l_2072 = &g_757;
    int64_t ****l_2071[2][4][4] = {{{&l_2072,&l_2072,&l_2072,&l_2072},{&l_2072,&l_2072,&l_2072,&l_2072},{&l_2072,&l_2072,&l_2072,&l_2072},{&l_2072,&l_2072,&l_2072,&l_2072}},{{&l_2072,&l_2072,&l_2072,&l_2072},{&l_2072,&l_2072,&l_2072,&l_2072},{&l_2072,&l_2072,&l_2072,&l_2072},{&l_2072,&l_2072,&l_2072,&l_2072}}};
    struct S0 **l_2106[4];
    int64_t l_2119 = 0x22B4B1255724314CLL;
    int8_t l_2120[5][6][8] = {{{2L,7L,0x02L,0x7AL,1L,0x67L,9L,1L},{7L,0x13L,(-7L),0x7AL,6L,0x2BL,7L,1L},{(-1L),6L,0L,0xC2L,0x2BL,0x13L,0x7AL,7L},{(-1L),0xEEL,0xC2L,0x67L,2L,6L,2L,0x67L},{8L,0x70L,8L,0x02L,0xEEL,0x6AL,(-10L),(-1L)},{9L,(-1L),1L,8L,0x6CL,0x76L,0xEEL,0x2BL}},{{9L,0xDBL,0xD3L,(-10L),0xEEL,0x91L,0x18L,(-1L)},{8L,3L,0x7AL,0xC2L,2L,(-10L),0xB9L,0x13L},{(-1L),0x7AL,(-4L),0xD3L,0xD3L,(-4L),0x7AL,(-1L)},{(-10L),1L,2L,0x70L,(-4L),(-1L),6L,7L},{1L,0x91L,7L,0xB9L,0x70L,(-1L),8L,0L},{0xEEL,1L,(-1L),0x91L,0x13L,(-4L),(-1L),0x76L}},{{0L,0x7AL,(-1L),(-7L),0x2BL,(-10L),3L,(-10L)},{1L,3L,0L,3L,1L,0x91L,0xC2L,9L},{0xB9L,0xDBL,(-7L),0x5FL,0x6AL,0x76L,7L,3L},{0x5FL,(-1L),(-7L),0x2BL,0x91L,0x6AL,0xC2L,1L},{0x6AL,0x70L,0L,9L,8L,6L,3L,0x18L},{0x3DL,0xEEL,(-1L),(-1L),0x67L,0x67L,(-1L),(-1L)}},{{(-4L),(-4L),(-1L),0x6CL,0x18L,0x2BL,8L,0x2BL},{0xDBL,0x67L,7L,0x13L,(-7L),0x7AL,6L,0x2BL},{0x67L,0x2BL,2L,0x6CL,(-1L),0L,0x7AL,(-1L)},{0x91L,0x13L,(-4L),(-1L),0x76L,3L,0xB9L,0x18L},{0x18L,0L,0x7AL,9L,0x7AL,0L,0x18L,1L},{7L,8L,0xD3L,0x2BL,1L,(-7L),0xEEL,3L}},{{(-1L),0x6CL,1L,0x5FL,1L,0x02L,(-10L),9L},{7L,0x3DL,8L,3L,0x7AL,0xC2L,2L,(-10L)},{0x18L,(-1L),0xC2L,(-7L),0x76L,1L,0x5FL,7L},{(-1L),(-4L),(-4L),(-1L),0x6CL,0x18L,0x2BL,8L},{0x7AL,(-1L),0xDBL,(-1L),9L,(-10L),0x02L,1L},{0x02L,(-1L),0x67L,0L,7L,0x18L,7L,(-7L)}}};
    const uint64_t l_2147 = 18446744073709551615UL;
    int32_t l_2319 = 1L;
    int32_t l_2445 = 0xF2527AB3L;
    int32_t l_2452 = 0x35BD545FL;
    uint32_t l_2458 = 4294967295UL;
    int64_t l_2513[9] = {0xC6A9FD3D6E6ADAA7LL,8L,0xC6A9FD3D6E6ADAA7LL,8L,0xC6A9FD3D6E6ADAA7LL,8L,0xC6A9FD3D6E6ADAA7LL,8L,0xC6A9FD3D6E6ADAA7LL};
    uint8_t l_2560 = 1UL;
    uint32_t l_2617 = 6UL;
    const uint8_t l_2669 = 0x7AL;
    int8_t l_2703 = 0xF5L;
    int16_t l_2730 = 0x7A64L;
    uint32_t l_2766 = 1UL;
    uint8_t l_2808 = 1UL;
    const uint32_t l_2809 = 0UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2106[i] = &g_1293;
lbl_2348:
    l_27[3][2] = func_22((g_29 ^= (g_28[9] = p_20)), g_4, g_4, (p_20 , l_27[3][0]));
    for (p_20 = 17; (p_20 == 10); --p_20)
    {
        int32_t l_1202 = (-4L);
        uint64_t *l_1203 = &g_590;
        int32_t l_1908 = 0x38F987E4L;
        int16_t l_1955 = 0x16F1L;
        struct S0 l_1982 = {5UL,684,-10L};
        uint32_t * const l_2046 = (void*)0;
        uint16_t l_2051 = 0x7578L;
        uint32_t **l_2063[6][7][1] = {{{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048}},{{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048}},{{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048}},{{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048}},{{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048}},{{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048},{&l_2048}}};
        int i, j, k;
    }
lbl_2150:
    for (p_20 = 0; (p_20 < 3); p_20 = safe_add_func_int8_t_s_s(p_20, 8))
    {
        int64_t * const l_2127[7] = {&g_1994,&g_1994,&g_1994,&g_1994,&g_1994,&g_1994,&g_1994};
        int64_t * const *l_2126 = &l_2127[0];
        int64_t * const **l_2125 = &l_2126;
        int64_t * const ***l_2128 = &l_2125;
        uint64_t l_2145 = 0xD2456E01A084AC3BLL;
        int8_t *l_2146 = &g_1528;
        int32_t l_2148 = (-1L);
        int32_t l_2149 = 0xB7722FCFL;
        int i;
        l_2149 ^= ((((*l_2128) = l_2125) == ((safe_div_func_int32_t_s_s(((((*g_1612) == ((((safe_mod_func_int64_t_s_s(((((safe_lshift_func_int8_t_s_s(((*l_2146) &= (&g_757 != (((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(((((safe_add_func_int8_t_s_s(p_19, (((*g_1293) , (&g_448[5][0][7] != (void*)0)) < (**g_1728)))) <= ((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(l_2145, (*g_351))), 0xCAD831F4L)) == p_20)) >= p_19) <= p_20), l_2145)), p_19)) > (-1L)) , &g_757))), g_711)) <= l_2147) ^ l_2145) && (-6L)), l_2145)) == 0xEAL) , 0xB4A76082L) , (*g_1612))) ^ p_20) , l_2148), p_19)) , &g_757)) , p_19);
        if (p_19)
            goto lbl_2150;
    }
    if ((g_313 = p_20))
    {
        uint32_t l_2175 = 0x03EF5936L;
        int32_t *l_2177[4];
        const int64_t l_2194 = 0x8F459444F8B00C13LL;
        uint32_t l_2212 = 0xE1A6804DL;
        struct S0 l_2328 = {0xB115E53FL,316,-1L};
        int64_t l_2341 = (-7L);
        int32_t l_2343 = 0x2C3304EDL;
        uint32_t * const *l_2356 = &l_2048;
        uint32_t * const **l_2355[6][6][2] = {{{(void*)0,&l_2356},{(void*)0,&l_2356},{&l_2356,&l_2356},{(void*)0,&l_2356},{&l_2356,&l_2356},{(void*)0,&l_2356}},{{&l_2356,&l_2356},{(void*)0,&l_2356},{(void*)0,&l_2356},{&l_2356,&l_2356},{&l_2356,&l_2356},{&l_2356,(void*)0}},{{(void*)0,(void*)0},{&l_2356,&l_2356},{&l_2356,&l_2356},{(void*)0,&l_2356},{&l_2356,&l_2356},{&l_2356,&l_2356}},{{&l_2356,(void*)0},{&l_2356,&l_2356},{&l_2356,&l_2356},{&l_2356,&l_2356},{(void*)0,&l_2356},{&l_2356,&l_2356}},{{&l_2356,(void*)0},{(void*)0,(void*)0},{&l_2356,&l_2356},{&l_2356,&l_2356},{&l_2356,&l_2356},{(void*)0,&l_2356}},{{(void*)0,&l_2356},{&l_2356,&l_2356},{(void*)0,&l_2356},{&l_2356,&l_2356},{(void*)0,&l_2356},{&l_2356,&l_2356}}};
        uint32_t ***l_2357 = &g_163;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_2177[i] = &g_313;
        for (g_713 = 6; (g_713 > (-8)); g_713 = safe_sub_func_uint16_t_u_u(g_713, 6))
        {
            uint64_t l_2172 = 0UL;
            int32_t l_2180 = 0xF9E3E0EAL;
            uint16_t l_2181 = 5UL;
            struct S0 **l_2206 = &g_1293;
            int16_t *l_2230 = &g_140;
            uint32_t l_2231[7][7][5] = {{{4294967291UL,0x4C44DC16L,4294967295UL,0x74F2704FL,4294967295UL},{4UL,4294967295UL,0xB5EC4DCDL,1UL,4294967295UL},{4294967294UL,0x5BC91BC6L,5UL,0xD11BEC0CL,0x98059A9AL},{0xEED45CD1L,4294967295UL,0x5CEEA55DL,1UL,0UL},{4294967293UL,0xEC6AF245L,0x5CEEA55DL,0x74F2704FL,0x4C44DC16L},{4294967293UL,4294967295UL,5UL,0x5CEEA55DL,0xD77C37D2L},{4294967295UL,0xEC6AF245L,0xB5EC4DCDL,1UL,4294967295UL}},{{4294967291UL,4294967291UL,0x906780AAL,0x4C44DC16L,0x89279985L},{4294967295UL,0x13D059A3L,4294967295UL,0x27E7B50BL,4294967291UL},{0x0334BEDBL,0x89279985L,4294967295UL,0x27E7B50BL,0x78D8633BL},{4294967295UL,1UL,0x4C44DC16L,0x4C44DC16L,1UL},{0x2C6C5410L,0x9A88A77BL,4294967295UL,4294967295UL,0x6F4D50D6L},{0x40D193CAL,0x9A88A77BL,4294967295UL,0x5BC91BC6L,0xEF5B1AEDL},{3UL,1UL,0x906780AAL,4294967295UL,0UL}},{{0x40D193CAL,0x89279985L,0x98059A9AL,0xEC6AF245L,0UL},{0x2C6C5410L,0x13D059A3L,0UL,4294967295UL,0xEF5B1AEDL},{4294967295UL,4294967291UL,0x5BC91BC6L,0xEC6AF245L,0x6F4D50D6L},{0x0334BEDBL,0x8255093FL,0x5BC91BC6L,4294967295UL,1UL},{4294967295UL,0UL,0UL,0x5BC91BC6L,0x78D8633BL},{4294967291UL,0x8255093FL,0x98059A9AL,4294967295UL,4294967291UL},{4294967291UL,4294967291UL,0x906780AAL,0x4C44DC16L,0x89279985L}},{{4294967295UL,0x13D059A3L,4294967295UL,0x27E7B50BL,4294967291UL},{0x0334BEDBL,0x89279985L,4294967295UL,0x27E7B50BL,0x78D8633BL},{4294967295UL,1UL,0x4C44DC16L,0x4C44DC16L,1UL},{0x2C6C5410L,0x9A88A77BL,4294967295UL,4294967295UL,0x6F4D50D6L},{0x40D193CAL,0x9A88A77BL,4294967295UL,0x5BC91BC6L,0xEF5B1AEDL},{3UL,1UL,0x906780AAL,4294967295UL,0UL},{0x40D193CAL,0x89279985L,0x98059A9AL,0xEC6AF245L,0UL}},{{0x2C6C5410L,0x13D059A3L,0UL,4294967295UL,0xEF5B1AEDL},{4294967295UL,4294967291UL,0x5BC91BC6L,0xEC6AF245L,0x6F4D50D6L},{0x0334BEDBL,0x8255093FL,0x5BC91BC6L,4294967295UL,1UL},{4294967295UL,0UL,0UL,0x5BC91BC6L,0x78D8633BL},{4294967291UL,0x8255093FL,0x98059A9AL,4294967295UL,4294967291UL},{4294967291UL,4294967291UL,0x906780AAL,0x4C44DC16L,0x89279985L},{4294967295UL,0x13D059A3L,4294967295UL,0x27E7B50BL,4294967291UL}},{{0x0334BEDBL,0x89279985L,4294967295UL,0x27E7B50BL,0x78D8633BL},{4294967295UL,1UL,0x4C44DC16L,0x4C44DC16L,1UL},{0x2C6C5410L,0x9A88A77BL,4294967295UL,4294967295UL,0x6F4D50D6L},{0x40D193CAL,0x9A88A77BL,4294967295UL,0x5BC91BC6L,0xEF5B1AEDL},{3UL,1UL,0x906780AAL,4294967295UL,0UL},{0x40D193CAL,0x89279985L,0x98059A9AL,0xEC6AF245L,0UL},{0x2C6C5410L,0x13D059A3L,0UL,4294967295UL,0xEF5B1AEDL}},{{4294967295UL,4294967291UL,0x5BC91BC6L,0xEC6AF245L,0x6F4D50D6L},{0x0334BEDBL,0x8255093FL,0x5BC91BC6L,4294967295UL,1UL},{4294967295UL,0UL,0UL,0x5BC91BC6L,0x78D8633BL},{4294967291UL,0UL,0xEF5B1AEDL,0x89279985L,4UL},{7UL,4UL,0xEBEF1F5AL,1UL,4294967291UL},{4294967295UL,4294967294UL,0x89279985L,0x9A88A77BL,4UL},{1UL,4294967291UL,0UL,0x9A88A77BL,4294967294UL}}};
            int8_t *l_2232 = &g_2060;
            int64_t *****l_2243 = (void*)0;
            uint16_t l_2268[6] = {0x7D83L,0x7D83L,0x7D83L,0x7D83L,0x7D83L,0x7D83L};
            uint32_t l_2289 = 0x17BE9FB1L;
            uint16_t l_2307 = 0x4764L;
            uint32_t ****l_2334 = &g_162[4];
            int32_t l_2344 = 0x5823B322L;
            int32_t l_2367 = 0x8CF327FFL;
            int32_t l_2369 = 1L;
            int32_t l_2372 = 0L;
            int32_t l_2374 = 0x620E0A40L;
            int32_t l_2377[4][9][4] = {{{0x7BC55C71L,0x7BC55C71L,0x0BA1924AL,0x15DF2204L},{0x15DF2204L,(-4L),0x0BA1924AL,(-4L)},{0x7BC55C71L,0x484DF502L,0x9FA11705L,0x0BA1924AL},{(-4L),0x484DF502L,0x484DF502L,(-4L)},{0x484DF502L,(-4L),0x7BC55C71L,0x15DF2204L},{0x484DF502L,0x7BC55C71L,0x484DF502L,0x9FA11705L},{(-4L),0x15DF2204L,0x9FA11705L,0x9FA11705L},{0x7BC55C71L,0x7BC55C71L,0x0BA1924AL,0x15DF2204L},{0x15DF2204L,(-4L),0x0BA1924AL,(-4L)}},{{0x7BC55C71L,0x484DF502L,0x9FA11705L,0x0BA1924AL},{(-4L),0x484DF502L,0x484DF502L,(-4L)},{0x484DF502L,(-4L),0x7BC55C71L,0x15DF2204L},{0x484DF502L,0x7BC55C71L,0x484DF502L,0x9FA11705L},{(-4L),0x15DF2204L,0x9FA11705L,0x9FA11705L},{0x7BC55C71L,0x7BC55C71L,0x0BA1924AL,0x15DF2204L},{0x15DF2204L,(-4L),0x0BA1924AL,(-4L)},{0x7BC55C71L,0x484DF502L,0x9FA11705L,0x0BA1924AL},{(-4L),0x484DF502L,0x484DF502L,(-4L)}},{{0x484DF502L,(-4L),0x7BC55C71L,0x15DF2204L},{0x484DF502L,0x7BC55C71L,0x484DF502L,0x9FA11705L},{(-4L),0x15DF2204L,0x9FA11705L,0x9FA11705L},{0x7BC55C71L,0x7BC55C71L,0x0BA1924AL,0x15DF2204L},{0x15DF2204L,(-4L),0x0BA1924AL,(-4L)},{0x7BC55C71L,0x484DF502L,0x9FA11705L,0x0BA1924AL},{(-4L),0x484DF502L,0x484DF502L,(-4L)},{0x484DF502L,(-4L),0x7BC55C71L,0x15DF2204L},{0x484DF502L,0x7BC55C71L,0x484DF502L,0x9FA11705L}},{{(-4L),0x15DF2204L,0x9FA11705L,0x9FA11705L},{0x7BC55C71L,0x7BC55C71L,0x0BA1924AL,0x15DF2204L},{0x15DF2204L,(-4L),0x0BA1924AL,(-4L)},{0x7BC55C71L,0x484DF502L,0x9FA11705L,0x0BA1924AL},{(-4L),0x484DF502L,0x484DF502L,(-4L)},{0x484DF502L,(-4L),0x7BC55C71L,0x15DF2204L},{0x484DF502L,0x7BC55C71L,0x484DF502L,0x9FA11705L},{(-4L),0x15DF2204L,0x9FA11705L,0x9FA11705L},{0x7BC55C71L,0x7BC55C71L,0x0BA1924AL,0x15DF2204L}}};
            int i, j, k;
            for (g_229 = 0; (g_229 <= 1); g_229 += 1)
            {
                int16_t l_2164 = 8L;
                uint32_t *l_2188[9][2] = {{&g_145,&g_28[6]},{&g_120[3][0],&g_28[9]},{&g_28[9],&g_120[3][0]},{&g_28[6],&g_145},{&g_28[6],&g_120[3][0]},{&g_28[9],&g_28[9]},{&g_120[3][0],&g_28[6]},{&g_145,&g_28[6]},{&g_120[3][0],&g_28[9]}};
                uint32_t * const *l_2187 = &l_2188[3][0];
                int32_t l_2195 = 0x27293B31L;
                uint16_t l_2196 = 65527UL;
                int32_t l_2211 = (-1L);
                int i, j;
                for (g_704 = 0; (g_704 <= 1); g_704 += 1)
                {
                    int32_t **l_2197 = &l_27[3][2];
                    int i, j, k;
                    if ((((*l_2048) = ((safe_mod_func_uint64_t_u_u(((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_1175[(g_704 + 3)][g_704][g_704], (((***g_1727) < (safe_rshift_func_uint8_t_u_u(((*g_396) |= ((g_2163 = &p_20) != (g_1314 , &g_717))), l_2164))) > (~(safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(0x7F6881789FC1FB9FLL, (safe_div_func_uint32_t_u_u((((l_2172 | (((safe_div_func_uint64_t_u_u((**g_1146), 0x3ECDD80EA489673FLL)) != 0xBE82D97C1B9F21E1LL) & l_2175)) > p_19) | (***g_1727)), p_20)))), 1L)))))), l_2172)), p_19)) || l_2175), p_20)) & l_2175)) , 1L))
                    {
                        int32_t **l_2176 = (void*)0;
                        int32_t **l_2178 = &l_27[2][0];
                        uint32_t l_2179 = 0xD6A5818EL;
                        (*l_2178) = (l_2177[1] = func_59(l_2172, p_19, (**g_1146)));
                        l_2180 |= l_2179;
                    }
                    else
                    {
                        if (p_19)
                            break;
                    }
                    if (l_2181)
                        continue;
                    (*l_2197) = func_22((((!l_2172) && p_19) | ((((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((*g_2163), (((void*)0 != l_2187) , p_20))), 18446744073709551615UL)) <= ((**g_395) = ((g_1175[(g_704 + 1)][g_229][g_704] = ((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((l_2195 = (((g_2193 , (0x88C701F94BDA40AFLL == p_20)) || p_20) != l_2194)) != p_20), l_2164)), l_2196)) > 0L)) & l_2164))) | 0xA0L) , (-1L))), p_19, p_20, &g_4);
                }
                for (l_2164 = (-21); (l_2164 > (-30)); l_2164--)
                {
                    uint32_t l_2200 = 0xCCF14610L;
                    struct S0 ***l_2207 = (void*)0;
                    struct S0 ***l_2208 = &l_2106[0];
                    l_2200++;
                    l_2212 &= ((l_2195 >= (l_2211 = (((**g_1728) , ((((safe_add_func_uint32_t_u_u(((((safe_unary_minus_func_uint16_t_u((g_1294.f2 , 0xDA20L))) <= ((l_2206 != ((*l_2208) = l_2106[2])) | p_20)) && (((safe_mod_func_uint32_t_u_u(((((((l_2164 && p_19) | l_2180) ^ p_19) , p_19) || l_2196) ^ p_20), 1UL)) >= l_2196) , 65535UL)) || p_19), p_20)) == p_19) , (**g_1728)) <= p_20)) != 0UL))) ^ (**g_1728));
                }
            }
            if (g_718[0][3])
                break;
            if (((((((safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((0x0F4FL >= p_20), 0UL)), ((safe_sub_func_int8_t_s_s(((*l_2232) = ((((safe_div_func_int8_t_s_s(l_2180, p_20)) | ((((safe_mod_func_int64_t_s_s(0x865D231C84C7DE8BLL, (safe_div_func_int16_t_s_s((((g_117[1] = (((safe_add_func_int16_t_s_s(((+l_2180) , ((*l_2230) |= (g_1067[2][6] || p_19))), p_20)) || (-1L)) != (*g_351))) <= g_110) >= p_20), l_2180)))) | p_19) | p_20) != 0x0D9BA82BL)) < l_2231[5][2][1]) <= 0x4D72C246L)), p_19)) != l_2181))) <= (*g_1147)), 0L)) || p_19) < 0x831CL) , (void*)0) == &g_1293) < l_2231[3][1][0]))
            {
                uint32_t l_2238 = 0x63B20365L;
                int64_t l_2299 = 4L;
                uint16_t l_2300 = 1UL;
                int32_t l_2320 = 1L;
                for (p_19 = 0; (p_19 == 31); p_19 = safe_add_func_uint32_t_u_u(p_19, 5))
                {
                    uint16_t *l_2250 = &g_118;
                    int32_t l_2270 = (-1L);
                    struct S0 ***l_2294 = &l_2206;
                    for (l_2181 = (-26); (l_2181 <= 23); ++l_2181)
                    {
                        int32_t **l_2239 = &l_27[0][0];
                        l_2180 = (l_2238 ^= (p_20 , (~(-3L))));
                        (*l_2239) = (void*)0;
                        if (p_20)
                            break;
                    }
                    (*g_1612) = ((p_19 && ((g_2240 == l_2243) | ((***g_1145) |= ((9L != ((*l_2048) = 0xCC1DB8C0L)) && p_20)))) , (*g_1612));
                    for (g_2060 = 22; (g_2060 <= (-27)); g_2060--)
                    {
                        int8_t *l_2267 = &g_1102;
                        int32_t l_2269 = 0x2E9A0E6AL;
                        int8_t *l_2297 = &g_1047.f2;
                        uint64_t *l_2298[3][1];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_2298[i][j] = (void*)0;
                        }
                        g_144 |= (safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s((((l_2250 != (*g_350)) && p_19) | ((safe_mul_func_uint8_t_u_u(0x0CL, (safe_lshift_func_int16_t_s_u(((((((((*l_2048)++) && 3L) == (safe_lshift_func_int16_t_s_s(0xD468L, (((safe_mod_func_uint8_t_u_u((p_20 == (safe_mod_func_int8_t_s_s(((*l_2267) |= ((safe_div_func_uint8_t_u_u(((p_19 != ((safe_lshift_func_uint16_t_u_s(p_19, p_20)) < 0xC7CD7304L)) & l_2238), 0x0AL)) , 0xBFL)), 2L))), p_20)) < p_19) & l_2268[4])))) || p_20) >= l_2269) != 0x4E80L) , p_19), 9)))) , 0x21B2497BAEE17564LL)), p_19)), 0x77F2BD84L));
                        if (l_2270)
                            continue;
                        g_448[5][0][7].f1 ^= (l_2270 , ((safe_sub_func_int64_t_s_s((((*g_396) = ((safe_rshift_func_int16_t_s_u((((safe_div_func_uint8_t_u_u(((l_2299 = (safe_div_func_uint8_t_u_u(((((((*l_2297) |= (safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((((***g_1727) &= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((l_2172 != ((safe_mul_func_int8_t_s_s(((*l_2267) = (&l_2269 != &l_2269)), (-5L))) | l_2289)), 0)), (((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((((void*)0 == l_2294) | (--(*l_2048))) ^ ((((*g_1293) , l_2238) <= 0x34CAA8E55A44198DLL) | 0xF8L)), (*g_396))), p_20)) , 0x50FAEB382E580997LL) , (-4L))))) >= 0x4257392715EE56E3LL) , l_2270), p_20)), 0x7B47E0FAL))) | l_2238) > 0x0BC23CEA2FF3E141LL) != l_2270) | (**g_350)), l_2270))) & l_2238), p_20)) || l_2181) == 3L), l_2269)) != l_2300)) | 255UL), p_19)) , p_20));
                        l_2320 = (((safe_lshift_func_uint16_t_u_s((**g_350), 6)) > ((safe_mod_func_uint8_t_u_u(0x52L, ((p_19 || ((safe_mod_func_int64_t_s_s(l_2307, l_2289)) == ((*l_2297) = (((~((void*)0 == &g_1612)) , (p_20 && (safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_div_func_uint64_t_u_u(((***g_1145) = ((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_20, p_20)), l_2307)) & p_19)), p_20)), p_19)) | l_2269), l_2319)))) >= l_2300)))) , g_652[0][1]))) ^ 4294967293UL)) > l_2300);
                    }
                }
            }
            else
            {
                uint16_t l_2329 = 65528UL;
                int32_t l_2335 = 1L;
                int32_t l_2340 = 0x3C5CEC10L;
                uint32_t ****l_2366 = (void*)0;
                int32_t l_2373 = 0L;
                int32_t l_2376 = 0xF75D212FL;
                int32_t l_2378 = 0x9094550CL;
                int32_t l_2379[7][2] = {{0x1A909BF4L,(-2L)},{(-1L),4L},{(-2L),0x1045187FL},{0x742AFDE7L,0x742AFDE7L},{0x1045187FL,(-2L)},{4L,(-2L)},{0x1045187FL,0x742AFDE7L}};
                int i, j;
                l_2180 = (safe_mul_func_uint16_t_u_u((~((g_448[5][0][7].f1 , (p_20 , ((((safe_mod_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u(((***g_1727) &= ((l_2328 , (l_2329 & ((safe_add_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((l_2335 = (l_2334 == (void*)0)), p_20)) && (safe_div_func_int8_t_s_s((l_2231[5][2][1] >= (safe_div_func_int64_t_s_s((4294967286UL != p_19), l_2180))), (**g_395)))), l_2340)) , 0UL))) != p_19)), 0xA32FBB2F22DDF81CLL)) , p_20) , 0xB0L), p_19)) == p_19) < l_2341) | (*g_351)))) || 0x42CB0EA5CD88FCBDLL)), (**g_350)));
                g_714 &= 0xE84F5495L;
                for (l_2329 = 0; (l_2329 <= 3); l_2329 += 1)
                {
                    uint8_t l_2345[2];
                    uint64_t ***l_2358 = &g_1728;
                    int32_t l_2371 = 3L;
                    int32_t l_2375[5];
                    uint64_t l_2390 = 18446744073709551613UL;
                    int8_t l_2405 = 0xBCL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2345[i] = 1UL;
                    for (i = 0; i < 5; i++)
                        l_2375[i] = (-1L);
                    for (g_590 = 0; (g_590 <= 3); g_590 += 1)
                    {
                        int32_t l_2342 = 0x496F1377L;
                        int i;
                        l_2345[0]--;
                        if (g_4)
                            goto lbl_2348;
                    }
                    for (l_2175 = 0; (l_2175 <= 3); l_2175 += 1)
                    {
                        uint64_t ****l_2359 = (void*)0;
                        uint64_t ****l_2360 = &g_1727;
                        struct S0 l_2363 = {0UL,-29,-4L};
                        int i, j;
                        g_1340 = (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(((l_2355[2][5][0] != ((*l_1914) = l_2357)) == g_652[(l_2329 + 3)][l_2175]), 1)), 2)) == (l_2340 , (((*l_2360) = l_2358) == (((((**g_350) || (safe_sub_func_int32_t_s_s((-1L), (l_2363 , ((safe_div_func_uint16_t_u_u(l_2363.f0, p_19)) || p_19))))) , (*l_1913)) == l_2366) , &g_1146)))), g_652[(l_2329 + 3)][l_2175]));
                    }
                    for (g_118 = 0; (g_118 <= 3); g_118 += 1)
                    {
                        int64_t l_2368 = 1L;
                        int32_t l_2370 = 0xD2B40C0EL;
                        int32_t l_2380[8][8] = {{(-7L),1L,0x61388AF4L,1L,0L,0x661823C7L,0x4697688CL,(-1L)},{(-1L),0L,0x61388AF4L,0x4697688CL,0L,7L,1L,0xE05FA8EDL},{0L,1L,0x661823C7L,0x3A35CC15L,3L,(-7L),(-7L),3L},{0x3EB71E6FL,(-1L),(-1L),0x3EB71E6FL,0xE05FA8EDL,1L,7L,0L},{0L,0x4ABBFA7FL,0xE05FA8EDL,1L,(-1L),0x4697688CL,0x661823C7L,0L},{(-7L),0x4ABBFA7FL,0L,0x53C8310DL,0x3A35CC15L,1L,3L,(-1L)},{0x437238D2L,(-1L),(-1L),0x9921E08CL,1L,(-7L),1L,0x9921E08CL},{3L,1L,3L,(-7L),(-7L),7L,0x4ABBFA7FL,0x437238D2L}};
                        uint32_t l_2381 = 0x033530B6L;
                        int32_t l_2403 = 0L;
                        int32_t l_2404[6][6] = {{3L,0xE83AC69CL,0x0EA62709L,3L,0x0EA62709L,0xE83AC69CL},{0x12C240C7L,0xE83AC69CL,0L,0x12C240C7L,0x0EA62709L,0x0EA62709L},{(-3L),0xE83AC69CL,0xE83AC69CL,(-3L),0x0EA62709L,0L},{3L,0xE83AC69CL,0x0EA62709L,3L,0x0EA62709L,0xE83AC69CL},{0x12C240C7L,0xE83AC69CL,0L,0x12C240C7L,0x0EA62709L,0x0EA62709L},{(-3L),0xE83AC69CL,0xE83AC69CL,(-3L),0x0EA62709L,0L}};
                        int32_t **l_2406 = &l_2177[1];
                        int i, j;
                        --l_2381;
                        l_2404[3][2] ^= (l_2403 &= ((((((***g_1145) , l_2371) && (p_19 >= ((safe_lshift_func_int8_t_s_u(((!((((!(safe_add_func_int32_t_s_s((l_2390 &= p_20), (l_2335 = ((*l_2048) ^= (((((l_2379[3][0] = ((-7L) == (safe_sub_func_int32_t_s_s(1L, (safe_mod_func_int64_t_s_s((((safe_mod_func_int32_t_s_s((l_2374 = (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((0x32B217F77E456C0ALL != p_20), 4UL)) < l_2340) , l_2381), l_2370)), l_2368))), p_20)) , p_20) , (-1L)), l_2380[6][2])))))) & p_20) < 0x0EDFA59AL) ^ p_19) == (-1L))))))) > 2L) || 0xA1L) , p_19)) , p_19), l_2268[0])) <= (*g_396)))) > l_2380[6][2]) , g_590) , 0x3BC1D7A0L));
                        l_2405 = (-1L);
                        (*l_2406) = &g_718[0][5];
                    }
                }
                g_313 |= p_20;
            }
        }
        for (p_20 = (-20); (p_20 < 3); p_20 = safe_add_func_uint16_t_u_u(p_20, 1))
        {
            if (p_20)
                break;
            if (p_19)
                break;
        }
    }
    else
    {
        int32_t l_2415[7] = {(-5L),0x40AC22FBL,0x40AC22FBL,(-5L),0x40AC22FBL,0x40AC22FBL,(-5L)};
        int16_t l_2422 = 5L;
        const uint16_t l_2423 = 0xB54FL;
        uint32_t l_2461 = 4294967289UL;
        uint8_t l_2473 = 0UL;
        uint16_t *l_2488 = &g_118;
        uint32_t *****l_2526 = &l_1914;
        uint64_t **l_2529 = &g_1147;
        int32_t ***l_2532 = (void*)0;
        uint8_t l_2538 = 247UL;
        int16_t **l_2541 = (void*)0;
        struct S0 l_2629[2][1][8] = {{{{4294967288UL,-290,-1L},{0xD0EB0569L,-155,-1L},{4294967288UL,-290,-1L},{0xD0EB0569L,-155,-1L},{4294967288UL,-290,-1L},{0xD0EB0569L,-155,-1L},{4294967288UL,-290,-1L},{0xD0EB0569L,-155,-1L}}},{{{4294967288UL,-290,-1L},{0xD0EB0569L,-155,-1L},{4294967288UL,-290,-1L},{0xD0EB0569L,-155,-1L},{4294967288UL,-290,-1L},{0xD0EB0569L,-155,-1L},{4294967288UL,-290,-1L},{0xD0EB0569L,-155,-1L}}}};
        struct S0 ***l_2650 = &l_2106[2];
        uint16_t ***l_2733 = &g_350;
        uint64_t ****l_2783 = &g_1727;
        int8_t *l_2784[3][1];
        int8_t *l_2785 = &g_1528;
        int32_t **l_2786 = &g_84;
        int16_t *l_2807 = &g_704;
        int32_t l_2810 = (-4L);
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_2784[i][j] = &l_2120[1][3][4];
        }
    }
    return p_20;
}







static int32_t * const func_22(int32_t p_23, int16_t p_24, const int32_t p_25, int32_t * p_26)
{
    uint64_t l_30 = 18446744073709551615UL;
    int32_t *l_31 = &g_32;
    (*l_31) ^= l_30;
    for (p_23 = (-28); (p_23 != (-24)); p_23 = safe_add_func_int16_t_s_s(p_23, 4))
    {
        (*l_31) = g_28[6];
    }
    return l_31;
}







static int8_t func_43(int32_t * p_44, struct S0 p_45, uint16_t p_46, uint64_t p_47, uint8_t p_48)
{
    int64_t l_1215 = 0xF9D2CDF97D2F1298LL;
    int32_t l_1216 = 1L;
    int32_t l_1217 = 0x3F53A45DL;
    int32_t l_1218 = 0L;
    int32_t l_1219[1];
    int32_t l_1223 = 0x9066A18DL;
    int16_t *** const *l_1241[3][5][10] = {{{&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,(void*)0,&g_363},{&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363},{&g_363,&g_363,&g_363,&g_363,&g_363,(void*)0,&g_363,&g_363,&g_363,&g_363},{&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363},{(void*)0,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,(void*)0,&g_363,&g_363}},{{&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363},{&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363},{&g_363,&g_363,&g_363,(void*)0,&g_363,(void*)0,&g_363,&g_363,&g_363,&g_363},{&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363},{&g_363,&g_363,(void*)0,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363}},{{&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363},{&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363,&g_363},{&g_363,&g_363,&g_363,(void*)0,&g_363,&g_363,(void*)0,&g_363,&g_363,&g_363},{&g_363,&g_363,&g_363,&g_363,(void*)0,&g_363,&g_363,&g_363,&g_363,&g_363},{&g_363,&g_363,&g_363,&g_363,(void*)0,(void*)0,&g_363,&g_363,&g_363,&g_363}}};
    uint16_t l_1413[10] = {65531UL,65531UL,0UL,65531UL,65531UL,0UL,65531UL,65531UL,0UL,65531UL};
    int32_t l_1461 = 0L;
    const uint8_t l_1511 = 0xF1L;
    int16_t l_1523 = 0xFC96L;
    uint32_t l_1544 = 0xA0F9ACC0L;
    uint64_t ** const l_1580 = &g_1147;
    int64_t *l_1611 = &g_228;
    int64_t **l_1610 = &l_1611;
    int32_t **l_1634 = (void*)0;
    int32_t l_1640 = 0x84C9AE9EL;
    const struct S0 *l_1656 = (void*)0;
    const struct S0 **l_1655 = &l_1656;
    uint16_t **l_1676[8] = {&g_351,&g_351,&g_351,&g_351,&g_351,&g_351,&g_351,&g_351};
    uint32_t l_1687[4][5];
    struct S0 l_1693 = {4294967295UL,96,-10L};
    uint32_t *l_1701 = (void*)0;
    uint32_t **l_1700 = &l_1701;
    const uint32_t * const *l_1702 = &g_1038;
    const uint32_t * const **l_1703 = &l_1702;
    uint8_t l_1733 = 0x13L;
    int32_t l_1785 = 4L;
    uint32_t l_1872 = 0x4FC97D0CL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1219[i] = 0x7DC08996L;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_1687[i][j] = 18446744073709551615UL;
    }
    for (g_715 = 0; (g_715 <= 3); g_715 += 1)
    {
        int32_t *l_1204 = &g_32;
        int32_t *l_1205 = &g_32;
        int32_t *l_1206 = &g_144;
        int32_t *l_1207 = &g_32;
        int32_t *l_1208 = &g_714;
        int32_t *l_1209 = &g_144;
        int32_t *l_1210 = &g_144;
        int32_t *l_1211 = &g_718[0][5];
        int32_t *l_1212 = (void*)0;
        int32_t *l_1213 = &g_718[0][5];
        int32_t *l_1214[7][4] = {{&g_32,&g_32,&g_32,&g_32},{&g_32,&g_718[0][5],&g_718[0][5],&g_32},{&g_718[0][5],&g_32,&g_718[0][5],&g_718[0][5]},{&g_32,&g_32,&g_32,&g_32},{&g_32,&g_718[0][5],&g_718[0][5],&g_32},{&g_718[0][5],&g_32,&g_718[0][5],&g_718[0][5]},{&g_32,&g_32,&g_32,&g_32}};
        int16_t l_1220 = (-9L);
        int8_t l_1221 = 9L;
        int32_t l_1222 = 0L;
        uint8_t l_1224 = 0UL;
        uint8_t l_1229 = 0x9FL;
        int64_t *l_1250 = &g_228;
        uint32_t *l_1264 = &g_120[0][0];
        const uint64_t l_1271 = 18446744073709551615UL;
        uint16_t **l_1286 = (void*)0;
        struct S0 l_1322 = {4294967295UL,386,0xE9L};
        uint32_t ****l_1337[10] = {&g_162[3],(void*)0,(void*)0,&g_162[3],(void*)0,(void*)0,&g_162[3],(void*)0,(void*)0,&g_162[3]};
        uint32_t *****l_1336 = &l_1337[2];
        const int32_t l_1389[4][5][10] = {{{0L,0xEA1663F0L,0L,(-1L),(-1L),0L,(-1L),(-1L),(-1L),0L},{(-1L),0xEA1663F0L,1L,0xEA1663F0L,(-1L),(-5L),0xEA1663F0L,(-1L),1L,(-1L)},{(-1L),(-1L),0L,0xEA1663F0L,0L,0L,0xEA1663F0L,0L,(-1L),(-1L)},{0L,0xEA1663F0L,0L,(-1L),(-1L),0L,(-1L),(-1L),(-1L),0L},{(-1L),0xEA1663F0L,(-1L),0x32B7EB77L,(-1L),0xEA1663F0L,0x32B7EB77L,0x000D4C66L,0L,(-1L)}},{{(-1L),0xCF08D443L,4L,0x32B7EB77L,1L,1L,0x32B7EB77L,4L,0xCF08D443L,(-1L)},{1L,0x32B7EB77L,4L,0xCF08D443L,(-1L),1L,0xCF08D443L,0x000D4C66L,0xCF08D443L,1L},{(-1L),0x32B7EB77L,(-1L),0x32B7EB77L,(-1L),0xEA1663F0L,0x32B7EB77L,0x000D4C66L,0L,(-1L)},{(-1L),0xCF08D443L,4L,0x32B7EB77L,1L,1L,0x32B7EB77L,4L,0xCF08D443L,(-1L)},{1L,0x32B7EB77L,4L,0xCF08D443L,(-1L),1L,0xCF08D443L,0x000D4C66L,0xCF08D443L,1L}},{{(-1L),0x32B7EB77L,(-1L),0x32B7EB77L,(-1L),0xEA1663F0L,0x32B7EB77L,0x000D4C66L,0L,(-1L)},{(-1L),0xCF08D443L,4L,0x32B7EB77L,1L,1L,0x32B7EB77L,4L,0xCF08D443L,(-1L)},{1L,0x32B7EB77L,4L,0xCF08D443L,(-1L),1L,0xCF08D443L,0x000D4C66L,0xCF08D443L,1L},{(-1L),0x32B7EB77L,(-1L),0x32B7EB77L,(-1L),0xEA1663F0L,0x32B7EB77L,0x000D4C66L,0L,(-1L)},{(-1L),0xCF08D443L,4L,0x32B7EB77L,1L,1L,0x32B7EB77L,4L,0xCF08D443L,(-1L)}},{{1L,0x32B7EB77L,4L,0xCF08D443L,(-1L),1L,0xCF08D443L,0x000D4C66L,0xCF08D443L,1L},{(-1L),0x32B7EB77L,(-1L),0x32B7EB77L,(-1L),0xEA1663F0L,0x32B7EB77L,0x000D4C66L,0L,(-1L)},{(-1L),0xCF08D443L,4L,0x32B7EB77L,1L,1L,0x32B7EB77L,4L,0xCF08D443L,(-1L)},{1L,0x32B7EB77L,4L,0xCF08D443L,(-1L),1L,0xCF08D443L,0x000D4C66L,0xCF08D443L,1L},{(-1L),0x32B7EB77L,(-1L),0x32B7EB77L,(-1L),0xEA1663F0L,0x32B7EB77L,0x000D4C66L,0L,(-1L)}}};
        uint8_t l_1414 = 0x96L;
        int32_t **l_1436 = &g_884;
        const int64_t l_1508[9][2][10] = {{{0L,(-1L),5L,0x1D554FD6FF95F461LL,0x4DA8A5A07A0C64CDLL,1L,(-1L),0x4D4DEA6A5EDD1374LL,0x640401401EFC41A5LL,1L},{0x4DA8A5A07A0C64CDLL,0x1D554FD6FF95F461LL,5L,(-1L),0L,1L,0x640401401EFC41A5LL,(-1L),0x640401401EFC41A5LL,1L}},{{0L,0x1D554FD6FF95F461LL,0x7A508F18E568FFA3LL,0x1D554FD6FF95F461LL,0L,1L,(-1L),(-1L),0x2D681782A25607B8LL,1L},{0L,(-1L),(-1L),(-4L),0x2D681782A25607B8LL,0x489DFAC00A03ACBFLL,(-1L),0x575D73EAB5A462E3LL,(-9L),(-1L)}},{{0x2D681782A25607B8LL,(-4L),(-1L),1L,0x640401401EFC41A5LL,0x489DFAC00A03ACBFLL,(-9L),0xD4A58C646910C2D8LL,(-9L),0x489DFAC00A03ACBFLL},{0x640401401EFC41A5LL,(-4L),1L,(-4L),0x640401401EFC41A5LL,0x1D554FD6FF95F461LL,(-1L),0xD4A58C646910C2D8LL,0xDA4D2863ED673250LL,(-1L)}},{{0x640401401EFC41A5LL,1L,(-1L),(-4L),0x2D681782A25607B8LL,0x489DFAC00A03ACBFLL,(-1L),0x575D73EAB5A462E3LL,(-9L),(-1L)},{0x2D681782A25607B8LL,(-4L),(-1L),1L,0x640401401EFC41A5LL,0x489DFAC00A03ACBFLL,(-9L),0xD4A58C646910C2D8LL,(-9L),0x489DFAC00A03ACBFLL}},{{0x640401401EFC41A5LL,(-4L),1L,(-4L),0x640401401EFC41A5LL,0x1D554FD6FF95F461LL,(-1L),0xD4A58C646910C2D8LL,0xDA4D2863ED673250LL,(-1L)},{0x640401401EFC41A5LL,1L,(-1L),(-4L),0x2D681782A25607B8LL,0x489DFAC00A03ACBFLL,(-1L),0x575D73EAB5A462E3LL,(-9L),(-1L)}},{{0x2D681782A25607B8LL,(-4L),(-1L),1L,0x640401401EFC41A5LL,0x489DFAC00A03ACBFLL,(-9L),0xD4A58C646910C2D8LL,(-9L),0x489DFAC00A03ACBFLL},{0x640401401EFC41A5LL,(-4L),1L,(-4L),0x640401401EFC41A5LL,0x1D554FD6FF95F461LL,(-1L),0xD4A58C646910C2D8LL,0xDA4D2863ED673250LL,(-1L)}},{{0x640401401EFC41A5LL,1L,(-1L),(-4L),0x2D681782A25607B8LL,0x489DFAC00A03ACBFLL,(-1L),0x575D73EAB5A462E3LL,(-9L),(-1L)},{0x2D681782A25607B8LL,(-4L),(-1L),1L,0x640401401EFC41A5LL,0x489DFAC00A03ACBFLL,(-9L),0xD4A58C646910C2D8LL,(-9L),0x489DFAC00A03ACBFLL}},{{0x640401401EFC41A5LL,(-4L),1L,(-4L),0x640401401EFC41A5LL,0x1D554FD6FF95F461LL,(-1L),0xD4A58C646910C2D8LL,0xDA4D2863ED673250LL,(-1L)},{0x640401401EFC41A5LL,1L,(-1L),(-4L),0x2D681782A25607B8LL,0x489DFAC00A03ACBFLL,(-1L),0x575D73EAB5A462E3LL,(-9L),(-1L)}},{{0x2D681782A25607B8LL,(-4L),(-1L),1L,0x640401401EFC41A5LL,0x489DFAC00A03ACBFLL,(-9L),0xD4A58C646910C2D8LL,(-9L),0x489DFAC00A03ACBFLL},{0x640401401EFC41A5LL,(-4L),1L,(-4L),0x640401401EFC41A5LL,0x1D554FD6FF95F461LL,(-1L),0xD4A58C646910C2D8LL,0xDA4D2863ED673250LL,(-1L)}}};
        int8_t l_1525 = 0xD0L;
        uint8_t l_1574 = 1UL;
        int i, j, k;
        for (p_46 = 0; (p_46 <= 3); p_46 += 1)
        {
            int i, j;
            return g_652[(p_46 + 1)][p_46];
        }
        ++l_1224;
        for (g_624 = 0; (g_624 <= 0); g_624 += 1)
        {
            uint32_t *l_1227[7];
            int32_t l_1228 = (-8L);
            int16_t ***l_1249 = (void*)0;
            int32_t l_1416 = 0L;
            int32_t **l_1435 = &g_884;
            int64_t *l_1454 = (void*)0;
            uint16_t l_1458 = 65535UL;
            uint8_t l_1509[5] = {0x9FL,0x9FL,0x9FL,0x9FL,0x9FL};
            int32_t l_1512 = 0L;
            int32_t l_1514 = 0xC4137914L;
            int32_t l_1515 = 0xAC4E71B2L;
            int32_t l_1516 = 1L;
            int32_t l_1517 = 0x27DC819DL;
            int32_t l_1518 = 0L;
            int32_t l_1519 = 0x0DF8FE52L;
            int32_t l_1520 = 1L;
            int32_t l_1521 = 0xC52E2462L;
            int32_t l_1522[4][8][3] = {{{(-1L),1L,0x76303B67L},{(-8L),0x3375C728L,0x4820C15BL},{0x7B52C532L,1L,1L},{(-7L),0x49CA441AL,(-1L)},{0x7B52C532L,0x0CBD4CDAL,(-1L)},{(-8L),0L,6L},{(-1L),(-9L),1L},{(-1L),0L,(-7L)}},{{1L,0x0CBD4CDAL,0x76303B67L},{0x5E7E7F52L,0x49CA441AL,0x5E7E7F52L},{(-1L),1L,0x76303B67L},{(-1L),0x3375C728L,(-7L)},{0x7B52C532L,1L,(-1L)},{0x5E7E7F52L,0x3375C728L,0x8DD5774CL},{(-1L),(-9L),0x76303B67L},{(-7L),0x1D1CCAB3L,1L}},{{1L,1L,(-1L)},{6L,0x1D1CCAB3L,0x5E7E7F52L},{0x7B52C532L,(-9L),0xB69FCD84L},{(-1L),0x3375C728L,(-1L)},{1L,0x7B52C532L,0xB69FCD84L},{0x4820C15BL,0L,0x5E7E7F52L},{(-1L),(-1L),(-1L)},{(-1L),0x3375C728L,1L}},{{(-1L),(-1L),0x76303B67L},{0x4820C15BL,0x1D1CCAB3L,0x8DD5774CL},{1L,1L,(-1L)},{(-1L),0x1D1CCAB3L,(-1L)},{0x7B52C532L,(-1L),0xB69FCD84L},{6L,0x3375C728L,6L},{1L,(-1L),0xB69FCD84L},{(-7L),0L,(-1L)}}};
            int32_t l_1524 = 0x46AC39ADL;
            int64_t l_1527[6][7] = {{0L,0L,1L,0L,0L,1L,0L},{0x1A9818DE6D369902LL,2L,2L,0x1A9818DE6D369902LL,2L,2L,0x1A9818DE6D369902LL},{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L)},{0x1A9818DE6D369902LL,0x1A9818DE6D369902LL,0x416A73003414BE54LL,0x1A9818DE6D369902LL,0x1A9818DE6D369902LL,0x416A73003414BE54LL,0x1A9818DE6D369902LL},{0L,(-1L),(-1L),0L,(-1L),(-1L),0L},{2L,0x1A9818DE6D369902LL,2L,2L,0x1A9818DE6D369902LL,2L,2L}};
            int16_t *****l_1573[5][10][5] = {{{(void*)0,&g_483,(void*)0,(void*)0,&g_483},{&g_483,&g_483,&g_483,&g_483,(void*)0},{&g_483,&g_483,&g_483,&g_483,&g_483},{&g_483,&g_483,&g_483,(void*)0,&g_483},{(void*)0,(void*)0,(void*)0,&g_483,&g_483},{(void*)0,&g_483,(void*)0,&g_483,&g_483},{(void*)0,&g_483,(void*)0,&g_483,(void*)0},{&g_483,&g_483,&g_483,&g_483,&g_483},{(void*)0,&g_483,&g_483,&g_483,(void*)0},{&g_483,&g_483,&g_483,&g_483,&g_483}},{{&g_483,&g_483,(void*)0,&g_483,(void*)0},{&g_483,(void*)0,(void*)0,(void*)0,&g_483},{(void*)0,&g_483,(void*)0,&g_483,&g_483},{(void*)0,(void*)0,(void*)0,(void*)0,&g_483},{&g_483,&g_483,&g_483,(void*)0,&g_483},{(void*)0,&g_483,&g_483,&g_483,(void*)0},{&g_483,&g_483,(void*)0,(void*)0,&g_483},{&g_483,&g_483,&g_483,(void*)0,&g_483},{(void*)0,&g_483,(void*)0,&g_483,(void*)0},{(void*)0,(void*)0,&g_483,(void*)0,(void*)0}},{{(void*)0,&g_483,(void*)0,&g_483,(void*)0},{(void*)0,&g_483,&g_483,(void*)0,&g_483},{&g_483,&g_483,(void*)0,(void*)0,&g_483},{&g_483,&g_483,&g_483,&g_483,&g_483},{&g_483,(void*)0,(void*)0,&g_483,(void*)0},{&g_483,(void*)0,&g_483,&g_483,(void*)0},{&g_483,(void*)0,(void*)0,(void*)0,(void*)0},{&g_483,&g_483,&g_483,&g_483,&g_483},{(void*)0,(void*)0,&g_483,(void*)0,&g_483},{&g_483,&g_483,(void*)0,(void*)0,&g_483}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_483,&g_483,&g_483,(void*)0},{&g_483,(void*)0,&g_483,&g_483,(void*)0},{&g_483,(void*)0,&g_483,&g_483,(void*)0},{&g_483,(void*)0,&g_483,(void*)0,&g_483},{&g_483,&g_483,&g_483,(void*)0,&g_483},{(void*)0,&g_483,&g_483,(void*)0,(void*)0},{&g_483,&g_483,&g_483,&g_483,&g_483},{&g_483,&g_483,&g_483,(void*)0,&g_483},{&g_483,(void*)0,(void*)0,&g_483,(void*)0}},{{&g_483,&g_483,&g_483,&g_483,&g_483},{(void*)0,(void*)0,&g_483,&g_483,&g_483},{(void*)0,&g_483,&g_483,(void*)0,&g_483},{&g_483,&g_483,&g_483,(void*)0,&g_483},{(void*)0,(void*)0,&g_483,&g_483,&g_483},{&g_483,&g_483,&g_483,(void*)0,(void*)0},{&g_483,&g_483,&g_483,&g_483,&g_483},{&g_483,&g_483,&g_483,&g_483,&g_483},{&g_483,(void*)0,(void*)0,&g_483,(void*)0},{&g_483,&g_483,(void*)0,&g_483,&g_483}}};
            uint64_t * const *l_1597 = &g_1147;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1227[i] = &g_701[4];
            if (((--l_1229) <= ((g_718[g_624][(g_624 + 6)] | (safe_div_func_uint64_t_u_u(((~(safe_add_func_int64_t_s_s(0x754018D1BF8A94CELL, (((**g_350)++) != 0x61E7L)))) || 0UL), ((**g_1146)++)))) ^ (((*g_710) == l_1241[2][1][7]) | ((((safe_unary_minus_func_int16_t_s((safe_mul_func_uint8_t_u_u(((l_1218 <= (safe_mod_func_int32_t_s_s(((*l_1213) != (safe_div_func_uint32_t_u_u(p_45.f2, 1L))), 0xA5226F86L))) ^ 8L), g_526[0][0])))) , 0xD6EA9A30L) , (**g_710)) != (**g_710))))))
            {
                struct S0 l_1257 = {4294967295UL,-303,-8L};
                uint32_t **l_1265 = &l_1264;
                int8_t *l_1272 = &g_1047.f2;
                (*l_1208) ^= ((l_1249 != (*g_483)) <= (l_1218 || ((void*)0 != l_1250)));
                (*p_44) |= (safe_mod_func_uint8_t_u_u(((~(safe_rshift_func_int16_t_s_s((!(l_1257 , (safe_sub_func_int64_t_s_s((0x8671L < ((*g_351) = (((((*l_1272) = ((safe_sub_func_uint8_t_u_u(((((*l_1265) = l_1264) == (void*)0) < (((**g_395) , (safe_mod_func_uint16_t_u_u((**g_350), l_1228))) < p_45.f2)), (!((((((safe_mul_func_int16_t_s_s(p_48, (*l_1209))) && l_1257.f1) & 18446744073709551614UL) & l_1223) >= (**g_395)) >= l_1271)))) > 1UL)) , g_714) || 18446744073709551615UL) <= l_1257.f1))), 0L)))), 6))) != g_718[g_624][(g_624 + 6)]), 0x98L));
            }
            else
            {
                uint16_t l_1290 = 0x3E8EL;
                uint32_t l_1325[5][9][5] = {{{18446744073709551610UL,0x172845BAL,5UL,0xE4FEE5C4L,0x562006B4L},{0xDDB47847L,0x08204611L,1UL,0xA9CCC65EL,0UL},{18446744073709551612UL,5UL,0x44168F90L,2UL,0x08204611L},{8UL,0xA23F750AL,0x08204611L,18446744073709551612UL,0x08204611L},{18446744073709551615UL,18446744073709551615UL,0xDDB47847L,0xB4F5B44AL,0UL},{0x1729699FL,0xB4F5B44AL,0x6B1A918AL,0xDAC05EF7L,0x562006B4L},{8UL,18446744073709551615UL,0UL,0x44168F90L,0x6B1A918AL},{0UL,8UL,18446744073709551612UL,5UL,0x44168F90L},{0x1729699FL,0xA9CCC65EL,18446744073709551610UL,5UL,0xB4F5B44AL}},{{18446744073709551612UL,18446744073709551612UL,5UL,5UL,18446744073709551612UL},{0xCFE8CEDEL,0x44168F90L,18446744073709551615UL,5UL,0UL},{0xDDB47847L,3UL,0x08204611L,0x44168F90L,5UL},{0x562006B4L,18446744073709551612UL,18446744073709551608UL,18446744073709551610UL,0xDDB47847L},{0xDDB47847L,0xE4FEE5C4L,0x2B541071L,8UL,2UL},{0xCFE8CEDEL,0x31726327L,18446744073709551612UL,0x2B541071L,5UL},{18446744073709551612UL,0UL,18446744073709551612UL,0UL,18446744073709551612UL},{0x1729699FL,1UL,0x2B541071L,0x6B1A918AL,0xA9CCC65EL},{0UL,0xA23F750AL,18446744073709551608UL,0x2317437BL,0x172845BAL}},{{0xA23F750AL,0xDDB47847L,0x08204611L,1UL,0xA9CCC65EL},{0xDAC05EF7L,0x2317437BL,18446744073709551615UL,0xA9CCC65EL,18446744073709551612UL},{0xA9CCC65EL,18446744073709551610UL,5UL,0xB4F5B44AL,5UL},{0x08204611L,18446744073709551610UL,18446744073709551610UL,0x08204611L,2UL},{0x2B541071L,0x2317437BL,18446744073709551612UL,0xDAC05EF7L,0xDDB47847L},{0x172845BAL,0xDDB47847L,0UL,8UL,5UL},{0xB4F5B44AL,0xA23F750AL,5UL,0xDAC05EF7L,0UL},{18446744073709551610UL,1UL,0x172845BAL,0x08204611L,18446744073709551612UL},{0xE4FEE5C4L,0UL,3UL,0xB4F5B44AL,0xB4F5B44AL}},{{0xE4FEE5C4L,0x31726327L,0xE4FEE5C4L,0xA9CCC65EL,0x44168F90L},{18446744073709551610UL,0xE4FEE5C4L,8UL,1UL,0x6B1A918AL},{0xB4F5B44AL,18446744073709551612UL,0x44168F90L,0x2317437BL,0xCFE8CEDEL},{0x172845BAL,3UL,8UL,0x6B1A918AL,0x562006B4L},{0x2B541071L,0x44168F90L,0xE4FEE5C4L,0UL,3UL},{0x08204611L,18446744073709551612UL,3UL,0x2B541071L,3UL},{0xA9CCC65EL,0xA9CCC65EL,0x172845BAL,8UL,0x562006B4L},{0xDAC05EF7L,8UL,5UL,18446744073709551610UL,0xCFE8CEDEL},{0xA23F750AL,18446744073709551615UL,0UL,0x44168F90L,0x6B1A918AL}},{{0UL,8UL,18446744073709551612UL,5UL,0x44168F90L},{0x1729699FL,0xA9CCC65EL,18446744073709551610UL,5UL,0xB4F5B44AL},{18446744073709551612UL,18446744073709551612UL,5UL,5UL,18446744073709551612UL},{0xCFE8CEDEL,0x44168F90L,18446744073709551615UL,5UL,0UL},{0xDDB47847L,3UL,0x08204611L,0x44168F90L,5UL},{0x562006B4L,18446744073709551612UL,18446744073709551608UL,18446744073709551610UL,0xDDB47847L},{0xDDB47847L,0xE4FEE5C4L,0x2B541071L,8UL,2UL},{0xCFE8CEDEL,0x31726327L,18446744073709551612UL,0x2B541071L,5UL},{18446744073709551612UL,0UL,1UL,0x562006B4L,0x2B541071L}}};
                int32_t l_1335 = (-1L);
                int32_t l_1354 = 0xA188F0F9L;
                int32_t l_1357 = (-4L);
                int32_t l_1358 = 0xDB0F6505L;
                int32_t l_1359 = 1L;
                int32_t l_1362 = 2L;
                int32_t l_1365[5];
                uint16_t l_1366 = 0UL;
                uint32_t ***l_1385 = &g_163;
                uint64_t l_1459 = 1UL;
                int32_t l_1513 = (-6L);
                int32_t l_1526[10] = {2L,2L,4L,0x0CFFD118L,4L,2L,2L,4L,0x0CFFD118L,4L};
                int64_t l_1529 = 0xBABC1A70DA46817DLL;
                uint64_t l_1530 = 0UL;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1365[i] = 0x44FCB2AEL;
                if (((*l_1209) = (*p_44)))
                {
                    int64_t l_1275 = 0L;
                    uint16_t l_1276 = 65535UL;
                    uint16_t **l_1284[2][2];
                    uint32_t ****l_1324 = &g_162[0];
                    uint32_t *****l_1323 = &l_1324;
                    int16_t ****l_1332 = &g_363;
                    int16_t ** const **l_1334 = (void*)0;
                    int16_t ** const ***l_1333 = &l_1334;
                    int32_t l_1355 = 0x73CD74C3L;
                    int32_t l_1360 = 6L;
                    int32_t l_1361[9][4] = {{(-1L),0L,(-1L),1L},{0x9715EFD8L,0L,0x7F65B2C7L,0x7F3CC5F0L},{0L,(-1L),(-1L),0L},{(-1L),0x7F3CC5F0L,(-1L),1L},{0L,0x9715EFD8L,0x7F65B2C7L,0x9715EFD8L},{0x9715EFD8L,(-1L),(-1L),0x9715EFD8L},{(-1L),0x9715EFD8L,1L,1L},{0x7F3CC5F0L,0x7F3CC5F0L,0x7F65B2C7L,0L},{0x7F3CC5F0L,(-1L),1L,0x7F3CC5F0L}};
                    int32_t l_1369 = (-1L);
                    int8_t l_1380 = 4L;
                    int8_t l_1421 = 0x65L;
                    int32_t l_1431 = 0xCC2B0EFEL;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1284[i][j] = &g_351;
                    }
                    for (g_590 = 2; (g_590 <= 6); g_590 += 1)
                    {
                        int16_t l_1273 = 0xD55FL;
                        int32_t l_1274[1];
                        uint16_t ***l_1285[5];
                        int32_t **l_1289 = &l_1212;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1274[i] = 0x98032FE8L;
                        for (i = 0; i < 5; i++)
                            l_1285[i] = (void*)0;
                        (*p_44) = (-10L);
                        ++l_1276;
                        (*l_1289) = func_22((((safe_div_func_uint32_t_u_u(p_45.f2, g_718[g_624][(g_624 + 6)])) > (*l_1211)) >= (safe_sub_func_int64_t_s_s(l_1215, (safe_unary_minus_func_int8_t_s(4L))))), (((l_1286 = l_1284[0][1]) != (((p_45.f2 , (**g_395)) > (safe_add_func_uint16_t_u_u((p_47 , 0xDA96L), (*g_351)))) , (void*)0)) ^ 5UL), (*p_44), &l_1222);
                        l_1290--;
                    }
                    for (g_118 = 0; (g_118 <= 6); g_118 += 1)
                    {
                        struct S0 l_1310[1][5][8] = {{{{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L}},{{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L}},{{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L}},{{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L}},{{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L},{0x14EB9763L,425,-8L},{0x44616CCEL,433,0x43L}}}};
                        const int64_t *l_1312[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        const int64_t **l_1311 = &l_1312[3];
                        int8_t *l_1315 = (void*)0;
                        int8_t *l_1316[5][10] = {{&l_1310[0][3][0].f2,&g_717,&g_99,&g_1294.f2,&g_99,&g_99,&g_99,&g_99,&g_1294.f2,&g_99},{&g_99,&g_99,(void*)0,&l_1310[0][3][0].f2,&g_1294.f2,&g_99,&g_717,&g_99,&g_1294.f2,&l_1310[0][3][0].f2},{&l_1310[0][3][0].f2,&l_1310[0][3][0].f2,&l_1310[0][3][0].f2,&g_99,&l_1221,&g_99,&g_717,&g_717,&g_99,&l_1221},{(void*)0,&g_99,&g_99,(void*)0,&l_1310[0][3][0].f2,&g_1294.f2,&g_99,&g_717,&g_99,&g_1294.f2},{&g_99,&g_717,&l_1310[0][3][0].f2,&g_717,&g_99,&g_1294.f2,&g_99,&g_99,&g_99,&g_99}};
                        int i, j, k;
                        g_1293 = (void*)0;
                        (*l_1205) ^= ((l_1219[0] ^= ((void*)0 == &g_1293)) , (-1L));
                        (*l_1213) |= ((safe_rshift_func_int8_t_s_s((g_99 ^= ((safe_rshift_func_uint16_t_u_u((((((safe_mul_func_uint8_t_u_u(((void*)0 == (*g_767)), ((safe_unary_minus_func_uint32_t_u((((safe_mul_func_int16_t_s_s(((((safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(0xAB00L, p_48)), (safe_add_func_int64_t_s_s(((((***g_1145) = l_1276) , l_1310[0][3][0]) , 1L), g_228)))) == (((*l_1311) = &l_1275) != &l_1215)) , (-5L)) , g_1314), 1UL)) && 5UL) & 0x77EE3132L))) <= l_1275))) | 0x0B37745586F5F9F9LL) | l_1218) && p_45.f1) , 1UL), 2)) || (**g_395))), 3)) == l_1310[0][3][0].f2);
                    }
                    if (((*l_1204) = (((+(safe_add_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s((l_1322 , (*g_351)), 9)) , &l_1221) != &g_1102), (l_1323 != (((l_1325[4][2][4] < (l_1335 = (safe_div_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(((l_1332 == ((*l_1333) = (void*)0)) , 0L), p_47)) | 0UL) || l_1325[4][2][4]) != (**g_350)), 0xF98AL)))) , p_46) , l_1336))))) >= (*l_1210)) >= (*g_1147))))
                    {
                        struct S0 **l_1341 = &g_1293;
                        int32_t l_1353 = 0x1431C87AL;
                        int32_t l_1356 = 0xBCE3845DL;
                        int32_t l_1363 = 0x13A75BD8L;
                        int32_t l_1364 = 2L;
                        uint32_t *** const l_1386[9] = {&g_163,&g_163,&g_163,&g_163,&g_163,&g_163,&g_163,&g_163,&g_163};
                        int i;
                        (*l_1205) = (1UL > (((((*l_1250) = (safe_rshift_func_uint16_t_u_s(g_1340, l_1218))) , l_1341) != &g_1293) < (((safe_lshift_func_uint16_t_u_s(p_47, (l_1290 || (((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_1353 = ((l_1228 && (safe_lshift_func_int16_t_s_u((!0xF9L), 6))) || 0x40508387A8E52CE7LL)), 0x88A4L)), p_47)) | g_117[1]), (-1L))) , l_1219[0]) >= l_1215)))) >= 0L) | p_45.f0)));
                        l_1366++;
                        (*p_44) = (((l_1369 & ((((safe_sub_func_int32_t_s_s((*l_1211), ((((0x2BA0FA8C95722664LL || 3UL) && p_45.f1) ^ 65535UL) , l_1365[3]))) >= (safe_rshift_func_int16_t_s_s((4294967287UL < (0x8FECL != p_47)), p_45.f0))) | p_48) > 0xC130L)) < p_48) != (*p_44));
                        (*l_1213) = ((*l_1209) ^= (safe_mod_func_uint64_t_u_u((g_718[g_624][(g_624 + 6)] == (((&g_768 == (((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s((((l_1380 , 9L) < ((-1L) < (p_45 , ((*l_1204) = ((safe_lshift_func_int16_t_s_u((g_1175[0][0][1] = ((((**l_1323) = l_1385) == l_1386[5]) & ((p_47 = (((***g_1145) = (safe_lshift_func_int8_t_s_u((g_718[g_624][(g_624 + 6)] <= g_704), (*g_396)))) & (*l_1207))) == p_48))), 5)) , (*p_44)))))) < 1L), 0x5C45428B4D6E41C8LL)), l_1228)) >= 1L) , &g_768)) >= p_45.f2) || (*g_1147))), l_1389[3][0][1])));
                    }
                    else
                    {
                        int8_t *l_1415[2][10] = {{&l_1380,&g_717,&g_448[5][0][7].f2,&g_448[5][0][7].f2,&g_717,&l_1380,&g_717,&g_448[5][0][7].f2,&g_448[5][0][7].f2,&g_717},{&l_1380,&g_717,&g_448[5][0][7].f2,&g_448[5][0][7].f2,&g_717,&l_1380,&g_717,&g_448[5][0][7].f2,&g_448[5][0][7].f2,&g_717}};
                        int i, j;
                        (*p_44) = (l_1228 == ((*l_1213) = (l_1360 = ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((g_117[1] == p_45.f0), (l_1416 = (((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(0xC6E41FE2L, ((*g_351) == (safe_div_func_int8_t_s_s(((&g_4 == p_44) ^ (((safe_lshift_func_uint8_t_u_u((+((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((((safe_div_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((l_1359 , (*l_1336)) != (*g_767)), 1UL)), p_47)) < (-5L)), 0x3840094AL)) >= l_1413[6]) >= g_718[g_624][(g_624 + 6)]) >= 1L), 0x13L)), 1L)) | 1UL)), (**g_395))) || 0x8EE92D44FE2F72B8LL) <= p_45.f2)), g_117[2]))))), 0UL)) <= l_1414) >= (**g_395))))), 1)) , g_718[g_624][(g_624 + 6)]))));
                        (*l_1204) &= (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(0xDCL, 5)), l_1421));
                        (*l_1207) ^= ((((**g_350) , (safe_sub_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((((void*)0 == g_757) , ((p_45.f1 , p_45.f1) & ((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint64_t_u(l_1358)), 6)) != ((*l_1209) = ((p_45.f2 = (safe_sub_func_uint8_t_u_u((l_1361[4][3] <= (g_120[3][0] < 0x98L)), 255UL))) < 0x5DL))))), l_1431)) != (**g_1146)), 0x68L))) ^ 18446744073709551615UL) | (-9L));
                    }
                }
                else
                {
                    uint64_t l_1432 = 0x3B273EA9AD6DC163LL;
                    int64_t *l_1452 = &g_86;
                    uint32_t l_1457 = 0UL;
                    int32_t l_1462 = 1L;
                    for (l_1220 = 3; (l_1220 <= 9); l_1220 += 1)
                    {
                        int64_t **l_1453[9][10][2] = {{{(void*)0,&l_1250},{&l_1250,(void*)0},{&l_1250,&l_1250},{&l_1250,&l_1452},{&l_1250,&l_1250},{&l_1250,&l_1250},{&l_1452,&l_1250},{&l_1250,(void*)0},{(void*)0,&l_1250},{&l_1250,&l_1250}},{{&l_1250,&l_1250},{&l_1250,&l_1250},{&l_1250,&l_1250},{&l_1250,&l_1250},{(void*)0,&l_1250},{&l_1250,&l_1452},{&l_1250,&l_1250},{(void*)0,(void*)0},{&l_1452,&l_1250},{(void*)0,&l_1452}},{{&l_1452,&l_1250},{&l_1452,&l_1452},{&l_1250,&l_1250},{&l_1250,&l_1452},{&l_1452,&l_1250},{&l_1452,&l_1452},{(void*)0,&l_1250},{&l_1452,(void*)0},{(void*)0,&l_1250},{&l_1250,&l_1452}},{{&l_1250,&l_1250},{(void*)0,&l_1250},{&l_1250,&l_1250},{&l_1250,&l_1250},{&l_1250,&l_1250},{&l_1250,&l_1250},{&l_1250,&l_1250},{(void*)0,&l_1250},{&l_1250,&l_1452},{&l_1250,&l_1250}},{{(void*)0,(void*)0},{&l_1452,&l_1250},{(void*)0,&l_1452},{&l_1452,&l_1250},{&l_1452,&l_1452},{&l_1250,&l_1250},{&l_1250,&l_1452},{&l_1452,&l_1250},{&l_1452,&l_1452},{(void*)0,&l_1250}},{{&l_1452,(void*)0},{(void*)0,&l_1250},{&l_1250,&l_1452},{&l_1250,&l_1250},{(void*)0,&l_1250},{&l_1250,&l_1250},{&l_1250,&l_1250},{&l_1250,&l_1250},{&l_1250,&l_1250},{&l_1250,&l_1250}},{{(void*)0,&l_1250},{&l_1250,&l_1452},{&l_1250,&l_1250},{(void*)0,(void*)0},{&l_1452,&l_1250},{(void*)0,&l_1452},{&l_1452,&l_1250},{&l_1452,&l_1452},{&l_1250,&l_1250},{&l_1250,&l_1452}},{{&l_1452,&l_1250},{&l_1452,&l_1452},{(void*)0,&l_1250},{&l_1452,(void*)0},{(void*)0,&l_1250},{&l_1250,&l_1452},{&l_1250,&l_1250},{(void*)0,&l_1250},{&l_1250,&l_1250},{&l_1250,&l_1250}},{{&l_1250,&l_1250},{&l_1250,&l_1250},{&l_1250,&l_1250},{(void*)0,&l_1250},{&l_1250,&l_1452},{&l_1250,&l_1250},{(void*)0,(void*)0},{&l_1452,&l_1250},{(void*)0,&l_1452},{&l_1452,&l_1250}}};
                        int8_t *l_1460[1][8] = {{&l_1221,&l_1221,&l_1221,&l_1221,&l_1221,&l_1221,&l_1221,&l_1221}};
                        int i, j, k;
                        l_1432--;
                        g_84 = ((l_1365[g_715] != (((0UL != (((*p_44) ^ (l_1435 != l_1436)) < (safe_rshift_func_int8_t_s_u((g_717 = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(((g_117[0] = ((l_1458 &= (((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((+((***g_1145) != ((safe_rshift_func_int8_t_s_u(((&l_1215 == (l_1452 = (l_1454 = (l_1250 = l_1452)))) == (((safe_rshift_func_uint16_t_u_u(((((((p_47 & p_45.f0) & 0x50209284A12C9232LL) , (**g_1146)) , 9L) || 6UL) , l_1432), g_718[g_624][(g_624 + 5)])) & (**g_350)) , p_48)), 2)) , g_717))), 9)) ^ p_46), g_1067[0][1])) , 4294967295UL) & l_1457)) & l_1459)) || l_1228), (*g_396))), p_45.f0)), 1))), 6)))) , g_707) , 0x5EEAL)) , &g_714);
                    }
                    for (g_140 = 6; (g_140 >= 0); g_140 -= 1)
                    {
                        uint32_t l_1463 = 0UL;
                        --l_1463;
                        if (g_718[g_624][(g_624 + 6)])
                            break;
                    }
                    for (l_1229 = 0; (l_1229 <= 3); l_1229 += 1)
                    {
                        int32_t * const l_1473 = &g_1474;
                        int32_t * const *l_1472 = &l_1473;
                        int32_t * const **l_1471 = &l_1472;
                        int32_t l_1503[5];
                        int8_t *l_1510 = &g_1294.f2;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1503[i] = 8L;
                        (*l_1205) = (((4294967295UL || ((safe_add_func_uint16_t_u_u((**g_350), (safe_lshift_func_int8_t_s_s(((~(&g_884 == ((*l_1471) = (void*)0))) & (safe_lshift_func_uint8_t_u_s((**g_395), 0))), (p_44 == (*g_1037)))))) == 0xCA20E9E6L)) || (safe_mod_func_int64_t_s_s(((*l_1452) &= 0x1BABBCE93C6D1000LL), 0x6D2BEB902A76858ELL))) == 0xAD2BL);
                        (*l_1208) = (-1L);
                        (*l_1210) |= (safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((**g_350), ((((safe_rshift_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_div_func_int8_t_s_s(((*l_1510) = (safe_div_func_uint64_t_u_u(((*l_1207) >= (((*l_1207) && ((safe_mul_func_int16_t_s_s(0xD3A8L, ((safe_div_func_int32_t_s_s(((*l_1213) = ((safe_mul_func_int16_t_s_s(((+((0x72DB6C7EL < ((*p_44) != ((p_46 & (((!(safe_mul_func_uint8_t_u_u(l_1503[3], (((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(l_1458, p_46)), l_1290)) == p_47) , l_1508[1][0][9])))) > p_47) | p_45.f2)) && 1UL))) , l_1509[4])) , p_45.f1), p_45.f1)) != 0UL)), 0x645A7573L)) == (***g_1145)))) >= (**g_350))) == p_47)), 0xBA840497675A303BLL))), (*g_396))) <= p_45.f0), 1)) , l_1509[4]), l_1216)) < 0xF7AA13F7L), l_1503[3])) | (*l_1205)) >= (*g_1147)) == 0xB2L))) <= l_1511), 5));
                    }
                    (*l_1211) = (-1L);
                }
                l_1204 = &g_313;
                l_1530--;
                return p_48;
            }
            if ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((!p_48) < ((l_1216 != (**g_350)) ^ g_118)), 5)), ((0x6DB74B5AF453794ELL >= ((*g_1147) ^= ((p_47 , p_45.f0) >= (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((p_45.f2 = (safe_mod_func_uint8_t_u_u((g_652[(g_715 + 2)][(g_624 + 1)] = (6L | 9L)), (*g_396)))) & g_140), l_1544)), p_47))))) == 5L))))
            {
                uint32_t l_1557 = 0xC8F13F61L;
                int32_t **l_1584 = (void*)0;
                (*l_1211) = (safe_lshift_func_uint16_t_u_u((p_45.f0 || (safe_lshift_func_uint16_t_u_u((p_46 = ((safe_mul_func_int8_t_s_s(g_705, (safe_div_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(l_1557, (safe_div_func_uint8_t_u_u(((!(safe_add_func_int32_t_s_s((((((*g_710) != &l_1249) , func_22((*p_44), (l_1217 = (safe_lshift_func_int16_t_s_u(0x86D7L, (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((8L <= (l_1573[4][9][3] != &g_483)) , 0xA3B9F0D6DAF82682LL) == l_1557), l_1413[1])), 2)), (*g_396)))))), (*p_44), &g_718[0][5])) == (void*)0) < 0xB412550929224DFALL), p_47))) ^ l_1516), (*g_396))))) != 0x426362ECL), g_646)) > g_99) > l_1557) > (*l_1210)), 0xC930L)))) <= 0UL)), (**g_350)))), l_1527[3][4]));
                l_1574++;
                if (l_1527[3][4])
                {
                    uint32_t l_1577[6][6] = {{0x66DA313BL,0x66DA313BL,4294967295UL,0x66DA313BL,0x66DA313BL,4294967295UL},{0x66DA313BL,0x66DA313BL,4294967295UL,0x66DA313BL,0x66DA313BL,4294967295UL},{0x66DA313BL,0x66DA313BL,4294967295UL,0x66DA313BL,0x66DA313BL,4294967295UL},{0x66DA313BL,0xE016B345L,0x66DA313BL,0xE016B345L,0xE016B345L,0x66DA313BL},{0xE016B345L,0xE016B345L,0x66DA313BL,0xE016B345L,0xE016B345L,0x66DA313BL},{0xE016B345L,0xE016B345L,0x66DA313BL,0xE016B345L,0xE016B345L,0x66DA313BL}};
                    int i, j;
                    if ((*p_44))
                        break;
                    if (l_1577[4][1])
                        break;
                }
                else
                {
                    uint64_t ***l_1581 = (void*)0;
                    int32_t l_1598[8][3][3] = {{{(-1L),(-1L),7L},{0x182D51BEL,1L,6L},{(-1L),(-1L),7L}},{{0x182D51BEL,1L,6L},{(-1L),(-1L),7L},{0x182D51BEL,1L,6L}},{{(-1L),(-1L),7L},{0x182D51BEL,1L,6L},{(-1L),(-1L),7L}},{{0x182D51BEL,1L,6L},{(-1L),(-1L),7L},{0x182D51BEL,1L,6L}},{{(-1L),(-1L),7L},{0x182D51BEL,1L,6L},{(-1L),(-1L),7L}},{{0x182D51BEL,1L,6L},{(-1L),(-1L),7L},{0x182D51BEL,1L,6L}},{{(-1L),(-1L),7L},{0x182D51BEL,1L,6L},{(-1L),(-1L),7L}},{{0x182D51BEL,1L,6L},{(-1L),(-1L),7L},{0x182D51BEL,1L,6L}}};
                    int i, j, k;
                    (*l_1204) &= (((safe_div_func_uint64_t_u_u(((void*)0 == l_1580), l_1461)) ^ (l_1581 != ((safe_lshift_func_int8_t_s_s(((l_1584 = &g_884) != (void*)0), g_448[5][0][7].f1)) , (void*)0))) < p_47);
                    for (g_145 = 0; (g_145 <= 3); g_145 += 1)
                    {
                        uint64_t **l_1595 = &g_1147;
                        uint64_t ***l_1596 = &l_1595;
                        const uint32_t l_1599 = 4294967291UL;
                        (*l_1207) |= 0x22D0C265L;
                        (*l_1206) = (safe_mul_func_int8_t_s_s((65529UL < l_1527[2][0]), (safe_lshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s(1L, ((safe_lshift_func_uint16_t_u_s(65535UL, (safe_sub_func_int8_t_s_s(((**g_1146) & (7L <= (((((*l_1596) = l_1595) != l_1597) && (***g_1145)) , l_1598[2][2][2]))), 246UL)))) > (**g_350)))) || l_1599) <= (-1L)), 9))));
                    }
                }
                return p_47;
            }
            else
            {
                (*l_1209) &= (safe_add_func_int16_t_s_s(l_1521, ((*g_351)++)));
            }
        }
    }
lbl_1750:
    for (g_145 = 0; (g_145 <= 27); g_145 = safe_add_func_uint32_t_u_u(g_145, 4))
    {
        return p_45.f0;
    }
    if (((((!0xDA31EBA3L) == l_1219[0]) != (safe_rshift_func_int16_t_s_s(0x2DFDL, 12))) ^ (!(((&l_1215 == ((*l_1610) = &l_1215)) | ((g_1612 != (void*)0) || (safe_mul_func_uint8_t_u_u((p_45 , (((safe_mod_func_uint16_t_u_u(0xC545L, p_45.f2)) , g_141) < l_1461)), g_718[0][5])))) ^ l_1413[2]))))
    {
        int16_t l_1626 = 0x17C3L;
        int32_t l_1633 = 9L;
        int8_t *l_1654 = &g_717;
        (*p_44) = (safe_div_func_int16_t_s_s(0x5BA3L, (safe_lshift_func_int16_t_s_u(((-1L) > (-1L)), (((safe_sub_func_int16_t_s_s((~0x1D0C5617D304A84ALL), (l_1633 &= ((p_45.f2 ^ (l_1626 == ((**g_395) = 0x27L))) , (safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u(p_46, 0xD2L)), 1UL)), (**g_395))))))) >= p_47) ^ p_47)))));
        l_1218 &= (((((((p_45 , l_1634) == (*g_1612)) | (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((safe_sub_func_uint32_t_u_u(l_1640, 0xE06C296CL)))), (((safe_mod_func_int8_t_s_s(((((((l_1461 = ((~0x7823901078682AF6LL) || (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((+(safe_rshift_func_int8_t_s_s(((*l_1654) = ((+(l_1626 || (((**g_350)++) >= p_45.f2))) & ((8UL >= l_1626) <= p_45.f1))), p_45.f1))), l_1219[0])), l_1215)))) , g_652[0][1]) || g_230) ^ p_45.f2) , l_1655) != &l_1656), l_1633)) && l_1633) || p_48)))) , p_45.f1) , 1L) == 2UL) > p_48);
        for (g_646 = 5; (g_646 >= 9); g_646 = safe_add_func_int64_t_s_s(g_646, 1))
        {
            return l_1633;
        }
    }
    else
    {
        int16_t ****l_1671 = (void*)0;
        int16_t *****l_1670 = &l_1671;
        int32_t l_1684 = 0L;
        uint16_t ** const l_1685 = &g_351;
        int8_t *l_1686 = &g_1102;
        uint32_t *l_1688 = &g_91[3];
        int64_t ***l_1690 = &l_1610;
        int64_t ****l_1689 = &l_1690;
        (*l_1689) = ((((((*l_1688) |= (safe_mod_func_uint32_t_u_u(0x038D9F20L, ((--p_46) || (((safe_rshift_func_int16_t_s_u(((safe_div_func_int16_t_s_s((((safe_add_func_uint8_t_u_u((0x4BC945732EA86FAELL <= (((~((*g_710) != ((*l_1670) = (*g_710)))) == (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((l_1413[5] & (((void*)0 == l_1676[1]) , (((safe_lshift_func_int16_t_s_s((((((safe_mul_func_int16_t_s_s((((*l_1686) = (safe_sub_func_uint64_t_u_u((~l_1684), ((void*)0 != l_1685)))) & 0x02L), l_1684)) & l_1687[2][0]) & p_47) != p_48) != 0x40DFEA5FL), 14)) , (*p_44)) ^ 0x1C34445EL))), p_47)), 255UL))) < 0xEAB6L)), 0xFEL)) , p_45.f0) , p_45.f1), 1L)) ^ p_45.f0), 2)) ^ (-1L)) != (*p_44)))))) | (*p_44)) || 0xEFD56FC47E99C56ALL) , p_45.f0) , &l_1610);
    }
    if ((safe_mod_func_int16_t_s_s((((l_1693 , g_1047.f0) == ((safe_mul_func_int16_t_s_s((-7L), (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(p_45.f1, (l_1219[0] = 0x2F0FL))), ((l_1700 == ((*l_1703) = l_1702)) ^ 18446744073709551615UL))))) | ((g_646 & l_1218) > 65529UL))) || (*g_396)), l_1511)))
    {
        uint32_t l_1710 = 0x231B9EF7L;
        uint8_t l_1723 = 0x8AL;
        int32_t l_1786 = 0x176D8248L;
        int32_t l_1789 = 0x83B361BCL;
        int32_t l_1791 = 0xF9A6691CL;
        int32_t l_1803 = 0xDAF78B44L;
        int32_t l_1804 = 0x022B7620L;
        int32_t l_1805 = 1L;
        int32_t l_1806[3];
        int16_t *****l_1812[9] = {&g_483,&g_483,(void*)0,&g_483,&g_483,(void*)0,&g_483,&g_483,(void*)0};
        uint16_t ***l_1847 = &g_350;
        int32_t l_1853 = 0xC9D55D2DL;
        uint8_t l_1854 = 7UL;
        int16_t l_1888 = 0xC676L;
        int32_t **l_1903 = (void*)0;
        int32_t **l_1904[8][6] = {{&g_84,&g_84,(void*)0,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,(void*)0,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,(void*)0,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,(void*)0,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_1806[i] = 0x88A205CFL;
        for (g_1047.f2 = 13; (g_1047.f2 == 3); --g_1047.f2)
        {
            int32_t *l_1706 = &g_313;
            int32_t *l_1707 = &l_1219[0];
            int32_t *l_1708 = &l_1219[0];
            int32_t *l_1709[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1709[i] = (void*)0;
            (*p_44) |= (65535UL == ((*g_1293) , (**g_350)));
            l_1710--;
        }
        for (g_715 = 0; (g_715 >= 21); g_715 = safe_add_func_int64_t_s_s(g_715, 3))
        {
            uint16_t l_1722 = 0x83F9L;
            uint8_t l_1734[3];
            uint32_t l_1743 = 18446744073709551615UL;
            int32_t l_1772 = (-1L);
            int32_t l_1776 = 0xCB2FDD62L;
            int32_t l_1787 = 0L;
            int32_t l_1790 = 0L;
            int32_t l_1797 = 0x146110A0L;
            int32_t l_1798[9][5][5] = {{{0x231BAA89L,0xCAC08C54L,(-2L),(-2L),0xCAC08C54L},{0L,0L,(-8L),0x430CF2C0L,0x231BAA89L},{0x430CF2C0L,0xCD826859L,(-2L),1L,0x91FB9D07L},{0xCAC08C54L,(-2L),4L,(-1L),(-1L)},{0x430CF2C0L,(-1L),0xCAC08C54L,0L,(-2L)}},{{0L,0x600069E4L,(-10L),(-1L),(-1L)},{0x231BAA89L,0x8FE9D193L,0x4181EB4BL,(-1L),0x4181EB4BL},{0xD2917014L,0xD2917014L,0xADA27915L,0L,(-1L)},{0xF9593225L,(-8L),0x8FE9D193L,(-1L),0L},{0xD2917014L,4L,(-1L),0L,0x231BAA89L}},{{0x0E6270FFL,1L,0x7B2434B4L,(-1L),0xADA27915L},{(-8L),(-7L),0xCD826859L,0x4181EB4BL,(-1L)},{0xCD826859L,0x430CF2C0L,4L,(-1L),(-1L)},{(-1L),0x7B2434B4L,(-1L),(-2L),0xADA27915L},{0x7B2434B4L,(-2L),0L,(-1L),0x231BAA89L}},{{0xCAC08C54L,0x600069E4L,0L,0x91FB9D07L,0L},{0xF9593225L,(-10L),0L,0x231BAA89L,4L},{0x8FE9D193L,0xF9593225L,(-1L),0xCAC08C54L,(-1L)},{(-1L),(-2L),4L,1L,0L},{(-1L),0xCD826859L,0xCD826859L,(-1L),0x600069E4L}},{{0x8FE9D193L,0x91FB9D07L,0x7B2434B4L,0xD2917014L,(-8L)},{0xF9593225L,(-1L),(-1L),0L,0xCAC08C54L},{0xCAC08C54L,(-1L),0x430CF2C0L,0xD2917014L,0x91FB9D07L},{0x7B2434B4L,(-1L),0xD2917014L,(-1L),(-2L)},{(-1L),0xCAC08C54L,(-1L),1L,0L}},{{0xCD826859L,0xCAC08C54L,0x8FE9D193L,0xCAC08C54L,0xCD826859L},{(-8L),(-1L),(-2L),0x231BAA89L,(-7L)},{0x0E6270FFL,(-1L),(-1L),0x91FB9D07L,6L},{0xD2917014L,(-1L),0x600069E4L,(-1L),(-7L)},{0xADA27915L,0x91FB9D07L,1L,(-2L),0xCD826859L}},{{(-7L),0xCD826859L,0x4181EB4BL,(-1L),0L},{0x91FB9D07L,(-2L),0x4181EB4BL,0x4181EB4BL,(-2L)},{0L,0xF9593225L,1L,(-1L),0x91FB9D07L},{(-1L),(-10L),0x600069E4L,0L,0xCAC08C54L},{(-2L),0x600069E4L,(-1L),0x0E6270FFL,(-8L)}},{{(-1L),(-2L),(-2L),0xF9593225L,0x600069E4L},{0L,0x7B2434B4L,0x8FE9D193L,4L,0L},{0x91FB9D07L,0x430CF2C0L,(-1L),4L,(-1L)},{(-7L),(-7L),0xD2917014L,0xF9593225L,4L},{0xADA27915L,1L,0x430CF2C0L,0x0E6270FFL,0L}},{{0xD2917014L,4L,(-1L),0L,0x231BAA89L},{0x0E6270FFL,1L,0x7B2434B4L,(-1L),0xADA27915L},{(-8L),(-7L),0xCD826859L,0x4181EB4BL,(-1L)},{0xCD826859L,0x430CF2C0L,4L,(-1L),(-1L)},{(-1L),0x7B2434B4L,(-1L),(-2L),0xADA27915L}}};
            int32_t l_1830 = 0L;
            uint64_t ***l_1857 = &g_1728;
            int16_t *****l_1889[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t l_1890 = 0UL;
            struct S0 * const l_1897[7] = {&g_1294,&g_1294,&g_1294,&g_1294,&g_1294,&g_1294,&g_1294};
            int32_t *l_1902 = &l_1640;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1734[i] = 1UL;
            for (l_1640 = 3; (l_1640 >= 0); l_1640 -= 1)
            {
                int8_t *l_1721[9] = {&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528};
                uint64_t ****l_1729[2][2] = {{&g_1727,&g_1727},{&g_1727,&g_1727}};
                int32_t *l_1735 = &l_1219[0];
                int32_t *l_1736 = &l_1217;
                int32_t *l_1737 = &g_313;
                int32_t *l_1738 = &l_1218;
                int32_t *l_1739 = &l_1219[0];
                int32_t *l_1740 = &g_714;
                int32_t *l_1741 = &l_1219[0];
                int32_t *l_1742[8];
                int i, j;
                for (i = 0; i < 8; i++)
                    l_1742[i] = &g_313;
                (*l_1735) |= (((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((g_99 = l_1687[l_1640][l_1640]), 4)), p_45.f1)), l_1722)) , func_22((l_1723 ^ (safe_div_func_uint64_t_u_u((***g_1145), (+((g_117[1] &= (((*l_1611) &= (&l_1580 != (g_1727 = g_1727))) != ((l_1733 ^= (0xF4FFE21F3215D2BALL != (!((((safe_mod_func_uint16_t_u_u(p_45.f1, l_1687[2][0])) && (*g_1147)) != (*g_396)) == p_45.f1)))) , 4L))) > p_45.f1))))), l_1734[1], (*p_44), l_1735)) == &l_1687[l_1640][l_1640]);
                l_1743++;
                return g_91[8];
            }
            (*p_44) = (*p_44);
            for (g_717 = (-11); (g_717 < 11); g_717 = safe_add_func_uint32_t_u_u(g_717, 9))
            {
                uint32_t l_1763[3];
                uint8_t l_1774 = 0x9CL;
                int32_t l_1792 = (-1L);
                int32_t l_1793[6] = {0x5C39D013L,0x5C39D013L,0x5C39D013L,0x5C39D013L,0x5C39D013L,0x5C39D013L};
                int16_t *****l_1802 = &g_483;
                uint64_t l_1829 = 18446744073709551606UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_1763[i] = 18446744073709551609UL;
                for (g_714 = 0; (g_714 > (-2)); g_714 = safe_sub_func_uint16_t_u_u(g_714, 6))
                {
                    int8_t l_1760 = 0x61L;
                    uint16_t l_1773[5] = {0x9CDCL,0x9CDCL,0x9CDCL,0x9CDCL,0x9CDCL};
                    uint32_t *l_1782 = (void*)0;
                    uint32_t *l_1783[1][1][10] = {{{(void*)0,&g_91[2],(void*)0,(void*)0,&g_91[2],(void*)0,(void*)0,&g_91[2],(void*)0,(void*)0}}};
                    int32_t l_1784 = (-10L);
                    int32_t l_1788 = 0x378ACC62L;
                    int32_t l_1794 = 0x08C30650L;
                    int32_t l_1795 = 9L;
                    int32_t l_1796 = 1L;
                    int32_t l_1807 = 5L;
                    int32_t l_1808 = 0xA6709FA5L;
                    int i, j, k;
                    (*p_44) = l_1733;
                    if (g_99)
                        goto lbl_1750;
                    for (g_110 = 7; (g_110 <= 34); ++g_110)
                    {
                        int32_t *l_1775[2][8] = {{&l_1219[0],&g_4,&g_4,&g_4,&l_1219[0],&l_1640,&l_1640,&l_1219[0]},{&g_4,&l_1219[0],&l_1219[0],&g_4,&l_1219[0],&l_1219[0],&l_1219[0],&g_4}};
                        int i, j;
                        l_1776 |= (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((~(p_44 == p_44)) | (((safe_add_func_uint8_t_u_u(((((l_1760 != 0UL) || (0xCAL || ((((safe_add_func_uint16_t_u_u(l_1763[2], (((**g_350) = ((l_1772 = (safe_add_func_int16_t_s_s(((*g_1147) , l_1763[2]), (safe_rshift_func_int16_t_s_u((((*p_44) = ((((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(l_1763[0], p_48)), 1UL)) >= 65527UL) < p_47) | p_46)) & l_1760), 15))))) | 18446744073709551615UL)) < 0xABA6L))) >= l_1773[1]) ^ l_1760) & 0x4EA07C38L))) , l_1774) < (-9L)), p_47)) < l_1687[0][1]) == l_1773[1])), g_28[9])) != l_1774), p_45.f1));
                        if (l_1772)
                            continue;
                        if (l_1511)
                            continue;
                    }
                    if (((safe_add_func_int32_t_s_s((((((p_47 ^ (!((g_1799--) > (((l_1802 != ((g_1809--) , (l_1812[6] = l_1812[6]))) || (((safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((((safe_mod_func_int16_t_s_s((((l_1803 = 0x01F2L) , (((**g_395) , (safe_rshift_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((p_45 , (**g_1145)) != &p_47), ((((*p_44) = ((((((safe_div_func_int16_t_s_s((p_45.f1 != 65535UL), l_1693.f0)) != g_144) <= 0xEFA1061C1BD0D743LL) , g_1175[2][1][0]) < p_45.f2) < l_1772)) , 1L) != 1UL))), (***g_1145))), p_45.f1)) , (void*)0) == (void*)0), 3))) == p_47)) && (***g_1145)), (**g_350))) , 249UL) >= 0x35L) | p_45.f0), l_1786)) , (*g_351)), p_47)) && l_1829) && l_1830)) , p_46)))) , 0xB8B2D740F3202701LL) ^ p_45.f0) , l_1413[8]) && p_46), 4294967295UL)) != 0x7FCEL))
                    {
                        int32_t **l_1831 = &g_84;
                        (*l_1831) = &g_718[0][6];
                        return p_47;
                    }
                    else
                    {
                        uint64_t l_1844[8][4][8] = {{{0xAE4DA020E90DA7F5LL,0xF39D7F9753CC99B3LL,0xB9BB176614D63843LL,0UL,18446744073709551612UL,0x6975106992C3E00FLL,0x9C71EAB4BEEBB6A9LL,0xABE223B2EC772BF4LL},{1UL,0xB9BB176614D63843LL,0xFA24A5234F5BCF5DLL,1UL,18446744073709551612UL,0x05976A53F6ACDA00LL,0x6975106992C3E00FLL,0xAE4DA020E90DA7F5LL},{0xAE4DA020E90DA7F5LL,0x9C71EAB4BEEBB6A9LL,0x87D3C7145CE8C0D3LL,0xABE223B2EC772BF4LL,18446744073709551607UL,0UL,0UL,18446744073709551607UL},{18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x21A1CDA74FD3DE1ALL,0x9C71EAB4BEEBB6A9LL,1UL,0xB9BB176614D63843LL}},{{18446744073709551612UL,18446744073709551607UL,18446744073709551615UL,0x9C71EAB4BEEBB6A9LL,0x3AE9784250478BB5LL,0x3D73D94AF352185BLL,0xF39D7F9753CC99B3LL,0xFA24A5234F5BCF5DLL},{0x3D73D94AF352185BLL,18446744073709551607UL,18446744073709551615UL,0x6975106992C3E00FLL,1UL,0x9C71EAB4BEEBB6A9LL,0x05976A53F6ACDA00LL,0x87D3C7145CE8C0D3LL},{0x05976A53F6ACDA00LL,1UL,0x3AE9784250478BB5LL,0UL,1UL,0UL,0x3AE9784250478BB5LL,1UL},{18446744073709551615UL,0x9C71EAB4BEEBB6A9LL,0xFE645B882498ED58LL,1UL,0xABE223B2EC772BF4LL,0x05976A53F6ACDA00LL,18446744073709551609UL,18446744073709551615UL}},{{0UL,0xB9BB176614D63843LL,0x9C71EAB4BEEBB6A9LL,0xF39D7F9753CC99B3LL,18446744073709551615UL,0x6975106992C3E00FLL,18446744073709551609UL,18446744073709551615UL},{0UL,0xF39D7F9753CC99B3LL,0xFE645B882498ED58LL,0x05976A53F6ACDA00LL,0xB9BB176614D63843LL,0UL,0x3AE9784250478BB5LL,0x3AE9784250478BB5LL},{0xB9BB176614D63843LL,0UL,0x3AE9784250478BB5LL,0x3AE9784250478BB5LL,0UL,0xB9BB176614D63843LL,0x05976A53F6ACDA00LL,0xFE645B882498ED58LL},{1UL,0x87D3C7145CE8C0D3LL,18446744073709551615UL,18446744073709551609UL,0x6975106992C3E00FLL,18446744073709551615UL,0xF39D7F9753CC99B3LL,0x9C71EAB4BEEBB6A9LL}},{{18446744073709551612UL,18446744073709551612UL,18446744073709551615UL,18446744073709551609UL,0x05976A53F6ACDA00LL,0xABE223B2EC772BF4LL,1UL,0xFE645B882498ED58LL},{0x1C2AFDB3CE44EF82LL,0x05976A53F6ACDA00LL,1UL,0x3AE9784250478BB5LL,0UL,1UL,0UL,0x3AE9784250478BB5LL},{0x87D3C7145CE8C0D3LL,0x128DE094CCB617DBLL,0x87D3C7145CE8C0D3LL,0x05976A53F6ACDA00LL,0x9C71EAB4BEEBB6A9LL,1UL,0x6975106992C3E00FLL,18446744073709551615UL},{0xABE223B2EC772BF4LL,18446744073709551612UL,0xFA24A5234F5BCF5DLL,0xF39D7F9753CC99B3LL,0x3D73D94AF352185BLL,0x3AE9784250478BB5LL,0x9C71EAB4BEEBB6A9LL,18446744073709551615UL}},{{0xABE223B2EC772BF4LL,0x178B345C8BAA75C5LL,0xB9BB176614D63843LL,1UL,0x9C71EAB4BEEBB6A9LL,0x21A1CDA74FD3DE1ALL,18446744073709551615UL,1UL},{0x87D3C7145CE8C0D3LL,1UL,0xFE645B882498ED58LL,0x178B345C8BAA75C5LL,0x178B345C8BAA75C5LL,0xFE645B882498ED58LL,1UL,0xF39D7F9753CC99B3LL},{0UL,18446744073709551615UL,0xFA24A5234F5BCF5DLL,1UL,0x6975106992C3E00FLL,0x3D73D94AF352185BLL,0UL,0x21A1CDA74FD3DE1ALL},{0UL,0x05976A53F6ACDA00LL,1UL,0x87D3C7145CE8C0D3LL,1UL,0x3D73D94AF352185BLL,1UL,0xAE4DA020E90DA7F5LL}},{{0UL,18446744073709551615UL,0xB9BB176614D63843LL,18446744073709551607UL,18446744073709551609UL,0xFE645B882498ED58LL,0xFA24A5234F5BCF5DLL,0xFE645B882498ED58LL},{0xAE4DA020E90DA7F5LL,1UL,18446744073709551609UL,1UL,0xAE4DA020E90DA7F5LL,0xABE223B2EC772BF4LL,18446744073709551612UL,0xFA24A5234F5BCF5DLL},{1UL,18446744073709551612UL,0x9C71EAB4BEEBB6A9LL,0UL,0x128DE094CCB617DBLL,0x1C2AFDB3CE44EF82LL,18446744073709551615UL,1UL},{0x178B345C8BAA75C5LL,0UL,0x9C71EAB4BEEBB6A9LL,1UL,1UL,18446744073709551615UL,18446744073709551612UL,0xB9BB176614D63843LL}},{{0x128DE094CCB617DBLL,0x3AE9784250478BB5LL,18446744073709551609UL,0xFA24A5234F5BCF5DLL,0x9C71EAB4BEEBB6A9LL,0x9C71EAB4BEEBB6A9LL,0xFA24A5234F5BCF5DLL,18446744073709551609UL},{0x6975106992C3E00FLL,0x6975106992C3E00FLL,0xB9BB176614D63843LL,18446744073709551612UL,18446744073709551615UL,1UL,1UL,0x9C71EAB4BEEBB6A9LL},{0xB9BB176614D63843LL,0x3D73D94AF352185BLL,1UL,18446744073709551615UL,0x1C2AFDB3CE44EF82LL,0x128DE094CCB617DBLL,0UL,0x9C71EAB4BEEBB6A9LL},{0x3D73D94AF352185BLL,0xF39D7F9753CC99B3LL,0xFA24A5234F5BCF5DLL,18446744073709551612UL,0xABE223B2EC772BF4LL,0xAE4DA020E90DA7F5LL,1UL,18446744073709551609UL}},{{18446744073709551607UL,18446744073709551609UL,0xFE645B882498ED58LL,0xFA24A5234F5BCF5DLL,0xFE645B882498ED58LL,18446744073709551609UL,18446744073709551607UL,0xB9BB176614D63843LL},{0xFA24A5234F5BCF5DLL,18446744073709551612UL,0xAE4DA020E90DA7F5LL,1UL,0x3D73D94AF352185BLL,1UL,0x87D3C7145CE8C0D3LL,1UL},{18446744073709551615UL,0xAE4DA020E90DA7F5LL,0x21A1CDA74FD3DE1ALL,0UL,0x3D73D94AF352185BLL,0x6975106992C3E00FLL,1UL,0xFA24A5234F5BCF5DLL},{0xFA24A5234F5BCF5DLL,0x87D3C7145CE8C0D3LL,0xF39D7F9753CC99B3LL,1UL,0xFE645B882498ED58LL,0x178B345C8BAA75C5LL,0x178B345C8BAA75C5LL,0xFE645B882498ED58LL}}};
                        int64_t *l_1845 = &g_117[1];
                        int32_t l_1846 = (-9L);
                        int32_t **l_1848 = &g_84;
                        int32_t *l_1849 = &l_1772;
                        int32_t *l_1850 = &l_1789;
                        int32_t *l_1851 = (void*)0;
                        int32_t *l_1852[4] = {&g_1340,&g_1340,&g_1340,&g_1340};
                        uint64_t ****l_1858 = &l_1857;
                        int8_t *l_1861 = &g_1047.f2;
                        int8_t *l_1862 = &g_1294.f2;
                        int i, j, k;
                        (*l_1848) = (((safe_rshift_func_uint8_t_u_u(((((((**l_1580) = p_46) <= (((void*)0 != &p_48) | (l_1846 = (safe_mul_func_int8_t_s_s(g_1340, (((l_1784 = ((((*l_1845) = ((**l_1610) = ((safe_div_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((4294967288UL ^ (p_45.f1 & l_1734[1])), (safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(((*g_351) && p_48), p_46)) < (*g_396)), l_1734[1])))) >= p_46), l_1844[7][3][3])) && p_45.f1))) <= 0xAD217EA05E329A01LL) , p_48)) > 0x138AF5A05EFC1EB5LL) || l_1722)))))) , &g_350) == l_1847) < l_1808), (*g_396))) || 4294967295UL) , (void*)0);
                        l_1854++;
                        l_1888 = (((((*l_1858) = l_1857) != &g_1146) != (safe_rshift_func_int8_t_s_u((((*l_1862) ^= ((*l_1861) = (p_45.f2 = (*l_1850)))) >= (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((**g_395), ((safe_mod_func_int16_t_s_s(((((l_1461 = ((***l_1847) = ((safe_rshift_func_int16_t_s_s(((!((l_1872--) & ((safe_mod_func_int64_t_s_s(p_47, (**g_1728))) || p_45.f0))) & (safe_div_func_uint8_t_u_u(p_45.f0, (~(safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((l_1734[1] != 0x766BC1C4L), p_48)), p_48)) && p_45.f0), p_46)) & l_1796), l_1763[2])))))), 3)) , (*g_351)))) , 0xABD9B92CL) > l_1793[5]) && p_46), p_46)) >= 18446744073709551615UL))) ^ p_47), (-1L)))), 2))) , 0xA0A91BABL);
                    }
                }
                if (l_1789)
                    break;
                if (((l_1889[5] = (void*)0) == &g_483))
                {
                    uint32_t l_1891 = 18446744073709551615UL;
                    l_1772 = ((l_1890 < l_1891) <= (safe_rshift_func_int16_t_s_s(0xBB3BL, (safe_mul_func_int16_t_s_s((l_1693.f1 &= (l_1853 && 1L)), ((l_1219[0] = (4294967291UL & (0xC847FE87L ^ l_1218))) ^ ((void*)0 != &g_351)))))));
                }
                else
                {
                    int32_t *l_1896[8][8][1] = {{{&l_1219[0]},{&l_1789},{&l_1772},{&l_1217},{(void*)0},{&l_1787},{&g_144},{&l_1776}},{{&l_1786},{&l_1786},{&l_1776},{&g_144},{&l_1787},{(void*)0},{&l_1217},{&l_1772}},{{&l_1789},{&l_1219[0]},{&g_718[0][5]},{&l_1640},{&l_1787},{&g_718[0][6]},{&g_313},{&l_1217}},{{&g_32},{&l_1217},{&g_313},{&g_718[0][6]},{&l_1787},{&l_1640},{&g_718[0][5]},{&l_1219[0]}},{{&l_1789},{&l_1772},{&l_1217},{(void*)0},{&l_1787},{&g_144},{&l_1776},{&l_1786}},{{&l_1786},{&l_1776},{&g_144},{&l_1787},{(void*)0},{&l_1217},{&l_1772},{&l_1789}},{{&l_1219[0]},{&g_718[0][5]},{&l_1640},{&l_1787},{&g_718[0][6]},{&g_313},{&l_1217},{&g_32}},{{&l_1217},{&g_313},{&g_718[0][6]},{&l_1787},{&l_1640},{&g_718[0][5]},{&l_1219[0]},{&l_1789}}};
                    int i, j, k;
                    l_1896[0][6][0] = p_44;
                    p_44 = func_22(l_1829, l_1733, (*p_44), &g_313);
                }
                (*l_1655) = l_1897[0];
            }
            (*l_1902) = ((((safe_div_func_int64_t_s_s(p_45.f1, ((**l_1610) = p_46))) || ((*p_44) = (*p_44))) < (((**g_395) ^= l_1693.f0) != p_46)) <= ((1L <= ((l_1805 = 1L) , p_45.f2)) != (safe_mul_func_int8_t_s_s(g_1314, 1L))));
        }
        g_84 = &g_718[0][5];
    }
    else
    {
        uint32_t l_1905 = 0x51C4E7F7L;
        --l_1905;
        return g_1294.f2;
    }
    return p_45.f1;
}







static uint16_t func_50(int32_t p_51)
{
    int32_t *l_70 = &g_32;
    int32_t l_901 = (-1L);
    struct S0 * const l_1045 = &g_448[0][0][5];
    uint16_t ***l_1055 = &g_350;
    const int32_t l_1062 = 1L;
    int32_t l_1070 = (-1L);
    int32_t l_1074[7][5] = {{0xD90B2727L,0L,0L,0xD90B2727L,0xD90B2727L},{0xEED47FCDL,(-4L),0xEED47FCDL,(-4L),0xEED47FCDL},{0xD90B2727L,0xD90B2727L,0L,0L,0xD90B2727L},{0L,(-4L),0L,(-4L),0L},{0xD90B2727L,0L,0L,0xD90B2727L,0xD90B2727L},{0xEED47FCDL,(-4L),0xEED47FCDL,(-4L),0xEED47FCDL},{0xD90B2727L,0xD90B2727L,0L,0L,0xD90B2727L}};
    uint64_t l_1076 = 0UL;
    int8_t l_1095[4][3];
    uint32_t l_1111 = 0x561A8602L;
    const uint16_t l_1127 = 0x2334L;
    uint8_t *l_1161 = &g_707;
    uint8_t l_1167 = 0xE2L;
    uint32_t ****l_1169 = &g_162[5];
    uint32_t *****l_1168 = &l_1169;
    int8_t l_1191 = 0xE3L;
    uint64_t l_1196 = 1UL;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_1095[i][j] = 0x94L;
    }
    return (**g_350);
}







static int32_t func_54(const int32_t * p_55, int32_t * p_56, int32_t * p_57, int32_t * p_58)
{
    int32_t *l_882 = (void*)0;
    int32_t **l_883 = (void*)0;
    int32_t l_886 = 0xCD4E8FBFL;
    int32_t l_889 = 0x7B46820BL;
    int32_t l_892 = 0xF8658E21L;
    int32_t **l_893 = &g_84;
    int32_t *l_894 = &l_886;
    int32_t *l_895[7][2] = {{&g_313,&l_886},{&l_889,&l_886},{&l_889,&l_886},{&g_313,&g_313},{&l_886,&l_889},{&l_886,&l_889},{&l_886,&g_313}};
    int16_t l_896 = 0xE964L;
    int64_t l_897 = 0L;
    uint16_t l_898[4] = {0xA270L,0xA270L,0xA270L,0xA270L};
    int i, j;
    (*l_893) = func_22((safe_sub_func_uint16_t_u_u(0xF91AL, (safe_rshift_func_int8_t_s_u((l_882 != (g_884 = l_882)), 4)))), (!(l_886 | ((*p_58) = (safe_mod_func_uint32_t_u_u((l_889 = l_886), l_886))))), (18446744073709551611UL ^ (safe_mul_func_int8_t_s_s(((((((1L & ((l_892 = g_32) & g_117[1])) & l_886) , (-1L)) && g_110) > (*g_396)) , l_892), (*g_396)))), p_58);
    (*l_893) = &g_718[0][5];
    l_898[1]++;
    return (*p_55);
}







static int32_t * func_59(const uint32_t p_60, const int8_t p_61, uint64_t p_62)
{
    int32_t l_848 = 0x3DC41129L;
    int32_t ** const l_855 = (void*)0;
    int8_t *l_860 = &g_717;
    int8_t *l_861 = (void*)0;
    struct S0 l_868 = {0x8A368A43L,-0,-8L};
    uint8_t **l_869 = &g_396;
    uint64_t *l_876 = &g_590;
    uint16_t *l_877 = &g_230;
    g_448[5][0][7].f1 = (l_848 < (((g_448[5][0][7].f2 = (!(safe_add_func_uint16_t_u_u((!l_848), (((*l_860) = (g_448[4][0][7] , (safe_sub_func_uint64_t_u_u((l_855 == l_855), (safe_mod_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(((0x2FC08B49L | 0x9349C6B2L) , ((p_62 <= (l_848 , p_62)) ^ 5L)), l_848)) >= 0xC69DF690L), l_848)))))) >= l_848))))) & l_848) != (**g_350)));
    g_714 = (((safe_add_func_uint64_t_u_u((((p_60 || (safe_add_func_int8_t_s_s(((**g_395) && ((**g_395) = 0x6DL)), (p_60 == (safe_add_func_uint64_t_u_u((((*l_877) &= ((0xD32533AD5B7BF98ELL > p_60) , (((l_868 , l_869) != (((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((l_848 = ((((*l_876) = g_91[8]) , l_876) != (void*)0)) , 0UL), (**g_350))), 3)) , p_62), l_868.f0)) >= l_868.f0) , (void*)0)) > 0L))) | l_868.f0), 18446744073709551615UL)))))) || l_868.f0) == 255UL), p_60)) > l_868.f0) , 8L);
    return &g_4;
}







static const int8_t func_63(uint32_t p_64)
{
    int32_t *l_792 = &g_718[0][6];
    uint8_t l_794 = 0UL;
    int32_t l_800 = 0xA0EAE304L;
    uint32_t l_801[7][8] = {{0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL},{0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL},{0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL},{0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL},{0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL},{0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL},{0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL,0x6FA3E13DL,0UL}};
    int32_t l_813 = 1L;
    int32_t l_814[1];
    uint32_t l_826[5][1][3];
    int32_t *l_842 = &g_313;
    int32_t *l_843[3][4] = {{&l_800,&g_718[0][5],&l_800,&g_718[0][5]},{&l_800,&g_718[0][5],&l_800,&g_718[0][5]},{&l_800,&g_718[0][5],&l_800,&g_718[0][5]}};
    uint8_t l_844 = 0x84L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_814[i] = 0xC59FA5E5L;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_826[i][j][k] = 4294967295UL;
        }
    }
    for (g_707 = 0; (g_707 <= 0); g_707 += 1)
    {
        uint32_t l_780 = 18446744073709551613UL;
        uint8_t **l_789[2][5] = {{&g_396,&g_396,&g_396,&g_396,&g_396},{&g_396,&g_396,&g_396,&g_396,&g_396}};
        int32_t **l_790 = (void*)0;
        int32_t **l_791 = &g_84;
        uint32_t *l_793 = &g_120[1][0];
        int32_t l_799[4] = {4L,4L,4L,4L};
        int32_t l_825 = 0L;
        uint16_t l_833 = 0x7F9CL;
        int i, j;
        for (g_86 = 0; (g_86 >= 0); g_86 -= 1)
        {
            int32_t *l_774 = (void*)0;
            int32_t *l_775 = &g_718[0][5];
            int32_t *l_776 = &g_313;
            int32_t *l_777 = &g_718[g_86][(g_86 + 1)];
            int32_t *l_778 = &g_32;
            int32_t *l_779[1][4][8] = {{{(void*)0,&g_313,&g_32,&g_32,&g_32,&g_313,(void*)0,&g_313},{(void*)0,&g_32,&g_313,&g_32,(void*)0,&g_144,(void*)0,&g_32},{&g_32,&g_32,&g_32,&g_313,(void*)0,&g_313,&g_32,&g_32},{(void*)0,&g_313,&g_32,&g_32,&g_32,&g_313,(void*)0,&g_313}}};
            int i, j, k;
            l_780--;
        }
        if (((safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((((*l_793) = (((((*l_792) = ((((p_64 , 0UL) && (((0xCFF8917472DBD7E8LL ^ (safe_lshift_func_uint16_t_u_s((&g_718[0][3] == &g_144), 9))) , &g_396) != (l_789[0][1] = &g_396))) >= (((*l_791) = &g_714) == l_792)) ^ 0x33L)) >= 0x55L) >= 1UL) > p_64)) , 7UL) == p_64), p_64)) , 0x70546689L), l_794)) || (*l_792)))
        {
            int32_t *l_795 = &g_313;
            int32_t *l_796 = &g_313;
            int32_t *l_797 = &g_718[0][5];
            int32_t *l_798[2][8][3] = {{{&g_32,&g_32,&g_718[0][2]},{&g_718[0][6],&g_313,&g_714},{(void*)0,&g_32,&g_718[0][0]},{(void*)0,&g_718[0][6],&g_313},{&g_718[0][6],(void*)0,&g_718[0][0]},{&g_32,(void*)0,&g_714},{&g_313,&g_718[0][6],&g_718[0][2]},{&g_32,&g_32,&g_718[0][2]}},{{&g_718[0][6],&g_313,&g_714},{(void*)0,&g_144,&g_313},{(void*)0,&g_313,&g_144},{&g_313,(void*)0,&g_313},{&g_144,(void*)0,&g_144},{&g_144,&g_313,&g_32},{&g_144,&g_144,&g_32},{&g_313,&g_144,&g_144}}};
            int i, j, k;
            (*l_791) = (*l_791);
            if (p_64)
                break;
            (*g_84) = p_64;
            --l_801[4][0];
        }
        else
        {
            int32_t l_815 = 0L;
            int32_t l_816 = 0x29875604L;
            int32_t l_817 = 0L;
            int32_t l_818 = 2L;
            int32_t l_821[4][9][2] = {{{0x720C1909L,0x428AA5D1L},{0x428AA5D1L,3L},{(-6L),0x69D1E0FBL},{0x14ADE800L,5L},{1L,0L},{(-7L),0L},{2L,0L},{0x1CEEC801L,0xB895336EL},{5L,0xCB380745L}},{{0xBD0A4679L,0x14ADE800L},{2L,0x14ADE800L},{0xBD0A4679L,0xCB380745L},{5L,0xB895336EL},{0x1CEEC801L,0L},{2L,0L},{(-7L),0L},{1L,5L},{0x14ADE800L,0x69D1E0FBL}},{{(-6L),3L},{0x428AA5D1L,0x428AA5D1L},{0x720C1909L,0x9BEBB497L},{3L,1L},{0xF04FE438L,(-8L)},{(-8L),0xF04FE438L},{0xCB380745L,(-1L)},{0xCB380745L,0xF04FE438L},{(-8L),(-8L)}},{{0xF04FE438L,1L},{3L,0x9BEBB497L},{0x720C1909L,0x428AA5D1L},{0x428AA5D1L,3L},{(-6L),0x69D1E0FBL},{0x14ADE800L,5L},{1L,0L},{(-7L),0L},{2L,0L}}};
            int i, j, k;
            for (g_624 = 0; (g_624 <= 0); g_624 += 1)
            {
                int32_t l_819 = (-9L);
                int32_t l_820 = 7L;
                int32_t l_823 = 1L;
                int32_t l_824[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_824[i] = 8L;
                for (g_99 = 3; (g_99 >= 0); g_99 -= 1)
                {
                    int32_t *l_804 = &g_32;
                    int32_t *l_805 = &g_714;
                    int32_t *l_806 = &l_799[(g_707 + 3)];
                    int32_t *l_807 = &l_799[(g_707 + 3)];
                    int32_t *l_808 = &g_718[g_707][(g_99 + 1)];
                    int32_t *l_809 = &g_144;
                    int32_t *l_810 = &g_718[0][5];
                    int32_t *l_811 = &g_714;
                    int32_t *l_812[9] = {&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4};
                    int64_t l_822 = 0L;
                    int i, j;
                    if (g_718[g_707][(g_99 + 1)])
                        break;
                    ++l_826[1][0][1];
                    l_821[3][1][0] = ((*l_804) = (safe_sub_func_int8_t_s_s(0L, 0x81L)));
                }
                for (l_818 = 3; (l_818 >= 0); l_818 -= 1)
                {
                    int32_t *l_831 = (void*)0;
                    int32_t *l_832[10] = {&l_823,&g_313,&g_313,&l_823,&l_821[2][2][1],&l_823,&g_313,&g_313,&l_823,&l_821[2][2][1]};
                    int i;
                    l_833++;
                    if (g_91[(l_818 + 4)])
                        break;
                }
                if (l_799[(g_707 + 1)])
                    continue;
            }
        }
        for (g_646 = 0; (g_646 <= 0); g_646 += 1)
        {
            int64_t *l_837[6];
            int64_t **l_836 = &l_837[1];
            int i;
            for (i = 0; i < 6; i++)
                l_837[i] = &g_117[0];
            l_836 = g_757;
        }
    }
    (*l_792) = ((safe_add_func_int8_t_s_s(p_64, (**g_395))) && (safe_rshift_func_uint16_t_u_u(((**g_350) |= (*l_792)), (*l_792))));
    g_32 |= (*l_792);
    --l_844;
    return g_313;
}







static int16_t func_67(int32_t p_68, int16_t p_69)
{
    int16_t l_96 = (-1L);
    int32_t l_121 = 0x214255FAL;
    int8_t *l_184 = &g_99;
    const int8_t *l_185 = &g_99;
    int32_t l_197 = 1L;
    int32_t *l_235 = &l_197;
    uint32_t ****l_238[9] = {(void*)0,&g_162[1],&g_162[1],(void*)0,&g_162[1],&g_162[1],(void*)0,&g_162[1],&g_162[1]};
    const int32_t l_250 = 0xBB6F5C22L;
    uint8_t l_256 = 255UL;
    uint16_t *l_276[7];
    uint16_t **l_352 = &l_276[5];
    int32_t l_371 = 4L;
    uint8_t **l_397[7][5] = {{&g_396,&g_396,&g_396,&g_396,&g_396},{&g_396,&g_396,&g_396,&g_396,&g_396},{&g_396,&g_396,&g_396,&g_396,&g_396},{&g_396,(void*)0,(void*)0,&g_396,(void*)0},{&g_396,&g_396,&g_396,&g_396,&g_396},{(void*)0,&g_396,(void*)0,(void*)0,&g_396},{&g_396,&g_396,&g_396,&g_396,&g_396}};
    int64_t l_401 = 0x82069F27435C911FLL;
    int8_t l_406 = 0xBBL;
    int16_t l_413[2][10][7] = {{{(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)},{5L,0x3E84L,0x296EL,0x992FL,0x296EL,0x3E84L,5L},{1L,(-1L),1L,1L,(-1L),1L,1L},{5L,0x992FL,6L,0x992FL,5L,0x2ED0L,5L},{(-1L),1L,1L,(-1L),1L,1L,(-1L)},{6L,0x3E84L,6L,0x2ED0L,0x296EL,0x2ED0L,6L},{1L,1L,(-1L),1L,1L,(-1L),1L},{0x296EL,0x2ED0L,6L,0x3E84L,6L,0x2ED0L,0x296EL},{0L,1L,0L,0L,1L,0L,0L},{0x296EL,0x3E84L,5L,0x3E84L,0x296EL,0x992FL,0x296EL}},{{1L,0L,0L,1L,0L,0L,1L},{6L,0x3E84L,6L,0x2ED0L,0x296EL,0x2ED0L,6L},{1L,1L,(-1L),1L,1L,(-1L),1L},{0x296EL,0x2ED0L,6L,0x3E84L,6L,0x2ED0L,0x296EL},{0L,1L,0L,0L,1L,0L,0L},{0x296EL,0x3E84L,5L,0x3E84L,0x296EL,0x992FL,0x296EL},{1L,0L,0L,1L,0L,0L,1L},{6L,0x3E84L,6L,0x2ED0L,0x296EL,0x2ED0L,6L},{1L,1L,(-1L),1L,1L,(-1L),1L},{0x296EL,0x2ED0L,6L,0x3E84L,6L,0x2ED0L,0x296EL}}};
    const int32_t l_444 = 0xEDAFE432L;
    int64_t *l_514 = &g_117[1];
    struct S0 l_525 = {4294967293UL,202,0L};
    int16_t *****l_539 = &g_483;
    uint64_t *l_543 = &g_110;
    uint64_t **l_542 = &l_543;
    int32_t *l_581 = &g_144;
    uint8_t l_582 = 0UL;
    uint8_t l_605 = 248UL;
    uint32_t l_681 = 0x4814A270L;
    uint32_t l_682[2][8][6] = {{{0x0DE68BBEL,4294967295UL,0x0DE68BBEL,0x41313374L,0x8DA83E8EL,0UL},{0xBF591591L,0x41313374L,5UL,0xE8F58954L,0xA1CA5D67L,0xA1CA5D67L},{0xE8F58954L,0xA1CA5D67L,0xA1CA5D67L,0xE8F58954L,5UL,0x41313374L},{0xBF591591L,0UL,0x8DA83E8EL,0x41313374L,0x0DE68BBEL,4294967295UL},{0x0DE68BBEL,5UL,4294967290UL,5UL,0x0DE68BBEL,6UL},{4294967295UL,0UL,0UL,0x461FC064L,5UL,0x8DA83E8EL},{0x8DA83E8EL,0xA1CA5D67L,0UL,0UL,0xA1CA5D67L,0x8DA83E8EL},{0x461FC064L,0x41313374L,0UL,0x0DE68BBEL,0x8DA83E8EL,6UL}},{{0xA1CA5D67L,4294967295UL,4294967290UL,0x8DA83E8EL,4294967290UL,4294967295UL},{0xA1CA5D67L,6UL,0x8DA83E8EL,0x0DE68BBEL,0UL,0x41313374L},{0x461FC064L,0x8DA83E8EL,0xA1CA5D67L,0UL,0UL,0xA1CA5D67L},{0x8DA83E8EL,0x8DA83E8EL,5UL,0x461FC064L,0UL,0UL},{4294967295UL,6UL,0x0DE68BBEL,5UL,4294967290UL,5UL},{0x0DE68BBEL,4294967295UL,0x0DE68BBEL,0x41313374L,0x8DA83E8EL,0UL},{0xBF591591L,6UL,4294967295UL,0x8DA83E8EL,0xE8F58954L,0xE8F58954L},{0x8DA83E8EL,0xE8F58954L,0xE8F58954L,0x8DA83E8EL,4294967295UL,6UL}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_276[i] = &g_118;
    for (g_29 = 0; (g_29 == 29); g_29 = safe_add_func_uint16_t_u_u(g_29, 5))
    {
        int32_t *l_82[2][9] = {{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32,&g_32,&g_32,&g_32}};
        int32_t **l_83[10][3] = {{(void*)0,(void*)0,(void*)0},{&l_82[1][5],(void*)0,&l_82[1][5]},{(void*)0,(void*)0,(void*)0},{&l_82[1][5],(void*)0,&l_82[1][5]},{(void*)0,(void*)0,(void*)0},{&l_82[1][5],(void*)0,&l_82[1][5]},{(void*)0,(void*)0,(void*)0},{&l_82[1][5],(void*)0,&l_82[1][5]},{(void*)0,(void*)0,(void*)0},{&l_82[1][5],(void*)0,&l_82[1][5]}};
        int32_t l_89 = 0L;
        int32_t l_106 = 0xD1C1BBB8L;
        uint32_t *l_152 = &g_91[8];
        uint32_t **l_151 = &l_152;
        int16_t * const l_219 = &l_96;
        int i, j;
        g_84 = l_82[1][5];
        for (p_68 = 2; (p_68 >= 0); p_68 -= 1)
        {
            int32_t l_115 = (-1L);
            int32_t *l_119 = (void*)0;
            uint64_t *l_137[4];
            int32_t l_156[9] = {0x7D83A0D7L,0x7D83A0D7L,0x7D83A0D7L,0x7D83A0D7L,0x7D83A0D7L,0x7D83A0D7L,0x7D83A0D7L,0x7D83A0D7L,0x7D83A0D7L};
            uint16_t *l_220 = &g_118;
            int i;
            for (i = 0; i < 4; i++)
                l_137[i] = &g_110;
            for (p_69 = 0; (p_69 <= 1); p_69 += 1)
            {
                int64_t *l_85 = &g_86;
                uint32_t *l_90 = &g_91[8];
                int8_t *l_97 = (void*)0;
                int8_t *l_98 = &g_99;
                uint64_t *l_107 = (void*)0;
                uint64_t *l_108 = (void*)0;
                uint64_t *l_109 = &g_110;
                int64_t *l_116[9] = {&g_117[1],&g_117[1],&g_117[1],&g_117[1],&g_117[1],&g_117[1],&g_117[1],&g_117[1],&g_117[1]};
                int32_t l_138 = 0x63C109E6L;
                uint32_t *** const l_161[3][7][10] = {{{&l_151,&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151},{(void*)0,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151,&l_151},{&l_151,&l_151,&l_151,(void*)0,(void*)0,&l_151,&l_151,&l_151,&l_151,&l_151},{&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,(void*)0},{&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,(void*)0},{(void*)0,(void*)0,&l_151,&l_151,&l_151,(void*)0,&l_151,(void*)0,&l_151,&l_151},{&l_151,&l_151,&l_151,&l_151,(void*)0,(void*)0,&l_151,&l_151,&l_151,&l_151}},{{&l_151,&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151},{(void*)0,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151,&l_151},{&l_151,&l_151,&l_151,(void*)0,(void*)0,&l_151,&l_151,&l_151,&l_151,&l_151},{&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,(void*)0},{&l_151,&l_151,(void*)0,&l_151,(void*)0,&l_151,&l_151,&l_151,(void*)0,&l_151},{&l_151,&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,&l_151,(void*)0},{&l_151,&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151}},{{&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,(void*)0},{&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,&l_151},{&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,(void*)0},{&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151},{&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,(void*)0,&l_151},{&l_151,&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,&l_151,(void*)0},{&l_151,&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151}}};
                int i, j, k;
            }
            l_197 = (p_68 | (((((((((*l_220) |= (safe_add_func_uint8_t_u_u(((void*)0 != l_219), g_4))) == 0x05C0L) , (safe_rshift_func_uint16_t_u_s((((void*)0 == &g_163) < ((safe_lshift_func_uint8_t_u_s(g_120[3][0], (((*l_152) = (((safe_lshift_func_int8_t_s_s(g_28[6], 6)) >= 7L) < 0L)) != l_197))) && g_28[9])), 15))) != l_197) , 1UL) && l_197) < g_141) , l_115));
            g_230--;
        }
        l_121 |= 0x926D7F8DL;
    }
    return (*l_581);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_28[i], "g_28[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_91[i], "g_91[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_117[i], "g_117[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_120[i][j], "g_120[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_448[i][j][k].f0, "g_448[i][j][k].f0", print_hash_value);
                transparent_crc(g_448[i][j][k].f1, "g_448[i][j][k].f1", print_hash_value);
                transparent_crc(g_448[i][j][k].f2, "g_448[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_526[i][j], "g_526[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_652[i][j], "g_652[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_701[i], "g_701[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_704, "g_704", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_717, "g_717", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_718[i][j], "g_718[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1047.f0, "g_1047.f0", print_hash_value);
    transparent_crc(g_1047.f1, "g_1047.f1", print_hash_value);
    transparent_crc(g_1047.f2, "g_1047.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1067[i][j], "g_1067[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1102, "g_1102", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1175[i][j][k], "g_1175[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1294.f0, "g_1294.f0", print_hash_value);
    transparent_crc(g_1294.f1, "g_1294.f1", print_hash_value);
    transparent_crc(g_1294.f2, "g_1294.f2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1313[i], "g_1313[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1314, "g_1314", print_hash_value);
    transparent_crc(g_1340, "g_1340", print_hash_value);
    transparent_crc(g_1474, "g_1474", print_hash_value);
    transparent_crc(g_1528, "g_1528", print_hash_value);
    transparent_crc(g_1799, "g_1799", print_hash_value);
    transparent_crc(g_1809, "g_1809", print_hash_value);
    transparent_crc(g_1994, "g_1994", print_hash_value);
    transparent_crc(g_2057, "g_2057", print_hash_value);
    transparent_crc(g_2060, "g_2060", print_hash_value);
    transparent_crc(g_2193, "g_2193", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2721[i][j][k], "g_2721[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2722, "g_2722", print_hash_value);
    transparent_crc(g_2942, "g_2942", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_3128[i], "g_3128[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3157, "g_3157", print_hash_value);
    transparent_crc(g_3264, "g_3264", print_hash_value);
    transparent_crc(g_3515, "g_3515", print_hash_value);
    transparent_crc(g_3552, "g_3552", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_3785[i][j], "g_3785[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3886, "g_3886", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_3890[i], "g_3890[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3963, "g_3963", print_hash_value);
    transparent_crc(g_4059, "g_4059", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
