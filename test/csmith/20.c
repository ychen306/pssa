// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 99857535
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



static int64_t g_25 = 0x49AAED6B65720B96LL;
static int32_t g_36 = 0L;
static int32_t * const g_35 = &g_36;
static uint64_t g_79 = 0UL;
static int32_t g_84 = 0x0F898D4EL;
static int16_t g_104 = 1L;
static uint16_t *g_113 = (void*)0;
static const uint16_t g_115[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
static const uint16_t *g_114 = &g_115[3];
static uint64_t g_119 = 0x90E41E6F706C0A8DLL;
static uint64_t g_124 = 0x5C5CB2EA73719801LL;
static uint16_t g_126 = 0x0B5CL;
static int32_t g_153 = 0xD5450317L;
static uint8_t g_155 = 255UL;
static uint32_t g_159 = 0x0FD05F77L;
static int16_t g_160 = 0xC57EL;
static int32_t g_161 = 0xB997ADCAL;
static int64_t **g_168 = (void*)0;
static uint8_t *g_183[9][2] = {{&g_155,&g_155},{&g_155,(void*)0},{&g_155,&g_155},{(void*)0,&g_155},{(void*)0,&g_155},{&g_155,(void*)0},{&g_155,&g_155},{&g_155,&g_155},{&g_155,&g_155}};
static uint8_t ** const g_182 = &g_183[8][1];
static int8_t g_201 = 0xC8L;
static int8_t g_221 = 0x56L;
static uint32_t g_225 = 0xC1F0966BL;
static int64_t g_265 = 0L;
static int64_t g_266 = 0xFFDCFAA0CEB8E079LL;
static int32_t g_267 = 0xF9DA3947L;
static uint32_t g_273 = 0UL;
static int32_t g_278[3] = {0xDB3C9B64L,0xDB3C9B64L,0xDB3C9B64L};
static int32_t *g_277 = &g_278[0];
static uint8_t g_336[1] = {255UL};
static const uint32_t g_341 = 0xEAB3DE26L;
static uint8_t g_477 = 0x0FL;
static int16_t *g_527 = &g_104;
static int16_t **g_526 = &g_527;
static uint32_t g_565 = 0x91FE4328L;
static uint32_t *g_564 = &g_565;
static uint32_t **g_563 = &g_564;
static int64_t g_663 = 0L;
static uint8_t ***g_672[6][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
static uint64_t *g_728 = (void*)0;
static uint64_t **g_727 = &g_728;
static int64_t *g_786 = &g_25;
static int64_t ***g_925 = &g_168;
static int64_t ****g_924 = &g_925;
static int64_t *****g_923 = &g_924;
static int64_t ***g_931 = &g_168;
static int64_t **** const g_930 = &g_931;
static int64_t **** const *g_929[10][5] = {{&g_930,&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930,&g_930,&g_930}};
static uint32_t g_973 = 1UL;
static uint32_t * const *g_991[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static uint32_t * const **g_990 = &g_991[0][2];
static uint32_t * const ***g_989[6][8] = {{&g_990,&g_990,&g_990,&g_990,&g_990,&g_990,&g_990,&g_990},{&g_990,&g_990,&g_990,&g_990,&g_990,&g_990,&g_990,&g_990},{&g_990,&g_990,&g_990,&g_990,&g_990,&g_990,&g_990,&g_990},{&g_990,&g_990,&g_990,&g_990,&g_990,&g_990,&g_990,&g_990},{&g_990,&g_990,&g_990,&g_990,&g_990,&g_990,&g_990,&g_990},{&g_990,&g_990,&g_990,&g_990,&g_990,&g_990,&g_990,&g_990}};
static int8_t *g_999[6][2][8] = {{{(void*)0,&g_201,&g_221,&g_201,&g_201,&g_201,&g_221,&g_201},{&g_221,&g_201,&g_221,&g_201,&g_201,&g_221,&g_201,&g_221}},{{(void*)0,&g_221,(void*)0,&g_201,&g_201,&g_201,&g_221,&g_221},{&g_221,(void*)0,&g_201,&g_201,&g_201,&g_201,&g_201,(void*)0}},{{&g_201,&g_221,&g_221,(void*)0,(void*)0,&g_221,&g_201,&g_201},{(void*)0,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201}},{{&g_201,&g_201,&g_221,&g_221,&g_201,(void*)0,&g_201,&g_221},{&g_201,(void*)0,&g_201,&g_221,&g_221,&g_201,&g_221,&g_221}},{{(void*)0,&g_221,(void*)0,&g_221,&g_221,(void*)0,&g_201,&g_201},{(void*)0,(void*)0,&g_221,&g_201,&g_201,&g_221,&g_221,&g_201}},{{&g_201,&g_201,&g_201,&g_201,&g_221,&g_221,&g_221,&g_201},{&g_221,&g_201,&g_221,(void*)0,&g_201,&g_201,&g_201,&g_201}}};
static int8_t **g_998 = &g_999[5][0][4];
static uint64_t ** const *g_1137 = &g_727;
static uint64_t ** const **g_1136 = &g_1137;
static uint16_t **g_1177[8] = {&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113,&g_113};
static uint16_t **g_1180 = (void*)0;
static uint16_t ***g_1185 = (void*)0;
static uint16_t **g_1193 = &g_113;



static uint16_t func_1(void);
static uint8_t func_4(int8_t p_5, uint32_t p_6, uint16_t p_7, int16_t p_8, int16_t p_9);
static uint16_t func_10(int32_t p_11, uint16_t p_12, uint32_t p_13, uint64_t p_14, int64_t p_15);
static uint8_t func_20(int8_t p_21, uint32_t p_22);
static int32_t * func_27(int32_t * p_28);
static int32_t * func_29(int32_t * const p_30, int32_t * p_31, uint8_t p_32, int32_t * p_33, uint16_t p_34);
static int32_t * func_37(uint16_t p_38, int8_t p_39, const int32_t p_40, uint32_t p_41);
static int8_t func_42(int32_t * p_43, int32_t * p_44, int32_t p_45, int64_t p_46, int32_t * p_47);
static uint8_t func_49(int32_t * p_50, int32_t p_51, int32_t * p_52);
static int32_t * func_53(uint32_t p_54, uint32_t p_55, int32_t p_56, uint32_t p_57);
# 98 "<stdin>"
static uint16_t func_1(void)
{
    int64_t l_26 = 0x6FE23A266D210EC3LL;
    int32_t l_1325 = 0L;
    int32_t l_1326[1];
    int i;
    for (i = 0; i < 1; i++)
        l_1326[i] = 0x720972D9L;
    l_1325 ^= (safe_lshift_func_uint8_t_u_s(func_4((func_10((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(func_20((safe_mul_func_int8_t_s_s(g_25, l_26)), l_26), (((safe_mul_func_int8_t_s_s(0x47L, 0x10L)) != l_26) >= (0L && (-3L))))), 14)), l_26, g_161, l_26, l_26) > l_26), l_26, g_336[0], l_26, l_26), l_26));
    return l_1326[0];
}







static uint8_t func_4(int8_t p_5, uint32_t p_6, uint16_t p_7, int16_t p_8, int16_t p_9)
{
    uint32_t ***l_1305 = &g_563;
    uint32_t ****l_1304 = &l_1305;
    int32_t l_1310 = 2L;
    uint32_t *l_1321 = &g_273;
    int16_t *l_1322 = &g_160;
    uint32_t l_1323 = 1UL;
    int32_t l_1324 = 0xF1992931L;
    l_1324 &= (safe_div_func_uint8_t_u_u((((*l_1322) &= ((safe_add_func_int32_t_s_s(((void*)0 == l_1304), (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((p_9 || l_1310) > 0x9B28B09F29E30197LL) == (safe_mul_func_int16_t_s_s(((((safe_div_func_int16_t_s_s((**g_526), (p_7 || (safe_add_func_uint16_t_u_u(((p_6 ^ (safe_add_func_int16_t_s_s((((*l_1321) |= ((safe_mul_func_int16_t_s_s(p_5, (*g_527))) < l_1310)) != g_267), l_1310))) && p_9), 0UL))))) , p_7) , l_1310) < (*g_277)), p_8))), l_1310)), (-9L))))) , (**g_526))) | l_1310), l_1323));
    return p_7;
}







