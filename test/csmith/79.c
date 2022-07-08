// RUN: %clang -mllvm -test-pssa-lowering -O3 %s -o %t && %t | FileCheck %s
// CHECK: checksum = 2D90892D
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
   const signed f0 : 6;
   unsigned f1 : 5;
   unsigned f2 : 20;
};

struct S1 {
   int8_t f0;
   const uint32_t f1;
   const uint8_t f2;
   int32_t f3;
   int32_t f4;
   uint32_t f5;
   int64_t f6;
   uint64_t f7;
};

union U2 {
   const int8_t f0;
};

union U3 {
   uint64_t f0;
   int8_t * f1;
   const int32_t f2;
   const uint64_t f3;
};

union U4 {
   int8_t f0;
   signed f1 : 29;
   uint8_t f2;
   const int8_t f3;
   int8_t f4;
};

union U5 {
   const int64_t f0;
   int32_t f1;
   const int8_t f2;
};


static const int32_t g_7 = 0x8A9017CAL;
static const int32_t *g_6 = &g_7;
static int32_t g_14[3][5][6] = {{{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL},{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL},{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL},{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL},{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL}},{{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL},{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL},{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL},{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL},{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL}},{{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL},{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL},{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL},{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL},{0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL,0xDC6B79DFL}}};
static int32_t *g_13 = &g_14[2][3][1];
static const int8_t g_62 = 0L;
static uint8_t g_84 = 1UL;
static uint64_t g_108 = 18446744073709551615UL;
static uint8_t g_109 = 0x92L;
static int16_t g_111 = 1L;
static uint16_t g_114 = 5UL;
static int8_t g_117 = 3L;
static union U4 g_122 = {0xAEL};
static union U2 g_132 = {0x59L};
static uint32_t g_142[10][8][3] = {{{0x684A2D25L,0xA2FE6578L,8UL},{0xB7A7163AL,0x03213856L,0xB7A7163AL},{1UL,0xDFF55CBBL,8UL},{0xE99D4396L,0xEDE604A3L,4294967294UL},{6UL,0xDFF55CBBL,0x684A2D25L},{4294967294UL,0x03213856L,0x2435F733L},{6UL,0xA2FE6578L,6UL},{0xE99D4396L,0xEFA0937DL,0x2435F733L}},{{1UL,5UL,0x684A2D25L},{0xB7A7163AL,0xEFA0937DL,4294967294UL},{0x684A2D25L,0xA2FE6578L,8UL},{0xB7A7163AL,0x03213856L,0xB7A7163AL},{1UL,0xDFF55CBBL,8UL},{0xE99D4396L,0xEDE604A3L,4294967294UL},{6UL,0xDFF55CBBL,0x684A2D25L},{4294967294UL,0x03213856L,0x2435F733L}},{{6UL,0xA2FE6578L,6UL},{0xE99D4396L,0xEFA0937DL,0x2435F733L},{1UL,5UL,0x684A2D25L},{0xB7A7163AL,0xEFA0937DL,4294967294UL},{0x684A2D25L,0xA2FE6578L,8UL},{0xB7A7163AL,0x03213856L,0xB7A7163AL},{1UL,0xDFF55CBBL,8UL},{0xE99D4396L,0xEDE604A3L,4294967294UL}},{{6UL,0xDFF55CBBL,0x684A2D25L},{4294967294UL,0x03213856L,0x2435F733L},{6UL,0xA2FE6578L,6UL},{0xE99D4396L,0xEFA0937DL,0x2435F733L},{1UL,5UL,0x684A2D25L},{0xB7A7163AL,0xEFA0937DL,4294967294UL},{0x684A2D25L,0xA2FE6578L,8UL},{0xB7A7163AL,0x03213856L,0xB7A7163AL}},{{1UL,0xDFF55CBBL,8UL},{0xE99D4396L,0xEDE604A3L,4294967294UL},{6UL,0xDFF55CBBL,0x684A2D25L},{4294967294UL,0x03213856L,0x2435F733L},{6UL,0xA2FE6578L,6UL},{0xE99D4396L,0xEFA0937DL,0x2435F733L},{1UL,5UL,0x684A2D25L},{0xB7A7163AL,0xEFA0937DL,4294967294UL}},{{0x684A2D25L,0xA2FE6578L,8UL},{0xB7A7163AL,0x03213856L,0xB7A7163AL},{1UL,0xDFF55CBBL,8UL},{0xE99D4396L,0xEDE604A3L,4294967294UL},{6UL,0xDFF55CBBL,0x684A2D25L},{4294967294UL,0x03213856L,0x2435F733L},{6UL,0xA2FE6578L,6UL},{0xE99D4396L,0xEFA0937DL,0x2435F733L}},{{1UL,5UL,0x684A2D25L},{0x24A64B92L,4294967295UL,0xD1409FA7L},{0x016CB793L,1UL,0x5461A87EL},{0x24A64B92L,0x59864EC0L,0x24A64B92L},{0x676C2307L,6UL,0x5461A87EL},{2UL,0xCFE5A8EEL,0xD1409FA7L},{0xF9E78BCBL,6UL,0x016CB793L},{0xD1409FA7L,0x59864EC0L,3UL}},{{0xF9E78BCBL,1UL,0xF9E78BCBL},{2UL,4294967295UL,3UL},{0x676C2307L,0x684A2D25L,0x016CB793L},{0x24A64B92L,4294967295UL,0xD1409FA7L},{0x016CB793L,1UL,0x5461A87EL},{0x24A64B92L,0x59864EC0L,0x24A64B92L},{0x676C2307L,6UL,0x5461A87EL},{2UL,0xCFE5A8EEL,0xD1409FA7L}},{{0xF9E78BCBL,6UL,0x016CB793L},{0xD1409FA7L,0x59864EC0L,3UL},{0xF9E78BCBL,1UL,0xF9E78BCBL},{2UL,4294967295UL,3UL},{0x676C2307L,0x684A2D25L,0x016CB793L},{0x24A64B92L,4294967295UL,0xD1409FA7L},{0x016CB793L,1UL,0x5461A87EL},{0x24A64B92L,0x59864EC0L,0x24A64B92L}},{{0x676C2307L,6UL,0x5461A87EL},{2UL,0xCFE5A8EEL,0xD1409FA7L},{0xF9E78BCBL,6UL,0x016CB793L},{0xD1409FA7L,0x59864EC0L,3UL},{0xF9E78BCBL,1UL,0xF9E78BCBL},{2UL,4294967295UL,3UL},{0x676C2307L,0x684A2D25L,0x016CB793L},{0x24A64B92L,4294967295UL,0xD1409FA7L}}};
static uint16_t g_187 = 0xB9B8L;
static uint16_t g_191 = 0x17F2L;
static uint64_t g_205 = 9UL;
static int16_t g_218[8] = {0x61E4L,0x61E4L,0x61E4L,0x61E4L,0x61E4L,0x61E4L,0x61E4L,0x61E4L};
static int8_t *g_220 = &g_122.f4;
static int8_t **g_219 = &g_220;
static int32_t g_222 = 0x60F172A5L;
static uint8_t g_238 = 0xFFL;
static uint16_t g_244 = 0x9810L;
static uint64_t g_274 = 4UL;
static uint64_t g_288 = 1UL;
static int8_t ***g_317 = &g_219;
static int8_t ****g_316 = &g_317;
static union U4 g_320 = {0xF7L};
static int32_t **g_329[9] = {&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13};
static int32_t ***g_328 = &g_329[2];
static uint8_t *g_333 = &g_122.f2;
static uint8_t **g_332 = &g_333;
static int64_t g_374 = (-4L);
static struct S1 g_389 = {0xDFL,1UL,0x5BL,0xFF3FBB3DL,0x549262EDL,18446744073709551610UL,0L,18446744073709551609UL};
static struct S1 *g_388[5] = {&g_389,&g_389,&g_389,&g_389,&g_389};
static struct S1 g_392[9] = {{0xA8L,0UL,0UL,-1L,0x02FF7501L,18446744073709551615UL,1L,18446744073709551615UL},{0xA8L,0UL,0UL,-1L,0x02FF7501L,18446744073709551615UL,1L,18446744073709551615UL},{0xA8L,0UL,0UL,-1L,0x02FF7501L,18446744073709551615UL,1L,18446744073709551615UL},{0xA8L,0UL,0UL,-1L,0x02FF7501L,18446744073709551615UL,1L,18446744073709551615UL},{0xA8L,0UL,0UL,-1L,0x02FF7501L,18446744073709551615UL,1L,18446744073709551615UL},{0xA8L,0UL,0UL,-1L,0x02FF7501L,18446744073709551615UL,1L,18446744073709551615UL},{0xA8L,0UL,0UL,-1L,0x02FF7501L,18446744073709551615UL,1L,18446744073709551615UL},{0xA8L,0UL,0UL,-1L,0x02FF7501L,18446744073709551615UL,1L,18446744073709551615UL},{0xA8L,0UL,0UL,-1L,0x02FF7501L,18446744073709551615UL,1L,18446744073709551615UL}};
static struct S0 g_397 = {0,4,689};
static union U3 g_444 = {18446744073709551612UL};
static union U5 g_460[3] = {{0L},{0L},{0L}};
static int32_t g_500 = 0L;
static union U4 **g_539 = (void*)0;
static union U4 ***g_538[8][5] = {{&g_539,&g_539,&g_539,&g_539,(void*)0},{&g_539,&g_539,&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539,&g_539,(void*)0},{&g_539,&g_539,&g_539,&g_539,&g_539},{(void*)0,&g_539,&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539,&g_539,&g_539},{(void*)0,&g_539,&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539,&g_539,&g_539}};
static int8_t g_571 = 0L;
static int8_t * const *g_572 = (void*)0;
static int8_t * const *g_573 = &g_220;
static int8_t g_589 = 0x61L;
static int32_t g_652[7] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
static union U5 g_658 = {0x13BFFDB75CEB6804LL};
static int16_t *g_678 = &g_218[3];
static uint8_t g_728[2][2] = {{0xDCL,0xDCL},{0xDCL,0xDCL}};
static uint8_t ***g_786 = &g_332;
static uint8_t ****g_785[5] = {&g_786,&g_786,&g_786,&g_786,&g_786};
static uint8_t *****g_784 = &g_785[2];
static int64_t g_801[10] = {0xD938F09C7C98162FLL,0xD938F09C7C98162FLL,0xD938F09C7C98162FLL,0xD938F09C7C98162FLL,0xD938F09C7C98162FLL,0xD938F09C7C98162FLL,0xD938F09C7C98162FLL,0xD938F09C7C98162FLL,0xD938F09C7C98162FLL,0xD938F09C7C98162FLL};
static union U3 g_835 = {18446744073709551606UL};
static union U5 g_838 = {0xF35D777A62CB1F20LL};
static union U5 *g_837 = &g_838;
static int32_t g_1007[1] = {1L};
static uint8_t g_1040[10] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static int32_t g_1220 = 0L;
static union U2 *g_1226 = (void*)0;
static union U2 g_1228 = {0x62L};
static union U2 *g_1227 = &g_1228;
static struct S0 g_1335 = {2,2,431};
static struct S0 g_1337 = {4,0,582};
static struct S0 *g_1338[3][3][1] = {{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}}};
static int16_t g_1389 = (-4L);
static uint64_t g_1452 = 9UL;
static struct S0 * const *g_1466[10][1] = {{&g_1338[1][1][0]},{&g_1338[2][0][0]},{(void*)0},{(void*)0},{&g_1338[2][0][0]},{&g_1338[1][1][0]},{&g_1338[2][0][0]},{(void*)0},{(void*)0},{&g_1338[2][0][0]}};
static struct S0 * const **g_1465 = &g_1466[6][0];
static int32_t g_1495[6][1][1] = {{{1L}},{{1L}},{{1L}},{{1L}},{{1L}},{{1L}}};
static uint16_t *g_1523 = &g_191;
static int32_t * const g_1533[3] = {(void*)0,(void*)0,(void*)0};
static union U3 g_1540 = {0x97D5D2F7A3C62BA7LL};
static union U3 *g_1539 = &g_1540;
static int64_t g_1584 = 2L;
static uint16_t g_1587 = 0UL;
static uint64_t g_1789[1][2][1] = {{{0x9185466AEC1974C0LL},{0x9185466AEC1974C0LL}}};
static int32_t g_1892 = (-2L);
static union U3 **g_2076 = &g_1539;
static union U3 ***g_2075 = &g_2076;



static int8_t func_1(void);
static int32_t * func_2(const int32_t * p_3, int8_t p_4, int32_t * p_5);
static uint32_t func_9(int32_t * p_10, int16_t p_11, uint32_t p_12);
static int8_t ** func_16(uint32_t p_17, int8_t * p_18, int32_t * p_19);
static int8_t * func_20(int32_t * p_21, uint64_t p_22, int8_t * p_23, union U4 p_24);
static int32_t * func_25(int8_t * p_26, uint32_t p_27);
static union U5 func_46(int32_t * const p_47, const int8_t * const p_48);
static int8_t * func_50(uint32_t p_51, int32_t * p_52, uint64_t p_53);
static int8_t ** func_54(const int8_t ** p_55, union U2 p_56, int64_t p_57, struct S1 p_58, const int16_t p_59);
static union U2 func_70(uint32_t p_71, int8_t * p_72, int32_t * p_73, int8_t * p_74, uint32_t p_75);
# 161 "<stdin>"
static int8_t func_1(void)
{
    int64_t l_15 = (-2L);
    int32_t *l_1353 = &g_500;
    int32_t **l_2088 = &g_13;
    (*l_2088) = func_2(g_6, (!func_9(g_13, l_15, l_15)), l_1353);
    return (**g_219);
}







