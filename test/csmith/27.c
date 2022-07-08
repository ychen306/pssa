// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 86C91AB9
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


struct S0 {
   const int8_t f0;
   int8_t f1;
   int32_t f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   signed f0 : 10;
   signed f1 : 27;
   unsigned f2 : 18;
   const unsigned f3 : 1;
   unsigned f4 : 26;
   unsigned f5 : 13;
   unsigned f6 : 9;
   const signed : 0;
   unsigned f7 : 9;
};
#pragma pack(pop)

struct S2 {
   unsigned f0 : 21;
   signed : 0;
   signed f1 : 21;
   signed f2 : 21;
   uint8_t f3;
   signed f4 : 24;
   const unsigned f5 : 18;
   unsigned f6 : 29;
};

union U3 {
   const int64_t f0;
   uint32_t f1;
};


static int64_t g_26 = 1L;
static int32_t g_32[10] = {0x1A2C9DBEL,0x1A2C9DBEL,0x1A2C9DBEL,0x1A2C9DBEL,0x1A2C9DBEL,0x1A2C9DBEL,0x1A2C9DBEL,0x1A2C9DBEL,0x1A2C9DBEL,0x1A2C9DBEL};
static int32_t g_48 = 0x9FF40B36L;
static struct S1 g_74 = {24,-5140,89,0,6099,63,19,5};
static int32_t *g_77 = (void*)0;
static int32_t g_79[1] = {1L};
static int32_t *g_78 = &g_79[0];
static int16_t g_101 = 0xF70CL;
static uint16_t g_103 = 0xE036L;
static uint8_t g_105 = 254UL;
static struct S0 g_114 = {3L,0x3EL,0xA24B7619L};
static struct S0 *g_113[1][2][6] = {{{(void*)0,&g_114,&g_114,(void*)0,&g_114,&g_114},{(void*)0,&g_114,&g_114,(void*)0,&g_114,&g_114}}};
static union U3 g_140 = {6L};
static int64_t g_156 = 0xF4EC59EFA1EB4E85LL;
static uint16_t g_158 = 9UL;
static struct S2 g_161[7] = {{824,474,-283,255UL,-3093,257,10612},{1203,429,1093,1UL,-919,55,11714},{1203,429,1093,1UL,-919,55,11714},{824,474,-283,255UL,-3093,257,10612},{1203,429,1093,1UL,-919,55,11714},{1203,429,1093,1UL,-919,55,11714},{824,474,-283,255UL,-3093,257,10612}};
static int32_t g_194 = 0xBBF31845L;
static int64_t *g_214[2] = {(void*)0,(void*)0};
static int64_t **g_213[3] = {&g_214[1],&g_214[1],&g_214[1]};
static int8_t g_230 = 0x77L;
static int16_t g_302 = 1L;
static uint32_t g_308[8][9] = {{3UL,1UL,0x67602860L,18446744073709551614UL,0xC8424261L,0x730C1C02L,0xC8424261L,18446744073709551614UL,0x67602860L},{0UL,0UL,8UL,0x1FAAC60DL,18446744073709551615UL,9UL,6UL,1UL,6UL},{0x0603867BL,0UL,0x7916FAC9L,0x7916FAC9L,0UL,0x0603867BL,18446744073709551614UL,3UL,0x67602860L},{1UL,2UL,8UL,0UL,18446744073709551609UL,18446744073709551609UL,0UL,8UL,2UL},{0UL,18446744073709551615UL,0x0603867BL,1UL,18446744073709551615UL,0xD4B42667L,18446744073709551614UL,18446744073709551614UL,0xD4B42667L},{0x4F6E0738L,8UL,0xFD4261A6L,8UL,0x4F6E0738L,18446744073709551607UL,6UL,6UL,0UL},{0UL,18446744073709551615UL,1UL,0x730C1C02L,3UL,0x730C1C02L,1UL,18446744073709551615UL,0UL},{0x1FAAC60DL,2UL,18446744073709551615UL,0x4F6E0738L,6UL,18446744073709551607UL,18446744073709551609UL,18446744073709551607UL,6UL}};
static uint64_t g_311 = 3UL;
static struct S2 g_329[2] = {{1068,1213,694,1UL,-657,363,14195},{1068,1213,694,1UL,-657,363,14195}};
static struct S2 *g_328[8] = {(void*)0,&g_161[0],(void*)0,&g_161[0],(void*)0,&g_161[0],(void*)0,&g_161[0]};
static const uint64_t g_378 = 1UL;
static int32_t g_438 = 0x7B01DCB5L;
static int32_t * const g_437 = &g_438;
static uint32_t *g_483 = &g_308[0][7];
static uint32_t **g_482 = &g_483;
static int16_t g_498 = 3L;
static int64_t g_512 = (-1L);
static const int16_t *g_611 = &g_302;
static const int16_t **g_610 = &g_611;
static uint8_t *g_631[6][9][4] = {{{&g_161[4].f3,(void*)0,&g_161[4].f3,&g_105},{&g_161[4].f3,(void*)0,&g_329[0].f3,&g_329[0].f3},{&g_329[0].f3,&g_329[0].f3,&g_161[4].f3,&g_329[0].f3},{&g_161[4].f3,&g_161[4].f3,&g_105,&g_105},{&g_161[4].f3,&g_161[4].f3,&g_329[0].f3,&g_105},{&g_105,&g_105,&g_329[0].f3,&g_329[0].f3},{&g_105,&g_329[0].f3,&g_329[0].f3,&g_105},{&g_161[4].f3,&g_329[0].f3,&g_105,(void*)0},{&g_161[4].f3,&g_329[0].f3,&g_161[4].f3,(void*)0}},{{&g_329[0].f3,&g_105,&g_329[0].f3,&g_105},{&g_161[4].f3,&g_105,&g_161[4].f3,&g_105},{&g_161[4].f3,&g_105,&g_329[0].f3,(void*)0},{&g_161[4].f3,&g_329[0].f3,&g_161[4].f3,(void*)0},{&g_161[4].f3,&g_329[0].f3,&g_105,&g_105},{&g_329[0].f3,&g_329[0].f3,&g_329[0].f3,&g_329[0].f3},{&g_105,&g_105,&g_329[0].f3,&g_105},{&g_329[0].f3,&g_161[4].f3,&g_105,&g_105},{&g_161[4].f3,&g_161[4].f3,&g_161[4].f3,&g_329[0].f3}},{{&g_161[4].f3,&g_329[0].f3,&g_329[0].f3,&g_329[0].f3},{&g_161[4].f3,(void*)0,&g_161[4].f3,&g_105},{&g_161[4].f3,(void*)0,&g_329[0].f3,&g_329[0].f3},{&g_329[0].f3,&g_329[0].f3,&g_161[4].f3,&g_329[0].f3},{&g_161[4].f3,&g_161[4].f3,&g_105,&g_105},{&g_161[4].f3,&g_161[4].f3,&g_329[0].f3,&g_105},{&g_105,&g_105,&g_329[0].f3,&g_329[0].f3},{&g_105,&g_329[0].f3,&g_329[0].f3,&g_105},{&g_161[4].f3,&g_329[0].f3,&g_105,(void*)0}},{{&g_161[4].f3,&g_329[0].f3,&g_161[4].f3,(void*)0},{&g_329[0].f3,&g_105,&g_329[0].f3,&g_105},{&g_161[4].f3,&g_105,&g_161[4].f3,&g_105},{&g_329[0].f3,&g_105,&g_329[0].f3,&g_105},{&g_161[4].f3,&g_105,&g_161[4].f3,&g_329[0].f3},{&g_161[4].f3,&g_161[4].f3,&g_161[4].f3,&g_105},{&g_329[0].f3,&g_329[0].f3,&g_105,&g_161[4].f3},{&g_105,&g_105,&g_105,&g_329[0].f3},{&g_329[0].f3,&g_105,&g_161[4].f3,(void*)0}},{{&g_161[4].f3,&g_105,&g_161[4].f3,&g_329[0].f3},{&g_161[4].f3,&g_329[0].f3,&g_329[0].f3,&g_105},{&g_329[0].f3,&g_329[0].f3,&g_161[4].f3,(void*)0},{&g_161[4].f3,&g_329[0].f3,&g_161[4].f3,&g_105},{&g_105,&g_329[0].f3,&g_161[4].f3,&g_329[0].f3},{&g_105,&g_105,&g_161[4].f3,(void*)0},{&g_161[4].f3,&g_105,&g_329[0].f3,&g_329[0].f3},{&g_161[4].f3,&g_105,&g_105,&g_161[4].f3},{&g_161[4].f3,&g_329[0].f3,&g_329[0].f3,&g_105}},{{&g_161[4].f3,&g_161[4].f3,&g_161[4].f3,&g_329[0].f3},{&g_105,&g_105,&g_161[4].f3,&g_105},{&g_105,&g_105,&g_161[4].f3,(void*)0},{&g_161[4].f3,&g_329[0].f3,&g_161[4].f3,(void*)0},{&g_329[0].f3,&g_105,&g_329[0].f3,&g_105},{&g_161[4].f3,&g_105,&g_161[4].f3,&g_329[0].f3},{&g_161[4].f3,&g_161[4].f3,&g_161[4].f3,&g_105},{&g_329[0].f3,&g_329[0].f3,&g_105,&g_161[4].f3},{&g_105,&g_105,&g_105,&g_329[0].f3}}};
static struct S2 **g_648 = &g_328[3];
static uint16_t *g_755 = &g_158;
static uint16_t **g_754 = &g_755;
static const uint64_t *g_763 = &g_311;
static const uint64_t **g_762[7] = {&g_763,&g_763,&g_763,&g_763,&g_763,&g_763,&g_763};
static const uint64_t ***g_761 = &g_762[0];
static const int64_t *g_859 = (void*)0;
static const int64_t **g_858 = &g_859;
static const int64_t ***g_857 = &g_858;
static uint16_t g_891[3] = {0xD9D2L,0xD9D2L,0xD9D2L};
static uint16_t ***g_893 = &g_754;
static int32_t **g_898 = (void*)0;
static int32_t ***g_897[1] = {&g_898};
static int32_t g_939 = (-1L);
static int16_t * const g_985 = &g_498;
static int16_t * const *g_984 = &g_985;
static union U3 g_1005 = {7L};
static int16_t *g_1040 = &g_101;
static int32_t g_1095[1] = {4L};
static const int64_t * const ****g_1171 = (void*)0;
static int64_t ***g_1174 = &g_213[0];
static int64_t *** const *g_1173 = &g_1174;
static int64_t *** const * const *g_1172 = &g_1173;
static uint64_t g_1190 = 0x8D661CF9F221F3A3LL;
static struct S0 g_1238 = {0x36L,1L,0xA66B709AL};
static int8_t g_1260 = 0xF0L;
static int64_t g_1335[6][7] = {{2L,(-1L),(-5L),(-5L),(-1L),2L,(-1L)},{1L,2L,2L,1L,(-1L),1L,2L},{(-1L),(-1L),2L,(-5L),2L,(-1L),(-1L)},{(-1L),2L,(-5L),2L,(-1L),(-1L),2L},{1L,(-1L),1L,2L,2L,1L,(-1L)},{2L,(-1L),(-5L),(-5L),(-1L),2L,(-1L)}};
static int32_t g_1371 = 0x4C9E8143L;



static int32_t func_1(void);
static const uint8_t func_6(uint8_t p_7, struct S1 p_8, uint16_t p_9, struct S2 p_10, int32_t p_11);
static int64_t func_15(union U3 p_16, int16_t p_17);
static uint16_t func_21(struct S0 p_22, int32_t p_23);
static struct S0 func_24(uint8_t p_25);
static int32_t func_34(uint64_t p_35, int32_t * const p_36, int32_t * p_37, int32_t * p_38, int32_t * p_39);
static uint16_t func_42(int32_t * p_43, uint16_t p_44);
static int32_t * func_45(int32_t * p_46);
static uint16_t func_53(struct S1 p_54, uint32_t p_55, int32_t * p_56, int32_t * p_57);
static struct S1 func_58(uint16_t p_59);
# 138 "<stdin>"
static int32_t func_1(void)
{
    uint16_t l_12 = 65535UL;
    union U3 l_18 = {0xBD907C4E7CCCE1CCLL};
    int32_t *l_47 = &g_48;
    struct S1 l_835 = {-16,4429,190,0,7582,33,15,8};
    struct S2 l_836 = {384,308,-732,0x63L,-1140,189,3881};
    uint32_t l_1333[3][3][4] = {{{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL}},{{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL}},{{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL}}};
    int64_t *l_1334 = &g_1335[1][2];
    uint64_t l_1377[4][2] = {{6UL,0x407019CF80701B65LL},{0x407019CF80701B65LL,6UL},{6UL,6UL},{0x74BD5A1B22341678LL,6UL}};
    int32_t l_1387 = 0xD249D6F6L;
    int32_t l_1388 = 0x67F00216L;
    int32_t l_1389[2][6][6] = {{{0x025E53CBL,0xCEC22B40L,0xCEC22B40L,0x025E53CBL,0xCEC22B40L,0xCEC22B40L},{0x025E53CBL,0xCEC22B40L,0xCEC22B40L,0x025E53CBL,0xCEC22B40L,0xCEC22B40L},{0x025E53CBL,0xCEC22B40L,0xCEC22B40L,0x025E53CBL,0xCEC22B40L,0xCEC22B40L},{0x025E53CBL,0xCEC22B40L,0xCEC22B40L,0x025E53CBL,0xCEC22B40L,0xCEC22B40L},{0x025E53CBL,0xCEC22B40L,0xCEC22B40L,0x025E53CBL,0xCEC22B40L,0xCEC22B40L},{0x025E53CBL,0xCEC22B40L,0xCEC22B40L,0x025E53CBL,0xCEC22B40L,0xCEC22B40L}},{{0x025E53CBL,0xCEC22B40L,0xCEC22B40L,0x025E53CBL,0xCEC22B40L,0xCEC22B40L},{0x025E53CBL,0xCEC22B40L,0xCEC22B40L,0x025E53CBL,0xCEC22B40L,0xCEC22B40L},{0x025E53CBL,0xCEC22B40L,0xCEC22B40L,0x025E53CBL,0xCEC22B40L,0xCEC22B40L},{0x025E53CBL,0xCEC22B40L,0xCEC22B40L,0x025E53CBL,0xCEC22B40L,0xCEC22B40L},{0x025E53CBL,0xCEC22B40L,0xCEC22B40L,0x025E53CBL,0xCEC22B40L,0xCEC22B40L},{0x025E53CBL,0xCEC22B40L,0xCEC22B40L,0x025E53CBL,0xCEC22B40L,0xCEC22B40L}}};
    int32_t l_1419 = 0x34DC6550L;
    int32_t l_1444 = (-2L);
    int16_t * const ***l_1466 = (void*)0;
    int i, j, k;
    return g_1238.f2;
}







