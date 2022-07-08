// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 9C06711
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
   int16_t f0;
   const uint64_t f1;
   int8_t * f2;
   int8_t * f3;
};


static int32_t g_2 = 0xF34FDA0EL;
static union U0 g_16 = {0xE797L};
static int8_t g_31 = 2L;
static int8_t * const g_30 = &g_31;
static int32_t g_40 = 0xECC90C63L;
static const int8_t g_62 = 0x5AL;
static uint16_t g_74[3][8] = {{65533UL,0x0A99L,1UL,0xD0E1L,1UL,0x0A99L,65533UL,65526UL},{1UL,0x0A99L,65533UL,65526UL,0x4938L,0x4938L,65526UL,65533UL},{0xA3E8L,0xA3E8L,0x0A99L,1UL,0x4938L,0xD0E1L,0x184BL,0xD0E1L}};
static int16_t g_93 = 1L;
static uint8_t g_95 = 253UL;
static int32_t g_101 = 7L;
static int32_t *g_100[3] = {&g_101,&g_101,&g_101};
static int32_t g_127 = (-1L);
static int64_t g_130 = 0xD340C11E2AE17087LL;
static uint64_t g_143 = 1UL;
static int32_t **g_168 = (void*)0;
static int32_t **g_169 = &g_100[1];
static int32_t g_171 = 0xE7164AAAL;
static int32_t **g_200 = (void*)0;
static uint8_t g_225[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static int32_t g_233 = 0x226C8784L;
static int16_t **g_250 = (void*)0;
static int64_t *g_267 = &g_130;
static int64_t **g_266 = &g_267;
static int8_t g_274 = 0xF3L;
static int64_t g_286 = (-1L);
static const int64_t g_309 = 0x89D43FC32E606E84LL;
static uint32_t g_334 = 0x08B602C3L;
static uint16_t * const g_365 = &g_74[0][2];
static uint16_t * const *g_364 = &g_365;
static int32_t g_375 = 1L;
static int16_t * const g_448 = (void*)0;
static int16_t * const *g_447 = &g_448;
static int16_t * const **g_446 = &g_447;
static int16_t * const *** const g_445[9][10] = {{(void*)0,&g_446,&g_446,(void*)0,&g_446,&g_446,&g_446,(void*)0,&g_446,&g_446},{&g_446,&g_446,(void*)0,&g_446,&g_446,(void*)0,&g_446,&g_446,&g_446,(void*)0},{&g_446,&g_446,&g_446,&g_446,&g_446,(void*)0,(void*)0,&g_446,&g_446,&g_446},{&g_446,&g_446,&g_446,&g_446,(void*)0,&g_446,&g_446,&g_446,&g_446,&g_446},{&g_446,&g_446,(void*)0,(void*)0,&g_446,&g_446,&g_446,&g_446,&g_446,(void*)0},{&g_446,&g_446,&g_446,(void*)0,&g_446,&g_446,(void*)0,&g_446,&g_446,&g_446},{&g_446,&g_446,&g_446,&g_446,&g_446,&g_446,&g_446,&g_446,&g_446,&g_446},{&g_446,&g_446,&g_446,&g_446,&g_446,&g_446,&g_446,&g_446,&g_446,&g_446},{&g_446,&g_446,(void*)0,&g_446,&g_446,(void*)0,&g_446,&g_446,&g_446,(void*)0}};
static int64_t g_451 = 1L;
static int8_t *g_467 = &g_31;
static int8_t **g_466[5][4] = {{&g_467,&g_467,&g_467,&g_467},{&g_467,&g_467,&g_467,&g_467},{&g_467,&g_467,&g_467,&g_467},{&g_467,&g_467,&g_467,&g_467},{&g_467,&g_467,&g_467,&g_467}};
static int64_t ****g_478[1] = {(void*)0};
static int16_t *g_518 = &g_93;
static int16_t **g_517[4][1] = {{&g_518},{&g_518},{&g_518},{&g_518}};
static int64_t g_523 = 5L;
static int32_t g_562 = (-10L);
static uint16_t g_718[9][1] = {{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL}};
static uint16_t *g_772 = &g_718[7][0];
static int8_t g_795[1] = {0xF8L};
static uint32_t g_796[9][9][3] = {{{4294967295UL,1UL,0xD4F73592L},{9UL,0x4E7D402BL,4294967290UL},{5UL,0x4E7D402BL,0x2B9D0685L},{0xAA2D2780L,1UL,4294967295UL},{0xAE8FFA64L,0xAA2D2780L,1UL},{0xAA2D2780L,0x8851A27AL,1UL},{5UL,1UL,1UL},{9UL,0xBD8BD5E6L,1UL},{4294967295UL,1UL,4294967295UL}},{{0xBD8BD5E6L,0xBD8BD5E6L,0x2B9D0685L},{1UL,1UL,4294967290UL},{1UL,0x8851A27AL,0xD4F73592L},{0xBD8BD5E6L,0xAA2D2780L,0xE4398D6BL},{4294967295UL,1UL,0xD4F73592L},{9UL,0x4E7D402BL,4294967290UL},{5UL,0x4E7D402BL,0x2B9D0685L},{0xAA2D2780L,1UL,4294967295UL},{0xAE8FFA64L,0xAA2D2780L,1UL}},{{0xAA2D2780L,0x8851A27AL,1UL},{5UL,1UL,1UL},{9UL,0xBD8BD5E6L,1UL},{4294967295UL,1UL,4294967295UL},{0xBD8BD5E6L,0xBD8BD5E6L,0x2B9D0685L},{1UL,1UL,4294967290UL},{1UL,0x8851A27AL,0xD4F73592L},{0xBD8BD5E6L,0xAA2D2780L,0xAA2D2780L},{0x8021F66DL,1UL,1UL}},{{0x365EA80FL,4294967295UL,4294967291UL},{0x4F820B3FL,4294967295UL,1UL},{0xC614F26CL,1UL,5UL},{0x36757C7EL,0xC614F26CL,0xAE8FFA64L},{0xC614F26CL,0xDDD381BEL,1UL},{0x4F820B3FL,4294967286UL,1UL},{0x365EA80FL,0UL,0xAE8FFA64L},{0x8021F66DL,0x88F442C9L,5UL},{0UL,0UL,1UL}},{{1UL,4294967286UL,4294967291UL},{1UL,0xDDD381BEL,1UL},{0UL,0xC614F26CL,0xAA2D2780L},{0x8021F66DL,1UL,1UL},{0x365EA80FL,4294967295UL,4294967291UL},{0x4F820B3FL,4294967295UL,1UL},{0xC614F26CL,1UL,5UL},{0x36757C7EL,0xC614F26CL,0xAE8FFA64L},{0xC614F26CL,0xDDD381BEL,1UL}},{{0x4F820B3FL,4294967286UL,1UL},{0x365EA80FL,0UL,0xAE8FFA64L},{0x8021F66DL,0x88F442C9L,5UL},{0UL,0UL,1UL},{1UL,4294967286UL,4294967291UL},{1UL,0xDDD381BEL,1UL},{0UL,0xC614F26CL,0xAA2D2780L},{0x8021F66DL,1UL,1UL},{0x365EA80FL,4294967295UL,4294967291UL}},{{0x4F820B3FL,4294967295UL,1UL},{0xC614F26CL,1UL,5UL},{0x36757C7EL,0xC614F26CL,0xAE8FFA64L},{0xC614F26CL,0xDDD381BEL,1UL},{0x4F820B3FL,4294967286UL,1UL},{0x365EA80FL,0UL,0xAE8FFA64L},{0x8021F66DL,0x88F442C9L,5UL},{0UL,0UL,1UL},{1UL,4294967286UL,4294967291UL}},{{1UL,0xDDD381BEL,1UL},{0UL,0xC614F26CL,0xAA2D2780L},{0x8021F66DL,1UL,1UL},{0x365EA80FL,4294967295UL,4294967291UL},{0x4F820B3FL,4294967295UL,1UL},{0xC614F26CL,1UL,5UL},{0x36757C7EL,0xC614F26CL,0xAE8FFA64L},{0xC614F26CL,0xDDD381BEL,1UL},{0x4F820B3FL,4294967286UL,1UL}},{{0x365EA80FL,0UL,0xAE8FFA64L},{0x8021F66DL,0x88F442C9L,5UL},{0UL,0UL,1UL},{1UL,4294967286UL,4294967291UL},{1UL,0xDDD381BEL,1UL},{0UL,0xC614F26CL,0xAA2D2780L},{0x8021F66DL,1UL,1UL},{0x365EA80FL,4294967295UL,4294967291UL},{0x4F820B3FL,4294967295UL,1UL}}};
static int64_t * const *g_834 = (void*)0;
static int64_t * const **g_833 = &g_834;
static int32_t *g_958[2][5] = {{&g_40,(void*)0,&g_40,&g_233,&g_233},{&g_40,(void*)0,&g_40,&g_233,&g_233}};
static int16_t ***g_971 = (void*)0;
static int16_t ****g_970 = &g_971;
static int16_t *****g_969 = &g_970;
static int8_t **g_984 = &g_467;
static union U0 *g_1006 = &g_16;
static union U0 **g_1005 = &g_1006;
static uint32_t **g_1008 = (void*)0;
static int16_t ****g_1146 = &g_971;
static uint64_t g_1244 = 18446744073709551615UL;
static uint32_t g_1292 = 0xC014A118L;
static int8_t ***g_1325 = (void*)0;
static int8_t ****g_1324[7][8][3] = {{{&g_1325,&g_1325,&g_1325},{&g_1325,(void*)0,(void*)0},{&g_1325,(void*)0,(void*)0},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325}},{{&g_1325,&g_1325,&g_1325},{&g_1325,(void*)0,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{(void*)0,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325}},{{&g_1325,&g_1325,&g_1325},{(void*)0,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325}},{{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,(void*)0,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325}},{{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,(void*)0,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{(void*)0,&g_1325,&g_1325}},{{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{(void*)0,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325}},{{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,&g_1325,&g_1325},{&g_1325,(void*)0,&g_1325}}};
static union U0 g_1394 = {0xB8D5L};
static int8_t **g_1461 = &g_467;
static const int32_t g_1483 = (-8L);
static int32_t * const *g_1616 = &g_100[1];
static int32_t * const **g_1615 = &g_1616;
static int32_t * const ***g_1614 = &g_1615;
static int32_t g_1759[7][6] = {{(-1L),0x66BE3CCAL,0xF7F2E253L,0x66BE3CCAL,(-1L),(-1L)},{(-7L),0x66BE3CCAL,0x66BE3CCAL,(-7L),2L,(-7L)},{(-7L),2L,(-7L),0x66BE3CCAL,0x66BE3CCAL,(-7L)},{(-1L),(-1L),0x66BE3CCAL,0xF7F2E253L,0x66BE3CCAL,(-1L)},{0x66BE3CCAL,2L,0xF7F2E253L,0xF7F2E253L,2L,0x66BE3CCAL},{(-1L),0x66BE3CCAL,0xF7F2E253L,0x66BE3CCAL,(-1L),(-1L)},{(-7L),(-7L),(-7L),0xF7F2E253L,(-1L),0xF7F2E253L}};
static const int64_t *****g_1813[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint16_t g_1889 = 0x6909L;
static const int8_t **g_1960 = (void*)0;
static const int8_t ***g_1959 = &g_1960;
static int32_t *g_2046 = &g_233;
static const int16_t *g_2190[7][10] = {{&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0},{&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0},{&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0},{&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0},{&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0},{&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0},{&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0,&g_1394.f0}};
static const int16_t **g_2189 = &g_2190[5][1];
static uint8_t g_2199 = 0x8CL;
static const int32_t *g_2206 = &g_101;
static uint32_t ****g_2216 = (void*)0;
static uint32_t *****g_2215 = &g_2216;
static int64_t *****g_2246 = &g_478[0];
static int64_t *****g_2247 = &g_478[0];
static uint64_t *g_2285 = &g_143;
static uint64_t **g_2284 = &g_2285;
static uint64_t **g_2287 = &g_2285;
static const union U0 g_2306 = {0x7E6BL};
static int64_t g_2363 = 0xFA8ECDBFF814E148LL;
static uint64_t g_2378 = 0x8466E0D8BF615424LL;
static const uint16_t g_2454 = 1UL;
static uint16_t g_2479 = 65535UL;
static uint8_t g_2509 = 255UL;
static const uint8_t g_2572 = 3UL;
static const uint8_t g_2574 = 0UL;
static uint8_t *g_2580 = &g_95;
static uint8_t ** const g_2579 = &g_2580;
static uint32_t g_2605 = 0x067B39BEL;
static int16_t g_2612 = (-3L);
static int64_t g_2613 = (-1L);
static uint64_t g_2619 = 0x49F7DF12378FC3C7LL;
static int32_t ***g_2665[8][8] = {{&g_200,&g_169,&g_168,&g_169,&g_200,(void*)0,&g_200,&g_168},{&g_200,(void*)0,&g_168,&g_169,&g_168,&g_168,&g_169,&g_169},{&g_168,&g_168,&g_168,&g_200,&g_200,&g_200,&g_200,&g_200},{&g_168,&g_168,&g_168,&g_168,&g_200,(void*)0,&g_169,&g_169},{&g_200,&g_168,&g_168,&g_168,(void*)0,(void*)0,&g_200,&g_169},{&g_169,&g_168,(void*)0,&g_200,&g_168,(void*)0,&g_168,&g_200},{&g_169,&g_168,&g_169,&g_200,(void*)0,&g_200,&g_168,&g_168},{&g_200,&g_168,&g_200,&g_168,&g_168,&g_168,(void*)0,&g_168}};
static int32_t ****g_2664 = &g_2665[5][6];
static uint16_t g_2689 = 0UL;
static int64_t g_2695[10][10][2] = {{{0x55E0F2B81B5B9F60LL,0x554A0114DBB63825LL},{0x554A0114DBB63825LL,(-1L)},{4L,6L},{(-1L),0x774FFFC1FBAA2024LL},{0xC0C0612BD21BC5A2LL,0x55E0F2B81B5B9F60LL},{1L,0xC0C0612BD21BC5A2LL},{2L,0xCF3B400DBCAA1858LL},{0x68D893AC9F14785DLL,0xF11D9E78AF8299A4LL},{1L,4L},{0xF11D9E78AF8299A4LL,0x774FFFC1FBAA2024LL}},{{0xF7AF392B44B71688LL,0x05F935A995DEE4CCLL},{4L,0x554A0114DBB63825LL},{(-1L),0x554A0114DBB63825LL},{4L,0x05F935A995DEE4CCLL},{0xF7AF392B44B71688LL,0x774FFFC1FBAA2024LL},{0xF11D9E78AF8299A4LL,4L},{1L,0xF11D9E78AF8299A4LL},{0x68D893AC9F14785DLL,0xCF3B400DBCAA1858LL},{2L,0xC0C0612BD21BC5A2LL},{1L,0x55E0F2B81B5B9F60LL}},{{0xC0C0612BD21BC5A2LL,0x774FFFC1FBAA2024LL},{(-1L),6L},{4L,(-1L)},{0x554A0114DBB63825LL,(-4L)},{1L,0x55E0F2B81B5B9F60LL},{2L,(-4L)},{0xA5B75E13FDBFCB89LL,(-1L)},{0xE26E5889583E5B37LL,0xA5B75E13FDBFCB89LL},{0x05F935A995DEE4CCLL,(-4L)},{0x05F935A995DEE4CCLL,0xA5B75E13FDBFCB89LL}},{{0xE26E5889583E5B37LL,(-1L)},{0xA5B75E13FDBFCB89LL,(-4L)},{2L,0x55E0F2B81B5B9F60LL},{1L,(-4L)},{(-4L),(-1L)},{(-1L),0x55E0F2B81B5B9F60LL},{0xB506FCD4EAFA9E5BLL,(-4L)},{0xA5B75E13FDBFCB89LL,1L},{(-1L),0xA5B75E13FDBFCB89LL},{(-10L),0x84F51DD79855BC48LL}},{{0x05F935A995DEE4CCLL,(-8L)},{(-1L),(-1L)},{(-8L),(-4L)},{2L,0xB24DC737EB4EF385LL},{(-1L),(-4L)},{(-1L),(-4L)},{(-1L),0xB24DC737EB4EF385LL},{2L,(-4L)},{(-8L),(-1L)},{(-1L),(-8L)}},{{0x05F935A995DEE4CCLL,0x84F51DD79855BC48LL},{(-10L),0xA5B75E13FDBFCB89LL},{(-1L),1L},{0xA5B75E13FDBFCB89LL,(-4L)},{0xB506FCD4EAFA9E5BLL,0x55E0F2B81B5B9F60LL},{(-1L),(-1L)},{(-4L),(-4L)},{1L,0x55E0F2B81B5B9F60LL},{2L,(-4L)},{0xA5B75E13FDBFCB89LL,(-1L)}},{{0xE26E5889583E5B37LL,0xA5B75E13FDBFCB89LL},{0x05F935A995DEE4CCLL,(-4L)},{0x05F935A995DEE4CCLL,0xA5B75E13FDBFCB89LL},{0xE26E5889583E5B37LL,(-1L)},{0xA5B75E13FDBFCB89LL,(-4L)},{2L,0x55E0F2B81B5B9F60LL},{1L,(-4L)},{(-4L),(-1L)},{(-1L),0x55E0F2B81B5B9F60LL},{0xB506FCD4EAFA9E5BLL,(-4L)}},{{0xA5B75E13FDBFCB89LL,1L},{(-1L),0xA5B75E13FDBFCB89LL},{(-10L),0x84F51DD79855BC48LL},{0x05F935A995DEE4CCLL,(-8L)},{(-1L),(-1L)},{(-8L),(-4L)},{2L,0xB24DC737EB4EF385LL},{(-1L),(-4L)},{(-1L),(-4L)},{(-1L),0xB24DC737EB4EF385LL}},{{2L,(-4L)},{(-8L),(-1L)},{(-1L),(-8L)},{0x05F935A995DEE4CCLL,0x84F51DD79855BC48LL},{(-10L),0xA5B75E13FDBFCB89LL},{(-1L),1L},{0xA5B75E13FDBFCB89LL,(-4L)},{0xB506FCD4EAFA9E5BLL,0x55E0F2B81B5B9F60LL},{(-1L),(-1L)},{(-4L),(-4L)}},{{1L,0x55E0F2B81B5B9F60LL},{2L,(-4L)},{0xA5B75E13FDBFCB89LL,(-1L)},{0xE26E5889583E5B37LL,0xA5B75E13FDBFCB89LL},{0x05F935A995DEE4CCLL,(-4L)},{0x05F935A995DEE4CCLL,0xA5B75E13FDBFCB89LL},{0xE26E5889583E5B37LL,(-1L)},{0xA5B75E13FDBFCB89LL,(-4L)},{2L,0x55E0F2B81B5B9F60LL},{1L,(-4L)}}};



static uint16_t func_1(void);
static uint8_t func_8(int8_t * p_9, const int32_t p_10, int8_t * p_11, int8_t * const p_12);
static union U0 func_13(union U0 p_14, const uint64_t p_15);
static const uint64_t func_17(int16_t p_18, uint64_t p_19, int64_t p_20);
static int16_t func_21(int32_t p_22, int64_t p_23);
static int32_t func_24(int8_t * const p_25, uint16_t p_26, int32_t p_27, uint8_t p_28, int8_t * p_29);
static uint16_t func_34(int64_t p_35);
static int8_t ** func_41(int8_t p_42, const int8_t ** p_43);
static int8_t ** func_50(uint32_t p_51, const int8_t p_52, int32_t p_53);
static const int8_t func_54(int8_t * p_55, int16_t p_56, int8_t * p_57, int8_t * p_58, int8_t p_59);
# 147 "<stdin>"
static uint16_t func_1(void)
{
    uint64_t l_5 = 0x6B8F3D4210E164CALL;
    int32_t l_2552 = 4L;
    int32_t l_2581 = 0L;
    int32_t l_2600 = 0xB5CBB4EEL;
    int32_t l_2603 = 8L;
    int32_t l_2604 = (-1L);
    int16_t l_2614 = 0xDE17L;
    const int64_t *l_2631 = &g_2613;
    const int64_t **l_2630 = &l_2631;
    int32_t ***l_2663 = &g_200;
    int32_t ****l_2662 = &l_2663;
    uint16_t l_2693[7][4] = {{4UL,0xB93AL,65534UL,0xC102L},{1UL,0xB93AL,0xB93AL,1UL},{0xB93AL,1UL,4UL,0x87A6L},{0xB93AL,4UL,0xB93AL,65534UL},{1UL,0x87A6L,65534UL,65534UL},{4UL,4UL,0xC102L,0x87A6L},{0x87A6L,1UL,0xC102L,1UL}};
    int i, j;
    for (g_2 = 0; (g_2 != (-21)); g_2 = safe_sub_func_int16_t_s_s(g_2, 7))
    {
        int32_t l_36[9][5] = {{(-2L),(-9L),0x54E5878EL,0x54E5878EL,(-9L)},{0xD683A7EFL,0x7C3B7C39L,(-1L),(-1L),0x7C3B7C39L},{0L,0x9D940313L,(-9L),(-9L),0x9D940313L},{0xE13CA4D9L,(-10L),0x7C3B7C39L,0x7C3B7C39L,(-10L)},{0L,0x9D940313L,(-9L),(-9L),0x9D940313L},{0xE13CA4D9L,(-10L),0x7C3B7C39L,0x7C3B7C39L,(-10L)},{0L,0x9D940313L,(-9L),(-9L),0x9D940313L},{0xE13CA4D9L,(-10L),0x7C3B7C39L,0x7C3B7C39L,(-10L)},{0L,0x9D940313L,(-9L),(-9L),0x9D940313L}};
        int8_t *l_2465 = (void*)0;
        uint64_t l_2551 = 18446744073709551606UL;
        int32_t ***l_2554 = &g_168;
        int32_t ****l_2553[9][1] = {{&l_2554},{&l_2554},{&l_2554},{&l_2554},{&l_2554},{&l_2554},{&l_2554},{&l_2554},{&l_2554}};
        uint8_t *l_2560 = &g_225[1];
        uint8_t **l_2559 = &l_2560;
        const uint8_t *l_2573 = &g_2574;
        union U0 ** const *l_2588 = &g_1005;
        int8_t *l_2595[1];
        const int8_t ***l_2596 = &g_1960;
        int32_t l_2686 = 0xB34B0FC2L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_2595[i] = &g_795[0];
    }
    return (**g_364);
}







static uint8_t func_8(int8_t * p_9, const int32_t p_10, int8_t * p_11, int8_t * const p_12)
{
    uint8_t l_2550 = 0xCDL;
    for (g_101 = 0; (g_101 == 19); g_101 = safe_add_func_int32_t_s_s(g_101, 7))
    {
        (*g_2046) = (*g_2046);
    }
    return l_2550;
}







static union U0 func_13(union U0 p_14, const uint64_t p_15)
{
    int32_t *l_2547 = (void*)0;
    (*g_169) = l_2547;
    return (**g_1005);
}







static const uint64_t func_17(int16_t p_18, uint64_t p_19, int64_t p_20)
{
    int16_t l_2496 = 0x9454L;
    int32_t l_2497 = 0x0613DEB3L;
    int32_t l_2505 = 0x7C181CA3L;
    int32_t l_2506[9] = {0xD9DF8FDDL,5L,0xD9DF8FDDL,0xD9DF8FDDL,5L,0xD9DF8FDDL,0xD9DF8FDDL,5L,0xD9DF8FDDL};
    uint16_t l_2545 = 0xC4DFL;
    int32_t l_2546 = 0xA2B20D85L;
    int i;
    for (g_2479 = 0; (g_2479 < 7); g_2479 = safe_add_func_uint64_t_u_u(g_2479, 6))
    {
        int32_t *l_2498 = &g_171;
        int32_t *l_2499 = (void*)0;
        int32_t *l_2500 = &l_2497;
        int32_t *l_2501 = &g_40;
        int32_t *l_2502 = &g_40;
        int32_t *l_2503 = (void*)0;
        int32_t *l_2504[4][7][4] = {{{&g_171,&l_2497,&g_375,(void*)0},{&g_2,&l_2497,&g_375,&g_2},{&l_2497,&g_171,&g_171,&g_375},{&g_233,&l_2497,&g_233,&g_375},{&g_2,&g_375,&g_2,&l_2497},{&l_2497,&g_171,(void*)0,&g_375},{&l_2497,&g_2,(void*)0,&g_171}},{{&l_2497,&l_2497,&g_2,&g_233},{&g_2,&g_233,&g_233,&g_2},{&g_233,&g_2,&g_171,&l_2497},{&l_2497,&l_2497,&g_375,&l_2497},{&g_2,&l_2497,&g_375,&l_2497},{&g_171,&l_2497,(void*)0,&l_2497},{&g_375,&g_2,&l_2497,&g_2}},{{&l_2497,&g_233,&g_375,&g_233},{&g_171,&l_2497,&g_233,&g_171},{&l_2497,&g_2,&g_171,&g_375},{&l_2497,&g_171,&g_233,&l_2497},{&g_171,&g_375,&g_375,&g_375},{&l_2497,&l_2497,&l_2497,&g_375},{&g_375,&g_171,(void*)0,&g_2}},{{&g_171,&l_2497,&g_375,(void*)0},{&g_2,&l_2497,&g_375,&g_2},{&l_2497,&g_171,&g_171,&g_375},{&g_233,&l_2497,&g_233,&g_375},{&g_2,&g_375,&g_2,&l_2497},{&l_2497,&g_171,(void*)0,&g_375},{&l_2497,&g_2,(void*)0,&g_171}}};
        int64_t l_2507 = 0x818BD6F40EFEF755LL;
        int32_t l_2508 = (-8L);
        int i, j, k;
        g_2509++;
    }
    (*g_169) = &l_2497;
    if (g_2509)
        goto lbl_2524;
lbl_2524:
    l_2497 &= (safe_mul_func_int16_t_s_s((((1L > (p_19 <= l_2506[0])) && l_2496) , (0UL <= ((*g_2285) == ((p_20 >= (safe_mul_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((*g_2285) , 0x83B28E97L), l_2496)) == 0x43A52A939C44DB59LL), p_18)) >= l_2506[8]), l_2506[0])), 255UL)) > l_2505), l_2496))) != 2L)))), p_20));
    l_2505 = (safe_add_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((l_2545 ^= (((((((0x50EBE5B65932F7B6LL != (**g_2284)) < ((safe_rshift_func_int16_t_s_u((p_18 = 0x0063L), 10)) ^ (-1L))) >= (safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s(l_2496, (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(l_2506[8], ((((*g_2046) &= (l_2496 , ((void*)0 == &l_2496))) & l_2506[3]) || p_20))), (*g_772))), p_19)))), l_2505)) > l_2496), p_19))) || 1L) ^ p_20) >= 0xFCL) >= l_2497)) && l_2505), l_2506[4])), l_2546)) < p_19), 0x72195FE11829856DLL));
    return (*g_2285);
}