static uint16_t func_10(int32_t p_11, uint16_t p_12, uint32_t p_13, uint64_t p_14, int64_t p_15)
{
    uint8_t l_1168 = 0x1EL;
    uint16_t **l_1178 = &g_113;
    uint16_t **l_1179 = &g_113;
    uint32_t l_1209 = 0x5C807E60L;
    int32_t l_1221[4][2][8] = {{{0xD9C88410L,(-1L),0xD9C88410L,1L,(-1L),0x97405A67L,(-1L),0L},{9L,1L,7L,0x2CCC407FL,(-1L),0x014FE031L,(-1L),7L}},{{9L,(-1L),1L,(-1L),(-1L),9L,9L,(-1L)},{0xD9C88410L,0x34AB3E0CL,0x34AB3E0CL,0xD9C88410L,(-1L),0L,1L,1L}},{{1L,(-10L),(-1L),7L,0x46B5E5E4L,1L,0x357F10C6L,(-1L)},{6L,(-10L),0xD9C88410L,1L,0x2CCC407FL,0L,(-10L),0L}},{{(-1L),0x34AB3E0CL,0L,0x34AB3E0CL,(-1L),9L,0x2CCC407FL,0L},{(-8L),(-1L),(-1L),(-1L),1L,0x014FE031L,9L,0x34AB3E0CL}}};
    int32_t l_1241 = 1L;
    uint8_t **l_1248 = (void*)0;
    uint32_t *l_1252 = &g_225;
    int8_t **l_1282 = &g_999[4][1][5];
    int8_t ***l_1283 = &g_998;
    int32_t l_1287 = (-8L);
    uint16_t *l_1288 = &g_126;
    uint8_t l_1299 = 0xC3L;
    int i, j, k;
    for (g_161 = (-17); (g_161 >= 27); ++g_161)
    {
        int32_t *l_1167[1];
        uint16_t **l_1176 = (void*)0;
        uint16_t ***l_1175[4] = {&l_1176,&l_1176,&l_1176,&l_1176};
        uint16_t ****l_1186 = &g_1185;
        int64_t **l_1258 = &g_786;
        int32_t * const l_1274 = &g_153;
        int32_t * const *l_1273[10][9] = {{&l_1274,(void*)0,(void*)0,(void*)0,&l_1274,&l_1274,(void*)0,&l_1274,&l_1274},{&l_1274,(void*)0,(void*)0,&l_1274,(void*)0,&l_1274,(void*)0,&l_1274,(void*)0},{&l_1274,&l_1274,&l_1274,&l_1274,(void*)0,&l_1274,&l_1274,(void*)0,(void*)0},{&l_1274,(void*)0,&l_1274,&l_1274,&l_1274,&l_1274,(void*)0,&l_1274,&l_1274},{&l_1274,(void*)0,&l_1274,&l_1274,&l_1274,&l_1274,(void*)0,(void*)0,&l_1274},{&l_1274,&l_1274,(void*)0,&l_1274,&l_1274,(void*)0,&l_1274,&l_1274,&l_1274},{(void*)0,&l_1274,(void*)0,&l_1274,&l_1274,&l_1274,&l_1274,&l_1274,(void*)0},{&l_1274,&l_1274,&l_1274,&l_1274,&l_1274,(void*)0,&l_1274,&l_1274,(void*)0},{&l_1274,&l_1274,&l_1274,(void*)0,(void*)0,&l_1274,&l_1274,&l_1274,&l_1274},{&l_1274,&l_1274,&l_1274,&l_1274,(void*)0,&l_1274,&l_1274,&l_1274,&l_1274}};
        int32_t * const ** const l_1272[8] = {&l_1273[6][2],&l_1273[6][2],&l_1273[6][2],&l_1273[6][2],&l_1273[6][2],&l_1273[6][2],&l_1273[6][2],&l_1273[6][2]};
        uint32_t l_1278 = 0x9D1381DFL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1167[i] = &g_278[0];
        ++l_1168;
        (*g_35) = ((safe_add_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((0x100BB3976B1A68DBLL > (0xA094L < ((((l_1178 = (g_1177[0] = &g_113)) != (g_1180 = l_1179)) ^ (safe_add_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((p_11 | 1L) | (((*l_1186) = g_1185) == (((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_1168 != ((safe_sub_func_uint8_t_u_u(((g_1193 = (void*)0) == (void*)0), p_14)) < l_1168)), p_12)), p_15)) && p_14) , &g_1193))), 0xCDL)), 1L))) >= 1L))), (-5L))), 0x8A2C3EDAL)) , p_12);
        for (l_1168 = 0; (l_1168 != 31); ++l_1168)
        {
            uint32_t **l_1204 = &g_564;
            int32_t l_1222 = (-1L);
            int32_t *l_1271 = &g_278[2];
            uint64_t l_1281 = 0x014104DC5837BB45LL;
        }
    }
    l_1221[3][0][4] = ((l_1282 != ((*l_1283) = l_1282)) && (safe_sub_func_uint64_t_u_u((~((p_12 || l_1221[2][1][7]) & 0xF1FAF95B3AA5C18ALL)), ((++(*l_1288)) <= (safe_div_func_int32_t_s_s((+(l_1287 = (l_1241 = (((+((safe_unary_minus_func_uint16_t_u(l_1209)) <= (0xE2A45233L | ((l_1221[3][1][7] ^ (+(safe_add_func_uint32_t_u_u((l_1287 || (-1L)), l_1221[3][0][2])))) , (*g_277))))) != 0x6855476BF7CE4C3CLL) != l_1299)))), p_11))))));
    return l_1221[1][1][5];
}







static uint8_t func_20(int8_t p_21, uint32_t p_22)
{
    int32_t *l_48 = (void*)0;
    int32_t l_276 = (-10L);
    int32_t **l_883 = (void*)0;
    int32_t **l_884 = &g_277;
    int32_t *l_893 = &g_278[0];
    int64_t ***l_928[9] = {&g_168,(void*)0,&g_168,&g_168,(void*)0,&g_168,&g_168,(void*)0,&g_168};
    int64_t **** const l_927 = &l_928[4];
    int64_t **** const *l_926 = &l_927;
    int8_t *l_938[2][5][5] = {{{&g_201,&g_221,&g_221,&g_221,&g_221},{&g_201,&g_221,&g_201,&g_201,&g_221},{&g_201,&g_221,&g_221,&g_221,&g_201},{&g_201,&g_221,&g_221,&g_221,&g_221},{&g_201,(void*)0,(void*)0,&g_201,&g_221}},{{&g_201,&g_201,&g_221,&g_221,&g_221},{&g_201,&g_201,&g_201,&g_221,&g_201},{&g_221,&g_221,&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221,&g_201,&g_221},{&g_201,&g_201,&g_221,&g_221,&g_201}}};
    int32_t l_953 = (-3L);
    int32_t l_955 = 0xFB431B87L;
    int32_t l_957 = 0xF1AA8308L;
    int32_t l_960 = (-6L);
    uint64_t l_961 = 0x5E40277D01CE173DLL;
    uint32_t l_995[5][3][7] = {{{0x53F76533L,0UL,0UL,0x53F76533L,4294967286UL,0UL,0x98D80510L},{1UL,0xC32DC7EDL,1UL,0xEB99773BL,0x997317D4L,0xEB99773BL,1UL},{0x53F76533L,0x53F76533L,0x8D22D74EL,0x98D80510L,0x53F76533L,0UL,0x98D80510L}},{{8UL,0xEB99773BL,0xD2854488L,0xC32DC7EDL,0xD2854488L,0xEB99773BL,8UL},{4294967286UL,0x98D80510L,0UL,4294967286UL,0x53F76533L,0UL,0UL},{0x997317D4L,0xC32DC7EDL,0x3B66FAD4L,0xC32DC7EDL,0x997317D4L,4294967292UL,0x997317D4L}},{{0x53F76533L,4294967286UL,0UL,0x98D80510L,4294967286UL,4294967286UL,0x98D80510L},{0xD2854488L,0xC32DC7EDL,0xD2854488L,0xEB99773BL,8UL,0xEB99773BL,0xD2854488L},{0x53F76533L,0x98D80510L,0x8D22D74EL,0x53F76533L,0x53F76533L,0x8D22D74EL,0x98D80510L}},{{0x997317D4L,0xEB99773BL,1UL,0xC32DC7EDL,1UL,0xEB99773BL,0x997317D4L},{4294967286UL,0x53F76533L,0UL,0UL,0x53F76533L,4294967286UL,0UL},{8UL,0xC32DC7EDL,8UL,0xC32DC7EDL,8UL,4294967292UL,8UL}},{{0x53F76533L,0UL,0UL,0x53F76533L,4294967286UL,0UL,0x98D80510L},{1UL,0xC32DC7EDL,1UL,0xEB99773BL,0x997317D4L,0xEB99773BL,1UL},{0x53F76533L,0x53F76533L,0x8D22D74EL,0x98D80510L,0x53F76533L,0UL,0x98D80510L}}};
    int32_t l_1042 = 1L;
    int32_t l_1043[4][5] = {{1L,2L,1L,2L,1L},{0x270D13C4L,0x270D13C4L,(-8L),(-8L),0x270D13C4L},{0x86008E83L,2L,0x86008E83L,2L,0x86008E83L},{0x270D13C4L,(-8L),(-8L),0x270D13C4L,0x270D13C4L}};
    const uint64_t *l_1058 = &l_961;
    const uint64_t ** const l_1057[6][4][2] = {{{&l_1058,&l_1058},{(void*)0,(void*)0},{&l_1058,(void*)0},{(void*)0,&l_1058}},{{&l_1058,&l_1058},{(void*)0,(void*)0},{&l_1058,(void*)0},{(void*)0,&l_1058}},{{&l_1058,&l_1058},{(void*)0,(void*)0},{&l_1058,(void*)0},{(void*)0,&l_1058}},{{&l_1058,&l_1058},{(void*)0,(void*)0},{&l_1058,(void*)0},{(void*)0,&l_1058}},{{&l_1058,&l_1058},{(void*)0,(void*)0},{&l_1058,(void*)0},{(void*)0,&l_1058}},{{&l_1058,&l_1058},{(void*)0,(void*)0},{&l_1058,(void*)0},{(void*)0,&l_1058}}};
    const uint64_t ** const *l_1056 = &l_1057[0][3][0];
    const uint64_t ** const **l_1055[3][3] = {{&l_1056,&l_1056,&l_1056},{(void*)0,(void*)0,(void*)0},{&l_1056,&l_1056,&l_1056}};
    uint32_t l_1086 = 0UL;
    uint16_t l_1099 = 7UL;
    uint8_t l_1161 = 255UL;
    int i, j, k;
    (*l_884) = func_27((g_25 , func_29(g_35, func_37(((func_42(l_48, l_48, (((p_22 > func_49(func_53((((+(((safe_mul_func_int8_t_s_s(((void*)0 != l_48), g_25)) & ((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((((((((((p_21 > p_22) & p_21) < g_25) || (-1L)) , 0xB1C2L) ^ p_22) >= p_22) == g_25) && g_25), g_25)), p_21)) ^ 0xBA10F40BF68D270CLL)) | 0xD4L)) < p_21) , g_25), g_25, p_22, p_22), l_276, g_277)) < (-10L)) != g_278[1]), p_21, &g_278[0]) ^ 7L) , 65529UL), g_153, p_22, p_21), l_276, &l_276, p_22)));