static int32_t * func_2(const int32_t * p_3, int8_t p_4, int32_t * p_5)
{
    uint32_t l_1354 = 0x53D59E4FL;
    struct S1 ** const l_1362 = &g_388[3];
    uint16_t *l_1365 = (void*)0;
    int32_t l_1376[2];
    uint16_t *l_1377 = &g_191;
    int16_t *l_1380 = &g_111;
    union U5 l_1418 = {-1L};
    struct S1 **l_1422 = &g_388[4];
    uint8_t l_1605 = 248UL;
    struct S0 **l_1665 = &g_1338[2][0][0];
    uint32_t l_1681 = 4294967295UL;
    uint32_t l_1687 = 4294967295UL;
    int32_t *l_1690[7];
    union U5 l_1739 = {-4L};
    union U4 *l_1750 = &g_320;
    union U4 * const *l_1749[3][6][10] = {{{(void*)0,&l_1750,&l_1750,(void*)0,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750},{&l_1750,(void*)0,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,(void*)0,&l_1750},{&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750},{&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750},{&l_1750,(void*)0,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750},{&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,(void*)0,&l_1750}},{{&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750},{(void*)0,&l_1750,(void*)0,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750},{&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,(void*)0,&l_1750,&l_1750,&l_1750},{&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,(void*)0,(void*)0},{&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750},{&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750}},{{&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750},{&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,(void*)0,&l_1750},{&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750},{&l_1750,&l_1750,&l_1750,&l_1750,(void*)0,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750},{&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750,(void*)0,&l_1750,&l_1750,&l_1750},{&l_1750,&l_1750,&l_1750,&l_1750,(void*)0,&l_1750,&l_1750,&l_1750,&l_1750,&l_1750}}};
    union U4 * const **l_1748 = &l_1749[1][0][9];
    const uint16_t l_1772 = 0xCFBFL;
    union U2 l_1787 = {-5L};
    uint8_t ****l_1829 = (void*)0;
    int16_t l_1855 = 0xC2A4L;
    int8_t l_1885[4];
    int32_t l_1893 = 1L;
    int16_t l_1914 = 0xED6EL;
    int32_t l_1915 = (-6L);
    uint16_t l_1967 = 0UL;
    int32_t l_1970 = 0xD634A5C2L;
    uint8_t * const **l_2070 = (void*)0;
    uint16_t l_2079 = 0x0670L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1376[i] = 1L;
    for (i = 0; i < 7; i++)
        l_1690[i] = &l_1376[1];
    for (i = 0; i < 4; i++)
        l_1885[i] = 0xF0L;
lbl_1505:
    l_1354--;
    if (((((safe_unary_minus_func_int32_t_s((safe_mod_func_uint16_t_u_u((g_397.f1 == (g_389.f6 = (safe_sub_func_uint32_t_u_u((((p_4 != (l_1362 == l_1362)) & (safe_mod_func_int16_t_s_s((*g_678), ((((void*)0 != l_1365) & ((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s((((*l_1380) = (safe_lshift_func_uint16_t_u_s((++(*l_1377)), l_1354))) & (l_1376[0] = ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(p_4, l_1376[0])) >= (*g_678)), 2)) <= l_1354))), g_1335.f0)), 2)), 1L)) ^ g_218[4])) & 1UL)))) == (*p_3)), 0xEFFC944AL)))), 1UL)))) | g_274) || (*p_3)) < p_4))
    {
        int8_t l_1385 = 0xB8L;
        int32_t l_1386 = 0xDB9A5A5FL;
        int32_t *l_1387[5];
        int64_t l_1388 = 2L;
        int8_t l_1390 = 0L;
        uint8_t l_1391 = 1UL;
        int i;
        for (i = 0; i < 5; i++)
            l_1387[i] = &g_389.f3;
        ++l_1391;
    }
    else
    {
        uint8_t l_1394 = 0x27L;
        int32_t l_1436 = 0xECC212AAL;
        uint64_t l_1443 = 0x66E21A6E95219D3CLL;
        int64_t l_1449 = 2L;
        struct S1 l_1480[7] = {{-1L,0x2D9AD913L,0x94L,0xBAD5ADCFL,0xF6227CA0L,0x5738BE58L,-6L,0xA24E2E9553D255CDLL},{0xBAL,0x9E4E8ACFL,0x3BL,0x812C1B1BL,1L,1UL,0x141161AA535638D3LL,1UL},{-1L,0x2D9AD913L,0x94L,0xBAD5ADCFL,0xF6227CA0L,0x5738BE58L,-6L,0xA24E2E9553D255CDLL},{-1L,0x2D9AD913L,0x94L,0xBAD5ADCFL,0xF6227CA0L,0x5738BE58L,-6L,0xA24E2E9553D255CDLL},{0xBAL,0x9E4E8ACFL,0x3BL,0x812C1B1BL,1L,1UL,0x141161AA535638D3LL,1UL},{-1L,0x2D9AD913L,0x94L,0xBAD5ADCFL,0xF6227CA0L,0x5738BE58L,-6L,0xA24E2E9553D255CDLL},{-1L,0x2D9AD913L,0x94L,0xBAD5ADCFL,0xF6227CA0L,0x5738BE58L,-6L,0xA24E2E9553D255CDLL}};
        int8_t *l_1496 = &g_571;
        union U3 *l_1538 = &g_444;
        int64_t l_1552[6][7] = {{0L,0xF9D86EEF4926CD34LL,(-2L),0xDB8994A571B7F837LL,0xC453568411288E6ELL,0xDB8994A571B7F837LL,(-2L)},{9L,9L,0x86688C0C36FB0147LL,(-5L),0xF9D86EEF4926CD34LL,0x63E12A1ADB8852EFLL,0L},{0L,0xDB8994A571B7F837LL,0x86688C0C36FB0147LL,0x86688C0C36FB0147LL,0xDB8994A571B7F837LL,0L,0xC453568411288E6ELL},{0x62D4D4F0DB9A152ELL,0x86688C0C36FB0147LL,(-2L),0xC453568411288E6ELL,0xF9D86EEF4926CD34LL,0xF9D86EEF4926CD34LL,0xC453568411288E6ELL},{(-5L),1L,(-5L),0x63E12A1ADB8852EFLL,0xC453568411288E6ELL,0x62D4D4F0DB9A152ELL,0L},{(-2L),0x86688C0C36FB0147LL,0x62D4D4F0DB9A152ELL,0x63E12A1ADB8852EFLL,0x62D4D4F0DB9A152ELL,0x86688C0C36FB0147LL,(-2L)}};
        union U5 **l_1591 = &g_837;
        int32_t l_1597[5][8] = {{0x48626739L,0x88EA58C3L,0x88EA58C3L,0x48626739L,0xCB9C3174L,0x57E661C5L,0xCB9C3174L,0x48626739L},{0x88EA58C3L,0xCB9C3174L,0x88EA58C3L,0x9AD5098AL,0x6ADADACCL,0x6ADADACCL,0x9AD5098AL,0x88EA58C3L},{0xCB9C3174L,0xCB9C3174L,0x6ADADACCL,0x57E661C5L,6L,0x57E661C5L,0x6ADADACCL,0xCB9C3174L},{0xCB9C3174L,0x88EA58C3L,0x9AD5098AL,0x6ADADACCL,0x6ADADACCL,0x9AD5098AL,0x88EA58C3L,0xCB9C3174L},{0x88EA58C3L,0x48626739L,0xCB9C3174L,0x57E661C5L,0xCB9C3174L,0x48626739L,0x88EA58C3L,0x88EA58C3L}};
        union U4 l_1698[5][2] = {{{0x2BL},{0x6FL}},{{1L},{0x2BL}},{{-1L},{-1L}},{{-1L},{0x2BL}},{{1L},{0x6FL}}};
        uint8_t **l_1729[8][6] = {{&g_333,&g_333,&g_333,(void*)0,&g_333,&g_333},{(void*)0,&g_333,&g_333,(void*)0,&g_333,&g_333},{&g_333,(void*)0,&g_333,(void*)0,&g_333,(void*)0},{(void*)0,&g_333,(void*)0,(void*)0,&g_333,(void*)0},{&g_333,(void*)0,&g_333,&g_333,&g_333,(void*)0},{&g_333,&g_333,(void*)0,&g_333,&g_333,(void*)0},{&g_333,&g_333,&g_333,&g_333,(void*)0,&g_333},{&g_333,&g_333,&g_333,(void*)0,&g_333,&g_333}};
        uint8_t l_1741 = 255UL;
        union U2 ** const l_1768 = &g_1227;
        uint8_t l_1808[5];
        int i, j;
        for (i = 0; i < 5; i++)
            l_1808[i] = 0xDFL;
        if (l_1394)
        {
            int32_t l_1407 = 0x9576C6C3L;
            union U2 l_1417 = {0x05L};
            int32_t l_1447 = (-2L);
            int32_t l_1448[9];
            struct S0 l_1526 = {4,1,661};
            struct S1 ***l_1634[7][7][5] = {{{&l_1422,(void*)0,&l_1422,&l_1422,(void*)0},{(void*)0,&l_1422,&l_1422,&l_1422,&l_1422},{&l_1422,&l_1422,&l_1422,&l_1422,&l_1422},{&l_1422,&l_1422,&l_1422,&l_1422,&l_1422},{(void*)0,&l_1422,&l_1422,&l_1422,&l_1422},{&l_1422,&l_1422,(void*)0,&l_1422,(void*)0},{&l_1422,&l_1422,&l_1422,&l_1422,&l_1422}},{{&l_1422,&l_1422,&l_1422,&l_1422,&l_1422},{(void*)0,&l_1422,(void*)0,&l_1422,&l_1422},{&l_1422,(void*)0,&l_1422,&l_1422,&l_1422},{&l_1422,&l_1422,&l_1422,&l_1422,&l_1422},{&l_1422,&l_1422,(void*)0,&l_1422,(void*)0},{&l_1422,&l_1422,&l_1422,&l_1422,&l_1422},{(void*)0,&l_1422,(void*)0,&l_1422,&l_1422}},{{&l_1422,&l_1422,&l_1422,&l_1422,(void*)0},{&l_1422,&l_1422,&l_1422,&l_1422,&l_1422},{&l_1422,(void*)0,&l_1422,(void*)0,&l_1422},{(void*)0,&l_1422,(void*)0,&l_1422,&l_1422},{&l_1422,(void*)0,&l_1422,(void*)0,&l_1422},{(void*)0,&l_1422,(void*)0,&l_1422,&l_1422},{&l_1422,(void*)0,&l_1422,(void*)0,&l_1422}},{{&l_1422,(void*)0,&l_1422,&l_1422,&l_1422},{&l_1422,&l_1422,(void*)0,&l_1422,(void*)0},{&l_1422,&l_1422,&l_1422,(void*)0,&l_1422},{&l_1422,(void*)0,&l_1422,&l_1422,&l_1422},{&l_1422,(void*)0,(void*)0,&l_1422,(void*)0},{&l_1422,&l_1422,&l_1422,&l_1422,&l_1422},{(void*)0,(void*)0,&l_1422,&l_1422,(void*)0}},{{&l_1422,&l_1422,&l_1422,&l_1422,(void*)0},{&l_1422,(void*)0,&l_1422,&l_1422,&l_1422},{&l_1422,&l_1422,&l_1422,(void*)0,(void*)0},{&l_1422,&l_1422,&l_1422,&l_1422,&l_1422},{&l_1422,&l_1422,&l_1422,&l_1422,&l_1422},{(void*)0,&l_1422,&l_1422,(void*)0,&l_1422},{&l_1422,&l_1422,&l_1422,&l_1422,(void*)0}},{{&l_1422,&l_1422,&l_1422,&l_1422,&l_1422},{&l_1422,(void*)0,&l_1422,(void*)0,&l_1422},{&l_1422,&l_1422,(void*)0,&l_1422,&l_1422},{&l_1422,&l_1422,(void*)0,&l_1422,&l_1422},{&l_1422,&l_1422,(void*)0,(void*)0,(void*)0},{&l_1422,&l_1422,(void*)0,&l_1422,&l_1422},{&l_1422,(void*)0,&l_1422,&l_1422,&l_1422}},{{(void*)0,&l_1422,&l_1422,(void*)0,&l_1422},{(void*)0,&l_1422,&l_1422,(void*)0,&l_1422},{&l_1422,&l_1422,(void*)0,(void*)0,&l_1422},{&l_1422,(void*)0,(void*)0,(void*)0,&l_1422},{&l_1422,&l_1422,&l_1422,(void*)0,(void*)0},{(void*)0,&l_1422,(void*)0,&l_1422,(void*)0},{&l_1422,&l_1422,&l_1422,&l_1422,&l_1422}}};
            int16_t **l_1640 = &l_1380;
            int16_t ***l_1639 = &l_1640;
            uint8_t l_1643 = 0UL;
            uint16_t *l_1671 = &g_244;
            union U4 ***l_1707 = &g_539;
            union U3 l_1710 = {4UL};
            struct S0 ***l_1746 = &l_1665;
            struct S0 **** const l_1745 = &l_1746;
            uint32_t l_1788[4][8] = {{4294967289UL,0UL,4294967289UL,0UL,4294967289UL,0UL,4294967289UL,0UL},{4294967289UL,0UL,4294967289UL,0UL,4294967289UL,0UL,4294967289UL,0UL},{4294967289UL,0UL,4294967289UL,0UL,4294967289UL,0UL,4294967289UL,0UL},{4294967289UL,0UL,4294967289UL,0UL,4294967289UL,0UL,4294967289UL,0UL}};
            uint8_t ****l_1797 = &g_786;
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_1448[i] = 0x6693AC82L;
            for (g_108 = 0; (g_108 <= 2); g_108 += 1)
            {
                uint8_t *l_1412[9][8] = {{(void*)0,&g_1040[9],&g_84,&g_84,&g_1040[9],(void*)0,&g_1040[9],&g_84},{&g_728[0][1],&g_1040[9],&g_728[0][1],(void*)0,(void*)0,&g_728[0][1],&g_1040[9],&g_728[0][1]},{&g_728[0][1],(void*)0,&g_84,(void*)0,&g_728[0][1],&g_728[0][1],(void*)0,&g_84},{&g_728[0][1],&g_728[0][1],(void*)0,&g_84,(void*)0,&g_728[0][1],&g_728[0][1],(void*)0},{&g_728[0][1],(void*)0,(void*)0,&g_728[0][1],&g_1040[9],&g_728[0][1],(void*)0,(void*)0},{(void*)0,&g_1040[9],&g_84,&g_84,&g_1040[9],(void*)0,&g_1040[9],&g_84},{&g_728[0][1],&g_1040[9],&g_728[0][1],(void*)0,(void*)0,&g_728[0][1],&g_1040[9],&g_728[0][1]},{&g_728[0][1],(void*)0,&g_84,(void*)0,&g_728[0][1],&g_728[0][1],(void*)0,&g_84},{&g_728[0][1],&g_728[0][1],(void*)0,&g_84,(void*)0,&g_728[0][1],&g_728[0][1],(void*)0}};
                struct S1 **l_1421[5];
                int32_t l_1434 = 0x2D6DA268L;
                int32_t l_1446 = 0L;
                int32_t l_1450 = 0xC06D2DA5L;
                int32_t l_1451 = 0x028DB689L;
                uint8_t *** const *l_1464 = &g_786;
                uint16_t *l_1522 = &g_244;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1421[i] = &g_388[2];
                for (g_374 = 0; (g_374 >= 0); g_374 -= 1)
                {
                    struct S0 *l_1397 = &g_397;
                    int32_t l_1406[3];
                    struct S1 ***l_1423 = &l_1422;
                    int8_t *l_1424 = &g_122.f0;
                    int32_t *l_1425 = &g_389.f3;
                    union U4 l_1432 = {1L};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1406[i] = 0xE5109706L;
                    for (g_187 = 0; (g_187 <= 2); g_187 += 1)
                    {
                        int i, j, k;
                        l_1376[(g_374 + 1)] ^= ((((safe_lshift_func_uint8_t_u_s(((*g_333) = ((void*)0 == l_1397)), (safe_sub_func_uint32_t_u_u(((!((g_142[(g_374 + 3)][(g_187 + 3)][g_374] | ((+0x0CFDL) && (0x9EL >= (g_205 == l_1394)))) == (safe_mod_func_uint64_t_u_u(p_4, (safe_div_func_int8_t_s_s((1L && 0xD7L), 0xB5L)))))) && l_1406[2]), 0UL)))) <= l_1407) >= g_589) && g_397.f2);
                    }
                }
                if (((*g_13) = (l_1434 < 0x54L)))
                {
                    int32_t l_1435 = (-6L);
                    int32_t l_1442 = 0xF68F4268L;
                    int i;
                    for (g_571 = 3; (g_571 <= 8); g_571 += 1)
                    {
                        int32_t *l_1437 = &l_1376[0];
                        int32_t *l_1438 = &g_1007[0];
                        int32_t *l_1439 = (void*)0;
                        int32_t *l_1440 = &l_1435;
                        int32_t *l_1441[6][1] = {{&g_389.f4},{&g_389.f4},{&l_1434},{&g_389.f4},{&g_389.f4},{&l_1434}};
                        int i, j;
                        ++l_1443;
                        ++g_1452;
                    }
                    if ((*p_5))
                        break;
                    (*p_5) &= ((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u(((safe_rshift_func_int8_t_s_u(((p_4 ^ 0xEFL) == 0x3A67L), (((*p_3) | (((*g_678) != (safe_add_func_uint8_t_u_u(l_1434, p_4))) | l_1451)) >= (safe_rshift_func_uint8_t_u_u(((*g_784) == l_1464), (***g_786)))))) > (*g_678)))), p_4)) || 0UL);
                }
                else
                {
                    const uint32_t l_1475 = 0xAEC8C647L;
                    int32_t l_1484 = (-1L);
                    int32_t *l_1497 = (void*)0;
                    int i;
                    for (l_1446 = 0; (l_1446 <= 2); l_1446 += 1)
                    {
                        struct S0 * const ***l_1467[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1467[i] = &g_1465;
                        g_1465 = g_1465;
                    }
                    (*p_5) = (l_1417 , 0xB21F3B1DL);
                }
                for (l_1418.f1 = 0; (l_1418.f1 <= 2); l_1418.f1 += 1)
                {
                    int64_t l_1499[7];
                    int32_t l_1500 = 0x12AABB68L;
                    int32_t l_1501 = 7L;
                    uint64_t l_1502 = 0x4FC89D37ACC2762BLL;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1499[i] = (-4L);
                    if ((l_1354 ^ 0L))
                    {
                        int32_t *l_1498[3][8];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_1498[i][j] = &g_389.f3;
                        }
                        --l_1502;
                    }
                    else
                    {
                        uint64_t *l_1512 = &l_1443;
                        (*p_5) = (*p_5);
                        if (g_274)
                            goto lbl_1505;
                        if (l_1436)
                            break;
                        l_1447 |= ((((safe_rshift_func_int8_t_s_s((((*g_13) = (*p_5)) , (safe_mul_func_uint8_t_u_u(1UL, p_4))), ((safe_add_func_uint32_t_u_u((((((*l_1512) ^= 0x3F3BA99BD9ADD7BFLL) < (0x5027A71B50F5CF8CLL || ((g_444 , ((safe_div_func_int8_t_s_s(0xB6L, ((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0xEEDAL, g_132.f0)), 4L)) ^ p_4))) | l_1417.f0)) != (*p_3)))) == 246UL) , l_1499[1]), l_1418.f1)) > l_1502))) != 0UL) == p_4) , (*p_5));
                    }
                    for (l_1434 = 0; (l_1434 <= 2); l_1434 += 1)
                    {
                        uint16_t **l_1521 = &l_1365;
                        uint32_t *l_1529[6] = {&l_1354,&l_1354,&l_1354,&l_1354,&l_1354,&l_1354};
                        int32_t *l_1550 = (void*)0;
                        int32_t *l_1551 = &l_1376[0];
                        int32_t *l_1553 = &g_652[1];
                        int32_t *l_1554 = (void*)0;
                        int32_t *l_1555 = &l_1436;
                        int32_t *l_1556[7];
                        uint32_t l_1557 = 18446744073709551612UL;
                        union U5 *l_1560[4] = {&g_460[1],&g_460[1],&g_460[1],&g_460[1]};
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                            l_1556[i] = &l_1501;
                        l_1436 = (safe_sub_func_int32_t_s_s((g_142[(l_1434 + 5)][(l_1418.f1 + 2)][g_108] < ((((*l_1521) = &g_244) != (g_1523 = l_1522)) , (safe_add_func_int64_t_s_s((l_1526 , (safe_mod_func_int8_t_s_s(g_142[(l_1434 + 3)][(l_1434 + 1)][g_108], p_4))), (((((((g_1335.f2 ^= (l_1451 = p_4)) && (*p_5)) ^ (safe_unary_minus_func_int8_t_s(p_4))) | l_1376[0]) , 1UL) | l_1447) , 0x39CFC200CA4B8397LL))))), 0x9D2D5A59L));
                        (*l_1551) |= (safe_mul_func_uint8_t_u_u(p_4, ((*l_1496) ^= (func_46(g_1533[0], (*g_219)) , ((*p_5) , ((safe_lshift_func_uint16_t_u_u((l_1499[3] && (safe_rshift_func_uint8_t_u_s(((((g_1539 = l_1538) == &g_1540) > (safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s((~(((safe_add_func_uint8_t_u_u(p_4, 0x20L)) == g_1040[8]) && g_392[0].f3)), 0x46L)) <= (*g_333)) >= (*g_333)), 18446744073709551613UL)), 0UL))) && (*p_5)), (*g_220)))), 4)) != p_4))))));
                        ++l_1557;
                        (*l_1553) |= (l_1560[3] != (void*)0);
                    }
                }
            }
            for (g_187 = 0; (g_187 < 6); g_187++)
            {
                int64_t l_1583 = (-1L);
                int32_t l_1598 = 1L;
                int32_t l_1599 = 0xA80F7746L;
                int32_t l_1601 = 0x397E98B6L;
                int32_t l_1602 = 0x3FC22AAFL;
                int32_t l_1603 = 0xBEAEBFBDL;
                int32_t l_1604[3];
                uint64_t l_1608 = 18446744073709551615UL;
                union U3 l_1614 = {18446744073709551615UL};
                uint8_t *l_1619 = &g_728[0][1];
                uint64_t l_1633 = 0xDB4AD87A0ABB077DLL;
                int32_t l_1635 = (-1L);
                int16_t **l_1638 = (void*)0;
                int16_t ***l_1637 = &l_1638;
                int i;
                for (i = 0; i < 3; i++)
                    l_1604[i] = 0x52BB127FL;
                l_1480[6].f4 |= ((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(4294967293UL, g_84)), ((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(0xC2B0L, (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(p_4, (safe_add_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((l_1480[6].f3 &= 0x2EL), (((((l_1376[0] & ((***g_316) != (*g_219))) || l_1583) == g_1040[4]) || l_1376[0]) == (*g_678)))), (*g_1523))) != l_1418.f2), (*g_678))) & 254UL), p_4)))) > 0x299FB78468583A7FLL), 6)))), (*p_5))) >= 0xCF2B28AFDD2ADB29LL))) & g_1584);
                for (p_4 = 0; (p_4 > (-22)); p_4 = safe_sub_func_uint32_t_u_u(p_4, 2))
                {
                    uint16_t **l_1590 = &g_1523;
                    int32_t l_1593 = 0xEBE74360L;
                    int32_t l_1600[4];
                    int32_t *l_1641 = &l_1593;
                    int32_t *l_1642[3];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1600[i] = 1L;
                    for (i = 0; i < 3; i++)
                        l_1642[i] = &l_1436;
                    if ((g_1587 > 4L))
                    {
                        if (l_1354)
                            break;
                        l_1436 ^= (safe_lshift_func_uint8_t_u_u(0xA7L, l_1449));
                    }
                    else
                    {
                        return p_5;
                    }
                    if (((p_4 , &g_187) == ((*l_1590) = &g_244)))
                    {
                        union U5 ***l_1592 = &l_1591;
                        int32_t *l_1594 = &l_1376[0];
                        int32_t *l_1595 = (void*)0;
                        int32_t *l_1596[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1596[i] = &g_1495[0][0][0];
                        (*l_1592) = l_1591;
                        --l_1605;
                        --l_1608;
                    }
                    else
                    {
                        uint16_t l_1628 = 0UL;
                        int32_t l_1636 = (-9L);
                        l_1376[0] = (safe_unary_minus_func_uint64_t_u(((p_4 <= ((safe_rshift_func_int8_t_s_s((l_1636 = (p_4 , ((l_1614 , (*l_1538)) , (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((l_1480[6].f3 ^= (l_1619 != (*g_332))) , ((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((((((*g_333) &= (safe_mul_func_int8_t_s_s((((safe_mul_func_int8_t_s_s(l_1628, p_4)) && (((*g_678) = (safe_sub_func_int64_t_s_s((((safe_add_func_uint32_t_u_u((p_4 || l_1417.f0), p_4)) & 0xCDL) >= g_205), l_1633))) , g_835.f2)) && l_1600[2]), 1UL))) , p_4) , (void*)0) == l_1634[6][6][4]) ^ p_4), l_1635)), 0L)) ^ l_1448[2])), l_1447)), l_1376[0]))))), 2)) | 0xDDL)) != l_1354)));
                        if (l_1608)
                            continue;
                    }
                    l_1639 = l_1637;
                    --l_1643;
                }
            }
            (*g_13) ^= l_1418.f2;
            if ((+(((*g_13) &= l_1480[6].f7) > (!((0UL >= (((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0x1AL, (&l_1496 != (void*)0))), p_4)) ^ l_1418.f2) > (l_1376[0] <= (l_1480[2] , l_1376[1])))) || l_1443)))))
            {
                int32_t *l_1656 = &l_1480[6].f4;
                int32_t *l_1657 = (void*)0;
                int32_t *l_1658 = &g_652[2];
                int32_t *l_1659[5];
                uint32_t l_1660 = 0x7434D541L;
                const struct S1 l_1670 = {0x01L,18446744073709551615UL,0x4CL,1L,0xC52EE146L,0UL,0x3B9AD9941B6867D5LL,0UL};
                uint16_t **l_1672 = &l_1365;
                uint64_t *l_1673 = &l_1443;
                union U2 **l_1674 = &g_1227;
                int i;
                for (i = 0; i < 5; i++)
                    l_1659[i] = &l_1376[0];
                ++l_1660;
                for (l_1449 = 0; (l_1449 < 0); l_1449 = safe_add_func_int16_t_s_s(l_1449, 4))
                {
                    return p_5;
                }
                (*l_1658) = (((void*)0 != l_1665) >= (safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(((((*g_333) ^ ((0x7771L || 1L) | ((*l_1673) = (((*l_1672) = (l_1670 , l_1671)) != (void*)0)))) && (((*l_1674) = &g_132) == (void*)0)) ^ 1UL), 0x9554L)), p_4)));
            }
            else
            {
                union U4 *l_1701 = &l_1698[3][0];
                union U4 ***l_1709 = (void*)0;
                int32_t l_1711[1];
                struct S0 l_1717 = {-1,1,796};
                int8_t *l_1721 = &g_122.f0;
                struct S1 l_1728 = {-10L,1UL,0x14L,0x69D95999L,0xD3FF987BL,18446744073709551613UL,0x2EA7BC536217AEFCLL,0x7A20EDA665FDD1F0LL};
                uint32_t l_1742 = 0x53D09C06L;
                union U2 **l_1769 = &g_1227;
                uint8_t ****l_1798 = &g_786;
                int i;
                for (i = 0; i < 1; i++)
                    l_1711[i] = 0L;
                if (((safe_sub_func_uint8_t_u_u(((void*)0 == &g_1523), ((p_4 ^ (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(l_1681, (l_1376[0] = (p_4 | (0UL && ((*g_678) ^ ((!((*l_1671) = (safe_mul_func_int16_t_s_s((-1L), (((((safe_mod_func_uint32_t_u_u(l_1687, 1UL)) == p_4) <= l_1597[2][5]) > 0x9EECFC2A33C6A8A8LL) <= 0x78BC38171086402DLL))))) , p_4))))))), (*p_5)))) == p_4))) , (*p_3)))
                {
                    struct S1 ***l_1694 = (void*)0;
                    struct S1 ***l_1695 = &l_1422;
                    int32_t l_1704 = 0x4EE4E1C8L;
                    int64_t *l_1718[8][4][1] = {{{&g_389.f6},{&g_801[3]},{&g_392[0].f6},{&g_801[3]}},{{&g_389.f6},{&g_389.f6},{&g_801[3]},{&g_392[0].f6}},{{&g_801[3]},{&g_389.f6},{&g_389.f6},{&g_801[3]}},{{&g_392[0].f6},{&g_801[3]},{&g_389.f6},{&g_389.f6}},{{&g_801[3]},{&g_392[0].f6},{&g_801[3]},{&g_389.f6}},{{&g_389.f6},{&g_801[3]},{&g_392[0].f6},{&g_801[3]}},{{&g_389.f6},{&g_389.f6},{&g_801[3]},{&g_389.f6}},{{&g_392[0].f6},{(void*)0},{(void*)0},{&g_392[0].f6}}};
                    union U4 l_1730[2][6] = {{{-4L},{-4L},{-4L},{-4L},{-4L},{-4L}},{{-4L},{-4L},{-4L},{-4L},{-4L},{-4L}}};
                    int64_t l_1740 = (-1L);
                    int i, j, k;
                    for (g_1584 = 0; (g_1584 >= (-2)); g_1584 = safe_sub_func_int64_t_s_s(g_1584, 8))
                    {
                        int32_t *l_1691 = &g_1495[3][0][0];
                        return l_1691;
                    }
                    (*l_1695) = ((g_108 , (safe_lshift_func_uint8_t_u_s((*g_333), 5))) , l_1362);
                    (*g_13) |= (safe_div_func_uint16_t_u_u((((g_122.f0 | (l_1698[3][0] , (!(((-1L) & p_4) || (safe_unary_minus_func_uint16_t_u(((void*)0 != l_1701))))))) != ((p_4 > p_4) , (safe_mod_func_uint16_t_u_u(p_4, p_4)))) != l_1704), (*g_678)));
                    for (l_1605 = 0; (l_1605 > 33); ++l_1605)
                    {
                        union U4 ****l_1708[4][2][1] = {{{&g_538[4][2]},{&g_538[0][2]}},{{&g_538[4][2]},{&g_538[0][2]}},{{&g_538[4][2]},{&g_538[0][2]}},{{&g_538[4][2]},{&g_538[0][2]}}};
                        uint64_t l_1712 = 18446744073709551615UL;
                        int32_t l_1719 = 0xD95E6584L;
                        uint8_t l_1720 = 0UL;
                        const int8_t *l_1723[7] = {&g_460[1].f2,&g_460[1].f2,&g_460[1].f2,&g_460[1].f2,&g_460[1].f2,&g_460[1].f2,&g_460[1].f2};
                        const int8_t **l_1722 = &l_1723[1];
                        const union U5 l_1724 = {0xBC46D444443982E4LL};
                        const union U5 **l_1725 = (void*)0;
                        const union U5 *l_1727[1];
                        const union U5 **l_1726 = &l_1727[0];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_1727[i] = &g_460[1];
                        l_1709 = (l_1707 = &g_539);
                        l_1407 = ((*p_5) = ((*g_13) = (((l_1710 , l_1711[0]) >= ((l_1712 = p_4) >= ((*l_1701) , p_4))) & (l_1724 , 0x1889A33C6BF5A4E4LL))));
                        (*l_1726) = &l_1724;
                        (*p_5) ^= (l_1728 , ((l_1729[1][0] != ((p_4 , l_1730[1][2]) , (func_70(p_4, l_1721, &l_1376[1], (((safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s(((((l_1740 = ((safe_div_func_uint64_t_u_u(((l_1739 , p_4) >= g_1040[7]), 0x59C686B60AE298B4LL)) >= (*p_3))) , 0x411C3EDC636DC0B7LL) , &l_1728) == &g_392[7]), l_1741)), p_4)) > l_1742), l_1728.f0)) || 4294967295UL) , (void*)0), p_4) , (void*)0))) > g_1007[0]));
                    }
                }
                else
                {
                    union U4 ****l_1747 = &g_538[4][2];
                    union U4 * const ***l_1751 = &l_1748;
                    int32_t *l_1757 = &g_1495[5][0][0];
                    uint64_t *l_1770 = (void*)0;
                    uint64_t *l_1771 = &g_444.f0;
                    struct S1 * const l_1777 = (void*)0;
                    union U5 *l_1792[9][8][3] = {{{&l_1739,&g_460[1],&g_838},{&g_460[2],&g_838,&g_460[2]},{&l_1418,&g_460[1],&g_460[1]},{&g_460[0],(void*)0,&g_460[1]},{(void*)0,&l_1739,(void*)0},{&g_460[2],&g_460[1],&g_838},{(void*)0,&g_838,&g_658},{&g_460[0],&g_460[2],(void*)0}},{{&l_1418,&g_460[1],&l_1418},{&g_460[2],&l_1739,&l_1739},{&l_1739,&g_460[2],&g_658},{&g_460[1],&l_1739,&g_658},{&l_1739,&g_658,(void*)0},{&g_838,&l_1739,&g_658},{&l_1739,&g_460[2],&g_460[1]},{(void*)0,&l_1739,&g_658}},{{&g_460[1],&g_460[1],&g_838},{&l_1739,&g_460[2],&l_1418},{&l_1739,&g_838,&l_1418},{&g_658,&g_460[1],&g_838},{&l_1739,&l_1739,&l_1418},{&g_658,(void*)0,&l_1418},{&l_1739,&g_460[1],&g_838},{&g_658,&g_838,&g_658}},{{&l_1418,&g_460[1],&g_460[1]},{&l_1418,(void*)0,&g_658},{(void*)0,&g_658,(void*)0},{&g_838,&g_460[1],&g_658},{(void*)0,&l_1418,&g_658},{&l_1418,&g_460[2],&l_1739},{&l_1418,&l_1418,&l_1418},{&g_658,&l_1739,(void*)0}},{{&l_1739,(void*)0,&g_658},{&g_658,&l_1739,&g_838},{&l_1739,&g_460[2],(void*)0},{&g_658,&l_1739,&g_460[1]},{&l_1739,(void*)0,&g_460[1]},{&l_1739,&l_1739,&g_460[2]},{&g_460[1],&l_1418,&g_838},{(void*)0,&g_460[2],&g_460[0]}},{{&l_1739,&l_1418,&l_1418},{&g_838,&g_460[1],&g_460[2]},{&l_1739,&g_658,&l_1418},{&g_460[1],(void*)0,&g_460[0]},{&l_1739,&g_460[1],&g_838},{&g_460[2],&g_838,&g_460[2]},{&l_1418,&g_460[1],&g_460[1]},{&g_460[0],(void*)0,&g_460[1]}},{{(void*)0,&l_1739,(void*)0},{&g_460[2],&g_460[1],&g_838},{(void*)0,&g_838,&g_658},{&g_460[0],&g_460[2],(void*)0},{&l_1418,&g_460[1],&l_1418},{(void*)0,&g_838,&g_658},{&l_1739,&l_1418,&g_460[2]},{&g_658,&g_460[2],&g_838}},{{&g_460[1],(void*)0,&g_460[1]},{&g_460[2],&g_460[2],&g_460[2]},{&g_658,&l_1418,(void*)0},{&g_460[1],&g_838,&l_1418},{&g_460[1],&g_460[1],&l_1418},{&g_658,&g_460[1],&g_460[1]},{&g_658,&l_1418,&g_460[1]},{&g_838,&l_1418,&l_1418}},{{&g_460[1],&g_658,&g_460[1]},{&g_460[2],&l_1739,&g_460[1]},{&l_1739,&g_838,&l_1418},{&l_1418,&g_460[1],&l_1418},{&g_460[1],&l_1418,(void*)0},{&g_460[1],&l_1739,&g_460[2]},{&l_1739,&g_460[2],&g_460[1]},{&l_1418,&l_1418,&g_838}}};
                    uint8_t ****l_1796 = &g_786;
                    struct S0 l_1803 = {7,2,210};
                    int i, j, k;
lbl_1793:
                    l_1480[6].f4 = (safe_div_func_int8_t_s_s((((l_1745 != (void*)0) >= ((((*l_1747) = l_1707) != ((*l_1751) = l_1748)) > (-7L))) == (!((safe_mul_func_uint16_t_u_u(0xFC7FL, (safe_lshift_func_uint16_t_u_s(((func_70(g_392[0].f1, ((*g_219) = (**g_317)), l_1757, l_1721, g_222) , 0x89945F4CL) | 0x12BFDA73L), p_4)))) <= p_4))), 0xA3L));
                    if ((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((**g_219) = (((((safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((((((*l_1750) , l_1768) != l_1769) != l_1698[3][0].f4) >= ((((*l_1771) = ((&g_1523 == &g_1523) | (&l_1728 == (void*)0))) >= ((g_238 , l_1526.f1) > 0x26L)) && (-9L))), (-1L))) <= 0xA8L), 65526UL)), l_1448[3])) <= g_14[2][3][1]) , p_4) & g_392[0].f1) >= 1L)) <= l_1728.f4), l_1772)), 0L)))
                    {
                        p_5 = func_25((*g_219), (((0xAF95L && (safe_mul_func_uint8_t_u_u(p_4, (g_1495[0][0][0] , (safe_lshift_func_int8_t_s_u((l_1717 , p_4), 5)))))) != ((void*)0 != l_1777)) && (safe_lshift_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((((!(safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((**g_573) = ((((((p_4 ^ 0xA3EDL) , l_1787) , (void*)0) != (void*)0) , (void*)0) != (void*)0)), l_1788[3][1])), p_4))) , 0xB39FF5EBL) , p_4), p_4)) >= 7L) | 0xBDL), 0))));
                        ++g_1789[0][1][0];
                        l_1792[2][6][2] = l_1792[1][6][2];
                    }
                    else
                    {
                        if (l_1728.f4)
                            goto lbl_1793;
                        (*g_13) = (((safe_mul_func_uint8_t_u_u((((((l_1796 = (*g_784)) == (l_1798 = l_1797)) , ((((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_1526.f2, p_4)), (((*l_1757) ^= (*p_5)) , (((*g_6) > ((l_1803 , l_1728.f6) & (((safe_mod_func_int64_t_s_s(((l_1808[4] = (safe_div_func_uint32_t_u_u(4294967286UL, p_4))) & l_1711[0]), 0x095F8E53867734D4LL)) || p_4) | g_1495[5][0][0]))) || (*g_678))))) <= l_1448[2]) > 0x573F1DC3049E07DELL) ^ g_218[4])) && 8UL) , 7UL), (*g_220))) || 0x564C7DDBL) < 65529UL);
                    }
                }
            }
        }
        else
        {
            for (g_658.f1 = 1; (g_658.f1 >= 0); g_658.f1 -= 1)
            {
                return p_5;
            }
        }
    }
    for (g_374 = 0; (g_374 != 21); g_374 = safe_add_func_int8_t_s_s(g_374, 3))
    {
        uint8_t ** const l_1815 = &g_333;
        union U4 l_1816[5] = {{0x66L},{0x66L},{0x66L},{0x66L},{0x66L}};
        int32_t l_1817 = 0xB2A5327FL;
        struct S0 l_1822 = {-0,4,257};
        int32_t l_1862 = 0x7AC8C0BCL;
        int32_t l_1904[4][4][8] = {{{1L,(-10L),(-9L),(-10L),0x37178F27L,(-4L),(-1L),(-4L)},{(-9L),0L,0x396FFDCFL,1L,(-1L),(-8L),0x0C6EC1D5L,0xBCD5D452L},{0x8E77167EL,0L,0x444287D9L,0L,0x3FE49E46L,(-1L),(-10L),0x0C6EC1D5L},{(-2L),(-1L),0xB049029AL,0xB6CCEA61L,0xB049029AL,(-1L),(-2L),0x273CA5F3L}},{{0L,(-1L),(-9L),0x37178F27L,0x9A6F9A64L,0x13CF7514L,6L,(-9L)},{0x396FFDCFL,(-10L),(-10L),0L,0x9A6F9A64L,0x89421CECL,0x073D0B89L,0xB6CCEA61L},{0L,(-1L),6L,(-9L),0xB049029AL,(-1L),1L,0xC986D0BCL},{(-2L),0x073D0B89L,(-1L),0x06AD9323L,0x3FE49E46L,0x37178F27L,0x0B50ABC0L,(-1L)}},{{0x8E77167EL,0x444287D9L,0x4E5436EBL,0x49ACA149L,(-1L),(-10L),0x9A6F9A64L,0L},{(-9L),(-10L),(-2L),(-1L),0x37178F27L,0L,1L,(-1L)},{1L,0x0B50ABC0L,0L,(-6L),6L,6L,(-6L),0L},{0x6C6E6CCCL,0x6C6E6CCCL,1L,0x073D0B89L,0L,(-1L),0xB049029AL,(-8L)}},{{0x937C46DEL,1L,0x8E77167EL,(-1L),0L,(-1L),0xBCD5D452L,(-8L)},{1L,1L,0x273CA5F3L,0x073D0B89L,0x396FFDCFL,(-10L),0x1BF7C987L,0L},{(-1L),1L,(-5L),(-6L),0x49ACA149L,1L,0x8E77167EL,(-1L)},{(-8L),(-5L),6L,(-1L),(-9L),0x273CA5F3L,0x396FFDCFL,0L}}};
        int64_t l_1905 = 0x74083165F6A2064ALL;
        union U5 l_1923 = {0xF68886A4B31DC8D1LL};
        uint32_t l_1950 = 0x5FC699EAL;
        union U4 ** const *l_2004 = &g_539;
        union U3 l_2039[2] = {{0x824B77A152BA2316LL},{0x824B77A152BA2316LL}};
        uint32_t l_2084 = 0x549A5DACL;
        int i, j, k;
        (*g_13) = (((*l_1377) ^= p_4) ^ (safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_1815 != l_1815), 255UL)), (((****g_316) = p_4) > (l_1817 &= ((l_1816[1] , (p_4 > (&g_444 != (void*)0))) && 0xF0AF58E31BA7871FLL))))));
        for (g_238 = (-28); (g_238 <= 35); g_238 = safe_add_func_int32_t_s_s(g_238, 3))
        {
            uint32_t l_1832 = 0x45C7A5D4L;
            int32_t l_1856 = (-1L);
            int32_t l_1857 = 8L;
            int32_t l_1859 = (-7L);
            int32_t l_1861 = 0x5DA615BEL;
            union U4 l_1871 = {0x37L};
            int64_t l_1890 = (-1L);
            int32_t l_1903 = 1L;
            int32_t l_1909 = 0L;
            int32_t l_1910[6] = {4L,4L,(-9L),4L,4L,(-9L)};
            int32_t l_1911 = 0xCDC62551L;
            int32_t l_1912[8] = {0x4FB63938L,0x4FB63938L,0x4FB63938L,0x4FB63938L,0x4FB63938L,0x4FB63938L,0x4FB63938L,0x4FB63938L};
            int32_t l_1916 = 0xE5390817L;
            uint64_t l_1918 = 18446744073709551611UL;
            union U5 * const l_1930 = (void*)0;
            uint8_t l_1966[3];
            struct S1 **l_1988 = &g_388[4];
            union U3 **l_1993 = &g_1539;
            union U3 ***l_1992 = &l_1993;
            int8_t *l_2005 = &l_1885[1];
            int16_t **l_2030 = &l_1380;
            int16_t ***l_2029 = &l_2030;
            int32_t *l_2087 = &l_1857;
            int i;
            for (i = 0; i < 3; i++)
                l_1966[i] = 254UL;
        }
    }
    return p_5;
}