static int16_t func_21(int32_t p_22, int64_t p_23)
{
    uint8_t l_2489 = 0xD7L;
    int32_t *l_2490 = (void*)0;
    int32_t *l_2491 = &g_1759[5][4];
    int32_t *l_2492 = &g_127;
    for (g_171 = 0; (g_171 < (-17)); g_171--)
    {
        uint32_t l_2484 = 0xE2ECDC1EL;
        p_22 = l_2484;
    }
    (*g_2046) &= (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((0x533B45F67C342005LL > l_2489), 6)) < (((*l_2492) = ((*l_2491) = (-7L))) , (!(l_2489 <= (p_22 == 0x4EC0L))))), g_1292));
    return p_23;
}







static int32_t func_24(int8_t * const p_25, uint16_t p_26, int32_t p_27, uint8_t p_28, int8_t * p_29)
{
    const uint64_t l_2468 = 0xDC1D2506ECFAAC7BLL;
    int32_t l_2473 = 0L;
    int32_t l_2476 = 0xA82B9885L;
    int32_t *l_2477 = &g_101;
    int32_t *l_2478[3][8] = {{(void*)0,&l_2476,(void*)0,&l_2476,(void*)0,&l_2476,(void*)0,&l_2476},{(void*)0,&l_2476,(void*)0,&l_2476,(void*)0,&l_2476,(void*)0,&l_2476},{(void*)0,&l_2476,(void*)0,&l_2476,(void*)0,&l_2476,(void*)0,&l_2476}};
    int i, j;
    (****g_1614) = ((safe_sub_func_uint8_t_u_u((l_2468 != ((0x8F2DC45E2B336139LL == 0x38DF57FC7AC5DB4ELL) & l_2468)), (l_2473 ^= (safe_rshift_func_int16_t_s_s(((2L | (*g_2206)) > ((safe_mod_func_uint16_t_u_u(65530UL, 0x99E8L)) , 1UL)), (*g_518)))))) , (***g_1615));
    (*g_2046) |= ((p_27 < l_2468) && (safe_mul_func_int8_t_s_s(l_2473, (p_26 > l_2473))));
    (*g_169) = &l_2473;
    g_2479--;
    return (*l_2477);
}







