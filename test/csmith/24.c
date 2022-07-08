// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 1AA71BA6
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
};

union U1 {
   int32_t f0;
   uint8_t f1;
};


static int32_t g_2 = 5L;
static int64_t g_5[1][2][8] = {{{0x5AE649F6D4A0D461LL,0xBA095A97963BA20BLL,0xBA095A97963BA20BLL,0x5AE649F6D4A0D461LL,0xC62E08974B666A75LL,0x924C00011151C3C3LL,0xC62E08974B666A75LL,0x5AE649F6D4A0D461LL},{0xBA095A97963BA20BLL,0xC62E08974B666A75LL,0xBA095A97963BA20BLL,(-5L),(-1L),(-1L),(-5L),0xBA095A97963BA20BLL}}};
static int32_t g_6 = 0xC8F0D071L;
static int32_t g_7 = 0xC80FC3A0L;
static uint64_t g_27[3] = {5UL,5UL,5UL};
static uint64_t g_56 = 1UL;
static uint16_t g_72 = 0xEFC7L;
static uint16_t g_80 = 0UL;
static int8_t g_94 = 0L;
static uint16_t * const g_148 = (void*)0;
static int16_t g_156 = 1L;
static int64_t g_163[7][3] = {{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}};
static uint32_t g_164 = 0x4AB730D5L;
static int16_t g_181 = 0x1CB2L;
static int32_t g_185 = 4L;
static int64_t g_186 = 0L;
static uint32_t g_194[10][10] = {{0xD8D885D1L,0x92A46F7BL,0xE390C49CL,0x8898D0BAL,0x8898D0BAL,0xE390C49CL,18446744073709551615UL,0x51819CC9L,0x8898D0BAL,0x51819CC9L},{18446744073709551615UL,0xE390C49CL,0xAEAE63DAL,18446744073709551615UL,0xAEAE63DAL,0xE390C49CL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x51819CC9L,0xAEAE63DAL,0xAEAE63DAL,0x51819CC9L,18446744073709551615UL,0xE390C49CL,0x51819CC9L,0xE390C49CL,18446744073709551615UL},{18446744073709551615UL,0x51819CC9L,0x8898D0BAL,0x51819CC9L,18446744073709551615UL,0x8898D0BAL,18446744073709551615UL,18446744073709551615UL,0x8898D0BAL,18446744073709551615UL},{18446744073709551615UL,0xE390C49CL,0xE390C49CL,18446744073709551615UL,0xAEAE63DAL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0xAEAE63DAL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0xAEAE63DAL,18446744073709551615UL,0xE390C49CL,0xE390C49CL,18446744073709551615UL,0xAEAE63DAL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0x8898D0BAL,18446744073709551615UL,0x51819CC9L,0x8898D0BAL,0x51819CC9L,18446744073709551615UL,0x8898D0BAL,18446744073709551615UL},{0x51819CC9L,0xE390C49CL,18446744073709551615UL,0x51819CC9L,0xAEAE63DAL,0xAEAE63DAL,0x51819CC9L,18446744073709551615UL,0xE390C49CL,0x51819CC9L},{18446744073709551615UL,18446744073709551615UL,0xE390C49CL,0xAEAE63DAL,18446744073709551615UL,0xAEAE63DAL,0xE390C49CL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x51819CC9L,18446744073709551615UL,0x8898D0BAL,18446744073709551615UL,18446744073709551615UL,0x8898D0BAL,18446744073709551615UL,0x51819CC9L,0x8898D0BAL,0x51819CC9L}};
static uint16_t g_213[3] = {0x7FAEL,0x7FAEL,0x7FAEL};
static uint32_t g_218[9][9] = {{4294967293UL,0x07F36C1BL,0x05F5F8C2L,0x05F5F8C2L,0x07F36C1BL,4294967293UL,5UL,0xED70B56FL,4294967290UL},{6UL,0x799EF2C4L,0xDB9DDAD4L,0x77D6962BL,0xE2487D8AL,0x63813A0BL,0x5238762AL,0UL,0UL},{5UL,4294967295UL,0x0428BAAFL,4294967295UL,0x0428BAAFL,4294967295UL,5UL,0x05F5F8C2L,0x012D08A2L},{0x3C598269L,0UL,0x63813A0BL,0x3B8F3440L,7UL,0x13750715L,0xE2487D8AL,9UL,1UL},{0x05F5F8C2L,4UL,0x012D08A2L,4294967295UL,4294967295UL,0x012D08A2L,4UL,0x05F5F8C2L,0x2485C87EL},{1UL,3UL,0x5238762AL,9UL,6UL,0x1057C5A9L,0x799EF2C4L,0UL,0x13750715L},{0x2485C87EL,0xED70B56FL,0x82D88AC7L,5UL,4294967290UL,5UL,0x82D88AC7L,0xED70B56FL,0x2485C87EL},{0xE2487D8AL,0x3B8F3440L,6UL,7UL,1UL,0x799EF2C4L,3UL,0xDB9DDAD4L,1UL},{1UL,0x012D08A2L,4294967295UL,0UL,0xAB97BF4DL,0xAB97BF4DL,0UL,4294967295UL,0x012D08A2L}};
static int8_t g_223 = 1L;
static uint8_t g_224 = 0x0DL;
static uint16_t **g_233 = (void*)0;
static union U0 g_255 = {-10L};
static union U0 *g_256 = (void*)0;
static union U1 g_274 = {0xFDBBE093L};
static union U1 *g_273 = &g_274;
static int32_t g_278 = 0x3A199CE5L;
static int16_t g_282 = 1L;
static int32_t g_283 = 0x4D332DDEL;
static int8_t g_284 = 0x8FL;
static int32_t g_285[6][9] = {{(-1L),0xA2915EF4L,0L,(-1L),(-10L),(-9L),0x6C1B368DL,(-9L),(-10L)},{0x6C1B368DL,0xA2915EF4L,0xA2915EF4L,0x6C1B368DL,0x87565C97L,0x622DCEF0L,3L,(-3L),(-1L)},{3L,0L,0xBA93513BL,3L,0x87565C97L,0x2DBC6560L,0xA2915EF4L,(-3L),0x6DCFDDA6L},{0xA2915EF4L,0L,0xABD6D18AL,0xA2915EF4L,0x87565C97L,(-3L),0L,(-3L),0x87565C97L},{0L,0L,0L,0L,0x87565C97L,0x622DCEF0L,3L,(-3L),(-1L)},{3L,0L,0xBA93513BL,3L,0x87565C97L,0x2DBC6560L,0xA2915EF4L,(-3L),0x6DCFDDA6L}};
static const uint32_t g_379 = 0x29AF8862L;
static uint64_t *g_409 = &g_56;
static uint64_t **g_408 = &g_409;
static uint64_t ***g_407 = &g_408;
static uint8_t g_490 = 0UL;
static int8_t g_491 = 0x52L;
static const uint64_t *g_521 = (void*)0;
static const uint64_t **g_520 = &g_521;
static const uint64_t ***g_519 = &g_520;
static int32_t *g_558[9][10][1] = {{{&g_7},{&g_2},{&g_7},{(void*)0},{&g_285[2][1]},{(void*)0},{&g_7},{&g_285[0][2]},{&g_285[2][1]},{(void*)0}},{{&g_2},{&g_2},{&g_7},{&g_274.f0},{&g_7},{&g_2},{&g_2},{(void*)0},{&g_285[2][1]},{&g_285[0][2]}},{{&g_7},{(void*)0},{&g_285[2][1]},{(void*)0},{&g_7},{&g_2},{&g_7},{&g_285[3][4]},{(void*)0},{&g_285[5][4]}},{{&g_285[5][0]},{&g_285[4][5]},{&g_6},{&g_285[4][5]},{&g_285[5][0]},{&g_285[5][4]},{(void*)0},{&g_285[3][4]},{&g_7},{&g_2}},{{&g_7},{(void*)0},{&g_285[2][1]},{(void*)0},{&g_7},{&g_285[0][2]},{&g_285[2][1]},{(void*)0},{&g_2},{&g_2}},{{&g_7},{&g_274.f0},{&g_7},{&g_2},{&g_2},{(void*)0},{&g_285[2][1]},{&g_285[0][2]},{&g_7},{(void*)0}},{{&g_285[2][1]},{(void*)0},{&g_7},{&g_2},{&g_7},{&g_285[3][4]},{(void*)0},{&g_285[5][4]},{&g_285[5][0]},{&g_285[4][5]}},{{&g_6},{&g_285[4][5]},{&g_285[5][0]},{&g_285[5][4]},{(void*)0},{&g_285[3][4]},{&g_7},{&g_2},{&g_7},{(void*)0}},{{&g_285[2][1]},{(void*)0},{&g_7},{&g_285[0][2]},{&g_285[2][1]},{(void*)0},{&g_2},{&g_2},{&g_7},{&g_274.f0}}};
static int32_t **g_557[1][8][3] = {{{&g_558[7][5][0],&g_558[7][5][0],&g_558[6][8][0]},{&g_558[7][5][0],&g_558[6][8][0],&g_558[7][5][0]},{&g_558[7][5][0],&g_558[6][8][0],&g_558[7][5][0]},{&g_558[6][8][0],&g_558[7][5][0],&g_558[7][5][0]},{&g_558[3][1][0],&g_558[7][5][0],&g_558[7][5][0]},{(void*)0,&g_558[3][4][0],&g_558[7][5][0]},{(void*)0,&g_558[7][5][0],&g_558[6][8][0]},{&g_558[3][1][0],(void*)0,&g_558[3][1][0]}}};
static int16_t g_626 = 0xB53DL;
static union U1 **g_632 = &g_273;
static uint64_t ** const *g_660 = &g_408;
static uint64_t ** const **g_659 = &g_660;
static int32_t g_718 = (-10L);
static uint64_t g_814 = 0x2B646BBBF4D98B74LL;
static const union U1 g_857 = {0xDA043739L};
static uint64_t g_1064 = 0xB313F2B001A7EBE4LL;
static uint8_t *g_1085 = &g_274.f1;
static uint8_t **g_1084 = &g_1085;
static uint64_t g_1088 = 0x7957A03BA6AF4CFBLL;
static union U1 ***g_1234[10] = {&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632};
static uint16_t g_1345 = 0xA3ACL;
static uint8_t g_1390 = 0xB4L;
static uint16_t *g_1407 = &g_1345;
static uint16_t * const *g_1406 = &g_1407;
static int32_t g_1408[3][10][3] = {{{1L,0xF869BAD8L,7L},{1L,0xFDA5F681L,1L},{1L,0xAE5D50EAL,0L},{0x602E9095L,2L,1L},{0xB86D7130L,0xB86D7130L,7L},{0x9B735262L,2L,1L},{0xF869BAD8L,0xAE5D50EAL,0x2F9F5094L},{0L,0xFDA5F681L,0L},{0xB86D7130L,1L,0xAE5D50EAL},{1L,2L,0x9B735262L}},{{9L,0L,0L},{0L,(-3L),(-1L)},{9L,0xB86D7130L,0x2F9F5094L},{1L,0L,(-1L)},{0xF869BAD8L,7L,0L},{1L,0L,0L},{1L,0xB86D7130L,0xAE5D50EAL},{1L,(-3L),1L},{0xF869BAD8L,0L,0xAE5D50EAL},{(-1L),2L,0L}},{{9L,1L,0L},{0x9B735262L,(-3L),(-1L)},{9L,0x729563C4L,0x2F9F5094L},{(-1L),0L,(-1L)},{0xF869BAD8L,0xF869BAD8L,0L},{1L,0L,0x9B735262L},{1L,0x729563C4L,0xAE5D50EAL},{1L,(-3L),1L},{0xF869BAD8L,1L,0xAE5D50EAL},{1L,2L,0x9B735262L}}};
static uint16_t ****g_1453 = (void*)0;
static int64_t *g_1467 = &g_186;
static int64_t ** const g_1466 = &g_1467;
static int64_t ** const *g_1465 = &g_1466;
static const union U1 *g_1492 = (void*)0;
static const union U1 **g_1491 = &g_1492;
static int32_t g_1508 = (-2L);
static uint16_t * const **g_1529 = (void*)0;
static uint16_t * const ***g_1528 = &g_1529;
static uint8_t g_1675 = 4UL;
static const int32_t *g_1720 = &g_274.f0;