static uint32_t func_9(int32_t * p_10, int16_t p_11, uint32_t p_12)
{
    uint32_t l_35 = 18446744073709551615UL;
    int32_t l_1073 = (-7L);
    union U4 l_1102[6] = {{-9L},{-9L},{-9L},{-9L},{-9L},{-9L}};
    int i;
    if ((*g_13))
    {
        const uint32_t l_34 = 0xDCB7BE74L;
        int32_t * const l_49[9][4] = {{&g_14[2][2][2],&g_14[0][0][5],&g_14[2][2][2],&g_14[0][0][5]},{&g_14[2][2][2],&g_14[0][0][5],&g_14[2][2][2],&g_14[0][0][5]},{&g_14[2][2][2],&g_14[0][0][5],&g_14[2][2][2],&g_14[0][0][5]},{&g_14[2][2][2],&g_14[0][0][5],&g_14[2][2][2],&g_14[0][0][5]},{&g_14[2][2][2],&g_14[0][0][5],&g_14[2][2][2],&g_14[0][0][5]},{&g_14[2][2][2],&g_14[0][0][5],&g_14[2][2][2],&g_14[0][0][5]},{&g_14[2][2][2],&g_14[0][0][5],&g_14[2][2][2],&g_14[0][0][5]},{&g_14[2][2][2],&g_14[0][0][5],&g_14[2][2][2],&g_14[0][0][5]},{&g_14[2][2][2],&g_14[0][0][5],&g_14[2][2][2],&g_14[0][0][5]}};
        int64_t *l_1074 = &g_801[5];
        int8_t *l_1075 = &g_571;
        int i, j;
        (*g_317) = func_16(p_11, func_20(func_25((((safe_mul_func_uint8_t_u_u(g_14[1][0][3], (safe_div_func_int32_t_s_s(((2L <= (safe_rshift_func_int8_t_s_s(l_34, (l_35 != ((*l_1074) = (safe_rshift_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((g_14[2][3][1] == (safe_sub_func_int64_t_s_s((safe_mod_func_int32_t_s_s((func_46(l_49[5][1], func_50((((((1UL == g_7) <= g_14[2][3][1]) ^ 0xA0539261L) , (void*)0) == (void*)0), &g_14[2][3][1], l_35)) , (*g_6)), l_35)), l_1073))), p_11)), 0x2F14CF599E07B396LL)) , 1UL), g_460[1].f0))))))) < 0x2B15L), (*p_10))))) != 0UL) , l_1075), g_392[0].f4), p_12, (**g_317), l_1102[1]), p_10);
        return g_389.f3;
    }
    else
    {
        return p_11;
    }
}