static uint16_t func_34(int64_t p_35)
{
    int8_t *l_60 = &g_31;
    int32_t *l_2113 = &g_375;
    int32_t l_2155 = 0x0CB0CA4CL;
    int32_t l_2156 = 1L;
    int32_t l_2157 = (-1L);
    int32_t l_2158 = 0xFB94FD68L;
    int32_t l_2159 = 0L;
    int32_t l_2160 = 0x43430D16L;
    uint64_t l_2161[7][9][4] = {{{0xE38119FD0A98DC74LL,4UL,3UL,4UL},{0xB2150618028CFF27LL,0x61C2E1E14408ACB9LL,1UL,0xC516764E4655062ALL},{0UL,0xD503745B357F9CDELL,2UL,0x043A5CBA9923A281LL},{0x6D3C6D8B248997D2LL,4UL,0x88447C760432C3FCLL,0x01D5472B14F8C334LL},{0x6D3C6D8B248997D2LL,0x51872582D2ECE790LL,2UL,1UL},{0UL,0x01D5472B14F8C334LL,1UL,0x4271DECC0E9B9C9FLL},{0xB2150618028CFF27LL,0x0243BE30DEAA8DCALL,3UL,0x01D5472B14F8C334LL},{0xE6F80BECAC809975LL,0x043A5CBA9923A281LL,18446744073709551615UL,4UL},{2UL,0xD503745B357F9CDELL,1UL,0x6551C80D2B85DA36LL}},{{0x2C4A506731C5A12ALL,0xD503745B357F9CDELL,0xE38119FD0A98DC74LL,4UL},{0x6D3C6D8B248997D2LL,0x043A5CBA9923A281LL,2UL,0x01D5472B14F8C334LL},{2UL,0x0243BE30DEAA8DCALL,2UL,0x4271DECC0E9B9C9FLL},{0x2C4A506731C5A12ALL,0x01D5472B14F8C334LL,0x5026C6EB9C293057LL,1UL},{0xB2150618028CFF27LL,0x51872582D2ECE790LL,18446744073709551615UL,0x01D5472B14F8C334LL},{18446744073709551615UL,4UL,18446744073709551615UL,0x043A5CBA9923A281LL},{0xB2150618028CFF27LL,0xD503745B357F9CDELL,0x5026C6EB9C293057LL,0xC516764E4655062ALL},{0x2C4A506731C5A12ALL,0x61C2E1E14408ACB9LL,2UL,4UL},{2UL,4UL,2UL,0xD866749929E31249LL}},{{0x6D3C6D8B248997D2LL,0x0243BE30DEAA8DCALL,0xE38119FD0A98DC74LL,1UL},{0x2C4A506731C5A12ALL,0xD866749929E31249LL,1UL,1UL},{2UL,0x0243BE30DEAA8DCALL,18446744073709551615UL,0xD866749929E31249LL},{0xE6F80BECAC809975LL,4UL,3UL,4UL},{0xB2150618028CFF27LL,0x61C2E1E14408ACB9LL,1UL,0xC516764E4655062ALL},{0UL,0xD503745B357F9CDELL,2UL,0x043A5CBA9923A281LL},{0x6D3C6D8B248997D2LL,4UL,0x88447C760432C3FCLL,0x01D5472B14F8C334LL},{0x6D3C6D8B248997D2LL,0x51872582D2ECE790LL,2UL,1UL},{0UL,0x01D5472B14F8C334LL,1UL,0x4271DECC0E9B9C9FLL}},{{0xB2150618028CFF27LL,0x0243BE30DEAA8DCALL,3UL,0x01D5472B14F8C334LL},{0xE6F80BECAC809975LL,0x043A5CBA9923A281LL,18446744073709551615UL,4UL},{2UL,0xD503745B357F9CDELL,1UL,0x6551C80D2B85DA36LL},{0x2C4A506731C5A12ALL,0xD503745B357F9CDELL,0xE38119FD0A98DC74LL,4UL},{0x6D3C6D8B248997D2LL,0x043A5CBA9923A281LL,2UL,0x01D5472B14F8C334LL},{2UL,0x0243BE30DEAA8DCALL,2UL,0x4271DECC0E9B9C9FLL},{0x2C4A506731C5A12ALL,0x01D5472B14F8C334LL,0x5026C6EB9C293057LL,1UL},{0xB2150618028CFF27LL,0x51872582D2ECE790LL,18446744073709551615UL,0x01D5472B14F8C334LL},{18446744073709551615UL,4UL,18446744073709551615UL,0x043A5CBA9923A281LL}},{{0xB2150618028CFF27LL,0xD503745B357F9CDELL,0x5026C6EB9C293057LL,0xC516764E4655062ALL},{0x2C4A506731C5A12ALL,0x61C2E1E14408ACB9LL,2UL,4UL},{2UL,4UL,2UL,0xD866749929E31249LL},{0x6D3C6D8B248997D2LL,0x0243BE30DEAA8DCALL,0xE38119FD0A98DC74LL,1UL},{0x2C4A506731C5A12ALL,0xD866749929E31249LL,1UL,1UL},{2UL,0x0243BE30DEAA8DCALL,18446744073709551615UL,0xD866749929E31249LL},{0xE6F80BECAC809975LL,4UL,3UL,4UL},{0xB2150618028CFF27LL,0x61C2E1E14408ACB9LL,1UL,0xC516764E4655062ALL},{0UL,0xD503745B357F9CDELL,2UL,0x043A5CBA9923A281LL}},{{0x6D3C6D8B248997D2LL,4UL,0x88447C760432C3FCLL,0x01D5472B14F8C334LL},{0x6D3C6D8B248997D2LL,0x51872582D2ECE790LL,2UL,1UL},{0UL,0x01D5472B14F8C334LL,1UL,0x4271DECC0E9B9C9FLL},{0x9FC26041929319AFLL,0x6B8E888B2F59E0D2LL,0xB2150618028CFF27LL,0x4271DECC0E9B9C9FLL},{1UL,1UL,0x88447C760432C3FCLL,0x61C2E1E14408ACB9LL},{1UL,0xD866749929E31249LL,3UL,18446744073709551608UL},{2UL,0xD866749929E31249LL,0xE6F80BECAC809975LL,0x61C2E1E14408ACB9LL},{18446744073709551615UL,1UL,1UL,0x4271DECC0E9B9C9FLL},{1UL,0x6B8E888B2F59E0D2LL,1UL,0xCCECE4D99E5CBC07LL}},{{2UL,0x4271DECC0E9B9C9FLL,0x7E7CD90A56F7EC73LL,0x6551C80D2B85DA36LL},{0x9FC26041929319AFLL,0x746226BA7BF06610LL,0x88447C760432C3FCLL,0x4271DECC0E9B9C9FLL},{0x5026C6EB9C293057LL,0x61C2E1E14408ACB9LL,0x88447C760432C3FCLL,1UL},{0x9FC26041929319AFLL,0xD866749929E31249LL,0x7E7CD90A56F7EC73LL,0x51872582D2ECE790LL},{2UL,0xCEA30C062ACBDBD7LL,1UL,0x61C2E1E14408ACB9LL},{1UL,0x61C2E1E14408ACB9LL,1UL,0UL},{18446744073709551615UL,0x6B8E888B2F59E0D2LL,0xE6F80BECAC809975LL,0x6551C80D2B85DA36LL},{2UL,0UL,3UL,0x6551C80D2B85DA36LL},{1UL,0x6B8E888B2F59E0D2LL,0x88447C760432C3FCLL,0UL}}};
    int16_t **l_2188 = &g_518;
    int8_t l_2200 = (-7L);
    int32_t l_2204 = (-10L);
    const int32_t *l_2205 = &l_2204;
    uint32_t *** const l_2219 = (void*)0;
    uint32_t *** const *l_2218 = &l_2219;
    uint32_t *** const **l_2217 = &l_2218;
    int32_t ***l_2243 = &g_168;
    int32_t l_2256 = 1L;
    int32_t l_2257 = 1L;
    int32_t l_2261 = 1L;
    int32_t l_2262 = 0L;
    int32_t l_2264 = 0x455895EBL;
    int64_t l_2266 = (-9L);
    int32_t l_2267[2][7][1] = {{{0x5C225484L},{4L},{1L},{4L},{0x5C225484L},{(-1L)},{0x5C225484L}},{{4L},{1L},{4L},{0x5C225484L},{(-1L)},{0x5C225484L},{4L}}};
    int64_t *l_2280[6][7] = {{&g_130,(void*)0,&g_286,&g_286,&g_286,&g_523,&g_523},{&g_523,&g_451,&l_2266,&g_451,&g_523,&g_286,&g_130},{&g_523,&g_130,&l_2266,&g_451,&g_451,&l_2266,&g_523},{&g_451,&g_523,&g_286,&l_2266,&l_2266,&g_286,&g_523},{&g_523,&g_451,&g_130,&g_130,(void*)0,&g_286,&g_286},{&g_523,&g_451,&g_286,&l_2266,&g_286,&l_2266,&g_286}};
    uint32_t l_2327 = 4294967295UL;
    int8_t * const *l_2388 = &g_467;
    int8_t * const **l_2387[4][3][4] = {{{&l_2388,&l_2388,&l_2388,&l_2388},{&l_2388,&l_2388,&l_2388,&l_2388},{&l_2388,&l_2388,&l_2388,&l_2388}},{{&l_2388,&l_2388,&l_2388,&l_2388},{&l_2388,&l_2388,&l_2388,&l_2388},{&l_2388,&l_2388,&l_2388,&l_2388}},{{&l_2388,&l_2388,&l_2388,&l_2388},{&l_2388,&l_2388,&l_2388,&l_2388},{&l_2388,&l_2388,&l_2388,&l_2388}},{{&l_2388,&l_2388,&l_2388,&l_2388},{&l_2388,&l_2388,&l_2388,&l_2388},{&l_2388,&l_2388,&l_2388,&l_2388}}};
    int8_t * const ***l_2386 = &l_2387[0][2][3];
    int16_t l_2419 = 1L;
    int16_t ***l_2442 = &g_517[3][0];
    int i, j, k;
    for (g_31 = 0; (g_31 != (-28)); g_31--)
    {
        int32_t l_39[1][3][1];
        int8_t *l_49[9][1][1] = {{{&g_31}},{{&g_31}},{{&g_31}},{{&g_31}},{{&g_31}},{{&g_31}},{{&g_31}},{{&g_31}},{{&g_31}}};
        int8_t ** const l_48 = &l_49[8][0][0];
        int32_t *l_2112[1][6][9] = {{{&g_171,&g_40,&g_40,&g_171,&g_171,(void*)0,&g_171,&g_171,&g_40},{(void*)0,(void*)0,&g_171,&g_2,&g_171,&g_2,&g_171,(void*)0,(void*)0},{(void*)0,&g_40,&g_2,(void*)0,&g_2,&g_40,(void*)0,(void*)0,&g_40},{&g_2,&g_233,(void*)0,&g_233,&g_2,&g_171,&g_171,&g_2,&g_233},{(void*)0,&g_2,(void*)0,(void*)0,&g_171,&g_171,(void*)0,(void*)0,&g_2},{&g_171,&g_2,&g_171,(void*)0,(void*)0,&g_171,&g_2,&g_171,&g_2}}};
        int16_t ****l_2145[4][9] = {{&g_971,&g_971,&g_971,(void*)0,(void*)0,&g_971,&g_971,&g_971,(void*)0},{&g_971,(void*)0,(void*)0,&g_971,&g_971,&g_971,(void*)0,(void*)0,&g_971},{&g_971,(void*)0,&g_971,(void*)0,&g_971,&g_971,(void*)0,&g_971,(void*)0},{(void*)0,&g_971,&g_971,&g_971,&g_971,(void*)0,&g_971,&g_971,&g_971}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_39[i][j][k] = 0x1DD79339L;
            }
        }
        for (p_35 = 0; (p_35 >= 0); p_35 -= 1)
        {
            int32_t *l_2111 = &g_171;
            union U0 l_2115[10] = {{0x2953L},{0x2953L},{0x2953L},{0x2953L},{0x2953L},{0x2953L},{0x2953L},{0x2953L},{0x2953L},{0x2953L}};
            int64_t ***l_2125 = &g_266;
            int64_t **** const l_2124 = &l_2125;
            int32_t l_2135 = 1L;
            int32_t l_2136 = 0xB3AF78C4L;
            int i;
            for (g_40 = 0; (g_40 >= 0); g_40 -= 1)
            {
                const int8_t *l_61 = &g_62;
                int8_t *l_272 = (void*)0;
                int8_t *l_273 = &g_274;
                int32_t l_275[10];
                int8_t ***l_753 = &g_466[0][0];
                const int8_t *l_755[5] = {&g_62,&g_62,&g_62,&g_62,&g_62};
                const int8_t **l_754 = &l_755[0];
                int32_t *l_2114 = &g_375;
                int i;
                for (i = 0; i < 10; i++)
                    l_275[i] = 0L;
            }
            (****g_1614) ^= (*l_2111);
            if (p_35)
                continue;
            for (g_143 = 0; (g_143 <= 0); g_143 += 1)
            {
                int32_t l_2117 = 0x113DB586L;
                int32_t l_2119 = 0x70EDC5ECL;
                int16_t l_2134 = 0x8061L;
                uint8_t *l_2154 = &g_95;
                for (g_233 = 0; (g_233 <= 0); g_233 += 1)
                {
                    uint32_t *l_2118 = (void*)0;
                    uint64_t *l_2122 = (void*)0;
                    uint64_t *l_2123 = &g_1244;
                    uint32_t *l_2132[5][8] = {{&g_1292,&g_1292,&g_796[6][3][1],&g_796[0][8][1],&g_796[6][3][1],&g_1292,&g_1292,&g_796[6][3][1]},{&g_796[7][8][1],&g_796[6][3][1],&g_796[6][3][1],&g_796[7][8][1],&g_796[1][7][0],&g_796[7][8][1],&g_796[6][3][1],&g_796[6][3][1]},{&g_796[6][3][1],&g_796[1][7][0],&g_796[0][8][1],&g_796[0][8][1],&g_796[1][7][0],&g_796[6][3][1],&g_796[1][7][0],&g_796[0][8][1]},{&g_796[7][8][1],&g_796[1][7][0],&g_796[7][8][1],&g_796[6][3][1],&g_796[6][3][1],&g_796[7][8][1],&g_796[1][7][0],&g_796[7][8][1]},{&g_1292,&g_796[6][3][1],&g_796[0][8][1],&g_796[6][3][1],&g_1292,&g_1292,&g_796[6][3][1],&g_796[0][8][1]}};
                    int32_t l_2133 = 8L;
                    int32_t l_2140 = 1L;
                    int32_t l_2141 = 0xC91CA63CL;
                    int i, j, k;
                    l_2119 |= ((l_2115[4] , g_2) && ((~l_2117) > ((void*)0 == l_2118)));
                    (**g_1616) |= l_2117;
                    if ((((((((*l_2123) = (safe_rshift_func_int16_t_s_s(p_35, 15))) , (l_2124 != ((((*l_2113) <= ((safe_mul_func_int16_t_s_s(0L, p_35)) , g_1244)) , (safe_add_func_uint32_t_u_u((((*g_518) = ((g_796[0][8][1] ^= ((*g_772) | (((safe_add_func_int32_t_s_s(p_35, 4294967290UL)) , 0UL) < (*l_2111)))) > g_274)) == p_35), p_35))) , (void*)0))) && 0x0892L) <= 65531UL) != l_2133) != p_35))
                    {
                        uint64_t l_2137[6][7][6] = {{{0x38B0DACAF346C8EALL,0xE268365652690A63LL,0xB7D986BF88CC17E2LL,0xE268365652690A63LL,0x38B0DACAF346C8EALL,2UL},{0xF4042E0B307BF795LL,1UL,0xFD7A1EBC9326246BLL,0x42B3FC87B302CBC4LL,0x55B41805AE8A67A0LL,0x1EA34FD0DEDD16BDLL},{0xF280869599E22812LL,18446744073709551615UL,0xBCEFE97C8AD55D9ALL,1UL,18446744073709551611UL,0x1EA34FD0DEDD16BDLL},{0UL,0xDB5B34FF2D55D3BELL,0xFD7A1EBC9326246BLL,9UL,0x310F39FE9454B42CLL,2UL},{18446744073709551611UL,18446744073709551609UL,0xB7D986BF88CC17E2LL,0x2BD436219FDD49A4LL,1UL,1UL},{0x1EA34FD0DEDD16BDLL,0xB7D986BF88CC17E2LL,18446744073709551615UL,0xF4042E0B307BF795LL,18446744073709551606UL,7UL},{9UL,0x5E8A440665D72AE1LL,18446744073709551615UL,2UL,18446744073709551615UL,0xB2D90C28791B00C3LL}},{{0x375787EC679D41D1LL,18446744073709551606UL,18446744073709551612UL,0UL,18446744073709551615UL,0x2BD436219FDD49A4LL},{6UL,0x772AC288FB31F79DLL,0xDC695E7397E21AE2LL,18446744073709551609UL,0x7F5435085358AC2ELL,0x35F3850ECD05A9BBLL},{0x2A1B42956FC2D762LL,0x2BD436219FDD49A4LL,18446744073709551611UL,0UL,0xFD7A1EBC9326246BLL,0x7F5435085358AC2ELL},{0x06C09E53F83BD7E1LL,5UL,0xD6E7BBDDACD7A26FLL,5UL,0x310F39FE9454B42CLL,0xDB5B34FF2D55D3BELL},{0x8F89870F34082CCCLL,1UL,1UL,1UL,0xF4042E0B307BF795LL,2UL},{0x38B0DACAF346C8EALL,18446744073709551612UL,2UL,0x1EA34FD0DEDD16BDLL,18446744073709551615UL,4UL},{0x38B0DACAF346C8EALL,0x71B381EAFD68FCE5LL,0x1EA34FD0DEDD16BDLL,1UL,0UL,18446744073709551615UL}},{{0x8F89870F34082CCCLL,0xF4042E0B307BF795LL,0x0D6F0381F6D5568ELL,5UL,0x197A97A6A314E8DBLL,18446744073709551609UL},{0xDB5B34FF2D55D3BELL,18446744073709551614UL,0xAF1901878830C378LL,18446744073709551612UL,5UL,0x71B381EAFD68FCE5LL},{0x3C2B81452317F37FLL,0xB2317F3169F9908FLL,1UL,18446744073709551611UL,0UL,0x1EA34FD0DEDD16BDLL},{0x5E8A440665D72AE1LL,0UL,18446744073709551609UL,6UL,0x8F89870F34082CCCLL,0x2BD436219FDD49A4LL},{0x85611DFC2BB03F13LL,18446744073709551615UL,0xC3F385F19456CBE9LL,0UL,0xB7D986BF88CC17E2LL,1UL},{0xB2D90C28791B00C3LL,18446744073709551611UL,0xB2317F3169F9908FLL,0xE268365652690A63LL,6UL,0x375787EC679D41D1LL},{0UL,18446744073709551608UL,0xB2D90C28791B00C3LL,0xDC695E7397E21AE2LL,0xB2D90C28791B00C3LL,18446744073709551608UL}},{{1UL,1UL,0x55B41805AE8A67A0LL,0xB2D90C28791B00C3LL,0x2A1B42956FC2D762LL,0xAF1901878830C378LL},{18446744073709551609UL,5UL,0x375787EC679D41D1LL,0x38B0DACAF346C8EALL,18446744073709551611UL,18446744073709551606UL},{18446744073709551606UL,5UL,0xF4042E0B307BF795LL,18446744073709551614UL,0x2A1B42956FC2D762LL,0x85611DFC2BB03F13LL},{0xE268365652690A63LL,1UL,0x772AC288FB31F79DLL,4UL,0xB2D90C28791B00C3LL,0UL},{7UL,18446744073709551608UL,0x35F3850ECD05A9BBLL,9UL,6UL,18446744073709551615UL},{0x310F39FE9454B42CLL,18446744073709551611UL,0xBCEFE97C8AD55D9ALL,0xC3F385F19456CBE9LL,0xB7D986BF88CC17E2LL,18446744073709551615UL},{1UL,18446744073709551615UL,18446744073709551611UL,0x35F3850ECD05A9BBLL,0x8F89870F34082CCCLL,0xC3F385F19456CBE9LL}},{{0x375787EC679D41D1LL,0UL,1UL,7UL,0UL,5UL},{1UL,0xB2317F3169F9908FLL,0x5E8A440665D72AE1LL,0xDB5B34FF2D55D3BELL,5UL,0x772AC288FB31F79DLL},{2UL,18446744073709551614UL,18446744073709551612UL,0x197A97A6A314E8DBLL,0x197A97A6A314E8DBLL,18446744073709551612UL},{0xF4042E0B307BF795LL,0xF4042E0B307BF795LL,0xE268365652690A63LL,0x7F5435085358AC2ELL,0UL,1UL},{18446744073709551612UL,0x71B381EAFD68FCE5LL,9UL,0UL,18446744073709551615UL,0xE268365652690A63LL},{0xB7D986BF88CC17E2LL,18446744073709551612UL,9UL,1UL,0xF4042E0B307BF795LL,1UL},{0xC3F385F19456CBE9LL,1UL,0xE268365652690A63LL,0x55B41805AE8A67A0LL,0x310F39FE9454B42CLL,18446744073709551612UL}},{{0x55B41805AE8A67A0LL,0x310F39FE9454B42CLL,18446744073709551612UL,0x8F89870F34082CCCLL,2UL,0x772AC288FB31F79DLL},{0x35F3850ECD05A9BBLL,0xDC695E7397E21AE2LL,0x5E8A440665D72AE1LL,18446744073709551606UL,0xFD7A1EBC9326246BLL,5UL},{0xFD7A1EBC9326246BLL,0xD6E7BBDDACD7A26FLL,1UL,0xF4042E0B307BF795LL,0x772AC288FB31F79DLL,0xC3F385F19456CBE9LL},{8UL,0x1EA34FD0DEDD16BDLL,18446744073709551611UL,1UL,0xBCEFE97C8AD55D9ALL,18446744073709551615UL},{18446744073709551612UL,0xB7D986BF88CC17E2LL,0xBCEFE97C8AD55D9ALL,0x772AC288FB31F79DLL,0x1EA34FD0DEDD16BDLL,18446744073709551615UL},{2UL,1UL,0x35F3850ECD05A9BBLL,0UL,0x375787EC679D41D1LL,0UL},{0x772AC288FB31F79DLL,0x8F89870F34082CCCLL,0x772AC288FB31F79DLL,0xAF1901878830C378LL,0x06C09E53F83BD7E1LL,0x85611DFC2BB03F13LL}}};
                        int i, j, k;
                        ++l_2137[5][0][5];
                    }
                    else
                    {
                        uint64_t l_2142 = 0xDDF3FE31C6B7E16ALL;
                        ++l_2142;
                        (*g_969) = l_2145[2][0];
                    }
                }
                (*l_2111) |= ((*l_2113) ^= ((***g_1615) &= p_35));
                l_2119 &= (((safe_lshift_func_int16_t_s_s(0x3F5DL, (g_718[0][0] > ((safe_lshift_func_uint16_t_u_u(((*g_365) ^= p_35), 0)) & (*l_2113))))) || (((safe_rshift_func_int8_t_s_u((((safe_mul_func_int16_t_s_s(p_35, l_2117)) >= ((*g_365) = ((*g_772) = 3UL))) ^ (*g_30)), ((*l_2154) |= ((*l_2111) ^ 0x42L)))) > 5UL) | (*l_2111))) | 0x3EB8L);
            }
        }
        ++l_2161[3][4][3];
    }
    for (g_95 = 0; (g_95 <= 7); g_95 += 1)
    {
        int32_t *l_2164 = &l_2160;
        int32_t *l_2165 = (void*)0;
        int32_t l_2166 = 0xF900F8B0L;
        int32_t *l_2167 = &g_375;
        int32_t *l_2168 = &g_375;
        uint64_t l_2169 = 18446744073709551607UL;
        uint16_t l_2176 = 65535UL;
        union U0 **l_2184[10][6][4] = {{{&g_1006,&g_1006,&g_1006,&g_1006},{(void*)0,(void*)0,&g_1006,(void*)0},{&g_1006,&g_1006,&g_1006,&g_1006},{(void*)0,&g_1006,(void*)0,&g_1006},{&g_1006,&g_1006,(void*)0,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0}},{{&g_1006,(void*)0,&g_1006,&g_1006},{(void*)0,&g_1006,&g_1006,(void*)0},{&g_1006,&g_1006,&g_1006,&g_1006},{&g_1006,(void*)0,(void*)0,&g_1006},{&g_1006,(void*)0,&g_1006,&g_1006},{&g_1006,(void*)0,&g_1006,&g_1006}},{{(void*)0,&g_1006,&g_1006,&g_1006},{(void*)0,(void*)0,&g_1006,&g_1006},{(void*)0,&g_1006,&g_1006,&g_1006},{(void*)0,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,&g_1006},{(void*)0,(void*)0,&g_1006,(void*)0}},{{(void*)0,&g_1006,&g_1006,&g_1006},{(void*)0,(void*)0,&g_1006,&g_1006},{&g_1006,(void*)0,&g_1006,&g_1006},{&g_1006,(void*)0,(void*)0,(void*)0},{&g_1006,(void*)0,&g_1006,&g_1006},{&g_1006,&g_1006,&g_1006,&g_1006}},{{(void*)0,&g_1006,&g_1006,(void*)0},{&g_1006,&g_1006,&g_1006,(void*)0},{&g_1006,&g_1006,(void*)0,&g_1006},{&g_1006,&g_1006,(void*)0,&g_1006},{(void*)0,&g_1006,&g_1006,(void*)0},{&g_1006,&g_1006,&g_1006,(void*)0}},{{(void*)0,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,(void*)0,&g_1006},{&g_1006,(void*)0,&g_1006,(void*)0},{&g_1006,(void*)0,(void*)0,&g_1006},{&g_1006,(void*)0,(void*)0,&g_1006},{&g_1006,(void*)0,(void*)0,&g_1006}},{{&g_1006,&g_1006,&g_1006,(void*)0},{&g_1006,(void*)0,(void*)0,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{&g_1006,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,(void*)0,&g_1006},{&g_1006,(void*)0,&g_1006,&g_1006}},{{&g_1006,&g_1006,(void*)0,&g_1006},{&g_1006,(void*)0,(void*)0,&g_1006},{&g_1006,(void*)0,(void*)0,&g_1006},{&g_1006,(void*)0,&g_1006,&g_1006},{&g_1006,&g_1006,(void*)0,(void*)0},{&g_1006,&g_1006,&g_1006,&g_1006}},{{(void*)0,&g_1006,(void*)0,&g_1006},{&g_1006,&g_1006,(void*)0,(void*)0},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,(void*)0,(void*)0},{&g_1006,&g_1006,(void*)0,&g_1006},{(void*)0,&g_1006,&g_1006,&g_1006}},{{(void*)0,&g_1006,(void*)0,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,(void*)0},{&g_1006,&g_1006,&g_1006,&g_1006},{&g_1006,(void*)0,(void*)0,&g_1006},{&g_1006,&g_1006,(void*)0,&g_1006}}};
        int8_t ** const l_2207 = &l_60;
        uint16_t l_2214[3][9] = {{65535UL,65527UL,0xB3F0L,65527UL,65535UL,65535UL,65527UL,0xB3F0L,65527UL},{65533UL,65535UL,0x1873L,0x1873L,65535UL,65533UL,65535UL,0x1873L,0x1873L},{65535UL,65535UL,65527UL,0xB3F0L,65527UL,65535UL,65535UL,65527UL,0xB3F0L}};
        int32_t l_2253 = 0x90A6C384L;
        int32_t l_2254 = 0x88DAD110L;
        int32_t l_2268[10][1][1] = {{{(-1L)}},{{0L}},{{(-1L)}},{{0L}},{{(-1L)}},{{0L}},{{(-1L)}},{{0L}},{{(-1L)}},{{0L}}};
        int64_t l_2377 = (-8L);
        int64_t **l_2392 = &l_2280[1][2];
        int32_t l_2393[7][9][4] = {{{6L,0x59130D6AL,(-1L),0xEB3B465BL},{9L,0x29D29410L,0x65F883C4L,1L},{0x426DFF54L,0L,0x7D9F5B39L,(-1L)},{0x80CF90B3L,0L,0x49B7E599L,0x29D29410L},{(-2L),0x426DFF54L,1L,0L},{0xBF0EB845L,(-6L),0x9F46419FL,0xBAD770E8L},{0xEB3B465BL,0x49FCEE94L,0x49B7E599L,0L},{(-1L),0x80CF90B3L,0x398B7322L,0xD7211DA2L},{0x426DFF54L,0xBF0EB845L,0x99E34645L,0L}},{{0L,(-3L),(-1L),0x2A1EE547L},{0x4C6E3196L,0x2613E538L,0x491C5C26L,9L},{0x2613E538L,0xBF0EB845L,0x985524BBL,0xBF0EB845L},{0x99625682L,(-1L),0L,0L},{0x554A24F0L,0xD7DB35C6L,1L,0x59130D6AL},{0L,(-6L),7L,0x4E3A12DFL},{0L,0x398B7322L,1L,0x29D29410L},{0x554A24F0L,0x4E3A12DFL,0L,0x554A24F0L},{0x99625682L,0L,0x985524BBL,0x0B0BE5E1L}},{{0x2613E538L,7L,0x491C5C26L,0xEB3B465BL},{0x4C6E3196L,0xBAD770E8L,(-1L),(-2L)},{0L,0x29D29410L,0x99E34645L,0x0B0BE5E1L},{0x426DFF54L,9L,0x398B7322L,(-1L)},{(-1L),0x4E3A12DFL,0x49B7E599L,7L},{0xEB3B465BL,0x426DFF54L,0x9F46419FL,0x4E3A12DFL},{0xBF0EB845L,1L,1L,0xBAD770E8L},{(-2L),0xD7DB35C6L,0x49B7E599L,0x49B7E599L},{0x80CF90B3L,0x80CF90B3L,0x99625682L,0L}},{{(-1L),(-1L),7L,1L},{1L,0xD7211DA2L,(-1L),7L},{0xDB117B1EL,0xD7211DA2L,0L,1L},{0xD7211DA2L,(-1L),0x7D9F5B39L,0L},{2L,0x4C6E3196L,(-1L),0x985524BBL},{0x398B7322L,0x59130D6AL,0xEB3B465BL,0x491C5C26L},{0x554A24F0L,(-9L),0xF6A103F6L,(-1L)},{0x985524BBL,(-1L),(-9L),0x99E34645L},{0x398B7322L,(-1L),0x80CF90B3L,0x398B7322L}},{{7L,1L,0x7D9F5B39L,0x49B7E599L},{0xF6A103F6L,0x65F883C4L,0xD59BC499L,0x9F46419FL},{0xDB117B1EL,0x491C5C26L,6L,1L},{1L,0x99E34645L,7L,0x49B7E599L},{0x623FBD53L,1L,0x623FBD53L,0x7D9F5B39L},{0x4C6E3196L,(-1L),(-1L),0x65F883C4L},{1L,0x623FBD53L,0L,(-1L)},{(-1L),(-2L),0L,(-1L)},{1L,0x59130D6AL,(-1L),0x554A24F0L}},{{0x4C6E3196L,(-1L),0x623FBD53L,0L},{0x623FBD53L,0L,7L,1L},{1L,0xD7211DA2L,6L,(-3L)},{0xDB117B1EL,0xF6A103F6L,0xD59BC499L,1L},{0xF6A103F6L,0L,0x7D9F5B39L,(-1L)},{7L,0x4C6E3196L,0x80CF90B3L,0x554A24F0L},{0x398B7322L,(-1L),(-9L),0x491C5C26L},{0x985524BBL,(-2L),0xF6A103F6L,(-1L)},{0x554A24F0L,(-1L),0xEB3B465BL,0x65F883C4L}},{{0x398B7322L,(-1L),(-1L),0x398B7322L},{2L,1L,0x7D9F5B39L,0L},{0xD7211DA2L,0x65F883C4L,0L,1L},{0xDB117B1EL,(-1L),(-1L),1L},{1L,0x65F883C4L,7L,0L},{(-1L),1L,0x99625682L,0x398B7322L},{0x4C6E3196L,(-1L),0x985524BBL,0x65F883C4L},{0x9F46419FL,(-1L),0L,(-1L)},{0L,(-2L),0L,0x491C5C26L}}};
        int32_t l_2407[7] = {0xCE3A3648L,0xE8261AC7L,0xE8261AC7L,0xCE3A3648L,0xE8261AC7L,0xE8261AC7L,0xCE3A3648L};
        int16_t ***l_2441 = (void*)0;
        const uint16_t *l_2453 = &g_2454;
        int i, j, k;
        l_2169++;
        (**g_169) = g_225[g_95];
        for (g_334 = 0; (g_334 <= 0); g_334 += 1)
        {
            int32_t l_2172 = 0x83CE62D5L;
            int32_t *l_2173 = &g_233;
            int32_t *l_2174 = (void*)0;
            int32_t *l_2175[3];
            uint8_t *l_2181 = &g_225[g_95];
            union U0 ***l_2185 = (void*)0;
            union U0 ***l_2186 = &l_2184[0][1][0];
            int16_t **l_2187 = &g_518;
            const int16_t ***l_2191 = &g_2189;
            uint32_t *l_2192 = &g_796[0][8][1];
            uint64_t *l_2197 = &g_1244;
            uint8_t *l_2198 = &g_2199;
            uint32_t *l_2201[5] = {&g_334,&g_334,&g_334,&g_334,&g_334};
            int16_t l_2260 = (-1L);
            uint32_t l_2273 = 9UL;
            const union U0 *l_2305 = &g_2306;
            int16_t l_2311[5][9] = {{0x3AC7L,0x0ED1L,0x0ED1L,0x3AC7L,0x3AC7L,0x0ED1L,0x0ED1L,0x3AC7L,0x3AC7L},{0xB82DL,0x611DL,0xB82DL,0x611DL,0xB82DL,0x611DL,0xB82DL,0x611DL,0xB82DL},{0x3AC7L,0x3AC7L,0x0ED1L,0x0ED1L,0x3AC7L,0x3AC7L,0x0ED1L,0x0ED1L,0x3AC7L},{2L,0x611DL,2L,0x611DL,2L,0x611DL,2L,0x611DL,2L},{0x3AC7L,0x0ED1L,0x0ED1L,0x3AC7L,0x3AC7L,0x0ED1L,0x0ED1L,0x3AC7L,0x3AC7L}};
            uint16_t l_2361 = 65528UL;
            int32_t l_2411 = 0x8AD5DA59L;
            uint32_t l_2413[7][6][6] = {{{0xD2E9F311L,0xA45CF17FL,4294967287UL,0xADF27569L,4294967287UL,0xA45CF17FL},{0UL,0xBCCBC90BL,0x43FCCEE1L,0x6E56F1C6L,0xD2E9F311L,4294967295UL},{0UL,0xE539BF44L,0x11CCBC60L,0xD2E9F311L,1UL,4294967295UL},{4294967293UL,0xE539BF44L,0xA45CF17FL,4294967295UL,0xD2E9F311L,4294967295UL},{4294967295UL,0xBCCBC90BL,5UL,4294967293UL,4294967287UL,0x43FCCEE1L},{4294967295UL,0xA45CF17FL,0xADF27569L,0x11CCBC60L,0x11CCBC60L,0xADF27569L}},{{4294967288UL,4294967288UL,4294967295UL,0xBCCBC90BL,0xADF27569L,1UL},{0x6E56F1C6L,1UL,0UL,4294967293UL,4294967293UL,4294967295UL},{4294967295UL,0x6E56F1C6L,0UL,4294967287UL,4294967288UL,1UL},{0xED1C0487L,4294967287UL,4294967295UL,4294967290UL,0x97C88287L,0xADF27569L},{4294967290UL,0x97C88287L,0xADF27569L,0x43FCCEE1L,0UL,0x43FCCEE1L},{5UL,0xED1C0487L,5UL,4294967295UL,0x771941AEL,4294967295UL}},{{0x771941AEL,0x43FCCEE1L,0xA45CF17FL,0UL,0UL,4294967295UL},{0x97C88287L,0UL,0x11CCBC60L,0UL,4294967295UL,4294967295UL},{0x771941AEL,0xD2E9F311L,0x43FCCEE1L,4294967295UL,4294967295UL,0xA45CF17FL},{5UL,4294967293UL,4294967287UL,0x43FCCEE1L,4294967293UL,4294967293UL},{4294967290UL,4294967295UL,4294967295UL,4294967290UL,0UL,1UL},{0xED1C0487L,4294967295UL,0UL,4294967287UL,0UL,0x771941AEL}},{{4294967295UL,0xADF27569L,4294967290UL,4294967293UL,0UL,0x11CCBC60L},{0x6E56F1C6L,4294967295UL,0x97C88287L,0xBCCBC90BL,0UL,0xD2E9F311L},{4294967288UL,4294967295UL,4294967294UL,0x11CCBC60L,4294967293UL,0xBCCBC90BL},{4294967295UL,4294967293UL,4294967295UL,4294967293UL,4294967295UL,5UL},{4294967295UL,0xD2E9F311L,0xED1C0487L,4294967295UL,4294967295UL,4294967295UL},{4294967293UL,0UL,0UL,0xD2E9F311L,0UL,4294967295UL}},{{0UL,0x43FCCEE1L,0xED1C0487L,0x6E56F1C6L,0x771941AEL,5UL},{0UL,0xED1C0487L,4294967295UL,0xADF27569L,0UL,0xBCCBC90BL},{0xD2E9F311L,0x97C88287L,4294967294UL,4294967294UL,0x97C88287L,0xD2E9F311L},{4294967295UL,4294967287UL,0x97C88287L,0UL,4294967288UL,0x11CCBC60L},{0xBCCBC90BL,0x6E56F1C6L,4294967290UL,0UL,4294967293UL,0x771941AEL},{0xBCCBC90BL,1UL,0UL,0UL,0xADF27569L,0xE539BF44L}},{{0x43FCCEE1L,3UL,1UL,4294967287UL,0UL,0UL},{4294967293UL,0x6E56F1C6L,4294967295UL,0x11CCBC60L,4294967295UL,0x6E56F1C6L},{1UL,0x771941AEL,4294967293UL,0xADF27569L,4294967293UL,0UL},{0UL,4294967295UL,0UL,4294967293UL,0xE539BF44L,0xA45CF17FL},{0x97C88287L,4294967295UL,0x6E56F1C6L,4294967288UL,4294967293UL,0x43FCCEE1L},{0xA45CF17FL,0x771941AEL,0UL,0x97C88287L,4294967295UL,4294967293UL}},{{1UL,0x6E56F1C6L,0x11CCBC60L,0UL,0UL,0x11CCBC60L},{3UL,3UL,4294967288UL,0x771941AEL,0x11CCBC60L,4294967295UL},{0xADF27569L,4294967295UL,0xED1C0487L,0UL,0x97C88287L,4294967288UL},{4294967288UL,0xADF27569L,0xED1C0487L,4294967295UL,3UL,4294967295UL},{4294967290UL,4294967295UL,4294967288UL,4294967295UL,4294967294UL,0x11CCBC60L},{4294967295UL,4294967294UL,0x11CCBC60L,4294967293UL,0xBCCBC90BL,4294967293UL}}};
            int16_t l_2420[10];
            uint32_t l_2421[10];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2175[i] = (void*)0;
            for (i = 0; i < 10; i++)
                l_2420[i] = 0x4B65L;
            for (i = 0; i < 10; i++)
                l_2421[i] = 5UL;
            --l_2176;
        }
    }
    return (*g_365);
}