static const uint8_t func_6(uint8_t p_7, struct S1 p_8, uint16_t p_9, struct S2 p_10, int32_t p_11)
{
    int64_t l_840 = 0xFBE01EB7BFA6833ELL;
    int32_t *l_843[10][10][2] = {{{&g_48,&g_48},{&g_114.f2,(void*)0},{(void*)0,&g_114.f2},{(void*)0,&g_48},{(void*)0,&g_114.f2},{(void*)0,(void*)0},{&g_114.f2,&g_48},{&g_48,(void*)0},{(void*)0,&g_114.f2},{&g_114.f2,&g_32[1]}},{{&g_79[0],(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_32[6],&g_32[3]},{&g_438,&g_194},{&g_32[4],&g_79[0]},{&g_194,&g_114.f2},{&g_194,&g_438},{&g_48,&g_79[0]},{(void*)0,&g_79[0]}},{{&g_194,(void*)0},{&g_48,&g_438},{&g_194,&g_194},{&g_194,&g_32[5]},{&g_438,&g_32[6]},{&g_48,&g_438},{&g_194,&g_48},{&g_32[1],(void*)0},{&g_438,(void*)0},{(void*)0,&g_48}},{{&g_114.f2,&g_438},{&g_194,&g_32[4]},{(void*)0,&g_32[6]},{&g_438,(void*)0},{(void*)0,&g_32[6]},{&g_32[6],&g_32[4]},{&g_79[0],(void*)0},{&g_79[0],(void*)0},{(void*)0,&g_48},{&g_32[3],(void*)0}},{{&g_32[3],(void*)0},{&g_32[3],&g_48},{(void*)0,(void*)0},{&g_79[0],(void*)0},{&g_79[0],&g_32[4]},{&g_32[6],&g_32[6]},{(void*)0,(void*)0},{&g_438,&g_32[6]},{(void*)0,&g_32[4]},{&g_194,&g_438}},{{&g_114.f2,&g_48},{(void*)0,(void*)0},{&g_438,(void*)0},{&g_32[1],&g_48},{&g_194,&g_438},{&g_48,&g_32[6]},{&g_438,&g_32[5]},{&g_194,(void*)0},{&g_79[0],(void*)0},{&g_114.f2,&g_438}},{{&g_114.f2,&g_79[0]},{(void*)0,&g_79[0]},{(void*)0,(void*)0},{&g_114.f2,(void*)0},{(void*)0,&g_194},{&g_438,&g_114.f2},{(void*)0,&g_48},{(void*)0,&g_48},{&g_48,&g_79[0]},{(void*)0,(void*)0}},{{&g_79[0],&g_79[0]},{(void*)0,(void*)0},{&g_48,(void*)0},{&g_438,&g_114.f2},{&g_32[9],&g_194},{&g_438,&g_32[9]},{&g_79[0],(void*)0},{&g_79[0],&g_32[9]},{&g_438,&g_194},{&g_32[9],&g_114.f2}},{{&g_438,(void*)0},{&g_48,(void*)0},{(void*)0,&g_79[0]},{&g_79[0],(void*)0},{(void*)0,&g_79[0]},{&g_48,&g_48},{(void*)0,&g_48},{(void*)0,&g_114.f2},{&g_438,&g_194},{(void*)0,(void*)0}},{{&g_114.f2,(void*)0},{(void*)0,&g_79[0]},{(void*)0,&g_79[0]},{&g_114.f2,&g_438},{&g_114.f2,(void*)0},{&g_79[0],(void*)0},{&g_32[4],&g_32[3]},{(void*)0,(void*)0},{&g_438,&g_32[6]},{(void*)0,&g_194}}};
    uint8_t l_845 = 247UL;
    uint8_t l_854 = 255UL;
    uint16_t *** const l_887 = (void*)0;
    int16_t ***l_969 = (void*)0;
    int64_t l_993 = 0x0F43FD69DD15054ALL;
    uint16_t l_995 = 0UL;
    int32_t ***l_1000 = &g_898;
    union U3 *l_1004 = &g_1005;
    uint32_t l_1019 = 0x8460DDF1L;
    int32_t l_1026 = 0x3ADED513L;
    int8_t l_1064 = 0x77L;
    int32_t l_1088 = 0xA37F96E2L;
    int16_t l_1114 = 5L;
    int32_t l_1122 = (-2L);
    int64_t ***l_1155 = &g_213[2];
    int64_t ****l_1154 = &l_1155;
    int32_t *l_1195 = &g_939;
    int32_t **l_1194[7] = {&l_1195,&l_1195,&l_1195,&l_1195,&l_1195,&l_1195,&l_1195};
    struct S0 *l_1237 = &g_1238;
    struct S1 l_1295 = {23,11461,217,0,4043,81,4,12};
    int i, j, k;
lbl_1056:
    for (g_103 = 0; (g_103 <= 1); g_103 += 1)
    {
        uint32_t l_847 = 18446744073709551612UL;
        int32_t l_853[8][1][6] = {{{0x5C9CA303L,(-9L),0x4D79C53EL,0x27670875L,(-5L),0x4D79C53EL}},{{0x5C9CA303L,0L,(-5L),(-2L),0L,(-1L)}},{{0xAF2AFC70L,0L,(-9L),0x9D602FE1L,(-5L),(-5L)}},{{0L,(-9L),(-9L),0L,0L,(-1L)}},{{(-2L),0x4F76B7ACL,(-5L),0L,(-1L),0x4D79C53EL}},{{0L,(-1L),0x4D79C53EL,0x9D602FE1L,(-1L),0x4F76B7ACL}},{{0xAF2AFC70L,0x4F76B7ACL,0L,(-2L),0L,0x4F76B7ACL}},{{0x5C9CA303L,(-9L),0x4D79C53EL,0x27670875L,(-5L),0x4D79C53EL}}};
        uint32_t l_871 = 0x4A0E52D6L;
        const uint16_t **l_936 = (void*)0;
        const uint16_t ***l_935 = &l_936;
        int32_t l_964 = 0x567C03BBL;
        int i, j, k;
        (*g_648) = (*g_648);
        for (p_11 = 0; (p_11 <= 2); p_11 += 1)
        {
            struct S0 *l_839 = &g_114;
            int32_t *l_841 = &g_79[0];
            int32_t l_867[3];
            struct S2 **l_951 = (void*)0;
            int16_t * const **l_986 = &g_984;
            int8_t *l_994 = &g_114.f1;
            int i;
            for (i = 0; i < 3; i++)
                l_867[i] = 0x0DEEBFC5L;
            if ((safe_mul_func_int8_t_s_s(g_103, (((**g_754) , g_74.f2) , (0x61345BEEL == (0xC6AF0DA9L ^ (((void*)0 != l_839) , (l_840 = 0xB22FC258L))))))))
            {
                int32_t **l_842[2];
                uint64_t l_850 = 0xA41473E38D253205LL;
                uint16_t ***l_886 = &g_754;
                uint16_t *l_890 = &g_891[1];
                uint64_t l_937 = 3UL;
                struct S1 l_940 = {28,-4989,401,0,8004,22,18,13};
                const uint32_t l_946 = 0x6D88F730L;
                int i;
                for (i = 0; i < 2; i++)
                    l_842[i] = &g_78;
                l_843[1][4][1] = l_841;
                for (g_158 = 0; (g_158 <= 1); g_158 += 1)
                {
                    union U3 *l_844 = &g_140;
                    if (p_8.f3)
                        break;
                    if ((*g_437))
                    {
                        l_844 = l_844;
                    }
                    else
                    {
                        int16_t l_846 = (-1L);
                        if (l_845)
                            break;
                        ++l_847;
                        --l_850;
                    }
                    for (g_156 = 1; (g_156 >= 0); g_156 -= 1)
                    {
                        ++l_854;
                    }
                }
                for (g_48 = 0; (g_48 <= 2); g_48 += 1)
                {
                    int16_t l_865[8] = {0x8B52L,(-1L),(-1L),0x8B52L,(-1L),(-1L),0x8B52L,(-1L)};
                    int32_t l_866[10][4][6] = {{{1L,1L,(-1L),1L,1L,(-1L)},{1L,1L,(-1L),1L,1L,(-1L)},{1L,1L,(-1L),1L,1L,(-1L)},{1L,1L,(-1L),1L,1L,(-1L)}},{{1L,1L,(-1L),1L,1L,(-1L)},{1L,1L,(-1L),1L,1L,(-1L)},{1L,1L,(-1L),1L,1L,(-1L)},{1L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L}},{{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L}},{{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L}},{{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L}},{{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L}},{{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L}},{{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L}},{{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L}},{{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{0xCE808BA7L,0xCE808BA7L,1L,0xCE808BA7L,0xCE808BA7L,1L},{(-1L),(-1L),0xCE808BA7L,(-1L),(-1L),0xCE808BA7L}}};
                    int16_t l_868 = 6L;
                    int32_t l_870 = 9L;
                    struct S0 *l_874 = &g_114;
                    int64_t *l_880 = (void*)0;
                    int64_t *l_881 = &g_156;
                    int i, j, k;
                    for (p_7 = 0; (p_7 <= 2); p_7 += 1)
                    {
                        const int64_t ****l_860 = &g_857;
                        struct S0 **l_861 = &g_113[0][1][5];
                        struct S0 **l_862 = &l_839;
                        int32_t l_863 = 0x510DDA24L;
                        int32_t l_864 = (-1L);
                        int32_t l_869[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_869[i] = 0xBAF4CF65L;
                        (*l_862) = ((((*l_860) = g_857) == (void*)0) , ((*l_861) = &g_114));
                        (*g_437) = 0L;
                        --l_871;
                    }
                    (*g_437) &= (((((((void*)0 == l_874) , ((l_865[6] < (safe_add_func_uint32_t_u_u(((~(safe_add_func_int64_t_s_s(0L, ((*l_881) = p_10.f3)))) , g_230), (-4L)))) , &g_761)) == &g_761) != 2L) != (*l_841)) < (*g_611));
                }
                if (((*g_437) = (4L > (p_10.f5 ^ ((*g_437) <= (0x0BBFL & ((0x1C261215L ^ ((p_10.f4 >= ((*l_890) &= (safe_mul_func_int16_t_s_s((l_886 != l_887), ((safe_sub_func_uint16_t_u_u(((0x6A65A38536D49531LL ^ p_8.f4) ^ (**g_754)), 65535UL)) <= p_8.f2))))) | p_8.f3)) < 255UL)))))))
                {
                    uint8_t l_902 = 254UL;
                    for (g_438 = 0; (g_438 <= 1); g_438 += 1)
                    {
                        int16_t l_892 = 0x3813L;
                        int64_t *l_894 = (void*)0;
                        int64_t *l_895 = &g_156;
                        int32_t l_896[4];
                        int8_t *l_906 = &g_114.f1;
                        uint8_t *l_910[10] = {&g_105,&g_105,&g_105,&g_105,&g_105,&g_105,&g_105,&g_105,&g_105,&g_105};
                        int64_t *l_911 = (void*)0;
                        int64_t *l_912 = (void*)0;
                        int64_t *l_913 = (void*)0;
                        int64_t *l_914 = &g_26;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_896[i] = 7L;
                        l_896[1] &= (0L | (l_892 & ((p_8.f6 & ((*l_895) ^= ((*l_841) = ((void*)0 == g_893)))) != (&g_194 == (void*)0))));
                        (*l_841) = ((void*)0 != g_897[0]);
                        (*l_841) = (l_853[7][0][5] ^= (&g_611 == &g_611));
                        (*l_841) = (safe_div_func_uint8_t_u_u((0x8EL | g_161[4].f2), (((safe_unary_minus_func_int16_t_s(l_902)) && ((((!(((*l_914) ^= (((safe_lshift_func_uint8_t_u_s((l_853[7][0][5] = ((((*l_906) = (((*l_895) = p_10.f1) <= p_8.f3)) != (p_8.f4 >= ((+(p_8.f5 & (p_8.f1 != ((-1L) < 0x0F44L)))) >= 1L))) , l_902)), 6)) <= 0UL) == 0x13E13C7EDA171494LL)) | p_10.f0)) , (void*)0) != (void*)0) != (**g_610))) ^ l_902)));
                    }
                }
                else
                {
                    int32_t l_930 = 0x1F70A14AL;
                    int64_t *l_931 = (void*)0;
                    int64_t *l_932 = &g_26;
                    int32_t *l_938 = &g_939;
                    int32_t *l_965 = &l_867[0];
                    if ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((0xC339L & ((*l_890) = (((((*l_938) = (((safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(0x9A5E3A71L, 1UL)) , (safe_rshift_func_int8_t_s_u(g_74.f2, ((((safe_lshift_func_uint16_t_u_s((((**g_754) != (safe_mul_func_uint8_t_u_u((!((((((*l_932) &= l_930) ^ (p_10.f2 != (((safe_add_func_int32_t_s_s((p_8.f7 < p_8.f1), g_79[0])) , l_887) != l_935))) > l_853[7][0][5]) & l_937) && p_8.f5)), g_74.f3))) || p_10.f4), 1)) > (***g_893)) > g_438) | (*g_755))))), l_930)) < p_10.f4) != g_156)) , (*g_755)) > 8L) < l_930))), 4294967295UL)), 1)))
                    {
                        return (*l_841);
                    }
                    else
                    {
                        (*l_841) = (l_940 , ((safe_lshift_func_uint8_t_u_u((p_7 ^ (+((safe_rshift_func_int16_t_s_s(l_946, 1)) , (((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((void*)0 != l_951), 7)), ((*g_437) = (safe_sub_func_int32_t_s_s((+(g_32[6] | ((*l_841) , ((safe_rshift_func_int16_t_s_s(0x13D1L, 5)) < (!(safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(l_930, 1)) ^ (*g_611)), p_10.f4)), (**g_754)))))))), 7UL))))) >= l_964) < l_853[7][0][5])))), 0)) , (*g_437)));
                        l_965 = &p_11;
                    }
                }
            }
            else
            {
                uint8_t l_973 = 0x2EL;
                int32_t l_978 = 0xE29E7C1CL;
                (*g_437) = p_7;
                for (p_10.f3 = 0; (p_10.f3 <= 1); p_10.f3 += 1)
                {
                    int32_t l_972 = 0x7AA96EF2L;
                    uint32_t *l_979 = &g_140.f1;
                    (*l_841) = ((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int64_t_s((((l_969 = l_969) == (void*)0) , ((((safe_div_func_uint16_t_u_u((*g_755), l_972)) & (p_8.f4 , (*l_841))) , l_973) <= (((*l_979) = (((safe_add_func_int64_t_s_s((((*l_841) >= ((l_978 = (safe_mul_func_int16_t_s_s(((*l_841) && 0x85E3L), (***g_893)))) < (*l_841))) , p_10.f6), (*l_841))) != (*l_841)) > (*l_841))) || 0xBED5FB0AL))))), 2)) & (*g_611));
                }
                l_841 = &p_11;
            }
            (*g_437) = ((safe_lshift_func_uint16_t_u_u(((((safe_mul_func_uint16_t_u_u((p_8.f1 <= 0L), 0x1575L)) , p_8.f7) == (((*l_986) = g_984) != &g_985)) != (((*l_994) &= (safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(p_8.f1, 7)) && (l_871 < (safe_mod_func_uint64_t_u_u(l_993, l_964)))), 0UL))) && 0x5DL)), p_11)) , (*l_841));
        }
    }
    if ((l_995 >= ((safe_div_func_uint32_t_u_u(8UL, p_10.f0)) != ((void*)0 == l_1000))))
    {
        union U3 **l_1001 = (void*)0;
        union U3 *l_1003[6] = {(void*)0,&g_140,&g_140,(void*)0,&g_140,&g_140};
        union U3 **l_1002[10] = {&l_1003[4],&l_1003[0],&l_1003[0],&l_1003[4],&l_1003[0],&l_1003[0],&l_1003[4],&l_1003[0],&l_1003[0],&l_1003[4]};
        uint8_t l_1006 = 255UL;
        uint16_t l_1030 = 65526UL;
        int32_t l_1038 = 1L;
        int32_t l_1071 = 0x6E47ADB6L;
        int32_t l_1077 = 0xF93B5C9DL;
        int32_t l_1078 = 0L;
        int32_t l_1090 = (-1L);
        int32_t l_1098 = 0L;
        int32_t l_1099 = (-2L);
        int32_t l_1100 = 2L;
        int32_t l_1101 = 0x4AB863F6L;
        int32_t l_1103 = 0x3E47DC90L;
        int32_t l_1104[3];
        uint32_t l_1126[4];
        int32_t l_1169 = 1L;
        int32_t *l_1233 = &l_1104[0];
        int32_t *l_1234 = &g_114.f2;
        uint8_t l_1245 = 0x87L;
        uint64_t *l_1248 = &g_1190;
        uint64_t **l_1247 = &l_1248;
        uint64_t ***l_1246[8][2] = {{(void*)0,&l_1247},{&l_1247,(void*)0},{&l_1247,&l_1247},{(void*)0,&l_1247},{&l_1247,(void*)0},{&l_1247,&l_1247},{(void*)0,&l_1247},{&l_1247,(void*)0}};
        uint64_t ****l_1249 = &l_1246[5][1];
        int i, j;
        for (i = 0; i < 3; i++)
            l_1104[i] = (-6L);
        for (i = 0; i < 4; i++)
            l_1126[i] = 1UL;
        l_1004 = &g_140;
        if (l_1006)
        {
            int16_t l_1021[4][6] = {{0x968AL,0x1DB4L,0x1DB4L,0x968AL,0x5431L,1L},{0x9184L,1L,0xE495L,0x2BF2L,(-1L),0x2BF2L},{0x5431L,0x4AA0L,0x5431L,(-1L),(-1L),0x0302L},{0xE495L,1L,0x9184L,0x5431L,0x5431L,0x9184L}};
            int i, j;
            (*g_437) |= p_10.f5;
            for (l_1006 = 0; (l_1006 <= 7); l_1006 += 1)
            {
                uint32_t ***l_1011 = &g_482;
                int32_t l_1020[3][1][1];
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1020[i][j][k] = 0xEE56D6D1L;
                    }
                }
                for (g_101 = 7; (g_101 >= 0); g_101 -= 1)
                {
                    uint32_t ***l_1010 = &g_482;
                    const int64_t ****l_1012 = &g_857;
                    int i, j;
                    (*g_437) = (g_308[g_101][(g_101 + 1)] ^ (+(((1UL & (safe_rshift_func_int16_t_s_s(((((l_1010 != l_1011) != (((*l_1012) = (void*)0) != (void*)0)) , (safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((**g_754), (l_1019 && ((l_1020[0][0][0] | l_1020[0][0][0]) | (-1L))))), p_8.f7)) && l_1020[0][0][0]), g_308[g_101][(g_101 + 1)]))) , (*g_611)), (**g_984)))) <= l_1021[3][4]) , p_8.f5)));
                }
                if (l_1020[0][0][0])
                    continue;
            }
            (*g_437) |= l_1021[3][4];
        }
        else
        {
            int8_t l_1043 = (-1L);
            for (g_302 = 1; (g_302 != (-23)); g_302 = safe_sub_func_uint8_t_u_u(g_302, 6))
            {
                int16_t l_1037[7][10] = {{(-1L),(-1L),1L,0x878AL,8L,1L,8L,0x878AL,1L,(-1L)},{8L,(-1L),0x7308L,8L,(-1L),(-1L),8L,0x7308L,(-1L),8L},{0x7308L,(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),0x7308L,0x7308L},{8L,0x878AL,1L,(-1L),(-1L),1L,0x878AL,8L,1L,8L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),0x7308L,0x7308L,(-1L)},{0x7308L,8L,(-1L),(-1L),8L,0x7308L,(-1L),8L,(-1L),0x7308L},{0x878AL,8L,1L,8L,0x878AL,1L,(-1L),(-1L),1L,0x878AL}};
                int32_t l_1055 = 0x96922F45L;
                int i, j;
                if (p_8.f1)
                {
                    int8_t *l_1039 = &g_230;
                    uint32_t ***l_1050 = &g_482;
                    int64_t ***l_1052 = &g_213[2];
                    int64_t ****l_1051 = &l_1052;
                    for (g_114.f1 = 0; (g_114.f1 < 28); g_114.f1++)
                    {
                        int16_t l_1027 = 0L;
                        int64_t l_1028[6][7][6] = {{{0xB020E2F345BB0A3ALL,0xA19FB72F6E8A9AE9LL,0x6C237DAACD8CF271LL,0x26397DBF10835CAELL,0x1AA62252E8C3D036LL,(-1L)},{0xDB194ACF5C249CC1LL,(-1L),0xFCDF6110D711E544LL,0xB52A913D6CE8BDAALL,0xB52A913D6CE8BDAALL,0xFCDF6110D711E544LL},{(-2L),(-2L),0xA19FB72F6E8A9AE9LL,1L,1L,0L},{0xBF350FF5A990257ELL,(-1L),8L,(-1L),0x1E0EBDC27D476422LL,0xA19FB72F6E8A9AE9LL},{(-1L),0xBF350FF5A990257ELL,8L,0L,(-2L),0L},{0x92723A9E0638D45ELL,0L,0xA19FB72F6E8A9AE9LL,0xC6DBE2F618D45FE9LL,(-1L),0xFCDF6110D711E544LL},{0xC6DBE2F618D45FE9LL,(-1L),0xFCDF6110D711E544LL,0x7E8F7AA384E00745LL,0xF10907FBA8E6D7BDLL,(-1L)}},{{0x541B48F0DA32ADF9LL,0L,0x6C237DAACD8CF271LL,5L,0x0CDEE83149A6EC0CLL,(-4L)},{0x92723A9E0638D45ELL,(-2L),0xAF9CBB5038D017DCLL,(-1L),0x541B48F0DA32ADF9LL,(-1L)},{0xF10907FBA8E6D7BDLL,0x26397DBF10835CAELL,1L,0xFCDF6110D711E544LL,1L,0L},{1L,1L,0x3A201C9055F9B0B6LL,0x2E48B2CBF082C04BLL,0x18AE60568D1BDDDBLL,5L},{1L,0xE32C531FD13F4CEDLL,0x92D403F07D260D51LL,0x26397DBF10835CAELL,0x96B427D58323F44CLL,0x2E48B2CBF082C04BLL},{(-1L),(-9L),0xC6DBE2F618D45FE9LL,0L,0x92723A9E0638D45ELL,(-1L)},{0xC6DBE2F618D45FE9LL,(-2L),2L,0xAF9CBB5038D017DCLL,0x33C8AEBD41DD8E70LL,0L}},{{0x6C237DAACD8CF271LL,8L,0x26220E497A635A24LL,0xC6DBE2F618D45FE9LL,0x7E8F7AA384E00745LL,0x6C237DAACD8CF271LL},{0x83AAF8817AE4377BLL,0xFCDF6110D711E544LL,0x92723A9E0638D45ELL,0x61F865F69461733ELL,(-1L),5L},{0x4A5C98808F982FECLL,0x541B48F0DA32ADF9LL,0x51CC3BC6C5FEE4E8LL,0x13BE3E3773B20005LL,1L,0L},{0x85A5E905D6FFE242LL,1L,0x13BE3E3773B20005LL,0x1A453D3734B6C0A0LL,0x13BE3E3773B20005LL,1L},{0x88FA153087B427AFLL,(-1L),0xAF9CBB5038D017DCLL,0x26220E497A635A24LL,0x646DF6532F0B96D1LL,0x92723A9E0638D45ELL},{0x6C237DAACD8CF271LL,3L,0x1A453D3734B6C0A0LL,0xD65BAF9B78D78017LL,(-1L),0xBF350FF5A990257ELL},{0x1A5898BDF04CDA72LL,3L,0xB020E2F345BB0A3ALL,0x598BBD3DDAF8013BLL,0x646DF6532F0B96D1LL,(-1L)}},{{0x51CC3BC6C5FEE4E8LL,(-1L),0L,0x26397DBF10835CAELL,0x13BE3E3773B20005LL,0x4A5C98808F982FECLL},{(-1L),1L,0x40796A4F84ECA5BCLL,0x73CB5AD34547A7F9LL,1L,0xF10907FBA8E6D7BDLL},{0L,0x541B48F0DA32ADF9LL,0L,0L,(-1L),0xFCDF6110D711E544LL},{0xF10907FBA8E6D7BDLL,0xFCDF6110D711E544LL,0L,0x92723A9E0638D45ELL,0x7E8F7AA384E00745LL,0xE462627BCDB8D553LL},{0x92D403F07D260D51LL,8L,0xB020E2F345BB0A3ALL,8L,0x33C8AEBD41DD8E70LL,2L},{0x2EC71DACBD87D9BCLL,(-2L),0x61F865F69461733ELL,1L,0x92723A9E0638D45ELL,0x92D403F07D260D51LL},{0xA19FB72F6E8A9AE9LL,(-9L),0xD65BAF9B78D78017LL,(-1L),0x96B427D58323F44CLL,1L}},{{3L,0xE32C531FD13F4CEDLL,1L,0L,0x18AE60568D1BDDDBLL,0x40796A4F84ECA5BCLL},{(-1L),1L,0x1AA62252E8C3D036LL,0xE74EFC26D288026ALL,1L,0x7E8F7AA384E00745LL},{1L,0x26397DBF10835CAELL,0x92723A9E0638D45ELL,0x2EC71DACBD87D9BCLL,0x541B48F0DA32ADF9LL,0x2E48B2CBF082C04BLL},{0x51CC3BC6C5FEE4E8LL,(-2L),0x1A5898BDF04CDA72LL,(-1L),0x92723A9E0638D45ELL,1L},{0x0CDEE83149A6EC0CLL,0xE462627BCDB8D553LL,0x96B427D58323F44CLL,0xAF9CBB5038D017DCLL,0x88FA153087B427AFLL,(-1L)},{0xE74EFC26D288026ALL,1L,0x26220E497A635A24LL,0x26220E497A635A24LL,1L,0xE74EFC26D288026ALL},{0xB52A913D6CE8BDAALL,0xFCDF6110D711E544LL,(-1L),0xDB194ACF5C249CC1LL,(-1L),0x7E8F7AA384E00745LL}},{{0x4A5C98808F982FECLL,0x96B427D58323F44CLL,0x3A201C9055F9B0B6LL,2L,1L,0L},{0x4A5C98808F982FECLL,0x646DF6532F0B96D1LL,2L,0xDB194ACF5C249CC1LL,0x13BE3E3773B20005LL,0x598BBD3DDAF8013BLL},{0xB52A913D6CE8BDAALL,(-1L),0xD65BAF9B78D78017LL,0x26220E497A635A24LL,(-1L),0xA19FB72F6E8A9AE9LL},{0xE74EFC26D288026ALL,0x94938B3B0A424A7CLL,0x1A453D3734B6C0A0LL,0xAF9CBB5038D017DCLL,0L,0x13BE3E3773B20005LL},{0x0CDEE83149A6EC0CLL,3L,0L,(-1L),1L,0xE74EFC26D288026ALL},{0x4CA75F91A6DDAB45LL,1L,0x83AAF8817AE4377BLL,0xAF9CBB5038D017DCLL,(-1L),0L},{1L,0xBF350FF5A990257ELL,0L,0x61F865F69461733ELL,0L,(-1L)}}};
                        int32_t l_1029 = 0L;
                        int i, j, k;
                        if (l_1026)
                            break;
                        (*g_437) &= 3L;
                        l_1030--;
                    }
                    p_8.f0 |= (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_1037[5][7], ((*l_1039) = (l_1038 &= 0x3EL)))), ((g_329[0].f2 , ((g_1005 , ((g_1040 == ((((*g_985) = (safe_mod_func_uint32_t_u_u(((p_10.f3 != l_1043) < (safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(l_1030, (safe_div_func_uint64_t_u_u(((void*)0 != l_1050), 5L)))), (-8L)))), l_1037[4][6]))) ^ 1L) , (void*)0)) , &g_857)) == l_1051)) | l_1043)));
                    (*g_437) ^= p_8.f7;
                }
                else
                {
                    return p_8.f0;
                }
                for (g_158 = 0; (g_158 < 58); g_158++)
                {
                    if (p_10.f5)
                        break;
                    if (p_9)
                        continue;
                }
                l_1055 = (p_9 && 0L);
            }
            if (p_8.f1)
                goto lbl_1056;
            return l_1038;
        }
        for (l_995 = 0; (l_995 > 51); ++l_995)
        {
            struct S2 ***l_1061[2][3] = {{&g_648,&g_648,&g_648},{&g_648,&g_648,&g_648}};
            int32_t l_1063 = 0x9D986A50L;
            int32_t l_1075 = 0L;
            int32_t l_1076 = (-1L);
            int32_t l_1102 = 0xA1F0932DL;
            int32_t l_1108[10][7][3] = {{{0L,0xF7D1C8E7L,0x26DBB0D9L},{0xC3215272L,5L,(-10L)},{0x41BF06C2L,0xAB9D58B8L,0xA8F92F8CL},{(-9L),5L,0x59AC6546L},{7L,0xF7D1C8E7L,0xF7D1C8E7L},{0x3A7F1C9AL,5L,0L},{0L,0xAB9D58B8L,0x26DBB0D9L}},{{0xB574FFEFL,5L,0xC009D5E1L},{0x41BF06C2L,0xF7D1C8E7L,0xA8F92F8CL},{0xD1B9AEA5L,5L,0x26AB3E5BL},{7L,0xAB9D58B8L,0xF7D1C8E7L},{0xCF0DF0FFL,5L,0x93D6EE2DL},{0L,0xF7D1C8E7L,0x26DBB0D9L},{0xC3215272L,5L,(-10L)}},{{0x41BF06C2L,0xAB9D58B8L,0xA8F92F8CL},{(-9L),5L,0x59AC6546L},{7L,0xF7D1C8E7L,0xF7D1C8E7L},{0x3A7F1C9AL,5L,0L},{0L,0xAB9D58B8L,0x26DBB0D9L},{0xB574FFEFL,5L,0xC009D5E1L},{0x41BF06C2L,0xF7D1C8E7L,0xA8F92F8CL}},{{0xD1B9AEA5L,5L,0x26AB3E5BL},{7L,0xAB9D58B8L,0xF7D1C8E7L},{0xCF0DF0FFL,5L,0x93D6EE2DL},{0L,0xF7D1C8E7L,0x26DBB0D9L},{0xC3215272L,5L,(-10L)},{0x41BF06C2L,0xAB9D58B8L,0xA8F92F8CL},{(-9L),5L,0x59AC6546L}},{{7L,0xF7D1C8E7L,0xF7D1C8E7L},{0x3A7F1C9AL,5L,0L},{0L,0xAB9D58B8L,0x26DBB0D9L},{0xB574FFEFL,5L,0xC009D5E1L},{0x41BF06C2L,0xF7D1C8E7L,0xA8F92F8CL},{0xD1B9AEA5L,5L,0x26AB3E5BL},{7L,0xAB9D58B8L,0xF7D1C8E7L}},{{0xCF0DF0FFL,5L,0x93D6EE2DL},{0L,0xF7D1C8E7L,0x26DBB0D9L},{0xC3215272L,5L,(-10L)},{0x41BF06C2L,0xAB9D58B8L,0xA8F92F8CL},{(-9L),5L,0x59AC6546L},{7L,0xF7D1C8E7L,0xF7D1C8E7L},{0x3A7F1C9AL,5L,0L}},{{0L,0xAB9D58B8L,0x26DBB0D9L},{0xB574FFEFL,5L,0xC009D5E1L},{0x41BF06C2L,0xF7D1C8E7L,0xA8F92F8CL},{0xD1B9AEA5L,5L,0x26AB3E5BL},{7L,0xAB9D58B8L,0xF7D1C8E7L},{0xCF0DF0FFL,5L,0x93D6EE2DL},{0L,0xF7D1C8E7L,0x26DBB0D9L}},{{0xC3215272L,5L,(-10L)},{0x41BF06C2L,0xAB9D58B8L,0xA8F92F8CL},{(-9L),5L,0x59AC6546L},{7L,0xF7D1C8E7L,0xF7D1C8E7L},{0x3A7F1C9AL,5L,0L},{0L,0xAB9D58B8L,0x26DBB0D9L},{0xB574FFEFL,5L,0xC009D5E1L}},{{0x41BF06C2L,0xF7D1C8E7L,0xA8F92F8CL},{0xD1B9AEA5L,0x9E92D6FCL,0x740C9553L},{0xAB9D58B8L,0x49FF3827L,3L},{0x59AC6546L,0x9E92D6FCL,0xCC0794A9L},{1L,3L,1L},{(-10L),0x9E92D6FCL,0xACC981CEL},{0x6D9A2338L,0x49FF3827L,0x431E2023L}},{{0x93D6EE2DL,0x9E92D6FCL,0x01346978L},{0xAB9D58B8L,3L,3L},{0x26AB3E5BL,0x9E92D6FCL,(-1L)},{1L,0x49FF3827L,1L},{0xC009D5E1L,0x9E92D6FCL,0x7DDEDCCCL},{0x6D9A2338L,3L,0x431E2023L},{0L,0x9E92D6FCL,0x740C9553L}}};
            int32_t *l_1133 = &l_1108[7][1][0];
            int16_t l_1212 = (-9L);
            uint64_t *l_1232 = &g_1190;
            uint64_t **l_1231 = &l_1232;
            struct S0 *l_1235[3][7][4] = {{{&g_114,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114},{&g_114,(void*)0,&g_114,&g_114},{&g_114,(void*)0,(void*)0,&g_114},{(void*)0,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114}},{{&g_114,&g_114,(void*)0,&g_114},{&g_114,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114},{(void*)0,&g_114,(void*)0,&g_114},{&g_114,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114}},{{&g_114,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114}}};
            int i, j, k;
            if ((((&l_993 == (void*)0) > (((p_8.f4 < ((((safe_rshift_func_uint8_t_u_u(((func_58((p_10 , ((((g_648 = &g_328[2]) != &g_328[5]) == ((l_1038 == g_161[4].f3) , (~(l_1063 == l_1063)))) == p_9))) , l_1030) | (-8L)), 0)) < l_1064) != g_161[4].f6) , p_10.f3)) || 0UL) , p_10.f5)) >= (*g_437)))
            {
                int32_t *l_1069 = &g_32[4];
                int32_t l_1070 = 0x2934C8BBL;
                int32_t l_1073 = (-1L);
                int32_t l_1079[2][6] = {{(-1L),0x610342C8L,0x610342C8L,(-1L),0x610342C8L,0x610342C8L},{(-1L),0x610342C8L,0x610342C8L,(-1L),0x610342C8L,0x610342C8L}};
                uint32_t l_1080 = 8UL;
                int i, j;
                for (l_1026 = 0; (l_1026 < (-9)); l_1026 = safe_sub_func_int16_t_s_s(l_1026, 9))
                {
                    int32_t *l_1067 = &g_438;
                    int32_t **l_1068 = (void*)0;
                    int32_t l_1072[6];
                    int32_t l_1074 = 0L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1072[i] = 0x3AF922C7L;
                    l_1069 = l_1067;
                    l_1080--;
                    for (l_1071 = 5; (l_1071 >= 0); l_1071 -= 1)
                    {
                        return (*l_1069);
                    }
                }
            }
            else
            {
                int8_t l_1089 = (-1L);
                int32_t l_1091 = 0x3A18BC10L;
                int32_t l_1092 = (-1L);
                int32_t l_1093 = 0xBA6C0879L;
                int32_t l_1094 = 0x80A4E0F3L;
                int32_t l_1096 = (-1L);
                int32_t l_1105 = 0x9B6C3B3FL;
                int32_t l_1107 = 1L;
                int32_t l_1109 = 0xDC7CE5EBL;
                int32_t l_1110 = 0x9EFEEC70L;
                int32_t l_1111 = (-8L);
                int32_t l_1112 = 0L;
                int32_t l_1113 = 0x70574C63L;
                int32_t l_1115 = 0x59EE0C24L;
                int32_t l_1116 = 0x127D544CL;
                int32_t l_1117 = 6L;
                int32_t l_1118 = 0xEF5FCB14L;
                int32_t l_1119 = (-1L);
                int32_t l_1120 = 0x0288C28DL;
                int32_t l_1121 = 0x4B8051DBL;
                int32_t l_1123 = (-1L);
                int32_t l_1124[9][8] = {{0xBEF3781AL,0x85727A84L,(-1L),(-1L),0x85727A84L,0xBEF3781AL,0x2AF1DD15L,0x2AF1DD15L},{0xBEF3781AL,0x85727A84L,(-1L),(-1L),0x85727A84L,0xBEF3781AL,0x2AF1DD15L,0x2AF1DD15L},{0xBEF3781AL,0x85727A84L,(-1L),(-1L),0x85727A84L,0xBEF3781AL,0x2AF1DD15L,0x2AF1DD15L},{0xBEF3781AL,0x85727A84L,(-1L),(-1L),0x85727A84L,0xBEF3781AL,0x2AF1DD15L,0x2AF1DD15L},{0xBEF3781AL,0x85727A84L,(-1L),(-1L),0x85727A84L,0xBEF3781AL,0x2AF1DD15L,0x2AF1DD15L},{0xBEF3781AL,0x85727A84L,(-1L),(-1L),0x85727A84L,0xBEF3781AL,0x2AF1DD15L,0x2AF1DD15L},{0xBEF3781AL,0x85727A84L,(-1L),(-1L),0x85727A84L,0xBEF3781AL,0x2AF1DD15L,0x2AF1DD15L},{0xBEF3781AL,0x85727A84L,(-1L),(-1L),0x85727A84L,0xBEF3781AL,0x2AF1DD15L,0x2AF1DD15L},{0xBEF3781AL,0x85727A84L,(-1L),(-1L),0x85727A84L,0xBEF3781AL,0x2AF1DD15L,0x2AF1DD15L}};
                uint32_t l_1129[7][6] = {{0x7835DFC8L,0x881FD7CCL,0x881FD7CCL,0x7835DFC8L,0x881FD7CCL,0x881FD7CCL},{0x7835DFC8L,0x881FD7CCL,0x881FD7CCL,0x7835DFC8L,0x881FD7CCL,0x881FD7CCL},{0x7835DFC8L,0x881FD7CCL,0x881FD7CCL,0x7835DFC8L,0x881FD7CCL,0x881FD7CCL},{0x7835DFC8L,0x881FD7CCL,0x881FD7CCL,0x7835DFC8L,0x881FD7CCL,0x881FD7CCL},{0x7835DFC8L,0x881FD7CCL,0x881FD7CCL,0x7835DFC8L,0x881FD7CCL,0x881FD7CCL},{0x7835DFC8L,0x881FD7CCL,0x881FD7CCL,0x7835DFC8L,0x881FD7CCL,0x881FD7CCL},{0x7835DFC8L,0x881FD7CCL,0x881FD7CCL,0x7835DFC8L,0x881FD7CCL,0x881FD7CCL}};
                int32_t **l_1132[10][2][7] = {{{&l_843[1][4][1],&g_78,&g_78,&l_843[1][4][1],(void*)0,(void*)0,&l_843[1][4][0]},{&l_843[3][3][0],(void*)0,&g_78,&l_843[3][3][0],&l_843[1][4][0],(void*)0,(void*)0}},{{&l_843[1][4][1],(void*)0,&l_843[7][4][0],&l_843[1][4][1],&l_843[1][4][0],&g_78,&l_843[1][4][0]},{&l_843[1][4][1],&g_78,&g_78,&l_843[1][4][1],(void*)0,(void*)0,&l_843[1][4][0]}},{{&l_843[3][3][0],(void*)0,&g_78,&l_843[3][3][0],&l_843[1][4][0],(void*)0,(void*)0},{&l_843[1][4][1],(void*)0,&l_843[7][4][0],&l_843[1][4][1],&l_843[1][4][0],&g_78,&l_843[1][4][0]}},{{&l_843[1][4][1],&g_78,&g_78,&l_843[1][4][1],(void*)0,(void*)0,&l_843[1][4][0]},{&l_843[3][3][0],(void*)0,&g_78,&l_843[3][3][0],&l_843[1][4][0],(void*)0,(void*)0}},{{&l_843[1][4][1],(void*)0,&l_843[7][4][0],&l_843[1][4][1],&l_843[1][4][0],&g_78,&l_843[1][4][0]},{&l_843[1][4][1],&g_78,&g_78,&l_843[1][4][1],(void*)0,(void*)0,&l_843[1][4][0]}},{{&l_843[3][3][0],(void*)0,&g_78,&l_843[3][3][0],&l_843[1][4][0],(void*)0,(void*)0},{&l_843[1][4][1],(void*)0,&l_843[7][4][0],&l_843[1][4][1],&l_843[1][4][0],&g_78,&l_843[1][4][0]}},{{&l_843[1][4][1],&g_78,&g_78,&l_843[1][4][1],(void*)0,(void*)0,&l_843[1][4][0]},{&l_843[3][3][0],(void*)0,&g_78,&l_843[3][3][0],&l_843[1][4][0],(void*)0,(void*)0}},{{&l_843[1][4][1],(void*)0,&l_843[7][4][0],&l_843[1][4][1],&l_843[1][4][0],&g_78,&l_843[1][4][0]},{&l_843[1][4][1],&g_78,&g_78,&l_843[1][4][1],(void*)0,(void*)0,&l_843[1][4][0]}},{{&l_843[3][3][0],(void*)0,&g_78,&l_843[3][3][0],&l_843[1][4][0],(void*)0,(void*)0},{&l_843[1][4][1],(void*)0,&l_843[7][4][0],&l_843[1][4][1],&l_843[1][4][0],&g_78,&l_843[1][4][0]}},{{&l_843[1][4][1],&g_78,&g_78,&l_843[1][4][1],(void*)0,(void*)0,&l_843[1][4][0]},{&l_843[7][4][0],(void*)0,&g_78,&l_843[7][4][0],&l_843[9][4][1],(void*)0,&l_843[5][9][0]}}};
                const int64_t ** const **l_1156 = (void*)0;
                struct S2 l_1170 = {1371,936,167,0x15L,956,45,154};
                uint16_t **l_1225 = &g_755;
                int i, j, k;
                for (l_1019 = 0; (l_1019 >= 49); l_1019++)
                {
                    int32_t **l_1085 = (void*)0;
                    int32_t **l_1086 = (void*)0;
                    int32_t **l_1087 = &l_843[6][0][1];
                    int32_t l_1097[6] = {9L,9L,3L,9L,9L,3L};
                    int16_t l_1106[3];
                    int32_t l_1125 = 0L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1106[i] = 1L;
                    (*l_1087) = &p_11;
                    --l_1126[2];
                    for (l_1118 = 0; (l_1118 >= 0); l_1118 -= 1)
                    {
                        return p_10.f4;
                    }
                    l_1129[0][4]--;
                }
                l_1133 = &p_11;
                if (((*l_1133) = 0x4D4AD774L))
                {
                    int32_t l_1134 = (-2L);
                    struct S2 l_1143 = {691,-618,-112,0x10L,-2130,244,16598};
                    const int64_t ** const ***l_1157 = &l_1156;
                    uint16_t l_1158 = 0x1A9DL;
                    uint32_t *l_1159 = &g_140.f1;
                    int64_t *** const l_1177 = (void*)0;
                    int64_t *** const * const l_1176 = &l_1177;
                    int64_t *** const * const *l_1175 = &l_1176;
                    if (l_1134)
                        break;
                    (*g_437) |= (safe_add_func_uint16_t_u_u((((*l_1159) = (((((p_9 && p_8.f0) == (safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((l_1143 , (safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((*g_1040) = (((safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(p_10.f0, p_10.f0)) && ((safe_rshift_func_uint8_t_u_s(p_8.f1, 0)) & (l_1104[0] , (l_1154 != ((*l_1157) = l_1156))))), p_10.f0)) != l_1126[3]) | g_79[0])), (-1L))), p_11))) && g_26) , l_1158), (***g_893))), g_512)), (**g_610)))) || p_8.f4) ^ l_1090) | (*l_1133))) || 0x2B37C8EEL), (-9L)));
                    for (l_1123 = 0; (l_1123 != (-9)); --l_1123)
                    {
                        uint8_t *l_1186 = &g_161[4].f3;
                        uint64_t *l_1187 = (void*)0;
                        uint64_t *l_1188 = &g_311;
                        uint64_t *l_1189 = &g_1190;
                        int32_t *l_1193 = (void*)0;
                        int32_t **l_1192 = &l_1193;
                        int32_t ***l_1191[2];
                        uint64_t **l_1204 = &l_1187;
                        uint16_t *l_1211 = &l_1158;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1191[i] = &l_1192;
                        (*l_1133) = (!(safe_mul_func_uint16_t_u_u((p_10 , 1UL), (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_1169, ((l_1170 , g_1171) != (l_1175 = g_1172)))), 6)))));
                        l_1194[5] = ((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(((*l_1133) < ((((void*)0 != (*g_761)) , (safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u(((*l_1186) = (g_1005 , p_11)), (p_10.f3 || (p_10.f2 <= ((*l_1189) = ((*l_1188) = 3UL)))))) | (0xDB53L ^ 0x918EL)), 0UL))) < 5UL)), 0xD7F61085L)), p_8.f0)) , (void*)0);
                        (*g_437) = ((safe_mul_func_uint8_t_u_u(((((safe_div_func_int16_t_s_s(0xF30AL, (((((*g_648) = (*g_648)) == (p_10.f4 , &p_10)) | (safe_rshift_func_uint8_t_u_s(((*l_1186) = (safe_rshift_func_int8_t_s_u(((((((*l_1204) = &g_1190) == (void*)0) || ((safe_mod_func_uint32_t_u_u(p_7, (((safe_mul_func_int16_t_s_s(((((*g_985) == (safe_mul_func_uint16_t_u_u(((*l_1211) ^= (**g_754)), (**g_610)))) || l_1143.f3) == 0xA5B8L), p_8.f7)) <= 1L) , p_8.f6))) , p_8.f2)) , (*l_1133)) != (***g_893)), (*l_1133)))), l_1212))) & (**g_754)))) > 0xC536L) != p_8.f2) , 0x21L), 0L)) && 0xB2L);
                    }
                    (*g_437) = p_10.f4;
                }
                else
                {
                    uint8_t l_1213 = 0x0DL;
                    uint16_t * const *l_1224 = &g_755;
                    struct S0 *l_1239[7][7] = {{&g_114,&g_114,&g_1238,&g_114,&g_114,&g_1238,&g_114},{&g_114,&g_114,&g_1238,&g_114,&g_1238,&g_114,&g_114},{&g_1238,&g_114,&g_114,&g_1238,&g_114,&g_114,&g_114},{&g_114,&g_114,&g_114,&g_114,&g_114,&g_114,&g_114},{&g_114,&g_1238,&g_114,&g_114,&g_1238,&g_1238,&g_114},{&g_1238,&g_114,&g_1238,&g_114,&g_114,&g_114,&g_1238},{&g_114,&g_114,&g_1238,&g_114,&g_114,&g_1238,&g_114}};
                    union U3 l_1240[4][2] = {{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}}};
                    int i, j;
                    l_843[1][4][1] = &p_11;
                    l_1213--;
                    for (g_105 = 0; (g_105 < 43); g_105 = safe_add_func_uint8_t_u_u(g_105, 9))
                    {
                        uint8_t *l_1226 = &l_845;
                        (*g_437) |= ((((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_8.f0, l_1213)), (safe_mod_func_uint64_t_u_u((((*l_1226) = (l_1224 == ((*g_893) = l_1225))) <= (safe_rshift_func_uint8_t_u_u(l_1169, 5))), (safe_lshift_func_int8_t_s_u(((g_1190 = p_8.f0) | (*l_1133)), 2)))))) , l_1231) != (*g_761)) , p_10.f6);
                        l_1234 = l_1233;
                    }
                    if ((*l_1234))
                    {
                        struct S0 **l_1236[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1236[i] = &l_1235[0][5][3];
                        (*l_1233) &= ((*l_1133) = ((l_1237 = l_1235[1][1][3]) != l_1239[6][1]));
                    }
                    else
                    {
                        uint32_t l_1244 = 0UL;
                        (*l_1133) &= p_8.f1;
                        (*l_1234) = (l_1240[2][1] , (((((((safe_sub_func_int32_t_s_s(p_10.f2, l_1240[2][1].f0)) | ((((((l_1240[2][1].f1 > 0x6394557CFAFF19F1LL) ^ (+0x79807CC2L)) >= (((0x27383115L <= l_1244) & (p_8.f3 || p_8.f2)) == l_1245)) == p_8.f0) & p_10.f0) != (***g_893))) || g_74.f3) ^ p_8.f2) , (*g_754)) == (void*)0) != l_1240[2][1].f1));
                        return p_8.f1;
                    }
                }
            }
        }
        (*l_1249) = l_1246[6][1];
    }
    else
    {
        int32_t l_1258 = 0x09EB3853L;
        int32_t l_1259 = 0xD98D30EAL;
        g_1260 = (safe_div_func_uint16_t_u_u(((**g_610) >= ((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((p_10.f0 ^ (safe_rshift_func_int16_t_s_s(0L, p_10.f1))), (l_1259 ^= l_1258))), (func_58((*g_755)) , l_1258))) > 1L)), l_1258));
        for (l_1114 = 0; (l_1114 <= 11); l_1114 = safe_add_func_int16_t_s_s(l_1114, 7))
        {
            int16_t l_1275 = (-1L);
            p_8.f1 = (safe_div_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(((*l_1004) , (p_8 , l_1258)), l_1275)), ((((((6L <= ((((!(safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(250UL, (safe_rshift_func_int16_t_s_u((0x220D5C7CL ^ 7UL), (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((-1L), (-7L))), (*g_611))))))), p_10.f3))) ^ p_9) | l_1275) && 0x46L)) == p_8.f2) , p_10.f0) == l_1275) != (*g_763)) & 0xB125L))), p_8.f7)), p_8.f3)), 14)) < g_74.f1), p_10.f6));
            for (l_993 = 0; (l_993 <= (-12)); l_993 = safe_sub_func_int32_t_s_s(l_993, 9))
            {
                uint32_t l_1317 = 0UL;
                int16_t l_1330 = (-1L);
                for (p_7 = (-21); (p_7 == 6); p_7 = safe_add_func_uint32_t_u_u(p_7, 5))
                {
                    int32_t l_1300 = 0L;
                    uint8_t *l_1303 = &g_329[0].f3;
                    uint8_t *l_1307 = &g_105;
                    uint8_t *l_1308 = &l_854;
                    int64_t *l_1316 = &g_156;
                    int32_t l_1318 = (-8L);
                    struct S0 * const *l_1319 = &g_113[0][1][5];
                    struct S0 * const **l_1320 = (void*)0;
                    struct S0 * const **l_1321 = &l_1319;
                    l_1318 = ((safe_div_func_int8_t_s_s(p_8.f3, (safe_lshift_func_uint8_t_u_s(((((l_1295 , ((((*l_1316) |= (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(l_1300, 15)), ((safe_rshift_func_uint8_t_u_s(((*l_1303)++), g_161[4].f3)) < (((safe_unary_minus_func_uint64_t_u((((*l_1307) ^= 2UL) | (--(*l_1308))))) == (safe_add_func_int64_t_s_s((&g_984 != (void*)0), (safe_unary_minus_func_int32_t_s(((safe_div_func_uint64_t_u_u(((((l_1259 = 1L) == (0xC2L | l_1258)) | l_1300) || l_1258), p_10.f3)) && (***g_761))))))) ^ (***g_893)))))) != 0x568676CF32419A26LL) > p_10.f6)) <= p_8.f4) && l_1317) == p_11), l_1275)))) ^ p_10.f4);
                    (*l_1321) = l_1319;
                    if (l_1318)
                    {
                        uint64_t l_1322 = 0UL;
                        if (l_1322)
                            break;
                    }
                    else
                    {
                        return p_10.f4;
                    }
                }
                for (g_1238.f2 = 1; (g_1238.f2 >= 0); g_1238.f2 -= 1)
                {
                    int8_t *l_1327 = &g_1238.f1;
                    l_1330 &= ((~0x09L) & (~(1UL ^ ((safe_lshift_func_int8_t_s_s(((*l_1327) = l_1317), 5)) <= (--(**g_754))))));
                }
            }
        }
    }
    for (g_1260 = 0; (g_1260 < 29); g_1260 = safe_add_func_int64_t_s_s(g_1260, 3))
    {
        return p_8.f7;
    }
    return p_10.f6;
}