lbl_892:
    for (g_477 = 0; (g_477 >= 18); ++g_477)
    {
        int32_t *l_887 = &g_278[0];
        int32_t *l_888[1];
        uint8_t l_889 = 0xC1L;
        int i;
        for (i = 0; i < 1; i++)
            l_888[i] = &g_36;
        --l_889;
        if (g_273)
            goto lbl_892;
    }
    (*l_884) = l_893;
    for (g_201 = 0; (g_201 >= 27); g_201 = safe_add_func_uint8_t_u_u(g_201, 9))
    {
        int32_t *l_911 = &g_153;
        int32_t l_940[10];
        uint32_t * const **l_969 = (void*)0;
        int32_t l_1014 = 5L;
        uint8_t **l_1018 = &g_183[8][1];
        uint8_t ****l_1067 = &g_672[2][0];
        int32_t l_1091 = 0x3749E5DBL;
        int64_t l_1121 = 0xDF0161959584F17BLL;
        uint32_t l_1159 = 0x05FF6E9FL;
        int32_t l_1162 = 0x6DC7537DL;
        int i;
        for (i = 0; i < 10; i++)
            l_940[i] = (-5L);
        if ((~p_21))
        {
            uint64_t l_906[7][1][2];
            int32_t *l_951[5][2];
            uint8_t **l_1017 = &g_183[2][0];
            uint8_t **l_1020 = &g_183[5][0];
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_906[i][j][k] = 0x81C6552848B5F48FLL;
                }
            }
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 2; j++)
                    l_951[i][j] = &l_276;
            }
            for (g_273 = 3; (g_273 >= 4); g_273 = safe_add_func_int64_t_s_s(g_273, 4))
            {
                uint32_t l_935 = 0x33CC4723L;
                uint16_t l_952 = 0UL;
                int32_t l_954 = 6L;
                int32_t l_956 = 7L;
                int32_t l_958 = (-7L);
                int32_t l_959[3];
                uint32_t * const l_972 = &g_973;
                uint32_t * const *l_971 = &l_972;
                uint32_t * const **l_970 = &l_971;
                int i;
                for (i = 0; i < 3; i++)
                    l_959[i] = 0xE8FF381CL;
                for (g_36 = 18; (g_36 <= (-16)); g_36 = safe_sub_func_int16_t_s_s(g_36, 4))
                {
                    int32_t *l_912[10][3][7] = {{{&g_153,&g_153,(void*)0,(void*)0,&g_153,&g_153,(void*)0},{&g_161,&g_153,(void*)0,&g_84,&g_267,&g_84,(void*)0},{&g_153,&g_161,(void*)0,&g_267,&g_153,&g_161,&g_161}},{{&g_153,&g_153,(void*)0,&g_153,&g_153,(void*)0,&g_267},{&g_267,&g_153,&g_267,(void*)0,&g_153,&g_267,(void*)0},{(void*)0,&g_153,(void*)0,(void*)0,&g_267,&g_153,&g_267}},{{&g_267,(void*)0,(void*)0,&g_267,&g_153,&g_267,(void*)0},{&g_153,(void*)0,&g_267,(void*)0,&g_267,(void*)0,&g_153},{&g_153,&g_153,(void*)0,(void*)0,&g_153,&g_153,(void*)0}},{{&g_161,&g_153,&g_161,&g_153,(void*)0,&g_84,&g_267},{&g_153,(void*)0,(void*)0,&g_267,&g_153,(void*)0,(void*)0},{&g_84,&g_153,&g_267,&g_84,&g_84,&g_84,&g_267}},{{&g_153,&g_153,(void*)0,(void*)0,&g_153,&g_153,&g_161},{&g_84,&g_153,(void*)0,&g_153,&g_84,(void*)0,(void*)0},{&g_267,(void*)0,&g_267,&g_153,&g_153,&g_267,(void*)0}},{{&g_267,&g_153,(void*)0,(void*)0,&g_84,&g_153,&g_84},{&g_267,&g_153,(void*)0,&g_267,&g_153,&g_267,(void*)0},{&g_84,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_84}},{{&g_153,(void*)0,(void*)0,&g_153,&g_153,&g_161,(void*)0},{&g_84,&g_153,&g_84,&g_153,&g_267,&g_84,&g_153},{&g_267,&g_153,(void*)0,(void*)0,&g_153,&g_267,&g_161}},{{(void*)0,&g_84,&g_161,(void*)0,&g_84,(void*)0,&g_161},{&g_153,(void*)0,&g_267,&g_153,&g_267,(void*)0,(void*)0},{&g_267,&g_84,&g_84,&g_84,&g_267,&g_153,&g_84}},{{&g_267,&g_153,(void*)0,&g_267,&g_267,&g_267,&g_161},{&g_161,(void*)0,&g_267,&g_153,&g_84,&g_84,&g_84},{&g_267,&g_267,&g_267,&g_267,&g_153,(void*)0,&g_267}},{{&g_267,&g_153,&g_84,&g_153,&g_84,&g_153,&g_267},{&g_153,&g_267,(void*)0,&g_267,&g_153,&g_153,&g_267},{(void*)0,(void*)0,(void*)0,&g_84,&g_161,(void*)0,&g_84}}};
                    uint64_t ***l_934 = &g_727;
                    int32_t l_950[4][7][3] = {{{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)}},{{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)}},{{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)}},{{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)},{0x38EFAA17L,0x38EFAA17L,(-1L)}}};
                    int i, j, k;
                }
                for (l_955 = 1; (l_955 >= 0); l_955 -= 1)
                {
                    uint32_t * const ***l_974 = &l_969;
                    uint8_t **l_978 = (void*)0;
                    uint8_t ***l_977 = &l_978;
                    uint32_t * const ****l_992 = &g_989[4][4];
                    l_940[5] = ((*g_35) = (((l_958 = (safe_mul_func_uint8_t_u_u(l_940[8], (safe_div_func_uint32_t_u_u(((+(((*l_974) = (l_970 = l_969)) != &g_563)) , (safe_add_func_int8_t_s_s((((l_977 != (void*)0) > (safe_mul_func_int16_t_s_s((*g_527), 0x96B9L))) != p_22), (((((**l_884) = ((safe_div_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((*l_992) = g_989[4][4]) == &g_990), 255UL)), 4L)), p_22)) > p_22), g_159)) , p_21)) >= l_940[5]) | (*g_527)) && p_22)))), p_21))))) >= 0x48L) & p_22));
                }
                for (p_22 = (-27); (p_22 > 15); p_22 = safe_add_func_uint32_t_u_u(p_22, 4))
                {
                    if ((*g_277))
                        break;
                }
                if (p_22)
                    continue;
            }
            if (l_995[0][0][0])
            {
                if ((*g_35))
                    break;
            }
            else
            {
                uint8_t ***l_1019[5];
                int32_t l_1035 = 1L;
                int32_t l_1038 = 0xE6937CE0L;
                int32_t l_1039 = 0x200FF09AL;
                int32_t l_1040[4] = {(-1L),(-1L),(-1L),(-1L)};
                uint64_t *l_1049 = (void*)0;
                uint64_t *l_1050[8];
                int i;
                for (i = 0; i < 5; i++)
                    l_1019[i] = (void*)0;
                for (i = 0; i < 8; i++)
                    l_1050[i] = &g_79;
                for (g_36 = 0; (g_36 <= (-14)); g_36 = safe_sub_func_int8_t_s_s(g_36, 8))
                {
                    uint32_t l_1011 = 0x3DF14EBDL;
                    uint8_t *l_1012 = &g_155;
                    uint16_t *l_1013 = &g_126;
                    (*l_893) |= ((0x4878DBB5D0BD3731LL <= ((l_1014 = (((void*)0 != g_998) >= ((*l_1013) = (((((l_940[5] = (~((-4L) < (((safe_div_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(l_940[5], (safe_sub_func_int8_t_s_s(p_21, (((safe_sub_func_uint16_t_u_u(((((*l_1012) |= (p_21 <= (((p_22 < ((*g_527) > 1L)) >= l_1011) == (*g_114)))) | (-9L)) , p_21), p_21)) != 0x3F1FL) && 0x1384L))))) , p_21), p_21)) != p_22) < p_21)))) > (*g_114)) > l_1011) & p_21) >= 0xD2F9443ADC7B86FCLL)))) || (*g_35))) == l_1011);
                }
                if ((safe_add_func_uint64_t_u_u((l_1017 != (l_1020 = l_1018)), ((safe_rshift_func_uint8_t_u_u((((0x702CB861L > ((safe_div_func_int32_t_s_s((7UL == g_225), (safe_mod_func_int16_t_s_s((*g_527), p_21)))) > (l_1014 = (safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(0UL, ((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((g_115[3] <= (*g_277)) <= p_21), 11)), p_22)) != (*g_277)))), l_1035))))) , 0xA1EDL) & l_1035), 1)) < l_940[1]))))
                {
                    for (g_36 = 0; (g_36 <= 0); g_36 += 1)
                    {
                        int i;
                        return l_940[(g_36 + 4)];
                    }
                }
                else
                {
                    int64_t l_1036 = 0xE450C93D9C6634DALL;
                    int32_t l_1037 = (-8L);
                    int64_t l_1041[7][7] = {{(-10L),0x70CFBB6557EB3022LL,(-10L),8L,8L,(-10L),0x70CFBB6557EB3022LL},{(-7L),(-1L),0x4BDC300162E172A8LL,(-8L),8L,0x8311247259436FB6LL,8L},{(-10L),8L,8L,(-10L),0x70CFBB6557EB3022LL,(-10L),8L},{1L,(-1L),(-7L),(-8L),(-7L),(-1L),1L},{0xDC96E71F96131EB1LL,8L,(-1L),8L,8L,8L,(-10L)},{0x4BDC300162E172A8LL,(-1L),0x4BDC300162E172A8LL,(-5L),0L,(-8L),1L},{(-10L),0xDC96E71F96131EB1LL,0x70CFBB6557EB3022LL,0x70CFBB6557EB3022LL,0xDC96E71F96131EB1LL,(-10L),0xDC96E71F96131EB1LL}};
                    uint8_t l_1044 = 4UL;
                    int i, j;
                    ++l_1044;
                }
                (*l_893) = ((*g_35) = ((p_21 = ((safe_rshift_func_uint16_t_u_u((p_22 > ((((g_124 = 0x3B0D70FE7AA342B8LL) ^ 9L) , (((safe_mod_func_int32_t_s_s((*g_35), l_1014)) || ((((*g_277) == (-1L)) ^ g_267) , ((l_1014 = (-9L)) || 252UL))) , g_161)) , p_22)), p_21)) == 0x4394L)) || p_22));
                for (g_36 = 0; g_36 < 7; g_36 += 1)
                {
                    for (g_25 = 0; g_25 < 1; g_25 += 1)
                    {
                        for (g_266 = 0; g_266 < 2; g_266 += 1)
                        {
                            l_906[g_36][g_25][g_266] = 0x4378FF7A2DFE0764LL;
                        }
                    }
                }
            }
        }
        else
        {
            const uint64_t ** const ***l_1059 = &l_1055[1][2];
            int32_t l_1072 = 0xFA82FCB5L;
            uint32_t l_1077 = 5UL;
            int32_t l_1083 = 0x3A11DE80L;
            int32_t l_1084 = 0xB71D0778L;
            int32_t l_1085[3];
            int32_t **l_1141 = &l_893;
            int i;
            for (i = 0; i < 3; i++)
                l_1085[i] = 0x15D1CDD0L;
            (*l_1059) = ((safe_lshift_func_uint16_t_u_u((*g_114), p_21)) , l_1055[0][1]);
            if (l_940[5])
                break;
            for (g_104 = 3; (g_104 >= 0); g_104 -= 1)
            {
                int64_t **l_1060 = &g_786;
                int16_t *l_1073 = &g_160;
                int32_t l_1076 = 0L;
                int32_t *l_1080 = &l_957;
                int32_t *l_1081 = &g_278[0];
                int32_t *l_1082[10][2][3] = {{{&l_1043[2][0],&g_36,&l_1043[2][0]},{&g_36,&l_1072,&l_1076}},{{&l_1043[2][0],&l_940[0],(void*)0},{&g_36,&l_940[7],&g_36}},{{&l_1043[2][0],&l_1072,(void*)0},{&g_36,&l_1043[2][0],&g_278[1]}},{{&l_1043[2][0],&g_36,&l_1043[2][0]},{&g_36,&l_1072,&l_1076}},{{&l_1043[2][0],&l_940[0],(void*)0},{&g_36,&l_940[7],&g_36}},{{&l_1043[2][0],&l_1072,(void*)0},{&g_36,&l_1043[2][0],&g_278[1]}},{{&l_1043[2][0],&g_36,&l_1043[2][0]},{&g_36,&l_1072,&l_1076}},{{&l_1043[2][0],&l_940[0],(void*)0},{&g_36,&l_940[7],&g_36}},{{&l_1043[2][0],&l_1072,(void*)0},{&g_36,&l_1043[2][0],&g_278[1]}},{{&l_1043[2][0],&g_36,&l_1043[2][0]},{&g_36,&l_1072,&l_1076}}};
                uint32_t *l_1096 = (void*)0;
                uint32_t *l_1097 = &g_159;
                int i, j, k;
                if (l_1043[g_104][(g_104 + 1)])
                    break;
                if (((l_940[5] = (((void*)0 == l_1060) , ((safe_add_func_uint64_t_u_u(p_21, ((safe_mul_func_int8_t_s_s(l_1043[g_104][(g_104 + 1)], (safe_lshift_func_uint16_t_u_u(((((((l_1014 , (p_21 != ((l_1067 == (((((*l_1073) = (safe_mul_func_int16_t_s_s((*g_527), (l_1072 = (safe_rshift_func_int8_t_s_u(p_22, p_22)))))) && 1UL) <= p_21) , &g_672[5][1])) , 0x5947L))) < 6UL) || (**l_884)) , (void*)0) == l_1067) , p_21), l_1014)))) > 0x60L))) & 0x7907A6BF64484AD7LL))) && l_1043[g_104][(g_104 + 1)]))
                {
                    int32_t l_1074 = 0xFCBD6BFCL;
                    int32_t *l_1075[1][2][10] = {{{(void*)0,&g_36,&l_1072,&l_1072,&g_36,(void*)0,&l_1043[g_104][g_104],&g_36,&l_1043[g_104][g_104],(void*)0},{(void*)0,&g_36,&l_960,&g_36,(void*)0,&l_960,&l_960,&l_960,&l_960,(void*)0}}};
                    int i, j, k;
                    l_1077--;
                }
                else
                {
                    return l_1077;
                }
                l_1086--;
                if ((+(p_22 , (g_273 == (safe_unary_minus_func_uint8_t_u((((((*l_893) > (((*g_786) | l_1091) , ((void*)0 != &g_277))) == (**l_884)) == ((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((((*l_1097) = (**l_884)) ^ l_1091), 0x3541L)) < 4294967292UL), (*g_114))) > g_161)) && 1L)))))))
                {
                    for (g_79 = 0; (g_79 <= 3); g_79 += 1)
                    {
                        int i, j;
                        if (l_1043[g_79][g_79])
                            break;
                    }
                    for (l_955 = 2; (l_955 >= 0); l_955 -= 1)
                    {
                        return l_940[3];
                    }
                }
                else
                {
                    uint8_t ***l_1098 = &l_1018;
                    for (g_124 = 0; (g_124 <= 1); g_124 += 1)
                    {
                        int i;
                        g_278[(g_124 + 1)] = (*g_277);
                    }
                    (*g_277) &= ((void*)0 == l_1098);
                }
                for (l_957 = 0; (l_957 <= 1); l_957 += 1)
                {
                    uint32_t l_1119 = 4294967290UL;
                    int32_t l_1120 = 0x4015DAF2L;
                    int32_t l_1130 = 7L;
                    uint64_t ** const *l_1134[10] = {&g_727,&g_727,&g_727,&g_727,&g_727,&g_727,&g_727,&g_727,&g_727,&g_727};
                    uint64_t ** const **l_1133[10][1];
                    int32_t **l_1142 = &l_1082[3][0][2];
                    int32_t **l_1154 = &g_277;
                    int32_t ***l_1155 = &l_884;
                    uint16_t *l_1156 = &l_1099;
                    int32_t *l_1160 = &l_1043[3][4];
                    int i, j;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1133[i][j] = &l_1134[2];
                    }
                }
            }
            return l_1162;
        }
        if (l_940[5])
            break;
        (*g_35) |= (**l_884);
    }
    return p_22;
}