static const uint64_t func_1(void);
static uint64_t func_12(int32_t p_13, int64_t p_14, uint16_t p_15, uint64_t p_16);
static union U0 func_17(uint64_t p_18, int32_t p_19, uint16_t p_20, union U1 p_21);
static uint16_t func_31(uint64_t p_32, const uint64_t * p_33);
static uint64_t func_34(int64_t p_35, uint64_t * p_36);
static int64_t func_40(uint16_t p_41, uint64_t p_42, uint64_t * p_43, uint64_t * p_44);
static int16_t func_46(const union U0 p_47, uint32_t p_48, union U1 p_49, int8_t p_50, uint64_t * p_51);
static union U0 func_52(uint64_t * p_53, uint64_t * p_54);
static uint32_t func_59(uint32_t p_60);
static const uint16_t func_65(union U1 p_66, int32_t p_67, int8_t p_68, uint16_t p_69);
# 117 "<stdin>"
static const uint64_t func_1(void)
{
    uint64_t *l_55 = &g_56;
    int32_t l_777 = 0x5F8611EBL;
    union U1 l_1346[10] = {{0xFD626FA3L},{0x8B2D24BAL},{0x8B2D24BAL},{0xFD626FA3L},{1L},{0xFD626FA3L},{0x8B2D24BAL},{0x8B2D24BAL},{0xFD626FA3L},{1L}};
    union U0 *l_1369 = &g_255;
    int32_t l_1403[1][7] = {{(-10L),(-10L),1L,(-10L),(-10L),1L,(-10L)}};
    int64_t ** const **l_1468 = (void*)0;
    int64_t ** const **l_1469 = &g_1465;
    int16_t l_1476 = 0L;
    int8_t l_1477[1];
    uint8_t l_1478 = 0xB7L;
    uint64_t ***l_1517[9] = {&g_408,&g_408,&g_408,&g_408,&g_408,&g_408,&g_408,&g_408,&g_408};
    uint32_t l_1530[4];
    uint32_t l_1531[2];
    union U1 l_1564 = {1L};
    int64_t l_1586 = 0L;
    int64_t l_1682[8][8][1] = {{{0x14F596EBD84CEE40LL},{0xB97129968BE3CB18LL},{1L},{0x90F1F36605ECE02DLL},{(-1L)},{0xCF746CAD70C1F65ELL},{(-1L)},{0x90F1F36605ECE02DLL}},{{1L},{0xB97129968BE3CB18LL},{0x14F596EBD84CEE40LL},{8L},{8L},{0x14F596EBD84CEE40LL},{0xB97129968BE3CB18LL},{1L}},{{0x90F1F36605ECE02DLL},{(-1L)},{0xCF746CAD70C1F65ELL},{(-1L)},{0x90F1F36605ECE02DLL},{1L},{0xB97129968BE3CB18LL},{0x14F596EBD84CEE40LL}},{{8L},{8L},{0x14F596EBD84CEE40LL},{0xB97129968BE3CB18LL},{1L},{0x90F1F36605ECE02DLL},{(-1L)},{0xCF746CAD70C1F65ELL}},{{(-1L)},{0x90F1F36605ECE02DLL},{1L},{0xB97129968BE3CB18LL},{0x14F596EBD84CEE40LL},{8L},{8L},{0x14F596EBD84CEE40LL}},{{0xB97129968BE3CB18LL},{1L},{0x90F1F36605ECE02DLL},{(-1L)},{0xCF746CAD70C1F65ELL},{(-1L)},{0x90F1F36605ECE02DLL},{1L}},{{0xB97129968BE3CB18LL},{0x14F596EBD84CEE40LL},{8L},{8L},{0x14F596EBD84CEE40LL},{0xB97129968BE3CB18LL},{1L},{0x90F1F36605ECE02DLL}},{{(-1L)},{0xCF746CAD70C1F65ELL},{(-1L)},{0x90F1F36605ECE02DLL},{1L},{0xB97129968BE3CB18LL},{0x14F596EBD84CEE40LL},{8L}}};
    uint16_t l_1687 = 0xBE96L;
    uint64_t ** const * const *l_1736 = &g_660;
    uint64_t ** const * const **l_1735 = &l_1736;
    uint32_t *l_1764 = (void*)0;
    uint16_t l_1805 = 0xC24AL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1477[i] = 1L;
    for (i = 0; i < 4; i++)
        l_1530[i] = 0UL;
    for (i = 0; i < 2; i++)
        l_1531[i] = 0xD9F03081L;
    for (g_2 = 0; (g_2 == 24); g_2++)
    {
        uint8_t l_30 = 6UL;
        int32_t *l_1362 = &g_2;
        int32_t l_1364 = (-1L);
        uint16_t l_1371 = 4UL;
        uint16_t * const *l_1405 = &g_148;
        int64_t l_1410 = (-8L);
        uint32_t l_1411 = 0x19945442L;
        const uint32_t l_1414 = 1UL;
        int16_t l_1442 = 0xCB63L;
        uint64_t l_1449 = 0x2CEC86F97E17F5EELL;
        int32_t *l_1452 = &g_6;
        uint32_t l_1464 = 1UL;
        for (g_6 = 0; (g_6 >= 0); g_6 -= 1)
        {
            uint64_t *l_1032 = &g_814;
            int32_t l_1359 = 1L;
            int32_t *l_1363[7][2] = {{&l_1359,(void*)0},{&g_285[5][8],&g_285[5][8]},{&g_285[5][8],(void*)0},{&l_1359,&g_718},{(void*)0,&g_718},{&l_1359,(void*)0},{&g_285[5][8],&g_285[5][8]}};
            uint16_t ***l_1375 = &g_233;
            uint16_t ****l_1374 = &l_1375;
            uint64_t *****l_1429 = (void*)0;
            uint8_t l_1444 = 0UL;
            int32_t *l_1445 = (void*)0;
            int i, j;
            for (g_7 = 0; (g_7 <= 0); g_7 += 1)
            {
                int i, j, k;
                if ((g_5[g_6][g_7][(g_7 + 7)] | (g_5[g_7][g_7][(g_7 + 7)] || 0x7509L)))
                {
                    int i, j, k;
                    return g_5[g_6][g_7][(g_7 + 4)];
                }
                else
                {
                    uint64_t *l_26[8][3] = {{(void*)0,&g_27[2],&g_27[2]},{(void*)0,&g_27[2],&g_27[2]},{(void*)0,&g_27[2],&g_27[2]},{(void*)0,&g_27[2],&g_27[2]},{(void*)0,&g_27[2],&g_27[2]},{(void*)0,&g_27[2],&g_27[2]},{(void*)0,&g_27[2],&g_27[2]},{(void*)0,&g_27[2],&g_27[2]}};
                    union U1 l_778[8] = {{0xF47C1EE3L},{0xF47C1EE3L},{0xF47C1EE3L},{0xF47C1EE3L},{0xF47C1EE3L},{0xF47C1EE3L},{0xF47C1EE3L},{0xF47C1EE3L}};
                    int16_t *l_987[2][4][5] = {{{&g_626,&g_626,&g_156,&g_626,&g_626},{&g_626,&g_626,&g_626,&g_626,&g_626},{&g_626,&g_626,&g_626,&g_626,&g_626},{&g_626,&g_626,&g_156,&g_626,&g_626}},{{&g_626,&g_626,&g_626,&g_626,&g_626},{&g_626,&g_626,&g_626,&g_626,&g_626},{&g_626,&g_626,&g_156,&g_626,&g_626},{&g_626,&g_626,&g_626,&g_626,&g_626}}};
                    uint64_t *l_988 = (void*)0;
                    int64_t *l_1352 = &g_186;
                    int i, j, k;
                    if ((safe_mul_func_uint8_t_u_u(((g_2 & (safe_add_func_uint64_t_u_u(func_12(g_5[0][1][7], ((*l_1352) = ((func_17(((safe_sub_func_uint8_t_u_u(g_2, (safe_add_func_uint64_t_u_u((++g_27[2]), g_5[g_7][g_7][(g_7 + 7)])))) == (l_30 >= func_31((func_34((!(safe_mod_func_uint16_t_u_u((func_40(g_5[g_6][g_7][(g_7 + 7)], ((safe_unary_minus_func_int16_t_s((l_777 = func_46(func_52(l_55, &g_56), l_777, l_778[0], g_283, (**g_407))))) , 0x320C0A3996D0C69BLL), l_988, l_26[6][1]) || 18446744073709551608UL), g_857.f1))), l_1032) , l_777), l_26[3][1]))), l_778[0].f1, l_778[0].f0, l_1346[4]) , (*g_1085)) , g_163[6][0])), g_5[g_6][g_7][(g_7 + 7)], l_30), l_1359))) ^ l_1359), l_1359)))
                    {
                        int32_t *l_1360 = &g_718;
                        (*l_1360) ^= 1L;
                        return (**g_408);
                    }
                    else
                    {
                        int32_t *l_1361 = &g_285[2][1];
                        (*l_1361) = 0L;
                        return (*g_409);
                    }
                }
            }
            l_1363[0][0] = l_1362;
            for (g_1345 = 0; (g_1345 <= 0); g_1345 += 1)
            {
                uint8_t l_1365 = 0x27L;
                union U0 **l_1368 = &g_256;
                int32_t l_1370 = 6L;
                uint16_t *****l_1376 = &l_1374;
                int32_t l_1436 = 0xD1514C8BL;
                int8_t l_1437[8] = {3L,3L,3L,3L,3L,3L,3L,3L};
                int64_t l_1443 = 2L;
                int i;
                ++l_1365;
                l_1369 = ((*l_1368) = &g_255);
                l_1371++;
            }
            for (g_274.f1 = 0; (g_274.f1 <= 0); g_274.f1 += 1)
            {
                int32_t l_1448[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1448[i] = 5L;
                l_1448[1] = (l_1403[0][1] = g_5[g_6][(g_6 + 1)][(g_274.f1 + 5)]);
                --l_1449;
                l_777 = (l_1364 &= (g_5[g_6][g_6][(g_274.f1 + 4)] > 0x2D5EA8EF6F196763LL));
            }
        }
        (*l_1452) = l_1403[0][6];
        (*l_1452) ^= (((g_1453 != g_1453) , (((**g_1406) == g_1408[2][2][1]) , (safe_mod_func_int64_t_s_s(((l_1403[0][1] = ((safe_mul_func_int8_t_s_s((g_284 = 0xC9L), (safe_add_func_int8_t_s_s((l_777 , (safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((**g_1084), 0x39L)), (l_1464 ^= (l_1403[0][1] >= l_777))))), (**g_1084))))) , (*l_1362))) , g_285[0][0]), 0xCEE6C6CF9285B9F9LL)))) > 0x3BL);
    }
    (*l_1469) = g_1465;
    for (g_186 = 2; (g_186 >= 0); g_186 -= 1)
    {
        union U0 *l_1470 = (void*)0;
        union U0 **l_1471 = &g_256;
        int32_t *l_1472 = &g_1408[0][6][1];
        int32_t *l_1473 = (void*)0;
        int32_t *l_1474 = &g_718;
        int32_t *l_1475[8];
        int8_t *l_1486 = &g_491;
        union U1 l_1506 = {-10L};
        uint32_t l_1507 = 8UL;
        union U1 *** const l_1607 = &g_632;
        int16_t l_1668 = 1L;
        int64_t l_1678 = 0L;
        uint16_t l_1683 = 1UL;
        int32_t l_1802 = 0x57BB50BBL;
        int i;
        for (i = 0; i < 8; i++)
            l_1475[i] = &l_777;
        (*l_1471) = l_1470;
        l_1478--;
        for (g_7 = 0; (g_7 <= 9); g_7 += 1)
        {
            uint8_t l_1504 = 0x56L;
            int64_t *l_1513 = &g_5[0][1][7];
            int32_t l_1557 = 0xB1122E2EL;
            int8_t *l_1569 = &l_1477[0];
            uint32_t l_1585[8][8][4] = {{{1UL,1UL,3UL,0UL},{1UL,4294967294UL,0x62B2EB04L,1UL},{0xD7ABCAF1L,0UL,0xD7ABCAF1L,0x62B2EB04L},{4294967295UL,0UL,3UL,1UL},{0UL,4294967294UL,4294967294UL,0UL},{0xD7ABCAF1L,1UL,4294967294UL,0x62B2EB04L},{0UL,4294967295UL,3UL,4294967295UL},{4294967295UL,4294967294UL,0xD7ABCAF1L,4294967295UL}},{{0xD7ABCAF1L,4294967295UL,0x62B2EB04L,0x62B2EB04L},{1UL,1UL,3UL,0UL},{1UL,4294967294UL,0x62B2EB04L,1UL},{0xD7ABCAF1L,0UL,0xD7ABCAF1L,0x62B2EB04L},{4294967295UL,0UL,3UL,1UL},{0UL,4294967294UL,4294967294UL,0UL},{0xD7ABCAF1L,1UL,4294967294UL,0x62B2EB04L},{0UL,4294967295UL,3UL,4294967295UL}},{{4294967295UL,4294967294UL,0xD7ABCAF1L,4294967295UL},{0xD7ABCAF1L,4294967295UL,0x62B2EB04L,0x62B2EB04L},{1UL,1UL,3UL,0UL},{1UL,4294967294UL,0x62B2EB04L,1UL},{0xD7ABCAF1L,0UL,0xD7ABCAF1L,0x62B2EB04L},{4294967295UL,0UL,3UL,1UL},{0UL,4294967294UL,4294967294UL,0UL},{0xD7ABCAF1L,1UL,4294967294UL,0x62B2EB04L}},{{0UL,4294967295UL,3UL,4294967295UL},{4294967295UL,4294967294UL,0xD7ABCAF1L,4294967295UL},{0xD7ABCAF1L,4294967295UL,0x62B2EB04L,0x62B2EB04L},{1UL,1UL,3UL,0UL},{1UL,4294967294UL,0x62B2EB04L,1UL},{0xD7ABCAF1L,0UL,0xD7ABCAF1L,0x62B2EB04L},{4294967295UL,0UL,3UL,1UL},{0UL,4294967294UL,4294967294UL,0UL}},{{0xD7ABCAF1L,1UL,4294967294UL,0x62B2EB04L},{0UL,0x62B2EB04L,1UL,0x62B2EB04L},{0x62B2EB04L,3UL,0x088B01B9L,0x62B2EB04L},{0x088B01B9L,0x62B2EB04L,1UL,1UL},{0xD7ABCAF1L,0xD7ABCAF1L,1UL,4294967294UL},{0xD7ABCAF1L,3UL,1UL,0xD7ABCAF1L},{0x088B01B9L,4294967294UL,0x088B01B9L,1UL},{0x62B2EB04L,4294967294UL,1UL,0xD7ABCAF1L}},{{4294967294UL,3UL,3UL,4294967294UL},{0x088B01B9L,0xD7ABCAF1L,3UL,1UL},{4294967294UL,0x62B2EB04L,1UL,0x62B2EB04L},{0x62B2EB04L,3UL,0x088B01B9L,0x62B2EB04L},{0x088B01B9L,0x62B2EB04L,1UL,1UL},{0xD7ABCAF1L,0xD7ABCAF1L,1UL,4294967294UL},{0xD7ABCAF1L,3UL,1UL,0xD7ABCAF1L},{0x088B01B9L,4294967294UL,0x088B01B9L,1UL}},{{0x62B2EB04L,4294967294UL,1UL,0xD7ABCAF1L},{4294967294UL,3UL,3UL,4294967294UL},{0x088B01B9L,0xD7ABCAF1L,3UL,1UL},{4294967294UL,0x62B2EB04L,1UL,0x62B2EB04L},{0x62B2EB04L,3UL,0x088B01B9L,0x62B2EB04L},{0x088B01B9L,0x62B2EB04L,1UL,1UL},{0xD7ABCAF1L,0xD7ABCAF1L,1UL,4294967294UL},{0xD7ABCAF1L,3UL,1UL,0xD7ABCAF1L}},{{0x088B01B9L,4294967294UL,0x088B01B9L,1UL},{0x62B2EB04L,4294967294UL,1UL,0xD7ABCAF1L},{4294967294UL,3UL,3UL,4294967294UL},{0x088B01B9L,0xD7ABCAF1L,3UL,1UL},{4294967294UL,0x62B2EB04L,1UL,0x62B2EB04L},{0x62B2EB04L,3UL,0x088B01B9L,0x62B2EB04L},{0x088B01B9L,0x62B2EB04L,1UL,1UL},{0xD7ABCAF1L,0xD7ABCAF1L,1UL,4294967294UL}}};
            int64_t l_1616[6] = {0x61AC4C311FABD2C4LL,0x61AC4C311FABD2C4LL,0x61AC4C311FABD2C4LL,0x61AC4C311FABD2C4LL,0x61AC4C311FABD2C4LL,0x61AC4C311FABD2C4LL};
            int64_t l_1630 = (-1L);
            uint8_t l_1648 = 255UL;
            int32_t l_1666 = 0x04F98BDCL;
            int32_t l_1672 = 0L;
            int32_t l_1673 = 0x1AE9C5C2L;
            int32_t l_1674 = (-10L);
            int64_t l_1728 = (-4L);
            uint64_t ** const * const **l_1737 = &l_1736;
            int32_t l_1795[3][4];
            int32_t l_1801 = 0xE0633472L;
            uint16_t l_1814 = 65526UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1795[i][j] = 3L;
            }
            for (g_164 = 0; (g_164 <= 9); g_164 += 1)
            {
                uint32_t *l_1483 = &g_218[8][8];
                int16_t *l_1505 = &g_181;
                union U1 **l_1516[10] = {&g_273,&g_273,&g_273,&g_273,&g_273,&g_273,&g_273,&g_273,&g_273,&g_273};
                int64_t l_1556 = 0x18678A985193F1C8LL;
                int i, j, k;
            }
            l_1557 = 0x48BE8E92L;
            if ((safe_lshift_func_uint8_t_u_s((!(safe_rshift_func_uint8_t_u_s(l_1616[0], ((~0xE7D1D1FEL) , (safe_add_func_int64_t_s_s((***g_1465), (***g_1465))))))), 6)))
            {
                const uint16_t l_1625 = 0xD35CL;
                uint32_t l_1632 = 2UL;
                int32_t l_1660 = 0x79F970B6L;
                int32_t l_1663 = 0xD9544892L;
                int16_t l_1664 = 0L;
                int32_t l_1671 = (-6L);
                int32_t l_1679 = 0xDD1AE33CL;
                int32_t l_1680 = 6L;
                int32_t l_1681[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1681[i] = (-7L);
                for (l_1506.f0 = 9; (l_1506.f0 >= 1); l_1506.f0 -= 1)
                {
                    uint32_t *l_1631 = &l_1585[6][0][0];
                    union U1 *l_1659 = &l_1346[6];
                    int i, j, k;
                    g_1408[g_186][l_1506.f0][g_186] = g_1408[g_186][l_1506.f0][g_186];
                    for (g_282 = 2; (g_282 >= 0); g_282 -= 1)
                    {
                        uint32_t *l_1620 = &g_218[4][0];
                        int i, j, k;
                        g_1408[g_282][(g_282 + 6)][g_282] &= (3UL || (--(*l_1620)));
                        (*l_1474) = 0x0EB11CF9L;
                    }
                    if (((safe_div_func_int64_t_s_s(l_1625, ((**g_632) , (((void*)0 == &l_1585[6][0][0]) , (func_17(g_1408[g_186][l_1506.f0][g_186], ((0x3BL < (safe_mul_func_uint16_t_u_u(0x4976L, (((safe_mod_func_int32_t_s_s(l_1630, ((*l_1631) = 0x76AD5396L))) , g_274.f1) ^ 1UL)))) != (*l_1474)), l_1632, l_1346[4]) , (*g_1467)))))) || g_1408[g_186][l_1506.f0][g_186]))
                    {
                        uint64_t l_1646[5][2] = {{18446744073709551607UL,18446744073709551607UL},{18446744073709551607UL,18446744073709551607UL},{18446744073709551607UL,18446744073709551607UL},{18446744073709551607UL,18446744073709551607UL},{18446744073709551607UL,18446744073709551607UL}};
                        int16_t l_1647 = 0x0C49L;
                        int i, j;
                        l_1647 &= ((***g_660) > (((safe_mod_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((((**g_1084) = (~(l_1346[4].f1 & ((~0x52F7B7F3893D7B84LL) == (!(((1L ^ (((0xB05CD1BDL != (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_1646[0][1] == l_1646[0][1]), 0xF924L)), (**g_1084)))) , g_1408[g_186][l_1506.f0][g_186]) | 0UL)) , (**g_408)) && l_1646[2][1])))))) == 0xADL), g_194[3][1])) == 0xD9L) || (**g_1466)), 1UL)) || 1UL) < l_1504));
                    }
                    else
                    {
                        int64_t l_1651 = 0xD3C24597D196B89BLL;
                        union U1 l_1652 = {0xE1D2910EL};
                        if (l_1648)
                            break;
                        l_1557 = (safe_rshift_func_int8_t_s_s(((*l_1486) = ((*g_1407) >= (((0UL != 0x1BA5L) || l_1651) != (l_1652 , ((**g_1084) >= (safe_sub_func_int64_t_s_s(((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((l_1652.f1 | ((*l_1631) ^= 4294967286UL)), (*l_1472))), 1L)) , (***g_1465)), 0x040138F0422691E3LL))))))), g_213[1]));
                        (*g_632) = l_1659;
                        if (l_1476)
                            continue;
                    }
                }
                for (g_283 = 0; (g_283 <= 9); g_283 += 1)
                {
                    int32_t l_1661 = 0x67EE96FAL;
                    int32_t l_1662 = 0xFBF8EBA4L;
                    int16_t l_1665 = 5L;
                    int32_t l_1667 = 0L;
                    int32_t l_1669 = (-1L);
                    int32_t l_1670 = 1L;
                    ++g_1675;
                }
                for (l_1506.f1 = 0; (l_1506.f1 <= 0); l_1506.f1 += 1)
                {
                    int i, j;
                    (*l_1474) = l_1403[l_1506.f1][(l_1506.f1 + 6)];
                    for (g_164 = 0; (g_164 <= 2); g_164 += 1)
                    {
                        int i, j, k;
                        return g_1408[(l_1506.f1 + 2)][g_7][l_1506.f1];
                    }
                }
                l_1683--;
            }
            else
            {
                int32_t l_1697 = 0L;
                int32_t l_1714[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1714[i] = 0x539E286FL;
                for (g_1088 = 0; (g_1088 <= 9); g_1088 += 1)
                {
                    int32_t l_1686 = 0x6953D4DAL;
                    for (g_491 = 6; (g_491 >= 0); g_491 -= 1)
                    {
                        int16_t l_1694[2][6][5] = {{{(-1L),0x3C91L,(-1L),0x0F08L,0x0F08L},{0x3F4EL,0x3AA2L,0x3F4EL,0x792FL,1L},{(-1L),0x3C91L,(-1L),0x0F08L,0x0F08L},{0x3F4EL,0x3AA2L,0x3F4EL,0x792FL,1L},{(-1L),0x3C91L,(-1L),0x0F08L,0x0F08L},{0x3F4EL,0x3AA2L,0x3F4EL,0x792FL,1L}},{{(-1L),0x3C91L,(-1L),0x0F08L,0x0F08L},{0x3F4EL,0x3AA2L,0x3F4EL,0x792FL,1L},{(-1L),0x3C91L,(-1L),(-1L),(-1L)},{1L,(-1L),1L,0xC904L,0x3F4EL},{(-1L),0L,(-1L),(-1L),(-1L)},{1L,(-1L),1L,0xC904L,0x3F4EL}}};
                        int i, j, k;
                        (*l_1474) = (l_1564.f0 < (((0x51C43830BBAC0DE0LL ^ ((l_1686 , 0x79L) > ((g_1064 > (l_1687 != (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(l_1686, ((l_1694[1][2][2] <= (safe_sub_func_int32_t_s_s(0x275DBDAEL, (-6L)))) | l_1686))), 5)), l_1697)))) , l_1694[0][1][3]))) != g_181) || g_163[6][0]));
                    }
                    return l_1686;
                }
                for (g_1675 = 0; (g_1675 <= 9); g_1675 += 1)
                {
                    int8_t l_1711 = 0L;
                    for (g_80 = 0; (g_80 <= 9); g_80 += 1)
                    {
                        union U0 l_1706 = {-1L};
                        uint8_t *l_1712 = (void*)0;
                        uint8_t *l_1713 = (void*)0;
                        l_1714[1] ^= (((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_1346[4].f1, (l_1564.f0 &= (g_490 = ((**g_1084) |= (((((((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((l_1706 , &g_626) == &g_156), ((((*l_1569) = (safe_mul_func_int16_t_s_s(0x07B1L, ((safe_sub_func_int16_t_s_s((l_1711 >= ((*l_1472) ^= 0x4239F5E2L)), g_163[0][0])) ^ (((l_1711 ^ (***g_1465)) < l_1531[1]) , l_1711))))) , 0xDDL) != l_1706.f0))), l_1673)) , l_1711) > l_1711) == (*l_1474)) , (*g_1466)) != (*g_1466)) && l_1557)))))), g_224)) >= 0x71L) , l_1478);
                    }
                }
                for (g_1390 = 0; (g_1390 <= 9); g_1390 += 1)
                {
                    const int32_t *l_1715 = &l_1403[0][5];
                    const uint64_t l_1721 = 0xC64DF12B2E338A37LL;
                    for (l_1674 = 3; (l_1674 <= 9); l_1674 += 1)
                    {
                        const int32_t **l_1716 = (void*)0;
                        const int32_t **l_1717 = &l_1715;
                        const int32_t *l_1719 = &g_6;
                        const int32_t **l_1718[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1718[i] = &l_1719;
                        l_1564.f0 = l_777;
                        g_1720 = ((*l_1717) = l_1715);
                        return l_1721;
                    }
                }
                if (l_1477[0])
                    continue;
            }
            if ((safe_mul_func_int8_t_s_s(((safe_div_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(0x1E89L, (((((**g_632) = (**g_632)) , (((***g_660) | l_1728) | (l_1530[3] && (*l_1474)))) >= (**g_1406)) | (g_1088 = ((safe_rshift_func_int16_t_s_s(((((0x90L == (safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(0x284CL, 1L)), 0xEB15F726L))) == l_1585[3][1][3]) || 0x7245L) ^ l_1630), g_181)) , (**g_408)))))) == (-3L)), (***g_407))) | 5UL), 7L)))
            {
                uint16_t * const ***l_1753 = &g_1529;
                int32_t l_1754 = 0L;
                uint16_t *l_1755 = &g_1345;
                uint32_t *l_1763 = &g_218[7][2];
                union U1 *l_1781 = (void*)0;
                l_1737 = l_1735;
                for (g_1088 = 0; (g_1088 <= 9); g_1088 += 1)
                {
                    uint16_t *****l_1740 = (void*)0;
                    int64_t **l_1751 = (void*)0;
                    union U1 l_1752[4] = {{0xF1302C1AL},{0xF1302C1AL},{0xF1302C1AL},{0xF1302C1AL}};
                    union U1 **l_1760 = &g_273;
                    int32_t l_1772 = 1L;
                    int i;
                    for (g_274.f0 = 0; (g_274.f0 <= 9); g_274.f0 += 1)
                    {
                        (*l_1472) = (safe_mod_func_int16_t_s_s(((((l_1740 = &g_1453) == (((!((((safe_add_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(((g_185 < (l_1477[0] == (-1L))) || (+(((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((*g_1465) == l_1751), 2)), 2)) , (*g_1466)) == (**g_1465)))), (g_181 = ((l_1753 = (l_1752[1] , (void*)0)) != (void*)0)))) == l_1754) > l_1754), (**g_1406))) , (*g_273)) , (void*)0) != l_1755)) < l_1630) , &g_1453)) , (-4L)) <= g_626), g_5[0][0][6]));
                        return (**g_408);
                    }
                    for (l_1678 = 9; (l_1678 >= 0); l_1678 -= 1)
                    {
                        uint32_t *l_1762[1];
                        uint32_t **l_1761 = &l_1762[0];
                        int32_t l_1771 = 0x8ABF8B24L;
                        uint32_t l_1773 = 4294967295UL;
                        uint16_t ***l_1782 = &g_233;
                        int16_t l_1798[4] = {1L,1L,1L,1L};
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1762[i] = &g_218[8][3];
                        l_1773 = ((*l_1472) = (safe_mod_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(((****l_1736) &= ((void*)0 != l_1760)), ((((*l_1761) = &l_1507) != (((&g_164 == (l_1764 = l_1763)) != g_1675) , &g_164)) | (9UL != (safe_sub_func_int64_t_s_s(((safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((*g_1084) == (void*)0), 65531UL)) != l_1478), l_1771)) <= l_1772), l_1754)))))) ^ 18446744073709551615UL), 0x44L)));
                        if (l_1752[1].f0)
                            continue;
                        (*l_1474) = ((safe_add_func_uint64_t_u_u((((((**g_408) >= 8UL) , 255UL) >= (((safe_rshift_func_int16_t_s_s(g_282, 13)) , ((((((void*)0 != &g_659) <= (+(*g_1085))) | (*l_1474)) ^ (safe_sub_func_int32_t_s_s((g_255.f0 <= 1L), l_1772))) && l_1772)) < (*g_1720))) > 0x0E848967L), l_1754)) != l_1773);
                        (*l_1474) |= ((l_1781 == ((((*l_1782) = &g_1407) != (((0L == 0xEC499E98L) , ((*l_1755) = ((safe_sub_func_int64_t_s_s(((((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(248UL, (0L != ((**l_1761) = ((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((g_156 ^= l_1795[1][1]), ((**g_1406) < ((safe_mul_func_uint16_t_u_u(l_1752[1].f0, 5UL)) , l_1773)))), 0xF5737FB6L)) < 0x7A5E2B1956A74AB7LL))))), l_1771)), 0x4BB84A8A623B0D72LL)) | g_274.f1) == l_1530[2]) , l_1798[1]), (-1L))) <= l_1564.f0))) , (void*)0)) , (**l_1607))) , (*g_1720));
                    }
                }
            }
            else
            {
                int32_t l_1799 = 0L;
                int32_t l_1800 = (-3L);
                int32_t l_1803 = 0x6EAEA544L;
                int32_t l_1804[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_1804[i] = 4L;
                l_1805--;
                (*l_1472) = ((*l_1474) &= ((safe_mul_func_uint8_t_u_u((((**g_1406) ^= l_1804[0]) < ((g_163[6][0] = (safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((0xFEEC887C424A8868LL ^ l_1804[0]), 3)), l_1557))) | l_1814)), (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(0xD30D066BL, ((safe_sub_func_int32_t_s_s(l_1800, (((*l_1472) , (l_1616[1] >= (***g_1465))) == 18446744073709551615UL))) >= l_1805))), 0L)), g_274.f1)))) | 18446744073709551615UL));
            }
        }
    }
    return l_1530[2];
}