static int64_t func_15(union U3 p_16, int16_t p_17)
{
    for (p_16.f1 = 0; (p_16.f1 >= 7); p_16.f1 = safe_add_func_uint8_t_u_u(p_16.f1, 9))
    {
        for (g_48 = 0; (g_48 >= 2); ++g_48)
        {
            return p_16.f1;
        }
    }
    return p_17;
}







static uint16_t func_21(struct S0 p_22, int32_t p_23)
{
    struct S2 l_692[3] = {{1185,1025,1074,0x59L,-3101,391,17002},{1185,1025,1074,0x59L,-3101,391,17002},{1185,1025,1074,0x59L,-3101,391,17002}};
    uint64_t *l_700 = &g_311;
    uint64_t **l_699 = &l_700;
    int64_t *l_707 = &g_156;
    uint8_t *l_708 = (void*)0;
    uint8_t *l_709 = &g_329[0].f3;
    int64_t ***l_714[7][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1],&g_213[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    union U3 l_735 = {0x4D680AB066457BA6LL};
    uint16_t *l_751 = &g_158;
    uint16_t **l_750 = &l_751;
    int16_t *l_784[6] = {&g_498,&g_498,(void*)0,&g_498,&g_498,(void*)0};
    int16_t **l_783 = &l_784[1];
    int16_t ***l_782 = &l_783;
    uint32_t **l_795[5] = {&g_483,&g_483,&g_483,&g_483,&g_483};
    int32_t l_802 = 0xF78B18BBL;
    uint32_t *l_808 = (void*)0;
    uint32_t *l_809 = &g_140.f1;
    int32_t l_814 = (-6L);
    int32_t **l_815 = &g_77;
    int32_t ***l_816 = &l_815;
    int32_t **l_817 = &g_78;
    int32_t ***l_818 = &l_817;
    int8_t *l_819 = &g_114.f1;
    int32_t *l_829 = &g_79[0];
    int i, j;
    if (((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((l_692[1] , l_692[1].f6) & (((*l_709) ^= (safe_add_func_int16_t_s_s((*g_611), ((((65528UL != (safe_sub_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((l_699 = l_699) != &l_700), 2L)) | (((((*l_707) = ((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((3UL & (((((++g_311) & l_692[1].f4) || 0x5201L) != 0x157FL) , 0x62L)), p_22.f1)) != 0x38B4L), (**g_610))) & l_692[1].f2)) <= l_692[1].f3) == (-8L)) && l_692[1].f2)), p_22.f0))) < g_114.f2) != g_140.f1) < 0x9DC1L)))) != 0x7BL)), (*g_611))), l_692[1].f5)) >= p_22.f0))
    {
        uint64_t l_729 = 1UL;
        int32_t l_730 = 0xDF7D790DL;
        p_22.f2 = (safe_div_func_int32_t_s_s((g_114.f2 |= (safe_sub_func_int16_t_s_s(((l_714[2][8] == l_714[4][6]) || (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((p_23 , (**g_610)), p_22.f1)), (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(p_22.f1, 6)) && (safe_rshift_func_uint16_t_u_s(((((0x57627B9C38BE8CDBLL != ((((safe_rshift_func_int16_t_s_s(8L, (safe_add_func_uint32_t_u_u(((void*)0 != &g_113[0][1][5]), g_329[0].f4)))) & (*g_437)) != p_22.f1) > p_22.f1)) <= 0xC3F836D2L) <= 1L) , g_103), 2))), p_22.f0))))), 0x4FEBL))), l_729));
        l_730 = 1L;
    }
    else
    {
        uint32_t *l_786 = (void*)0;
        struct S2 l_788 = {717,-49,-988,8UL,3909,8,14399};
        int32_t *l_799[10] = {&g_48,&g_194,&g_32[9],&g_32[9],&g_194,&g_48,&g_194,&g_32[9],&g_32[9],&g_194};
        int i;
lbl_803:
        if (p_23)
        {
            int32_t l_736 = 1L;
            uint16_t *l_739 = &g_103;
            int16_t *l_742[8] = {&g_498,&g_498,&g_302,&g_498,&g_498,&g_302,&g_498,&g_498};
            int32_t l_743 = 0xFF9D73B6L;
            uint16_t ***l_752 = (void*)0;
            uint16_t ***l_753 = &l_750;
            uint16_t ***l_756 = &g_754;
            int i;
            l_692[1].f1 ^= (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((l_735 , l_736) <= (l_743 ^= ((safe_rshift_func_uint16_t_u_s(p_22.f2, 2)) ^ (0xD093L != (l_692[1].f2 ^= ((*l_739)++)))))) != ((safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(1L, 0)), ((((*l_753) = l_750) == ((*l_756) = g_754)) >= (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(g_26, l_735.f0)), p_22.f0))))) ^ p_22.f2), 9UL)) && 2UL)), p_22.f1)), 3));
            if (p_22.f0)
                goto lbl_803;
            return (**g_754);
        }
        else
        {
            const uint64_t ***l_765 = &g_762[6];
            const uint64_t ****l_764 = &l_765;
            int16_t *l_780 = (void*)0;
            int16_t **l_779[8] = {&l_780,&l_780,&l_780,&l_780,&l_780,&l_780,&l_780,&l_780};
            int16_t ***l_778 = &l_779[0];
            int16_t ****l_781 = &l_778;
            int32_t l_785 = 0x5D9683D9L;
            uint32_t *l_787 = &g_308[0][7];
            uint32_t ***l_796[3][8][5] = {{{&l_795[1],(void*)0,&l_795[1],&l_795[1],(void*)0},{&l_795[1],&g_482,&g_482,(void*)0,&l_795[0]},{&l_795[1],&l_795[1],&l_795[1],&l_795[1],&l_795[2]},{&l_795[1],&l_795[4],&l_795[0],&g_482,&g_482},{(void*)0,&l_795[1],&l_795[1],&l_795[1],&l_795[1]},{&g_482,&l_795[1],&l_795[1],&g_482,(void*)0},{&l_795[1],(void*)0,(void*)0,&l_795[1],&l_795[1]},{&g_482,&g_482,&l_795[0],(void*)0,&g_482}},{{&l_795[1],(void*)0,&l_795[2],&l_795[1],&l_795[1]},{&l_795[1],&l_795[1],&l_795[1],(void*)0,&l_795[1]},{&l_795[1],&l_795[1],&l_795[1],&l_795[1],&l_795[1]},{&l_795[1],&g_482,&g_482,&g_482,&g_482},{&l_795[1],&l_795[1],&l_795[1],&l_795[1],&l_795[1]},{&g_482,&l_795[1],&l_795[1],&g_482,&g_482},{&l_795[1],&l_795[1],&l_795[2],&l_795[2],&l_795[1]},{&g_482,&l_795[1],&l_795[0],&l_795[1],&l_795[1]}},{{(void*)0,&l_795[1],(void*)0,&l_795[2],&l_795[1]},{&g_482,&g_482,&l_795[1],&g_482,&g_482},{(void*)0,&l_795[1],&l_795[1],&l_795[1],&l_795[1]},{&g_482,&l_795[1],&l_795[1],&g_482,(void*)0},{&l_795[1],(void*)0,(void*)0,&l_795[1],&l_795[1]},{&g_482,&g_482,&l_795[0],(void*)0,&g_482},{&l_795[1],(void*)0,&l_795[2],&l_795[1],&l_795[1]},{&l_795[1],&l_795[1],&l_795[1],(void*)0,&l_795[1]}}};
            int32_t **l_797 = &g_78;
            int32_t **l_798[4][6][4] = {{{(void*)0,&g_77,(void*)0,&g_77},{&g_77,&g_78,(void*)0,(void*)0},{(void*)0,(void*)0,&g_77,(void*)0},{&g_78,&g_78,&g_78,&g_77},{&g_78,&g_77,&g_77,&g_78},{(void*)0,&g_77,(void*)0,&g_77}},{{&g_77,&g_78,(void*)0,(void*)0},{(void*)0,(void*)0,&g_77,(void*)0},{&g_78,&g_78,&g_78,&g_77},{&g_78,&g_77,&g_77,&g_78},{(void*)0,&g_77,(void*)0,&g_77},{&g_77,&g_78,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_77,(void*)0},{&g_78,&g_78,&g_78,&g_77},{&g_78,&g_77,&g_77,&g_78},{(void*)0,&g_77,(void*)0,&g_77},{&g_77,&g_78,(void*)0,(void*)0},{(void*)0,(void*)0,&g_77,(void*)0}},{{&g_78,&g_78,&g_78,&g_77},{&g_78,&g_77,&g_77,&g_78},{(void*)0,&g_77,(void*)0,&g_77},{&g_77,&g_78,(void*)0,(void*)0},{&g_77,&g_77,&g_78,&g_78},{(void*)0,(void*)0,(void*)0,&g_78}}};
            int8_t *l_800 = (void*)0;
            int8_t *l_801[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_801[i] = &g_230;
            (*l_764) = (g_761 = g_761);
            l_692[1].f1 ^= (safe_sub_func_uint32_t_u_u(((((((safe_sub_func_uint32_t_u_u((0x4EL | (9UL <= (safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((0UL && ((*l_707) = (((*l_781) = l_778) == l_782))), l_785)) & (l_786 == l_787)), (l_788 , p_22.f0))))), 0x9BE5DA6CL)) >= p_22.f0) , (void*)0) == (void*)0) != p_22.f2) >= 0UL), 0x18BDCD3AL));
            (*g_437) |= ((safe_sub_func_uint32_t_u_u(p_22.f2, (((((*g_648) != (((safe_mul_func_int16_t_s_s(l_692[1].f5, (safe_lshift_func_uint8_t_u_s(((g_482 = l_795[1]) == (l_692[2] , (p_22.f1 , &g_483))), 0)))) >= (l_802 = ((l_799[4] = l_786) != (void*)0))) , (void*)0)) <= l_735.f1) || 4294967295UL) , 1UL))) && p_22.f2);
        }
        for (g_158 = (-18); (g_158 >= 30); g_158++)
        {
            (*g_437) = (*g_437);
        }
    }
    if (((safe_add_func_uint32_t_u_u((--(*l_809)), (safe_mul_func_int8_t_s_s(((*l_819) = ((l_692[1] , ((*l_816) = ((9L | l_814) , l_815))) != ((*l_818) = l_817))), (safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((*g_437), ((safe_sub_func_int64_t_s_s(0xD2F83179E1D85FC5LL, (safe_add_func_uint64_t_u_u((safe_unary_minus_func_int64_t_s((((**g_610) & 0L) <= g_311))), 0x0EBFD4BC9AE90600LL)))) & 4294967295UL))), p_23)))))) <= p_23))
    {
        (**l_816) = l_829;
    }
    else
    {
        uint32_t l_830 = 0x5964E7BBL;
        return l_830;
    }
    return (*g_755);
}