static int8_t ** func_41(int8_t p_42, const int8_t ** p_43)
{
    uint32_t l_761 = 0x482E747EL;
    int16_t **l_762 = &g_518;
    int16_t ***l_763 = (void*)0;
    uint16_t *l_771 = &g_74[0][3];
    uint16_t **l_770[7][7] = {{(void*)0,(void*)0,(void*)0,&l_771,(void*)0,(void*)0,(void*)0},{&l_771,(void*)0,&l_771,(void*)0,&l_771,&l_771,(void*)0},{&l_771,&l_771,&l_771,(void*)0,(void*)0,&l_771,&l_771},{(void*)0,(void*)0,&l_771,&l_771,(void*)0,(void*)0,(void*)0},{&l_771,(void*)0,(void*)0,&l_771,&l_771,&l_771,(void*)0},{&l_771,&l_771,(void*)0,&l_771,(void*)0,&l_771,&l_771},{(void*)0,(void*)0,&l_771,(void*)0,(void*)0,(void*)0,(void*)0}};
    const int32_t l_773 = 0xA27225A3L;
    int32_t l_791[1];
    int64_t l_794 = 0xF208AD7034AFB18ALL;
    int32_t l_818 = 0x42941484L;
    uint16_t l_850 = 65527UL;
    int64_t l_852 = 0x77F3812F26F4E1CCLL;
    int8_t l_898[2][10][2] = {{{2L,0xB5L},{0xB5L,0xBBL},{0x4EL,0L},{2L,0x4EL},{0L,0xBBL},{0L,0x4EL},{2L,0L},{0x4EL,0xBBL},{0xB5L,0xB5L},{2L,0xB5L}},{{0xB5L,0xBBL},{0x4EL,0L},{2L,0x4EL},{0L,0xBBL},{0L,0x4EL},{2L,0L},{0x4EL,0xBBL},{0xB5L,0xB5L},{2L,0xB5L},{0xB5L,0xBBL}}};
    int32_t l_936 = 0x7BB68479L;
    union U0 **l_1007[7][6][4] = {{{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,(void*)0,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,&g_1006}},{{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,(void*)0,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,(void*)0,&g_1006}},{{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,(void*)0,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,&g_1006}},{{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,(void*)0,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,(void*)0,&g_1006}},{{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,(void*)0,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,&g_1006}},{{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,(void*)0,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,(void*)0,&g_1006}},{{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,(void*)0,&g_1006},{&g_1006,&g_1006,&g_1006,(void*)0},{(void*)0,&g_1006,&g_1006,&g_1006}}};
    int32_t ***l_1012 = (void*)0;
    int8_t **l_1013 = &g_467;
    int64_t ** const *l_1017 = &g_266;
    int64_t ** const **l_1016 = &l_1017;
    uint8_t *l_1026[1];
    uint64_t l_1027 = 0xD674984FA5A353EDLL;
    int16_t l_1148 = 0xF169L;
    int64_t l_1163 = 1L;
    int8_t **l_1178 = &g_467;
    int8_t l_1206 = (-2L);
    int32_t l_1219 = (-1L);
    int64_t l_1275[6][5][8] = {{{0x16D942FF61F5E8FFLL,0x9EED82A9E95EF6A6LL,0xDD1B45E66CAB22D1LL,0x7794C6574A359EB8LL,0L,(-1L),0x10B134FEA66E2C5ALL,1L},{(-1L),0xED345610A66F4E57LL,0xF97A7DCCDD29B2B6LL,(-1L),(-2L),0x8F1B9856E12DB925LL,(-1L),9L},{0xA01F50BD09F99D15LL,1L,0x62E93310F2A59BD6LL,0L,0L,0x62E93310F2A59BD6LL,1L,0xA01F50BD09F99D15LL},{1L,0x10A7E1C11F30A49ALL,0xA01F50BD09F99D15LL,0x4CD0231541213F02LL,9L,0L,0xF2AEF6D48406DB26LL,0x923A28C2208D85D6LL},{4L,(-1L),0x4C4BC17A894FD1FELL,0x62E93310F2A59BD6LL,0x4CD0231541213F02LL,0L,0xF97A7DCCDD29B2B6LL,0x495A55A6D51FC741LL}},{{0x7B03E0062F592CC5LL,0x10A7E1C11F30A49ALL,(-1L),0x48BB8AF327F8F565LL,(-1L),0x62E93310F2A59BD6LL,0x1175CAD018BCAA49LL,0xD2A60D4984834281LL},{0x495A55A6D51FC741LL,1L,1L,0x16D942FF61F5E8FFLL,(-1L),0x4C4BC17A894FD1FELL,0xEF1A38BAA508EF38LL,0x923A28C2208D85D6LL},{0x7B03E0062F592CC5LL,0xEF1A38BAA508EF38LL,0xD2A60D4984834281LL,0L,(-1L),(-1L),(-1L),(-1L)},{0xD4FEDFF6E3A65635LL,(-1L),0x9EED82A9E95EF6A6LL,0x2EF415DD9CB7724BLL,(-4L),0x2EF415DD9CB7724BLL,0x9EED82A9E95EF6A6LL,(-1L)},{0x2D157FB0523F77B6LL,(-1L),0L,0L,0xA01F50BD09F99D15LL,2L,0x8F1B9856E12DB925LL,0x2D157FB0523F77B6LL}},{{(-1L),1L,0x06DE06178F463466LL,0x1175CAD018BCAA49LL,0x2D157FB0523F77B6LL,0x923A28C2208D85D6LL,0x8F1B9856E12DB925LL,1L},{0x923A28C2208D85D6LL,0x1175CAD018BCAA49LL,0L,2L,0x2EF415DD9CB7724BLL,0x16D942FF61F5E8FFLL,0x9EED82A9E95EF6A6LL,0xDD1B45E66CAB22D1LL},{0x2EF415DD9CB7724BLL,0x16D942FF61F5E8FFLL,0x9EED82A9E95EF6A6LL,0xDD1B45E66CAB22D1LL,0x7794C6574A359EB8LL,0L,(-1L),0x10B134FEA66E2C5ALL},{0xA2AF5B4E92620D2ALL,(-1L),0xD2A60D4984834281LL,0xF2AEF6D48406DB26LL,(-2L),0x1175CAD018BCAA49LL,0xEF1A38BAA508EF38LL,0x16D942FF61F5E8FFLL},{1L,0x2D157FB0523F77B6LL,0x7B03E0062F592CC5LL,(-4L),(-1L),(-1L),(-4L),0x7B03E0062F592CC5LL}},{{0xCCC302D0829C8C59LL,0xCCC302D0829C8C59LL,(-1L),0x4C4BC17A894FD1FELL,(-4L),0x62E93310F2A59BD6LL,0xA01F50BD09F99D15LL,0xEF1A38BAA508EF38LL},{0xEF1A38BAA508EF38LL,0x8F1B9856E12DB925LL,0L,0L,0xED345610A66F4E57LL,(-4L),1L,0xEF1A38BAA508EF38LL},{0x8F1B9856E12DB925LL,0xF2AEF6D48406DB26LL,0x06DE06178F463466LL,0x4C4BC17A894FD1FELL,0xD4FEDFF6E3A65635LL,1L,0xD2A60D4984834281LL,0x7B03E0062F592CC5LL},{1L,0x1175CAD018BCAA49LL,0xF97A7DCCDD29B2B6LL,(-4L),0x10B134FEA66E2C5ALL,0xF2AEF6D48406DB26LL,(-1L),0x16D942FF61F5E8FFLL},{0x2EF415DD9CB7724BLL,0xDD1B45E66CAB22D1LL,0xA01F50BD09F99D15LL,0xF2AEF6D48406DB26LL,0x4C4BC17A894FD1FELL,(-1L),2L,0x10B134FEA66E2C5ALL}},{{0xF2AEF6D48406DB26LL,0x7B03E0062F592CC5LL,0x8F1B9856E12DB925LL,0xDD1B45E66CAB22D1LL,0xEF1A38BAA508EF38LL,0x8F9C93DB0BD9CC3DLL,0xEF1A38BAA508EF38LL,0xDD1B45E66CAB22D1LL},{0x4CD0231541213F02LL,0x06DE06178F463466LL,0x4CD0231541213F02LL,2L,9L,(-1L),0L,1L},{(-1L),0xD4FEDFF6E3A65635LL,0xED345610A66F4E57LL,0x1175CAD018BCAA49LL,(-4L),0x7794C6574A359EB8LL,9L,0x2D157FB0523F77B6LL},{(-1L),0x4CD0231541213F02LL,(-4L),0L,9L,0L,(-1L),(-1L)},{0x4CD0231541213F02LL,0xA2AF5B4E92620D2ALL,0x06DE06178F463466LL,0x2EF415DD9CB7724BLL,0xEF1A38BAA508EF38LL,1L,0x7B03E0062F592CC5LL,(-1L)}},{{0xF2AEF6D48406DB26LL,0x1175CAD018BCAA49LL,0x83AE9361A134EF5ALL,0L,0x4C4BC17A894FD1FELL,0xDD1B45E66CAB22D1LL,0xED345610A66F4E57LL,0x923A28C2208D85D6LL},{0x2EF415DD9CB7724BLL,1L,9L,0x16D942FF61F5E8FFLL,0x10B134FEA66E2C5ALL,0x83AE9361A134EF5ALL,0x83AE9361A134EF5ALL,0x10B134FEA66E2C5ALL},{1L,1L,1L,1L,0xD4FEDFF6E3A65635LL,0x10B134FEA66E2C5ALL,0xEF1A38BAA508EF38LL,1L},{0x8F1B9856E12DB925LL,(-2L),(-1L),0xF97A7DCCDD29B2B6LL,0xED345610A66F4E57LL,(-1L),0L,0x4CD0231541213F02LL},{0xEF1A38BAA508EF38LL,(-2L),0L,0x8F9C93DB0BD9CC3DLL,(-4L),0x10B134FEA66E2C5ALL,(-1L),0x06DE06178F463466LL}}};
    uint32_t l_1430 = 0xCF6503CFL;
    uint8_t l_1439 = 0x67L;
    uint32_t ***l_1452 = &g_1008;
    uint32_t ***l_1454 = &g_1008;
    int32_t l_1457 = 4L;
    uint16_t l_1470 = 0x8AD2L;
    int32_t l_1582[4];
    int32_t *l_1621 = &l_791[0];
    int8_t l_1637 = (-4L);
    const int32_t ****l_1707 = (void*)0;
    const int32_t *****l_1706 = &l_1707;
    int16_t *l_1753[2];
    uint32_t l_1760 = 1UL;
    uint8_t l_1782 = 0xE1L;
    const uint64_t l_1862 = 18446744073709551609UL;
    int8_t ***l_1863[9] = {&l_1013,&l_1013,&l_1013,&l_1013,&l_1013,&l_1013,&l_1013,&l_1013,&l_1013};
    int8_t ****l_1870[2];
    int64_t **l_1874 = &g_267;
    int32_t l_1910 = 0x4C512C2EL;
    int16_t l_1911 = 0x401CL;
    int8_t *****l_1920[4][7] = {{&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0]},{&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0]},{&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0]},{&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0],&l_1870[0]}};
    int32_t l_1950[1];
    int8_t **l_2110 = &g_467;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_791[i] = 0x72AFF29BL;
    for (i = 0; i < 1; i++)
        l_1026[i] = &g_225[1];
    for (i = 0; i < 4; i++)
        l_1582[i] = (-6L);
    for (i = 0; i < 2; i++)
        l_1753[i] = &g_93;
    for (i = 0; i < 2; i++)
        l_1870[i] = &l_1863[1];
    for (i = 0; i < 1; i++)
        l_1950[i] = 0xC87A5F73L;
    return l_2110;
}