static int32_t * func_27(int32_t * p_28)
{
    uint64_t * const *l_880[9] = {&g_728,(void*)0,&g_728,&g_728,(void*)0,&g_728,&g_728,(void*)0,&g_728};
    uint64_t * const **l_879 = &l_880[1];
    uint64_t * const ***l_878[3][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_879,&l_879,&l_879,&l_879,&l_879,&l_879,&l_879},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint64_t * const ****l_881 = (void*)0;
    uint64_t * const ****l_882 = &l_878[0][3];
    int i, j;
    (*l_882) = l_878[2][5];
    return p_28;
}







static int32_t * func_29(int32_t * const p_30, int32_t * p_31, uint8_t p_32, int32_t * p_33, uint16_t p_34)
{
    return p_33;
}







static int32_t * func_37(uint16_t p_38, int8_t p_39, const int32_t p_40, uint32_t p_41)
{
    int32_t l_339 = 0xF6F7A06AL;
    const uint32_t *l_340 = &g_341;
    int32_t **l_342 = &g_277;
    int8_t *l_373 = &g_221;
    int32_t *l_386 = &g_278[0];
    int64_t l_404 = 0x516F006D62DF4F29LL;
    int16_t *l_423 = &g_160;
    uint8_t l_430 = 255UL;
    uint16_t **l_438 = &g_113;
    int64_t ***l_490[6][10][4] = {{{&g_168,&g_168,&g_168,(void*)0},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,(void*)0},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168}},{{&g_168,&g_168,&g_168,(void*)0},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,(void*)0},{&g_168,(void*)0,&g_168,&g_168},{&g_168,(void*)0,(void*)0,(void*)0},{&g_168,&g_168,(void*)0,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,(void*)0}},{{&g_168,(void*)0,&g_168,&g_168},{&g_168,(void*)0,(void*)0,(void*)0},{&g_168,&g_168,(void*)0,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,(void*)0},{&g_168,(void*)0,&g_168,&g_168},{&g_168,(void*)0,(void*)0,(void*)0},{&g_168,&g_168,(void*)0,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,(void*)0}},{{&g_168,(void*)0,&g_168,&g_168},{&g_168,(void*)0,(void*)0,(void*)0},{&g_168,&g_168,(void*)0,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,(void*)0},{&g_168,(void*)0,&g_168,&g_168},{&g_168,(void*)0,(void*)0,(void*)0},{&g_168,&g_168,(void*)0,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,(void*)0}},{{&g_168,(void*)0,&g_168,&g_168},{&g_168,(void*)0,(void*)0,(void*)0},{&g_168,&g_168,(void*)0,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,(void*)0},{&g_168,(void*)0,&g_168,&g_168},{&g_168,(void*)0,(void*)0,(void*)0},{&g_168,&g_168,(void*)0,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,(void*)0}},{{&g_168,(void*)0,&g_168,&g_168},{&g_168,(void*)0,(void*)0,(void*)0},{&g_168,&g_168,(void*)0,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,(void*)0},{&g_168,(void*)0,&g_168,&g_168},{&g_168,(void*)0,(void*)0,(void*)0},{&g_168,&g_168,(void*)0,&g_168},{&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,(void*)0}}};
    int32_t l_541 = 0x6BF4AED4L;
    int32_t l_543 = 0x8AFE621DL;
    int64_t l_547 = 0xCB2E0C9D0F213D79LL;
    int32_t l_550 = 0x2B88C82EL;
    int32_t l_551 = 0xB6173209L;
    int32_t l_553 = 0L;
    int32_t l_554 = 0x3DF0D187L;
    uint8_t l_555 = 254UL;
    int32_t l_590 = 0xE968B864L;
    uint32_t l_603 = 0x0E8A6C75L;
    int32_t l_627 = 0xE673C8E2L;
    int32_t l_628 = 0x2F1F72CBL;
    int32_t l_629 = 0xF98C6F8DL;
    int32_t l_630 = 1L;
    int32_t l_631[8][10][3] = {{{(-8L),(-1L),1L},{0xE390F51CL,1L,0xC61DAAADL},{0xC79D4347L,0x369F3CE1L,0xC79D4347L},{0L,0xCB8EF837L,0xC61DAAADL},{1L,(-10L),(-3L)},{(-3L),0xCB8EF837L,0x7FD3616AL},{(-3L),0x369F3CE1L,(-1L)},{(-3L),1L,(-3L)},{1L,0x68ACCB88L,(-1L)},{0L,0xE390F51CL,0x7FD3616AL}},{{0xC79D4347L,0x68ACCB88L,(-3L)},{0x7FD3616AL,1L,0xC61DAAADL},{0xC79D4347L,0x369F3CE1L,0xC79D4347L},{0L,0xCB8EF837L,0xC61DAAADL},{1L,(-10L),(-3L)},{(-3L),0xCB8EF837L,0x7FD3616AL},{(-3L),0x369F3CE1L,(-1L)},{(-3L),1L,(-3L)},{1L,0x68ACCB88L,(-1L)},{0L,0xE390F51CL,0x7FD3616AL}},{{0xC79D4347L,0x68ACCB88L,(-3L)},{0x7FD3616AL,1L,0xC61DAAADL},{0xC79D4347L,0x369F3CE1L,0xC79D4347L},{0L,0xCB8EF837L,0xC61DAAADL},{1L,(-10L),(-3L)},{(-3L),0xCB8EF837L,0x7FD3616AL},{(-3L),0x369F3CE1L,(-1L)},{(-3L),1L,(-3L)},{1L,0x68ACCB88L,(-1L)},{0L,0xE390F51CL,0x7FD3616AL}},{{0xC79D4347L,0x68ACCB88L,(-3L)},{0x7FD3616AL,1L,0xC61DAAADL},{0xC79D4347L,0x369F3CE1L,0xC79D4347L},{0L,0xCB8EF837L,0xC61DAAADL},{1L,(-10L),(-3L)},{(-3L),0xCB8EF837L,0x7FD3616AL},{(-3L),0x369F3CE1L,(-1L)},{(-3L),1L,(-3L)},{1L,0x68ACCB88L,(-1L)},{0L,0xE390F51CL,0x7FD3616AL}},{{0xC79D4347L,0x68ACCB88L,(-3L)},{0x7FD3616AL,1L,0xC61DAAADL},{0xC79D4347L,0x369F3CE1L,0xC79D4347L},{0L,0xCB8EF837L,0xC61DAAADL},{1L,(-10L),(-3L)},{(-3L),0xCB8EF837L,0x7FD3616AL},{(-3L),0x369F3CE1L,(-1L)},{(-3L),1L,(-3L)},{1L,0x68ACCB88L,(-1L)},{0L,0xE390F51CL,0x7FD3616AL}},{{0xC79D4347L,0x68ACCB88L,(-3L)},{0x7FD3616AL,1L,0xC61DAAADL},{0xC79D4347L,0x369F3CE1L,0xC79D4347L},{0L,0xCB8EF837L,0xC61DAAADL},{1L,(-10L),(-3L)},{(-3L),0xCB8EF837L,0x7FD3616AL},{(-3L),0x369F3CE1L,(-1L)},{(-3L),1L,(-3L)},{1L,0x68ACCB88L,(-1L)},{0L,0xE390F51CL,0x7FD3616AL}},{{0xC79D4347L,0x68ACCB88L,(-3L)},{0x7FD3616AL,1L,0xC61DAAADL},{0xC79D4347L,0x369F3CE1L,0xC79D4347L},{0L,0xCB8EF837L,0xC61DAAADL},{1L,(-10L),(-3L)},{(-4L),(-3L),(-6L)},{0xB334F2BFL,0x1A90566DL,0xE9AC904AL},{(-4L),0L,(-4L)},{0L,0L,0xE9AC904AL},{1L,0x7FD3616AL,(-6L)}},{{0xCCA1DE5EL,0L,0xB334F2BFL},{(-6L),0L,0x0E4C9A83L},{0xCCA1DE5EL,0x1A90566DL,0xCCA1DE5EL},{1L,(-3L),0x0E4C9A83L},{0L,1L,0xB334F2BFL},{(-4L),(-3L),(-6L)},{0xB334F2BFL,0x1A90566DL,0xE9AC904AL},{(-4L),0L,(-4L)},{0L,0L,0xE9AC904AL},{1L,0x7FD3616AL,(-6L)}}};
    uint64_t l_645 = 0x75C8675AC424181CLL;
    uint64_t *l_726 = &g_79;
    uint64_t **l_725 = &l_726;
    int8_t l_751 = 0x23L;
    int32_t l_777 = 0xA34DE02FL;
    int32_t *l_868 = (void*)0;
    int32_t *l_869 = &l_554;
    int32_t *l_870 = &g_36;
    int32_t *l_871 = &l_631[1][4][1];
    int32_t *l_872 = (void*)0;
    int32_t *l_873 = (void*)0;
    int32_t *l_874[6][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,&l_628,(void*)0},{(void*)0,(void*)0,&l_629,(void*)0,(void*)0,&l_554},{(void*)0,(void*)0,&l_554,&l_554,(void*)0,(void*)0},{(void*)0,(void*)0,&l_628,(void*)0,&l_628,(void*)0},{&l_628,(void*)0,&l_554,&l_629,&l_629,&l_554},{&l_628,&l_628,&l_629,(void*)0,&l_630,(void*)0}};
    uint32_t l_875[1][10][9] = {{{0x55DBFD00L,0x731D3C42L,0xABDBA09CL,0UL,0x5F13D91DL,0xB41FC0E0L,18446744073709551611UL,6UL,7UL},{0x1FA2C21CL,0x63D99403L,0xE5E8521DL,18446744073709551615UL,0xF87DB86DL,18446744073709551615UL,0xE5E8521DL,0x63D99403L,0x1FA2C21CL},{0x5F13D91DL,0x731D3C42L,0x6077E843L,6UL,18446744073709551611UL,18446744073709551607UL,18446744073709551615UL,0xABDBA09CL,18446744073709551615UL},{0xEB1CEA2EL,18446744073709551615UL,0UL,1UL,1UL,0UL,18446744073709551615UL,0xEB1CEA2EL,1UL},{0x5F13D91DL,18446744073709551611UL,18446744073709551615UL,0x1A3CC50BL,2UL,0x55DBFD00L,7UL,6UL,6UL},{0x1FA2C21CL,0xBB5E2326L,18446744073709551611UL,0xEB1CEA2EL,18446744073709551611UL,0xBB5E2326L,0x1FA2C21CL,0xFFD81225L,1UL},{0x55DBFD00L,0xABDBA09CL,18446744073709551613UL,0x731D3C42L,6UL,2UL,18446744073709551615UL,18446744073709551611UL,18446744073709551615UL},{0x63D99403L,0x3A17BF33L,8UL,8UL,0x3A17BF33L,0x63D99403L,1UL,0xFFD81225L,0x1FA2C21CL},{18446744073709551611UL,18446744073709551615UL,0x1A3CC50BL,2UL,0x55DBFD00L,7UL,6UL,6UL,7UL},{8UL,0xF87DB86DL,0x1FA2C21CL,0xF87DB86DL,8UL,18446744073709551611UL,1UL,0xEB1CEA2EL,18446744073709551615UL}}};
    int i, j, k;
    (*l_342) = ((l_339 >= (l_340 == (void*)0)) , &g_278[0]);
    (*g_35) = (*g_277);
    for (g_155 = 0; (g_155 > 1); g_155++)
    {
        uint8_t *l_346 = (void*)0;
        uint8_t **l_345 = &l_346;
        int32_t l_349 = (-2L);
        uint16_t *l_366 = &g_126;
        uint32_t *l_367 = (void*)0;
        uint32_t *l_368[7][7][4] = {{{&g_273,(void*)0,&g_273,&g_273},{&g_273,(void*)0,&g_273,&g_273},{&g_225,&g_273,(void*)0,(void*)0},{&g_273,(void*)0,(void*)0,(void*)0},{&g_225,&g_225,&g_273,&g_159},{(void*)0,(void*)0,&g_225,&g_273},{&g_225,&g_273,&g_159,&g_225}},{{&g_273,&g_273,(void*)0,&g_273},{&g_273,(void*)0,&g_273,&g_159},{&g_273,&g_273,&g_159,&g_273},{(void*)0,&g_273,&g_273,&g_273},{(void*)0,&g_159,&g_159,(void*)0},{&g_273,&g_273,&g_273,&g_159},{&g_273,&g_273,(void*)0,&g_159}},{{&g_273,&g_273,&g_159,&g_159},{&g_225,&g_273,&g_225,&g_159},{(void*)0,&g_273,&g_273,(void*)0},{&g_273,&g_159,&g_273,&g_273},{&g_159,&g_273,&g_273,&g_273},{&g_273,&g_273,&g_273,&g_159},{(void*)0,(void*)0,&g_225,&g_273}},{{&g_225,&g_273,&g_159,&g_225},{&g_273,&g_273,(void*)0,&g_273},{&g_273,(void*)0,&g_273,&g_159},{&g_273,&g_273,&g_159,&g_273},{(void*)0,&g_273,&g_273,&g_273},{(void*)0,&g_159,&g_159,(void*)0},{&g_273,&g_273,&g_273,&g_159}},{{&g_273,&g_273,(void*)0,&g_159},{&g_273,&g_273,&g_159,&g_159},{&g_225,&g_273,&g_225,&g_159},{(void*)0,&g_273,&g_273,(void*)0},{&g_273,&g_159,&g_273,&g_273},{&g_159,&g_273,&g_273,&g_273},{&g_273,&g_273,&g_273,&g_159}},{{(void*)0,(void*)0,&g_225,&g_273},{&g_225,&g_273,&g_159,&g_225},{&g_273,&g_273,(void*)0,&g_273},{&g_273,(void*)0,&g_273,&g_159},{&g_273,&g_273,&g_159,&g_273},{(void*)0,&g_273,&g_273,&g_273},{(void*)0,&g_159,&g_159,(void*)0}},{{&g_273,&g_273,&g_273,&g_159},{&g_273,&g_273,(void*)0,&g_159},{&g_273,&g_273,&g_159,&g_159},{&g_225,&g_273,&g_225,&g_159},{(void*)0,&g_273,&g_273,(void*)0},{&g_273,&g_159,&g_273,&g_273},{&g_159,&g_273,&g_273,&g_273}}};
        int8_t *l_369[3][8] = {{&g_221,&g_221,&g_201,(void*)0,&g_201,&g_221,&g_221,&g_201},{&g_201,&g_201,&g_201,&g_201,(void*)0,&g_201,&g_201,&g_201},{&g_201,&g_221,(void*)0,(void*)0,&g_221,&g_201,&g_221,(void*)0}};
        const int32_t l_384 = (-1L);
        uint16_t l_385 = 1UL;
        int64_t *l_392[4][8] = {{&g_265,&g_265,&g_25,&g_265,&g_265,&g_25,&g_265,&g_265},{&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265},{&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265,&g_265},{&g_265,&g_265,&g_25,&g_265,&g_265,&g_25,&g_265,&g_265}};
        int16_t *l_401[3];
        uint64_t l_452 = 0xF65F103191E1A1A6LL;
        uint8_t l_453 = 253UL;
        uint8_t l_485 = 0x21L;
        int32_t l_544 = (-7L);
        int32_t l_545 = 0x930829D9L;
        int32_t l_546 = 0L;
        int32_t l_548 = (-1L);
        int32_t l_549 = 0x54D5774EL;
        int32_t l_552[1][3][2] = {{{0x6539C225L,0x6539C225L},{0x6539C225L,0x6539C225L},{0x6539C225L,0x6539C225L}}};
        int64_t ****l_568 = (void*)0;
        uint8_t *l_599 = (void*)0;
        uint8_t *l_600 = &g_477;
        int8_t l_644 = 0L;
        uint64_t l_685 = 0x862A6D230580DB14LL;
        int64_t ***l_781 = &g_168;
        int16_t **l_782 = &l_401[2];
        int32_t l_829[6][8][4] = {{{1L,0xFB050829L,0x907CCD96L,0x0C9CC08EL},{0x9BDAC795L,1L,0x4CE09697L,0xEC2851EEL},{0xE504D0E6L,0x978B0D3EL,0xE504D0E6L,0xFB050829L},{0xEC2851EEL,1L,1L,1L},{0xABB86BD5L,1L,0L,1L},{0x1DF179EDL,1L,0L,0x907CCD96L},{0xABB86BD5L,0L,1L,7L},{0xEC2851EEL,0xFC9C4707L,0xE504D0E6L,0xABB86BD5L}},{{0xE504D0E6L,0xABB86BD5L,0x4CE09697L,0x6330B05CL},{0x9BDAC795L,0x907CCD96L,0x907CCD96L,0x9BDAC795L},{1L,(-3L),0xEC2851EEL,(-1L)},{0x6E735C04L,0x4CE09697L,0x9BDAC795L,0xFC9C4707L},{1L,0x9764063CL,0xABB86BD5L,0xFC9C4707L},{0L,0x4CE09697L,(-1L),(-1L)},{0x907CCD96L,(-3L),0L,0x9BDAC795L},{0xFB050829L,0x907CCD96L,0x0C9CC08EL,0x6330B05CL}},{{1L,0xABB86BD5L,1L,0xABB86BD5L},{0L,0xFC9C4707L,0x9764063CL,7L},{1L,0L,7L,0x907CCD96L},{0x6330B05CL,1L,0xFC9C4707L,1L},{0x6330B05CL,1L,7L,1L},{1L,1L,0x9764063CL,0xFB050829L},{0L,0x978B0D3EL,1L,0xEC2851EEL},{1L,1L,0x0C9CC08EL,0x0C9CC08EL}},{{0xFB050829L,0xFB050829L,0L,0L},{0x907CCD96L,0xE504D0E6L,(-1L),(-3L)},{0L,0x6E735C04L,0xABB86BD5L,(-1L)},{1L,0x6E735C04L,0x9BDAC795L,(-3L)},{0x6E735C04L,0xE504D0E6L,0xEC2851EEL,0L},{1L,0xFB050829L,0x907CCD96L,0x0C9CC08EL},{0x9BDAC795L,1L,0x4CE09697L,0xEC2851EEL},{0xE504D0E6L,0x978B0D3EL,0xE504D0E6L,0xFB050829L}},{{0xEC2851EEL,1L,1L,1L},{0xABB86BD5L,1L,0L,1L},{0x1DF179EDL,1L,0L,0x907CCD96L},{0xABB86BD5L,0L,1L,0xFC9C4707L},{0L,0xE504D0E6L,1L,0x1DF179EDL},{1L,0x1DF179EDL,0x9764063CL,0L},{0x4CE09697L,0x6330B05CL,0x6330B05CL,0x4CE09697L},{1L,(-1L),0L,7L}},{{0L,0x9764063CL,0x4CE09697L,0xE504D0E6L},{1L,0xFB050829L,0x1DF179EDL,0xE504D0E6L},{1L,0x9764063CL,0x9BDAC795L,7L},{0x6330B05CL,(-1L),1L,0x4CE09697L},{(-1L),0x6330B05CL,1L,0L},{0xEC2851EEL,0x1DF179EDL,(-3L),0x1DF179EDL},{0x978B0D3EL,0xE504D0E6L,0xFB050829L,0xFC9C4707L},{0x907CCD96L,1L,0xFC9C4707L,0x6330B05CL}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_401[i] = &g_104;
    }
    l_875[0][0][6]--;
    return (*l_342);
}







static int8_t func_42(int32_t * p_43, int32_t * p_44, int32_t p_45, int64_t p_46, int32_t * p_47)
{
    int8_t l_304 = 0xF5L;
    int64_t ***l_327 = &g_168;
    uint8_t *l_328 = &g_155;
    int32_t **l_329 = (void*)0;
    int8_t *l_330 = &g_221;
    uint64_t *l_331 = &g_79;
    int64_t *l_332 = (void*)0;
    int64_t *l_333[4][8] = {{(void*)0,&g_265,(void*)0,&g_25,&g_25,(void*)0,&g_265,(void*)0},{(void*)0,&g_25,&g_25,&g_25,(void*)0,(void*)0,&g_25,&g_25},{(void*)0,(void*)0,&g_25,&g_25,&g_25,(void*)0,(void*)0,&g_25},{(void*)0,&g_25,&g_25,(void*)0,&g_265,(void*)0,&g_25,&g_25}};
    uint32_t *l_334 = &g_225;
    uint8_t *l_335[6][7][2] = {{{(void*)0,&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{(void*)0,&g_336[0]}},{{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{(void*)0,&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]}},{{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{(void*)0,&g_336[0]},{(void*)0,&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]}},{{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{(void*)0,&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{(void*)0,&g_336[0]}},{{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{(void*)0,&g_336[0]},{(void*)0,&g_336[0]}},{{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{&g_336[0],&g_336[0]},{(void*)0,&g_336[0]},{&g_336[0],&g_336[0]}}};
    int32_t l_337 = 0xD32C07B4L;
    int32_t l_338 = 0x913F104CL;
    int i, j, k;
    l_338 ^= ((safe_add_func_int32_t_s_s(5L, l_304)) & ((l_337 = (((((((*l_334) = (safe_mul_func_int8_t_s_s(((g_266 = (((safe_sub_func_int32_t_s_s(((((g_25 = (safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s((!(((*g_35) &= (((*l_331) = (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(((*l_330) = (safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u((((((p_45 == ((l_327 == (void*)0) , (((l_304 , (0UL | ((*l_328) = 1UL))) , (65535UL || 7UL)) >= g_84))) && (-3L)) || l_304) , l_329) == l_329), g_104)), 7UL))))) >= l_304), p_45)) | 0x6EF8A6834DD0C724LL) , 3UL), 13)), g_273))) != p_45)) , p_46)), 0UL)), 1UL))) >= g_278[0]) >= p_45) , (*g_35)), l_304)) <= l_304) , g_160)) , g_115[4]), p_45))) >= g_161) ^ g_119) , p_46) , g_36) == 0x00B98DA613221460LL)) == g_161));
    return p_46;
}