static struct S0 func_24(uint8_t p_25)
{
    int32_t *l_29 = (void*)0;
    int32_t l_30 = (-4L);
    int32_t *l_31[4] = {&g_32[6],&g_32[6],&g_32[6],&g_32[6]};
    struct S0 l_33 = {0L,-4L,0x6DFE5350L};
    int i;
    g_32[2] = (l_30 &= (safe_mod_func_uint8_t_u_u(g_26, 1L)));
    return l_33;
}







static int32_t func_34(uint64_t p_35, int32_t * const p_36, int32_t * p_37, int32_t * p_38, int32_t * p_39)
{
    uint32_t l_441 = 4294967291UL;
    int32_t l_494 = 0xBAF16B69L;
    int32_t l_499[5] = {0x80D07B0AL,0x80D07B0AL,0x80D07B0AL,0x80D07B0AL,0x80D07B0AL};
    uint32_t l_501[10] = {0x70A3B6E8L,0x70A3B6E8L,0x70A3B6E8L,0x70A3B6E8L,0x70A3B6E8L,0x70A3B6E8L,0x70A3B6E8L,0x70A3B6E8L,0x70A3B6E8L,0x70A3B6E8L};
    uint8_t l_551 = 8UL;
    int16_t *l_592 = &g_302;
    int16_t **l_591 = &l_592;
    int32_t **l_687 = &g_77;
    int i;
    for (g_302 = 0; (g_302 > (-29)); --g_302)
    {
        int32_t *l_450 = (void*)0;
        uint32_t **l_484 = &g_483;
        int32_t l_506 = 0L;
        union U3 l_521 = {0xC4D4F22A72F8DAB3LL};
        struct S0 *l_523 = &g_114;
        struct S1 l_546 = {4,-624,174,0,5142,89,21,15};
        struct S2 l_547[5] = {{411,971,-666,0x27L,210,208,1505},{411,971,-666,0x27L,210,208,1505},{411,971,-666,0x27L,210,208,1505},{411,971,-666,0x27L,210,208,1505},{411,971,-666,0x27L,210,208,1505}};
        uint64_t l_581 = 1UL;
        const int64_t *l_654 = &g_26;
        int64_t l_656 = 0x6152829E50ED6328LL;
        int64_t ***l_664 = (void*)0;
        uint8_t **l_683 = &g_631[2][7][2];
        const int16_t l_685 = 0x812CL;
        int i;
        --l_441;
        for (g_230 = 0; (g_230 == (-27)); --g_230)
        {
            int32_t **l_451 = &g_77;
            int32_t **l_452 = &l_450;
            for (g_103 = 12; (g_103 <= 11); g_103 = safe_sub_func_int64_t_s_s(g_103, 6))
            {
                int32_t *l_448 = (void*)0;
                int32_t **l_449 = &g_78;
                (*l_449) = l_448;
            }
            (*l_452) = ((*l_451) = p_38);
        }
        for (l_441 = 0; (l_441 <= 36); l_441++)
        {
            uint16_t l_487 = 3UL;
            int32_t l_488 = 0x730C0E7EL;
            int32_t l_496 = 0L;
            int32_t l_500 = 0x77EF40C7L;
            int32_t l_528 = 0x99C17DE6L;
            for (g_103 = 0; (g_103 > 31); ++g_103)
            {
                union U3 l_461 = {0xD34B35DC61D2DEEALL};
                uint8_t *l_485 = &g_329[0].f3;
                int32_t **l_493[7][8] = {{&g_77,&g_77,&g_77,&g_77,&g_78,(void*)0,&g_77,&l_450},{&g_78,&l_450,&g_78,&g_77,&g_77,&g_78,&l_450,(void*)0},{&l_450,&l_450,&g_78,&g_78,&l_450,(void*)0,&l_450,&g_77},{&g_77,&g_77,&g_78,&l_450,&g_78,&g_77,&g_77,(void*)0},{&l_450,&g_77,&g_78,&g_77,(void*)0,&g_78,&g_78,&l_450},{(void*)0,&l_450,&l_450,&g_78,(void*)0,&g_78,&g_77,&l_450},{&l_450,&l_450,&l_450,&l_450,&g_78,&g_78,&l_450,&l_450}};
                int i, j;
                for (g_230 = 6; (g_230 < (-27)); --g_230)
                {
                    uint64_t *l_464 = &g_311;
                    uint16_t *l_486[9];
                    const int32_t *l_492 = &g_48;
                    const int32_t **l_491 = &l_492;
                    int32_t l_495 = 0x598D1EDDL;
                    int32_t l_497[7][10][3] = {{{4L,4L,0xB83C5AAEL},{0x207066F5L,(-1L),0x52041951L},{4L,0x1253FBF6L,4L},{(-5L),0xEE6E7DDCL,4L},{0x1253FBF6L,0xB477E10CL,0xB477E10CL},{3L,(-1L),4L},{0xFADE18F8L,0x8C507F81L,4L},{0x9C433DCCL,0x0012ADA9L,0x52041951L},{0xB83C5AAEL,0x5A0CBFDDL,0xB83C5AAEL},{0x52041951L,0x0012ADA9L,0x9C433DCCL}},{{4L,0x8C507F81L,0xFADE18F8L},{4L,(-1L),3L},{0xB477E10CL,0xB477E10CL,0x1253FBF6L},{4L,0xEE6E7DDCL,(-5L)},{4L,0x1253FBF6L,4L},{0x52041951L,(-1L),0x207066F5L},{0xB83C5AAEL,4L,4L},{0x9C433DCCL,0xE07A3EC4L,(-5L)},{0xFADE18F8L,1L,0x1253FBF6L},{3L,0xD62E2933L,3L}},{{0x1253FBF6L,1L,0xFADE18F8L},{(-5L),0xE07A3EC4L,0x9C433DCCL},{4L,4L,0xB83C5AAEL},{0x207066F5L,(-1L),0x52041951L},{4L,0x1253FBF6L,4L},{(-5L),0xEE6E7DDCL,4L},{0x1253FBF6L,0xB477E10CL,0xB477E10CL},{3L,(-1L),4L},{0xFADE18F8L,0x8C507F81L,4L},{0x9C433DCCL,0x0012ADA9L,0x52041951L}},{{0xB83C5AAEL,0x5A0CBFDDL,0xB83C5AAEL},{0x52041951L,0x0012ADA9L,0x9C433DCCL},{4L,0x8C507F81L,0xFADE18F8L},{4L,(-1L),3L},{0xB477E10CL,0L,0xB477E10CL},{0x9C433DCCL,(-1L),0x4A585D8EL},{0x5A0CBFDDL,0xB477E10CL,0xFADE18F8L},{0x207066F5L,0L,0x6C9004EAL},{1L,0x5A0CBFDDL,0xFADE18F8L},{3L,0x38CF3C95L,0x4A585D8EL}},{{0xB83C5AAEL,0x1253FBF6L,0xB477E10CL},{0x56D59D33L,0x8941FD6DL,0x56D59D33L},{0xB477E10CL,0x1253FBF6L,0xB83C5AAEL},{0x4A585D8EL,0x38CF3C95L,3L},{0xFADE18F8L,0x5A0CBFDDL,1L},{0x6C9004EAL,0L,0x207066F5L},{0xFADE18F8L,0xB477E10CL,0x5A0CBFDDL},{0x4A585D8EL,(-1L),0x9C433DCCL},{0xB477E10CL,0L,0L},{0x56D59D33L,0xD62E2933L,0x9C433DCCL}},{{0xB83C5AAEL,4L,0x5A0CBFDDL},{3L,0xEE6E7DDCL,0x207066F5L},{1L,4L,1L},{0x207066F5L,0xEE6E7DDCL,3L},{0x5A0CBFDDL,4L,0xB83C5AAEL},{0x9C433DCCL,0xD62E2933L,0x56D59D33L},{0L,0L,0xB477E10CL},{0x9C433DCCL,(-1L),0x4A585D8EL},{0x5A0CBFDDL,0xB477E10CL,0xFADE18F8L},{0x207066F5L,0L,0x6C9004EAL}},{{1L,0x5A0CBFDDL,0xFADE18F8L},{3L,0x38CF3C95L,0x4A585D8EL},{0xB83C5AAEL,0x1253FBF6L,0xB477E10CL},{0x56D59D33L,0x8941FD6DL,0x56D59D33L},{0xB477E10CL,0x1253FBF6L,0xB83C5AAEL},{0x4A585D8EL,0x38CF3C95L,3L},{0xFADE18F8L,0x5A0CBFDDL,1L},{0x6C9004EAL,0L,0x207066F5L},{0xFADE18F8L,0xB477E10CL,0x5A0CBFDDL},{0x4A585D8EL,(-1L),0x9C433DCCL}}};
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                        l_486[i] = &g_158;
                    l_488 = ((safe_sub_func_uint64_t_u_u(p_35, (-1L))) ^ (l_461 , (safe_sub_func_int64_t_s_s((g_329[0].f1 < p_35), (((*l_464)++) == ((safe_add_func_uint32_t_u_u((((p_35 & ((((safe_div_func_int16_t_s_s(((+((g_74.f5 >= (safe_div_func_uint16_t_u_u((g_158 = ((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(((g_482 != l_484) ^ g_329[0].f3), 3)) , (void*)0) != l_485), 0xDCB2L)), p_35)) | 0xF1841234L)), l_487))) <= 1UL)) | l_487), 0x5F80L)) >= l_441) > l_487) < p_35)) == 0UL) == g_194), g_329[0].f2)) < p_35))))));
                    for (l_461.f1 = (-23); (l_461.f1 < 8); l_461.f1++)
                    {
                        (*p_37) ^= (l_491 != l_493[2][0]);
                        (*p_36) = 0x43F85C0CL;
                    }
                    --l_501[1];
                }
                for (l_494 = (-10); (l_494 > 29); l_494 = safe_add_func_int16_t_s_s(l_494, 5))
                {
                    uint16_t l_507 = 0x4817L;
                    union U3 l_522 = {0x00DA8C9CCD45A170LL};
                    l_507--;
                    for (g_105 = 0; (g_105 == 44); ++g_105)
                    {
                        uint64_t *l_516 = (void*)0;
                        int16_t *l_524 = &g_498;
                        uint16_t *l_529 = &g_158;
                        if ((*p_38))
                            break;
                        (*g_437) = g_512;
                        (*p_37) = (safe_rshift_func_uint16_t_u_u(((*l_529) = (+((++g_311) , (((safe_rshift_func_uint8_t_u_u(0xDDL, ((p_35 , l_521) , ((((((l_522 , l_523) == (void*)0) < ((*l_524) = g_161[4].f0)) , ((safe_lshift_func_uint8_t_u_s(((((((safe_unary_minus_func_int16_t_s(0x8099L)) && (-1L)) | (*g_437)) >= g_329[0].f4) | 0x38L) || l_528), g_74.f0)) || 0x6DE50165L)) || 0x66CB41227AC861C3LL) > 8L)))) < p_35) & p_35)))), l_522.f1));
                        (*p_39) ^= (*g_437);
                    }
                    for (l_461.f1 = 0; (l_461.f1 == 17); l_461.f1 = safe_add_func_uint16_t_u_u(l_461.f1, 4))
                    {
                        if (l_496)
                            break;
                    }
                    for (g_114.f2 = 0; (g_114.f2 < (-5)); g_114.f2 = safe_sub_func_int64_t_s_s(g_114.f2, 7))
                    {
                        (*p_39) ^= l_501[1];
                    }
                }
                for (g_101 = 0; (g_101 < (-25)); --g_101)
                {
                    for (g_105 = 0; (g_105 <= 0); g_105 += 1)
                    {
                        (*g_437) = ((*p_37) = (*p_37));
                        if ((*g_437))
                            break;
                    }
                }
            }
            return l_488;
        }
        for (l_521.f1 = 0; (l_521.f1 <= 0); l_521.f1 += 1)
        {
            int32_t **l_536 = &g_78;
            int16_t *l_539 = (void*)0;
            uint64_t *l_550[8];
            uint8_t *l_552 = &l_547[2].f3;
            int64_t **l_565 = &g_214[1];
            struct S0 *l_571[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_612[4][1] = {{(-4L)},{0xC7F4FB8FL},{(-4L)},{0xC7F4FB8FL}};
            struct S2 **l_646[3];
            int i, j;
            for (i = 0; i < 8; i++)
                l_550[i] = &g_311;
            for (i = 0; i < 3; i++)
                l_646[i] = &g_328[3];
            (*l_536) = p_37;
            if ((safe_sub_func_int8_t_s_s((l_539 != &g_498), (safe_mul_func_uint16_t_u_u(((p_35 || (safe_sub_func_int32_t_s_s(((g_74.f5 , ((*l_552) = (safe_mul_func_int8_t_s_s(((l_546 , ((l_547[2] , (g_156 == (((safe_div_func_uint64_t_u_u((0L >= (l_551 = l_501[5])), p_35)) < 0x1906EA36L) < g_79[0]))) , g_161[4].f0)) ^ 0xEEL), p_35)))) != 0xE2L), (**l_536)))) , 0x50A9L), p_35)))))
            {
                return p_35;
            }
            else
            {
                int32_t l_568 = 0xDDF330B1L;
                struct S0 **l_572 = &l_571[5];
                int8_t *l_573 = (void*)0;
                int8_t *l_574 = (void*)0;
                int8_t *l_575 = &g_114.f1;
                int8_t *l_576 = &g_230;
                (*p_37) &= (0x8656E5E57A31C64CLL || ((g_74.f7 != (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_35, 1)), (safe_mul_func_int8_t_s_s(((*l_576) &= ((*l_575) = (safe_mod_func_uint16_t_u_u(((((safe_mul_func_uint16_t_u_u(0x4FD4L, g_114.f2)) == (l_565 == &g_214[1])) <= (((l_568 >= (safe_mul_func_uint8_t_u_u((((*l_572) = l_571[4]) != (void*)0), g_79[0]))) , p_35) > 0L)) == (*p_36)), 0x8362L)))), p_35))))) != 0x96FF3F0119B53AD5LL));
            }
            for (l_506 = 0; (l_506 >= 0); l_506 -= 1)
            {
                int32_t **l_577 = (void*)0;
                int32_t **l_578[9];
                int32_t **l_579 = (void*)0;
                int32_t **l_580 = &g_77;
                int32_t l_614 = 0x435F6AB0L;
                int i;
                for (i = 0; i < 9; i++)
                    l_578[i] = &l_450;
                (*l_580) = p_36;
                for (g_140.f1 = 0; (g_140.f1 <= 0); g_140.f1 += 1)
                {
                    uint8_t *l_598 = &g_105;
                    int32_t l_600 = 0x442813B4L;
                    struct S0 **l_602 = (void*)0;
                    if ((*p_39))
                    {
                        int16_t * const *l_590[1];
                        int8_t *l_597 = &g_230;
                        uint8_t **l_599 = &l_598;
                        int32_t l_601 = 0L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_590[i] = &l_539;
                        l_450 = p_38;
                        if ((*g_437))
                            continue;
                        ++l_581;
                        (*p_38) = (safe_div_func_int64_t_s_s(((((safe_mul_func_int16_t_s_s(((p_35 || (l_590[0] != l_591)) > (g_161[4].f1 || ((p_35 > (l_601 = (safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s((((*l_597) = (-10L)) <= (((*l_599) = l_598) != &g_105)), ((((l_547[2] , 0L) == g_48) <= g_114.f1) == (-1L)))) , 4294967289UL) | l_600), p_35)))) && g_308[0][7]))), p_35)) & p_35) || l_601) && p_35), p_35));
                    }
                    else
                    {
                        struct S0 l_609 = {0xE6L,0L,0L};
                        int32_t l_613 = (-1L);
                        int i, j, k;
                        (*p_38) &= (*p_39);
                        l_602 = &g_113[l_506][(g_140.f1 + 1)][(l_506 + 1)];
                        l_613 |= (safe_sub_func_int32_t_s_s((*p_39), (p_35 >= (l_600 & (((p_35 ^ (safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(0UL, 8UL)), (*g_77)))) > (l_609 , (l_612[3][0] ^= (&l_539 == g_610)))) > g_161[4].f2)))));
                    }
                    return l_614;
                }
            }
            for (l_581 = 0; (l_581 <= 0); l_581 += 1)
            {
                uint8_t l_622 = 255UL;
                struct S0 l_625 = {0x92L,0x0DL,4L};
                uint64_t *l_629[7][7] = {{(void*)0,&g_311,(void*)0,&g_311,(void*)0,&l_581,&l_581},{&l_581,&l_581,&g_311,&g_311,&l_581,&l_581,(void*)0},{&l_581,(void*)0,(void*)0,&g_311,&l_581,&g_311,&g_311},{&g_311,&l_581,(void*)0,&g_311,&g_311,&g_311,(void*)0},{(void*)0,(void*)0,&l_581,&l_581,&g_311,(void*)0,(void*)0},{(void*)0,&l_581,&l_581,(void*)0,(void*)0,&g_311,&g_311},{&g_311,&g_311,&g_311,&g_311,&g_311,(void*)0,(void*)0}};
                int64_t *l_655 = (void*)0;
                int8_t *l_665 = (void*)0;
                int64_t *l_666 = &g_512;
                int32_t **l_677[7];
                uint32_t l_682 = 0xC7B3B3A1L;
                uint16_t *l_684[7];
                uint32_t *l_686[2];
                int i, j;
                for (i = 0; i < 7; i++)
                    l_677[i] = &g_77;
                for (i = 0; i < 7; i++)
                    l_684[i] = &g_158;
                for (i = 0; i < 2; i++)
                    l_686[i] = &l_501[0];
                for (l_551 = 0; (l_551 <= 0); l_551 += 1)
                {
                    int16_t l_615[10][4][6] = {{{0x96D9L,(-1L),0xE619L,0xA3FFL,0x7A75L,0x93CDL},{(-1L),0x9A8EL,0xD5E9L,0L,0x5205L,(-1L)},{0xEBA3L,0x1F94L,0L,0x87CBL,2L,1L},{0x4B62L,4L,0x3679L,0x7A75L,7L,0xB801L}},{{1L,0x5B74L,0x17ACL,0xD546L,0xA285L,0x4B62L},{8L,0xFE12L,(-1L),0xC6C2L,0xBA4CL,1L},{1L,(-4L),0xD27BL,0x1F94L,0xF58AL,0x1CA1L},{(-4L),0xA3FFL,(-7L),(-1L),0xE619L,0x1F94L}},{{0L,0xEDA5L,0xD08CL,0x4ACFL,0L,(-1L)},{0xD08CL,0L,0x87CBL,0x33C6L,0x5205L,2L},{9L,0L,0x5EC3L,1L,0x343DL,(-3L)},{1L,0xB4D1L,1L,1L,0x5EC3L,0x33C6L}},{{0x1DE7L,0x5EF4L,(-1L),0L,0xD08CL,0xF332L},{0L,(-1L),0xA285L,(-1L),0L,0x3679L},{0x95C9L,0xF58AL,(-10L),(-1L),0x4ACFL,(-4L)},{(-1L),8L,(-8L),0xF58AL,0xB4D1L,(-4L)}},{{3L,8L,(-10L),0L,0x5205L,0x3679L},{0xB4D1L,0x5B74L,0xA285L,0xA3FFL,0xD208L,0xF332L},{1L,0x9CF6L,(-1L),0x87CBL,1L,0x33C6L},{0x6454L,(-1L),1L,0x1F94L,(-8L),(-3L)}},{{0xA3FFL,(-4L),0x5EC3L,0x6454L,0xE619L,2L},{0x95C9L,0xB801L,0x87CBL,(-7L),0x2154L,(-1L)},{(-1L),0x95C9L,0xD08CL,1L,0xA7BEL,0x1F94L},{9L,8L,(-7L),0xEBA3L,0xD27BL,0x1CA1L}},{{7L,0xB4D1L,0xD27BL,1L,0x186FL,1L},{0x7A75L,(-8L),(-1L),(-1L),0L,0x4B62L},{0xC6C2L,3L,0x17ACL,(-1L),0xD08CL,0xB801L},{0xF332L,0x1F94L,1L,0x6454L,0x4ACFL,0xD546L}},{{(-4L),(-3L),2L,2L,(-3L),(-4L)},{(-1L),0L,0xBA4CL,0L,0xA7BEL,0xEDA5L},{0xB4D1L,0L,0x0995L,0x5205L,0xA285L,0xCBDFL},{0xB4D1L,0x9CF6L,0x5205L,0L,0xC4C0L,1L}},{{(-1L),0xA7BEL,1L,2L,0x287DL,0xD27BL},{(-4L),(-1L),3L,0x6454L,0xBA4CL,0xF58AL},{0xF332L,0xEDA5L,0L,(-1L),0x2154L,(-7L)},{0xC6C2L,0xF332L,0x87CBL,(-1L),(-7L),1L}},{{0L,0xFE12L,0xA9DBL,0xD546L,(-1L),1L},{0x9AC9L,1L,0xEBA3L,0xA7BEL,0x5B74L,0xD5E9L},{0x9A8EL,0x343DL,0x2D11L,0x3679L,0x1F94L,(-1L)},{0xF58AL,0xA9DBL,(-6L),0x4B62L,(-8L),0xBA4CL}}};
                    int32_t l_616 = 0xEF397EA7L;
                    uint64_t *l_627 = &l_581;
                    uint64_t **l_628 = (void*)0;
                    uint64_t **l_630 = &l_550[1];
                    uint8_t *l_632 = (void*)0;
                    int i, j, k;
                    if (l_615[7][3][4])
                    {
                        int32_t *l_617 = &l_499[1];
                        int32_t *l_618 = &l_612[0][0];
                        int32_t *l_619 = &l_616;
                        int32_t *l_620 = &g_79[0];
                        int32_t *l_621[3][6][3] = {{{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48}},{{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48}},{{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48},{&g_438,&g_48,&g_48}}};
                        int i, j, k;
                        --l_622;
                        if (l_616)
                            break;
                    }
                    else
                    {
                        int32_t **l_626[2][9] = {{&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77},{&l_450,&l_450,&l_450,&l_450,&l_450,&l_450,&l_450,&l_450,&l_450}};
                        int i, j;
                        (*l_536) = (((p_39 == &g_79[0]) , l_625) , &l_616);
                        g_77 = ((*l_536) = p_37);
                        (*l_536) = p_39;
                        if ((*g_77))
                            continue;
                    }
                    if ((((*l_630) = (l_629[2][2] = l_627)) == &g_311))
                    {
                        uint64_t l_633[8] = {18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL,18446744073709551610UL,1UL};
                        int64_t *l_634[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_634[i] = &g_512;
                        (**l_536) = (g_631[0][1][1] != l_632);
                        (*p_38) = ((l_625.f2 = l_633[5]) ^ ((void*)0 == &l_550[1]));
                    }
                    else
                    {
                        int8_t l_639 = 5L;
                        struct S2 ***l_647 = (void*)0;
                        (*l_536) = p_37;
                        if ((**l_536))
                            break;
                        (*p_38) &= ((+((safe_sub_func_int32_t_s_s((!l_639), (p_35 , p_35))) == 0xEEL)) & ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((g_648 = l_646[2]) != ((safe_unary_minus_func_int16_t_s((((-6L) <= (0x62L & (18446744073709551615UL ^ (safe_rshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u(((*l_552) = (((l_654 == l_655) , 0x5D32BF00L) != l_622)), l_639)) == l_441), p_35))))) & l_615[2][0][2]))) , (void*)0)), 7)), g_308[0][7])), p_35)) <= l_656));
                        return l_625.f0;
                    }
                }
                (*p_38) = (((*l_666) = ((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(65527UL, (safe_sub_func_int64_t_s_s(((((((4L & (*g_611)) < 1L) == (safe_unary_minus_func_uint8_t_u((((**g_610) & (((l_664 != &g_213[1]) == 65535UL) ^ ((l_494 ^= g_156) || 255UL))) , p_35)))) & 1UL) <= p_35) && 255UL), p_35)))), l_551)) | g_140.f1)) & 0L);
                (*p_38) = (safe_mul_func_int16_t_s_s((-8L), (safe_mod_func_uint64_t_u_u(g_329[0].f2, (safe_unary_minus_func_uint32_t_u((g_74.f7 = ((l_625 , ((safe_mod_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u(6UL)) | (l_494 &= (safe_div_func_int32_t_s_s(((*p_37) = (((l_677[1] != (void*)0) > ((safe_div_func_uint64_t_u_u(((**g_610) != (safe_sub_func_uint32_t_u_u(l_682, ((void*)0 != l_683)))), l_499[4])) , 65535UL)) > 0x27L)), p_35)))), 0x15L)) <= l_685)) <= p_35))))))));
                for (g_158 = 0; (g_158 <= 0); g_158 += 1)
                {
                    int i, j, k;
                    g_113[l_581][(l_521.f1 + 1)][(g_158 + 1)] = (void*)0;
                }
            }
        }
    }
    (*l_687) = (void*)0;
    return g_329[0].f1;
}