static int8_t ** func_16(uint32_t p_17, int8_t * p_18, int32_t * p_19)
{
    uint64_t l_1106 = 18446744073709551615UL;
    int32_t l_1133 = (-1L);
    int32_t l_1138[3];
    uint32_t l_1145[4];
    int8_t *l_1148[5][2][9] = {{{&g_320.f0,(void*)0,&g_320.f0,&g_320.f0,(void*)0,&g_320.f0,&g_320.f0,(void*)0,&g_320.f0},{&g_389.f0,&g_122.f0,&g_389.f0,&g_389.f0,&g_122.f0,&g_389.f0,&g_389.f0,&g_122.f0,&g_389.f0}},{{&g_320.f0,(void*)0,&g_320.f0,&g_320.f0,(void*)0,&g_320.f0,&g_320.f0,(void*)0,&g_320.f0},{&g_389.f0,&g_122.f0,&g_389.f0,&g_389.f0,&g_122.f0,&g_389.f0,&g_389.f0,&g_122.f0,&g_389.f0}},{{&g_320.f0,(void*)0,&g_320.f0,&g_320.f0,(void*)0,&g_320.f0,&g_320.f0,(void*)0,&g_320.f0},{&g_389.f0,&g_122.f0,&g_389.f0,&g_389.f0,&g_122.f0,&g_389.f0,&g_389.f0,&g_122.f0,&g_389.f0}},{{&g_320.f0,(void*)0,&g_320.f0,&g_320.f0,(void*)0,&g_320.f0,&g_320.f0,(void*)0,&g_320.f0},{&g_389.f0,&g_122.f0,&g_389.f0,&g_389.f0,&g_122.f0,&g_389.f0,&g_389.f0,&g_122.f0,&g_389.f0}},{{&g_320.f0,(void*)0,&g_320.f0,&g_320.f0,(void*)0,&g_320.f0,&g_320.f0,(void*)0,&g_320.f0},{&g_389.f0,&g_122.f0,&g_389.f0,&g_389.f0,&g_122.f0,&g_389.f0,&g_389.f0,&g_122.f0,&g_389.f0}}};
    union U2 l_1183 = {-4L};
    uint64_t *l_1203 = &l_1106;
    uint8_t ***l_1244[6];
    union U4 l_1252 = {0x55L};
    uint16_t *l_1317 = &g_191;
    int8_t *****l_1328[7][8][3] = {{{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,&g_316,(void*)0},{&g_316,&g_316,&g_316},{&g_316,&g_316,(void*)0},{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316}},{{&g_316,&g_316,&g_316},{&g_316,(void*)0,(void*)0},{&g_316,&g_316,&g_316},{&g_316,&g_316,(void*)0},{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,&g_316,(void*)0}},{{&g_316,&g_316,(void*)0},{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,(void*)0,&g_316},{&g_316,&g_316,&g_316},{&g_316,&g_316,(void*)0},{&g_316,&g_316,(void*)0},{&g_316,(void*)0,&g_316}},{{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,&g_316,(void*)0},{&g_316,&g_316,(void*)0},{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,(void*)0,&g_316}},{{&g_316,&g_316,&g_316},{&g_316,&g_316,(void*)0},{&g_316,&g_316,(void*)0},{&g_316,(void*)0,&g_316},{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,&g_316,(void*)0}},{{&g_316,&g_316,(void*)0},{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,(void*)0,&g_316},{&g_316,&g_316,&g_316},{&g_316,&g_316,(void*)0},{&g_316,&g_316,(void*)0},{&g_316,(void*)0,&g_316}},{{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,&g_316,(void*)0},{&g_316,&g_316,(void*)0},{&g_316,&g_316,&g_316},{&g_316,&g_316,&g_316},{&g_316,(void*)0,&g_316}}};
    int32_t **l_1351[5][7][7] = {{{&g_13,(void*)0,&g_13,(void*)0,&g_13,(void*)0,&g_13},{&g_13,&g_13,&g_13,(void*)0,&g_13,(void*)0,&g_13},{(void*)0,&g_13,&g_13,&g_13,(void*)0,&g_13,&g_13},{&g_13,(void*)0,&g_13,(void*)0,&g_13,&g_13,&g_13},{(void*)0,&g_13,&g_13,&g_13,(void*)0,&g_13,&g_13},{&g_13,&g_13,&g_13,(void*)0,&g_13,&g_13,(void*)0},{&g_13,(void*)0,&g_13,(void*)0,(void*)0,&g_13,(void*)0}},{{(void*)0,&g_13,&g_13,(void*)0,&g_13,&g_13,(void*)0},{&g_13,&g_13,&g_13,&g_13,(void*)0,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,(void*)0,(void*)0},{(void*)0,&g_13,&g_13,&g_13,&g_13,&g_13,(void*)0},{(void*)0,&g_13,&g_13,(void*)0,(void*)0,&g_13,&g_13},{(void*)0,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,(void*)0,&g_13,(void*)0}},{{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{(void*)0,(void*)0,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,(void*)0,(void*)0},{(void*)0,&g_13,&g_13,&g_13,&g_13,(void*)0,(void*)0},{&g_13,(void*)0,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,(void*)0,&g_13,&g_13,(void*)0,&g_13,(void*)0},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13}},{{&g_13,(void*)0,&g_13,(void*)0,&g_13,(void*)0,&g_13},{(void*)0,(void*)0,&g_13,&g_13,(void*)0,(void*)0,(void*)0},{(void*)0,&g_13,&g_13,&g_13,&g_13,(void*)0,(void*)0},{(void*)0,&g_13,&g_13,&g_13,&g_13,&g_13,(void*)0},{(void*)0,&g_13,&g_13,(void*)0,(void*)0,&g_13,&g_13},{(void*)0,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,(void*)0,&g_13,(void*)0}},{{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{(void*)0,(void*)0,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,(void*)0,(void*)0},{(void*)0,&g_13,&g_13,&g_13,&g_13,(void*)0,(void*)0},{&g_13,(void*)0,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,(void*)0,&g_13,&g_13,(void*)0,&g_13,(void*)0},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13}}};
    int32_t *l_1352 = &g_389.f3;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1138[i] = (-1L);
    for (i = 0; i < 4; i++)
        l_1145[i] = 9UL;
    for (i = 0; i < 6; i++)
        l_1244[i] = &g_332;
    for (g_187 = 0; (g_187 <= 2); g_187 += 1)
    {
        int32_t l_1115[7][8] = {{0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L},{0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L},{0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L},{0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L},{0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L},{0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L},{0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L,0xFC266197L}};
        uint8_t l_1127 = 1UL;
        int32_t l_1128 = 0xE1AFAB98L;
        union U3 *l_1130[7] = {&g_835,&g_835,&g_835,&g_835,&g_835,&g_835,&g_835};
        union U3 **l_1129 = &l_1130[6];
        int32_t l_1139 = 0x7F54AAA5L;
        int32_t l_1140 = 1L;
        int32_t l_1141 = 1L;
        int32_t l_1142 = 8L;
        int32_t l_1143 = 0x8D7B172FL;
        int32_t l_1144[2][10] = {{0xDD84289AL,8L,0xDD84289AL,8L,0xDD84289AL,8L,0xDD84289AL,8L,0xDD84289AL,8L},{0x5B27FAF1L,8L,0x5B27FAF1L,8L,0x5B27FAF1L,8L,0x5B27FAF1L,8L,0x5B27FAF1L,8L}};
        union U2 l_1159 = {6L};
        int64_t *l_1230 = &g_801[3];
        int i, j;
        (*l_1129) = (((g_392[0].f1 , l_1106) || (l_1128 |= (((safe_mul_func_uint8_t_u_u(l_1106, 0xE4L)) & (safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((**g_219), 0)) , ((safe_mod_func_int64_t_s_s(l_1115[2][4], (safe_mul_func_uint8_t_u_u(((((((*g_678) < ((safe_div_func_uint16_t_u_u(1UL, (safe_mod_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(1UL)), 0)), 0x1F4736490C357092LL)), l_1106)))) > l_1127)) != l_1127) | (-1L)) ^ g_320.f0) <= 9L), (**g_572))))) ^ (***g_786))), 4UL))) <= (*p_19)))) , (void*)0);
        for (g_109 = 1; (g_109 <= 4); g_109 += 1)
        {
            int32_t *l_1131 = &g_652[1];
            int32_t *l_1132 = &g_392[0].f3;
            int32_t *l_1134 = &g_389.f3;
            int32_t *l_1135 = &g_392[0].f4;
            int32_t *l_1136 = &g_14[0][2][1];
            int32_t *l_1137[2][3][2] = {{{&l_1128,&l_1128},{&g_14[1][3][4],&l_1128},{&l_1128,&g_14[1][3][4]}},{{&l_1128,&l_1128},{&g_14[1][3][4],&l_1128},{&l_1128,&g_14[1][3][4]}}};
            union U2 *l_1224[9][7] = {{&l_1183,&g_132,&l_1183,&g_132,&l_1183,&l_1159,&l_1183},{&l_1159,(void*)0,(void*)0,&l_1159,(void*)0,(void*)0,&l_1159},{&l_1183,&g_132,&l_1183,&l_1159,&l_1183,&l_1159,&l_1183},{&l_1159,&l_1159,&l_1159,&l_1159,&l_1159,&l_1159,&l_1159},{&l_1183,&l_1159,&l_1183,&g_132,&l_1183,&l_1159,&l_1183},{(void*)0,&l_1159,(void*)0,(void*)0,&l_1159,(void*)0,(void*)0},{&l_1183,&g_132,&l_1183,&g_132,&l_1183,&l_1159,&l_1183},{&l_1159,(void*)0,(void*)0,&l_1159,(void*)0,(void*)0,&l_1159},{&l_1183,&g_132,&l_1183,&l_1159,&l_1183,&l_1159,&l_1183}};
            int8_t *l_1229 = &g_320.f4;
            int32_t *** const *l_1231 = &g_328;
            int i, j, k;
            l_1145[1]++;
        }
    }
    for (g_389.f6 = 0; (g_389.f6 == 16); ++g_389.f6)
    {
        int64_t l_1239 = 0x0EF070AB9DA0E027LL;
        struct S0 l_1270 = {6,4,720};
        const uint16_t l_1305 = 65535UL;
        uint64_t l_1307 = 18446744073709551615UL;
        uint16_t *l_1318 = (void*)0;
        int32_t l_1329[10][6] = {{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}};
        union U4 *l_1331 = &g_122;
        struct S0 *l_1334 = &g_1335;
        struct S0 *l_1336 = &g_1337;
        int i, j;
        for (g_389.f5 = 0; (g_389.f5 != 32); g_389.f5 = safe_add_func_int32_t_s_s(g_389.f5, 8))
        {
            uint16_t *l_1245 = (void*)0;
            uint16_t *l_1253[5] = {&g_114,&g_114,&g_114,&g_114,&g_114};
            int32_t l_1262 = 0L;
            int32_t l_1266 = 0x432A000EL;
            union U2 *l_1298 = &g_132;
            int8_t * const **l_1327 = &g_572;
            int8_t * const ***l_1326[2][1][6] = {{{&l_1327,&l_1327,&l_1327,&l_1327,&l_1327,&l_1327}},{{&l_1327,&l_1327,&l_1327,&l_1327,&l_1327,&l_1327}}};
            int8_t * const ****l_1325 = &l_1326[1][0][2];
            union U4 l_1330 = {4L};
            int i, j, k;
            (*g_13) = (*g_13);
            if (l_1239)
                break;
        }
        (*g_13) = l_1329[8][3];
        for (g_389.f3 = 22; (g_389.f3 < 14); g_389.f3 = safe_sub_func_uint8_t_u_u(g_389.f3, 7))
        {
            uint32_t *l_1347 = &g_142[8][4][2];
            uint32_t *l_1348 = &l_1145[1];
            int32_t *l_1349 = (void*)0;
            int32_t *l_1350 = &l_1138[2];
            (*l_1350) ^= ((*g_13) = (safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((l_1106 < (((*l_1347) &= g_288) & (g_320.f4 , 0xE408A2C8L))), 1L)), ((*l_1348) = l_1270.f2))));
        }
    }
    p_19 = (l_1352 = (void*)0);
    return (**g_316);
}