static uint8_t func_49(int32_t * p_50, int32_t p_51, int32_t * p_52)
{
    uint64_t l_287 = 7UL;
    uint16_t *l_290 = &g_126;
    uint8_t **l_293 = (void*)0;
    uint8_t ***l_294 = &l_293;
    uint64_t *l_295[8][2] = {{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119}};
    int32_t l_296[7][10][1] = {{{0x422F2D61L},{0x47C3267FL},{0x12AC0744L},{0x422F2D61L},{0xC62A8A3FL},{0xC62A8A3FL},{0x422F2D61L},{0x12AC0744L},{0x47C3267FL},{1L}},{{(-8L)},{0x422F2D61L},{1L},{0x3B4F77BAL},{0x3B4F77BAL},{1L},{0x422F2D61L},{(-8L)},{1L},{(-8L)}},{{0x422F2D61L},{1L},{0x3B4F77BAL},{0x3B4F77BAL},{1L},{0x422F2D61L},{(-8L)},{1L},{(-8L)},{0x422F2D61L}},{{1L},{0x3B4F77BAL},{0x3B4F77BAL},{1L},{0x422F2D61L},{(-8L)},{1L},{(-8L)},{0x422F2D61L},{1L}},{{0x3B4F77BAL},{0x3B4F77BAL},{1L},{0x422F2D61L},{(-8L)},{1L},{(-8L)},{0x422F2D61L},{1L},{0x3B4F77BAL}},{{0x3B4F77BAL},{1L},{0x422F2D61L},{(-8L)},{1L},{(-8L)},{0x422F2D61L},{1L},{0x3B4F77BAL},{0x3B4F77BAL}},{{1L},{0x422F2D61L},{(-8L)},{1L},{(-8L)},{0x422F2D61L},{1L},{0x3B4F77BAL},{0x3B4F77BAL},{1L}}};
    int8_t *l_299 = &g_221;
    int32_t **l_300 = (void*)0;
    int32_t **l_301 = &g_277;
    int i, j, k;
    (*l_301) = func_53(((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((*l_299) = ((g_278[2] , g_104) <= ((((safe_mul_func_int16_t_s_s(((l_296[3][7][0] = (g_124 = ((*g_35) != (l_287 , ((safe_add_func_uint16_t_u_u((++(*l_290)), ((&g_183[8][1] != ((*l_294) = l_293)) , (-10L)))) && l_287))))) & (((safe_div_func_uint16_t_u_u(((*g_35) , 65535UL), l_287)) , l_287) && p_51)), l_287)) , (-1L)) > p_51) == p_51))), l_287)), l_287)), 0x6D3C327DL)) && g_161), g_84, (*g_35), p_51);
    return (**l_301);
}