static uint64_t func_12(int32_t p_13, int64_t p_14, uint16_t p_15, uint64_t p_16)
{
    int16_t l_1353 = 0xA2B3L;
    int32_t *l_1354[8][6][5] = {{{&g_285[0][7],&g_274.f0,&g_285[0][7],&g_285[0][7],&g_274.f0},{&g_285[0][5],&g_6,&g_6,&g_285[0][5],&g_6},{&g_274.f0,&g_274.f0,(void*)0,&g_274.f0,&g_274.f0},{&g_6,&g_285[0][5],&g_6,&g_6,&g_285[0][5]},{&g_274.f0,&g_285[0][7],&g_285[0][7],&g_274.f0,&g_285[0][7]},{&g_285[0][5],&g_285[0][5],&g_285[2][1],&g_285[0][5],&g_285[0][5]}},{{&g_285[0][7],&g_274.f0,&g_285[0][7],&g_285[0][7],&g_274.f0},{&g_285[0][5],&g_6,&g_6,&g_285[0][5],&g_6},{&g_274.f0,&g_274.f0,(void*)0,&g_274.f0,&g_274.f0},{&g_6,&g_285[0][5],&g_6,&g_6,&g_285[0][5]},{&g_274.f0,&g_285[0][7],&g_285[0][7],&g_274.f0,&g_285[0][7]},{&g_285[0][5],&g_285[0][5],&g_285[2][1],&g_285[0][5],&g_285[0][5]}},{{&g_285[0][7],&g_274.f0,&g_285[0][7],&g_285[0][7],&g_274.f0},{&g_285[0][5],&g_6,&g_6,&g_285[0][5],&g_6},{&g_274.f0,&g_274.f0,(void*)0,&g_274.f0,&g_274.f0},{&g_6,&g_285[0][5],&g_6,&g_6,&g_285[0][5]},{&g_274.f0,&g_285[0][7],&g_285[0][7],&g_274.f0,&g_285[0][7]},{&g_285[0][5],&g_285[0][5],&g_285[2][1],&g_285[0][5],&g_285[0][5]}},{{&g_285[0][7],&g_274.f0,&g_285[0][7],&g_285[0][7],&g_274.f0},{&g_285[0][5],&g_6,&g_6,&g_285[0][5],&g_6},{&g_274.f0,&g_274.f0,(void*)0,&g_274.f0,&g_274.f0},{&g_6,&g_285[0][5],&g_6,&g_6,&g_285[0][5]},{&g_274.f0,&g_285[0][7],&g_285[0][7],&g_274.f0,&g_285[0][7]},{&g_285[0][5],&g_285[0][5],&g_285[2][1],&g_285[0][5],&g_285[0][5]}},{{&g_285[0][7],&g_274.f0,&g_285[0][7],&g_285[0][7],&g_274.f0},{&g_285[0][5],&g_6,&g_6,&g_285[0][5],&g_6},{&g_274.f0,&g_274.f0,(void*)0,&g_274.f0,&g_274.f0},{&g_6,&g_285[0][5],&g_6,&g_6,&g_285[0][5]},{&g_274.f0,&g_285[0][7],&g_285[0][7],&g_274.f0,&g_285[0][7]},{&g_285[0][5],&g_285[0][5],&g_285[2][1],&g_285[0][5],&g_285[0][5]}},{{&g_285[0][7],&g_274.f0,&g_285[0][7],&g_285[0][7],&g_274.f0},{&g_285[0][5],&g_6,&g_6,&g_285[0][5],&g_6},{&g_274.f0,&g_274.f0,(void*)0,&g_274.f0,&g_285[0][7]},{&g_285[2][1],&g_6,&g_285[2][1],&g_285[2][1],&g_6},{&g_285[0][7],(void*)0,(void*)0,&g_285[0][7],(void*)0},{&g_6,&g_6,&g_285[0][5],&g_6,&g_6}},{{(void*)0,&g_285[0][7],(void*)0,(void*)0,&g_285[0][7]},{&g_6,&g_285[2][1],&g_285[2][1],&g_6,&g_285[2][1]},{&g_285[0][7],&g_285[0][7],&g_274.f0,&g_285[0][7],&g_285[0][7]},{&g_285[2][1],&g_6,&g_285[2][1],&g_285[2][1],&g_6},{&g_285[0][7],(void*)0,(void*)0,&g_285[0][7],(void*)0},{&g_6,&g_6,&g_285[0][5],&g_6,&g_6}},{{(void*)0,&g_285[0][7],(void*)0,(void*)0,&g_285[0][7]},{&g_6,&g_285[2][1],&g_285[2][1],&g_6,&g_285[2][1]},{&g_285[0][7],&g_285[0][7],&g_274.f0,&g_285[0][7],&g_285[0][7]},{&g_285[2][1],&g_6,&g_285[2][1],&g_285[2][1],&g_6},{&g_285[0][7],(void*)0,(void*)0,&g_285[0][7],(void*)0},{&g_6,&g_6,&g_285[0][5],&g_6,&g_6}}};
    int32_t l_1355 = 0xBD6B0A8FL;
    uint8_t l_1356 = 0xEBL;
    int i, j, k;
    --l_1356;
    return (***g_407);
}