static uint16_t func_42(int32_t * p_43, uint16_t p_44)
{
    int8_t l_162 = (-1L);
    uint32_t *l_163 = &g_140.f1;
    int32_t l_164 = (-9L);
    int32_t l_165 = 0x5EBE3306L;
    struct S0 **l_176 = &g_113[0][1][5];
    int32_t l_261[10];
    uint8_t l_301[1][10][3] = {{{1UL,7UL,1UL},{0UL,0x84L,252UL},{0UL,0UL,0UL},{255UL,0x84L,0x84L},{0UL,7UL,3UL},{255UL,255UL,255UL},{0UL,0UL,3UL},{0UL,0UL,0x84L},{1UL,0UL,0UL},{0x84L,255UL,252UL}}};
    struct S1 l_349[5] = {{21,1077,391,0,4141,47,12,0},{21,1077,391,0,4141,47,12,0},{21,1077,391,0,4141,47,12,0},{21,1077,391,0,4141,47,12,0},{21,1077,391,0,4141,47,12,0}};
    int32_t l_406 = 0xC7647858L;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_261[i] = 0x2BD50C7DL;
    if ((l_162 && ((l_164 = ((*l_163) ^= 1UL)) ^ (l_165 |= l_162))))
    {
        int32_t *l_178[6][3] = {{&l_164,&g_79[0],&g_48},{&l_164,&g_48,&l_164},{&l_164,(void*)0,&g_48},{&l_164,&g_79[0],&g_48},{&l_164,&g_48,&l_164},{&l_164,(void*)0,&g_48}};
        uint8_t *l_240 = &g_161[4].f3;
        int64_t *l_246[8] = {&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156,&g_156};
        int16_t *l_266 = &g_101;
        int16_t **l_265[1][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        union U3 l_294 = {3L};
        int i, j;
        for (g_140.f1 = 0; (g_140.f1 <= 0); g_140.f1 += 1)
        {
            int16_t l_181[5][4][8] = {{{0xF247L,0x5D34L,0xF247L,0xF247L,0x5D34L,0xF247L,0xF247L,0x5D34L},{0x5D34L,0xF247L,0xF247L,0x5D34L,0xF247L,0xDDC4L,0xF247L,0xDDC4L},{0xF247L,0xF247L,0x5D34L,0xF247L,0xF247L,0x5D34L,0xF247L,0xF247L},{0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L}},{{0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L},{0xF247L,0xF247L,0x5D34L,0xF247L,0xF247L,0x5D34L,0xF247L,0xF247L},{0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L},{0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L}},{{0xF247L,0xF247L,0x5D34L,0xF247L,0xF247L,0x5D34L,0xF247L,0xF247L},{0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L},{0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L},{0xF247L,0xF247L,0x5D34L,0xF247L,0xF247L,0x5D34L,0xF247L,0xF247L}},{{0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L},{0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L},{0xF247L,0xF247L,0x5D34L,0xF247L,0xF247L,0x5D34L,0xF247L,0xF247L},{0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L}},{{0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L},{0xF247L,0xF247L,0x5D34L,0xF247L,0xF247L,0x5D34L,0xF247L,0xF247L},{0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L},{0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L,0xDDC4L,0xF247L,0xDDC4L}}};
            int32_t l_212[3];
            uint8_t *l_239 = &g_105;
            uint32_t l_247 = 18446744073709551614UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_212[i] = 0xDE521B0DL;
            if ((&p_43 == &g_77))
            {
                int16_t *l_168 = &g_101;
                union U3 l_173 = {0xAABCC59C1A49182DLL};
                int32_t *l_177 = &l_165;
                int32_t **l_179 = &l_178[3][1];
                (*l_177) = ((safe_mul_func_int8_t_s_s(g_74.f0, ((((void*)0 == l_168) , ((*p_43) = (((safe_mul_func_int16_t_s_s((4L & (safe_lshift_func_uint16_t_u_s((((l_173 , ((safe_div_func_int16_t_s_s(((*l_168) = g_161[4].f3), l_162)) != 0x0074567ED74FDE4BLL)) <= (l_176 != l_176)) && p_44), g_161[4].f4))), g_114.f2)) & l_164) , 0xBD7C0A1DL))) || 0xA2F07E3EL))) && p_44);
                (*l_179) = l_178[3][1];
            }
            else
            {
                int32_t **l_180 = &g_78;
                int8_t *l_195 = &l_162;
                struct S0 **l_207[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_207[i] = &g_113[0][0][5];
                (*l_180) = p_43;
                g_79[0] ^= ((((void*)0 != &g_114) | l_181[1][3][3]) , (((*l_195) = (((-7L) != ((func_58((g_48 | (safe_mul_func_uint16_t_u_u(((g_194 = (safe_mod_func_int64_t_s_s((safe_div_func_uint64_t_u_u((g_161[4].f1 > p_44), (safe_rshift_func_uint8_t_u_s((((safe_add_func_int8_t_s_s((&p_43 == (void*)0), 0x09L)) != g_140.f1) > 4L), 5)))), g_161[4].f3))) >= 5UL), 65528UL)))) , l_165) > (-9L))) < l_164)) & g_105));
                for (g_114.f1 = 0; (g_114.f1 >= 0); g_114.f1 -= 1)
                {
                    int8_t l_198[6][5][8] = {{{1L,3L,0xDCL,1L,1L,0xDCL,3L,1L},{0xD0L,0L,0xDCL,0x53L,0x2FL,0L,0x2FL,0x53L},{1L,0x4DL,1L,4L,0x53L,0L,0xDCL,0xDCL},{0xDCL,0L,0xD0L,0xD0L,0L,0xDCL,0x53L,0x2FL},{0xDCL,3L,1L,0L,0x53L,0L,1L,3L}},{{1L,1L,0L,0L,4L,1L,1L,4L},{0x2FL,4L,4L,0x2FL,0L,0L,1L,1L},{0x4DL,0x2FL,0xDCL,1L,0xDCL,0x2FL,0x4DL,3L},{0xDCL,0x2FL,0x4DL,3L,0L,0L,3L,0x4DL},{4L,4L,0x2FL,0L,0L,1L,1L,1L}},{{0xDCL,0x4DL,0L,0x4DL,0xDCL,0xD0L,4L,1L},{0x4DL,0L,1L,0L,0L,1L,0L,0x4DL},{0x2FL,0xD0L,1L,3L,4L,0xDCL,4L,3L},{0L,0x53L,0L,1L,3L,0xDCL,1L,1L},{1L,0xD0L,0x2FL,0x2FL,0xD0L,1L,3L,4L}},{{1L,0L,0x4DL,0xD0L,3L,0xD0L,0x4DL,0L},{0L,0x4DL,0xDCL,0xD0L,4L,1L,1L,4L},{0x2FL,4L,4L,0x2FL,0L,0L,1L,1L},{0x4DL,0x2FL,0xDCL,1L,0xDCL,0x2FL,0x4DL,3L},{0xDCL,0x2FL,0x4DL,3L,0L,0L,3L,0x4DL}},{{4L,4L,0x2FL,0L,0L,1L,1L,1L},{0xDCL,0x4DL,0L,0x4DL,0xDCL,0xD0L,4L,1L},{0x4DL,0L,1L,0L,0L,1L,0L,0x4DL},{0x2FL,0xD0L,1L,3L,4L,0xDCL,4L,3L},{0L,0x53L,0L,1L,3L,0xDCL,1L,1L}},{{1L,0xD0L,0x2FL,0x2FL,0xD0L,1L,3L,4L},{1L,0L,0x4DL,0xD0L,3L,0xD0L,0x4DL,0L},{0L,0x4DL,0xDCL,0xD0L,4L,1L,1L,4L},{0x2FL,4L,4L,0x2FL,0L,0L,1L,1L},{0x4DL,0x2FL,0xDCL,0x4DL,1L,4L,0x53L,0L}}};
                    int32_t l_206 = 0x025C1FB0L;
                    int i, j, k;
                    for (l_162 = 0; (l_162 <= 0); l_162 += 1)
                    {
                        const struct S0 *l_209 = &g_114;
                        const struct S0 **l_208[10][4] = {{&l_209,&l_209,&l_209,&l_209},{&l_209,&l_209,&l_209,&l_209},{&l_209,&l_209,&l_209,&l_209},{&l_209,(void*)0,&l_209,&l_209},{&l_209,(void*)0,(void*)0,&l_209},{(void*)0,&l_209,&l_209,&l_209},{(void*)0,&l_209,(void*)0,&l_209},{&l_209,&l_209,&l_209,&l_209},{&l_209,&l_209,&l_209,&l_209},{&l_209,&l_209,&l_209,&l_209}};
                        int16_t *l_210 = &l_181[1][3][3];
                        uint16_t *l_211[2][2][2] = {{{&g_103,&g_103},{&g_103,&g_103}},{{&g_103,&g_103},{&g_103,&g_103}}};
                        int i, j, k;
                        l_212[2] |= (g_161[4].f2 ^= ((safe_mul_func_uint16_t_u_u((g_103 = (l_198[3][3][5] & (((*l_210) = (((g_140 , g_105) , (safe_lshift_func_int16_t_s_u(((p_44 , ((safe_add_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u((0xA50289E9L > (!(l_206 = 4294967295UL))), 0x1617L)) <= ((p_44 | (p_44 && 5UL)) >= l_164)) < 18446744073709551611UL), (*p_43))) , l_207[0])) != l_208[1][2]), 0))) | g_74.f2)) <= 65533UL))), p_44)) || p_44));
                        (*l_180) = &g_194;
                    }
                    if ((*g_78))
                        break;
                    (*l_180) = &g_79[0];
                    if ((*p_43))
                        break;
                    for (g_156 = 0; (g_156 <= 0); g_156 += 1)
                    {
                        int64_t ***l_215 = &g_213[1];
                        int32_t l_236 = 0xFC2AAD8EL;
                        int64_t l_243 = 0xB135015749DF91ABLL;
                        (*l_215) = g_213[1];
                        if ((*g_78))
                            break;
                    }
                }
            }
            for (g_230 = 0; (g_230 <= 0); g_230 += 1)
            {
                int32_t **l_244 = &l_178[3][1];
                int32_t **l_245 = (void*)0;
                int32_t l_250 = 0xBDD371AFL;
                int32_t l_252 = (-1L);
                int32_t l_254 = 0x01D7207EL;
                int32_t l_255 = 0x02CCE13AL;
                int32_t l_256 = 0x8C9A2879L;
                int32_t l_258 = 0x420EFC44L;
                int32_t l_260 = (-1L);
                g_77 = ((*l_244) = l_178[1][0]);
                for (l_162 = 0; (l_162 <= 0); l_162 += 1)
                {
                    return g_114.f0;
                }
                (*p_43) = ((((void*)0 == l_246[5]) < p_44) && g_101);
                (*p_43) = l_181[1][3][3];
                for (g_114.f2 = 0; (g_114.f2 >= 0); g_114.f2 -= 1)
                {
                    uint8_t l_248[1][2];
                    int32_t l_249 = 0x0BBF0BD6L;
                    int32_t l_251 = (-1L);
                    int32_t l_253 = 6L;
                    int32_t l_257 = 0xC3C7EA47L;
                    int32_t l_259[9] = {(-3L),(-3L),0xD98051CEL,(-3L),(-3L),0xD98051CEL,(-3L),(-3L),0xD98051CEL};
                    uint64_t l_262 = 0xE5F9FC92B834B38ALL;
                    uint32_t *l_270 = &g_140.f1;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_248[i][j] = 0x32L;
                    }
                    for (g_158 = 0; (g_158 <= 0); g_158 += 1)
                    {
                        if (l_247)
                            break;
                        l_248[0][1] ^= 0x9569C656L;
                        if ((*p_43))
                            continue;
                    }
                    l_262--;
                    for (g_48 = 0; (g_48 <= 2); g_48 += 1)
                    {
                        int16_t ***l_267 = &l_265[0][0];
                        int i;
                        (*l_267) = l_265[0][4];
                        if (l_253)
                            break;
                        if (g_161[4].f3)
                            break;
                        l_255 = ((((safe_lshift_func_int16_t_s_s((p_43 == l_270), 7)) | 1UL) ^ 18446744073709551615UL) && (safe_lshift_func_uint16_t_u_u(p_44, (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u(((*l_240) = ((p_44 , ((safe_lshift_func_int8_t_s_u(p_44, 0)) && ((safe_mul_func_int16_t_s_s((l_261[5] < (((((((*l_239) = (p_44 ^ 0x41B5L)) || p_44) & l_259[5]) && g_101) & (-8L)) <= 9L)), 1UL)) > (*p_43)))) | g_79[0])), g_48)) , p_44), g_74.f0)))));
                    }
                    if (l_162)
                        continue;
                }
            }
        }
        for (g_140.f1 = 0; (g_140.f1 < 38); g_140.f1 = safe_add_func_int16_t_s_s(g_140.f1, 5))
        {
            struct S2 l_299 = {1054,1042,-689,0UL,-3487,325,7515};
            uint8_t *l_300[4][6][1] = {{{&g_105},{(void*)0},{&g_105},{&l_299.f3},{&l_299.f3},{&g_105}},{{(void*)0},{&g_105},{&g_105},{&g_105},{(void*)0},{&g_105}},{{&l_299.f3},{&l_299.f3},{&g_105},{(void*)0},{&g_105},{&g_105}},{{&g_105},{(void*)0},{&g_105},{&l_299.f3},{&l_299.f3},{&g_105}}};
            int i, j, k;
            l_301[0][4][0] &= (safe_mul_func_int8_t_s_s((((-8L) ^ (g_105 = (((((g_101 = (safe_rshift_func_int8_t_s_s((~(safe_rshift_func_int8_t_s_u(((18446744073709551606UL == ((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((l_294 , (p_44 | 1L)), ((safe_add_func_uint8_t_u_u(0x62L, ((*l_240) = (l_164 , (safe_lshift_func_int16_t_s_s(((l_299 , (l_164 && 4L)) != l_261[5]), p_44)))))) ^ 0L))), 0x89A00F021F418D45LL)) , (-1L))) || g_161[4].f5), 5))), 0))) <= p_44) , &l_266) == (void*)0) , g_114.f2))) <= (-1L)), g_161[4].f4));
        }
        return g_302;
    }
    else
    {
        int32_t l_303[4] = {(-5L),(-5L),(-5L),(-5L)};
        uint32_t l_312 = 0xCC00055AL;
        union U3 l_314 = {0x8CB67F13580BC1E8LL};
        int32_t l_323 = (-10L);
        int32_t l_324 = 0L;
        int8_t *l_345 = &g_114.f1;
        const struct S1 l_382 = {-29,1308,186,0,4102,52,1,16};
        uint32_t *l_405 = (void*)0;
        uint32_t **l_404[9][8][3] = {{{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405},{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405}},{{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405}},{{(void*)0,&l_405,&l_405},{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,(void*)0}},{{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405},{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405}},{{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405}},{{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405}},{{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405},{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405}},{{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405}},{{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,&l_405},{&l_405,&l_405,(void*)0},{&l_405,&l_405,&l_405}}};
        int16_t l_434 = 0x3BCFL;
        int32_t l_436 = (-8L);
        int i, j, k;
lbl_407:
        (*p_43) ^= l_303[3];
        for (g_48 = (-19); (g_48 == 10); g_48 = safe_add_func_uint32_t_u_u(g_48, 4))
        {
            int32_t l_306 = 7L;
            uint32_t *l_307 = &g_308[0][7];
            int8_t l_309 = 0x5EL;
            uint64_t *l_310[5] = {&g_311,&g_311,&g_311,&g_311,&g_311};
            uint32_t **l_313 = &l_307;
            uint8_t *l_322[6][1][4] = {{{&l_301[0][4][0],&l_301[0][4][0],(void*)0,&l_301[0][3][2]}},{{&l_301[0][4][0],(void*)0,(void*)0,&l_301[0][4][0]}},{{(void*)0,&l_301[0][3][2],(void*)0,(void*)0}},{{&l_301[0][4][0],&l_301[0][3][2],(void*)0,&l_301[0][4][0]}},{{&l_301[0][3][2],(void*)0,(void*)0,&l_301[0][3][2]}},{{(void*)0,&l_301[0][4][0],(void*)0,(void*)0}}};
            int32_t l_377 = 0xB485806CL;
            int16_t *l_433 = &g_101;
            uint16_t *l_435[2][4] = {{&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103}};
            int i, j, k;
            if ((l_324 ^= (g_74.f6 ^ ((((((*l_307) = l_306) , (((((l_312 ^= l_309) & p_44) , (p_43 == ((*l_313) = p_43))) , l_314) , l_303[3])) ^ (safe_sub_func_uint32_t_u_u(((((g_161[4].f3 = (~((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((p_44 >= p_44) != p_44), 6)), 1)) == g_74.f1))) & 0xBBL) ^ 8L) , l_323), 0UL))) | l_323) , l_309))))
            {
                struct S2 *l_325 = &g_161[4];
                struct S2 **l_326 = (void*)0;
                struct S2 **l_327[1][9][8] = {{{&l_325,(void*)0,&l_325,&l_325,&l_325,&l_325,(void*)0,&l_325},{(void*)0,&l_325,(void*)0,&l_325,(void*)0,&l_325,&l_325,&l_325},{(void*)0,&l_325,&l_325,&l_325,&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325,&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,(void*)0,&l_325,&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325,&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325,&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325,&l_325,(void*)0,&l_325,&l_325},{&l_325,&l_325,(void*)0,(void*)0,&l_325,&l_325,&l_325,&l_325}}};
                int i, j, k;
                g_328[3] = l_325;
            }
            else
            {
                uint16_t l_334 = 0xD1C0L;
                struct S0 *l_355 = &g_114;
                int32_t l_379 = 0L;
                struct S2 l_383 = {385,1162,1058,0x1AL,449,327,4124};
                uint32_t * const *l_403[1][6];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_403[i][j] = &l_307;
                }
                for (g_101 = 2; (g_101 >= 0); g_101 -= 1)
                {
                    int32_t *l_346 = &g_194;
                    struct S2 *l_353 = &g_161[5];
                    uint32_t l_402 = 0x36B7765DL;
                    if ((safe_rshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s(l_334, (safe_lshift_func_uint8_t_u_u(((l_164 |= (g_329[0].f3--)) != (g_161[4].f3++)), g_74.f5)))) > (safe_add_func_uint64_t_u_u(g_103, (safe_mul_func_uint16_t_u_u(((-1L) == (p_44 ^ ((((*l_346) |= (&g_230 != (g_74.f1 , l_345))) >= ((safe_mod_func_int32_t_s_s((l_349[0] , 0x14DE6C49L), 0x779B0025L)) || l_349[0].f5)) ^ 0xF344222B9C3A138BLL))), (-1L)))))) && (-7L)), 1)))
                    {
                        struct S2 *l_351 = &g_329[0];
                        struct S2 **l_352 = &l_351;
                        uint16_t *l_354[7][3][10] = {{{&g_103,&l_334,&l_334,(void*)0,&l_334,&l_334,&g_103,&g_103,(void*)0,(void*)0},{&g_103,(void*)0,&g_158,&g_103,&l_334,&l_334,&l_334,&l_334,&g_103,&g_158},{(void*)0,&g_103,&g_103,&g_158,&l_334,&l_334,&g_103,&g_158,&l_334,&l_334}},{{(void*)0,&l_334,&l_334,&l_334,&l_334,&l_334,&l_334,(void*)0,&g_103,&g_103},{(void*)0,&g_103,&g_103,&g_103,&g_158,&l_334,&l_334,&g_103,&g_158,&l_334},{&g_158,&g_103,&g_103,&g_158,(void*)0,&g_103,&g_158,(void*)0,&g_103,&g_103}},{{&g_158,(void*)0,&l_334,&g_103,&l_334,&l_334,&g_158,&g_158,&g_103,&g_103},{&g_158,&g_103,&g_103,&g_103,&l_334,&g_103,&l_334,&l_334,&l_334,&g_158},{&l_334,&g_158,&g_158,&l_334,&g_158,&l_334,(void*)0,&g_103,&l_334,&l_334}},{{&g_103,&g_103,&l_334,(void*)0,&g_158,&l_334,&g_158,&g_158,&l_334,&g_103},{&l_334,&l_334,(void*)0,(void*)0,&g_103,&l_334,&g_103,(void*)0,(void*)0,&l_334},{&g_103,&g_158,&l_334,&g_103,&g_103,(void*)0,(void*)0,&l_334,&g_158,&g_103}},{{(void*)0,&l_334,&l_334,&g_158,&g_158,(void*)0,&l_334,&g_103,&g_103,&l_334},{&g_103,&g_103,&g_158,&g_103,(void*)0,&l_334,&l_334,&g_103,&g_103,&g_158},{&l_334,&g_103,&l_334,&l_334,&g_103,&l_334,&g_158,&g_158,&g_103,&l_334}},{{&g_103,&g_103,&l_334,&g_158,&l_334,&l_334,&g_158,(void*)0,&l_334,(void*)0},{&l_334,&l_334,&g_103,&g_158,&g_158,&l_334,&l_334,&l_334,&l_334,&g_158},{&g_103,&l_334,&g_103,(void*)0,&g_103,&l_334,&l_334,&l_334,&l_334,&g_103}},{{&l_334,&g_103,&g_103,&l_334,(void*)0,&l_334,&g_103,&l_334,(void*)0,(void*)0},{&l_334,(void*)0,&g_103,&g_103,&g_158,&g_103,&g_103,&g_103,(void*)0,&l_334},{&l_334,&g_103,&l_334,&l_334,&g_158,&g_158,&l_334,&g_158,&l_334,&l_334}}};
                        int i, j, k;
                        (*l_346) &= (((l_349[0].f6 , ((((!(((((p_44 == p_44) , ((*l_352) = l_351)) != l_353) , l_354[1][0][3]) != &g_158)) | (&g_114 != ((*l_176) = l_355))) , 1L) || 0xD547744F20A68EE7LL)) | 0x1DL) ^ g_74.f6);
                        return p_44;
                    }
                    else
                    {
                        if (g_74.f4)
                            break;
                        if (l_306)
                            break;
                    }
                    for (g_114.f1 = 2; (g_114.f1 >= 0); g_114.f1 -= 1)
                    {
                        int32_t **l_356[7] = {&g_77,&l_346,&g_77,&g_77,&l_346,&g_77,&g_77};
                        int i;
                        g_77 = &l_164;
                        l_379 = ((p_44 <= (0x6C993D68F4F2950DLL <= g_329[0].f5)) , (l_324 = ((((safe_mod_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(((((*l_346) = (!(safe_add_func_int8_t_s_s((g_74.f1 , (l_377 ^= (p_44 , ((g_311 = (((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((g_48 <= (~(p_44 ^ (safe_mod_func_uint8_t_u_u((g_74.f1 >= (safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((*p_43), p_44)), 4))), p_44))))), g_114.f0)), l_314.f0)) >= l_334) , p_44)) | g_230)))), 0xFCL)))) < 0L) & 0x5AB50579L), 0x6566L)) & g_378), p_44)) , (*p_43)) >= g_329[0].f0) <= l_349[0].f3)));
                        (*g_77) &= (safe_lshift_func_uint16_t_u_s(((((l_382 , l_346) != (l_383 , p_43)) , ((l_314.f1 == ((safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint16_t_u_s(g_105, (!(0x1636D4D76916E97DLL <= (((safe_add_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((l_402 , l_403[0][2]) != l_404[2][6][2]), 18446744073709551609UL)) <= 1L), 0x3DL)) == (*l_346)), l_406)), g_311)), 8UL)), 0x5A2CF6C32B9A7EFDLL)), g_74.f3)) & g_194) && l_162))))) || l_383.f6))) <= 0xA8E5L)) == p_44)) , g_329[0].f5), l_377));
                    }
                    for (l_383.f3 = 0; (l_383.f3 <= 2); l_383.f3 += 1)
                    {
                        (*l_346) = l_349[0].f1;
                        p_43 = &g_48;
                        if (g_230)
                            goto lbl_407;
                    }
                    (*l_346) = (*p_43);
                }
            }
            l_436 &= (((l_162 <= (safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_306, (!((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((&p_44 == &g_158), 1)), (safe_rshift_func_int16_t_s_u((((l_382.f4 & (l_324 &= (((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u((p_44 >= ((safe_lshift_func_uint16_t_u_u(p_44, ((safe_mul_func_int16_t_s_s(((*l_433) |= p_44), (-1L))) == p_44))) | g_329[0].f5)), 5)) , p_44) , g_308[0][7]), l_309)) & 1L) < l_434))) | g_79[0]) < 0x131CL), 2)))), p_44)) > 0x0BL)))), 6)) && 0x58L), l_303[0])), l_349[0].f1))) <= 0x1214L) , (*p_43));
        }
        if (g_140.f1)
            goto lbl_407;
    }
    return g_74.f1;
}