static int8_t * func_20(int32_t * p_21, uint64_t p_22, int8_t * p_23, union U4 p_24)
{
    const struct S0 *l_1103 = (void*)0;
    const struct S0 **l_1104 = &l_1103;
    int8_t *l_1105 = (void*)0;
    (*l_1104) = l_1103;
    return l_1105;
}







static int32_t * func_25(int8_t * p_26, uint32_t p_27)
{
    int32_t l_1085 = 0x2F8E7FDBL;
    int32_t l_1086 = 0xB9E55905L;
    uint32_t *l_1093 = &g_142[4][6][2];
    uint32_t * const *l_1092 = &l_1093;
    int32_t *l_1101 = &g_14[0][2][4];
lbl_1078:
    (*g_13) = 0L;
    for (g_274 = 26; (g_274 <= 22); g_274--)
    {
        int64_t l_1084 = 1L;
        uint32_t *l_1091 = &g_142[8][4][2];
        uint32_t **l_1090[1][8][2] = {{{&l_1091,&l_1091},{&l_1091,&l_1091},{&l_1091,&l_1091},{&l_1091,&l_1091},{&l_1091,&l_1091},{&l_1091,&l_1091},{&l_1091,&l_1091},{&l_1091,&l_1091}}};
        int i, j, k;
        if (g_274)
            goto lbl_1078;
        for (g_320.f0 = 0; (g_320.f0 < (-15)); g_320.f0--)
        {
            int32_t *l_1081 = &g_392[0].f4;
            int32_t *l_1082 = &g_389.f4;
            int32_t *l_1083[3][8][10] = {{{(void*)0,&g_222,(void*)0,&g_14[2][2][0],&g_389.f4,&g_1007[0],&g_392[0].f3,&g_652[0],&g_1007[0],(void*)0},{&g_389.f4,&g_392[0].f4,&g_1007[0],&g_652[0],&g_1007[0],&g_1007[0],&g_1007[0],(void*)0,&g_652[1],&g_652[1]},{&g_1007[0],&g_652[1],&g_389.f3,&g_14[2][3][1],&g_392[0].f4,(void*)0,(void*)0,&g_652[4],(void*)0,&g_222},{&g_14[0][3][0],(void*)0,(void*)0,&g_392[0].f3,&g_392[0].f3,&g_14[2][2][0],&g_652[3],&g_652[3],&g_14[2][2][0],&g_392[0].f3},{(void*)0,&g_389.f4,&g_389.f4,(void*)0,&g_652[1],&g_222,&g_652[3],(void*)0,(void*)0,(void*)0},{&g_392[0].f4,&g_14[2][2][0],&g_392[0].f3,(void*)0,&g_1007[0],&g_1007[0],&g_389.f4,&g_652[3],(void*)0,&g_1007[0]},{&g_652[1],&g_1007[0],(void*)0,(void*)0,&g_392[0].f3,&g_14[2][3][1],(void*)0,&g_652[6],&g_14[2][2][0],&g_392[0].f3},{(void*)0,&g_1007[0],&g_14[1][3][4],&g_392[0].f3,(void*)0,&g_652[0],&g_652[1],&g_1007[0],(void*)0,&g_392[0].f4}},{{&g_392[0].f3,(void*)0,(void*)0,&g_14[2][3][1],(void*)0,&g_392[0].f4,&g_652[0],&g_14[0][0][3],&g_652[1],&g_14[0][0][3]},{&g_1007[0],&g_14[1][3][4],(void*)0,&g_652[0],(void*)0,&g_14[1][3][4],&g_1007[0],&g_392[0].f3,&g_1007[0],&g_392[0].f3},{&g_392[0].f4,&g_652[3],(void*)0,&g_14[2][2][0],&g_389.f4,&g_14[0][0][3],(void*)0,&g_389.f3,(void*)0,&g_392[0].f3},{(void*)0,&g_652[3],&g_1007[0],(void*)0,(void*)0,&g_389.f4,&g_1007[0],&g_392[0].f3,(void*)0,&g_389.f4},{(void*)0,&g_14[1][3][4],&g_14[2][3][1],&g_392[0].f3,&g_652[1],&g_392[0].f4,&g_652[0],&g_389.f4,(void*)0,(void*)0},{&g_652[3],(void*)0,&g_389.f3,&g_14[2][4][4],&g_1007[0],(void*)0,&g_652[1],(void*)0,&g_1007[0],&g_14[2][2][0]},{&g_389.f4,&g_1007[0],&g_652[0],&g_652[1],&g_652[6],&g_652[6],&g_652[1],&g_652[0],&g_652[1],(void*)0},{&g_652[1],&g_389.f4,&g_389.f3,(void*)0,&g_652[0],&g_652[3],&g_652[4],&g_392[0].f3,(void*)0,(void*)0}},{{(void*)0,&g_392[0].f4,&g_392[0].f4,&g_389.f4,&g_652[0],(void*)0,&g_14[2][3][1],&g_14[0][3][0],&g_389.f3,(void*)0},{&g_652[0],&g_652[4],(void*)0,&g_392[0].f4,&g_652[6],&g_652[3],&g_1007[0],&g_389.f4,(void*)0,&g_392[0].f4},{(void*)0,&g_652[1],(void*)0,&g_14[0][0][3],&g_389.f4,&g_652[4],(void*)0,&g_222,(void*)0,&g_389.f4},{&g_652[1],&g_652[1],&g_389.f3,&g_652[4],(void*)0,(void*)0,&g_14[0][3][0],(void*)0,(void*)0,&g_652[4]},{&g_652[1],&g_389.f4,&g_652[1],&g_14[2][3][1],(void*)0,&g_652[0],&g_1007[0],(void*)0,&g_652[1],(void*)0},{&g_14[2][3][1],&g_392[0].f3,&g_14[2][3][1],(void*)0,&g_392[0].f3,&g_652[1],(void*)0,(void*)0,&g_389.f4,&g_14[2][4][4]},{&g_222,(void*)0,&g_652[1],&g_222,&g_652[1],&g_392[0].f3,&g_392[0].f3,(void*)0,&g_652[6],&g_389.f3},{&g_652[4],&g_222,&g_389.f3,&g_1007[0],(void*)0,&g_1007[0],(void*)0,&g_222,(void*)0,&g_389.f4}}};
            uint16_t l_1087 = 4UL;
            int i, j, k;
            ++l_1087;
        }
        if (((l_1090[0][1][1] != l_1092) <= (safe_sub_func_uint32_t_u_u(4294967292UL, ((safe_sub_func_uint8_t_u_u(255UL, (safe_rshift_func_int8_t_s_u((***g_317), 7)))) == g_397.f0)))))
        {
            int32_t *l_1100 = &l_1086;
            return l_1091;
        }
        else
        {
            if (l_1086)
                break;
        }
    }
    return l_1101;
}