static union U0 func_17(uint64_t p_18, int32_t p_19, uint16_t p_20, union U1 p_21)
{
    int32_t *l_1347 = &g_285[2][1];
    int32_t *l_1348[7] = {&g_2,&g_6,&g_2,&g_2,&g_6,&g_2,&g_2};
    uint64_t l_1349 = 18446744073709551615UL;
    int i;
    ++l_1349;
    return g_255;
}







static uint16_t func_31(uint64_t p_32, const uint64_t * p_33)
{
    uint32_t l_1341[5];
    int32_t l_1342 = 1L;
    int32_t *l_1343[10] = {&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2};
    int64_t l_1344 = 0x417900C96953D27ELL;
    int i;
    for (i = 0; i < 5; i++)
        l_1341[i] = 4294967288UL;
    l_1342 = l_1341[2];
    g_1345 = (l_1344 = ((void*)0 != (*g_659)));
    return g_194[7][3];
}







static uint64_t func_34(int64_t p_35, uint64_t * p_36)
{
    int32_t *l_1033 = &g_718;
    int32_t **l_1034 = &g_558[1][1][0];
    int32_t l_1044 = 0L;
    int32_t l_1053 = 0L;
    int8_t l_1220 = (-1L);
    int32_t l_1292 = 0L;
    int32_t l_1294 = 0xE7337F51L;
    int32_t l_1295 = 0xB5BA3710L;
    int32_t l_1296 = 0x96536846L;
    int32_t l_1297 = 0x1C18C87DL;
    int32_t l_1299 = 1L;
    int32_t l_1300 = 0xCB9EDE2DL;
    int32_t l_1303 = 0xA308B2DDL;
    int32_t l_1305[3];
    union U1 l_1331 = {1L};
    int i;
    for (i = 0; i < 3; i++)
        l_1305[i] = 0L;
    (*l_1034) = l_1033;
    for (g_274.f1 = 17; (g_274.f1 > 12); g_274.f1--)
    {
        uint64_t l_1037 = 0xFA3ED000A9202832LL;
        int32_t * const l_1038[4][1][7] = {{{&g_7,&g_285[2][3],&g_285[2][1],&g_285[2][1],&g_718,&g_285[2][1],&g_718}},{{&g_7,&g_718,&g_718,&g_7,&g_6,&g_718,&g_7}},{{&g_2,&g_718,&g_285[2][1],&g_6,&g_6,&g_285[2][1],&g_718}},{{&g_6,&g_2,&g_285[2][1],&g_285[2][3],&g_718,&g_7,&g_7}}};
        union U1 l_1045 = {0L};
        uint64_t l_1046 = 0x33C667179660E2C1LL;
        uint8_t l_1086 = 4UL;
        int64_t *l_1101 = &g_163[6][0];
        int64_t **l_1100 = &l_1101;
        const uint16_t l_1118 = 65532UL;
        union U0 l_1138 = {7L};
        union U1 ***l_1140 = &g_632;
        union U0 l_1143 = {0xE4L};
        int8_t l_1157 = 0L;
        union U1 l_1158 = {0x29AC33E7L};
        const int64_t *l_1187[7][1] = {{&g_5[0][0][1]},{&g_5[0][1][0]},{&g_5[0][1][0]},{&g_5[0][0][1]},{&g_5[0][1][0]},{&g_5[0][1][0]},{&g_5[0][0][1]}};
        uint16_t l_1195 = 0xD13DL;
        uint32_t l_1206[8][5][6] = {{{0x504CA861L,18446744073709551613UL,18446744073709551610UL,0xBA81023DL,18446744073709551613UL,0xFD262A0EL},{0x85E43918L,0xEF7927C0L,0xD372AEC3L,0x3529F72BL,5UL,18446744073709551615UL},{0xEF7927C0L,18446744073709551615UL,18446744073709551612UL,18446744073709551615UL,0xEF7927C0L,0UL},{0x15792B90L,18446744073709551614UL,0xD6FDB591L,1UL,0x858DD32CL,0x4070EF6CL},{18446744073709551615UL,18446744073709551613UL,0x1EABC909L,18446744073709551614UL,1UL,0x4070EF6CL}},{{0x3A08A1FCL,0UL,0xD6FDB591L,0x504CA861L,18446744073709551611UL,0UL},{1UL,6UL,18446744073709551612UL,8UL,6UL,18446744073709551615UL},{18446744073709551614UL,0xE1CD5F08L,0xD372AEC3L,0x0F5A2FB2L,0xE1CD5F08L,0xFD262A0EL},{0x858DD32CL,0x90F69920L,18446744073709551610UL,7UL,0x85E43918L,1UL},{0xBA81023DL,0x504CA861L,0xD4845CA3L,1UL,18446744073709551615UL,18446744073709551615UL}},{{0xBA81023DL,1UL,0UL,0xB90B6CDFL,18446744073709551615UL,2UL},{18446744073709551615UL,0x2939D83DL,1UL,0x380FD969L,0x90015150L,1UL},{0xFC119BB8L,0xBBC582ABL,0x858DD32CL,18446744073709551615UL,0x6E9005E1L,0x504CA861L},{0xA0DE698EL,0xF99120AFL,5UL,18446744073709551609UL,0xFC119BB8L,18446744073709551613UL},{7UL,18446744073709551615UL,6UL,0xFC119BB8L,0x39689EA9L,18446744073709551606UL}},{{18446744073709551615UL,18446744073709551615UL,0x504CA861L,1UL,0xFC119BB8L,0UL},{0xC419336CL,0xF99120AFL,0x3A08A1FCL,18446744073709551615UL,0x6E9005E1L,5UL},{18446744073709551615UL,0xBBC582ABL,0x3529F72BL,0x90015150L,0x90015150L,0x3529F72BL},{0x2939D83DL,0x2939D83DL,0x85E43918L,0xF99120AFL,18446744073709551615UL,0x15792B90L},{18446744073709551609UL,0xF3BD8649L,6UL,18446744073709551614UL,18446744073709551615UL,0x85E43918L}},{{1UL,18446744073709551609UL,6UL,0x6E9005E1L,0x2939D83DL,0x15792B90L},{18446744073709551606UL,0x6E9005E1L,0x85E43918L,0x268A6C58L,18446744073709551609UL,0x3529F72BL},{0x268A6C58L,18446744073709551609UL,0x3529F72BL,0x5830A6BDL,18446744073709551606UL,5UL},{0xA2597D53L,18446744073709551606UL,0x3A08A1FCL,0x960976ACL,18446744073709551609UL,0UL},{18446744073709551609UL,0x5830A6BDL,0x504CA861L,7UL,0xA0DE698EL,18446744073709551606UL}},{{18446744073709551609UL,0x01E89578L,6UL,7UL,18446744073709551615UL,18446744073709551613UL},{18446744073709551609UL,0xFC119BB8L,5UL,0x960976ACL,18446744073709551615UL,0x504CA861L},{0xA2597D53L,18446744073709551615UL,0x858DD32CL,0x5830A6BDL,18446744073709551614UL,1UL},{0x268A6C58L,18446744073709551615UL,1UL,0x268A6C58L,0x01E89578L,2UL},{18446744073709551606UL,0x960976ACL,18446744073709551607UL,0x6E9005E1L,0xB90B6CDFL,1UL}},{{1UL,18446744073709551615UL,0xEF7927C0L,18446744073709551614UL,0xB90B6CDFL,6UL},{18446744073709551609UL,0x960976ACL,0x0F5A2FB2L,0xF99120AFL,0x01E89578L,18446744073709551615UL},{0x2939D83DL,18446744073709551615UL,0x90F69920L,0x90015150L,18446744073709551614UL,18446744073709551611UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551606UL,18446744073709551615UL,18446744073709551615UL,0x3A08A1FCL},{0xC419336CL,0xFC119BB8L,18446744073709551615UL,1UL,18446744073709551615UL,1UL}},{{18446744073709551615UL,0x01E89578L,0xBA81023DL,0xFC119BB8L,0xA0DE698EL,1UL},{7UL,0x5830A6BDL,18446744073709551615UL,18446744073709551609UL,18446744073709551609UL,0x3A08A1FCL},{0xA0DE698EL,18446744073709551606UL,18446744073709551606UL,18446744073709551615UL,18446744073709551606UL,18446744073709551611UL},{0xFC119BB8L,18446744073709551609UL,0x90F69920L,0x380FD969L,18446744073709551609UL,18446744073709551615UL},{18446744073709551615UL,0x6E9005E1L,0x0F5A2FB2L,0xB90B6CDFL,0x2939D83DL,6UL}}};
        int16_t l_1221 = (-7L);
        uint8_t l_1223 = 3UL;
        int32_t l_1283 = 0x5C836174L;
        int32_t l_1285 = (-7L);
        uint64_t l_1315 = 0xF4A773C0CB9E5257LL;
        int32_t l_1320 = 9L;
        uint32_t l_1326 = 0UL;
        int i, j, k;
    }
    return (*p_36);
}







static int64_t func_40(uint16_t p_41, uint64_t p_42, uint64_t * p_43, uint64_t * p_44)
{
    union U0 *l_1003 = &g_255;
    uint16_t ***l_1006 = &g_233;
    int32_t l_1008 = 0x9998B3FBL;
    int32_t l_1009[4];
    int32_t **l_1013 = &g_558[7][5][0];
    int32_t **l_1014 = &g_558[5][2][0];
    int32_t **l_1015 = (void*)0;
    int32_t **l_1016[2][3][5] = {{{&g_558[7][5][0],&g_558[7][5][0],&g_558[3][6][0],&g_558[3][6][0],&g_558[7][5][0]},{&g_558[7][9][0],&g_558[3][2][0],&g_558[7][9][0],&g_558[3][2][0],&g_558[7][9][0]},{&g_558[7][5][0],&g_558[3][6][0],&g_558[3][6][0],&g_558[7][5][0],&g_558[7][5][0]}},{{(void*)0,&g_558[3][2][0],(void*)0,&g_558[3][2][0],(void*)0},{&g_558[7][5][0],&g_558[7][5][0],&g_558[3][6][0],&g_558[3][6][0],&g_558[7][5][0]},{&g_558[7][9][0],&g_558[3][2][0],&g_558[7][9][0],&g_558[3][2][0],&g_558[7][9][0]}}};
    int32_t *l_1017 = &l_1008;
    int16_t l_1031 = 0xF1C8L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1009[i] = 2L;
    for (g_490 = (-29); (g_490 < 15); g_490++)
    {
        int32_t l_991[9][7] = {{4L,0x070845AAL,(-1L),0x070845AAL,4L,0L,3L},{0L,0xE801C0BEL,0L,0x21A6F69CL,(-1L),6L,(-1L)},{0L,0L,0L,0L,0x070845AAL,0xB1DBAA10L,7L},{0L,0x21A6F69CL,0xCA70EEB4L,0x7F5AC9B5L,1L,1L,0x7F5AC9B5L},{4L,3L,4L,0xB1DBAA10L,0x23E376CBL,0x2EDE74F4L,7L},{6L,0x9A88A500L,(-1L),0xCA70EEB4L,0x7D70B1E7L,0xCA70EEB4L,(-1L)},{0x23E376CBL,0x23E376CBL,0x070845AAL,0x67C57CB9L,0x7A19C673L,0x2EDE74F4L,3L},{0x35D652C1L,0L,1L,0xE801C0BEL,0xE801C0BEL,1L,0L},{0L,0L,0x23E376CBL,4L,0x7A19C673L,0xB1DBAA10L,0x67C57CB9L}};
        uint32_t *l_996 = &g_218[3][2];
        uint16_t *l_1007[7];
        int i, j;
        for (i = 0; i < 7; i++)
            l_1007[i] = &g_80;
        if (l_991[0][2])
            break;
        l_1009[2] &= ((((safe_lshift_func_uint8_t_u_s(g_72, (safe_rshift_func_int8_t_s_s(0xF4L, (((*l_996) &= l_991[1][3]) > (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(((void*)0 != l_1003), g_490)) >= (safe_lshift_func_uint16_t_u_s((l_1008 = (g_80 ^= ((*g_273) , (g_213[0] ^= (l_1006 == l_1006))))), l_991[0][2]))), 0x346A3BA5L)), p_41))))))) < 6UL) | p_41) > g_56);
        return p_42;
    }
    for (g_284 = 0; (g_284 <= 0); g_284 += 1)
    {
        int32_t *l_1010[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1010[i] = &g_285[2][1];
        l_1008 ^= l_1009[0];
        for (g_56 = 0; (g_56 <= 0); g_56 += 1)
        {
            return p_41;
        }
    }
    l_1031 = (safe_sub_func_int16_t_s_s(((l_1017 = &l_1009[2]) == (void*)0), (safe_sub_func_int32_t_s_s(p_42, (2L < (safe_add_func_int8_t_s_s((((((****g_659) = (((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((!((g_283 , (p_41 || (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((0UL ^ (((g_285[2][8] == p_41) ^ g_274.f1) >= p_41)), 7)), p_42)) < (**g_408)) || p_41))) >= g_278)), 10)), p_42)) < p_42) && (*g_409))) >= p_42) || g_163[6][0]) != 0x9D80L), p_42)))))));
    return g_814;
}