static int32_t * func_53(uint32_t p_54, uint32_t p_55, int32_t p_56, uint32_t p_57)
{
    int32_t l_69 = 0xFA46B4C0L;
    int32_t l_125 = 0x1EE040EEL;
    int32_t l_140 = 0x80F5DD30L;
    uint8_t l_202 = 0xE0L;
    int32_t *l_259[6];
    int i;
    for (i = 0; i < 6; i++)
        l_259[i] = &l_140;
    for (g_36 = (-10); (g_36 == (-5)); g_36++)
    {
        int16_t l_117 = 0xD631L;
        int16_t l_121 = (-2L);
        int32_t *l_122 = (void*)0;
        int32_t l_195 = 0xDA33BDD3L;
        int64_t l_206 = 1L;
        int64_t l_222 = 0xBB59C865190E703ELL;
        uint8_t *l_244 = (void*)0;
        int32_t l_264 = (-1L);
        int32_t l_268 = 0L;
        int32_t l_269 = 0xD0E7B065L;
        int32_t l_270 = 0x1FC27931L;
        int32_t l_271 = 0x172B58A0L;
        int32_t l_272 = 0x023FBB9BL;
        for (p_56 = 6; (p_56 != (-21)); p_56 = safe_sub_func_uint32_t_u_u(p_56, 9))
        {
            uint16_t l_80 = 0x5F8EL;
            uint32_t l_165[4][9][7] = {{{0UL,0x3B7FEC2AL,4UL,4UL,4UL,0x3B7FEC2AL,0UL},{18446744073709551615UL,7UL,0xD16BB71AL,6UL,1UL,0x97AFB7A7L,0UL},{0x3F8B2FE2L,0xF2988981L,18446744073709551613UL,18446744073709551608UL,0x515A1FB0L,0x26375140L,4UL},{0xD16BB71AL,8UL,0xD16BB71AL,0UL,0x399E4605L,0x5A862B89L,0x97AFB7A7L},{1UL,8UL,4UL,0xF2988981L,8UL,0x24172394L,0x3F8B2FE2L},{0x5A862B89L,18446744073709551615UL,18446744073709551608UL,18446744073709551608UL,18446744073709551615UL,0x5A862B89L,18446744073709551615UL},{0x70524A1AL,18446744073709551608UL,8UL,0x85640113L,18446744073709551613UL,0x26375140L,18446744073709551612UL},{18446744073709551615UL,0x5A862B89L,0x7FAD0BDBL,0x97AFB7A7L,6UL,0x97AFB7A7L,0x7FAD0BDBL},{4UL,18446744073709551608UL,18446744073709551615UL,18446744073709551613UL,0UL,0x3B7FEC2AL,1UL}},{{18446744073709551615UL,18446744073709551615UL,0UL,1UL,0x7FAD0BDBL,0x399E4605L,0x399E4605L},{0UL,8UL,0UL,8UL,0UL,18446744073709551608UL,0x416570B7L},{1UL,8UL,18446744073709551615UL,7UL,6UL,0xC9F24D48L,0x5A862B89L},{0x7760C716L,0xF2988981L,18446744073709551607UL,0xF7F7094BL,18446744073709551613UL,18446744073709551613UL,18446744073709551615UL},{1UL,7UL,8UL,18446744073709551615UL,18446744073709551615UL,0UL,1UL},{0UL,0x3B7FEC2AL,1UL,5UL,8UL,0xF7F7094BL,8UL},{18446744073709551615UL,0UL,0UL,18446744073709551615UL,0x399E4605L,1UL,18446744073709551615UL},{4UL,0x7C917CCAL,0UL,0xF7F7094BL,0x515A1FB0L,1UL,0xEAABBE62L},{18446744073709551615UL,0xD16BB71AL,1UL,7UL,1UL,0xD16BB71AL,18446744073709551615UL}},{{0x70524A1AL,4UL,1UL,8UL,0UL,0UL,1UL},{6UL,0x5A862B89L,18446744073709551608UL,18446744073709551615UL,0UL,0UL,18446744073709551615UL},{18446744073709551612UL,0xF2988981L,18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,8UL,0x3F8B2FE2L},{0x399E4605L,1UL,18446744073709551615UL,0x5A862B89L,0x7FAD0BDBL,0x97AFB7A7L,6UL},{0xEAABBE62L,0x7C917CCAL,1UL,0x3B7FEC2AL,8UL,8UL,0x515A1FB0L},{0UL,18446744073709551615UL,0x7FAD0BDBL,0xD16BB71AL,18446744073709551608UL,0UL,8UL},{0x7760C716L,8UL,18446744073709551613UL,0UL,4UL,0UL,18446744073709551613UL},{18446744073709551615UL,18446744073709551615UL,0x97AFB7A7L,18446744073709551615UL,0xD16BB71AL,0x399E4605L,0xC9F24D48L},{0x515A1FB0L,0x7C917CCAL,0x70524A1AL,5UL,18446744073709551613UL,0x24172394L,18446744073709551615UL}},{{0xD16BB71AL,1UL,7UL,1UL,0xD16BB71AL,18446744073709551615UL,1UL},{18446744073709551607UL,0xF2988981L,0x7760C716L,0x1E9F3CFEL,4UL,0x85640113L,0xEAABBE62L},{18446744073709551615UL,0x5A862B89L,18446744073709551615UL,18446744073709551608UL,18446744073709551608UL,18446744073709551615UL,0x5A862B89L},{18446744073709551607UL,0x1E9F3CFEL,18446744073709551615UL,0x26375140L,8UL,18446744073709551615UL,0UL},{0xD16BB71AL,0x399E4605L,0xC9F24D48L,7UL,0x7FAD0BDBL,18446744073709551608UL,0x7FAD0BDBL},{0x515A1FB0L,0x451B912CL,1UL,0x26375140L,18446744073709551615UL,5UL,0x7760C716L},{18446744073709551615UL,0x7FAD0BDBL,0xD16BB71AL,18446744073709551608UL,0UL,8UL,1UL},{0x7760C716L,1UL,0UL,0x1E9F3CFEL,0UL,1UL,0x7760C716L},{0UL,18446744073709551615UL,0x399E4605L,1UL,18446744073709551615UL,0x5A862B89L,0x7FAD0BDBL}}};
            int32_t *l_181 = &l_125;
            int i, j, k;
            if (l_69)
                break;
            for (p_54 = 6; (p_54 < 48); p_54++)
            {
                for (g_25 = (-6); (g_25 >= (-12)); g_25--)
                {
                    if (p_56)
                        break;
                    if ((*g_35))
                        break;
                    for (l_69 = (-21); (l_69 != (-15)); l_69++)
                    {
                        uint64_t *l_78[6][5][8] = {{{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,(void*)0},{&g_79,&g_79,&g_79,&g_79,(void*)0,(void*)0,&g_79,(void*)0},{&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,(void*)0,(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79}},{{&g_79,&g_79,(void*)0,&g_79,(void*)0,&g_79,&g_79,&g_79},{&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79},{(void*)0,&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79},{(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,(void*)0,&g_79}},{{&g_79,&g_79,&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79,(void*)0},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79}},{{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,(void*)0,&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79}},{{(void*)0,&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79,(void*)0,&g_79},{(void*)0,&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79}},{{&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79,(void*)0},{&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,(void*)0},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79}}};
                        int i, j, k;
                        g_84 = ((g_79 = (safe_mod_func_uint64_t_u_u((--l_80), p_55))) || (~p_56));
                    }
                }
            }
            for (g_79 = 0; (g_79 > 23); g_79 = safe_add_func_int32_t_s_s(g_79, 1))
            {
                uint16_t *l_94 = &l_80;
                int16_t *l_103 = &g_104;
                const uint16_t **l_116 = &g_114;
                uint64_t *l_118 = &g_119;
                int64_t *l_120 = &g_25;
                uint64_t *l_123 = &g_124;
                uint64_t l_127[6][9] = {{0x5B2332F7F6FD0247LL,0x5B2332F7F6FD0247LL,0x43C0C33ADB549FEDLL,0x5B2332F7F6FD0247LL,0x5B2332F7F6FD0247LL,0x43C0C33ADB549FEDLL,0x5B2332F7F6FD0247LL,0x5B2332F7F6FD0247LL,0x43C0C33ADB549FEDLL},{0x1DF8105A18A5C642LL,0x1DF8105A18A5C642LL,18446744073709551612UL,0x1DF8105A18A5C642LL,0x1DF8105A18A5C642LL,18446744073709551612UL,0x1DF8105A18A5C642LL,0x1DF8105A18A5C642LL,18446744073709551612UL},{0x5B2332F7F6FD0247LL,0x5B2332F7F6FD0247LL,0x5B2332F7F6FD0247LL,18446744073709551615UL,18446744073709551615UL,0x5B2332F7F6FD0247LL,18446744073709551615UL,18446744073709551615UL,0x5B2332F7F6FD0247LL},{18446744073709551615UL,18446744073709551615UL,0x1DF8105A18A5C642LL,18446744073709551615UL,18446744073709551615UL,0x1DF8105A18A5C642LL,18446744073709551615UL,18446744073709551615UL,0x1DF8105A18A5C642LL},{18446744073709551615UL,18446744073709551615UL,0x5B2332F7F6FD0247LL,18446744073709551615UL,18446744073709551615UL,0x5B2332F7F6FD0247LL,18446744073709551615UL,18446744073709551615UL,0x5B2332F7F6FD0247LL},{18446744073709551615UL,18446744073709551615UL,0x1DF8105A18A5C642LL,18446744073709551615UL,18446744073709551615UL,0x1DF8105A18A5C642LL,18446744073709551615UL,18446744073709551615UL,0x1DF8105A18A5C642LL}};
                int32_t *l_128 = &g_36;
                int i, j;
                g_126 ^= (!(((safe_mod_func_uint16_t_u_u((((l_125 = ((*l_123) = ((safe_add_func_int64_t_s_s(8L, (((((safe_div_func_uint16_t_u_u(((*l_94) ^= p_54), (safe_div_func_int32_t_s_s(((((p_54 < (safe_mod_func_int64_t_s_s(0x35D5AA0404C6930ALL, ((*l_120) = (safe_mod_func_int8_t_s_s((p_56 || ((safe_mul_func_int16_t_s_s(((*l_103) = p_55), ((safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((((*l_118) = (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(1UL, (((g_113 = l_94) == ((*l_116) = g_114)) >= g_115[3]))) <= 4294967295UL), l_117))) || p_56), g_79)), g_115[1])) != l_69))) > 0xE5F3B4242223AA5BLL)), 246UL)))))) , g_115[3]) | 0xC7F1499195F91B20LL) != l_121), 1L)))) | g_115[4]) | l_69) , l_122) == &g_36))) & 0x5DFDL))) || g_115[2]) < l_121), p_55)) , p_57) & 0x6FCCF6B01AB19369LL));
                if ((l_125 = ((*g_114) >= l_127[1][6])))
                {
                    if ((&g_36 != l_128))
                    {
                        int32_t **l_129 = &l_128;
                        (*l_129) = &g_36;
                    }
                    else
                    {
                        uint64_t *l_134 = &g_79;
                        int32_t *l_139 = &l_125;
                        l_140 = (safe_sub_func_int32_t_s_s(((*l_139) = (((*l_103) = (4294967287UL <= ((safe_mul_func_int16_t_s_s(0xF135L, (((void*)0 != l_134) != (((safe_add_func_uint16_t_u_u(p_57, (*g_114))) ^ (g_84 && (safe_mod_func_uint8_t_u_u(g_124, (p_54 , g_25))))) , l_69)))) ^ g_126))) <= l_69)), (*g_35)));
                        return &g_36;
                    }
                }
                else
                {
                    if (p_55)
                    {
                        uint32_t l_150 = 18446744073709551615UL;
                        uint16_t **l_151 = &l_94;
                        int32_t *l_152 = &l_140;
                        (*l_152) &= (((safe_div_func_int8_t_s_s(l_80, (safe_sub_func_int64_t_s_s(((1L && (safe_add_func_int16_t_s_s(((*l_103) = (safe_mul_func_uint16_t_u_u((*g_114), 7L))), ((p_55 == (p_55 < ((((*l_123) |= ((((-1L) ^ (((((!(l_150 <= (((*l_151) = &g_126) != &g_115[3]))) <= 0x63L) < g_79) , (*g_114)) || (*l_128))) , p_54) , g_84)) <= 0xD168D339D48ECEC3LL) < p_55))) == g_79)))) >= p_56), g_126)))) ^ 0x1BE1L) , (*g_35));
                    }
                    else
                    {
                        uint8_t *l_154 = &g_155;
                        uint32_t *l_158 = &g_159;
                        int32_t *l_162 = (void*)0;
                        int32_t *l_163 = &l_140;
                        int32_t **l_164 = &l_122;
                        g_160 ^= ((--(*l_154)) > (((*l_158) = p_54) , (*l_128)));
                        if (g_161)
                            break;
                        (*l_163) |= (((*l_154) = ((-6L) > l_125)) ^ 0UL);
                        (*l_164) = &g_36;
                    }
                }
            }
            if (l_165[1][2][0])
            {
                uint32_t l_176 = 0x58BC828DL;
                int32_t **l_194 = &l_122;
                for (l_80 = 0; (l_80 != 16); ++l_80)
                {
                    int64_t ***l_169 = &g_168;
                    int32_t *l_179 = &l_125;
                    (*l_169) = g_168;
                    for (g_124 = 0; (g_124 <= 3); g_124 += 1)
                    {
                        int32_t *l_170 = &l_125;
                        int32_t *l_171 = &l_125;
                        int32_t *l_172 = &l_140;
                        int32_t *l_173 = &l_125;
                        int32_t *l_174 = (void*)0;
                        int32_t *l_175 = &l_125;
                        int i, j, k;
                        l_176++;
                        if (l_165[g_124][(g_124 + 3)][(g_124 + 3)])
                            break;
                    }
                    if ((*g_35))
                        break;
                    if ((&g_25 != (void*)0))
                    {
                        int32_t **l_180 = &l_179;
                        (*l_180) = l_179;
                        return &g_36;
                    }
                    else
                    {
                        uint8_t **l_185 = &g_183[8][1];
                        uint8_t ***l_184 = &l_185;
                        int8_t *l_200[6] = {&g_201,&g_201,&g_201,&g_201,&g_201,&g_201};
                        int32_t l_203 = (-3L);
                        int32_t l_204[2][4] = {{0L,0xA0318852L,0L,0xA0318852L},{0L,0xA0318852L,0L,0xA0318852L}};
                        uint32_t *l_205 = &l_165[0][2][4];
                        int i, j;
                        (*l_184) = g_182;
                        (*l_181) = ((((*l_205) = (((1L >= (safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(0xE9L, (safe_mod_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((((l_194 == (void*)0) >= l_195) <= (((((((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((g_25 & 4L) || (((((*l_181) , (g_201 ^= ((&g_168 == l_169) >= 0xA9L))) > l_140) , l_202) <= p_56)) , (*l_179)), 7)), 0xC9L)) | (*g_35)) , 0UL) , l_203) == g_155) > p_54) & 0x16D794BBL)), 18446744073709551611UL)), l_204[1][1])))), p_55))) || 0x16L) == 1UL)) , l_125) < 4294967295UL);
                        l_140 = ((*l_179) |= l_206);
                        return &g_36;
                    }
                }
            }
            else
            {
                int32_t **l_207 = &l_122;
                (*l_207) = l_181;
            }
        }
        for (g_79 = 0; (g_79 != 6); g_79 = safe_add_func_uint64_t_u_u(g_79, 2))
        {
            uint32_t l_241 = 0x33A23EFBL;
            const uint8_t *l_257[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            const uint8_t **l_256 = &l_257[0];
            const uint8_t ***l_255 = &l_256;
            int32_t l_260[3][7][3] = {{{0xBD41EAB7L,1L,(-1L)},{0x840841C1L,4L,0x840841C1L},{(-1L),1L,0xBD41EAB7L},{0L,0x71797351L,0xBD41EAB7L},{(-1L),0L,0x840841C1L},{3L,3L,(-1L)},{(-1L),(-1L),0L}},{{0L,(-1L),(-1L)},{(-1L),3L,3L},{0x840841C1L,0L,(-1L)},{0xBD41EAB7L,0x71797351L,0L},{0xBD41EAB7L,1L,(-1L)},{0x840841C1L,4L,0x840841C1L},{(-1L),1L,0xBD41EAB7L}},{{0L,0x71797351L,0xBD41EAB7L},{(-1L),0L,0x840841C1L},{3L,3L,(-1L)},{(-1L),(-1L),0L},{0L,(-1L),(-1L)},{(-1L),3L,3L},{0x840841C1L,0L,(-1L)}}};
            int i, j, k;
            for (g_104 = 0; (g_104 < 13); g_104++)
            {
                int32_t *l_216 = &g_36;
                int32_t *l_217 = &l_140;
                int32_t *l_218 = &l_125;
                int32_t *l_219 = (void*)0;
                int32_t *l_220 = &l_140;
                int32_t *l_223 = &l_125;
                int32_t *l_224 = &l_140;
                int16_t *l_236 = &g_160;
                for (p_54 = 0; (p_54 >= 33); p_54 = safe_add_func_int32_t_s_s(p_54, 7))
                {
                    for (l_202 = (-11); (l_202 >= 9); l_202 = safe_add_func_int16_t_s_s(l_202, 6))
                    {
                        return l_216;
                    }
                }
                g_225++;
                if ((*g_35))
                    continue;
                if ((!(safe_sub_func_int32_t_s_s(0xFF993564L, (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(p_56)), (((*l_236) = 0x6168L) | ((((((*l_224) ^= ((((safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((0x04FFL == ((0x83D7L || (g_79 , l_241)) , (safe_div_func_uint64_t_u_u(((*g_182) != l_244), 1UL)))) > p_54), p_55)), p_56)) && p_57) , g_221) , (*g_35))) , 1UL) | l_241) , &l_140) != &g_36)))), 0x0F7AL))))))
                {
                    for (g_225 = 0; (g_225 < 23); g_225 = safe_add_func_uint32_t_u_u(g_225, 1))
                    {
                        const uint8_t ****l_258 = &l_255;
                        p_56 &= ((safe_div_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(0xCCL, ((safe_add_func_int64_t_s_s(0xFEF38C781C0EB342LL, ((void*)0 != &g_159))) , (safe_mod_func_uint8_t_u_u(p_54, p_57))))) ^ g_25) < (&g_182 == ((*l_258) = l_255))) || g_79), 0xA406L)) != g_104);
                        if ((*g_35))
                            break;
                        l_259[4] = &g_36;
                    }
                }
                else
                {
                    uint32_t l_261[10] = {0x753925E9L,6UL,0x753925E9L,6UL,0x753925E9L,6UL,0x753925E9L,6UL,0x753925E9L,6UL};
                    int i;
                    p_56 ^= (-3L);
                    l_261[2]--;
                }
            }
        }
        g_273--;
    }
    (*g_35) = (*g_35);
    return &g_36;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_115[i], "g_115[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_278[i], "g_278[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_336[i], "g_336[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_973, "g_973", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