static int8_t ** func_50(uint32_t p_51, const int8_t p_52, int32_t p_53)
{
    uint16_t l_311 = 4UL;
    int32_t l_312[8] = {0x2EC6BDB9L,1L,0x2EC6BDB9L,1L,0x2EC6BDB9L,1L,0x2EC6BDB9L,1L};
    int32_t **l_328[10] = {&g_100[1],&g_100[1],&g_100[1],&g_100[1],&g_100[1],&g_100[1],&g_100[1],&g_100[1],&g_100[1],&g_100[1]};
    int8_t *l_465 = &g_31;
    int8_t **l_464 = &l_465;
    uint16_t *l_513[10] = {&g_74[2][1],&g_74[2][1],&g_74[2][1],&g_74[2][1],&g_74[2][1],&g_74[2][1],&g_74[2][1],&g_74[2][1],&g_74[2][1],&g_74[2][1]};
    uint16_t **l_512 = &l_513[5];
    uint32_t l_519 = 0xBCEEF5BCL;
    uint32_t l_525[3];
    uint32_t *l_530[9][3][2] = {{{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]}},{{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]}},{{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]}},{{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]}},{{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]}},{{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]}},{{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]}},{{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]}},{{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]},{&l_525[0],&l_525[0]}}};
    uint32_t **l_529 = &l_530[8][0][0];
    uint64_t l_563 = 18446744073709551615UL;
    int64_t ***l_587 = &g_266;
    int16_t l_618 = 0x24F2L;
    int32_t **l_639 = &g_100[0];
    int8_t l_659 = 0L;
    int32_t l_693 = 0L;
    int32_t l_713 = 0xEF799239L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_525[i] = 0xC6B45090L;
    for (g_95 = 0; (g_95 != 3); g_95++)
    {
        uint16_t l_281 = 0UL;
        int16_t ***l_289[9][3] = {{&g_250,&g_250,(void*)0},{&g_250,&g_250,&g_250},{&g_250,&g_250,&g_250},{&g_250,&g_250,&g_250},{&g_250,&g_250,&g_250},{&g_250,&g_250,&g_250},{(void*)0,&g_250,&g_250},{&g_250,&g_250,&g_250},{(void*)0,&g_250,&g_250}};
        uint16_t *l_298[6] = {(void*)0,&g_74[0][3],(void*)0,(void*)0,&g_74[0][3],(void*)0};
        const int64_t *l_308 = &g_309;
        const int64_t **l_307[10] = {(void*)0,(void*)0,(void*)0,&l_308,&l_308,(void*)0,(void*)0,(void*)0,&l_308,&l_308};
        const int64_t ***l_306[8][7][4] = {{{(void*)0,&l_307[0],(void*)0,&l_307[0]},{(void*)0,&l_307[0],&l_307[0],(void*)0},{&l_307[7],&l_307[0],&l_307[7],(void*)0},{&l_307[0],&l_307[0],&l_307[0],&l_307[0]},{&l_307[0],&l_307[0],&l_307[0],&l_307[0]},{&l_307[0],&l_307[0],&l_307[2],(void*)0},{&l_307[0],&l_307[0],&l_307[8],(void*)0}},{{(void*)0,&l_307[0],(void*)0,&l_307[0]},{(void*)0,&l_307[0],(void*)0,&l_307[0]},{(void*)0,&l_307[0],&l_307[0],(void*)0},{&l_307[7],&l_307[0],&l_307[7],(void*)0},{&l_307[0],&l_307[0],&l_307[0],&l_307[0]},{&l_307[0],&l_307[0],&l_307[0],&l_307[0]},{&l_307[0],&l_307[0],&l_307[2],(void*)0}},{{&l_307[0],&l_307[0],&l_307[8],(void*)0},{(void*)0,&l_307[0],(void*)0,&l_307[0]},{(void*)0,&l_307[0],(void*)0,&l_307[0]},{(void*)0,&l_307[0],&l_307[0],(void*)0},{&l_307[7],&l_307[0],&l_307[7],(void*)0},{&l_307[0],&l_307[0],&l_307[0],&l_307[0]},{&l_307[0],&l_307[0],&l_307[0],&l_307[0]}},{{&l_307[0],&l_307[0],&l_307[2],(void*)0},{&l_307[0],&l_307[0],&l_307[8],(void*)0},{(void*)0,&l_307[0],(void*)0,&l_307[0]},{(void*)0,&l_307[0],(void*)0,&l_307[0]},{(void*)0,&l_307[0],&l_307[0],(void*)0},{&l_307[7],&l_307[0],&l_307[7],(void*)0},{&l_307[0],&l_307[0],&l_307[0],&l_307[0]}},{{&l_307[0],&l_307[0],&l_307[0],&l_307[0]},{&l_307[0],&l_307[0],&l_307[2],(void*)0},{&l_307[0],&l_307[0],&l_307[8],(void*)0},{(void*)0,&l_307[0],(void*)0,&l_307[0]},{(void*)0,&l_307[0],(void*)0,&l_307[0]},{(void*)0,&l_307[0],&l_307[0],(void*)0},{&l_307[7],&l_307[0],&l_307[7],(void*)0}},{{&l_307[0],&l_307[0],&l_307[0],&l_307[0]},{&l_307[0],&l_307[0],&l_307[0],&l_307[0]},{&l_307[0],&l_307[0],&l_307[2],(void*)0},{&l_307[0],&l_307[0],&l_307[8],(void*)0},{(void*)0,&l_307[0],(void*)0,&l_307[0]},{(void*)0,&l_307[0],(void*)0,&l_307[0]},{(void*)0,&l_307[0],&l_307[0],(void*)0}},{{&l_307[7],&l_307[0],&l_307[7],(void*)0},{&l_307[0],&l_307[0],&l_307[0],&l_307[0]},{&l_307[0],&l_307[0],&l_307[0],&l_307[0]},{&l_307[0],&l_307[0],&l_307[2],(void*)0},{&l_307[0],&l_307[0],&l_307[8],(void*)0},{(void*)0,&l_307[0],(void*)0,&l_307[0]},{(void*)0,&l_307[0],(void*)0,&l_307[0]}},{{(void*)0,&l_307[0],&l_307[0],(void*)0},{&l_307[7],&l_307[0],&l_307[7],(void*)0},{&l_307[0],&l_307[0],&l_307[0],&l_307[0]},{&l_307[0],&l_307[0],&l_307[0],&l_307[0]},{&l_307[0],&l_307[0],&l_307[2],(void*)0},{&l_307[0],&l_307[0],&l_307[8],(void*)0},{(void*)0,&l_307[0],(void*)0,&l_307[0]}}};
        int32_t l_316 = 0xEB7830C7L;
        int32_t l_319 = 1L;
        int32_t l_320[9];
        int64_t l_350 = 1L;
        uint16_t l_382 = 0x43E7L;
        uint8_t *l_403 = &g_225[3];
        int8_t *l_407 = &g_274;
        int8_t **l_406 = &l_407;
        union U0 l_443 = {0x413EL};
        uint64_t l_444 = 0x506EF29507A1CB68LL;
        int32_t l_450 = 0x26B7F66FL;
        int8_t l_456 = (-3L);
        uint32_t l_461 = 4294967294UL;
        int64_t ***l_588 = (void*)0;
        uint16_t l_601 = 0UL;
        uint8_t l_656 = 4UL;
        uint8_t l_745 = 1UL;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_320[i] = (-1L);
    }
    return &g_467;
}