static int32_t * func_45(int32_t * p_46)
{
    int64_t l_49 = 0xA1AE281B1D0B827BLL;
    int32_t l_52 = 1L;
    int32_t *l_76[6] = {&l_52,&l_52,&l_52,&l_52,&l_52,&l_52};
    int32_t **l_75[10][3] = {{&l_76[5],&l_76[4],&l_76[4]},{&l_76[2],&l_76[4],(void*)0},{&l_76[5],&l_76[4],&l_76[5]},{&l_76[4],&l_76[2],(void*)0},{&l_76[0],&l_76[0],&l_76[4]},{&l_76[4],&l_76[2],&l_76[2]},{&l_76[4],&l_76[4],&l_76[1]},{&l_76[4],&l_76[4],&l_76[4]},{&l_76[0],&l_76[4],&l_76[1]},{&l_76[4],&l_76[4],&l_76[2]}};
    int i, j;
    g_158 ^= (l_49 >= (safe_rshift_func_int16_t_s_u(l_52, func_53(func_58(g_26), g_74.f4, (g_77 = &l_52), (p_46 = g_78)))));
    return &g_48;
}







static uint16_t func_53(struct S1 p_54, uint32_t p_55, int32_t * p_56, int32_t * p_57)
{
    const int16_t l_84 = (-7L);
    struct S0 l_85 = {-1L,0L,0L};
    uint8_t l_90 = 0xFCL;
    int8_t *l_97 = &l_85.f1;
    int16_t *l_100 = &g_101;
    uint16_t *l_102 = &g_103;
    uint8_t *l_104[3][5];
    union U3 l_157[6] = {{-7L},{-7L},{-7L},{-7L},{-7L},{-7L}};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_104[i][j] = &g_105;
    }
    if (((1L | (safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((l_84 <= (l_85 , (((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(l_90, 0)), (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(p_54.f0, 12)), (safe_add_func_int8_t_s_s(((*l_97) = p_54.f1), (((safe_add_func_int16_t_s_s(((*l_100) = g_74.f3), ((*l_102) = 4UL))) >= (--g_105)) == l_90))))))) && p_54.f4) == (*g_78)))) | g_74.f0), p_54.f4)), p_54.f3))) ^ p_54.f0))
    {
        uint16_t l_108 = 0x6C24L;
        int32_t **l_111 = &g_78;
        int32_t *l_112 = &g_48;
        l_108++;
        l_112 = ((*l_111) = p_56);
        if ((*p_57))
        {
            (*p_57) &= (*g_78);
        }
        else
        {
            struct S0 **l_115 = &g_113[0][0][3];
            const int32_t l_130 = 0xB7CC63A2L;
            (*l_115) = g_113[0][1][5];
            l_85.f2 |= (g_74.f2 <= (safe_add_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((p_54.f7 & 0xF0L), (*g_77))), (safe_sub_func_int16_t_s_s((((18446744073709551612UL >= (safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(0xF641L, ((void*)0 == &p_56))), ((((g_74.f5 > p_54.f3) != g_79[0]) < p_54.f4) != l_85.f0))), 0x905F98FFL))) && (*p_57)) , (**l_111)), p_54.f2)))) , (*l_112)) | l_130), (*p_57))));
            (*p_57) = (*g_78);
        }
    }
    else
    {
        uint16_t *l_138 = &g_103;
        uint16_t **l_139 = &l_138;
        int32_t l_145 = 0xD85D5641L;
        int64_t *l_154 = (void*)0;
        int64_t *l_155 = &g_156;
        (*g_78) = (safe_sub_func_uint32_t_u_u(p_54.f5, g_74.f7));
        for (g_101 = 0; (g_101 <= 2); g_101 += 1)
        {
            int32_t **l_133[3][10] = {{&g_77,&g_77,&g_77,&g_78,(void*)0,&g_77,&g_78,&g_78,&g_77,(void*)0},{(void*)0,&g_77,&g_77,(void*)0,&g_77,&g_77,(void*)0,&g_77,(void*)0,&g_77},{&g_77,&g_78,&g_78,&g_77,&g_78,&g_78,&g_77,(void*)0,(void*)0,&g_77}};
            int i, j;
            for (g_48 = 0; g_48 < 3; g_48 += 1)
            {
                for (g_105 = 0; g_105 < 5; g_105 += 1)
                {
                    l_104[g_48][g_105] = &l_90;
                }
            }
            for (p_55 = 0; p_55 < 3; p_55 += 1)
            {
                for (g_48 = 0; g_48 < 5; g_48 += 1)
                {
                    l_104[p_55][g_48] = (void*)0;
                }
            }
            g_77 = &g_79[0];
            return p_54.f7;
        }
        (*p_57) &= (safe_sub_func_int8_t_s_s((((*l_155) ^= (((((((((*l_139) = l_138) == (g_114.f2 , &g_103)) & (g_140 , (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s((l_145 <= p_54.f7), 1)) != p_54.f3), l_85.f1)))) != ((safe_rshift_func_int8_t_s_u(((l_85.f2 = (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(0xBDL, p_54.f0)), 11)) == 0x11L), p_54.f6))) < l_145), 1)) > 0xADL)) & p_54.f0) >= l_90) != 0x67L) > l_85.f1)) < g_48), l_145));
        (*g_78) |= (l_157[5] , (g_74.f3 | g_103));
    }
    return p_54.f7;
}