static int16_t func_46(const union U0 p_47, uint32_t p_48, union U1 p_49, int8_t p_50, uint64_t * p_51)
{
    const union U1 ***l_781 = (void*)0;
    const uint16_t ***l_787 = (void*)0;
    const uint16_t ****l_786 = &l_787;
    union U0 l_788 = {0xE6L};
    int32_t l_789 = 0x49EA7706L;
    union U0 **l_863[8][3] = {{&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256}};
    int32_t l_897 = 4L;
    int32_t l_900 = 7L;
    int32_t l_901 = 9L;
    int32_t l_905 = 0xC3938D2DL;
    uint32_t l_913 = 1UL;
    int32_t l_920 = 0x21937E9CL;
    int32_t l_923 = 0x5A01694CL;
    uint16_t ***l_937 = (void*)0;
    int32_t l_953 = 0xD8F1F577L;
    uint16_t l_954 = 0xD197L;
    int32_t l_966 = 6L;
    int32_t l_967[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint32_t l_986 = 4294967287UL;
    int i, j;
    return l_986;
}







static union U0 func_52(uint64_t * p_53, uint64_t * p_54)
{
    uint32_t l_61 = 0x1EC6C048L;
    int32_t l_62 = (-1L);
    uint16_t l_70 = 65530UL;
    uint16_t *l_71 = &g_72;
    int32_t l_77 = 0L;
    int32_t l_78 = 0x37DDC4EAL;
    uint16_t *l_79 = &g_80;
    int8_t *l_92 = (void*)0;
    int8_t *l_93 = &g_94;
    int64_t l_95[3][9][3] = {{{0xD3E8228F8F04B746LL,7L,0L},{0x392260F1475AC351LL,5L,5L},{(-1L),1L,0xCD5918CD8B12ACF1LL},{(-1L),0xCD5918CD8B12ACF1LL,0xD3E8228F8F04B746LL},{0x392260F1475AC351LL,(-7L),0xFE07384C7B934CEBLL},{0xD3E8228F8F04B746LL,0xBAF34C2E3979D795LL,0x3A6950E6E27DFDEELL},{0xBAF34C2E3979D795LL,(-7L),0L},{7L,0xCD5918CD8B12ACF1LL,7L},{(-7L),1L,7L}},{{0L,5L,0L},{0L,7L,0x3A6950E6E27DFDEELL},{1L,0xDD146F18880ABB00LL,0xFE07384C7B934CEBLL},{0L,(-1L),0xD3E8228F8F04B746LL},{0L,0L,0xCD5918CD8B12ACF1LL},{(-7L),0L,5L},{7L,(-1L),0L},{0xBAF34C2E3979D795LL,0xDD146F18880ABB00LL,0x4DB59FB14BE5697ALL},{0xD3E8228F8F04B746LL,7L,0L}},{{0x392260F1475AC351LL,5L,5L},{(-1L),1L,0xCD5918CD8B12ACF1LL},{(-1L),0xCD5918CD8B12ACF1LL,0xD3E8228F8F04B746LL},{0x392260F1475AC351LL,(-7L),0xFE07384C7B934CEBLL},{0xD3E8228F8F04B746LL,0xBAF34C2E3979D795LL,0x3A6950E6E27DFDEELL},{0xBAF34C2E3979D795LL,(-7L),0L},{7L,0xCD5918CD8B12ACF1LL,7L},{(-7L),1L,7L},{0L,5L,0L}}};
    union U1 l_96[1] = {{0x8F8D6FFBL}};
    uint32_t *l_97 = &l_61;
    int8_t *l_114 = (void*)0;
    uint64_t *l_139 = &g_56;
    int8_t l_287 = (-1L);
    int32_t l_288 = (-1L);
    int32_t l_289 = 1L;
    int32_t l_292 = 5L;
    int32_t l_293 = (-2L);
    int32_t l_294 = 2L;
    int32_t l_336 = 0x89F1D76BL;
    int32_t l_337 = 3L;
    int32_t l_338 = 0x58F6FA15L;
    int32_t l_339 = 0x6198F1B2L;
    int32_t l_340[2];
    union U0 *l_380 = &g_255;
    int8_t *l_510[5][10] = {{&g_223,(void*)0,&g_223,&g_94,&g_255.f0,(void*)0,&l_287,(void*)0,&g_255.f0,&g_94},{&g_223,(void*)0,&g_223,&g_94,&g_255.f0,(void*)0,&l_287,(void*)0,&g_255.f0,&g_94},{&g_223,(void*)0,&g_223,&g_94,&g_255.f0,(void*)0,&l_287,(void*)0,&g_255.f0,&g_94},{&g_223,(void*)0,&g_223,&g_94,&g_255.f0,(void*)0,&l_287,(void*)0,&g_255.f0,&g_94},{&g_223,(void*)0,&g_223,&g_94,&g_255.f0,(void*)0,&l_287,(void*)0,&g_255.f0,&g_94}};
    int32_t l_594 = 0x3966AE9FL;
    int16_t l_597[3][4] = {{0xD5F2L,0xDA78L,0xD5F2L,0xBAB7L},{0xD5F2L,0xBAB7L,0xBAB7L,0xD5F2L},{0x9793L,0xBAB7L,0L,0xBAB7L}};
    int32_t *l_610 = (void*)0;
    const union U0 l_623[2] = {{0x45L},{0x45L}};
    union U1 **l_633 = (void*)0;
    uint64_t ****l_658 = &g_407;
    int64_t l_680 = 0x7BCE8A05175F2036LL;
    uint16_t * const *l_686[5];
    uint16_t * const **l_685 = &l_686[4];
    uint16_t * const ***l_684 = &l_685;
    uint16_t l_701 = 0UL;
    uint8_t *l_734 = &g_224;
    uint8_t *l_737 = &g_490;
    int16_t l_738 = (-1L);
    int32_t *l_739 = &l_288;
    int32_t *l_740 = &l_62;
    int32_t **l_741[7] = {&l_610,&l_610,&l_610,&l_610,&l_610,&l_610,&l_610};
    int32_t *l_742 = (void*)0;
    int32_t l_747[8] = {0x7C24805BL,0x7C24805BL,0x7C24805BL,0x7C24805BL,0x7C24805BL,0x7C24805BL,0x7C24805BL,0x7C24805BL};
    uint16_t ***l_773 = &g_233;
    uint16_t **l_774 = &l_79;
    int8_t l_775 = (-1L);
    int32_t *l_776 = &l_77;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_340[i] = (-1L);
    for (i = 0; i < 5; i++)
        l_686[i] = &l_71;
    if ((((*l_97) = (((l_62 &= (safe_add_func_uint32_t_u_u(func_59(l_61), l_61))) > (safe_mul_func_uint32_t_u_u(func_59(l_61), (func_65((((l_70 == (((*l_71)--) <= (safe_sub_func_uint16_t_u_u(((*l_79)--), l_70)))) , (safe_mul_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(0x8AL, ((*l_93) ^= (safe_mul_func_int8_t_s_s((!(safe_add_func_int16_t_s_s((&g_56 != &g_56), 0x8E66L))), 8UL))))) && l_77) == (-1L)), l_95[1][1][0]))) , l_96[0]), g_6, l_77, l_95[2][1][0]) > g_7)))) || 1UL)) < l_96[0].f1))
    {
        uint64_t *l_119 = &g_56;
        uint16_t *l_147 = &l_70;
        uint16_t *l_149 = &l_70;
        int32_t l_169 = 0x5D9A7C64L;
        union U0 *l_257 = &g_255;
        int32_t l_290[1];
        int32_t l_333 = (-1L);
        uint64_t ** const l_345 = &l_119;
        uint64_t ** const *l_344 = &l_345;
        int32_t *l_357 = &l_96[0].f0;
        int i;
        for (i = 0; i < 1; i++)
            l_290[i] = 2L;
        for (l_78 = (-2); (l_78 <= (-6)); l_78 = safe_sub_func_uint64_t_u_u(l_78, 6))
        {
            uint16_t l_108 = 0xEED7L;
            const int8_t *l_113 = &g_94;
            int32_t l_126 = 8L;
            uint16_t l_127 = 8UL;
            uint16_t *l_145[3];
            uint32_t l_153 = 18446744073709551607UL;
            int32_t *l_210 = &l_96[0].f0;
            int32_t **l_209 = &l_210;
            int32_t l_222 = 1L;
            uint8_t l_247[2];
            int32_t l_249 = 1L;
            union U1 *l_252 = &l_96[0];
            union U1 **l_251 = &l_252;
            union U0 *l_254[5][9] = {{&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255},{&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255},{&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255},{&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255},{&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255,&g_255}};
            union U0 **l_253[7][10] = {{&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6]},{&l_254[1][6],&l_254[1][6],(void*)0,&l_254[1][6],&l_254[1][6],(void*)0,&l_254[1][6],&l_254[1][6],(void*)0,&l_254[1][6]},{&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6]},{&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6]},{&l_254[1][6],&l_254[1][6],(void*)0,&l_254[1][6],&l_254[1][6],(void*)0,&l_254[1][6],&l_254[1][6],(void*)0,&l_254[1][6]},{&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6]},{&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],&l_254[1][6],(void*)0,&l_254[1][6],(void*)0,(void*)0}};
            int32_t l_291[1];
            uint32_t l_341[7] = {4294967287UL,4294967287UL,4294967295UL,4294967287UL,4294967287UL,4294967295UL,4294967287UL};
            int i, j;
            for (i = 0; i < 3; i++)
                l_145[i] = &g_80;
            for (i = 0; i < 2; i++)
                l_247[i] = 255UL;
            for (i = 0; i < 1; i++)
                l_291[i] = 0x220F7FBAL;
            if (((safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((void*)0 != &l_70), (l_108 , 0xCFCBL))), (0xAFL | ((safe_sub_func_int32_t_s_s((g_94 , (safe_add_func_uint64_t_u_u(1UL, (*p_53)))), g_72)) , g_6)))), 0L)), g_6)) & 0xDEL))
            {
                uint16_t *l_115 = &l_108;
                uint64_t *l_118 = &g_56;
                uint64_t **l_117[9][10] = {{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118}};
                const int32_t l_146 = 0x85D133FDL;
                int32_t l_184[7];
                int32_t *l_221[10] = {&l_126,&l_126,&l_126,&l_126,&l_126,&l_126,&l_126,&l_126,&l_126,&l_126};
                int i, j;
                for (i = 0; i < 7; i++)
                    l_184[i] = 1L;
                if ((((*l_93) &= (((((l_113 != (l_114 = &g_94)) > ((((l_115 != &l_70) != (((*p_54) || (safe_unary_minus_func_int64_t_s(0x3C92AC9E0432CFC9LL))) , (((l_119 = p_54) != ((safe_sub_func_uint32_t_u_u((0x22B2L || (l_126 = ((((safe_lshift_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u(((-1L) > l_108), (*p_53))) < (*p_54)) == l_62), g_7)) , p_54) != p_53) & 0x4768E4F1L))), 0xB90776C5L)) , &g_56)) & g_5[0][1][7]))) && 65535UL) < l_127)) , g_7) == (-1L)) < 4294967295UL)) <= g_2))
                {
                    uint64_t *l_150[6] = {&g_56,&g_56,&g_56,&g_56,&g_56,&g_56};
                    int64_t *l_151 = &l_95[1][1][0];
                    int32_t l_152 = 0x730A75DBL;
                    int32_t *l_154 = (void*)0;
                    int32_t *l_155[10][10][2] = {{{&l_126,&l_96[0].f0},{&l_77,&l_62},{&l_77,&l_96[0].f0},{&l_126,&g_6},{&l_96[0].f0,&l_152},{&g_6,&l_77},{&l_96[0].f0,(void*)0},{(void*)0,&l_78},{(void*)0,&l_152},{&l_126,&l_77}},{{&l_96[0].f0,&l_77},{&l_77,&l_96[0].f0},{&g_7,&l_126},{&g_2,&l_77},{&g_6,&g_6},{&l_62,&l_96[0].f0},{&g_6,&g_6},{(void*)0,&g_6},{&g_7,&g_2},{&g_6,&g_6}},{{(void*)0,&l_77},{&l_62,&g_6},{&l_126,&l_77},{(void*)0,&l_77},{&g_7,&l_78},{&g_6,&l_77},{&l_96[0].f0,&g_6},{&l_126,&g_7},{&g_6,&l_78},{&g_6,&g_2}},{{&l_96[0].f0,&l_152},{(void*)0,&l_152},{&l_78,&g_6},{&l_126,&l_78},{(void*)0,&l_62},{&g_2,&l_96[0].f0},{&l_126,(void*)0},{&l_78,&l_77},{(void*)0,&l_77},{&l_62,&l_78}},{{&l_62,&g_2},{&g_7,&l_96[0].f0},{(void*)0,&l_126},{(void*)0,(void*)0},{&l_96[0].f0,&l_78},{&g_7,(void*)0},{&l_77,&l_78},{&l_96[0].f0,&l_78},{&l_96[0].f0,(void*)0},{&l_77,&l_78}},{{&g_7,&l_77},{&g_7,&l_77},{&g_7,&l_78},{&l_77,(void*)0},{&l_96[0].f0,&l_78},{&l_96[0].f0,&l_78},{&l_77,(void*)0},{&g_7,&l_78},{&l_96[0].f0,(void*)0},{(void*)0,&l_126}},{{(void*)0,&l_96[0].f0},{&g_7,&g_2},{&l_62,&l_78},{&l_62,&l_77},{(void*)0,&l_77},{&l_78,&l_78},{&l_96[0].f0,&l_78},{&g_6,&l_78},{&g_6,(void*)0},{&l_96[0].f0,&g_7}},{{(void*)0,&l_77},{&l_77,&l_77},{&l_62,&l_62},{&l_78,&g_2},{&l_152,&l_77},{(void*)0,(void*)0},{&l_62,(void*)0},{&l_126,(void*)0},{&g_7,&l_96[0].f0},{&g_6,&l_78}},{{&l_96[0].f0,&l_152},{&l_96[0].f0,&l_62},{(void*)0,&l_78},{&l_152,&l_62},{&g_7,&l_78},{&l_78,&l_78},{&g_7,&l_126},{&l_96[0].f0,&g_7},{&l_126,&l_78},{&g_6,(void*)0}},{{&g_7,&l_62},{&l_96[0].f0,(void*)0},{&l_78,&l_62},{(void*)0,&l_77},{&l_78,&g_2},{&l_77,&l_77},{&l_62,&l_96[0].f0},{&g_7,&l_77},{&l_62,&l_152},{&l_96[0].f0,&l_62}}};
                    int i, j, k;
                    g_156 = ((0xF9L ^ ((((*p_53) = (safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(((*l_151) = (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((~((l_139 != ((g_5[0][1][2] > (!(-10L))) , (((safe_add_func_int32_t_s_s(g_56, (safe_mul_func_int16_t_s_s(g_2, 0x086DL)))) && (((((((l_145[1] != (l_147 = ((((0x964217F8L >= l_146) | l_96[0].f1) >= l_108) , &g_80))) != g_6) , g_148) != l_149) , g_2) > g_94) || 0x0FF22B77L)) , l_150[4]))) , l_108)), 7L)), 1L))), l_152)) < l_146), 6)), l_96[0].f1))) || l_152) || 18446744073709551615UL)) & l_153);
                }
                else
                {
                    const uint16_t l_167 = 0x4044L;
                    int32_t l_168 = 0xA79AF8E2L;
                    if (g_7)
                        break;
                    if (g_7)
                    {
                        int32_t *l_157 = (void*)0;
                        int32_t *l_158 = (void*)0;
                        int32_t *l_159 = &l_62;
                        int32_t *l_160 = &l_62;
                        int32_t *l_161 = &l_126;
                        int32_t *l_162[6][9] = {{(void*)0,&g_7,(void*)0,&l_126,(void*)0,&g_7,(void*)0,&g_7,&g_6},{&l_77,&l_77,(void*)0,(void*)0,&l_126,(void*)0,(void*)0,&g_7,&l_96[0].f0},{&g_7,&l_77,&g_6,&g_7,&g_7,&g_6,&l_77,&g_7,&g_2},{&g_6,&l_77,&g_7,&g_7,&l_78,&g_2,&l_96[0].f0,&l_77,(void*)0},{&g_2,&g_2,(void*)0,(void*)0,&g_6,(void*)0,(void*)0,&g_2,&g_2},{(void*)0,(void*)0,&l_78,&l_126,&g_6,&l_96[0].f0,&l_77,&g_6,&l_96[0].f0}};
                        int16_t *l_180 = &g_181;
                        int i, j;
                        g_164++;
                        (*l_159) ^= l_167;
                        l_169 = (l_168 = l_96[0].f1);
                        (*l_160) |= (((((g_156 & l_96[0].f0) && ((safe_mod_func_uint64_t_u_u((g_72 == g_5[0][0][4]), g_72)) , 0x91L)) <= ((*l_180) = (safe_add_func_uint16_t_u_u(l_95[2][5][0], (safe_lshift_func_int16_t_s_s((l_146 | (safe_mod_func_uint64_t_u_u((((l_153 & 0xBE92L) , l_168) >= g_72), 1L))), 12)))))) != l_153) , l_95[1][1][0]);
                    }
                    else
                    {
                        int32_t *l_182 = &l_169;
                        int32_t **l_183 = &l_182;
                        int32_t *l_187 = &l_184[0];
                        int32_t *l_188 = &l_77;
                        int32_t *l_189 = &l_168;
                        int32_t *l_190 = &l_96[0].f0;
                        int32_t *l_191 = (void*)0;
                        int32_t *l_192 = &l_184[0];
                        int32_t *l_193[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_193[i] = &l_62;
                        (*l_183) = l_182;
                        --g_194[7][3];
                    }
                    (**l_209) = (((*l_114) = (l_127 && (safe_add_func_uint64_t_u_u((((l_169 < (safe_sub_func_uint32_t_u_u(g_164, ((void*)0 == &l_62)))) || (((safe_mul_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(l_153, (safe_rshift_func_uint16_t_u_u(((((safe_div_func_int64_t_s_s((((void*)0 != l_209) & (((l_168 , l_167) > g_72) > l_70)), 0x44576A339AD12C72LL)) == (*l_210)) , l_169) != (-1L)), 10)))) | (-6L)), l_169)) ^ g_194[8][0]) & g_56)) & 0xDFL), 7L)))) & 0x56L);
                    for (g_72 = (-14); (g_72 <= 52); g_72 = safe_add_func_uint64_t_u_u(g_72, 1))
                    {
                        g_213[2]--;
                        if (l_169)
                            continue;
                        if ((**l_209))
                            break;
                        g_218[4][0] |= (safe_mul_func_int16_t_s_s(1L, 0xCEF4L));
                    }
                }
                (*l_210) = (safe_mul_func_uint8_t_u_u(((void*)0 == l_114), 0x95L));
                g_224++;
            }
            else
            {
                int32_t *l_229 = &l_78;
                int32_t l_250 = (-9L);
                for (g_80 = (-18); (g_80 != 36); g_80 = safe_add_func_int32_t_s_s(g_80, 9))
                {
                    uint16_t ***l_230 = (void*)0;
                    uint16_t **l_232 = (void*)0;
                    uint16_t ***l_231[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_245 = 2L;
                    uint8_t *l_246 = &l_96[0].f1;
                    int32_t *l_248 = (void*)0;
                    int i;
                    for (l_127 = 2; (l_127 <= 9); l_127 += 1)
                    {
                    }
                    g_233 = (void*)0;
                }
            }
            (*l_251) = &l_96[0];
            l_257 = (g_256 = (void*)0);
            for (g_80 = 0; (g_80 <= 8); g_80 += 1)
            {
                uint8_t l_266 = 7UL;
                int16_t *l_267 = &g_181;
                union U0 l_268 = {0x23L};
                int32_t l_281 = 0x2B63680AL;
                int32_t l_286[8] = {0x0F83735AL,0x0F83735AL,0x0F83735AL,0L,0L,0x0F83735AL,0L,0L};
                uint32_t l_295[7][3] = {{0xFE618443L,0xFE618443L,0xFE618443L},{0xB75E65BEL,0xB75E65BEL,0xB75E65BEL},{0xFE618443L,0xFE618443L,0xFE618443L},{0xB75E65BEL,0xB75E65BEL,0xB75E65BEL},{0xFE618443L,0xFE618443L,0xFE618443L},{0xB75E65BEL,0xB75E65BEL,0xB75E65BEL},{0xFE618443L,0xFE618443L,0xFE618443L}};
                uint8_t *l_330 = &l_266;
                uint8_t *l_370 = &l_266;
                union U1 * const l_377 = &l_96[0];
                int i, j;
                (*l_210) = (-1L);
            }
        }
    }
    else
    {
        uint64_t l_390 = 5UL;
        union U0 l_403[1] = {{0xB1L}};
        int32_t l_404 = 0x7B9D86AEL;
        union U1 l_421 = {-5L};
        int32_t l_422 = 0x343D1233L;
        uint16_t *l_438 = (void*)0;
        int32_t l_442 = 0x21158962L;
        int32_t l_458 = 0x19B8FBCAL;
        int32_t l_459 = 5L;
        int32_t l_460 = 0x9DB34003L;
        int32_t l_462 = 1L;
        uint8_t *l_516[8] = {&l_421.f1,&l_421.f1,&l_421.f1,&l_421.f1,&l_421.f1,&l_421.f1,&l_421.f1,&l_421.f1};
        int32_t l_538 = 0xDF619D96L;
        uint16_t ***l_627 = &g_233;
        union U1 **l_634 = (void*)0;
        int i;
lbl_608:
        for (l_78 = 0; (l_78 == 26); ++l_78)
        {
            const uint64_t **l_406 = (void*)0;
            const uint64_t ***l_405[8][6][5] = {{{&l_406,&l_406,(void*)0,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,(void*)0,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,(void*)0,&l_406}},{{(void*)0,&l_406,&l_406,&l_406,(void*)0},{&l_406,(void*)0,(void*)0,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,(void*)0},{&l_406,(void*)0,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,(void*)0,&l_406,&l_406,&l_406}},{{(void*)0,&l_406,&l_406,&l_406,(void*)0},{&l_406,&l_406,&l_406,(void*)0,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,(void*)0},{&l_406,&l_406,&l_406,&l_406,&l_406}},{{&l_406,&l_406,&l_406,&l_406,(void*)0},{&l_406,&l_406,&l_406,(void*)0,&l_406},{&l_406,&l_406,(void*)0,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406}},{{&l_406,&l_406,&l_406,&l_406,&l_406},{(void*)0,&l_406,(void*)0,&l_406,&l_406},{&l_406,(void*)0,&l_406,(void*)0,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,&l_406,(void*)0,&l_406,&l_406}},{{&l_406,&l_406,&l_406,(void*)0,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,(void*)0,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,(void*)0},{&l_406,&l_406,&l_406,&l_406,&l_406}},{{(void*)0,&l_406,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,(void*)0},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,(void*)0,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406}},{{&l_406,(void*)0,&l_406,&l_406,&l_406},{(void*)0,(void*)0,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,(void*)0},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,&l_406,&l_406,&l_406,&l_406},{&l_406,(void*)0,&l_406,&l_406,&l_406}}};
            int32_t l_410 = 0xC0E27DA5L;
            int32_t l_455 = 0xE10D0315L;
            int32_t l_456 = 7L;
            int32_t l_457 = 0L;
            int32_t l_461 = 0L;
            int32_t *l_492 = &l_340[1];
            int i, j, k;
            for (l_289 = (-21); (l_289 > 29); l_289 = safe_add_func_int16_t_s_s(l_289, 1))
            {
                uint64_t l_387 = 18446744073709551615UL;
                uint64_t l_411 = 18446744073709551615UL;
                int32_t l_412 = 1L;
                int16_t *l_413[6][9][4] = {{{&g_156,(void*)0,&g_282,&g_181},{&g_156,&g_282,&g_181,&g_282},{&g_181,(void*)0,&g_181,(void*)0},{&g_282,&g_181,&g_181,(void*)0},{(void*)0,&g_181,(void*)0,&g_156},{(void*)0,&g_156,(void*)0,&g_282},{(void*)0,&g_282,(void*)0,&g_156},{&g_156,&g_156,(void*)0,&g_282},{(void*)0,(void*)0,(void*)0,&g_282}},{{(void*)0,(void*)0,(void*)0,&g_181},{(void*)0,&g_181,&g_181,&g_156},{&g_282,(void*)0,&g_181,&g_181},{&g_181,&g_156,&g_181,&g_181},{&g_156,&g_156,&g_282,&g_181},{&g_156,&g_282,(void*)0,&g_181},{&g_181,&g_282,&g_282,&g_282},{&g_156,&g_282,&g_282,&g_156},{&g_282,&g_282,&g_181,&g_282}},{{&g_181,&g_156,(void*)0,&g_282},{&g_181,&g_156,&g_282,&g_282},{&g_156,&g_156,&g_282,&g_282},{&g_156,&g_282,&g_181,&g_156},{&g_282,&g_282,&g_181,&g_282},{&g_282,&g_282,(void*)0,&g_181},{&g_282,&g_282,&g_181,&g_181},{(void*)0,&g_156,&g_282,&g_181},{&g_181,&g_156,(void*)0,(void*)0}},{{&g_156,&g_181,(void*)0,&g_181},{&g_181,(void*)0,&g_181,(void*)0},{&g_156,&g_181,&g_282,&g_282},{(void*)0,&g_282,&g_156,(void*)0},{&g_181,&g_282,(void*)0,(void*)0},{&g_181,&g_156,&g_156,&g_282},{(void*)0,(void*)0,&g_282,(void*)0},{&g_156,(void*)0,&g_181,&g_156},{&g_181,&g_282,(void*)0,&g_181}},{{&g_156,&g_156,(void*)0,&g_282},{(void*)0,&g_156,(void*)0,&g_282},{&g_156,&g_181,(void*)0,&g_181},{(void*)0,&g_156,&g_156,(void*)0},{(void*)0,(void*)0,&g_181,&g_181},{&g_282,&g_282,&g_156,&g_282},{&g_181,&g_282,&g_282,(void*)0},{&g_156,&g_181,&g_282,&g_282},{&g_282,&g_181,&g_181,(void*)0}},{{&g_181,&g_282,(void*)0,&g_282},{(void*)0,&g_282,(void*)0,&g_181},{&g_282,(void*)0,&g_282,(void*)0},{(void*)0,&g_156,&g_282,&g_181},{&g_181,&g_181,&g_181,&g_282},{(void*)0,&g_156,(void*)0,&g_282},{&g_282,&g_156,&g_181,&g_181},{&g_156,&g_282,(void*)0,&g_156},{&g_282,(void*)0,&g_282,(void*)0}}};
                int32_t *l_414 = &g_274.f0;
                int8_t l_415 = 0L;
                uint8_t *l_417 = &g_224;
                int32_t l_448 = 0x8121BC73L;
                int32_t l_454[1][8][4] = {{{0xAC009296L,0x127158A5L,0xAC009296L,0xAC009296L},{0x127158A5L,0x127158A5L,0x50F2087BL,0x127158A5L},{0x127158A5L,0xAC009296L,0xAC009296L,0x127158A5L},{0xAC009296L,0x127158A5L,0xAC009296L,0xAC009296L},{0x127158A5L,0x127158A5L,0x50F2087BL,0x127158A5L},{0x127158A5L,0xAC009296L,0xAC009296L,0x127158A5L},{0xAC009296L,0x127158A5L,0xAC009296L,0xAC009296L},{0x127158A5L,0x127158A5L,0x50F2087BL,0x127158A5L}}};
                int32_t **l_467 = (void*)0;
                int32_t **l_468 = &l_414;
                int i, j, k;
                (*l_414) = (((safe_mod_func_int64_t_s_s((l_387 | (l_292 = ((((((((safe_add_func_int16_t_s_s(((g_6 == l_390) || ((safe_rshift_func_uint16_t_u_s(((void*)0 != &l_387), (safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_337 , ((safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_340[1], (safe_rshift_func_uint16_t_u_u(((((l_403[0] , (l_404 ^ l_403[0].f0)) , l_405[6][2][2]) != g_407) > (*g_409)), 10)))), 5)) != 0x0BBEADE7L)), l_390)), l_95[2][2][2])))) ^ l_403[0].f0)), l_403[0].f0)) == l_387) , l_410) & l_411) | l_412) != 1L) <= g_94) ^ 0xB963E05AL))), l_411)) || l_404) == g_224);
                if ((((*l_417) = (((*l_414) &= l_415) >= (!g_163[6][0]))) == ((void*)0 == p_53)))
                {
                    int32_t l_418 = 0L;
                    uint16_t **l_439 = (void*)0;
                    uint16_t *l_440 = &g_213[0];
                    int32_t l_443 = 0x84711216L;
                    int32_t *l_444 = &l_288;
                    (*l_414) = (l_410 >= l_418);
                    (*l_444) |= ((-1L) || (((((safe_mul_func_int16_t_s_s((l_421 , (l_418 = 0x6C16L)), (l_422 = g_274.f0))) || (safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_418, ((*l_71) = (safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_s(((*l_79) = ((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint64_t_u_u(l_61, ((l_440 = l_438) == (((((+(p_54 == p_54)) < 1L) && l_418) , g_284) , (void*)0)))), l_410)), 0L)) == l_418)), l_421.f1))))))), l_442)) <= g_224), 4294967286UL))) & l_443) != (-1L)) , 0x6D82L));
                }
                else
                {
                    uint32_t l_450 = 4294967295UL;
                    int32_t l_453[7][10][3] = {{{1L,0x8544126FL,1L},{(-1L),0x7F132477L,(-1L)},{0x5B6C1743L,(-1L),1L},{1L,0x7F132477L,4L},{0x1F49E84EL,0x8544126FL,(-1L)},{0xFC74E96EL,0x9CA098B2L,0xFC74E96EL},{3L,0xD675A7E4L,0x63CFE64CL},{(-9L),0xECA8B75BL,4L},{1L,0x1F49E84EL,0xD675A7E4L},{9L,0xEDCD0D5EL,(-1L)}},{{1L,(-6L),0L},{(-9L),0x7F132477L,0xBA3C89F3L},{3L,3L,1L},{0xFC74E96EL,1L,9L},{0x1F49E84EL,(-6L),0x63CFE64CL},{1L,0x9CA098B2L,(-1L)},{0x5B6C1743L,0L,(-6L)},{9L,0x7F132477L,0xFC74E96EL},{(-1L),1L,0L},{1L,0xF3EB5AF8L,0x6DC81968L}},{{0x4411FA72L,3L,(-1L)},{9L,(-1L),0x540D96EBL},{0x1F49E84EL,0xD675A7E4L,1L},{0x33EB76F2L,(-1L),(-1L)},{1L,3L,(-6L)},{(-1L),0xF3EB5AF8L,(-1L)},{0x325D4115L,1L,0L},{0x527D49A9L,0x7F132477L,(-1L)},{0x4411FA72L,0L,0L},{0xFC74E96EL,0xECA8B75BL,0x540D96EBL}},{{0x4411FA72L,(-1L),0x63CFE64CL},{0x527D49A9L,(-1L),0x6DC81968L},{0x325D4115L,0x1F49E84EL,1L},{(-1L),0L,0xFC74E96EL},{1L,(-1L),0L},{0x33EB76F2L,0xF3EB5AF8L,0xBA3C89F3L},{0x1F49E84EL,0L,0L},{9L,1L,0xFC74E96EL},{0x4411FA72L,1L,1L},{1L,0xECA8B75BL,0x6DC81968L}},{{(-1L),3L,0x63CFE64CL},{9L,0L,0x540D96EBL},{0x325D4115L,0xD675A7E4L,0L},{0x33EB76F2L,0L,(-1L)},{0L,3L,0L},{(-1L),0xECA8B75BL,(-1L)},{0x1F49E84EL,1L,(-6L)},{0x527D49A9L,1L,(-1L)},{(-1L),0L,1L},{0xFC74E96EL,0xF3EB5AF8L,0x540D96EBL}},{{(-1L),(-1L),(-1L)},{0x527D49A9L,0L,0x6DC81968L},{0x1F49E84EL,0x1F49E84EL,0L},{(-1L),(-1L),0xFC74E96EL},{0L,(-1L),(-6L)},{0x33EB76F2L,0xECA8B75BL,0xBA3C89F3L},{0x325D4115L,0L,(-6L)},{9L,0x7F132477L,0xFC74E96EL},{(-1L),1L,0L},{1L,0xF3EB5AF8L,0x6DC81968L}},{{0x4411FA72L,3L,(-1L)},{9L,(-1L),0x540D96EBL},{0x1F49E84EL,0xD675A7E4L,1L},{0x33EB76F2L,(-1L),(-1L)},{1L,3L,(-6L)},{(-1L),0xF3EB5AF8L,(-1L)},{0x325D4115L,1L,0L},{0x527D49A9L,0x7F132477L,(-1L)},{0x4411FA72L,0L,0L},{0xFC74E96EL,0xECA8B75BL,0x540D96EBL}}};
                    uint32_t l_464[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_464[i] = 0x19E4DCF4L;
                    for (l_61 = 0; (l_61 < 30); l_61 = safe_add_func_int8_t_s_s(l_61, 3))
                    {
                        int32_t *l_447 = &g_274.f0;
                        int32_t *l_449[2];
                        int16_t l_463[6][1] = {{0xB475L},{0x91BCL},{0xB475L},{0x91BCL},{0xB475L},{0x91BCL}};
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_449[i] = &g_274.f0;
                        l_450--;
                        ++l_464[1];
                    }
                }
                (*l_468) = &l_461;
            }
            (*l_492) = ((safe_add_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((&g_148 == &l_79), (~(!((*l_97)--))))), (safe_mul_func_uint16_t_u_u(0x1AA6L, (~((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(g_283, g_285[2][1])), 15)), ((((*p_54)++) ^ (safe_div_func_uint64_t_u_u(((g_194[7][3] > g_490) != (l_96[0] , g_491)), g_6))) ^ 0x0369AEC497999371LL))) < g_284)))))) > l_403[0].f0);
            for (l_292 = 0; (l_292 <= 0); l_292 += 1)
            {
                int32_t **l_493 = &l_492;
                int i, j;
                (*l_493) = &g_285[(l_292 + 1)][(l_292 + 7)];
            }
            return g_255;
        }
        g_285[1][4] = l_462;
        for (g_186 = 0; (g_186 == 9); g_186 = safe_add_func_uint8_t_u_u(g_186, 4))
        {
            int8_t l_503 = 3L;
            int32_t l_524[4];
            int16_t *l_556 = &g_282;
            int64_t l_560 = 1L;
            const uint16_t *l_578 = &l_70;
            const uint16_t **l_577 = &l_578;
            int32_t **l_590 = (void*)0;
            uint64_t l_605 = 0UL;
            union U1 *l_637 = (void*)0;
            union U0 l_664[4][6][5] = {{{{0xFBL},{0x25L},{0xD5L},{-1L},{0x25L}},{{6L},{0xC7L},{0x27L},{0xC7L},{6L}},{{0x25L},{-1L},{0xD5L},{0x25L},{0xFBL}},{{-4L},{1L},{-1L},{0xC7L},{-1L}},{{0xFBL},{0xFBL},{0x3FL},{0xD5L},{0x25L}},{{0x27L},{1L},{0x27L},{0x1AL},{1L}}},{{{0x25L},{0x3FL},{0x3FL},{0x25L},{-1L}},{{-1L},{1L},{-4L},{1L},{-1L}},{{-1L},{0x25L},{0x3FL},{0x3FL},{0x25L}},{{1L},{0x1AL},{0x27L},{1L},{0x27L}},{{0x25L},{0xD5L},{-1L},{0x25L},{0x25L}},{{0x59L},{1L},{0x59L},{0x1AL},{-1L}}},{{{0x25L},{-1L},{0x3FL},{0xD5L},{-1L}},{{1L},{1L},{6L},{1L},{1L}},{{-1L},{0xD5L},{0x3FL},{-1L},{0x25L}},{{-1L},{0x1AL},{0x59L},{1L},{0x59L}},{{0x25L},{0x25L},{-1L},{0xD5L},{0x25L}},{{0x27L},{1L},{0x27L},{0x1AL},{1L}}},{{{0x25L},{0x3FL},{0x3FL},{0x25L},{-1L}},{{-1L},{1L},{-4L},{1L},{-1L}},{{-1L},{0x25L},{0x3FL},{0x3FL},{0x25L}},{{1L},{0x1AL},{0x27L},{1L},{0x27L}},{{0x25L},{0xD5L},{-1L},{0x25L},{0x25L}},{{0x59L},{1L},{0x59L},{0x1AL},{-1L}}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_524[i] = 0x2CB6419FL;
            for (l_390 = 0; (l_390 != 40); l_390 = safe_add_func_uint8_t_u_u(l_390, 5))
            {
                int32_t l_500 = 0xAE724AF6L;
                int32_t l_531 = 0L;
                uint32_t l_533 = 5UL;
                int32_t l_536 = (-8L);
                int32_t l_537[9][9] = {{0x1C628B4EL,0x2468BF4CL,0x8FDF4587L,(-9L),0xC892A783L,(-2L),0xC892A783L,(-9L),0x8FDF4587L},{(-1L),(-1L),0L,0xAD831DE8L,0xF1DDB686L,1L,0x979960EDL,0x1C860114L,0x979960EDL},{0x8FDF4587L,0xD9CC52DDL,0x2468BF4CL,0x2468BF4CL,0xD9CC52DDL,0x8FDF4587L,0x4E6D2AD1L,0x891CE7B1L,(-4L)},{0x1C860114L,1L,0L,4L,(-6L),(-6L),4L,0L,1L},{0xD9CC52DDL,(-2L),0x8FDF4587L,0xC892A783L,(-10L),(-9L),0x4E6D2AD1L,0x4E6D2AD1L,(-9L)},{0L,0L,0x30582363L,0L,0L,0xEC648A5BL,0x979960EDL,(-1L),4L},{(-2L),(-2L),0xC892A783L,4L,0x891CE7B1L,4L,0xC892A783L,(-2L),(-2L)},{0xAD831DE8L,1L,0xF1DDB686L,0L,(-1L),0xEC648A5BL,(-6L),0xEC648A5BL,(-1L)},{(-4L),0xD9CC52DDL,0xD9CC52DDL,(-4L),4L,(-9L),0x1C628B4EL,0x8FDF4587L,(-10L)}};
                uint64_t l_539 = 18446744073709551610UL;
                int64_t *l_559[7] = {&g_163[6][0],&l_95[1][1][0],&l_95[1][1][0],&g_163[6][0],&l_95[1][1][0],&l_95[1][1][0],&g_163[6][0]};
                uint16_t ***l_563[6];
                uint8_t *l_564 = &l_421.f1;
                union U1 l_576 = {0x9FC66C6BL};
                int32_t **l_591 = &g_558[7][5][0];
                union U0 l_602 = {6L};
                uint32_t l_603 = 0xE6C72ABBL;
                int i, j;
                for (i = 0; i < 6; i++)
                    l_563[i] = &g_233;
                for (l_462 = 10; (l_462 <= (-20)); --l_462)
                {
                    int32_t *l_504[6][3][9] = {{{&g_285[2][1],&l_421.f0,(void*)0,&l_421.f0,&g_285[2][1],&l_288,(void*)0,&l_288,&l_500},{&g_6,&l_77,&g_6,&g_285[5][5],&l_459,&l_459,&g_285[5][5],&g_6,&l_77},{(void*)0,&g_285[2][1],(void*)0,&l_340[1],&l_340[1],(void*)0,&g_285[2][1],(void*)0,&g_285[2][1]}},{{&l_339,&g_285[0][6],&g_285[5][5],&g_285[5][5],&g_285[0][6],&l_339,&l_459,&l_339,&g_285[0][6]},{&l_500,&g_285[2][1],&g_285[2][1],&l_500,(void*)0,&l_288,(void*)0,&l_500,&g_285[2][1]},{&l_77,&l_77,&l_459,&g_285[0][6],&l_292,&g_285[0][6],&l_459,&l_77,&l_77}},{{&g_285[2][1],&l_500,(void*)0,&l_288,(void*)0,&l_500,&g_285[2][1],&g_285[2][1],&l_500},{&g_285[0][6],&l_339,&l_459,&l_339,&g_285[0][6],&g_285[5][5],&g_285[5][5],&g_285[0][6],&l_339},{&g_285[2][1],(void*)0,&g_285[2][1],(void*)0,&l_340[1],&l_340[1],(void*)0,&g_285[2][1],(void*)0}},{{&l_77,&g_6,&g_285[5][5],&l_459,&l_459,&g_285[5][5],&g_6,&l_77,&g_6},{&l_500,&l_288,(void*)0,(void*)0,&l_288,&l_500,&l_340[1],&l_500,&l_288},{&l_339,&g_6,&g_6,&l_339,&l_77,&g_285[0][6],&l_77,&l_339,&g_6}},{{(void*)0,(void*)0,&l_340[1],&l_288,&l_421.f0,&l_288,&l_340[1],(void*)0,(void*)0},{&g_6,&l_339,&l_77,&g_285[0][6],&l_77,&l_339,&g_6,&g_6,&l_339},{&l_288,&l_500,&l_340[1],&l_500,&l_288,(void*)0,(void*)0,&l_288,&l_500}},{{&g_6,&l_77,&g_6,&g_285[5][5],&l_459,&l_459,&g_285[5][5],&g_6,&l_77},{(void*)0,&g_285[2][1],(void*)0,&l_340[1],&l_340[1],(void*)0,&g_285[2][1],(void*)0,&g_285[2][1]},{&l_339,&g_285[0][6],&g_285[5][5],&g_285[5][5],&g_285[0][6],&l_339,&l_459,&l_339,&g_285[0][6]}}};
                    uint32_t l_505 = 18446744073709551615UL;
                    int i, j, k;
                    l_505 = (l_500 && (safe_lshift_func_uint8_t_u_u(l_503, 4)));
                    return (*l_380);
                }
                for (l_442 = 2; (l_442 >= 0); l_442 -= 1)
                {
                    int32_t *l_515 = &l_422;
                    int16_t *l_517 = &g_181;
                    int64_t *l_518 = &g_163[3][1];
                    int32_t l_523 = 0x27D33028L;
                    int32_t *l_528 = &l_338;
                    int32_t *l_529 = &l_524[1];
                    int32_t *l_530 = &l_62;
                    int32_t *l_532[9] = {&l_289,(void*)0,&l_289,&l_289,(void*)0,&l_289,&l_289,(void*)0,&l_289};
                    int i, j;
                    if (((g_213[l_442] , (((((*l_518) = ((*l_380) , (safe_mul_func_int16_t_s_s(((*l_517) = ((((l_92 != ((((void*)0 == &g_181) | (safe_rshift_func_int8_t_s_s((l_510[3][9] == ((safe_add_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((((*l_515) = g_218[l_442][(l_442 + 1)]) < l_503), ((*l_93) ^= l_503))) , l_422) >= g_278), 0x38L)) , &l_503)), 3))) , l_516[3])) != (**g_408)) ^ 4294967295UL) & 0x4ACB6692L)), g_213[2])))) ^ (*p_53)) , &g_408) == g_519)) , (-1L)))
                    {
                        int32_t *l_522[9][9] = {{&l_442,&l_77,&g_7,&g_7,&l_77,&l_442,&l_338,&l_77,&l_338},{&l_500,&l_338,(void*)0,(void*)0,&l_338,&l_500,&l_340[1],&l_338,&l_340[1]},{&l_442,&l_77,&g_7,&g_7,&l_77,&l_442,&l_338,&l_77,&l_442},{&l_338,(void*)0,(void*)0,(void*)0,(void*)0,&l_338,(void*)0,(void*)0,(void*)0},{&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&l_442,&g_7,&l_442},{&l_338,(void*)0,(void*)0,(void*)0,(void*)0,&l_338,(void*)0,(void*)0,(void*)0},{&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&l_442,&g_7,&l_442},{&l_338,(void*)0,(void*)0,(void*)0,(void*)0,&l_338,(void*)0,(void*)0,(void*)0},{&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&l_442,&g_7,&l_442}};
                        uint32_t l_525 = 0x54933AEBL;
                        int i, j;
                        l_525--;
                    }
                    else
                    {
                        if (l_403[0].f0)
                            break;
                    }
                    (*l_515) &= l_500;
                    l_533++;
                    ++l_539;
                }
                if (g_7)
                    continue;
                if ((((((l_537[3][2] = l_459) | (safe_mod_func_uint8_t_u_u(((*g_273) , (safe_lshift_func_int16_t_s_s(((*l_556) = ((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_div_func_int8_t_s_s(0x90L, 0x7FL)) && (((0x03L <= (safe_mul_func_uint8_t_u_u(l_421.f0, (((*l_97) = ((l_560 = (l_524[3] = (((void*)0 == l_556) || (g_557[0][5][1] == &g_558[6][3][0])))) ^ l_340[0])) >= 1UL)))) > 1UL) >= 0xE9AFL)) > 0x445D952BL), 1)), l_422)) , 0L) & g_282) || 18446744073709551615UL)), 4))), g_285[2][1]))) ^ l_337) < 0x6DL) > 65535UL))
                {
                    uint64_t l_592 = 18446744073709551608UL;
                    int32_t l_595 = 1L;
                    int64_t l_596 = 0L;
                    int32_t l_598[7][2][8] = {{{0x0D5EB446L,0x7253B93BL,0x732FF020L,0x240C986CL,0x732FF020L,0x7253B93BL,0x0D5EB446L,1L},{0x02F769F2L,1L,(-10L),1L,0xA9A539BBL,0x7BC3E05FL,0x2095CAE0L,0x732FF020L}},{{0xC77D938DL,0xF2229DACL,0x88961CDDL,0L,0xA9A539BBL,0xC77D938DL,(-1L),0x240C986CL},{0x02F769F2L,1L,1L,0x732FF020L,0x732FF020L,1L,1L,0x02F769F2L}},{{0x0D5EB446L,0x2095CAE0L,(-1L),(-10L),0x7253B93BL,(-1L),0x732FF020L,(-1L)},{(-3L),0x7253B93BL,1L,0x88961CDDL,(-10L),(-1L),0x0D5EB446L,0xC77D938DL}},{{0x81740385L,0x2095CAE0L,0xC77D938DL,1L,(-1L),1L,0xC77D938DL,0x2095CAE0L},{0xC77D938DL,1L,6L,(-1L),0x6019CDC9L,0xC77D938DL,0xF2229DACL,0x88961CDDL}},{{(-8L),0xF2229DACL,1L,1L,0xC77D938DL,0x7BC3E05FL,0xF2229DACL,0x02F769F2L},{0L,1L,6L,0xC77D938DL,0x7253B93BL,0x7253B93BL,0xC77D938DL,6L}},{{0x7253B93BL,0x7253B93BL,0xC77D938DL,6L,1L,0L,0x0D5EB446L,(-10L)},{0x7BC3E05FL,0xC77D938DL,1L,1L,0xF2229DACL,(-8L),0x732FF020L,(-10L)}},{{0xC77D938DL,0x6019CDC9L,(-1L),6L,1L,0xC77D938DL,1L,6L},{1L,(-1L),1L,0xC77D938DL,0x2095CAE0L,0x81740385L,(-1L),0x02F769F2L}}};
                    uint32_t l_599 = 9UL;
                    int i, j, k;
                    if ((0x2CD51794D8F8F363LL | (safe_sub_func_int8_t_s_s(((*l_93) ^= (l_563[2] == l_563[3])), (l_524[3] = ((l_564 = &g_224) != (void*)0))))))
                    {
                        uint16_t l_573 = 0x288CL;
                        const uint16_t ***l_579 = &l_577;
                        int32_t *l_593[9] = {&l_458,&l_458,&l_62,&l_458,&l_458,&l_62,&l_458,&l_458,&l_62};
                        int i;
                        l_524[3] = (safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(0x8769C75DL, (l_573 , ((l_503 & ((safe_sub_func_int64_t_s_s((g_194[6][4] <= ((1UL || (((((*l_579) = (l_576 , l_577)) == (void*)0) , (safe_add_func_int8_t_s_s((((l_531 &= ((((g_163[6][0] = ((safe_add_func_int32_t_s_s((((((safe_rshift_func_uint8_t_u_s(((*l_564)++), 6)) & (((safe_rshift_func_uint8_t_u_u((((l_591 = l_590) == &g_558[3][6][0]) && l_337), l_573)) , l_95[0][2][1]) || l_503)) < l_294) , l_421.f0) & l_573), l_592)) , g_194[3][9])) <= l_403[0].f0) & (-1L)) | g_284)) != 0xD090L) >= l_292), 0x60L))) <= 1UL)) >= l_573)), g_255.f0)) || l_539)) & l_458)))), 0xB027L)) >= l_459), l_421.f1)), g_223));
                        l_599--;
                        return l_602;
                    }
                    else
                    {
                        (*l_591) = &l_462;
                    }
                    l_603 = l_596;
                }
                else
                {
                    int32_t *l_604[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_604[i] = &l_460;
                    l_605--;
                    for (g_185 = 1; (g_185 >= 0); g_185 -= 1)
                    {
                        if (l_70)
                            goto lbl_608;
                    }
                }
            }
            for (g_80 = 0; (g_80 <= 1); g_80 += 1)
            {
                union U0 **l_609 = &g_256;
                int32_t *l_611[1][7];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_611[i][j] = &l_294;
                }
                (*l_609) = &g_255;
                l_610 = &l_340[g_80];
                l_336 |= l_340[g_80];
                (*l_610) = (-5L);
            }
            if ((((*g_520) == ((&g_256 == ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_uint8_t_u((l_524[3] & 1UL))) > (2UL && (safe_mod_func_int16_t_s_s((l_623[0] , 0L), (safe_rshift_func_int16_t_s_s(((&g_218[7][3] != &g_218[5][3]) & l_422), 4)))))), 0x305FL)), g_186)), g_626)) || (**g_408)), g_274.f1)) , &l_380)) , p_54)) == g_255.f0))
            {
                union U1 **l_630 = &g_273;
                union U1 ***l_631[3];
                int32_t l_638 = 0x288FBCE6L;
                int32_t *l_639[1][10][6] = {{{&l_294,&l_294,&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294,&l_294,&l_294},{&l_294,&l_294,&l_294,&l_294,&l_294,&l_294}}};
                uint64_t ****l_656 = (void*)0;
                uint64_t *****l_657[8] = {&l_656,&l_656,&l_656,&l_656,&l_656,&l_656,&l_656,&l_656};
                uint64_t ** const ***l_661 = &g_659;
                uint32_t l_662 = 0x16ABF186L;
                int32_t **l_663 = &l_610;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_631[i] = &l_630;
                l_524[3] = (l_627 == &g_233);
                l_77 ^= ((safe_add_func_uint32_t_u_u(g_626, (((l_633 = (g_632 = l_630)) == ((*g_273) , l_634)) == ((l_524[3] == (((((*g_409) = (safe_sub_func_uint32_t_u_u(l_422, (((((*l_97) ^= (l_637 != (*l_630))) , 2L) != 0x0BL) == g_156)))) > g_379) , l_442) == l_638)) != 0xD535CE8056A8F8FBLL)))) == l_638);
                l_524[1] = (((void*)0 != &g_273) || ((g_194[8][5] , l_442) , ((!(safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_421.f1, l_442)), (!((safe_mod_func_uint16_t_u_u(((*l_71) ^= (safe_lshift_func_uint16_t_u_s((((*l_97) = ((safe_mod_func_int16_t_s_s((g_626 = (safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s(((((l_658 = l_656) == ((*l_661) = g_659)) != (((((l_421.f0 ^ l_421.f1) || l_597[2][1]) , l_662) , (void*)0) == (void*)0)) <= l_422), 65529UL)) != l_421.f1), l_460))), (-1L))) , g_181)) > l_459), 11))), g_164)) | l_390))))) && l_421.f0)));
                (*l_663) = &l_442;
            }
            else
            {
                int16_t l_676 = 1L;
                union U0 l_719 = {0x40L};
                if ((l_664[1][5][2] , (!((0x842EFFE01B98B93DLL == ((****g_659) > g_5[0][1][5])) <= (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(1L, 65527UL)), l_338))))))
                {
                    int32_t l_678 = 0x99E42E27L;
                    union U1 *l_693[8][2][7] = {{{&g_274,&g_274,&g_274,&g_274,&g_274,&g_274,&g_274},{&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0]}},{{&g_274,&g_274,&g_274,&g_274,&g_274,&g_274,&g_274},{&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0]}},{{&g_274,&g_274,&g_274,&g_274,&g_274,&g_274,&g_274},{&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0]}},{{&g_274,&g_274,&g_274,&g_274,&g_274,&g_274,&g_274},{&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0]}},{{&g_274,&g_274,&g_274,&g_274,&g_274,&g_274,&g_274},{&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0]}},{{&g_274,&g_274,&g_274,&g_274,&g_274,&g_274,&g_274},{&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0]}},{{&g_274,&g_274,&g_274,&g_274,&g_274,&g_274,&g_274},{&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0]}},{{&g_274,&g_274,&g_274,&g_274,&g_274,&g_274,&g_274},{&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0],&l_96[0]}}};
                    int32_t l_702[4][9][7] = {{{1L,0x2E59F9E9L,0x22545CF3L,0xD18D3937L,0x353D9A90L,0xBA185487L,0x353D9A90L},{4L,0xFC633191L,0xFC633191L,4L,0x7C4F90A1L,(-1L),1L},{1L,0xB33B6DACL,(-8L),1L,0x8B79777DL,1L,0xB33B6DACL},{1L,(-3L),0x2800AA4DL,0xD6DCB9A4L,1L,(-3L),0x2B5CF9A4L},{0x22545CF3L,0x98D50AFFL,(-10L),3L,(-8L),0x0A642C3DL,0x3993A93CL},{1L,0xB1EFEC79L,0xCDA1ADD4L,(-2L),0xB33B6DACL,4L,0x98D50AFFL},{0L,0x2906BCD9L,0xA19035F3L,(-10L),0xB1EFEC79L,0x67A2D062L,1L},{0x8B79777DL,1L,0xA19035F3L,0x353D9A90L,4L,0x8B79777DL,0x7F609D3EL},{(-8L),0xA19035F3L,0xCDA1ADD4L,(-1L),0xBA185487L,0xBA185487L,(-1L)}},{{(-10L),0x1A682D99L,(-10L),0x2B5CF9A4L,(-1L),0x22545CF3L,1L},{3L,0xEED938C0L,(-1L),1L,1L,0xA19035F3L,0x98D50AFFL},{0x89093C3EL,4L,1L,(-1L),0x3993A93CL,0x22545CF3L,0x2906BCD9L},{0xFC633191L,1L,0x2906BCD9L,0x353D9A90L,0xFBE019ABL,0xBA185487L,(-3L)},{0x736FACC7L,0x388F006EL,0x7C4F90A1L,0xFBE019ABL,0xD6DCB9A4L,0x8B79777DL,0x388F006EL},{(-10L),0x98D50AFFL,0x22545CF3L,4L,0x2906BCD9L,0x67A2D062L,1L},{(-8L),0x98D50AFFL,0x2E59F9E9L,0xCDA1ADD4L,1L,4L,0x3993A93CL},{1L,0x388F006EL,3L,0x0A642C3DL,0xB33B6DACL,0x0A642C3DL,3L},{1L,1L,0xA19035F3L,0x2E59F9E9L,0x388F006EL,(-3L),0x8B79777DL}},{{0x8B79777DL,4L,0x353D9A90L,0xA19035F3L,1L,0x8B79777DL,(-1L)},{0x22545CF3L,0xEED938C0L,(-8L),(-1L),0x388F006EL,0x2800AA4DL,0xB33B6DACL},{0xFBE019ABL,0x1A682D99L,0x2E59F9E9L,1L,0xB33B6DACL,(-8L),1L},{(-8L),0xA19035F3L,(-8L),0x67A2D062L,1L,0x89093C3EL,3L},{0xFC633191L,1L,1L,(-7L),0x2906BCD9L,(-8L),1L},{0xFC633191L,0x2906BCD9L,(-1L),0xA19035F3L,0xD6DCB9A4L,0xBA185487L,0x2B5CF9A4L},{(-8L),0xB1EFEC79L,1L,0xFBE019ABL,0xFBE019ABL,1L,0xB1EFEC79L},{0xFBE019ABL,0x98D50AFFL,(-1L),(-2L),0x3993A93CL,0x2B5CF9A4L,1L},{0x22545CF3L,3L,0xFBE019ABL,(-8L),1L,0x0A642C3DL,0x2906BCD9L}},{{0x8B79777DL,0xBA185487L,3L,(-2L),(-1L),1L,0x736FACC7L},{1L,0x2906BCD9L,0x353D9A90L,0xFBE019ABL,0xBA185487L,(-3L),1L},{1L,1L,0x89093C3EL,0xA19035F3L,4L,1L,0xB33B6DACL},{(-8L),0xEED938C0L,0xCDA1ADD4L,(-7L),0xB1EFEC79L,0x388F006EL,0xBA185487L},{(-2L),(-1L),0x0A642C3DL,0xCDA1ADD4L,0xBA185487L,0x7C4F90A1L,(-10L)},{(-1L),0x2906BCD9L,1L,0x98D50AFFL,1L,0x2906BCD9L,(-1L)},{0x2906BCD9L,0x89093C3EL,0x87D3D02BL,0x2800AA4DL,0x2B5CF9A4L,1L,0x67A2D062L},{(-1L),(-3L),1L,0L,0x0A642C3DL,(-1L),0x736FACC7L},{0xD18D3937L,(-8L),0x87D3D02BL,1L,1L,(-10L),(-8L)}}};
                    int i, j, k;
                    if (((safe_sub_func_uint64_t_u_u(l_403[0].f0, l_459)) == ((safe_add_func_int64_t_s_s(((void*)0 != &g_273), (!(+l_676)))) == l_676)))
                    {
                        int32_t *l_679 = &l_340[1];
                        (*l_679) = (l_678 &= (safe_unary_minus_func_int64_t_s(0x179408B1BF8A3C5CLL)));
                    }
                    else
                    {
                        uint16_t *****l_681 = (void*)0;
                        uint16_t ****l_683 = &l_627;
                        uint16_t *****l_682[8] = {&l_683,&l_683,&l_683,&l_683,&l_683,&l_683,&l_683,&l_683};
                        int32_t l_687 = 0xE24DDCBBL;
                        int32_t *l_688 = &l_289;
                        union U1 **l_694 = &l_693[5][0][0];
                        int i;
                        if (l_680)
                            break;
                        l_684 = (void*)0;
                        (*l_688) ^= l_687;
                        l_702[2][3][3] ^= (((safe_mod_func_uint16_t_u_u(((((*p_53) != l_676) < (((void*)0 != &g_659) <= ((safe_rshift_func_int8_t_s_u((((*g_632) != ((*l_694) = l_693[0][0][2])) , (safe_sub_func_int16_t_s_s(((g_194[7][3] <= (!((*l_79) |= ((***l_685) &= (safe_lshift_func_uint16_t_u_s((*l_688), 4)))))) < (!l_678)), l_678))), g_56)) | g_255.f0))) , l_676), l_701)) , 9L) & 0xA669L);
                    }
                }
                else
                {
                    int8_t l_703 = (-1L);
                    int32_t *l_704[7];
                    int32_t **l_705 = &l_610;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_704[i] = &l_293;
                    if (l_703)
                        break;
                    (*l_705) = l_704[6];
                    (*l_610) ^= (!l_538);
                    for (l_78 = 0; (l_78 < (-21)); l_78--)
                    {
                        uint32_t l_717[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_717[i] = 4294967289UL;
                        (*l_610) = l_462;
                        l_294 |= ((*l_610) = (0x50220C45L ^ (((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((*l_610), (safe_sub_func_int8_t_s_s((0x0A986CEEL == 0x56152CF9L), ((*g_273) , ((*l_93) = (*l_610))))))), ((safe_sub_func_uint64_t_u_u(l_717[1], g_718)) & (-1L)))) || l_676) | 7L)));
                        (**l_705) &= l_676;
                    }
                }
                return l_719;
            }
        }
    }
    (*l_740) = ((*l_739) = (safe_lshift_func_int8_t_s_u(((((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(g_80, (safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((*l_380) , 0UL), ((****l_684) = (l_70 || (safe_mul_func_uint8_t_u_u(((((4294967295UL != ((*l_97) = ((**g_408) ^ 1L))) ^ (((safe_lshift_func_uint8_t_u_u(((*l_734) &= 1UL), ((*l_737) = (((((safe_lshift_func_uint8_t_u_u(0UL, 7)) < g_72) == l_96[0].f1) ^ g_626) ^ (-2L))))) | l_287) , l_597[0][0])) , (void*)0) != (void*)0), g_283)))))) == 0x3DE8404E8A13D2E9LL), 1)))), l_738)) < g_194[3][6]) > l_78) == (*p_54)), 3)));
    l_742 = &l_337;
    l_776 = ((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((((l_747[1] == (safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((!((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((6UL | (safe_mod_func_int16_t_s_s((0xCD0AF3C5L <= (-1L)), ((safe_add_func_int32_t_s_s(((safe_div_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((*p_53) || (safe_div_func_uint32_t_u_u(4294967286UL, ((((safe_sub_func_int64_t_s_s((((*l_773) = &l_79) == (l_774 = (void*)0)), 0x97AF1175B0584571LL)) != (*l_740)) >= g_194[5][8]) && (*l_739))))), 0UL)) , (*l_740)), (*l_740))) | l_775), (*l_739))) || (*l_740))))) == g_194[6][5]), (*l_740))), 4294967291UL)), (*l_740))) , (*l_739))), 8UL)), (*l_742))) <= 0x2815092579D8EB88LL), 0x6A5A2B24L))) < g_218[1][3]) <= (*l_740)), (*l_740))), 5)) | (*l_739)) ^ 1UL) , (void*)0);
    return (*l_380);
}







static uint32_t func_59(uint32_t p_60)
{
    return g_7;
}







static const uint16_t func_65(union U1 p_66, int32_t p_67, int8_t p_68, uint16_t p_69)
{
    return p_66.f1;
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
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_27[i], "g_27[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_163[i][j], "g_163[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_194[i][j], "g_194[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_213[i], "g_213[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_218[i][j], "g_218[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_255.f0, "g_255.f0", print_hash_value);
    transparent_crc(g_274.f1, "g_274.f1", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_285[i][j], "g_285[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_718, "g_718", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_857.f0, "g_857.f0", print_hash_value);
    transparent_crc(g_857.f1, "g_857.f1", print_hash_value);
    transparent_crc(g_1064, "g_1064", print_hash_value);
    transparent_crc(g_1088, "g_1088", print_hash_value);
    transparent_crc(g_1345, "g_1345", print_hash_value);
    transparent_crc(g_1390, "g_1390", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1408[i][j][k], "g_1408[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1508, "g_1508", print_hash_value);
    transparent_crc(g_1675, "g_1675", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