static const int8_t func_54(int8_t * p_55, int16_t p_56, int8_t * p_57, int8_t * p_58, int8_t p_59)
{
    const int16_t l_97 = 1L;
    int32_t *l_99 = &g_2;
    int32_t l_105 = 5L;
    int32_t l_106 = 0x8BA36ED2L;
    int32_t l_107 = 6L;
    int32_t l_108 = 0x67043423L;
    int32_t l_110 = 1L;
    int32_t l_111 = (-1L);
    int32_t l_112[5];
    int16_t l_113 = (-1L);
    uint8_t l_114 = 0x53L;
    uint64_t l_193 = 6UL;
    union U0 l_211 = {0L};
    const int16_t *l_229 = &l_211.f0;
    uint8_t l_270[6][3][10] = {{{0x8DL,5UL,0x5AL,247UL,0x5AL,5UL,0x8DL,0x8DL,5UL,0x5AL},{5UL,0x8DL,0x8DL,5UL,0x5AL,247UL,0x5AL,5UL,0x8DL,0x8DL},{0x5AL,0x8DL,7UL,0xF5L,0xF5L,7UL,0x8DL,0x5AL,0x8DL,7UL}},{{247UL,5UL,0xF5L,5UL,247UL,7UL,7UL,247UL,5UL,0xF5L},{0x5AL,0x5AL,0xF5L,247UL,255UL,247UL,0xF5L,0x5AL,0x5AL,0xF5L},{5UL,247UL,7UL,7UL,247UL,5UL,0xF5L,5UL,247UL,7UL}},{{0x8DL,0x5AL,0x8DL,7UL,0xF5L,0xF5L,7UL,0x8DL,0x5AL,0x8DL},{0x8DL,5UL,0x5AL,247UL,0x5AL,5UL,0x8DL,0x8DL,5UL,0x5AL},{5UL,0x8DL,0x8DL,5UL,0x5AL,247UL,0x5AL,5UL,0x8DL,0x8DL}},{{0x5AL,0x8DL,7UL,0xF5L,0xF5L,7UL,0x8DL,0x5AL,0x8DL,7UL},{247UL,5UL,0xF5L,5UL,247UL,7UL,7UL,247UL,5UL,0xF5L},{0x5AL,0x5AL,0xF5L,247UL,255UL,247UL,0xF5L,0x5AL,0x5AL,0xF5L}},{{5UL,247UL,7UL,7UL,247UL,5UL,0xF5L,5UL,247UL,7UL},{0x8DL,0x5AL,0x8DL,7UL,0xF5L,0xF5L,7UL,0x8DL,0x5AL,0x8DL},{0x8DL,5UL,0x5AL,247UL,0x5AL,5UL,0x8DL,0x8DL,5UL,0x5AL}},{{5UL,0x8DL,0x8DL,5UL,0x5AL,247UL,0x5AL,5UL,0x8DL,0x8DL},{0x5AL,0x8DL,7UL,0xF5L,0xF5L,7UL,0x8DL,0x5AL,0x8DL,7UL},{247UL,5UL,0xF5L,5UL,247UL,7UL,7UL,247UL,5UL,0xF5L}}};
    int32_t *l_271 = &g_233;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_112[i] = 0x2C2D3C6BL;
    for (p_56 = (-27); (p_56 != (-6)); p_56 = safe_add_func_int16_t_s_s(p_56, 3))
    {
        uint16_t *l_73 = &g_74[0][3];
        int32_t l_81 = 0x0A2C9EA2L;
        int16_t *l_92 = &g_93;
        uint8_t *l_94[6] = {&g_95,&g_95,&g_95,&g_95,&g_95,&g_95};
        uint64_t l_96 = 0UL;
        int32_t *l_98 = &l_81;
        int32_t l_109[1][9] = {{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)}};
        int32_t l_191 = 4L;
        int i, j;
    }
    (*l_271) = ((**g_169) = l_270[0][1][1]);
    return (*l_99);
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
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_74[i][j], "g_74[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_225[i], "g_225[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_718[i][j], "g_718[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_795[i], "g_795[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_796[i][j][k], "g_796[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1244, "g_1244", print_hash_value);
    transparent_crc(g_1292, "g_1292", print_hash_value);
    transparent_crc(g_1394.f0, "g_1394.f0", print_hash_value);
    transparent_crc(g_1483, "g_1483", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1759[i][j], "g_1759[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1889, "g_1889", print_hash_value);
    transparent_crc(g_2199, "g_2199", print_hash_value);
    transparent_crc(g_2306.f0, "g_2306.f0", print_hash_value);
    transparent_crc(g_2363, "g_2363", print_hash_value);
    transparent_crc(g_2378, "g_2378", print_hash_value);
    transparent_crc(g_2454, "g_2454", print_hash_value);
    transparent_crc(g_2479, "g_2479", print_hash_value);
    transparent_crc(g_2509, "g_2509", print_hash_value);
    transparent_crc(g_2572, "g_2572", print_hash_value);
    transparent_crc(g_2574, "g_2574", print_hash_value);
    transparent_crc(g_2605, "g_2605", print_hash_value);
    transparent_crc(g_2612, "g_2612", print_hash_value);
    transparent_crc(g_2613, "g_2613", print_hash_value);
    transparent_crc(g_2619, "g_2619", print_hash_value);
    transparent_crc(g_2689, "g_2689", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2695[i][j][k], "g_2695[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