static struct S1 func_58(uint16_t p_59)
{
    const uint16_t l_60 = 0x66DFL;
    int32_t *l_61[1];
    struct S1 l_72[6][9][4] = {{{{23,-3659,436,0,2154,3,17,12},{-6,-4249,217,0,712,54,18,10},{-19,1850,403,0,4705,34,2,21},{-0,9503,122,0,2953,81,5,19}},{{4,-7963,79,0,1885,30,9,15},{-6,-4249,217,0,712,54,18,10},{21,-6026,400,0,7441,36,9,0},{23,-3659,436,0,2154,3,17,12}},{{-6,-4249,217,0,712,54,18,10},{5,938,225,0,6595,20,11,14},{17,-8585,141,0,8101,56,21,11},{5,938,225,0,6595,20,11,14}},{{-15,1388,67,0,2947,61,20,6},{-19,1850,403,0,4705,34,2,21},{23,5482,149,0,7087,66,13,19},{20,-4095,230,0,2665,71,14,3}},{{17,-8585,141,0,8101,56,21,11},{10,-4633,40,0,8185,8,8,6},{5,4450,433,0,7354,57,5,13},{-22,8521,250,0,7851,32,13,4}},{{20,-4095,230,0,2665,71,14,3},{5,4450,433,0,7354,57,5,13},{-6,-4249,217,0,712,54,18,10},{23,5482,149,0,7087,66,13,19}},{{20,-4095,230,0,2665,71,14,3},{-9,-3765,270,0,1642,8,15,5},{5,4450,433,0,7354,57,5,13},{19,5898,420,0,2142,24,9,16}},{{17,-8585,141,0,8101,56,21,11},{23,5482,149,0,7087,66,13,19},{23,5482,149,0,7087,66,13,19},{17,-8585,141,0,8101,56,21,11}},{{-15,1388,67,0,2947,61,20,6},{23,-3659,436,0,2154,3,17,12},{17,-8585,141,0,8101,56,21,11},{-14,6718,224,0,6376,80,8,2}}},{{{-6,-4249,217,0,712,54,18,10},{19,5898,420,0,2142,24,9,16},{21,-6026,400,0,7441,36,9,0},{20,2543,37,0,7950,45,18,4}},{{4,-7963,79,0,1885,30,9,15},{-22,8521,250,0,7851,32,13,4},{-19,1850,403,0,4705,34,2,21},{20,2543,37,0,7950,45,18,4}},{{23,-3659,436,0,2154,3,17,12},{19,5898,420,0,2142,24,9,16},{-0,9503,122,0,2953,81,5,19},{-14,6718,224,0,6376,80,8,2}},{{-9,-3765,270,0,1642,8,15,5},{23,-3659,436,0,2154,3,17,12},{-9,-3765,270,0,1642,8,15,5},{17,-8585,141,0,8101,56,21,11}},{{-19,1850,403,0,4705,34,2,21},{23,5482,149,0,7087,66,13,19},{20,-4095,230,0,2665,71,14,3},{19,5898,420,0,2142,24,9,16}},{{20,2543,37,0,7950,45,18,4},{-9,-3765,270,0,1642,8,15,5},{20,-4095,230,0,2665,71,14,3},{-19,1850,403,0,4705,34,2,21}},{{23,5482,149,0,7087,66,13,19},{20,2543,37,0,7950,45,18,4},{20,-4095,230,0,2665,71,14,3},{21,-6026,400,0,7441,36,9,0}},{{-14,6718,224,0,6376,80,8,2},{-22,8521,250,0,7851,32,13,4},{17,-8585,141,0,8101,56,21,11},{17,-8585,141,0,8101,56,21,11}},{{4,-7963,79,0,1885,30,9,15},{4,-7963,79,0,1885,30,9,15},{-15,1388,67,0,2947,61,20,6},{23,5482,149,0,7087,66,13,19}}},{{{-15,1388,67,0,2947,61,20,6},{23,5482,149,0,7087,66,13,19},{-6,-4249,217,0,712,54,18,10},{5,4450,433,0,7354,57,5,13}},{{5,4450,433,0,7354,57,5,13},{5,938,225,0,6595,20,11,14},{4,-7963,79,0,1885,30,9,15},{-6,-4249,217,0,712,54,18,10}},{{14,4853,210,0,7742,57,15,12},{5,938,225,0,6595,20,11,14},{23,-3659,436,0,2154,3,17,12},{5,4450,433,0,7354,57,5,13}},{{5,938,225,0,6595,20,11,14},{23,5482,149,0,7087,66,13,19},{-9,-3765,270,0,1642,8,15,5},{23,5482,149,0,7087,66,13,19}},{{19,5898,420,0,2142,24,9,16},{4,-7963,79,0,1885,30,9,15},{-19,1850,403,0,4705,34,2,21},{17,-8585,141,0,8101,56,21,11}},{{-9,-3765,270,0,1642,8,15,5},{-22,8521,250,0,7851,32,13,4},{20,2543,37,0,7950,45,18,4},{21,-6026,400,0,7441,36,9,0}},{{17,-8585,141,0,8101,56,21,11},{20,2543,37,0,7950,45,18,4},{5,938,225,0,6595,20,11,14},{-19,1850,403,0,4705,34,2,21}},{{17,-8585,141,0,8101,56,21,11},{-15,1388,67,0,2947,61,20,6},{20,2543,37,0,7950,45,18,4},{-0,9503,122,0,2953,81,5,19}},{{-9,-3765,270,0,1642,8,15,5},{-19,1850,403,0,4705,34,2,21},{-19,1850,403,0,4705,34,2,21},{-9,-3765,270,0,1642,8,15,5}}},{{{19,5898,420,0,2142,24,9,16},{5,4450,433,0,7354,57,5,13},{-9,-3765,270,0,1642,8,15,5},{20,-4095,230,0,2665,71,14,3}},{{5,938,225,0,6595,20,11,14},{-0,9503,122,0,2953,81,5,19},{23,-3659,436,0,2154,3,17,12},{-14,6718,224,0,6376,80,8,2}},{{14,4853,210,0,7742,57,15,12},{21,-6026,400,0,7441,36,9,0},{4,-7963,79,0,1885,30,9,15},{-14,6718,224,0,6376,80,8,2}},{{5,4450,433,0,7354,57,5,13},{-0,9503,122,0,2953,81,5,19},{-6,-4249,217,0,712,54,18,10},{20,-4095,230,0,2665,71,14,3}},{{-15,1388,67,0,2947,61,20,6},{5,4450,433,0,7354,57,5,13},{-15,1388,67,0,2947,61,20,6},{-9,-3765,270,0,1642,8,15,5}},{{4,-7963,79,0,1885,30,9,15},{-19,1850,403,0,4705,34,2,21},{17,-8585,141,0,8101,56,21,11},{-0,9503,122,0,2953,81,5,19}},{{-14,6718,224,0,6376,80,8,2},{-15,1388,67,0,2947,61,20,6},{20,-4095,230,0,2665,71,14,3},{-19,1850,403,0,4705,34,2,21}},{{23,5482,149,0,7087,66,13,19},{20,2543,37,0,7950,45,18,4},{20,-4095,230,0,2665,71,14,3},{21,-6026,400,0,7441,36,9,0}},{{-14,6718,224,0,6376,80,8,2},{-22,8521,250,0,7851,32,13,4},{17,-8585,141,0,8101,56,21,11},{17,-8585,141,0,8101,56,21,11}}},{{{4,-7963,79,0,1885,30,9,15},{4,-7963,79,0,1885,30,9,15},{-15,1388,67,0,2947,61,20,6},{23,5482,149,0,7087,66,13,19}},{{-15,1388,67,0,2947,61,20,6},{23,5482,149,0,7087,66,13,19},{-6,-4249,217,0,712,54,18,10},{5,4450,433,0,7354,57,5,13}},{{5,4450,433,0,7354,57,5,13},{5,938,225,0,6595,20,11,14},{4,-7963,79,0,1885,30,9,15},{-6,-4249,217,0,712,54,18,10}},{{14,4853,210,0,7742,57,15,12},{5,938,225,0,6595,20,11,14},{23,-3659,436,0,2154,3,17,12},{5,4450,433,0,7354,57,5,13}},{{5,938,225,0,6595,20,11,14},{23,5482,149,0,7087,66,13,19},{-9,-3765,270,0,1642,8,15,5},{23,5482,149,0,7087,66,13,19}},{{19,5898,420,0,2142,24,9,16},{4,-7963,79,0,1885,30,9,15},{-19,1850,403,0,4705,34,2,21},{17,-8585,141,0,8101,56,21,11}},{{-9,-3765,270,0,1642,8,15,5},{-22,8521,250,0,7851,32,13,4},{20,2543,37,0,7950,45,18,4},{21,-6026,400,0,7441,36,9,0}},{{17,-8585,141,0,8101,56,21,11},{20,2543,37,0,7950,45,18,4},{5,938,225,0,6595,20,11,14},{-19,1850,403,0,4705,34,2,21}},{{17,-8585,141,0,8101,56,21,11},{-15,1388,67,0,2947,61,20,6},{20,2543,37,0,7950,45,18,4},{-0,9503,122,0,2953,81,5,19}}},{{{-9,-3765,270,0,1642,8,15,5},{-19,1850,403,0,4705,34,2,21},{-19,1850,403,0,4705,34,2,21},{-9,-3765,270,0,1642,8,15,5}},{{19,5898,420,0,2142,24,9,16},{5,4450,433,0,7354,57,5,13},{-9,-3765,270,0,1642,8,15,5},{20,-4095,230,0,2665,71,14,3}},{{5,938,225,0,6595,20,11,14},{-0,9503,122,0,2953,81,5,19},{23,-3659,436,0,2154,3,17,12},{-14,6718,224,0,6376,80,8,2}},{{14,4853,210,0,7742,57,15,12},{21,-6026,400,0,7441,36,9,0},{4,-7963,79,0,1885,30,9,15},{-14,6718,224,0,6376,80,8,2}},{{5,4450,433,0,7354,57,5,13},{-0,9503,122,0,2953,81,5,19},{-6,-4249,217,0,712,54,18,10},{20,-4095,230,0,2665,71,14,3}},{{-15,1388,67,0,2947,61,20,6},{5,4450,433,0,7354,57,5,13},{-15,1388,67,0,2947,61,20,6},{-9,-3765,270,0,1642,8,15,5}},{{4,-7963,79,0,1885,30,9,15},{-19,1850,403,0,4705,34,2,21},{17,-8585,141,0,8101,56,21,11},{-0,9503,122,0,2953,81,5,19}},{{-14,6718,224,0,6376,80,8,2},{-15,1388,67,0,2947,61,20,6},{20,-4095,230,0,2665,71,14,3},{-19,1850,403,0,4705,34,2,21}},{{23,5482,149,0,7087,66,13,19},{20,2543,37,0,7950,45,18,4},{20,-4095,230,0,2665,71,14,3},{21,-6026,400,0,7441,36,9,0}}}};
    int32_t l_73 = 0L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_61[i] = (void*)0;
    g_48 = l_60;
    g_48 = (((safe_add_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(g_26, p_59)), (0xE470D16AL > (((&g_48 != (p_59 , l_61[0])) , (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((&g_48 != (l_72[0][2][1] , l_61[0])), 2)), 0xC2L))) , g_26)))) > 0x8BL), l_73)) & g_48) && (-1L));
    return g_74;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_32[i], "g_32[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_74.f2, "g_74.f2", print_hash_value);
    transparent_crc(g_74.f3, "g_74.f3", print_hash_value);
    transparent_crc(g_74.f4, "g_74.f4", print_hash_value);
    transparent_crc(g_74.f5, "g_74.f5", print_hash_value);
    transparent_crc(g_74.f6, "g_74.f6", print_hash_value);
    transparent_crc(g_74.f7, "g_74.f7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_79[i], "g_79[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_114.f2, "g_114.f2", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_161[i].f0, "g_161[i].f0", print_hash_value);
        transparent_crc(g_161[i].f1, "g_161[i].f1", print_hash_value);
        transparent_crc(g_161[i].f2, "g_161[i].f2", print_hash_value);
        transparent_crc(g_161[i].f3, "g_161[i].f3", print_hash_value);
        transparent_crc(g_161[i].f4, "g_161[i].f4", print_hash_value);
        transparent_crc(g_161[i].f5, "g_161[i].f5", print_hash_value);
        transparent_crc(g_161[i].f6, "g_161[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_308[i][j], "g_308[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_311, "g_311", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_329[i].f0, "g_329[i].f0", print_hash_value);
        transparent_crc(g_329[i].f1, "g_329[i].f1", print_hash_value);
        transparent_crc(g_329[i].f2, "g_329[i].f2", print_hash_value);
        transparent_crc(g_329[i].f3, "g_329[i].f3", print_hash_value);
        transparent_crc(g_329[i].f4, "g_329[i].f4", print_hash_value);
        transparent_crc(g_329[i].f5, "g_329[i].f5", print_hash_value);
        transparent_crc(g_329[i].f6, "g_329[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_891[i], "g_891[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_939, "g_939", print_hash_value);
    transparent_crc(g_1005.f0, "g_1005.f0", print_hash_value);
    transparent_crc(g_1005.f1, "g_1005.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1095[i], "g_1095[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1190, "g_1190", print_hash_value);
    transparent_crc(g_1238.f0, "g_1238.f0", print_hash_value);
    transparent_crc(g_1238.f1, "g_1238.f1", print_hash_value);
    transparent_crc(g_1238.f2, "g_1238.f2", print_hash_value);
    transparent_crc(g_1260, "g_1260", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1335[i][j], "g_1335[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1371, "g_1371", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