static union U5 func_46(int32_t * const p_47, const int8_t * const p_48)
{
    int64_t l_584 = 0x9532ED91C3A14597LL;
    int32_t *** const l_588[8] = {&g_329[8],&g_329[8],&g_329[2],&g_329[8],&g_329[8],&g_329[2],&g_329[8],&g_329[8]};
    uint8_t l_592 = 0xF3L;
    union U3 l_613 = {0x4044A04D4F35580BLL};
    uint8_t ***l_620 = &g_332;
    int16_t *l_662 = &g_111;
    int8_t *l_684[5];
    uint32_t * const l_707 = &g_142[6][7][2];
    union U5 l_720[3] = {{0x517A9DE90A0FD479LL},{0x517A9DE90A0FD479LL},{0x517A9DE90A0FD479LL}};
    int8_t l_757 = 0L;
    uint16_t l_762 = 1UL;
    struct S1 l_899 = {3L,1UL,248UL,0x84E1BF12L,0x95BDD68AL,18446744073709551615UL,-8L,18446744073709551611UL};
    union U2 l_903[1] = {{-1L}};
    struct S0 *l_907 = (void*)0;
    int16_t l_934[6][10] = {{0xDD3AL,0xF0F1L,2L,0xF0F1L,0xDD3AL,0xE3E2L,0xDD3AL,0xF0F1L,2L,0xF0F1L},{0xDD3AL,(-10L),7L,0xF0F1L,7L,(-10L),0xDD3AL,(-10L),7L,0xF0F1L},{7L,0xF0F1L,7L,(-10L),0xDD3AL,(-10L),7L,0xF0F1L,7L,(-10L)},{0xDD3AL,0xF0F1L,2L,0xF0F1L,0xDD3AL,0xE3E2L,0xDD3AL,0xF0F1L,2L,0xF0F1L},{0xDD3AL,(-10L),7L,0xF0F1L,7L,(-10L),0xDD3AL,(-10L),7L,0xF0F1L},{7L,0xF0F1L,7L,(-10L),0xDD3AL,(-10L),7L,0xF0F1L,7L,(-10L)}};
    int32_t l_989 = 2L;
    uint64_t l_1006 = 18446744073709551615UL;
    uint64_t l_1038 = 18446744073709551606UL;
    int32_t *l_1043 = &g_652[1];
    int32_t *l_1044 = (void*)0;
    int i, j;
    for (i = 0; i < 5; i++)
        l_684[i] = &g_320.f4;
    for (g_320.f4 = 0; (g_320.f4 <= (-24)); --g_320.f4)
    {
        uint8_t l_607 = 0x3AL;
        int8_t ****l_617 = &g_317;
        union U4 ****l_618 = &g_538[4][2];
        int32_t l_626 = 8L;
        struct S1 l_627[4] = {{0L,0UL,1UL,0xAD07C973L,-5L,18446744073709551607UL,6L,1UL},{0L,0UL,1UL,0xAD07C973L,-5L,18446744073709551607UL,6L,1UL},{0L,0UL,1UL,0xAD07C973L,-5L,18446744073709551607UL,6L,1UL},{0L,0UL,1UL,0xAD07C973L,-5L,18446744073709551607UL,6L,1UL}};
        union U5 *l_657 = &g_658;
        int32_t l_734 = 6L;
        int32_t l_738 = 0xAA5D3628L;
        int16_t l_760 = (-1L);
        int32_t l_795[3][6] = {{0x0D57B560L,1L,0xC5787BF7L,0x80847621L,0xC5787BF7L,1L},{0xC5787BF7L,0x0D57B560L,0xF7161168L,1L,1L,0xF7161168L},{0xC5787BF7L,0xC5787BF7L,1L,0x80847621L,0L,0xF7161168L}};
        int64_t l_802 = (-3L);
        uint32_t l_806 = 0xF8B093BCL;
        struct S0 l_821[10] = {{-2,2,941},{0,3,370},{-2,2,941},{0,3,370},{-2,2,941},{0,3,370},{-2,2,941},{0,3,370},{-2,2,941},{0,3,370}};
        int32_t ***l_863 = &g_329[0];
        union U2 l_925 = {0L};
        int8_t l_928 = (-3L);
        uint8_t ****l_1023 = &l_620;
        int i, j;
        for (g_111 = 3; (g_111 >= 0); g_111 -= 1)
        {
            int32_t l_582 = 0x0DB74685L;
            struct S0 l_612 = {5,4,181};
            int32_t l_623 = (-4L);
            uint8_t l_649 = 0UL;
            int16_t *l_677 = &g_218[4];
            const union U5 l_685[7] = {{0x3E840F34B9CBC19ALL},{0x3E840F34B9CBC19ALL},{0x3E840F34B9CBC19ALL},{0x3E840F34B9CBC19ALL},{0x3E840F34B9CBC19ALL},{0x3E840F34B9CBC19ALL},{0x3E840F34B9CBC19ALL}};
            int32_t l_711 = 0xAE8AB705L;
            const int32_t *l_729 = (void*)0;
            int32_t l_736 = 9L;
            int32_t l_737[9][6][4] = {{{(-10L),0x4A716A95L,0x7B4650D3L,0x208FCA00L},{(-1L),0x7B4650D3L,0L,0xE1FD9C0DL},{1L,0xD47142E9L,0xB1CECAEAL,0xCF877656L},{1L,0x3773E96AL,0x16C7FA29L,1L},{1L,0L,0xE4B3221FL,0xE4B3221FL},{0xDE43DDA5L,0xDE43DDA5L,0x7D9ED381L,0x7B4650D3L}},{{1L,0xAF335B48L,0L,0x99E7DB06L},{0L,0xE4B3221FL,0x249E4A12L,0L},{(-7L),0xE4B3221FL,0x80C400CBL,0x99E7DB06L},{0xE4B3221FL,0xAF335B48L,0xCF877656L,0x7B4650D3L},{0xE1FD9C0DL,0xDE43DDA5L,(-1L),0xE4B3221FL},{0x4A716A95L,0L,0xE1FD9C0DL,1L}},{{0x208FCA00L,0x3773E96AL,0L,0xCF877656L},{1L,0xD47142E9L,0L,0xE1FD9C0DL},{0L,0x7B4650D3L,(-10L),0x208FCA00L},{(-1L),0x4A716A95L,1L,1L},{(-1L),1L,(-1L),1L},{0x80C400CBL,(-1L),0L,(-1L)}},{{1L,0xCF877656L,0xEA604074L,0x7D9ED381L},{0x16C7FA29L,0L,(-1L),0xBD6348B6L},{0x16C7FA29L,0xCEB5A070L,0xEA604074L,(-1L)},{1L,0xBD6348B6L,0L,0L},{0x80C400CBL,(-7L),(-1L),0x32411D1EL},{(-1L),0L,1L,0L}},{{(-1L),0x80C400CBL,(-10L),0xCED771B5L},{0L,0xA45FD759L,0L,1L},{1L,0x249E4A12L,0L,0x140684DDL},{0x208FCA00L,(-1L),0xE1FD9C0DL,0xCEB5A070L},{0x4A716A95L,(-1L),(-1L),0x4A716A95L},{0xE1FD9C0DL,0x99E7DB06L,0xCF877656L,0L}},{{0xE4B3221FL,1L,0x80C400CBL,1L},{(-7L),(-10L),0x249E4A12L,1L},{0L,1L,0L,0L},{1L,0x99E7DB06L,0x7D9ED381L,0x4A716A95L},{0xDE43DDA5L,(-1L),0xE4B3221FL,0xCEB5A070L},{1L,(-1L),0x16C7FA29L,0x140684DDL}},{{1L,0x249E4A12L,0xB1CECAEAL,1L},{1L,0xA45FD759L,0L,0xCED771B5L},{(-1L),0x80C400CBL,0x7B4650D3L,0L},{(-10L),0L,8L,0x32411D1EL},{0x32411D1EL,(-7L),0x32411D1EL,0L},{0x140684DDL,0xBD6348B6L,0xA45FD759L,(-1L)}},{{0x3773E96AL,0xCEB5A070L,(-7L),0xBD6348B6L},{(-1L),0xDE43DDA5L,0x80C400CBL,1L},{(-10L),0x16C7FA29L,0x99E7DB06L,0L},{0L,0xEA604074L,(-1L),0x208FCA00L},{(-1L),0x208FCA00L,0xAF335B48L,0x140684DDL},{1L,0xA45FD759L,(-1L),1L}},{{0L,(-1L),0x3773E96AL,0x7B4650D3L},{0x140684DDL,0xCED771B5L,1L,0x16C7FA29L},{1L,(-10L),0L,(-7L)},{(-1L),0xE1FD9C0DL,0xCEB5A070L,0xCEB5A070L},{1L,1L,1L,(-1L)},{0x208FCA00L,0xB1CECAEAL,0xDE43DDA5L,1L}}};
            int i, j, k;
            for (g_122.f0 = 1; (g_122.f0 <= 4); g_122.f0 += 1)
            {
                uint32_t *l_578 = &g_142[7][1][0];
                union U4 l_585 = {-10L};
                const int32_t **l_587 = &g_6;
                const int32_t ***l_586 = &l_587;
                g_589 = (((((*l_578) |= ((void*)0 == &g_539)) , (((g_392[0].f4 , ((safe_unary_minus_func_int8_t_s((safe_mul_func_uint8_t_u_u(l_582, ((((l_582 ^ (((~(l_584 >= l_584)) , (l_585 , l_586)) != l_588[5])) > g_274) && g_14[2][3][1]) ^ g_238))))) , (***l_586))) ^ (**g_219)) < l_582)) , (void*)0) != (void*)0);
            }
            for (g_109 = 1; (g_109 <= 4); g_109 += 1)
            {
                const struct S0 l_597 = {4,3,273};
                int32_t l_631[9] = {5L,5L,5L,5L,5L,5L,5L,5L,5L};
                int32_t l_651[5] = {0x56064F22L,0x56064F22L,0x56064F22L,0x56064F22L,0x56064F22L};
                uint32_t l_653 = 0x4930CD54L;
                union U5 *l_656 = &g_460[1];
                int16_t *l_676 = &g_218[4];
                uint16_t l_712 = 6UL;
                struct S1 l_717 = {0xE4L,4UL,0xE4L,0xD712698AL,-1L,18446744073709551615UL,5L,18446744073709551613UL};
                int16_t l_735 = 0xBA4FL;
                int8_t l_739 = 5L;
                uint32_t l_740 = 6UL;
                int i;
                if ((safe_rshift_func_uint8_t_u_u(254UL, 1)))
                {
                    uint8_t ***l_619[9][7] = {{(void*)0,&g_332,&g_332,(void*)0,(void*)0,&g_332,&g_332},{&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332},{(void*)0,(void*)0,&g_332,&g_332,(void*)0,(void*)0,&g_332},{&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332},{(void*)0,&g_332,&g_332,(void*)0,(void*)0,&g_332,&g_332},{&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332},{(void*)0,(void*)0,&g_332,&g_332,(void*)0,(void*)0,&g_332},{&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332},{(void*)0,&g_332,&g_332,(void*)0,(void*)0,&g_332,&g_332}};
                    int32_t l_621 = (-1L);
                    int64_t l_622 = 1L;
                    union U4 l_636 = {0x52L};
                    int i, j;
                    for (g_114 = 1; (g_114 <= 4); g_114 += 1)
                    {
                        uint16_t l_598 = 1UL;
                        int16_t *l_628 = (void*)0;
                        int16_t *l_629 = (void*)0;
                        int16_t *l_630 = &g_218[2];
                        int64_t *l_642[2];
                        int32_t l_650 = 9L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_642[i] = &g_389.f6;
                        ++l_592;
                        l_623 |= ((l_582 = ((safe_lshift_func_int16_t_s_u((l_597 , l_598), 6)) && (safe_rshift_func_int8_t_s_s((l_622 = (((**g_573) = (0xC1086255FB328A13LL ^ (safe_mod_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((0x3BEFL != (safe_add_func_uint16_t_u_u(l_607, (safe_sub_func_uint16_t_u_u((g_62 >= (safe_div_func_uint32_t_u_u((((((l_612 , (l_613 , (safe_unary_minus_func_int64_t_s((((((safe_rshift_func_uint16_t_u_s(((((void*)0 == l_617) && g_187) > 0UL), g_187)) , &g_538[4][2]) == l_618) | l_598) || (*g_13)))))) , l_619[7][4]) == l_620) < l_621) > l_612.f0), (*g_13)))), 0x692AL))))), g_142[8][4][2])) & 0x541EL), (*g_6))))) || 0x26L)), 2)))) ^ 0x6036B36BL);
                        l_582 = (((safe_mod_func_int8_t_s_s((*p_48), (l_626 = (l_623 |= (*p_48))))) <= (&g_539 == ((l_627[0] , l_627[0]) , (*l_618)))) , (((*l_630) &= 0x3728L) || ((l_631[1] &= (l_621 != (0x1AL ^ (*p_48)))) ^ 0x6FB0L)));
                        l_621 |= (((safe_lshift_func_int16_t_s_s((((0L < 0xCFL) <= (safe_add_func_uint32_t_u_u(((((l_636 , (safe_add_func_uint16_t_u_u(((l_651[4] |= (l_650 ^= (safe_sub_func_uint64_t_u_u(0xC72DF8FF25347D79LL, ((g_392[0].f6 ^= ((~0x404C2ADFBD9E0B16LL) < (**g_332))) || (safe_sub_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(((((((*p_48) | ((((safe_sub_func_int16_t_s_s(g_397.f2, g_288)) <= l_627[0].f7) || l_612.f1) > 65535UL)) ^ l_649) > (***g_317)) , 0x7800CB7CL) , 255UL), (*g_333))) == l_612.f0) & g_392[0].f6), 65528UL))))))) || 0x2D3813B8L), g_389.f7))) ^ l_631[1]) != g_652[1]) ^ g_238), 4294967295UL))) , 4L), 11)) & l_598) >= 0x7B0EL);
                    }
                    if ((*g_6))
                        break;
                    l_653--;
                    if (l_627[0].f5)
                        break;
                }
                else
                {
                    union U5 **l_659 = &l_656;
                    int32_t l_681 = 0L;
                    int64_t *l_686 = &g_374;
                    uint32_t *l_708 = &g_142[8][4][2];
                    int32_t l_722 = 0xBCC7A16BL;
                    (*l_659) = (l_657 = l_656);
                    for (g_389.f5 = 1; (g_389.f5 <= 4); g_389.f5 += 1)
                    {
                        int16_t *l_675 = &g_218[2];
                        int16_t **l_674[6][9] = {{&l_662,(void*)0,(void*)0,&l_662,(void*)0,&l_662,(void*)0,(void*)0,&l_662},{&l_675,&l_675,&l_662,&l_675,&l_675,&l_675,&l_675,&l_662,&l_675},{(void*)0,(void*)0,&l_662,&l_662,(void*)0,(void*)0,(void*)0,&l_662,&l_662},{&l_675,&l_675,&l_675,&l_662,&l_675,&l_675,&l_675,&l_675,&l_662},{&l_662,(void*)0,&l_662,(void*)0,(void*)0,&l_662,(void*)0,&l_662,(void*)0},{(void*)0,&l_675,&l_675,(void*)0,&l_662,(void*)0,&l_675,&l_675,(void*)0}};
                        uint16_t *l_682[6];
                        int8_t *l_683 = &g_392[0].f0;
                        int i, j;
                        for (i = 0; i < 6; i++)
                            l_682[i] = &g_191;
                        l_651[3] = ((((((safe_add_func_int8_t_s_s(((*l_683) |= (((void*)0 == l_662) <= (safe_mod_func_int8_t_s_s(0x61L, (safe_rshift_func_uint16_t_u_s((((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_612.f1, (safe_mod_func_int64_t_s_s(3L, (~((l_676 = &g_218[2]) != (g_678 = l_677))))))), (0x29CA7B4FC70B68E2LL ^ (safe_mul_func_uint16_t_u_u((l_582 = l_681), g_397.f2))))) , (**g_332)) <= (*g_333)), l_627[0].f2)))))), 2UL)) , l_681) , (void*)0) != l_684[1]) || l_612.f1) && l_627[0].f7);
                    }
                    if ((l_685[1] , (((*l_686) |= l_631[1]) != (l_681 ^= (((*g_333) && (l_651[4] = (safe_lshift_func_uint16_t_u_s(((g_114 & ((0xF41D2A77B8F7BCF4LL && ((6L <= (safe_mul_func_int16_t_s_s(l_607, l_653))) > ((!0x1D103A86L) >= (-10L)))) <= 0x69L)) >= (**g_332)), 4)))) >= l_607)))))
                    {
                        uint32_t **l_709 = &l_708;
                        int64_t *l_710 = &g_389.f6;
                        int32_t l_715 = 5L;
                        uint16_t *l_721[9][9] = {{&g_191,&g_191,&g_187,&g_244,(void*)0,&g_114,(void*)0,(void*)0,&g_187},{&g_244,(void*)0,&g_114,&g_244,(void*)0,&g_244,&g_114,(void*)0,&g_187},{&g_244,&g_244,&g_187,(void*)0,&g_187,&g_187,(void*)0,&g_191,(void*)0},{&g_191,(void*)0,&g_114,(void*)0,(void*)0,&g_114,(void*)0,&g_191,&g_114},{&g_244,&g_187,(void*)0,(void*)0,&g_191,&g_114,&g_187,(void*)0,(void*)0},{&g_187,&g_187,&g_244,&g_191,&g_244,&g_187,&g_187,&g_191,&g_114},{&g_114,&g_191,&g_191,&g_244,(void*)0,&g_191,(void*)0,&g_187,(void*)0},{(void*)0,&l_712,&l_712,&l_712,&l_712,(void*)0,&g_114,&g_191,&g_187},{&g_187,(void*)0,(void*)0,&g_191,&g_114,&g_187,(void*)0,(void*)0,&g_187}};
                        int32_t l_723 = 0x2CC12C6EL;
                        int i, j;
                        l_712 &= (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((((((l_627[0].f4 == (((*l_707) &= (safe_div_func_int64_t_s_s(((*l_710) ^= ((((*g_678) = 0xF663L) <= ((safe_mod_func_int64_t_s_s(l_627[0].f0, (((safe_mod_func_int64_t_s_s((~0x4032L), (((g_117 & ((l_626 = ((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(l_623, g_658.f0)), (l_707 == ((*l_709) = l_708)))) ^ 1UL)) && (*g_13))) > 0xA0B4E7D5D557DE2DLL) | g_392[0].f5))) == 0L) , g_374))) > 0xBD95A018L)) || l_685[1].f0)), g_389.f3))) | 0x87E04851L)) ^ 2L) >= 0x594C7A53L) || l_627[0].f3) && l_627[0].f5), l_711)), (*g_13)));
                        l_715 = (g_728[0][1] |= ((l_681 , (((l_627[0].f4 | 0x019C7B48L) && 0xC9E36545A4127799LL) , 1L)) ^ (safe_rshift_func_int16_t_s_s(((*l_677) = l_715), (l_723 = (!((l_717 , (safe_sub_func_uint32_t_u_u(((*l_708) = (l_720[1] , (((--g_191) , ((safe_sub_func_uint64_t_u_u(0xFD8193D98A70C3BALL, l_715)) , (**l_617))) == (*g_317)))), l_685[1].f2))) == g_444.f3)))))));
                    }
                    else
                    {
                        const int32_t **l_730 = &l_729;
                        if ((*g_13))
                            break;
                        (*l_730) = l_729;
                        return g_460[1];
                    }
                }
                for (l_607 = 0; (l_607 <= 4); l_607 += 1)
                {
                    uint32_t l_731 = 0UL;
                    l_731--;
                }
                --l_740;
            }
        }
        for (g_205 = 17; (g_205 <= 45); g_205++)
        {
            uint16_t l_752 = 0UL;
            uint16_t *l_761 = &g_191;
            int32_t l_789 = 0x098E4626L;
            int32_t l_793 = (-8L);
            int32_t l_794 = 0xE8EBCF63L;
            int32_t l_796 = 1L;
            int32_t l_797[3];
            union U3 *l_834 = &g_835;
            uint64_t l_836 = 2UL;
            const int32_t *l_843 = &g_444.f2;
            const uint16_t l_857 = 0xE248L;
            uint8_t l_893 = 0xCCL;
            struct S0 l_904 = {7,4,443};
            uint32_t l_957 = 0x5DC57A64L;
            union U4 l_986 = {0xBCL};
            struct S1 l_1012 = {8L,0xFB4E07E8L,0x6BL,0x920EC134L,0xF14E7EEFL,0UL,0xB4047AB7ED99F29CLL,3UL};
            int8_t ****l_1019 = &g_317;
            uint32_t l_1041[3];
            int64_t l_1042[4][9] = {{0xD1427D000F9754A6LL,0L,0xD1427D000F9754A6LL,0xD1427D000F9754A6LL,0L,0xD1427D000F9754A6LL,0xD1427D000F9754A6LL,0L,0xD1427D000F9754A6LL},{0x14D05790898131E4LL,(-10L),0x14D05790898131E4LL,0x14D05790898131E4LL,(-10L),0x14D05790898131E4LL,0x14D05790898131E4LL,(-10L),0x14D05790898131E4LL},{0xD1427D000F9754A6LL,0L,0xD1427D000F9754A6LL,0xD1427D000F9754A6LL,0L,0xD1427D000F9754A6LL,0xD1427D000F9754A6LL,0L,0xD1427D000F9754A6LL},{0x14D05790898131E4LL,(-10L),0x14D05790898131E4LL,0x14D05790898131E4LL,(-10L),0x14D05790898131E4LL,0x14D05790898131E4LL,(-10L),0x14D05790898131E4LL}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_797[i] = 0xF808448CL;
            for (i = 0; i < 3; i++)
                l_1041[i] = 0xC6DD6AE1L;
        }
    }
    l_1044 = l_1043;
    g_388[4] = &l_899;
    for (g_191 = 26; (g_191 == 32); g_191 = safe_add_func_uint32_t_u_u(g_191, 8))
    {
        union U5 l_1049 = {-1L};
        struct S0 l_1070 = {-4,3,417};
        union U4 ***l_1071 = &g_539;
        int64_t *l_1072 = &g_389.f6;
        (*l_1044) = (safe_sub_func_uint64_t_u_u((l_1049 , (((*l_1072) = ((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(0xE9L, (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((l_903[0] , (safe_lshift_func_int16_t_s_u((*g_678), (*l_1044)))) | (safe_div_func_int16_t_s_s(l_1049.f1, (safe_add_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((g_84 && (safe_lshift_func_uint8_t_u_u(((l_1070 , l_1071) == l_1071), (**g_332)))), (*g_6))) & 0L) & g_374), g_652[1])) & l_1070.f1), (*g_6)))))), (-8L))), l_1070.f1)))), (*p_48))) , l_1070.f1)) != l_1049.f2)), (*l_1043)));
    }
    return l_720[1];
}







static int8_t * func_50(uint32_t p_51, int32_t * p_52, uint64_t p_53)
{
    const int8_t *l_61 = &g_62;
    const int8_t **l_60 = &l_61;
    union U2 l_63[4] = {{1L},{1L},{1L},{1L}};
    uint32_t l_64 = 0xA1289665L;
    struct S1 l_65 = {0x03L,18446744073709551615UL,1UL,0L,1L,0UL,0xFA6B86D5672FEE61LL,0UL};
    int8_t * const l_570 = &g_571;
    int8_t * const *l_569 = &l_570;
    int8_t * const **l_568[5][10] = {{&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569},{&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569},{&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569},{&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569},{&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569}};
    union U2 *l_575[8][7] = {{&l_63[3],&l_63[3],&l_63[3],&l_63[3],&l_63[3],&l_63[3],&l_63[3]},{&g_132,&l_63[3],&l_63[3],&l_63[3],&g_132,&l_63[1],&g_132},{&l_63[3],&l_63[3],&l_63[3],&l_63[3],&l_63[3],&l_63[3],&l_63[3]},{&l_63[0],&l_63[3],&l_63[0],&g_132,&g_132,&g_132,&l_63[0]},{&l_63[3],&l_63[3],&l_63[0],&l_63[3],&l_63[3],&l_63[0],&l_63[3]},{&g_132,&l_63[1],&l_63[3],&g_132,&l_63[3],&l_63[1],&l_63[0]},{&l_63[0],&l_63[3],&l_63[0],&l_63[0],&l_63[3],&l_63[0],&l_63[0]},{&l_63[0],&g_132,&g_132,&g_132,&l_63[0],&l_63[3],&l_63[0]}};
    union U2 **l_574 = &l_575[7][6];
    int i, j;
    g_573 = (g_572 = func_54(l_60, l_63[3], l_64, l_65, g_14[2][0][5]));
    (*l_574) = &l_63[3];
    return (**g_317);
}







static int8_t ** func_54(const int8_t ** p_55, union U2 p_56, int64_t p_57, struct S1 p_58, const int16_t p_59)
{
    uint8_t *l_82 = (void*)0;
    uint8_t *l_83 = &g_84;
    int32_t l_96 = 1L;
    uint64_t *l_107 = &g_108;
    int16_t *l_110[3][7] = {{&g_111,(void*)0,(void*)0,&g_111,(void*)0,(void*)0,&g_111},{&g_111,(void*)0,(void*)0,&g_111,(void*)0,(void*)0,&g_111},{&g_111,(void*)0,(void*)0,&g_111,(void*)0,(void*)0,&g_111}};
    uint16_t *l_112 = (void*)0;
    uint16_t *l_113 = &g_114;
    int8_t *l_116[3][6] = {{&g_117,&g_117,&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117,&g_117,&g_117}};
    int8_t **l_115[9] = {&l_116[0][4],&l_116[0][5],&l_116[0][5],&l_116[0][4],&l_116[0][5],&l_116[0][5],&l_116[0][4],&l_116[0][5],&l_116[0][5]};
    int8_t ***l_118 = &l_115[1];
    int32_t l_119 = 0x6B90ED9AL;
    uint8_t *l_237 = &g_238;
    int32_t *l_239 = &g_222;
    int32_t l_243[8][5][6] = {{{0xFFA9D3D9L,(-3L),0x53429015L,(-5L),0x6BF42725L,1L},{0xEBC3BCD2L,0L,0x764EF907L,0x0C8DFE3DL,1L,0xA15B5CB2L},{0L,0xA874DA70L,0L,(-1L),(-5L),0L},{0x6BF42725L,0xEDB85034L,(-5L),6L,0x44B9ECC4L,0x4142CD7CL},{(-1L),(-1L),0L,0xA2EE58E9L,0x96B6CEE0L,(-6L)}},{{0x0C6CAFF2L,(-1L),6L,(-3L),1L,0L},{7L,0x1691F10EL,0x1DA3EC71L,7L,0x50D35BF5L,7L},{9L,0L,0xF4BDAF04L,(-5L),(-1L),0L},{1L,0x6BF42725L,(-1L),0x836CB451L,1L,1L},{0xA0710ADEL,4L,0x836CB451L,1L,0x176D6B95L,5L}},{{1L,(-1L),0x53429015L,0x1DA3EC71L,1L,0xFFA9D3D9L},{7L,0xAB9E387DL,(-5L),0x3F46A814L,9L,0xD74773DBL},{7L,0L,1L,5L,5L,1L},{0xEEE53F05L,0xEEE53F05L,0xAB9E387DL,6L,0x764EF907L,1L},{0x44B9ECC4L,4L,0L,0xFB2BC63CL,0xA874DA70L,0xAB9E387DL}},{{0L,0x44B9ECC4L,0L,0xA0710ADEL,0xEEE53F05L,1L},{0xEBC3BCD2L,0xA0710ADEL,0xAB9E387DL,0xF4BDAF04L,0x50D35BF5L,1L},{0xF4BDAF04L,0x50D35BF5L,1L,1L,0x690A4EC3L,0xD74773DBL},{0xEDB85034L,(-1L),(-5L),0x3C28935DL,(-5L),0xFFA9D3D9L},{(-5L),(-1L),0x53429015L,0x05F5591CL,(-5L),5L}},{{0xF210CA2AL,0L,0x836CB451L,1L,0x1DA3EC71L,0xA0710ADEL},{0x9B3CD100L,0xA15B5CB2L,0L,1L,0x0C6CAFF2L,0x3C28935DL},{6L,0x9CDA35C1L,0x92315917L,0x3F46A814L,0L,1L},{(-6L),(-1L),0xF4BDAF04L,0x176D6B95L,0xEBC3BCD2L,0x35F3ACB0L},{0xF4BDAF04L,0x4142CD7CL,0xB61DA003L,1L,1L,0x552E39F1L}},{{(-5L),1L,0x96B6CEE0L,0xF4BDAF04L,1L,(-5L)},{0xA2EE58E9L,1L,0xEBC3BCD2L,0L,0L,0x3C28935DL},{0L,0xEDB85034L,0xA0B38547L,7L,0xA15B5CB2L,0xACF91862L},{(-1L),0x764EF907L,7L,1L,7L,0x764EF907L},{0xE1E1634FL,0L,1L,0x96B6CEE0L,0x7731CCDAL,0xEBC3BCD2L}},{{(-5L),9L,1L,0L,0x35F3ACB0L,0x44B9ECC4L},{0x05F5591CL,9L,7L,0x836CB451L,0x7731CCDAL,0xFB2BC63CL},{0xA0B38547L,0L,0x0106B702L,0x3F46A814L,7L,0L},{0L,0x764EF907L,0x0C8DFE3DL,1L,0xA15B5CB2L,0x690A4EC3L},{0x552E39F1L,0xEDB85034L,0L,0x035A7E59L,0L,1L}},{{0x690A4EC3L,1L,0x0C7DF349L,0xEBC3BCD2L,1L,(-1L)},{0x92315917L,1L,7L,0L,1L,6L},{0x53429015L,0x4142CD7CL,0L,0xA15B5CB2L,0xEBC3BCD2L,0x92315917L},{0xAB9E387DL,(-1L),0L,0L,0L,0x764EF907L},{9L,0x9CDA35C1L,(-5L),0x035A7E59L,0x0C6CAFF2L,0x0C8DFE3DL}}};
    uint64_t l_247 = 0xDA177585C1E8B452LL;
    struct S0 l_254 = {-4,2,410};
    int8_t l_264[7][2] = {{0L,(-9L)},{0L,0L},{(-9L),0L},{0L,(-9L)},{0L,0L},{(-9L),0L},{0L,(-9L)}};
    int8_t l_298 = 0xD7L;
    uint64_t l_335 = 1UL;
    uint8_t ***l_387 = &g_332;
    uint8_t ****l_386 = &l_387;
    struct S1 *l_391 = &g_392[0];
    union U4 *l_536[2];
    union U4 **l_535 = &l_536[1];
    union U4 ***l_534 = &l_535;
    int8_t **l_552 = &l_116[0][4];
    uint16_t l_561 = 0x6CA5L;
    int16_t l_564 = 0xB9F2L;
    uint32_t l_565 = 2UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_536[i] = &g_320;
    (*l_239) &= (safe_mul_func_uint8_t_u_u(((*l_237) &= (((safe_sub_func_int32_t_s_s((func_70(((p_56.f0 > (safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((((*l_83)--) == ((safe_mod_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((p_55 == ((*l_118) = ((safe_sub_func_int16_t_s_s(((((g_14[2][3][1] > p_56.f0) <= (safe_unary_minus_func_int16_t_s((safe_mul_func_int8_t_s_s(l_96, (((g_62 == (((*l_113) = ((safe_lshift_func_int16_t_s_u((g_111 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((g_109 &= ((*l_107) = ((safe_sub_func_int64_t_s_s(((((safe_div_func_int32_t_s_s(p_58.f4, 0xF0789CDEL)) , l_96) >= 0x043BC77BL) < (-2L)), l_96)) > 0x97A3L))) < p_58.f7), g_62)), p_58.f2))), 9)) == p_58.f7)) || l_96)) != 0L) | g_7)))))) | l_96) || l_96), 0x6AF6L)) , l_115[1]))), p_58.f4)) < g_14[2][2][3]) || 0x622EL), g_7)) < 0x1E4A26432604E4D2LL)) ^ l_96), l_119)), 0L))) && 0xCD9F560E83E0D67CLL), &g_117, &l_96, l_116[0][1], g_14[2][2][3]) , (*g_6)), p_58.f0)) , l_119) || 0UL)), 0xB5L));
    if ((g_122 , (*l_239)))
    {
        int32_t **l_240 = &g_13;
        int32_t *l_241[9][9] = {{&l_119,&l_119,&l_96,&l_119,&g_222,(void*)0,&g_222,&l_119,&l_96},{&g_14[1][0][5],&g_14[1][0][5],&g_14[2][3][1],&l_96,&l_119,(void*)0,(void*)0,&l_119,(void*)0},{&l_96,&g_14[0][4][2],&l_119,&l_119,&g_14[0][4][2],&l_96,&g_14[2][3][1],(void*)0,(void*)0},{&l_119,&l_96,&g_14[2][3][1],&g_14[2][0][2],&g_222,&g_222,&g_14[2][0][2],&g_14[2][3][1],&l_96},{&g_14[0][4][2],&l_96,&l_96,&g_222,(void*)0,&l_119,&g_14[2][3][1],&g_14[2][3][1],&l_119},{&g_222,&g_14[2][3][1],(void*)0,&g_14[2][3][1],&g_222,&l_119,(void*)0,&g_14[1][0][5],&g_14[2][0][2]},{(void*)0,&l_96,&g_222,&l_96,(void*)0,(void*)0,&l_119,(void*)0,&g_14[2][3][1]},{&l_96,&l_119,(void*)0,(void*)0,&g_14[2][3][1],&l_119,&g_14[2][0][2],&l_119,&g_14[2][3][1]},{&l_96,(void*)0,(void*)0,&l_96,(void*)0,&l_96,&g_222,&l_96,(void*)0}};
        int8_t l_242[8][6] = {{2L,0L,0L,0L,2L,5L},{0x15L,0L,(-6L),0x15L,0x5EL,(-1L)},{0x15L,0x5EL,(-1L),0L,0L,(-1L)},{2L,2L,(-6L),6L,0L,5L},{0L,0x5EL,0L,6L,0x5EL,(-6L)},{2L,0L,0L,0L,2L,5L},{0x15L,0L,(-6L),0x15L,0x5EL,(-1L)},{0x15L,0x5EL,(-1L),0L,0L,(-1L)}};
        uint32_t *l_255[7][8] = {{&g_142[8][4][2],&g_142[8][4][2],&g_142[3][1][2],(void*)0,&g_142[3][1][2],&g_142[8][4][2],&g_142[8][4][2],&g_142[3][1][2]},{&g_142[8][4][2],&g_142[3][1][2],&g_142[3][1][2],&g_142[8][4][2],&g_142[8][2][2],&g_142[8][4][2],&g_142[3][1][2],&g_142[3][1][2]},{&g_142[3][1][2],&g_142[8][2][2],(void*)0,(void*)0,&g_142[8][2][2],&g_142[3][1][2],&g_142[8][2][2],(void*)0},{&g_142[8][4][2],&g_142[8][2][2],&g_142[8][4][2],&g_142[3][1][2],&g_142[3][1][2],&g_142[8][4][2],&g_142[8][2][2],&g_142[8][4][2]},{&g_142[8][4][2],&g_142[3][1][2],(void*)0,&g_142[3][1][2],&g_142[8][4][2],&g_142[8][4][2],&g_142[3][1][2],(void*)0},{&g_142[8][4][2],&g_142[8][4][2],&g_142[3][1][2],(void*)0,&g_142[3][1][2],&g_142[8][4][2],&g_142[8][4][2],&g_142[3][1][2]},{&g_142[8][4][2],&g_142[3][1][2],&g_142[3][1][2],&g_142[8][4][2],&g_142[8][2][2],&g_142[8][4][2],&g_142[3][1][2],&g_142[3][1][2]}};
        int8_t ***l_262 = &l_115[1];
        int8_t ****l_263 = &l_118;
        int i, j;
        (*l_240) = &g_14[2][0][4];
        --g_244;
        --l_247;
        (*l_239) = ((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((*g_6), (l_254 , p_58.f4))), 6)) | ((((g_111 = (g_218[1] |= g_62)) == (*l_239)) || (g_142[8][4][2]++)) >= (((safe_add_func_uint16_t_u_u((g_205 | (safe_sub_func_int8_t_s_s((((((l_264[5][1] = (((((*l_263) = l_262) == (void*)0) ^ 0L) <= 18446744073709551611UL)) | 0L) >= (*l_239)) , 0xCDDBL) & 0UL), (**p_55)))), 0xBBC3L)) >= 0x6FL) != (*l_239))));
    }
    else
    {
        for (l_119 = 0; (l_119 >= 29); l_119++)
        {
            (*l_239) = (*g_6);
            if ((*g_6))
                break;
        }
        (*l_118) = &g_220;
    }
    return (**g_316);
}







static union U2 func_70(uint32_t p_71, int8_t * p_72, int32_t * p_73, int8_t * p_74, uint32_t p_75)
{
    union U5 l_136 = {-1L};
    union U2 l_145 = {0xA7L};
    int32_t l_158[8] = {0x6333BD90L,(-1L),0x6333BD90L,(-1L),0x6333BD90L,(-1L),0x6333BD90L,(-1L)};
    int32_t *l_221 = &g_222;
    int32_t l_223 = 0L;
    int32_t *l_224 = &g_222;
    int32_t *l_225 = &g_222;
    int32_t *l_226 = &l_223;
    int32_t *l_227 = &g_222;
    int32_t l_228[8] = {1L,0xEDFDEEC5L,0xEDFDEEC5L,1L,0xEDFDEEC5L,0xEDFDEEC5L,1L,0xEDFDEEC5L};
    int32_t *l_229 = &g_222;
    int32_t *l_230 = (void*)0;
    int32_t *l_231[5][8][2] = {{{&g_222,&g_222},{(void*)0,&g_222},{&g_222,(void*)0},{&g_222,&g_222},{(void*)0,&g_222},{&g_222,(void*)0},{&g_222,&g_222},{(void*)0,&g_222}},{{&g_222,(void*)0},{&g_222,&g_222},{(void*)0,&g_222},{&g_222,(void*)0},{&g_222,&g_222},{(void*)0,&g_222},{&g_222,(void*)0},{&g_222,&g_222}},{{(void*)0,&g_222},{&g_222,(void*)0},{&g_222,&g_222},{(void*)0,&g_222},{&g_222,(void*)0},{&g_222,&g_222},{(void*)0,&g_222},{&g_222,(void*)0}},{{&g_222,(void*)0},{&g_14[2][3][1],(void*)0},{(void*)0,&g_14[2][3][1]},{(void*)0,(void*)0},{&g_14[2][3][1],(void*)0},{(void*)0,&g_14[2][3][1]},{(void*)0,(void*)0},{&g_14[2][3][1],(void*)0}},{{(void*)0,&g_14[2][3][1]},{(void*)0,(void*)0},{&g_14[2][3][1],(void*)0},{(void*)0,&g_14[2][3][1]},{(void*)0,(void*)0},{&g_14[2][3][1],(void*)0},{(void*)0,&g_14[2][3][1]},{(void*)0,(void*)0}}};
    uint32_t l_232 = 0xD3527156L;
    int32_t **l_235 = (void*)0;
    int32_t **l_236[8] = {&l_227,&l_225,&l_227,&l_227,&l_225,&l_227,&l_227,&l_225};
    int i, j, k;
    for (p_71 = 9; (p_71 == 14); p_71++)
    {
        uint64_t l_123 = 0x7F3414C507BD8287LL;
        int32_t l_192 = 0x5827F4EFL;
        union U5 l_212 = {-1L};
        int32_t **l_213 = &g_13;
        int16_t *l_216 = &g_111;
        int16_t *l_217 = &g_218[4];
        if ((g_122 , ((*p_73) = l_123)))
        {
            union U2 l_135 = {5L};
            uint16_t *l_141 = &g_114;
            const union U3 l_143 = {0UL};
            int8_t l_144 = 1L;
            (*p_73) |= ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u((((~((safe_mul_func_int8_t_s_s(((((p_73 != (g_132 , (void*)0)) , ((((g_14[2][3][1] != (safe_sub_func_uint16_t_u_u((l_135 , (g_142[8][4][2] |= ((*l_141) ^= (l_136 , (safe_mod_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(l_136.f1, p_71)), 1UL)))))), 0xC952L))) > g_117) , 1UL) , l_143)) , p_73) == (void*)0), p_75)) | g_14[2][3][1])) & (-2L)) , l_143.f3))) != p_71), 4)), l_144)) ^ g_109);
            if ((*p_73))
                break;
            return l_145;
        }
        else
        {
            int16_t l_152[3];
            int64_t l_195 = 0L;
            int8_t l_201 = (-2L);
            int32_t l_204[1];
            int i;
            for (i = 0; i < 3; i++)
                l_152[i] = 0xCFC3L;
            for (i = 0; i < 1; i++)
                l_204[i] = 1L;
            (*p_73) = (*p_73);
            if ((g_142[9][4][0] == (safe_sub_func_int16_t_s_s(g_108, g_114))))
            {
                uint64_t l_159 = 0x4FEBEC88D1BEA047LL;
                union U2 l_160 = {1L};
                for (g_117 = 0; (g_117 < 4); g_117 = safe_add_func_uint32_t_u_u(g_117, 6))
                {
                    int32_t **l_154 = &g_13;
                    (*p_73) &= (((safe_lshift_func_int16_t_s_s(l_152[1], ((l_123 != (~(((*g_13) , ((*l_154) = &g_14[2][3][1])) != p_73))) ^ (((void*)0 != &g_14[2][3][1]) <= ((safe_mul_func_int16_t_s_s(((((-5L) != (+g_62)) < l_158[0]) && g_84), p_75)) > l_159))))) >= l_123) <= 0xE84EL);
                    return l_160;
                }
                if ((*p_73))
                    continue;
            }
            else
            {
                uint8_t l_173[7][10][3] = {{{1UL,5UL,0x96L},{0x09L,5UL,250UL},{0x5DL,9UL,0x5DL},{0x46L,1UL,5UL},{255UL,0x81L,2UL},{0x3BL,0x78L,1UL},{5UL,0xF6L,248UL},{0x3BL,0xDDL,0xC1L},{255UL,0x09L,0x81L},{0x46L,255UL,0UL}},{{0x5DL,0xE0L,1UL},{0x09L,2UL,1UL},{1UL,0UL,0UL},{0xC1L,0x3BL,0x81L},{9UL,6UL,0xC1L},{0x30L,0xAEL,248UL},{8UL,0x96L,1UL},{0xE0L,0xAEL,2UL},{0x78L,6UL,5UL},{0x14L,0x3BL,0x5DL}},{{255UL,0UL,250UL},{0UL,2UL,0x96L},{0UL,0xE0L,0x14L},{255UL,255UL,8UL},{0x14L,0x09L,9UL},{0x78L,0xDDL,0xF6L},{0xE0L,0xF6L,0x74L},{8UL,0x78L,0xF6L},{0x30L,0x81L,9UL},{9UL,1UL,8UL}},{{0xC1L,9UL,0x14L},{1UL,5UL,0x96L},{0x09L,5UL,250UL},{0x5DL,9UL,0x5DL},{0x46L,1UL,5UL},{255UL,0x81L,2UL},{0x3BL,0x78L,1UL},{5UL,0xF6L,248UL},{0x3BL,0xDDL,0xC1L},{255UL,0x09L,0x81L}},{{0x46L,255UL,0UL},{0x5DL,0xE0L,1UL},{0x09L,2UL,1UL},{1UL,0UL,0UL},{0xC1L,0x3BL,0x81L},{9UL,6UL,0xC1L},{0x30L,0xAEL,248UL},{8UL,0x96L,1UL},{0xE0L,0xAEL,2UL},{0x78L,6UL,5UL}},{{0x14L,0x3BL,0x30L},{0x68L,0xDDL,1UL},{0xDDL,0x78L,248UL},{0xDDL,5UL,2UL},{0x68L,0x68L,255UL},{2UL,0xE0L,1UL},{0x96L,0x14L,9UL},{5UL,9UL,0x3BL},{255UL,0x96L,9UL},{0x38L,0x94L,1UL}},{{1UL,0x46L,255UL},{0x17L,1UL,2UL},{0UL,250UL,248UL},{0xE0L,250UL,1UL},{0x30L,1UL,0x30L},{0x81L,0x46L,250UL},{8UL,0x94L,0x78L},{255UL,0x96L,0UL},{250UL,9UL,0x74L},{255UL,0x14L,0x17L}}};
                int32_t l_200 = 2L;
                int i, j, k;
                for (g_114 = 29; (g_114 <= 37); g_114 = safe_add_func_int16_t_s_s(g_114, 3))
                {
                    uint16_t *l_186 = &g_187;
                    uint16_t *l_190 = &g_191;
                    int32_t l_196[6] = {1L,0xB0DACC5EL,0xB0DACC5EL,1L,0xB0DACC5EL,0xB0DACC5EL};
                    uint8_t *l_197 = &g_84;
                    uint8_t *l_198 = (void*)0;
                    uint8_t *l_199[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_202 = (void*)0;
                    int32_t *l_203[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_203[i] = &l_196[5];
                    (*p_73) ^= 0x28ECC62BL;
                    (*p_73) = (safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s(l_173[6][0][2], l_145.f0)) && (g_122.f3 >= ((g_14[2][3][1] , ((((l_200 ^= ((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((((*l_197) = ((safe_mul_func_uint16_t_u_u(p_71, ((((safe_div_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((l_192 = ((*l_190) &= ((*l_186)++))), 0)), p_75)) < (safe_rshift_func_uint16_t_u_u(g_14[2][3][1], 13))), g_117)) , (-8L)) || l_195) , l_196[5]))) == 248UL)) >= (*p_72)) > 0x877578BEDB77992ELL), 13)), (-1L))) > 8L)) | g_132.f0) != 4294967287UL) | l_173[0][3][2])) < 0L))), 1)), 4)), 0x0D5247F44F2EDFF1LL)), l_201));
                    --g_205;
                }
                return g_132;
            }
        }
        if ((*p_73))
            continue;
        (*p_73) &= (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((l_212 , (l_213 != &g_6)), ((safe_mul_func_int16_t_s_s(((*l_216) &= 0xE17AL), ((*l_217) &= ((*g_6) < (**l_213))))) , (((l_158[0] <= (-6L)) == l_136.f0) >= g_191)))), (**l_213)));
        (*p_73) = ((void*)0 == &g_13);
    }
    (*p_73) = (18446744073709551615UL ^ ((void*)0 == g_219));
    l_232--;
    g_13 = &g_222;
    return g_132;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_14[i][j][k], "g_14[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    transparent_crc(g_122.f2, "g_122.f2", print_hash_value);
    transparent_crc(g_122.f3, "g_122.f3", print_hash_value);
    transparent_crc(g_122.f4, "g_122.f4", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_142[i][j][k], "g_142[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_218[i], "g_218[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_320.f0, "g_320.f0", print_hash_value);
    transparent_crc(g_320.f2, "g_320.f2", print_hash_value);
    transparent_crc(g_320.f3, "g_320.f3", print_hash_value);
    transparent_crc(g_320.f4, "g_320.f4", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_389.f0, "g_389.f0", print_hash_value);
    transparent_crc(g_389.f1, "g_389.f1", print_hash_value);
    transparent_crc(g_389.f2, "g_389.f2", print_hash_value);
    transparent_crc(g_389.f3, "g_389.f3", print_hash_value);
    transparent_crc(g_389.f4, "g_389.f4", print_hash_value);
    transparent_crc(g_389.f5, "g_389.f5", print_hash_value);
    transparent_crc(g_389.f6, "g_389.f6", print_hash_value);
    transparent_crc(g_389.f7, "g_389.f7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_392[i].f0, "g_392[i].f0", print_hash_value);
        transparent_crc(g_392[i].f1, "g_392[i].f1", print_hash_value);
        transparent_crc(g_392[i].f2, "g_392[i].f2", print_hash_value);
        transparent_crc(g_392[i].f3, "g_392[i].f3", print_hash_value);
        transparent_crc(g_392[i].f4, "g_392[i].f4", print_hash_value);
        transparent_crc(g_392[i].f5, "g_392[i].f5", print_hash_value);
        transparent_crc(g_392[i].f6, "g_392[i].f6", print_hash_value);
        transparent_crc(g_392[i].f7, "g_392[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_397.f0, "g_397.f0", print_hash_value);
    transparent_crc(g_397.f1, "g_397.f1", print_hash_value);
    transparent_crc(g_397.f2, "g_397.f2", print_hash_value);
    transparent_crc(g_444.f0, "g_444.f0", print_hash_value);
    transparent_crc(g_444.f2, "g_444.f2", print_hash_value);
    transparent_crc(g_444.f3, "g_444.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_460[i].f0, "g_460[i].f0", print_hash_value);
        transparent_crc(g_460[i].f1, "g_460[i].f1", print_hash_value);
        transparent_crc(g_460[i].f2, "g_460[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_571, "g_571", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_652[i], "g_652[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_658.f1, "g_658.f1", print_hash_value);
    transparent_crc(g_658.f2, "g_658.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_728[i][j], "g_728[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_801[i], "g_801[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_835.f0, "g_835.f0", print_hash_value);
    transparent_crc(g_835.f2, "g_835.f2", print_hash_value);
    transparent_crc(g_835.f3, "g_835.f3", print_hash_value);
    transparent_crc(g_838.f0, "g_838.f0", print_hash_value);
    transparent_crc(g_838.f1, "g_838.f1", print_hash_value);
    transparent_crc(g_838.f2, "g_838.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1007[i], "g_1007[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1040[i], "g_1040[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1228.f0, "g_1228.f0", print_hash_value);
    transparent_crc(g_1335.f0, "g_1335.f0", print_hash_value);
    transparent_crc(g_1335.f1, "g_1335.f1", print_hash_value);
    transparent_crc(g_1335.f2, "g_1335.f2", print_hash_value);
    transparent_crc(g_1337.f0, "g_1337.f0", print_hash_value);
    transparent_crc(g_1337.f1, "g_1337.f1", print_hash_value);
    transparent_crc(g_1337.f2, "g_1337.f2", print_hash_value);
    transparent_crc(g_1389, "g_1389", print_hash_value);
    transparent_crc(g_1452, "g_1452", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1495[i][j][k], "g_1495[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1540.f0, "g_1540.f0", print_hash_value);
    transparent_crc(g_1540.f2, "g_1540.f2", print_hash_value);
    transparent_crc(g_1540.f3, "g_1540.f3", print_hash_value);
    transparent_crc(g_1584, "g_1584", print_hash_value);
    transparent_crc(g_1587, "g_1587", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1789[i][j][k], "g_1789[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1892, "g_1892", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
